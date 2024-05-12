// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewItemDraw___cctor(const MethodInfo *method)
{
  int v1; // s3
  float v2; // s4
  float v3; // s5
  float v4; // s6
  float v5; // s0
  QuestBoardListViewItemDraw_c *v6; // x8
  int v7; // s1
  int v8; // s2
  float v9; // s4
  float v10; // s5
  float v11; // s6
  QuestBoardListViewItemDraw_c *v12; // x8
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v14; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v15; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v16; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v17; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v18; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v19; // x0
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct QuestBoardListViewItemDraw_StaticFields *v27; // x0
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  QuestBoardListViewItemDraw_c *v35; // x8
  struct QuestBoardListViewItemDraw_StaticFields *v36; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v37; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v38; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v39; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v40; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v41; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v42; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v43; // x9
  System_Int32_array **v44; // x1
  BattleServantConfConponent_o *p_COST_BG_ITEM; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x1
  BattleServantConfConponent_o *p_COST_BG_QP; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  QuestBoardListViewItemDraw_c *v60; // x8
  struct QuestBoardListViewItemDraw_StaticFields *v61; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v62; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v63; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v64; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v65; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v66; // x9
  System_Int32_array **v67; // x1
  BattleServantConfConponent_o *p_SHOHI_SP_NAME; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Int32_array **v75; // x1
  BattleServantConfConponent_o *p_SHOHI_SP_NAME_WAR_BOARD; // x0
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Int32_array **v83; // x1
  BattleServantConfConponent_o *p_QUEST_BOARD_COSTNAME; // x0
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  QuestBoardListViewItemDraw_c *v91; // x8
  QuestBoardListViewItemDraw_c *v92; // x8
  struct QuestBoardListViewItemDraw_StaticFields *v93; // x8
  QuestBoardListViewItemDraw_c *v94; // x8
  struct QuestBoardListViewItemDraw_StaticFields *v95; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v96; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v97; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v98; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v99; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v100; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v101; // x8
  QuestBoardListViewItemDraw_c *v102; // x8
  struct QuestBoardListViewItemDraw_StaticFields *v103; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v104; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v105; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v106; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v107; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v108; // x9
  System_Int32_array **v109; // x1
  BattleServantConfConponent_o *p_EVENT_WAR_SPNAME_PREFIX; // x0
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  System_Int32_array **v117; // x1
  BattleServantConfConponent_o *p_EVENT_WAR_SUBFOLDER_SPNAME_PREFIX; // x0
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  System_Int32_array **v125; // x1
  BattleServantConfConponent_o *p_QUEST_BOARD_SPNAME_PREFIX; // x0
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  System_Int32_array **v133; // x1
  BattleServantConfConponent_o *p_RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX; // x0
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  System_Int32_array **v141; // x1
  BattleServantConfConponent_o *p_QUEST_BOARD_ICON_SPNAME_PREFIX; // x0
  System_String_array **v143; // x2
  System_String_array **v144; // x3
  System_Boolean_array **v145; // x4
  System_Int32_array **v146; // x5
  System_Int32_array *v147; // x6
  System_Int32_array *v148; // x7
  System_Int32_array **v149; // x1
  BattleServantConfConponent_o *p_QUEST_BOARD_MASK_SPNAME_PREFIX; // x0
  System_String_array **v151; // x2
  System_String_array **v152; // x3
  System_Boolean_array **v153; // x4
  System_Int32_array **v154; // x5
  System_Int32_array *v155; // x6
  System_Int32_array *v156; // x7
  System_Int32_array **v157; // x1
  BattleServantConfConponent_o *p_QUEST_BOARD_SHOHI_SPNAME_PREFIX; // x0
  System_String_array **v159; // x2
  System_String_array **v160; // x3
  System_Boolean_array **v161; // x4
  System_Int32_array **v162; // x5
  System_Int32_array *v163; // x6
  System_Int32_array *v164; // x7
  System_Int32_array **v165; // x1
  BattleServantConfConponent_o *p_QUEST_BOARD_AP_SPNAME_PREFIX; // x0
  System_String_array **v167; // x2
  System_String_array **v168; // x3
  System_Boolean_array **v169; // x4
  System_Int32_array **v170; // x5
  System_Int32_array *v171; // x6
  System_Int32_array *v172; // x7
  System_Int32_array **v173; // x1
  BattleServantConfConponent_o *p_QUEST_BOARD_INFO_FRAME_NAME; // x0
  System_String_array **v175; // x2
  System_String_array **v176; // x3
  System_Boolean_array **v177; // x4
  System_Int32_array **v178; // x5
  System_Int32_array *v179; // x6
  System_Int32_array *v180; // x7
  System_Int32_array **v181; // x1
  BattleServantConfConponent_o *p_QUEST_BOARD_DAMAGE_RECODE_NAME; // x0
  System_String_array **v183; // x2
  System_String_array **v184; // x3
  System_Boolean_array **v185; // x4
  System_Int32_array **v186; // x5
  System_Int32_array *v187; // x6
  System_Int32_array *v188; // x7
  System_Int32_array **v189; // x1
  BattleServantConfConponent_o *p_QUEST_BOARD_PREV_ICON_NAME; // x0
  System_String_array **v191; // x2
  System_String_array **v192; // x3
  System_Boolean_array **v193; // x4
  System_Int32_array **v194; // x5
  System_Int32_array *v195; // x6
  System_Int32_array *v196; // x7
  System_Int32_array **v197; // x1
  BattleServantConfConponent_o *p_QUEST_BOARD_KNOCKDOWN_RECODE_NAME; // x0
  System_String_array **v199; // x2
  System_String_array **v200; // x3
  System_Boolean_array **v201; // x4
  System_Int32_array **v202; // x5
  System_Int32_array *v203; // x6
  System_Int32_array *v204; // x7
  System_Int32_array **v205; // x1
  BattleServantConfConponent_o *p_QUEST_BOARD_ICON_TEXTURE_PATH; // x0
  System_String_array **v207; // x2
  System_String_array **v208; // x3
  System_Boolean_array **v209; // x4
  System_Int32_array **v210; // x5
  System_Int32_array *v211; // x6
  System_Int32_array *v212; // x7
  System_Int32_array **v213; // x1
  BattleServantConfConponent_o *p_QUEST_BOARD_ICON_TEXTURE_PREFIX; // x0
  System_String_array **v215; // x2
  System_String_array **v216; // x3
  System_Boolean_array **v217; // x4
  System_Int32_array **v218; // x5
  System_Int32_array *v219; // x6
  System_Int32_array *v220; // x7
  System_Int32_array **v221; // x1
  BattleServantConfConponent_o *p_QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX; // x0
  System_String_array **v223; // x2
  System_String_array **v224; // x3
  System_Boolean_array **v225; // x4
  System_Int32_array **v226; // x5
  System_Int32_array *v227; // x6
  System_Int32_array *v228; // x7
  QuestBoardListViewItemDraw_c *v229; // x8
  System_Int32_array **v230; // x1
  BattleServantConfConponent_o *p_BANNER_POINT_SPNAME_ON; // x0
  System_String_array **v232; // x2
  System_String_array **v233; // x3
  System_Boolean_array **v234; // x4
  System_Int32_array **v235; // x5
  System_Int32_array *v236; // x6
  System_Int32_array *v237; // x7
  System_Int32_array **v238; // x1
  BattleServantConfConponent_o *p_BANNER_POINT_SPNAME_OFF; // x0
  System_String_array **v240; // x2
  System_String_array **v241; // x3
  System_Boolean_array **v242; // x4
  System_Int32_array **v243; // x5
  System_Int32_array *v244; // x6
  System_Int32_array *v245; // x7
  QuestBoardListViewItemDraw_c *v246; // x8
  System_Int32_array **v247; // x1
  BattleServantConfConponent_o *p_SHORTCUT_FACE_MASK_SPNAME; // x0
  System_String_array **v249; // x2
  System_String_array **v250; // x3
  System_Boolean_array **v251; // x4
  System_Int32_array **v252; // x5
  System_Int32_array *v253; // x6
  System_Int32_array *v254; // x7
  System_Int32_array **v255; // x1
  BattleServantConfConponent_o *p_QUEST_STORY_FACE_MASK_SPNAME; // x0
  System_String_array **v257; // x2
  System_String_array **v258; // x3
  System_Boolean_array **v259; // x4
  System_Int32_array **v260; // x5
  System_Int32_array *v261; // x6
  System_Int32_array *v262; // x7
  System_Int32_array **v263; // x1
  BattleServantConfConponent_o *p_QUEST_MAIN_FACE_MASK_SPNAME; // x0
  System_String_array **v265; // x2
  System_String_array **v266; // x3
  System_Boolean_array **v267; // x4
  System_Int32_array **v268; // x5
  System_Int32_array *v269; // x6
  System_Int32_array *v270; // x7
  System_Int32_array **v271; // x1
  BattleServantConfConponent_o *p_QUEST_EVENT_FACE_MASK_SPNAME; // x0
  System_String_array **v273; // x2
  System_String_array **v274; // x3
  System_Boolean_array **v275; // x4
  System_Int32_array **v276; // x5
  System_Int32_array *v277; // x6
  System_Int32_array *v278; // x7
  __int64 v279; // x0
  __int64 v280; // x1
  System_String_array **v281; // x2
  System_String_array **v282; // x3
  System_Boolean_array **v283; // x4
  System_Int32_array **v284; // x5
  System_Int32_array *v285; // x6
  System_Int32_array *v286; // x7
  System_Int32_array **v287; // x19
  void *v288; // x0
  System_Int32_array **v289; // x1
  System_String_array **v290; // x2
  System_String_array **v291; // x3
  System_Boolean_array **v292; // x4
  System_Int32_array **v293; // x5
  System_Int32_array *v294; // x6
  System_Int32_array *v295; // x7
  System_Int32_array **v296; // x1
  BattleServantConfConponent_o *p_RP_SPNAME_FRAME; // x0
  System_String_array **v298; // x2
  System_String_array **v299; // x3
  System_Boolean_array **v300; // x4
  System_Int32_array **v301; // x5
  System_Int32_array *v302; // x6
  System_Int32_array *v303; // x7
  System_String_array **v304; // x2
  System_String_array **v305; // x3
  System_Boolean_array **v306; // x4
  System_Int32_array **v307; // x5
  System_Int32_array *v308; // x6
  System_Int32_array *v309; // x7
  System_Int32_array **v310; // x19
  System_Int32_array **v311; // x1
  System_String_array **v312; // x2
  System_String_array **v313; // x3
  System_Boolean_array **v314; // x4
  System_Int32_array **v315; // x5
  System_Int32_array *v316; // x6
  System_Int32_array *v317; // x7
  System_Int32_array **v318; // x1
  BattleServantConfConponent_o *p_RP_SPNAME_POINT; // x0
  System_String_array **v320; // x2
  System_String_array **v321; // x3
  System_Boolean_array **v322; // x4
  System_Int32_array **v323; // x5
  System_Int32_array *v324; // x6
  System_Int32_array *v325; // x7
  QuestBoardListViewItemDraw_c *v326; // x8
  struct QuestBoardListViewItemDraw_StaticFields *v327; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v328; // x9
  System_Int32_array **v329; // x1
  BattleServantConfConponent_o *p_QUEST_BOARD_PREV_PAUSE_ICON_NAME; // x0
  System_String_array **v331; // x2
  System_String_array **v332; // x3
  System_Boolean_array **v333; // x4
  System_Int32_array **v334; // x5
  System_Int32_array *v335; // x6
  System_Int32_array *v336; // x7
  System_Int32_array **v337; // x1
  BattleServantConfConponent_o *p_QBOARD_CAP_CLOSED; // x0
  System_String_array **v339; // x2
  System_String_array **v340; // x3
  System_Boolean_array **v341; // x4
  System_Int32_array **v342; // x5
  System_Int32_array *v343; // x6
  System_Int32_array *v344; // x7
  System_Int32_array **v345; // x1
  BattleServantConfConponent_o *p_QBOARD_CAP_CLOSED_SPECIAL_FORMAT; // x0
  System_String_array **v347; // x2
  System_String_array **v348; // x3
  System_Boolean_array **v349; // x4
  System_Int32_array **v350; // x5
  System_Int32_array *v351; // x6
  System_Int32_array *v352; // x7
  System_Int32_array **v353; // x1
  BattleServantConfConponent_o *p_QBOARD_CAP_CLOSED_SPECIAL; // x0
  System_String_array **v355; // x2
  System_String_array **v356; // x3
  System_Boolean_array **v357; // x4
  System_Int32_array **v358; // x5
  System_Int32_array *v359; // x6
  System_Int32_array *v360; // x7
  System_Int32_array **v361; // x1
  BattleServantConfConponent_o *p_QBOARD_CAP_CLOSED_SPECIAL_2; // x0
  System_String_array **v363; // x2
  System_String_array **v364; // x3
  System_Boolean_array **v365; // x4
  System_Int32_array **v366; // x5
  System_Int32_array *v367; // x6
  System_Int32_array *v368; // x7
  System_Int32_array **v369; // x1
  BattleServantConfConponent_o *p_QBOARD_CAP_CLOSED_SPECIAL_3; // x0
  System_String_array **v371; // x2
  System_String_array **v372; // x3
  System_Boolean_array **v373; // x4
  System_Int32_array **v374; // x5
  System_Int32_array *v375; // x6
  System_Int32_array *v376; // x7
  System_String_array **v377; // x2
  System_String_array **v378; // x3
  System_Boolean_array **v379; // x4
  System_Int32_array **v380; // x5
  System_Int32_array *v381; // x6
  System_Int32_array *v382; // x7
  System_Int32_array **v383; // x19
  System_Int32_array **v384; // x1
  System_String_array **v385; // x2
  System_String_array **v386; // x3
  System_Boolean_array **v387; // x4
  System_Int32_array **v388; // x5
  System_Int32_array *v389; // x6
  System_Int32_array *v390; // x7
  System_Int32_array **v391; // x1
  System_String_array **v392; // x2
  System_String_array **v393; // x3
  System_Boolean_array **v394; // x4
  System_Int32_array **v395; // x5
  System_Int32_array *v396; // x6
  System_Int32_array *v397; // x7
  System_Int32_array **v398; // x1
  System_String_array **v399; // x2
  System_String_array **v400; // x3
  System_Boolean_array **v401; // x4
  System_Int32_array **v402; // x5
  System_Int32_array *v403; // x6
  System_Int32_array *v404; // x7
  System_Int32_array **v405; // x1
  System_String_array **v406; // x2
  System_String_array **v407; // x3
  System_Boolean_array **v408; // x4
  System_Int32_array **v409; // x5
  System_Int32_array *v410; // x6
  System_Int32_array *v411; // x7
  System_Int32_array **v412; // x1
  System_String_array **v413; // x2
  System_String_array **v414; // x3
  System_Boolean_array **v415; // x4
  System_Int32_array **v416; // x5
  System_Int32_array *v417; // x6
  System_Int32_array *v418; // x7
  System_Int32_array **v419; // x1
  System_String_array **v420; // x2
  System_String_array **v421; // x3
  System_Boolean_array **v422; // x4
  System_Int32_array **v423; // x5
  System_Int32_array *v424; // x6
  System_Int32_array *v425; // x7
  System_Int32_array **v426; // x1
  BattleServantConfConponent_o *p_msQBoardL1Names; // x0
  System_String_array **v428; // x2
  System_String_array **v429; // x3
  System_Boolean_array **v430; // x4
  System_Int32_array **v431; // x5
  System_Int32_array *v432; // x6
  System_Int32_array *v433; // x7
  System_Int32_array **v434; // x1
  BattleServantConfConponent_o *p_msQBoardL2Name_Story; // x0
  System_String_array **v436; // x2
  System_String_array **v437; // x3
  System_Boolean_array **v438; // x4
  System_Int32_array **v439; // x5
  System_Int32_array *v440; // x6
  System_Int32_array *v441; // x7
  System_Int32_array **v442; // x1
  BattleServantConfConponent_o *p_msQBoardL2Name_Hero; // x0
  System_String_array **v444; // x2
  System_String_array **v445; // x3
  System_Boolean_array **v446; // x4
  System_Int32_array **v447; // x5
  System_Int32_array *v448; // x6
  System_Int32_array *v449; // x7
  System_String_array **v450; // x2
  System_String_array **v451; // x3
  System_Boolean_array **v452; // x4
  System_Int32_array **v453; // x5
  System_Int32_array *v454; // x6
  System_Int32_array *v455; // x7
  System_Int32_array **v456; // x19
  System_Int32_array **v457; // x1
  System_String_array **v458; // x2
  System_String_array **v459; // x3
  System_Boolean_array **v460; // x4
  System_Int32_array **v461; // x5
  System_Int32_array *v462; // x6
  System_Int32_array *v463; // x7
  System_Int32_array **v464; // x1
  System_String_array **v465; // x2
  System_String_array **v466; // x3
  System_Boolean_array **v467; // x4
  System_Int32_array **v468; // x5
  System_Int32_array *v469; // x6
  System_Int32_array *v470; // x7
  System_Int32_array **v471; // x1
  System_String_array **v472; // x2
  System_String_array **v473; // x3
  System_Boolean_array **v474; // x4
  System_Int32_array **v475; // x5
  System_Int32_array *v476; // x6
  System_Int32_array *v477; // x7
  System_Int32_array **v478; // x1
  System_String_array **v479; // x2
  System_String_array **v480; // x3
  System_Boolean_array **v481; // x4
  System_Int32_array **v482; // x5
  System_Int32_array *v483; // x6
  System_Int32_array *v484; // x7
  System_Int32_array **v485; // x1
  System_String_array **v486; // x2
  System_String_array **v487; // x3
  System_Boolean_array **v488; // x4
  System_Int32_array **v489; // x5
  System_Int32_array *v490; // x6
  System_Int32_array *v491; // x7
  System_Int32_array **v492; // x1
  System_String_array **v493; // x2
  System_String_array **v494; // x3
  System_Boolean_array **v495; // x4
  System_Int32_array **v496; // x5
  System_Int32_array *v497; // x6
  System_Int32_array *v498; // x7
  System_Int32_array **v499; // x1
  BattleServantConfConponent_o *p_msQBoardL3Names; // x0
  System_String_array **v501; // x2
  System_String_array **v502; // x3
  System_Boolean_array **v503; // x4
  System_Int32_array **v504; // x5
  System_Int32_array *v505; // x6
  System_Int32_array *v506; // x7
  System_String_array **v507; // x2
  System_String_array **v508; // x3
  System_Boolean_array **v509; // x4
  System_Int32_array **v510; // x5
  System_Int32_array *v511; // x6
  System_Int32_array *v512; // x7
  System_Int32_array **v513; // x19
  System_Int32_array **v514; // x1
  System_String_array **v515; // x2
  System_String_array **v516; // x3
  System_Boolean_array **v517; // x4
  System_Int32_array **v518; // x5
  System_Int32_array *v519; // x6
  System_Int32_array *v520; // x7
  System_Int32_array **v521; // x1
  System_String_array **v522; // x2
  System_String_array **v523; // x3
  System_Boolean_array **v524; // x4
  System_Int32_array **v525; // x5
  System_Int32_array *v526; // x6
  System_Int32_array *v527; // x7
  System_Int32_array **v528; // x1
  System_String_array **v529; // x2
  System_String_array **v530; // x3
  System_Boolean_array **v531; // x4
  System_Int32_array **v532; // x5
  System_Int32_array *v533; // x6
  System_Int32_array *v534; // x7
  System_Int32_array **v535; // x1
  System_String_array **v536; // x2
  System_String_array **v537; // x3
  System_Boolean_array **v538; // x4
  System_Int32_array **v539; // x5
  System_Int32_array *v540; // x6
  System_Int32_array *v541; // x7
  System_Int32_array **v542; // x1
  System_String_array **v543; // x2
  System_String_array **v544; // x3
  System_Boolean_array **v545; // x4
  System_Int32_array **v546; // x5
  System_Int32_array *v547; // x6
  System_Int32_array *v548; // x7
  System_Int32_array **v549; // x1
  System_String_array **v550; // x2
  System_String_array **v551; // x3
  System_Boolean_array **v552; // x4
  System_Int32_array **v553; // x5
  System_Int32_array *v554; // x6
  System_Int32_array *v555; // x7
  System_Int32_array **v556; // x1
  BattleServantConfConponent_o *p_msLabelMainSprNames; // x0
  System_String_array **v558; // x2
  System_String_array **v559; // x3
  System_Boolean_array **v560; // x4
  System_Int32_array **v561; // x5
  System_Int32_array *v562; // x6
  System_Int32_array *v563; // x7
  System_String_array **v564; // x2
  System_String_array **v565; // x3
  System_Boolean_array **v566; // x4
  System_Int32_array **v567; // x5
  System_Int32_array *v568; // x6
  System_Int32_array *v569; // x7
  System_Int32_array **v570; // x19
  System_Int32_array **v571; // x1
  System_String_array **v572; // x2
  System_String_array **v573; // x3
  System_Boolean_array **v574; // x4
  System_Int32_array **v575; // x5
  System_Int32_array *v576; // x6
  System_Int32_array *v577; // x7
  System_Int32_array **v578; // x1
  System_String_array **v579; // x2
  System_String_array **v580; // x3
  System_Boolean_array **v581; // x4
  System_Int32_array **v582; // x5
  System_Int32_array *v583; // x6
  System_Int32_array *v584; // x7
  System_Int32_array **v585; // x1
  System_String_array **v586; // x2
  System_String_array **v587; // x3
  System_Boolean_array **v588; // x4
  System_Int32_array **v589; // x5
  System_Int32_array *v590; // x6
  System_Int32_array *v591; // x7
  System_Int32_array **v592; // x1
  System_String_array **v593; // x2
  System_String_array **v594; // x3
  System_Boolean_array **v595; // x4
  System_Int32_array **v596; // x5
  System_Int32_array *v597; // x6
  System_Int32_array *v598; // x7
  System_Int32_array **v599; // x1
  System_String_array **v600; // x2
  System_String_array **v601; // x3
  System_Boolean_array **v602; // x4
  System_Int32_array **v603; // x5
  System_Int32_array *v604; // x6
  System_Int32_array *v605; // x7
  System_Int32_array **v606; // x1
  System_String_array **v607; // x2
  System_String_array **v608; // x3
  System_Boolean_array **v609; // x4
  System_Int32_array **v610; // x5
  System_Int32_array *v611; // x6
  System_Int32_array *v612; // x7
  System_Int32_array **v613; // x1
  System_String_array **v614; // x2
  System_String_array **v615; // x3
  System_Boolean_array **v616; // x4
  System_Int32_array **v617; // x5
  System_Int32_array *v618; // x6
  System_Int32_array *v619; // x7
  System_Int32_array **v620; // x1
  BattleServantConfConponent_o *p_QuestBoardApSpNames; // x0
  System_String_array **v622; // x2
  System_String_array **v623; // x3
  System_Boolean_array **v624; // x4
  System_Int32_array **v625; // x5
  System_Int32_array *v626; // x6
  System_Int32_array *v627; // x7
  System_Int32_array **v628; // x1
  BattleServantConfConponent_o *p_msPhaseSprName_ArrowOff; // x0
  System_String_array **v630; // x2
  System_String_array **v631; // x3
  System_Boolean_array **v632; // x4
  System_Int32_array **v633; // x5
  System_Int32_array *v634; // x6
  System_Int32_array *v635; // x7
  System_Int32_array **v636; // x1
  BattleServantConfConponent_o *p_msPhaseSprName_ArrowOn; // x0
  System_String_array **v638; // x2
  System_String_array **v639; // x3
  System_Boolean_array **v640; // x4
  System_Int32_array **v641; // x5
  System_Int32_array *v642; // x6
  System_Int32_array *v643; // x7
  System_Int32_array **v644; // x1
  BattleServantConfConponent_o *p_msPhaseSprName_ExArrowOff; // x0
  System_String_array **v646; // x2
  System_String_array **v647; // x3
  System_Boolean_array **v648; // x4
  System_Int32_array **v649; // x5
  System_Int32_array *v650; // x6
  System_Int32_array *v651; // x7
  System_Int32_array **v652; // x1
  BattleServantConfConponent_o *p_msPhaseSprName_ExArrowOn; // x0
  System_String_array **v654; // x2
  System_String_array **v655; // x3
  System_Boolean_array **v656; // x4
  System_Int32_array **v657; // x5
  System_Int32_array *v658; // x6
  System_Int32_array *v659; // x7
  System_Int32_array **v660; // x1
  BattleServantConfConponent_o *p_msPhaseSprName_LoopOff; // x0
  System_String_array **v662; // x2
  System_String_array **v663; // x3
  System_Boolean_array **v664; // x4
  System_Int32_array **v665; // x5
  System_Int32_array *v666; // x6
  System_Int32_array *v667; // x7
  System_Int32_array **v668; // x1
  BattleServantConfConponent_o *p_msPhaseSprName_LoopOn; // x0
  System_String_array **v670; // x2
  System_String_array **v671; // x3
  System_Boolean_array **v672; // x4
  System_Int32_array **v673; // x5
  System_Int32_array *v674; // x6
  System_Int32_array *v675; // x7
  System_Int32_array **v676; // x1
  BattleServantConfConponent_o *p_msPhaseSprName_LoopFirstOff; // x0
  System_String_array **v678; // x2
  System_String_array **v679; // x3
  System_Boolean_array **v680; // x4
  System_Int32_array **v681; // x5
  System_Int32_array *v682; // x6
  System_Int32_array *v683; // x7
  System_Int32_array **v684; // x1
  BattleServantConfConponent_o *p_CHAPTER_SP_BASE_NAME; // x0
  System_String_array **v686; // x2
  System_String_array **v687; // x3
  System_Boolean_array **v688; // x4
  System_Int32_array **v689; // x5
  System_Int32_array *v690; // x6
  System_Int32_array *v691; // x7
  System_Int32_array **v692; // x1
  BattleServantConfConponent_o *p_CHAPTER_SP_UNIT_NAME; // x0
  System_String_array **v694; // x2
  System_String_array **v695; // x3
  System_Boolean_array **v696; // x4
  System_Int32_array **v697; // x5
  System_Int32_array *v698; // x6
  System_Int32_array *v699; // x7
  System_Int32_array **v700; // x1
  BattleServantConfConponent_o *p_PRE_BATTLE_ORGANIZATION; // x0
  System_String_array **v702; // x2
  System_String_array **v703; // x3
  System_Boolean_array **v704; // x4
  System_Int32_array **v705; // x5
  System_Int32_array *v706; // x6
  System_Int32_array *v707; // x7
  __int64 v708; // x0
  __int64 v709; // x0
  struct UnityEngine_Color_o v710; // [xsp+0h] [xbp-50h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-40h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v713; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v715; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_438C82C & 1) == 0 )
  {
    sub_B775C4(&QuestBoardListViewItemDraw_TypeInfo);
    sub_B775C4(&string___TypeInfo);
    sub_B775C4(&StringLiteral_22076/*"quest_board_icon_"*/);
    sub_B775C4(&StringLiteral_19751/*"icon_reward_step{0}"*/);
    sub_B775C4(&StringLiteral_22087/*"questboard_cap_closed"*/);
    sub_B775C4(&StringLiteral_20029/*"img_slider_on"*/);
    sub_B775C4(&StringLiteral_19920/*"img_loop_off"*/);
    sub_B775C4(&StringLiteral_19980/*"img_questboard_story01"*/);
    sub_B775C4(&StringLiteral_22097/*"questboard_shohi_bg_01"*/);
    sub_B775C4(&StringLiteral_22084/*"questboard_ap_free"*/);
    sub_B775C4(&StringLiteral_22095/*"questboard_icon_cap{0:D2}"*/);
    sub_B775C4(&StringLiteral_19984/*"img_questboard_story03mask"*/);
    sub_B775C4(&StringLiteral_19963/*"img_quest_spend"*/);
    sub_B775C4(&StringLiteral_19968/*"img_questarrow_off"*/);
    sub_B775C4(&StringLiteral_17611/*"chaldea_category_{0}"*/);
    sub_B775C4(&StringLiteral_19982/*"img_questboard_story02mask"*/);
    sub_B775C4(&StringLiteral_19969/*"img_questarrow_on"*/);
    sub_B775C4(&StringLiteral_19979/*"img_questboard_main_"*/);
    sub_B775C4(&StringLiteral_19961/*"img_quest_pre_organization"*/);
    sub_B775C4(&StringLiteral_19962/*"img_quest_save"*/);
    sub_B775C4(&StringLiteral_18988/*"event_war_"*/);
    sub_B775C4(&StringLiteral_22085/*"questboard_ap_main"*/);
    sub_B775C4(&StringLiteral_19986/*"img_questboard_story05mask"*/);
    sub_B775C4(&StringLiteral_22098/*"questboard_shohi_bg_02"*/);
    sub_B775C4(&StringLiteral_19977/*"img_questboard_hero03"*/);
    sub_B775C4(&StringLiteral_22090/*"questboard_cap_closed_special_3"*/);
    sub_B775C4(&StringLiteral_19978/*"img_questboard_knockdown"*/);
    sub_B775C4(&StringLiteral_22149/*"raid_point_old"*/);
    sub_B775C4(&StringLiteral_22146/*"raid_point"*/);
    sub_B775C4(&StringLiteral_22089/*"questboard_cap_closed_special_2"*/);
    sub_B775C4(&StringLiteral_19976/*"img_questboard_hero02"*/);
    sub_B775C4(&StringLiteral_19763/*"icon_spot_next"*/);
    sub_B775C4(&StringLiteral_22075/*"quest_board_"*/);
    sub_B775C4(&StringLiteral_22096/*"questboard_shohi_"*/);
    sub_B775C4(&StringLiteral_22147/*"raid_point_frame"*/);
    sub_B775C4(&StringLiteral_19974/*"img_questboard_free_"*/);
    sub_B775C4(&StringLiteral_22148/*"raid_point_frame_old"*/);
    sub_B775C4(&StringLiteral_19972/*"img_questboard_damage"*/);
    sub_B775C4(&StringLiteral_17515/*"caldeagate_notice_{0:00}"*/);
    sub_B775C4(&StringLiteral_22077/*"quest_board_mask_"*/);
    sub_B775C4(&StringLiteral_6357/*"EventUI/QuestBoardIcon/"*/);
    sub_B775C4(&StringLiteral_19973/*"img_questboard_event{0:D3}"*/);
    sub_B775C4(&StringLiteral_19985/*"img_questboard_story04mask"*/);
    sub_B775C4(&StringLiteral_19988/*"img_questloop_on"*/);
    sub_B775C4(&StringLiteral_19987/*"img_questloop_off"*/);
    sub_B775C4(&StringLiteral_19991/*"img_questtxt_free"*/);
    sub_B775C4(&StringLiteral_22092/*"questboard_cap{0:D3}"*/);
    sub_B775C4(&StringLiteral_19983/*"img_questboard_story03"*/);
    sub_B775C4(&StringLiteral_19970/*"img_questboard_"*/);
    sub_B775C4(&StringLiteral_19965/*"img_quest_unit_{0:D2}"*/);
    sub_B775C4(&StringLiteral_22088/*"questboard_cap_closed_special"*/);
    sub_B775C4(&StringLiteral_19990/*"img_questtxt_event"*/);
    sub_B775C4(&StringLiteral_19975/*"img_questboard_hero01"*/);
    sub_B775C4(&StringLiteral_19966/*"img_questarrow1_off"*/);
    sub_B775C4(&StringLiteral_22086/*"questboard_ap_story"*/);
    sub_B775C4(&StringLiteral_20028/*"img_slider_off"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_19964/*"img_quest_spend2"*/);
    sub_B775C4(&StringLiteral_19960/*"img_quest_lasttime"*/);
    sub_B775C4(&StringLiteral_19967/*"img_questarrow1_on"*/);
    sub_B775C4(&StringLiteral_19981/*"img_questboard_story02"*/);
    sub_B775C4(&StringLiteral_22118/*"qyestboard_ap_free"*/);
    sub_B775C4(&StringLiteral_19762/*"icon_spot_free"*/);
    sub_B775C4(&StringLiteral_22083/*"questboard_ap_"*/);
    sub_B775C4(&StringLiteral_22091/*"questboard_cap_closed_{0}"*/);
    byte_438C82C = 1;
  }
  v5 = 1.0;
  QuestBoardListViewItemDraw_TypeInfo->static_fields->POS_Y_ITVL_AREA = 135;
  QuestBoardListViewItemDraw_TypeInfo->static_fields->POS_Y_ITVL_SHORTCUT = 150;
  v6 = QuestBoardListViewItemDraw_TypeInfo;
  QuestBoardListViewItemDraw_TypeInfo->static_fields->POS_Y_ITVL_QUEST = 150;
  v6->static_fields->CLIP_W_DEFAULT = 600;
  v6->static_fields->CLIP_W_AREA = 490;
  v6->static_fields->CLIP_RANGE_MARGIN = 200;
  v6->static_fields->SCRL_OBJ_DUMMY_NUM = 4;
  v6->static_fields->PHASE_NORMAL_MAX = 7;
  v6->static_fields->PHASE_EXTRA_MAX = 9;
  v6->static_fields->TITLE_LABEL_BASE_WIDTH = 256;
  v6->static_fields->ADVANCE_NOTICE_BASE_WIDTH = 416;
  v6->static_fields->ADVANCE_NOTICE_BASE_HEIGHT = 90;
  v6->static_fields->ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT = 36;
  v6->static_fields->ADVANCE_NOTICE_BASE_LEFT_ALIGNMENT_POS_X = -208.0;
  v7 = 1061274050;
  v8 = 1047589105;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Color___ctor_41410832(*(UnityEngine_Color_o *)(&v1 - 3), v2, v3, v4, &methoda);
  v715.fields.g = 0.0;
  v715.fields.b = 0.0;
  QuestBoardListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_COST_COLOR = *(struct UnityEngine_Color_o *)&methoda.methodPointer;
  v715.fields.r = 0.90196;
  v710 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor_41410832(v715, v9, v10, v11, (const MethodInfo *)&v710);
  v12 = QuestBoardListViewItemDraw_TypeInfo;
  QuestBoardListViewItemDraw_TypeInfo->static_fields->OVER_COST_COLOR = v710;
  static_fields = v12->static_fields;
  *(_QWORD *)&static_fields->NEW_POS_AREA.fields.x = 0x41D80000C3420000LL;
  static_fields->NEW_POS_AREA.fields.z = 0.0;
  v14 = v12->static_fields;
  *(_QWORD *)&v14->NEW_POS_SHORTCUT.fields.x = 0x423C0000C3530000LL;
  v14->NEW_POS_SHORTCUT.fields.z = 0.0;
  v15 = v12->static_fields;
  *(_QWORD *)&v15->NEW_POS_QUEST.fields.x = 0x423C0000C3530000LL;
  v15->NEW_POS_QUEST.fields.z = 0.0;
  v16 = v12->static_fields;
  *(_QWORD *)&v16->NEW_POS_QUEST_NEXT.fields.x = 0x42640000C2D20000LL;
  v16->NEW_POS_QUEST_NEXT.fields.z = 0.0;
  v12->static_fields->NEW_W_DEFAULT = 110;
  v12->static_fields->NEW_H_DEFAULT = 25;
  v12->static_fields->NEW_W_AREA = 79;
  v12->static_fields->NEW_H_AREA = 18;
  v17 = v12->static_fields;
  *(_QWORD *)&v17->CLEAR_POS_AREA.fields.x = 0xC23C0000431B0000LL;
  v17->CLEAR_POS_AREA.fields.z = 0.0;
  v18 = v12->static_fields;
  *(_QWORD *)&v18->CLEAR_POS_QUEST.fields.x = 0xC25C0000C3370000LL;
  v18->CLEAR_POS_QUEST.fields.z = 0.0;
  v12->static_fields->NEXT_POS_X_AREA_L = -130.0;
  v12->static_fields->NEXT_POS_X_AREA_R = 137.0;
  v12->static_fields->NEXT_POS_X_AREA_CENTER = -3.0;
  v12->static_fields->NEXT_POS_X_QUEST = -185.0;
  v19 = v12->static_fields;
  v20 = (System_Int32_array **)StringLiteral_19763/*"icon_spot_next"*/;
  v19->NEXT_ICON_SPRITE_NAME = (struct System_String_o *)StringLiteral_19763/*"icon_spot_next"*/;
  sub_B77560((BattleServantConfConponent_o *)&v19->NEXT_ICON_SPRITE_NAME, v20, v21, v22, v23, v24, v25, v26);
  v27 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  v28 = (System_Int32_array **)StringLiteral_19762/*"icon_spot_free"*/;
  v27->FREE_ICON_SPRITE_NAME = (struct System_String_o *)StringLiteral_19762/*"icon_spot_free"*/;
  sub_B77560((BattleServantConfConponent_o *)&v27->FREE_ICON_SPRITE_NAME, v28, v29, v30, v31, v32, v33, v34);
  v35 = QuestBoardListViewItemDraw_TypeInfo;
  v36 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  *(_QWORD *)&v36->PREV_POS_QUEST_PREV.fields.x = 0x42300000C35C0000LL;
  v36->PREV_POS_QUEST_PREV.fields.z = 0.0;
  v37 = v35->static_fields;
  *(_QWORD *)&v37->PREV_POS_QUEST_PREV_NEXT.fields.x = 0x426C0000C2DC0000LL;
  v37->PREV_POS_QUEST_PREV_NEXT.fields.z = 0.0;
  v38 = v35->static_fields;
  *(_QWORD *)&v38->PREV_POS_QUEST_INTERRUPT.fields.x = 0x42300000C3520000LL;
  v38->PREV_POS_QUEST_INTERRUPT.fields.z = 0.0;
  v39 = v35->static_fields;
  *(_QWORD *)&v39->PREV_POS_QUEST_INTERRUPT_NEXT.fields.x = 0x426C0000C2C80000LL;
  v39->PREV_POS_QUEST_INTERRUPT_NEXT.fields.z = 0.0;
  v40 = v35->static_fields;
  *(_QWORD *)&v40->LINE_ST_POS_AREA.fields.x = 0xC0A00000C3570000LL;
  v40->LINE_ST_POS_AREA.fields.z = 0.0;
  v41 = v35->static_fields;
  *(_QWORD *)&v41->LINE_ST_POS_SHORTCUT.fields.x = 0xC0A00000C3700000LL;
  v41->LINE_ST_POS_SHORTCUT.fields.z = 0.0;
  v42 = v35->static_fields;
  *(_QWORD *)&v42->COST_OBJ_POS.fields.x = 0xC1C00000C2F00000LL;
  v42->COST_OBJ_POS.fields.z = 0.0;
  v43 = v35->static_fields;
  *(_QWORD *)&v43->COST_OBJ_POS_WAR_BOARD.fields.x = 0xC1E00000C2F20000LL;
  v43->COST_OBJ_POS_WAR_BOARD.fields.z = 0.0;
  v35->static_fields->COST_BG_WIDTH_SINGLE = 104;
  v35->static_fields->COST_BG_WIDTH_DOUBLE = 180;
  v35->static_fields->COST_BG_WIDTH_TLIPLE_FOR_ALL_ITEM = 193;
  v35->static_fields->COST_BG_WIDTH_WAR_BOARD = 69;
  v35->static_fields->COST_BG_WIDTH_DOUBLE_QP = 186;
  v44 = (System_Int32_array **)StringLiteral_22097/*"questboard_shohi_bg_01"*/;
  p_COST_BG_ITEM = (BattleServantConfConponent_o *)&v35->static_fields->COST_BG_ITEM;
  p_COST_BG_ITEM->klass = (BattleServantConfConponent_c *)StringLiteral_22097/*"questboard_shohi_bg_01"*/;
  sub_B77560(p_COST_BG_ITEM, v44, v46, v47, v48, v49, v50, v51);
  v52 = (System_Int32_array **)StringLiteral_22098/*"questboard_shohi_bg_02"*/;
  p_COST_BG_QP = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_QP;
  p_COST_BG_QP->klass = (BattleServantConfConponent_c *)StringLiteral_22098/*"questboard_shohi_bg_02"*/;
  sub_B77560(p_COST_BG_QP, v52, v54, v55, v56, v57, v58, v59);
  v60 = QuestBoardListViewItemDraw_TypeInfo;
  v61 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  *(_QWORD *)&v61->COST_1_ICON_AP_POS.fields.x = 1098907648LL;
  v61->COST_1_ICON_AP_POS.fields.z = 0.0;
  v62 = v60->static_fields;
  *(_QWORD *)&v62->COST_1_ICON_AP_POS_WAR_BOARD.fields.x = 1099956224LL;
  v62->COST_1_ICON_AP_POS_WAR_BOARD.fields.z = 0.0;
  v63 = v60->static_fields;
  *(_QWORD *)&v63->COST_1_LABEL_AP_POS.fields.x = 1103888384LL;
  v63->COST_1_LABEL_AP_POS.fields.z = 0.0;
  v64 = v60->static_fields;
  *(_QWORD *)&v64->COST_1_LABEL_AP_POS_WAR_BOARD.fields.x = 1104936960LL;
  v64->COST_1_LABEL_AP_POS_WAR_BOARD.fields.z = 0.0;
  v60->static_fields->COST_2_ICON_NORMAL_POSITION_X = 101;
  v60->static_fields->COST_2_ICON_QP_POSITION_X = 73;
  v60->static_fields->COST_2_LABEL_NORMAL_POSITION_X = 111;
  v60->static_fields->COST_2_LABEL_QP_POSITION_X = 82;
  v60->static_fields->COST_1_LABEL_NORMAL_POSITION_X_FOR_ALL_ITEM = 28;
  v60->static_fields->COST_2_ICON_NORMAL_POSITION_X_FOR_ALL_ITEM = 76;
  v60->static_fields->COST_2_LABEL_NORMAL_POSITION_X_FOR_ALL_ITEM = 86;
  v60->static_fields->COST_3_ICON_NORMAL_POSITION_X_FOR_ALL_ITEM = 134;
  v60->static_fields->COST_3_LABEL_NORMAL_POSITION_X_FOR_ALL_ITEM = 144;
  v60->static_fields->COST_1_LABEL_DIGIT_3_SCALE_X = 0.81;
  v60->static_fields->COST_1_LABEL_DEFAULT_WIDTH = 35;
  v60->static_fields->COST_2_LABEL_DEFAULT_WIDTH = 101;
  v60->static_fields->COST_3_LABEL_DEFAULT_WIDTH = 101;
  v60->static_fields->COST_LABEL_WIDTH_FOR_THREE_ITEM = 30.4;
  v60->static_fields->COST_2_LABEL_DIGIT_8_SCALE_X = 0.9;
  v60->static_fields->COST_2_LABEL_DIGIT_9_SCALE_X = 0.81;
  v60->static_fields->COST_LABEL_DEFAULT_SPACING = 9;
  v60->static_fields->COST_LABEL_SPACING_FOR_THREE_ITEM = 8;
  v65 = v60->static_fields;
  *(_QWORD *)&v65->SHOHI_SP_POS.fields.x = 0x41C0000041800000LL;
  v65->SHOHI_SP_POS.fields.z = 0.0;
  v66 = v60->static_fields;
  *(_QWORD *)&v66->SHOHI_SP_POS_WAR_BOARD.fields.x = 0x41C8000041900000LL;
  v66->SHOHI_SP_POS_WAR_BOARD.fields.z = 0.0;
  v67 = (System_Int32_array **)StringLiteral_19963/*"img_quest_spend"*/;
  p_SHOHI_SP_NAME = (BattleServantConfConponent_o *)&v60->static_fields->SHOHI_SP_NAME;
  p_SHOHI_SP_NAME->klass = (BattleServantConfConponent_c *)StringLiteral_19963/*"img_quest_spend"*/;
  sub_B77560(p_SHOHI_SP_NAME, v67, v69, v70, v71, v72, v73, v74);
  v75 = (System_Int32_array **)StringLiteral_19964/*"img_quest_spend2"*/;
  p_SHOHI_SP_NAME_WAR_BOARD = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->SHOHI_SP_NAME_WAR_BOARD;
  p_SHOHI_SP_NAME_WAR_BOARD->klass = (BattleServantConfConponent_c *)StringLiteral_19964/*"img_quest_spend2"*/;
  sub_B77560(p_SHOHI_SP_NAME_WAR_BOARD, v75, v77, v78, v79, v80, v81, v82);
  v83 = (System_Int32_array **)StringLiteral_19960/*"img_quest_lasttime"*/;
  p_QUEST_BOARD_COSTNAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_COSTNAME;
  p_QUEST_BOARD_COSTNAME->klass = (BattleServantConfConponent_c *)StringLiteral_19960/*"img_quest_lasttime"*/;
  sub_B77560(p_QUEST_BOARD_COSTNAME, v83, v85, v86, v87, v88, v89, v90);
  v91 = QuestBoardListViewItemDraw_TypeInfo;
  QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_PHASE_INTERVAL = 21;
  v91->static_fields->QUEST_BOARD_PHASE_LOOF_INTERVAL = 30;
  v91->static_fields->QUEST_BOARD_PHASE_EX_INTERVAL = 17;
  v91->static_fields->QUEST_BOARD_PHASE_EX_LOOF_INTERVAL = 26;
  zero = UnityEngine_Vector3__get_zero(0LL);
  v92 = QuestBoardListViewItemDraw_TypeInfo;
  QuestBoardListViewItemDraw_TypeInfo->static_fields->CHALLENGE_OBJ_POS_SINGLE = zero;
  v93 = v92->static_fields;
  *(_QWORD *)&v93->CHALLENGE_OBJ_POS_DOUBLE.fields.x = 1115160576LL;
  v93->CHALLENGE_OBJ_POS_DOUBLE.fields.z = 0.0;
  v713 = UnityEngine_Vector3__get_zero(0LL);
  v94 = QuestBoardListViewItemDraw_TypeInfo;
  QuestBoardListViewItemDraw_TypeInfo->static_fields->PHASE_OBJ_POS_SINGLE = v713;
  v95 = v94->static_fields;
  *(_QWORD *)&v95->PHASE_OBJ_POS_DOUBLE.fields.x = 1116995584LL;
  v95->PHASE_OBJ_POS_DOUBLE.fields.z = 0.0;
  v96 = v94->static_fields;
  *(_QWORD *)&v96->PHASE_OBJ_POS_DOUBLE_QP.fields.x = 1117782016LL;
  v96->PHASE_OBJ_POS_DOUBLE_QP.fields.z = 0.0;
  v97 = v94->static_fields;
  *(_QWORD *)&v97->PHASE_OBJ_POS_TRIPLE_ITEM.fields.x = 1118699520LL;
  v97->PHASE_OBJ_POS_TRIPLE_ITEM.fields.z = 0.0;
  v98 = v94->static_fields;
  *(_QWORD *)&v98->PHASE_STR_POS_SINGLE.fields.x = 1116602368LL;
  v98->PHASE_STR_POS_SINGLE.fields.z = 0.0;
  v99 = v94->static_fields;
  *(_QWORD *)&v99->PHASE_STR_POS_DOUBLE.fields.x = 1113063424LL;
  v99->PHASE_STR_POS_DOUBLE.fields.z = 0.0;
  v100 = v94->static_fields;
  *(_QWORD *)&v100->PHASE_STR_POS_DOUBLE_QP.fields.x = 1111228416LL;
  v100->PHASE_STR_POS_DOUBLE_QP.fields.z = 0.0;
  v101 = v94->static_fields;
  *(_QWORD *)&v101->PHASE_STR_POS_TRIPLE_ITEM.fields.x = 1109393408LL;
  v101->PHASE_STR_POS_TRIPLE_ITEM.fields.z = 0.0;
  one = UnityEngine_Vector3__get_one(0LL);
  v102 = QuestBoardListViewItemDraw_TypeInfo;
  QuestBoardListViewItemDraw_TypeInfo->static_fields->PHASE_STR_SCL_SINGLE = one;
  v103 = v102->static_fields;
  *(_QWORD *)&v103->PHASE_STR_SCL_DOUBLE.fields.x = 0x3F8000003F4CCCCDLL;
  v103->PHASE_STR_SCL_DOUBLE.fields.z = 1.0;
  v104 = v102->static_fields;
  *(_QWORD *)&v104->PHASE_STR_SCL_DOUBLE_QP.fields.x = 0x3F8000003F4CCCCDLL;
  v104->PHASE_STR_SCL_DOUBLE_QP.fields.z = 1.0;
  v105 = v102->static_fields;
  *(_QWORD *)&v105->PHASE_STR_SCL_TRIPLE_ITEM.fields.x = 0x3F8000003F333333LL;
  v105->PHASE_STR_SCL_TRIPLE_ITEM.fields.z = 1.0;
  v102->static_fields->BOARD_MESSAGE_MAX_WITDH = 170;
  v106 = v102->static_fields;
  *(_QWORD *)&v106->BLACK_MARK_OBJ_POS.fields.x = 0x4284000000000000LL;
  v106->BLACK_MARK_OBJ_POS.fields.z = 0.0;
  v107 = v102->static_fields;
  *(_QWORD *)&v107->BLACK_MARK_OBJ_POS_CENTER.fields.x = 0LL;
  v107->BLACK_MARK_OBJ_POS_CENTER.fields.z = 0.0;
  v108 = v102->static_fields;
  *(_QWORD *)&v108->WHITE_MARK_OBJ_UNDER_POS.fields.x = 0xC284000000000000LL;
  v108->WHITE_MARK_OBJ_UNDER_POS.fields.z = 0.0;
  v109 = (System_Int32_array **)StringLiteral_18988/*"event_war_"*/;
  p_EVENT_WAR_SPNAME_PREFIX = (BattleServantConfConponent_o *)&v102->static_fields->EVENT_WAR_SPNAME_PREFIX;
  p_EVENT_WAR_SPNAME_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_18988/*"event_war_"*/;
  sub_B77560(p_EVENT_WAR_SPNAME_PREFIX, v109, v111, v112, v113, v114, v115, v116);
  v117 = (System_Int32_array **)StringLiteral_17611/*"chaldea_category_{0}"*/;
  p_EVENT_WAR_SUBFOLDER_SPNAME_PREFIX = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->EVENT_WAR_SUBFOLDER_SPNAME_PREFIX;
  p_EVENT_WAR_SUBFOLDER_SPNAME_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_17611/*"chaldea_category_{0}"*/;
  sub_B77560(p_EVENT_WAR_SUBFOLDER_SPNAME_PREFIX, v117, v119, v120, v121, v122, v123, v124);
  v125 = (System_Int32_array **)StringLiteral_22075/*"quest_board_"*/;
  p_QUEST_BOARD_SPNAME_PREFIX = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_SPNAME_PREFIX;
  p_QUEST_BOARD_SPNAME_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_22075/*"quest_board_"*/;
  sub_B77560(p_QUEST_BOARD_SPNAME_PREFIX, v125, v127, v128, v129, v130, v131, v132);
  v133 = (System_Int32_array **)StringLiteral_19970/*"img_questboard_"*/;
  p_RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX;
  p_RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_19970/*"img_questboard_"*/;
  sub_B77560(p_RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX, v133, v135, v136, v137, v138, v139, v140);
  v141 = (System_Int32_array **)StringLiteral_22076/*"quest_board_icon_"*/;
  p_QUEST_BOARD_ICON_SPNAME_PREFIX = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_ICON_SPNAME_PREFIX;
  p_QUEST_BOARD_ICON_SPNAME_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_22076/*"quest_board_icon_"*/;
  sub_B77560(p_QUEST_BOARD_ICON_SPNAME_PREFIX, v141, v143, v144, v145, v146, v147, v148);
  v149 = (System_Int32_array **)StringLiteral_22077/*"quest_board_mask_"*/;
  p_QUEST_BOARD_MASK_SPNAME_PREFIX = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_MASK_SPNAME_PREFIX;
  p_QUEST_BOARD_MASK_SPNAME_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_22077/*"quest_board_mask_"*/;
  sub_B77560(p_QUEST_BOARD_MASK_SPNAME_PREFIX, v149, v151, v152, v153, v154, v155, v156);
  v157 = (System_Int32_array **)StringLiteral_22096/*"questboard_shohi_"*/;
  p_QUEST_BOARD_SHOHI_SPNAME_PREFIX = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_SHOHI_SPNAME_PREFIX;
  p_QUEST_BOARD_SHOHI_SPNAME_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_22096/*"questboard_shohi_"*/;
  sub_B77560(p_QUEST_BOARD_SHOHI_SPNAME_PREFIX, v157, v159, v160, v161, v162, v163, v164);
  v165 = (System_Int32_array **)StringLiteral_22083/*"questboard_ap_"*/;
  p_QUEST_BOARD_AP_SPNAME_PREFIX = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_AP_SPNAME_PREFIX;
  p_QUEST_BOARD_AP_SPNAME_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_22083/*"questboard_ap_"*/;
  sub_B77560(p_QUEST_BOARD_AP_SPNAME_PREFIX, v165, v167, v168, v169, v170, v171, v172);
  v173 = (System_Int32_array **)StringLiteral_17515/*"caldeagate_notice_{0:00}"*/;
  p_QUEST_BOARD_INFO_FRAME_NAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_INFO_FRAME_NAME;
  p_QUEST_BOARD_INFO_FRAME_NAME->klass = (BattleServantConfConponent_c *)StringLiteral_17515/*"caldeagate_notice_{0:00}"*/;
  sub_B77560(p_QUEST_BOARD_INFO_FRAME_NAME, v173, v175, v176, v177, v178, v179, v180);
  v181 = (System_Int32_array **)StringLiteral_19972/*"img_questboard_damage"*/;
  p_QUEST_BOARD_DAMAGE_RECODE_NAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_DAMAGE_RECODE_NAME;
  p_QUEST_BOARD_DAMAGE_RECODE_NAME->klass = (BattleServantConfConponent_c *)StringLiteral_19972/*"img_questboard_damage"*/;
  sub_B77560(p_QUEST_BOARD_DAMAGE_RECODE_NAME, v181, v183, v184, v185, v186, v187, v188);
  v189 = (System_Int32_array **)StringLiteral_19960/*"img_quest_lasttime"*/;
  p_QUEST_BOARD_PREV_ICON_NAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_PREV_ICON_NAME;
  p_QUEST_BOARD_PREV_ICON_NAME->klass = (BattleServantConfConponent_c *)StringLiteral_19960/*"img_quest_lasttime"*/;
  sub_B77560(p_QUEST_BOARD_PREV_ICON_NAME, v189, v191, v192, v193, v194, v195, v196);
  v197 = (System_Int32_array **)StringLiteral_19978/*"img_questboard_knockdown"*/;
  p_QUEST_BOARD_KNOCKDOWN_RECODE_NAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_KNOCKDOWN_RECODE_NAME;
  p_QUEST_BOARD_KNOCKDOWN_RECODE_NAME->klass = (BattleServantConfConponent_c *)StringLiteral_19978/*"img_questboard_knockdown"*/;
  sub_B77560(p_QUEST_BOARD_KNOCKDOWN_RECODE_NAME, v197, v199, v200, v201, v202, v203, v204);
  v205 = (System_Int32_array **)StringLiteral_6357/*"EventUI/QuestBoardIcon/"*/;
  p_QUEST_BOARD_ICON_TEXTURE_PATH = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH;
  p_QUEST_BOARD_ICON_TEXTURE_PATH->klass = (BattleServantConfConponent_c *)StringLiteral_6357/*"EventUI/QuestBoardIcon/"*/;
  sub_B77560(p_QUEST_BOARD_ICON_TEXTURE_PATH, v205, v207, v208, v209, v210, v211, v212);
  v213 = (System_Int32_array **)StringLiteral_22076/*"quest_board_icon_"*/;
  p_QUEST_BOARD_ICON_TEXTURE_PREFIX = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_ICON_TEXTURE_PREFIX;
  p_QUEST_BOARD_ICON_TEXTURE_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_22076/*"quest_board_icon_"*/;
  sub_B77560(p_QUEST_BOARD_ICON_TEXTURE_PREFIX, v213, v215, v216, v217, v218, v219, v220);
  v221 = (System_Int32_array **)StringLiteral_19751/*"icon_reward_step{0}"*/;
  p_QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX;
  p_QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_19751/*"icon_reward_step{0}"*/;
  sub_B77560(p_QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX, v221, v223, v224, v225, v226, v227, v228);
  v229 = QuestBoardListViewItemDraw_TypeInfo;
  QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_KNOCKDOWN_DAMAGE_WIDTH = 78;
  v229->static_fields->QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX = 48;
  v229->static_fields->QUEST_BOARD_KNOCKDOWN_ZERO_DAMAGE_POSX = 19;
  v229->static_fields->FLICK_THRESHOLD = 2.0;
  v230 = (System_Int32_array **)StringLiteral_20029/*"img_slider_on"*/;
  p_BANNER_POINT_SPNAME_ON = (BattleServantConfConponent_o *)&v229->static_fields->BANNER_POINT_SPNAME_ON;
  p_BANNER_POINT_SPNAME_ON->klass = (BattleServantConfConponent_c *)StringLiteral_20029/*"img_slider_on"*/;
  sub_B77560(p_BANNER_POINT_SPNAME_ON, v230, v232, v233, v234, v235, v236, v237);
  v238 = (System_Int32_array **)StringLiteral_20028/*"img_slider_off"*/;
  p_BANNER_POINT_SPNAME_OFF = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->BANNER_POINT_SPNAME_OFF;
  p_BANNER_POINT_SPNAME_OFF->klass = (BattleServantConfConponent_c *)StringLiteral_20028/*"img_slider_off"*/;
  sub_B77560(p_BANNER_POINT_SPNAME_OFF, v238, v240, v241, v242, v243, v244, v245);
  v246 = QuestBoardListViewItemDraw_TypeInfo;
  QuestBoardListViewItemDraw_TypeInfo->static_fields->SHORTCUT_FACE_MASK_SP_W = 136;
  v246->static_fields->QUEST_FACE_MASK_SP_W = 124;
  v247 = (System_Int32_array **)StringLiteral_19982/*"img_questboard_story02mask"*/;
  p_SHORTCUT_FACE_MASK_SPNAME = (BattleServantConfConponent_o *)&v246->static_fields->SHORTCUT_FACE_MASK_SPNAME;
  p_SHORTCUT_FACE_MASK_SPNAME->klass = (BattleServantConfConponent_c *)StringLiteral_19982/*"img_questboard_story02mask"*/;
  sub_B77560(p_SHORTCUT_FACE_MASK_SPNAME, v247, v249, v250, v251, v252, v253, v254);
  v255 = (System_Int32_array **)StringLiteral_19984/*"img_questboard_story03mask"*/;
  p_QUEST_STORY_FACE_MASK_SPNAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_STORY_FACE_MASK_SPNAME;
  p_QUEST_STORY_FACE_MASK_SPNAME->klass = (BattleServantConfConponent_c *)StringLiteral_19984/*"img_questboard_story03mask"*/;
  sub_B77560(p_QUEST_STORY_FACE_MASK_SPNAME, v255, v257, v258, v259, v260, v261, v262);
  v263 = (System_Int32_array **)StringLiteral_19985/*"img_questboard_story04mask"*/;
  p_QUEST_MAIN_FACE_MASK_SPNAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_MAIN_FACE_MASK_SPNAME;
  p_QUEST_MAIN_FACE_MASK_SPNAME->klass = (BattleServantConfConponent_c *)StringLiteral_19985/*"img_questboard_story04mask"*/;
  sub_B77560(p_QUEST_MAIN_FACE_MASK_SPNAME, v263, v265, v266, v267, v268, v269, v270);
  v271 = (System_Int32_array **)StringLiteral_19986/*"img_questboard_story05mask"*/;
  p_QUEST_EVENT_FACE_MASK_SPNAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_EVENT_FACE_MASK_SPNAME;
  p_QUEST_EVENT_FACE_MASK_SPNAME->klass = (BattleServantConfConponent_c *)StringLiteral_19986/*"img_questboard_story05mask"*/;
  sub_B77560(p_QUEST_EVENT_FACE_MASK_SPNAME, v271, v273, v274, v275, v276, v277, v278);
  v279 = sub_B775DC(string___TypeInfo, 2LL);
  if ( !v279 )
    goto LABEL_177;
  v287 = (System_Int32_array **)v279;
  v288 = (void *)StringLiteral_22148/*"raid_point_frame_old"*/;
  if ( StringLiteral_22148/*"raid_point_frame_old"*/ )
  {
    v288 = (void *)sub_B77684(StringLiteral_22148/*"raid_point_frame_old"*/, *(_QWORD *)&(*v287)->m_Items[9]);
    if ( !v288 )
      goto LABEL_176;
    v289 = (System_Int32_array **)StringLiteral_22148/*"raid_point_frame_old"*/;
  }
  else
  {
    v289 = 0LL;
  }
  if ( !*((_DWORD *)v287 + 6) )
    goto LABEL_175;
  v287[4] = (System_Int32_array *)v289;
  sub_B77560((BattleServantConfConponent_o *)(v287 + 4), v289, v281, v282, v283, v284, v285, v286);
  v288 = (void *)StringLiteral_22147/*"raid_point_frame"*/;
  if ( StringLiteral_22147/*"raid_point_frame"*/ )
  {
    v288 = (void *)sub_B77684(StringLiteral_22147/*"raid_point_frame"*/, *(_QWORD *)&(*v287)->m_Items[9]);
    if ( !v288 )
      goto LABEL_176;
    v296 = (System_Int32_array **)StringLiteral_22147/*"raid_point_frame"*/;
  }
  else
  {
    v296 = 0LL;
  }
  if ( *((_DWORD *)v287 + 6) <= 1u )
    goto LABEL_175;
  v287[5] = (System_Int32_array *)v296;
  sub_B77560((BattleServantConfConponent_o *)(v287 + 5), v296, v290, v291, v292, v293, v294, v295);
  p_RP_SPNAME_FRAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->RP_SPNAME_FRAME;
  p_RP_SPNAME_FRAME->klass = (BattleServantConfConponent_c *)v287;
  sub_B77560(p_RP_SPNAME_FRAME, v287, v298, v299, v300, v301, v302, v303);
  v279 = sub_B775DC(string___TypeInfo, 2LL);
  if ( !v279 )
    goto LABEL_177;
  v310 = (System_Int32_array **)v279;
  v288 = (void *)StringLiteral_22149/*"raid_point_old"*/;
  if ( StringLiteral_22149/*"raid_point_old"*/ )
  {
    v288 = (void *)sub_B77684(StringLiteral_22149/*"raid_point_old"*/, *(_QWORD *)&(*v310)->m_Items[9]);
    if ( !v288 )
      goto LABEL_176;
    v311 = (System_Int32_array **)StringLiteral_22149/*"raid_point_old"*/;
  }
  else
  {
    v311 = 0LL;
  }
  if ( !*((_DWORD *)v310 + 6) )
    goto LABEL_175;
  v310[4] = (System_Int32_array *)v311;
  sub_B77560((BattleServantConfConponent_o *)(v310 + 4), v311, v304, v305, v306, v307, v308, v309);
  v288 = (void *)StringLiteral_22146/*"raid_point"*/;
  if ( StringLiteral_22146/*"raid_point"*/ )
  {
    v288 = (void *)sub_B77684(StringLiteral_22146/*"raid_point"*/, *(_QWORD *)&(*v310)->m_Items[9]);
    if ( !v288 )
      goto LABEL_176;
    v318 = (System_Int32_array **)StringLiteral_22146/*"raid_point"*/;
  }
  else
  {
    v318 = 0LL;
  }
  if ( *((_DWORD *)v310 + 6) <= 1u )
    goto LABEL_175;
  v310[5] = (System_Int32_array *)v318;
  sub_B77560((BattleServantConfConponent_o *)(v310 + 5), v318, v312, v313, v314, v315, v316, v317);
  p_RP_SPNAME_POINT = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->RP_SPNAME_POINT;
  p_RP_SPNAME_POINT->klass = (BattleServantConfConponent_c *)v310;
  sub_B77560(p_RP_SPNAME_POINT, v310, v320, v321, v322, v323, v324, v325);
  v326 = QuestBoardListViewItemDraw_TypeInfo;
  QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_DEFAULT_FONT_SIZE = 18;
  v326->static_fields->RESTRICTION_FONT_SPACING_DEFAULT = 0;
  v326->static_fields->RESTRICTION_FONT_SPACING_MIN = -1;
  v327 = v326->static_fields;
  *(_QWORD *)&v327->RESTRICTION_POS_DEFAULT.fields.x = 0xC2040000C33A0000LL;
  v327->RESTRICTION_POS_DEFAULT.fields.z = 0.0;
  v326->static_fields->RESTRICTION_FONT_SIZE_ALLOUT = 14;
  v326->static_fields->RESTRICTION_FONT_WIDTH_ALLOUT = 112;
  v328 = v326->static_fields;
  *(_QWORD *)&v328->RESTRICTION_POS_ALLOUT.fields.x = 0xC2040000C3370000LL;
  v328->RESTRICTION_POS_ALLOUT.fields.z = 0.0;
  v326->static_fields->BANNER_ENTORY_EFFECT_DURATION = 0.5;
  v326->static_fields->BANNER_ENTORY_START_POS_X = 30.0;
  v329 = (System_Int32_array **)StringLiteral_19962/*"img_quest_save"*/;
  p_QUEST_BOARD_PREV_PAUSE_ICON_NAME = (BattleServantConfConponent_o *)&v326->static_fields->QUEST_BOARD_PREV_PAUSE_ICON_NAME;
  p_QUEST_BOARD_PREV_PAUSE_ICON_NAME->klass = (BattleServantConfConponent_c *)StringLiteral_19962/*"img_quest_save"*/;
  sub_B77560(p_QUEST_BOARD_PREV_PAUSE_ICON_NAME, v329, v331, v332, v333, v334, v335, v336);
  v337 = (System_Int32_array **)StringLiteral_22087/*"questboard_cap_closed"*/;
  p_QBOARD_CAP_CLOSED = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED;
  p_QBOARD_CAP_CLOSED->klass = (BattleServantConfConponent_c *)StringLiteral_22087/*"questboard_cap_closed"*/;
  sub_B77560(p_QBOARD_CAP_CLOSED, v337, v339, v340, v341, v342, v343, v344);
  v345 = (System_Int32_array **)StringLiteral_22091/*"questboard_cap_closed_{0}"*/;
  p_QBOARD_CAP_CLOSED_SPECIAL_FORMAT = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_SPECIAL_FORMAT;
  p_QBOARD_CAP_CLOSED_SPECIAL_FORMAT->klass = (BattleServantConfConponent_c *)StringLiteral_22091/*"questboard_cap_closed_{0}"*/;
  sub_B77560(p_QBOARD_CAP_CLOSED_SPECIAL_FORMAT, v345, v347, v348, v349, v350, v351, v352);
  v353 = (System_Int32_array **)StringLiteral_22088/*"questboard_cap_closed_special"*/;
  p_QBOARD_CAP_CLOSED_SPECIAL = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_SPECIAL;
  p_QBOARD_CAP_CLOSED_SPECIAL->klass = (BattleServantConfConponent_c *)StringLiteral_22088/*"questboard_cap_closed_special"*/;
  sub_B77560(p_QBOARD_CAP_CLOSED_SPECIAL, v353, v355, v356, v357, v358, v359, v360);
  v361 = (System_Int32_array **)StringLiteral_22089/*"questboard_cap_closed_special_2"*/;
  p_QBOARD_CAP_CLOSED_SPECIAL_2 = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_SPECIAL_2;
  p_QBOARD_CAP_CLOSED_SPECIAL_2->klass = (BattleServantConfConponent_c *)StringLiteral_22089/*"questboard_cap_closed_special_2"*/;
  sub_B77560(p_QBOARD_CAP_CLOSED_SPECIAL_2, v361, v363, v364, v365, v366, v367, v368);
  v369 = (System_Int32_array **)StringLiteral_22090/*"questboard_cap_closed_special_3"*/;
  p_QBOARD_CAP_CLOSED_SPECIAL_3 = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_SPECIAL_3;
  p_QBOARD_CAP_CLOSED_SPECIAL_3->klass = (BattleServantConfConponent_c *)StringLiteral_22090/*"questboard_cap_closed_special_3"*/;
  sub_B77560(p_QBOARD_CAP_CLOSED_SPECIAL_3, v369, v371, v372, v373, v374, v375, v376);
  v279 = sub_B775DC(string___TypeInfo, 7LL);
  if ( !v279 )
    goto LABEL_177;
  v383 = (System_Int32_array **)v279;
  v288 = (void *)StringLiteral_19973/*"img_questboard_event{0:D3}"*/;
  if ( StringLiteral_19973/*"img_questboard_event{0:D3}"*/ )
  {
    v288 = (void *)sub_B77684(StringLiteral_19973/*"img_questboard_event{0:D3}"*/, *(_QWORD *)&(*v383)->m_Items[9]);
    if ( !v288 )
      goto LABEL_176;
    v384 = (System_Int32_array **)StringLiteral_19973/*"img_questboard_event{0:D3}"*/;
  }
  else
  {
    v384 = 0LL;
  }
  if ( !*((_DWORD *)v383 + 6) )
    goto LABEL_175;
  v383[4] = (System_Int32_array *)v384;
  sub_B77560((BattleServantConfConponent_o *)(v383 + 4), v384, v377, v378, v379, v380, v381, v382);
  v288 = (void *)StringLiteral_22092/*"questboard_cap{0:D3}"*/;
  if ( StringLiteral_22092/*"questboard_cap{0:D3}"*/ )
  {
    v288 = (void *)sub_B77684(StringLiteral_22092/*"questboard_cap{0:D3}"*/, *(_QWORD *)&(*v383)->m_Items[9]);
    if ( !v288 )
      goto LABEL_176;
    v391 = (System_Int32_array **)StringLiteral_22092/*"questboard_cap{0:D3}"*/;
  }
  else
  {
    v391 = 0LL;
  }
  if ( *((_DWORD *)v383 + 6) <= 1u )
    goto LABEL_175;
  v383[5] = (System_Int32_array *)v391;
  sub_B77560((BattleServantConfConponent_o *)(v383 + 5), v391, v385, v386, v387, v388, v389, v390);
  v288 = (void *)StringLiteral_17611/*"chaldea_category_{0}"*/;
  if ( StringLiteral_17611/*"chaldea_category_{0}"*/ )
  {
    v288 = (void *)sub_B77684(StringLiteral_17611/*"chaldea_category_{0}"*/, *(_QWORD *)&(*v383)->m_Items[9]);
    if ( !v288 )
      goto LABEL_176;
    v398 = (System_Int32_array **)StringLiteral_17611/*"chaldea_category_{0}"*/;
  }
  else
  {
    v398 = 0LL;
  }
  if ( *((_DWORD *)v383 + 6) <= 2u )
    goto LABEL_175;
  v383[6] = (System_Int32_array *)v398;
  sub_B77560((BattleServantConfConponent_o *)(v383 + 6), v398, v392, v393, v394, v395, v396, v397);
  v288 = (void *)StringLiteral_19980/*"img_questboard_story01"*/;
  if ( StringLiteral_19980/*"img_questboard_story01"*/ )
  {
    v288 = (void *)sub_B77684(StringLiteral_19980/*"img_questboard_story01"*/, *(_QWORD *)&(*v383)->m_Items[9]);
    if ( !v288 )
      goto LABEL_176;
    v405 = (System_Int32_array **)StringLiteral_19980/*"img_questboard_story01"*/;
  }
  else
  {
    v405 = 0LL;
  }
  if ( *((_DWORD *)v383 + 6) <= 3u )
    goto LABEL_175;
  v383[7] = (System_Int32_array *)v405;
  sub_B77560((BattleServantConfConponent_o *)(v383 + 7), v405, v399, v400, v401, v402, v403, v404);
  v288 = (void *)StringLiteral_19975/*"img_questboard_hero01"*/;
  if ( StringLiteral_19975/*"img_questboard_hero01"*/ )
  {
    v288 = (void *)sub_B77684(StringLiteral_19975/*"img_questboard_hero01"*/, *(_QWORD *)&(*v383)->m_Items[9]);
    if ( !v288 )
      goto LABEL_176;
    v412 = (System_Int32_array **)StringLiteral_19975/*"img_questboard_hero01"*/;
  }
  else
  {
    v412 = 0LL;
  }
  if ( *((_DWORD *)v383 + 6) <= 4u )
    goto LABEL_175;
  v383[8] = (System_Int32_array *)v412;
  sub_B77560((BattleServantConfConponent_o *)(v383 + 8), v412, v406, v407, v408, v409, v410, v411);
  v288 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v288 = (void *)sub_B77684(StringLiteral_1/*""*/, *(_QWORD *)&(*v383)->m_Items[9]);
    if ( !v288 )
      goto LABEL_176;
    v419 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v419 = 0LL;
  }
  if ( *((_DWORD *)v383 + 6) <= 5u )
    goto LABEL_175;
  v383[9] = (System_Int32_array *)v419;
  sub_B77560((BattleServantConfConponent_o *)(v383 + 9), v419, v413, v414, v415, v416, v417, v418);
  v288 = (void *)StringLiteral_22092/*"questboard_cap{0:D3}"*/;
  if ( StringLiteral_22092/*"questboard_cap{0:D3}"*/ )
  {
    v288 = (void *)sub_B77684(StringLiteral_22092/*"questboard_cap{0:D3}"*/, *(_QWORD *)&(*v383)->m_Items[9]);
    if ( !v288 )
      goto LABEL_176;
    v426 = (System_Int32_array **)StringLiteral_22092/*"questboard_cap{0:D3}"*/;
  }
  else
  {
    v426 = 0LL;
  }
  if ( *((_DWORD *)v383 + 6) <= 6u )
    goto LABEL_175;
  v383[10] = (System_Int32_array *)v426;
  sub_B77560((BattleServantConfConponent_o *)(v383 + 10), v426, v420, v421, v422, v423, v424, v425);
  p_msQBoardL1Names = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msQBoardL1Names;
  p_msQBoardL1Names->klass = (BattleServantConfConponent_c *)v383;
  sub_B77560(p_msQBoardL1Names, v383, v428, v429, v430, v431, v432, v433);
  v434 = (System_Int32_array **)StringLiteral_19981/*"img_questboard_story02"*/;
  p_msQBoardL2Name_Story = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msQBoardL2Name_Story;
  p_msQBoardL2Name_Story->klass = (BattleServantConfConponent_c *)StringLiteral_19981/*"img_questboard_story02"*/;
  sub_B77560(p_msQBoardL2Name_Story, v434, v436, v437, v438, v439, v440, v441);
  v442 = (System_Int32_array **)StringLiteral_19976/*"img_questboard_hero02"*/;
  p_msQBoardL2Name_Hero = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msQBoardL2Name_Hero;
  p_msQBoardL2Name_Hero->klass = (BattleServantConfConponent_c *)StringLiteral_19976/*"img_questboard_hero02"*/;
  sub_B77560(p_msQBoardL2Name_Hero, v442, v444, v445, v446, v447, v448, v449);
  v279 = sub_B775DC(string___TypeInfo, 7LL);
  if ( !v279 )
    goto LABEL_177;
  v456 = (System_Int32_array **)v279;
  v288 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v288 = (void *)sub_B77684(StringLiteral_1/*""*/, *(_QWORD *)&(*v456)->m_Items[9]);
    if ( !v288 )
      goto LABEL_176;
    v457 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v457 = 0LL;
  }
  if ( !*((_DWORD *)v456 + 6) )
    goto LABEL_175;
  v456[4] = (System_Int32_array *)v457;
  sub_B77560((BattleServantConfConponent_o *)(v456 + 4), v457, v450, v451, v452, v453, v454, v455);
  v288 = (void *)StringLiteral_19979/*"img_questboard_main_"*/;
  if ( StringLiteral_19979/*"img_questboard_main_"*/ )
  {
    v288 = (void *)sub_B77684(StringLiteral_19979/*"img_questboard_main_"*/, *(_QWORD *)&(*v456)->m_Items[9]);
    if ( !v288 )
      goto LABEL_176;
    v464 = (System_Int32_array **)StringLiteral_19979/*"img_questboard_main_"*/;
  }
  else
  {
    v464 = 0LL;
  }
  if ( *((_DWORD *)v456 + 6) <= 1u )
    goto LABEL_175;
  v456[5] = (System_Int32_array *)v464;
  sub_B77560((BattleServantConfConponent_o *)(v456 + 5), v464, v458, v459, v460, v461, v462, v463);
  v288 = (void *)StringLiteral_19974/*"img_questboard_free_"*/;
  if ( StringLiteral_19974/*"img_questboard_free_"*/ )
  {
    v288 = (void *)sub_B77684(StringLiteral_19974/*"img_questboard_free_"*/, *(_QWORD *)&(*v456)->m_Items[9]);
    if ( !v288 )
      goto LABEL_176;
    v471 = (System_Int32_array **)StringLiteral_19974/*"img_questboard_free_"*/;
  }
  else
  {
    v471 = 0LL;
  }
  if ( *((_DWORD *)v456 + 6) <= 2u )
    goto LABEL_175;
  v456[6] = (System_Int32_array *)v471;
  sub_B77560((BattleServantConfConponent_o *)(v456 + 6), v471, v465, v466, v467, v468, v469, v470);
  v288 = (void *)StringLiteral_19983/*"img_questboard_story03"*/;
  if ( StringLiteral_19983/*"img_questboard_story03"*/ )
  {
    v288 = (void *)sub_B77684(StringLiteral_19983/*"img_questboard_story03"*/, *(_QWORD *)&(*v456)->m_Items[9]);
    if ( !v288 )
      goto LABEL_176;
    v478 = (System_Int32_array **)StringLiteral_19983/*"img_questboard_story03"*/;
  }
  else
  {
    v478 = 0LL;
  }
  if ( *((_DWORD *)v456 + 6) <= 3u )
    goto LABEL_175;
  v456[7] = (System_Int32_array *)v478;
  sub_B77560((BattleServantConfConponent_o *)(v456 + 7), v478, v472, v473, v474, v475, v476, v477);
  v288 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v288 = (void *)sub_B77684(StringLiteral_1/*""*/, *(_QWORD *)&(*v456)->m_Items[9]);
    if ( !v288 )
      goto LABEL_176;
    v485 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v485 = 0LL;
  }
  if ( *((_DWORD *)v456 + 6) <= 4u )
    goto LABEL_175;
  v456[8] = (System_Int32_array *)v485;
  sub_B77560((BattleServantConfConponent_o *)(v456 + 8), v485, v479, v480, v481, v482, v483, v484);
  v288 = (void *)StringLiteral_19974/*"img_questboard_free_"*/;
  if ( StringLiteral_19974/*"img_questboard_free_"*/ )
  {
    v288 = (void *)sub_B77684(StringLiteral_19974/*"img_questboard_free_"*/, *(_QWORD *)&(*v456)->m_Items[9]);
    if ( !v288 )
      goto LABEL_176;
    v492 = (System_Int32_array **)StringLiteral_19974/*"img_questboard_free_"*/;
  }
  else
  {
    v492 = 0LL;
  }
  if ( *((_DWORD *)v456 + 6) <= 5u )
    goto LABEL_175;
  v456[9] = (System_Int32_array *)v492;
  sub_B77560((BattleServantConfConponent_o *)(v456 + 9), v492, v486, v487, v488, v489, v490, v491);
  v288 = (void *)StringLiteral_19977/*"img_questboard_hero03"*/;
  if ( StringLiteral_19977/*"img_questboard_hero03"*/ )
  {
    v288 = (void *)sub_B77684(StringLiteral_19977/*"img_questboard_hero03"*/, *(_QWORD *)&(*v456)->m_Items[9]);
    if ( !v288 )
      goto LABEL_176;
    v499 = (System_Int32_array **)StringLiteral_19977/*"img_questboard_hero03"*/;
  }
  else
  {
    v499 = 0LL;
  }
  if ( *((_DWORD *)v456 + 6) <= 6u )
    goto LABEL_175;
  v456[10] = (System_Int32_array *)v499;
  sub_B77560((BattleServantConfConponent_o *)(v456 + 10), v499, v493, v494, v495, v496, v497, v498);
  p_msQBoardL3Names = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msQBoardL3Names;
  p_msQBoardL3Names->klass = (BattleServantConfConponent_c *)v456;
  sub_B77560(p_msQBoardL3Names, v456, v501, v502, v503, v504, v505, v506);
  v279 = sub_B775DC(string___TypeInfo, 7LL);
  if ( !v279 )
    goto LABEL_177;
  v513 = (System_Int32_array **)v279;
  v288 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v288 = (void *)sub_B77684(StringLiteral_1/*""*/, *(_QWORD *)&(*v513)->m_Items[9]);
    if ( !v288 )
      goto LABEL_176;
    v514 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v514 = 0LL;
  }
  if ( !*((_DWORD *)v513 + 6) )
    goto LABEL_175;
  v513[4] = (System_Int32_array *)v514;
  sub_B77560((BattleServantConfConponent_o *)(v513 + 4), v514, v507, v508, v509, v510, v511, v512);
  v288 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v288 = (void *)sub_B77684(StringLiteral_1/*""*/, *(_QWORD *)&(*v513)->m_Items[9]);
    if ( !v288 )
      goto LABEL_176;
    v521 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v521 = 0LL;
  }
  if ( *((_DWORD *)v513 + 6) <= 1u )
    goto LABEL_175;
  v513[5] = (System_Int32_array *)v521;
  sub_B77560((BattleServantConfConponent_o *)(v513 + 5), v521, v515, v516, v517, v518, v519, v520);
  v288 = (void *)StringLiteral_19991/*"img_questtxt_free"*/;
  if ( StringLiteral_19991/*"img_questtxt_free"*/ )
  {
    v288 = (void *)sub_B77684(StringLiteral_19991/*"img_questtxt_free"*/, *(_QWORD *)&(*v513)->m_Items[9]);
    if ( !v288 )
      goto LABEL_176;
    v528 = (System_Int32_array **)StringLiteral_19991/*"img_questtxt_free"*/;
  }
  else
  {
    v528 = 0LL;
  }
  if ( *((_DWORD *)v513 + 6) <= 2u )
    goto LABEL_175;
  v513[6] = (System_Int32_array *)v528;
  sub_B77560((BattleServantConfConponent_o *)(v513 + 6), v528, v522, v523, v524, v525, v526, v527);
  v288 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v288 = (void *)sub_B77684(StringLiteral_1/*""*/, *(_QWORD *)&(*v513)->m_Items[9]);
    if ( !v288 )
      goto LABEL_176;
    v535 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v535 = 0LL;
  }
  if ( *((_DWORD *)v513 + 6) <= 3u )
    goto LABEL_175;
  v513[7] = (System_Int32_array *)v535;
  sub_B77560((BattleServantConfConponent_o *)(v513 + 7), v535, v529, v530, v531, v532, v533, v534);
  v288 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v288 = (void *)sub_B77684(StringLiteral_1/*""*/, *(_QWORD *)&(*v513)->m_Items[9]);
    if ( !v288 )
      goto LABEL_176;
    v542 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v542 = 0LL;
  }
  if ( *((_DWORD *)v513 + 6) <= 4u )
    goto LABEL_175;
  v513[8] = (System_Int32_array *)v542;
  sub_B77560((BattleServantConfConponent_o *)(v513 + 8), v542, v536, v537, v538, v539, v540, v541);
  v288 = (void *)StringLiteral_19990/*"img_questtxt_event"*/;
  if ( StringLiteral_19990/*"img_questtxt_event"*/ )
  {
    v288 = (void *)sub_B77684(StringLiteral_19990/*"img_questtxt_event"*/, *(_QWORD *)&(*v513)->m_Items[9]);
    if ( !v288 )
      goto LABEL_176;
    v549 = (System_Int32_array **)StringLiteral_19990/*"img_questtxt_event"*/;
  }
  else
  {
    v549 = 0LL;
  }
  if ( *((_DWORD *)v513 + 6) <= 5u )
    goto LABEL_175;
  v513[9] = (System_Int32_array *)v549;
  sub_B77560((BattleServantConfConponent_o *)(v513 + 9), v549, v543, v544, v545, v546, v547, v548);
  v288 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v288 = (void *)sub_B77684(StringLiteral_1/*""*/, *(_QWORD *)&(*v513)->m_Items[9]);
    if ( !v288 )
      goto LABEL_176;
    v556 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v556 = 0LL;
  }
  if ( *((_DWORD *)v513 + 6) <= 6u )
    goto LABEL_175;
  v513[10] = (System_Int32_array *)v556;
  sub_B77560((BattleServantConfConponent_o *)(v513 + 10), v556, v550, v551, v552, v553, v554, v555);
  p_msLabelMainSprNames = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msLabelMainSprNames;
  p_msLabelMainSprNames->klass = (BattleServantConfConponent_c *)v513;
  sub_B77560(p_msLabelMainSprNames, v513, v558, v559, v560, v561, v562, v563);
  v279 = sub_B775DC(string___TypeInfo, 8LL);
  if ( !v279 )
LABEL_177:
    sub_B7769C(v279, v280);
  v570 = (System_Int32_array **)v279;
  v288 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v288 = (void *)sub_B77684(StringLiteral_1/*""*/, *(_QWORD *)&(*v570)->m_Items[9]);
    if ( !v288 )
      goto LABEL_176;
    v571 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v571 = 0LL;
  }
  if ( !*((_DWORD *)v570 + 6) )
    goto LABEL_175;
  v570[4] = (System_Int32_array *)v571;
  sub_B77560((BattleServantConfConponent_o *)(v570 + 4), v571, v564, v565, v566, v567, v568, v569);
  v288 = (void *)StringLiteral_22085/*"questboard_ap_main"*/;
  if ( StringLiteral_22085/*"questboard_ap_main"*/ )
  {
    v288 = (void *)sub_B77684(StringLiteral_22085/*"questboard_ap_main"*/, *(_QWORD *)&(*v570)->m_Items[9]);
    if ( !v288 )
      goto LABEL_176;
    v578 = (System_Int32_array **)StringLiteral_22085/*"questboard_ap_main"*/;
  }
  else
  {
    v578 = 0LL;
  }
  if ( *((_DWORD *)v570 + 6) <= 1u )
    goto LABEL_175;
  v570[5] = (System_Int32_array *)v578;
  sub_B77560((BattleServantConfConponent_o *)(v570 + 5), v578, v572, v573, v574, v575, v576, v577);
  v288 = (void *)StringLiteral_22084/*"questboard_ap_free"*/;
  if ( StringLiteral_22084/*"questboard_ap_free"*/ )
  {
    v288 = (void *)sub_B77684(StringLiteral_22084/*"questboard_ap_free"*/, *(_QWORD *)&(*v570)->m_Items[9]);
    if ( !v288 )
      goto LABEL_176;
    v585 = (System_Int32_array **)StringLiteral_22084/*"questboard_ap_free"*/;
  }
  else
  {
    v585 = 0LL;
  }
  if ( *((_DWORD *)v570 + 6) <= 2u )
    goto LABEL_175;
  v570[6] = (System_Int32_array *)v585;
  sub_B77560((BattleServantConfConponent_o *)(v570 + 6), v585, v579, v580, v581, v582, v583, v584);
  v288 = (void *)StringLiteral_22086/*"questboard_ap_story"*/;
  if ( StringLiteral_22086/*"questboard_ap_story"*/ )
  {
    v288 = (void *)sub_B77684(StringLiteral_22086/*"questboard_ap_story"*/, *(_QWORD *)&(*v570)->m_Items[9]);
    if ( !v288 )
      goto LABEL_176;
    v592 = (System_Int32_array **)StringLiteral_22086/*"questboard_ap_story"*/;
  }
  else
  {
    v592 = 0LL;
  }
  if ( *((_DWORD *)v570 + 6) <= 3u )
    goto LABEL_175;
  v570[7] = (System_Int32_array *)v592;
  sub_B77560((BattleServantConfConponent_o *)(v570 + 7), v592, v586, v587, v588, v589, v590, v591);
  v288 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v288 = (void *)sub_B77684(StringLiteral_1/*""*/, *(_QWORD *)&(*v570)->m_Items[9]);
    if ( !v288 )
      goto LABEL_176;
    v599 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v599 = 0LL;
  }
  if ( *((_DWORD *)v570 + 6) <= 4u )
    goto LABEL_175;
  v570[8] = (System_Int32_array *)v599;
  sub_B77560((BattleServantConfConponent_o *)(v570 + 8), v599, v593, v594, v595, v596, v597, v598);
  v288 = (void *)StringLiteral_22084/*"questboard_ap_free"*/;
  if ( StringLiteral_22084/*"questboard_ap_free"*/ )
  {
    v288 = (void *)sub_B77684(StringLiteral_22084/*"questboard_ap_free"*/, *(_QWORD *)&(*v570)->m_Items[9]);
    if ( !v288 )
      goto LABEL_176;
    v606 = (System_Int32_array **)StringLiteral_22084/*"questboard_ap_free"*/;
  }
  else
  {
    v606 = 0LL;
  }
  if ( *((_DWORD *)v570 + 6) <= 5u )
    goto LABEL_175;
  v570[9] = (System_Int32_array *)v606;
  sub_B77560((BattleServantConfConponent_o *)(v570 + 9), v606, v600, v601, v602, v603, v604, v605);
  v288 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v288 = (void *)sub_B77684(StringLiteral_1/*""*/, *(_QWORD *)&(*v570)->m_Items[9]);
    if ( !v288 )
      goto LABEL_176;
    v613 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v613 = 0LL;
  }
  if ( *((_DWORD *)v570 + 6) <= 6u )
    goto LABEL_175;
  v570[10] = (System_Int32_array *)v613;
  sub_B77560((BattleServantConfConponent_o *)(v570 + 10), v613, v607, v608, v609, v610, v611, v612);
  v288 = (void *)StringLiteral_22118/*"qyestboard_ap_free"*/;
  if ( StringLiteral_22118/*"qyestboard_ap_free"*/ )
  {
    v288 = (void *)sub_B77684(StringLiteral_22118/*"qyestboard_ap_free"*/, *(_QWORD *)&(*v570)->m_Items[9]);
    if ( v288 )
    {
      v620 = (System_Int32_array **)StringLiteral_22118/*"qyestboard_ap_free"*/;
      goto LABEL_173;
    }
LABEL_176:
    v709 = sub_B776BC(v288);
    sub_B77668(v709, 0LL);
  }
  v620 = 0LL;
LABEL_173:
  if ( *((_DWORD *)v570 + 6) <= 7u )
  {
LABEL_175:
    v708 = sub_B776C8(v288);
    sub_B77668(v708, 0LL);
  }
  v570[11] = (System_Int32_array *)v620;
  sub_B77560((BattleServantConfConponent_o *)(v570 + 11), v620, v614, v615, v616, v617, v618, v619);
  p_QuestBoardApSpNames = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QuestBoardApSpNames;
  p_QuestBoardApSpNames->klass = (BattleServantConfConponent_c *)v570;
  sub_B77560(p_QuestBoardApSpNames, v570, v622, v623, v624, v625, v626, v627);
  v628 = (System_Int32_array **)StringLiteral_19968/*"img_questarrow_off"*/;
  p_msPhaseSprName_ArrowOff = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_ArrowOff;
  p_msPhaseSprName_ArrowOff->klass = (BattleServantConfConponent_c *)StringLiteral_19968/*"img_questarrow_off"*/;
  sub_B77560(p_msPhaseSprName_ArrowOff, v628, v630, v631, v632, v633, v634, v635);
  v636 = (System_Int32_array **)StringLiteral_19969/*"img_questarrow_on"*/;
  p_msPhaseSprName_ArrowOn = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_ArrowOn;
  p_msPhaseSprName_ArrowOn->klass = (BattleServantConfConponent_c *)StringLiteral_19969/*"img_questarrow_on"*/;
  sub_B77560(p_msPhaseSprName_ArrowOn, v636, v638, v639, v640, v641, v642, v643);
  v644 = (System_Int32_array **)StringLiteral_19966/*"img_questarrow1_off"*/;
  p_msPhaseSprName_ExArrowOff = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_ExArrowOff;
  p_msPhaseSprName_ExArrowOff->klass = (BattleServantConfConponent_c *)StringLiteral_19966/*"img_questarrow1_off"*/;
  sub_B77560(p_msPhaseSprName_ExArrowOff, v644, v646, v647, v648, v649, v650, v651);
  v652 = (System_Int32_array **)StringLiteral_19967/*"img_questarrow1_on"*/;
  p_msPhaseSprName_ExArrowOn = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_ExArrowOn;
  p_msPhaseSprName_ExArrowOn->klass = (BattleServantConfConponent_c *)StringLiteral_19967/*"img_questarrow1_on"*/;
  sub_B77560(p_msPhaseSprName_ExArrowOn, v652, v654, v655, v656, v657, v658, v659);
  v660 = (System_Int32_array **)StringLiteral_19987/*"img_questloop_off"*/;
  p_msPhaseSprName_LoopOff = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_LoopOff;
  p_msPhaseSprName_LoopOff->klass = (BattleServantConfConponent_c *)StringLiteral_19987/*"img_questloop_off"*/;
  sub_B77560(p_msPhaseSprName_LoopOff, v660, v662, v663, v664, v665, v666, v667);
  v668 = (System_Int32_array **)StringLiteral_19988/*"img_questloop_on"*/;
  p_msPhaseSprName_LoopOn = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_LoopOn;
  p_msPhaseSprName_LoopOn->klass = (BattleServantConfConponent_c *)StringLiteral_19988/*"img_questloop_on"*/;
  sub_B77560(p_msPhaseSprName_LoopOn, v668, v670, v671, v672, v673, v674, v675);
  v676 = (System_Int32_array **)StringLiteral_19920/*"img_loop_off"*/;
  p_msPhaseSprName_LoopFirstOff = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_LoopFirstOff;
  p_msPhaseSprName_LoopFirstOff->klass = (BattleServantConfConponent_c *)StringLiteral_19920/*"img_loop_off"*/;
  sub_B77560(p_msPhaseSprName_LoopFirstOff, v676, v678, v679, v680, v681, v682, v683);
  v684 = (System_Int32_array **)StringLiteral_22095/*"questboard_icon_cap{0:D2}"*/;
  p_CHAPTER_SP_BASE_NAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->CHAPTER_SP_BASE_NAME;
  p_CHAPTER_SP_BASE_NAME->klass = (BattleServantConfConponent_c *)StringLiteral_22095/*"questboard_icon_cap{0:D2}"*/;
  sub_B77560(p_CHAPTER_SP_BASE_NAME, v684, v686, v687, v688, v689, v690, v691);
  v692 = (System_Int32_array **)StringLiteral_19965/*"img_quest_unit_{0:D2}"*/;
  p_CHAPTER_SP_UNIT_NAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->CHAPTER_SP_UNIT_NAME;
  p_CHAPTER_SP_UNIT_NAME->klass = (BattleServantConfConponent_c *)StringLiteral_19965/*"img_quest_unit_{0:D2}"*/;
  sub_B77560(p_CHAPTER_SP_UNIT_NAME, v692, v694, v695, v696, v697, v698, v699);
  v700 = (System_Int32_array **)StringLiteral_19961/*"img_quest_pre_organization"*/;
  p_PRE_BATTLE_ORGANIZATION = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->PRE_BATTLE_ORGANIZATION;
  p_PRE_BATTLE_ORGANIZATION->klass = (BattleServantConfConponent_c *)StringLiteral_19961/*"img_quest_pre_organization"*/;
  sub_B77560(p_PRE_BATTLE_ORGANIZATION, v700, v702, v703, v704, v705, v706, v707);
}


void __fastcall QuestBoardListViewItemDraw___ctor(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  QuestBoardListViewItemDraw_c *v10; // x0
  struct UISprite_array *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_438C82B & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_GameObject___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_UISprite___ctor__);
    sub_B775C4(&System_Collections_Generic_List_UISprite__TypeInfo);
    sub_B775C4(&QuestBoardListViewItemDraw_TypeInfo);
    sub_B775C4(&UISprite___TypeInfo);
    byte_438C82B = 1;
  }
  v3 = (struct UnityEngine_GameObject_array *)sub_B775DC(UnityEngine_GameObject___TypeInfo, 4LL);
  this->fields.mStatusSp = v3;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.mStatusSp, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  v10 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v10 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v11 = (struct UISprite_array *)sub_B775DC(UISprite___TypeInfo, (unsigned int)v10->static_fields->PHASE_EXTRA_MAX);
  this->fields.mPhaseSp = v11;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.mPhaseSp,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UISprite__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UISprite___ctor__);
  this->fields.mMultiSecondBattleInformation = (struct System_Collections_Generic_List_UISprite__o *)v18;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.mMultiSecondBattleInformation,
    (System_Int32_array **)v18,
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
    sub_B7769C(this, method);
  this->fields.restrictionDefaultWidth = mOptionRestrinctionLb->fields.mWidth;
}


void __fastcall QuestBoardListViewItemDraw__CalcQuestCost(
        QuestBoardListViewItemDraw_o *this,
        QuestEntity_o *questEntity,
        EventCampaignEntity_o *eventCampaignEnt,
        bool isQuestNoneCleared,
        int32_t *costCalcVal,
        int32_t *fixedVal,
        const MethodInfo *method)
{
  int32_t target; // w8
  int32_t consumeType; // w8
  int32_t value; // w8

  if ( !eventCampaignEnt )
    goto LABEL_15;
  target = eventCampaignEnt->fields.target;
  if ( target == 25 && !isQuestNoneCleared
    || target != 25 && target != 12
    || (eventCampaignEnt->fields.calcType & 0xFFFFFFFE) != 2 )
  {
    return;
  }
  if ( !questEntity )
LABEL_15:
    sub_B7769C(this, questEntity);
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

  if ( (byte_438C81B & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C81B = 1;
  }
  eventTarget = (UnityEngine_Object_o *)this->fields.eventTarget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(eventTarget, 0LL, 0LL) )
  {
    eventTargetComponent = (UnityEngine_Object_o *)this->fields.eventTargetComponent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(eventTargetComponent, 0LL, 0LL) )
    {
      v6 = (BoardOptionEventTargetComponent_o *)this->fields.eventTarget;
      if ( !v6 )
        goto LABEL_18;
      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)v6, 0LL) )
      {
        v6 = this->fields.eventTargetComponent;
        if ( !v6 )
          goto LABEL_18;
        if ( BoardOptionEventTargetComponent__IsNeedAnim(v6, 0LL) )
        {
          v6 = this->fields.eventTargetComponent;
          if ( v6 )
          {
            BoardOptionEventTargetComponent__SetNextTarget(v6, 0LL);
            return;
          }
LABEL_18:
          sub_B7769C(v6, v5);
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
  QuestBoardListViewItemDraw_o *v5; // x19
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v6; // x26
  int32_t v7; // w25
  __int64 v8; // x8
  QuestBoardInformaionText_o *v9; // x26
  const MethodInfo *v10; // x2
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x8
  QuestBoardListViewItem_o *v12; // x1
  int64_t Time; // x3
  const MethodInfo *v14; // x4
  QuestBoardListViewItemDraw_o *v15; // x0
  int32_t v16; // w2

  v5 = this;
  while ( 1 )
  {
    if ( (byte_438C817 & 1) == 0 )
    {
      sub_B775C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__RemoveAt__);
      sub_B775C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__);
      sub_B775C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__);
      this = (QuestBoardListViewItemDraw_o *)sub_B775C4(&NetworkManager_TypeInfo);
      byte_438C817 = 1;
    }
    if ( (byte_438C818 & 1) == 0 )
    {
      this = (QuestBoardListViewItemDraw_o *)sub_B775C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__);
      byte_438C818 = 1;
    }
    mInfoTextList = v5->fields.mInfoTextList;
    if ( !mInfoTextList )
      break;
    questBoardItem = (QuestBoardListViewItem_o *)(unsigned int)mInfoTextList->fields._size;
    if ( (int)questBoardItem < 2 )
      break;
    if ( !questBoardManager )
      goto LABEL_33;
    this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewManager__GetAlphaAnimCnt(
                                             questBoardManager,
                                             (int32_t)questBoardItem,
                                             0LL);
    v6 = v5->fields.mInfoTextList;
    if ( !v6 )
      goto LABEL_33;
    v7 = (int)this;
    if ( v6->fields._size <= (unsigned int)this )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v8 = (__int64)v6->fields._items + 8 * (int)this;
    v9 = *(QuestBoardInformaionText_o **)(v8 + 32);
    if ( !v9 )
      goto LABEL_33;
    if ( !QuestBoardInformaionText__IsQuestOpened(
            *(QuestBoardInformaionText_o **)(v8 + 32),
            (const MethodInfo *)questBoardItem) )
    {
      if ( !QuestBoardInformaionText__ChangeText(v9, &v5->fields.mOptionInfoLb, v10) )
        return;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Time = NetworkManager__getTime(0LL);
      v15 = v5;
      v16 = v7;
      goto LABEL_31;
    }
    this = (QuestBoardListViewItemDraw_o *)v5->fields.mInfoTextList;
    if ( !this )
      goto LABEL_33;
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
      v7,
      (const MethodInfo_3054F88 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__RemoveAt__);
  }
  if ( (byte_438C819 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__);
    byte_438C819 = 1;
    mInfoTextList = v5->fields.mInfoTextList;
  }
  if ( mInfoTextList && mInfoTextList->fields._size )
  {
    this = (QuestBoardListViewItemDraw_o *)mInfoTextList->fields._items->m_Items[0];
    if ( !this )
LABEL_33:
      sub_B7769C(this, questBoardItem);
    if ( QuestBoardInformaionText__ChangeText(
           (QuestBoardInformaionText_o *)this,
           &v5->fields.mOptionInfoLb,
           (const MethodInfo *)questBoardManager) )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Time = NetworkManager__getTime(0LL);
      v15 = v5;
      v16 = 0;
LABEL_31:
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
  GiftEntity_o *v6; // x9
  int num; // w8
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x0

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
  {
    v10 = sub_B776C8(this);
    sub_B77668(v10, 0LL);
  }
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
      ItemIconComponent__SetItemImage_28178440((ItemIconComponent_o *)this, (int32_t)questBoardManager, v8, 0LL);
      return;
    }
LABEL_18:
    sub_B7769C(this, questBoardManager);
  }
  if ( !this )
    goto LABEL_18;
  if ( num <= 1 )
    v9 = -1;
  else
    v9 = v6->fields.num;
  ItemIconComponent__SetGift((ItemIconComponent_o *)this, v6->fields.type, v6->fields.objectId, v9, 1, 0LL);
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

  if ( (byte_438C810 & 1) == 0 )
  {
    sub_B775C4(&System_Text_StringBuilder_TypeInfo);
    sub_B775C4(&StringLiteral_980/*"0"*/);
    byte_438C810 = 1;
  }
  if ( n <= 0 )
    return (System_String_o *)StringLiteral_980/*"0"*/;
  if ( isUppercase )
    v6 = 32;
  else
    v6 = 0;
  v7 = n % 0xAu;
  v8 = 96 - v6;
  v9 = (System_Text_StringBuilder_o *)sub_B77694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_42945992(v9, 5, 0LL);
  if ( n >= 10 )
  {
    if ( n >= 100 )
    {
      v14 = n / 0x64u % 0xA;
      if ( v14 >= 2 )
      {
        if ( !v9 )
          goto LABEL_25;
        System_Text_StringBuilder__Append_42955208(v9, v8 | v14, 0LL);
      }
      else if ( !v9 )
      {
LABEL_25:
        sub_B7769C(v10, v11);
      }
      System_Text_StringBuilder__Append_42955208(v9, 107 - v6, 0LL);
      v13 = n / 0xAu % 0xA;
    }
    else
    {
      if ( !v9 )
        goto LABEL_25;
      v13 = (unsigned __int8)n / 0xAu % 0xA;
    }
    if ( v13 >= 2 )
      System_Text_StringBuilder__Append_42955208(v9, v8 | v13, 0LL);
    System_Text_StringBuilder__Append_42955208(v9, 106 - v6, 0LL);
    if ( !v7 )
      return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v9->klass->vtable._3_ToString.method)(
                                  v9,
                                  v9->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  }
  else if ( !v9 )
  {
    goto LABEL_25;
  }
  System_Text_StringBuilder__Append_42955208(v9, v8 | v7, 0LL);
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
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x19
  struct MapControl_AreaBoardInfo_o *AreaBoardInfo_k__BackingField; // x22
  DataManager_o *v9; // x23
  int32_t warId; // w20
  EventCampaignMaster_o *MasterData_WarQuestSelectionMaster; // x21
  __int64 v12; // x23
  BoardMessageEntity_array *v13; // x22
  il2cpp_array_size_t v14; // w25
  BoardMessageEntity_o *v15; // x26
  System_String_o *message; // x28
  int64_t closedAt; // x19
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x27
  QuestBoardInformaionText_o *v19; // x0
  const MethodInfo *v20; // x6
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x24
  BoardMessageEntity_o *v22; // x1
  System_String_o *v23; // x2
  int64_t v24; // x3
  EventCampaignEntity_o *Data; // x0
  System_String_o *v26; // x19
  int64_t v27; // x28
  EventCampaignEntity_o *v28; // x20
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v29; // x27
  QuestBoardInformaionText_o *v30; // x24
  const MethodInfo *v31; // x6
  int64_t v32; // x28
  System_String_o *v33; // x19
  _BOOL4 HasFlag; // w25
  const MethodInfo *v35; // x3
  struct EventEntity_o *eventEnt; // x8
  BoardMessageEntity_o *OverrideQuestMessage; // x0
  BoardMessageEntity_o *v38; // x24
  __int64 v39; // x8
  BoardMessageEntity_o *v40; // x26
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v41; // x25
  System_String_o *v42; // x20
  int64_t endTime; // x19
  QuestBoardInformaionText_o *v44; // x24
  const MethodInfo *v45; // x6
  int v46; // w8
  void *v47; // x23
  unsigned int v48; // w27
  EventEntity_o *v49; // x24
  int32_t id; // w25
  _DWORD *v51; // x26
  const MethodInfo *v52; // x3
  int32_t v53; // w19
  BoardMessageEntity_o *v54; // x25
  System_String_o *v55; // x19
  Il2CppObject *EventName; // x0
  System_String_o *v57; // x19
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v58; // x25
  int64_t v59; // x20
  QuestBoardInformaionText_o *v60; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v61; // x24
  __int64 v62; // x0
  EventCampaignEntity_o *v63; // [xsp+0h] [xbp-B0h]
  const MethodInfo *v64; // [xsp+10h] [xbp-A0h]
  struct MapControl_QuestInfo_o *v65; // [xsp+20h] [xbp-90h]
  struct MapControl_AreaBoardInfo_o *v66; // [xsp+28h] [xbp-88h]
  DataMasterBase_WarMaster__WarEntity__int__o *v67; // [xsp+30h] [xbp-80h]
  int32_t v68; // [xsp+3Ch] [xbp-74h]
  DataManager_o *v69; // [xsp+40h] [xbp-70h]
  WarEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v73; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v74; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_438C7EB & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_BoardMessageMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_WarMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&QuestBoardInformaionText_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_24025/*"{0}"*/);
    sub_B775C4(&StringLiteral_13657/*"TIME_REST_QUEST_BOARD_EVENT"*/);
    sub_B775C4(&StringLiteral_13655/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/);
    byte_438C7EB = 1;
  }
  entity = 0LL;
  QuestBoardListViewItemDraw__ResetInfoTextList(this, (const MethodInfo *)questBoardItem);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !questBoardItem )
    goto LABEL_76;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_76;
  AreaBoardInfo_k__BackingField = quest_info_k__BackingField->fields._AreaBoardInfo_k__BackingField;
  if ( !AreaBoardInfo_k__BackingField )
    goto LABEL_76;
  v9 = (DataManager_o *)Instance;
  if ( !Instance )
    goto LABEL_76;
  warId = AreaBoardInfo_k__BackingField->fields.warId;
  MasterData_WarQuestSelectionMaster = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  v67 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         v9,
                                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventMaster___);
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               v9,
               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_BoardMessageMaster___);
  if ( !Instance )
    goto LABEL_76;
  v69 = v9;
  v65 = quest_info_k__BackingField;
  v66 = AreaBoardInfo_k__BackingField;
  Instance = BoardMessageMaster__GetDataCondCheck((BoardMessageMaster_o *)Instance, warId, checkTime, 0LL);
  if ( !Instance )
    goto LABEL_76;
  v12 = *((_QWORD *)Instance + 3);
  v13 = (BoardMessageEntity_array *)Instance;
  v68 = warId;
  if ( (int)v12 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      v15 = v13->m_Items[v14];
      if ( !v15 )
        break;
      switch ( v15->fields.referenceType )
      {
        case 1:
          message = v15->fields.message;
          closedAt = v15->fields.closedAt;
          mInfoTextList = this->fields.mInfoTextList;
          v19 = (QuestBoardInformaionText_o *)sub_B77694(QuestBoardInformaionText_TypeInfo);
          v21 = (EventMissionProgressRequest_Argument_ProgressData_o *)v19;
          v22 = v15;
          v23 = message;
          v24 = closedAt;
          goto LABEL_28;
        case 2:
          Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                       v69,
                       (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !Instance )
            goto LABEL_76;
          Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                       v15->fields.referenceId,
                       (const MethodInfo_21FB894 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_30;
          v32 = *((int *)Instance + 39);
          break;
        case 3:
          Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                       v69,
                       (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !Instance )
            goto LABEL_76;
          Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                       v15->fields.referenceId,
                       (const MethodInfo_21FB894 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_30;
          v32 = *((int *)Instance + 40);
          break;
        case 4:
          Instance = v67;
          if ( !v67 )
            goto LABEL_76;
          Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       v67,
                       v15->fields.referenceId,
                       (const MethodInfo_21FB894 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_30;
          v32 = *((_QWORD *)Instance + 12);
          break;
        case 5:
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_76;
          Data = EventCampaignMaster__getData(MasterData_WarQuestSelectionMaster, v15->fields.referenceId, 0LL);
          v26 = v15->fields.message;
          v27 = v15->fields.closedAt;
          v28 = Data;
          v29 = this->fields.mInfoTextList;
          v30 = (QuestBoardInformaionText_o *)sub_B77694(QuestBoardInformaionText_TypeInfo);
          QuestBoardInformaionText___ctor_27878864(v30, v15, v26, v27, checkTime, v28, v31);
          if ( !v29 )
            goto LABEL_76;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v29,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
          warId = v68;
          goto LABEL_30;
        default:
          goto LABEL_30;
      }
      if ( v32 - checkTime >= 0 )
      {
        v33 = v15->fields.message;
        mInfoTextList = this->fields.mInfoTextList;
        v19 = (QuestBoardInformaionText_o *)sub_B77694(QuestBoardInformaionText_TypeInfo);
        v21 = (EventMissionProgressRequest_Argument_ProgressData_o *)v19;
        v22 = v15;
        v23 = v33;
        v24 = v32;
LABEL_28:
        QuestBoardInformaionText___ctor_27878864(v19, v22, v23, v24, checkTime, 0LL, v20);
        if ( !mInfoTextList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mInfoTextList,
          v21,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
      }
LABEL_30:
      if ( (int)++v14 >= (int)v12 )
        goto LABEL_33;
      if ( v14 >= v13->max_length )
        goto LABEL_77;
    }
LABEL_76:
    sub_B7769C(Instance, v6);
  }
LABEL_33:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Instance )
    goto LABEL_76;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         warId,
         (const MethodInfo_21FB8F0 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( !entity )
      goto LABEL_76;
    HasFlag = WarEntity__HasFlag(entity, 0x80000, 0LL);
  }
  else
  {
    HasFlag = 0;
  }
  if ( v66->fields.eventEnt )
  {
    Instance = this->fields.mRarePrismSp;
    if ( !Instance )
      goto LABEL_76;
    Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_76;
    Instance = (void *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
    if ( ((HasFlag | (unsigned int)Instance) & 1) == 0 )
    {
      eventEnt = v66->fields.eventEnt;
      if ( !eventEnt )
        goto LABEL_76;
      OverrideQuestMessage = QuestBoardListViewItemDraw__FindOverrideQuestMessage(
                               (QuestBoardListViewItemDraw_o *)Instance,
                               v13,
                               eventEnt->fields.id,
                               v35);
      if ( v66->fields.eventEnt )
      {
        v38 = OverrideQuestMessage;
        Instance = (void *)EventEntity__IsEventPeriod(v66->fields.eventEnt, checkTime, 0LL);
        if ( !v38 && ((unsigned __int8)Instance & 1) != 0 )
        {
          v39 = *(_QWORD *)&v13->max_length;
          if ( v39 )
          {
            if ( !(_DWORD)v39 )
              goto LABEL_77;
            v40 = v13->m_Items[0];
          }
          else
          {
            v40 = 0LL;
          }
          v41 = this->fields.mInfoTextList;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v42 = LocalizationManager__Get((System_String_o *)StringLiteral_13657/*"TIME_REST_QUEST_BOARD_EVENT"*/, 0LL);
          endTime = v65->fields.endTime;
          v44 = (QuestBoardInformaionText_o *)sub_B77694(QuestBoardInformaionText_TypeInfo);
          QuestBoardInformaionText___ctor_27878864(v44, v40, v42, endTime, checkTime, 0LL, v45);
          if ( !v41 )
            goto LABEL_76;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v41,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v44,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
          warId = v68;
        }
      }
    }
  }
  Instance = v67;
  if ( !v67 )
    goto LABEL_76;
  Instance = EventMaster__GetEnableEntityList((EventMaster_o *)v67, 7, 1, 0LL);
  if ( !Instance )
    goto LABEL_76;
  v46 = *((_DWORD *)Instance + 6);
  v47 = Instance;
  if ( v46 >= 1 )
  {
    v48 = 0;
    while ( v48 < v46 )
    {
      v49 = (EventEntity_o *)*((_QWORD *)v47 + (int)v48 + 4);
      if ( !v49 || !MasterData_WarQuestSelectionMaster )
        goto LABEL_76;
      id = v49->fields.id;
      Instance = EventCampaignMaster__getData(MasterData_WarQuestSelectionMaster, id, 0LL);
      if ( Instance )
      {
        v51 = Instance;
        Instance = (void *)EventCampaignEntity__isDispWarId((EventCampaignEntity_o *)Instance, warId, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          v53 = v51[5];
          v54 = QuestBoardListViewItemDraw__FindOverrideQuestMessage(
                  (QuestBoardListViewItemDraw_o *)Instance,
                  v13,
                  id,
                  v52);
          Instance = (void *)CombineAdjustTarget__isTerminalExposable(v53, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 && !v54 )
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v55 = LocalizationManager__Get((System_String_o *)StringLiteral_13655/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, 0LL);
            EventName = (Il2CppObject *)EventEntity__getEventName(v49, 0LL);
            v57 = System_String__Format_44897472(v55, EventName, (Il2CppObject *)StringLiteral_24025/*"{0}"*/, 0LL);
            v58 = this->fields.mInfoTextList;
            v59 = EventEntity__GetEndTime(v49, 0, 0LL);
            v60 = (QuestBoardInformaionText_o *)sub_B77694(QuestBoardInformaionText_TypeInfo);
            v74.fields.r = 0.0;
            v74.fields.g = 0.0;
            v74.fields.b = 0.0;
            v74.fields.a = 0.0;
            v73.fields.x = 0.0;
            v73.fields.y = 0.0;
            v73.fields.z = 0.0;
            v61 = (EventMissionProgressRequest_Argument_ProgressData_o *)v60;
            QuestBoardInformaionText___ctor(v60, v57, v59, 1, 0, v74, -1, 0, v73, 1, v63, 0LL, v64);
            if ( !v58 )
              goto LABEL_76;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v58,
              v61,
              (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
            warId = v68;
          }
        }
      }
      v46 = *((_DWORD *)v47 + 6);
      if ( (int)++v48 >= v46 )
        return;
    }
LABEL_77:
    v62 = sub_B776C8(Instance);
    sub_B77668(v62, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
QuestBoardInformaionText_o *__fastcall QuestBoardListViewItemDraw__CreateQuestBoardInformationText(
        QuestBoardListViewItemDraw_o *this,
        QuestEntity_o *questEntity,
        EventEntity_o *eventEnt,
        EventCampaignEntity_o *eventCampaignEnt,
        int32_t phase,
        bool isQuestNoneCleared,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw___c__DisplayClass354_0_o *v13; // x25
  WarQuestSelectionMaster_o *isTerminalExposable; // x0
  QuestBoardListViewManager_c *v15; // x1
  int target; // w26
  QuestBoardInformaionText_o *v17; // x27
  int32_t id; // w27
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  struct ListViewManager_o *manager; // x8
  __int64 v21; // x10
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_UserOwnItemInfo__o *ContinueItemInfoList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v24; // x21
  peRenderTexture_ChangeLayerObject_o *v25; // x0
  UserOwnItemInfo_o *v26; // x20
  System_String_o *v27; // x21
  __int64 v28; // x2
  Il2CppObject *v29; // x0
  System_String_o *v30; // x21
  System_String_o *EventName; // x22
  int32_t ImageId; // w20
  TerminalBoardOptionTextData_o *dispTextExtend; // x23
  int64_t v34; // x19
  System_String_o *v35; // x0
  System_String_o *v36; // x20
  int64_t EndTime; // x19
  QuestPhaseEntity_o *Entity; // x0
  struct System_Int32_array *targetIds; // x8
  int32_t consumeType; // w8
  System_String_o *v41; // x20
  Il2CppObject *v42; // x0
  System_String_o *v43; // x20
  int64_t v44; // x19
  QuestBoardInformaionText_o *v45; // x0
  int v46; // s0
  int v47; // s1
  int v48; // s2
  int v49; // s3
  int v50; // s4
  int v51; // s5
  int v52; // s6
  QuestBoardInformaionText_o *result; // x0
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x21
  System_String_o *detail; // x23
  int64_t v56; // x0
  int64_t checkTime; // x24
  int64_t v58; // x25
  QuestBoardInformaionText_o *v59; // x22
  const MethodInfo *v60; // x6
  QuestBoardListViewItemDraw_o *v61; // x0
  QuestEntity_o *v62; // x1
  EventCampaignEntity_o *v63; // x2
  bool v64; // w3
  int32_t *v65; // x4
  int32_t *v66; // x5
  const MethodInfo *v67; // x6
  EventCampaignEntity_o *v68; // [xsp+0h] [xbp-70h]
  const MethodInfo *v69; // [xsp+10h] [xbp-60h]
  int32_t Num_k__BackingField; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v71; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Vector3_o v72; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v74; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_438C814 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_EventCampaignReleaseMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserOwnItemInfo__Find__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_System_Predicate_UserOwnItemInfo___ctor__);
    sub_B775C4(&System_Predicate_UserOwnItemInfo__TypeInfo);
    sub_B775C4(&QuestBoardInformaionText_TypeInfo);
    sub_B775C4(&QuestBoardListViewManager_TypeInfo);
    sub_B775C4(&TerminalBoardOptionTextData_TypeInfo);
    sub_B775C4(&Method_QuestBoardListViewItemDraw___c__DisplayClass354_0__CreateQuestBoardInformationText_b__0__);
    sub_B775C4(&QuestBoardListViewItemDraw___c__DisplayClass354_0_TypeInfo);
    sub_B775C4(&StringLiteral_24025/*"{0}"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_13655/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/);
    sub_B775C4(&StringLiteral_13656/*"TIME_REST_QUEST_BOARD_CAMPAIGN_WITH_ITEM"*/);
    byte_438C814 = 1;
  }
  v13 = (QuestBoardListViewItemDraw___c__DisplayClass354_0_o *)sub_B77694(QuestBoardListViewItemDraw___c__DisplayClass354_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass354_0___ctor(v13, 0LL);
  if ( !eventCampaignEnt )
    goto LABEL_61;
  target = eventCampaignEnt->fields.target;
  isTerminalExposable = (WarQuestSelectionMaster_o *)CombineAdjustTarget__isTerminalExposable(target, 0LL);
  v17 = 0LL;
  if ( ((unsigned __int8)isTerminalExposable & 1) == 0 )
    return v17;
  if ( !eventEnt )
    goto LABEL_61;
  id = eventEnt->fields.id;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  isTerminalExposable = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_EventCampaignReleaseMaster___);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_61;
  manager = mListViewObject->fields.manager;
  if ( !manager )
    goto LABEL_61;
  v15 = QuestBoardListViewManager_TypeInfo;
  v21 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v21
    && (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[v21 - 1] == QuestBoardListViewManager_TypeInfo )
  {
    if ( !v13 )
      goto LABEL_61;
    v13->fields.checkTime = (int64_t)manager[1].fields.rightItem;
    if ( !isTerminalExposable )
      goto LABEL_61;
    isTerminalExposable = (WarQuestSelectionMaster_o *)EventCampaignReleaseMaster__isRelease(
                                                         (EventCampaignReleaseMaster_o *)isTerminalExposable,
                                                         id,
                                                         eventCampaignEnt->fields.target,
                                                         0LL);
    if ( ((unsigned __int8)isTerminalExposable & 1) == 0 )
    {
      if ( target != 25 || isQuestNoneCleared )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v35 = LocalizationManager__Get((System_String_o *)StringLiteral_13655/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, 0LL);
        v36 = System_String__Format_44897472(
                v35,
                (Il2CppObject *)eventCampaignEnt->fields.entryCondMessage,
                (Il2CppObject *)StringLiteral_24025/*"{0}"*/,
                0LL);
        EndTime = EventEntity__GetEndTime(eventEnt, 0, 0LL);
        v17 = (QuestBoardInformaionText_o *)sub_B77694(QuestBoardInformaionText_TypeInfo);
        v74.fields.r = 0.0;
        v74.fields.g = 0.0;
        v74.fields.b = 0.0;
        v74.fields.a = 0.0;
        v72.fields.x = 0.0;
        v72.fields.y = 0.0;
        v72.fields.z = 0.0;
        QuestBoardInformaionText___ctor(v17, v36, EndTime, 0, 0, v74, -1, 0, v72, 0, v68, 0LL, v69);
        return v17;
      }
      return 0LL;
    }
    if ( target == 28 )
    {
      ContinueItemInfoList = UserOwnItemDetail__GetContinueItemInfoList(0LL);
      v24 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_UserOwnItemInfo__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v24,
        (Il2CppObject *)v13,
        Method_QuestBoardListViewItemDraw___c__DisplayClass354_0__CreateQuestBoardInformationText_b__0__,
        (const MethodInfo_2C3248C *)Method_System_Predicate_UserOwnItemInfo___ctor__);
      if ( ContinueItemInfoList )
      {
        v25 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)ContinueItemInfoList,
                (System_Predicate_T__o *)v24,
                (const MethodInfo_3053B58 *)Method_System_Collections_Generic_List_UserOwnItemInfo__Find__);
        if ( v25 )
        {
          v26 = (UserOwnItemInfo_o *)v25;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v27 = LocalizationManager__Get((System_String_o *)StringLiteral_13656/*"TIME_REST_QUEST_BOARD_CAMPAIGN_WITH_ITEM"*/, 0LL);
          Num_k__BackingField = v26->fields._Num_k__BackingField;
          v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Num_k__BackingField, v28);
          v30 = System_String__Format_44897472(v27, v29, (Il2CppObject *)StringLiteral_24025/*"{0}"*/, 0LL);
          EventName = EventEntity__getEventName(eventEnt, 0LL);
          ImageId = UserOwnItemInfo__get_ImageId(v26, 0LL);
          dispTextExtend = (TerminalBoardOptionTextData_o *)sub_B77694(TerminalBoardOptionTextData_TypeInfo);
          TerminalBoardOptionTextData___ctor(dispTextExtend, EventName, v30, ImageId, 0LL);
          v34 = EventEntity__GetEndTime(eventEnt, 0, 0LL);
          v17 = (QuestBoardInformaionText_o *)sub_B77694(QuestBoardInformaionText_TypeInfo);
          v73.fields.r = 0.0;
          v73.fields.g = 0.0;
          v73.fields.b = 0.0;
          v73.fields.a = 0.0;
          v71.fields.x = 0.0;
          v71.fields.y = 0.0;
          v71.fields.z = 0.0;
          QuestBoardInformaionText___ctor(v17, v30, v34, 1, 0, v73, -1, 0, v71, 0, v68, dispTextExtend, v69);
          return v17;
        }
        return 0LL;
      }
LABEL_61:
      sub_B7769C(isTerminalExposable, v15);
    }
    if ( target == 25 && !isQuestNoneCleared )
      return 0LL;
    if ( target > 24 )
    {
      if ( target == 26 )
      {
        mInfoTextList = this->fields.mInfoTextList;
        detail = eventEnt->fields.detail;
        v56 = EventEntity__GetEndTime(eventEnt, 0, 0LL);
        checkTime = v13->fields.checkTime;
        v58 = v56;
        v59 = (QuestBoardInformaionText_o *)sub_B77694(QuestBoardInformaionText_TypeInfo);
        QuestBoardInformaionText___ctor_27879288(v59, eventEnt, detail, v58, checkTime, eventCampaignEnt, v60);
        if ( !mInfoTextList )
          goto LABEL_61;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mInfoTextList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v59,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
        return 0LL;
      }
      if ( target != 25 )
        goto LABEL_53;
    }
    else if ( target != 12 )
    {
      goto LABEL_34;
    }
    if ( (eventCampaignEnt->fields.calcType & 0xFFFFFFFE) != 2 )
      return 0LL;
    if ( !questEntity )
      goto LABEL_61;
    consumeType = questEntity->fields.consumeType;
    if ( consumeType != 4 && consumeType != 1 )
      return 0LL;
LABEL_34:
    if ( target == 24 )
    {
      if ( !QuestBoardListViewItemDraw__IsValidSupportSelection(
              (QuestBoardListViewItemDraw_o *)isTerminalExposable,
              questEntity,
              phase,
              v22) )
        return 0LL;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      isTerminalExposable = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( !questEntity || !isTerminalExposable )
        goto LABEL_61;
      Entity = QuestPhaseMaster__GetEntity(
                 (QuestPhaseMaster_o *)isTerminalExposable,
                 questEntity->fields.id,
                 phase,
                 0LL);
      targetIds = eventCampaignEnt->fields.targetIds;
      if ( targetIds )
      {
        if ( Entity && *(_QWORD *)&targetIds->max_length && Entity->fields.isNpcOnly )
          return 0LL;
      }
    }
LABEL_53:
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v41 = LocalizationManager__Get((System_String_o *)StringLiteral_13655/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, 0LL);
    v42 = (Il2CppObject *)EventEntity__getEventName(eventEnt, 0LL);
    v43 = System_String__Format_44897472(v41, v42, (Il2CppObject *)StringLiteral_24025/*"{0}"*/, 0LL);
    v44 = EventEntity__GetEndTime(eventEnt, 0, 0LL);
    v45 = (QuestBoardInformaionText_o *)sub_B77694(QuestBoardInformaionText_TypeInfo);
    v17 = v45;
    v46 = 0;
    v47 = 0;
    v48 = 0;
    v49 = 0;
    v50 = 0;
    v51 = 0;
    v52 = 0;
    QuestBoardInformaionText___ctor(
      v45,
      v43,
      v44,
      1,
      0,
      *(UnityEngine_Color_o *)&v46,
      -1,
      0,
      *(UnityEngine_Vector3_o *)&v50,
      0,
      v68,
      0LL,
      v69);
    return v17;
  }
  v61 = (QuestBoardListViewItemDraw_o *)sub_B77990(manager);
  QuestBoardListViewItemDraw__CalcQuestCost(v61, v62, v63, v64, v65, v66, v67);
  return result;
}


BoardMessageEntity_o *__fastcall QuestBoardListViewItemDraw__FindOverrideQuestMessage(
        QuestBoardListViewItemDraw_o *this,
        BoardMessageEntity_array *boardMessageData,
        int32_t eventId,
        const MethodInfo *method)
{
  signed int max_length; // w8
  __int64 v5; // x9

  if ( !boardMessageData )
    goto LABEL_10;
  max_length = boardMessageData->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0LL;
    while ( 1 )
    {
      this = (QuestBoardListViewItemDraw_o *)boardMessageData->m_Items[v5];
      if ( !this )
        break;
      if ( HIDWORD(this->fields.mCommonAtlas) == 4 && LODWORD(this->fields.mTerminalAtlas) == eventId )
        return (BoardMessageEntity_o *)this;
      if ( (int)++v5 >= max_length )
        return 0LL;
    }
LABEL_10:
    sub_B7769C(this, boardMessageData);
  }
  return 0LL;
}


System_String_o *__fastcall QuestBoardListViewItemDraw__GetApSpriteFileName(int32_t bannerId, const MethodInfo *method)
{
  QuestBoardListViewItemDraw_c *v2; // x0
  System_String_o *QUEST_BOARD_AP_SPNAME_PREFIX; // x19
  System_String_o *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-4h] BYREF

  v6 = bannerId;
  if ( (byte_438C826 & 1) == 0 )
  {
    sub_B775C4(&QuestBoardListViewItemDraw_TypeInfo);
    byte_438C826 = 1;
  }
  v2 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v2 = QuestBoardListViewItemDraw_TypeInfo;
  }
  QUEST_BOARD_AP_SPNAME_PREFIX = v2->static_fields->QUEST_BOARD_AP_SPNAME_PREFIX;
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  return System_String__Concat_44901936(QUEST_BOARD_AP_SPNAME_PREFIX, v4, 0LL);
}


System_Collections_Generic_List_QuestBoardInformaionText__o *__fastcall QuestBoardListViewItemDraw__GetCampaignText(
        QuestBoardListViewItemDraw_o *this,
        int32_t questId,
        int32_t phase,
        bool isQuestNoneCleared,
        int32_t *costCalcVal,
        int32_t *fixedVal,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x19
  bool v14; // w25
  const MethodInfo *v15; // x6
  System_Collections_Generic_IEnumerable_T__o *CampaignTextListByEventQuestMaster; // x0
  QuestBoardListViewManager_c *v17; // x1
  const MethodInfo *v18; // x6
  System_Collections_Generic_IEnumerable_T__o *CampaignTextListByWarGroupMaster; // x0
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  int64_t *manager; // x8
  __int64 v22; // x10
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  QuestReleaseOverwriteEntity_o *v24; // x20
  int64_t endedAt; // x20
  System_String_o *EventName; // x21
  System_String_o *v27; // x0
  System_String_o *v28; // x21
  QuestBoardInformaionText_o *v29; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v30; // x22
  QuestBoardListViewItemDraw_o *v32; // x0
  System_Collections_Generic_List_MapControl_QuestInfo__o *v33; // x1
  int32_t v34; // w2
  bool v35; // w3
  const MethodInfo *v36; // x4
  EventCampaignEntity_o *v37; // [xsp+0h] [xbp-60h]
  const MethodInfo *v38; // [xsp+10h] [xbp-50h]
  WarEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v40; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_438C811 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_EventMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
    sub_B775C4(&System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&QuestBoardInformaionText_TypeInfo);
    sub_B775C4(&QuestBoardListViewManager_TypeInfo);
    sub_B775C4(&StringLiteral_24025/*"{0}"*/);
    sub_B775C4(&StringLiteral_82/*" "*/);
    sub_B775C4(&StringLiteral_13660/*"TIME_REST_STRING"*/);
    byte_438C811 = 1;
  }
  entity = 0LL;
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
  v14 = isQuestNoneCleared;
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)QuestBoardListViewItemDraw__GetCampaignTextListByEventQuestMaster(
                                                                                        this,
                                                                                        questId,
                                                                                        phase,
                                                                                        v14,
                                                                                        costCalcVal,
                                                                                        fixedVal,
                                                                                        v15);
  if ( !v13 )
    goto LABEL_27;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v13,
    CampaignTextListByEventQuestMaster,
    (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
  CampaignTextListByWarGroupMaster = (System_Collections_Generic_IEnumerable_T__o *)QuestBoardListViewItemDraw__GetCampaignTextListByWarGroupMaster(
                                                                                      this,
                                                                                      questId,
                                                                                      phase,
                                                                                      v14,
                                                                                      costCalcVal,
                                                                                      fixedVal,
                                                                                      v18);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v13,
    CampaignTextListByWarGroupMaster,
    (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_27;
  manager = (int64_t *)mListViewObject->fields.manager;
  if ( !manager )
    goto LABEL_27;
  v17 = QuestBoardListViewManager_TypeInfo;
  v22 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*manager + 300) >= (unsigned int)v22
    && *(QuestBoardListViewManager_c **)(*(_QWORD *)(*manager + 200) + 8 * v22 - 8) == QuestBoardListViewManager_TypeInfo )
  {
    if ( !CampaignTextListByEventQuestMaster )
      goto LABEL_27;
    EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                               (QuestReleaseOverwriteMaster_o *)CampaignTextListByEventQuestMaster,
                               questId,
                               manager[71],
                               0LL);
    if ( !EntityByQuestIdAndTime )
      return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v13;
    v24 = EntityByQuestIdAndTime;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !CampaignTextListByEventQuestMaster )
      goto LABEL_27;
    if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            (DataMasterBase_WarMaster__WarEntity__int__o *)CampaignTextListByEventQuestMaster,
            &entity,
            v24->fields.eventId,
            (const MethodInfo_21FB8F0 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v13;
    CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)entity;
    if ( entity )
    {
      if ( LODWORD(entity->fields.age) == 25 )
      {
        endedAt = v24->fields.endedAt;
        if ( endedAt <= 0 )
          endedAt = *(_QWORD *)&entity->fields.eventId;
        EventName = EventEntity__getEventName((EventEntity_o *)entity, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v27 = LocalizationManager__Get((System_String_o *)StringLiteral_13660/*"TIME_REST_STRING"*/, 0LL);
        v28 = System_String__Concat_44905348(
                EventName,
                (System_String_o *)StringLiteral_82/*" "*/,
                v27,
                (System_String_o *)StringLiteral_24025/*"{0}"*/,
                0LL);
        v29 = (QuestBoardInformaionText_o *)sub_B77694(QuestBoardInformaionText_TypeInfo);
        v41.fields.r = 0.0;
        v41.fields.g = 0.0;
        v41.fields.b = 0.0;
        v41.fields.a = 0.0;
        v40.fields.x = 0.0;
        v40.fields.y = 0.0;
        v40.fields.z = 0.0;
        v30 = (EventMissionProgressRequest_Argument_ProgressData_o *)v29;
        QuestBoardInformaionText___ctor(v29, v28, endedAt, 0, 0, v41, -1, 0, v40, 1, v37, 0LL, v38);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v13,
          v30,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
      }
      return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v13;
    }
LABEL_27:
    sub_B7769C(CampaignTextListByEventQuestMaster, v17);
  }
  v32 = (QuestBoardListViewItemDraw_o *)sub_B77990(manager);
  return (System_Collections_Generic_List_QuestBoardInformaionText__o *)QuestBoardListViewItemDraw__HasNewQuestInWar(
                                                                          v32,
                                                                          v33,
                                                                          v34,
                                                                          v35,
                                                                          v36);
}


System_Collections_Generic_List_QuestBoardInformaionText__o *__fastcall QuestBoardListViewItemDraw__GetCampaignTextListByEventQuestMaster(
        QuestBoardListViewItemDraw_o *this,
        int32_t questId,
        int32_t phase,
        bool isQuestNoneCleared,
        int32_t *costCalcVal,
        int32_t *fixedVal,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *EnabledEventCampaignForQuest; // x24
  __int64 *v9; // x22
  void *Instance; // x0
  QuestBoardListViewManager_c *v11; // x1
  DataManager_o *v12; // x20
  EventQuestMaster_o *MasterData_WarQuestSelectionMaster; // x19
  EventCampaignMaster_o *v14; // x28
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  QuestEntity_o *v16; // x23
  __int64 v17; // x9
  EventCampaignReleaseMaster_o *v18; // x27
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x26
  int monitor; // w8
  unsigned int v22; // w22
  EventEntity_o *v23; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v24; // x20
  __int64 v25; // x27
  __int64 v26; // x0
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **current; // x1
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v35; // x20
  EventEntity_o *v36; // x0
  const MethodInfo *v37; // x6
  EventMissionProgressRequest_Argument_ProgressData_o *QuestBoardInformationText; // x1
  System_Collections_Generic_List_EventCampaignEntity__o *v39; // x20
  __int64 v40; // x25
  __int64 v41; // x0
  __int64 v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x1
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v50; // x20
  QuestBoardListViewItemDraw_o *v51; // x0
  const MethodInfo *v52; // x6
  int v53; // w19
  System_Collections_Generic_List_QuestBoardInformaionText__o *result; // x0
  __int64 v55; // x0
  void *v56; // x0
  int v57; // w1
  __int64 v58; // x19
  System_Collections_Generic_List_EventCampaignEntity__o *campaignList; // [xsp+8h] [xbp-C8h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v60; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_T__o v65; // [xsp+38h] [xbp-98h] BYREF
  int v66[2]; // [xsp+50h] [xbp-80h]
  int v67; // [xsp+58h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v68; // [xsp+60h] [xbp-70h] BYREF

  EnabledEventCampaignForQuest = (System_Collections_Generic_IEnumerable_TSource__o *)(unsigned int)questId;
  if ( (byte_438C812 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_EventQuestMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B775C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_B775C4(&Method_System_Func_EventEntity__bool___ctor__);
    sub_B775C4(&System_Func_EventEntity__bool__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
    sub_B775C4(&System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_B775C4(&QuestBoardListViewManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_QuestBoardListViewItemDraw___c__DisplayClass352_0__GetCampaignTextListByEventQuestMaster_b__0__);
    sub_B775C4(&QuestBoardListViewItemDraw___c__DisplayClass352_0_TypeInfo);
    sub_B775C4(&Method_QuestBoardListViewItemDraw___c__DisplayClass352_1__GetCampaignTextListByEventQuestMaster_b__1__);
    sub_B775C4(&QuestBoardListViewItemDraw___c__DisplayClass352_1_TypeInfo);
    byte_438C812 = 1;
  }
  memset(&v68, 0, sizeof(v68));
  v67 = 0;
  v60 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v60,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
  v9 = &Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  v12 = (DataManager_o *)Instance;
  MasterData_WarQuestSelectionMaster = (EventQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventQuestMaster___);
  v14 = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   v12,
                                   (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               v12,
               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_41;
  Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               (int32_t)EnabledEventCampaignForQuest,
               (const MethodInfo_21FB894 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_41;
  v16 = (QuestEntity_o *)Instance;
  Instance = mListViewObject->fields.manager;
  if ( !Instance )
    goto LABEL_41;
  v11 = QuestBoardListViewManager_TypeInfo;
  v17 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v17
    && *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v17 - 8) == QuestBoardListViewManager_TypeInfo )
  {
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_41;
    EnabledEventCampaignForQuest = (System_Collections_Generic_IEnumerable_TSource__o *)EventQuestMaster__GetEnabledEventCampaignForQuest(
                                                                                          MasterData_WarQuestSelectionMaster,
                                                                                          (int32_t)EnabledEventCampaignForQuest,
                                                                                          phase,
                                                                                          *((_QWORD *)Instance + 71),
                                                                                          7,
                                                                                          0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_41;
    v18 = (EventCampaignReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
    v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v19,
      (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v20,
      (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    if ( !EnabledEventCampaignForQuest )
      goto LABEL_41;
    monitor = (int)EnabledEventCampaignForQuest[1].monitor;
    if ( monitor >= 1 )
    {
      v22 = 0;
      while ( 1 )
      {
        if ( v22 >= monitor )
        {
          v55 = sub_B776C8(Instance);
          sub_B77668(v55, 0LL);
        }
        v23 = (EventEntity_o *)*((_QWORD *)&EnabledEventCampaignForQuest[2].klass + (int)v22);
        if ( !v23 || !v14 )
          break;
        Instance = EventCampaignMaster__getData(v14, v23->fields.id, 0LL);
        if ( Instance )
        {
          if ( !v19 )
            break;
          v24 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v19,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
          if ( !v18 )
            break;
          Instance = (void *)EventCampaignReleaseMaster__isRelease(
                               v18,
                               v24->fields.missionTargetId,
                               v24->fields.missionConditionDetailId,
                               0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v20 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v20,
              v24,
              (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
          }
        }
        monitor = (int)EnabledEventCampaignForQuest[1].monitor;
        if ( (int)++v22 >= monitor )
          goto LABEL_24;
      }
LABEL_41:
      sub_B7769C(Instance, v11);
    }
LABEL_24:
    Instance = EventCampaignMaster__CheckCampaignGrouping(
                 (System_Collections_Generic_List_EventCampaignEntity__o *)v19,
                 0LL);
    if ( !Instance )
      goto LABEL_41;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v65,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v14 = (EventCampaignMaster_o *)&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__;
    v9 = &Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___;
    v68 = v65;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v68,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
    {
      v25 = sub_B77694(QuestBoardListViewItemDraw___c__DisplayClass352_0_TypeInfo);
      QuestBoardListViewItemDraw___c__DisplayClass352_0___ctor(
        (QuestBoardListViewItemDraw___c__DisplayClass352_0_o *)v25,
        0LL);
      if ( !v25 )
        sub_B7769C(v26, v27);
      current = (System_Int32_array **)v68.fields.current;
      *(_QWORD *)(v25 + 16) = v68.fields.current;
      sub_B77560((BattleServantConfConponent_o *)(v25 + 16), current, v28, v29, v30, v31, v32, v33);
      v35 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_EventEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v35,
        (Il2CppObject *)v25,
        Method_QuestBoardListViewItemDraw___c__DisplayClass352_0__GetCampaignTextListByEventQuestMaster_b__0__,
        (const MethodInfo_29E92C4 *)Method_System_Func_EventEntity__bool___ctor__);
      v36 = (EventEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                               EnabledEventCampaignForQuest,
                               (System_Func_TSource__bool__o *)v35,
                               (const MethodInfo_1D31FE4 *)Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___);
      QuestBoardInformationText = (EventMissionProgressRequest_Argument_ProgressData_o *)QuestBoardListViewItemDraw__CreateQuestBoardInformationText(
                                                                                           this,
                                                                                           v16,
                                                                                           v36,
                                                                                           *(EventCampaignEntity_o **)(v25 + 16),
                                                                                           phase,
                                                                                           isQuestNoneCleared,
                                                                                           v37);
      if ( QuestBoardInformationText )
      {
        if ( !v60 )
          sub_B7769C(0LL, QuestBoardInformationText);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v60,
          QuestBoardInformationText,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
      }
    }
    v66[0] = 309;
    v67 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v68,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    v39 = (System_Collections_Generic_List_EventCampaignEntity__o *)v20;
    v67 = 0;
  }
  else
  {
    v56 = (void *)sub_B77990(Instance);
    v39 = campaignList;
    if ( v57 != 1 )
      _Unwind_Resume(v56);
    v58 = *(_QWORD *)__cxa_begin_catch(v56);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v68,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    if ( v58 )
      sub_B77668(v58, 0LL);
  }
  Instance = EventCampaignMaster__CheckCampaignGrouping(v39, 0LL);
  if ( !Instance )
    goto LABEL_41;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v65,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v68 = v65;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v68,
            (const MethodInfo_225C720 *)v14->klass) )
  {
    v40 = sub_B77694(QuestBoardListViewItemDraw___c__DisplayClass352_1_TypeInfo);
    QuestBoardListViewItemDraw___c__DisplayClass352_1___ctor(
      (QuestBoardListViewItemDraw___c__DisplayClass352_1_o *)v40,
      0LL);
    if ( !v40 )
      sub_B7769C(v41, v42);
    v49 = (System_Int32_array **)v68.fields.current;
    *(_QWORD *)(v40 + 16) = v68.fields.current;
    sub_B77560((BattleServantConfConponent_o *)(v40 + 16), v49, v43, v44, v45, v46, v47, v48);
    v50 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_EventEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v50,
      (Il2CppObject *)v40,
      Method_QuestBoardListViewItemDraw___c__DisplayClass352_1__GetCampaignTextListByEventQuestMaster_b__1__,
      (const MethodInfo_29E92C4 *)Method_System_Func_EventEntity__bool___ctor__);
    v51 = (QuestBoardListViewItemDraw_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                            EnabledEventCampaignForQuest,
                                            (System_Func_TSource__bool__o *)v50,
                                            (const MethodInfo_1D31FE4 *)*v9);
    QuestBoardListViewItemDraw__CalcQuestCost(
      v51,
      v16,
      *(EventCampaignEntity_o **)(v40 + 16),
      isQuestNoneCleared,
      costCalcVal,
      fixedVal,
      v52);
  }
  v66[0] = 415;
  v53 = ++v67;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v68,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  result = (System_Collections_Generic_List_QuestBoardInformaionText__o *)v60;
  if ( v53 && v66[v53 - 1] == 415 )
    v67 = v53 - 1;
  return result;
}


System_Collections_Generic_List_QuestBoardInformaionText__o *__fastcall QuestBoardListViewItemDraw__GetCampaignTextListByWarGroupMaster(
        QuestBoardListViewItemDraw_o *this,
        int32_t questId,
        int32_t phase,
        bool isQuestNoneCleared,
        int32_t *costCalcVal,
        int32_t *fixedVal,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x23
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  DataManager_o *v12; // x20
  EventMaster_o *MasterData_WarQuestSelectionMaster; // x19
  EventCampaignMaster_o *v14; // x24
  QuestEntity_o *v15; // x26
  DataManager_o *v16; // x27
  int32_t spotId; // w19
  int32_t v18; // w28
  int datalist; // w8
  unsigned int v20; // w22
  bool v21; // w25
  EventEntity_o *v22; // x19
  struct System_Byte_array *masterDataBytes; // x8
  EventCampaignEntity_o *v24; // x20
  const MethodInfo *v25; // x6
  QuestBoardInformaionText_o *QuestBoardInformationText; // x19
  const MethodInfo *v27; // x6
  __int64 v29; // x0
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_438C813 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_WarGroupMaster___);
    sub_B775C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
    sub_B775C4(&System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438C813 = 1;
  }
  entity = 0LL;
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  v12 = Instance;
  MasterData_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          Instance,
                                                          (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventMaster___);
  v14 = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   v12,
                                   (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                v12,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                questId,
                                (const MethodInfo_21FB894 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_29;
  v15 = (QuestEntity_o *)Instance;
  Instance = (DataManager_o *)EventMaster__GetEnableEntityList(MasterData_WarQuestSelectionMaster, 7, 1, 0LL);
  if ( !v15 )
    goto LABEL_29;
  v16 = Instance;
  spotId = v15->fields.spotId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                &entity,
                                spotId,
                                (const MethodInfo_21FB8F0 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_29;
    v18 = *(&entity->fields.id + 1);
    if ( v18 )
    {
      if ( !v16 )
        goto LABEL_29;
      datalist = (int)v16->fields.datalist;
      if ( datalist >= 1 )
      {
        v20 = 0;
        v21 = isQuestNoneCleared;
        while ( 1 )
        {
          if ( v20 >= datalist )
          {
            v29 = sub_B776C8(Instance);
            sub_B77668(v29, 0LL);
          }
          v22 = (EventEntity_o *)*((_QWORD *)&v16->fields.lookup + (int)v20);
          if ( !v22 || !v14 )
            break;
          Instance = (DataManager_o *)EventCampaignMaster__getData(v14, v22->fields.id, 0LL);
          if ( Instance )
          {
            masterDataBytes = Instance->fields.masterDataBytes;
            v24 = (EventCampaignEntity_o *)Instance;
            if ( !masterDataBytes )
              break;
            if ( *(_QWORD *)&masterDataBytes->max_length )
            {
              Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                break;
              Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            Instance,
                                            (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_WarGroupMaster___);
              if ( !Instance )
                break;
              Instance = (DataManager_o *)WarGroupMaster__HasEntity(
                                            (WarGroupMaster_o *)Instance,
                                            v18,
                                            v15->fields.afterClear,
                                            v15->fields.type,
                                            v24->fields.targetIds,
                                            0LL);
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
                  v27);
                if ( QuestBoardInformationText )
                {
                  if ( !v9 )
                    break;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v9,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)QuestBoardInformationText,
                    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
                }
              }
            }
          }
          datalist = (int)v16->fields.datalist;
          if ( (int)++v20 >= datalist )
            return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v9;
        }
LABEL_29:
        sub_B7769C(Instance, v11);
      }
    }
  }
  return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v9;
}


System_String_o *__fastcall QuestBoardListViewItemDraw__GetDispQuestName(
        QuestBoardListViewItemDraw_o *this,
        QuestEntity_o *questEnt,
        int32_t questType,
        const MethodInfo *method)
{
  System_String_o *v6; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  Il2CppObject *BattleName; // x1

  if ( (byte_438C7F8 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (QuestBoardListViewItemDraw_o *)sub_B775C4(&StringLiteral_24025/*"{0}"*/);
    byte_438C7F8 = 1;
  }
  if ( !questEnt )
    goto LABEL_13;
  this = (QuestBoardListViewItemDraw_o *)QuestEntity__getQuestName(questEnt, 0LL);
  v6 = (System_String_o *)this;
  if ( (unsigned int)questType <= 5 && ((1 << questType) & 0x2C) != 0 )
  {
    if ( !this )
      goto LABEL_13;
    if ( System_String__Contains((System_String_o *)this, (System_String_o *)StringLiteral_24025/*"{0}"*/, 0LL) )
    {
      this = (QuestBoardListViewItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)this,
                                                                                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
        this = (QuestBoardListViewItemDraw_o *)QuestEntity__getServantId(questEnt, 0LL);
        if ( MasterData_WarQuestSelectionMaster )
        {
          this = (QuestBoardListViewItemDraw_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                   MasterData_WarQuestSelectionMaster,
                                                   (int32_t)this,
                                                   (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( this )
          {
            BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)this, 0, -1, 0LL);
            return System_String__Format(v6, BattleName, 0LL);
          }
        }
      }
LABEL_13:
      sub_B7769C(this, questEnt);
    }
  }
  return v6;
}


System_String_o *__fastcall QuestBoardListViewItemDraw__GetEventAddBannerSpriteName(
        QuestBoardListViewItemDraw_o *this,
        EventEntity_o *eventEnt,
        int32_t warId,
        bool isActiveEventWar,
        const MethodInfo *method)
{
  EventAddMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  __int64 v11; // x21
  EventAddEntity_o *OverwriteEventAddEntity; // x0
  WarEntity_o *Entity; // x0
  __int64 v14; // x2
  QuestBoardListViewItemDraw_c *v15; // x8
  System_String_o *EVENT_WAR_SUBFOLDER_SPNAME_PREFIX; // x20
  Il2CppObject *v17; // x0
  QuestBoardListViewItemDraw_c *v19; // x0
  System_String_o *EVENT_WAR_SPNAME_PREFIX; // x19
  System_String_o *v21; // x0
  int32_t v22; // [xsp+8h] [xbp-28h] BYREF
  int32_t overwriteId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_438C802 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_EventAddMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_WarMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&QuestBoardListViewItemDraw_TypeInfo);
    byte_438C802 = 1;
  }
  overwriteId = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_EventAddMaster___);
  if ( !eventEnt || !Master_WarQuestSelectionMaster )
    goto LABEL_37;
  if ( isActiveEventWar )
    v10 = 4;
  else
    v10 = 5;
  if ( isActiveEventWar )
    v11 = 60LL;
  else
    v11 = 56LL;
  OverwriteEventAddEntity = EventAddMaster__getOverwriteEventAddEntity(
                              Master_WarQuestSelectionMaster,
                              eventEnt->fields.id,
                              v10,
                              0LL);
  overwriteId = *(_DWORD *)((char *)&eventEnt->klass + v11);
  if ( OverwriteEventAddEntity )
    overwriteId = OverwriteEventAddEntity->fields.overwriteId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_37;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
             warId,
             (const MethodInfo_21FB894 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( Entity
    && Entity->fields.parentWarId
    && Entity->fields.eventId == eventEnt->fields.id
    && WarEntity__HasFlag(Entity, 0x80000, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_WarMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      Master_WarQuestSelectionMaster = (EventAddMaster_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                             (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                             warId,
                                                             (const MethodInfo_21FB894 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
      if ( Master_WarQuestSelectionMaster )
      {
        overwriteId = WarEntity__GetPrioredBannerId((WarEntity_o *)Master_WarQuestSelectionMaster, 0LL);
        v15 = QuestBoardListViewItemDraw_TypeInfo;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v15 = QuestBoardListViewItemDraw_TypeInfo;
        }
        EVENT_WAR_SUBFOLDER_SPNAME_PREFIX = v15->static_fields->EVENT_WAR_SUBFOLDER_SPNAME_PREFIX;
        v22 = overwriteId;
        v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v14);
        return System_String__Format(EVENT_WAR_SUBFOLDER_SPNAME_PREFIX, v17, 0LL);
      }
    }
LABEL_37:
    sub_B7769C(Master_WarQuestSelectionMaster, v9);
  }
  v19 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v19 = QuestBoardListViewItemDraw_TypeInfo;
  }
  EVENT_WAR_SPNAME_PREFIX = v19->static_fields->EVENT_WAR_SPNAME_PREFIX;
  v21 = System_Int32__ToString((int32_t)&overwriteId, 0LL);
  return System_String__Concat_44901936(EVENT_WAR_SPNAME_PREFIX, v21, 0LL);
}


System_String_o *__fastcall QuestBoardListViewItemDraw__GetFaceMaskSpriteName(
        QuestBoardListViewItemDraw_o *this,
        int32_t questType,
        const MethodInfo *method)
{
  System_String_o **p_QUEST_MAIN_FACE_MASK_SPNAME; // x8
  QuestBoardListViewItemDraw_c *v5; // x0
  QuestBoardListViewItemDraw_c *v6; // x0
  QuestBoardListViewItemDraw_c *v7; // x0

  if ( (byte_438C7F7 & 1) == 0 )
  {
    sub_B775C4(&QuestBoardListViewItemDraw_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438C7F7 = 1;
  }
  p_QUEST_MAIN_FACE_MASK_SPNAME = (System_String_o **)&StringLiteral_1/*""*/;
  switch ( questType )
  {
    case 1:
      v6 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v6 = QuestBoardListViewItemDraw_TypeInfo;
      }
      p_QUEST_MAIN_FACE_MASK_SPNAME = &v6->static_fields->QUEST_MAIN_FACE_MASK_SPNAME;
      break;
    case 2:
    case 5:
      v5 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v5 = QuestBoardListViewItemDraw_TypeInfo;
      }
      p_QUEST_MAIN_FACE_MASK_SPNAME = &v5->static_fields->QUEST_EVENT_FACE_MASK_SPNAME;
      break;
    case 3:
      v7 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v7 = QuestBoardListViewItemDraw_TypeInfo;
      }
      p_QUEST_MAIN_FACE_MASK_SPNAME = &v7->static_fields->QUEST_STORY_FACE_MASK_SPNAME;
      break;
    default:
      return *p_QUEST_MAIN_FACE_MASK_SPNAME;
  }
  return *p_QUEST_MAIN_FACE_MASK_SPNAME;
}


int32_t __fastcall QuestBoardListViewItemDraw__GetPhaseArrowIntervalSize(
        QuestBoardListViewItemDraw_o *this,
        int32_t phaseType,
        bool isRepeatLast,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw_c *v6; // x0
  QuestBoardListViewItemDraw_c *v8; // x0

  if ( (byte_438C80F & 1) == 0 )
  {
    sub_B775C4(&QuestBoardListViewItemDraw_TypeInfo);
    byte_438C80F = 1;
  }
  if ( phaseType == 1 )
  {
    v8 = QuestBoardListViewItemDraw_TypeInfo;
    if ( isRepeatLast )
    {
      if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v8 = QuestBoardListViewItemDraw_TypeInfo;
      }
      return v8->static_fields->QUEST_BOARD_PHASE_EX_LOOF_INTERVAL;
    }
    else
    {
      if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v8 = QuestBoardListViewItemDraw_TypeInfo;
      }
      return v8->static_fields->QUEST_BOARD_PHASE_EX_INTERVAL;
    }
  }
  else if ( phaseType )
  {
    return 0;
  }
  else
  {
    v6 = QuestBoardListViewItemDraw_TypeInfo;
    if ( isRepeatLast )
    {
      if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v6 = QuestBoardListViewItemDraw_TypeInfo;
      }
      return v6->static_fields->QUEST_BOARD_PHASE_LOOF_INTERVAL;
    }
    else
    {
      if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v6 = QuestBoardListViewItemDraw_TypeInfo;
      }
      return v6->static_fields->QUEST_BOARD_PHASE_INTERVAL;
    }
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
  QuestBoardListViewItemDraw_c *v16; // x0
  QuestBoardListViewItemDraw_c *v17; // x0

  if ( (byte_438C80E & 1) == 0 )
  {
    sub_B775C4(&QuestBoardListViewItemDraw_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438C80E = 1;
  }
  if ( isLastIndex && isRepeatFirst )
  {
    v12 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v12 = QuestBoardListViewItemDraw_TypeInfo;
    }
    p_msPhaseSprName_LoopFirstOff = &v12->static_fields->msPhaseSprName_LoopFirstOff;
  }
  else if ( isRepeatLast )
  {
    v15 = QuestBoardListViewItemDraw_TypeInfo;
    if ( isOn )
    {
      if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v15 = QuestBoardListViewItemDraw_TypeInfo;
      }
      p_msPhaseSprName_LoopFirstOff = &v15->static_fields->msPhaseSprName_LoopOn;
    }
    else
    {
      if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v15 = QuestBoardListViewItemDraw_TypeInfo;
      }
      p_msPhaseSprName_LoopFirstOff = &v15->static_fields->msPhaseSprName_LoopOff;
    }
  }
  else if ( phaseType == 1 )
  {
    v17 = QuestBoardListViewItemDraw_TypeInfo;
    if ( isOn )
    {
      if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v17 = QuestBoardListViewItemDraw_TypeInfo;
      }
      p_msPhaseSprName_LoopFirstOff = &v17->static_fields->msPhaseSprName_ExArrowOn;
    }
    else
    {
      if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v17 = QuestBoardListViewItemDraw_TypeInfo;
      }
      p_msPhaseSprName_LoopFirstOff = &v17->static_fields->msPhaseSprName_ExArrowOff;
    }
  }
  else if ( phaseType )
  {
    p_msPhaseSprName_LoopFirstOff = (System_String_o **)&StringLiteral_1/*""*/;
  }
  else
  {
    v16 = QuestBoardListViewItemDraw_TypeInfo;
    if ( isOn )
    {
      if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v16 = QuestBoardListViewItemDraw_TypeInfo;
      }
      p_msPhaseSprName_LoopFirstOff = &v16->static_fields->msPhaseSprName_ArrowOn;
    }
    else
    {
      if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v16 = QuestBoardListViewItemDraw_TypeInfo;
      }
      p_msPhaseSprName_LoopFirstOff = &v16->static_fields->msPhaseSprName_ArrowOff;
    }
  }
  return *p_msPhaseSprName_LoopFirstOff;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestBoardListViewItemDraw__GetPhasePresentGiftData(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItemDraw_PhasePresentData_o **phasePresentData,
        QuestEntity_o *questEnt,
        int32_t currentPhase,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  QuestPhasePresentMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  QuestBoardListViewItemDraw_PhasePresentData_o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  QuestPhasePresentEntity_o *v20; // x8
  QuestPhasePresentEntity_o *presentEnt; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438C7FE & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_QuestPhasePresentMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&QuestBoardListViewItemDraw_PhasePresentData_TypeInfo);
    byte_438C7FE = 1;
  }
  presentEnt = 0LL;
  *phasePresentData = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)phasePresentData,
    0LL,
    (System_String_array **)questEnt,
    *(System_String_array ***)&currentPhase,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestPhasePresentMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_QuestPhasePresentMaster___);
  if ( !questEnt || !Master_WarQuestSelectionMaster )
    goto LABEL_16;
  if ( QuestPhasePresentMaster__IsContainEntityFromPhase(
         Master_WarQuestSelectionMaster,
         &presentEnt,
         questEnt->fields.id,
         currentPhase,
         0LL) )
  {
    if ( !presentEnt )
      return 1;
    v13 = (QuestBoardListViewItemDraw_PhasePresentData_o *)sub_B77694(QuestBoardListViewItemDraw_PhasePresentData_TypeInfo);
    QuestBoardListViewItemDraw_PhasePresentData___ctor(v13, 0LL);
    v20 = presentEnt;
    if ( presentEnt && v13 )
    {
      v13->fields.phase = presentEnt->fields.phase;
      v13->fields.giftId = v20->fields.giftId;
      v13->fields.giftIconId = v20->fields.giftIconId;
      *phasePresentData = v13;
      sub_B77560(
        (BattleServantConfConponent_o *)phasePresentData,
        (System_Int32_array **)v13,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
      return 1;
    }
LABEL_16:
    sub_B7769C(Master_WarQuestSelectionMaster, v12);
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

  if ( (byte_438C7FA & 1) == 0 )
  {
    sub_B775C4(&QuestBoardListViewItemDraw_TypeInfo);
    sub_B775C4(&StringLiteral_19991/*"img_questtxt_free"*/);
    sub_B775C4(&StringLiteral_19990/*"img_questtxt_event"*/);
    this = (QuestBoardListViewItemDraw_o *)sub_B775C4(&StringLiteral_1/*""*/);
    byte_438C7FA = 1;
  }
  if ( !questEnt )
    sub_B7769C(this, questEnt);
  iconId = questEnt->fields.iconId;
  v6 = (_DWORD)questEnt + 68;
  if ( iconId < 1 )
  {
    if ( questType == 5 )
    {
      v12 = &StringLiteral_19990/*"img_questtxt_event"*/;
    }
    else if ( questType == 2 )
    {
      v12 = &StringLiteral_19991/*"img_questtxt_free"*/;
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
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v8 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_ICON_SPNAME_PREFIX = v8->static_fields->QUEST_BOARD_ICON_SPNAME_PREFIX;
    v10 = System_Int32__ToString(v6, 0LL);
    return System_String__Concat_44901936(QUEST_BOARD_ICON_SPNAME_PREFIX, v10, 0LL);
  }
}


System_String_o *__fastcall QuestBoardListViewItemDraw__GetQuestIconNameForMainType(
        QuestBoardListViewItemDraw_o *this,
        QuestEntity_o *questEnt,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw_c *v4; // x0
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  int32_t v6; // w0
  System_String_o *QUEST_BOARD_ICON_SPNAME_PREFIX; // x19
  System_String_o *v8; // x0
  int32_t chapterId; // w9
  System_String_o *CHAPTER_SP_BASE_NAME; // x19
  Il2CppObject *v12; // x0
  int32_t v13; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_438C7FB & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)sub_B775C4(&QuestBoardListViewItemDraw_TypeInfo);
    byte_438C7FB = 1;
  }
  if ( !questEnt )
    sub_B7769C(this, questEnt);
  v4 = QuestBoardListViewItemDraw_TypeInfo;
  if ( questEnt->fields.iconId < 1 )
  {
    if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v4 = QuestBoardListViewItemDraw_TypeInfo;
    }
    chapterId = questEnt->fields.chapterId;
    CHAPTER_SP_BASE_NAME = v4->static_fields->CHAPTER_SP_BASE_NAME;
    v13 = chapterId;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13, method);
    return System_String__Format(CHAPTER_SP_BASE_NAME, v12, 0LL);
  }
  else
  {
    if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v4 = QuestBoardListViewItemDraw_TypeInfo;
    }
    static_fields = v4->static_fields;
    v6 = (_DWORD)questEnt + 68;
    QUEST_BOARD_ICON_SPNAME_PREFIX = static_fields->QUEST_BOARD_ICON_SPNAME_PREFIX;
    v8 = System_Int32__ToString(v6, 0LL);
    return System_String__Concat_44901936(QUEST_BOARD_ICON_SPNAME_PREFIX, v8, 0LL);
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
    return QuestEntity__getRecommendLv_26429940(questEnt, questPhase, 0LL);
  else
    return 0LL;
}


UnityEngine_GameObject_o *__fastcall QuestBoardListViewItemDraw__GetStatusSp(
        QuestBoardListViewItemDraw_o *this,
        int32_t status,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *mStatusSp; // x8
  __int64 v5; // x0

  mStatusSp = this->fields.mStatusSp;
  if ( !mStatusSp )
    sub_B7769C(this, status);
  if ( status - 1 >= mStatusSp->max_length )
  {
    v5 = sub_B776C8(this);
    sub_B77668(v5, 0LL);
  }
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
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v11; // x20

  if ( (byte_438C7F1 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_Any_MapControl_QuestInfo___);
    sub_B775C4(&Method_System_Func_MapControl_QuestInfo__bool___ctor__);
    sub_B775C4(&System_Func_MapControl_QuestInfo__bool__TypeInfo);
    sub_B775C4(&Method_QuestBoardListViewItemDraw___c__DisplayClass314_0__HasNewQuestInWar_b__0__);
    sub_B775C4(&QuestBoardListViewItemDraw___c__DisplayClass314_0_TypeInfo);
    byte_438C7F1 = 1;
  }
  v8 = (QuestBoardListViewItemDraw___c__DisplayClass314_0_o *)sub_B77694(QuestBoardListViewItemDraw___c__DisplayClass314_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass314_0___ctor(v8, 0LL);
  if ( !v8 )
    sub_B7769C(v9, v10);
  v8->fields.warId = warId;
  v8->fields.isMainInterlude = isMainInterlude;
  v11 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_MapControl_QuestInfo__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v11,
    (Il2CppObject *)v8,
    Method_QuestBoardListViewItemDraw___c__DisplayClass314_0__HasNewQuestInWar_b__0__,
    (const MethodInfo_29E92C4 *)Method_System_Func_MapControl_QuestInfo__bool___ctor__);
  return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
           (System_Collections_Generic_List_T__o *)questList,
           (System_Func_T__bool__o *)v11,
           (const MethodInfo_1C66144 *)Method_BasicHelper_Any_MapControl_QuestInfo___);
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
  UnityEngine_Transform_o *v10; // x20
  QuestBoardListViewItemDraw_c *v11; // x8
  struct QuestBoardListViewItemDraw_StaticFields *v12; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Transform_o *v16; // x20
  QuestBoardListViewItemDraw_c *v17; // x8
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  UnityEngine_Transform_o *v19; // x20
  QuestBoardListViewItemDraw_c *v20; // x8
  struct QuestBoardListViewItemDraw_StaticFields *v21; // x8
  struct QuestBoardListViewItemDraw_StaticFields *v22; // x8

  if ( (byte_438C80D & 1) == 0 )
  {
    sub_B775C4(&QuestBoardListViewItemDraw_TypeInfo);
    byte_438C80D = 1;
  }
  mPhaseObj = this->fields.mPhaseObj;
  if ( !isDoubleItemConsumeQp )
  {
    if ( isDoubleItemConsume )
    {
      if ( mPhaseObj )
      {
        mPhaseObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(mPhaseObj, 0LL);
        v16 = (UnityEngine_Transform_o *)mPhaseObj;
        v17 = QuestBoardListViewItemDraw_TypeInfo;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v17 = QuestBoardListViewItemDraw_TypeInfo;
        }
        if ( v16 )
        {
          UnityEngine_Transform__set_localPosition(v16, v17->static_fields->PHASE_OBJ_POS_DOUBLE, 0LL);
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
                  static_fields = QuestBoardListViewItemDraw_TypeInfo->static_fields;
                  x = static_fields->PHASE_STR_SCL_DOUBLE.fields.x;
                  y = static_fields->PHASE_STR_SCL_DOUBLE.fields.y;
                  z = static_fields->PHASE_STR_SCL_DOUBLE.fields.z;
                  goto LABEL_45;
                }
              }
            }
          }
        }
      }
    }
    else if ( mPhaseObj )
    {
      mPhaseObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(mPhaseObj, 0LL);
      v19 = (UnityEngine_Transform_o *)mPhaseObj;
      v20 = QuestBoardListViewItemDraw_TypeInfo;
      if ( isTripleItemConsume )
      {
        if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v20 = QuestBoardListViewItemDraw_TypeInfo;
        }
        if ( v19 )
        {
          UnityEngine_Transform__set_localPosition(v19, v20->static_fields->PHASE_OBJ_POS_TRIPLE_ITEM, 0LL);
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
                  v21 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
                  x = v21->PHASE_STR_SCL_TRIPLE_ITEM.fields.x;
                  y = v21->PHASE_STR_SCL_TRIPLE_ITEM.fields.y;
                  z = v21->PHASE_STR_SCL_TRIPLE_ITEM.fields.z;
                  goto LABEL_45;
                }
              }
            }
          }
        }
      }
      else
      {
        if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v20 = QuestBoardListViewItemDraw_TypeInfo;
        }
        if ( v19 )
        {
          UnityEngine_Transform__set_localPosition(v19, v20->static_fields->PHASE_OBJ_POS_SINGLE, 0LL);
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
                  v22 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
                  x = v22->PHASE_STR_SCL_SINGLE.fields.x;
                  y = v22->PHASE_STR_SCL_SINGLE.fields.y;
                  z = v22->PHASE_STR_SCL_SINGLE.fields.z;
                  goto LABEL_45;
                }
              }
            }
          }
        }
      }
    }
LABEL_46:
    sub_B7769C(mPhaseObj, isDoubleItemConsume);
  }
  if ( !mPhaseObj )
    goto LABEL_46;
  mPhaseObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(mPhaseObj, 0LL);
  v10 = (UnityEngine_Transform_o *)mPhaseObj;
  v11 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v11 = QuestBoardListViewItemDraw_TypeInfo;
  }
  if ( !v10 )
    goto LABEL_46;
  UnityEngine_Transform__set_localPosition(v10, v11->static_fields->PHASE_OBJ_POS_DOUBLE_QP, 0LL);
  mPhaseObj = (UnityEngine_GameObject_o *)this->fields.mPhaseStrSp;
  if ( !mPhaseObj )
    goto LABEL_46;
  mPhaseObj = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)mPhaseObj,
                                            0LL);
  if ( !mPhaseObj )
    goto LABEL_46;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)mPhaseObj,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->PHASE_STR_POS_DOUBLE_QP,
    0LL);
  mPhaseObj = (UnityEngine_GameObject_o *)this->fields.mPhaseStrSp;
  if ( !mPhaseObj )
    goto LABEL_46;
  mPhaseObj = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)mPhaseObj,
                                            0LL);
  if ( !mPhaseObj )
    goto LABEL_46;
  v12 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  x = v12->PHASE_STR_SCL_DOUBLE_QP.fields.x;
  y = v12->PHASE_STR_SCL_DOUBLE_QP.fields.y;
  z = v12->PHASE_STR_SCL_DOUBLE_QP.fields.z;
LABEL_45:
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)mPhaseObj, *(UnityEngine_Vector3_o *)&x, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw__IsBanners(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        const MethodInfo *method)
{
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x8
  struct MapControl_AreaBoardInfo_o *AreaBoardInfo_k__BackingField; // x8

  if ( !questBoardItem || (quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField) == 0LL )
    sub_B7769C(this, questBoardItem);
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
  return questType == 3 || questType == 5 || questType == 2;
}


bool __fastcall QuestBoardListViewItemDraw__IsDisplayNext(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *mNextSp; // x0

  mNextSp = (UnityEngine_Component_o *)this->fields.mNextSp;
  if ( !mNextSp || (mNextSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNextSp, 0LL)) == 0LL )
    sub_B7769C(mNextSp, method);
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)mNextSp, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw__IsDisplayRewardNotGive(
        QuestBoardListViewItemDraw_o *this,
        MapControl_QuestInfo_o *questInfo,
        const MethodInfo *method)
{
  int32_t questPhase; // w20
  int32_t PhaseMax; // w0
  int32_t v6; // w20
  QuestBehaviorMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v8; // x4

  if ( (byte_438C801 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    this = (QuestBoardListViewItemDraw_o *)sub_B775C4(&DataManager_TypeInfo);
    byte_438C801 = 1;
  }
  if ( !questInfo )
    sub_B7769C(this, questInfo);
  questPhase = questInfo->fields.questPhase;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(questInfo, 0LL);
  v6 = UnityEngine_Mathf__Min_41473676(questPhase + 1, PhaseMax, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestBehaviorMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( Master_WarQuestSelectionMaster )
    LOBYTE(Master_WarQuestSelectionMaster) = QuestBehaviorMaster__IsOpenQuestBehaviorCond(
                                               Master_WarQuestSelectionMaster,
                                               questInfo->fields.questId,
                                               v6,
                                               5,
                                               v8);
  return (char)Master_WarQuestSelectionMaster;
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
  float mTouchPosDif; // s8
  QuestBoardListViewItemDraw_c *v4; // x0

  if ( (byte_438C823 & 1) == 0 )
  {
    sub_B775C4(&QuestBoardListViewItemDraw_TypeInfo);
    byte_438C823 = 1;
  }
  mTouchPosDif = this->fields.mTouchPosDif;
  v4 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v4 = QuestBoardListViewItemDraw_TypeInfo;
  }
  return mTouchPosDif <= (float)-v4->static_fields->FLICK_THRESHOLD;
}


bool __fastcall QuestBoardListViewItemDraw__IsFlickR(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  float mTouchPosDif; // s8
  QuestBoardListViewItemDraw_c *v4; // x0

  if ( (byte_438C824 & 1) == 0 )
  {
    sub_B775C4(&QuestBoardListViewItemDraw_TypeInfo);
    byte_438C824 = 1;
  }
  mTouchPosDif = this->fields.mTouchPosDif;
  v4 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v4 = QuestBoardListViewItemDraw_TypeInfo;
  }
  return mTouchPosDif >= v4->static_fields->FLICK_THRESHOLD;
}


bool __fastcall QuestBoardListViewItemDraw__IsInfoTextListNullOrEmpty(
        QuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x8

  if ( (byte_438C819 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__);
    byte_438C819 = 1;
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
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  __int64 v8; // x1
  UserInterruptionQuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438C82A & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_438C82A = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    sub_B7769C(UserId, v8);
  return UserInterruptionQuestMaster__TryGetEntity(
           (UserInterruptionQuestMaster_o *)Master_WarQuestSelectionMaster,
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
  DataManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_438C7F6 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_WarMaster___);
    sub_B775C4(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Linq_Enumerable_Contains_int___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438C7F6 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  static_fields = v4->static_fields;
  if ( static_fields->FesWarId == warId )
    return 1;
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    static_fields = BalanceConfig_TypeInfo->static_fields;
  }
  if ( System_Linq_Enumerable__Contains_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)static_fields->MainChaptersWithEventId,
         warId,
         (const MethodInfo_1D2A620 *)Method_System_Linq_Enumerable_Contains_int___) )
  {
    return 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      warId,
                                      (const MethodInfo_21FB894 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__)) == 0LL )
  {
    sub_B7769C(Instance, v8);
  }
  return LODWORD(Instance->fields.masterLoadThreads) == 0;
}


bool __fastcall QuestBoardListViewItemDraw__IsMultiInfoText(
        QuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x8

  if ( (byte_438C818 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__);
    byte_438C818 = 1;
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
    sub_B7769C(0LL, method);
  return BoardOptionEventTargetComponent__IsNeedAnim(eventTargetComponent, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw__IsPurchasedByRarePrism(
        QuestBoardListViewItemDraw_o *this,
        System_Collections_Generic_List_MapControl_QuestInfo__o *questList,
        WarEntity_o *warEnt,
        const MethodInfo *method)
{
  __int64 v6; // x20
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  WarEntity_o *v15; // x0
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v23; // x21

  if ( (byte_438C7F0 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_Any_MapControl_QuestInfo___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B775C4(&Method_System_Func_MapControl_QuestInfo__bool___ctor__);
    sub_B775C4(&System_Func_MapControl_QuestInfo__bool__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_QuestBoardListViewItemDraw___c__DisplayClass313_0__IsPurchasedByRarePrism_b__0__);
    sub_B775C4(&QuestBoardListViewItemDraw___c__DisplayClass313_0_TypeInfo);
    byte_438C7F0 = 1;
  }
  v6 = sub_B77694(QuestBoardListViewItemDraw___c__DisplayClass313_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass313_0___ctor(
    (QuestBoardListViewItemDraw___c__DisplayClass313_0_o *)v6,
    0LL);
  if ( !v6 )
    goto LABEL_9;
  *(_QWORD *)(v6 + 16) = warEnt;
  sub_B77560((BattleServantConfConponent_o *)(v6 + 16), (System_Int32_array **)warEnt, v9, v10, v11, v12, v13, v14);
  v15 = *(WarEntity_o **)(v6 + 16);
  if ( v15 && WarEntity__IsShop(v15, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      *(_QWORD *)(v6 + 24) = MasterData_WarQuestSelectionMaster;
      sub_B77560(
        (BattleServantConfConponent_o *)(v6 + 24),
        MasterData_WarQuestSelectionMaster,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
      v23 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_MapControl_QuestInfo__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v23,
        (Il2CppObject *)v6,
        Method_QuestBoardListViewItemDraw___c__DisplayClass313_0__IsPurchasedByRarePrism_b__0__,
        (const MethodInfo_29E92C4 *)Method_System_Func_MapControl_QuestInfo__bool___ctor__);
      return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
               (System_Collections_Generic_List_T__o *)questList,
               (System_Func_T__bool__o *)v23,
               (const MethodInfo_1C66144 *)Method_BasicHelper_Any_MapControl_QuestInfo___);
    }
LABEL_9:
    sub_B7769C(Instance, v8);
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
  RestrictionEntity_array *RestrictionList; // x21
  QuestBoardListViewItemDraw___c_c *v9; // x0
  struct QuestBoardListViewItemDraw___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__356_0; // x22
  Il2CppObject *v12; // x23
  struct QuestBoardListViewItemDraw___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x22
  __int64 v21; // x22
  _BOOL4 v22; // w22
  bool v23; // w8
  QuestRestrictionInfoEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_438C815 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_Any_RestrictionEntity___);
    sub_B775C4(&Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_QuestRestrictionMaster___);
    sub_B775C4(&Method_System_Func_RestrictionEntity__bool___ctor__);
    sub_B775C4(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_QuestBoardListViewItemDraw___c__IsValidSupportSelection_b__356_0__);
    sub_B775C4(&QuestBoardListViewItemDraw___c_TypeInfo);
    byte_438C815 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestRestrictionMaster___);
  if ( Instance )
  {
    if ( !questEntity )
      goto LABEL_40;
    RestrictionList = QuestRestrictionMaster__getRestrictionList(
                        (QuestRestrictionMaster_o *)Instance,
                        questEntity->fields.id,
                        phase,
                        0LL);
    if ( RestrictionList )
    {
      v9 = QuestBoardListViewItemDraw___c_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw___c_TypeInfo);
        v9 = QuestBoardListViewItemDraw___c_TypeInfo;
      }
      static_fields = v9->static_fields;
      _9__356_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__356_0;
      if ( !_9__356_0 )
      {
        if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v9);
          static_fields = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
        }
        v12 = (Il2CppObject *)static_fields->__9;
        _9__356_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_RestrictionEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__356_0,
          v12,
          Method_QuestBoardListViewItemDraw___c__IsValidSupportSelection_b__356_0__,
          (const MethodInfo_29E92C4 *)Method_System_Func_RestrictionEntity__bool___ctor__);
        v13 = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
        v13->__9__356_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__356_0;
        sub_B77560(
          (BattleServantConfConponent_o *)&v13->__9__356_0,
          (System_Int32_array **)_9__356_0,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
      }
      LOBYTE(RestrictionList) = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
                                  (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)RestrictionList,
                                  (System_Func_T__bool__o *)_9__356_0,
                                  (const MethodInfo_1C661F0 *)Method_BasicHelper_Any_RestrictionEntity___);
    }
  }
  else
  {
    LOBYTE(RestrictionList) = 0;
  }
  v20 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v20 + 306) & 1) == 0 )
    sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v21 = **(_QWORD **)(v20 + 192);
  if ( (*(_BYTE *)(v21 + 306) & 1) == 0 )
    sub_B0F2C4(v21);
  Instance = **(DataManager_o ***)(v21 + 184);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___),
        !questEntity)
    || !Instance )
  {
LABEL_40:
    sub_B7769C(Instance, v7);
  }
  if ( !QuestRestrictionInfoMaster__TryGetEntity(
          (QuestRestrictionInfoMaster_o *)Instance,
          &entity,
          questEntity->fields.id,
          phase,
          0LL) )
  {
    if ( !QuestEntity__HasFlag_26430760(questEntity, 0x80000LL, phase, 0LL)
      && !QuestEntity__HasFlag_26430760(questEntity, 0x100000LL, phase, 0LL)
      && !QuestEntity__HasFlag_26430760(questEntity, 0x10000000LL, phase, 0LL) )
    {
      LOBYTE(v22) = questEntity->fields.type != 7;
      if ( ((unsigned __int8)RestrictionList & 1) == 0 )
        goto LABEL_31;
      goto LABEL_36;
    }
LABEL_35:
    LOBYTE(v22) = 0;
    if ( ((unsigned __int8)RestrictionList & 1) == 0 )
      goto LABEL_31;
LABEL_36:
    v23 = 0;
    return v23 && v22;
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_40;
  if ( QuestRestrictionInfoEntity__HasFlag(entity, 0x80000LL, 0LL) )
    goto LABEL_35;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_40;
  if ( QuestRestrictionInfoEntity__HasFlag(entity, 0x100000LL, 0LL) )
    goto LABEL_35;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_40;
  v22 = !QuestRestrictionInfoEntity__HasFlag(entity, 0x10000000LL, 0LL);
  if ( ((unsigned __int8)RestrictionList & 1) != 0 )
    goto LABEL_36;
LABEL_31:
  v23 = !QuestEntity__HasFlag_26430760(questEntity, 2LL, phase, 0LL);
  return v23 && v22;
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
  CommonUI_o *Instance; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x1
  __int64 v23; // x2
  QuestBoardListViewItemDraw_c *v24; // x0
  int32_t iconId; // w9
  Il2CppObject *QUEST_BOARD_ICON_TEXTURE_PREFIX; // x21
  Il2CppObject *v27; // x0
  struct System_String_o *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **boardIconName; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_o *v42; // x19
  AssetLoader_LoadEndDataHandler_o *v43; // x21
  int32_t v44; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_438C827 & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B775C4(&QuestBoardListViewItemDraw_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_QuestBoardListViewItemDraw___c__DisplayClass389_0__LoadBoardIconTexture_b__0__);
    sub_B775C4(&QuestBoardListViewItemDraw___c__DisplayClass389_0_TypeInfo);
    byte_438C827 = 1;
  }
  v7 = sub_B77694(QuestBoardListViewItemDraw___c__DisplayClass389_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass389_0___ctor(
    (QuestBoardListViewItemDraw___c__DisplayClass389_0_o *)v7,
    0LL);
  if ( !v7 )
    goto LABEL_16;
  *(_QWORD *)(v7 + 24) = this;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = callback;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)callback, v16, v17, v18, v19, v20, v21);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  QuestBoardListViewItemDraw__ReleaseBoardIconTexture(this, v22);
  if ( !questEntity )
    goto LABEL_16;
  this->fields.boardIconQuestId = questEntity->fields.id;
  v24 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v24 = QuestBoardListViewItemDraw_TypeInfo;
  }
  iconId = questEntity->fields.iconId;
  QUEST_BOARD_ICON_TEXTURE_PREFIX = (Il2CppObject *)v24->static_fields->QUEST_BOARD_ICON_TEXTURE_PREFIX;
  v44 = iconId;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v23);
  v28 = System_String__Concat(QUEST_BOARD_ICON_TEXTURE_PREFIX, v27, 0LL);
  this->fields.boardIconName = v28;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.boardIconName,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  boardIconName = (System_Int32_array **)this->fields.boardIconName;
  *(_QWORD *)(v7 + 16) = boardIconName;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 16), boardIconName, v36, v37, v38, v39, v40, v41);
  v42 = System_String__Concat_44901936(
          QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH,
          this->fields.boardIconName,
          0LL);
  v43 = (AssetLoader_LoadEndDataHandler_o *)sub_B77694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v43,
    (Il2CppObject *)v7,
    Method_QuestBoardListViewItemDraw___c__DisplayClass389_0__LoadBoardIconTexture_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v42, v43, 1, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 0, 0LL);
      return;
    }
LABEL_16:
    sub_B7769C(Instance, v9);
  }
}


void __fastcall QuestBoardListViewItemDraw__MoveBanner(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        const MethodInfo *method)
{
  WebViewManager_o *IsBanners; // x0
  const MethodInfo *v6; // x1
  bool v7; // w8
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
  char v21; // w21
  __int64 v22; // x0

  if ( (byte_438C821 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&TerminalBannerComponent_TypeInfo);
    byte_438C821 = 1;
  }
  if ( this->fields._bannerState_k__BackingField != 2 )
    return;
  IsBanners = (WebViewManager_o *)QuestBoardListViewItemDraw__IsBanners(this, questBoardItem, method);
  if ( ((unsigned __int8)IsBanners & 1) == 0 )
    return;
  if ( this->fields.mIsPressed )
    goto LABEL_12;
  IsBanners = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !IsBanners )
    goto LABEL_41;
  IsBanners = (WebViewManager_o *)WebViewManager__get_IsBusy(IsBanners, 0LL);
  if ( ((unsigned __int8)IsBanners & 1) != 0 )
    goto LABEL_12;
  IsBanners = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !IsBanners )
    goto LABEL_41;
  IsBanners = (WebViewManager_o *)CommonUI__IsActive_UserPresentBoxWindow((CommonUI_o *)IsBanners, 0LL);
  if ( ((unsigned __int8)IsBanners & 1) != 0 )
    goto LABEL_12;
  IsBanners = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !IsBanners )
    goto LABEL_41;
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
          {
LABEL_42:
            v22 = sub_B776C8(IsBanners);
            sub_B77668(v22, 0LL);
          }
          IsBanners = (WebViewManager_o *)mTerminalBanners->m_Items[v19];
          if ( !IsBanners )
            break;
          TerminalBannerComponent__StartAutoMoveL((TerminalBannerComponent_o *)IsBanners, 0LL);
          if ( (int)++v19 >= this->fields.mBannerCount )
            goto LABEL_37;
        }
LABEL_41:
        sub_B7769C(IsBanners, v6);
      }
LABEL_37:
      this->fields.mBannerAutoMoveTimeOld = realtimeSinceStartup;
      v21 = v17 ^ 1;
      IsBanners = (WebViewManager_o *)TerminalBannerComponent_TypeInfo;
      if ( (BYTE3(TerminalBannerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalBannerComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalBannerComponent_TypeInfo);
        IsBanners = (WebViewManager_o *)TerminalBannerComponent_TypeInfo;
      }
      this->fields.mBannerAutoMoveTimeInterval = *(float *)(*(_QWORD *)&IsBanners[1].fields.isButtonEnable + 12LL);
      v7 = v21 & 1;
    }
    else
    {
      v7 = 1;
    }
  }
  this->fields.mIsEnableBannerAutoMoveOld = v7;
  if ( !questBoardItem )
    goto LABEL_41;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_41;
  AreaBoardInfo_k__BackingField = quest_info_k__BackingField->fields._AreaBoardInfo_k__BackingField;
  if ( !AreaBoardInfo_k__BackingField )
    goto LABEL_41;
  if ( this->fields.mBannerCount >= 1 )
  {
    bannerFocusIndex = AreaBoardInfo_k__BackingField->fields.bannerFocusIndex;
    v11 = 0LL;
    do
    {
      v12 = this->fields.mTerminalBanners;
      if ( !v12 )
        goto LABEL_41;
      if ( (unsigned int)v11 >= v12->max_length )
        goto LABEL_42;
      v13 = &v12->obj.klass + v11;
      v14 = (TerminalBannerComponent_o *)v13[4];
      if ( !v14 )
        goto LABEL_41;
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

  if ( (byte_438C7E6 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C7E6 = 1;
  }
  QuestBoardListViewItemDraw__ReleaseBoardIconTexture(this, method);
  eventTargetComponent = (UnityEngine_Object_o *)this->fields.eventTargetComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(eventTargetComponent, 0LL, 0LL) )
  {
    v5 = this->fields.eventTargetComponent;
    if ( !v5 )
      sub_B7769C(0LL, v4);
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
  UnityEngine_Vector2_o ScreenPosition_31095740; // kr00_8
  float v10; // s0
  float v11; // s1
  const MethodInfo *v12; // x3

  v7 = this;
  if ( (byte_438C81D & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_B775C4(&CTouch_TypeInfo);
    byte_438C81D = 1;
  }
  if ( !questBoardItem )
    goto LABEL_14;
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
          if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
          ScreenPosition_31095740 = CTouch__getScreenPosition_31095740(mUICamera, 0LL);
          v10 = vabds_f32(v7->fields.mPressPos.fields.x, ScreenPosition_31095740.fields.x);
          v11 = vabds_f32(v7->fields.mPressPos.fields.y, ScreenPosition_31095740.fields.y);
          v7->fields.mIsEnableDragX = v10 > v11;
          this = (QuestBoardListViewItemDraw_o *)qmanager->fields.scrollView;
          if ( this )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v10 <= v11, 0LL);
            QuestBoardListViewItemDraw__SetDispBannerArrows(v7, v7->fields.mIsEnableDragX, 0, v12);
            return;
          }
        }
LABEL_14:
        sub_B7769C(this, questBoardItem);
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
  __int64 v9; // x0

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
        {
          v9 = sub_B776C8(IsBanners);
          sub_B77668(v9, 0LL);
        }
        IsBanners = mTerminalBanners->m_Items[v7];
        if ( !IsBanners )
LABEL_10:
          sub_B7769C(IsBanners, v5);
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
  if ( (byte_438C81C & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_B775C4(&CTouch_TypeInfo);
    byte_438C81C = 1;
  }
  if ( questBoardItem && dispMode && questBoardItem->fields._quest_info_k__BackingField )
  {
    v8->fields.mIsPressed = 1;
    if ( !questBoardManager || (this = (QuestBoardListViewItemDraw_o *)questBoardManager->fields.scrollView) == 0LL )
      sub_B7769C(this, questBoardItem);
    if ( !UIScrollView__IsLimitOverPosition((UIScrollView_o *)this, 0LL) )
    {
      mUICamera = questBoardManager->fields.mUICamera;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v8->fields.mPressPos = CTouch__getScreenPosition_31095740(mUICamera, 0LL);
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
  __int64 v9; // x0

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
        {
          v9 = sub_B776C8(IsBanners);
          sub_B77668(v9, 0LL);
        }
        IsBanners = mTerminalBanners->m_Items[v6];
        if ( !IsBanners )
LABEL_10:
          sub_B7769C(IsBanners, v5);
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
      sub_B7769C(scrollView, v8);
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
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_438C828 & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&QuestBoardListViewItemDraw_TypeInfo);
    byte_438C828 = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.boardIconName, 0LL) )
  {
    v3 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v3 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v4 = System_String__Concat_44901936(
           v3->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH,
           this->fields.boardIconName,
           0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(v4, 0LL);
    this->fields.boardIconAssetData = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.boardIconAssetData, 0LL, v5, v6, v7, v8, v9, v10);
    this->fields.boardIconName = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.boardIconName, 0LL, v11, v12, v13, v14, v15, v16);
  }
}


void __fastcall QuestBoardListViewItemDraw__ResetBannerAutoMoveTime(
        QuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  TerminalBannerComponent_c *v3; // x0

  if ( (byte_438C81E & 1) == 0 )
  {
    sub_B775C4(&TerminalBannerComponent_TypeInfo);
    byte_438C81E = 1;
  }
  this->fields.mBannerAutoMoveTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  v3 = TerminalBannerComponent_TypeInfo;
  if ( (BYTE3(TerminalBannerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalBannerComponent_TypeInfo->_2.cctor_finished )
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
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x0
  BattleServantConfConponent_o *p_mInfoTextList; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_438C7E8 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
    sub_B775C4(&System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo);
    byte_438C7E8 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  if ( mInfoTextList )
  {
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)mInfoTextList,
      (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Clear__);
  }
  else
  {
    p_mInfoTextList = (BattleServantConfConponent_o *)&this->fields.mInfoTextList;
    v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v5,
      (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
    p_mInfoTextList->klass = (BattleServantConfConponent_c *)v5;
    sub_B77560(p_mInfoTextList, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  }
}


void __fastcall QuestBoardListViewItemDraw__ResetQuest(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *mCostObj; // x0
  struct UILabel_o *mCostLb1; // x8
  float g; // s8
  float r; // s10
  float a; // s9
  float b; // s11
  QuestBoardListViewItemDraw_c *v11; // x0
  struct UILabel_o *v12; // x8
  UserGameEntity_o *v13; // x21
  int32_t Act; // w0
  const MethodInfo *v15; // x2
  int32_t result; // [xsp+2Ch] [xbp-14h] BYREF
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_438C816 & 1) == 0 )
  {
    sub_B775C4(&QuestBoardListViewItemDraw_TypeInfo);
    byte_438C816 = 1;
  }
  result = 0;
  mCostObj = this->fields.mCostObj;
  if ( !mCostObj )
    goto LABEL_27;
  if ( !UnityEngine_GameObject__get_activeSelf(mCostObj, 0LL) )
    return;
  mCostObj = (UnityEngine_GameObject_o *)this->fields.mCostLb1;
  if ( !mCostObj )
    goto LABEL_27;
  mCostObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostObj, 0LL);
  if ( !mCostObj )
    goto LABEL_27;
  mCostObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(mCostObj, 0LL);
  if ( ((unsigned __int8)mCostObj & 1) == 0 )
    return;
  mCostLb1 = this->fields.mCostLb1;
  if ( !mCostLb1 )
    goto LABEL_27;
  r = mCostLb1->fields.mColor.fields.r;
  g = mCostLb1->fields.mColor.fields.g;
  b = mCostLb1->fields.mColor.fields.b;
  a = mCostLb1->fields.mColor.fields.a;
  v11 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v11 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v17.fields.r = r;
  v17.fields.g = g;
  v17.fields.b = b;
  v17.fields.a = a;
  if ( UnityEngine_Color__op_Equality(v17, v11->static_fields->OVER_COST_COLOR, 0LL) )
  {
    mCostObj = (UnityEngine_GameObject_o *)UserGameMaster__getSelfUserGame(0LL);
    v12 = this->fields.mCostLb1;
    if ( v12 )
    {
      v13 = (UserGameEntity_o *)mCostObj;
      System_Int32__TryParse(v12->fields.mText, &result, 0LL);
      mCostObj = (UnityEngine_GameObject_o *)this->fields.mCostApSp;
      if ( mCostObj )
      {
        mCostObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostObj, 0LL);
        if ( mCostObj )
        {
          mCostObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(mCostObj, 0LL);
          if ( ((unsigned __int8)mCostObj & 1) != 0 )
          {
            if ( v13 )
            {
              Act = UserGameEntity__getAct(v13, 0LL);
              goto LABEL_24;
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
                if ( v13 )
                {
                  Act = UserGameEntity__getRp(v13, 0LL);
LABEL_24:
                  if ( Act >= result )
                    QuestBoardListViewItemDraw__SetItemOfQuest(this, questBoardItem, v15);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_27:
    sub_B7769C(mCostObj, questBoardItem);
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
  System_String_o *age; // x20
  __int64 v11; // x2
  char v12; // w26
  int32_t name_high; // w21
  char v14; // w28
  Il2CppObject *PrioredName; // x0
  bool v16; // w25
  int64_t OpenedAt; // x27
  System_Object_array *v18; // x27
  __int64 v19; // x2
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x28
  __int64 v27; // x2
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x28
  __int64 v35; // x2
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x28
  __int64 v43; // x2
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x28
  int32_t WarID_ByQuestID; // w27
  MapControl_WarInfo_o *WarInfo_k__BackingField; // x0
  WarEntity_o *Mine; // x0
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  QuestReleaseOverwriteEntity_o *v55; // x22
  _BOOL4 v56; // w26
  UILabel_o *mTitleNameLb; // x23
  int32_t leftIndent; // w23
  int32_t *p_ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT; // x8
  UILabel_o *mCondChangeMessage; // x19
  int32_t v61; // w25
  float v62; // s8
  UILabel_o **p_mAdvanceNoticeLb; // x28
  float v64; // s1
  float v65; // s0
  int v66; // s2
  float v67; // s8
  float v68; // s0
  float v69; // s1
  float v70; // s0
  int v71; // s2
  float v72; // s1
  int v73; // s2
  UIWidget_o *mOverwriteAdvanceNoticeLb; // x24
  const MethodInfo *v75; // x4
  const MethodInfo *v76; // x4
  System_String_o *overlayClosedMessage; // x20
  UILabel_o *v78; // x22
  float v79; // s8
  UnityEngine_Object_o *mOverwriteAdvanceNoticeArrowObj; // x20
  __int64 v81; // x0
  __int64 v82; // x0
  char v83; // [xsp+Ch] [xbp-94h]
  int32_t Minute; // [xsp+14h] [xbp-8Ch] BYREF
  int32_t Hour; // [xsp+18h] [xbp-88h] BYREF
  int32_t Day; // [xsp+1Ch] [xbp-84h] BYREF
  int64_t questReleaseValue; // [xsp+20h] [xbp-80h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-78h] BYREF
  WarEntity_o *v89; // [xsp+30h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF
  System_DateTime_o v91; // 0:x0.8
  System_DateTime_o v92; // 0:x0.8
  System_DateTime_o v93; // 0:x0.8
  System_DateTime_o v94; // 0:x0.8
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438C7FD & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ClosedMessageMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_WarMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
    sub_B775C4(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&long_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&object___TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&QuestBoardListViewItemDraw_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_B775C4(&SingletonTemplate_QuestTree__TypeInfo);
    sub_B775C4(&StringLiteral_14977/*"UNKNOWN_QUEST_NAME"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438C7FD = 1;
  }
  v89 = 0LL;
  entity = 0LL;
  dateData = 0LL;
  if ( questInfo && questInfo->fields.questReleaseClosedID > 0 )
  {
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_137;
    Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ClosedMessageMaster___);
    if ( !Instance )
      goto LABEL_137;
    age = (System_String_o *)StringLiteral_1/*""*/;
    Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                 (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                 &entity,
                 questInfo->fields.questReleaseClosedID,
                 (const MethodInfo_21FB8F0 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
    if ( (Instance & 1) != 0 )
    {
      Instance = (__int64)entity;
      if ( !entity )
        goto LABEL_137;
      age = entity->fields.age;
      Instance = ClosedMessageEntity__IsChangeDispClosedMessage((ClosedMessageEntity_o *)entity, 0LL);
      if ( !entity )
        goto LABEL_137;
      v12 = Instance;
      Instance = ClosedMessageEntity__IsChangeDispPositionLeft((ClosedMessageEntity_o *)entity, 0LL);
      if ( !entity )
        goto LABEL_137;
      name_high = HIDWORD(entity->fields.name);
      v14 = Instance;
    }
    else
    {
      name_high = 0;
      v14 = 0;
      v12 = 0;
    }
    switch ( questInfo->fields.questReleaseType )
    {
      case 1:
        if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
        }
        Instance = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !Instance )
          goto LABEL_137;
        WarID_ByQuestID = QuestTree__GetWarID_ByQuestID(
                            (QuestTree_o *)Instance,
                            questInfo->fields.questReleaseTargetID,
                            0LL);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Instance = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_WarMaster___);
        if ( !Instance )
          goto LABEL_137;
        if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                &v89,
                WarID_ByQuestID,
                (const MethodInfo_21FB8F0 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
          goto LABEL_52;
        Instance = (__int64)v89;
        if ( !v89 )
          goto LABEL_137;
        PrioredName = (Il2CppObject *)WarEntity__GetPrioredName(v89, 0LL);
LABEL_20:
        age = System_String__Format(age, PrioredName, 0LL);
LABEL_21:
        if ( (v12 & 1) != 0 )
          goto LABEL_22;
        goto LABEL_53;
      case 6:
      case 7:
      case 9:
        questReleaseValue = questInfo->fields.questReleaseValue;
        PrioredName = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &questReleaseValue, v11);
        goto LABEL_20;
      case 0xC:
        if ( !questEnt )
          goto LABEL_137;
        v83 = v14;
        OpenedAt = QuestEntity__getOpenedAt(questEnt, 0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        dateData = NetworkManager__getServerDateTime_26207672(OpenedAt, 0LL).fields.dateData;
        v18 = (System_Object_array *)sub_B775DC(object___TypeInfo, 4LL);
        v91.fields.dateData = (uint64_t)&dateData;
        LODWORD(questReleaseValue) = System_DateTime__get_Month(v91, 0LL);
        Instance = j_il2cpp_value_box_0(int_TypeInfo, &questReleaseValue, v19);
        if ( !v18 )
          goto LABEL_137;
        v26 = (System_Int32_array **)Instance;
        if ( Instance )
        {
          Instance = sub_B77684(Instance, v18->obj.klass->_1.element_class);
          if ( !Instance )
            goto LABEL_139;
        }
        if ( !v18->max_length )
          goto LABEL_138;
        v18->m_Items[0] = (Il2CppObject *)v26;
        sub_B77560((BattleServantConfConponent_o *)v18->m_Items, v26, v20, v21, v22, v23, v24, v25);
        v92.fields.dateData = (uint64_t)&dateData;
        Day = System_DateTime__get_Day(v92, 0LL);
        Instance = j_il2cpp_value_box_0(int_TypeInfo, &Day, v27);
        v34 = (System_Int32_array **)Instance;
        if ( Instance )
        {
          Instance = sub_B77684(Instance, v18->obj.klass->_1.element_class);
          if ( !Instance )
            goto LABEL_139;
        }
        if ( v18->max_length <= 1 )
          goto LABEL_138;
        v18->m_Items[1] = (Il2CppObject *)v34;
        sub_B77560((BattleServantConfConponent_o *)&v18->m_Items[1], v34, v28, v29, v30, v31, v32, v33);
        v93.fields.dateData = (uint64_t)&dateData;
        Hour = System_DateTime__get_Hour(v93, 0LL);
        Instance = j_il2cpp_value_box_0(int_TypeInfo, &Hour, v35);
        v42 = (System_Int32_array **)Instance;
        if ( Instance )
        {
          Instance = sub_B77684(Instance, v18->obj.klass->_1.element_class);
          if ( !Instance )
            goto LABEL_139;
        }
        if ( v18->max_length <= 2 )
          goto LABEL_138;
        v18->m_Items[2] = (Il2CppObject *)v42;
        sub_B77560((BattleServantConfConponent_o *)&v18->m_Items[2], v42, v36, v37, v38, v39, v40, v41);
        v94.fields.dateData = (uint64_t)&dateData;
        Minute = System_DateTime__get_Minute(v94, 0LL);
        Instance = j_il2cpp_value_box_0(int_TypeInfo, &Minute, v43);
        v50 = (System_Int32_array **)Instance;
        if ( Instance )
        {
          Instance = sub_B77684(Instance, v18->obj.klass->_1.element_class);
          if ( !Instance )
          {
LABEL_139:
            v82 = sub_B776BC(Instance);
            sub_B77668(v82, 0LL);
          }
        }
        if ( v18->max_length <= 3 )
        {
LABEL_138:
          v81 = sub_B776C8(Instance);
          sub_B77668(v81, 0LL);
        }
        v18->m_Items[3] = (Il2CppObject *)v50;
        sub_B77560((BattleServantConfConponent_o *)&v18->m_Items[3], v50, v44, v45, v46, v47, v48, v49);
        v14 = v83;
        age = System_String__Format_44980660(age, v18, 0LL);
LABEL_52:
        if ( (v12 & 1) != 0 )
        {
LABEL_22:
          v16 = 1;
        }
        else
        {
LABEL_53:
          WarInfo_k__BackingField = questInfo->fields._WarInfo_k__BackingField;
          if ( !WarInfo_k__BackingField || !MapControl_WarInfo__GetMine(WarInfo_k__BackingField, 0LL) )
            goto LABEL_58;
          Instance = (__int64)questInfo->fields._WarInfo_k__BackingField;
          if ( !Instance )
            goto LABEL_137;
          Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)Instance, 0LL);
          if ( Mine )
            v16 = WarEntity__IsChangeDispClosedMessage(Mine, 0LL);
          else
LABEL_58:
            v16 = 0;
        }
        Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_137;
        Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
        if ( !questEnt || !Instance )
          goto LABEL_137;
        EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                                   (QuestReleaseOverwriteMaster_o *)Instance,
                                   questEnt->fields.id,
                                   checkTime,
                                   0LL);
        v55 = EntityByQuestIdAndTime;
        if ( EntityByQuestIdAndTime )
        {
          v56 = !System_String__IsNullOrEmpty(EntityByQuestIdAndTime->fields.overlayClosedMessage, 0LL);
          if ( v16 )
          {
LABEL_64:
            Instance = (__int64)this->fields.mAdvanceNoticeObj;
            if ( !Instance )
              goto LABEL_137;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
            mTitleNameLb = this->fields.mTitleNameLb;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_14977/*"UNKNOWN_QUEST_NAME"*/, 0LL);
            if ( !mTitleNameLb )
              goto LABEL_137;
            UILabel__set_text(mTitleNameLb, (System_String_o *)Instance, 0LL);
            Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
            if ( v56 )
            {
              if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
              }
              if ( !v55 )
                goto LABEL_137;
              Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
              leftIndent = v55->fields.leftIndent;
              p_ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT = &QuestBoardListViewItemDraw_TypeInfo->static_fields->ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT;
            }
            else
            {
              if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
                Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
              }
              leftIndent = 0;
              p_ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT = (int32_t *)(*(_QWORD *)(Instance + 184) + 44LL);
            }
            v61 = *p_ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT;
            if ( (v14 & 1) != 0 )
            {
              if ( (*(_BYTE *)(Instance + 307) & 4) != 0 && !*(_DWORD *)(Instance + 224) )
              {
                j_il2cpp_runtime_class_init_0(Instance);
                Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
              }
              v62 = *(float *)(*(_QWORD *)(Instance + 184) + 52LL);
              p_mAdvanceNoticeLb = &this->fields.mAdvanceNoticeLb;
              Instance = (__int64)this->fields.mAdvanceNoticeLb;
              if ( !Instance )
                goto LABEL_137;
              UIWidget__set_pivot((UIWidget_o *)Instance, 3, 0LL);
              Instance = (__int64)*p_mAdvanceNoticeLb;
              if ( !*p_mAdvanceNoticeLb )
                goto LABEL_137;
              Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
              if ( !Instance )
                goto LABEL_137;
              v64 = 0.0;
              if ( v56 )
                v64 = 24.0;
              v66 = 0;
              v65 = v62 + (float)name_high;
              UnityEngine_Transform__set_localPosition(
                (UnityEngine_Transform_o *)Instance,
                *(UnityEngine_Vector3_o *)(&v64 - 1),
                0LL);
              Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
              if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
                Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
              }
              if ( !this->fields.mOverwriteAdvanceNoticeLb )
                goto LABEL_137;
              v67 = *(float *)(*(_QWORD *)(Instance + 184) + 52LL);
              UIWidget__set_pivot((UIWidget_o *)this->fields.mOverwriteAdvanceNoticeLb, 3, 0LL);
              Instance = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
              if ( !Instance )
                goto LABEL_137;
              Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
              if ( !Instance )
                goto LABEL_137;
              v68 = v67 + (float)leftIndent;
            }
            else
            {
              p_mAdvanceNoticeLb = &this->fields.mAdvanceNoticeLb;
              Instance = (__int64)this->fields.mAdvanceNoticeLb;
              if ( !Instance )
                goto LABEL_137;
              UIWidget__set_pivot((UIWidget_o *)Instance, 4, 0LL);
              Instance = (__int64)*p_mAdvanceNoticeLb;
              if ( !*p_mAdvanceNoticeLb )
                goto LABEL_137;
              Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
              if ( !Instance )
                goto LABEL_137;
              v69 = 0.0;
              if ( v56 )
                v69 = 24.0;
              v71 = 0;
              v70 = (float)name_high * 0.5;
              UnityEngine_Transform__set_localPosition(
                (UnityEngine_Transform_o *)Instance,
                *(UnityEngine_Vector3_o *)(&v69 - 1),
                0LL);
              Instance = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
              if ( !Instance )
                goto LABEL_137;
              UIWidget__set_pivot((UIWidget_o *)Instance, 4, 0LL);
              Instance = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
              if ( !Instance )
                goto LABEL_137;
              Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
              if ( !Instance )
                goto LABEL_137;
              v68 = (float)leftIndent * 0.5;
            }
            v72 = -26.0;
            v73 = 0;
            UnityEngine_Transform__set_localPosition(
              (UnityEngine_Transform_o *)Instance,
              *(UnityEngine_Vector3_o *)&v68,
              0LL);
            Instance = (__int64)*p_mAdvanceNoticeLb;
            if ( !*p_mAdvanceNoticeLb )
              goto LABEL_137;
            UIWidget__set_height((UIWidget_o *)Instance, v61, 0LL);
            Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
            mOverwriteAdvanceNoticeLb = (UIWidget_o *)this->fields.mOverwriteAdvanceNoticeLb;
            if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
            }
            if ( !mOverwriteAdvanceNoticeLb )
              goto LABEL_137;
            UIWidget__set_height(
              mOverwriteAdvanceNoticeLb,
              QuestBoardListViewItemDraw_TypeInfo->static_fields->ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT,
              0LL);
            QuestBoardListViewItemDraw___SetAdvanceNoticeText_g__CalculateLabel_328_0(
              *p_mAdvanceNoticeLb,
              age,
              v61,
              name_high,
              v75);
            if ( v56 )
            {
              Instance = (__int64)this->fields.mOverwriteAdvanceNoticeObj;
              if ( !Instance )
                goto LABEL_137;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
              if ( !v55 )
                goto LABEL_137;
              overlayClosedMessage = v55->fields.overlayClosedMessage;
              v78 = this->fields.mOverwriteAdvanceNoticeLb;
              if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
              }
              v79 = (float)name_high * 0.5;
              QuestBoardListViewItemDraw___SetAdvanceNoticeText_g__CalculateLabel_328_0(
                v78,
                overlayClosedMessage,
                v61,
                leftIndent,
                v76);
            }
            else
            {
              v79 = 0.0;
            }
            mOverwriteAdvanceNoticeArrowObj = (UnityEngine_Object_o *)this->fields.mOverwriteAdvanceNoticeArrowObj;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(mOverwriteAdvanceNoticeArrowObj, 0LL, 0LL) )
            {
              Instance = (__int64)this->fields.mOverwriteAdvanceNoticeArrowObj;
              if ( Instance )
              {
                Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
                if ( Instance )
                {
                  v95.fields.y = 0.0;
                  v95.fields.z = 0.0;
                  v95.fields.x = v79;
                  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v95, 0LL);
                  return;
                }
              }
LABEL_137:
              sub_B7769C(Instance, questInfo);
            }
            return;
          }
        }
        else
        {
          v56 = 0;
          if ( v16 )
            goto LABEL_64;
        }
        Instance = (__int64)this->fields.mTitleNameLb;
        if ( !Instance )
          goto LABEL_137;
        UILabel__set_text((UILabel_o *)Instance, age, 0LL);
        Instance = (__int64)this->fields.mAdvanceNoticeLb;
        if ( !Instance )
          goto LABEL_137;
        UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        Instance = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
        if ( !Instance )
          goto LABEL_137;
        UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        if ( v56 )
        {
          Instance = (__int64)this->fields.mCondObject;
          if ( Instance )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
            if ( v55 )
            {
              Instance = (__int64)this->fields.mCondChangeMessage;
              if ( Instance )
              {
                UILabel__set_text((UILabel_o *)Instance, v55->fields.overlayClosedMessage, 0LL);
                mCondChangeMessage = this->fields.mCondChangeMessage;
                Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
                if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
                }
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
          goto LABEL_137;
        }
        break;
      default:
        goto LABEL_21;
    }
  }
  else
  {
    Instance = (__int64)this->fields.mAdvanceNoticeLb;
    if ( !Instance )
      goto LABEL_137;
    UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    Instance = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
    if ( !Instance )
      goto LABEL_137;
    UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    Instance = (__int64)this->fields.mCondChangeMessage;
    if ( !Instance )
      goto LABEL_137;
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
  BattleServantConfConponent_o *p_mNoticeNumber; // x21
  struct UnityEngine_GameObject_o *mNoticeNumberPrefab; // x22
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_GameObject_o *v10; // x1
  UnityEngine_GameObject_o *v11; // x20
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_438C803 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C803 = 1;
  }
  mNoticeNumberRoot = this->fields.mNoticeNumberRoot;
  if ( !mNoticeNumberRoot )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(mNoticeNumberRoot, 1, 0LL);
  mNoticeNumber = (UnityEngine_Object_o *)this->fields.mNoticeNumber;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_mNoticeNumber = (BattleServantConfConponent_o *)&this->fields.mNoticeNumber;
  if ( UnityEngine_Object__op_Equality(mNoticeNumber, 0LL, 0LL) )
  {
    mNoticeNumberPrefab = this->fields.mNoticeNumberPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       (UnityEngine_UI_Dropdown_DropdownItem_o *)mNoticeNumberPrefab,
                                       (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v10 = this->fields.mNoticeNumberRoot;
    v11 = v9;
    GameObjectExtensions__SafeSetParent_32813688(v9, v10, 0LL);
    if ( v11 )
    {
      Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v11,
                                                         (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
      p_mNoticeNumber->klass = (BattleServantConfConponent_c *)Component_srcLineSprite;
      sub_B77560(p_mNoticeNumber, Component_srcLineSprite, v13, v14, v15, v16, v17, v18);
      goto LABEL_13;
    }
LABEL_15:
    sub_B7769C(mNoticeNumberRoot, *(_QWORD *)&num);
  }
LABEL_13:
  mNoticeNumberRoot = (UnityEngine_GameObject_o *)p_mNoticeNumber->klass;
  if ( !p_mNoticeNumber->klass )
    goto LABEL_15;
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)mNoticeNumberRoot, num, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewItemDraw__SetBlackMarkAndWhiteMark(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        WarEntity_o *warEntity,
        bool isBlackMarkOnly,
        bool isWhiteMarkOnly,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *IsBlackMarkWithClear; // x0
  __int64 v12; // x1
  int32_t lastQuestId; // w24
  int v14; // w8
  UnityEngine_GameObject_o *blackMarkSpace; // x24
  QuestBoardListViewItemDraw_c *v16; // x0
  UnityEngine_GameObject_o *v17; // x23
  QuestBoardListViewItemDraw_c *v18; // x0
  UnityEngine_Object_o *black_mark_prefab_k__BackingField; // x23
  UnityEngine_Object_o *blackMarkEffect; // x23
  struct UnityEngine_GameObject_o *v21; // x24
  struct UnityEngine_GameObject_o **p_blackMarkEffect; // x23
  struct UnityEngine_GameObject_o **p_blackMarkSpace; // x26
  UnityEngine_Transform_o *transform; // x25
  System_Int32_array **v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UnityEngine_GameObject_o *v32; // x23
  int32_t v33; // w23
  UnityEngine_GameObject_o *v34; // x22
  QuestBoardListViewItemDraw_c *v35; // x0
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  QuestBoardListViewItemDraw_c *v40; // x0
  struct QuestBoardListViewItemDraw_StaticFields *v41; // x8
  int v42; // w8
  UnityEngine_GameObject_o *v43; // x21
  QuestBoardListViewItemDraw_c *v44; // x0
  UnityEngine_Object_o *white_mark_prefab_k__BackingField; // x21
  UnityEngine_Object_o *whiteMarkEffect; // x21
  struct UnityEngine_GameObject_o *v47; // x21
  BattleServantConfConponent_o *p_whiteMarkEffect; // x19
  struct UnityEngine_GameObject_o **v49; // x23
  UnityEngine_Transform_o *v50; // x20
  System_Int32_array **v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  UnityEngine_GameObject_o *klass; // x19
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438C7EA & 1) == 0 )
  {
    sub_B775C4(&CondType_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject____69541584);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&QuestBoardListViewItemDraw_TypeInfo);
    byte_438C7EA = 1;
  }
  if ( !warEntity )
    return;
  IsBlackMarkWithClear = (UnityEngine_GameObject_o *)WarEntity__IsBlackMarkWithClear(warEntity, 0LL);
  if ( ((unsigned __int8)IsBlackMarkWithClear & 1) != 0 )
  {
    lastQuestId = warEntity->fields.lastQuestId;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsBlackMarkWithClear = (UnityEngine_GameObject_o *)CondType__IsQuestClear_24699280(lastQuestId, -1, 0, 0LL);
    v14 = 0;
    if ( ((unsigned __int8)IsBlackMarkWithClear & 1) != 0 )
    {
      blackMarkSpace = this->fields.blackMarkSpace;
      v16 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v16 = QuestBoardListViewItemDraw_TypeInfo;
      }
      GameObjectExtensions__SetLocalPosition(blackMarkSpace, v16->static_fields->BLACK_MARK_OBJ_POS, 0LL);
      v14 = 1;
    }
    if ( isBlackMarkOnly )
    {
LABEL_14:
      v17 = this->fields.blackMarkSpace;
      v18 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v18 = QuestBoardListViewItemDraw_TypeInfo;
      }
      GameObjectExtensions__SetLocalPosition(v17, v18->static_fields->BLACK_MARK_OBJ_POS_CENTER, 0LL);
      if ( !questBoardItem )
        goto LABEL_78;
      goto LABEL_22;
    }
  }
  else
  {
    v14 = 0;
    if ( isBlackMarkOnly )
      goto LABEL_14;
  }
  if ( !v14 )
    goto LABEL_38;
  if ( !questBoardItem )
    goto LABEL_78;
LABEL_22:
  black_mark_prefab_k__BackingField = (UnityEngine_Object_o *)questBoardItem->fields._black_mark_prefab_k__BackingField;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(black_mark_prefab_k__BackingField, 0LL, 0LL) )
  {
    blackMarkEffect = (UnityEngine_Object_o *)this->fields.blackMarkEffect;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(blackMarkEffect, 0LL, 0LL) )
    {
      IsBlackMarkWithClear = this->fields.blackMarkSpace;
      if ( !IsBlackMarkWithClear )
        goto LABEL_78;
      v21 = questBoardItem->fields._black_mark_prefab_k__BackingField;
      p_blackMarkEffect = &this->fields.blackMarkEffect;
      p_blackMarkSpace = &this->fields.blackMarkSpace;
      transform = UnityEngine_GameObject__get_transform(IsBlackMarkWithClear, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v25 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                     (UILabel_o *)v21,
                                     transform,
                                     (const MethodInfo_1DF9A3C *)Method_UnityEngine_Object_Instantiate_GameObject____69541584);
      *p_blackMarkEffect = (struct UnityEngine_GameObject_o *)v25;
      sub_B77560((BattleServantConfConponent_o *)&this->fields.blackMarkEffect, v25, v26, v27, v28, v29, v30, v31);
      v32 = *p_blackMarkEffect;
      zero = UnityEngine_Vector3__get_zero(0LL);
      GameObjectExtensions__SetLocalPosition(v32, zero, 0LL);
    }
    else
    {
      p_blackMarkSpace = &this->fields.blackMarkSpace;
    }
    IsBlackMarkWithClear = *p_blackMarkSpace;
    if ( !*p_blackMarkSpace )
      goto LABEL_78;
    UnityEngine_GameObject__SetActive(IsBlackMarkWithClear, 1, 0LL);
  }
  if ( !WarEntity__IsWhiteMarkWithClear(warEntity, 0LL) )
    goto LABEL_47;
LABEL_38:
  v33 = warEntity->fields.lastQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestClear_24699280(v33, -1, 0, 0LL) )
  {
    v34 = this->fields.blackMarkSpace;
    v35 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v35 = QuestBoardListViewItemDraw_TypeInfo;
    }
    static_fields = v35->static_fields;
    x = static_fields->BLACK_MARK_OBJ_POS.fields.x;
    y = static_fields->BLACK_MARK_OBJ_POS.fields.y;
    z = static_fields->BLACK_MARK_OBJ_POS.fields.z;
  }
  else
  {
LABEL_47:
    IsBlackMarkWithClear = (UnityEngine_GameObject_o *)WarEntity__IsDispWhiteMarkUnderBoard(warEntity, 0LL);
    if ( ((unsigned __int8)IsBlackMarkWithClear & 1) == 0 )
    {
      v42 = 0;
      if ( isWhiteMarkOnly )
        goto LABEL_53;
LABEL_59:
      if ( !v42 )
        return;
      if ( !questBoardItem )
        goto LABEL_78;
      goto LABEL_61;
    }
    v34 = this->fields.blackMarkSpace;
    v40 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v40 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v41 = v40->static_fields;
    x = v41->WHITE_MARK_OBJ_UNDER_POS.fields.x;
    y = v41->WHITE_MARK_OBJ_UNDER_POS.fields.y;
    z = v41->WHITE_MARK_OBJ_UNDER_POS.fields.z;
  }
  GameObjectExtensions__SetLocalPosition(v34, *(UnityEngine_Vector3_o *)&x, 0LL);
  v42 = 1;
  if ( !isWhiteMarkOnly )
    goto LABEL_59;
LABEL_53:
  v43 = this->fields.blackMarkSpace;
  v44 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v44 = QuestBoardListViewItemDraw_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition(v43, v44->static_fields->BLACK_MARK_OBJ_POS_CENTER, 0LL);
  if ( !questBoardItem )
    goto LABEL_78;
LABEL_61:
  white_mark_prefab_k__BackingField = (UnityEngine_Object_o *)questBoardItem->fields._white_mark_prefab_k__BackingField;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(white_mark_prefab_k__BackingField, 0LL, 0LL) )
  {
    whiteMarkEffect = (UnityEngine_Object_o *)this->fields.whiteMarkEffect;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(whiteMarkEffect, 0LL, 0LL) )
    {
      IsBlackMarkWithClear = this->fields.blackMarkSpace;
      if ( !IsBlackMarkWithClear )
        goto LABEL_78;
      v47 = questBoardItem->fields._white_mark_prefab_k__BackingField;
      p_whiteMarkEffect = (BattleServantConfConponent_o *)&this->fields.whiteMarkEffect;
      v49 = &this->fields.blackMarkSpace;
      v50 = UnityEngine_GameObject__get_transform(IsBlackMarkWithClear, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v51 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                     (UILabel_o *)v47,
                                     v50,
                                     (const MethodInfo_1DF9A3C *)Method_UnityEngine_Object_Instantiate_GameObject____69541584);
      p_whiteMarkEffect->klass = (BattleServantConfConponent_c *)v51;
      sub_B77560(p_whiteMarkEffect, v51, v52, v53, v54, v55, v56, v57);
      klass = (UnityEngine_GameObject_o *)p_whiteMarkEffect->klass;
      v60 = UnityEngine_Vector3__get_zero(0LL);
      GameObjectExtensions__SetLocalPosition(klass, v60, 0LL);
    }
    else
    {
      v49 = &this->fields.blackMarkSpace;
    }
    IsBlackMarkWithClear = *v49;
    if ( *v49 )
    {
      UnityEngine_GameObject__SetActive(IsBlackMarkWithClear, 1, 0LL);
      return;
    }
LABEL_78:
    sub_B7769C(IsBlackMarkWithClear, v12);
  }
}


void __fastcall QuestBoardListViewItemDraw__SetChapterSubIdDisp(
        QuestBoardListViewItemDraw_o *this,
        MapControl_QuestInfo_o *questInfo,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw_o *v4; // x19
  QuestEntity_o *v5; // x21
  WarEntity_o *Entity; // x22
  const MethodInfo *v7; // x3
  _BOOL4 HasFlag; // w23
  _BOOL8 v9; // x0
  UILabel_o *mLabelSubSectionNumLb; // x22
  UnityEngine_Object_o *Component_WebViewObject; // x22
  UISprite_o *mLabelChapterSp; // x22
  QuestBoardListViewItemDraw_o *v13; // x0
  const MethodInfo *v14; // x2
  System_String_o *QuestIconNameForMainType; // x21
  int32_t QuestBoardSectionId; // w0
  __int64 v17; // x2
  int v18; // w21
  UISprite_o *mLabelBoardSectionSp; // x20
  QuestBoardListViewItemDraw_c *v20; // x0
  System_String_o *CHAPTER_SP_UNIT_NAME; // x22
  Il2CppObject *v22; // x0
  System_String_o *v23; // x21
  int v24; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_438C7F9 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    sub_B775C4(&Method_DataManager_GetMaster_WarMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)sub_B775C4(&QuestBoardListViewItemDraw_TypeInfo);
    byte_438C7F9 = 1;
  }
  if ( !questInfo )
    goto LABEL_52;
  this = (QuestBoardListViewItemDraw_o *)MapControl_QuestInfo__GetMine(questInfo, 0LL);
  if ( !this )
    goto LABEL_52;
  this = (QuestBoardListViewItemDraw_o *)QuestEntity__GetPhaseDetailedEntity((QuestEntity_o *)this, 0LL);
  if ( !v4->fields.mLabelSubSectionNumLb )
    goto LABEL_52;
  v5 = (QuestEntity_o *)this;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v4->fields.mLabelSubSectionNumLb,
                                           0LL);
  if ( !this )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  if ( !v5 )
    goto LABEL_52;
  if ( v5->fields.iconId <= 0
    && !QuestEntity__HasFlag(v5, 0x2000000000000000LL, 0LL)
    && System_String__IsNullOrEmpty(v5->fields.chapterSubStr, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !this )
      goto LABEL_52;
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)this,
               questInfo->fields.warId,
               (const MethodInfo_21FB894 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    HasFlag = QuestEntity__HasFlag(v5, 0x40000LL, 0LL);
    v9 = Entity && WarEntity__IsChapterSubIdJapaneseNumeralsNormal(Entity, 0LL);
    mLabelSubSectionNumLb = v4->fields.mLabelSubSectionNumLb;
    if ( HasFlag || v9 )
    {
      this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw__ConvertToChineseAscii(
                                               (QuestBoardListViewItemDraw_o *)v9,
                                               v5->fields.chapterSubId,
                                               v9,
                                               v7);
      if ( !mLabelSubSectionNumLb )
        goto LABEL_52;
    }
    else
    {
      this = (QuestBoardListViewItemDraw_o *)System_Int32__ToString((int)v5 + 116, 0LL);
      if ( !mLabelSubSectionNumLb )
        goto LABEL_52;
    }
    UILabel__set_text(mLabelSubSectionNumLb, (System_String_o *)this, 0LL);
    this = (QuestBoardListViewItemDraw_o *)v4->fields.mLabelSubSectionNumLb;
    if ( !this )
      goto LABEL_52;
    Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (QuestBoardListViewItemDraw_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !Component_WebViewObject )
        goto LABEL_52;
      CondensedScaleLabel__SetCondensedScale((CondensedScaleLabel_o *)Component_WebViewObject, 0LL);
    }
    this = (QuestBoardListViewItemDraw_o *)v4->fields.mLabelSubSectionNumLb;
    if ( !this )
      goto LABEL_52;
    this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_52;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  }
  this = (QuestBoardListViewItemDraw_o *)v4->fields.mLabelChapterSp;
  if ( !this )
    goto LABEL_52;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  mLabelChapterSp = v4->fields.mLabelChapterSp;
  QuestIconNameForMainType = QuestBoardListViewItemDraw__GetQuestIconNameForMainType(v13, v5, v14);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  this = (QuestBoardListViewItemDraw_o *)AtlasManager__SetEventUI(mLabelChapterSp, QuestIconNameForMainType, 0LL);
  if ( !mLabelChapterSp )
    goto LABEL_52;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLabelChapterSp, (unsigned __int8)this & 1, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v4->fields.mLabelChapterSp;
  if ( !this )
    goto LABEL_52;
  ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
    this,
    this->klass[2]._1.interopData);
  this = (QuestBoardListViewItemDraw_o *)questInfo->fields._WarInfo_k__BackingField;
  if ( !this )
    goto LABEL_52;
  this = (QuestBoardListViewItemDraw_o *)MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)this, 0LL);
  if ( !this )
    goto LABEL_52;
  QuestBoardSectionId = WarEntity__GetQuestBoardSectionId((WarEntity_o *)this, 0LL);
  if ( !QuestBoardSectionId )
    return;
  v18 = QuestBoardSectionId;
  mLabelBoardSectionSp = v4->fields.mLabelBoardSectionSp;
  v20 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v20 = QuestBoardListViewItemDraw_TypeInfo;
  }
  CHAPTER_SP_UNIT_NAME = v20->static_fields->CHAPTER_SP_UNIT_NAME;
  v24 = v18;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v17);
  v23 = System_String__Format(CHAPTER_SP_UNIT_NAME, v22, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  this = (QuestBoardListViewItemDraw_o *)AtlasManager__SetEventUI(mLabelBoardSectionSp, v23, 0LL);
  if ( !mLabelBoardSectionSp
    || (UnityEngine_Behaviour__set_enabled(
          (UnityEngine_Behaviour_o *)mLabelBoardSectionSp,
          (unsigned __int8)this & 1,
          0LL),
        (this = (QuestBoardListViewItemDraw_o *)v4->fields.mLabelBoardSectionSp) == 0LL) )
  {
LABEL_52:
    sub_B7769C(this, questInfo);
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

  if ( (byte_438C806 & 1) == 0 )
  {
    sub_B775C4(&QuestBoardListViewItemDraw_TypeInfo);
    byte_438C806 = 1;
  }
  StatusSp = QuestBoardListViewItemDraw__GetStatusSp(this, 2, method);
  if ( !StatusSp )
    sub_B7769C(0LL, v6);
  v7 = StatusSp;
  if ( UnityEngine_GameObject__get_activeSelf(StatusSp, 0LL) )
  {
    v8 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v8 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v7, v8->static_fields->CLEAR_POS_AREA, 0LL);
    if ( warEnt && WarEntity__HasFlag(warEnt, 256, 0LL) )
    {
      v9 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
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
  QuestBoardListViewItemDraw_o *v21; // x19
  __int64 type; // x8
  UnityEngine_GameObject_o *mCostObj; // x22
  _BOOL4 v24; // w22
  _BOOL4 HasFlag; // w20
  UIWidget_o *v26; // x22
  QuestBoardListViewItemDraw_c *v27; // x8
  int32_t *p_COST_BG_WIDTH_WAR_BOARD; // x8
  QuestConsumeItemEntity_o *v29; // x22
  QuestBoardListViewItemDraw_o **p_mCostLb2; // x21
  intptr_t v31; // w28
  intptr_t m_CachedPtr; // w26
  int bannerId; // w23
  UISprite_o *mCostApSp; // x22
  System_String_o *ApSpriteFileName; // x23
  QuestBoardListViewItemDraw_o *mCostItemIcon1; // x0
  int32_t ActConsume; // w0
  int32_t v38; // w20
  UserGameEntity_o *v39; // x28
  bool v40; // w25
  struct System_Int32_array *v41; // x8
  char v42; // w24
  UnityEngine_GameObject_o *v43; // x23
  QuestBoardListViewItemDraw_c *v44; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Int32_array *v46; // x8
  int32_t v47; // w20
  BalanceConfig_c *v48; // x0
  UIWidget_o *v49; // x23
  UnityEngine_GameObject_o *v50; // x0
  UnityEngine_GameObject_o *v51; // x0
  struct System_Int32_array *v52; // x8
  int v53; // w24
  UISprite_o *v54; // x23
  System_String_o *v55; // x24
  BalanceConfig_c *v56; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  UISprite_o *mCostRpSp; // x22
  __int64 BpExpresssionType; // x20
  __int64 v60; // x8
  struct System_String_array *RP_SPNAME_POINT; // x8
  UserItemMaster_o *Master_WarQuestSelectionMaster; // x27
  DataMasterBase_WarMaster__WarEntity__int__o *v63; // x20
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *v65; // x8
  ItemEntity_o *v66; // x28
  const MethodInfo *v67; // x6
  struct System_Int32_array *nums; // x8
  struct System_Int32_array *v69; // x8
  UIWidget_o *v70; // x28
  struct System_Int32_array *v71; // x8
  struct System_Int32_array *v72; // x8
  const MethodInfo *v73; // x6
  struct System_Int32_array *v74; // x8
  struct System_Int32_array *v75; // x8
  bool v76; // w28
  BalanceConfig_c *v77; // x0
  bool v78; // w25
  UILabel_o *mCostLb1; // x28
  System_String_o *v80; // x0
  const MethodInfo *v81; // x7
  UILabel_o *v82; // x20
  System_String_o *v83; // x0
  const MethodInfo *v84; // x7
  UIWidget_o *v85; // x25
  UserItemMaster_o *v86; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v87; // x25
  struct System_Int32_array *v88; // x8
  struct System_Int32_array *v89; // x8
  ItemEntity_o *v90; // x25
  const MethodInfo *v91; // x6
  struct System_Int32_array *v92; // x8
  struct System_Int32_array *v93; // x8
  UILabel_o *v94; // x26
  System_String_o *v95; // x0
  const MethodInfo *v96; // x7
  UISprite_o *v97; // x22
  __int64 v98; // x8
  UISprite_o *v99; // x23
  __int64 v100; // x8
  struct System_Int32_array *v101; // x8
  UnityEngine_GameObject_o *v102; // x0
  QuestBoardListViewItemDraw_c *v103; // x8
  UnityEngine_GameObject_o *v104; // x23
  UnityEngine_GameObject_o *v105; // x0
  struct System_Int32_array *v106; // x8
  int32_t v107; // w20
  BalanceConfig_c *v108; // x0
  UIWidget_o *v109; // x23
  UnityEngine_GameObject_o *v110; // x0
  UnityEngine_GameObject_o *v111; // x0
  UnityEngine_GameObject_o *v112; // x0
  QuestBoardListViewItemDraw_c *v113; // x8
  UnityEngine_GameObject_o *v114; // x23
  UnityEngine_GameObject_o *v115; // x0
  UnityEngine_GameObject_o *v116; // x0
  UnityEngine_GameObject_o *v117; // x0
  UnityEngine_GameObject_o *v118; // x0
  struct System_Int32_array *v119; // x8
  UnityEngine_GameObject_o *v120; // x20
  UnityEngine_GameObject_o *v121; // x20
  UnityEngine_GameObject_o *v122; // x20
  UIWidget_o *v123; // x22
  UILabel_o *v124; // x20
  UIWidget_o *v125; // x25
  struct System_Int32_array *v126; // x8
  struct System_Int32_array *v127; // x8
  const MethodInfo *v128; // x6
  struct System_Int32_array *v129; // x8
  struct System_Int32_array *v130; // x8
  __int64 v131; // x0
  __int64 v132; // x0
  bool *v133; // [xsp+8h] [xbp-A8h]
  bool v134; // [xsp+14h] [xbp-9Ch]
  bool *v135; // [xsp+18h] [xbp-98h]
  __int64 v136; // [xsp+20h] [xbp-90h]
  UserItemEntity_o *usrItem; // [xsp+28h] [xbp-88h] BYREF
  UserItemEntity_o *entity; // [xsp+30h] [xbp-80h] BYREF
  int32_t v139; // [xsp+3Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v141; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v142; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v143; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v144; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
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

  a = baseColor.fields.a;
  b = baseColor.fields.b;
  g = baseColor.fields.g;
  r = baseColor.fields.r;
  v21 = this;
  if ( (byte_438C7F4 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_B775C4(&Method_DataManager_GetMaster_ItemMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B775C4(&NetworkManager_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)sub_B775C4(&QuestBoardListViewItemDraw_TypeInfo);
    byte_438C7F4 = 1;
  }
  v139 = 0;
  usrItem = 0LL;
  entity = 0LL;
  if ( !questEnt )
    goto LABEL_436;
  type = questEnt->fields.type;
  *isDoubleItemConsume = 0;
  *isDoubleItemConsumeQp = 0;
  *isTripleItemConsume = 0;
  mCostObj = v21->fields.mCostObj;
  v136 = type;
  this = (QuestBoardListViewItemDraw_o *)QuestEntity__HasFlag(questEnt, 0x2000LL, 0LL);
  if ( !mCostObj )
    goto LABEL_436;
  UnityEngine_GameObject__SetActive(mCostObj, ((unsigned __int8)this & 1) == 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostObj;
  if ( !this )
    goto LABEL_436;
  if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
    return;
  if ( isClosed )
  {
    v24 = !QuestEntity__HasFlag(questEnt, 128LL, 0LL);
    HasFlag = QuestEntity__HasFlag(questEnt, 256LL, 0LL);
  }
  else
  {
    HasFlag = 0;
    LOBYTE(v24) = 1;
  }
  this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostLb1;
  if ( !this )
    goto LABEL_436;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_436;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !HasFlag, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostLb2;
  if ( !this )
    goto LABEL_436;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_436;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !HasFlag, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostLb3;
  if ( !this )
    goto LABEL_436;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_436;
  v134 = v24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !HasFlag, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostObj;
  if ( !this )
    goto LABEL_436;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           (UnityEngine_GameObject_o *)this,
                                           (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v26 = (UIWidget_o *)this;
  v27 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (_DWORD)v136 == 7 )
  {
    if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v27 = QuestBoardListViewItemDraw_TypeInfo;
    }
    p_COST_BG_WIDTH_WAR_BOARD = &v27->static_fields->COST_BG_WIDTH_WAR_BOARD;
    if ( !v26 )
      goto LABEL_436;
    goto LABEL_27;
  }
  if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v27 = QuestBoardListViewItemDraw_TypeInfo;
  }
  p_COST_BG_WIDTH_WAR_BOARD = &v27->static_fields->COST_BG_WIDTH_SINGLE;
  if ( !v26 )
LABEL_436:
    sub_B7769C(this, questEnt);
LABEL_27:
  UIWidget__set_width(v26, *p_COST_BG_WIDTH_WAR_BOARD, 0LL);
  this = (QuestBoardListViewItemDraw_o *)QuestEntity__getItemConsumeEntity(questEnt, 0LL);
  if ( !v21->fields.mCostBg1 )
    goto LABEL_436;
  v29 = (QuestConsumeItemEntity_o *)this;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v21->fields.mCostBg1,
                                           0LL);
  if ( !this )
    goto LABEL_436;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostBg2;
  if ( !this )
    goto LABEL_436;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_436;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostBg3;
  if ( !this )
    goto LABEL_436;
  v135 = isDoubleItemConsumeQp;
  v133 = isTripleItemConsume;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_436;
  p_mCostLb2 = (QuestBoardListViewItemDraw_o **)&v21->fields.mCostLb2;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  if ( HasFlag )
    goto LABEL_34;
  ActConsume = QuestEntity__getActConsume(questEnt, costCalcVal, 0LL);
  if ( fixedVal >= 0 )
    v38 = fixedVal;
  else
    v38 = ActConsume;
  v139 = v38;
  this = (QuestBoardListViewItemDraw_o *)UserGameMaster__getSelfUserGame(0LL);
  v39 = (UserGameEntity_o *)this;
  switch ( questEnt->fields.consumeType )
  {
    case 1:
      if ( !this )
        goto LABEL_436;
      v40 = v38 > SLODWORD(this->fields.mcBaseP) || v38 > UserGameEntity__getAct((UserGameEntity_o *)this, 0LL);
      mCostLb1 = v21->fields.mCostLb1;
      v80 = System_Int32__ToString((int32_t)&v139, 0LL);
      v151.fields.r = r;
      v151.fields.g = g;
      v151.fields.b = b;
      v151.fields.a = a;
      QuestBoardListViewItemDraw__SetCostLabel(
        (QuestBoardListViewItemDraw_o *)v80,
        mCostLb1,
        v80,
        costCalcVal,
        v151,
        v40,
        isClosed,
        fixedVal >= 0,
        v81);
      this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostLb2;
      if ( !this )
        goto LABEL_436;
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_436;
      goto LABEL_287;
    case 2:
      if ( !this )
        goto LABEL_436;
      if ( !byte_4387462 )
      {
        sub_B775C4(&BalanceConfig_TypeInfo);
        byte_4387462 = 1;
      }
      v77 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v77 = BalanceConfig_TypeInfo;
      }
      v78 = v38 > v77->static_fields->UerGameRpMax || v38 > UserGameEntity__getRp(v39, 0LL);
      v94 = v21->fields.mCostLb1;
      v95 = System_Int32__ToString((int32_t)&v139, 0LL);
      v154.fields.r = r;
      v154.fields.g = g;
      v154.fields.b = b;
      v154.fields.a = a;
      QuestBoardListViewItemDraw__SetCostLabel(
        (QuestBoardListViewItemDraw_o *)v95,
        v94,
        v95,
        0,
        v154,
        v78,
        isClosed,
        0,
        v96);
      this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostLb2;
      if ( !this )
        goto LABEL_436;
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_436;
LABEL_287:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostLb3;
      if ( !this )
        goto LABEL_436;
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_436;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      goto LABEL_34;
    case 3:
      if ( !v29 || !QuestConsumeItemEntity__IsAvailableAt(v29, 0, 0LL) )
      {
        this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostLb1;
        if ( !this )
          goto LABEL_436;
LABEL_278:
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_436;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = *p_mCostLb2;
        if ( !*p_mCostLb2 )
          goto LABEL_436;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_436;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostLb3;
        if ( !this )
          goto LABEL_436;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_436;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        v29 = 0LL;
LABEL_34:
        v31 = 0;
LABEL_35:
        m_CachedPtr = 0;
        goto LABEL_36;
      }
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserItemMaster___);
      v63 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      this = (QuestBoardListViewItemDraw_o *)NetworkManager__get_UserId(0LL);
      itemIds = v29->fields.itemIds;
      if ( !itemIds )
        goto LABEL_436;
      if ( !itemIds->max_length )
        goto LABEL_438;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_436;
      this = (QuestBoardListViewItemDraw_o *)UserItemMaster__TryGetEntity(
                                               Master_WarQuestSelectionMaster,
                                               &entity,
                                               (int64_t)this,
                                               itemIds->m_Items[1],
                                               0LL);
      v65 = v29->fields.itemIds;
      if ( !v65 )
        goto LABEL_436;
      if ( !v65->max_length )
        goto LABEL_438;
      if ( !v63 )
        goto LABEL_436;
      this = (QuestBoardListViewItemDraw_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                               v63,
                                               v65->m_Items[1],
                                               (const MethodInfo_21FB894 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !v21->fields.mCostLb1 )
        goto LABEL_436;
      v66 = (ItemEntity_o *)this;
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)v21->fields.mCostLb1,
                                               0LL);
      if ( !this )
        goto LABEL_436;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      nums = v29->fields.nums;
      if ( !nums )
        goto LABEL_436;
      if ( !nums->max_length )
        goto LABEL_438;
      v149.fields.r = r;
      v149.fields.g = g;
      v149.fields.b = b;
      v149.fields.a = a;
      QuestBoardListViewItemDraw__SetCostLabelItem(
        this,
        v21->fields.mCostLb1,
        nums->m_Items[1],
        entity,
        v66,
        v149,
        isClosed,
        v67);
      v69 = v29->fields.nums;
      if ( !v69 )
        goto LABEL_436;
      if ( !v69->max_length )
        goto LABEL_438;
      this = (QuestBoardListViewItemDraw_o *)System_Int32__ToString((int)v69 + 32, 0LL);
      if ( !this )
        goto LABEL_436;
      m_CachedPtr = this->fields.m_CachedPtr;
      if ( QuestConsumeItemEntity__IsAvailableAt(v29, 1, 0LL) )
      {
        *isDoubleItemConsume = 1;
        this = *p_mCostLb2;
        if ( !*p_mCostLb2 )
          goto LABEL_436;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_436;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostObj;
        if ( !this )
          goto LABEL_436;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 (UnityEngine_GameObject_o *)this,
                                                 (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        v70 = (UIWidget_o *)this;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        }
        if ( !v70 )
          goto LABEL_436;
        UIWidget__set_width(v70, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_DOUBLE, 0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        this = (QuestBoardListViewItemDraw_o *)NetworkManager__get_UserId(0LL);
        v71 = v29->fields.itemIds;
        if ( !v71 )
          goto LABEL_436;
        if ( v71->max_length <= 1 )
          goto LABEL_438;
        this = (QuestBoardListViewItemDraw_o *)UserItemMaster__TryGetEntity(
                                                 Master_WarQuestSelectionMaster,
                                                 &entity,
                                                 (int64_t)this,
                                                 v71->m_Items[2],
                                                 0LL);
        v72 = v29->fields.itemIds;
        if ( !v72 )
          goto LABEL_436;
        if ( v72->max_length <= 1 )
          goto LABEL_438;
        this = (QuestBoardListViewItemDraw_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                 v63,
                                                 v72->m_Items[2],
                                                 (const MethodInfo_21FB894 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        v74 = v29->fields.nums;
        if ( !v74 )
          goto LABEL_436;
        if ( v74->max_length <= 1 )
          goto LABEL_438;
        v150.fields.r = r;
        v150.fields.g = g;
        v150.fields.b = b;
        v150.fields.a = a;
        QuestBoardListViewItemDraw__SetCostLabelItem(
          this,
          (UILabel_o *)*p_mCostLb2,
          v74->m_Items[2],
          entity,
          (ItemEntity_o *)this,
          v150,
          isClosed,
          v73);
        v75 = v29->fields.nums;
        if ( !v75 )
          goto LABEL_436;
        if ( v75->max_length <= 1 )
          goto LABEL_438;
        this = (QuestBoardListViewItemDraw_o *)System_Int32__ToString((int)v75 + 36, 0LL);
        if ( !this )
          goto LABEL_436;
        v31 = this->fields.m_CachedPtr;
      }
      else
      {
        this = *p_mCostLb2;
        if ( !*p_mCostLb2 )
          goto LABEL_436;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_436;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        v31 = 0;
      }
      if ( QuestConsumeItemEntity__IsAvailableAt(v29, 2, 0LL) )
      {
        *isDoubleItemConsume = 0;
        *v133 = 1;
        this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostLb3;
        if ( !this )
          goto LABEL_436;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_436;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostObj;
        if ( !this )
          goto LABEL_436;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 (UnityEngine_GameObject_o *)this,
                                                 (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        v125 = (UIWidget_o *)this;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        }
        if ( !v125 )
          goto LABEL_436;
        UIWidget__set_width(
          v125,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_TLIPLE_FOR_ALL_ITEM,
          0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        this = (QuestBoardListViewItemDraw_o *)NetworkManager__get_UserId(0LL);
        v126 = v29->fields.itemIds;
        if ( !v126 )
          goto LABEL_436;
        if ( v126->max_length > 2 )
        {
          this = (QuestBoardListViewItemDraw_o *)UserItemMaster__TryGetEntity(
                                                   Master_WarQuestSelectionMaster,
                                                   &entity,
                                                   (int64_t)this,
                                                   v126->m_Items[3],
                                                   0LL);
          v127 = v29->fields.itemIds;
          if ( !v127 )
            goto LABEL_436;
          if ( v127->max_length > 2 )
          {
            this = (QuestBoardListViewItemDraw_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                     v63,
                                                     v127->m_Items[3],
                                                     (const MethodInfo_21FB894 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            v129 = v29->fields.nums;
            if ( !v129 )
              goto LABEL_436;
            if ( v129->max_length > 2 )
            {
              v158.fields.r = r;
              v158.fields.g = g;
              v158.fields.b = b;
              v158.fields.a = a;
              QuestBoardListViewItemDraw__SetCostLabelItem(
                this,
                v21->fields.mCostLb3,
                v129->m_Items[3],
                entity,
                (ItemEntity_o *)this,
                v158,
                isClosed,
                v128);
              v130 = v29->fields.nums;
              if ( !v130 )
                goto LABEL_436;
              if ( v130->max_length > 2 )
              {
                this = (QuestBoardListViewItemDraw_o *)System_Int32__ToString((int)v130 + 40, 0LL);
                if ( !this )
                  goto LABEL_436;
                goto LABEL_36;
              }
            }
          }
        }
LABEL_438:
        v131 = sub_B776C8(this);
        sub_B77668(v131, 0LL);
      }
      this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostLb3;
      if ( !this )
        goto LABEL_436;
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_436;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
LABEL_36:
      if ( v134 )
      {
        switch ( questEnt->fields.consumeType )
        {
          case 1:
            this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostRpSp;
            if ( !this )
              goto LABEL_436;
            this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
            if ( !this )
              goto LABEL_436;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon1;
            if ( !this )
              goto LABEL_436;
            this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
            if ( !this )
              goto LABEL_436;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon2;
            if ( !this )
              goto LABEL_436;
            this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
            if ( !this )
              goto LABEL_436;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon3;
            if ( !this )
              goto LABEL_436;
            this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
            if ( !this )
              goto LABEL_436;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostApSp;
            if ( !this )
              goto LABEL_436;
            this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
            if ( !this )
              goto LABEL_436;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostApSp;
            if ( !this )
              goto LABEL_436;
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
            bannerId = questEnt->fields.bannerId;
            mCostApSp = v21->fields.mCostApSp;
            if ( bannerId >= 1 )
            {
              if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
              }
              ApSpriteFileName = QuestBoardListViewItemDraw__GetApSpriteFileName(bannerId, (const MethodInfo *)questEnt);
              if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !AtlasManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              }
              this = (QuestBoardListViewItemDraw_o *)AtlasManager__SetEventUI(mCostApSp, ApSpriteFileName, 0LL);
              if ( !mCostApSp )
                goto LABEL_436;
              UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mCostApSp, (unsigned __int8)this & 1, 0LL);
              goto LABEL_298;
            }
            if ( !mCostApSp )
              goto LABEL_436;
            UISprite__set_atlas(v21->fields.mCostApSp, v21->fields.mTerminalAtlas, 0LL);
            this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
            v97 = v21->fields.mCostApSp;
            if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
              this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
            }
            v98 = *(_QWORD *)&this->fields.mTitleLevelSp[2].fields.mAnchorsCached;
            if ( !v98 )
              goto LABEL_436;
            if ( (unsigned int)v136 < *(_DWORD *)(v98 + 24) )
            {
              if ( !v97 )
                goto LABEL_436;
              UISprite__set_spriteName(v97, *(System_String_o **)(v98 + 8 * v136 + 32), 0LL);
LABEL_298:
              this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostApSp;
              if ( !this )
                goto LABEL_436;
              ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
                this,
                this->klass[2]._1.interopData);
              this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostApSp;
              if ( !this )
                goto LABEL_436;
              v155.fields.r = r;
              v155.fields.g = g;
              v155.fields.b = b;
              v155.fields.a = a;
              UIWidget__set_color((UIWidget_o *)this, v155, 0LL);
              break;
            }
            goto LABEL_438;
          case 2:
            this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostApSp;
            if ( !this )
              goto LABEL_436;
            this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
            if ( !this )
              goto LABEL_436;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon1;
            if ( !this )
              goto LABEL_436;
            this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
            if ( !this )
              goto LABEL_436;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon2;
            if ( !this )
              goto LABEL_436;
            this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
            if ( !this )
              goto LABEL_436;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon3;
            if ( !this )
              goto LABEL_436;
            this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
            if ( !this )
              goto LABEL_436;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostRpSp;
            if ( !this )
              goto LABEL_436;
            this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
            if ( !this )
              goto LABEL_436;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostRpSp;
            if ( !this )
              goto LABEL_436;
            v147.fields.r = r;
            v147.fields.g = g;
            v147.fields.b = b;
            v147.fields.a = a;
            UIWidget__set_color((UIWidget_o *)this, v147, 0LL);
            this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostRpPointSp;
            if ( !this )
              goto LABEL_436;
            v148.fields.r = r;
            v148.fields.g = g;
            v148.fields.b = b;
            v148.fields.a = a;
            UIWidget__set_color((UIWidget_o *)this, v148, 0LL);
            v56 = BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v56 = BalanceConfig_TypeInfo;
            }
            static_fields = v56->static_fields;
            this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
            mCostRpSp = v21->fields.mCostRpSp;
            BpExpresssionType = static_fields->BpExpresssionType;
            if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
              this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
            }
            v60 = *(_QWORD *)&this->fields.mTitleLevelSp[1].fields.mOuterUV.fields.m_Height;
            if ( !v60 )
              goto LABEL_436;
            if ( (unsigned int)BpExpresssionType >= *(_DWORD *)(v60 + 24) )
              goto LABEL_438;
            if ( !mCostRpSp )
              goto LABEL_436;
            UISprite__set_spriteName(mCostRpSp, *(System_String_o **)(v60 + 8 * BpExpresssionType + 32), 0LL);
            RP_SPNAME_POINT = QuestBoardListViewItemDraw_TypeInfo->static_fields->RP_SPNAME_POINT;
            if ( !RP_SPNAME_POINT )
              goto LABEL_436;
            if ( (unsigned int)BpExpresssionType >= RP_SPNAME_POINT->max_length )
              goto LABEL_438;
            this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostRpPointSp;
            if ( !this )
              goto LABEL_436;
            UISprite__set_spriteName((UISprite_o *)this, RP_SPNAME_POINT->m_Items[BpExpresssionType], 0LL);
            this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostRpSp;
            if ( !this )
              goto LABEL_436;
            ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
              this,
              this->klass[2]._1.interopData);
            this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostRpPointSp;
            if ( !this )
              goto LABEL_436;
            ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
              this,
              this->klass[2]._1.interopData);
            break;
          case 3:
            if ( !v29 )
              break;
            this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostApSp;
            if ( !this )
              goto LABEL_436;
            this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
            if ( !this )
              goto LABEL_436;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostRpSp;
            if ( !this )
              goto LABEL_436;
            this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
            if ( !this )
              goto LABEL_436;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon1;
            if ( !mCostItemIcon1 )
              goto LABEL_437;
            mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)mCostItemIcon1,
                                                               0LL);
            if ( !mCostItemIcon1 )
              goto LABEL_437;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mCostItemIcon1, 1, 0LL);
            v41 = v29->fields.itemIds;
            if ( !v41 )
              goto LABEL_437;
            if ( !v41->max_length )
              goto LABEL_439;
            mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon1;
            if ( !mCostItemIcon1 )
              goto LABEL_437;
            ItemIconComponent__SetItem((ItemIconComponent_o *)mCostItemIcon1, v41->m_Items[1], -1, 0LL);
            mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon1;
            if ( !mCostItemIcon1 )
              goto LABEL_437;
            v145.fields.r = r;
            v145.fields.g = g;
            v145.fields.b = b;
            v145.fields.a = a;
            ItemIconComponent__SetColor((ItemIconComponent_o *)mCostItemIcon1, v145, 0LL);
            mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)QuestConsumeItemEntity__IsAvailableAt(v29, 1, 0LL);
            if ( !v21->fields.mCostItemIcon2 )
              goto LABEL_437;
            v42 = (char)mCostItemIcon1;
            mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)v21->fields.mCostItemIcon2,
                                                               0LL);
            v43 = (UnityEngine_GameObject_o *)mCostItemIcon1;
            if ( (v42 & 1) != 0 )
            {
              v44 = QuestBoardListViewItemDraw_TypeInfo;
              if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
                v44 = QuestBoardListViewItemDraw_TypeInfo;
              }
              GameObjectExtensions__SetLocalPositionX(
                v43,
                (float)v44->static_fields->COST_2_ICON_NORMAL_POSITION_X,
                0LL);
              mCostItemIcon1 = *p_mCostLb2;
              if ( !*p_mCostLb2 )
                goto LABEL_437;
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostItemIcon1, 0LL);
              GameObjectExtensions__SetLocalPositionX(
                gameObject,
                (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_NORMAL_POSITION_X,
                0LL);
              v46 = v29->fields.itemIds;
              if ( !v46 )
                goto LABEL_437;
              if ( v46->max_length <= 1 )
                goto LABEL_439;
              v47 = v46->m_Items[2];
              v48 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v48 = BalanceConfig_TypeInfo;
              }
              if ( v47 == v48->static_fields->ItemIdQp )
              {
                *v135 = 1;
                mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostObj;
                if ( !mCostItemIcon1 )
                  goto LABEL_437;
                mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   (UnityEngine_GameObject_o *)mCostItemIcon1,
                                                                   (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                v49 = (UIWidget_o *)mCostItemIcon1;
                if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
                }
                if ( !v49 )
                  goto LABEL_437;
                UIWidget__set_width(
                  v49,
                  QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_DOUBLE_QP,
                  0LL);
                mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostBg1;
                if ( !mCostItemIcon1 )
                  goto LABEL_437;
                mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)mCostItemIcon1,
                                                                   0LL);
                if ( !mCostItemIcon1 )
                  goto LABEL_437;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mCostItemIcon1, 1, 0LL);
                mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostBg2;
                if ( !mCostItemIcon1 )
                  goto LABEL_437;
                mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)mCostItemIcon1,
                                                                   0LL);
                if ( !mCostItemIcon1 )
                  goto LABEL_437;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mCostItemIcon1, 1, 0LL);
                mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostBg1;
                if ( !mCostItemIcon1 )
                  goto LABEL_437;
                mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                   (UnityEngine_Component_o *)mCostItemIcon1,
                                                                   (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
                if ( !mCostItemIcon1 )
                  goto LABEL_437;
                UISprite__set_spriteName(
                  (UISprite_o *)mCostItemIcon1,
                  QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_ITEM,
                  0LL);
                mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostBg2;
                if ( !mCostItemIcon1 )
                  goto LABEL_437;
                mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                   (UnityEngine_Component_o *)mCostItemIcon1,
                                                                   (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
                if ( !mCostItemIcon1 )
                  goto LABEL_437;
                UISprite__set_spriteName(
                  (UISprite_o *)mCostItemIcon1,
                  QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_QP,
                  0LL);
                mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon2;
                if ( !mCostItemIcon1 )
                  goto LABEL_437;
                v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostItemIcon1, 0LL);
                GameObjectExtensions__SetLocalPositionX(
                  v50,
                  (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_ICON_QP_POSITION_X,
                  0LL);
                mCostItemIcon1 = *p_mCostLb2;
                if ( !*p_mCostLb2 )
                  goto LABEL_437;
                v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostItemIcon1, 0LL);
                GameObjectExtensions__SetLocalPositionX(
                  v51,
                  (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_QP_POSITION_X,
                  0LL);
              }
              mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon2;
              if ( !mCostItemIcon1 )
                goto LABEL_437;
              mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)mCostItemIcon1,
                                                                 0LL);
              if ( !mCostItemIcon1 )
                goto LABEL_437;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mCostItemIcon1, 1, 0LL);
              v52 = v29->fields.itemIds;
              if ( !v52 )
                goto LABEL_437;
              if ( v52->max_length <= 1 )
                goto LABEL_439;
              mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon2;
              if ( !mCostItemIcon1 )
                goto LABEL_437;
              ItemIconComponent__SetItem((ItemIconComponent_o *)mCostItemIcon1, v52->m_Items[2], -1, 0LL);
              mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon2;
              if ( !mCostItemIcon1 )
                goto LABEL_437;
              v146.fields.r = r;
              v146.fields.g = g;
              v146.fields.b = b;
              v146.fields.a = a;
              ItemIconComponent__SetColor((ItemIconComponent_o *)mCostItemIcon1, v146, 0LL);
            }
            else
            {
              if ( !mCostItemIcon1 )
                goto LABEL_437;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mCostItemIcon1, 0, 0LL);
            }
            if ( QuestConsumeItemEntity__IsAvailableAt(v29, 2, 0LL) )
            {
              mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostLb1;
              if ( !mCostItemIcon1 )
                goto LABEL_437;
              v112 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostItemIcon1, 0LL);
              v113 = QuestBoardListViewItemDraw_TypeInfo;
              v114 = v112;
              if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
                v113 = QuestBoardListViewItemDraw_TypeInfo;
              }
              GameObjectExtensions__SetLocalPositionX(
                v114,
                (float)v113->static_fields->COST_1_LABEL_NORMAL_POSITION_X_FOR_ALL_ITEM,
                0LL);
              mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon2;
              if ( !mCostItemIcon1 )
                goto LABEL_437;
              v115 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostItemIcon1, 0LL);
              GameObjectExtensions__SetLocalPositionX(
                v115,
                (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_ICON_NORMAL_POSITION_X_FOR_ALL_ITEM,
                0LL);
              mCostItemIcon1 = *p_mCostLb2;
              if ( !*p_mCostLb2 )
                goto LABEL_437;
              v116 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostItemIcon1, 0LL);
              GameObjectExtensions__SetLocalPositionX(
                v116,
                (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_NORMAL_POSITION_X_FOR_ALL_ITEM,
                0LL);
              mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon3;
              if ( !mCostItemIcon1 )
                goto LABEL_437;
              v117 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostItemIcon1, 0LL);
              GameObjectExtensions__SetLocalPositionX(
                v117,
                (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_3_ICON_NORMAL_POSITION_X_FOR_ALL_ITEM,
                0LL);
              mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostLb3;
              if ( !mCostItemIcon1 )
                goto LABEL_437;
              v118 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostItemIcon1, 0LL);
              GameObjectExtensions__SetLocalPositionX(
                v118,
                (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_3_LABEL_NORMAL_POSITION_X_FOR_ALL_ITEM,
                0LL);
              mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon3;
              if ( !mCostItemIcon1 )
                goto LABEL_437;
              mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)mCostItemIcon1,
                                                                 0LL);
              if ( !mCostItemIcon1 )
                goto LABEL_437;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mCostItemIcon1, 1, 0LL);
              v119 = v29->fields.itemIds;
              if ( !v119 )
                goto LABEL_437;
              if ( v119->max_length > 2 )
              {
                mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon3;
                if ( !mCostItemIcon1 )
                  goto LABEL_437;
                ItemIconComponent__SetItem((ItemIconComponent_o *)mCostItemIcon1, v119->m_Items[3], -1, 0LL);
                mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon3;
                if ( !mCostItemIcon1 )
                  goto LABEL_437;
LABEL_76:
                v144.fields.r = r;
                v144.fields.g = g;
                v144.fields.b = b;
                v144.fields.a = a;
                ItemIconComponent__SetColor((ItemIconComponent_o *)mCostItemIcon1, v144, 0LL);
                break;
              }
LABEL_439:
              v132 = sub_B776C8(mCostItemIcon1);
              sub_B77668(v132, 0LL);
            }
            mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon3;
            if ( !mCostItemIcon1 )
              goto LABEL_437;
            goto LABEL_365;
          case 4:
            mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostRpSp;
            if ( !mCostItemIcon1 )
              goto LABEL_437;
            mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)mCostItemIcon1,
                                                               0LL);
            if ( !mCostItemIcon1 )
              goto LABEL_437;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mCostItemIcon1, 0, 0LL);
            mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon1;
            if ( !mCostItemIcon1 )
              goto LABEL_437;
            mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)mCostItemIcon1,
                                                               0LL);
            if ( !mCostItemIcon1 )
              goto LABEL_437;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mCostItemIcon1, 0, 0LL);
            mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon2;
            if ( !mCostItemIcon1 )
              goto LABEL_437;
            mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)mCostItemIcon1,
                                                               0LL);
            if ( !mCostItemIcon1 )
              goto LABEL_437;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mCostItemIcon1, 0, 0LL);
            mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon3;
            if ( !mCostItemIcon1 )
              goto LABEL_437;
            mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)mCostItemIcon1,
                                                               0LL);
            if ( !mCostItemIcon1 )
              goto LABEL_437;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mCostItemIcon1, 0, 0LL);
            mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostApSp;
            if ( !mCostItemIcon1 )
              goto LABEL_437;
            mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)mCostItemIcon1,
                                                               0LL);
            if ( !mCostItemIcon1 )
              goto LABEL_437;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mCostItemIcon1, 1, 0LL);
            mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostApSp;
            if ( !mCostItemIcon1 )
              goto LABEL_437;
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mCostItemIcon1, 1, 0LL);
            v53 = questEnt->fields.bannerId;
            v54 = v21->fields.mCostApSp;
            if ( v53 < 1 )
            {
              if ( !v54 )
                goto LABEL_437;
              UISprite__set_atlas(v21->fields.mCostApSp, v21->fields.mTerminalAtlas, 0LL);
              mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
              v99 = v21->fields.mCostApSp;
              if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
                mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
              }
              v100 = *(_QWORD *)&mCostItemIcon1->fields.mTitleLevelSp[2].fields.mAnchorsCached;
              if ( !v100 )
                goto LABEL_437;
              if ( (unsigned int)v136 >= *(_DWORD *)(v100 + 24) )
                goto LABEL_439;
              if ( !v99 )
                goto LABEL_437;
              UISprite__set_spriteName(v99, *(System_String_o **)(v100 + 8 * v136 + 32), 0LL);
            }
            else
            {
              if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
              }
              v55 = QuestBoardListViewItemDraw__GetApSpriteFileName(v53, (const MethodInfo *)questEnt);
              if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !AtlasManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              }
              mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)AtlasManager__SetEventUI(v54, v55, 0LL);
              if ( !v54 )
                goto LABEL_437;
              UnityEngine_Behaviour__set_enabled(
                (UnityEngine_Behaviour_o *)v54,
                (unsigned __int8)mCostItemIcon1 & 1,
                0LL);
            }
            mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostApSp;
            if ( !mCostItemIcon1 )
              goto LABEL_437;
            ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, void *))mCostItemIcon1->klass[2]._1.typeMetadataHandle)(
              mCostItemIcon1,
              mCostItemIcon1->klass[2]._1.interopData);
            mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostApSp;
            if ( !mCostItemIcon1 )
              goto LABEL_437;
            v156.fields.r = r;
            v156.fields.g = g;
            v156.fields.b = b;
            v156.fields.a = a;
            UIWidget__set_color((UIWidget_o *)mCostItemIcon1, v156, 0LL);
            if ( !v29 )
              break;
            mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostRpSp;
            if ( !mCostItemIcon1 )
              goto LABEL_437;
            mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)mCostItemIcon1,
                                                               0LL);
            if ( !mCostItemIcon1 )
              goto LABEL_437;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mCostItemIcon1, 0, 0LL);
            mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon2;
            if ( !mCostItemIcon1 )
              goto LABEL_437;
            mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)mCostItemIcon1,
                                                               0LL);
            if ( !mCostItemIcon1 )
              goto LABEL_437;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mCostItemIcon1, 1, 0LL);
            v101 = v29->fields.itemIds;
            if ( !v101 )
              goto LABEL_437;
            if ( !v101->max_length )
              goto LABEL_439;
            mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon2;
            if ( !mCostItemIcon1 )
              goto LABEL_437;
            ItemIconComponent__SetItem((ItemIconComponent_o *)mCostItemIcon1, v101->m_Items[1], -1, 0LL);
            mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon2;
            if ( !mCostItemIcon1 )
              goto LABEL_437;
            v157.fields.r = r;
            v157.fields.g = g;
            v157.fields.b = b;
            v157.fields.a = a;
            ItemIconComponent__SetColor((ItemIconComponent_o *)mCostItemIcon1, v157, 0LL);
            mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon2;
            if ( !mCostItemIcon1 )
              goto LABEL_437;
            v102 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostItemIcon1, 0LL);
            v103 = QuestBoardListViewItemDraw_TypeInfo;
            v104 = v102;
            if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
              v103 = QuestBoardListViewItemDraw_TypeInfo;
            }
            GameObjectExtensions__SetLocalPositionX(
              v104,
              (float)v103->static_fields->COST_2_ICON_NORMAL_POSITION_X,
              0LL);
            mCostItemIcon1 = *p_mCostLb2;
            if ( !*p_mCostLb2 )
              goto LABEL_437;
            v105 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostItemIcon1, 0LL);
            GameObjectExtensions__SetLocalPositionX(
              v105,
              (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_NORMAL_POSITION_X,
              0LL);
            v106 = v29->fields.itemIds;
            if ( !v106 )
              goto LABEL_437;
            if ( !v106->max_length )
              goto LABEL_439;
            v107 = v106->m_Items[1];
            v108 = BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v108 = BalanceConfig_TypeInfo;
            }
            if ( v107 == v108->static_fields->ItemIdQp )
            {
              *v135 = 1;
              mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostObj;
              if ( !mCostItemIcon1 )
                goto LABEL_437;
              mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 (UnityEngine_GameObject_o *)mCostItemIcon1,
                                                                 (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
              v109 = (UIWidget_o *)mCostItemIcon1;
              if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
              }
              if ( !v109 )
                goto LABEL_437;
              UIWidget__set_width(
                v109,
                QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_DOUBLE_QP,
                0LL);
              mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostBg2;
              if ( !mCostItemIcon1 )
                goto LABEL_437;
              mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)mCostItemIcon1,
                                                                 0LL);
              if ( !mCostItemIcon1 )
                goto LABEL_437;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mCostItemIcon1, 1, 0LL);
              mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostBg2;
              if ( !mCostItemIcon1 )
                goto LABEL_437;
              mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                 (UnityEngine_Component_o *)mCostItemIcon1,
                                                                 (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
              if ( !mCostItemIcon1 )
                goto LABEL_437;
              UISprite__set_spriteName(
                (UISprite_o *)mCostItemIcon1,
                QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_QP,
                0LL);
              mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon2;
              if ( !mCostItemIcon1 )
                goto LABEL_437;
              v110 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostItemIcon1, 0LL);
              GameObjectExtensions__SetLocalPositionX(
                v110,
                (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_ICON_QP_POSITION_X,
                0LL);
              mCostItemIcon1 = *p_mCostLb2;
              if ( !*p_mCostLb2 )
                goto LABEL_437;
              v111 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostItemIcon1, 0LL);
              GameObjectExtensions__SetLocalPositionX(
                v111,
                (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_QP_POSITION_X,
                0LL);
            }
            if ( !QuestConsumeItemEntity__IsAvailableAt(v29, 1, 0LL) )
              break;
            mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon2;
            if ( !mCostItemIcon1 )
              goto LABEL_437;
LABEL_365:
            mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)mCostItemIcon1,
                                                               0LL);
            if ( !mCostItemIcon1 )
              goto LABEL_437;
LABEL_366:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mCostItemIcon1, 0, 0LL);
            break;
          default:
            mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostObj;
            if ( !mCostItemIcon1 )
              goto LABEL_437;
            goto LABEL_366;
        }
      }
      else
      {
        mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostApSp;
        if ( !mCostItemIcon1 )
          goto LABEL_437;
        mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)mCostItemIcon1,
                                                           0LL);
        if ( !mCostItemIcon1 )
          goto LABEL_437;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mCostItemIcon1, 0, 0LL);
        mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostRpSp;
        if ( !mCostItemIcon1 )
          goto LABEL_437;
        mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)mCostItemIcon1,
                                                           0LL);
        if ( !mCostItemIcon1 )
          goto LABEL_437;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mCostItemIcon1, 0, 0LL);
        mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon1;
        if ( !mCostItemIcon1 )
          goto LABEL_437;
        mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)mCostItemIcon1,
                                                           0LL);
        if ( !mCostItemIcon1 )
          goto LABEL_437;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mCostItemIcon1, 1, 0LL);
        mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon2;
        if ( !mCostItemIcon1 )
          goto LABEL_437;
        mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)mCostItemIcon1,
                                                           0LL);
        if ( !mCostItemIcon1 )
          goto LABEL_437;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mCostItemIcon1, 0, 0LL);
        mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon3;
        if ( !mCostItemIcon1 )
          goto LABEL_437;
        mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)mCostItemIcon1,
                                                           0LL);
        if ( !mCostItemIcon1 )
          goto LABEL_437;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mCostItemIcon1, 0, 0LL);
        mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon1;
        if ( !mCostItemIcon1 )
          goto LABEL_437;
        ItemIconComponent__SetItemImage((ItemIconComponent_o *)mCostItemIcon1, 99, 0LL);
        mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon1;
        if ( !mCostItemIcon1 )
          goto LABEL_437;
        v143.fields.r = r;
        v143.fields.g = g;
        v143.fields.b = b;
        v143.fields.a = a;
        ItemIconComponent__SetColor((ItemIconComponent_o *)mCostItemIcon1, v143, 0LL);
        if ( v29 && QuestConsumeItemEntity__IsAvailableAt(v29, 1, 0LL) )
        {
          mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon2;
          if ( !mCostItemIcon1 )
            goto LABEL_437;
          mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)mCostItemIcon1,
                                                             0LL);
          if ( !mCostItemIcon1 )
            goto LABEL_437;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mCostItemIcon1, 1, 0LL);
          mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon2;
          if ( !mCostItemIcon1 )
            goto LABEL_437;
          ItemIconComponent__SetItemImage((ItemIconComponent_o *)mCostItemIcon1, 99, 0LL);
          mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon2;
          if ( !mCostItemIcon1 )
            goto LABEL_437;
          goto LABEL_76;
        }
      }
      mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostLb1;
      if ( !mCostItemIcon1 )
        goto LABEL_437;
      UILabel__set_overflowMethod((UILabel_o *)mCostItemIcon1, 0, 0LL);
      mCostItemIcon1 = *p_mCostLb2;
      if ( !*p_mCostLb2 )
        goto LABEL_437;
      UILabel__set_overflowMethod((UILabel_o *)mCostItemIcon1, 0, 0LL);
      mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostLb3;
      if ( !mCostItemIcon1 )
        goto LABEL_437;
      UILabel__set_overflowMethod((UILabel_o *)mCostItemIcon1, 0, 0LL);
      mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostLb1;
      if ( !mCostItemIcon1 )
        goto LABEL_437;
      v120 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostItemIcon1, 0LL);
      one = UnityEngine_Vector3__get_one(0LL);
      GameObjectExtensions__SetLocalScale(v120, one, 0LL);
      mCostItemIcon1 = *p_mCostLb2;
      if ( !*p_mCostLb2 )
        goto LABEL_437;
      v121 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostItemIcon1, 0LL);
      v141 = UnityEngine_Vector3__get_one(0LL);
      GameObjectExtensions__SetLocalScale(v121, v141, 0LL);
      mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostLb3;
      if ( !mCostItemIcon1 )
        goto LABEL_437;
      v122 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostItemIcon1, 0LL);
      v142 = UnityEngine_Vector3__get_one(0LL);
      GameObjectExtensions__SetLocalScale(v122, v142, 0LL);
      mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
      v123 = (UIWidget_o *)v21->fields.mCostLb1;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      }
      if ( !v123 )
        goto LABEL_437;
      UIWidget__set_width(v123, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_1_LABEL_DEFAULT_WIDTH, 0LL);
      mCostItemIcon1 = *p_mCostLb2;
      if ( !*p_mCostLb2 )
        goto LABEL_437;
      UIWidget__set_width(
        (UIWidget_o *)mCostItemIcon1,
        QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_DEFAULT_WIDTH,
        0LL);
      mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostLb3;
      if ( !mCostItemIcon1 )
        goto LABEL_437;
      UIWidget__set_width(
        (UIWidget_o *)mCostItemIcon1,
        QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_3_LABEL_DEFAULT_WIDTH,
        0LL);
      mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostLb1;
      if ( !mCostItemIcon1 )
        goto LABEL_437;
      UILabel__set_spacingX(
        (UILabel_o *)mCostItemIcon1,
        QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_DEFAULT_SPACING,
        0LL);
      mCostItemIcon1 = *p_mCostLb2;
      if ( !*p_mCostLb2 )
        goto LABEL_437;
      UILabel__set_spacingX(
        (UILabel_o *)mCostItemIcon1,
        QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_DEFAULT_SPACING,
        0LL);
      mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostLb3;
      if ( !mCostItemIcon1 )
        goto LABEL_437;
      UILabel__set_spacingX(
        (UILabel_o *)mCostItemIcon1,
        QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_DEFAULT_SPACING,
        0LL);
      if ( !*v135 )
      {
        if ( !*v133 )
          return;
        mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
        v124 = v21->fields.mCostLb1;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        }
        if ( v124 )
        {
          UILabel__set_spacingX(
            v124,
            QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_SPACING_FOR_THREE_ITEM,
            0LL);
          mCostItemIcon1 = *p_mCostLb2;
          if ( *p_mCostLb2 )
          {
            UILabel__set_spacingX(
              (UILabel_o *)mCostItemIcon1,
              QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_SPACING_FOR_THREE_ITEM,
              0LL);
            mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostLb3;
            if ( mCostItemIcon1 )
            {
              UILabel__set_spacingX(
                (UILabel_o *)mCostItemIcon1,
                QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_SPACING_FOR_THREE_ITEM,
                0LL);
              mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostLb1;
              if ( mCostItemIcon1 )
              {
                UILabel__set_overflowMethod((UILabel_o *)mCostItemIcon1, 2, 0LL);
                mCostItemIcon1 = *p_mCostLb2;
                if ( *p_mCostLb2 )
                {
                  UILabel__set_overflowMethod((UILabel_o *)mCostItemIcon1, 2, 0LL);
                  mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostLb3;
                  if ( mCostItemIcon1 )
                  {
                    UILabel__set_overflowMethod((UILabel_o *)mCostItemIcon1, 2, 0LL);
                    mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostLb1;
                    if ( mCostItemIcon1 )
                    {
                      ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, void *))mCostItemIcon1->klass[2]._1.typeMetadataHandle)(
                        mCostItemIcon1,
                        mCostItemIcon1->klass[2]._1.interopData);
                      mCostItemIcon1 = *p_mCostLb2;
                      if ( *p_mCostLb2 )
                      {
                        ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, void *))mCostItemIcon1->klass[2]._1.typeMetadataHandle)(
                          mCostItemIcon1,
                          mCostItemIcon1->klass[2]._1.interopData);
                        mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostLb3;
                        if ( mCostItemIcon1 )
                        {
                          ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, void *))mCostItemIcon1->klass[2]._1.typeMetadataHandle)(
                            mCostItemIcon1,
                            mCostItemIcon1->klass[2]._1.interopData);
                          mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostLb1;
                          if ( mCostItemIcon1 )
                          {
                            UILabel__SetCondensedScale_41780892(
                              (UILabel_o *)mCostItemIcon1,
                              QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_WIDTH_FOR_THREE_ITEM,
                              0LL);
                            mCostItemIcon1 = *p_mCostLb2;
                            if ( *p_mCostLb2 )
                            {
                              UILabel__SetCondensedScale_41780892(
                                (UILabel_o *)mCostItemIcon1,
                                QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_WIDTH_FOR_THREE_ITEM,
                                0LL);
                              mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostLb3;
                              if ( mCostItemIcon1 )
                              {
                                UILabel__SetCondensedScale_41780892(
                                  (UILabel_o *)mCostItemIcon1,
                                  QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_WIDTH_FOR_THREE_ITEM,
                                  0LL);
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
LABEL_437:
        sub_B7769C(mCostItemIcon1, questEnt);
      }
      if ( m_CachedPtr >= 3
        && (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      }
      if ( v31 >= 8
        && (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      }
      return;
    case 4:
      if ( !this )
        goto LABEL_436;
      v76 = v38 > SLODWORD(this->fields.mcBaseP) || v38 > UserGameEntity__getAct((UserGameEntity_o *)this, 0LL);
      v82 = v21->fields.mCostLb1;
      v83 = System_Int32__ToString((int32_t)&v139, 0LL);
      v152.fields.r = r;
      v152.fields.g = g;
      v152.fields.b = b;
      v152.fields.a = a;
      QuestBoardListViewItemDraw__SetCostLabel(
        (QuestBoardListViewItemDraw_o *)v83,
        v82,
        v83,
        costCalcVal,
        v152,
        v76,
        isClosed,
        fixedVal >= 0,
        v84);
      this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostLb2;
      if ( !this )
        goto LABEL_436;
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_436;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostLb3;
      if ( !this )
        goto LABEL_436;
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_436;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      if ( v29 && QuestConsumeItemEntity__IsAvailableAt(v29, 0, 0LL) )
      {
        *isDoubleItemConsume = 1;
        this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostObj;
        if ( !this )
          goto LABEL_436;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 (UnityEngine_GameObject_o *)this,
                                                 (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        v85 = (UIWidget_o *)this;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        }
        if ( !v85 )
          goto LABEL_436;
        UIWidget__set_width(v85, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_DOUBLE, 0LL);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        v86 = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserItemMaster___);
        v87 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ItemMaster___);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        this = (QuestBoardListViewItemDraw_o *)NetworkManager__get_UserId(0LL);
        v88 = v29->fields.itemIds;
        if ( !v88 )
          goto LABEL_436;
        if ( v88->max_length )
        {
          if ( !v86 )
            goto LABEL_436;
          this = (QuestBoardListViewItemDraw_o *)UserItemMaster__TryGetEntity(
                                                   v86,
                                                   &usrItem,
                                                   (int64_t)this,
                                                   v88->m_Items[1],
                                                   0LL);
          v89 = v29->fields.itemIds;
          if ( !v89 )
            goto LABEL_436;
          if ( v89->max_length )
          {
            if ( !v87 )
              goto LABEL_436;
            this = (QuestBoardListViewItemDraw_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                     v87,
                                                     v89->m_Items[1],
                                                     (const MethodInfo_21FB894 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            if ( !*p_mCostLb2 )
              goto LABEL_436;
            v90 = (ItemEntity_o *)this;
            this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)*p_mCostLb2,
                                                     0LL);
            if ( !this )
              goto LABEL_436;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            v92 = v29->fields.nums;
            if ( !v92 )
              goto LABEL_436;
            if ( v92->max_length )
            {
              v153.fields.r = r;
              v153.fields.g = g;
              v153.fields.b = b;
              v153.fields.a = a;
              QuestBoardListViewItemDraw__SetCostLabelItem(
                this,
                (UILabel_o *)*p_mCostLb2,
                v92->m_Items[1],
                usrItem,
                v90,
                v153,
                isClosed,
                v91);
              v93 = v29->fields.nums;
              if ( !v93 )
                goto LABEL_436;
              if ( v93->max_length )
              {
                this = (QuestBoardListViewItemDraw_o *)System_Int32__ToString((int)v93 + 32, 0LL);
                if ( !this )
                  goto LABEL_436;
                v31 = this->fields.m_CachedPtr;
                if ( QuestConsumeItemEntity__IsAvailableAt(v29, 1, 0LL) )
                {
                  this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostLb1;
                  if ( !this )
                    goto LABEL_436;
                  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
                  if ( !this )
                    goto LABEL_436;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
                  this = *p_mCostLb2;
                  if ( !*p_mCostLb2 )
                    goto LABEL_436;
                  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
                  if ( !this )
                    goto LABEL_436;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
                  this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostLb3;
                  if ( !this )
                    goto LABEL_436;
                  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
                  if ( !this )
                    goto LABEL_436;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
                  v29 = 0LL;
                }
                goto LABEL_35;
              }
            }
          }
        }
        goto LABEL_438;
      }
      this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostLb1;
      if ( !this )
        goto LABEL_436;
      goto LABEL_278;
    default:
      goto LABEL_34;
  }
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
  float a; // s11
  float b; // s10
  float g; // s9
  float r; // s8
  QuestBoardListViewItemDraw_c *v19; // x0
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  QuestBoardListViewItemDraw_c *v21; // x0
  struct QuestBoardListViewItemDraw_StaticFields *v22; // x8
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = baseColor.fields.a;
  b = baseColor.fields.b;
  g = baseColor.fields.g;
  r = baseColor.fields.r;
  if ( (byte_438C80C & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_B775C4(&QuestBoardListViewItemDraw_TypeInfo);
    byte_438C80C = 1;
  }
  if ( !label )
    sub_B7769C(this, label);
  UILabel__set_text(label, content, 0LL);
  if ( costCalcVal > 0 || isFixedVal )
  {
    v19 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v19 = QuestBoardListViewItemDraw_TypeInfo;
    }
    static_fields = v19->static_fields;
    r = static_fields->CAMPAIGN_COST_COLOR.fields.r;
    g = static_fields->CAMPAIGN_COST_COLOR.fields.g;
    b = static_fields->CAMPAIGN_COST_COLOR.fields.b;
    a = static_fields->CAMPAIGN_COST_COLOR.fields.a;
    if ( isClosed )
    {
      v23 = UnityEngine_Color__op_Multiply_41411956(static_fields->CAMPAIGN_COST_COLOR, 0.5, 0LL);
      r = v23.fields.r;
      g = v23.fields.g;
      b = v23.fields.b;
      a = v23.fields.a;
    }
  }
  if ( isOverCost )
  {
    v21 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v21 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v22 = v21->static_fields;
    r = v22->OVER_COST_COLOR.fields.r;
    g = v22->OVER_COST_COLOR.fields.g;
    b = v22->OVER_COST_COLOR.fields.b;
    a = v22->OVER_COST_COLOR.fields.a;
    if ( isClosed )
    {
      v24 = UnityEngine_Color__op_Multiply_41411956(v22->OVER_COST_COLOR, 0.5, 0LL);
      r = v24.fields.r;
      g = v24.fields.g;
      b = v24.fields.b;
      a = v24.fields.a;
    }
  }
  v25.fields.r = r;
  v25.fields.g = g;
  v25.fields.b = b;
  v25.fields.a = a;
  UIWidget__set_color((UIWidget_o *)label, v25, 0LL);
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
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  void *SelfUserGame; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x7
  bool v19; // w21
  System_String_o *v20; // x22
  __int64 v21; // x2
  Il2CppObject *v22; // x0
  System_String_o *v23; // x22
  int32_t v24; // w24
  int32_t num; // w8
  int32_t v26; // [xsp+8h] [xbp-58h] BYREF
  int32_t v27; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = baseCol.fields.a;
  b = baseCol.fields.b;
  g = baseCol.fields.g;
  r = baseCol.fields.r;
  v27 = consumeNo;
  if ( (byte_438C80B & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_11102/*"QUEST_BOARD_COST_QP"*/);
    byte_438C80B = 1;
  }
  SelfUserGame = System_Int32__ToString((int32_t)&v27, 0LL);
  if ( !itemEnt )
    goto LABEL_16;
  if ( itemEnt->fields.type == 1 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( SelfUserGame )
    {
      v19 = v27 > *((_DWORD *)SelfUserGame + 24);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v20 = LocalizationManager__Get((System_String_o *)StringLiteral_11102/*"QUEST_BOARD_COST_QP"*/, 0LL);
      v26 = v27;
      v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v21);
      SelfUserGame = System_String__Format(v20, v22, 0LL);
      v23 = (System_String_o *)SelfUserGame;
      goto LABEL_15;
    }
LABEL_16:
    sub_B7769C(SelfUserGame, v17);
  }
  v24 = v27;
  v23 = (System_String_o *)SelfUserGame;
  if ( usrItem && (SelfUserGame = (void *)ItemEntity__IsEnable(itemEnt, 0LL), ((unsigned __int8)SelfUserGame & 1) != 0) )
    num = usrItem->fields.num;
  else
    num = 0;
  v19 = v24 > num;
LABEL_15:
  v28.fields.r = r;
  v28.fields.g = g;
  v28.fields.b = b;
  v28.fields.a = a;
  QuestBoardListViewItemDraw__SetCostLabel(
    (QuestBoardListViewItemDraw_o *)SelfUserGame,
    label,
    v23,
    0,
    v28,
    v19,
    isClosed,
    0,
    v18);
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
  __int64 v10; // x0

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
      {
        v10 = sub_B776C8(this);
        sub_B77668(v10, 0LL);
      }
      this = (QuestBoardListViewItemDraw_o *)mBannerArrows->m_Items[v7];
      if ( !this )
        break;
      ScrollArrowComponent__SetDisp((ScrollArrowComponent_o *)this, v8, v9, 0LL);
      if ( (int)++v7 >= max_length )
        return;
      mBannerArrows = v6->fields.mBannerArrows;
    }
    while ( mBannerArrows );
LABEL_8:
    sub_B7769C(this, isDisp);
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

  if ( (byte_438C81A & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C81A = 1;
  }
  eventTarget = (UnityEngine_Object_o *)this->fields.eventTarget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(eventTarget, 0LL, 0LL) )
  {
    eventTargetComponent = (UnityEngine_Object_o *)this->fields.eventTargetComponent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(eventTargetComponent, 0LL, 0LL) )
    {
      v8 = (BoardOptionEventTargetComponent_o *)this->fields.eventTarget;
      if ( !v8 )
        goto LABEL_18;
      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)v8, 0LL) )
      {
        v8 = this->fields.eventTargetComponent;
        if ( !v8 )
          goto LABEL_18;
        if ( BoardOptionEventTargetComponent__IsNeedAnim(v8, 0LL) )
        {
          v8 = this->fields.eventTargetComponent;
          if ( v8 )
          {
            BoardOptionEventTargetComponent__SetAlpha(v8, alpha, 0LL);
            return;
          }
LABEL_18:
          sub_B7769C(v8, v7);
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
  if ( (byte_438C80A & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)sub_B775C4(&QuestBoardListViewItemDraw_TypeInfo);
    byte_438C80A = 1;
  }
  if ( !questEnt )
    goto LABEL_26;
  this = (QuestBoardListViewItemDraw_o *)v15->fields.mLabelFaceObj;
  if ( !this )
    goto LABEL_26;
  charaIconId = questEnt->fields.charaIconId;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, charaIconId > 0, 0LL);
  if ( charaIconId < 1 )
    return 0;
  mLabelFaceIcon = v15->fields.mLabelFaceIcon;
  ServantId = QuestEntity__getServantId(questEnt, 0LL);
  LimitCount = QuestEntity__getLimitCount(questEnt, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetFaceImage(mLabelFaceIcon, ServantId, LimitCount, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v15->fields.mLabelFaceIcon;
  if ( !this )
    goto LABEL_26;
  v27.fields.r = r;
  v27.fields.g = g;
  v27.fields.b = b;
  v27.fields.a = a;
  UIWidget__set_color((UIWidget_o *)this, v27, 0LL);
  if ( !maskSprite )
    goto LABEL_26;
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
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v22 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_MASK_SPNAME_PREFIX = v22->static_fields->QUEST_BOARD_MASK_SPNAME_PREFIX;
    v24 = System_Int32__ToString(v20, 0LL);
    maskSpriteName = System_String__Concat_44901936(QUEST_BOARD_MASK_SPNAME_PREFIX, v24, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(maskSprite, maskSpriteName, 0LL);
  }
  this = (QuestBoardListViewItemDraw_o *)maskSprite->fields.mAtlas;
  if ( !this )
    goto LABEL_26;
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
LABEL_26:
    sub_B7769C(this, questEnt);
  }
  return 1;
}


void __fastcall QuestBoardListViewItemDraw__SetInfoTextAlpha(
        QuestBoardListViewItemDraw_o *this,
        float alpha,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x8
  struct BoardOptionTextWithIconComponent_o *mOptionInfoLb; // x0

  if ( (byte_438C818 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__);
    byte_438C818 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  if ( mInfoTextList && mInfoTextList->fields._size > 1 )
  {
    mOptionInfoLb = this->fields.mOptionInfoLb;
    if ( !mOptionInfoLb )
LABEL_11:
      sub_B7769C(mOptionInfoLb, method);
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


// local variable allocation has failed, the output may be wrong!
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
  const MethodInfo *v12; // x1
  QuestBoardListViewEarthLine_o *mOptionSecondBattleInformationObj; // x0
  struct QuestBoardListViewMultiSecondBattleInformation_o *Component_srcLineSprite; // x0
  struct QuestBoardListViewMultiSecondBattleInformation_o **p_secondBattleInformation; // x22
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UIWidget_o *mcBaseP; // x22
  int v23; // s0
  struct UnityEngine_GameObject_array *mStatusSp; // x22
  int max_length; // w8
  unsigned int v29; // w25
  UnityEngine_GameObject_o *mCostObj; // x22
  QuestBoardListViewItemDraw_c *v31; // x0
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_Object_o *eventTargetComponent; // x22
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x7
  UnityEngine_GameObject_o *v38; // x19
  struct MapControl_AreaBoardInfo_o *AreaBoardInfo_k__BackingField; // x8
  struct MapControl_AreaBoardInfo_o *v40; // x8
  __int64 v41; // x0
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438C7E7 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewMultiSecondBattleInformation___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B775C4(&Method_System_Collections_Generic_List_UISprite__Clear__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&QuestBoardListViewItemDraw_TypeInfo);
    byte_438C7E7 = 1;
  }
  if ( questBoardItem )
  {
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
        one = UnityEngine_Vector3__get_one(0LL);
        GameObjectExtensions__SetLocalScale(gameObject, one, 0LL);
        mEarthLine = (UnityEngine_Object_o *)this->fields.mEarthLine;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(mEarthLine, 0LL, 0LL) )
        {
          mOptionSecondBattleInformationObj = this->fields.mEarthLine;
          if ( !mOptionSecondBattleInformationObj )
            goto LABEL_85;
          QuestBoardListViewEarthLine__Hide(mOptionSecondBattleInformationObj, v12);
        }
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mOptionSecondBattleInformationObj;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_85;
        Component_srcLineSprite = (struct QuestBoardListViewMultiSecondBattleInformation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                               (UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj,
                                                                                               (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewMultiSecondBattleInformation___);
        p_secondBattleInformation = &this->fields.secondBattleInformation;
        this->fields.secondBattleInformation = Component_srcLineSprite;
        sub_B77560(
          (BattleServantConfConponent_o *)&this->fields.secondBattleInformation,
          (System_Int32_array **)Component_srcLineSprite,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.secondBattleInformation;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_85;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)*p_secondBattleInformation;
        if ( !*p_secondBattleInformation )
          goto LABEL_85;
        QuestBoardListViewMultiSecondBattleInformation__Reset(
          (QuestBoardListViewMultiSecondBattleInformation_o *)mOptionSecondBattleInformationObj,
          0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mMultiSecondBattleInformation;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_85;
        System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)mOptionSecondBattleInformationObj,
          (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_UISprite__Clear__);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mOptionPreBattleSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_85;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)mOptionSecondBattleInformationObj,
                                                                               0LL);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_85;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mCostConsumeBattleWinSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_85;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)mOptionSecondBattleInformationObj,
                                                                               0LL);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_85;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mcBaseP;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_85;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)mOptionSecondBattleInformationObj,
                                                                               0LL);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_85;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 1, 0LL);
        mcBaseP = (UIWidget_o *)this->fields.mcBaseP;
        *(UnityEngine_Color_o *)&v23 = UnityEngine_Color__get_white(0LL);
        if ( !mcBaseP
          || (UIWidget__set_color(mcBaseP, *(UnityEngine_Color_o *)&v23, 0LL),
              (mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mcBaseP) == 0LL)
          || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mOptionSecondBattleInformationObj, 1, 0LL),
              (mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mStatusObj) == 0LL)
          || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 1, 0LL),
              (mStatusSp = this->fields.mStatusSp) == 0LL) )
        {
LABEL_85:
          sub_B7769C(mOptionSecondBattleInformationObj, v12);
        }
        max_length = mStatusSp->max_length;
        if ( max_length >= 1 )
        {
          v29 = 0;
          do
          {
            if ( v29 >= max_length )
            {
              v41 = sub_B776C8(mOptionSecondBattleInformationObj);
              sub_B77668(v41, 0LL);
            }
            mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)mStatusSp->m_Items[v29];
            if ( !mOptionSecondBattleInformationObj )
              goto LABEL_85;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
            max_length = mStatusSp->max_length;
          }
          while ( (int)++v29 < max_length );
        }
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mBannerRoot;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_85;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mNoticeNumberRoot;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_85;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mNextSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_85;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)mOptionSecondBattleInformationObj,
                                                                               0LL);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_85;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mPrevSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_85;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)mOptionSecondBattleInformationObj,
                                                                               0LL);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_85;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mClassIconRoot;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_85;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mNoBattleObj;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_85;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mRarePrismSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_85;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)mOptionSecondBattleInformationObj,
                                                                               0LL);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_85;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mQuestInfoBtn;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_85;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mQuestInfoShowing;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_85;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mDamageRecordSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_85;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)mOptionSecondBattleInformationObj,
                                                                               0LL);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_85;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mKnockdownRecordSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_85;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)mOptionSecondBattleInformationObj,
                                                                               0LL);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_85;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.blackMarkSpace;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_85;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mBoardMessage;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_85;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)mOptionSecondBattleInformationObj,
                                                                               0LL);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_85;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.eventTarget;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_85;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.alloutRoot;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_85;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
        mCostObj = this->fields.mCostObj;
        v31 = QuestBoardListViewItemDraw_TypeInfo;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v31 = QuestBoardListViewItemDraw_TypeInfo;
        }
        GameObjectExtensions__SetLocalPosition(mCostObj, v31->static_fields->COST_OBJ_POS, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mCostObj;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_85;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                               (UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj,
                                                                               (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_85;
        UIWidget__set_width(
          (UIWidget_o *)mOptionSecondBattleInformationObj,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_SINGLE,
          0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mCostApSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_85;
        v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mOptionSecondBattleInformationObj, 0LL);
        GameObjectExtensions__SetLocalPosition(
          v32,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_1_ICON_AP_POS,
          0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mCostLb1;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_85;
        v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mOptionSecondBattleInformationObj, 0LL);
        GameObjectExtensions__SetLocalPosition(
          v33,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_1_LABEL_AP_POS,
          0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mShohiSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_85;
        v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mOptionSecondBattleInformationObj, 0LL);
        GameObjectExtensions__SetLocalPosition(
          v34,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->SHOHI_SP_POS,
          0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mShohiSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_85;
        UISprite__set_spriteName(
          (UISprite_o *)mOptionSecondBattleInformationObj,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->SHOHI_SP_NAME,
          0LL);
        eventTargetComponent = (UnityEngine_Object_o *)this->fields.eventTargetComponent;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(eventTargetComponent, 0LL, 0LL) )
        {
          mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.eventTargetComponent;
          if ( !mOptionSecondBattleInformationObj )
            goto LABEL_85;
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
              goto LABEL_75;
            }
            goto LABEL_78;
          case 1:
            goto LABEL_84;
          case 2:
          case 3:
            QuestBoardListViewItemDraw__SetItemOfShortcut(this, questBoardItem, v36);
            return;
          case 4:
            v40 = quest_info_k__BackingField->fields._AreaBoardInfo_k__BackingField;
            if ( !v40 )
              goto LABEL_84;
            if ( v40->fields.questBoardType == 2 )
LABEL_78:
              QuestBoardListViewItemDraw__SetItemOfArea(this, questBoardItem, 1, 1, 0, 0, 0, v37);
            else
LABEL_75:
              QuestBoardListViewItemDraw__SetItemOfFolder(this, questBoardItem, v36);
            break;
          case 5:
            QuestBoardListViewItemDraw__SetItemOfWarBoard(this, questBoardItem, v36);
            return;
          case 6:
            mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)questBoardItem->fields._quest_info_k__BackingField;
            if ( !mOptionSecondBattleInformationObj )
              goto LABEL_85;
            mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)MapControl_QuestInfo__GetMine(
                                                                                   (MapControl_QuestInfo_o *)mOptionSecondBattleInformationObj,
                                                                                   0LL);
            if ( !mOptionSecondBattleInformationObj )
              goto LABEL_85;
            if ( QuestEntity__HasFlag((QuestEntity_o *)mOptionSecondBattleInformationObj, 0x800000000000000LL, 0LL) )
              QuestBoardListViewItemDraw__SetItemOfRecollectionQuest(this, questBoardItem, v36);
            else
LABEL_84:
              QuestBoardListViewItemDraw__SetItemOfQuest(this, questBoardItem, v36);
            break;
          default:
            return;
        }
      }
    }
    else
    {
      v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      zero = UnityEngine_Vector3__get_zero(0LL);
      GameObjectExtensions__SetLocalScale(v38, zero, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
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
  QuestBoardListViewItem_o *v10; // x26
  QuestBoardListViewItemDraw_o *v11; // x19
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x8
  MapControl_AreaBoardInfo_o *AreaBoardInfo_k__BackingField; // x22
  int32_t questBoardType; // w23
  EventEntity_o *eventEnt; // x25
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  __int64 v17; // x9
  int32_t v18; // w21
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  MapControl_WarInfo_o *v20; // x27
  WarEntity_o *Mine; // x26
  int v22; // w20
  UnityEngine_Object_o *eventTargetComponent; // x27
  const MethodInfo *v24; // x3
  bool v25; // w24
  il2cpp_array_size_t v26; // w20
  const MethodInfo *v27; // x2
  bool IsPurchasedByRarePrism; // w28
  QuestBoardListViewItem_o *v29; // x27
  bool v30; // w21
  _BOOL8 IsActiveEventWar; // x0
  const MethodInfo *v32; // x4
  bool v33; // w24
  int v34; // w21
  QuestBoardListViewItemDraw_c *v35; // x0
  System_String_o *QBOARD_CAP_CLOSED_SPECIAL_FORMAT; // x25
  __int64 v37; // x2
  Il2CppObject *v38; // x0
  System_String_o *EventAddBannerSpriteName; // x25
  QuestBoardListViewItemDraw_o *v40; // x23
  __int64 v41; // x2
  int32_t v42; // w27
  QuestBoardListViewItemDraw_c *v43; // x8
  struct System_String_array *msQBoardL1Names; // x8
  System_String_o *v45; // x25
  Il2CppObject *v46; // x0
  __int64 v47; // x2
  const MethodInfo *v48; // x5
  ScrTerminalListTop_c *v49; // x8
  struct ScrTerminalListTop_StaticFields *static_fields; // x9
  QuestBoardListViewItemDraw_c *v51; // x0
  bool v52; // zf
  ScrTerminalListTop_c *v53; // x0
  bool v54; // w24
  QuestBoardListViewItemDraw_o *v55; // x28
  bool v56; // w0
  QuestBoardListViewItemDraw_o *v57; // x28
  bool v58; // w0
  QuestBoardListViewItemDraw_c *v59; // x0
  System_String_o **p_QBOARD_CAP_CLOSED_SPECIAL_2; // x8
  QuestBoardListViewItemDraw_c *v61; // x0
  WarEntity_o *Entity; // x0
  bool v63; // w8
  WarEntity_o *v64; // x2
  QuestBoardListViewItemDraw_o *v65; // x0
  QuestBoardListViewItem_o *v66; // x1
  QuestBoardListViewItemDraw_o *v67; // x25
  bool v68; // w0
  QuestBoardListViewItemDraw_c *v69; // x8
  bool v70; // w21
  QuestBoardListViewItemDraw_o *v71; // x28
  QuestBoardListViewItemDraw_o *v72; // x28
  ScrTerminalListTop_c *v73; // x0
  int32_t NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID; // w28
  TerminalPramsManager_c *v75; // x0
  ScrTerminalListTop_c *v76; // x8
  int32_t QuestId_k__BackingField; // w21
  TerminalPramsManager_c *v78; // x0
  __int64 v79; // x8
  System_String_o *v80; // x25
  int32_t mStatusSp; // w8
  System_Int32_c *v82; // x0
  __int64 v83; // x8
  Il2CppObject *v84; // x0
  UISprite_o *mcBaseP; // x28
  int v86; // w23
  const MethodInfo *v87; // x2
  UIWidget_o *v88; // x25
  int v89; // s0
  int32_t questCount; // w1
  QuestBoardListViewItemDraw_o **p_mOptionInfoLb; // x25
  const MethodInfo *v95; // x3
  int32_t v96; // w1
  QuestBoardListViewItemDraw_c *v97; // x0
  int v98; // w21
  const MethodInfo *v99; // x3
  int32_t status; // w1
  QuestBoardListViewItemDraw_c *v101; // x0
  const MethodInfo *v102; // x2
  const MethodInfo *v103; // x3
  const MethodInfo *v104; // x3
  const MethodInfo *v105; // x3
  bool v106; // w1
  bool v107; // w21
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x20
  struct QuestBoardListViewObject_o *v109; // x8
  __int64 v110; // x10
  const MethodInfo *v111; // x3
  int32_t AlphaAnimCnt; // w21
  UnityEngine_Object_o *mEarthLine; // x21
  const MethodInfo *v114; // x3
  QuestBoardListViewEarthLine_o *v115; // x21
  __int64 v116; // x0
  int32_t v117; // [xsp+14h] [xbp-8Ch]
  bool v118; // [xsp+18h] [xbp-88h]
  bool v119; // [xsp+1Ch] [xbp-84h]
  struct UISprite_o *checkTime; // [xsp+28h] [xbp-78h]
  int v124; // [xsp+34h] [xbp-6Ch]
  QuestBoardListViewItem_o *questBoardItema; // [xsp+38h] [xbp-68h]
  int32_t warId; // [xsp+40h] [xbp-60h]
  bool v127; // [xsp+44h] [xbp-5Ch]
  _BOOL4 IsClosedWar; // [xsp+48h] [xbp-58h]
  int32_t PrioredBannerId; // [xsp+4Ch] [xbp-54h] BYREF

  v10 = questBoardItem;
  v11 = this;
  if ( (byte_438C7E9 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_WarMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&QuestBoardListViewItemDraw_TypeInfo);
    sub_B775C4(&QuestBoardListViewManager_TypeInfo);
    sub_B775C4(&ScrTerminalListTop_TypeInfo);
    sub_B775C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B775C4(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_B775C4(&SingletonTemplate_QuestTree__TypeInfo);
    sub_B775C4(&SingletonTemplate_clsQuestCheck__TypeInfo);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)sub_B775C4(&StringLiteral_1/*""*/);
    byte_438C7E9 = 1;
  }
  if ( !v10 )
    goto LABEL_312;
  quest_info_k__BackingField = v10->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_312;
  v119 = isSpecialClosedBanner;
  AreaBoardInfo_k__BackingField = quest_info_k__BackingField->fields._AreaBoardInfo_k__BackingField;
  if ( !AreaBoardInfo_k__BackingField )
    goto LABEL_312;
  questBoardType = AreaBoardInfo_k__BackingField->fields.questBoardType;
  eventEnt = AreaBoardInfo_k__BackingField->fields.eventEnt;
  mListViewObject = v11->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_312;
  this = (QuestBoardListViewItemDraw_o *)mListViewObject->fields.manager;
  if ( !this )
    goto LABEL_312;
  v127 = isBadgeDisp;
  questBoardItem = (QuestBoardListViewItem_o *)QuestBoardListViewManager_TypeInfo;
  v17 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v17
    || (QuestBoardListViewManager_c *)this->klass->_2.typeHierarchy[v17 - 1] != QuestBoardListViewManager_TypeInfo )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_B77990(this);
LABEL_314:
    this = (QuestBoardListViewItemDraw_o *)sub_B77990(this);
    goto LABEL_315;
  }
  v18 = AreaBoardInfo_k__BackingField->fields.warId;
  questBoardItema = v10;
  checkTime = this->fields.mShohiSp;
  if ( v18 < 1 )
  {
    v22 = 0;
    v20 = 0LL;
LABEL_19:
    Mine = 0LL;
    goto LABEL_20;
  }
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !this )
    goto LABEL_312;
  WarInfoByWarID = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)this, v18, 0LL);
  v20 = WarInfoByWarID;
  if ( !WarInfoByWarID )
  {
    v22 = 0;
    goto LABEL_19;
  }
  Mine = MapControl_WarInfo__GetMine(WarInfoByWarID, 0LL);
  v22 = 1;
LABEL_20:
  this = (QuestBoardListViewItemDraw_o *)v11->fields.mLabelObj;
  if ( !this )
    goto LABEL_312;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v11->fields.mTitleObj;
  if ( !this )
    goto LABEL_312;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v11->fields.mAdvanceNoticeObj;
  if ( !this )
    goto LABEL_312;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v11->fields.mOverwriteAdvanceNoticeObj;
  if ( !this )
    goto LABEL_312;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v11->fields.mOptionObj;
  if ( !this )
    goto LABEL_312;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v11->fields.mOptionInfoLb;
  if ( !this )
    goto LABEL_312;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_312;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v11->fields.mOptionRestrinctionLb;
  if ( !this )
    goto LABEL_312;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_312;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
  if ( !this )
    goto LABEL_312;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_312;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v11->fields.mRewardObj;
  if ( !this )
    goto LABEL_312;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v11->fields.mPhaseObj;
  if ( !this )
    goto LABEL_312;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v11->fields.mChallengeObj;
  if ( !this )
    goto LABEL_312;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v11->fields.mCostObj;
  if ( !this )
    goto LABEL_312;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v11->fields.mCondObject;
  if ( !this )
    goto LABEL_312;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v11->fields.mcBaseP;
  if ( !this )
    goto LABEL_312;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_312;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, questBoardType != 1, 0LL);
  if ( Mine )
  {
    this = (QuestBoardListViewItemDraw_o *)WarEntity__IsMainInterlude(Mine, 0LL);
    v124 = (unsigned __int8)this & 1;
    if ( v22 )
    {
LABEL_40:
      if ( !v20 )
        goto LABEL_312;
      IsClosedWar = MapControl_WarInfo__IsClosedWar(v20, 0LL);
      goto LABEL_44;
    }
  }
  else
  {
    v124 = 0;
    if ( v22 )
      goto LABEL_40;
  }
  IsClosedWar = 0;
LABEL_44:
  this = (QuestBoardListViewItemDraw_o *)v11->fields.blackMarkSpace;
  if ( !this )
    goto LABEL_312;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v11->fields.eventTarget;
  if ( !this )
    goto LABEL_312;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v11->fields.alloutRoot;
  if ( !this )
    goto LABEL_312;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  eventTargetComponent = (UnityEngine_Object_o *)v11->fields.eventTargetComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(eventTargetComponent, 0LL, 0LL) )
  {
    this = (QuestBoardListViewItemDraw_o *)v11->fields.eventTargetComponent;
    if ( !this )
      goto LABEL_312;
    BoardOptionEventTargetComponent__DestroyList((BoardOptionEventTargetComponent_o *)this, 0LL);
  }
  warId = v18;
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !this )
LABEL_312:
    sub_B7769C(this, questBoardItem);
  v25 = questBoardType == 2 && eventEnt != 0LL;
  v26 = questBoardType - 1;
  IsPurchasedByRarePrism = QuestBoardListViewItemDraw__IsPurchasedByRarePrism(
                             this,
                             (System_Collections_Generic_List_MapControl_QuestInfo__o *)this->fields.mCommonAtlas,
                             Mine,
                             v24);
  if ( questBoardType == 1 )
  {
    v29 = questBoardItema;
    QuestBoardListViewItemDraw__SetupBanner(v11, questBoardItema, v27);
    v30 = v127;
    goto LABEL_248;
  }
  v118 = questBoardType == 2 && eventEnt != 0LL;
  if ( v118 )
  {
    if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
    }
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    v29 = questBoardItema;
    if ( !this )
      goto LABEL_312;
    IsActiveEventWar = QuestTree__IsActiveEventWar((QuestTree_o *)this, v18, 0LL);
    v33 = IsPurchasedByRarePrism;
    LOBYTE(v26) = (IsPurchasedByRarePrism || v124 == 0) && IsActiveEventWar;
    if ( (v26 & 1) != 0 )
    {
      v34 = IsClosedWar;
    }
    else
    {
      v34 = IsClosedWar;
      if ( v124 )
        v34 = AreaBoardInfo_k__BackingField->fields.status == 2 || IsClosedWar;
    }
    EventAddBannerSpriteName = QuestBoardListViewItemDraw__GetEventAddBannerSpriteName(
                                 (QuestBoardListViewItemDraw_o *)IsActiveEventWar,
                                 eventEnt,
                                 warId,
                                 v34 | v26 & 1,
                                 v32);
    v52 = v34 == 0;
    goto LABEL_235;
  }
  if ( AreaBoardInfo_k__BackingField->fields.status == 6 && questBoardType == 2 )
  {
    if ( Mine )
    {
      v35 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v35 = QuestBoardListViewItemDraw_TypeInfo;
      }
      QBOARD_CAP_CLOSED_SPECIAL_FORMAT = v35->static_fields->QBOARD_CAP_CLOSED_SPECIAL_FORMAT;
      PrioredBannerId = WarEntity__GetPrioredBannerId(Mine, 0LL);
      v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId, v37);
      EventAddBannerSpriteName = System_String__Format(QBOARD_CAP_CLOSED_SPECIAL_FORMAT, v38, 0LL);
    }
    else
    {
      EventAddBannerSpriteName = (System_String_o *)StringLiteral_1/*""*/;
    }
    v53 = ScrTerminalListTop_TypeInfo;
    if ( v119 )
    {
      if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
        v53 = ScrTerminalListTop_TypeInfo;
      }
      if ( v18 == v53->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_TARGET_WAR_ID )
        goto LABEL_130;
    }
    if ( (BYTE3(v53->vtable._0_Equals.methodPtr) & 4) != 0 && !v53->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v53);
      v53 = ScrTerminalListTop_TypeInfo;
    }
    if ( v18 != v53->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_TARGET_WAR_ID )
      goto LABEL_121;
    v54 = IsPurchasedByRarePrism;
    if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
    }
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    v55 = this;
    if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    }
    if ( !v55 )
      goto LABEL_312;
    v56 = clsQuestCheck__IsWarClear(
            (clsQuestCheck_o *)v55,
            ScrTerminalListTop_TypeInfo->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_START_COND_WAR_ID,
            0LL);
    IsPurchasedByRarePrism = v54;
    if ( !v56 )
      goto LABEL_121;
    if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
    }
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    v57 = this;
    if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    }
    if ( !v57 )
      goto LABEL_312;
    v58 = clsQuestCheck__IsWarClear(
            (clsQuestCheck_o *)v57,
            ScrTerminalListTop_TypeInfo->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_END_COND_WAR_ID,
            0LL);
    IsPurchasedByRarePrism = v54;
    if ( !v58 )
    {
LABEL_130:
      v61 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v61 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v29 = questBoardItema;
      p_QBOARD_CAP_CLOSED_SPECIAL_2 = &v61->static_fields->QBOARD_CAP_CLOSED_SPECIAL_2;
    }
    else
    {
LABEL_121:
      v29 = questBoardItema;
      if ( System_String__op_Inequality(EventAddBannerSpriteName, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
      {
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        if ( AtlasManager__IsExistBanner(EventAddBannerSpriteName, 0LL) )
          goto LABEL_135;
      }
      v59 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v59 = QuestBoardListViewItemDraw_TypeInfo;
      }
      p_QBOARD_CAP_CLOSED_SPECIAL_2 = &v59->static_fields->QBOARD_CAP_CLOSED;
    }
    EventAddBannerSpriteName = *p_QBOARD_CAP_CLOSED_SPECIAL_2;
LABEL_135:
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v33 = IsPurchasedByRarePrism;
    this = (QuestBoardListViewItemDraw_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !this )
      goto LABEL_312;
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)this,
               v18,
               (const MethodInfo_21FB894 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    v63 = isBlackMarkOnly;
    v64 = Entity;
    v65 = v11;
    v66 = v29;
    goto LABEL_234;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestBoardListViewItemDraw_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !this )
    goto LABEL_312;
  this = (QuestBoardListViewItemDraw_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                           v18,
                                           (const MethodInfo_21FB894 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( !this )
    goto LABEL_312;
  v40 = this;
  this = (QuestBoardListViewItemDraw_o *)WarEntity__GetPrioredBannerId((WarEntity_o *)this, 0LL);
  v42 = (int)this;
  v43 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v43 = QuestBoardListViewItemDraw_TypeInfo;
  }
  msQBoardL1Names = v43->static_fields->msQBoardL1Names;
  if ( !msQBoardL1Names )
    goto LABEL_312;
  if ( v26 >= msQBoardL1Names->max_length )
    goto LABEL_315;
  v45 = msQBoardL1Names->m_Items[v26];
  v117 = v42;
  PrioredBannerId = v42;
  v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId, v41);
  EventAddBannerSpriteName = System_String__Format(v45, v46, 0LL);
  v49 = ScrTerminalListTop_TypeInfo;
  if ( v119 )
  {
    if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      v49 = ScrTerminalListTop_TypeInfo;
    }
    static_fields = v49->static_fields;
    if ( v18 == static_fields->AREA_BOARD_FORCE_DISP_TARGET_WAR_ID )
    {
      v51 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
        v29 = questBoardItema;
        v33 = IsPurchasedByRarePrism;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v51 = QuestBoardListViewItemDraw_TypeInfo;
        }
      }
      else
      {
        v29 = questBoardItema;
        v33 = IsPurchasedByRarePrism;
      }
      EventAddBannerSpriteName = v51->static_fields->QBOARD_CAP_CLOSED_SPECIAL;
      goto LABEL_233;
    }
    if ( (BYTE3(v49->vtable._0_Equals.methodPtr) & 4) != 0 && !v49->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v49);
      v49 = ScrTerminalListTop_TypeInfo;
      static_fields = ScrTerminalListTop_TypeInfo->static_fields;
    }
    if ( v18 == static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_TARGET_WAR_ID )
    {
      if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
      }
      this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      v67 = this;
      if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      }
      if ( !v67 )
        goto LABEL_312;
      v68 = clsQuestCheck__IsWarClear(
              (clsQuestCheck_o *)v67,
              ScrTerminalListTop_TypeInfo->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_END_COND_WAR_ID,
              0LL);
      v69 = QuestBoardListViewItemDraw_TypeInfo;
      if ( v68 )
      {
        v29 = questBoardItema;
        if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          v33 = IsPurchasedByRarePrism;
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v69 = QuestBoardListViewItemDraw_TypeInfo;
        }
        else
        {
          v33 = IsPurchasedByRarePrism;
        }
        EventAddBannerSpriteName = v69->static_fields->QBOARD_CAP_CLOSED_SPECIAL_3;
      }
      else
      {
        v29 = questBoardItema;
        if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          v33 = IsPurchasedByRarePrism;
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v69 = QuestBoardListViewItemDraw_TypeInfo;
        }
        else
        {
          v33 = IsPurchasedByRarePrism;
        }
        EventAddBannerSpriteName = v69->static_fields->QBOARD_CAP_CLOSED_SPECIAL_2;
      }
      goto LABEL_233;
    }
  }
  if ( (BYTE3(v49->vtable._0_Equals.methodPtr) & 4) != 0 && !v49->_2.cctor_finished )
  {
    v33 = IsPurchasedByRarePrism;
    j_il2cpp_runtime_class_init_0(v49);
    v49 = ScrTerminalListTop_TypeInfo;
  }
  else
  {
    v33 = IsPurchasedByRarePrism;
  }
  v70 = v127;
  if ( warId != v49->static_fields->NT2_EFFECT_AREA_BOARD_TARGET_WAR_ID )
    goto LABEL_222;
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v71 = this;
  if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  }
  if ( !v71 )
    goto LABEL_312;
  if ( clsQuestCheck__IsWarClear(
         (clsQuestCheck_o *)v71,
         ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_TARGET_WAR_ID,
         0LL) )
  {
    goto LABEL_222;
  }
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v72 = this;
  if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  }
  if ( !v72 )
    goto LABEL_312;
  if ( !clsQuestCheck__IsQuestClear(
          (clsQuestCheck_o *)v72,
          ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_QUEST_ID,
          0,
          0LL) )
    goto LABEL_222;
  v73 = ScrTerminalListTop_TypeInfo;
  if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v73 = ScrTerminalListTop_TypeInfo;
  }
  NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID = v73->static_fields->NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( TerminalPramsManager__IsTerminalEffectPlayed(NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID, 0LL) )
    goto LABEL_222;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4387478 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387478 = 1;
  }
  v75 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v75 = TerminalPramsManager_TypeInfo;
  }
  v76 = ScrTerminalListTop_TypeInfo;
  QuestId_k__BackingField = v75->static_fields->_QuestId_k__BackingField;
  if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v76 = ScrTerminalListTop_TypeInfo;
  }
  v52 = QuestId_k__BackingField == v76->static_fields->NT2_EFFECT_AREA_BOARD_QUEST_ID;
  v70 = v127;
  if ( !v52 )
    goto LABEL_222;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4387479 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387479 = 1;
  }
  v78 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v70 = v127;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v78 = TerminalPramsManager_TypeInfo;
    }
  }
  else
  {
    v70 = v127;
  }
  if ( v78->static_fields->_PhaseCnt_k__BackingField != 2 )
  {
LABEL_222:
    v29 = questBoardItema;
    if ( isBoardDisp && v70 && !isBlackMarkOnly && !isWhiteMarkOnly )
      goto LABEL_233;
    this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
    }
    v83 = *(_QWORD *)&this->fields.mTitleLevelSp[2].fields.updateAnchors;
    if ( !v83 )
      goto LABEL_312;
    if ( *(_DWORD *)(v83 + 24) > 1u )
    {
      v80 = *(System_String_o **)(v83 + 40);
      v82 = int_TypeInfo;
      mStatusSp = v117;
      goto LABEL_232;
    }
LABEL_315:
    v116 = sub_B776C8(this);
    sub_B77668(v116, 0LL);
  }
  this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  }
  v29 = questBoardItema;
  v79 = *(_QWORD *)&this->fields.mTitleLevelSp[2].fields.updateAnchors;
  if ( !v79 )
    goto LABEL_312;
  if ( *(_DWORD *)(v79 + 24) <= 1u )
    goto LABEL_315;
  v80 = *(System_String_o **)(v79 + 40);
  mStatusSp = (int32_t)v40->fields.mStatusSp;
  v82 = int_TypeInfo;
LABEL_232:
  PrioredBannerId = mStatusSp;
  v84 = (Il2CppObject *)j_il2cpp_value_box_0(v82, &PrioredBannerId, v47);
  EventAddBannerSpriteName = System_String__Format(v80, v84, 0LL);
LABEL_233:
  v63 = isBlackMarkOnly;
  v65 = v11;
  v66 = v29;
  v64 = (WarEntity_o *)v40;
LABEL_234:
  QuestBoardListViewItemDraw__SetBlackMarkAndWhiteMark(v65, v66, v64, v63, isWhiteMarkOnly, v48);
  LOBYTE(v26) = 0;
  v52 = !IsClosedWar;
LABEL_235:
  mcBaseP = v11->fields.mcBaseP;
  v86 = !v52;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(mcBaseP, EventAddBannerSpriteName, 0LL);
  v30 = v127;
  IsPurchasedByRarePrism = v33;
  v25 = v118;
  if ( v86 )
  {
    v88 = (UIWidget_o *)v11->fields.mcBaseP;
    *(UnityEngine_Color_o *)&v89 = UnityEngine_Color__get_gray(0LL);
    if ( !v88 )
      goto LABEL_312;
    UIWidget__set_color(v88, *(UnityEngine_Color_o *)&v89, 0LL);
  }
  questCount = 0;
  if ( v26 & 1 | !v118 && v127 )
    questCount = AreaBoardInfo_k__BackingField->fields.questCount;
  QuestBoardListViewItemDraw__SetBadge(v11, questCount, v87);
LABEL_248:
  this = (QuestBoardListViewItemDraw_o *)v11->fields.mcBaseP;
  if ( !this )
    goto LABEL_312;
  p_mOptionInfoLb = (QuestBoardListViewItemDraw_o **)&v11->fields.mOptionInfoLb;
  ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
    this,
    this->klass[2]._1.interopData);
  if ( !v30 )
  {
    this = (QuestBoardListViewItemDraw_o *)v11->fields.mcBaseP;
    if ( this )
    {
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isBoardDisp, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v11->fields.mNextSp;
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
              QuestBoardListViewItemDraw__SetStatusActive(v11, status, 0, v99);
            v101 = QuestBoardListViewItemDraw_TypeInfo;
            if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
              v101 = QuestBoardListViewItemDraw_TypeInfo;
            }
            QuestBoardListViewItemDraw__SetNewIcon(
              v11,
              v101->static_fields->NEW_POS_AREA,
              v101->static_fields->NEW_W_AREA,
              v101->static_fields->NEW_H_AREA,
              v99);
            this = (QuestBoardListViewItemDraw_o *)v11->fields.mRarePrismSp;
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
    goto LABEL_312;
  }
  v96 = AreaBoardInfo_k__BackingField->fields.status;
  if ( v96 && v96 != 6 )
    QuestBoardListViewItemDraw__SetStatusActive(v11, v96, v26 & 1 | (v96 != 1 || !v25), v95);
  v97 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v98 = v124;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v97 = QuestBoardListViewItemDraw_TypeInfo;
    }
  }
  else
  {
    v98 = v124;
  }
  QuestBoardListViewItemDraw__SetNewIcon(
    v11,
    v97->static_fields->NEW_POS_AREA,
    v97->static_fields->NEW_W_AREA,
    v97->static_fields->NEW_H_AREA,
    v95);
  if ( (IsClosedWar & v98) != 0 )
    QuestBoardListViewItemDraw__SetStatusActive(v11, 2, 1, v103);
  QuestBoardListViewItemDraw__SetClearSprite(v11, Mine, v102);
  QuestBoardListViewItemDraw__SetNextSprite(v11, AreaBoardInfo_k__BackingField, Mine, v104);
  QuestBoardListViewItemDraw__CreateInfoTextList(v11, v29, (int64_t)checkTime, v105);
  this = (QuestBoardListViewItemDraw_o *)v11->fields.mRarePrismSp;
  if ( !this )
    goto LABEL_312;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_312;
  v106 = (IsClosedWar & v98) == 0 && IsPurchasedByRarePrism;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v106, 0LL);
  if ( v98 )
    goto LABEL_284;
  mInfoTextList = v11->fields.mInfoTextList;
  if ( !mInfoTextList )
    goto LABEL_312;
  questBoardItem = (QuestBoardListViewItem_o *)(unsigned int)mInfoTextList->fields._size;
  if ( (int)questBoardItem < 1 )
  {
LABEL_284:
    v107 = 0;
    goto LABEL_296;
  }
  v109 = v11->fields.mListViewObject;
  if ( !v109 )
    goto LABEL_312;
  this = (QuestBoardListViewItemDraw_o *)v109->fields.manager;
  if ( !this )
    goto LABEL_312;
  v110 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v110
    || (QuestBoardListViewManager_c *)this->klass->_2.typeHierarchy[v110 - 1] != QuestBoardListViewManager_TypeInfo )
  {
    goto LABEL_314;
  }
  AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt(
                   (QuestBoardListViewManager_o *)this,
                   (int32_t)questBoardItem,
                   0LL);
  if ( mInfoTextList->fields._size <= (unsigned int)AlphaAnimCnt )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  this = (QuestBoardListViewItemDraw_o *)mInfoTextList->fields._items->m_Items[AlphaAnimCnt];
  if ( !this )
    goto LABEL_312;
  QuestBoardInformaionText__SetTime(
    (QuestBoardInformaionText_o *)this,
    &v11->fields.mOptionInfoLb,
    &v11->fields.mOptionInfoFrameSp,
    v111);
  this = (QuestBoardListViewItemDraw_o *)v11->fields.mOptionInfoLb;
  if ( !this )
    goto LABEL_312;
  BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)this, 1.0, 0LL);
  v107 = 1;
LABEL_296:
  this = *p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_312;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_312;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
  if ( !this )
    goto LABEL_312;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_312;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v107, 0LL);
  this = *p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_312;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_312;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v107, 0LL);
  mEarthLine = (UnityEngine_Object_o *)v11->fields.mEarthLine;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mEarthLine, 0LL, 0LL) )
  {
    this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
    v115 = v11->fields.mEarthLine;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
    }
    if ( v115 )
    {
      QuestBoardListViewEarthLine__SetupSecond(
        v115,
        *(UnityEngine_Vector3_o *)&this->fields.mTitleLevelSp->fields.mDrawRegion.fields.w,
        v11->fields.mListViewObject,
        warId,
        v114);
      return;
    }
    goto LABEL_312;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewItemDraw__SetItemOfFolder(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        const MethodInfo *method)
{
  QuestBoardListViewItem_o *v3; // x20
  QuestBoardListViewItemDraw_o *v4; // x19
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x8
  MapControl_AreaBoardInfo_o *AreaBoardInfo_k__BackingField; // x21
  int32_t warId; // w25
  MapControl_WarInfo_o *v8; // x26
  WarEntity_o *v9; // x22
  int v10; // w24
  EventEntity_o *v11; // x27
  int v12; // w23
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  __int64 v14; // x9
  struct UISprite_o *mShohiSp; // x28
  _BOOL4 IsMainInterlude; // w26
  const MethodInfo *v17; // x3
  _BOOL4 IsPurchasedByRarePrism; // w27
  const MethodInfo *v19; // x4
  unsigned int status; // w8
  _BOOL4 v21; // w9
  BalanceConfig_c *v22; // x0
  ScrTerminalListTop_c *IsOpenedMainScenarioWar; // x0
  QuestBoardListViewItemDraw_o *v24; // x24
  QuestBoardListViewItemDraw_o *v25; // x24
  QuestBoardListViewItemDraw_o *v26; // x8
  MapControl_RootInfo_o *v27; // x24
  __int64 v28; // x2
  int v29; // w24
  QuestBoardListViewItemDraw_c *v30; // x8
  struct System_String_array *msQBoardL1Names; // x8
  System_String_o *v32; // x28
  int *v33; // x1
  QuestBoardListViewItemDraw_c *v34; // x0
  System_String_o *QBOARD_CAP_CLOSED; // x24
  System_String_o *EventAddBannerSpriteName; // x0
  int v37; // w24
  QuestBoardListViewItemDraw_c *v38; // x8
  struct System_String_array *v39; // x8
  Il2CppObject *v40; // x0
  UISprite_o *mcBaseP; // x28
  UIWidget_o *Component_srcLineSprite; // x24
  int v43; // s0
  UIWidget_o *v47; // x24
  int v48; // s0
  bool v52; // w1
  const MethodInfo *v53; // x3
  _BOOL8 HasFlag; // x0
  const MethodInfo *v55; // x4
  int32_t v56; // w1
  QuestBoardListViewItemDraw_c *v57; // x0
  const MethodInfo *v58; // x2
  const MethodInfo *v59; // x3
  const MethodInfo *v60; // x3
  QuestBoardListViewItemDraw_c *v61; // x0
  const MethodInfo *v62; // x2
  const MethodInfo *v63; // x3
  BalanceConfig_c *v64; // x0
  const MethodInfo *v65; // x2
  const MethodInfo *v66; // x3
  const MethodInfo *v67; // x2
  const MethodInfo *v68; // x5
  int32_t questCount; // w1
  const MethodInfo *v70; // x3
  bool v71; // w20
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x21
  struct QuestBoardListViewObject_o *v73; // x8
  __int64 v74; // x10
  const MethodInfo *v75; // x3
  int32_t AlphaAnimCnt; // w20
  QuestBoardListViewItemDraw_c *v77; // x0
  __int64 v78; // x0
  System_Collections_Generic_List_MapControl_QuestInfo__o *questList; // [xsp+0h] [xbp-80h]
  int v80; // [xsp+Ch] [xbp-74h]
  int64_t v81; // [xsp+10h] [xbp-70h]
  EventEntity_o *eventEnt; // [xsp+18h] [xbp-68h]
  _BOOL4 IsClosedWar; // [xsp+20h] [xbp-60h]
  int v84; // [xsp+24h] [xbp-5Ch]
  int v85; // [xsp+28h] [xbp-58h] BYREF
  int v86; // [xsp+2Ch] [xbp-54h] BYREF

  v3 = questBoardItem;
  v4 = this;
  if ( (byte_438C7EF & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_WarMaster___);
    sub_B775C4(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__);
    sub_B775C4(&QuestBoardListViewItemDraw_TypeInfo);
    sub_B775C4(&QuestBoardListViewManager_TypeInfo);
    sub_B775C4(&ScrTerminalListTop_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B775C4(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_B775C4(&SingletonTemplate_QuestTree__TypeInfo);
    sub_B775C4(&SingletonTemplate_clsQuestCheck__TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)sub_B775C4(&StringLiteral_1/*""*/);
    byte_438C7EF = 1;
  }
  if ( !v3 )
    goto LABEL_200;
  quest_info_k__BackingField = v3->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_200;
  AreaBoardInfo_k__BackingField = quest_info_k__BackingField->fields._AreaBoardInfo_k__BackingField;
  if ( !AreaBoardInfo_k__BackingField )
    goto LABEL_200;
  warId = AreaBoardInfo_k__BackingField->fields.warId;
  if ( warId )
  {
    if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
    }
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !this )
      goto LABEL_200;
    this = (QuestBoardListViewItemDraw_o *)QuestTree__mfGetWarInfoByWarID((QuestTree_o *)this, warId, 0LL);
    v8 = (MapControl_WarInfo_o *)this;
    if ( this )
    {
      this = (QuestBoardListViewItemDraw_o *)MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)this, 0LL);
      v9 = (WarEntity_o *)this;
      v10 = 1;
      goto LABEL_16;
    }
    v10 = 0;
  }
  else
  {
    v10 = 0;
    v8 = 0LL;
  }
  v9 = 0LL;
LABEL_16:
  v11 = AreaBoardInfo_k__BackingField->fields.eventEnt;
  if ( v11 )
  {
    if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
    }
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !this )
      goto LABEL_200;
    this = (QuestBoardListViewItemDraw_o *)QuestTree__IsActiveEventWar((QuestTree_o *)this, warId, 0LL);
    v12 = (unsigned __int8)this & 1;
  }
  else
  {
    v12 = 0;
  }
  mListViewObject = v4->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_200;
  this = (QuestBoardListViewItemDraw_o *)mListViewObject->fields.manager;
  if ( !this )
    goto LABEL_200;
  questBoardItem = (QuestBoardListViewItem_o *)QuestBoardListViewManager_TypeInfo;
  v14 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v14
    || (QuestBoardListViewManager_c *)this->klass->_2.typeHierarchy[v14 - 1] != QuestBoardListViewManager_TypeInfo )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_B77990(this);
LABEL_202:
    this = (QuestBoardListViewItemDraw_o *)sub_B77990(this);
    goto LABEL_203;
  }
  mShohiSp = this->fields.mShohiSp;
  if ( v10 )
  {
    if ( !v8 )
      goto LABEL_200;
    IsClosedWar = MapControl_WarInfo__IsClosedWar(v8, 0LL);
    if ( !v9 )
      goto LABEL_30;
LABEL_32:
    IsMainInterlude = WarEntity__IsMainInterlude(v9, 0LL);
    goto LABEL_33;
  }
  IsClosedWar = 0;
  if ( v9 )
    goto LABEL_32;
LABEL_30:
  IsMainInterlude = 0;
LABEL_33:
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  v81 = (int64_t)mShohiSp;
  eventEnt = v11;
  this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !this )
    goto LABEL_200;
  questList = (System_Collections_Generic_List_MapControl_QuestInfo__o *)this->fields.mCommonAtlas;
  IsPurchasedByRarePrism = QuestBoardListViewItemDraw__IsPurchasedByRarePrism(this, questList, v9, v17);
  v84 = v12 & (IsPurchasedByRarePrism || !IsMainInterlude);
  if ( (unsigned int)(AreaBoardInfo_k__BackingField->fields.questBoardType - 3) <= 1 )
  {
    this = (QuestBoardListViewItemDraw_o *)v4->fields.mLabelObj;
    if ( !this )
      goto LABEL_200;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (QuestBoardListViewItemDraw_o *)v4->fields.mTitleObj;
    if ( !this )
      goto LABEL_200;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (QuestBoardListViewItemDraw_o *)v4->fields.mAdvanceNoticeObj;
    if ( !this )
      goto LABEL_200;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (QuestBoardListViewItemDraw_o *)v4->fields.mOverwriteAdvanceNoticeObj;
    if ( !this )
      goto LABEL_200;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (QuestBoardListViewItemDraw_o *)v4->fields.mOptionObj;
    if ( !this )
      goto LABEL_200;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (QuestBoardListViewItemDraw_o *)v4->fields.mOptionInfoLb;
    if ( !this )
      goto LABEL_200;
    this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_200;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (QuestBoardListViewItemDraw_o *)v4->fields.mOptionRestrinctionLb;
    if ( !this )
      goto LABEL_200;
    this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_200;
    this = (QuestBoardListViewItemDraw_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
    if ( !this )
      goto LABEL_200;
    this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_200;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (QuestBoardListViewItemDraw_o *)v4->fields.mRewardObj;
    if ( !this )
      goto LABEL_200;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (QuestBoardListViewItemDraw_o *)v4->fields.mPhaseObj;
    if ( !this )
      goto LABEL_200;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (QuestBoardListViewItemDraw_o *)v4->fields.mChallengeObj;
    if ( !this )
      goto LABEL_200;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (QuestBoardListViewItemDraw_o *)v4->fields.mCostObj;
    if ( !this )
      goto LABEL_200;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (QuestBoardListViewItemDraw_o *)v4->fields.mCondObject;
    if ( !this )
      goto LABEL_200;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    v80 = IsClosedWar;
    if ( v84 == 0 && IsMainInterlude )
    {
      if ( v9 && (WarEntity__HasFlag(v9, 128, 0LL) || WarEntity__HasFlag(v9, 32, 0LL)) )
      {
        status = AreaBoardInfo_k__BackingField->fields.status;
        v21 = IsClosedWar;
LABEL_64:
        v80 = v21 || status == 2;
        goto LABEL_65;
      }
      v22 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v22 = BalanceConfig_TypeInfo;
      }
      if ( warId == v22->static_fields->MainInterludeWarId )
      {
        v21 = IsClosedWar;
        status = AreaBoardInfo_k__BackingField->fields.status & 0xFFFFFFFE;
        goto LABEL_64;
      }
    }
LABEL_65:
    if ( (v10 & 1) == 0 )
    {
      v34 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v34 = QuestBoardListViewItemDraw_TypeInfo;
      }
      QBOARD_CAP_CLOSED = v34->static_fields->QBOARD_CAP_CLOSED;
      goto LABEL_123;
    }
    IsOpenedMainScenarioWar = ScrTerminalListTop_TypeInfo;
    if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      IsOpenedMainScenarioWar = ScrTerminalListTop_TypeInfo;
    }
    if ( warId == IsOpenedMainScenarioWar->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_TARGET_WAR_ID )
    {
      if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
      }
      this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      v24 = this;
      if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      }
      if ( !v24 )
        goto LABEL_200;
      IsOpenedMainScenarioWar = (ScrTerminalListTop_c *)clsQuestCheck__IsWarClear(
                                                          (clsQuestCheck_o *)v24,
                                                          ScrTerminalListTop_TypeInfo->static_fields->AREA_BOARD_FORCE_DISP_TARGET_WAR_ID,
                                                          0LL);
      if ( ((unsigned __int8)IsOpenedMainScenarioWar & 1) != 0 )
      {
        if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
        }
        this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
        v25 = this;
        if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
        }
        if ( !v25 )
          goto LABEL_200;
        if ( !clsQuestCheck__IsWarClear(
                (clsQuestCheck_o *)v25,
                ScrTerminalListTop_TypeInfo->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_START_COND_WAR_ID,
                0LL) )
          goto LABEL_196;
        if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
        }
        this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !this )
          goto LABEL_200;
        v26 = this;
        this = (QuestBoardListViewItemDraw_o *)ScrTerminalListTop_TypeInfo;
        v27 = *(MapControl_RootInfo_o **)&v26->fields.m_CachedPtr;
        if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
        }
        if ( !v27 )
          goto LABEL_200;
        IsOpenedMainScenarioWar = (ScrTerminalListTop_c *)MapControl_RootInfo__IsOpenedMainScenarioWar(
                                                            v27,
                                                            ScrTerminalListTop_TypeInfo->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_TARGET_WAR_ID,
                                                            0LL);
        if ( ((unsigned __int8)IsOpenedMainScenarioWar & 1) == 0 )
        {
LABEL_196:
          v77 = QuestBoardListViewItemDraw_TypeInfo;
          if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
            v77 = QuestBoardListViewItemDraw_TypeInfo;
          }
          QBOARD_CAP_CLOSED = v77->static_fields->QBOARD_CAP_CLOSED_SPECIAL_2;
          goto LABEL_123;
        }
      }
    }
    if ( v9
      && (IsOpenedMainScenarioWar = (ScrTerminalListTop_c *)WarEntity__HasFlag(v9, 128, 0LL),
          ((unsigned __int8)IsOpenedMainScenarioWar & 1) != 0) )
    {
      this = (QuestBoardListViewItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_200;
      this = (QuestBoardListViewItemDraw_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !this )
        goto LABEL_200;
      this = (QuestBoardListViewItemDraw_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                               (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                               warId,
                                               (const MethodInfo_21FB894 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_200;
      this = (QuestBoardListViewItemDraw_o *)WarEntity__GetPrioredBannerId((WarEntity_o *)this, 0LL);
      v29 = (int)this;
      v30 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v30 = QuestBoardListViewItemDraw_TypeInfo;
      }
      msQBoardL1Names = v30->static_fields->msQBoardL1Names;
      if ( !msQBoardL1Names )
        goto LABEL_200;
      if ( msQBoardL1Names->max_length > 1 )
      {
        v32 = msQBoardL1Names->m_Items[1];
        v86 = v29;
        v33 = &v86;
LABEL_121:
        v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v33, v28);
        EventAddBannerSpriteName = System_String__Format(v32, v40, 0LL);
        goto LABEL_122;
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
                                     (v84 != 0) | (unsigned __int8)v80,
                                     v19);
LABEL_122:
        QBOARD_CAP_CLOSED = EventAddBannerSpriteName;
LABEL_123:
        mcBaseP = v4->fields.mcBaseP;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        if ( !AtlasManager__SetBanner(mcBaseP, QBOARD_CAP_CLOSED, 0LL) )
        {
          this = (QuestBoardListViewItemDraw_o *)v4->fields.mcBaseP;
          if ( !this )
            goto LABEL_200;
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
          if ( !this )
            goto LABEL_200;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        }
        this = (QuestBoardListViewItemDraw_o *)v4->fields.mcBaseP;
        if ( !this )
          goto LABEL_200;
        ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
          this,
          this->klass[2]._1.interopData);
        this = (QuestBoardListViewItemDraw_o *)v4->fields.mcBaseP;
        if ( !this )
          goto LABEL_200;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_200;
        Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  (UnityEngine_GameObject_o *)this,
                                                  (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        *(UnityEngine_Color_o *)&v43 = UnityEngine_Color__get_white(0LL);
        if ( !Component_srcLineSprite )
          goto LABEL_200;
        UIWidget__set_color(Component_srcLineSprite, *(UnityEngine_Color_o *)&v43, 0LL);
        if ( v80 )
        {
          v47 = (UIWidget_o *)v4->fields.mcBaseP;
          *(UnityEngine_Color_o *)&v48 = UnityEngine_Color__get_gray(0LL);
          if ( !v47 )
            goto LABEL_200;
          UIWidget__set_color(v47, *(UnityEngine_Color_o *)&v48, 0LL);
        }
        goto LABEL_137;
      }
      this = (QuestBoardListViewItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_200;
      this = (QuestBoardListViewItemDraw_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !this )
        goto LABEL_200;
      this = (QuestBoardListViewItemDraw_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                               (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                               warId,
                                               (const MethodInfo_21FB894 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_200;
      this = (QuestBoardListViewItemDraw_o *)WarEntity__GetPrioredBannerId((WarEntity_o *)this, 0LL);
      v37 = (int)this;
      v38 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v38 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v39 = v38->static_fields->msQBoardL1Names;
      if ( !v39 )
        goto LABEL_200;
      if ( v39->max_length > 2 )
      {
        v32 = v39->m_Items[2];
        v33 = &v85;
        v85 = v37;
        goto LABEL_121;
      }
    }
LABEL_203:
    v78 = sub_B776C8(this);
    sub_B77668(v78, 0LL);
  }
LABEL_137:
  this = (QuestBoardListViewItemDraw_o *)v4->fields.mRarePrismSp;
  if ( !this )
    goto LABEL_200;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_200;
  v52 = (!IsMainInterlude || !IsClosedWar) && IsPurchasedByRarePrism;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v52, 0LL);
  if ( v9 && ((HasFlag = WarEntity__HasFlag(v9, 128, 0LL)) || (HasFlag = WarEntity__HasFlag(v9, 32, 0LL))) )
  {
    v56 = AreaBoardInfo_k__BackingField->fields.status;
    if ( v56 && v56 != 6 )
      QuestBoardListViewItemDraw__SetStatusActive(v4, v56, v84 != 0 || eventEnt == 0LL || v56 != 1, v53);
    if ( IsPurchasedByRarePrism
      && QuestBoardListViewItemDraw__HasNewQuestInWar(
           (QuestBoardListViewItemDraw_o *)HasFlag,
           questList,
           warId,
           IsMainInterlude,
           v55) )
    {
      QuestBoardListViewItemDraw__SetStatusActive(v4, 1, 1, v53);
    }
    v57 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v57 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QuestBoardListViewItemDraw__SetNewIcon(
      v4,
      v57->static_fields->NEW_POS_AREA,
      v57->static_fields->NEW_W_AREA,
      v57->static_fields->NEW_H_AREA,
      v53);
    if ( IsMainInterlude && IsClosedWar )
      QuestBoardListViewItemDraw__SetStatusActive(v4, 2, 1, v59);
    QuestBoardListViewItemDraw__SetClearSprite(v4, v9, v58);
    QuestBoardListViewItemDraw__SetNextSprite(v4, AreaBoardInfo_k__BackingField, v9, v60);
  }
  else
  {
    if ( AreaBoardInfo_k__BackingField->fields.status == 1 )
      QuestBoardListViewItemDraw__SetStatusActive(v4, 1, 1, v53);
    v61 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v61 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QuestBoardListViewItemDraw__SetNewIcon(
      v4,
      v61->static_fields->NEW_POS_AREA,
      v61->static_fields->NEW_W_AREA,
      v61->static_fields->NEW_H_AREA,
      v53);
    v64 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v64 = BalanceConfig_TypeInfo;
    }
    if ( warId == v64->static_fields->MainInterludeWarId
      && (AreaBoardInfo_k__BackingField->fields.status & 0xFFFFFFFE) == 2 )
    {
      QuestBoardListViewItemDraw__SetStatusActive(v4, 2, 1, v63);
    }
    QuestBoardListViewItemDraw__SetClearSprite(v4, v9, v62);
    if ( !v9 )
      goto LABEL_173;
  }
  if ( WarEntity__IsContainPrioredEntity(v9, 18, 0LL) )
  {
    QuestBoardListViewItemDraw__SetStatusActive(v4, 2, 1, v66);
    QuestBoardListViewItemDraw__SetClearSprite(v4, v9, v67);
  }
  if ( WarEntity__IsDispWhiteMarkUnderBoard(v9, 0LL) )
    QuestBoardListViewItemDraw__SetBlackMarkAndWhiteMark(v4, v3, v9, 0, 0, v68);
LABEL_173:
  if ( IsPurchasedByRarePrism || v84 != 0 || eventEnt == 0LL )
    questCount = AreaBoardInfo_k__BackingField->fields.questCount;
  else
    questCount = 0;
  QuestBoardListViewItemDraw__SetBadge(v4, questCount, v65);
  QuestBoardListViewItemDraw__CreateInfoTextList(v4, v3, v81, v70);
  if ( !IsMainInterlude )
  {
    mInfoTextList = v4->fields.mInfoTextList;
    if ( !mInfoTextList )
      goto LABEL_200;
    questBoardItem = (QuestBoardListViewItem_o *)(unsigned int)mInfoTextList->fields._size;
    if ( (int)questBoardItem >= 1 )
    {
      v73 = v4->fields.mListViewObject;
      if ( !v73 )
        goto LABEL_200;
      this = (QuestBoardListViewItemDraw_o *)v73->fields.manager;
      if ( !this )
        goto LABEL_200;
      v74 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v74
        && (QuestBoardListViewManager_c *)this->klass->_2.typeHierarchy[v74 - 1] == QuestBoardListViewManager_TypeInfo )
      {
        AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt(
                         (QuestBoardListViewManager_o *)this,
                         (int32_t)questBoardItem,
                         0LL);
        if ( mInfoTextList->fields._size <= (unsigned int)AlphaAnimCnt )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        this = (QuestBoardListViewItemDraw_o *)mInfoTextList->fields._items->m_Items[AlphaAnimCnt];
        if ( this )
        {
          QuestBoardInformaionText__SetTime(
            (QuestBoardInformaionText_o *)this,
            &v4->fields.mOptionInfoLb,
            &v4->fields.mOptionInfoFrameSp,
            v75);
          this = (QuestBoardListViewItemDraw_o *)v4->fields.mOptionInfoLb;
          if ( this )
          {
            BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)this, 1.0, 0LL);
            v71 = 1;
            goto LABEL_189;
          }
        }
LABEL_200:
        sub_B7769C(this, questBoardItem);
      }
      goto LABEL_202;
    }
  }
  v71 = 0;
LABEL_189:
  this = (QuestBoardListViewItemDraw_o *)v4->fields.mOptionInfoLb;
  if ( !this )
    goto LABEL_200;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_200;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
  if ( !this )
    goto LABEL_200;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_200;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v71, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v4->fields.mOptionInfoLb;
  if ( !this )
    goto LABEL_200;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_200;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v71, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewItemDraw__SetItemOfQuest(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 Instance; // x0
  unsigned __int64 size; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x22
  DataManager_o *v15; // x23
  QuestEntity_o *PhaseDetailedEntity; // x27
  unsigned int v17; // w28
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  int32_t v19; // w26
  __int64 v20; // x9
  int32_t dispType; // w19
  int v22; // s0
  int v23; // s1
  int v24; // s2
  int v25; // s3
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x24
  _BOOL4 v27; // w25
  _BOOL4 v28; // w0
  int32_t v29; // w19
  _BOOL4 v30; // w24
  int32_t PhaseMax; // w0
  QuestBoardListViewItemDraw_o *v32; // x0
  const MethodInfo *v33; // x3
  char v34; // w23
  int OverwriteBannerId_k__BackingField; // w8
  QuestBoardListViewItemDraw_c *v36; // x0
  struct QuestBoardListViewItemDraw_StaticFields *v37; // x9
  QuestBoardListViewItemDraw_c *v38; // x0
  System_String_o *QUEST_BOARD_SPNAME_PREFIX; // x26
  int v40; // w27
  int bannerId; // t1
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  System_String_o *v43; // x0
  System_String_o *v44; // x0
  struct UISprite_o **p_mcBaseP; // x20
  UISprite_o *v46; // x27
  System_String_o *v47; // x26
  int32_t questId; // w27
  const MethodInfo *v49; // x3
  UnityEngine_GameObject_o *gameObject; // x27
  QuestBoardListViewItemDraw_c *v51; // x8
  float NEXT_POS_X_QUEST; // w8
  bool v53; // w27
  int32_t v54; // w1
  const MethodInfo *v55; // x3
  QuestBoardListViewItemDraw_c *v56; // x0
  struct QuestBoardListViewItemDraw_StaticFields *v57; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  QuestBoardListViewItemDraw_c *v61; // x0
  const MethodInfo *v62; // x3
  QuestBoardListViewItemDraw_c *v63; // x0
  struct QuestBoardListViewItemDraw_StaticFields *v64; // x10
  float *p_x; // x8
  float *p_y; // x9
  float *p_z; // x10
  struct QuestBoardListViewItemDraw_StaticFields *v68; // x10
  const MethodInfo *v69; // x1
  const MethodInfo *v70; // x2
  UnityEngine_GameObject_o *v71; // x24
  QuestBoardListViewItemDraw_c *v72; // x0
  QuestBoardListViewItemDraw_o *v73; // x0
  const MethodInfo *v74; // x5
  System_String_o *RecommendLv; // x0
  const MethodInfo *v76; // x2
  const MethodInfo *v77; // x2
  UISprite_o *mLabelFaceMaskQuestSp; // x24
  QuestBoardListViewItemDraw_o *v79; // x0
  int32_t v80; // w25
  System_String_o *FaceMaskSpriteName; // x0
  const MethodInfo *v82; // x5
  bool v83; // w0
  const MethodInfo *v84; // x3
  UILabel_o *mTitleNameLb; // x24
  const MethodInfo *v86; // x4
  __int64 v87; // x19
  QuestBoardListViewItemDraw_o *v88; // x0
  const MethodInfo *v89; // x2
  const MethodInfo *v90; // x2
  UISprite_o *mLabelNameSp; // x24
  QuestBoardListViewItemDraw_o *v92; // x0
  const MethodInfo *v93; // x3
  System_String_o *QuestIconName; // x23
  System_Action_o *v95; // x23
  const MethodInfo *v96; // x3
  UILabel_o *v97; // x23
  QuestBoardListViewItemDraw_o *v98; // x0
  const MethodInfo *v99; // x4
  bool PhasePresentGiftData; // w24
  const MethodInfo *v101; // x4
  int32_t v102; // w23
  QuestBoardListViewItemDraw_PhasePresentData_o *v103; // x25
  int32_t afterClear; // w26
  float v105; // s8
  float v106; // s9
  float v107; // s10
  float v108; // s11
  bool IsRepeatReward; // w0
  QuestBoardListViewItemDraw_PhasePresentData_o *v110; // x3
  __int64 v111; // x25
  const MethodInfo *v112; // x6
  const MethodInfo *v113; // x3
  bool v114; // w23
  int v115; // w19
  const MethodInfo *v116; // x1
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *mInfoTextList; // x23
  const MethodInfo *v118; // x6
  int64_t *p_expireAt; // x8
  int64_t v120; // x23
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v121; // x24
  System_String_o *v122; // x26
  QuestBoardInformaionText_o *v123; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v124; // x25
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v125; // x19
  struct BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x23
  struct QuestBoardListViewObject_o *v127; // x8
  __int64 v128; // x10
  const MethodInfo *v129; // x3
  int32_t AlphaAnimCnt; // w24
  bool v131; // w24
  const MethodInfo *v132; // x1
  int32_t v133; // w24
  UISprite_o *mCostApSp; // x23
  System_String_o *ApSpriteFileName; // x24
  UnityEngine_GameObject_o *mChallengeObj; // x23
  QuestBoardListViewItemDraw_c *v137; // x0
  struct QuestBoardListViewItemDraw_StaticFields *v138; // x10
  float *v139; // x8
  float *v140; // x9
  float *v141; // x10
  struct UILabel_o **p_mChallengeLb; // x19
  QuestBoardListViewItemDraw_c *v143; // x0
  struct QuestBoardListViewItemDraw_StaticFields *v144; // x10
  struct QuestBoardListViewItemDraw_StaticFields *v145; // x10
  EventDetailEntity_o *Entity; // x23
  int32_t ClearNum; // w23
  UISprite_o *mcBaseP; // x27
  __int64 v149; // x8
  System_String_o *v150; // x26
  System_String_o *v151; // x0
  System_String_o *v152; // x26
  struct QuestBoardListViewItemDraw_StaticFields *v153; // x10
  UISprite_o *challengeStrSpr; // x24
  UILabel_o *mChallengeLb; // x24
  UnityEngine_GameObject_o *mPhaseObj; // x23
  QuestBoardListViewItemDraw_o *v157; // x20
  const MethodInfo *v158; // x4
  int32_t v159; // w26
  MapControl_PhaseInfo_o *CurrentPhaseInfo; // x0
  int32_t ReferToQuestPhase; // w0
  int32_t v162; // w23
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v164; // x24
  int32_t v165; // w23
  int32_t *p_questPhase; // x9
  int32_t v167; // w0
  __int16 v168; // w8
  int v169; // w9
  struct QuestBoardListViewItemDraw_StaticFields *v170; // x8
  int32_t PHASE_NORMAL_MAX; // w10
  _BOOL4 v172; // w24
  bool v173; // w25
  int32_t *p_QUEST_BOARD_PHASE_INTERVAL; // x8
  int32_t v175; // w28
  int v176; // w21
  unsigned int v177; // w19
  int v178; // w22
  struct UISprite_array *mPhaseSp; // x8
  Il2CppClass **v180; // x8
  UISprite_o *v181; // x26
  QuestBoardListViewItemDraw_o *v182; // x0
  const MethodInfo *v183; // x6
  System_String_o *PhaseArrowSpriteName; // x0
  int v185; // s0
  QuestBoardListViewItemDraw_o *v189; // x0
  const MethodInfo *v190; // x3
  int32_t PhaseArrowIntervalSize; // w27
  QuestBoardListViewItemDraw_o *v192; // x27
  QuestEntity_o *v193; // x20
  UnityEngine_GameObject_o *v194; // x23
  DataManager_o *v195; // x21
  UISprite_o *mDamageRecordSp; // x23
  QuestBoardListViewItemDraw_c *v197; // x0
  System_String_o *QUEST_BOARD_DAMAGE_RECODE_NAME; // x24
  UserQuestRecordMaster_o *v199; // x23
  void (__fastcall *MaxTurnDamage)(); // x0
  UILabel_o *mDamageRecordLb; // x23
  __int64 v202; // x2
  Il2CppObject *v203; // x0
  UnityEngine_GameObject_o *v204; // x23
  UISprite_o *mKnockdownRecordSp; // x23
  QuestBoardListViewItemDraw_c *v206; // x0
  System_String_o *QUEST_BOARD_KNOCKDOWN_RECODE_NAME; // x24
  __int64 v208; // x23
  UserQuestRecordMaster_o *v209; // x24
  UILabel_o *mKnockdownRecordCountLb; // x24
  __int64 v211; // x2
  System_String_o *v212; // x25
  Il2CppObject *v213; // x0
  UILabel_o *mKnockdownRecordDamageLb; // x24
  System_String_o *v215; // x25
  __int64 v216; // x2
  Il2CppObject *v217; // x0
  UILabel_o *mKnockdownRecordPlusLb; // x24
  System_String_o *v219; // x25
  _QWORD **v220; // x20
  __int64 v221; // x26
  __int16 v222; // w8
  __int64 v223; // x26
  __int64 v224; // x26
  __int64 v225; // x26
  UILabel_o *mKnockdownRecordDamageNameLb; // x24
  System_String_o *v227; // x0
  _QWORD **v228; // x19
  System_String_o *v229; // x25
  __int64 v230; // x26
  __int16 v231; // w8
  __int64 v232; // x26
  __int64 v233; // x26
  __int64 v234; // x26
  UnityEngine_GameObject_o *v235; // x23
  QuestBoardListViewItemDraw_c *v236; // x8
  float QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX; // s0
  UnityEngine_GameObject_o *v238; // x0
  float LocalPositionX; // s8
  QuestBoardListViewItemDraw_c *v240; // x0
  int32_t id; // w23
  TerminalSceneComponent_c *v242; // x0
  QuestEntity_o *v243; // x20
  __int64 v244; // x23
  UILabel_o *mOptionRestrinctionLb; // x23
  UnityEngine_GameObject_o *v246; // x23
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  __int64 RESTRICTION_FONT_SPACING_DEFAULT; // x1
  UnityEngine_Behaviour_o *v249; // x23
  const MethodInfo *v250; // x3
  __int64 v251; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v252; // x0
  UnityEngine_GameObject_c *klass; // x8
  QuestPhaseDetailEntity_BoardInfo_array *v254; // x24
  _QWORD *monitor; // x8
  QuestPhaseDetailEntity_BoardInfo_o *v256; // x8
  bool v257; // w23
  bool v258; // w24
  char v259; // w20
  UnityEngine_GameObject_o **p_mCostConsumeBattleWinSp; // x19
  bool v261; // w25
  UISprite_o *mOptionPreBattleSp; // x25
  QuestBoardListViewItemDraw_c *v263; // x0
  System_String_o *PRE_BATTLE_ORGANIZATION; // x26
  bool v265; // w25
  float v266; // s4
  float v267; // s5
  float v268; // s6
  float v269; // s7
  float v270; // s4
  float v271; // s5
  float v272; // s6
  float v273; // s7
  UIWidget_o *v274; // x25
  int methodPointer; // s0
  int klass_high; // s1
  int return_type; // s2
  int invoker_method_high; // s3
  struct System_Collections_Generic_List_UISprite__o *mMultiSecondBattleInformation; // x8
  char v280; // w24
  UnityEngine_GameObject_o *v281; // x23
  QuestBoardListViewItemDraw_c *v282; // x8
  const MethodInfo *v283; // x2
  UnityEngine_GameObject_o *v284; // x23
  int32_t restrictionDefaultWidth; // w1
  const MethodInfo *v286; // x2
  struct UILabel_o *v287; // x8
  QuestBoardListViewItemDraw_c *v288; // x0
  int32_t mSpacingX; // w19
  QuestBoardListViewItemDraw_c *v290; // x0
  float v291; // s5
  float v292; // s6
  float v293; // s7
  UIWidget_o *mOptionRestrinctionSp; // x23
  int v295; // w19
  QuestPhaseEntity_o *v296; // x0
  QuestPhaseEntity_o *v297; // x23
  struct System_Int32_array *classIds; // x8
  bool v299; // w24
  struct ServantClassIconComponent_array *mClassIcons; // x8
  int max_length; // w19
  struct System_Int32_array *v302; // x20
  int v303; // w21
  int v304; // w9
  __int64 v305; // x22
  __int64 v306; // x8
  UnityEngine_Component_o *v307; // x23
  UnityEngine_Object_o *eventTarget; // x22
  UnityEngine_Object_o *eventTargetComponent; // x22
  ViewEnemyEntity_array *EntityListFromQuestId; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v311; // x22
  QuestBoardListViewItemDraw___c_c *v312; // x0
  struct QuestBoardListViewItemDraw___c_StaticFields *v313; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__315_1; // x23
  Il2CppObject *v315; // x24
  struct QuestBoardListViewItemDraw___c_StaticFields *v316; // x0
  System_String_array **v317; // x2
  System_String_array **v318; // x3
  System_Boolean_array **v319; // x4
  System_Int32_array **v320; // x5
  System_Int32_array *v321; // x6
  System_Int32_array *v322; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v323; // x0
  System_Int32_array *v324; // x22
  UnityEngine_Object_o *alloutRoot; // x21
  UnityEngine_Object_o *alloutRootComponent; // x21
  int32_t v327; // w21
  QuestBoardListViewItemDraw_c *v328; // x0
  int *p_RESTRICTION_FONT_WIDTH_ALLOUT; // x8
  UISprite_o *v330; // x27
  __int64 v331; // x8
  __int64 v332; // x0
  __int64 v333; // x0
  QuestBoardListViewItemDraw_o *v334; // x0
  QuestBoardListViewItem_o *v335; // x1
  const MethodInfo *v336; // x2
  EventCampaignEntity_o *v337; // [xsp+0h] [xbp-150h]
  const MethodInfo *v338; // [xsp+10h] [xbp-140h]
  int64_t checkTime; // [xsp+20h] [xbp-130h]
  bool v340; // [xsp+28h] [xbp-128h]
  int v341; // [xsp+2Ch] [xbp-124h]
  bool HasFlag; // [xsp+30h] [xbp-120h]
  MapControl_QuestInfo_o *v343; // [xsp+30h] [xbp-120h]
  int32_t v344; // [xsp+3Ch] [xbp-114h]
  DataManager_o *v345; // [xsp+40h] [xbp-110h]
  int32_t questPhase; // [xsp+4Ch] [xbp-104h]
  QuestBoardListViewItem_o *v347; // [xsp+50h] [xbp-100h]
  int32_t v348; // [xsp+50h] [xbp-100h]
  QuestEntity_o *v349; // [xsp+58h] [xbp-F8h]
  int v350; // [xsp+64h] [xbp-ECh]
  __int64 v351; // [xsp+68h] [xbp-E8h]
  int32_t v352; // [xsp+74h] [xbp-DCh]
  MethodInfo methoda; // [xsp+78h] [xbp-D8h] BYREF
  bool v354; // [xsp+C8h] [xbp-88h] BYREF
  bool v355; // [xsp+CCh] [xbp-84h] BYREF
  UserQuestEntity_o *v356; // [xsp+D0h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v357; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v358; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v359; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v361; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v362; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v363; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v364; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v365; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v366; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v367; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_438C7F2 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Array_Empty_object___);
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&CondType_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserQuestRecordMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ViewEnemyMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_QuestPhaseDetailEntity_BoardInfo___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B775C4(&Method_System_Func_ViewEnemyEntity__int___ctor__);
    sub_B775C4(&System_Func_ViewEnemyEntity__int__TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewMultiLimitedFormation___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_B775C4(&long_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_UISprite__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_UISprite__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&QuestBoardInformaionText_TypeInfo);
    sub_B775C4(&QuestBoardListViewItemDraw_TypeInfo);
    sub_B775C4(&QuestBoardListViewManager_TypeInfo);
    sub_B775C4(&QuestInformationComponent_TypeInfo);
    sub_B775C4(&QuestKnockdownInfo_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B775C4(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_B775C4(&SingletonTemplate_QuestTree__TypeInfo);
    sub_B775C4(&SingletonTemplate_clsQuestCheck__TypeInfo);
    sub_B775C4(&TerminalSceneComponent_TypeInfo);
    sub_B775C4(&Method_QuestBoardListViewItemDraw___c__SetItemOfQuest_b__315_1__);
    sub_B775C4(&Method_QuestBoardListViewItemDraw___c__DisplayClass315_0__SetItemOfQuest_b__0__);
    sub_B775C4(&QuestBoardListViewItemDraw___c__DisplayClass315_0_TypeInfo);
    sub_B775C4(&QuestBoardListViewItemDraw___c_TypeInfo);
    sub_B775C4(&StringLiteral_13658/*"TIME_REST_QUEST_BOARD_QUEST"*/);
    sub_B775C4(&StringLiteral_22093/*"questboard_challenge"*/);
    sub_B775C4(&StringLiteral_11106/*"QUEST_BOARD_KNOCKDOWN_PLUS"*/);
    sub_B775C4(&StringLiteral_11103/*"QUEST_BOARD_KNOCKDOWN_COUNT"*/);
    sub_B775C4(&StringLiteral_23975/*"{0:#,0}"*/);
    sub_B775C4(&StringLiteral_11105/*"QUEST_BOARD_KNOCKDOWN_DAMAGE_NAME"*/);
    sub_B775C4(&StringLiteral_11104/*"QUEST_BOARD_KNOCKDOWN_DAMAGE"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_22094/*"questboard_crushing"*/);
    byte_438C7F2 = 1;
  }
  v356 = 0LL;
  v355 = 0;
  v354 = 0;
  *(&methoda.bitflags + 1) = 0;
  memset((char *)&methoda.methodMetadataHandle + 4, 0, 20);
  memset(&methoda.klass, 0, 24);
  v5 = sub_B77694(QuestBoardListViewItemDraw___c__DisplayClass315_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass315_0___ctor(
    (QuestBoardListViewItemDraw___c__DisplayClass315_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_628;
  *(_QWORD *)(v5 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !questBoardItem )
    goto LABEL_628;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_628;
  v15 = (DataManager_o *)Instance;
  Instance = (__int64)MapControl_QuestInfo__GetMine(questBoardItem->fields._quest_info_k__BackingField, 0LL);
  if ( !Instance )
    goto LABEL_628;
  PhaseDetailedEntity = QuestEntity__GetPhaseDetailedEntity((QuestEntity_o *)Instance, 0LL);
  Instance = MapControl_QuestInfo__GetQuestType(quest_info_k__BackingField, 0LL);
  if ( !v15 )
    goto LABEL_628;
  v17 = Instance;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        v15,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !PhaseDetailedEntity )
    goto LABEL_628;
  if ( !Instance )
    goto LABEL_628;
  Instance = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Instance, PhaseDetailedEntity->fields.id, 0LL);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_628;
  v19 = Instance;
  Instance = (__int64)mListViewObject->fields.manager;
  if ( !Instance )
    goto LABEL_628;
  v20 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v20
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v20 - 8) != QuestBoardListViewManager_TypeInfo )
  {
    Instance = sub_B77990(Instance);
    goto LABEL_632;
  }
  dispType = quest_info_k__BackingField->fields.dispType;
  checkTime = *(_QWORD *)(Instance + 568);
  HasFlag = QuestEntity__HasFlag(PhaseDetailedEntity, 2LL, 0LL);
  v352 = dispType;
  if ( dispType == 2 )
    *(UnityEngine_Color_o *)&v22 = UnityEngine_Color__get_gray(0LL);
  else
    *(UnityEngine_Color_o *)&v22 = UnityEngine_Color__get_white(0LL);
  *(_DWORD *)(v5 + 24) = v22;
  *(_DWORD *)(v5 + 28) = v23;
  *(_DWORD *)(v5 + 32) = v24;
  *(_DWORD *)(v5 + 36) = v25;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              v15,
                                                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v344 = v19;
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_628;
  v347 = questBoardItem;
  v345 = v15;
  v351 = v5;
  UserQuestMaster__TryGetEntity(
    MasterData_WarQuestSelectionMaster,
    &v356,
    Instance,
    PhaseDetailedEntity->fields.id,
    0LL);
  v355 = 0;
  v354 = 0;
  *(&methoda.bitflags + 1) = 0;
  Instance = (__int64)MapControl_QuestInfo__GetMine(quest_info_k__BackingField, 0LL);
  if ( !Instance )
    goto LABEL_628;
  v27 = QuestEntity__HasFlag((QuestEntity_o *)Instance, 0x10000000000000LL, 0LL);
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  Instance = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_628;
  v28 = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, quest_info_k__BackingField->fields.questId, 0, 0LL);
  v29 = quest_info_k__BackingField->fields.questPhase;
  v30 = v28;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0LL);
  v32 = (QuestBoardListViewItemDraw_o *)UnityEngine_Mathf__Min_41473676(v29 + 1, PhaseMax, 0LL);
  questPhase = (int)v32;
  Instance = QuestBoardListViewItemDraw__IsInterruptedQuest(
               v32,
               quest_info_k__BackingField->fields.questId,
               (int32_t)v32,
               v33);
  if ( !this->fields.mLabelObj )
    goto LABEL_628;
  v34 = Instance;
  UnityEngine_GameObject__SetActive(this->fields.mLabelObj, 1, 0LL);
  Instance = (__int64)this->fields.mLabelNameSp;
  if ( !Instance )
    goto LABEL_628;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_628;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mLabelChapterSp;
  if ( !Instance )
    goto LABEL_628;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_628;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mLabelFaceMaskShortcutSp;
  if ( !Instance )
    goto LABEL_628;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_628;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mLabelFaceMaskQuestSp;
  if ( !Instance )
    goto LABEL_628;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_628;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.mTitleObj;
  if ( !Instance )
    goto LABEL_628;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.mTitleShortcutLb;
  if ( !Instance )
    goto LABEL_628;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_628;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mAdvanceNoticeObj;
  if ( !Instance )
    goto LABEL_628;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mOverwriteAdvanceNoticeObj;
  if ( !Instance )
    goto LABEL_628;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mOptionObj;
  if ( !Instance )
    goto LABEL_628;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.mRewardObj;
  if ( !Instance )
    goto LABEL_628;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_628;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_628;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mCondObject;
  if ( !Instance )
    goto LABEL_628;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  v349 = PhaseDetailedEntity;
  OverwriteBannerId_k__BackingField = v347->fields._OverwriteBannerId_k__BackingField;
  if ( OverwriteBannerId_k__BackingField < 1 )
  {
    bannerId = PhaseDetailedEntity->fields.bannerId;
    v40 = (_DWORD)PhaseDetailedEntity + 64;
    if ( bannerId < 1 )
    {
      p_mcBaseP = &this->fields.mcBaseP;
      mcBaseP = this->fields.mcBaseP;
      if ( v17 <= 5 && ((1 << v17) & 0x26) != 0 )
      {
        Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
        }
        v149 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 1072LL);
        if ( !v149 )
          goto LABEL_628;
        if ( v17 < *(_DWORD *)(v149 + 24) )
        {
          v150 = *(System_String_o **)(v149 + 8LL * (int)v17 + 32);
          v151 = System_Int32__ToString((int)v349 + 60, 0LL);
          v152 = System_String__Concat_44901936(v150, v151, 0LL);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetBanner(mcBaseP, v152, 0LL);
          goto LABEL_60;
        }
      }
      else
      {
        if ( !mcBaseP )
          goto LABEL_628;
        UISprite__set_atlas(this->fields.mcBaseP, this->fields.mTerminalAtlas, 0LL);
        v330 = this->fields.mcBaseP;
        Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
        }
        v331 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 1072LL);
        if ( !v331 )
          goto LABEL_628;
        if ( v17 < *(_DWORD *)(v331 + 24) )
        {
          if ( !v330 )
            goto LABEL_628;
          UISprite__set_spriteName(v330, *(System_String_o **)(v331 + 8LL * (int)v17 + 32), 0LL);
          goto LABEL_60;
        }
      }
LABEL_630:
      v333 = sub_B776C8(Instance);
      sub_B77668(v333, 0LL);
    }
    v38 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v38 = QuestBoardListViewItemDraw_TypeInfo;
    }
    static_fields = v38->static_fields;
    LODWORD(v38) = v40;
    QUEST_BOARD_SPNAME_PREFIX = static_fields->QUEST_BOARD_SPNAME_PREFIX;
  }
  else
  {
    v36 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v36 = QuestBoardListViewItemDraw_TypeInfo;
      OverwriteBannerId_k__BackingField = v347->fields._OverwriteBannerId_k__BackingField;
    }
    v37 = v36->static_fields;
    v38 = (QuestBoardListViewItemDraw_c *)((char *)&methoda.methodMetadataHandle + 4);
    QUEST_BOARD_SPNAME_PREFIX = v37->QUEST_BOARD_SPNAME_PREFIX;
    HIDWORD(methoda.methodMetadataHandle) = OverwriteBannerId_k__BackingField;
  }
  v43 = System_Int32__ToString((int32_t)v38, 0LL);
  v44 = System_String__Concat_44901936(QUEST_BOARD_SPNAME_PREFIX, v43, 0LL);
  p_mcBaseP = &this->fields.mcBaseP;
  v46 = this->fields.mcBaseP;
  v47 = v44;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = AtlasManager__SetEventUI(v46, v47, 0LL);
  if ( !v46 )
    goto LABEL_628;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v46, Instance & 1, 0LL);
LABEL_60:
  Instance = (__int64)*p_mcBaseP;
  if ( !*p_mcBaseP )
    goto LABEL_628;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 840LL))(
    Instance,
    *(_QWORD *)(*(_QWORD *)Instance + 848LL));
  Instance = (__int64)*p_mcBaseP;
  if ( !*p_mcBaseP )
    goto LABEL_628;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_628;
  Instance = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                        (UnityEngine_GameObject_o *)Instance,
                        (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Instance )
    goto LABEL_628;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v351 + 24), 0LL);
  if ( MapControl_QuestInfo__GetQuestType(quest_info_k__BackingField, 0LL) == 1
    && MapControl_QuestInfo__IsDisaplayable(quest_info_k__BackingField, 0LL) )
  {
    Instance = (__int64)MapControl_QuestInfo__GetMine(quest_info_k__BackingField, 0LL);
    if ( !Instance )
      goto LABEL_628;
    if ( !QuestEntity__HasFlag((QuestEntity_o *)Instance, 0x400000000000LL, 0LL) )
    {
      questId = quest_info_k__BackingField->fields.questId;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( !CondType__IsQuestClear_24699280(questId, -1, 1, 0LL) )
        goto LABEL_73;
    }
  }
  if ( MapControl_QuestInfo__IsDisplayQuestNextIcon(quest_info_k__BackingField, 0LL) )
  {
LABEL_73:
    Instance = (__int64)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_628;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_628;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    Instance = (__int64)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_628;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    v51 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v51 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionX(gameObject, v51->static_fields->NEXT_POS_X_QUEST, 0LL);
    Instance = (__int64)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_628;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_628;
    Instance = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          (UnityEngine_GameObject_o *)Instance,
                          (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( !Instance )
      goto LABEL_628;
    NEXT_POS_X_QUEST = QuestBoardListViewItemDraw_TypeInfo->static_fields->NEXT_POS_X_QUEST;
    *(float *)(Instance + 120) = NEXT_POS_X_QUEST;
    *(float *)(Instance + 132) = NEXT_POS_X_QUEST;
  }
  v350 = !v27;
  v341 = v30 && !v27;
  v53 = !v30 || v27;
  if ( v352 != 2 || !v53 )
  {
    if ( quest_info_k__BackingField->fields.isNew )
    {
      v54 = 1;
    }
    else
    {
      if ( (v341 & 1) == 0 )
        goto LABEL_89;
      v54 = 2;
    }
    QuestBoardListViewItemDraw__SetStatusActive(this, v54, 1, v49);
  }
LABEL_89:
  if ( quest_info_k__BackingField->fields.pickupPriority >= 1 )
    QuestBoardListViewItemDraw__SetStatusActive(this, 4, 1, v49);
  QuestBoardListViewItemDraw__SetPickupIcon(this, (const MethodInfo *)size);
  Instance = (__int64)this->fields.mNextSp;
  if ( !Instance )
    goto LABEL_628;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_628;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    v56 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v56 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v57 = v56->static_fields;
    x = v57->NEW_POS_QUEST_NEXT.fields.x;
    y = v57->NEW_POS_QUEST_NEXT.fields.y;
    z = v57->NEW_POS_QUEST_NEXT.fields.z;
LABEL_103:
    QuestBoardListViewItemDraw__SetNewIcon(
      this,
      *(UnityEngine_Vector3_o *)&x,
      v57->NEW_W_DEFAULT,
      v57->NEW_H_DEFAULT,
      v55);
    v63 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (v34 & 1) != 0 )
    {
      if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v63 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v64 = v63->static_fields;
      p_x = &v64->PREV_POS_QUEST_INTERRUPT_NEXT.fields.x;
      p_y = &v64->PREV_POS_QUEST_INTERRUPT_NEXT.fields.y;
      p_z = &v64->PREV_POS_QUEST_INTERRUPT_NEXT.fields.z;
    }
    else
    {
      if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v63 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v68 = v63->static_fields;
      p_x = &v68->PREV_POS_QUEST_PREV_NEXT.fields.x;
      p_y = &v68->PREV_POS_QUEST_PREV_NEXT.fields.y;
      p_z = &v68->PREV_POS_QUEST_PREV_NEXT.fields.z;
    }
    goto LABEL_112;
  }
  v61 = QuestBoardListViewItemDraw_TypeInfo;
  if ( quest_info_k__BackingField->fields.pickupPriority >= 1 )
  {
    if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v61 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v57 = v61->static_fields;
    x = v57->NEW_POS_QUEST.fields.x;
    y = v57->NEW_POS_QUEST.fields.y;
    z = v57->NEW_POS_QUEST.fields.z;
    goto LABEL_103;
  }
  if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v61 = QuestBoardListViewItemDraw_TypeInfo;
  }
  QuestBoardListViewItemDraw__SetNewIcon(
    this,
    v61->static_fields->NEW_POS_QUEST,
    v61->static_fields->NEW_W_DEFAULT,
    v61->static_fields->NEW_H_DEFAULT,
    v55);
  v143 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (v34 & 1) != 0 )
  {
    if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v143 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v144 = v143->static_fields;
    p_x = &v144->PREV_POS_QUEST_INTERRUPT.fields.x;
    p_y = &v144->PREV_POS_QUEST_INTERRUPT.fields.y;
    p_z = &v144->PREV_POS_QUEST_INTERRUPT.fields.z;
  }
  else
  {
    if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v143 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v153 = v143->static_fields;
    p_x = &v153->PREV_POS_QUEST_PREV.fields.x;
    p_y = &v153->PREV_POS_QUEST_PREV.fields.y;
    p_z = &v153->PREV_POS_QUEST_PREV.fields.z;
  }
LABEL_112:
  v357.fields.y = *p_y;
  v357.fields.x = *p_x;
  v357.fields.z = *p_z;
  QuestBoardListViewItemDraw__SetPrevSprite(this, v349, v357, v34 & 1, v62);
  if ( v352 != 2 && quest_info_k__BackingField->fields.isNew && quest_info_k__BackingField->fields.pickupPriority >= 1 )
    QuestBoardListViewItemDraw__SetStatusToggle(this, v69);
  Instance = (__int64)QuestBoardListViewItemDraw__GetStatusSp(this, 2, v70);
  if ( !Instance )
    goto LABEL_628;
  v71 = (UnityEngine_GameObject_o *)Instance;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    v72 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v72 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v71, v72->static_fields->CLEAR_POS_QUEST, 0LL);
  }
  Instance = (__int64)this->fields.mNoBattleObj;
  if ( !Instance )
    goto LABEL_628;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, HasFlag, 0LL);
  Instance = (__int64)this->fields.mNoBattleObj;
  if ( !Instance )
    goto LABEL_628;
  Instance = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                        (UnityEngine_GameObject_o *)Instance,
                        (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Instance )
    goto LABEL_628;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v351 + 24), 0LL);
  v340 = !HasFlag;
  RecommendLv = QuestBoardListViewItemDraw__GetRecommendLv(v73, v349, questPhase, !HasFlag, v352 == 2, v74);
  QuestBoardListViewItemDraw__SetRecommendLv(this, RecommendLv, *(UnityEngine_Color_o *)(v351 + 24), v76);
  mLabelFaceMaskQuestSp = this->fields.mLabelFaceMaskQuestSp;
  v79 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v79 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  }
  v80 = *(_DWORD *)&v79->fields.mTitleLevelSp[1].fields.mInvert;
  FaceMaskSpriteName = QuestBoardListViewItemDraw__GetFaceMaskSpriteName(v79, v17, v77);
  v83 = QuestBoardListViewItemDraw__SetFaceImage(
          this,
          v349,
          mLabelFaceMaskQuestSp,
          v80,
          FaceMaskSpriteName,
          *(UnityEngine_Color_o *)(v351 + 24),
          v82);
  mTitleNameLb = this->fields.mTitleNameLb;
  if ( v83 )
  {
    Instance = (__int64)QuestBoardListViewItemDraw__GetDispQuestName(this, v349, v17, v84);
    if ( !mTitleNameLb )
      goto LABEL_628;
    UILabel__set_text(mTitleNameLb, (System_String_o *)Instance, 0LL);
    v87 = v351;
    goto LABEL_150;
  }
  Instance = (__int64)QuestEntity__getQuestName(v349, 0LL);
  if ( !mTitleNameLb )
    goto LABEL_628;
  UILabel__set_text(mTitleNameLb, (System_String_o *)Instance, 0LL);
  v87 = v351;
  if ( v17 != 1 || !QuestBoardListViewItemDraw__IsMainWar(v88, quest_info_k__BackingField->fields.warId, v89) )
  {
    Instance = (__int64)this->fields.boardIconTexture;
    if ( !Instance )
      goto LABEL_628;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0LL);
    Instance = (__int64)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_628;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_628;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    mLabelNameSp = this->fields.mLabelNameSp;
    QuestIconName = QuestBoardListViewItemDraw__GetQuestIconName(v92, v349, v17, v93);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    Instance = AtlasManager__SetEventUI(mLabelNameSp, QuestIconName, 0LL);
    if ( !mLabelNameSp )
      goto LABEL_628;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLabelNameSp, Instance & 1, 0LL);
    Instance = (__int64)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_628;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 840LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 848LL));
    Instance = (__int64)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_628;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_628;
    Instance = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          (UnityEngine_GameObject_o *)Instance,
                          (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !Instance )
      goto LABEL_628;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v351 + 24), 0LL);
    Instance = (__int64)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_628;
    if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Instance, 0LL) )
    {
      *(_DWORD *)(v351 + 40) = v349->fields.id;
      v95 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(
        v95,
        (Il2CppObject *)v351,
        Method_QuestBoardListViewItemDraw___c__DisplayClass315_0__SetItemOfQuest_b__0__,
        0LL);
      QuestBoardListViewItemDraw__LoadBoardIconTexture(this, v349, v95, v96);
    }
LABEL_150:
    if ( v352 == 2 )
      goto LABEL_151;
    goto LABEL_152;
  }
  if ( v352 == 2 )
  {
LABEL_151:
    QuestBoardListViewItemDraw__SetAdvanceNoticeText(this, quest_info_k__BackingField, v349, checkTime, v86);
    goto LABEL_154;
  }
  QuestBoardListViewItemDraw__SetChapterSubIdDisp(this, quest_info_k__BackingField, v90);
LABEL_152:
  Instance = (__int64)this->fields.mAdvanceNoticeLb;
  if ( !Instance )
    goto LABEL_628;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
LABEL_154:
  v97 = this->fields.mTitleNameLb;
  Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  }
  if ( !v97 )
    goto LABEL_628;
  UILabel__SetCondensedScale(v97, QuestBoardListViewItemDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH, 0LL);
  Instance = (__int64)this->fields.mTitleNameLb;
  if ( !Instance )
    goto LABEL_628;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v87 + 24), 0LL);
  PhasePresentGiftData = QuestBoardListViewItemDraw__GetPhasePresentGiftData(
                           v98,
                           (QuestBoardListViewItemDraw_PhasePresentData_o **)&methoda.token,
                           v349,
                           quest_info_k__BackingField->fields.questPhase,
                           v99);
  QuestBoardListViewItemDraw__SetupRewardIconDisp(
    this,
    v349,
    *(QuestBoardListViewItemDraw_PhasePresentData_o **)&methoda.token,
    v352 == 2,
    *(UnityEngine_Color_o *)(v87 + 24),
    v101);
  v102 = quest_info_k__BackingField->fields.questId;
  v103 = *(QuestBoardListViewItemDraw_PhasePresentData_o **)&methoda.token;
  afterClear = v349->fields.afterClear;
  v105 = *(float *)(v351 + 24);
  v106 = *(float *)(v351 + 28);
  v107 = *(float *)(v351 + 32);
  v108 = *(float *)(v351 + 36);
  IsRepeatReward = QuestEntity__IsRepeatReward(v349, 0LL);
  v110 = v103;
  v111 = v351;
  v362.fields.r = v105;
  v362.fields.g = v106;
  v362.fields.b = v107;
  v362.fields.a = v108;
  QuestBoardListViewItemDraw__SetupRewardDisp(
    this,
    v102,
    PhasePresentGiftData,
    v110,
    afterClear,
    v362,
    IsRepeatReward,
    v112);
  QuestBoardListViewItemDraw__SetupRewardGotAndNotGiveDisp(
    this,
    quest_info_k__BackingField,
    v356,
    *(UnityEngine_Color_o *)(v351 + 24),
    v113);
  if ( v356 && UserQuestEntity__HasStatus(v356, 8, 0LL) )
  {
    Instance = (__int64)quest_info_k__BackingField->fields._WarInfo_k__BackingField;
    if ( !Instance )
      goto LABEL_628;
    Instance = (__int64)MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_628;
    v114 = !WarEntity__IsShop((WarEntity_o *)Instance, 0LL);
    v115 = 1;
  }
  else
  {
    v115 = 0;
    v114 = 0;
  }
  Instance = (__int64)this->fields.mRarePrismSp;
  if ( !Instance )
    goto LABEL_628;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_628;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v114, 0LL);
  QuestBoardListViewItemDraw__ResetInfoTextList(this, v116);
  methoda.genericMethod = (const void *)0xFFFFFFFFLL;
  mInfoTextList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields.mInfoTextList;
  Instance = (__int64)QuestBoardListViewItemDraw__GetCampaignText(
                        this,
                        v349->fields.id,
                        questPhase,
                        v53,
                        (int32_t *)&methoda.genericContainerHandle + 1,
                        (int32_t *)&methoda.genericMethod,
                        v118);
  if ( !mInfoTextList )
    goto LABEL_628;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    mInfoTextList,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
  Instance = (__int64)this->fields.mRarePrismSp;
  if ( !Instance )
    goto LABEL_628;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_628;
  Instance = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( v115 | Instance & 1 )
  {
    Instance = (__int64)v356;
    if ( !v356 )
      goto LABEL_628;
    Instance = UserQuestEntity__IsExpireNoLimit(v356, 0LL);
    if ( (Instance & 1) != 0 )
      goto LABEL_183;
    if ( !v356 )
      goto LABEL_628;
    p_expireAt = &v356->fields.expireAt;
  }
  else
  {
    p_expireAt = &quest_info_k__BackingField->fields.endTime;
  }
  v120 = *p_expireAt;
  if ( *p_expireAt >= 1 )
  {
    Instance = QuestEntity__HasFlag(v349, 32LL, 0LL);
    if ( (Instance & 1) == 0 )
    {
      v121 = this->fields.mInfoTextList;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v122 = LocalizationManager__Get((System_String_o *)StringLiteral_13658/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0LL);
      v123 = (QuestBoardInformaionText_o *)sub_B77694(QuestBoardInformaionText_TypeInfo);
      v363.fields.r = 0.0;
      v363.fields.g = 0.0;
      v363.fields.b = 0.0;
      v363.fields.a = 0.0;
      v361.fields.x = 0.0;
      v361.fields.y = 0.0;
      v361.fields.z = 0.0;
      v124 = (EventMissionProgressRequest_Argument_ProgressData_o *)v123;
      QuestBoardInformaionText___ctor(v123, v122, v120, 0, 0, v363, -1, 0, v361, 1, v337, 0LL, v338);
      if ( !v121 )
        goto LABEL_628;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v121,
        v124,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
      v111 = v351;
    }
  }
LABEL_183:
  v125 = this->fields.mInfoTextList;
  if ( !v125 )
    goto LABEL_628;
  size = (unsigned int)v125->fields._size;
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  if ( (int)size < 1 )
  {
    v131 = 0;
    goto LABEL_195;
  }
  v127 = this->fields.mListViewObject;
  if ( !v127 )
    goto LABEL_628;
  Instance = (__int64)v127->fields.manager;
  if ( !Instance )
    goto LABEL_628;
  v128 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v128
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v128 - 8) != QuestBoardListViewManager_TypeInfo )
  {
LABEL_632:
    v334 = (QuestBoardListViewItemDraw_o *)sub_B77990(Instance);
    QuestBoardListViewItemDraw__SetItemOfWarBoard(v334, v335, v336);
    return;
  }
  AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt((QuestBoardListViewManager_o *)Instance, size, 0LL);
  if ( v125->fields._size <= (unsigned int)AlphaAnimCnt )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  Instance = (__int64)v125->fields._items->m_Items[AlphaAnimCnt];
  if ( !Instance )
    goto LABEL_628;
  QuestBoardInformaionText__SetTime(
    (QuestBoardInformaionText_o *)Instance,
    &this->fields.mOptionInfoLb,
    &this->fields.mOptionInfoFrameSp,
    v129);
  Instance = (__int64)this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_628;
  BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)Instance, 1.0, 0LL);
  v131 = 1;
  quest_info_k__BackingField->fields.costCalcVal = HIDWORD(methoda.genericContainerHandle);
  quest_info_k__BackingField->fields._fixedCostVal_k__BackingField = (int32_t)methoda.genericMethod;
LABEL_195:
  Instance = (__int64)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_628;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_628;
  Instance = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_628;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_628;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v131, 0LL);
  Instance = (__int64)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_628;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_628;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v131, 0LL);
  QuestBoardListViewItemDraw__SetCostDisp(
    this,
    v349,
    v352 == 2,
    SHIDWORD(methoda.genericContainerHandle),
    (int32_t)methoda.genericMethod,
    *(UnityEngine_Color_o *)(v111 + 24),
    &v355,
    &v354,
    (bool *)&methoda.bitflags + 1,
    (const MethodInfo *)v337);
  v133 = v347->fields._OverwriteBannerId_k__BackingField;
  if ( v133 >= 1 )
  {
    mCostApSp = this->fields.mCostApSp;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    }
    ApSpriteFileName = QuestBoardListViewItemDraw__GetApSpriteFileName(v133, v132);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    Instance = AtlasManager__SetEventUI(mCostApSp, ApSpriteFileName, 0LL);
    if ( !mCostApSp )
      goto LABEL_628;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mCostApSp, Instance & 1, 0LL);
  }
  mChallengeObj = this->fields.mChallengeObj;
  if ( HasFlag
    || (Instance = QuestEntity__HasFlag(v349, 0x4000LL, 0LL), (Instance & 1) != 0)
    || (Instance = QuestEntity__HasFlag(v349, 4LL, 0LL), (Instance & 1) == 0) )
  {
    size = 0LL;
    if ( !mChallengeObj )
      goto LABEL_628;
  }
  else
  {
    size = v349->fields.afterClear != 1;
    if ( !mChallengeObj )
      goto LABEL_628;
  }
  UnityEngine_GameObject__SetActive(mChallengeObj, size, 0LL);
  Instance = (__int64)this->fields.mChallengeObj;
  if ( !Instance )
    goto LABEL_628;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    v137 = QuestBoardListViewItemDraw_TypeInfo;
    if ( v355 )
    {
      if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v137 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v138 = v137->static_fields;
      v139 = &v138->CHALLENGE_OBJ_POS_DOUBLE.fields.x;
      v140 = &v138->CHALLENGE_OBJ_POS_DOUBLE.fields.y;
      v141 = &v138->CHALLENGE_OBJ_POS_DOUBLE.fields.z;
    }
    else
    {
      if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v137 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v145 = v137->static_fields;
      v139 = &v145->CHALLENGE_OBJ_POS_SINGLE.fields.x;
      v140 = &v145->CHALLENGE_OBJ_POS_SINGLE.fields.y;
      v141 = &v145->CHALLENGE_OBJ_POS_SINGLE.fields.z;
    }
    v358.fields.y = *v140;
    v358.fields.x = *v139;
    v358.fields.z = *v141;
    GameObjectExtensions__SetLocalPosition(this->fields.mChallengeObj, v358, 0LL);
    Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          v345,
                          (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !Instance )
      goto LABEL_628;
    Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      v344,
                                      (const MethodInfo_21FB894 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    Instance = QuestEntity__HasFlag(v349, 4LL, 0LL);
    if ( (Instance & 1) == 0 )
      goto LABEL_635;
    if ( !Entity )
      goto LABEL_628;
    if ( EventDetailEntity__isRaidDefeatCount(Entity, 0LL) )
    {
      if ( v356 )
        ClearNum = UserQuestEntity__getClearNum(v356, 0LL);
      else
        ClearNum = 0;
      challengeStrSpr = this->fields.challengeStrSpr;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventUI(challengeStrSpr, (System_String_o *)StringLiteral_22094/*"questboard_crushing"*/, 0LL);
    }
    else
    {
LABEL_635:
      if ( v356 )
        ClearNum = v356->fields.challengeNum;
      else
        ClearNum = 0;
      Instance = (__int64)this->fields.challengeStrSpr;
      if ( !Instance )
        goto LABEL_628;
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_22093/*"questboard_challenge"*/, 0LL);
    }
    p_mChallengeLb = &this->fields.mChallengeLb;
    mChallengeLb = this->fields.mChallengeLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (__int64)LocalizationManager__GetNumberFormat(ClearNum, 0LL);
    if ( !mChallengeLb )
      goto LABEL_628;
    UILabel__set_text(mChallengeLb, (System_String_o *)Instance, 0LL);
    Instance = (__int64)this->fields.challengeStrSpr;
    if ( !Instance )
      goto LABEL_628;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 840LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 848LL));
  }
  else
  {
    p_mChallengeLb = &this->fields.mChallengeLb;
  }
  Instance = (__int64)*p_mChallengeLb;
  if ( !*p_mChallengeLb )
    goto LABEL_628;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v111 + 24), 0LL);
  Instance = (__int64)this->fields.mChallengeObj;
  if ( !Instance )
    goto LABEL_628;
  if ( (mPhaseObj = this->fields.mPhaseObj,
        Instance = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL),
        (Instance & 1) != 0)
    || (Instance = QuestEntity__HasFlag(v349, 0x4000LL, 0LL), (Instance & 1) != 0)
    || (Instance = QuestEntity__HasFlag(v349, 0x10000LL, 0LL), (Instance & 1) != 0)
    || v352 == 2 && (Instance = QuestEntity__HasFlag(v349, 512LL, 0LL), (Instance & 1) != 0)
    || (Instance = QuestEntity__HasFlag(v349, 0x4000000LL, 0LL), (Instance & 1) != 0) )
  {
    size = 0LL;
  }
  else
  {
    Instance = QuestEntity__HasFlag(v349, 0x2000000000LL, 0LL);
    size = v350 & ~(_DWORD)Instance & 1;
  }
  v343 = quest_info_k__BackingField;
  if ( !mPhaseObj )
    goto LABEL_628;
  UnityEngine_GameObject__SetActive(mPhaseObj, size, 0LL);
  Instance = (__int64)this->fields.mPhaseObj;
  if ( !Instance )
    goto LABEL_628;
  v157 = this;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    QuestBoardListViewItemDraw__InitPhase(this, v355, v354, *((bool *)&methoda.bitflags + 1), v158);
    v159 = v349->fields.afterClear;
    CurrentPhaseInfo = MapControl_QuestInfo__GetCurrentPhaseInfo(quest_info_k__BackingField, 0LL);
    if ( !CurrentPhaseInfo )
      goto LABEL_293;
    ReferToQuestPhase = MapControl_PhaseInfo__GetReferToQuestPhase(CurrentPhaseInfo, 0LL);
    if ( ReferToQuestPhase < 1 )
      goto LABEL_293;
    v162 = ReferToQuestPhase;
    if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
    }
    Instance = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !Instance )
      goto LABEL_628;
    QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Instance, v162, 0LL);
    if ( QuestInfo )
    {
      v164 = QuestInfo;
      v165 = MapControl_QuestInfo__GetPhaseMax(QuestInfo, 0LL);
      p_questPhase = &v164->fields.questPhase;
    }
    else
    {
LABEL_293:
      v167 = MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0LL);
      p_questPhase = &quest_info_k__BackingField->fields.questPhase;
      v165 = v167;
    }
    Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
    v168 = WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr);
    v348 = *p_questPhase;
    if ( (v168 & 0x400) != 0 )
    {
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
        v168 = WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr);
      }
      v169 = v168 & 0x400;
    }
    else
    {
      v169 = 0;
    }
    v170 = *(struct QuestBoardListViewItemDraw_StaticFields **)(Instance + 184);
    PHASE_NORMAL_MAX = v170->PHASE_NORMAL_MAX;
    v172 = v165 > PHASE_NORMAL_MAX;
    if ( v169 && !*(_DWORD *)(Instance + 224) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
      v170 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
      PHASE_NORMAL_MAX = v170->PHASE_NORMAL_MAX;
      v169 = WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400;
    }
    v173 = v159 == 2 && v352 != 2;
    if ( v165 <= PHASE_NORMAL_MAX )
    {
      if ( v169 && !*(_DWORD *)(Instance + 224) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
        v170 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
      }
      p_QUEST_BOARD_PHASE_INTERVAL = &v170->QUEST_BOARD_PHASE_INTERVAL;
    }
    else
    {
      if ( v169 && !*(_DWORD *)(Instance + 224) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
        v170 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
      }
      p_QUEST_BOARD_PHASE_INTERVAL = &v170->QUEST_BOARD_PHASE_EX_INTERVAL;
    }
    v175 = 0;
    v176 = v165 - 1;
    v177 = v159 - 3;
    v178 = -*p_QUEST_BOARD_PHASE_INTERVAL;
    while ( 1 )
    {
      if ( (*(_BYTE *)(Instance + 307) & 4) != 0 && !*(_DWORD *)(Instance + 224) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
      }
      if ( v175 >= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 32LL) )
        break;
      mPhaseSp = v157->fields.mPhaseSp;
      if ( !mPhaseSp )
        goto LABEL_628;
      if ( v175 >= mPhaseSp->max_length )
        goto LABEL_630;
      v180 = &mPhaseSp->obj.klass + v175;
      v181 = (UISprite_o *)v180[4];
      if ( !v181 )
        goto LABEL_628;
      Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v180[4], 0LL);
      if ( !Instance )
        goto LABEL_628;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v175 < v165, 0LL);
      if ( v175 < v165 )
      {
        PhaseArrowSpriteName = QuestBoardListViewItemDraw__GetPhaseArrowSpriteName(
                                 v182,
                                 v172,
                                 (v175 < v348) & (unsigned __int8)v350,
                                 v176 == v175,
                                 v173,
                                 (v176 == v175) & (unsigned __int8)(v177 < 2),
                                 v183);
        UISprite__set_spriteName(v181, PhaseArrowSpriteName, 0LL);
        if ( v352 == 2 )
          *(UnityEngine_Color_o *)&v185 = UnityEngine_Color__get_gray(0LL);
        else
          *(UnityEngine_Color_o *)&v185 = UnityEngine_Color__get_white(0LL);
        UIWidget__set_color((UIWidget_o *)v181, *(UnityEngine_Color_o *)&v185, 0LL);
        PhaseArrowIntervalSize = QuestBoardListViewItemDraw__GetPhaseArrowIntervalSize(
                                   v189,
                                   v172,
                                   v176 == v175 && v177 < 2,
                                   v190);
        Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v181, 0LL);
        if ( !Instance )
          goto LABEL_628;
        v178 += PhaseArrowIntervalSize;
        v359.fields.x = (float)v178;
        v359.fields.y = 0.0;
        v359.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v359, 0LL);
        ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v181->klass->vtable._33_MakePixelPerfect.method)(
          v181,
          v181->klass->vtable._34_get_minWidth.methodPtr);
      }
      Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
      ++v175;
    }
  }
  Instance = (__int64)v157->fields.mDamageRecordSp;
  if ( !Instance )
    goto LABEL_628;
  v192 = v157;
  v193 = v349;
  v194 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  Instance = QuestEntity__HasFlag(v349, 0x4000000LL, 0LL);
  v195 = v345;
  if ( !v194 )
    goto LABEL_628;
  UnityEngine_GameObject__SetActive(v194, Instance & 1, 0LL);
  Instance = (__int64)v192->fields.mDamageRecordSp;
  if ( !Instance )
    goto LABEL_628;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_628;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    mDamageRecordSp = v192->fields.mDamageRecordSp;
    v197 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v197 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_DAMAGE_RECODE_NAME = v197->static_fields->QUEST_BOARD_DAMAGE_RECODE_NAME;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetBanner(mDamageRecordSp, QUEST_BOARD_DAMAGE_RECODE_NAME, 0LL);
    v199 = (UserQuestRecordMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        v345,
                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserQuestRecordMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    if ( !v199 )
      goto LABEL_628;
    MaxTurnDamage = (void (__fastcall *)())UserQuestRecordMaster__GetMaxTurnDamage(v199, Instance, v349->fields.id, 0LL);
    mDamageRecordLb = v192->fields.mDamageRecordLb;
    methoda.methodPointer = MaxTurnDamage;
    v203 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &methoda, v202);
    Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_23975/*"{0:#,0}"*/, v203, 0LL);
    if ( !mDamageRecordLb )
      goto LABEL_628;
    UILabel__set_text(mDamageRecordLb, (System_String_o *)Instance, 0LL);
    Instance = (__int64)v192->fields.mDamageRecordSp;
    if ( !Instance )
      goto LABEL_628;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v351 + 24), 0LL);
    Instance = (__int64)v192->fields.mDamageRecordLb;
    if ( !Instance )
      goto LABEL_628;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v351 + 24), 0LL);
  }
  Instance = (__int64)v192->fields.mKnockdownRecordSp;
  if ( !Instance )
    goto LABEL_628;
  v204 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  Instance = QuestEntity__HasFlag(v349, 0x2000000000LL, 0LL);
  if ( !v204 )
    goto LABEL_628;
  UnityEngine_GameObject__SetActive(v204, Instance & 1, 0LL);
  Instance = (__int64)v192->fields.mKnockdownRecordSp;
  if ( !Instance )
    goto LABEL_628;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_628;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    mKnockdownRecordSp = v192->fields.mKnockdownRecordSp;
    v206 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v206 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_KNOCKDOWN_RECODE_NAME = v206->static_fields->QUEST_BOARD_KNOCKDOWN_RECODE_NAME;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetBanner(mKnockdownRecordSp, QUEST_BOARD_KNOCKDOWN_RECODE_NAME, 0LL);
    v208 = sub_B77694(QuestKnockdownInfo_TypeInfo);
    QuestKnockdownInfo___ctor((QuestKnockdownInfo_o *)v208, 0LL);
    v209 = (UserQuestRecordMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        v345,
                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserQuestRecordMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    if ( !v209 )
      goto LABEL_628;
    UserQuestRecordMaster__GetKnockdownRecordinfo(v209, Instance, v349->fields.id, (QuestKnockdownInfo_o *)v208, 0LL);
    mKnockdownRecordCountLb = v192->fields.mKnockdownRecordCountLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11103/*"QUEST_BOARD_KNOCKDOWN_COUNT"*/, 0LL);
    if ( !v208 )
      goto LABEL_628;
    v212 = (System_String_o *)Instance;
    methoda.methodPointer = *(Il2CppMethodPointer *)(v208 + 16);
    v213 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &methoda, v211);
    Instance = (__int64)System_String__Format(v212, v213, 0LL);
    if ( !mKnockdownRecordCountLb )
      goto LABEL_628;
    UILabel__set_text(mKnockdownRecordCountLb, (System_String_o *)Instance, 0LL);
    mKnockdownRecordDamageLb = v192->fields.mKnockdownRecordDamageLb;
    v215 = LocalizationManager__Get((System_String_o *)StringLiteral_11104/*"QUEST_BOARD_KNOCKDOWN_DAMAGE"*/, 0LL);
    methoda.name = *(const char **)(v208 + 24);
    v217 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &methoda.name, v216);
    Instance = (__int64)System_String__Format(v215, v217, 0LL);
    if ( !mKnockdownRecordDamageLb )
      goto LABEL_628;
    UILabel__set_text(mKnockdownRecordDamageLb, (System_String_o *)Instance, 0LL);
    mKnockdownRecordPlusLb = v192->fields.mKnockdownRecordPlusLb;
    v219 = LocalizationManager__Get((System_String_o *)StringLiteral_11106/*"QUEST_BOARD_KNOCKDOWN_PLUS"*/, 0LL);
    v220 = (_QWORD **)Method_System_Array_Empty_object___;
    v221 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
    v222 = *(_WORD *)(v221 + 306);
    if ( (v222 & 1) == 0 )
    {
      sub_B0F2C4(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
      v222 = *(_WORD *)(v221 + 306);
    }
    if ( (v222 & 0x400) != 0 )
    {
      v223 = *v220[6];
      if ( (*(_BYTE *)(v223 + 306) & 1) == 0 )
        sub_B0F2C4(*v220[6]);
      if ( !*(_DWORD *)(v223 + 224) )
      {
        v224 = *v220[6];
        if ( (*(_BYTE *)(v224 + 306) & 1) == 0 )
          sub_B0F2C4(*v220[6]);
        j_il2cpp_runtime_class_init_0(v224);
      }
    }
    v225 = *v220[6];
    if ( (*(_BYTE *)(v225 + 306) & 1) == 0 )
      sub_B0F2C4(*v220[6]);
    Instance = (__int64)System_String__Format_44980660(v219, **(System_Object_array ***)(v225 + 184), 0LL);
    v193 = v349;
    if ( !mKnockdownRecordPlusLb )
      goto LABEL_628;
    UILabel__set_text(mKnockdownRecordPlusLb, (System_String_o *)Instance, 0LL);
    mKnockdownRecordDamageNameLb = v192->fields.mKnockdownRecordDamageNameLb;
    v227 = LocalizationManager__Get((System_String_o *)StringLiteral_11105/*"QUEST_BOARD_KNOCKDOWN_DAMAGE_NAME"*/, 0LL);
    v228 = (_QWORD **)Method_System_Array_Empty_object___;
    v229 = v227;
    v230 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
    v231 = *(_WORD *)(v230 + 306);
    if ( (v231 & 1) == 0 )
    {
      sub_B0F2C4(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
      v231 = *(_WORD *)(v230 + 306);
    }
    if ( (v231 & 0x400) != 0 )
    {
      v232 = *v228[6];
      if ( (*(_BYTE *)(v232 + 306) & 1) == 0 )
        sub_B0F2C4(*v228[6]);
      if ( !*(_DWORD *)(v232 + 224) )
      {
        v233 = *v228[6];
        if ( (*(_BYTE *)(v233 + 306) & 1) == 0 )
          sub_B0F2C4(*v228[6]);
        j_il2cpp_runtime_class_init_0(v233);
      }
    }
    v234 = *v228[6];
    if ( (*(_BYTE *)(v234 + 306) & 1) == 0 )
      sub_B0F2C4(*v228[6]);
    Instance = (__int64)System_String__Format_44980660(v229, **(System_Object_array ***)(v234 + 184), 0LL);
    if ( !mKnockdownRecordDamageNameLb )
      goto LABEL_628;
    UILabel__set_text(mKnockdownRecordDamageNameLb, (System_String_o *)Instance, 0LL);
    Instance = (__int64)v192->fields.mKnockdownRecordDamageLb;
    v195 = v345;
    if ( !Instance )
      goto LABEL_628;
    UILabel__SetCondensedScale(
      (UILabel_o *)Instance,
      QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_KNOCKDOWN_DAMAGE_WIDTH,
      0LL);
    Instance = (__int64)v192->fields.mKnockdownRecordDamageLb;
    if ( !Instance )
      goto LABEL_628;
    if ( *(__int64 *)(v208 + 24) <= 0 )
    {
      UIWidget__set_pivot((UIWidget_o *)Instance, 3, 0LL);
      Instance = (__int64)v192->fields.mKnockdownRecordDamageLb;
      if ( !Instance )
        goto LABEL_628;
      Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !v192->fields.mKnockdownRecordPlusLb )
        goto LABEL_628;
      v235 = (UnityEngine_GameObject_o *)Instance;
      v238 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v192->fields.mKnockdownRecordPlusLb, 0LL);
      LocalPositionX = GameObjectExtensions__GetLocalPositionX(v238, 0LL);
      v240 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v240 = QuestBoardListViewItemDraw_TypeInfo;
      }
      QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX = LocalPositionX
                                        + (float)v240->static_fields->QUEST_BOARD_KNOCKDOWN_ZERO_DAMAGE_POSX;
    }
    else
    {
      UIWidget__set_pivot((UIWidget_o *)Instance, 5, 0LL);
      Instance = (__int64)v192->fields.mKnockdownRecordDamageLb;
      if ( !Instance )
        goto LABEL_628;
      v235 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      v236 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v236 = QuestBoardListViewItemDraw_TypeInfo;
      }
      QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX = (float)v236->static_fields->QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX;
    }
    GameObjectExtensions__SetLocalPositionX(v235, QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX, 0LL);
    Instance = (__int64)v192->fields.mKnockdownRecordSp;
    if ( !Instance )
      goto LABEL_628;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v351 + 24), 0LL);
    Instance = (__int64)v192->fields.mKnockdownRecordDamageLb;
    if ( !Instance )
      goto LABEL_628;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v351 + 24), 0LL);
    Instance = (__int64)v192->fields.mKnockdownRecordDamageNameLb;
    if ( !Instance )
      goto LABEL_628;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v351 + 24), 0LL);
    Instance = (__int64)v192->fields.mKnockdownRecordPlusLb;
    if ( !Instance )
      goto LABEL_628;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v351 + 24), 0LL);
    Instance = (__int64)v192->fields.mKnockdownRecordCountLb;
    if ( !Instance )
      goto LABEL_628;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v351 + 24), 0LL);
  }
  id = v193->fields.id;
  if ( (BYTE3(QuestInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestInformationComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
  }
  if ( !QuestInformationComponent__IsDisplayQuestInformation(id, 0LL) )
    goto LABEL_435;
  Instance = (__int64)v192->fields.mQuestInfoBtn;
  if ( !Instance )
    goto LABEL_628;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4387463 )
  {
    sub_B775C4(&TerminalSceneComponent_TypeInfo);
    byte_4387463 = 1;
  }
  v242 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v243 = v349;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v242 = TerminalSceneComponent_TypeInfo;
    }
  }
  else
  {
    v243 = v349;
  }
  Instance = (__int64)v242->static_fields->mInstance;
  if ( !Instance )
    goto LABEL_628;
  if ( TerminalSceneComponent__QuestInfoShowing((TerminalSceneComponent_o *)Instance, 0LL) == v243->fields.id )
  {
    Instance = (__int64)v192->fields.mQuestInfoShowing;
    if ( !Instance )
      goto LABEL_628;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  }
  Instance = (__int64)v192->fields.mQuestInfoBtn;
  if ( !Instance )
LABEL_628:
    sub_B7769C(Instance, size);
  Instance = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                        (UnityEngine_GameObject_o *)Instance,
                        (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
  v244 = Instance;
  if ( v352 == 2 )
  {
    Instance = QuestEntity__HasFlag(v243, 0x400000000000000LL, 0LL);
    size = v341 & (unsigned int)Instance & 1;
    if ( !v244 )
      goto LABEL_628;
  }
  else
  {
    size = 1LL;
    if ( !Instance )
      goto LABEL_628;
  }
  (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v244 + 392LL))(
    v244,
    size,
    *(_QWORD *)(*(_QWORD *)v244 + 400LL));
LABEL_435:
  mOptionRestrinctionLb = v192->fields.mOptionRestrinctionLb;
  Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  }
  if ( !mOptionRestrinctionLb )
    goto LABEL_628;
  UILabel__set_fontSize(
    mOptionRestrinctionLb,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_DEFAULT_FONT_SIZE,
    0LL);
  Instance = (__int64)v192->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_628;
  UILabel__set_overflowMethod((UILabel_o *)Instance, 2, 0LL);
  Instance = (__int64)v192->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_628;
  v246 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  one = UnityEngine_Vector3__get_one(0LL);
  GameObjectExtensions__SetLocalScale(v246, one, 0LL);
  Instance = (__int64)v192->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_628;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_628;
  Instance = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_628;
  Component_srcLineSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_559;
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          Component_srcLineSprite,
                                                          (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewMultiLimitedFormation___);
  if ( !Component_srcLineSprite )
    goto LABEL_559;
  v249 = (UnityEngine_Behaviour_o *)Component_srcLineSprite;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_srcLineSprite, 0, 0LL);
  Component_srcLineSprite = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          v195,
                                                          (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Component_srcLineSprite )
    goto LABEL_559;
  Component_srcLineSprite = (UnityEngine_GameObject_o *)QuestPhaseDetailMaster__TryGetEntity(
                                                          (QuestPhaseDetailMaster_o *)Component_srcLineSprite,
                                                          (QuestPhaseDetailEntity_o **)&methoda.parameters,
                                                          v343->fields.questId,
                                                          questPhase,
                                                          0LL);
  if ( ((unsigned __int8)Component_srcLineSprite & 1) == 0 )
    goto LABEL_463;
  if ( !methoda.parameters )
    goto LABEL_559;
  if ( !*((_QWORD *)methoda.parameters + 5) )
    goto LABEL_463;
  Component_srcLineSprite = (UnityEngine_GameObject_o *)v192->fields.mOptionRestrinctionLb;
  if ( !Component_srcLineSprite )
    goto LABEL_559;
  UILabel__set_maxLineCount((UILabel_o *)Component_srcLineSprite, 0, 0LL);
  if ( !methoda.parameters )
    goto LABEL_559;
  v251 = *((_QWORD *)methoda.parameters + 5);
  if ( !v251 )
    goto LABEL_559;
  v252 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v251 + 32);
  if ( v252
    && (Component_srcLineSprite = (UnityEngine_GameObject_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                v252,
                                                                (const MethodInfo_1D3D5E4 *)Method_System_Linq_Enumerable_ToArray_QuestPhaseDetailEntity_BoardInfo___)) != 0LL
    && (klass = Component_srcLineSprite[1].klass,
        v254 = (QuestPhaseDetailEntity_BoardInfo_array *)Component_srcLineSprite,
        klass) )
  {
    if ( (_DWORD)klass == 1 )
    {
      monitor = Component_srcLineSprite[1].monitor;
      if ( !monitor )
        goto LABEL_559;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)monitor[2];
      if ( !Component_srcLineSprite )
        goto LABEL_559;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)QuestPhaseDetailEntity_BoardInfo_TextInfo__SetText(
                                                              (QuestPhaseDetailEntity_BoardInfo_TextInfo_o *)Component_srcLineSprite,
                                                              v192->fields.mOptionRestrinctionLb,
                                                              (float)v192->fields.restrictionDefaultWidth,
                                                              0LL);
      if ( !v254->max_length )
        goto LABEL_629;
      v256 = v254->m_Items[0];
      if ( !v256 )
        goto LABEL_559;
      v257 = (char)Component_srcLineSprite;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)v256->fields.image;
      if ( !Component_srcLineSprite )
        goto LABEL_559;
      v258 = QuestPhaseDetailEntity_BoardInfo_ImageInfo__SetImage(
               (QuestPhaseDetailEntity_BoardInfo_ImageInfo_o *)Component_srcLineSprite,
               v192->fields.mOptionRestrinctionSp,
               0LL);
      v259 = 0;
    }
    else
    {
      UnityEngine_Behaviour__set_enabled(v249, 1, 0LL);
      if ( QuestEntity__HasFlag(v349, 0x400000000000000LL, 0LL) )
      {
        v328 = QuestBoardListViewItemDraw_TypeInfo;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v328 = QuestBoardListViewItemDraw_TypeInfo;
        }
        p_RESTRICTION_FONT_WIDTH_ALLOUT = &v328->static_fields->RESTRICTION_FONT_WIDTH_ALLOUT;
      }
      else
      {
        p_RESTRICTION_FONT_WIDTH_ALLOUT = &v192->fields.restrictionDefaultWidth;
      }
      QuestBoardListViewMultiLimitedFormation__Init(
        (QuestBoardListViewMultiLimitedFormation_o *)v249,
        v192->fields.mOptionRestrinctionLb,
        v192->fields.mOptionRestrinctionSp,
        v254,
        (float)*p_RESTRICTION_FONT_WIDTH_ALLOUT,
        0LL);
      v259 = 1;
      v257 = 1;
      v258 = 1;
    }
  }
  else
  {
LABEL_463:
    v257 = QuestBoardListViewItemDraw__SetRestrictionLabelFromQuestRestrictionMaster(
             v192,
             v343->fields.questId,
             questPhase,
             v250);
    v259 = 0;
    v258 = 0;
  }
  if ( QuestEntity__HasFlag(v349, 0x40000000LL, 0LL) )
  {
    Component_srcLineSprite = (UnityEngine_GameObject_o *)v192->fields.mMultiSecondBattleInformation;
    if ( !Component_srcLineSprite )
      goto LABEL_559;
    p_mCostConsumeBattleWinSp = (UnityEngine_GameObject_o **)&v192->fields.mCostConsumeBattleWinSp;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_srcLineSprite,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v192->fields.mCostConsumeBattleWinSp,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UISprite__Add__);
    v261 = 1;
  }
  else
  {
    v261 = 0;
    p_mCostConsumeBattleWinSp = (UnityEngine_GameObject_o **)&v192->fields.mCostConsumeBattleWinSp;
  }
  Component_srcLineSprite = *p_mCostConsumeBattleWinSp;
  if ( !*p_mCostConsumeBattleWinSp )
    goto LABEL_559;
  Component_srcLineSprite = UnityEngine_Component__get_gameObject(
                              (UnityEngine_Component_o *)Component_srcLineSprite,
                              0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_559;
  UnityEngine_GameObject__SetActive(Component_srcLineSprite, v261, 0LL);
  Component_srcLineSprite = *p_mCostConsumeBattleWinSp;
  if ( !*p_mCostConsumeBattleWinSp )
    goto LABEL_559;
  UIWidget__set_color((UIWidget_o *)Component_srcLineSprite, *(UnityEngine_Color_o *)(v351 + 24), 0LL);
  if ( methoda.parameters
    && QuestPhaseDetailEntity__HasFlag((QuestPhaseDetailEntity_o *)methoda.parameters, 0x400000LL, 0LL) )
  {
    mOptionPreBattleSp = v192->fields.mOptionPreBattleSp;
    v263 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v263 = QuestBoardListViewItemDraw_TypeInfo;
    }
    PRE_BATTLE_ORGANIZATION = v263->static_fields->PRE_BATTLE_ORGANIZATION;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetBanner(mOptionPreBattleSp, PRE_BATTLE_ORGANIZATION, 0LL);
    Component_srcLineSprite = (UnityEngine_GameObject_o *)v192->fields.mMultiSecondBattleInformation;
    if ( !Component_srcLineSprite )
      goto LABEL_559;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_srcLineSprite,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v192->fields.mOptionPreBattleSp,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UISprite__Add__);
    v265 = 1;
  }
  else
  {
    v265 = 0;
  }
  Component_srcLineSprite = (UnityEngine_GameObject_o *)v192->fields.mOptionPreBattleSp;
  if ( !Component_srcLineSprite )
    goto LABEL_559;
  Component_srcLineSprite = UnityEngine_Component__get_gameObject(
                              (UnityEngine_Component_o *)Component_srcLineSprite,
                              0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_559;
  UnityEngine_GameObject__SetActive(Component_srcLineSprite, v265, 0LL);
  v364.fields.g = 0.078431;
  v364.fields.r = 0.78039;
  v364.fields.a = 1.0;
  v364.fields.b = 0.078431;
  UnityEngine_Color___ctor(v364, v266, v267, v268, v269, (const MethodInfo *)&methoda.klass);
  v274 = (UIWidget_o *)v192->fields.mOptionPreBattleSp;
  klass_high = HIDWORD(methoda.klass);
  methodPointer = (int)methoda.klass;
  return_type = (int)methoda.return_type;
  if ( v352 == 2 )
  {
    v365.fields.r = *(float *)&methoda.klass * 0.5;
    v365.fields.g = *((float *)&methoda.klass + 1) * 0.5;
    v365.fields.b = *(float *)&methoda.return_type * 0.5;
    v365.fields.a = 1.0;
    methoda.methodPointer = 0LL;
    methoda.invoker_method = 0LL;
    UnityEngine_Color___ctor(v365, v270, v271, v272, v273, &methoda);
    klass_high = HIDWORD(methoda.methodPointer);
    methodPointer = (int)methoda.methodPointer;
    invoker_method_high = HIDWORD(methoda.invoker_method);
    return_type = (int)methoda.invoker_method;
    if ( !v274 )
      goto LABEL_559;
  }
  else
  {
    invoker_method_high = HIDWORD(methoda.return_type);
    if ( !v274 )
      goto LABEL_559;
  }
  UIWidget__set_color(v274, *(UnityEngine_Color_o *)&methodPointer, 0LL);
  mMultiSecondBattleInformation = v192->fields.mMultiSecondBattleInformation;
  if ( !mMultiSecondBattleInformation )
    goto LABEL_559;
  if ( mMultiSecondBattleInformation->fields._size >= 2 )
  {
    Component_srcLineSprite = (UnityEngine_GameObject_o *)v192->fields.secondBattleInformation;
    if ( !Component_srcLineSprite )
      goto LABEL_559;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_srcLineSprite, 1, 0LL);
    Component_srcLineSprite = (UnityEngine_GameObject_o *)v192->fields.secondBattleInformation;
    if ( !Component_srcLineSprite )
      goto LABEL_559;
    QuestBoardListViewMultiSecondBattleInformation__Init(
      (QuestBoardListViewMultiSecondBattleInformation_o *)Component_srcLineSprite,
      v192->fields.mMultiSecondBattleInformation,
      0LL);
  }
  Component_srcLineSprite = (UnityEngine_GameObject_o *)v192->fields.mOptionRestrinctionLb;
  if ( !Component_srcLineSprite )
    goto LABEL_559;
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)Component_srcLineSprite,
                                                          0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_559;
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                          (UnityEngine_Transform_o *)Component_srcLineSprite,
                                                          0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_559;
  Component_srcLineSprite = UnityEngine_Component__get_gameObject(
                              (UnityEngine_Component_o *)Component_srcLineSprite,
                              0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_559;
  UnityEngine_GameObject__SetActive(Component_srcLineSprite, v257 || v258, 0LL);
  Component_srcLineSprite = (UnityEngine_GameObject_o *)QuestEntity__HasFlag(v349, 0x400000000000000LL, 0LL);
  if ( !v192->fields.mOptionRestrinctionLb )
    goto LABEL_559;
  v280 = (char)Component_srcLineSprite;
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)v192->fields.mOptionRestrinctionLb,
                                                          0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_559;
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                          (UnityEngine_Transform_o *)Component_srcLineSprite,
                                                          0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_559;
  v281 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
  v282 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (v280 & 1) == 0 )
  {
    if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v282 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v281, v282->static_fields->RESTRICTION_POS_DEFAULT, 0LL);
    v287 = v192->fields.mOptionRestrinctionLb;
    if ( !v287 )
      goto LABEL_559;
    if ( v287->fields.mWidth <= v192->fields.restrictionDefaultWidth )
    {
      mSpacingX = v287->fields.mSpacingX;
      v290 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v290 = QuestBoardListViewItemDraw_TypeInfo;
      }
      RESTRICTION_FONT_SPACING_DEFAULT = (unsigned int)v290->static_fields->RESTRICTION_FONT_SPACING_DEFAULT;
      if ( mSpacingX == (_DWORD)RESTRICTION_FONT_SPACING_DEFAULT )
      {
        if ( (v259 & 1) != 0 )
          goto LABEL_530;
        goto LABEL_527;
      }
      if ( (BYTE3(v290->vtable._0_Equals.methodPtr) & 4) != 0 && !v290->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v290);
        LODWORD(RESTRICTION_FONT_SPACING_DEFAULT) = QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_FONT_SPACING_DEFAULT;
      }
    }
    else
    {
      v288 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v288 = QuestBoardListViewItemDraw_TypeInfo;
      }
      LODWORD(RESTRICTION_FONT_SPACING_DEFAULT) = v288->static_fields->RESTRICTION_FONT_SPACING_MIN;
    }
    QuestBoardListViewItemDraw__SetRestrinctionLabelSpacingX(v192, RESTRICTION_FONT_SPACING_DEFAULT, v286);
    if ( (v259 & 1) != 0 )
      goto LABEL_530;
LABEL_527:
    Component_srcLineSprite = (UnityEngine_GameObject_o *)v192->fields.mOptionRestrinctionLb;
    if ( !Component_srcLineSprite )
      goto LABEL_559;
    restrictionDefaultWidth = v192->fields.restrictionDefaultWidth;
LABEL_529:
    UILabel__SetCondensedScale((UILabel_o *)Component_srcLineSprite, restrictionDefaultWidth, 0LL);
    goto LABEL_530;
  }
  if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v282 = QuestBoardListViewItemDraw_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition(v281, v282->static_fields->RESTRICTION_POS_ALLOUT, 0LL);
  Component_srcLineSprite = (UnityEngine_GameObject_o *)v192->fields.mOptionRestrinctionLb;
  if ( !Component_srcLineSprite )
    goto LABEL_559;
  UILabel__set_fontSize(
    (UILabel_o *)Component_srcLineSprite,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_FONT_SIZE_ALLOUT,
    0LL);
  QuestBoardListViewItemDraw__SetRestrinctionLabelSpacingX(
    v192,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_FONT_SPACING_DEFAULT,
    v283);
  if ( (v259 & 1) == 0 )
  {
    Component_srcLineSprite = (UnityEngine_GameObject_o *)QuestBoardListViewItemDraw_TypeInfo;
    v284 = (UnityEngine_GameObject_o *)v192->fields.mOptionRestrinctionLb;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    }
    if ( !v284 )
      goto LABEL_559;
    Component_srcLineSprite = v284;
    restrictionDefaultWidth = QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_FONT_WIDTH_ALLOUT;
    goto LABEL_529;
  }
LABEL_530:
  Component_srcLineSprite = (UnityEngine_GameObject_o *)v192->fields.mOptionRestrinctionLb;
  if ( !Component_srcLineSprite )
    goto LABEL_559;
  UIWidget__set_color((UIWidget_o *)Component_srcLineSprite, *(UnityEngine_Color_o *)(v351 + 24), 0LL);
  if ( v352 == 2 )
  {
    mOptionRestrinctionSp = (UIWidget_o *)v192->fields.mOptionRestrinctionSp;
    if ( !mOptionRestrinctionSp )
      goto LABEL_559;
    v366.fields.a = mOptionRestrinctionSp->fields.mColor.fields.a;
    v366.fields.r = mOptionRestrinctionSp->fields.mColor.fields.r * 0.5;
    v366.fields.g = mOptionRestrinctionSp->fields.mColor.fields.g * 0.5;
    v366.fields.b = mOptionRestrinctionSp->fields.mColor.fields.b * 0.5;
    methoda.methodPointer = 0LL;
    methoda.invoker_method = 0LL;
    UnityEngine_Color___ctor(v366, 0.5, v291, v292, v293, &methoda);
    *(_QWORD *)&v367.fields.r = methoda.methodPointer;
    *(_QWORD *)&v367.fields.b = methoda.invoker_method;
    UIWidget__set_color(mOptionRestrinctionSp, v367, 0LL);
  }
  Component_srcLineSprite = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          v345,
                                                          (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Component_srcLineSprite )
    goto LABEL_559;
  v295 = v340;
  v296 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Component_srcLineSprite, v349->fields.id, questPhase, 0LL);
  v297 = v296;
  if ( v296 )
  {
    classIds = v296->fields.classIds;
    if ( classIds )
      LODWORD(classIds) = classIds->max_length != 0;
  }
  else
  {
    LODWORD(classIds) = 0;
  }
  v299 = ((unsigned int)classIds & v295) == 0;
  if ( ((unsigned int)classIds & v295) != 0 && v352 == 2 )
    v299 = QuestEntity__HasFlag(v349, 2048LL, 0LL);
  Component_srcLineSprite = v192->fields.mClassIconRoot;
  if ( !Component_srcLineSprite )
    goto LABEL_559;
  UnityEngine_GameObject__SetActive(Component_srcLineSprite, !v299, 0LL);
  Component_srcLineSprite = (UnityEngine_GameObject_o *)v192->fields.mClassStrSp;
  if ( !Component_srcLineSprite )
    goto LABEL_559;
  UIWidget__set_color((UIWidget_o *)Component_srcLineSprite, *(UnityEngine_Color_o *)(v351 + 24), 0LL);
  if ( !v299 )
  {
    if ( !v297 )
      goto LABEL_559;
    mClassIcons = v192->fields.mClassIcons;
    if ( !mClassIcons )
      goto LABEL_559;
    max_length = mClassIcons->max_length;
    if ( max_length >= 1 )
    {
      v302 = v297->fields.classIds;
      v303 = 1;
      while ( 1 )
      {
        v304 = v303 - 1;
        if ( v303 - 1 >= mClassIcons->max_length )
          break;
        v305 = v304;
        v306 = (__int64)mClassIcons + 8 * v304;
        v307 = *(UnityEngine_Component_o **)(v306 + 32);
        if ( !v307 )
          goto LABEL_559;
        Component_srcLineSprite = UnityEngine_Component__get_gameObject(*(UnityEngine_Component_o **)(v306 + 32), 0LL);
        if ( !v302 )
          goto LABEL_559;
        if ( !Component_srcLineSprite )
          goto LABEL_559;
        UnityEngine_GameObject__SetActive(Component_srcLineSprite, (int)v305 < (signed int)v302->max_length, 0LL);
        Component_srcLineSprite = UnityEngine_Component__get_gameObject(v307, 0LL);
        if ( !Component_srcLineSprite )
          goto LABEL_559;
        Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(
                                                                Component_srcLineSprite,
                                                                0LL);
        if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
        {
          if ( (unsigned int)v305 >= v302->max_length )
            break;
          ServantClassIconComponent__Set((ServantClassIconComponent_o *)v307, v302->m_Items[v305 + 1], 0LL);
          ServantClassIconComponent__SetColor(
            (ServantClassIconComponent_o *)v307,
            *(UnityEngine_Color_o *)(v351 + 24),
            0LL);
        }
        if ( v303 >= max_length )
          goto LABEL_560;
        mClassIcons = v192->fields.mClassIcons;
        ++v303;
        if ( !mClassIcons )
          goto LABEL_559;
      }
LABEL_629:
      v332 = sub_B776C8(Component_srcLineSprite);
      sub_B77668(v332, 0LL);
    }
  }
LABEL_560:
  if ( v344 >= 1 )
  {
    eventTarget = (UnityEngine_Object_o *)v192->fields.eventTarget;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(eventTarget, 0LL, 0LL) )
    {
      eventTargetComponent = (UnityEngine_Object_o *)v192->fields.eventTargetComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(eventTargetComponent, 0LL, 0LL) )
      {
        Component_srcLineSprite = v192->fields.mQuestInfoBtn;
        if ( !Component_srcLineSprite )
          goto LABEL_559;
        if ( UnityEngine_GameObject__get_activeSelf(Component_srcLineSprite, 0LL) )
        {
          Component_srcLineSprite = (UnityEngine_GameObject_o *)v192->fields.eventTargetComponent;
          if ( !Component_srcLineSprite )
            goto LABEL_559;
          BoardOptionEventTargetComponent__DestroyList(
            (BoardOptionEventTargetComponent_o *)Component_srcLineSprite,
            0LL);
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          Component_srcLineSprite = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ViewEnemyMaster___);
          if ( !Component_srcLineSprite )
            goto LABEL_559;
          EntityListFromQuestId = ViewEnemyMaster__GetEntityListFromQuestId(
                                    (ViewEnemyMaster_o *)Component_srcLineSprite,
                                    v343->fields.questId,
                                    0LL);
          if ( EntityListFromQuestId
            && (v311 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromQuestId,
                *(_QWORD *)&EntityListFromQuestId->max_length) )
          {
            v312 = QuestBoardListViewItemDraw___c_TypeInfo;
            if ( (BYTE3(QuestBoardListViewItemDraw___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !QuestBoardListViewItemDraw___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw___c_TypeInfo);
              v312 = QuestBoardListViewItemDraw___c_TypeInfo;
            }
            v313 = v312->static_fields;
            _9__315_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v313->__9__315_1;
            if ( !_9__315_1 )
            {
              if ( (BYTE3(v312->vtable._0_Equals.methodPtr) & 4) != 0 && !v312->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v312);
                v313 = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
              }
              v315 = (Il2CppObject *)v313->__9;
              _9__315_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_ViewEnemyEntity__int__TypeInfo);
              System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
                _9__315_1,
                v315,
                Method_QuestBoardListViewItemDraw___c__SetItemOfQuest_b__315_1__,
                (const MethodInfo_29E9E70 *)Method_System_Func_ViewEnemyEntity__int___ctor__);
              v316 = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
              v316->__9__315_1 = (struct System_Func_ViewEnemyEntity__int__o *)_9__315_1;
              sub_B77560(
                (BattleServantConfConponent_o *)&v316->__9__315_1,
                (System_Int32_array **)_9__315_1,
                v317,
                v318,
                v319,
                v320,
                v321,
                v322);
            }
            v323 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                          v311,
                                                                          (System_Func_TSource__TResult__o *)_9__315_1,
                                                                          (const MethodInfo_1D38B10 *)Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___);
            Component_srcLineSprite = (UnityEngine_GameObject_o *)System_Linq_Enumerable__ToArray_int_(
                                                                    v323,
                                                                    (const MethodInfo_1D3D440 *)Method_System_Linq_Enumerable_ToArray_int___);
            if ( !v192->fields.eventTarget )
              goto LABEL_559;
            v324 = (System_Int32_array *)Component_srcLineSprite;
            UnityEngine_GameObject__SetActive(v192->fields.eventTarget, 1, 0LL);
            Component_srcLineSprite = (UnityEngine_GameObject_o *)v192->fields.eventTargetComponent;
            if ( !Component_srcLineSprite )
              goto LABEL_559;
            BoardOptionEventTargetComponent__CreateEnemyList(
              (BoardOptionEventTargetComponent_o *)Component_srcLineSprite,
              v343->fields.questId,
              v324,
              0LL);
          }
          else
          {
            Component_srcLineSprite = v192->fields.eventTarget;
            if ( !Component_srcLineSprite )
              goto LABEL_559;
            UnityEngine_GameObject__SetActive(Component_srcLineSprite, 0, 0LL);
          }
        }
      }
    }
  }
  if ( ((unsigned __int8)v341 & (v352 == 2) & QuestEntity__HasFlag(v349, 0x400000000000000LL, 0LL)) == 1 )
  {
    alloutRoot = (UnityEngine_Object_o *)v192->fields.alloutRoot;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(alloutRoot, 0LL, 0LL) )
    {
      alloutRootComponent = (UnityEngine_Object_o *)v192->fields.alloutRootComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(alloutRootComponent, 0LL, 0LL) )
      {
        if ( !v343->fields.questReleaseType )
          goto LABEL_608;
        v327 = v343->fields.questId;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( CondType__IsQuestClear_24699280(v327, -1, 1, 0LL) )
        {
LABEL_608:
          Component_srcLineSprite = v192->fields.alloutRoot;
          if ( Component_srcLineSprite )
          {
            UnityEngine_GameObject__SetActive(Component_srcLineSprite, 1, 0LL);
            Component_srcLineSprite = (UnityEngine_GameObject_o *)v192->fields.alloutRootComponent;
            if ( Component_srcLineSprite )
            {
              BoardOptionAlloutComponent__SetIcon(
                (BoardOptionAlloutComponent_o *)Component_srcLineSprite,
                v343->fields.questId,
                0LL);
              return;
            }
          }
LABEL_559:
          sub_B7769C(Component_srcLineSprite, RESTRICTION_FONT_SPACING_DEFAULT);
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewItemDraw__SetItemOfRecollectionQuest(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  QuestBoardListViewManager_c *size; // x1
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x20
  DataManager_o *v8; // x22
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  QuestEntity_o *v10; // x21
  __int64 v11; // x9
  int32_t dispType; // w27
  int64_t v13; // x23
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x25
  float v15; // s0
  float v16; // s1
  float v17; // s2
  float v18; // s3
  float v19; // s8
  float v20; // s9
  float v21; // s10
  float v22; // s11
  int32_t OverwriteBannerId_k__BackingField; // w8
  QuestBoardListViewItemDraw_c *v24; // x0
  System_String_o *RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX; // x24
  System_String_o *v26; // x1
  System_String_o *v27; // x0
  QuestBoardListViewItemDraw_c *v28; // x0
  System_String_o *QUEST_BOARD_SPNAME_PREFIX; // x25
  System_String_o *v30; // x0
  UISprite_o *mcBaseP; // x24
  struct UISprite_o **p_mcBaseP; // x28
  System_String_o *v33; // x25
  const MethodInfo *v34; // x3
  UnityEngine_GameObject_o *gameObject; // x24
  QuestBoardListViewItemDraw_c *v36; // x8
  float NEXT_POS_X_QUEST; // w8
  bool activeSelf; // w0
  const MethodInfo *v39; // x3
  QuestBoardListViewItemDraw_c *v40; // x8
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x3
  const MethodInfo *v47; // x1
  const MethodInfo *v48; // x4
  struct UILabel_o **p_mTitleNameLb; // x24
  System_String_o *v50; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v51; // x22
  Il2CppObject *BattleName; // x0
  UILabel_o *v53; // x22
  QuestBoardListViewItemDraw_o *v54; // x0
  const MethodInfo *v55; // x4
  bool PhasePresentGiftData; // w23
  const MethodInfo *v57; // x4
  int32_t questId; // w22
  QuestBoardListViewItemDraw_PhasePresentData_o *v59; // x24
  int32_t afterClear; // w25
  bool IsRepeatReward; // w0
  const MethodInfo *v62; // x6
  const MethodInfo *v63; // x3
  const MethodInfo *v64; // x1
  int32_t questPhase; // w22
  int32_t PhaseMax; // w0
  int32_t v67; // w0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *mInfoTextList; // x22
  const MethodInfo *v69; // x6
  int64_t *p_expireAt; // x8
  int64_t v71; // x22
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v72; // x21
  System_String_o *v73; // x24
  QuestBoardInformaionText_o *v74; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v75; // x23
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v76; // x23
  struct BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x21
  struct QuestBoardListViewObject_o *v78; // x8
  __int64 v79; // x10
  const MethodInfo *v80; // x3
  int32_t AlphaAnimCnt; // w22
  bool v82; // w22
  UnityEngine_Object_o *mEarthLine; // x21
  const MethodInfo *v84; // x3
  QuestBoardListViewEarthLine_o *v85; // x21
  QuestBoardListViewItemDraw_o *v86; // x0
  const MethodInfo *v87; // x1
  EventCampaignEntity_o *v88; // [xsp+0h] [xbp-B0h]
  const MethodInfo *v89; // [xsp+10h] [xbp-A0h]
  int32_t v90; // [xsp+24h] [xbp-8Ch] BYREF
  int32_t fixedVal[2]; // [xsp+28h] [xbp-88h] BYREF
  QuestBoardListViewItemDraw_PhasePresentData_o *phasePresentData; // [xsp+30h] [xbp-80h] BYREF
  UserQuestEntity_o *entity; // [xsp+38h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v94; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v95; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v96; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v97; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v98; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v99; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v100; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_438C7EE & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&QuestBoardInformaionText_TypeInfo);
    sub_B775C4(&QuestBoardListViewItemDraw_TypeInfo);
    sub_B775C4(&QuestBoardListViewManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_13658/*"TIME_REST_QUEST_BOARD_QUEST"*/);
    sub_B775C4(&StringLiteral_24025/*"{0}"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438C7EE = 1;
  }
  phasePresentData = 0LL;
  entity = 0LL;
  *(_QWORD *)fixedVal = 0LL;
  v90 = 0;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !questBoardItem )
    goto LABEL_155;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_155;
  v8 = (DataManager_o *)Instance;
  Instance = (__int64)MapControl_QuestInfo__GetMine(questBoardItem->fields._quest_info_k__BackingField, 0LL);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_155;
  v10 = (QuestEntity_o *)Instance;
  Instance = (__int64)mListViewObject->fields.manager;
  if ( !Instance )
    goto LABEL_155;
  size = QuestBoardListViewManager_TypeInfo;
  v11 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v11
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v11 - 8) != QuestBoardListViewManager_TypeInfo )
  {
    Instance = sub_B77990(Instance);
    goto LABEL_157;
  }
  if ( !v8 )
    goto LABEL_155;
  dispType = quest_info_k__BackingField->fields.dispType;
  v13 = *(_QWORD *)(Instance + 568);
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              v8,
                                                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v10 || !MasterData_WarQuestSelectionMaster )
    goto LABEL_155;
  UserQuestMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, Instance, v10->fields.id, 0LL);
  *(UnityEngine_Color_o *)&v15 = dispType == 2 ? UnityEngine_Color__get_gray(0LL) : UnityEngine_Color__get_white(0LL);
  Instance = (__int64)this->fields.mLabelObj;
  v19 = v15;
  v20 = v16;
  v21 = v17;
  v22 = v18;
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.mLabelNameSp;
  if ( !Instance )
    goto LABEL_155;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mLabelChapterSp;
  if ( !Instance )
    goto LABEL_155;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mLabelFaceMaskShortcutSp;
  if ( !Instance )
    goto LABEL_155;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mLabelFaceMaskQuestSp;
  if ( !Instance )
    goto LABEL_155;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mTitleObj;
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.mTitleLevelRoot;
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mTitleShortcutLb;
  if ( !Instance )
    goto LABEL_155;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mAdvanceNoticeObj;
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mOverwriteAdvanceNoticeObj;
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mOptionObj;
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_155;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_155;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_155;
  Instance = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_155;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mRewardObj;
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.mPhaseObj;
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mChallengeObj;
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mCostObj;
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mCondObject;
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mLabelFaceObj;
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  OverwriteBannerId_k__BackingField = questBoardItem->fields._OverwriteBannerId_k__BackingField;
  if ( OverwriteBannerId_k__BackingField < 1 )
  {
    if ( v10->fields.bannerId <= 0 )
    {
      p_mcBaseP = &this->fields.mcBaseP;
      goto LABEL_61;
    }
    v28 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v28 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_SPNAME_PREFIX = v28->static_fields->QUEST_BOARD_SPNAME_PREFIX;
    v26 = System_Int32__ToString((int)v10 + 64, 0LL);
    v27 = QUEST_BOARD_SPNAME_PREFIX;
  }
  else
  {
    v24 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v24 = QuestBoardListViewItemDraw_TypeInfo;
      OverwriteBannerId_k__BackingField = questBoardItem->fields._OverwriteBannerId_k__BackingField;
    }
    RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX = v24->static_fields->RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX;
    v90 = OverwriteBannerId_k__BackingField;
    v26 = System_Int32__ToString((int32_t)&v90, 0LL);
    v27 = RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX;
  }
  v30 = System_String__Concat_44901936(v27, v26, 0LL);
  p_mcBaseP = &this->fields.mcBaseP;
  mcBaseP = this->fields.mcBaseP;
  v33 = v30;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = AtlasManager__SetEventUI(mcBaseP, v33, 0LL);
  if ( !mcBaseP )
    goto LABEL_155;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mcBaseP, Instance & 1, 0LL);
LABEL_61:
  Instance = (__int64)*p_mcBaseP;
  if ( !*p_mcBaseP )
    goto LABEL_155;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 840LL))(
    Instance,
    *(_QWORD *)(*(_QWORD *)Instance + 848LL));
  Instance = (__int64)*p_mcBaseP;
  if ( !*p_mcBaseP )
    goto LABEL_155;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_155;
  Instance = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                        (UnityEngine_GameObject_o *)Instance,
                        (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Instance )
    goto LABEL_155;
  v95.fields.r = v19;
  v95.fields.g = v20;
  v95.fields.b = v21;
  v95.fields.a = v22;
  UIWidget__set_color((UIWidget_o *)Instance, v95, 0LL);
  if ( MapControl_QuestInfo__IsDisplayQuestNextIcon(quest_info_k__BackingField, 0LL) )
  {
    Instance = (__int64)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_155;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_155;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    Instance = (__int64)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_155;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    v36 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v36 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionX(gameObject, v36->static_fields->NEXT_POS_X_QUEST, 0LL);
    Instance = (__int64)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_155;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_155;
    Instance = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          (UnityEngine_GameObject_o *)Instance,
                          (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( !Instance )
      goto LABEL_155;
    NEXT_POS_X_QUEST = QuestBoardListViewItemDraw_TypeInfo->static_fields->NEXT_POS_X_QUEST;
    *(float *)(Instance + 120) = NEXT_POS_X_QUEST;
    *(float *)(Instance + 132) = NEXT_POS_X_QUEST;
  }
  if ( dispType != 2 && quest_info_k__BackingField->fields.isNew )
    QuestBoardListViewItemDraw__SetStatusActive(this, 1, 1, v34);
  Instance = (__int64)this->fields.mNextSp;
  if ( !Instance )
    goto LABEL_155;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_155;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  v40 = QuestBoardListViewItemDraw_TypeInfo;
  if ( activeSelf )
  {
    if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v40 = QuestBoardListViewItemDraw_TypeInfo;
    }
    static_fields = v40->static_fields;
    x = static_fields->NEW_POS_QUEST_NEXT.fields.x;
    y = static_fields->NEW_POS_QUEST_NEXT.fields.y;
    z = static_fields->NEW_POS_QUEST_NEXT.fields.z;
  }
  else
  {
    if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v40 = QuestBoardListViewItemDraw_TypeInfo;
    }
    static_fields = v40->static_fields;
    x = static_fields->NEW_POS_SHORTCUT.fields.x;
    y = static_fields->NEW_POS_SHORTCUT.fields.y;
    z = static_fields->NEW_POS_SHORTCUT.fields.z;
  }
  QuestBoardListViewItemDraw__SetNewIcon(
    this,
    *(UnityEngine_Vector3_o *)&x,
    static_fields->NEW_W_DEFAULT,
    static_fields->NEW_H_DEFAULT,
    v39);
  if ( quest_info_k__BackingField->fields.pickupPriority >= 1 )
    QuestBoardListViewItemDraw__SetStatusActive(this, 4, 1, v46);
  QuestBoardListViewItemDraw__SetPickupIcon(this, v45);
  if ( dispType == 2 )
  {
    QuestBoardListViewItemDraw__SetAdvanceNoticeText(this, quest_info_k__BackingField, v10, v13, v48);
    p_mTitleNameLb = &this->fields.mTitleNameLb;
  }
  else
  {
    if ( quest_info_k__BackingField->fields.isNew && quest_info_k__BackingField->fields.pickupPriority >= 1 )
      QuestBoardListViewItemDraw__SetStatusToggle(this, v47);
    Instance = (__int64)QuestEntity__getQuestName(v10, 0LL);
    if ( !Instance )
      goto LABEL_155;
    v50 = (System_String_o *)Instance;
    if ( System_String__Contains((System_String_o *)Instance, (System_String_o *)StringLiteral_24025/*"{0}"*/, 0LL) )
    {
      v51 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             v8,
                                                             (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
      Instance = QuestEntity__getServantId(v10, 0LL);
      if ( !v51 )
        goto LABEL_155;
      Instance = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            v51,
                            Instance,
                            (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_155;
      BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)Instance, 0, -1, 0LL);
      v50 = System_String__Format(v50, BattleName, 0LL);
    }
    p_mTitleNameLb = &this->fields.mTitleNameLb;
    Instance = (__int64)this->fields.mTitleNameLb;
    if ( !Instance )
      goto LABEL_155;
    UILabel__set_text((UILabel_o *)Instance, v50, 0LL);
    Instance = (__int64)this->fields.mAdvanceNoticeLb;
    if ( !Instance )
      goto LABEL_155;
    UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
  v53 = *p_mTitleNameLb;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  }
  if ( !v53 )
    goto LABEL_155;
  UILabel__SetCondensedScale(v53, QuestBoardListViewItemDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH, 0LL);
  Instance = (__int64)*p_mTitleNameLb;
  if ( !*p_mTitleNameLb )
    goto LABEL_155;
  v96.fields.r = v19;
  v96.fields.g = v20;
  v96.fields.b = v21;
  v96.fields.a = v22;
  UIWidget__set_color((UIWidget_o *)Instance, v96, 0LL);
  PhasePresentGiftData = QuestBoardListViewItemDraw__GetPhasePresentGiftData(
                           v54,
                           &phasePresentData,
                           v10,
                           quest_info_k__BackingField->fields.questPhase,
                           v55);
  v97.fields.r = v19;
  v97.fields.g = v20;
  v97.fields.b = v21;
  v97.fields.a = v22;
  QuestBoardListViewItemDraw__SetupRewardIconDisp(this, v10, phasePresentData, dispType == 2, v97, v57);
  questId = quest_info_k__BackingField->fields.questId;
  v59 = phasePresentData;
  afterClear = v10->fields.afterClear;
  IsRepeatReward = QuestEntity__IsRepeatReward(v10, 0LL);
  v98.fields.r = v19;
  v98.fields.g = v20;
  v98.fields.b = v21;
  v98.fields.a = v22;
  QuestBoardListViewItemDraw__SetupRewardDisp(
    this,
    questId,
    PhasePresentGiftData,
    v59,
    afterClear,
    v98,
    IsRepeatReward,
    v62);
  v99.fields.r = v19;
  v99.fields.g = v20;
  v99.fields.b = v21;
  v99.fields.a = v22;
  QuestBoardListViewItemDraw__SetupRewardGotAndNotGiveDisp(this, quest_info_k__BackingField, entity, v99, v63);
  QuestBoardListViewItemDraw__ResetInfoTextList(this, v64);
  fixedVal[0] = -1;
  fixedVal[1] = 0;
  questPhase = quest_info_k__BackingField->fields.questPhase;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0LL);
  v67 = UnityEngine_Mathf__Min_41473676(questPhase + 1, PhaseMax, 0LL);
  mInfoTextList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields.mInfoTextList;
  Instance = (__int64)QuestBoardListViewItemDraw__GetCampaignText(
                        this,
                        quest_info_k__BackingField->fields.questId,
                        v67,
                        0,
                        &fixedVal[1],
                        fixedVal,
                        v69);
  if ( !mInfoTextList )
    goto LABEL_155;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    mInfoTextList,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
  Instance = (__int64)this->fields.mRarePrismSp;
  if ( !Instance )
    goto LABEL_155;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_155;
  Instance = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( (Instance & 1) != 0 )
  {
    Instance = (__int64)entity;
    if ( !entity )
      goto LABEL_155;
    Instance = UserQuestEntity__IsExpireNoLimit(entity, 0LL);
    if ( (Instance & 1) != 0 )
      goto LABEL_126;
    if ( !entity )
      goto LABEL_155;
    p_expireAt = &entity->fields.expireAt;
  }
  else
  {
    p_expireAt = &quest_info_k__BackingField->fields.endTime;
  }
  v71 = *p_expireAt;
  if ( *p_expireAt >= 1 )
  {
    Instance = QuestEntity__HasFlag(v10, 32LL, 0LL);
    if ( (Instance & 1) == 0 )
    {
      v72 = this->fields.mInfoTextList;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v73 = LocalizationManager__Get((System_String_o *)StringLiteral_13658/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0LL);
      v74 = (QuestBoardInformaionText_o *)sub_B77694(QuestBoardInformaionText_TypeInfo);
      v100.fields.r = 0.0;
      v100.fields.g = 0.0;
      v100.fields.b = 0.0;
      v100.fields.a = 0.0;
      v94.fields.x = 0.0;
      v94.fields.y = 0.0;
      v94.fields.z = 0.0;
      v75 = (EventMissionProgressRequest_Argument_ProgressData_o *)v74;
      QuestBoardInformaionText___ctor(v74, v73, v71, 0, 0, v100, -1, 0, v94, 1, v88, 0LL, v89);
      if ( !v72 )
        goto LABEL_155;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v72,
        v75,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
    }
  }
LABEL_126:
  v76 = this->fields.mInfoTextList;
  if ( !v76 )
    goto LABEL_155;
  size = (QuestBoardListViewManager_c *)(unsigned int)v76->fields._size;
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  if ( (int)size < 1 )
  {
    v82 = 0;
    goto LABEL_138;
  }
  v78 = this->fields.mListViewObject;
  if ( !v78 )
    goto LABEL_155;
  Instance = (__int64)v78->fields.manager;
  if ( !Instance )
    goto LABEL_155;
  v79 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v79
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v79 - 8) != QuestBoardListViewManager_TypeInfo )
  {
LABEL_157:
    v86 = (QuestBoardListViewItemDraw_o *)sub_B77990(Instance);
    QuestBoardListViewItemDraw__ResetInfoTextList(v86, v87);
    return;
  }
  AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt((QuestBoardListViewManager_o *)Instance, (int32_t)size, 0LL);
  if ( v76->fields._size <= (unsigned int)AlphaAnimCnt )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  Instance = (__int64)v76->fields._items->m_Items[AlphaAnimCnt];
  if ( !Instance )
    goto LABEL_155;
  QuestBoardInformaionText__SetTime(
    (QuestBoardInformaionText_o *)Instance,
    &this->fields.mOptionInfoLb,
    &this->fields.mOptionInfoFrameSp,
    v80);
  Instance = (__int64)this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_155;
  BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)Instance, 1.0, 0LL);
  v82 = 1;
  quest_info_k__BackingField->fields.costCalcVal = fixedVal[1];
  quest_info_k__BackingField->fields._fixedCostVal_k__BackingField = fixedVal[0];
LABEL_138:
  Instance = (__int64)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_155;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_155;
  Instance = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_155;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v82, 0LL);
  Instance = (__int64)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_155;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v82, 0LL);
  mEarthLine = (UnityEngine_Object_o *)this->fields.mEarthLine;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mEarthLine, 0LL, 0LL) )
  {
    Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
    v85 = this->fields.mEarthLine;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
    }
    if ( v85 )
    {
      QuestBoardListViewEarthLine__SetupSecond(
        v85,
        *(UnityEngine_Vector3_o *)(*(_QWORD *)(Instance + 184) + 268LL),
        this->fields.mListViewObject,
        quest_info_k__BackingField->fields.warId,
        v84);
      return;
    }
LABEL_155:
    sub_B7769C(Instance, size);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewItemDraw__SetItemOfShortcut(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  QuestBoardListViewManager_c *size; // x1
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x20
  int32_t info_kind_k__BackingField; // w28
  DataManager_o *v9; // x22
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  QuestEntity_o *v11; // x21
  __int64 v12; // x9
  int32_t dispType; // w25
  int64_t v14; // x23
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x24
  float v16; // s0
  float v17; // s1
  float v18; // s2
  float v19; // s3
  float v20; // s8
  float v21; // s9
  float v22; // s10
  float v23; // s11
  UISprite_o *mcBaseP; // x24
  System_String_o **v25; // x8
  const MethodInfo *v26; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  QuestBoardListViewItemDraw_c *v28; // x8
  UnityEngine_GameObject_o *v29; // x24
  float NEXT_POS_X_QUEST; // w8
  bool activeSelf; // w0
  const MethodInfo *v32; // x3
  QuestBoardListViewItemDraw_c *v33; // x8
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // x4
  struct UILabel_o **p_mTitleNameLb; // x24
  System_String_o *v43; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v44; // x24
  Il2CppObject *BattleName; // x0
  UILabel_o *v46; // x23
  int32_t ServantId; // w23
  UILabel_o *mTitleShortcutLb; // x22
  const MethodInfo *v49; // x5
  QuestBoardListViewItemDraw_c *v50; // x0
  UISprite_o *mLabelFaceMaskShortcutSp; // x22
  _BOOL8 v52; // x0
  const MethodInfo *v53; // x4
  bool PhasePresentGiftData; // w22
  const MethodInfo *v55; // x4
  int32_t questId; // w23
  QuestBoardListViewItemDraw_PhasePresentData_o *v57; // x24
  int32_t afterClear; // w25
  bool IsRepeatReward; // w0
  const MethodInfo *v60; // x6
  const MethodInfo *v61; // x3
  const MethodInfo *v62; // x1
  int32_t questPhase; // w22
  int32_t PhaseMax; // w0
  int32_t v65; // w0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *mInfoTextList; // x22
  const MethodInfo *v67; // x6
  int64_t *p_expireAt; // x8
  int64_t v69; // x22
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v70; // x21
  System_String_o *v71; // x24
  QuestBoardInformaionText_o *v72; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v73; // x23
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v74; // x23
  struct BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x21
  struct QuestBoardListViewObject_o *v76; // x8
  __int64 v77; // x10
  const MethodInfo *v78; // x3
  int32_t AlphaAnimCnt; // w22
  bool v80; // w22
  UnityEngine_Object_o *mEarthLine; // x21
  const MethodInfo *v82; // x3
  QuestBoardListViewEarthLine_o *v83; // x21
  QuestBoardListViewItemDraw_o *v84; // x0
  QuestBoardListViewItem_o *v85; // x1
  const MethodInfo *v86; // x2
  EventCampaignEntity_o *v87; // [xsp+0h] [xbp-A0h]
  const MethodInfo *v88; // [xsp+10h] [xbp-90h]
  int32_t fixedVal[2]; // [xsp+18h] [xbp-88h] BYREF
  QuestBoardListViewItemDraw_PhasePresentData_o *phasePresentData; // [xsp+20h] [xbp-80h] BYREF
  UserQuestEntity_o *entity; // [xsp+28h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v92; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v93; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v94; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v95; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v96; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v97; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v98; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v99; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v100; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_438C7ED & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&QuestBoardInformaionText_TypeInfo);
    sub_B775C4(&QuestBoardListViewItemDraw_TypeInfo);
    sub_B775C4(&QuestBoardListViewManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_13658/*"TIME_REST_QUEST_BOARD_QUEST"*/);
    sub_B775C4(&StringLiteral_24025/*"{0}"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438C7ED = 1;
  }
  entity = 0LL;
  *(_QWORD *)fixedVal = 0LL;
  phasePresentData = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !questBoardItem )
    goto LABEL_159;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_159;
  info_kind_k__BackingField = questBoardItem->fields._info_kind_k__BackingField;
  v9 = (DataManager_o *)Instance;
  Instance = (__int64)MapControl_QuestInfo__GetMine(questBoardItem->fields._quest_info_k__BackingField, 0LL);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_159;
  v11 = (QuestEntity_o *)Instance;
  Instance = (__int64)mListViewObject->fields.manager;
  if ( !Instance )
    goto LABEL_159;
  size = QuestBoardListViewManager_TypeInfo;
  v12 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v12
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v12 - 8) != QuestBoardListViewManager_TypeInfo )
  {
    Instance = sub_B77990(Instance);
    goto LABEL_161;
  }
  if ( !v9 )
    goto LABEL_159;
  dispType = quest_info_k__BackingField->fields.dispType;
  v14 = *(_QWORD *)(Instance + 568);
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              v9,
                                                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v11 || !MasterData_WarQuestSelectionMaster )
    goto LABEL_159;
  UserQuestMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, Instance, v11->fields.id, 0LL);
  *(UnityEngine_Color_o *)&v16 = dispType == 2 ? UnityEngine_Color__get_gray(0LL) : UnityEngine_Color__get_white(0LL);
  Instance = (__int64)this->fields.mLabelObj;
  v20 = v16;
  v21 = v17;
  v22 = v18;
  v23 = v19;
  if ( !Instance )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.mLabelNameSp;
  if ( !Instance )
    goto LABEL_159;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mLabelChapterSp;
  if ( !Instance )
    goto LABEL_159;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mLabelFaceMaskShortcutSp;
  if ( !Instance )
    goto LABEL_159;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.mLabelFaceMaskQuestSp;
  if ( !Instance )
    goto LABEL_159;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mTitleObj;
  if ( !Instance )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.mTitleLevelRoot;
  if ( !Instance )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mTitleShortcutLb;
  if ( !Instance )
    goto LABEL_159;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.mAdvanceNoticeObj;
  if ( !Instance )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mOverwriteAdvanceNoticeObj;
  if ( !Instance )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mOptionObj;
  if ( !Instance )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_159;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_159;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_159;
  Instance = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_159;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mRewardObj;
  if ( !Instance )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.mPhaseObj;
  if ( !Instance )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mChallengeObj;
  if ( !Instance )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mCostObj;
  if ( !Instance )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mCondObject;
  if ( !Instance )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mcBaseP;
  if ( !Instance )
    goto LABEL_159;
  UISprite__set_atlas((UISprite_o *)Instance, this->fields.mTerminalAtlas, 0LL);
  mcBaseP = this->fields.mcBaseP;
  Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
  if ( info_kind_k__BackingField == 2 )
  {
    if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
    }
    v25 = (System_String_o **)(*(_QWORD *)(Instance + 184) + 1056LL);
    if ( !mcBaseP )
      goto LABEL_159;
  }
  else
  {
    if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
    }
    v25 = (System_String_o **)(*(_QWORD *)(Instance + 184) + 1064LL);
    if ( !mcBaseP )
      goto LABEL_159;
  }
  UISprite__set_spriteName(mcBaseP, *v25, 0LL);
  Instance = (__int64)this->fields.mcBaseP;
  if ( !Instance )
    goto LABEL_159;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 840LL))(
    Instance,
    *(_QWORD *)(*(_QWORD *)Instance + 848LL));
  Instance = (__int64)this->fields.mcBaseP;
  if ( !Instance )
    goto LABEL_159;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_159;
  Instance = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                        (UnityEngine_GameObject_o *)Instance,
                        (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Instance )
    goto LABEL_159;
  v93.fields.r = v20;
  v93.fields.g = v21;
  v93.fields.b = v22;
  v93.fields.a = v23;
  UIWidget__set_color((UIWidget_o *)Instance, v93, 0LL);
  if ( MapControl_QuestInfo__IsDisplayQuestNextIcon(quest_info_k__BackingField, 0LL) )
  {
    Instance = (__int64)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_159;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_159;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    Instance = (__int64)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_159;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    v28 = QuestBoardListViewItemDraw_TypeInfo;
    v29 = gameObject;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v28 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionX(v29, v28->static_fields->NEXT_POS_X_QUEST, 0LL);
    Instance = (__int64)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_159;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_159;
    Instance = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          (UnityEngine_GameObject_o *)Instance,
                          (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( !Instance )
      goto LABEL_159;
    NEXT_POS_X_QUEST = QuestBoardListViewItemDraw_TypeInfo->static_fields->NEXT_POS_X_QUEST;
    *(float *)(Instance + 120) = NEXT_POS_X_QUEST;
    *(float *)(Instance + 132) = NEXT_POS_X_QUEST;
  }
  if ( dispType != 2 && quest_info_k__BackingField->fields.isNew )
    QuestBoardListViewItemDraw__SetStatusActive(this, 1, 1, v26);
  Instance = (__int64)this->fields.mNextSp;
  if ( !Instance )
    goto LABEL_159;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_159;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  v33 = QuestBoardListViewItemDraw_TypeInfo;
  if ( activeSelf )
  {
    if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v33 = QuestBoardListViewItemDraw_TypeInfo;
    }
    static_fields = v33->static_fields;
    x = static_fields->NEW_POS_QUEST_NEXT.fields.x;
    y = static_fields->NEW_POS_QUEST_NEXT.fields.y;
    z = static_fields->NEW_POS_QUEST_NEXT.fields.z;
  }
  else
  {
    if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v33 = QuestBoardListViewItemDraw_TypeInfo;
    }
    static_fields = v33->static_fields;
    x = static_fields->NEW_POS_SHORTCUT.fields.x;
    y = static_fields->NEW_POS_SHORTCUT.fields.y;
    z = static_fields->NEW_POS_SHORTCUT.fields.z;
  }
  QuestBoardListViewItemDraw__SetNewIcon(
    this,
    *(UnityEngine_Vector3_o *)&x,
    static_fields->NEW_W_DEFAULT,
    static_fields->NEW_H_DEFAULT,
    v32);
  if ( quest_info_k__BackingField->fields.pickupPriority >= 1 )
    QuestBoardListViewItemDraw__SetStatusActive(this, 4, 1, v39);
  QuestBoardListViewItemDraw__SetPickupIcon(this, v38);
  if ( dispType == 2 )
  {
    QuestBoardListViewItemDraw__SetAdvanceNoticeText(this, quest_info_k__BackingField, v11, v14, v41);
    p_mTitleNameLb = &this->fields.mTitleNameLb;
  }
  else
  {
    if ( quest_info_k__BackingField->fields.isNew && quest_info_k__BackingField->fields.pickupPriority >= 1 )
      QuestBoardListViewItemDraw__SetStatusToggle(this, v40);
    Instance = (__int64)QuestEntity__getQuestName(v11, 0LL);
    if ( !Instance )
      goto LABEL_159;
    v43 = (System_String_o *)Instance;
    if ( System_String__Contains((System_String_o *)Instance, (System_String_o *)StringLiteral_24025/*"{0}"*/, 0LL) )
    {
      v44 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             v9,
                                                             (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
      Instance = QuestEntity__getServantId(v11, 0LL);
      if ( !v44 )
        goto LABEL_159;
      Instance = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            v44,
                            Instance,
                            (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_159;
      BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)Instance, 0, -1, 0LL);
      v43 = System_String__Format(v43, BattleName, 0LL);
    }
    p_mTitleNameLb = &this->fields.mTitleNameLb;
    Instance = (__int64)this->fields.mTitleNameLb;
    if ( !Instance )
      goto LABEL_159;
    UILabel__set_text((UILabel_o *)Instance, v43, 0LL);
    Instance = (__int64)this->fields.mAdvanceNoticeLb;
    if ( !Instance )
      goto LABEL_159;
    UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
  v46 = *p_mTitleNameLb;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  }
  if ( !v46 )
    goto LABEL_159;
  UILabel__SetCondensedScale(v46, QuestBoardListViewItemDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH, 0LL);
  Instance = (__int64)*p_mTitleNameLb;
  if ( !*p_mTitleNameLb )
    goto LABEL_159;
  v94.fields.r = v20;
  v94.fields.g = v21;
  v94.fields.b = v22;
  v94.fields.a = v23;
  UIWidget__set_color((UIWidget_o *)Instance, v94, 0LL);
  ServantId = QuestEntity__getServantId(v11, 0LL);
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        v9,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_159;
  Instance = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        ServantId,
                        (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  mTitleShortcutLb = this->fields.mTitleShortcutLb;
  if ( Instance )
  {
    Instance = (__int64)ServantEntity__getName((ServantEntity_o *)Instance, -1, -1, 0LL);
    if ( !mTitleShortcutLb )
      goto LABEL_159;
    UILabel__set_text(mTitleShortcutLb, (System_String_o *)Instance, 0LL);
    Instance = (__int64)this->fields.mTitleShortcutLb;
    if ( !Instance )
      goto LABEL_159;
    v95.fields.r = v20;
    v95.fields.g = v21;
    v95.fields.b = v22;
    v95.fields.a = v23;
    UIWidget__set_color((UIWidget_o *)Instance, v95, 0LL);
  }
  else
  {
    if ( !mTitleShortcutLb )
      goto LABEL_159;
    UILabel__set_text(this->fields.mTitleShortcutLb, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  v50 = QuestBoardListViewItemDraw_TypeInfo;
  mLabelFaceMaskShortcutSp = this->fields.mLabelFaceMaskShortcutSp;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v50 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v96.fields.r = v20;
  v96.fields.g = v21;
  v96.fields.b = v22;
  v96.fields.a = v23;
  v52 = QuestBoardListViewItemDraw__SetFaceImage(
          this,
          v11,
          mLabelFaceMaskShortcutSp,
          v50->static_fields->SHORTCUT_FACE_MASK_SP_W,
          v50->static_fields->SHORTCUT_FACE_MASK_SPNAME,
          v96,
          v49);
  PhasePresentGiftData = QuestBoardListViewItemDraw__GetPhasePresentGiftData(
                           (QuestBoardListViewItemDraw_o *)v52,
                           &phasePresentData,
                           v11,
                           quest_info_k__BackingField->fields.questPhase,
                           v53);
  v97.fields.r = v20;
  v97.fields.g = v21;
  v97.fields.b = v22;
  v97.fields.a = v23;
  QuestBoardListViewItemDraw__SetupRewardIconDisp(this, v11, phasePresentData, dispType == 2, v97, v55);
  questId = quest_info_k__BackingField->fields.questId;
  v57 = phasePresentData;
  afterClear = v11->fields.afterClear;
  IsRepeatReward = QuestEntity__IsRepeatReward(v11, 0LL);
  v98.fields.r = v20;
  v98.fields.g = v21;
  v98.fields.b = v22;
  v98.fields.a = v23;
  QuestBoardListViewItemDraw__SetupRewardDisp(
    this,
    questId,
    PhasePresentGiftData,
    v57,
    afterClear,
    v98,
    IsRepeatReward,
    v60);
  v99.fields.r = v20;
  v99.fields.g = v21;
  v99.fields.b = v22;
  v99.fields.a = v23;
  QuestBoardListViewItemDraw__SetupRewardGotAndNotGiveDisp(this, quest_info_k__BackingField, entity, v99, v61);
  QuestBoardListViewItemDraw__ResetInfoTextList(this, v62);
  fixedVal[0] = -1;
  fixedVal[1] = 0;
  questPhase = quest_info_k__BackingField->fields.questPhase;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0LL);
  v65 = UnityEngine_Mathf__Min_41473676(questPhase + 1, PhaseMax, 0LL);
  mInfoTextList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields.mInfoTextList;
  Instance = (__int64)QuestBoardListViewItemDraw__GetCampaignText(
                        this,
                        quest_info_k__BackingField->fields.questId,
                        v65,
                        0,
                        &fixedVal[1],
                        fixedVal,
                        v67);
  if ( !mInfoTextList
    || (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          mInfoTextList,
          (System_Collections_Generic_IEnumerable_T__o *)Instance,
          (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__),
        (Instance = (__int64)this->fields.mRarePrismSp) == 0)
    || (Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0 )
  {
LABEL_159:
    sub_B7769C(Instance, size);
  }
  Instance = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( (Instance & 1) != 0 )
  {
    Instance = (__int64)entity;
    if ( !entity )
      goto LABEL_159;
    Instance = UserQuestEntity__IsExpireNoLimit(entity, 0LL);
    if ( (Instance & 1) != 0 )
      goto LABEL_131;
    if ( !entity )
      goto LABEL_159;
    p_expireAt = &entity->fields.expireAt;
  }
  else
  {
    p_expireAt = &quest_info_k__BackingField->fields.endTime;
  }
  v69 = *p_expireAt;
  if ( *p_expireAt >= 1 )
  {
    Instance = QuestEntity__HasFlag(v11, 32LL, 0LL);
    if ( (Instance & 1) == 0 )
    {
      v70 = this->fields.mInfoTextList;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v71 = LocalizationManager__Get((System_String_o *)StringLiteral_13658/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0LL);
      v72 = (QuestBoardInformaionText_o *)sub_B77694(QuestBoardInformaionText_TypeInfo);
      v100.fields.r = 0.0;
      v100.fields.g = 0.0;
      v100.fields.b = 0.0;
      v100.fields.a = 0.0;
      v92.fields.x = 0.0;
      v92.fields.y = 0.0;
      v92.fields.z = 0.0;
      v73 = (EventMissionProgressRequest_Argument_ProgressData_o *)v72;
      QuestBoardInformaionText___ctor(v72, v71, v69, 0, 0, v100, -1, 0, v92, 1, v87, 0LL, v88);
      if ( !v70 )
        goto LABEL_159;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v70,
        v73,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
    }
  }
LABEL_131:
  v74 = this->fields.mInfoTextList;
  if ( !v74 )
    goto LABEL_159;
  size = (QuestBoardListViewManager_c *)(unsigned int)v74->fields._size;
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  if ( (int)size >= 1 )
  {
    v76 = this->fields.mListViewObject;
    if ( !v76 )
      goto LABEL_159;
    Instance = (__int64)v76->fields.manager;
    if ( !Instance )
      goto LABEL_159;
    v77 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v77
      && *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v77 - 8) == QuestBoardListViewManager_TypeInfo )
    {
      AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt(
                       (QuestBoardListViewManager_o *)Instance,
                       (int32_t)size,
                       0LL);
      if ( v74->fields._size <= (unsigned int)AlphaAnimCnt )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      Instance = (__int64)v74->fields._items->m_Items[AlphaAnimCnt];
      if ( !Instance )
        goto LABEL_159;
      QuestBoardInformaionText__SetTime(
        (QuestBoardInformaionText_o *)Instance,
        &this->fields.mOptionInfoLb,
        &this->fields.mOptionInfoFrameSp,
        v78);
      Instance = (__int64)this->fields.mOptionInfoLb;
      if ( !Instance )
        goto LABEL_159;
      BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)Instance, 1.0, 0LL);
      v80 = 1;
      quest_info_k__BackingField->fields.costCalcVal = fixedVal[1];
      quest_info_k__BackingField->fields._fixedCostVal_k__BackingField = fixedVal[0];
      goto LABEL_143;
    }
LABEL_161:
    v84 = (QuestBoardListViewItemDraw_o *)sub_B77990(Instance);
    QuestBoardListViewItemDraw__SetItemOfQuest(v84, v85, v86);
    return;
  }
  v80 = 0;
LABEL_143:
  Instance = (__int64)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_159;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_159;
  Instance = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_159;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v80, 0LL);
  Instance = (__int64)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_159;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v80, 0LL);
  mEarthLine = (UnityEngine_Object_o *)this->fields.mEarthLine;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mEarthLine, 0LL, 0LL) )
  {
    Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
    v83 = this->fields.mEarthLine;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
    }
    if ( !v83 )
      goto LABEL_159;
    QuestBoardListViewEarthLine__SetupSecond(
      v83,
      *(UnityEngine_Vector3_o *)(*(_QWORD *)(Instance + 184) + 268LL),
      this->fields.mListViewObject,
      quest_info_k__BackingField->fields.warId,
      v82);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewItemDraw__SetItemOfWarBoard(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 Instance; // x0
  __int64 size; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x21
  DataManager_o *v15; // x23
  QuestEntity_o *PhaseDetailedEntity; // x22
  unsigned int v17; // w25
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  __int64 v19; // x9
  int32_t dispType; // w26
  int64_t v21; // x24
  bool HasFlag; // w27
  int v23; // s0
  int v24; // s1
  int v25; // s2
  int v26; // s3
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x23
  int32_t questId; // w23
  bool IsQuestClear_24699280; // w0
  int32_t v30; // w23
  int32_t PhaseMax; // w0
  UnityEngine_GameObject_o *mLabelObj; // x8
  UnityEngine_GameObject_o *mCostObj; // x25
  QuestBoardListViewItemDraw_c *v34; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_GameObject_o *v37; // x0
  QuestBoardListViewItemDraw_c *v38; // x0
  System_String_o *QUEST_BOARD_SPNAME_PREFIX; // x24
  System_String_o *v40; // x0
  System_String_o *v41; // x0
  UISprite_o *v42; // x25
  struct UISprite_o **p_mcBaseP; // x27
  System_String_o *v44; // x24
  UISprite_o *v45; // x24
  System_String_o *QUEST_BOARD_SHOHI_SPNAME_PREFIX; // x25
  System_String_o *v47; // x0
  System_String_o *v48; // x0
  int32_t v49; // w25
  UISprite_o *mShohiSp; // x25
  UISprite_o *mcBaseP; // x28
  __int64 v52; // x8
  System_String_o *v53; // x24
  UISprite_o *v54; // x25
  int32_t v55; // w24
  __int64 v56; // x8
  System_String_o *v57; // x0
  System_String_o *v58; // x24
  const MethodInfo *v59; // x3
  UnityEngine_GameObject_o *v60; // x0
  QuestBoardListViewItemDraw_c *v61; // x8
  UnityEngine_GameObject_o *v62; // x25
  float NEXT_POS_X_QUEST; // w8
  int32_t v64; // w1
  bool activeSelf; // w0
  const MethodInfo *v66; // x3
  QuestBoardListViewItemDraw_c *v67; // x8
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  const MethodInfo *v72; // x2
  UnityEngine_GameObject_o *v73; // x28
  _BOOL8 v74; // x0
  const MethodInfo *v75; // x5
  QuestBoardListViewItemDraw_c *v76; // x0
  int32_t v77; // w28
  System_String_o *RecommendLv; // x0
  const MethodInfo *v79; // x2
  const MethodInfo *v80; // x2
  QuestBoardListViewItemDraw_o *v81; // x0
  UISprite_o *mLabelFaceMaskQuestSp; // x27
  int32_t v83; // w24
  System_String_o *FaceMaskSpriteName; // x0
  const MethodInfo *v85; // x5
  bool v86; // w0
  const MethodInfo *v87; // x3
  UILabel_o *mTitleNameLb; // x27
  const MethodInfo *v89; // x4
  QuestBoardListViewItemDraw_o *v90; // x0
  const MethodInfo *v91; // x2
  const MethodInfo *v92; // x2
  UISprite_o *mLabelNameSp; // x27
  QuestBoardListViewItemDraw_o *v94; // x0
  const MethodInfo *v95; // x3
  System_String_o *QuestIconName; // x24
  System_Action_o *v97; // x24
  const MethodInfo *v98; // x3
  UILabel_o *v99; // x25
  QuestBoardListViewItemDraw_o *v100; // x0
  const MethodInfo *v101; // x4
  bool PhasePresentGiftData; // w25
  const MethodInfo *v103; // x4
  int32_t v104; // w24
  QuestBoardListViewItemDraw_PhasePresentData_o *v105; // x26
  int32_t afterClear; // w27
  float v107; // s8
  float v108; // s9
  float v109; // s10
  float v110; // s11
  bool IsRepeatReward; // w0
  const MethodInfo *v112; // x6
  const MethodInfo *v113; // x3
  const MethodInfo *v114; // x1
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *mInfoTextList; // x25
  const MethodInfo *v116; // x6
  int64_t *p_expireAt; // x8
  int64_t v118; // x24
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v119; // x25
  System_String_o *v120; // x27
  QuestBoardInformaionText_o *v121; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v122; // x26
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v123; // x26
  struct BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x24
  struct QuestBoardListViewObject_o *v125; // x8
  __int64 v126; // x10
  const MethodInfo *v127; // x3
  int32_t AlphaAnimCnt; // w25
  bool v129; // w25
  WarBoardQuestEntity_o *v130; // x0
  WarBoardQuestEntity_o *v131; // x21
  UILabel_o *mBoardMessage; // x21
  UISprite_o *v133; // x28
  __int64 v134; // x8
  __int64 v135; // x0
  EventCampaignEntity_o *v136; // [xsp+0h] [xbp-D0h]
  const MethodInfo *v137; // [xsp+10h] [xbp-C0h]
  int64_t checkTime; // [xsp+20h] [xbp-B0h]
  bool v139; // [xsp+28h] [xbp-A8h]
  bool v140; // [xsp+2Ch] [xbp-A4h]
  unsigned int v141; // [xsp+30h] [xbp-A0h]
  int32_t questPhase; // [xsp+34h] [xbp-9Ch]
  int32_t fixedVal[2]; // [xsp+38h] [xbp-98h] BYREF
  QuestBoardListViewItemDraw_PhasePresentData_o *phasePresentData; // [xsp+40h] [xbp-90h] BYREF
  bool isTripleItemConsume; // [xsp+4Ch] [xbp-84h] BYREF
  bool isDoubleItemConsumeQp; // [xsp+50h] [xbp-80h] BYREF
  bool isDoubleItemConsume; // [xsp+54h] [xbp-7Ch] BYREF
  UserQuestEntity_o *entity; // [xsp+58h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v149; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v150; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v151; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_438C7F3 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&CondType_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_WarBoardQuestMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_WarBoardStageMaster___);
    sub_B775C4(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&QuestBoardInformaionText_TypeInfo);
    sub_B775C4(&QuestBoardListViewItemDraw_TypeInfo);
    sub_B775C4(&QuestBoardListViewManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_QuestBoardListViewItemDraw___c__DisplayClass316_0__SetItemOfWarBoard_b__0__);
    sub_B775C4(&QuestBoardListViewItemDraw___c__DisplayClass316_0_TypeInfo);
    sub_B775C4(&StringLiteral_13658/*"TIME_REST_QUEST_BOARD_QUEST"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438C7F3 = 1;
  }
  entity = 0LL;
  isDoubleItemConsume = 0;
  isDoubleItemConsumeQp = 0;
  isTripleItemConsume = 0;
  *(_QWORD *)fixedVal = 0LL;
  phasePresentData = 0LL;
  v5 = sub_B77694(QuestBoardListViewItemDraw___c__DisplayClass316_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass316_0___ctor(
    (QuestBoardListViewItemDraw___c__DisplayClass316_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_226;
  *(_QWORD *)(v5 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !questBoardItem )
    goto LABEL_226;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_226;
  v15 = (DataManager_o *)Instance;
  Instance = (__int64)MapControl_QuestInfo__GetMine(quest_info_k__BackingField, 0LL);
  if ( !Instance )
    goto LABEL_226;
  PhaseDetailedEntity = QuestEntity__GetPhaseDetailedEntity((QuestEntity_o *)Instance, 0LL);
  Instance = MapControl_QuestInfo__GetQuestType(quest_info_k__BackingField, 0LL);
  if ( !v15 )
    goto LABEL_226;
  v17 = Instance;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        v15,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !PhaseDetailedEntity )
    goto LABEL_226;
  if ( !Instance )
    goto LABEL_226;
  Instance = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Instance, PhaseDetailedEntity->fields.id, 0LL);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_226;
  Instance = (__int64)mListViewObject->fields.manager;
  if ( !Instance )
    goto LABEL_226;
  v19 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v19
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v19 - 8) != QuestBoardListViewManager_TypeInfo )
  {
    Instance = sub_B77990(Instance);
LABEL_228:
    Instance = sub_B77990(Instance);
    goto LABEL_229;
  }
  dispType = quest_info_k__BackingField->fields.dispType;
  v21 = *(_QWORD *)(Instance + 568);
  HasFlag = QuestEntity__HasFlag(PhaseDetailedEntity, 2LL, 0LL);
  if ( dispType == 2 )
    *(UnityEngine_Color_o *)&v23 = UnityEngine_Color__get_gray(0LL);
  else
    *(UnityEngine_Color_o *)&v23 = UnityEngine_Color__get_white(0LL);
  *(_DWORD *)(v5 + 24) = v23;
  *(_DWORD *)(v5 + 28) = v24;
  *(_DWORD *)(v5 + 32) = v25;
  *(_DWORD *)(v5 + 36) = v26;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              v15,
                                                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_226;
  UserQuestMaster__TryGetEntity(
    MasterData_WarQuestSelectionMaster,
    &entity,
    Instance,
    PhaseDetailedEntity->fields.id,
    0LL);
  isDoubleItemConsume = 0;
  isDoubleItemConsumeQp = 0;
  isTripleItemConsume = 0;
  questId = quest_info_k__BackingField->fields.questId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_24699280 = CondType__IsQuestClear_24699280(questId, -1, 0, 0LL);
  v30 = quest_info_k__BackingField->fields.questPhase;
  v140 = IsQuestClear_24699280;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0LL);
  Instance = UnityEngine_Mathf__Min_41473676(v30 + 1, PhaseMax, 0LL);
  mLabelObj = this->fields.mLabelObj;
  questPhase = Instance;
  if ( !mLabelObj )
    goto LABEL_226;
  UnityEngine_GameObject__SetActive(mLabelObj, 1, 0LL);
  Instance = (__int64)this->fields.mLabelNameSp;
  if ( !Instance )
    goto LABEL_226;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_226;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mLabelChapterSp;
  if ( !Instance )
    goto LABEL_226;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_226;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mLabelFaceMaskShortcutSp;
  if ( !Instance )
    goto LABEL_226;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_226;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mLabelFaceMaskQuestSp;
  if ( !Instance )
    goto LABEL_226;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_226;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.mTitleObj;
  if ( !Instance )
    goto LABEL_226;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.mTitleShortcutLb;
  if ( !Instance )
    goto LABEL_226;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_226;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mAdvanceNoticeObj;
  if ( !Instance )
    goto LABEL_226;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mOverwriteAdvanceNoticeObj;
  if ( !Instance )
    goto LABEL_226;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mOptionObj;
  if ( !Instance )
    goto LABEL_226;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.mRewardObj;
  if ( !Instance )
    goto LABEL_226;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_226;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_226;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mPhaseObj;
  if ( !Instance )
    goto LABEL_226;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mChallengeObj;
  if ( !Instance )
    goto LABEL_226;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_226;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_226;
  Instance = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_226;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_226;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mBoardMessage;
  if ( !Instance )
    goto LABEL_226;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_226;
  v141 = v17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.mCondObject;
  if ( !Instance )
    goto LABEL_226;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  mCostObj = this->fields.mCostObj;
  v34 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v34 = QuestBoardListViewItemDraw_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition(mCostObj, v34->static_fields->COST_OBJ_POS_WAR_BOARD, 0LL);
  Instance = (__int64)this->fields.mCostApSp;
  if ( !Instance )
    goto LABEL_226;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPosition(
    gameObject,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_1_ICON_AP_POS_WAR_BOARD,
    0LL);
  Instance = (__int64)this->fields.mCostLb1;
  if ( !Instance )
    goto LABEL_226;
  v139 = HasFlag;
  checkTime = v21;
  v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPosition(
    v36,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_1_LABEL_AP_POS_WAR_BOARD,
    0LL);
  Instance = (__int64)this->fields.mShohiSp;
  if ( !Instance )
    goto LABEL_226;
  v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPosition(
    v37,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->SHOHI_SP_POS_WAR_BOARD,
    0LL);
  if ( PhaseDetailedEntity->fields.bannerId < 1 )
  {
    Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
    mShohiSp = this->fields.mShohiSp;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    }
    if ( !mShohiSp )
      goto LABEL_226;
    UISprite__set_spriteName(mShohiSp, QuestBoardListViewItemDraw_TypeInfo->static_fields->SHOHI_SP_NAME_WAR_BOARD, 0LL);
    v49 = v141;
    if ( v141 <= 7 && ((1 << v141) & 0xA6) != 0 )
    {
      p_mcBaseP = &this->fields.mcBaseP;
      mcBaseP = this->fields.mcBaseP;
      Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
      if ( v141 == 7 )
      {
        if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
        }
        v52 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 1072LL);
        if ( !v52 )
          goto LABEL_226;
        if ( *(_DWORD *)(v52 + 24) > 1u )
        {
          v53 = *(System_String_o **)(v52 + 40);
          goto LABEL_91;
        }
      }
      else
      {
        if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
        }
        v56 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 1072LL);
        if ( !v56 )
          goto LABEL_226;
        if ( v141 < *(_DWORD *)(v56 + 24) )
        {
          v53 = *(System_String_o **)(v56 + 8LL * (int)v141 + 32);
LABEL_91:
          v57 = System_Int32__ToString((int)PhaseDetailedEntity + 60, 0LL);
          v58 = System_String__Concat_44901936(v53, v57, 0LL);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetBanner(mcBaseP, v58, 0LL);
          goto LABEL_95;
        }
      }
    }
    else
    {
      p_mcBaseP = &this->fields.mcBaseP;
      Instance = (__int64)this->fields.mcBaseP;
      if ( !Instance )
        goto LABEL_226;
      UISprite__set_atlas((UISprite_o *)Instance, this->fields.mTerminalAtlas, 0LL);
      Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
      v133 = this->fields.mcBaseP;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
      }
      v134 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 1072LL);
      if ( !v134 )
        goto LABEL_226;
      if ( v141 < *(_DWORD *)(v134 + 24) )
      {
        if ( !v133 )
          goto LABEL_226;
        UISprite__set_spriteName(v133, *(System_String_o **)(v134 + 8LL * (int)v141 + 32), 0LL);
        goto LABEL_95;
      }
    }
LABEL_229:
    v135 = sub_B776C8(Instance);
    sub_B77668(v135, 0LL);
  }
  v38 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v38 = QuestBoardListViewItemDraw_TypeInfo;
  }
  QUEST_BOARD_SPNAME_PREFIX = v38->static_fields->QUEST_BOARD_SPNAME_PREFIX;
  v40 = System_Int32__ToString((int)PhaseDetailedEntity + 64, 0LL);
  v41 = System_String__Concat_44901936(QUEST_BOARD_SPNAME_PREFIX, v40, 0LL);
  p_mcBaseP = &this->fields.mcBaseP;
  v42 = this->fields.mcBaseP;
  v44 = v41;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = AtlasManager__SetEventUI(v42, v44, 0LL);
  if ( !v42 )
    goto LABEL_226;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v42, Instance & 1, 0LL);
  v45 = this->fields.mShohiSp;
  QUEST_BOARD_SHOHI_SPNAME_PREFIX = QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_SHOHI_SPNAME_PREFIX;
  v47 = System_Int32__ToString((int)PhaseDetailedEntity + 64, 0LL);
  v48 = System_String__Concat_44901936(QUEST_BOARD_SHOHI_SPNAME_PREFIX, v47, 0LL);
  if ( AtlasManager__SetEventUI(v45, v48, 0LL) )
  {
    v49 = v141;
LABEL_95:
    v55 = dispType;
    goto LABEL_96;
  }
  Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
  v54 = this->fields.mShohiSp;
  v55 = dispType;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  }
  if ( !v54 )
    goto LABEL_226;
  UISprite__set_spriteName(v54, QuestBoardListViewItemDraw_TypeInfo->static_fields->SHOHI_SP_NAME_WAR_BOARD, 0LL);
  v49 = v141;
LABEL_96:
  Instance = (__int64)*p_mcBaseP;
  if ( !*p_mcBaseP )
    goto LABEL_226;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 840LL))(
    Instance,
    *(_QWORD *)(*(_QWORD *)Instance + 848LL));
  Instance = (__int64)*p_mcBaseP;
  if ( !*p_mcBaseP )
    goto LABEL_226;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_226;
  Instance = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                        (UnityEngine_GameObject_o *)Instance,
                        (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Instance )
    goto LABEL_226;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v5 + 24), 0LL);
  if ( MapControl_QuestInfo__IsDisplayQuestNextIcon(quest_info_k__BackingField, 0LL) )
  {
    Instance = (__int64)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_226;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_226;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    Instance = (__int64)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_226;
    v60 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    v61 = QuestBoardListViewItemDraw_TypeInfo;
    v62 = v60;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v61 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionX(v62, v61->static_fields->NEXT_POS_X_QUEST, 0LL);
    Instance = (__int64)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_226;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    v49 = v141;
    if ( !Instance )
      goto LABEL_226;
    Instance = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          (UnityEngine_GameObject_o *)Instance,
                          (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( !Instance )
      goto LABEL_226;
    NEXT_POS_X_QUEST = QuestBoardListViewItemDraw_TypeInfo->static_fields->NEXT_POS_X_QUEST;
    *(float *)(Instance + 120) = NEXT_POS_X_QUEST;
    *(float *)(Instance + 132) = NEXT_POS_X_QUEST;
  }
  if ( v55 != 2 )
  {
    if ( quest_info_k__BackingField->fields.isNew )
    {
      v64 = 1;
    }
    else
    {
      if ( !v140 )
        goto LABEL_117;
      v64 = 2;
    }
    QuestBoardListViewItemDraw__SetStatusActive(this, v64, 1, v59);
  }
LABEL_117:
  Instance = (__int64)this->fields.mNextSp;
  if ( !Instance )
    goto LABEL_226;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_226;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  v67 = QuestBoardListViewItemDraw_TypeInfo;
  if ( activeSelf )
  {
    if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v67 = QuestBoardListViewItemDraw_TypeInfo;
    }
    static_fields = v67->static_fields;
    x = static_fields->NEW_POS_QUEST_NEXT.fields.x;
    y = static_fields->NEW_POS_QUEST_NEXT.fields.y;
    z = static_fields->NEW_POS_QUEST_NEXT.fields.z;
  }
  else
  {
    if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v67 = QuestBoardListViewItemDraw_TypeInfo;
    }
    static_fields = v67->static_fields;
    x = static_fields->NEW_POS_QUEST.fields.x;
    y = static_fields->NEW_POS_QUEST.fields.y;
    z = static_fields->NEW_POS_QUEST.fields.z;
  }
  QuestBoardListViewItemDraw__SetNewIcon(
    this,
    *(UnityEngine_Vector3_o *)&x,
    static_fields->NEW_W_DEFAULT,
    static_fields->NEW_H_DEFAULT,
    v66);
  Instance = (__int64)QuestBoardListViewItemDraw__GetStatusSp(this, 2, v72);
  if ( !Instance )
    goto LABEL_226;
  v73 = (UnityEngine_GameObject_o *)Instance;
  v74 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( v74 )
  {
    v76 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v76 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v73, v76->static_fields->CLEAR_POS_QUEST, 0LL);
  }
  v77 = dispType;
  RecommendLv = QuestBoardListViewItemDraw__GetRecommendLv(
                  (QuestBoardListViewItemDraw_o *)v74,
                  PhaseDetailedEntity,
                  questPhase,
                  !v139,
                  dispType == 2,
                  v75);
  QuestBoardListViewItemDraw__SetRecommendLv(this, RecommendLv, *(UnityEngine_Color_o *)(v5 + 24), v79);
  v81 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  mLabelFaceMaskQuestSp = this->fields.mLabelFaceMaskQuestSp;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v81 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  }
  v83 = *(_DWORD *)&v81->fields.mTitleLevelSp[1].fields.mInvert;
  FaceMaskSpriteName = QuestBoardListViewItemDraw__GetFaceMaskSpriteName(v81, v49, v80);
  v86 = QuestBoardListViewItemDraw__SetFaceImage(
          this,
          PhaseDetailedEntity,
          mLabelFaceMaskQuestSp,
          v83,
          FaceMaskSpriteName,
          *(UnityEngine_Color_o *)(v5 + 24),
          v85);
  mTitleNameLb = this->fields.mTitleNameLb;
  if ( v86 )
  {
    Instance = (__int64)QuestBoardListViewItemDraw__GetDispQuestName(this, PhaseDetailedEntity, v49, v87);
    if ( !mTitleNameLb )
      goto LABEL_226;
    UILabel__set_text(mTitleNameLb, (System_String_o *)Instance, 0LL);
    goto LABEL_159;
  }
  Instance = (__int64)QuestEntity__getQuestName(PhaseDetailedEntity, 0LL);
  if ( !mTitleNameLb )
    goto LABEL_226;
  UILabel__set_text(mTitleNameLb, (System_String_o *)Instance, 0LL);
  if ( v49 != 1 || !QuestBoardListViewItemDraw__IsMainWar(v90, quest_info_k__BackingField->fields.warId, v91) )
  {
    Instance = (__int64)this->fields.boardIconTexture;
    if ( !Instance )
      goto LABEL_226;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0LL);
    Instance = (__int64)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_226;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_226;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    mLabelNameSp = this->fields.mLabelNameSp;
    QuestIconName = QuestBoardListViewItemDraw__GetQuestIconName(v94, PhaseDetailedEntity, v49, v95);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    Instance = AtlasManager__SetEventUI(mLabelNameSp, QuestIconName, 0LL);
    if ( !mLabelNameSp )
      goto LABEL_226;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLabelNameSp, Instance & 1, 0LL);
    Instance = (__int64)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_226;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 840LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 848LL));
    Instance = (__int64)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_226;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_226;
    Instance = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          (UnityEngine_GameObject_o *)Instance,
                          (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !Instance )
      goto LABEL_226;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v5 + 24), 0LL);
    Instance = (__int64)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_226;
    if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Instance, 0LL) )
    {
      *(_DWORD *)(v5 + 40) = PhaseDetailedEntity->fields.id;
      v97 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(
        v97,
        (Il2CppObject *)v5,
        Method_QuestBoardListViewItemDraw___c__DisplayClass316_0__SetItemOfWarBoard_b__0__,
        0LL);
      QuestBoardListViewItemDraw__LoadBoardIconTexture(this, PhaseDetailedEntity, v97, v98);
    }
LABEL_159:
    if ( dispType == 2 )
      goto LABEL_160;
    goto LABEL_161;
  }
  if ( dispType == 2 )
  {
LABEL_160:
    QuestBoardListViewItemDraw__SetAdvanceNoticeText(
      this,
      quest_info_k__BackingField,
      PhaseDetailedEntity,
      checkTime,
      v89);
    goto LABEL_163;
  }
  QuestBoardListViewItemDraw__SetChapterSubIdDisp(this, quest_info_k__BackingField, v92);
LABEL_161:
  Instance = (__int64)this->fields.mAdvanceNoticeLb;
  if ( !Instance )
    goto LABEL_226;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
LABEL_163:
  Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
  v99 = this->fields.mTitleNameLb;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  }
  if ( !v99 )
    goto LABEL_226;
  UILabel__SetCondensedScale(v99, QuestBoardListViewItemDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH, 0LL);
  Instance = (__int64)this->fields.mTitleNameLb;
  if ( !Instance )
    goto LABEL_226;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v5 + 24), 0LL);
  PhasePresentGiftData = QuestBoardListViewItemDraw__GetPhasePresentGiftData(
                           v100,
                           &phasePresentData,
                           PhaseDetailedEntity,
                           quest_info_k__BackingField->fields.questPhase,
                           v101);
  QuestBoardListViewItemDraw__SetupRewardIconDisp(
    this,
    PhaseDetailedEntity,
    phasePresentData,
    dispType == 2,
    *(UnityEngine_Color_o *)(v5 + 24),
    v103);
  v104 = quest_info_k__BackingField->fields.questId;
  v105 = phasePresentData;
  afterClear = PhaseDetailedEntity->fields.afterClear;
  v107 = *(float *)(v5 + 24);
  v108 = *(float *)(v5 + 28);
  v109 = *(float *)(v5 + 32);
  v110 = *(float *)(v5 + 36);
  IsRepeatReward = QuestEntity__IsRepeatReward(PhaseDetailedEntity, 0LL);
  v150.fields.r = v107;
  v150.fields.g = v108;
  v150.fields.b = v109;
  v150.fields.a = v110;
  QuestBoardListViewItemDraw__SetupRewardDisp(
    this,
    v104,
    PhasePresentGiftData,
    v105,
    afterClear,
    v150,
    IsRepeatReward,
    v112);
  QuestBoardListViewItemDraw__SetupRewardGotAndNotGiveDisp(
    this,
    quest_info_k__BackingField,
    entity,
    *(UnityEngine_Color_o *)(v5 + 24),
    v113);
  QuestBoardListViewItemDraw__ResetInfoTextList(this, v114);
  fixedVal[0] = -1;
  fixedVal[1] = 0;
  mInfoTextList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields.mInfoTextList;
  Instance = (__int64)QuestBoardListViewItemDraw__GetCampaignText(
                        this,
                        PhaseDetailedEntity->fields.id,
                        questPhase,
                        !v140,
                        &fixedVal[1],
                        fixedVal,
                        v116);
  if ( !mInfoTextList )
    goto LABEL_226;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    mInfoTextList,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
  Instance = (__int64)this->fields.mRarePrismSp;
  if ( !Instance )
    goto LABEL_226;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_226;
  Instance = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( (Instance & 1) != 0 )
  {
    Instance = (__int64)entity;
    if ( !entity )
      goto LABEL_226;
    Instance = UserQuestEntity__IsExpireNoLimit(entity, 0LL);
    if ( (Instance & 1) != 0 )
      goto LABEL_184;
    if ( !entity )
      goto LABEL_226;
    p_expireAt = &entity->fields.expireAt;
  }
  else
  {
    p_expireAt = &quest_info_k__BackingField->fields.endTime;
  }
  v118 = *p_expireAt;
  if ( *p_expireAt >= 1 )
  {
    Instance = QuestEntity__HasFlag(PhaseDetailedEntity, 32LL, 0LL);
    if ( (Instance & 1) == 0 )
    {
      v119 = this->fields.mInfoTextList;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v120 = LocalizationManager__Get((System_String_o *)StringLiteral_13658/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0LL);
      v121 = (QuestBoardInformaionText_o *)sub_B77694(QuestBoardInformaionText_TypeInfo);
      v151.fields.r = 0.0;
      v151.fields.g = 0.0;
      v151.fields.b = 0.0;
      v151.fields.a = 0.0;
      v149.fields.x = 0.0;
      v149.fields.y = 0.0;
      v149.fields.z = 0.0;
      v122 = (EventMissionProgressRequest_Argument_ProgressData_o *)v121;
      QuestBoardInformaionText___ctor(v121, v120, v118, 0, 0, v151, -1, 0, v149, 1, v136, 0LL, v137);
      if ( !v119 )
        goto LABEL_226;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v119,
        v122,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
    }
  }
LABEL_184:
  v123 = this->fields.mInfoTextList;
  if ( !v123 )
    goto LABEL_226;
  size = (unsigned int)v123->fields._size;
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  if ( (int)size < 1 )
  {
    v129 = 0;
    goto LABEL_196;
  }
  v125 = this->fields.mListViewObject;
  if ( !v125 )
    goto LABEL_226;
  Instance = (__int64)v125->fields.manager;
  if ( !Instance )
    goto LABEL_226;
  v126 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v126
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v126 - 8) != QuestBoardListViewManager_TypeInfo )
  {
    goto LABEL_228;
  }
  AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt((QuestBoardListViewManager_o *)Instance, size, 0LL);
  if ( v123->fields._size <= (unsigned int)AlphaAnimCnt )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  Instance = (__int64)v123->fields._items->m_Items[AlphaAnimCnt];
  if ( !Instance )
    goto LABEL_226;
  QuestBoardInformaionText__SetTime(
    (QuestBoardInformaionText_o *)Instance,
    &this->fields.mOptionInfoLb,
    &this->fields.mOptionInfoFrameSp,
    v127);
  Instance = (__int64)this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_226;
  BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)Instance, 1.0, 0LL);
  v129 = 1;
  quest_info_k__BackingField->fields.costCalcVal = fixedVal[1];
  quest_info_k__BackingField->fields._fixedCostVal_k__BackingField = fixedVal[0];
LABEL_196:
  Instance = (__int64)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_226;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_226;
  Instance = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_226;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_226;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v129, 0LL);
  Instance = (__int64)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_226;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_226;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v129, 0LL);
  QuestBoardListViewItemDraw__SetCostDisp(
    this,
    PhaseDetailedEntity,
    v77 == 2,
    fixedVal[1],
    fixedVal[0],
    *(UnityEngine_Color_o *)(v5 + 24),
    &isDoubleItemConsume,
    &isDoubleItemConsumeQp,
    &isTripleItemConsume,
    (const MethodInfo *)v136);
  Instance = (__int64)this->fields.mBoardMessage;
  if ( !Instance )
    goto LABEL_226;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_226;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_WarBoardQuestMaster___);
  if ( !Instance )
    goto LABEL_226;
  v130 = WarBoardQuestMaster__GetEntity(
           (WarBoardQuestMaster_o *)Instance,
           quest_info_k__BackingField->fields.questId,
           questPhase,
           0LL);
  if ( !v130 )
    return;
  v131 = v130;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_226;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_WarBoardStageMaster___);
  if ( !Instance )
    goto LABEL_226;
  Instance = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        v131->fields.stageId,
                        (const MethodInfo_21FB894 *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__);
  if ( Instance )
  {
    if ( !this->fields.mBoardMessage )
      goto LABEL_226;
    UILabel__set_text(this->fields.mBoardMessage, *(System_String_o **)(Instance + 48), 0LL);
  }
  Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
  mBoardMessage = this->fields.mBoardMessage;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  }
  if ( !mBoardMessage
    || (UILabel__SetCondensedScale(
          mBoardMessage,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->BOARD_MESSAGE_MAX_WITDH,
          0LL),
        (Instance = (__int64)this->fields.mBoardMessage) == 0) )
  {
LABEL_226:
    sub_B7769C(Instance, size);
  }
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v5 + 24), 0LL);
}


void __fastcall QuestBoardListViewItemDraw__SetListViewObject(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewObject_o *questBoardObject,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.mListViewObject = questBoardObject;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.mListViewObject,
    (System_Int32_array **)questBoardObject,
    (System_String_array **)method,
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
  UnityEngine_Object_o *Component_srcLineSprite; // x19
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_438C804 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C804 = 1;
  }
  StatusSp = QuestBoardListViewItemDraw__GetStatusSp(this, 1, *(const MethodInfo **)&h);
  if ( !StatusSp )
    goto LABEL_21;
  StatusSp = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(StatusSp, 0LL);
  if ( !this->fields.mNewIcon )
    goto LABEL_21;
  if ( ((unsigned __int8)StatusSp & 1) != 0 )
  {
    ShiningIconComponent__Set(this->fields.mNewIcon, 0LL);
    StatusSp = (UnityEngine_GameObject_o *)this->fields.mNewIcon;
    if ( !StatusSp )
      goto LABEL_21;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)StatusSp, 0LL);
    v16.fields.x = x;
    v16.fields.y = y;
    v16.fields.z = z;
    GameObjectExtensions__SetLocalPosition(gameObject, v16, 0LL);
    StatusSp = (UnityEngine_GameObject_o *)this->fields.mNewIcon;
    if ( !StatusSp )
      goto LABEL_21;
    StatusSp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)StatusSp, 0LL);
    if ( !StatusSp )
      goto LABEL_21;
    StatusSp = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             StatusSp,
                                             (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !StatusSp )
      goto LABEL_21;
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
    goto LABEL_21;
  StatusSp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)StatusSp, 0LL);
  if ( !StatusSp )
    goto LABEL_21;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      StatusSp,
                                                      (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  StatusSp = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)StatusSp & 1) != 0 )
  {
    if ( Component_srcLineSprite )
    {
      TimeSyncAlphaSwitcher__Clear((TimeSyncAlphaSwitcher_o *)Component_srcLineSprite, 0LL);
      return;
    }
LABEL_21:
    sub_B7769C(StatusSp, v12);
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
  System_String_o *FREE_ICON_SPRITE_NAME; // x1
  UnityEngine_Component_o *v10; // x20
  QuestBoardListViewItemDraw_c *v11; // x0
  float NEXT_POS_X_AREA_L; // w8
  QuestBoardListViewItemDraw_c *v13; // x0
  QuestBoardListViewItemDraw_c *v14; // x0

  if ( (byte_438C807 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_B775C4(&QuestBoardListViewItemDraw_TypeInfo);
    byte_438C807 = 1;
  }
  mNextSp = (UnityEngine_Component_o *)this->fields.mNextSp;
  if ( !mNextSp )
    goto LABEL_41;
  mNextSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNextSp, 0LL);
  if ( !info || !mNextSp )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mNextSp, info->fields.isNext, 0LL);
  if ( !info->fields.isNext )
    return;
  if ( warEnt && WarEntity__HasFlag(warEnt, 0x200000, 0LL) )
  {
    v8 = this->fields.mNextSp;
    mNextSp = (UnityEngine_Component_o *)QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    }
    if ( !v8 )
      goto LABEL_41;
    FREE_ICON_SPRITE_NAME = QuestBoardListViewItemDraw_TypeInfo->static_fields->FREE_ICON_SPRITE_NAME;
  }
  else
  {
    v8 = this->fields.mNextSp;
    mNextSp = (UnityEngine_Component_o *)QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    }
    if ( !v8 )
      goto LABEL_41;
    FREE_ICON_SPRITE_NAME = QuestBoardListViewItemDraw_TypeInfo->static_fields->NEXT_ICON_SPRITE_NAME;
  }
  UISprite__set_spriteName(v8, FREE_ICON_SPRITE_NAME, 0LL);
  mNextSp = (UnityEngine_Component_o *)this->fields.mNextSp;
  if ( !mNextSp )
    goto LABEL_41;
  mNextSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNextSp, 0LL);
  if ( !mNextSp )
    goto LABEL_41;
  mNextSp = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                         (UnityEngine_GameObject_o *)mNextSp,
                                         (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  v10 = mNextSp;
  if ( !warEnt )
    goto LABEL_34;
  mNextSp = (UnityEngine_Component_o *)WarEntity__HasFlag(warEnt, 0x400000, 0LL);
  if ( ((unsigned __int8)mNextSp & 1) == 0 )
  {
    mNextSp = (UnityEngine_Component_o *)WarEntity__HasFlag(warEnt, 256, 0LL);
    if ( ((unsigned __int8)mNextSp & 1) != 0 )
    {
      if ( v10 )
      {
        v13 = QuestBoardListViewItemDraw_TypeInfo;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v13 = QuestBoardListViewItemDraw_TypeInfo;
        }
        NEXT_POS_X_AREA_L = v13->static_fields->NEXT_POS_X_AREA_L;
        goto LABEL_39;
      }
LABEL_41:
      sub_B7769C(mNextSp, info);
    }
LABEL_34:
    if ( v10 )
    {
      v14 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v14 = QuestBoardListViewItemDraw_TypeInfo;
      }
      NEXT_POS_X_AREA_L = v14->static_fields->NEXT_POS_X_AREA_R;
      goto LABEL_39;
    }
    goto LABEL_41;
  }
  if ( !v10 )
    goto LABEL_41;
  v11 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v11 = QuestBoardListViewItemDraw_TypeInfo;
  }
  NEXT_POS_X_AREA_L = v11->static_fields->NEXT_POS_X_AREA_CENTER;
LABEL_39:
  *(float *)&v10[5].klass = NEXT_POS_X_AREA_L;
  *((float *)&v10[5].monitor + 1) = NEXT_POS_X_AREA_L;
}


void __fastcall QuestBoardListViewItemDraw__SetPickupIcon(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_Object_o *StatusSp; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x19

  if ( (byte_438C805 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C805 = 1;
  }
  StatusSp = (UnityEngine_Object_o *)QuestBoardListViewItemDraw__GetStatusSp(this, 4, v2);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Equality(StatusSp, 0LL, 0LL);
  if ( !v5 )
  {
    if ( StatusSp )
    {
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)StatusSp,
                                                          (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v5 = UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
      if ( v5 )
        return;
      if ( Component_srcLineSprite )
      {
        TimeSyncAlphaSwitcher__Clear((TimeSyncAlphaSwitcher_o *)Component_srcLineSprite, 0LL);
        return;
      }
    }
    sub_B7769C(v5, v6);
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
  System_Collections_Generic_List_int__o *v11; // x22
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  QuestGroupMaster_o *v14; // x23
  UISprite_o *mPrevSp; // x20
  QuestBoardListViewItemDraw_c *v16; // x0
  AtlasManager_c *v17; // x8
  System_String_o *QUEST_BOARD_PREV_PAUSE_ICON_NAME; // x21
  TerminalPramsManager_c *v19; // x0
  const MethodInfo *v20; // x2
  QuestBoardListViewItemDraw_c *v21; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_438C808 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToList_int___);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&QuestBoardListViewItemDraw_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438C808 = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !questEnt )
    goto LABEL_44;
  v14 = (QuestGroupMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)Instance, questEnt->fields.id, 16, 0LL);
  if ( (_DWORD)Instance )
  {
    Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByGroupId(v14, (int32_t)Instance, 16, 0LL);
    if ( !Instance )
      goto LABEL_44;
    if ( Instance->fields.datalist )
    {
      Instance = (DataManager_o *)System_Linq_Enumerable__ToList_int_(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                    (const MethodInfo_1D402F0 *)Method_System_Linq_Enumerable_ToList_int___);
      v11 = (System_Collections_Generic_List_int__o *)Instance;
    }
  }
  if ( !v11 )
LABEL_44:
    sub_B7769C(Instance, v13);
  if ( v11->fields._size <= 0 )
  {
    System_Collections_Generic_List_int___Add(
      v11,
      questEnt->fields.id,
      (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
    if ( isInterruptedQuest )
    {
LABEL_13:
      mPrevSp = this->fields.mPrevSp;
      v16 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v16 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v17 = AtlasManager_TypeInfo;
      QUEST_BOARD_PREV_PAUSE_ICON_NAME = v16->static_fields->QUEST_BOARD_PREV_PAUSE_ICON_NAME;
      goto LABEL_36;
    }
  }
  else if ( isInterruptedQuest )
  {
    goto LABEL_13;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_43884CA )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884CA = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
  }
  if ( !System_Collections_Generic_List_int___Contains(
          v11,
          v19->static_fields->_LastPlayedQuestId_k__BackingField,
          (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__) )
    goto LABEL_29;
  Instance = (DataManager_o *)QuestBoardListViewItemDraw__GetStatusSp(this, 1, v20);
  if ( !Instance )
    goto LABEL_44;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
LABEL_29:
    Instance = (DataManager_o *)this->fields.mPrevSp;
    if ( Instance )
    {
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( Instance )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
        return;
      }
    }
    goto LABEL_44;
  }
  mPrevSp = this->fields.mPrevSp;
  v21 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v21 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v17 = AtlasManager_TypeInfo;
  QUEST_BOARD_PREV_PAUSE_ICON_NAME = v21->static_fields->QUEST_BOARD_PREV_ICON_NAME;
LABEL_36:
  if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v17);
  AtlasManager__SetBanner(mPrevSp, QUEST_BOARD_PREV_PAUSE_ICON_NAME, 0LL);
  Instance = (DataManager_o *)this->fields.mPrevSp;
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (DataManager_o *)this->fields.mPrevSp;
  if ( !Instance )
    goto LABEL_44;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  v23.fields.x = x;
  v23.fields.y = y;
  v23.fields.z = z;
  GameObjectExtensions__SetLocalPosition(gameObject, v23, 0LL);
  Instance = (DataManager_o *)this->fields.mPrevSp;
  if ( !Instance )
    goto LABEL_44;
  ((void (__fastcall *)(DataManager_o *, void *))Instance->klass[2]._1.typeMetadataHandle)(
    Instance,
    Instance->klass[2]._1.interopData);
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
  UnityEngine_Object_o *Component_WebViewObject; // x20
  UnityEngine_GameObject_o *v14; // x21
  float v15; // s0
  float v16; // s0
  float v17; // s8
  struct UILabel_o *mTitleLevelLb; // x8
  UnityEngine_Object_o *v19; // x20
  int mWidth; // s8
  float m_CachedPtr; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = baseColor.fields.a;
  b = baseColor.fields.b;
  g = baseColor.fields.g;
  r = baseColor.fields.r;
  if ( (byte_438C829 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_CondensedScaleSprite___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C829 = 1;
  }
  mTitleLevelRoot = this->fields.mTitleLevelRoot;
  IsNullOrEmpty = (UnityEngine_Component_o *)System_String__IsNullOrEmpty(recommendLv, 0LL);
  if ( !mTitleLevelRoot )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive(mTitleLevelRoot, ((unsigned __int8)IsNullOrEmpty & 1) == 0, 0LL);
  IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.mTitleLevelRoot;
  if ( !IsNullOrEmpty )
    goto LABEL_40;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)IsNullOrEmpty, 0LL) )
  {
    IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.mTitleLevelSp;
    if ( !IsNullOrEmpty )
      goto LABEL_40;
    Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        IsNullOrEmpty,
                                                        (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_CondensedScaleSprite___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    IsNullOrEmpty = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      if ( !Component_WebViewObject )
        goto LABEL_40;
      CondensedScaleSprite__Init((CondensedScaleSprite_o *)Component_WebViewObject, 0LL);
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
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  IsNullOrEmpty = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                               Component_WebViewObject,
                                                               0LL,
                                                               0LL);
                  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
                  {
                    if ( Component_WebViewObject )
                    {
                      v16 = CondensedScaleSprite__GetAfterAdjustWidth(
                              (CondensedScaleSprite_o *)Component_WebViewObject,
                              0LL);
                      IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.mTitleLevelSp;
                      if ( IsNullOrEmpty )
                      {
                        v17 = (float)(IsNullOrEmpty[6].fields.m_CachedPtr / 2) + (float)(v16 * -0.5);
LABEL_39:
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
                      IsNullOrEmpty = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                   IsNullOrEmpty,
                                                                   (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
                      mTitleLevelLb = this->fields.mTitleLevelLb;
                      if ( mTitleLevelLb )
                      {
                        v19 = (UnityEngine_Object_o *)IsNullOrEmpty;
                        mWidth = mTitleLevelLb->fields.mWidth;
                        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        }
                        m_CachedPtr = (float)mWidth;
                        IsNullOrEmpty = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v19, 0LL, 0LL);
                        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
                        {
                          if ( !v19 )
                            goto LABEL_40;
                          if ( m_CachedPtr > (float)v19[1].fields.m_CachedPtr )
                            m_CachedPtr = (float)v19[1].fields.m_CachedPtr;
                        }
                        IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.mTitleLevelSp;
                        if ( IsNullOrEmpty )
                        {
                          v17 = m_CachedPtr * -0.5;
                          goto LABEL_39;
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
LABEL_40:
    sub_B7769C(IsNullOrEmpty, v12);
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
  RestrictionBaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438C7F5 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_QuestRestrictionMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_RestrictionBaseMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438C7F5 = 1;
  }
  entity = 0LL;
  mOptionRestrinctionSp = (UnityEngine_Component_o *)this->fields.mOptionRestrinctionSp;
  if ( !mOptionRestrinctionSp )
    goto LABEL_18;
  mOptionRestrinctionSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mOptionRestrinctionSp, 0LL);
  if ( !mOptionRestrinctionSp )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionRestrinctionSp, 0, 0LL);
  mOptionRestrinctionSp = (UnityEngine_Component_o *)this->fields.mOptionRestrinctionLb;
  if ( !mOptionRestrinctionSp )
    goto LABEL_18;
  UILabel__set_maxLineCount((UILabel_o *)mOptionRestrinctionSp, 1, 0LL);
  mOptionRestrinctionSp = (UnityEngine_Component_o *)this->fields.mOptionRestrinctionLb;
  if ( !mOptionRestrinctionSp )
    goto LABEL_18;
  UILabel__set_text((UILabel_o *)mOptionRestrinctionSp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  mOptionRestrinctionSp = (UnityEngine_Component_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_RestrictionBaseMaster___);
  if ( !mOptionRestrinctionSp )
    goto LABEL_18;
  mOptionRestrinctionSp = (UnityEngine_Component_o *)RestrictionBaseMaster__TryGetEntity(
                                                       (RestrictionBaseMaster_o *)mOptionRestrinctionSp,
                                                       &entity,
                                                       questId,
                                                       phase,
                                                       0LL);
  if ( ((unsigned __int8)mOptionRestrinctionSp & 1) != 0 )
    goto LABEL_16;
  mOptionRestrinctionLb = this->fields.mOptionRestrinctionLb;
  mOptionRestrinctionSp = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mOptionRestrinctionSp
    || (mOptionRestrinctionSp = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)mOptionRestrinctionSp,
                                                             (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestRestrictionMaster___)) == 0LL
    || (mOptionRestrinctionSp = (UnityEngine_Component_o *)QuestRestrictionMaster__GetRestrictionName(
                                                             (QuestRestrictionMaster_o *)mOptionRestrinctionSp,
                                                             questId,
                                                             phase,
                                                             0LL),
        !mOptionRestrinctionLb) )
  {
LABEL_18:
    sub_B7769C(mOptionRestrinctionSp, *(_QWORD *)&questId);
  }
  UILabel__set_text(mOptionRestrinctionLb, (System_String_o *)mOptionRestrinctionSp, 0LL);
LABEL_16:
  v9 = this->fields.mOptionRestrinctionLb;
  if ( !v9 )
    goto LABEL_18;
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
    sub_B7769C(mOptionRestrinctionLb, *(_QWORD *)&spacingX);
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
      sub_B7769C(0LL, method);
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
    sub_B7769C(StatusSp, v6);
  UnityEngine_GameObject__SetActive(StatusSp, isActive, 0LL);
}


void __fastcall QuestBoardListViewItemDraw__SetStatusToggle(
        QuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  void *StatusSp; // x0
  QuestBoardListViewManager_c *v5; // x1
  TimeSyncAlphaSwitcher_o *Component_srcLineSprite; // x19
  const MethodInfo *v7; // x2
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  TimeSyncAlphaSwitcher_o *v9; // x20
  __int64 v10; // x9
  float v11; // s8
  QuestBoardListViewItemDraw_o *v12; // x0
  MapControl_QuestInfo_o *v13; // x1
  QuestEntity_o *v14; // x2
  int64_t v15; // x3
  const MethodInfo *v16; // x4

  if ( (byte_438C809 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
    sub_B775C4(&QuestBoardListViewManager_TypeInfo);
    byte_438C809 = 1;
  }
  StatusSp = QuestBoardListViewItemDraw__GetStatusSp(this, 4, v2);
  if ( !StatusSp )
    goto LABEL_12;
  Component_srcLineSprite = (TimeSyncAlphaSwitcher_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         (UnityEngine_GameObject_o *)StatusSp,
                                                         (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
  StatusSp = QuestBoardListViewItemDraw__GetStatusSp(this, 1, v7);
  if ( !StatusSp )
    goto LABEL_12;
  StatusSp = UnityEngine_GameObject__GetComponent_srcLineSprite_(
               (UnityEngine_GameObject_o *)StatusSp,
               (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_12;
  v9 = (TimeSyncAlphaSwitcher_o *)StatusSp;
  StatusSp = mListViewObject->fields.manager;
  if ( !StatusSp )
    goto LABEL_12;
  v5 = QuestBoardListViewManager_TypeInfo;
  v10 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)StatusSp + 300LL) >= (unsigned int)v10
    && *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)StatusSp + 200LL) + 8 * v10 - 8) == QuestBoardListViewManager_TypeInfo )
  {
    if ( Component_srcLineSprite )
    {
      v11 = *((float *)StatusSp + 144);
      TimeSyncAlphaSwitcher__SetAlphaBlink(Component_srcLineSprite, 2, 0, v11, 0LL);
      if ( v9 )
      {
        TimeSyncAlphaSwitcher__SetAlphaBlink(v9, 2, 1, v11, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B7769C(StatusSp, v5);
  }
  v12 = (QuestBoardListViewItemDraw_o *)sub_B77990(StatusSp);
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
  UnityEngine_GameObject_o *mBannerRoot; // x8
  struct TerminalBannerComponent_array *v9; // x8
  int max_length; // w25
  __int64 v11; // x26
  unsigned int v12; // w20
  unsigned int v13; // w9
  UnityEngine_Component_o *v14; // x21
  unsigned int v15; // w10
  TerminalBannerComponent_o *v16; // x22
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  int mBannerCount; // w20
  const MethodInfo *v20; // x3
  struct UISprite_array *mBannerPointSps; // x8
  int v22; // w20
  int v23; // w21
  int32_t v24; // w22
  const MethodInfo *v25; // x2
  __int64 v26; // x0

  if ( !questBoardItem )
    goto LABEL_44;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_44;
  AreaBoardInfo_k__BackingField = quest_info_k__BackingField->fields._AreaBoardInfo_k__BackingField;
  if ( !AreaBoardInfo_k__BackingField )
    goto LABEL_44;
  bannerEntList = AreaBoardInfo_k__BackingField->fields.bannerEntList;
  if ( !bannerEntList )
    goto LABEL_44;
  mTerminalBanners = this->fields.mTerminalBanners;
  v7 = this;
  if ( !mTerminalBanners )
    goto LABEL_44;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Mathf__Min_41473676(
                                           bannerEntList->max_length,
                                           mTerminalBanners->max_length,
                                           0LL);
  mBannerRoot = v7->fields.mBannerRoot;
  v7->fields.mBannerCount = (int)this;
  if ( !mBannerRoot )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive(mBannerRoot, 1, 0LL);
  v9 = v7->fields.mTerminalBanners;
  if ( !v9 )
    goto LABEL_44;
  max_length = v9->max_length;
  v11 = 4LL;
  while ( 1 )
  {
    v12 = v11 - 4;
    if ( (int)v11 - 4 >= max_length )
      break;
    v13 = v9->max_length;
    if ( v12 >= v13 )
      goto LABEL_45;
    v14 = (UnityEngine_Component_o *)*((_QWORD *)&v9->obj.klass + v11);
    v15 = v11 - 3;
    if ( (int)v11 - 3 >= v7->fields.mBannerCount )
    {
      v16 = 0LL;
      if ( !v14 )
        goto LABEL_44;
    }
    else
    {
      if ( v15 >= v13 )
        goto LABEL_45;
      v16 = v9->m_Items[v15];
      if ( !v14 )
        goto LABEL_44;
    }
    this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(v14, 0LL);
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (int)v12 < v7->fields.mBannerCount, 0LL);
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(v14, 0LL);
      if ( this )
      {
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__get_activeSelf(
                                                 (UnityEngine_GameObject_o *)this,
                                                 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( v12 >= bannerEntList->max_length )
            goto LABEL_45;
          TerminalBannerComponent__Setup(
            (TerminalBannerComponent_o *)v14,
            v12,
            *((BannerEntity_o **)&bannerEntList->obj.klass + v11),
            v7->fields.mBannerCount,
            v16,
            0LL);
        }
        v9 = v7->fields.mTerminalBanners;
        ++v11;
        if ( v9 )
          continue;
      }
    }
    goto LABEL_44;
  }
  if ( !v9->max_length )
  {
LABEL_45:
    v26 = sub_B776C8(this);
    sub_B77668(v26, 0LL);
  }
  this = (QuestBoardListViewItemDraw_o *)v9->m_Items[0];
  if ( !this )
    goto LABEL_44;
  TerminalBannerComponent__StartLoadAndDisp((TerminalBannerComponent_o *)this, 0LL);
  QuestBoardListViewItemDraw__ResetBannerAutoMoveTime(v7, v17);
  QuestBoardListViewItemDraw__SetupEntryBanner(v7, v18);
  AreaBoardInfo_k__BackingField->fields.bannerFocusIndex = 0;
  this = (QuestBoardListViewItemDraw_o *)v7->fields.mBannerArrowObj;
  v7->fields.mIsEnableBannerAutoMoveOld = 0;
  if ( !this )
    goto LABEL_44;
  mBannerCount = v7->fields.mBannerCount;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, mBannerCount > 1, 0LL);
  if ( mBannerCount >= 2 )
  {
    QuestBoardListViewItemDraw__SetDispBannerArrows(v7, 0, 1, v20);
    this = (QuestBoardListViewItemDraw_o *)v7->fields.mBannerPointGrid;
    if ( this )
    {
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        mBannerPointSps = v7->fields.mBannerPointSps;
        if ( mBannerPointSps )
        {
          v22 = mBannerPointSps->max_length;
          if ( v22 >= 1 )
          {
            v23 = 1;
            while ( 1 )
            {
              v24 = v23 - 1;
              if ( v23 - 1 >= mBannerPointSps->max_length )
                goto LABEL_45;
              this = (QuestBoardListViewItemDraw_o *)mBannerPointSps->m_Items[v24];
              if ( this )
              {
                this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
                if ( this )
                {
                  UnityEngine_GameObject__SetActive(
                    (UnityEngine_GameObject_o *)this,
                    v24 < v7->fields.mBannerCount,
                    0LL);
                  if ( v23 >= v22 )
                    break;
                  mBannerPointSps = v7->fields.mBannerPointSps;
                  ++v23;
                  if ( mBannerPointSps )
                    continue;
                }
              }
              goto LABEL_44;
            }
          }
          this = (QuestBoardListViewItemDraw_o *)v7->fields.mBannerPointGrid;
          if ( this )
          {
            ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, Il2CppClass *))this->klass[1]._1.castClass)(
              this,
              this->klass[1]._1.declaringType);
            goto LABEL_43;
          }
        }
      }
    }
LABEL_44:
    sub_B7769C(this, questBoardItem);
  }
  this = (QuestBoardListViewItemDraw_o *)v7->fields.mBannerPointGrid;
  if ( !this )
    goto LABEL_44;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
LABEL_43:
  QuestBoardListViewItemDraw__UpdateDispBannerPoint(v7, 0, v25);
}


void __fastcall QuestBoardListViewItemDraw__SetupEntryBanner(
        QuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw_o *v2; // x19
  struct TerminalBannerComponent_array *mTerminalBanners; // x8
  UnityEngine_Object_o *v4; // x20
  UnityEngine_GameObject_o *v5; // x20
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_Object_o *v7; // x21
  TerminalPramsManager_c *v8; // x0
  QuestBoardListViewItemDraw_c *v9; // x0
  __int64 v10; // x0

  v2 = this;
  if ( (byte_438C81F & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&QuestBoardListViewItemDraw_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438C81F = 1;
  }
  mTerminalBanners = v2->fields.mTerminalBanners;
  if ( !mTerminalBanners )
    goto LABEL_43;
  if ( !mTerminalBanners->max_length )
  {
    v10 = sub_B776C8(this);
    sub_B77668(v10, 0LL);
  }
  v4 = (UnityEngine_Object_o *)mTerminalBanners->m_Items[0];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Object__op_Equality(v4, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v4 )
    {
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
      if ( this )
      {
        v5 = (UnityEngine_GameObject_o *)this;
        Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
        {
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__Destroy_36309980(Component_srcLineSprite, 0LL);
        }
        v7 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       v5,
                                       (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) )
        {
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__Destroy_36309980(v7, 0LL);
        }
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_438C82E )
        {
          sub_B775C4(&TerminalPramsManager_TypeInfo);
          byte_438C82E = 1;
        }
        v8 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v9 = QuestBoardListViewItemDraw_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionX(v5, v9->static_fields->BANNER_ENTORY_START_POS_X, 0LL);
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 v5,
                                                 (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
LABEL_43:
    sub_B7769C(this, method);
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
  clsQuestCheck_o *mRewardFirstSP; // x0
  bool v19; // w23
  __int64 v20; // x2
  QuestBoardListViewItemDraw_c *v21; // x0
  int32_t phase; // w9
  System_String_o *QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX; // x20
  Il2CppObject *v24; // x0
  System_String_o *v25; // x20
  int32_t v26; // [xsp+2Ch] [xbp-34h] BYREF
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_438C7FF & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&QuestBoardListViewItemDraw_TypeInfo);
    sub_B775C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B775C4(&SingletonTemplate_clsQuestCheck__TypeInfo);
    byte_438C7FF = 1;
  }
  if ( afterClearType == 3 )
  {
    if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
    }
    mRewardFirstSP = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !mRewardFirstSP )
      goto LABEL_41;
    v19 = !clsQuestCheck__IsQuestClear(mRewardFirstSP, questId, 0, 0LL);
    if ( !isContainPhasePresent )
    {
LABEL_9:
      mRewardFirstSP = (clsQuestCheck_o *)this->fields.mRewardFirstSP;
      if ( !mRewardFirstSP )
        goto LABEL_41;
      mRewardFirstSP = (clsQuestCheck_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)mRewardFirstSP,
                                            0LL);
      if ( !mRewardFirstSP )
        goto LABEL_41;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mRewardFirstSP, v19 && !isRepeatReward, 0LL);
      mRewardFirstSP = (clsQuestCheck_o *)this->fields.mRewardFirstSP;
      if ( !mRewardFirstSP )
        goto LABEL_41;
      v27.fields.r = r;
      v27.fields.g = g;
      v27.fields.b = b;
      v27.fields.a = a;
      UIWidget__set_color((UIWidget_o *)mRewardFirstSP, v27, 0LL);
      mRewardFirstSP = (clsQuestCheck_o *)this->fields.mRewardPhaseSP;
      if ( !mRewardFirstSP )
        goto LABEL_41;
      mRewardFirstSP = (clsQuestCheck_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)mRewardFirstSP,
                                            0LL);
      if ( !mRewardFirstSP )
        goto LABEL_41;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mRewardFirstSP, 0, 0LL);
      mRewardFirstSP = (clsQuestCheck_o *)this->fields.mRewardQuestSP;
      if ( !mRewardFirstSP )
        goto LABEL_41;
      goto LABEL_39;
    }
  }
  else
  {
    v19 = 0;
    if ( !isContainPhasePresent )
      goto LABEL_9;
  }
  if ( phasePresentData )
  {
    mRewardFirstSP = (clsQuestCheck_o *)this->fields.mRewardPhaseSP;
    if ( mRewardFirstSP )
    {
      mRewardFirstSP = (clsQuestCheck_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)mRewardFirstSP,
                                            0LL);
      if ( mRewardFirstSP )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mRewardFirstSP, 1, 0LL);
        mRewardFirstSP = (clsQuestCheck_o *)this->fields.mRewardPhaseSP;
        if ( mRewardFirstSP )
        {
          v28.fields.r = r;
          v28.fields.g = g;
          v28.fields.b = b;
          v28.fields.a = a;
          UIWidget__set_color((UIWidget_o *)mRewardFirstSP, v28, 0LL);
          v21 = QuestBoardListViewItemDraw_TypeInfo;
          if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
            v21 = QuestBoardListViewItemDraw_TypeInfo;
          }
          phase = phasePresentData->fields.phase;
          QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX = v21->static_fields->QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX;
          v26 = phase;
          v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v20);
          mRewardFirstSP = (clsQuestCheck_o *)System_String__Format(
                                                QUEST_BOARD_PHASE_REWARD_NUM_SPNAME_PREFIX,
                                                v24,
                                                0LL);
          if ( this->fields.mRewardPhaseNumSP )
          {
            v25 = (System_String_o *)mRewardFirstSP;
            UISprite__set_atlas(this->fields.mRewardPhaseNumSP, this->fields.mTerminalAtlas, 0LL);
            mRewardFirstSP = (clsQuestCheck_o *)this->fields.mRewardPhaseNumSP;
            if ( mRewardFirstSP )
            {
              UISprite__set_spriteName((UISprite_o *)mRewardFirstSP, v25, 0LL);
              mRewardFirstSP = (clsQuestCheck_o *)this->fields.mRewardPhaseNumSP;
              if ( mRewardFirstSP )
              {
                v29.fields.r = r;
                v29.fields.g = g;
                v29.fields.b = b;
                v29.fields.a = a;
                UIWidget__set_color((UIWidget_o *)mRewardFirstSP, v29, 0LL);
                mRewardFirstSP = (clsQuestCheck_o *)this->fields.mRewardPhaseNumSP;
                if ( mRewardFirstSP )
                {
                  ((void (__fastcall *)(clsQuestCheck_o *, Il2CppClass *))mRewardFirstSP->klass[2]._1.castClass)(
                    mRewardFirstSP,
                    mRewardFirstSP->klass[2]._1.declaringType);
                  mRewardFirstSP = (clsQuestCheck_o *)this->fields.mRewardFirstSP;
                  if ( mRewardFirstSP )
                  {
                    mRewardFirstSP = (clsQuestCheck_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)mRewardFirstSP,
                                                          0LL);
                    if ( mRewardFirstSP )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mRewardFirstSP, 0, 0LL);
                      mRewardFirstSP = (clsQuestCheck_o *)this->fields.mRewardQuestSP;
                      if ( mRewardFirstSP )
                      {
                        mRewardFirstSP = (clsQuestCheck_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)mRewardFirstSP,
                                                              0LL);
                        if ( mRewardFirstSP )
                        {
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mRewardFirstSP, 0, 0LL);
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
LABEL_41:
    sub_B7769C(mRewardFirstSP, *(_QWORD *)&questId);
  }
  mRewardFirstSP = (clsQuestCheck_o *)this->fields.mRewardQuestSP;
  if ( !mRewardFirstSP )
    goto LABEL_41;
  mRewardFirstSP = (clsQuestCheck_o *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)mRewardFirstSP,
                                        0LL);
  if ( !mRewardFirstSP )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mRewardFirstSP, 1, 0LL);
  mRewardFirstSP = (clsQuestCheck_o *)this->fields.mRewardQuestSP;
  if ( !mRewardFirstSP )
    goto LABEL_41;
  v30.fields.r = r;
  v30.fields.g = g;
  v30.fields.b = b;
  v30.fields.a = a;
  UIWidget__set_color((UIWidget_o *)mRewardFirstSP, v30, 0LL);
  mRewardFirstSP = (clsQuestCheck_o *)this->fields.mRewardFirstSP;
  if ( !mRewardFirstSP )
    goto LABEL_41;
  mRewardFirstSP = (clsQuestCheck_o *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)mRewardFirstSP,
                                        0LL);
  if ( !mRewardFirstSP )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mRewardFirstSP, 0, 0LL);
  mRewardFirstSP = (clsQuestCheck_o *)this->fields.mRewardPhaseSP;
  if ( !mRewardFirstSP )
    goto LABEL_41;
LABEL_39:
  mRewardFirstSP = (clsQuestCheck_o *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)mRewardFirstSP,
                                        0LL);
  if ( !mRewardFirstSP )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mRewardFirstSP, 0, 0LL);
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
  if ( (byte_438C800 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_B775C4(&CondType_TypeInfo);
    byte_438C800 = 1;
  }
  if ( !questInfo )
    goto LABEL_17;
  questId = questInfo->fields.questId;
  IsDisplayRewardNotGive = QuestBoardListViewItemDraw__IsDisplayRewardNotGive(
                             this,
                             questInfo,
                             (const MethodInfo *)userQuestEnt);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  this = (QuestBoardListViewItemDraw_o *)CondType__IsQuestClear_24699280(questId, -1, 0, 0LL);
  v14 = 0;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !userQuestEnt )
      goto LABEL_17;
    v14 = (IsDisplayRewardNotGive | UserQuestEntity__HasStatus(userQuestEnt, 4, 0LL)) ^ 1;
  }
  this = (QuestBoardListViewItemDraw_o *)v11->fields.mRewardGetSP;
  if ( !this )
    goto LABEL_17;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v14 & 1, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v11->fields.mRewardGetSP;
  if ( !this )
    goto LABEL_17;
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
LABEL_17:
    sub_B7769C(this, questInfo);
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
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  unsigned __int64 giftIconId; // x1
  UnityEngine_Component_o *mRewardIcon; // x0
  int32_t *p_giftId; // x8
  int32_t v20; // w24
  bool v21; // w1
  System_Collections_Generic_IEnumerable_TSource__o *GiftListById; // x21
  QuestBoardListViewItemDraw___c_c *v23; // x8
  struct QuestBoardListViewItemDraw___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__327_0; // x22
  Il2CppObject *v26; // x23
  struct QuestBoardListViewItemDraw___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct GiftEntity_array *v41; // x21
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  __int64 v43; // x10
  GiftEntity_o *v44; // x9
  int num; // w8
  int32_t v46; // w2
  int32_t v47; // w3
  __int64 v48; // x0
  UnityEngine_Color_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_438C7FC & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_GiftEntity___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_GiftEntity___);
    sub_B775C4(&Method_System_Func_GiftEntity__bool___ctor__);
    sub_B775C4(&System_Func_GiftEntity__bool__TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_B775C4(&QuestBoardListViewManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_QuestBoardListViewItemDraw___c__SetupRewardIconDisp_b__327_0__);
    sub_B775C4(&QuestBoardListViewItemDraw___c_TypeInfo);
    byte_438C7FC = 1;
  }
  this->fields.mRewardIconInfs = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.mRewardIconInfs,
    0LL,
    (System_String_array **)phasePresentData,
    (System_String_array **)isClosed,
    (System_Boolean_array **)method,
    v6,
    v7,
    v8);
  mRewardIcon = (UnityEngine_Component_o *)this->fields.mRewardIcon;
  if ( !mRewardIcon )
    goto LABEL_64;
  mRewardIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mRewardIcon, 0LL);
  if ( !mRewardIcon )
    goto LABEL_64;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mRewardIcon, 0, 0LL);
  if ( phasePresentData )
  {
    p_giftId = &phasePresentData->fields.giftId;
  }
  else
  {
    if ( !questEnt )
      goto LABEL_64;
    p_giftId = &questEnt->fields.giftId;
  }
  v20 = *p_giftId;
  if ( isClosed )
  {
    if ( !questEnt )
      goto LABEL_64;
    mRewardIcon = (UnityEngine_Component_o *)QuestEntity__HasFlag(questEnt, 4096LL, 0LL);
    if ( ((unsigned __int8)mRewardIcon & 1) != 0 )
    {
      mRewardIcon = (UnityEngine_Component_o *)this->fields.mRewardIcon;
      if ( !mRewardIcon )
        goto LABEL_64;
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
      goto LABEL_64;
    giftIconId = (unsigned int)questEnt->fields.giftIconId;
  }
  if ( (int)giftIconId < 1 )
  {
    if ( v20 < 1 )
    {
      mRewardIcon = (UnityEngine_Component_o *)this->fields.mRewardObj;
      if ( !mRewardIcon )
        goto LABEL_64;
      v21 = 0;
      goto LABEL_23;
    }
    mRewardIcon = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( mRewardIcon )
    {
      mRewardIcon = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)mRewardIcon,
                                                 (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_GiftMaster___);
      if ( mRewardIcon )
      {
        GiftListById = (System_Collections_Generic_IEnumerable_TSource__o *)GiftMaster__GetGiftListById(
                                                                              (GiftMaster_o *)mRewardIcon,
                                                                              v20,
                                                                              0LL);
        v23 = QuestBoardListViewItemDraw___c_TypeInfo;
        if ( (BYTE3(QuestBoardListViewItemDraw___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw___c_TypeInfo);
          v23 = QuestBoardListViewItemDraw___c_TypeInfo;
        }
        static_fields = v23->static_fields;
        _9__327_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__327_0;
        if ( !_9__327_0 )
        {
          if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v23);
            static_fields = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
          }
          v26 = (Il2CppObject *)static_fields->__9;
          _9__327_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_GiftEntity__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            _9__327_0,
            v26,
            Method_QuestBoardListViewItemDraw___c__SetupRewardIconDisp_b__327_0__,
            (const MethodInfo_29E92C4 *)Method_System_Func_GiftEntity__bool___ctor__);
          v27 = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
          v27->__9__327_0 = (struct System_Func_GiftEntity__bool__o *)_9__327_0;
          sub_B77560(
            (BattleServantConfConponent_o *)&v27->__9__327_0,
            (System_Int32_array **)_9__327_0,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33);
        }
        v34 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                GiftListById,
                (System_Func_TSource__bool__o *)_9__327_0,
                (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
        mRewardIcon = (UnityEngine_Component_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                   v34,
                                                   (const MethodInfo_1D3D5E4 *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
        if ( mRewardIcon )
        {
          giftIconId = (unsigned __int64)mRewardIcon[1].klass;
          v41 = (struct GiftEntity_array *)mRewardIcon;
          if ( !giftIconId )
          {
LABEL_63:
            this->fields.mRewardIconInfs = v41;
            sub_B77560(
              (BattleServantConfConponent_o *)&this->fields.mRewardIconInfs,
              (System_Int32_array **)v41,
              v35,
              v36,
              v37,
              v38,
              v39,
              v40);
            goto LABEL_24;
          }
          mListViewObject = this->fields.mListViewObject;
          if ( mListViewObject )
          {
            mRewardIcon = (UnityEngine_Component_o *)mListViewObject->fields.manager;
            if ( mRewardIcon )
            {
              v43 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
              if ( *(&mRewardIcon->klass->_2.bitflags2 + 1) >= (unsigned int)v43
                && (QuestBoardListViewManager_c *)mRewardIcon->klass->_2.typeHierarchy[v43 - 1] == QuestBoardListViewManager_TypeInfo )
              {
                mRewardIcon = (UnityEngine_Component_o *)QuestBoardListViewManager__GetAlphaAnimCnt(
                                                           (QuestBoardListViewManager_o *)mRewardIcon,
                                                           giftIconId,
                                                           0LL);
                if ( (unsigned int)mRewardIcon < v41->max_length )
                {
                  v44 = v41->m_Items[(int)mRewardIcon];
                  if ( !v44 )
                    goto LABEL_64;
                  giftIconId = (unsigned int)v44->fields.prioredIconId;
                  mRewardIcon = (UnityEngine_Component_o *)this->fields.mRewardIcon;
                  num = v44->fields.num;
                  if ( (int)giftIconId < 1 )
                  {
                    if ( !mRewardIcon )
                      goto LABEL_64;
                    if ( num <= 1 )
                      v47 = -1;
                    else
                      v47 = v44->fields.num;
                    ItemIconComponent__SetGift(
                      (ItemIconComponent_o *)mRewardIcon,
                      v44->fields.type,
                      v44->fields.objectId,
                      v47,
                      1,
                      0LL);
                  }
                  else
                  {
                    if ( !mRewardIcon )
                      goto LABEL_64;
                    if ( num <= 1 )
                      v46 = -1;
                    else
                      v46 = v44->fields.num;
                    ItemIconComponent__SetItemImage_28178440((ItemIconComponent_o *)mRewardIcon, giftIconId, v46, 0LL);
                  }
                  mRewardIcon = (UnityEngine_Component_o *)this->fields.mRewardIcon;
                  if ( mRewardIcon )
                  {
                    mRewardIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mRewardIcon, 0LL);
                    if ( mRewardIcon )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mRewardIcon, 1, 0LL);
                      goto LABEL_63;
                    }
                  }
                  goto LABEL_64;
                }
              }
              else
              {
                mRewardIcon = (UnityEngine_Component_o *)sub_B77990(mRewardIcon);
              }
              v48 = sub_B776C8(mRewardIcon);
              sub_B77668(v48, 0LL);
            }
          }
        }
      }
    }
LABEL_64:
    sub_B7769C(mRewardIcon, giftIconId);
  }
  mRewardIcon = (UnityEngine_Component_o *)this->fields.mRewardIcon;
  if ( !mRewardIcon )
    goto LABEL_64;
LABEL_20:
  ItemIconComponent__SetItemImage((ItemIconComponent_o *)mRewardIcon, giftIconId, 0LL);
  mRewardIcon = (UnityEngine_Component_o *)this->fields.mRewardIcon;
  if ( !mRewardIcon )
    goto LABEL_64;
  mRewardIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mRewardIcon, 0LL);
  if ( !mRewardIcon )
    goto LABEL_64;
  v21 = 1;
LABEL_23:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mRewardIcon, v21, 0LL);
LABEL_24:
  mRewardIcon = (UnityEngine_Component_o *)this->fields.mRewardObj;
  if ( !mRewardIcon )
    goto LABEL_64;
  mRewardIcon = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             (UnityEngine_GameObject_o *)mRewardIcon,
                                             (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !mRewardIcon )
    goto LABEL_64;
  v49.fields.r = r;
  v49.fields.g = g;
  v49.fields.b = b;
  v49.fields.a = a;
  UIWidget__set_color((UIWidget_o *)mRewardIcon, v49, 0LL);
  mRewardIcon = (UnityEngine_Component_o *)this->fields.mRewardIcon;
  if ( !mRewardIcon )
    goto LABEL_64;
  v50.fields.b = b;
  v50.fields.a = a;
  v50.fields.r = r;
  v50.fields.g = g;
  ItemIconComponent__SetColor((ItemIconComponent_o *)mRewardIcon, v50, 0LL);
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct TerminalBannerComponent_array *mTerminalBanners; // x8
  UnityEngine_Object_o *v21; // x20
  UnityEngine_GameObject_o *v22; // x20
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v23; // x21
  int v24; // s0
  int v25; // s1
  int v26; // s2
  QuestBoardListViewItemDraw_c *v27; // x0
  float BANNER_ENTORY_EFFECT_DURATION; // w8
  EventDelegate_Callback_o *v29; // x22
  float v30; // w8
  __int64 v31; // x0

  if ( (byte_438C820 & 1) == 0 )
  {
    sub_B775C4(&EventDelegate_Callback_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
    sub_B775C4(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&QuestBoardListViewItemDraw_TypeInfo);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&Method_QuestBoardListViewItemDraw___c__DisplayClass378_0__StartEntryBanner_b__0__);
    sub_B775C4(&QuestBoardListViewItemDraw___c__DisplayClass378_0_TypeInfo);
    byte_438C820 = 1;
  }
  v5 = sub_B77694(QuestBoardListViewItemDraw___c__DisplayClass378_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass378_0___ctor(
    (QuestBoardListViewItemDraw___c__DisplayClass378_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_28;
  *(_QWORD *)(v5 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = endCallback;
  sub_B77560(
    (BattleServantConfConponent_o *)(v5 + 24),
    (System_Int32_array **)endCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_438C82E )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438C82E = 1;
  }
  gameObject = (UnityEngine_GameObject_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)TerminalPramsManager_TypeInfo;
  }
  if ( *(_BYTE *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 169LL) )
    goto LABEL_19;
  mTerminalBanners = this->fields.mTerminalBanners;
  if ( !mTerminalBanners )
    goto LABEL_28;
  if ( !mTerminalBanners->max_length )
  {
    v31 = sub_B776C8(gameObject);
    sub_B77668(v31, 0LL);
  }
  v21 = (UnityEngine_Object_o *)mTerminalBanners->m_Items[0];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v21, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
LABEL_19:
    ActionExtensions__Call(*(System_Action_o **)(v5 + 24), 0LL);
    return;
  }
  if ( !v21 )
    goto LABEL_28;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v21, 0LL);
  if ( !gameObject )
    goto LABEL_28;
  v22 = gameObject;
  v23 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
          gameObject,
          (const MethodInfo_1DEBEC8 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
  *(UnityEngine_Vector3_o *)&v24 = GameObjectExtensions__GetLocalPosition(v22, 0LL);
  if ( !v23 )
    goto LABEL_28;
  LODWORD(v23[3].fields.callbackQueue) = v24;
  HIDWORD(v23[3].fields.callbackQueue) = v25;
  LODWORD(v23[4].klass) = v26;
  *(UnityEngine_Vector3_o *)((char *)&v23[4].klass + 4) = UnityEngine_Vector3__get_zero(0LL);
  v27 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v27 = QuestBoardListViewItemDraw_TypeInfo;
  }
  BANNER_ENTORY_EFFECT_DURATION = v27->static_fields->BANNER_ENTORY_EFFECT_DURATION;
  LODWORD(v23->fields.callbackQueue) = 2;
  *(float *)&v23[1].fields.m_CachedPtr = BANNER_ENTORY_EFFECT_DURATION;
  v29 = (EventDelegate_Callback_o *)sub_B77694(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v29,
    (Il2CppObject *)v5,
    Method_QuestBoardListViewItemDraw___c__DisplayClass378_0__StartEntryBanner_b__0__,
    0LL);
  UITweener__SetOnFinished((UITweener_o *)v23, v29, 0LL);
  UITweener__PlayForward((UITweener_o *)v23, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                             v22,
                                             (const MethodInfo_1DEBEC8 *)Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
  if ( !gameObject )
LABEL_28:
    sub_B7769C(gameObject, v7);
  gameObject[5].klass = (UnityEngine_GameObject_c *)0x3F80000000000000LL;
  v30 = QuestBoardListViewItemDraw_TypeInfo->static_fields->BANNER_ENTORY_EFFECT_DURATION;
  LODWORD(gameObject[1].klass) = 3;
  *(float *)&gameObject[2].klass = v30;
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
  int32_t v6; // w22
  struct UISprite_array *mBannerPointSps; // x8
  UISprite_o *v8; // x20
  System_String_o **p_y; // x8
  __int64 v10; // x0

  v4 = this;
  if ( (byte_438C822 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_B775C4(&QuestBoardListViewItemDraw_TypeInfo);
    byte_438C822 = 1;
  }
  if ( v4->fields.mBannerCount >= 1 )
  {
    v5 = 0LL;
    v6 = index;
    while ( 1 )
    {
      mBannerPointSps = v4->fields.mBannerPointSps;
      if ( !mBannerPointSps )
        break;
      if ( (unsigned int)v5 >= mBannerPointSps->max_length )
      {
        v10 = sub_B776C8(this);
        sub_B77668(v10, 0LL);
      }
      this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
      v8 = mBannerPointSps->m_Items[v5];
      if ( v6 == (_DWORD)v5 )
      {
        if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
        }
        p_y = (System_String_o **)&this->fields.mTitleLevelSp[1].fields.mOldV1.fields.y;
        if ( !v8 )
          break;
      }
      else
      {
        if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
        }
        p_y = (System_String_o **)&this->fields.mTitleLevelSp[1].fields.mType;
        if ( !v8 )
          break;
      }
      UISprite__set_spriteName(v8, *p_y, 0LL);
      if ( (int)++v5 >= v4->fields.mBannerCount )
        return;
    }
    sub_B7769C(this, *(_QWORD *)&index);
  }
}


void __fastcall QuestBoardListViewItemDraw__UpdateInfoText(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        int32_t strIndex,
        int64_t checkTime,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw_o *v7; // x20
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x22

  v7 = this;
  if ( (byte_438C7EC & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_B775C4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__);
    byte_438C7EC = 1;
  }
  mInfoTextList = v7->fields.mInfoTextList;
  if ( !mInfoTextList )
    goto LABEL_8;
  if ( mInfoTextList->fields._size <= (unsigned int)strIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  this = (QuestBoardListViewItemDraw_o *)mInfoTextList->fields._items->m_Items[strIndex];
  if ( !this )
LABEL_8:
    sub_B7769C(this, questBoardItem);
  QuestBoardInformaionText__Update(
    (QuestBoardInformaionText_o *)this,
    &v7->fields.mOptionInfoLb,
    &v7->fields.mOptionInfoFrameSp,
    checkTime,
    method);
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
      sub_B7769C(this, questBoardItem);
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
  UnityEngine_Vector2_o ScreenPosition_31095740; // kr00_8
  _BOOL4 mIsEnableDragX; // w8

  v4 = this;
  if ( (byte_438C825 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_B775C4(&CTouch_TypeInfo);
    byte_438C825 = 1;
  }
  if ( v4->fields.mIsPressedForDragX )
  {
    v4->fields.mTouchPosOld = v4->fields.mTouchPosNow;
    if ( !questBoardManager )
      sub_B7769C(this, questBoardManager);
    mUICamera = questBoardManager->fields.mUICamera;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    ScreenPosition_31095740 = CTouch__getScreenPosition_31095740(mUICamera, 0LL);
    mIsEnableDragX = v4->fields.mIsEnableDragX;
    v4->fields.mTouchPosNow = ScreenPosition_31095740;
    if ( mIsEnableDragX )
      v4->fields.mTouchPosDif = ScreenPosition_31095740.fields.x - v4->fields.mTouchPosOld.fields.x;
  }
}


void __fastcall QuestBoardListViewItemDraw___SetAdvanceNoticeText_g__CalculateLabel_328_0(
        UILabel_o *label,
        System_String_o *message,
        int32_t baseHeight,
        int32_t indent,
        const MethodInfo *method)
{
  UILabel_o *v8; // x19
  int mHeight; // w22
  QuestBoardListViewItemDraw_c *v10; // x0
  float v11; // s8
  UnityEngine_Transform_o *transform; // x20
  float v13; // s0
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  v8 = label;
  if ( (byte_438C82D & 1) == 0 )
  {
    label = (UILabel_o *)sub_B775C4(&QuestBoardListViewItemDraw_TypeInfo);
    byte_438C82D = 1;
  }
  if ( !v8 )
    goto LABEL_10;
  UILabel__set_text(v8, message, 0LL);
  UILabel__AssumeNaturalSize(v8, 0LL);
  mHeight = v8->fields.mHeight;
  UIWidget__set_height((UIWidget_o *)v8, baseHeight, 0LL);
  v10 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v10 = QuestBoardListViewItemDraw_TypeInfo;
  }
  UILabel__SetCondensedScale(v8, v10->static_fields->ADVANCE_NOTICE_BASE_WIDTH - indent, 0LL);
  v11 = UnityEngine_Mathf__Clamp(1.0 - (float)((float)baseHeight / (float)mHeight), 0.0, 1.0, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v8, 0LL);
  label = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v8, 0LL);
  if ( !label
    || (LODWORD(v13) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)label, 0LL),
        !transform) )
  {
LABEL_10:
    sub_B7769C(label, message);
  }
  v14.fields.y = 1.0;
  v14.fields.x = v11 + v13;
  v14.fields.z = 1.0;
  UnityEngine_Transform__set_localScale(transform, v14, 0LL);
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
    sub_B7769C(0LL, onOff);
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
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_438B164 & 1) == 0 )
  {
    sub_B775C4(&QuestBoardListViewItemDraw___c_TypeInfo);
    byte_438B164 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(QuestBoardListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B7769C(this, 0LL);
  return rest->fields.type == 9;
}


int32_t __fastcall QuestBoardListViewItemDraw___c___SetItemOfQuest_b__315_1(
        QuestBoardListViewItemDraw___c_o *this,
        ViewEnemyEntity_o *value,
        const MethodInfo *method)
{
  if ( !value )
    sub_B7769C(this, 0LL);
  return value->fields.enemyId;
}


bool __fastcall QuestBoardListViewItemDraw___c___SetupRewardIconDisp_b__327_0(
        QuestBoardListViewItemDraw___c_o *this,
        GiftEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_B7769C(this, 0LL);
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
  if ( (byte_438B165 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw___c__DisplayClass313_0_o *)sub_B775C4(&NetworkManager_TypeInfo);
    byte_438B165 = 1;
  }
  if ( !quest )
    goto LABEL_14;
  WarInfo_k__BackingField = quest->fields._WarInfo_k__BackingField;
  if ( !WarInfo_k__BackingField )
    goto LABEL_14;
  warEnt = v4->fields.warEnt;
  if ( !warEnt )
    goto LABEL_14;
  if ( WarInfo_k__BackingField->fields.warId != warEnt->fields.id )
    return 0;
  userQuestMst = v4->fields.userQuestMst;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  this = (QuestBoardListViewItemDraw___c__DisplayClass313_0_o *)NetworkManager__get_UserId(0LL);
  if ( !userQuestMst )
LABEL_14:
    sub_B7769C(this, quest);
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
      sub_B7769C(this, quest);
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
      sub_B7769C(this, method);
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
      sub_B7769C(this, method);
    }
  }
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
    sub_B7769C(this, entity);
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
    sub_B7769C(this, entity);
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
  const MethodInfo_2476E44 *v3; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  System_Nullable_long__o v9; // [xsp+0h] [xbp-30h] BYREF
  System_Nullable_long__o v10; // 0:x0.16

  if ( (byte_438B166 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Nullable_long___ctor__);
    byte_438B166 = 1;
  }
  *(_QWORD *)&v10.fields.has_value = this->fields.checkTime;
  v10.fields.value = (int64_t)&v9;
  v9.fields.value = 0LL;
  *(_QWORD *)&v9.fields.has_value = 0LL;
  System_Nullable_long____ctor(v10, Method_System_Nullable_long___ctor__, v3);
  if ( !x )
    sub_B7769C(v6, v7);
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

  if ( (byte_438B167 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438B167 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_43884B8 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884B8 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsPlayedEntryBanner_k__BackingField = 1;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7769C(v3, method);
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
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  QuestBoardListViewItemDraw_c *v12; // x0
  System_String_o *v13; // x19
  struct QuestBoardListViewItemDraw_o *v14; // x8
  UnityEngine_Shader_o *v15; // x21
  UnityEngine_Material_o *v16; // x20
  struct QuestBoardListViewItemDraw_o *v17; // x8
  struct QuestBoardListViewItemDraw_o *v18; // x8
  struct QuestBoardListViewItemDraw_o *v19; // x8
  AssetData_o *boardIconAssetData; // x21
  UnityEngine_Texture_o *Object_WarBoardWaitTimeSetting; // x0

  v4 = this;
  if ( (byte_438B168 & 1) == 0 )
  {
    sub_B775C4(&Method_AssetData_GetObject_Texture2D____69465432);
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&UnityEngine_Material_TypeInfo);
    sub_B775C4(&QuestBoardListViewItemDraw_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&StringLiteral_16440/*"_alpha"*/);
    sub_B775C4(&StringLiteral_4671/*"Custom/SpriteWithMask"*/);
    this = (QuestBoardListViewItemDraw___c__DisplayClass389_0_o *)sub_B775C4(&StringLiteral_16313/*"_MaskTex"*/);
    byte_438B168 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_22;
  this = (QuestBoardListViewItemDraw___c__DisplayClass389_0_o *)System_String__op_Inequality(
                                                                  v4->fields.loadBoardIconName,
                                                                  _4__this->fields.boardIconName,
                                                                  0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v14 = v4->fields.__4__this;
    if ( v14 )
    {
      v14->fields.boardIconAssetData = assetData;
      sub_B77560(
        (BattleServantConfConponent_o *)&v14->fields.boardIconAssetData,
        (System_Int32_array **)assetData,
        v6,
        v7,
        v8,
        v9,
        v10,
        v11);
      v15 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4671/*"Custom/SpriteWithMask"*/, 0LL);
      v16 = (UnityEngine_Material_o *)sub_B77694(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor(v16, v15, 0LL);
      v17 = v4->fields.__4__this;
      if ( v17 )
      {
        this = (QuestBoardListViewItemDraw___c__DisplayClass389_0_o *)v17->fields.boardIconTexture;
        if ( this )
        {
          this = (QuestBoardListViewItemDraw___c__DisplayClass389_0_o *)((__int64 (__fastcall *)(QuestBoardListViewItemDraw___c__DisplayClass389_0_o *, UnityEngine_Material_o *, Il2CppMethodPointer))this->klass[1].vtable._2_GetHashCode.method)(
                                                                          this,
                                                                          v16,
                                                                          this->klass[1].vtable._3_ToString.methodPtr);
          v18 = v4->fields.__4__this;
          if ( v18 )
          {
            this = (QuestBoardListViewItemDraw___c__DisplayClass389_0_o *)v18->fields.boardIconAssetData;
            if ( this )
            {
              this = (QuestBoardListViewItemDraw___c__DisplayClass389_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                              (AssetData_o *)this,
                                                                              v18->fields.boardIconName,
                                                                              (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_Texture2D____69465432);
              if ( v16 )
              {
                UnityEngine_Material__set_mainTexture(v16, (UnityEngine_Texture_o *)this, 0LL);
                v19 = v4->fields.__4__this;
                if ( v19 )
                {
                  boardIconAssetData = v19->fields.boardIconAssetData;
                  this = (QuestBoardListViewItemDraw___c__DisplayClass389_0_o *)System_String__Concat_44901936(
                                                                                  v19->fields.boardIconName,
                                                                                  (System_String_o *)StringLiteral_16440/*"_alpha"*/,
                                                                                  0LL);
                  if ( boardIconAssetData )
                  {
                    Object_WarBoardWaitTimeSetting = (UnityEngine_Texture_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                boardIconAssetData,
                                                                                (System_String_o *)this,
                                                                                (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_Texture2D____69465432);
                    UnityEngine_Material__SetTexture(
                      v16,
                      (System_String_o *)StringLiteral_16313/*"_MaskTex"*/,
                      Object_WarBoardWaitTimeSetting,
                      0LL);
                    this = (QuestBoardListViewItemDraw___c__DisplayClass389_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
LABEL_22:
    sub_B7769C(this, assetData);
  }
  v12 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v12 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v13 = System_String__Concat_44901936(
          v12->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH,
          v4->fields.loadBoardIconName,
          0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(v13, 0LL);
}