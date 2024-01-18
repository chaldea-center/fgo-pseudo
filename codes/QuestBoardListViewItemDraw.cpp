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
  __int64 v332; // x0
  __int64 v333; // x1
  System_String_array **v334; // x2
  System_String_array **v335; // x3
  System_Boolean_array **v336; // x4
  System_Int32_array **v337; // x5
  System_Int32_array *v338; // x6
  System_Int32_array *v339; // x7
  System_Int32_array **v340; // x19
  void *v341; // x0
  System_Int32_array **v342; // x1
  System_String_array **v343; // x2
  System_String_array **v344; // x3
  System_Boolean_array **v345; // x4
  System_Int32_array **v346; // x5
  System_Int32_array *v347; // x6
  System_Int32_array *v348; // x7
  System_Int32_array **v349; // x1
  BattleServantConfConponent_o *p_RP_SPNAME_FRAME; // x0
  System_String_array **v351; // x2
  System_String_array **v352; // x3
  System_Boolean_array **v353; // x4
  System_Int32_array **v354; // x5
  System_Int32_array *v355; // x6
  System_Int32_array *v356; // x7
  System_String_array **v357; // x2
  System_String_array **v358; // x3
  System_Boolean_array **v359; // x4
  System_Int32_array **v360; // x5
  System_Int32_array *v361; // x6
  System_Int32_array *v362; // x7
  System_Int32_array **v363; // x19
  System_Int32_array **v364; // x1
  System_String_array **v365; // x2
  System_String_array **v366; // x3
  System_Boolean_array **v367; // x4
  System_Int32_array **v368; // x5
  System_Int32_array *v369; // x6
  System_Int32_array *v370; // x7
  System_Int32_array **v371; // x1
  BattleServantConfConponent_o *p_RP_SPNAME_POINT; // x0
  System_String_array **v373; // x2
  System_String_array **v374; // x3
  System_Boolean_array **v375; // x4
  System_Int32_array **v376; // x5
  System_Int32_array *v377; // x6
  System_Int32_array *v378; // x7
  QuestBoardListViewItemDraw_c *v379; // x8
  struct QuestBoardListViewItemDraw_StaticFields *v380; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v381; // x9
  System_Int32_array **v382; // x1
  BattleServantConfConponent_o *p_QBOARD_CAP_CLOSED; // x0
  System_String_array **v384; // x2
  System_String_array **v385; // x3
  System_Boolean_array **v386; // x4
  System_Int32_array **v387; // x5
  System_Int32_array *v388; // x6
  System_Int32_array *v389; // x7
  System_Int32_array **v390; // x1
  BattleServantConfConponent_o *p_QBOARD_CAP_CLOSED_SPECIAL_FORMAT; // x0
  System_String_array **v392; // x2
  System_String_array **v393; // x3
  System_Boolean_array **v394; // x4
  System_Int32_array **v395; // x5
  System_Int32_array *v396; // x6
  System_Int32_array *v397; // x7
  System_Int32_array **v398; // x1
  BattleServantConfConponent_o *p_QBOARD_CAP_CLOSED_SPECIAL; // x0
  System_String_array **v400; // x2
  System_String_array **v401; // x3
  System_Boolean_array **v402; // x4
  System_Int32_array **v403; // x5
  System_Int32_array *v404; // x6
  System_Int32_array *v405; // x7
  System_Int32_array **v406; // x1
  BattleServantConfConponent_o *p_QBOARD_CAP_CLOSED_SPECIAL_2; // x0
  System_String_array **v408; // x2
  System_String_array **v409; // x3
  System_Boolean_array **v410; // x4
  System_Int32_array **v411; // x5
  System_Int32_array *v412; // x6
  System_Int32_array *v413; // x7
  System_Int32_array **v414; // x1
  BattleServantConfConponent_o *p_QBOARD_CAP_CLOSED_SPECIAL_3; // x0
  System_String_array **v416; // x2
  System_String_array **v417; // x3
  System_Boolean_array **v418; // x4
  System_Int32_array **v419; // x5
  System_Int32_array *v420; // x6
  System_Int32_array *v421; // x7
  System_String_array **v422; // x2
  System_String_array **v423; // x3
  System_Boolean_array **v424; // x4
  System_Int32_array **v425; // x5
  System_Int32_array *v426; // x6
  System_Int32_array *v427; // x7
  System_Int32_array **v428; // x19
  System_Int32_array **v429; // x1
  System_String_array **v430; // x2
  System_String_array **v431; // x3
  System_Boolean_array **v432; // x4
  System_Int32_array **v433; // x5
  System_Int32_array *v434; // x6
  System_Int32_array *v435; // x7
  System_Int32_array **v436; // x1
  System_String_array **v437; // x2
  System_String_array **v438; // x3
  System_Boolean_array **v439; // x4
  System_Int32_array **v440; // x5
  System_Int32_array *v441; // x6
  System_Int32_array *v442; // x7
  System_Int32_array **v443; // x1
  System_String_array **v444; // x2
  System_String_array **v445; // x3
  System_Boolean_array **v446; // x4
  System_Int32_array **v447; // x5
  System_Int32_array *v448; // x6
  System_Int32_array *v449; // x7
  System_Int32_array **v450; // x1
  System_String_array **v451; // x2
  System_String_array **v452; // x3
  System_Boolean_array **v453; // x4
  System_Int32_array **v454; // x5
  System_Int32_array *v455; // x6
  System_Int32_array *v456; // x7
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
  BattleServantConfConponent_o *p_msQBoardL1Names; // x0
  System_String_array **v473; // x2
  System_String_array **v474; // x3
  System_Boolean_array **v475; // x4
  System_Int32_array **v476; // x5
  System_Int32_array *v477; // x6
  System_Int32_array *v478; // x7
  System_Int32_array **v479; // x1
  BattleServantConfConponent_o *p_msQBoardL2Name_Story; // x0
  System_String_array **v481; // x2
  System_String_array **v482; // x3
  System_Boolean_array **v483; // x4
  System_Int32_array **v484; // x5
  System_Int32_array *v485; // x6
  System_Int32_array *v486; // x7
  System_Int32_array **v487; // x1
  BattleServantConfConponent_o *p_msQBoardL2Name_Hero; // x0
  System_String_array **v489; // x2
  System_String_array **v490; // x3
  System_Boolean_array **v491; // x4
  System_Int32_array **v492; // x5
  System_Int32_array *v493; // x6
  System_Int32_array *v494; // x7
  System_String_array **v495; // x2
  System_String_array **v496; // x3
  System_Boolean_array **v497; // x4
  System_Int32_array **v498; // x5
  System_Int32_array *v499; // x6
  System_Int32_array *v500; // x7
  System_Int32_array **v501; // x19
  System_Int32_array **v502; // x1
  System_String_array **v503; // x2
  System_String_array **v504; // x3
  System_Boolean_array **v505; // x4
  System_Int32_array **v506; // x5
  System_Int32_array *v507; // x6
  System_Int32_array *v508; // x7
  System_Int32_array **v509; // x1
  System_String_array **v510; // x2
  System_String_array **v511; // x3
  System_Boolean_array **v512; // x4
  System_Int32_array **v513; // x5
  System_Int32_array *v514; // x6
  System_Int32_array *v515; // x7
  System_Int32_array **v516; // x1
  System_String_array **v517; // x2
  System_String_array **v518; // x3
  System_Boolean_array **v519; // x4
  System_Int32_array **v520; // x5
  System_Int32_array *v521; // x6
  System_Int32_array *v522; // x7
  System_Int32_array **v523; // x1
  System_String_array **v524; // x2
  System_String_array **v525; // x3
  System_Boolean_array **v526; // x4
  System_Int32_array **v527; // x5
  System_Int32_array *v528; // x6
  System_Int32_array *v529; // x7
  System_Int32_array **v530; // x1
  System_String_array **v531; // x2
  System_String_array **v532; // x3
  System_Boolean_array **v533; // x4
  System_Int32_array **v534; // x5
  System_Int32_array *v535; // x6
  System_Int32_array *v536; // x7
  System_Int32_array **v537; // x1
  System_String_array **v538; // x2
  System_String_array **v539; // x3
  System_Boolean_array **v540; // x4
  System_Int32_array **v541; // x5
  System_Int32_array *v542; // x6
  System_Int32_array *v543; // x7
  System_Int32_array **v544; // x1
  BattleServantConfConponent_o *p_msQBoardL3Names; // x0
  System_String_array **v546; // x2
  System_String_array **v547; // x3
  System_Boolean_array **v548; // x4
  System_Int32_array **v549; // x5
  System_Int32_array *v550; // x6
  System_Int32_array *v551; // x7
  System_String_array **v552; // x2
  System_String_array **v553; // x3
  System_Boolean_array **v554; // x4
  System_Int32_array **v555; // x5
  System_Int32_array *v556; // x6
  System_Int32_array *v557; // x7
  System_Int32_array **v558; // x19
  System_Int32_array **v559; // x1
  System_String_array **v560; // x2
  System_String_array **v561; // x3
  System_Boolean_array **v562; // x4
  System_Int32_array **v563; // x5
  System_Int32_array *v564; // x6
  System_Int32_array *v565; // x7
  System_Int32_array **v566; // x1
  System_String_array **v567; // x2
  System_String_array **v568; // x3
  System_Boolean_array **v569; // x4
  System_Int32_array **v570; // x5
  System_Int32_array *v571; // x6
  System_Int32_array *v572; // x7
  System_Int32_array **v573; // x1
  System_String_array **v574; // x2
  System_String_array **v575; // x3
  System_Boolean_array **v576; // x4
  System_Int32_array **v577; // x5
  System_Int32_array *v578; // x6
  System_Int32_array *v579; // x7
  System_Int32_array **v580; // x1
  System_String_array **v581; // x2
  System_String_array **v582; // x3
  System_Boolean_array **v583; // x4
  System_Int32_array **v584; // x5
  System_Int32_array *v585; // x6
  System_Int32_array *v586; // x7
  System_Int32_array **v587; // x1
  System_String_array **v588; // x2
  System_String_array **v589; // x3
  System_Boolean_array **v590; // x4
  System_Int32_array **v591; // x5
  System_Int32_array *v592; // x6
  System_Int32_array *v593; // x7
  System_Int32_array **v594; // x1
  System_String_array **v595; // x2
  System_String_array **v596; // x3
  System_Boolean_array **v597; // x4
  System_Int32_array **v598; // x5
  System_Int32_array *v599; // x6
  System_Int32_array *v600; // x7
  System_Int32_array **v601; // x1
  BattleServantConfConponent_o *p_msLabelMainSprNames; // x0
  System_String_array **v603; // x2
  System_String_array **v604; // x3
  System_Boolean_array **v605; // x4
  System_Int32_array **v606; // x5
  System_Int32_array *v607; // x6
  System_Int32_array *v608; // x7
  System_String_array **v609; // x2
  System_String_array **v610; // x3
  System_Boolean_array **v611; // x4
  System_Int32_array **v612; // x5
  System_Int32_array *v613; // x6
  System_Int32_array *v614; // x7
  System_Int32_array **v615; // x19
  System_Int32_array **v616; // x1
  System_String_array **v617; // x2
  System_String_array **v618; // x3
  System_Boolean_array **v619; // x4
  System_Int32_array **v620; // x5
  System_Int32_array *v621; // x6
  System_Int32_array *v622; // x7
  System_Int32_array **v623; // x1
  System_String_array **v624; // x2
  System_String_array **v625; // x3
  System_Boolean_array **v626; // x4
  System_Int32_array **v627; // x5
  System_Int32_array *v628; // x6
  System_Int32_array *v629; // x7
  System_Int32_array **v630; // x1
  System_String_array **v631; // x2
  System_String_array **v632; // x3
  System_Boolean_array **v633; // x4
  System_Int32_array **v634; // x5
  System_Int32_array *v635; // x6
  System_Int32_array *v636; // x7
  System_Int32_array **v637; // x1
  System_String_array **v638; // x2
  System_String_array **v639; // x3
  System_Boolean_array **v640; // x4
  System_Int32_array **v641; // x5
  System_Int32_array *v642; // x6
  System_Int32_array *v643; // x7
  System_Int32_array **v644; // x1
  System_String_array **v645; // x2
  System_String_array **v646; // x3
  System_Boolean_array **v647; // x4
  System_Int32_array **v648; // x5
  System_Int32_array *v649; // x6
  System_Int32_array *v650; // x7
  System_Int32_array **v651; // x1
  System_String_array **v652; // x2
  System_String_array **v653; // x3
  System_Boolean_array **v654; // x4
  System_Int32_array **v655; // x5
  System_Int32_array *v656; // x6
  System_Int32_array *v657; // x7
  System_Int32_array **v658; // x1
  System_String_array **v659; // x2
  System_String_array **v660; // x3
  System_Boolean_array **v661; // x4
  System_Int32_array **v662; // x5
  System_Int32_array *v663; // x6
  System_Int32_array *v664; // x7
  System_Int32_array **v665; // x1
  BattleServantConfConponent_o *p_QuestBoardApSpNames; // x0
  System_String_array **v667; // x2
  System_String_array **v668; // x3
  System_Boolean_array **v669; // x4
  System_Int32_array **v670; // x5
  System_Int32_array *v671; // x6
  System_Int32_array *v672; // x7
  System_Int32_array **v673; // x1
  BattleServantConfConponent_o *p_msPhaseSprName_ArrowOff; // x0
  System_String_array **v675; // x2
  System_String_array **v676; // x3
  System_Boolean_array **v677; // x4
  System_Int32_array **v678; // x5
  System_Int32_array *v679; // x6
  System_Int32_array *v680; // x7
  System_Int32_array **v681; // x1
  BattleServantConfConponent_o *p_msPhaseSprName_ArrowOn; // x0
  System_String_array **v683; // x2
  System_String_array **v684; // x3
  System_Boolean_array **v685; // x4
  System_Int32_array **v686; // x5
  System_Int32_array *v687; // x6
  System_Int32_array *v688; // x7
  System_Int32_array **v689; // x1
  BattleServantConfConponent_o *p_msPhaseSprName_ExArrowOff; // x0
  System_String_array **v691; // x2
  System_String_array **v692; // x3
  System_Boolean_array **v693; // x4
  System_Int32_array **v694; // x5
  System_Int32_array *v695; // x6
  System_Int32_array *v696; // x7
  System_Int32_array **v697; // x1
  BattleServantConfConponent_o *p_msPhaseSprName_ExArrowOn; // x0
  System_String_array **v699; // x2
  System_String_array **v700; // x3
  System_Boolean_array **v701; // x4
  System_Int32_array **v702; // x5
  System_Int32_array *v703; // x6
  System_Int32_array *v704; // x7
  System_Int32_array **v705; // x1
  BattleServantConfConponent_o *p_msPhaseSprName_LoopOff; // x0
  System_String_array **v707; // x2
  System_String_array **v708; // x3
  System_Boolean_array **v709; // x4
  System_Int32_array **v710; // x5
  System_Int32_array *v711; // x6
  System_Int32_array *v712; // x7
  System_Int32_array **v713; // x1
  BattleServantConfConponent_o *p_msPhaseSprName_LoopOn; // x0
  System_String_array **v715; // x2
  System_String_array **v716; // x3
  System_Boolean_array **v717; // x4
  System_Int32_array **v718; // x5
  System_Int32_array *v719; // x6
  System_Int32_array *v720; // x7
  System_Int32_array **v721; // x1
  BattleServantConfConponent_o *p_msPhaseSprName_LoopFirstOff; // x0
  System_String_array **v723; // x2
  System_String_array **v724; // x3
  System_Boolean_array **v725; // x4
  System_Int32_array **v726; // x5
  System_Int32_array *v727; // x6
  System_Int32_array *v728; // x7
  System_Int32_array **v729; // x1
  BattleServantConfConponent_o *p_CHAPTER_SP_BASE_NAME; // x0
  System_String_array **v731; // x2
  System_String_array **v732; // x3
  System_Boolean_array **v733; // x4
  System_Int32_array **v734; // x5
  System_Int32_array *v735; // x6
  System_Int32_array *v736; // x7
  System_Int32_array **v737; // x1
  BattleServantConfConponent_o *p_CHAPTER_SP_UNIT_NAME; // x0
  System_String_array **v739; // x2
  System_String_array **v740; // x3
  System_Boolean_array **v741; // x4
  System_Int32_array **v742; // x5
  System_Int32_array *v743; // x6
  System_Int32_array *v744; // x7
  System_Int32_array **v745; // x1
  BattleServantConfConponent_o *p_PRE_BATTLE_ORGANIZATION; // x0
  System_String_array **v747; // x2
  System_String_array **v748; // x3
  System_Boolean_array **v749; // x4
  System_Int32_array **v750; // x5
  System_Int32_array *v751; // x6
  System_Int32_array *v752; // x7
  __int64 v753; // x0
  __int64 v754; // x0
  struct UnityEngine_Color_o v755; // [xsp+0h] [xbp-50h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-40h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v758; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v760; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_418A2C0 & 1) == 0 )
  {
    sub_B2C35C(&QuestBoardListViewItemDraw_TypeInfo, v1);
    sub_B2C35C(&string___TypeInfo, v6);
    sub_B2C35C(&StringLiteral_21619/*"quest_board_icon_"*/, v7);
    sub_B2C35C(&StringLiteral_21630/*"questboard_cap_closed"*/, v8);
    sub_B2C35C(&StringLiteral_19631/*"img_slider_on"*/, v9);
    sub_B2C35C(&StringLiteral_19524/*"img_loop_off"*/, v10);
    sub_B2C35C(&StringLiteral_19582/*"img_questboard_story01"*/, v11);
    sub_B2C35C(&StringLiteral_21640/*"questboard_shohi_bg_01"*/, v12);
    sub_B2C35C(&StringLiteral_21627/*"questboard_ap_free"*/, v13);
    sub_B2C35C(&StringLiteral_21638/*"questboard_icon_cap{0:D2}"*/, v14);
    sub_B2C35C(&StringLiteral_19586/*"img_questboard_story03mask"*/, v15);
    sub_B2C35C(&StringLiteral_19565/*"img_quest_spend"*/, v16);
    sub_B2C35C(&StringLiteral_19570/*"img_questarrow_off"*/, v17);
    sub_B2C35C(&StringLiteral_17266/*"chaldea_category_{0}"*/, v18);
    sub_B2C35C(&StringLiteral_19584/*"img_questboard_story02mask"*/, v19);
    sub_B2C35C(&StringLiteral_19571/*"img_questarrow_on"*/, v20);
    sub_B2C35C(&StringLiteral_19581/*"img_questboard_main_"*/, v21);
    sub_B2C35C(&StringLiteral_19564/*"img_quest_pre_organization"*/, v22);
    sub_B2C35C(&StringLiteral_18619/*"event_war_"*/, v23);
    sub_B2C35C(&StringLiteral_21628/*"questboard_ap_main"*/, v24);
    sub_B2C35C(&StringLiteral_19588/*"img_questboard_story05mask"*/, v25);
    sub_B2C35C(&StringLiteral_21641/*"questboard_shohi_bg_02"*/, v26);
    sub_B2C35C(&StringLiteral_19579/*"img_questboard_hero03"*/, v27);
    sub_B2C35C(&StringLiteral_21633/*"questboard_cap_closed_special_3"*/, v28);
    sub_B2C35C(&StringLiteral_19580/*"img_questboard_knockdown"*/, v29);
    sub_B2C35C(&StringLiteral_21690/*"raid_point_old"*/, v30);
    sub_B2C35C(&StringLiteral_21687/*"raid_point"*/, v31);
    sub_B2C35C(&StringLiteral_21632/*"questboard_cap_closed_special_2"*/, v32);
    sub_B2C35C(&StringLiteral_19578/*"img_questboard_hero02"*/, v33);
    sub_B2C35C(&StringLiteral_19370/*"icon_spot_next"*/, v34);
    sub_B2C35C(&StringLiteral_21618/*"quest_board_"*/, v35);
    sub_B2C35C(&StringLiteral_21639/*"questboard_shohi_"*/, v36);
    sub_B2C35C(&StringLiteral_21688/*"raid_point_frame"*/, v37);
    sub_B2C35C(&StringLiteral_19576/*"img_questboard_free_"*/, v38);
    sub_B2C35C(&StringLiteral_21689/*"raid_point_frame_old"*/, v39);
    sub_B2C35C(&StringLiteral_19574/*"img_questboard_damage"*/, v40);
    sub_B2C35C(&StringLiteral_17172/*"caldeagate_notice_{0:00}"*/, v41);
    sub_B2C35C(&StringLiteral_21620/*"quest_board_mask_"*/, v42);
    sub_B2C35C(&StringLiteral_6209/*"EventUI/QuestBoardIcon/"*/, v43);
    sub_B2C35C(&StringLiteral_19575/*"img_questboard_event{0:D3}"*/, v44);
    sub_B2C35C(&StringLiteral_19587/*"img_questboard_story04mask"*/, v45);
    sub_B2C35C(&StringLiteral_19590/*"img_questloop_on"*/, v46);
    sub_B2C35C(&StringLiteral_19589/*"img_questloop_off"*/, v47);
    sub_B2C35C(&StringLiteral_19593/*"img_questtxt_free"*/, v48);
    sub_B2C35C(&StringLiteral_21635/*"questboard_cap{0:D3}"*/, v49);
    sub_B2C35C(&StringLiteral_19585/*"img_questboard_story03"*/, v50);
    sub_B2C35C(&StringLiteral_19572/*"img_questboard_"*/, v51);
    sub_B2C35C(&StringLiteral_19567/*"img_quest_unit_{0:D2}"*/, v52);
    sub_B2C35C(&StringLiteral_21631/*"questboard_cap_closed_special"*/, v53);
    sub_B2C35C(&StringLiteral_19592/*"img_questtxt_event"*/, v54);
    sub_B2C35C(&StringLiteral_19577/*"img_questboard_hero01"*/, v55);
    sub_B2C35C(&StringLiteral_19568/*"img_questarrow1_off"*/, v56);
    sub_B2C35C(&StringLiteral_21629/*"questboard_ap_story"*/, v57);
    sub_B2C35C(&StringLiteral_19630/*"img_slider_off"*/, v58);
    sub_B2C35C(&StringLiteral_1/*""*/, v59);
    sub_B2C35C(&StringLiteral_19566/*"img_quest_spend2"*/, v60);
    sub_B2C35C(&StringLiteral_19563/*"img_quest_lasttime"*/, v61);
    sub_B2C35C(&StringLiteral_19569/*"img_questarrow1_on"*/, v62);
    sub_B2C35C(&StringLiteral_19583/*"img_questboard_story02"*/, v63);
    sub_B2C35C(&StringLiteral_21660/*"qyestboard_ap_free"*/, v64);
    sub_B2C35C(&StringLiteral_19369/*"icon_spot_free"*/, v65);
    sub_B2C35C(&StringLiteral_21626/*"questboard_ap_"*/, v66);
    sub_B2C35C(&StringLiteral_21634/*"questboard_cap_closed_{0}"*/, v67);
    byte_418A2C0 = 1;
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
  v69->static_fields->PHASE_NORMAL_MAX = 7;
  v69->static_fields->PHASE_EXTRA_MAX = 9;
  v69->static_fields->TITLE_LABEL_BASE_WIDTH = 256;
  v70 = 1061274050;
  v71 = 1047589105;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Color___ctor_40633184(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, &methoda);
  v760.fields.g = 0.0;
  v760.fields.b = 0.0;
  QuestBoardListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_COST_COLOR = *(struct UnityEngine_Color_o *)&methoda.methodPointer;
  v760.fields.r = 0.90196;
  v755 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor_40633184(v760, v72, v73, v74, (const MethodInfo *)&v755);
  v75 = QuestBoardListViewItemDraw_TypeInfo;
  QuestBoardListViewItemDraw_TypeInfo->static_fields->OVER_COST_COLOR = v755;
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
  v83 = (System_Int32_array **)StringLiteral_19370/*"icon_spot_next"*/;
  v82->NEXT_ICON_SPRITE_NAME = (struct System_String_o *)StringLiteral_19370/*"icon_spot_next"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v82->NEXT_ICON_SPRITE_NAME, v83, v84, v85, v86, v87, v88, v89);
  v90 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  v91 = (System_Int32_array **)StringLiteral_19369/*"icon_spot_free"*/;
  v90->FREE_ICON_SPRITE_NAME = (struct System_String_o *)StringLiteral_19369/*"icon_spot_free"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v90->FREE_ICON_SPRITE_NAME, v91, v92, v93, v94, v95, v96, v97);
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
  v105 = (System_Int32_array **)StringLiteral_21640/*"questboard_shohi_bg_01"*/;
  p_COST_BG_ITEM = (BattleServantConfConponent_o *)&v98->static_fields->COST_BG_ITEM;
  p_COST_BG_ITEM->klass = (BattleServantConfConponent_c *)StringLiteral_21640/*"questboard_shohi_bg_01"*/;
  sub_B2C2F8(p_COST_BG_ITEM, v105, v107, v108, v109, v110, v111, v112);
  v113 = (System_Int32_array **)StringLiteral_21641/*"questboard_shohi_bg_02"*/;
  p_COST_BG_QP = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_QP;
  p_COST_BG_QP->klass = (BattleServantConfConponent_c *)StringLiteral_21641/*"questboard_shohi_bg_02"*/;
  sub_B2C2F8(p_COST_BG_QP, v113, v115, v116, v117, v118, v119, v120);
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
  v128 = (System_Int32_array **)StringLiteral_19565/*"img_quest_spend"*/;
  p_SHOHI_SP_NAME = (BattleServantConfConponent_o *)&v121->static_fields->SHOHI_SP_NAME;
  p_SHOHI_SP_NAME->klass = (BattleServantConfConponent_c *)StringLiteral_19565/*"img_quest_spend"*/;
  sub_B2C2F8(p_SHOHI_SP_NAME, v128, v130, v131, v132, v133, v134, v135);
  v136 = (System_Int32_array **)StringLiteral_19566/*"img_quest_spend2"*/;
  p_SHOHI_SP_NAME_WAR_BOARD = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->SHOHI_SP_NAME_WAR_BOARD;
  p_SHOHI_SP_NAME_WAR_BOARD->klass = (BattleServantConfConponent_c *)StringLiteral_19566/*"img_quest_spend2"*/;
  sub_B2C2F8(p_SHOHI_SP_NAME_WAR_BOARD, v136, v138, v139, v140, v141, v142, v143);
  v144 = (System_Int32_array **)StringLiteral_19563/*"img_quest_lasttime"*/;
  p_QUEST_BOARD_COSTNAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_COSTNAME;
  p_QUEST_BOARD_COSTNAME->klass = (BattleServantConfConponent_c *)StringLiteral_19563/*"img_quest_lasttime"*/;
  sub_B2C2F8(p_QUEST_BOARD_COSTNAME, v144, v146, v147, v148, v149, v150, v151);
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
  v758 = UnityEngine_Vector3__get_zero(0LL);
  v155 = QuestBoardListViewItemDraw_TypeInfo;
  QuestBoardListViewItemDraw_TypeInfo->static_fields->PHASE_OBJ_POS_SINGLE = v758;
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
  v170 = (System_Int32_array **)StringLiteral_18619/*"event_war_"*/;
  p_EVENT_WAR_SPNAME_PREFIX = (BattleServantConfConponent_o *)&v163->static_fields->EVENT_WAR_SPNAME_PREFIX;
  p_EVENT_WAR_SPNAME_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_18619/*"event_war_"*/;
  sub_B2C2F8(p_EVENT_WAR_SPNAME_PREFIX, v170, v172, v173, v174, v175, v176, v177);
  v178 = (System_Int32_array **)StringLiteral_17266/*"chaldea_category_{0}"*/;
  p_EVENT_WAR_SUBFOLDER_SPNAME_PREFIX = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->EVENT_WAR_SUBFOLDER_SPNAME_PREFIX;
  p_EVENT_WAR_SUBFOLDER_SPNAME_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_17266/*"chaldea_category_{0}"*/;
  sub_B2C2F8(p_EVENT_WAR_SUBFOLDER_SPNAME_PREFIX, v178, v180, v181, v182, v183, v184, v185);
  v186 = (System_Int32_array **)StringLiteral_21618/*"quest_board_"*/;
  p_QUEST_BOARD_SPNAME_PREFIX = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_SPNAME_PREFIX;
  p_QUEST_BOARD_SPNAME_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_21618/*"quest_board_"*/;
  sub_B2C2F8(p_QUEST_BOARD_SPNAME_PREFIX, v186, v188, v189, v190, v191, v192, v193);
  v194 = (System_Int32_array **)StringLiteral_19572/*"img_questboard_"*/;
  p_RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX;
  p_RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_19572/*"img_questboard_"*/;
  sub_B2C2F8(p_RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX, v194, v196, v197, v198, v199, v200, v201);
  v202 = (System_Int32_array **)StringLiteral_21619/*"quest_board_icon_"*/;
  p_QUEST_BOARD_ICON_SPNAME_PREFIX = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_ICON_SPNAME_PREFIX;
  p_QUEST_BOARD_ICON_SPNAME_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_21619/*"quest_board_icon_"*/;
  sub_B2C2F8(p_QUEST_BOARD_ICON_SPNAME_PREFIX, v202, v204, v205, v206, v207, v208, v209);
  v210 = (System_Int32_array **)StringLiteral_21620/*"quest_board_mask_"*/;
  p_QUEST_BOARD_MASK_SPNAME_PREFIX = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_MASK_SPNAME_PREFIX;
  p_QUEST_BOARD_MASK_SPNAME_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_21620/*"quest_board_mask_"*/;
  sub_B2C2F8(p_QUEST_BOARD_MASK_SPNAME_PREFIX, v210, v212, v213, v214, v215, v216, v217);
  v218 = (System_Int32_array **)StringLiteral_21639/*"questboard_shohi_"*/;
  p_QUEST_BOARD_SHOHI_SPNAME_PREFIX = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_SHOHI_SPNAME_PREFIX;
  p_QUEST_BOARD_SHOHI_SPNAME_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_21639/*"questboard_shohi_"*/;
  sub_B2C2F8(p_QUEST_BOARD_SHOHI_SPNAME_PREFIX, v218, v220, v221, v222, v223, v224, v225);
  v226 = (System_Int32_array **)StringLiteral_21626/*"questboard_ap_"*/;
  p_QUEST_BOARD_AP_SPNAME_PREFIX = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_AP_SPNAME_PREFIX;
  p_QUEST_BOARD_AP_SPNAME_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_21626/*"questboard_ap_"*/;
  sub_B2C2F8(p_QUEST_BOARD_AP_SPNAME_PREFIX, v226, v228, v229, v230, v231, v232, v233);
  v234 = (System_Int32_array **)StringLiteral_17172/*"caldeagate_notice_{0:00}"*/;
  p_QUEST_BOARD_INFO_FRAME_NAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_INFO_FRAME_NAME;
  p_QUEST_BOARD_INFO_FRAME_NAME->klass = (BattleServantConfConponent_c *)StringLiteral_17172/*"caldeagate_notice_{0:00}"*/;
  sub_B2C2F8(p_QUEST_BOARD_INFO_FRAME_NAME, v234, v236, v237, v238, v239, v240, v241);
  v242 = (System_Int32_array **)StringLiteral_19574/*"img_questboard_damage"*/;
  p_QUEST_BOARD_DAMAGE_RECODE_NAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_DAMAGE_RECODE_NAME;
  p_QUEST_BOARD_DAMAGE_RECODE_NAME->klass = (BattleServantConfConponent_c *)StringLiteral_19574/*"img_questboard_damage"*/;
  sub_B2C2F8(p_QUEST_BOARD_DAMAGE_RECODE_NAME, v242, v244, v245, v246, v247, v248, v249);
  v250 = (System_Int32_array **)StringLiteral_19563/*"img_quest_lasttime"*/;
  p_QUEST_BOARD_PREV_ICON_NAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_PREV_ICON_NAME;
  p_QUEST_BOARD_PREV_ICON_NAME->klass = (BattleServantConfConponent_c *)StringLiteral_19563/*"img_quest_lasttime"*/;
  sub_B2C2F8(p_QUEST_BOARD_PREV_ICON_NAME, v250, v252, v253, v254, v255, v256, v257);
  v258 = (System_Int32_array **)StringLiteral_19580/*"img_questboard_knockdown"*/;
  p_QUEST_BOARD_KNOCKDOWN_RECODE_NAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_KNOCKDOWN_RECODE_NAME;
  p_QUEST_BOARD_KNOCKDOWN_RECODE_NAME->klass = (BattleServantConfConponent_c *)StringLiteral_19580/*"img_questboard_knockdown"*/;
  sub_B2C2F8(p_QUEST_BOARD_KNOCKDOWN_RECODE_NAME, v258, v260, v261, v262, v263, v264, v265);
  v266 = (System_Int32_array **)StringLiteral_6209/*"EventUI/QuestBoardIcon/"*/;
  p_QUEST_BOARD_ICON_TEXTURE_PATH = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH;
  p_QUEST_BOARD_ICON_TEXTURE_PATH->klass = (BattleServantConfConponent_c *)StringLiteral_6209/*"EventUI/QuestBoardIcon/"*/;
  sub_B2C2F8(p_QUEST_BOARD_ICON_TEXTURE_PATH, v266, v268, v269, v270, v271, v272, v273);
  v274 = (System_Int32_array **)StringLiteral_21619/*"quest_board_icon_"*/;
  p_QUEST_BOARD_ICON_TEXTURE_PREFIX = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_ICON_TEXTURE_PREFIX;
  p_QUEST_BOARD_ICON_TEXTURE_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_21619/*"quest_board_icon_"*/;
  sub_B2C2F8(p_QUEST_BOARD_ICON_TEXTURE_PREFIX, v274, v276, v277, v278, v279, v280, v281);
  v282 = QuestBoardListViewItemDraw_TypeInfo;
  QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_KNOCKDOWN_DAMAGE_WIDTH = 78;
  v282->static_fields->QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX = 48;
  v282->static_fields->QUEST_BOARD_KNOCKDOWN_ZERO_DAMAGE_POSX = 19;
  v282->static_fields->FLICK_THRESHOLD = 2.0;
  v283 = (System_Int32_array **)StringLiteral_19631/*"img_slider_on"*/;
  p_BANNER_POINT_SPNAME_ON = (BattleServantConfConponent_o *)&v282->static_fields->BANNER_POINT_SPNAME_ON;
  p_BANNER_POINT_SPNAME_ON->klass = (BattleServantConfConponent_c *)StringLiteral_19631/*"img_slider_on"*/;
  sub_B2C2F8(p_BANNER_POINT_SPNAME_ON, v283, v285, v286, v287, v288, v289, v290);
  v291 = (System_Int32_array **)StringLiteral_19630/*"img_slider_off"*/;
  p_BANNER_POINT_SPNAME_OFF = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->BANNER_POINT_SPNAME_OFF;
  p_BANNER_POINT_SPNAME_OFF->klass = (BattleServantConfConponent_c *)StringLiteral_19630/*"img_slider_off"*/;
  sub_B2C2F8(p_BANNER_POINT_SPNAME_OFF, v291, v293, v294, v295, v296, v297, v298);
  v299 = QuestBoardListViewItemDraw_TypeInfo;
  QuestBoardListViewItemDraw_TypeInfo->static_fields->SHORTCUT_FACE_MASK_SP_W = 136;
  v299->static_fields->QUEST_FACE_MASK_SP_W = 124;
  v300 = (System_Int32_array **)StringLiteral_19584/*"img_questboard_story02mask"*/;
  p_SHORTCUT_FACE_MASK_SPNAME = (BattleServantConfConponent_o *)&v299->static_fields->SHORTCUT_FACE_MASK_SPNAME;
  p_SHORTCUT_FACE_MASK_SPNAME->klass = (BattleServantConfConponent_c *)StringLiteral_19584/*"img_questboard_story02mask"*/;
  sub_B2C2F8(p_SHORTCUT_FACE_MASK_SPNAME, v300, v302, v303, v304, v305, v306, v307);
  v308 = (System_Int32_array **)StringLiteral_19586/*"img_questboard_story03mask"*/;
  p_QUEST_STORY_FACE_MASK_SPNAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_STORY_FACE_MASK_SPNAME;
  p_QUEST_STORY_FACE_MASK_SPNAME->klass = (BattleServantConfConponent_c *)StringLiteral_19586/*"img_questboard_story03mask"*/;
  sub_B2C2F8(p_QUEST_STORY_FACE_MASK_SPNAME, v308, v310, v311, v312, v313, v314, v315);
  v316 = (System_Int32_array **)StringLiteral_19587/*"img_questboard_story04mask"*/;
  p_QUEST_MAIN_FACE_MASK_SPNAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_MAIN_FACE_MASK_SPNAME;
  p_QUEST_MAIN_FACE_MASK_SPNAME->klass = (BattleServantConfConponent_c *)StringLiteral_19587/*"img_questboard_story04mask"*/;
  sub_B2C2F8(p_QUEST_MAIN_FACE_MASK_SPNAME, v316, v318, v319, v320, v321, v322, v323);
  v324 = (System_Int32_array **)StringLiteral_19588/*"img_questboard_story05mask"*/;
  p_QUEST_EVENT_FACE_MASK_SPNAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_EVENT_FACE_MASK_SPNAME;
  p_QUEST_EVENT_FACE_MASK_SPNAME->klass = (BattleServantConfConponent_c *)StringLiteral_19588/*"img_questboard_story05mask"*/;
  sub_B2C2F8(p_QUEST_EVENT_FACE_MASK_SPNAME, v324, v326, v327, v328, v329, v330, v331);
  v332 = sub_B2C374(string___TypeInfo, 2LL);
  if ( !v332 )
    goto LABEL_177;
  v340 = (System_Int32_array **)v332;
  v341 = (void *)StringLiteral_21689/*"raid_point_frame_old"*/;
  if ( StringLiteral_21689/*"raid_point_frame_old"*/ )
  {
    v341 = (void *)sub_B2C41C(StringLiteral_21689/*"raid_point_frame_old"*/, *(_QWORD *)&(*v340)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v342 = (System_Int32_array **)StringLiteral_21689/*"raid_point_frame_old"*/;
  }
  else
  {
    v342 = 0LL;
  }
  if ( !*((_DWORD *)v340 + 6) )
    goto LABEL_175;
  v340[4] = (System_Int32_array *)v342;
  sub_B2C2F8((BattleServantConfConponent_o *)(v340 + 4), v342, v334, v335, v336, v337, v338, v339);
  v341 = (void *)StringLiteral_21688/*"raid_point_frame"*/;
  if ( StringLiteral_21688/*"raid_point_frame"*/ )
  {
    v341 = (void *)sub_B2C41C(StringLiteral_21688/*"raid_point_frame"*/, *(_QWORD *)&(*v340)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v349 = (System_Int32_array **)StringLiteral_21688/*"raid_point_frame"*/;
  }
  else
  {
    v349 = 0LL;
  }
  if ( *((_DWORD *)v340 + 6) <= 1u )
    goto LABEL_175;
  v340[5] = (System_Int32_array *)v349;
  sub_B2C2F8((BattleServantConfConponent_o *)(v340 + 5), v349, v343, v344, v345, v346, v347, v348);
  p_RP_SPNAME_FRAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->RP_SPNAME_FRAME;
  p_RP_SPNAME_FRAME->klass = (BattleServantConfConponent_c *)v340;
  sub_B2C2F8(p_RP_SPNAME_FRAME, v340, v351, v352, v353, v354, v355, v356);
  v332 = sub_B2C374(string___TypeInfo, 2LL);
  if ( !v332 )
    goto LABEL_177;
  v363 = (System_Int32_array **)v332;
  v341 = (void *)StringLiteral_21690/*"raid_point_old"*/;
  if ( StringLiteral_21690/*"raid_point_old"*/ )
  {
    v341 = (void *)sub_B2C41C(StringLiteral_21690/*"raid_point_old"*/, *(_QWORD *)&(*v363)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v364 = (System_Int32_array **)StringLiteral_21690/*"raid_point_old"*/;
  }
  else
  {
    v364 = 0LL;
  }
  if ( !*((_DWORD *)v363 + 6) )
    goto LABEL_175;
  v363[4] = (System_Int32_array *)v364;
  sub_B2C2F8((BattleServantConfConponent_o *)(v363 + 4), v364, v357, v358, v359, v360, v361, v362);
  v341 = (void *)StringLiteral_21687/*"raid_point"*/;
  if ( StringLiteral_21687/*"raid_point"*/ )
  {
    v341 = (void *)sub_B2C41C(StringLiteral_21687/*"raid_point"*/, *(_QWORD *)&(*v363)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v371 = (System_Int32_array **)StringLiteral_21687/*"raid_point"*/;
  }
  else
  {
    v371 = 0LL;
  }
  if ( *((_DWORD *)v363 + 6) <= 1u )
    goto LABEL_175;
  v363[5] = (System_Int32_array *)v371;
  sub_B2C2F8((BattleServantConfConponent_o *)(v363 + 5), v371, v365, v366, v367, v368, v369, v370);
  p_RP_SPNAME_POINT = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->RP_SPNAME_POINT;
  p_RP_SPNAME_POINT->klass = (BattleServantConfConponent_c *)v363;
  sub_B2C2F8(p_RP_SPNAME_POINT, v363, v373, v374, v375, v376, v377, v378);
  v379 = QuestBoardListViewItemDraw_TypeInfo;
  QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_DEFAULT_FONT_SIZE = 18;
  v379->static_fields->RESTRICTION_FONT_SPACING_DEFAULT = 0;
  v379->static_fields->RESTRICTION_FONT_SPACING_MIN = -1;
  v380 = v379->static_fields;
  *(_QWORD *)&v380->RESTRICTION_POS_DEFAULT.fields.x = 0xC2040000C33A0000LL;
  v380->RESTRICTION_POS_DEFAULT.fields.z = 0.0;
  v379->static_fields->RESTRICTION_FONT_SIZE_ALLOUT = 14;
  v379->static_fields->RESTRICTION_FONT_WIDTH_ALLOUT = 112;
  v381 = v379->static_fields;
  *(_QWORD *)&v381->RESTRICTION_POS_ALLOUT.fields.x = 0xC2040000C3370000LL;
  v381->RESTRICTION_POS_ALLOUT.fields.z = 0.0;
  v379->static_fields->BANNER_ENTORY_EFFECT_DURATION = 0.5;
  v379->static_fields->BANNER_ENTORY_START_POS_X = 30.0;
  v382 = (System_Int32_array **)StringLiteral_21630/*"questboard_cap_closed"*/;
  p_QBOARD_CAP_CLOSED = (BattleServantConfConponent_o *)&v379->static_fields->QBOARD_CAP_CLOSED;
  p_QBOARD_CAP_CLOSED->klass = (BattleServantConfConponent_c *)StringLiteral_21630/*"questboard_cap_closed"*/;
  sub_B2C2F8(p_QBOARD_CAP_CLOSED, v382, v384, v385, v386, v387, v388, v389);
  v390 = (System_Int32_array **)StringLiteral_21634/*"questboard_cap_closed_{0}"*/;
  p_QBOARD_CAP_CLOSED_SPECIAL_FORMAT = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_SPECIAL_FORMAT;
  p_QBOARD_CAP_CLOSED_SPECIAL_FORMAT->klass = (BattleServantConfConponent_c *)StringLiteral_21634/*"questboard_cap_closed_{0}"*/;
  sub_B2C2F8(p_QBOARD_CAP_CLOSED_SPECIAL_FORMAT, v390, v392, v393, v394, v395, v396, v397);
  v398 = (System_Int32_array **)StringLiteral_21631/*"questboard_cap_closed_special"*/;
  p_QBOARD_CAP_CLOSED_SPECIAL = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_SPECIAL;
  p_QBOARD_CAP_CLOSED_SPECIAL->klass = (BattleServantConfConponent_c *)StringLiteral_21631/*"questboard_cap_closed_special"*/;
  sub_B2C2F8(p_QBOARD_CAP_CLOSED_SPECIAL, v398, v400, v401, v402, v403, v404, v405);
  v406 = (System_Int32_array **)StringLiteral_21632/*"questboard_cap_closed_special_2"*/;
  p_QBOARD_CAP_CLOSED_SPECIAL_2 = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_SPECIAL_2;
  p_QBOARD_CAP_CLOSED_SPECIAL_2->klass = (BattleServantConfConponent_c *)StringLiteral_21632/*"questboard_cap_closed_special_2"*/;
  sub_B2C2F8(p_QBOARD_CAP_CLOSED_SPECIAL_2, v406, v408, v409, v410, v411, v412, v413);
  v414 = (System_Int32_array **)StringLiteral_21633/*"questboard_cap_closed_special_3"*/;
  p_QBOARD_CAP_CLOSED_SPECIAL_3 = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_SPECIAL_3;
  p_QBOARD_CAP_CLOSED_SPECIAL_3->klass = (BattleServantConfConponent_c *)StringLiteral_21633/*"questboard_cap_closed_special_3"*/;
  sub_B2C2F8(p_QBOARD_CAP_CLOSED_SPECIAL_3, v414, v416, v417, v418, v419, v420, v421);
  v332 = sub_B2C374(string___TypeInfo, 7LL);
  if ( !v332 )
    goto LABEL_177;
  v428 = (System_Int32_array **)v332;
  v341 = (void *)StringLiteral_19575/*"img_questboard_event{0:D3}"*/;
  if ( StringLiteral_19575/*"img_questboard_event{0:D3}"*/ )
  {
    v341 = (void *)sub_B2C41C(StringLiteral_19575/*"img_questboard_event{0:D3}"*/, *(_QWORD *)&(*v428)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v429 = (System_Int32_array **)StringLiteral_19575/*"img_questboard_event{0:D3}"*/;
  }
  else
  {
    v429 = 0LL;
  }
  if ( !*((_DWORD *)v428 + 6) )
    goto LABEL_175;
  v428[4] = (System_Int32_array *)v429;
  sub_B2C2F8((BattleServantConfConponent_o *)(v428 + 4), v429, v422, v423, v424, v425, v426, v427);
  v341 = (void *)StringLiteral_21635/*"questboard_cap{0:D3}"*/;
  if ( StringLiteral_21635/*"questboard_cap{0:D3}"*/ )
  {
    v341 = (void *)sub_B2C41C(StringLiteral_21635/*"questboard_cap{0:D3}"*/, *(_QWORD *)&(*v428)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v436 = (System_Int32_array **)StringLiteral_21635/*"questboard_cap{0:D3}"*/;
  }
  else
  {
    v436 = 0LL;
  }
  if ( *((_DWORD *)v428 + 6) <= 1u )
    goto LABEL_175;
  v428[5] = (System_Int32_array *)v436;
  sub_B2C2F8((BattleServantConfConponent_o *)(v428 + 5), v436, v430, v431, v432, v433, v434, v435);
  v341 = (void *)StringLiteral_17266/*"chaldea_category_{0}"*/;
  if ( StringLiteral_17266/*"chaldea_category_{0}"*/ )
  {
    v341 = (void *)sub_B2C41C(StringLiteral_17266/*"chaldea_category_{0}"*/, *(_QWORD *)&(*v428)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v443 = (System_Int32_array **)StringLiteral_17266/*"chaldea_category_{0}"*/;
  }
  else
  {
    v443 = 0LL;
  }
  if ( *((_DWORD *)v428 + 6) <= 2u )
    goto LABEL_175;
  v428[6] = (System_Int32_array *)v443;
  sub_B2C2F8((BattleServantConfConponent_o *)(v428 + 6), v443, v437, v438, v439, v440, v441, v442);
  v341 = (void *)StringLiteral_19582/*"img_questboard_story01"*/;
  if ( StringLiteral_19582/*"img_questboard_story01"*/ )
  {
    v341 = (void *)sub_B2C41C(StringLiteral_19582/*"img_questboard_story01"*/, *(_QWORD *)&(*v428)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v450 = (System_Int32_array **)StringLiteral_19582/*"img_questboard_story01"*/;
  }
  else
  {
    v450 = 0LL;
  }
  if ( *((_DWORD *)v428 + 6) <= 3u )
    goto LABEL_175;
  v428[7] = (System_Int32_array *)v450;
  sub_B2C2F8((BattleServantConfConponent_o *)(v428 + 7), v450, v444, v445, v446, v447, v448, v449);
  v341 = (void *)StringLiteral_19577/*"img_questboard_hero01"*/;
  if ( StringLiteral_19577/*"img_questboard_hero01"*/ )
  {
    v341 = (void *)sub_B2C41C(StringLiteral_19577/*"img_questboard_hero01"*/, *(_QWORD *)&(*v428)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v457 = (System_Int32_array **)StringLiteral_19577/*"img_questboard_hero01"*/;
  }
  else
  {
    v457 = 0LL;
  }
  if ( *((_DWORD *)v428 + 6) <= 4u )
    goto LABEL_175;
  v428[8] = (System_Int32_array *)v457;
  sub_B2C2F8((BattleServantConfConponent_o *)(v428 + 8), v457, v451, v452, v453, v454, v455, v456);
  v341 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v341 = (void *)sub_B2C41C(StringLiteral_1/*""*/, *(_QWORD *)&(*v428)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v464 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v464 = 0LL;
  }
  if ( *((_DWORD *)v428 + 6) <= 5u )
    goto LABEL_175;
  v428[9] = (System_Int32_array *)v464;
  sub_B2C2F8((BattleServantConfConponent_o *)(v428 + 9), v464, v458, v459, v460, v461, v462, v463);
  v341 = (void *)StringLiteral_21635/*"questboard_cap{0:D3}"*/;
  if ( StringLiteral_21635/*"questboard_cap{0:D3}"*/ )
  {
    v341 = (void *)sub_B2C41C(StringLiteral_21635/*"questboard_cap{0:D3}"*/, *(_QWORD *)&(*v428)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v471 = (System_Int32_array **)StringLiteral_21635/*"questboard_cap{0:D3}"*/;
  }
  else
  {
    v471 = 0LL;
  }
  if ( *((_DWORD *)v428 + 6) <= 6u )
    goto LABEL_175;
  v428[10] = (System_Int32_array *)v471;
  sub_B2C2F8((BattleServantConfConponent_o *)(v428 + 10), v471, v465, v466, v467, v468, v469, v470);
  p_msQBoardL1Names = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msQBoardL1Names;
  p_msQBoardL1Names->klass = (BattleServantConfConponent_c *)v428;
  sub_B2C2F8(p_msQBoardL1Names, v428, v473, v474, v475, v476, v477, v478);
  v479 = (System_Int32_array **)StringLiteral_19583/*"img_questboard_story02"*/;
  p_msQBoardL2Name_Story = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msQBoardL2Name_Story;
  p_msQBoardL2Name_Story->klass = (BattleServantConfConponent_c *)StringLiteral_19583/*"img_questboard_story02"*/;
  sub_B2C2F8(p_msQBoardL2Name_Story, v479, v481, v482, v483, v484, v485, v486);
  v487 = (System_Int32_array **)StringLiteral_19578/*"img_questboard_hero02"*/;
  p_msQBoardL2Name_Hero = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msQBoardL2Name_Hero;
  p_msQBoardL2Name_Hero->klass = (BattleServantConfConponent_c *)StringLiteral_19578/*"img_questboard_hero02"*/;
  sub_B2C2F8(p_msQBoardL2Name_Hero, v487, v489, v490, v491, v492, v493, v494);
  v332 = sub_B2C374(string___TypeInfo, 7LL);
  if ( !v332 )
    goto LABEL_177;
  v501 = (System_Int32_array **)v332;
  v341 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v341 = (void *)sub_B2C41C(StringLiteral_1/*""*/, *(_QWORD *)&(*v501)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v502 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v502 = 0LL;
  }
  if ( !*((_DWORD *)v501 + 6) )
    goto LABEL_175;
  v501[4] = (System_Int32_array *)v502;
  sub_B2C2F8((BattleServantConfConponent_o *)(v501 + 4), v502, v495, v496, v497, v498, v499, v500);
  v341 = (void *)StringLiteral_19581/*"img_questboard_main_"*/;
  if ( StringLiteral_19581/*"img_questboard_main_"*/ )
  {
    v341 = (void *)sub_B2C41C(StringLiteral_19581/*"img_questboard_main_"*/, *(_QWORD *)&(*v501)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v509 = (System_Int32_array **)StringLiteral_19581/*"img_questboard_main_"*/;
  }
  else
  {
    v509 = 0LL;
  }
  if ( *((_DWORD *)v501 + 6) <= 1u )
    goto LABEL_175;
  v501[5] = (System_Int32_array *)v509;
  sub_B2C2F8((BattleServantConfConponent_o *)(v501 + 5), v509, v503, v504, v505, v506, v507, v508);
  v341 = (void *)StringLiteral_19576/*"img_questboard_free_"*/;
  if ( StringLiteral_19576/*"img_questboard_free_"*/ )
  {
    v341 = (void *)sub_B2C41C(StringLiteral_19576/*"img_questboard_free_"*/, *(_QWORD *)&(*v501)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v516 = (System_Int32_array **)StringLiteral_19576/*"img_questboard_free_"*/;
  }
  else
  {
    v516 = 0LL;
  }
  if ( *((_DWORD *)v501 + 6) <= 2u )
    goto LABEL_175;
  v501[6] = (System_Int32_array *)v516;
  sub_B2C2F8((BattleServantConfConponent_o *)(v501 + 6), v516, v510, v511, v512, v513, v514, v515);
  v341 = (void *)StringLiteral_19585/*"img_questboard_story03"*/;
  if ( StringLiteral_19585/*"img_questboard_story03"*/ )
  {
    v341 = (void *)sub_B2C41C(StringLiteral_19585/*"img_questboard_story03"*/, *(_QWORD *)&(*v501)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v523 = (System_Int32_array **)StringLiteral_19585/*"img_questboard_story03"*/;
  }
  else
  {
    v523 = 0LL;
  }
  if ( *((_DWORD *)v501 + 6) <= 3u )
    goto LABEL_175;
  v501[7] = (System_Int32_array *)v523;
  sub_B2C2F8((BattleServantConfConponent_o *)(v501 + 7), v523, v517, v518, v519, v520, v521, v522);
  v341 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v341 = (void *)sub_B2C41C(StringLiteral_1/*""*/, *(_QWORD *)&(*v501)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v530 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v530 = 0LL;
  }
  if ( *((_DWORD *)v501 + 6) <= 4u )
    goto LABEL_175;
  v501[8] = (System_Int32_array *)v530;
  sub_B2C2F8((BattleServantConfConponent_o *)(v501 + 8), v530, v524, v525, v526, v527, v528, v529);
  v341 = (void *)StringLiteral_19576/*"img_questboard_free_"*/;
  if ( StringLiteral_19576/*"img_questboard_free_"*/ )
  {
    v341 = (void *)sub_B2C41C(StringLiteral_19576/*"img_questboard_free_"*/, *(_QWORD *)&(*v501)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v537 = (System_Int32_array **)StringLiteral_19576/*"img_questboard_free_"*/;
  }
  else
  {
    v537 = 0LL;
  }
  if ( *((_DWORD *)v501 + 6) <= 5u )
    goto LABEL_175;
  v501[9] = (System_Int32_array *)v537;
  sub_B2C2F8((BattleServantConfConponent_o *)(v501 + 9), v537, v531, v532, v533, v534, v535, v536);
  v341 = (void *)StringLiteral_19579/*"img_questboard_hero03"*/;
  if ( StringLiteral_19579/*"img_questboard_hero03"*/ )
  {
    v341 = (void *)sub_B2C41C(StringLiteral_19579/*"img_questboard_hero03"*/, *(_QWORD *)&(*v501)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v544 = (System_Int32_array **)StringLiteral_19579/*"img_questboard_hero03"*/;
  }
  else
  {
    v544 = 0LL;
  }
  if ( *((_DWORD *)v501 + 6) <= 6u )
    goto LABEL_175;
  v501[10] = (System_Int32_array *)v544;
  sub_B2C2F8((BattleServantConfConponent_o *)(v501 + 10), v544, v538, v539, v540, v541, v542, v543);
  p_msQBoardL3Names = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msQBoardL3Names;
  p_msQBoardL3Names->klass = (BattleServantConfConponent_c *)v501;
  sub_B2C2F8(p_msQBoardL3Names, v501, v546, v547, v548, v549, v550, v551);
  v332 = sub_B2C374(string___TypeInfo, 7LL);
  if ( !v332 )
    goto LABEL_177;
  v558 = (System_Int32_array **)v332;
  v341 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v341 = (void *)sub_B2C41C(StringLiteral_1/*""*/, *(_QWORD *)&(*v558)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v559 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v559 = 0LL;
  }
  if ( !*((_DWORD *)v558 + 6) )
    goto LABEL_175;
  v558[4] = (System_Int32_array *)v559;
  sub_B2C2F8((BattleServantConfConponent_o *)(v558 + 4), v559, v552, v553, v554, v555, v556, v557);
  v341 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v341 = (void *)sub_B2C41C(StringLiteral_1/*""*/, *(_QWORD *)&(*v558)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v566 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v566 = 0LL;
  }
  if ( *((_DWORD *)v558 + 6) <= 1u )
    goto LABEL_175;
  v558[5] = (System_Int32_array *)v566;
  sub_B2C2F8((BattleServantConfConponent_o *)(v558 + 5), v566, v560, v561, v562, v563, v564, v565);
  v341 = (void *)StringLiteral_19593/*"img_questtxt_free"*/;
  if ( StringLiteral_19593/*"img_questtxt_free"*/ )
  {
    v341 = (void *)sub_B2C41C(StringLiteral_19593/*"img_questtxt_free"*/, *(_QWORD *)&(*v558)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v573 = (System_Int32_array **)StringLiteral_19593/*"img_questtxt_free"*/;
  }
  else
  {
    v573 = 0LL;
  }
  if ( *((_DWORD *)v558 + 6) <= 2u )
    goto LABEL_175;
  v558[6] = (System_Int32_array *)v573;
  sub_B2C2F8((BattleServantConfConponent_o *)(v558 + 6), v573, v567, v568, v569, v570, v571, v572);
  v341 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v341 = (void *)sub_B2C41C(StringLiteral_1/*""*/, *(_QWORD *)&(*v558)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v580 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v580 = 0LL;
  }
  if ( *((_DWORD *)v558 + 6) <= 3u )
    goto LABEL_175;
  v558[7] = (System_Int32_array *)v580;
  sub_B2C2F8((BattleServantConfConponent_o *)(v558 + 7), v580, v574, v575, v576, v577, v578, v579);
  v341 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v341 = (void *)sub_B2C41C(StringLiteral_1/*""*/, *(_QWORD *)&(*v558)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v587 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v587 = 0LL;
  }
  if ( *((_DWORD *)v558 + 6) <= 4u )
    goto LABEL_175;
  v558[8] = (System_Int32_array *)v587;
  sub_B2C2F8((BattleServantConfConponent_o *)(v558 + 8), v587, v581, v582, v583, v584, v585, v586);
  v341 = (void *)StringLiteral_19592/*"img_questtxt_event"*/;
  if ( StringLiteral_19592/*"img_questtxt_event"*/ )
  {
    v341 = (void *)sub_B2C41C(StringLiteral_19592/*"img_questtxt_event"*/, *(_QWORD *)&(*v558)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v594 = (System_Int32_array **)StringLiteral_19592/*"img_questtxt_event"*/;
  }
  else
  {
    v594 = 0LL;
  }
  if ( *((_DWORD *)v558 + 6) <= 5u )
    goto LABEL_175;
  v558[9] = (System_Int32_array *)v594;
  sub_B2C2F8((BattleServantConfConponent_o *)(v558 + 9), v594, v588, v589, v590, v591, v592, v593);
  v341 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v341 = (void *)sub_B2C41C(StringLiteral_1/*""*/, *(_QWORD *)&(*v558)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v601 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v601 = 0LL;
  }
  if ( *((_DWORD *)v558 + 6) <= 6u )
    goto LABEL_175;
  v558[10] = (System_Int32_array *)v601;
  sub_B2C2F8((BattleServantConfConponent_o *)(v558 + 10), v601, v595, v596, v597, v598, v599, v600);
  p_msLabelMainSprNames = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msLabelMainSprNames;
  p_msLabelMainSprNames->klass = (BattleServantConfConponent_c *)v558;
  sub_B2C2F8(p_msLabelMainSprNames, v558, v603, v604, v605, v606, v607, v608);
  v332 = sub_B2C374(string___TypeInfo, 8LL);
  if ( !v332 )
LABEL_177:
    sub_B2C434(v332, v333);
  v615 = (System_Int32_array **)v332;
  v341 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v341 = (void *)sub_B2C41C(StringLiteral_1/*""*/, *(_QWORD *)&(*v615)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v616 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v616 = 0LL;
  }
  if ( !*((_DWORD *)v615 + 6) )
    goto LABEL_175;
  v615[4] = (System_Int32_array *)v616;
  sub_B2C2F8((BattleServantConfConponent_o *)(v615 + 4), v616, v609, v610, v611, v612, v613, v614);
  v341 = (void *)StringLiteral_21628/*"questboard_ap_main"*/;
  if ( StringLiteral_21628/*"questboard_ap_main"*/ )
  {
    v341 = (void *)sub_B2C41C(StringLiteral_21628/*"questboard_ap_main"*/, *(_QWORD *)&(*v615)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v623 = (System_Int32_array **)StringLiteral_21628/*"questboard_ap_main"*/;
  }
  else
  {
    v623 = 0LL;
  }
  if ( *((_DWORD *)v615 + 6) <= 1u )
    goto LABEL_175;
  v615[5] = (System_Int32_array *)v623;
  sub_B2C2F8((BattleServantConfConponent_o *)(v615 + 5), v623, v617, v618, v619, v620, v621, v622);
  v341 = (void *)StringLiteral_21627/*"questboard_ap_free"*/;
  if ( StringLiteral_21627/*"questboard_ap_free"*/ )
  {
    v341 = (void *)sub_B2C41C(StringLiteral_21627/*"questboard_ap_free"*/, *(_QWORD *)&(*v615)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v630 = (System_Int32_array **)StringLiteral_21627/*"questboard_ap_free"*/;
  }
  else
  {
    v630 = 0LL;
  }
  if ( *((_DWORD *)v615 + 6) <= 2u )
    goto LABEL_175;
  v615[6] = (System_Int32_array *)v630;
  sub_B2C2F8((BattleServantConfConponent_o *)(v615 + 6), v630, v624, v625, v626, v627, v628, v629);
  v341 = (void *)StringLiteral_21629/*"questboard_ap_story"*/;
  if ( StringLiteral_21629/*"questboard_ap_story"*/ )
  {
    v341 = (void *)sub_B2C41C(StringLiteral_21629/*"questboard_ap_story"*/, *(_QWORD *)&(*v615)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v637 = (System_Int32_array **)StringLiteral_21629/*"questboard_ap_story"*/;
  }
  else
  {
    v637 = 0LL;
  }
  if ( *((_DWORD *)v615 + 6) <= 3u )
    goto LABEL_175;
  v615[7] = (System_Int32_array *)v637;
  sub_B2C2F8((BattleServantConfConponent_o *)(v615 + 7), v637, v631, v632, v633, v634, v635, v636);
  v341 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v341 = (void *)sub_B2C41C(StringLiteral_1/*""*/, *(_QWORD *)&(*v615)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v644 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v644 = 0LL;
  }
  if ( *((_DWORD *)v615 + 6) <= 4u )
    goto LABEL_175;
  v615[8] = (System_Int32_array *)v644;
  sub_B2C2F8((BattleServantConfConponent_o *)(v615 + 8), v644, v638, v639, v640, v641, v642, v643);
  v341 = (void *)StringLiteral_21627/*"questboard_ap_free"*/;
  if ( StringLiteral_21627/*"questboard_ap_free"*/ )
  {
    v341 = (void *)sub_B2C41C(StringLiteral_21627/*"questboard_ap_free"*/, *(_QWORD *)&(*v615)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v651 = (System_Int32_array **)StringLiteral_21627/*"questboard_ap_free"*/;
  }
  else
  {
    v651 = 0LL;
  }
  if ( *((_DWORD *)v615 + 6) <= 5u )
    goto LABEL_175;
  v615[9] = (System_Int32_array *)v651;
  sub_B2C2F8((BattleServantConfConponent_o *)(v615 + 9), v651, v645, v646, v647, v648, v649, v650);
  v341 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v341 = (void *)sub_B2C41C(StringLiteral_1/*""*/, *(_QWORD *)&(*v615)->m_Items[9]);
    if ( !v341 )
      goto LABEL_176;
    v658 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v658 = 0LL;
  }
  if ( *((_DWORD *)v615 + 6) <= 6u )
    goto LABEL_175;
  v615[10] = (System_Int32_array *)v658;
  sub_B2C2F8((BattleServantConfConponent_o *)(v615 + 10), v658, v652, v653, v654, v655, v656, v657);
  v341 = (void *)StringLiteral_21660/*"qyestboard_ap_free"*/;
  if ( StringLiteral_21660/*"qyestboard_ap_free"*/ )
  {
    v341 = (void *)sub_B2C41C(StringLiteral_21660/*"qyestboard_ap_free"*/, *(_QWORD *)&(*v615)->m_Items[9]);
    if ( v341 )
    {
      v665 = (System_Int32_array **)StringLiteral_21660/*"qyestboard_ap_free"*/;
      goto LABEL_173;
    }
LABEL_176:
    v754 = sub_B2C454(v341);
    sub_B2C400(v754, 0LL);
  }
  v665 = 0LL;
LABEL_173:
  if ( *((_DWORD *)v615 + 6) <= 7u )
  {
LABEL_175:
    v753 = sub_B2C460(v341);
    sub_B2C400(v753, 0LL);
  }
  v615[11] = (System_Int32_array *)v665;
  sub_B2C2F8((BattleServantConfConponent_o *)(v615 + 11), v665, v659, v660, v661, v662, v663, v664);
  p_QuestBoardApSpNames = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QuestBoardApSpNames;
  p_QuestBoardApSpNames->klass = (BattleServantConfConponent_c *)v615;
  sub_B2C2F8(p_QuestBoardApSpNames, v615, v667, v668, v669, v670, v671, v672);
  v673 = (System_Int32_array **)StringLiteral_19570/*"img_questarrow_off"*/;
  p_msPhaseSprName_ArrowOff = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_ArrowOff;
  p_msPhaseSprName_ArrowOff->klass = (BattleServantConfConponent_c *)StringLiteral_19570/*"img_questarrow_off"*/;
  sub_B2C2F8(p_msPhaseSprName_ArrowOff, v673, v675, v676, v677, v678, v679, v680);
  v681 = (System_Int32_array **)StringLiteral_19571/*"img_questarrow_on"*/;
  p_msPhaseSprName_ArrowOn = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_ArrowOn;
  p_msPhaseSprName_ArrowOn->klass = (BattleServantConfConponent_c *)StringLiteral_19571/*"img_questarrow_on"*/;
  sub_B2C2F8(p_msPhaseSprName_ArrowOn, v681, v683, v684, v685, v686, v687, v688);
  v689 = (System_Int32_array **)StringLiteral_19568/*"img_questarrow1_off"*/;
  p_msPhaseSprName_ExArrowOff = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_ExArrowOff;
  p_msPhaseSprName_ExArrowOff->klass = (BattleServantConfConponent_c *)StringLiteral_19568/*"img_questarrow1_off"*/;
  sub_B2C2F8(p_msPhaseSprName_ExArrowOff, v689, v691, v692, v693, v694, v695, v696);
  v697 = (System_Int32_array **)StringLiteral_19569/*"img_questarrow1_on"*/;
  p_msPhaseSprName_ExArrowOn = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_ExArrowOn;
  p_msPhaseSprName_ExArrowOn->klass = (BattleServantConfConponent_c *)StringLiteral_19569/*"img_questarrow1_on"*/;
  sub_B2C2F8(p_msPhaseSprName_ExArrowOn, v697, v699, v700, v701, v702, v703, v704);
  v705 = (System_Int32_array **)StringLiteral_19589/*"img_questloop_off"*/;
  p_msPhaseSprName_LoopOff = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_LoopOff;
  p_msPhaseSprName_LoopOff->klass = (BattleServantConfConponent_c *)StringLiteral_19589/*"img_questloop_off"*/;
  sub_B2C2F8(p_msPhaseSprName_LoopOff, v705, v707, v708, v709, v710, v711, v712);
  v713 = (System_Int32_array **)StringLiteral_19590/*"img_questloop_on"*/;
  p_msPhaseSprName_LoopOn = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_LoopOn;
  p_msPhaseSprName_LoopOn->klass = (BattleServantConfConponent_c *)StringLiteral_19590/*"img_questloop_on"*/;
  sub_B2C2F8(p_msPhaseSprName_LoopOn, v713, v715, v716, v717, v718, v719, v720);
  v721 = (System_Int32_array **)StringLiteral_19524/*"img_loop_off"*/;
  p_msPhaseSprName_LoopFirstOff = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_LoopFirstOff;
  p_msPhaseSprName_LoopFirstOff->klass = (BattleServantConfConponent_c *)StringLiteral_19524/*"img_loop_off"*/;
  sub_B2C2F8(p_msPhaseSprName_LoopFirstOff, v721, v723, v724, v725, v726, v727, v728);
  v729 = (System_Int32_array **)StringLiteral_21638/*"questboard_icon_cap{0:D2}"*/;
  p_CHAPTER_SP_BASE_NAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->CHAPTER_SP_BASE_NAME;
  p_CHAPTER_SP_BASE_NAME->klass = (BattleServantConfConponent_c *)StringLiteral_21638/*"questboard_icon_cap{0:D2}"*/;
  sub_B2C2F8(p_CHAPTER_SP_BASE_NAME, v729, v731, v732, v733, v734, v735, v736);
  v737 = (System_Int32_array **)StringLiteral_19567/*"img_quest_unit_{0:D2}"*/;
  p_CHAPTER_SP_UNIT_NAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->CHAPTER_SP_UNIT_NAME;
  p_CHAPTER_SP_UNIT_NAME->klass = (BattleServantConfConponent_c *)StringLiteral_19567/*"img_quest_unit_{0:D2}"*/;
  sub_B2C2F8(p_CHAPTER_SP_UNIT_NAME, v737, v739, v740, v741, v742, v743, v744);
  v745 = (System_Int32_array **)StringLiteral_19564/*"img_quest_pre_organization"*/;
  p_PRE_BATTLE_ORGANIZATION = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->PRE_BATTLE_ORGANIZATION;
  p_PRE_BATTLE_ORGANIZATION->klass = (BattleServantConfConponent_c *)StringLiteral_19564/*"img_quest_pre_organization"*/;
  sub_B2C2F8(p_PRE_BATTLE_ORGANIZATION, v745, v747, v748, v749, v750, v751, v752);
}


void __fastcall QuestBoardListViewItemDraw___ctor(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct UnityEngine_GameObject_array *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  QuestBoardListViewItemDraw_c *v14; // x0
  struct UISprite_array *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_418A2BF & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_GameObject___TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_UISprite___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_UISprite__TypeInfo, v4);
    sub_B2C35C(&QuestBoardListViewItemDraw_TypeInfo, v5);
    sub_B2C35C(&UISprite___TypeInfo, v6);
    byte_418A2BF = 1;
  }
  v7 = (struct UnityEngine_GameObject_array *)sub_B2C374(UnityEngine_GameObject___TypeInfo, 4LL);
  this->fields.mStatusSp = v7;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mStatusSp,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v14 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v15 = (struct UISprite_array *)sub_B2C374(UISprite___TypeInfo, (unsigned int)v14->static_fields->PHASE_EXTRA_MAX);
  this->fields.mPhaseSp = v15;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mPhaseSp,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UISprite__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UISprite___ctor__);
  this->fields.mMultiSecondBattleInformation = (struct System_Collections_Generic_List_UISprite__o *)v22;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mMultiSecondBattleInformation,
    (System_Int32_array **)v22,
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
    sub_B2C434(this, method);
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
    sub_B2C434(this, questEntity);
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

  if ( (byte_418A2B0 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418A2B0 = 1;
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
          sub_B2C434(v6, v5);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x8
  QuestBoardListViewItem_o *v15; // x1
  int64_t Time; // x3
  const MethodInfo *v17; // x4
  QuestBoardListViewItemDraw_o *v18; // x0
  int32_t v19; // w2

  v5 = this;
  while ( 1 )
  {
    if ( (byte_418A2AC & 1) == 0 )
    {
      sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__RemoveAt__, questBoardItem);
      sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, v11);
      sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__, v12);
      this = (QuestBoardListViewItemDraw_o *)sub_B2C35C(&NetworkManager_TypeInfo, v13);
      byte_418A2AC = 1;
    }
    if ( (byte_418A2AD & 1) == 0 )
    {
      this = (QuestBoardListViewItemDraw_o *)sub_B2C35C(
                                               &Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__,
                                               questBoardItem);
      byte_418A2AD = 1;
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
      v18 = v5;
      v19 = v7;
      goto LABEL_31;
    }
    this = (QuestBoardListViewItemDraw_o *)v5->fields.mInfoTextList;
    if ( !this )
      goto LABEL_33;
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
      v7,
      (const MethodInfo_2EF6150 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__RemoveAt__);
  }
  if ( (byte_418A2AE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, questBoardItem);
    byte_418A2AE = 1;
    mInfoTextList = v5->fields.mInfoTextList;
  }
  if ( mInfoTextList && mInfoTextList->fields._size )
  {
    this = (QuestBoardListViewItemDraw_o *)mInfoTextList->fields._items->m_Items[0];
    if ( !this )
LABEL_33:
      sub_B2C434(this, questBoardItem);
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
      v18 = v5;
      v19 = 0;
LABEL_31:
      QuestBoardListViewItemDraw__UpdateInfoText(v18, v15, v19, Time, v17);
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
    v10 = sub_B2C460(this);
    sub_B2C400(v10, 0LL);
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
      ItemIconComponent__SetItemImage_27396332((ItemIconComponent_o *)this, (int32_t)questBoardManager, v8, 0LL);
      return;
    }
LABEL_18:
    sub_B2C434(this, questBoardManager);
  }
  if ( !this )
    goto LABEL_18;
  if ( num <= 1 )
    v9 = -1;
  else
    v9 = v6->fields.num;
  ItemIconComponent__SetGift((ItemIconComponent_o *)this, v6->fields.type, v6->fields.objectId, v9, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestBoardListViewItemDraw__ConvertToChineseAscii(
        QuestBoardListViewItemDraw_o *this,
        int32_t n,
        const MethodInfo *method)
{
  __int64 v4; // x1
  unsigned int v5; // w21
  System_Text_StringBuilder_o *v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1
  unsigned int v10; // w8
  unsigned int v11; // w8

  if ( (byte_418A2A5 & 1) == 0 )
  {
    sub_B2C35C(&System_Text_StringBuilder_TypeInfo, *(_QWORD *)&n);
    sub_B2C35C(&StringLiteral_953/*"0"*/, v4);
    byte_418A2A5 = 1;
  }
  if ( n <= 0 )
    return (System_String_o *)StringLiteral_953/*"0"*/;
  v5 = n % 0xAu;
  v6 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_42402728(v6, 5, 0LL);
  if ( n >= 10 )
  {
    if ( n >= 100 )
    {
      v11 = n / 0x64u % 0xA;
      if ( v11 >= 2 )
      {
        if ( !v6 )
          goto LABEL_22;
        System_Text_StringBuilder__Append_42411944(v6, v11 | 0x60, 0LL);
      }
      else if ( !v6 )
      {
LABEL_22:
        sub_B2C434(v7, v8);
      }
      System_Text_StringBuilder__Append_42411944(v6, 0x6Bu, 0LL);
      v10 = n / 0xAu % 0xA;
    }
    else
    {
      if ( !v6 )
        goto LABEL_22;
      v10 = (unsigned __int8)n / 0xAu % 0xA;
    }
    if ( v10 >= 2 )
      System_Text_StringBuilder__Append_42411944(v6, v10 | 0x60, 0LL);
    System_Text_StringBuilder__Append_42411944(v6, 0x6Au, 0LL);
    if ( !v5 )
      return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v6->klass->vtable._3_ToString.method)(
                                  v6,
                                  v6->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  }
  else if ( !v6 )
  {
    goto LABEL_22;
  }
  System_Text_StringBuilder__Append_42411944(v6, v5 | 0x60, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v6->klass->vtable._3_ToString.method)(
                              v6,
                              v6->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
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
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x19
  struct MapControl_AreaBoardInfo_o *AreaBoardInfo_k__BackingField; // x22
  DataManager_o *v24; // x23
  int32_t warId; // w20
  EventCampaignMaster_o *MasterData_WarQuestSelectionMaster; // x21
  __int64 v27; // x23
  BoardMessageEntity_array *v28; // x22
  il2cpp_array_size_t v29; // w25
  BoardMessageEntity_o *v30; // x26
  System_String_o *message; // x28
  int64_t closedAt; // x19
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x27
  QuestBoardInformaionText_o *v34; // x0
  const MethodInfo *v35; // x6
  EventMissionProgressRequest_Argument_ProgressData_o *v36; // x24
  BoardMessageEntity_o *v37; // x1
  System_String_o *v38; // x2
  int64_t v39; // x3
  EventCampaignEntity_o *Data; // x0
  System_String_o *v41; // x19
  int64_t v42; // x28
  EventCampaignEntity_o *v43; // x20
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v44; // x27
  QuestBoardInformaionText_o *v45; // x24
  const MethodInfo *v46; // x6
  int64_t v47; // x28
  System_String_o *v48; // x19
  _BOOL4 HasFlag; // w25
  const MethodInfo *v50; // x3
  struct EventEntity_o *eventEnt; // x8
  BoardMessageEntity_o *OverrideQuestMessage; // x0
  BoardMessageEntity_o *v53; // x24
  __int64 v54; // x8
  BoardMessageEntity_o *v55; // x26
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v56; // x25
  System_String_o *v57; // x20
  int64_t endTime; // x19
  QuestBoardInformaionText_o *v59; // x24
  const MethodInfo *v60; // x6
  int v61; // w8
  void *v62; // x23
  unsigned int v63; // w27
  EventEntity_o *v64; // x24
  int32_t id; // w25
  _DWORD *v66; // x26
  const MethodInfo *v67; // x3
  int32_t v68; // w19
  BoardMessageEntity_o *v69; // x25
  System_String_o *v70; // x19
  Il2CppObject *EventName; // x0
  System_String_o *v72; // x19
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v73; // x25
  int64_t v74; // x20
  QuestBoardInformaionText_o *v75; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v76; // x24
  __int64 v77; // x0
  EventCampaignEntity_o *v78; // [xsp+0h] [xbp-B0h]
  const MethodInfo *v79; // [xsp+10h] [xbp-A0h]
  struct MapControl_QuestInfo_o *v80; // [xsp+20h] [xbp-90h]
  struct MapControl_AreaBoardInfo_o *v81; // [xsp+28h] [xbp-88h]
  DataMasterBase_WarMaster__WarEntity__int__o *v82; // [xsp+30h] [xbp-80h]
  int32_t v83; // [xsp+3Ch] [xbp-74h]
  DataManager_o *v84; // [xsp+40h] [xbp-70h]
  WarEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v88; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v89; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_418A281 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_BoardMessageMaster___, questBoardItem);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventCampaignMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMaster_WarMaster___, v8);
    sub_B2C35C(&DataManager_TypeInfo, v9);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v10);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v11);
    sub_B2C35C(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__, v13);
    sub_B2C35C(&LocalizationManager_TypeInfo, v14);
    sub_B2C35C(&QuestBoardInformaionText_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B2C35C(&StringLiteral_23539/*"{0}"*/, v17);
    sub_B2C35C(&StringLiteral_13407/*"TIME_REST_QUEST_BOARD_EVENT"*/, v18);
    sub_B2C35C(&StringLiteral_13405/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, v19);
    byte_418A281 = 1;
  }
  entity = 0LL;
  QuestBoardListViewItemDraw__ResetInfoTextList(this, (const MethodInfo *)questBoardItem);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !questBoardItem )
    goto LABEL_76;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_76;
  AreaBoardInfo_k__BackingField = quest_info_k__BackingField->fields._AreaBoardInfo_k__BackingField;
  if ( !AreaBoardInfo_k__BackingField )
    goto LABEL_76;
  v24 = (DataManager_o *)Instance;
  if ( !Instance )
    goto LABEL_76;
  warId = AreaBoardInfo_k__BackingField->fields.warId;
  MasterData_WarQuestSelectionMaster = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  v82 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         v24,
                                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               v24,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_BoardMessageMaster___);
  if ( !Instance )
    goto LABEL_76;
  v84 = v24;
  v80 = quest_info_k__BackingField;
  v81 = AreaBoardInfo_k__BackingField;
  Instance = BoardMessageMaster__GetDataCondCheck((BoardMessageMaster_o *)Instance, warId, checkTime, 0LL);
  if ( !Instance )
    goto LABEL_76;
  v27 = *((_QWORD *)Instance + 3);
  v28 = (BoardMessageEntity_array *)Instance;
  v83 = warId;
  if ( (int)v27 >= 1 )
  {
    v29 = 0;
    while ( 1 )
    {
      v30 = v28->m_Items[v29];
      if ( !v30 )
        break;
      switch ( v30->fields.referenceType )
      {
        case 1:
          message = v30->fields.message;
          closedAt = v30->fields.closedAt;
          mInfoTextList = this->fields.mInfoTextList;
          v34 = (QuestBoardInformaionText_o *)sub_B2C42C(QuestBoardInformaionText_TypeInfo);
          v36 = (EventMissionProgressRequest_Argument_ProgressData_o *)v34;
          v37 = v30;
          v38 = message;
          v39 = closedAt;
          goto LABEL_28;
        case 2:
          Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                       v84,
                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !Instance )
            goto LABEL_76;
          Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                       v30->fields.referenceId,
                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_30;
          v47 = *((int *)Instance + 39);
          break;
        case 3:
          Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                       v84,
                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !Instance )
            goto LABEL_76;
          Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                       v30->fields.referenceId,
                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_30;
          v47 = *((int *)Instance + 40);
          break;
        case 4:
          Instance = v82;
          if ( !v82 )
            goto LABEL_76;
          Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       v82,
                       v30->fields.referenceId,
                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_30;
          v47 = *((_QWORD *)Instance + 12);
          break;
        case 5:
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_76;
          Data = EventCampaignMaster__getData(MasterData_WarQuestSelectionMaster, v30->fields.referenceId, 0LL);
          v41 = v30->fields.message;
          v42 = v30->fields.closedAt;
          v43 = Data;
          v44 = this->fields.mInfoTextList;
          v45 = (QuestBoardInformaionText_o *)sub_B2C42C(QuestBoardInformaionText_TypeInfo);
          QuestBoardInformaionText___ctor_29599500(v45, v30, v41, v42, checkTime, v43, v46);
          if ( !v44 )
            goto LABEL_76;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v44,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v45,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
          warId = v83;
          goto LABEL_30;
        default:
          goto LABEL_30;
      }
      if ( v47 - checkTime >= 0 )
      {
        v48 = v30->fields.message;
        mInfoTextList = this->fields.mInfoTextList;
        v34 = (QuestBoardInformaionText_o *)sub_B2C42C(QuestBoardInformaionText_TypeInfo);
        v36 = (EventMissionProgressRequest_Argument_ProgressData_o *)v34;
        v37 = v30;
        v38 = v48;
        v39 = v47;
LABEL_28:
        QuestBoardInformaionText___ctor_29599500(v34, v37, v38, v39, checkTime, 0LL, v35);
        if ( !mInfoTextList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mInfoTextList,
          v36,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
      }
LABEL_30:
      if ( (int)++v29 >= (int)v27 )
        goto LABEL_33;
      if ( v29 >= v28->max_length )
        goto LABEL_77;
    }
LABEL_76:
    sub_B2C434(Instance, v21);
  }
LABEL_33:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Instance )
    goto LABEL_76;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         warId,
         (const MethodInfo_24E412C *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
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
  if ( v81->fields.eventEnt )
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
      eventEnt = v81->fields.eventEnt;
      if ( !eventEnt )
        goto LABEL_76;
      OverrideQuestMessage = QuestBoardListViewItemDraw__FindOverrideQuestMessage(
                               (QuestBoardListViewItemDraw_o *)Instance,
                               v28,
                               eventEnt->fields.id,
                               v50);
      if ( v81->fields.eventEnt )
      {
        v53 = OverrideQuestMessage;
        Instance = (void *)EventEntity__IsEventPeriod(v81->fields.eventEnt, checkTime, 0LL);
        if ( !v53 && ((unsigned __int8)Instance & 1) != 0 )
        {
          v54 = *(_QWORD *)&v28->max_length;
          if ( v54 )
          {
            if ( !(_DWORD)v54 )
              goto LABEL_77;
            v55 = v28->m_Items[0];
          }
          else
          {
            v55 = 0LL;
          }
          v56 = this->fields.mInfoTextList;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v57 = LocalizationManager__Get((System_String_o *)StringLiteral_13407/*"TIME_REST_QUEST_BOARD_EVENT"*/, 0LL);
          endTime = v80->fields.endTime;
          v59 = (QuestBoardInformaionText_o *)sub_B2C42C(QuestBoardInformaionText_TypeInfo);
          QuestBoardInformaionText___ctor_29599500(v59, v55, v57, endTime, checkTime, 0LL, v60);
          if ( !v56 )
            goto LABEL_76;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v56,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v59,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
          warId = v83;
        }
      }
    }
  }
  Instance = v82;
  if ( !v82 )
    goto LABEL_76;
  Instance = EventMaster__GetEnableEntityList((EventMaster_o *)v82, 7, 1, 0LL);
  if ( !Instance )
    goto LABEL_76;
  v61 = *((_DWORD *)Instance + 6);
  v62 = Instance;
  if ( v61 >= 1 )
  {
    v63 = 0;
    while ( v63 < v61 )
    {
      v64 = (EventEntity_o *)*((_QWORD *)v62 + (int)v63 + 4);
      if ( !v64 || !MasterData_WarQuestSelectionMaster )
        goto LABEL_76;
      id = v64->fields.id;
      Instance = EventCampaignMaster__getData(MasterData_WarQuestSelectionMaster, id, 0LL);
      if ( Instance )
      {
        v66 = Instance;
        Instance = (void *)EventCampaignEntity__isDispWarId((EventCampaignEntity_o *)Instance, warId, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          v68 = v66[5];
          v69 = QuestBoardListViewItemDraw__FindOverrideQuestMessage(
                  (QuestBoardListViewItemDraw_o *)Instance,
                  v28,
                  id,
                  v67);
          Instance = (void *)CombineAdjustTarget__isTerminalExposable(v68, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 && !v69 )
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v70 = LocalizationManager__Get((System_String_o *)StringLiteral_13405/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, 0LL);
            EventName = (Il2CppObject *)EventEntity__getEventName(v64, 0LL);
            v72 = System_String__Format_44301068(v70, EventName, (Il2CppObject *)StringLiteral_23539/*"{0}"*/, 0LL);
            v73 = this->fields.mInfoTextList;
            v74 = EventEntity__GetEndTime(v64, 0, 0LL);
            v75 = (QuestBoardInformaionText_o *)sub_B2C42C(QuestBoardInformaionText_TypeInfo);
            v89.fields.r = 0.0;
            v89.fields.g = 0.0;
            v89.fields.b = 0.0;
            v89.fields.a = 0.0;
            v88.fields.x = 0.0;
            v88.fields.y = 0.0;
            v88.fields.z = 0.0;
            v76 = (EventMissionProgressRequest_Argument_ProgressData_o *)v75;
            QuestBoardInformaionText___ctor(v75, v72, v74, 1, 0, v89, -1, 0, v88, 1, v78, 0LL, v79);
            if ( !v73 )
              goto LABEL_76;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v73,
              v76,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
            warId = v83;
          }
        }
      }
      v61 = *((_DWORD *)v62 + 6);
      if ( (int)++v63 >= v61 )
        return;
    }
LABEL_77:
    v77 = sub_B2C460(Instance);
    sub_B2C400(v77, 0LL);
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
  QuestBoardListViewItemDraw___c__DisplayClass336_0_o *v30; // x25
  WarQuestSelectionMaster_o *isTerminalExposable; // x0
  QuestBoardListViewManager_c *v32; // x1
  int target; // w26
  QuestBoardInformaionText_o *v34; // x27
  int32_t id; // w27
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  struct ListViewManager_o *manager; // x8
  __int64 v38; // x10
  const MethodInfo *v39; // x3
  System_Collections_Generic_List_UserOwnItemInfo__o *ContinueItemInfoList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v41; // x21
  peRenderTexture_ChangeLayerObject_o *v42; // x0
  UserOwnItemInfo_o *v43; // x20
  System_String_o *v44; // x21
  Il2CppObject *v45; // x0
  System_String_o *v46; // x21
  System_String_o *EventName; // x22
  int32_t ImageId; // w20
  TerminalBoardOptionTextData_o *dispTextExtend; // x23
  int64_t v50; // x19
  System_String_o *v51; // x0
  System_String_o *v52; // x20
  int64_t EndTime; // x19
  QuestPhaseEntity_o *Entity; // x0
  struct System_Int32_array *targetIds; // x8
  int32_t consumeType; // w8
  System_String_o *v57; // x20
  Il2CppObject *v58; // x0
  System_String_o *v59; // x20
  int64_t v60; // x19
  QuestBoardInformaionText_o *v61; // x0
  int v62; // s0
  int v63; // s1
  int v64; // s2
  int v65; // s3
  int v66; // s4
  int v67; // s5
  int v68; // s6
  QuestBoardInformaionText_o *result; // x0
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x21
  System_String_o *detail; // x23
  int64_t v72; // x0
  int64_t checkTime; // x24
  int64_t v74; // x25
  QuestBoardInformaionText_o *v75; // x22
  const MethodInfo *v76; // x6
  QuestBoardListViewItemDraw_o *v77; // x0
  QuestEntity_o *v78; // x1
  EventCampaignEntity_o *v79; // x2
  bool v80; // w3
  int32_t *v81; // x4
  int32_t *v82; // x5
  const MethodInfo *v83; // x6
  EventCampaignEntity_o *v84; // [xsp+0h] [xbp-70h]
  const MethodInfo *v85; // [xsp+10h] [xbp-60h]
  int32_t Num_k__BackingField; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v87; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Vector3_o v88; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v89; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v90; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_418A2A9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventCampaignReleaseMaster___, questEntity);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestPhaseMaster___, v13);
    sub_B2C35C(&DataManager_TypeInfo, v14);
    sub_B2C35C(&int_TypeInfo, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserOwnItemInfo__Find__, v17);
    sub_B2C35C(&LocalizationManager_TypeInfo, v18);
    sub_B2C35C(&Method_System_Predicate_UserOwnItemInfo___ctor__, v19);
    sub_B2C35C(&System_Predicate_UserOwnItemInfo__TypeInfo, v20);
    sub_B2C35C(&QuestBoardInformaionText_TypeInfo, v21);
    sub_B2C35C(&QuestBoardListViewManager_TypeInfo, v22);
    sub_B2C35C(&TerminalBoardOptionTextData_TypeInfo, v23);
    sub_B2C35C(&Method_QuestBoardListViewItemDraw___c__DisplayClass336_0__CreateQuestBoardInformationText_b__0__, v24);
    sub_B2C35C(&QuestBoardListViewItemDraw___c__DisplayClass336_0_TypeInfo, v25);
    sub_B2C35C(&StringLiteral_23539/*"{0}"*/, v26);
    sub_B2C35C(&StringLiteral_1/*""*/, v27);
    sub_B2C35C(&StringLiteral_13405/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, v28);
    sub_B2C35C(&StringLiteral_13406/*"TIME_REST_QUEST_BOARD_CAMPAIGN_WITH_ITEM"*/, v29);
    byte_418A2A9 = 1;
  }
  v30 = (QuestBoardListViewItemDraw___c__DisplayClass336_0_o *)sub_B2C42C(QuestBoardListViewItemDraw___c__DisplayClass336_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass336_0___ctor(v30, 0LL);
  if ( !eventCampaignEnt )
    goto LABEL_61;
  target = eventCampaignEnt->fields.target;
  isTerminalExposable = (WarQuestSelectionMaster_o *)CombineAdjustTarget__isTerminalExposable(target, 0LL);
  v34 = 0LL;
  if ( ((unsigned __int8)isTerminalExposable & 1) == 0 )
    return v34;
  if ( !eventEnt )
    goto LABEL_61;
  id = eventEnt->fields.id;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  isTerminalExposable = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventCampaignReleaseMaster___);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_61;
  manager = mListViewObject->fields.manager;
  if ( !manager )
    goto LABEL_61;
  v32 = QuestBoardListViewManager_TypeInfo;
  v38 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v38
    && (QuestBoardListViewManager_c *)manager->klass->_2.typeHierarchy[v38 - 1] == QuestBoardListViewManager_TypeInfo )
  {
    if ( !v30 )
      goto LABEL_61;
    v30->fields.checkTime = (int64_t)manager[1].fields.rightItem;
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
        v51 = LocalizationManager__Get((System_String_o *)StringLiteral_13405/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, 0LL);
        v52 = System_String__Format_44301068(
                v51,
                (Il2CppObject *)eventCampaignEnt->fields.entryCondMessage,
                (Il2CppObject *)StringLiteral_23539/*"{0}"*/,
                0LL);
        EndTime = EventEntity__GetEndTime(eventEnt, 0, 0LL);
        v34 = (QuestBoardInformaionText_o *)sub_B2C42C(QuestBoardInformaionText_TypeInfo);
        v90.fields.r = 0.0;
        v90.fields.g = 0.0;
        v90.fields.b = 0.0;
        v90.fields.a = 0.0;
        v88.fields.x = 0.0;
        v88.fields.y = 0.0;
        v88.fields.z = 0.0;
        QuestBoardInformaionText___ctor(v34, v52, EndTime, 0, 0, v90, -1, 0, v88, 0, v84, 0LL, v85);
        return v34;
      }
      return 0LL;
    }
    if ( target == 28 )
    {
      ContinueItemInfoList = UserOwnItemDetail__GetContinueItemInfoList(0LL);
      v41 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_UserOwnItemInfo__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v41,
        (Il2CppObject *)v30,
        Method_QuestBoardListViewItemDraw___c__DisplayClass336_0__CreateQuestBoardInformationText_b__0__,
        (const MethodInfo_2952BE4 *)Method_System_Predicate_UserOwnItemInfo___ctor__);
      if ( ContinueItemInfoList )
      {
        v42 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)ContinueItemInfoList,
                (System_Predicate_T__o *)v41,
                (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_UserOwnItemInfo__Find__);
        if ( v42 )
        {
          v43 = (UserOwnItemInfo_o *)v42;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v44 = LocalizationManager__Get((System_String_o *)StringLiteral_13406/*"TIME_REST_QUEST_BOARD_CAMPAIGN_WITH_ITEM"*/, 0LL);
          Num_k__BackingField = v43->fields._Num_k__BackingField;
          v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Num_k__BackingField);
          v46 = System_String__Format_44301068(v44, v45, (Il2CppObject *)StringLiteral_23539/*"{0}"*/, 0LL);
          EventName = EventEntity__getEventName(eventEnt, 0LL);
          ImageId = UserOwnItemInfo__get_ImageId(v43, 0LL);
          dispTextExtend = (TerminalBoardOptionTextData_o *)sub_B2C42C(TerminalBoardOptionTextData_TypeInfo);
          TerminalBoardOptionTextData___ctor(dispTextExtend, EventName, v46, ImageId, 0LL);
          v50 = EventEntity__GetEndTime(eventEnt, 0, 0LL);
          v34 = (QuestBoardInformaionText_o *)sub_B2C42C(QuestBoardInformaionText_TypeInfo);
          v89.fields.r = 0.0;
          v89.fields.g = 0.0;
          v89.fields.b = 0.0;
          v89.fields.a = 0.0;
          v87.fields.x = 0.0;
          v87.fields.y = 0.0;
          v87.fields.z = 0.0;
          QuestBoardInformaionText___ctor(v34, v46, v50, 1, 0, v89, -1, 0, v87, 0, v84, dispTextExtend, v85);
          return v34;
        }
        return 0LL;
      }
LABEL_61:
      sub_B2C434(isTerminalExposable, v32);
    }
    if ( target == 25 && !isQuestNoneCleared )
      return 0LL;
    if ( target > 24 )
    {
      if ( target == 26 )
      {
        mInfoTextList = this->fields.mInfoTextList;
        detail = eventEnt->fields.detail;
        v72 = EventEntity__GetEndTime(eventEnt, 0, 0LL);
        checkTime = v30->fields.checkTime;
        v74 = v72;
        v75 = (QuestBoardInformaionText_o *)sub_B2C42C(QuestBoardInformaionText_TypeInfo);
        QuestBoardInformaionText___ctor_29599924(v75, eventEnt, detail, v74, checkTime, eventCampaignEnt, v76);
        if ( !mInfoTextList )
          goto LABEL_61;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mInfoTextList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v75,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
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
              v39) )
        return 0LL;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      isTerminalExposable = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
    v57 = LocalizationManager__Get((System_String_o *)StringLiteral_13405/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, 0LL);
    v58 = (Il2CppObject *)EventEntity__getEventName(eventEnt, 0LL);
    v59 = System_String__Format_44301068(v57, v58, (Il2CppObject *)StringLiteral_23539/*"{0}"*/, 0LL);
    v60 = EventEntity__GetEndTime(eventEnt, 0, 0LL);
    v61 = (QuestBoardInformaionText_o *)sub_B2C42C(QuestBoardInformaionText_TypeInfo);
    v34 = v61;
    v62 = 0;
    v63 = 0;
    v64 = 0;
    v65 = 0;
    v66 = 0;
    v67 = 0;
    v68 = 0;
    QuestBoardInformaionText___ctor(
      v61,
      v59,
      v60,
      1,
      0,
      *(UnityEngine_Color_o *)&v62,
      -1,
      0,
      *(UnityEngine_Vector3_o *)&v66,
      0,
      v84,
      0LL,
      v85);
    return v34;
  }
  sub_B2C728(manager);
  QuestBoardListViewItemDraw__CalcQuestCost(v77, v78, v79, v80, v81, v82, v83);
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
    sub_B2C434(this, boardMessageData);
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
  __int64 Instance; // x0
  __int64 v19; // x1
  System_String_o *age; // x19
  Il2CppObject *PrioredName; // x0
  int32_t WarID_ByQuestID; // w20
  int64_t OpenedAt; // x20
  System_Object_array *v25; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x21
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x21
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x21
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x21
  __int64 v55; // x0
  __int64 v56; // x0
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

  if ( (byte_418A293 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ClosedMessageMaster___, questInfo);
    sub_B2C35C(&Method_DataManager_GetMaster_WarMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__, v8);
    sub_B2C35C(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v9);
    sub_B2C35C(&int_TypeInfo, v10);
    sub_B2C35C(&long_TypeInfo, v11);
    sub_B2C35C(&NetworkManager_TypeInfo, v12);
    sub_B2C35C(&object___TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B2C35C(&Method_SingletonTemplate_QuestTree__get_Instance__, v15);
    sub_B2C35C(&SingletonTemplate_QuestTree__TypeInfo, v16);
    sub_B2C35C(&StringLiteral_1/*""*/, v17);
    byte_418A293 = 1;
  }
  v62 = 0LL;
  entity = 0LL;
  dateData = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ClosedMessageMaster___);
  if ( !questInfo || !Instance )
    goto LABEL_43;
  age = (System_String_o *)StringLiteral_1/*""*/;
  Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               &entity,
               questInfo->fields.questReleaseClosedID,
               (const MethodInfo_24E412C *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
  if ( (Instance & 1) != 0 )
  {
    if ( entity )
    {
      age = entity->fields.age;
      goto LABEL_9;
    }
LABEL_43:
    sub_B2C434(Instance, v19);
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
      Instance = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance )
        goto LABEL_43;
      WarID_ByQuestID = QuestTree__GetWarID_ByQuestID(
                          (QuestTree_o *)Instance,
                          questInfo->fields.questReleaseTargetID,
                          0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Instance = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarMaster___);
      if ( !Instance )
        goto LABEL_43;
      if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
              &v62,
              WarID_ByQuestID,
              (const MethodInfo_24E412C *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
        return age;
      Instance = (__int64)v62;
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
      dateData = NetworkManager__getServerDateTime_26271756(OpenedAt, 0LL).fields.dateData;
      v25 = (System_Object_array *)sub_B2C374(object___TypeInfo, 4LL);
      v64.fields.dateData = (uint64_t)&dateData;
      LODWORD(questReleaseValue) = System_DateTime__get_Month(v64, 0LL);
      Instance = j_il2cpp_value_box_0(int_TypeInfo, &questReleaseValue);
      if ( !v25 )
        goto LABEL_43;
      v32 = (System_Int32_array **)Instance;
      if ( Instance )
      {
        Instance = sub_B2C41C(Instance, v25->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_45;
      }
      if ( !v25->max_length )
        goto LABEL_44;
      v25->m_Items[0] = (Il2CppObject *)v32;
      sub_B2C2F8((BattleServantConfConponent_o *)v25->m_Items, v32, v26, v27, v28, v29, v30, v31);
      v65.fields.dateData = (uint64_t)&dateData;
      Day = System_DateTime__get_Day(v65, 0LL);
      Instance = j_il2cpp_value_box_0(int_TypeInfo, &Day);
      v39 = (System_Int32_array **)Instance;
      if ( Instance )
      {
        Instance = sub_B2C41C(Instance, v25->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_45;
      }
      if ( v25->max_length <= 1 )
        goto LABEL_44;
      v25->m_Items[1] = (Il2CppObject *)v39;
      sub_B2C2F8((BattleServantConfConponent_o *)&v25->m_Items[1], v39, v33, v34, v35, v36, v37, v38);
      v66.fields.dateData = (uint64_t)&dateData;
      Hour = System_DateTime__get_Hour(v66, 0LL);
      Instance = j_il2cpp_value_box_0(int_TypeInfo, &Hour);
      v46 = (System_Int32_array **)Instance;
      if ( Instance )
      {
        Instance = sub_B2C41C(Instance, v25->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_45;
      }
      if ( v25->max_length <= 2 )
        goto LABEL_44;
      v25->m_Items[2] = (Il2CppObject *)v46;
      sub_B2C2F8((BattleServantConfConponent_o *)&v25->m_Items[2], v46, v40, v41, v42, v43, v44, v45);
      v67.fields.dateData = (uint64_t)&dateData;
      Minute = System_DateTime__get_Minute(v67, 0LL);
      Instance = j_il2cpp_value_box_0(int_TypeInfo, &Minute);
      v53 = (System_Int32_array **)Instance;
      if ( Instance )
      {
        Instance = sub_B2C41C(Instance, v25->obj.klass->_1.element_class);
        if ( !Instance )
        {
LABEL_45:
          v56 = sub_B2C454(Instance);
          sub_B2C400(v56, 0LL);
        }
      }
      if ( v25->max_length <= 3 )
      {
LABEL_44:
        v55 = sub_B2C460(Instance);
        sub_B2C400(v55, 0LL);
      }
      v25->m_Items[3] = (Il2CppObject *)v53;
      sub_B2C2F8((BattleServantConfConponent_o *)&v25->m_Items[3], v53, v47, v48, v49, v50, v51, v52);
      return System_String__Format_44384256(age, v25, 0LL);
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
  if ( (byte_418A2BB & 1) == 0 )
  {
    sub_B2C35C(&QuestBoardListViewItemDraw_TypeInfo, method);
    byte_418A2BB = 1;
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
  return System_String__Concat_44305532(QUEST_BOARD_AP_SPNAME_PREFIX, v4, 0LL);
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
  QuestBoardListViewManager_c *v30; // x1
  const MethodInfo *v31; // x6
  System_Collections_Generic_IEnumerable_T__o *CampaignTextListByWarGroupMaster; // x0
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  int64_t *manager; // x8
  __int64 v35; // x10
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  QuestReleaseOverwriteEntity_o *v37; // x20
  int64_t endedAt; // x20
  System_String_o *EventName; // x21
  System_String_o *v40; // x0
  System_String_o *v41; // x21
  QuestBoardInformaionText_o *v42; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v43; // x22
  QuestBoardListViewItemDraw_o *v45; // x0
  System_Collections_Generic_List_MapControl_QuestInfo__o *v46; // x1
  int32_t v47; // w2
  bool v48; // w3
  const MethodInfo *v49; // x4
  EventCampaignEntity_o *v50; // [xsp+0h] [xbp-60h]
  const MethodInfo *v51; // [xsp+10h] [xbp-50h]
  WarEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v53; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_418A2A6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventMaster___, *(_QWORD *)&questId);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___, v13);
    sub_B2C35C(&DataManager_TypeInfo, v14);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__, v18);
    sub_B2C35C(&System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo, v19);
    sub_B2C35C(&LocalizationManager_TypeInfo, v20);
    sub_B2C35C(&QuestBoardInformaionText_TypeInfo, v21);
    sub_B2C35C(&QuestBoardListViewManager_TypeInfo, v22);
    sub_B2C35C(&StringLiteral_23539/*"{0}"*/, v23);
    sub_B2C35C(&StringLiteral_80/*" "*/, v24);
    sub_B2C35C(&StringLiteral_13410/*"TIME_REST_STRING"*/, v25);
    byte_418A2A6 = 1;
  }
  entity = 0LL;
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
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
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
  CampaignTextListByWarGroupMaster = (System_Collections_Generic_IEnumerable_T__o *)QuestBoardListViewItemDraw__GetCampaignTextListByWarGroupMaster(
                                                                                      this,
                                                                                      questId,
                                                                                      phase,
                                                                                      v27,
                                                                                      costCalcVal,
                                                                                      fixedVal,
                                                                                      v31);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v26,
    CampaignTextListByWarGroupMaster,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_27;
  manager = (int64_t *)mListViewObject->fields.manager;
  if ( !manager )
    goto LABEL_27;
  v30 = QuestBoardListViewManager_TypeInfo;
  v35 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*manager + 300) >= (unsigned int)v35
    && *(QuestBoardListViewManager_c **)(*(_QWORD *)(*manager + 200) + 8 * v35 - 8) == QuestBoardListViewManager_TypeInfo )
  {
    if ( !CampaignTextListByEventQuestMaster )
      goto LABEL_27;
    EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                               (QuestReleaseOverwriteMaster_o *)CampaignTextListByEventQuestMaster,
                               questId,
                               manager[71],
                               0LL);
    if ( !EntityByQuestIdAndTime )
      return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v26;
    v37 = EntityByQuestIdAndTime;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventMaster___);
    if ( !CampaignTextListByEventQuestMaster )
      goto LABEL_27;
    if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            (DataMasterBase_WarMaster__WarEntity__int__o *)CampaignTextListByEventQuestMaster,
            &entity,
            v37->fields.eventId,
            (const MethodInfo_24E412C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v26;
    CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)entity;
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
        v40 = LocalizationManager__Get((System_String_o *)StringLiteral_13410/*"TIME_REST_STRING"*/, 0LL);
        v41 = System_String__Concat_44308944(
                EventName,
                (System_String_o *)StringLiteral_80/*" "*/,
                v40,
                (System_String_o *)StringLiteral_23539/*"{0}"*/,
                0LL);
        v42 = (QuestBoardInformaionText_o *)sub_B2C42C(QuestBoardInformaionText_TypeInfo);
        v54.fields.r = 0.0;
        v54.fields.g = 0.0;
        v54.fields.b = 0.0;
        v54.fields.a = 0.0;
        v53.fields.x = 0.0;
        v53.fields.y = 0.0;
        v53.fields.z = 0.0;
        v43 = (EventMissionProgressRequest_Argument_ProgressData_o *)v42;
        QuestBoardInformaionText___ctor(v42, v41, endedAt, 0, 0, v54, -1, 0, v53, 1, v50, 0LL, v51);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v26,
          v43,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
      }
      return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v26;
    }
LABEL_27:
    sub_B2C434(CampaignTextListByEventQuestMaster, v30);
  }
  sub_B2C728(manager);
  return (System_Collections_Generic_List_QuestBoardInformaionText__o *)QuestBoardListViewItemDraw__HasNewQuestInWar(
                                                                          v45,
                                                                          v46,
                                                                          v47,
                                                                          v48,
                                                                          v49);
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
  void *Instance; // x0
  QuestBoardListViewManager_c *v34; // x1
  DataManager_o *v35; // x20
  EventQuestMaster_o *MasterData_WarQuestSelectionMaster; // x19
  EventCampaignMaster_o *v37; // x28
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  QuestEntity_o *v39; // x23
  __int64 v40; // x9
  EventCampaignReleaseMaster_o *v41; // x27
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v42; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v43; // x26
  int monitor; // w8
  unsigned int v45; // w22
  EventEntity_o *v46; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v47; // x20
  __int64 v48; // x27
  __int64 v49; // x0
  __int64 v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **current; // x1
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v58; // x20
  EventEntity_o *v59; // x0
  const MethodInfo *v60; // x6
  EventMissionProgressRequest_Argument_ProgressData_o *QuestBoardInformationText; // x1
  System_Collections_Generic_List_EventCampaignEntity__o *v62; // x20
  __int64 v63; // x25
  __int64 v64; // x0
  __int64 v65; // x1
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Int32_array **v72; // x1
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v73; // x20
  QuestBoardListViewItemDraw_o *v74; // x0
  const MethodInfo *v75; // x6
  int v76; // w19
  System_Collections_Generic_List_QuestBoardInformaionText__o *result; // x0
  __int64 v78; // x0
  void *v79; // x0
  int v80; // w1
  __int64 v81; // x19
  System_Collections_Generic_List_EventCampaignEntity__o *campaignList; // [xsp+8h] [xbp-C8h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v83; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_T__o v88; // [xsp+38h] [xbp-98h] BYREF
  int v89[2]; // [xsp+50h] [xbp-80h]
  int v90; // [xsp+58h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v91; // [xsp+60h] [xbp-70h] BYREF

  EnabledEventCampaignForQuest = (System_Collections_Generic_IEnumerable_TSource__o *)(unsigned int)questId;
  if ( (byte_418A2A7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventCampaignMaster___, *(_QWORD *)&questId);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventQuestMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, v11);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v12);
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v16);
    sub_B2C35C(&Method_System_Func_EventEntity__bool___ctor__, v17);
    sub_B2C35C(&System_Func_EventEntity__bool__TypeInfo, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__, v23);
    sub_B2C35C(&System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo, v24);
    sub_B2C35C(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v25);
    sub_B2C35C(&QuestBoardListViewManager_TypeInfo, v26);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_B2C35C(
      &Method_QuestBoardListViewItemDraw___c__DisplayClass334_0__GetCampaignTextListByEventQuestMaster_b__0__,
      v28);
    sub_B2C35C(&QuestBoardListViewItemDraw___c__DisplayClass334_0_TypeInfo, v29);
    sub_B2C35C(
      &Method_QuestBoardListViewItemDraw___c__DisplayClass334_1__GetCampaignTextListByEventQuestMaster_b__1__,
      v30);
    sub_B2C35C(&QuestBoardListViewItemDraw___c__DisplayClass334_1_TypeInfo, v31);
    byte_418A2A7 = 1;
  }
  memset(&v91, 0, sizeof(v91));
  v90 = 0;
  v83 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v83,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
  v32 = &Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  v35 = (DataManager_o *)Instance;
  MasterData_WarQuestSelectionMaster = (EventQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventQuestMaster___);
  v37 = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   v35,
                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               v35,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_41;
  Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               (int32_t)EnabledEventCampaignForQuest,
               (const MethodInfo_24E40D0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_41;
  v39 = (QuestEntity_o *)Instance;
  Instance = mListViewObject->fields.manager;
  if ( !Instance )
    goto LABEL_41;
  v34 = QuestBoardListViewManager_TypeInfo;
  v40 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v40
    && *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v40 - 8) == QuestBoardListViewManager_TypeInfo )
  {
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_41;
    EnabledEventCampaignForQuest = (System_Collections_Generic_IEnumerable_TSource__o *)EventQuestMaster__GetEnabledEventCampaignForQuest(
                                                                                          MasterData_WarQuestSelectionMaster,
                                                                                          (int32_t)EnabledEventCampaignForQuest,
                                                                                          phase,
                                                                                          *((_QWORD *)Instance + 71),
                                                                                          0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_41;
    v41 = (EventCampaignReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
    v42 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v42,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    v43 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v43,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    if ( !EnabledEventCampaignForQuest )
      goto LABEL_41;
    monitor = (int)EnabledEventCampaignForQuest[1].monitor;
    if ( monitor >= 1 )
    {
      v45 = 0;
      while ( 1 )
      {
        if ( v45 >= monitor )
        {
          v78 = sub_B2C460(Instance);
          sub_B2C400(v78, 0LL);
        }
        v46 = (EventEntity_o *)*((_QWORD *)&EnabledEventCampaignForQuest[2].klass + (int)v45);
        if ( !v46 || !v37 )
          break;
        Instance = EventCampaignMaster__getData(v37, v46->fields.id, 0LL);
        if ( Instance )
        {
          if ( !v42 )
            break;
          v47 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v42,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
          if ( !v41 )
            break;
          Instance = (void *)EventCampaignReleaseMaster__isRelease(
                               v41,
                               v47->fields.missionTargetId,
                               v47->fields.missionConditionDetailId,
                               0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v43 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v43,
              v47,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
          }
        }
        monitor = (int)EnabledEventCampaignForQuest[1].monitor;
        if ( (int)++v45 >= monitor )
          goto LABEL_24;
      }
LABEL_41:
      sub_B2C434(Instance, v34);
    }
LABEL_24:
    Instance = EventCampaignMaster__CheckCampaignGrouping(
                 (System_Collections_Generic_List_EventCampaignEntity__o *)v42,
                 0LL);
    if ( !Instance )
      goto LABEL_41;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v88,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v37 = (EventCampaignMaster_o *)&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__;
    v32 = &Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___;
    v91 = v88;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v91,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
    {
      v48 = sub_B2C42C(QuestBoardListViewItemDraw___c__DisplayClass334_0_TypeInfo);
      QuestBoardListViewItemDraw___c__DisplayClass334_0___ctor(
        (QuestBoardListViewItemDraw___c__DisplayClass334_0_o *)v48,
        0LL);
      if ( !v48 )
        sub_B2C434(v49, v50);
      current = (System_Int32_array **)v91.fields.current;
      *(_QWORD *)(v48 + 16) = v91.fields.current;
      sub_B2C2F8((BattleServantConfConponent_o *)(v48 + 16), current, v51, v52, v53, v54, v55, v56);
      v58 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_EventEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v58,
        (Il2CppObject *)v48,
        Method_QuestBoardListViewItemDraw___c__DisplayClass334_0__GetCampaignTextListByEventQuestMaster_b__0__,
        (const MethodInfo_2711C04 *)Method_System_Func_EventEntity__bool___ctor__);
      v59 = (EventEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                               EnabledEventCampaignForQuest,
                               (System_Func_TSource__bool__o *)v58,
                               (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___);
      QuestBoardInformationText = (EventMissionProgressRequest_Argument_ProgressData_o *)QuestBoardListViewItemDraw__CreateQuestBoardInformationText(
                                                                                           this,
                                                                                           v39,
                                                                                           v59,
                                                                                           *(EventCampaignEntity_o **)(v48 + 16),
                                                                                           phase,
                                                                                           isQuestNoneCleared,
                                                                                           v60);
      if ( QuestBoardInformationText )
      {
        if ( !v83 )
          sub_B2C434(0LL, QuestBoardInformationText);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v83,
          QuestBoardInformationText,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
      }
    }
    v89[0] = 308;
    v90 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v91,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    v62 = (System_Collections_Generic_List_EventCampaignEntity__o *)v43;
    v90 = 0;
  }
  else
  {
    sub_B2C728(Instance);
    v62 = campaignList;
    if ( v80 != 1 )
      _Unwind_Resume(v79);
    v81 = *(_QWORD *)__cxa_begin_catch(v79);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v91,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    if ( v81 )
      sub_B2C400(v81, 0LL);
  }
  Instance = EventCampaignMaster__CheckCampaignGrouping(v62, 0LL);
  if ( !Instance )
    goto LABEL_41;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v88,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v91 = v88;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v91,
            (const MethodInfo_20EA42C *)v37->klass) )
  {
    v63 = sub_B2C42C(QuestBoardListViewItemDraw___c__DisplayClass334_1_TypeInfo);
    QuestBoardListViewItemDraw___c__DisplayClass334_1___ctor(
      (QuestBoardListViewItemDraw___c__DisplayClass334_1_o *)v63,
      0LL);
    if ( !v63 )
      sub_B2C434(v64, v65);
    v72 = (System_Int32_array **)v91.fields.current;
    *(_QWORD *)(v63 + 16) = v91.fields.current;
    sub_B2C2F8((BattleServantConfConponent_o *)(v63 + 16), v72, v66, v67, v68, v69, v70, v71);
    v73 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_EventEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v73,
      (Il2CppObject *)v63,
      Method_QuestBoardListViewItemDraw___c__DisplayClass334_1__GetCampaignTextListByEventQuestMaster_b__1__,
      (const MethodInfo_2711C04 *)Method_System_Func_EventEntity__bool___ctor__);
    v74 = (QuestBoardListViewItemDraw_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                            EnabledEventCampaignForQuest,
                                            (System_Func_TSource__bool__o *)v73,
                                            (const MethodInfo_1A9113C *)*v32);
    QuestBoardListViewItemDraw__CalcQuestCost(
      v74,
      v39,
      *(EventCampaignEntity_o **)(v63 + 16),
      isQuestNoneCleared,
      costCalcVal,
      fixedVal,
      v75);
  }
  v89[0] = 414;
  v76 = ++v90;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v91,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  result = (System_Collections_Generic_List_QuestBoardInformaionText__o *)v83;
  if ( v76 && v89[v76 - 1] == 414 )
    v90 = v76 - 1;
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
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  DataManager_o *v22; // x20
  EventMaster_o *MasterData_WarQuestSelectionMaster; // x19
  EventCampaignMaster_o *v24; // x24
  QuestEntity_o *v25; // x26
  DataManager_o *v26; // x27
  int32_t spotId; // w19
  int32_t v28; // w28
  int datalist; // w8
  unsigned int v30; // w22
  bool v31; // w25
  EventEntity_o *v32; // x19
  struct System_Byte_array *masterDataBytes; // x8
  EventCampaignEntity_o *v34; // x20
  const MethodInfo *v35; // x6
  QuestBoardInformaionText_o *QuestBoardInformationText; // x19
  const MethodInfo *v37; // x6
  __int64 v39; // x0
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_418A2A8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventCampaignMaster___, *(_QWORD *)&questId);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_SpotMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_WarGroupMaster___, v12);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v13);
    sub_B2C35C(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__, v16);
    sub_B2C35C(&System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_418A2A8 = 1;
  }
  entity = 0LL;
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  v22 = Instance;
  MasterData_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          Instance,
                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
  v24 = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   v22,
                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                v22,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                questId,
                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_29;
  v25 = (QuestEntity_o *)Instance;
  Instance = (DataManager_o *)EventMaster__GetEnableEntityList(MasterData_WarQuestSelectionMaster, 7, 1, 0LL);
  if ( !v25 )
    goto LABEL_29;
  v26 = Instance;
  spotId = v25->fields.spotId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                &entity,
                                spotId,
                                (const MethodInfo_24E412C *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_29;
    v28 = *(&entity->fields.id + 1);
    if ( v28 )
    {
      if ( !v26 )
        goto LABEL_29;
      datalist = (int)v26->fields.datalist;
      if ( datalist >= 1 )
      {
        v30 = 0;
        v31 = isQuestNoneCleared;
        while ( 1 )
        {
          if ( v30 >= datalist )
          {
            v39 = sub_B2C460(Instance);
            sub_B2C400(v39, 0LL);
          }
          v32 = (EventEntity_o *)*((_QWORD *)&v26->fields.lookup + (int)v30);
          if ( !v32 || !v24 )
            break;
          Instance = (DataManager_o *)EventCampaignMaster__getData(v24, v32->fields.id, 0LL);
          if ( Instance )
          {
            masterDataBytes = Instance->fields.masterDataBytes;
            v34 = (EventCampaignEntity_o *)Instance;
            if ( !masterDataBytes )
              break;
            if ( *(_QWORD *)&masterDataBytes->max_length )
            {
              Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                break;
              Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            Instance,
                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarGroupMaster___);
              if ( !Instance )
                break;
              Instance = (DataManager_o *)WarGroupMaster__HasEntity(
                                            (WarGroupMaster_o *)Instance,
                                            v28,
                                            v25->fields.afterClear,
                                            v25->fields.type,
                                            v34->fields.targetIds,
                                            0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                QuestBoardInformationText = QuestBoardListViewItemDraw__CreateQuestBoardInformationText(
                                              this,
                                              v25,
                                              v32,
                                              v34,
                                              phase,
                                              v31,
                                              v35);
                QuestBoardListViewItemDraw__CalcQuestCost(
                  (QuestBoardListViewItemDraw_o *)QuestBoardInformationText,
                  v25,
                  v34,
                  v31,
                  costCalcVal,
                  fixedVal,
                  v37);
                if ( QuestBoardInformationText )
                {
                  if ( !v19 )
                    break;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v19,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)QuestBoardInformationText,
                    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
                }
              }
            }
          }
          datalist = (int)v26->fields.datalist;
          if ( (int)++v30 >= datalist )
            return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v19;
        }
LABEL_29:
        sub_B2C434(Instance, v21);
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
  System_String_o *v9; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  Il2CppObject *BattleName; // x1

  if ( (byte_418A28F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, questEnt);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    this = (QuestBoardListViewItemDraw_o *)sub_B2C35C(&StringLiteral_23539/*"{0}"*/, v8);
    byte_418A28F = 1;
  }
  if ( !questEnt )
    goto LABEL_13;
  this = (QuestBoardListViewItemDraw_o *)QuestEntity__getQuestName(questEnt, 0LL);
  v9 = (System_String_o *)this;
  if ( (unsigned int)questType <= 5 && ((1 << questType) & 0x2C) != 0 )
  {
    if ( !this )
      goto LABEL_13;
    if ( System_String__Contains((System_String_o *)this, (System_String_o *)StringLiteral_23539/*"{0}"*/, 0LL) )
    {
      this = (QuestBoardListViewItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)this,
                                                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
        this = (QuestBoardListViewItemDraw_o *)QuestEntity__getServantId(questEnt, 0LL);
        if ( MasterData_WarQuestSelectionMaster )
        {
          this = (QuestBoardListViewItemDraw_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                   MasterData_WarQuestSelectionMaster,
                                                   (int32_t)this,
                                                   (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( this )
          {
            BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)this, 0, -1, 0LL);
            return System_String__Format(v9, BattleName, 0LL);
          }
        }
      }
LABEL_13:
      sub_B2C434(this, questEnt);
    }
  }
  return v9;
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
  __int64 v14; // x1
  int32_t v15; // w2
  __int64 v16; // x21
  EventAddEntity_o *OverwriteEventAddEntity; // x0
  WarEntity_o *Entity; // x0
  QuestBoardListViewItemDraw_c *v19; // x8
  System_String_o *EVENT_WAR_SUBFOLDER_SPNAME_PREFIX; // x20
  Il2CppObject *v21; // x0
  QuestBoardListViewItemDraw_c *v23; // x0
  System_String_o *EVENT_WAR_SPNAME_PREFIX; // x19
  System_String_o *v25; // x0
  int32_t v26; // [xsp+8h] [xbp-28h] BYREF
  int32_t overwriteId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_418A297 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventAddMaster___, eventEnt);
    sub_B2C35C(&Method_DataManager_GetMaster_WarMaster___, v8);
    sub_B2C35C(&DataManager_TypeInfo, v9);
    sub_B2C35C(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v10);
    sub_B2C35C(&int_TypeInfo, v11);
    sub_B2C35C(&QuestBoardListViewItemDraw_TypeInfo, v12);
    byte_418A297 = 1;
  }
  overwriteId = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventAddMaster___);
  if ( !eventEnt || !Master_WarQuestSelectionMaster )
    goto LABEL_37;
  if ( isActiveEventWar )
    v15 = 4;
  else
    v15 = 5;
  if ( isActiveEventWar )
    v16 = 60LL;
  else
    v16 = 56LL;
  OverwriteEventAddEntity = EventAddMaster__getOverwriteEventAddEntity(
                              Master_WarQuestSelectionMaster,
                              eventEnt->fields.id,
                              v15,
                              0LL);
  overwriteId = *(_DWORD *)((char *)&eventEnt->klass + v16);
  if ( OverwriteEventAddEntity )
    overwriteId = OverwriteEventAddEntity->fields.overwriteId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_37;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
             warId,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( Entity
    && Entity->fields.parentWarId
    && Entity->fields.eventId == eventEnt->fields.id
    && WarEntity__HasFlag(Entity, 0x80000, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      Master_WarQuestSelectionMaster = (EventAddMaster_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                             (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                             warId,
                                                             (const MethodInfo_24E40D0 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
      if ( Master_WarQuestSelectionMaster )
      {
        overwriteId = WarEntity__GetPrioredBannerId((WarEntity_o *)Master_WarQuestSelectionMaster, 0LL);
        v19 = QuestBoardListViewItemDraw_TypeInfo;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v19 = QuestBoardListViewItemDraw_TypeInfo;
        }
        EVENT_WAR_SUBFOLDER_SPNAME_PREFIX = v19->static_fields->EVENT_WAR_SUBFOLDER_SPNAME_PREFIX;
        v26 = overwriteId;
        v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
        return System_String__Format(EVENT_WAR_SUBFOLDER_SPNAME_PREFIX, v21, 0LL);
      }
    }
LABEL_37:
    sub_B2C434(Master_WarQuestSelectionMaster, v14);
  }
  v23 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v23 = QuestBoardListViewItemDraw_TypeInfo;
  }
  EVENT_WAR_SPNAME_PREFIX = v23->static_fields->EVENT_WAR_SPNAME_PREFIX;
  v25 = System_Int32__ToString((int32_t)&overwriteId, 0LL);
  return System_String__Concat_44305532(EVENT_WAR_SPNAME_PREFIX, v25, 0LL);
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

  if ( (byte_418A28E & 1) == 0 )
  {
    sub_B2C35C(&QuestBoardListViewItemDraw_TypeInfo, *(_QWORD *)&questType);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_418A28E = 1;
  }
  p_QUEST_MAIN_FACE_MASK_SPNAME = (System_String_o **)&StringLiteral_1/*""*/;
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

  if ( (byte_418A2A4 & 1) == 0 )
  {
    sub_B2C35C(&QuestBoardListViewItemDraw_TypeInfo, *(_QWORD *)&phaseType);
    byte_418A2A4 = 1;
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

  if ( (byte_418A2A3 & 1) == 0 )
  {
    sub_B2C35C(&QuestBoardListViewItemDraw_TypeInfo, *(_QWORD *)&phaseType);
    sub_B2C35C(&StringLiteral_1/*""*/, v12);
    byte_418A2A3 = 1;
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
    p_msPhaseSprName_LoopFirstOff = (System_String_o **)&StringLiteral_1/*""*/;
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

  if ( (byte_418A290 & 1) == 0 )
  {
    sub_B2C35C(&QuestBoardListViewItemDraw_TypeInfo, questEnt);
    sub_B2C35C(&StringLiteral_19593/*"img_questtxt_free"*/, v6);
    sub_B2C35C(&StringLiteral_19592/*"img_questtxt_event"*/, v7);
    this = (QuestBoardListViewItemDraw_o *)sub_B2C35C(&StringLiteral_1/*""*/, v8);
    byte_418A290 = 1;
  }
  if ( !questEnt )
    sub_B2C434(this, questEnt);
  iconId = questEnt->fields.iconId;
  v9 = (_DWORD)questEnt + 68;
  if ( iconId < 1 )
  {
    if ( questType == 5 )
    {
      v15 = &StringLiteral_19592/*"img_questtxt_event"*/;
    }
    else if ( questType == 2 )
    {
      v15 = &StringLiteral_19593/*"img_questtxt_free"*/;
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
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v11 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_ICON_SPNAME_PREFIX = v11->static_fields->QUEST_BOARD_ICON_SPNAME_PREFIX;
    v13 = System_Int32__ToString(v9, 0LL);
    return System_String__Concat_44305532(QUEST_BOARD_ICON_SPNAME_PREFIX, v13, 0LL);
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

  if ( (byte_418A291 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, questEnt);
    this = (QuestBoardListViewItemDraw_o *)sub_B2C35C(&QuestBoardListViewItemDraw_TypeInfo, v4);
    byte_418A291 = 1;
  }
  if ( !questEnt )
    sub_B2C434(this, questEnt);
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
    return System_String__Concat_44305532(QUEST_BOARD_ICON_SPNAME_PREFIX, v9, 0LL);
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
    return QuestEntity__getRecommendLv_23878512(questEnt, questPhase, 0LL);
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
    sub_B2C434(this, status);
  if ( status - 1 >= mStatusSp->max_length )
  {
    v5 = sub_B2C460(this);
    sub_B2C400(v5, 0LL);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  QuestBoardListViewItemDraw___c__DisplayClass297_0_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v15; // x20

  if ( (byte_418A287 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_MapControl_QuestInfo___, questList);
    sub_B2C35C(&Method_System_Func_MapControl_QuestInfo__bool___ctor__, v8);
    sub_B2C35C(&System_Func_MapControl_QuestInfo__bool__TypeInfo, v9);
    sub_B2C35C(&Method_QuestBoardListViewItemDraw___c__DisplayClass297_0__HasNewQuestInWar_b__0__, v10);
    sub_B2C35C(&QuestBoardListViewItemDraw___c__DisplayClass297_0_TypeInfo, v11);
    byte_418A287 = 1;
  }
  v12 = (QuestBoardListViewItemDraw___c__DisplayClass297_0_o *)sub_B2C42C(QuestBoardListViewItemDraw___c__DisplayClass297_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass297_0___ctor(v12, 0LL);
  if ( !v12 )
    sub_B2C434(v13, v14);
  v12->fields.warId = warId;
  v12->fields.isMainInterlude = isMainInterlude;
  v15 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_MapControl_QuestInfo__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v15,
    (Il2CppObject *)v12,
    Method_QuestBoardListViewItemDraw___c__DisplayClass297_0__HasNewQuestInWar_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_MapControl_QuestInfo__bool___ctor__);
  return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
           (System_Collections_Generic_List_T__o *)questList,
           (System_Func_T__bool__o *)v15,
           (const MethodInfo_17266AC *)Method_BasicHelper_Any_MapControl_QuestInfo___);
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

  if ( (byte_418A2A2 & 1) == 0 )
  {
    sub_B2C35C(&QuestBoardListViewItemDraw_TypeInfo, isDoubleItemConsume);
    byte_418A2A2 = 1;
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
    sub_B2C434(mPhaseObj, isDoubleItemConsume);
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
    sub_B2C434(this, questBoardItem);
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
    sub_B2C434(mNextSp, method);
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)mNextSp, 0LL);
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

  if ( (byte_418A296 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_QuestBehaviorMaster___, questInfo);
    this = (QuestBoardListViewItemDraw_o *)sub_B2C35C(&DataManager_TypeInfo, v4);
    byte_418A296 = 1;
  }
  if ( !questInfo )
    sub_B2C434(this, questInfo);
  questPhase = questInfo->fields.questPhase;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(questInfo, 0LL);
  v7 = UnityEngine_Mathf__Min_40694704(questPhase + 1, PhaseMax, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestBehaviorMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
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

  if ( (byte_418A2B8 & 1) == 0 )
  {
    sub_B2C35C(&QuestBoardListViewItemDraw_TypeInfo, method);
    byte_418A2B8 = 1;
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

  if ( (byte_418A2B9 & 1) == 0 )
  {
    sub_B2C35C(&QuestBoardListViewItemDraw_TypeInfo, method);
    byte_418A2B9 = 1;
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

  if ( (byte_418A2AE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, method);
    byte_418A2AE = 1;
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
  DataManager_o *Instance; // x0
  __int64 v12; // x1

  if ( (byte_418A28D & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&warId);
    sub_B2C35C(&Method_DataManager_GetMasterData_WarMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_418A28D = 1;
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
         (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___) )
  {
    return 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      warId,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__)) == 0LL )
  {
    sub_B2C434(Instance, v12);
  }
  return LODWORD(Instance->fields.masterLoadThreads) == 0;
}


bool __fastcall QuestBoardListViewItemDraw__IsMultiInfoText(
        QuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x8

  if ( (byte_418A2AD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, method);
    byte_418A2AD = 1;
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
    sub_B2C434(0LL, method);
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
  __int64 v11; // x1
  __int64 v12; // x20
  WebViewManager_o *Instance; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  WarEntity_o *v21; // x0
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v29; // x21

  if ( (byte_418A286 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_MapControl_QuestInfo___, questList);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestMaster___, v6);
    sub_B2C35C(&Method_System_Func_MapControl_QuestInfo__bool___ctor__, v7);
    sub_B2C35C(&System_Func_MapControl_QuestInfo__bool__TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B2C35C(&Method_QuestBoardListViewItemDraw___c__DisplayClass296_0__IsPurchasedByRarePrism_b__0__, v10);
    sub_B2C35C(&QuestBoardListViewItemDraw___c__DisplayClass296_0_TypeInfo, v11);
    byte_418A286 = 1;
  }
  v12 = sub_B2C42C(QuestBoardListViewItemDraw___c__DisplayClass296_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass296_0___ctor(
    (QuestBoardListViewItemDraw___c__DisplayClass296_0_o *)v12,
    0LL);
  if ( !v12 )
    goto LABEL_9;
  *(_QWORD *)(v12 + 16) = warEnt;
  sub_B2C2F8((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)warEnt, v15, v16, v17, v18, v19, v20);
  v21 = *(WarEntity_o **)(v12 + 16);
  if ( v21 && WarEntity__IsShop(v21, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
      *(_QWORD *)(v12 + 24) = MasterData_WarQuestSelectionMaster;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)(v12 + 24),
        MasterData_WarQuestSelectionMaster,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      v29 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_MapControl_QuestInfo__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v29,
        (Il2CppObject *)v12,
        Method_QuestBoardListViewItemDraw___c__DisplayClass296_0__IsPurchasedByRarePrism_b__0__,
        (const MethodInfo_2711C04 *)Method_System_Func_MapControl_QuestInfo__bool___ctor__);
      return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
               (System_Collections_Generic_List_T__o *)questList,
               (System_Func_T__bool__o *)v29,
               (const MethodInfo_17266AC *)Method_BasicHelper_Any_MapControl_QuestInfo___);
    }
LABEL_9:
    sub_B2C434(Instance, v14);
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
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  RestrictionEntity_array *RestrictionList; // x21
  QuestBoardListViewItemDraw___c_c *v17; // x0
  struct QuestBoardListViewItemDraw___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__338_0; // x22
  Il2CppObject *v20; // x23
  struct QuestBoardListViewItemDraw___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x22
  __int64 v29; // x22
  _BOOL4 v30; // w22
  bool v31; // w8
  QuestRestrictionInfoEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418A2AA & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_RestrictionEntity___, questEntity);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestRestrictionMaster___, v7);
    sub_B2C35C(&Method_System_Func_RestrictionEntity__bool___ctor__, v8);
    sub_B2C35C(&System_Func_RestrictionEntity__bool__TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B2C35C(&Method_QuestBoardListViewItemDraw___c__IsValidSupportSelection_b__338_0__, v12);
    sub_B2C35C(&QuestBoardListViewItemDraw___c_TypeInfo, v13);
    byte_418A2AA = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestRestrictionMaster___);
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
      v17 = QuestBoardListViewItemDraw___c_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw___c_TypeInfo);
        v17 = QuestBoardListViewItemDraw___c_TypeInfo;
      }
      static_fields = v17->static_fields;
      _9__338_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__338_0;
      if ( !_9__338_0 )
      {
        if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v17);
          static_fields = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
        }
        v20 = (Il2CppObject *)static_fields->__9;
        _9__338_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_RestrictionEntity__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__338_0,
          v20,
          Method_QuestBoardListViewItemDraw___c__IsValidSupportSelection_b__338_0__,
          (const MethodInfo_2711C04 *)Method_System_Func_RestrictionEntity__bool___ctor__);
        v21 = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
        v21->__9__338_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__338_0;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v21->__9__338_0,
          (System_Int32_array **)_9__338_0,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27);
      }
      LOBYTE(RestrictionList) = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
                                  (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)RestrictionList,
                                  (System_Func_T__bool__o *)_9__338_0,
                                  (const MethodInfo_1726758 *)Method_BasicHelper_Any_RestrictionEntity___);
    }
  }
  else
  {
    LOBYTE(RestrictionList) = 0;
  }
  v28 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v28 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v29 = **(_QWORD **)(v28 + 192);
  if ( (*(_BYTE *)(v29 + 306) & 1) == 0 )
    sub_AC505C(v29);
  Instance = **(DataManager_o ***)(v29 + 184);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___),
        !questEntity)
    || !Instance )
  {
LABEL_40:
    sub_B2C434(Instance, v15);
  }
  if ( !QuestRestrictionInfoMaster__TryGetEntity(
          (QuestRestrictionInfoMaster_o *)Instance,
          &entity,
          questEntity->fields.id,
          phase,
          0LL) )
  {
    if ( !QuestEntity__HasFlag_23879348(questEntity, 0x80000LL, phase, 0LL)
      && !QuestEntity__HasFlag_23879348(questEntity, 0x100000LL, phase, 0LL)
      && !QuestEntity__HasFlag_23879348(questEntity, 0x10000000LL, phase, 0LL) )
    {
      LOBYTE(v30) = questEntity->fields.type != 7;
      if ( ((unsigned __int8)RestrictionList & 1) == 0 )
        goto LABEL_31;
      goto LABEL_36;
    }
LABEL_35:
    LOBYTE(v30) = 0;
    if ( ((unsigned __int8)RestrictionList & 1) == 0 )
      goto LABEL_31;
LABEL_36:
    v31 = 0;
    return v31 && v30;
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
  v30 = !QuestRestrictionInfoEntity__HasFlag(entity, 0x10000000LL, 0LL);
  if ( ((unsigned __int8)RestrictionList & 1) != 0 )
    goto LABEL_36;
LABEL_31:
  v31 = !QuestEntity__HasFlag_23879348(questEntity, 2LL, phase, 0LL);
  return v31 && v30;
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
  CommonUI_o *Instance; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
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
  AssetLoader_LoadEndDataHandler_o *v48; // x21
  int32_t v49; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_418A2BC & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, questEntity);
    sub_B2C35C(&int_TypeInfo, v7);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v8);
    sub_B2C35C(&QuestBoardListViewItemDraw_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B2C35C(&Method_QuestBoardListViewItemDraw___c__DisplayClass371_0__LoadBoardIconTexture_b__0__, v11);
    sub_B2C35C(&QuestBoardListViewItemDraw___c__DisplayClass371_0_TypeInfo, v12);
    byte_418A2BC = 1;
  }
  v13 = sub_B2C42C(QuestBoardListViewItemDraw___c__DisplayClass371_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass371_0___ctor(
    (QuestBoardListViewItemDraw___c__DisplayClass371_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_16;
  *(_QWORD *)(v13 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 32) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 32), (System_Int32_array **)callback, v22, v23, v24, v25, v26, v27);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  v49 = iconId;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49);
  v33 = System_String__Concat(QUEST_BOARD_ICON_TEXTURE_PREFIX, v32, 0LL);
  this->fields.boardIconName = v33;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.boardIconName,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  boardIconName = (System_Int32_array **)this->fields.boardIconName;
  *(_QWORD *)(v13 + 16) = boardIconName;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 16), boardIconName, v41, v42, v43, v44, v45, v46);
  v47 = System_String__Concat_44305532(
          QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH,
          this->fields.boardIconName,
          0LL);
  v48 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v48,
    (Il2CppObject *)v13,
    Method_QuestBoardListViewItemDraw___c__DisplayClass371_0__LoadBoardIconTexture_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v47, v48, 1, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 0, 0LL);
      return;
    }
LABEL_16:
    sub_B2C434(Instance, v15);
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
  bool v9; // w8
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
  char v23; // w21
  __int64 v24; // x0

  if ( (byte_418A2B6 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__, questBoardItem);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&TerminalBannerComponent_TypeInfo, v6);
    byte_418A2B6 = 1;
  }
  if ( this->fields._bannerState_k__BackingField != 2 )
    return;
  IsBanners = (WebViewManager_o *)QuestBoardListViewItemDraw__IsBanners(this, questBoardItem, method);
  if ( ((unsigned __int8)IsBanners & 1) == 0 )
    return;
  if ( this->fields.mIsPressed )
    goto LABEL_12;
  IsBanners = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !IsBanners )
    goto LABEL_41;
  IsBanners = (WebViewManager_o *)WebViewManager__get_IsBusy(IsBanners, 0LL);
  if ( ((unsigned __int8)IsBanners & 1) != 0 )
    goto LABEL_12;
  IsBanners = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !IsBanners )
    goto LABEL_41;
  IsBanners = (WebViewManager_o *)CommonUI__IsActive_UserPresentBoxWindow((CommonUI_o *)IsBanners, 0LL);
  if ( ((unsigned __int8)IsBanners & 1) != 0 )
    goto LABEL_12;
  IsBanners = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !IsBanners )
    goto LABEL_41;
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
          {
LABEL_42:
            v24 = sub_B2C460(IsBanners);
            sub_B2C400(v24, 0LL);
          }
          IsBanners = (WebViewManager_o *)mTerminalBanners->m_Items[v21];
          if ( !IsBanners )
            break;
          TerminalBannerComponent__StartAutoMoveL((TerminalBannerComponent_o *)IsBanners, 0LL);
          if ( (int)++v21 >= this->fields.mBannerCount )
            goto LABEL_37;
        }
LABEL_41:
        sub_B2C434(IsBanners, v8);
      }
LABEL_37:
      this->fields.mBannerAutoMoveTimeOld = realtimeSinceStartup;
      v23 = v19 ^ 1;
      IsBanners = (WebViewManager_o *)TerminalBannerComponent_TypeInfo;
      if ( (BYTE3(TerminalBannerComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalBannerComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalBannerComponent_TypeInfo);
        IsBanners = (WebViewManager_o *)TerminalBannerComponent_TypeInfo;
      }
      this->fields.mBannerAutoMoveTimeInterval = *(float *)(*(_QWORD *)&IsBanners[1].fields.isButtonEnable + 12LL);
      v9 = v23 & 1;
    }
    else
    {
      v9 = 1;
    }
  }
  this->fields.mIsEnableBannerAutoMoveOld = v9;
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
    v13 = 0LL;
    do
    {
      v14 = this->fields.mTerminalBanners;
      if ( !v14 )
        goto LABEL_41;
      if ( (unsigned int)v13 >= v14->max_length )
        goto LABEL_42;
      v15 = &v14->obj.klass + v13;
      v16 = (TerminalBannerComponent_o *)v15[4];
      if ( !v16 )
        goto LABEL_41;
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

  if ( (byte_418A27C & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418A27C = 1;
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
      sub_B2C434(0LL, v4);
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
  UnityEngine_Vector2_o ScreenPosition_28395408; // kr00_8
  float v10; // s0
  float v11; // s1
  const MethodInfo *v12; // x3

  v7 = this;
  if ( (byte_418A2B2 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_B2C35C(&CTouch_TypeInfo, questBoardItem);
    byte_418A2B2 = 1;
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
          ScreenPosition_28395408 = CTouch__getScreenPosition_28395408(mUICamera, 0LL);
          v10 = vabds_f32(v7->fields.mPressPos.fields.x, ScreenPosition_28395408.fields.x);
          v11 = vabds_f32(v7->fields.mPressPos.fields.y, ScreenPosition_28395408.fields.y);
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
        sub_B2C434(this, questBoardItem);
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
          v9 = sub_B2C460(IsBanners);
          sub_B2C400(v9, 0LL);
        }
        IsBanners = mTerminalBanners->m_Items[v7];
        if ( !IsBanners )
LABEL_10:
          sub_B2C434(IsBanners, v5);
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
  if ( (byte_418A2B1 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_B2C35C(&CTouch_TypeInfo, questBoardItem);
    byte_418A2B1 = 1;
  }
  if ( questBoardItem && dispMode && questBoardItem->fields._quest_info_k__BackingField )
  {
    v8->fields.mIsPressed = 1;
    if ( !questBoardManager || (this = (QuestBoardListViewItemDraw_o *)questBoardManager->fields.scrollView) == 0LL )
      sub_B2C434(this, questBoardItem);
    if ( !UIScrollView__IsLimitOverPosition((UIScrollView_o *)this, 0LL) )
    {
      mUICamera = questBoardManager->fields.mUICamera;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v8->fields.mPressPos = CTouch__getScreenPosition_28395408(mUICamera, 0LL);
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
          v9 = sub_B2C460(IsBanners);
          sub_B2C400(v9, 0LL);
        }
        IsBanners = mTerminalBanners->m_Items[v6];
        if ( !IsBanners )
LABEL_10:
          sub_B2C434(IsBanners, v5);
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
      sub_B2C434(scrollView, v8);
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

  if ( (byte_418A2BD & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&QuestBoardListViewItemDraw_TypeInfo, v3);
    byte_418A2BD = 1;
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
    v5 = System_String__Concat_44305532(
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
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.boardIconAssetData, 0LL, v6, v7, v8, v9, v10, v11);
    this->fields.boardIconName = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.boardIconName, 0LL, v12, v13, v14, v15, v16, v17);
  }
}


void __fastcall QuestBoardListViewItemDraw__ResetBannerAutoMoveTime(
        QuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  TerminalBannerComponent_c *v3; // x0

  if ( (byte_418A2B3 & 1) == 0 )
  {
    sub_B2C35C(&TerminalBannerComponent_TypeInfo, method);
    byte_418A2B3 = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x0
  BattleServantConfConponent_o *p_mInfoTextList; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_418A27E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Clear__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo, v4);
    byte_418A27E = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  if ( mInfoTextList )
  {
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)mInfoTextList,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Clear__);
  }
  else
  {
    p_mInfoTextList = (BattleServantConfConponent_o *)&this->fields.mInfoTextList;
    v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v7,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
    p_mInfoTextList->klass = (BattleServantConfConponent_c *)v7;
    sub_B2C2F8(p_mInfoTextList, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
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

  if ( (byte_418A2AB & 1) == 0 )
  {
    sub_B2C35C(&QuestBoardListViewItemDraw_TypeInfo, questBoardItem);
    byte_418A2AB = 1;
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
    sub_B2C434(mCostObj, questBoardItem);
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

  if ( (byte_418A298 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, *(_QWORD *)&num);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    byte_418A298 = 1;
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
                                        (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v12 = this->fields.mNoticeNumberRoot;
    v13 = v11;
    GameObjectExtensions__SafeSetParent_31331952(v11, v12, 0LL);
    if ( v13 )
    {
      Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v13,
                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
      p_mNoticeNumber->klass = (BattleServantConfConponent_c *)Component_srcLineSprite;
      sub_B2C2F8(p_mNoticeNumber, Component_srcLineSprite, v15, v16, v17, v18, v19, v20);
      goto LABEL_13;
    }
LABEL_15:
    sub_B2C434(mNoticeNumberRoot, *(_QWORD *)&num);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_GameObject_o *IsBlackMarkWithClear; // x0
  __int64 v15; // x1
  int32_t lastQuestId; // w24
  int v17; // w8
  UnityEngine_GameObject_o *blackMarkSpace; // x24
  QuestBoardListViewItemDraw_c *v19; // x0
  UnityEngine_GameObject_o *v20; // x23
  QuestBoardListViewItemDraw_c *v21; // x0
  UnityEngine_Object_o *black_mark_prefab_k__BackingField; // x23
  UnityEngine_Object_o *blackMarkEffect; // x23
  struct UnityEngine_GameObject_o *v24; // x24
  struct UnityEngine_GameObject_o **p_blackMarkEffect; // x23
  struct UnityEngine_GameObject_o **p_blackMarkSpace; // x26
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
  struct UnityEngine_GameObject_o *v50; // x21
  BattleServantConfConponent_o *p_whiteMarkEffect; // x19
  struct UnityEngine_GameObject_o **v52; // x23
  UnityEngine_Transform_o *v53; // x20
  System_Int32_array **v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  UnityEngine_GameObject_o *klass; // x19
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418A280 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, questBoardItem);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450600, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    sub_B2C35C(&QuestBoardListViewItemDraw_TypeInfo, v13);
    byte_418A280 = 1;
  }
  if ( !warEntity )
    return;
  IsBlackMarkWithClear = (UnityEngine_GameObject_o *)WarEntity__IsBlackMarkWithClear(warEntity, 0LL);
  if ( ((unsigned __int8)IsBlackMarkWithClear & 1) != 0 )
  {
    lastQuestId = warEntity->fields.lastQuestId;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsBlackMarkWithClear = (UnityEngine_GameObject_o *)CondType__IsQuestClear_25746984(lastQuestId, -1, 0, 0LL);
    v17 = 0;
    if ( ((unsigned __int8)IsBlackMarkWithClear & 1) != 0 )
    {
      blackMarkSpace = this->fields.blackMarkSpace;
      v19 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v19 = QuestBoardListViewItemDraw_TypeInfo;
      }
      GameObjectExtensions__SetLocalPosition(blackMarkSpace, v19->static_fields->BLACK_MARK_OBJ_POS, 0LL);
      v17 = 1;
    }
    if ( isBlackMarkOnly )
    {
LABEL_14:
      v20 = this->fields.blackMarkSpace;
      v21 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v21 = QuestBoardListViewItemDraw_TypeInfo;
      }
      GameObjectExtensions__SetLocalPosition(v20, v21->static_fields->BLACK_MARK_OBJ_POS_CENTER, 0LL);
      if ( !questBoardItem )
        goto LABEL_78;
      goto LABEL_22;
    }
  }
  else
  {
    v17 = 0;
    if ( isBlackMarkOnly )
      goto LABEL_14;
  }
  if ( !v17 )
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
      v24 = questBoardItem->fields._black_mark_prefab_k__BackingField;
      p_blackMarkEffect = &this->fields.blackMarkEffect;
      p_blackMarkSpace = &this->fields.blackMarkSpace;
      transform = UnityEngine_GameObject__get_transform(IsBlackMarkWithClear, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v28 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                     (UILabel_o *)v24,
                                     transform,
                                     (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
      *p_blackMarkEffect = (struct UnityEngine_GameObject_o *)v28;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.blackMarkEffect, v28, v29, v30, v31, v32, v33, v34);
      v35 = *p_blackMarkEffect;
      zero = UnityEngine_Vector3__get_zero(0LL);
      GameObjectExtensions__SetLocalPosition(v35, zero, 0LL);
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
  v36 = warEntity->fields.lastQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestClear_25746984(v36, -1, 0, 0LL) )
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
    IsBlackMarkWithClear = (UnityEngine_GameObject_o *)WarEntity__IsDispWhiteMarkUnderBoard(warEntity, 0LL);
    if ( ((unsigned __int8)IsBlackMarkWithClear & 1) == 0 )
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
      IsBlackMarkWithClear = this->fields.blackMarkSpace;
      if ( !IsBlackMarkWithClear )
        goto LABEL_78;
      v50 = questBoardItem->fields._white_mark_prefab_k__BackingField;
      p_whiteMarkEffect = (BattleServantConfConponent_o *)&this->fields.whiteMarkEffect;
      v52 = &this->fields.blackMarkSpace;
      v53 = UnityEngine_GameObject__get_transform(IsBlackMarkWithClear, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v54 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                     (UILabel_o *)v50,
                                     v53,
                                     (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
      p_whiteMarkEffect->klass = (BattleServantConfConponent_c *)v54;
      sub_B2C2F8(p_whiteMarkEffect, v54, v55, v56, v57, v58, v59, v60);
      klass = (UnityEngine_GameObject_o *)p_whiteMarkEffect->klass;
      v63 = UnityEngine_Vector3__get_zero(0LL);
      GameObjectExtensions__SetLocalPosition(klass, v63, 0LL);
    }
    else
    {
      v52 = &this->fields.blackMarkSpace;
    }
    IsBlackMarkWithClear = *v52;
    if ( *v52 )
    {
      UnityEngine_GameObject__SetActive(IsBlackMarkWithClear, 1, 0LL);
      return;
    }
LABEL_78:
    sub_B2C434(IsBlackMarkWithClear, v15);
  }
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

  if ( (byte_418A29B & 1) == 0 )
  {
    sub_B2C35C(&QuestBoardListViewItemDraw_TypeInfo, warEnt);
    byte_418A29B = 1;
  }
  StatusSp = QuestBoardListViewItemDraw__GetStatusSp(this, 2, method);
  if ( !StatusSp )
    sub_B2C434(0LL, v6);
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
  _BOOL4 v33; // w22
  _BOOL4 HasFlag; // w20
  UIWidget_o *v35; // x22
  QuestBoardListViewItemDraw_c *v36; // x8
  int32_t *p_COST_BG_WIDTH_WAR_BOARD; // x8
  QuestConsumeItemEntity_o *v38; // x22
  QuestBoardListViewItemDraw_o **p_mCostLb2; // x21
  intptr_t v40; // w28
  intptr_t m_CachedPtr; // w26
  int bannerId; // w23
  UISprite_o *mCostApSp; // x22
  System_String_o *ApSpriteFileName; // x23
  QuestBoardListViewItemDraw_o *mCostItemIcon1; // x0
  int32_t ActConsume; // w0
  int32_t v47; // w20
  UserGameEntity_o *v48; // x28
  bool v49; // w25
  struct System_Int32_array *v50; // x8
  char v51; // w24
  UnityEngine_GameObject_o *v52; // x23
  QuestBoardListViewItemDraw_c *v53; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Int32_array *v55; // x8
  int32_t v56; // w20
  BalanceConfig_c *v57; // x0
  UIWidget_o *v58; // x23
  UnityEngine_GameObject_o *v59; // x0
  UnityEngine_GameObject_o *v60; // x0
  struct System_Int32_array *v61; // x8
  int v62; // w24
  UISprite_o *v63; // x23
  System_String_o *v64; // x24
  BalanceConfig_c *v65; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  UISprite_o *mCostRpSp; // x22
  __int64 BpExpresssionType; // x20
  __int64 v69; // x8
  struct System_String_array *RP_SPNAME_POINT; // x8
  UserItemMaster_o *Master_WarQuestSelectionMaster; // x27
  DataMasterBase_WarMaster__WarEntity__int__o *v72; // x20
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *v74; // x8
  ItemEntity_o *v75; // x28
  const MethodInfo *v76; // x6
  struct System_Int32_array *nums; // x8
  struct System_Int32_array *v78; // x8
  UIWidget_o *v79; // x28
  struct System_Int32_array *v80; // x8
  struct System_Int32_array *v81; // x8
  const MethodInfo *v82; // x6
  struct System_Int32_array *v83; // x8
  struct System_Int32_array *v84; // x8
  bool v85; // w28
  BalanceConfig_c *v86; // x0
  bool v87; // w25
  UILabel_o *mCostLb1; // x28
  System_String_o *v89; // x0
  const MethodInfo *v90; // x7
  UILabel_o *v91; // x20
  System_String_o *v92; // x0
  const MethodInfo *v93; // x7
  UIWidget_o *v94; // x25
  UserItemMaster_o *v95; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v96; // x25
  struct System_Int32_array *v97; // x8
  struct System_Int32_array *v98; // x8
  ItemEntity_o *v99; // x25
  const MethodInfo *v100; // x6
  struct System_Int32_array *v101; // x8
  struct System_Int32_array *v102; // x8
  UILabel_o *v103; // x26
  System_String_o *v104; // x0
  const MethodInfo *v105; // x7
  UISprite_o *v106; // x22
  struct UIRect_AnchorPoint_o *bottomAnchor; // x8
  UISprite_o *v108; // x23
  struct UIRect_AnchorPoint_o *v109; // x8
  struct System_Int32_array *v110; // x8
  UnityEngine_GameObject_o *v111; // x0
  QuestBoardListViewItemDraw_c *v112; // x8
  UnityEngine_GameObject_o *v113; // x23
  UnityEngine_GameObject_o *v114; // x0
  struct System_Int32_array *v115; // x8
  int32_t v116; // w20
  BalanceConfig_c *v117; // x0
  UIWidget_o *v118; // x23
  UnityEngine_GameObject_o *v119; // x0
  UnityEngine_GameObject_o *v120; // x0
  UnityEngine_GameObject_o *v121; // x0
  QuestBoardListViewItemDraw_c *v122; // x8
  UnityEngine_GameObject_o *v123; // x23
  UnityEngine_GameObject_o *v124; // x0
  UnityEngine_GameObject_o *v125; // x0
  UnityEngine_GameObject_o *v126; // x0
  UnityEngine_GameObject_o *v127; // x0
  struct System_Int32_array *v128; // x8
  UnityEngine_GameObject_o *v129; // x20
  UnityEngine_GameObject_o *v130; // x20
  UnityEngine_GameObject_o *v131; // x20
  UIWidget_o *v132; // x22
  UILabel_o *v133; // x20
  UIWidget_o *v134; // x25
  struct System_Int32_array *v135; // x8
  struct System_Int32_array *v136; // x8
  const MethodInfo *v137; // x6
  struct System_Int32_array *v138; // x8
  struct System_Int32_array *v139; // x8
  __int64 v140; // x0
  __int64 v141; // x0
  bool *v142; // [xsp+8h] [xbp-A8h]
  bool v143; // [xsp+14h] [xbp-9Ch]
  bool *v144; // [xsp+18h] [xbp-98h]
  __int64 v145; // [xsp+20h] [xbp-90h]
  UserItemEntity_o *usrItem; // [xsp+28h] [xbp-88h] BYREF
  UserItemEntity_o *entity; // [xsp+30h] [xbp-80h] BYREF
  int32_t v148; // [xsp+3Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v150; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v151; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v152; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v153; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v154; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v155; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v156; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v157; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v158; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v159; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v160; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v161; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v162; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v163; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v164; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v165; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v166; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v167; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = baseColor.fields.a;
  b = baseColor.fields.b;
  g = baseColor.fields.g;
  r = baseColor.fields.r;
  v21 = this;
  if ( (byte_418A28B & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, questEnt);
    sub_B2C35C(&BalanceConfig_TypeInfo, v22);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UISprite___, v23);
    sub_B2C35C(&Method_DataManager_GetMaster_ItemMaster___, v24);
    sub_B2C35C(&Method_DataManager_GetMaster_UserItemMaster___, v25);
    sub_B2C35C(&DataManager_TypeInfo, v26);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v27);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v28);
    sub_B2C35C(&NetworkManager_TypeInfo, v29);
    this = (QuestBoardListViewItemDraw_o *)sub_B2C35C(&QuestBoardListViewItemDraw_TypeInfo, v30);
    byte_418A28B = 1;
  }
  v148 = 0;
  usrItem = 0LL;
  entity = 0LL;
  if ( !questEnt )
    goto LABEL_436;
  type = questEnt->fields.type;
  *isDoubleItemConsume = 0;
  *isDoubleItemConsumeQp = 0;
  *isTripleItemConsume = 0;
  mCostObj = v21->fields.mCostObj;
  v145 = type;
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
    v33 = !QuestEntity__HasFlag(questEnt, 128LL, 0LL);
    HasFlag = QuestEntity__HasFlag(questEnt, 256LL, 0LL);
  }
  else
  {
    HasFlag = 0;
    LOBYTE(v33) = 1;
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
  v143 = v33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !HasFlag, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostObj;
  if ( !this )
    goto LABEL_436;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           (UnityEngine_GameObject_o *)this,
                                           (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v35 = (UIWidget_o *)this;
  v36 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (_DWORD)v145 == 7 )
  {
    if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v36 = QuestBoardListViewItemDraw_TypeInfo;
    }
    p_COST_BG_WIDTH_WAR_BOARD = &v36->static_fields->COST_BG_WIDTH_WAR_BOARD;
    if ( !v35 )
      goto LABEL_436;
    goto LABEL_27;
  }
  if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v36 = QuestBoardListViewItemDraw_TypeInfo;
  }
  p_COST_BG_WIDTH_WAR_BOARD = &v36->static_fields->COST_BG_WIDTH_SINGLE;
  if ( !v35 )
LABEL_436:
    sub_B2C434(this, questEnt);
LABEL_27:
  UIWidget__set_width(v35, *p_COST_BG_WIDTH_WAR_BOARD, 0LL);
  this = (QuestBoardListViewItemDraw_o *)QuestEntity__getItemConsumeEntity(questEnt, 0LL);
  if ( !v21->fields.mCostBg1 )
    goto LABEL_436;
  v38 = (QuestConsumeItemEntity_o *)this;
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
  v144 = isDoubleItemConsumeQp;
  v142 = isTripleItemConsume;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_436;
  p_mCostLb2 = (QuestBoardListViewItemDraw_o **)&v21->fields.mCostLb2;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  if ( HasFlag )
    goto LABEL_34;
  ActConsume = QuestEntity__getActConsume(questEnt, costCalcVal, 0LL);
  if ( fixedVal >= 0 )
    v47 = fixedVal;
  else
    v47 = ActConsume;
  v148 = v47;
  this = (QuestBoardListViewItemDraw_o *)UserGameMaster__getSelfUserGame(0LL);
  v48 = (UserGameEntity_o *)this;
  switch ( questEnt->fields.consumeType )
  {
    case 1:
      if ( !this )
        goto LABEL_436;
      v49 = v47 > SLODWORD(this->fields.mcBaseP) || v47 > UserGameEntity__getAct((UserGameEntity_o *)this, 0LL);
      mCostLb1 = v21->fields.mCostLb1;
      v89 = System_Int32__ToString((int32_t)&v148, 0LL);
      v160.fields.r = r;
      v160.fields.g = g;
      v160.fields.b = b;
      v160.fields.a = a;
      QuestBoardListViewItemDraw__SetCostLabel(
        (QuestBoardListViewItemDraw_o *)v89,
        mCostLb1,
        v89,
        costCalcVal,
        v160,
        v49,
        isClosed,
        fixedVal >= 0,
        v90);
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
      if ( !byte_4183C64 )
      {
        sub_B2C35C(&BalanceConfig_TypeInfo, questEnt);
        byte_4183C64 = 1;
      }
      v86 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v86 = BalanceConfig_TypeInfo;
      }
      v87 = v47 > v86->static_fields->UerGameRpMax || v47 > UserGameEntity__getRp(v48, 0LL);
      v103 = v21->fields.mCostLb1;
      v104 = System_Int32__ToString((int32_t)&v148, 0LL);
      v163.fields.r = r;
      v163.fields.g = g;
      v163.fields.b = b;
      v163.fields.a = a;
      QuestBoardListViewItemDraw__SetCostLabel(
        (QuestBoardListViewItemDraw_o *)v104,
        v103,
        v104,
        0,
        v163,
        v87,
        isClosed,
        0,
        v105);
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
      if ( !v38 || !QuestConsumeItemEntity__IsAvailableAt(v38, 0, 0LL) )
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
        v38 = 0LL;
LABEL_34:
        v40 = 0;
LABEL_35:
        m_CachedPtr = 0;
        goto LABEL_36;
      }
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserItemMaster___);
      v72 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      this = (QuestBoardListViewItemDraw_o *)NetworkManager__get_UserId(0LL);
      itemIds = v38->fields.itemIds;
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
      v74 = v38->fields.itemIds;
      if ( !v74 )
        goto LABEL_436;
      if ( !v74->max_length )
        goto LABEL_438;
      if ( !v72 )
        goto LABEL_436;
      this = (QuestBoardListViewItemDraw_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                               v72,
                                               v74->m_Items[1],
                                               (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !v21->fields.mCostLb1 )
        goto LABEL_436;
      v75 = (ItemEntity_o *)this;
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)v21->fields.mCostLb1,
                                               0LL);
      if ( !this )
        goto LABEL_436;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      nums = v38->fields.nums;
      if ( !nums )
        goto LABEL_436;
      if ( !nums->max_length )
        goto LABEL_438;
      v158.fields.r = r;
      v158.fields.g = g;
      v158.fields.b = b;
      v158.fields.a = a;
      QuestBoardListViewItemDraw__SetCostLabelItem(
        this,
        v21->fields.mCostLb1,
        nums->m_Items[1],
        entity,
        v75,
        v158,
        isClosed,
        v76);
      v78 = v38->fields.nums;
      if ( !v78 )
        goto LABEL_436;
      if ( !v78->max_length )
        goto LABEL_438;
      this = (QuestBoardListViewItemDraw_o *)System_Int32__ToString((int)v78 + 32, 0LL);
      if ( !this )
        goto LABEL_436;
      m_CachedPtr = this->fields.m_CachedPtr;
      if ( QuestConsumeItemEntity__IsAvailableAt(v38, 1, 0LL) )
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
                                                 (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        v79 = (UIWidget_o *)this;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        }
        if ( !v79 )
          goto LABEL_436;
        UIWidget__set_width(v79, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_DOUBLE, 0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        this = (QuestBoardListViewItemDraw_o *)NetworkManager__get_UserId(0LL);
        v80 = v38->fields.itemIds;
        if ( !v80 )
          goto LABEL_436;
        if ( v80->max_length <= 1 )
          goto LABEL_438;
        this = (QuestBoardListViewItemDraw_o *)UserItemMaster__TryGetEntity(
                                                 Master_WarQuestSelectionMaster,
                                                 &entity,
                                                 (int64_t)this,
                                                 v80->m_Items[2],
                                                 0LL);
        v81 = v38->fields.itemIds;
        if ( !v81 )
          goto LABEL_436;
        if ( v81->max_length <= 1 )
          goto LABEL_438;
        this = (QuestBoardListViewItemDraw_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                 v72,
                                                 v81->m_Items[2],
                                                 (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        v83 = v38->fields.nums;
        if ( !v83 )
          goto LABEL_436;
        if ( v83->max_length <= 1 )
          goto LABEL_438;
        v159.fields.r = r;
        v159.fields.g = g;
        v159.fields.b = b;
        v159.fields.a = a;
        QuestBoardListViewItemDraw__SetCostLabelItem(
          this,
          (UILabel_o *)*p_mCostLb2,
          v83->m_Items[2],
          entity,
          (ItemEntity_o *)this,
          v159,
          isClosed,
          v82);
        v84 = v38->fields.nums;
        if ( !v84 )
          goto LABEL_436;
        if ( v84->max_length <= 1 )
          goto LABEL_438;
        this = (QuestBoardListViewItemDraw_o *)System_Int32__ToString((int)v84 + 36, 0LL);
        if ( !this )
          goto LABEL_436;
        v40 = this->fields.m_CachedPtr;
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
        v40 = 0;
      }
      if ( QuestConsumeItemEntity__IsAvailableAt(v38, 2, 0LL) )
      {
        *isDoubleItemConsume = 0;
        *v142 = 1;
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
                                                 (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        v134 = (UIWidget_o *)this;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        }
        if ( !v134 )
          goto LABEL_436;
        UIWidget__set_width(
          v134,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_TLIPLE_FOR_ALL_ITEM,
          0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        this = (QuestBoardListViewItemDraw_o *)NetworkManager__get_UserId(0LL);
        v135 = v38->fields.itemIds;
        if ( !v135 )
          goto LABEL_436;
        if ( v135->max_length > 2 )
        {
          this = (QuestBoardListViewItemDraw_o *)UserItemMaster__TryGetEntity(
                                                   Master_WarQuestSelectionMaster,
                                                   &entity,
                                                   (int64_t)this,
                                                   v135->m_Items[3],
                                                   0LL);
          v136 = v38->fields.itemIds;
          if ( !v136 )
            goto LABEL_436;
          if ( v136->max_length > 2 )
          {
            this = (QuestBoardListViewItemDraw_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                     v72,
                                                     v136->m_Items[3],
                                                     (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            v138 = v38->fields.nums;
            if ( !v138 )
              goto LABEL_436;
            if ( v138->max_length > 2 )
            {
              v167.fields.r = r;
              v167.fields.g = g;
              v167.fields.b = b;
              v167.fields.a = a;
              QuestBoardListViewItemDraw__SetCostLabelItem(
                this,
                v21->fields.mCostLb3,
                v138->m_Items[3],
                entity,
                (ItemEntity_o *)this,
                v167,
                isClosed,
                v137);
              v139 = v38->fields.nums;
              if ( !v139 )
                goto LABEL_436;
              if ( v139->max_length > 2 )
              {
                this = (QuestBoardListViewItemDraw_o *)System_Int32__ToString((int)v139 + 40, 0LL);
                if ( !this )
                  goto LABEL_436;
                goto LABEL_36;
              }
            }
          }
        }
LABEL_438:
        v140 = sub_B2C460(this);
        sub_B2C400(v140, 0LL);
      }
      this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostLb3;
      if ( !this )
        goto LABEL_436;
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_436;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
LABEL_36:
      if ( v143 )
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
            v106 = v21->fields.mCostApSp;
            if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
              this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
            }
            bottomAnchor = this->fields.mTitleLevelSp[2].fields.bottomAnchor;
            if ( !bottomAnchor )
              goto LABEL_436;
            if ( (unsigned int)v145 < LODWORD(bottomAnchor->fields.relative) )
            {
              if ( !v106 )
                goto LABEL_436;
              UISprite__set_spriteName(v106, *((System_String_o **)&bottomAnchor->fields.rect + v145), 0LL);
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
              v164.fields.r = r;
              v164.fields.g = g;
              v164.fields.b = b;
              v164.fields.a = a;
              UIWidget__set_color((UIWidget_o *)this, v164, 0LL);
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
            v156.fields.r = r;
            v156.fields.g = g;
            v156.fields.b = b;
            v156.fields.a = a;
            UIWidget__set_color((UIWidget_o *)this, v156, 0LL);
            this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostRpPointSp;
            if ( !this )
              goto LABEL_436;
            v157.fields.r = r;
            v157.fields.g = g;
            v157.fields.b = b;
            v157.fields.a = a;
            UIWidget__set_color((UIWidget_o *)this, v157, 0LL);
            v65 = BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v65 = BalanceConfig_TypeInfo;
            }
            static_fields = v65->static_fields;
            this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
            mCostRpSp = v21->fields.mCostRpSp;
            BpExpresssionType = static_fields->BpExpresssionType;
            if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
              this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
            }
            v69 = *(_QWORD *)&this->fields.mTitleLevelSp[1].fields.mType;
            if ( !v69 )
              goto LABEL_436;
            if ( (unsigned int)BpExpresssionType >= *(_DWORD *)(v69 + 24) )
              goto LABEL_438;
            if ( !mCostRpSp )
              goto LABEL_436;
            UISprite__set_spriteName(mCostRpSp, *(System_String_o **)(v69 + 8 * BpExpresssionType + 32), 0LL);
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
            if ( !v38 )
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
            v50 = v38->fields.itemIds;
            if ( !v50 )
              goto LABEL_437;
            if ( !v50->max_length )
              goto LABEL_439;
            mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon1;
            if ( !mCostItemIcon1 )
              goto LABEL_437;
            ItemIconComponent__SetItem((ItemIconComponent_o *)mCostItemIcon1, v50->m_Items[1], -1, 0LL);
            mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon1;
            if ( !mCostItemIcon1 )
              goto LABEL_437;
            v154.fields.r = r;
            v154.fields.g = g;
            v154.fields.b = b;
            v154.fields.a = a;
            ItemIconComponent__SetColor((ItemIconComponent_o *)mCostItemIcon1, v154, 0LL);
            mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)QuestConsumeItemEntity__IsAvailableAt(v38, 1, 0LL);
            if ( !v21->fields.mCostItemIcon2 )
              goto LABEL_437;
            v51 = (char)mCostItemIcon1;
            mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)v21->fields.mCostItemIcon2,
                                                               0LL);
            v52 = (UnityEngine_GameObject_o *)mCostItemIcon1;
            if ( (v51 & 1) != 0 )
            {
              v53 = QuestBoardListViewItemDraw_TypeInfo;
              if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
                v53 = QuestBoardListViewItemDraw_TypeInfo;
              }
              GameObjectExtensions__SetLocalPositionX(
                v52,
                (float)v53->static_fields->COST_2_ICON_NORMAL_POSITION_X,
                0LL);
              mCostItemIcon1 = *p_mCostLb2;
              if ( !*p_mCostLb2 )
                goto LABEL_437;
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostItemIcon1, 0LL);
              GameObjectExtensions__SetLocalPositionX(
                gameObject,
                (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_NORMAL_POSITION_X,
                0LL);
              v55 = v38->fields.itemIds;
              if ( !v55 )
                goto LABEL_437;
              if ( v55->max_length <= 1 )
                goto LABEL_439;
              v56 = v55->m_Items[2];
              v57 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v57 = BalanceConfig_TypeInfo;
              }
              if ( v56 == v57->static_fields->ItemIdQp )
              {
                *v144 = 1;
                mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostObj;
                if ( !mCostItemIcon1 )
                  goto LABEL_437;
                mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   (UnityEngine_GameObject_o *)mCostItemIcon1,
                                                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                v58 = (UIWidget_o *)mCostItemIcon1;
                if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
                }
                if ( !v58 )
                  goto LABEL_437;
                UIWidget__set_width(
                  v58,
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
                                                                   (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
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
                                                                   (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
                if ( !mCostItemIcon1 )
                  goto LABEL_437;
                UISprite__set_spriteName(
                  (UISprite_o *)mCostItemIcon1,
                  QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_QP,
                  0LL);
                mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon2;
                if ( !mCostItemIcon1 )
                  goto LABEL_437;
                v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostItemIcon1, 0LL);
                GameObjectExtensions__SetLocalPositionX(
                  v59,
                  (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_ICON_QP_POSITION_X,
                  0LL);
                mCostItemIcon1 = *p_mCostLb2;
                if ( !*p_mCostLb2 )
                  goto LABEL_437;
                v60 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostItemIcon1, 0LL);
                GameObjectExtensions__SetLocalPositionX(
                  v60,
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
              v61 = v38->fields.itemIds;
              if ( !v61 )
                goto LABEL_437;
              if ( v61->max_length <= 1 )
                goto LABEL_439;
              mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon2;
              if ( !mCostItemIcon1 )
                goto LABEL_437;
              ItemIconComponent__SetItem((ItemIconComponent_o *)mCostItemIcon1, v61->m_Items[2], -1, 0LL);
              mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon2;
              if ( !mCostItemIcon1 )
                goto LABEL_437;
              v155.fields.r = r;
              v155.fields.g = g;
              v155.fields.b = b;
              v155.fields.a = a;
              ItemIconComponent__SetColor((ItemIconComponent_o *)mCostItemIcon1, v155, 0LL);
            }
            else
            {
              if ( !mCostItemIcon1 )
                goto LABEL_437;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mCostItemIcon1, 0, 0LL);
            }
            if ( QuestConsumeItemEntity__IsAvailableAt(v38, 2, 0LL) )
            {
              mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostLb1;
              if ( !mCostItemIcon1 )
                goto LABEL_437;
              v121 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostItemIcon1, 0LL);
              v122 = QuestBoardListViewItemDraw_TypeInfo;
              v123 = v121;
              if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
                v122 = QuestBoardListViewItemDraw_TypeInfo;
              }
              GameObjectExtensions__SetLocalPositionX(
                v123,
                (float)v122->static_fields->COST_1_LABEL_NORMAL_POSITION_X_FOR_ALL_ITEM,
                0LL);
              mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon2;
              if ( !mCostItemIcon1 )
                goto LABEL_437;
              v124 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostItemIcon1, 0LL);
              GameObjectExtensions__SetLocalPositionX(
                v124,
                (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_ICON_NORMAL_POSITION_X_FOR_ALL_ITEM,
                0LL);
              mCostItemIcon1 = *p_mCostLb2;
              if ( !*p_mCostLb2 )
                goto LABEL_437;
              v125 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostItemIcon1, 0LL);
              GameObjectExtensions__SetLocalPositionX(
                v125,
                (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_NORMAL_POSITION_X_FOR_ALL_ITEM,
                0LL);
              mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon3;
              if ( !mCostItemIcon1 )
                goto LABEL_437;
              v126 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostItemIcon1, 0LL);
              GameObjectExtensions__SetLocalPositionX(
                v126,
                (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_3_ICON_NORMAL_POSITION_X_FOR_ALL_ITEM,
                0LL);
              mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostLb3;
              if ( !mCostItemIcon1 )
                goto LABEL_437;
              v127 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostItemIcon1, 0LL);
              GameObjectExtensions__SetLocalPositionX(
                v127,
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
              v128 = v38->fields.itemIds;
              if ( !v128 )
                goto LABEL_437;
              if ( v128->max_length > 2 )
              {
                mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon3;
                if ( !mCostItemIcon1 )
                  goto LABEL_437;
                ItemIconComponent__SetItem((ItemIconComponent_o *)mCostItemIcon1, v128->m_Items[3], -1, 0LL);
                mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon3;
                if ( !mCostItemIcon1 )
                  goto LABEL_437;
LABEL_76:
                v153.fields.r = r;
                v153.fields.g = g;
                v153.fields.b = b;
                v153.fields.a = a;
                ItemIconComponent__SetColor((ItemIconComponent_o *)mCostItemIcon1, v153, 0LL);
                break;
              }
LABEL_439:
              v141 = sub_B2C460(mCostItemIcon1);
              sub_B2C400(v141, 0LL);
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
            v62 = questEnt->fields.bannerId;
            v63 = v21->fields.mCostApSp;
            if ( v62 < 1 )
            {
              if ( !v63 )
                goto LABEL_437;
              UISprite__set_atlas(v21->fields.mCostApSp, v21->fields.mTerminalAtlas, 0LL);
              mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
              v108 = v21->fields.mCostApSp;
              if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
                mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
              }
              v109 = mCostItemIcon1->fields.mTitleLevelSp[2].fields.bottomAnchor;
              if ( !v109 )
                goto LABEL_437;
              if ( (unsigned int)v145 >= LODWORD(v109->fields.relative) )
                goto LABEL_439;
              if ( !v108 )
                goto LABEL_437;
              UISprite__set_spriteName(v108, *((System_String_o **)&v109->fields.rect + v145), 0LL);
            }
            else
            {
              if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
              }
              v64 = QuestBoardListViewItemDraw__GetApSpriteFileName(v62, (const MethodInfo *)questEnt);
              if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !AtlasManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              }
              mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)AtlasManager__SetEventUI(v63, v64, 0LL);
              if ( !v63 )
                goto LABEL_437;
              UnityEngine_Behaviour__set_enabled(
                (UnityEngine_Behaviour_o *)v63,
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
            v165.fields.r = r;
            v165.fields.g = g;
            v165.fields.b = b;
            v165.fields.a = a;
            UIWidget__set_color((UIWidget_o *)mCostItemIcon1, v165, 0LL);
            if ( !v38 )
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
            v110 = v38->fields.itemIds;
            if ( !v110 )
              goto LABEL_437;
            if ( !v110->max_length )
              goto LABEL_439;
            mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon2;
            if ( !mCostItemIcon1 )
              goto LABEL_437;
            ItemIconComponent__SetItem((ItemIconComponent_o *)mCostItemIcon1, v110->m_Items[1], -1, 0LL);
            mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon2;
            if ( !mCostItemIcon1 )
              goto LABEL_437;
            v166.fields.r = r;
            v166.fields.g = g;
            v166.fields.b = b;
            v166.fields.a = a;
            ItemIconComponent__SetColor((ItemIconComponent_o *)mCostItemIcon1, v166, 0LL);
            mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon2;
            if ( !mCostItemIcon1 )
              goto LABEL_437;
            v111 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostItemIcon1, 0LL);
            v112 = QuestBoardListViewItemDraw_TypeInfo;
            v113 = v111;
            if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
              v112 = QuestBoardListViewItemDraw_TypeInfo;
            }
            GameObjectExtensions__SetLocalPositionX(
              v113,
              (float)v112->static_fields->COST_2_ICON_NORMAL_POSITION_X,
              0LL);
            mCostItemIcon1 = *p_mCostLb2;
            if ( !*p_mCostLb2 )
              goto LABEL_437;
            v114 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostItemIcon1, 0LL);
            GameObjectExtensions__SetLocalPositionX(
              v114,
              (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_NORMAL_POSITION_X,
              0LL);
            v115 = v38->fields.itemIds;
            if ( !v115 )
              goto LABEL_437;
            if ( !v115->max_length )
              goto LABEL_439;
            v116 = v115->m_Items[1];
            v117 = BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v117 = BalanceConfig_TypeInfo;
            }
            if ( v116 == v117->static_fields->ItemIdQp )
            {
              *v144 = 1;
              mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostObj;
              if ( !mCostItemIcon1 )
                goto LABEL_437;
              mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 (UnityEngine_GameObject_o *)mCostItemIcon1,
                                                                 (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
              v118 = (UIWidget_o *)mCostItemIcon1;
              if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
              }
              if ( !v118 )
                goto LABEL_437;
              UIWidget__set_width(
                v118,
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
                                                                 (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
              if ( !mCostItemIcon1 )
                goto LABEL_437;
              UISprite__set_spriteName(
                (UISprite_o *)mCostItemIcon1,
                QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_QP,
                0LL);
              mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon2;
              if ( !mCostItemIcon1 )
                goto LABEL_437;
              v119 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostItemIcon1, 0LL);
              GameObjectExtensions__SetLocalPositionX(
                v119,
                (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_ICON_QP_POSITION_X,
                0LL);
              mCostItemIcon1 = *p_mCostLb2;
              if ( !*p_mCostLb2 )
                goto LABEL_437;
              v120 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostItemIcon1, 0LL);
              GameObjectExtensions__SetLocalPositionX(
                v120,
                (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_QP_POSITION_X,
                0LL);
            }
            if ( !QuestConsumeItemEntity__IsAvailableAt(v38, 1, 0LL) )
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
        v152.fields.r = r;
        v152.fields.g = g;
        v152.fields.b = b;
        v152.fields.a = a;
        ItemIconComponent__SetColor((ItemIconComponent_o *)mCostItemIcon1, v152, 0LL);
        if ( v38 && QuestConsumeItemEntity__IsAvailableAt(v38, 1, 0LL) )
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
      v129 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostItemIcon1, 0LL);
      one = UnityEngine_Vector3__get_one(0LL);
      GameObjectExtensions__SetLocalScale(v129, one, 0LL);
      mCostItemIcon1 = *p_mCostLb2;
      if ( !*p_mCostLb2 )
        goto LABEL_437;
      v130 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostItemIcon1, 0LL);
      v150 = UnityEngine_Vector3__get_one(0LL);
      GameObjectExtensions__SetLocalScale(v130, v150, 0LL);
      mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostLb3;
      if ( !mCostItemIcon1 )
        goto LABEL_437;
      v131 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostItemIcon1, 0LL);
      v151 = UnityEngine_Vector3__get_one(0LL);
      GameObjectExtensions__SetLocalScale(v131, v151, 0LL);
      mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
      v132 = (UIWidget_o *)v21->fields.mCostLb1;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      }
      if ( !v132 )
        goto LABEL_437;
      UIWidget__set_width(v132, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_1_LABEL_DEFAULT_WIDTH, 0LL);
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
      if ( !*v144 )
      {
        if ( !*v142 )
          return;
        mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
        v133 = v21->fields.mCostLb1;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        }
        if ( v133 )
        {
          UILabel__set_spacingX(
            v133,
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
                            UILabel__SetCondensedScale_41673556(
                              (UILabel_o *)mCostItemIcon1,
                              QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_WIDTH_FOR_THREE_ITEM,
                              0LL);
                            mCostItemIcon1 = *p_mCostLb2;
                            if ( *p_mCostLb2 )
                            {
                              UILabel__SetCondensedScale_41673556(
                                (UILabel_o *)mCostItemIcon1,
                                QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_WIDTH_FOR_THREE_ITEM,
                                0LL);
                              mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostLb3;
                              if ( mCostItemIcon1 )
                              {
                                UILabel__SetCondensedScale_41673556(
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
        sub_B2C434(mCostItemIcon1, questEnt);
      }
      if ( m_CachedPtr >= 3
        && (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      }
      if ( v40 >= 8
        && (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      }
      return;
    case 4:
      if ( !this )
        goto LABEL_436;
      v85 = v47 > SLODWORD(this->fields.mcBaseP) || v47 > UserGameEntity__getAct((UserGameEntity_o *)this, 0LL);
      v91 = v21->fields.mCostLb1;
      v92 = System_Int32__ToString((int32_t)&v148, 0LL);
      v161.fields.r = r;
      v161.fields.g = g;
      v161.fields.b = b;
      v161.fields.a = a;
      QuestBoardListViewItemDraw__SetCostLabel(
        (QuestBoardListViewItemDraw_o *)v92,
        v91,
        v92,
        costCalcVal,
        v161,
        v85,
        isClosed,
        fixedVal >= 0,
        v93);
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
      if ( v38 && QuestConsumeItemEntity__IsAvailableAt(v38, 0, 0LL) )
      {
        *isDoubleItemConsume = 1;
        this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostObj;
        if ( !this )
          goto LABEL_436;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 (UnityEngine_GameObject_o *)this,
                                                 (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        v94 = (UIWidget_o *)this;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        }
        if ( !v94 )
          goto LABEL_436;
        UIWidget__set_width(v94, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_DOUBLE, 0LL);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        v95 = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserItemMaster___);
        v96 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ItemMaster___);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        this = (QuestBoardListViewItemDraw_o *)NetworkManager__get_UserId(0LL);
        v97 = v38->fields.itemIds;
        if ( !v97 )
          goto LABEL_436;
        if ( v97->max_length )
        {
          if ( !v95 )
            goto LABEL_436;
          this = (QuestBoardListViewItemDraw_o *)UserItemMaster__TryGetEntity(
                                                   v95,
                                                   &usrItem,
                                                   (int64_t)this,
                                                   v97->m_Items[1],
                                                   0LL);
          v98 = v38->fields.itemIds;
          if ( !v98 )
            goto LABEL_436;
          if ( v98->max_length )
          {
            if ( !v96 )
              goto LABEL_436;
            this = (QuestBoardListViewItemDraw_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                     v96,
                                                     v98->m_Items[1],
                                                     (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            if ( !*p_mCostLb2 )
              goto LABEL_436;
            v99 = (ItemEntity_o *)this;
            this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)*p_mCostLb2,
                                                     0LL);
            if ( !this )
              goto LABEL_436;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            v101 = v38->fields.nums;
            if ( !v101 )
              goto LABEL_436;
            if ( v101->max_length )
            {
              v162.fields.r = r;
              v162.fields.g = g;
              v162.fields.b = b;
              v162.fields.a = a;
              QuestBoardListViewItemDraw__SetCostLabelItem(
                this,
                (UILabel_o *)*p_mCostLb2,
                v101->m_Items[1],
                usrItem,
                v99,
                v162,
                isClosed,
                v100);
              v102 = v38->fields.nums;
              if ( !v102 )
                goto LABEL_436;
              if ( v102->max_length )
              {
                this = (QuestBoardListViewItemDraw_o *)System_Int32__ToString((int)v102 + 32, 0LL);
                if ( !this )
                  goto LABEL_436;
                v40 = this->fields.m_CachedPtr;
                if ( QuestConsumeItemEntity__IsAvailableAt(v38, 1, 0LL) )
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
                  v38 = 0LL;
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
  if ( (byte_418A2A1 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_B2C35C(&QuestBoardListViewItemDraw_TypeInfo, label);
    byte_418A2A1 = 1;
  }
  if ( !label )
    sub_B2C434(this, label);
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
      v23 = UnityEngine_Color__op_Multiply_40634308(static_fields->CAMPAIGN_COST_COLOR, 0.5, 0LL);
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
      v24 = UnityEngine_Color__op_Multiply_40634308(v22->OVER_COST_COLOR, 0.5, 0LL);
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
  void *SelfUserGame; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x7
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
  if ( (byte_418A2A0 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, label);
    sub_B2C35C(&LocalizationManager_TypeInfo, v16);
    sub_B2C35C(&StringLiteral_10892/*"QUEST_BOARD_COST_QP"*/, v17);
    byte_418A2A0 = 1;
  }
  SelfUserGame = System_Int32__ToString((int32_t)&v28, 0LL);
  if ( !itemEnt )
    goto LABEL_16;
  if ( itemEnt->fields.type == 1 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( SelfUserGame )
    {
      v21 = v28 > *((_DWORD *)SelfUserGame + 24);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v22 = LocalizationManager__Get((System_String_o *)StringLiteral_10892/*"QUEST_BOARD_COST_QP"*/, 0LL);
      v27 = v28;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
      SelfUserGame = System_String__Format(v22, v23, 0LL);
      v24 = (System_String_o *)SelfUserGame;
      goto LABEL_15;
    }
LABEL_16:
    sub_B2C434(SelfUserGame, v19);
  }
  v25 = v28;
  v24 = (System_String_o *)SelfUserGame;
  if ( usrItem && (SelfUserGame = (void *)ItemEntity__IsEnable(itemEnt, 0LL), ((unsigned __int8)SelfUserGame & 1) != 0) )
    num = usrItem->fields.num;
  else
    num = 0;
  v21 = v25 > num;
LABEL_15:
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
    0,
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
        v10 = sub_B2C460(this);
        sub_B2C400(v10, 0LL);
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
    sub_B2C434(this, isDisp);
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

  if ( (byte_418A2AF & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418A2AF = 1;
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
          sub_B2C434(v8, v7);
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
  if ( (byte_418A29F & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, questEnt);
    this = (QuestBoardListViewItemDraw_o *)sub_B2C35C(&QuestBoardListViewItemDraw_TypeInfo, v16);
    byte_418A29F = 1;
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
  v28.fields.r = r;
  v28.fields.g = g;
  v28.fields.b = b;
  v28.fields.a = a;
  UIWidget__set_color((UIWidget_o *)this, v28, 0LL);
  if ( !maskSprite )
    goto LABEL_26;
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
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v23 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_MASK_SPNAME_PREFIX = v23->static_fields->QUEST_BOARD_MASK_SPNAME_PREFIX;
    v25 = System_Int32__ToString(v21, 0LL);
    maskSpriteName = System_String__Concat_44305532(QUEST_BOARD_MASK_SPNAME_PREFIX, v25, 0LL);
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
    sub_B2C434(this, questEnt);
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

  if ( (byte_418A2AD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, method);
    byte_418A2AD = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  if ( mInfoTextList && mInfoTextList->fields._size > 1 )
  {
    mOptionInfoLb = this->fields.mOptionInfoLb;
    if ( !mOptionInfoLb )
LABEL_11:
      sub_B2C434(mOptionInfoLb, method);
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
  QuestEntity_o *Mine; // x0
  UnityEngine_GameObject_o *gameObject; // x22
  UnityEngine_Object_o *mEarthLine; // x22
  const MethodInfo *v16; // x1
  QuestBoardListViewEarthLine_o *mOptionSecondBattleInformationObj; // x0
  struct QuestBoardListViewMultiSecondBattleInformation_o *Component_srcLineSprite; // x0
  struct QuestBoardListViewMultiSecondBattleInformation_o **p_secondBattleInformation; // x22
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UIWidget_o *mcBaseP; // x22
  int v27; // s0
  struct UnityEngine_GameObject_array *mStatusSp; // x22
  int max_length; // w8
  unsigned int v33; // w25
  UnityEngine_GameObject_o *mCostObj; // x22
  QuestBoardListViewItemDraw_c *v35; // x0
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  UnityEngine_Object_o *eventTargetComponent; // x22
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x7
  UnityEngine_GameObject_o *v42; // x19
  struct MapControl_AreaBoardInfo_o *AreaBoardInfo_k__BackingField; // x8
  struct MapControl_AreaBoardInfo_o *v44; // x8
  __int64 v45; // x0
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418A27D & 1) == 0 )
  {
    sub_B2C35C(
      &Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewMultiSecondBattleInformation___,
      questBoardItem);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UISprite__Clear__, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&QuestBoardListViewItemDraw_TypeInfo, v10);
    byte_418A27D = 1;
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
          QuestBoardListViewEarthLine__Hide(mOptionSecondBattleInformationObj, v16);
        }
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mOptionSecondBattleInformationObj;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_85;
        Component_srcLineSprite = (struct QuestBoardListViewMultiSecondBattleInformation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                               (UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj,
                                                                                               (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewMultiSecondBattleInformation___);
        p_secondBattleInformation = &this->fields.secondBattleInformation;
        this->fields.secondBattleInformation = Component_srcLineSprite;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.secondBattleInformation,
          (System_Int32_array **)Component_srcLineSprite,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25);
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
          (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_UISprite__Clear__);
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
        *(UnityEngine_Color_o *)&v27 = UnityEngine_Color__get_white(0LL);
        if ( !mcBaseP
          || (UIWidget__set_color(mcBaseP, *(UnityEngine_Color_o *)&v27, 0LL),
              (mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mcBaseP) == 0LL)
          || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mOptionSecondBattleInformationObj, 1, 0LL),
              (mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mStatusObj) == 0LL)
          || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 1, 0LL),
              (mStatusSp = this->fields.mStatusSp) == 0LL) )
        {
LABEL_85:
          sub_B2C434(mOptionSecondBattleInformationObj, v16);
        }
        max_length = mStatusSp->max_length;
        if ( max_length >= 1 )
        {
          v33 = 0;
          do
          {
            if ( v33 >= max_length )
            {
              v45 = sub_B2C460(mOptionSecondBattleInformationObj);
              sub_B2C400(v45, 0LL);
            }
            mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)mStatusSp->m_Items[v33];
            if ( !mOptionSecondBattleInformationObj )
              goto LABEL_85;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj, 0, 0LL);
            max_length = mStatusSp->max_length;
          }
          while ( (int)++v33 < max_length );
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
        v35 = QuestBoardListViewItemDraw_TypeInfo;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v35 = QuestBoardListViewItemDraw_TypeInfo;
        }
        GameObjectExtensions__SetLocalPosition(mCostObj, v35->static_fields->COST_OBJ_POS, 0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mCostObj;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_85;
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                               (UnityEngine_GameObject_o *)mOptionSecondBattleInformationObj,
                                                                               (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_85;
        UIWidget__set_width(
          (UIWidget_o *)mOptionSecondBattleInformationObj,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_SINGLE,
          0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mCostApSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_85;
        v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mOptionSecondBattleInformationObj, 0LL);
        GameObjectExtensions__SetLocalPosition(
          v36,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_1_ICON_AP_POS,
          0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mCostLb1;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_85;
        v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mOptionSecondBattleInformationObj, 0LL);
        GameObjectExtensions__SetLocalPosition(
          v37,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_1_LABEL_AP_POS,
          0LL);
        mOptionSecondBattleInformationObj = (QuestBoardListViewEarthLine_o *)this->fields.mShohiSp;
        if ( !mOptionSecondBattleInformationObj )
          goto LABEL_85;
        v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mOptionSecondBattleInformationObj, 0LL);
        GameObjectExtensions__SetLocalPosition(
          v38,
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
            QuestBoardListViewItemDraw__SetItemOfShortcut(this, questBoardItem, v40);
            return;
          case 4:
            v44 = quest_info_k__BackingField->fields._AreaBoardInfo_k__BackingField;
            if ( !v44 )
              goto LABEL_84;
            if ( v44->fields.questBoardType == 2 )
LABEL_78:
              QuestBoardListViewItemDraw__SetItemOfArea(this, questBoardItem, 1, 1, 0, 0, 0, v41);
            else
LABEL_75:
              QuestBoardListViewItemDraw__SetItemOfFolder(this, questBoardItem, v40);
            break;
          case 5:
            QuestBoardListViewItemDraw__SetItemOfWarBoard(this, questBoardItem, v40);
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
              QuestBoardListViewItemDraw__SetItemOfRecollectionQuest(this, questBoardItem, v40);
            else
LABEL_84:
              QuestBoardListViewItemDraw__SetItemOfQuest(this, questBoardItem, v40);
            break;
          default:
            return;
        }
      }
    }
    else
    {
      v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      zero = UnityEngine_Vector3__get_zero(0LL);
      GameObjectExtensions__SetLocalScale(v42, zero, 0LL);
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
  QuestBoardListViewItemDraw_o *v12; // x19
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
  __int64 v34; // x9
  int32_t warId; // w20
  int32_t v36; // w26
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  MapControl_WarInfo_o *v38; // x27
  int v39; // w20
  UnityEngine_Object_o *eventTargetComponent; // x27
  const MethodInfo *v41; // x3
  bool v42; // w24
  il2cpp_array_size_t v43; // w20
  const MethodInfo *v44; // x2
  int32_t v45; // w27
  bool v46; // w26
  _BOOL8 IsActiveEventWar; // x0
  const MethodInfo *v48; // x4
  int v49; // w21
  bool v50; // w23
  QuestBoardListViewItemDraw_c *v51; // x0
  System_String_o *QBOARD_CAP_CLOSED_SPECIAL_FORMAT; // x28
  Il2CppObject *v53; // x0
  System_String_o *QBOARD_CAP_CLOSED_SPECIAL; // x28
  QuestBoardListViewItemDraw_o *v55; // x26
  int32_t v56; // w23
  QuestBoardListViewItemDraw_c *v57; // x8
  struct System_String_array *msQBoardL1Names; // x8
  System_String_o *v59; // x28
  Il2CppObject *v60; // x0
  const MethodInfo *v61; // x5
  ScrTerminalListTop_c *v62; // x8
  struct ScrTerminalListTop_StaticFields *static_fields; // x9
  QuestBoardListViewItemDraw_c *v64; // x0
  bool v65; // w20
  bool v66; // w23
  System_String_o *EventAddBannerSpriteName; // x0
  bool v68; // zf
  ScrTerminalListTop_c *v69; // x0
  int32_t v70; // w21
  QuestBoardListViewItemDraw_o *v71; // x25
  QuestBoardListViewItemDraw_o *v72; // x25
  bool v73; // w23
  QuestBoardListViewItemDraw_c *v74; // x0
  System_String_o **p_QBOARD_CAP_CLOSED_SPECIAL_2; // x8
  QuestBoardListViewItemDraw_c *v76; // x0
  WarEntity_o *Entity; // x2
  bool v78; // w4
  QuestBoardListViewItemDraw_o *v79; // x0
  bool v80; // w3
  QuestBoardListViewItem_o *v81; // x1
  QuestBoardListViewItemDraw_o *v82; // x25
  bool v83; // w0
  QuestBoardListViewItemDraw_c *v84; // x8
  QuestBoardListViewItemDraw_o *v85; // x25
  QuestBoardListViewItemDraw_o *v86; // x25
  ScrTerminalListTop_c *v87; // x0
  int32_t NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID; // w25
  TerminalPramsManager_c *v89; // x0
  ScrTerminalListTop_c *v90; // x8
  int32_t QuestId_k__BackingField; // w21
  TerminalPramsManager_c *v92; // x0
  UISprite_c *v93; // x8
  System_String_o *v94; // x25
  int32_t mStatusSp; // w8
  System_Int32_c *v96; // x0
  UISprite_c *klass; // x8
  Il2CppObject *v98; // x0
  int v99; // w23
  UISprite_o *mcBaseP; // x25
  const MethodInfo *v101; // x2
  UIWidget_o *v102; // x25
  int v103; // s0
  int32_t questCount; // w1
  QuestBoardListViewItemDraw_o **p_mOptionInfoLb; // x25
  const MethodInfo *v109; // x3
  int32_t v110; // w1
  QuestBoardListViewItemDraw_c *v111; // x0
  const MethodInfo *v112; // x2
  const MethodInfo *v113; // x3
  const MethodInfo *v114; // x3
  const MethodInfo *v115; // x3
  bool v116; // w1
  const MethodInfo *v117; // x3
  int32_t status; // w1
  QuestBoardListViewItemDraw_c *v119; // x0
  bool v120; // w21
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x20
  struct QuestBoardListViewObject_o *v122; // x8
  __int64 v123; // x10
  const MethodInfo *v124; // x3
  int32_t AlphaAnimCnt; // w21
  UnityEngine_Object_o *mEarthLine; // x21
  const MethodInfo *v127; // x3
  QuestBoardListViewEarthLine_o *v128; // x21
  float *mTitleLevelSp; // x8
  __int64 v130; // x0
  int32_t v131; // [xsp+8h] [xbp-98h]
  bool v132; // [xsp+Ch] [xbp-94h]
  bool v134; // [xsp+14h] [xbp-8Ch]
  struct TerminalBannerComponent_array *checkTime; // [xsp+18h] [xbp-88h]
  bool IsPurchasedByRarePrism; // [xsp+24h] [xbp-7Ch]
  QuestBoardListViewItem_o *questBoardItema; // [xsp+28h] [xbp-78h]
  bool v139; // [xsp+34h] [xbp-6Ch]
  _BOOL4 IsClosedWar; // [xsp+38h] [xbp-68h]
  int v141; // [xsp+3Ch] [xbp-64h]
  WarEntity_o *warEnt; // [xsp+40h] [xbp-60h]
  int32_t PrioredBannerId; // [xsp+4Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v144; // 0:s0.4,4:s1.4,8:s2.4

  v11 = questBoardItem;
  v12 = this;
  if ( (byte_418A27F & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, questBoardItem);
    sub_B2C35C(&Method_DataManager_GetMaster_WarMaster___, v13);
    sub_B2C35C(&DataManager_TypeInfo, v14);
    sub_B2C35C(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v15);
    sub_B2C35C(&int_TypeInfo, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__, v18);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v19);
    sub_B2C35C(&QuestBoardListViewItemDraw_TypeInfo, v20);
    sub_B2C35C(&QuestBoardListViewManager_TypeInfo, v21);
    sub_B2C35C(&ScrTerminalListTop_TypeInfo, v22);
    sub_B2C35C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v23);
    sub_B2C35C(&Method_SingletonTemplate_QuestTree__get_Instance__, v24);
    sub_B2C35C(&SingletonTemplate_QuestTree__TypeInfo, v25);
    sub_B2C35C(&SingletonTemplate_clsQuestCheck__TypeInfo, v26);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v27);
    this = (QuestBoardListViewItemDraw_o *)sub_B2C35C(&StringLiteral_1/*""*/, v28);
    byte_418A27F = 1;
  }
  if ( !v11 )
    goto LABEL_306;
  quest_info_k__BackingField = v11->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_306;
  v139 = isBadgeDisp;
  AreaBoardInfo_k__BackingField = quest_info_k__BackingField->fields._AreaBoardInfo_k__BackingField;
  v134 = isWhiteMarkOnly;
  if ( !AreaBoardInfo_k__BackingField )
    goto LABEL_306;
  questBoardType = AreaBoardInfo_k__BackingField->fields.questBoardType;
  eventEnt = AreaBoardInfo_k__BackingField->fields.eventEnt;
  mListViewObject = v12->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_306;
  this = (QuestBoardListViewItemDraw_o *)mListViewObject->fields.manager;
  if ( !this )
    goto LABEL_306;
  questBoardItem = (QuestBoardListViewItem_o *)QuestBoardListViewManager_TypeInfo;
  v34 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v34
    || (QuestBoardListViewManager_c *)this->klass->_2.typeHierarchy[v34 - 1] != QuestBoardListViewManager_TypeInfo )
  {
    sub_B2C728(this);
LABEL_308:
    sub_B2C728(this);
    goto LABEL_309;
  }
  warId = AreaBoardInfo_k__BackingField->fields.warId;
  v132 = isSpecialClosedBanner;
  checkTime = this->fields.mTerminalBanners;
  if ( warId < 1 )
  {
    v36 = AreaBoardInfo_k__BackingField->fields.warId;
    v39 = 0;
    v38 = 0LL;
LABEL_19:
    warEnt = 0LL;
    goto LABEL_20;
  }
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !this )
    goto LABEL_306;
  v36 = warId;
  WarInfoByWarID = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)this, warId, 0LL);
  v38 = WarInfoByWarID;
  if ( !WarInfoByWarID )
  {
    v39 = 0;
    goto LABEL_19;
  }
  v39 = 1;
  warEnt = MapControl_WarInfo__GetMine(WarInfoByWarID, 0LL);
LABEL_20:
  this = (QuestBoardListViewItemDraw_o *)v12->fields.mLabelObj;
  if ( !this )
    goto LABEL_306;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v12->fields.mTitleObj;
  if ( !this )
    goto LABEL_306;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v12->fields.mOptionObj;
  if ( !this )
    goto LABEL_306;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v12->fields.mOptionInfoLb;
  if ( !this )
    goto LABEL_306;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_306;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v12->fields.mOptionRestrinctionLb;
  if ( !this )
    goto LABEL_306;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_306;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
  if ( !this )
    goto LABEL_306;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_306;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v12->fields.mRewardObj;
  if ( !this )
    goto LABEL_306;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v12->fields.mPhaseObj;
  if ( !this )
    goto LABEL_306;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v12->fields.mChallengeObj;
  if ( !this )
    goto LABEL_306;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v12->fields.mCostObj;
  if ( !this )
    goto LABEL_306;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v12->fields.mcBaseP;
  if ( !this )
    goto LABEL_306;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_306;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, questBoardType != 1, 0LL);
  this = (QuestBoardListViewItemDraw_o *)warEnt;
  if ( warEnt )
  {
    this = (QuestBoardListViewItemDraw_o *)WarEntity__IsMainInterlude(warEnt, 0LL);
    v141 = (unsigned __int8)this & 1;
    if ( v39 )
    {
LABEL_37:
      if ( !v38 )
        goto LABEL_306;
      IsClosedWar = MapControl_WarInfo__IsClosedWar(v38, 0LL);
      goto LABEL_41;
    }
  }
  else
  {
    v141 = 0;
    if ( v39 )
      goto LABEL_37;
  }
  IsClosedWar = 0;
LABEL_41:
  this = (QuestBoardListViewItemDraw_o *)v12->fields.blackMarkSpace;
  if ( !this )
    goto LABEL_306;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v12->fields.eventTarget;
  if ( !this )
    goto LABEL_306;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v12->fields.alloutRoot;
  if ( !this )
    goto LABEL_306;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  eventTargetComponent = (UnityEngine_Object_o *)v12->fields.eventTargetComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(eventTargetComponent, 0LL, 0LL) )
  {
    this = (QuestBoardListViewItemDraw_o *)v12->fields.eventTargetComponent;
    if ( !this )
      goto LABEL_306;
    BoardOptionEventTargetComponent__DestroyList((BoardOptionEventTargetComponent_o *)this, 0LL);
  }
  questBoardItema = v11;
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !this )
LABEL_306:
    sub_B2C434(this, questBoardItem);
  v42 = questBoardType == 2 && eventEnt != 0LL;
  v43 = questBoardType - 1;
  IsPurchasedByRarePrism = QuestBoardListViewItemDraw__IsPurchasedByRarePrism(
                             this,
                             (System_Collections_Generic_List_MapControl_QuestInfo__o *)this->fields.mCommonAtlas,
                             warEnt,
                             v41);
  if ( questBoardType == 1 )
  {
    QuestBoardListViewItemDraw__SetupBanner(v12, v11, v44);
    v45 = v36;
    v46 = v139;
    goto LABEL_243;
  }
  if ( questBoardType == 2 && eventEnt != 0LL )
  {
    if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
    }
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !this )
      goto LABEL_306;
    v45 = v36;
    IsActiveEventWar = QuestTree__IsActiveEventWar((QuestTree_o *)this, v36, 0LL);
    LOBYTE(v43) = (IsPurchasedByRarePrism || v141 == 0) && IsActiveEventWar;
    if ( (v43 & 1) != 0 )
    {
      v49 = IsClosedWar;
    }
    else
    {
      v49 = IsClosedWar;
      if ( v141 )
        v49 = AreaBoardInfo_k__BackingField->fields.status == 2 || IsClosedWar;
    }
    EventAddBannerSpriteName = QuestBoardListViewItemDraw__GetEventAddBannerSpriteName(
                                 (QuestBoardListViewItemDraw_o *)IsActiveEventWar,
                                 eventEnt,
                                 v36,
                                 v49 | v43 & 1,
                                 v48);
    v68 = v49 == 0;
    v11 = questBoardItema;
    QBOARD_CAP_CLOSED_SPECIAL = EventAddBannerSpriteName;
    goto LABEL_230;
  }
  if ( AreaBoardInfo_k__BackingField->fields.status == 6 && questBoardType == 2 )
  {
    if ( warEnt )
    {
      v50 = v132;
      v51 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v51 = QuestBoardListViewItemDraw_TypeInfo;
      }
      QBOARD_CAP_CLOSED_SPECIAL_FORMAT = v51->static_fields->QBOARD_CAP_CLOSED_SPECIAL_FORMAT;
      PrioredBannerId = WarEntity__GetPrioredBannerId(warEnt, 0LL);
      v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId);
      QBOARD_CAP_CLOSED_SPECIAL = System_String__Format(QBOARD_CAP_CLOSED_SPECIAL_FORMAT, v53, 0LL);
    }
    else
    {
      QBOARD_CAP_CLOSED_SPECIAL = (System_String_o *)StringLiteral_1/*""*/;
      v50 = v132;
    }
    v69 = ScrTerminalListTop_TypeInfo;
    if ( v50 )
    {
      if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
        v70 = v36;
        if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
          v69 = ScrTerminalListTop_TypeInfo;
        }
      }
      else
      {
        v70 = v36;
      }
      v36 = v70;
      v68 = v70 == v69->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_TARGET_WAR_ID;
      v11 = questBoardItema;
      if ( v68 )
        goto LABEL_128;
    }
    if ( (BYTE3(v69->vtable._0_Equals.methodPtr) & 4) != 0 && !v69->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v69);
      v69 = ScrTerminalListTop_TypeInfo;
    }
    if ( v36 != v69->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_TARGET_WAR_ID )
      goto LABEL_119;
    if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
    }
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    v71 = this;
    if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    }
    if ( !v71 )
      goto LABEL_306;
    if ( !clsQuestCheck__IsWarClear(
            (clsQuestCheck_o *)v71,
            ScrTerminalListTop_TypeInfo->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_START_COND_WAR_ID,
            0LL) )
      goto LABEL_119;
    if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
    }
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    v72 = this;
    if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    }
    if ( !v72 )
      goto LABEL_306;
    if ( !clsQuestCheck__IsWarClear(
            (clsQuestCheck_o *)v72,
            ScrTerminalListTop_TypeInfo->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_END_COND_WAR_ID,
            0LL) )
    {
LABEL_128:
      v76 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v76 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v73 = v134;
      p_QBOARD_CAP_CLOSED_SPECIAL_2 = &v76->static_fields->QBOARD_CAP_CLOSED_SPECIAL_2;
    }
    else
    {
LABEL_119:
      v73 = v134;
      if ( System_String__op_Inequality(QBOARD_CAP_CLOSED_SPECIAL, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
      {
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        if ( AtlasManager__IsExistBanner(QBOARD_CAP_CLOSED_SPECIAL, 0LL) )
          goto LABEL_133;
      }
      v74 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v74 = QuestBoardListViewItemDraw_TypeInfo;
      }
      p_QBOARD_CAP_CLOSED_SPECIAL_2 = &v74->static_fields->QBOARD_CAP_CLOSED;
    }
    QBOARD_CAP_CLOSED_SPECIAL = *p_QBOARD_CAP_CLOSED_SPECIAL_2;
LABEL_133:
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarMaster___);
    if ( !this )
      goto LABEL_306;
    v45 = v36;
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)this,
               v36,
               (const MethodInfo_24E40D0 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    v78 = v73;
    v79 = v12;
    v80 = isBlackMarkOnly;
    v81 = v11;
    goto LABEL_229;
  }
  v45 = v36;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestBoardListViewItemDraw_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarMaster___);
  if ( !this )
    goto LABEL_306;
  this = (QuestBoardListViewItemDraw_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                           v36,
                                           (const MethodInfo_24E40D0 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( !this )
    goto LABEL_306;
  v55 = this;
  this = (QuestBoardListViewItemDraw_o *)WarEntity__GetPrioredBannerId((WarEntity_o *)this, 0LL);
  v56 = (int)this;
  v57 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v57 = QuestBoardListViewItemDraw_TypeInfo;
  }
  msQBoardL1Names = v57->static_fields->msQBoardL1Names;
  if ( !msQBoardL1Names )
    goto LABEL_306;
  if ( v43 >= msQBoardL1Names->max_length )
    goto LABEL_309;
  v59 = msQBoardL1Names->m_Items[v43];
  v131 = v56;
  PrioredBannerId = v56;
  v60 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId);
  QBOARD_CAP_CLOSED_SPECIAL = System_String__Format(v59, v60, 0LL);
  v62 = ScrTerminalListTop_TypeInfo;
  if ( v132 )
  {
    if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      v62 = ScrTerminalListTop_TypeInfo;
    }
    static_fields = v62->static_fields;
    if ( v45 == static_fields->AREA_BOARD_FORCE_DISP_TARGET_WAR_ID )
    {
      v64 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
        v66 = isBlackMarkOnly;
        v65 = v134;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v64 = QuestBoardListViewItemDraw_TypeInfo;
        }
      }
      else
      {
        v66 = isBlackMarkOnly;
        v65 = v134;
      }
      QBOARD_CAP_CLOSED_SPECIAL = v64->static_fields->QBOARD_CAP_CLOSED_SPECIAL;
      goto LABEL_228;
    }
    if ( (BYTE3(v62->vtable._0_Equals.methodPtr) & 4) != 0 && !v62->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v62);
      v62 = ScrTerminalListTop_TypeInfo;
      static_fields = ScrTerminalListTop_TypeInfo->static_fields;
    }
    if ( v45 == static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_TARGET_WAR_ID )
    {
      if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
      }
      this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      v82 = this;
      if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      }
      if ( !v82 )
        goto LABEL_306;
      v83 = clsQuestCheck__IsWarClear(
              (clsQuestCheck_o *)v82,
              ScrTerminalListTop_TypeInfo->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_END_COND_WAR_ID,
              0LL);
      v84 = QuestBoardListViewItemDraw_TypeInfo;
      if ( v83 )
      {
        v66 = isBlackMarkOnly;
        v65 = v134;
        if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v84 = QuestBoardListViewItemDraw_TypeInfo;
        }
        QBOARD_CAP_CLOSED_SPECIAL = v84->static_fields->QBOARD_CAP_CLOSED_SPECIAL_3;
      }
      else
      {
        v66 = isBlackMarkOnly;
        v65 = v134;
        if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v84 = QuestBoardListViewItemDraw_TypeInfo;
        }
        QBOARD_CAP_CLOSED_SPECIAL = v84->static_fields->QBOARD_CAP_CLOSED_SPECIAL_2;
      }
      goto LABEL_228;
    }
  }
  if ( (BYTE3(v62->vtable._0_Equals.methodPtr) & 4) != 0 && !v62->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v62);
    v62 = ScrTerminalListTop_TypeInfo;
  }
  if ( v45 != v62->static_fields->NT2_EFFECT_AREA_BOARD_TARGET_WAR_ID )
    goto LABEL_217;
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v85 = this;
  if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  }
  if ( !v85 )
    goto LABEL_306;
  if ( clsQuestCheck__IsWarClear(
         (clsQuestCheck_o *)v85,
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
  this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v86 = this;
  if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  }
  if ( !v86 )
    goto LABEL_306;
  if ( !clsQuestCheck__IsQuestClear(
          (clsQuestCheck_o *)v86,
          ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_QUEST_ID,
          0,
          0LL) )
    goto LABEL_217;
  v87 = ScrTerminalListTop_TypeInfo;
  if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v87 = ScrTerminalListTop_TypeInfo;
  }
  NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID = v87->static_fields->NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID;
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
  if ( !byte_4183C7A )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, questBoardItem);
    byte_4183C7A = 1;
  }
  v89 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v89 = TerminalPramsManager_TypeInfo;
  }
  v90 = ScrTerminalListTop_TypeInfo;
  QuestId_k__BackingField = v89->static_fields->_QuestId_k__BackingField;
  if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v90 = ScrTerminalListTop_TypeInfo;
  }
  v68 = QuestId_k__BackingField == v90->static_fields->NT2_EFFECT_AREA_BOARD_QUEST_ID;
  v11 = questBoardItema;
  if ( !v68 )
    goto LABEL_217;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C7B )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, questBoardItem);
    byte_4183C7B = 1;
  }
  v92 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v11 = questBoardItema;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v92 = TerminalPramsManager_TypeInfo;
    }
  }
  else
  {
    v11 = questBoardItema;
  }
  if ( v92->static_fields->_PhaseCnt_k__BackingField != 2 )
  {
LABEL_217:
    v66 = isBlackMarkOnly;
    v65 = v134;
    if ( isBoardDisp && v139 && !isBlackMarkOnly && !v134 )
      goto LABEL_228;
    this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
    }
    klass = this->fields.mTitleLevelSp[2].klass;
    if ( !klass )
      goto LABEL_306;
    if ( LODWORD(klass->_1.namespaze) > 1 )
    {
      v94 = *(System_String_o **)&klass->_1.byval_arg.bits;
      v96 = int_TypeInfo;
      mStatusSp = v131;
      goto LABEL_227;
    }
LABEL_309:
    v130 = sub_B2C460(this);
    sub_B2C400(v130, 0LL);
  }
  this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  }
  v66 = isBlackMarkOnly;
  v65 = v134;
  v93 = this->fields.mTitleLevelSp[2].klass;
  if ( !v93 )
    goto LABEL_306;
  if ( LODWORD(v93->_1.namespaze) <= 1 )
    goto LABEL_309;
  v94 = *(System_String_o **)&v93->_1.byval_arg.bits;
  mStatusSp = (int32_t)v55->fields.mStatusSp;
  v96 = int_TypeInfo;
LABEL_227:
  PrioredBannerId = mStatusSp;
  v98 = (Il2CppObject *)j_il2cpp_value_box_0(v96, &PrioredBannerId);
  QBOARD_CAP_CLOSED_SPECIAL = System_String__Format(v94, v98, 0LL);
LABEL_228:
  v80 = v66;
  v78 = v65;
  v79 = v12;
  v81 = v11;
  Entity = (WarEntity_o *)v55;
LABEL_229:
  QuestBoardListViewItemDraw__SetBlackMarkAndWhiteMark(v79, v81, Entity, v80, v78, v61);
  LOBYTE(v43) = 0;
  v68 = !IsClosedWar;
LABEL_230:
  v99 = !v68;
  mcBaseP = v12->fields.mcBaseP;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(mcBaseP, QBOARD_CAP_CLOSED_SPECIAL, 0LL);
  v46 = v139;
  if ( v99 )
  {
    v102 = (UIWidget_o *)v12->fields.mcBaseP;
    *(UnityEngine_Color_o *)&v103 = UnityEngine_Color__get_gray(0LL);
    if ( !v102 )
      goto LABEL_306;
    UIWidget__set_color(v102, *(UnityEngine_Color_o *)&v103, 0LL);
  }
  questCount = 0;
  if ( v43 & 1 | !v42 && v139 )
    questCount = AreaBoardInfo_k__BackingField->fields.questCount;
  QuestBoardListViewItemDraw__SetBadge(v12, questCount, v101);
LABEL_243:
  this = (QuestBoardListViewItemDraw_o *)v12->fields.mcBaseP;
  if ( !this )
    goto LABEL_306;
  p_mOptionInfoLb = (QuestBoardListViewItemDraw_o **)&v12->fields.mOptionInfoLb;
  ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
    this,
    this->klass[2]._1.interopData);
  if ( !v46 )
  {
    this = (QuestBoardListViewItemDraw_o *)v12->fields.mcBaseP;
    if ( this )
    {
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isBoardDisp, 0LL);
        this = (QuestBoardListViewItemDraw_o *)v12->fields.mNextSp;
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
              QuestBoardListViewItemDraw__SetStatusActive(v12, status, 0, v117);
            v119 = QuestBoardListViewItemDraw_TypeInfo;
            if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
              v119 = QuestBoardListViewItemDraw_TypeInfo;
            }
            QuestBoardListViewItemDraw__SetNewIcon(
              v12,
              v119->static_fields->NEW_POS_AREA,
              v119->static_fields->NEW_W_AREA,
              v119->static_fields->NEW_H_AREA,
              v117);
            this = (QuestBoardListViewItemDraw_o *)v12->fields.mRarePrismSp;
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
    goto LABEL_306;
  }
  v110 = AreaBoardInfo_k__BackingField->fields.status;
  if ( v110 && v110 != 6 )
    QuestBoardListViewItemDraw__SetStatusActive(v12, v110, v43 & 1 | (v110 != 1 || !v42), v109);
  v111 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v111 = QuestBoardListViewItemDraw_TypeInfo;
  }
  QuestBoardListViewItemDraw__SetNewIcon(
    v12,
    v111->static_fields->NEW_POS_AREA,
    v111->static_fields->NEW_W_AREA,
    v111->static_fields->NEW_H_AREA,
    v109);
  if ( (IsClosedWar & v141) != 0 )
    QuestBoardListViewItemDraw__SetStatusActive(v12, 2, 1, v113);
  QuestBoardListViewItemDraw__SetClearSprite(v12, warEnt, v112);
  QuestBoardListViewItemDraw__SetNextSprite(v12, AreaBoardInfo_k__BackingField, warEnt, v114);
  QuestBoardListViewItemDraw__CreateInfoTextList(v12, v11, (int64_t)checkTime, v115);
  this = (QuestBoardListViewItemDraw_o *)v12->fields.mRarePrismSp;
  if ( !this )
    goto LABEL_306;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_306;
  v116 = (IsClosedWar & v141) == 0 && IsPurchasedByRarePrism;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v116, 0LL);
  if ( v141 )
    goto LABEL_278;
  mInfoTextList = v12->fields.mInfoTextList;
  if ( !mInfoTextList )
    goto LABEL_306;
  questBoardItem = (QuestBoardListViewItem_o *)(unsigned int)mInfoTextList->fields._size;
  if ( (int)questBoardItem < 1 )
  {
LABEL_278:
    v120 = 0;
    goto LABEL_290;
  }
  v122 = v12->fields.mListViewObject;
  if ( !v122 )
    goto LABEL_306;
  this = (QuestBoardListViewItemDraw_o *)v122->fields.manager;
  if ( !this )
    goto LABEL_306;
  v123 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v123
    || (QuestBoardListViewManager_c *)this->klass->_2.typeHierarchy[v123 - 1] != QuestBoardListViewManager_TypeInfo )
  {
    goto LABEL_308;
  }
  AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt(
                   (QuestBoardListViewManager_o *)this,
                   (int32_t)questBoardItem,
                   0LL);
  if ( mInfoTextList->fields._size <= (unsigned int)AlphaAnimCnt )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  this = (QuestBoardListViewItemDraw_o *)mInfoTextList->fields._items->m_Items[AlphaAnimCnt];
  if ( !this )
    goto LABEL_306;
  QuestBoardInformaionText__SetTime(
    (QuestBoardInformaionText_o *)this,
    &v12->fields.mOptionInfoLb,
    &v12->fields.mOptionInfoFrameSp,
    v124);
  this = (QuestBoardListViewItemDraw_o *)v12->fields.mOptionInfoLb;
  if ( !this )
    goto LABEL_306;
  BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)this, 1.0, 0LL);
  v120 = 1;
LABEL_290:
  this = *p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_306;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_306;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
  if ( !this )
    goto LABEL_306;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_306;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v120, 0LL);
  this = *p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_306;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_306;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v120, 0LL);
  mEarthLine = (UnityEngine_Object_o *)v12->fields.mEarthLine;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mEarthLine, 0LL, 0LL) )
  {
    this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
    v128 = v12->fields.mEarthLine;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
    }
    if ( v128 )
    {
      mTitleLevelSp = (float *)this->fields.mTitleLevelSp;
      v144.fields.x = mTitleLevelSp[54];
      v144.fields.y = mTitleLevelSp[55];
      v144.fields.z = mTitleLevelSp[56];
      QuestBoardListViewEarthLine__SetupSecond(v128, v144, v12->fields.mListViewObject, v45, v127);
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
  int32_t warId; // w25
  MapControl_WarInfo_o *v24; // x26
  WarEntity_o *v25; // x22
  int v26; // w24
  EventEntity_o *v27; // x27
  int v28; // w23
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  __int64 v30; // x9
  struct TerminalBannerComponent_array *mTerminalBanners; // x28
  _BOOL4 IsMainInterlude; // w26
  const MethodInfo *v33; // x3
  _BOOL4 IsPurchasedByRarePrism; // w27
  const MethodInfo *v35; // x4
  unsigned int status; // w8
  _BOOL4 v37; // w9
  BalanceConfig_c *v38; // x0
  ScrTerminalListTop_c *IsOpenedMainScenarioWar; // x0
  QuestBoardListViewItemDraw_o *v40; // x24
  QuestBoardListViewItemDraw_o *v41; // x24
  QuestBoardListViewItemDraw_o *v42; // x8
  MapControl_RootInfo_o *v43; // x24
  int v44; // w24
  QuestBoardListViewItemDraw_c *v45; // x8
  struct System_String_array *msQBoardL1Names; // x8
  System_String_o *v47; // x28
  int *v48; // x1
  QuestBoardListViewItemDraw_c *v49; // x0
  System_String_o *QBOARD_CAP_CLOSED; // x24
  System_String_o *EventAddBannerSpriteName; // x0
  int v52; // w24
  QuestBoardListViewItemDraw_c *v53; // x8
  struct System_String_array *v54; // x8
  Il2CppObject *v55; // x0
  UISprite_o *mcBaseP; // x28
  UIWidget_o *Component_srcLineSprite; // x24
  int v58; // s0
  UIWidget_o *v62; // x24
  int v63; // s0
  bool v67; // w1
  const MethodInfo *v68; // x3
  _BOOL8 HasFlag; // x0
  const MethodInfo *v70; // x4
  int32_t v71; // w1
  QuestBoardListViewItemDraw_c *v72; // x0
  const MethodInfo *v73; // x2
  const MethodInfo *v74; // x3
  const MethodInfo *v75; // x3
  QuestBoardListViewItemDraw_c *v76; // x0
  const MethodInfo *v77; // x2
  const MethodInfo *v78; // x3
  BalanceConfig_c *v79; // x0
  const MethodInfo *v80; // x2
  const MethodInfo *v81; // x3
  const MethodInfo *v82; // x2
  const MethodInfo *v83; // x5
  int32_t questCount; // w1
  const MethodInfo *v85; // x3
  bool v86; // w20
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x21
  struct QuestBoardListViewObject_o *v88; // x8
  __int64 v89; // x10
  const MethodInfo *v90; // x3
  int32_t AlphaAnimCnt; // w20
  QuestBoardListViewItemDraw_c *v92; // x0
  __int64 v93; // x0
  System_Collections_Generic_List_MapControl_QuestInfo__o *questList; // [xsp+0h] [xbp-80h]
  int v95; // [xsp+Ch] [xbp-74h]
  int64_t v96; // [xsp+10h] [xbp-70h]
  EventEntity_o *eventEnt; // [xsp+18h] [xbp-68h]
  _BOOL4 IsClosedWar; // [xsp+20h] [xbp-60h]
  int v99; // [xsp+24h] [xbp-5Ch]
  int v100; // [xsp+28h] [xbp-58h] BYREF
  int v101; // [xsp+2Ch] [xbp-54h] BYREF

  v3 = questBoardItem;
  v4 = this;
  if ( (byte_418A285 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, questBoardItem);
    sub_B2C35C(&BalanceConfig_TypeInfo, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_WarMaster___, v6);
    sub_B2C35C(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v7);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v8);
    sub_B2C35C(&int_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__, v11);
    sub_B2C35C(&QuestBoardListViewItemDraw_TypeInfo, v12);
    sub_B2C35C(&QuestBoardListViewManager_TypeInfo, v13);
    sub_B2C35C(&ScrTerminalListTop_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B2C35C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v16);
    sub_B2C35C(&Method_SingletonTemplate_QuestTree__get_Instance__, v17);
    sub_B2C35C(&SingletonTemplate_QuestTree__TypeInfo, v18);
    sub_B2C35C(&SingletonTemplate_clsQuestCheck__TypeInfo, v19);
    this = (QuestBoardListViewItemDraw_o *)sub_B2C35C(&StringLiteral_1/*""*/, v20);
    byte_418A285 = 1;
  }
  if ( !v3 )
    goto LABEL_197;
  quest_info_k__BackingField = v3->fields._quest_info_k__BackingField;
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
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !this )
      goto LABEL_197;
    this = (QuestBoardListViewItemDraw_o *)QuestTree__mfGetWarInfoByWarID((QuestTree_o *)this, warId, 0LL);
    v24 = (MapControl_WarInfo_o *)this;
    if ( this )
    {
      this = (QuestBoardListViewItemDraw_o *)MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)this, 0LL);
      v25 = (WarEntity_o *)this;
      v26 = 1;
      goto LABEL_16;
    }
    v26 = 0;
  }
  else
  {
    v26 = 0;
    v24 = 0LL;
  }
  v25 = 0LL;
LABEL_16:
  v27 = AreaBoardInfo_k__BackingField->fields.eventEnt;
  if ( v27 )
  {
    if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
    }
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !this )
      goto LABEL_197;
    this = (QuestBoardListViewItemDraw_o *)QuestTree__IsActiveEventWar((QuestTree_o *)this, warId, 0LL);
    v28 = (unsigned __int8)this & 1;
  }
  else
  {
    v28 = 0;
  }
  mListViewObject = v4->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_197;
  this = (QuestBoardListViewItemDraw_o *)mListViewObject->fields.manager;
  if ( !this )
    goto LABEL_197;
  questBoardItem = (QuestBoardListViewItem_o *)QuestBoardListViewManager_TypeInfo;
  v30 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v30
    || (QuestBoardListViewManager_c *)this->klass->_2.typeHierarchy[v30 - 1] != QuestBoardListViewManager_TypeInfo )
  {
    sub_B2C728(this);
LABEL_199:
    sub_B2C728(this);
    goto LABEL_200;
  }
  mTerminalBanners = this->fields.mTerminalBanners;
  if ( v26 )
  {
    if ( !v24 )
      goto LABEL_197;
    IsClosedWar = MapControl_WarInfo__IsClosedWar(v24, 0LL);
    if ( !v25 )
      goto LABEL_30;
LABEL_32:
    IsMainInterlude = WarEntity__IsMainInterlude(v25, 0LL);
    goto LABEL_33;
  }
  IsClosedWar = 0;
  if ( v25 )
    goto LABEL_32;
LABEL_30:
  IsMainInterlude = 0;
LABEL_33:
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  v96 = (int64_t)mTerminalBanners;
  eventEnt = v27;
  this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !this )
    goto LABEL_197;
  questList = (System_Collections_Generic_List_MapControl_QuestInfo__o *)this->fields.mCommonAtlas;
  IsPurchasedByRarePrism = QuestBoardListViewItemDraw__IsPurchasedByRarePrism(this, questList, v25, v33);
  v99 = v28 & (IsPurchasedByRarePrism || !IsMainInterlude);
  if ( (unsigned int)(AreaBoardInfo_k__BackingField->fields.questBoardType - 3) <= 1 )
  {
    this = (QuestBoardListViewItemDraw_o *)v4->fields.mLabelObj;
    if ( !this )
      goto LABEL_197;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (QuestBoardListViewItemDraw_o *)v4->fields.mTitleObj;
    if ( !this )
      goto LABEL_197;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (QuestBoardListViewItemDraw_o *)v4->fields.mOptionObj;
    if ( !this )
      goto LABEL_197;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (QuestBoardListViewItemDraw_o *)v4->fields.mOptionInfoLb;
    if ( !this )
      goto LABEL_197;
    this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_197;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (QuestBoardListViewItemDraw_o *)v4->fields.mOptionRestrinctionLb;
    if ( !this )
      goto LABEL_197;
    this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_197;
    this = (QuestBoardListViewItemDraw_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
    if ( !this )
      goto LABEL_197;
    this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_197;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (QuestBoardListViewItemDraw_o *)v4->fields.mRewardObj;
    if ( !this )
      goto LABEL_197;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (QuestBoardListViewItemDraw_o *)v4->fields.mPhaseObj;
    if ( !this )
      goto LABEL_197;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (QuestBoardListViewItemDraw_o *)v4->fields.mChallengeObj;
    if ( !this )
      goto LABEL_197;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (QuestBoardListViewItemDraw_o *)v4->fields.mCostObj;
    if ( !this )
      goto LABEL_197;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    v95 = IsClosedWar;
    if ( v99 == 0 && IsMainInterlude )
    {
      if ( v25 && (WarEntity__HasFlag(v25, 128, 0LL) || WarEntity__HasFlag(v25, 32, 0LL)) )
      {
        status = AreaBoardInfo_k__BackingField->fields.status;
        v37 = IsClosedWar;
LABEL_61:
        v95 = v37 || status == 2;
        goto LABEL_62;
      }
      v38 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v38 = BalanceConfig_TypeInfo;
      }
      if ( warId == v38->static_fields->MainInterludeWarId )
      {
        v37 = IsClosedWar;
        status = AreaBoardInfo_k__BackingField->fields.status & 0xFFFFFFFE;
        goto LABEL_61;
      }
    }
LABEL_62:
    if ( (v26 & 1) == 0 )
    {
      v49 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v49 = QuestBoardListViewItemDraw_TypeInfo;
      }
      QBOARD_CAP_CLOSED = v49->static_fields->QBOARD_CAP_CLOSED;
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
      this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      v40 = this;
      if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      }
      if ( !v40 )
        goto LABEL_197;
      IsOpenedMainScenarioWar = (ScrTerminalListTop_c *)clsQuestCheck__IsWarClear(
                                                          (clsQuestCheck_o *)v40,
                                                          ScrTerminalListTop_TypeInfo->static_fields->AREA_BOARD_FORCE_DISP_TARGET_WAR_ID,
                                                          0LL);
      if ( ((unsigned __int8)IsOpenedMainScenarioWar & 1) != 0 )
      {
        if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
        }
        this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
        v41 = this;
        if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
        }
        if ( !v41 )
          goto LABEL_197;
        if ( !clsQuestCheck__IsWarClear(
                (clsQuestCheck_o *)v41,
                ScrTerminalListTop_TypeInfo->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_START_COND_WAR_ID,
                0LL) )
          goto LABEL_193;
        if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
        }
        this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !this )
          goto LABEL_197;
        v42 = this;
        this = (QuestBoardListViewItemDraw_o *)ScrTerminalListTop_TypeInfo;
        v43 = *(MapControl_RootInfo_o **)&v42->fields.m_CachedPtr;
        if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
        }
        if ( !v43 )
          goto LABEL_197;
        IsOpenedMainScenarioWar = (ScrTerminalListTop_c *)MapControl_RootInfo__IsOpenedMainScenarioWar(
                                                            v43,
                                                            ScrTerminalListTop_TypeInfo->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_TARGET_WAR_ID,
                                                            0LL);
        if ( ((unsigned __int8)IsOpenedMainScenarioWar & 1) == 0 )
        {
LABEL_193:
          v92 = QuestBoardListViewItemDraw_TypeInfo;
          if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
            v92 = QuestBoardListViewItemDraw_TypeInfo;
          }
          QBOARD_CAP_CLOSED = v92->static_fields->QBOARD_CAP_CLOSED_SPECIAL_2;
          goto LABEL_120;
        }
      }
    }
    if ( v25
      && (IsOpenedMainScenarioWar = (ScrTerminalListTop_c *)WarEntity__HasFlag(v25, 128, 0LL),
          ((unsigned __int8)IsOpenedMainScenarioWar & 1) != 0) )
    {
      this = (QuestBoardListViewItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_197;
      this = (QuestBoardListViewItemDraw_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !this )
        goto LABEL_197;
      this = (QuestBoardListViewItemDraw_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                               (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                               warId,
                                               (const MethodInfo_24E40D0 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_197;
      this = (QuestBoardListViewItemDraw_o *)WarEntity__GetPrioredBannerId((WarEntity_o *)this, 0LL);
      v44 = (int)this;
      v45 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v45 = QuestBoardListViewItemDraw_TypeInfo;
      }
      msQBoardL1Names = v45->static_fields->msQBoardL1Names;
      if ( !msQBoardL1Names )
        goto LABEL_197;
      if ( msQBoardL1Names->max_length > 1 )
      {
        v47 = msQBoardL1Names->m_Items[1];
        v101 = v44;
        v48 = &v101;
LABEL_118:
        v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v48);
        EventAddBannerSpriteName = System_String__Format(v47, v55, 0LL);
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
                                     (v99 != 0) | (unsigned __int8)v95,
                                     v35);
LABEL_119:
        QBOARD_CAP_CLOSED = EventAddBannerSpriteName;
LABEL_120:
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
            goto LABEL_197;
          this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
          if ( !this )
            goto LABEL_197;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        }
        this = (QuestBoardListViewItemDraw_o *)v4->fields.mcBaseP;
        if ( !this )
          goto LABEL_197;
        ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
          this,
          this->klass[2]._1.interopData);
        this = (QuestBoardListViewItemDraw_o *)v4->fields.mcBaseP;
        if ( !this )
          goto LABEL_197;
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
        if ( !this )
          goto LABEL_197;
        Component_srcLineSprite = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  (UnityEngine_GameObject_o *)this,
                                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        *(UnityEngine_Color_o *)&v58 = UnityEngine_Color__get_white(0LL);
        if ( !Component_srcLineSprite )
          goto LABEL_197;
        UIWidget__set_color(Component_srcLineSprite, *(UnityEngine_Color_o *)&v58, 0LL);
        if ( v95 )
        {
          v62 = (UIWidget_o *)v4->fields.mcBaseP;
          *(UnityEngine_Color_o *)&v63 = UnityEngine_Color__get_gray(0LL);
          if ( !v62 )
            goto LABEL_197;
          UIWidget__set_color(v62, *(UnityEngine_Color_o *)&v63, 0LL);
        }
        goto LABEL_134;
      }
      this = (QuestBoardListViewItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_197;
      this = (QuestBoardListViewItemDraw_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !this )
        goto LABEL_197;
      this = (QuestBoardListViewItemDraw_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                               (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                               warId,
                                               (const MethodInfo_24E40D0 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_197;
      this = (QuestBoardListViewItemDraw_o *)WarEntity__GetPrioredBannerId((WarEntity_o *)this, 0LL);
      v52 = (int)this;
      v53 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v53 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v54 = v53->static_fields->msQBoardL1Names;
      if ( !v54 )
        goto LABEL_197;
      if ( v54->max_length > 2 )
      {
        v47 = v54->m_Items[2];
        v48 = &v100;
        v100 = v52;
        goto LABEL_118;
      }
    }
LABEL_200:
    v93 = sub_B2C460(this);
    sub_B2C400(v93, 0LL);
  }
LABEL_134:
  this = (QuestBoardListViewItemDraw_o *)v4->fields.mRarePrismSp;
  if ( !this )
    goto LABEL_197;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_197;
  v67 = (!IsMainInterlude || !IsClosedWar) && IsPurchasedByRarePrism;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v67, 0LL);
  if ( v25 && ((HasFlag = WarEntity__HasFlag(v25, 128, 0LL)) || (HasFlag = WarEntity__HasFlag(v25, 32, 0LL))) )
  {
    v71 = AreaBoardInfo_k__BackingField->fields.status;
    if ( v71 && v71 != 6 )
      QuestBoardListViewItemDraw__SetStatusActive(v4, v71, v99 != 0 || eventEnt == 0LL || v71 != 1, v68);
    if ( IsPurchasedByRarePrism
      && QuestBoardListViewItemDraw__HasNewQuestInWar(
           (QuestBoardListViewItemDraw_o *)HasFlag,
           questList,
           warId,
           IsMainInterlude,
           v70) )
    {
      QuestBoardListViewItemDraw__SetStatusActive(v4, 1, 1, v68);
    }
    v72 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v72 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QuestBoardListViewItemDraw__SetNewIcon(
      v4,
      v72->static_fields->NEW_POS_AREA,
      v72->static_fields->NEW_W_AREA,
      v72->static_fields->NEW_H_AREA,
      v68);
    if ( IsMainInterlude && IsClosedWar )
      QuestBoardListViewItemDraw__SetStatusActive(v4, 2, 1, v74);
    QuestBoardListViewItemDraw__SetClearSprite(v4, v25, v73);
    QuestBoardListViewItemDraw__SetNextSprite(v4, AreaBoardInfo_k__BackingField, v25, v75);
  }
  else
  {
    if ( AreaBoardInfo_k__BackingField->fields.status == 1 )
      QuestBoardListViewItemDraw__SetStatusActive(v4, 1, 1, v68);
    v76 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v76 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QuestBoardListViewItemDraw__SetNewIcon(
      v4,
      v76->static_fields->NEW_POS_AREA,
      v76->static_fields->NEW_W_AREA,
      v76->static_fields->NEW_H_AREA,
      v68);
    v79 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v79 = BalanceConfig_TypeInfo;
    }
    if ( warId == v79->static_fields->MainInterludeWarId
      && (AreaBoardInfo_k__BackingField->fields.status & 0xFFFFFFFE) == 2 )
    {
      QuestBoardListViewItemDraw__SetStatusActive(v4, 2, 1, v78);
    }
    QuestBoardListViewItemDraw__SetClearSprite(v4, v25, v77);
    if ( !v25 )
      goto LABEL_170;
  }
  if ( WarEntity__IsContainPrioredEntity(v25, 18, 0LL) )
  {
    QuestBoardListViewItemDraw__SetStatusActive(v4, 2, 1, v81);
    QuestBoardListViewItemDraw__SetClearSprite(v4, v25, v82);
  }
  if ( WarEntity__IsDispWhiteMarkUnderBoard(v25, 0LL) )
    QuestBoardListViewItemDraw__SetBlackMarkAndWhiteMark(v4, v3, v25, 0, 0, v83);
LABEL_170:
  if ( IsPurchasedByRarePrism || v99 != 0 || eventEnt == 0LL )
    questCount = AreaBoardInfo_k__BackingField->fields.questCount;
  else
    questCount = 0;
  QuestBoardListViewItemDraw__SetBadge(v4, questCount, v80);
  QuestBoardListViewItemDraw__CreateInfoTextList(v4, v3, v96, v85);
  if ( !IsMainInterlude )
  {
    mInfoTextList = v4->fields.mInfoTextList;
    if ( !mInfoTextList )
      goto LABEL_197;
    questBoardItem = (QuestBoardListViewItem_o *)(unsigned int)mInfoTextList->fields._size;
    if ( (int)questBoardItem >= 1 )
    {
      v88 = v4->fields.mListViewObject;
      if ( !v88 )
        goto LABEL_197;
      this = (QuestBoardListViewItemDraw_o *)v88->fields.manager;
      if ( !this )
        goto LABEL_197;
      v89 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v89
        && (QuestBoardListViewManager_c *)this->klass->_2.typeHierarchy[v89 - 1] == QuestBoardListViewManager_TypeInfo )
      {
        AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt(
                         (QuestBoardListViewManager_o *)this,
                         (int32_t)questBoardItem,
                         0LL);
        if ( mInfoTextList->fields._size <= (unsigned int)AlphaAnimCnt )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        this = (QuestBoardListViewItemDraw_o *)mInfoTextList->fields._items->m_Items[AlphaAnimCnt];
        if ( this )
        {
          QuestBoardInformaionText__SetTime(
            (QuestBoardInformaionText_o *)this,
            &v4->fields.mOptionInfoLb,
            &v4->fields.mOptionInfoFrameSp,
            v90);
          this = (QuestBoardListViewItemDraw_o *)v4->fields.mOptionInfoLb;
          if ( this )
          {
            BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)this, 1.0, 0LL);
            v86 = 1;
            goto LABEL_186;
          }
        }
LABEL_197:
        sub_B2C434(this, questBoardItem);
      }
      goto LABEL_199;
    }
  }
  v86 = 0;
LABEL_186:
  this = (QuestBoardListViewItemDraw_o *)v4->fields.mOptionInfoLb;
  if ( !this )
    goto LABEL_197;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_197;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
  if ( !this )
    goto LABEL_197;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_197;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v86, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v4->fields.mOptionInfoLb;
  if ( !this )
    goto LABEL_197;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_197;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v86, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v57; // x1
  __int64 v58; // x1
  __int64 v59; // x19
  __int64 Instance; // x0
  __int64 size; // x1
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x22
  DataManager_o *v69; // x23
  QuestEntity_o *PhaseDetailedEntity; // x19
  unsigned int v71; // w26
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  __int64 v73; // x9
  int64_t v74; // x28
  int32_t dispType; // w20
  int v76; // s0
  int v77; // s1
  int v78; // s2
  int v79; // s3
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x24
  _BOOL4 v81; // w0
  int32_t v82; // w19
  _BOOL4 v83; // w25
  int32_t PhaseMax; // w0
  UnityEngine_GameObject_o *mLabelObj; // x8
  int32_t OverwriteBannerId_k__BackingField; // w8
  QuestBoardListViewItemDraw_c *v87; // x0
  struct QuestBoardListViewItemDraw_StaticFields *v88; // x9
  QuestBoardListViewItemDraw_c *v89; // x0
  System_String_o *QUEST_BOARD_SPNAME_PREFIX; // x23
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  System_String_o *v92; // x0
  System_String_o *v93; // x0
  UISprite_o *v94; // x24
  struct UISprite_o **p_mcBaseP; // x27
  System_String_o *v96; // x23
  const MethodInfo *v97; // x3
  int32_t questId; // w24
  UnityEngine_GameObject_o *gameObject; // x24
  QuestBoardListViewItemDraw_c *v100; // x8
  float NEXT_POS_X_QUEST; // w8
  bool v102; // w28
  int32_t v103; // w1
  const MethodInfo *v104; // x3
  QuestBoardListViewItemDraw_c *v105; // x0
  struct QuestBoardListViewItemDraw_StaticFields *v106; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  QuestBoardListViewItemDraw_c *v110; // x0
  const MethodInfo *v111; // x2
  struct QuestBoardListViewItemDraw_StaticFields *v112; // x8
  float v113; // s0
  float v114; // s1
  float v115; // s2
  const MethodInfo *v116; // x1
  const MethodInfo *v117; // x2
  UnityEngine_GameObject_o *v118; // x24
  QuestBoardListViewItemDraw_c *v119; // x0
  QuestBoardListViewItemDraw_o *v120; // x0
  const MethodInfo *v121; // x5
  System_String_o *RecommendLv; // x0
  const MethodInfo *v123; // x2
  const MethodInfo *v124; // x2
  UISprite_o *mLabelFaceMaskQuestSp; // x24
  QuestBoardListViewItemDraw_o *v126; // x0
  int32_t mCorners_high; // w23
  System_String_o *FaceMaskSpriteName; // x0
  const MethodInfo *v129; // x5
  bool v130; // w0
  const MethodInfo *v131; // x3
  UILabel_o *mTitleNameLb; // x24
  _BOOL8 enabled; // x0
  const MethodInfo *v134; // x3
  __int64 v135; // x26
  QuestBoardListViewItemDraw_o *v136; // x0
  const MethodInfo *v137; // x2
  UILabel_o *mLabelSubSectionNumLb; // x24
  const MethodInfo *v139; // x2
  bool v140; // w8
  QuestBoardListViewItemDraw_o *p_chapterSubId; // x0
  UISprite_o *mLabelNameSp; // x24
  QuestBoardListViewItemDraw_o *v143; // x0
  const MethodInfo *v144; // x3
  System_String_o *QuestIconName; // x23
  System_Action_o *v146; // x23
  const MethodInfo *v147; // x3
  UILabel_o *v148; // x23
  UILabel_o *v149; // x24
  const MethodInfo *v150; // x3
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  const MethodInfo *v152; // x2
  int32_t v153; // w23
  int32_t afterClear; // w24
  float v155; // s8
  float v156; // s9
  float v157; // s10
  float v158; // s11
  bool IsRepeatReward; // w0
  const MethodInfo *v160; // x4
  const MethodInfo *v161; // x3
  bool v162; // w24
  int v163; // w19
  const MethodInfo *v164; // x1
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *mInfoTextList; // x24
  const MethodInfo *v166; // x6
  int64_t *p_expireAt; // x8
  int64_t v168; // x24
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v169; // x25
  System_String_o *v170; // x23
  QuestBoardInformaionText_o *v171; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v172; // x26
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v173; // x19
  struct BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x25
  struct QuestBoardListViewObject_o *v175; // x8
  __int64 v176; // x10
  const MethodInfo *v177; // x3
  int32_t AlphaAnimCnt; // w23
  bool v179; // w24
  const MethodInfo *v180; // x1
  int32_t v181; // w25
  UISprite_o *mCostApSp; // x24
  System_String_o *ApSpriteFileName; // x23
  UnityEngine_GameObject_o *mChallengeObj; // x24
  QuestEntity_o *v185; // x21
  QuestBoardListViewItemDraw_c *v186; // x0
  struct QuestBoardListViewItemDraw_StaticFields *v187; // x10
  float *p_x; // x8
  float *p_y; // x9
  float *p_z; // x10
  __int64 *p_mChallengeLb; // x19
  struct QuestBoardListViewItemDraw_StaticFields *v192; // x8
  struct QuestBoardListViewItemDraw_StaticFields *v193; // x10
  EventDetailEntity_o *v194; // x23
  int32_t ClearNum; // w23
  UISprite_o *mcBaseP; // x24
  __int64 v197; // x8
  System_String_o *v198; // x23
  System_String_o *v199; // x0
  System_String_o *v200; // x23
  UISprite_o *challengeStrSpr; // x24
  UILabel_o *mChallengeLb; // x24
  UnityEngine_GameObject_o *mPhaseObj; // x23
  const MethodInfo *v204; // x4
  int32_t v205; // w19
  QuestBoardListViewItemDraw_c *v206; // x8
  int32_t v207; // w23
  __int16 v208; // w9
  int v209; // w10
  struct QuestBoardListViewItemDraw_StaticFields *v210; // x9
  int32_t PHASE_NORMAL_MAX; // w11
  _BOOL4 v212; // w25
  bool v213; // w26
  int32_t *p_QUEST_BOARD_PHASE_INTERVAL; // x9
  int32_t v215; // w27
  int v216; // w20
  bool v217; // w21
  int v218; // w22
  unsigned int v219; // w19
  struct UISprite_array *mPhaseSp; // x8
  Il2CppClass **v221; // x8
  UISprite_o *v222; // x28
  const MethodInfo *v223; // x6
  bool v224; // w2
  System_String_o *PhaseArrowSpriteName; // x0
  int v226; // s0
  QuestBoardListViewItemDraw_o *v230; // x0
  const MethodInfo *v231; // x3
  int32_t PhaseArrowIntervalSize; // w24
  QuestEntity_o *v233; // x22
  UnityEngine_GameObject_o *v234; // x23
  __int64 v235; // x26
  QuestBoardListViewItemDraw_c *v236; // x0
  UISprite_o *mDamageRecordSp; // x23
  System_String_o *QUEST_BOARD_DAMAGE_RECODE_NAME; // x24
  UserQuestRecordMaster_o *v239; // x23
  int64_t MaxTurnDamage; // x0
  UILabel_o *mDamageRecordLb; // x23
  Il2CppObject *v242; // x0
  UnityEngine_GameObject_o *v243; // x23
  QuestBoardListViewItemDraw_c *v244; // x0
  UISprite_o *mKnockdownRecordSp; // x23
  System_String_o *QUEST_BOARD_KNOCKDOWN_RECODE_NAME; // x24
  QuestKnockdownInfo_o *v247; // x23
  UserQuestRecordMaster_o *v248; // x24
  UILabel_o *mKnockdownRecordCountLb; // x24
  System_String_o *v250; // x25
  Il2CppObject *v251; // x0
  UILabel_o *mKnockdownRecordDamageLb; // x24
  System_String_o *v253; // x25
  Il2CppObject *v254; // x0
  UILabel_o *mKnockdownRecordPlusLb; // x25
  System_String_o *v256; // x24
  _QWORD **v257; // x20
  __int64 v258; // x26
  __int16 v259; // w8
  __int64 v260; // x26
  __int64 v261; // x26
  __int64 v262; // x26
  UILabel_o *mKnockdownRecordDamageNameLb; // x25
  System_String_o *v264; // x0
  _QWORD **v265; // x19
  System_String_o *v266; // x24
  __int64 v267; // x26
  __int16 v268; // w8
  __int64 v269; // x26
  __int64 v270; // x26
  __int64 v271; // x26
  UnityEngine_GameObject_o *v272; // x0
  QuestBoardListViewItemDraw_c *v273; // x8
  UnityEngine_GameObject_o *v274; // x23
  float QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX; // s0
  UnityEngine_GameObject_o *v276; // x0
  float LocalPositionX; // s0
  QuestBoardListViewItemDraw_c *v278; // x0
  float v279; // s8
  int32_t id; // w23
  TerminalSceneComponent_c *v281; // x0
  UnityEngine_GameObject_o *mQuestInfoShowing; // x0
  UnityEngine_GameObject_o *v283; // x23
  UILabel_o *mOptionRestrinctionLb; // x23
  UnityEngine_GameObject_o *v285; // x23
  UnityEngine_Behaviour_o *v286; // x23
  const MethodInfo *v287; // x3
  struct QuestPhaseDetailEntity_BoardList_o *boardMessage; // x8
  System_Collections_Generic_IEnumerable_TSource__o *list; // x0
  UnityEngine_GameObject_c *klass; // x8
  QuestPhaseDetailEntity_BoardInfo_array *v291; // x25
  _QWORD *monitor; // x8
  QuestPhaseDetailEntity_BoardInfo_o *v293; // x8
  bool v294; // w23
  bool v295; // w25
  char v296; // w28
  UnityEngine_GameObject_o **p_mCostConsumeBattleWinSp; // x19
  bool v298; // w24
  UISprite_o *mOptionPreBattleSp; // x24
  QuestBoardListViewItemDraw_c *v300; // x0
  System_String_o *PRE_BATTLE_ORGANIZATION; // x26
  bool v302; // w24
  struct System_Collections_Generic_List_UISprite__o *mMultiSecondBattleInformation; // x8
  char v304; // w24
  UnityEngine_GameObject_o *v305; // x23
  QuestBoardListViewItemDraw_c *v306; // x8
  const MethodInfo *v307; // x2
  UnityEngine_GameObject_o *v308; // x23
  int32_t restrictionDefaultWidth; // w1
  const MethodInfo *v310; // x2
  struct UILabel_o *v311; // x8
  QuestBoardListViewItemDraw_c *v312; // x0
  QuestBoardListViewItemDraw_c *v313; // x0
  int32_t mSpacingX; // w19
  QuestPhaseEntity_o *v315; // x0
  QuestPhaseEntity_o *v316; // x23
  struct System_Int32_array *classIds; // x8
  bool v318; // w24
  struct ServantClassIconComponent_array *mClassIcons; // x8
  int max_length; // w19
  struct System_Int32_array *v321; // x20
  int v322; // w21
  int v323; // w9
  __int64 v324; // x22
  Il2CppClass **v325; // x8
  UnityEngine_Component_o *v326; // x23
  UnityEngine_Object_o *eventTarget; // x22
  UnityEngine_Object_o *eventTargetComponent; // x22
  ViewEnemyEntity_array *EntityListFromQuestId; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v330; // x22
  QuestBoardListViewItemDraw___c_c *v331; // x0
  struct QuestBoardListViewItemDraw___c_StaticFields *v332; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__298_1; // x23
  Il2CppObject *v334; // x24
  struct QuestBoardListViewItemDraw___c_StaticFields *v335; // x0
  System_String_array **v336; // x2
  System_String_array **v337; // x3
  System_Boolean_array **v338; // x4
  System_Int32_array **v339; // x5
  System_Int32_array *v340; // x6
  System_Int32_array *v341; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v342; // x0
  System_Int32_array *v343; // x22
  UnityEngine_Object_o *alloutRoot; // x21
  UnityEngine_Object_o *alloutRootComponent; // x21
  int32_t v346; // w21
  QuestBoardListViewItemDraw_c *v347; // x0
  int *p_RESTRICTION_FONT_WIDTH_ALLOUT; // x8
  UISprite_o *v349; // x24
  __int64 v350; // x8
  UISprite_o *mLabelChapterSp; // x24
  QuestBoardListViewItemDraw_o *v352; // x0
  const MethodInfo *v353; // x2
  System_String_o *QuestIconNameForMainType; // x23
  int32_t QuestBoardSectionId; // w0
  int32_t v356; // w25
  QuestBoardListViewItemDraw_c *v357; // x0
  UISprite_o *mLabelBoardSectionSp; // x24
  System_String_o *CHAPTER_SP_UNIT_NAME; // x23
  Il2CppObject *v360; // x0
  System_String_o *v361; // x23
  __int64 v362; // x0
  __int64 v363; // x0
  QuestBoardListViewItemDraw_o *v364; // x0
  QuestBoardListViewItem_o *v365; // x1
  const MethodInfo *v366; // x2
  EventCampaignEntity_o *v367; // [xsp+0h] [xbp-130h]
  const MethodInfo *v368; // [xsp+10h] [xbp-120h]
  int64_t nowTime; // [xsp+28h] [xbp-108h]
  QuestBoardListViewItem_o *v370; // [xsp+30h] [xbp-100h]
  int v371; // [xsp+3Ch] [xbp-F4h]
  int v372; // [xsp+40h] [xbp-F0h]
  int key; // [xsp+44h] [xbp-ECh]
  DataManager_o *v374; // [xsp+48h] [xbp-E8h]
  int32_t v375; // [xsp+50h] [xbp-E0h]
  int32_t questPhase; // [xsp+54h] [xbp-DCh]
  bool HasFlag; // [xsp+58h] [xbp-D8h]
  MapControl_QuestInfo_o *v378; // [xsp+58h] [xbp-D8h]
  __int64 v379; // [xsp+60h] [xbp-D0h]
  _BOOL4 v380; // [xsp+6Ch] [xbp-C4h]
  QuestEntity_o *v381; // [xsp+70h] [xbp-C0h]
  QuestBoardListViewItemDraw_o *v382; // [xsp+78h] [xbp-B8h]
  int64_t totalDamage; // [xsp+80h] [xbp-B0h] BYREF
  int64_t knockdownNum; // [xsp+88h] [xbp-A8h] BYREF
  QuestPhaseDetailEntity_o *v385; // [xsp+90h] [xbp-A0h] BYREF
  int32_t v386; // [xsp+98h] [xbp-98h] BYREF
  __int64 fixedVal; // [xsp+9Ch] [xbp-94h] BYREF
  bool isTripleItemConsume; // [xsp+A4h] [xbp-8Ch] BYREF
  bool isDoubleItemConsumeQp; // [xsp+A8h] [xbp-88h] BYREF
  bool isDoubleItemConsume; // [xsp+ACh] [xbp-84h] BYREF
  UserQuestEntity_o *entity; // [xsp+B0h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v392; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v393; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v395; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v396; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v397; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_418A288 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, questBoardItem);
    sub_B2C35C(&Method_System_Array_Empty_object___, v5);
    sub_B2C35C(&AtlasManager_TypeInfo, v6);
    sub_B2C35C(&CondType_TypeInfo, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestGroupMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestRecordMaster___, v14);
    sub_B2C35C(&Method_DataManager_GetMaster_ViewEnemyMaster___, v15);
    sub_B2C35C(&DataManager_TypeInfo, v16);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v17);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___, v18);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_QuestPhaseDetailEntity_BoardInfo___, v19);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v20);
    sub_B2C35C(&Method_System_Func_ViewEnemyEntity__int___ctor__, v21);
    sub_B2C35C(&System_Func_ViewEnemyEntity__int__TypeInfo, v22);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewMultiLimitedFormation___, v23);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v24);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIButton___, v25);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v26);
    sub_B2C35C(&int_TypeInfo, v27);
    sub_B2C35C(&long_TypeInfo, v28);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__, v29);
    sub_B2C35C(&Method_System_Collections_Generic_List_UISprite__Add__, v30);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__, v31);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, v32);
    sub_B2C35C(&Method_System_Collections_Generic_List_UISprite__get_Count__, v33);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__, v34);
    sub_B2C35C(&LocalizationManager_TypeInfo, v35);
    sub_B2C35C(&NetworkManager_TypeInfo, v36);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v37);
    sub_B2C35C(&QuestBoardInformaionText_TypeInfo, v38);
    sub_B2C35C(&QuestBoardListViewItemDraw_TypeInfo, v39);
    sub_B2C35C(&QuestBoardListViewManager_TypeInfo, v40);
    sub_B2C35C(&QuestInformationComponent_TypeInfo, v41);
    sub_B2C35C(&QuestKnockdownInfo_TypeInfo, v42);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v43);
    sub_B2C35C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v44);
    sub_B2C35C(&SingletonTemplate_clsQuestCheck__TypeInfo, v45);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v46);
    sub_B2C35C(&Method_QuestBoardListViewItemDraw___c__SetItemOfQuest_b__298_1__, v47);
    sub_B2C35C(&Method_QuestBoardListViewItemDraw___c__DisplayClass298_0__SetItemOfQuest_b__0__, v48);
    sub_B2C35C(&QuestBoardListViewItemDraw___c__DisplayClass298_0_TypeInfo, v49);
    sub_B2C35C(&QuestBoardListViewItemDraw___c_TypeInfo, v50);
    sub_B2C35C(&StringLiteral_13408/*"TIME_REST_QUEST_BOARD_QUEST"*/, v51);
    sub_B2C35C(&StringLiteral_21636/*"questboard_challenge"*/, v52);
    sub_B2C35C(&StringLiteral_10896/*"QUEST_BOARD_KNOCKDOWN_PLUS"*/, v53);
    sub_B2C35C(&StringLiteral_10893/*"QUEST_BOARD_KNOCKDOWN_COUNT"*/, v54);
    sub_B2C35C(&StringLiteral_23489/*"{0:#,0}"*/, v55);
    sub_B2C35C(&StringLiteral_10895/*"QUEST_BOARD_KNOCKDOWN_DAMAGE_NAME"*/, v56);
    sub_B2C35C(&StringLiteral_10894/*"QUEST_BOARD_KNOCKDOWN_DAMAGE"*/, v57);
    sub_B2C35C(&StringLiteral_21637/*"questboard_crushing"*/, v58);
    byte_418A288 = 1;
  }
  entity = 0LL;
  isDoubleItemConsume = 0;
  isDoubleItemConsumeQp = 0;
  isTripleItemConsume = 0;
  fixedVal = 0LL;
  v386 = 0;
  v385 = 0LL;
  v59 = sub_B2C42C(QuestBoardListViewItemDraw___c__DisplayClass298_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass298_0___ctor(
    (QuestBoardListViewItemDraw___c__DisplayClass298_0_o *)v59,
    0LL);
  if ( !v59 )
    goto LABEL_626;
  *(_QWORD *)(v59 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v59 + 16), (System_Int32_array **)this, v62, v63, v64, v65, v66, v67);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !questBoardItem )
    goto LABEL_626;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_626;
  v69 = (DataManager_o *)Instance;
  v379 = v59;
  Instance = (__int64)MapControl_QuestInfo__GetMine(questBoardItem->fields._quest_info_k__BackingField, 0LL);
  if ( !Instance )
    goto LABEL_626;
  PhaseDetailedEntity = QuestEntity__GetPhaseDetailedEntity((QuestEntity_o *)Instance, 0LL);
  Instance = MapControl_QuestInfo__GetQuestType(quest_info_k__BackingField, 0LL);
  if ( !v69 )
    goto LABEL_626;
  v71 = Instance;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        v69,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !PhaseDetailedEntity )
    goto LABEL_626;
  if ( !Instance )
    goto LABEL_626;
  Instance = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Instance, PhaseDetailedEntity->fields.id, 0LL);
  mListViewObject = this->fields.mListViewObject;
  key = Instance;
  if ( !mListViewObject )
    goto LABEL_626;
  Instance = (__int64)mListViewObject->fields.manager;
  if ( !Instance )
    goto LABEL_626;
  v73 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v73
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v73 - 8) != QuestBoardListViewManager_TypeInfo )
  {
    sub_B2C728(Instance);
    goto LABEL_630;
  }
  v74 = *(_QWORD *)(Instance + 568);
  dispType = quest_info_k__BackingField->fields.dispType;
  HasFlag = QuestEntity__HasFlag(PhaseDetailedEntity, 2LL, 0LL);
  if ( dispType == 2 )
    *(UnityEngine_Color_o *)&v76 = UnityEngine_Color__get_gray(0LL);
  else
    *(UnityEngine_Color_o *)&v76 = UnityEngine_Color__get_white(0LL);
  *(_DWORD *)(v379 + 24) = v76;
  *(_DWORD *)(v379 + 28) = v77;
  *(_DWORD *)(v379 + 32) = v78;
  *(_DWORD *)(v379 + 36) = v79;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              v69,
                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_626;
  UserQuestMaster__TryGetEntity(
    MasterData_WarQuestSelectionMaster,
    &entity,
    Instance,
    PhaseDetailedEntity->fields.id,
    0LL);
  isDoubleItemConsume = 0;
  isDoubleItemConsumeQp = 0;
  isTripleItemConsume = 0;
  Instance = (__int64)MapControl_QuestInfo__GetMine(quest_info_k__BackingField, 0LL);
  if ( !Instance )
    goto LABEL_626;
  v380 = QuestEntity__HasFlag((QuestEntity_o *)Instance, 0x10000000000000LL, 0LL);
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v381 = PhaseDetailedEntity;
  Instance = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_626;
  v81 = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, quest_info_k__BackingField->fields.questId, 0, 0LL);
  v82 = quest_info_k__BackingField->fields.questPhase;
  v83 = v81;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0LL);
  Instance = UnityEngine_Mathf__Min_40694704(v82 + 1, PhaseMax, 0LL);
  mLabelObj = this->fields.mLabelObj;
  questPhase = Instance;
  if ( !mLabelObj )
    goto LABEL_626;
  UnityEngine_GameObject__SetActive(mLabelObj, 1, 0LL);
  Instance = (__int64)this->fields.mLabelNameSp;
  if ( !Instance )
    goto LABEL_626;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_626;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mLabelChapterSp;
  if ( !Instance )
    goto LABEL_626;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_626;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mLabelFaceMaskShortcutSp;
  if ( !Instance )
    goto LABEL_626;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_626;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mLabelFaceMaskQuestSp;
  if ( !Instance )
    goto LABEL_626;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_626;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.mTitleObj;
  if ( !Instance )
    goto LABEL_626;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.mTitleShortcutLb;
  if ( !Instance )
    goto LABEL_626;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_626;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mOptionObj;
  if ( !Instance )
    goto LABEL_626;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.mRewardObj;
  if ( !Instance )
    goto LABEL_626;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_626;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_626;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mCondObject;
  if ( !Instance )
    goto LABEL_626;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  OverwriteBannerId_k__BackingField = questBoardItem->fields._OverwriteBannerId_k__BackingField;
  v382 = this;
  v375 = dispType;
  v374 = v69;
  v370 = questBoardItem;
  if ( OverwriteBannerId_k__BackingField < 1 )
  {
    if ( v381->fields.bannerId < 1 )
    {
      p_mcBaseP = &this->fields.mcBaseP;
      mcBaseP = this->fields.mcBaseP;
      if ( v71 <= 5 && ((1 << v71) & 0x26) != 0 )
      {
        Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
        }
        v197 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 1016LL);
        if ( !v197 )
          goto LABEL_626;
        if ( v71 < *(_DWORD *)(v197 + 24) )
        {
          v198 = *(System_String_o **)(v197 + 8LL * (int)v71 + 32);
          v199 = System_Int32__ToString((int)v381 + 60, 0LL);
          v200 = System_String__Concat_44305532(v198, v199, 0LL);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetBanner(mcBaseP, v200, 0LL);
          goto LABEL_58;
        }
      }
      else
      {
        if ( !mcBaseP )
          goto LABEL_626;
        UISprite__set_atlas(this->fields.mcBaseP, this->fields.mTerminalAtlas, 0LL);
        v349 = this->fields.mcBaseP;
        Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
        }
        v350 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 1016LL);
        if ( !v350 )
          goto LABEL_626;
        if ( v71 < *(_DWORD *)(v350 + 24) )
        {
          if ( !v349 )
            goto LABEL_626;
          UISprite__set_spriteName(v349, *(System_String_o **)(v350 + 8LL * (int)v71 + 32), 0LL);
          goto LABEL_58;
        }
      }
LABEL_628:
      v363 = sub_B2C460(Instance);
      sub_B2C400(v363, 0LL);
    }
    v89 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v89 = QuestBoardListViewItemDraw_TypeInfo;
    }
    static_fields = v89->static_fields;
    LODWORD(v89) = (_DWORD)v381 + 64;
    QUEST_BOARD_SPNAME_PREFIX = static_fields->QUEST_BOARD_SPNAME_PREFIX;
  }
  else
  {
    v87 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v87 = QuestBoardListViewItemDraw_TypeInfo;
      OverwriteBannerId_k__BackingField = questBoardItem->fields._OverwriteBannerId_k__BackingField;
    }
    v88 = v87->static_fields;
    v89 = (QuestBoardListViewItemDraw_c *)&v386;
    QUEST_BOARD_SPNAME_PREFIX = v88->QUEST_BOARD_SPNAME_PREFIX;
    v386 = OverwriteBannerId_k__BackingField;
  }
  v92 = System_Int32__ToString((int32_t)v89, 0LL);
  v93 = System_String__Concat_44305532(QUEST_BOARD_SPNAME_PREFIX, v92, 0LL);
  p_mcBaseP = &this->fields.mcBaseP;
  v94 = this->fields.mcBaseP;
  v96 = v93;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = AtlasManager__SetEventUI(v94, v96, 0LL);
  if ( !v94 )
    goto LABEL_626;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v94, Instance & 1, 0LL);
LABEL_58:
  Instance = (__int64)*p_mcBaseP;
  if ( !*p_mcBaseP )
    goto LABEL_626;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 840LL))(
    Instance,
    *(_QWORD *)(*(_QWORD *)Instance + 848LL));
  Instance = (__int64)*p_mcBaseP;
  if ( !*p_mcBaseP )
    goto LABEL_626;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_626;
  Instance = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                        (UnityEngine_GameObject_o *)Instance,
                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Instance )
    goto LABEL_626;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v379 + 24), 0LL);
  if ( MapControl_QuestInfo__GetQuestType(quest_info_k__BackingField, 0LL) == 1
    && MapControl_QuestInfo__IsDisaplayable(quest_info_k__BackingField, 0LL) )
  {
    Instance = (__int64)MapControl_QuestInfo__GetMine(quest_info_k__BackingField, 0LL);
    if ( !Instance )
      goto LABEL_626;
    if ( !QuestEntity__HasFlag((QuestEntity_o *)Instance, 0x400000000000LL, 0LL) )
    {
      questId = quest_info_k__BackingField->fields.questId;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( !CondType__IsQuestClear_25746984(questId, -1, 1, 0LL) )
      {
        Instance = (__int64)this->fields.mNextSp;
        if ( !Instance )
          goto LABEL_626;
        Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_626;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        Instance = (__int64)this->fields.mNextSp;
        if ( !Instance )
          goto LABEL_626;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        v100 = QuestBoardListViewItemDraw_TypeInfo;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v100 = QuestBoardListViewItemDraw_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionX(gameObject, v100->static_fields->NEXT_POS_X_QUEST, 0LL);
        Instance = (__int64)this->fields.mNextSp;
        if ( !Instance )
          goto LABEL_626;
        Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_626;
        Instance = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)Instance,
                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
        if ( !Instance )
          goto LABEL_626;
        NEXT_POS_X_QUEST = QuestBoardListViewItemDraw_TypeInfo->static_fields->NEXT_POS_X_QUEST;
        *(float *)(Instance + 120) = NEXT_POS_X_QUEST;
        *(float *)(Instance + 132) = NEXT_POS_X_QUEST;
      }
    }
  }
  nowTime = v74;
  v372 = v83 && !v380;
  v102 = !v83 || v380;
  if ( dispType != 2 || !v102 )
  {
    if ( quest_info_k__BackingField->fields.isNew )
    {
      v103 = 1;
    }
    else
    {
      if ( (v372 & 1) == 0 )
        goto LABEL_86;
      v103 = 2;
    }
    QuestBoardListViewItemDraw__SetStatusActive(this, v103, 1, v97);
  }
LABEL_86:
  if ( quest_info_k__BackingField->fields.pickupPriority >= 1 )
    QuestBoardListViewItemDraw__SetStatusActive(this, 4, 1, v97);
  QuestBoardListViewItemDraw__SetPickupIcon(this, (const MethodInfo *)size);
  Instance = (__int64)this->fields.mNextSp;
  if ( !Instance )
    goto LABEL_626;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_626;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    v105 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v105 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v106 = v105->static_fields;
    x = v106->NEW_POS_QUEST_NEXT.fields.x;
    y = v106->NEW_POS_QUEST_NEXT.fields.y;
    z = v106->NEW_POS_QUEST_NEXT.fields.z;
LABEL_100:
    QuestBoardListViewItemDraw__SetNewIcon(
      this,
      *(UnityEngine_Vector3_o *)&x,
      v106->NEW_W_DEFAULT,
      v106->NEW_H_DEFAULT,
      v104);
    v112 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
    v113 = v112->PREV_POS_QUEST_NEXT.fields.x;
    v114 = v112->PREV_POS_QUEST_NEXT.fields.y;
    v115 = v112->PREV_POS_QUEST_NEXT.fields.z;
    goto LABEL_101;
  }
  v110 = QuestBoardListViewItemDraw_TypeInfo;
  if ( quest_info_k__BackingField->fields.pickupPriority >= 1 )
  {
    if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v110 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v106 = v110->static_fields;
    x = v106->NEW_POS_QUEST.fields.x;
    y = v106->NEW_POS_QUEST.fields.y;
    z = v106->NEW_POS_QUEST.fields.z;
    goto LABEL_100;
  }
  if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v110 = QuestBoardListViewItemDraw_TypeInfo;
  }
  QuestBoardListViewItemDraw__SetNewIcon(
    this,
    v110->static_fields->NEW_POS_QUEST,
    v110->static_fields->NEW_W_DEFAULT,
    v110->static_fields->NEW_H_DEFAULT,
    v104);
  v192 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  v113 = v192->PREV_POS_QUEST.fields.x;
  v114 = v192->PREV_POS_QUEST.fields.y;
  v115 = v192->PREV_POS_QUEST.fields.z;
LABEL_101:
  QuestBoardListViewItemDraw__SetPrevSprite(this, v381, *(UnityEngine_Vector3_o *)&v113, v111);
  if ( dispType != 2
    && quest_info_k__BackingField->fields.isNew
    && quest_info_k__BackingField->fields.pickupPriority >= 1 )
  {
    QuestBoardListViewItemDraw__SetStatusToggle(this, v116);
  }
  Instance = (__int64)QuestBoardListViewItemDraw__GetStatusSp(this, 2, v117);
  if ( !Instance )
    goto LABEL_626;
  v118 = (UnityEngine_GameObject_o *)Instance;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    v119 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v119 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v118, v119->static_fields->CLEAR_POS_QUEST, 0LL);
  }
  Instance = (__int64)this->fields.mNoBattleObj;
  if ( !Instance )
    goto LABEL_626;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, HasFlag, 0LL);
  RecommendLv = QuestBoardListViewItemDraw__GetRecommendLv(v120, v381, questPhase, !HasFlag, dispType == 2, v121);
  QuestBoardListViewItemDraw__SetRecommendLv(this, RecommendLv, *(UnityEngine_Color_o *)(v379 + 24), v123);
  mLabelFaceMaskQuestSp = this->fields.mLabelFaceMaskQuestSp;
  v126 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v126 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  }
  mCorners_high = HIDWORD(v126->fields.mTitleLevelSp[1].fields.mCorners);
  FaceMaskSpriteName = QuestBoardListViewItemDraw__GetFaceMaskSpriteName(v126, v71, v124);
  v130 = QuestBoardListViewItemDraw__SetFaceImage(
           this,
           v381,
           mLabelFaceMaskQuestSp,
           mCorners_high,
           FaceMaskSpriteName,
           *(UnityEngine_Color_o *)(v379 + 24),
           v129);
  mTitleNameLb = this->fields.mTitleNameLb;
  v371 = !HasFlag;
  if ( v130 )
  {
    Instance = (__int64)QuestBoardListViewItemDraw__GetDispQuestName(this, v381, v71, v131);
    if ( !mTitleNameLb )
      goto LABEL_626;
    UILabel__set_text(mTitleNameLb, (System_String_o *)Instance, 0LL);
    v135 = v379;
    goto LABEL_142;
  }
  Instance = (__int64)QuestEntity__getQuestName(v381, 0LL);
  if ( !mTitleNameLb )
    goto LABEL_626;
  UILabel__set_text(mTitleNameLb, (System_String_o *)Instance, 0LL);
  if ( v71 != 1
    || !(enabled = QuestBoardListViewItemDraw__IsMainWar(v136, quest_info_k__BackingField->fields.warId, v137)) )
  {
    Instance = (__int64)this->fields.boardIconTexture;
    if ( !Instance )
      goto LABEL_626;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0LL);
    Instance = (__int64)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_626;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_626;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    mLabelNameSp = this->fields.mLabelNameSp;
    QuestIconName = QuestBoardListViewItemDraw__GetQuestIconName(v143, v381, v71, v144);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    Instance = AtlasManager__SetEventUI(mLabelNameSp, QuestIconName, 0LL);
    v135 = v379;
    if ( !mLabelNameSp )
      goto LABEL_626;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLabelNameSp, Instance & 1, 0LL);
    Instance = (__int64)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_626;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 840LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 848LL));
    Instance = (__int64)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_626;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_626;
    Instance = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          (UnityEngine_GameObject_o *)Instance,
                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !Instance )
      goto LABEL_626;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v379 + 24), 0LL);
    Instance = (__int64)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_626;
    enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Instance, 0LL);
    if ( !enabled )
    {
      *(_DWORD *)(v379 + 40) = v381->fields.id;
      v146 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v146,
        (Il2CppObject *)v379,
        Method_QuestBoardListViewItemDraw___c__DisplayClass298_0__SetItemOfQuest_b__0__,
        0LL);
      QuestBoardListViewItemDraw__LoadBoardIconTexture(this, v381, v146, v147);
    }
LABEL_142:
    if ( dispType != 2 )
      goto LABEL_146;
    goto LABEL_143;
  }
  v135 = v379;
  if ( dispType == 2 )
  {
LABEL_143:
    if ( quest_info_k__BackingField->fields.questReleaseClosedID >= 1 )
    {
      v148 = this->fields.mTitleNameLb;
      Instance = (__int64)QuestBoardListViewItemDraw__GetAdvanceNoticeText(
                            (QuestBoardListViewItemDraw_o *)enabled,
                            quest_info_k__BackingField,
                            v381,
                            v134);
      if ( !v148 )
        goto LABEL_626;
      UILabel__set_text(v148, (System_String_o *)Instance, 0LL);
    }
    goto LABEL_146;
  }
  Instance = (__int64)this->fields.mLabelSubSectionNumLb;
  if ( !Instance )
    goto LABEL_626;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_626;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  if ( v381->fields.iconId <= 0 && System_String__IsNullOrEmpty(v381->fields.chapterSubStr, 0LL) )
  {
    mLabelSubSectionNumLb = this->fields.mLabelSubSectionNumLb;
    v140 = QuestEntity__HasFlag(v381, 0x40000LL, 0LL);
    p_chapterSubId = (QuestBoardListViewItemDraw_o *)&v381->fields.chapterSubId;
    if ( v140 )
      Instance = (__int64)QuestBoardListViewItemDraw__ConvertToChineseAscii(
                            p_chapterSubId,
                            (int32_t)p_chapterSubId->klass,
                            v139);
    else
      Instance = (__int64)System_Int32__ToString((int32_t)p_chapterSubId, 0LL);
    size = Instance;
    if ( !mLabelSubSectionNumLb )
      goto LABEL_626;
    UILabel__set_text(mLabelSubSectionNumLb, (System_String_o *)Instance, 0LL);
    Instance = (__int64)this->fields.mLabelSubSectionNumLb;
    if ( !Instance )
      goto LABEL_626;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_626;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  }
  Instance = (__int64)this->fields.mLabelChapterSp;
  if ( !Instance )
    goto LABEL_626;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_626;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  mLabelChapterSp = this->fields.mLabelChapterSp;
  QuestIconNameForMainType = QuestBoardListViewItemDraw__GetQuestIconNameForMainType(v352, v381, v353);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = AtlasManager__SetEventUI(mLabelChapterSp, QuestIconNameForMainType, 0LL);
  if ( !mLabelChapterSp )
    goto LABEL_626;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLabelChapterSp, Instance & 1, 0LL);
  Instance = (__int64)this->fields.mLabelChapterSp;
  if ( !Instance )
    goto LABEL_626;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 840LL))(
    Instance,
    *(_QWORD *)(*(_QWORD *)Instance + 848LL));
  Instance = (__int64)quest_info_k__BackingField->fields._WarInfo_k__BackingField;
  if ( !Instance )
    goto LABEL_626;
  Instance = (__int64)MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_626;
  QuestBoardSectionId = WarEntity__GetQuestBoardSectionId((WarEntity_o *)Instance, 0LL);
  if ( QuestBoardSectionId )
  {
    v356 = QuestBoardSectionId;
    v357 = QuestBoardListViewItemDraw_TypeInfo;
    mLabelBoardSectionSp = this->fields.mLabelBoardSectionSp;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v357 = QuestBoardListViewItemDraw_TypeInfo;
    }
    CHAPTER_SP_UNIT_NAME = v357->static_fields->CHAPTER_SP_UNIT_NAME;
    LODWORD(knockdownNum) = v356;
    v360 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &knockdownNum);
    v361 = System_String__Format(CHAPTER_SP_UNIT_NAME, v360, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    Instance = AtlasManager__SetEventUI(mLabelBoardSectionSp, v361, 0LL);
    if ( !mLabelBoardSectionSp )
      goto LABEL_626;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLabelBoardSectionSp, Instance & 1, 0LL);
    Instance = (__int64)this->fields.mLabelBoardSectionSp;
    if ( !Instance )
      goto LABEL_626;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 840LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 848LL));
  }
LABEL_146:
  Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
  v149 = this->fields.mTitleNameLb;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  }
  if ( !v149 )
    goto LABEL_626;
  UILabel__SetCondensedScale(v149, QuestBoardListViewItemDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH, 0LL);
  Instance = (__int64)this->fields.mTitleNameLb;
  if ( !Instance )
    goto LABEL_626;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v135 + 24), 0LL);
  if ( dispType == 2 )
  {
    Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          v374,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
    if ( !Instance )
      goto LABEL_626;
    EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                               (QuestReleaseOverwriteMaster_o *)Instance,
                               v381->fields.id,
                               nowTime,
                               0LL);
    QuestBoardListViewItemDraw__SetupCondtionChangeMessage(this, EntityByQuestIdAndTime, v152);
  }
  QuestBoardListViewItemDraw__SetupRewardIconDisp(this, v381, dispType == 2, *(UnityEngine_Color_o *)(v135 + 24), v150);
  v153 = quest_info_k__BackingField->fields.questId;
  afterClear = v381->fields.afterClear;
  v155 = *(float *)(v135 + 24);
  v156 = *(float *)(v135 + 28);
  v157 = *(float *)(v135 + 32);
  v158 = *(float *)(v135 + 36);
  IsRepeatReward = QuestEntity__IsRepeatReward(v381, 0LL);
  v396.fields.r = v155;
  v396.fields.g = v156;
  v396.fields.b = v157;
  v396.fields.a = v158;
  QuestBoardListViewItemDraw__SetupFirstRewardDisp(this, v153, afterClear, v396, IsRepeatReward, v160);
  QuestBoardListViewItemDraw__SetupRewardGotAndNotGiveDisp(
    this,
    quest_info_k__BackingField,
    entity,
    *(UnityEngine_Color_o *)(v135 + 24),
    v161);
  if ( entity && UserQuestEntity__HasStatus(entity, 8, 0LL) )
  {
    Instance = (__int64)quest_info_k__BackingField->fields._WarInfo_k__BackingField;
    if ( !Instance )
      goto LABEL_626;
    Instance = (__int64)MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_626;
    v162 = !WarEntity__IsShop((WarEntity_o *)Instance, 0LL);
    v163 = 1;
  }
  else
  {
    v163 = 0;
    v162 = 0;
  }
  Instance = (__int64)this->fields.mRarePrismSp;
  if ( !Instance )
    goto LABEL_626;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_626;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v162, 0LL);
  QuestBoardListViewItemDraw__ResetInfoTextList(this, v164);
  fixedVal = 0xFFFFFFFFLL;
  mInfoTextList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields.mInfoTextList;
  Instance = (__int64)QuestBoardListViewItemDraw__GetCampaignText(
                        this,
                        v381->fields.id,
                        questPhase,
                        v102,
                        (int32_t *)&fixedVal + 1,
                        (int32_t *)&fixedVal,
                        v166);
  if ( !mInfoTextList )
    goto LABEL_626;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    mInfoTextList,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
  Instance = (__int64)this->fields.mRarePrismSp;
  if ( !Instance )
    goto LABEL_626;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_626;
  Instance = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( v163 | Instance & 1 )
  {
    Instance = (__int64)entity;
    if ( !entity )
      goto LABEL_626;
    Instance = UserQuestEntity__IsExpireNoLimit(entity, 0LL);
    if ( (Instance & 1) != 0 )
      goto LABEL_178;
    if ( !entity )
      goto LABEL_626;
    p_expireAt = &entity->fields.expireAt;
  }
  else
  {
    p_expireAt = &quest_info_k__BackingField->fields.endTime;
  }
  v168 = *p_expireAt;
  if ( *p_expireAt >= 1 )
  {
    Instance = QuestEntity__HasFlag(v381, 32LL, 0LL);
    if ( (Instance & 1) == 0 )
    {
      v169 = this->fields.mInfoTextList;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v170 = LocalizationManager__Get((System_String_o *)StringLiteral_13408/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0LL);
      v171 = (QuestBoardInformaionText_o *)sub_B2C42C(QuestBoardInformaionText_TypeInfo);
      v397.fields.r = 0.0;
      v397.fields.g = 0.0;
      v397.fields.b = 0.0;
      v397.fields.a = 0.0;
      v395.fields.x = 0.0;
      v395.fields.y = 0.0;
      v395.fields.z = 0.0;
      v172 = (EventMissionProgressRequest_Argument_ProgressData_o *)v171;
      QuestBoardInformaionText___ctor(v171, v170, v168, 0, 0, v397, -1, 0, v395, 1, v367, 0LL, v368);
      if ( !v169 )
        goto LABEL_626;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v169,
        v172,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
      v135 = v379;
    }
  }
LABEL_178:
  v173 = this->fields.mInfoTextList;
  if ( !v173 )
    goto LABEL_626;
  size = (unsigned int)v173->fields._size;
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  if ( (int)size < 1 )
  {
    v179 = 0;
    goto LABEL_190;
  }
  v175 = this->fields.mListViewObject;
  if ( !v175 )
    goto LABEL_626;
  Instance = (__int64)v175->fields.manager;
  if ( !Instance )
    goto LABEL_626;
  v176 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v176
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v176 - 8) != QuestBoardListViewManager_TypeInfo )
  {
LABEL_630:
    sub_B2C728(Instance);
    QuestBoardListViewItemDraw__SetItemOfWarBoard(v364, v365, v366);
    return;
  }
  AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt((QuestBoardListViewManager_o *)Instance, size, 0LL);
  if ( v173->fields._size <= (unsigned int)AlphaAnimCnt )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  Instance = (__int64)v173->fields._items->m_Items[AlphaAnimCnt];
  if ( !Instance )
    goto LABEL_626;
  QuestBoardInformaionText__SetTime(
    (QuestBoardInformaionText_o *)Instance,
    &this->fields.mOptionInfoLb,
    &this->fields.mOptionInfoFrameSp,
    v177);
  Instance = (__int64)this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_626;
  BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)Instance, 1.0, 0LL);
  v179 = 1;
  quest_info_k__BackingField->fields.costCalcVal = HIDWORD(fixedVal);
  quest_info_k__BackingField->fields._fixedCostVal_k__BackingField = fixedVal;
LABEL_190:
  Instance = (__int64)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_626;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_626;
  Instance = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_626;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_626;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v179, 0LL);
  Instance = (__int64)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_626;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_626;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v179, 0LL);
  QuestBoardListViewItemDraw__SetCostDisp(
    this,
    v381,
    dispType == 2,
    SHIDWORD(fixedVal),
    fixedVal,
    *(UnityEngine_Color_o *)(v135 + 24),
    &isDoubleItemConsume,
    &isDoubleItemConsumeQp,
    &isTripleItemConsume,
    (const MethodInfo *)v367);
  v181 = v370->fields._OverwriteBannerId_k__BackingField;
  if ( v181 >= 1 )
  {
    mCostApSp = this->fields.mCostApSp;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    }
    ApSpriteFileName = QuestBoardListViewItemDraw__GetApSpriteFileName(v181, v180);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    Instance = AtlasManager__SetEventUI(mCostApSp, ApSpriteFileName, 0LL);
    if ( !mCostApSp )
      goto LABEL_626;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mCostApSp, Instance & 1, 0LL);
  }
  mChallengeObj = this->fields.mChallengeObj;
  if ( HasFlag )
  {
    v185 = v381;
    goto LABEL_211;
  }
  v185 = v381;
  Instance = QuestEntity__HasFlag(v381, 0x4000LL, 0LL);
  if ( (Instance & 1) != 0 || (Instance = QuestEntity__HasFlag(v381, 4LL, 0LL), (Instance & 1) == 0) )
  {
LABEL_211:
    size = 0LL;
    if ( !mChallengeObj )
      goto LABEL_626;
    goto LABEL_212;
  }
  size = v381->fields.afterClear != 1;
  if ( !mChallengeObj )
    goto LABEL_626;
LABEL_212:
  UnityEngine_GameObject__SetActive(mChallengeObj, size, 0LL);
  Instance = (__int64)v382->fields.mChallengeObj;
  if ( !Instance )
    goto LABEL_626;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    v186 = QuestBoardListViewItemDraw_TypeInfo;
    if ( isDoubleItemConsume )
    {
      if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v186 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v187 = v186->static_fields;
      p_x = &v187->CHALLENGE_OBJ_POS_DOUBLE.fields.x;
      p_y = &v187->CHALLENGE_OBJ_POS_DOUBLE.fields.y;
      p_z = &v187->CHALLENGE_OBJ_POS_DOUBLE.fields.z;
    }
    else
    {
      if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v186 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v193 = v186->static_fields;
      p_x = &v193->CHALLENGE_OBJ_POS_SINGLE.fields.x;
      p_y = &v193->CHALLENGE_OBJ_POS_SINGLE.fields.y;
      p_z = &v193->CHALLENGE_OBJ_POS_SINGLE.fields.z;
    }
    v392.fields.y = *p_y;
    v392.fields.x = *p_x;
    v392.fields.z = *p_z;
    GameObjectExtensions__SetLocalPosition(v382->fields.mChallengeObj, v392, 0LL);
    Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          v374,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !Instance )
      goto LABEL_626;
    v194 = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    key,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    Instance = QuestEntity__HasFlag(v185, 4LL, 0LL);
    if ( (Instance & 1) == 0 )
      goto LABEL_633;
    if ( !v194 )
      goto LABEL_626;
    if ( EventDetailEntity__isRaidDefeatCount(v194, 0LL) )
    {
      if ( entity )
        ClearNum = UserQuestEntity__getClearNum(entity, 0LL);
      else
        ClearNum = 0;
      challengeStrSpr = v382->fields.challengeStrSpr;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventUI(challengeStrSpr, (System_String_o *)StringLiteral_21637/*"questboard_crushing"*/, 0LL);
    }
    else
    {
LABEL_633:
      if ( entity )
        ClearNum = entity->fields.challengeNum;
      else
        ClearNum = 0;
      Instance = (__int64)v382->fields.challengeStrSpr;
      if ( !Instance )
        goto LABEL_626;
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_21636/*"questboard_challenge"*/, 0LL);
    }
    p_mChallengeLb = (__int64 *)&v382->fields.mChallengeLb;
    mChallengeLb = v382->fields.mChallengeLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (__int64)LocalizationManager__GetNumberFormat(ClearNum, 0LL);
    if ( !mChallengeLb )
      goto LABEL_626;
    UILabel__set_text(mChallengeLb, (System_String_o *)Instance, 0LL);
    Instance = (__int64)v382->fields.challengeStrSpr;
    if ( !Instance )
      goto LABEL_626;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 840LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 848LL));
  }
  else
  {
    p_mChallengeLb = (__int64 *)&v382->fields.mChallengeLb;
  }
  Instance = *p_mChallengeLb;
  if ( !*p_mChallengeLb )
    goto LABEL_626;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v135 + 24), 0LL);
  Instance = (__int64)v382->fields.mChallengeObj;
  if ( !Instance )
    goto LABEL_626;
  if ( (mPhaseObj = v382->fields.mPhaseObj,
        Instance = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL),
        (Instance & 1) != 0)
    || (Instance = QuestEntity__HasFlag(v185, 0x4000LL, 0LL), (Instance & 1) != 0)
    || (Instance = QuestEntity__HasFlag(v185, 0x10000LL, 0LL), (Instance & 1) != 0)
    || dispType == 2 && (Instance = QuestEntity__HasFlag(v185, 512LL, 0LL), (Instance & 1) != 0)
    || (Instance = QuestEntity__HasFlag(v185, 0x4000000LL, 0LL), (Instance & 1) != 0) )
  {
    size = 0LL;
  }
  else
  {
    Instance = QuestEntity__HasFlag(v185, 0x2000000000LL, 0LL);
    size = !v380 & ~(_DWORD)Instance & 1;
  }
  v378 = quest_info_k__BackingField;
  if ( !mPhaseObj )
    goto LABEL_626;
  UnityEngine_GameObject__SetActive(mPhaseObj, size, 0LL);
  Instance = (__int64)v382->fields.mPhaseObj;
  if ( !Instance )
    goto LABEL_626;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    QuestBoardListViewItemDraw__InitPhase(v382, isDoubleItemConsume, isDoubleItemConsumeQp, isTripleItemConsume, v204);
    v205 = v381->fields.afterClear;
    Instance = MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0LL);
    v206 = QuestBoardListViewItemDraw_TypeInfo;
    v207 = Instance;
    v208 = WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr);
    if ( (v208 & 0x400) != 0 )
    {
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v206 = QuestBoardListViewItemDraw_TypeInfo;
        v208 = WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr);
      }
      v209 = v208 & 0x400;
    }
    else
    {
      v209 = 0;
    }
    v210 = v206->static_fields;
    PHASE_NORMAL_MAX = v210->PHASE_NORMAL_MAX;
    v212 = v207 > PHASE_NORMAL_MAX;
    if ( v209 && !v206->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v206);
      v206 = QuestBoardListViewItemDraw_TypeInfo;
      v210 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
      PHASE_NORMAL_MAX = v210->PHASE_NORMAL_MAX;
      v209 = WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400;
    }
    v213 = v205 == 2 && dispType != 2;
    if ( v207 <= PHASE_NORMAL_MAX )
    {
      if ( v209 && !v206->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v206);
        v206 = QuestBoardListViewItemDraw_TypeInfo;
        v210 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
      }
      p_QUEST_BOARD_PHASE_INTERVAL = &v210->QUEST_BOARD_PHASE_INTERVAL;
    }
    else
    {
      if ( v209 && !v206->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v206);
        v206 = QuestBoardListViewItemDraw_TypeInfo;
        v210 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
      }
      p_QUEST_BOARD_PHASE_INTERVAL = &v210->QUEST_BOARD_PHASE_EX_INTERVAL;
    }
    v215 = 0;
    v216 = v207 - 1;
    v217 = v375 == 2 && v205 == 5;
    v218 = -*p_QUEST_BOARD_PHASE_INTERVAL;
    v219 = v205 - 3;
    while ( 1 )
    {
      if ( (BYTE3(v206->vtable._0_Equals.methodPtr) & 4) != 0 && !v206->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v206);
        v206 = QuestBoardListViewItemDraw_TypeInfo;
      }
      if ( v215 >= v206->static_fields->PHASE_EXTRA_MAX )
        break;
      mPhaseSp = v382->fields.mPhaseSp;
      if ( !mPhaseSp )
        goto LABEL_626;
      if ( v215 >= mPhaseSp->max_length )
        goto LABEL_628;
      v221 = &mPhaseSp->obj.klass + v215;
      v222 = (UISprite_o *)v221[4];
      if ( !v222 )
        goto LABEL_626;
      Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v221[4], 0LL);
      if ( !Instance )
        goto LABEL_626;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v215 < v207, 0LL);
      if ( v215 < v207 )
      {
        v224 = !v380 && v215 < v378->fields.questPhase;
        PhaseArrowSpriteName = QuestBoardListViewItemDraw__GetPhaseArrowSpriteName(
                                 (QuestBoardListViewItemDraw_o *)Instance,
                                 v212,
                                 v224,
                                 v216 == v215,
                                 v213,
                                 (v216 == v215) & (unsigned __int8)(v219 < 2),
                                 v223);
        UISprite__set_spriteName(v222, PhaseArrowSpriteName, 0LL);
        if ( v217 )
          *(UnityEngine_Color_o *)&v226 = UnityEngine_Color__get_gray(0LL);
        else
          *(UnityEngine_Color_o *)&v226 = UnityEngine_Color__get_white(0LL);
        UIWidget__set_color((UIWidget_o *)v222, *(UnityEngine_Color_o *)&v226, 0LL);
        PhaseArrowIntervalSize = QuestBoardListViewItemDraw__GetPhaseArrowIntervalSize(
                                   v230,
                                   v212,
                                   v216 == v215 && v219 < 2,
                                   v231);
        Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v222, 0LL);
        if ( !Instance )
          goto LABEL_626;
        v218 += PhaseArrowIntervalSize;
        v393.fields.x = (float)v218;
        v393.fields.y = 0.0;
        v393.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v393, 0LL);
        Instance = ((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v222->klass->vtable._33_MakePixelPerfect.method)(
                     v222,
                     v222->klass->vtable._34_get_minWidth.methodPtr);
      }
      v206 = QuestBoardListViewItemDraw_TypeInfo;
      ++v215;
    }
  }
  Instance = (__int64)v382->fields.mDamageRecordSp;
  if ( !Instance )
    goto LABEL_626;
  v233 = v381;
  v234 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  Instance = QuestEntity__HasFlag(v381, 0x4000000LL, 0LL);
  v235 = v379;
  if ( !v234 )
    goto LABEL_626;
  UnityEngine_GameObject__SetActive(v234, Instance & 1, 0LL);
  Instance = (__int64)v382->fields.mDamageRecordSp;
  if ( !Instance )
    goto LABEL_626;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_626;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    v236 = QuestBoardListViewItemDraw_TypeInfo;
    mDamageRecordSp = v382->fields.mDamageRecordSp;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v236 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_DAMAGE_RECODE_NAME = v236->static_fields->QUEST_BOARD_DAMAGE_RECODE_NAME;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetBanner(mDamageRecordSp, QUEST_BOARD_DAMAGE_RECODE_NAME, 0LL);
    v239 = (UserQuestRecordMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        v374,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestRecordMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    if ( !v239 )
      goto LABEL_626;
    MaxTurnDamage = UserQuestRecordMaster__GetMaxTurnDamage(v239, Instance, v381->fields.id, 0LL);
    mDamageRecordLb = v382->fields.mDamageRecordLb;
    knockdownNum = MaxTurnDamage;
    v242 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &knockdownNum);
    Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_23489/*"{0:#,0}"*/, v242, 0LL);
    if ( !mDamageRecordLb )
      goto LABEL_626;
    UILabel__set_text(mDamageRecordLb, (System_String_o *)Instance, 0LL);
    Instance = (__int64)v382->fields.mDamageRecordSp;
    if ( !Instance )
      goto LABEL_626;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v379 + 24), 0LL);
    Instance = (__int64)v382->fields.mDamageRecordLb;
    if ( !Instance )
      goto LABEL_626;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v379 + 24), 0LL);
  }
  Instance = (__int64)v382->fields.mKnockdownRecordSp;
  if ( !Instance )
    goto LABEL_626;
  v243 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  Instance = QuestEntity__HasFlag(v381, 0x2000000000LL, 0LL);
  if ( !v243 )
    goto LABEL_626;
  UnityEngine_GameObject__SetActive(v243, Instance & 1, 0LL);
  Instance = (__int64)v382->fields.mKnockdownRecordSp;
  if ( !Instance )
    goto LABEL_626;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_626;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    v244 = QuestBoardListViewItemDraw_TypeInfo;
    mKnockdownRecordSp = v382->fields.mKnockdownRecordSp;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v244 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_KNOCKDOWN_RECODE_NAME = v244->static_fields->QUEST_BOARD_KNOCKDOWN_RECODE_NAME;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetBanner(mKnockdownRecordSp, QUEST_BOARD_KNOCKDOWN_RECODE_NAME, 0LL);
    v247 = (QuestKnockdownInfo_o *)sub_B2C42C(QuestKnockdownInfo_TypeInfo);
    QuestKnockdownInfo___ctor(v247, 0LL);
    v248 = (UserQuestRecordMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        v374,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestRecordMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    if ( !v248 )
      goto LABEL_626;
    UserQuestRecordMaster__GetKnockdownRecordinfo(v248, Instance, v381->fields.id, v247, 0LL);
    mKnockdownRecordCountLb = v382->fields.mKnockdownRecordCountLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10893/*"QUEST_BOARD_KNOCKDOWN_COUNT"*/, 0LL);
    if ( !v247 )
      goto LABEL_626;
    v250 = (System_String_o *)Instance;
    knockdownNum = v247->fields.knockdownNum;
    v251 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &knockdownNum);
    Instance = (__int64)System_String__Format(v250, v251, 0LL);
    if ( !mKnockdownRecordCountLb )
      goto LABEL_626;
    UILabel__set_text(mKnockdownRecordCountLb, (System_String_o *)Instance, 0LL);
    mKnockdownRecordDamageLb = v382->fields.mKnockdownRecordDamageLb;
    v253 = LocalizationManager__Get((System_String_o *)StringLiteral_10894/*"QUEST_BOARD_KNOCKDOWN_DAMAGE"*/, 0LL);
    totalDamage = v247->fields.totalDamage;
    v254 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &totalDamage);
    Instance = (__int64)System_String__Format(v253, v254, 0LL);
    if ( !mKnockdownRecordDamageLb )
      goto LABEL_626;
    UILabel__set_text(mKnockdownRecordDamageLb, (System_String_o *)Instance, 0LL);
    mKnockdownRecordPlusLb = v382->fields.mKnockdownRecordPlusLb;
    v256 = LocalizationManager__Get((System_String_o *)StringLiteral_10896/*"QUEST_BOARD_KNOCKDOWN_PLUS"*/, 0LL);
    v257 = (_QWORD **)Method_System_Array_Empty_object___;
    v258 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
    v259 = *(_WORD *)(v258 + 306);
    if ( (v259 & 1) == 0 )
    {
      sub_AC505C(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
      v259 = *(_WORD *)(v258 + 306);
    }
    if ( (v259 & 0x400) != 0 )
    {
      v260 = *v257[6];
      if ( (*(_BYTE *)(v260 + 306) & 1) == 0 )
        sub_AC505C(*v257[6]);
      if ( !*(_DWORD *)(v260 + 224) )
      {
        v261 = *v257[6];
        if ( (*(_BYTE *)(v261 + 306) & 1) == 0 )
          sub_AC505C(*v257[6]);
        j_il2cpp_runtime_class_init_0(v261);
      }
    }
    v262 = *v257[6];
    if ( (*(_BYTE *)(v262 + 306) & 1) == 0 )
      sub_AC505C(*v257[6]);
    Instance = (__int64)System_String__Format_44384256(v256, **(System_Object_array ***)(v262 + 184), 0LL);
    if ( !mKnockdownRecordPlusLb )
      goto LABEL_626;
    UILabel__set_text(mKnockdownRecordPlusLb, (System_String_o *)Instance, 0LL);
    mKnockdownRecordDamageNameLb = v382->fields.mKnockdownRecordDamageNameLb;
    v264 = LocalizationManager__Get((System_String_o *)StringLiteral_10895/*"QUEST_BOARD_KNOCKDOWN_DAMAGE_NAME"*/, 0LL);
    v265 = (_QWORD **)Method_System_Array_Empty_object___;
    v266 = v264;
    v267 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
    v268 = *(_WORD *)(v267 + 306);
    if ( (v268 & 1) == 0 )
    {
      sub_AC505C(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
      v268 = *(_WORD *)(v267 + 306);
    }
    if ( (v268 & 0x400) != 0 )
    {
      v269 = *v265[6];
      if ( (*(_BYTE *)(v269 + 306) & 1) == 0 )
        sub_AC505C(*v265[6]);
      if ( !*(_DWORD *)(v269 + 224) )
      {
        v270 = *v265[6];
        if ( (*(_BYTE *)(v270 + 306) & 1) == 0 )
          sub_AC505C(*v265[6]);
        j_il2cpp_runtime_class_init_0(v270);
      }
    }
    v271 = *v265[6];
    if ( (*(_BYTE *)(v271 + 306) & 1) == 0 )
      sub_AC505C(*v265[6]);
    Instance = (__int64)System_String__Format_44384256(v266, **(System_Object_array ***)(v271 + 184), 0LL);
    if ( !mKnockdownRecordDamageNameLb )
      goto LABEL_626;
    UILabel__set_text(mKnockdownRecordDamageNameLb, (System_String_o *)Instance, 0LL);
    Instance = (__int64)v382->fields.mKnockdownRecordDamageLb;
    v235 = v379;
    if ( !Instance )
      goto LABEL_626;
    UILabel__SetCondensedScale(
      (UILabel_o *)Instance,
      QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_KNOCKDOWN_DAMAGE_WIDTH,
      0LL);
    Instance = (__int64)v382->fields.mKnockdownRecordDamageLb;
    v233 = v381;
    if ( !Instance )
      goto LABEL_626;
    if ( v247->fields.totalDamage <= 0 )
    {
      UIWidget__set_pivot((UIWidget_o *)Instance, 3, 0LL);
      Instance = (__int64)v382->fields.mKnockdownRecordDamageLb;
      if ( !Instance )
        goto LABEL_626;
      Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !v382->fields.mKnockdownRecordPlusLb )
        goto LABEL_626;
      v274 = (UnityEngine_GameObject_o *)Instance;
      v276 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v382->fields.mKnockdownRecordPlusLb, 0LL);
      LocalPositionX = GameObjectExtensions__GetLocalPositionX(v276, 0LL);
      v278 = QuestBoardListViewItemDraw_TypeInfo;
      v279 = LocalPositionX;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v278 = QuestBoardListViewItemDraw_TypeInfo;
      }
      QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX = v279 + (float)v278->static_fields->QUEST_BOARD_KNOCKDOWN_ZERO_DAMAGE_POSX;
    }
    else
    {
      UIWidget__set_pivot((UIWidget_o *)Instance, 5, 0LL);
      Instance = (__int64)v382->fields.mKnockdownRecordDamageLb;
      if ( !Instance )
        goto LABEL_626;
      v272 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      v273 = QuestBoardListViewItemDraw_TypeInfo;
      v274 = v272;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v273 = QuestBoardListViewItemDraw_TypeInfo;
      }
      QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX = (float)v273->static_fields->QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX;
    }
    GameObjectExtensions__SetLocalPositionX(v274, QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX, 0LL);
    Instance = (__int64)v382->fields.mKnockdownRecordSp;
    if ( !Instance )
      goto LABEL_626;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v379 + 24), 0LL);
    Instance = (__int64)v382->fields.mKnockdownRecordDamageLb;
    if ( !Instance )
      goto LABEL_626;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v379 + 24), 0LL);
    Instance = (__int64)v382->fields.mKnockdownRecordDamageNameLb;
    if ( !Instance )
      goto LABEL_626;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v379 + 24), 0LL);
    Instance = (__int64)v382->fields.mKnockdownRecordPlusLb;
    if ( !Instance )
      goto LABEL_626;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v379 + 24), 0LL);
    Instance = (__int64)v382->fields.mKnockdownRecordCountLb;
    if ( !Instance )
      goto LABEL_626;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v379 + 24), 0LL);
  }
  id = v233->fields.id;
  if ( (BYTE3(QuestInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestInformationComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
  }
  if ( !QuestInformationComponent__IsDisplayQuestInformation(id, 0LL) )
    goto LABEL_416;
  Instance = (__int64)v382->fields.mQuestInfoBtn;
  if ( !Instance )
    goto LABEL_626;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, size);
    byte_4183C65 = 1;
  }
  v281 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v281 = TerminalSceneComponent_TypeInfo;
  }
  Instance = (__int64)v281->static_fields->mInstance;
  if ( !Instance )
LABEL_626:
    sub_B2C434(Instance, size);
  if ( TerminalSceneComponent__QuestInfoShowing((TerminalSceneComponent_o *)Instance, 0LL) == v233->fields.id )
  {
    mQuestInfoShowing = v382->fields.mQuestInfoShowing;
    if ( !mQuestInfoShowing )
      goto LABEL_533;
    UnityEngine_GameObject__SetActive(mQuestInfoShowing, 1, 0LL);
  }
  mQuestInfoShowing = v382->fields.mQuestInfoBtn;
  if ( !mQuestInfoShowing )
    goto LABEL_533;
  mQuestInfoShowing = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    mQuestInfoShowing,
                                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
  v283 = mQuestInfoShowing;
  if ( v375 == 2 )
  {
    mQuestInfoShowing = (UnityEngine_GameObject_o *)QuestEntity__HasFlag(v233, 0x400000000000000LL, 0LL);
    size = v372 & (unsigned int)mQuestInfoShowing & 1;
    if ( !v283 )
      goto LABEL_533;
  }
  else
  {
    size = 1LL;
    if ( !mQuestInfoShowing )
      goto LABEL_533;
  }
  ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, void *))v283->klass[1]._1.namespaze)(
    v283,
    size,
    v283->klass[1]._1.byval_arg.data);
LABEL_416:
  mQuestInfoShowing = (UnityEngine_GameObject_o *)QuestBoardListViewItemDraw_TypeInfo;
  mOptionRestrinctionLb = v382->fields.mOptionRestrinctionLb;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  }
  if ( !mOptionRestrinctionLb )
    goto LABEL_533;
  UILabel__set_fontSize(
    mOptionRestrinctionLb,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_DEFAULT_FONT_SIZE,
    0LL);
  mQuestInfoShowing = (UnityEngine_GameObject_o *)v382->fields.mOptionRestrinctionLb;
  if ( !mQuestInfoShowing )
    goto LABEL_533;
  UILabel__set_overflowMethod((UILabel_o *)mQuestInfoShowing, 2, 0LL);
  mQuestInfoShowing = (UnityEngine_GameObject_o *)v382->fields.mOptionRestrinctionLb;
  if ( !mQuestInfoShowing )
    goto LABEL_533;
  v285 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mQuestInfoShowing, 0LL);
  one = UnityEngine_Vector3__get_one(0LL);
  GameObjectExtensions__SetLocalScale(v285, one, 0LL);
  mQuestInfoShowing = (UnityEngine_GameObject_o *)v382->fields.mOptionRestrinctionLb;
  if ( !mQuestInfoShowing )
    goto LABEL_533;
  mQuestInfoShowing = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)mQuestInfoShowing,
                                                    0LL);
  if ( !mQuestInfoShowing )
    goto LABEL_533;
  mQuestInfoShowing = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                    (UnityEngine_Transform_o *)mQuestInfoShowing,
                                                    0LL);
  if ( !mQuestInfoShowing )
    goto LABEL_533;
  mQuestInfoShowing = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mQuestInfoShowing, 0LL);
  if ( !mQuestInfoShowing )
    goto LABEL_533;
  mQuestInfoShowing = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    mQuestInfoShowing,
                                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewMultiLimitedFormation___);
  if ( !mQuestInfoShowing )
    goto LABEL_533;
  v286 = (UnityEngine_Behaviour_o *)mQuestInfoShowing;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mQuestInfoShowing, 0, 0LL);
  mQuestInfoShowing = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    v374,
                                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !mQuestInfoShowing )
    goto LABEL_533;
  mQuestInfoShowing = (UnityEngine_GameObject_o *)QuestPhaseDetailMaster__TryGetEntity(
                                                    (QuestPhaseDetailMaster_o *)mQuestInfoShowing,
                                                    &v385,
                                                    v378->fields.questId,
                                                    questPhase,
                                                    0LL);
  if ( ((unsigned __int8)mQuestInfoShowing & 1) == 0 )
    goto LABEL_444;
  if ( !v385 )
    goto LABEL_533;
  if ( !v385->fields.boardMessage )
    goto LABEL_444;
  mQuestInfoShowing = (UnityEngine_GameObject_o *)v382->fields.mOptionRestrinctionLb;
  if ( !mQuestInfoShowing )
    goto LABEL_533;
  UILabel__set_maxLineCount((UILabel_o *)mQuestInfoShowing, 0, 0LL);
  if ( !v385 )
    goto LABEL_533;
  boardMessage = v385->fields.boardMessage;
  if ( !boardMessage )
    goto LABEL_533;
  list = (System_Collections_Generic_IEnumerable_TSource__o *)boardMessage->fields.list;
  if ( list
    && (mQuestInfoShowing = (UnityEngine_GameObject_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                          list,
                                                          (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_QuestPhaseDetailEntity_BoardInfo___)) != 0LL
    && (klass = mQuestInfoShowing[1].klass, v291 = (QuestPhaseDetailEntity_BoardInfo_array *)mQuestInfoShowing, klass) )
  {
    if ( (_DWORD)klass == 1 )
    {
      monitor = mQuestInfoShowing[1].monitor;
      if ( !monitor )
        goto LABEL_533;
      mQuestInfoShowing = (UnityEngine_GameObject_o *)monitor[2];
      if ( !mQuestInfoShowing )
        goto LABEL_533;
      mQuestInfoShowing = (UnityEngine_GameObject_o *)QuestPhaseDetailEntity_BoardInfo_TextInfo__SetText(
                                                        (QuestPhaseDetailEntity_BoardInfo_TextInfo_o *)mQuestInfoShowing,
                                                        v382->fields.mOptionRestrinctionLb,
                                                        (float)v382->fields.restrictionDefaultWidth,
                                                        0LL);
      if ( !v291->max_length )
        goto LABEL_627;
      v293 = v291->m_Items[0];
      if ( !v293 )
        goto LABEL_533;
      v294 = (char)mQuestInfoShowing;
      mQuestInfoShowing = (UnityEngine_GameObject_o *)v293->fields.image;
      if ( !mQuestInfoShowing )
        goto LABEL_533;
      v295 = QuestPhaseDetailEntity_BoardInfo_ImageInfo__SetImage(
               (QuestPhaseDetailEntity_BoardInfo_ImageInfo_o *)mQuestInfoShowing,
               v382->fields.mOptionRestrinctionSp,
               0LL);
      v296 = 0;
    }
    else
    {
      UnityEngine_Behaviour__set_enabled(v286, 1, 0LL);
      if ( QuestEntity__HasFlag(v381, 0x400000000000000LL, 0LL) )
      {
        v347 = QuestBoardListViewItemDraw_TypeInfo;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v347 = QuestBoardListViewItemDraw_TypeInfo;
        }
        p_RESTRICTION_FONT_WIDTH_ALLOUT = &v347->static_fields->RESTRICTION_FONT_WIDTH_ALLOUT;
      }
      else
      {
        p_RESTRICTION_FONT_WIDTH_ALLOUT = &v382->fields.restrictionDefaultWidth;
      }
      QuestBoardListViewMultiLimitedFormation__Init(
        (QuestBoardListViewMultiLimitedFormation_o *)v286,
        v382->fields.mOptionRestrinctionLb,
        v382->fields.mOptionRestrinctionSp,
        v291,
        (float)*p_RESTRICTION_FONT_WIDTH_ALLOUT,
        0LL);
      v296 = 1;
      v294 = 1;
      v295 = 1;
    }
  }
  else
  {
LABEL_444:
    v294 = QuestBoardListViewItemDraw__SetRestrictionLabelFromQuestRestrictionMaster(
             v382,
             v378->fields.questId,
             questPhase,
             v287);
    v296 = 0;
    v295 = 0;
  }
  if ( QuestEntity__HasFlag(v381, 0x40000000LL, 0LL) )
  {
    mQuestInfoShowing = (UnityEngine_GameObject_o *)v382->fields.mMultiSecondBattleInformation;
    if ( !mQuestInfoShowing )
      goto LABEL_533;
    p_mCostConsumeBattleWinSp = (UnityEngine_GameObject_o **)&v382->fields.mCostConsumeBattleWinSp;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mQuestInfoShowing,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v382->fields.mCostConsumeBattleWinSp,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UISprite__Add__);
    v298 = 1;
  }
  else
  {
    v298 = 0;
    p_mCostConsumeBattleWinSp = (UnityEngine_GameObject_o **)&v382->fields.mCostConsumeBattleWinSp;
  }
  mQuestInfoShowing = *p_mCostConsumeBattleWinSp;
  if ( !*p_mCostConsumeBattleWinSp )
    goto LABEL_533;
  mQuestInfoShowing = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mQuestInfoShowing, 0LL);
  if ( !mQuestInfoShowing )
    goto LABEL_533;
  UnityEngine_GameObject__SetActive(mQuestInfoShowing, v298, 0LL);
  if ( v385 && QuestPhaseDetailEntity__HasFlag(v385, 0x400000LL, 0LL) )
  {
    mOptionPreBattleSp = v382->fields.mOptionPreBattleSp;
    v300 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v300 = QuestBoardListViewItemDraw_TypeInfo;
    }
    PRE_BATTLE_ORGANIZATION = v300->static_fields->PRE_BATTLE_ORGANIZATION;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetBanner(mOptionPreBattleSp, PRE_BATTLE_ORGANIZATION, 0LL);
    mQuestInfoShowing = (UnityEngine_GameObject_o *)v382->fields.mMultiSecondBattleInformation;
    if ( !mQuestInfoShowing )
      goto LABEL_533;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mQuestInfoShowing,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v382->fields.mOptionPreBattleSp,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UISprite__Add__);
    v235 = v379;
    v302 = 1;
  }
  else
  {
    v302 = 0;
  }
  mQuestInfoShowing = (UnityEngine_GameObject_o *)v382->fields.mOptionPreBattleSp;
  if ( !mQuestInfoShowing )
    goto LABEL_533;
  mQuestInfoShowing = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mQuestInfoShowing, 0LL);
  if ( !mQuestInfoShowing )
    goto LABEL_533;
  UnityEngine_GameObject__SetActive(mQuestInfoShowing, v302, 0LL);
  mMultiSecondBattleInformation = v382->fields.mMultiSecondBattleInformation;
  if ( !mMultiSecondBattleInformation )
    goto LABEL_533;
  if ( mMultiSecondBattleInformation->fields._size >= 2 )
  {
    mQuestInfoShowing = (UnityEngine_GameObject_o *)v382->fields.secondBattleInformation;
    if ( !mQuestInfoShowing )
      goto LABEL_533;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mQuestInfoShowing, 1, 0LL);
    mQuestInfoShowing = (UnityEngine_GameObject_o *)v382->fields.secondBattleInformation;
    if ( !mQuestInfoShowing )
      goto LABEL_533;
    QuestBoardListViewMultiSecondBattleInformation__Init(
      (QuestBoardListViewMultiSecondBattleInformation_o *)mQuestInfoShowing,
      v382->fields.mMultiSecondBattleInformation,
      0LL);
  }
  mQuestInfoShowing = (UnityEngine_GameObject_o *)v382->fields.mOptionRestrinctionLb;
  if ( !mQuestInfoShowing )
    goto LABEL_533;
  mQuestInfoShowing = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)mQuestInfoShowing,
                                                    0LL);
  if ( !mQuestInfoShowing )
    goto LABEL_533;
  mQuestInfoShowing = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                    (UnityEngine_Transform_o *)mQuestInfoShowing,
                                                    0LL);
  if ( !mQuestInfoShowing )
    goto LABEL_533;
  mQuestInfoShowing = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mQuestInfoShowing, 0LL);
  if ( !mQuestInfoShowing )
    goto LABEL_533;
  UnityEngine_GameObject__SetActive(mQuestInfoShowing, v294 || v295, 0LL);
  mQuestInfoShowing = (UnityEngine_GameObject_o *)QuestEntity__HasFlag(v381, 0x400000000000000LL, 0LL);
  if ( !v382->fields.mOptionRestrinctionLb )
    goto LABEL_533;
  v304 = (char)mQuestInfoShowing;
  mQuestInfoShowing = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)v382->fields.mOptionRestrinctionLb,
                                                    0LL);
  if ( !mQuestInfoShowing )
    goto LABEL_533;
  mQuestInfoShowing = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                    (UnityEngine_Transform_o *)mQuestInfoShowing,
                                                    0LL);
  if ( !mQuestInfoShowing )
    goto LABEL_533;
  v305 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mQuestInfoShowing, 0LL);
  v306 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (v304 & 1) == 0 )
  {
    if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v306 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v305, v306->static_fields->RESTRICTION_POS_DEFAULT, 0LL);
    v311 = v382->fields.mOptionRestrinctionLb;
    if ( !v311 )
      goto LABEL_533;
    if ( v311->fields.mWidth <= v382->fields.restrictionDefaultWidth )
    {
      v313 = QuestBoardListViewItemDraw_TypeInfo;
      mSpacingX = v311->fields.mSpacingX;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v313 = QuestBoardListViewItemDraw_TypeInfo;
      }
      size = (unsigned int)v313->static_fields->RESTRICTION_FONT_SPACING_DEFAULT;
      if ( mSpacingX == (_DWORD)size )
      {
        if ( (v296 & 1) != 0 )
          goto LABEL_508;
LABEL_505:
        mQuestInfoShowing = (UnityEngine_GameObject_o *)v382->fields.mOptionRestrinctionLb;
        if ( !mQuestInfoShowing )
          goto LABEL_533;
        restrictionDefaultWidth = v382->fields.restrictionDefaultWidth;
LABEL_507:
        UILabel__SetCondensedScale((UILabel_o *)mQuestInfoShowing, restrictionDefaultWidth, 0LL);
        goto LABEL_508;
      }
      if ( (BYTE3(v313->vtable._0_Equals.methodPtr) & 4) != 0 && !v313->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v313);
        LODWORD(size) = QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_FONT_SPACING_DEFAULT;
      }
    }
    else
    {
      v312 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v312 = QuestBoardListViewItemDraw_TypeInfo;
      }
      LODWORD(size) = v312->static_fields->RESTRICTION_FONT_SPACING_MIN;
    }
    QuestBoardListViewItemDraw__SetRestrinctionLabelSpacingX(v382, size, v310);
    if ( (v296 & 1) != 0 )
      goto LABEL_508;
    goto LABEL_505;
  }
  if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v306 = QuestBoardListViewItemDraw_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition(v305, v306->static_fields->RESTRICTION_POS_ALLOUT, 0LL);
  mQuestInfoShowing = (UnityEngine_GameObject_o *)v382->fields.mOptionRestrinctionLb;
  if ( !mQuestInfoShowing )
    goto LABEL_533;
  UILabel__set_fontSize(
    (UILabel_o *)mQuestInfoShowing,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_FONT_SIZE_ALLOUT,
    0LL);
  QuestBoardListViewItemDraw__SetRestrinctionLabelSpacingX(
    v382,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_FONT_SPACING_DEFAULT,
    v307);
  if ( (v296 & 1) == 0 )
  {
    mQuestInfoShowing = (UnityEngine_GameObject_o *)QuestBoardListViewItemDraw_TypeInfo;
    v308 = (UnityEngine_GameObject_o *)v382->fields.mOptionRestrinctionLb;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    }
    if ( !v308 )
      goto LABEL_533;
    mQuestInfoShowing = v308;
    restrictionDefaultWidth = QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_FONT_WIDTH_ALLOUT;
    goto LABEL_507;
  }
LABEL_508:
  mQuestInfoShowing = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    v374,
                                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !mQuestInfoShowing )
    goto LABEL_533;
  v315 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)mQuestInfoShowing, v381->fields.id, questPhase, 0LL);
  v316 = v315;
  if ( v315 )
  {
    classIds = v315->fields.classIds;
    if ( classIds )
      LODWORD(classIds) = classIds->max_length != 0;
  }
  else
  {
    LODWORD(classIds) = 0;
  }
  v318 = ((unsigned int)classIds & v371) == 0;
  if ( ((unsigned int)classIds & v371) != 0 && v375 == 2 )
    v318 = QuestEntity__HasFlag(v381, 2048LL, 0LL);
  mQuestInfoShowing = v382->fields.mClassIconRoot;
  if ( !mQuestInfoShowing )
    goto LABEL_533;
  UnityEngine_GameObject__SetActive(mQuestInfoShowing, !v318, 0LL);
  mQuestInfoShowing = (UnityEngine_GameObject_o *)v382->fields.mClassStrSp;
  if ( !mQuestInfoShowing )
    goto LABEL_533;
  UIWidget__set_color((UIWidget_o *)mQuestInfoShowing, *(UnityEngine_Color_o *)(v235 + 24), 0LL);
  if ( !v318 )
  {
    if ( !v316 )
      goto LABEL_533;
    mClassIcons = v382->fields.mClassIcons;
    if ( !mClassIcons )
      goto LABEL_533;
    max_length = mClassIcons->max_length;
    if ( max_length >= 1 )
    {
      v321 = v316->fields.classIds;
      v322 = 1;
      while ( 1 )
      {
        v323 = v322 - 1;
        if ( v322 - 1 >= mClassIcons->max_length )
          break;
        v324 = v323;
        v325 = &mClassIcons->obj.klass + v323;
        v326 = (UnityEngine_Component_o *)v325[4];
        if ( !v326 )
          goto LABEL_533;
        mQuestInfoShowing = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v325[4], 0LL);
        if ( !v321 )
          goto LABEL_533;
        if ( !mQuestInfoShowing )
          goto LABEL_533;
        UnityEngine_GameObject__SetActive(mQuestInfoShowing, (int)v324 < (signed int)v321->max_length, 0LL);
        mQuestInfoShowing = UnityEngine_Component__get_gameObject(v326, 0LL);
        if ( !mQuestInfoShowing )
          goto LABEL_533;
        mQuestInfoShowing = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(mQuestInfoShowing, 0LL);
        if ( ((unsigned __int8)mQuestInfoShowing & 1) != 0 )
        {
          if ( (unsigned int)v324 >= v321->max_length )
            break;
          ServantClassIconComponent__Set((ServantClassIconComponent_o *)v326, v321->m_Items[v324 + 1], 0LL);
          ServantClassIconComponent__SetColor(
            (ServantClassIconComponent_o *)v326,
            *(UnityEngine_Color_o *)(v235 + 24),
            0LL);
        }
        if ( v322 >= max_length )
          goto LABEL_534;
        mClassIcons = v382->fields.mClassIcons;
        ++v322;
        if ( !mClassIcons )
          goto LABEL_533;
      }
LABEL_627:
      v362 = sub_B2C460(mQuestInfoShowing);
      sub_B2C400(v362, 0LL);
    }
  }
LABEL_534:
  if ( key >= 1 )
  {
    eventTarget = (UnityEngine_Object_o *)v382->fields.eventTarget;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(eventTarget, 0LL, 0LL) )
    {
      eventTargetComponent = (UnityEngine_Object_o *)v382->fields.eventTargetComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(eventTargetComponent, 0LL, 0LL) )
      {
        mQuestInfoShowing = v382->fields.mQuestInfoBtn;
        if ( !mQuestInfoShowing )
          goto LABEL_533;
        if ( UnityEngine_GameObject__get_activeSelf(mQuestInfoShowing, 0LL) )
        {
          mQuestInfoShowing = (UnityEngine_GameObject_o *)v382->fields.eventTargetComponent;
          if ( !mQuestInfoShowing )
            goto LABEL_533;
          BoardOptionEventTargetComponent__DestroyList((BoardOptionEventTargetComponent_o *)mQuestInfoShowing, 0LL);
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          mQuestInfoShowing = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ViewEnemyMaster___);
          if ( !mQuestInfoShowing )
            goto LABEL_533;
          EntityListFromQuestId = ViewEnemyMaster__GetEntityListFromQuestId(
                                    (ViewEnemyMaster_o *)mQuestInfoShowing,
                                    v378->fields.questId,
                                    0LL);
          if ( EntityListFromQuestId
            && (v330 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromQuestId,
                *(_QWORD *)&EntityListFromQuestId->max_length) )
          {
            v331 = QuestBoardListViewItemDraw___c_TypeInfo;
            if ( (BYTE3(QuestBoardListViewItemDraw___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !QuestBoardListViewItemDraw___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw___c_TypeInfo);
              v331 = QuestBoardListViewItemDraw___c_TypeInfo;
            }
            v332 = v331->static_fields;
            _9__298_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v332->__9__298_1;
            if ( !_9__298_1 )
            {
              if ( (BYTE3(v331->vtable._0_Equals.methodPtr) & 4) != 0 && !v331->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v331);
                v332 = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
              }
              v334 = (Il2CppObject *)v332->__9;
              _9__298_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_ViewEnemyEntity__int__TypeInfo);
              System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
                _9__298_1,
                v334,
                Method_QuestBoardListViewItemDraw___c__SetItemOfQuest_b__298_1__,
                (const MethodInfo_27127B0 *)Method_System_Func_ViewEnemyEntity__int___ctor__);
              v335 = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
              v335->__9__298_1 = (struct System_Func_ViewEnemyEntity__int__o *)_9__298_1;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&v335->__9__298_1,
                (System_Int32_array **)_9__298_1,
                v336,
                v337,
                v338,
                v339,
                v340,
                v341);
            }
            v342 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                          v330,
                                                                          (System_Func_TSource__TResult__o *)_9__298_1,
                                                                          (const MethodInfo_1A967E8 *)Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___);
            mQuestInfoShowing = (UnityEngine_GameObject_o *)System_Linq_Enumerable__ToArray_int_(
                                                              v342,
                                                              (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
            if ( !v382->fields.eventTarget )
              goto LABEL_533;
            v343 = (System_Int32_array *)mQuestInfoShowing;
            UnityEngine_GameObject__SetActive(v382->fields.eventTarget, 1, 0LL);
            mQuestInfoShowing = (UnityEngine_GameObject_o *)v382->fields.eventTargetComponent;
            if ( !mQuestInfoShowing )
              goto LABEL_533;
            BoardOptionEventTargetComponent__CreateEnemyList(
              (BoardOptionEventTargetComponent_o *)mQuestInfoShowing,
              v378->fields.questId,
              v343,
              0LL);
          }
          else
          {
            mQuestInfoShowing = v382->fields.eventTarget;
            if ( !mQuestInfoShowing )
              goto LABEL_533;
            UnityEngine_GameObject__SetActive(mQuestInfoShowing, 0, 0LL);
          }
        }
      }
    }
  }
  if ( ((unsigned __int8)v372 & (v375 == 2) & QuestEntity__HasFlag(v381, 0x400000000000000LL, 0LL)) == 1 )
  {
    alloutRoot = (UnityEngine_Object_o *)v382->fields.alloutRoot;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(alloutRoot, 0LL, 0LL) )
    {
      alloutRootComponent = (UnityEngine_Object_o *)v382->fields.alloutRootComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(alloutRootComponent, 0LL, 0LL) )
      {
        if ( !v378->fields.questReleaseType )
          goto LABEL_582;
        v346 = v378->fields.questId;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( CondType__IsQuestClear_25746984(v346, -1, 1, 0LL) )
        {
LABEL_582:
          mQuestInfoShowing = v382->fields.alloutRoot;
          if ( mQuestInfoShowing )
          {
            UnityEngine_GameObject__SetActive(mQuestInfoShowing, 1, 0LL);
            mQuestInfoShowing = (UnityEngine_GameObject_o *)v382->fields.alloutRootComponent;
            if ( mQuestInfoShowing )
            {
              BoardOptionAlloutComponent__SetIcon(
                (BoardOptionAlloutComponent_o *)mQuestInfoShowing,
                v378->fields.questId,
                0LL);
              return;
            }
          }
LABEL_533:
          sub_B2C434(mQuestInfoShowing, size);
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
  int64_t Instance; // x0
  QuestBoardListViewManager_c *size; // x1
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x20
  DataManager_o *v26; // x22
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  QuestEntity_o *v28; // x21
  __int64 v29; // x9
  int32_t dispType; // w27
  int64_t v31; // x23
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x25
  float v33; // s0
  float v34; // s1
  float v35; // s2
  float v36; // s3
  float v37; // s8
  float v38; // s9
  float v39; // s10
  float v40; // s11
  int32_t OverwriteBannerId_k__BackingField; // w8
  QuestBoardListViewItemDraw_c *v42; // x0
  System_String_o *RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX; // x24
  System_String_o *v44; // x1
  System_String_o *v45; // x0
  QuestBoardListViewItemDraw_c *v46; // x0
  System_String_o *QUEST_BOARD_SPNAME_PREFIX; // x25
  System_String_o *v48; // x0
  UISprite_o *mcBaseP; // x24
  struct UISprite_o **p_mcBaseP; // x28
  System_String_o *v51; // x25
  const MethodInfo *v52; // x3
  QuestBoardListViewItemDraw_c *v53; // x0
  const MethodInfo *v54; // x1
  const MethodInfo *v55; // x3
  QuestBoardListViewItemDraw_o *v56; // x0
  const MethodInfo *v57; // x1
  const MethodInfo *v58; // x3
  struct UILabel_o *mTitleNameLb; // x24
  struct UILabel_o **p_mTitleNameLb; // x25
  System_String_o *v61; // x1
  System_String_o *v62; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v63; // x25
  Il2CppObject *BattleName; // x0
  UILabel_o *v65; // x24
  const MethodInfo *v66; // x3
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  const MethodInfo *v68; // x2
  int32_t questId; // w22
  int32_t afterClear; // w23
  bool IsRepeatReward; // w0
  const MethodInfo *v72; // x4
  const MethodInfo *v73; // x3
  const MethodInfo *v74; // x1
  int32_t questPhase; // w22
  int32_t PhaseMax; // w0
  int32_t v77; // w0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *mInfoTextList; // x22
  const MethodInfo *v79; // x6
  int64_t *p_expireAt; // x8
  int64_t v81; // x22
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v82; // x21
  System_String_o *v83; // x24
  QuestBoardInformaionText_o *v84; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v85; // x23
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v86; // x23
  struct BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x21
  struct QuestBoardListViewObject_o *v88; // x8
  __int64 v89; // x10
  const MethodInfo *v90; // x3
  int32_t AlphaAnimCnt; // w22
  bool v92; // w22
  UnityEngine_Object_o *mEarthLine; // x21
  const MethodInfo *v94; // x3
  QuestBoardListViewEarthLine_o *v95; // x21
  QuestBoardListViewItemDraw_o *v96; // x0
  const MethodInfo *v97; // x1
  EventCampaignEntity_o *v98; // [xsp+0h] [xbp-A0h]
  const MethodInfo *v99; // [xsp+10h] [xbp-90h]
  int32_t v100; // [xsp+1Ch] [xbp-84h] BYREF
  int32_t fixedVal[2]; // [xsp+20h] [xbp-80h] BYREF
  UserQuestEntity_o *entity; // [xsp+28h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v103; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v104; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v105; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v106; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v107; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v108; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v109; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_418A284 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, questBoardItem);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestMaster___, v7);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__, v13);
    sub_B2C35C(&LocalizationManager_TypeInfo, v14);
    sub_B2C35C(&NetworkManager_TypeInfo, v15);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v16);
    sub_B2C35C(&QuestBoardInformaionText_TypeInfo, v17);
    sub_B2C35C(&QuestBoardListViewItemDraw_TypeInfo, v18);
    sub_B2C35C(&QuestBoardListViewManager_TypeInfo, v19);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B2C35C(&StringLiteral_13408/*"TIME_REST_QUEST_BOARD_QUEST"*/, v21);
    sub_B2C35C(&StringLiteral_23539/*"{0}"*/, v22);
    byte_418A284 = 1;
  }
  entity = 0LL;
  *(_QWORD *)fixedVal = 0LL;
  v100 = 0;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !questBoardItem )
    goto LABEL_138;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_138;
  v26 = (DataManager_o *)Instance;
  Instance = (int64_t)MapControl_QuestInfo__GetMine(questBoardItem->fields._quest_info_k__BackingField, 0LL);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_138;
  v28 = (QuestEntity_o *)Instance;
  Instance = (int64_t)mListViewObject->fields.manager;
  if ( !Instance )
    goto LABEL_138;
  size = QuestBoardListViewManager_TypeInfo;
  v29 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v29
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v29 - 8) != QuestBoardListViewManager_TypeInfo )
  {
    sub_B2C728(Instance);
    goto LABEL_140;
  }
  if ( !v26 )
    goto LABEL_138;
  dispType = quest_info_k__BackingField->fields.dispType;
  v31 = *(_QWORD *)(Instance + 568);
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              v26,
                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v28 || !MasterData_WarQuestSelectionMaster )
    goto LABEL_138;
  UserQuestMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, Instance, v28->fields.id, 0LL);
  *(UnityEngine_Color_o *)&v33 = dispType == 2 ? UnityEngine_Color__get_gray(0LL) : UnityEngine_Color__get_white(0LL);
  Instance = (int64_t)this->fields.mLabelObj;
  v37 = v33;
  v38 = v34;
  v39 = v35;
  v40 = v36;
  if ( !Instance )
    goto LABEL_138;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mLabelNameSp;
  if ( !Instance )
    goto LABEL_138;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_138;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mLabelChapterSp;
  if ( !Instance )
    goto LABEL_138;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_138;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mLabelFaceMaskShortcutSp;
  if ( !Instance )
    goto LABEL_138;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_138;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mLabelFaceMaskQuestSp;
  if ( !Instance )
    goto LABEL_138;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_138;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mTitleObj;
  if ( !Instance )
    goto LABEL_138;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mTitleLevelRoot;
  if ( !Instance )
    goto LABEL_138;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mTitleShortcutLb;
  if ( !Instance )
    goto LABEL_138;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_138;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mOptionObj;
  if ( !Instance )
    goto LABEL_138;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_138;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_138;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_138;
  Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_138;
  Instance = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_138;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_138;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mRewardObj;
  if ( !Instance )
    goto LABEL_138;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mPhaseObj;
  if ( !Instance )
    goto LABEL_138;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mChallengeObj;
  if ( !Instance )
    goto LABEL_138;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mCostObj;
  if ( !Instance )
    goto LABEL_138;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mCondObject;
  if ( !Instance )
    goto LABEL_138;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mLabelFaceObj;
  if ( !Instance )
    goto LABEL_138;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  OverwriteBannerId_k__BackingField = questBoardItem->fields._OverwriteBannerId_k__BackingField;
  if ( OverwriteBannerId_k__BackingField < 1 )
  {
    if ( v28->fields.bannerId <= 0 )
    {
      p_mcBaseP = &this->fields.mcBaseP;
      goto LABEL_59;
    }
    v46 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v46 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_SPNAME_PREFIX = v46->static_fields->QUEST_BOARD_SPNAME_PREFIX;
    v44 = System_Int32__ToString((int)v28 + 64, 0LL);
    v45 = QUEST_BOARD_SPNAME_PREFIX;
  }
  else
  {
    v42 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v42 = QuestBoardListViewItemDraw_TypeInfo;
      OverwriteBannerId_k__BackingField = questBoardItem->fields._OverwriteBannerId_k__BackingField;
    }
    RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX = v42->static_fields->RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX;
    v100 = OverwriteBannerId_k__BackingField;
    v44 = System_Int32__ToString((int32_t)&v100, 0LL);
    v45 = RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX;
  }
  v48 = System_String__Concat_44305532(v45, v44, 0LL);
  p_mcBaseP = &this->fields.mcBaseP;
  mcBaseP = this->fields.mcBaseP;
  v51 = v48;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = AtlasManager__SetEventUI(mcBaseP, v51, 0LL);
  if ( !mcBaseP )
    goto LABEL_138;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mcBaseP, Instance & 1, 0LL);
LABEL_59:
  Instance = (int64_t)*p_mcBaseP;
  if ( !*p_mcBaseP )
    goto LABEL_138;
  (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 840LL))(
    Instance,
    *(_QWORD *)(*(_QWORD *)Instance + 848LL));
  Instance = (int64_t)*p_mcBaseP;
  if ( !*p_mcBaseP )
    goto LABEL_138;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_138;
  Instance = (int64_t)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                        (UnityEngine_GameObject_o *)Instance,
                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Instance )
    goto LABEL_138;
  v104.fields.r = v37;
  v104.fields.g = v38;
  v104.fields.b = v39;
  v104.fields.a = v40;
  UIWidget__set_color((UIWidget_o *)Instance, v104, 0LL);
  if ( dispType != 2 && quest_info_k__BackingField->fields.isNew )
    QuestBoardListViewItemDraw__SetStatusActive(this, 1, 1, v52);
  v53 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v53 = QuestBoardListViewItemDraw_TypeInfo;
  }
  QuestBoardListViewItemDraw__SetNewIcon(
    this,
    v53->static_fields->NEW_POS_SHORTCUT,
    v53->static_fields->NEW_W_DEFAULT,
    v53->static_fields->NEW_H_DEFAULT,
    v52);
  if ( quest_info_k__BackingField->fields.pickupPriority >= 1 )
    QuestBoardListViewItemDraw__SetStatusActive(this, 4, 1, v55);
  QuestBoardListViewItemDraw__SetPickupIcon(this, v54);
  if ( dispType == 2 )
  {
    if ( quest_info_k__BackingField->fields.questReleaseClosedID >= 1 )
    {
      p_mTitleNameLb = &this->fields.mTitleNameLb;
      mTitleNameLb = this->fields.mTitleNameLb;
      Instance = (int64_t)QuestBoardListViewItemDraw__GetAdvanceNoticeText(v56, quest_info_k__BackingField, v28, v58);
      if ( !mTitleNameLb )
        goto LABEL_138;
      v61 = (System_String_o *)Instance;
      Instance = (int64_t)mTitleNameLb;
      goto LABEL_85;
    }
  }
  else if ( quest_info_k__BackingField->fields.isNew && quest_info_k__BackingField->fields.pickupPriority >= 1 )
  {
    QuestBoardListViewItemDraw__SetStatusToggle(this, v57);
  }
  Instance = (int64_t)QuestEntity__getQuestName(v28, 0LL);
  if ( !Instance )
    goto LABEL_138;
  v62 = (System_String_o *)Instance;
  if ( System_String__Contains((System_String_o *)Instance, (System_String_o *)StringLiteral_23539/*"{0}"*/, 0LL) )
  {
    v63 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           v26,
                                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
    Instance = QuestEntity__getServantId(v28, 0LL);
    if ( !v63 )
      goto LABEL_138;
    Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                          v63,
                          Instance,
                          (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_138;
    BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)Instance, 0, -1, 0LL);
    v62 = System_String__Format(v62, BattleName, 0LL);
  }
  p_mTitleNameLb = &this->fields.mTitleNameLb;
  Instance = (int64_t)this->fields.mTitleNameLb;
  if ( !Instance )
    goto LABEL_138;
  v61 = v62;
LABEL_85:
  UILabel__set_text((UILabel_o *)Instance, v61, 0LL);
  Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
  v65 = *p_mTitleNameLb;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  }
  if ( !v65 )
    goto LABEL_138;
  UILabel__SetCondensedScale(v65, QuestBoardListViewItemDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH, 0LL);
  Instance = (int64_t)*p_mTitleNameLb;
  if ( !*p_mTitleNameLb )
    goto LABEL_138;
  v105.fields.r = v37;
  v105.fields.g = v38;
  v105.fields.b = v39;
  v105.fields.a = v40;
  UIWidget__set_color((UIWidget_o *)Instance, v105, 0LL);
  if ( dispType == 2 )
  {
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          v26,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
    if ( !Instance )
      goto LABEL_138;
    EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                               (QuestReleaseOverwriteMaster_o *)Instance,
                               v28->fields.id,
                               v31,
                               0LL);
    QuestBoardListViewItemDraw__SetupCondtionChangeMessage(this, EntityByQuestIdAndTime, v68);
  }
  v106.fields.r = v37;
  v106.fields.g = v38;
  v106.fields.b = v39;
  v106.fields.a = v40;
  QuestBoardListViewItemDraw__SetupRewardIconDisp(this, v28, dispType == 2, v106, v66);
  questId = quest_info_k__BackingField->fields.questId;
  afterClear = v28->fields.afterClear;
  IsRepeatReward = QuestEntity__IsRepeatReward(v28, 0LL);
  v107.fields.r = v37;
  v107.fields.g = v38;
  v107.fields.b = v39;
  v107.fields.a = v40;
  QuestBoardListViewItemDraw__SetupFirstRewardDisp(this, questId, afterClear, v107, IsRepeatReward, v72);
  v108.fields.r = v37;
  v108.fields.g = v38;
  v108.fields.b = v39;
  v108.fields.a = v40;
  QuestBoardListViewItemDraw__SetupRewardGotAndNotGiveDisp(this, quest_info_k__BackingField, entity, v108, v73);
  QuestBoardListViewItemDraw__ResetInfoTextList(this, v74);
  fixedVal[0] = -1;
  fixedVal[1] = 0;
  questPhase = quest_info_k__BackingField->fields.questPhase;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0LL);
  v77 = UnityEngine_Mathf__Min_40694704(questPhase + 1, PhaseMax, 0LL);
  mInfoTextList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields.mInfoTextList;
  Instance = (int64_t)QuestBoardListViewItemDraw__GetCampaignText(
                        this,
                        quest_info_k__BackingField->fields.questId,
                        v77,
                        0,
                        &fixedVal[1],
                        fixedVal,
                        v79);
  if ( !mInfoTextList
    || (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          mInfoTextList,
          (System_Collections_Generic_IEnumerable_T__o *)Instance,
          (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__),
        (Instance = (int64_t)this->fields.mRarePrismSp) == 0)
    || (Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0 )
  {
LABEL_138:
    sub_B2C434(Instance, size);
  }
  Instance = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( (Instance & 1) != 0 )
  {
    Instance = (int64_t)entity;
    if ( !entity )
      goto LABEL_138;
    Instance = UserQuestEntity__IsExpireNoLimit(entity, 0LL);
    if ( (Instance & 1) != 0 )
      goto LABEL_109;
    if ( !entity )
      goto LABEL_138;
    p_expireAt = &entity->fields.expireAt;
  }
  else
  {
    p_expireAt = &quest_info_k__BackingField->fields.endTime;
  }
  v81 = *p_expireAt;
  if ( *p_expireAt >= 1 )
  {
    Instance = QuestEntity__HasFlag(v28, 32LL, 0LL);
    if ( (Instance & 1) == 0 )
    {
      v82 = this->fields.mInfoTextList;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v83 = LocalizationManager__Get((System_String_o *)StringLiteral_13408/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0LL);
      v84 = (QuestBoardInformaionText_o *)sub_B2C42C(QuestBoardInformaionText_TypeInfo);
      v109.fields.r = 0.0;
      v109.fields.g = 0.0;
      v109.fields.b = 0.0;
      v109.fields.a = 0.0;
      v103.fields.x = 0.0;
      v103.fields.y = 0.0;
      v103.fields.z = 0.0;
      v85 = (EventMissionProgressRequest_Argument_ProgressData_o *)v84;
      QuestBoardInformaionText___ctor(v84, v83, v81, 0, 0, v109, -1, 0, v103, 1, v98, 0LL, v99);
      if ( !v82 )
        goto LABEL_138;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v82,
        v85,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
    }
  }
LABEL_109:
  v86 = this->fields.mInfoTextList;
  if ( !v86 )
    goto LABEL_138;
  size = (QuestBoardListViewManager_c *)(unsigned int)v86->fields._size;
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  if ( (int)size < 1 )
  {
    v92 = 0;
    goto LABEL_121;
  }
  v88 = this->fields.mListViewObject;
  if ( !v88 )
    goto LABEL_138;
  Instance = (int64_t)v88->fields.manager;
  if ( !Instance )
    goto LABEL_138;
  v89 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v89
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v89 - 8) != QuestBoardListViewManager_TypeInfo )
  {
LABEL_140:
    sub_B2C728(Instance);
    QuestBoardListViewItemDraw__ResetInfoTextList(v96, v97);
    return;
  }
  AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt((QuestBoardListViewManager_o *)Instance, (int32_t)size, 0LL);
  if ( v86->fields._size <= (unsigned int)AlphaAnimCnt )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  Instance = (int64_t)v86->fields._items->m_Items[AlphaAnimCnt];
  if ( !Instance )
    goto LABEL_138;
  QuestBoardInformaionText__SetTime(
    (QuestBoardInformaionText_o *)Instance,
    &this->fields.mOptionInfoLb,
    &this->fields.mOptionInfoFrameSp,
    v90);
  Instance = (int64_t)this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_138;
  BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)Instance, 1.0, 0LL);
  v92 = 1;
  quest_info_k__BackingField->fields.costCalcVal = fixedVal[1];
  quest_info_k__BackingField->fields._fixedCostVal_k__BackingField = fixedVal[0];
LABEL_121:
  Instance = (int64_t)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_138;
  Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_138;
  Instance = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_138;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_138;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v92, 0LL);
  Instance = (int64_t)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_138;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_138;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v92, 0LL);
  mEarthLine = (UnityEngine_Object_o *)this->fields.mEarthLine;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mEarthLine, 0LL, 0LL) )
  {
    Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
    v95 = this->fields.mEarthLine;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
    }
    if ( v95 )
    {
      QuestBoardListViewEarthLine__SetupSecond(
        v95,
        *(UnityEngine_Vector3_o *)(*(_QWORD *)(Instance + 184) + 228LL),
        this->fields.mListViewObject,
        quest_info_k__BackingField->fields.warId,
        v94);
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
  int64_t Instance; // x0
  QuestBoardListViewManager_c *size; // x1
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x20
  int32_t info_kind_k__BackingField; // w25
  DataManager_o *v27; // x22
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  QuestEntity_o *v29; // x21
  __int64 v30; // x9
  int32_t dispType; // w28
  int64_t v32; // x23
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x24
  float v34; // s0
  float v35; // s1
  float v36; // s2
  float v37; // s3
  float v38; // s8
  float v39; // s9
  float v40; // s10
  float v41; // s11
  UISprite_o *mcBaseP; // x24
  System_String_o **v43; // x8
  const MethodInfo *v44; // x3
  QuestBoardListViewItemDraw_c *v45; // x0
  const MethodInfo *v46; // x1
  const MethodInfo *v47; // x3
  QuestBoardListViewItemDraw_o *v48; // x0
  const MethodInfo *v49; // x1
  const MethodInfo *v50; // x3
  struct UILabel_o *mTitleNameLb; // x24
  struct UILabel_o **p_mTitleNameLb; // x25
  System_String_o *v53; // x1
  System_String_o *v54; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v55; // x25
  Il2CppObject *BattleName; // x0
  UILabel_o *v57; // x24
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  const MethodInfo *v59; // x2
  int32_t ServantId; // w23
  UILabel_o *mTitleShortcutLb; // x22
  const MethodInfo *v62; // x5
  QuestBoardListViewItemDraw_c *v63; // x0
  UISprite_o *mLabelFaceMaskShortcutSp; // x22
  const MethodInfo *v65; // x3
  int32_t questId; // w22
  int32_t afterClear; // w23
  bool IsRepeatReward; // w0
  const MethodInfo *v69; // x4
  const MethodInfo *v70; // x3
  const MethodInfo *v71; // x1
  int32_t questPhase; // w22
  int32_t PhaseMax; // w0
  int32_t v74; // w0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *mInfoTextList; // x22
  const MethodInfo *v76; // x6
  int64_t *p_expireAt; // x8
  int64_t v78; // x22
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v79; // x21
  System_String_o *v80; // x24
  QuestBoardInformaionText_o *v81; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v82; // x23
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v83; // x23
  struct BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x21
  struct QuestBoardListViewObject_o *v85; // x8
  __int64 v86; // x10
  const MethodInfo *v87; // x3
  int32_t AlphaAnimCnt; // w22
  bool v89; // w22
  UnityEngine_Object_o *mEarthLine; // x21
  const MethodInfo *v91; // x3
  QuestBoardListViewEarthLine_o *v92; // x21
  QuestBoardListViewItemDraw_o *v93; // x0
  QuestBoardListViewItem_o *v94; // x1
  const MethodInfo *v95; // x2
  EventCampaignEntity_o *v96; // [xsp+0h] [xbp-A0h]
  const MethodInfo *v97; // [xsp+10h] [xbp-90h]
  int32_t fixedVal[2]; // [xsp+20h] [xbp-80h] BYREF
  UserQuestEntity_o *entity; // [xsp+28h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v100; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v101; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v102; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v103; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v104; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v105; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v106; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v107; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v108; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_418A283 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___, questBoardItem);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestMaster___, v6);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__, v12);
    sub_B2C35C(&LocalizationManager_TypeInfo, v13);
    sub_B2C35C(&NetworkManager_TypeInfo, v14);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v15);
    sub_B2C35C(&QuestBoardInformaionText_TypeInfo, v16);
    sub_B2C35C(&QuestBoardListViewItemDraw_TypeInfo, v17);
    sub_B2C35C(&QuestBoardListViewManager_TypeInfo, v18);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B2C35C(&StringLiteral_13408/*"TIME_REST_QUEST_BOARD_QUEST"*/, v20);
    sub_B2C35C(&StringLiteral_23539/*"{0}"*/, v21);
    sub_B2C35C(&StringLiteral_1/*""*/, v22);
    byte_418A283 = 1;
  }
  *(_QWORD *)fixedVal = 0LL;
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !questBoardItem )
    goto LABEL_142;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_142;
  info_kind_k__BackingField = questBoardItem->fields._info_kind_k__BackingField;
  v27 = (DataManager_o *)Instance;
  Instance = (int64_t)MapControl_QuestInfo__GetMine(questBoardItem->fields._quest_info_k__BackingField, 0LL);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_142;
  v29 = (QuestEntity_o *)Instance;
  Instance = (int64_t)mListViewObject->fields.manager;
  if ( !Instance )
    goto LABEL_142;
  size = QuestBoardListViewManager_TypeInfo;
  v30 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v30
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v30 - 8) != QuestBoardListViewManager_TypeInfo )
  {
    sub_B2C728(Instance);
    goto LABEL_144;
  }
  if ( !v27 )
    goto LABEL_142;
  dispType = quest_info_k__BackingField->fields.dispType;
  v32 = *(_QWORD *)(Instance + 568);
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              v27,
                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v29 || !MasterData_WarQuestSelectionMaster )
    goto LABEL_142;
  UserQuestMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, Instance, v29->fields.id, 0LL);
  *(UnityEngine_Color_o *)&v34 = dispType == 2 ? UnityEngine_Color__get_gray(0LL) : UnityEngine_Color__get_white(0LL);
  Instance = (int64_t)this->fields.mLabelObj;
  v38 = v34;
  v39 = v35;
  v40 = v36;
  v41 = v37;
  if ( !Instance )
    goto LABEL_142;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mLabelNameSp;
  if ( !Instance )
    goto LABEL_142;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_142;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mLabelChapterSp;
  if ( !Instance )
    goto LABEL_142;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_142;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mLabelFaceMaskShortcutSp;
  if ( !Instance )
    goto LABEL_142;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_142;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mLabelFaceMaskQuestSp;
  if ( !Instance )
    goto LABEL_142;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_142;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mTitleObj;
  if ( !Instance )
    goto LABEL_142;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mTitleLevelRoot;
  if ( !Instance )
    goto LABEL_142;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mTitleShortcutLb;
  if ( !Instance )
    goto LABEL_142;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_142;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mOptionObj;
  if ( !Instance )
    goto LABEL_142;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_142;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_142;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_142;
  Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_142;
  Instance = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_142;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_142;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mRewardObj;
  if ( !Instance )
    goto LABEL_142;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mPhaseObj;
  if ( !Instance )
    goto LABEL_142;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mChallengeObj;
  if ( !Instance
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL),
        (Instance = (int64_t)this->fields.mCostObj) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL),
        (Instance = (int64_t)this->fields.mCondObject) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL),
        (Instance = (int64_t)this->fields.mcBaseP) == 0) )
  {
LABEL_142:
    sub_B2C434(Instance, size);
  }
  UISprite__set_atlas((UISprite_o *)Instance, this->fields.mTerminalAtlas, 0LL);
  mcBaseP = this->fields.mcBaseP;
  Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
  if ( info_kind_k__BackingField == 2 )
  {
    if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
    }
    v43 = (System_String_o **)(*(_QWORD *)(Instance + 184) + 1000LL);
    if ( !mcBaseP )
      goto LABEL_142;
  }
  else
  {
    if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
    }
    v43 = (System_String_o **)(*(_QWORD *)(Instance + 184) + 1008LL);
    if ( !mcBaseP )
      goto LABEL_142;
  }
  UISprite__set_spriteName(mcBaseP, *v43, 0LL);
  Instance = (int64_t)this->fields.mcBaseP;
  if ( !Instance )
    goto LABEL_142;
  (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 840LL))(
    Instance,
    *(_QWORD *)(*(_QWORD *)Instance + 848LL));
  Instance = (int64_t)this->fields.mcBaseP;
  if ( !Instance )
    goto LABEL_142;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_142;
  Instance = (int64_t)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                        (UnityEngine_GameObject_o *)Instance,
                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Instance )
    goto LABEL_142;
  v101.fields.r = v38;
  v101.fields.g = v39;
  v101.fields.b = v40;
  v101.fields.a = v41;
  UIWidget__set_color((UIWidget_o *)Instance, v101, 0LL);
  if ( dispType != 2 && quest_info_k__BackingField->fields.isNew )
    QuestBoardListViewItemDraw__SetStatusActive(this, 1, 1, v44);
  v45 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v45 = QuestBoardListViewItemDraw_TypeInfo;
  }
  QuestBoardListViewItemDraw__SetNewIcon(
    this,
    v45->static_fields->NEW_POS_SHORTCUT,
    v45->static_fields->NEW_W_DEFAULT,
    v45->static_fields->NEW_H_DEFAULT,
    v44);
  if ( quest_info_k__BackingField->fields.pickupPriority >= 1 )
    QuestBoardListViewItemDraw__SetStatusActive(this, 4, 1, v47);
  QuestBoardListViewItemDraw__SetPickupIcon(this, v46);
  if ( dispType == 2 )
  {
    if ( quest_info_k__BackingField->fields.questReleaseClosedID >= 1 )
    {
      p_mTitleNameLb = &this->fields.mTitleNameLb;
      mTitleNameLb = this->fields.mTitleNameLb;
      Instance = (int64_t)QuestBoardListViewItemDraw__GetAdvanceNoticeText(v48, quest_info_k__BackingField, v29, v50);
      if ( !mTitleNameLb )
        goto LABEL_142;
      v53 = (System_String_o *)Instance;
      Instance = (int64_t)mTitleNameLb;
      goto LABEL_80;
    }
  }
  else if ( quest_info_k__BackingField->fields.isNew && quest_info_k__BackingField->fields.pickupPriority >= 1 )
  {
    QuestBoardListViewItemDraw__SetStatusToggle(this, v49);
  }
  Instance = (int64_t)QuestEntity__getQuestName(v29, 0LL);
  if ( !Instance )
    goto LABEL_142;
  v54 = (System_String_o *)Instance;
  if ( System_String__Contains((System_String_o *)Instance, (System_String_o *)StringLiteral_23539/*"{0}"*/, 0LL) )
  {
    v55 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           v27,
                                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
    Instance = QuestEntity__getServantId(v29, 0LL);
    if ( !v55 )
      goto LABEL_142;
    Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                          v55,
                          Instance,
                          (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_142;
    BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)Instance, 0, -1, 0LL);
    v54 = System_String__Format(v54, BattleName, 0LL);
  }
  p_mTitleNameLb = &this->fields.mTitleNameLb;
  Instance = (int64_t)this->fields.mTitleNameLb;
  if ( !Instance )
    goto LABEL_142;
  v53 = v54;
LABEL_80:
  UILabel__set_text((UILabel_o *)Instance, v53, 0LL);
  Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
  v57 = *p_mTitleNameLb;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  }
  if ( !v57 )
    goto LABEL_142;
  UILabel__SetCondensedScale(v57, QuestBoardListViewItemDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH, 0LL);
  Instance = (int64_t)*p_mTitleNameLb;
  if ( !*p_mTitleNameLb )
    goto LABEL_142;
  v102.fields.r = v38;
  v102.fields.g = v39;
  v102.fields.b = v40;
  v102.fields.a = v41;
  UIWidget__set_color((UIWidget_o *)Instance, v102, 0LL);
  if ( dispType == 2 )
  {
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          v27,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
    if ( !Instance )
      goto LABEL_142;
    EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                               (QuestReleaseOverwriteMaster_o *)Instance,
                               v29->fields.id,
                               v32,
                               0LL);
    QuestBoardListViewItemDraw__SetupCondtionChangeMessage(this, EntityByQuestIdAndTime, v59);
  }
  ServantId = QuestEntity__getServantId(v29, 0LL);
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        v27,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_142;
  Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        ServantId,
                        (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  mTitleShortcutLb = this->fields.mTitleShortcutLb;
  if ( Instance )
  {
    Instance = (int64_t)ServantEntity__getName((ServantEntity_o *)Instance, -1, -1, 0LL);
    if ( !mTitleShortcutLb )
      goto LABEL_142;
    UILabel__set_text(mTitleShortcutLb, (System_String_o *)Instance, 0LL);
    Instance = (int64_t)this->fields.mTitleShortcutLb;
    if ( !Instance )
      goto LABEL_142;
    v103.fields.r = v38;
    v103.fields.g = v39;
    v103.fields.b = v40;
    v103.fields.a = v41;
    UIWidget__set_color((UIWidget_o *)Instance, v103, 0LL);
  }
  else
  {
    if ( !mTitleShortcutLb )
      goto LABEL_142;
    UILabel__set_text(this->fields.mTitleShortcutLb, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  v63 = QuestBoardListViewItemDraw_TypeInfo;
  mLabelFaceMaskShortcutSp = this->fields.mLabelFaceMaskShortcutSp;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v63 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v104.fields.r = v38;
  v104.fields.g = v39;
  v104.fields.b = v40;
  v104.fields.a = v41;
  QuestBoardListViewItemDraw__SetFaceImage(
    this,
    v29,
    mLabelFaceMaskShortcutSp,
    v63->static_fields->SHORTCUT_FACE_MASK_SP_W,
    v63->static_fields->SHORTCUT_FACE_MASK_SPNAME,
    v104,
    v62);
  v105.fields.r = v38;
  v105.fields.g = v39;
  v105.fields.b = v40;
  v105.fields.a = v41;
  QuestBoardListViewItemDraw__SetupRewardIconDisp(this, v29, dispType == 2, v105, v65);
  questId = quest_info_k__BackingField->fields.questId;
  afterClear = v29->fields.afterClear;
  IsRepeatReward = QuestEntity__IsRepeatReward(v29, 0LL);
  v106.fields.r = v38;
  v106.fields.g = v39;
  v106.fields.b = v40;
  v106.fields.a = v41;
  QuestBoardListViewItemDraw__SetupFirstRewardDisp(this, questId, afterClear, v106, IsRepeatReward, v69);
  v107.fields.r = v38;
  v107.fields.g = v39;
  v107.fields.b = v40;
  v107.fields.a = v41;
  QuestBoardListViewItemDraw__SetupRewardGotAndNotGiveDisp(this, quest_info_k__BackingField, entity, v107, v70);
  QuestBoardListViewItemDraw__ResetInfoTextList(this, v71);
  fixedVal[0] = -1;
  fixedVal[1] = 0;
  questPhase = quest_info_k__BackingField->fields.questPhase;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0LL);
  v74 = UnityEngine_Mathf__Min_40694704(questPhase + 1, PhaseMax, 0LL);
  mInfoTextList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields.mInfoTextList;
  Instance = (int64_t)QuestBoardListViewItemDraw__GetCampaignText(
                        this,
                        quest_info_k__BackingField->fields.questId,
                        v74,
                        0,
                        &fixedVal[1],
                        fixedVal,
                        v76);
  if ( !mInfoTextList )
    goto LABEL_142;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    mInfoTextList,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
  Instance = (int64_t)this->fields.mRarePrismSp;
  if ( !Instance )
    goto LABEL_142;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_142;
  Instance = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( (Instance & 1) != 0 )
  {
    Instance = (int64_t)entity;
    if ( !entity )
      goto LABEL_142;
    Instance = UserQuestEntity__IsExpireNoLimit(entity, 0LL);
    if ( (Instance & 1) != 0 )
      goto LABEL_114;
    if ( !entity )
      goto LABEL_142;
    p_expireAt = &entity->fields.expireAt;
  }
  else
  {
    p_expireAt = &quest_info_k__BackingField->fields.endTime;
  }
  v78 = *p_expireAt;
  if ( *p_expireAt >= 1 )
  {
    Instance = QuestEntity__HasFlag(v29, 32LL, 0LL);
    if ( (Instance & 1) == 0 )
    {
      v79 = this->fields.mInfoTextList;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v80 = LocalizationManager__Get((System_String_o *)StringLiteral_13408/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0LL);
      v81 = (QuestBoardInformaionText_o *)sub_B2C42C(QuestBoardInformaionText_TypeInfo);
      v108.fields.r = 0.0;
      v108.fields.g = 0.0;
      v108.fields.b = 0.0;
      v108.fields.a = 0.0;
      v100.fields.x = 0.0;
      v100.fields.y = 0.0;
      v100.fields.z = 0.0;
      v82 = (EventMissionProgressRequest_Argument_ProgressData_o *)v81;
      QuestBoardInformaionText___ctor(v81, v80, v78, 0, 0, v108, -1, 0, v100, 1, v96, 0LL, v97);
      if ( !v79 )
        goto LABEL_142;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v79,
        v82,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
    }
  }
LABEL_114:
  v83 = this->fields.mInfoTextList;
  if ( !v83 )
    goto LABEL_142;
  size = (QuestBoardListViewManager_c *)(unsigned int)v83->fields._size;
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  if ( (int)size >= 1 )
  {
    v85 = this->fields.mListViewObject;
    if ( !v85 )
      goto LABEL_142;
    Instance = (int64_t)v85->fields.manager;
    if ( !Instance )
      goto LABEL_142;
    v86 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v86
      && *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v86 - 8) == QuestBoardListViewManager_TypeInfo )
    {
      AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt(
                       (QuestBoardListViewManager_o *)Instance,
                       (int32_t)size,
                       0LL);
      if ( v83->fields._size <= (unsigned int)AlphaAnimCnt )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      Instance = (int64_t)v83->fields._items->m_Items[AlphaAnimCnt];
      if ( !Instance )
        goto LABEL_142;
      QuestBoardInformaionText__SetTime(
        (QuestBoardInformaionText_o *)Instance,
        &this->fields.mOptionInfoLb,
        &this->fields.mOptionInfoFrameSp,
        v87);
      Instance = (int64_t)this->fields.mOptionInfoLb;
      if ( !Instance )
        goto LABEL_142;
      BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)Instance, 1.0, 0LL);
      v89 = 1;
      quest_info_k__BackingField->fields.costCalcVal = fixedVal[1];
      quest_info_k__BackingField->fields._fixedCostVal_k__BackingField = fixedVal[0];
      goto LABEL_126;
    }
LABEL_144:
    sub_B2C728(Instance);
    QuestBoardListViewItemDraw__SetItemOfQuest(v93, v94, v95);
    return;
  }
  v89 = 0;
LABEL_126:
  Instance = (int64_t)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_142;
  Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_142;
  Instance = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_142;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_142;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v89, 0LL);
  Instance = (int64_t)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_142;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_142;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v89, 0LL);
  mEarthLine = (UnityEngine_Object_o *)this->fields.mEarthLine;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mEarthLine, 0LL, 0LL) )
  {
    Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
    v92 = this->fields.mEarthLine;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
    }
    if ( !v92 )
      goto LABEL_142;
    QuestBoardListViewEarthLine__SetupSecond(
      v92,
      *(UnityEngine_Vector3_o *)(*(_QWORD *)(Instance + 184) + 228LL),
      this->fields.mListViewObject,
      quest_info_k__BackingField->fields.warId,
      v91);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  int64_t Instance; // x0
  int64_t size; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x21
  DataManager_o *v38; // x23
  QuestEntity_o *PhaseDetailedEntity; // x22
  unsigned int v40; // w25
  int32_t dispType; // w24
  bool HasFlag; // w26
  int v43; // s0
  int v44; // s1
  int v45; // s2
  int v46; // s3
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x23
  int32_t questId; // w23
  bool IsQuestClear_25746984; // w0
  int32_t questPhase; // w23
  int32_t PhaseMax; // w0
  UnityEngine_GameObject_o *mLabelObj; // x8
  UnityEngine_GameObject_o *mCostObj; // x27
  QuestBoardListViewItemDraw_c *v54; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v56; // x0
  UnityEngine_GameObject_o *v57; // x0
  QuestBoardListViewItemDraw_c *v58; // x0
  System_String_o *QUEST_BOARD_SPNAME_PREFIX; // x24
  System_String_o *v60; // x0
  System_String_o *v61; // x0
  struct UISprite_o **p_mcBaseP; // x26
  UISprite_o *v63; // x28
  System_String_o *v64; // x24
  UISprite_o *v65; // x24
  System_String_o *QUEST_BOARD_SHOHI_SPNAME_PREFIX; // x28
  System_String_o *v67; // x0
  System_String_o *v68; // x0
  UISprite_o *v69; // x27
  System_String_o *SHOHI_SP_NAME_WAR_BOARD; // x1
  UISprite_o *mShohiSp; // x27
  UISprite_o *mcBaseP; // x27
  __int64 v73; // x8
  System_String_o *v74; // x24
  __int64 v75; // x8
  System_String_o *v76; // x0
  System_String_o *v77; // x24
  int32_t v78; // w24
  const MethodInfo *v79; // x3
  UnityEngine_GameObject_o *v80; // x0
  QuestBoardListViewItemDraw_c *v81; // x8
  UnityEngine_GameObject_o *v82; // x27
  float NEXT_POS_X_QUEST; // w8
  int32_t v84; // w1
  bool activeSelf; // w0
  const MethodInfo *v86; // x3
  QuestBoardListViewItemDraw_c *v87; // x8
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  const MethodInfo *v92; // x2
  UnityEngine_GameObject_o *v93; // x27
  _BOOL8 v94; // x0
  const MethodInfo *v95; // x5
  QuestBoardListViewItemDraw_c *v96; // x0
  int32_t v97; // w27
  System_String_o *RecommendLv; // x0
  const MethodInfo *v99; // x2
  const MethodInfo *v100; // x2
  QuestBoardListViewItemDraw_o *v101; // x0
  UISprite_o *mLabelFaceMaskQuestSp; // x26
  int32_t mCorners_high; // w24
  System_String_o *FaceMaskSpriteName; // x0
  const MethodInfo *v105; // x5
  bool v106; // w0
  const MethodInfo *v107; // x3
  UILabel_o *mTitleNameLb; // x26
  _BOOL8 enabled; // x0
  const MethodInfo *v110; // x3
  QuestBoardListViewItemDraw_o *v111; // x0
  const MethodInfo *v112; // x2
  UILabel_o *mLabelSubSectionNumLb; // x25
  const MethodInfo *v114; // x2
  bool v115; // w8
  QuestBoardListViewItemDraw_o *p_chapterSubId; // x0
  UISprite_o *mLabelNameSp; // x26
  QuestBoardListViewItemDraw_o *v118; // x0
  const MethodInfo *v119; // x3
  System_String_o *QuestIconName; // x24
  System_Action_o *v121; // x24
  const MethodInfo *v122; // x3
  UILabel_o *v123; // x24
  UILabel_o *v124; // x25
  const MethodInfo *v125; // x3
  int32_t v126; // w24
  int32_t afterClear; // w25
  float v128; // s8
  float v129; // s9
  float v130; // s10
  float v131; // s11
  bool IsRepeatReward; // w0
  const MethodInfo *v133; // x4
  const MethodInfo *v134; // x3
  const MethodInfo *v135; // x1
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *mInfoTextList; // x25
  const MethodInfo *v137; // x6
  int64_t *p_expireAt; // x8
  int64_t v139; // x24
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v140; // x25
  System_String_o *v141; // x27
  QuestBoardInformaionText_o *v142; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v143; // x26
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v144; // x26
  struct BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x24
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  __int64 v147; // x10
  const MethodInfo *v148; // x3
  int32_t AlphaAnimCnt; // w25
  bool v150; // w25
  WarBoardQuestEntity_o *v151; // x0
  WarBoardQuestEntity_o *v152; // x21
  UILabel_o *mBoardMessage; // x21
  __int64 v154; // x8
  UISprite_o *mLabelChapterSp; // x25
  QuestBoardListViewItemDraw_o *v156; // x0
  const MethodInfo *v157; // x2
  System_String_o *QuestIconNameForMainType; // x24
  __int64 v159; // x0
  EventCampaignEntity_o *v160; // [xsp+0h] [xbp-C0h]
  const MethodInfo *v161; // [xsp+10h] [xbp-B0h]
  bool v162; // [xsp+24h] [xbp-9Ch]
  bool v163; // [xsp+28h] [xbp-98h]
  int32_t v164; // [xsp+2Ch] [xbp-94h]
  int32_t phase; // [xsp+30h] [xbp-90h]
  int32_t fixedVal; // [xsp+34h] [xbp-8Ch] BYREF
  int32_t costCalcVal; // [xsp+38h] [xbp-88h] BYREF
  bool isTripleItemConsume; // [xsp+3Ch] [xbp-84h] BYREF
  bool isDoubleItemConsumeQp; // [xsp+40h] [xbp-80h] BYREF
  bool isDoubleItemConsume; // [xsp+44h] [xbp-7Ch] BYREF
  UserQuestEntity_o *entity; // [xsp+48h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v172; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v173; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v174; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_418A28A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, questBoardItem);
    sub_B2C35C(&AtlasManager_TypeInfo, v5);
    sub_B2C35C(&CondType_TypeInfo, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestGroupMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_WarBoardQuestMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_WarBoardStageMaster___, v10);
    sub_B2C35C(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__, v11);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v12);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__, v17);
    sub_B2C35C(&LocalizationManager_TypeInfo, v18);
    sub_B2C35C(&NetworkManager_TypeInfo, v19);
    sub_B2C35C(&QuestBoardInformaionText_TypeInfo, v20);
    sub_B2C35C(&QuestBoardListViewItemDraw_TypeInfo, v21);
    sub_B2C35C(&QuestBoardListViewManager_TypeInfo, v22);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_B2C35C(&Method_QuestBoardListViewItemDraw___c__DisplayClass300_0__SetItemOfWarBoard_b__0__, v24);
    sub_B2C35C(&QuestBoardListViewItemDraw___c__DisplayClass300_0_TypeInfo, v25);
    sub_B2C35C(&StringLiteral_13408/*"TIME_REST_QUEST_BOARD_QUEST"*/, v26);
    sub_B2C35C(&StringLiteral_1/*""*/, v27);
    byte_418A28A = 1;
  }
  entity = 0LL;
  isDoubleItemConsume = 0;
  isDoubleItemConsumeQp = 0;
  isTripleItemConsume = 0;
  fixedVal = 0;
  costCalcVal = 0;
  v28 = sub_B2C42C(QuestBoardListViewItemDraw___c__DisplayClass300_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass300_0___ctor(
    (QuestBoardListViewItemDraw___c__DisplayClass300_0_o *)v28,
    0LL);
  if ( !v28 )
    goto LABEL_237;
  *(_QWORD *)(v28 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v28 + 16), (System_Int32_array **)this, v31, v32, v33, v34, v35, v36);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !questBoardItem )
    goto LABEL_237;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_237;
  v38 = (DataManager_o *)Instance;
  Instance = (int64_t)MapControl_QuestInfo__GetMine(quest_info_k__BackingField, 0LL);
  if ( !Instance )
    goto LABEL_237;
  PhaseDetailedEntity = QuestEntity__GetPhaseDetailedEntity((QuestEntity_o *)Instance, 0LL);
  Instance = MapControl_QuestInfo__GetQuestType(quest_info_k__BackingField, 0LL);
  if ( !v38 )
    goto LABEL_237;
  v40 = Instance;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        v38,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !PhaseDetailedEntity || !Instance )
    goto LABEL_237;
  QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Instance, PhaseDetailedEntity->fields.id, 0LL);
  dispType = quest_info_k__BackingField->fields.dispType;
  HasFlag = QuestEntity__HasFlag(PhaseDetailedEntity, 2LL, 0LL);
  if ( dispType == 2 )
    *(UnityEngine_Color_o *)&v43 = UnityEngine_Color__get_gray(0LL);
  else
    *(UnityEngine_Color_o *)&v43 = UnityEngine_Color__get_white(0LL);
  *(_DWORD *)(v28 + 24) = v43;
  *(_DWORD *)(v28 + 28) = v44;
  *(_DWORD *)(v28 + 32) = v45;
  *(_DWORD *)(v28 + 36) = v46;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              v38,
                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_237;
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
  IsQuestClear_25746984 = CondType__IsQuestClear_25746984(questId, -1, 0, 0LL);
  questPhase = quest_info_k__BackingField->fields.questPhase;
  v163 = IsQuestClear_25746984;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0LL);
  Instance = UnityEngine_Mathf__Min_40694704(questPhase + 1, PhaseMax, 0LL);
  mLabelObj = this->fields.mLabelObj;
  phase = Instance;
  if ( !mLabelObj )
    goto LABEL_237;
  UnityEngine_GameObject__SetActive(mLabelObj, 1, 0LL);
  Instance = (int64_t)this->fields.mLabelNameSp;
  if ( !Instance )
    goto LABEL_237;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_237;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mLabelChapterSp;
  if ( !Instance )
    goto LABEL_237;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_237;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mLabelFaceMaskShortcutSp;
  if ( !Instance )
    goto LABEL_237;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_237;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mLabelFaceMaskQuestSp;
  if ( !Instance )
    goto LABEL_237;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_237;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mTitleObj;
  if ( !Instance )
    goto LABEL_237;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mTitleShortcutLb;
  if ( !Instance )
    goto LABEL_237;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_237;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mOptionObj;
  if ( !Instance )
    goto LABEL_237;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mRewardObj;
  if ( !Instance )
    goto LABEL_237;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_237;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_237;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mPhaseObj;
  if ( !Instance )
    goto LABEL_237;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mChallengeObj;
  if ( !Instance )
    goto LABEL_237;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_237;
  Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_237;
  Instance = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_237;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_237;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mBoardMessage;
  if ( !Instance )
    goto LABEL_237;
  v162 = HasFlag;
  v164 = dispType;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_237;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  mCostObj = this->fields.mCostObj;
  v54 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v54 = QuestBoardListViewItemDraw_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition(mCostObj, v54->static_fields->COST_OBJ_POS_WAR_BOARD, 0LL);
  Instance = (int64_t)this->fields.mCostApSp;
  if ( !Instance )
    goto LABEL_237;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPosition(
    gameObject,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_1_ICON_AP_POS_WAR_BOARD,
    0LL);
  Instance = (int64_t)this->fields.mCostLb1;
  if ( !Instance )
    goto LABEL_237;
  v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPosition(
    v56,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_1_LABEL_AP_POS_WAR_BOARD,
    0LL);
  Instance = (int64_t)this->fields.mShohiSp;
  if ( !Instance )
    goto LABEL_237;
  v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPosition(
    v57,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->SHOHI_SP_POS_WAR_BOARD,
    0LL);
  if ( PhaseDetailedEntity->fields.bannerId < 1 )
  {
    Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
    mShohiSp = this->fields.mShohiSp;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    }
    if ( !mShohiSp )
      goto LABEL_237;
    UISprite__set_spriteName(mShohiSp, QuestBoardListViewItemDraw_TypeInfo->static_fields->SHOHI_SP_NAME_WAR_BOARD, 0LL);
    if ( v40 <= 7 && ((1 << v40) & 0xA6) != 0 )
    {
      p_mcBaseP = &this->fields.mcBaseP;
      mcBaseP = this->fields.mcBaseP;
      Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
      if ( v40 == 7 )
      {
        if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
        }
        v73 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 1016LL);
        if ( !v73 )
          goto LABEL_237;
        if ( *(_DWORD *)(v73 + 24) > 1u )
        {
          v74 = *(System_String_o **)(v73 + 40);
          goto LABEL_84;
        }
      }
      else
      {
        if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
        }
        v75 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 1016LL);
        if ( !v75 )
          goto LABEL_237;
        if ( v40 < *(_DWORD *)(v75 + 24) )
        {
          v74 = *(System_String_o **)(v75 + 8LL * (int)v40 + 32);
LABEL_84:
          v76 = System_Int32__ToString((int)PhaseDetailedEntity + 60, 0LL);
          v77 = System_String__Concat_44305532(v74, v76, 0LL);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetBanner(mcBaseP, v77, 0LL);
          goto LABEL_88;
        }
      }
    }
    else
    {
      p_mcBaseP = &this->fields.mcBaseP;
      Instance = (int64_t)this->fields.mcBaseP;
      if ( !Instance )
        goto LABEL_237;
      UISprite__set_atlas((UISprite_o *)Instance, this->fields.mTerminalAtlas, 0LL);
      Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
      v69 = this->fields.mcBaseP;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
      }
      v154 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 1016LL);
      if ( !v154 )
        goto LABEL_237;
      if ( v40 < *(_DWORD *)(v154 + 24) )
      {
        if ( !v69 )
          goto LABEL_237;
        SHOHI_SP_NAME_WAR_BOARD = *(System_String_o **)(v154 + 8LL * (int)v40 + 32);
LABEL_64:
        UISprite__set_spriteName(v69, SHOHI_SP_NAME_WAR_BOARD, 0LL);
        goto LABEL_88;
      }
    }
LABEL_239:
    v159 = sub_B2C460(Instance);
    sub_B2C400(v159, 0LL);
  }
  v58 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v58 = QuestBoardListViewItemDraw_TypeInfo;
  }
  QUEST_BOARD_SPNAME_PREFIX = v58->static_fields->QUEST_BOARD_SPNAME_PREFIX;
  v60 = System_Int32__ToString((int)PhaseDetailedEntity + 64, 0LL);
  v61 = System_String__Concat_44305532(QUEST_BOARD_SPNAME_PREFIX, v60, 0LL);
  p_mcBaseP = &this->fields.mcBaseP;
  v63 = this->fields.mcBaseP;
  v64 = v61;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = AtlasManager__SetEventUI(v63, v64, 0LL);
  if ( !v63 )
    goto LABEL_237;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v63, Instance & 1, 0LL);
  v65 = this->fields.mShohiSp;
  QUEST_BOARD_SHOHI_SPNAME_PREFIX = QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_SHOHI_SPNAME_PREFIX;
  v67 = System_Int32__ToString((int)PhaseDetailedEntity + 64, 0LL);
  v68 = System_String__Concat_44305532(QUEST_BOARD_SHOHI_SPNAME_PREFIX, v67, 0LL);
  if ( !AtlasManager__SetEventUI(v65, v68, 0LL) )
  {
    Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
    v69 = this->fields.mShohiSp;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    }
    if ( !v69 )
      goto LABEL_237;
    SHOHI_SP_NAME_WAR_BOARD = QuestBoardListViewItemDraw_TypeInfo->static_fields->SHOHI_SP_NAME_WAR_BOARD;
    goto LABEL_64;
  }
LABEL_88:
  Instance = (int64_t)*p_mcBaseP;
  v78 = v164;
  if ( !*p_mcBaseP )
    goto LABEL_237;
  (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 840LL))(
    Instance,
    *(_QWORD *)(*(_QWORD *)Instance + 848LL));
  Instance = (int64_t)*p_mcBaseP;
  if ( !*p_mcBaseP )
    goto LABEL_237;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_237;
  Instance = (int64_t)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                        (UnityEngine_GameObject_o *)Instance,
                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Instance )
    goto LABEL_237;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v28 + 24), 0LL);
  if ( MapControl_QuestInfo__GetQuestType(quest_info_k__BackingField, 0LL) == 7
    && MapControl_QuestInfo__IsDisplayWarBoardNextIcon(quest_info_k__BackingField, 0LL) )
  {
    Instance = (int64_t)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_237;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_237;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    Instance = (int64_t)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_237;
    v80 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    v81 = QuestBoardListViewItemDraw_TypeInfo;
    v82 = v80;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v81 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionX(v82, v81->static_fields->NEXT_POS_X_QUEST, 0LL);
    Instance = (int64_t)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_237;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    v78 = v164;
    if ( !Instance )
      goto LABEL_237;
    Instance = (int64_t)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          (UnityEngine_GameObject_o *)Instance,
                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( !Instance )
      goto LABEL_237;
    NEXT_POS_X_QUEST = QuestBoardListViewItemDraw_TypeInfo->static_fields->NEXT_POS_X_QUEST;
    *(float *)(Instance + 120) = NEXT_POS_X_QUEST;
    *(float *)(Instance + 132) = NEXT_POS_X_QUEST;
  }
  if ( v78 != 2 )
  {
    if ( quest_info_k__BackingField->fields.isNew )
    {
      v84 = 1;
    }
    else
    {
      if ( !v163 )
        goto LABEL_110;
      v84 = 2;
    }
    QuestBoardListViewItemDraw__SetStatusActive(this, v84, 1, v79);
  }
LABEL_110:
  Instance = (int64_t)this->fields.mNextSp;
  if ( !Instance )
    goto LABEL_237;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_237;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  v87 = QuestBoardListViewItemDraw_TypeInfo;
  if ( activeSelf )
  {
    if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v87 = QuestBoardListViewItemDraw_TypeInfo;
    }
    static_fields = v87->static_fields;
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
      v87 = QuestBoardListViewItemDraw_TypeInfo;
    }
    static_fields = v87->static_fields;
    x = static_fields->NEW_POS_QUEST.fields.x;
    y = static_fields->NEW_POS_QUEST.fields.y;
    z = static_fields->NEW_POS_QUEST.fields.z;
  }
  QuestBoardListViewItemDraw__SetNewIcon(
    this,
    *(UnityEngine_Vector3_o *)&x,
    static_fields->NEW_W_DEFAULT,
    static_fields->NEW_H_DEFAULT,
    v86);
  Instance = (int64_t)QuestBoardListViewItemDraw__GetStatusSp(this, 2, v92);
  if ( !Instance )
    goto LABEL_237;
  v93 = (UnityEngine_GameObject_o *)Instance;
  v94 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( v94 )
  {
    v96 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v96 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v93, v96->static_fields->CLEAR_POS_QUEST, 0LL);
  }
  v97 = v164;
  RecommendLv = QuestBoardListViewItemDraw__GetRecommendLv(
                  (QuestBoardListViewItemDraw_o *)v94,
                  PhaseDetailedEntity,
                  phase,
                  !v162,
                  v164 == 2,
                  v95);
  QuestBoardListViewItemDraw__SetRecommendLv(this, RecommendLv, *(UnityEngine_Color_o *)(v28 + 24), v99);
  v101 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  mLabelFaceMaskQuestSp = this->fields.mLabelFaceMaskQuestSp;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v101 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  }
  mCorners_high = HIDWORD(v101->fields.mTitleLevelSp[1].fields.mCorners);
  FaceMaskSpriteName = QuestBoardListViewItemDraw__GetFaceMaskSpriteName(v101, v40, v100);
  v106 = QuestBoardListViewItemDraw__SetFaceImage(
           this,
           PhaseDetailedEntity,
           mLabelFaceMaskQuestSp,
           mCorners_high,
           FaceMaskSpriteName,
           *(UnityEngine_Color_o *)(v28 + 24),
           v105);
  mTitleNameLb = this->fields.mTitleNameLb;
  if ( v106 )
  {
    Instance = (int64_t)QuestBoardListViewItemDraw__GetDispQuestName(this, PhaseDetailedEntity, v40, v107);
    if ( !mTitleNameLb )
      goto LABEL_237;
    UILabel__set_text(mTitleNameLb, (System_String_o *)Instance, 0LL);
    goto LABEL_157;
  }
  Instance = (int64_t)QuestEntity__getQuestName(PhaseDetailedEntity, 0LL);
  if ( !mTitleNameLb )
    goto LABEL_237;
  UILabel__set_text(mTitleNameLb, (System_String_o *)Instance, 0LL);
  if ( v40 != 1
    || !(enabled = QuestBoardListViewItemDraw__IsMainWar(v111, quest_info_k__BackingField->fields.warId, v112)) )
  {
    Instance = (int64_t)this->fields.boardIconTexture;
    if ( !Instance )
      goto LABEL_237;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0LL);
    Instance = (int64_t)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_237;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_237;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    mLabelNameSp = this->fields.mLabelNameSp;
    QuestIconName = QuestBoardListViewItemDraw__GetQuestIconName(v118, PhaseDetailedEntity, v40, v119);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    Instance = AtlasManager__SetEventUI(mLabelNameSp, QuestIconName, 0LL);
    if ( !mLabelNameSp )
      goto LABEL_237;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLabelNameSp, Instance & 1, 0LL);
    Instance = (int64_t)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_237;
    (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 840LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 848LL));
    Instance = (int64_t)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_237;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_237;
    Instance = (int64_t)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          (UnityEngine_GameObject_o *)Instance,
                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !Instance )
      goto LABEL_237;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v28 + 24), 0LL);
    Instance = (int64_t)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_237;
    enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Instance, 0LL);
    if ( !enabled )
    {
      *(_DWORD *)(v28 + 40) = PhaseDetailedEntity->fields.id;
      v121 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v121,
        (Il2CppObject *)v28,
        Method_QuestBoardListViewItemDraw___c__DisplayClass300_0__SetItemOfWarBoard_b__0__,
        0LL);
      QuestBoardListViewItemDraw__LoadBoardIconTexture(this, PhaseDetailedEntity, v121, v122);
    }
LABEL_157:
    if ( v164 != 2 )
      goto LABEL_161;
    goto LABEL_158;
  }
  if ( v164 == 2 )
  {
LABEL_158:
    if ( quest_info_k__BackingField->fields.questReleaseClosedID >= 1 )
    {
      v123 = this->fields.mTitleNameLb;
      Instance = (int64_t)QuestBoardListViewItemDraw__GetAdvanceNoticeText(
                            (QuestBoardListViewItemDraw_o *)enabled,
                            quest_info_k__BackingField,
                            PhaseDetailedEntity,
                            v110);
      if ( !v123 )
        goto LABEL_237;
      UILabel__set_text(v123, (System_String_o *)Instance, 0LL);
    }
    goto LABEL_161;
  }
  Instance = (int64_t)this->fields.mLabelSubSectionNumLb;
  if ( !Instance )
    goto LABEL_237;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_237;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  if ( PhaseDetailedEntity->fields.iconId <= 0
    && System_String__IsNullOrEmpty(PhaseDetailedEntity->fields.chapterSubStr, 0LL) )
  {
    mLabelSubSectionNumLb = this->fields.mLabelSubSectionNumLb;
    v115 = QuestEntity__HasFlag(PhaseDetailedEntity, 0x40000LL, 0LL);
    p_chapterSubId = (QuestBoardListViewItemDraw_o *)&PhaseDetailedEntity->fields.chapterSubId;
    if ( v115 )
      Instance = (int64_t)QuestBoardListViewItemDraw__ConvertToChineseAscii(
                            p_chapterSubId,
                            (int32_t)p_chapterSubId->klass,
                            v114);
    else
      Instance = (int64_t)System_Int32__ToString((int32_t)p_chapterSubId, 0LL);
    size = Instance;
    if ( !mLabelSubSectionNumLb )
      goto LABEL_237;
    UILabel__set_text(mLabelSubSectionNumLb, (System_String_o *)Instance, 0LL);
    Instance = (int64_t)this->fields.mLabelSubSectionNumLb;
    if ( !Instance )
      goto LABEL_237;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_237;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  }
  Instance = (int64_t)this->fields.mLabelChapterSp;
  if ( !Instance )
    goto LABEL_237;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_237;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  mLabelChapterSp = this->fields.mLabelChapterSp;
  QuestIconNameForMainType = QuestBoardListViewItemDraw__GetQuestIconNameForMainType(v156, PhaseDetailedEntity, v157);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = AtlasManager__SetEventUI(mLabelChapterSp, QuestIconNameForMainType, 0LL);
  if ( !mLabelChapterSp
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLabelChapterSp, Instance & 1, 0LL),
        (Instance = (int64_t)this->fields.mLabelChapterSp) == 0) )
  {
LABEL_237:
    sub_B2C434(Instance, size);
  }
  (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 840LL))(
    Instance,
    *(_QWORD *)(*(_QWORD *)Instance + 848LL));
LABEL_161:
  Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
  v124 = this->fields.mTitleNameLb;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  }
  if ( !v124 )
    goto LABEL_237;
  UILabel__SetCondensedScale(v124, QuestBoardListViewItemDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH, 0LL);
  Instance = (int64_t)this->fields.mTitleNameLb;
  if ( !Instance )
    goto LABEL_237;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v28 + 24), 0LL);
  QuestBoardListViewItemDraw__SetupRewardIconDisp(
    this,
    PhaseDetailedEntity,
    v164 == 2,
    *(UnityEngine_Color_o *)(v28 + 24),
    v125);
  v126 = quest_info_k__BackingField->fields.questId;
  afterClear = PhaseDetailedEntity->fields.afterClear;
  v128 = *(float *)(v28 + 24);
  v129 = *(float *)(v28 + 28);
  v130 = *(float *)(v28 + 32);
  v131 = *(float *)(v28 + 36);
  IsRepeatReward = QuestEntity__IsRepeatReward(PhaseDetailedEntity, 0LL);
  v173.fields.r = v128;
  v173.fields.g = v129;
  v173.fields.b = v130;
  v173.fields.a = v131;
  QuestBoardListViewItemDraw__SetupFirstRewardDisp(this, v126, afterClear, v173, IsRepeatReward, v133);
  QuestBoardListViewItemDraw__SetupRewardGotAndNotGiveDisp(
    this,
    quest_info_k__BackingField,
    entity,
    *(UnityEngine_Color_o *)(v28 + 24),
    v134);
  QuestBoardListViewItemDraw__ResetInfoTextList(this, v135);
  fixedVal = -1;
  costCalcVal = 0;
  mInfoTextList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields.mInfoTextList;
  Instance = (int64_t)QuestBoardListViewItemDraw__GetCampaignText(
                        this,
                        PhaseDetailedEntity->fields.id,
                        phase,
                        !v163,
                        &costCalcVal,
                        &fixedVal,
                        v137);
  if ( !mInfoTextList )
    goto LABEL_237;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    mInfoTextList,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
  Instance = (int64_t)this->fields.mRarePrismSp;
  if ( !Instance )
    goto LABEL_237;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_237;
  Instance = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( (Instance & 1) != 0 )
  {
    Instance = (int64_t)entity;
    if ( !entity )
      goto LABEL_237;
    Instance = UserQuestEntity__IsExpireNoLimit(entity, 0LL);
    if ( (Instance & 1) != 0 )
      goto LABEL_182;
    if ( !entity )
      goto LABEL_237;
    p_expireAt = &entity->fields.expireAt;
  }
  else
  {
    p_expireAt = &quest_info_k__BackingField->fields.endTime;
  }
  v139 = *p_expireAt;
  if ( *p_expireAt >= 1 )
  {
    Instance = QuestEntity__HasFlag(PhaseDetailedEntity, 32LL, 0LL);
    if ( (Instance & 1) == 0 )
    {
      v140 = this->fields.mInfoTextList;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v141 = LocalizationManager__Get((System_String_o *)StringLiteral_13408/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0LL);
      v142 = (QuestBoardInformaionText_o *)sub_B2C42C(QuestBoardInformaionText_TypeInfo);
      v174.fields.r = 0.0;
      v174.fields.g = 0.0;
      v174.fields.b = 0.0;
      v174.fields.a = 0.0;
      v172.fields.x = 0.0;
      v172.fields.y = 0.0;
      v172.fields.z = 0.0;
      v143 = (EventMissionProgressRequest_Argument_ProgressData_o *)v142;
      QuestBoardInformaionText___ctor(v142, v141, v139, 0, 0, v174, -1, 0, v172, 1, v160, 0LL, v161);
      if ( !v140 )
        goto LABEL_237;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v140,
        v143,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
      v97 = v164;
    }
  }
LABEL_182:
  v144 = this->fields.mInfoTextList;
  if ( !v144 )
    goto LABEL_237;
  size = (unsigned int)v144->fields._size;
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  if ( (int)size < 1 )
  {
    v150 = 0;
    goto LABEL_194;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_237;
  Instance = (int64_t)mListViewObject->fields.manager;
  if ( !Instance )
    goto LABEL_237;
  v147 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v147
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v147 - 8) != QuestBoardListViewManager_TypeInfo )
  {
    sub_B2C728(Instance);
    goto LABEL_239;
  }
  AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt((QuestBoardListViewManager_o *)Instance, size, 0LL);
  if ( v144->fields._size <= (unsigned int)AlphaAnimCnt )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  Instance = (int64_t)v144->fields._items->m_Items[AlphaAnimCnt];
  if ( !Instance )
    goto LABEL_237;
  QuestBoardInformaionText__SetTime(
    (QuestBoardInformaionText_o *)Instance,
    &this->fields.mOptionInfoLb,
    &this->fields.mOptionInfoFrameSp,
    v148);
  Instance = (int64_t)this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_237;
  BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)Instance, 1.0, 0LL);
  v150 = 1;
  quest_info_k__BackingField->fields.costCalcVal = costCalcVal;
  quest_info_k__BackingField->fields._fixedCostVal_k__BackingField = fixedVal;
LABEL_194:
  Instance = (int64_t)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_237;
  Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_237;
  Instance = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_237;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_237;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v150, 0LL);
  Instance = (int64_t)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_237;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_237;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v150, 0LL);
  QuestBoardListViewItemDraw__SetCostDisp(
    this,
    PhaseDetailedEntity,
    v97 == 2,
    costCalcVal,
    fixedVal,
    *(UnityEngine_Color_o *)(v28 + 24),
    &isDoubleItemConsume,
    &isDoubleItemConsumeQp,
    &isTripleItemConsume,
    (const MethodInfo *)v160);
  Instance = (int64_t)this->fields.mBoardMessage;
  if ( !Instance )
    goto LABEL_237;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_237;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarBoardQuestMaster___);
  if ( !Instance )
    goto LABEL_237;
  v151 = WarBoardQuestMaster__GetEntity(
           (WarBoardQuestMaster_o *)Instance,
           quest_info_k__BackingField->fields.questId,
           phase,
           0LL);
  if ( !v151 )
    return;
  v152 = v151;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_237;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarBoardStageMaster___);
  if ( !Instance )
    goto LABEL_237;
  Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        v152->fields.stageId,
                        (const MethodInfo_24E40D0 *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__);
  if ( Instance )
  {
    if ( !this->fields.mBoardMessage )
      goto LABEL_237;
    UILabel__set_text(this->fields.mBoardMessage, *(System_String_o **)(Instance + 48), 0LL);
  }
  Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
  mBoardMessage = this->fields.mBoardMessage;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  }
  if ( !mBoardMessage )
    goto LABEL_237;
  UILabel__SetCondensedScale(
    mBoardMessage,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->BOARD_MESSAGE_MAX_WITDH,
    0LL);
  Instance = (int64_t)this->fields.mBoardMessage;
  if ( !Instance )
    goto LABEL_237;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v28 + 24), 0LL);
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
  sub_B2C2F8(
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
  __int64 v14; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *v16; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x19
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_418A299 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___, *(_QWORD *)&w);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    byte_418A299 = 1;
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
    v18.fields.x = x;
    v18.fields.y = y;
    v18.fields.z = z;
    GameObjectExtensions__SetLocalPosition(gameObject, v18, 0LL);
    StatusSp = (UnityEngine_GameObject_o *)this->fields.mNewIcon;
    if ( !StatusSp )
      goto LABEL_21;
    StatusSp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)StatusSp, 0LL);
    if ( !StatusSp )
      goto LABEL_21;
    StatusSp = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             StatusSp,
                                             (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !StatusSp )
      goto LABEL_21;
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
    goto LABEL_21;
  StatusSp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)StatusSp, 0LL);
  if ( !StatusSp )
    goto LABEL_21;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      StatusSp,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
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
    sub_B2C434(StatusSp, v14);
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
  System_String_o *FREE_ICON_SPRITE_NAME; // x1
  UnityEngine_Component_o *v11; // x20
  QuestBoardListViewItemDraw_c *v12; // x0
  float NEXT_POS_X_AREA_L; // w8
  QuestBoardListViewItemDraw_c *v14; // x0
  QuestBoardListViewItemDraw_c *v15; // x0

  if ( (byte_418A29C & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, info);
    sub_B2C35C(&QuestBoardListViewItemDraw_TypeInfo, v7);
    byte_418A29C = 1;
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
    v9 = this->fields.mNextSp;
    mNextSp = (UnityEngine_Component_o *)QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    }
    if ( !v9 )
      goto LABEL_41;
    FREE_ICON_SPRITE_NAME = QuestBoardListViewItemDraw_TypeInfo->static_fields->FREE_ICON_SPRITE_NAME;
  }
  else
  {
    v9 = this->fields.mNextSp;
    mNextSp = (UnityEngine_Component_o *)QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    }
    if ( !v9 )
      goto LABEL_41;
    FREE_ICON_SPRITE_NAME = QuestBoardListViewItemDraw_TypeInfo->static_fields->NEXT_ICON_SPRITE_NAME;
  }
  UISprite__set_spriteName(v9, FREE_ICON_SPRITE_NAME, 0LL);
  mNextSp = (UnityEngine_Component_o *)this->fields.mNextSp;
  if ( !mNextSp )
    goto LABEL_41;
  mNextSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNextSp, 0LL);
  if ( !mNextSp )
    goto LABEL_41;
  mNextSp = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                         (UnityEngine_GameObject_o *)mNextSp,
                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  v11 = mNextSp;
  if ( !warEnt )
    goto LABEL_34;
  mNextSp = (UnityEngine_Component_o *)WarEntity__HasFlag(warEnt, 0x400000, 0LL);
  if ( ((unsigned __int8)mNextSp & 1) == 0 )
  {
    mNextSp = (UnityEngine_Component_o *)WarEntity__HasFlag(warEnt, 256, 0LL);
    if ( ((unsigned __int8)mNextSp & 1) != 0 )
    {
      if ( v11 )
      {
        v14 = QuestBoardListViewItemDraw_TypeInfo;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v14 = QuestBoardListViewItemDraw_TypeInfo;
        }
        NEXT_POS_X_AREA_L = v14->static_fields->NEXT_POS_X_AREA_L;
        goto LABEL_39;
      }
LABEL_41:
      sub_B2C434(mNextSp, info);
    }
LABEL_34:
    if ( v11 )
    {
      v15 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v15 = QuestBoardListViewItemDraw_TypeInfo;
      }
      NEXT_POS_X_AREA_L = v15->static_fields->NEXT_POS_X_AREA_R;
      goto LABEL_39;
    }
    goto LABEL_41;
  }
  if ( !v11 )
    goto LABEL_41;
  v12 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v12 = QuestBoardListViewItemDraw_TypeInfo;
  }
  NEXT_POS_X_AREA_L = v12->static_fields->NEXT_POS_X_AREA_CENTER;
LABEL_39:
  *(float *)&v11[5].klass = NEXT_POS_X_AREA_L;
  *((float *)&v11[5].monitor + 1) = NEXT_POS_X_AREA_L;
}


void __fastcall QuestBoardListViewItemDraw__SetPickupIcon(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  UnityEngine_Object_o *StatusSp; // x19
  _BOOL8 v6; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x19

  if ( (byte_418A29A & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_418A29A = 1;
  }
  StatusSp = (UnityEngine_Object_o *)QuestBoardListViewItemDraw__GetStatusSp(this, 4, v2);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality(StatusSp, 0LL, 0LL);
  if ( !v6 )
  {
    if ( StatusSp )
    {
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)StatusSp,
                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v6 = UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
      if ( v6 )
        return;
      if ( Component_srcLineSprite )
      {
        TimeSyncAlphaSwitcher__Clear((TimeSyncAlphaSwitcher_o *)Component_srcLineSprite, 0LL);
        return;
      }
    }
    sub_B2C434(v6, v7);
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
  System_Collections_Generic_List_int__o *v19; // x21
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  QuestGroupMaster_o *v22; // x22
  TerminalPramsManager_c *v23; // x0
  const MethodInfo *v24; // x2
  UISprite_o *mPrevSp; // x20
  QuestBoardListViewItemDraw_c *v26; // x0
  System_String_o *QUEST_BOARD_PREV_ICON_NAME; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_418A29D & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, questEnt);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestGroupMaster___, v9);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_int___, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v14);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v15);
    sub_B2C35C(&QuestBoardListViewItemDraw_TypeInfo, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v18);
    byte_418A29D = 1;
  }
  v19 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !questEnt )
    goto LABEL_38;
  v22 = (QuestGroupMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_38;
  Instance = (DataManager_o *)QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)Instance, questEnt->fields.id, 16, 0LL);
  if ( (_DWORD)Instance )
  {
    Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByGroupId(v22, (int32_t)Instance, 16, 0LL);
    if ( !Instance )
      goto LABEL_38;
    if ( Instance->fields.datalist )
    {
      Instance = (DataManager_o *)System_Linq_Enumerable__ToList_int_(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                    (const MethodInfo_1A9DCD4 *)Method_System_Linq_Enumerable_ToList_int___);
      v19 = (System_Collections_Generic_List_int__o *)Instance;
    }
  }
  if ( !v19 )
LABEL_38:
    sub_B2C434(Instance, v21);
  if ( v19->fields._size <= 0 )
    System_Collections_Generic_List_int___Add(
      v19,
      questEnt->fields.id,
      (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_418472D )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v21);
    byte_418472D = 1;
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v23 = TerminalPramsManager_TypeInfo;
  }
  if ( !System_Collections_Generic_List_int___Contains(
          v19,
          v23->static_fields->_LastPlayedQuestId_k__BackingField,
          (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__) )
    goto LABEL_24;
  Instance = (DataManager_o *)QuestBoardListViewItemDraw__GetStatusSp(this, 1, v24);
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
  v26 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v26 = QuestBoardListViewItemDraw_TypeInfo;
  }
  QUEST_BOARD_PREV_ICON_NAME = v26->static_fields->QUEST_BOARD_PREV_ICON_NAME;
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
  v29.fields.x = x;
  v29.fields.y = y;
  v29.fields.z = z;
  GameObjectExtensions__SetLocalPosition(gameObject, v29, 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_GameObject_o *mTitleLevelRoot; // x20
  UnityEngine_Component_o *IsNullOrEmpty; // x0
  __int64 v14; // x1
  UnityEngine_Object_o *Component_WebViewObject; // x20
  UnityEngine_GameObject_o *v16; // x21
  float v17; // s0
  float v18; // s0
  float v19; // s8
  struct UILabel_o *mTitleLevelLb; // x8
  UnityEngine_Object_o *v21; // x20
  int mWidth; // s8
  float m_CachedPtr; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = baseColor.fields.a;
  b = baseColor.fields.b;
  g = baseColor.fields.g;
  r = baseColor.fields.r;
  if ( (byte_418A2BE & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___, recommendLv);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_CondensedScaleSprite___, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    byte_418A2BE = 1;
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
                                                        (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_CondensedScaleSprite___);
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
                      v18 = CondensedScaleSprite__GetAfterAdjustWidth(
                              (CondensedScaleSprite_o *)Component_WebViewObject,
                              0LL);
                      IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.mTitleLevelSp;
                      if ( IsNullOrEmpty )
                      {
                        v19 = (float)(IsNullOrEmpty[6].fields.m_CachedPtr / 2) + (float)(v18 * -0.5);
LABEL_39:
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
                      IsNullOrEmpty = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                   IsNullOrEmpty,
                                                                   (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
                      mTitleLevelLb = this->fields.mTitleLevelLb;
                      if ( mTitleLevelLb )
                      {
                        v21 = (UnityEngine_Object_o *)IsNullOrEmpty;
                        mWidth = mTitleLevelLb->fields.mWidth;
                        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        }
                        m_CachedPtr = (float)mWidth;
                        IsNullOrEmpty = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v21, 0LL, 0LL);
                        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
                        {
                          if ( !v21 )
                            goto LABEL_40;
                          if ( m_CachedPtr > (float)v21[1].fields.m_CachedPtr )
                            m_CachedPtr = (float)v21[1].fields.m_CachedPtr;
                        }
                        IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.mTitleLevelSp;
                        if ( IsNullOrEmpty )
                        {
                          v19 = m_CachedPtr * -0.5;
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
    sub_B2C434(IsNullOrEmpty, v14);
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
  RestrictionBaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418A28C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestRestrictionMaster___, *(_QWORD *)&questId);
    sub_B2C35C(&Method_DataManager_GetMaster_RestrictionBaseMaster___, v7);
    sub_B2C35C(&DataManager_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B2C35C(&StringLiteral_1/*""*/, v10);
    byte_418A28C = 1;
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
  mOptionRestrinctionSp = (UnityEngine_Component_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_RestrictionBaseMaster___);
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
  mOptionRestrinctionSp = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mOptionRestrinctionSp
    || (mOptionRestrinctionSp = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)mOptionRestrinctionSp,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestRestrictionMaster___)) == 0LL
    || (mOptionRestrinctionSp = (UnityEngine_Component_o *)QuestRestrictionMaster__GetRestrictionName(
                                                             (QuestRestrictionMaster_o *)mOptionRestrinctionSp,
                                                             questId,
                                                             phase,
                                                             0LL),
        !mOptionRestrinctionLb) )
  {
LABEL_18:
    sub_B2C434(mOptionRestrinctionSp, *(_QWORD *)&questId);
  }
  UILabel__set_text(mOptionRestrinctionLb, (System_String_o *)mOptionRestrinctionSp, 0LL);
LABEL_16:
  v13 = this->fields.mOptionRestrinctionLb;
  if ( !v13 )
    goto LABEL_18;
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
    sub_B2C434(mOptionRestrinctionLb, *(_QWORD *)&spacingX);
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
      sub_B2C434(0LL, method);
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
    sub_B2C434(StatusSp, v6);
  UnityEngine_GameObject__SetActive(StatusSp, isActive, 0LL);
}


void __fastcall QuestBoardListViewItemDraw__SetStatusToggle(
        QuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  void *StatusSp; // x0
  QuestBoardListViewManager_c *v6; // x1
  TimeSyncAlphaSwitcher_o *Component_srcLineSprite; // x19
  const MethodInfo *v8; // x2
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  TimeSyncAlphaSwitcher_o *v10; // x20
  __int64 v11; // x9
  float v12; // s8
  QuestBoardListViewItemDraw_o *v13; // x0
  MapControl_QuestInfo_o *v14; // x1
  QuestEntity_o *v15; // x2
  const MethodInfo *v16; // x3

  if ( (byte_418A29E & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___, method);
    sub_B2C35C(&QuestBoardListViewManager_TypeInfo, v4);
    byte_418A29E = 1;
  }
  StatusSp = QuestBoardListViewItemDraw__GetStatusSp(this, 4, v2);
  if ( !StatusSp )
    goto LABEL_12;
  Component_srcLineSprite = (TimeSyncAlphaSwitcher_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         (UnityEngine_GameObject_o *)StatusSp,
                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
  StatusSp = QuestBoardListViewItemDraw__GetStatusSp(this, 1, v8);
  if ( !StatusSp )
    goto LABEL_12;
  StatusSp = UnityEngine_GameObject__GetComponent_srcLineSprite_(
               (UnityEngine_GameObject_o *)StatusSp,
               (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_12;
  v10 = (TimeSyncAlphaSwitcher_o *)StatusSp;
  StatusSp = mListViewObject->fields.manager;
  if ( !StatusSp )
    goto LABEL_12;
  v6 = QuestBoardListViewManager_TypeInfo;
  v11 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)StatusSp + 300LL) >= (unsigned int)v11
    && *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)StatusSp + 200LL) + 8 * v11 - 8) == QuestBoardListViewManager_TypeInfo )
  {
    if ( Component_srcLineSprite )
    {
      v12 = *((float *)StatusSp + 144);
      TimeSyncAlphaSwitcher__SetAlphaBlink(Component_srcLineSprite, 2, 0, v12, 0LL);
      if ( v10 )
      {
        TimeSyncAlphaSwitcher__SetAlphaBlink(v10, 2, 1, v12, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B2C434(StatusSp, v6);
  }
  sub_B2C728(StatusSp);
  QuestBoardListViewItemDraw__GetAdvanceNoticeText(v13, v14, v15, v16);
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
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Mathf__Min_40694704(
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
    v26 = sub_B2C460(this);
    sub_B2C400(v26, 0LL);
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
    sub_B2C434(this, questBoardItem);
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


void __fastcall QuestBoardListViewItemDraw__SetupCondtionChangeMessage(
        QuestBoardListViewItemDraw_o *this,
        QuestReleaseOverwriteEntity_o *questReleaseOverwriteEnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *mCondObject; // x0
  UILabel_o *mCondChangeMessage; // x19

  if ( (byte_418A289 & 1) == 0 )
  {
    sub_B2C35C(&QuestBoardListViewItemDraw_TypeInfo, questReleaseOverwriteEnt);
    byte_418A289 = 1;
  }
  if ( questReleaseOverwriteEnt
    && !System_String__IsNullOrEmpty(questReleaseOverwriteEnt->fields.overlayClosedMessage, 0LL) )
  {
    mCondObject = this->fields.mCondObject;
    if ( !mCondObject )
      goto LABEL_13;
    UnityEngine_GameObject__SetActive(mCondObject, 1, 0LL);
    mCondObject = (UnityEngine_GameObject_o *)this->fields.mCondChangeMessage;
    if ( !mCondObject )
      goto LABEL_13;
    UILabel__set_text((UILabel_o *)mCondObject, questReleaseOverwriteEnt->fields.overlayClosedMessage, 0LL);
    mCondChangeMessage = this->fields.mCondChangeMessage;
    mCondObject = (UnityEngine_GameObject_o *)QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    }
    if ( !mCondChangeMessage )
LABEL_13:
      sub_B2C434(mCondObject, v5);
    UILabel__SetCondensedScale(
      mCondChangeMessage,
      QuestBoardListViewItemDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH,
      0LL);
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
  UnityEngine_GameObject_o *v10; // x20
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_Object_o *v12; // x21
  __int64 v13; // x1
  TerminalPramsManager_c *v14; // x0
  QuestBoardListViewItemDraw_c *v15; // x0
  __int64 v16; // x0

  v2 = this;
  if ( (byte_418A2B4 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v3);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&QuestBoardListViewItemDraw_TypeInfo, v6);
    this = (QuestBoardListViewItemDraw_o *)sub_B2C35C(&TerminalPramsManager_TypeInfo, v7);
    byte_418A2B4 = 1;
  }
  mTerminalBanners = v2->fields.mTerminalBanners;
  if ( !mTerminalBanners )
    goto LABEL_43;
  if ( !mTerminalBanners->max_length )
  {
    v16 = sub_B2C460(this);
    sub_B2C400(v16, 0LL);
  }
  v9 = (UnityEngine_Object_o *)mTerminalBanners->m_Items[0];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Object__op_Equality(v9, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v9 )
    {
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0LL);
      if ( this )
      {
        v10 = (UnityEngine_GameObject_o *)this;
        Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
          UnityEngine_Object__Destroy_35314896(Component_srcLineSprite, 0LL);
        }
        v12 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        v10,
                                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v12, 0LL, 0LL) )
        {
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__Destroy_35314896(v12, 0LL);
        }
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_418A2C1 )
        {
          sub_B2C35C(&TerminalPramsManager_TypeInfo, v13);
          byte_418A2C1 = 1;
        }
        v14 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v15 = QuestBoardListViewItemDraw_TypeInfo;
        }
        GameObjectExtensions__SetLocalPositionX(v10, v15->static_fields->BANNER_ENTORY_START_POS_X, 0LL);
        this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 v10,
                                                 (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
    sub_B2C434(this, method);
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
  clsQuestCheck_o *mRewardFirstSP; // x0
  bool v16; // w21
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_418A294 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, *(_QWORD *)&questId);
    sub_B2C35C(&SingletonTemplate_clsQuestCheck__TypeInfo, v14);
    byte_418A294 = 1;
  }
  if ( afterClearType == 3 )
  {
    if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
    }
    mRewardFirstSP = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !mRewardFirstSP )
LABEL_14:
      sub_B2C434(mRewardFirstSP, *(_QWORD *)&questId);
    v16 = !clsQuestCheck__IsQuestClear(mRewardFirstSP, questId, 0, 0LL);
  }
  else
  {
    v16 = 0;
  }
  mRewardFirstSP = (clsQuestCheck_o *)this->fields.mRewardFirstSP;
  if ( !mRewardFirstSP )
    goto LABEL_14;
  mRewardFirstSP = (clsQuestCheck_o *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)mRewardFirstSP,
                                        0LL);
  if ( !mRewardFirstSP )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mRewardFirstSP, v16 && !isRepeatReward, 0LL);
  mRewardFirstSP = (clsQuestCheck_o *)this->fields.mRewardFirstSP;
  if ( !mRewardFirstSP )
    goto LABEL_14;
  v17.fields.b = b;
  v17.fields.a = a;
  v17.fields.r = r;
  v17.fields.g = g;
  UIWidget__set_color((UIWidget_o *)mRewardFirstSP, v17, 0LL);
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
  if ( (byte_418A295 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_B2C35C(&CondType_TypeInfo, questInfo);
    byte_418A295 = 1;
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
  this = (QuestBoardListViewItemDraw_o *)CondType__IsQuestClear_25746984(questId, -1, 0, 0LL);
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
    sub_B2C434(this, questInfo);
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  unsigned __int64 giftIconId; // x1
  UnityEngine_Component_o *mRewardIcon; // x0
  bool v27; // w1
  System_Collections_Generic_IEnumerable_TSource__o *GiftListById; // x21
  QuestBoardListViewItemDraw___c_c *v29; // x8
  struct QuestBoardListViewItemDraw___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__310_0; // x22
  Il2CppObject *v32; // x23
  struct QuestBoardListViewItemDraw___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct GiftEntity_array *v47; // x21
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  __int64 v49; // x10
  GiftEntity_o *v50; // x9
  int num; // w8
  int32_t v52; // w2
  int32_t v53; // w3
  __int64 v54; // x0
  UnityEngine_Color_o v55; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v56; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_418A292 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_GiftMaster___, questEnt);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_GiftEntity___, v16);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_GiftEntity___, v17);
    sub_B2C35C(&Method_System_Func_GiftEntity__bool___ctor__, v18);
    sub_B2C35C(&System_Func_GiftEntity__bool__TypeInfo, v19);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v20);
    sub_B2C35C(&QuestBoardListViewManager_TypeInfo, v21);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B2C35C(&Method_QuestBoardListViewItemDraw___c__SetupRewardIconDisp_b__310_0__, v23);
    sub_B2C35C(&QuestBoardListViewItemDraw___c_TypeInfo, v24);
    byte_418A292 = 1;
  }
  this->fields.mRewardIconInfs = 0LL;
  sub_B2C2F8(
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
      v27 = 0;
      goto LABEL_16;
    }
    mRewardIcon = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( mRewardIcon )
    {
      mRewardIcon = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)mRewardIcon,
                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_GiftMaster___);
      if ( mRewardIcon )
      {
        GiftListById = (System_Collections_Generic_IEnumerable_TSource__o *)GiftMaster__GetGiftListById(
                                                                              (GiftMaster_o *)mRewardIcon,
                                                                              questEnt->fields.giftId,
                                                                              0LL);
        v29 = QuestBoardListViewItemDraw___c_TypeInfo;
        if ( (BYTE3(QuestBoardListViewItemDraw___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw___c_TypeInfo);
          v29 = QuestBoardListViewItemDraw___c_TypeInfo;
        }
        static_fields = v29->static_fields;
        _9__310_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__310_0;
        if ( !_9__310_0 )
        {
          if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v29);
            static_fields = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
          }
          v32 = (Il2CppObject *)static_fields->__9;
          _9__310_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_GiftEntity__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            _9__310_0,
            v32,
            Method_QuestBoardListViewItemDraw___c__SetupRewardIconDisp_b__310_0__,
            (const MethodInfo_2711C04 *)Method_System_Func_GiftEntity__bool___ctor__);
          v33 = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
          v33->__9__310_0 = (struct System_Func_GiftEntity__bool__o *)_9__310_0;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&v33->__9__310_0,
            (System_Int32_array **)_9__310_0,
            v34,
            v35,
            v36,
            v37,
            v38,
            v39);
        }
        v40 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                GiftListById,
                (System_Func_TSource__bool__o *)_9__310_0,
                (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
        mRewardIcon = (UnityEngine_Component_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                   v40,
                                                   (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
        if ( mRewardIcon )
        {
          giftIconId = (unsigned __int64)mRewardIcon[1].klass;
          v47 = (struct GiftEntity_array *)mRewardIcon;
          if ( !giftIconId )
          {
LABEL_56:
            this->fields.mRewardIconInfs = v47;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&this->fields.mRewardIconInfs,
              (System_Int32_array **)v47,
              v41,
              v42,
              v43,
              v44,
              v45,
              v46);
            goto LABEL_17;
          }
          mListViewObject = this->fields.mListViewObject;
          if ( mListViewObject )
          {
            mRewardIcon = (UnityEngine_Component_o *)mListViewObject->fields.manager;
            if ( mRewardIcon )
            {
              v49 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
              if ( *(&mRewardIcon->klass->_2.bitflags2 + 1) >= (unsigned int)v49
                && (QuestBoardListViewManager_c *)mRewardIcon->klass->_2.typeHierarchy[v49 - 1] == QuestBoardListViewManager_TypeInfo )
              {
                mRewardIcon = (UnityEngine_Component_o *)QuestBoardListViewManager__GetAlphaAnimCnt(
                                                           (QuestBoardListViewManager_o *)mRewardIcon,
                                                           giftIconId,
                                                           0LL);
                if ( (unsigned int)mRewardIcon < v47->max_length )
                {
                  v50 = v47->m_Items[(int)mRewardIcon];
                  if ( !v50 )
                    goto LABEL_57;
                  giftIconId = (unsigned int)v50->fields.prioredIconId;
                  mRewardIcon = (UnityEngine_Component_o *)this->fields.mRewardIcon;
                  num = v50->fields.num;
                  if ( (int)giftIconId < 1 )
                  {
                    if ( !mRewardIcon )
                      goto LABEL_57;
                    if ( num <= 1 )
                      v53 = -1;
                    else
                      v53 = v50->fields.num;
                    ItemIconComponent__SetGift(
                      (ItemIconComponent_o *)mRewardIcon,
                      v50->fields.type,
                      v50->fields.objectId,
                      v53,
                      1,
                      0LL);
                  }
                  else
                  {
                    if ( !mRewardIcon )
                      goto LABEL_57;
                    if ( num <= 1 )
                      v52 = -1;
                    else
                      v52 = v50->fields.num;
                    ItemIconComponent__SetItemImage_27396332((ItemIconComponent_o *)mRewardIcon, giftIconId, v52, 0LL);
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
                sub_B2C728(mRewardIcon);
              }
              v54 = sub_B2C460(mRewardIcon);
              sub_B2C400(v54, 0LL);
            }
          }
        }
      }
    }
LABEL_57:
    sub_B2C434(mRewardIcon, giftIconId);
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
  v27 = 1;
LABEL_16:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mRewardIcon, v27, 0LL);
LABEL_17:
  mRewardIcon = (UnityEngine_Component_o *)this->fields.mRewardObj;
  if ( !mRewardIcon )
    goto LABEL_57;
  mRewardIcon = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             (UnityEngine_GameObject_o *)mRewardIcon,
                                             (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !mRewardIcon )
    goto LABEL_57;
  v55.fields.r = r;
  v55.fields.g = g;
  v55.fields.b = b;
  v55.fields.a = a;
  UIWidget__set_color((UIWidget_o *)mRewardIcon, v55, 0LL);
  mRewardIcon = (UnityEngine_Component_o *)this->fields.mRewardIcon;
  if ( !mRewardIcon )
    goto LABEL_57;
  v56.fields.b = b;
  v56.fields.a = a;
  v56.fields.r = r;
  v56.fields.g = g;
  ItemIconComponent__SetColor((ItemIconComponent_o *)mRewardIcon, v56, 0LL);
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
  struct TerminalBannerComponent_array *mTerminalBanners; // x8
  UnityEngine_Object_o *v28; // x20
  UnityEngine_GameObject_o *v29; // x20
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v30; // x21
  int v31; // s0
  int v32; // s1
  int v33; // s2
  QuestBoardListViewItemDraw_c *v34; // x0
  float BANNER_ENTORY_EFFECT_DURATION; // w8
  EventDelegate_Callback_o *v36; // x22
  float v37; // w8
  __int64 v38; // x0

  if ( (byte_418A2B5 & 1) == 0 )
  {
    sub_B2C35C(&EventDelegate_Callback_TypeInfo, endCallback);
    sub_B2C35C(&Method_UnityEngine_GameObject_AddComponent_TweenAlpha___, v5);
    sub_B2C35C(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&QuestBoardListViewItemDraw_TypeInfo, v8);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v9);
    sub_B2C35C(&Method_QuestBoardListViewItemDraw___c__DisplayClass360_0__StartEntryBanner_b__0__, v10);
    sub_B2C35C(&QuestBoardListViewItemDraw___c__DisplayClass360_0_TypeInfo, v11);
    byte_418A2B5 = 1;
  }
  v12 = sub_B2C42C(QuestBoardListViewItemDraw___c__DisplayClass360_0_TypeInfo);
  QuestBoardListViewItemDraw___c__DisplayClass360_0___ctor(
    (QuestBoardListViewItemDraw___c__DisplayClass360_0_o *)v12,
    0LL);
  if ( !v12 )
    goto LABEL_28;
  *(_QWORD *)(v12 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 24) = endCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v12 + 24),
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
  if ( !byte_418A2C1 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v14);
    byte_418A2C1 = 1;
  }
  gameObject = (UnityEngine_GameObject_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)TerminalPramsManager_TypeInfo;
  }
  if ( *(_BYTE *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 153LL) )
    goto LABEL_19;
  mTerminalBanners = this->fields.mTerminalBanners;
  if ( !mTerminalBanners )
    goto LABEL_28;
  if ( !mTerminalBanners->max_length )
  {
    v38 = sub_B2C460(gameObject);
    sub_B2C400(v38, 0LL);
  }
  v28 = (UnityEngine_Object_o *)mTerminalBanners->m_Items[0];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v28, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
LABEL_19:
    ActionExtensions__Call(*(System_Action_o **)(v12 + 24), 0LL);
    return;
  }
  if ( !v28 )
    goto LABEL_28;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v28, 0LL);
  if ( !gameObject )
    goto LABEL_28;
  v29 = gameObject;
  v30 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
          gameObject,
          (const MethodInfo_1AA77E0 *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
  *(UnityEngine_Vector3_o *)&v31 = GameObjectExtensions__GetLocalPosition(v29, 0LL);
  if ( !v30 )
    goto LABEL_28;
  LODWORD(v30[3].fields.callbackQueue) = v31;
  HIDWORD(v30[3].fields.callbackQueue) = v32;
  LODWORD(v30[4].klass) = v33;
  *(UnityEngine_Vector3_o *)((char *)&v30[4].klass + 4) = UnityEngine_Vector3__get_zero(0LL);
  v34 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v34 = QuestBoardListViewItemDraw_TypeInfo;
  }
  BANNER_ENTORY_EFFECT_DURATION = v34->static_fields->BANNER_ENTORY_EFFECT_DURATION;
  LODWORD(v30->fields.callbackQueue) = 2;
  *(float *)&v30[1].fields.m_CachedPtr = BANNER_ENTORY_EFFECT_DURATION;
  v36 = (EventDelegate_Callback_o *)sub_B2C42C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v36,
    (Il2CppObject *)v12,
    Method_QuestBoardListViewItemDraw___c__DisplayClass360_0__StartEntryBanner_b__0__,
    0LL);
  UITweener__SetOnFinished((UITweener_o *)v30, v36, 0LL);
  UITweener__PlayForward((UITweener_o *)v30, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                             v29,
                                             (const MethodInfo_1AA77E0 *)Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
  if ( !gameObject )
LABEL_28:
    sub_B2C434(gameObject, v14);
  gameObject[5].klass = (UnityEngine_GameObject_c *)0x3F80000000000000LL;
  v37 = QuestBoardListViewItemDraw_TypeInfo->static_fields->BANNER_ENTORY_EFFECT_DURATION;
  LODWORD(gameObject[1].klass) = 3;
  *(float *)&gameObject[2].klass = v37;
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
  System_String_o **p_mLastAlpha; // x8
  __int64 v10; // x0

  v4 = this;
  if ( (byte_418A2B7 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_B2C35C(&QuestBoardListViewItemDraw_TypeInfo, *(_QWORD *)&index);
    byte_418A2B7 = 1;
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
        v10 = sub_B2C460(this);
        sub_B2C400(v10, 0LL);
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
        p_mLastAlpha = (System_String_o **)&this->fields.mTitleLevelSp[1].fields.mLastAlpha;
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
        p_mLastAlpha = (System_String_o **)&this->fields.mTitleLevelSp[1].fields.drawCall;
        if ( !v8 )
          break;
      }
      UISprite__set_spriteName(v8, *p_mLastAlpha, 0LL);
      if ( (int)++v5 >= v4->fields.mBannerCount )
        return;
    }
    sub_B2C434(this, *(_QWORD *)&index);
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
  if ( (byte_418A282 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_B2C35C(
                                             &Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__,
                                             questBoardItem);
    byte_418A282 = 1;
  }
  mInfoTextList = v7->fields.mInfoTextList;
  if ( !mInfoTextList )
    goto LABEL_8;
  if ( mInfoTextList->fields._size <= (unsigned int)strIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  this = (QuestBoardListViewItemDraw_o *)mInfoTextList->fields._items->m_Items[strIndex];
  if ( !this )
LABEL_8:
    sub_B2C434(this, questBoardItem);
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
      sub_B2C434(this, questBoardItem);
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
  UnityEngine_Vector2_o ScreenPosition_28395408; // kr00_8
  _BOOL4 mIsEnableDragX; // w8

  v4 = this;
  if ( (byte_418A2BA & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_B2C35C(&CTouch_TypeInfo, questBoardManager);
    byte_418A2BA = 1;
  }
  if ( v4->fields.mIsPressedForDragX )
  {
    v4->fields.mTouchPosOld = v4->fields.mTouchPosNow;
    if ( !questBoardManager )
      sub_B2C434(this, questBoardManager);
    mUICamera = questBoardManager->fields.mUICamera;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    ScreenPosition_28395408 = CTouch__getScreenPosition_28395408(mUICamera, 0LL);
    mIsEnableDragX = v4->fields.mIsEnableDragX;
    v4->fields.mTouchPosNow = ScreenPosition_28395408;
    if ( mIsEnableDragX )
      v4->fields.mTouchPosDif = ScreenPosition_28395408.fields.x - v4->fields.mTouchPosOld.fields.x;
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
    sub_B2C434(0LL, onOff);
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
  Il2CppObject *v2; // x19
  struct QuestBoardListViewItemDraw___c_StaticFields *static_fields; // x0

  if ( (byte_41852E6 & 1) == 0 )
  {
    sub_B2C35C(&QuestBoardListViewItemDraw___c_TypeInfo, v1);
    byte_41852E6 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(QuestBoardListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
  static_fields->__9 = (struct QuestBoardListViewItemDraw___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall QuestBoardListViewItemDraw___c___ctor(QuestBoardListViewItemDraw___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw___c___IsValidSupportSelection_b__338_0(
        QuestBoardListViewItemDraw___c_o *this,
        RestrictionEntity_o *rest,
        const MethodInfo *method)
{
  if ( !rest )
    sub_B2C434(this, 0LL);
  return rest->fields.type == 9;
}


int32_t __fastcall QuestBoardListViewItemDraw___c___SetItemOfQuest_b__298_1(
        QuestBoardListViewItemDraw___c_o *this,
        ViewEnemyEntity_o *value,
        const MethodInfo *method)
{
  if ( !value )
    sub_B2C434(this, 0LL);
  return value->fields.enemyId;
}


bool __fastcall QuestBoardListViewItemDraw___c___SetupRewardIconDisp_b__310_0(
        QuestBoardListViewItemDraw___c_o *this,
        GiftEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_B2C434(this, 0LL);
  return ent->fields.type != 15;
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass296_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass296_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw___c__DisplayClass296_0___IsPurchasedByRarePrism_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass296_0_o *this,
        MapControl_QuestInfo_o *quest,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw___c__DisplayClass296_0_o *v4; // x20
  struct MapControl_WarInfo_o *WarInfo_k__BackingField; // x8
  struct WarEntity_o *warEnt; // x9
  UserQuestMaster_o *userQuestMst; // x20
  UserQuestEntity_o *EntityFromId; // x0

  v4 = this;
  if ( (byte_41852E7 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw___c__DisplayClass296_0_o *)sub_B2C35C(&NetworkManager_TypeInfo, quest);
    byte_41852E7 = 1;
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
  this = (QuestBoardListViewItemDraw___c__DisplayClass296_0_o *)NetworkManager__get_UserId(0LL);
  if ( !userQuestMst )
LABEL_14:
    sub_B2C434(this, quest);
  EntityFromId = UserQuestMaster__getEntityFromId(userQuestMst, (int64_t)this, quest->fields.questId, 0LL);
  if ( EntityFromId )
    return UserQuestEntity__HasStatus(EntityFromId, 8, 0LL);
  return 0;
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass297_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass297_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw___c__DisplayClass297_0___HasNewQuestInWar_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass297_0_o *this,
        MapControl_QuestInfo_o *quest,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw___c__DisplayClass297_0_o *v3; // x20
  struct MapControl_WarInfo_o *WarInfo_k__BackingField; // x8

  v3 = this;
  if ( this->fields.isMainInterlude )
  {
    if ( !quest
      || (this = (QuestBoardListViewItemDraw___c__DisplayClass297_0_o *)MapControl_QuestInfo__GetMine(quest, 0LL)) == 0LL )
    {
LABEL_11:
      sub_B2C434(this, quest);
    }
    this = (QuestBoardListViewItemDraw___c__DisplayClass297_0_o *)QuestEntity__HasFlag((QuestEntity_o *)this, 4LL, 0LL);
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


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass298_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass298_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass298_0___SetItemOfQuest_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass298_0_o *this,
        const MethodInfo *method)
{
  struct QuestBoardListViewItemDraw_o *_4__this; // x8
  QuestBoardListViewItemDraw___c__DisplayClass298_0_o *v3; // x19
  struct QuestBoardListViewItemDraw_o *v4; // x8
  struct QuestBoardListViewItemDraw_o *v5; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  v3 = this;
  this = (QuestBoardListViewItemDraw___c__DisplayClass298_0_o *)_4__this->fields.mLabelNameSp;
  if ( !this )
    goto LABEL_11;
  this = (QuestBoardListViewItemDraw___c__DisplayClass298_0_o *)UnityEngine_Behaviour__get_enabled(
                                                                  (UnityEngine_Behaviour_o *)this,
                                                                  0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v4 = v3->fields.__4__this;
    if ( !v4 )
      goto LABEL_11;
    if ( v4->fields.boardIconQuestId == v3->fields.boardIconQuestIdOld )
    {
      this = (QuestBoardListViewItemDraw___c__DisplayClass298_0_o *)v4->fields.boardIconTexture;
      if ( this )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
        v5 = v3->fields.__4__this;
        if ( v5 )
        {
          this = (QuestBoardListViewItemDraw___c__DisplayClass298_0_o *)v5->fields.boardIconTexture;
          if ( this )
          {
            UIWidget__set_color((UIWidget_o *)this, v3->fields.baseColor, 0LL);
            return;
          }
        }
      }
LABEL_11:
      sub_B2C434(this, method);
    }
  }
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass300_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass300_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass300_0___SetItemOfWarBoard_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass300_0_o *this,
        const MethodInfo *method)
{
  struct QuestBoardListViewItemDraw_o *_4__this; // x8
  QuestBoardListViewItemDraw___c__DisplayClass300_0_o *v3; // x19
  struct QuestBoardListViewItemDraw_o *v4; // x8
  struct QuestBoardListViewItemDraw_o *v5; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  v3 = this;
  this = (QuestBoardListViewItemDraw___c__DisplayClass300_0_o *)_4__this->fields.mLabelNameSp;
  if ( !this )
    goto LABEL_11;
  this = (QuestBoardListViewItemDraw___c__DisplayClass300_0_o *)UnityEngine_Behaviour__get_enabled(
                                                                  (UnityEngine_Behaviour_o *)this,
                                                                  0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v4 = v3->fields.__4__this;
    if ( !v4 )
      goto LABEL_11;
    if ( v4->fields.boardIconQuestId == v3->fields.boardIconQuestIdOld )
    {
      this = (QuestBoardListViewItemDraw___c__DisplayClass300_0_o *)v4->fields.boardIconTexture;
      if ( this )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
        v5 = v3->fields.__4__this;
        if ( v5 )
        {
          this = (QuestBoardListViewItemDraw___c__DisplayClass300_0_o *)v5->fields.boardIconTexture;
          if ( this )
          {
            UIWidget__set_color((UIWidget_o *)this, v3->fields.baseColor, 0LL);
            return;
          }
        }
      }
LABEL_11:
      sub_B2C434(this, method);
    }
  }
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass334_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass334_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw___c__DisplayClass334_0___GetCampaignTextListByEventQuestMaster_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass334_0_o *this,
        EventEntity_o *entity,
        const MethodInfo *method)
{
  struct EventCampaignEntity_o *eventCampaignEnt; // x8

  if ( !entity || (eventCampaignEnt = this->fields.eventCampaignEnt) == 0LL )
    sub_B2C434(this, entity);
  return entity->fields.id == eventCampaignEnt->fields.eventId;
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass334_1___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass334_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw___c__DisplayClass334_1___GetCampaignTextListByEventQuestMaster_b__1(
        QuestBoardListViewItemDraw___c__DisplayClass334_1_o *this,
        EventEntity_o *entity,
        const MethodInfo *method)
{
  struct EventCampaignEntity_o *eventCampaignEnt; // x8

  if ( !entity || (eventCampaignEnt = this->fields.eventCampaignEnt) == 0LL )
    sub_B2C434(this, entity);
  return entity->fields.id == eventCampaignEnt->fields.eventId;
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass336_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass336_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw___c__DisplayClass336_0___CreateQuestBoardInformationText_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass336_0_o *this,
        UserOwnItemInfo_o *x,
        const MethodInfo *method)
{
  const MethodInfo_21524A8 *v3; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  System_Nullable_long__o v9; // [xsp+0h] [xbp-30h] BYREF
  System_Nullable_long__o v10; // 0:x0.16

  if ( (byte_41852E8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Nullable_long___ctor__, x);
    byte_41852E8 = 1;
  }
  *(_QWORD *)&v10.fields.has_value = this->fields.checkTime;
  v10.fields.value = (int64_t)&v9;
  v9.fields.value = 0LL;
  *(_QWORD *)&v9.fields.has_value = 0LL;
  System_Nullable_long____ctor(v10, Method_System_Nullable_long___ctor__, v3);
  if ( !x )
    sub_B2C434(v6, v7);
  return !UserOwnItemInfo__IsExpired(x, v9, 0LL);
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass360_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass360_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass360_0___StartEntryBanner_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass360_0_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct QuestBoardListViewItemDraw_o *_4__this; // x8

  if ( (byte_41852E9 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_41852E9 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4184719 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4184719 = 1;
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
    sub_B2C434(v3, method);
  _4__this->fields._bannerState_k__BackingField = 2;
  ActionExtensions__Call(this->fields.endCallback, 0LL);
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass371_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass371_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass371_0___LoadBoardIconTexture_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass371_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw___c__DisplayClass371_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct QuestBoardListViewItemDraw_o *_4__this; // x8
  QuestBoardListViewItemDraw_c *v13; // x0
  System_String_o *v14; // x19
  struct QuestBoardListViewItemDraw_o *v15; // x8
  UnityEngine_Shader_o *v16; // x21
  UnityEngine_Material_o *v17; // x20
  struct QuestBoardListViewItemDraw_o *v18; // x8
  struct QuestBoardListViewItemDraw_o *v19; // x8
  struct QuestBoardListViewItemDraw_o *v20; // x8
  AssetData_o *boardIconAssetData; // x21
  UnityEngine_Texture_o *Object_WarBoardWaitTimeSetting; // x0

  v4 = this;
  if ( (byte_41852EA & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_Texture2D____67377648, assetData);
    sub_B2C35C(&AssetManager_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_Material_TypeInfo, v6);
    sub_B2C35C(&QuestBoardListViewItemDraw_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B2C35C(&StringLiteral_16133/*"_alpha"*/, v9);
    sub_B2C35C(&StringLiteral_4537/*"Custom/SpriteWithMask"*/, v10);
    this = (QuestBoardListViewItemDraw___c__DisplayClass371_0_o *)sub_B2C35C(&StringLiteral_16015/*"_MaskTex"*/, v11);
    byte_41852EA = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_22;
  this = (QuestBoardListViewItemDraw___c__DisplayClass371_0_o *)System_String__op_Inequality(
                                                                  v4->fields.loadBoardIconName,
                                                                  _4__this->fields.boardIconName,
                                                                  0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v15 = v4->fields.__4__this;
    if ( v15 )
    {
      v15->fields.boardIconAssetData = assetData;
      sub_B2C2F8(&v15->fields.boardIconAssetData, assetData);
      v16 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4537/*"Custom/SpriteWithMask"*/, 0LL);
      v17 = (UnityEngine_Material_o *)sub_B2C42C(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor(v17, v16, 0LL);
      v18 = v4->fields.__4__this;
      if ( v18 )
      {
        this = (QuestBoardListViewItemDraw___c__DisplayClass371_0_o *)v18->fields.boardIconTexture;
        if ( this )
        {
          this = (QuestBoardListViewItemDraw___c__DisplayClass371_0_o *)((__int64 (__fastcall *)(QuestBoardListViewItemDraw___c__DisplayClass371_0_o *, UnityEngine_Material_o *, Il2CppMethodPointer))this->klass[1].vtable._2_GetHashCode.method)(
                                                                          this,
                                                                          v17,
                                                                          this->klass[1].vtable._3_ToString.methodPtr);
          v19 = v4->fields.__4__this;
          if ( v19 )
          {
            this = (QuestBoardListViewItemDraw___c__DisplayClass371_0_o *)v19->fields.boardIconAssetData;
            if ( this )
            {
              this = (QuestBoardListViewItemDraw___c__DisplayClass371_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                              (AssetData_o *)this,
                                                                              v19->fields.boardIconName,
                                                                              (const MethodInfo_1720344 *)Method_AssetData_GetObject_Texture2D____67377648);
              if ( v17 )
              {
                UnityEngine_Material__set_mainTexture(v17, (UnityEngine_Texture_o *)this, 0LL);
                v20 = v4->fields.__4__this;
                if ( v20 )
                {
                  boardIconAssetData = v20->fields.boardIconAssetData;
                  this = (QuestBoardListViewItemDraw___c__DisplayClass371_0_o *)System_String__Concat_44305532(
                                                                                  v20->fields.boardIconName,
                                                                                  (System_String_o *)StringLiteral_16133/*"_alpha"*/,
                                                                                  0LL);
                  if ( boardIconAssetData )
                  {
                    Object_WarBoardWaitTimeSetting = (UnityEngine_Texture_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                boardIconAssetData,
                                                                                (System_String_o *)this,
                                                                                (const MethodInfo_1720344 *)Method_AssetData_GetObject_Texture2D____67377648);
                    UnityEngine_Material__SetTexture(
                      v17,
                      (System_String_o *)StringLiteral_16015/*"_MaskTex"*/,
                      Object_WarBoardWaitTimeSetting,
                      0LL);
                    this = (QuestBoardListViewItemDraw___c__DisplayClass371_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_B2C434(this, assetData);
  }
  v13 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v13 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v14 = System_String__Concat_44305532(
          v13->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH,
          v4->fields.loadBoardIconName,
          0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(v14, 0LL);
}