// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // s3
  float v3; // s4
  float v4; // s5
  float v5; // s6
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
  float v68; // s0
  QuestBoardListViewItemDraw_c *v69; // x8
  int v70; // s1
  int v71; // s2
  float v72; // s4
  float v73; // s5
  float v74; // s6
  QuestBoardListViewItemDraw_c *v75; // x8
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v77; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v78; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v79; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v80; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v81; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v82; // x0
  System_Int32_array **v83; // x1
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  struct QuestBoardListViewItemDraw_StaticFields *v90; // x0
  System_Int32_array **v91; // x1
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  QuestBoardListViewItemDraw_c *v98; // x8
  struct QuestBoardListViewItemDraw_StaticFields *v99; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v100; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v101; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v102; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v103; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v104; // x9
  System_Int32_array **v105; // x1
  BattleServantConfConponent_o *p_COST_BG_ITEM; // x0
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_Int32_array **v113; // x1
  BattleServantConfConponent_o *p_COST_BG_QP; // x0
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  QuestBoardListViewItemDraw_c *v121; // x8
  struct QuestBoardListViewItemDraw_StaticFields *v122; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v123; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v124; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v125; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v126; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v127; // x9
  System_Int32_array **v128; // x1
  BattleServantConfConponent_o *p_SHOHI_SP_NAME; // x0
  System_String_array **v130; // x2
  System_String_array **v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7
  System_Int32_array **v136; // x1
  BattleServantConfConponent_o *p_SHOHI_SP_NAME_WAR_BOARD; // x0
  System_String_array **v138; // x2
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  System_Int32_array **v144; // x1
  BattleServantConfConponent_o *p_QUEST_BOARD_COSTNAME; // x0
  System_String_array **v146; // x2
  System_String_array **v147; // x3
  System_Boolean_array **v148; // x4
  System_Int32_array **v149; // x5
  System_Int32_array *v150; // x6
  System_Int32_array *v151; // x7
  QuestBoardListViewItemDraw_c *v152; // x8
  QuestBoardListViewItemDraw_c *v153; // x8
  struct QuestBoardListViewItemDraw_StaticFields *v154; // x8
  QuestBoardListViewItemDraw_c *v155; // x8
  struct QuestBoardListViewItemDraw_StaticFields *v156; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v157; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v158; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v159; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v160; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v161; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v162; // x8
  QuestBoardListViewItemDraw_c *v163; // x8
  struct QuestBoardListViewItemDraw_StaticFields *v164; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v165; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v166; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v167; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v168; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v169; // x9
  System_Int32_array **v170; // x1
  BattleServantConfConponent_o *p_EVENT_WAR_SPNAME_PREFIX; // x0
  System_String_array **v172; // x2
  System_String_array **v173; // x3
  System_Boolean_array **v174; // x4
  System_Int32_array **v175; // x5
  System_Int32_array *v176; // x6
  System_Int32_array *v177; // x7
  System_Int32_array **v178; // x1
  BattleServantConfConponent_o *p_EVENT_WAR_SUBFOLDER_SPNAME_PREFIX; // x0
  System_String_array **v180; // x2
  System_String_array **v181; // x3
  System_Boolean_array **v182; // x4
  System_Int32_array **v183; // x5
  System_Int32_array *v184; // x6
  System_Int32_array *v185; // x7
  System_Int32_array **v186; // x1
  BattleServantConfConponent_o *p_QUEST_BOARD_SPNAME_PREFIX; // x0
  System_String_array **v188; // x2
  System_String_array **v189; // x3
  System_Boolean_array **v190; // x4
  System_Int32_array **v191; // x5
  System_Int32_array *v192; // x6
  System_Int32_array *v193; // x7
  System_Int32_array **v194; // x1
  BattleServantConfConponent_o *p_RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX; // x0
  System_String_array **v196; // x2
  System_String_array **v197; // x3
  System_Boolean_array **v198; // x4
  System_Int32_array **v199; // x5
  System_Int32_array *v200; // x6
  System_Int32_array *v201; // x7
  System_Int32_array **v202; // x1
  BattleServantConfConponent_o *p_QUEST_BOARD_ICON_SPNAME_PREFIX; // x0
  System_String_array **v204; // x2
  System_String_array **v205; // x3
  System_Boolean_array **v206; // x4
  System_Int32_array **v207; // x5
  System_Int32_array *v208; // x6
  System_Int32_array *v209; // x7
  System_Int32_array **v210; // x1
  BattleServantConfConponent_o *p_QUEST_BOARD_MASK_SPNAME_PREFIX; // x0
  System_String_array **v212; // x2
  System_String_array **v213; // x3
  System_Boolean_array **v214; // x4
  System_Int32_array **v215; // x5
  System_Int32_array *v216; // x6
  System_Int32_array *v217; // x7
  System_Int32_array **v218; // x1
  BattleServantConfConponent_o *p_QUEST_BOARD_SHOHI_SPNAME_PREFIX; // x0
  System_String_array **v220; // x2
  System_String_array **v221; // x3
  System_Boolean_array **v222; // x4
  System_Int32_array **v223; // x5
  System_Int32_array *v224; // x6
  System_Int32_array *v225; // x7
  System_Int32_array **v226; // x1
  BattleServantConfConponent_o *p_QUEST_BOARD_AP_SPNAME_PREFIX; // x0
  System_String_array **v228; // x2
  System_String_array **v229; // x3
  System_Boolean_array **v230; // x4
  System_Int32_array **v231; // x5
  System_Int32_array *v232; // x6
  System_Int32_array *v233; // x7
  System_Int32_array **v234; // x1
  BattleServantConfConponent_o *p_QUEST_BOARD_INFO_FRAME_NAME; // x0
  System_String_array **v236; // x2
  System_String_array **v237; // x3
  System_Boolean_array **v238; // x4
  System_Int32_array **v239; // x5
  System_Int32_array *v240; // x6
  System_Int32_array *v241; // x7
  System_Int32_array **v242; // x1
  BattleServantConfConponent_o *p_QUEST_BOARD_DAMAGE_RECODE_NAME; // x0
  System_String_array **v244; // x2
  System_String_array **v245; // x3
  System_Boolean_array **v246; // x4
  System_Int32_array **v247; // x5
  System_Int32_array *v248; // x6
  System_Int32_array *v249; // x7
  System_Int32_array **v250; // x1
  BattleServantConfConponent_o *p_QUEST_BOARD_PREV_ICON_NAME; // x0
  System_String_array **v252; // x2
  System_String_array **v253; // x3
  System_Boolean_array **v254; // x4
  System_Int32_array **v255; // x5
  System_Int32_array *v256; // x6
  System_Int32_array *v257; // x7
  System_Int32_array **v258; // x1
  BattleServantConfConponent_o *p_QUEST_BOARD_KNOCKDOWN_RECODE_NAME; // x0
  System_String_array **v260; // x2
  System_String_array **v261; // x3
  System_Boolean_array **v262; // x4
  System_Int32_array **v263; // x5
  System_Int32_array *v264; // x6
  System_Int32_array *v265; // x7
  System_Int32_array **v266; // x1
  BattleServantConfConponent_o *p_QUEST_BOARD_ICON_TEXTURE_PATH; // x0
  System_String_array **v268; // x2
  System_String_array **v269; // x3
  System_Boolean_array **v270; // x4
  System_Int32_array **v271; // x5
  System_Int32_array *v272; // x6
  System_Int32_array *v273; // x7
  System_Int32_array **v274; // x1
  BattleServantConfConponent_o *p_QUEST_BOARD_ICON_TEXTURE_PREFIX; // x0
  System_String_array **v276; // x2
  System_String_array **v277; // x3
  System_Boolean_array **v278; // x4
  System_Int32_array **v279; // x5
  System_Int32_array *v280; // x6
  System_Int32_array *v281; // x7
  QuestBoardListViewItemDraw_c *v282; // x8
  System_Int32_array **v283; // x1
  BattleServantConfConponent_o *p_BANNER_POINT_SPNAME_ON; // x0
  System_String_array **v285; // x2
  System_String_array **v286; // x3
  System_Boolean_array **v287; // x4
  System_Int32_array **v288; // x5
  System_Int32_array *v289; // x6
  System_Int32_array *v290; // x7
  System_Int32_array **v291; // x1
  BattleServantConfConponent_o *p_BANNER_POINT_SPNAME_OFF; // x0
  System_String_array **v293; // x2
  System_String_array **v294; // x3
  System_Boolean_array **v295; // x4
  System_Int32_array **v296; // x5
  System_Int32_array *v297; // x6
  System_Int32_array *v298; // x7
  QuestBoardListViewItemDraw_c *v299; // x8
  System_Int32_array **v300; // x1
  BattleServantConfConponent_o *p_SHORTCUT_FACE_MASK_SPNAME; // x0
  System_String_array **v302; // x2
  System_String_array **v303; // x3
  System_Boolean_array **v304; // x4
  System_Int32_array **v305; // x5
  System_Int32_array *v306; // x6
  System_Int32_array *v307; // x7
  System_Int32_array **v308; // x1
  BattleServantConfConponent_o *p_QUEST_STORY_FACE_MASK_SPNAME; // x0
  System_String_array **v310; // x2
  System_String_array **v311; // x3
  System_Boolean_array **v312; // x4
  System_Int32_array **v313; // x5
  System_Int32_array *v314; // x6
  System_Int32_array *v315; // x7
  System_Int32_array **v316; // x1
  BattleServantConfConponent_o *p_QUEST_MAIN_FACE_MASK_SPNAME; // x0
  System_String_array **v318; // x2
  System_String_array **v319; // x3
  System_Boolean_array **v320; // x4
  System_Int32_array **v321; // x5
  System_Int32_array *v322; // x6
  System_Int32_array *v323; // x7
  System_Int32_array **v324; // x1
  BattleServantConfConponent_o *p_QUEST_EVENT_FACE_MASK_SPNAME; // x0
  System_String_array **v326; // x2
  System_String_array **v327; // x3
  System_Boolean_array **v328; // x4
  System_Int32_array **v329; // x5
  System_Int32_array *v330; // x6
  System_Int32_array *v331; // x7
  __int64 v332; // x2
  __int64 v333; // x0
  System_String_array **v334; // x2
  System_String_array **v335; // x3
  System_Boolean_array **v336; // x4
  System_Int32_array **v337; // x5
  System_Int32_array *v338; // x6
  System_Int32_array *v339; // x7
  System_Int32_array **v340; // x19
  void *v341; // x0
  System_Int32_array **v342; // x1
  System_String_array **v343; // x3
  System_Boolean_array **v344; // x4
  System_Int32_array **v345; // x5
  System_Int32_array *v346; // x6
  System_Int32_array *v347; // x7
  BattleServantConfConponent_o *p_RP_SPNAME_FRAME; // x0
  System_String_array **v349; // x2
  System_String_array **v350; // x3
  System_Boolean_array **v351; // x4
  System_Int32_array **v352; // x5
  System_Int32_array *v353; // x6
  System_Int32_array *v354; // x7
  __int64 v355; // x2
  __int64 v356; // x0
  System_String_array **v357; // x3
  System_Boolean_array **v358; // x4
  System_Int32_array **v359; // x5
  System_Int32_array *v360; // x6
  System_Int32_array *v361; // x7
  System_Int32_array **v362; // x19
  System_String_array **v363; // x3
  System_Boolean_array **v364; // x4
  System_Int32_array **v365; // x5
  System_Int32_array *v366; // x6
  System_Int32_array *v367; // x7
  BattleServantConfConponent_o *p_RP_SPNAME_POINT; // x0
  System_String_array **v369; // x2
  System_String_array **v370; // x3
  System_Boolean_array **v371; // x4
  System_Int32_array **v372; // x5
  System_Int32_array *v373; // x6
  System_Int32_array *v374; // x7
  QuestBoardListViewItemDraw_c *v375; // x8
  struct QuestBoardListViewItemDraw_StaticFields *v376; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v377; // x9
  System_Int32_array **v378; // x1
  BattleServantConfConponent_o *p_QBOARD_CAP_CLOSED; // x0
  System_String_array **v380; // x2
  System_String_array **v381; // x3
  System_Boolean_array **v382; // x4
  System_Int32_array **v383; // x5
  System_Int32_array *v384; // x6
  System_Int32_array *v385; // x7
  System_Int32_array **v386; // x1
  BattleServantConfConponent_o *p_QBOARD_CAP_CLOSED_SPECIAL_FORMAT; // x0
  System_String_array **v388; // x2
  System_String_array **v389; // x3
  System_Boolean_array **v390; // x4
  System_Int32_array **v391; // x5
  System_Int32_array *v392; // x6
  System_Int32_array *v393; // x7
  System_Int32_array **v394; // x1
  BattleServantConfConponent_o *p_QBOARD_CAP_CLOSED_SPECIAL; // x0
  System_String_array **v396; // x2
  System_String_array **v397; // x3
  System_Boolean_array **v398; // x4
  System_Int32_array **v399; // x5
  System_Int32_array *v400; // x6
  System_Int32_array *v401; // x7
  System_Int32_array **v402; // x1
  BattleServantConfConponent_o *p_QBOARD_CAP_CLOSED_SPECIAL_2; // x0
  System_String_array **v404; // x2
  System_String_array **v405; // x3
  System_Boolean_array **v406; // x4
  System_Int32_array **v407; // x5
  System_Int32_array *v408; // x6
  System_Int32_array *v409; // x7
  System_Int32_array **v410; // x1
  BattleServantConfConponent_o *p_QBOARD_CAP_CLOSED_SPECIAL_3; // x0
  System_String_array **v412; // x2
  System_String_array **v413; // x3
  System_Boolean_array **v414; // x4
  System_Int32_array **v415; // x5
  System_Int32_array *v416; // x6
  System_Int32_array *v417; // x7
  __int64 v418; // x2
  __int64 v419; // x0
  System_String_array **v420; // x3
  System_Boolean_array **v421; // x4
  System_Int32_array **v422; // x5
  System_Int32_array *v423; // x6
  System_Int32_array *v424; // x7
  System_Int32_array **v425; // x19
  System_String_array **v426; // x3
  System_Boolean_array **v427; // x4
  System_Int32_array **v428; // x5
  System_Int32_array *v429; // x6
  System_Int32_array *v430; // x7
  System_String_array **v431; // x3
  System_Boolean_array **v432; // x4
  System_Int32_array **v433; // x5
  System_Int32_array *v434; // x6
  System_Int32_array *v435; // x7
  System_String_array **v436; // x3
  System_Boolean_array **v437; // x4
  System_Int32_array **v438; // x5
  System_Int32_array *v439; // x6
  System_Int32_array *v440; // x7
  System_String_array **v441; // x3
  System_Boolean_array **v442; // x4
  System_Int32_array **v443; // x5
  System_Int32_array *v444; // x6
  System_Int32_array *v445; // x7
  System_String_array **v446; // x3
  System_Boolean_array **v447; // x4
  System_Int32_array **v448; // x5
  System_Int32_array *v449; // x6
  System_Int32_array *v450; // x7
  System_String_array **v451; // x3
  System_Boolean_array **v452; // x4
  System_Int32_array **v453; // x5
  System_Int32_array *v454; // x6
  System_Int32_array *v455; // x7
  BattleServantConfConponent_o *p_msQBoardL1Names; // x0
  System_String_array **v457; // x2
  System_String_array **v458; // x3
  System_Boolean_array **v459; // x4
  System_Int32_array **v460; // x5
  System_Int32_array *v461; // x6
  System_Int32_array *v462; // x7
  System_Int32_array **v463; // x1
  BattleServantConfConponent_o *p_msQBoardL2Name_Story; // x0
  System_String_array **v465; // x2
  System_String_array **v466; // x3
  System_Boolean_array **v467; // x4
  System_Int32_array **v468; // x5
  System_Int32_array *v469; // x6
  System_Int32_array *v470; // x7
  System_Int32_array **v471; // x1
  BattleServantConfConponent_o *p_msQBoardL2Name_Hero; // x0
  System_String_array **v473; // x2
  System_String_array **v474; // x3
  System_Boolean_array **v475; // x4
  System_Int32_array **v476; // x5
  System_Int32_array *v477; // x6
  System_Int32_array *v478; // x7
  __int64 v479; // x2
  __int64 v480; // x0
  System_String_array **v481; // x3
  System_Boolean_array **v482; // x4
  System_Int32_array **v483; // x5
  System_Int32_array *v484; // x6
  System_Int32_array *v485; // x7
  System_Int32_array **v486; // x19
  System_String_array **v487; // x3
  System_Boolean_array **v488; // x4
  System_Int32_array **v489; // x5
  System_Int32_array *v490; // x6
  System_Int32_array *v491; // x7
  System_String_array **v492; // x3
  System_Boolean_array **v493; // x4
  System_Int32_array **v494; // x5
  System_Int32_array *v495; // x6
  System_Int32_array *v496; // x7
  System_String_array **v497; // x3
  System_Boolean_array **v498; // x4
  System_Int32_array **v499; // x5
  System_Int32_array *v500; // x6
  System_Int32_array *v501; // x7
  System_String_array **v502; // x3
  System_Boolean_array **v503; // x4
  System_Int32_array **v504; // x5
  System_Int32_array *v505; // x6
  System_Int32_array *v506; // x7
  System_String_array **v507; // x3
  System_Boolean_array **v508; // x4
  System_Int32_array **v509; // x5
  System_Int32_array *v510; // x6
  System_Int32_array *v511; // x7
  System_String_array **v512; // x3
  System_Boolean_array **v513; // x4
  System_Int32_array **v514; // x5
  System_Int32_array *v515; // x6
  System_Int32_array *v516; // x7
  BattleServantConfConponent_o *p_msQBoardL3Names; // x0
  System_String_array **v518; // x2
  System_String_array **v519; // x3
  System_Boolean_array **v520; // x4
  System_Int32_array **v521; // x5
  System_Int32_array *v522; // x6
  System_Int32_array *v523; // x7
  __int64 v524; // x2
  __int64 v525; // x0
  System_String_array **v526; // x3
  System_Boolean_array **v527; // x4
  System_Int32_array **v528; // x5
  System_Int32_array *v529; // x6
  System_Int32_array *v530; // x7
  System_Int32_array **v531; // x19
  System_String_array **v532; // x3
  System_Boolean_array **v533; // x4
  System_Int32_array **v534; // x5
  System_Int32_array *v535; // x6
  System_Int32_array *v536; // x7
  System_String_array **v537; // x3
  System_Boolean_array **v538; // x4
  System_Int32_array **v539; // x5
  System_Int32_array *v540; // x6
  System_Int32_array *v541; // x7
  System_String_array **v542; // x3
  System_Boolean_array **v543; // x4
  System_Int32_array **v544; // x5
  System_Int32_array *v545; // x6
  System_Int32_array *v546; // x7
  System_String_array **v547; // x3
  System_Boolean_array **v548; // x4
  System_Int32_array **v549; // x5
  System_Int32_array *v550; // x6
  System_Int32_array *v551; // x7
  System_String_array **v552; // x3
  System_Boolean_array **v553; // x4
  System_Int32_array **v554; // x5
  System_Int32_array *v555; // x6
  System_Int32_array *v556; // x7
  System_String_array **v557; // x3
  System_Boolean_array **v558; // x4
  System_Int32_array **v559; // x5
  System_Int32_array *v560; // x6
  System_Int32_array *v561; // x7
  BattleServantConfConponent_o *p_msLabelMainSprNames; // x0
  System_String_array **v563; // x2
  System_String_array **v564; // x3
  System_Boolean_array **v565; // x4
  System_Int32_array **v566; // x5
  System_Int32_array *v567; // x6
  System_Int32_array *v568; // x7
  __int64 v569; // x2
  __int64 v570; // x0
  System_String_array **v571; // x3
  System_Boolean_array **v572; // x4
  System_Int32_array **v573; // x5
  System_Int32_array *v574; // x6
  System_Int32_array *v575; // x7
  System_Int32_array **v576; // x19
  System_String_array **v577; // x3
  System_Boolean_array **v578; // x4
  System_Int32_array **v579; // x5
  System_Int32_array *v580; // x6
  System_Int32_array *v581; // x7
  System_String_array **v582; // x3
  System_Boolean_array **v583; // x4
  System_Int32_array **v584; // x5
  System_Int32_array *v585; // x6
  System_Int32_array *v586; // x7
  System_String_array **v587; // x3
  System_Boolean_array **v588; // x4
  System_Int32_array **v589; // x5
  System_Int32_array *v590; // x6
  System_Int32_array *v591; // x7
  System_String_array **v592; // x3
  System_Boolean_array **v593; // x4
  System_Int32_array **v594; // x5
  System_Int32_array *v595; // x6
  System_Int32_array *v596; // x7
  System_String_array **v597; // x3
  System_Boolean_array **v598; // x4
  System_Int32_array **v599; // x5
  System_Int32_array *v600; // x6
  System_Int32_array *v601; // x7
  System_String_array **v602; // x3
  System_Boolean_array **v603; // x4
  System_Int32_array **v604; // x5
  System_Int32_array *v605; // x6
  System_Int32_array *v606; // x7
  System_String_array **v607; // x3
  System_Boolean_array **v608; // x4
  System_Int32_array **v609; // x5
  System_Int32_array *v610; // x6
  System_Int32_array *v611; // x7
  BattleServantConfConponent_o *p_QuestBoardApSpNames; // x0
  System_String_array **v613; // x2
  System_String_array **v614; // x3
  System_Boolean_array **v615; // x4
  System_Int32_array **v616; // x5
  System_Int32_array *v617; // x6
  System_Int32_array *v618; // x7
  System_Int32_array **v619; // x1
  BattleServantConfConponent_o *p_msPhaseSprName_ArrowOff; // x0
  System_String_array **v621; // x2
  System_String_array **v622; // x3
  System_Boolean_array **v623; // x4
  System_Int32_array **v624; // x5
  System_Int32_array *v625; // x6
  System_Int32_array *v626; // x7
  System_Int32_array **v627; // x1
  BattleServantConfConponent_o *p_msPhaseSprName_ArrowOn; // x0
  System_String_array **v629; // x2
  System_String_array **v630; // x3
  System_Boolean_array **v631; // x4
  System_Int32_array **v632; // x5
  System_Int32_array *v633; // x6
  System_Int32_array *v634; // x7
  System_Int32_array **v635; // x1
  BattleServantConfConponent_o *p_msPhaseSprName_ExArrowOff; // x0
  System_String_array **v637; // x2
  System_String_array **v638; // x3
  System_Boolean_array **v639; // x4
  System_Int32_array **v640; // x5
  System_Int32_array *v641; // x6
  System_Int32_array *v642; // x7
  System_Int32_array **v643; // x1
  BattleServantConfConponent_o *p_msPhaseSprName_ExArrowOn; // x0
  System_String_array **v645; // x2
  System_String_array **v646; // x3
  System_Boolean_array **v647; // x4
  System_Int32_array **v648; // x5
  System_Int32_array *v649; // x6
  System_Int32_array *v650; // x7
  System_Int32_array **v651; // x1
  BattleServantConfConponent_o *p_msPhaseSprName_LoopOff; // x0
  System_String_array **v653; // x2
  System_String_array **v654; // x3
  System_Boolean_array **v655; // x4
  System_Int32_array **v656; // x5
  System_Int32_array *v657; // x6
  System_Int32_array *v658; // x7
  System_Int32_array **v659; // x1
  BattleServantConfConponent_o *p_msPhaseSprName_LoopOn; // x0
  System_String_array **v661; // x2
  System_String_array **v662; // x3
  System_Boolean_array **v663; // x4
  System_Int32_array **v664; // x5
  System_Int32_array *v665; // x6
  System_Int32_array *v666; // x7
  System_Int32_array **v667; // x1
  BattleServantConfConponent_o *p_msPhaseSprName_LoopFirstOff; // x0
  System_String_array **v669; // x2
  System_String_array **v670; // x3
  System_Boolean_array **v671; // x4
  System_Int32_array **v672; // x5
  System_Int32_array *v673; // x6
  System_Int32_array *v674; // x7
  System_Int32_array **v675; // x1
  BattleServantConfConponent_o *p_CHAPTER_SP_BASE_NAME; // x0
  System_String_array **v677; // x2
  System_String_array **v678; // x3
  System_Boolean_array **v679; // x4
  System_Int32_array **v680; // x5
  System_Int32_array *v681; // x6
  System_Int32_array *v682; // x7
  System_Int32_array **v683; // x1
  BattleServantConfConponent_o *p_CHAPTER_SP_UNIT_NAME; // x0
  System_String_array **v685; // x2
  System_String_array **v686; // x3
  System_Boolean_array **v687; // x4
  System_Int32_array **v688; // x5
  System_Int32_array *v689; // x6
  System_Int32_array *v690; // x7
  System_Int32_array **v691; // x1
  BattleServantConfConponent_o *p_PRE_BATTLE_ORGANIZATION; // x0
  System_String_array **v693; // x2
  System_String_array **v694; // x3
  System_Boolean_array **v695; // x4
  System_Int32_array **v696; // x5
  System_Int32_array *v697; // x6
  System_Int32_array *v698; // x7
  struct UnityEngine_Color_o v699; // [xsp+0h] [xbp-50h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-40h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v702; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v704; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FC722 & 1) == 0 )
  {
    sub_B16FFC(&QuestBoardListViewItemDraw_TypeInfo, v1);
    sub_B16FFC(&string___TypeInfo, v6);
    sub_B16FFC(&StringLiteral_21527, v7);
    sub_B16FFC(&StringLiteral_21538, v8);
    sub_B16FFC(&StringLiteral_19557, v9);
    sub_B16FFC(&StringLiteral_19450, v10);
    sub_B16FFC(&StringLiteral_19508, v11);
    sub_B16FFC(&StringLiteral_21548, v12);
    sub_B16FFC(&StringLiteral_21535, v13);
    sub_B16FFC(&StringLiteral_21546, v14);
    sub_B16FFC(&StringLiteral_19512, v15);
    sub_B16FFC(&StringLiteral_19491, v16);
    sub_B16FFC(&StringLiteral_19496, v17);
    sub_B16FFC(&StringLiteral_17200, v18);
    sub_B16FFC(&StringLiteral_19510, v19);
    sub_B16FFC(&StringLiteral_19497, v20);
    sub_B16FFC(&StringLiteral_19507, v21);
    sub_B16FFC(&StringLiteral_19490, v22);
    sub_B16FFC(&StringLiteral_18549, v23);
    sub_B16FFC(&StringLiteral_21536, v24);
    sub_B16FFC(&StringLiteral_19514, v25);
    sub_B16FFC(&StringLiteral_21549, v26);
    sub_B16FFC(&StringLiteral_19505, v27);
    sub_B16FFC(&StringLiteral_21541, v28);
    sub_B16FFC(&StringLiteral_19506, v29);
    sub_B16FFC(&StringLiteral_21598, v30);
    sub_B16FFC(&StringLiteral_21595, v31);
    sub_B16FFC(&StringLiteral_21540, v32);
    sub_B16FFC(&StringLiteral_19504, v33);
    sub_B16FFC(&StringLiteral_19296, v34);
    sub_B16FFC(&StringLiteral_21526, v35);
    sub_B16FFC(&StringLiteral_21547, v36);
    sub_B16FFC(&StringLiteral_21596, v37);
    sub_B16FFC(&StringLiteral_19502, v38);
    sub_B16FFC(&StringLiteral_21597, v39);
    sub_B16FFC(&StringLiteral_19500, v40);
    sub_B16FFC(&StringLiteral_17106, v41);
    sub_B16FFC(&StringLiteral_21528, v42);
    sub_B16FFC(&StringLiteral_6191, v43);
    sub_B16FFC(&StringLiteral_19501, v44);
    sub_B16FFC(&StringLiteral_19513, v45);
    sub_B16FFC(&StringLiteral_19516, v46);
    sub_B16FFC(&StringLiteral_19515, v47);
    sub_B16FFC(&StringLiteral_19519, v48);
    sub_B16FFC(&StringLiteral_21543, v49);
    sub_B16FFC(&StringLiteral_19511, v50);
    sub_B16FFC(&StringLiteral_19498, v51);
    sub_B16FFC(&StringLiteral_19493, v52);
    sub_B16FFC(&StringLiteral_21539, v53);
    sub_B16FFC(&StringLiteral_19518, v54);
    sub_B16FFC(&StringLiteral_19503, v55);
    sub_B16FFC(&StringLiteral_19494, v56);
    sub_B16FFC(&StringLiteral_21537, v57);
    sub_B16FFC(&StringLiteral_19556, v58);
    sub_B16FFC(&StringLiteral_1, v59);
    sub_B16FFC(&StringLiteral_19492, v60);
    sub_B16FFC(&StringLiteral_19489, v61);
    sub_B16FFC(&StringLiteral_19495, v62);
    sub_B16FFC(&StringLiteral_19509, v63);
    sub_B16FFC(&StringLiteral_21568, v64);
    sub_B16FFC(&StringLiteral_19295, v65);
    sub_B16FFC(&StringLiteral_21534, v66);
    sub_B16FFC(&StringLiteral_21542, v67);
    byte_40FC722 = 1;
  }
  v68 = 1.0;
  QuestBoardListViewItemDraw_TypeInfo->static_fields->POS_Y_ITVL_AREA = 135;
  QuestBoardListViewItemDraw_TypeInfo->static_fields->POS_Y_ITVL_SHORTCUT = 150;
  v69 = QuestBoardListViewItemDraw_TypeInfo;
  QuestBoardListViewItemDraw_TypeInfo->static_fields->POS_Y_ITVL_QUEST = 150;
  v69->static_fields->CLIP_W_DEFAULT = 600;
  v69->static_fields->CLIP_W_AREA = 490;
  v69->static_fields->CLIP_RANGE_MARGIN = 200;
  v69->static_fields->SCRL_OBJ_DUMMY_NUM = 4;
  v69->static_fields->TITLE_LEVEL_BASE_X = 175;
  v69->static_fields->PHASE_NORMAL_MAX = 7;
  v69->static_fields->PHASE_EXTRA_MAX = 9;
  v69->static_fields->TITLE_LABEL_BASE_WIDTH = 256;
  v70 = 1061274050;
  v71 = 1047589105;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Color___ctor_40666012(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, &methoda);
  v704.fields.g = 0.0;
  v704.fields.b = 0.0;
  QuestBoardListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_COST_COLOR = *(struct UnityEngine_Color_o *)&methoda.methodPointer;
  v704.fields.r = 0.90196;
  v699 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor_40666012(v704, v72, v73, v74, (const MethodInfo *)&v699);
  v75 = QuestBoardListViewItemDraw_TypeInfo;
  QuestBoardListViewItemDraw_TypeInfo->static_fields->OVER_COST_COLOR = v699;
  static_fields = v75->static_fields;
  *(_QWORD *)&static_fields->NEW_POS_AREA.fields.x = 0x41D80000C3420000LL;
  static_fields->NEW_POS_AREA.fields.z = 0.0;
  v77 = v75->static_fields;
  *(_QWORD *)&v77->NEW_POS_SHORTCUT.fields.x = 0x423C0000C3530000LL;
  v77->NEW_POS_SHORTCUT.fields.z = 0.0;
  v78 = v75->static_fields;
  *(_QWORD *)&v78->NEW_POS_QUEST.fields.x = 0x423C0000C3530000LL;
  v78->NEW_POS_QUEST.fields.z = 0.0;
  v79 = v75->static_fields;
  *(_QWORD *)&v79->NEW_POS_QUEST_NEXT.fields.x = 0x42640000C2D20000LL;
  v79->NEW_POS_QUEST_NEXT.fields.z = 0.0;
  v75->static_fields->NEW_W_DEFAULT = 110;
  v75->static_fields->NEW_H_DEFAULT = 25;
  v75->static_fields->NEW_W_AREA = 79;
  v75->static_fields->NEW_H_AREA = 18;
  v80 = v75->static_fields;
  *(_QWORD *)&v80->CLEAR_POS_AREA.fields.x = 0xC23C0000431B0000LL;
  v80->CLEAR_POS_AREA.fields.z = 0.0;
  v81 = v75->static_fields;
  *(_QWORD *)&v81->CLEAR_POS_QUEST.fields.x = 0xC25C0000C3370000LL;
  v81->CLEAR_POS_QUEST.fields.z = 0.0;
  v75->static_fields->NEXT_POS_X_AREA_L = -130.0;
  v75->static_fields->NEXT_POS_X_AREA_R = 137.0;
  v75->static_fields->NEXT_POS_X_AREA_CENTER = -3.0;
  v75->static_fields->NEXT_POS_X_QUEST = -185.0;
  v82 = v75->static_fields;
  v83 = (System_Int32_array **)StringLiteral_19296;
  v82->NEXT_ICON_SPRITE_NAME = (struct System_String_o *)StringLiteral_19296;
  sub_B16F98((BattleServantConfConponent_o *)&v82->NEXT_ICON_SPRITE_NAME, v83, v84, v85, v86, v87, v88, v89);
  v90 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  v91 = (System_Int32_array **)StringLiteral_19295;
  v90->FREE_ICON_SPRITE_NAME = (struct System_String_o *)StringLiteral_19295;
  sub_B16F98((BattleServantConfConponent_o *)&v90->FREE_ICON_SPRITE_NAME, v91, v92, v93, v94, v95, v96, v97);
  v98 = QuestBoardListViewItemDraw_TypeInfo;
  v99 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  *(_QWORD *)&v99->PREV_POS_QUEST.fields.x = 0x42300000C35C0000LL;
  v99->PREV_POS_QUEST.fields.z = 0.0;
  v100 = v98->static_fields;
  *(_QWORD *)&v100->PREV_POS_QUEST_NEXT.fields.x = 0x426C0000C2DC0000LL;
  v100->PREV_POS_QUEST_NEXT.fields.z = 0.0;
  v101 = v98->static_fields;
  *(_QWORD *)&v101->LINE_ST_POS_AREA.fields.x = 0xC0A00000C3570000LL;
  v101->LINE_ST_POS_AREA.fields.z = 0.0;
  v102 = v98->static_fields;
  *(_QWORD *)&v102->LINE_ST_POS_SHORTCUT.fields.x = 0xC0A00000C3700000LL;
  v102->LINE_ST_POS_SHORTCUT.fields.z = 0.0;
  v103 = v98->static_fields;
  *(_QWORD *)&v103->COST_OBJ_POS.fields.x = 0xC1C00000C2F00000LL;
  v103->COST_OBJ_POS.fields.z = 0.0;
  v104 = v98->static_fields;
  *(_QWORD *)&v104->COST_OBJ_POS_WAR_BOARD.fields.x = 0xC1E00000C2F20000LL;
  v104->COST_OBJ_POS_WAR_BOARD.fields.z = 0.0;
  v98->static_fields->COST_BG_WIDTH_SINGLE = 104;
  v98->static_fields->COST_BG_WIDTH_DOUBLE = 180;
  v98->static_fields->COST_BG_WIDTH_TLIPLE_FOR_ALL_ITEM = 193;
  v98->static_fields->COST_BG_WIDTH_WAR_BOARD = 69;
  v98->static_fields->COST_BG_WIDTH_DOUBLE_QP = 186;
  v105 = (System_Int32_array **)StringLiteral_21548;
  p_COST_BG_ITEM = (BattleServantConfConponent_o *)&v98->static_fields->COST_BG_ITEM;
  p_COST_BG_ITEM->klass = (BattleServantConfConponent_c *)StringLiteral_21548;
  sub_B16F98(p_COST_BG_ITEM, v105, v107, v108, v109, v110, v111, v112);
  v113 = (System_Int32_array **)StringLiteral_21549;
  p_COST_BG_QP = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_QP;
  p_COST_BG_QP->klass = (BattleServantConfConponent_c *)StringLiteral_21549;
  sub_B16F98(p_COST_BG_QP, v113, v115, v116, v117, v118, v119, v120);
  v121 = QuestBoardListViewItemDraw_TypeInfo;
  v122 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  *(_QWORD *)&v122->COST_1_ICON_AP_POS.fields.x = 1098907648LL;
  v122->COST_1_ICON_AP_POS.fields.z = 0.0;
  v123 = v121->static_fields;
  *(_QWORD *)&v123->COST_1_ICON_AP_POS_WAR_BOARD.fields.x = 1099956224LL;
  v123->COST_1_ICON_AP_POS_WAR_BOARD.fields.z = 0.0;
  v124 = v121->static_fields;
  *(_QWORD *)&v124->COST_1_LABEL_AP_POS.fields.x = 1103888384LL;
  v124->COST_1_LABEL_AP_POS.fields.z = 0.0;
  v125 = v121->static_fields;
  *(_QWORD *)&v125->COST_1_LABEL_AP_POS_WAR_BOARD.fields.x = 1104936960LL;
  v125->COST_1_LABEL_AP_POS_WAR_BOARD.fields.z = 0.0;
  v121->static_fields->COST_2_ICON_NORMAL_POSITION_X = 101;
  v121->static_fields->COST_2_ICON_QP_POSITION_X = 73;
  v121->static_fields->COST_2_LABEL_NORMAL_POSITION_X = 111;
  v121->static_fields->COST_2_LABEL_QP_POSITION_X = 82;
  v121->static_fields->COST_1_LABEL_NORMAL_POSITION_X_FOR_ALL_ITEM = 28;
  v121->static_fields->COST_2_ICON_NORMAL_POSITION_X_FOR_ALL_ITEM = 76;
  v121->static_fields->COST_2_LABEL_NORMAL_POSITION_X_FOR_ALL_ITEM = 86;
  v121->static_fields->COST_3_ICON_NORMAL_POSITION_X_FOR_ALL_ITEM = 134;
  v121->static_fields->COST_3_LABEL_NORMAL_POSITION_X_FOR_ALL_ITEM = 144;
  v121->static_fields->COST_1_LABEL_DIGIT_3_SCALE_X = 0.81;
  v121->static_fields->COST_1_LABEL_DEFAULT_WIDTH = 35;
  v121->static_fields->COST_2_LABEL_DEFAULT_WIDTH = 101;
  v121->static_fields->COST_3_LABEL_DEFAULT_WIDTH = 101;
  v121->static_fields->COST_LABEL_WIDTH_FOR_THREE_ITEM = 30.4;
  v121->static_fields->COST_2_LABEL_DIGIT_8_SCALE_X = 0.9;
  v121->static_fields->COST_2_LABEL_DIGIT_9_SCALE_X = 0.81;
  v121->static_fields->COST_LABEL_DEFAULT_SPACING = 9;
  v121->static_fields->COST_LABEL_SPACING_FOR_THREE_ITEM = 8;
  v126 = v121->static_fields;
  *(_QWORD *)&v126->SHOHI_SP_POS.fields.x = 0x41C0000041800000LL;
  v126->SHOHI_SP_POS.fields.z = 0.0;
  v127 = v121->static_fields;
  *(_QWORD *)&v127->SHOHI_SP_POS_WAR_BOARD.fields.x = 0x41C8000041900000LL;
  v127->SHOHI_SP_POS_WAR_BOARD.fields.z = 0.0;
  v128 = (System_Int32_array **)StringLiteral_19491;
  p_SHOHI_SP_NAME = (BattleServantConfConponent_o *)&v121->static_fields->SHOHI_SP_NAME;
  p_SHOHI_SP_NAME->klass = (BattleServantConfConponent_c *)StringLiteral_19491;
  sub_B16F98(p_SHOHI_SP_NAME, v128, v130, v131, v132, v133, v134, v135);
  v136 = (System_Int32_array **)StringLiteral_19492;
  p_SHOHI_SP_NAME_WAR_BOARD = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->SHOHI_SP_NAME_WAR_BOARD;
  p_SHOHI_SP_NAME_WAR_BOARD->klass = (BattleServantConfConponent_c *)StringLiteral_19492;
  sub_B16F98(p_SHOHI_SP_NAME_WAR_BOARD, v136, v138, v139, v140, v141, v142, v143);
  v144 = (System_Int32_array **)StringLiteral_19489;
  p_QUEST_BOARD_COSTNAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_COSTNAME;
  p_QUEST_BOARD_COSTNAME->klass = (BattleServantConfConponent_c *)StringLiteral_19489;
  sub_B16F98(p_QUEST_BOARD_COSTNAME, v144, v146, v147, v148, v149, v150, v151);
  v152 = QuestBoardListViewItemDraw_TypeInfo;
  QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_PHASE_INTERVAL = 21;
  v152->static_fields->QUEST_BOARD_PHASE_LOOF_INTERVAL = 30;
  v152->static_fields->QUEST_BOARD_PHASE_EX_INTERVAL = 17;
  v152->static_fields->QUEST_BOARD_PHASE_EX_LOOF_INTERVAL = 26;
  zero = UnityEngine_Vector3__get_zero(0LL);
  v153 = QuestBoardListViewItemDraw_TypeInfo;
  QuestBoardListViewItemDraw_TypeInfo->static_fields->CHALLENGE_OBJ_POS_SINGLE = zero;
  v154 = v153->static_fields;
  *(_QWORD *)&v154->CHALLENGE_OBJ_POS_DOUBLE.fields.x = 1115160576LL;
  v154->CHALLENGE_OBJ_POS_DOUBLE.fields.z = 0.0;
  v702 = UnityEngine_Vector3__get_zero(0LL);
  v155 = QuestBoardListViewItemDraw_TypeInfo;
  QuestBoardListViewItemDraw_TypeInfo->static_fields->PHASE_OBJ_POS_SINGLE = v702;
  v156 = v155->static_fields;
  *(_QWORD *)&v156->PHASE_OBJ_POS_DOUBLE.fields.x = 1116995584LL;
  v156->PHASE_OBJ_POS_DOUBLE.fields.z = 0.0;
  v157 = v155->static_fields;
  *(_QWORD *)&v157->PHASE_OBJ_POS_DOUBLE_QP.fields.x = 1117782016LL;
  v157->PHASE_OBJ_POS_DOUBLE_QP.fields.z = 0.0;
  v158 = v155->static_fields;
  *(_QWORD *)&v158->PHASE_OBJ_POS_TRIPLE_ITEM.fields.x = 1118699520LL;
  v158->PHASE_OBJ_POS_TRIPLE_ITEM.fields.z = 0.0;
  v159 = v155->static_fields;
  *(_QWORD *)&v159->PHASE_STR_POS_SINGLE.fields.x = 1116602368LL;
  v159->PHASE_STR_POS_SINGLE.fields.z = 0.0;
  v160 = v155->static_fields;
  *(_QWORD *)&v160->PHASE_STR_POS_DOUBLE.fields.x = 1113063424LL;
  v160->PHASE_STR_POS_DOUBLE.fields.z = 0.0;
  v161 = v155->static_fields;
  *(_QWORD *)&v161->PHASE_STR_POS_DOUBLE_QP.fields.x = 1111228416LL;
  v161->PHASE_STR_POS_DOUBLE_QP.fields.z = 0.0;
  v162 = v155->static_fields;
  *(_QWORD *)&v162->PHASE_STR_POS_TRIPLE_ITEM.fields.x = 1109393408LL;
  v162->PHASE_STR_POS_TRIPLE_ITEM.fields.z = 0.0;
  one = UnityEngine_Vector3__get_one(0LL);
  v163 = QuestBoardListViewItemDraw_TypeInfo;
  QuestBoardListViewItemDraw_TypeInfo->static_fields->PHASE_STR_SCL_SINGLE = one;
  v164 = v163->static_fields;
  *(_QWORD *)&v164->PHASE_STR_SCL_DOUBLE.fields.x = 0x3F8000003F4CCCCDLL;
  v164->PHASE_STR_SCL_DOUBLE.fields.z = 1.0;
  v165 = v163->static_fields;
  *(_QWORD *)&v165->PHASE_STR_SCL_DOUBLE_QP.fields.x = 0x3F8000003F4CCCCDLL;
  v165->PHASE_STR_SCL_DOUBLE_QP.fields.z = 1.0;
  v166 = v163->static_fields;
  *(_QWORD *)&v166->PHASE_STR_SCL_TRIPLE_ITEM.fields.x = 0x3F8000003F333333LL;
  v166->PHASE_STR_SCL_TRIPLE_ITEM.fields.z = 1.0;
  v163->static_fields->BOARD_MESSAGE_MAX_WITDH = 170;
  v167 = v163->static_fields;
  *(_QWORD *)&v167->BLACK_MARK_OBJ_POS.fields.x = 0x4284000000000000LL;
  v167->BLACK_MARK_OBJ_POS.fields.z = 0.0;
  v168 = v163->static_fields;
  *(_QWORD *)&v168->BLACK_MARK_OBJ_POS_CENTER.fields.x = 0LL;
  v168->BLACK_MARK_OBJ_POS_CENTER.fields.z = 0.0;
  v169 = v163->static_fields;
  *(_QWORD *)&v169->WHITE_MARK_OBJ_UNDER_POS.fields.x = 0xC284000000000000LL;
  v169->WHITE_MARK_OBJ_UNDER_POS.fields.z = 0.0;
  v170 = (System_Int32_array **)StringLiteral_18549;
  p_EVENT_WAR_SPNAME_PREFIX = (BattleServantConfConponent_o *)&v163->static_fields->EVENT_WAR_SPNAME_PREFIX;
  p_EVENT_WAR_SPNAME_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_18549;
  sub_B16F98(p_EVENT_WAR_SPNAME_PREFIX, v170, v172, v173, v174, v175, v176, v177);
  v178 = (System_Int32_array **)StringLiteral_17200;
  p_EVENT_WAR_SUBFOLDER_SPNAME_PREFIX = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->EVENT_WAR_SUBFOLDER_SPNAME_PREFIX;
  p_EVENT_WAR_SUBFOLDER_SPNAME_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_17200;
  sub_B16F98(p_EVENT_WAR_SUBFOLDER_SPNAME_PREFIX, v178, v180, v181, v182, v183, v184, v185);
  v186 = (System_Int32_array **)StringLiteral_21526;
  p_QUEST_BOARD_SPNAME_PREFIX = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_SPNAME_PREFIX;
  p_QUEST_BOARD_SPNAME_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_21526;
  sub_B16F98(p_QUEST_BOARD_SPNAME_PREFIX, v186, v188, v189, v190, v191, v192, v193);
  v194 = (System_Int32_array **)StringLiteral_19498;
  p_RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX;
  p_RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_19498;
  sub_B16F98(p_RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX, v194, v196, v197, v198, v199, v200, v201);
  v202 = (System_Int32_array **)StringLiteral_21527;
  p_QUEST_BOARD_ICON_SPNAME_PREFIX = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_ICON_SPNAME_PREFIX;
  p_QUEST_BOARD_ICON_SPNAME_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_21527;
  sub_B16F98(p_QUEST_BOARD_ICON_SPNAME_PREFIX, v202, v204, v205, v206, v207, v208, v209);
  v210 = (System_Int32_array **)StringLiteral_21528;
  p_QUEST_BOARD_MASK_SPNAME_PREFIX = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_MASK_SPNAME_PREFIX;
  p_QUEST_BOARD_MASK_SPNAME_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_21528;
  sub_B16F98(p_QUEST_BOARD_MASK_SPNAME_PREFIX, v210, v212, v213, v214, v215, v216, v217);
  v218 = (System_Int32_array **)StringLiteral_21547;
  p_QUEST_BOARD_SHOHI_SPNAME_PREFIX = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_SHOHI_SPNAME_PREFIX;
  p_QUEST_BOARD_SHOHI_SPNAME_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_21547;
  sub_B16F98(p_QUEST_BOARD_SHOHI_SPNAME_PREFIX, v218, v220, v221, v222, v223, v224, v225);
  v226 = (System_Int32_array **)StringLiteral_21534;
  p_QUEST_BOARD_AP_SPNAME_PREFIX = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_AP_SPNAME_PREFIX;
  p_QUEST_BOARD_AP_SPNAME_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_21534;
  sub_B16F98(p_QUEST_BOARD_AP_SPNAME_PREFIX, v226, v228, v229, v230, v231, v232, v233);
  v234 = (System_Int32_array **)StringLiteral_17106;
  p_QUEST_BOARD_INFO_FRAME_NAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_INFO_FRAME_NAME;
  p_QUEST_BOARD_INFO_FRAME_NAME->klass = (BattleServantConfConponent_c *)StringLiteral_17106;
  sub_B16F98(p_QUEST_BOARD_INFO_FRAME_NAME, v234, v236, v237, v238, v239, v240, v241);
  v242 = (System_Int32_array **)StringLiteral_19500;
  p_QUEST_BOARD_DAMAGE_RECODE_NAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_DAMAGE_RECODE_NAME;
  p_QUEST_BOARD_DAMAGE_RECODE_NAME->klass = (BattleServantConfConponent_c *)StringLiteral_19500;
  sub_B16F98(p_QUEST_BOARD_DAMAGE_RECODE_NAME, v242, v244, v245, v246, v247, v248, v249);
  v250 = (System_Int32_array **)StringLiteral_19489;
  p_QUEST_BOARD_PREV_ICON_NAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_PREV_ICON_NAME;
  p_QUEST_BOARD_PREV_ICON_NAME->klass = (BattleServantConfConponent_c *)StringLiteral_19489;
  sub_B16F98(p_QUEST_BOARD_PREV_ICON_NAME, v250, v252, v253, v254, v255, v256, v257);
  v258 = (System_Int32_array **)StringLiteral_19506;
  p_QUEST_BOARD_KNOCKDOWN_RECODE_NAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_KNOCKDOWN_RECODE_NAME;
  p_QUEST_BOARD_KNOCKDOWN_RECODE_NAME->klass = (BattleServantConfConponent_c *)StringLiteral_19506;
  sub_B16F98(p_QUEST_BOARD_KNOCKDOWN_RECODE_NAME, v258, v260, v261, v262, v263, v264, v265);
  v266 = (System_Int32_array **)StringLiteral_6191;
  p_QUEST_BOARD_ICON_TEXTURE_PATH = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH;
  p_QUEST_BOARD_ICON_TEXTURE_PATH->klass = (BattleServantConfConponent_c *)StringLiteral_6191;
  sub_B16F98(p_QUEST_BOARD_ICON_TEXTURE_PATH, v266, v268, v269, v270, v271, v272, v273);
  v274 = (System_Int32_array **)StringLiteral_21527;
  p_QUEST_BOARD_ICON_TEXTURE_PREFIX = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_ICON_TEXTURE_PREFIX;
  p_QUEST_BOARD_ICON_TEXTURE_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_21527;
  sub_B16F98(p_QUEST_BOARD_ICON_TEXTURE_PREFIX, v274, v276, v277, v278, v279, v280, v281);
  v282 = QuestBoardListViewItemDraw_TypeInfo;
  QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_KNOCKDOWN_DAMAGE_WIDTH = 78;
  v282->static_fields->QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX = 48;
  v282->static_fields->QUEST_BOARD_KNOCKDOWN_ZERO_DAMAGE_POSX = 19;
  v282->static_fields->FLICK_THRESHOLD = 2.0;
  v283 = (System_Int32_array **)StringLiteral_19557;
  p_BANNER_POINT_SPNAME_ON = (BattleServantConfConponent_o *)&v282->static_fields->BANNER_POINT_SPNAME_ON;
  p_BANNER_POINT_SPNAME_ON->klass = (BattleServantConfConponent_c *)StringLiteral_19557;
  sub_B16F98(p_BANNER_POINT_SPNAME_ON, v283, v285, v286, v287, v288, v289, v290);
  v291 = (System_Int32_array **)StringLiteral_19556;
  p_BANNER_POINT_SPNAME_OFF = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->BANNER_POINT_SPNAME_OFF;
  p_BANNER_POINT_SPNAME_OFF->klass = (BattleServantConfConponent_c *)StringLiteral_19556;
  sub_B16F98(p_BANNER_POINT_SPNAME_OFF, v291, v293, v294, v295, v296, v297, v298);
  v299 = QuestBoardListViewItemDraw_TypeInfo;
  QuestBoardListViewItemDraw_TypeInfo->static_fields->SHORTCUT_FACE_MASK_SP_W = 136;
  v299->static_fields->QUEST_FACE_MASK_SP_W = 124;
  v300 = (System_Int32_array **)StringLiteral_19510;
  p_SHORTCUT_FACE_MASK_SPNAME = (BattleServantConfConponent_o *)&v299->static_fields->SHORTCUT_FACE_MASK_SPNAME;
  p_SHORTCUT_FACE_MASK_SPNAME->klass = (BattleServantConfConponent_c *)StringLiteral_19510;
  sub_B16F98(p_SHORTCUT_FACE_MASK_SPNAME, v300, v302, v303, v304, v305, v306, v307);
  v308 = (System_Int32_array **)StringLiteral_19512;
  p_QUEST_STORY_FACE_MASK_SPNAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_STORY_FACE_MASK_SPNAME;
  p_QUEST_STORY_FACE_MASK_SPNAME->klass = (BattleServantConfConponent_c *)StringLiteral_19512;
  sub_B16F98(p_QUEST_STORY_FACE_MASK_SPNAME, v308, v310, v311, v312, v313, v314, v315);
  v316 = (System_Int32_array **)StringLiteral_19513;
  p_QUEST_MAIN_FACE_MASK_SPNAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_MAIN_FACE_MASK_SPNAME;
  p_QUEST_MAIN_FACE_MASK_SPNAME->klass = (BattleServantConfConponent_c *)StringLiteral_19513;
  sub_B16F98(p_QUEST_MAIN_FACE_MASK_SPNAME, v316, v318, v319, v320, v321, v322, v323);
  v324 = (System_Int32_array **)StringLiteral_19514;
  p_QUEST_EVENT_FACE_MASK_SPNAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_EVENT_FACE_MASK_SPNAME;
  p_QUEST_EVENT_FACE_MASK_SPNAME->klass = (BattleServantConfConponent_c *)StringLiteral_19514;
  sub_B16F98(p_QUEST_EVENT_FACE_MASK_SPNAME, v324, v326, v327, v328, v329, v330, v331);
  v333 = sub_B17014(string___TypeInfo, 2LL, v332);
  if ( !v333 )
    goto LABEL_177;
  v340 = (System_Int32_array **)v333;
  v341 = (void *)StringLiteral_21597;
  if ( StringLiteral_21597 )
  {
    v341 = (void *)sub_B170BC(StringLiteral_21597, *(_QWORD *)&(*v340)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v342 = (System_Int32_array **)StringLiteral_21597;
  }
  else
  {
    v342 = 0LL;
  }
  if ( !*((_DWORD *)v340 + 6) )
    goto LABEL_175;
  v340[4] = (System_Int32_array *)v342;
  sub_B16F98((BattleServantConfConponent_o *)(v340 + 4), v342, v334, v335, v336, v337, v338, v339);
  v341 = (void *)StringLiteral_21596;
  if ( StringLiteral_21596 )
  {
    v341 = (void *)sub_B170BC(StringLiteral_21596, *(_QWORD *)&(*v340)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v342 = (System_Int32_array **)StringLiteral_21596;
  }
  else
  {
    v342 = 0LL;
  }
  if ( *((_DWORD *)v340 + 6) <= 1u )
    goto LABEL_175;
  v340[5] = (System_Int32_array *)v342;
  sub_B16F98((BattleServantConfConponent_o *)(v340 + 5), v342, v334, v343, v344, v345, v346, v347);
  p_RP_SPNAME_FRAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->RP_SPNAME_FRAME;
  p_RP_SPNAME_FRAME->klass = (BattleServantConfConponent_c *)v340;
  sub_B16F98(p_RP_SPNAME_FRAME, v340, v349, v350, v351, v352, v353, v354);
  v356 = sub_B17014(string___TypeInfo, 2LL, v355);
  if ( !v356 )
    goto LABEL_177;
  v362 = (System_Int32_array **)v356;
  v341 = (void *)StringLiteral_21598;
  if ( StringLiteral_21598 )
  {
    v341 = (void *)sub_B170BC(StringLiteral_21598, *(_QWORD *)&(*v362)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v342 = (System_Int32_array **)StringLiteral_21598;
  }
  else
  {
    v342 = 0LL;
  }
  if ( !*((_DWORD *)v362 + 6) )
    goto LABEL_175;
  v362[4] = (System_Int32_array *)v342;
  sub_B16F98((BattleServantConfConponent_o *)(v362 + 4), v342, v334, v357, v358, v359, v360, v361);
  v341 = (void *)StringLiteral_21595;
  if ( StringLiteral_21595 )
  {
    v341 = (void *)sub_B170BC(StringLiteral_21595, *(_QWORD *)&(*v362)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v342 = (System_Int32_array **)StringLiteral_21595;
  }
  else
  {
    v342 = 0LL;
  }
  if ( *((_DWORD *)v362 + 6) <= 1u )
    goto LABEL_175;
  v362[5] = (System_Int32_array *)v342;
  sub_B16F98((BattleServantConfConponent_o *)(v362 + 5), v342, v334, v363, v364, v365, v366, v367);
  p_RP_SPNAME_POINT = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->RP_SPNAME_POINT;
  p_RP_SPNAME_POINT->klass = (BattleServantConfConponent_c *)v362;
  sub_B16F98(p_RP_SPNAME_POINT, v362, v369, v370, v371, v372, v373, v374);
  v375 = QuestBoardListViewItemDraw_TypeInfo;
  QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_DEFAULT_FONT_SIZE = 18;
  v375->static_fields->RESTRICTION_FONT_SPACING_DEFAULT = 0;
  v375->static_fields->RESTRICTION_FONT_SPACING_MIN = -1;
  v376 = v375->static_fields;
  *(_QWORD *)&v376->RESTRICTION_POS_DEFAULT.fields.x = 0xC2040000C33A0000LL;
  v376->RESTRICTION_POS_DEFAULT.fields.z = 0.0;
  v375->static_fields->RESTRICTION_FONT_SIZE_ALLOUT = 14;
  v375->static_fields->RESTRICTION_FONT_WIDTH_ALLOUT = 112;
  v377 = v375->static_fields;
  *(_QWORD *)&v377->RESTRICTION_POS_ALLOUT.fields.x = 0xC2040000C3370000LL;
  v377->RESTRICTION_POS_ALLOUT.fields.z = 0.0;
  v375->static_fields->BANNER_ENTORY_EFFECT_DURATION = 0.5;
  v375->static_fields->BANNER_ENTORY_START_POS_X = 30.0;
  v378 = (System_Int32_array **)StringLiteral_21538;
  p_QBOARD_CAP_CLOSED = (BattleServantConfConponent_o *)&v375->static_fields->QBOARD_CAP_CLOSED;
  p_QBOARD_CAP_CLOSED->klass = (BattleServantConfConponent_c *)StringLiteral_21538;
  sub_B16F98(p_QBOARD_CAP_CLOSED, v378, v380, v381, v382, v383, v384, v385);
  v386 = (System_Int32_array **)StringLiteral_21542;
  p_QBOARD_CAP_CLOSED_SPECIAL_FORMAT = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_SPECIAL_FORMAT;
  p_QBOARD_CAP_CLOSED_SPECIAL_FORMAT->klass = (BattleServantConfConponent_c *)StringLiteral_21542;
  sub_B16F98(p_QBOARD_CAP_CLOSED_SPECIAL_FORMAT, v386, v388, v389, v390, v391, v392, v393);
  v394 = (System_Int32_array **)StringLiteral_21539;
  p_QBOARD_CAP_CLOSED_SPECIAL = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_SPECIAL;
  p_QBOARD_CAP_CLOSED_SPECIAL->klass = (BattleServantConfConponent_c *)StringLiteral_21539;
  sub_B16F98(p_QBOARD_CAP_CLOSED_SPECIAL, v394, v396, v397, v398, v399, v400, v401);
  v402 = (System_Int32_array **)StringLiteral_21540;
  p_QBOARD_CAP_CLOSED_SPECIAL_2 = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_SPECIAL_2;
  p_QBOARD_CAP_CLOSED_SPECIAL_2->klass = (BattleServantConfConponent_c *)StringLiteral_21540;
  sub_B16F98(p_QBOARD_CAP_CLOSED_SPECIAL_2, v402, v404, v405, v406, v407, v408, v409);
  v410 = (System_Int32_array **)StringLiteral_21541;
  p_QBOARD_CAP_CLOSED_SPECIAL_3 = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_SPECIAL_3;
  p_QBOARD_CAP_CLOSED_SPECIAL_3->klass = (BattleServantConfConponent_c *)StringLiteral_21541;
  sub_B16F98(p_QBOARD_CAP_CLOSED_SPECIAL_3, v410, v412, v413, v414, v415, v416, v417);
  v419 = sub_B17014(string___TypeInfo, 7LL, v418);
  if ( !v419 )
    goto LABEL_177;
  v425 = (System_Int32_array **)v419;
  v341 = (void *)StringLiteral_19501;
  if ( StringLiteral_19501 )
  {
    v341 = (void *)sub_B170BC(StringLiteral_19501, *(_QWORD *)&(*v425)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v342 = (System_Int32_array **)StringLiteral_19501;
  }
  else
  {
    v342 = 0LL;
  }
  if ( !*((_DWORD *)v425 + 6) )
    goto LABEL_175;
  v425[4] = (System_Int32_array *)v342;
  sub_B16F98((BattleServantConfConponent_o *)(v425 + 4), v342, v334, v420, v421, v422, v423, v424);
  v341 = (void *)StringLiteral_21543;
  if ( StringLiteral_21543 )
  {
    v341 = (void *)sub_B170BC(StringLiteral_21543, *(_QWORD *)&(*v425)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v342 = (System_Int32_array **)StringLiteral_21543;
  }
  else
  {
    v342 = 0LL;
  }
  if ( *((_DWORD *)v425 + 6) <= 1u )
    goto LABEL_175;
  v425[5] = (System_Int32_array *)v342;
  sub_B16F98((BattleServantConfConponent_o *)(v425 + 5), v342, v334, v426, v427, v428, v429, v430);
  v341 = (void *)StringLiteral_17200;
  if ( StringLiteral_17200 )
  {
    v341 = (void *)sub_B170BC(StringLiteral_17200, *(_QWORD *)&(*v425)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v342 = (System_Int32_array **)StringLiteral_17200;
  }
  else
  {
    v342 = 0LL;
  }
  if ( *((_DWORD *)v425 + 6) <= 2u )
    goto LABEL_175;
  v425[6] = (System_Int32_array *)v342;
  sub_B16F98((BattleServantConfConponent_o *)(v425 + 6), v342, v334, v431, v432, v433, v434, v435);
  v341 = (void *)StringLiteral_19508;
  if ( StringLiteral_19508 )
  {
    v341 = (void *)sub_B170BC(StringLiteral_19508, *(_QWORD *)&(*v425)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v342 = (System_Int32_array **)StringLiteral_19508;
  }
  else
  {
    v342 = 0LL;
  }
  if ( *((_DWORD *)v425 + 6) <= 3u )
    goto LABEL_175;
  v425[7] = (System_Int32_array *)v342;
  sub_B16F98((BattleServantConfConponent_o *)(v425 + 7), v342, v334, v436, v437, v438, v439, v440);
  v341 = (void *)StringLiteral_19503;
  if ( StringLiteral_19503 )
  {
    v341 = (void *)sub_B170BC(StringLiteral_19503, *(_QWORD *)&(*v425)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v342 = (System_Int32_array **)StringLiteral_19503;
  }
  else
  {
    v342 = 0LL;
  }
  if ( *((_DWORD *)v425 + 6) <= 4u )
    goto LABEL_175;
  v425[8] = (System_Int32_array *)v342;
  sub_B16F98((BattleServantConfConponent_o *)(v425 + 8), v342, v334, v441, v442, v443, v444, v445);
  v341 = StringLiteral_1;
  if ( StringLiteral_1 )
  {
    v341 = (void *)sub_B170BC(StringLiteral_1, *(_QWORD *)&(*v425)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v342 = (System_Int32_array **)StringLiteral_1;
  }
  else
  {
    v342 = 0LL;
  }
  if ( *((_DWORD *)v425 + 6) <= 5u )
    goto LABEL_175;
  v425[9] = (System_Int32_array *)v342;
  sub_B16F98((BattleServantConfConponent_o *)(v425 + 9), v342, v334, v446, v447, v448, v449, v450);
  v341 = (void *)StringLiteral_21543;
  if ( StringLiteral_21543 )
  {
    v341 = (void *)sub_B170BC(StringLiteral_21543, *(_QWORD *)&(*v425)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v342 = (System_Int32_array **)StringLiteral_21543;
  }
  else
  {
    v342 = 0LL;
  }
  if ( *((_DWORD *)v425 + 6) <= 6u )
    goto LABEL_175;
  v425[10] = (System_Int32_array *)v342;
  sub_B16F98((BattleServantConfConponent_o *)(v425 + 10), v342, v334, v451, v452, v453, v454, v455);
  p_msQBoardL1Names = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msQBoardL1Names;
  p_msQBoardL1Names->klass = (BattleServantConfConponent_c *)v425;
  sub_B16F98(p_msQBoardL1Names, v425, v457, v458, v459, v460, v461, v462);
  v463 = (System_Int32_array **)StringLiteral_19509;
  p_msQBoardL2Name_Story = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msQBoardL2Name_Story;
  p_msQBoardL2Name_Story->klass = (BattleServantConfConponent_c *)StringLiteral_19509;
  sub_B16F98(p_msQBoardL2Name_Story, v463, v465, v466, v467, v468, v469, v470);
  v471 = (System_Int32_array **)StringLiteral_19504;
  p_msQBoardL2Name_Hero = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msQBoardL2Name_Hero;
  p_msQBoardL2Name_Hero->klass = (BattleServantConfConponent_c *)StringLiteral_19504;
  sub_B16F98(p_msQBoardL2Name_Hero, v471, v473, v474, v475, v476, v477, v478);
  v480 = sub_B17014(string___TypeInfo, 7LL, v479);
  if ( !v480 )
    goto LABEL_177;
  v486 = (System_Int32_array **)v480;
  v341 = StringLiteral_1;
  if ( StringLiteral_1 )
  {
    v341 = (void *)sub_B170BC(StringLiteral_1, *(_QWORD *)&(*v486)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v342 = (System_Int32_array **)StringLiteral_1;
  }
  else
  {
    v342 = 0LL;
  }
  if ( !*((_DWORD *)v486 + 6) )
    goto LABEL_175;
  v486[4] = (System_Int32_array *)v342;
  sub_B16F98((BattleServantConfConponent_o *)(v486 + 4), v342, v334, v481, v482, v483, v484, v485);
  v341 = (void *)StringLiteral_19507;
  if ( StringLiteral_19507 )
  {
    v341 = (void *)sub_B170BC(StringLiteral_19507, *(_QWORD *)&(*v486)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v342 = (System_Int32_array **)StringLiteral_19507;
  }
  else
  {
    v342 = 0LL;
  }
  if ( *((_DWORD *)v486 + 6) <= 1u )
    goto LABEL_175;
  v486[5] = (System_Int32_array *)v342;
  sub_B16F98((BattleServantConfConponent_o *)(v486 + 5), v342, v334, v487, v488, v489, v490, v491);
  v341 = (void *)StringLiteral_19502;
  if ( StringLiteral_19502 )
  {
    v341 = (void *)sub_B170BC(StringLiteral_19502, *(_QWORD *)&(*v486)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v342 = (System_Int32_array **)StringLiteral_19502;
  }
  else
  {
    v342 = 0LL;
  }
  if ( *((_DWORD *)v486 + 6) <= 2u )
    goto LABEL_175;
  v486[6] = (System_Int32_array *)v342;
  sub_B16F98((BattleServantConfConponent_o *)(v486 + 6), v342, v334, v492, v493, v494, v495, v496);
  v341 = (void *)StringLiteral_19511;
  if ( StringLiteral_19511 )
  {
    v341 = (void *)sub_B170BC(StringLiteral_19511, *(_QWORD *)&(*v486)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v342 = (System_Int32_array **)StringLiteral_19511;
  }
  else
  {
    v342 = 0LL;
  }
  if ( *((_DWORD *)v486 + 6) <= 3u )
    goto LABEL_175;
  v486[7] = (System_Int32_array *)v342;
  sub_B16F98((BattleServantConfConponent_o *)(v486 + 7), v342, v334, v497, v498, v499, v500, v501);
  v341 = StringLiteral_1;
  if ( StringLiteral_1 )
  {
    v341 = (void *)sub_B170BC(StringLiteral_1, *(_QWORD *)&(*v486)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v342 = (System_Int32_array **)StringLiteral_1;
  }
  else
  {
    v342 = 0LL;
  }
  if ( *((_DWORD *)v486 + 6) <= 4u )
    goto LABEL_175;
  v486[8] = (System_Int32_array *)v342;
  sub_B16F98((BattleServantConfConponent_o *)(v486 + 8), v342, v334, v502, v503, v504, v505, v506);
  v341 = (void *)StringLiteral_19502;
  if ( StringLiteral_19502 )
  {
    v341 = (void *)sub_B170BC(StringLiteral_19502, *(_QWORD *)&(*v486)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v342 = (System_Int32_array **)StringLiteral_19502;
  }
  else
  {
    v342 = 0LL;
  }
  if ( *((_DWORD *)v486 + 6) <= 5u )
    goto LABEL_175;
  v486[9] = (System_Int32_array *)v342;
  sub_B16F98((BattleServantConfConponent_o *)(v486 + 9), v342, v334, v507, v508, v509, v510, v511);
  v341 = (void *)StringLiteral_19505;
  if ( StringLiteral_19505 )
  {
    v341 = (void *)sub_B170BC(StringLiteral_19505, *(_QWORD *)&(*v486)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v342 = (System_Int32_array **)StringLiteral_19505;
  }
  else
  {
    v342 = 0LL;
  }
  if ( *((_DWORD *)v486 + 6) <= 6u )
    goto LABEL_175;
  v486[10] = (System_Int32_array *)v342;
  sub_B16F98((BattleServantConfConponent_o *)(v486 + 10), v342, v334, v512, v513, v514, v515, v516);
  p_msQBoardL3Names = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msQBoardL3Names;
  p_msQBoardL3Names->klass = (BattleServantConfConponent_c *)v486;
  sub_B16F98(p_msQBoardL3Names, v486, v518, v519, v520, v521, v522, v523);
  v525 = sub_B17014(string___TypeInfo, 7LL, v524);
  if ( !v525 )
    goto LABEL_177;
  v531 = (System_Int32_array **)v525;
  v341 = StringLiteral_1;
  if ( StringLiteral_1 )
  {
    v341 = (void *)sub_B170BC(StringLiteral_1, *(_QWORD *)&(*v531)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v342 = (System_Int32_array **)StringLiteral_1;
  }
  else
  {
    v342 = 0LL;
  }
  if ( !*((_DWORD *)v531 + 6) )
    goto LABEL_175;
  v531[4] = (System_Int32_array *)v342;
  sub_B16F98((BattleServantConfConponent_o *)(v531 + 4), v342, v334, v526, v527, v528, v529, v530);
  v341 = StringLiteral_1;
  if ( StringLiteral_1 )
  {
    v341 = (void *)sub_B170BC(StringLiteral_1, *(_QWORD *)&(*v531)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v342 = (System_Int32_array **)StringLiteral_1;
  }
  else
  {
    v342 = 0LL;
  }
  if ( *((_DWORD *)v531 + 6) <= 1u )
    goto LABEL_175;
  v531[5] = (System_Int32_array *)v342;
  sub_B16F98((BattleServantConfConponent_o *)(v531 + 5), v342, v334, v532, v533, v534, v535, v536);
  v341 = (void *)StringLiteral_19519;
  if ( StringLiteral_19519 )
  {
    v341 = (void *)sub_B170BC(StringLiteral_19519, *(_QWORD *)&(*v531)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v342 = (System_Int32_array **)StringLiteral_19519;
  }
  else
  {
    v342 = 0LL;
  }
  if ( *((_DWORD *)v531 + 6) <= 2u )
    goto LABEL_175;
  v531[6] = (System_Int32_array *)v342;
  sub_B16F98((BattleServantConfConponent_o *)(v531 + 6), v342, v334, v537, v538, v539, v540, v541);
  v341 = StringLiteral_1;
  if ( StringLiteral_1 )
  {
    v341 = (void *)sub_B170BC(StringLiteral_1, *(_QWORD *)&(*v531)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v342 = (System_Int32_array **)StringLiteral_1;
  }
  else
  {
    v342 = 0LL;
  }
  if ( *((_DWORD *)v531 + 6) <= 3u )
    goto LABEL_175;
  v531[7] = (System_Int32_array *)v342;
  sub_B16F98((BattleServantConfConponent_o *)(v531 + 7), v342, v334, v542, v543, v544, v545, v546);
  v341 = StringLiteral_1;
  if ( StringLiteral_1 )
  {
    v341 = (void *)sub_B170BC(StringLiteral_1, *(_QWORD *)&(*v531)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v342 = (System_Int32_array **)StringLiteral_1;
  }
  else
  {
    v342 = 0LL;
  }
  if ( *((_DWORD *)v531 + 6) <= 4u )
    goto LABEL_175;
  v531[8] = (System_Int32_array *)v342;
  sub_B16F98((BattleServantConfConponent_o *)(v531 + 8), v342, v334, v547, v548, v549, v550, v551);
  v341 = (void *)StringLiteral_19518;
  if ( StringLiteral_19518 )
  {
    v341 = (void *)sub_B170BC(StringLiteral_19518, *(_QWORD *)&(*v531)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v342 = (System_Int32_array **)StringLiteral_19518;
  }
  else
  {
    v342 = 0LL;
  }
  if ( *((_DWORD *)v531 + 6) <= 5u )
    goto LABEL_175;
  v531[9] = (System_Int32_array *)v342;
  sub_B16F98((BattleServantConfConponent_o *)(v531 + 9), v342, v334, v552, v553, v554, v555, v556);
  v341 = StringLiteral_1;
  if ( StringLiteral_1 )
  {
    v341 = (void *)sub_B170BC(StringLiteral_1, *(_QWORD *)&(*v531)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v342 = (System_Int32_array **)StringLiteral_1;
  }
  else
  {
    v342 = 0LL;
  }
  if ( *((_DWORD *)v531 + 6) <= 6u )
    goto LABEL_175;
  v531[10] = (System_Int32_array *)v342;
  sub_B16F98((BattleServantConfConponent_o *)(v531 + 10), v342, v334, v557, v558, v559, v560, v561);
  p_msLabelMainSprNames = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msLabelMainSprNames;
  p_msLabelMainSprNames->klass = (BattleServantConfConponent_c *)v531;
  sub_B16F98(p_msLabelMainSprNames, v531, v563, v564, v565, v566, v567, v568);
  v570 = sub_B17014(string___TypeInfo, 8LL, v569);
  if ( !v570 )
LABEL_177:
    sub_B170D4();
  v576 = (System_Int32_array **)v570;
  v341 = StringLiteral_1;
  if ( StringLiteral_1 )
  {
    v341 = (void *)sub_B170BC(StringLiteral_1, *(_QWORD *)&(*v576)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v342 = (System_Int32_array **)StringLiteral_1;
  }
  else
  {
    v342 = 0LL;
  }
  if ( !*((_DWORD *)v576 + 6) )
    goto LABEL_175;
  v576[4] = (System_Int32_array *)v342;
  sub_B16F98((BattleServantConfConponent_o *)(v576 + 4), v342, v334, v571, v572, v573, v574, v575);
  v341 = (void *)StringLiteral_21536;
  if ( StringLiteral_21536 )
  {
    v341 = (void *)sub_B170BC(StringLiteral_21536, *(_QWORD *)&(*v576)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v342 = (System_Int32_array **)StringLiteral_21536;
  }
  else
  {
    v342 = 0LL;
  }
  if ( *((_DWORD *)v576 + 6) <= 1u )
    goto LABEL_175;
  v576[5] = (System_Int32_array *)v342;
  sub_B16F98((BattleServantConfConponent_o *)(v576 + 5), v342, v334, v577, v578, v579, v580, v581);
  v341 = (void *)StringLiteral_21535;
  if ( StringLiteral_21535 )
  {
    v341 = (void *)sub_B170BC(StringLiteral_21535, *(_QWORD *)&(*v576)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v342 = (System_Int32_array **)StringLiteral_21535;
  }
  else
  {
    v342 = 0LL;
  }
  if ( *((_DWORD *)v576 + 6) <= 2u )
    goto LABEL_175;
  v576[6] = (System_Int32_array *)v342;
  sub_B16F98((BattleServantConfConponent_o *)(v576 + 6), v342, v334, v582, v583, v584, v585, v586);
  v341 = (void *)StringLiteral_21537;
  if ( StringLiteral_21537 )
  {
    v341 = (void *)sub_B170BC(StringLiteral_21537, *(_QWORD *)&(*v576)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v342 = (System_Int32_array **)StringLiteral_21537;
  }
  else
  {
    v342 = 0LL;
  }
  if ( *((_DWORD *)v576 + 6) <= 3u )
    goto LABEL_175;
  v576[7] = (System_Int32_array *)v342;
  sub_B16F98((BattleServantConfConponent_o *)(v576 + 7), v342, v334, v587, v588, v589, v590, v591);
  v341 = StringLiteral_1;
  if ( StringLiteral_1 )
  {
    v341 = (void *)sub_B170BC(StringLiteral_1, *(_QWORD *)&(*v576)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v342 = (System_Int32_array **)StringLiteral_1;
  }
  else
  {
    v342 = 0LL;
  }
  if ( *((_DWORD *)v576 + 6) <= 4u )
    goto LABEL_175;
  v576[8] = (System_Int32_array *)v342;
  sub_B16F98((BattleServantConfConponent_o *)(v576 + 8), v342, v334, v592, v593, v594, v595, v596);
  v341 = (void *)StringLiteral_21535;
  if ( StringLiteral_21535 )
  {
    v341 = (void *)sub_B170BC(StringLiteral_21535, *(_QWORD *)&(*v576)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v342 = (System_Int32_array **)StringLiteral_21535;
  }
  else
  {
    v342 = 0LL;
  }
  if ( *((_DWORD *)v576 + 6) <= 5u )
    goto LABEL_175;
  v576[9] = (System_Int32_array *)v342;
  sub_B16F98((BattleServantConfConponent_o *)(v576 + 9), v342, v334, v597, v598, v599, v600, v601);
  v341 = StringLiteral_1;
  if ( StringLiteral_1 )
  {
    v341 = (void *)sub_B170BC(StringLiteral_1, *(_QWORD *)&(*v576)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v342 = (System_Int32_array **)StringLiteral_1;
  }
  else
  {
    v342 = 0LL;
  }
  if ( *((_DWORD *)v576 + 6) <= 6u )
    goto LABEL_175;
  v576[10] = (System_Int32_array *)v342;
  sub_B16F98((BattleServantConfConponent_o *)(v576 + 10), v342, v334, v602, v603, v604, v605, v606);
  v341 = (void *)StringLiteral_21568;
  if ( StringLiteral_21568 )
  {
    v341 = (void *)sub_B170BC(StringLiteral_21568, *(_QWORD *)&(*v576)->m_Items[9]);
    if ( v341 )
    {
      v342 = (System_Int32_array **)StringLiteral_21568;
      goto LABEL_173;
    }
LABEL_176:
    sub_B170F4(v341);
    sub_B170A0();
  }
  v342 = 0LL;
LABEL_173:
  if ( *((_DWORD *)v576 + 6) <= 7u )
  {
LABEL_175:
    sub_B17100(v341, v342, v334);
    sub_B170A0();
  }
  v576[11] = (System_Int32_array *)v342;
  sub_B16F98((BattleServantConfConponent_o *)(v576 + 11), v342, v334, v607, v608, v609, v610, v611);
  p_QuestBoardApSpNames = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QuestBoardApSpNames;
  p_QuestBoardApSpNames->klass = (BattleServantConfConponent_c *)v576;
  sub_B16F98(p_QuestBoardApSpNames, v576, v613, v614, v615, v616, v617, v618);
  v619 = (System_Int32_array **)StringLiteral_19496;
  p_msPhaseSprName_ArrowOff = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_ArrowOff;
  p_msPhaseSprName_ArrowOff->klass = (BattleServantConfConponent_c *)StringLiteral_19496;
  sub_B16F98(p_msPhaseSprName_ArrowOff, v619, v621, v622, v623, v624, v625, v626);
  v627 = (System_Int32_array **)StringLiteral_19497;
  p_msPhaseSprName_ArrowOn = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_ArrowOn;
  p_msPhaseSprName_ArrowOn->klass = (BattleServantConfConponent_c *)StringLiteral_19497;
  sub_B16F98(p_msPhaseSprName_ArrowOn, v627, v629, v630, v631, v632, v633, v634);
  v635 = (System_Int32_array **)StringLiteral_19494;
  p_msPhaseSprName_ExArrowOff = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_ExArrowOff;
  p_msPhaseSprName_ExArrowOff->klass = (BattleServantConfConponent_c *)StringLiteral_19494;
  sub_B16F98(p_msPhaseSprName_ExArrowOff, v635, v637, v638, v639, v640, v641, v642);
  v643 = (System_Int32_array **)StringLiteral_19495;
  p_msPhaseSprName_ExArrowOn = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_ExArrowOn;
  p_msPhaseSprName_ExArrowOn->klass = (BattleServantConfConponent_c *)StringLiteral_19495;
  sub_B16F98(p_msPhaseSprName_ExArrowOn, v643, v645, v646, v647, v648, v649, v650);
  v651 = (System_Int32_array **)StringLiteral_19515;
  p_msPhaseSprName_LoopOff = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_LoopOff;
  p_msPhaseSprName_LoopOff->klass = (BattleServantConfConponent_c *)StringLiteral_19515;
  sub_B16F98(p_msPhaseSprName_LoopOff, v651, v653, v654, v655, v656, v657, v658);
  v659 = (System_Int32_array **)StringLiteral_19516;
  p_msPhaseSprName_LoopOn = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_LoopOn;
  p_msPhaseSprName_LoopOn->klass = (BattleServantConfConponent_c *)StringLiteral_19516;
  sub_B16F98(p_msPhaseSprName_LoopOn, v659, v661, v662, v663, v664, v665, v666);
  v667 = (System_Int32_array **)StringLiteral_19450;
  p_msPhaseSprName_LoopFirstOff = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_LoopFirstOff;
  p_msPhaseSprName_LoopFirstOff->klass = (BattleServantConfConponent_c *)StringLiteral_19450;
  sub_B16F98(p_msPhaseSprName_LoopFirstOff, v667, v669, v670, v671, v672, v673, v674);
  v675 = (System_Int32_array **)StringLiteral_21546;
  p_CHAPTER_SP_BASE_NAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->CHAPTER_SP_BASE_NAME;
  p_CHAPTER_SP_BASE_NAME->klass = (BattleServantConfConponent_c *)StringLiteral_21546;
  sub_B16F98(p_CHAPTER_SP_BASE_NAME, v675, v677, v678, v679, v680, v681, v682);
  v683 = (System_Int32_array **)StringLiteral_19493;
  p_CHAPTER_SP_UNIT_NAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->CHAPTER_SP_UNIT_NAME;
  p_CHAPTER_SP_UNIT_NAME->klass = (BattleServantConfConponent_c *)StringLiteral_19493;
  sub_B16F98(p_CHAPTER_SP_UNIT_NAME, v683, v685, v686, v687, v688, v689, v690);
  v691 = (System_Int32_array **)StringLiteral_19490;
  p_PRE_BATTLE_ORGANIZATION = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->PRE_BATTLE_ORGANIZATION;
  p_PRE_BATTLE_ORGANIZATION->klass = (BattleServantConfConponent_c *)StringLiteral_19490;
  sub_B16F98(p_PRE_BATTLE_ORGANIZATION, v691, v693, v694, v695, v696, v697, v698);
}


void __fastcall QuestBoardListViewItemDraw___ctor(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct UnityEngine_GameObject_array *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x2
  QuestBoardListViewItemDraw_c *v16; // x0
  struct UISprite_array *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_40FC721 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_GameObject___TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_UISprite___ctor__, v4);
    sub_B16FFC(&System_Collections_Generic_List_UISprite__TypeInfo, v5);
    sub_B16FFC(&QuestBoardListViewItemDraw_TypeInfo, v6);
    sub_B16FFC(&UISprite___TypeInfo, v7);
    byte_40FC721 = 1;
  }
  v8 = (struct UnityEngine_GameObject_array *)sub_B17014(UnityEngine_GameObject___TypeInfo, 4LL, v2);
  this->fields.mStatusSp = v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mStatusSp,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v16 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v16 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v17 = (struct UISprite_array *)sub_B17014(UISprite___TypeInfo, (unsigned int)v16->static_fields->PHASE_EXTRA_MAX, v15);
  this->fields.mPhaseSp = v17;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mPhaseSp,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UISprite__TypeInfo,
                                                                                                  v24,
                                                                                                  v25,
                                                                                                  v26,
                                                                                                  v27);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UISprite___ctor__);
  this->fields.mMultiSecondBattleInformation = (struct System_Collections_Generic_List_UISprite__o *)v28;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mMultiSecondBattleInformation,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestBoardListViewItemDraw__Awake(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  struct UILabel_o *mOptionRestrinctionLb; // x8

  mOptionRestrinctionLb = this->fields.mOptionRestrinctionLb;
  this->fields._bannerState_k__BackingField = 0;
  if ( !mOptionRestrinctionLb )
    sub_B170D4();
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
    sub_B170D4();
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
  UnityEngine_GameObject_o *v5; // x0
  BoardOptionEventTargetComponent_o *v6; // x0
  BoardOptionEventTargetComponent_o *v7; // x0

  if ( (byte_40FC713 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FC713 = 1;
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
      v5 = this->fields.eventTarget;
      if ( !v5 )
        goto LABEL_18;
      if ( UnityEngine_GameObject__get_activeSelf(v5, 0LL) )
      {
        v6 = this->fields.eventTargetComponent;
        if ( !v6 )
          goto LABEL_18;
        if ( BoardOptionEventTargetComponent__IsNeedAnim(v6, 0LL) )
        {
          v7 = this->fields.eventTargetComponent;
          if ( v7 )
          {
            BoardOptionEventTargetComponent__SetNextTarget(v7, 0LL);
            return;
          }
LABEL_18:
          sub_B170D4();
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
  int32_t AlphaAnimCnt; // w0
  const MethodInfo *v7; // x1
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v8; // x26
  int32_t v9; // w25
  __int64 v10; // x8
  QuestBoardInformaionText_o *v11; // x26
  const MethodInfo *v12; // x2
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x8
  QuestBoardInformaionText_o *v18; // x0
  QuestBoardListViewItem_o *v19; // x1
  int64_t Time; // x3
  const MethodInfo *v21; // x4
  QuestBoardListViewItemDraw_o *v22; // x0
  int32_t v23; // w2

  while ( 1 )
  {
    if ( (byte_40FC70F & 1) == 0 )
    {
      sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__RemoveAt__, questBoardItem);
      sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, v14);
      sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__, v15);
      sub_B16FFC(&NetworkManager_TypeInfo, v16);
      byte_40FC70F = 1;
    }
    if ( (byte_40FC710 & 1) == 0 )
    {
      sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, questBoardItem);
      byte_40FC710 = 1;
    }
    mInfoTextList = this->fields.mInfoTextList;
    if ( !mInfoTextList )
      break;
    questBoardItem = (QuestBoardListViewItem_o *)(unsigned int)mInfoTextList->fields._size;
    if ( (int)questBoardItem < 2 )
      break;
    if ( !questBoardManager )
      goto LABEL_33;
    AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt(questBoardManager, (int32_t)questBoardItem, 0LL);
    v8 = this->fields.mInfoTextList;
    if ( !v8 )
      goto LABEL_33;
    v9 = AlphaAnimCnt;
    if ( v8->fields._size <= (unsigned int)AlphaAnimCnt )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v10 = (__int64)v8->fields._items + 8 * AlphaAnimCnt;
    v11 = *(QuestBoardInformaionText_o **)(v10 + 32);
    if ( !v11 )
      goto LABEL_33;
    if ( !QuestBoardInformaionText__IsQuestOpened(*(QuestBoardInformaionText_o **)(v10 + 32), v7) )
    {
      if ( !QuestBoardInformaionText__ChangeText(v11, &this->fields.mOptionInfoLb, v12) )
        return;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Time = NetworkManager__getTime(0LL);
      v22 = this;
      v23 = v9;
      goto LABEL_31;
    }
    v13 = this->fields.mInfoTextList;
    if ( !v13 )
      goto LABEL_33;
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v13,
      v9,
      (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__RemoveAt__);
  }
  if ( (byte_40FC711 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, questBoardItem);
    byte_40FC711 = 1;
    mInfoTextList = this->fields.mInfoTextList;
  }
  if ( mInfoTextList && mInfoTextList->fields._size )
  {
    v18 = mInfoTextList->fields._items->m_Items[0];
    if ( !v18 )
LABEL_33:
      sub_B170D4();
    if ( QuestBoardInformaionText__ChangeText(v18, &this->fields.mOptionInfoLb, (const MethodInfo *)questBoardManager) )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Time = NetworkManager__getTime(0LL);
      v22 = this;
      v23 = 0;
LABEL_31:
      QuestBoardListViewItemDraw__UpdateInfoText(v22, v19, v23, Time, v21);
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
  __int64 AlphaAnimCnt; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t *v9; // x9
  int32_t v10; // w1
  ItemIconComponent_o *mRewardIcon; // x0
  int v12; // w8
  int32_t v13; // w2
  int32_t v14; // w3

  mRewardIconInfs = this->fields.mRewardIconInfs;
  if ( !mRewardIconInfs )
    return;
  max_length = mRewardIconInfs->max_length;
  if ( max_length < 2 )
    return;
  if ( !questBoardManager )
    goto LABEL_18;
  AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt(questBoardManager, max_length, 0LL);
  if ( (unsigned int)AlphaAnimCnt >= mRewardIconInfs->max_length )
  {
    sub_B17100(AlphaAnimCnt, v7, v8);
    sub_B170A0();
  }
  v9 = (int32_t *)mRewardIconInfs->m_Items[(int)AlphaAnimCnt];
  if ( !v9 )
    goto LABEL_18;
  v10 = v9[11];
  mRewardIcon = this->fields.mRewardIcon;
  v12 = v9[7];
  if ( v10 >= 1 )
  {
    if ( mRewardIcon )
    {
      if ( v12 <= 1 )
        v13 = -1;
      else
        v13 = v9[7];
      ItemIconComponent__SetItemImage_28930192(mRewardIcon, v10, v13, 0LL);
      return;
    }
LABEL_18:
    sub_B170D4();
  }
  if ( !mRewardIcon )
    goto LABEL_18;
  if ( v12 <= 1 )
    v14 = -1;
  else
    v14 = v9[7];
  ItemIconComponent__SetGift(mRewardIcon, v9[5], v9[6], v14, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestBoardListViewItemDraw__ConvertToChineseAscii(
        QuestBoardListViewItemDraw_o *this,
        int32_t n,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  unsigned int v7; // w21
  System_Text_StringBuilder_o *v8; // x19
  unsigned int v10; // w8
  unsigned int v11; // w8

  if ( (byte_40FC708 & 1) == 0 )
  {
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, *(_QWORD *)&n);
    sub_B16FFC(&StringLiteral_951, v6);
    byte_40FC708 = 1;
  }
  if ( n <= 0 )
    return (System_String_o *)StringLiteral_951;
  v7 = n % 0xAu;
  v8 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, *(_QWORD *)&n, method, v3, v4);
  System_Text_StringBuilder___ctor_41908268(v8, 5, 0LL);
  if ( n >= 10 )
  {
    if ( n >= 100 )
    {
      v11 = n / 0x64u % 0xA;
      if ( v11 >= 2 )
      {
        if ( !v8 )
          goto LABEL_22;
        System_Text_StringBuilder__Append_41917484(v8, v11 | 0x60, 0LL);
      }
      else if ( !v8 )
      {
LABEL_22:
        sub_B170D4();
      }
      System_Text_StringBuilder__Append_41917484(v8, 0x6Bu, 0LL);
      v10 = n / 0xAu % 0xA;
    }
    else
    {
      if ( !v8 )
        goto LABEL_22;
      v10 = (unsigned __int8)n / 0xAu % 0xA;
    }
    if ( v10 >= 2 )
      System_Text_StringBuilder__Append_41917484(v8, v10 | 0x60, 0LL);
    System_Text_StringBuilder__Append_41917484(v8, 0x6Au, 0LL);
    if ( !v7 )
      return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v8->klass->vtable._3_ToString.method)(
                                  v8,
                                  v8->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  }
  else if ( !v8 )
  {
    goto LABEL_22;
  }
  System_Text_StringBuilder__Append_41917484(v8, v7 | 0x60, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v8->klass->vtable._3_ToString.method)(
                              v8,
                              v8->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
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
  WebViewManager_o *Instance; // x0
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x19
  struct MapControl_AreaBoardInfo_o *AreaBoardInfo_k__BackingField; // x22
  DataManager_o *v23; // x23
  int32_t warId; // w20
  EventCampaignMaster_o *MasterData_WarQuestSelectionMaster; // x21
  BoardMessageMaster_o *v26; // x0
  BoardMessageEntity_array *IsEventPeriod; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  __int64 v32; // x23
  BoardMessageEntity_array *v33; // x22
  il2cpp_array_size_t v34; // w25
  BoardMessageEntity_o *v35; // x26
  System_String_o *message; // x28
  int64_t closedAt; // x19
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x27
  QuestBoardInformaionText_o *v39; // x0
  const MethodInfo *v40; // x6
  EventMissionProgressRequest_Argument_ProgressData_o *v41; // x24
  BoardMessageEntity_o *v42; // x1
  System_String_o *v43; // x2
  int64_t v44; // x3
  EventCampaignEntity_o *Data; // x0
  System_String_o *v46; // x19
  int64_t v47; // x28
  EventCampaignEntity_o *v48; // x20
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v49; // x27
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  QuestBoardInformaionText_o *v54; // x24
  const MethodInfo *v55; // x6
  DataMasterBase_WarMaster__WarEntity__int__o *v56; // x0
  int64_t v57; // x28
  DataMasterBase_WarMaster__WarEntity__int__o *v58; // x0
  System_String_o *v59; // x19
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  _BOOL4 HasFlag; // w25
  UnityEngine_Component_o *mRarePrismSp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  _BOOL8 activeSelf; // x0
  const MethodInfo *v65; // x3
  struct EventEntity_o *eventEnt; // x8
  BoardMessageEntity_o *OverrideQuestMessage; // x0
  BoardMessageEntity_o *v68; // x24
  __int64 v69; // x8
  BoardMessageEntity_o *v70; // x26
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v71; // x25
  System_String_o *v72; // x20
  int64_t endTime; // x19
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  QuestBoardInformaionText_o *v78; // x24
  const MethodInfo *v79; // x6
  int max_length; // w8
  BoardMessageEntity_array *v81; // x23
  unsigned int v82; // w27
  EventEntity_o *v83; // x24
  int32_t id; // w25
  BoardMessageEntity_array *v85; // x26
  const MethodInfo *v86; // x3
  int32_t bounds_high; // w19
  BoardMessageEntity_o *v88; // x25
  System_String_o *v89; // x19
  Il2CppObject *EventName; // x0
  System_String_o *v91; // x19
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v92; // x25
  int64_t v93; // x20
  __int64 v94; // x1
  __int64 v95; // x2
  __int64 v96; // x3
  __int64 v97; // x4
  QuestBoardInformaionText_o *v98; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v99; // x24
  EventCampaignEntity_o *v100; // [xsp+0h] [xbp-B0h]
  const MethodInfo *v101; // [xsp+10h] [xbp-A0h]
  struct MapControl_QuestInfo_o *v102; // [xsp+20h] [xbp-90h]
  struct MapControl_AreaBoardInfo_o *v103; // [xsp+28h] [xbp-88h]
  DataMasterBase_WarMaster__WarEntity__int__o *v104; // [xsp+30h] [xbp-80h]
  int32_t v105; // [xsp+3Ch] [xbp-74h]
  DataManager_o *v106; // [xsp+40h] [xbp-70h]
  WarEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v110; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v111; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FC6E4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_BoardMessageMaster___, questBoardItem);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventCampaignMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMaster_WarMaster___, v8);
    sub_B16FFC(&DataManager_TypeInfo, v9);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v10);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v11);
    sub_B16FFC(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__, v13);
    sub_B16FFC(&LocalizationManager_TypeInfo, v14);
    sub_B16FFC(&QuestBoardInformaionText_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B16FFC(&StringLiteral_23445, v17);
    sub_B16FFC(&StringLiteral_13351, v18);
    sub_B16FFC(&StringLiteral_13349, v19);
    byte_40FC6E4 = 1;
  }
  entity = 0LL;
  QuestBoardListViewItemDraw__ResetInfoTextList(this, (const MethodInfo *)questBoardItem);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !questBoardItem )
    goto LABEL_76;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_76;
  AreaBoardInfo_k__BackingField = quest_info_k__BackingField->fields._AreaBoardInfo_k__BackingField;
  if ( !AreaBoardInfo_k__BackingField )
    goto LABEL_76;
  v23 = (DataManager_o *)Instance;
  if ( !Instance )
    goto LABEL_76;
  warId = AreaBoardInfo_k__BackingField->fields.warId;
  MasterData_WarQuestSelectionMaster = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  v104 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          v23,
                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
  v26 = (BoardMessageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  v23,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BoardMessageMaster___);
  if ( !v26 )
    goto LABEL_76;
  v106 = v23;
  v102 = quest_info_k__BackingField;
  v103 = AreaBoardInfo_k__BackingField;
  IsEventPeriod = BoardMessageMaster__GetDataCondCheck(v26, warId, checkTime, 0LL);
  if ( !IsEventPeriod )
    goto LABEL_76;
  v32 = *(_QWORD *)&IsEventPeriod->max_length;
  v33 = IsEventPeriod;
  v105 = warId;
  if ( (int)v32 >= 1 )
  {
    v34 = 0;
    while ( 1 )
    {
      v35 = v33->m_Items[v34];
      if ( !v35 )
        break;
      switch ( v35->fields.referenceType )
      {
        case 1:
          message = v35->fields.message;
          closedAt = v35->fields.closedAt;
          mInfoTextList = this->fields.mInfoTextList;
          v39 = (QuestBoardInformaionText_o *)sub_B170CC(QuestBoardInformaionText_TypeInfo, v28, v29, v30, v31);
          v41 = (EventMissionProgressRequest_Argument_ProgressData_o *)v39;
          v42 = v35;
          v43 = message;
          v44 = closedAt;
          goto LABEL_28;
        case 2:
          v58 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 v106,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !v58 )
            goto LABEL_76;
          IsEventPeriod = (BoardMessageEntity_array *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                        v58,
                                                        v35->fields.referenceId,
                                                        (const MethodInfo_266F388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !IsEventPeriod )
            goto LABEL_30;
          v57 = SHIDWORD(IsEventPeriod->m_Items[15]);
          break;
        case 3:
          v56 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 v106,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !v56 )
            goto LABEL_76;
          IsEventPeriod = (BoardMessageEntity_array *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                        v56,
                                                        v35->fields.referenceId,
                                                        (const MethodInfo_266F388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !IsEventPeriod )
            goto LABEL_30;
          v57 = SLODWORD(IsEventPeriod->m_Items[16]);
          break;
        case 4:
          if ( !v104 )
            goto LABEL_76;
          IsEventPeriod = (BoardMessageEntity_array *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                        v104,
                                                        v35->fields.referenceId,
                                                        (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          if ( !IsEventPeriod )
            goto LABEL_30;
          v57 = (int64_t)IsEventPeriod->m_Items[8];
          break;
        case 5:
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_76;
          Data = EventCampaignMaster__getData(MasterData_WarQuestSelectionMaster, v35->fields.referenceId, 0LL);
          v46 = v35->fields.message;
          v47 = v35->fields.closedAt;
          v48 = Data;
          v49 = this->fields.mInfoTextList;
          v54 = (QuestBoardInformaionText_o *)sub_B170CC(QuestBoardInformaionText_TypeInfo, v50, v51, v52, v53);
          QuestBoardInformaionText___ctor_29477124(v54, v35, v46, v47, checkTime, v48, v55);
          if ( !v49 )
            goto LABEL_76;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v49,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v54,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
          warId = v105;
          goto LABEL_30;
        default:
          goto LABEL_30;
      }
      if ( v57 - checkTime >= 0 )
      {
        v59 = v35->fields.message;
        mInfoTextList = this->fields.mInfoTextList;
        v39 = (QuestBoardInformaionText_o *)sub_B170CC(QuestBoardInformaionText_TypeInfo, v28, v29, v30, v31);
        v41 = (EventMissionProgressRequest_Argument_ProgressData_o *)v39;
        v42 = v35;
        v43 = v59;
        v44 = v57;
LABEL_28:
        QuestBoardInformaionText___ctor_29477124(v39, v42, v43, v44, checkTime, 0LL, v40);
        if ( !mInfoTextList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mInfoTextList,
          v41,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
      }
LABEL_30:
      if ( (int)++v34 >= (int)v32 )
        goto LABEL_33;
      if ( v34 >= v33->max_length )
        goto LABEL_77;
    }
LABEL_76:
    sub_B170D4();
  }
LABEL_33:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_76;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         Master_WarQuestSelectionMaster,
         &entity,
         warId,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      goto LABEL_76;
    HasFlag = WarEntity__HasFlag(entity, 0x80000, 0LL);
  }
  else
  {
    HasFlag = 0;
  }
  if ( v103->fields.eventEnt )
  {
    mRarePrismSp = (UnityEngine_Component_o *)this->fields.mRarePrismSp;
    if ( !mRarePrismSp )
      goto LABEL_76;
    gameObject = UnityEngine_Component__get_gameObject(mRarePrismSp, 0LL);
    if ( !gameObject )
      goto LABEL_76;
    activeSelf = UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
    if ( !HasFlag && !activeSelf )
    {
      eventEnt = v103->fields.eventEnt;
      if ( !eventEnt )
        goto LABEL_76;
      OverrideQuestMessage = QuestBoardListViewItemDraw__FindOverrideQuestMessage(
                               (QuestBoardListViewItemDraw_o *)activeSelf,
                               v33,
                               eventEnt->fields.id,
                               v65);
      if ( v103->fields.eventEnt )
      {
        v68 = OverrideQuestMessage;
        IsEventPeriod = (BoardMessageEntity_array *)EventEntity__IsEventPeriod(v103->fields.eventEnt, checkTime, 0LL);
        if ( !v68 && ((unsigned __int8)IsEventPeriod & 1) != 0 )
        {
          v69 = *(_QWORD *)&v33->max_length;
          if ( v69 )
          {
            if ( !(_DWORD)v69 )
              goto LABEL_77;
            v70 = v33->m_Items[0];
          }
          else
          {
            v70 = 0LL;
          }
          v71 = this->fields.mInfoTextList;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v72 = LocalizationManager__Get((System_String_o *)StringLiteral_13351, 0LL);
          endTime = v102->fields.endTime;
          v78 = (QuestBoardInformaionText_o *)sub_B170CC(QuestBoardInformaionText_TypeInfo, v74, v75, v76, v77);
          QuestBoardInformaionText___ctor_29477124(v78, v70, v72, endTime, checkTime, 0LL, v79);
          if ( !v71 )
            goto LABEL_76;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v71,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v78,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
          warId = v105;
        }
      }
    }
  }
  if ( !v104 )
    goto LABEL_76;
  IsEventPeriod = (BoardMessageEntity_array *)EventMaster__GetEnableEntityList((EventMaster_o *)v104, 7, 1, 0LL);
  if ( !IsEventPeriod )
    goto LABEL_76;
  max_length = IsEventPeriod->max_length;
  v81 = IsEventPeriod;
  if ( max_length >= 1 )
  {
    v82 = 0;
    while ( v82 < max_length )
    {
      v83 = (EventEntity_o *)v81->m_Items[v82];
      if ( !v83 || !MasterData_WarQuestSelectionMaster )
        goto LABEL_76;
      id = v83->fields.id;
      IsEventPeriod = (BoardMessageEntity_array *)EventCampaignMaster__getData(
                                                    MasterData_WarQuestSelectionMaster,
                                                    id,
                                                    0LL);
      if ( IsEventPeriod )
      {
        v85 = IsEventPeriod;
        IsEventPeriod = (BoardMessageEntity_array *)EventCampaignEntity__isDispWarId(
                                                      (EventCampaignEntity_o *)IsEventPeriod,
                                                      warId,
                                                      0LL);
        if ( ((unsigned __int8)IsEventPeriod & 1) != 0 )
        {
          bounds_high = HIDWORD(v85->bounds);
          v88 = QuestBoardListViewItemDraw__FindOverrideQuestMessage(
                  (QuestBoardListViewItemDraw_o *)IsEventPeriod,
                  v33,
                  id,
                  v86);
          IsEventPeriod = (BoardMessageEntity_array *)CombineAdjustTarget__isTerminalExposable(bounds_high, 0LL);
          if ( ((unsigned __int8)IsEventPeriod & 1) != 0 && !v88 )
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v89 = LocalizationManager__Get((System_String_o *)StringLiteral_13349, 0LL);
            EventName = (Il2CppObject *)EventEntity__getEventName(v83, 0LL);
            v91 = System_String__Format_43739268(v89, EventName, (Il2CppObject *)StringLiteral_23445, 0LL);
            v92 = this->fields.mInfoTextList;
            v93 = EventEntity__GetEndTime(v83, 0, 0LL);
            v98 = (QuestBoardInformaionText_o *)sub_B170CC(QuestBoardInformaionText_TypeInfo, v94, v95, v96, v97);
            v111.fields.r = 0.0;
            v111.fields.g = 0.0;
            v111.fields.b = 0.0;
            v111.fields.a = 0.0;
            v110.fields.x = 0.0;
            v110.fields.y = 0.0;
            v110.fields.z = 0.0;
            v99 = (EventMissionProgressRequest_Argument_ProgressData_o *)v98;
            QuestBoardInformaionText___ctor(v98, v91, v93, 1, 0, v111, -1, 0, v110, 1, v100, 0LL, v101);
            if ( !v92 )
              goto LABEL_76;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v92,
              v99,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
            warId = v105;
          }
        }
      }
      max_length = v81->max_length;
      if ( (int)++v82 >= max_length )
        return;
    }
LABEL_77:
    sub_B17100(IsEventPeriod, v28, v29);
    sub_B170A0();
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
  QuestBoardListViewItemDraw___c__DisplayClass337_0_o *v30; // x25
  int target; // w26
  QuestBoardInformaionText_o *v32; // x27
  int32_t id; // w27
  EventCampaignReleaseMaster_o *Master_WarQuestSelectionMaster; // x0
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  struct ListViewManager_o *manager; // x8
  __int64 v37; // x10
  _BOOL8 isRelease; // x0
  const MethodInfo *v39; // x3
  System_Collections_Generic_List_UserOwnItemInfo__o *ContinueItemInfoList; // x20
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v45; // x21
  peRenderTexture_ChangeLayerObject_o *v46; // x0
  UserOwnItemInfo_o *v47; // x20
  System_String_o *v48; // x21
  Il2CppObject *v49; // x0
  System_String_o *v50; // x21
  System_String_o *EventName; // x22
  int32_t ImageId; // w20
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  TerminalBoardOptionTextData_o *dispTextExtend; // x23
  int64_t v58; // x19
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  System_String_o *v63; // x0
  System_String_o *v64; // x20
  int64_t EndTime; // x19
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  QuestPhaseMaster_o *v70; // x0
  QuestPhaseEntity_o *Entity; // x0
  struct System_Int32_array *targetIds; // x8
  int32_t consumeType; // w8
  System_String_o *v74; // x20
  Il2CppObject *v75; // x0
  System_String_o *v76; // x20
  int64_t v77; // x19
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  QuestBoardInformaionText_o *v82; // x0
  int v83; // s0
  int v84; // s1
  int v85; // s2
  int v86; // s3
  int v87; // s4
  int v88; // s5
  int v89; // s6
  QuestBoardInformaionText_o *result; // x0
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x21
  System_String_o *detail; // x23
  int64_t v93; // x0
  int64_t checkTime; // x24
  int64_t v95; // x25
  __int64 v96; // x1
  __int64 v97; // x2
  __int64 v98; // x3
  __int64 v99; // x4
  QuestBoardInformaionText_o *v100; // x22
  const MethodInfo *v101; // x6
  QuestBoardListViewItemDraw_o *v102; // x0
  QuestEntity_o *v103; // x1
  EventCampaignEntity_o *v104; // x2
  bool v105; // w3
  int32_t *v106; // x4
  int32_t *v107; // x5
  const MethodInfo *v108; // x6
  EventCampaignEntity_o *v109; // [xsp+0h] [xbp-70h]
  const MethodInfo *v110; // [xsp+10h] [xbp-60h]
  int32_t Num_k__BackingField; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v112; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Vector3_o v113; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v114; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v115; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FC70C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventCampaignReleaseMaster___, questEntity);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestPhaseMaster___, v13);
    sub_B16FFC(&DataManager_TypeInfo, v14);
    sub_B16FFC(&int_TypeInfo, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserOwnItemInfo__Find__, v17);
    sub_B16FFC(&LocalizationManager_TypeInfo, v18);
    sub_B16FFC(&Method_System_Predicate_UserOwnItemInfo___ctor__, v19);
    sub_B16FFC(&System_Predicate_UserOwnItemInfo__TypeInfo, v20);
    sub_B16FFC(&QuestBoardInformaionText_TypeInfo, v21);
    sub_B16FFC(&QuestBoardListViewManager_TypeInfo, v22);
    sub_B16FFC(&TerminalBoardOptionTextData_TypeInfo, v23);
    sub_B16FFC(&Method_QuestBoardListViewItemDraw___c__DisplayClass337_0__CreateQuestBoardInformationText_b__0__, v24);
    sub_B16FFC(&QuestBoardListViewItemDraw___c__DisplayClass337_0_TypeInfo, v25);
    sub_B16FFC(&StringLiteral_23445, v26);
    sub_B16FFC(&StringLiteral_1, v27);
    sub_B16FFC(&StringLiteral_13349, v28);
    sub_B16FFC(&StringLiteral_13350, v29);
    byte_40FC70C = 1;
  }
  v30 = (QuestBoardListViewItemDraw___c__DisplayClass337_0_o *)sub_B170CC(
                                                                 QuestBoardListViewItemDraw___c__DisplayClass337_0_TypeInfo,
                                                                 questEntity,
                                                                 eventEnt,
                                                                 eventCampaignEnt,
                                                                 *(_QWORD *)&phase);
  QuestBoardListViewItemDraw___c__DisplayClass337_0___ctor(v30, 0LL);
  if ( !eventCampaignEnt )
    goto LABEL_61;
  target = eventCampaignEnt->fields.target;
  v32 = 0LL;
  if ( !CombineAdjustTarget__isTerminalExposable(target, 0LL) )
    return v32;
  if ( !eventEnt )
    goto LABEL_61;
  id = eventEnt->fields.id;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventCampaignReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventCampaignReleaseMaster___);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_61;
  manager = mListViewObject->fields.manager;
  if ( !manager )
    goto LABEL_61;
  v37 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v37
    && (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[v37 - 1] == QuestBoardListViewManager_TypeInfo )
  {
    if ( !v30 )
      goto LABEL_61;
    v30->fields.checkTime = (int64_t)manager[1].fields.rightItem;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_61;
    isRelease = EventCampaignReleaseMaster__isRelease(
                  Master_WarQuestSelectionMaster,
                  id,
                  eventCampaignEnt->fields.target,
                  0LL);
    if ( !isRelease )
    {
      if ( target != 25 || isQuestNoneCleared )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v63 = LocalizationManager__Get((System_String_o *)StringLiteral_13349, 0LL);
        v64 = System_String__Format_43739268(
                v63,
                (Il2CppObject *)eventCampaignEnt->fields.entryCondMessage,
                (Il2CppObject *)StringLiteral_23445,
                0LL);
        EndTime = EventEntity__GetEndTime(eventEnt, 0, 0LL);
        v32 = (QuestBoardInformaionText_o *)sub_B170CC(QuestBoardInformaionText_TypeInfo, v66, v67, v68, v69);
        v115.fields.r = 0.0;
        v115.fields.g = 0.0;
        v115.fields.b = 0.0;
        v115.fields.a = 0.0;
        v113.fields.x = 0.0;
        v113.fields.y = 0.0;
        v113.fields.z = 0.0;
        QuestBoardInformaionText___ctor(v32, v64, EndTime, 0, 0, v115, -1, 0, v113, 0, v109, 0LL, v110);
        return v32;
      }
      return 0LL;
    }
    if ( target == 28 )
    {
      ContinueItemInfoList = UserOwnItemDetail__GetContinueItemInfoList(0LL);
      v45 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                       System_Predicate_UserOwnItemInfo__TypeInfo,
                                                                       v41,
                                                                       v42,
                                                                       v43,
                                                                       v44);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v45,
        (Il2CppObject *)v30,
        Method_QuestBoardListViewItemDraw___c__DisplayClass337_0__CreateQuestBoardInformationText_b__0__,
        (const MethodInfo_2B0B204 *)Method_System_Predicate_UserOwnItemInfo___ctor__);
      if ( ContinueItemInfoList )
      {
        v46 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)ContinueItemInfoList,
                (System_Predicate_T__o *)v45,
                (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_UserOwnItemInfo__Find__);
        if ( v46 )
        {
          v47 = (UserOwnItemInfo_o *)v46;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v48 = LocalizationManager__Get((System_String_o *)StringLiteral_13350, 0LL);
          Num_k__BackingField = v47->fields._Num_k__BackingField;
          v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Num_k__BackingField);
          v50 = System_String__Format_43739268(v48, v49, (Il2CppObject *)StringLiteral_23445, 0LL);
          EventName = EventEntity__getEventName(eventEnt, 0LL);
          ImageId = UserOwnItemInfo__get_ImageId(v47, 0LL);
          dispTextExtend = (TerminalBoardOptionTextData_o *)sub_B170CC(
                                                              TerminalBoardOptionTextData_TypeInfo,
                                                              v53,
                                                              v54,
                                                              v55,
                                                              v56);
          TerminalBoardOptionTextData___ctor(dispTextExtend, EventName, v50, ImageId, 0LL);
          v58 = EventEntity__GetEndTime(eventEnt, 0, 0LL);
          v32 = (QuestBoardInformaionText_o *)sub_B170CC(QuestBoardInformaionText_TypeInfo, v59, v60, v61, v62);
          v114.fields.r = 0.0;
          v114.fields.g = 0.0;
          v114.fields.b = 0.0;
          v114.fields.a = 0.0;
          v112.fields.x = 0.0;
          v112.fields.y = 0.0;
          v112.fields.z = 0.0;
          QuestBoardInformaionText___ctor(v32, v50, v58, 1, 0, v114, -1, 0, v112, 0, v109, dispTextExtend, v110);
          return v32;
        }
        return 0LL;
      }
LABEL_61:
      sub_B170D4();
    }
    if ( target == 25 && !isQuestNoneCleared )
      return 0LL;
    if ( target > 24 )
    {
      if ( target == 26 )
      {
        mInfoTextList = this->fields.mInfoTextList;
        detail = eventEnt->fields.detail;
        v93 = EventEntity__GetEndTime(eventEnt, 0, 0LL);
        checkTime = v30->fields.checkTime;
        v95 = v93;
        v100 = (QuestBoardInformaionText_o *)sub_B170CC(QuestBoardInformaionText_TypeInfo, v96, v97, v98, v99);
        QuestBoardInformaionText___ctor_29477548(v100, eventEnt, detail, v95, checkTime, eventCampaignEnt, v101);
        if ( !mInfoTextList )
          goto LABEL_61;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mInfoTextList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v100,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
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
              (QuestBoardListViewItemDraw_o *)isRelease,
              questEntity,
              phase,
              v39) )
        return 0LL;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v70 = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( !questEntity || !v70 )
        goto LABEL_61;
      Entity = QuestPhaseMaster__GetEntity(v70, questEntity->fields.id, phase, 0LL);
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
    v74 = LocalizationManager__Get((System_String_o *)StringLiteral_13349, 0LL);
    v75 = (Il2CppObject *)EventEntity__getEventName(eventEnt, 0LL);
    v76 = System_String__Format_43739268(v74, v75, (Il2CppObject *)StringLiteral_23445, 0LL);
    v77 = EventEntity__GetEndTime(eventEnt, 0, 0LL);
    v82 = (QuestBoardInformaionText_o *)sub_B170CC(QuestBoardInformaionText_TypeInfo, v78, v79, v80, v81);
    v32 = v82;
    v83 = 0;
    v84 = 0;
    v85 = 0;
    v86 = 0;
    v87 = 0;
    v88 = 0;
    v89 = 0;
    QuestBoardInformaionText___ctor(
      v82,
      v76,
      v77,
      1,
      0,
      *(UnityEngine_Color_o *)&v83,
      -1,
      0,
      *(UnityEngine_Vector3_o *)&v87,
      0,
      v109,
      0LL,
      v110);
    return v32;
  }
  sub_B173C8(manager);
  QuestBoardListViewItemDraw__CalcQuestCost(v102, v103, v104, v105, v106, v107, v108);
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
  BoardMessageEntity_o *result; // x0

  if ( !boardMessageData )
    goto LABEL_10;
  max_length = boardMessageData->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0LL;
    while ( 1 )
    {
      result = boardMessageData->m_Items[v5];
      if ( !result )
        break;
      if ( result->fields.referenceType == 4 && result->fields.referenceId == eventId )
        return result;
      if ( (int)++v5 >= max_length )
        return 0LL;
    }
LABEL_10:
    sub_B170D4();
  }
  return 0LL;
}


System_String_o *__fastcall QuestBoardListViewItemDraw__GetAdvanceNoticeText(
        QuestBoardListViewItemDraw_o *this,
        MapControl_QuestInfo_o *questInfo,
        QuestEntity_o *questEnt,
        const MethodInfo *method)
{
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  System_String_o *age; // x19
  Il2CppObject *PrioredName; // x0
  QuestTree_o *v23; // x0
  int32_t WarID_ByQuestID; // w20
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  int64_t OpenedAt; // x20
  __int64 v27; // x2
  System_Object_array *v28; // x20
  __int64 v29; // x0
  __int64 v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x21
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x21
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x21
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **v55; // x21
  int32_t Minute; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t Hour; // [xsp+8h] [xbp-48h] BYREF
  int32_t Day; // [xsp+Ch] [xbp-44h] BYREF
  int64_t questReleaseValue; // [xsp+10h] [xbp-40h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-38h] BYREF
  WarEntity_o *v62; // [xsp+20h] [xbp-30h] BYREF
  WarEntity_o *entity; // [xsp+28h] [xbp-28h] BYREF
  System_DateTime_o v64; // 0:x0.8
  System_DateTime_o v65; // 0:x0.8
  System_DateTime_o v66; // 0:x0.8
  System_DateTime_o v67; // 0:x0.8

  if ( (byte_40FC6F6 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ClosedMessageMaster___, questInfo);
    sub_B16FFC(&Method_DataManager_GetMaster_WarMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__, v8);
    sub_B16FFC(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v9);
    sub_B16FFC(&int_TypeInfo, v10);
    sub_B16FFC(&long_TypeInfo, v11);
    sub_B16FFC(&NetworkManager_TypeInfo, v12);
    sub_B16FFC(&object___TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B16FFC(&Method_SingletonTemplate_QuestTree__get_Instance__, v15);
    sub_B16FFC(&SingletonTemplate_QuestTree__TypeInfo, v16);
    sub_B16FFC(&StringLiteral_1, v17);
    byte_40FC6F6 = 1;
  }
  v62 = 0LL;
  entity = 0LL;
  dateData = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ClosedMessageMaster___);
  if ( !questInfo || !MasterData_WarQuestSelectionMaster )
    goto LABEL_43;
  age = (System_String_o *)StringLiteral_1;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         questInfo->fields.questReleaseClosedID,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__) )
  {
    if ( entity )
    {
      age = entity->fields.age;
      goto LABEL_9;
    }
LABEL_43:
    sub_B170D4();
  }
LABEL_9:
  switch ( questInfo->fields.questReleaseType )
  {
    case 1:
      if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
      }
      v23 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !v23 )
        goto LABEL_43;
      WarID_ByQuestID = QuestTree__GetWarID_ByQuestID(v23, questInfo->fields.questReleaseTargetID, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_43;
      if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              Master_WarQuestSelectionMaster,
              &v62,
              WarID_ByQuestID,
              (const MethodInfo_266F3E4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
        return age;
      if ( !v62 )
        goto LABEL_43;
      PrioredName = (Il2CppObject *)WarEntity__GetPrioredName(v62, 0LL);
      return System_String__Format(age, PrioredName, 0LL);
    case 6:
    case 7:
    case 9:
      questReleaseValue = questInfo->fields.questReleaseValue;
      PrioredName = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &questReleaseValue);
      return System_String__Format(age, PrioredName, 0LL);
    case 0xC:
      if ( !questEnt )
        goto LABEL_43;
      OpenedAt = QuestEntity__getOpenedAt(questEnt, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      dateData = NetworkManager__getServerDateTime_23685560(OpenedAt, 0LL).fields.dateData;
      v28 = (System_Object_array *)sub_B17014(object___TypeInfo, 4LL, v27);
      v64.fields.dateData = (uint64_t)&dateData;
      LODWORD(questReleaseValue) = System_DateTime__get_Month(v64, 0LL);
      v29 = j_il2cpp_value_box_0(int_TypeInfo, &questReleaseValue);
      if ( !v28 )
        goto LABEL_43;
      v37 = (System_Int32_array **)v29;
      if ( v29 )
      {
        v29 = sub_B170BC(v29, v28->obj.klass->_1.element_class);
        if ( !v29 )
          goto LABEL_45;
      }
      if ( !v28->max_length )
        goto LABEL_44;
      v28->m_Items[0] = (Il2CppObject *)v37;
      sub_B16F98((BattleServantConfConponent_o *)v28->m_Items, v37, v31, v32, v33, v34, v35, v36);
      v65.fields.dateData = (uint64_t)&dateData;
      Day = System_DateTime__get_Day(v65, 0LL);
      v29 = j_il2cpp_value_box_0(int_TypeInfo, &Day);
      v43 = (System_Int32_array **)v29;
      if ( v29 )
      {
        v29 = sub_B170BC(v29, v28->obj.klass->_1.element_class);
        if ( !v29 )
          goto LABEL_45;
      }
      if ( v28->max_length <= 1 )
        goto LABEL_44;
      v28->m_Items[1] = (Il2CppObject *)v43;
      sub_B16F98((BattleServantConfConponent_o *)&v28->m_Items[1], v43, v31, v38, v39, v40, v41, v42);
      v66.fields.dateData = (uint64_t)&dateData;
      Hour = System_DateTime__get_Hour(v66, 0LL);
      v29 = j_il2cpp_value_box_0(int_TypeInfo, &Hour);
      v49 = (System_Int32_array **)v29;
      if ( v29 )
      {
        v29 = sub_B170BC(v29, v28->obj.klass->_1.element_class);
        if ( !v29 )
          goto LABEL_45;
      }
      if ( v28->max_length <= 2 )
        goto LABEL_44;
      v28->m_Items[2] = (Il2CppObject *)v49;
      sub_B16F98((BattleServantConfConponent_o *)&v28->m_Items[2], v49, v31, v44, v45, v46, v47, v48);
      v67.fields.dateData = (uint64_t)&dateData;
      Minute = System_DateTime__get_Minute(v67, 0LL);
      v29 = j_il2cpp_value_box_0(int_TypeInfo, &Minute);
      v55 = (System_Int32_array **)v29;
      if ( v29 )
      {
        v29 = sub_B170BC(v29, v28->obj.klass->_1.element_class);
        if ( !v29 )
        {
LABEL_45:
          sub_B170F4(v29);
          sub_B170A0();
        }
      }
      if ( v28->max_length <= 3 )
      {
LABEL_44:
        sub_B17100(v29, v30, v31);
        sub_B170A0();
      }
      v28->m_Items[3] = (Il2CppObject *)v55;
      sub_B16F98((BattleServantConfConponent_o *)&v28->m_Items[3], v55, v31, v50, v51, v52, v53, v54);
      return System_String__Format_43822456(age, v28, 0LL);
    default:
      return age;
  }
}


System_String_o *__fastcall QuestBoardListViewItemDraw__GetApSpriteFileName(int32_t bannerId, const MethodInfo *method)
{
  QuestBoardListViewItemDraw_c *v2; // x0
  System_String_o *QUEST_BOARD_AP_SPNAME_PREFIX; // x19
  System_String_o *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-4h] BYREF

  v6 = bannerId;
  if ( (byte_40FC71E & 1) == 0 )
  {
    sub_B16FFC(&QuestBoardListViewItemDraw_TypeInfo, method);
    byte_40FC71E = 1;
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
  return System_String__Concat_43743732(QUEST_BOARD_AP_SPNAME_PREFIX, v4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestBoardInformaionText__o *__fastcall QuestBoardListViewItemDraw__GetCampaignText(
        QuestBoardListViewItemDraw_o *this,
        int32_t questId,
        int32_t phase,
        bool isQuestNoneCleared,
        int32_t *costCalcVal,
        int32_t *fixedVal,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x19
  bool v27; // w25
  const MethodInfo *v28; // x6
  System_Collections_Generic_IEnumerable_T__o *CampaignTextListByEventQuestMaster; // x0
  const MethodInfo *v30; // x6
  System_Collections_Generic_IEnumerable_T__o *CampaignTextListByWarGroupMaster; // x0
  QuestReleaseOverwriteMaster_o *Master_WarQuestSelectionMaster; // x0
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  int64_t *manager; // x8
  __int64 v35; // x10
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  QuestReleaseOverwriteEntity_o *v37; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *v38; // x0
  int64_t endedAt; // x20
  System_String_o *EventName; // x21
  System_String_o *v41; // x0
  System_String_o *v42; // x21
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  QuestBoardInformaionText_o *v47; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v48; // x22
  QuestBoardListViewItemDraw_o *v50; // x0
  System_Collections_Generic_List_MapControl_QuestInfo__o *v51; // x1
  int32_t v52; // w2
  bool v53; // w3
  const MethodInfo *v54; // x4
  EventCampaignEntity_o *v55; // [xsp+0h] [xbp-60h]
  const MethodInfo *v56; // [xsp+10h] [xbp-50h]
  WarEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v58; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v59; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FC709 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventMaster___, *(_QWORD *)&questId);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___, v13);
    sub_B16FFC(&DataManager_TypeInfo, v14);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__, v18);
    sub_B16FFC(&System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo, v19);
    sub_B16FFC(&LocalizationManager_TypeInfo, v20);
    sub_B16FFC(&QuestBoardInformaionText_TypeInfo, v21);
    sub_B16FFC(&QuestBoardListViewManager_TypeInfo, v22);
    sub_B16FFC(&StringLiteral_23445, v23);
    sub_B16FFC(&StringLiteral_80, v24);
    sub_B16FFC(&StringLiteral_13354, v25);
    byte_40FC709 = 1;
  }
  entity = 0LL;
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo,
                                                                                                  *(_QWORD *)&questId,
                                                                                                  *(_QWORD *)&phase,
                                                                                                  isQuestNoneCleared,
                                                                                                  costCalcVal);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
  v27 = isQuestNoneCleared;
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)QuestBoardListViewItemDraw__GetCampaignTextListByEventQuestMaster(
                                                                                        this,
                                                                                        questId,
                                                                                        phase,
                                                                                        v27,
                                                                                        costCalcVal,
                                                                                        fixedVal,
                                                                                        v28);
  if ( !v26 )
    goto LABEL_27;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v26,
    CampaignTextListByEventQuestMaster,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
  CampaignTextListByWarGroupMaster = (System_Collections_Generic_IEnumerable_T__o *)QuestBoardListViewItemDraw__GetCampaignTextListByWarGroupMaster(
                                                                                      this,
                                                                                      questId,
                                                                                      phase,
                                                                                      v27,
                                                                                      costCalcVal,
                                                                                      fixedVal,
                                                                                      v30);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v26,
    CampaignTextListByWarGroupMaster,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestReleaseOverwriteMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_27;
  manager = (int64_t *)mListViewObject->fields.manager;
  if ( !manager )
    goto LABEL_27;
  v35 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*manager + 300) >= (unsigned int)v35
    && *(QuestBoardListViewManager_c **)(*(_QWORD *)(*manager + 200) + 8 * v35 - 8) == QuestBoardListViewManager_TypeInfo )
  {
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_27;
    EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                               Master_WarQuestSelectionMaster,
                               questId,
                               manager[71],
                               0LL);
    if ( !EntityByQuestIdAndTime )
      return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v26;
    v37 = EntityByQuestIdAndTime;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v38 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !v38 )
      goto LABEL_27;
    if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            v38,
            &entity,
            v37->fields.eventId,
            (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v26;
    if ( entity )
    {
      if ( LODWORD(entity->fields.age) == 25 )
      {
        endedAt = v37->fields.endedAt;
        if ( endedAt <= 0 )
          endedAt = *(_QWORD *)&entity->fields.eventId;
        EventName = EventEntity__getEventName((EventEntity_o *)entity, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v41 = LocalizationManager__Get((System_String_o *)StringLiteral_13354, 0LL);
        v42 = System_String__Concat_43747144(
                EventName,
                (System_String_o *)StringLiteral_80,
                v41,
                (System_String_o *)StringLiteral_23445,
                0LL);
        v47 = (QuestBoardInformaionText_o *)sub_B170CC(QuestBoardInformaionText_TypeInfo, v43, v44, v45, v46);
        v59.fields.r = 0.0;
        v59.fields.g = 0.0;
        v59.fields.b = 0.0;
        v59.fields.a = 0.0;
        v58.fields.x = 0.0;
        v58.fields.y = 0.0;
        v58.fields.z = 0.0;
        v48 = (EventMissionProgressRequest_Argument_ProgressData_o *)v47;
        QuestBoardInformaionText___ctor(v47, v42, endedAt, 0, 0, v59, -1, 0, v58, 1, v55, 0LL, v56);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v26,
          v48,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
      }
      return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v26;
    }
LABEL_27:
    sub_B170D4();
  }
  sub_B173C8(manager);
  return (System_Collections_Generic_List_QuestBoardInformaionText__o *)QuestBoardListViewItemDraw__HasNewQuestInWar(
                                                                          v50,
                                                                          v51,
                                                                          v52,
                                                                          v53,
                                                                          v54);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 *v32; // x22
  WebViewManager_o *Instance; // x0
  DataManager_o *v34; // x20
  EventQuestMaster_o *MasterData_WarQuestSelectionMaster; // x19
  EventCampaignMaster_o *v36; // x28
  DataMasterBase_WarMaster__WarEntity__int__o *v37; // x0
  WarEntity_o *Entity; // x0
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  QuestEntity_o *v40; // x23
  int64_t *manager; // x0
  __int64 v42; // x9
  WebViewManager_o *v43; // x0
  EventCampaignReleaseMaster_o *v44; // x27
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v49; // x19
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v54; // x26
  EventCampaignEntity_o *Data; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  int monitor; // w8
  unsigned int v59; // w22
  EventEntity_o *v60; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v61; // x20
  System_Collections_Generic_List_EventCampaignEntity__o *v62; // x0
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  __int64 v67; // x27
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Int32_array **current; // x1
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v79; // x20
  EventEntity_o *v80; // x0
  const MethodInfo *v81; // x6
  EventMissionProgressRequest_Argument_ProgressData_o *QuestBoardInformationText; // x1
  System_Collections_Generic_List_EventCampaignEntity__o *v83; // x20
  System_Collections_Generic_List_EventCampaignEntity__o *v84; // x0
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x3
  __int64 v88; // x4
  __int64 v89; // x25
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_Int32_array **v96; // x1
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x3
  __int64 v100; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v101; // x20
  QuestBoardListViewItemDraw_o *v102; // x0
  const MethodInfo *v103; // x6
  int v104; // w19
  System_Collections_Generic_List_QuestBoardInformaionText__o *result; // x0
  void *v106; // x0
  int v107; // w1
  __int64 v108; // x19
  System_Collections_Generic_List_EventCampaignEntity__o *campaignList; // [xsp+8h] [xbp-C8h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v110; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_T__o v115; // [xsp+38h] [xbp-98h] BYREF
  int v116[2]; // [xsp+50h] [xbp-80h]
  int v117; // [xsp+58h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v118; // [xsp+60h] [xbp-70h] BYREF

  EnabledEventCampaignForQuest = (System_Collections_Generic_IEnumerable_TSource__o *)(unsigned int)questId;
  if ( (byte_40FC70A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventCampaignMaster___, *(_QWORD *)&questId);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventQuestMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, v11);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v12);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v16);
    sub_B16FFC(&Method_System_Func_EventEntity__bool___ctor__, v17);
    sub_B16FFC(&System_Func_EventEntity__bool__TypeInfo, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__, v23);
    sub_B16FFC(&System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo, v24);
    sub_B16FFC(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v25);
    sub_B16FFC(&QuestBoardListViewManager_TypeInfo, v26);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_B16FFC(
      &Method_QuestBoardListViewItemDraw___c__DisplayClass335_0__GetCampaignTextListByEventQuestMaster_b__0__,
      v28);
    sub_B16FFC(&QuestBoardListViewItemDraw___c__DisplayClass335_0_TypeInfo, v29);
    sub_B16FFC(
      &Method_QuestBoardListViewItemDraw___c__DisplayClass335_1__GetCampaignTextListByEventQuestMaster_b__1__,
      v30);
    sub_B16FFC(&QuestBoardListViewItemDraw___c__DisplayClass335_1_TypeInfo, v31);
    byte_40FC70A = 1;
  }
  memset(&v118, 0, sizeof(v118));
  v117 = 0;
  v110 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo,
                                                                                                   *(_QWORD *)&questId,
                                                                                                   *(_QWORD *)&phase,
                                                                                                   isQuestNoneCleared,
                                                                                                   costCalcVal);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v110,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
  v32 = &Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  v34 = (DataManager_o *)Instance;
  MasterData_WarQuestSelectionMaster = (EventQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventQuestMaster___);
  v36 = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   v34,
                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  v37 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         v34,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !v37 )
    goto LABEL_41;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v37,
             (int32_t)EnabledEventCampaignForQuest,
             (const MethodInfo_266F388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_41;
  v40 = (QuestEntity_o *)Entity;
  manager = (int64_t *)mListViewObject->fields.manager;
  if ( !manager )
    goto LABEL_41;
  v42 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*manager + 300) >= (unsigned int)v42
    && *(QuestBoardListViewManager_c **)(*(_QWORD *)(*manager + 200) + 8 * v42 - 8) == QuestBoardListViewManager_TypeInfo )
  {
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_41;
    EnabledEventCampaignForQuest = (System_Collections_Generic_IEnumerable_TSource__o *)EventQuestMaster__GetEnabledEventCampaignForQuest(
                                                                                          MasterData_WarQuestSelectionMaster,
                                                                                          (int32_t)EnabledEventCampaignForQuest,
                                                                                          phase,
                                                                                          manager[71],
                                                                                          0LL);
    v43 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v43 )
      goto LABEL_41;
    v44 = (EventCampaignReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)v43,
                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
    v49 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                                                                    v45,
                                                                                                    v46,
                                                                                                    v47,
                                                                                                    v48);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v49,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    v54 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                                                                    v50,
                                                                                                    v51,
                                                                                                    v52,
                                                                                                    v53);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v54,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    if ( !EnabledEventCampaignForQuest )
      goto LABEL_41;
    monitor = (int)EnabledEventCampaignForQuest[1].monitor;
    if ( monitor >= 1 )
    {
      v59 = 0;
      while ( 1 )
      {
        if ( v59 >= monitor )
        {
          sub_B17100(Data, v56, v57);
          sub_B170A0();
        }
        v60 = (EventEntity_o *)*((_QWORD *)&EnabledEventCampaignForQuest[2].klass + (int)v59);
        if ( !v60 || !v36 )
          break;
        Data = EventCampaignMaster__getData(v36, v60->fields.id, 0LL);
        if ( Data )
        {
          if ( !v49 )
            break;
          v61 = (EventMissionProgressRequest_Argument_ProgressData_o *)Data;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v49,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Data,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
          if ( !v44 )
            break;
          Data = (EventCampaignEntity_o *)EventCampaignReleaseMaster__isRelease(
                                            v44,
                                            v61->fields.missionTargetId,
                                            v61->fields.missionConditionDetailId,
                                            0LL);
          if ( ((unsigned __int8)Data & 1) != 0 )
          {
            if ( !v54 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v54,
              v61,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
          }
        }
        monitor = (int)EnabledEventCampaignForQuest[1].monitor;
        if ( (int)++v59 >= monitor )
          goto LABEL_24;
      }
LABEL_41:
      sub_B170D4();
    }
LABEL_24:
    v62 = EventCampaignMaster__CheckCampaignGrouping((System_Collections_Generic_List_EventCampaignEntity__o *)v49, 0LL);
    if ( !v62 )
      goto LABEL_41;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v115,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v62,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v36 = (EventCampaignMaster_o *)&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__;
    v32 = &Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___;
    v118 = v115;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v118,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
    {
      v67 = sub_B170CC(QuestBoardListViewItemDraw___c__DisplayClass335_0_TypeInfo, v63, v64, v65, v66);
      QuestBoardListViewItemDraw___c__DisplayClass335_0___ctor(
        (QuestBoardListViewItemDraw___c__DisplayClass335_0_o *)v67,
        0LL);
      if ( !v67 )
        sub_B170D4();
      current = (System_Int32_array **)v118.fields.current;
      *(_QWORD *)(v67 + 16) = v118.fields.current;
      sub_B16F98((BattleServantConfConponent_o *)(v67 + 16), current, v68, v69, v70, v71, v72, v73);
      v79 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                 System_Func_EventEntity__bool__TypeInfo,
                                                                                 v75,
                                                                                 v76,
                                                                                 v77,
                                                                                 v78);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v79,
        (Il2CppObject *)v67,
        Method_QuestBoardListViewItemDraw___c__DisplayClass335_0__GetCampaignTextListByEventQuestMaster_b__0__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_EventEntity__bool___ctor__);
      v80 = (EventEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                               EnabledEventCampaignForQuest,
                               (System_Func_TSource__bool__o *)v79,
                               (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___);
      QuestBoardInformationText = (EventMissionProgressRequest_Argument_ProgressData_o *)QuestBoardListViewItemDraw__CreateQuestBoardInformationText(
                                                                                           this,
                                                                                           v40,
                                                                                           v80,
                                                                                           *(EventCampaignEntity_o **)(v67 + 16),
                                                                                           phase,
                                                                                           isQuestNoneCleared,
                                                                                           v81);
      if ( QuestBoardInformationText )
      {
        if ( !v110 )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v110,
          QuestBoardInformationText,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
      }
    }
    v116[0] = 308;
    v117 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v118,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    v83 = (System_Collections_Generic_List_EventCampaignEntity__o *)v54;
    v117 = 0;
  }
  else
  {
    sub_B173C8(manager);
    v83 = campaignList;
    if ( v107 != 1 )
      _Unwind_Resume(v106);
    v108 = *(_QWORD *)__cxa_begin_catch(v106);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v118,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    if ( v108 )
      sub_B170A0();
  }
  v84 = EventCampaignMaster__CheckCampaignGrouping(v83, 0LL);
  if ( !v84 )
    goto LABEL_41;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v115,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v84,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v118 = v115;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v118,
            (const MethodInfo_2074054 *)v36->klass) )
  {
    v89 = sub_B170CC(QuestBoardListViewItemDraw___c__DisplayClass335_1_TypeInfo, v85, v86, v87, v88);
    QuestBoardListViewItemDraw___c__DisplayClass335_1___ctor(
      (QuestBoardListViewItemDraw___c__DisplayClass335_1_o *)v89,
      0LL);
    if ( !v89 )
      sub_B170D4();
    v96 = (System_Int32_array **)v118.fields.current;
    *(_QWORD *)(v89 + 16) = v118.fields.current;
    sub_B16F98((BattleServantConfConponent_o *)(v89 + 16), v96, v90, v91, v92, v93, v94, v95);
    v101 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                System_Func_EventEntity__bool__TypeInfo,
                                                                                v97,
                                                                                v98,
                                                                                v99,
                                                                                v100);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v101,
      (Il2CppObject *)v89,
      Method_QuestBoardListViewItemDraw___c__DisplayClass335_1__GetCampaignTextListByEventQuestMaster_b__1__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_EventEntity__bool___ctor__);
    v102 = (QuestBoardListViewItemDraw_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                             EnabledEventCampaignForQuest,
                                             (System_Func_TSource__bool__o *)v101,
                                             (const MethodInfo_18D8450 *)*v32);
    QuestBoardListViewItemDraw__CalcQuestCost(
      v102,
      v40,
      *(EventCampaignEntity_o **)(v89 + 16),
      isQuestNoneCleared,
      costCalcVal,
      fixedVal,
      v103);
  }
  v116[0] = 414;
  v104 = ++v117;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v118,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  result = (System_Collections_Generic_List_QuestBoardInformaionText__o *)v110;
  if ( v104 && v116[v104 - 1] == 414 )
    v117 = v104 - 1;
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestBoardInformaionText__o *__fastcall QuestBoardListViewItemDraw__GetCampaignTextListByWarGroupMaster(
        QuestBoardListViewItemDraw_o *this,
        int32_t questId,
        int32_t phase,
        bool isQuestNoneCleared,
        int32_t *costCalcVal,
        int32_t *fixedVal,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x23
  WebViewManager_o *Instance; // x0
  DataManager_o *v21; // x20
  EventMaster_o *MasterData_WarQuestSelectionMaster; // x19
  EventCampaignMaster_o *v23; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v24; // x0
  WarEntity_o *v25; // x0
  QuestEntity_o *v26; // x26
  EventEntity_array *EnableEntityList; // x0
  EventEntity_array *v28; // x27
  int32_t spotId; // w19
  WebViewManager_o *v30; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v31; // x0
  EventCampaignEntity_o *Data; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  int32_t v35; // w28
  int max_length; // w8
  unsigned int v37; // w22
  bool v38; // w25
  EventEntity_o *v39; // x19
  struct System_Int32_array *targetIds; // x8
  EventCampaignEntity_o *v41; // x20
  WebViewManager_o *v42; // x0
  WarGroupMaster_o *v43; // x0
  const MethodInfo *v44; // x6
  QuestBoardInformaionText_o *QuestBoardInformationText; // x19
  const MethodInfo *v46; // x6
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_40FC70B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventCampaignMaster___, *(_QWORD *)&questId);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_SpotMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_WarGroupMaster___, v12);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v13);
    sub_B16FFC(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__, v16);
    sub_B16FFC(&System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_40FC70B = 1;
  }
  entity = 0LL;
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo,
                                                                                                  *(_QWORD *)&questId,
                                                                                                  *(_QWORD *)&phase,
                                                                                                  isQuestNoneCleared,
                                                                                                  costCalcVal);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  v21 = (DataManager_o *)Instance;
  MasterData_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
  v23 = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   v21,
                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  v24 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         v21,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !v24 )
    goto LABEL_29;
  v25 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v24,
          questId,
          (const MethodInfo_266F388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_29;
  v26 = (QuestEntity_o *)v25;
  EnableEntityList = EventMaster__GetEnableEntityList(MasterData_WarQuestSelectionMaster, 7, 1, 0LL);
  if ( !v26 )
    goto LABEL_29;
  v28 = EnableEntityList;
  spotId = v26->fields.spotId;
  v30 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v30 )
    goto LABEL_29;
  v31 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v30,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !v31 )
    goto LABEL_29;
  Data = (EventCampaignEntity_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                    v31,
                                    &entity,
                                    spotId,
                                    (const MethodInfo_266F3E4 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Data & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_29;
    v35 = *(&entity->fields.id + 1);
    if ( v35 )
    {
      if ( !v28 )
        goto LABEL_29;
      max_length = v28->max_length;
      if ( max_length >= 1 )
      {
        v37 = 0;
        v38 = isQuestNoneCleared;
        while ( 1 )
        {
          if ( v37 >= max_length )
          {
            sub_B17100(Data, v33, v34);
            sub_B170A0();
          }
          v39 = v28->m_Items[v37];
          if ( !v39 || !v23 )
            break;
          Data = EventCampaignMaster__getData(v23, v39->fields.id, 0LL);
          if ( Data )
          {
            targetIds = Data->fields.targetIds;
            v41 = Data;
            if ( !targetIds )
              break;
            if ( *(_QWORD *)&targetIds->max_length )
            {
              v42 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !v42 )
                break;
              v43 = (WarGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)v42,
                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarGroupMaster___);
              if ( !v43 )
                break;
              Data = (EventCampaignEntity_o *)WarGroupMaster__HasEntity(
                                                v43,
                                                v35,
                                                v26->fields.afterClear,
                                                v26->fields.type,
                                                v41->fields.targetIds,
                                                0LL);
              if ( ((unsigned __int8)Data & 1) != 0 )
              {
                QuestBoardInformationText = QuestBoardListViewItemDraw__CreateQuestBoardInformationText(
                                              this,
                                              v26,
                                              v39,
                                              v41,
                                              phase,
                                              v38,
                                              v44);
                QuestBoardListViewItemDraw__CalcQuestCost(
                  (QuestBoardListViewItemDraw_o *)QuestBoardInformationText,
                  v26,
                  v41,
                  v38,
                  costCalcVal,
                  fixedVal,
                  v46);
                if ( QuestBoardInformationText )
                {
                  if ( !v19 )
                    break;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v19,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)QuestBoardInformationText,
                    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
                }
              }
            }
          }
          max_length = v28->max_length;
          if ( (int)++v37 >= max_length )
            return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v19;
        }
LABEL_29:
        sub_B170D4();
      }
    }
  }
  return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v19;
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
  System_String_o *QuestName; // x0
  System_String_o *v10; // x20
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  int32_t ServantId; // w0
  ServantEntity_o *Entity; // x0
  Il2CppObject *BattleName; // x1

  if ( (byte_40FC6F2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, questEnt);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B16FFC(&StringLiteral_23445, v8);
    byte_40FC6F2 = 1;
  }
  if ( !questEnt )
    goto LABEL_13;
  QuestName = QuestEntity__getQuestName(questEnt, 0LL);
  v10 = QuestName;
  if ( (unsigned int)questType <= 5 && ((1 << questType) & 0x2C) != 0 )
  {
    if ( !QuestName )
      goto LABEL_13;
    if ( System_String__Contains(QuestName, (System_String_o *)StringLiteral_23445, 0LL) )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
        ServantId = QuestEntity__getServantId(questEnt, 0LL);
        if ( MasterData_WarQuestSelectionMaster )
        {
          Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        MasterData_WarQuestSelectionMaster,
                                        ServantId,
                                        (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( Entity )
          {
            BattleName = (Il2CppObject *)ServantEntity__getBattleName(Entity, 0, -1, 0LL);
            return System_String__Format(v10, BattleName, 0LL);
          }
        }
      }
LABEL_13:
      sub_B170D4();
    }
  }
  return v10;
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
  EventAddMaster_o *Master_WarQuestSelectionMaster; // x0
  int32_t v14; // w2
  __int64 v15; // x21
  EventAddEntity_o *OverwriteEventAddEntity; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v17; // x0
  WarEntity_o *Entity; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x0
  WarEntity_o *v20; // x0
  QuestBoardListViewItemDraw_c *v21; // x8
  System_String_o *EVENT_WAR_SUBFOLDER_SPNAME_PREFIX; // x20
  Il2CppObject *v23; // x0
  QuestBoardListViewItemDraw_c *v25; // x0
  System_String_o *EVENT_WAR_SPNAME_PREFIX; // x19
  System_String_o *v27; // x0
  int32_t v28; // [xsp+8h] [xbp-28h] BYREF
  int32_t overwriteId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FC6FA & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventAddMaster___, eventEnt);
    sub_B16FFC(&Method_DataManager_GetMaster_WarMaster___, v8);
    sub_B16FFC(&DataManager_TypeInfo, v9);
    sub_B16FFC(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v10);
    sub_B16FFC(&int_TypeInfo, v11);
    sub_B16FFC(&QuestBoardListViewItemDraw_TypeInfo, v12);
    byte_40FC6FA = 1;
  }
  overwriteId = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventAddMaster___);
  if ( !eventEnt || !Master_WarQuestSelectionMaster )
    goto LABEL_37;
  if ( isActiveEventWar )
    v14 = 4;
  else
    v14 = 5;
  if ( isActiveEventWar )
    v15 = 60LL;
  else
    v15 = 56LL;
  OverwriteEventAddEntity = EventAddMaster__getOverwriteEventAddEntity(
                              Master_WarQuestSelectionMaster,
                              eventEnt->fields.id,
                              v14,
                              0LL);
  overwriteId = *(_DWORD *)((char *)&eventEnt->klass + v15);
  if ( OverwriteEventAddEntity )
    overwriteId = OverwriteEventAddEntity->fields.overwriteId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v17 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !v17 )
    goto LABEL_37;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v17,
             warId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( Entity
    && Entity->fields.parentWarId
    && Entity->fields.eventId == eventEnt->fields.id
    && WarEntity__HasFlag(Entity, 0x80000, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarMaster___);
    if ( v19 )
    {
      v20 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              v19,
              warId,
              (const MethodInfo_266F388 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
      if ( v20 )
      {
        overwriteId = WarEntity__GetPrioredBannerId(v20, 0LL);
        v21 = QuestBoardListViewItemDraw_TypeInfo;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v21 = QuestBoardListViewItemDraw_TypeInfo;
        }
        EVENT_WAR_SUBFOLDER_SPNAME_PREFIX = v21->static_fields->EVENT_WAR_SUBFOLDER_SPNAME_PREFIX;
        v28 = overwriteId;
        v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
        return System_String__Format(EVENT_WAR_SUBFOLDER_SPNAME_PREFIX, v23, 0LL);
      }
    }
LABEL_37:
    sub_B170D4();
  }
  v25 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v25 = QuestBoardListViewItemDraw_TypeInfo;
  }
  EVENT_WAR_SPNAME_PREFIX = v25->static_fields->EVENT_WAR_SPNAME_PREFIX;
  v27 = System_Int32__ToString((int32_t)&overwriteId, 0LL);
  return System_String__Concat_43743732(EVENT_WAR_SPNAME_PREFIX, v27, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestBoardListViewItemDraw__GetFaceMaskSpriteName(
        QuestBoardListViewItemDraw_o *this,
        int32_t questType,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_String_o **p_QUEST_MAIN_FACE_MASK_SPNAME; // x8
  QuestBoardListViewItemDraw_c *v6; // x0
  QuestBoardListViewItemDraw_c *v7; // x0
  QuestBoardListViewItemDraw_c *v8; // x0

  if ( (byte_40FC6F1 & 1) == 0 )
  {
    sub_B16FFC(&QuestBoardListViewItemDraw_TypeInfo, *(_QWORD *)&questType);
    sub_B16FFC(&StringLiteral_1, v4);
    byte_40FC6F1 = 1;
  }
  p_QUEST_MAIN_FACE_MASK_SPNAME = (System_String_o **)&StringLiteral_1;
  switch ( questType )
  {
    case 1:
      v7 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v7 = QuestBoardListViewItemDraw_TypeInfo;
      }
      p_QUEST_MAIN_FACE_MASK_SPNAME = &v7->static_fields->QUEST_MAIN_FACE_MASK_SPNAME;
      break;
    case 2:
    case 5:
      v6 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v6 = QuestBoardListViewItemDraw_TypeInfo;
      }
      p_QUEST_MAIN_FACE_MASK_SPNAME = &v6->static_fields->QUEST_EVENT_FACE_MASK_SPNAME;
      break;
    case 3:
      v8 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v8 = QuestBoardListViewItemDraw_TypeInfo;
      }
      p_QUEST_MAIN_FACE_MASK_SPNAME = &v8->static_fields->QUEST_STORY_FACE_MASK_SPNAME;
      break;
    default:
      return *p_QUEST_MAIN_FACE_MASK_SPNAME;
  }
  return *p_QUEST_MAIN_FACE_MASK_SPNAME;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestBoardListViewItemDraw__GetPhaseArrowIntervalSize(
        QuestBoardListViewItemDraw_o *this,
        int32_t phaseType,
        bool isRepeatLast,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw_c *v6; // x0
  QuestBoardListViewItemDraw_c *v8; // x0

  if ( (byte_40FC707 & 1) == 0 )
  {
    sub_B16FFC(&QuestBoardListViewItemDraw_TypeInfo, *(_QWORD *)&phaseType);
    byte_40FC707 = 1;
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
  QuestBoardListViewItemDraw_c *v17; // x0
  QuestBoardListViewItemDraw_c *v18; // x0

  if ( (byte_40FC706 & 1) == 0 )
  {
    sub_B16FFC(&QuestBoardListViewItemDraw_TypeInfo, *(_QWORD *)&phaseType);
    sub_B16FFC(&StringLiteral_1, v12);
    byte_40FC706 = 1;
  }
  if ( isLastIndex && isRepeatFirst )
  {
    v13 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v13 = QuestBoardListViewItemDraw_TypeInfo;
    }
    p_msPhaseSprName_LoopFirstOff = &v13->static_fields->msPhaseSprName_LoopFirstOff;
  }
  else if ( isRepeatLast )
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
      p_msPhaseSprName_LoopFirstOff = &v16->static_fields->msPhaseSprName_LoopOn;
    }
    else
    {
      if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v16 = QuestBoardListViewItemDraw_TypeInfo;
      }
      p_msPhaseSprName_LoopFirstOff = &v16->static_fields->msPhaseSprName_LoopOff;
    }
  }
  else if ( phaseType == 1 )
  {
    v18 = QuestBoardListViewItemDraw_TypeInfo;
    if ( isOn )
    {
      if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v18 = QuestBoardListViewItemDraw_TypeInfo;
      }
      p_msPhaseSprName_LoopFirstOff = &v18->static_fields->msPhaseSprName_ExArrowOn;
    }
    else
    {
      if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v18 = QuestBoardListViewItemDraw_TypeInfo;
      }
      p_msPhaseSprName_LoopFirstOff = &v18->static_fields->msPhaseSprName_ExArrowOff;
    }
  }
  else if ( phaseType )
  {
    p_msPhaseSprName_LoopFirstOff = (System_String_o **)&StringLiteral_1;
  }
  else
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
      p_msPhaseSprName_LoopFirstOff = &v17->static_fields->msPhaseSprName_ArrowOn;
    }
    else
    {
      if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v17 = QuestBoardListViewItemDraw_TypeInfo;
      }
      p_msPhaseSprName_LoopFirstOff = &v17->static_fields->msPhaseSprName_ArrowOff;
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t v9; // w19
  int32_t iconId; // t1
  QuestBoardListViewItemDraw_c *v11; // x0
  System_String_o *QUEST_BOARD_ICON_SPNAME_PREFIX; // x20
  System_String_o *v13; // x1
  __int64 *v15; // x8

  if ( (byte_40FC6F3 & 1) == 0 )
  {
    sub_B16FFC(&QuestBoardListViewItemDraw_TypeInfo, questEnt);
    sub_B16FFC(&StringLiteral_19519, v6);
    sub_B16FFC(&StringLiteral_19518, v7);
    sub_B16FFC(&StringLiteral_1, v8);
    byte_40FC6F3 = 1;
  }
  if ( !questEnt )
    sub_B170D4();
  iconId = questEnt->fields.iconId;
  v9 = (_DWORD)questEnt + 68;
  if ( iconId < 1 )
  {
    if ( questType == 5 )
    {
      v15 = &StringLiteral_19518;
    }
    else if ( questType == 2 )
    {
      v15 = &StringLiteral_19519;
    }
    else
    {
      v15 = (__int64 *)&StringLiteral_1;
    }
    return (System_String_o *)*v15;
  }
  else
  {
    v11 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v11 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_ICON_SPNAME_PREFIX = v11->static_fields->QUEST_BOARD_ICON_SPNAME_PREFIX;
    v13 = System_Int32__ToString(v9, 0LL);
    return System_String__Concat_43743732(QUEST_BOARD_ICON_SPNAME_PREFIX, v13, 0LL);
  }
}


System_String_o *__fastcall QuestBoardListViewItemDraw__GetQuestIconNameForMainType(
        QuestBoardListViewItemDraw_o *this,
        QuestEntity_o *questEnt,
        const MethodInfo *method)
{
  __int64 v4; // x1
  QuestBoardListViewItemDraw_c *v5; // x0
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  int32_t v7; // w0
  System_String_o *QUEST_BOARD_ICON_SPNAME_PREFIX; // x19
  System_String_o *v9; // x0
  int32_t chapterId; // w9
  System_String_o *CHAPTER_SP_BASE_NAME; // x19
  Il2CppObject *v13; // x0
  int32_t v14; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FC6F4 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, questEnt);
    sub_B16FFC(&QuestBoardListViewItemDraw_TypeInfo, v4);
    byte_40FC6F4 = 1;
  }
  if ( !questEnt )
    sub_B170D4();
  v5 = QuestBoardListViewItemDraw_TypeInfo;
  if ( questEnt->fields.iconId < 1 )
  {
    if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v5 = QuestBoardListViewItemDraw_TypeInfo;
    }
    chapterId = questEnt->fields.chapterId;
    CHAPTER_SP_BASE_NAME = v5->static_fields->CHAPTER_SP_BASE_NAME;
    v14 = chapterId;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
    return System_String__Format(CHAPTER_SP_BASE_NAME, v13, 0LL);
  }
  else
  {
    if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v5 = QuestBoardListViewItemDraw_TypeInfo;
    }
    static_fields = v5->static_fields;
    v7 = (_DWORD)questEnt + 68;
    QUEST_BOARD_ICON_SPNAME_PREFIX = static_fields->QUEST_BOARD_ICON_SPNAME_PREFIX;
    v9 = System_Int32__ToString(v7, 0LL);
    return System_String__Concat_43743732(QUEST_BOARD_ICON_SPNAME_PREFIX, v9, 0LL);
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
    return QuestEntity__getRecommendLv_23921272(questEnt, questPhase, 0LL);
  else
    return 0LL;
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
    sub_B170D4();
  if ( status - 1 >= mStatusSp->max_length )
  {
    sub_B17100(this, *(_QWORD *)&status, method);
    sub_B170A0();
  }
  return mStatusSp->m_Items[status - 1];
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v11; // x1
  QuestBoardListViewItemDraw___c__DisplayClass298_0_o *v12; // x22
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v17; // x20

  if ( (byte_40FC6EA & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_MapControl_QuestInfo___, questList);
    sub_B16FFC(&Method_System_Func_MapControl_QuestInfo__bool___ctor__, v8);
    sub_B16FFC(&System_Func_MapControl_QuestInfo__bool__TypeInfo, v9);
    sub_B16FFC(&Method_QuestBoardListViewItemDraw___c__DisplayClass298_0__HasNewQuestInWar_b__0__, v10);
    sub_B16FFC(&QuestBoardListViewItemDraw___c__DisplayClass298_0_TypeInfo, v11);
    byte_40FC6EA = 1;
  }
  v12 = (QuestBoardListViewItemDraw___c__DisplayClass298_0_o *)sub_B170CC(
                                                                 QuestBoardListViewItemDraw___c__DisplayClass298_0_TypeInfo,
                                                                 questList,
                                                                 *(_QWORD *)&warId,
                                                                 isMainInterlude,
                                                                 method);
  QuestBoardListViewItemDraw___c__DisplayClass298_0___ctor(v12, 0LL);
  if ( !v12 )
    sub_B170D4();
  v12->fields.warId = warId;
  v12->fields.isMainInterlude = isMainInterlude;
  v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_MapControl_QuestInfo__bool__TypeInfo,
                                                                             v13,
                                                                             v14,
                                                                             v15,
                                                                             v16);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v17,
    (Il2CppObject *)v12,
    Method_QuestBoardListViewItemDraw___c__DisplayClass298_0__HasNewQuestInWar_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_MapControl_QuestInfo__bool___ctor__);
  return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
           (System_Collections_Generic_List_T__o *)questList,
           (System_Func_T__bool__o *)v17,
           (const MethodInfo_18B5FC8 *)Method_BasicHelper_Any_MapControl_QuestInfo___);
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
  UnityEngine_Component_o *v12; // x0
  UnityEngine_Transform_o *v13; // x0
  UnityEngine_Component_o *v14; // x0
  UnityEngine_Transform_o *v15; // x0
  struct QuestBoardListViewItemDraw_StaticFields *v16; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Transform_o *transform; // x20
  QuestBoardListViewItemDraw_c *v21; // x8
  UnityEngine_Component_o *mPhaseStrSp; // x0
  UnityEngine_Transform_o *v23; // x0
  UnityEngine_Component_o *v24; // x0
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  UnityEngine_Transform_o *v26; // x20
  QuestBoardListViewItemDraw_c *v27; // x8
  UnityEngine_Component_o *v28; // x0
  UnityEngine_Transform_o *v29; // x0
  UnityEngine_Component_o *v30; // x0
  struct QuestBoardListViewItemDraw_StaticFields *v31; // x8
  UnityEngine_Component_o *v32; // x0
  UnityEngine_Transform_o *v33; // x0
  UnityEngine_Component_o *v34; // x0
  struct QuestBoardListViewItemDraw_StaticFields *v35; // x8

  if ( (byte_40FC705 & 1) == 0 )
  {
    sub_B16FFC(&QuestBoardListViewItemDraw_TypeInfo, isDoubleItemConsume);
    byte_40FC705 = 1;
  }
  mPhaseObj = this->fields.mPhaseObj;
  if ( !isDoubleItemConsumeQp )
  {
    if ( isDoubleItemConsume )
    {
      if ( mPhaseObj )
      {
        transform = UnityEngine_GameObject__get_transform(mPhaseObj, 0LL);
        v21 = QuestBoardListViewItemDraw_TypeInfo;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v21 = QuestBoardListViewItemDraw_TypeInfo;
        }
        if ( transform )
        {
          UnityEngine_Transform__set_localPosition(transform, v21->static_fields->PHASE_OBJ_POS_DOUBLE, 0LL);
          mPhaseStrSp = (UnityEngine_Component_o *)this->fields.mPhaseStrSp;
          if ( mPhaseStrSp )
          {
            v23 = UnityEngine_Component__get_transform(mPhaseStrSp, 0LL);
            if ( v23 )
            {
              UnityEngine_Transform__set_localPosition(
                v23,
                QuestBoardListViewItemDraw_TypeInfo->static_fields->PHASE_STR_POS_DOUBLE,
                0LL);
              v24 = (UnityEngine_Component_o *)this->fields.mPhaseStrSp;
              if ( v24 )
              {
                v15 = UnityEngine_Component__get_transform(v24, 0LL);
                if ( v15 )
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
      v26 = UnityEngine_GameObject__get_transform(mPhaseObj, 0LL);
      v27 = QuestBoardListViewItemDraw_TypeInfo;
      if ( isTripleItemConsume )
      {
        if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v27 = QuestBoardListViewItemDraw_TypeInfo;
        }
        if ( v26 )
        {
          UnityEngine_Transform__set_localPosition(v26, v27->static_fields->PHASE_OBJ_POS_TRIPLE_ITEM, 0LL);
          v28 = (UnityEngine_Component_o *)this->fields.mPhaseStrSp;
          if ( v28 )
          {
            v29 = UnityEngine_Component__get_transform(v28, 0LL);
            if ( v29 )
            {
              UnityEngine_Transform__set_localPosition(
                v29,
                QuestBoardListViewItemDraw_TypeInfo->static_fields->PHASE_STR_POS_TRIPLE_ITEM,
                0LL);
              v30 = (UnityEngine_Component_o *)this->fields.mPhaseStrSp;
              if ( v30 )
              {
                v15 = UnityEngine_Component__get_transform(v30, 0LL);
                if ( v15 )
                {
                  v31 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
                  x = v31->PHASE_STR_SCL_TRIPLE_ITEM.fields.x;
                  y = v31->PHASE_STR_SCL_TRIPLE_ITEM.fields.y;
                  z = v31->PHASE_STR_SCL_TRIPLE_ITEM.fields.z;
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
          v27 = QuestBoardListViewItemDraw_TypeInfo;
        }
        if ( v26 )
        {
          UnityEngine_Transform__set_localPosition(v26, v27->static_fields->PHASE_OBJ_POS_SINGLE, 0LL);
          v32 = (UnityEngine_Component_o *)this->fields.mPhaseStrSp;
          if ( v32 )
          {
            v33 = UnityEngine_Component__get_transform(v32, 0LL);
            if ( v33 )
            {
              UnityEngine_Transform__set_localPosition(
                v33,
                QuestBoardListViewItemDraw_TypeInfo->static_fields->PHASE_STR_POS_SINGLE,
                0LL);
              v34 = (UnityEngine_Component_o *)this->fields.mPhaseStrSp;
              if ( v34 )
              {
                v15 = UnityEngine_Component__get_transform(v34, 0LL);
                if ( v15 )
                {
                  v35 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
                  x = v35->PHASE_STR_SCL_SINGLE.fields.x;
                  y = v35->PHASE_STR_SCL_SINGLE.fields.y;
                  z = v35->PHASE_STR_SCL_SINGLE.fields.z;
                  goto LABEL_45;
                }
              }
            }
          }
        }
      }
    }
LABEL_46:
    sub_B170D4();
  }
  if ( !mPhaseObj )
    goto LABEL_46;
  v10 = UnityEngine_GameObject__get_transform(mPhaseObj, 0LL);
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
  v12 = (UnityEngine_Component_o *)this->fields.mPhaseStrSp;
  if ( !v12 )
    goto LABEL_46;
  v13 = UnityEngine_Component__get_transform(v12, 0LL);
  if ( !v13 )
    goto LABEL_46;
  UnityEngine_Transform__set_localPosition(
    v13,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->PHASE_STR_POS_DOUBLE_QP,
    0LL);
  v14 = (UnityEngine_Component_o *)this->fields.mPhaseStrSp;
  if ( !v14 )
    goto LABEL_46;
  v15 = UnityEngine_Component__get_transform(v14, 0LL);
  if ( !v15 )
    goto LABEL_46;
  v16 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  x = v16->PHASE_STR_SCL_DOUBLE_QP.fields.x;
  y = v16->PHASE_STR_SCL_DOUBLE_QP.fields.y;
  z = v16->PHASE_STR_SCL_DOUBLE_QP.fields.z;
LABEL_45:
  UnityEngine_Transform__set_localScale(v15, *(UnityEngine_Vector3_o *)&x, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw__IsBanners(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        const MethodInfo *method)
{
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x8
  struct MapControl_AreaBoardInfo_o *AreaBoardInfo_k__BackingField; // x8

  if ( !questBoardItem || (quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField) == 0LL )
    sub_B170D4();
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
  UnityEngine_GameObject_o *gameObject; // x0

  mNextSp = (UnityEngine_Component_o *)this->fields.mNextSp;
  if ( !mNextSp || (gameObject = UnityEngine_Component__get_gameObject(mNextSp, 0LL)) == 0LL )
    sub_B170D4();
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw__IsDisplayRewardNotGive(
        QuestBoardListViewItemDraw_o *this,
        MapControl_QuestInfo_o *questInfo,
        const MethodInfo *method)
{
  __int64 v4; // x1
  int32_t questPhase; // w20
  int32_t PhaseMax; // w0
  int32_t v7; // w20
  QuestBehaviorMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v9; // x4

  if ( (byte_40FC6F9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_QuestBehaviorMaster___, questInfo);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    byte_40FC6F9 = 1;
  }
  if ( !questInfo )
    sub_B170D4();
  questPhase = questInfo->fields.questPhase;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(questInfo, 0LL);
  v7 = UnityEngine_Mathf__Min_40727532(questPhase + 1, PhaseMax, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestBehaviorMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( Master_WarQuestSelectionMaster )
    LOBYTE(Master_WarQuestSelectionMaster) = QuestBehaviorMaster__IsOpenQuestBehaviorCond(
                                               Master_WarQuestSelectionMaster,
                                               questInfo->fields.questId,
                                               v7,
                                               5,
                                               v9);
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

  if ( (byte_40FC71B & 1) == 0 )
  {
    sub_B16FFC(&QuestBoardListViewItemDraw_TypeInfo, method);
    byte_40FC71B = 1;
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

  if ( (byte_40FC71C & 1) == 0 )
  {
    sub_B16FFC(&QuestBoardListViewItemDraw_TypeInfo, method);
    byte_40FC71C = 1;
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

  if ( (byte_40FC711 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, method);
    byte_40FC711 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  return !mInfoTextList || mInfoTextList->fields._size == 0;
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0

  if ( (byte_40FC6F0 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&warId);
    sub_B16FFC(&Method_DataManager_GetMasterData_WarMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v5);
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FC6F0 = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  static_fields = v8->static_fields;
  if ( static_fields->FesWarId == warId )
    return 1;
  if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    static_fields = BalanceConfig_TypeInfo->static_fields;
  }
  if ( System_Linq_Enumerable__Contains_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)static_fields->MainChaptersWithEventId,
         warId,
         (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___) )
  {
    return 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   warId,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__)) == 0LL )
  {
    sub_B170D4();
  }
  return Entity->fields.eventId == 0;
}


bool __fastcall QuestBoardListViewItemDraw__IsMultiInfoText(
        QuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x8

  if ( (byte_40FC710 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, method);
    byte_40FC710 = 1;
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
    sub_B170D4();
  return BoardOptionEventTargetComponent__IsNeedAnim(eventTargetComponent, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw__IsPurchasedByRarePrism(
        QuestBoardListViewItemDraw_o *this,
        System_Collections_Generic_List_MapControl_QuestInfo__o *questList,
        WarEntity_o *warEnt,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  WarEntity_o *v20; // x0
  WebViewManager_o *Instance; // x0
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v33; // x21

  if ( (byte_40FC6E9 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_MapControl_QuestInfo___, questList);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserQuestMaster___, v7);
    sub_B16FFC(&Method_System_Func_MapControl_QuestInfo__bool___ctor__, v8);
    sub_B16FFC(&System_Func_MapControl_QuestInfo__bool__TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B16FFC(&Method_QuestBoardListViewItemDraw___c__DisplayClass297_0__IsPurchasedByRarePrism_b__0__, v11);
    sub_B16FFC(&QuestBoardListViewItemDraw___c__DisplayClass297_0_TypeInfo, v12);
    byte_40FC6E9 = 1;
  }
  v13 = sub_B170CC(QuestBoardListViewItemDraw___c__DisplayClass297_0_TypeInfo, questList, warEnt, method, v4);
  QuestBoardListViewItemDraw___c__DisplayClass297_0___ctor(
    (QuestBoardListViewItemDraw___c__DisplayClass297_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_9;
  *(_QWORD *)(v13 + 16) = warEnt;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)warEnt, v14, v15, v16, v17, v18, v19);
  v20 = *(WarEntity_o **)(v13 + 16);
  if ( v20 && WarEntity__IsShop(v20, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      *(_QWORD *)(v13 + 24) = MasterData_WarQuestSelectionMaster;
      sub_B16F98(
        (BattleServantConfConponent_o *)(v13 + 24),
        MasterData_WarQuestSelectionMaster,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      v33 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                 System_Func_MapControl_QuestInfo__bool__TypeInfo,
                                                                                 v29,
                                                                                 v30,
                                                                                 v31,
                                                                                 v32);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v33,
        (Il2CppObject *)v13,
        Method_QuestBoardListViewItemDraw___c__DisplayClass297_0__IsPurchasedByRarePrism_b__0__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_MapControl_QuestInfo__bool___ctor__);
      return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
               (System_Collections_Generic_List_T__o *)questList,
               (System_Func_T__bool__o *)v33,
               (const MethodInfo_18B5FC8 *)Method_BasicHelper_Any_MapControl_QuestInfo___);
    }
LABEL_9:
    sub_B170D4();
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  WebViewManager_o *Instance; // x0
  QuestRestrictionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  RestrictionEntity_array *RestrictionList; // x21
  QuestBoardListViewItemDraw___c_c *v21; // x0
  struct QuestBoardListViewItemDraw___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__339_0; // x22
  Il2CppObject *v24; // x23
  struct QuestBoardListViewItemDraw___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x22
  __int64 v33; // x22
  DataManager_o *v34; // x0
  QuestRestrictionInfoMaster_o *v35; // x0
  _BOOL4 v36; // w22
  bool v37; // w8
  QuestRestrictionInfoEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FC70D & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_RestrictionEntity___, questEntity);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestRestrictionMaster___, v7);
    sub_B16FFC(&Method_System_Func_RestrictionEntity__bool___ctor__, v8);
    sub_B16FFC(&System_Func_RestrictionEntity__bool__TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&Method_QuestBoardListViewItemDraw___c__IsValidSupportSelection_b__339_0__, v12);
    sub_B16FFC(&QuestBoardListViewItemDraw___c_TypeInfo, v13);
    byte_40FC70D = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_WarQuestSelectionMaster = (QuestRestrictionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestRestrictionMaster___);
  if ( MasterData_WarQuestSelectionMaster )
  {
    if ( !questEntity )
      goto LABEL_40;
    RestrictionList = QuestRestrictionMaster__getRestrictionList(
                        MasterData_WarQuestSelectionMaster,
                        questEntity->fields.id,
                        phase,
                        0LL);
    if ( RestrictionList )
    {
      v21 = QuestBoardListViewItemDraw___c_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw___c_TypeInfo);
        v21 = QuestBoardListViewItemDraw___c_TypeInfo;
      }
      static_fields = v21->static_fields;
      _9__339_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__339_0;
      if ( !_9__339_0 )
      {
        if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v21);
          static_fields = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
        }
        v24 = (Il2CppObject *)static_fields->__9;
        _9__339_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                         System_Func_RestrictionEntity__bool__TypeInfo,
                                                                                         v16,
                                                                                         v17,
                                                                                         v18,
                                                                                         v19);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__339_0,
          v24,
          Method_QuestBoardListViewItemDraw___c__IsValidSupportSelection_b__339_0__,
          (const MethodInfo_2B6AB40 *)Method_System_Func_RestrictionEntity__bool___ctor__);
        v25 = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
        v25->__9__339_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__339_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v25->__9__339_0,
          (System_Int32_array **)_9__339_0,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
      }
      LOBYTE(RestrictionList) = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
                                  (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)RestrictionList,
                                  (System_Func_T__bool__o *)_9__339_0,
                                  (const MethodInfo_18B6074 *)Method_BasicHelper_Any_RestrictionEntity___);
    }
  }
  else
  {
    LOBYTE(RestrictionList) = 0;
  }
  v32 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v32 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v33 = **(_QWORD **)(v32 + 192);
  if ( (*(_BYTE *)(v33 + 306) & 1) == 0 )
    sub_AAFCFC(v33);
  v34 = **(DataManager_o ***)(v33 + 184);
  if ( !v34
    || (v35 = (QuestRestrictionInfoMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                v34,
                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___),
        !questEntity)
    || !v35 )
  {
LABEL_40:
    sub_B170D4();
  }
  if ( !QuestRestrictionInfoMaster__TryGetEntity(v35, &entity, questEntity->fields.id, phase, 0LL) )
  {
    if ( !QuestEntity__HasFlag_23922108(questEntity, 0x80000LL, phase, 0LL)
      && !QuestEntity__HasFlag_23922108(questEntity, 0x100000LL, phase, 0LL)
      && !QuestEntity__HasFlag_23922108(questEntity, 0x10000000LL, phase, 0LL) )
    {
      LOBYTE(v36) = questEntity->fields.type != 7;
      if ( ((unsigned __int8)RestrictionList & 1) == 0 )
        goto LABEL_31;
      goto LABEL_36;
    }
LABEL_35:
    LOBYTE(v36) = 0;
    if ( ((unsigned __int8)RestrictionList & 1) == 0 )
      goto LABEL_31;
LABEL_36:
    v37 = 0;
    return v37 && v36;
  }
  if ( !entity )
    goto LABEL_40;
  if ( QuestRestrictionInfoEntity__HasFlag(entity, 0x80000LL, 0LL) )
    goto LABEL_35;
  if ( !entity )
    goto LABEL_40;
  if ( QuestRestrictionInfoEntity__HasFlag(entity, 0x100000LL, 0LL) )
    goto LABEL_35;
  if ( !entity )
    goto LABEL_40;
  v36 = !QuestRestrictionInfoEntity__HasFlag(entity, 0x10000000LL, 0LL);
  if ( ((unsigned __int8)RestrictionList & 1) != 0 )
    goto LABEL_36;
LABEL_31:
  v37 = !QuestEntity__HasFlag_23922108(questEntity, 2LL, phase, 0LL);
  return v37 && v36;
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
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  CommonUI_o *Instance; // x0
  const MethodInfo *v28; // x1
  QuestBoardListViewItemDraw_c *v29; // x0
  int32_t iconId; // w9
  Il2CppObject *QUEST_BOARD_ICON_TEXTURE_PREFIX; // x21
  Il2CppObject *v32; // x0
  struct System_String_o *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **boardIconName; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_String_o *v47; // x19
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  AssetLoader_LoadEndDataHandler_o *v52; // x21
  CommonUI_o *v53; // x0
  int32_t v54; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FC71F & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, questEntity);
    sub_B16FFC(&int_TypeInfo, v8);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_B16FFC(&QuestBoardListViewItemDraw_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_B16FFC(&Method_QuestBoardListViewItemDraw___c__DisplayClass372_0__LoadBoardIconTexture_b__0__, v12);
    sub_B16FFC(&QuestBoardListViewItemDraw___c__DisplayClass372_0_TypeInfo, v13);
    byte_40FC71F = 1;
  }
  v14 = sub_B170CC(QuestBoardListViewItemDraw___c__DisplayClass372_0_TypeInfo, questEntity, callback, method, v4);
  QuestBoardListViewItemDraw___c__DisplayClass372_0___ctor(
    (QuestBoardListViewItemDraw___c__DisplayClass372_0_o *)v14,
    0LL);
  if ( !v14 )
    goto LABEL_16;
  *(_QWORD *)(v14 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 24), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v14 + 32) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 32), (System_Int32_array **)callback, v21, v22, v23, v24, v25, v26);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  QuestBoardListViewItemDraw__ReleaseBoardIconTexture(this, v28);
  if ( !questEntity )
    goto LABEL_16;
  this->fields.boardIconQuestId = questEntity->fields.id;
  v29 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v29 = QuestBoardListViewItemDraw_TypeInfo;
  }
  iconId = questEntity->fields.iconId;
  QUEST_BOARD_ICON_TEXTURE_PREFIX = (Il2CppObject *)v29->static_fields->QUEST_BOARD_ICON_TEXTURE_PREFIX;
  v54 = iconId;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54);
  v33 = System_String__Concat(QUEST_BOARD_ICON_TEXTURE_PREFIX, v32, 0LL);
  this->fields.boardIconName = v33;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.boardIconName,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  boardIconName = (System_Int32_array **)this->fields.boardIconName;
  *(_QWORD *)(v14 + 16) = boardIconName;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 16), boardIconName, v41, v42, v43, v44, v45, v46);
  v47 = System_String__Concat_43743732(
          QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH,
          this->fields.boardIconName,
          0LL);
  v52 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v48, v49, v50, v51);
  AssetLoader_LoadEndDataHandler___ctor(
    v52,
    (Il2CppObject *)v14,
    Method_QuestBoardListViewItemDraw___c__DisplayClass372_0__LoadBoardIconTexture_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v47, v52, 1, 0LL) )
  {
    v53 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( v53 )
    {
      CommonUI__SetLoadMode(v53, 0, 0LL);
      return;
    }
LABEL_16:
    sub_B170D4();
  }
}


void __fastcall QuestBoardListViewItemDraw__MoveBanner(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  TerminalBannerComponent_c *IsBanners; // x0
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  WebViewManager_o *Instance; // x0
  CommonUI_o *v11; // x0
  CommonUI_o *v12; // x0
  bool v13; // w8
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x8
  struct MapControl_AreaBoardInfo_o *AreaBoardInfo_k__BackingField; // x21
  int32_t bannerFocusIndex; // w22
  __int64 v17; // x23
  struct TerminalBannerComponent_array *v18; // x8
  Il2CppClass **v19; // x8
  TerminalBannerComponent_o *v20; // x20
  int32_t v21; // w1
  char v22; // w21
  float realtimeSinceStartup; // s8
  __int64 v24; // x22
  struct TerminalBannerComponent_array *mTerminalBanners; // x8
  TerminalBannerComponent_o *v26; // x0
  char v27; // w21

  if ( (byte_40FC719 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__, questBoardItem);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&TerminalBannerComponent_TypeInfo, v6);
    byte_40FC719 = 1;
  }
  if ( this->fields._bannerState_k__BackingField != 2 )
    return;
  IsBanners = (TerminalBannerComponent_c *)QuestBoardListViewItemDraw__IsBanners(this, questBoardItem, method);
  if ( ((unsigned __int8)IsBanners & 1) == 0 )
    return;
  if ( this->fields.mIsPressed )
    goto LABEL_12;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  IsBanners = (TerminalBannerComponent_c *)WebViewManager__get_IsBusy(Instance, 0LL);
  if ( ((unsigned __int8)IsBanners & 1) != 0 )
    goto LABEL_12;
  v11 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v11 )
    goto LABEL_41;
  IsBanners = (TerminalBannerComponent_c *)CommonUI__IsActive_UserPresentBoxWindow(v11, 0LL);
  if ( ((unsigned __int8)IsBanners & 1) != 0 )
    goto LABEL_12;
  v12 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v12 )
    goto LABEL_41;
  IsBanners = (TerminalBannerComponent_c *)CommonUI__IsActive_MasterMission(v12, 0LL);
  if ( ((unsigned __int8)IsBanners & 1) != 0 )
  {
LABEL_12:
    v13 = 0;
  }
  else
  {
    v22 = (char)IsBanners;
    if ( !this->fields.mIsEnableBannerAutoMoveOld )
      QuestBoardListViewItemDraw__ResetBannerAutoMoveTime(this, v8);
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    if ( (float)(realtimeSinceStartup - this->fields.mBannerAutoMoveTimeOld) >= this->fields.mBannerAutoMoveTimeInterval )
    {
      if ( this->fields.mBannerCount >= 1 )
      {
        v24 = 0LL;
        while ( 1 )
        {
          mTerminalBanners = this->fields.mTerminalBanners;
          if ( !mTerminalBanners )
            break;
          if ( (unsigned int)v24 >= mTerminalBanners->max_length )
          {
LABEL_42:
            sub_B17100(IsBanners, v8, v9);
            sub_B170A0();
          }
          v26 = mTerminalBanners->m_Items[v24];
          if ( !v26 )
            break;
          TerminalBannerComponent__StartAutoMoveL(v26, 0LL);
          if ( (int)++v24 >= this->fields.mBannerCount )
            goto LABEL_37;
        }
LABEL_41:
        sub_B170D4();
      }
LABEL_37:
      this->fields.mBannerAutoMoveTimeOld = realtimeSinceStartup;
      v27 = v22 ^ 1;
      IsBanners = TerminalBannerComponent_TypeInfo;
      if ( (BYTE3(TerminalBannerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalBannerComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalBannerComponent_TypeInfo);
        IsBanners = TerminalBannerComponent_TypeInfo;
      }
      this->fields.mBannerAutoMoveTimeInterval = IsBanners->static_fields->BANNER_AUTO_MOVE_TIME_INTERVAL;
      v13 = v27 & 1;
    }
    else
    {
      v13 = 1;
    }
  }
  this->fields.mIsEnableBannerAutoMoveOld = v13;
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
    v17 = 0LL;
    do
    {
      v18 = this->fields.mTerminalBanners;
      if ( !v18 )
        goto LABEL_41;
      if ( (unsigned int)v17 >= v18->max_length )
        goto LABEL_42;
      v19 = &v18->obj.klass + v17;
      v20 = (TerminalBannerComponent_o *)v19[4];
      if ( !v20 )
        goto LABEL_41;
      TerminalBannerComponent__Move((TerminalBannerComponent_o *)v19[4], this, 0LL);
      IsBanners = (TerminalBannerComponent_c *)TerminalBannerComponent__IsFocus(v20, 0LL);
      if ( ((unsigned __int8)IsBanners & 1) != 0 )
        AreaBoardInfo_k__BackingField->fields.bannerFocusIndex = v20->fields.mIdx;
      ++v17;
    }
    while ( (int)v17 < this->fields.mBannerCount );
    v21 = AreaBoardInfo_k__BackingField->fields.bannerFocusIndex;
    if ( v21 != bannerFocusIndex )
      QuestBoardListViewItemDraw__UpdateDispBannerPoint(this, v21, v9);
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
  BoardOptionEventTargetComponent_o *v4; // x0

  if ( (byte_40FC6DF & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FC6DF = 1;
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
    v4 = this->fields.eventTargetComponent;
    if ( !v4 )
      sub_B170D4();
    BoardOptionEventTargetComponent__DestroyList(v4, 0LL);
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
  UnityEngine_Camera_o *mUICamera; // x21
  UnityEngine_Vector2_o ScreenPosition_27640488; // kr00_8
  float v10; // s0
  float v11; // s1
  UnityEngine_Behaviour_o *scrollView; // x0
  const MethodInfo *v13; // x3

  if ( (byte_40FC715 & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, questBoardItem);
    byte_40FC715 = 1;
  }
  if ( !questBoardItem )
    goto LABEL_14;
  if ( questBoardItem->fields._quest_info_k__BackingField
    && this->fields.mIsPressedForDragX
    && QuestBoardListViewItemDraw__IsBanners(this, questBoardItem, *(const MethodInfo **)&dispMode) )
  {
    if ( qmanager )
    {
      mUICamera = qmanager->fields.mUICamera;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      ScreenPosition_27640488 = CTouch__getScreenPosition_27640488(mUICamera, 0LL);
      v10 = vabds_f32(this->fields.mPressPos.fields.x, ScreenPosition_27640488.fields.x);
      v11 = vabds_f32(this->fields.mPressPos.fields.y, ScreenPosition_27640488.fields.y);
      this->fields.mIsEnableDragX = v10 > v11;
      scrollView = (UnityEngine_Behaviour_o *)qmanager->fields.scrollView;
      if ( scrollView )
      {
        UnityEngine_Behaviour__set_enabled(scrollView, v10 <= v11, 0LL);
        QuestBoardListViewItemDraw__SetDispBannerArrows(this, this->fields.mIsEnableDragX, 0, v13);
        return;
      }
    }
LABEL_14:
    sub_B170D4();
  }
}


void __fastcall QuestBoardListViewItemDraw__OnPressBanner(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        const MethodInfo *method)
{
  _BOOL8 IsBanners; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x3
  __int64 v8; // x20
  struct TerminalBannerComponent_array *mTerminalBanners; // x8
  TerminalBannerComponent_o *v10; // x0

  IsBanners = QuestBoardListViewItemDraw__IsBanners(this, questBoardItem, method);
  if ( IsBanners )
  {
    if ( this->fields.mBannerCount >= 1 )
    {
      v8 = 0LL;
      do
      {
        mTerminalBanners = this->fields.mTerminalBanners;
        if ( !mTerminalBanners )
          goto LABEL_10;
        if ( (unsigned int)v8 >= mTerminalBanners->max_length )
        {
          sub_B17100(IsBanners, v5, v6);
          sub_B170A0();
        }
        v10 = mTerminalBanners->m_Items[v8];
        if ( !v10 )
LABEL_10:
          sub_B170D4();
        TerminalBannerComponent__OnPress(v10, this, 0LL);
        ++v8;
      }
      while ( (int)v8 < this->fields.mBannerCount );
    }
    QuestBoardListViewItemDraw__SetDispBannerArrows(this, 1, 0, v7);
  }
}


void __fastcall QuestBoardListViewItemDraw__OnPressItem(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        int32_t dispMode,
        QuestBoardListViewManager_o *questBoardManager,
        const MethodInfo *method)
{
  UIScrollView_o *scrollView; // x0
  UnityEngine_Camera_o *mUICamera; // x21
  const MethodInfo *v11; // x2

  if ( (byte_40FC714 & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, questBoardItem);
    byte_40FC714 = 1;
  }
  if ( questBoardItem && dispMode && questBoardItem->fields._quest_info_k__BackingField )
  {
    this->fields.mIsPressed = 1;
    if ( !questBoardManager || (scrollView = questBoardManager->fields.scrollView) == 0LL )
      sub_B170D4();
    if ( !UIScrollView__IsLimitOverPosition(scrollView, 0LL) )
    {
      mUICamera = questBoardManager->fields.mUICamera;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      this->fields.mPressPos = CTouch__getScreenPosition_27640488(mUICamera, 0LL);
      this->fields.mIsPressedForDragX = 1;
      QuestBoardListViewItemDraw__OnPressBanner(this, questBoardItem, v11);
    }
  }
}


void __fastcall QuestBoardListViewItemDraw__OnPullBanner(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        const MethodInfo *method)
{
  _BOOL8 IsBanners; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x2
  __int64 v7; // x20
  struct TerminalBannerComponent_array *mTerminalBanners; // x8
  TerminalBannerComponent_o *v9; // x0
  const MethodInfo *v10; // x3

  IsBanners = QuestBoardListViewItemDraw__IsBanners(this, questBoardItem, method);
  if ( IsBanners )
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
          sub_B17100(IsBanners, v5, v6);
          sub_B170A0();
        }
        v9 = mTerminalBanners->m_Items[v7];
        if ( !v9 )
LABEL_10:
          sub_B170D4();
        TerminalBannerComponent__OnPull(v9, this, 0LL);
        ++v7;
      }
      while ( (int)v7 < this->fields.mBannerCount );
    }
    QuestBoardListViewItemDraw__ResetBannerAutoMoveTime(this, v5);
    QuestBoardListViewItemDraw__SetDispBannerArrows(this, 0, 0, v10);
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

  if ( questBoardItem && dispMode && questBoardItem->fields._quest_info_k__BackingField )
  {
    QuestBoardListViewItemDraw__OnPullBanner(this, questBoardItem, *(const MethodInfo **)&dispMode);
    *(_WORD *)&this->fields.mIsPressed = 0;
    this->fields.mIsEnableDragX = 0;
    if ( !questBoardManager || (scrollView = (UnityEngine_Behaviour_o *)questBoardManager->fields.scrollView) == 0LL )
      sub_B170D4();
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
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_40FC720 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&QuestBoardListViewItemDraw_TypeInfo, v3);
    byte_40FC720 = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.boardIconName, 0LL) )
  {
    v4 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v4 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v5 = System_String__Concat_43743732(
           v4->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH,
           this->fields.boardIconName,
           0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(v5, 0LL);
    this->fields.boardIconAssetData = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.boardIconAssetData, 0LL, v6, v7, v8, v9, v10, v11);
    this->fields.boardIconName = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.boardIconName, 0LL, v12, v13, v14, v15, v16, v17);
  }
}


void __fastcall QuestBoardListViewItemDraw__ResetBannerAutoMoveTime(
        QuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  TerminalBannerComponent_c *v3; // x0

  if ( (byte_40FC716 & 1) == 0 )
  {
    sub_B16FFC(&TerminalBannerComponent_TypeInfo, method);
    byte_40FC716 = 1;
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x0
  BattleServantConfConponent_o *p_mInfoTextList; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_40FC6E1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Clear__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo, v7);
    byte_40FC6E1 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  if ( mInfoTextList )
  {
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)mInfoTextList,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Clear__);
  }
  else
  {
    p_mInfoTextList = (BattleServantConfConponent_o *)&this->fields.mInfoTextList;
    v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo,
                                                                                                    method,
                                                                                                    v2,
                                                                                                    v3,
                                                                                                    v4);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v10,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
    p_mInfoTextList->klass = (BattleServantConfConponent_c *)v10;
    sub_B16F98(p_mInfoTextList, (System_Int32_array **)v10, v11, v12, v13, v14, v15, v16);
  }
}


void __fastcall QuestBoardListViewItemDraw__ResetQuest(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *mCostObj; // x0
  UnityEngine_Component_o *mCostLb1; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_o *v8; // x8
  float g; // s8
  float r; // s10
  float a; // s9
  float b; // s11
  QuestBoardListViewItemDraw_c *v13; // x0
  UserGameEntity_o *SelfUserGame; // x0
  struct UILabel_o *v15; // x8
  UserGameEntity_o *v16; // x21
  UnityEngine_Component_o *mCostApSp; // x0
  UnityEngine_GameObject_o *v18; // x0
  int32_t Act; // w0
  const MethodInfo *v20; // x2
  UnityEngine_Component_o *mCostRpSp; // x0
  UnityEngine_GameObject_o *v22; // x0
  int32_t result; // [xsp+2Ch] [xbp-14h] BYREF
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FC70E & 1) == 0 )
  {
    sub_B16FFC(&QuestBoardListViewItemDraw_TypeInfo, questBoardItem);
    byte_40FC70E = 1;
  }
  result = 0;
  mCostObj = this->fields.mCostObj;
  if ( !mCostObj )
    goto LABEL_27;
  if ( !UnityEngine_GameObject__get_activeSelf(mCostObj, 0LL) )
    return;
  mCostLb1 = (UnityEngine_Component_o *)this->fields.mCostLb1;
  if ( !mCostLb1 )
    goto LABEL_27;
  gameObject = UnityEngine_Component__get_gameObject(mCostLb1, 0LL);
  if ( !gameObject )
    goto LABEL_27;
  if ( !UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
    return;
  v8 = this->fields.mCostLb1;
  if ( !v8 )
    goto LABEL_27;
  r = v8->fields.mColor.fields.r;
  g = v8->fields.mColor.fields.g;
  b = v8->fields.mColor.fields.b;
  a = v8->fields.mColor.fields.a;
  v13 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v13 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v24.fields.r = r;
  v24.fields.g = g;
  v24.fields.b = b;
  v24.fields.a = a;
  if ( UnityEngine_Color__op_Equality(v24, v13->static_fields->OVER_COST_COLOR, 0LL) )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    v15 = this->fields.mCostLb1;
    if ( v15 )
    {
      v16 = SelfUserGame;
      System_Int32__TryParse(v15->fields.mText, &result, 0LL);
      mCostApSp = (UnityEngine_Component_o *)this->fields.mCostApSp;
      if ( mCostApSp )
      {
        v18 = UnityEngine_Component__get_gameObject(mCostApSp, 0LL);
        if ( v18 )
        {
          if ( UnityEngine_GameObject__get_activeSelf(v18, 0LL) )
          {
            if ( v16 )
            {
              Act = UserGameEntity__getAct(v16, 0LL);
              goto LABEL_24;
            }
          }
          else
          {
            mCostRpSp = (UnityEngine_Component_o *)this->fields.mCostRpSp;
            if ( mCostRpSp )
            {
              v22 = UnityEngine_Component__get_gameObject(mCostRpSp, 0LL);
              if ( v22 )
              {
                if ( !UnityEngine_GameObject__get_activeSelf(v22, 0LL) )
                  return;
                if ( v16 )
                {
                  Act = UserGameEntity__getRp(v16, 0LL);
LABEL_24:
                  if ( Act >= result )
                    QuestBoardListViewItemDraw__SetItemOfQuest(this, questBoardItem, v20);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_27:
    sub_B170D4();
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
  BattleServantConfConponent_o *p_mNoticeNumber; // x21
  struct UnityEngine_GameObject_o *mNoticeNumberPrefab; // x22
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_GameObject_o *v12; // x1
  UnityEngine_GameObject_o *v13; // x20
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_40FC6FB & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, *(_QWORD *)&num);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_40FC6FB = 1;
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
    v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)mNoticeNumberPrefab,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v12 = this->fields.mNoticeNumberRoot;
    v13 = v11;
    GameObjectExtensions__SafeSetParent_27425996(v11, v12, 0LL);
    if ( v13 )
    {
      Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v13,
                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
      p_mNoticeNumber->klass = (BattleServantConfConponent_c *)Component_srcLineSprite;
      sub_B16F98(p_mNoticeNumber, Component_srcLineSprite, v15, v16, v17, v18, v19, v20);
      goto LABEL_13;
    }
LABEL_15:
    sub_B170D4();
  }
LABEL_13:
  if ( !p_mNoticeNumber->klass )
    goto LABEL_15;
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)p_mNoticeNumber->klass, num, 0LL);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t lastQuestId; // w24
  bool IsQuestClear_25438860; // w0
  int v16; // w8
  UnityEngine_GameObject_o *blackMarkSpace; // x24
  QuestBoardListViewItemDraw_c *v18; // x0
  UnityEngine_GameObject_o *v19; // x23
  QuestBoardListViewItemDraw_c *v20; // x0
  UnityEngine_Object_o *black_mark_prefab_k__BackingField; // x23
  UnityEngine_Object_o *blackMarkEffect; // x23
  UnityEngine_GameObject_o *v23; // x0
  struct UnityEngine_GameObject_o *v24; // x24
  struct UnityEngine_GameObject_o **p_blackMarkEffect; // x23
  UnityEngine_GameObject_o **p_blackMarkSpace; // x26
  UnityEngine_Transform_o *transform; // x25
  System_Int32_array **v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UnityEngine_GameObject_o *v35; // x23
  int32_t v36; // w23
  UnityEngine_GameObject_o *v37; // x22
  QuestBoardListViewItemDraw_c *v38; // x0
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  QuestBoardListViewItemDraw_c *v43; // x0
  struct QuestBoardListViewItemDraw_StaticFields *v44; // x8
  int v45; // w8
  UnityEngine_GameObject_o *v46; // x21
  QuestBoardListViewItemDraw_c *v47; // x0
  UnityEngine_Object_o *white_mark_prefab_k__BackingField; // x21
  UnityEngine_Object_o *whiteMarkEffect; // x21
  UnityEngine_GameObject_o *v50; // x0
  struct UnityEngine_GameObject_o *v51; // x21
  BattleServantConfConponent_o *p_whiteMarkEffect; // x19
  UnityEngine_GameObject_o **v53; // x23
  UnityEngine_Transform_o *v54; // x20
  System_Int32_array **v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  UnityEngine_GameObject_o *klass; // x19
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FC6E3 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, questBoardItem);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&QuestBoardListViewItemDraw_TypeInfo, v13);
    byte_40FC6E3 = 1;
  }
  if ( !warEntity )
    return;
  if ( WarEntity__IsBlackMarkWithClear(warEntity, 0LL) )
  {
    lastQuestId = warEntity->fields.lastQuestId;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsQuestClear_25438860 = CondType__IsQuestClear_25438860(lastQuestId, -1, 0, 0LL);
    v16 = 0;
    if ( IsQuestClear_25438860 )
    {
      blackMarkSpace = this->fields.blackMarkSpace;
      v18 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v18 = QuestBoardListViewItemDraw_TypeInfo;
      }
      GameObjectExtensions__SetLocalPosition(blackMarkSpace, v18->static_fields->BLACK_MARK_OBJ_POS, 0LL);
      v16 = 1;
    }
    if ( isBlackMarkOnly )
    {
LABEL_14:
      v19 = this->fields.blackMarkSpace;
      v20 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v20 = QuestBoardListViewItemDraw_TypeInfo;
      }
      GameObjectExtensions__SetLocalPosition(v19, v20->static_fields->BLACK_MARK_OBJ_POS_CENTER, 0LL);
      if ( !questBoardItem )
        goto LABEL_78;
      goto LABEL_22;
    }
  }
  else
  {
    v16 = 0;
    if ( isBlackMarkOnly )
      goto LABEL_14;
  }
  if ( !v16 )
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
      v23 = this->fields.blackMarkSpace;
      if ( !v23 )
        goto LABEL_78;
      v24 = questBoardItem->fields._black_mark_prefab_k__BackingField;
      p_blackMarkEffect = &this->fields.blackMarkEffect;
      p_blackMarkSpace = &this->fields.blackMarkSpace;
      transform = UnityEngine_GameObject__get_transform(v23, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v28 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                     (UILabel_o *)v24,
                                     transform,
                                     (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
      *p_blackMarkEffect = (struct UnityEngine_GameObject_o *)v28;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.blackMarkEffect, v28, v29, v30, v31, v32, v33, v34);
      v35 = *p_blackMarkEffect;
      zero = UnityEngine_Vector3__get_zero(0LL);
      GameObjectExtensions__SetLocalPosition(v35, zero, 0LL);
    }
    else
    {
      p_blackMarkSpace = &this->fields.blackMarkSpace;
    }
    if ( !*p_blackMarkSpace )
      goto LABEL_78;
    UnityEngine_GameObject__SetActive(*p_blackMarkSpace, 1, 0LL);
  }
  if ( !WarEntity__IsWhiteMarkWithClear(warEntity, 0LL) )
    goto LABEL_47;
LABEL_38:
  v36 = warEntity->fields.lastQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestClear_25438860(v36, -1, 0, 0LL) )
  {
    v37 = this->fields.blackMarkSpace;
    v38 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v38 = QuestBoardListViewItemDraw_TypeInfo;
    }
    static_fields = v38->static_fields;
    x = static_fields->BLACK_MARK_OBJ_POS.fields.x;
    y = static_fields->BLACK_MARK_OBJ_POS.fields.y;
    z = static_fields->BLACK_MARK_OBJ_POS.fields.z;
  }
  else
  {
LABEL_47:
    if ( !WarEntity__IsDispWhiteMarkUnderBoard(warEntity, 0LL) )
    {
      v45 = 0;
      if ( isWhiteMarkOnly )
        goto LABEL_53;
LABEL_59:
      if ( !v45 )
        return;
      if ( !questBoardItem )
        goto LABEL_78;
      goto LABEL_61;
    }
    v37 = this->fields.blackMarkSpace;
    v43 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v43 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v44 = v43->static_fields;
    x = v44->WHITE_MARK_OBJ_UNDER_POS.fields.x;
    y = v44->WHITE_MARK_OBJ_UNDER_POS.fields.y;
    z = v44->WHITE_MARK_OBJ_UNDER_POS.fields.z;
  }
  GameObjectExtensions__SetLocalPosition(v37, *(UnityEngine_Vector3_o *)&x, 0LL);
  v45 = 1;
  if ( !isWhiteMarkOnly )
    goto LABEL_59;
LABEL_53:
  v46 = this->fields.blackMarkSpace;
  v47 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v47 = QuestBoardListViewItemDraw_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition(v46, v47->static_fields->BLACK_MARK_OBJ_POS_CENTER, 0LL);
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
      v50 = this->fields.blackMarkSpace;
      if ( !v50 )
        goto LABEL_78;
      v51 = questBoardItem->fields._white_mark_prefab_k__BackingField;
      p_whiteMarkEffect = (BattleServantConfConponent_o *)&this->fields.whiteMarkEffect;
      v53 = &this->fields.blackMarkSpace;
      v54 = UnityEngine_GameObject__get_transform(v50, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v55 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                     (UILabel_o *)v51,
                                     v54,
                                     (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
      p_whiteMarkEffect->klass = (BattleServantConfConponent_c *)v55;
      sub_B16F98(p_whiteMarkEffect, v55, v56, v57, v58, v59, v60, v61);
      klass = (UnityEngine_GameObject_o *)p_whiteMarkEffect->klass;
      v64 = UnityEngine_Vector3__get_zero(0LL);
      GameObjectExtensions__SetLocalPosition(klass, v64, 0LL);
    }
    else
    {
      v53 = &this->fields.blackMarkSpace;
    }
    if ( *v53 )
    {
      UnityEngine_GameObject__SetActive(*v53, 1, 0LL);
      return;
    }
LABEL_78:
    sub_B170D4();
  }
}


void __fastcall QuestBoardListViewItemDraw__SetClearSprite(
        QuestBoardListViewItemDraw_o *this,
        WarEntity_o *warEnt,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *StatusSp; // x0
  UnityEngine_GameObject_o *v6; // x19
  QuestBoardListViewItemDraw_c *v7; // x0
  QuestBoardListViewItemDraw_c *v8; // x0

  if ( (byte_40FC6FE & 1) == 0 )
  {
    sub_B16FFC(&QuestBoardListViewItemDraw_TypeInfo, warEnt);
    byte_40FC6FE = 1;
  }
  StatusSp = QuestBoardListViewItemDraw__GetStatusSp(this, 2, method);
  if ( !StatusSp )
    sub_B170D4();
  v6 = StatusSp;
  if ( UnityEngine_GameObject__get_activeSelf(StatusSp, 0LL) )
  {
    v7 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v7 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v6, v7->static_fields->CLEAR_POS_AREA, 0LL);
    if ( warEnt && WarEntity__HasFlag(warEnt, 256, 0LL) )
    {
      v8 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v8 = QuestBoardListViewItemDraw_TypeInfo;
      }
      GameObjectExtensions__SetLocalPositionX(v6, -v8->static_fields->CLEAR_POS_AREA.fields.x, 0LL);
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
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 type; // x8
  UnityEngine_GameObject_o *mCostObj; // x22
  bool HasFlag; // w0
  UnityEngine_GameObject_o *v34; // x0
  _BOOL4 v35; // w22
  _BOOL4 v36; // w20
  UnityEngine_Component_o *mCostLb1; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *mCostLb2; // x0
  UnityEngine_GameObject_o *v40; // x0
  UnityEngine_Component_o *mCostLb3; // x0
  UnityEngine_GameObject_o *v42; // x0
  UnityEngine_GameObject_o *v43; // x0
  UIWidget_o *Component_srcLineSprite; // x22
  QuestBoardListViewItemDraw_c *v45; // x8
  int32_t *p_COST_BG_WIDTH_WAR_BOARD; // x8
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x0
  QuestConsumeItemEntity_o *v48; // x22
  UnityEngine_GameObject_o *v49; // x0
  UnityEngine_Component_o *mCostBg2; // x0
  UnityEngine_GameObject_o *v51; // x0
  UnityEngine_Component_o *mCostBg3; // x0
  UnityEngine_GameObject_o *v53; // x0
  UnityEngine_Component_o **p_mCostLb2; // x21
  int v55; // w28
  int m_stringLength; // w26
  UnityEngine_Component_o *mCostRpSp; // x0
  UnityEngine_GameObject_o *v58; // x0
  UnityEngine_Component_o *mCostItemIcon1; // x0
  UnityEngine_GameObject_o *v60; // x0
  UnityEngine_Component_o *mCostItemIcon2; // x0
  UnityEngine_GameObject_o *v62; // x0
  UnityEngine_Component_o *mCostItemIcon3; // x0
  UnityEngine_GameObject_o *v64; // x0
  UnityEngine_Component_o *mCostApSp; // x0
  UnityEngine_GameObject_o *v66; // x0
  UnityEngine_Behaviour_o *v67; // x0
  const MethodInfo *v68; // x1
  int bannerId; // w23
  UISprite_o *v70; // x22
  System_String_o *ApSpriteFileName; // x23
  bool v72; // w0
  UnityEngine_Component_o *v73; // x0
  UnityEngine_GameObject_o *v74; // x0
  UnityEngine_Component_o *v75; // x0
  UnityEngine_GameObject_o *v76; // x0
  UnityEngine_Component_o *v77; // x0
  UnityEngine_GameObject_o *v78; // x0
  UnityEngine_Component_o *v79; // x0
  UnityEngine_GameObject_o *v80; // x0
  UnityEngine_Component_o *v81; // x0
  UnityEngine_GameObject_o *v82; // x0
  ItemIconComponent_o *v83; // x0
  ItemIconComponent_o *v84; // x0
  UnityEngine_Component_o *v85; // x0
  UnityEngine_GameObject_o *v86; // x0
  ItemIconComponent_o *v87; // x0
  ItemIconComponent_o *v88; // x0
  int32_t ActConsume; // w0
  int32_t v90; // w20
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v92; // x1
  UserGameEntity_o *v93; // x28
  bool v94; // w25
  UnityEngine_Component_o *v95; // x0
  UnityEngine_GameObject_o *v96; // x0
  UnityEngine_Component_o *v97; // x0
  UnityEngine_GameObject_o *v98; // x0
  UnityEngine_Component_o *v99; // x0
  UnityEngine_GameObject_o *v100; // x0
  QuestBoardListViewItemDraw_c *v101; // x0
  __int64 v102; // x1
  __int64 v103; // x2
  struct System_Int32_array *v104; // x8
  ItemIconComponent_o *v105; // x0
  ItemIconComponent_o *v106; // x0
  bool IsAvailableAt; // w0
  bool v108; // w24
  UnityEngine_GameObject_o *v109; // x0
  UnityEngine_GameObject_o *v110; // x23
  QuestBoardListViewItemDraw_c *v111; // x0
  UnityEngine_GameObject_o *v112; // x0
  struct System_Int32_array *v113; // x8
  int32_t v114; // w20
  BalanceConfig_c *v115; // x0
  UnityEngine_GameObject_o *v116; // x0
  UIWidget_o *v117; // x23
  UnityEngine_Component_o *mCostBg1; // x0
  UnityEngine_GameObject_o *v119; // x0
  UnityEngine_Component_o *v120; // x0
  UnityEngine_GameObject_o *v121; // x0
  UnityEngine_Component_o *v122; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UnityEngine_Component_o *v124; // x0
  WebViewObject_o *v125; // x0
  UnityEngine_Component_o *v126; // x0
  UnityEngine_GameObject_o *v127; // x0
  UnityEngine_GameObject_o *v128; // x0
  UnityEngine_Component_o *v129; // x0
  UnityEngine_GameObject_o *v130; // x0
  struct System_Int32_array *v131; // x8
  ItemIconComponent_o *v132; // x0
  ItemIconComponent_o *v133; // x0
  UnityEngine_Component_o *v134; // x0
  UnityEngine_GameObject_o *v135; // x0
  UnityEngine_Component_o *v136; // x0
  UnityEngine_GameObject_o *v137; // x0
  UnityEngine_Component_o *v138; // x0
  UnityEngine_GameObject_o *v139; // x0
  UnityEngine_Component_o *v140; // x0
  UnityEngine_GameObject_o *v141; // x0
  UnityEngine_Component_o *v142; // x0
  UnityEngine_GameObject_o *v143; // x0
  UnityEngine_Behaviour_o *v144; // x0
  const MethodInfo *v145; // x1
  int v146; // w24
  UISprite_o *v147; // x23
  System_String_o *v148; // x24
  bool v149; // w0
  UnityEngine_Component_o *v150; // x0
  UnityEngine_GameObject_o *v151; // x0
  UnityEngine_Component_o *v152; // x0
  UnityEngine_GameObject_o *v153; // x0
  UnityEngine_Component_o *v154; // x0
  UnityEngine_GameObject_o *v155; // x0
  UnityEngine_Component_o *v156; // x0
  UnityEngine_GameObject_o *v157; // x0
  UnityEngine_Component_o *v158; // x0
  UnityEngine_GameObject_o *v159; // x0
  UIWidget_o *v160; // x0
  UIWidget_o *mCostRpPointSp; // x0
  __int64 v162; // x1
  __int64 v163; // x2
  BalanceConfig_c *v164; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int64_t UserId; // x0
  UISprite_o *v167; // x22
  __int64 BpExpresssionType; // x20
  __int64 v169; // x8
  struct System_String_array *RP_SPNAME_POINT; // x8
  UISprite_o *v171; // x0
  struct UISprite_o *v172; // x0
  struct UISprite_o *v173; // x0
  UnityEngine_GameObject_o *v174; // x0
  UserItemMaster_o *Master_WarQuestSelectionMaster; // x27
  DataMasterBase_WarMaster__WarEntity__int__o *v176; // x20
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *v178; // x8
  WarEntity_o *v179; // x0
  ItemEntity_o *v180; // x28
  UnityEngine_GameObject_o *v181; // x0
  const MethodInfo *v182; // x6
  struct System_Int32_array *nums; // x8
  struct System_Int32_array *v184; // x8
  System_String_o *v185; // x0
  UnityEngine_GameObject_o *v186; // x0
  UnityEngine_GameObject_o *v187; // x0
  UIWidget_o *v188; // x28
  struct System_Int32_array *v189; // x8
  struct System_Int32_array *v190; // x8
  const MethodInfo *v191; // x6
  struct System_Int32_array *v192; // x8
  struct System_Int32_array *v193; // x8
  System_String_o *v194; // x0
  bool v195; // w28
  BalanceConfig_c *v196; // x0
  bool v197; // w25
  UnityEngine_Component_o *v198; // x0
  UILabel_o *v199; // x28
  System_String_o *v200; // x0
  const MethodInfo *v201; // x7
  UnityEngine_Component_o *v202; // x0
  UnityEngine_GameObject_o *v203; // x0
  UILabel_o *v204; // x20
  System_String_o *v205; // x0
  const MethodInfo *v206; // x7
  UnityEngine_Component_o *v207; // x0
  UnityEngine_GameObject_o *v208; // x0
  UnityEngine_Component_o *v209; // x0
  UnityEngine_GameObject_o *v210; // x0
  UnityEngine_GameObject_o *v211; // x0
  UIWidget_o *v212; // x25
  UserItemMaster_o *v213; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v214; // x25
  struct System_Int32_array *v215; // x8
  struct System_Int32_array *v216; // x8
  WarEntity_o *v217; // x0
  ItemEntity_o *v218; // x25
  UnityEngine_GameObject_o *v219; // x0
  const MethodInfo *v220; // x6
  struct System_Int32_array *v221; // x8
  struct System_Int32_array *v222; // x8
  System_String_o *v223; // x0
  UnityEngine_Component_o *v224; // x0
  UnityEngine_GameObject_o *v225; // x0
  UnityEngine_GameObject_o *v226; // x0
  UnityEngine_Component_o *v227; // x0
  UnityEngine_GameObject_o *v228; // x0
  UnityEngine_GameObject_o *v229; // x0
  UnityEngine_GameObject_o *v230; // x0
  UnityEngine_Component_o *v231; // x0
  UnityEngine_GameObject_o *v232; // x0
  UILabel_o *v233; // x26
  System_String_o *v234; // x0
  const MethodInfo *v235; // x7
  UnityEngine_Component_o *v236; // x0
  UnityEngine_Component_o *v237; // x0
  UnityEngine_GameObject_o *v238; // x0
  UISprite_o *v239; // x22
  __int64 v240; // x8
  struct UISprite_o *v241; // x0
  UIWidget_o *v242; // x0
  UISprite_o *v243; // x23
  struct System_String_array *QuestBoardApSpNames; // x8
  struct UISprite_o *v245; // x0
  UIWidget_o *v246; // x0
  UnityEngine_Component_o *v247; // x0
  UnityEngine_GameObject_o *v248; // x0
  UnityEngine_Component_o *v249; // x0
  UnityEngine_GameObject_o *v250; // x0
  struct System_Int32_array *v251; // x8
  ItemIconComponent_o *v252; // x0
  ItemIconComponent_o *v253; // x0
  UnityEngine_Component_o *v254; // x0
  UnityEngine_GameObject_o *v255; // x0
  QuestBoardListViewItemDraw_c *v256; // x8
  UnityEngine_GameObject_o *v257; // x23
  UnityEngine_GameObject_o *v258; // x0
  struct System_Int32_array *v259; // x8
  int32_t v260; // w20
  BalanceConfig_c *v261; // x0
  UnityEngine_GameObject_o *v262; // x0
  UIWidget_o *v263; // x23
  UnityEngine_Component_o *v264; // x0
  UnityEngine_GameObject_o *v265; // x0
  UnityEngine_Component_o *v266; // x0
  WebViewObject_o *v267; // x0
  UnityEngine_Component_o *v268; // x0
  UnityEngine_GameObject_o *v269; // x0
  UnityEngine_GameObject_o *v270; // x0
  UnityEngine_Component_o *v271; // x0
  UnityEngine_Component_o *v272; // x0
  UnityEngine_GameObject_o *v273; // x0
  QuestBoardListViewItemDraw_c *v274; // x8
  UnityEngine_GameObject_o *v275; // x23
  UnityEngine_Component_o *v276; // x0
  UnityEngine_GameObject_o *v277; // x0
  UnityEngine_GameObject_o *v278; // x0
  UnityEngine_Component_o *v279; // x0
  UnityEngine_GameObject_o *v280; // x0
  UnityEngine_Component_o *v281; // x0
  UnityEngine_GameObject_o *v282; // x0
  UnityEngine_Component_o *v283; // x0
  UnityEngine_GameObject_o *v284; // x0
  struct System_Int32_array *v285; // x8
  ItemIconComponent_o *v286; // x0
  UILabel_o *v287; // x0
  UILabel_o *v288; // x0
  UnityEngine_Component_o *v289; // x0
  UnityEngine_GameObject_o *v290; // x20
  UnityEngine_GameObject_o *v291; // x20
  UnityEngine_Component_o *v292; // x0
  UnityEngine_GameObject_o *v293; // x20
  UIWidget_o *v294; // x22
  UIWidget_o *v295; // x0
  UILabel_o *v296; // x0
  UILabel_o *v297; // x0
  UILabel_o *v298; // x20
  UILabel_o *v299; // x0
  UILabel_o *v300; // x0
  UILabel_o *v301; // x0
  struct UILabel_o *v302; // x0
  struct UILabel_o *v303; // x0
  UILabel_o *v304; // x0
  UILabel_o *v305; // x0
  UnityEngine_GameObject_o *v306; // x0
  UnityEngine_Component_o *v307; // x0
  UnityEngine_GameObject_o *v308; // x0
  UnityEngine_GameObject_o *v309; // x0
  UIWidget_o *v310; // x25
  struct System_Int32_array *v311; // x8
  struct System_Int32_array *v312; // x8
  const MethodInfo *v313; // x6
  struct System_Int32_array *v314; // x8
  struct System_Int32_array *v315; // x8
  UnityEngine_Component_o *v316; // x0
  UnityEngine_GameObject_o *v317; // x0
  bool *v318; // [xsp+8h] [xbp-A8h]
  bool v319; // [xsp+14h] [xbp-9Ch]
  bool *v320; // [xsp+18h] [xbp-98h]
  __int64 v321; // [xsp+20h] [xbp-90h]
  UserItemEntity_o *usrItem; // [xsp+28h] [xbp-88h] BYREF
  UserItemEntity_o *entity; // [xsp+30h] [xbp-80h] BYREF
  int32_t v324; // [xsp+3Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v326; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v327; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v328; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v329; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v330; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v331; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v332; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v333; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v334; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v335; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v336; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v337; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v338; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v339; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v340; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v341; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v342; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v343; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = baseColor.fields.a;
  b = baseColor.fields.b;
  g = baseColor.fields.g;
  r = baseColor.fields.r;
  if ( (byte_40FC6EE & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, questEnt);
    sub_B16FFC(&BalanceConfig_TypeInfo, v22);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UISprite___, v23);
    sub_B16FFC(&Method_DataManager_GetMaster_ItemMaster___, v24);
    sub_B16FFC(&Method_DataManager_GetMaster_UserItemMaster___, v25);
    sub_B16FFC(&DataManager_TypeInfo, v26);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v27);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v28);
    sub_B16FFC(&NetworkManager_TypeInfo, v29);
    sub_B16FFC(&QuestBoardListViewItemDraw_TypeInfo, v30);
    byte_40FC6EE = 1;
  }
  v324 = 0;
  usrItem = 0LL;
  entity = 0LL;
  if ( !questEnt )
    goto LABEL_436;
  type = questEnt->fields.type;
  *isDoubleItemConsume = 0;
  *isDoubleItemConsumeQp = 0;
  *isTripleItemConsume = 0;
  mCostObj = this->fields.mCostObj;
  v321 = type;
  HasFlag = QuestEntity__HasFlag(questEnt, 0x2000LL, 0LL);
  if ( !mCostObj )
    goto LABEL_436;
  UnityEngine_GameObject__SetActive(mCostObj, !HasFlag, 0LL);
  v34 = this->fields.mCostObj;
  if ( !v34 )
    goto LABEL_436;
  if ( !UnityEngine_GameObject__get_activeSelf(v34, 0LL) )
    return;
  if ( isClosed )
  {
    v35 = !QuestEntity__HasFlag(questEnt, 128LL, 0LL);
    v36 = QuestEntity__HasFlag(questEnt, 256LL, 0LL);
  }
  else
  {
    v36 = 0;
    LOBYTE(v35) = 1;
  }
  mCostLb1 = (UnityEngine_Component_o *)this->fields.mCostLb1;
  if ( !mCostLb1 )
    goto LABEL_436;
  gameObject = UnityEngine_Component__get_gameObject(mCostLb1, 0LL);
  if ( !gameObject )
    goto LABEL_436;
  UnityEngine_GameObject__SetActive(gameObject, !v36, 0LL);
  mCostLb2 = (UnityEngine_Component_o *)this->fields.mCostLb2;
  if ( !mCostLb2 )
    goto LABEL_436;
  v40 = UnityEngine_Component__get_gameObject(mCostLb2, 0LL);
  if ( !v40 )
    goto LABEL_436;
  UnityEngine_GameObject__SetActive(v40, !v36, 0LL);
  mCostLb3 = (UnityEngine_Component_o *)this->fields.mCostLb3;
  if ( !mCostLb3 )
    goto LABEL_436;
  v42 = UnityEngine_Component__get_gameObject(mCostLb3, 0LL);
  if ( !v42 )
    goto LABEL_436;
  v319 = v35;
  UnityEngine_GameObject__SetActive(v42, !v36, 0LL);
  v43 = this->fields.mCostObj;
  if ( !v43 )
    goto LABEL_436;
  Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            v43,
                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v45 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (_DWORD)v321 == 7 )
  {
    if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v45 = QuestBoardListViewItemDraw_TypeInfo;
    }
    p_COST_BG_WIDTH_WAR_BOARD = &v45->static_fields->COST_BG_WIDTH_WAR_BOARD;
    if ( !Component_srcLineSprite )
      goto LABEL_436;
    goto LABEL_27;
  }
  if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v45 = QuestBoardListViewItemDraw_TypeInfo;
  }
  p_COST_BG_WIDTH_WAR_BOARD = &v45->static_fields->COST_BG_WIDTH_SINGLE;
  if ( !Component_srcLineSprite )
LABEL_436:
    sub_B170D4();
LABEL_27:
  UIWidget__set_width(Component_srcLineSprite, *p_COST_BG_WIDTH_WAR_BOARD, 0LL);
  ItemConsumeEntity = QuestEntity__getItemConsumeEntity(questEnt, 0LL);
  if ( !this->fields.mCostBg1 )
    goto LABEL_436;
  v48 = ItemConsumeEntity;
  v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.mCostBg1, 0LL);
  if ( !v49 )
    goto LABEL_436;
  UnityEngine_GameObject__SetActive(v49, 0, 0LL);
  mCostBg2 = (UnityEngine_Component_o *)this->fields.mCostBg2;
  if ( !mCostBg2 )
    goto LABEL_436;
  v51 = UnityEngine_Component__get_gameObject(mCostBg2, 0LL);
  if ( !v51 )
    goto LABEL_436;
  UnityEngine_GameObject__SetActive(v51, 0, 0LL);
  mCostBg3 = (UnityEngine_Component_o *)this->fields.mCostBg3;
  if ( !mCostBg3 )
    goto LABEL_436;
  v320 = isDoubleItemConsumeQp;
  v318 = isTripleItemConsume;
  v53 = UnityEngine_Component__get_gameObject(mCostBg3, 0LL);
  if ( !v53 )
    goto LABEL_436;
  p_mCostLb2 = (UnityEngine_Component_o **)&this->fields.mCostLb2;
  UnityEngine_GameObject__SetActive(v53, 0, 0LL);
  if ( v36 )
    goto LABEL_34;
  ActConsume = QuestEntity__getActConsume(questEnt, costCalcVal, 0LL);
  if ( fixedVal >= 0 )
    v90 = fixedVal;
  else
    v90 = ActConsume;
  v324 = v90;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  v93 = SelfUserGame;
  switch ( questEnt->fields.consumeType )
  {
    case 1:
      if ( !SelfUserGame )
        goto LABEL_436;
      v94 = v90 > SelfUserGame->fields.actMax || v90 > UserGameEntity__getAct(SelfUserGame, 0LL);
      v199 = this->fields.mCostLb1;
      v200 = System_Int32__ToString((int32_t)&v324, 0LL);
      v336.fields.r = r;
      v336.fields.g = g;
      v336.fields.b = b;
      v336.fields.a = a;
      QuestBoardListViewItemDraw__SetCostLabel(
        (QuestBoardListViewItemDraw_o *)v200,
        v199,
        v200,
        costCalcVal,
        v336,
        v94,
        isClosed,
        fixedVal >= 0,
        v201);
      v202 = (UnityEngine_Component_o *)this->fields.mCostLb2;
      if ( !v202 )
        goto LABEL_436;
      v203 = UnityEngine_Component__get_gameObject(v202, 0LL);
      if ( !v203 )
        goto LABEL_436;
      goto LABEL_287;
    case 2:
      if ( !SelfUserGame )
        goto LABEL_436;
      if ( !byte_40F6041 )
      {
        sub_B16FFC(&BalanceConfig_TypeInfo, v92);
        byte_40F6041 = 1;
      }
      v196 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v196 = BalanceConfig_TypeInfo;
      }
      v197 = v90 > v196->static_fields->UerGameRpMax || v90 > UserGameEntity__getRp(v93, 0LL);
      v233 = this->fields.mCostLb1;
      v234 = System_Int32__ToString((int32_t)&v324, 0LL);
      v339.fields.r = r;
      v339.fields.g = g;
      v339.fields.b = b;
      v339.fields.a = a;
      QuestBoardListViewItemDraw__SetCostLabel(
        (QuestBoardListViewItemDraw_o *)v234,
        v233,
        v234,
        0,
        v339,
        v197,
        isClosed,
        0,
        v235);
      v236 = (UnityEngine_Component_o *)this->fields.mCostLb2;
      if ( !v236 )
        goto LABEL_436;
      v203 = UnityEngine_Component__get_gameObject(v236, 0LL);
      if ( !v203 )
        goto LABEL_436;
LABEL_287:
      UnityEngine_GameObject__SetActive(v203, 0, 0LL);
      v237 = (UnityEngine_Component_o *)this->fields.mCostLb3;
      if ( !v237 )
        goto LABEL_436;
      v238 = UnityEngine_Component__get_gameObject(v237, 0LL);
      if ( !v238 )
        goto LABEL_436;
      UnityEngine_GameObject__SetActive(v238, 0, 0LL);
      goto LABEL_34;
    case 3:
      if ( !v48 || !QuestConsumeItemEntity__IsAvailableAt(v48, 0, 0LL) )
      {
        v198 = (UnityEngine_Component_o *)this->fields.mCostLb1;
        if ( !v198 )
          goto LABEL_436;
LABEL_278:
        v229 = UnityEngine_Component__get_gameObject(v198, 0LL);
        if ( !v229 )
          goto LABEL_436;
        UnityEngine_GameObject__SetActive(v229, 0, 0LL);
        if ( !*p_mCostLb2 )
          goto LABEL_436;
        v230 = UnityEngine_Component__get_gameObject(*p_mCostLb2, 0LL);
        if ( !v230 )
          goto LABEL_436;
        UnityEngine_GameObject__SetActive(v230, 0, 0LL);
        v231 = (UnityEngine_Component_o *)this->fields.mCostLb3;
        if ( !v231 )
          goto LABEL_436;
        v232 = UnityEngine_Component__get_gameObject(v231, 0LL);
        if ( !v232 )
          goto LABEL_436;
        UnityEngine_GameObject__SetActive(v232, 0, 0LL);
        v48 = 0LL;
LABEL_34:
        v55 = 0;
LABEL_35:
        m_stringLength = 0;
        goto LABEL_36;
      }
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserItemMaster___);
      v176 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      itemIds = v48->fields.itemIds;
      if ( !itemIds )
        goto LABEL_436;
      if ( !itemIds->max_length )
        goto LABEL_438;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_436;
      UserId = UserItemMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, UserId, itemIds->m_Items[1], 0LL);
      v178 = v48->fields.itemIds;
      if ( !v178 )
        goto LABEL_436;
      if ( !v178->max_length )
        goto LABEL_438;
      if ( !v176 )
        goto LABEL_436;
      v179 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               v176,
               v178->m_Items[1],
               (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !this->fields.mCostLb1 )
        goto LABEL_436;
      v180 = (ItemEntity_o *)v179;
      v181 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.mCostLb1, 0LL);
      if ( !v181 )
        goto LABEL_436;
      UnityEngine_GameObject__SetActive(v181, 1, 0LL);
      nums = v48->fields.nums;
      if ( !nums )
        goto LABEL_436;
      if ( !nums->max_length )
        goto LABEL_438;
      v334.fields.r = r;
      v334.fields.g = g;
      v334.fields.b = b;
      v334.fields.a = a;
      QuestBoardListViewItemDraw__SetCostLabelItem(
        (QuestBoardListViewItemDraw_o *)UserId,
        this->fields.mCostLb1,
        nums->m_Items[1],
        entity,
        v180,
        v334,
        isClosed,
        v182);
      v184 = v48->fields.nums;
      if ( !v184 )
        goto LABEL_436;
      if ( !v184->max_length )
        goto LABEL_438;
      v185 = System_Int32__ToString((int)v184 + 32, 0LL);
      if ( !v185 )
        goto LABEL_436;
      m_stringLength = v185->fields.m_stringLength;
      if ( QuestConsumeItemEntity__IsAvailableAt(v48, 1, 0LL) )
      {
        *isDoubleItemConsume = 1;
        if ( !*p_mCostLb2 )
          goto LABEL_436;
        v186 = UnityEngine_Component__get_gameObject(*p_mCostLb2, 0LL);
        if ( !v186 )
          goto LABEL_436;
        UnityEngine_GameObject__SetActive(v186, 1, 0LL);
        v187 = this->fields.mCostObj;
        if ( !v187 )
          goto LABEL_436;
        v188 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               v187,
                               (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        }
        if ( !v188 )
          goto LABEL_436;
        UIWidget__set_width(v188, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_DOUBLE, 0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        UserId = NetworkManager__get_UserId(0LL);
        v189 = v48->fields.itemIds;
        if ( !v189 )
          goto LABEL_436;
        if ( v189->max_length <= 1 )
          goto LABEL_438;
        UserId = UserItemMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, UserId, v189->m_Items[2], 0LL);
        v190 = v48->fields.itemIds;
        if ( !v190 )
          goto LABEL_436;
        if ( v190->max_length <= 1 )
          goto LABEL_438;
        UserId = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            v176,
                            v190->m_Items[2],
                            (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        v192 = v48->fields.nums;
        if ( !v192 )
          goto LABEL_436;
        if ( v192->max_length <= 1 )
          goto LABEL_438;
        v335.fields.r = r;
        v335.fields.g = g;
        v335.fields.b = b;
        v335.fields.a = a;
        QuestBoardListViewItemDraw__SetCostLabelItem(
          (QuestBoardListViewItemDraw_o *)UserId,
          (UILabel_o *)*p_mCostLb2,
          v192->m_Items[2],
          entity,
          (ItemEntity_o *)UserId,
          v335,
          isClosed,
          v191);
        v193 = v48->fields.nums;
        if ( !v193 )
          goto LABEL_436;
        if ( v193->max_length <= 1 )
          goto LABEL_438;
        v194 = System_Int32__ToString((int)v193 + 36, 0LL);
        if ( !v194 )
          goto LABEL_436;
        v55 = v194->fields.m_stringLength;
      }
      else
      {
        if ( !*p_mCostLb2 )
          goto LABEL_436;
        v306 = UnityEngine_Component__get_gameObject(*p_mCostLb2, 0LL);
        if ( !v306 )
          goto LABEL_436;
        UnityEngine_GameObject__SetActive(v306, 0, 0LL);
        v55 = 0;
      }
      if ( QuestConsumeItemEntity__IsAvailableAt(v48, 2, 0LL) )
      {
        *isDoubleItemConsume = 0;
        *v318 = 1;
        v307 = (UnityEngine_Component_o *)this->fields.mCostLb3;
        if ( !v307 )
          goto LABEL_436;
        v308 = UnityEngine_Component__get_gameObject(v307, 0LL);
        if ( !v308 )
          goto LABEL_436;
        UnityEngine_GameObject__SetActive(v308, 1, 0LL);
        v309 = this->fields.mCostObj;
        if ( !v309 )
          goto LABEL_436;
        v310 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               v309,
                               (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        }
        if ( !v310 )
          goto LABEL_436;
        UIWidget__set_width(
          v310,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_TLIPLE_FOR_ALL_ITEM,
          0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        UserId = NetworkManager__get_UserId(0LL);
        v311 = v48->fields.itemIds;
        if ( !v311 )
          goto LABEL_436;
        if ( v311->max_length > 2 )
        {
          UserId = UserItemMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, UserId, v311->m_Items[3], 0LL);
          v312 = v48->fields.itemIds;
          if ( !v312 )
            goto LABEL_436;
          if ( v312->max_length > 2 )
          {
            UserId = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v176,
                                v312->m_Items[3],
                                (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            v314 = v48->fields.nums;
            if ( !v314 )
              goto LABEL_436;
            if ( v314->max_length > 2 )
            {
              v343.fields.r = r;
              v343.fields.g = g;
              v343.fields.b = b;
              v343.fields.a = a;
              QuestBoardListViewItemDraw__SetCostLabelItem(
                (QuestBoardListViewItemDraw_o *)UserId,
                this->fields.mCostLb3,
                v314->m_Items[3],
                entity,
                (ItemEntity_o *)UserId,
                v343,
                isClosed,
                v313);
              v315 = v48->fields.nums;
              if ( !v315 )
                goto LABEL_436;
              if ( v315->max_length > 2 )
              {
                if ( !System_Int32__ToString((int)v315 + 40, 0LL) )
                  goto LABEL_436;
                goto LABEL_36;
              }
            }
          }
        }
LABEL_438:
        sub_B17100(UserId, v162, v163);
        sub_B170A0();
      }
      v316 = (UnityEngine_Component_o *)this->fields.mCostLb3;
      if ( !v316 )
        goto LABEL_436;
      v317 = UnityEngine_Component__get_gameObject(v316, 0LL);
      if ( !v317 )
        goto LABEL_436;
      UnityEngine_GameObject__SetActive(v317, 0, 0LL);
LABEL_36:
      if ( v319 )
      {
        switch ( questEnt->fields.consumeType )
        {
          case 1:
            mCostRpSp = (UnityEngine_Component_o *)this->fields.mCostRpSp;
            if ( !mCostRpSp )
              goto LABEL_436;
            v58 = UnityEngine_Component__get_gameObject(mCostRpSp, 0LL);
            if ( !v58 )
              goto LABEL_436;
            UnityEngine_GameObject__SetActive(v58, 0, 0LL);
            mCostItemIcon1 = (UnityEngine_Component_o *)this->fields.mCostItemIcon1;
            if ( !mCostItemIcon1 )
              goto LABEL_436;
            v60 = UnityEngine_Component__get_gameObject(mCostItemIcon1, 0LL);
            if ( !v60 )
              goto LABEL_436;
            UnityEngine_GameObject__SetActive(v60, 0, 0LL);
            mCostItemIcon2 = (UnityEngine_Component_o *)this->fields.mCostItemIcon2;
            if ( !mCostItemIcon2 )
              goto LABEL_436;
            v62 = UnityEngine_Component__get_gameObject(mCostItemIcon2, 0LL);
            if ( !v62 )
              goto LABEL_436;
            UnityEngine_GameObject__SetActive(v62, 0, 0LL);
            mCostItemIcon3 = (UnityEngine_Component_o *)this->fields.mCostItemIcon3;
            if ( !mCostItemIcon3 )
              goto LABEL_436;
            v64 = UnityEngine_Component__get_gameObject(mCostItemIcon3, 0LL);
            if ( !v64 )
              goto LABEL_436;
            UnityEngine_GameObject__SetActive(v64, 0, 0LL);
            mCostApSp = (UnityEngine_Component_o *)this->fields.mCostApSp;
            if ( !mCostApSp )
              goto LABEL_436;
            v66 = UnityEngine_Component__get_gameObject(mCostApSp, 0LL);
            if ( !v66 )
              goto LABEL_436;
            UnityEngine_GameObject__SetActive(v66, 1, 0LL);
            v67 = (UnityEngine_Behaviour_o *)this->fields.mCostApSp;
            if ( !v67 )
              goto LABEL_436;
            UnityEngine_Behaviour__set_enabled(v67, 1, 0LL);
            bannerId = questEnt->fields.bannerId;
            v70 = this->fields.mCostApSp;
            if ( bannerId >= 1 )
            {
              if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
              }
              ApSpriteFileName = QuestBoardListViewItemDraw__GetApSpriteFileName(bannerId, v68);
              if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !AtlasManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              }
              v72 = AtlasManager__SetEventUI(v70, ApSpriteFileName, 0LL);
              if ( !v70 )
                goto LABEL_436;
              UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v70, v72, 0LL);
              goto LABEL_298;
            }
            if ( !v70 )
              goto LABEL_436;
            UISprite__set_atlas(this->fields.mCostApSp, this->fields.mTerminalAtlas, 0LL);
            UserId = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
            v239 = this->fields.mCostApSp;
            if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
              UserId = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
            }
            v240 = *(_QWORD *)(*(_QWORD *)(UserId + 184) + 1040LL);
            if ( !v240 )
              goto LABEL_436;
            if ( (unsigned int)v321 < *(_DWORD *)(v240 + 24) )
            {
              if ( !v239 )
                goto LABEL_436;
              UISprite__set_spriteName(v239, *(System_String_o **)(v240 + 8 * v321 + 32), 0LL);
LABEL_298:
              v241 = this->fields.mCostApSp;
              if ( !v241 )
                goto LABEL_436;
              ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v241->klass->vtable._33_MakePixelPerfect.method)(
                v241,
                v241->klass->vtable._34_get_minWidth.methodPtr);
              v242 = (UIWidget_o *)this->fields.mCostApSp;
              if ( !v242 )
                goto LABEL_436;
              v340.fields.r = r;
              v340.fields.g = g;
              v340.fields.b = b;
              v340.fields.a = a;
              UIWidget__set_color(v242, v340, 0LL);
              break;
            }
            goto LABEL_438;
          case 2:
            v150 = (UnityEngine_Component_o *)this->fields.mCostApSp;
            if ( !v150 )
              goto LABEL_436;
            v151 = UnityEngine_Component__get_gameObject(v150, 0LL);
            if ( !v151 )
              goto LABEL_436;
            UnityEngine_GameObject__SetActive(v151, 0, 0LL);
            v152 = (UnityEngine_Component_o *)this->fields.mCostItemIcon1;
            if ( !v152 )
              goto LABEL_436;
            v153 = UnityEngine_Component__get_gameObject(v152, 0LL);
            if ( !v153 )
              goto LABEL_436;
            UnityEngine_GameObject__SetActive(v153, 0, 0LL);
            v154 = (UnityEngine_Component_o *)this->fields.mCostItemIcon2;
            if ( !v154 )
              goto LABEL_436;
            v155 = UnityEngine_Component__get_gameObject(v154, 0LL);
            if ( !v155 )
              goto LABEL_436;
            UnityEngine_GameObject__SetActive(v155, 0, 0LL);
            v156 = (UnityEngine_Component_o *)this->fields.mCostItemIcon3;
            if ( !v156 )
              goto LABEL_436;
            v157 = UnityEngine_Component__get_gameObject(v156, 0LL);
            if ( !v157 )
              goto LABEL_436;
            UnityEngine_GameObject__SetActive(v157, 0, 0LL);
            v158 = (UnityEngine_Component_o *)this->fields.mCostRpSp;
            if ( !v158 )
              goto LABEL_436;
            v159 = UnityEngine_Component__get_gameObject(v158, 0LL);
            if ( !v159 )
              goto LABEL_436;
            UnityEngine_GameObject__SetActive(v159, 1, 0LL);
            v160 = (UIWidget_o *)this->fields.mCostRpSp;
            if ( !v160 )
              goto LABEL_436;
            v332.fields.r = r;
            v332.fields.g = g;
            v332.fields.b = b;
            v332.fields.a = a;
            UIWidget__set_color(v160, v332, 0LL);
            mCostRpPointSp = (UIWidget_o *)this->fields.mCostRpPointSp;
            if ( !mCostRpPointSp )
              goto LABEL_436;
            v333.fields.r = r;
            v333.fields.g = g;
            v333.fields.b = b;
            v333.fields.a = a;
            UIWidget__set_color(mCostRpPointSp, v333, 0LL);
            v164 = BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v164 = BalanceConfig_TypeInfo;
            }
            static_fields = v164->static_fields;
            UserId = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
            v167 = this->fields.mCostRpSp;
            BpExpresssionType = static_fields->BpExpresssionType;
            if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
              UserId = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
            }
            v169 = *(_QWORD *)(*(_QWORD *)(UserId + 184) + 888LL);
            if ( !v169 )
              goto LABEL_436;
            if ( (unsigned int)BpExpresssionType >= *(_DWORD *)(v169 + 24) )
              goto LABEL_438;
            if ( !v167 )
              goto LABEL_436;
            UISprite__set_spriteName(v167, *(System_String_o **)(v169 + 8 * BpExpresssionType + 32), 0LL);
            RP_SPNAME_POINT = QuestBoardListViewItemDraw_TypeInfo->static_fields->RP_SPNAME_POINT;
            if ( !RP_SPNAME_POINT )
              goto LABEL_436;
            if ( (unsigned int)BpExpresssionType >= RP_SPNAME_POINT->max_length )
              goto LABEL_438;
            v171 = this->fields.mCostRpPointSp;
            if ( !v171 )
              goto LABEL_436;
            UISprite__set_spriteName(v171, RP_SPNAME_POINT->m_Items[BpExpresssionType], 0LL);
            v172 = this->fields.mCostRpSp;
            if ( !v172 )
              goto LABEL_436;
            ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v172->klass->vtable._33_MakePixelPerfect.method)(
              v172,
              v172->klass->vtable._34_get_minWidth.methodPtr);
            v173 = this->fields.mCostRpPointSp;
            if ( !v173 )
              goto LABEL_436;
            ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v173->klass->vtable._33_MakePixelPerfect.method)(
              v173,
              v173->klass->vtable._34_get_minWidth.methodPtr);
            break;
          case 3:
            if ( !v48 )
              break;
            v95 = (UnityEngine_Component_o *)this->fields.mCostApSp;
            if ( !v95 )
              goto LABEL_436;
            v96 = UnityEngine_Component__get_gameObject(v95, 0LL);
            if ( !v96 )
              goto LABEL_436;
            UnityEngine_GameObject__SetActive(v96, 0, 0LL);
            v97 = (UnityEngine_Component_o *)this->fields.mCostRpSp;
            if ( !v97 )
              goto LABEL_436;
            v98 = UnityEngine_Component__get_gameObject(v97, 0LL);
            if ( !v98 )
              goto LABEL_436;
            UnityEngine_GameObject__SetActive(v98, 0, 0LL);
            v99 = (UnityEngine_Component_o *)this->fields.mCostItemIcon1;
            if ( !v99 )
              goto LABEL_437;
            v100 = UnityEngine_Component__get_gameObject(v99, 0LL);
            if ( !v100 )
              goto LABEL_437;
            UnityEngine_GameObject__SetActive(v100, 1, 0LL);
            v104 = v48->fields.itemIds;
            if ( !v104 )
              goto LABEL_437;
            if ( !v104->max_length )
              goto LABEL_439;
            v105 = this->fields.mCostItemIcon1;
            if ( !v105 )
              goto LABEL_437;
            ItemIconComponent__SetItem(v105, v104->m_Items[1], -1, 0LL);
            v106 = this->fields.mCostItemIcon1;
            if ( !v106 )
              goto LABEL_437;
            v330.fields.r = r;
            v330.fields.g = g;
            v330.fields.b = b;
            v330.fields.a = a;
            ItemIconComponent__SetColor(v106, v330, 0LL);
            IsAvailableAt = QuestConsumeItemEntity__IsAvailableAt(v48, 1, 0LL);
            if ( !this->fields.mCostItemIcon2 )
              goto LABEL_437;
            v108 = IsAvailableAt;
            v109 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.mCostItemIcon2, 0LL);
            v110 = v109;
            if ( v108 )
            {
              v111 = QuestBoardListViewItemDraw_TypeInfo;
              if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
                v111 = QuestBoardListViewItemDraw_TypeInfo;
              }
              GameObjectExtensions__SetLocalPositionX(
                v110,
                (float)v111->static_fields->COST_2_ICON_NORMAL_POSITION_X,
                0LL);
              if ( !*p_mCostLb2 )
                goto LABEL_437;
              v112 = UnityEngine_Component__get_gameObject(*p_mCostLb2, 0LL);
              GameObjectExtensions__SetLocalPositionX(
                v112,
                (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_NORMAL_POSITION_X,
                0LL);
              v113 = v48->fields.itemIds;
              if ( !v113 )
                goto LABEL_437;
              if ( v113->max_length <= 1 )
                goto LABEL_439;
              v114 = v113->m_Items[2];
              v115 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v115 = BalanceConfig_TypeInfo;
              }
              if ( v114 == v115->static_fields->ItemIdQp )
              {
                *v320 = 1;
                v116 = this->fields.mCostObj;
                if ( !v116 )
                  goto LABEL_437;
                v117 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       v116,
                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
                }
                if ( !v117 )
                  goto LABEL_437;
                UIWidget__set_width(
                  v117,
                  QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_DOUBLE_QP,
                  0LL);
                mCostBg1 = (UnityEngine_Component_o *)this->fields.mCostBg1;
                if ( !mCostBg1 )
                  goto LABEL_437;
                v119 = UnityEngine_Component__get_gameObject(mCostBg1, 0LL);
                if ( !v119 )
                  goto LABEL_437;
                UnityEngine_GameObject__SetActive(v119, 1, 0LL);
                v120 = (UnityEngine_Component_o *)this->fields.mCostBg2;
                if ( !v120 )
                  goto LABEL_437;
                v121 = UnityEngine_Component__get_gameObject(v120, 0LL);
                if ( !v121 )
                  goto LABEL_437;
                UnityEngine_GameObject__SetActive(v121, 1, 0LL);
                v122 = (UnityEngine_Component_o *)this->fields.mCostBg1;
                if ( !v122 )
                  goto LABEL_437;
                Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                            v122,
                                            (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
                if ( !Component_WebViewObject )
                  goto LABEL_437;
                UISprite__set_spriteName(
                  (UISprite_o *)Component_WebViewObject,
                  QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_ITEM,
                  0LL);
                v124 = (UnityEngine_Component_o *)this->fields.mCostBg2;
                if ( !v124 )
                  goto LABEL_437;
                v125 = UnityEngine_Component__GetComponent_WebViewObject_(
                         v124,
                         (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
                if ( !v125 )
                  goto LABEL_437;
                UISprite__set_spriteName(
                  (UISprite_o *)v125,
                  QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_QP,
                  0LL);
                v126 = (UnityEngine_Component_o *)this->fields.mCostItemIcon2;
                if ( !v126 )
                  goto LABEL_437;
                v127 = UnityEngine_Component__get_gameObject(v126, 0LL);
                GameObjectExtensions__SetLocalPositionX(
                  v127,
                  (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_ICON_QP_POSITION_X,
                  0LL);
                if ( !*p_mCostLb2 )
                  goto LABEL_437;
                v128 = UnityEngine_Component__get_gameObject(*p_mCostLb2, 0LL);
                GameObjectExtensions__SetLocalPositionX(
                  v128,
                  (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_QP_POSITION_X,
                  0LL);
              }
              v129 = (UnityEngine_Component_o *)this->fields.mCostItemIcon2;
              if ( !v129 )
                goto LABEL_437;
              v130 = UnityEngine_Component__get_gameObject(v129, 0LL);
              if ( !v130 )
                goto LABEL_437;
              UnityEngine_GameObject__SetActive(v130, 1, 0LL);
              v131 = v48->fields.itemIds;
              if ( !v131 )
                goto LABEL_437;
              if ( v131->max_length <= 1 )
                goto LABEL_439;
              v132 = this->fields.mCostItemIcon2;
              if ( !v132 )
                goto LABEL_437;
              ItemIconComponent__SetItem(v132, v131->m_Items[2], -1, 0LL);
              v133 = this->fields.mCostItemIcon2;
              if ( !v133 )
                goto LABEL_437;
              v331.fields.r = r;
              v331.fields.g = g;
              v331.fields.b = b;
              v331.fields.a = a;
              ItemIconComponent__SetColor(v133, v331, 0LL);
            }
            else
            {
              if ( !v109 )
                goto LABEL_437;
              UnityEngine_GameObject__SetActive(v109, 0, 0LL);
            }
            if ( QuestConsumeItemEntity__IsAvailableAt(v48, 2, 0LL) )
            {
              v272 = (UnityEngine_Component_o *)this->fields.mCostLb1;
              if ( !v272 )
                goto LABEL_437;
              v273 = UnityEngine_Component__get_gameObject(v272, 0LL);
              v274 = QuestBoardListViewItemDraw_TypeInfo;
              v275 = v273;
              if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
                v274 = QuestBoardListViewItemDraw_TypeInfo;
              }
              GameObjectExtensions__SetLocalPositionX(
                v275,
                (float)v274->static_fields->COST_1_LABEL_NORMAL_POSITION_X_FOR_ALL_ITEM,
                0LL);
              v276 = (UnityEngine_Component_o *)this->fields.mCostItemIcon2;
              if ( !v276 )
                goto LABEL_437;
              v277 = UnityEngine_Component__get_gameObject(v276, 0LL);
              GameObjectExtensions__SetLocalPositionX(
                v277,
                (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_ICON_NORMAL_POSITION_X_FOR_ALL_ITEM,
                0LL);
              if ( !*p_mCostLb2 )
                goto LABEL_437;
              v278 = UnityEngine_Component__get_gameObject(*p_mCostLb2, 0LL);
              GameObjectExtensions__SetLocalPositionX(
                v278,
                (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_NORMAL_POSITION_X_FOR_ALL_ITEM,
                0LL);
              v279 = (UnityEngine_Component_o *)this->fields.mCostItemIcon3;
              if ( !v279 )
                goto LABEL_437;
              v280 = UnityEngine_Component__get_gameObject(v279, 0LL);
              GameObjectExtensions__SetLocalPositionX(
                v280,
                (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_3_ICON_NORMAL_POSITION_X_FOR_ALL_ITEM,
                0LL);
              v281 = (UnityEngine_Component_o *)this->fields.mCostLb3;
              if ( !v281 )
                goto LABEL_437;
              v282 = UnityEngine_Component__get_gameObject(v281, 0LL);
              GameObjectExtensions__SetLocalPositionX(
                v282,
                (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_3_LABEL_NORMAL_POSITION_X_FOR_ALL_ITEM,
                0LL);
              v283 = (UnityEngine_Component_o *)this->fields.mCostItemIcon3;
              if ( !v283 )
                goto LABEL_437;
              v284 = UnityEngine_Component__get_gameObject(v283, 0LL);
              if ( !v284 )
                goto LABEL_437;
              UnityEngine_GameObject__SetActive(v284, 1, 0LL);
              v285 = v48->fields.itemIds;
              if ( !v285 )
                goto LABEL_437;
              if ( v285->max_length > 2 )
              {
                v286 = this->fields.mCostItemIcon3;
                if ( !v286 )
                  goto LABEL_437;
                ItemIconComponent__SetItem(v286, v285->m_Items[3], -1, 0LL);
                v88 = this->fields.mCostItemIcon3;
                if ( !v88 )
                  goto LABEL_437;
LABEL_76:
                v329.fields.r = r;
                v329.fields.g = g;
                v329.fields.b = b;
                v329.fields.a = a;
                ItemIconComponent__SetColor(v88, v329, 0LL);
                break;
              }
LABEL_439:
              sub_B17100(v101, v102, v103);
              sub_B170A0();
            }
            v271 = (UnityEngine_Component_o *)this->fields.mCostItemIcon3;
            if ( !v271 )
              goto LABEL_437;
            goto LABEL_365;
          case 4:
            v134 = (UnityEngine_Component_o *)this->fields.mCostRpSp;
            if ( !v134 )
              goto LABEL_437;
            v135 = UnityEngine_Component__get_gameObject(v134, 0LL);
            if ( !v135 )
              goto LABEL_437;
            UnityEngine_GameObject__SetActive(v135, 0, 0LL);
            v136 = (UnityEngine_Component_o *)this->fields.mCostItemIcon1;
            if ( !v136 )
              goto LABEL_437;
            v137 = UnityEngine_Component__get_gameObject(v136, 0LL);
            if ( !v137 )
              goto LABEL_437;
            UnityEngine_GameObject__SetActive(v137, 0, 0LL);
            v138 = (UnityEngine_Component_o *)this->fields.mCostItemIcon2;
            if ( !v138 )
              goto LABEL_437;
            v139 = UnityEngine_Component__get_gameObject(v138, 0LL);
            if ( !v139 )
              goto LABEL_437;
            UnityEngine_GameObject__SetActive(v139, 0, 0LL);
            v140 = (UnityEngine_Component_o *)this->fields.mCostItemIcon3;
            if ( !v140 )
              goto LABEL_437;
            v141 = UnityEngine_Component__get_gameObject(v140, 0LL);
            if ( !v141 )
              goto LABEL_437;
            UnityEngine_GameObject__SetActive(v141, 0, 0LL);
            v142 = (UnityEngine_Component_o *)this->fields.mCostApSp;
            if ( !v142 )
              goto LABEL_437;
            v143 = UnityEngine_Component__get_gameObject(v142, 0LL);
            if ( !v143 )
              goto LABEL_437;
            UnityEngine_GameObject__SetActive(v143, 1, 0LL);
            v144 = (UnityEngine_Behaviour_o *)this->fields.mCostApSp;
            if ( !v144 )
              goto LABEL_437;
            UnityEngine_Behaviour__set_enabled(v144, 1, 0LL);
            v146 = questEnt->fields.bannerId;
            v147 = this->fields.mCostApSp;
            if ( v146 < 1 )
            {
              if ( !v147 )
                goto LABEL_437;
              UISprite__set_atlas(this->fields.mCostApSp, this->fields.mTerminalAtlas, 0LL);
              v101 = QuestBoardListViewItemDraw_TypeInfo;
              v243 = this->fields.mCostApSp;
              if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
                v101 = QuestBoardListViewItemDraw_TypeInfo;
              }
              QuestBoardApSpNames = v101->static_fields->QuestBoardApSpNames;
              if ( !QuestBoardApSpNames )
                goto LABEL_437;
              if ( (unsigned int)v321 >= QuestBoardApSpNames->max_length )
                goto LABEL_439;
              if ( !v243 )
                goto LABEL_437;
              UISprite__set_spriteName(v243, QuestBoardApSpNames->m_Items[v321], 0LL);
            }
            else
            {
              if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
              }
              v148 = QuestBoardListViewItemDraw__GetApSpriteFileName(v146, v145);
              if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !AtlasManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              }
              v149 = AtlasManager__SetEventUI(v147, v148, 0LL);
              if ( !v147 )
                goto LABEL_437;
              UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v147, v149, 0LL);
            }
            v245 = this->fields.mCostApSp;
            if ( !v245 )
              goto LABEL_437;
            ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v245->klass->vtable._33_MakePixelPerfect.method)(
              v245,
              v245->klass->vtable._34_get_minWidth.methodPtr);
            v246 = (UIWidget_o *)this->fields.mCostApSp;
            if ( !v246 )
              goto LABEL_437;
            v341.fields.r = r;
            v341.fields.g = g;
            v341.fields.b = b;
            v341.fields.a = a;
            UIWidget__set_color(v246, v341, 0LL);
            if ( !v48 )
              break;
            v247 = (UnityEngine_Component_o *)this->fields.mCostRpSp;
            if ( !v247 )
              goto LABEL_437;
            v248 = UnityEngine_Component__get_gameObject(v247, 0LL);
            if ( !v248 )
              goto LABEL_437;
            UnityEngine_GameObject__SetActive(v248, 0, 0LL);
            v249 = (UnityEngine_Component_o *)this->fields.mCostItemIcon2;
            if ( !v249 )
              goto LABEL_437;
            v250 = UnityEngine_Component__get_gameObject(v249, 0LL);
            if ( !v250 )
              goto LABEL_437;
            UnityEngine_GameObject__SetActive(v250, 1, 0LL);
            v251 = v48->fields.itemIds;
            if ( !v251 )
              goto LABEL_437;
            if ( !v251->max_length )
              goto LABEL_439;
            v252 = this->fields.mCostItemIcon2;
            if ( !v252 )
              goto LABEL_437;
            ItemIconComponent__SetItem(v252, v251->m_Items[1], -1, 0LL);
            v253 = this->fields.mCostItemIcon2;
            if ( !v253 )
              goto LABEL_437;
            v342.fields.r = r;
            v342.fields.g = g;
            v342.fields.b = b;
            v342.fields.a = a;
            ItemIconComponent__SetColor(v253, v342, 0LL);
            v254 = (UnityEngine_Component_o *)this->fields.mCostItemIcon2;
            if ( !v254 )
              goto LABEL_437;
            v255 = UnityEngine_Component__get_gameObject(v254, 0LL);
            v256 = QuestBoardListViewItemDraw_TypeInfo;
            v257 = v255;
            if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
              v256 = QuestBoardListViewItemDraw_TypeInfo;
            }
            GameObjectExtensions__SetLocalPositionX(
              v257,
              (float)v256->static_fields->COST_2_ICON_NORMAL_POSITION_X,
              0LL);
            if ( !*p_mCostLb2 )
              goto LABEL_437;
            v258 = UnityEngine_Component__get_gameObject(*p_mCostLb2, 0LL);
            GameObjectExtensions__SetLocalPositionX(
              v258,
              (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_NORMAL_POSITION_X,
              0LL);
            v259 = v48->fields.itemIds;
            if ( !v259 )
              goto LABEL_437;
            if ( !v259->max_length )
              goto LABEL_439;
            v260 = v259->m_Items[1];
            v261 = BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v261 = BalanceConfig_TypeInfo;
            }
            if ( v260 == v261->static_fields->ItemIdQp )
            {
              *v320 = 1;
              v262 = this->fields.mCostObj;
              if ( !v262 )
                goto LABEL_437;
              v263 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     v262,
                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
              if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
              }
              if ( !v263 )
                goto LABEL_437;
              UIWidget__set_width(
                v263,
                QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_DOUBLE_QP,
                0LL);
              v264 = (UnityEngine_Component_o *)this->fields.mCostBg2;
              if ( !v264 )
                goto LABEL_437;
              v265 = UnityEngine_Component__get_gameObject(v264, 0LL);
              if ( !v265 )
                goto LABEL_437;
              UnityEngine_GameObject__SetActive(v265, 1, 0LL);
              v266 = (UnityEngine_Component_o *)this->fields.mCostBg2;
              if ( !v266 )
                goto LABEL_437;
              v267 = UnityEngine_Component__GetComponent_WebViewObject_(
                       v266,
                       (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
              if ( !v267 )
                goto LABEL_437;
              UISprite__set_spriteName(
                (UISprite_o *)v267,
                QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_QP,
                0LL);
              v268 = (UnityEngine_Component_o *)this->fields.mCostItemIcon2;
              if ( !v268 )
                goto LABEL_437;
              v269 = UnityEngine_Component__get_gameObject(v268, 0LL);
              GameObjectExtensions__SetLocalPositionX(
                v269,
                (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_ICON_QP_POSITION_X,
                0LL);
              if ( !*p_mCostLb2 )
                goto LABEL_437;
              v270 = UnityEngine_Component__get_gameObject(*p_mCostLb2, 0LL);
              GameObjectExtensions__SetLocalPositionX(
                v270,
                (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_QP_POSITION_X,
                0LL);
            }
            if ( !QuestConsumeItemEntity__IsAvailableAt(v48, 1, 0LL) )
              break;
            v271 = (UnityEngine_Component_o *)this->fields.mCostItemIcon2;
            if ( !v271 )
              goto LABEL_437;
LABEL_365:
            v174 = UnityEngine_Component__get_gameObject(v271, 0LL);
            if ( !v174 )
              goto LABEL_437;
LABEL_366:
            UnityEngine_GameObject__SetActive(v174, 0, 0LL);
            break;
          default:
            v174 = this->fields.mCostObj;
            if ( !v174 )
              goto LABEL_437;
            goto LABEL_366;
        }
      }
      else
      {
        v73 = (UnityEngine_Component_o *)this->fields.mCostApSp;
        if ( !v73 )
          goto LABEL_437;
        v74 = UnityEngine_Component__get_gameObject(v73, 0LL);
        if ( !v74 )
          goto LABEL_437;
        UnityEngine_GameObject__SetActive(v74, 0, 0LL);
        v75 = (UnityEngine_Component_o *)this->fields.mCostRpSp;
        if ( !v75 )
          goto LABEL_437;
        v76 = UnityEngine_Component__get_gameObject(v75, 0LL);
        if ( !v76 )
          goto LABEL_437;
        UnityEngine_GameObject__SetActive(v76, 0, 0LL);
        v77 = (UnityEngine_Component_o *)this->fields.mCostItemIcon1;
        if ( !v77 )
          goto LABEL_437;
        v78 = UnityEngine_Component__get_gameObject(v77, 0LL);
        if ( !v78 )
          goto LABEL_437;
        UnityEngine_GameObject__SetActive(v78, 1, 0LL);
        v79 = (UnityEngine_Component_o *)this->fields.mCostItemIcon2;
        if ( !v79 )
          goto LABEL_437;
        v80 = UnityEngine_Component__get_gameObject(v79, 0LL);
        if ( !v80 )
          goto LABEL_437;
        UnityEngine_GameObject__SetActive(v80, 0, 0LL);
        v81 = (UnityEngine_Component_o *)this->fields.mCostItemIcon3;
        if ( !v81 )
          goto LABEL_437;
        v82 = UnityEngine_Component__get_gameObject(v81, 0LL);
        if ( !v82 )
          goto LABEL_437;
        UnityEngine_GameObject__SetActive(v82, 0, 0LL);
        v83 = this->fields.mCostItemIcon1;
        if ( !v83 )
          goto LABEL_437;
        ItemIconComponent__SetItemImage(v83, 99, 0LL);
        v84 = this->fields.mCostItemIcon1;
        if ( !v84 )
          goto LABEL_437;
        v328.fields.r = r;
        v328.fields.g = g;
        v328.fields.b = b;
        v328.fields.a = a;
        ItemIconComponent__SetColor(v84, v328, 0LL);
        if ( v48 && QuestConsumeItemEntity__IsAvailableAt(v48, 1, 0LL) )
        {
          v85 = (UnityEngine_Component_o *)this->fields.mCostItemIcon2;
          if ( !v85 )
            goto LABEL_437;
          v86 = UnityEngine_Component__get_gameObject(v85, 0LL);
          if ( !v86 )
            goto LABEL_437;
          UnityEngine_GameObject__SetActive(v86, 1, 0LL);
          v87 = this->fields.mCostItemIcon2;
          if ( !v87 )
            goto LABEL_437;
          ItemIconComponent__SetItemImage(v87, 99, 0LL);
          v88 = this->fields.mCostItemIcon2;
          if ( !v88 )
            goto LABEL_437;
          goto LABEL_76;
        }
      }
      v287 = this->fields.mCostLb1;
      if ( !v287 )
        goto LABEL_437;
      UILabel__set_overflowMethod(v287, 0, 0LL);
      if ( !*p_mCostLb2 )
        goto LABEL_437;
      UILabel__set_overflowMethod((UILabel_o *)*p_mCostLb2, 0, 0LL);
      v288 = this->fields.mCostLb3;
      if ( !v288 )
        goto LABEL_437;
      UILabel__set_overflowMethod(v288, 0, 0LL);
      v289 = (UnityEngine_Component_o *)this->fields.mCostLb1;
      if ( !v289 )
        goto LABEL_437;
      v290 = UnityEngine_Component__get_gameObject(v289, 0LL);
      one = UnityEngine_Vector3__get_one(0LL);
      GameObjectExtensions__SetLocalScale(v290, one, 0LL);
      if ( !*p_mCostLb2 )
        goto LABEL_437;
      v291 = UnityEngine_Component__get_gameObject(*p_mCostLb2, 0LL);
      v326 = UnityEngine_Vector3__get_one(0LL);
      GameObjectExtensions__SetLocalScale(v291, v326, 0LL);
      v292 = (UnityEngine_Component_o *)this->fields.mCostLb3;
      if ( !v292 )
        goto LABEL_437;
      v293 = UnityEngine_Component__get_gameObject(v292, 0LL);
      v327 = UnityEngine_Vector3__get_one(0LL);
      GameObjectExtensions__SetLocalScale(v293, v327, 0LL);
      v294 = (UIWidget_o *)this->fields.mCostLb1;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      }
      if ( !v294 )
        goto LABEL_437;
      UIWidget__set_width(v294, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_1_LABEL_DEFAULT_WIDTH, 0LL);
      if ( !*p_mCostLb2 )
        goto LABEL_437;
      UIWidget__set_width(
        (UIWidget_o *)*p_mCostLb2,
        QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_DEFAULT_WIDTH,
        0LL);
      v295 = (UIWidget_o *)this->fields.mCostLb3;
      if ( !v295 )
        goto LABEL_437;
      UIWidget__set_width(v295, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_3_LABEL_DEFAULT_WIDTH, 0LL);
      v296 = this->fields.mCostLb1;
      if ( !v296 )
        goto LABEL_437;
      UILabel__set_spacingX(v296, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_DEFAULT_SPACING, 0LL);
      if ( !*p_mCostLb2 )
        goto LABEL_437;
      UILabel__set_spacingX(
        (UILabel_o *)*p_mCostLb2,
        QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_DEFAULT_SPACING,
        0LL);
      v297 = this->fields.mCostLb3;
      if ( !v297 )
        goto LABEL_437;
      UILabel__set_spacingX(v297, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_DEFAULT_SPACING, 0LL);
      if ( !*v320 )
      {
        if ( !*v318 )
          return;
        v298 = this->fields.mCostLb1;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        }
        if ( v298 )
        {
          UILabel__set_spacingX(
            v298,
            QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_SPACING_FOR_THREE_ITEM,
            0LL);
          if ( *p_mCostLb2 )
          {
            UILabel__set_spacingX(
              (UILabel_o *)*p_mCostLb2,
              QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_SPACING_FOR_THREE_ITEM,
              0LL);
            v299 = this->fields.mCostLb3;
            if ( v299 )
            {
              UILabel__set_spacingX(
                v299,
                QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_SPACING_FOR_THREE_ITEM,
                0LL);
              v300 = this->fields.mCostLb1;
              if ( v300 )
              {
                UILabel__set_overflowMethod(v300, 2, 0LL);
                if ( *p_mCostLb2 )
                {
                  UILabel__set_overflowMethod((UILabel_o *)*p_mCostLb2, 2, 0LL);
                  v301 = this->fields.mCostLb3;
                  if ( v301 )
                  {
                    UILabel__set_overflowMethod(v301, 2, 0LL);
                    v302 = this->fields.mCostLb1;
                    if ( v302 )
                    {
                      ((void (__fastcall *)(struct UILabel_o *, Il2CppMethodPointer))v302->klass->vtable._33_MakePixelPerfect.method)(
                        v302,
                        v302->klass->vtable._34_get_minWidth.methodPtr);
                      if ( *p_mCostLb2 )
                      {
                        ((void (__fastcall *)(UnityEngine_Component_o *, void *))(*p_mCostLb2)->klass[2]._1.typeMetadataHandle)(
                          *p_mCostLb2,
                          (*p_mCostLb2)->klass[2]._1.interopData);
                        v303 = this->fields.mCostLb3;
                        if ( v303 )
                        {
                          ((void (__fastcall *)(struct UILabel_o *, Il2CppMethodPointer))v303->klass->vtable._33_MakePixelPerfect.method)(
                            v303,
                            v303->klass->vtable._34_get_minWidth.methodPtr);
                          v304 = this->fields.mCostLb1;
                          if ( v304 )
                          {
                            UILabel__SetCondensedScale_40440812(
                              v304,
                              QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_WIDTH_FOR_THREE_ITEM,
                              0LL);
                            if ( *p_mCostLb2 )
                            {
                              UILabel__SetCondensedScale_40440812(
                                (UILabel_o *)*p_mCostLb2,
                                QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_WIDTH_FOR_THREE_ITEM,
                                0LL);
                              v305 = this->fields.mCostLb3;
                              if ( v305 )
                              {
                                UILabel__SetCondensedScale_40440812(
                                  v305,
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
        sub_B170D4();
      }
      if ( m_stringLength >= 3
        && (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      }
      if ( v55 >= 8
        && (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      }
      return;
    case 4:
      if ( !SelfUserGame )
        goto LABEL_436;
      v195 = v90 > SelfUserGame->fields.actMax || v90 > UserGameEntity__getAct(SelfUserGame, 0LL);
      v204 = this->fields.mCostLb1;
      v205 = System_Int32__ToString((int32_t)&v324, 0LL);
      v337.fields.r = r;
      v337.fields.g = g;
      v337.fields.b = b;
      v337.fields.a = a;
      QuestBoardListViewItemDraw__SetCostLabel(
        (QuestBoardListViewItemDraw_o *)v205,
        v204,
        v205,
        costCalcVal,
        v337,
        v195,
        isClosed,
        fixedVal >= 0,
        v206);
      v207 = (UnityEngine_Component_o *)this->fields.mCostLb2;
      if ( !v207 )
        goto LABEL_436;
      v208 = UnityEngine_Component__get_gameObject(v207, 0LL);
      if ( !v208 )
        goto LABEL_436;
      UnityEngine_GameObject__SetActive(v208, 0, 0LL);
      v209 = (UnityEngine_Component_o *)this->fields.mCostLb3;
      if ( !v209 )
        goto LABEL_436;
      v210 = UnityEngine_Component__get_gameObject(v209, 0LL);
      if ( !v210 )
        goto LABEL_436;
      UnityEngine_GameObject__SetActive(v210, 0, 0LL);
      if ( v48 && QuestConsumeItemEntity__IsAvailableAt(v48, 0, 0LL) )
      {
        *isDoubleItemConsume = 1;
        v211 = this->fields.mCostObj;
        if ( !v211 )
          goto LABEL_436;
        v212 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               v211,
                               (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        }
        if ( !v212 )
          goto LABEL_436;
        UIWidget__set_width(v212, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_DOUBLE, 0LL);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        v213 = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserItemMaster___);
        v214 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ItemMaster___);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        UserId = NetworkManager__get_UserId(0LL);
        v215 = v48->fields.itemIds;
        if ( !v215 )
          goto LABEL_436;
        if ( v215->max_length )
        {
          if ( !v213 )
            goto LABEL_436;
          UserId = UserItemMaster__TryGetEntity(v213, &usrItem, UserId, v215->m_Items[1], 0LL);
          v216 = v48->fields.itemIds;
          if ( !v216 )
            goto LABEL_436;
          if ( v216->max_length )
          {
            if ( !v214 )
              goto LABEL_436;
            v217 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v214,
                     v216->m_Items[1],
                     (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            if ( !*p_mCostLb2 )
              goto LABEL_436;
            v218 = (ItemEntity_o *)v217;
            v219 = UnityEngine_Component__get_gameObject(*p_mCostLb2, 0LL);
            if ( !v219 )
              goto LABEL_436;
            UnityEngine_GameObject__SetActive(v219, 1, 0LL);
            v221 = v48->fields.nums;
            if ( !v221 )
              goto LABEL_436;
            if ( v221->max_length )
            {
              v338.fields.r = r;
              v338.fields.g = g;
              v338.fields.b = b;
              v338.fields.a = a;
              QuestBoardListViewItemDraw__SetCostLabelItem(
                (QuestBoardListViewItemDraw_o *)UserId,
                (UILabel_o *)*p_mCostLb2,
                v221->m_Items[1],
                usrItem,
                v218,
                v338,
                isClosed,
                v220);
              v222 = v48->fields.nums;
              if ( !v222 )
                goto LABEL_436;
              if ( v222->max_length )
              {
                v223 = System_Int32__ToString((int)v222 + 32, 0LL);
                if ( !v223 )
                  goto LABEL_436;
                v55 = v223->fields.m_stringLength;
                if ( QuestConsumeItemEntity__IsAvailableAt(v48, 1, 0LL) )
                {
                  v224 = (UnityEngine_Component_o *)this->fields.mCostLb1;
                  if ( !v224 )
                    goto LABEL_436;
                  v225 = UnityEngine_Component__get_gameObject(v224, 0LL);
                  if ( !v225 )
                    goto LABEL_436;
                  UnityEngine_GameObject__SetActive(v225, 0, 0LL);
                  if ( !*p_mCostLb2 )
                    goto LABEL_436;
                  v226 = UnityEngine_Component__get_gameObject(*p_mCostLb2, 0LL);
                  if ( !v226 )
                    goto LABEL_436;
                  UnityEngine_GameObject__SetActive(v226, 0, 0LL);
                  v227 = (UnityEngine_Component_o *)this->fields.mCostLb3;
                  if ( !v227 )
                    goto LABEL_436;
                  v228 = UnityEngine_Component__get_gameObject(v227, 0LL);
                  if ( !v228 )
                    goto LABEL_436;
                  UnityEngine_GameObject__SetActive(v228, 0, 0LL);
                  v48 = 0LL;
                }
                goto LABEL_35;
              }
            }
          }
        }
        goto LABEL_438;
      }
      v198 = (UnityEngine_Component_o *)this->fields.mCostLb1;
      if ( !v198 )
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
  if ( (byte_40FC704 & 1) == 0 )
  {
    sub_B16FFC(&QuestBoardListViewItemDraw_TypeInfo, label);
    byte_40FC704 = 1;
  }
  if ( !label )
    sub_B170D4();
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
      v23 = UnityEngine_Color__op_Multiply_40667136(static_fields->CAMPAIGN_COST_COLOR, 0.5, 0LL);
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
      v24 = UnityEngine_Color__op_Multiply_40667136(v22->OVER_COST_COLOR, 0.5, 0LL);
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
  __int64 v16; // x1
  __int64 v17; // x1
  System_String_o *IsEnable; // x0
  const MethodInfo *v19; // x7
  UserGameEntity_o *SelfUserGame; // x0
  bool v21; // w21
  System_String_o *v22; // x22
  Il2CppObject *v23; // x0
  System_String_o *v24; // x22
  int32_t v25; // w24
  int32_t num; // w8
  int32_t v27; // [xsp+8h] [xbp-58h] BYREF
  int32_t v28; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = baseCol.fields.a;
  b = baseCol.fields.b;
  g = baseCol.fields.g;
  r = baseCol.fields.r;
  v28 = consumeNo;
  if ( (byte_40FC703 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, label);
    sub_B16FFC(&LocalizationManager_TypeInfo, v16);
    sub_B16FFC(&StringLiteral_10856, v17);
    byte_40FC703 = 1;
  }
  IsEnable = System_Int32__ToString((int32_t)&v28, 0LL);
  if ( !itemEnt )
    goto LABEL_16;
  if ( itemEnt->fields.type == 1 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( SelfUserGame )
    {
      v21 = v28 > SelfUserGame->fields.qp;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v22 = LocalizationManager__Get((System_String_o *)StringLiteral_10856, 0LL);
      v27 = v28;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
      IsEnable = System_String__Format(v22, v23, 0LL);
      v24 = IsEnable;
      goto LABEL_15;
    }
LABEL_16:
    sub_B170D4();
  }
  v25 = v28;
  v24 = IsEnable;
  if ( usrItem
    && (IsEnable = (System_String_o *)ItemEntity__IsEnable(itemEnt, 0LL), ((unsigned __int8)IsEnable & 1) != 0) )
  {
    num = usrItem->fields.num;
  }
  else
  {
    num = 0;
  }
  v21 = v25 > num;
LABEL_15:
  v29.fields.r = r;
  v29.fields.g = g;
  v29.fields.b = b;
  v29.fields.a = a;
  QuestBoardListViewItemDraw__SetCostLabel(
    (QuestBoardListViewItemDraw_o *)IsEnable,
    label,
    v24,
    0,
    v29,
    v21,
    isClosed,
    0,
    v19);
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
  il2cpp_array_size_t v7; // w23
  bool v8; // w20
  bool v9; // w21
  ScrollArrowComponent_o *v10; // x0

  mBannerArrows = this->fields.mBannerArrows;
  if ( !mBannerArrows )
    goto LABEL_8;
  max_length = mBannerArrows->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    v8 = isDisp;
    v9 = isForce;
    do
    {
      if ( v7 >= mBannerArrows->max_length )
      {
        sub_B17100(this, isDisp, isForce);
        sub_B170A0();
      }
      v10 = mBannerArrows->m_Items[v7];
      if ( !v10 )
        break;
      ScrollArrowComponent__SetDisp(v10, v8, v9, 0LL);
      if ( (int)++v7 >= max_length )
        return;
      mBannerArrows = this->fields.mBannerArrows;
    }
    while ( mBannerArrows );
LABEL_8:
    sub_B170D4();
  }
}


void __fastcall QuestBoardListViewItemDraw__SetEventTargetAlpha(
        QuestBoardListViewItemDraw_o *this,
        float alpha,
        const MethodInfo *method)
{
  UnityEngine_Object_o *eventTarget; // x20
  UnityEngine_Object_o *eventTargetComponent; // x20
  UnityEngine_GameObject_o *v7; // x0
  BoardOptionEventTargetComponent_o *v8; // x0
  BoardOptionEventTargetComponent_o *v9; // x0

  if ( (byte_40FC712 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FC712 = 1;
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
      v7 = this->fields.eventTarget;
      if ( !v7 )
        goto LABEL_18;
      if ( UnityEngine_GameObject__get_activeSelf(v7, 0LL) )
      {
        v8 = this->fields.eventTargetComponent;
        if ( !v8 )
          goto LABEL_18;
        if ( BoardOptionEventTargetComponent__IsNeedAnim(v8, 0LL) )
        {
          v9 = this->fields.eventTargetComponent;
          if ( v9 )
          {
            BoardOptionEventTargetComponent__SetAlpha(v9, alpha, 0LL);
            return;
          }
LABEL_18:
          sub_B170D4();
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
  __int64 v16; // x1
  UnityEngine_GameObject_o *mLabelFaceObj; // x0
  int32_t charaIconId; // w24
  UISprite_o *mLabelFaceIcon; // x24
  int32_t ServantId; // w25
  int32_t LimitCount; // w26
  UIWidget_o *v22; // x0
  int32_t v23; // w22
  int32_t bannerId; // t1
  QuestBoardListViewItemDraw_c *v25; // x0
  System_String_o *QUEST_BOARD_MASK_SPNAME_PREFIX; // x21
  System_String_o *v27; // x0
  UIAtlas_o *mAtlas; // x0
  UISpriteData_o *Sprite; // x21
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = baseColor.fields.a;
  b = baseColor.fields.b;
  g = baseColor.fields.g;
  r = baseColor.fields.r;
  if ( (byte_40FC702 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, questEnt);
    sub_B16FFC(&QuestBoardListViewItemDraw_TypeInfo, v16);
    byte_40FC702 = 1;
  }
  if ( !questEnt )
    goto LABEL_26;
  mLabelFaceObj = this->fields.mLabelFaceObj;
  if ( !mLabelFaceObj )
    goto LABEL_26;
  charaIconId = questEnt->fields.charaIconId;
  UnityEngine_GameObject__SetActive(mLabelFaceObj, charaIconId > 0, 0LL);
  if ( charaIconId < 1 )
    return 0;
  mLabelFaceIcon = this->fields.mLabelFaceIcon;
  ServantId = QuestEntity__getServantId(questEnt, 0LL);
  LimitCount = QuestEntity__getLimitCount(questEnt, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetFaceImage(mLabelFaceIcon, ServantId, LimitCount, 0LL);
  v22 = (UIWidget_o *)this->fields.mLabelFaceIcon;
  if ( !v22 )
    goto LABEL_26;
  v31.fields.r = r;
  v31.fields.g = g;
  v31.fields.b = b;
  v31.fields.a = a;
  UIWidget__set_color(v22, v31, 0LL);
  if ( !maskSprite )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)maskSprite, 1, 0LL);
  v32.fields.r = r;
  v32.fields.g = g;
  v32.fields.b = b;
  v32.fields.a = a;
  UIWidget__set_color((UIWidget_o *)maskSprite, v32, 0LL);
  bannerId = questEnt->fields.bannerId;
  v23 = (_DWORD)questEnt + 64;
  if ( bannerId < 1 )
  {
    UISprite__set_atlas(maskSprite, this->fields.mTerminalAtlas, 0LL);
    UISprite__set_spriteName(maskSprite, maskSpriteName, 0LL);
  }
  else
  {
    v25 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v25 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_MASK_SPNAME_PREFIX = v25->static_fields->QUEST_BOARD_MASK_SPNAME_PREFIX;
    v27 = System_Int32__ToString(v23, 0LL);
    maskSpriteName = System_String__Concat_43743732(QUEST_BOARD_MASK_SPNAME_PREFIX, v27, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(maskSprite, maskSpriteName, 0LL);
  }
  mAtlas = maskSprite->fields.mAtlas;
  if ( !mAtlas )
    goto LABEL_26;
  Sprite = UIAtlas__GetSprite(mAtlas, maskSpriteName, 0LL);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)maskSprite, Sprite != 0LL, 0LL);
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)maskSprite, 0LL) )
  {
    if ( Sprite )
    {
      Sprite->fields.width = maskWidth - 1;
      return 1;
    }
LABEL_26:
    sub_B170D4();
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

  if ( (byte_40FC710 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, method);
    byte_40FC710 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  if ( mInfoTextList && mInfoTextList->fields._size > 1 )
  {
    mOptionInfoLb = this->fields.mOptionInfoLb;
    if ( !mOptionInfoLb )
LABEL_11:
      sub_B170D4();
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x21
  int32_t info_kind_k__BackingField; // w23
  QuestEntity_o *v13; // x0
  UnityEngine_GameObject_o *gameObject; // x22
  UnityEngine_Object_o *mEarthLine; // x22
  const MethodInfo *v16; // x1
  QuestBoardListViewEarthLine_o *v17; // x0
  UnityEngine_GameObject_o *mOptionSecondBattleInformationObj; // x0
  struct QuestBoardListViewMultiSecondBattleInformation_o *Component_srcLineSprite; // x0
  QuestBoardListViewMultiSecondBattleInformation_o **p_secondBattleInformation; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_Behaviour_o *secondBattleInformation; // x0
  struct System_Collections_Generic_List_UISprite__o *mMultiSecondBattleInformation; // x0
  UnityEngine_Component_o *mOptionPreBattleSp; // x0
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_Component_o *mCostConsumeBattleWinSp; // x0
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_Component_o *mcBaseP; // x0
  UnityEngine_GameObject_o *v34; // x0
  UIWidget_o *v35; // x22
  int v36; // s0
  UnityEngine_Behaviour_o *v40; // x0
  UnityEngine_GameObject_o *mStatusObj; // x0
  __int64 v42; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  struct UnityEngine_GameObject_array *mStatusSp; // x22
  int max_length; // w8
  unsigned int v47; // w25
  UnityEngine_GameObject_o *v48; // x0
  UnityEngine_GameObject_o *mBannerRoot; // x0
  UnityEngine_GameObject_o *mNoticeNumberRoot; // x0
  UnityEngine_Component_o *mNextSp; // x0
  UnityEngine_GameObject_o *v52; // x0
  UnityEngine_Component_o *mPrevSp; // x0
  UnityEngine_GameObject_o *v54; // x0
  UnityEngine_GameObject_o *mClassIconRoot; // x0
  UnityEngine_GameObject_o *mNoBattleObj; // x0
  UnityEngine_Component_o *mRarePrismSp; // x0
  UnityEngine_GameObject_o *v58; // x0
  UnityEngine_GameObject_o *mQuestInfoBtn; // x0
  UnityEngine_GameObject_o *mQuestInfoShowing; // x0
  UnityEngine_Component_o *mDamageRecordSp; // x0
  UnityEngine_GameObject_o *v62; // x0
  UnityEngine_Component_o *mKnockdownRecordSp; // x0
  UnityEngine_GameObject_o *v64; // x0
  UnityEngine_GameObject_o *blackMarkSpace; // x0
  UnityEngine_Component_o *mBoardMessage; // x0
  UnityEngine_GameObject_o *v67; // x0
  UnityEngine_GameObject_o *eventTarget; // x0
  UnityEngine_GameObject_o *alloutRoot; // x0
  UnityEngine_GameObject_o *mCostObj; // x22
  QuestBoardListViewItemDraw_c *v71; // x0
  UnityEngine_GameObject_o *v72; // x0
  UIWidget_o *v73; // x0
  UnityEngine_Component_o *mCostApSp; // x0
  UnityEngine_GameObject_o *v75; // x0
  UnityEngine_Component_o *mCostLb1; // x0
  UnityEngine_GameObject_o *v77; // x0
  UnityEngine_Component_o *mShohiSp; // x0
  UnityEngine_GameObject_o *v79; // x0
  UISprite_o *v80; // x0
  UnityEngine_Object_o *eventTargetComponent; // x22
  const MethodInfo *v82; // x2
  const MethodInfo *v83; // x7
  BoardOptionEventTargetComponent_o *v84; // x0
  UnityEngine_GameObject_o *v85; // x19
  struct MapControl_AreaBoardInfo_o *AreaBoardInfo_k__BackingField; // x8
  struct MapControl_AreaBoardInfo_o *v87; // x8
  MapControl_QuestInfo_o *v88; // x0
  QuestEntity_o *Mine; // x0
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FC6E0 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewMultiSecondBattleInformation___,
      questBoardItem);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_UISprite__Clear__, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&QuestBoardListViewItemDraw_TypeInfo, v10);
    byte_40FC6E0 = 1;
  }
  if ( questBoardItem )
  {
    quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
    if ( quest_info_k__BackingField
      && ((info_kind_k__BackingField = questBoardItem->fields._info_kind_k__BackingField,
           v13 = MapControl_QuestInfo__GetMine(questBoardItem->fields._quest_info_k__BackingField, 0LL),
           (info_kind_k__BackingField | 4) == 4)
       || v13) )
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
          v17 = this->fields.mEarthLine;
          if ( !v17 )
            goto LABEL_85;
          QuestBoardListViewEarthLine__Hide(v17, v16);
        }
        mOptionSecondBattleInformationObj = this->fields.mOptionSecondBattleInformationObj;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_85;
        Component_srcLineSprite = (struct QuestBoardListViewMultiSecondBattleInformation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                               mOptionSecondBattleInformationObj,
                                                                                               (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewMultiSecondBattleInformation___);
        p_secondBattleInformation = &this->fields.secondBattleInformation;
        this->fields.secondBattleInformation = Component_srcLineSprite;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.secondBattleInformation,
          (System_Int32_array **)Component_srcLineSprite,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26);
        secondBattleInformation = (UnityEngine_Behaviour_o *)this->fields.secondBattleInformation;
        if ( !secondBattleInformation )
          goto LABEL_85;
        UnityEngine_Behaviour__set_enabled(secondBattleInformation, 0, 0LL);
        if ( !*p_secondBattleInformation )
          goto LABEL_85;
        QuestBoardListViewMultiSecondBattleInformation__Reset(*p_secondBattleInformation, 0LL);
        mMultiSecondBattleInformation = this->fields.mMultiSecondBattleInformation;
        if ( !mMultiSecondBattleInformation )
          goto LABEL_85;
        System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)mMultiSecondBattleInformation,
          (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_UISprite__Clear__);
        mOptionPreBattleSp = (UnityEngine_Component_o *)this->fields.mOptionPreBattleSp;
        if ( !mOptionPreBattleSp )
          goto LABEL_85;
        v30 = UnityEngine_Component__get_gameObject(mOptionPreBattleSp, 0LL);
        if ( !v30 )
          goto LABEL_85;
        UnityEngine_GameObject__SetActive(v30, 0, 0LL);
        mCostConsumeBattleWinSp = (UnityEngine_Component_o *)this->fields.mCostConsumeBattleWinSp;
        if ( !mCostConsumeBattleWinSp )
          goto LABEL_85;
        v32 = UnityEngine_Component__get_gameObject(mCostConsumeBattleWinSp, 0LL);
        if ( !v32 )
          goto LABEL_85;
        UnityEngine_GameObject__SetActive(v32, 0, 0LL);
        mcBaseP = (UnityEngine_Component_o *)this->fields.mcBaseP;
        if ( !mcBaseP )
          goto LABEL_85;
        v34 = UnityEngine_Component__get_gameObject(mcBaseP, 0LL);
        if ( !v34 )
          goto LABEL_85;
        UnityEngine_GameObject__SetActive(v34, 1, 0LL);
        v35 = (UIWidget_o *)this->fields.mcBaseP;
        *(UnityEngine_Color_o *)&v36 = UnityEngine_Color__get_white(0LL);
        if ( !v35
          || (UIWidget__set_color(v35, *(UnityEngine_Color_o *)&v36, 0LL),
              (v40 = (UnityEngine_Behaviour_o *)this->fields.mcBaseP) == 0LL)
          || (UnityEngine_Behaviour__set_enabled(v40, 1, 0LL), (mStatusObj = this->fields.mStatusObj) == 0LL)
          || (UnityEngine_GameObject__SetActive(mStatusObj, 1, 0LL), (mStatusSp = this->fields.mStatusSp) == 0LL) )
        {
LABEL_85:
          sub_B170D4();
        }
        max_length = mStatusSp->max_length;
        if ( max_length >= 1 )
        {
          v47 = 0;
          do
          {
            if ( v47 >= max_length )
            {
              sub_B17100(v42, v43, v44);
              sub_B170A0();
            }
            v48 = mStatusSp->m_Items[v47];
            if ( !v48 )
              goto LABEL_85;
            UnityEngine_GameObject__SetActive(v48, 0, 0LL);
            max_length = mStatusSp->max_length;
          }
          while ( (int)++v47 < max_length );
        }
        mBannerRoot = this->fields.mBannerRoot;
        if ( !mBannerRoot )
          goto LABEL_85;
        UnityEngine_GameObject__SetActive(mBannerRoot, 0, 0LL);
        mNoticeNumberRoot = this->fields.mNoticeNumberRoot;
        if ( !mNoticeNumberRoot )
          goto LABEL_85;
        UnityEngine_GameObject__SetActive(mNoticeNumberRoot, 0, 0LL);
        mNextSp = (UnityEngine_Component_o *)this->fields.mNextSp;
        if ( !mNextSp )
          goto LABEL_85;
        v52 = UnityEngine_Component__get_gameObject(mNextSp, 0LL);
        if ( !v52 )
          goto LABEL_85;
        UnityEngine_GameObject__SetActive(v52, 0, 0LL);
        mPrevSp = (UnityEngine_Component_o *)this->fields.mPrevSp;
        if ( !mPrevSp )
          goto LABEL_85;
        v54 = UnityEngine_Component__get_gameObject(mPrevSp, 0LL);
        if ( !v54 )
          goto LABEL_85;
        UnityEngine_GameObject__SetActive(v54, 0, 0LL);
        mClassIconRoot = this->fields.mClassIconRoot;
        if ( !mClassIconRoot )
          goto LABEL_85;
        UnityEngine_GameObject__SetActive(mClassIconRoot, 0, 0LL);
        mNoBattleObj = this->fields.mNoBattleObj;
        if ( !mNoBattleObj )
          goto LABEL_85;
        UnityEngine_GameObject__SetActive(mNoBattleObj, 0, 0LL);
        mRarePrismSp = (UnityEngine_Component_o *)this->fields.mRarePrismSp;
        if ( !mRarePrismSp )
          goto LABEL_85;
        v58 = UnityEngine_Component__get_gameObject(mRarePrismSp, 0LL);
        if ( !v58 )
          goto LABEL_85;
        UnityEngine_GameObject__SetActive(v58, 0, 0LL);
        mQuestInfoBtn = this->fields.mQuestInfoBtn;
        if ( !mQuestInfoBtn )
          goto LABEL_85;
        UnityEngine_GameObject__SetActive(mQuestInfoBtn, 0, 0LL);
        mQuestInfoShowing = this->fields.mQuestInfoShowing;
        if ( !mQuestInfoShowing )
          goto LABEL_85;
        UnityEngine_GameObject__SetActive(mQuestInfoShowing, 0, 0LL);
        mDamageRecordSp = (UnityEngine_Component_o *)this->fields.mDamageRecordSp;
        if ( !mDamageRecordSp )
          goto LABEL_85;
        v62 = UnityEngine_Component__get_gameObject(mDamageRecordSp, 0LL);
        if ( !v62 )
          goto LABEL_85;
        UnityEngine_GameObject__SetActive(v62, 0, 0LL);
        mKnockdownRecordSp = (UnityEngine_Component_o *)this->fields.mKnockdownRecordSp;
        if ( !mKnockdownRecordSp )
          goto LABEL_85;
        v64 = UnityEngine_Component__get_gameObject(mKnockdownRecordSp, 0LL);
        if ( !v64 )
          goto LABEL_85;
        UnityEngine_GameObject__SetActive(v64, 0, 0LL);
        blackMarkSpace = this->fields.blackMarkSpace;
        if ( !blackMarkSpace )
          goto LABEL_85;
        UnityEngine_GameObject__SetActive(blackMarkSpace, 0, 0LL);
        mBoardMessage = (UnityEngine_Component_o *)this->fields.mBoardMessage;
        if ( !mBoardMessage )
          goto LABEL_85;
        v67 = UnityEngine_Component__get_gameObject(mBoardMessage, 0LL);
        if ( !v67 )
          goto LABEL_85;
        UnityEngine_GameObject__SetActive(v67, 0, 0LL);
        eventTarget = this->fields.eventTarget;
        if ( !eventTarget )
          goto LABEL_85;
        UnityEngine_GameObject__SetActive(eventTarget, 0, 0LL);
        alloutRoot = this->fields.alloutRoot;
        if ( !alloutRoot )
          goto LABEL_85;
        UnityEngine_GameObject__SetActive(alloutRoot, 0, 0LL);
        mCostObj = this->fields.mCostObj;
        v71 = QuestBoardListViewItemDraw_TypeInfo;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v71 = QuestBoardListViewItemDraw_TypeInfo;
        }
        GameObjectExtensions__SetLocalPosition(mCostObj, v71->static_fields->COST_OBJ_POS, 0LL);
        v72 = this->fields.mCostObj;
        if ( !v72 )
          goto LABEL_85;
        v73 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              v72,
                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !v73 )
          goto LABEL_85;
        UIWidget__set_width(v73, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_SINGLE, 0LL);
        mCostApSp = (UnityEngine_Component_o *)this->fields.mCostApSp;
        if ( !mCostApSp )
          goto LABEL_85;
        v75 = UnityEngine_Component__get_gameObject(mCostApSp, 0LL);
        GameObjectExtensions__SetLocalPosition(
          v75,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_1_ICON_AP_POS,
          0LL);
        mCostLb1 = (UnityEngine_Component_o *)this->fields.mCostLb1;
        if ( !mCostLb1 )
          goto LABEL_85;
        v77 = UnityEngine_Component__get_gameObject(mCostLb1, 0LL);
        GameObjectExtensions__SetLocalPosition(
          v77,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_1_LABEL_AP_POS,
          0LL);
        mShohiSp = (UnityEngine_Component_o *)this->fields.mShohiSp;
        if ( !mShohiSp )
          goto LABEL_85;
        v79 = UnityEngine_Component__get_gameObject(mShohiSp, 0LL);
        GameObjectExtensions__SetLocalPosition(
          v79,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->SHOHI_SP_POS,
          0LL);
        v80 = this->fields.mShohiSp;
        if ( !v80 )
          goto LABEL_85;
        UISprite__set_spriteName(v80, QuestBoardListViewItemDraw_TypeInfo->static_fields->SHOHI_SP_NAME, 0LL);
        eventTargetComponent = (UnityEngine_Object_o *)this->fields.eventTargetComponent;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(eventTargetComponent, 0LL, 0LL) )
        {
          v84 = this->fields.eventTargetComponent;
          if ( !v84 )
            goto LABEL_85;
          BoardOptionEventTargetComponent__DestroyList(v84, 0LL);
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
            QuestBoardListViewItemDraw__SetItemOfShortcut(this, questBoardItem, v82);
            return;
          case 4:
            v87 = quest_info_k__BackingField->fields._AreaBoardInfo_k__BackingField;
            if ( !v87 )
              goto LABEL_84;
            if ( v87->fields.questBoardType == 2 )
LABEL_78:
              QuestBoardListViewItemDraw__SetItemOfArea(this, questBoardItem, 1, 1, 0, 0, 0, v83);
            else
LABEL_75:
              QuestBoardListViewItemDraw__SetItemOfFolder(this, questBoardItem, v82);
            break;
          case 5:
            QuestBoardListViewItemDraw__SetItemOfWarBoard(this, questBoardItem, v82);
            return;
          case 6:
            v88 = questBoardItem->fields._quest_info_k__BackingField;
            if ( !v88 )
              goto LABEL_85;
            Mine = MapControl_QuestInfo__GetMine(v88, 0LL);
            if ( !Mine )
              goto LABEL_85;
            if ( QuestEntity__HasFlag(Mine, 0x800000000000000LL, 0LL) )
              QuestBoardListViewItemDraw__SetItemOfRecollectionQuest(this, questBoardItem, v82);
            else
LABEL_84:
              QuestBoardListViewItemDraw__SetItemOfQuest(this, questBoardItem, v82);
            break;
          default:
            return;
        }
      }
    }
    else
    {
      v85 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      zero = UnityEngine_Vector3__get_zero(0LL);
      GameObjectExtensions__SetLocalScale(v85, zero, 0LL);
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
  QuestBoardListViewItem_o *v11; // x21
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
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x8
  MapControl_AreaBoardInfo_o *AreaBoardInfo_k__BackingField; // x22
  int32_t questBoardType; // w23
  EventEntity_o *eventEnt; // x28
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  struct ListViewManager_o *manager; // x0
  __int64 v35; // x9
  int32_t warId; // w20
  QuestTree_o *v37; // x0
  int32_t v38; // w26
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  MapControl_WarInfo_o *v40; // x27
  int v41; // w20
  UnityEngine_GameObject_o *mLabelObj; // x0
  UnityEngine_GameObject_o *mTitleObj; // x0
  UnityEngine_GameObject_o *mOptionObj; // x0
  UnityEngine_Component_o *mOptionInfoLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *mOptionRestrinctionLb; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *v50; // x0
  UnityEngine_GameObject_o *mRewardObj; // x0
  UnityEngine_GameObject_o *mPhaseObj; // x0
  UnityEngine_GameObject_o *mChallengeObj; // x0
  UnityEngine_GameObject_o *mCostObj; // x0
  UnityEngine_Component_o *mcBaseP; // x0
  UnityEngine_GameObject_o *v56; // x0
  UnityEngine_GameObject_o *blackMarkSpace; // x0
  UnityEngine_GameObject_o *eventTarget; // x0
  UnityEngine_GameObject_o *alloutRoot; // x0
  UnityEngine_Object_o *eventTargetComponent; // x27
  BoardOptionEventTargetComponent_o *v61; // x0
  clsQuestCheck_o *v62; // x0
  const MethodInfo *v63; // x3
  bool v64; // w24
  il2cpp_array_size_t v65; // w20
  const MethodInfo *v66; // x2
  int32_t v67; // w27
  bool v68; // w26
  QuestTree_o *v69; // x0
  _BOOL8 IsActiveEventWar; // x0
  const MethodInfo *v71; // x4
  int v72; // w21
  bool v73; // w23
  QuestBoardListViewItemDraw_c *v74; // x0
  System_String_o *QBOARD_CAP_CLOSED_SPECIAL_FORMAT; // x28
  Il2CppObject *v76; // x0
  System_String_o *QBOARD_CAP_CLOSED_SPECIAL; // x28
  DataMasterBase_WarMaster__WarEntity__int__o *v78; // x0
  WarEntity_o *v79; // x0
  WarEntity_o *v80; // x26
  QuestBoardListViewItemDraw_c *v81; // x0
  __int64 v82; // x1
  __int64 v83; // x2
  int32_t v84; // w23
  QuestBoardListViewItemDraw_c *v85; // x8
  struct System_String_array *msQBoardL1Names; // x8
  System_String_o *v87; // x28
  Il2CppObject *v88; // x0
  const MethodInfo *v89; // x5
  ScrTerminalListTop_c *v90; // x8
  struct ScrTerminalListTop_StaticFields *static_fields; // x9
  QuestBoardListViewItemDraw_c *v92; // x0
  bool v93; // w20
  bool v94; // w23
  System_String_o *EventAddBannerSpriteName; // x0
  bool v96; // zf
  ScrTerminalListTop_c *v97; // x0
  int32_t v98; // w21
  clsQuestCheck_o *v99; // x25
  clsQuestCheck_o *v100; // x25
  bool v101; // w23
  QuestBoardListViewItemDraw_c *v102; // x0
  System_String_o **p_QBOARD_CAP_CLOSED_SPECIAL_2; // x8
  QuestBoardListViewItemDraw_c *v104; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x2
  bool v107; // w4
  QuestBoardListViewItemDraw_o *v108; // x0
  bool v109; // w3
  QuestBoardListViewItem_o *v110; // x1
  clsQuestCheck_o *v111; // x25
  bool v112; // w0
  QuestBoardListViewItemDraw_c *v113; // x8
  clsQuestCheck_o *v114; // x25
  clsQuestCheck_o *v115; // x25
  ScrTerminalListTop_c *v116; // x0
  int32_t NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID; // w25
  TerminalPramsManager_c *v118; // x0
  ScrTerminalListTop_c *v119; // x8
  int32_t QuestId_k__BackingField; // w21
  TerminalPramsManager_c *v121; // x0
  struct System_String_array *v122; // x8
  System_String_o *v123; // x25
  int32_t bannerId; // w8
  System_Int32_c *v125; // x0
  struct System_String_array *v126; // x8
  Il2CppObject *v127; // x0
  int v128; // w23
  UISprite_o *v129; // x25
  const MethodInfo *v130; // x2
  UIWidget_o *v131; // x25
  int v132; // s0
  int32_t questCount; // w1
  struct UISprite_o *v137; // x0
  UnityEngine_Component_o **p_mOptionInfoLb; // x25
  const MethodInfo *v139; // x3
  int32_t v140; // w1
  QuestBoardListViewItemDraw_c *v141; // x0
  const MethodInfo *v142; // x2
  const MethodInfo *v143; // x3
  const MethodInfo *v144; // x3
  const MethodInfo *v145; // x3
  UnityEngine_Component_o *v146; // x0
  UnityEngine_GameObject_o *v147; // x0
  bool v148; // w1
  UnityEngine_Component_o *v149; // x0
  UnityEngine_GameObject_o *v150; // x0
  UnityEngine_Component_o *mNextSp; // x0
  UnityEngine_GameObject_o *v152; // x0
  const MethodInfo *v153; // x3
  int32_t status; // w1
  QuestBoardListViewItemDraw_c *v155; // x0
  UnityEngine_Component_o *mRarePrismSp; // x0
  UnityEngine_GameObject_o *v157; // x0
  UnityEngine_Transform_o *v158; // x0
  UnityEngine_Component_o *v159; // x0
  UnityEngine_GameObject_o *v160; // x0
  UnityEngine_GameObject_o *v161; // x0
  bool v162; // w21
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x20
  int32_t size; // w1
  struct QuestBoardListViewObject_o *v165; // x8
  QuestBoardListViewManager_o *v166; // x0
  __int64 v167; // x10
  const MethodInfo *v168; // x3
  int32_t AlphaAnimCnt; // w21
  QuestBoardInformaionText_o *v170; // x0
  BoardOptionTextWithIconComponent_o *v171; // x0
  UnityEngine_Transform_o *v172; // x0
  UnityEngine_Component_o *v173; // x0
  UnityEngine_GameObject_o *v174; // x0
  UnityEngine_GameObject_o *v175; // x0
  UnityEngine_Object_o *mEarthLine; // x21
  const MethodInfo *v177; // x3
  QuestBoardListViewItemDraw_c *v178; // x0
  QuestBoardListViewEarthLine_o *v179; // x21
  int32_t v180; // [xsp+8h] [xbp-98h]
  bool v181; // [xsp+Ch] [xbp-94h]
  bool v183; // [xsp+14h] [xbp-8Ch]
  int64_t checkTime; // [xsp+18h] [xbp-88h]
  bool IsPurchasedByRarePrism; // [xsp+24h] [xbp-7Ch]
  QuestBoardListViewItem_o *questBoardItema; // [xsp+28h] [xbp-78h]
  bool v188; // [xsp+34h] [xbp-6Ch]
  _BOOL4 IsClosedWar; // [xsp+38h] [xbp-68h]
  _BOOL4 IsMainInterlude; // [xsp+3Ch] [xbp-64h]
  WarEntity_o *warEnt; // [xsp+40h] [xbp-60h]
  int32_t PrioredBannerId; // [xsp+4Ch] [xbp-54h] BYREF

  v11 = questBoardItem;
  if ( (byte_40FC6E2 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, questBoardItem);
    sub_B16FFC(&Method_DataManager_GetMaster_WarMaster___, v13);
    sub_B16FFC(&DataManager_TypeInfo, v14);
    sub_B16FFC(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v15);
    sub_B16FFC(&int_TypeInfo, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__, v18);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v19);
    sub_B16FFC(&QuestBoardListViewItemDraw_TypeInfo, v20);
    sub_B16FFC(&QuestBoardListViewManager_TypeInfo, v21);
    sub_B16FFC(&ScrTerminalListTop_TypeInfo, v22);
    sub_B16FFC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v23);
    sub_B16FFC(&Method_SingletonTemplate_QuestTree__get_Instance__, v24);
    sub_B16FFC(&SingletonTemplate_QuestTree__TypeInfo, v25);
    sub_B16FFC(&SingletonTemplate_clsQuestCheck__TypeInfo, v26);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v27);
    sub_B16FFC(&StringLiteral_1, v28);
    byte_40FC6E2 = 1;
  }
  if ( !v11 )
    goto LABEL_306;
  quest_info_k__BackingField = v11->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_306;
  v188 = isBadgeDisp;
  AreaBoardInfo_k__BackingField = quest_info_k__BackingField->fields._AreaBoardInfo_k__BackingField;
  v183 = isWhiteMarkOnly;
  if ( !AreaBoardInfo_k__BackingField )
    goto LABEL_306;
  questBoardType = AreaBoardInfo_k__BackingField->fields.questBoardType;
  eventEnt = AreaBoardInfo_k__BackingField->fields.eventEnt;
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_306;
  manager = mListViewObject->fields.manager;
  if ( !manager )
    goto LABEL_306;
  v35 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v35
    || (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[v35 - 1] != QuestBoardListViewManager_TypeInfo )
  {
    sub_B173C8(manager);
LABEL_308:
    sub_B173C8(v166);
    goto LABEL_309;
  }
  warId = AreaBoardInfo_k__BackingField->fields.warId;
  v181 = isSpecialClosedBanner;
  checkTime = (int64_t)manager[1].fields.rightItem;
  if ( warId < 1 )
  {
    v38 = AreaBoardInfo_k__BackingField->fields.warId;
    v41 = 0;
    v40 = 0LL;
LABEL_19:
    warEnt = 0LL;
    goto LABEL_20;
  }
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  v37 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !v37 )
    goto LABEL_306;
  v38 = warId;
  WarInfoByWarID = QuestTree__mfGetWarInfoByWarID(v37, warId, 0LL);
  v40 = WarInfoByWarID;
  if ( !WarInfoByWarID )
  {
    v41 = 0;
    goto LABEL_19;
  }
  v41 = 1;
  warEnt = MapControl_WarInfo__GetMine(WarInfoByWarID, 0LL);
LABEL_20:
  mLabelObj = this->fields.mLabelObj;
  if ( !mLabelObj )
    goto LABEL_306;
  UnityEngine_GameObject__SetActive(mLabelObj, 0, 0LL);
  mTitleObj = this->fields.mTitleObj;
  if ( !mTitleObj )
    goto LABEL_306;
  UnityEngine_GameObject__SetActive(mTitleObj, 0, 0LL);
  mOptionObj = this->fields.mOptionObj;
  if ( !mOptionObj )
    goto LABEL_306;
  UnityEngine_GameObject__SetActive(mOptionObj, 1, 0LL);
  mOptionInfoLb = (UnityEngine_Component_o *)this->fields.mOptionInfoLb;
  if ( !mOptionInfoLb )
    goto LABEL_306;
  gameObject = UnityEngine_Component__get_gameObject(mOptionInfoLb, 0LL);
  if ( !gameObject )
    goto LABEL_306;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  mOptionRestrinctionLb = (UnityEngine_Component_o *)this->fields.mOptionRestrinctionLb;
  if ( !mOptionRestrinctionLb )
    goto LABEL_306;
  transform = UnityEngine_Component__get_transform(mOptionRestrinctionLb, 0LL);
  if ( !transform )
    goto LABEL_306;
  parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !parent )
    goto LABEL_306;
  v50 = UnityEngine_Component__get_gameObject(parent, 0LL);
  if ( !v50 )
    goto LABEL_306;
  UnityEngine_GameObject__SetActive(v50, 0, 0LL);
  mRewardObj = this->fields.mRewardObj;
  if ( !mRewardObj )
    goto LABEL_306;
  UnityEngine_GameObject__SetActive(mRewardObj, 0, 0LL);
  mPhaseObj = this->fields.mPhaseObj;
  if ( !mPhaseObj )
    goto LABEL_306;
  UnityEngine_GameObject__SetActive(mPhaseObj, 0, 0LL);
  mChallengeObj = this->fields.mChallengeObj;
  if ( !mChallengeObj )
    goto LABEL_306;
  UnityEngine_GameObject__SetActive(mChallengeObj, 0, 0LL);
  mCostObj = this->fields.mCostObj;
  if ( !mCostObj )
    goto LABEL_306;
  UnityEngine_GameObject__SetActive(mCostObj, 0, 0LL);
  mcBaseP = (UnityEngine_Component_o *)this->fields.mcBaseP;
  if ( !mcBaseP )
    goto LABEL_306;
  v56 = UnityEngine_Component__get_gameObject(mcBaseP, 0LL);
  if ( !v56 )
    goto LABEL_306;
  UnityEngine_GameObject__SetActive(v56, questBoardType != 1, 0LL);
  if ( warEnt )
  {
    IsMainInterlude = WarEntity__IsMainInterlude(warEnt, 0LL);
    if ( v41 )
    {
LABEL_37:
      if ( !v40 )
        goto LABEL_306;
      IsClosedWar = MapControl_WarInfo__IsClosedWar(v40, 0LL);
      goto LABEL_41;
    }
  }
  else
  {
    IsMainInterlude = 0;
    if ( v41 )
      goto LABEL_37;
  }
  IsClosedWar = 0;
LABEL_41:
  blackMarkSpace = this->fields.blackMarkSpace;
  if ( !blackMarkSpace )
    goto LABEL_306;
  UnityEngine_GameObject__SetActive(blackMarkSpace, 0, 0LL);
  eventTarget = this->fields.eventTarget;
  if ( !eventTarget )
    goto LABEL_306;
  UnityEngine_GameObject__SetActive(eventTarget, 0, 0LL);
  alloutRoot = this->fields.alloutRoot;
  if ( !alloutRoot )
    goto LABEL_306;
  UnityEngine_GameObject__SetActive(alloutRoot, 0, 0LL);
  eventTargetComponent = (UnityEngine_Object_o *)this->fields.eventTargetComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(eventTargetComponent, 0LL, 0LL) )
  {
    v61 = this->fields.eventTargetComponent;
    if ( !v61 )
      goto LABEL_306;
    BoardOptionEventTargetComponent__DestroyList(v61, 0LL);
  }
  questBoardItema = v11;
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  v62 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !v62 )
LABEL_306:
    sub_B170D4();
  v64 = questBoardType == 2 && eventEnt != 0LL;
  v65 = questBoardType - 1;
  IsPurchasedByRarePrism = QuestBoardListViewItemDraw__IsPurchasedByRarePrism(
                             (QuestBoardListViewItemDraw_o *)v62,
                             (System_Collections_Generic_List_MapControl_QuestInfo__o *)v62->fields.cQuestReleaseListP,
                             warEnt,
                             v63);
  if ( questBoardType == 1 )
  {
    QuestBoardListViewItemDraw__SetupBanner(this, v11, v66);
    v67 = v38;
    v68 = v188;
    goto LABEL_243;
  }
  if ( questBoardType == 2 && eventEnt != 0LL )
  {
    if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
    }
    v69 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !v69 )
      goto LABEL_306;
    v67 = v38;
    IsActiveEventWar = QuestTree__IsActiveEventWar(v69, v38, 0LL);
    LOBYTE(v65) = (IsPurchasedByRarePrism || !IsMainInterlude) && IsActiveEventWar;
    if ( (v65 & 1) != 0 )
    {
      v72 = IsClosedWar;
    }
    else
    {
      v72 = IsClosedWar;
      if ( IsMainInterlude )
        v72 = AreaBoardInfo_k__BackingField->fields.status == 2 || IsClosedWar;
    }
    EventAddBannerSpriteName = QuestBoardListViewItemDraw__GetEventAddBannerSpriteName(
                                 (QuestBoardListViewItemDraw_o *)IsActiveEventWar,
                                 eventEnt,
                                 v38,
                                 v72 | v65 & 1,
                                 v71);
    v96 = v72 == 0;
    v11 = questBoardItema;
    QBOARD_CAP_CLOSED_SPECIAL = EventAddBannerSpriteName;
    goto LABEL_230;
  }
  if ( AreaBoardInfo_k__BackingField->fields.status == 6 && questBoardType == 2 )
  {
    if ( warEnt )
    {
      v73 = v181;
      v74 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v74 = QuestBoardListViewItemDraw_TypeInfo;
      }
      QBOARD_CAP_CLOSED_SPECIAL_FORMAT = v74->static_fields->QBOARD_CAP_CLOSED_SPECIAL_FORMAT;
      PrioredBannerId = WarEntity__GetPrioredBannerId(warEnt, 0LL);
      v76 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId);
      QBOARD_CAP_CLOSED_SPECIAL = System_String__Format(QBOARD_CAP_CLOSED_SPECIAL_FORMAT, v76, 0LL);
    }
    else
    {
      QBOARD_CAP_CLOSED_SPECIAL = (System_String_o *)StringLiteral_1;
      v73 = v181;
    }
    v97 = ScrTerminalListTop_TypeInfo;
    if ( v73 )
    {
      if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
        v98 = v38;
        if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
          v97 = ScrTerminalListTop_TypeInfo;
        }
      }
      else
      {
        v98 = v38;
      }
      v38 = v98;
      v96 = v98 == v97->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_TARGET_WAR_ID;
      v11 = questBoardItema;
      if ( v96 )
        goto LABEL_128;
    }
    if ( (BYTE3(v97->vtable._0_Equals.methodPtr) & 4) != 0 && !v97->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v97);
      v97 = ScrTerminalListTop_TypeInfo;
    }
    if ( v38 != v97->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_TARGET_WAR_ID )
      goto LABEL_119;
    if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
    }
    v99 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    }
    if ( !v99 )
      goto LABEL_306;
    if ( !clsQuestCheck__IsWarClear(
            v99,
            ScrTerminalListTop_TypeInfo->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_START_COND_WAR_ID,
            0LL) )
      goto LABEL_119;
    if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
    }
    v100 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    }
    if ( !v100 )
      goto LABEL_306;
    if ( !clsQuestCheck__IsWarClear(
            v100,
            ScrTerminalListTop_TypeInfo->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_END_COND_WAR_ID,
            0LL) )
    {
LABEL_128:
      v104 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v104 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v101 = v183;
      p_QBOARD_CAP_CLOSED_SPECIAL_2 = &v104->static_fields->QBOARD_CAP_CLOSED_SPECIAL_2;
    }
    else
    {
LABEL_119:
      v101 = v183;
      if ( System_String__op_Inequality(QBOARD_CAP_CLOSED_SPECIAL, (System_String_o *)StringLiteral_1, 0LL) )
      {
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        if ( AtlasManager__IsExistBanner(QBOARD_CAP_CLOSED_SPECIAL, 0LL) )
          goto LABEL_133;
      }
      v102 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v102 = QuestBoardListViewItemDraw_TypeInfo;
      }
      p_QBOARD_CAP_CLOSED_SPECIAL_2 = &v102->static_fields->QBOARD_CAP_CLOSED;
    }
    QBOARD_CAP_CLOSED_SPECIAL = *p_QBOARD_CAP_CLOSED_SPECIAL_2;
LABEL_133:
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_306;
    v67 = v38;
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               Master_WarQuestSelectionMaster,
               v38,
               (const MethodInfo_266F388 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    v107 = v101;
    v108 = this;
    v109 = isBlackMarkOnly;
    v110 = v11;
    goto LABEL_229;
  }
  v67 = v38;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v78 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !v78 )
    goto LABEL_306;
  v79 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v78,
          v38,
          (const MethodInfo_266F388 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( !v79 )
    goto LABEL_306;
  v80 = v79;
  v81 = (QuestBoardListViewItemDraw_c *)WarEntity__GetPrioredBannerId(v79, 0LL);
  v84 = (int)v81;
  v85 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v85 = QuestBoardListViewItemDraw_TypeInfo;
  }
  msQBoardL1Names = v85->static_fields->msQBoardL1Names;
  if ( !msQBoardL1Names )
    goto LABEL_306;
  if ( v65 >= msQBoardL1Names->max_length )
    goto LABEL_309;
  v87 = msQBoardL1Names->m_Items[v65];
  v180 = v84;
  PrioredBannerId = v84;
  v88 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId);
  QBOARD_CAP_CLOSED_SPECIAL = System_String__Format(v87, v88, 0LL);
  v90 = ScrTerminalListTop_TypeInfo;
  if ( v181 )
  {
    if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      v90 = ScrTerminalListTop_TypeInfo;
    }
    static_fields = v90->static_fields;
    if ( v67 == static_fields->AREA_BOARD_FORCE_DISP_TARGET_WAR_ID )
    {
      v92 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
        v94 = isBlackMarkOnly;
        v93 = v183;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v92 = QuestBoardListViewItemDraw_TypeInfo;
        }
      }
      else
      {
        v94 = isBlackMarkOnly;
        v93 = v183;
      }
      QBOARD_CAP_CLOSED_SPECIAL = v92->static_fields->QBOARD_CAP_CLOSED_SPECIAL;
      goto LABEL_228;
    }
    if ( (BYTE3(v90->vtable._0_Equals.methodPtr) & 4) != 0 && !v90->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v90);
      v90 = ScrTerminalListTop_TypeInfo;
      static_fields = ScrTerminalListTop_TypeInfo->static_fields;
    }
    if ( v67 == static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_TARGET_WAR_ID )
    {
      if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
      }
      v111 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      }
      if ( !v111 )
        goto LABEL_306;
      v112 = clsQuestCheck__IsWarClear(
               v111,
               ScrTerminalListTop_TypeInfo->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_END_COND_WAR_ID,
               0LL);
      v113 = QuestBoardListViewItemDraw_TypeInfo;
      if ( v112 )
      {
        v94 = isBlackMarkOnly;
        v93 = v183;
        if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v113 = QuestBoardListViewItemDraw_TypeInfo;
        }
        QBOARD_CAP_CLOSED_SPECIAL = v113->static_fields->QBOARD_CAP_CLOSED_SPECIAL_3;
      }
      else
      {
        v94 = isBlackMarkOnly;
        v93 = v183;
        if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v113 = QuestBoardListViewItemDraw_TypeInfo;
        }
        QBOARD_CAP_CLOSED_SPECIAL = v113->static_fields->QBOARD_CAP_CLOSED_SPECIAL_2;
      }
      goto LABEL_228;
    }
  }
  if ( (BYTE3(v90->vtable._0_Equals.methodPtr) & 4) != 0 && !v90->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v90);
    v90 = ScrTerminalListTop_TypeInfo;
  }
  if ( v67 != v90->static_fields->NT2_EFFECT_AREA_BOARD_TARGET_WAR_ID )
    goto LABEL_217;
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v114 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  }
  if ( !v114 )
    goto LABEL_306;
  if ( clsQuestCheck__IsWarClear(
         v114,
         ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_TARGET_WAR_ID,
         0LL) )
  {
    goto LABEL_217;
  }
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v115 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  }
  if ( !v115 )
    goto LABEL_306;
  if ( !clsQuestCheck__IsQuestClear(
          v115,
          ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_QUEST_ID,
          0,
          0LL) )
    goto LABEL_217;
  v116 = ScrTerminalListTop_TypeInfo;
  if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v116 = ScrTerminalListTop_TypeInfo;
  }
  NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID = v116->static_fields->NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( TerminalPramsManager__IsTerminalEffectPlayed(NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID, 0LL) )
    goto LABEL_217;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6057 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v82);
    byte_40F6057 = 1;
  }
  v118 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v118 = TerminalPramsManager_TypeInfo;
  }
  v119 = ScrTerminalListTop_TypeInfo;
  QuestId_k__BackingField = v118->static_fields->_QuestId_k__BackingField;
  if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v119 = ScrTerminalListTop_TypeInfo;
  }
  v96 = QuestId_k__BackingField == v119->static_fields->NT2_EFFECT_AREA_BOARD_QUEST_ID;
  v11 = questBoardItema;
  if ( !v96 )
    goto LABEL_217;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6058 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v82);
    byte_40F6058 = 1;
  }
  v121 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v11 = questBoardItema;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v121 = TerminalPramsManager_TypeInfo;
    }
  }
  else
  {
    v11 = questBoardItema;
  }
  if ( v121->static_fields->_PhaseCnt_k__BackingField != 2 )
  {
LABEL_217:
    v94 = isBlackMarkOnly;
    v93 = v183;
    if ( isBoardDisp && v188 && !isBlackMarkOnly && !v183 )
      goto LABEL_228;
    v81 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v81 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v126 = v81->static_fields->msQBoardL1Names;
    if ( !v126 )
      goto LABEL_306;
    if ( v126->max_length > 1 )
    {
      v123 = v126->m_Items[1];
      v125 = int_TypeInfo;
      bannerId = v180;
      goto LABEL_227;
    }
LABEL_309:
    sub_B17100(v81, v82, v83);
    sub_B170A0();
  }
  v81 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v81 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v94 = isBlackMarkOnly;
  v93 = v183;
  v122 = v81->static_fields->msQBoardL1Names;
  if ( !v122 )
    goto LABEL_306;
  if ( v122->max_length <= 1 )
    goto LABEL_309;
  v123 = v122->m_Items[1];
  bannerId = v80->fields.bannerId;
  v125 = int_TypeInfo;
LABEL_227:
  PrioredBannerId = bannerId;
  v127 = (Il2CppObject *)j_il2cpp_value_box_0(v125, &PrioredBannerId);
  QBOARD_CAP_CLOSED_SPECIAL = System_String__Format(v123, v127, 0LL);
LABEL_228:
  v109 = v94;
  v107 = v93;
  v108 = this;
  v110 = v11;
  Entity = v80;
LABEL_229:
  QuestBoardListViewItemDraw__SetBlackMarkAndWhiteMark(v108, v110, Entity, v109, v107, v89);
  LOBYTE(v65) = 0;
  v96 = !IsClosedWar;
LABEL_230:
  v128 = !v96;
  v129 = this->fields.mcBaseP;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(v129, QBOARD_CAP_CLOSED_SPECIAL, 0LL);
  v68 = v188;
  if ( v128 )
  {
    v131 = (UIWidget_o *)this->fields.mcBaseP;
    *(UnityEngine_Color_o *)&v132 = UnityEngine_Color__get_gray(0LL);
    if ( !v131 )
      goto LABEL_306;
    UIWidget__set_color(v131, *(UnityEngine_Color_o *)&v132, 0LL);
  }
  questCount = 0;
  if ( v65 & 1 | !v64 && v188 )
    questCount = AreaBoardInfo_k__BackingField->fields.questCount;
  QuestBoardListViewItemDraw__SetBadge(this, questCount, v130);
LABEL_243:
  v137 = this->fields.mcBaseP;
  if ( !v137 )
    goto LABEL_306;
  p_mOptionInfoLb = (UnityEngine_Component_o **)&this->fields.mOptionInfoLb;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v137->klass->vtable._33_MakePixelPerfect.method)(
    v137,
    v137->klass->vtable._34_get_minWidth.methodPtr);
  if ( !v68 )
  {
    v149 = (UnityEngine_Component_o *)this->fields.mcBaseP;
    if ( v149 )
    {
      v150 = UnityEngine_Component__get_gameObject(v149, 0LL);
      if ( v150 )
      {
        UnityEngine_GameObject__SetActive(v150, isBoardDisp, 0LL);
        mNextSp = (UnityEngine_Component_o *)this->fields.mNextSp;
        if ( mNextSp )
        {
          v152 = UnityEngine_Component__get_gameObject(mNextSp, 0LL);
          if ( v152 )
          {
            UnityEngine_GameObject__SetActive(v152, 0, 0LL);
            status = AreaBoardInfo_k__BackingField->fields.status;
            if ( status && status != 6 )
              QuestBoardListViewItemDraw__SetStatusActive(this, status, 0, v153);
            v155 = QuestBoardListViewItemDraw_TypeInfo;
            if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
              v155 = QuestBoardListViewItemDraw_TypeInfo;
            }
            QuestBoardListViewItemDraw__SetNewIcon(
              this,
              v155->static_fields->NEW_POS_AREA,
              v155->static_fields->NEW_W_AREA,
              v155->static_fields->NEW_H_AREA,
              v153);
            mRarePrismSp = (UnityEngine_Component_o *)this->fields.mRarePrismSp;
            if ( mRarePrismSp )
            {
              v157 = UnityEngine_Component__get_gameObject(mRarePrismSp, 0LL);
              if ( v157 )
              {
                UnityEngine_GameObject__SetActive(v157, IsPurchasedByRarePrism, 0LL);
                if ( *p_mOptionInfoLb )
                {
                  v158 = UnityEngine_Component__get_transform(*p_mOptionInfoLb, 0LL);
                  if ( v158 )
                  {
                    v159 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v158, 0LL);
                    if ( v159 )
                    {
                      v160 = UnityEngine_Component__get_gameObject(v159, 0LL);
                      if ( v160 )
                      {
                        UnityEngine_GameObject__SetActive(v160, 0, 0LL);
                        if ( *p_mOptionInfoLb )
                        {
                          v161 = UnityEngine_Component__get_gameObject(*p_mOptionInfoLb, 0LL);
                          if ( v161 )
                          {
                            UnityEngine_GameObject__SetActive(v161, 0, 0LL);
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
    goto LABEL_306;
  }
  v140 = AreaBoardInfo_k__BackingField->fields.status;
  if ( v140 && v140 != 6 )
    QuestBoardListViewItemDraw__SetStatusActive(this, v140, v65 & 1 | (v140 != 1 || !v64), v139);
  v141 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v141 = QuestBoardListViewItemDraw_TypeInfo;
  }
  QuestBoardListViewItemDraw__SetNewIcon(
    this,
    v141->static_fields->NEW_POS_AREA,
    v141->static_fields->NEW_W_AREA,
    v141->static_fields->NEW_H_AREA,
    v139);
  if ( IsClosedWar && IsMainInterlude )
    QuestBoardListViewItemDraw__SetStatusActive(this, 2, 1, v143);
  QuestBoardListViewItemDraw__SetClearSprite(this, warEnt, v142);
  QuestBoardListViewItemDraw__SetNextSprite(this, AreaBoardInfo_k__BackingField, warEnt, v144);
  QuestBoardListViewItemDraw__CreateInfoTextList(this, v11, checkTime, v145);
  v146 = (UnityEngine_Component_o *)this->fields.mRarePrismSp;
  if ( !v146 )
    goto LABEL_306;
  v147 = UnityEngine_Component__get_gameObject(v146, 0LL);
  if ( !v147 )
    goto LABEL_306;
  v148 = (!IsClosedWar || !IsMainInterlude) && IsPurchasedByRarePrism;
  UnityEngine_GameObject__SetActive(v147, v148, 0LL);
  if ( IsMainInterlude )
    goto LABEL_278;
  mInfoTextList = this->fields.mInfoTextList;
  if ( !mInfoTextList )
    goto LABEL_306;
  size = mInfoTextList->fields._size;
  if ( size < 1 )
  {
LABEL_278:
    v162 = 0;
    goto LABEL_290;
  }
  v165 = this->fields.mListViewObject;
  if ( !v165 )
    goto LABEL_306;
  v166 = (QuestBoardListViewManager_o *)v165->fields.manager;
  if ( !v166 )
    goto LABEL_306;
  v167 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v166->klass->_2.bitflags2 + 1) < (unsigned int)v167
    || (QuestBoardListViewManager_c *)v166->klass->_2.typeHierarchy[v167 - 1] != QuestBoardListViewManager_TypeInfo )
  {
    goto LABEL_308;
  }
  AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt(v166, size, 0LL);
  if ( mInfoTextList->fields._size <= (unsigned int)AlphaAnimCnt )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v170 = mInfoTextList->fields._items->m_Items[AlphaAnimCnt];
  if ( !v170 )
    goto LABEL_306;
  QuestBoardInformaionText__SetTime(v170, &this->fields.mOptionInfoLb, &this->fields.mOptionInfoFrameSp, v168);
  v171 = this->fields.mOptionInfoLb;
  if ( !v171 )
    goto LABEL_306;
  BoardOptionTextWithIconComponent__set_Alpha(v171, 1.0, 0LL);
  v162 = 1;
LABEL_290:
  if ( !*p_mOptionInfoLb )
    goto LABEL_306;
  v172 = UnityEngine_Component__get_transform(*p_mOptionInfoLb, 0LL);
  if ( !v172 )
    goto LABEL_306;
  v173 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v172, 0LL);
  if ( !v173 )
    goto LABEL_306;
  v174 = UnityEngine_Component__get_gameObject(v173, 0LL);
  if ( !v174 )
    goto LABEL_306;
  UnityEngine_GameObject__SetActive(v174, v162, 0LL);
  if ( !*p_mOptionInfoLb )
    goto LABEL_306;
  v175 = UnityEngine_Component__get_gameObject(*p_mOptionInfoLb, 0LL);
  if ( !v175 )
    goto LABEL_306;
  UnityEngine_GameObject__SetActive(v175, v162, 0LL);
  mEarthLine = (UnityEngine_Object_o *)this->fields.mEarthLine;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mEarthLine, 0LL, 0LL) )
  {
    v178 = QuestBoardListViewItemDraw_TypeInfo;
    v179 = this->fields.mEarthLine;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v178 = QuestBoardListViewItemDraw_TypeInfo;
    }
    if ( v179 )
    {
      QuestBoardListViewEarthLine__SetupSecond(
        v179,
        v178->static_fields->LINE_ST_POS_AREA,
        this->fields.mListViewObject,
        v67,
        v177);
      return;
    }
    goto LABEL_306;
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
  int32_t warId; // w25
  QuestTree_o *v24; // x0
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  MapControl_WarInfo_o *v26; // x26
  WarEntity_o *Mine; // x22
  int v28; // w24
  EventEntity_o *v29; // x27
  QuestTree_o *v30; // x0
  _BOOL4 IsActiveEventWar; // w23
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  struct ListViewManager_o *manager; // x0
  __int64 v34; // x9
  int64_t rightItem; // x28
  _BOOL4 IsMainInterlude; // w26
  QuestBoardListViewItemDraw_o *v37; // x0
  const MethodInfo *v38; // x3
  _BOOL4 IsPurchasedByRarePrism; // w27
  UnityEngine_GameObject_o *mLabelObj; // x0
  UnityEngine_GameObject_o *mTitleObj; // x0
  UnityEngine_GameObject_o *mOptionObj; // x0
  UnityEngine_Component_o *mOptionInfoLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *mOptionRestrinctionLb; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *v48; // x0
  UnityEngine_GameObject_o *mRewardObj; // x0
  UnityEngine_GameObject_o *mPhaseObj; // x0
  UnityEngine_GameObject_o *mChallengeObj; // x0
  UnityEngine_GameObject_o *mCostObj; // x0
  const MethodInfo *v53; // x4
  unsigned int status; // w8
  _BOOL4 v55; // w9
  BalanceConfig_c *v56; // x0
  ScrTerminalListTop_c *IsOpenedMainScenarioWar; // x0
  clsQuestCheck_o *v58; // x24
  clsQuestCheck_o *v59; // x24
  clsQuestCheck_o *v60; // x0
  MapControl_RootInfo_o *qrs; // x24
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  __int64 PrioredBannerId; // x0
  __int64 v66; // x1
  __int64 v67; // x2
  int v68; // w24
  QuestBoardListViewItemDraw_c *v69; // x8
  struct System_String_array *msQBoardL1Names; // x8
  System_String_o *v71; // x28
  int *v72; // x1
  QuestBoardListViewItemDraw_c *v73; // x0
  System_String_o *QBOARD_CAP_CLOSED; // x24
  System_String_o *EventAddBannerSpriteName; // x0
  WebViewManager_o *v76; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v77; // x0
  WarEntity_o *v78; // x0
  int v79; // w24
  QuestBoardListViewItemDraw_c *v80; // x8
  struct System_String_array *v81; // x8
  Il2CppObject *v82; // x0
  UISprite_o *mcBaseP; // x28
  UnityEngine_Component_o *v84; // x0
  UnityEngine_GameObject_o *v85; // x0
  struct UISprite_o *v86; // x0
  UnityEngine_Component_o *v87; // x0
  UnityEngine_GameObject_o *v88; // x0
  UIWidget_o *Component_srcLineSprite; // x24
  int v90; // s0
  UIWidget_o *v94; // x24
  int v95; // s0
  UnityEngine_Component_o *mRarePrismSp; // x0
  UnityEngine_GameObject_o *v100; // x0
  bool v101; // w1
  const MethodInfo *v102; // x3
  _BOOL8 HasFlag; // x0
  const MethodInfo *v104; // x4
  int32_t v105; // w1
  QuestBoardListViewItemDraw_c *v106; // x0
  const MethodInfo *v107; // x2
  const MethodInfo *v108; // x3
  const MethodInfo *v109; // x3
  QuestBoardListViewItemDraw_c *v110; // x0
  const MethodInfo *v111; // x2
  const MethodInfo *v112; // x3
  BalanceConfig_c *v113; // x0
  const MethodInfo *v114; // x2
  const MethodInfo *v115; // x3
  const MethodInfo *v116; // x2
  const MethodInfo *v117; // x5
  int32_t questCount; // w1
  const MethodInfo *v119; // x3
  bool v120; // w20
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x21
  int32_t size; // w1
  struct QuestBoardListViewObject_o *v123; // x8
  QuestBoardListViewManager_o *v124; // x0
  __int64 v125; // x10
  const MethodInfo *v126; // x3
  int32_t AlphaAnimCnt; // w20
  QuestBoardInformaionText_o *v128; // x0
  BoardOptionTextWithIconComponent_o *v129; // x0
  UnityEngine_Component_o *v130; // x0
  UnityEngine_Transform_o *v131; // x0
  UnityEngine_Component_o *v132; // x0
  UnityEngine_GameObject_o *v133; // x0
  UnityEngine_Component_o *v134; // x0
  UnityEngine_GameObject_o *v135; // x0
  QuestBoardListViewItemDraw_c *v136; // x0
  System_Collections_Generic_List_MapControl_QuestInfo__o *questList; // [xsp+0h] [xbp-80h]
  int v138; // [xsp+Ch] [xbp-74h]
  int64_t v139; // [xsp+10h] [xbp-70h]
  EventEntity_o *eventEnt; // [xsp+18h] [xbp-68h]
  _BOOL4 IsClosedWar; // [xsp+20h] [xbp-60h]
  int v142; // [xsp+24h] [xbp-5Ch]
  int v143; // [xsp+28h] [xbp-58h] BYREF
  int v144; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_40FC6E8 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, questBoardItem);
    sub_B16FFC(&BalanceConfig_TypeInfo, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_WarMaster___, v6);
    sub_B16FFC(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v8);
    sub_B16FFC(&int_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__, v11);
    sub_B16FFC(&QuestBoardListViewItemDraw_TypeInfo, v12);
    sub_B16FFC(&QuestBoardListViewManager_TypeInfo, v13);
    sub_B16FFC(&ScrTerminalListTop_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B16FFC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v16);
    sub_B16FFC(&Method_SingletonTemplate_QuestTree__get_Instance__, v17);
    sub_B16FFC(&SingletonTemplate_QuestTree__TypeInfo, v18);
    sub_B16FFC(&SingletonTemplate_clsQuestCheck__TypeInfo, v19);
    sub_B16FFC(&StringLiteral_1, v20);
    byte_40FC6E8 = 1;
  }
  if ( !questBoardItem )
    goto LABEL_197;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_197;
  AreaBoardInfo_k__BackingField = quest_info_k__BackingField->fields._AreaBoardInfo_k__BackingField;
  if ( !AreaBoardInfo_k__BackingField )
    goto LABEL_197;
  warId = AreaBoardInfo_k__BackingField->fields.warId;
  if ( warId )
  {
    if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
    }
    v24 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !v24 )
      goto LABEL_197;
    WarInfoByWarID = QuestTree__mfGetWarInfoByWarID(v24, warId, 0LL);
    v26 = WarInfoByWarID;
    if ( WarInfoByWarID )
    {
      Mine = MapControl_WarInfo__GetMine(WarInfoByWarID, 0LL);
      v28 = 1;
      goto LABEL_16;
    }
    v28 = 0;
  }
  else
  {
    v28 = 0;
    v26 = 0LL;
  }
  Mine = 0LL;
LABEL_16:
  v29 = AreaBoardInfo_k__BackingField->fields.eventEnt;
  if ( v29 )
  {
    if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
    }
    v30 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !v30 )
      goto LABEL_197;
    IsActiveEventWar = QuestTree__IsActiveEventWar(v30, warId, 0LL);
  }
  else
  {
    IsActiveEventWar = 0;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_197;
  manager = mListViewObject->fields.manager;
  if ( !manager )
    goto LABEL_197;
  v34 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v34
    || (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[v34 - 1] != QuestBoardListViewManager_TypeInfo )
  {
    sub_B173C8(manager);
LABEL_199:
    sub_B173C8(v124);
    goto LABEL_200;
  }
  rightItem = (int64_t)manager[1].fields.rightItem;
  if ( v28 )
  {
    if ( !v26 )
      goto LABEL_197;
    IsClosedWar = MapControl_WarInfo__IsClosedWar(v26, 0LL);
    if ( !Mine )
      goto LABEL_30;
LABEL_32:
    IsMainInterlude = WarEntity__IsMainInterlude(Mine, 0LL);
    goto LABEL_33;
  }
  IsClosedWar = 0;
  if ( Mine )
    goto LABEL_32;
LABEL_30:
  IsMainInterlude = 0;
LABEL_33:
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  v139 = rightItem;
  eventEnt = v29;
  v37 = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !v37 )
    goto LABEL_197;
  questList = (System_Collections_Generic_List_MapControl_QuestInfo__o *)v37->fields.mCommonAtlas;
  IsPurchasedByRarePrism = QuestBoardListViewItemDraw__IsPurchasedByRarePrism(v37, questList, Mine, v38);
  v142 = IsActiveEventWar && (IsPurchasedByRarePrism || !IsMainInterlude);
  if ( (unsigned int)(AreaBoardInfo_k__BackingField->fields.questBoardType - 3) <= 1 )
  {
    mLabelObj = this->fields.mLabelObj;
    if ( !mLabelObj )
      goto LABEL_197;
    UnityEngine_GameObject__SetActive(mLabelObj, 0, 0LL);
    mTitleObj = this->fields.mTitleObj;
    if ( !mTitleObj )
      goto LABEL_197;
    UnityEngine_GameObject__SetActive(mTitleObj, 0, 0LL);
    mOptionObj = this->fields.mOptionObj;
    if ( !mOptionObj )
      goto LABEL_197;
    UnityEngine_GameObject__SetActive(mOptionObj, 1, 0LL);
    mOptionInfoLb = (UnityEngine_Component_o *)this->fields.mOptionInfoLb;
    if ( !mOptionInfoLb )
      goto LABEL_197;
    gameObject = UnityEngine_Component__get_gameObject(mOptionInfoLb, 0LL);
    if ( !gameObject )
      goto LABEL_197;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    mOptionRestrinctionLb = (UnityEngine_Component_o *)this->fields.mOptionRestrinctionLb;
    if ( !mOptionRestrinctionLb )
      goto LABEL_197;
    transform = UnityEngine_Component__get_transform(mOptionRestrinctionLb, 0LL);
    if ( !transform )
      goto LABEL_197;
    parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
    if ( !parent )
      goto LABEL_197;
    v48 = UnityEngine_Component__get_gameObject(parent, 0LL);
    if ( !v48 )
      goto LABEL_197;
    UnityEngine_GameObject__SetActive(v48, 0, 0LL);
    mRewardObj = this->fields.mRewardObj;
    if ( !mRewardObj )
      goto LABEL_197;
    UnityEngine_GameObject__SetActive(mRewardObj, 0, 0LL);
    mPhaseObj = this->fields.mPhaseObj;
    if ( !mPhaseObj )
      goto LABEL_197;
    UnityEngine_GameObject__SetActive(mPhaseObj, 0, 0LL);
    mChallengeObj = this->fields.mChallengeObj;
    if ( !mChallengeObj )
      goto LABEL_197;
    UnityEngine_GameObject__SetActive(mChallengeObj, 0, 0LL);
    mCostObj = this->fields.mCostObj;
    if ( !mCostObj )
      goto LABEL_197;
    UnityEngine_GameObject__SetActive(mCostObj, 0, 0LL);
    v138 = IsClosedWar;
    if ( v142 == 0 && IsMainInterlude )
    {
      if ( Mine && (WarEntity__HasFlag(Mine, 128, 0LL) || WarEntity__HasFlag(Mine, 32, 0LL)) )
      {
        status = AreaBoardInfo_k__BackingField->fields.status;
        v55 = IsClosedWar;
LABEL_61:
        v138 = v55 || status == 2;
        goto LABEL_62;
      }
      v56 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v56 = BalanceConfig_TypeInfo;
      }
      if ( warId == v56->static_fields->MainInterludeWarId )
      {
        v55 = IsClosedWar;
        status = AreaBoardInfo_k__BackingField->fields.status & 0xFFFFFFFE;
        goto LABEL_61;
      }
    }
LABEL_62:
    if ( (v28 & 1) == 0 )
    {
      v73 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v73 = QuestBoardListViewItemDraw_TypeInfo;
      }
      QBOARD_CAP_CLOSED = v73->static_fields->QBOARD_CAP_CLOSED;
      goto LABEL_120;
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
      v58 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      }
      if ( !v58 )
        goto LABEL_197;
      IsOpenedMainScenarioWar = (ScrTerminalListTop_c *)clsQuestCheck__IsWarClear(
                                                          v58,
                                                          ScrTerminalListTop_TypeInfo->static_fields->AREA_BOARD_FORCE_DISP_TARGET_WAR_ID,
                                                          0LL);
      if ( ((unsigned __int8)IsOpenedMainScenarioWar & 1) != 0 )
      {
        if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
        }
        v59 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
        if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
        }
        if ( !v59 )
          goto LABEL_197;
        if ( !clsQuestCheck__IsWarClear(
                v59,
                ScrTerminalListTop_TypeInfo->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_START_COND_WAR_ID,
                0LL) )
          goto LABEL_193;
        if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
        }
        v60 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !v60 )
          goto LABEL_197;
        qrs = (MapControl_RootInfo_o *)v60->fields.qrs;
        if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
        }
        if ( !qrs )
          goto LABEL_197;
        IsOpenedMainScenarioWar = (ScrTerminalListTop_c *)MapControl_RootInfo__IsOpenedMainScenarioWar(
                                                            qrs,
                                                            ScrTerminalListTop_TypeInfo->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_TARGET_WAR_ID,
                                                            0LL);
        if ( ((unsigned __int8)IsOpenedMainScenarioWar & 1) == 0 )
        {
LABEL_193:
          v136 = QuestBoardListViewItemDraw_TypeInfo;
          if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
            v136 = QuestBoardListViewItemDraw_TypeInfo;
          }
          QBOARD_CAP_CLOSED = v136->static_fields->QBOARD_CAP_CLOSED_SPECIAL_2;
          goto LABEL_120;
        }
      }
    }
    if ( Mine
      && (IsOpenedMainScenarioWar = (ScrTerminalListTop_c *)WarEntity__HasFlag(Mine, 128, 0LL),
          ((unsigned __int8)IsOpenedMainScenarioWar & 1) != 0) )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_197;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Instance,
                                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_197;
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 warId,
                 (const MethodInfo_266F388 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
      if ( !Entity )
        goto LABEL_197;
      PrioredBannerId = WarEntity__GetPrioredBannerId(Entity, 0LL);
      v68 = PrioredBannerId;
      v69 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v69 = QuestBoardListViewItemDraw_TypeInfo;
      }
      msQBoardL1Names = v69->static_fields->msQBoardL1Names;
      if ( !msQBoardL1Names )
        goto LABEL_197;
      if ( msQBoardL1Names->max_length > 1 )
      {
        v71 = msQBoardL1Names->m_Items[1];
        v144 = v68;
        v72 = &v144;
LABEL_118:
        v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v72);
        EventAddBannerSpriteName = System_String__Format(v71, v82, 0LL);
        goto LABEL_119;
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
                                     (v142 != 0) | (unsigned __int8)v138,
                                     v53);
LABEL_119:
        QBOARD_CAP_CLOSED = EventAddBannerSpriteName;
LABEL_120:
        mcBaseP = this->fields.mcBaseP;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        if ( !AtlasManager__SetBanner(mcBaseP, QBOARD_CAP_CLOSED, 0LL) )
        {
          v84 = (UnityEngine_Component_o *)this->fields.mcBaseP;
          if ( !v84 )
            goto LABEL_197;
          v85 = UnityEngine_Component__get_gameObject(v84, 0LL);
          if ( !v85 )
            goto LABEL_197;
          UnityEngine_GameObject__SetActive(v85, 0, 0LL);
        }
        v86 = this->fields.mcBaseP;
        if ( !v86 )
          goto LABEL_197;
        ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v86->klass->vtable._33_MakePixelPerfect.method)(
          v86,
          v86->klass->vtable._34_get_minWidth.methodPtr);
        v87 = (UnityEngine_Component_o *)this->fields.mcBaseP;
        if ( !v87 )
          goto LABEL_197;
        v88 = UnityEngine_Component__get_gameObject(v87, 0LL);
        if ( !v88 )
          goto LABEL_197;
        Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  v88,
                                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        *(UnityEngine_Color_o *)&v90 = UnityEngine_Color__get_white(0LL);
        if ( !Component_srcLineSprite )
          goto LABEL_197;
        UIWidget__set_color(Component_srcLineSprite, *(UnityEngine_Color_o *)&v90, 0LL);
        if ( v138 )
        {
          v94 = (UIWidget_o *)this->fields.mcBaseP;
          *(UnityEngine_Color_o *)&v95 = UnityEngine_Color__get_gray(0LL);
          if ( !v94 )
            goto LABEL_197;
          UIWidget__set_color(v94, *(UnityEngine_Color_o *)&v95, 0LL);
        }
        goto LABEL_134;
      }
      v76 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v76 )
        goto LABEL_197;
      v77 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)v76,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !v77 )
        goto LABEL_197;
      v78 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              v77,
              warId,
              (const MethodInfo_266F388 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
      if ( !v78 )
        goto LABEL_197;
      PrioredBannerId = WarEntity__GetPrioredBannerId(v78, 0LL);
      v79 = PrioredBannerId;
      v80 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v80 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v81 = v80->static_fields->msQBoardL1Names;
      if ( !v81 )
        goto LABEL_197;
      if ( v81->max_length > 2 )
      {
        v71 = v81->m_Items[2];
        v72 = &v143;
        v143 = v79;
        goto LABEL_118;
      }
    }
LABEL_200:
    sub_B17100(PrioredBannerId, v66, v67);
    sub_B170A0();
  }
LABEL_134:
  mRarePrismSp = (UnityEngine_Component_o *)this->fields.mRarePrismSp;
  if ( !mRarePrismSp )
    goto LABEL_197;
  v100 = UnityEngine_Component__get_gameObject(mRarePrismSp, 0LL);
  if ( !v100 )
    goto LABEL_197;
  v101 = (!IsMainInterlude || !IsClosedWar) && IsPurchasedByRarePrism;
  UnityEngine_GameObject__SetActive(v100, v101, 0LL);
  if ( Mine && ((HasFlag = WarEntity__HasFlag(Mine, 128, 0LL)) || (HasFlag = WarEntity__HasFlag(Mine, 32, 0LL))) )
  {
    v105 = AreaBoardInfo_k__BackingField->fields.status;
    if ( v105 && v105 != 6 )
      QuestBoardListViewItemDraw__SetStatusActive(this, v105, v142 != 0 || eventEnt == 0LL || v105 != 1, v102);
    if ( IsPurchasedByRarePrism
      && QuestBoardListViewItemDraw__HasNewQuestInWar(
           (QuestBoardListViewItemDraw_o *)HasFlag,
           questList,
           warId,
           IsMainInterlude,
           v104) )
    {
      QuestBoardListViewItemDraw__SetStatusActive(this, 1, 1, v102);
    }
    v106 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v106 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QuestBoardListViewItemDraw__SetNewIcon(
      this,
      v106->static_fields->NEW_POS_AREA,
      v106->static_fields->NEW_W_AREA,
      v106->static_fields->NEW_H_AREA,
      v102);
    if ( IsMainInterlude && IsClosedWar )
      QuestBoardListViewItemDraw__SetStatusActive(this, 2, 1, v108);
    QuestBoardListViewItemDraw__SetClearSprite(this, Mine, v107);
    QuestBoardListViewItemDraw__SetNextSprite(this, AreaBoardInfo_k__BackingField, Mine, v109);
  }
  else
  {
    if ( AreaBoardInfo_k__BackingField->fields.status == 1 )
      QuestBoardListViewItemDraw__SetStatusActive(this, 1, 1, v102);
    v110 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v110 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QuestBoardListViewItemDraw__SetNewIcon(
      this,
      v110->static_fields->NEW_POS_AREA,
      v110->static_fields->NEW_W_AREA,
      v110->static_fields->NEW_H_AREA,
      v102);
    v113 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v113 = BalanceConfig_TypeInfo;
    }
    if ( warId == v113->static_fields->MainInterludeWarId
      && (AreaBoardInfo_k__BackingField->fields.status & 0xFFFFFFFE) == 2 )
    {
      QuestBoardListViewItemDraw__SetStatusActive(this, 2, 1, v112);
    }
    QuestBoardListViewItemDraw__SetClearSprite(this, Mine, v111);
    if ( !Mine )
      goto LABEL_170;
  }
  if ( WarEntity__IsContainPrioredEntity(Mine, 18, 0LL) )
  {
    QuestBoardListViewItemDraw__SetStatusActive(this, 2, 1, v115);
    QuestBoardListViewItemDraw__SetClearSprite(this, Mine, v116);
  }
  if ( WarEntity__IsDispWhiteMarkUnderBoard(Mine, 0LL) )
    QuestBoardListViewItemDraw__SetBlackMarkAndWhiteMark(this, questBoardItem, Mine, 0, 0, v117);
LABEL_170:
  if ( IsPurchasedByRarePrism || v142 != 0 || eventEnt == 0LL )
    questCount = AreaBoardInfo_k__BackingField->fields.questCount;
  else
    questCount = 0;
  QuestBoardListViewItemDraw__SetBadge(this, questCount, v114);
  QuestBoardListViewItemDraw__CreateInfoTextList(this, questBoardItem, v139, v119);
  if ( !IsMainInterlude )
  {
    mInfoTextList = this->fields.mInfoTextList;
    if ( !mInfoTextList )
      goto LABEL_197;
    size = mInfoTextList->fields._size;
    if ( size >= 1 )
    {
      v123 = this->fields.mListViewObject;
      if ( !v123 )
        goto LABEL_197;
      v124 = (QuestBoardListViewManager_o *)v123->fields.manager;
      if ( !v124 )
        goto LABEL_197;
      v125 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v124->klass->_2.bitflags2 + 1) >= (unsigned int)v125
        && (QuestBoardListViewManager_c *)v124->klass->_2.typeHierarchy[v125 - 1] == QuestBoardListViewManager_TypeInfo )
      {
        AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt(v124, size, 0LL);
        if ( mInfoTextList->fields._size <= (unsigned int)AlphaAnimCnt )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v128 = mInfoTextList->fields._items->m_Items[AlphaAnimCnt];
        if ( v128 )
        {
          QuestBoardInformaionText__SetTime(v128, &this->fields.mOptionInfoLb, &this->fields.mOptionInfoFrameSp, v126);
          v129 = this->fields.mOptionInfoLb;
          if ( v129 )
          {
            BoardOptionTextWithIconComponent__set_Alpha(v129, 1.0, 0LL);
            v120 = 1;
            goto LABEL_186;
          }
        }
LABEL_197:
        sub_B170D4();
      }
      goto LABEL_199;
    }
  }
  v120 = 0;
LABEL_186:
  v130 = (UnityEngine_Component_o *)this->fields.mOptionInfoLb;
  if ( !v130 )
    goto LABEL_197;
  v131 = UnityEngine_Component__get_transform(v130, 0LL);
  if ( !v131 )
    goto LABEL_197;
  v132 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v131, 0LL);
  if ( !v132 )
    goto LABEL_197;
  v133 = UnityEngine_Component__get_gameObject(v132, 0LL);
  if ( !v133 )
    goto LABEL_197;
  UnityEngine_GameObject__SetActive(v133, v120, 0LL);
  v134 = (UnityEngine_Component_o *)this->fields.mOptionInfoLb;
  if ( !v134 )
    goto LABEL_197;
  v135 = UnityEngine_Component__get_gameObject(v134, 0LL);
  if ( !v135 )
    goto LABEL_197;
  UnityEngine_GameObject__SetActive(v135, v120, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewItemDraw__SetItemOfQuest(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v57; // x1
  __int64 v58; // x1
  __int64 v59; // x1
  __int64 v60; // x1
  __int64 v61; // x22
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  WebViewManager_o *Instance; // x0
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x20
  DataManager_o *v70; // x23
  QuestEntity_o *Mine; // x0
  QuestEntity_o *PhaseDetailedEntity; // x19
  int32_t QuestType; // w0
  unsigned int v74; // w25
  QuestGroupMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t EventId; // w0
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  struct ListViewManager_o *manager; // x0
  __int64 v79; // x9
  int64_t rightItem; // x24
  int32_t dispType; // w26
  int v82; // s0
  int v83; // s1
  int v84; // s2
  int v85; // s3
  float *v86; // x28
  UserQuestMaster_o *v87; // x23
  int64_t UserId; // x0
  QuestEntity_o *v89; // x0
  clsQuestCheck_o *v90; // x0
  _BOOL4 v91; // w0
  int32_t v92; // w19
  _BOOL4 v93; // w24
  int32_t PhaseMax; // w0
  int32_t v95; // w0
  UnityEngine_GameObject_o *mLabelObj; // x8
  UnityEngine_Component_o *mLabelNameSp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *mLabelChapterSp; // x0
  UnityEngine_GameObject_o *v100; // x0
  UnityEngine_Component_o *mLabelFaceMaskShortcutSp; // x0
  UnityEngine_GameObject_o *v102; // x0
  UnityEngine_Component_o *mLabelFaceMaskQuestSp; // x0
  UnityEngine_GameObject_o *v104; // x0
  UnityEngine_GameObject_o *mTitleObj; // x0
  UnityEngine_Component_o *mTitleShortcutLb; // x0
  UnityEngine_GameObject_o *v107; // x0
  UnityEngine_GameObject_o *mOptionObj; // x0
  UnityEngine_GameObject_o *mRewardObj; // x0
  UnityEngine_Component_o *mOptionInfoLb; // x0
  UnityEngine_GameObject_o *v111; // x0
  UnityEngine_GameObject_o *mCondObject; // x0
  __int64 v113; // x1
  __int64 v114; // x2
  int32_t OverwriteBannerId_k__BackingField; // w8
  QuestBoardListViewItemDraw_c *v116; // x0
  System_String_o *QUEST_BOARD_SPNAME_PREFIX; // x23
  System_String_o *v118; // x1
  System_String_o *v119; // x0
  QuestBoardListViewItemDraw_c *v120; // x0
  System_String_o *v121; // x28
  System_String_o *v122; // x0
  UISprite_o *mcBaseP; // x23
  UnityEngine_Component_o **p_mcBaseP; // x27
  System_String_o *v125; // x28
  bool v126; // w0
  UnityEngine_GameObject_o *v127; // x0
  UIWidget_o *Component_srcLineSprite; // x0
  const MethodInfo *v129; // x1
  const MethodInfo *v130; // x3
  QuestEntity_o *v131; // x0
  int32_t questId; // w23
  UnityEngine_Component_o *mNextSp; // x0
  UnityEngine_GameObject_o *v134; // x0
  UnityEngine_Component_o *v135; // x0
  UnityEngine_GameObject_o *v136; // x23
  QuestBoardListViewItemDraw_c *v137; // x8
  UnityEngine_Component_o *v138; // x0
  UnityEngine_GameObject_o *v139; // x0
  srcLineSprite_o *v140; // x0
  float NEXT_POS_X_QUEST; // w8
  int v142; // w8
  char v143; // w27
  int32_t v144; // w1
  UnityEngine_Component_o *v145; // x0
  UnityEngine_GameObject_o *v146; // x0
  const MethodInfo *v147; // x3
  QuestBoardListViewItemDraw_c *v148; // x0
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  QuestBoardListViewItemDraw_c *v153; // x0
  const MethodInfo *v154; // x2
  struct QuestBoardListViewItemDraw_StaticFields *v155; // x8
  float v156; // s0
  float v157; // s1
  float v158; // s2
  const MethodInfo *v159; // x1
  const MethodInfo *v160; // x2
  UnityEngine_GameObject_o *StatusSp; // x0
  UnityEngine_GameObject_o *v162; // x23
  QuestBoardListViewItemDraw_c *v163; // x0
  UnityEngine_GameObject_o *mNoBattleObj; // x0
  QuestBoardListViewItemDraw_o *v165; // x0
  const MethodInfo *v166; // x5
  System_String_o *RecommendLv; // x0
  UnityEngine_GameObject_o *mTitleLevelRoot; // x24
  System_String_o *v169; // x23
  bool IsNullOrEmpty; // w0
  UnityEngine_GameObject_o *v171; // x0
  const MethodInfo *v172; // x2
  UILabel_o *mTitleLevelLb; // x0
  UIWidget_o *v174; // x0
  UIWidget_o *mTitleLevelSp; // x0
  UIWidget_o *mTitleLevelStrSp; // x0
  UnityEngine_Component_o *v177; // x0
  UnityEngine_GameObject_o *v178; // x23
  QuestBoardListViewItemDraw_c *v179; // x8
  UnityEngine_Component_o *v180; // x0
  UnityEngine_GameObject_o *v181; // x0
  struct UILabel_o *v182; // x8
  int mWidth; // w8
  int v184; // w8
  UISprite_o *v185; // x23
  QuestBoardListViewItemDraw_o *v186; // x0
  int32_t mMatrixFrame; // w24
  System_String_o *FaceMaskSpriteName; // x0
  const MethodInfo *v189; // x5
  bool v190; // w0
  const MethodInfo *v191; // x3
  UILabel_o *mTitleNameLb; // x23
  System_String_o *DispQuestName; // x0
  QuestEntity_o *v194; // x24
  _BOOL8 enabled; // x0
  const MethodInfo *v196; // x3
  float *v197; // x25
  System_String_o *QuestName; // x0
  QuestBoardListViewItemDraw_o *v199; // x0
  const MethodInfo *v200; // x2
  UnityEngine_Component_o *mLabelSubSectionNumLb; // x0
  UnityEngine_GameObject_o *v202; // x0
  UILabel_o *v203; // x22
  const MethodInfo *v204; // x2
  bool v205; // w8
  QuestBoardListViewItemDraw_o *p_chapterSubId; // x0
  System_String_o *v207; // x0
  UnityEngine_Behaviour_o *boardIconTexture; // x0
  UnityEngine_Component_o *v209; // x0
  UnityEngine_GameObject_o *v210; // x0
  UISprite_o *v211; // x23
  QuestBoardListViewItemDraw_o *v212; // x0
  const MethodInfo *v213; // x3
  System_String_o *QuestIconName; // x24
  bool v215; // w0
  struct UISprite_o *v216; // x0
  UnityEngine_Component_o *v217; // x0
  UnityEngine_GameObject_o *v218; // x0
  UIWidget_o *v219; // x0
  UnityEngine_Behaviour_o *v220; // x0
  __int64 v221; // x1
  __int64 v222; // x2
  __int64 v223; // x4
  System_Action_o *v224; // x23
  const MethodInfo *v225; // x3
  UILabel_o *v226; // x22
  System_String_o *AdvanceNoticeText; // x0
  UILabel_o *v228; // x22
  UIWidget_o *v229; // x0
  const MethodInfo *v230; // x3
  QuestReleaseOverwriteMaster_o *v231; // x0
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  const MethodInfo *v233; // x2
  int32_t v234; // w22
  int32_t afterClear; // w23
  float v236; // s8
  float v237; // s9
  float v238; // s10
  float v239; // s11
  bool IsRepeatReward; // w0
  const MethodInfo *v241; // x4
  const MethodInfo *v242; // x3
  QuestBoardListViewItem_o *v243; // x27
  MapControl_WarInfo_o *v244; // x0
  WarEntity_o *v245; // x0
  bool v246; // w22
  int v247; // w19
  UnityEngine_Component_o *mRarePrismSp; // x0
  UnityEngine_GameObject_o *v249; // x0
  const MethodInfo *v250; // x1
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *mInfoTextList; // x22
  const MethodInfo *v252; // x6
  System_Collections_Generic_IEnumerable_T__o *CampaignText; // x0
  UnityEngine_Component_o *v254; // x0
  UnityEngine_GameObject_o *v255; // x0
  int64_t *p_expireAt; // x8
  int64_t v257; // x22
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v258; // x23
  System_String_o *v259; // x25
  __int64 v260; // x1
  __int64 v261; // x2
  __int64 v262; // x3
  __int64 v263; // x4
  QuestBoardInformaionText_o *v264; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v265; // x24
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v266; // x19
  int32_t size; // w1
  UnityEngine_Component_o **p_mOptionInfoLb; // x22
  struct QuestBoardListViewObject_o *v269; // x8
  QuestBoardListViewManager_o *v270; // x0
  __int64 v271; // x10
  const MethodInfo *v272; // x3
  int32_t AlphaAnimCnt; // w23
  QuestBoardInformaionText_o *v274; // x0
  BoardOptionTextWithIconComponent_o *v275; // x0
  bool v276; // w23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *v279; // x0
  UnityEngine_GameObject_o *v280; // x0
  const MethodInfo *v281; // x1
  int32_t v282; // w23
  UISprite_o *mCostApSp; // x22
  System_String_o *ApSpriteFileName; // x23
  bool v285; // w0
  UnityEngine_GameObject_o *mChallengeObj; // x22
  bool v287; // w1
  UnityEngine_GameObject_o *v288; // x0
  QuestBoardListViewItemDraw_c *v289; // x0
  struct QuestBoardListViewItemDraw_StaticFields *v290; // x10
  float *p_x; // x8
  float *p_y; // x9
  float *p_z; // x10
  UIWidget_o **p_mChallengeLb; // x19
  struct QuestBoardListViewItemDraw_StaticFields *v295; // x8
  struct QuestBoardListViewItemDraw_StaticFields *v296; // x10
  DataMasterBase_WarMaster__WarEntity__int__o *v297; // x0
  EventDetailEntity_o *v298; // x22
  int32_t ClearNum; // w22
  UISprite_o *v300; // x23
  QuestBoardListViewItemDraw_c *v301; // x0
  struct System_String_array *msQBoardL3Names; // x8
  System_String_o *v303; // x28
  System_String_o *v304; // x0
  System_String_o *v305; // x28
  UISprite_o *v306; // x0
  UISprite_o *challengeStrSpr; // x23
  UILabel_o *mChallengeLb; // x23
  System_String_o *NumberFormat; // x0
  struct UISprite_o *v310; // x0
  UnityEngine_GameObject_o *v311; // x0
  UnityEngine_GameObject_o *mPhaseObj; // x22
  bool v313; // w1
  UnityEngine_GameObject_o *v314; // x0
  QuestBoardListViewItemDraw_o *v315; // x26
  const MethodInfo *v316; // x4
  int32_t v317; // w19
  QuestBoardListViewItemDraw_c *v318; // x8
  int32_t v319; // w22
  __int16 v320; // w9
  int v321; // w10
  struct QuestBoardListViewItemDraw_StaticFields *v322; // x9
  int32_t PHASE_NORMAL_MAX; // w11
  _BOOL4 v324; // w24
  int32_t *p_QUEST_BOARD_PHASE_INTERVAL; // x9
  int32_t v326; // w28
  int v327; // w20
  bool v328; // w25
  int v329; // w21
  unsigned int v330; // w19
  struct UISprite_array *mPhaseSp; // x8
  Il2CppClass **v332; // x8
  UISprite_o *v333; // x27
  UnityEngine_GameObject_o *v334; // x0
  const MethodInfo *v335; // x6
  bool v336; // w2
  System_String_o *PhaseArrowSpriteName; // x0
  int v338; // s0
  QuestBoardListViewItemDraw_o *v342; // x0
  const MethodInfo *v343; // x3
  int32_t PhaseArrowIntervalSize; // w23
  UnityEngine_Transform_o *v345; // x0
  UnityEngine_Component_o *mDamageRecordSp; // x0
  QuestEntity_o *v347; // x21
  UnityEngine_GameObject_o *v348; // x22
  bool v349; // w0
  float *v350; // x25
  float *v351; // x20
  UnityEngine_Component_o *v352; // x0
  UnityEngine_GameObject_o *v353; // x0
  QuestBoardListViewItemDraw_c *v354; // x0
  UISprite_o *v355; // x22
  System_String_o *QUEST_BOARD_DAMAGE_RECODE_NAME; // x23
  UserQuestRecordMaster_o *v357; // x22
  int64_t v358; // x0
  int64_t MaxTurnDamage; // x0
  UILabel_o *mDamageRecordLb; // x22
  Il2CppObject *v361; // x0
  System_String_o *v362; // x0
  UIWidget_o *v363; // x0
  UIWidget_o *v364; // x0
  UnityEngine_Component_o *mKnockdownRecordSp; // x0
  UnityEngine_GameObject_o *v366; // x22
  bool v367; // w0
  UnityEngine_Component_o *v368; // x0
  UnityEngine_GameObject_o *v369; // x0
  QuestBoardListViewItemDraw_c *v370; // x0
  UISprite_o *v371; // x22
  System_String_o *QUEST_BOARD_KNOCKDOWN_RECODE_NAME; // x23
  __int64 v373; // x1
  __int64 v374; // x2
  __int64 v375; // x3
  __int64 v376; // x4
  QuestKnockdownInfo_o *v377; // x22
  UserQuestRecordMaster_o *v378; // x23
  int64_t v379; // x0
  UILabel_o *mKnockdownRecordCountLb; // x23
  System_String_o *v381; // x0
  System_String_o *v382; // x24
  Il2CppObject *v383; // x0
  System_String_o *v384; // x0
  UILabel_o *mKnockdownRecordDamageLb; // x23
  System_String_o *v386; // x24
  Il2CppObject *v387; // x0
  System_String_o *v388; // x0
  UILabel_o *mKnockdownRecordPlusLb; // x24
  System_String_o *v390; // x23
  _QWORD **v391; // x20
  __int64 v392; // x25
  __int16 v393; // w8
  __int64 v394; // x25
  __int64 v395; // x25
  __int64 v396; // x25
  System_String_o *v397; // x0
  UILabel_o *mKnockdownRecordDamageNameLb; // x24
  System_String_o *v399; // x0
  _QWORD **v400; // x19
  System_String_o *v401; // x23
  __int64 v402; // x25
  __int16 v403; // w8
  __int64 v404; // x25
  __int64 v405; // x25
  __int64 v406; // x25
  System_String_o *v407; // x0
  UILabel_o *v408; // x0
  UIWidget_o *v409; // x0
  UnityEngine_Component_o *v410; // x0
  UnityEngine_GameObject_o *v411; // x22
  QuestBoardListViewItemDraw_c *v412; // x8
  float QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX; // s0
  UnityEngine_Component_o *v414; // x0
  UnityEngine_GameObject_o *v415; // x0
  UnityEngine_GameObject_o *v416; // x0
  float LocalPositionX; // s8
  QuestBoardListViewItemDraw_c *v418; // x0
  UIWidget_o *v419; // x0
  UIWidget_o *v420; // x0
  UIWidget_o *v421; // x0
  UIWidget_o *v422; // x0
  UIWidget_o *v423; // x0
  int32_t id; // w22
  UnityEngine_GameObject_o *mQuestInfoBtn; // x0
  __int64 v426; // x1
  TerminalSceneComponent_c *v427; // x0
  TerminalSceneComponent_o *mInstance; // x0
  UnityEngine_GameObject_o *mQuestInfoShowing; // x0
  UnityEngine_GameObject_o *v430; // x0
  srcLineSprite_o *v431; // x0
  srcLineSprite_o *v432; // x22
  __int64 v433; // x1
  UILabel_o *mOptionRestrinctionLb; // x22
  UILabel_o *v435; // x0
  UnityEngine_Component_o *v436; // x0
  UnityEngine_GameObject_o *v437; // x22
  UnityEngine_Component_o *v438; // x0
  UnityEngine_Transform_o *v439; // x0
  UnityEngine_Component_o *v440; // x0
  UnityEngine_GameObject_o *v441; // x0
  UnityEngine_Behaviour_o *v442; // x0
  UnityEngine_Behaviour_o *v443; // x22
  QuestPhaseDetailMaster_o *v444; // x0
  const MethodInfo *v445; // x3
  UILabel_o *v446; // x0
  struct QuestPhaseDetailEntity_BoardList_o *boardMessage; // x8
  System_Collections_Generic_IEnumerable_TSource__o *list; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v449; // x0
  __int64 v450; // x8
  QuestPhaseDetailEntity_BoardInfo_array *v451; // x24
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *v452; // x8
  QuestPhaseDetailEntity_BoardInfo_TextInfo_o *v453; // x0
  _BOOL8 activeSelf; // x0
  __int64 v455; // x1
  __int64 v456; // x2
  QuestPhaseDetailEntity_BoardInfo_o *v457; // x8
  bool v458; // w22
  QuestPhaseDetailEntity_BoardInfo_ImageInfo_o *image; // x0
  bool v460; // w24
  char v461; // w27
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *mMultiSecondBattleInformation; // x0
  UnityEngine_Component_o **p_mCostConsumeBattleWinSp; // x19
  bool v464; // w23
  UnityEngine_GameObject_o *v465; // x0
  UISprite_o *mOptionPreBattleSp; // x23
  QuestBoardListViewItemDraw_c *v467; // x0
  System_String_o *PRE_BATTLE_ORGANIZATION; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v469; // x0
  bool v470; // w23
  UnityEngine_Component_o *v471; // x0
  UnityEngine_GameObject_o *v472; // x0
  struct System_Collections_Generic_List_UISprite__o *v473; // x8
  UnityEngine_Behaviour_o *secondBattleInformation; // x0
  QuestBoardListViewMultiSecondBattleInformation_o *v475; // x0
  UnityEngine_Component_o *v476; // x0
  UnityEngine_Transform_o *v477; // x0
  UnityEngine_Component_o *v478; // x0
  UnityEngine_GameObject_o *v479; // x0
  QuestEntity_o *v480; // x24
  bool v481; // w0
  bool v482; // w23
  UnityEngine_Transform_o *v483; // x0
  UnityEngine_Component_o *v484; // x0
  UnityEngine_GameObject_o *v485; // x22
  QuestBoardListViewItemDraw_c *v486; // x8
  UILabel_o *v487; // x0
  const MethodInfo *v488; // x2
  UILabel_o *v489; // x22
  UILabel_o *v490; // x0
  int32_t restrictionDefaultWidth; // w1
  const MethodInfo *v492; // x2
  struct UILabel_o *v493; // x8
  QuestBoardListViewItemDraw_c *v494; // x0
  int32_t RESTRICTION_FONT_SPACING_DEFAULT; // w1
  QuestBoardListViewItemDraw_c *v496; // x0
  int32_t mSpacingX; // w19
  QuestPhaseMaster_o *v498; // x0
  QuestPhaseEntity_o *v499; // x0
  QuestPhaseEntity_o *v500; // x22
  struct System_Int32_array *classIds; // x8
  bool v502; // w23
  UnityEngine_GameObject_o *mClassIconRoot; // x0
  UIWidget_o *mClassStrSp; // x0
  struct ServantClassIconComponent_array *mClassIcons; // x8
  int max_length; // w19
  struct System_Int32_array *v507; // x20
  int v508; // w21
  int v509; // w9
  __int64 v510; // x23
  Il2CppClass **v511; // x8
  UnityEngine_Component_o *v512; // x22
  UnityEngine_GameObject_o *v513; // x0
  UnityEngine_GameObject_o *v514; // x0
  UnityEngine_Object_o *eventTarget; // x22
  UnityEngine_Object_o *eventTargetComponent; // x22
  UnityEngine_GameObject_o *v517; // x0
  BoardOptionEventTargetComponent_o *v518; // x0
  ViewEnemyMaster_o *Master_WarQuestSelectionMaster; // x0
  ViewEnemyEntity_array *EntityListFromQuestId; // x0
  __int64 v521; // x1
  __int64 v522; // x2
  __int64 v523; // x3
  __int64 v524; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v525; // x22
  QuestBoardListViewItemDraw___c_c *v526; // x0
  struct QuestBoardListViewItemDraw___c_StaticFields *v527; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__299_1; // x23
  Il2CppObject *v529; // x24
  struct QuestBoardListViewItemDraw___c_StaticFields *v530; // x0
  System_String_array **v531; // x2
  System_String_array **v532; // x3
  System_Boolean_array **v533; // x4
  System_Int32_array **v534; // x5
  System_Int32_array *v535; // x6
  System_Int32_array *v536; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v537; // x0
  System_Int32_array *v538; // x0
  System_Int32_array *v539; // x22
  BoardOptionEventTargetComponent_o *v540; // x0
  UnityEngine_GameObject_o *v541; // x0
  UnityEngine_Object_o *alloutRoot; // x21
  UnityEngine_Object_o *alloutRootComponent; // x21
  int32_t v544; // w21
  UnityEngine_GameObject_o *v545; // x0
  BoardOptionAlloutComponent_o *v546; // x0
  QuestBoardListViewItemDraw_c *v547; // x0
  int *p_RESTRICTION_FONT_WIDTH_ALLOUT; // x8
  UISprite_o *v549; // x23
  struct System_String_array *v550; // x8
  UnityEngine_Component_o *v551; // x0
  UnityEngine_GameObject_o *v552; // x0
  UnityEngine_Component_o *v553; // x0
  UnityEngine_GameObject_o *v554; // x0
  UISprite_o *v555; // x22
  QuestBoardListViewItemDraw_o *v556; // x0
  const MethodInfo *v557; // x2
  System_String_o *QuestIconNameForMainType; // x23
  bool v559; // w0
  struct UISprite_o *v560; // x0
  MapControl_WarInfo_o *WarInfo_k__BackingField; // x0
  WarEntity_o *v562; // x0
  int32_t QuestBoardSectionId; // w0
  int32_t v564; // w23
  UISprite_o *mLabelBoardSectionSp; // x22
  QuestBoardListViewItemDraw_c *v566; // x0
  System_String_o *CHAPTER_SP_UNIT_NAME; // x24
  Il2CppObject *v568; // x0
  System_String_o *v569; // x23
  bool v570; // w0
  struct UISprite_o *v571; // x0
  QuestBoardListViewItemDraw_o *v572; // x0
  QuestBoardListViewItem_o *v573; // x1
  const MethodInfo *v574; // x2
  EventCampaignEntity_o *v575; // [xsp+0h] [xbp-140h]
  const MethodInfo *v576; // [xsp+10h] [xbp-130h]
  int64_t nowTime; // [xsp+20h] [xbp-120h]
  int nowTimea; // [xsp+20h] [xbp-120h]
  char v579; // [xsp+2Ch] [xbp-114h]
  int v580; // [xsp+30h] [xbp-110h]
  int key; // [xsp+34h] [xbp-10Ch]
  QuestBoardListViewItem_o *v582; // [xsp+38h] [xbp-108h]
  int32_t v583; // [xsp+38h] [xbp-108h]
  int32_t questPhase; // [xsp+44h] [xbp-FCh]
  DataManager_o *v585; // [xsp+48h] [xbp-F8h]
  float *v586; // [xsp+50h] [xbp-F0h]
  int32_t *v587; // [xsp+58h] [xbp-E8h]
  QuestEntity_o *v588; // [xsp+60h] [xbp-E0h]
  bool isRepeatFirst; // [xsp+6Ch] [xbp-D4h]
  bool isRepeatFirsta; // [xsp+6Ch] [xbp-D4h]
  float *v591; // [xsp+70h] [xbp-D0h]
  _BOOL4 HasFlag; // [xsp+7Ch] [xbp-C4h]
  float *v593; // [xsp+80h] [xbp-C0h]
  float *v594; // [xsp+88h] [xbp-B8h]
  int64_t totalDamage; // [xsp+90h] [xbp-B0h] BYREF
  int64_t knockdownNum; // [xsp+98h] [xbp-A8h] BYREF
  QuestPhaseDetailEntity_o *v597; // [xsp+A0h] [xbp-A0h] BYREF
  int32_t fixedVal[2]; // [xsp+A8h] [xbp-98h] BYREF
  int32_t costCalcVal; // [xsp+B0h] [xbp-90h] BYREF
  bool isTripleItemConsume; // [xsp+B4h] [xbp-8Ch] BYREF
  bool isDoubleItemConsumeQp; // [xsp+B8h] [xbp-88h] BYREF
  bool isDoubleItemConsume; // [xsp+BCh] [xbp-84h] BYREF
  UserQuestEntity_o *entity; // [xsp+C0h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v604; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v605; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v607; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v608; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v609; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v610; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v611; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v612; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v613; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v614; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v615; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v616; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v617; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v618; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v619; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v620; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v621; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v622; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v623; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v624; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v625; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v626; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v627; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v628; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v629; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FC6EB & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, questBoardItem);
    sub_B16FFC(&Method_System_Array_Empty_object___, v7);
    sub_B16FFC(&AtlasManager_TypeInfo, v8);
    sub_B16FFC(&CondType_TypeInfo, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestGroupMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserQuestMaster___, v15);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserQuestRecordMaster___, v16);
    sub_B16FFC(&Method_DataManager_GetMaster_ViewEnemyMaster___, v17);
    sub_B16FFC(&DataManager_TypeInfo, v18);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v19);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___, v20);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_QuestPhaseDetailEntity_BoardInfo___, v21);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v22);
    sub_B16FFC(&Method_System_Func_ViewEnemyEntity__int___ctor__, v23);
    sub_B16FFC(&System_Func_ViewEnemyEntity__int__TypeInfo, v24);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewMultiLimitedFormation___, v25);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v26);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIButton___, v27);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v28);
    sub_B16FFC(&int_TypeInfo, v29);
    sub_B16FFC(&long_TypeInfo, v30);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__, v31);
    sub_B16FFC(&Method_System_Collections_Generic_List_UISprite__Add__, v32);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__, v33);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, v34);
    sub_B16FFC(&Method_System_Collections_Generic_List_UISprite__get_Count__, v35);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__, v36);
    sub_B16FFC(&LocalizationManager_TypeInfo, v37);
    sub_B16FFC(&NetworkManager_TypeInfo, v38);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v39);
    sub_B16FFC(&QuestBoardInformaionText_TypeInfo, v40);
    sub_B16FFC(&QuestBoardListViewItemDraw_TypeInfo, v41);
    sub_B16FFC(&QuestBoardListViewManager_TypeInfo, v42);
    sub_B16FFC(&QuestInformationComponent_TypeInfo, v43);
    sub_B16FFC(&QuestKnockdownInfo_TypeInfo, v44);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v45);
    sub_B16FFC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v46);
    sub_B16FFC(&SingletonTemplate_clsQuestCheck__TypeInfo, v47);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v48);
    sub_B16FFC(&Method_QuestBoardListViewItemDraw___c__SetItemOfQuest_b__299_1__, v49);
    sub_B16FFC(&Method_QuestBoardListViewItemDraw___c__DisplayClass299_0__SetItemOfQuest_b__0__, v50);
    sub_B16FFC(&QuestBoardListViewItemDraw___c__DisplayClass299_0_TypeInfo, v51);
    sub_B16FFC(&QuestBoardListViewItemDraw___c_TypeInfo, v52);
    sub_B16FFC(&StringLiteral_13352, v53);
    sub_B16FFC(&StringLiteral_21544, v54);
    sub_B16FFC(&StringLiteral_10860, v55);
    sub_B16FFC(&StringLiteral_10857, v56);
    sub_B16FFC(&StringLiteral_23395, v57);
    sub_B16FFC(&StringLiteral_10859, v58);
    sub_B16FFC(&StringLiteral_10858, v59);
    sub_B16FFC(&StringLiteral_21545, v60);
    byte_40FC6EB = 1;
  }
  entity = 0LL;
  isDoubleItemConsume = 0;
  isDoubleItemConsumeQp = 0;
  isTripleItemConsume = 0;
  costCalcVal = 0;
  *(_QWORD *)fixedVal = 0LL;
  v597 = 0LL;
  v61 = sub_B170CC(QuestBoardListViewItemDraw___c__DisplayClass299_0_TypeInfo, questBoardItem, method, v3, v4);
  QuestBoardListViewItemDraw___c__DisplayClass299_0___ctor(
    (QuestBoardListViewItemDraw___c__DisplayClass299_0_o *)v61,
    0LL);
  if ( !v61 )
    goto LABEL_645;
  *(_QWORD *)(v61 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v61 + 16), (System_Int32_array **)this, v62, v63, v64, v65, v66, v67);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !questBoardItem )
    goto LABEL_645;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_645;
  v70 = (DataManager_o *)Instance;
  Mine = MapControl_QuestInfo__GetMine(questBoardItem->fields._quest_info_k__BackingField, 0LL);
  if ( !Mine )
    goto LABEL_645;
  PhaseDetailedEntity = QuestEntity__GetPhaseDetailedEntity(Mine, 0LL);
  QuestType = MapControl_QuestInfo__GetQuestType(quest_info_k__BackingField, 0LL);
  if ( !v70 )
    goto LABEL_645;
  v74 = QuestType;
  MasterData_WarQuestSelectionMaster = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               v70,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !PhaseDetailedEntity )
    goto LABEL_645;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_645;
  EventId = QuestGroupMaster__GetEventId(MasterData_WarQuestSelectionMaster, PhaseDetailedEntity->fields.id, 0LL);
  mListViewObject = this->fields.mListViewObject;
  key = EventId;
  if ( !mListViewObject )
    goto LABEL_645;
  manager = mListViewObject->fields.manager;
  if ( !manager )
    goto LABEL_645;
  v79 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v79
    || (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[v79 - 1] != QuestBoardListViewManager_TypeInfo )
  {
    sub_B173C8(manager);
    goto LABEL_649;
  }
  rightItem = (int64_t)manager[1].fields.rightItem;
  dispType = quest_info_k__BackingField->fields.dispType;
  isRepeatFirst = QuestEntity__HasFlag(PhaseDetailedEntity, 2LL, 0LL);
  v585 = v70;
  nowTime = rightItem;
  if ( dispType == 2 )
    *(UnityEngine_Color_o *)&v82 = UnityEngine_Color__get_gray(0LL);
  else
    *(UnityEngine_Color_o *)&v82 = UnityEngine_Color__get_white(0LL);
  *(_DWORD *)(v61 + 36) = v85;
  *(_DWORD *)(v61 + 24) = v82;
  v86 = (float *)(v61 + 24);
  *(_DWORD *)(v61 + 28) = v83;
  v586 = (float *)(v61 + 36);
  v593 = (float *)(v61 + 28);
  *(_DWORD *)(v61 + 32) = v84;
  v87 = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               v70,
                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v87 )
    goto LABEL_645;
  UserQuestMaster__TryGetEntity(v87, &entity, UserId, PhaseDetailedEntity->fields.id, 0LL);
  isDoubleItemConsume = 0;
  isDoubleItemConsumeQp = 0;
  isTripleItemConsume = 0;
  v89 = MapControl_QuestInfo__GetMine(quest_info_k__BackingField, 0LL);
  if ( !v89 )
    goto LABEL_645;
  HasFlag = QuestEntity__HasFlag(v89, 0x10000000000000LL, 0LL);
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v594 = (float *)(v61 + 32);
  v588 = PhaseDetailedEntity;
  v90 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !v90 )
    goto LABEL_645;
  v91 = clsQuestCheck__IsQuestClear(v90, quest_info_k__BackingField->fields.questId, 0, 0LL);
  v92 = quest_info_k__BackingField->fields.questPhase;
  v93 = v91;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0LL);
  v95 = UnityEngine_Mathf__Min_40727532(v92 + 1, PhaseMax, 0LL);
  mLabelObj = this->fields.mLabelObj;
  questPhase = v95;
  if ( !mLabelObj )
    goto LABEL_645;
  UnityEngine_GameObject__SetActive(mLabelObj, 1, 0LL);
  mLabelNameSp = (UnityEngine_Component_o *)this->fields.mLabelNameSp;
  if ( !mLabelNameSp )
    goto LABEL_645;
  gameObject = UnityEngine_Component__get_gameObject(mLabelNameSp, 0LL);
  if ( !gameObject )
    goto LABEL_645;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  mLabelChapterSp = (UnityEngine_Component_o *)this->fields.mLabelChapterSp;
  if ( !mLabelChapterSp )
    goto LABEL_645;
  v100 = UnityEngine_Component__get_gameObject(mLabelChapterSp, 0LL);
  if ( !v100 )
    goto LABEL_645;
  UnityEngine_GameObject__SetActive(v100, 0, 0LL);
  mLabelFaceMaskShortcutSp = (UnityEngine_Component_o *)this->fields.mLabelFaceMaskShortcutSp;
  if ( !mLabelFaceMaskShortcutSp )
    goto LABEL_645;
  v102 = UnityEngine_Component__get_gameObject(mLabelFaceMaskShortcutSp, 0LL);
  if ( !v102 )
    goto LABEL_645;
  UnityEngine_GameObject__SetActive(v102, 0, 0LL);
  mLabelFaceMaskQuestSp = (UnityEngine_Component_o *)this->fields.mLabelFaceMaskQuestSp;
  if ( !mLabelFaceMaskQuestSp )
    goto LABEL_645;
  v104 = UnityEngine_Component__get_gameObject(mLabelFaceMaskQuestSp, 0LL);
  if ( !v104 )
    goto LABEL_645;
  UnityEngine_GameObject__SetActive(v104, 1, 0LL);
  mTitleObj = this->fields.mTitleObj;
  if ( !mTitleObj )
    goto LABEL_645;
  UnityEngine_GameObject__SetActive(mTitleObj, 1, 0LL);
  mTitleShortcutLb = (UnityEngine_Component_o *)this->fields.mTitleShortcutLb;
  if ( !mTitleShortcutLb )
    goto LABEL_645;
  v107 = UnityEngine_Component__get_gameObject(mTitleShortcutLb, 0LL);
  if ( !v107 )
    goto LABEL_645;
  UnityEngine_GameObject__SetActive(v107, 0, 0LL);
  mOptionObj = this->fields.mOptionObj;
  if ( !mOptionObj )
    goto LABEL_645;
  UnityEngine_GameObject__SetActive(mOptionObj, 1, 0LL);
  mRewardObj = this->fields.mRewardObj;
  if ( !mRewardObj )
    goto LABEL_645;
  UnityEngine_GameObject__SetActive(mRewardObj, 1, 0LL);
  mOptionInfoLb = (UnityEngine_Component_o *)this->fields.mOptionInfoLb;
  if ( !mOptionInfoLb )
    goto LABEL_645;
  v111 = UnityEngine_Component__get_gameObject(mOptionInfoLb, 0LL);
  if ( !v111 )
    goto LABEL_645;
  UnityEngine_GameObject__SetActive(v111, 0, 0LL);
  mCondObject = this->fields.mCondObject;
  if ( !mCondObject )
    goto LABEL_645;
  UnityEngine_GameObject__SetActive(mCondObject, 0, 0LL);
  OverwriteBannerId_k__BackingField = questBoardItem->fields._OverwriteBannerId_k__BackingField;
  v587 = (int32_t *)quest_info_k__BackingField;
  v591 = (float *)(v61 + 24);
  v582 = questBoardItem;
  if ( OverwriteBannerId_k__BackingField >= 1 )
  {
    v116 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v116 = QuestBoardListViewItemDraw_TypeInfo;
      OverwriteBannerId_k__BackingField = questBoardItem->fields._OverwriteBannerId_k__BackingField;
    }
    QUEST_BOARD_SPNAME_PREFIX = v116->static_fields->QUEST_BOARD_SPNAME_PREFIX;
    fixedVal[0] = OverwriteBannerId_k__BackingField;
    v118 = System_Int32__ToString((int32_t)fixedVal, 0LL);
    v119 = QUEST_BOARD_SPNAME_PREFIX;
LABEL_53:
    v122 = System_String__Concat_43743732(v119, v118, 0LL);
    p_mcBaseP = (UnityEngine_Component_o **)&this->fields.mcBaseP;
    mcBaseP = this->fields.mcBaseP;
    v125 = v122;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    v126 = AtlasManager__SetEventUI(mcBaseP, v125, 0LL);
    if ( !mcBaseP )
      goto LABEL_645;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mcBaseP, v126, 0LL);
    goto LABEL_58;
  }
  if ( v588->fields.bannerId >= 1 )
  {
    v120 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v120 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v121 = v120->static_fields->QUEST_BOARD_SPNAME_PREFIX;
    v118 = System_Int32__ToString((int)v588 + 64, 0LL);
    v119 = v121;
    goto LABEL_53;
  }
  p_mcBaseP = (UnityEngine_Component_o **)&this->fields.mcBaseP;
  v300 = this->fields.mcBaseP;
  if ( v74 <= 5 && ((1 << v74) & 0x26) != 0 )
  {
    v301 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v301 = QuestBoardListViewItemDraw_TypeInfo;
    }
    msQBoardL3Names = v301->static_fields->msQBoardL3Names;
    if ( !msQBoardL3Names )
      goto LABEL_645;
    if ( v74 < msQBoardL3Names->max_length )
    {
      v303 = msQBoardL3Names->m_Items[v74];
      v304 = System_Int32__ToString((int)v588 + 60, 0LL);
      v305 = System_String__Concat_43743732(v303, v304, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetBanner(v300, v305, 0LL);
LABEL_58:
      v86 = (float *)(v61 + 24);
      goto LABEL_59;
    }
LABEL_647:
    sub_B17100(v301, v113, v114);
    sub_B170A0();
  }
  if ( !v300 )
    goto LABEL_645;
  UISprite__set_atlas(this->fields.mcBaseP, this->fields.mTerminalAtlas, 0LL);
  v549 = this->fields.mcBaseP;
  v301 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v301 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v550 = v301->static_fields->msQBoardL3Names;
  if ( !v550 )
    goto LABEL_645;
  if ( v74 >= v550->max_length )
    goto LABEL_647;
  if ( !v549 )
    goto LABEL_645;
  UISprite__set_spriteName(v549, v550->m_Items[v74], 0LL);
LABEL_59:
  if ( !*p_mcBaseP )
    goto LABEL_645;
  ((void (__fastcall *)(UnityEngine_Component_o *, void *))(*p_mcBaseP)->klass[2]._1.typeMetadataHandle)(
    *p_mcBaseP,
    (*p_mcBaseP)->klass[2]._1.interopData);
  if ( !*p_mcBaseP )
    goto LABEL_645;
  v127 = UnityEngine_Component__get_gameObject(*p_mcBaseP, 0LL);
  if ( !v127 )
    goto LABEL_645;
  Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            v127,
                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Component_srcLineSprite )
    goto LABEL_645;
  v608.fields.r = *v86;
  v608.fields.g = *v593;
  v608.fields.b = *v594;
  v608.fields.a = *v586;
  UIWidget__set_color(Component_srcLineSprite, v608, 0LL);
  if ( MapControl_QuestInfo__GetQuestType(quest_info_k__BackingField, 0LL) == 1
    && MapControl_QuestInfo__IsDisaplayable(quest_info_k__BackingField, 0LL) )
  {
    v131 = MapControl_QuestInfo__GetMine(quest_info_k__BackingField, 0LL);
    if ( !v131 )
      goto LABEL_645;
    if ( !QuestEntity__HasFlag(v131, 0x400000000000LL, 0LL) )
    {
      questId = quest_info_k__BackingField->fields.questId;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( !CondType__IsQuestClear_25438860(questId, -1, 1, 0LL) )
      {
        mNextSp = (UnityEngine_Component_o *)this->fields.mNextSp;
        if ( !mNextSp )
          goto LABEL_645;
        v134 = UnityEngine_Component__get_gameObject(mNextSp, 0LL);
        if ( !v134 )
          goto LABEL_645;
        UnityEngine_GameObject__SetActive(v134, 1, 0LL);
        v135 = (UnityEngine_Component_o *)this->fields.mNextSp;
        if ( !v135 )
          goto LABEL_645;
        v136 = UnityEngine_Component__get_gameObject(v135, 0LL);
        v137 = QuestBoardListViewItemDraw_TypeInfo;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v137 = QuestBoardListViewItemDraw_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionX(v136, v137->static_fields->NEXT_POS_X_QUEST, 0LL);
        v138 = (UnityEngine_Component_o *)this->fields.mNextSp;
        if ( !v138 )
          goto LABEL_645;
        v139 = UnityEngine_Component__get_gameObject(v138, 0LL);
        if ( !v139 )
          goto LABEL_645;
        v140 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                 v139,
                 (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
        if ( !v140 )
          goto LABEL_645;
        NEXT_POS_X_QUEST = QuestBoardListViewItemDraw_TypeInfo->static_fields->NEXT_POS_X_QUEST;
        *(float *)&v140->fields.mMapCtrl_SpotRoadInfo = NEXT_POS_X_QUEST;
        *((float *)&v140->fields.mStateEndAct + 1) = NEXT_POS_X_QUEST;
      }
    }
  }
  v142 = v93 && !HasFlag;
  v580 = v142;
  v143 = v142 ^ 1;
  if ( ((dispType == 2) & (v142 ^ 1)) == 0 )
  {
    if ( quest_info_k__BackingField->fields.isNew )
    {
      v144 = 1;
    }
    else
    {
      if ( (v142 & 1) == 0 )
        goto LABEL_87;
      v144 = 2;
    }
    QuestBoardListViewItemDraw__SetStatusActive(this, v144, 1, v130);
  }
LABEL_87:
  if ( quest_info_k__BackingField->fields.pickupPriority >= 1 )
    QuestBoardListViewItemDraw__SetStatusActive(this, 4, 1, v130);
  QuestBoardListViewItemDraw__SetPickupIcon(this, v129);
  v145 = (UnityEngine_Component_o *)this->fields.mNextSp;
  if ( !v145 )
    goto LABEL_645;
  v146 = UnityEngine_Component__get_gameObject(v145, 0LL);
  if ( !v146 )
    goto LABEL_645;
  if ( UnityEngine_GameObject__get_activeSelf(v146, 0LL) )
  {
    v148 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v148 = QuestBoardListViewItemDraw_TypeInfo;
    }
    static_fields = v148->static_fields;
    x = static_fields->NEW_POS_QUEST_NEXT.fields.x;
    y = static_fields->NEW_POS_QUEST_NEXT.fields.y;
    z = static_fields->NEW_POS_QUEST_NEXT.fields.z;
LABEL_101:
    QuestBoardListViewItemDraw__SetNewIcon(
      this,
      *(UnityEngine_Vector3_o *)&x,
      static_fields->NEW_W_DEFAULT,
      static_fields->NEW_H_DEFAULT,
      v147);
    v155 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
    v156 = v155->PREV_POS_QUEST_NEXT.fields.x;
    v157 = v155->PREV_POS_QUEST_NEXT.fields.y;
    v158 = v155->PREV_POS_QUEST_NEXT.fields.z;
    goto LABEL_102;
  }
  v153 = QuestBoardListViewItemDraw_TypeInfo;
  if ( quest_info_k__BackingField->fields.pickupPriority >= 1 )
  {
    if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v153 = QuestBoardListViewItemDraw_TypeInfo;
    }
    static_fields = v153->static_fields;
    x = static_fields->NEW_POS_QUEST.fields.x;
    y = static_fields->NEW_POS_QUEST.fields.y;
    z = static_fields->NEW_POS_QUEST.fields.z;
    goto LABEL_101;
  }
  if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v153 = QuestBoardListViewItemDraw_TypeInfo;
  }
  QuestBoardListViewItemDraw__SetNewIcon(
    this,
    v153->static_fields->NEW_POS_QUEST,
    v153->static_fields->NEW_W_DEFAULT,
    v153->static_fields->NEW_H_DEFAULT,
    v147);
  v295 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  v156 = v295->PREV_POS_QUEST.fields.x;
  v157 = v295->PREV_POS_QUEST.fields.y;
  v158 = v295->PREV_POS_QUEST.fields.z;
LABEL_102:
  QuestBoardListViewItemDraw__SetPrevSprite(this, v588, *(UnityEngine_Vector3_o *)&v156, v154);
  if ( dispType != 2
    && quest_info_k__BackingField->fields.isNew
    && quest_info_k__BackingField->fields.pickupPriority >= 1 )
  {
    QuestBoardListViewItemDraw__SetStatusToggle(this, v159);
  }
  StatusSp = QuestBoardListViewItemDraw__GetStatusSp(this, 2, v160);
  if ( !StatusSp )
    goto LABEL_645;
  v162 = StatusSp;
  if ( UnityEngine_GameObject__get_activeSelf(StatusSp, 0LL) )
  {
    v163 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v163 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v162, v163->static_fields->CLEAR_POS_QUEST, 0LL);
  }
  mNoBattleObj = this->fields.mNoBattleObj;
  v579 = v143;
  if ( !mNoBattleObj )
    goto LABEL_645;
  UnityEngine_GameObject__SetActive(mNoBattleObj, isRepeatFirst, 0LL);
  RecommendLv = QuestBoardListViewItemDraw__GetRecommendLv(v165, v588, questPhase, !isRepeatFirst, dispType == 2, v166);
  mTitleLevelRoot = this->fields.mTitleLevelRoot;
  v169 = RecommendLv;
  IsNullOrEmpty = System_String__IsNullOrEmpty(RecommendLv, 0LL);
  if ( !mTitleLevelRoot )
    goto LABEL_645;
  UnityEngine_GameObject__SetActive(mTitleLevelRoot, !IsNullOrEmpty, 0LL);
  v171 = this->fields.mTitleLevelRoot;
  if ( !v171 )
    goto LABEL_645;
  if ( UnityEngine_GameObject__get_activeSelf(v171, 0LL) )
  {
    mTitleLevelLb = this->fields.mTitleLevelLb;
    if ( !mTitleLevelLb )
      goto LABEL_645;
    UILabel__set_text(mTitleLevelLb, v169, 0LL);
    v174 = (UIWidget_o *)this->fields.mTitleLevelLb;
    if ( !v174 )
      goto LABEL_645;
    v609.fields.r = *v86;
    v609.fields.b = *v594;
    v609.fields.g = *v593;
    v609.fields.a = *v586;
    UIWidget__set_color(v174, v609, 0LL);
    mTitleLevelSp = (UIWidget_o *)this->fields.mTitleLevelSp;
    if ( !mTitleLevelSp )
      goto LABEL_645;
    v610.fields.r = *v86;
    v610.fields.g = *v593;
    v610.fields.b = *v594;
    v610.fields.a = *v586;
    UIWidget__set_color(mTitleLevelSp, v610, 0LL);
    mTitleLevelStrSp = (UIWidget_o *)this->fields.mTitleLevelStrSp;
    if ( !mTitleLevelStrSp )
      goto LABEL_645;
    v611.fields.r = *v86;
    v611.fields.g = *v593;
    v611.fields.b = *v594;
    v611.fields.a = *v586;
    UIWidget__set_color(mTitleLevelStrSp, v611, 0LL);
    v177 = (UnityEngine_Component_o *)this->fields.mTitleLevelSp;
    if ( !v177 )
      goto LABEL_645;
    v178 = UnityEngine_Component__get_gameObject(v177, 0LL);
    v179 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v179 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionX(v178, (float)v179->static_fields->TITLE_LEVEL_BASE_X, 0LL);
    v180 = (UnityEngine_Component_o *)this->fields.mTitleLevelSp;
    if ( !v180 )
      goto LABEL_645;
    v181 = UnityEngine_Component__get_gameObject(v180, 0LL);
    v182 = this->fields.mTitleLevelLb;
    if ( !v182 )
      goto LABEL_645;
    mWidth = v182->fields.mWidth;
    if ( mWidth <= 0 )
      v184 = -mWidth;
    else
      v184 = 1 - mWidth;
    GameObjectExtensions__AddLocalPositionX(v181, (float)(v184 >> 1), 0LL);
  }
  v185 = this->fields.mLabelFaceMaskQuestSp;
  v186 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v186 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  }
  mMatrixFrame = v186->fields.mTitleLevelSp[1].fields.mMatrixFrame;
  FaceMaskSpriteName = QuestBoardListViewItemDraw__GetFaceMaskSpriteName(v186, v74, v172);
  v612.fields.r = *v86;
  v612.fields.g = *v593;
  v612.fields.b = *v594;
  v612.fields.a = *v586;
  v190 = QuestBoardListViewItemDraw__SetFaceImage(this, v588, v185, mMatrixFrame, FaceMaskSpriteName, v612, v189);
  mTitleNameLb = this->fields.mTitleNameLb;
  if ( v190 )
  {
    DispQuestName = QuestBoardListViewItemDraw__GetDispQuestName(this, v588, v74, v191);
    if ( !mTitleNameLb )
      goto LABEL_645;
    v194 = v588;
    UILabel__set_text(mTitleNameLb, DispQuestName, 0LL);
    v197 = (float *)(v61 + 36);
    goto LABEL_160;
  }
  QuestName = QuestEntity__getQuestName(v588, 0LL);
  if ( !mTitleNameLb )
    goto LABEL_645;
  v194 = v588;
  UILabel__set_text(mTitleNameLb, QuestName, 0LL);
  if ( v74 != 1
    || !(enabled = QuestBoardListViewItemDraw__IsMainWar(v199, quest_info_k__BackingField->fields.warId, v200)) )
  {
    boardIconTexture = (UnityEngine_Behaviour_o *)this->fields.boardIconTexture;
    if ( !boardIconTexture )
      goto LABEL_645;
    UnityEngine_Behaviour__set_enabled(boardIconTexture, 0, 0LL);
    v209 = (UnityEngine_Component_o *)this->fields.mLabelNameSp;
    if ( !v209 )
      goto LABEL_645;
    v210 = UnityEngine_Component__get_gameObject(v209, 0LL);
    if ( !v210 )
      goto LABEL_645;
    UnityEngine_GameObject__SetActive(v210, 1, 0LL);
    v211 = this->fields.mLabelNameSp;
    QuestIconName = QuestBoardListViewItemDraw__GetQuestIconName(v212, v588, v74, v213);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    v215 = AtlasManager__SetEventUI(v211, QuestIconName, 0LL);
    v197 = (float *)(v61 + 36);
    if ( !v211 )
      goto LABEL_645;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v211, v215, 0LL);
    v216 = this->fields.mLabelNameSp;
    v194 = v588;
    if ( !v216 )
      goto LABEL_645;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v216->klass->vtable._33_MakePixelPerfect.method)(
      v216,
      v216->klass->vtable._34_get_minWidth.methodPtr);
    v217 = (UnityEngine_Component_o *)this->fields.mLabelNameSp;
    if ( !v217 )
      goto LABEL_645;
    v218 = UnityEngine_Component__get_gameObject(v217, 0LL);
    if ( !v218 )
      goto LABEL_645;
    v219 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                           v218,
                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !v219 )
      goto LABEL_645;
    v613.fields.r = *v86;
    v613.fields.a = *v586;
    v613.fields.g = *v593;
    v613.fields.b = *v594;
    UIWidget__set_color(v219, v613, 0LL);
    v220 = (UnityEngine_Behaviour_o *)this->fields.mLabelNameSp;
    if ( !v220 )
      goto LABEL_645;
    enabled = UnityEngine_Behaviour__get_enabled(v220, 0LL);
    if ( !enabled )
    {
      *(_DWORD *)(v61 + 40) = v588->fields.id;
      v224 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v221, v222, v196, v223);
      System_Action___ctor(
        v224,
        (Il2CppObject *)v61,
        Method_QuestBoardListViewItemDraw___c__DisplayClass299_0__SetItemOfQuest_b__0__,
        0LL);
      QuestBoardListViewItemDraw__LoadBoardIconTexture(this, v588, v224, v225);
    }
LABEL_160:
    if ( dispType != 2 )
      goto LABEL_164;
    goto LABEL_161;
  }
  v197 = (float *)(v61 + 36);
  if ( dispType == 2 )
  {
LABEL_161:
    if ( quest_info_k__BackingField->fields.questReleaseClosedID >= 1 )
    {
      v226 = this->fields.mTitleNameLb;
      AdvanceNoticeText = QuestBoardListViewItemDraw__GetAdvanceNoticeText(
                            (QuestBoardListViewItemDraw_o *)enabled,
                            quest_info_k__BackingField,
                            v194,
                            v196);
      if ( !v226 )
        goto LABEL_645;
      UILabel__set_text(v226, AdvanceNoticeText, 0LL);
    }
    goto LABEL_164;
  }
  mLabelSubSectionNumLb = (UnityEngine_Component_o *)this->fields.mLabelSubSectionNumLb;
  if ( !mLabelSubSectionNumLb )
    goto LABEL_645;
  v202 = UnityEngine_Component__get_gameObject(mLabelSubSectionNumLb, 0LL);
  if ( !v202 )
    goto LABEL_645;
  UnityEngine_GameObject__SetActive(v202, 0, 0LL);
  if ( v588->fields.iconId <= 0 && System_String__IsNullOrEmpty(v588->fields.chapterSubStr, 0LL) )
  {
    v203 = this->fields.mLabelSubSectionNumLb;
    v205 = QuestEntity__HasFlag(v588, 0x40000LL, 0LL);
    p_chapterSubId = (QuestBoardListViewItemDraw_o *)&v588->fields.chapterSubId;
    if ( v205 )
      v207 = QuestBoardListViewItemDraw__ConvertToChineseAscii(p_chapterSubId, (int32_t)p_chapterSubId->klass, v204);
    else
      v207 = System_Int32__ToString((int32_t)p_chapterSubId, 0LL);
    if ( !v203 )
      goto LABEL_645;
    UILabel__set_text(v203, v207, 0LL);
    v551 = (UnityEngine_Component_o *)this->fields.mLabelSubSectionNumLb;
    if ( !v551 )
      goto LABEL_645;
    v552 = UnityEngine_Component__get_gameObject(v551, 0LL);
    if ( !v552 )
      goto LABEL_645;
    UnityEngine_GameObject__SetActive(v552, 1, 0LL);
  }
  v553 = (UnityEngine_Component_o *)this->fields.mLabelChapterSp;
  if ( !v553 )
    goto LABEL_645;
  v554 = UnityEngine_Component__get_gameObject(v553, 0LL);
  if ( !v554 )
    goto LABEL_645;
  UnityEngine_GameObject__SetActive(v554, 1, 0LL);
  v555 = this->fields.mLabelChapterSp;
  QuestIconNameForMainType = QuestBoardListViewItemDraw__GetQuestIconNameForMainType(v556, v588, v557);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  v559 = AtlasManager__SetEventUI(v555, QuestIconNameForMainType, 0LL);
  if ( !v555 )
    goto LABEL_645;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v555, v559, 0LL);
  v560 = this->fields.mLabelChapterSp;
  if ( !v560 )
    goto LABEL_645;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v560->klass->vtable._33_MakePixelPerfect.method)(
    v560,
    v560->klass->vtable._34_get_minWidth.methodPtr);
  WarInfo_k__BackingField = quest_info_k__BackingField->fields._WarInfo_k__BackingField;
  if ( !WarInfo_k__BackingField )
    goto LABEL_645;
  v562 = MapControl_WarInfo__GetMine(WarInfo_k__BackingField, 0LL);
  if ( !v562 )
    goto LABEL_645;
  QuestBoardSectionId = WarEntity__GetQuestBoardSectionId(v562, 0LL);
  if ( QuestBoardSectionId )
  {
    v564 = QuestBoardSectionId;
    mLabelBoardSectionSp = this->fields.mLabelBoardSectionSp;
    v566 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v566 = QuestBoardListViewItemDraw_TypeInfo;
    }
    CHAPTER_SP_UNIT_NAME = v566->static_fields->CHAPTER_SP_UNIT_NAME;
    LODWORD(knockdownNum) = v564;
    v568 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &knockdownNum);
    v569 = System_String__Format(CHAPTER_SP_UNIT_NAME, v568, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    v570 = AtlasManager__SetEventUI(mLabelBoardSectionSp, v569, 0LL);
    v194 = v588;
    if ( !mLabelBoardSectionSp )
      goto LABEL_645;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLabelBoardSectionSp, v570, 0LL);
    v571 = this->fields.mLabelBoardSectionSp;
    if ( !v571 )
      goto LABEL_645;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v571->klass->vtable._33_MakePixelPerfect.method)(
      v571,
      v571->klass->vtable._34_get_minWidth.methodPtr);
  }
LABEL_164:
  v228 = this->fields.mTitleNameLb;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  }
  if ( !v228 )
    goto LABEL_645;
  UILabel__SetCondensedScale(v228, QuestBoardListViewItemDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH, 0LL);
  v229 = (UIWidget_o *)this->fields.mTitleNameLb;
  if ( !v229 )
    goto LABEL_645;
  v614.fields.r = *v86;
  v614.fields.a = *v197;
  v614.fields.g = *v593;
  v614.fields.b = *v594;
  UIWidget__set_color(v229, v614, 0LL);
  if ( dispType == 2 )
  {
    v231 = (QuestReleaseOverwriteMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              v585,
                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
    if ( !v231 )
      goto LABEL_645;
    EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(v231, v194->fields.id, nowTime, 0LL);
    QuestBoardListViewItemDraw__SetupCondtionChangeMessage(this, EntityByQuestIdAndTime, v233);
  }
  nowTimea = !isRepeatFirst;
  v615.fields.r = *v86;
  v615.fields.a = *v197;
  v615.fields.g = *v593;
  v615.fields.b = *v594;
  QuestBoardListViewItemDraw__SetupRewardIconDisp(this, v194, dispType == 2, v615, v230);
  v234 = quest_info_k__BackingField->fields.questId;
  afterClear = v194->fields.afterClear;
  v236 = *v86;
  v237 = *v593;
  v238 = *v594;
  v239 = *v197;
  IsRepeatReward = QuestEntity__IsRepeatReward(v194, 0LL);
  v616.fields.r = v236;
  v616.fields.g = v237;
  v616.fields.b = v238;
  v616.fields.a = v239;
  QuestBoardListViewItemDraw__SetupFirstRewardDisp(this, v234, afterClear, v616, IsRepeatReward, v241);
  v617.fields.r = *v86;
  v617.fields.g = *v593;
  v617.fields.b = *v594;
  v617.fields.a = *v197;
  QuestBoardListViewItemDraw__SetupRewardGotAndNotGiveDisp(this, quest_info_k__BackingField, entity, v617, v242);
  if ( !entity )
  {
    v243 = v582;
    goto LABEL_178;
  }
  v243 = v582;
  if ( !UserQuestEntity__HasStatus(entity, 8, 0LL) )
  {
LABEL_178:
    v247 = 0;
    v246 = 0;
    goto LABEL_179;
  }
  v244 = quest_info_k__BackingField->fields._WarInfo_k__BackingField;
  if ( !v244 )
    goto LABEL_645;
  v245 = MapControl_WarInfo__GetMine(v244, 0LL);
  if ( !v245 )
    goto LABEL_645;
  v246 = !WarEntity__IsShop(v245, 0LL);
  v247 = 1;
LABEL_179:
  mRarePrismSp = (UnityEngine_Component_o *)this->fields.mRarePrismSp;
  if ( !mRarePrismSp )
    goto LABEL_645;
  v249 = UnityEngine_Component__get_gameObject(mRarePrismSp, 0LL);
  if ( !v249 )
    goto LABEL_645;
  UnityEngine_GameObject__SetActive(v249, v246, 0LL);
  QuestBoardListViewItemDraw__ResetInfoTextList(this, v250);
  fixedVal[1] = -1;
  costCalcVal = 0;
  mInfoTextList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields.mInfoTextList;
  CampaignText = (System_Collections_Generic_IEnumerable_T__o *)QuestBoardListViewItemDraw__GetCampaignText(
                                                                  this,
                                                                  v194->fields.id,
                                                                  questPhase,
                                                                  v579 & 1,
                                                                  &costCalcVal,
                                                                  &fixedVal[1],
                                                                  v252);
  if ( !mInfoTextList )
    goto LABEL_645;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    mInfoTextList,
    CampaignText,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
  v254 = (UnityEngine_Component_o *)this->fields.mRarePrismSp;
  if ( !v254 )
    goto LABEL_645;
  v255 = UnityEngine_Component__get_gameObject(v254, 0LL);
  if ( !v255 )
    goto LABEL_645;
  if ( v247 | UnityEngine_GameObject__get_activeSelf(v255, 0LL) )
  {
    if ( !entity )
      goto LABEL_645;
    if ( UserQuestEntity__IsExpireNoLimit(entity, 0LL) )
      goto LABEL_197;
    if ( !entity )
      goto LABEL_645;
    p_expireAt = &entity->fields.expireAt;
  }
  else
  {
    p_expireAt = &quest_info_k__BackingField->fields.endTime;
  }
  v257 = *p_expireAt;
  if ( *p_expireAt >= 1 && !QuestEntity__HasFlag(v194, 32LL, 0LL) )
  {
    v258 = this->fields.mInfoTextList;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v259 = LocalizationManager__Get((System_String_o *)StringLiteral_13352, 0LL);
    v264 = (QuestBoardInformaionText_o *)sub_B170CC(QuestBoardInformaionText_TypeInfo, v260, v261, v262, v263);
    v618.fields.r = 0.0;
    v618.fields.g = 0.0;
    v618.fields.b = 0.0;
    v618.fields.a = 0.0;
    v607.fields.x = 0.0;
    v607.fields.y = 0.0;
    v607.fields.z = 0.0;
    v265 = (EventMissionProgressRequest_Argument_ProgressData_o *)v264;
    QuestBoardInformaionText___ctor(v264, v259, v257, 0, 0, v618, -1, 0, v607, 1, v575, 0LL, v576);
    if ( !v258 )
      goto LABEL_645;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v258,
      v265,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
    v194 = v588;
    v197 = v586;
  }
LABEL_197:
  v266 = this->fields.mInfoTextList;
  if ( !v266 )
    goto LABEL_645;
  size = v266->fields._size;
  p_mOptionInfoLb = (UnityEngine_Component_o **)&this->fields.mOptionInfoLb;
  if ( size < 1 )
  {
    v276 = 0;
    goto LABEL_209;
  }
  v269 = this->fields.mListViewObject;
  if ( !v269 )
    goto LABEL_645;
  v270 = (QuestBoardListViewManager_o *)v269->fields.manager;
  if ( !v270 )
    goto LABEL_645;
  v271 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v270->klass->_2.bitflags2 + 1) < (unsigned int)v271
    || (QuestBoardListViewManager_c *)v270->klass->_2.typeHierarchy[v271 - 1] != QuestBoardListViewManager_TypeInfo )
  {
LABEL_649:
    sub_B173C8(v270);
    QuestBoardListViewItemDraw__SetItemOfWarBoard(v572, v573, v574);
    return;
  }
  AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt(v270, size, 0LL);
  if ( v266->fields._size <= (unsigned int)AlphaAnimCnt )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v274 = v266->fields._items->m_Items[AlphaAnimCnt];
  if ( !v274 )
    goto LABEL_645;
  QuestBoardInformaionText__SetTime(v274, &this->fields.mOptionInfoLb, &this->fields.mOptionInfoFrameSp, v272);
  v275 = this->fields.mOptionInfoLb;
  if ( !v275 )
    goto LABEL_645;
  BoardOptionTextWithIconComponent__set_Alpha(v275, 1.0, 0LL);
  v276 = 1;
  quest_info_k__BackingField->fields.costCalcVal = costCalcVal;
  quest_info_k__BackingField->fields._fixedCostVal_k__BackingField = fixedVal[1];
LABEL_209:
  if ( !*p_mOptionInfoLb )
    goto LABEL_645;
  transform = UnityEngine_Component__get_transform(*p_mOptionInfoLb, 0LL);
  if ( !transform )
    goto LABEL_645;
  parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !parent )
    goto LABEL_645;
  v279 = UnityEngine_Component__get_gameObject(parent, 0LL);
  if ( !v279 )
    goto LABEL_645;
  UnityEngine_GameObject__SetActive(v279, v276, 0LL);
  if ( !*p_mOptionInfoLb )
    goto LABEL_645;
  v280 = UnityEngine_Component__get_gameObject(*p_mOptionInfoLb, 0LL);
  if ( !v280 )
    goto LABEL_645;
  UnityEngine_GameObject__SetActive(v280, v276, 0LL);
  v619.fields.r = *v86;
  v619.fields.g = *v593;
  v619.fields.b = *v594;
  v619.fields.a = *v197;
  QuestBoardListViewItemDraw__SetCostDisp(
    this,
    v194,
    dispType == 2,
    costCalcVal,
    fixedVal[1],
    v619,
    &isDoubleItemConsume,
    &isDoubleItemConsumeQp,
    &isTripleItemConsume,
    (const MethodInfo *)v575);
  v282 = v243->fields._OverwriteBannerId_k__BackingField;
  if ( v282 >= 1 )
  {
    mCostApSp = this->fields.mCostApSp;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    }
    ApSpriteFileName = QuestBoardListViewItemDraw__GetApSpriteFileName(v282, v281);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    v285 = AtlasManager__SetEventUI(mCostApSp, ApSpriteFileName, 0LL);
    if ( !mCostApSp )
      goto LABEL_645;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mCostApSp, v285, 0LL);
  }
  mChallengeObj = this->fields.mChallengeObj;
  if ( isRepeatFirst || QuestEntity__HasFlag(v194, 0x4000LL, 0LL) || !QuestEntity__HasFlag(v194, 4LL, 0LL) )
  {
    v287 = 0;
    if ( !mChallengeObj )
      goto LABEL_645;
  }
  else
  {
    v287 = v194->fields.afterClear != 1;
    if ( !mChallengeObj )
      goto LABEL_645;
  }
  UnityEngine_GameObject__SetActive(mChallengeObj, v287, 0LL);
  v288 = this->fields.mChallengeObj;
  if ( !v288 )
    goto LABEL_645;
  if ( UnityEngine_GameObject__get_activeSelf(v288, 0LL) )
  {
    v289 = QuestBoardListViewItemDraw_TypeInfo;
    if ( isDoubleItemConsume )
    {
      if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v289 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v290 = v289->static_fields;
      p_x = &v290->CHALLENGE_OBJ_POS_DOUBLE.fields.x;
      p_y = &v290->CHALLENGE_OBJ_POS_DOUBLE.fields.y;
      p_z = &v290->CHALLENGE_OBJ_POS_DOUBLE.fields.z;
    }
    else
    {
      if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v289 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v296 = v289->static_fields;
      p_x = &v296->CHALLENGE_OBJ_POS_SINGLE.fields.x;
      p_y = &v296->CHALLENGE_OBJ_POS_SINGLE.fields.y;
      p_z = &v296->CHALLENGE_OBJ_POS_SINGLE.fields.z;
    }
    v604.fields.y = *p_y;
    v604.fields.x = *p_x;
    v604.fields.z = *p_z;
    GameObjectExtensions__SetLocalPosition(this->fields.mChallengeObj, v604, 0LL);
    v297 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            v585,
                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !v297 )
      goto LABEL_645;
    v298 = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v297,
                                    key,
                                    (const MethodInfo_266F388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    if ( !QuestEntity__HasFlag(v194, 4LL, 0LL) )
      goto LABEL_652;
    if ( !v298 )
      goto LABEL_645;
    if ( EventDetailEntity__isRaidDefeatCount(v298, 0LL) )
    {
      if ( entity )
        ClearNum = UserQuestEntity__getClearNum(entity, 0LL);
      else
        ClearNum = 0;
      challengeStrSpr = this->fields.challengeStrSpr;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventUI(challengeStrSpr, (System_String_o *)StringLiteral_21545, 0LL);
    }
    else
    {
LABEL_652:
      if ( entity )
        ClearNum = entity->fields.challengeNum;
      else
        ClearNum = 0;
      v306 = this->fields.challengeStrSpr;
      if ( !v306 )
        goto LABEL_645;
      UISprite__set_spriteName(v306, (System_String_o *)StringLiteral_21544, 0LL);
    }
    p_mChallengeLb = (UIWidget_o **)&this->fields.mChallengeLb;
    mChallengeLb = this->fields.mChallengeLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    NumberFormat = LocalizationManager__GetNumberFormat(ClearNum, 0LL);
    if ( !mChallengeLb )
      goto LABEL_645;
    UILabel__set_text(mChallengeLb, NumberFormat, 0LL);
    v310 = this->fields.challengeStrSpr;
    if ( !v310 )
      goto LABEL_645;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v310->klass->vtable._33_MakePixelPerfect.method)(
      v310,
      v310->klass->vtable._34_get_minWidth.methodPtr);
  }
  else
  {
    p_mChallengeLb = (UIWidget_o **)&this->fields.mChallengeLb;
  }
  if ( !*p_mChallengeLb )
    goto LABEL_645;
  v620.fields.r = *v86;
  v620.fields.g = *v593;
  v620.fields.a = *v197;
  v620.fields.b = *v594;
  UIWidget__set_color(*p_mChallengeLb, v620, 0LL);
  v311 = this->fields.mChallengeObj;
  if ( !v311 )
    goto LABEL_645;
  if ( (mPhaseObj = this->fields.mPhaseObj, UnityEngine_GameObject__get_activeSelf(v311, 0LL))
    || QuestEntity__HasFlag(v194, 0x4000LL, 0LL)
    || QuestEntity__HasFlag(v194, 0x10000LL, 0LL)
    || dispType == 2 && QuestEntity__HasFlag(v194, 512LL, 0LL)
    || QuestEntity__HasFlag(v194, 0x4000000LL, 0LL) )
  {
    v313 = 0;
  }
  else
  {
    v313 = !HasFlag & ~QuestEntity__HasFlag(v194, 0x2000000000LL, 0LL) & 1;
  }
  v583 = dispType;
  if ( !mPhaseObj )
    goto LABEL_645;
  UnityEngine_GameObject__SetActive(mPhaseObj, v313, 0LL);
  v314 = this->fields.mPhaseObj;
  if ( !v314 )
    goto LABEL_645;
  v315 = this;
  if ( UnityEngine_GameObject__get_activeSelf(v314, 0LL) )
  {
    QuestBoardListViewItemDraw__InitPhase(this, isDoubleItemConsume, isDoubleItemConsumeQp, isTripleItemConsume, v316);
    v317 = v588->fields.afterClear;
    v301 = (QuestBoardListViewItemDraw_c *)MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0LL);
    v318 = QuestBoardListViewItemDraw_TypeInfo;
    v319 = (int)v301;
    v320 = WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr);
    if ( (v320 & 0x400) != 0 )
    {
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v318 = QuestBoardListViewItemDraw_TypeInfo;
        v320 = WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr);
      }
      v321 = v320 & 0x400;
    }
    else
    {
      v321 = 0;
    }
    v322 = v318->static_fields;
    PHASE_NORMAL_MAX = v322->PHASE_NORMAL_MAX;
    v324 = v319 > PHASE_NORMAL_MAX;
    if ( v321 && !v318->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v318);
      v318 = QuestBoardListViewItemDraw_TypeInfo;
      v322 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
      PHASE_NORMAL_MAX = v322->PHASE_NORMAL_MAX;
      v321 = WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400;
    }
    isRepeatFirsta = v317 == 2 && v583 != 2;
    if ( v319 <= PHASE_NORMAL_MAX )
    {
      if ( v321 && !v318->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v318);
        v318 = QuestBoardListViewItemDraw_TypeInfo;
        v322 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
      }
      p_QUEST_BOARD_PHASE_INTERVAL = &v322->QUEST_BOARD_PHASE_INTERVAL;
    }
    else
    {
      if ( v321 && !v318->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v318);
        v318 = QuestBoardListViewItemDraw_TypeInfo;
        v322 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
      }
      p_QUEST_BOARD_PHASE_INTERVAL = &v322->QUEST_BOARD_PHASE_EX_INTERVAL;
    }
    v326 = 0;
    v327 = v319 - 1;
    v328 = v583 == 2 && v317 == 5;
    v329 = -*p_QUEST_BOARD_PHASE_INTERVAL;
    v330 = v317 - 3;
    while ( 1 )
    {
      if ( (BYTE3(v318->vtable._0_Equals.methodPtr) & 4) != 0 && !v318->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v318);
        v318 = QuestBoardListViewItemDraw_TypeInfo;
      }
      if ( v326 >= v318->static_fields->PHASE_EXTRA_MAX )
        break;
      mPhaseSp = v315->fields.mPhaseSp;
      if ( !mPhaseSp )
        goto LABEL_645;
      if ( v326 >= mPhaseSp->max_length )
        goto LABEL_647;
      v332 = &mPhaseSp->obj.klass + v326;
      v333 = (UISprite_o *)v332[4];
      if ( !v333 )
        goto LABEL_645;
      v334 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v332[4], 0LL);
      if ( !v334 )
        goto LABEL_645;
      UnityEngine_GameObject__SetActive(v334, v326 < v319, 0LL);
      if ( v326 < v319 )
      {
        v336 = !HasFlag && v326 < v587[11];
        PhaseArrowSpriteName = QuestBoardListViewItemDraw__GetPhaseArrowSpriteName(
                                 (QuestBoardListViewItemDraw_o *)v301,
                                 v324,
                                 v336,
                                 v327 == v326,
                                 isRepeatFirsta,
                                 (v327 == v326) & (unsigned __int8)(v330 < 2),
                                 v335);
        UISprite__set_spriteName(v333, PhaseArrowSpriteName, 0LL);
        if ( v328 )
          *(UnityEngine_Color_o *)&v338 = UnityEngine_Color__get_gray(0LL);
        else
          *(UnityEngine_Color_o *)&v338 = UnityEngine_Color__get_white(0LL);
        UIWidget__set_color((UIWidget_o *)v333, *(UnityEngine_Color_o *)&v338, 0LL);
        PhaseArrowIntervalSize = QuestBoardListViewItemDraw__GetPhaseArrowIntervalSize(
                                   v342,
                                   v324,
                                   v327 == v326 && v330 < 2,
                                   v343);
        v345 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v333, 0LL);
        if ( !v345 )
          goto LABEL_645;
        v329 += PhaseArrowIntervalSize;
        v605.fields.x = (float)v329;
        v605.fields.y = 0.0;
        v605.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition(v345, v605, 0LL);
        v301 = (QuestBoardListViewItemDraw_c *)((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v333->klass->vtable._33_MakePixelPerfect.method)(
                                                 v333,
                                                 v333->klass->vtable._34_get_minWidth.methodPtr);
      }
      v318 = QuestBoardListViewItemDraw_TypeInfo;
      ++v326;
    }
  }
  mDamageRecordSp = (UnityEngine_Component_o *)v315->fields.mDamageRecordSp;
  if ( !mDamageRecordSp )
    goto LABEL_645;
  v347 = v588;
  v348 = UnityEngine_Component__get_gameObject(mDamageRecordSp, 0LL);
  v349 = QuestEntity__HasFlag(v588, 0x4000000LL, 0LL);
  v350 = v586;
  v351 = v593;
  if ( !v348 )
    goto LABEL_645;
  UnityEngine_GameObject__SetActive(v348, v349, 0LL);
  v352 = (UnityEngine_Component_o *)v315->fields.mDamageRecordSp;
  if ( !v352 )
    goto LABEL_645;
  v353 = UnityEngine_Component__get_gameObject(v352, 0LL);
  if ( !v353 )
    goto LABEL_645;
  if ( UnityEngine_GameObject__get_activeSelf(v353, 0LL) )
  {
    v354 = QuestBoardListViewItemDraw_TypeInfo;
    v355 = v315->fields.mDamageRecordSp;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v354 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_DAMAGE_RECODE_NAME = v354->static_fields->QUEST_BOARD_DAMAGE_RECODE_NAME;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetBanner(v355, QUEST_BOARD_DAMAGE_RECODE_NAME, 0LL);
    v357 = (UserQuestRecordMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        v585,
                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserQuestRecordMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v358 = NetworkManager__get_UserId(0LL);
    if ( !v357 )
      goto LABEL_645;
    MaxTurnDamage = UserQuestRecordMaster__GetMaxTurnDamage(v357, v358, v588->fields.id, 0LL);
    mDamageRecordLb = v315->fields.mDamageRecordLb;
    knockdownNum = MaxTurnDamage;
    v361 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &knockdownNum);
    v362 = System_String__Format((System_String_o *)StringLiteral_23395, v361, 0LL);
    if ( !mDamageRecordLb )
      goto LABEL_645;
    UILabel__set_text(mDamageRecordLb, v362, 0LL);
    v363 = (UIWidget_o *)v315->fields.mDamageRecordSp;
    if ( !v363 )
      goto LABEL_645;
    v621.fields.g = *v593;
    v621.fields.b = *v594;
    v621.fields.a = *v586;
    v621.fields.r = *v591;
    UIWidget__set_color(v363, v621, 0LL);
    v364 = (UIWidget_o *)v315->fields.mDamageRecordLb;
    if ( !v364 )
      goto LABEL_645;
    v622.fields.r = *v591;
    v622.fields.g = *v593;
    v622.fields.b = *v594;
    v622.fields.a = *v586;
    UIWidget__set_color(v364, v622, 0LL);
  }
  mKnockdownRecordSp = (UnityEngine_Component_o *)v315->fields.mKnockdownRecordSp;
  if ( !mKnockdownRecordSp )
    goto LABEL_645;
  v366 = UnityEngine_Component__get_gameObject(mKnockdownRecordSp, 0LL);
  v367 = QuestEntity__HasFlag(v588, 0x2000000000LL, 0LL);
  if ( !v366 )
    goto LABEL_645;
  UnityEngine_GameObject__SetActive(v366, v367, 0LL);
  v368 = (UnityEngine_Component_o *)v315->fields.mKnockdownRecordSp;
  if ( !v368 )
    goto LABEL_645;
  v369 = UnityEngine_Component__get_gameObject(v368, 0LL);
  if ( !v369 )
    goto LABEL_645;
  if ( !UnityEngine_GameObject__get_activeSelf(v369, 0LL) )
    goto LABEL_411;
  v370 = QuestBoardListViewItemDraw_TypeInfo;
  v371 = v315->fields.mKnockdownRecordSp;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v370 = QuestBoardListViewItemDraw_TypeInfo;
  }
  QUEST_BOARD_KNOCKDOWN_RECODE_NAME = v370->static_fields->QUEST_BOARD_KNOCKDOWN_RECODE_NAME;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(v371, QUEST_BOARD_KNOCKDOWN_RECODE_NAME, 0LL);
  v377 = (QuestKnockdownInfo_o *)sub_B170CC(QuestKnockdownInfo_TypeInfo, v373, v374, v375, v376);
  QuestKnockdownInfo___ctor(v377, 0LL);
  v378 = (UserQuestRecordMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      v585,
                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserQuestRecordMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v379 = NetworkManager__get_UserId(0LL);
  if ( !v378 )
    goto LABEL_645;
  UserQuestRecordMaster__GetKnockdownRecordinfo(v378, v379, v588->fields.id, v377, 0LL);
  mKnockdownRecordCountLb = v315->fields.mKnockdownRecordCountLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v381 = LocalizationManager__Get((System_String_o *)StringLiteral_10857, 0LL);
  if ( !v377 )
    goto LABEL_645;
  v382 = v381;
  knockdownNum = v377->fields.knockdownNum;
  v383 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &knockdownNum);
  v384 = System_String__Format(v382, v383, 0LL);
  if ( !mKnockdownRecordCountLb )
    goto LABEL_645;
  UILabel__set_text(mKnockdownRecordCountLb, v384, 0LL);
  mKnockdownRecordDamageLb = v315->fields.mKnockdownRecordDamageLb;
  v386 = LocalizationManager__Get((System_String_o *)StringLiteral_10858, 0LL);
  totalDamage = v377->fields.totalDamage;
  v387 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &totalDamage);
  v388 = System_String__Format(v386, v387, 0LL);
  if ( !mKnockdownRecordDamageLb )
    goto LABEL_645;
  UILabel__set_text(mKnockdownRecordDamageLb, v388, 0LL);
  mKnockdownRecordPlusLb = v315->fields.mKnockdownRecordPlusLb;
  v390 = LocalizationManager__Get((System_String_o *)StringLiteral_10860, 0LL);
  v391 = (_QWORD **)Method_System_Array_Empty_object___;
  v392 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
  v393 = *(_WORD *)(v392 + 306);
  if ( (v393 & 1) == 0 )
  {
    sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
    v393 = *(_WORD *)(v392 + 306);
  }
  if ( (v393 & 0x400) != 0 )
  {
    v394 = *v391[6];
    if ( (*(_BYTE *)(v394 + 306) & 1) == 0 )
      sub_AAFCFC(*v391[6]);
    if ( !*(_DWORD *)(v394 + 224) )
    {
      v395 = *v391[6];
      if ( (*(_BYTE *)(v395 + 306) & 1) == 0 )
        sub_AAFCFC(*v391[6]);
      j_il2cpp_runtime_class_init_0(v395);
    }
  }
  v396 = *v391[6];
  if ( (*(_BYTE *)(v396 + 306) & 1) == 0 )
    sub_AAFCFC(*v391[6]);
  v397 = System_String__Format_43822456(v390, **(System_Object_array ***)(v396 + 184), 0LL);
  v351 = v593;
  if ( !mKnockdownRecordPlusLb )
    goto LABEL_645;
  UILabel__set_text(mKnockdownRecordPlusLb, v397, 0LL);
  mKnockdownRecordDamageNameLb = v315->fields.mKnockdownRecordDamageNameLb;
  v399 = LocalizationManager__Get((System_String_o *)StringLiteral_10859, 0LL);
  v400 = (_QWORD **)Method_System_Array_Empty_object___;
  v401 = v399;
  v402 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
  v403 = *(_WORD *)(v402 + 306);
  if ( (v403 & 1) == 0 )
  {
    sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
    v403 = *(_WORD *)(v402 + 306);
  }
  if ( (v403 & 0x400) != 0 )
  {
    v404 = *v400[6];
    if ( (*(_BYTE *)(v404 + 306) & 1) == 0 )
      sub_AAFCFC(*v400[6]);
    if ( !*(_DWORD *)(v404 + 224) )
    {
      v405 = *v400[6];
      if ( (*(_BYTE *)(v405 + 306) & 1) == 0 )
        sub_AAFCFC(*v400[6]);
      j_il2cpp_runtime_class_init_0(v405);
    }
  }
  v406 = *v400[6];
  if ( (*(_BYTE *)(v406 + 306) & 1) == 0 )
    sub_AAFCFC(*v400[6]);
  v407 = System_String__Format_43822456(v401, **(System_Object_array ***)(v406 + 184), 0LL);
  if ( !mKnockdownRecordDamageNameLb
    || (UILabel__set_text(mKnockdownRecordDamageNameLb, v407, 0LL),
        v408 = v315->fields.mKnockdownRecordDamageLb,
        v350 = v586,
        !v408)
    || (UILabel__SetCondensedScale(
          v408,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_KNOCKDOWN_DAMAGE_WIDTH,
          0LL),
        v409 = (UIWidget_o *)v315->fields.mKnockdownRecordDamageLb,
        v347 = v588,
        !v409) )
  {
LABEL_645:
    sub_B170D4();
  }
  if ( v377->fields.totalDamage <= 0 )
  {
    UIWidget__set_pivot(v409, 3, 0LL);
    v414 = (UnityEngine_Component_o *)v315->fields.mKnockdownRecordDamageLb;
    if ( !v414 )
      goto LABEL_645;
    v415 = UnityEngine_Component__get_gameObject(v414, 0LL);
    if ( !v315->fields.mKnockdownRecordPlusLb )
      goto LABEL_552;
    v411 = v415;
    v416 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v315->fields.mKnockdownRecordPlusLb, 0LL);
    LocalPositionX = GameObjectExtensions__GetLocalPositionX(v416, 0LL);
    v418 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v418 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX = LocalPositionX
                                      + (float)v418->static_fields->QUEST_BOARD_KNOCKDOWN_ZERO_DAMAGE_POSX;
  }
  else
  {
    UIWidget__set_pivot(v409, 5, 0LL);
    v410 = (UnityEngine_Component_o *)v315->fields.mKnockdownRecordDamageLb;
    if ( !v410 )
      goto LABEL_552;
    v411 = UnityEngine_Component__get_gameObject(v410, 0LL);
    v412 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v412 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX = (float)v412->static_fields->QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX;
  }
  GameObjectExtensions__SetLocalPositionX(v411, QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX, 0LL);
  v419 = (UIWidget_o *)v315->fields.mKnockdownRecordSp;
  if ( !v419 )
    goto LABEL_552;
  v623.fields.g = *v593;
  v623.fields.b = *v594;
  v623.fields.a = *v586;
  v623.fields.r = *v591;
  UIWidget__set_color(v419, v623, 0LL);
  v420 = (UIWidget_o *)v315->fields.mKnockdownRecordDamageLb;
  if ( !v420 )
    goto LABEL_552;
  v624.fields.r = *v591;
  v624.fields.g = *v593;
  v624.fields.b = *v594;
  v624.fields.a = *v586;
  UIWidget__set_color(v420, v624, 0LL);
  v421 = (UIWidget_o *)v315->fields.mKnockdownRecordDamageNameLb;
  if ( !v421 )
    goto LABEL_552;
  v625.fields.r = *v591;
  v625.fields.g = *v593;
  v625.fields.b = *v594;
  v625.fields.a = *v586;
  UIWidget__set_color(v421, v625, 0LL);
  v422 = (UIWidget_o *)v315->fields.mKnockdownRecordPlusLb;
  if ( !v422 )
    goto LABEL_552;
  v626.fields.r = *v591;
  v626.fields.g = *v593;
  v626.fields.b = *v594;
  v626.fields.a = *v586;
  UIWidget__set_color(v422, v626, 0LL);
  v423 = (UIWidget_o *)v315->fields.mKnockdownRecordCountLb;
  if ( !v423 )
    goto LABEL_552;
  v627.fields.r = *v591;
  v627.fields.g = *v593;
  v627.fields.b = *v594;
  v627.fields.a = *v586;
  UIWidget__set_color(v423, v627, 0LL);
LABEL_411:
  id = v347->fields.id;
  if ( (BYTE3(QuestInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestInformationComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
  }
  if ( QuestInformationComponent__IsDisplayQuestInformation(id, 0LL) )
  {
    mQuestInfoBtn = v315->fields.mQuestInfoBtn;
    if ( !mQuestInfoBtn )
      goto LABEL_552;
    UnityEngine_GameObject__SetActive(mQuestInfoBtn, 1, 0LL);
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_40F6042 )
    {
      sub_B16FFC(&TerminalSceneComponent_TypeInfo, v426);
      byte_40F6042 = 1;
    }
    v427 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      v351 = v593;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v427 = TerminalSceneComponent_TypeInfo;
      }
    }
    else
    {
      v351 = v593;
    }
    mInstance = v427->static_fields->mInstance;
    if ( !mInstance )
      goto LABEL_552;
    if ( TerminalSceneComponent__QuestInfoShowing(mInstance, 0LL) == v347->fields.id )
    {
      mQuestInfoShowing = v315->fields.mQuestInfoShowing;
      if ( !mQuestInfoShowing )
        goto LABEL_552;
      UnityEngine_GameObject__SetActive(mQuestInfoShowing, 1, 0LL);
    }
    v430 = v315->fields.mQuestInfoBtn;
    if ( !v430 )
      goto LABEL_552;
    v431 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
             v430,
             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
    v432 = v431;
    if ( v583 == 2 )
    {
      v433 = v580 & QuestEntity__HasFlag(v347, 0x400000000000000LL, 0LL) & 1;
      if ( !v432 )
        goto LABEL_552;
    }
    else
    {
      v433 = 1LL;
      if ( !v431 )
        goto LABEL_552;
    }
    ((void (__fastcall *)(srcLineSprite_o *, __int64, void *))v432->klass[1]._1.namespaze)(
      v432,
      v433,
      v432->klass[1]._1.byval_arg.data);
  }
  mOptionRestrinctionLb = v315->fields.mOptionRestrinctionLb;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  }
  if ( !mOptionRestrinctionLb )
    goto LABEL_552;
  UILabel__set_fontSize(
    mOptionRestrinctionLb,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_DEFAULT_FONT_SIZE,
    0LL);
  v435 = v315->fields.mOptionRestrinctionLb;
  if ( !v435 )
    goto LABEL_552;
  UILabel__set_overflowMethod(v435, 2, 0LL);
  v436 = (UnityEngine_Component_o *)v315->fields.mOptionRestrinctionLb;
  if ( !v436 )
    goto LABEL_552;
  v437 = UnityEngine_Component__get_gameObject(v436, 0LL);
  one = UnityEngine_Vector3__get_one(0LL);
  GameObjectExtensions__SetLocalScale(v437, one, 0LL);
  v438 = (UnityEngine_Component_o *)v315->fields.mOptionRestrinctionLb;
  if ( !v438 )
    goto LABEL_552;
  v439 = UnityEngine_Component__get_transform(v438, 0LL);
  if ( !v439 )
    goto LABEL_552;
  v440 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v439, 0LL);
  if ( !v440 )
    goto LABEL_552;
  v441 = UnityEngine_Component__get_gameObject(v440, 0LL);
  if ( !v441 )
    goto LABEL_552;
  v442 = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      v441,
                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewMultiLimitedFormation___);
  if ( !v442 )
    goto LABEL_552;
  v443 = v442;
  UnityEngine_Behaviour__set_enabled(v442, 0, 0LL);
  v444 = (QuestPhaseDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       v585,
                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !v444 )
    goto LABEL_552;
  if ( !QuestPhaseDetailMaster__TryGetEntity(v444, &v597, v587[4], questPhase, 0LL) )
    goto LABEL_463;
  if ( !v597 )
    goto LABEL_552;
  if ( !v597->fields.boardMessage )
    goto LABEL_463;
  v446 = v315->fields.mOptionRestrinctionLb;
  if ( !v446 )
    goto LABEL_552;
  UILabel__set_maxLineCount(v446, 0, 0LL);
  if ( !v597 )
    goto LABEL_552;
  boardMessage = v597->fields.boardMessage;
  if ( !boardMessage )
    goto LABEL_552;
  list = (System_Collections_Generic_IEnumerable_TSource__o *)boardMessage->fields.list;
  if ( list
    && (v449 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                 list,
                 (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_QuestPhaseDetailEntity_BoardInfo___)) != 0LL
    && (v450 = *(_QWORD *)&v449->max_length, v451 = (QuestPhaseDetailEntity_BoardInfo_array *)v449, v450) )
  {
    if ( (_DWORD)v450 == 1 )
    {
      v452 = v449->m_Items[0];
      if ( !v452 )
        goto LABEL_552;
      v453 = *(QuestPhaseDetailEntity_BoardInfo_TextInfo_o **)&v452->fields.groupId;
      if ( !v453 )
        goto LABEL_552;
      activeSelf = QuestPhaseDetailEntity_BoardInfo_TextInfo__SetText(
                     v453,
                     v315->fields.mOptionRestrinctionLb,
                     (float)v315->fields.restrictionDefaultWidth,
                     0LL);
      if ( !v451->max_length )
        goto LABEL_646;
      v457 = v451->m_Items[0];
      if ( !v457 )
        goto LABEL_552;
      v458 = activeSelf;
      image = v457->fields.image;
      if ( !image )
        goto LABEL_552;
      v460 = QuestPhaseDetailEntity_BoardInfo_ImageInfo__SetImage(image, v315->fields.mOptionRestrinctionSp, 0LL);
      v461 = 0;
    }
    else
    {
      UnityEngine_Behaviour__set_enabled(v443, 1, 0LL);
      if ( QuestEntity__HasFlag(v588, 0x400000000000000LL, 0LL) )
      {
        v547 = QuestBoardListViewItemDraw_TypeInfo;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v547 = QuestBoardListViewItemDraw_TypeInfo;
        }
        p_RESTRICTION_FONT_WIDTH_ALLOUT = &v547->static_fields->RESTRICTION_FONT_WIDTH_ALLOUT;
      }
      else
      {
        p_RESTRICTION_FONT_WIDTH_ALLOUT = &v315->fields.restrictionDefaultWidth;
      }
      QuestBoardListViewMultiLimitedFormation__Init(
        (QuestBoardListViewMultiLimitedFormation_o *)v443,
        v315->fields.mOptionRestrinctionLb,
        v315->fields.mOptionRestrinctionSp,
        v451,
        (float)*p_RESTRICTION_FONT_WIDTH_ALLOUT,
        0LL);
      v461 = 1;
      v458 = 1;
      v460 = 1;
    }
  }
  else
  {
LABEL_463:
    v458 = QuestBoardListViewItemDraw__SetRestrictionLabelFromQuestRestrictionMaster(v315, v587[4], questPhase, v445);
    v461 = 0;
    v460 = 0;
  }
  if ( QuestEntity__HasFlag(v588, 0x40000000LL, 0LL) )
  {
    mMultiSecondBattleInformation = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v315->fields.mMultiSecondBattleInformation;
    if ( !mMultiSecondBattleInformation )
      goto LABEL_552;
    p_mCostConsumeBattleWinSp = (UnityEngine_Component_o **)&v315->fields.mCostConsumeBattleWinSp;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      mMultiSecondBattleInformation,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v315->fields.mCostConsumeBattleWinSp,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UISprite__Add__);
    v464 = 1;
  }
  else
  {
    v464 = 0;
    p_mCostConsumeBattleWinSp = (UnityEngine_Component_o **)&v315->fields.mCostConsumeBattleWinSp;
  }
  if ( !*p_mCostConsumeBattleWinSp )
    goto LABEL_552;
  v465 = UnityEngine_Component__get_gameObject(*p_mCostConsumeBattleWinSp, 0LL);
  if ( !v465 )
    goto LABEL_552;
  UnityEngine_GameObject__SetActive(v465, v464, 0LL);
  if ( v597 && QuestPhaseDetailEntity__HasFlag(v597, 0x400000LL, 0LL) )
  {
    mOptionPreBattleSp = v315->fields.mOptionPreBattleSp;
    v467 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v467 = QuestBoardListViewItemDraw_TypeInfo;
    }
    PRE_BATTLE_ORGANIZATION = v467->static_fields->PRE_BATTLE_ORGANIZATION;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetBanner(mOptionPreBattleSp, PRE_BATTLE_ORGANIZATION, 0LL);
    v469 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v315->fields.mMultiSecondBattleInformation;
    if ( !v469 )
      goto LABEL_552;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v469,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v315->fields.mOptionPreBattleSp,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UISprite__Add__);
    v350 = v586;
    v470 = 1;
  }
  else
  {
    v470 = 0;
  }
  v471 = (UnityEngine_Component_o *)v315->fields.mOptionPreBattleSp;
  if ( !v471 )
    goto LABEL_552;
  v472 = UnityEngine_Component__get_gameObject(v471, 0LL);
  if ( !v472 )
    goto LABEL_552;
  UnityEngine_GameObject__SetActive(v472, v470, 0LL);
  v473 = v315->fields.mMultiSecondBattleInformation;
  if ( !v473 )
    goto LABEL_552;
  if ( v473->fields._size >= 2 )
  {
    secondBattleInformation = (UnityEngine_Behaviour_o *)v315->fields.secondBattleInformation;
    if ( !secondBattleInformation )
      goto LABEL_552;
    UnityEngine_Behaviour__set_enabled(secondBattleInformation, 1, 0LL);
    v475 = v315->fields.secondBattleInformation;
    if ( !v475 )
      goto LABEL_552;
    QuestBoardListViewMultiSecondBattleInformation__Init(v475, v315->fields.mMultiSecondBattleInformation, 0LL);
  }
  v476 = (UnityEngine_Component_o *)v315->fields.mOptionRestrinctionLb;
  if ( !v476 )
    goto LABEL_552;
  v477 = UnityEngine_Component__get_transform(v476, 0LL);
  if ( !v477 )
    goto LABEL_552;
  v478 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v477, 0LL);
  if ( !v478 )
    goto LABEL_552;
  v479 = UnityEngine_Component__get_gameObject(v478, 0LL);
  if ( !v479 )
    goto LABEL_552;
  UnityEngine_GameObject__SetActive(v479, v458 || v460, 0LL);
  v480 = v588;
  v481 = QuestEntity__HasFlag(v588, 0x400000000000000LL, 0LL);
  if ( !v315->fields.mOptionRestrinctionLb )
    goto LABEL_552;
  v482 = v481;
  v483 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v315->fields.mOptionRestrinctionLb, 0LL);
  if ( !v483 )
    goto LABEL_552;
  v484 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v483, 0LL);
  if ( !v484 )
    goto LABEL_552;
  v485 = UnityEngine_Component__get_gameObject(v484, 0LL);
  v486 = QuestBoardListViewItemDraw_TypeInfo;
  if ( !v482 )
  {
    if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v486 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v485, v486->static_fields->RESTRICTION_POS_DEFAULT, 0LL);
    v493 = v315->fields.mOptionRestrinctionLb;
    if ( !v493 )
      goto LABEL_552;
    if ( v493->fields.mWidth <= v315->fields.restrictionDefaultWidth )
    {
      v496 = QuestBoardListViewItemDraw_TypeInfo;
      mSpacingX = v493->fields.mSpacingX;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v496 = QuestBoardListViewItemDraw_TypeInfo;
      }
      RESTRICTION_FONT_SPACING_DEFAULT = v496->static_fields->RESTRICTION_FONT_SPACING_DEFAULT;
      if ( mSpacingX == RESTRICTION_FONT_SPACING_DEFAULT )
      {
        if ( (v461 & 1) != 0 )
          goto LABEL_527;
LABEL_524:
        v490 = v315->fields.mOptionRestrinctionLb;
        if ( !v490 )
          goto LABEL_552;
        restrictionDefaultWidth = v315->fields.restrictionDefaultWidth;
LABEL_526:
        UILabel__SetCondensedScale(v490, restrictionDefaultWidth, 0LL);
        goto LABEL_527;
      }
      if ( (BYTE3(v496->vtable._0_Equals.methodPtr) & 4) != 0 && !v496->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v496);
        RESTRICTION_FONT_SPACING_DEFAULT = QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_FONT_SPACING_DEFAULT;
      }
    }
    else
    {
      v494 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v494 = QuestBoardListViewItemDraw_TypeInfo;
      }
      RESTRICTION_FONT_SPACING_DEFAULT = v494->static_fields->RESTRICTION_FONT_SPACING_MIN;
    }
    QuestBoardListViewItemDraw__SetRestrinctionLabelSpacingX(v315, RESTRICTION_FONT_SPACING_DEFAULT, v492);
    if ( (v461 & 1) != 0 )
      goto LABEL_527;
    goto LABEL_524;
  }
  if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v486 = QuestBoardListViewItemDraw_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition(v485, v486->static_fields->RESTRICTION_POS_ALLOUT, 0LL);
  v487 = v315->fields.mOptionRestrinctionLb;
  if ( !v487 )
    goto LABEL_552;
  UILabel__set_fontSize(v487, QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_FONT_SIZE_ALLOUT, 0LL);
  QuestBoardListViewItemDraw__SetRestrinctionLabelSpacingX(
    v315,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_FONT_SPACING_DEFAULT,
    v488);
  if ( (v461 & 1) == 0 )
  {
    v489 = v315->fields.mOptionRestrinctionLb;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    }
    if ( !v489 )
      goto LABEL_552;
    v490 = v489;
    restrictionDefaultWidth = QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_FONT_WIDTH_ALLOUT;
    goto LABEL_526;
  }
LABEL_527:
  v498 = (QuestPhaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 v585,
                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !v498 )
    goto LABEL_552;
  v499 = QuestPhaseMaster__GetEntity(v498, v588->fields.id, questPhase, 0LL);
  v500 = v499;
  if ( v499 )
  {
    classIds = v499->fields.classIds;
    if ( classIds )
      LODWORD(classIds) = classIds->max_length != 0;
  }
  else
  {
    LODWORD(classIds) = 0;
  }
  v502 = ((unsigned int)classIds & nowTimea) == 0;
  if ( ((unsigned int)classIds & nowTimea) != 0 && v583 == 2 )
    v502 = QuestEntity__HasFlag(v588, 2048LL, 0LL);
  mClassIconRoot = v315->fields.mClassIconRoot;
  if ( !mClassIconRoot )
    goto LABEL_552;
  UnityEngine_GameObject__SetActive(mClassIconRoot, !v502, 0LL);
  mClassStrSp = (UIWidget_o *)v315->fields.mClassStrSp;
  if ( !mClassStrSp )
    goto LABEL_552;
  v628.fields.g = *v351;
  v628.fields.a = *v350;
  v628.fields.r = *v591;
  v628.fields.b = *v594;
  UIWidget__set_color(mClassStrSp, v628, 0LL);
  if ( !v502 )
  {
    if ( !v500 )
      goto LABEL_552;
    mClassIcons = v315->fields.mClassIcons;
    if ( !mClassIcons )
      goto LABEL_552;
    max_length = mClassIcons->max_length;
    if ( max_length >= 1 )
    {
      v507 = v500->fields.classIds;
      v508 = 1;
      while ( 1 )
      {
        v509 = v508 - 1;
        if ( v508 - 1 >= mClassIcons->max_length )
          break;
        v510 = v509;
        v511 = &mClassIcons->obj.klass + v509;
        v512 = (UnityEngine_Component_o *)v511[4];
        if ( !v512 )
          goto LABEL_552;
        v513 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v511[4], 0LL);
        if ( !v507 )
          goto LABEL_552;
        if ( !v513 )
          goto LABEL_552;
        UnityEngine_GameObject__SetActive(v513, (int)v510 < (signed int)v507->max_length, 0LL);
        v514 = UnityEngine_Component__get_gameObject(v512, 0LL);
        if ( !v514 )
          goto LABEL_552;
        activeSelf = UnityEngine_GameObject__get_activeSelf(v514, 0LL);
        if ( activeSelf )
        {
          if ( (unsigned int)v510 >= v507->max_length )
            break;
          ServantClassIconComponent__Set((ServantClassIconComponent_o *)v512, v507->m_Items[v510 + 1], 0LL);
          v629.fields.a = *v350;
          v629.fields.r = *v591;
          v629.fields.g = *v593;
          v629.fields.b = *v594;
          ServantClassIconComponent__SetColor((ServantClassIconComponent_o *)v512, v629, 0LL);
        }
        if ( v508 >= max_length )
          goto LABEL_553;
        mClassIcons = v315->fields.mClassIcons;
        ++v508;
        if ( !mClassIcons )
          goto LABEL_552;
      }
LABEL_646:
      sub_B17100(activeSelf, v455, v456);
      sub_B170A0();
    }
  }
LABEL_553:
  if ( key >= 1 )
  {
    eventTarget = (UnityEngine_Object_o *)v315->fields.eventTarget;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(eventTarget, 0LL, 0LL) )
    {
      eventTargetComponent = (UnityEngine_Object_o *)v315->fields.eventTargetComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(eventTargetComponent, 0LL, 0LL) )
      {
        v517 = v315->fields.mQuestInfoBtn;
        if ( !v517 )
          goto LABEL_552;
        if ( UnityEngine_GameObject__get_activeSelf(v517, 0LL) )
        {
          v518 = v315->fields.eventTargetComponent;
          if ( !v518 )
            goto LABEL_552;
          BoardOptionEventTargetComponent__DestroyList(v518, 0LL);
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          Master_WarQuestSelectionMaster = (ViewEnemyMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ViewEnemyMaster___);
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_552;
          EntityListFromQuestId = ViewEnemyMaster__GetEntityListFromQuestId(
                                    Master_WarQuestSelectionMaster,
                                    v587[4],
                                    0LL);
          if ( EntityListFromQuestId
            && (v525 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromQuestId,
                *(_QWORD *)&EntityListFromQuestId->max_length) )
          {
            v526 = QuestBoardListViewItemDraw___c_TypeInfo;
            if ( (BYTE3(QuestBoardListViewItemDraw___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !QuestBoardListViewItemDraw___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw___c_TypeInfo);
              v526 = QuestBoardListViewItemDraw___c_TypeInfo;
            }
            v527 = v526->static_fields;
            _9__299_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v527->__9__299_1;
            if ( !_9__299_1 )
            {
              if ( (BYTE3(v526->vtable._0_Equals.methodPtr) & 4) != 0 && !v526->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v526);
                v527 = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
              }
              v529 = (Il2CppObject *)v527->__9;
              _9__299_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                            System_Func_ViewEnemyEntity__int__TypeInfo,
                                                                                            v521,
                                                                                            v522,
                                                                                            v523,
                                                                                            v524);
              System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
                _9__299_1,
                v529,
                Method_QuestBoardListViewItemDraw___c__SetItemOfQuest_b__299_1__,
                (const MethodInfo_2B6B6EC *)Method_System_Func_ViewEnemyEntity__int___ctor__);
              v530 = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
              v530->__9__299_1 = (struct System_Func_ViewEnemyEntity__int__o *)_9__299_1;
              sub_B16F98(
                (BattleServantConfConponent_o *)&v530->__9__299_1,
                (System_Int32_array **)_9__299_1,
                v531,
                v532,
                v533,
                v534,
                v535,
                v536);
              v480 = v588;
            }
            v537 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                          v525,
                                                                          (System_Func_TSource__TResult__o *)_9__299_1,
                                                                          (const MethodInfo_19C05C4 *)Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___);
            v538 = System_Linq_Enumerable__ToArray_int_(
                     v537,
                     (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
            if ( !v315->fields.eventTarget )
              goto LABEL_552;
            v539 = v538;
            UnityEngine_GameObject__SetActive(v315->fields.eventTarget, 1, 0LL);
            v540 = v315->fields.eventTargetComponent;
            if ( !v540 )
              goto LABEL_552;
            BoardOptionEventTargetComponent__CreateEnemyList(v540, v587[4], v539, 0LL);
          }
          else
          {
            v541 = v315->fields.eventTarget;
            if ( !v541 )
              goto LABEL_552;
            UnityEngine_GameObject__SetActive(v541, 0, 0LL);
          }
        }
      }
    }
  }
  if ( ((unsigned __int8)v580 & (v583 == 2) & QuestEntity__HasFlag(v480, 0x400000000000000LL, 0LL)) == 1 )
  {
    alloutRoot = (UnityEngine_Object_o *)v315->fields.alloutRoot;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(alloutRoot, 0LL, 0LL) )
    {
      alloutRootComponent = (UnityEngine_Object_o *)v315->fields.alloutRootComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(alloutRootComponent, 0LL, 0LL) )
      {
        if ( !v587[17] )
          goto LABEL_601;
        v544 = v587[4];
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( CondType__IsQuestClear_25438860(v544, -1, 1, 0LL) )
        {
LABEL_601:
          v545 = v315->fields.alloutRoot;
          if ( v545 )
          {
            UnityEngine_GameObject__SetActive(v545, 1, 0LL);
            v546 = v315->fields.alloutRootComponent;
            if ( v546 )
            {
              BoardOptionAlloutComponent__SetIcon(v546, v587[4], 0LL);
              return;
            }
          }
LABEL_552:
          sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x20
  DataManager_o *v25; // x22
  QuestEntity_o *Mine; // x0
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  QuestEntity_o *v28; // x21
  struct ListViewManager_o *manager; // x0
  __int64 v30; // x9
  int32_t dispType; // w27
  int64_t rightItem; // x23
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x25
  int64_t UserId; // x0
  float v35; // s0
  float v36; // s1
  float v37; // s2
  float v38; // s3
  UnityEngine_GameObject_o *mLabelObj; // x0
  float v40; // s8
  float v41; // s9
  float v42; // s10
  float v43; // s11
  UnityEngine_Component_o *mLabelNameSp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *mLabelChapterSp; // x0
  UnityEngine_GameObject_o *v47; // x0
  UnityEngine_Component_o *mLabelFaceMaskShortcutSp; // x0
  UnityEngine_GameObject_o *v49; // x0
  UnityEngine_Component_o *mLabelFaceMaskQuestSp; // x0
  UnityEngine_GameObject_o *v51; // x0
  UnityEngine_GameObject_o *mTitleObj; // x0
  UnityEngine_GameObject_o *mTitleLevelRoot; // x0
  UnityEngine_Component_o *mTitleShortcutLb; // x0
  UnityEngine_GameObject_o *v55; // x0
  UnityEngine_GameObject_o *mOptionObj; // x0
  UnityEngine_Component_o *mOptionInfoLb; // x0
  UnityEngine_GameObject_o *v58; // x0
  UnityEngine_Component_o *mOptionRestrinctionLb; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *v62; // x0
  UnityEngine_GameObject_o *mRewardObj; // x0
  UnityEngine_GameObject_o *mPhaseObj; // x0
  UnityEngine_GameObject_o *mChallengeObj; // x0
  UnityEngine_GameObject_o *mCostObj; // x0
  UnityEngine_GameObject_o *mCondObject; // x0
  UnityEngine_GameObject_o *mLabelFaceObj; // x0
  int32_t OverwriteBannerId_k__BackingField; // w8
  QuestBoardListViewItemDraw_c *v70; // x0
  System_String_o *RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX; // x24
  System_String_o *v72; // x1
  System_String_o *v73; // x0
  QuestBoardListViewItemDraw_c *v74; // x0
  System_String_o *QUEST_BOARD_SPNAME_PREFIX; // x25
  System_String_o *v76; // x0
  UISprite_o *mcBaseP; // x24
  UnityEngine_Component_o **p_mcBaseP; // x28
  System_String_o *v79; // x25
  bool v80; // w0
  UnityEngine_GameObject_o *v81; // x0
  UIWidget_o *Component_srcLineSprite; // x0
  const MethodInfo *v83; // x3
  QuestBoardListViewItemDraw_c *v84; // x0
  const MethodInfo *v85; // x1
  const MethodInfo *v86; // x3
  QuestBoardListViewItemDraw_o *v87; // x0
  const MethodInfo *v88; // x1
  const MethodInfo *v89; // x3
  struct UILabel_o *mTitleNameLb; // x24
  UIWidget_o **p_mTitleNameLb; // x25
  System_String_o *AdvanceNoticeText; // x0
  System_String_o *v93; // x1
  UILabel_o *v94; // x0
  System_String_o *QuestName; // x0
  System_String_o *v96; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v97; // x25
  int32_t ServantId; // w0
  ServantEntity_o *v99; // x0
  Il2CppObject *BattleName; // x0
  UIWidget_o *v101; // x24
  const MethodInfo *v102; // x3
  QuestReleaseOverwriteMaster_o *v103; // x0
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  const MethodInfo *v105; // x2
  int32_t questId; // w22
  int32_t afterClear; // w23
  bool IsRepeatReward; // w0
  const MethodInfo *v109; // x4
  const MethodInfo *v110; // x3
  const MethodInfo *v111; // x1
  int32_t questPhase; // w22
  int32_t PhaseMax; // w0
  int32_t v114; // w0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *mInfoTextList; // x22
  const MethodInfo *v116; // x6
  System_Collections_Generic_IEnumerable_T__o *CampaignText; // x0
  UnityEngine_Component_o *mRarePrismSp; // x0
  UnityEngine_GameObject_o *v119; // x0
  int64_t *p_expireAt; // x8
  int64_t v121; // x22
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v122; // x21
  System_String_o *v123; // x24
  __int64 v124; // x1
  __int64 v125; // x2
  __int64 v126; // x3
  __int64 v127; // x4
  QuestBoardInformaionText_o *v128; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v129; // x23
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v130; // x23
  int32_t size; // w1
  UnityEngine_Component_o **p_mOptionInfoLb; // x21
  struct QuestBoardListViewObject_o *v133; // x8
  QuestBoardListViewManager_o *v134; // x0
  __int64 v135; // x10
  const MethodInfo *v136; // x3
  int32_t AlphaAnimCnt; // w22
  QuestBoardInformaionText_o *v138; // x0
  BoardOptionTextWithIconComponent_o *v139; // x0
  bool v140; // w22
  UnityEngine_Transform_o *v141; // x0
  UnityEngine_Component_o *v142; // x0
  UnityEngine_GameObject_o *v143; // x0
  UnityEngine_GameObject_o *v144; // x0
  UnityEngine_Object_o *mEarthLine; // x21
  const MethodInfo *v146; // x3
  QuestBoardListViewItemDraw_c *v147; // x0
  QuestBoardListViewEarthLine_o *v148; // x21
  QuestBoardListViewItemDraw_o *v149; // x0
  const MethodInfo *v150; // x1
  EventCampaignEntity_o *v151; // [xsp+0h] [xbp-A0h]
  const MethodInfo *v152; // [xsp+10h] [xbp-90h]
  int32_t v153; // [xsp+1Ch] [xbp-84h] BYREF
  int32_t fixedVal[2]; // [xsp+20h] [xbp-80h] BYREF
  UserQuestEntity_o *entity; // [xsp+28h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v156; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v157; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v158; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v159; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v160; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v161; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v162; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FC6E7 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, questBoardItem);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserQuestMaster___, v7);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__, v13);
    sub_B16FFC(&LocalizationManager_TypeInfo, v14);
    sub_B16FFC(&NetworkManager_TypeInfo, v15);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v16);
    sub_B16FFC(&QuestBoardInformaionText_TypeInfo, v17);
    sub_B16FFC(&QuestBoardListViewItemDraw_TypeInfo, v18);
    sub_B16FFC(&QuestBoardListViewManager_TypeInfo, v19);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B16FFC(&StringLiteral_13352, v21);
    sub_B16FFC(&StringLiteral_23445, v22);
    byte_40FC6E7 = 1;
  }
  entity = 0LL;
  *(_QWORD *)fixedVal = 0LL;
  v153 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !questBoardItem )
    goto LABEL_138;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_138;
  v25 = (DataManager_o *)Instance;
  Mine = MapControl_QuestInfo__GetMine(questBoardItem->fields._quest_info_k__BackingField, 0LL);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_138;
  v28 = Mine;
  manager = mListViewObject->fields.manager;
  if ( !manager )
    goto LABEL_138;
  v30 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v30
    || (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[v30 - 1] != QuestBoardListViewManager_TypeInfo )
  {
    sub_B173C8(manager);
    goto LABEL_140;
  }
  if ( !v25 )
    goto LABEL_138;
  dispType = quest_info_k__BackingField->fields.dispType;
  rightItem = (int64_t)manager[1].fields.rightItem;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              v25,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v28 || !MasterData_WarQuestSelectionMaster )
    goto LABEL_138;
  UserQuestMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, v28->fields.id, 0LL);
  *(UnityEngine_Color_o *)&v35 = dispType == 2 ? UnityEngine_Color__get_gray(0LL) : UnityEngine_Color__get_white(0LL);
  mLabelObj = this->fields.mLabelObj;
  v40 = v35;
  v41 = v36;
  v42 = v37;
  v43 = v38;
  if ( !mLabelObj )
    goto LABEL_138;
  UnityEngine_GameObject__SetActive(mLabelObj, 1, 0LL);
  mLabelNameSp = (UnityEngine_Component_o *)this->fields.mLabelNameSp;
  if ( !mLabelNameSp )
    goto LABEL_138;
  gameObject = UnityEngine_Component__get_gameObject(mLabelNameSp, 0LL);
  if ( !gameObject )
    goto LABEL_138;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  mLabelChapterSp = (UnityEngine_Component_o *)this->fields.mLabelChapterSp;
  if ( !mLabelChapterSp )
    goto LABEL_138;
  v47 = UnityEngine_Component__get_gameObject(mLabelChapterSp, 0LL);
  if ( !v47 )
    goto LABEL_138;
  UnityEngine_GameObject__SetActive(v47, 0, 0LL);
  mLabelFaceMaskShortcutSp = (UnityEngine_Component_o *)this->fields.mLabelFaceMaskShortcutSp;
  if ( !mLabelFaceMaskShortcutSp )
    goto LABEL_138;
  v49 = UnityEngine_Component__get_gameObject(mLabelFaceMaskShortcutSp, 0LL);
  if ( !v49 )
    goto LABEL_138;
  UnityEngine_GameObject__SetActive(v49, 0, 0LL);
  mLabelFaceMaskQuestSp = (UnityEngine_Component_o *)this->fields.mLabelFaceMaskQuestSp;
  if ( !mLabelFaceMaskQuestSp )
    goto LABEL_138;
  v51 = UnityEngine_Component__get_gameObject(mLabelFaceMaskQuestSp, 0LL);
  if ( !v51 )
    goto LABEL_138;
  UnityEngine_GameObject__SetActive(v51, 0, 0LL);
  mTitleObj = this->fields.mTitleObj;
  if ( !mTitleObj )
    goto LABEL_138;
  UnityEngine_GameObject__SetActive(mTitleObj, 1, 0LL);
  mTitleLevelRoot = this->fields.mTitleLevelRoot;
  if ( !mTitleLevelRoot )
    goto LABEL_138;
  UnityEngine_GameObject__SetActive(mTitleLevelRoot, 0, 0LL);
  mTitleShortcutLb = (UnityEngine_Component_o *)this->fields.mTitleShortcutLb;
  if ( !mTitleShortcutLb )
    goto LABEL_138;
  v55 = UnityEngine_Component__get_gameObject(mTitleShortcutLb, 0LL);
  if ( !v55 )
    goto LABEL_138;
  UnityEngine_GameObject__SetActive(v55, 0, 0LL);
  mOptionObj = this->fields.mOptionObj;
  if ( !mOptionObj )
    goto LABEL_138;
  UnityEngine_GameObject__SetActive(mOptionObj, 1, 0LL);
  mOptionInfoLb = (UnityEngine_Component_o *)this->fields.mOptionInfoLb;
  if ( !mOptionInfoLb )
    goto LABEL_138;
  v58 = UnityEngine_Component__get_gameObject(mOptionInfoLb, 0LL);
  if ( !v58 )
    goto LABEL_138;
  UnityEngine_GameObject__SetActive(v58, 0, 0LL);
  mOptionRestrinctionLb = (UnityEngine_Component_o *)this->fields.mOptionRestrinctionLb;
  if ( !mOptionRestrinctionLb )
    goto LABEL_138;
  transform = UnityEngine_Component__get_transform(mOptionRestrinctionLb, 0LL);
  if ( !transform )
    goto LABEL_138;
  parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !parent )
    goto LABEL_138;
  v62 = UnityEngine_Component__get_gameObject(parent, 0LL);
  if ( !v62 )
    goto LABEL_138;
  UnityEngine_GameObject__SetActive(v62, 0, 0LL);
  mRewardObj = this->fields.mRewardObj;
  if ( !mRewardObj )
    goto LABEL_138;
  UnityEngine_GameObject__SetActive(mRewardObj, 1, 0LL);
  mPhaseObj = this->fields.mPhaseObj;
  if ( !mPhaseObj )
    goto LABEL_138;
  UnityEngine_GameObject__SetActive(mPhaseObj, 0, 0LL);
  mChallengeObj = this->fields.mChallengeObj;
  if ( !mChallengeObj )
    goto LABEL_138;
  UnityEngine_GameObject__SetActive(mChallengeObj, 0, 0LL);
  mCostObj = this->fields.mCostObj;
  if ( !mCostObj )
    goto LABEL_138;
  UnityEngine_GameObject__SetActive(mCostObj, 0, 0LL);
  mCondObject = this->fields.mCondObject;
  if ( !mCondObject )
    goto LABEL_138;
  UnityEngine_GameObject__SetActive(mCondObject, 0, 0LL);
  mLabelFaceObj = this->fields.mLabelFaceObj;
  if ( !mLabelFaceObj )
    goto LABEL_138;
  UnityEngine_GameObject__SetActive(mLabelFaceObj, 0, 0LL);
  OverwriteBannerId_k__BackingField = questBoardItem->fields._OverwriteBannerId_k__BackingField;
  if ( OverwriteBannerId_k__BackingField < 1 )
  {
    if ( v28->fields.bannerId <= 0 )
    {
      p_mcBaseP = (UnityEngine_Component_o **)&this->fields.mcBaseP;
      goto LABEL_59;
    }
    v74 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v74 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_SPNAME_PREFIX = v74->static_fields->QUEST_BOARD_SPNAME_PREFIX;
    v72 = System_Int32__ToString((int)v28 + 64, 0LL);
    v73 = QUEST_BOARD_SPNAME_PREFIX;
  }
  else
  {
    v70 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v70 = QuestBoardListViewItemDraw_TypeInfo;
      OverwriteBannerId_k__BackingField = questBoardItem->fields._OverwriteBannerId_k__BackingField;
    }
    RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX = v70->static_fields->RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX;
    v153 = OverwriteBannerId_k__BackingField;
    v72 = System_Int32__ToString((int32_t)&v153, 0LL);
    v73 = RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX;
  }
  v76 = System_String__Concat_43743732(v73, v72, 0LL);
  p_mcBaseP = (UnityEngine_Component_o **)&this->fields.mcBaseP;
  mcBaseP = this->fields.mcBaseP;
  v79 = v76;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  v80 = AtlasManager__SetEventUI(mcBaseP, v79, 0LL);
  if ( !mcBaseP )
    goto LABEL_138;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mcBaseP, v80, 0LL);
LABEL_59:
  if ( !*p_mcBaseP )
    goto LABEL_138;
  ((void (__fastcall *)(UnityEngine_Component_o *, void *))(*p_mcBaseP)->klass[2]._1.typeMetadataHandle)(
    *p_mcBaseP,
    (*p_mcBaseP)->klass[2]._1.interopData);
  if ( !*p_mcBaseP )
    goto LABEL_138;
  v81 = UnityEngine_Component__get_gameObject(*p_mcBaseP, 0LL);
  if ( !v81 )
    goto LABEL_138;
  Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            v81,
                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Component_srcLineSprite )
    goto LABEL_138;
  v157.fields.r = v40;
  v157.fields.g = v41;
  v157.fields.b = v42;
  v157.fields.a = v43;
  UIWidget__set_color(Component_srcLineSprite, v157, 0LL);
  if ( dispType != 2 && quest_info_k__BackingField->fields.isNew )
    QuestBoardListViewItemDraw__SetStatusActive(this, 1, 1, v83);
  v84 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v84 = QuestBoardListViewItemDraw_TypeInfo;
  }
  QuestBoardListViewItemDraw__SetNewIcon(
    this,
    v84->static_fields->NEW_POS_SHORTCUT,
    v84->static_fields->NEW_W_DEFAULT,
    v84->static_fields->NEW_H_DEFAULT,
    v83);
  if ( quest_info_k__BackingField->fields.pickupPriority >= 1 )
    QuestBoardListViewItemDraw__SetStatusActive(this, 4, 1, v86);
  QuestBoardListViewItemDraw__SetPickupIcon(this, v85);
  if ( dispType == 2 )
  {
    if ( quest_info_k__BackingField->fields.questReleaseClosedID >= 1 )
    {
      p_mTitleNameLb = (UIWidget_o **)&this->fields.mTitleNameLb;
      mTitleNameLb = this->fields.mTitleNameLb;
      AdvanceNoticeText = QuestBoardListViewItemDraw__GetAdvanceNoticeText(v87, quest_info_k__BackingField, v28, v89);
      if ( !mTitleNameLb )
        goto LABEL_138;
      v93 = AdvanceNoticeText;
      v94 = mTitleNameLb;
      goto LABEL_85;
    }
  }
  else if ( quest_info_k__BackingField->fields.isNew && quest_info_k__BackingField->fields.pickupPriority >= 1 )
  {
    QuestBoardListViewItemDraw__SetStatusToggle(this, v88);
  }
  QuestName = QuestEntity__getQuestName(v28, 0LL);
  if ( !QuestName )
    goto LABEL_138;
  v96 = QuestName;
  if ( System_String__Contains(QuestName, (System_String_o *)StringLiteral_23445, 0LL) )
  {
    v97 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           v25,
                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
    ServantId = QuestEntity__getServantId(v28, 0LL);
    if ( !v97 )
      goto LABEL_138;
    v99 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               v97,
                               ServantId,
                               (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !v99 )
      goto LABEL_138;
    BattleName = (Il2CppObject *)ServantEntity__getBattleName(v99, 0, -1, 0LL);
    v96 = System_String__Format(v96, BattleName, 0LL);
  }
  p_mTitleNameLb = (UIWidget_o **)&this->fields.mTitleNameLb;
  v94 = this->fields.mTitleNameLb;
  if ( !v94 )
    goto LABEL_138;
  v93 = v96;
LABEL_85:
  UILabel__set_text(v94, v93, 0LL);
  v101 = *p_mTitleNameLb;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  }
  if ( !v101 )
    goto LABEL_138;
  UILabel__SetCondensedScale(
    (UILabel_o *)v101,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH,
    0LL);
  if ( !*p_mTitleNameLb )
    goto LABEL_138;
  v158.fields.r = v40;
  v158.fields.g = v41;
  v158.fields.b = v42;
  v158.fields.a = v43;
  UIWidget__set_color(*p_mTitleNameLb, v158, 0LL);
  if ( dispType == 2 )
  {
    v103 = (QuestReleaseOverwriteMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              v25,
                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
    if ( !v103 )
      goto LABEL_138;
    EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                               v103,
                               v28->fields.id,
                               rightItem,
                               0LL);
    QuestBoardListViewItemDraw__SetupCondtionChangeMessage(this, EntityByQuestIdAndTime, v105);
  }
  v159.fields.r = v40;
  v159.fields.g = v41;
  v159.fields.b = v42;
  v159.fields.a = v43;
  QuestBoardListViewItemDraw__SetupRewardIconDisp(this, v28, dispType == 2, v159, v102);
  questId = quest_info_k__BackingField->fields.questId;
  afterClear = v28->fields.afterClear;
  IsRepeatReward = QuestEntity__IsRepeatReward(v28, 0LL);
  v160.fields.r = v40;
  v160.fields.g = v41;
  v160.fields.b = v42;
  v160.fields.a = v43;
  QuestBoardListViewItemDraw__SetupFirstRewardDisp(this, questId, afterClear, v160, IsRepeatReward, v109);
  v161.fields.r = v40;
  v161.fields.g = v41;
  v161.fields.b = v42;
  v161.fields.a = v43;
  QuestBoardListViewItemDraw__SetupRewardGotAndNotGiveDisp(this, quest_info_k__BackingField, entity, v161, v110);
  QuestBoardListViewItemDraw__ResetInfoTextList(this, v111);
  fixedVal[0] = -1;
  fixedVal[1] = 0;
  questPhase = quest_info_k__BackingField->fields.questPhase;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0LL);
  v114 = UnityEngine_Mathf__Min_40727532(questPhase + 1, PhaseMax, 0LL);
  mInfoTextList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields.mInfoTextList;
  CampaignText = (System_Collections_Generic_IEnumerable_T__o *)QuestBoardListViewItemDraw__GetCampaignText(
                                                                  this,
                                                                  quest_info_k__BackingField->fields.questId,
                                                                  v114,
                                                                  0,
                                                                  &fixedVal[1],
                                                                  fixedVal,
                                                                  v116);
  if ( !mInfoTextList
    || (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          mInfoTextList,
          CampaignText,
          (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__),
        (mRarePrismSp = (UnityEngine_Component_o *)this->fields.mRarePrismSp) == 0LL)
    || (v119 = UnityEngine_Component__get_gameObject(mRarePrismSp, 0LL)) == 0LL )
  {
LABEL_138:
    sub_B170D4();
  }
  if ( UnityEngine_GameObject__get_activeSelf(v119, 0LL) )
  {
    if ( !entity )
      goto LABEL_138;
    if ( UserQuestEntity__IsExpireNoLimit(entity, 0LL) )
      goto LABEL_109;
    if ( !entity )
      goto LABEL_138;
    p_expireAt = &entity->fields.expireAt;
  }
  else
  {
    p_expireAt = &quest_info_k__BackingField->fields.endTime;
  }
  v121 = *p_expireAt;
  if ( *p_expireAt >= 1 && !QuestEntity__HasFlag(v28, 32LL, 0LL) )
  {
    v122 = this->fields.mInfoTextList;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v123 = LocalizationManager__Get((System_String_o *)StringLiteral_13352, 0LL);
    v128 = (QuestBoardInformaionText_o *)sub_B170CC(QuestBoardInformaionText_TypeInfo, v124, v125, v126, v127);
    v162.fields.r = 0.0;
    v162.fields.g = 0.0;
    v162.fields.b = 0.0;
    v162.fields.a = 0.0;
    v156.fields.x = 0.0;
    v156.fields.y = 0.0;
    v156.fields.z = 0.0;
    v129 = (EventMissionProgressRequest_Argument_ProgressData_o *)v128;
    QuestBoardInformaionText___ctor(v128, v123, v121, 0, 0, v162, -1, 0, v156, 1, v151, 0LL, v152);
    if ( !v122 )
      goto LABEL_138;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v122,
      v129,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
  }
LABEL_109:
  v130 = this->fields.mInfoTextList;
  if ( !v130 )
    goto LABEL_138;
  size = v130->fields._size;
  p_mOptionInfoLb = (UnityEngine_Component_o **)&this->fields.mOptionInfoLb;
  if ( size < 1 )
  {
    v140 = 0;
    goto LABEL_121;
  }
  v133 = this->fields.mListViewObject;
  if ( !v133 )
    goto LABEL_138;
  v134 = (QuestBoardListViewManager_o *)v133->fields.manager;
  if ( !v134 )
    goto LABEL_138;
  v135 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v134->klass->_2.bitflags2 + 1) < (unsigned int)v135
    || (QuestBoardListViewManager_c *)v134->klass->_2.typeHierarchy[v135 - 1] != QuestBoardListViewManager_TypeInfo )
  {
LABEL_140:
    sub_B173C8(v134);
    QuestBoardListViewItemDraw__ResetInfoTextList(v149, v150);
    return;
  }
  AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt(v134, size, 0LL);
  if ( v130->fields._size <= (unsigned int)AlphaAnimCnt )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v138 = v130->fields._items->m_Items[AlphaAnimCnt];
  if ( !v138 )
    goto LABEL_138;
  QuestBoardInformaionText__SetTime(v138, &this->fields.mOptionInfoLb, &this->fields.mOptionInfoFrameSp, v136);
  v139 = this->fields.mOptionInfoLb;
  if ( !v139 )
    goto LABEL_138;
  BoardOptionTextWithIconComponent__set_Alpha(v139, 1.0, 0LL);
  v140 = 1;
  quest_info_k__BackingField->fields.costCalcVal = fixedVal[1];
  quest_info_k__BackingField->fields._fixedCostVal_k__BackingField = fixedVal[0];
LABEL_121:
  if ( !*p_mOptionInfoLb )
    goto LABEL_138;
  v141 = UnityEngine_Component__get_transform(*p_mOptionInfoLb, 0LL);
  if ( !v141 )
    goto LABEL_138;
  v142 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v141, 0LL);
  if ( !v142 )
    goto LABEL_138;
  v143 = UnityEngine_Component__get_gameObject(v142, 0LL);
  if ( !v143 )
    goto LABEL_138;
  UnityEngine_GameObject__SetActive(v143, v140, 0LL);
  if ( !*p_mOptionInfoLb )
    goto LABEL_138;
  v144 = UnityEngine_Component__get_gameObject(*p_mOptionInfoLb, 0LL);
  if ( !v144 )
    goto LABEL_138;
  UnityEngine_GameObject__SetActive(v144, v140, 0LL);
  mEarthLine = (UnityEngine_Object_o *)this->fields.mEarthLine;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mEarthLine, 0LL, 0LL) )
  {
    v147 = QuestBoardListViewItemDraw_TypeInfo;
    v148 = this->fields.mEarthLine;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v147 = QuestBoardListViewItemDraw_TypeInfo;
    }
    if ( v148 )
    {
      QuestBoardListViewEarthLine__SetupSecond(
        v148,
        v147->static_fields->LINE_ST_POS_SHORTCUT,
        this->fields.mListViewObject,
        quest_info_k__BackingField->fields.warId,
        v146);
      return;
    }
    goto LABEL_138;
  }
}


// local variable allocation has failed, the output may be wrong!
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
  WebViewManager_o *Instance; // x0
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x20
  int32_t info_kind_k__BackingField; // w25
  DataManager_o *v26; // x22
  QuestEntity_o *Mine; // x0
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  QuestEntity_o *v29; // x21
  struct ListViewManager_o *manager; // x0
  __int64 v31; // x9
  int32_t dispType; // w28
  int64_t rightItem; // x23
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x24
  int64_t UserId; // x0
  float v36; // s0
  float v37; // s1
  float v38; // s2
  float v39; // s3
  UnityEngine_GameObject_o *mLabelObj; // x0
  float v41; // s8
  float v42; // s9
  float v43; // s10
  float v44; // s11
  UnityEngine_Component_o *mLabelNameSp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *mLabelChapterSp; // x0
  UnityEngine_GameObject_o *v48; // x0
  UnityEngine_Component_o *mLabelFaceMaskShortcutSp; // x0
  UnityEngine_GameObject_o *v50; // x0
  UnityEngine_Component_o *mLabelFaceMaskQuestSp; // x0
  UnityEngine_GameObject_o *v52; // x0
  UnityEngine_GameObject_o *mTitleObj; // x0
  UnityEngine_GameObject_o *mTitleLevelRoot; // x0
  UnityEngine_Component_o *mTitleShortcutLb; // x0
  UnityEngine_GameObject_o *v56; // x0
  UnityEngine_GameObject_o *mOptionObj; // x0
  UnityEngine_Component_o *mOptionInfoLb; // x0
  UnityEngine_GameObject_o *v59; // x0
  UnityEngine_Component_o *mOptionRestrinctionLb; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *v63; // x0
  UnityEngine_GameObject_o *mRewardObj; // x0
  UnityEngine_GameObject_o *mPhaseObj; // x0
  UnityEngine_GameObject_o *mChallengeObj; // x0
  UnityEngine_GameObject_o *mCostObj; // x0
  UnityEngine_GameObject_o *mCondObject; // x0
  UISprite_o *mcBaseP; // x0
  UISprite_o *v70; // x24
  QuestBoardListViewItemDraw_c *v71; // x0
  System_String_o **p_msQBoardL2Name_Story; // x8
  struct UISprite_o *v73; // x0
  UnityEngine_Component_o *v74; // x0
  UnityEngine_GameObject_o *v75; // x0
  UIWidget_o *Component_srcLineSprite; // x0
  const MethodInfo *v77; // x3
  QuestBoardListViewItemDraw_c *v78; // x0
  const MethodInfo *v79; // x1
  const MethodInfo *v80; // x3
  QuestBoardListViewItemDraw_o *v81; // x0
  const MethodInfo *v82; // x1
  const MethodInfo *v83; // x3
  struct UILabel_o *mTitleNameLb; // x24
  UIWidget_o **p_mTitleNameLb; // x25
  System_String_o *AdvanceNoticeText; // x0
  System_String_o *v87; // x1
  UILabel_o *v88; // x0
  System_String_o *QuestName; // x0
  System_String_o *v90; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v91; // x25
  int32_t ServantId; // w0
  ServantEntity_o *v93; // x0
  Il2CppObject *BattleName; // x0
  UIWidget_o *v95; // x24
  QuestReleaseOverwriteMaster_o *v96; // x0
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  const MethodInfo *v98; // x2
  int32_t v99; // w23
  DataMasterBase_WarMaster__WarEntity__int__o *v100; // x0
  ServantEntity_o *v101; // x0
  UILabel_o *v102; // x22
  System_String_o *Name; // x0
  UIWidget_o *v104; // x0
  const MethodInfo *v105; // x5
  QuestBoardListViewItemDraw_c *v106; // x0
  UISprite_o *v107; // x22
  const MethodInfo *v108; // x3
  int32_t questId; // w22
  int32_t afterClear; // w23
  bool IsRepeatReward; // w0
  const MethodInfo *v112; // x4
  const MethodInfo *v113; // x3
  const MethodInfo *v114; // x1
  int32_t questPhase; // w22
  int32_t PhaseMax; // w0
  int32_t v117; // w0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *mInfoTextList; // x22
  const MethodInfo *v119; // x6
  System_Collections_Generic_IEnumerable_T__o *CampaignText; // x0
  UnityEngine_Component_o *mRarePrismSp; // x0
  UnityEngine_GameObject_o *v122; // x0
  int64_t *p_expireAt; // x8
  int64_t v124; // x22
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v125; // x21
  System_String_o *v126; // x24
  __int64 v127; // x1
  __int64 v128; // x2
  __int64 v129; // x3
  __int64 v130; // x4
  QuestBoardInformaionText_o *v131; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v132; // x23
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v133; // x23
  int32_t size; // w1
  UnityEngine_Component_o **p_mOptionInfoLb; // x21
  struct QuestBoardListViewObject_o *v136; // x8
  QuestBoardListViewManager_o *v137; // x0
  __int64 v138; // x10
  const MethodInfo *v139; // x3
  int32_t AlphaAnimCnt; // w22
  QuestBoardInformaionText_o *v141; // x0
  BoardOptionTextWithIconComponent_o *v142; // x0
  bool v143; // w22
  UnityEngine_Transform_o *v144; // x0
  UnityEngine_Component_o *v145; // x0
  UnityEngine_GameObject_o *v146; // x0
  UnityEngine_GameObject_o *v147; // x0
  UnityEngine_Object_o *mEarthLine; // x21
  const MethodInfo *v149; // x3
  QuestBoardListViewItemDraw_c *v150; // x0
  QuestBoardListViewEarthLine_o *v151; // x21
  QuestBoardListViewItemDraw_o *v152; // x0
  QuestBoardListViewItem_o *v153; // x1
  const MethodInfo *v154; // x2
  EventCampaignEntity_o *v155; // [xsp+0h] [xbp-A0h]
  const MethodInfo *v156; // [xsp+10h] [xbp-90h]
  int32_t fixedVal[2]; // [xsp+20h] [xbp-80h] BYREF
  UserQuestEntity_o *entity; // [xsp+28h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v159; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v160; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v161; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v162; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v163; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v164; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v165; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v166; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v167; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FC6E6 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___, questBoardItem);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserQuestMaster___, v6);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__, v12);
    sub_B16FFC(&LocalizationManager_TypeInfo, v13);
    sub_B16FFC(&NetworkManager_TypeInfo, v14);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v15);
    sub_B16FFC(&QuestBoardInformaionText_TypeInfo, v16);
    sub_B16FFC(&QuestBoardListViewItemDraw_TypeInfo, v17);
    sub_B16FFC(&QuestBoardListViewManager_TypeInfo, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B16FFC(&StringLiteral_13352, v20);
    sub_B16FFC(&StringLiteral_23445, v21);
    sub_B16FFC(&StringLiteral_1, v22);
    byte_40FC6E6 = 1;
  }
  *(_QWORD *)fixedVal = 0LL;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !questBoardItem )
    goto LABEL_142;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_142;
  info_kind_k__BackingField = questBoardItem->fields._info_kind_k__BackingField;
  v26 = (DataManager_o *)Instance;
  Mine = MapControl_QuestInfo__GetMine(questBoardItem->fields._quest_info_k__BackingField, 0LL);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_142;
  v29 = Mine;
  manager = mListViewObject->fields.manager;
  if ( !manager )
    goto LABEL_142;
  v31 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v31
    || (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[v31 - 1] != QuestBoardListViewManager_TypeInfo )
  {
    sub_B173C8(manager);
    goto LABEL_144;
  }
  if ( !v26 )
    goto LABEL_142;
  dispType = quest_info_k__BackingField->fields.dispType;
  rightItem = (int64_t)manager[1].fields.rightItem;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              v26,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v29 || !MasterData_WarQuestSelectionMaster )
    goto LABEL_142;
  UserQuestMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, v29->fields.id, 0LL);
  *(UnityEngine_Color_o *)&v36 = dispType == 2 ? UnityEngine_Color__get_gray(0LL) : UnityEngine_Color__get_white(0LL);
  mLabelObj = this->fields.mLabelObj;
  v41 = v36;
  v42 = v37;
  v43 = v38;
  v44 = v39;
  if ( !mLabelObj )
    goto LABEL_142;
  UnityEngine_GameObject__SetActive(mLabelObj, 1, 0LL);
  mLabelNameSp = (UnityEngine_Component_o *)this->fields.mLabelNameSp;
  if ( !mLabelNameSp )
    goto LABEL_142;
  gameObject = UnityEngine_Component__get_gameObject(mLabelNameSp, 0LL);
  if ( !gameObject )
    goto LABEL_142;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  mLabelChapterSp = (UnityEngine_Component_o *)this->fields.mLabelChapterSp;
  if ( !mLabelChapterSp )
    goto LABEL_142;
  v48 = UnityEngine_Component__get_gameObject(mLabelChapterSp, 0LL);
  if ( !v48 )
    goto LABEL_142;
  UnityEngine_GameObject__SetActive(v48, 0, 0LL);
  mLabelFaceMaskShortcutSp = (UnityEngine_Component_o *)this->fields.mLabelFaceMaskShortcutSp;
  if ( !mLabelFaceMaskShortcutSp )
    goto LABEL_142;
  v50 = UnityEngine_Component__get_gameObject(mLabelFaceMaskShortcutSp, 0LL);
  if ( !v50 )
    goto LABEL_142;
  UnityEngine_GameObject__SetActive(v50, 1, 0LL);
  mLabelFaceMaskQuestSp = (UnityEngine_Component_o *)this->fields.mLabelFaceMaskQuestSp;
  if ( !mLabelFaceMaskQuestSp )
    goto LABEL_142;
  v52 = UnityEngine_Component__get_gameObject(mLabelFaceMaskQuestSp, 0LL);
  if ( !v52 )
    goto LABEL_142;
  UnityEngine_GameObject__SetActive(v52, 0, 0LL);
  mTitleObj = this->fields.mTitleObj;
  if ( !mTitleObj )
    goto LABEL_142;
  UnityEngine_GameObject__SetActive(mTitleObj, 1, 0LL);
  mTitleLevelRoot = this->fields.mTitleLevelRoot;
  if ( !mTitleLevelRoot )
    goto LABEL_142;
  UnityEngine_GameObject__SetActive(mTitleLevelRoot, 0, 0LL);
  mTitleShortcutLb = (UnityEngine_Component_o *)this->fields.mTitleShortcutLb;
  if ( !mTitleShortcutLb )
    goto LABEL_142;
  v56 = UnityEngine_Component__get_gameObject(mTitleShortcutLb, 0LL);
  if ( !v56 )
    goto LABEL_142;
  UnityEngine_GameObject__SetActive(v56, 1, 0LL);
  mOptionObj = this->fields.mOptionObj;
  if ( !mOptionObj )
    goto LABEL_142;
  UnityEngine_GameObject__SetActive(mOptionObj, 1, 0LL);
  mOptionInfoLb = (UnityEngine_Component_o *)this->fields.mOptionInfoLb;
  if ( !mOptionInfoLb )
    goto LABEL_142;
  v59 = UnityEngine_Component__get_gameObject(mOptionInfoLb, 0LL);
  if ( !v59 )
    goto LABEL_142;
  UnityEngine_GameObject__SetActive(v59, 0, 0LL);
  mOptionRestrinctionLb = (UnityEngine_Component_o *)this->fields.mOptionRestrinctionLb;
  if ( !mOptionRestrinctionLb )
    goto LABEL_142;
  transform = UnityEngine_Component__get_transform(mOptionRestrinctionLb, 0LL);
  if ( !transform )
    goto LABEL_142;
  parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !parent )
    goto LABEL_142;
  v63 = UnityEngine_Component__get_gameObject(parent, 0LL);
  if ( !v63 )
    goto LABEL_142;
  UnityEngine_GameObject__SetActive(v63, 0, 0LL);
  mRewardObj = this->fields.mRewardObj;
  if ( !mRewardObj )
    goto LABEL_142;
  UnityEngine_GameObject__SetActive(mRewardObj, 1, 0LL);
  mPhaseObj = this->fields.mPhaseObj;
  if ( !mPhaseObj )
    goto LABEL_142;
  UnityEngine_GameObject__SetActive(mPhaseObj, 0, 0LL);
  mChallengeObj = this->fields.mChallengeObj;
  if ( !mChallengeObj
    || (UnityEngine_GameObject__SetActive(mChallengeObj, 0, 0LL), (mCostObj = this->fields.mCostObj) == 0LL)
    || (UnityEngine_GameObject__SetActive(mCostObj, 0, 0LL), (mCondObject = this->fields.mCondObject) == 0LL)
    || (UnityEngine_GameObject__SetActive(mCondObject, 0, 0LL), (mcBaseP = this->fields.mcBaseP) == 0LL) )
  {
LABEL_142:
    sub_B170D4();
  }
  UISprite__set_atlas(mcBaseP, this->fields.mTerminalAtlas, 0LL);
  v70 = this->fields.mcBaseP;
  v71 = QuestBoardListViewItemDraw_TypeInfo;
  if ( info_kind_k__BackingField == 2 )
  {
    if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v71 = QuestBoardListViewItemDraw_TypeInfo;
    }
    p_msQBoardL2Name_Story = &v71->static_fields->msQBoardL2Name_Story;
    if ( !v70 )
      goto LABEL_142;
  }
  else
  {
    if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v71 = QuestBoardListViewItemDraw_TypeInfo;
    }
    p_msQBoardL2Name_Story = &v71->static_fields->msQBoardL2Name_Hero;
    if ( !v70 )
      goto LABEL_142;
  }
  UISprite__set_spriteName(v70, *p_msQBoardL2Name_Story, 0LL);
  v73 = this->fields.mcBaseP;
  if ( !v73 )
    goto LABEL_142;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v73->klass->vtable._33_MakePixelPerfect.method)(
    v73,
    v73->klass->vtable._34_get_minWidth.methodPtr);
  v74 = (UnityEngine_Component_o *)this->fields.mcBaseP;
  if ( !v74 )
    goto LABEL_142;
  v75 = UnityEngine_Component__get_gameObject(v74, 0LL);
  if ( !v75 )
    goto LABEL_142;
  Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            v75,
                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Component_srcLineSprite )
    goto LABEL_142;
  v160.fields.r = v41;
  v160.fields.g = v42;
  v160.fields.b = v43;
  v160.fields.a = v44;
  UIWidget__set_color(Component_srcLineSprite, v160, 0LL);
  if ( dispType != 2 && quest_info_k__BackingField->fields.isNew )
    QuestBoardListViewItemDraw__SetStatusActive(this, 1, 1, v77);
  v78 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v78 = QuestBoardListViewItemDraw_TypeInfo;
  }
  QuestBoardListViewItemDraw__SetNewIcon(
    this,
    v78->static_fields->NEW_POS_SHORTCUT,
    v78->static_fields->NEW_W_DEFAULT,
    v78->static_fields->NEW_H_DEFAULT,
    v77);
  if ( quest_info_k__BackingField->fields.pickupPriority >= 1 )
    QuestBoardListViewItemDraw__SetStatusActive(this, 4, 1, v80);
  QuestBoardListViewItemDraw__SetPickupIcon(this, v79);
  if ( dispType == 2 )
  {
    if ( quest_info_k__BackingField->fields.questReleaseClosedID >= 1 )
    {
      p_mTitleNameLb = (UIWidget_o **)&this->fields.mTitleNameLb;
      mTitleNameLb = this->fields.mTitleNameLb;
      AdvanceNoticeText = QuestBoardListViewItemDraw__GetAdvanceNoticeText(v81, quest_info_k__BackingField, v29, v83);
      if ( !mTitleNameLb )
        goto LABEL_142;
      v87 = AdvanceNoticeText;
      v88 = mTitleNameLb;
      goto LABEL_80;
    }
  }
  else if ( quest_info_k__BackingField->fields.isNew && quest_info_k__BackingField->fields.pickupPriority >= 1 )
  {
    QuestBoardListViewItemDraw__SetStatusToggle(this, v82);
  }
  QuestName = QuestEntity__getQuestName(v29, 0LL);
  if ( !QuestName )
    goto LABEL_142;
  v90 = QuestName;
  if ( System_String__Contains(QuestName, (System_String_o *)StringLiteral_23445, 0LL) )
  {
    v91 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           v26,
                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
    ServantId = QuestEntity__getServantId(v29, 0LL);
    if ( !v91 )
      goto LABEL_142;
    v93 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               v91,
                               ServantId,
                               (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !v93 )
      goto LABEL_142;
    BattleName = (Il2CppObject *)ServantEntity__getBattleName(v93, 0, -1, 0LL);
    v90 = System_String__Format(v90, BattleName, 0LL);
  }
  p_mTitleNameLb = (UIWidget_o **)&this->fields.mTitleNameLb;
  v88 = this->fields.mTitleNameLb;
  if ( !v88 )
    goto LABEL_142;
  v87 = v90;
LABEL_80:
  UILabel__set_text(v88, v87, 0LL);
  v95 = *p_mTitleNameLb;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  }
  if ( !v95 )
    goto LABEL_142;
  UILabel__SetCondensedScale(
    (UILabel_o *)v95,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH,
    0LL);
  if ( !*p_mTitleNameLb )
    goto LABEL_142;
  v161.fields.r = v41;
  v161.fields.g = v42;
  v161.fields.b = v43;
  v161.fields.a = v44;
  UIWidget__set_color(*p_mTitleNameLb, v161, 0LL);
  if ( dispType == 2 )
  {
    v96 = (QuestReleaseOverwriteMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             v26,
                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
    if ( !v96 )
      goto LABEL_142;
    EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(v96, v29->fields.id, rightItem, 0LL);
    QuestBoardListViewItemDraw__SetupCondtionChangeMessage(this, EntityByQuestIdAndTime, v98);
  }
  v99 = QuestEntity__getServantId(v29, 0LL);
  v100 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          v26,
                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !v100 )
    goto LABEL_142;
  v101 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              v100,
                              v99,
                              (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v102 = this->fields.mTitleShortcutLb;
  if ( v101 )
  {
    Name = ServantEntity__getName(v101, -1, -1, 0LL);
    if ( !v102 )
      goto LABEL_142;
    UILabel__set_text(v102, Name, 0LL);
    v104 = (UIWidget_o *)this->fields.mTitleShortcutLb;
    if ( !v104 )
      goto LABEL_142;
    v162.fields.r = v41;
    v162.fields.g = v42;
    v162.fields.b = v43;
    v162.fields.a = v44;
    UIWidget__set_color(v104, v162, 0LL);
  }
  else
  {
    if ( !v102 )
      goto LABEL_142;
    UILabel__set_text(this->fields.mTitleShortcutLb, (System_String_o *)StringLiteral_1, 0LL);
  }
  v106 = QuestBoardListViewItemDraw_TypeInfo;
  v107 = this->fields.mLabelFaceMaskShortcutSp;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v106 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v163.fields.r = v41;
  v163.fields.g = v42;
  v163.fields.b = v43;
  v163.fields.a = v44;
  QuestBoardListViewItemDraw__SetFaceImage(
    this,
    v29,
    v107,
    v106->static_fields->SHORTCUT_FACE_MASK_SP_W,
    v106->static_fields->SHORTCUT_FACE_MASK_SPNAME,
    v163,
    v105);
  v164.fields.r = v41;
  v164.fields.g = v42;
  v164.fields.b = v43;
  v164.fields.a = v44;
  QuestBoardListViewItemDraw__SetupRewardIconDisp(this, v29, dispType == 2, v164, v108);
  questId = quest_info_k__BackingField->fields.questId;
  afterClear = v29->fields.afterClear;
  IsRepeatReward = QuestEntity__IsRepeatReward(v29, 0LL);
  v165.fields.r = v41;
  v165.fields.g = v42;
  v165.fields.b = v43;
  v165.fields.a = v44;
  QuestBoardListViewItemDraw__SetupFirstRewardDisp(this, questId, afterClear, v165, IsRepeatReward, v112);
  v166.fields.r = v41;
  v166.fields.g = v42;
  v166.fields.b = v43;
  v166.fields.a = v44;
  QuestBoardListViewItemDraw__SetupRewardGotAndNotGiveDisp(this, quest_info_k__BackingField, entity, v166, v113);
  QuestBoardListViewItemDraw__ResetInfoTextList(this, v114);
  fixedVal[0] = -1;
  fixedVal[1] = 0;
  questPhase = quest_info_k__BackingField->fields.questPhase;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0LL);
  v117 = UnityEngine_Mathf__Min_40727532(questPhase + 1, PhaseMax, 0LL);
  mInfoTextList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields.mInfoTextList;
  CampaignText = (System_Collections_Generic_IEnumerable_T__o *)QuestBoardListViewItemDraw__GetCampaignText(
                                                                  this,
                                                                  quest_info_k__BackingField->fields.questId,
                                                                  v117,
                                                                  0,
                                                                  &fixedVal[1],
                                                                  fixedVal,
                                                                  v119);
  if ( !mInfoTextList )
    goto LABEL_142;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    mInfoTextList,
    CampaignText,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
  mRarePrismSp = (UnityEngine_Component_o *)this->fields.mRarePrismSp;
  if ( !mRarePrismSp )
    goto LABEL_142;
  v122 = UnityEngine_Component__get_gameObject(mRarePrismSp, 0LL);
  if ( !v122 )
    goto LABEL_142;
  if ( UnityEngine_GameObject__get_activeSelf(v122, 0LL) )
  {
    if ( !entity )
      goto LABEL_142;
    if ( UserQuestEntity__IsExpireNoLimit(entity, 0LL) )
      goto LABEL_114;
    if ( !entity )
      goto LABEL_142;
    p_expireAt = &entity->fields.expireAt;
  }
  else
  {
    p_expireAt = &quest_info_k__BackingField->fields.endTime;
  }
  v124 = *p_expireAt;
  if ( *p_expireAt >= 1 && !QuestEntity__HasFlag(v29, 32LL, 0LL) )
  {
    v125 = this->fields.mInfoTextList;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v126 = LocalizationManager__Get((System_String_o *)StringLiteral_13352, 0LL);
    v131 = (QuestBoardInformaionText_o *)sub_B170CC(QuestBoardInformaionText_TypeInfo, v127, v128, v129, v130);
    v167.fields.r = 0.0;
    v167.fields.g = 0.0;
    v167.fields.b = 0.0;
    v167.fields.a = 0.0;
    v159.fields.x = 0.0;
    v159.fields.y = 0.0;
    v159.fields.z = 0.0;
    v132 = (EventMissionProgressRequest_Argument_ProgressData_o *)v131;
    QuestBoardInformaionText___ctor(v131, v126, v124, 0, 0, v167, -1, 0, v159, 1, v155, 0LL, v156);
    if ( !v125 )
      goto LABEL_142;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v125,
      v132,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
  }
LABEL_114:
  v133 = this->fields.mInfoTextList;
  if ( !v133 )
    goto LABEL_142;
  size = v133->fields._size;
  p_mOptionInfoLb = (UnityEngine_Component_o **)&this->fields.mOptionInfoLb;
  if ( size >= 1 )
  {
    v136 = this->fields.mListViewObject;
    if ( !v136 )
      goto LABEL_142;
    v137 = (QuestBoardListViewManager_o *)v136->fields.manager;
    if ( !v137 )
      goto LABEL_142;
    v138 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v137->klass->_2.bitflags2 + 1) >= (unsigned int)v138
      && (QuestBoardListViewManager_c *)v137->klass->_2.typeHierarchy[v138 - 1] == QuestBoardListViewManager_TypeInfo )
    {
      AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt(v137, size, 0LL);
      if ( v133->fields._size <= (unsigned int)AlphaAnimCnt )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v141 = v133->fields._items->m_Items[AlphaAnimCnt];
      if ( !v141 )
        goto LABEL_142;
      QuestBoardInformaionText__SetTime(v141, &this->fields.mOptionInfoLb, &this->fields.mOptionInfoFrameSp, v139);
      v142 = this->fields.mOptionInfoLb;
      if ( !v142 )
        goto LABEL_142;
      BoardOptionTextWithIconComponent__set_Alpha(v142, 1.0, 0LL);
      v143 = 1;
      quest_info_k__BackingField->fields.costCalcVal = fixedVal[1];
      quest_info_k__BackingField->fields._fixedCostVal_k__BackingField = fixedVal[0];
      goto LABEL_126;
    }
LABEL_144:
    sub_B173C8(v137);
    QuestBoardListViewItemDraw__SetItemOfQuest(v152, v153, v154);
    return;
  }
  v143 = 0;
LABEL_126:
  if ( !*p_mOptionInfoLb )
    goto LABEL_142;
  v144 = UnityEngine_Component__get_transform(*p_mOptionInfoLb, 0LL);
  if ( !v144 )
    goto LABEL_142;
  v145 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v144, 0LL);
  if ( !v145 )
    goto LABEL_142;
  v146 = UnityEngine_Component__get_gameObject(v145, 0LL);
  if ( !v146 )
    goto LABEL_142;
  UnityEngine_GameObject__SetActive(v146, v143, 0LL);
  if ( !*p_mOptionInfoLb )
    goto LABEL_142;
  v147 = UnityEngine_Component__get_gameObject(*p_mOptionInfoLb, 0LL);
  if ( !v147 )
    goto LABEL_142;
  UnityEngine_GameObject__SetActive(v147, v143, 0LL);
  mEarthLine = (UnityEngine_Object_o *)this->fields.mEarthLine;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mEarthLine, 0LL, 0LL) )
  {
    v150 = QuestBoardListViewItemDraw_TypeInfo;
    v151 = this->fields.mEarthLine;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v150 = QuestBoardListViewItemDraw_TypeInfo;
    }
    if ( !v151 )
      goto LABEL_142;
    QuestBoardListViewEarthLine__SetupSecond(
      v151,
      v150->static_fields->LINE_ST_POS_SHORTCUT,
      this->fields.mListViewObject,
      quest_info_k__BackingField->fields.warId,
      v149);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewItemDraw__SetItemOfWarBoard(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v30; // x20
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  WebViewManager_o *Instance; // x0
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x21
  DataManager_o *v39; // x23
  QuestEntity_o *Mine; // x0
  QuestEntity_o *PhaseDetailedEntity; // x22
  int32_t QuestType; // w0
  unsigned int v43; // w25
  QuestGroupMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t dispType; // w24
  bool HasFlag; // w26
  int v47; // s0
  int v48; // s1
  int v49; // s2
  int v50; // s3
  UserQuestMaster_o *v51; // x23
  int64_t UserId; // x0
  int32_t questId; // w23
  bool IsQuestClear_25438860; // w0
  int32_t questPhase; // w23
  int32_t PhaseMax; // w0
  int32_t v57; // w0
  UnityEngine_GameObject_o *mLabelObj; // x8
  UnityEngine_Component_o *mLabelNameSp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *mLabelChapterSp; // x0
  UnityEngine_GameObject_o *v62; // x0
  UnityEngine_Component_o *mLabelFaceMaskShortcutSp; // x0
  UnityEngine_GameObject_o *v64; // x0
  UnityEngine_Component_o *mLabelFaceMaskQuestSp; // x0
  UnityEngine_GameObject_o *v66; // x0
  UnityEngine_GameObject_o *mTitleObj; // x0
  UnityEngine_Component_o *mTitleShortcutLb; // x0
  UnityEngine_GameObject_o *v69; // x0
  UnityEngine_GameObject_o *mOptionObj; // x0
  UnityEngine_GameObject_o *mRewardObj; // x0
  UnityEngine_Component_o *mOptionInfoLb; // x0
  UnityEngine_GameObject_o *v73; // x0
  UnityEngine_GameObject_o *mPhaseObj; // x0
  UnityEngine_GameObject_o *mChallengeObj; // x0
  UnityEngine_Component_o *mOptionRestrinctionLb; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *v79; // x0
  UnityEngine_Component_o *mBoardMessage; // x0
  UnityEngine_GameObject_o *v81; // x0
  UnityEngine_GameObject_o *mCostObj; // x27
  QuestBoardListViewItemDraw_c *v83; // x0
  UnityEngine_Component_o *mCostApSp; // x0
  UnityEngine_GameObject_o *v85; // x0
  UnityEngine_Component_o *mCostLb1; // x0
  UnityEngine_GameObject_o *v87; // x0
  UnityEngine_Component_o *mShohiSp; // x0
  UnityEngine_GameObject_o *v89; // x0
  QuestBoardListViewItemDraw_c *v90; // x0
  System_String_o *QUEST_BOARD_SPNAME_PREFIX; // x24
  System_String_o *v92; // x0
  System_String_o *v93; // x0
  UnityEngine_Component_o **p_mcBaseP; // x26
  UISprite_o *v95; // x28
  System_String_o *v96; // x24
  bool v97; // w0
  UISprite_o *v98; // x24
  System_String_o *QUEST_BOARD_SHOHI_SPNAME_PREFIX; // x28
  System_String_o *v100; // x0
  System_String_o *v101; // x0
  UISprite_o *v102; // x27
  System_String_o *SHOHI_SP_NAME_WAR_BOARD; // x1
  UISprite_o *v104; // x27
  __int64 v105; // x1
  __int64 v106; // x2
  UISprite_o *mcBaseP; // x27
  QuestBoardListViewItemDraw_c *v108; // x0
  struct System_String_array *msQBoardL3Names; // x8
  System_String_o *v110; // x24
  struct System_String_array *v111; // x8
  System_String_o *v112; // x0
  System_String_o *v113; // x24
  int32_t v114; // w24
  UnityEngine_GameObject_o *v115; // x0
  UIWidget_o *Component_srcLineSprite; // x0
  const MethodInfo *v117; // x3
  UnityEngine_Component_o *mNextSp; // x0
  UnityEngine_GameObject_o *v119; // x0
  UnityEngine_Component_o *v120; // x0
  UnityEngine_GameObject_o *v121; // x0
  QuestBoardListViewItemDraw_c *v122; // x8
  UnityEngine_GameObject_o *v123; // x27
  UnityEngine_Component_o *v124; // x0
  UnityEngine_GameObject_o *v125; // x0
  srcLineSprite_o *v126; // x0
  float NEXT_POS_X_QUEST; // w8
  int32_t v128; // w1
  UnityEngine_Component_o *v129; // x0
  UnityEngine_GameObject_o *v130; // x0
  bool activeSelf; // w0
  const MethodInfo *v132; // x3
  QuestBoardListViewItemDraw_c *v133; // x8
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  const MethodInfo *v138; // x2
  UnityEngine_GameObject_o *StatusSp; // x0
  UnityEngine_GameObject_o *v140; // x27
  _BOOL8 v141; // x0
  const MethodInfo *v142; // x5
  QuestBoardListViewItemDraw_c *v143; // x0
  int32_t v144; // w27
  System_String_o *RecommendLv; // x0
  UnityEngine_GameObject_o *mTitleLevelRoot; // x24
  System_String_o *v147; // x26
  bool IsNullOrEmpty; // w0
  UnityEngine_GameObject_o *v149; // x0
  const MethodInfo *v150; // x2
  UILabel_o *mTitleLevelLb; // x0
  UIWidget_o *v152; // x0
  UIWidget_o *mTitleLevelSp; // x0
  UIWidget_o *mTitleLevelStrSp; // x0
  UnityEngine_Component_o *v155; // x0
  UnityEngine_GameObject_o *v156; // x0
  QuestBoardListViewItemDraw_c *v157; // x8
  UnityEngine_GameObject_o *v158; // x26
  UnityEngine_Component_o *v159; // x0
  UnityEngine_GameObject_o *v160; // x0
  struct UILabel_o *v161; // x8
  int mWidth; // w8
  int v163; // w8
  QuestBoardListViewItemDraw_o *v164; // x0
  UISprite_o *v165; // x26
  int32_t mMatrixFrame; // w24
  System_String_o *FaceMaskSpriteName; // x0
  const MethodInfo *v168; // x5
  bool v169; // w0
  const MethodInfo *v170; // x3
  UILabel_o *mTitleNameLb; // x26
  System_String_o *DispQuestName; // x0
  _BOOL8 enabled; // x0
  const MethodInfo *v174; // x3
  System_String_o *QuestName; // x0
  QuestBoardListViewItemDraw_o *v176; // x0
  const MethodInfo *v177; // x2
  UnityEngine_Component_o *mLabelSubSectionNumLb; // x0
  UnityEngine_GameObject_o *v179; // x0
  UILabel_o *v180; // x25
  const MethodInfo *v181; // x2
  bool v182; // w8
  QuestBoardListViewItemDraw_o *p_chapterSubId; // x0
  System_String_o *v184; // x0
  UnityEngine_Behaviour_o *boardIconTexture; // x0
  UnityEngine_Component_o *v186; // x0
  UnityEngine_GameObject_o *v187; // x0
  UISprite_o *v188; // x26
  QuestBoardListViewItemDraw_o *v189; // x0
  const MethodInfo *v190; // x3
  System_String_o *QuestIconName; // x24
  bool v192; // w0
  struct UISprite_o *v193; // x0
  UnityEngine_Component_o *v194; // x0
  UnityEngine_GameObject_o *v195; // x0
  UIWidget_o *v196; // x0
  UnityEngine_Behaviour_o *v197; // x0
  __int64 v198; // x1
  __int64 v199; // x2
  __int64 v200; // x4
  System_Action_o *v201; // x24
  const MethodInfo *v202; // x3
  UILabel_o *v203; // x24
  System_String_o *AdvanceNoticeText; // x0
  UILabel_o *v205; // x25
  UIWidget_o *v206; // x0
  const MethodInfo *v207; // x3
  int32_t v208; // w24
  int32_t afterClear; // w25
  float v210; // s8
  float v211; // s9
  float v212; // s10
  float v213; // s11
  bool IsRepeatReward; // w0
  const MethodInfo *v215; // x4
  const MethodInfo *v216; // x3
  const MethodInfo *v217; // x1
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *mInfoTextList; // x25
  const MethodInfo *v219; // x6
  System_Collections_Generic_IEnumerable_T__o *CampaignText; // x0
  UnityEngine_Component_o *mRarePrismSp; // x0
  UnityEngine_GameObject_o *v222; // x0
  int64_t *p_expireAt; // x8
  int64_t v224; // x24
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v225; // x25
  System_String_o *v226; // x27
  __int64 v227; // x1
  __int64 v228; // x2
  __int64 v229; // x3
  __int64 v230; // x4
  QuestBoardInformaionText_o *v231; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v232; // x26
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v233; // x26
  int32_t size; // w1
  UnityEngine_Component_o **p_mOptionInfoLb; // x24
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  QuestBoardListViewManager_o *manager; // x0
  __int64 v238; // x10
  const MethodInfo *v239; // x3
  int32_t AlphaAnimCnt; // w25
  QuestBoardInformaionText_o *v241; // x0
  BoardOptionTextWithIconComponent_o *v242; // x0
  bool v243; // w25
  UnityEngine_Transform_o *v244; // x0
  UnityEngine_Component_o *v245; // x0
  UnityEngine_GameObject_o *v246; // x0
  UnityEngine_GameObject_o *v247; // x0
  UILabel_o *v248; // x0
  WebViewManager_o *v249; // x0
  WarBoardQuestMaster_o *v250; // x0
  WarBoardQuestEntity_o *v251; // x0
  WarBoardQuestEntity_o *v252; // x21
  WebViewManager_o *v253; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v254; // x0
  WarEntity_o *v255; // x0
  UILabel_o *v256; // x21
  UIWidget_o *v257; // x0
  UISprite_o *v258; // x0
  struct System_String_array *v259; // x8
  UnityEngine_Component_o *v260; // x0
  UnityEngine_GameObject_o *v261; // x0
  UnityEngine_Component_o *v262; // x0
  UnityEngine_GameObject_o *v263; // x0
  UISprite_o *v264; // x25
  QuestBoardListViewItemDraw_o *v265; // x0
  const MethodInfo *v266; // x2
  System_String_o *QuestIconNameForMainType; // x24
  bool v268; // w0
  struct UISprite_o *v269; // x0
  EventCampaignEntity_o *v270; // [xsp+0h] [xbp-C0h]
  const MethodInfo *v271; // [xsp+10h] [xbp-B0h]
  bool v272; // [xsp+24h] [xbp-9Ch]
  bool v273; // [xsp+28h] [xbp-98h]
  int32_t v274; // [xsp+2Ch] [xbp-94h]
  int32_t phase; // [xsp+30h] [xbp-90h]
  int32_t fixedVal; // [xsp+34h] [xbp-8Ch] BYREF
  int32_t costCalcVal; // [xsp+38h] [xbp-88h] BYREF
  bool isTripleItemConsume; // [xsp+3Ch] [xbp-84h] BYREF
  bool isDoubleItemConsumeQp; // [xsp+40h] [xbp-80h] BYREF
  bool isDoubleItemConsume; // [xsp+44h] [xbp-7Ch] BYREF
  UserQuestEntity_o *entity; // [xsp+48h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v282; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v283; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v284; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FC6ED & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, questBoardItem);
    sub_B16FFC(&AtlasManager_TypeInfo, v7);
    sub_B16FFC(&CondType_TypeInfo, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestGroupMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserQuestMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_WarBoardQuestMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_WarBoardStageMaster___, v12);
    sub_B16FFC(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__, v13);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v14);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__, v19);
    sub_B16FFC(&LocalizationManager_TypeInfo, v20);
    sub_B16FFC(&NetworkManager_TypeInfo, v21);
    sub_B16FFC(&QuestBoardInformaionText_TypeInfo, v22);
    sub_B16FFC(&QuestBoardListViewItemDraw_TypeInfo, v23);
    sub_B16FFC(&QuestBoardListViewManager_TypeInfo, v24);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_B16FFC(&Method_QuestBoardListViewItemDraw___c__DisplayClass301_0__SetItemOfWarBoard_b__0__, v26);
    sub_B16FFC(&QuestBoardListViewItemDraw___c__DisplayClass301_0_TypeInfo, v27);
    sub_B16FFC(&StringLiteral_13352, v28);
    sub_B16FFC(&StringLiteral_1, v29);
    byte_40FC6ED = 1;
  }
  entity = 0LL;
  isDoubleItemConsume = 0;
  isDoubleItemConsumeQp = 0;
  isTripleItemConsume = 0;
  fixedVal = 0;
  costCalcVal = 0;
  v30 = sub_B170CC(QuestBoardListViewItemDraw___c__DisplayClass301_0_TypeInfo, questBoardItem, method, v3, v4);
  QuestBoardListViewItemDraw___c__DisplayClass301_0___ctor(
    (QuestBoardListViewItemDraw___c__DisplayClass301_0_o *)v30,
    0LL);
  if ( !v30 )
    goto LABEL_254;
  *(_QWORD *)(v30 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v30 + 16), (System_Int32_array **)this, v31, v32, v33, v34, v35, v36);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !questBoardItem )
    goto LABEL_254;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_254;
  v39 = (DataManager_o *)Instance;
  Mine = MapControl_QuestInfo__GetMine(quest_info_k__BackingField, 0LL);
  if ( !Mine )
    goto LABEL_254;
  PhaseDetailedEntity = QuestEntity__GetPhaseDetailedEntity(Mine, 0LL);
  QuestType = MapControl_QuestInfo__GetQuestType(quest_info_k__BackingField, 0LL);
  if ( !v39 )
    goto LABEL_254;
  v43 = QuestType;
  MasterData_WarQuestSelectionMaster = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               v39,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !PhaseDetailedEntity || !MasterData_WarQuestSelectionMaster )
    goto LABEL_254;
  QuestGroupMaster__GetEventId(MasterData_WarQuestSelectionMaster, PhaseDetailedEntity->fields.id, 0LL);
  dispType = quest_info_k__BackingField->fields.dispType;
  HasFlag = QuestEntity__HasFlag(PhaseDetailedEntity, 2LL, 0LL);
  if ( dispType == 2 )
    *(UnityEngine_Color_o *)&v47 = UnityEngine_Color__get_gray(0LL);
  else
    *(UnityEngine_Color_o *)&v47 = UnityEngine_Color__get_white(0LL);
  *(_DWORD *)(v30 + 24) = v47;
  *(_DWORD *)(v30 + 28) = v48;
  *(_DWORD *)(v30 + 32) = v49;
  *(_DWORD *)(v30 + 36) = v50;
  v51 = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               v39,
                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v51 )
    goto LABEL_254;
  UserQuestMaster__TryGetEntity(v51, &entity, UserId, PhaseDetailedEntity->fields.id, 0LL);
  isDoubleItemConsume = 0;
  isDoubleItemConsumeQp = 0;
  isTripleItemConsume = 0;
  questId = quest_info_k__BackingField->fields.questId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_25438860 = CondType__IsQuestClear_25438860(questId, -1, 0, 0LL);
  questPhase = quest_info_k__BackingField->fields.questPhase;
  v273 = IsQuestClear_25438860;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0LL);
  v57 = UnityEngine_Mathf__Min_40727532(questPhase + 1, PhaseMax, 0LL);
  mLabelObj = this->fields.mLabelObj;
  phase = v57;
  if ( !mLabelObj )
    goto LABEL_254;
  UnityEngine_GameObject__SetActive(mLabelObj, 1, 0LL);
  mLabelNameSp = (UnityEngine_Component_o *)this->fields.mLabelNameSp;
  if ( !mLabelNameSp )
    goto LABEL_254;
  gameObject = UnityEngine_Component__get_gameObject(mLabelNameSp, 0LL);
  if ( !gameObject )
    goto LABEL_254;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  mLabelChapterSp = (UnityEngine_Component_o *)this->fields.mLabelChapterSp;
  if ( !mLabelChapterSp )
    goto LABEL_254;
  v62 = UnityEngine_Component__get_gameObject(mLabelChapterSp, 0LL);
  if ( !v62 )
    goto LABEL_254;
  UnityEngine_GameObject__SetActive(v62, 0, 0LL);
  mLabelFaceMaskShortcutSp = (UnityEngine_Component_o *)this->fields.mLabelFaceMaskShortcutSp;
  if ( !mLabelFaceMaskShortcutSp )
    goto LABEL_254;
  v64 = UnityEngine_Component__get_gameObject(mLabelFaceMaskShortcutSp, 0LL);
  if ( !v64 )
    goto LABEL_254;
  UnityEngine_GameObject__SetActive(v64, 0, 0LL);
  mLabelFaceMaskQuestSp = (UnityEngine_Component_o *)this->fields.mLabelFaceMaskQuestSp;
  if ( !mLabelFaceMaskQuestSp )
    goto LABEL_254;
  v66 = UnityEngine_Component__get_gameObject(mLabelFaceMaskQuestSp, 0LL);
  if ( !v66 )
    goto LABEL_254;
  UnityEngine_GameObject__SetActive(v66, 1, 0LL);
  mTitleObj = this->fields.mTitleObj;
  if ( !mTitleObj )
    goto LABEL_254;
  UnityEngine_GameObject__SetActive(mTitleObj, 1, 0LL);
  mTitleShortcutLb = (UnityEngine_Component_o *)this->fields.mTitleShortcutLb;
  if ( !mTitleShortcutLb )
    goto LABEL_254;
  v69 = UnityEngine_Component__get_gameObject(mTitleShortcutLb, 0LL);
  if ( !v69 )
    goto LABEL_254;
  UnityEngine_GameObject__SetActive(v69, 0, 0LL);
  mOptionObj = this->fields.mOptionObj;
  if ( !mOptionObj )
    goto LABEL_254;
  UnityEngine_GameObject__SetActive(mOptionObj, 1, 0LL);
  mRewardObj = this->fields.mRewardObj;
  if ( !mRewardObj )
    goto LABEL_254;
  UnityEngine_GameObject__SetActive(mRewardObj, 1, 0LL);
  mOptionInfoLb = (UnityEngine_Component_o *)this->fields.mOptionInfoLb;
  if ( !mOptionInfoLb )
    goto LABEL_254;
  v73 = UnityEngine_Component__get_gameObject(mOptionInfoLb, 0LL);
  if ( !v73 )
    goto LABEL_254;
  UnityEngine_GameObject__SetActive(v73, 0, 0LL);
  mPhaseObj = this->fields.mPhaseObj;
  if ( !mPhaseObj )
    goto LABEL_254;
  UnityEngine_GameObject__SetActive(mPhaseObj, 0, 0LL);
  mChallengeObj = this->fields.mChallengeObj;
  if ( !mChallengeObj )
    goto LABEL_254;
  UnityEngine_GameObject__SetActive(mChallengeObj, 0, 0LL);
  mOptionRestrinctionLb = (UnityEngine_Component_o *)this->fields.mOptionRestrinctionLb;
  if ( !mOptionRestrinctionLb )
    goto LABEL_254;
  transform = UnityEngine_Component__get_transform(mOptionRestrinctionLb, 0LL);
  if ( !transform )
    goto LABEL_254;
  parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !parent )
    goto LABEL_254;
  v79 = UnityEngine_Component__get_gameObject(parent, 0LL);
  if ( !v79 )
    goto LABEL_254;
  UnityEngine_GameObject__SetActive(v79, 0, 0LL);
  mBoardMessage = (UnityEngine_Component_o *)this->fields.mBoardMessage;
  if ( !mBoardMessage )
    goto LABEL_254;
  v272 = HasFlag;
  v274 = dispType;
  v81 = UnityEngine_Component__get_gameObject(mBoardMessage, 0LL);
  if ( !v81 )
    goto LABEL_254;
  UnityEngine_GameObject__SetActive(v81, 1, 0LL);
  mCostObj = this->fields.mCostObj;
  v83 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v83 = QuestBoardListViewItemDraw_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition(mCostObj, v83->static_fields->COST_OBJ_POS_WAR_BOARD, 0LL);
  mCostApSp = (UnityEngine_Component_o *)this->fields.mCostApSp;
  if ( !mCostApSp )
    goto LABEL_254;
  v85 = UnityEngine_Component__get_gameObject(mCostApSp, 0LL);
  GameObjectExtensions__SetLocalPosition(
    v85,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_1_ICON_AP_POS_WAR_BOARD,
    0LL);
  mCostLb1 = (UnityEngine_Component_o *)this->fields.mCostLb1;
  if ( !mCostLb1 )
    goto LABEL_254;
  v87 = UnityEngine_Component__get_gameObject(mCostLb1, 0LL);
  GameObjectExtensions__SetLocalPosition(
    v87,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_1_LABEL_AP_POS_WAR_BOARD,
    0LL);
  mShohiSp = (UnityEngine_Component_o *)this->fields.mShohiSp;
  if ( !mShohiSp )
    goto LABEL_254;
  v89 = UnityEngine_Component__get_gameObject(mShohiSp, 0LL);
  GameObjectExtensions__SetLocalPosition(
    v89,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->SHOHI_SP_POS_WAR_BOARD,
    0LL);
  if ( PhaseDetailedEntity->fields.bannerId < 1 )
  {
    v104 = this->fields.mShohiSp;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    }
    if ( !v104 )
      goto LABEL_254;
    UISprite__set_spriteName(v104, QuestBoardListViewItemDraw_TypeInfo->static_fields->SHOHI_SP_NAME_WAR_BOARD, 0LL);
    if ( v43 <= 7 && ((1 << v43) & 0xA6) != 0 )
    {
      p_mcBaseP = (UnityEngine_Component_o **)&this->fields.mcBaseP;
      mcBaseP = this->fields.mcBaseP;
      v108 = QuestBoardListViewItemDraw_TypeInfo;
      if ( v43 == 7 )
      {
        if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v108 = QuestBoardListViewItemDraw_TypeInfo;
        }
        msQBoardL3Names = v108->static_fields->msQBoardL3Names;
        if ( !msQBoardL3Names )
          goto LABEL_254;
        if ( msQBoardL3Names->max_length > 1 )
        {
          v110 = msQBoardL3Names->m_Items[1];
          goto LABEL_84;
        }
      }
      else
      {
        if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v108 = QuestBoardListViewItemDraw_TypeInfo;
        }
        v111 = v108->static_fields->msQBoardL3Names;
        if ( !v111 )
          goto LABEL_254;
        if ( v43 < v111->max_length )
        {
          v110 = v111->m_Items[v43];
LABEL_84:
          v112 = System_Int32__ToString((int)PhaseDetailedEntity + 60, 0LL);
          v113 = System_String__Concat_43743732(v110, v112, 0LL);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetBanner(mcBaseP, v113, 0LL);
          goto LABEL_88;
        }
      }
    }
    else
    {
      p_mcBaseP = (UnityEngine_Component_o **)&this->fields.mcBaseP;
      v258 = this->fields.mcBaseP;
      if ( !v258 )
        goto LABEL_254;
      UISprite__set_atlas(v258, this->fields.mTerminalAtlas, 0LL);
      v108 = QuestBoardListViewItemDraw_TypeInfo;
      v102 = this->fields.mcBaseP;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v108 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v259 = v108->static_fields->msQBoardL3Names;
      if ( !v259 )
        goto LABEL_254;
      if ( v43 < v259->max_length )
      {
        if ( !v102 )
          goto LABEL_254;
        SHOHI_SP_NAME_WAR_BOARD = v259->m_Items[v43];
LABEL_64:
        UISprite__set_spriteName(v102, SHOHI_SP_NAME_WAR_BOARD, 0LL);
        goto LABEL_88;
      }
    }
LABEL_256:
    sub_B17100(v108, v105, v106);
    sub_B170A0();
  }
  v90 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v90 = QuestBoardListViewItemDraw_TypeInfo;
  }
  QUEST_BOARD_SPNAME_PREFIX = v90->static_fields->QUEST_BOARD_SPNAME_PREFIX;
  v92 = System_Int32__ToString((int)PhaseDetailedEntity + 64, 0LL);
  v93 = System_String__Concat_43743732(QUEST_BOARD_SPNAME_PREFIX, v92, 0LL);
  p_mcBaseP = (UnityEngine_Component_o **)&this->fields.mcBaseP;
  v95 = this->fields.mcBaseP;
  v96 = v93;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  v97 = AtlasManager__SetEventUI(v95, v96, 0LL);
  if ( !v95 )
    goto LABEL_254;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v95, v97, 0LL);
  v98 = this->fields.mShohiSp;
  QUEST_BOARD_SHOHI_SPNAME_PREFIX = QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_SHOHI_SPNAME_PREFIX;
  v100 = System_Int32__ToString((int)PhaseDetailedEntity + 64, 0LL);
  v101 = System_String__Concat_43743732(QUEST_BOARD_SHOHI_SPNAME_PREFIX, v100, 0LL);
  if ( !AtlasManager__SetEventUI(v98, v101, 0LL) )
  {
    v102 = this->fields.mShohiSp;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    }
    if ( !v102 )
      goto LABEL_254;
    SHOHI_SP_NAME_WAR_BOARD = QuestBoardListViewItemDraw_TypeInfo->static_fields->SHOHI_SP_NAME_WAR_BOARD;
    goto LABEL_64;
  }
LABEL_88:
  v114 = v274;
  if ( !*p_mcBaseP )
    goto LABEL_254;
  ((void (__fastcall *)(UnityEngine_Component_o *, void *))(*p_mcBaseP)->klass[2]._1.typeMetadataHandle)(
    *p_mcBaseP,
    (*p_mcBaseP)->klass[2]._1.interopData);
  if ( !*p_mcBaseP )
    goto LABEL_254;
  v115 = UnityEngine_Component__get_gameObject(*p_mcBaseP, 0LL);
  if ( !v115 )
    goto LABEL_254;
  Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            v115,
                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Component_srcLineSprite )
    goto LABEL_254;
  UIWidget__set_color(Component_srcLineSprite, *(UnityEngine_Color_o *)(v30 + 24), 0LL);
  if ( MapControl_QuestInfo__GetQuestType(quest_info_k__BackingField, 0LL) == 7
    && MapControl_QuestInfo__IsDisplayWarBoardNextIcon(quest_info_k__BackingField, 0LL) )
  {
    mNextSp = (UnityEngine_Component_o *)this->fields.mNextSp;
    if ( !mNextSp )
      goto LABEL_254;
    v119 = UnityEngine_Component__get_gameObject(mNextSp, 0LL);
    if ( !v119 )
      goto LABEL_254;
    UnityEngine_GameObject__SetActive(v119, 1, 0LL);
    v120 = (UnityEngine_Component_o *)this->fields.mNextSp;
    if ( !v120 )
      goto LABEL_254;
    v121 = UnityEngine_Component__get_gameObject(v120, 0LL);
    v122 = QuestBoardListViewItemDraw_TypeInfo;
    v123 = v121;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v122 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionX(v123, v122->static_fields->NEXT_POS_X_QUEST, 0LL);
    v124 = (UnityEngine_Component_o *)this->fields.mNextSp;
    if ( !v124 )
      goto LABEL_254;
    v125 = UnityEngine_Component__get_gameObject(v124, 0LL);
    v114 = v274;
    if ( !v125 )
      goto LABEL_254;
    v126 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
             v125,
             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( !v126 )
      goto LABEL_254;
    NEXT_POS_X_QUEST = QuestBoardListViewItemDraw_TypeInfo->static_fields->NEXT_POS_X_QUEST;
    *(float *)&v126->fields.mMapCtrl_SpotRoadInfo = NEXT_POS_X_QUEST;
    *((float *)&v126->fields.mStateEndAct + 1) = NEXT_POS_X_QUEST;
  }
  if ( v114 != 2 )
  {
    if ( quest_info_k__BackingField->fields.isNew )
    {
      v128 = 1;
    }
    else
    {
      if ( !v273 )
        goto LABEL_110;
      v128 = 2;
    }
    QuestBoardListViewItemDraw__SetStatusActive(this, v128, 1, v117);
  }
LABEL_110:
  v129 = (UnityEngine_Component_o *)this->fields.mNextSp;
  if ( !v129 )
    goto LABEL_254;
  v130 = UnityEngine_Component__get_gameObject(v129, 0LL);
  if ( !v130 )
    goto LABEL_254;
  activeSelf = UnityEngine_GameObject__get_activeSelf(v130, 0LL);
  v133 = QuestBoardListViewItemDraw_TypeInfo;
  if ( activeSelf )
  {
    if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v133 = QuestBoardListViewItemDraw_TypeInfo;
    }
    static_fields = v133->static_fields;
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
      v133 = QuestBoardListViewItemDraw_TypeInfo;
    }
    static_fields = v133->static_fields;
    x = static_fields->NEW_POS_QUEST.fields.x;
    y = static_fields->NEW_POS_QUEST.fields.y;
    z = static_fields->NEW_POS_QUEST.fields.z;
  }
  QuestBoardListViewItemDraw__SetNewIcon(
    this,
    *(UnityEngine_Vector3_o *)&x,
    static_fields->NEW_W_DEFAULT,
    static_fields->NEW_H_DEFAULT,
    v132);
  StatusSp = QuestBoardListViewItemDraw__GetStatusSp(this, 2, v138);
  if ( !StatusSp )
    goto LABEL_254;
  v140 = StatusSp;
  v141 = UnityEngine_GameObject__get_activeSelf(StatusSp, 0LL);
  if ( v141 )
  {
    v143 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v143 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v140, v143->static_fields->CLEAR_POS_QUEST, 0LL);
  }
  v144 = v274;
  RecommendLv = QuestBoardListViewItemDraw__GetRecommendLv(
                  (QuestBoardListViewItemDraw_o *)v141,
                  PhaseDetailedEntity,
                  phase,
                  !v272,
                  v274 == 2,
                  v142);
  mTitleLevelRoot = this->fields.mTitleLevelRoot;
  v147 = RecommendLv;
  IsNullOrEmpty = System_String__IsNullOrEmpty(RecommendLv, 0LL);
  if ( !mTitleLevelRoot )
    goto LABEL_254;
  UnityEngine_GameObject__SetActive(mTitleLevelRoot, !IsNullOrEmpty, 0LL);
  v149 = this->fields.mTitleLevelRoot;
  if ( !v149 )
    goto LABEL_254;
  if ( UnityEngine_GameObject__get_activeSelf(v149, 0LL) )
  {
    mTitleLevelLb = this->fields.mTitleLevelLb;
    if ( !mTitleLevelLb )
      goto LABEL_254;
    UILabel__set_text(mTitleLevelLb, v147, 0LL);
    v152 = (UIWidget_o *)this->fields.mTitleLevelLb;
    if ( !v152 )
      goto LABEL_254;
    UIWidget__set_color(v152, *(UnityEngine_Color_o *)(v30 + 24), 0LL);
    mTitleLevelSp = (UIWidget_o *)this->fields.mTitleLevelSp;
    if ( !mTitleLevelSp )
      goto LABEL_254;
    UIWidget__set_color(mTitleLevelSp, *(UnityEngine_Color_o *)(v30 + 24), 0LL);
    mTitleLevelStrSp = (UIWidget_o *)this->fields.mTitleLevelStrSp;
    if ( !mTitleLevelStrSp )
      goto LABEL_254;
    UIWidget__set_color(mTitleLevelStrSp, *(UnityEngine_Color_o *)(v30 + 24), 0LL);
    v155 = (UnityEngine_Component_o *)this->fields.mTitleLevelSp;
    if ( !v155 )
      goto LABEL_254;
    v156 = UnityEngine_Component__get_gameObject(v155, 0LL);
    v157 = QuestBoardListViewItemDraw_TypeInfo;
    v158 = v156;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v157 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionX(v158, (float)v157->static_fields->TITLE_LEVEL_BASE_X, 0LL);
    v159 = (UnityEngine_Component_o *)this->fields.mTitleLevelSp;
    if ( !v159 )
      goto LABEL_254;
    v160 = UnityEngine_Component__get_gameObject(v159, 0LL);
    v161 = this->fields.mTitleLevelLb;
    if ( !v161 )
      goto LABEL_254;
    mWidth = v161->fields.mWidth;
    if ( mWidth <= 0 )
      v163 = -mWidth;
    else
      v163 = 1 - mWidth;
    GameObjectExtensions__AddLocalPositionX(v160, (float)(v163 >> 1), 0LL);
  }
  v164 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  v165 = this->fields.mLabelFaceMaskQuestSp;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v164 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  }
  mMatrixFrame = v164->fields.mTitleLevelSp[1].fields.mMatrixFrame;
  FaceMaskSpriteName = QuestBoardListViewItemDraw__GetFaceMaskSpriteName(v164, v43, v150);
  v169 = QuestBoardListViewItemDraw__SetFaceImage(
           this,
           PhaseDetailedEntity,
           v165,
           mMatrixFrame,
           FaceMaskSpriteName,
           *(UnityEngine_Color_o *)(v30 + 24),
           v168);
  mTitleNameLb = this->fields.mTitleNameLb;
  if ( v169 )
  {
    DispQuestName = QuestBoardListViewItemDraw__GetDispQuestName(this, PhaseDetailedEntity, v43, v170);
    if ( !mTitleNameLb )
      goto LABEL_254;
    UILabel__set_text(mTitleNameLb, DispQuestName, 0LL);
    goto LABEL_174;
  }
  QuestName = QuestEntity__getQuestName(PhaseDetailedEntity, 0LL);
  if ( !mTitleNameLb )
    goto LABEL_254;
  UILabel__set_text(mTitleNameLb, QuestName, 0LL);
  if ( v43 != 1
    || !(enabled = QuestBoardListViewItemDraw__IsMainWar(v176, quest_info_k__BackingField->fields.warId, v177)) )
  {
    boardIconTexture = (UnityEngine_Behaviour_o *)this->fields.boardIconTexture;
    if ( !boardIconTexture )
      goto LABEL_254;
    UnityEngine_Behaviour__set_enabled(boardIconTexture, 0, 0LL);
    v186 = (UnityEngine_Component_o *)this->fields.mLabelNameSp;
    if ( !v186 )
      goto LABEL_254;
    v187 = UnityEngine_Component__get_gameObject(v186, 0LL);
    if ( !v187 )
      goto LABEL_254;
    UnityEngine_GameObject__SetActive(v187, 1, 0LL);
    v188 = this->fields.mLabelNameSp;
    QuestIconName = QuestBoardListViewItemDraw__GetQuestIconName(v189, PhaseDetailedEntity, v43, v190);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    v192 = AtlasManager__SetEventUI(v188, QuestIconName, 0LL);
    if ( !v188 )
      goto LABEL_254;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v188, v192, 0LL);
    v193 = this->fields.mLabelNameSp;
    if ( !v193 )
      goto LABEL_254;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v193->klass->vtable._33_MakePixelPerfect.method)(
      v193,
      v193->klass->vtable._34_get_minWidth.methodPtr);
    v194 = (UnityEngine_Component_o *)this->fields.mLabelNameSp;
    if ( !v194 )
      goto LABEL_254;
    v195 = UnityEngine_Component__get_gameObject(v194, 0LL);
    if ( !v195 )
      goto LABEL_254;
    v196 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                           v195,
                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !v196 )
      goto LABEL_254;
    UIWidget__set_color(v196, *(UnityEngine_Color_o *)(v30 + 24), 0LL);
    v197 = (UnityEngine_Behaviour_o *)this->fields.mLabelNameSp;
    if ( !v197 )
      goto LABEL_254;
    enabled = UnityEngine_Behaviour__get_enabled(v197, 0LL);
    if ( !enabled )
    {
      *(_DWORD *)(v30 + 40) = PhaseDetailedEntity->fields.id;
      v201 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v198, v199, v174, v200);
      System_Action___ctor(
        v201,
        (Il2CppObject *)v30,
        Method_QuestBoardListViewItemDraw___c__DisplayClass301_0__SetItemOfWarBoard_b__0__,
        0LL);
      QuestBoardListViewItemDraw__LoadBoardIconTexture(this, PhaseDetailedEntity, v201, v202);
    }
LABEL_174:
    if ( v274 != 2 )
      goto LABEL_178;
    goto LABEL_175;
  }
  if ( v274 == 2 )
  {
LABEL_175:
    if ( quest_info_k__BackingField->fields.questReleaseClosedID >= 1 )
    {
      v203 = this->fields.mTitleNameLb;
      AdvanceNoticeText = QuestBoardListViewItemDraw__GetAdvanceNoticeText(
                            (QuestBoardListViewItemDraw_o *)enabled,
                            quest_info_k__BackingField,
                            PhaseDetailedEntity,
                            v174);
      if ( !v203 )
        goto LABEL_254;
      UILabel__set_text(v203, AdvanceNoticeText, 0LL);
    }
    goto LABEL_178;
  }
  mLabelSubSectionNumLb = (UnityEngine_Component_o *)this->fields.mLabelSubSectionNumLb;
  if ( !mLabelSubSectionNumLb )
    goto LABEL_254;
  v179 = UnityEngine_Component__get_gameObject(mLabelSubSectionNumLb, 0LL);
  if ( !v179 )
    goto LABEL_254;
  UnityEngine_GameObject__SetActive(v179, 0, 0LL);
  if ( PhaseDetailedEntity->fields.iconId <= 0
    && System_String__IsNullOrEmpty(PhaseDetailedEntity->fields.chapterSubStr, 0LL) )
  {
    v180 = this->fields.mLabelSubSectionNumLb;
    v182 = QuestEntity__HasFlag(PhaseDetailedEntity, 0x40000LL, 0LL);
    p_chapterSubId = (QuestBoardListViewItemDraw_o *)&PhaseDetailedEntity->fields.chapterSubId;
    if ( v182 )
      v184 = QuestBoardListViewItemDraw__ConvertToChineseAscii(p_chapterSubId, (int32_t)p_chapterSubId->klass, v181);
    else
      v184 = System_Int32__ToString((int32_t)p_chapterSubId, 0LL);
    if ( !v180 )
      goto LABEL_254;
    UILabel__set_text(v180, v184, 0LL);
    v260 = (UnityEngine_Component_o *)this->fields.mLabelSubSectionNumLb;
    if ( !v260 )
      goto LABEL_254;
    v261 = UnityEngine_Component__get_gameObject(v260, 0LL);
    if ( !v261 )
      goto LABEL_254;
    UnityEngine_GameObject__SetActive(v261, 1, 0LL);
  }
  v262 = (UnityEngine_Component_o *)this->fields.mLabelChapterSp;
  if ( !v262 )
    goto LABEL_254;
  v263 = UnityEngine_Component__get_gameObject(v262, 0LL);
  if ( !v263 )
    goto LABEL_254;
  UnityEngine_GameObject__SetActive(v263, 1, 0LL);
  v264 = this->fields.mLabelChapterSp;
  QuestIconNameForMainType = QuestBoardListViewItemDraw__GetQuestIconNameForMainType(v265, PhaseDetailedEntity, v266);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  v268 = AtlasManager__SetEventUI(v264, QuestIconNameForMainType, 0LL);
  if ( !v264
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v264, v268, 0LL),
        (v269 = this->fields.mLabelChapterSp) == 0LL) )
  {
LABEL_254:
    sub_B170D4();
  }
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v269->klass->vtable._33_MakePixelPerfect.method)(
    v269,
    v269->klass->vtable._34_get_minWidth.methodPtr);
LABEL_178:
  v205 = this->fields.mTitleNameLb;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  }
  if ( !v205 )
    goto LABEL_254;
  UILabel__SetCondensedScale(v205, QuestBoardListViewItemDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH, 0LL);
  v206 = (UIWidget_o *)this->fields.mTitleNameLb;
  if ( !v206 )
    goto LABEL_254;
  UIWidget__set_color(v206, *(UnityEngine_Color_o *)(v30 + 24), 0LL);
  QuestBoardListViewItemDraw__SetupRewardIconDisp(
    this,
    PhaseDetailedEntity,
    v274 == 2,
    *(UnityEngine_Color_o *)(v30 + 24),
    v207);
  v208 = quest_info_k__BackingField->fields.questId;
  afterClear = PhaseDetailedEntity->fields.afterClear;
  v210 = *(float *)(v30 + 24);
  v211 = *(float *)(v30 + 28);
  v212 = *(float *)(v30 + 32);
  v213 = *(float *)(v30 + 36);
  IsRepeatReward = QuestEntity__IsRepeatReward(PhaseDetailedEntity, 0LL);
  v283.fields.r = v210;
  v283.fields.g = v211;
  v283.fields.b = v212;
  v283.fields.a = v213;
  QuestBoardListViewItemDraw__SetupFirstRewardDisp(this, v208, afterClear, v283, IsRepeatReward, v215);
  QuestBoardListViewItemDraw__SetupRewardGotAndNotGiveDisp(
    this,
    quest_info_k__BackingField,
    entity,
    *(UnityEngine_Color_o *)(v30 + 24),
    v216);
  QuestBoardListViewItemDraw__ResetInfoTextList(this, v217);
  fixedVal = -1;
  costCalcVal = 0;
  mInfoTextList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields.mInfoTextList;
  CampaignText = (System_Collections_Generic_IEnumerable_T__o *)QuestBoardListViewItemDraw__GetCampaignText(
                                                                  this,
                                                                  PhaseDetailedEntity->fields.id,
                                                                  phase,
                                                                  !v273,
                                                                  &costCalcVal,
                                                                  &fixedVal,
                                                                  v219);
  if ( !mInfoTextList )
    goto LABEL_254;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    mInfoTextList,
    CampaignText,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
  mRarePrismSp = (UnityEngine_Component_o *)this->fields.mRarePrismSp;
  if ( !mRarePrismSp )
    goto LABEL_254;
  v222 = UnityEngine_Component__get_gameObject(mRarePrismSp, 0LL);
  if ( !v222 )
    goto LABEL_254;
  if ( UnityEngine_GameObject__get_activeSelf(v222, 0LL) )
  {
    if ( !entity )
      goto LABEL_254;
    if ( UserQuestEntity__IsExpireNoLimit(entity, 0LL) )
      goto LABEL_199;
    if ( !entity )
      goto LABEL_254;
    p_expireAt = &entity->fields.expireAt;
  }
  else
  {
    p_expireAt = &quest_info_k__BackingField->fields.endTime;
  }
  v224 = *p_expireAt;
  if ( *p_expireAt >= 1 && !QuestEntity__HasFlag(PhaseDetailedEntity, 32LL, 0LL) )
  {
    v225 = this->fields.mInfoTextList;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v226 = LocalizationManager__Get((System_String_o *)StringLiteral_13352, 0LL);
    v231 = (QuestBoardInformaionText_o *)sub_B170CC(QuestBoardInformaionText_TypeInfo, v227, v228, v229, v230);
    v284.fields.r = 0.0;
    v284.fields.g = 0.0;
    v284.fields.b = 0.0;
    v284.fields.a = 0.0;
    v282.fields.x = 0.0;
    v282.fields.y = 0.0;
    v282.fields.z = 0.0;
    v232 = (EventMissionProgressRequest_Argument_ProgressData_o *)v231;
    QuestBoardInformaionText___ctor(v231, v226, v224, 0, 0, v284, -1, 0, v282, 1, v270, 0LL, v271);
    if ( !v225 )
      goto LABEL_254;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v225,
      v232,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
    v144 = v274;
  }
LABEL_199:
  v233 = this->fields.mInfoTextList;
  if ( !v233 )
    goto LABEL_254;
  size = v233->fields._size;
  p_mOptionInfoLb = (UnityEngine_Component_o **)&this->fields.mOptionInfoLb;
  if ( size < 1 )
  {
    v243 = 0;
    goto LABEL_211;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_254;
  manager = (QuestBoardListViewManager_o *)mListViewObject->fields.manager;
  if ( !manager )
    goto LABEL_254;
  v238 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v238
    || (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[v238 - 1] != QuestBoardListViewManager_TypeInfo )
  {
    sub_B173C8(manager);
    goto LABEL_256;
  }
  AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt(manager, size, 0LL);
  if ( v233->fields._size <= (unsigned int)AlphaAnimCnt )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v241 = v233->fields._items->m_Items[AlphaAnimCnt];
  if ( !v241 )
    goto LABEL_254;
  QuestBoardInformaionText__SetTime(v241, &this->fields.mOptionInfoLb, &this->fields.mOptionInfoFrameSp, v239);
  v242 = this->fields.mOptionInfoLb;
  if ( !v242 )
    goto LABEL_254;
  BoardOptionTextWithIconComponent__set_Alpha(v242, 1.0, 0LL);
  v243 = 1;
  quest_info_k__BackingField->fields.costCalcVal = costCalcVal;
  quest_info_k__BackingField->fields._fixedCostVal_k__BackingField = fixedVal;
LABEL_211:
  if ( !*p_mOptionInfoLb )
    goto LABEL_254;
  v244 = UnityEngine_Component__get_transform(*p_mOptionInfoLb, 0LL);
  if ( !v244 )
    goto LABEL_254;
  v245 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v244, 0LL);
  if ( !v245 )
    goto LABEL_254;
  v246 = UnityEngine_Component__get_gameObject(v245, 0LL);
  if ( !v246 )
    goto LABEL_254;
  UnityEngine_GameObject__SetActive(v246, v243, 0LL);
  if ( !*p_mOptionInfoLb )
    goto LABEL_254;
  v247 = UnityEngine_Component__get_gameObject(*p_mOptionInfoLb, 0LL);
  if ( !v247 )
    goto LABEL_254;
  UnityEngine_GameObject__SetActive(v247, v243, 0LL);
  QuestBoardListViewItemDraw__SetCostDisp(
    this,
    PhaseDetailedEntity,
    v144 == 2,
    costCalcVal,
    fixedVal,
    *(UnityEngine_Color_o *)(v30 + 24),
    &isDoubleItemConsume,
    &isDoubleItemConsumeQp,
    &isTripleItemConsume,
    (const MethodInfo *)v270);
  v248 = this->fields.mBoardMessage;
  if ( !v248 )
    goto LABEL_254;
  UILabel__set_text(v248, (System_String_o *)StringLiteral_1, 0LL);
  v249 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v249 )
    goto LABEL_254;
  v250 = (WarBoardQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)v249,
                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarBoardQuestMaster___);
  if ( !v250 )
    goto LABEL_254;
  v251 = WarBoardQuestMaster__GetEntity(v250, quest_info_k__BackingField->fields.questId, phase, 0LL);
  if ( !v251 )
    return;
  v252 = v251;
  v253 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v253 )
    goto LABEL_254;
  v254 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)v253,
                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarBoardStageMaster___);
  if ( !v254 )
    goto LABEL_254;
  v255 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
           v254,
           v252->fields.stageId,
           (const MethodInfo_266F388 *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__);
  if ( v255 )
  {
    if ( !this->fields.mBoardMessage )
      goto LABEL_254;
    UILabel__set_text(this->fields.mBoardMessage, *(System_String_o **)&v255->fields.bannerId, 0LL);
  }
  v256 = this->fields.mBoardMessage;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  }
  if ( !v256 )
    goto LABEL_254;
  UILabel__SetCondensedScale(v256, QuestBoardListViewItemDraw_TypeInfo->static_fields->BOARD_MESSAGE_MAX_WITDH, 0LL);
  v257 = (UIWidget_o *)this->fields.mBoardMessage;
  if ( !v257 )
    goto LABEL_254;
  UIWidget__set_color(v257, *(UnityEngine_Color_o *)(v30 + 24), 0LL);
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
  sub_B16F98(
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
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_GameObject_o *StatusSp; // x0
  bool activeSelf; // w0
  UnityEngine_Component_o *mNewIcon; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x0
  UIWidget_o *Component_srcLineSprite; // x0
  UIWidget_o *v20; // x22
  UnityEngine_Component_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x0
  TimeSyncAlphaSwitcher_o *v23; // x19
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_40FC6FC & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___, *(_QWORD *)&w);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    byte_40FC6FC = 1;
  }
  StatusSp = QuestBoardListViewItemDraw__GetStatusSp(this, 1, *(const MethodInfo **)&h);
  if ( !StatusSp )
    goto LABEL_21;
  activeSelf = UnityEngine_GameObject__get_activeSelf(StatusSp, 0LL);
  if ( !this->fields.mNewIcon )
    goto LABEL_21;
  if ( activeSelf )
  {
    ShiningIconComponent__Set(this->fields.mNewIcon, 0LL);
    mNewIcon = (UnityEngine_Component_o *)this->fields.mNewIcon;
    if ( !mNewIcon )
      goto LABEL_21;
    gameObject = UnityEngine_Component__get_gameObject(mNewIcon, 0LL);
    v24.fields.x = x;
    v24.fields.y = y;
    v24.fields.z = z;
    GameObjectExtensions__SetLocalPosition(gameObject, v24, 0LL);
    v17 = (UnityEngine_Component_o *)this->fields.mNewIcon;
    if ( !v17 )
      goto LABEL_21;
    v18 = UnityEngine_Component__get_gameObject(v17, 0LL);
    if ( !v18 )
      goto LABEL_21;
    Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              v18,
                                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !Component_srcLineSprite )
      goto LABEL_21;
    v20 = Component_srcLineSprite;
    UIWidget__set_width(Component_srcLineSprite, w, 0LL);
    UIWidget__set_height(v20, h, 0LL);
  }
  else
  {
    ShiningIconComponent__Clear(this->fields.mNewIcon, 0LL);
  }
  v21 = (UnityEngine_Component_o *)this->fields.mNewIcon;
  if ( !v21 )
    goto LABEL_21;
  v22 = UnityEngine_Component__get_gameObject(v21, 0LL);
  if ( !v22 )
    goto LABEL_21;
  v23 = (TimeSyncAlphaSwitcher_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     v22,
                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v23, 0LL, 0LL) )
  {
    if ( v23 )
    {
      TimeSyncAlphaSwitcher__Clear(v23, 0LL);
      return;
    }
LABEL_21:
    sub_B170D4();
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
  UnityEngine_GameObject_o *gameObject; // x0
  UISprite_o *v10; // x21
  System_String_o *FREE_ICON_SPRITE_NAME; // x1
  UnityEngine_Component_o *v12; // x0
  UnityEngine_GameObject_o *v13; // x0
  srcLineSprite_o *Component_srcLineSprite; // x20
  QuestBoardListViewItemDraw_c *v15; // x0
  float NEXT_POS_X_AREA_L; // w8
  QuestBoardListViewItemDraw_c *v17; // x0
  QuestBoardListViewItemDraw_c *v18; // x0

  if ( (byte_40FC6FF & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, info);
    sub_B16FFC(&QuestBoardListViewItemDraw_TypeInfo, v7);
    byte_40FC6FF = 1;
  }
  mNextSp = (UnityEngine_Component_o *)this->fields.mNextSp;
  if ( !mNextSp )
    goto LABEL_41;
  gameObject = UnityEngine_Component__get_gameObject(mNextSp, 0LL);
  if ( !info || !gameObject )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive(gameObject, info->fields.isNext, 0LL);
  if ( !info->fields.isNext )
    return;
  if ( warEnt && WarEntity__HasFlag(warEnt, 0x200000, 0LL) )
  {
    v10 = this->fields.mNextSp;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    }
    if ( !v10 )
      goto LABEL_41;
    FREE_ICON_SPRITE_NAME = QuestBoardListViewItemDraw_TypeInfo->static_fields->FREE_ICON_SPRITE_NAME;
  }
  else
  {
    v10 = this->fields.mNextSp;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    }
    if ( !v10 )
      goto LABEL_41;
    FREE_ICON_SPRITE_NAME = QuestBoardListViewItemDraw_TypeInfo->static_fields->NEXT_ICON_SPRITE_NAME;
  }
  UISprite__set_spriteName(v10, FREE_ICON_SPRITE_NAME, 0LL);
  v12 = (UnityEngine_Component_o *)this->fields.mNextSp;
  if ( !v12 )
    goto LABEL_41;
  v13 = UnityEngine_Component__get_gameObject(v12, 0LL);
  if ( !v13 )
    goto LABEL_41;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              v13,
                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !warEnt )
    goto LABEL_34;
  if ( !WarEntity__HasFlag(warEnt, 0x400000, 0LL) )
  {
    if ( WarEntity__HasFlag(warEnt, 256, 0LL) )
    {
      if ( Component_srcLineSprite )
      {
        v17 = QuestBoardListViewItemDraw_TypeInfo;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v17 = QuestBoardListViewItemDraw_TypeInfo;
        }
        NEXT_POS_X_AREA_L = v17->static_fields->NEXT_POS_X_AREA_L;
        goto LABEL_39;
      }
LABEL_41:
      sub_B170D4();
    }
LABEL_34:
    if ( Component_srcLineSprite )
    {
      v18 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v18 = QuestBoardListViewItemDraw_TypeInfo;
      }
      NEXT_POS_X_AREA_L = v18->static_fields->NEXT_POS_X_AREA_R;
      goto LABEL_39;
    }
    goto LABEL_41;
  }
  if ( !Component_srcLineSprite )
    goto LABEL_41;
  v15 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v15 = QuestBoardListViewItemDraw_TypeInfo;
  }
  NEXT_POS_X_AREA_L = v15->static_fields->NEXT_POS_X_AREA_CENTER;
LABEL_39:
  *(float *)&Component_srcLineSprite->fields.mMapCtrl_SpotRoadInfo = NEXT_POS_X_AREA_L;
  *((float *)&Component_srcLineSprite->fields.mStateEndAct + 1) = NEXT_POS_X_AREA_L;
}


void __fastcall QuestBoardListViewItemDraw__SetPickupIcon(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  UnityEngine_GameObject_o *StatusSp; // x19
  UnityEngine_Object_o *Component_srcLineSprite; // x19

  if ( (byte_40FC6FD & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40FC6FD = 1;
  }
  StatusSp = QuestBoardListViewItemDraw__GetStatusSp(this, 4, v2);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)StatusSp, 0LL, 0LL) )
  {
    if ( StatusSp )
    {
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          StatusSp,
                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
        return;
      if ( Component_srcLineSprite )
      {
        TimeSyncAlphaSwitcher__Clear((TimeSyncAlphaSwitcher_o *)Component_srcLineSprite, 0LL);
        return;
      }
    }
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewItemDraw__SetPrevSprite(
        QuestBoardListViewItemDraw_o *this,
        QuestEntity_o *questEnt,
        UnityEngine_Vector3_o pos,
        const MethodInfo *method)
{
  __int64 v4; // x3
  __int64 v5; // x4
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
  WebViewManager_o *Instance; // x0
  QuestGroupMaster_o *MasterData_WarQuestSelectionMaster; // x0
  QuestGroupMaster_o *v24; // x22
  int32_t GroupId; // w0
  __int64 v26; // x1
  System_Collections_Generic_IEnumerable_TSource__o *QuestIdListByGroupId; // x0
  TerminalPramsManager_c *v28; // x0
  const MethodInfo *v29; // x2
  UnityEngine_GameObject_o *StatusSp; // x0
  UnityEngine_Component_o *mPrevSp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UISprite_o *v33; // x20
  QuestBoardListViewItemDraw_c *v34; // x0
  System_String_o *QUEST_BOARD_PREV_ICON_NAME; // x21
  UnityEngine_Component_o *v36; // x0
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_Component_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  struct UISprite_o *v40; // x0
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_40FC700 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, questEnt);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestGroupMaster___, v11);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_int___, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v16);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v17);
    sub_B16FFC(&QuestBoardListViewItemDraw_TypeInfo, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v20);
    byte_40FC700 = 1;
  }
  v21 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    questEnt,
                                                    method,
                                                    v4,
                                                    v5);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !questEnt )
    goto LABEL_38;
  v24 = MasterData_WarQuestSelectionMaster;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_38;
  GroupId = QuestGroupMaster__GetGroupId(MasterData_WarQuestSelectionMaster, questEnt->fields.id, 16, 0LL);
  if ( GroupId )
  {
    QuestIdListByGroupId = (System_Collections_Generic_IEnumerable_TSource__o *)QuestGroupMaster__GetQuestIdListByGroupId(
                                                                                  v24,
                                                                                  GroupId,
                                                                                  16,
                                                                                  0LL);
    if ( !QuestIdListByGroupId )
      goto LABEL_38;
    if ( QuestIdListByGroupId[1].monitor )
      v21 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                        QuestIdListByGroupId,
                                                        (const MethodInfo_19C78D8 *)Method_System_Linq_Enumerable_ToList_int___);
  }
  if ( !v21 )
LABEL_38:
    sub_B170D4();
  if ( v21->fields._size <= 0 )
    System_Collections_Generic_List_int___Add(
      v21,
      questEnt->fields.id,
      (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6E3C )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v26);
    byte_40F6E3C = 1;
  }
  v28 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v28 = TerminalPramsManager_TypeInfo;
  }
  if ( !System_Collections_Generic_List_int___Contains(
          v21,
          v28->static_fields->_LastPlayedQuestId_k__BackingField,
          (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
    goto LABEL_24;
  StatusSp = QuestBoardListViewItemDraw__GetStatusSp(this, 1, v29);
  if ( !StatusSp )
    goto LABEL_38;
  if ( UnityEngine_GameObject__get_activeSelf(StatusSp, 0LL) )
  {
LABEL_24:
    mPrevSp = (UnityEngine_Component_o *)this->fields.mPrevSp;
    if ( mPrevSp )
    {
      gameObject = UnityEngine_Component__get_gameObject(mPrevSp, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        return;
      }
    }
    goto LABEL_38;
  }
  v33 = this->fields.mPrevSp;
  v34 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v34 = QuestBoardListViewItemDraw_TypeInfo;
  }
  QUEST_BOARD_PREV_ICON_NAME = v34->static_fields->QUEST_BOARD_PREV_ICON_NAME;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(v33, QUEST_BOARD_PREV_ICON_NAME, 0LL);
  v36 = (UnityEngine_Component_o *)this->fields.mPrevSp;
  if ( !v36 )
    goto LABEL_38;
  v37 = UnityEngine_Component__get_gameObject(v36, 0LL);
  if ( !v37 )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive(v37, 1, 0LL);
  v38 = (UnityEngine_Component_o *)this->fields.mPrevSp;
  if ( !v38 )
    goto LABEL_38;
  v39 = UnityEngine_Component__get_gameObject(v38, 0LL);
  v41.fields.x = x;
  v41.fields.y = y;
  v41.fields.z = z;
  GameObjectExtensions__SetLocalPosition(v39, v41, 0LL);
  v40 = this->fields.mPrevSp;
  if ( !v40 )
    goto LABEL_38;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v40->klass->vtable._33_MakePixelPerfect.method)(
    v40,
    v40->klass->vtable._34_get_minWidth.methodPtr);
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
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *mOptionRestrinctionLb; // x0
  UILabel_o *v14; // x0
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  UILabel_o *v16; // x22
  WebViewManager_o *Instance; // x0
  QuestRestrictionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_o *RestrictionName; // x0
  struct UILabel_o *v20; // x8
  RestrictionBaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FC6EF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestRestrictionMaster___, *(_QWORD *)&questId);
    sub_B16FFC(&Method_DataManager_GetMaster_RestrictionBaseMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&StringLiteral_1, v10);
    byte_40FC6EF = 1;
  }
  entity = 0LL;
  mOptionRestrinctionSp = (UnityEngine_Component_o *)this->fields.mOptionRestrinctionSp;
  if ( !mOptionRestrinctionSp )
    goto LABEL_18;
  gameObject = UnityEngine_Component__get_gameObject(mOptionRestrinctionSp, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  mOptionRestrinctionLb = this->fields.mOptionRestrinctionLb;
  if ( !mOptionRestrinctionLb )
    goto LABEL_18;
  UILabel__set_maxLineCount(mOptionRestrinctionLb, 1, 0LL);
  v14 = this->fields.mOptionRestrinctionLb;
  if ( !v14 )
    goto LABEL_18;
  UILabel__set_text(v14, (System_String_o *)StringLiteral_1, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_RestrictionBaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_18;
  if ( RestrictionBaseMaster__TryGetEntity(
         (RestrictionBaseMaster_o *)Master_WarQuestSelectionMaster,
         &entity,
         questId,
         phase,
         0LL) )
  {
    goto LABEL_16;
  }
  v16 = this->fields.mOptionRestrinctionLb;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (QuestRestrictionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)Instance,
                                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestRestrictionMaster___)) == 0LL
    || (RestrictionName = QuestRestrictionMaster__GetRestrictionName(
                            MasterData_WarQuestSelectionMaster,
                            questId,
                            phase,
                            0LL),
        !v16) )
  {
LABEL_18:
    sub_B170D4();
  }
  UILabel__set_text(v16, RestrictionName, 0LL);
LABEL_16:
  v20 = this->fields.mOptionRestrinctionLb;
  if ( !v20 )
    goto LABEL_18;
  return !System_String__IsNullOrEmpty(v20->fields.mText, 0LL);
}


void __fastcall QuestBoardListViewItemDraw__SetRestrinctionLabelSpacingX(
        QuestBoardListViewItemDraw_o *this,
        int32_t spacingX,
        const MethodInfo *method)
{
  UILabel_o *mOptionRestrinctionLb; // x0
  UILabel_o *v5; // x0

  mOptionRestrinctionLb = this->fields.mOptionRestrinctionLb;
  if ( !mOptionRestrinctionLb
    || (UILabel__set_spacingX(mOptionRestrinctionLb, spacingX, 0LL), (v5 = this->fields.mOptionRestrinctionLb) == 0LL) )
  {
    sub_B170D4();
  }
  UILabel__ProcessText(v5, 0LL);
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
      sub_B170D4();
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
  UnityEngine_GameObject_o *gameObject; // x0

  StatusSp = QuestBoardListViewItemDraw__GetStatusSp(this, status, (const MethodInfo *)isActive);
  if ( !StatusSp || (gameObject = UnityEngine_GameObject__get_gameObject(StatusSp, 0LL)) == 0LL )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
}


void __fastcall QuestBoardListViewItemDraw__SetStatusToggle(
        QuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  UnityEngine_GameObject_o *StatusSp; // x0
  TimeSyncAlphaSwitcher_o *Component_srcLineSprite; // x19
  const MethodInfo *v7; // x2
  UnityEngine_GameObject_o *v8; // x0
  srcLineSprite_o *v9; // x0
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  TimeSyncAlphaSwitcher_o *v11; // x20
  float *manager; // x0
  __int64 v13; // x9
  float v14; // s8
  QuestBoardListViewItemDraw_o *v15; // x0
  MapControl_QuestInfo_o *v16; // x1
  QuestEntity_o *v17; // x2
  const MethodInfo *v18; // x3

  if ( (byte_40FC701 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___, method);
    sub_B16FFC(&QuestBoardListViewManager_TypeInfo, v4);
    byte_40FC701 = 1;
  }
  StatusSp = QuestBoardListViewItemDraw__GetStatusSp(this, 4, v2);
  if ( !StatusSp )
    goto LABEL_12;
  Component_srcLineSprite = (TimeSyncAlphaSwitcher_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         StatusSp,
                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
  v8 = QuestBoardListViewItemDraw__GetStatusSp(this, 1, v7);
  if ( !v8 )
    goto LABEL_12;
  v9 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
         v8,
         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_12;
  v11 = (TimeSyncAlphaSwitcher_o *)v9;
  manager = (float *)mListViewObject->fields.manager;
  if ( !manager )
    goto LABEL_12;
  v13 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)manager + 300LL) >= (unsigned int)v13
    && *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)manager + 200LL) + 8 * v13 - 8) == QuestBoardListViewManager_TypeInfo )
  {
    if ( Component_srcLineSprite )
    {
      v14 = manager[144];
      TimeSyncAlphaSwitcher__SetAlphaBlink(Component_srcLineSprite, 2, 0, v14, 0LL);
      if ( v11 )
      {
        TimeSyncAlphaSwitcher__SetAlphaBlink(v11, 2, 1, v14, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B170D4();
  }
  sub_B173C8(manager);
  QuestBoardListViewItemDraw__GetAdvanceNoticeText(v15, v16, v17, v18);
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
  int32_t v8; // w0
  UnityEngine_GameObject_o *mBannerRoot; // x8
  _BOOL8 activeSelf; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  struct TerminalBannerComponent_array *v13; // x8
  int max_length; // w25
  __int64 v15; // x26
  unsigned int v16; // w20
  unsigned int v17; // w9
  UnityEngine_Component_o *v18; // x21
  unsigned int v19; // w10
  TerminalBannerComponent_o *v20; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v22; // x0
  TerminalBannerComponent_o *v23; // x0
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x1
  UnityEngine_GameObject_o *mBannerArrowObj; // x0
  int32_t mBannerCount; // w20
  const MethodInfo *v28; // x3
  UnityEngine_Component_o *mBannerPointGrid; // x0
  UnityEngine_GameObject_o *v30; // x0
  struct UISprite_array *mBannerPointSps; // x8
  int v32; // w20
  int v33; // w21
  int32_t v34; // w22
  UnityEngine_Component_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_Component_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  const MethodInfo *v39; // x2
  struct UIGrid_o *v40; // x0

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
  if ( !mTerminalBanners )
    goto LABEL_44;
  v8 = UnityEngine_Mathf__Min_40727532(bannerEntList->max_length, mTerminalBanners->max_length, 0LL);
  mBannerRoot = this->fields.mBannerRoot;
  this->fields.mBannerCount = v8;
  if ( !mBannerRoot )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive(mBannerRoot, 1, 0LL);
  v13 = this->fields.mTerminalBanners;
  if ( !v13 )
    goto LABEL_44;
  max_length = v13->max_length;
  v15 = 4LL;
  while ( 1 )
  {
    v16 = v15 - 4;
    if ( (int)v15 - 4 >= max_length )
      break;
    v17 = v13->max_length;
    if ( v16 >= v17 )
      goto LABEL_45;
    v18 = (UnityEngine_Component_o *)*((_QWORD *)&v13->obj.klass + v15);
    v19 = v15 - 3;
    if ( (int)v15 - 3 >= this->fields.mBannerCount )
    {
      v20 = 0LL;
      if ( !v18 )
        goto LABEL_44;
    }
    else
    {
      if ( v19 >= v17 )
        goto LABEL_45;
      v20 = v13->m_Items[v19];
      if ( !v18 )
        goto LABEL_44;
    }
    gameObject = UnityEngine_Component__get_gameObject(v18, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, (int)v16 < this->fields.mBannerCount, 0LL);
      v22 = UnityEngine_Component__get_gameObject(v18, 0LL);
      if ( v22 )
      {
        activeSelf = UnityEngine_GameObject__get_activeSelf(v22, 0LL);
        if ( activeSelf )
        {
          if ( v16 >= bannerEntList->max_length )
            goto LABEL_45;
          TerminalBannerComponent__Setup(
            (TerminalBannerComponent_o *)v18,
            v16,
            *((BannerEntity_o **)&bannerEntList->obj.klass + v15),
            this->fields.mBannerCount,
            v20,
            0LL);
        }
        v13 = this->fields.mTerminalBanners;
        ++v15;
        if ( v13 )
          continue;
      }
    }
    goto LABEL_44;
  }
  if ( !v13->max_length )
  {
LABEL_45:
    sub_B17100(activeSelf, v11, v12);
    sub_B170A0();
  }
  v23 = v13->m_Items[0];
  if ( !v23 )
    goto LABEL_44;
  TerminalBannerComponent__StartLoadAndDisp(v23, 0LL);
  QuestBoardListViewItemDraw__ResetBannerAutoMoveTime(this, v24);
  QuestBoardListViewItemDraw__SetupEntryBanner(this, v25);
  AreaBoardInfo_k__BackingField->fields.bannerFocusIndex = 0;
  mBannerArrowObj = this->fields.mBannerArrowObj;
  this->fields.mIsEnableBannerAutoMoveOld = 0;
  if ( !mBannerArrowObj )
    goto LABEL_44;
  mBannerCount = this->fields.mBannerCount;
  UnityEngine_GameObject__SetActive(mBannerArrowObj, mBannerCount > 1, 0LL);
  if ( mBannerCount >= 2 )
  {
    QuestBoardListViewItemDraw__SetDispBannerArrows(this, 0, 1, v28);
    mBannerPointGrid = (UnityEngine_Component_o *)this->fields.mBannerPointGrid;
    if ( mBannerPointGrid )
    {
      v30 = UnityEngine_Component__get_gameObject(mBannerPointGrid, 0LL);
      if ( v30 )
      {
        UnityEngine_GameObject__SetActive(v30, 1, 0LL);
        mBannerPointSps = this->fields.mBannerPointSps;
        if ( mBannerPointSps )
        {
          v32 = mBannerPointSps->max_length;
          if ( v32 >= 1 )
          {
            v33 = 1;
            while ( 1 )
            {
              v34 = v33 - 1;
              if ( v33 - 1 >= mBannerPointSps->max_length )
                goto LABEL_45;
              v35 = (UnityEngine_Component_o *)mBannerPointSps->m_Items[v34];
              if ( v35 )
              {
                v36 = UnityEngine_Component__get_gameObject(v35, 0LL);
                if ( v36 )
                {
                  UnityEngine_GameObject__SetActive(v36, v34 < this->fields.mBannerCount, 0LL);
                  if ( v33 >= v32 )
                    break;
                  mBannerPointSps = this->fields.mBannerPointSps;
                  ++v33;
                  if ( mBannerPointSps )
                    continue;
                }
              }
              goto LABEL_44;
            }
          }
          v40 = this->fields.mBannerPointGrid;
          if ( v40 )
          {
            ((void (__fastcall *)(struct UIGrid_o *, Il2CppMethodPointer))v40->klass->vtable._8_Reposition.method)(
              v40,
              v40->klass->vtable._9_ResetPosition.methodPtr);
            goto LABEL_43;
          }
        }
      }
    }
LABEL_44:
    sub_B170D4();
  }
  v37 = (UnityEngine_Component_o *)this->fields.mBannerPointGrid;
  if ( !v37 )
    goto LABEL_44;
  v38 = UnityEngine_Component__get_gameObject(v37, 0LL);
  if ( !v38 )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive(v38, 0, 0LL);
LABEL_43:
  QuestBoardListViewItemDraw__UpdateDispBannerPoint(this, 0, v39);
}


void __fastcall QuestBoardListViewItemDraw__SetupCondtionChangeMessage(
        QuestBoardListViewItemDraw_o *this,
        QuestReleaseOverwriteEntity_o *questReleaseOverwriteEnt,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *mCondObject; // x0
  UILabel_o *mCondChangeMessage; // x0
  UILabel_o *v7; // x19

  if ( (byte_40FC6EC & 1) == 0 )
  {
    sub_B16FFC(&QuestBoardListViewItemDraw_TypeInfo, questReleaseOverwriteEnt);
    byte_40FC6EC = 1;
  }
  if ( questReleaseOverwriteEnt
    && !System_String__IsNullOrEmpty(questReleaseOverwriteEnt->fields.overlayClosedMessage, 0LL) )
  {
    mCondObject = this->fields.mCondObject;
    if ( !mCondObject )
      goto LABEL_13;
    UnityEngine_GameObject__SetActive(mCondObject, 1, 0LL);
    mCondChangeMessage = this->fields.mCondChangeMessage;
    if ( !mCondChangeMessage )
      goto LABEL_13;
    UILabel__set_text(mCondChangeMessage, questReleaseOverwriteEnt->fields.overlayClosedMessage, 0LL);
    v7 = this->fields.mCondChangeMessage;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    }
    if ( !v7 )
LABEL_13:
      sub_B170D4();
    UILabel__SetCondensedScale(v7, QuestBoardListViewItemDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH, 0LL);
  }
}


void __fastcall QuestBoardListViewItemDraw__SetupEntryBanner(
        QuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  QuestBoardListViewItemDraw_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct TerminalBannerComponent_array *mTerminalBanners; // x8
  UnityEngine_Component_o *v10; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v12; // x20
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_Object_o *v14; // x21
  __int64 v15; // x1
  TerminalPramsManager_c *v16; // x0
  QuestBoardListViewItemDraw_c *v17; // x0
  srcLineSprite_o *v18; // x0

  v3 = this;
  if ( (byte_40FC717 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v4);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&QuestBoardListViewItemDraw_TypeInfo, v7);
    this = (QuestBoardListViewItemDraw_o *)sub_B16FFC(&TerminalPramsManager_TypeInfo, v8);
    byte_40FC717 = 1;
  }
  mTerminalBanners = v3->fields.mTerminalBanners;
  if ( !mTerminalBanners )
    goto LABEL_43;
  if ( !mTerminalBanners->max_length )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  v10 = (UnityEngine_Component_o *)mTerminalBanners->m_Items[0];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v10, 0LL, 0LL) )
  {
    if ( v10 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v10, 0LL);
      if ( gameObject )
      {
        v12 = gameObject;
        Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            gameObject,
                                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
          UnityEngine_Object__Destroy_34809464(Component_srcLineSprite, 0LL);
        }
        v14 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        v12,
                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
        {
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__Destroy_34809464(v14, 0LL);
        }
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_40FC723 )
        {
          sub_B16FFC(&TerminalPramsManager_TypeInfo, v15);
          byte_40FC723 = 1;
        }
        v16 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v16 = TerminalPramsManager_TypeInfo;
        }
        if ( v16->static_fields->_IsPlayedEntryBanner_k__BackingField )
        {
          v3->fields._bannerState_k__BackingField = 2;
          return;
        }
        v3->fields._bannerState_k__BackingField = 1;
        v17 = QuestBoardListViewItemDraw_TypeInfo;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v17 = QuestBoardListViewItemDraw_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionX(v12, v17->static_fields->BANNER_ENTORY_START_POS_X, 0LL);
        v18 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                v12,
                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        if ( v18 )
        {
          ((void (__fastcall *)(srcLineSprite_o *, Il2CppClass *, float))v18->klass[1]._1.castClass)(
            v18,
            v18->klass[1]._1.declaringType,
            0.0);
          return;
        }
      }
    }
LABEL_43:
    sub_B170D4();
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
  __int64 v14; // x1
  clsQuestCheck_o *v15; // x0
  bool v16; // w21
  UnityEngine_Component_o *mRewardFirstSP; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *v19; // x0
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_40FC6F7 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, *(_QWORD *)&questId);
    sub_B16FFC(&SingletonTemplate_clsQuestCheck__TypeInfo, v14);
    byte_40FC6F7 = 1;
  }
  if ( afterClearType == 3 )
  {
    if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
    }
    v15 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !v15 )
LABEL_14:
      sub_B170D4();
    v16 = !clsQuestCheck__IsQuestClear(v15, questId, 0, 0LL);
  }
  else
  {
    v16 = 0;
  }
  mRewardFirstSP = (UnityEngine_Component_o *)this->fields.mRewardFirstSP;
  if ( !mRewardFirstSP )
    goto LABEL_14;
  gameObject = UnityEngine_Component__get_gameObject(mRewardFirstSP, 0LL);
  if ( !gameObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(gameObject, v16 && !isRepeatReward, 0LL);
  v19 = (UIWidget_o *)this->fields.mRewardFirstSP;
  if ( !v19 )
    goto LABEL_14;
  v20.fields.b = b;
  v20.fields.a = a;
  v20.fields.r = r;
  v20.fields.g = g;
  UIWidget__set_color(v19, v20, 0LL);
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
  bool IsQuestClear_25438860; // w0
  char v15; // w22
  UnityEngine_Component_o *mRewardGetSP; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *v18; // x0
  UnityEngine_Component_o *mRewardNotGetSP; // x0
  UnityEngine_GameObject_o *v20; // x0
  UIWidget_o *v21; // x0
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  v11 = this;
  if ( (byte_40FC6F8 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_B16FFC(&CondType_TypeInfo, questInfo);
    byte_40FC6F8 = 1;
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
  IsQuestClear_25438860 = CondType__IsQuestClear_25438860(questId, -1, 0, 0LL);
  v15 = 0;
  if ( IsQuestClear_25438860 )
  {
    if ( !userQuestEnt )
      goto LABEL_17;
    v15 = (IsDisplayRewardNotGive | UserQuestEntity__HasStatus(userQuestEnt, 4, 0LL)) ^ 1;
  }
  mRewardGetSP = (UnityEngine_Component_o *)v11->fields.mRewardGetSP;
  if ( !mRewardGetSP )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject(mRewardGetSP, 0LL);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, v15 & 1, 0LL);
  v18 = (UIWidget_o *)v11->fields.mRewardGetSP;
  if ( !v18 )
    goto LABEL_17;
  v22.fields.r = r;
  v22.fields.g = g;
  v22.fields.b = b;
  v22.fields.a = a;
  UIWidget__set_color(v18, v22, 0LL);
  mRewardNotGetSP = (UnityEngine_Component_o *)v11->fields.mRewardNotGetSP;
  if ( !mRewardNotGetSP
    || (v20 = UnityEngine_Component__get_gameObject(mRewardNotGetSP, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(v20, IsDisplayRewardNotGive, 0LL),
        (v21 = (UIWidget_o *)v11->fields.mRewardNotGetSP) == 0LL) )
  {
LABEL_17:
    sub_B170D4();
  }
  v23.fields.b = b;
  v23.fields.a = a;
  v23.fields.r = r;
  v23.fields.g = g;
  UIWidget__set_color(v21, v23, 0LL);
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  UnityEngine_Component_o *mRewardIcon; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  ItemIconComponent_o *v27; // x0
  int giftIconId; // w1
  UnityEngine_Component_o *v29; // x0
  UnityEngine_GameObject_o *mRewardObj; // x0
  bool v31; // w1
  UnityEngine_GameObject_o *v32; // x0
  UIWidget_o *Component_srcLineSprite; // x0
  ItemIconComponent_o *v34; // x0
  WebViewManager_o *Instance; // x0
  GiftMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  System_Collections_Generic_IEnumerable_TSource__o *GiftListById; // x21
  QuestBoardListViewItemDraw___c_c *v42; // x8
  struct QuestBoardListViewItemDraw___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__311_0; // x22
  Il2CppObject *v45; // x23
  struct QuestBoardListViewItemDraw___c_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  __int64 v61; // x1
  struct GiftEntity_array *v62; // x21
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  QuestBoardListViewManager_o *manager; // x0
  __int64 v65; // x10
  __int64 AlphaAnimCnt; // x0
  __int64 v67; // x1
  __int64 v68; // x2
  int32_t *v69; // x9
  int32_t v70; // w1
  ItemIconComponent_o *v71; // x0
  int v72; // w8
  int32_t v73; // w2
  int32_t v74; // w3
  UnityEngine_Component_o *v75; // x0
  UnityEngine_GameObject_o *v76; // x0
  UnityEngine_Color_o v77; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v78; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_40FC6F5 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_GiftMaster___, questEnt);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_GiftEntity___, v16);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_GiftEntity___, v17);
    sub_B16FFC(&Method_System_Func_GiftEntity__bool___ctor__, v18);
    sub_B16FFC(&System_Func_GiftEntity__bool__TypeInfo, v19);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v20);
    sub_B16FFC(&QuestBoardListViewManager_TypeInfo, v21);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B16FFC(&Method_QuestBoardListViewItemDraw___c__SetupRewardIconDisp_b__311_0__, v23);
    sub_B16FFC(&QuestBoardListViewItemDraw___c_TypeInfo, v24);
    byte_40FC6F5 = 1;
  }
  this->fields.mRewardIconInfs = 0LL;
  sub_B16F98(
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
  gameObject = UnityEngine_Component__get_gameObject(mRewardIcon, 0LL);
  if ( !gameObject )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  if ( isClosed )
  {
    if ( !questEnt )
      goto LABEL_57;
    if ( QuestEntity__HasFlag(questEnt, 4096LL, 0LL) )
    {
      v27 = this->fields.mRewardIcon;
      if ( !v27 )
        goto LABEL_57;
      giftIconId = 99;
      goto LABEL_13;
    }
  }
  else if ( !questEnt )
  {
    goto LABEL_57;
  }
  giftIconId = questEnt->fields.giftIconId;
  if ( giftIconId < 1 )
  {
    if ( questEnt->fields.giftId < 1 )
    {
      mRewardObj = this->fields.mRewardObj;
      if ( !mRewardObj )
        goto LABEL_57;
      v31 = 0;
      goto LABEL_16;
    }
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GiftMaster___);
      if ( MasterData_WarQuestSelectionMaster )
      {
        GiftListById = (System_Collections_Generic_IEnumerable_TSource__o *)GiftMaster__GetGiftListById(
                                                                              MasterData_WarQuestSelectionMaster,
                                                                              questEnt->fields.giftId,
                                                                              0LL);
        v42 = QuestBoardListViewItemDraw___c_TypeInfo;
        if ( (BYTE3(QuestBoardListViewItemDraw___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw___c_TypeInfo);
          v42 = QuestBoardListViewItemDraw___c_TypeInfo;
        }
        static_fields = v42->static_fields;
        _9__311_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__311_0;
        if ( !_9__311_0 )
        {
          if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v42);
            static_fields = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
          }
          v45 = (Il2CppObject *)static_fields->__9;
          _9__311_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                           System_Func_GiftEntity__bool__TypeInfo,
                                                                                           v37,
                                                                                           v38,
                                                                                           v39,
                                                                                           v40);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            _9__311_0,
            v45,
            Method_QuestBoardListViewItemDraw___c__SetupRewardIconDisp_b__311_0__,
            (const MethodInfo_2B6AB40 *)Method_System_Func_GiftEntity__bool___ctor__);
          v46 = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
          v46->__9__311_0 = (struct System_Func_GiftEntity__bool__o *)_9__311_0;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v46->__9__311_0,
            (System_Int32_array **)_9__311_0,
            v47,
            v48,
            v49,
            v50,
            v51,
            v52);
        }
        v53 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                GiftListById,
                (System_Func_TSource__bool__o *)_9__311_0,
                (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
        v54 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                v53,
                (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
        if ( v54 )
        {
          v61 = *(_QWORD *)&v54->max_length;
          v62 = (struct GiftEntity_array *)v54;
          if ( !v61 )
          {
LABEL_56:
            this->fields.mRewardIconInfs = v62;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields.mRewardIconInfs,
              (System_Int32_array **)v62,
              v55,
              v56,
              v57,
              v58,
              v59,
              v60);
            goto LABEL_17;
          }
          mListViewObject = this->fields.mListViewObject;
          if ( mListViewObject )
          {
            manager = (QuestBoardListViewManager_o *)mListViewObject->fields.manager;
            if ( manager )
            {
              v65 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
              if ( *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v65
                && (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[v65 - 1] == QuestBoardListViewManager_TypeInfo )
              {
                AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt(manager, v61, 0LL);
                if ( (unsigned int)AlphaAnimCnt < v62->max_length )
                {
                  v69 = (int32_t *)v62->m_Items[(int)AlphaAnimCnt];
                  if ( !v69 )
                    goto LABEL_57;
                  v70 = v69[11];
                  v71 = this->fields.mRewardIcon;
                  v72 = v69[7];
                  if ( v70 < 1 )
                  {
                    if ( !v71 )
                      goto LABEL_57;
                    if ( v72 <= 1 )
                      v74 = -1;
                    else
                      v74 = v69[7];
                    ItemIconComponent__SetGift(v71, v69[5], v69[6], v74, 1, 0LL);
                  }
                  else
                  {
                    if ( !v71 )
                      goto LABEL_57;
                    if ( v72 <= 1 )
                      v73 = -1;
                    else
                      v73 = v69[7];
                    ItemIconComponent__SetItemImage_28930192(v71, v70, v73, 0LL);
                  }
                  v75 = (UnityEngine_Component_o *)this->fields.mRewardIcon;
                  if ( v75 )
                  {
                    v76 = UnityEngine_Component__get_gameObject(v75, 0LL);
                    if ( v76 )
                    {
                      UnityEngine_GameObject__SetActive(v76, 1, 0LL);
                      goto LABEL_56;
                    }
                  }
                  goto LABEL_57;
                }
              }
              else
              {
                sub_B173C8(manager);
              }
              sub_B17100(AlphaAnimCnt, v67, v68);
              sub_B170A0();
            }
          }
        }
      }
    }
LABEL_57:
    sub_B170D4();
  }
  v27 = this->fields.mRewardIcon;
  if ( !v27 )
    goto LABEL_57;
LABEL_13:
  ItemIconComponent__SetItemImage(v27, giftIconId, 0LL);
  v29 = (UnityEngine_Component_o *)this->fields.mRewardIcon;
  if ( !v29 )
    goto LABEL_57;
  mRewardObj = UnityEngine_Component__get_gameObject(v29, 0LL);
  if ( !mRewardObj )
    goto LABEL_57;
  v31 = 1;
LABEL_16:
  UnityEngine_GameObject__SetActive(mRewardObj, v31, 0LL);
LABEL_17:
  v32 = this->fields.mRewardObj;
  if ( !v32 )
    goto LABEL_57;
  Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            v32,
                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Component_srcLineSprite )
    goto LABEL_57;
  v77.fields.r = r;
  v77.fields.g = g;
  v77.fields.b = b;
  v77.fields.a = a;
  UIWidget__set_color(Component_srcLineSprite, v77, 0LL);
  v34 = this->fields.mRewardIcon;
  if ( !v34 )
    goto LABEL_57;
  v78.fields.b = b;
  v78.fields.a = a;
  v78.fields.r = r;
  v78.fields.g = g;
  ItemIconComponent__SetColor(v34, v78, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardListViewItemDraw__StartEntryBanner(
        QuestBoardListViewItemDraw_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x19
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x1
  __int64 v28; // x2
  TerminalPramsManager_c *v29; // x0
  struct TerminalBannerComponent_array *mTerminalBanners; // x8
  UnityEngine_Object_o *v31; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v33; // x20
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v34; // x21
  int v35; // s0
  int v36; // s1
  int v37; // s2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  QuestBoardListViewItemDraw_c *v42; // x0
  float BANNER_ENTORY_EFFECT_DURATION; // w8
  EventDelegate_Callback_o *v44; // x22
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v45; // x0
  float v46; // w8

  if ( (byte_40FC718 & 1) == 0 )
  {
    sub_B16FFC(&EventDelegate_Callback_TypeInfo, endCallback);
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_TweenAlpha___, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&QuestBoardListViewItemDraw_TypeInfo, v10);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v11);
    sub_B16FFC(&Method_QuestBoardListViewItemDraw___c__DisplayClass361_0__StartEntryBanner_b__0__, v12);
    sub_B16FFC(&QuestBoardListViewItemDraw___c__DisplayClass361_0_TypeInfo, v13);
    byte_40FC718 = 1;
  }
  v14 = sub_B170CC(QuestBoardListViewItemDraw___c__DisplayClass361_0_TypeInfo, endCallback, method, v3, v4);
  QuestBoardListViewItemDraw___c__DisplayClass361_0___ctor(
    (QuestBoardListViewItemDraw___c__DisplayClass361_0_o *)v14,
    0LL);
  if ( !v14 )
    goto LABEL_28;
  *(_QWORD *)(v14 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v14 + 24) = endCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v14 + 24),
    (System_Int32_array **)endCallback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40FC723 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v27);
    byte_40FC723 = 1;
  }
  v29 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v29 = TerminalPramsManager_TypeInfo;
  }
  if ( v29->static_fields->_IsPlayedEntryBanner_k__BackingField )
    goto LABEL_19;
  mTerminalBanners = this->fields.mTerminalBanners;
  if ( !mTerminalBanners )
    goto LABEL_28;
  if ( !mTerminalBanners->max_length )
  {
    sub_B17100(v29, v27, v28);
    sub_B170A0();
  }
  v31 = (UnityEngine_Object_o *)mTerminalBanners->m_Items[0];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v31, 0LL, 0LL) )
  {
LABEL_19:
    ActionExtensions__Call(*(System_Action_o **)(v14 + 24), 0LL);
    return;
  }
  if ( !v31 )
    goto LABEL_28;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v31, 0LL);
  if ( !gameObject )
    goto LABEL_28;
  v33 = gameObject;
  v34 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
          gameObject,
          (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
  *(UnityEngine_Vector3_o *)&v35 = GameObjectExtensions__GetLocalPosition(v33, 0LL);
  if ( !v34 )
    goto LABEL_28;
  LODWORD(v34[3].fields.callbackQueue) = v35;
  HIDWORD(v34[3].fields.callbackQueue) = v36;
  LODWORD(v34[4].klass) = v37;
  *(UnityEngine_Vector3_o *)((char *)&v34[4].klass + 4) = UnityEngine_Vector3__get_zero(0LL);
  v42 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v42 = QuestBoardListViewItemDraw_TypeInfo;
  }
  BANNER_ENTORY_EFFECT_DURATION = v42->static_fields->BANNER_ENTORY_EFFECT_DURATION;
  LODWORD(v34->fields.callbackQueue) = 2;
  *(float *)&v34[1].fields.m_CachedPtr = BANNER_ENTORY_EFFECT_DURATION;
  v44 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v38, v39, v40, v41);
  EventDelegate_Callback___ctor(
    v44,
    (Il2CppObject *)v14,
    Method_QuestBoardListViewItemDraw___c__DisplayClass361_0__StartEntryBanner_b__0__,
    0LL);
  UITweener__SetOnFinished((UITweener_o *)v34, v44, 0LL);
  UITweener__PlayForward((UITweener_o *)v34, 0LL);
  v45 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
          v33,
          (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
  if ( !v45 )
LABEL_28:
    sub_B170D4();
  v45[3].fields.callbackQueue = (struct System_Collections_Generic_Queue_Tuple_SendOrPostCallback__object___o *)0x3F80000000000000LL;
  v46 = QuestBoardListViewItemDraw_TypeInfo->static_fields->BANNER_ENTORY_EFFECT_DURATION;
  LODWORD(v45->fields.callbackQueue) = 3;
  *(float *)&v45[1].fields.m_CachedPtr = v46;
  UITweener__PlayForward((UITweener_o *)v45, 0LL);
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
  QuestBoardListViewItemDraw_c *v8; // x0
  UISprite_o *v9; // x20
  System_String_o **p_BANNER_POINT_SPNAME_ON; // x8

  v4 = this;
  if ( (byte_40FC71A & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_B16FFC(&QuestBoardListViewItemDraw_TypeInfo, *(_QWORD *)&index);
    byte_40FC71A = 1;
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
        sub_B17100(this, *(_QWORD *)&index, method);
        sub_B170A0();
      }
      v8 = QuestBoardListViewItemDraw_TypeInfo;
      v9 = mBannerPointSps->m_Items[v5];
      if ( v6 == (_DWORD)v5 )
      {
        if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v8 = QuestBoardListViewItemDraw_TypeInfo;
        }
        p_BANNER_POINT_SPNAME_ON = &v8->static_fields->BANNER_POINT_SPNAME_ON;
        if ( !v9 )
          break;
      }
      else
      {
        if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v8 = QuestBoardListViewItemDraw_TypeInfo;
        }
        p_BANNER_POINT_SPNAME_ON = &v8->static_fields->BANNER_POINT_SPNAME_OFF;
        if ( !v9 )
          break;
      }
      UISprite__set_spriteName(v9, *p_BANNER_POINT_SPNAME_ON, 0LL);
      if ( (int)++v5 >= v4->fields.mBannerCount )
        return;
    }
    sub_B170D4();
  }
}


void __fastcall QuestBoardListViewItemDraw__UpdateInfoText(
        QuestBoardListViewItemDraw_o *this,
        QuestBoardListViewItem_o *questBoardItem,
        int32_t strIndex,
        int64_t checkTime,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x22
  QuestBoardInformaionText_o *v9; // x0

  if ( (byte_40FC6E5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__, questBoardItem);
    byte_40FC6E5 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  if ( !mInfoTextList )
    goto LABEL_8;
  if ( mInfoTextList->fields._size <= (unsigned int)strIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v9 = mInfoTextList->fields._items->m_Items[strIndex];
  if ( !v9 )
LABEL_8:
    sub_B170D4();
  QuestBoardInformaionText__Update(v9, &this->fields.mOptionInfoLb, &this->fields.mOptionInfoFrameSp, checkTime, method);
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
      sub_B170D4();
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
  UnityEngine_Camera_o *mUICamera; // x20
  UnityEngine_Vector2_o ScreenPosition_27640488; // kr00_8
  _BOOL4 mIsEnableDragX; // w8

  if ( (byte_40FC71D & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, questBoardManager);
    byte_40FC71D = 1;
  }
  if ( this->fields.mIsPressedForDragX )
  {
    this->fields.mTouchPosOld = this->fields.mTouchPosNow;
    if ( !questBoardManager )
      sub_B170D4();
    mUICamera = questBoardManager->fields.mUICamera;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    ScreenPosition_27640488 = CTouch__getScreenPosition_27640488(mUICamera, 0LL);
    mIsEnableDragX = this->fields.mIsEnableDragX;
    this->fields.mTouchPosNow = ScreenPosition_27640488;
    if ( mIsEnableDragX )
      this->fields.mTouchPosDif = ScreenPosition_27640488.fields.x - this->fields.mTouchPosOld.fields.x;
  }
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
    sub_B170D4();
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
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FA2ED & 1) == 0 )
  {
    sub_B16FFC(&QuestBoardListViewItemDraw___c_TypeInfo, v1);
    byte_40FA2ED = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(QuestBoardListViewItemDraw___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall QuestBoardListViewItemDraw___c___ctor(QuestBoardListViewItemDraw___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw___c___IsValidSupportSelection_b__339_0(
        QuestBoardListViewItemDraw___c_o *this,
        RestrictionEntity_o *rest,
        const MethodInfo *method)
{
  if ( !rest )
    sub_B170D4();
  return rest->fields.type == 9;
}


int32_t __fastcall QuestBoardListViewItemDraw___c___SetItemOfQuest_b__299_1(
        QuestBoardListViewItemDraw___c_o *this,
        ViewEnemyEntity_o *value,
        const MethodInfo *method)
{
  if ( !value )
    sub_B170D4();
  return value->fields.enemyId;
}


bool __fastcall QuestBoardListViewItemDraw___c___SetupRewardIconDisp_b__311_0(
        QuestBoardListViewItemDraw___c_o *this,
        GiftEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_B170D4();
  return ent->fields.type != 15;
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass297_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass297_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw___c__DisplayClass297_0___IsPurchasedByRarePrism_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass297_0_o *this,
        MapControl_QuestInfo_o *quest,
        const MethodInfo *method)
{
  struct MapControl_WarInfo_o *WarInfo_k__BackingField; // x8
  struct WarEntity_o *warEnt; // x9
  UserQuestMaster_o *userQuestMst; // x20
  int64_t UserId; // x0
  UserQuestEntity_o *EntityFromId; // x0

  if ( (byte_40FA2EE & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, quest);
    byte_40FA2EE = 1;
  }
  if ( !quest )
    goto LABEL_14;
  WarInfo_k__BackingField = quest->fields._WarInfo_k__BackingField;
  if ( !WarInfo_k__BackingField )
    goto LABEL_14;
  warEnt = this->fields.warEnt;
  if ( !warEnt )
    goto LABEL_14;
  if ( WarInfo_k__BackingField->fields.warId != warEnt->fields.id )
    return 0;
  userQuestMst = this->fields.userQuestMst;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !userQuestMst )
LABEL_14:
    sub_B170D4();
  EntityFromId = UserQuestMaster__getEntityFromId(userQuestMst, UserId, quest->fields.questId, 0LL);
  if ( EntityFromId )
    return UserQuestEntity__HasStatus(EntityFromId, 8, 0LL);
  return 0;
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass298_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass298_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw___c__DisplayClass298_0___HasNewQuestInWar_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass298_0_o *this,
        MapControl_QuestInfo_o *quest,
        const MethodInfo *method)
{
  QuestEntity_o *Mine; // x0
  struct MapControl_WarInfo_o *WarInfo_k__BackingField; // x8

  if ( this->fields.isMainInterlude )
  {
    if ( !quest || (Mine = MapControl_QuestInfo__GetMine(quest, 0LL)) == 0LL )
LABEL_11:
      sub_B170D4();
    if ( QuestEntity__HasFlag(Mine, 4LL, 0LL) )
      return 0;
  }
  else if ( !quest )
  {
    goto LABEL_11;
  }
  WarInfo_k__BackingField = quest->fields._WarInfo_k__BackingField;
  if ( !WarInfo_k__BackingField )
    goto LABEL_11;
  if ( WarInfo_k__BackingField->fields.warId == this->fields.warId )
    return quest->fields.isNew;
  return 0;
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass299_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass299_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass299_0___SetItemOfQuest_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass299_0_o *this,
        const MethodInfo *method)
{
  struct QuestBoardListViewItemDraw_o *_4__this; // x8
  UnityEngine_Behaviour_o *mLabelNameSp; // x0
  struct QuestBoardListViewItemDraw_o *v5; // x8
  UnityEngine_Behaviour_o *boardIconTexture; // x0
  struct QuestBoardListViewItemDraw_o *v7; // x8
  UIWidget_o *v8; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  mLabelNameSp = (UnityEngine_Behaviour_o *)_4__this->fields.mLabelNameSp;
  if ( !mLabelNameSp )
    goto LABEL_11;
  if ( !UnityEngine_Behaviour__get_enabled(mLabelNameSp, 0LL) )
  {
    v5 = this->fields.__4__this;
    if ( !v5 )
      goto LABEL_11;
    if ( v5->fields.boardIconQuestId == this->fields.boardIconQuestIdOld )
    {
      boardIconTexture = (UnityEngine_Behaviour_o *)v5->fields.boardIconTexture;
      if ( boardIconTexture )
      {
        UnityEngine_Behaviour__set_enabled(boardIconTexture, 1, 0LL);
        v7 = this->fields.__4__this;
        if ( v7 )
        {
          v8 = (UIWidget_o *)v7->fields.boardIconTexture;
          if ( v8 )
          {
            UIWidget__set_color(v8, this->fields.baseColor, 0LL);
            return;
          }
        }
      }
LABEL_11:
      sub_B170D4();
    }
  }
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass301_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass301_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass301_0___SetItemOfWarBoard_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass301_0_o *this,
        const MethodInfo *method)
{
  struct QuestBoardListViewItemDraw_o *_4__this; // x8
  UnityEngine_Behaviour_o *mLabelNameSp; // x0
  struct QuestBoardListViewItemDraw_o *v5; // x8
  UnityEngine_Behaviour_o *boardIconTexture; // x0
  struct QuestBoardListViewItemDraw_o *v7; // x8
  UIWidget_o *v8; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  mLabelNameSp = (UnityEngine_Behaviour_o *)_4__this->fields.mLabelNameSp;
  if ( !mLabelNameSp )
    goto LABEL_11;
  if ( !UnityEngine_Behaviour__get_enabled(mLabelNameSp, 0LL) )
  {
    v5 = this->fields.__4__this;
    if ( !v5 )
      goto LABEL_11;
    if ( v5->fields.boardIconQuestId == this->fields.boardIconQuestIdOld )
    {
      boardIconTexture = (UnityEngine_Behaviour_o *)v5->fields.boardIconTexture;
      if ( boardIconTexture )
      {
        UnityEngine_Behaviour__set_enabled(boardIconTexture, 1, 0LL);
        v7 = this->fields.__4__this;
        if ( v7 )
        {
          v8 = (UIWidget_o *)v7->fields.boardIconTexture;
          if ( v8 )
          {
            UIWidget__set_color(v8, this->fields.baseColor, 0LL);
            return;
          }
        }
      }
LABEL_11:
      sub_B170D4();
    }
  }
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass335_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass335_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw___c__DisplayClass335_0___GetCampaignTextListByEventQuestMaster_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass335_0_o *this,
        EventEntity_o *entity,
        const MethodInfo *method)
{
  struct EventCampaignEntity_o *eventCampaignEnt; // x8

  if ( !entity || (eventCampaignEnt = this->fields.eventCampaignEnt) == 0LL )
    sub_B170D4();
  return entity->fields.id == eventCampaignEnt->fields.eventId;
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass335_1___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass335_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw___c__DisplayClass335_1___GetCampaignTextListByEventQuestMaster_b__1(
        QuestBoardListViewItemDraw___c__DisplayClass335_1_o *this,
        EventEntity_o *entity,
        const MethodInfo *method)
{
  struct EventCampaignEntity_o *eventCampaignEnt; // x8

  if ( !entity || (eventCampaignEnt = this->fields.eventCampaignEnt) == 0LL )
    sub_B170D4();
  return entity->fields.id == eventCampaignEnt->fields.eventId;
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass337_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass337_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw___c__DisplayClass337_0___CreateQuestBoardInformationText_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass337_0_o *this,
        UserOwnItemInfo_o *x,
        const MethodInfo *method)
{
  const MethodInfo_2969008 *v3; // x3
  System_Nullable_long__o v7; // [xsp+0h] [xbp-30h] BYREF
  System_Nullable_long__o v8; // 0:x0.16

  if ( (byte_40FA2EF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Nullable_long___ctor__, x);
    byte_40FA2EF = 1;
  }
  *(_QWORD *)&v8.fields.has_value = this->fields.checkTime;
  v8.fields.value = (int64_t)&v7;
  v7.fields.value = 0LL;
  *(_QWORD *)&v7.fields.has_value = 0LL;
  System_Nullable_long____ctor(v8, Method_System_Nullable_long___ctor__, v3);
  if ( !x )
    sub_B170D4();
  return !UserOwnItemInfo__IsExpired(x, v7, 0LL);
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass361_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass361_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass361_0___StartEntryBanner_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass361_0_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct QuestBoardListViewItemDraw_o *_4__this; // x8

  if ( (byte_40FA2F0 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40FA2F0 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6E2A )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6E2A = 1;
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
    sub_B170D4();
  _4__this->fields._bannerState_k__BackingField = 2;
  ActionExtensions__Call(this->fields.endCallback, 0LL);
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass372_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass372_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass372_0___LoadBoardIconTexture_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass372_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct QuestBoardListViewItemDraw_o *_4__this; // x8
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  QuestBoardListViewItemDraw_c *v19; // x0
  System_String_o *v20; // x19
  struct QuestBoardListViewItemDraw_o *v21; // x8
  UnityEngine_Shader_o *v22; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  UnityEngine_Material_o *v27; // x20
  struct QuestBoardListViewItemDraw_o *v28; // x8
  struct UITexture_o *boardIconTexture; // x0
  struct QuestBoardListViewItemDraw_o *v30; // x8
  AssetData_o *boardIconAssetData; // x0
  UnityEngine_Texture_o *Object_WarBoardWaitTimeSetting; // x0
  struct QuestBoardListViewItemDraw_o *v33; // x8
  AssetData_o *v34; // x21
  System_String_o *v35; // x0
  UnityEngine_Texture_o *v36; // x0
  CommonUI_o *Instance; // x0

  if ( (byte_40FA2F1 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_Texture2D____66802808, assetData);
    sub_B16FFC(&AssetManager_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Material_TypeInfo, v6);
    sub_B16FFC(&QuestBoardListViewItemDraw_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&StringLiteral_16070, v9);
    sub_B16FFC(&StringLiteral_4519, v10);
    sub_B16FFC(&StringLiteral_15952, v11);
    byte_40FA2F1 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_22;
  if ( !System_String__op_Inequality(this->fields.loadBoardIconName, _4__this->fields.boardIconName, 0LL) )
  {
    v21 = this->fields.__4__this;
    if ( v21 )
    {
      v21->fields.boardIconAssetData = assetData;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v21->fields.boardIconAssetData,
        (System_Int32_array **)assetData,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
      v22 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4519, 0LL);
      v27 = (UnityEngine_Material_o *)sub_B170CC(UnityEngine_Material_TypeInfo, v23, v24, v25, v26);
      UnityEngine_Material___ctor(v27, v22, 0LL);
      v28 = this->fields.__4__this;
      if ( v28 )
      {
        boardIconTexture = v28->fields.boardIconTexture;
        if ( boardIconTexture )
        {
          ((void (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))boardIconTexture->klass->vtable._25_set_material.method)(
            boardIconTexture,
            v27,
            boardIconTexture->klass->vtable._26_get_mainTexture.methodPtr);
          v30 = this->fields.__4__this;
          if ( v30 )
          {
            boardIconAssetData = v30->fields.boardIconAssetData;
            if ( boardIconAssetData )
            {
              Object_WarBoardWaitTimeSetting = (UnityEngine_Texture_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                          boardIconAssetData,
                                                                          v30->fields.boardIconName,
                                                                          (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_Texture2D____66802808);
              if ( v27 )
              {
                UnityEngine_Material__set_mainTexture(v27, Object_WarBoardWaitTimeSetting, 0LL);
                v33 = this->fields.__4__this;
                if ( v33 )
                {
                  v34 = v33->fields.boardIconAssetData;
                  v35 = System_String__Concat_43743732(
                          v33->fields.boardIconName,
                          (System_String_o *)StringLiteral_16070,
                          0LL);
                  if ( v34 )
                  {
                    v36 = (UnityEngine_Texture_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                     v34,
                                                     v35,
                                                     (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_Texture2D____66802808);
                    UnityEngine_Material__SetTexture(v27, (System_String_o *)StringLiteral_15952, v36, 0LL);
                    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( Instance )
                    {
                      CommonUI__SetLoadMode(Instance, 0, 0LL);
                      ActionExtensions__Call(this->fields.callback, 0LL);
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
    sub_B170D4();
  }
  v19 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v19 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v20 = System_String__Concat_43743732(
          v19->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH,
          this->fields.loadBoardIconName,
          0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(v20, 0LL);
}