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
  System_Int32_array **v42; // x1
  BattleServantConfConponent_o *p_COST_BG_ITEM; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x1
  BattleServantConfConponent_o *p_COST_BG_QP; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  QuestBoardListViewItemDraw_c *v58; // x8
  struct QuestBoardListViewItemDraw_StaticFields *v59; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v60; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v61; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v62; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v63; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v64; // x9
  System_Int32_array **v65; // x1
  BattleServantConfConponent_o *p_SHOHI_SP_NAME; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Int32_array **v73; // x1
  BattleServantConfConponent_o *p_SHOHI_SP_NAME_WAR_BOARD; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Int32_array **v81; // x1
  BattleServantConfConponent_o *p_QUEST_BOARD_COSTNAME; // x0
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  QuestBoardListViewItemDraw_c *v89; // x8
  QuestBoardListViewItemDraw_c *v90; // x8
  struct QuestBoardListViewItemDraw_StaticFields *v91; // x8
  QuestBoardListViewItemDraw_c *v92; // x8
  struct QuestBoardListViewItemDraw_StaticFields *v93; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v94; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v95; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v96; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v97; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v98; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v99; // x8
  QuestBoardListViewItemDraw_c *v100; // x8
  struct QuestBoardListViewItemDraw_StaticFields *v101; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v102; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v103; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v104; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v105; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v106; // x9
  System_Int32_array **v107; // x1
  BattleServantConfConponent_o *p_EVENT_WAR_SPNAME_PREFIX; // x0
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  System_Int32_array **v115; // x1
  BattleServantConfConponent_o *p_EVENT_WAR_SUBFOLDER_SPNAME_PREFIX; // x0
  System_String_array **v117; // x2
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  System_Int32_array **v123; // x1
  BattleServantConfConponent_o *p_QUEST_BOARD_SPNAME_PREFIX; // x0
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  System_Int32_array **v131; // x1
  BattleServantConfConponent_o *p_RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX; // x0
  System_String_array **v133; // x2
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  System_Int32_array **v139; // x1
  BattleServantConfConponent_o *p_QUEST_BOARD_ICON_SPNAME_PREFIX; // x0
  System_String_array **v141; // x2
  System_String_array **v142; // x3
  System_Boolean_array **v143; // x4
  System_Int32_array **v144; // x5
  System_Int32_array *v145; // x6
  System_Int32_array *v146; // x7
  System_Int32_array **v147; // x1
  BattleServantConfConponent_o *p_QUEST_BOARD_MASK_SPNAME_PREFIX; // x0
  System_String_array **v149; // x2
  System_String_array **v150; // x3
  System_Boolean_array **v151; // x4
  System_Int32_array **v152; // x5
  System_Int32_array *v153; // x6
  System_Int32_array *v154; // x7
  System_Int32_array **v155; // x1
  BattleServantConfConponent_o *p_QUEST_BOARD_SHOHI_SPNAME_PREFIX; // x0
  System_String_array **v157; // x2
  System_String_array **v158; // x3
  System_Boolean_array **v159; // x4
  System_Int32_array **v160; // x5
  System_Int32_array *v161; // x6
  System_Int32_array *v162; // x7
  System_Int32_array **v163; // x1
  BattleServantConfConponent_o *p_QUEST_BOARD_AP_SPNAME_PREFIX; // x0
  System_String_array **v165; // x2
  System_String_array **v166; // x3
  System_Boolean_array **v167; // x4
  System_Int32_array **v168; // x5
  System_Int32_array *v169; // x6
  System_Int32_array *v170; // x7
  System_Int32_array **v171; // x1
  BattleServantConfConponent_o *p_QUEST_BOARD_INFO_FRAME_NAME; // x0
  System_String_array **v173; // x2
  System_String_array **v174; // x3
  System_Boolean_array **v175; // x4
  System_Int32_array **v176; // x5
  System_Int32_array *v177; // x6
  System_Int32_array *v178; // x7
  System_Int32_array **v179; // x1
  BattleServantConfConponent_o *p_QUEST_BOARD_DAMAGE_RECODE_NAME; // x0
  System_String_array **v181; // x2
  System_String_array **v182; // x3
  System_Boolean_array **v183; // x4
  System_Int32_array **v184; // x5
  System_Int32_array *v185; // x6
  System_Int32_array *v186; // x7
  System_Int32_array **v187; // x1
  BattleServantConfConponent_o *p_QUEST_BOARD_PREV_ICON_NAME; // x0
  System_String_array **v189; // x2
  System_String_array **v190; // x3
  System_Boolean_array **v191; // x4
  System_Int32_array **v192; // x5
  System_Int32_array *v193; // x6
  System_Int32_array *v194; // x7
  System_Int32_array **v195; // x1
  BattleServantConfConponent_o *p_QUEST_BOARD_KNOCKDOWN_RECODE_NAME; // x0
  System_String_array **v197; // x2
  System_String_array **v198; // x3
  System_Boolean_array **v199; // x4
  System_Int32_array **v200; // x5
  System_Int32_array *v201; // x6
  System_Int32_array *v202; // x7
  System_Int32_array **v203; // x1
  BattleServantConfConponent_o *p_QUEST_BOARD_ICON_TEXTURE_PATH; // x0
  System_String_array **v205; // x2
  System_String_array **v206; // x3
  System_Boolean_array **v207; // x4
  System_Int32_array **v208; // x5
  System_Int32_array *v209; // x6
  System_Int32_array *v210; // x7
  System_Int32_array **v211; // x1
  BattleServantConfConponent_o *p_QUEST_BOARD_ICON_TEXTURE_PREFIX; // x0
  System_String_array **v213; // x2
  System_String_array **v214; // x3
  System_Boolean_array **v215; // x4
  System_Int32_array **v216; // x5
  System_Int32_array *v217; // x6
  System_Int32_array *v218; // x7
  QuestBoardListViewItemDraw_c *v219; // x8
  System_Int32_array **v220; // x1
  BattleServantConfConponent_o *p_BANNER_POINT_SPNAME_ON; // x0
  System_String_array **v222; // x2
  System_String_array **v223; // x3
  System_Boolean_array **v224; // x4
  System_Int32_array **v225; // x5
  System_Int32_array *v226; // x6
  System_Int32_array *v227; // x7
  System_Int32_array **v228; // x1
  BattleServantConfConponent_o *p_BANNER_POINT_SPNAME_OFF; // x0
  System_String_array **v230; // x2
  System_String_array **v231; // x3
  System_Boolean_array **v232; // x4
  System_Int32_array **v233; // x5
  System_Int32_array *v234; // x6
  System_Int32_array *v235; // x7
  QuestBoardListViewItemDraw_c *v236; // x8
  System_Int32_array **v237; // x1
  BattleServantConfConponent_o *p_SHORTCUT_FACE_MASK_SPNAME; // x0
  System_String_array **v239; // x2
  System_String_array **v240; // x3
  System_Boolean_array **v241; // x4
  System_Int32_array **v242; // x5
  System_Int32_array *v243; // x6
  System_Int32_array *v244; // x7
  System_Int32_array **v245; // x1
  BattleServantConfConponent_o *p_QUEST_STORY_FACE_MASK_SPNAME; // x0
  System_String_array **v247; // x2
  System_String_array **v248; // x3
  System_Boolean_array **v249; // x4
  System_Int32_array **v250; // x5
  System_Int32_array *v251; // x6
  System_Int32_array *v252; // x7
  System_Int32_array **v253; // x1
  BattleServantConfConponent_o *p_QUEST_MAIN_FACE_MASK_SPNAME; // x0
  System_String_array **v255; // x2
  System_String_array **v256; // x3
  System_Boolean_array **v257; // x4
  System_Int32_array **v258; // x5
  System_Int32_array *v259; // x6
  System_Int32_array *v260; // x7
  System_Int32_array **v261; // x1
  BattleServantConfConponent_o *p_QUEST_EVENT_FACE_MASK_SPNAME; // x0
  System_String_array **v263; // x2
  System_String_array **v264; // x3
  System_Boolean_array **v265; // x4
  System_Int32_array **v266; // x5
  System_Int32_array *v267; // x6
  System_Int32_array *v268; // x7
  __int64 v269; // x0
  __int64 v270; // x1
  System_String_array **v271; // x2
  System_String_array **v272; // x3
  System_Boolean_array **v273; // x4
  System_Int32_array **v274; // x5
  System_Int32_array *v275; // x6
  System_Int32_array *v276; // x7
  System_Int32_array **v277; // x19
  void *v278; // x0
  System_Int32_array **v279; // x1
  System_String_array **v280; // x2
  System_String_array **v281; // x3
  System_Boolean_array **v282; // x4
  System_Int32_array **v283; // x5
  System_Int32_array *v284; // x6
  System_Int32_array *v285; // x7
  System_Int32_array **v286; // x1
  BattleServantConfConponent_o *p_RP_SPNAME_FRAME; // x0
  System_String_array **v288; // x2
  System_String_array **v289; // x3
  System_Boolean_array **v290; // x4
  System_Int32_array **v291; // x5
  System_Int32_array *v292; // x6
  System_Int32_array *v293; // x7
  System_String_array **v294; // x2
  System_String_array **v295; // x3
  System_Boolean_array **v296; // x4
  System_Int32_array **v297; // x5
  System_Int32_array *v298; // x6
  System_Int32_array *v299; // x7
  System_Int32_array **v300; // x19
  System_Int32_array **v301; // x1
  System_String_array **v302; // x2
  System_String_array **v303; // x3
  System_Boolean_array **v304; // x4
  System_Int32_array **v305; // x5
  System_Int32_array *v306; // x6
  System_Int32_array *v307; // x7
  System_Int32_array **v308; // x1
  BattleServantConfConponent_o *p_RP_SPNAME_POINT; // x0
  System_String_array **v310; // x2
  System_String_array **v311; // x3
  System_Boolean_array **v312; // x4
  System_Int32_array **v313; // x5
  System_Int32_array *v314; // x6
  System_Int32_array *v315; // x7
  QuestBoardListViewItemDraw_c *v316; // x8
  struct QuestBoardListViewItemDraw_StaticFields *v317; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v318; // x9
  System_Int32_array **v319; // x1
  BattleServantConfConponent_o *p_QBOARD_CAP_CLOSED; // x0
  System_String_array **v321; // x2
  System_String_array **v322; // x3
  System_Boolean_array **v323; // x4
  System_Int32_array **v324; // x5
  System_Int32_array *v325; // x6
  System_Int32_array *v326; // x7
  System_Int32_array **v327; // x1
  BattleServantConfConponent_o *p_QBOARD_CAP_CLOSED_SPECIAL_FORMAT; // x0
  System_String_array **v329; // x2
  System_String_array **v330; // x3
  System_Boolean_array **v331; // x4
  System_Int32_array **v332; // x5
  System_Int32_array *v333; // x6
  System_Int32_array *v334; // x7
  System_Int32_array **v335; // x1
  BattleServantConfConponent_o *p_QBOARD_CAP_CLOSED_SPECIAL; // x0
  System_String_array **v337; // x2
  System_String_array **v338; // x3
  System_Boolean_array **v339; // x4
  System_Int32_array **v340; // x5
  System_Int32_array *v341; // x6
  System_Int32_array *v342; // x7
  System_Int32_array **v343; // x1
  BattleServantConfConponent_o *p_QBOARD_CAP_CLOSED_SPECIAL_2; // x0
  System_String_array **v345; // x2
  System_String_array **v346; // x3
  System_Boolean_array **v347; // x4
  System_Int32_array **v348; // x5
  System_Int32_array *v349; // x6
  System_Int32_array *v350; // x7
  System_Int32_array **v351; // x1
  BattleServantConfConponent_o *p_QBOARD_CAP_CLOSED_SPECIAL_3; // x0
  System_String_array **v353; // x2
  System_String_array **v354; // x3
  System_Boolean_array **v355; // x4
  System_Int32_array **v356; // x5
  System_Int32_array *v357; // x6
  System_Int32_array *v358; // x7
  System_String_array **v359; // x2
  System_String_array **v360; // x3
  System_Boolean_array **v361; // x4
  System_Int32_array **v362; // x5
  System_Int32_array *v363; // x6
  System_Int32_array *v364; // x7
  System_Int32_array **v365; // x19
  System_Int32_array **v366; // x1
  System_String_array **v367; // x2
  System_String_array **v368; // x3
  System_Boolean_array **v369; // x4
  System_Int32_array **v370; // x5
  System_Int32_array *v371; // x6
  System_Int32_array *v372; // x7
  System_Int32_array **v373; // x1
  System_String_array **v374; // x2
  System_String_array **v375; // x3
  System_Boolean_array **v376; // x4
  System_Int32_array **v377; // x5
  System_Int32_array *v378; // x6
  System_Int32_array *v379; // x7
  System_Int32_array **v380; // x1
  System_String_array **v381; // x2
  System_String_array **v382; // x3
  System_Boolean_array **v383; // x4
  System_Int32_array **v384; // x5
  System_Int32_array *v385; // x6
  System_Int32_array *v386; // x7
  System_Int32_array **v387; // x1
  System_String_array **v388; // x2
  System_String_array **v389; // x3
  System_Boolean_array **v390; // x4
  System_Int32_array **v391; // x5
  System_Int32_array *v392; // x6
  System_Int32_array *v393; // x7
  System_Int32_array **v394; // x1
  System_String_array **v395; // x2
  System_String_array **v396; // x3
  System_Boolean_array **v397; // x4
  System_Int32_array **v398; // x5
  System_Int32_array *v399; // x6
  System_Int32_array *v400; // x7
  System_Int32_array **v401; // x1
  System_String_array **v402; // x2
  System_String_array **v403; // x3
  System_Boolean_array **v404; // x4
  System_Int32_array **v405; // x5
  System_Int32_array *v406; // x6
  System_Int32_array *v407; // x7
  System_Int32_array **v408; // x1
  BattleServantConfConponent_o *p_msQBoardL1Names; // x0
  System_String_array **v410; // x2
  System_String_array **v411; // x3
  System_Boolean_array **v412; // x4
  System_Int32_array **v413; // x5
  System_Int32_array *v414; // x6
  System_Int32_array *v415; // x7
  System_Int32_array **v416; // x1
  BattleServantConfConponent_o *p_msQBoardL2Name_Story; // x0
  System_String_array **v418; // x2
  System_String_array **v419; // x3
  System_Boolean_array **v420; // x4
  System_Int32_array **v421; // x5
  System_Int32_array *v422; // x6
  System_Int32_array *v423; // x7
  System_Int32_array **v424; // x1
  BattleServantConfConponent_o *p_msQBoardL2Name_Hero; // x0
  System_String_array **v426; // x2
  System_String_array **v427; // x3
  System_Boolean_array **v428; // x4
  System_Int32_array **v429; // x5
  System_Int32_array *v430; // x6
  System_Int32_array *v431; // x7
  System_String_array **v432; // x2
  System_String_array **v433; // x3
  System_Boolean_array **v434; // x4
  System_Int32_array **v435; // x5
  System_Int32_array *v436; // x6
  System_Int32_array *v437; // x7
  System_Int32_array **v438; // x19
  System_Int32_array **v439; // x1
  System_String_array **v440; // x2
  System_String_array **v441; // x3
  System_Boolean_array **v442; // x4
  System_Int32_array **v443; // x5
  System_Int32_array *v444; // x6
  System_Int32_array *v445; // x7
  System_Int32_array **v446; // x1
  System_String_array **v447; // x2
  System_String_array **v448; // x3
  System_Boolean_array **v449; // x4
  System_Int32_array **v450; // x5
  System_Int32_array *v451; // x6
  System_Int32_array *v452; // x7
  System_Int32_array **v453; // x1
  System_String_array **v454; // x2
  System_String_array **v455; // x3
  System_Boolean_array **v456; // x4
  System_Int32_array **v457; // x5
  System_Int32_array *v458; // x6
  System_Int32_array *v459; // x7
  System_Int32_array **v460; // x1
  System_String_array **v461; // x2
  System_String_array **v462; // x3
  System_Boolean_array **v463; // x4
  System_Int32_array **v464; // x5
  System_Int32_array *v465; // x6
  System_Int32_array *v466; // x7
  System_Int32_array **v467; // x1
  System_String_array **v468; // x2
  System_String_array **v469; // x3
  System_Boolean_array **v470; // x4
  System_Int32_array **v471; // x5
  System_Int32_array *v472; // x6
  System_Int32_array *v473; // x7
  System_Int32_array **v474; // x1
  System_String_array **v475; // x2
  System_String_array **v476; // x3
  System_Boolean_array **v477; // x4
  System_Int32_array **v478; // x5
  System_Int32_array *v479; // x6
  System_Int32_array *v480; // x7
  System_Int32_array **v481; // x1
  BattleServantConfConponent_o *p_msQBoardL3Names; // x0
  System_String_array **v483; // x2
  System_String_array **v484; // x3
  System_Boolean_array **v485; // x4
  System_Int32_array **v486; // x5
  System_Int32_array *v487; // x6
  System_Int32_array *v488; // x7
  System_String_array **v489; // x2
  System_String_array **v490; // x3
  System_Boolean_array **v491; // x4
  System_Int32_array **v492; // x5
  System_Int32_array *v493; // x6
  System_Int32_array *v494; // x7
  System_Int32_array **v495; // x19
  System_Int32_array **v496; // x1
  System_String_array **v497; // x2
  System_String_array **v498; // x3
  System_Boolean_array **v499; // x4
  System_Int32_array **v500; // x5
  System_Int32_array *v501; // x6
  System_Int32_array *v502; // x7
  System_Int32_array **v503; // x1
  System_String_array **v504; // x2
  System_String_array **v505; // x3
  System_Boolean_array **v506; // x4
  System_Int32_array **v507; // x5
  System_Int32_array *v508; // x6
  System_Int32_array *v509; // x7
  System_Int32_array **v510; // x1
  System_String_array **v511; // x2
  System_String_array **v512; // x3
  System_Boolean_array **v513; // x4
  System_Int32_array **v514; // x5
  System_Int32_array *v515; // x6
  System_Int32_array *v516; // x7
  System_Int32_array **v517; // x1
  System_String_array **v518; // x2
  System_String_array **v519; // x3
  System_Boolean_array **v520; // x4
  System_Int32_array **v521; // x5
  System_Int32_array *v522; // x6
  System_Int32_array *v523; // x7
  System_Int32_array **v524; // x1
  System_String_array **v525; // x2
  System_String_array **v526; // x3
  System_Boolean_array **v527; // x4
  System_Int32_array **v528; // x5
  System_Int32_array *v529; // x6
  System_Int32_array *v530; // x7
  System_Int32_array **v531; // x1
  System_String_array **v532; // x2
  System_String_array **v533; // x3
  System_Boolean_array **v534; // x4
  System_Int32_array **v535; // x5
  System_Int32_array *v536; // x6
  System_Int32_array *v537; // x7
  System_Int32_array **v538; // x1
  BattleServantConfConponent_o *p_msLabelMainSprNames; // x0
  System_String_array **v540; // x2
  System_String_array **v541; // x3
  System_Boolean_array **v542; // x4
  System_Int32_array **v543; // x5
  System_Int32_array *v544; // x6
  System_Int32_array *v545; // x7
  System_String_array **v546; // x2
  System_String_array **v547; // x3
  System_Boolean_array **v548; // x4
  System_Int32_array **v549; // x5
  System_Int32_array *v550; // x6
  System_Int32_array *v551; // x7
  System_Int32_array **v552; // x19
  System_Int32_array **v553; // x1
  System_String_array **v554; // x2
  System_String_array **v555; // x3
  System_Boolean_array **v556; // x4
  System_Int32_array **v557; // x5
  System_Int32_array *v558; // x6
  System_Int32_array *v559; // x7
  System_Int32_array **v560; // x1
  System_String_array **v561; // x2
  System_String_array **v562; // x3
  System_Boolean_array **v563; // x4
  System_Int32_array **v564; // x5
  System_Int32_array *v565; // x6
  System_Int32_array *v566; // x7
  System_Int32_array **v567; // x1
  System_String_array **v568; // x2
  System_String_array **v569; // x3
  System_Boolean_array **v570; // x4
  System_Int32_array **v571; // x5
  System_Int32_array *v572; // x6
  System_Int32_array *v573; // x7
  System_Int32_array **v574; // x1
  System_String_array **v575; // x2
  System_String_array **v576; // x3
  System_Boolean_array **v577; // x4
  System_Int32_array **v578; // x5
  System_Int32_array *v579; // x6
  System_Int32_array *v580; // x7
  System_Int32_array **v581; // x1
  System_String_array **v582; // x2
  System_String_array **v583; // x3
  System_Boolean_array **v584; // x4
  System_Int32_array **v585; // x5
  System_Int32_array *v586; // x6
  System_Int32_array *v587; // x7
  System_Int32_array **v588; // x1
  System_String_array **v589; // x2
  System_String_array **v590; // x3
  System_Boolean_array **v591; // x4
  System_Int32_array **v592; // x5
  System_Int32_array *v593; // x6
  System_Int32_array *v594; // x7
  System_Int32_array **v595; // x1
  System_String_array **v596; // x2
  System_String_array **v597; // x3
  System_Boolean_array **v598; // x4
  System_Int32_array **v599; // x5
  System_Int32_array *v600; // x6
  System_Int32_array *v601; // x7
  System_Int32_array **v602; // x1
  BattleServantConfConponent_o *p_QuestBoardApSpNames; // x0
  System_String_array **v604; // x2
  System_String_array **v605; // x3
  System_Boolean_array **v606; // x4
  System_Int32_array **v607; // x5
  System_Int32_array *v608; // x6
  System_Int32_array *v609; // x7
  System_Int32_array **v610; // x1
  BattleServantConfConponent_o *p_msPhaseSprName_ArrowOff; // x0
  System_String_array **v612; // x2
  System_String_array **v613; // x3
  System_Boolean_array **v614; // x4
  System_Int32_array **v615; // x5
  System_Int32_array *v616; // x6
  System_Int32_array *v617; // x7
  System_Int32_array **v618; // x1
  BattleServantConfConponent_o *p_msPhaseSprName_ArrowOn; // x0
  System_String_array **v620; // x2
  System_String_array **v621; // x3
  System_Boolean_array **v622; // x4
  System_Int32_array **v623; // x5
  System_Int32_array *v624; // x6
  System_Int32_array *v625; // x7
  System_Int32_array **v626; // x1
  BattleServantConfConponent_o *p_msPhaseSprName_ExArrowOff; // x0
  System_String_array **v628; // x2
  System_String_array **v629; // x3
  System_Boolean_array **v630; // x4
  System_Int32_array **v631; // x5
  System_Int32_array *v632; // x6
  System_Int32_array *v633; // x7
  System_Int32_array **v634; // x1
  BattleServantConfConponent_o *p_msPhaseSprName_ExArrowOn; // x0
  System_String_array **v636; // x2
  System_String_array **v637; // x3
  System_Boolean_array **v638; // x4
  System_Int32_array **v639; // x5
  System_Int32_array *v640; // x6
  System_Int32_array *v641; // x7
  System_Int32_array **v642; // x1
  BattleServantConfConponent_o *p_msPhaseSprName_LoopOff; // x0
  System_String_array **v644; // x2
  System_String_array **v645; // x3
  System_Boolean_array **v646; // x4
  System_Int32_array **v647; // x5
  System_Int32_array *v648; // x6
  System_Int32_array *v649; // x7
  System_Int32_array **v650; // x1
  BattleServantConfConponent_o *p_msPhaseSprName_LoopOn; // x0
  System_String_array **v652; // x2
  System_String_array **v653; // x3
  System_Boolean_array **v654; // x4
  System_Int32_array **v655; // x5
  System_Int32_array *v656; // x6
  System_Int32_array *v657; // x7
  System_Int32_array **v658; // x1
  BattleServantConfConponent_o *p_msPhaseSprName_LoopFirstOff; // x0
  System_String_array **v660; // x2
  System_String_array **v661; // x3
  System_Boolean_array **v662; // x4
  System_Int32_array **v663; // x5
  System_Int32_array *v664; // x6
  System_Int32_array *v665; // x7
  System_Int32_array **v666; // x1
  BattleServantConfConponent_o *p_CHAPTER_SP_BASE_NAME; // x0
  System_String_array **v668; // x2
  System_String_array **v669; // x3
  System_Boolean_array **v670; // x4
  System_Int32_array **v671; // x5
  System_Int32_array *v672; // x6
  System_Int32_array *v673; // x7
  System_Int32_array **v674; // x1
  BattleServantConfConponent_o *p_CHAPTER_SP_UNIT_NAME; // x0
  System_String_array **v676; // x2
  System_String_array **v677; // x3
  System_Boolean_array **v678; // x4
  System_Int32_array **v679; // x5
  System_Int32_array *v680; // x6
  System_Int32_array *v681; // x7
  System_Int32_array **v682; // x1
  BattleServantConfConponent_o *p_PRE_BATTLE_ORGANIZATION; // x0
  System_String_array **v684; // x2
  System_String_array **v685; // x3
  System_Boolean_array **v686; // x4
  System_Int32_array **v687; // x5
  System_Int32_array *v688; // x6
  System_Int32_array *v689; // x7
  __int64 v690; // x0
  __int64 v691; // x0
  struct UnityEngine_Color_o v692; // [xsp+0h] [xbp-50h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-40h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v695; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v697; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42B1905 & 1) == 0 )
  {
    sub_B52984(&QuestBoardListViewItemDraw_TypeInfo);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_21797/*"quest_board_icon_"*/);
    sub_B52984(&StringLiteral_21808/*"questboard_cap_closed"*/);
    sub_B52984(&StringLiteral_19778/*"img_slider_on"*/);
    sub_B52984(&StringLiteral_19671/*"img_loop_off"*/);
    sub_B52984(&StringLiteral_19729/*"img_questboard_story01"*/);
    sub_B52984(&StringLiteral_21818/*"questboard_shohi_bg_01"*/);
    sub_B52984(&StringLiteral_21805/*"questboard_ap_free"*/);
    sub_B52984(&StringLiteral_21816/*"questboard_icon_cap{0:D2}"*/);
    sub_B52984(&StringLiteral_19733/*"img_questboard_story03mask"*/);
    sub_B52984(&StringLiteral_19712/*"img_quest_spend"*/);
    sub_B52984(&StringLiteral_19717/*"img_questarrow_off"*/);
    sub_B52984(&StringLiteral_17387/*"chaldea_category_{0}"*/);
    sub_B52984(&StringLiteral_19731/*"img_questboard_story02mask"*/);
    sub_B52984(&StringLiteral_19718/*"img_questarrow_on"*/);
    sub_B52984(&StringLiteral_19728/*"img_questboard_main_"*/);
    sub_B52984(&StringLiteral_19711/*"img_quest_pre_organization"*/);
    sub_B52984(&StringLiteral_18755/*"event_war_"*/);
    sub_B52984(&StringLiteral_21806/*"questboard_ap_main"*/);
    sub_B52984(&StringLiteral_19735/*"img_questboard_story05mask"*/);
    sub_B52984(&StringLiteral_21819/*"questboard_shohi_bg_02"*/);
    sub_B52984(&StringLiteral_19726/*"img_questboard_hero03"*/);
    sub_B52984(&StringLiteral_21811/*"questboard_cap_closed_special_3"*/);
    sub_B52984(&StringLiteral_19727/*"img_questboard_knockdown"*/);
    sub_B52984(&StringLiteral_21870/*"raid_point_old"*/);
    sub_B52984(&StringLiteral_21867/*"raid_point"*/);
    sub_B52984(&StringLiteral_21810/*"questboard_cap_closed_special_2"*/);
    sub_B52984(&StringLiteral_19725/*"img_questboard_hero02"*/);
    sub_B52984(&StringLiteral_19516/*"icon_spot_next"*/);
    sub_B52984(&StringLiteral_21796/*"quest_board_"*/);
    sub_B52984(&StringLiteral_21817/*"questboard_shohi_"*/);
    sub_B52984(&StringLiteral_21868/*"raid_point_frame"*/);
    sub_B52984(&StringLiteral_19723/*"img_questboard_free_"*/);
    sub_B52984(&StringLiteral_21869/*"raid_point_frame_old"*/);
    sub_B52984(&StringLiteral_19721/*"img_questboard_damage"*/);
    sub_B52984(&StringLiteral_17291/*"caldeagate_notice_{0:00}"*/);
    sub_B52984(&StringLiteral_21798/*"quest_board_mask_"*/);
    sub_B52984(&StringLiteral_6252/*"EventUI/QuestBoardIcon/"*/);
    sub_B52984(&StringLiteral_19722/*"img_questboard_event{0:D3}"*/);
    sub_B52984(&StringLiteral_19734/*"img_questboard_story04mask"*/);
    sub_B52984(&StringLiteral_19737/*"img_questloop_on"*/);
    sub_B52984(&StringLiteral_19736/*"img_questloop_off"*/);
    sub_B52984(&StringLiteral_19740/*"img_questtxt_free"*/);
    sub_B52984(&StringLiteral_21813/*"questboard_cap{0:D3}"*/);
    sub_B52984(&StringLiteral_19732/*"img_questboard_story03"*/);
    sub_B52984(&StringLiteral_19719/*"img_questboard_"*/);
    sub_B52984(&StringLiteral_19714/*"img_quest_unit_{0:D2}"*/);
    sub_B52984(&StringLiteral_21809/*"questboard_cap_closed_special"*/);
    sub_B52984(&StringLiteral_19739/*"img_questtxt_event"*/);
    sub_B52984(&StringLiteral_19724/*"img_questboard_hero01"*/);
    sub_B52984(&StringLiteral_19715/*"img_questarrow1_off"*/);
    sub_B52984(&StringLiteral_21807/*"questboard_ap_story"*/);
    sub_B52984(&StringLiteral_19777/*"img_slider_off"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_19713/*"img_quest_spend2"*/);
    sub_B52984(&StringLiteral_19710/*"img_quest_lasttime"*/);
    sub_B52984(&StringLiteral_19716/*"img_questarrow1_on"*/);
    sub_B52984(&StringLiteral_19730/*"img_questboard_story02"*/);
    sub_B52984(&StringLiteral_21839/*"qyestboard_ap_free"*/);
    sub_B52984(&StringLiteral_19515/*"icon_spot_free"*/);
    sub_B52984(&StringLiteral_21804/*"questboard_ap_"*/);
    sub_B52984(&StringLiteral_21812/*"questboard_cap_closed_{0}"*/);
    byte_42B1905 = 1;
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
  UnityEngine_Color___ctor_41463668(*(UnityEngine_Color_o *)(&v1 - 3), v2, v3, v4, &methoda);
  v697.fields.g = 0.0;
  v697.fields.b = 0.0;
  QuestBoardListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_COST_COLOR = *(struct UnityEngine_Color_o *)&methoda.methodPointer;
  v697.fields.r = 0.90196;
  v692 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor_41463668(v697, v9, v10, v11, (const MethodInfo *)&v692);
  v12 = QuestBoardListViewItemDraw_TypeInfo;
  QuestBoardListViewItemDraw_TypeInfo->static_fields->OVER_COST_COLOR = v692;
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
  v20 = (System_Int32_array **)StringLiteral_19516/*"icon_spot_next"*/;
  v19->NEXT_ICON_SPRITE_NAME = (struct System_String_o *)StringLiteral_19516/*"icon_spot_next"*/;
  sub_B52920((BattleServantConfConponent_o *)&v19->NEXT_ICON_SPRITE_NAME, v20, v21, v22, v23, v24, v25, v26);
  v27 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  v28 = (System_Int32_array **)StringLiteral_19515/*"icon_spot_free"*/;
  v27->FREE_ICON_SPRITE_NAME = (struct System_String_o *)StringLiteral_19515/*"icon_spot_free"*/;
  sub_B52920((BattleServantConfConponent_o *)&v27->FREE_ICON_SPRITE_NAME, v28, v29, v30, v31, v32, v33, v34);
  v35 = QuestBoardListViewItemDraw_TypeInfo;
  v36 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  *(_QWORD *)&v36->PREV_POS_QUEST.fields.x = 0x42300000C35C0000LL;
  v36->PREV_POS_QUEST.fields.z = 0.0;
  v37 = v35->static_fields;
  *(_QWORD *)&v37->PREV_POS_QUEST_NEXT.fields.x = 0x426C0000C2DC0000LL;
  v37->PREV_POS_QUEST_NEXT.fields.z = 0.0;
  v38 = v35->static_fields;
  *(_QWORD *)&v38->LINE_ST_POS_AREA.fields.x = 0xC0A00000C3570000LL;
  v38->LINE_ST_POS_AREA.fields.z = 0.0;
  v39 = v35->static_fields;
  *(_QWORD *)&v39->LINE_ST_POS_SHORTCUT.fields.x = 0xC0A00000C3700000LL;
  v39->LINE_ST_POS_SHORTCUT.fields.z = 0.0;
  v40 = v35->static_fields;
  *(_QWORD *)&v40->COST_OBJ_POS.fields.x = 0xC1C00000C2F00000LL;
  v40->COST_OBJ_POS.fields.z = 0.0;
  v41 = v35->static_fields;
  *(_QWORD *)&v41->COST_OBJ_POS_WAR_BOARD.fields.x = 0xC1E00000C2F20000LL;
  v41->COST_OBJ_POS_WAR_BOARD.fields.z = 0.0;
  v35->static_fields->COST_BG_WIDTH_SINGLE = 104;
  v35->static_fields->COST_BG_WIDTH_DOUBLE = 180;
  v35->static_fields->COST_BG_WIDTH_TLIPLE_FOR_ALL_ITEM = 193;
  v35->static_fields->COST_BG_WIDTH_WAR_BOARD = 69;
  v35->static_fields->COST_BG_WIDTH_DOUBLE_QP = 186;
  v42 = (System_Int32_array **)StringLiteral_21818/*"questboard_shohi_bg_01"*/;
  p_COST_BG_ITEM = (BattleServantConfConponent_o *)&v35->static_fields->COST_BG_ITEM;
  p_COST_BG_ITEM->klass = (BattleServantConfConponent_c *)StringLiteral_21818/*"questboard_shohi_bg_01"*/;
  sub_B52920(p_COST_BG_ITEM, v42, v44, v45, v46, v47, v48, v49);
  v50 = (System_Int32_array **)StringLiteral_21819/*"questboard_shohi_bg_02"*/;
  p_COST_BG_QP = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_QP;
  p_COST_BG_QP->klass = (BattleServantConfConponent_c *)StringLiteral_21819/*"questboard_shohi_bg_02"*/;
  sub_B52920(p_COST_BG_QP, v50, v52, v53, v54, v55, v56, v57);
  v58 = QuestBoardListViewItemDraw_TypeInfo;
  v59 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  *(_QWORD *)&v59->COST_1_ICON_AP_POS.fields.x = 1098907648LL;
  v59->COST_1_ICON_AP_POS.fields.z = 0.0;
  v60 = v58->static_fields;
  *(_QWORD *)&v60->COST_1_ICON_AP_POS_WAR_BOARD.fields.x = 1099956224LL;
  v60->COST_1_ICON_AP_POS_WAR_BOARD.fields.z = 0.0;
  v61 = v58->static_fields;
  *(_QWORD *)&v61->COST_1_LABEL_AP_POS.fields.x = 1103888384LL;
  v61->COST_1_LABEL_AP_POS.fields.z = 0.0;
  v62 = v58->static_fields;
  *(_QWORD *)&v62->COST_1_LABEL_AP_POS_WAR_BOARD.fields.x = 1104936960LL;
  v62->COST_1_LABEL_AP_POS_WAR_BOARD.fields.z = 0.0;
  v58->static_fields->COST_2_ICON_NORMAL_POSITION_X = 101;
  v58->static_fields->COST_2_ICON_QP_POSITION_X = 73;
  v58->static_fields->COST_2_LABEL_NORMAL_POSITION_X = 111;
  v58->static_fields->COST_2_LABEL_QP_POSITION_X = 82;
  v58->static_fields->COST_1_LABEL_NORMAL_POSITION_X_FOR_ALL_ITEM = 28;
  v58->static_fields->COST_2_ICON_NORMAL_POSITION_X_FOR_ALL_ITEM = 76;
  v58->static_fields->COST_2_LABEL_NORMAL_POSITION_X_FOR_ALL_ITEM = 86;
  v58->static_fields->COST_3_ICON_NORMAL_POSITION_X_FOR_ALL_ITEM = 134;
  v58->static_fields->COST_3_LABEL_NORMAL_POSITION_X_FOR_ALL_ITEM = 144;
  v58->static_fields->COST_1_LABEL_DIGIT_3_SCALE_X = 0.81;
  v58->static_fields->COST_1_LABEL_DEFAULT_WIDTH = 35;
  v58->static_fields->COST_2_LABEL_DEFAULT_WIDTH = 101;
  v58->static_fields->COST_3_LABEL_DEFAULT_WIDTH = 101;
  v58->static_fields->COST_LABEL_WIDTH_FOR_THREE_ITEM = 30.4;
  v58->static_fields->COST_2_LABEL_DIGIT_8_SCALE_X = 0.9;
  v58->static_fields->COST_2_LABEL_DIGIT_9_SCALE_X = 0.81;
  v58->static_fields->COST_LABEL_DEFAULT_SPACING = 9;
  v58->static_fields->COST_LABEL_SPACING_FOR_THREE_ITEM = 8;
  v63 = v58->static_fields;
  *(_QWORD *)&v63->SHOHI_SP_POS.fields.x = 0x41C0000041800000LL;
  v63->SHOHI_SP_POS.fields.z = 0.0;
  v64 = v58->static_fields;
  *(_QWORD *)&v64->SHOHI_SP_POS_WAR_BOARD.fields.x = 0x41C8000041900000LL;
  v64->SHOHI_SP_POS_WAR_BOARD.fields.z = 0.0;
  v65 = (System_Int32_array **)StringLiteral_19712/*"img_quest_spend"*/;
  p_SHOHI_SP_NAME = (BattleServantConfConponent_o *)&v58->static_fields->SHOHI_SP_NAME;
  p_SHOHI_SP_NAME->klass = (BattleServantConfConponent_c *)StringLiteral_19712/*"img_quest_spend"*/;
  sub_B52920(p_SHOHI_SP_NAME, v65, v67, v68, v69, v70, v71, v72);
  v73 = (System_Int32_array **)StringLiteral_19713/*"img_quest_spend2"*/;
  p_SHOHI_SP_NAME_WAR_BOARD = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->SHOHI_SP_NAME_WAR_BOARD;
  p_SHOHI_SP_NAME_WAR_BOARD->klass = (BattleServantConfConponent_c *)StringLiteral_19713/*"img_quest_spend2"*/;
  sub_B52920(p_SHOHI_SP_NAME_WAR_BOARD, v73, v75, v76, v77, v78, v79, v80);
  v81 = (System_Int32_array **)StringLiteral_19710/*"img_quest_lasttime"*/;
  p_QUEST_BOARD_COSTNAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_COSTNAME;
  p_QUEST_BOARD_COSTNAME->klass = (BattleServantConfConponent_c *)StringLiteral_19710/*"img_quest_lasttime"*/;
  sub_B52920(p_QUEST_BOARD_COSTNAME, v81, v83, v84, v85, v86, v87, v88);
  v89 = QuestBoardListViewItemDraw_TypeInfo;
  QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_PHASE_INTERVAL = 21;
  v89->static_fields->QUEST_BOARD_PHASE_LOOF_INTERVAL = 30;
  v89->static_fields->QUEST_BOARD_PHASE_EX_INTERVAL = 17;
  v89->static_fields->QUEST_BOARD_PHASE_EX_LOOF_INTERVAL = 26;
  zero = UnityEngine_Vector3__get_zero(0LL);
  v90 = QuestBoardListViewItemDraw_TypeInfo;
  QuestBoardListViewItemDraw_TypeInfo->static_fields->CHALLENGE_OBJ_POS_SINGLE = zero;
  v91 = v90->static_fields;
  *(_QWORD *)&v91->CHALLENGE_OBJ_POS_DOUBLE.fields.x = 1115160576LL;
  v91->CHALLENGE_OBJ_POS_DOUBLE.fields.z = 0.0;
  v695 = UnityEngine_Vector3__get_zero(0LL);
  v92 = QuestBoardListViewItemDraw_TypeInfo;
  QuestBoardListViewItemDraw_TypeInfo->static_fields->PHASE_OBJ_POS_SINGLE = v695;
  v93 = v92->static_fields;
  *(_QWORD *)&v93->PHASE_OBJ_POS_DOUBLE.fields.x = 1116995584LL;
  v93->PHASE_OBJ_POS_DOUBLE.fields.z = 0.0;
  v94 = v92->static_fields;
  *(_QWORD *)&v94->PHASE_OBJ_POS_DOUBLE_QP.fields.x = 1117782016LL;
  v94->PHASE_OBJ_POS_DOUBLE_QP.fields.z = 0.0;
  v95 = v92->static_fields;
  *(_QWORD *)&v95->PHASE_OBJ_POS_TRIPLE_ITEM.fields.x = 1118699520LL;
  v95->PHASE_OBJ_POS_TRIPLE_ITEM.fields.z = 0.0;
  v96 = v92->static_fields;
  *(_QWORD *)&v96->PHASE_STR_POS_SINGLE.fields.x = 1116602368LL;
  v96->PHASE_STR_POS_SINGLE.fields.z = 0.0;
  v97 = v92->static_fields;
  *(_QWORD *)&v97->PHASE_STR_POS_DOUBLE.fields.x = 1113063424LL;
  v97->PHASE_STR_POS_DOUBLE.fields.z = 0.0;
  v98 = v92->static_fields;
  *(_QWORD *)&v98->PHASE_STR_POS_DOUBLE_QP.fields.x = 1111228416LL;
  v98->PHASE_STR_POS_DOUBLE_QP.fields.z = 0.0;
  v99 = v92->static_fields;
  *(_QWORD *)&v99->PHASE_STR_POS_TRIPLE_ITEM.fields.x = 1109393408LL;
  v99->PHASE_STR_POS_TRIPLE_ITEM.fields.z = 0.0;
  one = UnityEngine_Vector3__get_one(0LL);
  v100 = QuestBoardListViewItemDraw_TypeInfo;
  QuestBoardListViewItemDraw_TypeInfo->static_fields->PHASE_STR_SCL_SINGLE = one;
  v101 = v100->static_fields;
  *(_QWORD *)&v101->PHASE_STR_SCL_DOUBLE.fields.x = 0x3F8000003F4CCCCDLL;
  v101->PHASE_STR_SCL_DOUBLE.fields.z = 1.0;
  v102 = v100->static_fields;
  *(_QWORD *)&v102->PHASE_STR_SCL_DOUBLE_QP.fields.x = 0x3F8000003F4CCCCDLL;
  v102->PHASE_STR_SCL_DOUBLE_QP.fields.z = 1.0;
  v103 = v100->static_fields;
  *(_QWORD *)&v103->PHASE_STR_SCL_TRIPLE_ITEM.fields.x = 0x3F8000003F333333LL;
  v103->PHASE_STR_SCL_TRIPLE_ITEM.fields.z = 1.0;
  v100->static_fields->BOARD_MESSAGE_MAX_WITDH = 170;
  v104 = v100->static_fields;
  *(_QWORD *)&v104->BLACK_MARK_OBJ_POS.fields.x = 0x4284000000000000LL;
  v104->BLACK_MARK_OBJ_POS.fields.z = 0.0;
  v105 = v100->static_fields;
  *(_QWORD *)&v105->BLACK_MARK_OBJ_POS_CENTER.fields.x = 0LL;
  v105->BLACK_MARK_OBJ_POS_CENTER.fields.z = 0.0;
  v106 = v100->static_fields;
  *(_QWORD *)&v106->WHITE_MARK_OBJ_UNDER_POS.fields.x = 0xC284000000000000LL;
  v106->WHITE_MARK_OBJ_UNDER_POS.fields.z = 0.0;
  v107 = (System_Int32_array **)StringLiteral_18755/*"event_war_"*/;
  p_EVENT_WAR_SPNAME_PREFIX = (BattleServantConfConponent_o *)&v100->static_fields->EVENT_WAR_SPNAME_PREFIX;
  p_EVENT_WAR_SPNAME_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_18755/*"event_war_"*/;
  sub_B52920(p_EVENT_WAR_SPNAME_PREFIX, v107, v109, v110, v111, v112, v113, v114);
  v115 = (System_Int32_array **)StringLiteral_17387/*"chaldea_category_{0}"*/;
  p_EVENT_WAR_SUBFOLDER_SPNAME_PREFIX = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->EVENT_WAR_SUBFOLDER_SPNAME_PREFIX;
  p_EVENT_WAR_SUBFOLDER_SPNAME_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_17387/*"chaldea_category_{0}"*/;
  sub_B52920(p_EVENT_WAR_SUBFOLDER_SPNAME_PREFIX, v115, v117, v118, v119, v120, v121, v122);
  v123 = (System_Int32_array **)StringLiteral_21796/*"quest_board_"*/;
  p_QUEST_BOARD_SPNAME_PREFIX = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_SPNAME_PREFIX;
  p_QUEST_BOARD_SPNAME_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_21796/*"quest_board_"*/;
  sub_B52920(p_QUEST_BOARD_SPNAME_PREFIX, v123, v125, v126, v127, v128, v129, v130);
  v131 = (System_Int32_array **)StringLiteral_19719/*"img_questboard_"*/;
  p_RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX;
  p_RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_19719/*"img_questboard_"*/;
  sub_B52920(p_RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX, v131, v133, v134, v135, v136, v137, v138);
  v139 = (System_Int32_array **)StringLiteral_21797/*"quest_board_icon_"*/;
  p_QUEST_BOARD_ICON_SPNAME_PREFIX = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_ICON_SPNAME_PREFIX;
  p_QUEST_BOARD_ICON_SPNAME_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_21797/*"quest_board_icon_"*/;
  sub_B52920(p_QUEST_BOARD_ICON_SPNAME_PREFIX, v139, v141, v142, v143, v144, v145, v146);
  v147 = (System_Int32_array **)StringLiteral_21798/*"quest_board_mask_"*/;
  p_QUEST_BOARD_MASK_SPNAME_PREFIX = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_MASK_SPNAME_PREFIX;
  p_QUEST_BOARD_MASK_SPNAME_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_21798/*"quest_board_mask_"*/;
  sub_B52920(p_QUEST_BOARD_MASK_SPNAME_PREFIX, v147, v149, v150, v151, v152, v153, v154);
  v155 = (System_Int32_array **)StringLiteral_21817/*"questboard_shohi_"*/;
  p_QUEST_BOARD_SHOHI_SPNAME_PREFIX = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_SHOHI_SPNAME_PREFIX;
  p_QUEST_BOARD_SHOHI_SPNAME_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_21817/*"questboard_shohi_"*/;
  sub_B52920(p_QUEST_BOARD_SHOHI_SPNAME_PREFIX, v155, v157, v158, v159, v160, v161, v162);
  v163 = (System_Int32_array **)StringLiteral_21804/*"questboard_ap_"*/;
  p_QUEST_BOARD_AP_SPNAME_PREFIX = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_AP_SPNAME_PREFIX;
  p_QUEST_BOARD_AP_SPNAME_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_21804/*"questboard_ap_"*/;
  sub_B52920(p_QUEST_BOARD_AP_SPNAME_PREFIX, v163, v165, v166, v167, v168, v169, v170);
  v171 = (System_Int32_array **)StringLiteral_17291/*"caldeagate_notice_{0:00}"*/;
  p_QUEST_BOARD_INFO_FRAME_NAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_INFO_FRAME_NAME;
  p_QUEST_BOARD_INFO_FRAME_NAME->klass = (BattleServantConfConponent_c *)StringLiteral_17291/*"caldeagate_notice_{0:00}"*/;
  sub_B52920(p_QUEST_BOARD_INFO_FRAME_NAME, v171, v173, v174, v175, v176, v177, v178);
  v179 = (System_Int32_array **)StringLiteral_19721/*"img_questboard_damage"*/;
  p_QUEST_BOARD_DAMAGE_RECODE_NAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_DAMAGE_RECODE_NAME;
  p_QUEST_BOARD_DAMAGE_RECODE_NAME->klass = (BattleServantConfConponent_c *)StringLiteral_19721/*"img_questboard_damage"*/;
  sub_B52920(p_QUEST_BOARD_DAMAGE_RECODE_NAME, v179, v181, v182, v183, v184, v185, v186);
  v187 = (System_Int32_array **)StringLiteral_19710/*"img_quest_lasttime"*/;
  p_QUEST_BOARD_PREV_ICON_NAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_PREV_ICON_NAME;
  p_QUEST_BOARD_PREV_ICON_NAME->klass = (BattleServantConfConponent_c *)StringLiteral_19710/*"img_quest_lasttime"*/;
  sub_B52920(p_QUEST_BOARD_PREV_ICON_NAME, v187, v189, v190, v191, v192, v193, v194);
  v195 = (System_Int32_array **)StringLiteral_19727/*"img_questboard_knockdown"*/;
  p_QUEST_BOARD_KNOCKDOWN_RECODE_NAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_KNOCKDOWN_RECODE_NAME;
  p_QUEST_BOARD_KNOCKDOWN_RECODE_NAME->klass = (BattleServantConfConponent_c *)StringLiteral_19727/*"img_questboard_knockdown"*/;
  sub_B52920(p_QUEST_BOARD_KNOCKDOWN_RECODE_NAME, v195, v197, v198, v199, v200, v201, v202);
  v203 = (System_Int32_array **)StringLiteral_6252/*"EventUI/QuestBoardIcon/"*/;
  p_QUEST_BOARD_ICON_TEXTURE_PATH = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH;
  p_QUEST_BOARD_ICON_TEXTURE_PATH->klass = (BattleServantConfConponent_c *)StringLiteral_6252/*"EventUI/QuestBoardIcon/"*/;
  sub_B52920(p_QUEST_BOARD_ICON_TEXTURE_PATH, v203, v205, v206, v207, v208, v209, v210);
  v211 = (System_Int32_array **)StringLiteral_21797/*"quest_board_icon_"*/;
  p_QUEST_BOARD_ICON_TEXTURE_PREFIX = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_ICON_TEXTURE_PREFIX;
  p_QUEST_BOARD_ICON_TEXTURE_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_21797/*"quest_board_icon_"*/;
  sub_B52920(p_QUEST_BOARD_ICON_TEXTURE_PREFIX, v211, v213, v214, v215, v216, v217, v218);
  v219 = QuestBoardListViewItemDraw_TypeInfo;
  QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_KNOCKDOWN_DAMAGE_WIDTH = 78;
  v219->static_fields->QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX = 48;
  v219->static_fields->QUEST_BOARD_KNOCKDOWN_ZERO_DAMAGE_POSX = 19;
  v219->static_fields->FLICK_THRESHOLD = 2.0;
  v220 = (System_Int32_array **)StringLiteral_19778/*"img_slider_on"*/;
  p_BANNER_POINT_SPNAME_ON = (BattleServantConfConponent_o *)&v219->static_fields->BANNER_POINT_SPNAME_ON;
  p_BANNER_POINT_SPNAME_ON->klass = (BattleServantConfConponent_c *)StringLiteral_19778/*"img_slider_on"*/;
  sub_B52920(p_BANNER_POINT_SPNAME_ON, v220, v222, v223, v224, v225, v226, v227);
  v228 = (System_Int32_array **)StringLiteral_19777/*"img_slider_off"*/;
  p_BANNER_POINT_SPNAME_OFF = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->BANNER_POINT_SPNAME_OFF;
  p_BANNER_POINT_SPNAME_OFF->klass = (BattleServantConfConponent_c *)StringLiteral_19777/*"img_slider_off"*/;
  sub_B52920(p_BANNER_POINT_SPNAME_OFF, v228, v230, v231, v232, v233, v234, v235);
  v236 = QuestBoardListViewItemDraw_TypeInfo;
  QuestBoardListViewItemDraw_TypeInfo->static_fields->SHORTCUT_FACE_MASK_SP_W = 136;
  v236->static_fields->QUEST_FACE_MASK_SP_W = 124;
  v237 = (System_Int32_array **)StringLiteral_19731/*"img_questboard_story02mask"*/;
  p_SHORTCUT_FACE_MASK_SPNAME = (BattleServantConfConponent_o *)&v236->static_fields->SHORTCUT_FACE_MASK_SPNAME;
  p_SHORTCUT_FACE_MASK_SPNAME->klass = (BattleServantConfConponent_c *)StringLiteral_19731/*"img_questboard_story02mask"*/;
  sub_B52920(p_SHORTCUT_FACE_MASK_SPNAME, v237, v239, v240, v241, v242, v243, v244);
  v245 = (System_Int32_array **)StringLiteral_19733/*"img_questboard_story03mask"*/;
  p_QUEST_STORY_FACE_MASK_SPNAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_STORY_FACE_MASK_SPNAME;
  p_QUEST_STORY_FACE_MASK_SPNAME->klass = (BattleServantConfConponent_c *)StringLiteral_19733/*"img_questboard_story03mask"*/;
  sub_B52920(p_QUEST_STORY_FACE_MASK_SPNAME, v245, v247, v248, v249, v250, v251, v252);
  v253 = (System_Int32_array **)StringLiteral_19734/*"img_questboard_story04mask"*/;
  p_QUEST_MAIN_FACE_MASK_SPNAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_MAIN_FACE_MASK_SPNAME;
  p_QUEST_MAIN_FACE_MASK_SPNAME->klass = (BattleServantConfConponent_c *)StringLiteral_19734/*"img_questboard_story04mask"*/;
  sub_B52920(p_QUEST_MAIN_FACE_MASK_SPNAME, v253, v255, v256, v257, v258, v259, v260);
  v261 = (System_Int32_array **)StringLiteral_19735/*"img_questboard_story05mask"*/;
  p_QUEST_EVENT_FACE_MASK_SPNAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_EVENT_FACE_MASK_SPNAME;
  p_QUEST_EVENT_FACE_MASK_SPNAME->klass = (BattleServantConfConponent_c *)StringLiteral_19735/*"img_questboard_story05mask"*/;
  sub_B52920(p_QUEST_EVENT_FACE_MASK_SPNAME, v261, v263, v264, v265, v266, v267, v268);
  v269 = sub_B5299C(string___TypeInfo, 2LL);
  if ( !v269 )
    goto LABEL_177;
  v277 = (System_Int32_array **)v269;
  v278 = (void *)StringLiteral_21869/*"raid_point_frame_old"*/;
  if ( StringLiteral_21869/*"raid_point_frame_old"*/ )
  {
    v278 = (void *)sub_B52A44(StringLiteral_21869/*"raid_point_frame_old"*/, *(_QWORD *)&(*v277)->m_Items[9]);
    if ( !v278 )
      goto LABEL_176;
    v279 = (System_Int32_array **)StringLiteral_21869/*"raid_point_frame_old"*/;
  }
  else
  {
    v279 = 0LL;
  }
  if ( !*((_DWORD *)v277 + 6) )
    goto LABEL_175;
  v277[4] = (System_Int32_array *)v279;
  sub_B52920((BattleServantConfConponent_o *)(v277 + 4), v279, v271, v272, v273, v274, v275, v276);
  v278 = (void *)StringLiteral_21868/*"raid_point_frame"*/;
  if ( StringLiteral_21868/*"raid_point_frame"*/ )
  {
    v278 = (void *)sub_B52A44(StringLiteral_21868/*"raid_point_frame"*/, *(_QWORD *)&(*v277)->m_Items[9]);
    if ( !v278 )
      goto LABEL_176;
    v286 = (System_Int32_array **)StringLiteral_21868/*"raid_point_frame"*/;
  }
  else
  {
    v286 = 0LL;
  }
  if ( *((_DWORD *)v277 + 6) <= 1u )
    goto LABEL_175;
  v277[5] = (System_Int32_array *)v286;
  sub_B52920((BattleServantConfConponent_o *)(v277 + 5), v286, v280, v281, v282, v283, v284, v285);
  p_RP_SPNAME_FRAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->RP_SPNAME_FRAME;
  p_RP_SPNAME_FRAME->klass = (BattleServantConfConponent_c *)v277;
  sub_B52920(p_RP_SPNAME_FRAME, v277, v288, v289, v290, v291, v292, v293);
  v269 = sub_B5299C(string___TypeInfo, 2LL);
  if ( !v269 )
    goto LABEL_177;
  v300 = (System_Int32_array **)v269;
  v278 = (void *)StringLiteral_21870/*"raid_point_old"*/;
  if ( StringLiteral_21870/*"raid_point_old"*/ )
  {
    v278 = (void *)sub_B52A44(StringLiteral_21870/*"raid_point_old"*/, *(_QWORD *)&(*v300)->m_Items[9]);
    if ( !v278 )
      goto LABEL_176;
    v301 = (System_Int32_array **)StringLiteral_21870/*"raid_point_old"*/;
  }
  else
  {
    v301 = 0LL;
  }
  if ( !*((_DWORD *)v300 + 6) )
    goto LABEL_175;
  v300[4] = (System_Int32_array *)v301;
  sub_B52920((BattleServantConfConponent_o *)(v300 + 4), v301, v294, v295, v296, v297, v298, v299);
  v278 = (void *)StringLiteral_21867/*"raid_point"*/;
  if ( StringLiteral_21867/*"raid_point"*/ )
  {
    v278 = (void *)sub_B52A44(StringLiteral_21867/*"raid_point"*/, *(_QWORD *)&(*v300)->m_Items[9]);
    if ( !v278 )
      goto LABEL_176;
    v308 = (System_Int32_array **)StringLiteral_21867/*"raid_point"*/;
  }
  else
  {
    v308 = 0LL;
  }
  if ( *((_DWORD *)v300 + 6) <= 1u )
    goto LABEL_175;
  v300[5] = (System_Int32_array *)v308;
  sub_B52920((BattleServantConfConponent_o *)(v300 + 5), v308, v302, v303, v304, v305, v306, v307);
  p_RP_SPNAME_POINT = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->RP_SPNAME_POINT;
  p_RP_SPNAME_POINT->klass = (BattleServantConfConponent_c *)v300;
  sub_B52920(p_RP_SPNAME_POINT, v300, v310, v311, v312, v313, v314, v315);
  v316 = QuestBoardListViewItemDraw_TypeInfo;
  QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_DEFAULT_FONT_SIZE = 18;
  v316->static_fields->RESTRICTION_FONT_SPACING_DEFAULT = 0;
  v316->static_fields->RESTRICTION_FONT_SPACING_MIN = -1;
  v317 = v316->static_fields;
  *(_QWORD *)&v317->RESTRICTION_POS_DEFAULT.fields.x = 0xC2040000C33A0000LL;
  v317->RESTRICTION_POS_DEFAULT.fields.z = 0.0;
  v316->static_fields->RESTRICTION_FONT_SIZE_ALLOUT = 14;
  v316->static_fields->RESTRICTION_FONT_WIDTH_ALLOUT = 112;
  v318 = v316->static_fields;
  *(_QWORD *)&v318->RESTRICTION_POS_ALLOUT.fields.x = 0xC2040000C3370000LL;
  v318->RESTRICTION_POS_ALLOUT.fields.z = 0.0;
  v316->static_fields->BANNER_ENTORY_EFFECT_DURATION = 0.5;
  v316->static_fields->BANNER_ENTORY_START_POS_X = 30.0;
  v319 = (System_Int32_array **)StringLiteral_21808/*"questboard_cap_closed"*/;
  p_QBOARD_CAP_CLOSED = (BattleServantConfConponent_o *)&v316->static_fields->QBOARD_CAP_CLOSED;
  p_QBOARD_CAP_CLOSED->klass = (BattleServantConfConponent_c *)StringLiteral_21808/*"questboard_cap_closed"*/;
  sub_B52920(p_QBOARD_CAP_CLOSED, v319, v321, v322, v323, v324, v325, v326);
  v327 = (System_Int32_array **)StringLiteral_21812/*"questboard_cap_closed_{0}"*/;
  p_QBOARD_CAP_CLOSED_SPECIAL_FORMAT = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_SPECIAL_FORMAT;
  p_QBOARD_CAP_CLOSED_SPECIAL_FORMAT->klass = (BattleServantConfConponent_c *)StringLiteral_21812/*"questboard_cap_closed_{0}"*/;
  sub_B52920(p_QBOARD_CAP_CLOSED_SPECIAL_FORMAT, v327, v329, v330, v331, v332, v333, v334);
  v335 = (System_Int32_array **)StringLiteral_21809/*"questboard_cap_closed_special"*/;
  p_QBOARD_CAP_CLOSED_SPECIAL = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_SPECIAL;
  p_QBOARD_CAP_CLOSED_SPECIAL->klass = (BattleServantConfConponent_c *)StringLiteral_21809/*"questboard_cap_closed_special"*/;
  sub_B52920(p_QBOARD_CAP_CLOSED_SPECIAL, v335, v337, v338, v339, v340, v341, v342);
  v343 = (System_Int32_array **)StringLiteral_21810/*"questboard_cap_closed_special_2"*/;
  p_QBOARD_CAP_CLOSED_SPECIAL_2 = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_SPECIAL_2;
  p_QBOARD_CAP_CLOSED_SPECIAL_2->klass = (BattleServantConfConponent_c *)StringLiteral_21810/*"questboard_cap_closed_special_2"*/;
  sub_B52920(p_QBOARD_CAP_CLOSED_SPECIAL_2, v343, v345, v346, v347, v348, v349, v350);
  v351 = (System_Int32_array **)StringLiteral_21811/*"questboard_cap_closed_special_3"*/;
  p_QBOARD_CAP_CLOSED_SPECIAL_3 = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_SPECIAL_3;
  p_QBOARD_CAP_CLOSED_SPECIAL_3->klass = (BattleServantConfConponent_c *)StringLiteral_21811/*"questboard_cap_closed_special_3"*/;
  sub_B52920(p_QBOARD_CAP_CLOSED_SPECIAL_3, v351, v353, v354, v355, v356, v357, v358);
  v269 = sub_B5299C(string___TypeInfo, 7LL);
  if ( !v269 )
    goto LABEL_177;
  v365 = (System_Int32_array **)v269;
  v278 = (void *)StringLiteral_19722/*"img_questboard_event{0:D3}"*/;
  if ( StringLiteral_19722/*"img_questboard_event{0:D3}"*/ )
  {
    v278 = (void *)sub_B52A44(StringLiteral_19722/*"img_questboard_event{0:D3}"*/, *(_QWORD *)&(*v365)->m_Items[9]);
    if ( !v278 )
      goto LABEL_176;
    v366 = (System_Int32_array **)StringLiteral_19722/*"img_questboard_event{0:D3}"*/;
  }
  else
  {
    v366 = 0LL;
  }
  if ( !*((_DWORD *)v365 + 6) )
    goto LABEL_175;
  v365[4] = (System_Int32_array *)v366;
  sub_B52920((BattleServantConfConponent_o *)(v365 + 4), v366, v359, v360, v361, v362, v363, v364);
  v278 = (void *)StringLiteral_21813/*"questboard_cap{0:D3}"*/;
  if ( StringLiteral_21813/*"questboard_cap{0:D3}"*/ )
  {
    v278 = (void *)sub_B52A44(StringLiteral_21813/*"questboard_cap{0:D3}"*/, *(_QWORD *)&(*v365)->m_Items[9]);
    if ( !v278 )
      goto LABEL_176;
    v373 = (System_Int32_array **)StringLiteral_21813/*"questboard_cap{0:D3}"*/;
  }
  else
  {
    v373 = 0LL;
  }
  if ( *((_DWORD *)v365 + 6) <= 1u )
    goto LABEL_175;
  v365[5] = (System_Int32_array *)v373;
  sub_B52920((BattleServantConfConponent_o *)(v365 + 5), v373, v367, v368, v369, v370, v371, v372);
  v278 = (void *)StringLiteral_17387/*"chaldea_category_{0}"*/;
  if ( StringLiteral_17387/*"chaldea_category_{0}"*/ )
  {
    v278 = (void *)sub_B52A44(StringLiteral_17387/*"chaldea_category_{0}"*/, *(_QWORD *)&(*v365)->m_Items[9]);
    if ( !v278 )
      goto LABEL_176;
    v380 = (System_Int32_array **)StringLiteral_17387/*"chaldea_category_{0}"*/;
  }
  else
  {
    v380 = 0LL;
  }
  if ( *((_DWORD *)v365 + 6) <= 2u )
    goto LABEL_175;
  v365[6] = (System_Int32_array *)v380;
  sub_B52920((BattleServantConfConponent_o *)(v365 + 6), v380, v374, v375, v376, v377, v378, v379);
  v278 = (void *)StringLiteral_19729/*"img_questboard_story01"*/;
  if ( StringLiteral_19729/*"img_questboard_story01"*/ )
  {
    v278 = (void *)sub_B52A44(StringLiteral_19729/*"img_questboard_story01"*/, *(_QWORD *)&(*v365)->m_Items[9]);
    if ( !v278 )
      goto LABEL_176;
    v387 = (System_Int32_array **)StringLiteral_19729/*"img_questboard_story01"*/;
  }
  else
  {
    v387 = 0LL;
  }
  if ( *((_DWORD *)v365 + 6) <= 3u )
    goto LABEL_175;
  v365[7] = (System_Int32_array *)v387;
  sub_B52920((BattleServantConfConponent_o *)(v365 + 7), v387, v381, v382, v383, v384, v385, v386);
  v278 = (void *)StringLiteral_19724/*"img_questboard_hero01"*/;
  if ( StringLiteral_19724/*"img_questboard_hero01"*/ )
  {
    v278 = (void *)sub_B52A44(StringLiteral_19724/*"img_questboard_hero01"*/, *(_QWORD *)&(*v365)->m_Items[9]);
    if ( !v278 )
      goto LABEL_176;
    v394 = (System_Int32_array **)StringLiteral_19724/*"img_questboard_hero01"*/;
  }
  else
  {
    v394 = 0LL;
  }
  if ( *((_DWORD *)v365 + 6) <= 4u )
    goto LABEL_175;
  v365[8] = (System_Int32_array *)v394;
  sub_B52920((BattleServantConfConponent_o *)(v365 + 8), v394, v388, v389, v390, v391, v392, v393);
  v278 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v278 = (void *)sub_B52A44(StringLiteral_1/*""*/, *(_QWORD *)&(*v365)->m_Items[9]);
    if ( !v278 )
      goto LABEL_176;
    v401 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v401 = 0LL;
  }
  if ( *((_DWORD *)v365 + 6) <= 5u )
    goto LABEL_175;
  v365[9] = (System_Int32_array *)v401;
  sub_B52920((BattleServantConfConponent_o *)(v365 + 9), v401, v395, v396, v397, v398, v399, v400);
  v278 = (void *)StringLiteral_21813/*"questboard_cap{0:D3}"*/;
  if ( StringLiteral_21813/*"questboard_cap{0:D3}"*/ )
  {
    v278 = (void *)sub_B52A44(StringLiteral_21813/*"questboard_cap{0:D3}"*/, *(_QWORD *)&(*v365)->m_Items[9]);
    if ( !v278 )
      goto LABEL_176;
    v408 = (System_Int32_array **)StringLiteral_21813/*"questboard_cap{0:D3}"*/;
  }
  else
  {
    v408 = 0LL;
  }
  if ( *((_DWORD *)v365 + 6) <= 6u )
    goto LABEL_175;
  v365[10] = (System_Int32_array *)v408;
  sub_B52920((BattleServantConfConponent_o *)(v365 + 10), v408, v402, v403, v404, v405, v406, v407);
  p_msQBoardL1Names = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msQBoardL1Names;
  p_msQBoardL1Names->klass = (BattleServantConfConponent_c *)v365;
  sub_B52920(p_msQBoardL1Names, v365, v410, v411, v412, v413, v414, v415);
  v416 = (System_Int32_array **)StringLiteral_19730/*"img_questboard_story02"*/;
  p_msQBoardL2Name_Story = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msQBoardL2Name_Story;
  p_msQBoardL2Name_Story->klass = (BattleServantConfConponent_c *)StringLiteral_19730/*"img_questboard_story02"*/;
  sub_B52920(p_msQBoardL2Name_Story, v416, v418, v419, v420, v421, v422, v423);
  v424 = (System_Int32_array **)StringLiteral_19725/*"img_questboard_hero02"*/;
  p_msQBoardL2Name_Hero = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msQBoardL2Name_Hero;
  p_msQBoardL2Name_Hero->klass = (BattleServantConfConponent_c *)StringLiteral_19725/*"img_questboard_hero02"*/;
  sub_B52920(p_msQBoardL2Name_Hero, v424, v426, v427, v428, v429, v430, v431);
  v269 = sub_B5299C(string___TypeInfo, 7LL);
  if ( !v269 )
    goto LABEL_177;
  v438 = (System_Int32_array **)v269;
  v278 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v278 = (void *)sub_B52A44(StringLiteral_1/*""*/, *(_QWORD *)&(*v438)->m_Items[9]);
    if ( !v278 )
      goto LABEL_176;
    v439 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v439 = 0LL;
  }
  if ( !*((_DWORD *)v438 + 6) )
    goto LABEL_175;
  v438[4] = (System_Int32_array *)v439;
  sub_B52920((BattleServantConfConponent_o *)(v438 + 4), v439, v432, v433, v434, v435, v436, v437);
  v278 = (void *)StringLiteral_19728/*"img_questboard_main_"*/;
  if ( StringLiteral_19728/*"img_questboard_main_"*/ )
  {
    v278 = (void *)sub_B52A44(StringLiteral_19728/*"img_questboard_main_"*/, *(_QWORD *)&(*v438)->m_Items[9]);
    if ( !v278 )
      goto LABEL_176;
    v446 = (System_Int32_array **)StringLiteral_19728/*"img_questboard_main_"*/;
  }
  else
  {
    v446 = 0LL;
  }
  if ( *((_DWORD *)v438 + 6) <= 1u )
    goto LABEL_175;
  v438[5] = (System_Int32_array *)v446;
  sub_B52920((BattleServantConfConponent_o *)(v438 + 5), v446, v440, v441, v442, v443, v444, v445);
  v278 = (void *)StringLiteral_19723/*"img_questboard_free_"*/;
  if ( StringLiteral_19723/*"img_questboard_free_"*/ )
  {
    v278 = (void *)sub_B52A44(StringLiteral_19723/*"img_questboard_free_"*/, *(_QWORD *)&(*v438)->m_Items[9]);
    if ( !v278 )
      goto LABEL_176;
    v453 = (System_Int32_array **)StringLiteral_19723/*"img_questboard_free_"*/;
  }
  else
  {
    v453 = 0LL;
  }
  if ( *((_DWORD *)v438 + 6) <= 2u )
    goto LABEL_175;
  v438[6] = (System_Int32_array *)v453;
  sub_B52920((BattleServantConfConponent_o *)(v438 + 6), v453, v447, v448, v449, v450, v451, v452);
  v278 = (void *)StringLiteral_19732/*"img_questboard_story03"*/;
  if ( StringLiteral_19732/*"img_questboard_story03"*/ )
  {
    v278 = (void *)sub_B52A44(StringLiteral_19732/*"img_questboard_story03"*/, *(_QWORD *)&(*v438)->m_Items[9]);
    if ( !v278 )
      goto LABEL_176;
    v460 = (System_Int32_array **)StringLiteral_19732/*"img_questboard_story03"*/;
  }
  else
  {
    v460 = 0LL;
  }
  if ( *((_DWORD *)v438 + 6) <= 3u )
    goto LABEL_175;
  v438[7] = (System_Int32_array *)v460;
  sub_B52920((BattleServantConfConponent_o *)(v438 + 7), v460, v454, v455, v456, v457, v458, v459);
  v278 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v278 = (void *)sub_B52A44(StringLiteral_1/*""*/, *(_QWORD *)&(*v438)->m_Items[9]);
    if ( !v278 )
      goto LABEL_176;
    v467 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v467 = 0LL;
  }
  if ( *((_DWORD *)v438 + 6) <= 4u )
    goto LABEL_175;
  v438[8] = (System_Int32_array *)v467;
  sub_B52920((BattleServantConfConponent_o *)(v438 + 8), v467, v461, v462, v463, v464, v465, v466);
  v278 = (void *)StringLiteral_19723/*"img_questboard_free_"*/;
  if ( StringLiteral_19723/*"img_questboard_free_"*/ )
  {
    v278 = (void *)sub_B52A44(StringLiteral_19723/*"img_questboard_free_"*/, *(_QWORD *)&(*v438)->m_Items[9]);
    if ( !v278 )
      goto LABEL_176;
    v474 = (System_Int32_array **)StringLiteral_19723/*"img_questboard_free_"*/;
  }
  else
  {
    v474 = 0LL;
  }
  if ( *((_DWORD *)v438 + 6) <= 5u )
    goto LABEL_175;
  v438[9] = (System_Int32_array *)v474;
  sub_B52920((BattleServantConfConponent_o *)(v438 + 9), v474, v468, v469, v470, v471, v472, v473);
  v278 = (void *)StringLiteral_19726/*"img_questboard_hero03"*/;
  if ( StringLiteral_19726/*"img_questboard_hero03"*/ )
  {
    v278 = (void *)sub_B52A44(StringLiteral_19726/*"img_questboard_hero03"*/, *(_QWORD *)&(*v438)->m_Items[9]);
    if ( !v278 )
      goto LABEL_176;
    v481 = (System_Int32_array **)StringLiteral_19726/*"img_questboard_hero03"*/;
  }
  else
  {
    v481 = 0LL;
  }
  if ( *((_DWORD *)v438 + 6) <= 6u )
    goto LABEL_175;
  v438[10] = (System_Int32_array *)v481;
  sub_B52920((BattleServantConfConponent_o *)(v438 + 10), v481, v475, v476, v477, v478, v479, v480);
  p_msQBoardL3Names = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msQBoardL3Names;
  p_msQBoardL3Names->klass = (BattleServantConfConponent_c *)v438;
  sub_B52920(p_msQBoardL3Names, v438, v483, v484, v485, v486, v487, v488);
  v269 = sub_B5299C(string___TypeInfo, 7LL);
  if ( !v269 )
    goto LABEL_177;
  v495 = (System_Int32_array **)v269;
  v278 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v278 = (void *)sub_B52A44(StringLiteral_1/*""*/, *(_QWORD *)&(*v495)->m_Items[9]);
    if ( !v278 )
      goto LABEL_176;
    v496 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v496 = 0LL;
  }
  if ( !*((_DWORD *)v495 + 6) )
    goto LABEL_175;
  v495[4] = (System_Int32_array *)v496;
  sub_B52920((BattleServantConfConponent_o *)(v495 + 4), v496, v489, v490, v491, v492, v493, v494);
  v278 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v278 = (void *)sub_B52A44(StringLiteral_1/*""*/, *(_QWORD *)&(*v495)->m_Items[9]);
    if ( !v278 )
      goto LABEL_176;
    v503 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v503 = 0LL;
  }
  if ( *((_DWORD *)v495 + 6) <= 1u )
    goto LABEL_175;
  v495[5] = (System_Int32_array *)v503;
  sub_B52920((BattleServantConfConponent_o *)(v495 + 5), v503, v497, v498, v499, v500, v501, v502);
  v278 = (void *)StringLiteral_19740/*"img_questtxt_free"*/;
  if ( StringLiteral_19740/*"img_questtxt_free"*/ )
  {
    v278 = (void *)sub_B52A44(StringLiteral_19740/*"img_questtxt_free"*/, *(_QWORD *)&(*v495)->m_Items[9]);
    if ( !v278 )
      goto LABEL_176;
    v510 = (System_Int32_array **)StringLiteral_19740/*"img_questtxt_free"*/;
  }
  else
  {
    v510 = 0LL;
  }
  if ( *((_DWORD *)v495 + 6) <= 2u )
    goto LABEL_175;
  v495[6] = (System_Int32_array *)v510;
  sub_B52920((BattleServantConfConponent_o *)(v495 + 6), v510, v504, v505, v506, v507, v508, v509);
  v278 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v278 = (void *)sub_B52A44(StringLiteral_1/*""*/, *(_QWORD *)&(*v495)->m_Items[9]);
    if ( !v278 )
      goto LABEL_176;
    v517 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v517 = 0LL;
  }
  if ( *((_DWORD *)v495 + 6) <= 3u )
    goto LABEL_175;
  v495[7] = (System_Int32_array *)v517;
  sub_B52920((BattleServantConfConponent_o *)(v495 + 7), v517, v511, v512, v513, v514, v515, v516);
  v278 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v278 = (void *)sub_B52A44(StringLiteral_1/*""*/, *(_QWORD *)&(*v495)->m_Items[9]);
    if ( !v278 )
      goto LABEL_176;
    v524 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v524 = 0LL;
  }
  if ( *((_DWORD *)v495 + 6) <= 4u )
    goto LABEL_175;
  v495[8] = (System_Int32_array *)v524;
  sub_B52920((BattleServantConfConponent_o *)(v495 + 8), v524, v518, v519, v520, v521, v522, v523);
  v278 = (void *)StringLiteral_19739/*"img_questtxt_event"*/;
  if ( StringLiteral_19739/*"img_questtxt_event"*/ )
  {
    v278 = (void *)sub_B52A44(StringLiteral_19739/*"img_questtxt_event"*/, *(_QWORD *)&(*v495)->m_Items[9]);
    if ( !v278 )
      goto LABEL_176;
    v531 = (System_Int32_array **)StringLiteral_19739/*"img_questtxt_event"*/;
  }
  else
  {
    v531 = 0LL;
  }
  if ( *((_DWORD *)v495 + 6) <= 5u )
    goto LABEL_175;
  v495[9] = (System_Int32_array *)v531;
  sub_B52920((BattleServantConfConponent_o *)(v495 + 9), v531, v525, v526, v527, v528, v529, v530);
  v278 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v278 = (void *)sub_B52A44(StringLiteral_1/*""*/, *(_QWORD *)&(*v495)->m_Items[9]);
    if ( !v278 )
      goto LABEL_176;
    v538 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v538 = 0LL;
  }
  if ( *((_DWORD *)v495 + 6) <= 6u )
    goto LABEL_175;
  v495[10] = (System_Int32_array *)v538;
  sub_B52920((BattleServantConfConponent_o *)(v495 + 10), v538, v532, v533, v534, v535, v536, v537);
  p_msLabelMainSprNames = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msLabelMainSprNames;
  p_msLabelMainSprNames->klass = (BattleServantConfConponent_c *)v495;
  sub_B52920(p_msLabelMainSprNames, v495, v540, v541, v542, v543, v544, v545);
  v269 = sub_B5299C(string___TypeInfo, 8LL);
  if ( !v269 )
LABEL_177:
    sub_B52A5C(v269, v270);
  v552 = (System_Int32_array **)v269;
  v278 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v278 = (void *)sub_B52A44(StringLiteral_1/*""*/, *(_QWORD *)&(*v552)->m_Items[9]);
    if ( !v278 )
      goto LABEL_176;
    v553 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v553 = 0LL;
  }
  if ( !*((_DWORD *)v552 + 6) )
    goto LABEL_175;
  v552[4] = (System_Int32_array *)v553;
  sub_B52920((BattleServantConfConponent_o *)(v552 + 4), v553, v546, v547, v548, v549, v550, v551);
  v278 = (void *)StringLiteral_21806/*"questboard_ap_main"*/;
  if ( StringLiteral_21806/*"questboard_ap_main"*/ )
  {
    v278 = (void *)sub_B52A44(StringLiteral_21806/*"questboard_ap_main"*/, *(_QWORD *)&(*v552)->m_Items[9]);
    if ( !v278 )
      goto LABEL_176;
    v560 = (System_Int32_array **)StringLiteral_21806/*"questboard_ap_main"*/;
  }
  else
  {
    v560 = 0LL;
  }
  if ( *((_DWORD *)v552 + 6) <= 1u )
    goto LABEL_175;
  v552[5] = (System_Int32_array *)v560;
  sub_B52920((BattleServantConfConponent_o *)(v552 + 5), v560, v554, v555, v556, v557, v558, v559);
  v278 = (void *)StringLiteral_21805/*"questboard_ap_free"*/;
  if ( StringLiteral_21805/*"questboard_ap_free"*/ )
  {
    v278 = (void *)sub_B52A44(StringLiteral_21805/*"questboard_ap_free"*/, *(_QWORD *)&(*v552)->m_Items[9]);
    if ( !v278 )
      goto LABEL_176;
    v567 = (System_Int32_array **)StringLiteral_21805/*"questboard_ap_free"*/;
  }
  else
  {
    v567 = 0LL;
  }
  if ( *((_DWORD *)v552 + 6) <= 2u )
    goto LABEL_175;
  v552[6] = (System_Int32_array *)v567;
  sub_B52920((BattleServantConfConponent_o *)(v552 + 6), v567, v561, v562, v563, v564, v565, v566);
  v278 = (void *)StringLiteral_21807/*"questboard_ap_story"*/;
  if ( StringLiteral_21807/*"questboard_ap_story"*/ )
  {
    v278 = (void *)sub_B52A44(StringLiteral_21807/*"questboard_ap_story"*/, *(_QWORD *)&(*v552)->m_Items[9]);
    if ( !v278 )
      goto LABEL_176;
    v574 = (System_Int32_array **)StringLiteral_21807/*"questboard_ap_story"*/;
  }
  else
  {
    v574 = 0LL;
  }
  if ( *((_DWORD *)v552 + 6) <= 3u )
    goto LABEL_175;
  v552[7] = (System_Int32_array *)v574;
  sub_B52920((BattleServantConfConponent_o *)(v552 + 7), v574, v568, v569, v570, v571, v572, v573);
  v278 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v278 = (void *)sub_B52A44(StringLiteral_1/*""*/, *(_QWORD *)&(*v552)->m_Items[9]);
    if ( !v278 )
      goto LABEL_176;
    v581 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v581 = 0LL;
  }
  if ( *((_DWORD *)v552 + 6) <= 4u )
    goto LABEL_175;
  v552[8] = (System_Int32_array *)v581;
  sub_B52920((BattleServantConfConponent_o *)(v552 + 8), v581, v575, v576, v577, v578, v579, v580);
  v278 = (void *)StringLiteral_21805/*"questboard_ap_free"*/;
  if ( StringLiteral_21805/*"questboard_ap_free"*/ )
  {
    v278 = (void *)sub_B52A44(StringLiteral_21805/*"questboard_ap_free"*/, *(_QWORD *)&(*v552)->m_Items[9]);
    if ( !v278 )
      goto LABEL_176;
    v588 = (System_Int32_array **)StringLiteral_21805/*"questboard_ap_free"*/;
  }
  else
  {
    v588 = 0LL;
  }
  if ( *((_DWORD *)v552 + 6) <= 5u )
    goto LABEL_175;
  v552[9] = (System_Int32_array *)v588;
  sub_B52920((BattleServantConfConponent_o *)(v552 + 9), v588, v582, v583, v584, v585, v586, v587);
  v278 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v278 = (void *)sub_B52A44(StringLiteral_1/*""*/, *(_QWORD *)&(*v552)->m_Items[9]);
    if ( !v278 )
      goto LABEL_176;
    v595 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v595 = 0LL;
  }
  if ( *((_DWORD *)v552 + 6) <= 6u )
    goto LABEL_175;
  v552[10] = (System_Int32_array *)v595;
  sub_B52920((BattleServantConfConponent_o *)(v552 + 10), v595, v589, v590, v591, v592, v593, v594);
  v278 = (void *)StringLiteral_21839/*"qyestboard_ap_free"*/;
  if ( StringLiteral_21839/*"qyestboard_ap_free"*/ )
  {
    v278 = (void *)sub_B52A44(StringLiteral_21839/*"qyestboard_ap_free"*/, *(_QWORD *)&(*v552)->m_Items[9]);
    if ( v278 )
    {
      v602 = (System_Int32_array **)StringLiteral_21839/*"qyestboard_ap_free"*/;
      goto LABEL_173;
    }
LABEL_176:
    v691 = sub_B52A7C(v278);
    sub_B52A28(v691, 0LL);
  }
  v602 = 0LL;
LABEL_173:
  if ( *((_DWORD *)v552 + 6) <= 7u )
  {
LABEL_175:
    v690 = sub_B52A88(v278);
    sub_B52A28(v690, 0LL);
  }
  v552[11] = (System_Int32_array *)v602;
  sub_B52920((BattleServantConfConponent_o *)(v552 + 11), v602, v596, v597, v598, v599, v600, v601);
  p_QuestBoardApSpNames = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QuestBoardApSpNames;
  p_QuestBoardApSpNames->klass = (BattleServantConfConponent_c *)v552;
  sub_B52920(p_QuestBoardApSpNames, v552, v604, v605, v606, v607, v608, v609);
  v610 = (System_Int32_array **)StringLiteral_19717/*"img_questarrow_off"*/;
  p_msPhaseSprName_ArrowOff = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_ArrowOff;
  p_msPhaseSprName_ArrowOff->klass = (BattleServantConfConponent_c *)StringLiteral_19717/*"img_questarrow_off"*/;
  sub_B52920(p_msPhaseSprName_ArrowOff, v610, v612, v613, v614, v615, v616, v617);
  v618 = (System_Int32_array **)StringLiteral_19718/*"img_questarrow_on"*/;
  p_msPhaseSprName_ArrowOn = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_ArrowOn;
  p_msPhaseSprName_ArrowOn->klass = (BattleServantConfConponent_c *)StringLiteral_19718/*"img_questarrow_on"*/;
  sub_B52920(p_msPhaseSprName_ArrowOn, v618, v620, v621, v622, v623, v624, v625);
  v626 = (System_Int32_array **)StringLiteral_19715/*"img_questarrow1_off"*/;
  p_msPhaseSprName_ExArrowOff = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_ExArrowOff;
  p_msPhaseSprName_ExArrowOff->klass = (BattleServantConfConponent_c *)StringLiteral_19715/*"img_questarrow1_off"*/;
  sub_B52920(p_msPhaseSprName_ExArrowOff, v626, v628, v629, v630, v631, v632, v633);
  v634 = (System_Int32_array **)StringLiteral_19716/*"img_questarrow1_on"*/;
  p_msPhaseSprName_ExArrowOn = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_ExArrowOn;
  p_msPhaseSprName_ExArrowOn->klass = (BattleServantConfConponent_c *)StringLiteral_19716/*"img_questarrow1_on"*/;
  sub_B52920(p_msPhaseSprName_ExArrowOn, v634, v636, v637, v638, v639, v640, v641);
  v642 = (System_Int32_array **)StringLiteral_19736/*"img_questloop_off"*/;
  p_msPhaseSprName_LoopOff = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_LoopOff;
  p_msPhaseSprName_LoopOff->klass = (BattleServantConfConponent_c *)StringLiteral_19736/*"img_questloop_off"*/;
  sub_B52920(p_msPhaseSprName_LoopOff, v642, v644, v645, v646, v647, v648, v649);
  v650 = (System_Int32_array **)StringLiteral_19737/*"img_questloop_on"*/;
  p_msPhaseSprName_LoopOn = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_LoopOn;
  p_msPhaseSprName_LoopOn->klass = (BattleServantConfConponent_c *)StringLiteral_19737/*"img_questloop_on"*/;
  sub_B52920(p_msPhaseSprName_LoopOn, v650, v652, v653, v654, v655, v656, v657);
  v658 = (System_Int32_array **)StringLiteral_19671/*"img_loop_off"*/;
  p_msPhaseSprName_LoopFirstOff = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_LoopFirstOff;
  p_msPhaseSprName_LoopFirstOff->klass = (BattleServantConfConponent_c *)StringLiteral_19671/*"img_loop_off"*/;
  sub_B52920(p_msPhaseSprName_LoopFirstOff, v658, v660, v661, v662, v663, v664, v665);
  v666 = (System_Int32_array **)StringLiteral_21816/*"questboard_icon_cap{0:D2}"*/;
  p_CHAPTER_SP_BASE_NAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->CHAPTER_SP_BASE_NAME;
  p_CHAPTER_SP_BASE_NAME->klass = (BattleServantConfConponent_c *)StringLiteral_21816/*"questboard_icon_cap{0:D2}"*/;
  sub_B52920(p_CHAPTER_SP_BASE_NAME, v666, v668, v669, v670, v671, v672, v673);
  v674 = (System_Int32_array **)StringLiteral_19714/*"img_quest_unit_{0:D2}"*/;
  p_CHAPTER_SP_UNIT_NAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->CHAPTER_SP_UNIT_NAME;
  p_CHAPTER_SP_UNIT_NAME->klass = (BattleServantConfConponent_c *)StringLiteral_19714/*"img_quest_unit_{0:D2}"*/;
  sub_B52920(p_CHAPTER_SP_UNIT_NAME, v674, v676, v677, v678, v679, v680, v681);
  v682 = (System_Int32_array **)StringLiteral_19711/*"img_quest_pre_organization"*/;
  p_PRE_BATTLE_ORGANIZATION = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->PRE_BATTLE_ORGANIZATION;
  p_PRE_BATTLE_ORGANIZATION->klass = (BattleServantConfConponent_c *)StringLiteral_19711/*"img_quest_pre_organization"*/;
  sub_B52920(p_PRE_BATTLE_ORGANIZATION, v682, v684, v685, v686, v687, v688, v689);
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

  if ( (byte_42B1904 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_GameObject___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_UISprite___ctor__);
    sub_B52984(&System_Collections_Generic_List_UISprite__TypeInfo);
    sub_B52984(&QuestBoardListViewItemDraw_TypeInfo);
    sub_B52984(&UISprite___TypeInfo);
    byte_42B1904 = 1;
  }
  v3 = (struct UnityEngine_GameObject_array *)sub_B5299C(UnityEngine_GameObject___TypeInfo, 4LL);
  this->fields.mStatusSp = v3;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.mStatusSp, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  v10 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v10 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v11 = (struct UISprite_array *)sub_B5299C(UISprite___TypeInfo, (unsigned int)v10->static_fields->PHASE_EXTRA_MAX);
  this->fields.mPhaseSp = v11;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.mPhaseSp,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UISprite__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UISprite___ctor__);
  this->fields.mMultiSecondBattleInformation = (struct System_Collections_Generic_List_UISprite__o *)v18;
  sub_B52920(
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
    sub_B52A5C(this, method);
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
    sub_B52A5C(this, questEntity);
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

  if ( (byte_42B18F5 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B18F5 = 1;
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
          sub_B52A5C(v6, v5);
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
    if ( (byte_42B18F1 & 1) == 0 )
    {
      sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__RemoveAt__);
      sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__);
      sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__);
      this = (QuestBoardListViewItemDraw_o *)sub_B52984(&NetworkManager_TypeInfo);
      byte_42B18F1 = 1;
    }
    if ( (byte_42B18F2 & 1) == 0 )
    {
      this = (QuestBoardListViewItemDraw_o *)sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__);
      byte_42B18F2 = 1;
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
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
      (const MethodInfo_2FF32F4 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__RemoveAt__);
  }
  if ( (byte_42B18F3 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__);
    byte_42B18F3 = 1;
    mInfoTextList = v5->fields.mInfoTextList;
  }
  if ( mInfoTextList && mInfoTextList->fields._size )
  {
    this = (QuestBoardListViewItemDraw_o *)mInfoTextList->fields._items->m_Items[0];
    if ( !this )
LABEL_33:
      sub_B52A5C(this, questBoardItem);
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
    v10 = sub_B52A88(this);
    sub_B52A28(v10, 0LL);
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
      ItemIconComponent__SetItemImage_28310700((ItemIconComponent_o *)this, (int32_t)questBoardManager, v8, 0LL);
      return;
    }
LABEL_18:
    sub_B52A5C(this, questBoardManager);
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

  if ( (byte_42B18EA & 1) == 0 )
  {
    sub_B52984(&System_Text_StringBuilder_TypeInfo);
    sub_B52984(&StringLiteral_969/*"0"*/);
    byte_42B18EA = 1;
  }
  if ( n <= 0 )
    return (System_String_o *)StringLiteral_969/*"0"*/;
  if ( isUppercase )
    v6 = 32;
  else
    v6 = 0;
  v7 = n % 0xAu;
  v8 = 96 - v6;
  v9 = (System_Text_StringBuilder_o *)sub_B52A54(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_42988076(v9, 5, 0LL);
  if ( n >= 10 )
  {
    if ( n >= 100 )
    {
      v14 = n / 0x64u % 0xA;
      if ( v14 >= 2 )
      {
        if ( !v9 )
          goto LABEL_25;
        System_Text_StringBuilder__Append_42997292(v9, v8 | v14, 0LL);
      }
      else if ( !v9 )
      {
LABEL_25:
        sub_B52A5C(v10, v11);
      }
      System_Text_StringBuilder__Append_42997292(v9, 107 - v6, 0LL);
      v13 = n / 0xAu % 0xA;
    }
    else
    {
      if ( !v9 )
        goto LABEL_25;
      v13 = (unsigned __int8)n / 0xAu % 0xA;
    }
    if ( v13 >= 2 )
      System_Text_StringBuilder__Append_42997292(v9, v8 | v13, 0LL);
    System_Text_StringBuilder__Append_42997292(v9, 106 - v6, 0LL);
    if ( !v7 )
      return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v9->klass->vtable._3_ToString.method)(
                                  v9,
                                  v9->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  }
  else if ( !v9 )
  {
    goto LABEL_25;
  }
  System_Text_StringBuilder__Append_42997292(v9, v8 | v7, 0LL);
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

  if ( (byte_42B18C6 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_BoardMessageMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B52984(&Method_DataManager_GetMaster_WarMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&QuestBoardInformaionText_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_23732/*"{0}"*/);
    sub_B52984(&StringLiteral_13504/*"TIME_REST_QUEST_BOARD_EVENT"*/);
    sub_B52984(&StringLiteral_13502/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/);
    byte_42B18C6 = 1;
  }
  entity = 0LL;
  QuestBoardListViewItemDraw__ResetInfoTextList(this, (const MethodInfo *)questBoardItem);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
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
                                                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  v67 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         v9,
                                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMaster___);
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               v9,
               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_BoardMessageMaster___);
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
          v19 = (QuestBoardInformaionText_o *)sub_B52A54(QuestBoardInformaionText_TypeInfo);
          v21 = (EventMissionProgressRequest_Argument_ProgressData_o *)v19;
          v22 = v15;
          v23 = message;
          v24 = closedAt;
          goto LABEL_28;
        case 2:
          Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                       v69,
                       (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !Instance )
            goto LABEL_76;
          Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                       v15->fields.referenceId,
                       (const MethodInfo_23E22D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_30;
          v32 = *((int *)Instance + 39);
          break;
        case 3:
          Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                       v69,
                       (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !Instance )
            goto LABEL_76;
          Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                       v15->fields.referenceId,
                       (const MethodInfo_23E22D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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
                       (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
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
          v30 = (QuestBoardInformaionText_o *)sub_B52A54(QuestBoardInformaionText_TypeInfo);
          QuestBoardInformaionText___ctor_27827872(v30, v15, v26, v27, checkTime, v28, v31);
          if ( !v29 )
            goto LABEL_76;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v29,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
          warId = v68;
          goto LABEL_30;
        default:
          goto LABEL_30;
      }
      if ( v32 - checkTime >= 0 )
      {
        v33 = v15->fields.message;
        mInfoTextList = this->fields.mInfoTextList;
        v19 = (QuestBoardInformaionText_o *)sub_B52A54(QuestBoardInformaionText_TypeInfo);
        v21 = (EventMissionProgressRequest_Argument_ProgressData_o *)v19;
        v22 = v15;
        v23 = v33;
        v24 = v32;
LABEL_28:
        QuestBoardInformaionText___ctor_27827872(v19, v22, v23, v24, checkTime, 0LL, v20);
        if ( !mInfoTextList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mInfoTextList,
          v21,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
      }
LABEL_30:
      if ( (int)++v14 >= (int)v12 )
        goto LABEL_33;
      if ( v14 >= v13->max_length )
        goto LABEL_77;
    }
LABEL_76:
    sub_B52A5C(Instance, v6);
  }
LABEL_33:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Instance )
    goto LABEL_76;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         warId,
         (const MethodInfo_23E2334 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
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
          v42 = LocalizationManager__Get((System_String_o *)StringLiteral_13504/*"TIME_REST_QUEST_BOARD_EVENT"*/, 0LL);
          endTime = v65->fields.endTime;
          v44 = (QuestBoardInformaionText_o *)sub_B52A54(QuestBoardInformaionText_TypeInfo);
          QuestBoardInformaionText___ctor_27827872(v44, v40, v42, endTime, checkTime, 0LL, v45);
          if ( !v41 )
            goto LABEL_76;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v41,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v44,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
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
            v55 = LocalizationManager__Get((System_String_o *)StringLiteral_13502/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, 0LL);
            EventName = (Il2CppObject *)EventEntity__getEventName(v49, 0LL);
            v57 = System_String__Format_44563852(v55, EventName, (Il2CppObject *)StringLiteral_23732/*"{0}"*/, 0LL);
            v58 = this->fields.mInfoTextList;
            v59 = EventEntity__GetEndTime(v49, 0, 0LL);
            v60 = (QuestBoardInformaionText_o *)sub_B52A54(QuestBoardInformaionText_TypeInfo);
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
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
            warId = v68;
          }
        }
      }
      v46 = *((_DWORD *)v47 + 6);
      if ( (int)++v48 >= v46 )
        return;
    }
LABEL_77:
    v62 = sub_B52A88(Instance);
    sub_B52A28(v62, 0LL);
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
  QuestBoardListViewItemDraw___c__DisplayClass345_0_o *v13; // x25
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
  Il2CppObject *v28; // x0
  System_String_o *v29; // x21
  System_String_o *EventName; // x22
  int32_t ImageId; // w20
  TerminalBoardOptionTextData_o *dispTextExtend; // x23
  int64_t v33; // x19
  System_String_o *v34; // x0
  System_String_o *v35; // x20
  int64_t EndTime; // x19
  QuestPhaseEntity_o *Entity; // x0
  struct System_Int32_array *targetIds; // x8
  int32_t consumeType; // w8
  System_String_o *v40; // x20
  Il2CppObject *v41; // x0
  System_String_o *v42; // x20
  int64_t v43; // x19
  QuestBoardInformaionText_o *v44; // x0
  int v45; // s0
  int v46; // s1
  int v47; // s2
  int v48; // s3
  int v49; // s4
  int v50; // s5
  int v51; // s6
  QuestBoardInformaionText_o *result; // x0
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x21
  System_String_o *detail; // x23
  int64_t v55; // x0
  int64_t checkTime; // x24
  int64_t v57; // x25
  QuestBoardInformaionText_o *v58; // x22
  const MethodInfo *v59; // x6
  QuestBoardListViewItemDraw_o *v60; // x0
  QuestEntity_o *v61; // x1
  EventCampaignEntity_o *v62; // x2
  bool v63; // w3
  int32_t *v64; // x4
  int32_t *v65; // x5
  const MethodInfo *v66; // x6
  EventCampaignEntity_o *v67; // [xsp+0h] [xbp-70h]
  const MethodInfo *v68; // [xsp+10h] [xbp-60h]
  int32_t Num_k__BackingField; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v70; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Vector3_o v71; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v72; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42B18EE & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_EventCampaignReleaseMaster___);
    sub_B52984(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UserOwnItemInfo__Find__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_System_Predicate_UserOwnItemInfo___ctor__);
    sub_B52984(&System_Predicate_UserOwnItemInfo__TypeInfo);
    sub_B52984(&QuestBoardInformaionText_TypeInfo);
    sub_B52984(&QuestBoardListViewManager_TypeInfo);
    sub_B52984(&TerminalBoardOptionTextData_TypeInfo);
    sub_B52984(&Method_QuestBoardListViewItemDraw___c__DisplayClass345_0__CreateQuestBoardInformationText_b__0__);
    sub_B52984(&QuestBoardListViewItemDraw___c__DisplayClass345_0_TypeInfo);
    sub_B52984(&StringLiteral_23732/*"{0}"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_13502/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/);
    sub_B52984(&StringLiteral_13503/*"TIME_REST_QUEST_BOARD_CAMPAIGN_WITH_ITEM"*/);
    byte_42B18EE = 1;
  }
  v13 = (QuestBoardListViewItemDraw___c__DisplayClass345_0_o *)sub_B52A54(QuestBoardListViewItemDraw___c__DisplayClass345_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass345_0___ctor(v13, 0LL);
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
  isTerminalExposable = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventCampaignReleaseMaster___);
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
        v34 = LocalizationManager__Get((System_String_o *)StringLiteral_13502/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, 0LL);
        v35 = System_String__Format_44563852(
                v34,
                (Il2CppObject *)eventCampaignEnt->fields.entryCondMessage,
                (Il2CppObject *)StringLiteral_23732/*"{0}"*/,
                0LL);
        EndTime = EventEntity__GetEndTime(eventEnt, 0, 0LL);
        v17 = (QuestBoardInformaionText_o *)sub_B52A54(QuestBoardInformaionText_TypeInfo);
        v73.fields.r = 0.0;
        v73.fields.g = 0.0;
        v73.fields.b = 0.0;
        v73.fields.a = 0.0;
        v71.fields.x = 0.0;
        v71.fields.y = 0.0;
        v71.fields.z = 0.0;
        QuestBoardInformaionText___ctor(v17, v35, EndTime, 0, 0, v73, -1, 0, v71, 0, v67, 0LL, v68);
        return v17;
      }
      return 0LL;
    }
    if ( target == 28 )
    {
      ContinueItemInfoList = UserOwnItemDetail__GetContinueItemInfoList(0LL);
      v24 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_UserOwnItemInfo__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v24,
        (Il2CppObject *)v13,
        Method_QuestBoardListViewItemDraw___c__DisplayClass345_0__CreateQuestBoardInformationText_b__0__,
        (const MethodInfo_28D2DBC *)Method_System_Predicate_UserOwnItemInfo___ctor__);
      if ( ContinueItemInfoList )
      {
        v25 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)ContinueItemInfoList,
                (System_Predicate_T__o *)v24,
                (const MethodInfo_2FF1EC4 *)Method_System_Collections_Generic_List_UserOwnItemInfo__Find__);
        if ( v25 )
        {
          v26 = (UserOwnItemInfo_o *)v25;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v27 = LocalizationManager__Get((System_String_o *)StringLiteral_13503/*"TIME_REST_QUEST_BOARD_CAMPAIGN_WITH_ITEM"*/, 0LL);
          Num_k__BackingField = v26->fields._Num_k__BackingField;
          v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Num_k__BackingField);
          v29 = System_String__Format_44563852(v27, v28, (Il2CppObject *)StringLiteral_23732/*"{0}"*/, 0LL);
          EventName = EventEntity__getEventName(eventEnt, 0LL);
          ImageId = UserOwnItemInfo__get_ImageId(v26, 0LL);
          dispTextExtend = (TerminalBoardOptionTextData_o *)sub_B52A54(TerminalBoardOptionTextData_TypeInfo);
          TerminalBoardOptionTextData___ctor(dispTextExtend, EventName, v29, ImageId, 0LL);
          v33 = EventEntity__GetEndTime(eventEnt, 0, 0LL);
          v17 = (QuestBoardInformaionText_o *)sub_B52A54(QuestBoardInformaionText_TypeInfo);
          v72.fields.r = 0.0;
          v72.fields.g = 0.0;
          v72.fields.b = 0.0;
          v72.fields.a = 0.0;
          v70.fields.x = 0.0;
          v70.fields.y = 0.0;
          v70.fields.z = 0.0;
          QuestBoardInformaionText___ctor(v17, v29, v33, 1, 0, v72, -1, 0, v70, 0, v67, dispTextExtend, v68);
          return v17;
        }
        return 0LL;
      }
LABEL_61:
      sub_B52A5C(isTerminalExposable, v15);
    }
    if ( target == 25 && !isQuestNoneCleared )
      return 0LL;
    if ( target > 24 )
    {
      if ( target == 26 )
      {
        mInfoTextList = this->fields.mInfoTextList;
        detail = eventEnt->fields.detail;
        v55 = EventEntity__GetEndTime(eventEnt, 0, 0LL);
        checkTime = v13->fields.checkTime;
        v57 = v55;
        v58 = (QuestBoardInformaionText_o *)sub_B52A54(QuestBoardInformaionText_TypeInfo);
        QuestBoardInformaionText___ctor_27828296(v58, eventEnt, detail, v57, checkTime, eventCampaignEnt, v59);
        if ( !mInfoTextList )
          goto LABEL_61;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mInfoTextList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v58,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
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
      isTerminalExposable = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
    v40 = LocalizationManager__Get((System_String_o *)StringLiteral_13502/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, 0LL);
    v41 = (Il2CppObject *)EventEntity__getEventName(eventEnt, 0LL);
    v42 = System_String__Format_44563852(v40, v41, (Il2CppObject *)StringLiteral_23732/*"{0}"*/, 0LL);
    v43 = EventEntity__GetEndTime(eventEnt, 0, 0LL);
    v44 = (QuestBoardInformaionText_o *)sub_B52A54(QuestBoardInformaionText_TypeInfo);
    v17 = v44;
    v45 = 0;
    v46 = 0;
    v47 = 0;
    v48 = 0;
    v49 = 0;
    v50 = 0;
    v51 = 0;
    QuestBoardInformaionText___ctor(
      v44,
      v42,
      v43,
      1,
      0,
      *(UnityEngine_Color_o *)&v45,
      -1,
      0,
      *(UnityEngine_Vector3_o *)&v49,
      0,
      v67,
      0LL,
      v68);
    return v17;
  }
  v60 = (QuestBoardListViewItemDraw_o *)sub_B52D50(manager);
  QuestBoardListViewItemDraw__CalcQuestCost(v60, v61, v62, v63, v64, v65, v66);
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
    sub_B52A5C(this, boardMessageData);
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
  if ( (byte_42B1900 & 1) == 0 )
  {
    sub_B52984(&QuestBoardListViewItemDraw_TypeInfo);
    byte_42B1900 = 1;
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
  return System_String__Concat_44568316(QUEST_BOARD_AP_SPNAME_PREFIX, v4, 0LL);
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

  if ( (byte_42B18EB & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_EventMaster___);
    sub_B52984(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
    sub_B52984(&System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&QuestBoardInformaionText_TypeInfo);
    sub_B52984(&QuestBoardListViewManager_TypeInfo);
    sub_B52984(&StringLiteral_23732/*"{0}"*/);
    sub_B52984(&StringLiteral_81/*" "*/);
    sub_B52984(&StringLiteral_13507/*"TIME_REST_STRING"*/);
    byte_42B18EB = 1;
  }
  entity = 0LL;
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
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
    (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
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
    (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
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
    CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !CampaignTextListByEventQuestMaster )
      goto LABEL_27;
    if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            (DataMasterBase_WarMaster__WarEntity__int__o *)CampaignTextListByEventQuestMaster,
            &entity,
            v24->fields.eventId,
            (const MethodInfo_23E2334 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
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
        v27 = LocalizationManager__Get((System_String_o *)StringLiteral_13507/*"TIME_REST_STRING"*/, 0LL);
        v28 = System_String__Concat_44571728(
                EventName,
                (System_String_o *)StringLiteral_81/*" "*/,
                v27,
                (System_String_o *)StringLiteral_23732/*"{0}"*/,
                0LL);
        v29 = (QuestBoardInformaionText_o *)sub_B52A54(QuestBoardInformaionText_TypeInfo);
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
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
      }
      return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v13;
    }
LABEL_27:
    sub_B52A5C(CampaignTextListByEventQuestMaster, v17);
  }
  v32 = (QuestBoardListViewItemDraw_o *)sub_B52D50(manager);
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
  if ( (byte_42B18EC & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_EventQuestMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B52984(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_B52984(&Method_System_Func_EventEntity__bool___ctor__);
    sub_B52984(&System_Func_EventEntity__bool__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
    sub_B52984(&System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_B52984(&QuestBoardListViewManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_QuestBoardListViewItemDraw___c__DisplayClass343_0__GetCampaignTextListByEventQuestMaster_b__0__);
    sub_B52984(&QuestBoardListViewItemDraw___c__DisplayClass343_0_TypeInfo);
    sub_B52984(&Method_QuestBoardListViewItemDraw___c__DisplayClass343_1__GetCampaignTextListByEventQuestMaster_b__1__);
    sub_B52984(&QuestBoardListViewItemDraw___c__DisplayClass343_1_TypeInfo);
    byte_42B18EC = 1;
  }
  memset(&v68, 0, sizeof(v68));
  v67 = 0;
  v60 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v60,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
  v9 = &Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  v12 = (DataManager_o *)Instance;
  MasterData_WarQuestSelectionMaster = (EventQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventQuestMaster___);
  v14 = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   v12,
                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               v12,
               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_41;
  Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               (int32_t)EnabledEventCampaignForQuest,
               (const MethodInfo_23E22D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_41;
    v18 = (EventCampaignReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
    v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v19,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v20,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
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
          v55 = sub_B52A88(Instance);
          sub_B52A28(v55, 0LL);
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
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
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
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
          }
        }
        monitor = (int)EnabledEventCampaignForQuest[1].monitor;
        if ( (int)++v22 >= monitor )
          goto LABEL_24;
      }
LABEL_41:
      sub_B52A5C(Instance, v11);
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
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v14 = (EventCampaignMaster_o *)&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__;
    v9 = &Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___;
    v68 = v65;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v68,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
    {
      v25 = sub_B52A54(QuestBoardListViewItemDraw___c__DisplayClass343_0_TypeInfo);
      QuestBoardListViewItemDraw___c__DisplayClass343_0___ctor(
        (QuestBoardListViewItemDraw___c__DisplayClass343_0_o *)v25,
        0LL);
      if ( !v25 )
        sub_B52A5C(v26, v27);
      current = (System_Int32_array **)v68.fields.current;
      *(_QWORD *)(v25 + 16) = v68.fields.current;
      sub_B52920((BattleServantConfConponent_o *)(v25 + 16), current, v28, v29, v30, v31, v32, v33);
      v35 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_EventEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v35,
        (Il2CppObject *)v25,
        Method_QuestBoardListViewItemDraw___c__DisplayClass343_0__GetCampaignTextListByEventQuestMaster_b__0__,
        (const MethodInfo_2BC90BC *)Method_System_Func_EventEntity__bool___ctor__);
      v36 = (EventEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                               EnabledEventCampaignForQuest,
                               (System_Func_TSource__bool__o *)v35,
                               (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___);
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
          sub_B52A5C(0LL, QuestBoardInformationText);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v60,
          QuestBoardInformationText,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
      }
    }
    v66[0] = 309;
    v67 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v68,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    v39 = (System_Collections_Generic_List_EventCampaignEntity__o *)v20;
    v67 = 0;
  }
  else
  {
    v56 = (void *)sub_B52D50(Instance);
    v39 = campaignList;
    if ( v57 != 1 )
      _Unwind_Resume(v56);
    v58 = *(_QWORD *)__cxa_begin_catch(v56);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v68,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    if ( v58 )
      sub_B52A28(v58, 0LL);
  }
  Instance = EventCampaignMaster__CheckCampaignGrouping(v39, 0LL);
  if ( !Instance )
    goto LABEL_41;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v65,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v68 = v65;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v68,
            (const MethodInfo_201195C *)v14->klass) )
  {
    v40 = sub_B52A54(QuestBoardListViewItemDraw___c__DisplayClass343_1_TypeInfo);
    QuestBoardListViewItemDraw___c__DisplayClass343_1___ctor(
      (QuestBoardListViewItemDraw___c__DisplayClass343_1_o *)v40,
      0LL);
    if ( !v40 )
      sub_B52A5C(v41, v42);
    v49 = (System_Int32_array **)v68.fields.current;
    *(_QWORD *)(v40 + 16) = v68.fields.current;
    sub_B52920((BattleServantConfConponent_o *)(v40 + 16), v49, v43, v44, v45, v46, v47, v48);
    v50 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_EventEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v50,
      (Il2CppObject *)v40,
      Method_QuestBoardListViewItemDraw___c__DisplayClass343_1__GetCampaignTextListByEventQuestMaster_b__1__,
      (const MethodInfo_2BC90BC *)Method_System_Func_EventEntity__bool___ctor__);
    v51 = (QuestBoardListViewItemDraw_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                            EnabledEventCampaignForQuest,
                                            (System_Func_TSource__bool__o *)v50,
                                            (const MethodInfo_1B63978 *)*v9);
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
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
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

  if ( (byte_42B18ED & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_WarGroupMaster___);
    sub_B52984(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
    sub_B52984(&System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B18ED = 1;
  }
  entity = 0LL;
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  v12 = Instance;
  MasterData_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          Instance,
                                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMaster___);
  v14 = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   v12,
                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                v12,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                questId,
                                (const MethodInfo_23E22D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_29;
  v15 = (QuestEntity_o *)Instance;
  Instance = (DataManager_o *)EventMaster__GetEnableEntityList(MasterData_WarQuestSelectionMaster, 7, 1, 0LL);
  if ( !v15 )
    goto LABEL_29;
  v16 = Instance;
  spotId = v15->fields.spotId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                &entity,
                                spotId,
                                (const MethodInfo_23E2334 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
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
            v29 = sub_B52A88(Instance);
            sub_B52A28(v29, 0LL);
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
              Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                break;
              Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            Instance,
                                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_WarGroupMaster___);
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
                    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
                }
              }
            }
          }
          datalist = (int)v16->fields.datalist;
          if ( (int)++v20 >= datalist )
            return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v9;
        }
LABEL_29:
        sub_B52A5C(Instance, v11);
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

  if ( (byte_42B18D3 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (QuestBoardListViewItemDraw_o *)sub_B52984(&StringLiteral_23732/*"{0}"*/);
    byte_42B18D3 = 1;
  }
  if ( !questEnt )
    goto LABEL_13;
  this = (QuestBoardListViewItemDraw_o *)QuestEntity__getQuestName(questEnt, 0LL);
  v6 = (System_String_o *)this;
  if ( (unsigned int)questType <= 5 && ((1 << questType) & 0x2C) != 0 )
  {
    if ( !this )
      goto LABEL_13;
    if ( System_String__Contains((System_String_o *)this, (System_String_o *)StringLiteral_23732/*"{0}"*/, 0LL) )
    {
      this = (QuestBoardListViewItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)this,
                                                                                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
        this = (QuestBoardListViewItemDraw_o *)QuestEntity__getServantId(questEnt, 0LL);
        if ( MasterData_WarQuestSelectionMaster )
        {
          this = (QuestBoardListViewItemDraw_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                   MasterData_WarQuestSelectionMaster,
                                                   (int32_t)this,
                                                   (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( this )
          {
            BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)this, 0, -1, 0LL);
            return System_String__Format(v6, BattleName, 0LL);
          }
        }
      }
LABEL_13:
      sub_B52A5C(this, questEnt);
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
  QuestBoardListViewItemDraw_c *v14; // x8
  System_String_o *EVENT_WAR_SUBFOLDER_SPNAME_PREFIX; // x20
  Il2CppObject *v16; // x0
  QuestBoardListViewItemDraw_c *v18; // x0
  System_String_o *EVENT_WAR_SPNAME_PREFIX; // x19
  System_String_o *v20; // x0
  int32_t v21; // [xsp+8h] [xbp-28h] BYREF
  int32_t overwriteId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42B18DC & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_EventAddMaster___);
    sub_B52984(&Method_DataManager_GetMaster_WarMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&QuestBoardListViewItemDraw_TypeInfo);
    byte_42B18DC = 1;
  }
  overwriteId = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventAddMaster___);
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
  Master_WarQuestSelectionMaster = (EventAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_37;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
             warId,
             (const MethodInfo_23E22D8 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( Entity
    && Entity->fields.parentWarId
    && Entity->fields.eventId == eventEnt->fields.id
    && WarEntity__HasFlag(Entity, 0x80000, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_WarMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      Master_WarQuestSelectionMaster = (EventAddMaster_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                             (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                             warId,
                                                             (const MethodInfo_23E22D8 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
      if ( Master_WarQuestSelectionMaster )
      {
        overwriteId = WarEntity__GetPrioredBannerId((WarEntity_o *)Master_WarQuestSelectionMaster, 0LL);
        v14 = QuestBoardListViewItemDraw_TypeInfo;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v14 = QuestBoardListViewItemDraw_TypeInfo;
        }
        EVENT_WAR_SUBFOLDER_SPNAME_PREFIX = v14->static_fields->EVENT_WAR_SUBFOLDER_SPNAME_PREFIX;
        v21 = overwriteId;
        v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
        return System_String__Format(EVENT_WAR_SUBFOLDER_SPNAME_PREFIX, v16, 0LL);
      }
    }
LABEL_37:
    sub_B52A5C(Master_WarQuestSelectionMaster, v9);
  }
  v18 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v18 = QuestBoardListViewItemDraw_TypeInfo;
  }
  EVENT_WAR_SPNAME_PREFIX = v18->static_fields->EVENT_WAR_SPNAME_PREFIX;
  v20 = System_Int32__ToString((int32_t)&overwriteId, 0LL);
  return System_String__Concat_44568316(EVENT_WAR_SPNAME_PREFIX, v20, 0LL);
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

  if ( (byte_42B18D2 & 1) == 0 )
  {
    sub_B52984(&QuestBoardListViewItemDraw_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B18D2 = 1;
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

  if ( (byte_42B18E9 & 1) == 0 )
  {
    sub_B52984(&QuestBoardListViewItemDraw_TypeInfo);
    byte_42B18E9 = 1;
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

  if ( (byte_42B18E8 & 1) == 0 )
  {
    sub_B52984(&QuestBoardListViewItemDraw_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B18E8 = 1;
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

  if ( (byte_42B18D5 & 1) == 0 )
  {
    sub_B52984(&QuestBoardListViewItemDraw_TypeInfo);
    sub_B52984(&StringLiteral_19740/*"img_questtxt_free"*/);
    sub_B52984(&StringLiteral_19739/*"img_questtxt_event"*/);
    this = (QuestBoardListViewItemDraw_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42B18D5 = 1;
  }
  if ( !questEnt )
    sub_B52A5C(this, questEnt);
  iconId = questEnt->fields.iconId;
  v6 = (_DWORD)questEnt + 68;
  if ( iconId < 1 )
  {
    if ( questType == 5 )
    {
      v12 = &StringLiteral_19739/*"img_questtxt_event"*/;
    }
    else if ( questType == 2 )
    {
      v12 = &StringLiteral_19740/*"img_questtxt_free"*/;
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
    return System_String__Concat_44568316(QUEST_BOARD_ICON_SPNAME_PREFIX, v10, 0LL);
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

  if ( (byte_42B18D6 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)sub_B52984(&QuestBoardListViewItemDraw_TypeInfo);
    byte_42B18D6 = 1;
  }
  if ( !questEnt )
    sub_B52A5C(this, questEnt);
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
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
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
    return System_String__Concat_44568316(QUEST_BOARD_ICON_SPNAME_PREFIX, v8, 0LL);
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
    return QuestEntity__getRecommendLv_25291404(questEnt, questPhase, 0LL);
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
    sub_B52A5C(this, status);
  if ( status - 1 >= mStatusSp->max_length )
  {
    v5 = sub_B52A88(this);
    sub_B52A28(v5, 0LL);
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
  QuestBoardListViewItemDraw___c__DisplayClass306_0_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v11; // x20

  if ( (byte_42B18CC & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_MapControl_QuestInfo___);
    sub_B52984(&Method_System_Func_MapControl_QuestInfo__bool___ctor__);
    sub_B52984(&System_Func_MapControl_QuestInfo__bool__TypeInfo);
    sub_B52984(&Method_QuestBoardListViewItemDraw___c__DisplayClass306_0__HasNewQuestInWar_b__0__);
    sub_B52984(&QuestBoardListViewItemDraw___c__DisplayClass306_0_TypeInfo);
    byte_42B18CC = 1;
  }
  v8 = (QuestBoardListViewItemDraw___c__DisplayClass306_0_o *)sub_B52A54(QuestBoardListViewItemDraw___c__DisplayClass306_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass306_0___ctor(v8, 0LL);
  if ( !v8 )
    sub_B52A5C(v9, v10);
  v8->fields.warId = warId;
  v8->fields.isMainInterlude = isMainInterlude;
  v11 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_MapControl_QuestInfo__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v11,
    (Il2CppObject *)v8,
    Method_QuestBoardListViewItemDraw___c__DisplayClass306_0__HasNewQuestInWar_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_MapControl_QuestInfo__bool___ctor__);
  return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
           (System_Collections_Generic_List_T__o *)questList,
           (System_Func_T__bool__o *)v11,
           (const MethodInfo_1A41C6C *)Method_BasicHelper_Any_MapControl_QuestInfo___);
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

  if ( (byte_42B18E7 & 1) == 0 )
  {
    sub_B52984(&QuestBoardListViewItemDraw_TypeInfo);
    byte_42B18E7 = 1;
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
    sub_B52A5C(mPhaseObj, isDoubleItemConsume);
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
    sub_B52A5C(this, questBoardItem);
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
    sub_B52A5C(mNextSp, method);
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

  if ( (byte_42B18DB & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    this = (QuestBoardListViewItemDraw_o *)sub_B52984(&DataManager_TypeInfo);
    byte_42B18DB = 1;
  }
  if ( !questInfo )
    sub_B52A5C(this, questInfo);
  questPhase = questInfo->fields.questPhase;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(questInfo, 0LL);
  v6 = UnityEngine_Mathf__Min_41525188(questPhase + 1, PhaseMax, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestBehaviorMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
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

  if ( (byte_42B18FD & 1) == 0 )
  {
    sub_B52984(&QuestBoardListViewItemDraw_TypeInfo);
    byte_42B18FD = 1;
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

  if ( (byte_42B18FE & 1) == 0 )
  {
    sub_B52984(&QuestBoardListViewItemDraw_TypeInfo);
    byte_42B18FE = 1;
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

  if ( (byte_42B18F3 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__);
    byte_42B18F3 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  return !mInfoTextList || mInfoTextList->fields._size == 0;
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

  if ( (byte_42B18D1 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_WarMaster___);
    sub_B52984(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_B52984(&Method_System_Linq_Enumerable_Contains_int___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B18D1 = 1;
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
         (const MethodInfo_1B5BFB4 *)Method_System_Linq_Enumerable_Contains_int___) )
  {
    return 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      warId,
                                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__)) == 0LL )
  {
    sub_B52A5C(Instance, v8);
  }
  return LODWORD(Instance->fields.masterLoadThreads) == 0;
}


bool __fastcall QuestBoardListViewItemDraw__IsMultiInfoText(
        QuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x8

  if ( (byte_42B18F2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__);
    byte_42B18F2 = 1;
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
    sub_B52A5C(0LL, method);
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

  if ( (byte_42B18CB & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_MapControl_QuestInfo___);
    sub_B52984(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B52984(&Method_System_Func_MapControl_QuestInfo__bool___ctor__);
    sub_B52984(&System_Func_MapControl_QuestInfo__bool__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_QuestBoardListViewItemDraw___c__DisplayClass305_0__IsPurchasedByRarePrism_b__0__);
    sub_B52984(&QuestBoardListViewItemDraw___c__DisplayClass305_0_TypeInfo);
    byte_42B18CB = 1;
  }
  v6 = sub_B52A54(QuestBoardListViewItemDraw___c__DisplayClass305_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass305_0___ctor(
    (QuestBoardListViewItemDraw___c__DisplayClass305_0_o *)v6,
    0LL);
  if ( !v6 )
    goto LABEL_9;
  *(_QWORD *)(v6 + 16) = warEnt;
  sub_B52920((BattleServantConfConponent_o *)(v6 + 16), (System_Int32_array **)warEnt, v9, v10, v11, v12, v13, v14);
  v15 = *(WarEntity_o **)(v6 + 16);
  if ( v15 && WarEntity__IsShop(v15, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      *(_QWORD *)(v6 + 24) = MasterData_WarQuestSelectionMaster;
      sub_B52920(
        (BattleServantConfConponent_o *)(v6 + 24),
        MasterData_WarQuestSelectionMaster,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
      v23 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_MapControl_QuestInfo__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v23,
        (Il2CppObject *)v6,
        Method_QuestBoardListViewItemDraw___c__DisplayClass305_0__IsPurchasedByRarePrism_b__0__,
        (const MethodInfo_2BC90BC *)Method_System_Func_MapControl_QuestInfo__bool___ctor__);
      return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
               (System_Collections_Generic_List_T__o *)questList,
               (System_Func_T__bool__o *)v23,
               (const MethodInfo_1A41C6C *)Method_BasicHelper_Any_MapControl_QuestInfo___);
    }
LABEL_9:
    sub_B52A5C(Instance, v8);
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
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__347_0; // x22
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

  if ( (byte_42B18EF & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_RestrictionEntity___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestRestrictionMaster___);
    sub_B52984(&Method_System_Func_RestrictionEntity__bool___ctor__);
    sub_B52984(&System_Func_RestrictionEntity__bool__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_QuestBoardListViewItemDraw___c__IsValidSupportSelection_b__347_0__);
    sub_B52984(&QuestBoardListViewItemDraw___c_TypeInfo);
    byte_42B18EF = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestRestrictionMaster___);
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
      _9__347_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__347_0;
      if ( !_9__347_0 )
      {
        if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v9);
          static_fields = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
        }
        v12 = (Il2CppObject *)static_fields->__9;
        _9__347_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_RestrictionEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__347_0,
          v12,
          Method_QuestBoardListViewItemDraw___c__IsValidSupportSelection_b__347_0__,
          (const MethodInfo_2BC90BC *)Method_System_Func_RestrictionEntity__bool___ctor__);
        v13 = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
        v13->__9__347_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__347_0;
        sub_B52920(
          (BattleServantConfConponent_o *)&v13->__9__347_0,
          (System_Int32_array **)_9__347_0,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
      }
      LOBYTE(RestrictionList) = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
                                  (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)RestrictionList,
                                  (System_Func_T__bool__o *)_9__347_0,
                                  (const MethodInfo_1A41D18 *)Method_BasicHelper_Any_RestrictionEntity___);
    }
  }
  else
  {
    LOBYTE(RestrictionList) = 0;
  }
  v20 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v20 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v21 = **(_QWORD **)(v20 + 192);
  if ( (*(_BYTE *)(v21 + 306) & 1) == 0 )
    sub_AEB684(v21);
  Instance = **(DataManager_o ***)(v21 + 184);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___),
        !questEntity)
    || !Instance )
  {
LABEL_40:
    sub_B52A5C(Instance, v7);
  }
  if ( !QuestRestrictionInfoMaster__TryGetEntity(
          (QuestRestrictionInfoMaster_o *)Instance,
          &entity,
          questEntity->fields.id,
          phase,
          0LL) )
  {
    if ( !QuestEntity__HasFlag_25292224(questEntity, 0x80000LL, phase, 0LL)
      && !QuestEntity__HasFlag_25292224(questEntity, 0x100000LL, phase, 0LL)
      && !QuestEntity__HasFlag_25292224(questEntity, 0x10000000LL, phase, 0LL) )
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
  v23 = !QuestEntity__HasFlag_25292224(questEntity, 2LL, phase, 0LL);
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
  QuestBoardListViewItemDraw_c *v23; // x0
  int32_t iconId; // w9
  Il2CppObject *QUEST_BOARD_ICON_TEXTURE_PREFIX; // x21
  Il2CppObject *v26; // x0
  struct System_String_o *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **boardIconName; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_o *v41; // x19
  AssetLoader_LoadEndDataHandler_o *v42; // x21
  int32_t v43; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42B1901 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B52984(&QuestBoardListViewItemDraw_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_QuestBoardListViewItemDraw___c__DisplayClass380_0__LoadBoardIconTexture_b__0__);
    sub_B52984(&QuestBoardListViewItemDraw___c__DisplayClass380_0_TypeInfo);
    byte_42B1901 = 1;
  }
  v7 = sub_B52A54(QuestBoardListViewItemDraw___c__DisplayClass380_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass380_0___ctor(
    (QuestBoardListViewItemDraw___c__DisplayClass380_0_o *)v7,
    0LL);
  if ( !v7 )
    goto LABEL_16;
  *(_QWORD *)(v7 + 24) = this;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = callback;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)callback, v16, v17, v18, v19, v20, v21);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  QuestBoardListViewItemDraw__ReleaseBoardIconTexture(this, v22);
  if ( !questEntity )
    goto LABEL_16;
  this->fields.boardIconQuestId = questEntity->fields.id;
  v23 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v23 = QuestBoardListViewItemDraw_TypeInfo;
  }
  iconId = questEntity->fields.iconId;
  QUEST_BOARD_ICON_TEXTURE_PREFIX = (Il2CppObject *)v23->static_fields->QUEST_BOARD_ICON_TEXTURE_PREFIX;
  v43 = iconId;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43);
  v27 = System_String__Concat(QUEST_BOARD_ICON_TEXTURE_PREFIX, v26, 0LL);
  this->fields.boardIconName = v27;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.boardIconName,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  boardIconName = (System_Int32_array **)this->fields.boardIconName;
  *(_QWORD *)(v7 + 16) = boardIconName;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 16), boardIconName, v35, v36, v37, v38, v39, v40);
  v41 = System_String__Concat_44568316(
          QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH,
          this->fields.boardIconName,
          0LL);
  v42 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v42,
    (Il2CppObject *)v7,
    Method_QuestBoardListViewItemDraw___c__DisplayClass380_0__LoadBoardIconTexture_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v41, v42, 1, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 0, 0LL);
      return;
    }
LABEL_16:
    sub_B52A5C(Instance, v9);
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

  if ( (byte_42B18FB & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&TerminalBannerComponent_TypeInfo);
    byte_42B18FB = 1;
  }
  if ( this->fields._bannerState_k__BackingField != 2 )
    return;
  IsBanners = (WebViewManager_o *)QuestBoardListViewItemDraw__IsBanners(this, questBoardItem, method);
  if ( ((unsigned __int8)IsBanners & 1) == 0 )
    return;
  if ( this->fields.mIsPressed )
    goto LABEL_12;
  IsBanners = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !IsBanners )
    goto LABEL_41;
  IsBanners = (WebViewManager_o *)WebViewManager__get_IsBusy(IsBanners, 0LL);
  if ( ((unsigned __int8)IsBanners & 1) != 0 )
    goto LABEL_12;
  IsBanners = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !IsBanners )
    goto LABEL_41;
  IsBanners = (WebViewManager_o *)CommonUI__IsActive_UserPresentBoxWindow((CommonUI_o *)IsBanners, 0LL);
  if ( ((unsigned __int8)IsBanners & 1) != 0 )
    goto LABEL_12;
  IsBanners = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
            v22 = sub_B52A88(IsBanners);
            sub_B52A28(v22, 0LL);
          }
          IsBanners = (WebViewManager_o *)mTerminalBanners->m_Items[v19];
          if ( !IsBanners )
            break;
          TerminalBannerComponent__StartAutoMoveL((TerminalBannerComponent_o *)IsBanners, 0LL);
          if ( (int)++v19 >= this->fields.mBannerCount )
            goto LABEL_37;
        }
LABEL_41:
        sub_B52A5C(IsBanners, v6);
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

  if ( (byte_42B18C1 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B18C1 = 1;
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
      sub_B52A5C(0LL, v4);
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
  UnityEngine_Vector2_o ScreenPosition_27819320; // kr00_8
  float v10; // s0
  float v11; // s1
  const MethodInfo *v12; // x3

  v7 = this;
  if ( (byte_42B18F7 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_B52984(&CTouch_TypeInfo);
    byte_42B18F7 = 1;
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
          ScreenPosition_27819320 = CTouch__getScreenPosition_27819320(mUICamera, 0LL);
          v10 = vabds_f32(v7->fields.mPressPos.fields.x, ScreenPosition_27819320.fields.x);
          v11 = vabds_f32(v7->fields.mPressPos.fields.y, ScreenPosition_27819320.fields.y);
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
        sub_B52A5C(this, questBoardItem);
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
          v9 = sub_B52A88(IsBanners);
          sub_B52A28(v9, 0LL);
        }
        IsBanners = mTerminalBanners->m_Items[v7];
        if ( !IsBanners )
LABEL_10:
          sub_B52A5C(IsBanners, v5);
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
  if ( (byte_42B18F6 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_B52984(&CTouch_TypeInfo);
    byte_42B18F6 = 1;
  }
  if ( questBoardItem && dispMode && questBoardItem->fields._quest_info_k__BackingField )
  {
    v8->fields.mIsPressed = 1;
    if ( !questBoardManager || (this = (QuestBoardListViewItemDraw_o *)questBoardManager->fields.scrollView) == 0LL )
      sub_B52A5C(this, questBoardItem);
    if ( !UIScrollView__IsLimitOverPosition((UIScrollView_o *)this, 0LL) )
    {
      mUICamera = questBoardManager->fields.mUICamera;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v8->fields.mPressPos = CTouch__getScreenPosition_27819320(mUICamera, 0LL);
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
          v9 = sub_B52A88(IsBanners);
          sub_B52A28(v9, 0LL);
        }
        IsBanners = mTerminalBanners->m_Items[v6];
        if ( !IsBanners )
LABEL_10:
          sub_B52A5C(IsBanners, v5);
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
      sub_B52A5C(scrollView, v8);
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

  if ( (byte_42B1902 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&QuestBoardListViewItemDraw_TypeInfo);
    byte_42B1902 = 1;
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
    v4 = System_String__Concat_44568316(
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
    sub_B52920((BattleServantConfConponent_o *)&this->fields.boardIconAssetData, 0LL, v5, v6, v7, v8, v9, v10);
    this->fields.boardIconName = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.boardIconName, 0LL, v11, v12, v13, v14, v15, v16);
  }
}


void __fastcall QuestBoardListViewItemDraw__ResetBannerAutoMoveTime(
        QuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  TerminalBannerComponent_c *v3; // x0

  if ( (byte_42B18F8 & 1) == 0 )
  {
    sub_B52984(&TerminalBannerComponent_TypeInfo);
    byte_42B18F8 = 1;
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

  if ( (byte_42B18C3 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
    sub_B52984(&System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo);
    byte_42B18C3 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  if ( mInfoTextList )
  {
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)mInfoTextList,
      (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Clear__);
  }
  else
  {
    p_mInfoTextList = (BattleServantConfConponent_o *)&this->fields.mInfoTextList;
    v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v5,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
    p_mInfoTextList->klass = (BattleServantConfConponent_c *)v5;
    sub_B52920(p_mInfoTextList, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
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

  if ( (byte_42B18F0 & 1) == 0 )
  {
    sub_B52984(&QuestBoardListViewItemDraw_TypeInfo);
    byte_42B18F0 = 1;
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
    sub_B52A5C(mCostObj, questBoardItem);
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
  char v11; // w26
  int32_t name_high; // w21
  char v13; // w28
  Il2CppObject *PrioredName; // x0
  bool v15; // w25
  int64_t OpenedAt; // x27
  System_Object_array *v17; // x27
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x28
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x28
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x28
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x28
  int32_t WarID_ByQuestID; // w27
  MapControl_WarInfo_o *WarInfo_k__BackingField; // x0
  WarEntity_o *Mine; // x0
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  QuestReleaseOverwriteEntity_o *v50; // x22
  _BOOL4 v51; // w26
  UILabel_o *mTitleNameLb; // x23
  int32_t leftIndent; // w23
  int32_t *p_ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT; // x8
  UILabel_o *mCondChangeMessage; // x19
  int32_t v56; // w25
  float v57; // s8
  UILabel_o **p_mAdvanceNoticeLb; // x28
  float v59; // s1
  float v60; // s0
  int v61; // s2
  float v62; // s8
  float v63; // s0
  float v64; // s1
  float v65; // s0
  int v66; // s2
  float v67; // s1
  int v68; // s2
  UIWidget_o *mOverwriteAdvanceNoticeLb; // x24
  const MethodInfo *v70; // x4
  const MethodInfo *v71; // x4
  System_String_o *overlayClosedMessage; // x20
  UILabel_o *v73; // x22
  float v74; // s8
  UnityEngine_Object_o *mOverwriteAdvanceNoticeArrowObj; // x20
  __int64 v76; // x0
  __int64 v77; // x0
  char v78; // [xsp+Ch] [xbp-94h]
  int32_t Minute; // [xsp+14h] [xbp-8Ch] BYREF
  int32_t Hour; // [xsp+18h] [xbp-88h] BYREF
  int32_t Day; // [xsp+1Ch] [xbp-84h] BYREF
  int64_t questReleaseValue; // [xsp+20h] [xbp-80h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-78h] BYREF
  WarEntity_o *v84; // [xsp+30h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF
  System_DateTime_o v86; // 0:x0.8
  System_DateTime_o v87; // 0:x0.8
  System_DateTime_o v88; // 0:x0.8
  System_DateTime_o v89; // 0:x0.8
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B18D8 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ClosedMessageMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
    sub_B52984(&Method_DataManager_GetMaster_WarMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
    sub_B52984(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&long_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&object___TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&QuestBoardListViewItemDraw_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_B52984(&SingletonTemplate_QuestTree__TypeInfo);
    sub_B52984(&StringLiteral_14822/*"UNKNOWN_QUEST_NAME"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B18D8 = 1;
  }
  v84 = 0LL;
  entity = 0LL;
  dateData = 0LL;
  if ( questInfo && questInfo->fields.questReleaseClosedID > 0 )
  {
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_137;
    Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ClosedMessageMaster___);
    if ( !Instance )
      goto LABEL_137;
    age = (System_String_o *)StringLiteral_1/*""*/;
    Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                 (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                 &entity,
                 questInfo->fields.questReleaseClosedID,
                 (const MethodInfo_23E2334 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
    if ( (Instance & 1) != 0 )
    {
      Instance = (__int64)entity;
      if ( !entity )
        goto LABEL_137;
      age = entity->fields.age;
      Instance = ClosedMessageEntity__IsChangeDispClosedMessage((ClosedMessageEntity_o *)entity, 0LL);
      if ( !entity )
        goto LABEL_137;
      v11 = Instance;
      Instance = ClosedMessageEntity__IsChangeDispPositionLeft((ClosedMessageEntity_o *)entity, 0LL);
      if ( !entity )
        goto LABEL_137;
      name_high = HIDWORD(entity->fields.name);
      v13 = Instance;
    }
    else
    {
      name_high = 0;
      v13 = 0;
      v11 = 0;
    }
    switch ( questInfo->fields.questReleaseType )
    {
      case 1:
        if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
        }
        Instance = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
        Instance = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_WarMaster___);
        if ( !Instance )
          goto LABEL_137;
        if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                &v84,
                WarID_ByQuestID,
                (const MethodInfo_23E2334 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
          goto LABEL_52;
        Instance = (__int64)v84;
        if ( !v84 )
          goto LABEL_137;
        PrioredName = (Il2CppObject *)WarEntity__GetPrioredName(v84, 0LL);
LABEL_20:
        age = System_String__Format(age, PrioredName, 0LL);
LABEL_21:
        if ( (v11 & 1) != 0 )
          goto LABEL_22;
        goto LABEL_53;
      case 6:
      case 7:
      case 9:
        questReleaseValue = questInfo->fields.questReleaseValue;
        PrioredName = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &questReleaseValue);
        goto LABEL_20;
      case 0xC:
        if ( !questEnt )
          goto LABEL_137;
        v78 = v13;
        OpenedAt = QuestEntity__getOpenedAt(questEnt, 0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        dateData = NetworkManager__getServerDateTime_25742200(OpenedAt, 0LL).fields.dateData;
        v17 = (System_Object_array *)sub_B5299C(object___TypeInfo, 4LL);
        v86.fields.dateData = (uint64_t)&dateData;
        LODWORD(questReleaseValue) = System_DateTime__get_Month(v86, 0LL);
        Instance = j_il2cpp_value_box_0(int_TypeInfo, &questReleaseValue);
        if ( !v17 )
          goto LABEL_137;
        v24 = (System_Int32_array **)Instance;
        if ( Instance )
        {
          Instance = sub_B52A44(Instance, v17->obj.klass->_1.element_class);
          if ( !Instance )
            goto LABEL_139;
        }
        if ( !v17->max_length )
          goto LABEL_138;
        v17->m_Items[0] = (Il2CppObject *)v24;
        sub_B52920((BattleServantConfConponent_o *)v17->m_Items, v24, v18, v19, v20, v21, v22, v23);
        v87.fields.dateData = (uint64_t)&dateData;
        Day = System_DateTime__get_Day(v87, 0LL);
        Instance = j_il2cpp_value_box_0(int_TypeInfo, &Day);
        v31 = (System_Int32_array **)Instance;
        if ( Instance )
        {
          Instance = sub_B52A44(Instance, v17->obj.klass->_1.element_class);
          if ( !Instance )
            goto LABEL_139;
        }
        if ( v17->max_length <= 1 )
          goto LABEL_138;
        v17->m_Items[1] = (Il2CppObject *)v31;
        sub_B52920((BattleServantConfConponent_o *)&v17->m_Items[1], v31, v25, v26, v27, v28, v29, v30);
        v88.fields.dateData = (uint64_t)&dateData;
        Hour = System_DateTime__get_Hour(v88, 0LL);
        Instance = j_il2cpp_value_box_0(int_TypeInfo, &Hour);
        v38 = (System_Int32_array **)Instance;
        if ( Instance )
        {
          Instance = sub_B52A44(Instance, v17->obj.klass->_1.element_class);
          if ( !Instance )
            goto LABEL_139;
        }
        if ( v17->max_length <= 2 )
          goto LABEL_138;
        v17->m_Items[2] = (Il2CppObject *)v38;
        sub_B52920((BattleServantConfConponent_o *)&v17->m_Items[2], v38, v32, v33, v34, v35, v36, v37);
        v89.fields.dateData = (uint64_t)&dateData;
        Minute = System_DateTime__get_Minute(v89, 0LL);
        Instance = j_il2cpp_value_box_0(int_TypeInfo, &Minute);
        v45 = (System_Int32_array **)Instance;
        if ( Instance )
        {
          Instance = sub_B52A44(Instance, v17->obj.klass->_1.element_class);
          if ( !Instance )
          {
LABEL_139:
            v77 = sub_B52A7C(Instance);
            sub_B52A28(v77, 0LL);
          }
        }
        if ( v17->max_length <= 3 )
        {
LABEL_138:
          v76 = sub_B52A88(Instance);
          sub_B52A28(v76, 0LL);
        }
        v17->m_Items[3] = (Il2CppObject *)v45;
        sub_B52920((BattleServantConfConponent_o *)&v17->m_Items[3], v45, v39, v40, v41, v42, v43, v44);
        v13 = v78;
        age = System_String__Format_44647040(age, v17, 0LL);
LABEL_52:
        if ( (v11 & 1) != 0 )
        {
LABEL_22:
          v15 = 1;
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
            v15 = WarEntity__IsChangeDispClosedMessage(Mine, 0LL);
          else
LABEL_58:
            v15 = 0;
        }
        Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_137;
        Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
        if ( !questEnt || !Instance )
          goto LABEL_137;
        EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                                   (QuestReleaseOverwriteMaster_o *)Instance,
                                   questEnt->fields.id,
                                   checkTime,
                                   0LL);
        v50 = EntityByQuestIdAndTime;
        if ( EntityByQuestIdAndTime )
        {
          v51 = !System_String__IsNullOrEmpty(EntityByQuestIdAndTime->fields.overlayClosedMessage, 0LL);
          if ( v15 )
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
            Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_14822/*"UNKNOWN_QUEST_NAME"*/, 0LL);
            if ( !mTitleNameLb )
              goto LABEL_137;
            UILabel__set_text(mTitleNameLb, (System_String_o *)Instance, 0LL);
            Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
            if ( v51 )
            {
              if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
              }
              if ( !v50 )
                goto LABEL_137;
              Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
              leftIndent = v50->fields.leftIndent;
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
            v56 = *p_ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT;
            if ( (v13 & 1) != 0 )
            {
              if ( (*(_BYTE *)(Instance + 307) & 4) != 0 && !*(_DWORD *)(Instance + 224) )
              {
                j_il2cpp_runtime_class_init_0(Instance);
                Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
              }
              v57 = *(float *)(*(_QWORD *)(Instance + 184) + 52LL);
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
              v59 = 0.0;
              if ( v51 )
                v59 = 24.0;
              v61 = 0;
              v60 = v57 + (float)name_high;
              UnityEngine_Transform__set_localPosition(
                (UnityEngine_Transform_o *)Instance,
                *(UnityEngine_Vector3_o *)(&v59 - 1),
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
              v62 = *(float *)(*(_QWORD *)(Instance + 184) + 52LL);
              UIWidget__set_pivot((UIWidget_o *)this->fields.mOverwriteAdvanceNoticeLb, 3, 0LL);
              Instance = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
              if ( !Instance )
                goto LABEL_137;
              Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
              if ( !Instance )
                goto LABEL_137;
              v63 = v62 + (float)leftIndent;
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
              v64 = 0.0;
              if ( v51 )
                v64 = 24.0;
              v66 = 0;
              v65 = (float)name_high * 0.5;
              UnityEngine_Transform__set_localPosition(
                (UnityEngine_Transform_o *)Instance,
                *(UnityEngine_Vector3_o *)(&v64 - 1),
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
              v63 = (float)leftIndent * 0.5;
            }
            v67 = -26.0;
            v68 = 0;
            UnityEngine_Transform__set_localPosition(
              (UnityEngine_Transform_o *)Instance,
              *(UnityEngine_Vector3_o *)&v63,
              0LL);
            Instance = (__int64)*p_mAdvanceNoticeLb;
            if ( !*p_mAdvanceNoticeLb )
              goto LABEL_137;
            UIWidget__set_height((UIWidget_o *)Instance, v56, 0LL);
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
            QuestBoardListViewItemDraw___SetAdvanceNoticeText_g__CalculateLabel_320_0(
              *p_mAdvanceNoticeLb,
              age,
              v56,
              name_high,
              v70);
            if ( v51 )
            {
              Instance = (__int64)this->fields.mOverwriteAdvanceNoticeObj;
              if ( !Instance )
                goto LABEL_137;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
              if ( !v50 )
                goto LABEL_137;
              overlayClosedMessage = v50->fields.overlayClosedMessage;
              v73 = this->fields.mOverwriteAdvanceNoticeLb;
              if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
              }
              v74 = (float)name_high * 0.5;
              QuestBoardListViewItemDraw___SetAdvanceNoticeText_g__CalculateLabel_320_0(
                v73,
                overlayClosedMessage,
                v56,
                leftIndent,
                v71);
            }
            else
            {
              v74 = 0.0;
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
                  v90.fields.y = 0.0;
                  v90.fields.z = 0.0;
                  v90.fields.x = v74;
                  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v90, 0LL);
                  return;
                }
              }
LABEL_137:
              sub_B52A5C(Instance, questInfo);
            }
            return;
          }
        }
        else
        {
          v51 = 0;
          if ( v15 )
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

  if ( (byte_42B18DD & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B18DD = 1;
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
                                       (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v10 = this->fields.mNoticeNumberRoot;
    v11 = v9;
    GameObjectExtensions__SafeSetParent_32091088(v9, v10, 0LL);
    if ( v11 )
    {
      Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v11,
                                                         (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
      p_mNoticeNumber->klass = (BattleServantConfConponent_c *)Component_srcLineSprite;
      sub_B52920(p_mNoticeNumber, Component_srcLineSprite, v13, v14, v15, v16, v17, v18);
      goto LABEL_13;
    }
LABEL_15:
    sub_B52A5C(mNoticeNumberRoot, *(_QWORD *)&num);
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

  if ( (byte_42B18C5 & 1) == 0 )
  {
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject____68654656);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&QuestBoardListViewItemDraw_TypeInfo);
    byte_42B18C5 = 1;
  }
  if ( !warEntity )
    return;
  IsBlackMarkWithClear = (UnityEngine_GameObject_o *)WarEntity__IsBlackMarkWithClear(warEntity, 0LL);
  if ( ((unsigned __int8)IsBlackMarkWithClear & 1) != 0 )
  {
    lastQuestId = warEntity->fields.lastQuestId;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsBlackMarkWithClear = (UnityEngine_GameObject_o *)CondType__IsQuestClear_25987760(lastQuestId, -1, 0, 0LL);
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
                                     (const MethodInfo_1F712F4 *)Method_UnityEngine_Object_Instantiate_GameObject____68654656);
      *p_blackMarkEffect = (struct UnityEngine_GameObject_o *)v25;
      sub_B52920((BattleServantConfConponent_o *)&this->fields.blackMarkEffect, v25, v26, v27, v28, v29, v30, v31);
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
  if ( CondType__IsQuestClear_25987760(v33, -1, 0, 0LL) )
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
                                     (const MethodInfo_1F712F4 *)Method_UnityEngine_Object_Instantiate_GameObject____68654656);
      p_whiteMarkEffect->klass = (BattleServantConfConponent_c *)v51;
      sub_B52920(p_whiteMarkEffect, v51, v52, v53, v54, v55, v56, v57);
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
    sub_B52A5C(IsBlackMarkWithClear, v12);
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
  int v17; // w21
  UISprite_o *mLabelBoardSectionSp; // x20
  QuestBoardListViewItemDraw_c *v19; // x0
  System_String_o *CHAPTER_SP_UNIT_NAME; // x22
  Il2CppObject *v21; // x0
  System_String_o *v22; // x21
  int v23; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_42B18D4 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    sub_B52984(&Method_DataManager_GetMaster_WarMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)sub_B52984(&QuestBoardListViewItemDraw_TypeInfo);
    byte_42B18D4 = 1;
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
    this = (QuestBoardListViewItemDraw_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !this )
      goto LABEL_52;
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)this,
               questInfo->fields.warId,
               (const MethodInfo_23E22D8 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
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
                                                        (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
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
  v17 = QuestBoardSectionId;
  mLabelBoardSectionSp = v4->fields.mLabelBoardSectionSp;
  v19 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v19 = QuestBoardListViewItemDraw_TypeInfo;
  }
  CHAPTER_SP_UNIT_NAME = v19->static_fields->CHAPTER_SP_UNIT_NAME;
  v23 = v17;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
  v22 = System_String__Format(CHAPTER_SP_UNIT_NAME, v21, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  this = (QuestBoardListViewItemDraw_o *)AtlasManager__SetEventUI(mLabelBoardSectionSp, v22, 0LL);
  if ( !mLabelBoardSectionSp
    || (UnityEngine_Behaviour__set_enabled(
          (UnityEngine_Behaviour_o *)mLabelBoardSectionSp,
          (unsigned __int8)this & 1,
          0LL),
        (this = (QuestBoardListViewItemDraw_o *)v4->fields.mLabelBoardSectionSp) == 0LL) )
  {
LABEL_52:
    sub_B52A5C(this, questInfo);
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

  if ( (byte_42B18E0 & 1) == 0 )
  {
    sub_B52984(&QuestBoardListViewItemDraw_TypeInfo);
    byte_42B18E0 = 1;
  }
  StatusSp = QuestBoardListViewItemDraw__GetStatusSp(this, 2, method);
  if ( !StatusSp )
    sub_B52A5C(0LL, v6);
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
  if ( (byte_42B18CF & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_B52984(&Method_DataManager_GetMaster_ItemMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B52984(&NetworkManager_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)sub_B52984(&QuestBoardListViewItemDraw_TypeInfo);
    byte_42B18CF = 1;
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
                                           (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
    sub_B52A5C(this, questEnt);
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
      if ( !byte_42AC29F )
      {
        sub_B52984(&BalanceConfig_TypeInfo);
        byte_42AC29F = 1;
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
      Master_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserItemMaster___);
      v63 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ItemMaster___);
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
                                               (const MethodInfo_23E22D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
                                                 (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
                                                 (const MethodInfo_23E22D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
                                                 (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
                                                     (const MethodInfo_23E22D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
        v131 = sub_B52A88(this);
        sub_B52A28(v131, 0LL);
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
            v98 = *(_QWORD *)&this->fields.mTitleLevelSp[2].fields.updateAnchors;
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
            v60 = *(_QWORD *)&this->fields.mTitleLevelSp[1].fields.mFlip;
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
                                                                   (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
                                                                   (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
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
                                                                   (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
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
              v132 = sub_B52A88(mCostItemIcon1);
              sub_B52A28(v132, 0LL);
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
              v100 = *(_QWORD *)&mCostItemIcon1->fields.mTitleLevelSp[2].fields.updateAnchors;
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
                                                                 (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
                                                                 (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
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
                            UILabel__SetCondensedScale_41850568(
                              (UILabel_o *)mCostItemIcon1,
                              QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_WIDTH_FOR_THREE_ITEM,
                              0LL);
                            mCostItemIcon1 = *p_mCostLb2;
                            if ( *p_mCostLb2 )
                            {
                              UILabel__SetCondensedScale_41850568(
                                (UILabel_o *)mCostItemIcon1,
                                QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_WIDTH_FOR_THREE_ITEM,
                                0LL);
                              mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostLb3;
                              if ( mCostItemIcon1 )
                              {
                                UILabel__SetCondensedScale_41850568(
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
        sub_B52A5C(mCostItemIcon1, questEnt);
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
                                                 (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
        v86 = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserItemMaster___);
        v87 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ItemMaster___);
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
                                                     (const MethodInfo_23E22D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
  if ( (byte_42B18E6 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_B52984(&QuestBoardListViewItemDraw_TypeInfo);
    byte_42B18E6 = 1;
  }
  if ( !label )
    sub_B52A5C(this, label);
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
      v23 = UnityEngine_Color__op_Multiply_41464792(static_fields->CAMPAIGN_COST_COLOR, 0.5, 0LL);
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
      v24 = UnityEngine_Color__op_Multiply_41464792(v22->OVER_COST_COLOR, 0.5, 0LL);
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
  Il2CppObject *v21; // x0
  System_String_o *v22; // x22
  int32_t v23; // w24
  int32_t num; // w8
  int32_t v25; // [xsp+8h] [xbp-58h] BYREF
  int32_t v26; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = baseCol.fields.a;
  b = baseCol.fields.b;
  g = baseCol.fields.g;
  r = baseCol.fields.r;
  v26 = consumeNo;
  if ( (byte_42B18E5 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_10976/*"QUEST_BOARD_COST_QP"*/);
    byte_42B18E5 = 1;
  }
  SelfUserGame = System_Int32__ToString((int32_t)&v26, 0LL);
  if ( !itemEnt )
    goto LABEL_16;
  if ( itemEnt->fields.type == 1 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( SelfUserGame )
    {
      v19 = v26 > *((_DWORD *)SelfUserGame + 24);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v20 = LocalizationManager__Get((System_String_o *)StringLiteral_10976/*"QUEST_BOARD_COST_QP"*/, 0LL);
      v25 = v26;
      v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
      SelfUserGame = System_String__Format(v20, v21, 0LL);
      v22 = (System_String_o *)SelfUserGame;
      goto LABEL_15;
    }
LABEL_16:
    sub_B52A5C(SelfUserGame, v17);
  }
  v23 = v26;
  v22 = (System_String_o *)SelfUserGame;
  if ( usrItem && (SelfUserGame = (void *)ItemEntity__IsEnable(itemEnt, 0LL), ((unsigned __int8)SelfUserGame & 1) != 0) )
    num = usrItem->fields.num;
  else
    num = 0;
  v19 = v23 > num;
LABEL_15:
  v27.fields.r = r;
  v27.fields.g = g;
  v27.fields.b = b;
  v27.fields.a = a;
  QuestBoardListViewItemDraw__SetCostLabel(
    (QuestBoardListViewItemDraw_o *)SelfUserGame,
    label,
    v22,
    0,
    v27,
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
        v10 = sub_B52A88(this);
        sub_B52A28(v10, 0LL);
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
    sub_B52A5C(this, isDisp);
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

  if ( (byte_42B18F4 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B18F4 = 1;
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
          sub_B52A5C(v8, v7);
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
  if ( (byte_42B18E4 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)sub_B52984(&QuestBoardListViewItemDraw_TypeInfo);
    byte_42B18E4 = 1;
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
    maskSpriteName = System_String__Concat_44568316(QUEST_BOARD_MASK_SPNAME_PREFIX, v24, 0LL);
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
    sub_B52A5C(this, questEnt);
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

  if ( (byte_42B18F2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__);
    byte_42B18F2 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  if ( mInfoTextList && mInfoTextList->fields._size > 1 )
  {
    mOptionInfoLb = this->fields.mOptionInfoLb;
    if ( !mOptionInfoLb )
LABEL_11:
      sub_B52A5C(mOptionInfoLb, method);
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

  if ( (byte_42B18C2 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewMultiSecondBattleInformation___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B52984(&Method_System_Collections_Generic_List_UISprite__Clear__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&QuestBoardListViewItemDraw_TypeInfo);
    byte_42B18C2 = 1;
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
                                                                                               (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewMultiSecondBattleInformation___);
        p_secondBattleInformation = &this->fields.secondBattleInformation;
        this->fields.secondBattleInformation = Component_srcLineSprite;
        sub_B52920(
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
          (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_UISprite__Clear__);
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
          sub_B52A5C(mOptionSecondBattleInformationObj, v12);
        }
        max_length = mStatusSp->max_length;
        if ( max_length >= 1 )
        {
          v29 = 0;
          do
          {
            if ( v29 >= max_length )
            {
              v41 = sub_B52A88(mOptionSecondBattleInformationObj);
              sub_B52A28(v41, 0LL);
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
                                                                               (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
  Il2CppObject *v37; // x0
  System_String_o *EventAddBannerSpriteName; // x25
  QuestBoardListViewItemDraw_o *v39; // x23
  int32_t v40; // w27
  QuestBoardListViewItemDraw_c *v41; // x8
  struct System_String_array *msQBoardL1Names; // x8
  System_String_o *v43; // x25
  Il2CppObject *v44; // x0
  const MethodInfo *v45; // x5
  ScrTerminalListTop_c *v46; // x8
  struct ScrTerminalListTop_StaticFields *static_fields; // x9
  QuestBoardListViewItemDraw_c *v48; // x0
  bool v49; // zf
  ScrTerminalListTop_c *v50; // x0
  bool v51; // w24
  QuestBoardListViewItemDraw_o *v52; // x28
  bool v53; // w0
  QuestBoardListViewItemDraw_o *v54; // x28
  bool v55; // w0
  QuestBoardListViewItemDraw_c *v56; // x0
  System_String_o **p_QBOARD_CAP_CLOSED_SPECIAL_2; // x8
  QuestBoardListViewItemDraw_c *v58; // x0
  WarEntity_o *Entity; // x0
  bool v60; // w8
  WarEntity_o *v61; // x2
  QuestBoardListViewItemDraw_o *v62; // x0
  QuestBoardListViewItem_o *v63; // x1
  QuestBoardListViewItemDraw_o *v64; // x25
  bool v65; // w0
  QuestBoardListViewItemDraw_c *v66; // x8
  bool v67; // w21
  QuestBoardListViewItemDraw_o *v68; // x28
  QuestBoardListViewItemDraw_o *v69; // x28
  ScrTerminalListTop_c *v70; // x0
  int32_t NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID; // w28
  TerminalPramsManager_c *v72; // x0
  ScrTerminalListTop_c *v73; // x8
  int32_t QuestId_k__BackingField; // w21
  TerminalPramsManager_c *v75; // x0
  __int64 v76; // x8
  System_String_o *v77; // x25
  int32_t mStatusSp; // w8
  System_Int32_c *v79; // x0
  __int64 v80; // x8
  Il2CppObject *v81; // x0
  UISprite_o *mcBaseP; // x28
  int v83; // w23
  const MethodInfo *v84; // x2
  UIWidget_o *v85; // x25
  int v86; // s0
  int32_t questCount; // w1
  QuestBoardListViewItemDraw_o **p_mOptionInfoLb; // x25
  const MethodInfo *v92; // x3
  int32_t v93; // w1
  QuestBoardListViewItemDraw_c *v94; // x0
  int v95; // w21
  const MethodInfo *v96; // x3
  int32_t status; // w1
  QuestBoardListViewItemDraw_c *v98; // x0
  const MethodInfo *v99; // x2
  const MethodInfo *v100; // x3
  const MethodInfo *v101; // x3
  const MethodInfo *v102; // x3
  bool v103; // w1
  bool v104; // w21
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x20
  struct QuestBoardListViewObject_o *v106; // x8
  __int64 v107; // x10
  const MethodInfo *v108; // x3
  int32_t AlphaAnimCnt; // w21
  UnityEngine_Object_o *mEarthLine; // x21
  const MethodInfo *v111; // x3
  QuestBoardListViewEarthLine_o *v112; // x21
  float *mTitleLevelSp; // x8
  __int64 v114; // x0
  int32_t v115; // [xsp+14h] [xbp-8Ch]
  bool v116; // [xsp+18h] [xbp-88h]
  bool v117; // [xsp+1Ch] [xbp-84h]
  struct UnityEngine_GameObject_o *checkTime; // [xsp+28h] [xbp-78h]
  int v122; // [xsp+34h] [xbp-6Ch]
  QuestBoardListViewItem_o *questBoardItema; // [xsp+38h] [xbp-68h]
  int32_t warId; // [xsp+40h] [xbp-60h]
  bool v125; // [xsp+44h] [xbp-5Ch]
  _BOOL4 IsClosedWar; // [xsp+48h] [xbp-58h]
  int32_t PrioredBannerId; // [xsp+4Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v128; // 0:s0.4,4:s1.4,8:s2.4

  v10 = questBoardItem;
  v11 = this;
  if ( (byte_42B18C4 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_WarMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&QuestBoardListViewItemDraw_TypeInfo);
    sub_B52984(&QuestBoardListViewManager_TypeInfo);
    sub_B52984(&ScrTerminalListTop_TypeInfo);
    sub_B52984(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_B52984(&SingletonTemplate_QuestTree__TypeInfo);
    sub_B52984(&SingletonTemplate_clsQuestCheck__TypeInfo);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42B18C4 = 1;
  }
  if ( !v10 )
    goto LABEL_312;
  quest_info_k__BackingField = v10->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_312;
  v117 = isSpecialClosedBanner;
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
  v125 = isBadgeDisp;
  questBoardItem = (QuestBoardListViewItem_o *)QuestBoardListViewManager_TypeInfo;
  v17 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v17
    || (QuestBoardListViewManager_c *)this->klass->_2.typeHierarchy[v17 - 1] != QuestBoardListViewManager_TypeInfo )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_B52D50(this);
LABEL_314:
    this = (QuestBoardListViewItemDraw_o *)sub_B52D50(this);
    goto LABEL_315;
  }
  v18 = AreaBoardInfo_k__BackingField->fields.warId;
  questBoardItema = v10;
  checkTime = this->fields.mNoticeNumberRoot;
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
  this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
    v122 = (unsigned __int8)this & 1;
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
    v122 = 0;
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
  this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !this )
LABEL_312:
    sub_B52A5C(this, questBoardItem);
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
    v30 = v125;
    goto LABEL_248;
  }
  v116 = questBoardType == 2 && eventEnt != 0LL;
  if ( v116 )
  {
    if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
    }
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    v29 = questBoardItema;
    if ( !this )
      goto LABEL_312;
    IsActiveEventWar = QuestTree__IsActiveEventWar((QuestTree_o *)this, v18, 0LL);
    v33 = IsPurchasedByRarePrism;
    LOBYTE(v26) = (IsPurchasedByRarePrism || v122 == 0) && IsActiveEventWar;
    if ( (v26 & 1) != 0 )
    {
      v34 = IsClosedWar;
    }
    else
    {
      v34 = IsClosedWar;
      if ( v122 )
        v34 = AreaBoardInfo_k__BackingField->fields.status == 2 || IsClosedWar;
    }
    EventAddBannerSpriteName = QuestBoardListViewItemDraw__GetEventAddBannerSpriteName(
                                 (QuestBoardListViewItemDraw_o *)IsActiveEventWar,
                                 eventEnt,
                                 warId,
                                 v34 | v26 & 1,
                                 v32);
    v49 = v34 == 0;
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
      v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId);
      EventAddBannerSpriteName = System_String__Format(QBOARD_CAP_CLOSED_SPECIAL_FORMAT, v37, 0LL);
    }
    else
    {
      EventAddBannerSpriteName = (System_String_o *)StringLiteral_1/*""*/;
    }
    v50 = ScrTerminalListTop_TypeInfo;
    if ( v117 )
    {
      if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
        v50 = ScrTerminalListTop_TypeInfo;
      }
      if ( v18 == v50->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_TARGET_WAR_ID )
        goto LABEL_130;
    }
    if ( (BYTE3(v50->vtable._0_Equals.methodPtr) & 4) != 0 && !v50->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v50);
      v50 = ScrTerminalListTop_TypeInfo;
    }
    if ( v18 != v50->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_TARGET_WAR_ID )
      goto LABEL_121;
    v51 = IsPurchasedByRarePrism;
    if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
    }
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    v52 = this;
    if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    }
    if ( !v52 )
      goto LABEL_312;
    v53 = clsQuestCheck__IsWarClear(
            (clsQuestCheck_o *)v52,
            ScrTerminalListTop_TypeInfo->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_START_COND_WAR_ID,
            0LL);
    IsPurchasedByRarePrism = v51;
    if ( !v53 )
      goto LABEL_121;
    if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
    }
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    v54 = this;
    if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    }
    if ( !v54 )
      goto LABEL_312;
    v55 = clsQuestCheck__IsWarClear(
            (clsQuestCheck_o *)v54,
            ScrTerminalListTop_TypeInfo->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_END_COND_WAR_ID,
            0LL);
    IsPurchasedByRarePrism = v51;
    if ( !v55 )
    {
LABEL_130:
      v58 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v58 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v29 = questBoardItema;
      p_QBOARD_CAP_CLOSED_SPECIAL_2 = &v58->static_fields->QBOARD_CAP_CLOSED_SPECIAL_2;
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
      v56 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v56 = QuestBoardListViewItemDraw_TypeInfo;
      }
      p_QBOARD_CAP_CLOSED_SPECIAL_2 = &v56->static_fields->QBOARD_CAP_CLOSED;
    }
    EventAddBannerSpriteName = *p_QBOARD_CAP_CLOSED_SPECIAL_2;
LABEL_135:
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v33 = IsPurchasedByRarePrism;
    this = (QuestBoardListViewItemDraw_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !this )
      goto LABEL_312;
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)this,
               v18,
               (const MethodInfo_23E22D8 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    v60 = isBlackMarkOnly;
    v61 = Entity;
    v62 = v11;
    v63 = v29;
    goto LABEL_234;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestBoardListViewItemDraw_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !this )
    goto LABEL_312;
  this = (QuestBoardListViewItemDraw_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                           v18,
                                           (const MethodInfo_23E22D8 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( !this )
    goto LABEL_312;
  v39 = this;
  this = (QuestBoardListViewItemDraw_o *)WarEntity__GetPrioredBannerId((WarEntity_o *)this, 0LL);
  v40 = (int)this;
  v41 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v41 = QuestBoardListViewItemDraw_TypeInfo;
  }
  msQBoardL1Names = v41->static_fields->msQBoardL1Names;
  if ( !msQBoardL1Names )
    goto LABEL_312;
  if ( v26 >= msQBoardL1Names->max_length )
    goto LABEL_315;
  v43 = msQBoardL1Names->m_Items[v26];
  v115 = v40;
  PrioredBannerId = v40;
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId);
  EventAddBannerSpriteName = System_String__Format(v43, v44, 0LL);
  v46 = ScrTerminalListTop_TypeInfo;
  if ( v117 )
  {
    if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      v46 = ScrTerminalListTop_TypeInfo;
    }
    static_fields = v46->static_fields;
    if ( v18 == static_fields->AREA_BOARD_FORCE_DISP_TARGET_WAR_ID )
    {
      v48 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
        v29 = questBoardItema;
        v33 = IsPurchasedByRarePrism;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v48 = QuestBoardListViewItemDraw_TypeInfo;
        }
      }
      else
      {
        v29 = questBoardItema;
        v33 = IsPurchasedByRarePrism;
      }
      EventAddBannerSpriteName = v48->static_fields->QBOARD_CAP_CLOSED_SPECIAL;
      goto LABEL_233;
    }
    if ( (BYTE3(v46->vtable._0_Equals.methodPtr) & 4) != 0 && !v46->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v46);
      v46 = ScrTerminalListTop_TypeInfo;
      static_fields = ScrTerminalListTop_TypeInfo->static_fields;
    }
    if ( v18 == static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_TARGET_WAR_ID )
    {
      if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
      }
      this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      v64 = this;
      if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      }
      if ( !v64 )
        goto LABEL_312;
      v65 = clsQuestCheck__IsWarClear(
              (clsQuestCheck_o *)v64,
              ScrTerminalListTop_TypeInfo->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_END_COND_WAR_ID,
              0LL);
      v66 = QuestBoardListViewItemDraw_TypeInfo;
      if ( v65 )
      {
        v29 = questBoardItema;
        if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          v33 = IsPurchasedByRarePrism;
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v66 = QuestBoardListViewItemDraw_TypeInfo;
        }
        else
        {
          v33 = IsPurchasedByRarePrism;
        }
        EventAddBannerSpriteName = v66->static_fields->QBOARD_CAP_CLOSED_SPECIAL_3;
      }
      else
      {
        v29 = questBoardItema;
        if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          v33 = IsPurchasedByRarePrism;
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v66 = QuestBoardListViewItemDraw_TypeInfo;
        }
        else
        {
          v33 = IsPurchasedByRarePrism;
        }
        EventAddBannerSpriteName = v66->static_fields->QBOARD_CAP_CLOSED_SPECIAL_2;
      }
      goto LABEL_233;
    }
  }
  if ( (BYTE3(v46->vtable._0_Equals.methodPtr) & 4) != 0 && !v46->_2.cctor_finished )
  {
    v33 = IsPurchasedByRarePrism;
    j_il2cpp_runtime_class_init_0(v46);
    v46 = ScrTerminalListTop_TypeInfo;
  }
  else
  {
    v33 = IsPurchasedByRarePrism;
  }
  v67 = v125;
  if ( warId != v46->static_fields->NT2_EFFECT_AREA_BOARD_TARGET_WAR_ID )
    goto LABEL_222;
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v68 = this;
  if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  }
  if ( !v68 )
    goto LABEL_312;
  if ( clsQuestCheck__IsWarClear(
         (clsQuestCheck_o *)v68,
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
  this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v69 = this;
  if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  }
  if ( !v69 )
    goto LABEL_312;
  if ( !clsQuestCheck__IsQuestClear(
          (clsQuestCheck_o *)v69,
          ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_QUEST_ID,
          0,
          0LL) )
    goto LABEL_222;
  v70 = ScrTerminalListTop_TypeInfo;
  if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v70 = ScrTerminalListTop_TypeInfo;
  }
  NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID = v70->static_fields->NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID;
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
  if ( !byte_42AC2B5 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2B5 = 1;
  }
  v72 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v72 = TerminalPramsManager_TypeInfo;
  }
  v73 = ScrTerminalListTop_TypeInfo;
  QuestId_k__BackingField = v72->static_fields->_QuestId_k__BackingField;
  if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v73 = ScrTerminalListTop_TypeInfo;
  }
  v49 = QuestId_k__BackingField == v73->static_fields->NT2_EFFECT_AREA_BOARD_QUEST_ID;
  v67 = v125;
  if ( !v49 )
    goto LABEL_222;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC2B6 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2B6 = 1;
  }
  v75 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v67 = v125;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v75 = TerminalPramsManager_TypeInfo;
    }
  }
  else
  {
    v67 = v125;
  }
  if ( v75->static_fields->_PhaseCnt_k__BackingField != 2 )
  {
LABEL_222:
    v29 = questBoardItema;
    if ( isBoardDisp && v67 && !isBlackMarkOnly && !isWhiteMarkOnly )
      goto LABEL_233;
    this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
    }
    v80 = *(_QWORD *)&this->fields.mTitleLevelSp[2].fields.m_CachedPtr;
    if ( !v80 )
      goto LABEL_312;
    if ( *(_DWORD *)(v80 + 24) > 1u )
    {
      v77 = *(System_String_o **)(v80 + 40);
      v79 = int_TypeInfo;
      mStatusSp = v115;
      goto LABEL_232;
    }
LABEL_315:
    v114 = sub_B52A88(this);
    sub_B52A28(v114, 0LL);
  }
  this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  }
  v29 = questBoardItema;
  v76 = *(_QWORD *)&this->fields.mTitleLevelSp[2].fields.m_CachedPtr;
  if ( !v76 )
    goto LABEL_312;
  if ( *(_DWORD *)(v76 + 24) <= 1u )
    goto LABEL_315;
  v77 = *(System_String_o **)(v76 + 40);
  mStatusSp = (int32_t)v39->fields.mStatusSp;
  v79 = int_TypeInfo;
LABEL_232:
  PrioredBannerId = mStatusSp;
  v81 = (Il2CppObject *)j_il2cpp_value_box_0(v79, &PrioredBannerId);
  EventAddBannerSpriteName = System_String__Format(v77, v81, 0LL);
LABEL_233:
  v60 = isBlackMarkOnly;
  v62 = v11;
  v63 = v29;
  v61 = (WarEntity_o *)v39;
LABEL_234:
  QuestBoardListViewItemDraw__SetBlackMarkAndWhiteMark(v62, v63, v61, v60, isWhiteMarkOnly, v45);
  LOBYTE(v26) = 0;
  v49 = !IsClosedWar;
LABEL_235:
  mcBaseP = v11->fields.mcBaseP;
  v83 = !v49;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(mcBaseP, EventAddBannerSpriteName, 0LL);
  v30 = v125;
  IsPurchasedByRarePrism = v33;
  v25 = v116;
  if ( v83 )
  {
    v85 = (UIWidget_o *)v11->fields.mcBaseP;
    *(UnityEngine_Color_o *)&v86 = UnityEngine_Color__get_gray(0LL);
    if ( !v85 )
      goto LABEL_312;
    UIWidget__set_color(v85, *(UnityEngine_Color_o *)&v86, 0LL);
  }
  questCount = 0;
  if ( v26 & 1 | !v116 && v125 )
    questCount = AreaBoardInfo_k__BackingField->fields.questCount;
  QuestBoardListViewItemDraw__SetBadge(v11, questCount, v84);
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
              QuestBoardListViewItemDraw__SetStatusActive(v11, status, 0, v96);
            v98 = QuestBoardListViewItemDraw_TypeInfo;
            if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
              v98 = QuestBoardListViewItemDraw_TypeInfo;
            }
            QuestBoardListViewItemDraw__SetNewIcon(
              v11,
              v98->static_fields->NEW_POS_AREA,
              v98->static_fields->NEW_W_AREA,
              v98->static_fields->NEW_H_AREA,
              v96);
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
  v93 = AreaBoardInfo_k__BackingField->fields.status;
  if ( v93 && v93 != 6 )
    QuestBoardListViewItemDraw__SetStatusActive(v11, v93, v26 & 1 | (v93 != 1 || !v25), v92);
  v94 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v95 = v122;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v94 = QuestBoardListViewItemDraw_TypeInfo;
    }
  }
  else
  {
    v95 = v122;
  }
  QuestBoardListViewItemDraw__SetNewIcon(
    v11,
    v94->static_fields->NEW_POS_AREA,
    v94->static_fields->NEW_W_AREA,
    v94->static_fields->NEW_H_AREA,
    v92);
  if ( (IsClosedWar & v95) != 0 )
    QuestBoardListViewItemDraw__SetStatusActive(v11, 2, 1, v100);
  QuestBoardListViewItemDraw__SetClearSprite(v11, Mine, v99);
  QuestBoardListViewItemDraw__SetNextSprite(v11, AreaBoardInfo_k__BackingField, Mine, v101);
  QuestBoardListViewItemDraw__CreateInfoTextList(v11, v29, (int64_t)checkTime, v102);
  this = (QuestBoardListViewItemDraw_o *)v11->fields.mRarePrismSp;
  if ( !this )
    goto LABEL_312;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_312;
  v103 = (IsClosedWar & v95) == 0 && IsPurchasedByRarePrism;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v103, 0LL);
  if ( v95 )
    goto LABEL_284;
  mInfoTextList = v11->fields.mInfoTextList;
  if ( !mInfoTextList )
    goto LABEL_312;
  questBoardItem = (QuestBoardListViewItem_o *)(unsigned int)mInfoTextList->fields._size;
  if ( (int)questBoardItem < 1 )
  {
LABEL_284:
    v104 = 0;
    goto LABEL_296;
  }
  v106 = v11->fields.mListViewObject;
  if ( !v106 )
    goto LABEL_312;
  this = (QuestBoardListViewItemDraw_o *)v106->fields.manager;
  if ( !this )
    goto LABEL_312;
  v107 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v107
    || (QuestBoardListViewManager_c *)this->klass->_2.typeHierarchy[v107 - 1] != QuestBoardListViewManager_TypeInfo )
  {
    goto LABEL_314;
  }
  AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt(
                   (QuestBoardListViewManager_o *)this,
                   (int32_t)questBoardItem,
                   0LL);
  if ( mInfoTextList->fields._size <= (unsigned int)AlphaAnimCnt )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  this = (QuestBoardListViewItemDraw_o *)mInfoTextList->fields._items->m_Items[AlphaAnimCnt];
  if ( !this )
    goto LABEL_312;
  QuestBoardInformaionText__SetTime(
    (QuestBoardInformaionText_o *)this,
    &v11->fields.mOptionInfoLb,
    &v11->fields.mOptionInfoFrameSp,
    v108);
  this = (QuestBoardListViewItemDraw_o *)v11->fields.mOptionInfoLb;
  if ( !this )
    goto LABEL_312;
  BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)this, 1.0, 0LL);
  v104 = 1;
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v104, 0LL);
  this = *p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_312;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_312;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v104, 0LL);
  mEarthLine = (UnityEngine_Object_o *)v11->fields.mEarthLine;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mEarthLine, 0LL, 0LL) )
  {
    this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
    v112 = v11->fields.mEarthLine;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
    }
    if ( v112 )
    {
      mTitleLevelSp = (float *)this->fields.mTitleLevelSp;
      v128.fields.x = mTitleLevelSp[58];
      v128.fields.y = mTitleLevelSp[59];
      v128.fields.z = mTitleLevelSp[60];
      QuestBoardListViewEarthLine__SetupSecond(v112, v128, v11->fields.mListViewObject, warId, v111);
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
  struct UnityEngine_GameObject_o *mNoticeNumberRoot; // x28
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
  int v28; // w24
  QuestBoardListViewItemDraw_c *v29; // x8
  struct System_String_array *msQBoardL1Names; // x8
  System_String_o *v31; // x28
  int *v32; // x1
  QuestBoardListViewItemDraw_c *v33; // x0
  System_String_o *QBOARD_CAP_CLOSED; // x24
  System_String_o *EventAddBannerSpriteName; // x0
  int v36; // w24
  QuestBoardListViewItemDraw_c *v37; // x8
  struct System_String_array *v38; // x8
  Il2CppObject *v39; // x0
  UISprite_o *mcBaseP; // x28
  UIWidget_o *Component_srcLineSprite; // x24
  int v42; // s0
  UIWidget_o *v46; // x24
  int v47; // s0
  bool v51; // w1
  const MethodInfo *v52; // x3
  _BOOL8 HasFlag; // x0
  const MethodInfo *v54; // x4
  int32_t v55; // w1
  QuestBoardListViewItemDraw_c *v56; // x0
  const MethodInfo *v57; // x2
  const MethodInfo *v58; // x3
  const MethodInfo *v59; // x3
  QuestBoardListViewItemDraw_c *v60; // x0
  const MethodInfo *v61; // x2
  const MethodInfo *v62; // x3
  BalanceConfig_c *v63; // x0
  const MethodInfo *v64; // x2
  const MethodInfo *v65; // x3
  const MethodInfo *v66; // x2
  const MethodInfo *v67; // x5
  int32_t questCount; // w1
  const MethodInfo *v69; // x3
  bool v70; // w20
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x21
  struct QuestBoardListViewObject_o *v72; // x8
  __int64 v73; // x10
  const MethodInfo *v74; // x3
  int32_t AlphaAnimCnt; // w20
  QuestBoardListViewItemDraw_c *v76; // x0
  __int64 v77; // x0
  System_Collections_Generic_List_MapControl_QuestInfo__o *questList; // [xsp+0h] [xbp-80h]
  int v79; // [xsp+Ch] [xbp-74h]
  int64_t v80; // [xsp+10h] [xbp-70h]
  EventEntity_o *eventEnt; // [xsp+18h] [xbp-68h]
  _BOOL4 IsClosedWar; // [xsp+20h] [xbp-60h]
  int v83; // [xsp+24h] [xbp-5Ch]
  int v84; // [xsp+28h] [xbp-58h] BYREF
  int v85; // [xsp+2Ch] [xbp-54h] BYREF

  v3 = questBoardItem;
  v4 = this;
  if ( (byte_42B18CA & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_WarMaster___);
    sub_B52984(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__);
    sub_B52984(&QuestBoardListViewItemDraw_TypeInfo);
    sub_B52984(&QuestBoardListViewManager_TypeInfo);
    sub_B52984(&ScrTerminalListTop_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_B52984(&SingletonTemplate_QuestTree__TypeInfo);
    sub_B52984(&SingletonTemplate_clsQuestCheck__TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42B18CA = 1;
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
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
    this = (QuestBoardListViewItemDraw_o *)sub_B52D50(this);
LABEL_202:
    this = (QuestBoardListViewItemDraw_o *)sub_B52D50(this);
    goto LABEL_203;
  }
  mNoticeNumberRoot = this->fields.mNoticeNumberRoot;
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
  v80 = (int64_t)mNoticeNumberRoot;
  eventEnt = v11;
  this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !this )
    goto LABEL_200;
  questList = (System_Collections_Generic_List_MapControl_QuestInfo__o *)this->fields.mCommonAtlas;
  IsPurchasedByRarePrism = QuestBoardListViewItemDraw__IsPurchasedByRarePrism(this, questList, v9, v17);
  v83 = v12 & (IsPurchasedByRarePrism || !IsMainInterlude);
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
    v79 = IsClosedWar;
    if ( v83 == 0 && IsMainInterlude )
    {
      if ( v9 && (WarEntity__HasFlag(v9, 128, 0LL) || WarEntity__HasFlag(v9, 32, 0LL)) )
      {
        status = AreaBoardInfo_k__BackingField->fields.status;
        v21 = IsClosedWar;
LABEL_64:
        v79 = v21 || status == 2;
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
      v33 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v33 = QuestBoardListViewItemDraw_TypeInfo;
      }
      QBOARD_CAP_CLOSED = v33->static_fields->QBOARD_CAP_CLOSED;
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
      this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
        this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
        this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
          v76 = QuestBoardListViewItemDraw_TypeInfo;
          if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
            v76 = QuestBoardListViewItemDraw_TypeInfo;
          }
          QBOARD_CAP_CLOSED = v76->static_fields->QBOARD_CAP_CLOSED_SPECIAL_2;
          goto LABEL_123;
        }
      }
    }
    if ( v9
      && (IsOpenedMainScenarioWar = (ScrTerminalListTop_c *)WarEntity__HasFlag(v9, 128, 0LL),
          ((unsigned __int8)IsOpenedMainScenarioWar & 1) != 0) )
    {
      this = (QuestBoardListViewItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_200;
      this = (QuestBoardListViewItemDraw_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !this )
        goto LABEL_200;
      this = (QuestBoardListViewItemDraw_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                               (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                               warId,
                                               (const MethodInfo_23E22D8 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_200;
      this = (QuestBoardListViewItemDraw_o *)WarEntity__GetPrioredBannerId((WarEntity_o *)this, 0LL);
      v28 = (int)this;
      v29 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v29 = QuestBoardListViewItemDraw_TypeInfo;
      }
      msQBoardL1Names = v29->static_fields->msQBoardL1Names;
      if ( !msQBoardL1Names )
        goto LABEL_200;
      if ( msQBoardL1Names->max_length > 1 )
      {
        v31 = msQBoardL1Names->m_Items[1];
        v85 = v28;
        v32 = &v85;
LABEL_121:
        v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v32);
        EventAddBannerSpriteName = System_String__Format(v31, v39, 0LL);
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
                                     (v83 != 0) | (unsigned __int8)v79,
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
                                                  (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        *(UnityEngine_Color_o *)&v42 = UnityEngine_Color__get_white(0LL);
        if ( !Component_srcLineSprite )
          goto LABEL_200;
        UIWidget__set_color(Component_srcLineSprite, *(UnityEngine_Color_o *)&v42, 0LL);
        if ( v79 )
        {
          v46 = (UIWidget_o *)v4->fields.mcBaseP;
          *(UnityEngine_Color_o *)&v47 = UnityEngine_Color__get_gray(0LL);
          if ( !v46 )
            goto LABEL_200;
          UIWidget__set_color(v46, *(UnityEngine_Color_o *)&v47, 0LL);
        }
        goto LABEL_137;
      }
      this = (QuestBoardListViewItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_200;
      this = (QuestBoardListViewItemDraw_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !this )
        goto LABEL_200;
      this = (QuestBoardListViewItemDraw_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                               (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                               warId,
                                               (const MethodInfo_23E22D8 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_200;
      this = (QuestBoardListViewItemDraw_o *)WarEntity__GetPrioredBannerId((WarEntity_o *)this, 0LL);
      v36 = (int)this;
      v37 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v37 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v38 = v37->static_fields->msQBoardL1Names;
      if ( !v38 )
        goto LABEL_200;
      if ( v38->max_length > 2 )
      {
        v31 = v38->m_Items[2];
        v32 = &v84;
        v84 = v36;
        goto LABEL_121;
      }
    }
LABEL_203:
    v77 = sub_B52A88(this);
    sub_B52A28(v77, 0LL);
  }
LABEL_137:
  this = (QuestBoardListViewItemDraw_o *)v4->fields.mRarePrismSp;
  if ( !this )
    goto LABEL_200;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_200;
  v51 = (!IsMainInterlude || !IsClosedWar) && IsPurchasedByRarePrism;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v51, 0LL);
  if ( v9 && ((HasFlag = WarEntity__HasFlag(v9, 128, 0LL)) || (HasFlag = WarEntity__HasFlag(v9, 32, 0LL))) )
  {
    v55 = AreaBoardInfo_k__BackingField->fields.status;
    if ( v55 && v55 != 6 )
      QuestBoardListViewItemDraw__SetStatusActive(v4, v55, v83 != 0 || eventEnt == 0LL || v55 != 1, v52);
    if ( IsPurchasedByRarePrism
      && QuestBoardListViewItemDraw__HasNewQuestInWar(
           (QuestBoardListViewItemDraw_o *)HasFlag,
           questList,
           warId,
           IsMainInterlude,
           v54) )
    {
      QuestBoardListViewItemDraw__SetStatusActive(v4, 1, 1, v52);
    }
    v56 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v56 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QuestBoardListViewItemDraw__SetNewIcon(
      v4,
      v56->static_fields->NEW_POS_AREA,
      v56->static_fields->NEW_W_AREA,
      v56->static_fields->NEW_H_AREA,
      v52);
    if ( IsMainInterlude && IsClosedWar )
      QuestBoardListViewItemDraw__SetStatusActive(v4, 2, 1, v58);
    QuestBoardListViewItemDraw__SetClearSprite(v4, v9, v57);
    QuestBoardListViewItemDraw__SetNextSprite(v4, AreaBoardInfo_k__BackingField, v9, v59);
  }
  else
  {
    if ( AreaBoardInfo_k__BackingField->fields.status == 1 )
      QuestBoardListViewItemDraw__SetStatusActive(v4, 1, 1, v52);
    v60 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v60 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QuestBoardListViewItemDraw__SetNewIcon(
      v4,
      v60->static_fields->NEW_POS_AREA,
      v60->static_fields->NEW_W_AREA,
      v60->static_fields->NEW_H_AREA,
      v52);
    v63 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v63 = BalanceConfig_TypeInfo;
    }
    if ( warId == v63->static_fields->MainInterludeWarId
      && (AreaBoardInfo_k__BackingField->fields.status & 0xFFFFFFFE) == 2 )
    {
      QuestBoardListViewItemDraw__SetStatusActive(v4, 2, 1, v62);
    }
    QuestBoardListViewItemDraw__SetClearSprite(v4, v9, v61);
    if ( !v9 )
      goto LABEL_173;
  }
  if ( WarEntity__IsContainPrioredEntity(v9, 18, 0LL) )
  {
    QuestBoardListViewItemDraw__SetStatusActive(v4, 2, 1, v65);
    QuestBoardListViewItemDraw__SetClearSprite(v4, v9, v66);
  }
  if ( WarEntity__IsDispWhiteMarkUnderBoard(v9, 0LL) )
    QuestBoardListViewItemDraw__SetBlackMarkAndWhiteMark(v4, v3, v9, 0, 0, v67);
LABEL_173:
  if ( IsPurchasedByRarePrism || v83 != 0 || eventEnt == 0LL )
    questCount = AreaBoardInfo_k__BackingField->fields.questCount;
  else
    questCount = 0;
  QuestBoardListViewItemDraw__SetBadge(v4, questCount, v64);
  QuestBoardListViewItemDraw__CreateInfoTextList(v4, v3, v80, v69);
  if ( !IsMainInterlude )
  {
    mInfoTextList = v4->fields.mInfoTextList;
    if ( !mInfoTextList )
      goto LABEL_200;
    questBoardItem = (QuestBoardListViewItem_o *)(unsigned int)mInfoTextList->fields._size;
    if ( (int)questBoardItem >= 1 )
    {
      v72 = v4->fields.mListViewObject;
      if ( !v72 )
        goto LABEL_200;
      this = (QuestBoardListViewItemDraw_o *)v72->fields.manager;
      if ( !this )
        goto LABEL_200;
      v73 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v73
        && (QuestBoardListViewManager_c *)this->klass->_2.typeHierarchy[v73 - 1] == QuestBoardListViewManager_TypeInfo )
      {
        AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt(
                         (QuestBoardListViewManager_o *)this,
                         (int32_t)questBoardItem,
                         0LL);
        if ( mInfoTextList->fields._size <= (unsigned int)AlphaAnimCnt )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        this = (QuestBoardListViewItemDraw_o *)mInfoTextList->fields._items->m_Items[AlphaAnimCnt];
        if ( this )
        {
          QuestBoardInformaionText__SetTime(
            (QuestBoardInformaionText_o *)this,
            &v4->fields.mOptionInfoLb,
            &v4->fields.mOptionInfoFrameSp,
            v74);
          this = (QuestBoardListViewItemDraw_o *)v4->fields.mOptionInfoLb;
          if ( this )
          {
            BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)this, 1.0, 0LL);
            v70 = 1;
            goto LABEL_189;
          }
        }
LABEL_200:
        sub_B52A5C(this, questBoardItem);
      }
      goto LABEL_202;
    }
  }
  v70 = 0;
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v70, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v4->fields.mOptionInfoLb;
  if ( !this )
    goto LABEL_200;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_200;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v70, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewItemDraw__SetItemOfQuest(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        const MethodInfo *method)
{
  __int64 v5; // x22
  __int64 Instance; // x0
  unsigned __int64 size; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x20
  DataManager_o *v15; // x27
  QuestEntity_o *PhaseDetailedEntity; // x19
  unsigned int v17; // w23
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  __int64 v19; // x9
  int32_t dispType; // w26
  int v21; // s0
  int v22; // s1
  int v23; // s2
  int v24; // s3
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x24
  _BOOL4 v26; // w0
  int32_t v27; // w19
  _BOOL4 v28; // w25
  int32_t PhaseMax; // w0
  UnityEngine_GameObject_o *mLabelObj; // x8
  int OverwriteBannerId_k__BackingField; // w8
  QuestBoardListViewItemDraw_c *v32; // x0
  System_String_o *v33; // x24
  System_String_o *v34; // x1
  System_String_o *v35; // x0
  QuestBoardListViewItemDraw_c *v36; // x0
  System_String_o *QUEST_BOARD_SPNAME_PREFIX; // x28
  System_String_o *v38; // x0
  UISprite_o *v39; // x24
  struct UISprite_o **p_mcBaseP; // x27
  System_String_o *v41; // x28
  int32_t questId; // w24
  const MethodInfo *v43; // x3
  UnityEngine_GameObject_o *gameObject; // x24
  QuestBoardListViewItemDraw_c *v45; // x8
  float NEXT_POS_X_QUEST; // w8
  bool v47; // w28
  int32_t v48; // w1
  const MethodInfo *v49; // x3
  QuestBoardListViewItemDraw_c *v50; // x0
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  QuestBoardListViewItemDraw_c *v55; // x0
  const MethodInfo *v56; // x2
  struct QuestBoardListViewItemDraw_StaticFields *v57; // x8
  float v58; // s0
  float v59; // s1
  float v60; // s2
  const MethodInfo *v61; // x1
  const MethodInfo *v62; // x2
  UnityEngine_GameObject_o *v63; // x24
  QuestBoardListViewItemDraw_c *v64; // x0
  QuestBoardListViewItemDraw_o *v65; // x0
  const MethodInfo *v66; // x5
  System_String_o *RecommendLv; // x0
  const MethodInfo *v68; // x2
  const MethodInfo *v69; // x2
  UISprite_o *mLabelFaceMaskQuestSp; // x24
  QuestBoardListViewItemDraw_o *v71; // x0
  int32_t y_low; // w25
  System_String_o *FaceMaskSpriteName; // x0
  QuestEntity_o *v74; // x22
  const MethodInfo *v75; // x5
  bool v76; // w0
  const MethodInfo *v77; // x3
  UILabel_o *mTitleNameLb; // x24
  const MethodInfo *v79; // x4
  __int64 v80; // x27
  QuestBoardListViewItemDraw_o *v81; // x0
  const MethodInfo *v82; // x2
  const MethodInfo *v83; // x2
  UISprite_o *mLabelNameSp; // x24
  QuestBoardListViewItemDraw_o *v85; // x0
  const MethodInfo *v86; // x3
  System_String_o *QuestIconName; // x23
  System_Action_o *v88; // x23
  const MethodInfo *v89; // x3
  UILabel_o *v90; // x23
  const MethodInfo *v91; // x3
  int32_t v92; // w23
  int32_t afterClear; // w24
  float v94; // s8
  float v95; // s9
  float v96; // s10
  float v97; // s11
  bool IsRepeatReward; // w0
  const MethodInfo *v99; // x4
  const MethodInfo *v100; // x3
  bool v101; // w23
  int v102; // w19
  const MethodInfo *v103; // x1
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *mInfoTextList; // x23
  const MethodInfo *v105; // x6
  int64_t *p_endTime; // x8
  int64_t v107; // x23
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v108; // x24
  System_String_o *v109; // x28
  QuestBoardInformaionText_o *v110; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v111; // x25
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v112; // x19
  struct BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x23
  struct QuestBoardListViewObject_o *v114; // x8
  __int64 v115; // x10
  const MethodInfo *v116; // x3
  int32_t AlphaAnimCnt; // w24
  bool v118; // w24
  const MethodInfo *v119; // x1
  int32_t v120; // w24
  UISprite_o *mCostApSp; // x23
  System_String_o *ApSpriteFileName; // x24
  UnityEngine_GameObject_o *mChallengeObj; // x23
  QuestBoardListViewItemDraw_c *v124; // x0
  struct QuestBoardListViewItemDraw_StaticFields *v125; // x10
  float *p_x; // x8
  float *p_y; // x9
  float *p_z; // x10
  struct UILabel_o **p_mChallengeLb; // x19
  struct QuestBoardListViewItemDraw_StaticFields *v130; // x8
  struct QuestBoardListViewItemDraw_StaticFields *v131; // x10
  EventDetailEntity_o *Entity; // x23
  int32_t ClearNum; // w23
  UISprite_o *mcBaseP; // x24
  __int64 v135; // x8
  System_String_o *v136; // x28
  System_String_o *v137; // x0
  System_String_o *v138; // x28
  UISprite_o *challengeStrSpr; // x24
  UILabel_o *mChallengeLb; // x24
  UnityEngine_GameObject_o *mPhaseObj; // x23
  const MethodInfo *v142; // x4
  int32_t v143; // w19
  QuestBoardListViewItemDraw_c *v144; // x8
  int32_t v145; // w23
  __int16 v146; // w9
  int v147; // w10
  struct QuestBoardListViewItemDraw_StaticFields *v148; // x9
  int32_t PHASE_NORMAL_MAX; // w11
  _BOOL4 v150; // w25
  bool v151; // w27
  int32_t *p_QUEST_BOARD_PHASE_INTERVAL; // x9
  int32_t v153; // w26
  int v154; // w20
  bool v155; // w21
  int v156; // w22
  unsigned int v157; // w19
  struct UISprite_array *mPhaseSp; // x8
  Il2CppClass **v159; // x8
  UISprite_o *v160; // x28
  const MethodInfo *v161; // x6
  bool v162; // w2
  System_String_o *PhaseArrowSpriteName; // x0
  int v164; // s0
  QuestBoardListViewItemDraw_o *v168; // x0
  const MethodInfo *v169; // x3
  int32_t PhaseArrowIntervalSize; // w24
  QuestBoardListViewItemDraw_o *v171; // x26
  QuestEntity_o *v172; // x21
  UnityEngine_GameObject_o *v173; // x23
  QuestBoardListViewItemDraw_c *v174; // x0
  UISprite_o *mDamageRecordSp; // x23
  System_String_o *QUEST_BOARD_DAMAGE_RECODE_NAME; // x24
  UserQuestRecordMaster_o *v177; // x23
  void (__fastcall *MaxTurnDamage)(); // x0
  UILabel_o *mDamageRecordLb; // x23
  Il2CppObject *v180; // x0
  UnityEngine_GameObject_o *v181; // x23
  QuestBoardListViewItemDraw_c *v182; // x0
  UISprite_o *mKnockdownRecordSp; // x23
  System_String_o *QUEST_BOARD_KNOCKDOWN_RECODE_NAME; // x24
  __int64 v185; // x23
  UserQuestRecordMaster_o *v186; // x24
  UILabel_o *mKnockdownRecordCountLb; // x24
  System_String_o *v188; // x25
  Il2CppObject *v189; // x0
  UILabel_o *mKnockdownRecordDamageLb; // x24
  System_String_o *v191; // x25
  Il2CppObject *v192; // x0
  UILabel_o *mKnockdownRecordPlusLb; // x25
  System_String_o *v194; // x24
  _QWORD **v195; // x20
  __int64 v196; // x26
  __int16 v197; // w8
  __int64 v198; // x26
  __int64 v199; // x26
  __int64 v200; // x26
  UILabel_o *mKnockdownRecordDamageNameLb; // x25
  System_String_o *v202; // x0
  _QWORD **v203; // x19
  System_String_o *v204; // x24
  __int64 v205; // x26
  __int16 v206; // w8
  __int64 v207; // x26
  __int64 v208; // x26
  __int64 v209; // x26
  UnityEngine_GameObject_o *v210; // x0
  QuestBoardListViewItemDraw_c *v211; // x8
  UnityEngine_GameObject_o *v212; // x23
  float QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX; // s0
  UnityEngine_GameObject_o *v214; // x0
  float LocalPositionX; // s0
  QuestBoardListViewItemDraw_c *v216; // x0
  float v217; // s8
  int32_t id; // w23
  TerminalSceneComponent_c *v219; // x0
  __int64 v220; // x23
  UILabel_o *mOptionRestrinctionLb; // x23
  UnityEngine_GameObject_o *v222; // x23
  UnityEngine_Behaviour_o *Component_srcLineSprite; // x0
  __int64 RESTRICTION_FONT_SPACING_DEFAULT; // x1
  UnityEngine_Behaviour_o *v225; // x23
  const MethodInfo *v226; // x3
  __int64 v227; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v228; // x0
  UnityEngine_Behaviour_c *klass; // x8
  QuestPhaseDetailEntity_BoardInfo_array *v230; // x25
  _QWORD *monitor; // x8
  QuestPhaseDetailEntity_BoardInfo_o *v232; // x8
  bool v233; // w23
  bool v234; // w25
  char v235; // w27
  UnityEngine_Behaviour_o **p_mCostConsumeBattleWinSp; // x19
  bool v237; // w24
  QuestBoardListViewItemDraw_c *v238; // x0
  UISprite_o *mOptionPreBattleSp; // x24
  System_String_o *PRE_BATTLE_ORGANIZATION; // x26
  bool v241; // w24
  float v242; // s4
  float v243; // s5
  float v244; // s6
  float v245; // s7
  float v246; // s4
  float v247; // s5
  float v248; // s6
  float v249; // s7
  UIWidget_o *v250; // x24
  int methodPointer; // s0
  int klass_high; // s1
  int return_type; // s2
  int invoker_method_high; // s3
  struct System_Collections_Generic_List_UISprite__o *mMultiSecondBattleInformation; // x8
  char v256; // w24
  UnityEngine_GameObject_o *v257; // x23
  QuestBoardListViewItemDraw_c *v258; // x8
  const MethodInfo *v259; // x2
  UnityEngine_Behaviour_o *v260; // x23
  int32_t restrictionDefaultWidth; // w1
  const MethodInfo *v262; // x2
  struct UILabel_o *v263; // x8
  QuestBoardListViewItemDraw_c *v264; // x0
  QuestBoardListViewItemDraw_c *v265; // x0
  int32_t mSpacingX; // w19
  float v267; // s5
  float v268; // s6
  float v269; // s7
  UIWidget_o *mOptionRestrinctionSp; // x23
  int v271; // w19
  QuestPhaseEntity_o *v272; // x0
  QuestPhaseEntity_o *v273; // x23
  struct System_Int32_array *classIds; // x8
  bool v275; // w24
  struct ServantClassIconComponent_array *mClassIcons; // x8
  int max_length; // w19
  struct System_Int32_array *v278; // x20
  int v279; // w21
  int v280; // w9
  __int64 v281; // x22
  __int64 v282; // x8
  UnityEngine_Component_o *v283; // x23
  UnityEngine_Object_o *eventTarget; // x22
  UnityEngine_Object_o *eventTargetComponent; // x22
  ViewEnemyEntity_array *EntityListFromQuestId; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v287; // x22
  QuestBoardListViewItemDraw___c_c *v288; // x0
  struct QuestBoardListViewItemDraw___c_StaticFields *v289; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__307_1; // x23
  Il2CppObject *v291; // x24
  struct QuestBoardListViewItemDraw___c_StaticFields *v292; // x0
  System_String_array **v293; // x2
  System_String_array **v294; // x3
  System_Boolean_array **v295; // x4
  System_Int32_array **v296; // x5
  System_Int32_array *v297; // x6
  System_Int32_array *v298; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v299; // x0
  System_Int32_array *v300; // x22
  UnityEngine_Object_o *alloutRoot; // x21
  UnityEngine_Object_o *alloutRootComponent; // x21
  int32_t v303; // w21
  QuestBoardListViewItemDraw_c *v304; // x0
  int *p_RESTRICTION_FONT_WIDTH_ALLOUT; // x8
  UISprite_o *v306; // x24
  __int64 v307; // x8
  __int64 v308; // x0
  __int64 v309; // x0
  QuestBoardListViewItemDraw_o *v310; // x0
  QuestBoardListViewItem_o *v311; // x1
  const MethodInfo *v312; // x2
  EventCampaignEntity_o *v313; // [xsp+0h] [xbp-130h]
  const MethodInfo *v314; // [xsp+10h] [xbp-120h]
  bool v315; // [xsp+1Ch] [xbp-114h]
  int v316; // [xsp+20h] [xbp-110h]
  int key; // [xsp+24h] [xbp-10Ch]
  DataManager_o *v318; // [xsp+28h] [xbp-108h]
  int32_t questPhase; // [xsp+34h] [xbp-FCh]
  int64_t checkTime; // [xsp+38h] [xbp-F8h]
  int32_t checkTimea; // [xsp+38h] [xbp-F8h]
  QuestBoardListViewItem_o *v322; // [xsp+40h] [xbp-F0h]
  int32_t *v323; // [xsp+40h] [xbp-F0h]
  QuestEntity_o *v324; // [xsp+48h] [xbp-E8h]
  __int64 v325; // [xsp+50h] [xbp-E0h]
  _BOOL4 v326; // [xsp+5Ch] [xbp-D4h]
  bool HasFlag; // [xsp+60h] [xbp-D0h]
  QuestBoardListViewItemDraw_o *v328; // [xsp+60h] [xbp-D0h]
  MethodInfo methoda; // [xsp+68h] [xbp-C8h] BYREF
  UnityEngine_Vector3_o v330; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v331; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v333; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v334; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v335; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v336; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v337; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v338; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v339; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42B18CD & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Array_Empty_object___);
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserQuestRecordMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ViewEnemyMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_B52984(&Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_QuestPhaseDetailEntity_BoardInfo___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B52984(&Method_System_Func_ViewEnemyEntity__int___ctor__);
    sub_B52984(&System_Func_ViewEnemyEntity__int__TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewMultiLimitedFormation___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_B52984(&long_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_UISprite__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_UISprite__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&QuestBoardInformaionText_TypeInfo);
    sub_B52984(&QuestBoardListViewItemDraw_TypeInfo);
    sub_B52984(&QuestBoardListViewManager_TypeInfo);
    sub_B52984(&QuestInformationComponent_TypeInfo);
    sub_B52984(&QuestKnockdownInfo_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B52984(&SingletonTemplate_clsQuestCheck__TypeInfo);
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    sub_B52984(&Method_QuestBoardListViewItemDraw___c__SetItemOfQuest_b__307_1__);
    sub_B52984(&Method_QuestBoardListViewItemDraw___c__DisplayClass307_0__SetItemOfQuest_b__0__);
    sub_B52984(&QuestBoardListViewItemDraw___c__DisplayClass307_0_TypeInfo);
    sub_B52984(&QuestBoardListViewItemDraw___c_TypeInfo);
    sub_B52984(&StringLiteral_13505/*"TIME_REST_QUEST_BOARD_QUEST"*/);
    sub_B52984(&StringLiteral_21814/*"questboard_challenge"*/);
    sub_B52984(&StringLiteral_10980/*"QUEST_BOARD_KNOCKDOWN_PLUS"*/);
    sub_B52984(&StringLiteral_10977/*"QUEST_BOARD_KNOCKDOWN_COUNT"*/);
    sub_B52984(&StringLiteral_23682/*"{0:#,0}"*/);
    sub_B52984(&StringLiteral_10979/*"QUEST_BOARD_KNOCKDOWN_DAMAGE_NAME"*/);
    sub_B52984(&StringLiteral_10978/*"QUEST_BOARD_KNOCKDOWN_DAMAGE"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_21815/*"questboard_crushing"*/);
    byte_42B18CD = 1;
  }
  *(_QWORD *)&methoda.slot = 0LL;
  LOBYTE(methoda.flags) = 0;
  LOBYTE(methoda.token) = 0;
  memset(&methoda.klass, 0, 37);
  v5 = sub_B52A54(QuestBoardListViewItemDraw___c__DisplayClass307_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass307_0___ctor(
    (QuestBoardListViewItemDraw___c__DisplayClass307_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_607;
  *(_QWORD *)(v5 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !questBoardItem )
    goto LABEL_607;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_607;
  v15 = (DataManager_o *)Instance;
  Instance = (__int64)MapControl_QuestInfo__GetMine(questBoardItem->fields._quest_info_k__BackingField, 0LL);
  if ( !Instance )
    goto LABEL_607;
  PhaseDetailedEntity = QuestEntity__GetPhaseDetailedEntity((QuestEntity_o *)Instance, 0LL);
  Instance = MapControl_QuestInfo__GetQuestType(quest_info_k__BackingField, 0LL);
  if ( !v15 )
    goto LABEL_607;
  v17 = Instance;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        v15,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !PhaseDetailedEntity )
    goto LABEL_607;
  if ( !Instance )
    goto LABEL_607;
  Instance = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Instance, PhaseDetailedEntity->fields.id, 0LL);
  mListViewObject = this->fields.mListViewObject;
  key = Instance;
  if ( !mListViewObject )
    goto LABEL_607;
  Instance = (__int64)mListViewObject->fields.manager;
  if ( !Instance )
    goto LABEL_607;
  v19 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v19
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v19 - 8) != QuestBoardListViewManager_TypeInfo )
  {
    Instance = sub_B52D50(Instance);
    goto LABEL_611;
  }
  dispType = quest_info_k__BackingField->fields.dispType;
  checkTime = *(_QWORD *)(Instance + 568);
  HasFlag = QuestEntity__HasFlag(PhaseDetailedEntity, 2LL, 0LL);
  v322 = questBoardItem;
  if ( dispType == 2 )
    *(UnityEngine_Color_o *)&v21 = UnityEngine_Color__get_gray(0LL);
  else
    *(UnityEngine_Color_o *)&v21 = UnityEngine_Color__get_white(0LL);
  *(_DWORD *)(v5 + 24) = v21;
  *(_DWORD *)(v5 + 28) = v22;
  *(_DWORD *)(v5 + 32) = v23;
  *(_DWORD *)(v5 + 36) = v24;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              v15,
                                                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_607;
  UserQuestMaster__TryGetEntity(
    MasterData_WarQuestSelectionMaster,
    (UserQuestEntity_o **)&methoda.slot,
    Instance,
    PhaseDetailedEntity->fields.id,
    0LL);
  LOBYTE(methoda.flags) = 0;
  LOBYTE(methoda.token) = 0;
  BYTE4(methoda.genericContainerHandle) = 0;
  Instance = (__int64)MapControl_QuestInfo__GetMine(quest_info_k__BackingField, 0LL);
  if ( !Instance )
    goto LABEL_607;
  v326 = QuestEntity__HasFlag((QuestEntity_o *)Instance, 0x10000000000000LL, 0LL);
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v324 = PhaseDetailedEntity;
  Instance = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_607;
  v26 = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, quest_info_k__BackingField->fields.questId, 0, 0LL);
  v27 = quest_info_k__BackingField->fields.questPhase;
  v28 = v26;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0LL);
  Instance = UnityEngine_Mathf__Min_41525188(v27 + 1, PhaseMax, 0LL);
  mLabelObj = this->fields.mLabelObj;
  questPhase = Instance;
  if ( !mLabelObj )
    goto LABEL_607;
  UnityEngine_GameObject__SetActive(mLabelObj, 1, 0LL);
  Instance = (__int64)this->fields.mLabelNameSp;
  if ( !Instance )
    goto LABEL_607;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_607;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mLabelChapterSp;
  if ( !Instance )
    goto LABEL_607;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_607;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mLabelFaceMaskShortcutSp;
  if ( !Instance )
    goto LABEL_607;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_607;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mLabelFaceMaskQuestSp;
  if ( !Instance )
    goto LABEL_607;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_607;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.mTitleObj;
  if ( !Instance )
    goto LABEL_607;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.mTitleShortcutLb;
  if ( !Instance )
    goto LABEL_607;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_607;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mAdvanceNoticeObj;
  if ( !Instance )
    goto LABEL_607;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mOverwriteAdvanceNoticeObj;
  if ( !Instance )
    goto LABEL_607;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mOptionObj;
  if ( !Instance )
    goto LABEL_607;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.mRewardObj;
  if ( !Instance )
    goto LABEL_607;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_607;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_607;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mCondObject;
  if ( !Instance )
    goto LABEL_607;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  OverwriteBannerId_k__BackingField = v322->fields._OverwriteBannerId_k__BackingField;
  v325 = v5;
  v318 = v15;
  if ( OverwriteBannerId_k__BackingField < 1 )
  {
    if ( v324->fields.bannerId < 1 )
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
        v135 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 1032LL);
        if ( !v135 )
          goto LABEL_607;
        if ( v17 < *(_DWORD *)(v135 + 24) )
        {
          v136 = *(System_String_o **)(v135 + 8LL * (int)v17 + 32);
          v137 = System_Int32__ToString((int)v324 + 60, 0LL);
          v138 = System_String__Concat_44568316(v136, v137, 0LL);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetBanner(mcBaseP, v138, 0LL);
          goto LABEL_60;
        }
      }
      else
      {
        if ( !mcBaseP )
          goto LABEL_607;
        UISprite__set_atlas(this->fields.mcBaseP, this->fields.mTerminalAtlas, 0LL);
        v306 = this->fields.mcBaseP;
        Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
        }
        v307 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 1032LL);
        if ( !v307 )
          goto LABEL_607;
        if ( v17 < *(_DWORD *)(v307 + 24) )
        {
          if ( !v306 )
            goto LABEL_607;
          UISprite__set_spriteName(v306, *(System_String_o **)(v307 + 8LL * (int)v17 + 32), 0LL);
          goto LABEL_60;
        }
      }
LABEL_609:
      v309 = sub_B52A88(Instance);
      sub_B52A28(v309, 0LL);
    }
    v36 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v36 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_SPNAME_PREFIX = v36->static_fields->QUEST_BOARD_SPNAME_PREFIX;
    v34 = System_Int32__ToString((int)v324 + 64, 0LL);
    v35 = QUEST_BOARD_SPNAME_PREFIX;
  }
  else
  {
    v32 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v32 = QuestBoardListViewItemDraw_TypeInfo;
      OverwriteBannerId_k__BackingField = v322->fields._OverwriteBannerId_k__BackingField;
    }
    v33 = v32->static_fields->QUEST_BOARD_SPNAME_PREFIX;
    LODWORD(methoda.rgctx_data) = OverwriteBannerId_k__BackingField;
    v34 = System_Int32__ToString((int32_t)&methoda.rgctx_data, 0LL);
    v35 = v33;
  }
  v38 = System_String__Concat_44568316(v35, v34, 0LL);
  p_mcBaseP = &this->fields.mcBaseP;
  v39 = this->fields.mcBaseP;
  v41 = v38;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = AtlasManager__SetEventUI(v39, v41, 0LL);
  if ( !v39 )
    goto LABEL_607;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v39, Instance & 1, 0LL);
LABEL_60:
  Instance = (__int64)*p_mcBaseP;
  if ( !*p_mcBaseP )
    goto LABEL_607;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 840LL))(
    Instance,
    *(_QWORD *)(*(_QWORD *)Instance + 848LL));
  Instance = (__int64)*p_mcBaseP;
  if ( !*p_mcBaseP )
    goto LABEL_607;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_607;
  Instance = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                        (UnityEngine_GameObject_o *)Instance,
                        (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Instance )
    goto LABEL_607;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v5 + 24), 0LL);
  if ( MapControl_QuestInfo__GetQuestType(quest_info_k__BackingField, 0LL) == 1
    && MapControl_QuestInfo__IsDisaplayable(quest_info_k__BackingField, 0LL) )
  {
    Instance = (__int64)MapControl_QuestInfo__GetMine(quest_info_k__BackingField, 0LL);
    if ( !Instance )
      goto LABEL_607;
    if ( !QuestEntity__HasFlag((QuestEntity_o *)Instance, 0x400000000000LL, 0LL) )
    {
      questId = quest_info_k__BackingField->fields.questId;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( !CondType__IsQuestClear_25987760(questId, -1, 1, 0LL) )
        goto LABEL_73;
    }
  }
  if ( MapControl_QuestInfo__IsDisplayQuestNextIcon(quest_info_k__BackingField, 0LL) )
  {
LABEL_73:
    Instance = (__int64)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_607;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_607;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    Instance = (__int64)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_607;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    v45 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v45 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionX(gameObject, v45->static_fields->NEXT_POS_X_QUEST, 0LL);
    Instance = (__int64)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_607;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_607;
    Instance = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          (UnityEngine_GameObject_o *)Instance,
                          (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( !Instance )
      goto LABEL_607;
    NEXT_POS_X_QUEST = QuestBoardListViewItemDraw_TypeInfo->static_fields->NEXT_POS_X_QUEST;
    *(float *)(Instance + 120) = NEXT_POS_X_QUEST;
    *(float *)(Instance + 132) = NEXT_POS_X_QUEST;
  }
  v316 = v28 && !v326;
  v47 = !v28 || v326;
  if ( dispType != 2 || !v47 )
  {
    if ( quest_info_k__BackingField->fields.isNew )
    {
      v48 = 1;
    }
    else
    {
      if ( (v316 & 1) == 0 )
        goto LABEL_89;
      v48 = 2;
    }
    QuestBoardListViewItemDraw__SetStatusActive(this, v48, 1, v43);
  }
LABEL_89:
  if ( quest_info_k__BackingField->fields.pickupPriority >= 1 )
    QuestBoardListViewItemDraw__SetStatusActive(this, 4, 1, v43);
  QuestBoardListViewItemDraw__SetPickupIcon(this, (const MethodInfo *)size);
  Instance = (__int64)this->fields.mNextSp;
  if ( !Instance )
    goto LABEL_607;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_607;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    v50 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v50 = QuestBoardListViewItemDraw_TypeInfo;
    }
    static_fields = v50->static_fields;
    x = static_fields->NEW_POS_QUEST_NEXT.fields.x;
    y = static_fields->NEW_POS_QUEST_NEXT.fields.y;
    z = static_fields->NEW_POS_QUEST_NEXT.fields.z;
LABEL_103:
    QuestBoardListViewItemDraw__SetNewIcon(
      this,
      *(UnityEngine_Vector3_o *)&x,
      static_fields->NEW_W_DEFAULT,
      static_fields->NEW_H_DEFAULT,
      v49);
    v57 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
    v58 = v57->PREV_POS_QUEST_NEXT.fields.x;
    v59 = v57->PREV_POS_QUEST_NEXT.fields.y;
    v60 = v57->PREV_POS_QUEST_NEXT.fields.z;
    goto LABEL_104;
  }
  v55 = QuestBoardListViewItemDraw_TypeInfo;
  if ( quest_info_k__BackingField->fields.pickupPriority >= 1 )
  {
    if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v55 = QuestBoardListViewItemDraw_TypeInfo;
    }
    static_fields = v55->static_fields;
    x = static_fields->NEW_POS_QUEST.fields.x;
    y = static_fields->NEW_POS_QUEST.fields.y;
    z = static_fields->NEW_POS_QUEST.fields.z;
    goto LABEL_103;
  }
  if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v55 = QuestBoardListViewItemDraw_TypeInfo;
  }
  QuestBoardListViewItemDraw__SetNewIcon(
    this,
    v55->static_fields->NEW_POS_QUEST,
    v55->static_fields->NEW_W_DEFAULT,
    v55->static_fields->NEW_H_DEFAULT,
    v49);
  v130 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  v58 = v130->PREV_POS_QUEST.fields.x;
  v59 = v130->PREV_POS_QUEST.fields.y;
  v60 = v130->PREV_POS_QUEST.fields.z;
LABEL_104:
  QuestBoardListViewItemDraw__SetPrevSprite(this, v324, *(UnityEngine_Vector3_o *)&v58, v56);
  if ( dispType != 2
    && quest_info_k__BackingField->fields.isNew
    && quest_info_k__BackingField->fields.pickupPriority >= 1 )
  {
    QuestBoardListViewItemDraw__SetStatusToggle(this, v61);
  }
  Instance = (__int64)QuestBoardListViewItemDraw__GetStatusSp(this, 2, v62);
  if ( !Instance )
    goto LABEL_607;
  v63 = (UnityEngine_GameObject_o *)Instance;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    v64 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v64 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v63, v64->static_fields->CLEAR_POS_QUEST, 0LL);
  }
  Instance = (__int64)this->fields.mNoBattleObj;
  if ( !Instance )
    goto LABEL_607;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, HasFlag, 0LL);
  Instance = (__int64)this->fields.mNoBattleObj;
  if ( !Instance )
    goto LABEL_607;
  Instance = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                        (UnityEngine_GameObject_o *)Instance,
                        (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Instance )
    goto LABEL_607;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v5 + 24), 0LL);
  RecommendLv = QuestBoardListViewItemDraw__GetRecommendLv(v65, v324, questPhase, !HasFlag, dispType == 2, v66);
  QuestBoardListViewItemDraw__SetRecommendLv(this, RecommendLv, *(UnityEngine_Color_o *)(v5 + 24), v68);
  mLabelFaceMaskQuestSp = this->fields.mLabelFaceMaskQuestSp;
  v315 = !HasFlag;
  v71 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v71 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  }
  y_low = LODWORD(v71->fields.mTitleLevelSp[1].fields.mOldV0.fields.y);
  FaceMaskSpriteName = QuestBoardListViewItemDraw__GetFaceMaskSpriteName(v71, v17, v69);
  v74 = v324;
  v76 = QuestBoardListViewItemDraw__SetFaceImage(
          this,
          v324,
          mLabelFaceMaskQuestSp,
          y_low,
          FaceMaskSpriteName,
          *(UnityEngine_Color_o *)(v325 + 24),
          v75);
  mTitleNameLb = this->fields.mTitleNameLb;
  if ( v76 )
  {
    Instance = (__int64)QuestBoardListViewItemDraw__GetDispQuestName(this, v324, v17, v77);
    if ( !mTitleNameLb )
      goto LABEL_607;
    UILabel__set_text(mTitleNameLb, (System_String_o *)Instance, 0LL);
    v80 = v325;
    goto LABEL_142;
  }
  Instance = (__int64)QuestEntity__getQuestName(v324, 0LL);
  if ( !mTitleNameLb )
    goto LABEL_607;
  UILabel__set_text(mTitleNameLb, (System_String_o *)Instance, 0LL);
  if ( v17 != 1 || !QuestBoardListViewItemDraw__IsMainWar(v81, quest_info_k__BackingField->fields.warId, v82) )
  {
    Instance = (__int64)this->fields.boardIconTexture;
    if ( !Instance )
      goto LABEL_607;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0LL);
    Instance = (__int64)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_607;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_607;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    mLabelNameSp = this->fields.mLabelNameSp;
    QuestIconName = QuestBoardListViewItemDraw__GetQuestIconName(v85, v324, v17, v86);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    Instance = AtlasManager__SetEventUI(mLabelNameSp, QuestIconName, 0LL);
    if ( !mLabelNameSp )
      goto LABEL_607;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLabelNameSp, Instance & 1, 0LL);
    Instance = (__int64)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_607;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 840LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 848LL));
    Instance = (__int64)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_607;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_607;
    Instance = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          (UnityEngine_GameObject_o *)Instance,
                          (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !Instance )
      goto LABEL_607;
    v80 = v325;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v325 + 24), 0LL);
    Instance = (__int64)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_607;
    if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Instance, 0LL) )
    {
      *(_DWORD *)(v325 + 40) = v324->fields.id;
      v88 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(
        v88,
        (Il2CppObject *)v325,
        Method_QuestBoardListViewItemDraw___c__DisplayClass307_0__SetItemOfQuest_b__0__,
        0LL);
      QuestBoardListViewItemDraw__LoadBoardIconTexture(this, v324, v88, v89);
    }
LABEL_142:
    if ( dispType == 2 )
      goto LABEL_143;
    goto LABEL_144;
  }
  v80 = v325;
  if ( dispType == 2 )
  {
LABEL_143:
    QuestBoardListViewItemDraw__SetAdvanceNoticeText(this, quest_info_k__BackingField, v324, checkTime, v79);
    goto LABEL_146;
  }
  QuestBoardListViewItemDraw__SetChapterSubIdDisp(this, quest_info_k__BackingField, v83);
LABEL_144:
  Instance = (__int64)this->fields.mAdvanceNoticeLb;
  if ( !Instance )
    goto LABEL_607;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
LABEL_146:
  Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
  v90 = this->fields.mTitleNameLb;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  }
  if ( !v90 )
    goto LABEL_607;
  UILabel__SetCondensedScale(v90, QuestBoardListViewItemDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH, 0LL);
  Instance = (__int64)this->fields.mTitleNameLb;
  if ( !Instance )
    goto LABEL_607;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v80 + 24), 0LL);
  QuestBoardListViewItemDraw__SetupRewardIconDisp(this, v324, dispType == 2, *(UnityEngine_Color_o *)(v80 + 24), v91);
  v92 = quest_info_k__BackingField->fields.questId;
  afterClear = v324->fields.afterClear;
  v94 = *(float *)(v80 + 24);
  v95 = *(float *)(v80 + 28);
  v96 = *(float *)(v80 + 32);
  v97 = *(float *)(v80 + 36);
  IsRepeatReward = QuestEntity__IsRepeatReward(v324, 0LL);
  v334.fields.r = v94;
  v334.fields.g = v95;
  v334.fields.b = v96;
  v334.fields.a = v97;
  QuestBoardListViewItemDraw__SetupFirstRewardDisp(this, v92, afterClear, v334, IsRepeatReward, v99);
  QuestBoardListViewItemDraw__SetupRewardGotAndNotGiveDisp(
    this,
    quest_info_k__BackingField,
    *(UserQuestEntity_o **)&methoda.slot,
    *(UnityEngine_Color_o *)(v80 + 24),
    v100);
  if ( *(_QWORD *)&methoda.slot && UserQuestEntity__HasStatus(*(UserQuestEntity_o **)&methoda.slot, 8, 0LL) )
  {
    Instance = (__int64)quest_info_k__BackingField->fields._WarInfo_k__BackingField;
    if ( !Instance )
      goto LABEL_607;
    Instance = (__int64)MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_607;
    v101 = !WarEntity__IsShop((WarEntity_o *)Instance, 0LL);
    v102 = 1;
  }
  else
  {
    v102 = 0;
    v101 = 0;
  }
  Instance = (__int64)this->fields.mRarePrismSp;
  if ( !Instance )
    goto LABEL_607;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_607;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v101, 0LL);
  QuestBoardListViewItemDraw__ResetInfoTextList(this, v103);
  *(const void **)((char *)&methoda.methodMetadataHandle + 4) = (const void *)0xFFFFFFFFLL;
  mInfoTextList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields.mInfoTextList;
  Instance = (__int64)QuestBoardListViewItemDraw__GetCampaignText(
                        this,
                        v324->fields.id,
                        questPhase,
                        v47,
                        (int32_t *)&methoda.genericMethod,
                        (int32_t *)&methoda.methodMetadataHandle + 1,
                        v105);
  if ( !mInfoTextList )
    goto LABEL_607;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    mInfoTextList,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
  Instance = (__int64)this->fields.mRarePrismSp;
  if ( !Instance )
    goto LABEL_607;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_607;
  Instance = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( v102 | Instance & 1 )
  {
    Instance = *(_QWORD *)&methoda.slot;
    if ( !*(_QWORD *)&methoda.slot )
      goto LABEL_607;
    Instance = UserQuestEntity__IsExpireNoLimit(*(UserQuestEntity_o **)&methoda.slot, 0LL);
    if ( (Instance & 1) != 0 )
      goto LABEL_175;
    if ( !*(_QWORD *)&methoda.slot )
      goto LABEL_607;
    p_endTime = (int64_t *)(*(_QWORD *)&methoda.slot + 64LL);
  }
  else
  {
    p_endTime = &quest_info_k__BackingField->fields.endTime;
  }
  v107 = *p_endTime;
  if ( *p_endTime >= 1 )
  {
    Instance = QuestEntity__HasFlag(v324, 32LL, 0LL);
    if ( (Instance & 1) == 0 )
    {
      v108 = this->fields.mInfoTextList;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v109 = LocalizationManager__Get((System_String_o *)StringLiteral_13505/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0LL);
      v110 = (QuestBoardInformaionText_o *)sub_B52A54(QuestBoardInformaionText_TypeInfo);
      v335.fields.r = 0.0;
      v335.fields.g = 0.0;
      v335.fields.b = 0.0;
      v335.fields.a = 0.0;
      v333.fields.x = 0.0;
      v333.fields.y = 0.0;
      v333.fields.z = 0.0;
      v111 = (EventMissionProgressRequest_Argument_ProgressData_o *)v110;
      QuestBoardInformaionText___ctor(v110, v109, v107, 0, 0, v335, -1, 0, v333, 1, v313, 0LL, v314);
      if ( !v108 )
        goto LABEL_607;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v108,
        v111,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
      v74 = v324;
    }
  }
LABEL_175:
  v112 = this->fields.mInfoTextList;
  if ( !v112 )
    goto LABEL_607;
  size = (unsigned int)v112->fields._size;
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  if ( (int)size < 1 )
  {
    v118 = 0;
    goto LABEL_187;
  }
  v114 = this->fields.mListViewObject;
  if ( !v114 )
    goto LABEL_607;
  Instance = (__int64)v114->fields.manager;
  if ( !Instance )
    goto LABEL_607;
  v115 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v115
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v115 - 8) != QuestBoardListViewManager_TypeInfo )
  {
LABEL_611:
    v310 = (QuestBoardListViewItemDraw_o *)sub_B52D50(Instance);
    QuestBoardListViewItemDraw__SetItemOfWarBoard(v310, v311, v312);
    return;
  }
  AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt((QuestBoardListViewManager_o *)Instance, size, 0LL);
  if ( v112->fields._size <= (unsigned int)AlphaAnimCnt )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  Instance = (__int64)v112->fields._items->m_Items[AlphaAnimCnt];
  if ( !Instance )
    goto LABEL_607;
  QuestBoardInformaionText__SetTime(
    (QuestBoardInformaionText_o *)Instance,
    &this->fields.mOptionInfoLb,
    &this->fields.mOptionInfoFrameSp,
    v116);
  Instance = (__int64)this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_607;
  BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)Instance, 1.0, 0LL);
  v118 = 1;
  quest_info_k__BackingField->fields.costCalcVal = (int32_t)methoda.genericMethod;
  quest_info_k__BackingField->fields._fixedCostVal_k__BackingField = HIDWORD(methoda.methodMetadataHandle);
LABEL_187:
  Instance = (__int64)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_607;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_607;
  Instance = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_607;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_607;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v118, 0LL);
  Instance = (__int64)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_607;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_607;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v118, 0LL);
  QuestBoardListViewItemDraw__SetCostDisp(
    this,
    v74,
    dispType == 2,
    (int32_t)methoda.genericMethod,
    SHIDWORD(methoda.methodMetadataHandle),
    *(UnityEngine_Color_o *)(v80 + 24),
    (bool *)&methoda.flags,
    (bool *)&methoda.token,
    (bool *)&methoda.genericContainerHandle + 4,
    (const MethodInfo *)v313);
  v120 = v322->fields._OverwriteBannerId_k__BackingField;
  if ( v120 >= 1 )
  {
    mCostApSp = this->fields.mCostApSp;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    }
    ApSpriteFileName = QuestBoardListViewItemDraw__GetApSpriteFileName(v120, v119);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    Instance = AtlasManager__SetEventUI(mCostApSp, ApSpriteFileName, 0LL);
    if ( !mCostApSp )
      goto LABEL_607;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mCostApSp, Instance & 1, 0LL);
  }
  mChallengeObj = this->fields.mChallengeObj;
  if ( HasFlag
    || (Instance = QuestEntity__HasFlag(v74, 0x4000LL, 0LL), (Instance & 1) != 0)
    || (Instance = QuestEntity__HasFlag(v74, 4LL, 0LL), (Instance & 1) == 0) )
  {
    size = 0LL;
    if ( !mChallengeObj )
      goto LABEL_607;
  }
  else
  {
    size = v74->fields.afterClear != 1;
    if ( !mChallengeObj )
      goto LABEL_607;
  }
  UnityEngine_GameObject__SetActive(mChallengeObj, size, 0LL);
  Instance = (__int64)this->fields.mChallengeObj;
  if ( !Instance )
    goto LABEL_607;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    v124 = QuestBoardListViewItemDraw_TypeInfo;
    if ( LOBYTE(methoda.flags) )
    {
      if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v124 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v125 = v124->static_fields;
      p_x = &v125->CHALLENGE_OBJ_POS_DOUBLE.fields.x;
      p_y = &v125->CHALLENGE_OBJ_POS_DOUBLE.fields.y;
      p_z = &v125->CHALLENGE_OBJ_POS_DOUBLE.fields.z;
    }
    else
    {
      if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v124 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v131 = v124->static_fields;
      p_x = &v131->CHALLENGE_OBJ_POS_SINGLE.fields.x;
      p_y = &v131->CHALLENGE_OBJ_POS_SINGLE.fields.y;
      p_z = &v131->CHALLENGE_OBJ_POS_SINGLE.fields.z;
    }
    v330.fields.y = *p_y;
    v330.fields.x = *p_x;
    v330.fields.z = *p_z;
    GameObjectExtensions__SetLocalPosition(this->fields.mChallengeObj, v330, 0LL);
    Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          v318,
                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !Instance )
      goto LABEL_607;
    Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      key,
                                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    Instance = QuestEntity__HasFlag(v74, 4LL, 0LL);
    if ( (Instance & 1) == 0 )
      goto LABEL_614;
    if ( !Entity )
      goto LABEL_607;
    if ( EventDetailEntity__isRaidDefeatCount(Entity, 0LL) )
    {
      if ( *(_QWORD *)&methoda.slot )
        ClearNum = UserQuestEntity__getClearNum(*(UserQuestEntity_o **)&methoda.slot, 0LL);
      else
        ClearNum = 0;
      challengeStrSpr = this->fields.challengeStrSpr;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventUI(challengeStrSpr, (System_String_o *)StringLiteral_21815/*"questboard_crushing"*/, 0LL);
    }
    else
    {
LABEL_614:
      if ( *(_QWORD *)&methoda.slot )
        ClearNum = *(_DWORD *)(*(_QWORD *)&methoda.slot + 56LL);
      else
        ClearNum = 0;
      Instance = (__int64)this->fields.challengeStrSpr;
      if ( !Instance )
        goto LABEL_607;
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_21814/*"questboard_challenge"*/, 0LL);
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
      goto LABEL_607;
    UILabel__set_text(mChallengeLb, (System_String_o *)Instance, 0LL);
    Instance = (__int64)this->fields.challengeStrSpr;
    if ( !Instance )
      goto LABEL_607;
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
    goto LABEL_607;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v80 + 24), 0LL);
  Instance = (__int64)this->fields.mChallengeObj;
  if ( !Instance )
    goto LABEL_607;
  if ( (mPhaseObj = this->fields.mPhaseObj,
        Instance = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL),
        (Instance & 1) != 0)
    || (Instance = QuestEntity__HasFlag(v74, 0x4000LL, 0LL), (Instance & 1) != 0)
    || (Instance = QuestEntity__HasFlag(v74, 0x10000LL, 0LL), (Instance & 1) != 0)
    || dispType == 2 && (Instance = QuestEntity__HasFlag(v74, 512LL, 0LL), (Instance & 1) != 0)
    || (Instance = QuestEntity__HasFlag(v74, 0x4000000LL, 0LL), (Instance & 1) != 0) )
  {
    size = 0LL;
  }
  else
  {
    Instance = QuestEntity__HasFlag(v74, 0x2000000000LL, 0LL);
    size = !v326 & ~(_DWORD)Instance & 1;
  }
  checkTimea = dispType;
  v323 = (int32_t *)quest_info_k__BackingField;
  if ( !mPhaseObj )
    goto LABEL_607;
  UnityEngine_GameObject__SetActive(mPhaseObj, size, 0LL);
  Instance = (__int64)this->fields.mPhaseObj;
  v328 = this;
  if ( !Instance )
    goto LABEL_607;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    QuestBoardListViewItemDraw__InitPhase(
      this,
      methoda.flags,
      methoda.token,
      SBYTE4(methoda.genericContainerHandle),
      v142);
    v143 = v324->fields.afterClear;
    Instance = MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0LL);
    v144 = QuestBoardListViewItemDraw_TypeInfo;
    v145 = Instance;
    v146 = WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr);
    if ( (v146 & 0x400) != 0 )
    {
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v144 = QuestBoardListViewItemDraw_TypeInfo;
        v146 = WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr);
      }
      v147 = v146 & 0x400;
    }
    else
    {
      v147 = 0;
    }
    v148 = v144->static_fields;
    PHASE_NORMAL_MAX = v148->PHASE_NORMAL_MAX;
    v150 = v145 > PHASE_NORMAL_MAX;
    if ( v147 && !v144->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v144);
      v144 = QuestBoardListViewItemDraw_TypeInfo;
      v148 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
      PHASE_NORMAL_MAX = v148->PHASE_NORMAL_MAX;
      v147 = WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400;
    }
    v151 = v143 == 2 && dispType != 2;
    if ( v145 <= PHASE_NORMAL_MAX )
    {
      if ( v147 && !v144->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v144);
        v144 = QuestBoardListViewItemDraw_TypeInfo;
        v148 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
      }
      p_QUEST_BOARD_PHASE_INTERVAL = &v148->QUEST_BOARD_PHASE_INTERVAL;
    }
    else
    {
      if ( v147 && !v144->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v144);
        v144 = QuestBoardListViewItemDraw_TypeInfo;
        v148 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
      }
      p_QUEST_BOARD_PHASE_INTERVAL = &v148->QUEST_BOARD_PHASE_EX_INTERVAL;
    }
    v153 = 0;
    v154 = v145 - 1;
    v155 = checkTimea == 2 && v143 == 5;
    v156 = -*p_QUEST_BOARD_PHASE_INTERVAL;
    v157 = v143 - 3;
    while ( 1 )
    {
      if ( (BYTE3(v144->vtable._0_Equals.methodPtr) & 4) != 0 && !v144->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v144);
        v144 = QuestBoardListViewItemDraw_TypeInfo;
      }
      if ( v153 >= v144->static_fields->PHASE_EXTRA_MAX )
        break;
      mPhaseSp = v328->fields.mPhaseSp;
      if ( !mPhaseSp )
        goto LABEL_607;
      if ( v153 >= mPhaseSp->max_length )
        goto LABEL_609;
      v159 = &mPhaseSp->obj.klass + v153;
      v160 = (UISprite_o *)v159[4];
      if ( !v160 )
        goto LABEL_607;
      Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v159[4], 0LL);
      if ( !Instance )
        goto LABEL_607;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v153 < v145, 0LL);
      if ( v153 < v145 )
      {
        v162 = !v326 && v153 < v323[11];
        PhaseArrowSpriteName = QuestBoardListViewItemDraw__GetPhaseArrowSpriteName(
                                 (QuestBoardListViewItemDraw_o *)Instance,
                                 v150,
                                 v162,
                                 v154 == v153,
                                 v151,
                                 (v154 == v153) & (unsigned __int8)(v157 < 2),
                                 v161);
        UISprite__set_spriteName(v160, PhaseArrowSpriteName, 0LL);
        if ( v155 )
          *(UnityEngine_Color_o *)&v164 = UnityEngine_Color__get_gray(0LL);
        else
          *(UnityEngine_Color_o *)&v164 = UnityEngine_Color__get_white(0LL);
        UIWidget__set_color((UIWidget_o *)v160, *(UnityEngine_Color_o *)&v164, 0LL);
        PhaseArrowIntervalSize = QuestBoardListViewItemDraw__GetPhaseArrowIntervalSize(
                                   v168,
                                   v150,
                                   v154 == v153 && v157 < 2,
                                   v169);
        Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v160, 0LL);
        if ( !Instance )
          goto LABEL_607;
        v156 += PhaseArrowIntervalSize;
        v331.fields.x = (float)v156;
        v331.fields.y = 0.0;
        v331.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v331, 0LL);
        Instance = ((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v160->klass->vtable._33_MakePixelPerfect.method)(
                     v160,
                     v160->klass->vtable._34_get_minWidth.methodPtr);
      }
      v144 = QuestBoardListViewItemDraw_TypeInfo;
      ++v153;
    }
  }
  v171 = v328;
  Instance = (__int64)v328->fields.mDamageRecordSp;
  if ( !Instance )
    goto LABEL_607;
  v172 = v324;
  v173 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  Instance = QuestEntity__HasFlag(v324, 0x4000000LL, 0LL);
  if ( !v173 )
    goto LABEL_607;
  UnityEngine_GameObject__SetActive(v173, Instance & 1, 0LL);
  Instance = (__int64)v328->fields.mDamageRecordSp;
  if ( !Instance )
    goto LABEL_607;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_607;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    v174 = QuestBoardListViewItemDraw_TypeInfo;
    mDamageRecordSp = v328->fields.mDamageRecordSp;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v174 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_DAMAGE_RECODE_NAME = v174->static_fields->QUEST_BOARD_DAMAGE_RECODE_NAME;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetBanner(mDamageRecordSp, QUEST_BOARD_DAMAGE_RECODE_NAME, 0LL);
    v177 = (UserQuestRecordMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        v318,
                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserQuestRecordMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    if ( !v177 )
      goto LABEL_607;
    MaxTurnDamage = (void (__fastcall *)())UserQuestRecordMaster__GetMaxTurnDamage(v177, Instance, v324->fields.id, 0LL);
    mDamageRecordLb = v328->fields.mDamageRecordLb;
    methoda.methodPointer = MaxTurnDamage;
    v180 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &methoda);
    Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_23682/*"{0:#,0}"*/, v180, 0LL);
    if ( !mDamageRecordLb )
      goto LABEL_607;
    UILabel__set_text(mDamageRecordLb, (System_String_o *)Instance, 0LL);
    Instance = (__int64)v328->fields.mDamageRecordSp;
    if ( !Instance )
      goto LABEL_607;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v325 + 24), 0LL);
    Instance = (__int64)v328->fields.mDamageRecordLb;
    if ( !Instance )
      goto LABEL_607;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v325 + 24), 0LL);
  }
  Instance = (__int64)v328->fields.mKnockdownRecordSp;
  if ( !Instance )
    goto LABEL_607;
  v181 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  Instance = QuestEntity__HasFlag(v324, 0x2000000000LL, 0LL);
  if ( !v181 )
    goto LABEL_607;
  UnityEngine_GameObject__SetActive(v181, Instance & 1, 0LL);
  Instance = (__int64)v328->fields.mKnockdownRecordSp;
  if ( !Instance )
    goto LABEL_607;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_607;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    v182 = QuestBoardListViewItemDraw_TypeInfo;
    mKnockdownRecordSp = v328->fields.mKnockdownRecordSp;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v182 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_KNOCKDOWN_RECODE_NAME = v182->static_fields->QUEST_BOARD_KNOCKDOWN_RECODE_NAME;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetBanner(mKnockdownRecordSp, QUEST_BOARD_KNOCKDOWN_RECODE_NAME, 0LL);
    v185 = sub_B52A54(QuestKnockdownInfo_TypeInfo);
    QuestKnockdownInfo___ctor((QuestKnockdownInfo_o *)v185, 0LL);
    v186 = (UserQuestRecordMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        v318,
                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserQuestRecordMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    if ( !v186 )
      goto LABEL_607;
    UserQuestRecordMaster__GetKnockdownRecordinfo(v186, Instance, v324->fields.id, (QuestKnockdownInfo_o *)v185, 0LL);
    mKnockdownRecordCountLb = v328->fields.mKnockdownRecordCountLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10977/*"QUEST_BOARD_KNOCKDOWN_COUNT"*/, 0LL);
    if ( !v185 )
      goto LABEL_607;
    v188 = (System_String_o *)Instance;
    methoda.methodPointer = *(Il2CppMethodPointer *)(v185 + 16);
    v189 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &methoda);
    Instance = (__int64)System_String__Format(v188, v189, 0LL);
    if ( !mKnockdownRecordCountLb )
      goto LABEL_607;
    UILabel__set_text(mKnockdownRecordCountLb, (System_String_o *)Instance, 0LL);
    mKnockdownRecordDamageLb = v328->fields.mKnockdownRecordDamageLb;
    v191 = LocalizationManager__Get((System_String_o *)StringLiteral_10978/*"QUEST_BOARD_KNOCKDOWN_DAMAGE"*/, 0LL);
    methoda.name = *(const char **)(v185 + 24);
    v192 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &methoda.name);
    Instance = (__int64)System_String__Format(v191, v192, 0LL);
    if ( !mKnockdownRecordDamageLb )
      goto LABEL_607;
    UILabel__set_text(mKnockdownRecordDamageLb, (System_String_o *)Instance, 0LL);
    mKnockdownRecordPlusLb = v328->fields.mKnockdownRecordPlusLb;
    v194 = LocalizationManager__Get((System_String_o *)StringLiteral_10980/*"QUEST_BOARD_KNOCKDOWN_PLUS"*/, 0LL);
    v195 = (_QWORD **)Method_System_Array_Empty_object___;
    v196 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
    v197 = *(_WORD *)(v196 + 306);
    if ( (v197 & 1) == 0 )
    {
      sub_AEB684(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
      v197 = *(_WORD *)(v196 + 306);
    }
    if ( (v197 & 0x400) != 0 )
    {
      v198 = *v195[6];
      if ( (*(_BYTE *)(v198 + 306) & 1) == 0 )
        sub_AEB684(*v195[6]);
      if ( !*(_DWORD *)(v198 + 224) )
      {
        v199 = *v195[6];
        if ( (*(_BYTE *)(v199 + 306) & 1) == 0 )
          sub_AEB684(*v195[6]);
        j_il2cpp_runtime_class_init_0(v199);
      }
    }
    v200 = *v195[6];
    if ( (*(_BYTE *)(v200 + 306) & 1) == 0 )
      sub_AEB684(*v195[6]);
    Instance = (__int64)System_String__Format_44647040(v194, **(System_Object_array ***)(v200 + 184), 0LL);
    if ( !mKnockdownRecordPlusLb )
      goto LABEL_607;
    UILabel__set_text(mKnockdownRecordPlusLb, (System_String_o *)Instance, 0LL);
    mKnockdownRecordDamageNameLb = v328->fields.mKnockdownRecordDamageNameLb;
    v202 = LocalizationManager__Get((System_String_o *)StringLiteral_10979/*"QUEST_BOARD_KNOCKDOWN_DAMAGE_NAME"*/, 0LL);
    v203 = (_QWORD **)Method_System_Array_Empty_object___;
    v204 = v202;
    v205 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
    v206 = *(_WORD *)(v205 + 306);
    if ( (v206 & 1) == 0 )
    {
      sub_AEB684(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
      v206 = *(_WORD *)(v205 + 306);
    }
    if ( (v206 & 0x400) != 0 )
    {
      v207 = *v203[6];
      if ( (*(_BYTE *)(v207 + 306) & 1) == 0 )
        sub_AEB684(*v203[6]);
      if ( !*(_DWORD *)(v207 + 224) )
      {
        v208 = *v203[6];
        if ( (*(_BYTE *)(v208 + 306) & 1) == 0 )
          sub_AEB684(*v203[6]);
        j_il2cpp_runtime_class_init_0(v208);
      }
    }
    v209 = *v203[6];
    if ( (*(_BYTE *)(v209 + 306) & 1) == 0 )
      sub_AEB684(*v203[6]);
    Instance = (__int64)System_String__Format_44647040(v204, **(System_Object_array ***)(v209 + 184), 0LL);
    if ( !mKnockdownRecordDamageNameLb )
      goto LABEL_607;
    UILabel__set_text(mKnockdownRecordDamageNameLb, (System_String_o *)Instance, 0LL);
    v171 = v328;
    Instance = (__int64)v328->fields.mKnockdownRecordDamageLb;
    if ( !Instance )
      goto LABEL_607;
    UILabel__SetCondensedScale(
      (UILabel_o *)Instance,
      QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_KNOCKDOWN_DAMAGE_WIDTH,
      0LL);
    Instance = (__int64)v328->fields.mKnockdownRecordDamageLb;
    v172 = v324;
    if ( !Instance )
      goto LABEL_607;
    if ( *(__int64 *)(v185 + 24) <= 0 )
    {
      UIWidget__set_pivot((UIWidget_o *)Instance, 3, 0LL);
      Instance = (__int64)v328->fields.mKnockdownRecordDamageLb;
      if ( !Instance )
        goto LABEL_607;
      Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !v328->fields.mKnockdownRecordPlusLb )
        goto LABEL_607;
      v212 = (UnityEngine_GameObject_o *)Instance;
      v214 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v328->fields.mKnockdownRecordPlusLb, 0LL);
      LocalPositionX = GameObjectExtensions__GetLocalPositionX(v214, 0LL);
      v216 = QuestBoardListViewItemDraw_TypeInfo;
      v217 = LocalPositionX;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v216 = QuestBoardListViewItemDraw_TypeInfo;
      }
      QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX = v217 + (float)v216->static_fields->QUEST_BOARD_KNOCKDOWN_ZERO_DAMAGE_POSX;
    }
    else
    {
      UIWidget__set_pivot((UIWidget_o *)Instance, 5, 0LL);
      Instance = (__int64)v328->fields.mKnockdownRecordDamageLb;
      if ( !Instance )
        goto LABEL_607;
      v210 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      v211 = QuestBoardListViewItemDraw_TypeInfo;
      v212 = v210;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v211 = QuestBoardListViewItemDraw_TypeInfo;
      }
      QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX = (float)v211->static_fields->QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX;
    }
    GameObjectExtensions__SetLocalPositionX(v212, QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX, 0LL);
    Instance = (__int64)v328->fields.mKnockdownRecordSp;
    if ( !Instance )
      goto LABEL_607;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v325 + 24), 0LL);
    Instance = (__int64)v328->fields.mKnockdownRecordDamageLb;
    if ( !Instance )
      goto LABEL_607;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v325 + 24), 0LL);
    Instance = (__int64)v328->fields.mKnockdownRecordDamageNameLb;
    if ( !Instance )
      goto LABEL_607;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v325 + 24), 0LL);
    Instance = (__int64)v328->fields.mKnockdownRecordPlusLb;
    if ( !Instance )
      goto LABEL_607;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v325 + 24), 0LL);
    Instance = (__int64)v328->fields.mKnockdownRecordCountLb;
    if ( !Instance )
      goto LABEL_607;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v325 + 24), 0LL);
  }
  id = v172->fields.id;
  if ( (BYTE3(QuestInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestInformationComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
  }
  if ( !QuestInformationComponent__IsDisplayQuestInformation(id, 0LL) )
    goto LABEL_412;
  Instance = (__int64)v171->fields.mQuestInfoBtn;
  if ( !Instance )
    goto LABEL_607;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42AC2A0 )
  {
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42AC2A0 = 1;
  }
  v219 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v219 = TerminalSceneComponent_TypeInfo;
  }
  Instance = (__int64)v219->static_fields->mInstance;
  if ( !Instance )
    goto LABEL_607;
  if ( TerminalSceneComponent__QuestInfoShowing((TerminalSceneComponent_o *)Instance, 0LL) == v172->fields.id )
  {
    Instance = (__int64)v171->fields.mQuestInfoShowing;
    if ( !Instance )
      goto LABEL_607;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  }
  Instance = (__int64)v171->fields.mQuestInfoBtn;
  if ( !Instance )
LABEL_607:
    sub_B52A5C(Instance, size);
  Instance = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                        (UnityEngine_GameObject_o *)Instance,
                        (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
  v220 = Instance;
  if ( checkTimea == 2 )
  {
    Instance = QuestEntity__HasFlag(v172, 0x400000000000000LL, 0LL);
    size = v316 & (unsigned int)Instance & 1;
    if ( !v220 )
      goto LABEL_607;
  }
  else
  {
    size = 1LL;
    if ( !Instance )
      goto LABEL_607;
  }
  (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v220 + 392LL))(
    v220,
    size,
    *(_QWORD *)(*(_QWORD *)v220 + 400LL));
LABEL_412:
  Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
  mOptionRestrinctionLb = v171->fields.mOptionRestrinctionLb;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  }
  if ( !mOptionRestrinctionLb )
    goto LABEL_607;
  UILabel__set_fontSize(
    mOptionRestrinctionLb,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_DEFAULT_FONT_SIZE,
    0LL);
  Instance = (__int64)v171->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_607;
  UILabel__set_overflowMethod((UILabel_o *)Instance, 2, 0LL);
  Instance = (__int64)v171->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_607;
  v222 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  one = UnityEngine_Vector3__get_one(0LL);
  GameObjectExtensions__SetLocalScale(v222, one, 0LL);
  Instance = (__int64)v171->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_607;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_607;
  Instance = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_607;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_607;
  Component_srcLineSprite = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         (UnityEngine_GameObject_o *)Instance,
                                                         (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewMultiLimitedFormation___);
  if ( !Component_srcLineSprite )
    goto LABEL_538;
  v225 = Component_srcLineSprite;
  UnityEngine_Behaviour__set_enabled(Component_srcLineSprite, 0, 0LL);
  Component_srcLineSprite = (UnityEngine_Behaviour_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         v318,
                                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Component_srcLineSprite )
    goto LABEL_538;
  Component_srcLineSprite = (UnityEngine_Behaviour_o *)QuestPhaseDetailMaster__TryGetEntity(
                                                         (QuestPhaseDetailMaster_o *)Component_srcLineSprite,
                                                         (QuestPhaseDetailEntity_o **)&methoda.parameters,
                                                         v323[4],
                                                         questPhase,
                                                         0LL);
  if ( ((unsigned __int8)Component_srcLineSprite & 1) == 0 )
    goto LABEL_440;
  if ( !methoda.parameters )
    goto LABEL_538;
  if ( !*((_QWORD *)methoda.parameters + 5) )
    goto LABEL_440;
  Component_srcLineSprite = (UnityEngine_Behaviour_o *)v171->fields.mOptionRestrinctionLb;
  if ( !Component_srcLineSprite )
    goto LABEL_538;
  UILabel__set_maxLineCount((UILabel_o *)Component_srcLineSprite, 0, 0LL);
  if ( !methoda.parameters )
    goto LABEL_538;
  v227 = *((_QWORD *)methoda.parameters + 5);
  if ( !v227 )
    goto LABEL_538;
  v228 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v227 + 32);
  if ( v228
    && (Component_srcLineSprite = (UnityEngine_Behaviour_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                               v228,
                                                               (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_QuestPhaseDetailEntity_BoardInfo___)) != 0LL
    && (klass = Component_srcLineSprite[1].klass,
        v230 = (QuestPhaseDetailEntity_BoardInfo_array *)Component_srcLineSprite,
        klass) )
  {
    if ( (_DWORD)klass == 1 )
    {
      monitor = Component_srcLineSprite[1].monitor;
      if ( !monitor )
        goto LABEL_538;
      Component_srcLineSprite = (UnityEngine_Behaviour_o *)monitor[2];
      if ( !Component_srcLineSprite )
        goto LABEL_538;
      Component_srcLineSprite = (UnityEngine_Behaviour_o *)QuestPhaseDetailEntity_BoardInfo_TextInfo__SetText(
                                                             (QuestPhaseDetailEntity_BoardInfo_TextInfo_o *)Component_srcLineSprite,
                                                             v171->fields.mOptionRestrinctionLb,
                                                             (float)v171->fields.restrictionDefaultWidth,
                                                             0LL);
      if ( !v230->max_length )
        goto LABEL_608;
      v232 = v230->m_Items[0];
      if ( !v232 )
        goto LABEL_538;
      v233 = (char)Component_srcLineSprite;
      Component_srcLineSprite = (UnityEngine_Behaviour_o *)v232->fields.image;
      if ( !Component_srcLineSprite )
        goto LABEL_538;
      v234 = QuestPhaseDetailEntity_BoardInfo_ImageInfo__SetImage(
               (QuestPhaseDetailEntity_BoardInfo_ImageInfo_o *)Component_srcLineSprite,
               v171->fields.mOptionRestrinctionSp,
               0LL);
      v235 = 0;
    }
    else
    {
      UnityEngine_Behaviour__set_enabled(v225, 1, 0LL);
      if ( QuestEntity__HasFlag(v324, 0x400000000000000LL, 0LL) )
      {
        v304 = QuestBoardListViewItemDraw_TypeInfo;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v304 = QuestBoardListViewItemDraw_TypeInfo;
        }
        p_RESTRICTION_FONT_WIDTH_ALLOUT = &v304->static_fields->RESTRICTION_FONT_WIDTH_ALLOUT;
      }
      else
      {
        p_RESTRICTION_FONT_WIDTH_ALLOUT = &v171->fields.restrictionDefaultWidth;
      }
      QuestBoardListViewMultiLimitedFormation__Init(
        (QuestBoardListViewMultiLimitedFormation_o *)v225,
        v171->fields.mOptionRestrinctionLb,
        v171->fields.mOptionRestrinctionSp,
        v230,
        (float)*p_RESTRICTION_FONT_WIDTH_ALLOUT,
        0LL);
      v235 = 1;
      v233 = 1;
      v234 = 1;
    }
  }
  else
  {
LABEL_440:
    v233 = QuestBoardListViewItemDraw__SetRestrictionLabelFromQuestRestrictionMaster(v171, v323[4], questPhase, v226);
    v235 = 0;
    v234 = 0;
  }
  if ( QuestEntity__HasFlag(v324, 0x40000000LL, 0LL) )
  {
    Component_srcLineSprite = (UnityEngine_Behaviour_o *)v171->fields.mMultiSecondBattleInformation;
    if ( !Component_srcLineSprite )
      goto LABEL_538;
    p_mCostConsumeBattleWinSp = (UnityEngine_Behaviour_o **)&v171->fields.mCostConsumeBattleWinSp;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_srcLineSprite,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v171->fields.mCostConsumeBattleWinSp,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UISprite__Add__);
    v237 = 1;
  }
  else
  {
    v237 = 0;
    p_mCostConsumeBattleWinSp = (UnityEngine_Behaviour_o **)&v171->fields.mCostConsumeBattleWinSp;
  }
  Component_srcLineSprite = *p_mCostConsumeBattleWinSp;
  if ( !*p_mCostConsumeBattleWinSp )
    goto LABEL_538;
  Component_srcLineSprite = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)Component_srcLineSprite,
                                                         0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_538;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_srcLineSprite, v237, 0LL);
  Component_srcLineSprite = *p_mCostConsumeBattleWinSp;
  if ( !*p_mCostConsumeBattleWinSp )
    goto LABEL_538;
  UIWidget__set_color((UIWidget_o *)Component_srcLineSprite, *(UnityEngine_Color_o *)(v325 + 24), 0LL);
  if ( methoda.parameters
    && QuestPhaseDetailEntity__HasFlag((QuestPhaseDetailEntity_o *)methoda.parameters, 0x400000LL, 0LL) )
  {
    v238 = QuestBoardListViewItemDraw_TypeInfo;
    mOptionPreBattleSp = v171->fields.mOptionPreBattleSp;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v238 = QuestBoardListViewItemDraw_TypeInfo;
    }
    PRE_BATTLE_ORGANIZATION = v238->static_fields->PRE_BATTLE_ORGANIZATION;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetBanner(mOptionPreBattleSp, PRE_BATTLE_ORGANIZATION, 0LL);
    v171 = v328;
    Component_srcLineSprite = (UnityEngine_Behaviour_o *)v328->fields.mMultiSecondBattleInformation;
    if ( !Component_srcLineSprite )
      goto LABEL_538;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_srcLineSprite,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v328->fields.mOptionPreBattleSp,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UISprite__Add__);
    v241 = 1;
  }
  else
  {
    v241 = 0;
  }
  Component_srcLineSprite = (UnityEngine_Behaviour_o *)v171->fields.mOptionPreBattleSp;
  if ( !Component_srcLineSprite )
    goto LABEL_538;
  Component_srcLineSprite = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)Component_srcLineSprite,
                                                         0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_538;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_srcLineSprite, v241, 0LL);
  v336.fields.g = 0.078431;
  v336.fields.r = 0.78039;
  v336.fields.a = 1.0;
  v336.fields.b = 0.078431;
  UnityEngine_Color___ctor(v336, v242, v243, v244, v245, (const MethodInfo *)&methoda.klass);
  v250 = (UIWidget_o *)v171->fields.mOptionPreBattleSp;
  klass_high = HIDWORD(methoda.klass);
  methodPointer = (int)methoda.klass;
  return_type = (int)methoda.return_type;
  if ( checkTimea == 2 )
  {
    v337.fields.r = *(float *)&methoda.klass * 0.5;
    v337.fields.g = *((float *)&methoda.klass + 1) * 0.5;
    v337.fields.b = *(float *)&methoda.return_type * 0.5;
    v337.fields.a = 1.0;
    methoda.methodPointer = 0LL;
    methoda.invoker_method = 0LL;
    UnityEngine_Color___ctor(v337, v246, v247, v248, v249, &methoda);
    klass_high = HIDWORD(methoda.methodPointer);
    methodPointer = (int)methoda.methodPointer;
    invoker_method_high = HIDWORD(methoda.invoker_method);
    return_type = (int)methoda.invoker_method;
    if ( !v250 )
      goto LABEL_538;
  }
  else
  {
    invoker_method_high = HIDWORD(methoda.return_type);
    if ( !v250 )
      goto LABEL_538;
  }
  UIWidget__set_color(v250, *(UnityEngine_Color_o *)&methodPointer, 0LL);
  mMultiSecondBattleInformation = v171->fields.mMultiSecondBattleInformation;
  if ( !mMultiSecondBattleInformation )
    goto LABEL_538;
  if ( mMultiSecondBattleInformation->fields._size >= 2 )
  {
    Component_srcLineSprite = (UnityEngine_Behaviour_o *)v171->fields.secondBattleInformation;
    if ( !Component_srcLineSprite )
      goto LABEL_538;
    UnityEngine_Behaviour__set_enabled(Component_srcLineSprite, 1, 0LL);
    Component_srcLineSprite = (UnityEngine_Behaviour_o *)v171->fields.secondBattleInformation;
    if ( !Component_srcLineSprite )
      goto LABEL_538;
    QuestBoardListViewMultiSecondBattleInformation__Init(
      (QuestBoardListViewMultiSecondBattleInformation_o *)Component_srcLineSprite,
      v171->fields.mMultiSecondBattleInformation,
      0LL);
  }
  Component_srcLineSprite = (UnityEngine_Behaviour_o *)v171->fields.mOptionRestrinctionLb;
  if ( !Component_srcLineSprite )
    goto LABEL_538;
  Component_srcLineSprite = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)Component_srcLineSprite,
                                                         0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_538;
  Component_srcLineSprite = (UnityEngine_Behaviour_o *)UnityEngine_Transform__get_parent(
                                                         (UnityEngine_Transform_o *)Component_srcLineSprite,
                                                         0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_538;
  Component_srcLineSprite = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)Component_srcLineSprite,
                                                         0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_538;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_srcLineSprite, v233 || v234, 0LL);
  Component_srcLineSprite = (UnityEngine_Behaviour_o *)QuestEntity__HasFlag(v324, 0x400000000000000LL, 0LL);
  if ( !v171->fields.mOptionRestrinctionLb )
    goto LABEL_538;
  v256 = (char)Component_srcLineSprite;
  Component_srcLineSprite = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)v171->fields.mOptionRestrinctionLb,
                                                         0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_538;
  Component_srcLineSprite = (UnityEngine_Behaviour_o *)UnityEngine_Transform__get_parent(
                                                         (UnityEngine_Transform_o *)Component_srcLineSprite,
                                                         0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_538;
  v257 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
  v258 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (v256 & 1) == 0 )
  {
    if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v258 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v257, v258->static_fields->RESTRICTION_POS_DEFAULT, 0LL);
    v263 = v171->fields.mOptionRestrinctionLb;
    if ( !v263 )
      goto LABEL_538;
    if ( v263->fields.mWidth <= v171->fields.restrictionDefaultWidth )
    {
      v265 = QuestBoardListViewItemDraw_TypeInfo;
      mSpacingX = v263->fields.mSpacingX;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v265 = QuestBoardListViewItemDraw_TypeInfo;
      }
      RESTRICTION_FONT_SPACING_DEFAULT = (unsigned int)v265->static_fields->RESTRICTION_FONT_SPACING_DEFAULT;
      if ( mSpacingX == (_DWORD)RESTRICTION_FONT_SPACING_DEFAULT )
      {
        if ( (v235 & 1) != 0 )
          goto LABEL_509;
        goto LABEL_506;
      }
      if ( (BYTE3(v265->vtable._0_Equals.methodPtr) & 4) != 0 && !v265->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v265);
        LODWORD(RESTRICTION_FONT_SPACING_DEFAULT) = QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_FONT_SPACING_DEFAULT;
      }
    }
    else
    {
      v264 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v264 = QuestBoardListViewItemDraw_TypeInfo;
      }
      LODWORD(RESTRICTION_FONT_SPACING_DEFAULT) = v264->static_fields->RESTRICTION_FONT_SPACING_MIN;
    }
    QuestBoardListViewItemDraw__SetRestrinctionLabelSpacingX(v171, RESTRICTION_FONT_SPACING_DEFAULT, v262);
    if ( (v235 & 1) != 0 )
      goto LABEL_509;
LABEL_506:
    Component_srcLineSprite = (UnityEngine_Behaviour_o *)v171->fields.mOptionRestrinctionLb;
    if ( !Component_srcLineSprite )
      goto LABEL_538;
    restrictionDefaultWidth = v171->fields.restrictionDefaultWidth;
LABEL_508:
    UILabel__SetCondensedScale((UILabel_o *)Component_srcLineSprite, restrictionDefaultWidth, 0LL);
    goto LABEL_509;
  }
  if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v258 = QuestBoardListViewItemDraw_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition(v257, v258->static_fields->RESTRICTION_POS_ALLOUT, 0LL);
  Component_srcLineSprite = (UnityEngine_Behaviour_o *)v171->fields.mOptionRestrinctionLb;
  if ( !Component_srcLineSprite )
    goto LABEL_538;
  UILabel__set_fontSize(
    (UILabel_o *)Component_srcLineSprite,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_FONT_SIZE_ALLOUT,
    0LL);
  QuestBoardListViewItemDraw__SetRestrinctionLabelSpacingX(
    v171,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_FONT_SPACING_DEFAULT,
    v259);
  if ( (v235 & 1) == 0 )
  {
    Component_srcLineSprite = (UnityEngine_Behaviour_o *)QuestBoardListViewItemDraw_TypeInfo;
    v260 = (UnityEngine_Behaviour_o *)v171->fields.mOptionRestrinctionLb;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    }
    if ( !v260 )
      goto LABEL_538;
    Component_srcLineSprite = v260;
    restrictionDefaultWidth = QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_FONT_WIDTH_ALLOUT;
    goto LABEL_508;
  }
LABEL_509:
  Component_srcLineSprite = (UnityEngine_Behaviour_o *)v171->fields.mOptionRestrinctionLb;
  if ( !Component_srcLineSprite )
    goto LABEL_538;
  UIWidget__set_color((UIWidget_o *)Component_srcLineSprite, *(UnityEngine_Color_o *)(v325 + 24), 0LL);
  if ( checkTimea == 2 )
  {
    mOptionRestrinctionSp = (UIWidget_o *)v171->fields.mOptionRestrinctionSp;
    if ( !mOptionRestrinctionSp )
      goto LABEL_538;
    v338.fields.a = mOptionRestrinctionSp->fields.mColor.fields.a;
    v338.fields.r = mOptionRestrinctionSp->fields.mColor.fields.r * 0.5;
    v338.fields.g = mOptionRestrinctionSp->fields.mColor.fields.g * 0.5;
    v338.fields.b = mOptionRestrinctionSp->fields.mColor.fields.b * 0.5;
    methoda.methodPointer = 0LL;
    methoda.invoker_method = 0LL;
    UnityEngine_Color___ctor(v338, 0.5, v267, v268, v269, &methoda);
    *(_QWORD *)&v339.fields.r = methoda.methodPointer;
    *(_QWORD *)&v339.fields.b = methoda.invoker_method;
    UIWidget__set_color(mOptionRestrinctionSp, v339, 0LL);
  }
  Component_srcLineSprite = (UnityEngine_Behaviour_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         v318,
                                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Component_srcLineSprite )
    goto LABEL_538;
  v271 = v315;
  v272 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Component_srcLineSprite, v324->fields.id, questPhase, 0LL);
  v273 = v272;
  if ( v272 )
  {
    classIds = v272->fields.classIds;
    if ( classIds )
      LODWORD(classIds) = classIds->max_length != 0;
  }
  else
  {
    LODWORD(classIds) = 0;
  }
  v275 = ((unsigned int)classIds & v271) == 0;
  if ( ((unsigned int)classIds & v271) != 0 && checkTimea == 2 )
    v275 = QuestEntity__HasFlag(v324, 2048LL, 0LL);
  Component_srcLineSprite = (UnityEngine_Behaviour_o *)v171->fields.mClassIconRoot;
  if ( !Component_srcLineSprite )
    goto LABEL_538;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_srcLineSprite, !v275, 0LL);
  Component_srcLineSprite = (UnityEngine_Behaviour_o *)v171->fields.mClassStrSp;
  if ( !Component_srcLineSprite )
    goto LABEL_538;
  UIWidget__set_color((UIWidget_o *)Component_srcLineSprite, *(UnityEngine_Color_o *)(v325 + 24), 0LL);
  if ( !v275 )
  {
    if ( !v273 )
      goto LABEL_538;
    mClassIcons = v171->fields.mClassIcons;
    if ( !mClassIcons )
      goto LABEL_538;
    max_length = mClassIcons->max_length;
    if ( max_length >= 1 )
    {
      v278 = v273->fields.classIds;
      v279 = 1;
      while ( 1 )
      {
        v280 = v279 - 1;
        if ( v279 - 1 >= mClassIcons->max_length )
          break;
        v281 = v280;
        v282 = (__int64)mClassIcons + 8 * v280;
        v283 = *(UnityEngine_Component_o **)(v282 + 32);
        if ( !v283 )
          goto LABEL_538;
        Component_srcLineSprite = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_gameObject(
                                                               *(UnityEngine_Component_o **)(v282 + 32),
                                                               0LL);
        if ( !v278 )
          goto LABEL_538;
        if ( !Component_srcLineSprite )
          goto LABEL_538;
        UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)Component_srcLineSprite,
          (int)v281 < (signed int)v278->max_length,
          0LL);
        Component_srcLineSprite = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_gameObject(v283, 0LL);
        if ( !Component_srcLineSprite )
          goto LABEL_538;
        Component_srcLineSprite = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__get_activeSelf(
                                                               (UnityEngine_GameObject_o *)Component_srcLineSprite,
                                                               0LL);
        if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
        {
          if ( (unsigned int)v281 >= v278->max_length )
            break;
          ServantClassIconComponent__Set((ServantClassIconComponent_o *)v283, v278->m_Items[v281 + 1], 0LL);
          ServantClassIconComponent__SetColor(
            (ServantClassIconComponent_o *)v283,
            *(UnityEngine_Color_o *)(v325 + 24),
            0LL);
        }
        if ( v279 >= max_length )
          goto LABEL_539;
        mClassIcons = v171->fields.mClassIcons;
        ++v279;
        if ( !mClassIcons )
          goto LABEL_538;
      }
LABEL_608:
      v308 = sub_B52A88(Component_srcLineSprite);
      sub_B52A28(v308, 0LL);
    }
  }
LABEL_539:
  if ( key >= 1 )
  {
    eventTarget = (UnityEngine_Object_o *)v171->fields.eventTarget;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(eventTarget, 0LL, 0LL) )
    {
      eventTargetComponent = (UnityEngine_Object_o *)v171->fields.eventTargetComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(eventTargetComponent, 0LL, 0LL) )
      {
        Component_srcLineSprite = (UnityEngine_Behaviour_o *)v171->fields.mQuestInfoBtn;
        if ( !Component_srcLineSprite )
          goto LABEL_538;
        if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Component_srcLineSprite, 0LL) )
        {
          Component_srcLineSprite = (UnityEngine_Behaviour_o *)v171->fields.eventTargetComponent;
          if ( !Component_srcLineSprite )
            goto LABEL_538;
          BoardOptionEventTargetComponent__DestroyList(
            (BoardOptionEventTargetComponent_o *)Component_srcLineSprite,
            0LL);
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          Component_srcLineSprite = (UnityEngine_Behaviour_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ViewEnemyMaster___);
          if ( !Component_srcLineSprite )
            goto LABEL_538;
          EntityListFromQuestId = ViewEnemyMaster__GetEntityListFromQuestId(
                                    (ViewEnemyMaster_o *)Component_srcLineSprite,
                                    v323[4],
                                    0LL);
          if ( EntityListFromQuestId
            && (v287 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromQuestId,
                *(_QWORD *)&EntityListFromQuestId->max_length) )
          {
            v288 = QuestBoardListViewItemDraw___c_TypeInfo;
            if ( (BYTE3(QuestBoardListViewItemDraw___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !QuestBoardListViewItemDraw___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw___c_TypeInfo);
              v288 = QuestBoardListViewItemDraw___c_TypeInfo;
            }
            v289 = v288->static_fields;
            _9__307_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v289->__9__307_1;
            if ( !_9__307_1 )
            {
              if ( (BYTE3(v288->vtable._0_Equals.methodPtr) & 4) != 0 && !v288->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v288);
                v289 = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
              }
              v291 = (Il2CppObject *)v289->__9;
              _9__307_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_ViewEnemyEntity__int__TypeInfo);
              System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
                _9__307_1,
                v291,
                Method_QuestBoardListViewItemDraw___c__SetItemOfQuest_b__307_1__,
                (const MethodInfo_2BC9C68 *)Method_System_Func_ViewEnemyEntity__int___ctor__);
              v292 = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
              v292->__9__307_1 = (struct System_Func_ViewEnemyEntity__int__o *)_9__307_1;
              sub_B52920(
                (BattleServantConfConponent_o *)&v292->__9__307_1,
                (System_Int32_array **)_9__307_1,
                v293,
                v294,
                v295,
                v296,
                v297,
                v298);
            }
            v299 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                          v287,
                                                                          (System_Func_TSource__TResult__o *)_9__307_1,
                                                                          (const MethodInfo_1B69DA4 *)Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___);
            Component_srcLineSprite = (UnityEngine_Behaviour_o *)System_Linq_Enumerable__ToArray_int_(
                                                                   v299,
                                                                   (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
            if ( !v171->fields.eventTarget )
              goto LABEL_538;
            v300 = (System_Int32_array *)Component_srcLineSprite;
            UnityEngine_GameObject__SetActive(v171->fields.eventTarget, 1, 0LL);
            Component_srcLineSprite = (UnityEngine_Behaviour_o *)v171->fields.eventTargetComponent;
            if ( !Component_srcLineSprite )
              goto LABEL_538;
            BoardOptionEventTargetComponent__CreateEnemyList(
              (BoardOptionEventTargetComponent_o *)Component_srcLineSprite,
              v323[4],
              v300,
              0LL);
          }
          else
          {
            Component_srcLineSprite = (UnityEngine_Behaviour_o *)v171->fields.eventTarget;
            if ( !Component_srcLineSprite )
              goto LABEL_538;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_srcLineSprite, 0, 0LL);
          }
        }
      }
    }
  }
  if ( ((unsigned __int8)v316 & (checkTimea == 2) & QuestEntity__HasFlag(v324, 0x400000000000000LL, 0LL)) == 1 )
  {
    alloutRoot = (UnityEngine_Object_o *)v171->fields.alloutRoot;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(alloutRoot, 0LL, 0LL) )
    {
      alloutRootComponent = (UnityEngine_Object_o *)v171->fields.alloutRootComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(alloutRootComponent, 0LL, 0LL) )
      {
        if ( !v323[17] )
          goto LABEL_587;
        v303 = v323[4];
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( CondType__IsQuestClear_25987760(v303, -1, 1, 0LL) )
        {
LABEL_587:
          Component_srcLineSprite = (UnityEngine_Behaviour_o *)v171->fields.alloutRoot;
          if ( Component_srcLineSprite )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_srcLineSprite, 1, 0LL);
            Component_srcLineSprite = (UnityEngine_Behaviour_o *)v171->fields.alloutRootComponent;
            if ( Component_srcLineSprite )
            {
              BoardOptionAlloutComponent__SetIcon((BoardOptionAlloutComponent_o *)Component_srcLineSprite, v323[4], 0LL);
              return;
            }
          }
LABEL_538:
          sub_B52A5C(Component_srcLineSprite, RESTRICTION_FONT_SPACING_DEFAULT);
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
  const MethodInfo *v54; // x3
  int32_t questId; // w22
  int32_t afterClear; // w23
  bool IsRepeatReward; // w0
  const MethodInfo *v58; // x4
  const MethodInfo *v59; // x3
  const MethodInfo *v60; // x1
  int32_t questPhase; // w22
  int32_t PhaseMax; // w0
  int32_t v63; // w0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *mInfoTextList; // x22
  const MethodInfo *v65; // x6
  int64_t *p_expireAt; // x8
  int64_t v67; // x22
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v68; // x21
  System_String_o *v69; // x24
  QuestBoardInformaionText_o *v70; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v71; // x23
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v72; // x23
  struct BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x21
  struct QuestBoardListViewObject_o *v74; // x8
  __int64 v75; // x10
  const MethodInfo *v76; // x3
  int32_t AlphaAnimCnt; // w22
  bool v78; // w22
  UnityEngine_Object_o *mEarthLine; // x21
  const MethodInfo *v80; // x3
  QuestBoardListViewEarthLine_o *v81; // x21
  QuestBoardListViewItemDraw_o *v82; // x0
  const MethodInfo *v83; // x1
  EventCampaignEntity_o *v84; // [xsp+0h] [xbp-A0h]
  const MethodInfo *v85; // [xsp+10h] [xbp-90h]
  int32_t v86; // [xsp+1Ch] [xbp-84h] BYREF
  int32_t fixedVal[2]; // [xsp+20h] [xbp-80h] BYREF
  UserQuestEntity_o *entity; // [xsp+28h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v89; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v90; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v91; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v92; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v93; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v94; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v95; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42B18C9 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&QuestBoardInformaionText_TypeInfo);
    sub_B52984(&QuestBoardListViewItemDraw_TypeInfo);
    sub_B52984(&QuestBoardListViewManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_13505/*"TIME_REST_QUEST_BOARD_QUEST"*/);
    sub_B52984(&StringLiteral_23732/*"{0}"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B18C9 = 1;
  }
  entity = 0LL;
  *(_QWORD *)fixedVal = 0LL;
  v86 = 0;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
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
    Instance = sub_B52D50(Instance);
    goto LABEL_157;
  }
  if ( !v8 )
    goto LABEL_155;
  dispType = quest_info_k__BackingField->fields.dispType;
  v13 = *(_QWORD *)(Instance + 568);
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              v8,
                                                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
    v86 = OverwriteBannerId_k__BackingField;
    v26 = System_Int32__ToString((int32_t)&v86, 0LL);
    v27 = RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX;
  }
  v30 = System_String__Concat_44568316(v27, v26, 0LL);
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
                        (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Instance )
    goto LABEL_155;
  v90.fields.r = v19;
  v90.fields.g = v20;
  v90.fields.b = v21;
  v90.fields.a = v22;
  UIWidget__set_color((UIWidget_o *)Instance, v90, 0LL);
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
                          (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
    if ( System_String__Contains((System_String_o *)Instance, (System_String_o *)StringLiteral_23732/*"{0}"*/, 0LL) )
    {
      v51 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             v8,
                                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
      Instance = QuestEntity__getServantId(v10, 0LL);
      if ( !v51 )
        goto LABEL_155;
      Instance = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            v51,
                            Instance,
                            (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
  v91.fields.r = v19;
  v91.fields.g = v20;
  v91.fields.b = v21;
  v91.fields.a = v22;
  UIWidget__set_color((UIWidget_o *)Instance, v91, 0LL);
  v92.fields.r = v19;
  v92.fields.g = v20;
  v92.fields.b = v21;
  v92.fields.a = v22;
  QuestBoardListViewItemDraw__SetupRewardIconDisp(this, v10, dispType == 2, v92, v54);
  questId = quest_info_k__BackingField->fields.questId;
  afterClear = v10->fields.afterClear;
  IsRepeatReward = QuestEntity__IsRepeatReward(v10, 0LL);
  v93.fields.r = v19;
  v93.fields.g = v20;
  v93.fields.b = v21;
  v93.fields.a = v22;
  QuestBoardListViewItemDraw__SetupFirstRewardDisp(this, questId, afterClear, v93, IsRepeatReward, v58);
  v94.fields.r = v19;
  v94.fields.g = v20;
  v94.fields.b = v21;
  v94.fields.a = v22;
  QuestBoardListViewItemDraw__SetupRewardGotAndNotGiveDisp(this, quest_info_k__BackingField, entity, v94, v59);
  QuestBoardListViewItemDraw__ResetInfoTextList(this, v60);
  fixedVal[0] = -1;
  fixedVal[1] = 0;
  questPhase = quest_info_k__BackingField->fields.questPhase;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0LL);
  v63 = UnityEngine_Mathf__Min_41525188(questPhase + 1, PhaseMax, 0LL);
  mInfoTextList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields.mInfoTextList;
  Instance = (__int64)QuestBoardListViewItemDraw__GetCampaignText(
                        this,
                        quest_info_k__BackingField->fields.questId,
                        v63,
                        0,
                        &fixedVal[1],
                        fixedVal,
                        v65);
  if ( !mInfoTextList )
    goto LABEL_155;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    mInfoTextList,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
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
  v67 = *p_expireAt;
  if ( *p_expireAt >= 1 )
  {
    Instance = QuestEntity__HasFlag(v10, 32LL, 0LL);
    if ( (Instance & 1) == 0 )
    {
      v68 = this->fields.mInfoTextList;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v69 = LocalizationManager__Get((System_String_o *)StringLiteral_13505/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0LL);
      v70 = (QuestBoardInformaionText_o *)sub_B52A54(QuestBoardInformaionText_TypeInfo);
      v95.fields.r = 0.0;
      v95.fields.g = 0.0;
      v95.fields.b = 0.0;
      v95.fields.a = 0.0;
      v89.fields.x = 0.0;
      v89.fields.y = 0.0;
      v89.fields.z = 0.0;
      v71 = (EventMissionProgressRequest_Argument_ProgressData_o *)v70;
      QuestBoardInformaionText___ctor(v70, v69, v67, 0, 0, v95, -1, 0, v89, 1, v84, 0LL, v85);
      if ( !v68 )
        goto LABEL_155;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v68,
        v71,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
    }
  }
LABEL_126:
  v72 = this->fields.mInfoTextList;
  if ( !v72 )
    goto LABEL_155;
  size = (QuestBoardListViewManager_c *)(unsigned int)v72->fields._size;
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  if ( (int)size < 1 )
  {
    v78 = 0;
    goto LABEL_138;
  }
  v74 = this->fields.mListViewObject;
  if ( !v74 )
    goto LABEL_155;
  Instance = (__int64)v74->fields.manager;
  if ( !Instance )
    goto LABEL_155;
  v75 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v75
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v75 - 8) != QuestBoardListViewManager_TypeInfo )
  {
LABEL_157:
    v82 = (QuestBoardListViewItemDraw_o *)sub_B52D50(Instance);
    QuestBoardListViewItemDraw__ResetInfoTextList(v82, v83);
    return;
  }
  AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt((QuestBoardListViewManager_o *)Instance, (int32_t)size, 0LL);
  if ( v72->fields._size <= (unsigned int)AlphaAnimCnt )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  Instance = (__int64)v72->fields._items->m_Items[AlphaAnimCnt];
  if ( !Instance )
    goto LABEL_155;
  QuestBoardInformaionText__SetTime(
    (QuestBoardInformaionText_o *)Instance,
    &this->fields.mOptionInfoLb,
    &this->fields.mOptionInfoFrameSp,
    v76);
  Instance = (__int64)this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_155;
  BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)Instance, 1.0, 0LL);
  v78 = 1;
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v78, 0LL);
  Instance = (__int64)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_155;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v78, 0LL);
  mEarthLine = (UnityEngine_Object_o *)this->fields.mEarthLine;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mEarthLine, 0LL, 0LL) )
  {
    Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
    v81 = this->fields.mEarthLine;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
    }
    if ( v81 )
    {
      QuestBoardListViewEarthLine__SetupSecond(
        v81,
        *(UnityEngine_Vector3_o *)(*(_QWORD *)(Instance + 184) + 244LL),
        this->fields.mListViewObject,
        quest_info_k__BackingField->fields.warId,
        v80);
      return;
    }
LABEL_155:
    sub_B52A5C(Instance, size);
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
  int32_t dispType; // w27
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
  const MethodInfo *v52; // x3
  int32_t questId; // w22
  int32_t afterClear; // w23
  bool IsRepeatReward; // w0
  const MethodInfo *v56; // x4
  const MethodInfo *v57; // x3
  const MethodInfo *v58; // x1
  int32_t questPhase; // w22
  int32_t PhaseMax; // w0
  int32_t v61; // w0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *mInfoTextList; // x22
  const MethodInfo *v63; // x6
  int64_t *p_expireAt; // x8
  int64_t v65; // x22
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v66; // x21
  System_String_o *v67; // x24
  QuestBoardInformaionText_o *v68; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v69; // x23
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v70; // x23
  struct BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x21
  struct QuestBoardListViewObject_o *v72; // x8
  __int64 v73; // x10
  const MethodInfo *v74; // x3
  int32_t AlphaAnimCnt; // w22
  bool v76; // w22
  UnityEngine_Object_o *mEarthLine; // x21
  const MethodInfo *v78; // x3
  QuestBoardListViewEarthLine_o *v79; // x21
  QuestBoardListViewItemDraw_o *v80; // x0
  QuestBoardListViewItem_o *v81; // x1
  const MethodInfo *v82; // x2
  EventCampaignEntity_o *v83; // [xsp+0h] [xbp-A0h]
  const MethodInfo *v84; // [xsp+10h] [xbp-90h]
  int32_t fixedVal[2]; // [xsp+20h] [xbp-80h] BYREF
  UserQuestEntity_o *entity; // [xsp+28h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v87; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v88; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v89; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v90; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v91; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v92; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v93; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v94; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v95; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42B18C8 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&QuestBoardInformaionText_TypeInfo);
    sub_B52984(&QuestBoardListViewItemDraw_TypeInfo);
    sub_B52984(&QuestBoardListViewManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_13505/*"TIME_REST_QUEST_BOARD_QUEST"*/);
    sub_B52984(&StringLiteral_23732/*"{0}"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B18C8 = 1;
  }
  *(_QWORD *)fixedVal = 0LL;
  entity = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
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
    Instance = sub_B52D50(Instance);
    goto LABEL_161;
  }
  if ( !v9 )
    goto LABEL_159;
  dispType = quest_info_k__BackingField->fields.dispType;
  v14 = *(_QWORD *)(Instance + 568);
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              v9,
                                                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
    v25 = (System_String_o **)(*(_QWORD *)(Instance + 184) + 1016LL);
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
    v25 = (System_String_o **)(*(_QWORD *)(Instance + 184) + 1024LL);
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
                        (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Instance )
    goto LABEL_159;
  v88.fields.r = v20;
  v88.fields.g = v21;
  v88.fields.b = v22;
  v88.fields.a = v23;
  UIWidget__set_color((UIWidget_o *)Instance, v88, 0LL);
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
                          (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
    if ( System_String__Contains((System_String_o *)Instance, (System_String_o *)StringLiteral_23732/*"{0}"*/, 0LL) )
    {
      v44 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             v9,
                                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
      Instance = QuestEntity__getServantId(v11, 0LL);
      if ( !v44 )
        goto LABEL_159;
      Instance = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            v44,
                            Instance,
                            (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
  v89.fields.r = v20;
  v89.fields.g = v21;
  v89.fields.b = v22;
  v89.fields.a = v23;
  UIWidget__set_color((UIWidget_o *)Instance, v89, 0LL);
  ServantId = QuestEntity__getServantId(v11, 0LL);
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        v9,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_159;
  Instance = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        ServantId,
                        (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
    v90.fields.r = v20;
    v90.fields.g = v21;
    v90.fields.b = v22;
    v90.fields.a = v23;
    UIWidget__set_color((UIWidget_o *)Instance, v90, 0LL);
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
  v91.fields.r = v20;
  v91.fields.g = v21;
  v91.fields.b = v22;
  v91.fields.a = v23;
  QuestBoardListViewItemDraw__SetFaceImage(
    this,
    v11,
    mLabelFaceMaskShortcutSp,
    v50->static_fields->SHORTCUT_FACE_MASK_SP_W,
    v50->static_fields->SHORTCUT_FACE_MASK_SPNAME,
    v91,
    v49);
  v92.fields.r = v20;
  v92.fields.g = v21;
  v92.fields.b = v22;
  v92.fields.a = v23;
  QuestBoardListViewItemDraw__SetupRewardIconDisp(this, v11, dispType == 2, v92, v52);
  questId = quest_info_k__BackingField->fields.questId;
  afterClear = v11->fields.afterClear;
  IsRepeatReward = QuestEntity__IsRepeatReward(v11, 0LL);
  v93.fields.r = v20;
  v93.fields.g = v21;
  v93.fields.b = v22;
  v93.fields.a = v23;
  QuestBoardListViewItemDraw__SetupFirstRewardDisp(this, questId, afterClear, v93, IsRepeatReward, v56);
  v94.fields.r = v20;
  v94.fields.g = v21;
  v94.fields.b = v22;
  v94.fields.a = v23;
  QuestBoardListViewItemDraw__SetupRewardGotAndNotGiveDisp(this, quest_info_k__BackingField, entity, v94, v57);
  QuestBoardListViewItemDraw__ResetInfoTextList(this, v58);
  fixedVal[0] = -1;
  fixedVal[1] = 0;
  questPhase = quest_info_k__BackingField->fields.questPhase;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0LL);
  v61 = UnityEngine_Mathf__Min_41525188(questPhase + 1, PhaseMax, 0LL);
  mInfoTextList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields.mInfoTextList;
  Instance = (__int64)QuestBoardListViewItemDraw__GetCampaignText(
                        this,
                        quest_info_k__BackingField->fields.questId,
                        v61,
                        0,
                        &fixedVal[1],
                        fixedVal,
                        v63);
  if ( !mInfoTextList
    || (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          mInfoTextList,
          (System_Collections_Generic_IEnumerable_T__o *)Instance,
          (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__),
        (Instance = (__int64)this->fields.mRarePrismSp) == 0)
    || (Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0 )
  {
LABEL_159:
    sub_B52A5C(Instance, size);
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
  v65 = *p_expireAt;
  if ( *p_expireAt >= 1 )
  {
    Instance = QuestEntity__HasFlag(v11, 32LL, 0LL);
    if ( (Instance & 1) == 0 )
    {
      v66 = this->fields.mInfoTextList;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v67 = LocalizationManager__Get((System_String_o *)StringLiteral_13505/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0LL);
      v68 = (QuestBoardInformaionText_o *)sub_B52A54(QuestBoardInformaionText_TypeInfo);
      v95.fields.r = 0.0;
      v95.fields.g = 0.0;
      v95.fields.b = 0.0;
      v95.fields.a = 0.0;
      v87.fields.x = 0.0;
      v87.fields.y = 0.0;
      v87.fields.z = 0.0;
      v69 = (EventMissionProgressRequest_Argument_ProgressData_o *)v68;
      QuestBoardInformaionText___ctor(v68, v67, v65, 0, 0, v95, -1, 0, v87, 1, v83, 0LL, v84);
      if ( !v66 )
        goto LABEL_159;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v66,
        v69,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
    }
  }
LABEL_131:
  v70 = this->fields.mInfoTextList;
  if ( !v70 )
    goto LABEL_159;
  size = (QuestBoardListViewManager_c *)(unsigned int)v70->fields._size;
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  if ( (int)size >= 1 )
  {
    v72 = this->fields.mListViewObject;
    if ( !v72 )
      goto LABEL_159;
    Instance = (__int64)v72->fields.manager;
    if ( !Instance )
      goto LABEL_159;
    v73 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v73
      && *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v73 - 8) == QuestBoardListViewManager_TypeInfo )
    {
      AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt(
                       (QuestBoardListViewManager_o *)Instance,
                       (int32_t)size,
                       0LL);
      if ( v70->fields._size <= (unsigned int)AlphaAnimCnt )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      Instance = (__int64)v70->fields._items->m_Items[AlphaAnimCnt];
      if ( !Instance )
        goto LABEL_159;
      QuestBoardInformaionText__SetTime(
        (QuestBoardInformaionText_o *)Instance,
        &this->fields.mOptionInfoLb,
        &this->fields.mOptionInfoFrameSp,
        v74);
      Instance = (__int64)this->fields.mOptionInfoLb;
      if ( !Instance )
        goto LABEL_159;
      BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)Instance, 1.0, 0LL);
      v76 = 1;
      quest_info_k__BackingField->fields.costCalcVal = fixedVal[1];
      quest_info_k__BackingField->fields._fixedCostVal_k__BackingField = fixedVal[0];
      goto LABEL_143;
    }
LABEL_161:
    v80 = (QuestBoardListViewItemDraw_o *)sub_B52D50(Instance);
    QuestBoardListViewItemDraw__SetItemOfQuest(v80, v81, v82);
    return;
  }
  v76 = 0;
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v76, 0LL);
  Instance = (__int64)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_159;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v76, 0LL);
  mEarthLine = (UnityEngine_Object_o *)this->fields.mEarthLine;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mEarthLine, 0LL, 0LL) )
  {
    Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
    v79 = this->fields.mEarthLine;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
    }
    if ( !v79 )
      goto LABEL_159;
    QuestBoardListViewEarthLine__SetupSecond(
      v79,
      *(UnityEngine_Vector3_o *)(*(_QWORD *)(Instance + 184) + 244LL),
      this->fields.mListViewObject,
      quest_info_k__BackingField->fields.warId,
      v78);
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
  bool IsQuestClear_25987760; // w0
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
  int32_t y_low; // w24
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
  const MethodInfo *v100; // x3
  int32_t v101; // w24
  int32_t afterClear; // w25
  float v103; // s8
  float v104; // s9
  float v105; // s10
  float v106; // s11
  bool IsRepeatReward; // w0
  const MethodInfo *v108; // x4
  const MethodInfo *v109; // x3
  const MethodInfo *v110; // x1
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *mInfoTextList; // x25
  const MethodInfo *v112; // x6
  int64_t *p_expireAt; // x8
  int64_t v114; // x24
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v115; // x25
  System_String_o *v116; // x27
  QuestBoardInformaionText_o *v117; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v118; // x26
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v119; // x26
  struct BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x24
  struct QuestBoardListViewObject_o *v121; // x8
  __int64 v122; // x10
  const MethodInfo *v123; // x3
  int32_t AlphaAnimCnt; // w25
  bool v125; // w25
  WarBoardQuestEntity_o *v126; // x0
  WarBoardQuestEntity_o *v127; // x21
  UILabel_o *mBoardMessage; // x21
  UISprite_o *v129; // x28
  __int64 v130; // x8
  __int64 v131; // x0
  EventCampaignEntity_o *v132; // [xsp+0h] [xbp-C0h]
  const MethodInfo *v133; // [xsp+10h] [xbp-B0h]
  int64_t checkTime; // [xsp+18h] [xbp-A8h]
  bool v135; // [xsp+24h] [xbp-9Ch]
  bool v136; // [xsp+28h] [xbp-98h]
  unsigned int v137; // [xsp+2Ch] [xbp-94h]
  int32_t questPhase; // [xsp+30h] [xbp-90h]
  int32_t fixedVal; // [xsp+34h] [xbp-8Ch] BYREF
  int32_t costCalcVal; // [xsp+38h] [xbp-88h] BYREF
  bool isTripleItemConsume; // [xsp+3Ch] [xbp-84h] BYREF
  bool isDoubleItemConsumeQp; // [xsp+40h] [xbp-80h] BYREF
  bool isDoubleItemConsume; // [xsp+44h] [xbp-7Ch] BYREF
  UserQuestEntity_o *entity; // [xsp+48h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v145; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v146; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v147; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42B18CE & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_WarBoardQuestMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_WarBoardStageMaster___);
    sub_B52984(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&QuestBoardInformaionText_TypeInfo);
    sub_B52984(&QuestBoardListViewItemDraw_TypeInfo);
    sub_B52984(&QuestBoardListViewManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_QuestBoardListViewItemDraw___c__DisplayClass308_0__SetItemOfWarBoard_b__0__);
    sub_B52984(&QuestBoardListViewItemDraw___c__DisplayClass308_0_TypeInfo);
    sub_B52984(&StringLiteral_13505/*"TIME_REST_QUEST_BOARD_QUEST"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B18CE = 1;
  }
  entity = 0LL;
  isDoubleItemConsume = 0;
  isDoubleItemConsumeQp = 0;
  isTripleItemConsume = 0;
  fixedVal = 0;
  costCalcVal = 0;
  v5 = sub_B52A54(QuestBoardListViewItemDraw___c__DisplayClass308_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass308_0___ctor(
    (QuestBoardListViewItemDraw___c__DisplayClass308_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_226;
  *(_QWORD *)(v5 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
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
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
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
    Instance = sub_B52D50(Instance);
LABEL_228:
    Instance = sub_B52D50(Instance);
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
                                                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
  IsQuestClear_25987760 = CondType__IsQuestClear_25987760(questId, -1, 0, 0LL);
  v30 = quest_info_k__BackingField->fields.questPhase;
  v136 = IsQuestClear_25987760;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0LL);
  Instance = UnityEngine_Mathf__Min_41525188(v30 + 1, PhaseMax, 0LL);
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
  v137 = v17;
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
  v135 = HasFlag;
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
    v49 = v137;
    if ( v137 <= 7 && ((1 << v137) & 0xA6) != 0 )
    {
      p_mcBaseP = &this->fields.mcBaseP;
      mcBaseP = this->fields.mcBaseP;
      Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
      if ( v137 == 7 )
      {
        if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
        }
        v52 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 1032LL);
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
        v56 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 1032LL);
        if ( !v56 )
          goto LABEL_226;
        if ( v137 < *(_DWORD *)(v56 + 24) )
        {
          v53 = *(System_String_o **)(v56 + 8LL * (int)v137 + 32);
LABEL_91:
          v57 = System_Int32__ToString((int)PhaseDetailedEntity + 60, 0LL);
          v58 = System_String__Concat_44568316(v53, v57, 0LL);
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
      v129 = this->fields.mcBaseP;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
      }
      v130 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 1032LL);
      if ( !v130 )
        goto LABEL_226;
      if ( v137 < *(_DWORD *)(v130 + 24) )
      {
        if ( !v129 )
          goto LABEL_226;
        UISprite__set_spriteName(v129, *(System_String_o **)(v130 + 8LL * (int)v137 + 32), 0LL);
        goto LABEL_95;
      }
    }
LABEL_229:
    v131 = sub_B52A88(Instance);
    sub_B52A28(v131, 0LL);
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
  v41 = System_String__Concat_44568316(QUEST_BOARD_SPNAME_PREFIX, v40, 0LL);
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
  v48 = System_String__Concat_44568316(QUEST_BOARD_SHOHI_SPNAME_PREFIX, v47, 0LL);
  if ( AtlasManager__SetEventUI(v45, v48, 0LL) )
  {
    v49 = v137;
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
  v49 = v137;
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
                        (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
    v49 = v137;
    if ( !Instance )
      goto LABEL_226;
    Instance = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          (UnityEngine_GameObject_o *)Instance,
                          (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
      if ( !v136 )
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
                  !v135,
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
  y_low = LODWORD(v81->fields.mTitleLevelSp[1].fields.mOldV0.fields.y);
  FaceMaskSpriteName = QuestBoardListViewItemDraw__GetFaceMaskSpriteName(v81, v49, v80);
  v86 = QuestBoardListViewItemDraw__SetFaceImage(
          this,
          PhaseDetailedEntity,
          mLabelFaceMaskQuestSp,
          y_low,
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
                          (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !Instance )
      goto LABEL_226;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v5 + 24), 0LL);
    Instance = (__int64)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_226;
    if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Instance, 0LL) )
    {
      *(_DWORD *)(v5 + 40) = PhaseDetailedEntity->fields.id;
      v97 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(
        v97,
        (Il2CppObject *)v5,
        Method_QuestBoardListViewItemDraw___c__DisplayClass308_0__SetItemOfWarBoard_b__0__,
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
  QuestBoardListViewItemDraw__SetupRewardIconDisp(
    this,
    PhaseDetailedEntity,
    dispType == 2,
    *(UnityEngine_Color_o *)(v5 + 24),
    v100);
  v101 = quest_info_k__BackingField->fields.questId;
  afterClear = PhaseDetailedEntity->fields.afterClear;
  v103 = *(float *)(v5 + 24);
  v104 = *(float *)(v5 + 28);
  v105 = *(float *)(v5 + 32);
  v106 = *(float *)(v5 + 36);
  IsRepeatReward = QuestEntity__IsRepeatReward(PhaseDetailedEntity, 0LL);
  v146.fields.r = v103;
  v146.fields.g = v104;
  v146.fields.b = v105;
  v146.fields.a = v106;
  QuestBoardListViewItemDraw__SetupFirstRewardDisp(this, v101, afterClear, v146, IsRepeatReward, v108);
  QuestBoardListViewItemDraw__SetupRewardGotAndNotGiveDisp(
    this,
    quest_info_k__BackingField,
    entity,
    *(UnityEngine_Color_o *)(v5 + 24),
    v109);
  QuestBoardListViewItemDraw__ResetInfoTextList(this, v110);
  fixedVal = -1;
  costCalcVal = 0;
  mInfoTextList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields.mInfoTextList;
  Instance = (__int64)QuestBoardListViewItemDraw__GetCampaignText(
                        this,
                        PhaseDetailedEntity->fields.id,
                        questPhase,
                        !v136,
                        &costCalcVal,
                        &fixedVal,
                        v112);
  if ( !mInfoTextList )
    goto LABEL_226;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    mInfoTextList,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
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
  v114 = *p_expireAt;
  if ( *p_expireAt >= 1 )
  {
    Instance = QuestEntity__HasFlag(PhaseDetailedEntity, 32LL, 0LL);
    if ( (Instance & 1) == 0 )
    {
      v115 = this->fields.mInfoTextList;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v116 = LocalizationManager__Get((System_String_o *)StringLiteral_13505/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0LL);
      v117 = (QuestBoardInformaionText_o *)sub_B52A54(QuestBoardInformaionText_TypeInfo);
      v147.fields.r = 0.0;
      v147.fields.g = 0.0;
      v147.fields.b = 0.0;
      v147.fields.a = 0.0;
      v145.fields.x = 0.0;
      v145.fields.y = 0.0;
      v145.fields.z = 0.0;
      v118 = (EventMissionProgressRequest_Argument_ProgressData_o *)v117;
      QuestBoardInformaionText___ctor(v117, v116, v114, 0, 0, v147, -1, 0, v145, 1, v132, 0LL, v133);
      if ( !v115 )
        goto LABEL_226;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v115,
        v118,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
    }
  }
LABEL_184:
  v119 = this->fields.mInfoTextList;
  if ( !v119 )
    goto LABEL_226;
  size = (unsigned int)v119->fields._size;
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  if ( (int)size < 1 )
  {
    v125 = 0;
    goto LABEL_196;
  }
  v121 = this->fields.mListViewObject;
  if ( !v121 )
    goto LABEL_226;
  Instance = (__int64)v121->fields.manager;
  if ( !Instance )
    goto LABEL_226;
  v122 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v122
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v122 - 8) != QuestBoardListViewManager_TypeInfo )
  {
    goto LABEL_228;
  }
  AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt((QuestBoardListViewManager_o *)Instance, size, 0LL);
  if ( v119->fields._size <= (unsigned int)AlphaAnimCnt )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  Instance = (__int64)v119->fields._items->m_Items[AlphaAnimCnt];
  if ( !Instance )
    goto LABEL_226;
  QuestBoardInformaionText__SetTime(
    (QuestBoardInformaionText_o *)Instance,
    &this->fields.mOptionInfoLb,
    &this->fields.mOptionInfoFrameSp,
    v123);
  Instance = (__int64)this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_226;
  BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)Instance, 1.0, 0LL);
  v125 = 1;
  quest_info_k__BackingField->fields.costCalcVal = costCalcVal;
  quest_info_k__BackingField->fields._fixedCostVal_k__BackingField = fixedVal;
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v125, 0LL);
  Instance = (__int64)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_226;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_226;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v125, 0LL);
  QuestBoardListViewItemDraw__SetCostDisp(
    this,
    PhaseDetailedEntity,
    v77 == 2,
    costCalcVal,
    fixedVal,
    *(UnityEngine_Color_o *)(v5 + 24),
    &isDoubleItemConsume,
    &isDoubleItemConsumeQp,
    &isTripleItemConsume,
    (const MethodInfo *)v132);
  Instance = (__int64)this->fields.mBoardMessage;
  if ( !Instance )
    goto LABEL_226;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_226;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_WarBoardQuestMaster___);
  if ( !Instance )
    goto LABEL_226;
  v126 = WarBoardQuestMaster__GetEntity(
           (WarBoardQuestMaster_o *)Instance,
           quest_info_k__BackingField->fields.questId,
           questPhase,
           0LL);
  if ( !v126 )
    return;
  v127 = v126;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_226;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_WarBoardStageMaster___);
  if ( !Instance )
    goto LABEL_226;
  Instance = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        v127->fields.stageId,
                        (const MethodInfo_23E22D8 *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__);
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
    sub_B52A5C(Instance, size);
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
  sub_B52920(
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
  if ( (byte_42B18DE & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B18DE = 1;
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
                                             (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
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
    sub_B52A5C(StatusSp, v12);
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

  if ( (byte_42B18E1 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_B52984(&QuestBoardListViewItemDraw_TypeInfo);
    byte_42B18E1 = 1;
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
                                         (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
      sub_B52A5C(mNextSp, info);
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

  if ( (byte_42B18DF & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B18DF = 1;
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
                                                          (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
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
    sub_B52A5C(v5, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewItemDraw__SetPrevSprite(
        QuestBoardListViewItemDraw_o *this,
        QuestEntity_o *questEnt,
        UnityEngine_Vector3_o pos,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  System_Collections_Generic_List_int__o *v9; // x21
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  QuestGroupMaster_o *v12; // x22
  TerminalPramsManager_c *v13; // x0
  const MethodInfo *v14; // x2
  UISprite_o *mPrevSp; // x20
  QuestBoardListViewItemDraw_c *v16; // x0
  System_String_o *QUEST_BOARD_PREV_ICON_NAME; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_42B18E2 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_B52984(&Method_System_Linq_Enumerable_ToList_int___);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&QuestBoardListViewItemDraw_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42B18E2 = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !questEnt )
    goto LABEL_38;
  v12 = (QuestGroupMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_38;
  Instance = (DataManager_o *)QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)Instance, questEnt->fields.id, 16, 0LL);
  if ( (_DWORD)Instance )
  {
    Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByGroupId(v12, (int32_t)Instance, 16, 0LL);
    if ( !Instance )
      goto LABEL_38;
    if ( Instance->fields.datalist )
    {
      Instance = (DataManager_o *)System_Linq_Enumerable__ToList_int_(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                    (const MethodInfo_1B7131C *)Method_System_Linq_Enumerable_ToList_int___);
      v9 = (System_Collections_Generic_List_int__o *)Instance;
    }
  }
  if ( !v9 )
LABEL_38:
    sub_B52A5C(Instance, v11);
  if ( v9->fields._size <= 0 )
    System_Collections_Generic_List_int___Add(
      v9,
      questEnt->fields.id,
      (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AD1A1 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AD1A1 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  if ( !System_Collections_Generic_List_int___Contains(
          v9,
          v13->static_fields->_LastPlayedQuestId_k__BackingField,
          (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__) )
    goto LABEL_24;
  Instance = (DataManager_o *)QuestBoardListViewItemDraw__GetStatusSp(this, 1, v14);
  if ( !Instance )
    goto LABEL_38;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
LABEL_24:
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
    goto LABEL_38;
  }
  mPrevSp = this->fields.mPrevSp;
  v16 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v16 = QuestBoardListViewItemDraw_TypeInfo;
  }
  QUEST_BOARD_PREV_ICON_NAME = v16->static_fields->QUEST_BOARD_PREV_ICON_NAME;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(mPrevSp, QUEST_BOARD_PREV_ICON_NAME, 0LL);
  Instance = (DataManager_o *)this->fields.mPrevSp;
  if ( !Instance )
    goto LABEL_38;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (DataManager_o *)this->fields.mPrevSp;
  if ( !Instance )
    goto LABEL_38;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  v19.fields.x = x;
  v19.fields.y = y;
  v19.fields.z = z;
  GameObjectExtensions__SetLocalPosition(gameObject, v19, 0LL);
  Instance = (DataManager_o *)this->fields.mPrevSp;
  if ( !Instance )
    goto LABEL_38;
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
  if ( (byte_42B1903 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_CondensedScaleSprite___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B1903 = 1;
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
                                                        (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_CondensedScaleSprite___);
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
                                                                   (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
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
    sub_B52A5C(IsNullOrEmpty, v12);
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

  if ( (byte_42B18D0 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_QuestRestrictionMaster___);
    sub_B52984(&Method_DataManager_GetMaster_RestrictionBaseMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B18D0 = 1;
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
  mOptionRestrinctionSp = (UnityEngine_Component_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_RestrictionBaseMaster___);
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
  mOptionRestrinctionSp = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mOptionRestrinctionSp
    || (mOptionRestrinctionSp = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)mOptionRestrinctionSp,
                                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestRestrictionMaster___)) == 0LL
    || (mOptionRestrinctionSp = (UnityEngine_Component_o *)QuestRestrictionMaster__GetRestrictionName(
                                                             (QuestRestrictionMaster_o *)mOptionRestrinctionSp,
                                                             questId,
                                                             phase,
                                                             0LL),
        !mOptionRestrinctionLb) )
  {
LABEL_18:
    sub_B52A5C(mOptionRestrinctionSp, *(_QWORD *)&questId);
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
    sub_B52A5C(mOptionRestrinctionLb, *(_QWORD *)&spacingX);
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
      sub_B52A5C(0LL, method);
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
    sub_B52A5C(StatusSp, v6);
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

  if ( (byte_42B18E3 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
    sub_B52984(&QuestBoardListViewManager_TypeInfo);
    byte_42B18E3 = 1;
  }
  StatusSp = QuestBoardListViewItemDraw__GetStatusSp(this, 4, v2);
  if ( !StatusSp )
    goto LABEL_12;
  Component_srcLineSprite = (TimeSyncAlphaSwitcher_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         (UnityEngine_GameObject_o *)StatusSp,
                                                         (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
  StatusSp = QuestBoardListViewItemDraw__GetStatusSp(this, 1, v7);
  if ( !StatusSp )
    goto LABEL_12;
  StatusSp = UnityEngine_GameObject__GetComponent_srcLineSprite_(
               (UnityEngine_GameObject_o *)StatusSp,
               (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
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
    sub_B52A5C(StatusSp, v5);
  }
  v12 = (QuestBoardListViewItemDraw_o *)sub_B52D50(StatusSp);
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
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Mathf__Min_41525188(
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
    v26 = sub_B52A88(this);
    sub_B52A28(v26, 0LL);
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
    sub_B52A5C(this, questBoardItem);
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
  if ( (byte_42B18F9 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&QuestBoardListViewItemDraw_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42B18F9 = 1;
  }
  mTerminalBanners = v2->fields.mTerminalBanners;
  if ( !mTerminalBanners )
    goto LABEL_43;
  if ( !mTerminalBanners->max_length )
  {
    v10 = sub_B52A88(this);
    sub_B52A28(v10, 0LL);
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
                                                            (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
          UnityEngine_Object__Destroy_35616956(Component_srcLineSprite, 0LL);
        }
        v7 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       v5,
                                       (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
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
          UnityEngine_Object__Destroy_35616956(v7, 0LL);
        }
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_42B1907 )
        {
          sub_B52984(&TerminalPramsManager_TypeInfo);
          byte_42B1907 = 1;
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
                                                 (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
    sub_B52A5C(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewItemDraw__SetupFirstRewardDisp(
        QuestBoardListViewItemDraw_o *this,
        int32_t questId,
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
  bool v15; // w21
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_42B18D9 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B52984(&SingletonTemplate_clsQuestCheck__TypeInfo);
    byte_42B18D9 = 1;
  }
  if ( afterClearType == 3 )
  {
    if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
    }
    mRewardFirstSP = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !mRewardFirstSP )
LABEL_14:
      sub_B52A5C(mRewardFirstSP, *(_QWORD *)&questId);
    v15 = !clsQuestCheck__IsQuestClear(mRewardFirstSP, questId, 0, 0LL);
  }
  else
  {
    v15 = 0;
  }
  mRewardFirstSP = (clsQuestCheck_o *)this->fields.mRewardFirstSP;
  if ( !mRewardFirstSP )
    goto LABEL_14;
  mRewardFirstSP = (clsQuestCheck_o *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)mRewardFirstSP,
                                        0LL);
  if ( !mRewardFirstSP )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mRewardFirstSP, v15 && !isRepeatReward, 0LL);
  mRewardFirstSP = (clsQuestCheck_o *)this->fields.mRewardFirstSP;
  if ( !mRewardFirstSP )
    goto LABEL_14;
  v16.fields.b = b;
  v16.fields.a = a;
  v16.fields.r = r;
  v16.fields.g = g;
  UIWidget__set_color((UIWidget_o *)mRewardFirstSP, v16, 0LL);
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
  if ( (byte_42B18DA & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_B52984(&CondType_TypeInfo);
    byte_42B18DA = 1;
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
  this = (QuestBoardListViewItemDraw_o *)CondType__IsQuestClear_25987760(questId, -1, 0, 0LL);
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
    sub_B52A5C(this, questInfo);
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
        bool isClosed,
        UnityEngine_Color_o color,
        const MethodInfo *method)
{
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  unsigned __int64 giftIconId; // x1
  UnityEngine_Component_o *mRewardIcon; // x0
  bool v18; // w1
  System_Collections_Generic_IEnumerable_TSource__o *GiftListById; // x21
  QuestBoardListViewItemDraw___c_c *v20; // x8
  struct QuestBoardListViewItemDraw___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__319_0; // x22
  Il2CppObject *v23; // x23
  struct QuestBoardListViewItemDraw___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct GiftEntity_array *v38; // x21
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  __int64 v40; // x10
  GiftEntity_o *v41; // x9
  int num; // w8
  int32_t v43; // w2
  int32_t v44; // w3
  __int64 v45; // x0
  UnityEngine_Color_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_42B18D7 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_GiftEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_GiftEntity___);
    sub_B52984(&Method_System_Func_GiftEntity__bool___ctor__);
    sub_B52984(&System_Func_GiftEntity__bool__TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_B52984(&QuestBoardListViewManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_QuestBoardListViewItemDraw___c__SetupRewardIconDisp_b__319_0__);
    sub_B52984(&QuestBoardListViewItemDraw___c_TypeInfo);
    byte_42B18D7 = 1;
  }
  this->fields.mRewardIconInfs = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.mRewardIconInfs,
    0LL,
    (System_String_array **)isClosed,
    (System_String_array **)method,
    v5,
    v6,
    v7,
    v8);
  mRewardIcon = (UnityEngine_Component_o *)this->fields.mRewardIcon;
  if ( !mRewardIcon )
    goto LABEL_57;
  mRewardIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mRewardIcon, 0LL);
  if ( !mRewardIcon )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mRewardIcon, 0, 0LL);
  if ( isClosed )
  {
    if ( !questEnt )
      goto LABEL_57;
    if ( QuestEntity__HasFlag(questEnt, 4096LL, 0LL) )
    {
      mRewardIcon = (UnityEngine_Component_o *)this->fields.mRewardIcon;
      if ( !mRewardIcon )
        goto LABEL_57;
      LODWORD(giftIconId) = 99;
      goto LABEL_13;
    }
  }
  else if ( !questEnt )
  {
    goto LABEL_57;
  }
  giftIconId = (unsigned int)questEnt->fields.giftIconId;
  if ( (int)giftIconId < 1 )
  {
    if ( questEnt->fields.giftId < 1 )
    {
      mRewardIcon = (UnityEngine_Component_o *)this->fields.mRewardObj;
      if ( !mRewardIcon )
        goto LABEL_57;
      v18 = 0;
      goto LABEL_16;
    }
    mRewardIcon = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( mRewardIcon )
    {
      mRewardIcon = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)mRewardIcon,
                                                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_GiftMaster___);
      if ( mRewardIcon )
      {
        GiftListById = (System_Collections_Generic_IEnumerable_TSource__o *)GiftMaster__GetGiftListById(
                                                                              (GiftMaster_o *)mRewardIcon,
                                                                              questEnt->fields.giftId,
                                                                              0LL);
        v20 = QuestBoardListViewItemDraw___c_TypeInfo;
        if ( (BYTE3(QuestBoardListViewItemDraw___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw___c_TypeInfo);
          v20 = QuestBoardListViewItemDraw___c_TypeInfo;
        }
        static_fields = v20->static_fields;
        _9__319_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__319_0;
        if ( !_9__319_0 )
        {
          if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v20);
            static_fields = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
          }
          v23 = (Il2CppObject *)static_fields->__9;
          _9__319_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_GiftEntity__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            _9__319_0,
            v23,
            Method_QuestBoardListViewItemDraw___c__SetupRewardIconDisp_b__319_0__,
            (const MethodInfo_2BC90BC *)Method_System_Func_GiftEntity__bool___ctor__);
          v24 = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
          v24->__9__319_0 = (struct System_Func_GiftEntity__bool__o *)_9__319_0;
          sub_B52920(
            (BattleServantConfConponent_o *)&v24->__9__319_0,
            (System_Int32_array **)_9__319_0,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30);
        }
        v31 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                GiftListById,
                (System_Func_TSource__bool__o *)_9__319_0,
                (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
        mRewardIcon = (UnityEngine_Component_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                   v31,
                                                   (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
        if ( mRewardIcon )
        {
          giftIconId = (unsigned __int64)mRewardIcon[1].klass;
          v38 = (struct GiftEntity_array *)mRewardIcon;
          if ( !giftIconId )
          {
LABEL_56:
            this->fields.mRewardIconInfs = v38;
            sub_B52920(
              (BattleServantConfConponent_o *)&this->fields.mRewardIconInfs,
              (System_Int32_array **)v38,
              v32,
              v33,
              v34,
              v35,
              v36,
              v37);
            goto LABEL_17;
          }
          mListViewObject = this->fields.mListViewObject;
          if ( mListViewObject )
          {
            mRewardIcon = (UnityEngine_Component_o *)mListViewObject->fields.manager;
            if ( mRewardIcon )
            {
              v40 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
              if ( *(&mRewardIcon->klass->_2.bitflags2 + 1) >= (unsigned int)v40
                && (QuestBoardListViewManager_c *)mRewardIcon->klass->_2.typeHierarchy[v40 - 1] == QuestBoardListViewManager_TypeInfo )
              {
                mRewardIcon = (UnityEngine_Component_o *)QuestBoardListViewManager__GetAlphaAnimCnt(
                                                           (QuestBoardListViewManager_o *)mRewardIcon,
                                                           giftIconId,
                                                           0LL);
                if ( (unsigned int)mRewardIcon < v38->max_length )
                {
                  v41 = v38->m_Items[(int)mRewardIcon];
                  if ( !v41 )
                    goto LABEL_57;
                  giftIconId = (unsigned int)v41->fields.prioredIconId;
                  mRewardIcon = (UnityEngine_Component_o *)this->fields.mRewardIcon;
                  num = v41->fields.num;
                  if ( (int)giftIconId < 1 )
                  {
                    if ( !mRewardIcon )
                      goto LABEL_57;
                    if ( num <= 1 )
                      v44 = -1;
                    else
                      v44 = v41->fields.num;
                    ItemIconComponent__SetGift(
                      (ItemIconComponent_o *)mRewardIcon,
                      v41->fields.type,
                      v41->fields.objectId,
                      v44,
                      1,
                      0LL);
                  }
                  else
                  {
                    if ( !mRewardIcon )
                      goto LABEL_57;
                    if ( num <= 1 )
                      v43 = -1;
                    else
                      v43 = v41->fields.num;
                    ItemIconComponent__SetItemImage_28310700((ItemIconComponent_o *)mRewardIcon, giftIconId, v43, 0LL);
                  }
                  mRewardIcon = (UnityEngine_Component_o *)this->fields.mRewardIcon;
                  if ( mRewardIcon )
                  {
                    mRewardIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mRewardIcon, 0LL);
                    if ( mRewardIcon )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mRewardIcon, 1, 0LL);
                      goto LABEL_56;
                    }
                  }
                  goto LABEL_57;
                }
              }
              else
              {
                mRewardIcon = (UnityEngine_Component_o *)sub_B52D50(mRewardIcon);
              }
              v45 = sub_B52A88(mRewardIcon);
              sub_B52A28(v45, 0LL);
            }
          }
        }
      }
    }
LABEL_57:
    sub_B52A5C(mRewardIcon, giftIconId);
  }
  mRewardIcon = (UnityEngine_Component_o *)this->fields.mRewardIcon;
  if ( !mRewardIcon )
    goto LABEL_57;
LABEL_13:
  ItemIconComponent__SetItemImage((ItemIconComponent_o *)mRewardIcon, giftIconId, 0LL);
  mRewardIcon = (UnityEngine_Component_o *)this->fields.mRewardIcon;
  if ( !mRewardIcon )
    goto LABEL_57;
  mRewardIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mRewardIcon, 0LL);
  if ( !mRewardIcon )
    goto LABEL_57;
  v18 = 1;
LABEL_16:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mRewardIcon, v18, 0LL);
LABEL_17:
  mRewardIcon = (UnityEngine_Component_o *)this->fields.mRewardObj;
  if ( !mRewardIcon )
    goto LABEL_57;
  mRewardIcon = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             (UnityEngine_GameObject_o *)mRewardIcon,
                                             (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !mRewardIcon )
    goto LABEL_57;
  v46.fields.r = r;
  v46.fields.g = g;
  v46.fields.b = b;
  v46.fields.a = a;
  UIWidget__set_color((UIWidget_o *)mRewardIcon, v46, 0LL);
  mRewardIcon = (UnityEngine_Component_o *)this->fields.mRewardIcon;
  if ( !mRewardIcon )
    goto LABEL_57;
  v47.fields.b = b;
  v47.fields.a = a;
  v47.fields.r = r;
  v47.fields.g = g;
  ItemIconComponent__SetColor((ItemIconComponent_o *)mRewardIcon, v47, 0LL);
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

  if ( (byte_42B18FA & 1) == 0 )
  {
    sub_B52984(&EventDelegate_Callback_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
    sub_B52984(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&QuestBoardListViewItemDraw_TypeInfo);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&Method_QuestBoardListViewItemDraw___c__DisplayClass369_0__StartEntryBanner_b__0__);
    sub_B52984(&QuestBoardListViewItemDraw___c__DisplayClass369_0_TypeInfo);
    byte_42B18FA = 1;
  }
  v5 = sub_B52A54(QuestBoardListViewItemDraw___c__DisplayClass369_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass369_0___ctor(
    (QuestBoardListViewItemDraw___c__DisplayClass369_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_28;
  *(_QWORD *)(v5 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = endCallback;
  sub_B52920(
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
  if ( !byte_42B1907 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42B1907 = 1;
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
    v31 = sub_B52A88(gameObject);
    sub_B52A28(v31, 0LL);
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
          (const MethodInfo_1B7B0BC *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
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
  v29 = (EventDelegate_Callback_o *)sub_B52A54(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v29,
    (Il2CppObject *)v5,
    Method_QuestBoardListViewItemDraw___c__DisplayClass369_0__StartEntryBanner_b__0__,
    0LL);
  UITweener__SetOnFinished((UITweener_o *)v23, v29, 0LL);
  UITweener__PlayForward((UITweener_o *)v23, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                             v22,
                                             (const MethodInfo_1B7B0BC *)Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
  if ( !gameObject )
LABEL_28:
    sub_B52A5C(gameObject, v7);
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
  System_String_o **p_mCorners; // x8
  __int64 v10; // x0

  v4 = this;
  if ( (byte_42B18FC & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_B52984(&QuestBoardListViewItemDraw_TypeInfo);
    byte_42B18FC = 1;
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
        v10 = sub_B52A88(this);
        sub_B52A28(v10, 0LL);
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
        p_mCorners = (System_String_o **)&this->fields.mTitleLevelSp[1].fields.mCorners;
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
        p_mCorners = (System_String_o **)&this->fields.mTitleLevelSp[1].fields.mAlphaFrameID;
        if ( !v8 )
          break;
      }
      UISprite__set_spriteName(v8, *p_mCorners, 0LL);
      if ( (int)++v5 >= v4->fields.mBannerCount )
        return;
    }
    sub_B52A5C(this, *(_QWORD *)&index);
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
  if ( (byte_42B18C7 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_B52984(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__);
    byte_42B18C7 = 1;
  }
  mInfoTextList = v7->fields.mInfoTextList;
  if ( !mInfoTextList )
    goto LABEL_8;
  if ( mInfoTextList->fields._size <= (unsigned int)strIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  this = (QuestBoardListViewItemDraw_o *)mInfoTextList->fields._items->m_Items[strIndex];
  if ( !this )
LABEL_8:
    sub_B52A5C(this, questBoardItem);
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
      sub_B52A5C(this, questBoardItem);
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
  UnityEngine_Vector2_o ScreenPosition_27819320; // kr00_8
  _BOOL4 mIsEnableDragX; // w8

  v4 = this;
  if ( (byte_42B18FF & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_B52984(&CTouch_TypeInfo);
    byte_42B18FF = 1;
  }
  if ( v4->fields.mIsPressedForDragX )
  {
    v4->fields.mTouchPosOld = v4->fields.mTouchPosNow;
    if ( !questBoardManager )
      sub_B52A5C(this, questBoardManager);
    mUICamera = questBoardManager->fields.mUICamera;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    ScreenPosition_27819320 = CTouch__getScreenPosition_27819320(mUICamera, 0LL);
    mIsEnableDragX = v4->fields.mIsEnableDragX;
    v4->fields.mTouchPosNow = ScreenPosition_27819320;
    if ( mIsEnableDragX )
      v4->fields.mTouchPosDif = ScreenPosition_27819320.fields.x - v4->fields.mTouchPosOld.fields.x;
  }
}


void __fastcall QuestBoardListViewItemDraw___SetAdvanceNoticeText_g__CalculateLabel_320_0(
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
  if ( (byte_42B1906 & 1) == 0 )
  {
    label = (UILabel_o *)sub_B52984(&QuestBoardListViewItemDraw_TypeInfo);
    byte_42B1906 = 1;
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
    sub_B52A5C(label, message);
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
    sub_B52A5C(0LL, onOff);
  UnityEngine_GameObject__SetActive(mQuestInfoShowing, onOff, 0LL);
}


void __fastcall QuestBoardListViewItemDraw__set_bannerState(
        QuestBoardListViewItemDraw_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._bannerState_k__BackingField = value;
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

  if ( (byte_42AF238 & 1) == 0 )
  {
    sub_B52984(&QuestBoardListViewItemDraw___c_TypeInfo);
    byte_42AF238 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(QuestBoardListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall QuestBoardListViewItemDraw___c___ctor(QuestBoardListViewItemDraw___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw___c___IsValidSupportSelection_b__347_0(
        QuestBoardListViewItemDraw___c_o *this,
        RestrictionEntity_o *rest,
        const MethodInfo *method)
{
  if ( !rest )
    sub_B52A5C(this, 0LL);
  return rest->fields.type == 9;
}


int32_t __fastcall QuestBoardListViewItemDraw___c___SetItemOfQuest_b__307_1(
        QuestBoardListViewItemDraw___c_o *this,
        ViewEnemyEntity_o *value,
        const MethodInfo *method)
{
  if ( !value )
    sub_B52A5C(this, 0LL);
  return value->fields.enemyId;
}


bool __fastcall QuestBoardListViewItemDraw___c___SetupRewardIconDisp_b__319_0(
        QuestBoardListViewItemDraw___c_o *this,
        GiftEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_B52A5C(this, 0LL);
  return ent->fields.type != 15;
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass305_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass305_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw___c__DisplayClass305_0___IsPurchasedByRarePrism_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass305_0_o *this,
        MapControl_QuestInfo_o *quest,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw___c__DisplayClass305_0_o *v4; // x20
  struct MapControl_WarInfo_o *WarInfo_k__BackingField; // x8
  struct WarEntity_o *warEnt; // x9
  UserQuestMaster_o *userQuestMst; // x20
  UserQuestEntity_o *EntityFromId; // x0

  v4 = this;
  if ( (byte_42AF239 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw___c__DisplayClass305_0_o *)sub_B52984(&NetworkManager_TypeInfo);
    byte_42AF239 = 1;
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
  this = (QuestBoardListViewItemDraw___c__DisplayClass305_0_o *)NetworkManager__get_UserId(0LL);
  if ( !userQuestMst )
LABEL_14:
    sub_B52A5C(this, quest);
  EntityFromId = UserQuestMaster__getEntityFromId(userQuestMst, (int64_t)this, quest->fields.questId, 0LL);
  if ( EntityFromId )
    return UserQuestEntity__HasStatus(EntityFromId, 8, 0LL);
  return 0;
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass306_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass306_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw___c__DisplayClass306_0___HasNewQuestInWar_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass306_0_o *this,
        MapControl_QuestInfo_o *quest,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw___c__DisplayClass306_0_o *v3; // x20
  struct MapControl_WarInfo_o *WarInfo_k__BackingField; // x8

  v3 = this;
  if ( this->fields.isMainInterlude )
  {
    if ( !quest
      || (this = (QuestBoardListViewItemDraw___c__DisplayClass306_0_o *)MapControl_QuestInfo__GetMine(quest, 0LL)) == 0LL )
    {
LABEL_11:
      sub_B52A5C(this, quest);
    }
    this = (QuestBoardListViewItemDraw___c__DisplayClass306_0_o *)QuestEntity__HasFlag((QuestEntity_o *)this, 4LL, 0LL);
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


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass307_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass307_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass307_0___SetItemOfQuest_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass307_0_o *this,
        const MethodInfo *method)
{
  struct QuestBoardListViewItemDraw_o *_4__this; // x8
  QuestBoardListViewItemDraw___c__DisplayClass307_0_o *v3; // x19
  struct QuestBoardListViewItemDraw_o *v4; // x8
  struct QuestBoardListViewItemDraw_o *v5; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  v3 = this;
  this = (QuestBoardListViewItemDraw___c__DisplayClass307_0_o *)_4__this->fields.mLabelNameSp;
  if ( !this )
    goto LABEL_11;
  this = (QuestBoardListViewItemDraw___c__DisplayClass307_0_o *)UnityEngine_Behaviour__get_enabled(
                                                                  (UnityEngine_Behaviour_o *)this,
                                                                  0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v4 = v3->fields.__4__this;
    if ( !v4 )
      goto LABEL_11;
    if ( v4->fields.boardIconQuestId == v3->fields.boardIconQuestIdOld )
    {
      this = (QuestBoardListViewItemDraw___c__DisplayClass307_0_o *)v4->fields.boardIconTexture;
      if ( this )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
        v5 = v3->fields.__4__this;
        if ( v5 )
        {
          this = (QuestBoardListViewItemDraw___c__DisplayClass307_0_o *)v5->fields.boardIconTexture;
          if ( this )
          {
            UIWidget__set_color((UIWidget_o *)this, v3->fields.baseColor, 0LL);
            return;
          }
        }
      }
LABEL_11:
      sub_B52A5C(this, method);
    }
  }
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass308_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass308_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass308_0___SetItemOfWarBoard_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass308_0_o *this,
        const MethodInfo *method)
{
  struct QuestBoardListViewItemDraw_o *_4__this; // x8
  QuestBoardListViewItemDraw___c__DisplayClass308_0_o *v3; // x19
  struct QuestBoardListViewItemDraw_o *v4; // x8
  struct QuestBoardListViewItemDraw_o *v5; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  v3 = this;
  this = (QuestBoardListViewItemDraw___c__DisplayClass308_0_o *)_4__this->fields.mLabelNameSp;
  if ( !this )
    goto LABEL_11;
  this = (QuestBoardListViewItemDraw___c__DisplayClass308_0_o *)UnityEngine_Behaviour__get_enabled(
                                                                  (UnityEngine_Behaviour_o *)this,
                                                                  0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v4 = v3->fields.__4__this;
    if ( !v4 )
      goto LABEL_11;
    if ( v4->fields.boardIconQuestId == v3->fields.boardIconQuestIdOld )
    {
      this = (QuestBoardListViewItemDraw___c__DisplayClass308_0_o *)v4->fields.boardIconTexture;
      if ( this )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
        v5 = v3->fields.__4__this;
        if ( v5 )
        {
          this = (QuestBoardListViewItemDraw___c__DisplayClass308_0_o *)v5->fields.boardIconTexture;
          if ( this )
          {
            UIWidget__set_color((UIWidget_o *)this, v3->fields.baseColor, 0LL);
            return;
          }
        }
      }
LABEL_11:
      sub_B52A5C(this, method);
    }
  }
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass343_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass343_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw___c__DisplayClass343_0___GetCampaignTextListByEventQuestMaster_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass343_0_o *this,
        EventEntity_o *entity,
        const MethodInfo *method)
{
  struct EventCampaignEntity_o *eventCampaignEnt; // x8

  if ( !entity || (eventCampaignEnt = this->fields.eventCampaignEnt) == 0LL )
    sub_B52A5C(this, entity);
  return entity->fields.id == eventCampaignEnt->fields.eventId;
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass343_1___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass343_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw___c__DisplayClass343_1___GetCampaignTextListByEventQuestMaster_b__1(
        QuestBoardListViewItemDraw___c__DisplayClass343_1_o *this,
        EventEntity_o *entity,
        const MethodInfo *method)
{
  struct EventCampaignEntity_o *eventCampaignEnt; // x8

  if ( !entity || (eventCampaignEnt = this->fields.eventCampaignEnt) == 0LL )
    sub_B52A5C(this, entity);
  return entity->fields.id == eventCampaignEnt->fields.eventId;
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass345_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass345_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw___c__DisplayClass345_0___CreateQuestBoardInformationText_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass345_0_o *this,
        UserOwnItemInfo_o *x,
        const MethodInfo *method)
{
  const MethodInfo_2172180 *v3; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  System_Nullable_long__o v9; // [xsp+0h] [xbp-30h] BYREF
  System_Nullable_long__o v10; // 0:x0.16

  if ( (byte_42AF23A & 1) == 0 )
  {
    sub_B52984(&Method_System_Nullable_long___ctor__);
    byte_42AF23A = 1;
  }
  *(_QWORD *)&v10.fields.has_value = this->fields.checkTime;
  v10.fields.value = (int64_t)&v9;
  v9.fields.value = 0LL;
  *(_QWORD *)&v9.fields.has_value = 0LL;
  System_Nullable_long____ctor(v10, Method_System_Nullable_long___ctor__, v3);
  if ( !x )
    sub_B52A5C(v6, v7);
  return !UserOwnItemInfo__IsExpired(x, v9, 0LL);
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass369_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass369_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass369_0___StartEntryBanner_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass369_0_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct QuestBoardListViewItemDraw_o *_4__this; // x8

  if ( (byte_42AF23B & 1) == 0 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AF23B = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AD18F )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AD18F = 1;
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
    sub_B52A5C(v3, method);
  _4__this->fields._bannerState_k__BackingField = 2;
  ActionExtensions__Call(this->fields.endCallback, 0LL);
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass380_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass380_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass380_0___LoadBoardIconTexture_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass380_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw___c__DisplayClass380_0_o *v4; // x19
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
  if ( (byte_42AF23C & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_Texture2D____68579976);
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&UnityEngine_Material_TypeInfo);
    sub_B52984(&QuestBoardListViewItemDraw_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&StringLiteral_16241/*"_alpha"*/);
    sub_B52984(&StringLiteral_4576/*"Custom/SpriteWithMask"*/);
    this = (QuestBoardListViewItemDraw___c__DisplayClass380_0_o *)sub_B52984(&StringLiteral_16122/*"_MaskTex"*/);
    byte_42AF23C = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_22;
  this = (QuestBoardListViewItemDraw___c__DisplayClass380_0_o *)System_String__op_Inequality(
                                                                  v4->fields.loadBoardIconName,
                                                                  _4__this->fields.boardIconName,
                                                                  0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v14 = v4->fields.__4__this;
    if ( v14 )
    {
      v14->fields.boardIconAssetData = assetData;
      sub_B52920(
        (BattleServantConfConponent_o *)&v14->fields.boardIconAssetData,
        (System_Int32_array **)assetData,
        v6,
        v7,
        v8,
        v9,
        v10,
        v11);
      v15 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4576/*"Custom/SpriteWithMask"*/, 0LL);
      v16 = (UnityEngine_Material_o *)sub_B52A54(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor(v16, v15, 0LL);
      v17 = v4->fields.__4__this;
      if ( v17 )
      {
        this = (QuestBoardListViewItemDraw___c__DisplayClass380_0_o *)v17->fields.boardIconTexture;
        if ( this )
        {
          this = (QuestBoardListViewItemDraw___c__DisplayClass380_0_o *)((__int64 (__fastcall *)(QuestBoardListViewItemDraw___c__DisplayClass380_0_o *, UnityEngine_Material_o *, Il2CppMethodPointer))this->klass[1].vtable._2_GetHashCode.method)(
                                                                          this,
                                                                          v16,
                                                                          this->klass[1].vtable._3_ToString.methodPtr);
          v18 = v4->fields.__4__this;
          if ( v18 )
          {
            this = (QuestBoardListViewItemDraw___c__DisplayClass380_0_o *)v18->fields.boardIconAssetData;
            if ( this )
            {
              this = (QuestBoardListViewItemDraw___c__DisplayClass380_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                              (AssetData_o *)this,
                                                                              v18->fields.boardIconName,
                                                                              (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_Texture2D____68579976);
              if ( v16 )
              {
                UnityEngine_Material__set_mainTexture(v16, (UnityEngine_Texture_o *)this, 0LL);
                v19 = v4->fields.__4__this;
                if ( v19 )
                {
                  boardIconAssetData = v19->fields.boardIconAssetData;
                  this = (QuestBoardListViewItemDraw___c__DisplayClass380_0_o *)System_String__Concat_44568316(
                                                                                  v19->fields.boardIconName,
                                                                                  (System_String_o *)StringLiteral_16241/*"_alpha"*/,
                                                                                  0LL);
                  if ( boardIconAssetData )
                  {
                    Object_WarBoardWaitTimeSetting = (UnityEngine_Texture_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                boardIconAssetData,
                                                                                (System_String_o *)this,
                                                                                (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_Texture2D____68579976);
                    UnityEngine_Material__SetTexture(
                      v16,
                      (System_String_o *)StringLiteral_16122/*"_MaskTex"*/,
                      Object_WarBoardWaitTimeSetting,
                      0LL);
                    this = (QuestBoardListViewItemDraw___c__DisplayClass380_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_B52A5C(this, assetData);
  }
  v12 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v12 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v13 = System_String__Concat_44568316(
          v12->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH,
          v4->fields.loadBoardIconName,
          0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(v13, 0LL);
}