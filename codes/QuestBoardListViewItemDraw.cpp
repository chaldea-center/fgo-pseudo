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
  System_String_array **v333; // x2
  System_String_array **v334; // x3
  System_Boolean_array **v335; // x4
  System_Int32_array **v336; // x5
  System_Int32_array *v337; // x6
  System_Int32_array *v338; // x7
  System_Int32_array **v339; // x19
  void *v340; // x0
  System_Int32_array **v341; // x1
  System_String_array **v342; // x2
  System_String_array **v343; // x3
  System_Boolean_array **v344; // x4
  System_Int32_array **v345; // x5
  System_Int32_array *v346; // x6
  System_Int32_array *v347; // x7
  System_Int32_array **v348; // x1
  BattleServantConfConponent_o *p_RP_SPNAME_FRAME; // x0
  System_String_array **v350; // x2
  System_String_array **v351; // x3
  System_Boolean_array **v352; // x4
  System_Int32_array **v353; // x5
  System_Int32_array *v354; // x6
  System_Int32_array *v355; // x7
  System_String_array **v356; // x2
  System_String_array **v357; // x3
  System_Boolean_array **v358; // x4
  System_Int32_array **v359; // x5
  System_Int32_array *v360; // x6
  System_Int32_array *v361; // x7
  System_Int32_array **v362; // x19
  System_Int32_array **v363; // x1
  System_String_array **v364; // x2
  System_String_array **v365; // x3
  System_Boolean_array **v366; // x4
  System_Int32_array **v367; // x5
  System_Int32_array *v368; // x6
  System_Int32_array *v369; // x7
  System_Int32_array **v370; // x1
  BattleServantConfConponent_o *p_RP_SPNAME_POINT; // x0
  System_String_array **v372; // x2
  System_String_array **v373; // x3
  System_Boolean_array **v374; // x4
  System_Int32_array **v375; // x5
  System_Int32_array *v376; // x6
  System_Int32_array *v377; // x7
  QuestBoardListViewItemDraw_c *v378; // x8
  struct QuestBoardListViewItemDraw_StaticFields *v379; // x9
  struct QuestBoardListViewItemDraw_StaticFields *v380; // x9
  System_Int32_array **v381; // x1
  BattleServantConfConponent_o *p_QBOARD_CAP_CLOSED; // x0
  System_String_array **v383; // x2
  System_String_array **v384; // x3
  System_Boolean_array **v385; // x4
  System_Int32_array **v386; // x5
  System_Int32_array *v387; // x6
  System_Int32_array *v388; // x7
  System_Int32_array **v389; // x1
  BattleServantConfConponent_o *p_QBOARD_CAP_CLOSED_SPECIAL_FORMAT; // x0
  System_String_array **v391; // x2
  System_String_array **v392; // x3
  System_Boolean_array **v393; // x4
  System_Int32_array **v394; // x5
  System_Int32_array *v395; // x6
  System_Int32_array *v396; // x7
  System_Int32_array **v397; // x1
  BattleServantConfConponent_o *p_QBOARD_CAP_CLOSED_SPECIAL; // x0
  System_String_array **v399; // x2
  System_String_array **v400; // x3
  System_Boolean_array **v401; // x4
  System_Int32_array **v402; // x5
  System_Int32_array *v403; // x6
  System_Int32_array *v404; // x7
  System_Int32_array **v405; // x1
  BattleServantConfConponent_o *p_QBOARD_CAP_CLOSED_SPECIAL_2; // x0
  System_String_array **v407; // x2
  System_String_array **v408; // x3
  System_Boolean_array **v409; // x4
  System_Int32_array **v410; // x5
  System_Int32_array *v411; // x6
  System_Int32_array *v412; // x7
  System_Int32_array **v413; // x1
  BattleServantConfConponent_o *p_QBOARD_CAP_CLOSED_SPECIAL_3; // x0
  System_String_array **v415; // x2
  System_String_array **v416; // x3
  System_Boolean_array **v417; // x4
  System_Int32_array **v418; // x5
  System_Int32_array *v419; // x6
  System_Int32_array *v420; // x7
  System_String_array **v421; // x2
  System_String_array **v422; // x3
  System_Boolean_array **v423; // x4
  System_Int32_array **v424; // x5
  System_Int32_array *v425; // x6
  System_Int32_array *v426; // x7
  System_Int32_array **v427; // x19
  System_Int32_array **v428; // x1
  System_String_array **v429; // x2
  System_String_array **v430; // x3
  System_Boolean_array **v431; // x4
  System_Int32_array **v432; // x5
  System_Int32_array *v433; // x6
  System_Int32_array *v434; // x7
  System_Int32_array **v435; // x1
  System_String_array **v436; // x2
  System_String_array **v437; // x3
  System_Boolean_array **v438; // x4
  System_Int32_array **v439; // x5
  System_Int32_array *v440; // x6
  System_Int32_array *v441; // x7
  System_Int32_array **v442; // x1
  System_String_array **v443; // x2
  System_String_array **v444; // x3
  System_Boolean_array **v445; // x4
  System_Int32_array **v446; // x5
  System_Int32_array *v447; // x6
  System_Int32_array *v448; // x7
  System_Int32_array **v449; // x1
  System_String_array **v450; // x2
  System_String_array **v451; // x3
  System_Boolean_array **v452; // x4
  System_Int32_array **v453; // x5
  System_Int32_array *v454; // x6
  System_Int32_array *v455; // x7
  System_Int32_array **v456; // x1
  System_String_array **v457; // x2
  System_String_array **v458; // x3
  System_Boolean_array **v459; // x4
  System_Int32_array **v460; // x5
  System_Int32_array *v461; // x6
  System_Int32_array *v462; // x7
  System_Int32_array **v463; // x1
  System_String_array **v464; // x2
  System_String_array **v465; // x3
  System_Boolean_array **v466; // x4
  System_Int32_array **v467; // x5
  System_Int32_array *v468; // x6
  System_Int32_array *v469; // x7
  System_Int32_array **v470; // x1
  BattleServantConfConponent_o *p_msQBoardL1Names; // x0
  System_String_array **v472; // x2
  System_String_array **v473; // x3
  System_Boolean_array **v474; // x4
  System_Int32_array **v475; // x5
  System_Int32_array *v476; // x6
  System_Int32_array *v477; // x7
  System_Int32_array **v478; // x1
  BattleServantConfConponent_o *p_msQBoardL2Name_Story; // x0
  System_String_array **v480; // x2
  System_String_array **v481; // x3
  System_Boolean_array **v482; // x4
  System_Int32_array **v483; // x5
  System_Int32_array *v484; // x6
  System_Int32_array *v485; // x7
  System_Int32_array **v486; // x1
  BattleServantConfConponent_o *p_msQBoardL2Name_Hero; // x0
  System_String_array **v488; // x2
  System_String_array **v489; // x3
  System_Boolean_array **v490; // x4
  System_Int32_array **v491; // x5
  System_Int32_array *v492; // x6
  System_Int32_array *v493; // x7
  System_String_array **v494; // x2
  System_String_array **v495; // x3
  System_Boolean_array **v496; // x4
  System_Int32_array **v497; // x5
  System_Int32_array *v498; // x6
  System_Int32_array *v499; // x7
  System_Int32_array **v500; // x19
  System_Int32_array **v501; // x1
  System_String_array **v502; // x2
  System_String_array **v503; // x3
  System_Boolean_array **v504; // x4
  System_Int32_array **v505; // x5
  System_Int32_array *v506; // x6
  System_Int32_array *v507; // x7
  System_Int32_array **v508; // x1
  System_String_array **v509; // x2
  System_String_array **v510; // x3
  System_Boolean_array **v511; // x4
  System_Int32_array **v512; // x5
  System_Int32_array *v513; // x6
  System_Int32_array *v514; // x7
  System_Int32_array **v515; // x1
  System_String_array **v516; // x2
  System_String_array **v517; // x3
  System_Boolean_array **v518; // x4
  System_Int32_array **v519; // x5
  System_Int32_array *v520; // x6
  System_Int32_array *v521; // x7
  System_Int32_array **v522; // x1
  System_String_array **v523; // x2
  System_String_array **v524; // x3
  System_Boolean_array **v525; // x4
  System_Int32_array **v526; // x5
  System_Int32_array *v527; // x6
  System_Int32_array *v528; // x7
  System_Int32_array **v529; // x1
  System_String_array **v530; // x2
  System_String_array **v531; // x3
  System_Boolean_array **v532; // x4
  System_Int32_array **v533; // x5
  System_Int32_array *v534; // x6
  System_Int32_array *v535; // x7
  System_Int32_array **v536; // x1
  System_String_array **v537; // x2
  System_String_array **v538; // x3
  System_Boolean_array **v539; // x4
  System_Int32_array **v540; // x5
  System_Int32_array *v541; // x6
  System_Int32_array *v542; // x7
  System_Int32_array **v543; // x1
  BattleServantConfConponent_o *p_msQBoardL3Names; // x0
  System_String_array **v545; // x2
  System_String_array **v546; // x3
  System_Boolean_array **v547; // x4
  System_Int32_array **v548; // x5
  System_Int32_array *v549; // x6
  System_Int32_array *v550; // x7
  System_String_array **v551; // x2
  System_String_array **v552; // x3
  System_Boolean_array **v553; // x4
  System_Int32_array **v554; // x5
  System_Int32_array *v555; // x6
  System_Int32_array *v556; // x7
  System_Int32_array **v557; // x19
  System_Int32_array **v558; // x1
  System_String_array **v559; // x2
  System_String_array **v560; // x3
  System_Boolean_array **v561; // x4
  System_Int32_array **v562; // x5
  System_Int32_array *v563; // x6
  System_Int32_array *v564; // x7
  System_Int32_array **v565; // x1
  System_String_array **v566; // x2
  System_String_array **v567; // x3
  System_Boolean_array **v568; // x4
  System_Int32_array **v569; // x5
  System_Int32_array *v570; // x6
  System_Int32_array *v571; // x7
  System_Int32_array **v572; // x1
  System_String_array **v573; // x2
  System_String_array **v574; // x3
  System_Boolean_array **v575; // x4
  System_Int32_array **v576; // x5
  System_Int32_array *v577; // x6
  System_Int32_array *v578; // x7
  System_Int32_array **v579; // x1
  System_String_array **v580; // x2
  System_String_array **v581; // x3
  System_Boolean_array **v582; // x4
  System_Int32_array **v583; // x5
  System_Int32_array *v584; // x6
  System_Int32_array *v585; // x7
  System_Int32_array **v586; // x1
  System_String_array **v587; // x2
  System_String_array **v588; // x3
  System_Boolean_array **v589; // x4
  System_Int32_array **v590; // x5
  System_Int32_array *v591; // x6
  System_Int32_array *v592; // x7
  System_Int32_array **v593; // x1
  System_String_array **v594; // x2
  System_String_array **v595; // x3
  System_Boolean_array **v596; // x4
  System_Int32_array **v597; // x5
  System_Int32_array *v598; // x6
  System_Int32_array *v599; // x7
  System_Int32_array **v600; // x1
  BattleServantConfConponent_o *p_msLabelMainSprNames; // x0
  System_String_array **v602; // x2
  System_String_array **v603; // x3
  System_Boolean_array **v604; // x4
  System_Int32_array **v605; // x5
  System_Int32_array *v606; // x6
  System_Int32_array *v607; // x7
  System_String_array **v608; // x2
  System_String_array **v609; // x3
  System_Boolean_array **v610; // x4
  System_Int32_array **v611; // x5
  System_Int32_array *v612; // x6
  System_Int32_array *v613; // x7
  System_Int32_array **v614; // x19
  System_Int32_array **v615; // x1
  System_String_array **v616; // x2
  System_String_array **v617; // x3
  System_Boolean_array **v618; // x4
  System_Int32_array **v619; // x5
  System_Int32_array *v620; // x6
  System_Int32_array *v621; // x7
  System_Int32_array **v622; // x1
  System_String_array **v623; // x2
  System_String_array **v624; // x3
  System_Boolean_array **v625; // x4
  System_Int32_array **v626; // x5
  System_Int32_array *v627; // x6
  System_Int32_array *v628; // x7
  System_Int32_array **v629; // x1
  System_String_array **v630; // x2
  System_String_array **v631; // x3
  System_Boolean_array **v632; // x4
  System_Int32_array **v633; // x5
  System_Int32_array *v634; // x6
  System_Int32_array *v635; // x7
  System_Int32_array **v636; // x1
  System_String_array **v637; // x2
  System_String_array **v638; // x3
  System_Boolean_array **v639; // x4
  System_Int32_array **v640; // x5
  System_Int32_array *v641; // x6
  System_Int32_array *v642; // x7
  System_Int32_array **v643; // x1
  System_String_array **v644; // x2
  System_String_array **v645; // x3
  System_Boolean_array **v646; // x4
  System_Int32_array **v647; // x5
  System_Int32_array *v648; // x6
  System_Int32_array *v649; // x7
  System_Int32_array **v650; // x1
  System_String_array **v651; // x2
  System_String_array **v652; // x3
  System_Boolean_array **v653; // x4
  System_Int32_array **v654; // x5
  System_Int32_array *v655; // x6
  System_Int32_array *v656; // x7
  System_Int32_array **v657; // x1
  System_String_array **v658; // x2
  System_String_array **v659; // x3
  System_Boolean_array **v660; // x4
  System_Int32_array **v661; // x5
  System_Int32_array *v662; // x6
  System_Int32_array *v663; // x7
  System_Int32_array **v664; // x1
  BattleServantConfConponent_o *p_QuestBoardApSpNames; // x0
  System_String_array **v666; // x2
  System_String_array **v667; // x3
  System_Boolean_array **v668; // x4
  System_Int32_array **v669; // x5
  System_Int32_array *v670; // x6
  System_Int32_array *v671; // x7
  System_Int32_array **v672; // x1
  BattleServantConfConponent_o *p_msPhaseSprName_ArrowOff; // x0
  System_String_array **v674; // x2
  System_String_array **v675; // x3
  System_Boolean_array **v676; // x4
  System_Int32_array **v677; // x5
  System_Int32_array *v678; // x6
  System_Int32_array *v679; // x7
  System_Int32_array **v680; // x1
  BattleServantConfConponent_o *p_msPhaseSprName_ArrowOn; // x0
  System_String_array **v682; // x2
  System_String_array **v683; // x3
  System_Boolean_array **v684; // x4
  System_Int32_array **v685; // x5
  System_Int32_array *v686; // x6
  System_Int32_array *v687; // x7
  System_Int32_array **v688; // x1
  BattleServantConfConponent_o *p_msPhaseSprName_ExArrowOff; // x0
  System_String_array **v690; // x2
  System_String_array **v691; // x3
  System_Boolean_array **v692; // x4
  System_Int32_array **v693; // x5
  System_Int32_array *v694; // x6
  System_Int32_array *v695; // x7
  System_Int32_array **v696; // x1
  BattleServantConfConponent_o *p_msPhaseSprName_ExArrowOn; // x0
  System_String_array **v698; // x2
  System_String_array **v699; // x3
  System_Boolean_array **v700; // x4
  System_Int32_array **v701; // x5
  System_Int32_array *v702; // x6
  System_Int32_array *v703; // x7
  System_Int32_array **v704; // x1
  BattleServantConfConponent_o *p_msPhaseSprName_LoopOff; // x0
  System_String_array **v706; // x2
  System_String_array **v707; // x3
  System_Boolean_array **v708; // x4
  System_Int32_array **v709; // x5
  System_Int32_array *v710; // x6
  System_Int32_array *v711; // x7
  System_Int32_array **v712; // x1
  BattleServantConfConponent_o *p_msPhaseSprName_LoopOn; // x0
  System_String_array **v714; // x2
  System_String_array **v715; // x3
  System_Boolean_array **v716; // x4
  System_Int32_array **v717; // x5
  System_Int32_array *v718; // x6
  System_Int32_array *v719; // x7
  System_Int32_array **v720; // x1
  BattleServantConfConponent_o *p_msPhaseSprName_LoopFirstOff; // x0
  System_String_array **v722; // x2
  System_String_array **v723; // x3
  System_Boolean_array **v724; // x4
  System_Int32_array **v725; // x5
  System_Int32_array *v726; // x6
  System_Int32_array *v727; // x7
  System_Int32_array **v728; // x1
  BattleServantConfConponent_o *p_CHAPTER_SP_BASE_NAME; // x0
  System_String_array **v730; // x2
  System_String_array **v731; // x3
  System_Boolean_array **v732; // x4
  System_Int32_array **v733; // x5
  System_Int32_array *v734; // x6
  System_Int32_array *v735; // x7
  System_Int32_array **v736; // x1
  BattleServantConfConponent_o *p_CHAPTER_SP_UNIT_NAME; // x0
  System_String_array **v738; // x2
  System_String_array **v739; // x3
  System_Boolean_array **v740; // x4
  System_Int32_array **v741; // x5
  System_Int32_array *v742; // x6
  System_Int32_array *v743; // x7
  System_Int32_array **v744; // x1
  BattleServantConfConponent_o *p_PRE_BATTLE_ORGANIZATION; // x0
  System_String_array **v746; // x2
  System_String_array **v747; // x3
  System_Boolean_array **v748; // x4
  System_Int32_array **v749; // x5
  System_Int32_array *v750; // x6
  System_Int32_array *v751; // x7
  __int64 v752; // x0
  __int64 v753; // x0
  struct UnityEngine_Color_o v754; // [xsp+0h] [xbp-50h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-40h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v757; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v759; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4216D12 & 1) == 0 )
  {
    sub_B0D8A4(&QuestBoardListViewItemDraw_TypeInfo, v1);
    sub_B0D8A4(&string___TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_21689/*"quest_board_icon_"*/, v7);
    sub_B0D8A4(&StringLiteral_21700/*"questboard_cap_closed"*/, v8);
    sub_B0D8A4(&StringLiteral_19693/*"img_slider_on"*/, v9);
    sub_B0D8A4(&StringLiteral_19586/*"img_loop_off"*/, v10);
    sub_B0D8A4(&StringLiteral_19644/*"img_questboard_story01"*/, v11);
    sub_B0D8A4(&StringLiteral_21710/*"questboard_shohi_bg_01"*/, v12);
    sub_B0D8A4(&StringLiteral_21697/*"questboard_ap_free"*/, v13);
    sub_B0D8A4(&StringLiteral_21708/*"questboard_icon_cap{0:D2}"*/, v14);
    sub_B0D8A4(&StringLiteral_19648/*"img_questboard_story03mask"*/, v15);
    sub_B0D8A4(&StringLiteral_19627/*"img_quest_spend"*/, v16);
    sub_B0D8A4(&StringLiteral_19632/*"img_questarrow_off"*/, v17);
    sub_B0D8A4(&StringLiteral_17318/*"chaldea_category_{0}"*/, v18);
    sub_B0D8A4(&StringLiteral_19646/*"img_questboard_story02mask"*/, v19);
    sub_B0D8A4(&StringLiteral_19633/*"img_questarrow_on"*/, v20);
    sub_B0D8A4(&StringLiteral_19643/*"img_questboard_main_"*/, v21);
    sub_B0D8A4(&StringLiteral_19626/*"img_quest_pre_organization"*/, v22);
    sub_B0D8A4(&StringLiteral_18677/*"event_war_"*/, v23);
    sub_B0D8A4(&StringLiteral_21698/*"questboard_ap_main"*/, v24);
    sub_B0D8A4(&StringLiteral_19650/*"img_questboard_story05mask"*/, v25);
    sub_B0D8A4(&StringLiteral_21711/*"questboard_shohi_bg_02"*/, v26);
    sub_B0D8A4(&StringLiteral_19641/*"img_questboard_hero03"*/, v27);
    sub_B0D8A4(&StringLiteral_21703/*"questboard_cap_closed_special_3"*/, v28);
    sub_B0D8A4(&StringLiteral_19642/*"img_questboard_knockdown"*/, v29);
    sub_B0D8A4(&StringLiteral_21760/*"raid_point_old"*/, v30);
    sub_B0D8A4(&StringLiteral_21757/*"raid_point"*/, v31);
    sub_B0D8A4(&StringLiteral_21702/*"questboard_cap_closed_special_2"*/, v32);
    sub_B0D8A4(&StringLiteral_19640/*"img_questboard_hero02"*/, v33);
    sub_B0D8A4(&StringLiteral_19431/*"icon_spot_next"*/, v34);
    sub_B0D8A4(&StringLiteral_21688/*"quest_board_"*/, v35);
    sub_B0D8A4(&StringLiteral_21709/*"questboard_shohi_"*/, v36);
    sub_B0D8A4(&StringLiteral_21758/*"raid_point_frame"*/, v37);
    sub_B0D8A4(&StringLiteral_19638/*"img_questboard_free_"*/, v38);
    sub_B0D8A4(&StringLiteral_21759/*"raid_point_frame_old"*/, v39);
    sub_B0D8A4(&StringLiteral_19636/*"img_questboard_damage"*/, v40);
    sub_B0D8A4(&StringLiteral_17224/*"caldeagate_notice_{0:00}"*/, v41);
    sub_B0D8A4(&StringLiteral_21690/*"quest_board_mask_"*/, v42);
    sub_B0D8A4(&StringLiteral_6226/*"EventUI/QuestBoardIcon/"*/, v43);
    sub_B0D8A4(&StringLiteral_19637/*"img_questboard_event{0:D3}"*/, v44);
    sub_B0D8A4(&StringLiteral_19649/*"img_questboard_story04mask"*/, v45);
    sub_B0D8A4(&StringLiteral_19652/*"img_questloop_on"*/, v46);
    sub_B0D8A4(&StringLiteral_19651/*"img_questloop_off"*/, v47);
    sub_B0D8A4(&StringLiteral_19655/*"img_questtxt_free"*/, v48);
    sub_B0D8A4(&StringLiteral_21705/*"questboard_cap{0:D3}"*/, v49);
    sub_B0D8A4(&StringLiteral_19647/*"img_questboard_story03"*/, v50);
    sub_B0D8A4(&StringLiteral_19634/*"img_questboard_"*/, v51);
    sub_B0D8A4(&StringLiteral_19629/*"img_quest_unit_{0:D2}"*/, v52);
    sub_B0D8A4(&StringLiteral_21701/*"questboard_cap_closed_special"*/, v53);
    sub_B0D8A4(&StringLiteral_19654/*"img_questtxt_event"*/, v54);
    sub_B0D8A4(&StringLiteral_19639/*"img_questboard_hero01"*/, v55);
    sub_B0D8A4(&StringLiteral_19630/*"img_questarrow1_off"*/, v56);
    sub_B0D8A4(&StringLiteral_21699/*"questboard_ap_story"*/, v57);
    sub_B0D8A4(&StringLiteral_19692/*"img_slider_off"*/, v58);
    sub_B0D8A4(&StringLiteral_1/*""*/, v59);
    sub_B0D8A4(&StringLiteral_19628/*"img_quest_spend2"*/, v60);
    sub_B0D8A4(&StringLiteral_19625/*"img_quest_lasttime"*/, v61);
    sub_B0D8A4(&StringLiteral_19631/*"img_questarrow1_on"*/, v62);
    sub_B0D8A4(&StringLiteral_19645/*"img_questboard_story02"*/, v63);
    sub_B0D8A4(&StringLiteral_21730/*"qyestboard_ap_free"*/, v64);
    sub_B0D8A4(&StringLiteral_19430/*"icon_spot_free"*/, v65);
    sub_B0D8A4(&StringLiteral_21696/*"questboard_ap_"*/, v66);
    sub_B0D8A4(&StringLiteral_21704/*"questboard_cap_closed_{0}"*/, v67);
    byte_4216D12 = 1;
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
  v69->static_fields->ADVANCE_NOTICE_BASE_WIDTH = 416;
  v69->static_fields->ADVANCE_NOTICE_BASE_HEIGHT = 90;
  v69->static_fields->ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT = 36;
  v70 = 1061274050;
  v71 = 1047589105;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Color___ctor_40757524(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, &methoda);
  v759.fields.g = 0.0;
  v759.fields.b = 0.0;
  QuestBoardListViewItemDraw_TypeInfo->static_fields->CAMPAIGN_COST_COLOR = *(struct UnityEngine_Color_o *)&methoda.methodPointer;
  v759.fields.r = 0.90196;
  v754 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor_40757524(v759, v72, v73, v74, (const MethodInfo *)&v754);
  v75 = QuestBoardListViewItemDraw_TypeInfo;
  QuestBoardListViewItemDraw_TypeInfo->static_fields->OVER_COST_COLOR = v754;
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
  v83 = (System_Int32_array **)StringLiteral_19431/*"icon_spot_next"*/;
  v82->NEXT_ICON_SPRITE_NAME = (struct System_String_o *)StringLiteral_19431/*"icon_spot_next"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v82->NEXT_ICON_SPRITE_NAME, v83, v84, v85, v86, v87, v88, v89);
  v90 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  v91 = (System_Int32_array **)StringLiteral_19430/*"icon_spot_free"*/;
  v90->FREE_ICON_SPRITE_NAME = (struct System_String_o *)StringLiteral_19430/*"icon_spot_free"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v90->FREE_ICON_SPRITE_NAME, v91, v92, v93, v94, v95, v96, v97);
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
  v105 = (System_Int32_array **)StringLiteral_21710/*"questboard_shohi_bg_01"*/;
  p_COST_BG_ITEM = (BattleServantConfConponent_o *)&v98->static_fields->COST_BG_ITEM;
  p_COST_BG_ITEM->klass = (BattleServantConfConponent_c *)StringLiteral_21710/*"questboard_shohi_bg_01"*/;
  sub_B0D840(p_COST_BG_ITEM, v105, v107, v108, v109, v110, v111, v112);
  v113 = (System_Int32_array **)StringLiteral_21711/*"questboard_shohi_bg_02"*/;
  p_COST_BG_QP = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_QP;
  p_COST_BG_QP->klass = (BattleServantConfConponent_c *)StringLiteral_21711/*"questboard_shohi_bg_02"*/;
  sub_B0D840(p_COST_BG_QP, v113, v115, v116, v117, v118, v119, v120);
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
  v128 = (System_Int32_array **)StringLiteral_19627/*"img_quest_spend"*/;
  p_SHOHI_SP_NAME = (BattleServantConfConponent_o *)&v121->static_fields->SHOHI_SP_NAME;
  p_SHOHI_SP_NAME->klass = (BattleServantConfConponent_c *)StringLiteral_19627/*"img_quest_spend"*/;
  sub_B0D840(p_SHOHI_SP_NAME, v128, v130, v131, v132, v133, v134, v135);
  v136 = (System_Int32_array **)StringLiteral_19628/*"img_quest_spend2"*/;
  p_SHOHI_SP_NAME_WAR_BOARD = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->SHOHI_SP_NAME_WAR_BOARD;
  p_SHOHI_SP_NAME_WAR_BOARD->klass = (BattleServantConfConponent_c *)StringLiteral_19628/*"img_quest_spend2"*/;
  sub_B0D840(p_SHOHI_SP_NAME_WAR_BOARD, v136, v138, v139, v140, v141, v142, v143);
  v144 = (System_Int32_array **)StringLiteral_19625/*"img_quest_lasttime"*/;
  p_QUEST_BOARD_COSTNAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_COSTNAME;
  p_QUEST_BOARD_COSTNAME->klass = (BattleServantConfConponent_c *)StringLiteral_19625/*"img_quest_lasttime"*/;
  sub_B0D840(p_QUEST_BOARD_COSTNAME, v144, v146, v147, v148, v149, v150, v151);
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
  v757 = UnityEngine_Vector3__get_zero(0LL);
  v155 = QuestBoardListViewItemDraw_TypeInfo;
  QuestBoardListViewItemDraw_TypeInfo->static_fields->PHASE_OBJ_POS_SINGLE = v757;
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
  v170 = (System_Int32_array **)StringLiteral_18677/*"event_war_"*/;
  p_EVENT_WAR_SPNAME_PREFIX = (BattleServantConfConponent_o *)&v163->static_fields->EVENT_WAR_SPNAME_PREFIX;
  p_EVENT_WAR_SPNAME_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_18677/*"event_war_"*/;
  sub_B0D840(p_EVENT_WAR_SPNAME_PREFIX, v170, v172, v173, v174, v175, v176, v177);
  v178 = (System_Int32_array **)StringLiteral_17318/*"chaldea_category_{0}"*/;
  p_EVENT_WAR_SUBFOLDER_SPNAME_PREFIX = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->EVENT_WAR_SUBFOLDER_SPNAME_PREFIX;
  p_EVENT_WAR_SUBFOLDER_SPNAME_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_17318/*"chaldea_category_{0}"*/;
  sub_B0D840(p_EVENT_WAR_SUBFOLDER_SPNAME_PREFIX, v178, v180, v181, v182, v183, v184, v185);
  v186 = (System_Int32_array **)StringLiteral_21688/*"quest_board_"*/;
  p_QUEST_BOARD_SPNAME_PREFIX = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_SPNAME_PREFIX;
  p_QUEST_BOARD_SPNAME_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_21688/*"quest_board_"*/;
  sub_B0D840(p_QUEST_BOARD_SPNAME_PREFIX, v186, v188, v189, v190, v191, v192, v193);
  v194 = (System_Int32_array **)StringLiteral_19634/*"img_questboard_"*/;
  p_RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX;
  p_RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_19634/*"img_questboard_"*/;
  sub_B0D840(p_RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX, v194, v196, v197, v198, v199, v200, v201);
  v202 = (System_Int32_array **)StringLiteral_21689/*"quest_board_icon_"*/;
  p_QUEST_BOARD_ICON_SPNAME_PREFIX = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_ICON_SPNAME_PREFIX;
  p_QUEST_BOARD_ICON_SPNAME_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_21689/*"quest_board_icon_"*/;
  sub_B0D840(p_QUEST_BOARD_ICON_SPNAME_PREFIX, v202, v204, v205, v206, v207, v208, v209);
  v210 = (System_Int32_array **)StringLiteral_21690/*"quest_board_mask_"*/;
  p_QUEST_BOARD_MASK_SPNAME_PREFIX = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_MASK_SPNAME_PREFIX;
  p_QUEST_BOARD_MASK_SPNAME_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_21690/*"quest_board_mask_"*/;
  sub_B0D840(p_QUEST_BOARD_MASK_SPNAME_PREFIX, v210, v212, v213, v214, v215, v216, v217);
  v218 = (System_Int32_array **)StringLiteral_21709/*"questboard_shohi_"*/;
  p_QUEST_BOARD_SHOHI_SPNAME_PREFIX = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_SHOHI_SPNAME_PREFIX;
  p_QUEST_BOARD_SHOHI_SPNAME_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_21709/*"questboard_shohi_"*/;
  sub_B0D840(p_QUEST_BOARD_SHOHI_SPNAME_PREFIX, v218, v220, v221, v222, v223, v224, v225);
  v226 = (System_Int32_array **)StringLiteral_21696/*"questboard_ap_"*/;
  p_QUEST_BOARD_AP_SPNAME_PREFIX = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_AP_SPNAME_PREFIX;
  p_QUEST_BOARD_AP_SPNAME_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_21696/*"questboard_ap_"*/;
  sub_B0D840(p_QUEST_BOARD_AP_SPNAME_PREFIX, v226, v228, v229, v230, v231, v232, v233);
  v234 = (System_Int32_array **)StringLiteral_17224/*"caldeagate_notice_{0:00}"*/;
  p_QUEST_BOARD_INFO_FRAME_NAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_INFO_FRAME_NAME;
  p_QUEST_BOARD_INFO_FRAME_NAME->klass = (BattleServantConfConponent_c *)StringLiteral_17224/*"caldeagate_notice_{0:00}"*/;
  sub_B0D840(p_QUEST_BOARD_INFO_FRAME_NAME, v234, v236, v237, v238, v239, v240, v241);
  v242 = (System_Int32_array **)StringLiteral_19636/*"img_questboard_damage"*/;
  p_QUEST_BOARD_DAMAGE_RECODE_NAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_DAMAGE_RECODE_NAME;
  p_QUEST_BOARD_DAMAGE_RECODE_NAME->klass = (BattleServantConfConponent_c *)StringLiteral_19636/*"img_questboard_damage"*/;
  sub_B0D840(p_QUEST_BOARD_DAMAGE_RECODE_NAME, v242, v244, v245, v246, v247, v248, v249);
  v250 = (System_Int32_array **)StringLiteral_19625/*"img_quest_lasttime"*/;
  p_QUEST_BOARD_PREV_ICON_NAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_PREV_ICON_NAME;
  p_QUEST_BOARD_PREV_ICON_NAME->klass = (BattleServantConfConponent_c *)StringLiteral_19625/*"img_quest_lasttime"*/;
  sub_B0D840(p_QUEST_BOARD_PREV_ICON_NAME, v250, v252, v253, v254, v255, v256, v257);
  v258 = (System_Int32_array **)StringLiteral_19642/*"img_questboard_knockdown"*/;
  p_QUEST_BOARD_KNOCKDOWN_RECODE_NAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_KNOCKDOWN_RECODE_NAME;
  p_QUEST_BOARD_KNOCKDOWN_RECODE_NAME->klass = (BattleServantConfConponent_c *)StringLiteral_19642/*"img_questboard_knockdown"*/;
  sub_B0D840(p_QUEST_BOARD_KNOCKDOWN_RECODE_NAME, v258, v260, v261, v262, v263, v264, v265);
  v266 = (System_Int32_array **)StringLiteral_6226/*"EventUI/QuestBoardIcon/"*/;
  p_QUEST_BOARD_ICON_TEXTURE_PATH = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH;
  p_QUEST_BOARD_ICON_TEXTURE_PATH->klass = (BattleServantConfConponent_c *)StringLiteral_6226/*"EventUI/QuestBoardIcon/"*/;
  sub_B0D840(p_QUEST_BOARD_ICON_TEXTURE_PATH, v266, v268, v269, v270, v271, v272, v273);
  v274 = (System_Int32_array **)StringLiteral_21689/*"quest_board_icon_"*/;
  p_QUEST_BOARD_ICON_TEXTURE_PREFIX = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_ICON_TEXTURE_PREFIX;
  p_QUEST_BOARD_ICON_TEXTURE_PREFIX->klass = (BattleServantConfConponent_c *)StringLiteral_21689/*"quest_board_icon_"*/;
  sub_B0D840(p_QUEST_BOARD_ICON_TEXTURE_PREFIX, v274, v276, v277, v278, v279, v280, v281);
  v282 = QuestBoardListViewItemDraw_TypeInfo;
  QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_KNOCKDOWN_DAMAGE_WIDTH = 78;
  v282->static_fields->QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX = 48;
  v282->static_fields->QUEST_BOARD_KNOCKDOWN_ZERO_DAMAGE_POSX = 19;
  v282->static_fields->FLICK_THRESHOLD = 2.0;
  v283 = (System_Int32_array **)StringLiteral_19693/*"img_slider_on"*/;
  p_BANNER_POINT_SPNAME_ON = (BattleServantConfConponent_o *)&v282->static_fields->BANNER_POINT_SPNAME_ON;
  p_BANNER_POINT_SPNAME_ON->klass = (BattleServantConfConponent_c *)StringLiteral_19693/*"img_slider_on"*/;
  sub_B0D840(p_BANNER_POINT_SPNAME_ON, v283, v285, v286, v287, v288, v289, v290);
  v291 = (System_Int32_array **)StringLiteral_19692/*"img_slider_off"*/;
  p_BANNER_POINT_SPNAME_OFF = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->BANNER_POINT_SPNAME_OFF;
  p_BANNER_POINT_SPNAME_OFF->klass = (BattleServantConfConponent_c *)StringLiteral_19692/*"img_slider_off"*/;
  sub_B0D840(p_BANNER_POINT_SPNAME_OFF, v291, v293, v294, v295, v296, v297, v298);
  v299 = QuestBoardListViewItemDraw_TypeInfo;
  QuestBoardListViewItemDraw_TypeInfo->static_fields->SHORTCUT_FACE_MASK_SP_W = 136;
  v299->static_fields->QUEST_FACE_MASK_SP_W = 124;
  v300 = (System_Int32_array **)StringLiteral_19646/*"img_questboard_story02mask"*/;
  p_SHORTCUT_FACE_MASK_SPNAME = (BattleServantConfConponent_o *)&v299->static_fields->SHORTCUT_FACE_MASK_SPNAME;
  p_SHORTCUT_FACE_MASK_SPNAME->klass = (BattleServantConfConponent_c *)StringLiteral_19646/*"img_questboard_story02mask"*/;
  sub_B0D840(p_SHORTCUT_FACE_MASK_SPNAME, v300, v302, v303, v304, v305, v306, v307);
  v308 = (System_Int32_array **)StringLiteral_19648/*"img_questboard_story03mask"*/;
  p_QUEST_STORY_FACE_MASK_SPNAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_STORY_FACE_MASK_SPNAME;
  p_QUEST_STORY_FACE_MASK_SPNAME->klass = (BattleServantConfConponent_c *)StringLiteral_19648/*"img_questboard_story03mask"*/;
  sub_B0D840(p_QUEST_STORY_FACE_MASK_SPNAME, v308, v310, v311, v312, v313, v314, v315);
  v316 = (System_Int32_array **)StringLiteral_19649/*"img_questboard_story04mask"*/;
  p_QUEST_MAIN_FACE_MASK_SPNAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_MAIN_FACE_MASK_SPNAME;
  p_QUEST_MAIN_FACE_MASK_SPNAME->klass = (BattleServantConfConponent_c *)StringLiteral_19649/*"img_questboard_story04mask"*/;
  sub_B0D840(p_QUEST_MAIN_FACE_MASK_SPNAME, v316, v318, v319, v320, v321, v322, v323);
  v324 = (System_Int32_array **)StringLiteral_19650/*"img_questboard_story05mask"*/;
  p_QUEST_EVENT_FACE_MASK_SPNAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_EVENT_FACE_MASK_SPNAME;
  p_QUEST_EVENT_FACE_MASK_SPNAME->klass = (BattleServantConfConponent_c *)StringLiteral_19650/*"img_questboard_story05mask"*/;
  sub_B0D840(p_QUEST_EVENT_FACE_MASK_SPNAME, v324, v326, v327, v328, v329, v330, v331);
  v332 = sub_B0D8BC(string___TypeInfo, 2LL);
  if ( !v332 )
    goto LABEL_177;
  v339 = (System_Int32_array **)v332;
  v340 = (void *)StringLiteral_21759/*"raid_point_frame_old"*/;
  if ( StringLiteral_21759/*"raid_point_frame_old"*/ )
  {
    v340 = (void *)sub_B0D964(StringLiteral_21759/*"raid_point_frame_old"*/, *(_QWORD *)&(*v339)->m_Items[9]);
    if ( !v340 )
      goto LABEL_176;
    v341 = (System_Int32_array **)StringLiteral_21759/*"raid_point_frame_old"*/;
  }
  else
  {
    v341 = 0LL;
  }
  if ( !*((_DWORD *)v339 + 6) )
    goto LABEL_175;
  v339[4] = (System_Int32_array *)v341;
  sub_B0D840((BattleServantConfConponent_o *)(v339 + 4), v341, v333, v334, v335, v336, v337, v338);
  v340 = (void *)StringLiteral_21758/*"raid_point_frame"*/;
  if ( StringLiteral_21758/*"raid_point_frame"*/ )
  {
    v340 = (void *)sub_B0D964(StringLiteral_21758/*"raid_point_frame"*/, *(_QWORD *)&(*v339)->m_Items[9]);
    if ( !v340 )
      goto LABEL_176;
    v348 = (System_Int32_array **)StringLiteral_21758/*"raid_point_frame"*/;
  }
  else
  {
    v348 = 0LL;
  }
  if ( *((_DWORD *)v339 + 6) <= 1u )
    goto LABEL_175;
  v339[5] = (System_Int32_array *)v348;
  sub_B0D840((BattleServantConfConponent_o *)(v339 + 5), v348, v342, v343, v344, v345, v346, v347);
  p_RP_SPNAME_FRAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->RP_SPNAME_FRAME;
  p_RP_SPNAME_FRAME->klass = (BattleServantConfConponent_c *)v339;
  sub_B0D840(p_RP_SPNAME_FRAME, v339, v350, v351, v352, v353, v354, v355);
  v332 = sub_B0D8BC(string___TypeInfo, 2LL);
  if ( !v332 )
    goto LABEL_177;
  v362 = (System_Int32_array **)v332;
  v340 = (void *)StringLiteral_21760/*"raid_point_old"*/;
  if ( StringLiteral_21760/*"raid_point_old"*/ )
  {
    v340 = (void *)sub_B0D964(StringLiteral_21760/*"raid_point_old"*/, *(_QWORD *)&(*v362)->m_Items[9]);
    if ( !v340 )
      goto LABEL_176;
    v363 = (System_Int32_array **)StringLiteral_21760/*"raid_point_old"*/;
  }
  else
  {
    v363 = 0LL;
  }
  if ( !*((_DWORD *)v362 + 6) )
    goto LABEL_175;
  v362[4] = (System_Int32_array *)v363;
  sub_B0D840((BattleServantConfConponent_o *)(v362 + 4), v363, v356, v357, v358, v359, v360, v361);
  v340 = (void *)StringLiteral_21757/*"raid_point"*/;
  if ( StringLiteral_21757/*"raid_point"*/ )
  {
    v340 = (void *)sub_B0D964(StringLiteral_21757/*"raid_point"*/, *(_QWORD *)&(*v362)->m_Items[9]);
    if ( !v340 )
      goto LABEL_176;
    v370 = (System_Int32_array **)StringLiteral_21757/*"raid_point"*/;
  }
  else
  {
    v370 = 0LL;
  }
  if ( *((_DWORD *)v362 + 6) <= 1u )
    goto LABEL_175;
  v362[5] = (System_Int32_array *)v370;
  sub_B0D840((BattleServantConfConponent_o *)(v362 + 5), v370, v364, v365, v366, v367, v368, v369);
  p_RP_SPNAME_POINT = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->RP_SPNAME_POINT;
  p_RP_SPNAME_POINT->klass = (BattleServantConfConponent_c *)v362;
  sub_B0D840(p_RP_SPNAME_POINT, v362, v372, v373, v374, v375, v376, v377);
  v378 = QuestBoardListViewItemDraw_TypeInfo;
  QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_DEFAULT_FONT_SIZE = 18;
  v378->static_fields->RESTRICTION_FONT_SPACING_DEFAULT = 0;
  v378->static_fields->RESTRICTION_FONT_SPACING_MIN = -1;
  v379 = v378->static_fields;
  *(_QWORD *)&v379->RESTRICTION_POS_DEFAULT.fields.x = 0xC2040000C33A0000LL;
  v379->RESTRICTION_POS_DEFAULT.fields.z = 0.0;
  v378->static_fields->RESTRICTION_FONT_SIZE_ALLOUT = 14;
  v378->static_fields->RESTRICTION_FONT_WIDTH_ALLOUT = 112;
  v380 = v378->static_fields;
  *(_QWORD *)&v380->RESTRICTION_POS_ALLOUT.fields.x = 0xC2040000C3370000LL;
  v380->RESTRICTION_POS_ALLOUT.fields.z = 0.0;
  v378->static_fields->BANNER_ENTORY_EFFECT_DURATION = 0.5;
  v378->static_fields->BANNER_ENTORY_START_POS_X = 30.0;
  v381 = (System_Int32_array **)StringLiteral_21700/*"questboard_cap_closed"*/;
  p_QBOARD_CAP_CLOSED = (BattleServantConfConponent_o *)&v378->static_fields->QBOARD_CAP_CLOSED;
  p_QBOARD_CAP_CLOSED->klass = (BattleServantConfConponent_c *)StringLiteral_21700/*"questboard_cap_closed"*/;
  sub_B0D840(p_QBOARD_CAP_CLOSED, v381, v383, v384, v385, v386, v387, v388);
  v389 = (System_Int32_array **)StringLiteral_21704/*"questboard_cap_closed_{0}"*/;
  p_QBOARD_CAP_CLOSED_SPECIAL_FORMAT = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_SPECIAL_FORMAT;
  p_QBOARD_CAP_CLOSED_SPECIAL_FORMAT->klass = (BattleServantConfConponent_c *)StringLiteral_21704/*"questboard_cap_closed_{0}"*/;
  sub_B0D840(p_QBOARD_CAP_CLOSED_SPECIAL_FORMAT, v389, v391, v392, v393, v394, v395, v396);
  v397 = (System_Int32_array **)StringLiteral_21701/*"questboard_cap_closed_special"*/;
  p_QBOARD_CAP_CLOSED_SPECIAL = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_SPECIAL;
  p_QBOARD_CAP_CLOSED_SPECIAL->klass = (BattleServantConfConponent_c *)StringLiteral_21701/*"questboard_cap_closed_special"*/;
  sub_B0D840(p_QBOARD_CAP_CLOSED_SPECIAL, v397, v399, v400, v401, v402, v403, v404);
  v405 = (System_Int32_array **)StringLiteral_21702/*"questboard_cap_closed_special_2"*/;
  p_QBOARD_CAP_CLOSED_SPECIAL_2 = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_SPECIAL_2;
  p_QBOARD_CAP_CLOSED_SPECIAL_2->klass = (BattleServantConfConponent_c *)StringLiteral_21702/*"questboard_cap_closed_special_2"*/;
  sub_B0D840(p_QBOARD_CAP_CLOSED_SPECIAL_2, v405, v407, v408, v409, v410, v411, v412);
  v413 = (System_Int32_array **)StringLiteral_21703/*"questboard_cap_closed_special_3"*/;
  p_QBOARD_CAP_CLOSED_SPECIAL_3 = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QBOARD_CAP_CLOSED_SPECIAL_3;
  p_QBOARD_CAP_CLOSED_SPECIAL_3->klass = (BattleServantConfConponent_c *)StringLiteral_21703/*"questboard_cap_closed_special_3"*/;
  sub_B0D840(p_QBOARD_CAP_CLOSED_SPECIAL_3, v413, v415, v416, v417, v418, v419, v420);
  v332 = sub_B0D8BC(string___TypeInfo, 7LL);
  if ( !v332 )
    goto LABEL_177;
  v427 = (System_Int32_array **)v332;
  v340 = (void *)StringLiteral_19637/*"img_questboard_event{0:D3}"*/;
  if ( StringLiteral_19637/*"img_questboard_event{0:D3}"*/ )
  {
    v340 = (void *)sub_B0D964(StringLiteral_19637/*"img_questboard_event{0:D3}"*/, *(_QWORD *)&(*v427)->m_Items[9]);
    if ( !v340 )
      goto LABEL_176;
    v428 = (System_Int32_array **)StringLiteral_19637/*"img_questboard_event{0:D3}"*/;
  }
  else
  {
    v428 = 0LL;
  }
  if ( !*((_DWORD *)v427 + 6) )
    goto LABEL_175;
  v427[4] = (System_Int32_array *)v428;
  sub_B0D840((BattleServantConfConponent_o *)(v427 + 4), v428, v421, v422, v423, v424, v425, v426);
  v340 = (void *)StringLiteral_21705/*"questboard_cap{0:D3}"*/;
  if ( StringLiteral_21705/*"questboard_cap{0:D3}"*/ )
  {
    v340 = (void *)sub_B0D964(StringLiteral_21705/*"questboard_cap{0:D3}"*/, *(_QWORD *)&(*v427)->m_Items[9]);
    if ( !v340 )
      goto LABEL_176;
    v435 = (System_Int32_array **)StringLiteral_21705/*"questboard_cap{0:D3}"*/;
  }
  else
  {
    v435 = 0LL;
  }
  if ( *((_DWORD *)v427 + 6) <= 1u )
    goto LABEL_175;
  v427[5] = (System_Int32_array *)v435;
  sub_B0D840((BattleServantConfConponent_o *)(v427 + 5), v435, v429, v430, v431, v432, v433, v434);
  v340 = (void *)StringLiteral_17318/*"chaldea_category_{0}"*/;
  if ( StringLiteral_17318/*"chaldea_category_{0}"*/ )
  {
    v340 = (void *)sub_B0D964(StringLiteral_17318/*"chaldea_category_{0}"*/, *(_QWORD *)&(*v427)->m_Items[9]);
    if ( !v340 )
      goto LABEL_176;
    v442 = (System_Int32_array **)StringLiteral_17318/*"chaldea_category_{0}"*/;
  }
  else
  {
    v442 = 0LL;
  }
  if ( *((_DWORD *)v427 + 6) <= 2u )
    goto LABEL_175;
  v427[6] = (System_Int32_array *)v442;
  sub_B0D840((BattleServantConfConponent_o *)(v427 + 6), v442, v436, v437, v438, v439, v440, v441);
  v340 = (void *)StringLiteral_19644/*"img_questboard_story01"*/;
  if ( StringLiteral_19644/*"img_questboard_story01"*/ )
  {
    v340 = (void *)sub_B0D964(StringLiteral_19644/*"img_questboard_story01"*/, *(_QWORD *)&(*v427)->m_Items[9]);
    if ( !v340 )
      goto LABEL_176;
    v449 = (System_Int32_array **)StringLiteral_19644/*"img_questboard_story01"*/;
  }
  else
  {
    v449 = 0LL;
  }
  if ( *((_DWORD *)v427 + 6) <= 3u )
    goto LABEL_175;
  v427[7] = (System_Int32_array *)v449;
  sub_B0D840((BattleServantConfConponent_o *)(v427 + 7), v449, v443, v444, v445, v446, v447, v448);
  v340 = (void *)StringLiteral_19639/*"img_questboard_hero01"*/;
  if ( StringLiteral_19639/*"img_questboard_hero01"*/ )
  {
    v340 = (void *)sub_B0D964(StringLiteral_19639/*"img_questboard_hero01"*/, *(_QWORD *)&(*v427)->m_Items[9]);
    if ( !v340 )
      goto LABEL_176;
    v456 = (System_Int32_array **)StringLiteral_19639/*"img_questboard_hero01"*/;
  }
  else
  {
    v456 = 0LL;
  }
  if ( *((_DWORD *)v427 + 6) <= 4u )
    goto LABEL_175;
  v427[8] = (System_Int32_array *)v456;
  sub_B0D840((BattleServantConfConponent_o *)(v427 + 8), v456, v450, v451, v452, v453, v454, v455);
  v340 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v340 = (void *)sub_B0D964(StringLiteral_1/*""*/, *(_QWORD *)&(*v427)->m_Items[9]);
    if ( !v340 )
      goto LABEL_176;
    v463 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v463 = 0LL;
  }
  if ( *((_DWORD *)v427 + 6) <= 5u )
    goto LABEL_175;
  v427[9] = (System_Int32_array *)v463;
  sub_B0D840((BattleServantConfConponent_o *)(v427 + 9), v463, v457, v458, v459, v460, v461, v462);
  v340 = (void *)StringLiteral_21705/*"questboard_cap{0:D3}"*/;
  if ( StringLiteral_21705/*"questboard_cap{0:D3}"*/ )
  {
    v340 = (void *)sub_B0D964(StringLiteral_21705/*"questboard_cap{0:D3}"*/, *(_QWORD *)&(*v427)->m_Items[9]);
    if ( !v340 )
      goto LABEL_176;
    v470 = (System_Int32_array **)StringLiteral_21705/*"questboard_cap{0:D3}"*/;
  }
  else
  {
    v470 = 0LL;
  }
  if ( *((_DWORD *)v427 + 6) <= 6u )
    goto LABEL_175;
  v427[10] = (System_Int32_array *)v470;
  sub_B0D840((BattleServantConfConponent_o *)(v427 + 10), v470, v464, v465, v466, v467, v468, v469);
  p_msQBoardL1Names = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msQBoardL1Names;
  p_msQBoardL1Names->klass = (BattleServantConfConponent_c *)v427;
  sub_B0D840(p_msQBoardL1Names, v427, v472, v473, v474, v475, v476, v477);
  v478 = (System_Int32_array **)StringLiteral_19645/*"img_questboard_story02"*/;
  p_msQBoardL2Name_Story = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msQBoardL2Name_Story;
  p_msQBoardL2Name_Story->klass = (BattleServantConfConponent_c *)StringLiteral_19645/*"img_questboard_story02"*/;
  sub_B0D840(p_msQBoardL2Name_Story, v478, v480, v481, v482, v483, v484, v485);
  v486 = (System_Int32_array **)StringLiteral_19640/*"img_questboard_hero02"*/;
  p_msQBoardL2Name_Hero = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msQBoardL2Name_Hero;
  p_msQBoardL2Name_Hero->klass = (BattleServantConfConponent_c *)StringLiteral_19640/*"img_questboard_hero02"*/;
  sub_B0D840(p_msQBoardL2Name_Hero, v486, v488, v489, v490, v491, v492, v493);
  v332 = sub_B0D8BC(string___TypeInfo, 7LL);
  if ( !v332 )
    goto LABEL_177;
  v500 = (System_Int32_array **)v332;
  v340 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v340 = (void *)sub_B0D964(StringLiteral_1/*""*/, *(_QWORD *)&(*v500)->m_Items[9]);
    if ( !v340 )
      goto LABEL_176;
    v501 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v501 = 0LL;
  }
  if ( !*((_DWORD *)v500 + 6) )
    goto LABEL_175;
  v500[4] = (System_Int32_array *)v501;
  sub_B0D840((BattleServantConfConponent_o *)(v500 + 4), v501, v494, v495, v496, v497, v498, v499);
  v340 = (void *)StringLiteral_19643/*"img_questboard_main_"*/;
  if ( StringLiteral_19643/*"img_questboard_main_"*/ )
  {
    v340 = (void *)sub_B0D964(StringLiteral_19643/*"img_questboard_main_"*/, *(_QWORD *)&(*v500)->m_Items[9]);
    if ( !v340 )
      goto LABEL_176;
    v508 = (System_Int32_array **)StringLiteral_19643/*"img_questboard_main_"*/;
  }
  else
  {
    v508 = 0LL;
  }
  if ( *((_DWORD *)v500 + 6) <= 1u )
    goto LABEL_175;
  v500[5] = (System_Int32_array *)v508;
  sub_B0D840((BattleServantConfConponent_o *)(v500 + 5), v508, v502, v503, v504, v505, v506, v507);
  v340 = (void *)StringLiteral_19638/*"img_questboard_free_"*/;
  if ( StringLiteral_19638/*"img_questboard_free_"*/ )
  {
    v340 = (void *)sub_B0D964(StringLiteral_19638/*"img_questboard_free_"*/, *(_QWORD *)&(*v500)->m_Items[9]);
    if ( !v340 )
      goto LABEL_176;
    v515 = (System_Int32_array **)StringLiteral_19638/*"img_questboard_free_"*/;
  }
  else
  {
    v515 = 0LL;
  }
  if ( *((_DWORD *)v500 + 6) <= 2u )
    goto LABEL_175;
  v500[6] = (System_Int32_array *)v515;
  sub_B0D840((BattleServantConfConponent_o *)(v500 + 6), v515, v509, v510, v511, v512, v513, v514);
  v340 = (void *)StringLiteral_19647/*"img_questboard_story03"*/;
  if ( StringLiteral_19647/*"img_questboard_story03"*/ )
  {
    v340 = (void *)sub_B0D964(StringLiteral_19647/*"img_questboard_story03"*/, *(_QWORD *)&(*v500)->m_Items[9]);
    if ( !v340 )
      goto LABEL_176;
    v522 = (System_Int32_array **)StringLiteral_19647/*"img_questboard_story03"*/;
  }
  else
  {
    v522 = 0LL;
  }
  if ( *((_DWORD *)v500 + 6) <= 3u )
    goto LABEL_175;
  v500[7] = (System_Int32_array *)v522;
  sub_B0D840((BattleServantConfConponent_o *)(v500 + 7), v522, v516, v517, v518, v519, v520, v521);
  v340 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v340 = (void *)sub_B0D964(StringLiteral_1/*""*/, *(_QWORD *)&(*v500)->m_Items[9]);
    if ( !v340 )
      goto LABEL_176;
    v529 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v529 = 0LL;
  }
  if ( *((_DWORD *)v500 + 6) <= 4u )
    goto LABEL_175;
  v500[8] = (System_Int32_array *)v529;
  sub_B0D840((BattleServantConfConponent_o *)(v500 + 8), v529, v523, v524, v525, v526, v527, v528);
  v340 = (void *)StringLiteral_19638/*"img_questboard_free_"*/;
  if ( StringLiteral_19638/*"img_questboard_free_"*/ )
  {
    v340 = (void *)sub_B0D964(StringLiteral_19638/*"img_questboard_free_"*/, *(_QWORD *)&(*v500)->m_Items[9]);
    if ( !v340 )
      goto LABEL_176;
    v536 = (System_Int32_array **)StringLiteral_19638/*"img_questboard_free_"*/;
  }
  else
  {
    v536 = 0LL;
  }
  if ( *((_DWORD *)v500 + 6) <= 5u )
    goto LABEL_175;
  v500[9] = (System_Int32_array *)v536;
  sub_B0D840((BattleServantConfConponent_o *)(v500 + 9), v536, v530, v531, v532, v533, v534, v535);
  v340 = (void *)StringLiteral_19641/*"img_questboard_hero03"*/;
  if ( StringLiteral_19641/*"img_questboard_hero03"*/ )
  {
    v340 = (void *)sub_B0D964(StringLiteral_19641/*"img_questboard_hero03"*/, *(_QWORD *)&(*v500)->m_Items[9]);
    if ( !v340 )
      goto LABEL_176;
    v543 = (System_Int32_array **)StringLiteral_19641/*"img_questboard_hero03"*/;
  }
  else
  {
    v543 = 0LL;
  }
  if ( *((_DWORD *)v500 + 6) <= 6u )
    goto LABEL_175;
  v500[10] = (System_Int32_array *)v543;
  sub_B0D840((BattleServantConfConponent_o *)(v500 + 10), v543, v537, v538, v539, v540, v541, v542);
  p_msQBoardL3Names = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msQBoardL3Names;
  p_msQBoardL3Names->klass = (BattleServantConfConponent_c *)v500;
  sub_B0D840(p_msQBoardL3Names, v500, v545, v546, v547, v548, v549, v550);
  v332 = sub_B0D8BC(string___TypeInfo, 7LL);
  if ( !v332 )
    goto LABEL_177;
  v557 = (System_Int32_array **)v332;
  v340 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v340 = (void *)sub_B0D964(StringLiteral_1/*""*/, *(_QWORD *)&(*v557)->m_Items[9]);
    if ( !v340 )
      goto LABEL_176;
    v558 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v558 = 0LL;
  }
  if ( !*((_DWORD *)v557 + 6) )
    goto LABEL_175;
  v557[4] = (System_Int32_array *)v558;
  sub_B0D840((BattleServantConfConponent_o *)(v557 + 4), v558, v551, v552, v553, v554, v555, v556);
  v340 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v340 = (void *)sub_B0D964(StringLiteral_1/*""*/, *(_QWORD *)&(*v557)->m_Items[9]);
    if ( !v340 )
      goto LABEL_176;
    v565 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v565 = 0LL;
  }
  if ( *((_DWORD *)v557 + 6) <= 1u )
    goto LABEL_175;
  v557[5] = (System_Int32_array *)v565;
  sub_B0D840((BattleServantConfConponent_o *)(v557 + 5), v565, v559, v560, v561, v562, v563, v564);
  v340 = (void *)StringLiteral_19655/*"img_questtxt_free"*/;
  if ( StringLiteral_19655/*"img_questtxt_free"*/ )
  {
    v340 = (void *)sub_B0D964(StringLiteral_19655/*"img_questtxt_free"*/, *(_QWORD *)&(*v557)->m_Items[9]);
    if ( !v340 )
      goto LABEL_176;
    v572 = (System_Int32_array **)StringLiteral_19655/*"img_questtxt_free"*/;
  }
  else
  {
    v572 = 0LL;
  }
  if ( *((_DWORD *)v557 + 6) <= 2u )
    goto LABEL_175;
  v557[6] = (System_Int32_array *)v572;
  sub_B0D840((BattleServantConfConponent_o *)(v557 + 6), v572, v566, v567, v568, v569, v570, v571);
  v340 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v340 = (void *)sub_B0D964(StringLiteral_1/*""*/, *(_QWORD *)&(*v557)->m_Items[9]);
    if ( !v340 )
      goto LABEL_176;
    v579 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v579 = 0LL;
  }
  if ( *((_DWORD *)v557 + 6) <= 3u )
    goto LABEL_175;
  v557[7] = (System_Int32_array *)v579;
  sub_B0D840((BattleServantConfConponent_o *)(v557 + 7), v579, v573, v574, v575, v576, v577, v578);
  v340 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v340 = (void *)sub_B0D964(StringLiteral_1/*""*/, *(_QWORD *)&(*v557)->m_Items[9]);
    if ( !v340 )
      goto LABEL_176;
    v586 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v586 = 0LL;
  }
  if ( *((_DWORD *)v557 + 6) <= 4u )
    goto LABEL_175;
  v557[8] = (System_Int32_array *)v586;
  sub_B0D840((BattleServantConfConponent_o *)(v557 + 8), v586, v580, v581, v582, v583, v584, v585);
  v340 = (void *)StringLiteral_19654/*"img_questtxt_event"*/;
  if ( StringLiteral_19654/*"img_questtxt_event"*/ )
  {
    v340 = (void *)sub_B0D964(StringLiteral_19654/*"img_questtxt_event"*/, *(_QWORD *)&(*v557)->m_Items[9]);
    if ( !v340 )
      goto LABEL_176;
    v593 = (System_Int32_array **)StringLiteral_19654/*"img_questtxt_event"*/;
  }
  else
  {
    v593 = 0LL;
  }
  if ( *((_DWORD *)v557 + 6) <= 5u )
    goto LABEL_175;
  v557[9] = (System_Int32_array *)v593;
  sub_B0D840((BattleServantConfConponent_o *)(v557 + 9), v593, v587, v588, v589, v590, v591, v592);
  v340 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v340 = (void *)sub_B0D964(StringLiteral_1/*""*/, *(_QWORD *)&(*v557)->m_Items[9]);
    if ( !v340 )
      goto LABEL_176;
    v600 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v600 = 0LL;
  }
  if ( *((_DWORD *)v557 + 6) <= 6u )
    goto LABEL_175;
  v557[10] = (System_Int32_array *)v600;
  sub_B0D840((BattleServantConfConponent_o *)(v557 + 10), v600, v594, v595, v596, v597, v598, v599);
  p_msLabelMainSprNames = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msLabelMainSprNames;
  p_msLabelMainSprNames->klass = (BattleServantConfConponent_c *)v557;
  sub_B0D840(p_msLabelMainSprNames, v557, v602, v603, v604, v605, v606, v607);
  v332 = sub_B0D8BC(string___TypeInfo, 8LL);
  if ( !v332 )
LABEL_177:
    sub_B0D97C(v332);
  v614 = (System_Int32_array **)v332;
  v340 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v340 = (void *)sub_B0D964(StringLiteral_1/*""*/, *(_QWORD *)&(*v614)->m_Items[9]);
    if ( !v340 )
      goto LABEL_176;
    v615 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v615 = 0LL;
  }
  if ( !*((_DWORD *)v614 + 6) )
    goto LABEL_175;
  v614[4] = (System_Int32_array *)v615;
  sub_B0D840((BattleServantConfConponent_o *)(v614 + 4), v615, v608, v609, v610, v611, v612, v613);
  v340 = (void *)StringLiteral_21698/*"questboard_ap_main"*/;
  if ( StringLiteral_21698/*"questboard_ap_main"*/ )
  {
    v340 = (void *)sub_B0D964(StringLiteral_21698/*"questboard_ap_main"*/, *(_QWORD *)&(*v614)->m_Items[9]);
    if ( !v340 )
      goto LABEL_176;
    v622 = (System_Int32_array **)StringLiteral_21698/*"questboard_ap_main"*/;
  }
  else
  {
    v622 = 0LL;
  }
  if ( *((_DWORD *)v614 + 6) <= 1u )
    goto LABEL_175;
  v614[5] = (System_Int32_array *)v622;
  sub_B0D840((BattleServantConfConponent_o *)(v614 + 5), v622, v616, v617, v618, v619, v620, v621);
  v340 = (void *)StringLiteral_21697/*"questboard_ap_free"*/;
  if ( StringLiteral_21697/*"questboard_ap_free"*/ )
  {
    v340 = (void *)sub_B0D964(StringLiteral_21697/*"questboard_ap_free"*/, *(_QWORD *)&(*v614)->m_Items[9]);
    if ( !v340 )
      goto LABEL_176;
    v629 = (System_Int32_array **)StringLiteral_21697/*"questboard_ap_free"*/;
  }
  else
  {
    v629 = 0LL;
  }
  if ( *((_DWORD *)v614 + 6) <= 2u )
    goto LABEL_175;
  v614[6] = (System_Int32_array *)v629;
  sub_B0D840((BattleServantConfConponent_o *)(v614 + 6), v629, v623, v624, v625, v626, v627, v628);
  v340 = (void *)StringLiteral_21699/*"questboard_ap_story"*/;
  if ( StringLiteral_21699/*"questboard_ap_story"*/ )
  {
    v340 = (void *)sub_B0D964(StringLiteral_21699/*"questboard_ap_story"*/, *(_QWORD *)&(*v614)->m_Items[9]);
    if ( !v340 )
      goto LABEL_176;
    v636 = (System_Int32_array **)StringLiteral_21699/*"questboard_ap_story"*/;
  }
  else
  {
    v636 = 0LL;
  }
  if ( *((_DWORD *)v614 + 6) <= 3u )
    goto LABEL_175;
  v614[7] = (System_Int32_array *)v636;
  sub_B0D840((BattleServantConfConponent_o *)(v614 + 7), v636, v630, v631, v632, v633, v634, v635);
  v340 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v340 = (void *)sub_B0D964(StringLiteral_1/*""*/, *(_QWORD *)&(*v614)->m_Items[9]);
    if ( !v340 )
      goto LABEL_176;
    v643 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v643 = 0LL;
  }
  if ( *((_DWORD *)v614 + 6) <= 4u )
    goto LABEL_175;
  v614[8] = (System_Int32_array *)v643;
  sub_B0D840((BattleServantConfConponent_o *)(v614 + 8), v643, v637, v638, v639, v640, v641, v642);
  v340 = (void *)StringLiteral_21697/*"questboard_ap_free"*/;
  if ( StringLiteral_21697/*"questboard_ap_free"*/ )
  {
    v340 = (void *)sub_B0D964(StringLiteral_21697/*"questboard_ap_free"*/, *(_QWORD *)&(*v614)->m_Items[9]);
    if ( !v340 )
      goto LABEL_176;
    v650 = (System_Int32_array **)StringLiteral_21697/*"questboard_ap_free"*/;
  }
  else
  {
    v650 = 0LL;
  }
  if ( *((_DWORD *)v614 + 6) <= 5u )
    goto LABEL_175;
  v614[9] = (System_Int32_array *)v650;
  sub_B0D840((BattleServantConfConponent_o *)(v614 + 9), v650, v644, v645, v646, v647, v648, v649);
  v340 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v340 = (void *)sub_B0D964(StringLiteral_1/*""*/, *(_QWORD *)&(*v614)->m_Items[9]);
    if ( !v340 )
      goto LABEL_176;
    v657 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v657 = 0LL;
  }
  if ( *((_DWORD *)v614 + 6) <= 6u )
    goto LABEL_175;
  v614[10] = (System_Int32_array *)v657;
  sub_B0D840((BattleServantConfConponent_o *)(v614 + 10), v657, v651, v652, v653, v654, v655, v656);
  v340 = (void *)StringLiteral_21730/*"qyestboard_ap_free"*/;
  if ( StringLiteral_21730/*"qyestboard_ap_free"*/ )
  {
    v340 = (void *)sub_B0D964(StringLiteral_21730/*"qyestboard_ap_free"*/, *(_QWORD *)&(*v614)->m_Items[9]);
    if ( v340 )
    {
      v664 = (System_Int32_array **)StringLiteral_21730/*"qyestboard_ap_free"*/;
      goto LABEL_173;
    }
LABEL_176:
    v753 = sub_B0D99C(v340);
    sub_B0D948(v753, 0LL);
  }
  v664 = 0LL;
LABEL_173:
  if ( *((_DWORD *)v614 + 6) <= 7u )
  {
LABEL_175:
    v752 = sub_B0D9A8(v340);
    sub_B0D948(v752, 0LL);
  }
  v614[11] = (System_Int32_array *)v664;
  sub_B0D840((BattleServantConfConponent_o *)(v614 + 11), v664, v658, v659, v660, v661, v662, v663);
  p_QuestBoardApSpNames = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->QuestBoardApSpNames;
  p_QuestBoardApSpNames->klass = (BattleServantConfConponent_c *)v614;
  sub_B0D840(p_QuestBoardApSpNames, v614, v666, v667, v668, v669, v670, v671);
  v672 = (System_Int32_array **)StringLiteral_19632/*"img_questarrow_off"*/;
  p_msPhaseSprName_ArrowOff = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_ArrowOff;
  p_msPhaseSprName_ArrowOff->klass = (BattleServantConfConponent_c *)StringLiteral_19632/*"img_questarrow_off"*/;
  sub_B0D840(p_msPhaseSprName_ArrowOff, v672, v674, v675, v676, v677, v678, v679);
  v680 = (System_Int32_array **)StringLiteral_19633/*"img_questarrow_on"*/;
  p_msPhaseSprName_ArrowOn = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_ArrowOn;
  p_msPhaseSprName_ArrowOn->klass = (BattleServantConfConponent_c *)StringLiteral_19633/*"img_questarrow_on"*/;
  sub_B0D840(p_msPhaseSprName_ArrowOn, v680, v682, v683, v684, v685, v686, v687);
  v688 = (System_Int32_array **)StringLiteral_19630/*"img_questarrow1_off"*/;
  p_msPhaseSprName_ExArrowOff = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_ExArrowOff;
  p_msPhaseSprName_ExArrowOff->klass = (BattleServantConfConponent_c *)StringLiteral_19630/*"img_questarrow1_off"*/;
  sub_B0D840(p_msPhaseSprName_ExArrowOff, v688, v690, v691, v692, v693, v694, v695);
  v696 = (System_Int32_array **)StringLiteral_19631/*"img_questarrow1_on"*/;
  p_msPhaseSprName_ExArrowOn = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_ExArrowOn;
  p_msPhaseSprName_ExArrowOn->klass = (BattleServantConfConponent_c *)StringLiteral_19631/*"img_questarrow1_on"*/;
  sub_B0D840(p_msPhaseSprName_ExArrowOn, v696, v698, v699, v700, v701, v702, v703);
  v704 = (System_Int32_array **)StringLiteral_19651/*"img_questloop_off"*/;
  p_msPhaseSprName_LoopOff = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_LoopOff;
  p_msPhaseSprName_LoopOff->klass = (BattleServantConfConponent_c *)StringLiteral_19651/*"img_questloop_off"*/;
  sub_B0D840(p_msPhaseSprName_LoopOff, v704, v706, v707, v708, v709, v710, v711);
  v712 = (System_Int32_array **)StringLiteral_19652/*"img_questloop_on"*/;
  p_msPhaseSprName_LoopOn = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_LoopOn;
  p_msPhaseSprName_LoopOn->klass = (BattleServantConfConponent_c *)StringLiteral_19652/*"img_questloop_on"*/;
  sub_B0D840(p_msPhaseSprName_LoopOn, v712, v714, v715, v716, v717, v718, v719);
  v720 = (System_Int32_array **)StringLiteral_19586/*"img_loop_off"*/;
  p_msPhaseSprName_LoopFirstOff = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->msPhaseSprName_LoopFirstOff;
  p_msPhaseSprName_LoopFirstOff->klass = (BattleServantConfConponent_c *)StringLiteral_19586/*"img_loop_off"*/;
  sub_B0D840(p_msPhaseSprName_LoopFirstOff, v720, v722, v723, v724, v725, v726, v727);
  v728 = (System_Int32_array **)StringLiteral_21708/*"questboard_icon_cap{0:D2}"*/;
  p_CHAPTER_SP_BASE_NAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->CHAPTER_SP_BASE_NAME;
  p_CHAPTER_SP_BASE_NAME->klass = (BattleServantConfConponent_c *)StringLiteral_21708/*"questboard_icon_cap{0:D2}"*/;
  sub_B0D840(p_CHAPTER_SP_BASE_NAME, v728, v730, v731, v732, v733, v734, v735);
  v736 = (System_Int32_array **)StringLiteral_19629/*"img_quest_unit_{0:D2}"*/;
  p_CHAPTER_SP_UNIT_NAME = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->CHAPTER_SP_UNIT_NAME;
  p_CHAPTER_SP_UNIT_NAME->klass = (BattleServantConfConponent_c *)StringLiteral_19629/*"img_quest_unit_{0:D2}"*/;
  sub_B0D840(p_CHAPTER_SP_UNIT_NAME, v736, v738, v739, v740, v741, v742, v743);
  v744 = (System_Int32_array **)StringLiteral_19626/*"img_quest_pre_organization"*/;
  p_PRE_BATTLE_ORGANIZATION = (BattleServantConfConponent_o *)&QuestBoardListViewItemDraw_TypeInfo->static_fields->PRE_BATTLE_ORGANIZATION;
  p_PRE_BATTLE_ORGANIZATION->klass = (BattleServantConfConponent_c *)StringLiteral_19626/*"img_quest_pre_organization"*/;
  sub_B0D840(p_PRE_BATTLE_ORGANIZATION, v744, v746, v747, v748, v749, v750, v751);
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
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_4216D11 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_GameObject___TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UISprite___ctor__, v3);
    sub_B0D8A4(&System_Collections_Generic_List_UISprite__TypeInfo, v4);
    sub_B0D8A4(&QuestBoardListViewItemDraw_TypeInfo, v5);
    sub_B0D8A4(&UISprite___TypeInfo, v6);
    byte_4216D11 = 1;
  }
  v7 = (struct UnityEngine_GameObject_array *)sub_B0D8BC(UnityEngine_GameObject___TypeInfo, 4LL);
  this->fields.mStatusSp = v7;
  sub_B0D840(
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
  v15 = (struct UISprite_array *)sub_B0D8BC(UISprite___TypeInfo, (unsigned int)v14->static_fields->PHASE_EXTRA_MAX);
  this->fields.mPhaseSp = v15;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mPhaseSp,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_UISprite__TypeInfo,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UISprite___ctor__);
  this->fields.mMultiSecondBattleInformation = (struct System_Collections_Generic_List_UISprite__o *)v24;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mMultiSecondBattleInformation,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestBoardListViewItemDraw__Awake(QuestBoardListViewItemDraw_o *this, const MethodInfo *method)
{
  struct UILabel_o *mOptionRestrinctionLb; // x8

  mOptionRestrinctionLb = this->fields.mOptionRestrinctionLb;
  this->fields._bannerState_k__BackingField = 0;
  if ( !mOptionRestrinctionLb )
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  BoardOptionEventTargetComponent_o *v5; // x0

  if ( (byte_4216D02 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4216D02 = 1;
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
      v5 = (BoardOptionEventTargetComponent_o *)this->fields.eventTarget;
      if ( !v5 )
        goto LABEL_18;
      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)v5, 0LL) )
      {
        v5 = this->fields.eventTargetComponent;
        if ( !v5 )
          goto LABEL_18;
        if ( BoardOptionEventTargetComponent__IsNeedAnim(v5, 0LL) )
        {
          v5 = this->fields.eventTargetComponent;
          if ( v5 )
          {
            BoardOptionEventTargetComponent__SetNextTarget(v5, 0LL);
            return;
          }
LABEL_18:
          sub_B0D97C(v5);
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
  const MethodInfo *v6; // x1
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v7; // x26
  int32_t v8; // w25
  __int64 v9; // x8
  QuestBoardInformaionText_o *v10; // x26
  const MethodInfo *v11; // x2
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x8
  QuestBoardListViewItem_o *v16; // x1
  int64_t Time; // x3
  const MethodInfo *v18; // x4
  QuestBoardListViewItemDraw_o *v19; // x0
  int32_t v20; // w2

  v5 = this;
  while ( 1 )
  {
    if ( (byte_4216CFE & 1) == 0 )
    {
      sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__RemoveAt__, questBoardItem);
      sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, v12);
      sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__, v13);
      this = (QuestBoardListViewItemDraw_o *)sub_B0D8A4(&NetworkManager_TypeInfo, v14);
      byte_4216CFE = 1;
    }
    if ( (byte_4216CFF & 1) == 0 )
    {
      this = (QuestBoardListViewItemDraw_o *)sub_B0D8A4(
                                               &Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__,
                                               questBoardItem);
      byte_4216CFF = 1;
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
    v7 = v5->fields.mInfoTextList;
    if ( !v7 )
      goto LABEL_33;
    v8 = (int)this;
    if ( v7->fields._size <= (unsigned int)this )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v9 = (__int64)v7->fields._items + 8 * (int)this;
    v10 = *(QuestBoardInformaionText_o **)(v9 + 32);
    if ( !v10 )
      goto LABEL_33;
    if ( !QuestBoardInformaionText__IsQuestOpened(*(QuestBoardInformaionText_o **)(v9 + 32), v6) )
    {
      if ( !QuestBoardInformaionText__ChangeText(v10, &v5->fields.mOptionInfoLb, v11) )
        return;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Time = NetworkManager__getTime(0LL);
      v19 = v5;
      v20 = v8;
      goto LABEL_31;
    }
    this = (QuestBoardListViewItemDraw_o *)v5->fields.mInfoTextList;
    if ( !this )
      goto LABEL_33;
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
      v8,
      (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__RemoveAt__);
  }
  if ( (byte_4216D00 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, questBoardItem);
    byte_4216D00 = 1;
    mInfoTextList = v5->fields.mInfoTextList;
  }
  if ( mInfoTextList && mInfoTextList->fields._size )
  {
    this = (QuestBoardListViewItemDraw_o *)mInfoTextList->fields._items->m_Items[0];
    if ( !this )
LABEL_33:
      sub_B0D97C(this);
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
      v19 = v5;
      v20 = 0;
LABEL_31:
      QuestBoardListViewItemDraw__UpdateInfoText(v19, v16, v20, Time, v18);
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
  int32_t *v6; // x9
  int32_t v7; // w1
  int v8; // w8
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x0

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
    v11 = sub_B0D9A8(this);
    sub_B0D948(v11, 0LL);
  }
  v6 = (int32_t *)mRewardIconInfs->m_Items[(int)this];
  if ( !v6 )
    goto LABEL_18;
  v7 = v6[11];
  this = (QuestBoardListViewItemDraw_o *)v5->fields.mRewardIcon;
  v8 = v6[7];
  if ( v7 >= 1 )
  {
    if ( this )
    {
      if ( v8 <= 1 )
        v9 = -1;
      else
        v9 = v6[7];
      ItemIconComponent__SetItemImage_26857580((ItemIconComponent_o *)this, v7, v9, 0LL);
      return;
    }
LABEL_18:
    sub_B0D97C(this);
  }
  if ( !this )
    goto LABEL_18;
  if ( v8 <= 1 )
    v10 = -1;
  else
    v10 = v6[7];
  ItemIconComponent__SetGift((ItemIconComponent_o *)this, v6[5], v6[6], v10, 1, 0LL);
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
  unsigned int v9; // w8
  unsigned int v10; // w8

  if ( (byte_4216CF7 & 1) == 0 )
  {
    sub_B0D8A4(&System_Text_StringBuilder_TypeInfo, *(_QWORD *)&n);
    sub_B0D8A4(&StringLiteral_960/*"0"*/, v4);
    byte_4216CF7 = 1;
  }
  if ( n <= 0 )
    return (System_String_o *)StringLiteral_960/*"0"*/;
  v5 = n % 0xAu;
  v6 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, *(_QWORD *)&n, method);
  System_Text_StringBuilder___ctor_42149428(v6, 5, 0LL);
  if ( n >= 10 )
  {
    if ( n >= 100 )
    {
      v10 = n / 0x64u % 0xA;
      if ( v10 >= 2 )
      {
        if ( !v6 )
          goto LABEL_22;
        System_Text_StringBuilder__Append_42158644(v6, v10 | 0x60, 0LL);
      }
      else if ( !v6 )
      {
LABEL_22:
        sub_B0D97C(v7);
      }
      System_Text_StringBuilder__Append_42158644(v6, 0x6Bu, 0LL);
      v9 = n / 0xAu % 0xA;
    }
    else
    {
      if ( !v6 )
        goto LABEL_22;
      v9 = (unsigned __int8)n / 0xAu % 0xA;
    }
    if ( v9 >= 2 )
      System_Text_StringBuilder__Append_42158644(v6, v9 | 0x60, 0LL);
    System_Text_StringBuilder__Append_42158644(v6, 0x6Au, 0LL);
    if ( !v5 )
      return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v6->klass->vtable._3_ToString.method)(
                                  v6,
                                  v6->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  }
  else if ( !v6 )
  {
    goto LABEL_22;
  }
  System_Text_StringBuilder__Append_42158644(v6, v5 | 0x60, 0LL);
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
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x19
  struct MapControl_AreaBoardInfo_o *AreaBoardInfo_k__BackingField; // x22
  DataManager_o *v23; // x23
  int32_t warId; // w20
  EventCampaignMaster_o *MasterData_WarQuestSelectionMaster; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x23
  BoardMessageEntity_array *v29; // x22
  il2cpp_array_size_t v30; // w25
  BoardMessageEntity_o *v31; // x26
  System_String_o *message; // x28
  int64_t closedAt; // x19
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x27
  QuestBoardInformaionText_o *v35; // x0
  const MethodInfo *v36; // x6
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x24
  BoardMessageEntity_o *v38; // x1
  System_String_o *v39; // x2
  int64_t v40; // x3
  EventCampaignEntity_o *Data; // x0
  System_String_o *v42; // x19
  int64_t v43; // x28
  EventCampaignEntity_o *v44; // x20
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v45; // x27
  __int64 v46; // x1
  __int64 v47; // x2
  QuestBoardInformaionText_o *v48; // x24
  const MethodInfo *v49; // x6
  int64_t v50; // x28
  System_String_o *v51; // x19
  _BOOL4 HasFlag; // w25
  const MethodInfo *v53; // x3
  struct EventEntity_o *eventEnt; // x8
  BoardMessageEntity_o *OverrideQuestMessage; // x0
  BoardMessageEntity_o *v56; // x24
  __int64 v57; // x8
  BoardMessageEntity_o *v58; // x26
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v59; // x25
  System_String_o *v60; // x20
  int64_t endTime; // x19
  __int64 v62; // x1
  __int64 v63; // x2
  QuestBoardInformaionText_o *v64; // x24
  const MethodInfo *v65; // x6
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
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v78; // x25
  int64_t v79; // x20
  __int64 v80; // x1
  __int64 v81; // x2
  QuestBoardInformaionText_o *v82; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v83; // x24
  __int64 v84; // x0
  EventCampaignEntity_o *v85; // [xsp+0h] [xbp-B0h]
  const MethodInfo *v86; // [xsp+10h] [xbp-A0h]
  struct MapControl_QuestInfo_o *v87; // [xsp+20h] [xbp-90h]
  struct MapControl_AreaBoardInfo_o *v88; // [xsp+28h] [xbp-88h]
  DataMasterBase_WarMaster__WarEntity__int__o *v89; // [xsp+30h] [xbp-80h]
  int32_t v90; // [xsp+3Ch] [xbp-74h]
  DataManager_o *v91; // [xsp+40h] [xbp-70h]
  WarEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v95; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v96; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4216CD4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_BoardMessageMaster___, questBoardItem);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventCampaignMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMaster_WarMaster___, v8);
    sub_B0D8A4(&DataManager_TypeInfo, v9);
    sub_B0D8A4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v10);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v11);
    sub_B0D8A4(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__, v13);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v14);
    sub_B0D8A4(&QuestBoardInformaionText_TypeInfo, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B0D8A4(&StringLiteral_23617/*"{0}"*/, v17);
    sub_B0D8A4(&StringLiteral_13451/*"TIME_REST_QUEST_BOARD_EVENT"*/, v18);
    sub_B0D8A4(&StringLiteral_13449/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, v19);
    byte_4216CD4 = 1;
  }
  entity = 0LL;
  QuestBoardListViewItemDraw__ResetInfoTextList(this, (const MethodInfo *)questBoardItem);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
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
                                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  v89 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         v23,
                                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               v23,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_BoardMessageMaster___);
  if ( !Instance )
    goto LABEL_76;
  v91 = v23;
  v87 = quest_info_k__BackingField;
  v88 = AreaBoardInfo_k__BackingField;
  Instance = BoardMessageMaster__GetDataCondCheck((BoardMessageMaster_o *)Instance, warId, checkTime, 0LL);
  if ( !Instance )
    goto LABEL_76;
  v28 = *((_QWORD *)Instance + 3);
  v29 = (BoardMessageEntity_array *)Instance;
  v90 = warId;
  if ( (int)v28 >= 1 )
  {
    v30 = 0;
    while ( 1 )
    {
      v31 = v29->m_Items[v30];
      if ( !v31 )
        break;
      switch ( v31->fields.referenceType )
      {
        case 1:
          message = v31->fields.message;
          closedAt = v31->fields.closedAt;
          mInfoTextList = this->fields.mInfoTextList;
          v35 = (QuestBoardInformaionText_o *)sub_B0D974(QuestBoardInformaionText_TypeInfo, v26, v27);
          v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)v35;
          v38 = v31;
          v39 = message;
          v40 = closedAt;
          goto LABEL_28;
        case 2:
          Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                       v91,
                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !Instance )
            goto LABEL_76;
          Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                       v31->fields.referenceId,
                       (const MethodInfo_2669BD4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_30;
          v50 = *((int *)Instance + 39);
          break;
        case 3:
          Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                       v91,
                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !Instance )
            goto LABEL_76;
          Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                       v31->fields.referenceId,
                       (const MethodInfo_2669BD4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_30;
          v50 = *((int *)Instance + 40);
          break;
        case 4:
          Instance = v89;
          if ( !v89 )
            goto LABEL_76;
          Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       v89,
                       v31->fields.referenceId,
                       (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_30;
          v50 = *((_QWORD *)Instance + 12);
          break;
        case 5:
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_76;
          Data = EventCampaignMaster__getData(MasterData_WarQuestSelectionMaster, v31->fields.referenceId, 0LL);
          v42 = v31->fields.message;
          v43 = v31->fields.closedAt;
          v44 = Data;
          v45 = this->fields.mInfoTextList;
          v48 = (QuestBoardInformaionText_o *)sub_B0D974(QuestBoardInformaionText_TypeInfo, v46, v47);
          QuestBoardInformaionText___ctor_28495360(v48, v31, v42, v43, checkTime, v44, v49);
          if ( !v45 )
            goto LABEL_76;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v45,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v48,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
          warId = v90;
          goto LABEL_30;
        default:
          goto LABEL_30;
      }
      if ( v50 - checkTime >= 0 )
      {
        v51 = v31->fields.message;
        mInfoTextList = this->fields.mInfoTextList;
        v35 = (QuestBoardInformaionText_o *)sub_B0D974(QuestBoardInformaionText_TypeInfo, v26, v27);
        v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)v35;
        v38 = v31;
        v39 = v51;
        v40 = v50;
LABEL_28:
        QuestBoardInformaionText___ctor_28495360(v35, v38, v39, v40, checkTime, 0LL, v36);
        if ( !mInfoTextList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mInfoTextList,
          v37,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
      }
LABEL_30:
      if ( (int)++v30 >= (int)v28 )
        goto LABEL_33;
      if ( v30 >= v29->max_length )
        goto LABEL_77;
    }
LABEL_76:
    sub_B0D97C(Instance);
  }
LABEL_33:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Instance )
    goto LABEL_76;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         warId,
         (const MethodInfo_2669C30 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
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
  if ( v88->fields.eventEnt )
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
      eventEnt = v88->fields.eventEnt;
      if ( !eventEnt )
        goto LABEL_76;
      OverrideQuestMessage = QuestBoardListViewItemDraw__FindOverrideQuestMessage(
                               (QuestBoardListViewItemDraw_o *)Instance,
                               v29,
                               eventEnt->fields.id,
                               v53);
      if ( v88->fields.eventEnt )
      {
        v56 = OverrideQuestMessage;
        Instance = (void *)EventEntity__IsEventPeriod(v88->fields.eventEnt, checkTime, 0LL);
        if ( !v56 && ((unsigned __int8)Instance & 1) != 0 )
        {
          v57 = *(_QWORD *)&v29->max_length;
          if ( v57 )
          {
            if ( !(_DWORD)v57 )
              goto LABEL_77;
            v58 = v29->m_Items[0];
          }
          else
          {
            v58 = 0LL;
          }
          v59 = this->fields.mInfoTextList;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v60 = LocalizationManager__Get((System_String_o *)StringLiteral_13451/*"TIME_REST_QUEST_BOARD_EVENT"*/, 0LL);
          endTime = v87->fields.endTime;
          v64 = (QuestBoardInformaionText_o *)sub_B0D974(QuestBoardInformaionText_TypeInfo, v62, v63);
          QuestBoardInformaionText___ctor_28495360(v64, v58, v60, endTime, checkTime, 0LL, v65);
          if ( !v59 )
            goto LABEL_76;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v59,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v64,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
          warId = v90;
        }
      }
    }
  }
  Instance = v89;
  if ( !v89 )
    goto LABEL_76;
  Instance = EventMaster__GetEnableEntityList((EventMaster_o *)v89, 7, 1, 0LL);
  if ( !Instance )
    goto LABEL_76;
  v66 = *((_DWORD *)Instance + 6);
  v67 = Instance;
  if ( v66 >= 1 )
  {
    v68 = 0;
    while ( v68 < v66 )
    {
      v69 = (EventEntity_o *)*((_QWORD *)v67 + (int)v68 + 4);
      if ( !v69 || !MasterData_WarQuestSelectionMaster )
        goto LABEL_76;
      id = v69->fields.id;
      Instance = EventCampaignMaster__getData(MasterData_WarQuestSelectionMaster, id, 0LL);
      if ( Instance )
      {
        v71 = Instance;
        Instance = (void *)EventCampaignEntity__isDispWarId((EventCampaignEntity_o *)Instance, warId, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          v73 = v71[5];
          v74 = QuestBoardListViewItemDraw__FindOverrideQuestMessage(
                  (QuestBoardListViewItemDraw_o *)Instance,
                  v29,
                  id,
                  v72);
          Instance = (void *)CombineAdjustTarget__isTerminalExposable(v73, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 && !v74 )
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v75 = LocalizationManager__Get((System_String_o *)StringLiteral_13449/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, 0LL);
            EventName = (Il2CppObject *)EventEntity__getEventName(v69, 0LL);
            v77 = System_String__Format_43845440(v75, EventName, (Il2CppObject *)StringLiteral_23617/*"{0}"*/, 0LL);
            v78 = this->fields.mInfoTextList;
            v79 = EventEntity__GetEndTime(v69, 0, 0LL);
            v82 = (QuestBoardInformaionText_o *)sub_B0D974(QuestBoardInformaionText_TypeInfo, v80, v81);
            v96.fields.r = 0.0;
            v96.fields.g = 0.0;
            v96.fields.b = 0.0;
            v96.fields.a = 0.0;
            v95.fields.x = 0.0;
            v95.fields.y = 0.0;
            v95.fields.z = 0.0;
            v83 = (EventMissionProgressRequest_Argument_ProgressData_o *)v82;
            QuestBoardInformaionText___ctor(v82, v77, v79, 1, 0, v96, -1, 0, v95, 1, v85, 0LL, v86);
            if ( !v78 )
              goto LABEL_76;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v78,
              v83,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
            warId = v90;
          }
        }
      }
      v66 = *((_DWORD *)v67 + 6);
      if ( (int)++v68 >= v66 )
        return;
    }
LABEL_77:
    v84 = sub_B0D9A8(Instance);
    sub_B0D948(v84, 0LL);
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
  QuestBoardListViewItemDraw___c__DisplayClass342_0_o *v30; // x25
  WarQuestSelectionMaster_o *isTerminalExposable; // x0
  int target; // w26
  QuestBoardInformaionText_o *v33; // x27
  int32_t id; // w27
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  struct ListViewManager_o *manager; // x8
  __int64 v37; // x10
  const MethodInfo *v38; // x3
  System_Collections_Generic_List_UserOwnItemInfo__o *ContinueItemInfoList; // x20
  __int64 v40; // x1
  __int64 v41; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v42; // x21
  peRenderTexture_ChangeLayerObject_o *v43; // x0
  UserOwnItemInfo_o *v44; // x20
  System_String_o *v45; // x21
  Il2CppObject *v46; // x0
  System_String_o *v47; // x21
  System_String_o *EventName; // x22
  int32_t ImageId; // w20
  __int64 v50; // x1
  __int64 v51; // x2
  TerminalBoardOptionTextData_o *dispTextExtend; // x23
  int64_t v53; // x19
  __int64 v54; // x1
  __int64 v55; // x2
  System_String_o *v56; // x0
  System_String_o *v57; // x20
  int64_t EndTime; // x19
  __int64 v59; // x1
  __int64 v60; // x2
  QuestPhaseEntity_o *Entity; // x0
  struct System_Int32_array *targetIds; // x8
  int32_t consumeType; // w8
  System_String_o *v64; // x20
  Il2CppObject *v65; // x0
  System_String_o *v66; // x20
  int64_t v67; // x19
  __int64 v68; // x1
  __int64 v69; // x2
  QuestBoardInformaionText_o *v70; // x0
  int v71; // s0
  int v72; // s1
  int v73; // s2
  int v74; // s3
  int v75; // s4
  int v76; // s5
  int v77; // s6
  QuestBoardInformaionText_o *result; // x0
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x21
  System_String_o *detail; // x23
  int64_t v81; // x0
  int64_t checkTime; // x24
  int64_t v83; // x25
  __int64 v84; // x1
  __int64 v85; // x2
  QuestBoardInformaionText_o *v86; // x22
  const MethodInfo *v87; // x6
  QuestBoardListViewItemDraw_o *v88; // x0
  QuestEntity_o *v89; // x1
  EventCampaignEntity_o *v90; // x2
  bool v91; // w3
  int32_t *v92; // x4
  int32_t *v93; // x5
  const MethodInfo *v94; // x6
  EventCampaignEntity_o *v95; // [xsp+0h] [xbp-70h]
  const MethodInfo *v96; // [xsp+10h] [xbp-60h]
  int32_t Num_k__BackingField; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v98; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Vector3_o v99; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v100; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v101; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4216CFB & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventCampaignReleaseMaster___, questEntity);
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestPhaseMaster___, v13);
    sub_B0D8A4(&DataManager_TypeInfo, v14);
    sub_B0D8A4(&int_TypeInfo, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserOwnItemInfo__Find__, v17);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v18);
    sub_B0D8A4(&Method_System_Predicate_UserOwnItemInfo___ctor__, v19);
    sub_B0D8A4(&System_Predicate_UserOwnItemInfo__TypeInfo, v20);
    sub_B0D8A4(&QuestBoardInformaionText_TypeInfo, v21);
    sub_B0D8A4(&QuestBoardListViewManager_TypeInfo, v22);
    sub_B0D8A4(&TerminalBoardOptionTextData_TypeInfo, v23);
    sub_B0D8A4(&Method_QuestBoardListViewItemDraw___c__DisplayClass342_0__CreateQuestBoardInformationText_b__0__, v24);
    sub_B0D8A4(&QuestBoardListViewItemDraw___c__DisplayClass342_0_TypeInfo, v25);
    sub_B0D8A4(&StringLiteral_23617/*"{0}"*/, v26);
    sub_B0D8A4(&StringLiteral_1/*""*/, v27);
    sub_B0D8A4(&StringLiteral_13449/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, v28);
    sub_B0D8A4(&StringLiteral_13450/*"TIME_REST_QUEST_BOARD_CAMPAIGN_WITH_ITEM"*/, v29);
    byte_4216CFB = 1;
  }
  v30 = (QuestBoardListViewItemDraw___c__DisplayClass342_0_o *)sub_B0D974(
                                                                 QuestBoardListViewItemDraw___c__DisplayClass342_0_TypeInfo,
                                                                 questEntity,
                                                                 eventEnt);
  QuestBoardListViewItemDraw___c__DisplayClass342_0___ctor(v30, 0LL);
  if ( !eventCampaignEnt )
    goto LABEL_61;
  target = eventCampaignEnt->fields.target;
  isTerminalExposable = (WarQuestSelectionMaster_o *)CombineAdjustTarget__isTerminalExposable(target, 0LL);
  v33 = 0LL;
  if ( ((unsigned __int8)isTerminalExposable & 1) == 0 )
    return v33;
  if ( !eventEnt )
    goto LABEL_61;
  id = eventEnt->fields.id;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  isTerminalExposable = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventCampaignReleaseMaster___);
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
        v56 = LocalizationManager__Get((System_String_o *)StringLiteral_13449/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, 0LL);
        v57 = System_String__Format_43845440(
                v56,
                (Il2CppObject *)eventCampaignEnt->fields.entryCondMessage,
                (Il2CppObject *)StringLiteral_23617/*"{0}"*/,
                0LL);
        EndTime = EventEntity__GetEndTime(eventEnt, 0, 0LL);
        v33 = (QuestBoardInformaionText_o *)sub_B0D974(QuestBoardInformaionText_TypeInfo, v59, v60);
        v101.fields.r = 0.0;
        v101.fields.g = 0.0;
        v101.fields.b = 0.0;
        v101.fields.a = 0.0;
        v99.fields.x = 0.0;
        v99.fields.y = 0.0;
        v99.fields.z = 0.0;
        QuestBoardInformaionText___ctor(v33, v57, EndTime, 0, 0, v101, -1, 0, v99, 0, v95, 0LL, v96);
        return v33;
      }
      return 0LL;
    }
    if ( target == 28 )
    {
      ContinueItemInfoList = UserOwnItemDetail__GetContinueItemInfoList(0LL);
      v42 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                       System_Predicate_UserOwnItemInfo__TypeInfo,
                                                                       v40,
                                                                       v41);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v42,
        (Il2CppObject *)v30,
        Method_QuestBoardListViewItemDraw___c__DisplayClass342_0__CreateQuestBoardInformationText_b__0__,
        (const MethodInfo_2AF7E30 *)Method_System_Predicate_UserOwnItemInfo___ctor__);
      if ( ContinueItemInfoList )
      {
        v43 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)ContinueItemInfoList,
                (System_Predicate_T__o *)v42,
                (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_UserOwnItemInfo__Find__);
        if ( v43 )
        {
          v44 = (UserOwnItemInfo_o *)v43;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v45 = LocalizationManager__Get((System_String_o *)StringLiteral_13450/*"TIME_REST_QUEST_BOARD_CAMPAIGN_WITH_ITEM"*/, 0LL);
          Num_k__BackingField = v44->fields._Num_k__BackingField;
          v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Num_k__BackingField);
          v47 = System_String__Format_43845440(v45, v46, (Il2CppObject *)StringLiteral_23617/*"{0}"*/, 0LL);
          EventName = EventEntity__getEventName(eventEnt, 0LL);
          ImageId = UserOwnItemInfo__get_ImageId(v44, 0LL);
          dispTextExtend = (TerminalBoardOptionTextData_o *)sub_B0D974(TerminalBoardOptionTextData_TypeInfo, v50, v51);
          TerminalBoardOptionTextData___ctor(dispTextExtend, EventName, v47, ImageId, 0LL);
          v53 = EventEntity__GetEndTime(eventEnt, 0, 0LL);
          v33 = (QuestBoardInformaionText_o *)sub_B0D974(QuestBoardInformaionText_TypeInfo, v54, v55);
          v100.fields.r = 0.0;
          v100.fields.g = 0.0;
          v100.fields.b = 0.0;
          v100.fields.a = 0.0;
          v98.fields.x = 0.0;
          v98.fields.y = 0.0;
          v98.fields.z = 0.0;
          QuestBoardInformaionText___ctor(v33, v47, v53, 1, 0, v100, -1, 0, v98, 0, v95, dispTextExtend, v96);
          return v33;
        }
        return 0LL;
      }
LABEL_61:
      sub_B0D97C(isTerminalExposable);
    }
    if ( target == 25 && !isQuestNoneCleared )
      return 0LL;
    if ( target > 24 )
    {
      if ( target == 26 )
      {
        mInfoTextList = this->fields.mInfoTextList;
        detail = eventEnt->fields.detail;
        v81 = EventEntity__GetEndTime(eventEnt, 0, 0LL);
        checkTime = v30->fields.checkTime;
        v83 = v81;
        v86 = (QuestBoardInformaionText_o *)sub_B0D974(QuestBoardInformaionText_TypeInfo, v84, v85);
        QuestBoardInformaionText___ctor_28495784(v86, eventEnt, detail, v83, checkTime, eventCampaignEnt, v87);
        if ( !mInfoTextList )
          goto LABEL_61;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mInfoTextList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v86,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
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
              v38) )
        return 0LL;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      isTerminalExposable = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
    v64 = LocalizationManager__Get((System_String_o *)StringLiteral_13449/*"TIME_REST_QUEST_BOARD_CAMPAIGN"*/, 0LL);
    v65 = (Il2CppObject *)EventEntity__getEventName(eventEnt, 0LL);
    v66 = System_String__Format_43845440(v64, v65, (Il2CppObject *)StringLiteral_23617/*"{0}"*/, 0LL);
    v67 = EventEntity__GetEndTime(eventEnt, 0, 0LL);
    v70 = (QuestBoardInformaionText_o *)sub_B0D974(QuestBoardInformaionText_TypeInfo, v68, v69);
    v33 = v70;
    v71 = 0;
    v72 = 0;
    v73 = 0;
    v74 = 0;
    v75 = 0;
    v76 = 0;
    v77 = 0;
    QuestBoardInformaionText___ctor(
      v70,
      v66,
      v67,
      1,
      0,
      *(UnityEngine_Color_o *)&v71,
      -1,
      0,
      *(UnityEngine_Vector3_o *)&v75,
      0,
      v95,
      0LL,
      v96);
    return v33;
  }
  sub_B0DC70(manager);
  QuestBoardListViewItemDraw__CalcQuestCost(v88, v89, v90, v91, v92, v93, v94);
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
    sub_B0D97C(this);
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
  if ( (byte_4216D0D & 1) == 0 )
  {
    sub_B0D8A4(&QuestBoardListViewItemDraw_TypeInfo, method);
    byte_4216D0D = 1;
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
  return System_String__Concat_43849904(QUEST_BOARD_AP_SPNAME_PREFIX, v4, 0LL);
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
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  int64_t *manager; // x8
  __int64 v34; // x10
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  QuestReleaseOverwriteEntity_o *v36; // x20
  int64_t endedAt; // x20
  System_String_o *EventName; // x21
  System_String_o *v39; // x0
  System_String_o *v40; // x21
  __int64 v41; // x1
  __int64 v42; // x2
  QuestBoardInformaionText_o *v43; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v44; // x22
  QuestBoardListViewItemDraw_o *v46; // x0
  System_Collections_Generic_List_MapControl_QuestInfo__o *v47; // x1
  int32_t v48; // w2
  bool v49; // w3
  const MethodInfo *v50; // x4
  EventCampaignEntity_o *v51; // [xsp+0h] [xbp-60h]
  const MethodInfo *v52; // [xsp+10h] [xbp-50h]
  WarEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v54; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v55; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4216CF8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventMaster___, *(_QWORD *)&questId);
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___, v13);
    sub_B0D8A4(&DataManager_TypeInfo, v14);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__, v18);
    sub_B0D8A4(&System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo, v19);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v20);
    sub_B0D8A4(&QuestBoardInformaionText_TypeInfo, v21);
    sub_B0D8A4(&QuestBoardListViewManager_TypeInfo, v22);
    sub_B0D8A4(&StringLiteral_23617/*"{0}"*/, v23);
    sub_B0D8A4(&StringLiteral_80/*" "*/, v24);
    sub_B0D8A4(&StringLiteral_13454/*"TIME_REST_STRING"*/, v25);
    byte_4216CF8 = 1;
  }
  entity = 0LL;
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo,
                                                                                                  *(_QWORD *)&questId,
                                                                                                  *(_QWORD *)&phase);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
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
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
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
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestReleaseOverwriteMaster___);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_27;
  manager = (int64_t *)mListViewObject->fields.manager;
  if ( !manager )
    goto LABEL_27;
  v34 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*manager + 300) >= (unsigned int)v34
    && *(QuestBoardListViewManager_c **)(*(_QWORD *)(*manager + 200) + 8 * v34 - 8) == QuestBoardListViewManager_TypeInfo )
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
    v36 = EntityByQuestIdAndTime;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !CampaignTextListByEventQuestMaster )
      goto LABEL_27;
    if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            (DataMasterBase_WarMaster__WarEntity__int__o *)CampaignTextListByEventQuestMaster,
            &entity,
            v36->fields.eventId,
            (const MethodInfo_2669C30 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v26;
    CampaignTextListByEventQuestMaster = (System_Collections_Generic_IEnumerable_T__o *)entity;
    if ( entity )
    {
      if ( LODWORD(entity->fields.age) == 25 )
      {
        endedAt = v36->fields.endedAt;
        if ( endedAt <= 0 )
          endedAt = *(_QWORD *)&entity->fields.eventId;
        EventName = EventEntity__getEventName((EventEntity_o *)entity, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v39 = LocalizationManager__Get((System_String_o *)StringLiteral_13454/*"TIME_REST_STRING"*/, 0LL);
        v40 = System_String__Concat_43853316(
                EventName,
                (System_String_o *)StringLiteral_80/*" "*/,
                v39,
                (System_String_o *)StringLiteral_23617/*"{0}"*/,
                0LL);
        v43 = (QuestBoardInformaionText_o *)sub_B0D974(QuestBoardInformaionText_TypeInfo, v41, v42);
        v55.fields.r = 0.0;
        v55.fields.g = 0.0;
        v55.fields.b = 0.0;
        v55.fields.a = 0.0;
        v54.fields.x = 0.0;
        v54.fields.y = 0.0;
        v54.fields.z = 0.0;
        v44 = (EventMissionProgressRequest_Argument_ProgressData_o *)v43;
        QuestBoardInformaionText___ctor(v43, v40, endedAt, 0, 0, v55, -1, 0, v54, 1, v51, 0LL, v52);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v26,
          v44,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
      }
      return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v26;
    }
LABEL_27:
    sub_B0D97C(CampaignTextListByEventQuestMaster);
  }
  sub_B0DC70(manager);
  return (System_Collections_Generic_List_QuestBoardInformaionText__o *)QuestBoardListViewItemDraw__HasNewQuestInWar(
                                                                          v46,
                                                                          v47,
                                                                          v48,
                                                                          v49,
                                                                          v50);
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
  DataManager_o *v34; // x20
  EventQuestMaster_o *MasterData_WarQuestSelectionMaster; // x19
  EventCampaignMaster_o *v36; // x28
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  QuestEntity_o *v38; // x23
  __int64 v39; // x9
  EventCampaignReleaseMaster_o *v40; // x27
  __int64 v41; // x1
  __int64 v42; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v43; // x19
  __int64 v44; // x1
  __int64 v45; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v46; // x26
  int monitor; // w8
  unsigned int v48; // w22
  EventEntity_o *v49; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v50; // x20
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x27
  __int64 v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **current; // x1
  __int64 v62; // x1
  __int64 v63; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v64; // x20
  EventEntity_o *v65; // x0
  const MethodInfo *v66; // x6
  EventMissionProgressRequest_Argument_ProgressData_o *QuestBoardInformationText; // x1
  System_Collections_Generic_List_EventCampaignEntity__o *v68; // x20
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x25
  __int64 v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Int32_array **v79; // x1
  __int64 v80; // x1
  __int64 v81; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v82; // x20
  QuestBoardListViewItemDraw_o *v83; // x0
  const MethodInfo *v84; // x6
  int v85; // w19
  System_Collections_Generic_List_QuestBoardInformaionText__o *result; // x0
  __int64 v87; // x0
  void *v88; // x0
  int v89; // w1
  __int64 v90; // x19
  System_Collections_Generic_List_EventCampaignEntity__o *campaignList; // [xsp+8h] [xbp-C8h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v92; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_T__o v97; // [xsp+38h] [xbp-98h] BYREF
  int v98[2]; // [xsp+50h] [xbp-80h]
  int v99; // [xsp+58h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v100; // [xsp+60h] [xbp-70h] BYREF

  EnabledEventCampaignForQuest = (System_Collections_Generic_IEnumerable_TSource__o *)(unsigned int)questId;
  if ( (byte_4216CF9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventCampaignMaster___, *(_QWORD *)&questId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventQuestMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, v11);
    sub_B0D8A4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v12);
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v16);
    sub_B0D8A4(&Method_System_Func_EventEntity__bool___ctor__, v17);
    sub_B0D8A4(&System_Func_EventEntity__bool__TypeInfo, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__, v23);
    sub_B0D8A4(&System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo, v24);
    sub_B0D8A4(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v25);
    sub_B0D8A4(&QuestBoardListViewManager_TypeInfo, v26);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_B0D8A4(
      &Method_QuestBoardListViewItemDraw___c__DisplayClass340_0__GetCampaignTextListByEventQuestMaster_b__0__,
      v28);
    sub_B0D8A4(&QuestBoardListViewItemDraw___c__DisplayClass340_0_TypeInfo, v29);
    sub_B0D8A4(
      &Method_QuestBoardListViewItemDraw___c__DisplayClass340_1__GetCampaignTextListByEventQuestMaster_b__1__,
      v30);
    sub_B0D8A4(&QuestBoardListViewItemDraw___c__DisplayClass340_1_TypeInfo, v31);
    byte_4216CF9 = 1;
  }
  memset(&v100, 0, sizeof(v100));
  v99 = 0;
  v92 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo,
                                                                                                  *(_QWORD *)&questId,
                                                                                                  *(_QWORD *)&phase);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v92,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
  v32 = &Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  v34 = (DataManager_o *)Instance;
  MasterData_WarQuestSelectionMaster = (EventQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventQuestMaster___);
  v36 = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   v34,
                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               v34,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_41;
  Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               (int32_t)EnabledEventCampaignForQuest,
               (const MethodInfo_2669BD4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_41;
  v38 = (QuestEntity_o *)Instance;
  Instance = mListViewObject->fields.manager;
  if ( !Instance )
    goto LABEL_41;
  v39 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v39
    && *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v39 - 8) == QuestBoardListViewManager_TypeInfo )
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_41;
    v40 = (EventCampaignReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
    v43 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                                                                    v41,
                                                                                                    v42);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v43,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    v46 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                                                                    v44,
                                                                                                    v45);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v46,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    if ( !EnabledEventCampaignForQuest )
      goto LABEL_41;
    monitor = (int)EnabledEventCampaignForQuest[1].monitor;
    if ( monitor >= 1 )
    {
      v48 = 0;
      while ( 1 )
      {
        if ( v48 >= monitor )
        {
          v87 = sub_B0D9A8(Instance);
          sub_B0D948(v87, 0LL);
        }
        v49 = (EventEntity_o *)*((_QWORD *)&EnabledEventCampaignForQuest[2].klass + (int)v48);
        if ( !v49 || !v36 )
          break;
        Instance = EventCampaignMaster__getData(v36, v49->fields.id, 0LL);
        if ( Instance )
        {
          if ( !v43 )
            break;
          v50 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v43,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
          if ( !v40 )
            break;
          Instance = (void *)EventCampaignReleaseMaster__isRelease(
                               v40,
                               v50->fields.missionTargetId,
                               v50->fields.missionConditionDetailId,
                               0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v46 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v46,
              v50,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
          }
        }
        monitor = (int)EnabledEventCampaignForQuest[1].monitor;
        if ( (int)++v48 >= monitor )
          goto LABEL_24;
      }
LABEL_41:
      sub_B0D97C(Instance);
    }
LABEL_24:
    Instance = EventCampaignMaster__CheckCampaignGrouping(
                 (System_Collections_Generic_List_EventCampaignEntity__o *)v43,
                 0LL);
    if ( !Instance )
      goto LABEL_41;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v97,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v36 = (EventCampaignMaster_o *)&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__;
    v32 = &Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___;
    v100 = v97;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v100,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
    {
      v53 = sub_B0D974(QuestBoardListViewItemDraw___c__DisplayClass340_0_TypeInfo, v51, v52);
      QuestBoardListViewItemDraw___c__DisplayClass340_0___ctor(
        (QuestBoardListViewItemDraw___c__DisplayClass340_0_o *)v53,
        0LL);
      if ( !v53 )
        sub_B0D97C(v54);
      current = (System_Int32_array **)v100.fields.current;
      *(_QWORD *)(v53 + 16) = v100.fields.current;
      sub_B0D840((BattleServantConfConponent_o *)(v53 + 16), current, v55, v56, v57, v58, v59, v60);
      v64 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                 System_Func_EventEntity__bool__TypeInfo,
                                                                                 v62,
                                                                                 v63);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v64,
        (Il2CppObject *)v53,
        Method_QuestBoardListViewItemDraw___c__DisplayClass340_0__GetCampaignTextListByEventQuestMaster_b__0__,
        (const MethodInfo_26189B8 *)Method_System_Func_EventEntity__bool___ctor__);
      v65 = (EventEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                               EnabledEventCampaignForQuest,
                               (System_Func_TSource__bool__o *)v64,
                               (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___);
      QuestBoardInformationText = (EventMissionProgressRequest_Argument_ProgressData_o *)QuestBoardListViewItemDraw__CreateQuestBoardInformationText(
                                                                                           this,
                                                                                           v38,
                                                                                           v65,
                                                                                           *(EventCampaignEntity_o **)(v53 + 16),
                                                                                           phase,
                                                                                           isQuestNoneCleared,
                                                                                           v66);
      if ( QuestBoardInformationText )
      {
        if ( !v92 )
          sub_B0D97C(0LL);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v92,
          QuestBoardInformationText,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
      }
    }
    v98[0] = 309;
    v99 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v100,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    v68 = (System_Collections_Generic_List_EventCampaignEntity__o *)v46;
    v99 = 0;
  }
  else
  {
    sub_B0DC70(Instance);
    v68 = campaignList;
    if ( v89 != 1 )
      _Unwind_Resume(v88);
    v90 = *(_QWORD *)__cxa_begin_catch(v88);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v100,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    if ( v90 )
      sub_B0D948(v90, 0LL);
  }
  Instance = EventCampaignMaster__CheckCampaignGrouping(v68, 0LL);
  if ( !Instance )
    goto LABEL_41;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v97,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v100 = v97;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v100,
            (const MethodInfo_2112550 *)v36->klass) )
  {
    v71 = sub_B0D974(QuestBoardListViewItemDraw___c__DisplayClass340_1_TypeInfo, v69, v70);
    QuestBoardListViewItemDraw___c__DisplayClass340_1___ctor(
      (QuestBoardListViewItemDraw___c__DisplayClass340_1_o *)v71,
      0LL);
    if ( !v71 )
      sub_B0D97C(v72);
    v79 = (System_Int32_array **)v100.fields.current;
    *(_QWORD *)(v71 + 16) = v100.fields.current;
    sub_B0D840((BattleServantConfConponent_o *)(v71 + 16), v79, v73, v74, v75, v76, v77, v78);
    v82 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                               System_Func_EventEntity__bool__TypeInfo,
                                                                               v80,
                                                                               v81);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v82,
      (Il2CppObject *)v71,
      Method_QuestBoardListViewItemDraw___c__DisplayClass340_1__GetCampaignTextListByEventQuestMaster_b__1__,
      (const MethodInfo_26189B8 *)Method_System_Func_EventEntity__bool___ctor__);
    v83 = (QuestBoardListViewItemDraw_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                            EnabledEventCampaignForQuest,
                                            (System_Func_TSource__bool__o *)v82,
                                            (const MethodInfo_1B4C408 *)*v32);
    QuestBoardListViewItemDraw__CalcQuestCost(
      v83,
      v38,
      *(EventCampaignEntity_o **)(v71 + 16),
      isQuestNoneCleared,
      costCalcVal,
      fixedVal,
      v84);
  }
  v98[0] = 415;
  v85 = ++v99;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v100,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  result = (System_Collections_Generic_List_QuestBoardInformaionText__o *)v92;
  if ( v85 && v98[v85 - 1] == 415 )
    v99 = v85 - 1;
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
  DataManager_o *v21; // x20
  EventMaster_o *MasterData_WarQuestSelectionMaster; // x19
  EventCampaignMaster_o *v23; // x24
  QuestEntity_o *v24; // x26
  DataManager_o *v25; // x27
  int32_t spotId; // w19
  int32_t v27; // w28
  int datalist; // w8
  unsigned int v29; // w22
  bool v30; // w25
  EventEntity_o *v31; // x19
  struct System_Byte_array *masterDataBytes; // x8
  EventCampaignEntity_o *v33; // x20
  const MethodInfo *v34; // x6
  QuestBoardInformaionText_o *QuestBoardInformationText; // x19
  const MethodInfo *v36; // x6
  __int64 v38; // x0
  WarEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_4216CFA & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventCampaignMaster___, *(_QWORD *)&questId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SpotMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMasterData_WarGroupMaster___, v12);
    sub_B0D8A4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v13);
    sub_B0D8A4(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__, v16);
    sub_B0D8A4(&System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_4216CFA = 1;
  }
  entity = 0LL;
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo,
                                                                                                  *(_QWORD *)&questId,
                                                                                                  *(_QWORD *)&phase);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  v21 = Instance;
  MasterData_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          Instance,
                                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
  v23 = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   v21,
                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                v21,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                questId,
                                (const MethodInfo_2669BD4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_29;
  v24 = (QuestEntity_o *)Instance;
  Instance = (DataManager_o *)EventMaster__GetEnableEntityList(MasterData_WarQuestSelectionMaster, 7, 1, 0LL);
  if ( !v24 )
    goto LABEL_29;
  v25 = Instance;
  spotId = v24->fields.spotId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                &entity,
                                spotId,
                                (const MethodInfo_2669C30 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_29;
    v27 = *(&entity->fields.id + 1);
    if ( v27 )
    {
      if ( !v25 )
        goto LABEL_29;
      datalist = (int)v25->fields.datalist;
      if ( datalist >= 1 )
      {
        v29 = 0;
        v30 = isQuestNoneCleared;
        while ( 1 )
        {
          if ( v29 >= datalist )
          {
            v38 = sub_B0D9A8(Instance);
            sub_B0D948(v38, 0LL);
          }
          v31 = (EventEntity_o *)*((_QWORD *)&v25->fields.lookup + (int)v29);
          if ( !v31 || !v23 )
            break;
          Instance = (DataManager_o *)EventCampaignMaster__getData(v23, v31->fields.id, 0LL);
          if ( Instance )
          {
            masterDataBytes = Instance->fields.masterDataBytes;
            v33 = (EventCampaignEntity_o *)Instance;
            if ( !masterDataBytes )
              break;
            if ( *(_QWORD *)&masterDataBytes->max_length )
            {
              Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                break;
              Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            Instance,
                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_WarGroupMaster___);
              if ( !Instance )
                break;
              Instance = (DataManager_o *)WarGroupMaster__HasEntity(
                                            (WarGroupMaster_o *)Instance,
                                            v27,
                                            v24->fields.afterClear,
                                            v24->fields.type,
                                            v33->fields.targetIds,
                                            0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                QuestBoardInformationText = QuestBoardListViewItemDraw__CreateQuestBoardInformationText(
                                              this,
                                              v24,
                                              v31,
                                              v33,
                                              phase,
                                              v30,
                                              v34);
                QuestBoardListViewItemDraw__CalcQuestCost(
                  (QuestBoardListViewItemDraw_o *)QuestBoardInformationText,
                  v24,
                  v33,
                  v30,
                  costCalcVal,
                  fixedVal,
                  v36);
                if ( QuestBoardInformationText )
                {
                  if ( !v19 )
                    break;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v19,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)QuestBoardInformationText,
                    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
                }
              }
            }
          }
          datalist = (int)v25->fields.datalist;
          if ( (int)++v29 >= datalist )
            return (System_Collections_Generic_List_QuestBoardInformaionText__o *)v19;
        }
LABEL_29:
        sub_B0D97C(Instance);
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

  if ( (byte_4216CE1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, questEnt);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    this = (QuestBoardListViewItemDraw_o *)sub_B0D8A4(&StringLiteral_23617/*"{0}"*/, v8);
    byte_4216CE1 = 1;
  }
  if ( !questEnt )
    goto LABEL_13;
  this = (QuestBoardListViewItemDraw_o *)QuestEntity__getQuestName(questEnt, 0LL);
  v9 = (System_String_o *)this;
  if ( (unsigned int)questType <= 5 && ((1 << questType) & 0x2C) != 0 )
  {
    if ( !this )
      goto LABEL_13;
    if ( System_String__Contains((System_String_o *)this, (System_String_o *)StringLiteral_23617/*"{0}"*/, 0LL) )
    {
      this = (QuestBoardListViewItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)this,
                                                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
        this = (QuestBoardListViewItemDraw_o *)QuestEntity__getServantId(questEnt, 0LL);
        if ( MasterData_WarQuestSelectionMaster )
        {
          this = (QuestBoardListViewItemDraw_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                   MasterData_WarQuestSelectionMaster,
                                                   (int32_t)this,
                                                   (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( this )
          {
            BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)this, 0, -1, 0LL);
            return System_String__Format(v9, BattleName, 0LL);
          }
        }
      }
LABEL_13:
      sub_B0D97C(this);
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
  int32_t v14; // w2
  __int64 v15; // x21
  EventAddEntity_o *OverwriteEventAddEntity; // x0
  WarEntity_o *Entity; // x0
  QuestBoardListViewItemDraw_c *v18; // x8
  System_String_o *EVENT_WAR_SUBFOLDER_SPNAME_PREFIX; // x20
  Il2CppObject *v20; // x0
  QuestBoardListViewItemDraw_c *v22; // x0
  System_String_o *EVENT_WAR_SPNAME_PREFIX; // x19
  System_String_o *v24; // x0
  int32_t v25; // [xsp+8h] [xbp-28h] BYREF
  int32_t overwriteId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4216CE9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventAddMaster___, eventEnt);
    sub_B0D8A4(&Method_DataManager_GetMaster_WarMaster___, v8);
    sub_B0D8A4(&DataManager_TypeInfo, v9);
    sub_B0D8A4(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v10);
    sub_B0D8A4(&int_TypeInfo, v11);
    sub_B0D8A4(&QuestBoardListViewItemDraw_TypeInfo, v12);
    byte_4216CE9 = 1;
  }
  overwriteId = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventAddMaster___);
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
  Master_WarQuestSelectionMaster = (EventAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_37;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
             warId,
             (const MethodInfo_2669BD4 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( Entity
    && Entity->fields.parentWarId
    && Entity->fields.eventId == eventEnt->fields.id
    && WarEntity__HasFlag(Entity, 0x80000, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      Master_WarQuestSelectionMaster = (EventAddMaster_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                             (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                             warId,
                                                             (const MethodInfo_2669BD4 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
      if ( Master_WarQuestSelectionMaster )
      {
        overwriteId = WarEntity__GetPrioredBannerId((WarEntity_o *)Master_WarQuestSelectionMaster, 0LL);
        v18 = QuestBoardListViewItemDraw_TypeInfo;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v18 = QuestBoardListViewItemDraw_TypeInfo;
        }
        EVENT_WAR_SUBFOLDER_SPNAME_PREFIX = v18->static_fields->EVENT_WAR_SUBFOLDER_SPNAME_PREFIX;
        v25 = overwriteId;
        v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
        return System_String__Format(EVENT_WAR_SUBFOLDER_SPNAME_PREFIX, v20, 0LL);
      }
    }
LABEL_37:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  v22 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v22 = QuestBoardListViewItemDraw_TypeInfo;
  }
  EVENT_WAR_SPNAME_PREFIX = v22->static_fields->EVENT_WAR_SPNAME_PREFIX;
  v24 = System_Int32__ToString((int32_t)&overwriteId, 0LL);
  return System_String__Concat_43849904(EVENT_WAR_SPNAME_PREFIX, v24, 0LL);
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

  if ( (byte_4216CE0 & 1) == 0 )
  {
    sub_B0D8A4(&QuestBoardListViewItemDraw_TypeInfo, *(_QWORD *)&questType);
    sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    byte_4216CE0 = 1;
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

  if ( (byte_4216CF6 & 1) == 0 )
  {
    sub_B0D8A4(&QuestBoardListViewItemDraw_TypeInfo, *(_QWORD *)&phaseType);
    byte_4216CF6 = 1;
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

  if ( (byte_4216CF5 & 1) == 0 )
  {
    sub_B0D8A4(&QuestBoardListViewItemDraw_TypeInfo, *(_QWORD *)&phaseType);
    sub_B0D8A4(&StringLiteral_1/*""*/, v12);
    byte_4216CF5 = 1;
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

  if ( (byte_4216CE2 & 1) == 0 )
  {
    sub_B0D8A4(&QuestBoardListViewItemDraw_TypeInfo, questEnt);
    sub_B0D8A4(&StringLiteral_19655/*"img_questtxt_free"*/, v6);
    sub_B0D8A4(&StringLiteral_19654/*"img_questtxt_event"*/, v7);
    this = (QuestBoardListViewItemDraw_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v8);
    byte_4216CE2 = 1;
  }
  if ( !questEnt )
    sub_B0D97C(this);
  iconId = questEnt->fields.iconId;
  v9 = (_DWORD)questEnt + 68;
  if ( iconId < 1 )
  {
    if ( questType == 5 )
    {
      v15 = &StringLiteral_19654/*"img_questtxt_event"*/;
    }
    else if ( questType == 2 )
    {
      v15 = &StringLiteral_19655/*"img_questtxt_free"*/;
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
    return System_String__Concat_43849904(QUEST_BOARD_ICON_SPNAME_PREFIX, v13, 0LL);
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

  if ( (byte_4216CE3 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, questEnt);
    this = (QuestBoardListViewItemDraw_o *)sub_B0D8A4(&QuestBoardListViewItemDraw_TypeInfo, v4);
    byte_4216CE3 = 1;
  }
  if ( !questEnt )
    sub_B0D97C(this);
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
    return System_String__Concat_43849904(QUEST_BOARD_ICON_SPNAME_PREFIX, v9, 0LL);
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
    return QuestEntity__getRecommendLv_23243400(questEnt, questPhase, 0LL);
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
    sub_B0D97C(this);
  if ( status - 1 >= mStatusSp->max_length )
  {
    v5 = sub_B0D9A8(this);
    sub_B0D948(v5, 0LL);
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
  QuestBoardListViewItemDraw___c__DisplayClass304_0_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v16; // x20

  if ( (byte_4216CDA & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_MapControl_QuestInfo___, questList);
    sub_B0D8A4(&Method_System_Func_MapControl_QuestInfo__bool___ctor__, v8);
    sub_B0D8A4(&System_Func_MapControl_QuestInfo__bool__TypeInfo, v9);
    sub_B0D8A4(&Method_QuestBoardListViewItemDraw___c__DisplayClass304_0__HasNewQuestInWar_b__0__, v10);
    sub_B0D8A4(&QuestBoardListViewItemDraw___c__DisplayClass304_0_TypeInfo, v11);
    byte_4216CDA = 1;
  }
  v12 = (QuestBoardListViewItemDraw___c__DisplayClass304_0_o *)sub_B0D974(
                                                                 QuestBoardListViewItemDraw___c__DisplayClass304_0_TypeInfo,
                                                                 questList,
                                                                 *(_QWORD *)&warId);
  QuestBoardListViewItemDraw___c__DisplayClass304_0___ctor(v12, 0LL);
  if ( !v12 )
    sub_B0D97C(v13);
  v12->fields.warId = warId;
  v12->fields.isMainInterlude = isMainInterlude;
  v16 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_MapControl_QuestInfo__bool__TypeInfo,
                                                                             v14,
                                                                             v15);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v16,
    (Il2CppObject *)v12,
    Method_QuestBoardListViewItemDraw___c__DisplayClass304_0__HasNewQuestInWar_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_MapControl_QuestInfo__bool___ctor__);
  return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
           (System_Collections_Generic_List_T__o *)questList,
           (System_Func_T__bool__o *)v16,
           (const MethodInfo_1707138 *)Method_BasicHelper_Any_MapControl_QuestInfo___);
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

  if ( (byte_4216CF4 & 1) == 0 )
  {
    sub_B0D8A4(&QuestBoardListViewItemDraw_TypeInfo, isDoubleItemConsume);
    byte_4216CF4 = 1;
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
    sub_B0D97C(mPhaseObj);
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
    sub_B0D97C(this);
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
    sub_B0D97C(mNextSp);
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

  if ( (byte_4216CE8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestBehaviorMaster___, questInfo);
    this = (QuestBoardListViewItemDraw_o *)sub_B0D8A4(&DataManager_TypeInfo, v4);
    byte_4216CE8 = 1;
  }
  if ( !questInfo )
    sub_B0D97C(this);
  questPhase = questInfo->fields.questPhase;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(questInfo, 0LL);
  v7 = UnityEngine_Mathf__Min_40819044(questPhase + 1, PhaseMax, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestBehaviorMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
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

  if ( (byte_4216D0A & 1) == 0 )
  {
    sub_B0D8A4(&QuestBoardListViewItemDraw_TypeInfo, method);
    byte_4216D0A = 1;
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

  if ( (byte_4216D0B & 1) == 0 )
  {
    sub_B0D8A4(&QuestBoardListViewItemDraw_TypeInfo, method);
    byte_4216D0B = 1;
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

  if ( (byte_4216D00 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, method);
    byte_4216D00 = 1;
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

  if ( (byte_4216CDF & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&warId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_WarMaster___, v4);
    sub_B0D8A4(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Contains_int___, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4216CDF = 1;
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
         (const MethodInfo_1B451E8 *)Method_System_Linq_Enumerable_Contains_int___) )
  {
    return 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      warId,
                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  return LODWORD(Instance->fields.masterLoadThreads) == 0;
}


bool __fastcall QuestBoardListViewItemDraw__IsMultiInfoText(
        QuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x8

  if ( (byte_4216CFF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, method);
    byte_4216CFF = 1;
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
    sub_B0D97C(0LL);
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  WarEntity_o *v20; // x0
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x1
  __int64 v29; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v30; // x21

  if ( (byte_4216CD9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_MapControl_QuestInfo___, questList);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserQuestMaster___, v6);
    sub_B0D8A4(&Method_System_Func_MapControl_QuestInfo__bool___ctor__, v7);
    sub_B0D8A4(&System_Func_MapControl_QuestInfo__bool__TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B0D8A4(&Method_QuestBoardListViewItemDraw___c__DisplayClass303_0__IsPurchasedByRarePrism_b__0__, v10);
    sub_B0D8A4(&QuestBoardListViewItemDraw___c__DisplayClass303_0_TypeInfo, v11);
    byte_4216CD9 = 1;
  }
  v12 = sub_B0D974(QuestBoardListViewItemDraw___c__DisplayClass303_0_TypeInfo, questList, warEnt);
  QuestBoardListViewItemDraw___c__DisplayClass303_0___ctor(
    (QuestBoardListViewItemDraw___c__DisplayClass303_0_o *)v12,
    0LL);
  if ( !v12 )
    goto LABEL_9;
  *(_QWORD *)(v12 + 16) = warEnt;
  sub_B0D840((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)warEnt, v14, v15, v16, v17, v18, v19);
  v20 = *(WarEntity_o **)(v12 + 16);
  if ( v20 && WarEntity__IsShop(v20, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      *(_QWORD *)(v12 + 24) = MasterData_WarQuestSelectionMaster;
      sub_B0D840(
        (BattleServantConfConponent_o *)(v12 + 24),
        MasterData_WarQuestSelectionMaster,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      v30 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                 System_Func_MapControl_QuestInfo__bool__TypeInfo,
                                                                                 v28,
                                                                                 v29);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v30,
        (Il2CppObject *)v12,
        Method_QuestBoardListViewItemDraw___c__DisplayClass303_0__IsPurchasedByRarePrism_b__0__,
        (const MethodInfo_26189B8 *)Method_System_Func_MapControl_QuestInfo__bool___ctor__);
      return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
               (System_Collections_Generic_List_T__o *)questList,
               (System_Func_T__bool__o *)v30,
               (const MethodInfo_1707138 *)Method_BasicHelper_Any_MapControl_QuestInfo___);
    }
LABEL_9:
    sub_B0D97C(Instance);
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
  __int64 v16; // x2
  RestrictionEntity_array *RestrictionList; // x21
  QuestBoardListViewItemDraw___c_c *v18; // x0
  struct QuestBoardListViewItemDraw___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__344_0; // x22
  Il2CppObject *v21; // x23
  struct QuestBoardListViewItemDraw___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x22
  __int64 v30; // x22
  _BOOL4 v31; // w22
  bool v32; // w8
  QuestRestrictionInfoEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4216CFC & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_RestrictionEntity___, questEntity);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestRestrictionMaster___, v7);
    sub_B0D8A4(&Method_System_Func_RestrictionEntity__bool___ctor__, v8);
    sub_B0D8A4(&System_Func_RestrictionEntity__bool__TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B0D8A4(&Method_QuestBoardListViewItemDraw___c__IsValidSupportSelection_b__344_0__, v12);
    sub_B0D8A4(&QuestBoardListViewItemDraw___c_TypeInfo, v13);
    byte_4216CFC = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestRestrictionMaster___);
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
      v18 = QuestBoardListViewItemDraw___c_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw___c_TypeInfo);
        v18 = QuestBoardListViewItemDraw___c_TypeInfo;
      }
      static_fields = v18->static_fields;
      _9__344_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__344_0;
      if ( !_9__344_0 )
      {
        if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v18);
          static_fields = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
        }
        v21 = (Il2CppObject *)static_fields->__9;
        _9__344_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                         System_Func_RestrictionEntity__bool__TypeInfo,
                                                                                         v15,
                                                                                         v16);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__344_0,
          v21,
          Method_QuestBoardListViewItemDraw___c__IsValidSupportSelection_b__344_0__,
          (const MethodInfo_26189B8 *)Method_System_Func_RestrictionEntity__bool___ctor__);
        v22 = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
        v22->__9__344_0 = (struct System_Func_RestrictionEntity__bool__o *)_9__344_0;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v22->__9__344_0,
          (System_Int32_array **)_9__344_0,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
      }
      LOBYTE(RestrictionList) = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
                                  (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)RestrictionList,
                                  (System_Func_T__bool__o *)_9__344_0,
                                  (const MethodInfo_17071E4 *)Method_BasicHelper_Any_RestrictionEntity___);
    }
  }
  else
  {
    LOBYTE(RestrictionList) = 0;
  }
  v29 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v29 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v30 = **(_QWORD **)(v29 + 192);
  if ( (*(_BYTE *)(v30 + 306) & 1) == 0 )
    sub_AA65A4(v30);
  Instance = **(DataManager_o ***)(v30 + 184);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestRestrictionInfoMaster___),
        !questEntity)
    || !Instance )
  {
LABEL_40:
    sub_B0D97C(Instance);
  }
  if ( !QuestRestrictionInfoMaster__TryGetEntity(
          (QuestRestrictionInfoMaster_o *)Instance,
          &entity,
          questEntity->fields.id,
          phase,
          0LL) )
  {
    if ( !QuestEntity__HasFlag_23244236(questEntity, 0x80000LL, phase, 0LL)
      && !QuestEntity__HasFlag_23244236(questEntity, 0x100000LL, phase, 0LL)
      && !QuestEntity__HasFlag_23244236(questEntity, 0x10000000LL, phase, 0LL) )
    {
      LOBYTE(v31) = questEntity->fields.type != 7;
      if ( ((unsigned __int8)RestrictionList & 1) == 0 )
        goto LABEL_31;
      goto LABEL_36;
    }
LABEL_35:
    LOBYTE(v31) = 0;
    if ( ((unsigned __int8)RestrictionList & 1) == 0 )
      goto LABEL_31;
LABEL_36:
    v32 = 0;
    return v32 && v31;
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
  v31 = !QuestRestrictionInfoEntity__HasFlag(entity, 0x10000000LL, 0LL);
  if ( ((unsigned __int8)RestrictionList & 1) != 0 )
    goto LABEL_36;
LABEL_31:
  v32 = !QuestEntity__HasFlag_23244236(questEntity, 2LL, phase, 0LL);
  return v32 && v31;
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
  const MethodInfo *v27; // x1
  QuestBoardListViewItemDraw_c *v28; // x0
  int32_t iconId; // w9
  Il2CppObject *QUEST_BOARD_ICON_TEXTURE_PREFIX; // x21
  Il2CppObject *v31; // x0
  struct System_String_o *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **boardIconName; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_o *v46; // x19
  __int64 v47; // x1
  __int64 v48; // x2
  AssetLoader_LoadEndDataHandler_o *v49; // x21
  int32_t v50; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4216D0E & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, questEntity);
    sub_B0D8A4(&int_TypeInfo, v7);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v8);
    sub_B0D8A4(&QuestBoardListViewItemDraw_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B0D8A4(&Method_QuestBoardListViewItemDraw___c__DisplayClass377_0__LoadBoardIconTexture_b__0__, v11);
    sub_B0D8A4(&QuestBoardListViewItemDraw___c__DisplayClass377_0_TypeInfo, v12);
    byte_4216D0E = 1;
  }
  v13 = sub_B0D974(QuestBoardListViewItemDraw___c__DisplayClass377_0_TypeInfo, questEntity, callback);
  QuestBoardListViewItemDraw___c__DisplayClass377_0___ctor(
    (QuestBoardListViewItemDraw___c__DisplayClass377_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_16;
  *(_QWORD *)(v13 + 24) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v13 + 32) = callback;
  sub_B0D840((BattleServantConfConponent_o *)(v13 + 32), (System_Int32_array **)callback, v21, v22, v23, v24, v25, v26);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  QuestBoardListViewItemDraw__ReleaseBoardIconTexture(this, v27);
  if ( !questEntity )
    goto LABEL_16;
  this->fields.boardIconQuestId = questEntity->fields.id;
  v28 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v28 = QuestBoardListViewItemDraw_TypeInfo;
  }
  iconId = questEntity->fields.iconId;
  QUEST_BOARD_ICON_TEXTURE_PREFIX = (Il2CppObject *)v28->static_fields->QUEST_BOARD_ICON_TEXTURE_PREFIX;
  v50 = iconId;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
  v32 = System_String__Concat(QUEST_BOARD_ICON_TEXTURE_PREFIX, v31, 0LL);
  this->fields.boardIconName = v32;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.boardIconName,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  boardIconName = (System_Int32_array **)this->fields.boardIconName;
  *(_QWORD *)(v13 + 16) = boardIconName;
  sub_B0D840((BattleServantConfConponent_o *)(v13 + 16), boardIconName, v40, v41, v42, v43, v44, v45);
  v46 = System_String__Concat_43849904(
          QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH,
          this->fields.boardIconName,
          0LL);
  v49 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v47, v48);
  AssetLoader_LoadEndDataHandler___ctor(
    v49,
    (Il2CppObject *)v13,
    Method_QuestBoardListViewItemDraw___c__DisplayClass377_0__LoadBoardIconTexture_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v46, v49, 1, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 0, 0LL);
      return;
    }
LABEL_16:
    sub_B0D97C(Instance);
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

  if ( (byte_4216D08 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WebViewManager__get_Instance__, questBoardItem);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&TerminalBannerComponent_TypeInfo, v6);
    byte_4216D08 = 1;
  }
  if ( this->fields._bannerState_k__BackingField != 2 )
    return;
  IsBanners = (WebViewManager_o *)QuestBoardListViewItemDraw__IsBanners(this, questBoardItem, method);
  if ( ((unsigned __int8)IsBanners & 1) == 0 )
    return;
  if ( this->fields.mIsPressed )
    goto LABEL_12;
  IsBanners = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WebViewManager__get_Instance__);
  if ( !IsBanners )
    goto LABEL_41;
  IsBanners = (WebViewManager_o *)WebViewManager__get_IsBusy(IsBanners, 0LL);
  if ( ((unsigned __int8)IsBanners & 1) != 0 )
    goto LABEL_12;
  IsBanners = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !IsBanners )
    goto LABEL_41;
  IsBanners = (WebViewManager_o *)CommonUI__IsActive_UserPresentBoxWindow((CommonUI_o *)IsBanners, 0LL);
  if ( ((unsigned __int8)IsBanners & 1) != 0 )
    goto LABEL_12;
  IsBanners = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
            v24 = sub_B0D9A8(IsBanners);
            sub_B0D948(v24, 0LL);
          }
          IsBanners = (WebViewManager_o *)mTerminalBanners->m_Items[v21];
          if ( !IsBanners )
            break;
          TerminalBannerComponent__StartAutoMoveL((TerminalBannerComponent_o *)IsBanners, 0LL);
          if ( (int)++v21 >= this->fields.mBannerCount )
            goto LABEL_37;
        }
LABEL_41:
        sub_B0D97C(IsBanners);
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
  BoardOptionEventTargetComponent_o *v4; // x0

  if ( (byte_4216CCF & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4216CCF = 1;
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
      sub_B0D97C(0LL);
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
  QuestBoardListViewItemDraw_o *v7; // x19
  UnityEngine_Camera_o *mUICamera; // x21
  UnityEngine_Vector2_o ScreenPosition_27684436; // kr00_8
  float v10; // s0
  float v11; // s1
  const MethodInfo *v12; // x3

  v7 = this;
  if ( (byte_4216D04 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_B0D8A4(&CTouch_TypeInfo, questBoardItem);
    byte_4216D04 = 1;
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
          ScreenPosition_27684436 = CTouch__getScreenPosition_27684436(mUICamera, 0LL);
          v10 = vabds_f32(v7->fields.mPressPos.fields.x, ScreenPosition_27684436.fields.x);
          v11 = vabds_f32(v7->fields.mPressPos.fields.y, ScreenPosition_27684436.fields.y);
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
        sub_B0D97C(this);
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
  const MethodInfo *v5; // x3
  __int64 v6; // x20
  struct TerminalBannerComponent_array *mTerminalBanners; // x8
  __int64 v8; // x0

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
          v8 = sub_B0D9A8(IsBanners);
          sub_B0D948(v8, 0LL);
        }
        IsBanners = mTerminalBanners->m_Items[v6];
        if ( !IsBanners )
LABEL_10:
          sub_B0D97C(IsBanners);
        TerminalBannerComponent__OnPress(IsBanners, this, 0LL);
        ++v6;
      }
      while ( (int)v6 < this->fields.mBannerCount );
    }
    QuestBoardListViewItemDraw__SetDispBannerArrows(this, 1, 0, v5);
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
  if ( (byte_4216D03 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_B0D8A4(&CTouch_TypeInfo, questBoardItem);
    byte_4216D03 = 1;
  }
  if ( questBoardItem && dispMode && questBoardItem->fields._quest_info_k__BackingField )
  {
    v8->fields.mIsPressed = 1;
    if ( !questBoardManager || (this = (QuestBoardListViewItemDraw_o *)questBoardManager->fields.scrollView) == 0LL )
      sub_B0D97C(this);
    if ( !UIScrollView__IsLimitOverPosition((UIScrollView_o *)this, 0LL) )
    {
      mUICamera = questBoardManager->fields.mUICamera;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v8->fields.mPressPos = CTouch__getScreenPosition_27684436(mUICamera, 0LL);
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
          v9 = sub_B0D9A8(IsBanners);
          sub_B0D948(v9, 0LL);
        }
        IsBanners = mTerminalBanners->m_Items[v6];
        if ( !IsBanners )
LABEL_10:
          sub_B0D97C(IsBanners);
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

  if ( questBoardItem && dispMode && questBoardItem->fields._quest_info_k__BackingField )
  {
    QuestBoardListViewItemDraw__OnPullBanner(this, questBoardItem, *(const MethodInfo **)&dispMode);
    *(_WORD *)&this->fields.mIsPressed = 0;
    this->fields.mIsEnableDragX = 0;
    if ( !questBoardManager || (scrollView = (UnityEngine_Behaviour_o *)questBoardManager->fields.scrollView) == 0LL )
      sub_B0D97C(scrollView);
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

  if ( (byte_4216D0F & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&QuestBoardListViewItemDraw_TypeInfo, v3);
    byte_4216D0F = 1;
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
    v5 = System_String__Concat_43849904(
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
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.boardIconAssetData, 0LL, v6, v7, v8, v9, v10, v11);
    this->fields.boardIconName = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.boardIconName, 0LL, v12, v13, v14, v15, v16, v17);
  }
}


void __fastcall QuestBoardListViewItemDraw__ResetBannerAutoMoveTime(
        QuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  TerminalBannerComponent_c *v3; // x0

  if ( (byte_4216D05 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalBannerComponent_TypeInfo, method);
    byte_4216D05 = 1;
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
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x0
  BattleServantConfConponent_o *p_mInfoTextList; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_4216CD1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Clear__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo, v5);
    byte_4216CD1 = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  if ( mInfoTextList )
  {
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)mInfoTextList,
      (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Clear__);
  }
  else
  {
    p_mInfoTextList = (BattleServantConfConponent_o *)&this->fields.mInfoTextList;
    v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_QuestBoardInformaionText__TypeInfo,
                                                                                                   method,
                                                                                                   v2);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v8,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_QuestBoardInformaionText___ctor__);
    p_mInfoTextList->klass = (BattleServantConfConponent_c *)v8;
    sub_B0D840(p_mInfoTextList, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
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

  if ( (byte_4216CFD & 1) == 0 )
  {
    sub_B0D8A4(&QuestBoardListViewItemDraw_TypeInfo, questBoardItem);
    byte_4216CFD = 1;
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
    sub_B0D97C(mCostObj);
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
  __int64 mAdvanceNoticeLb; // x0
  System_String_o *age; // x20
  Il2CppObject *PrioredName; // x0
  System_String_o *v28; // x0
  int32_t WarID_ByQuestID; // w24
  int64_t OpenedAt; // x24
  System_Object_array *v31; // x24
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x25
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x25
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x25
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **v59; // x25
  bool v60; // w23
  MapControl_WarInfo_o *WarInfo_k__BackingField; // x0
  WarEntity_o *Mine; // x0
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  QuestReleaseOverwriteEntity_o *v64; // x21
  _BOOL4 v65; // w24
  UILabel_o *mTitleNameLb; // x22
  QuestBoardListViewItemDraw_c *v67; // x0
  int32_t *p_ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT; // x8
  UILabel_o *mCondChangeMessage; // x19
  int32_t v70; // w22
  float v71; // s1
  int v72; // s2
  int v73; // s0
  float v74; // s1
  int v75; // s2
  int v76; // s0
  float v77; // s1
  int v78; // s0
  int v79; // s2
  UIWidget_o *mOverwriteAdvanceNoticeLb; // x23
  const MethodInfo *v81; // x3
  const MethodInfo *v82; // x3
  System_String_o *overlayClosedMessage; // x20
  UILabel_o *v84; // x19
  __int64 v85; // x0
  __int64 v86; // x0
  int32_t Minute; // [xsp+Ch] [xbp-84h] BYREF
  int32_t Hour; // [xsp+10h] [xbp-80h] BYREF
  int32_t Day; // [xsp+14h] [xbp-7Ch] BYREF
  int64_t questReleaseValue; // [xsp+18h] [xbp-78h] BYREF
  uint64_t dateData; // [xsp+20h] [xbp-70h] BYREF
  WarEntity_o *v92; // [xsp+28h] [xbp-68h] BYREF
  WarEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF
  System_DateTime_o v94; // 0:x0.8
  System_DateTime_o v95; // 0:x0.8
  System_DateTime_o v96; // 0:x0.8
  System_DateTime_o v97; // 0:x0.8

  if ( (byte_4216CE5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ClosedMessageMaster___, questInfo);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMaster_WarMaster___, v10);
    sub_B0D8A4(&DataManager_TypeInfo, v11);
    sub_B0D8A4(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__, v12);
    sub_B0D8A4(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v13);
    sub_B0D8A4(&int_TypeInfo, v14);
    sub_B0D8A4(&long_TypeInfo, v15);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v16);
    sub_B0D8A4(&NetworkManager_TypeInfo, v17);
    sub_B0D8A4(&object___TypeInfo, v18);
    sub_B0D8A4(&QuestBoardListViewItemDraw_TypeInfo, v19);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B0D8A4(&Method_SingletonTemplate_QuestTree__get_Instance__, v21);
    sub_B0D8A4(&SingletonTemplate_QuestTree__TypeInfo, v22);
    sub_B0D8A4(&StringLiteral_14769/*"UNKNOWN_QUEST_NAME"*/, v23);
    sub_B0D8A4(&StringLiteral_1/*""*/, v24);
    byte_4216CE5 = 1;
  }
  entity = 0LL;
  dateData = 0LL;
  v92 = 0LL;
  if ( !questInfo || questInfo->fields.questReleaseClosedID <= 0 )
  {
    mAdvanceNoticeLb = (__int64)this->fields.mAdvanceNoticeLb;
    if ( mAdvanceNoticeLb )
    {
      UILabel__set_text((UILabel_o *)mAdvanceNoticeLb, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      mAdvanceNoticeLb = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
      if ( mAdvanceNoticeLb )
      {
        UILabel__set_text((UILabel_o *)mAdvanceNoticeLb, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        mAdvanceNoticeLb = (__int64)this->fields.mCondChangeMessage;
        if ( mAdvanceNoticeLb )
        {
          UILabel__set_text((UILabel_o *)mAdvanceNoticeLb, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          return;
        }
      }
    }
    goto LABEL_120;
  }
  mAdvanceNoticeLb = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mAdvanceNoticeLb )
    goto LABEL_120;
  mAdvanceNoticeLb = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)mAdvanceNoticeLb,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ClosedMessageMaster___);
  if ( !mAdvanceNoticeLb )
    goto LABEL_120;
  age = (System_String_o *)StringLiteral_1/*""*/;
  mAdvanceNoticeLb = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                       (DataMasterBase_WarMaster__WarEntity__int__o *)mAdvanceNoticeLb,
                       &entity,
                       questInfo->fields.questReleaseClosedID,
                       (const MethodInfo_2669C30 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
  if ( (mAdvanceNoticeLb & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_120;
    age = entity->fields.age;
  }
  switch ( questInfo->fields.questReleaseType )
  {
    case 1:
      if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
      }
      mAdvanceNoticeLb = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !mAdvanceNoticeLb )
        goto LABEL_120;
      WarID_ByQuestID = QuestTree__GetWarID_ByQuestID(
                          (QuestTree_o *)mAdvanceNoticeLb,
                          questInfo->fields.questReleaseTargetID,
                          0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      mAdvanceNoticeLb = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !mAdvanceNoticeLb )
        goto LABEL_120;
      if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              (DataMasterBase_WarMaster__WarEntity__int__o *)mAdvanceNoticeLb,
              &v92,
              WarID_ByQuestID,
              (const MethodInfo_2669C30 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
        goto LABEL_48;
      mAdvanceNoticeLb = (__int64)v92;
      if ( !v92 )
        goto LABEL_120;
      PrioredName = (Il2CppObject *)WarEntity__GetPrioredName(v92, 0LL);
LABEL_12:
      v28 = System_String__Format(age, PrioredName, 0LL);
      goto LABEL_47;
    case 6:
    case 7:
    case 9:
      questReleaseValue = questInfo->fields.questReleaseValue;
      PrioredName = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &questReleaseValue);
      goto LABEL_12;
    case 0xC:
      if ( !questEnt )
        goto LABEL_120;
      OpenedAt = QuestEntity__getOpenedAt(questEnt, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      dateData = NetworkManager__getServerDateTime_25504848(OpenedAt, 0LL).fields.dateData;
      v31 = (System_Object_array *)sub_B0D8BC(object___TypeInfo, 4LL);
      v94.fields.dateData = (uint64_t)&dateData;
      LODWORD(questReleaseValue) = System_DateTime__get_Month(v94, 0LL);
      mAdvanceNoticeLb = j_il2cpp_value_box_0(int_TypeInfo, &questReleaseValue);
      if ( !v31 )
        goto LABEL_120;
      v38 = (System_Int32_array **)mAdvanceNoticeLb;
      if ( mAdvanceNoticeLb )
      {
        mAdvanceNoticeLb = sub_B0D964(mAdvanceNoticeLb, v31->obj.klass->_1.element_class);
        if ( !mAdvanceNoticeLb )
          goto LABEL_122;
      }
      if ( !v31->max_length )
        goto LABEL_121;
      v31->m_Items[0] = (Il2CppObject *)v38;
      sub_B0D840((BattleServantConfConponent_o *)v31->m_Items, v38, v32, v33, v34, v35, v36, v37);
      v95.fields.dateData = (uint64_t)&dateData;
      Day = System_DateTime__get_Day(v95, 0LL);
      mAdvanceNoticeLb = j_il2cpp_value_box_0(int_TypeInfo, &Day);
      v45 = (System_Int32_array **)mAdvanceNoticeLb;
      if ( mAdvanceNoticeLb )
      {
        mAdvanceNoticeLb = sub_B0D964(mAdvanceNoticeLb, v31->obj.klass->_1.element_class);
        if ( !mAdvanceNoticeLb )
          goto LABEL_122;
      }
      if ( v31->max_length <= 1 )
        goto LABEL_121;
      v31->m_Items[1] = (Il2CppObject *)v45;
      sub_B0D840((BattleServantConfConponent_o *)&v31->m_Items[1], v45, v39, v40, v41, v42, v43, v44);
      v96.fields.dateData = (uint64_t)&dateData;
      Hour = System_DateTime__get_Hour(v96, 0LL);
      mAdvanceNoticeLb = j_il2cpp_value_box_0(int_TypeInfo, &Hour);
      v52 = (System_Int32_array **)mAdvanceNoticeLb;
      if ( mAdvanceNoticeLb )
      {
        mAdvanceNoticeLb = sub_B0D964(mAdvanceNoticeLb, v31->obj.klass->_1.element_class);
        if ( !mAdvanceNoticeLb )
          goto LABEL_122;
      }
      if ( v31->max_length <= 2 )
        goto LABEL_121;
      v31->m_Items[2] = (Il2CppObject *)v52;
      sub_B0D840((BattleServantConfConponent_o *)&v31->m_Items[2], v52, v46, v47, v48, v49, v50, v51);
      v97.fields.dateData = (uint64_t)&dateData;
      Minute = System_DateTime__get_Minute(v97, 0LL);
      mAdvanceNoticeLb = j_il2cpp_value_box_0(int_TypeInfo, &Minute);
      v59 = (System_Int32_array **)mAdvanceNoticeLb;
      if ( mAdvanceNoticeLb )
      {
        mAdvanceNoticeLb = sub_B0D964(mAdvanceNoticeLb, v31->obj.klass->_1.element_class);
        if ( !mAdvanceNoticeLb )
        {
LABEL_122:
          v86 = sub_B0D99C(mAdvanceNoticeLb);
          sub_B0D948(v86, 0LL);
        }
      }
      if ( v31->max_length <= 3 )
      {
LABEL_121:
        v85 = sub_B0D9A8(mAdvanceNoticeLb);
        sub_B0D948(v85, 0LL);
      }
      v31->m_Items[3] = (Il2CppObject *)v59;
      sub_B0D840((BattleServantConfConponent_o *)&v31->m_Items[3], v59, v53, v54, v55, v56, v57, v58);
      v28 = System_String__Format_43928628(age, v31, 0LL);
LABEL_47:
      age = v28;
LABEL_48:
      mAdvanceNoticeLb = (__int64)entity;
      if ( !entity )
        goto LABEL_120;
      if ( ClosedMessageEntity__IsChangeDispClosedMessage((ClosedMessageEntity_o *)entity, 0LL) )
      {
        v60 = 1;
      }
      else
      {
        WarInfo_k__BackingField = questInfo->fields._WarInfo_k__BackingField;
        if ( !WarInfo_k__BackingField || !MapControl_WarInfo__GetMine(WarInfo_k__BackingField, 0LL) )
          goto LABEL_56;
        mAdvanceNoticeLb = (__int64)questInfo->fields._WarInfo_k__BackingField;
        if ( !mAdvanceNoticeLb )
          goto LABEL_120;
        Mine = MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)mAdvanceNoticeLb, 0LL);
        if ( Mine )
          v60 = WarEntity__IsChangeDispClosedMessage(Mine, 0LL);
        else
LABEL_56:
          v60 = 0;
      }
      mAdvanceNoticeLb = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !mAdvanceNoticeLb )
        goto LABEL_120;
      mAdvanceNoticeLb = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)mAdvanceNoticeLb,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
      if ( !questEnt || !mAdvanceNoticeLb )
        goto LABEL_120;
      EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                                 (QuestReleaseOverwriteMaster_o *)mAdvanceNoticeLb,
                                 questEnt->fields.id,
                                 checkTime,
                                 0LL);
      v64 = EntityByQuestIdAndTime;
      if ( EntityByQuestIdAndTime )
      {
        v65 = !System_String__IsNullOrEmpty(EntityByQuestIdAndTime->fields.overlayClosedMessage, 0LL);
        if ( v60 )
          goto LABEL_62;
LABEL_73:
        mAdvanceNoticeLb = (__int64)this->fields.mTitleNameLb;
        if ( mAdvanceNoticeLb )
        {
          UILabel__set_text((UILabel_o *)mAdvanceNoticeLb, age, 0LL);
          mAdvanceNoticeLb = (__int64)this->fields.mAdvanceNoticeLb;
          if ( mAdvanceNoticeLb )
          {
            UILabel__set_text((UILabel_o *)mAdvanceNoticeLb, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            mAdvanceNoticeLb = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
            if ( mAdvanceNoticeLb )
            {
              UILabel__set_text((UILabel_o *)mAdvanceNoticeLb, (System_String_o *)StringLiteral_1/*""*/, 0LL);
              if ( !v65 )
                return;
              mAdvanceNoticeLb = (__int64)this->fields.mCondObject;
              if ( mAdvanceNoticeLb )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mAdvanceNoticeLb, 1, 0LL);
                if ( v64 )
                {
                  mAdvanceNoticeLb = (__int64)this->fields.mCondChangeMessage;
                  if ( mAdvanceNoticeLb )
                  {
                    UILabel__set_text((UILabel_o *)mAdvanceNoticeLb, v64->fields.overlayClosedMessage, 0LL);
                    mCondChangeMessage = this->fields.mCondChangeMessage;
                    mAdvanceNoticeLb = (__int64)QuestBoardListViewItemDraw_TypeInfo;
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
            }
          }
        }
        goto LABEL_120;
      }
      v65 = 0;
      if ( !v60 )
        goto LABEL_73;
LABEL_62:
      mAdvanceNoticeLb = (__int64)this->fields.mAdvanceNoticeObj;
      if ( !mAdvanceNoticeLb )
        goto LABEL_120;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mAdvanceNoticeLb, 1, 0LL);
      mTitleNameLb = this->fields.mTitleNameLb;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      mAdvanceNoticeLb = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_14769/*"UNKNOWN_QUEST_NAME"*/, 0LL);
      if ( !mTitleNameLb )
        goto LABEL_120;
      UILabel__set_text(mTitleNameLb, (System_String_o *)mAdvanceNoticeLb, 0LL);
      v67 = QuestBoardListViewItemDraw_TypeInfo;
      if ( v65 )
      {
        if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v67 = QuestBoardListViewItemDraw_TypeInfo;
        }
        p_ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT = &v67->static_fields->ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT;
      }
      else
      {
        if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v67 = QuestBoardListViewItemDraw_TypeInfo;
        }
        p_ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT = &v67->static_fields->ADVANCE_NOTICE_BASE_HEIGHT;
      }
      mAdvanceNoticeLb = (__int64)entity;
      if ( !entity )
        goto LABEL_120;
      v70 = *p_ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT;
      mAdvanceNoticeLb = ClosedMessageEntity__IsChangeDispPositionLeft((ClosedMessageEntity_o *)entity, 0LL);
      if ( !this->fields.mAdvanceNoticeLb )
        goto LABEL_120;
      if ( (mAdvanceNoticeLb & 1) != 0 )
      {
        UIWidget__set_pivot((UIWidget_o *)this->fields.mAdvanceNoticeLb, 3, 0LL);
        mAdvanceNoticeLb = (__int64)this->fields.mAdvanceNoticeLb;
        if ( !mAdvanceNoticeLb )
          goto LABEL_120;
        mAdvanceNoticeLb = (__int64)UnityEngine_Component__get_transform(
                                      (UnityEngine_Component_o *)mAdvanceNoticeLb,
                                      0LL);
        if ( !mAdvanceNoticeLb )
          goto LABEL_120;
        v71 = 24.0;
        if ( !v65 )
          v71 = 0.0;
        v72 = 0;
        v73 = -1018167296;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)mAdvanceNoticeLb,
          *(UnityEngine_Vector3_o *)(&v71 - 1),
          0LL);
        mAdvanceNoticeLb = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
        if ( !mAdvanceNoticeLb )
          goto LABEL_120;
        UIWidget__set_pivot((UIWidget_o *)mAdvanceNoticeLb, 3, 0LL);
        mAdvanceNoticeLb = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
        if ( !mAdvanceNoticeLb )
          goto LABEL_120;
        mAdvanceNoticeLb = (__int64)UnityEngine_Component__get_transform(
                                      (UnityEngine_Component_o *)mAdvanceNoticeLb,
                                      0LL);
        if ( !mAdvanceNoticeLb )
          goto LABEL_120;
        v74 = -26.0;
        v75 = 0;
        v76 = -1018167296;
      }
      else
      {
        UIWidget__set_pivot((UIWidget_o *)this->fields.mAdvanceNoticeLb, 4, 0LL);
        mAdvanceNoticeLb = (__int64)this->fields.mAdvanceNoticeLb;
        if ( !mAdvanceNoticeLb )
          goto LABEL_120;
        mAdvanceNoticeLb = (__int64)UnityEngine_Component__get_transform(
                                      (UnityEngine_Component_o *)mAdvanceNoticeLb,
                                      0LL);
        if ( !mAdvanceNoticeLb )
          goto LABEL_120;
        v77 = 24.0;
        if ( !v65 )
          v77 = 0.0;
        v78 = 0;
        v79 = 0;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)mAdvanceNoticeLb,
          *(UnityEngine_Vector3_o *)(&v77 - 1),
          0LL);
        mAdvanceNoticeLb = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
        if ( !mAdvanceNoticeLb )
          goto LABEL_120;
        UIWidget__set_pivot((UIWidget_o *)mAdvanceNoticeLb, 4, 0LL);
        mAdvanceNoticeLb = (__int64)this->fields.mOverwriteAdvanceNoticeLb;
        if ( !mAdvanceNoticeLb )
          goto LABEL_120;
        mAdvanceNoticeLb = (__int64)UnityEngine_Component__get_transform(
                                      (UnityEngine_Component_o *)mAdvanceNoticeLb,
                                      0LL);
        if ( !mAdvanceNoticeLb )
          goto LABEL_120;
        v74 = -26.0;
        v76 = 0;
        v75 = 0;
      }
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)mAdvanceNoticeLb,
        *(UnityEngine_Vector3_o *)&v76,
        0LL);
      mAdvanceNoticeLb = (__int64)this->fields.mAdvanceNoticeLb;
      if ( !mAdvanceNoticeLb )
        goto LABEL_120;
      UIWidget__set_height((UIWidget_o *)mAdvanceNoticeLb, v70, 0LL);
      mAdvanceNoticeLb = (__int64)QuestBoardListViewItemDraw_TypeInfo;
      mOverwriteAdvanceNoticeLb = (UIWidget_o *)this->fields.mOverwriteAdvanceNoticeLb;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      }
      if ( !mOverwriteAdvanceNoticeLb )
        goto LABEL_120;
      UIWidget__set_height(
        mOverwriteAdvanceNoticeLb,
        QuestBoardListViewItemDraw_TypeInfo->static_fields->ADVANCE_NOTICE_BASE_OVERWRITE_HEIGHT,
        0LL);
      QuestBoardListViewItemDraw___SetAdvanceNoticeText_g__CalculateLabel_317_0(
        this->fields.mAdvanceNoticeLb,
        age,
        v70,
        v81);
      if ( !v65 )
        return;
      mAdvanceNoticeLb = (__int64)this->fields.mOverwriteAdvanceNoticeObj;
      if ( !mAdvanceNoticeLb
        || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mAdvanceNoticeLb, 1, 0LL), !v64) )
      {
LABEL_120:
        sub_B0D97C(mAdvanceNoticeLb);
      }
      overlayClosedMessage = v64->fields.overlayClosedMessage;
      v84 = this->fields.mOverwriteAdvanceNoticeLb;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      }
      QuestBoardListViewItemDraw___SetAdvanceNoticeText_g__CalculateLabel_317_0(v84, overlayClosedMessage, v70, v82);
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

  if ( (byte_4216CEA & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___, *(_QWORD *)&num);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    byte_4216CEA = 1;
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
                                        (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v12 = this->fields.mNoticeNumberRoot;
    v13 = v11;
    GameObjectExtensions__SafeSetParent_31184716(v11, v12, 0LL);
    if ( v13 )
    {
      Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v13,
                                                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
      p_mNoticeNumber->klass = (BattleServantConfConponent_c *)Component_srcLineSprite;
      sub_B0D840(p_mNoticeNumber, Component_srcLineSprite, v15, v16, v17, v18, v19, v20);
      goto LABEL_13;
    }
LABEL_15:
    sub_B0D97C(mNoticeNumberRoot);
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
  int32_t lastQuestId; // w24
  int v16; // w8
  UnityEngine_GameObject_o *blackMarkSpace; // x24
  QuestBoardListViewItemDraw_c *v18; // x0
  UnityEngine_GameObject_o *v19; // x23
  QuestBoardListViewItemDraw_c *v20; // x0
  UnityEngine_Object_o *black_mark_prefab_k__BackingField; // x23
  UnityEngine_Object_o *blackMarkEffect; // x23
  struct UnityEngine_GameObject_o *v23; // x24
  struct UnityEngine_GameObject_o **p_blackMarkEffect; // x23
  struct UnityEngine_GameObject_o **p_blackMarkSpace; // x26
  UnityEngine_Transform_o *transform; // x25
  System_Int32_array **v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UnityEngine_GameObject_o *v34; // x23
  int32_t v35; // w23
  UnityEngine_GameObject_o *v36; // x22
  QuestBoardListViewItemDraw_c *v37; // x0
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  QuestBoardListViewItemDraw_c *v42; // x0
  struct QuestBoardListViewItemDraw_StaticFields *v43; // x8
  int v44; // w8
  UnityEngine_GameObject_o *v45; // x21
  QuestBoardListViewItemDraw_c *v46; // x0
  UnityEngine_Object_o *white_mark_prefab_k__BackingField; // x21
  UnityEngine_Object_o *whiteMarkEffect; // x21
  struct UnityEngine_GameObject_o *v49; // x21
  BattleServantConfConponent_o *p_whiteMarkEffect; // x19
  struct UnityEngine_GameObject_o **v51; // x23
  UnityEngine_Transform_o *v52; // x20
  System_Int32_array **v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  UnityEngine_GameObject_o *klass; // x19
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4216CD3 & 1) == 0 )
  {
    sub_B0D8A4(&CondType_TypeInfo, questBoardItem);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject____68025336, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    sub_B0D8A4(&QuestBoardListViewItemDraw_TypeInfo, v13);
    byte_4216CD3 = 1;
  }
  if ( !warEntity )
    return;
  IsBlackMarkWithClear = (UnityEngine_GameObject_o *)WarEntity__IsBlackMarkWithClear(warEntity, 0LL);
  if ( ((unsigned __int8)IsBlackMarkWithClear & 1) != 0 )
  {
    lastQuestId = warEntity->fields.lastQuestId;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsBlackMarkWithClear = (UnityEngine_GameObject_o *)CondType__IsQuestClear_25410236(lastQuestId, -1, 0, 0LL);
    v16 = 0;
    if ( ((unsigned __int8)IsBlackMarkWithClear & 1) != 0 )
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
      IsBlackMarkWithClear = this->fields.blackMarkSpace;
      if ( !IsBlackMarkWithClear )
        goto LABEL_78;
      v23 = questBoardItem->fields._black_mark_prefab_k__BackingField;
      p_blackMarkEffect = &this->fields.blackMarkEffect;
      p_blackMarkSpace = &this->fields.blackMarkSpace;
      transform = UnityEngine_GameObject__get_transform(IsBlackMarkWithClear, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v27 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                     (UILabel_o *)v23,
                                     transform,
                                     (const MethodInfo_204AAC0 *)Method_UnityEngine_Object_Instantiate_GameObject____68025336);
      *p_blackMarkEffect = (struct UnityEngine_GameObject_o *)v27;
      sub_B0D840((BattleServantConfConponent_o *)&this->fields.blackMarkEffect, v27, v28, v29, v30, v31, v32, v33);
      v34 = *p_blackMarkEffect;
      zero = UnityEngine_Vector3__get_zero(0LL);
      GameObjectExtensions__SetLocalPosition(v34, zero, 0LL);
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
  v35 = warEntity->fields.lastQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestClear_25410236(v35, -1, 0, 0LL) )
  {
    v36 = this->fields.blackMarkSpace;
    v37 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v37 = QuestBoardListViewItemDraw_TypeInfo;
    }
    static_fields = v37->static_fields;
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
      v44 = 0;
      if ( isWhiteMarkOnly )
        goto LABEL_53;
LABEL_59:
      if ( !v44 )
        return;
      if ( !questBoardItem )
        goto LABEL_78;
      goto LABEL_61;
    }
    v36 = this->fields.blackMarkSpace;
    v42 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v42 = QuestBoardListViewItemDraw_TypeInfo;
    }
    v43 = v42->static_fields;
    x = v43->WHITE_MARK_OBJ_UNDER_POS.fields.x;
    y = v43->WHITE_MARK_OBJ_UNDER_POS.fields.y;
    z = v43->WHITE_MARK_OBJ_UNDER_POS.fields.z;
  }
  GameObjectExtensions__SetLocalPosition(v36, *(UnityEngine_Vector3_o *)&x, 0LL);
  v44 = 1;
  if ( !isWhiteMarkOnly )
    goto LABEL_59;
LABEL_53:
  v45 = this->fields.blackMarkSpace;
  v46 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v46 = QuestBoardListViewItemDraw_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition(v45, v46->static_fields->BLACK_MARK_OBJ_POS_CENTER, 0LL);
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
      v49 = questBoardItem->fields._white_mark_prefab_k__BackingField;
      p_whiteMarkEffect = (BattleServantConfConponent_o *)&this->fields.whiteMarkEffect;
      v51 = &this->fields.blackMarkSpace;
      v52 = UnityEngine_GameObject__get_transform(IsBlackMarkWithClear, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v53 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                     (UILabel_o *)v49,
                                     v52,
                                     (const MethodInfo_204AAC0 *)Method_UnityEngine_Object_Instantiate_GameObject____68025336);
      p_whiteMarkEffect->klass = (BattleServantConfConponent_c *)v53;
      sub_B0D840(p_whiteMarkEffect, v53, v54, v55, v56, v57, v58, v59);
      klass = (UnityEngine_GameObject_o *)p_whiteMarkEffect->klass;
      v62 = UnityEngine_Vector3__get_zero(0LL);
      GameObjectExtensions__SetLocalPosition(klass, v62, 0LL);
    }
    else
    {
      v51 = &this->fields.blackMarkSpace;
    }
    IsBlackMarkWithClear = *v51;
    if ( *v51 )
    {
      UnityEngine_GameObject__SetActive(IsBlackMarkWithClear, 1, 0LL);
      return;
    }
LABEL_78:
    sub_B0D97C(IsBlackMarkWithClear);
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

  if ( (byte_4216CED & 1) == 0 )
  {
    sub_B0D8A4(&QuestBoardListViewItemDraw_TypeInfo, warEnt);
    byte_4216CED = 1;
  }
  StatusSp = QuestBoardListViewItemDraw__GetStatusSp(this, 2, method);
  if ( !StatusSp )
    sub_B0D97C(0LL);
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
  const MethodInfo *v42; // x1
  int bannerId; // w23
  UISprite_o *mCostApSp; // x22
  System_String_o *ApSpriteFileName; // x23
  QuestBoardListViewItemDraw_o *mCostItemIcon1; // x0
  int32_t ActConsume; // w0
  int32_t v48; // w20
  __int64 v49; // x1
  UserGameEntity_o *v50; // x28
  bool v51; // w25
  struct System_Int32_array *v52; // x8
  char v53; // w24
  UnityEngine_GameObject_o *v54; // x23
  QuestBoardListViewItemDraw_c *v55; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Int32_array *v57; // x8
  int32_t v58; // w20
  BalanceConfig_c *v59; // x0
  UIWidget_o *v60; // x23
  UnityEngine_GameObject_o *v61; // x0
  UnityEngine_GameObject_o *v62; // x0
  struct System_Int32_array *v63; // x8
  const MethodInfo *v64; // x1
  int v65; // w24
  UISprite_o *v66; // x23
  System_String_o *v67; // x24
  BalanceConfig_c *v68; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  UISprite_o *mCostRpSp; // x22
  __int64 BpExpresssionType; // x20
  __int64 v72; // x8
  struct System_String_array *RP_SPNAME_POINT; // x8
  UserItemMaster_o *Master_WarQuestSelectionMaster; // x27
  DataMasterBase_WarMaster__WarEntity__int__o *v75; // x20
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *v77; // x8
  ItemEntity_o *v78; // x28
  const MethodInfo *v79; // x6
  struct System_Int32_array *nums; // x8
  struct System_Int32_array *v81; // x8
  UIWidget_o *v82; // x28
  struct System_Int32_array *v83; // x8
  struct System_Int32_array *v84; // x8
  const MethodInfo *v85; // x6
  struct System_Int32_array *v86; // x8
  struct System_Int32_array *v87; // x8
  bool v88; // w28
  BalanceConfig_c *v89; // x0
  bool v90; // w25
  UILabel_o *mCostLb1; // x28
  System_String_o *v92; // x0
  const MethodInfo *v93; // x7
  UILabel_o *v94; // x20
  System_String_o *v95; // x0
  const MethodInfo *v96; // x7
  UIWidget_o *v97; // x25
  UserItemMaster_o *v98; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v99; // x25
  struct System_Int32_array *v100; // x8
  struct System_Int32_array *v101; // x8
  ItemEntity_o *v102; // x25
  const MethodInfo *v103; // x6
  struct System_Int32_array *v104; // x8
  struct System_Int32_array *v105; // x8
  UILabel_o *v106; // x26
  System_String_o *v107; // x0
  const MethodInfo *v108; // x7
  UISprite_o *v109; // x22
  __int64 v110; // x8
  UISprite_o *v111; // x23
  __int64 v112; // x8
  struct System_Int32_array *v113; // x8
  UnityEngine_GameObject_o *v114; // x0
  QuestBoardListViewItemDraw_c *v115; // x8
  UnityEngine_GameObject_o *v116; // x23
  UnityEngine_GameObject_o *v117; // x0
  struct System_Int32_array *v118; // x8
  int32_t v119; // w20
  BalanceConfig_c *v120; // x0
  UIWidget_o *v121; // x23
  UnityEngine_GameObject_o *v122; // x0
  UnityEngine_GameObject_o *v123; // x0
  UnityEngine_GameObject_o *v124; // x0
  QuestBoardListViewItemDraw_c *v125; // x8
  UnityEngine_GameObject_o *v126; // x23
  UnityEngine_GameObject_o *v127; // x0
  UnityEngine_GameObject_o *v128; // x0
  UnityEngine_GameObject_o *v129; // x0
  UnityEngine_GameObject_o *v130; // x0
  struct System_Int32_array *v131; // x8
  UnityEngine_GameObject_o *v132; // x20
  UnityEngine_GameObject_o *v133; // x20
  UnityEngine_GameObject_o *v134; // x20
  UIWidget_o *v135; // x22
  UILabel_o *v136; // x20
  UIWidget_o *v137; // x25
  struct System_Int32_array *v138; // x8
  struct System_Int32_array *v139; // x8
  const MethodInfo *v140; // x6
  struct System_Int32_array *v141; // x8
  struct System_Int32_array *v142; // x8
  __int64 v143; // x0
  __int64 v144; // x0
  bool *v145; // [xsp+8h] [xbp-A8h]
  bool v146; // [xsp+14h] [xbp-9Ch]
  bool *v147; // [xsp+18h] [xbp-98h]
  __int64 v148; // [xsp+20h] [xbp-90h]
  UserItemEntity_o *usrItem; // [xsp+28h] [xbp-88h] BYREF
  UserItemEntity_o *entity; // [xsp+30h] [xbp-80h] BYREF
  int32_t v151; // [xsp+3Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v153; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v154; // 0:s0.4,4:s1.4,8:s2.4
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
  UnityEngine_Color_o v168; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v169; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v170; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = baseColor.fields.a;
  b = baseColor.fields.b;
  g = baseColor.fields.g;
  r = baseColor.fields.r;
  v21 = this;
  if ( (byte_4216CDD & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, questEnt);
    sub_B0D8A4(&BalanceConfig_TypeInfo, v22);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UISprite___, v23);
    sub_B0D8A4(&Method_DataManager_GetMaster_ItemMaster___, v24);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserItemMaster___, v25);
    sub_B0D8A4(&DataManager_TypeInfo, v26);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v27);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v28);
    sub_B0D8A4(&NetworkManager_TypeInfo, v29);
    this = (QuestBoardListViewItemDraw_o *)sub_B0D8A4(&QuestBoardListViewItemDraw_TypeInfo, v30);
    byte_4216CDD = 1;
  }
  v151 = 0;
  usrItem = 0LL;
  entity = 0LL;
  if ( !questEnt )
    goto LABEL_436;
  type = questEnt->fields.type;
  *isDoubleItemConsume = 0;
  *isDoubleItemConsumeQp = 0;
  *isTripleItemConsume = 0;
  mCostObj = v21->fields.mCostObj;
  v148 = type;
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
  v146 = v33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !HasFlag, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostObj;
  if ( !this )
    goto LABEL_436;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           (UnityEngine_GameObject_o *)this,
                                           (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v35 = (UIWidget_o *)this;
  v36 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (_DWORD)v148 == 7 )
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
    sub_B0D97C(this);
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
  v147 = isDoubleItemConsumeQp;
  v145 = isTripleItemConsume;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_436;
  p_mCostLb2 = (QuestBoardListViewItemDraw_o **)&v21->fields.mCostLb2;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  if ( HasFlag )
    goto LABEL_34;
  ActConsume = QuestEntity__getActConsume(questEnt, costCalcVal, 0LL);
  if ( fixedVal >= 0 )
    v48 = fixedVal;
  else
    v48 = ActConsume;
  v151 = v48;
  this = (QuestBoardListViewItemDraw_o *)UserGameMaster__getSelfUserGame(0LL);
  v50 = (UserGameEntity_o *)this;
  switch ( questEnt->fields.consumeType )
  {
    case 1:
      if ( !this )
        goto LABEL_436;
      v51 = v48 > SLODWORD(this->fields.mcBaseP) || v48 > UserGameEntity__getAct((UserGameEntity_o *)this, 0LL);
      mCostLb1 = v21->fields.mCostLb1;
      v92 = System_Int32__ToString((int32_t)&v151, 0LL);
      v163.fields.r = r;
      v163.fields.g = g;
      v163.fields.b = b;
      v163.fields.a = a;
      QuestBoardListViewItemDraw__SetCostLabel(
        (QuestBoardListViewItemDraw_o *)v92,
        mCostLb1,
        v92,
        costCalcVal,
        v163,
        v51,
        isClosed,
        fixedVal >= 0,
        v93);
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
      if ( !byte_421083C )
      {
        sub_B0D8A4(&BalanceConfig_TypeInfo, v49);
        byte_421083C = 1;
      }
      v89 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v89 = BalanceConfig_TypeInfo;
      }
      v90 = v48 > v89->static_fields->UerGameRpMax || v48 > UserGameEntity__getRp(v50, 0LL);
      v106 = v21->fields.mCostLb1;
      v107 = System_Int32__ToString((int32_t)&v151, 0LL);
      v166.fields.r = r;
      v166.fields.g = g;
      v166.fields.b = b;
      v166.fields.a = a;
      QuestBoardListViewItemDraw__SetCostLabel(
        (QuestBoardListViewItemDraw_o *)v107,
        v106,
        v107,
        0,
        v166,
        v90,
        isClosed,
        0,
        v108);
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
      Master_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserItemMaster___);
      v75 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ItemMaster___);
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
      v77 = v38->fields.itemIds;
      if ( !v77 )
        goto LABEL_436;
      if ( !v77->max_length )
        goto LABEL_438;
      if ( !v75 )
        goto LABEL_436;
      this = (QuestBoardListViewItemDraw_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                               v75,
                                               v77->m_Items[1],
                                               (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      if ( !v21->fields.mCostLb1 )
        goto LABEL_436;
      v78 = (ItemEntity_o *)this;
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
      v161.fields.r = r;
      v161.fields.g = g;
      v161.fields.b = b;
      v161.fields.a = a;
      QuestBoardListViewItemDraw__SetCostLabelItem(
        this,
        v21->fields.mCostLb1,
        nums->m_Items[1],
        entity,
        v78,
        v161,
        isClosed,
        v79);
      v81 = v38->fields.nums;
      if ( !v81 )
        goto LABEL_436;
      if ( !v81->max_length )
        goto LABEL_438;
      this = (QuestBoardListViewItemDraw_o *)System_Int32__ToString((int)v81 + 32, 0LL);
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
                                                 (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        v82 = (UIWidget_o *)this;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        }
        if ( !v82 )
          goto LABEL_436;
        UIWidget__set_width(v82, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_DOUBLE, 0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        this = (QuestBoardListViewItemDraw_o *)NetworkManager__get_UserId(0LL);
        v83 = v38->fields.itemIds;
        if ( !v83 )
          goto LABEL_436;
        if ( v83->max_length <= 1 )
          goto LABEL_438;
        this = (QuestBoardListViewItemDraw_o *)UserItemMaster__TryGetEntity(
                                                 Master_WarQuestSelectionMaster,
                                                 &entity,
                                                 (int64_t)this,
                                                 v83->m_Items[2],
                                                 0LL);
        v84 = v38->fields.itemIds;
        if ( !v84 )
          goto LABEL_436;
        if ( v84->max_length <= 1 )
          goto LABEL_438;
        this = (QuestBoardListViewItemDraw_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                 v75,
                                                 v84->m_Items[2],
                                                 (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        v86 = v38->fields.nums;
        if ( !v86 )
          goto LABEL_436;
        if ( v86->max_length <= 1 )
          goto LABEL_438;
        v162.fields.r = r;
        v162.fields.g = g;
        v162.fields.b = b;
        v162.fields.a = a;
        QuestBoardListViewItemDraw__SetCostLabelItem(
          this,
          (UILabel_o *)*p_mCostLb2,
          v86->m_Items[2],
          entity,
          (ItemEntity_o *)this,
          v162,
          isClosed,
          v85);
        v87 = v38->fields.nums;
        if ( !v87 )
          goto LABEL_436;
        if ( v87->max_length <= 1 )
          goto LABEL_438;
        this = (QuestBoardListViewItemDraw_o *)System_Int32__ToString((int)v87 + 36, 0LL);
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
        *v145 = 1;
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
                                                 (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        v137 = (UIWidget_o *)this;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        }
        if ( !v137 )
          goto LABEL_436;
        UIWidget__set_width(
          v137,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_TLIPLE_FOR_ALL_ITEM,
          0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        this = (QuestBoardListViewItemDraw_o *)NetworkManager__get_UserId(0LL);
        v138 = v38->fields.itemIds;
        if ( !v138 )
          goto LABEL_436;
        if ( v138->max_length > 2 )
        {
          this = (QuestBoardListViewItemDraw_o *)UserItemMaster__TryGetEntity(
                                                   Master_WarQuestSelectionMaster,
                                                   &entity,
                                                   (int64_t)this,
                                                   v138->m_Items[3],
                                                   0LL);
          v139 = v38->fields.itemIds;
          if ( !v139 )
            goto LABEL_436;
          if ( v139->max_length > 2 )
          {
            this = (QuestBoardListViewItemDraw_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                     v75,
                                                     v139->m_Items[3],
                                                     (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            v141 = v38->fields.nums;
            if ( !v141 )
              goto LABEL_436;
            if ( v141->max_length > 2 )
            {
              v170.fields.r = r;
              v170.fields.g = g;
              v170.fields.b = b;
              v170.fields.a = a;
              QuestBoardListViewItemDraw__SetCostLabelItem(
                this,
                v21->fields.mCostLb3,
                v141->m_Items[3],
                entity,
                (ItemEntity_o *)this,
                v170,
                isClosed,
                v140);
              v142 = v38->fields.nums;
              if ( !v142 )
                goto LABEL_436;
              if ( v142->max_length > 2 )
              {
                this = (QuestBoardListViewItemDraw_o *)System_Int32__ToString((int)v142 + 40, 0LL);
                if ( !this )
                  goto LABEL_436;
                goto LABEL_36;
              }
            }
          }
        }
LABEL_438:
        v143 = sub_B0D9A8(this);
        sub_B0D948(v143, 0LL);
      }
      this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostLb3;
      if ( !this )
        goto LABEL_436;
      this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_436;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
LABEL_36:
      if ( v146 )
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
              ApSpriteFileName = QuestBoardListViewItemDraw__GetApSpriteFileName(bannerId, v42);
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
            v109 = v21->fields.mCostApSp;
            if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
              this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
            }
            v110 = *(_QWORD *)&this->fields.mTitleLevelSp[2].fields.updateAnchors;
            if ( !v110 )
              goto LABEL_436;
            if ( (unsigned int)v148 < *(_DWORD *)(v110 + 24) )
            {
              if ( !v109 )
                goto LABEL_436;
              UISprite__set_spriteName(v109, *(System_String_o **)(v110 + 8 * v148 + 32), 0LL);
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
              v167.fields.r = r;
              v167.fields.g = g;
              v167.fields.b = b;
              v167.fields.a = a;
              UIWidget__set_color((UIWidget_o *)this, v167, 0LL);
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
            v159.fields.r = r;
            v159.fields.g = g;
            v159.fields.b = b;
            v159.fields.a = a;
            UIWidget__set_color((UIWidget_o *)this, v159, 0LL);
            this = (QuestBoardListViewItemDraw_o *)v21->fields.mCostRpPointSp;
            if ( !this )
              goto LABEL_436;
            v160.fields.r = r;
            v160.fields.g = g;
            v160.fields.b = b;
            v160.fields.a = a;
            UIWidget__set_color((UIWidget_o *)this, v160, 0LL);
            v68 = BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v68 = BalanceConfig_TypeInfo;
            }
            static_fields = v68->static_fields;
            this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
            mCostRpSp = v21->fields.mCostRpSp;
            BpExpresssionType = static_fields->BpExpresssionType;
            if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
              this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
            }
            v72 = *(_QWORD *)&this->fields.mTitleLevelSp[1].fields.mFlip;
            if ( !v72 )
              goto LABEL_436;
            if ( (unsigned int)BpExpresssionType >= *(_DWORD *)(v72 + 24) )
              goto LABEL_438;
            if ( !mCostRpSp )
              goto LABEL_436;
            UISprite__set_spriteName(mCostRpSp, *(System_String_o **)(v72 + 8 * BpExpresssionType + 32), 0LL);
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
            v52 = v38->fields.itemIds;
            if ( !v52 )
              goto LABEL_437;
            if ( !v52->max_length )
              goto LABEL_439;
            mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon1;
            if ( !mCostItemIcon1 )
              goto LABEL_437;
            ItemIconComponent__SetItem((ItemIconComponent_o *)mCostItemIcon1, v52->m_Items[1], -1, 0LL);
            mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon1;
            if ( !mCostItemIcon1 )
              goto LABEL_437;
            v157.fields.r = r;
            v157.fields.g = g;
            v157.fields.b = b;
            v157.fields.a = a;
            ItemIconComponent__SetColor((ItemIconComponent_o *)mCostItemIcon1, v157, 0LL);
            mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)QuestConsumeItemEntity__IsAvailableAt(v38, 1, 0LL);
            if ( !v21->fields.mCostItemIcon2 )
              goto LABEL_437;
            v53 = (char)mCostItemIcon1;
            mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)v21->fields.mCostItemIcon2,
                                                               0LL);
            v54 = (UnityEngine_GameObject_o *)mCostItemIcon1;
            if ( (v53 & 1) != 0 )
            {
              v55 = QuestBoardListViewItemDraw_TypeInfo;
              if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
                v55 = QuestBoardListViewItemDraw_TypeInfo;
              }
              GameObjectExtensions__SetLocalPositionX(
                v54,
                (float)v55->static_fields->COST_2_ICON_NORMAL_POSITION_X,
                0LL);
              mCostItemIcon1 = *p_mCostLb2;
              if ( !*p_mCostLb2 )
                goto LABEL_437;
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostItemIcon1, 0LL);
              GameObjectExtensions__SetLocalPositionX(
                gameObject,
                (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_NORMAL_POSITION_X,
                0LL);
              v57 = v38->fields.itemIds;
              if ( !v57 )
                goto LABEL_437;
              if ( v57->max_length <= 1 )
                goto LABEL_439;
              v58 = v57->m_Items[2];
              v59 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v59 = BalanceConfig_TypeInfo;
              }
              if ( v58 == v59->static_fields->ItemIdQp )
              {
                *v147 = 1;
                mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostObj;
                if ( !mCostItemIcon1 )
                  goto LABEL_437;
                mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   (UnityEngine_GameObject_o *)mCostItemIcon1,
                                                                   (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                v60 = (UIWidget_o *)mCostItemIcon1;
                if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
                }
                if ( !v60 )
                  goto LABEL_437;
                UIWidget__set_width(
                  v60,
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
                                                                   (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
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
                                                                   (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
                if ( !mCostItemIcon1 )
                  goto LABEL_437;
                UISprite__set_spriteName(
                  (UISprite_o *)mCostItemIcon1,
                  QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_QP,
                  0LL);
                mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon2;
                if ( !mCostItemIcon1 )
                  goto LABEL_437;
                v61 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostItemIcon1, 0LL);
                GameObjectExtensions__SetLocalPositionX(
                  v61,
                  (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_ICON_QP_POSITION_X,
                  0LL);
                mCostItemIcon1 = *p_mCostLb2;
                if ( !*p_mCostLb2 )
                  goto LABEL_437;
                v62 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostItemIcon1, 0LL);
                GameObjectExtensions__SetLocalPositionX(
                  v62,
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
              v63 = v38->fields.itemIds;
              if ( !v63 )
                goto LABEL_437;
              if ( v63->max_length <= 1 )
                goto LABEL_439;
              mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon2;
              if ( !mCostItemIcon1 )
                goto LABEL_437;
              ItemIconComponent__SetItem((ItemIconComponent_o *)mCostItemIcon1, v63->m_Items[2], -1, 0LL);
              mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon2;
              if ( !mCostItemIcon1 )
                goto LABEL_437;
              v158.fields.r = r;
              v158.fields.g = g;
              v158.fields.b = b;
              v158.fields.a = a;
              ItemIconComponent__SetColor((ItemIconComponent_o *)mCostItemIcon1, v158, 0LL);
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
              v124 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostItemIcon1, 0LL);
              v125 = QuestBoardListViewItemDraw_TypeInfo;
              v126 = v124;
              if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
                v125 = QuestBoardListViewItemDraw_TypeInfo;
              }
              GameObjectExtensions__SetLocalPositionX(
                v126,
                (float)v125->static_fields->COST_1_LABEL_NORMAL_POSITION_X_FOR_ALL_ITEM,
                0LL);
              mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon2;
              if ( !mCostItemIcon1 )
                goto LABEL_437;
              v127 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostItemIcon1, 0LL);
              GameObjectExtensions__SetLocalPositionX(
                v127,
                (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_ICON_NORMAL_POSITION_X_FOR_ALL_ITEM,
                0LL);
              mCostItemIcon1 = *p_mCostLb2;
              if ( !*p_mCostLb2 )
                goto LABEL_437;
              v128 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostItemIcon1, 0LL);
              GameObjectExtensions__SetLocalPositionX(
                v128,
                (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_NORMAL_POSITION_X_FOR_ALL_ITEM,
                0LL);
              mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon3;
              if ( !mCostItemIcon1 )
                goto LABEL_437;
              v129 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostItemIcon1, 0LL);
              GameObjectExtensions__SetLocalPositionX(
                v129,
                (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_3_ICON_NORMAL_POSITION_X_FOR_ALL_ITEM,
                0LL);
              mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostLb3;
              if ( !mCostItemIcon1 )
                goto LABEL_437;
              v130 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostItemIcon1, 0LL);
              GameObjectExtensions__SetLocalPositionX(
                v130,
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
              v131 = v38->fields.itemIds;
              if ( !v131 )
                goto LABEL_437;
              if ( v131->max_length > 2 )
              {
                mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon3;
                if ( !mCostItemIcon1 )
                  goto LABEL_437;
                ItemIconComponent__SetItem((ItemIconComponent_o *)mCostItemIcon1, v131->m_Items[3], -1, 0LL);
                mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon3;
                if ( !mCostItemIcon1 )
                  goto LABEL_437;
LABEL_76:
                v156.fields.r = r;
                v156.fields.g = g;
                v156.fields.b = b;
                v156.fields.a = a;
                ItemIconComponent__SetColor((ItemIconComponent_o *)mCostItemIcon1, v156, 0LL);
                break;
              }
LABEL_439:
              v144 = sub_B0D9A8(mCostItemIcon1);
              sub_B0D948(v144, 0LL);
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
            v65 = questEnt->fields.bannerId;
            v66 = v21->fields.mCostApSp;
            if ( v65 < 1 )
            {
              if ( !v66 )
                goto LABEL_437;
              UISprite__set_atlas(v21->fields.mCostApSp, v21->fields.mTerminalAtlas, 0LL);
              mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
              v111 = v21->fields.mCostApSp;
              if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
                mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
              }
              v112 = *(_QWORD *)&mCostItemIcon1->fields.mTitleLevelSp[2].fields.updateAnchors;
              if ( !v112 )
                goto LABEL_437;
              if ( (unsigned int)v148 >= *(_DWORD *)(v112 + 24) )
                goto LABEL_439;
              if ( !v111 )
                goto LABEL_437;
              UISprite__set_spriteName(v111, *(System_String_o **)(v112 + 8 * v148 + 32), 0LL);
            }
            else
            {
              if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
              }
              v67 = QuestBoardListViewItemDraw__GetApSpriteFileName(v65, v64);
              if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !AtlasManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              }
              mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)AtlasManager__SetEventUI(v66, v67, 0LL);
              if ( !v66 )
                goto LABEL_437;
              UnityEngine_Behaviour__set_enabled(
                (UnityEngine_Behaviour_o *)v66,
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
            v168.fields.r = r;
            v168.fields.g = g;
            v168.fields.b = b;
            v168.fields.a = a;
            UIWidget__set_color((UIWidget_o *)mCostItemIcon1, v168, 0LL);
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
            v113 = v38->fields.itemIds;
            if ( !v113 )
              goto LABEL_437;
            if ( !v113->max_length )
              goto LABEL_439;
            mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon2;
            if ( !mCostItemIcon1 )
              goto LABEL_437;
            ItemIconComponent__SetItem((ItemIconComponent_o *)mCostItemIcon1, v113->m_Items[1], -1, 0LL);
            mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon2;
            if ( !mCostItemIcon1 )
              goto LABEL_437;
            v169.fields.r = r;
            v169.fields.g = g;
            v169.fields.b = b;
            v169.fields.a = a;
            ItemIconComponent__SetColor((ItemIconComponent_o *)mCostItemIcon1, v169, 0LL);
            mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon2;
            if ( !mCostItemIcon1 )
              goto LABEL_437;
            v114 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostItemIcon1, 0LL);
            v115 = QuestBoardListViewItemDraw_TypeInfo;
            v116 = v114;
            if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
              v115 = QuestBoardListViewItemDraw_TypeInfo;
            }
            GameObjectExtensions__SetLocalPositionX(
              v116,
              (float)v115->static_fields->COST_2_ICON_NORMAL_POSITION_X,
              0LL);
            mCostItemIcon1 = *p_mCostLb2;
            if ( !*p_mCostLb2 )
              goto LABEL_437;
            v117 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostItemIcon1, 0LL);
            GameObjectExtensions__SetLocalPositionX(
              v117,
              (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_LABEL_NORMAL_POSITION_X,
              0LL);
            v118 = v38->fields.itemIds;
            if ( !v118 )
              goto LABEL_437;
            if ( !v118->max_length )
              goto LABEL_439;
            v119 = v118->m_Items[1];
            v120 = BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v120 = BalanceConfig_TypeInfo;
            }
            if ( v119 == v120->static_fields->ItemIdQp )
            {
              *v147 = 1;
              mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostObj;
              if ( !mCostItemIcon1 )
                goto LABEL_437;
              mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 (UnityEngine_GameObject_o *)mCostItemIcon1,
                                                                 (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
              v121 = (UIWidget_o *)mCostItemIcon1;
              if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
              }
              if ( !v121 )
                goto LABEL_437;
              UIWidget__set_width(
                v121,
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
                                                                 (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
              if ( !mCostItemIcon1 )
                goto LABEL_437;
              UISprite__set_spriteName(
                (UISprite_o *)mCostItemIcon1,
                QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_QP,
                0LL);
              mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostItemIcon2;
              if ( !mCostItemIcon1 )
                goto LABEL_437;
              v122 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostItemIcon1, 0LL);
              GameObjectExtensions__SetLocalPositionX(
                v122,
                (float)QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_2_ICON_QP_POSITION_X,
                0LL);
              mCostItemIcon1 = *p_mCostLb2;
              if ( !*p_mCostLb2 )
                goto LABEL_437;
              v123 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostItemIcon1, 0LL);
              GameObjectExtensions__SetLocalPositionX(
                v123,
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
        v155.fields.r = r;
        v155.fields.g = g;
        v155.fields.b = b;
        v155.fields.a = a;
        ItemIconComponent__SetColor((ItemIconComponent_o *)mCostItemIcon1, v155, 0LL);
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
      v132 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostItemIcon1, 0LL);
      one = UnityEngine_Vector3__get_one(0LL);
      GameObjectExtensions__SetLocalScale(v132, one, 0LL);
      mCostItemIcon1 = *p_mCostLb2;
      if ( !*p_mCostLb2 )
        goto LABEL_437;
      v133 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostItemIcon1, 0LL);
      v153 = UnityEngine_Vector3__get_one(0LL);
      GameObjectExtensions__SetLocalScale(v133, v153, 0LL);
      mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostLb3;
      if ( !mCostItemIcon1 )
        goto LABEL_437;
      v134 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mCostItemIcon1, 0LL);
      v154 = UnityEngine_Vector3__get_one(0LL);
      GameObjectExtensions__SetLocalScale(v134, v154, 0LL);
      mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
      v135 = (UIWidget_o *)v21->fields.mCostLb1;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      }
      if ( !v135 )
        goto LABEL_437;
      UIWidget__set_width(v135, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_1_LABEL_DEFAULT_WIDTH, 0LL);
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
      if ( !*v147 )
      {
        if ( !*v145 )
          return;
        mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
        v136 = v21->fields.mCostLb1;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        }
        if ( v136 )
        {
          UILabel__set_spacingX(
            v136,
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
                            UILabel__SetCondensedScale_41140248(
                              (UILabel_o *)mCostItemIcon1,
                              QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_WIDTH_FOR_THREE_ITEM,
                              0LL);
                            mCostItemIcon1 = *p_mCostLb2;
                            if ( *p_mCostLb2 )
                            {
                              UILabel__SetCondensedScale_41140248(
                                (UILabel_o *)mCostItemIcon1,
                                QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_LABEL_WIDTH_FOR_THREE_ITEM,
                                0LL);
                              mCostItemIcon1 = (QuestBoardListViewItemDraw_o *)v21->fields.mCostLb3;
                              if ( mCostItemIcon1 )
                              {
                                UILabel__SetCondensedScale_41140248(
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
        sub_B0D97C(mCostItemIcon1);
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
      v88 = v48 > SLODWORD(this->fields.mcBaseP) || v48 > UserGameEntity__getAct((UserGameEntity_o *)this, 0LL);
      v94 = v21->fields.mCostLb1;
      v95 = System_Int32__ToString((int32_t)&v151, 0LL);
      v164.fields.r = r;
      v164.fields.g = g;
      v164.fields.b = b;
      v164.fields.a = a;
      QuestBoardListViewItemDraw__SetCostLabel(
        (QuestBoardListViewItemDraw_o *)v95,
        v94,
        v95,
        costCalcVal,
        v164,
        v88,
        isClosed,
        fixedVal >= 0,
        v96);
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
                                                 (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        v97 = (UIWidget_o *)this;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        }
        if ( !v97 )
          goto LABEL_436;
        UIWidget__set_width(v97, QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_BG_WIDTH_DOUBLE, 0LL);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        v98 = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserItemMaster___);
        v99 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ItemMaster___);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        this = (QuestBoardListViewItemDraw_o *)NetworkManager__get_UserId(0LL);
        v100 = v38->fields.itemIds;
        if ( !v100 )
          goto LABEL_436;
        if ( v100->max_length )
        {
          if ( !v98 )
            goto LABEL_436;
          this = (QuestBoardListViewItemDraw_o *)UserItemMaster__TryGetEntity(
                                                   v98,
                                                   &usrItem,
                                                   (int64_t)this,
                                                   v100->m_Items[1],
                                                   0LL);
          v101 = v38->fields.itemIds;
          if ( !v101 )
            goto LABEL_436;
          if ( v101->max_length )
          {
            if ( !v99 )
              goto LABEL_436;
            this = (QuestBoardListViewItemDraw_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                     v99,
                                                     v101->m_Items[1],
                                                     (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            if ( !*p_mCostLb2 )
              goto LABEL_436;
            v102 = (ItemEntity_o *)this;
            this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)*p_mCostLb2,
                                                     0LL);
            if ( !this )
              goto LABEL_436;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            v104 = v38->fields.nums;
            if ( !v104 )
              goto LABEL_436;
            if ( v104->max_length )
            {
              v165.fields.r = r;
              v165.fields.g = g;
              v165.fields.b = b;
              v165.fields.a = a;
              QuestBoardListViewItemDraw__SetCostLabelItem(
                this,
                (UILabel_o *)*p_mCostLb2,
                v104->m_Items[1],
                usrItem,
                v102,
                v165,
                isClosed,
                v103);
              v105 = v38->fields.nums;
              if ( !v105 )
                goto LABEL_436;
              if ( v105->max_length )
              {
                this = (QuestBoardListViewItemDraw_o *)System_Int32__ToString((int)v105 + 32, 0LL);
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
  if ( (byte_4216CF3 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_B0D8A4(&QuestBoardListViewItemDraw_TypeInfo, label);
    byte_4216CF3 = 1;
  }
  if ( !label )
    sub_B0D97C(this);
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
      v23 = UnityEngine_Color__op_Multiply_40758648(static_fields->CAMPAIGN_COST_COLOR, 0.5, 0LL);
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
      v24 = UnityEngine_Color__op_Multiply_40758648(v22->OVER_COST_COLOR, 0.5, 0LL);
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
  const MethodInfo *v19; // x7
  bool v20; // w21
  System_String_o *v21; // x22
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
  if ( (byte_4216CF2 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, label);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v16);
    sub_B0D8A4(&StringLiteral_10918/*"QUEST_BOARD_COST_QP"*/, v17);
    byte_4216CF2 = 1;
  }
  SelfUserGame = System_Int32__ToString((int32_t)&v27, 0LL);
  if ( !itemEnt )
    goto LABEL_16;
  if ( itemEnt->fields.type == 1 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( SelfUserGame )
    {
      v20 = v27 > *((_DWORD *)SelfUserGame + 24);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = LocalizationManager__Get((System_String_o *)StringLiteral_10918/*"QUEST_BOARD_COST_QP"*/, 0LL);
      v26 = v27;
      v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
      SelfUserGame = System_String__Format(v21, v22, 0LL);
      v23 = (System_String_o *)SelfUserGame;
      goto LABEL_15;
    }
LABEL_16:
    sub_B0D97C(SelfUserGame);
  }
  v24 = v27;
  v23 = (System_String_o *)SelfUserGame;
  if ( usrItem && (SelfUserGame = (void *)ItemEntity__IsEnable(itemEnt, 0LL), ((unsigned __int8)SelfUserGame & 1) != 0) )
    num = usrItem->fields.num;
  else
    num = 0;
  v20 = v24 > num;
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
    v20,
    isClosed,
    0,
    v19);
}


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
        v10 = sub_B0D9A8(this);
        sub_B0D948(v10, 0LL);
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
    sub_B0D97C(this);
  }
}


void __fastcall QuestBoardListViewItemDraw__SetEventTargetAlpha(
        QuestBoardListViewItemDraw_o *this,
        float alpha,
        const MethodInfo *method)
{
  UnityEngine_Object_o *eventTarget; // x20
  UnityEngine_Object_o *eventTargetComponent; // x20
  BoardOptionEventTargetComponent_o *v7; // x0

  if ( (byte_4216D01 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4216D01 = 1;
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
      v7 = (BoardOptionEventTargetComponent_o *)this->fields.eventTarget;
      if ( !v7 )
        goto LABEL_18;
      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)v7, 0LL) )
      {
        v7 = this->fields.eventTargetComponent;
        if ( !v7 )
          goto LABEL_18;
        if ( BoardOptionEventTargetComponent__IsNeedAnim(v7, 0LL) )
        {
          v7 = this->fields.eventTargetComponent;
          if ( v7 )
          {
            BoardOptionEventTargetComponent__SetAlpha(v7, alpha, 0LL);
            return;
          }
LABEL_18:
          sub_B0D97C(v7);
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
  if ( (byte_4216CF1 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, questEnt);
    this = (QuestBoardListViewItemDraw_o *)sub_B0D8A4(&QuestBoardListViewItemDraw_TypeInfo, v16);
    byte_4216CF1 = 1;
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
    maskSpriteName = System_String__Concat_43849904(QUEST_BOARD_MASK_SPNAME_PREFIX, v25, 0LL);
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
    sub_B0D97C(this);
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

  if ( (byte_4216CFF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, method);
    byte_4216CFF = 1;
  }
  mInfoTextList = this->fields.mInfoTextList;
  if ( mInfoTextList && mInfoTextList->fields._size > 1 )
  {
    mOptionInfoLb = this->fields.mOptionInfoLb;
    if ( !mOptionInfoLb )
LABEL_11:
      sub_B0D97C(mOptionInfoLb);
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

  if ( (byte_4216CD0 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewMultiSecondBattleInformation___,
      questBoardItem);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UISprite__Clear__, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&QuestBoardListViewItemDraw_TypeInfo, v10);
    byte_4216CD0 = 1;
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
                                                                                               (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewMultiSecondBattleInformation___);
        p_secondBattleInformation = &this->fields.secondBattleInformation;
        this->fields.secondBattleInformation = Component_srcLineSprite;
        sub_B0D840(
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
          (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_UISprite__Clear__);
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
          sub_B0D97C(mOptionSecondBattleInformationObj);
        }
        max_length = mStatusSp->max_length;
        if ( max_length >= 1 )
        {
          v33 = 0;
          do
          {
            if ( v33 >= max_length )
            {
              v45 = sub_B0D9A8(mOptionSecondBattleInformationObj);
              sub_B0D948(v45, 0LL);
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
                                                                               (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
  QuestBoardListViewItemDraw_o *v11; // x19
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
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x8
  MapControl_AreaBoardInfo_o *AreaBoardInfo_k__BackingField; // x22
  int32_t questBoardType; // w23
  EventEntity_o *eventEnt; // x25
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  __int64 v33; // x9
  int32_t v34; // w21
  MapControl_WarInfo_o *WarInfoByWarID; // x0
  MapControl_WarInfo_o *v36; // x27
  WarEntity_o *Mine; // x26
  int v38; // w20
  UnityEngine_Object_o *eventTargetComponent; // x27
  const MethodInfo *v40; // x3
  bool v41; // w24
  il2cpp_array_size_t v42; // w20
  const MethodInfo *v43; // x2
  bool IsPurchasedByRarePrism; // w28
  QuestBoardListViewItem_o *v45; // x27
  bool v46; // w21
  _BOOL8 IsActiveEventWar; // x0
  const MethodInfo *v48; // x4
  bool v49; // w24
  int v50; // w21
  QuestBoardListViewItemDraw_c *v51; // x0
  System_String_o *QBOARD_CAP_CLOSED_SPECIAL_FORMAT; // x25
  Il2CppObject *v53; // x0
  System_String_o *EventAddBannerSpriteName; // x25
  QuestBoardListViewItemDraw_o *v55; // x23
  int32_t v56; // w27
  QuestBoardListViewItemDraw_c *v57; // x8
  struct System_String_array *msQBoardL1Names; // x8
  System_String_o *v59; // x25
  Il2CppObject *v60; // x0
  const MethodInfo *v61; // x5
  ScrTerminalListTop_c *v62; // x8
  struct ScrTerminalListTop_StaticFields *static_fields; // x9
  QuestBoardListViewItemDraw_c *v64; // x0
  bool v65; // zf
  ScrTerminalListTop_c *v66; // x0
  bool v67; // w24
  QuestBoardListViewItemDraw_o *v68; // x28
  bool v69; // w0
  QuestBoardListViewItemDraw_o *v70; // x28
  bool v71; // w0
  QuestBoardListViewItemDraw_c *v72; // x0
  System_String_o **p_QBOARD_CAP_CLOSED_SPECIAL_2; // x8
  QuestBoardListViewItemDraw_c *v74; // x0
  WarEntity_o *Entity; // x0
  bool v76; // w8
  WarEntity_o *v77; // x2
  QuestBoardListViewItemDraw_o *v78; // x0
  QuestBoardListViewItem_o *v79; // x1
  QuestBoardListViewItemDraw_o *v80; // x25
  bool v81; // w0
  QuestBoardListViewItemDraw_c *v82; // x8
  bool v83; // w21
  QuestBoardListViewItemDraw_o *v84; // x28
  QuestBoardListViewItemDraw_o *v85; // x28
  ScrTerminalListTop_c *v86; // x0
  int32_t NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID; // w28
  __int64 v88; // x1
  TerminalPramsManager_c *v89; // x0
  ScrTerminalListTop_c *v90; // x8
  int32_t QuestId_k__BackingField; // w21
  TerminalPramsManager_c *v92; // x0
  __int64 v93; // x8
  System_String_o *v94; // x25
  int32_t mStatusSp; // w8
  System_Int32_c *v96; // x0
  __int64 v97; // x8
  Il2CppObject *v98; // x0
  UISprite_o *mcBaseP; // x28
  int v100; // w23
  const MethodInfo *v101; // x2
  UIWidget_o *v102; // x25
  int v103; // s0
  int32_t questCount; // w1
  QuestBoardListViewItemDraw_o **p_mOptionInfoLb; // x25
  const MethodInfo *v109; // x3
  int32_t v110; // w1
  QuestBoardListViewItemDraw_c *v111; // x0
  int v112; // w21
  const MethodInfo *v113; // x3
  int32_t status; // w1
  QuestBoardListViewItemDraw_c *v115; // x0
  const MethodInfo *v116; // x2
  const MethodInfo *v117; // x3
  const MethodInfo *v118; // x3
  const MethodInfo *v119; // x3
  bool v120; // w1
  bool v121; // w21
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *mInfoTextList; // x20
  int32_t size; // w1
  struct QuestBoardListViewObject_o *v124; // x8
  __int64 v125; // x10
  const MethodInfo *v126; // x3
  int32_t AlphaAnimCnt; // w21
  UnityEngine_Object_o *mEarthLine; // x21
  const MethodInfo *v129; // x3
  QuestBoardListViewEarthLine_o *v130; // x21
  float *mTitleLevelSp; // x8
  __int64 v132; // x0
  int32_t v133; // [xsp+14h] [xbp-8Ch]
  bool v134; // [xsp+18h] [xbp-88h]
  bool v135; // [xsp+1Ch] [xbp-84h]
  struct UnityEngine_GameObject_o *checkTime; // [xsp+28h] [xbp-78h]
  int v140; // [xsp+34h] [xbp-6Ch]
  QuestBoardListViewItem_o *questBoardItema; // [xsp+38h] [xbp-68h]
  int32_t warId; // [xsp+40h] [xbp-60h]
  bool v143; // [xsp+44h] [xbp-5Ch]
  _BOOL4 IsClosedWar; // [xsp+48h] [xbp-58h]
  int32_t PrioredBannerId; // [xsp+4Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v146; // 0:s0.4,4:s1.4,8:s2.4

  v11 = this;
  if ( (byte_4216CD2 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, questBoardItem);
    sub_B0D8A4(&Method_DataManager_GetMaster_WarMaster___, v12);
    sub_B0D8A4(&DataManager_TypeInfo, v13);
    sub_B0D8A4(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v14);
    sub_B0D8A4(&int_TypeInfo, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__, v17);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v18);
    sub_B0D8A4(&QuestBoardListViewItemDraw_TypeInfo, v19);
    sub_B0D8A4(&QuestBoardListViewManager_TypeInfo, v20);
    sub_B0D8A4(&ScrTerminalListTop_TypeInfo, v21);
    sub_B0D8A4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v22);
    sub_B0D8A4(&Method_SingletonTemplate_QuestTree__get_Instance__, v23);
    sub_B0D8A4(&SingletonTemplate_QuestTree__TypeInfo, v24);
    sub_B0D8A4(&SingletonTemplate_clsQuestCheck__TypeInfo, v25);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v26);
    this = (QuestBoardListViewItemDraw_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v27);
    byte_4216CD2 = 1;
  }
  if ( !questBoardItem )
    goto LABEL_312;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_312;
  v135 = isSpecialClosedBanner;
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
  v143 = isBadgeDisp;
  v33 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v33
    || (QuestBoardListViewManager_c *)this->klass->_2.typeHierarchy[v33 - 1] != QuestBoardListViewManager_TypeInfo )
  {
    sub_B0DC70(this);
LABEL_314:
    sub_B0DC70(this);
    goto LABEL_315;
  }
  v34 = AreaBoardInfo_k__BackingField->fields.warId;
  questBoardItema = questBoardItem;
  checkTime = this->fields.mClassIconRoot;
  if ( v34 < 1 )
  {
    v38 = 0;
    v36 = 0LL;
LABEL_19:
    Mine = 0LL;
    goto LABEL_20;
  }
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !this )
    goto LABEL_312;
  WarInfoByWarID = QuestTree__mfGetWarInfoByWarID((QuestTree_o *)this, v34, 0LL);
  v36 = WarInfoByWarID;
  if ( !WarInfoByWarID )
  {
    v38 = 0;
    goto LABEL_19;
  }
  Mine = MapControl_WarInfo__GetMine(WarInfoByWarID, 0LL);
  v38 = 1;
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
    v140 = (unsigned __int8)this & 1;
    if ( v38 )
    {
LABEL_40:
      if ( !v36 )
        goto LABEL_312;
      IsClosedWar = MapControl_WarInfo__IsClosedWar(v36, 0LL);
      goto LABEL_44;
    }
  }
  else
  {
    v140 = 0;
    if ( v38 )
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
  warId = v34;
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !this )
LABEL_312:
    sub_B0D97C(this);
  v41 = questBoardType == 2 && eventEnt != 0LL;
  v42 = questBoardType - 1;
  IsPurchasedByRarePrism = QuestBoardListViewItemDraw__IsPurchasedByRarePrism(
                             this,
                             (System_Collections_Generic_List_MapControl_QuestInfo__o *)this->fields.mCommonAtlas,
                             Mine,
                             v40);
  if ( questBoardType == 1 )
  {
    v45 = questBoardItema;
    QuestBoardListViewItemDraw__SetupBanner(v11, questBoardItema, v43);
    v46 = v143;
    goto LABEL_248;
  }
  v134 = questBoardType == 2 && eventEnt != 0LL;
  if ( v134 )
  {
    if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
    }
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    v45 = questBoardItema;
    if ( !this )
      goto LABEL_312;
    IsActiveEventWar = QuestTree__IsActiveEventWar((QuestTree_o *)this, v34, 0LL);
    v49 = IsPurchasedByRarePrism;
    LOBYTE(v42) = (IsPurchasedByRarePrism || v140 == 0) && IsActiveEventWar;
    if ( (v42 & 1) != 0 )
    {
      v50 = IsClosedWar;
    }
    else
    {
      v50 = IsClosedWar;
      if ( v140 )
        v50 = AreaBoardInfo_k__BackingField->fields.status == 2 || IsClosedWar;
    }
    EventAddBannerSpriteName = QuestBoardListViewItemDraw__GetEventAddBannerSpriteName(
                                 (QuestBoardListViewItemDraw_o *)IsActiveEventWar,
                                 eventEnt,
                                 warId,
                                 v50 | v42 & 1,
                                 v48);
    v65 = v50 == 0;
    goto LABEL_235;
  }
  if ( AreaBoardInfo_k__BackingField->fields.status == 6 && questBoardType == 2 )
  {
    if ( Mine )
    {
      v51 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v51 = QuestBoardListViewItemDraw_TypeInfo;
      }
      QBOARD_CAP_CLOSED_SPECIAL_FORMAT = v51->static_fields->QBOARD_CAP_CLOSED_SPECIAL_FORMAT;
      PrioredBannerId = WarEntity__GetPrioredBannerId(Mine, 0LL);
      v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId);
      EventAddBannerSpriteName = System_String__Format(QBOARD_CAP_CLOSED_SPECIAL_FORMAT, v53, 0LL);
    }
    else
    {
      EventAddBannerSpriteName = (System_String_o *)StringLiteral_1/*""*/;
    }
    v66 = ScrTerminalListTop_TypeInfo;
    if ( v135 )
    {
      if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
        v66 = ScrTerminalListTop_TypeInfo;
      }
      if ( v34 == v66->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_TARGET_WAR_ID )
        goto LABEL_130;
    }
    if ( (BYTE3(v66->vtable._0_Equals.methodPtr) & 4) != 0 && !v66->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v66);
      v66 = ScrTerminalListTop_TypeInfo;
    }
    if ( v34 != v66->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_TARGET_WAR_ID )
      goto LABEL_121;
    v67 = IsPurchasedByRarePrism;
    if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
    }
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    v68 = this;
    if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    }
    if ( !v68 )
      goto LABEL_312;
    v69 = clsQuestCheck__IsWarClear(
            (clsQuestCheck_o *)v68,
            ScrTerminalListTop_TypeInfo->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_START_COND_WAR_ID,
            0LL);
    IsPurchasedByRarePrism = v67;
    if ( !v69 )
      goto LABEL_121;
    if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
    }
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    v70 = this;
    if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    }
    if ( !v70 )
      goto LABEL_312;
    v71 = clsQuestCheck__IsWarClear(
            (clsQuestCheck_o *)v70,
            ScrTerminalListTop_TypeInfo->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_END_COND_WAR_ID,
            0LL);
    IsPurchasedByRarePrism = v67;
    if ( !v71 )
    {
LABEL_130:
      v74 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v74 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v45 = questBoardItema;
      p_QBOARD_CAP_CLOSED_SPECIAL_2 = &v74->static_fields->QBOARD_CAP_CLOSED_SPECIAL_2;
    }
    else
    {
LABEL_121:
      v45 = questBoardItema;
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
      v72 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v72 = QuestBoardListViewItemDraw_TypeInfo;
      }
      p_QBOARD_CAP_CLOSED_SPECIAL_2 = &v72->static_fields->QBOARD_CAP_CLOSED;
    }
    EventAddBannerSpriteName = *p_QBOARD_CAP_CLOSED_SPECIAL_2;
LABEL_135:
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v49 = IsPurchasedByRarePrism;
    this = (QuestBoardListViewItemDraw_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !this )
      goto LABEL_312;
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)this,
               v34,
               (const MethodInfo_2669BD4 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    v76 = isBlackMarkOnly;
    v77 = Entity;
    v78 = v11;
    v79 = v45;
    goto LABEL_234;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestBoardListViewItemDraw_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !this )
    goto LABEL_312;
  this = (QuestBoardListViewItemDraw_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                           v34,
                                           (const MethodInfo_2669BD4 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
  if ( !this )
    goto LABEL_312;
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
    goto LABEL_312;
  if ( v42 >= msQBoardL1Names->max_length )
    goto LABEL_315;
  v59 = msQBoardL1Names->m_Items[v42];
  v133 = v56;
  PrioredBannerId = v56;
  v60 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &PrioredBannerId);
  EventAddBannerSpriteName = System_String__Format(v59, v60, 0LL);
  v62 = ScrTerminalListTop_TypeInfo;
  if ( v135 )
  {
    if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      v62 = ScrTerminalListTop_TypeInfo;
    }
    static_fields = v62->static_fields;
    if ( v34 == static_fields->AREA_BOARD_FORCE_DISP_TARGET_WAR_ID )
    {
      v64 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
        v45 = questBoardItema;
        v49 = IsPurchasedByRarePrism;
        if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v64 = QuestBoardListViewItemDraw_TypeInfo;
        }
      }
      else
      {
        v45 = questBoardItema;
        v49 = IsPurchasedByRarePrism;
      }
      EventAddBannerSpriteName = v64->static_fields->QBOARD_CAP_CLOSED_SPECIAL;
      goto LABEL_233;
    }
    if ( (BYTE3(v62->vtable._0_Equals.methodPtr) & 4) != 0 && !v62->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v62);
      v62 = ScrTerminalListTop_TypeInfo;
      static_fields = ScrTerminalListTop_TypeInfo->static_fields;
    }
    if ( v34 == static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_TARGET_WAR_ID )
    {
      if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
      }
      this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      v80 = this;
      if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      }
      if ( !v80 )
        goto LABEL_312;
      v81 = clsQuestCheck__IsWarClear(
              (clsQuestCheck_o *)v80,
              ScrTerminalListTop_TypeInfo->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_END_COND_WAR_ID,
              0LL);
      v82 = QuestBoardListViewItemDraw_TypeInfo;
      if ( v81 )
      {
        v45 = questBoardItema;
        if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          v49 = IsPurchasedByRarePrism;
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v82 = QuestBoardListViewItemDraw_TypeInfo;
        }
        else
        {
          v49 = IsPurchasedByRarePrism;
        }
        EventAddBannerSpriteName = v82->static_fields->QBOARD_CAP_CLOSED_SPECIAL_3;
      }
      else
      {
        v45 = questBoardItema;
        if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          v49 = IsPurchasedByRarePrism;
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v82 = QuestBoardListViewItemDraw_TypeInfo;
        }
        else
        {
          v49 = IsPurchasedByRarePrism;
        }
        EventAddBannerSpriteName = v82->static_fields->QBOARD_CAP_CLOSED_SPECIAL_2;
      }
      goto LABEL_233;
    }
  }
  if ( (BYTE3(v62->vtable._0_Equals.methodPtr) & 4) != 0 && !v62->_2.cctor_finished )
  {
    v49 = IsPurchasedByRarePrism;
    j_il2cpp_runtime_class_init_0(v62);
    v62 = ScrTerminalListTop_TypeInfo;
  }
  else
  {
    v49 = IsPurchasedByRarePrism;
  }
  v83 = v143;
  if ( warId != v62->static_fields->NT2_EFFECT_AREA_BOARD_TARGET_WAR_ID )
    goto LABEL_222;
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v84 = this;
  if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  }
  if ( !v84 )
    goto LABEL_312;
  if ( clsQuestCheck__IsWarClear(
         (clsQuestCheck_o *)v84,
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
  this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v85 = this;
  if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  }
  if ( !v85 )
    goto LABEL_312;
  if ( !clsQuestCheck__IsQuestClear(
          (clsQuestCheck_o *)v85,
          ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_QUEST_ID,
          0,
          0LL) )
    goto LABEL_222;
  v86 = ScrTerminalListTop_TypeInfo;
  if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v86 = ScrTerminalListTop_TypeInfo;
  }
  NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID = v86->static_fields->NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID;
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
  if ( !byte_4210852 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v88);
    byte_4210852 = 1;
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
  v65 = QuestId_k__BackingField == v90->static_fields->NT2_EFFECT_AREA_BOARD_QUEST_ID;
  v83 = v143;
  if ( !v65 )
    goto LABEL_222;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210853 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v88);
    byte_4210853 = 1;
  }
  v92 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v83 = v143;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v92 = TerminalPramsManager_TypeInfo;
    }
  }
  else
  {
    v83 = v143;
  }
  if ( v92->static_fields->_PhaseCnt_k__BackingField != 2 )
  {
LABEL_222:
    v45 = questBoardItema;
    if ( isBoardDisp && v83 && !isBlackMarkOnly && !isWhiteMarkOnly )
      goto LABEL_233;
    this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
    }
    v97 = *(_QWORD *)&this->fields.mTitleLevelSp[2].fields.m_CachedPtr;
    if ( !v97 )
      goto LABEL_312;
    if ( *(_DWORD *)(v97 + 24) > 1u )
    {
      v94 = *(System_String_o **)(v97 + 40);
      v96 = int_TypeInfo;
      mStatusSp = v133;
      goto LABEL_232;
    }
LABEL_315:
    v132 = sub_B0D9A8(this);
    sub_B0D948(v132, 0LL);
  }
  this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  }
  v45 = questBoardItema;
  v93 = *(_QWORD *)&this->fields.mTitleLevelSp[2].fields.m_CachedPtr;
  if ( !v93 )
    goto LABEL_312;
  if ( *(_DWORD *)(v93 + 24) <= 1u )
    goto LABEL_315;
  v94 = *(System_String_o **)(v93 + 40);
  mStatusSp = (int32_t)v55->fields.mStatusSp;
  v96 = int_TypeInfo;
LABEL_232:
  PrioredBannerId = mStatusSp;
  v98 = (Il2CppObject *)j_il2cpp_value_box_0(v96, &PrioredBannerId);
  EventAddBannerSpriteName = System_String__Format(v94, v98, 0LL);
LABEL_233:
  v76 = isBlackMarkOnly;
  v78 = v11;
  v79 = v45;
  v77 = (WarEntity_o *)v55;
LABEL_234:
  QuestBoardListViewItemDraw__SetBlackMarkAndWhiteMark(v78, v79, v77, v76, isWhiteMarkOnly, v61);
  LOBYTE(v42) = 0;
  v65 = !IsClosedWar;
LABEL_235:
  mcBaseP = v11->fields.mcBaseP;
  v100 = !v65;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(mcBaseP, EventAddBannerSpriteName, 0LL);
  v46 = v143;
  IsPurchasedByRarePrism = v49;
  v41 = v134;
  if ( v100 )
  {
    v102 = (UIWidget_o *)v11->fields.mcBaseP;
    *(UnityEngine_Color_o *)&v103 = UnityEngine_Color__get_gray(0LL);
    if ( !v102 )
      goto LABEL_312;
    UIWidget__set_color(v102, *(UnityEngine_Color_o *)&v103, 0LL);
  }
  questCount = 0;
  if ( v42 & 1 | !v134 && v143 )
    questCount = AreaBoardInfo_k__BackingField->fields.questCount;
  QuestBoardListViewItemDraw__SetBadge(v11, questCount, v101);
LABEL_248:
  this = (QuestBoardListViewItemDraw_o *)v11->fields.mcBaseP;
  if ( !this )
    goto LABEL_312;
  p_mOptionInfoLb = (QuestBoardListViewItemDraw_o **)&v11->fields.mOptionInfoLb;
  ((void (__fastcall *)(QuestBoardListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
    this,
    this->klass[2]._1.interopData);
  if ( !v46 )
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
              QuestBoardListViewItemDraw__SetStatusActive(v11, status, 0, v113);
            v115 = QuestBoardListViewItemDraw_TypeInfo;
            if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
              v115 = QuestBoardListViewItemDraw_TypeInfo;
            }
            QuestBoardListViewItemDraw__SetNewIcon(
              v11,
              v115->static_fields->NEW_POS_AREA,
              v115->static_fields->NEW_W_AREA,
              v115->static_fields->NEW_H_AREA,
              v113);
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
  v110 = AreaBoardInfo_k__BackingField->fields.status;
  if ( v110 && v110 != 6 )
    QuestBoardListViewItemDraw__SetStatusActive(v11, v110, v42 & 1 | (v110 != 1 || !v41), v109);
  v111 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v112 = v140;
    if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v111 = QuestBoardListViewItemDraw_TypeInfo;
    }
  }
  else
  {
    v112 = v140;
  }
  QuestBoardListViewItemDraw__SetNewIcon(
    v11,
    v111->static_fields->NEW_POS_AREA,
    v111->static_fields->NEW_W_AREA,
    v111->static_fields->NEW_H_AREA,
    v109);
  if ( (IsClosedWar & v112) != 0 )
    QuestBoardListViewItemDraw__SetStatusActive(v11, 2, 1, v117);
  QuestBoardListViewItemDraw__SetClearSprite(v11, Mine, v116);
  QuestBoardListViewItemDraw__SetNextSprite(v11, AreaBoardInfo_k__BackingField, Mine, v118);
  QuestBoardListViewItemDraw__CreateInfoTextList(v11, v45, (int64_t)checkTime, v119);
  this = (QuestBoardListViewItemDraw_o *)v11->fields.mRarePrismSp;
  if ( !this )
    goto LABEL_312;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_312;
  v120 = (IsClosedWar & v112) == 0 && IsPurchasedByRarePrism;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v120, 0LL);
  if ( v112 )
    goto LABEL_284;
  mInfoTextList = v11->fields.mInfoTextList;
  if ( !mInfoTextList )
    goto LABEL_312;
  size = mInfoTextList->fields._size;
  if ( size < 1 )
  {
LABEL_284:
    v121 = 0;
    goto LABEL_296;
  }
  v124 = v11->fields.mListViewObject;
  if ( !v124 )
    goto LABEL_312;
  this = (QuestBoardListViewItemDraw_o *)v124->fields.manager;
  if ( !this )
    goto LABEL_312;
  v125 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v125
    || (QuestBoardListViewManager_c *)this->klass->_2.typeHierarchy[v125 - 1] != QuestBoardListViewManager_TypeInfo )
  {
    goto LABEL_314;
  }
  AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt((QuestBoardListViewManager_o *)this, size, 0LL);
  if ( mInfoTextList->fields._size <= (unsigned int)AlphaAnimCnt )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  this = (QuestBoardListViewItemDraw_o *)mInfoTextList->fields._items->m_Items[AlphaAnimCnt];
  if ( !this )
    goto LABEL_312;
  QuestBoardInformaionText__SetTime(
    (QuestBoardInformaionText_o *)this,
    &v11->fields.mOptionInfoLb,
    &v11->fields.mOptionInfoFrameSp,
    v126);
  this = (QuestBoardListViewItemDraw_o *)v11->fields.mOptionInfoLb;
  if ( !this )
    goto LABEL_312;
  BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)this, 1.0, 0LL);
  v121 = 1;
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v121, 0LL);
  this = *p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_312;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_312;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v121, 0LL);
  mEarthLine = (UnityEngine_Object_o *)v11->fields.mEarthLine;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mEarthLine, 0LL, 0LL) )
  {
    this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
    v130 = v11->fields.mEarthLine;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      this = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
    }
    if ( v130 )
    {
      mTitleLevelSp = (float *)this->fields.mTitleLevelSp;
      v146.fields.x = mTitleLevelSp[58];
      v146.fields.y = mTitleLevelSp[59];
      v146.fields.z = mTitleLevelSp[60];
      QuestBoardListViewEarthLine__SetupSecond(v130, v146, v11->fields.mListViewObject, warId, v129);
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
  struct UnityEngine_GameObject_o *mClassIconRoot; // x28
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
  int32_t size; // w1
  struct QuestBoardListViewObject_o *v89; // x8
  __int64 v90; // x10
  const MethodInfo *v91; // x3
  int32_t AlphaAnimCnt; // w20
  QuestBoardListViewItemDraw_c *v93; // x0
  __int64 v94; // x0
  System_Collections_Generic_List_MapControl_QuestInfo__o *questList; // [xsp+0h] [xbp-80h]
  int v96; // [xsp+Ch] [xbp-74h]
  int64_t v97; // [xsp+10h] [xbp-70h]
  EventEntity_o *eventEnt; // [xsp+18h] [xbp-68h]
  _BOOL4 IsClosedWar; // [xsp+20h] [xbp-60h]
  int v100; // [xsp+24h] [xbp-5Ch]
  int v101; // [xsp+28h] [xbp-58h] BYREF
  int v102; // [xsp+2Ch] [xbp-54h] BYREF

  v4 = this;
  if ( (byte_4216CD8 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, questBoardItem);
    sub_B0D8A4(&BalanceConfig_TypeInfo, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_WarMaster___, v6);
    sub_B0D8A4(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v7);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v8);
    sub_B0D8A4(&int_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__, v11);
    sub_B0D8A4(&QuestBoardListViewItemDraw_TypeInfo, v12);
    sub_B0D8A4(&QuestBoardListViewManager_TypeInfo, v13);
    sub_B0D8A4(&ScrTerminalListTop_TypeInfo, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B0D8A4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v16);
    sub_B0D8A4(&Method_SingletonTemplate_QuestTree__get_Instance__, v17);
    sub_B0D8A4(&SingletonTemplate_QuestTree__TypeInfo, v18);
    sub_B0D8A4(&SingletonTemplate_clsQuestCheck__TypeInfo, v19);
    this = (QuestBoardListViewItemDraw_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v20);
    byte_4216CD8 = 1;
  }
  if ( !questBoardItem )
    goto LABEL_200;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
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
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !this )
      goto LABEL_200;
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
    this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !this )
      goto LABEL_200;
    this = (QuestBoardListViewItemDraw_o *)QuestTree__IsActiveEventWar((QuestTree_o *)this, warId, 0LL);
    v28 = (unsigned __int8)this & 1;
  }
  else
  {
    v28 = 0;
  }
  mListViewObject = v4->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_200;
  this = (QuestBoardListViewItemDraw_o *)mListViewObject->fields.manager;
  if ( !this )
    goto LABEL_200;
  v30 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v30
    || (QuestBoardListViewManager_c *)this->klass->_2.typeHierarchy[v30 - 1] != QuestBoardListViewManager_TypeInfo )
  {
    sub_B0DC70(this);
LABEL_202:
    sub_B0DC70(this);
    goto LABEL_203;
  }
  mClassIconRoot = this->fields.mClassIconRoot;
  if ( v26 )
  {
    if ( !v24 )
      goto LABEL_200;
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
  v97 = (int64_t)mClassIconRoot;
  eventEnt = v27;
  this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !this )
    goto LABEL_200;
  questList = (System_Collections_Generic_List_MapControl_QuestInfo__o *)this->fields.mCommonAtlas;
  IsPurchasedByRarePrism = QuestBoardListViewItemDraw__IsPurchasedByRarePrism(this, questList, v25, v33);
  v100 = v28 & (IsPurchasedByRarePrism || !IsMainInterlude);
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
    v96 = IsClosedWar;
    if ( v100 == 0 && IsMainInterlude )
    {
      if ( v25 && (WarEntity__HasFlag(v25, 128, 0LL) || WarEntity__HasFlag(v25, 32, 0LL)) )
      {
        status = AreaBoardInfo_k__BackingField->fields.status;
        v37 = IsClosedWar;
LABEL_64:
        v96 = v37 || status == 2;
        goto LABEL_65;
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
        goto LABEL_64;
      }
    }
LABEL_65:
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
      this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      v40 = this;
      if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      }
      if ( !v40 )
        goto LABEL_200;
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
        this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
        v41 = this;
        if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
        }
        if ( !v41 )
          goto LABEL_200;
        if ( !clsQuestCheck__IsWarClear(
                (clsQuestCheck_o *)v41,
                ScrTerminalListTop_TypeInfo->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_START_COND_WAR_ID,
                0LL) )
          goto LABEL_196;
        if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
        }
        this = (QuestBoardListViewItemDraw_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !this )
          goto LABEL_200;
        v42 = this;
        this = (QuestBoardListViewItemDraw_o *)ScrTerminalListTop_TypeInfo;
        v43 = *(MapControl_RootInfo_o **)&v42->fields.m_CachedPtr;
        if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
        }
        if ( !v43 )
          goto LABEL_200;
        IsOpenedMainScenarioWar = (ScrTerminalListTop_c *)MapControl_RootInfo__IsOpenedMainScenarioWar(
                                                            v43,
                                                            ScrTerminalListTop_TypeInfo->static_fields->WHITE_MARK_AREA_BOARD_FORCE_DISP_TARGET_WAR_ID,
                                                            0LL);
        if ( ((unsigned __int8)IsOpenedMainScenarioWar & 1) == 0 )
        {
LABEL_196:
          v93 = QuestBoardListViewItemDraw_TypeInfo;
          if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
            v93 = QuestBoardListViewItemDraw_TypeInfo;
          }
          QBOARD_CAP_CLOSED = v93->static_fields->QBOARD_CAP_CLOSED_SPECIAL_2;
          goto LABEL_123;
        }
      }
    }
    if ( v25
      && (IsOpenedMainScenarioWar = (ScrTerminalListTop_c *)WarEntity__HasFlag(v25, 128, 0LL),
          ((unsigned __int8)IsOpenedMainScenarioWar & 1) != 0) )
    {
      this = (QuestBoardListViewItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_200;
      this = (QuestBoardListViewItemDraw_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !this )
        goto LABEL_200;
      this = (QuestBoardListViewItemDraw_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                               (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                               warId,
                                               (const MethodInfo_2669BD4 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_200;
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
        goto LABEL_200;
      if ( msQBoardL1Names->max_length > 1 )
      {
        v47 = msQBoardL1Names->m_Items[1];
        v102 = v44;
        v48 = &v102;
LABEL_121:
        v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v48);
        EventAddBannerSpriteName = System_String__Format(v47, v55, 0LL);
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
                                     (v100 != 0) | (unsigned __int8)v96,
                                     v35);
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
                                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
        *(UnityEngine_Color_o *)&v58 = UnityEngine_Color__get_white(0LL);
        if ( !Component_srcLineSprite )
          goto LABEL_200;
        UIWidget__set_color(Component_srcLineSprite, *(UnityEngine_Color_o *)&v58, 0LL);
        if ( v96 )
        {
          v62 = (UIWidget_o *)v4->fields.mcBaseP;
          *(UnityEngine_Color_o *)&v63 = UnityEngine_Color__get_gray(0LL);
          if ( !v62 )
            goto LABEL_200;
          UIWidget__set_color(v62, *(UnityEngine_Color_o *)&v63, 0LL);
        }
        goto LABEL_137;
      }
      this = (QuestBoardListViewItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_200;
      this = (QuestBoardListViewItemDraw_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !this )
        goto LABEL_200;
      this = (QuestBoardListViewItemDraw_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                               (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                               warId,
                                               (const MethodInfo_2669BD4 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
      if ( !this )
        goto LABEL_200;
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
        goto LABEL_200;
      if ( v54->max_length > 2 )
      {
        v47 = v54->m_Items[2];
        v48 = &v101;
        v101 = v52;
        goto LABEL_121;
      }
    }
LABEL_203:
    v94 = sub_B0D9A8(this);
    sub_B0D948(v94, 0LL);
  }
LABEL_137:
  this = (QuestBoardListViewItemDraw_o *)v4->fields.mRarePrismSp;
  if ( !this )
    goto LABEL_200;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_200;
  v67 = (!IsMainInterlude || !IsClosedWar) && IsPurchasedByRarePrism;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v67, 0LL);
  if ( v25 && ((HasFlag = WarEntity__HasFlag(v25, 128, 0LL)) || (HasFlag = WarEntity__HasFlag(v25, 32, 0LL))) )
  {
    v71 = AreaBoardInfo_k__BackingField->fields.status;
    if ( v71 && v71 != 6 )
      QuestBoardListViewItemDraw__SetStatusActive(v4, v71, v100 != 0 || eventEnt == 0LL || v71 != 1, v68);
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
      goto LABEL_173;
  }
  if ( WarEntity__IsContainPrioredEntity(v25, 18, 0LL) )
  {
    QuestBoardListViewItemDraw__SetStatusActive(v4, 2, 1, v81);
    QuestBoardListViewItemDraw__SetClearSprite(v4, v25, v82);
  }
  if ( WarEntity__IsDispWhiteMarkUnderBoard(v25, 0LL) )
    QuestBoardListViewItemDraw__SetBlackMarkAndWhiteMark(v4, questBoardItem, v25, 0, 0, v83);
LABEL_173:
  if ( IsPurchasedByRarePrism || v100 != 0 || eventEnt == 0LL )
    questCount = AreaBoardInfo_k__BackingField->fields.questCount;
  else
    questCount = 0;
  QuestBoardListViewItemDraw__SetBadge(v4, questCount, v80);
  QuestBoardListViewItemDraw__CreateInfoTextList(v4, questBoardItem, v97, v85);
  if ( !IsMainInterlude )
  {
    mInfoTextList = v4->fields.mInfoTextList;
    if ( !mInfoTextList )
      goto LABEL_200;
    size = mInfoTextList->fields._size;
    if ( size >= 1 )
    {
      v89 = v4->fields.mListViewObject;
      if ( !v89 )
        goto LABEL_200;
      this = (QuestBoardListViewItemDraw_o *)v89->fields.manager;
      if ( !this )
        goto LABEL_200;
      v90 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v90
        && (QuestBoardListViewManager_c *)this->klass->_2.typeHierarchy[v90 - 1] == QuestBoardListViewManager_TypeInfo )
      {
        AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt((QuestBoardListViewManager_o *)this, size, 0LL);
        if ( mInfoTextList->fields._size <= (unsigned int)AlphaAnimCnt )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        this = (QuestBoardListViewItemDraw_o *)mInfoTextList->fields._items->m_Items[AlphaAnimCnt];
        if ( this )
        {
          QuestBoardInformaionText__SetTime(
            (QuestBoardInformaionText_o *)this,
            &v4->fields.mOptionInfoLb,
            &v4->fields.mOptionInfoFrameSp,
            v91);
          this = (QuestBoardListViewItemDraw_o *)v4->fields.mOptionInfoLb;
          if ( this )
          {
            BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)this, 1.0, 0LL);
            v86 = 1;
            goto LABEL_189;
          }
        }
LABEL_200:
        sub_B0D97C(this);
      }
      goto LABEL_202;
    }
  }
  v86 = 0;
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v86, 0LL);
  this = (QuestBoardListViewItemDraw_o *)v4->fields.mOptionInfoLb;
  if ( !this )
    goto LABEL_200;
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_200;
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
  __int64 v59; // x22
  __int64 Instance; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x20
  DataManager_o *v68; // x27
  QuestEntity_o *PhaseDetailedEntity; // x19
  unsigned int v70; // w23
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  __int64 v72; // x9
  int32_t dispType; // w26
  int v74; // s0
  int v75; // s1
  int v76; // s2
  int v77; // s3
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x24
  _BOOL4 v79; // w0
  int32_t v80; // w19
  _BOOL4 v81; // w25
  int32_t PhaseMax; // w0
  UnityEngine_GameObject_o *mLabelObj; // x8
  int OverwriteBannerId_k__BackingField; // w8
  QuestBoardListViewItemDraw_c *v85; // x0
  System_String_o *v86; // x24
  System_String_o *v87; // x1
  System_String_o *v88; // x0
  QuestBoardListViewItemDraw_c *v89; // x0
  System_String_o *QUEST_BOARD_SPNAME_PREFIX; // x28
  System_String_o *v91; // x0
  UISprite_o *v92; // x24
  struct UISprite_o **p_mcBaseP; // x27
  System_String_o *v94; // x28
  int32_t questId; // w24
  const MethodInfo *v96; // x1
  const MethodInfo *v97; // x3
  UnityEngine_GameObject_o *gameObject; // x24
  QuestBoardListViewItemDraw_c *v99; // x8
  float NEXT_POS_X_QUEST; // w8
  bool v101; // w28
  int32_t v102; // w1
  const MethodInfo *v103; // x3
  QuestBoardListViewItemDraw_c *v104; // x0
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  QuestBoardListViewItemDraw_c *v109; // x0
  const MethodInfo *v110; // x2
  struct QuestBoardListViewItemDraw_StaticFields *v111; // x8
  float v112; // s0
  float v113; // s1
  float v114; // s2
  const MethodInfo *v115; // x1
  const MethodInfo *v116; // x2
  UnityEngine_GameObject_o *v117; // x24
  QuestBoardListViewItemDraw_c *v118; // x0
  QuestBoardListViewItemDraw_o *v119; // x0
  const MethodInfo *v120; // x5
  System_String_o *RecommendLv; // x0
  const MethodInfo *v122; // x2
  const MethodInfo *v123; // x2
  UISprite_o *mLabelFaceMaskQuestSp; // x24
  QuestBoardListViewItemDraw_o *v125; // x0
  int32_t y_low; // w25
  System_String_o *FaceMaskSpriteName; // x0
  QuestEntity_o *v128; // x22
  const MethodInfo *v129; // x5
  bool v130; // w0
  const MethodInfo *v131; // x3
  UILabel_o *mTitleNameLb; // x24
  const MethodInfo *v133; // x4
  __int64 v134; // x27
  QuestBoardListViewItemDraw_o *v135; // x0
  const MethodInfo *v136; // x2
  UILabel_o *mLabelSubSectionNumLb; // x23
  const MethodInfo *v138; // x2
  bool v139; // w8
  QuestBoardListViewItemDraw_o *p_chapterSubId; // x0
  UISprite_o *mLabelNameSp; // x24
  QuestBoardListViewItemDraw_o *v142; // x0
  const MethodInfo *v143; // x3
  System_String_o *QuestIconName; // x23
  __int64 v145; // x1
  __int64 v146; // x2
  System_Action_o *v147; // x23
  const MethodInfo *v148; // x3
  struct QuestBoardListViewItemDraw_StaticFields *v149; // x8
  UISprite_o *mcBaseP; // x24
  __int64 v151; // x8
  System_String_o *v152; // x28
  System_String_o *v153; // x0
  System_String_o *v154; // x28
  UISprite_o *v155; // x24
  __int64 v156; // x8
  UISprite_o *mLabelChapterSp; // x23
  QuestBoardListViewItemDraw_o *v158; // x0
  const MethodInfo *v159; // x2
  System_String_o *QuestIconNameForMainType; // x24
  int32_t QuestBoardSectionId; // w0
  int32_t v162; // w24
  UISprite_o *mLabelBoardSectionSp; // x23
  QuestBoardListViewItemDraw_c *v164; // x0
  System_String_o *CHAPTER_SP_UNIT_NAME; // x25
  Il2CppObject *v166; // x0
  System_String_o *v167; // x24
  UILabel_o *v168; // x23
  const MethodInfo *v169; // x3
  int32_t v170; // w23
  int32_t afterClear; // w24
  float v172; // s8
  float v173; // s9
  float v174; // s10
  float v175; // s11
  bool IsRepeatReward; // w0
  const MethodInfo *v177; // x4
  const MethodInfo *v178; // x3
  bool v179; // w23
  int v180; // w19
  const MethodInfo *v181; // x1
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *mInfoTextList; // x23
  const MethodInfo *v183; // x6
  int64_t *p_endTime; // x8
  int64_t v185; // x23
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v186; // x24
  System_String_o *v187; // x28
  __int64 v188; // x1
  __int64 v189; // x2
  QuestBoardInformaionText_o *v190; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v191; // x25
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v192; // x19
  int32_t size; // w1
  struct BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x23
  struct QuestBoardListViewObject_o *v195; // x8
  __int64 v196; // x10
  const MethodInfo *v197; // x3
  int32_t AlphaAnimCnt; // w24
  bool v199; // w24
  const MethodInfo *v200; // x1
  int32_t v201; // w24
  UISprite_o *mCostApSp; // x23
  System_String_o *ApSpriteFileName; // x24
  UnityEngine_GameObject_o *mChallengeObj; // x23
  bool v205; // w1
  QuestBoardListViewItemDraw_c *v206; // x0
  struct QuestBoardListViewItemDraw_StaticFields *v207; // x10
  float *p_x; // x8
  float *p_y; // x9
  float *p_z; // x10
  struct UILabel_o **p_mChallengeLb; // x19
  struct QuestBoardListViewItemDraw_StaticFields *v212; // x10
  EventDetailEntity_o *Entity; // x23
  int32_t ClearNum; // w23
  UISprite_o *challengeStrSpr; // x24
  UILabel_o *mChallengeLb; // x24
  UnityEngine_GameObject_o *mPhaseObj; // x23
  bool v218; // w1
  const MethodInfo *v219; // x4
  int32_t v220; // w19
  QuestBoardListViewItemDraw_c *v221; // x8
  int32_t v222; // w23
  __int16 v223; // w9
  int v224; // w10
  struct QuestBoardListViewItemDraw_StaticFields *v225; // x9
  int32_t PHASE_NORMAL_MAX; // w11
  _BOOL4 v227; // w25
  bool v228; // w27
  int32_t *p_QUEST_BOARD_PHASE_INTERVAL; // x9
  int32_t v230; // w26
  int v231; // w20
  bool v232; // w21
  int v233; // w22
  unsigned int v234; // w19
  struct UISprite_array *mPhaseSp; // x8
  Il2CppClass **v236; // x8
  UISprite_o *v237; // x28
  const MethodInfo *v238; // x6
  bool v239; // w2
  System_String_o *PhaseArrowSpriteName; // x0
  int v241; // s0
  QuestBoardListViewItemDraw_o *v245; // x0
  const MethodInfo *v246; // x3
  int32_t PhaseArrowIntervalSize; // w24
  QuestBoardListViewItemDraw_o *v248; // x26
  QuestEntity_o *v249; // x22
  UnityEngine_GameObject_o *v250; // x23
  QuestBoardListViewItemDraw_c *v251; // x0
  UISprite_o *mDamageRecordSp; // x23
  System_String_o *QUEST_BOARD_DAMAGE_RECODE_NAME; // x24
  UserQuestRecordMaster_o *v254; // x23
  void (__fastcall *MaxTurnDamage)(); // x0
  UILabel_o *mDamageRecordLb; // x23
  Il2CppObject *v257; // x0
  UnityEngine_GameObject_o *v258; // x23
  QuestBoardListViewItemDraw_c *v259; // x0
  UISprite_o *mKnockdownRecordSp; // x23
  System_String_o *QUEST_BOARD_KNOCKDOWN_RECODE_NAME; // x24
  __int64 v262; // x1
  __int64 v263; // x2
  __int64 v264; // x23
  UserQuestRecordMaster_o *v265; // x24
  UILabel_o *mKnockdownRecordCountLb; // x24
  System_String_o *v267; // x25
  Il2CppObject *v268; // x0
  UILabel_o *mKnockdownRecordDamageLb; // x24
  System_String_o *v270; // x25
  Il2CppObject *v271; // x0
  UILabel_o *mKnockdownRecordPlusLb; // x25
  System_String_o *v273; // x24
  _QWORD **v274; // x20
  __int64 v275; // x26
  __int16 v276; // w8
  __int64 v277; // x26
  __int64 v278; // x26
  __int64 v279; // x26
  UILabel_o *mKnockdownRecordDamageNameLb; // x25
  System_String_o *v281; // x0
  _QWORD **v282; // x19
  System_String_o *v283; // x24
  __int64 v284; // x26
  __int16 v285; // w8
  __int64 v286; // x26
  __int64 v287; // x26
  __int64 v288; // x26
  UnityEngine_GameObject_o *v289; // x0
  QuestBoardListViewItemDraw_c *v290; // x8
  UnityEngine_GameObject_o *v291; // x23
  float QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX; // s0
  UnityEngine_GameObject_o *v293; // x0
  float LocalPositionX; // s0
  QuestBoardListViewItemDraw_c *v295; // x0
  float v296; // s8
  UIWidget_o *mQuestInfoBtn; // x0
  int32_t id; // w23
  __int64 v299; // x1
  TerminalSceneComponent_c *v300; // x0
  UIWidget_o *v301; // x23
  __int64 v302; // x1
  UILabel_o *mOptionRestrinctionLb; // x23
  UnityEngine_GameObject_o *v304; // x23
  UnityEngine_Behaviour_o *v305; // x23
  const MethodInfo *v306; // x3
  __int64 v307; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v308; // x0
  struct UIRect_AnchorPoint_o *leftAnchor; // x8
  QuestPhaseDetailEntity_BoardInfo_array *v310; // x25
  struct UIRect_AnchorPoint_o *rightAnchor; // x8
  QuestPhaseDetailEntity_BoardInfo_o *v312; // x8
  bool v313; // w23
  bool v314; // w25
  char v315; // w27
  UIWidget_o **p_mCostConsumeBattleWinSp; // x19
  bool v317; // w24
  QuestBoardListViewItemDraw_c *v318; // x0
  UISprite_o *mOptionPreBattleSp; // x24
  System_String_o *PRE_BATTLE_ORGANIZATION; // x26
  bool v321; // w24
  float v322; // s4
  float v323; // s5
  float v324; // s6
  float v325; // s7
  float v326; // s4
  float v327; // s5
  float v328; // s6
  float v329; // s7
  UIWidget_o *v330; // x24
  int klass; // s0
  int klass_high; // s1
  int return_type; // s2
  int invoker_method_high; // s3
  struct System_Collections_Generic_List_UISprite__o *mMultiSecondBattleInformation; // x8
  char v336; // w24
  UnityEngine_GameObject_o *v337; // x23
  QuestBoardListViewItemDraw_c *v338; // x8
  const MethodInfo *v339; // x2
  UIWidget_o *v340; // x23
  int32_t restrictionDefaultWidth; // w1
  const MethodInfo *v342; // x2
  struct UILabel_o *v343; // x8
  QuestBoardListViewItemDraw_c *v344; // x0
  int32_t RESTRICTION_FONT_SPACING_DEFAULT; // w1
  QuestBoardListViewItemDraw_c *v346; // x0
  int32_t mSpacingX; // w19
  float v348; // s5
  float v349; // s6
  float v350; // s7
  UIWidget_o *mOptionRestrinctionSp; // x23
  int v352; // w19
  QuestPhaseEntity_o *v353; // x0
  QuestPhaseEntity_o *v354; // x23
  struct System_Int32_array *classIds; // x8
  bool v356; // w24
  struct ServantClassIconComponent_array *mClassIcons; // x8
  int max_length; // w19
  struct System_Int32_array *v359; // x20
  int v360; // w21
  int v361; // w9
  __int64 v362; // x22
  __int64 v363; // x8
  UnityEngine_Component_o *v364; // x23
  UnityEngine_Object_o *eventTarget; // x22
  UnityEngine_Object_o *eventTargetComponent; // x22
  ViewEnemyEntity_array *EntityListFromQuestId; // x0
  __int64 v368; // x1
  __int64 v369; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v370; // x22
  QuestBoardListViewItemDraw___c_c *v371; // x0
  struct QuestBoardListViewItemDraw___c_StaticFields *v372; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__305_1; // x23
  Il2CppObject *v374; // x24
  struct QuestBoardListViewItemDraw___c_StaticFields *v375; // x0
  System_String_array **v376; // x2
  System_String_array **v377; // x3
  System_Boolean_array **v378; // x4
  System_Int32_array **v379; // x5
  System_Int32_array *v380; // x6
  System_Int32_array *v381; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v382; // x0
  System_Int32_array *v383; // x22
  UnityEngine_Object_o *alloutRoot; // x21
  UnityEngine_Object_o *alloutRootComponent; // x21
  int32_t v386; // w21
  QuestBoardListViewItemDraw_c *v387; // x0
  int *p_RESTRICTION_FONT_WIDTH_ALLOUT; // x8
  __int64 v389; // x0
  __int64 v390; // x0
  QuestBoardListViewItemDraw_o *v391; // x0
  QuestBoardListViewItem_o *v392; // x1
  const MethodInfo *v393; // x2
  EventCampaignEntity_o *v394; // [xsp+0h] [xbp-130h]
  const MethodInfo *v395; // [xsp+10h] [xbp-120h]
  bool v396; // [xsp+1Ch] [xbp-114h]
  int v397; // [xsp+20h] [xbp-110h]
  int key; // [xsp+24h] [xbp-10Ch]
  DataManager_o *v399; // [xsp+28h] [xbp-108h]
  int32_t questPhase; // [xsp+34h] [xbp-FCh]
  int64_t checkTime; // [xsp+38h] [xbp-F8h]
  int32_t checkTimea; // [xsp+38h] [xbp-F8h]
  QuestBoardListViewItem_o *v403; // [xsp+40h] [xbp-F0h]
  int32_t *v404; // [xsp+40h] [xbp-F0h]
  QuestEntity_o *v405; // [xsp+48h] [xbp-E8h]
  __int64 v406; // [xsp+50h] [xbp-E0h]
  _BOOL4 v407; // [xsp+5Ch] [xbp-D4h]
  bool HasFlag; // [xsp+60h] [xbp-D0h]
  QuestBoardListViewItemDraw_o *v409; // [xsp+60h] [xbp-D0h]
  MethodInfo methoda; // [xsp+68h] [xbp-C8h] BYREF
  UnityEngine_Vector3_o v411; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v412; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v414; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v415; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v416; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v417; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v418; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v419; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v420; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4216CDB & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, questBoardItem);
    sub_B0D8A4(&Method_System_Array_Empty_object___, v5);
    sub_B0D8A4(&AtlasManager_TypeInfo, v6);
    sub_B0D8A4(&CondType_TypeInfo, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserQuestMaster___, v12);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserQuestRecordMaster___, v13);
    sub_B0D8A4(&Method_DataManager_GetMaster_ViewEnemyMaster___, v14);
    sub_B0D8A4(&DataManager_TypeInfo, v15);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v16);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___, v17);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_QuestPhaseDetailEntity_BoardInfo___, v18);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v19);
    sub_B0D8A4(&Method_System_Func_ViewEnemyEntity__int___ctor__, v20);
    sub_B0D8A4(&System_Func_ViewEnemyEntity__int__TypeInfo, v21);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewMultiLimitedFormation___, v22);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v23);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIButton___, v24);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v25);
    sub_B0D8A4(&int_TypeInfo, v26);
    sub_B0D8A4(&long_TypeInfo, v27);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__, v28);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UISprite__Add__, v29);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__, v30);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, v31);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UISprite__get_Count__, v32);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__, v33);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v34);
    sub_B0D8A4(&NetworkManager_TypeInfo, v35);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v36);
    sub_B0D8A4(&QuestBoardInformaionText_TypeInfo, v37);
    sub_B0D8A4(&QuestBoardListViewItemDraw_TypeInfo, v38);
    sub_B0D8A4(&QuestBoardListViewManager_TypeInfo, v39);
    sub_B0D8A4(&QuestInformationComponent_TypeInfo, v40);
    sub_B0D8A4(&QuestKnockdownInfo_TypeInfo, v41);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v42);
    sub_B0D8A4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v43);
    sub_B0D8A4(&SingletonTemplate_clsQuestCheck__TypeInfo, v44);
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v45);
    sub_B0D8A4(&Method_QuestBoardListViewItemDraw___c__SetItemOfQuest_b__305_1__, v46);
    sub_B0D8A4(&Method_QuestBoardListViewItemDraw___c__DisplayClass305_0__SetItemOfQuest_b__0__, v47);
    sub_B0D8A4(&QuestBoardListViewItemDraw___c__DisplayClass305_0_TypeInfo, v48);
    sub_B0D8A4(&QuestBoardListViewItemDraw___c_TypeInfo, v49);
    sub_B0D8A4(&StringLiteral_13452/*"TIME_REST_QUEST_BOARD_QUEST"*/, v50);
    sub_B0D8A4(&StringLiteral_21706/*"questboard_challenge"*/, v51);
    sub_B0D8A4(&StringLiteral_10922/*"QUEST_BOARD_KNOCKDOWN_PLUS"*/, v52);
    sub_B0D8A4(&StringLiteral_10919/*"QUEST_BOARD_KNOCKDOWN_COUNT"*/, v53);
    sub_B0D8A4(&StringLiteral_23567/*"{0:#,0}"*/, v54);
    sub_B0D8A4(&StringLiteral_10921/*"QUEST_BOARD_KNOCKDOWN_DAMAGE_NAME"*/, v55);
    sub_B0D8A4(&StringLiteral_10920/*"QUEST_BOARD_KNOCKDOWN_DAMAGE"*/, v56);
    sub_B0D8A4(&StringLiteral_1/*""*/, v57);
    sub_B0D8A4(&StringLiteral_21707/*"questboard_crushing"*/, v58);
    byte_4216CDB = 1;
  }
  *(_QWORD *)&methoda.slot = 0LL;
  LOBYTE(methoda.flags) = 0;
  LOBYTE(methoda.token) = 0;
  memset(&methoda.klass, 0, 37);
  v59 = sub_B0D974(QuestBoardListViewItemDraw___c__DisplayClass305_0_TypeInfo, questBoardItem, method);
  QuestBoardListViewItemDraw___c__DisplayClass305_0___ctor(
    (QuestBoardListViewItemDraw___c__DisplayClass305_0_o *)v59,
    0LL);
  if ( !v59 )
    goto LABEL_636;
  *(_QWORD *)(v59 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v59 + 16), (System_Int32_array **)this, v61, v62, v63, v64, v65, v66);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !questBoardItem )
    goto LABEL_636;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_636;
  v68 = (DataManager_o *)Instance;
  Instance = (__int64)MapControl_QuestInfo__GetMine(questBoardItem->fields._quest_info_k__BackingField, 0LL);
  if ( !Instance )
    goto LABEL_636;
  PhaseDetailedEntity = QuestEntity__GetPhaseDetailedEntity((QuestEntity_o *)Instance, 0LL);
  Instance = MapControl_QuestInfo__GetQuestType(quest_info_k__BackingField, 0LL);
  if ( !v68 )
    goto LABEL_636;
  v70 = Instance;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        v68,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !PhaseDetailedEntity )
    goto LABEL_636;
  if ( !Instance )
    goto LABEL_636;
  Instance = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Instance, PhaseDetailedEntity->fields.id, 0LL);
  mListViewObject = this->fields.mListViewObject;
  key = Instance;
  if ( !mListViewObject )
    goto LABEL_636;
  Instance = (__int64)mListViewObject->fields.manager;
  if ( !Instance )
    goto LABEL_636;
  v72 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v72
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v72 - 8) != QuestBoardListViewManager_TypeInfo )
  {
    sub_B0DC70(Instance);
    goto LABEL_640;
  }
  dispType = quest_info_k__BackingField->fields.dispType;
  checkTime = *(_QWORD *)(Instance + 568);
  HasFlag = QuestEntity__HasFlag(PhaseDetailedEntity, 2LL, 0LL);
  v403 = questBoardItem;
  if ( dispType == 2 )
    *(UnityEngine_Color_o *)&v74 = UnityEngine_Color__get_gray(0LL);
  else
    *(UnityEngine_Color_o *)&v74 = UnityEngine_Color__get_white(0LL);
  *(_DWORD *)(v59 + 24) = v74;
  *(_DWORD *)(v59 + 28) = v75;
  *(_DWORD *)(v59 + 32) = v76;
  *(_DWORD *)(v59 + 36) = v77;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              v68,
                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_636;
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
    goto LABEL_636;
  v407 = QuestEntity__HasFlag((QuestEntity_o *)Instance, 0x10000000000000LL, 0LL);
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v405 = PhaseDetailedEntity;
  Instance = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_636;
  v79 = clsQuestCheck__IsQuestClear((clsQuestCheck_o *)Instance, quest_info_k__BackingField->fields.questId, 0, 0LL);
  v80 = quest_info_k__BackingField->fields.questPhase;
  v81 = v79;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0LL);
  Instance = UnityEngine_Mathf__Min_40819044(v80 + 1, PhaseMax, 0LL);
  mLabelObj = this->fields.mLabelObj;
  questPhase = Instance;
  if ( !mLabelObj )
    goto LABEL_636;
  UnityEngine_GameObject__SetActive(mLabelObj, 1, 0LL);
  Instance = (__int64)this->fields.mLabelNameSp;
  if ( !Instance )
    goto LABEL_636;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_636;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mLabelChapterSp;
  if ( !Instance )
    goto LABEL_636;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_636;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mLabelFaceMaskShortcutSp;
  if ( !Instance )
    goto LABEL_636;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_636;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mLabelFaceMaskQuestSp;
  if ( !Instance )
    goto LABEL_636;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_636;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.mTitleObj;
  if ( !Instance )
    goto LABEL_636;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.mTitleShortcutLb;
  if ( !Instance )
    goto LABEL_636;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_636;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mAdvanceNoticeObj;
  if ( !Instance )
    goto LABEL_636;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mOverwriteAdvanceNoticeObj;
  if ( !Instance )
    goto LABEL_636;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mOptionObj;
  if ( !Instance )
    goto LABEL_636;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.mRewardObj;
  if ( !Instance )
    goto LABEL_636;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_636;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_636;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (__int64)this->fields.mCondObject;
  if ( !Instance )
    goto LABEL_636;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  OverwriteBannerId_k__BackingField = v403->fields._OverwriteBannerId_k__BackingField;
  v406 = v59;
  v399 = v68;
  if ( OverwriteBannerId_k__BackingField < 1 )
  {
    if ( v405->fields.bannerId < 1 )
    {
      p_mcBaseP = &this->fields.mcBaseP;
      mcBaseP = this->fields.mcBaseP;
      if ( v70 <= 5 && ((1 << v70) & 0x26) != 0 )
      {
        Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
        }
        v151 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 1032LL);
        if ( !v151 )
          goto LABEL_636;
        if ( v70 < *(_DWORD *)(v151 + 24) )
        {
          v152 = *(System_String_o **)(v151 + 8LL * (int)v70 + 32);
          v153 = System_Int32__ToString((int)v405 + 60, 0LL);
          v154 = System_String__Concat_43849904(v152, v153, 0LL);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetBanner(mcBaseP, v154, 0LL);
          goto LABEL_60;
        }
      }
      else
      {
        if ( !mcBaseP )
          goto LABEL_636;
        UISprite__set_atlas(this->fields.mcBaseP, this->fields.mTerminalAtlas, 0LL);
        v155 = this->fields.mcBaseP;
        Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
        }
        v156 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 1032LL);
        if ( !v156 )
          goto LABEL_636;
        if ( v70 < *(_DWORD *)(v156 + 24) )
        {
          if ( !v155 )
            goto LABEL_636;
          UISprite__set_spriteName(v155, *(System_String_o **)(v156 + 8LL * (int)v70 + 32), 0LL);
          goto LABEL_60;
        }
      }
LABEL_637:
      v389 = sub_B0D9A8(Instance);
      sub_B0D948(v389, 0LL);
    }
    v89 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v89 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_SPNAME_PREFIX = v89->static_fields->QUEST_BOARD_SPNAME_PREFIX;
    v87 = System_Int32__ToString((int)v405 + 64, 0LL);
    v88 = QUEST_BOARD_SPNAME_PREFIX;
  }
  else
  {
    v85 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v85 = QuestBoardListViewItemDraw_TypeInfo;
      OverwriteBannerId_k__BackingField = v403->fields._OverwriteBannerId_k__BackingField;
    }
    v86 = v85->static_fields->QUEST_BOARD_SPNAME_PREFIX;
    LODWORD(methoda.rgctx_data) = OverwriteBannerId_k__BackingField;
    v87 = System_Int32__ToString((int32_t)&methoda.rgctx_data, 0LL);
    v88 = v86;
  }
  v91 = System_String__Concat_43849904(v88, v87, 0LL);
  p_mcBaseP = &this->fields.mcBaseP;
  v92 = this->fields.mcBaseP;
  v94 = v91;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = AtlasManager__SetEventUI(v92, v94, 0LL);
  if ( !v92 )
    goto LABEL_636;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v92, Instance & 1, 0LL);
LABEL_60:
  Instance = (__int64)*p_mcBaseP;
  if ( !*p_mcBaseP )
    goto LABEL_636;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 840LL))(
    Instance,
    *(_QWORD *)(*(_QWORD *)Instance + 848LL));
  Instance = (__int64)*p_mcBaseP;
  if ( !*p_mcBaseP )
    goto LABEL_636;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_636;
  Instance = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                        (UnityEngine_GameObject_o *)Instance,
                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Instance )
    goto LABEL_636;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v59 + 24), 0LL);
  if ( MapControl_QuestInfo__GetQuestType(quest_info_k__BackingField, 0LL) == 1
    && MapControl_QuestInfo__IsDisaplayable(quest_info_k__BackingField, 0LL) )
  {
    Instance = (__int64)MapControl_QuestInfo__GetMine(quest_info_k__BackingField, 0LL);
    if ( !Instance )
      goto LABEL_636;
    if ( !QuestEntity__HasFlag((QuestEntity_o *)Instance, 0x400000000000LL, 0LL) )
    {
      questId = quest_info_k__BackingField->fields.questId;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( !CondType__IsQuestClear_25410236(questId, -1, 1, 0LL) )
        goto LABEL_73;
    }
  }
  if ( MapControl_QuestInfo__IsDisplayQuestNextIcon(quest_info_k__BackingField, 0LL) )
  {
LABEL_73:
    Instance = (__int64)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_636;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_636;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    Instance = (__int64)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_636;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    v99 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v99 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionX(gameObject, v99->static_fields->NEXT_POS_X_QUEST, 0LL);
    Instance = (__int64)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_636;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_636;
    Instance = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          (UnityEngine_GameObject_o *)Instance,
                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( !Instance )
      goto LABEL_636;
    NEXT_POS_X_QUEST = QuestBoardListViewItemDraw_TypeInfo->static_fields->NEXT_POS_X_QUEST;
    *(float *)(Instance + 120) = NEXT_POS_X_QUEST;
    *(float *)(Instance + 132) = NEXT_POS_X_QUEST;
  }
  v397 = v81 && !v407;
  v101 = !v81 || v407;
  if ( dispType != 2 || !v101 )
  {
    if ( quest_info_k__BackingField->fields.isNew )
    {
      v102 = 1;
    }
    else
    {
      if ( (v397 & 1) == 0 )
        goto LABEL_89;
      v102 = 2;
    }
    QuestBoardListViewItemDraw__SetStatusActive(this, v102, 1, v97);
  }
LABEL_89:
  if ( quest_info_k__BackingField->fields.pickupPriority >= 1 )
    QuestBoardListViewItemDraw__SetStatusActive(this, 4, 1, v97);
  QuestBoardListViewItemDraw__SetPickupIcon(this, v96);
  Instance = (__int64)this->fields.mNextSp;
  if ( !Instance )
    goto LABEL_636;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_636;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    v104 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v104 = QuestBoardListViewItemDraw_TypeInfo;
    }
    static_fields = v104->static_fields;
    x = static_fields->NEW_POS_QUEST_NEXT.fields.x;
    y = static_fields->NEW_POS_QUEST_NEXT.fields.y;
    z = static_fields->NEW_POS_QUEST_NEXT.fields.z;
LABEL_103:
    QuestBoardListViewItemDraw__SetNewIcon(
      this,
      *(UnityEngine_Vector3_o *)&x,
      static_fields->NEW_W_DEFAULT,
      static_fields->NEW_H_DEFAULT,
      v103);
    v111 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
    v112 = v111->PREV_POS_QUEST_NEXT.fields.x;
    v113 = v111->PREV_POS_QUEST_NEXT.fields.y;
    v114 = v111->PREV_POS_QUEST_NEXT.fields.z;
    goto LABEL_104;
  }
  v109 = QuestBoardListViewItemDraw_TypeInfo;
  if ( quest_info_k__BackingField->fields.pickupPriority >= 1 )
  {
    if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v109 = QuestBoardListViewItemDraw_TypeInfo;
    }
    static_fields = v109->static_fields;
    x = static_fields->NEW_POS_QUEST.fields.x;
    y = static_fields->NEW_POS_QUEST.fields.y;
    z = static_fields->NEW_POS_QUEST.fields.z;
    goto LABEL_103;
  }
  if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v109 = QuestBoardListViewItemDraw_TypeInfo;
  }
  QuestBoardListViewItemDraw__SetNewIcon(
    this,
    v109->static_fields->NEW_POS_QUEST,
    v109->static_fields->NEW_W_DEFAULT,
    v109->static_fields->NEW_H_DEFAULT,
    v103);
  v149 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
  v112 = v149->PREV_POS_QUEST.fields.x;
  v113 = v149->PREV_POS_QUEST.fields.y;
  v114 = v149->PREV_POS_QUEST.fields.z;
LABEL_104:
  QuestBoardListViewItemDraw__SetPrevSprite(this, v405, *(UnityEngine_Vector3_o *)&v112, v110);
  if ( dispType != 2
    && quest_info_k__BackingField->fields.isNew
    && quest_info_k__BackingField->fields.pickupPriority >= 1 )
  {
    QuestBoardListViewItemDraw__SetStatusToggle(this, v115);
  }
  Instance = (__int64)QuestBoardListViewItemDraw__GetStatusSp(this, 2, v116);
  if ( !Instance )
    goto LABEL_636;
  v117 = (UnityEngine_GameObject_o *)Instance;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    v118 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v118 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v117, v118->static_fields->CLEAR_POS_QUEST, 0LL);
  }
  Instance = (__int64)this->fields.mNoBattleObj;
  if ( !Instance )
    goto LABEL_636;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, HasFlag, 0LL);
  Instance = (__int64)this->fields.mNoBattleObj;
  if ( !Instance )
    goto LABEL_636;
  Instance = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                        (UnityEngine_GameObject_o *)Instance,
                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Instance )
    goto LABEL_636;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v59 + 24), 0LL);
  RecommendLv = QuestBoardListViewItemDraw__GetRecommendLv(v119, v405, questPhase, !HasFlag, dispType == 2, v120);
  QuestBoardListViewItemDraw__SetRecommendLv(this, RecommendLv, *(UnityEngine_Color_o *)(v59 + 24), v122);
  mLabelFaceMaskQuestSp = this->fields.mLabelFaceMaskQuestSp;
  v396 = !HasFlag;
  v125 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v125 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  }
  y_low = LODWORD(v125->fields.mTitleLevelSp[1].fields.mOldV0.fields.y);
  FaceMaskSpriteName = QuestBoardListViewItemDraw__GetFaceMaskSpriteName(v125, v70, v123);
  v128 = v405;
  v130 = QuestBoardListViewItemDraw__SetFaceImage(
           this,
           v405,
           mLabelFaceMaskQuestSp,
           y_low,
           FaceMaskSpriteName,
           *(UnityEngine_Color_o *)(v406 + 24),
           v129);
  mTitleNameLb = this->fields.mTitleNameLb;
  if ( v130 )
  {
    Instance = (__int64)QuestBoardListViewItemDraw__GetDispQuestName(this, v405, v70, v131);
    if ( !mTitleNameLb )
      goto LABEL_636;
    UILabel__set_text(mTitleNameLb, (System_String_o *)Instance, 0LL);
    v134 = v406;
    goto LABEL_147;
  }
  Instance = (__int64)QuestEntity__getQuestName(v405, 0LL);
  if ( !mTitleNameLb )
    goto LABEL_636;
  UILabel__set_text(mTitleNameLb, (System_String_o *)Instance, 0LL);
  if ( v70 != 1 || !QuestBoardListViewItemDraw__IsMainWar(v135, quest_info_k__BackingField->fields.warId, v136) )
  {
    Instance = (__int64)this->fields.boardIconTexture;
    if ( !Instance )
      goto LABEL_636;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0LL);
    Instance = (__int64)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_636;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_636;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    mLabelNameSp = this->fields.mLabelNameSp;
    QuestIconName = QuestBoardListViewItemDraw__GetQuestIconName(v142, v405, v70, v143);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    Instance = AtlasManager__SetEventUI(mLabelNameSp, QuestIconName, 0LL);
    if ( !mLabelNameSp )
      goto LABEL_636;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLabelNameSp, Instance & 1, 0LL);
    Instance = (__int64)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_636;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 840LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 848LL));
    Instance = (__int64)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_636;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_636;
    Instance = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          (UnityEngine_GameObject_o *)Instance,
                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !Instance )
      goto LABEL_636;
    v134 = v406;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v406 + 24), 0LL);
    Instance = (__int64)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_636;
    if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Instance, 0LL) )
    {
      *(_DWORD *)(v406 + 40) = v405->fields.id;
      v147 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v145, v146);
      System_Action___ctor(
        v147,
        (Il2CppObject *)v406,
        Method_QuestBoardListViewItemDraw___c__DisplayClass305_0__SetItemOfQuest_b__0__,
        0LL);
      QuestBoardListViewItemDraw__LoadBoardIconTexture(this, v405, v147, v148);
    }
LABEL_147:
    if ( dispType == 2 )
      goto LABEL_148;
    goto LABEL_196;
  }
  v134 = v406;
  if ( dispType == 2 )
  {
LABEL_148:
    QuestBoardListViewItemDraw__SetAdvanceNoticeText(this, quest_info_k__BackingField, v405, checkTime, v133);
    goto LABEL_198;
  }
  Instance = (__int64)this->fields.mLabelSubSectionNumLb;
  if ( !Instance )
    goto LABEL_636;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_636;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  if ( v405->fields.iconId <= 0 && System_String__IsNullOrEmpty(v405->fields.chapterSubStr, 0LL) )
  {
    mLabelSubSectionNumLb = this->fields.mLabelSubSectionNumLb;
    v139 = QuestEntity__HasFlag(v405, 0x40000LL, 0LL);
    p_chapterSubId = (QuestBoardListViewItemDraw_o *)&v405->fields.chapterSubId;
    if ( v139 )
      Instance = (__int64)QuestBoardListViewItemDraw__ConvertToChineseAscii(
                            p_chapterSubId,
                            (int32_t)p_chapterSubId->klass,
                            v138);
    else
      Instance = (__int64)System_Int32__ToString((int32_t)p_chapterSubId, 0LL);
    if ( !mLabelSubSectionNumLb )
      goto LABEL_636;
    UILabel__set_text(mLabelSubSectionNumLb, (System_String_o *)Instance, 0LL);
    Instance = (__int64)this->fields.mLabelSubSectionNumLb;
    if ( !Instance )
      goto LABEL_636;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_636;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  }
  Instance = (__int64)this->fields.mLabelChapterSp;
  if ( !Instance )
    goto LABEL_636;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_636;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  mLabelChapterSp = this->fields.mLabelChapterSp;
  QuestIconNameForMainType = QuestBoardListViewItemDraw__GetQuestIconNameForMainType(v158, v405, v159);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = AtlasManager__SetEventUI(mLabelChapterSp, QuestIconNameForMainType, 0LL);
  if ( !mLabelChapterSp )
    goto LABEL_636;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLabelChapterSp, Instance & 1, 0LL);
  Instance = (__int64)this->fields.mLabelChapterSp;
  if ( !Instance )
    goto LABEL_636;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 840LL))(
    Instance,
    *(_QWORD *)(*(_QWORD *)Instance + 848LL));
  Instance = (__int64)quest_info_k__BackingField->fields._WarInfo_k__BackingField;
  if ( !Instance )
    goto LABEL_636;
  Instance = (__int64)MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_636;
  QuestBoardSectionId = WarEntity__GetQuestBoardSectionId((WarEntity_o *)Instance, 0LL);
  if ( QuestBoardSectionId )
  {
    v162 = QuestBoardSectionId;
    mLabelBoardSectionSp = this->fields.mLabelBoardSectionSp;
    v164 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v164 = QuestBoardListViewItemDraw_TypeInfo;
    }
    CHAPTER_SP_UNIT_NAME = v164->static_fields->CHAPTER_SP_UNIT_NAME;
    LODWORD(methoda.methodPointer) = v162;
    v166 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda);
    v167 = System_String__Format(CHAPTER_SP_UNIT_NAME, v166, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    Instance = AtlasManager__SetEventUI(mLabelBoardSectionSp, v167, 0LL);
    v128 = v405;
    if ( !mLabelBoardSectionSp )
      goto LABEL_636;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLabelBoardSectionSp, Instance & 1, 0LL);
    Instance = (__int64)this->fields.mLabelBoardSectionSp;
    if ( !Instance )
      goto LABEL_636;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 840LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 848LL));
  }
LABEL_196:
  Instance = (__int64)this->fields.mAdvanceNoticeLb;
  if ( !Instance )
    goto LABEL_636;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
LABEL_198:
  v168 = this->fields.mTitleNameLb;
  Instance = (__int64)QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  }
  if ( !v168 )
    goto LABEL_636;
  UILabel__SetCondensedScale(v168, QuestBoardListViewItemDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH, 0LL);
  Instance = (__int64)this->fields.mTitleNameLb;
  if ( !Instance )
    goto LABEL_636;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v134 + 24), 0LL);
  QuestBoardListViewItemDraw__SetupRewardIconDisp(this, v128, dispType == 2, *(UnityEngine_Color_o *)(v134 + 24), v169);
  v170 = quest_info_k__BackingField->fields.questId;
  afterClear = v128->fields.afterClear;
  v172 = *(float *)(v134 + 24);
  v173 = *(float *)(v134 + 28);
  v174 = *(float *)(v134 + 32);
  v175 = *(float *)(v134 + 36);
  IsRepeatReward = QuestEntity__IsRepeatReward(v128, 0LL);
  v415.fields.r = v172;
  v415.fields.g = v173;
  v415.fields.b = v174;
  v415.fields.a = v175;
  QuestBoardListViewItemDraw__SetupFirstRewardDisp(this, v170, afterClear, v415, IsRepeatReward, v177);
  QuestBoardListViewItemDraw__SetupRewardGotAndNotGiveDisp(
    this,
    quest_info_k__BackingField,
    *(UserQuestEntity_o **)&methoda.slot,
    *(UnityEngine_Color_o *)(v134 + 24),
    v178);
  if ( *(_QWORD *)&methoda.slot && UserQuestEntity__HasStatus(*(UserQuestEntity_o **)&methoda.slot, 8, 0LL) )
  {
    Instance = (__int64)quest_info_k__BackingField->fields._WarInfo_k__BackingField;
    if ( !Instance )
      goto LABEL_636;
    Instance = (__int64)MapControl_WarInfo__GetMine((MapControl_WarInfo_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_636;
    v179 = !WarEntity__IsShop((WarEntity_o *)Instance, 0LL);
    v180 = 1;
  }
  else
  {
    v180 = 0;
    v179 = 0;
  }
  Instance = (__int64)this->fields.mRarePrismSp;
  if ( !Instance )
    goto LABEL_636;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_636;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v179, 0LL);
  QuestBoardListViewItemDraw__ResetInfoTextList(this, v181);
  *(const void **)((char *)&methoda.methodMetadataHandle + 4) = (const void *)0xFFFFFFFFLL;
  mInfoTextList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields.mInfoTextList;
  Instance = (__int64)QuestBoardListViewItemDraw__GetCampaignText(
                        this,
                        v128->fields.id,
                        questPhase,
                        v101,
                        (int32_t *)&methoda.genericMethod,
                        (int32_t *)&methoda.methodMetadataHandle + 1,
                        v183);
  if ( !mInfoTextList )
    goto LABEL_636;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    mInfoTextList,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
  Instance = (__int64)this->fields.mRarePrismSp;
  if ( !Instance )
    goto LABEL_636;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_636;
  Instance = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( v180 | Instance & 1 )
  {
    Instance = *(_QWORD *)&methoda.slot;
    if ( !*(_QWORD *)&methoda.slot )
      goto LABEL_636;
    Instance = UserQuestEntity__IsExpireNoLimit(*(UserQuestEntity_o **)&methoda.slot, 0LL);
    if ( (Instance & 1) != 0 )
      goto LABEL_227;
    if ( !*(_QWORD *)&methoda.slot )
      goto LABEL_636;
    p_endTime = (int64_t *)(*(_QWORD *)&methoda.slot + 64LL);
  }
  else
  {
    p_endTime = &quest_info_k__BackingField->fields.endTime;
  }
  v185 = *p_endTime;
  if ( *p_endTime >= 1 )
  {
    Instance = QuestEntity__HasFlag(v128, 32LL, 0LL);
    if ( (Instance & 1) == 0 )
    {
      v186 = this->fields.mInfoTextList;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v187 = LocalizationManager__Get((System_String_o *)StringLiteral_13452/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0LL);
      v190 = (QuestBoardInformaionText_o *)sub_B0D974(QuestBoardInformaionText_TypeInfo, v188, v189);
      v416.fields.r = 0.0;
      v416.fields.g = 0.0;
      v416.fields.b = 0.0;
      v416.fields.a = 0.0;
      v414.fields.x = 0.0;
      v414.fields.y = 0.0;
      v414.fields.z = 0.0;
      v191 = (EventMissionProgressRequest_Argument_ProgressData_o *)v190;
      QuestBoardInformaionText___ctor(v190, v187, v185, 0, 0, v416, -1, 0, v414, 1, v394, 0LL, v395);
      if ( !v186 )
        goto LABEL_636;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v186,
        v191,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
      v128 = v405;
    }
  }
LABEL_227:
  v192 = this->fields.mInfoTextList;
  if ( !v192 )
    goto LABEL_636;
  size = v192->fields._size;
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  if ( size < 1 )
  {
    v199 = 0;
    goto LABEL_239;
  }
  v195 = this->fields.mListViewObject;
  if ( !v195 )
    goto LABEL_636;
  Instance = (__int64)v195->fields.manager;
  if ( !Instance )
    goto LABEL_636;
  v196 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v196
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v196 - 8) != QuestBoardListViewManager_TypeInfo )
  {
LABEL_640:
    sub_B0DC70(Instance);
    QuestBoardListViewItemDraw__SetItemOfWarBoard(v391, v392, v393);
    return;
  }
  AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt((QuestBoardListViewManager_o *)Instance, size, 0LL);
  if ( v192->fields._size <= (unsigned int)AlphaAnimCnt )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  Instance = (__int64)v192->fields._items->m_Items[AlphaAnimCnt];
  if ( !Instance )
    goto LABEL_636;
  QuestBoardInformaionText__SetTime(
    (QuestBoardInformaionText_o *)Instance,
    &this->fields.mOptionInfoLb,
    &this->fields.mOptionInfoFrameSp,
    v197);
  Instance = (__int64)this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_636;
  BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)Instance, 1.0, 0LL);
  v199 = 1;
  quest_info_k__BackingField->fields.costCalcVal = (int32_t)methoda.genericMethod;
  quest_info_k__BackingField->fields._fixedCostVal_k__BackingField = HIDWORD(methoda.methodMetadataHandle);
LABEL_239:
  Instance = (__int64)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_636;
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_636;
  Instance = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_636;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_636;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v199, 0LL);
  Instance = (__int64)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_636;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_636;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v199, 0LL);
  QuestBoardListViewItemDraw__SetCostDisp(
    this,
    v128,
    dispType == 2,
    (int32_t)methoda.genericMethod,
    SHIDWORD(methoda.methodMetadataHandle),
    *(UnityEngine_Color_o *)(v134 + 24),
    (bool *)&methoda.flags,
    (bool *)&methoda.token,
    (bool *)&methoda.genericContainerHandle + 4,
    (const MethodInfo *)v394);
  v201 = v403->fields._OverwriteBannerId_k__BackingField;
  if ( v201 >= 1 )
  {
    mCostApSp = this->fields.mCostApSp;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    }
    ApSpriteFileName = QuestBoardListViewItemDraw__GetApSpriteFileName(v201, v200);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    Instance = AtlasManager__SetEventUI(mCostApSp, ApSpriteFileName, 0LL);
    if ( !mCostApSp )
      goto LABEL_636;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mCostApSp, Instance & 1, 0LL);
  }
  mChallengeObj = this->fields.mChallengeObj;
  if ( HasFlag
    || (Instance = QuestEntity__HasFlag(v128, 0x4000LL, 0LL), (Instance & 1) != 0)
    || (Instance = QuestEntity__HasFlag(v128, 4LL, 0LL), (Instance & 1) == 0) )
  {
    v205 = 0;
    if ( !mChallengeObj )
      goto LABEL_636;
  }
  else
  {
    v205 = v128->fields.afterClear != 1;
    if ( !mChallengeObj )
      goto LABEL_636;
  }
  UnityEngine_GameObject__SetActive(mChallengeObj, v205, 0LL);
  Instance = (__int64)this->fields.mChallengeObj;
  if ( !Instance )
    goto LABEL_636;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    v206 = QuestBoardListViewItemDraw_TypeInfo;
    if ( LOBYTE(methoda.flags) )
    {
      if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v206 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v207 = v206->static_fields;
      p_x = &v207->CHALLENGE_OBJ_POS_DOUBLE.fields.x;
      p_y = &v207->CHALLENGE_OBJ_POS_DOUBLE.fields.y;
      p_z = &v207->CHALLENGE_OBJ_POS_DOUBLE.fields.z;
    }
    else
    {
      if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v206 = QuestBoardListViewItemDraw_TypeInfo;
      }
      v212 = v206->static_fields;
      p_x = &v212->CHALLENGE_OBJ_POS_SINGLE.fields.x;
      p_y = &v212->CHALLENGE_OBJ_POS_SINGLE.fields.y;
      p_z = &v212->CHALLENGE_OBJ_POS_SINGLE.fields.z;
    }
    v411.fields.y = *p_y;
    v411.fields.x = *p_x;
    v411.fields.z = *p_z;
    GameObjectExtensions__SetLocalPosition(this->fields.mChallengeObj, v411, 0LL);
    Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          v399,
                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !Instance )
      goto LABEL_636;
    Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      key,
                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    Instance = QuestEntity__HasFlag(v128, 4LL, 0LL);
    if ( (Instance & 1) == 0 )
      goto LABEL_643;
    if ( !Entity )
      goto LABEL_636;
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
      AtlasManager__SetEventUI(challengeStrSpr, (System_String_o *)StringLiteral_21707/*"questboard_crushing"*/, 0LL);
    }
    else
    {
LABEL_643:
      if ( *(_QWORD *)&methoda.slot )
        ClearNum = *(_DWORD *)(*(_QWORD *)&methoda.slot + 56LL);
      else
        ClearNum = 0;
      Instance = (__int64)this->fields.challengeStrSpr;
      if ( !Instance )
        goto LABEL_636;
      UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_21706/*"questboard_challenge"*/, 0LL);
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
      goto LABEL_636;
    UILabel__set_text(mChallengeLb, (System_String_o *)Instance, 0LL);
    Instance = (__int64)this->fields.challengeStrSpr;
    if ( !Instance )
      goto LABEL_636;
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
    goto LABEL_636;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v134 + 24), 0LL);
  Instance = (__int64)this->fields.mChallengeObj;
  if ( !Instance )
    goto LABEL_636;
  if ( (mPhaseObj = this->fields.mPhaseObj,
        Instance = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL),
        (Instance & 1) != 0)
    || (Instance = QuestEntity__HasFlag(v128, 0x4000LL, 0LL), (Instance & 1) != 0)
    || (Instance = QuestEntity__HasFlag(v128, 0x10000LL, 0LL), (Instance & 1) != 0)
    || dispType == 2 && (Instance = QuestEntity__HasFlag(v128, 512LL, 0LL), (Instance & 1) != 0)
    || (Instance = QuestEntity__HasFlag(v128, 0x4000000LL, 0LL), (Instance & 1) != 0) )
  {
    v218 = 0;
  }
  else
  {
    Instance = QuestEntity__HasFlag(v128, 0x2000000000LL, 0LL);
    v218 = !v407 & ~(_BYTE)Instance & 1;
  }
  checkTimea = dispType;
  v404 = (int32_t *)quest_info_k__BackingField;
  if ( !mPhaseObj )
    goto LABEL_636;
  UnityEngine_GameObject__SetActive(mPhaseObj, v218, 0LL);
  Instance = (__int64)this->fields.mPhaseObj;
  v409 = this;
  if ( !Instance )
    goto LABEL_636;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    QuestBoardListViewItemDraw__InitPhase(
      this,
      methoda.flags,
      methoda.token,
      SBYTE4(methoda.genericContainerHandle),
      v219);
    v220 = v405->fields.afterClear;
    Instance = MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0LL);
    v221 = QuestBoardListViewItemDraw_TypeInfo;
    v222 = Instance;
    v223 = WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr);
    if ( (v223 & 0x400) != 0 )
    {
      if ( !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v221 = QuestBoardListViewItemDraw_TypeInfo;
        v223 = WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr);
      }
      v224 = v223 & 0x400;
    }
    else
    {
      v224 = 0;
    }
    v225 = v221->static_fields;
    PHASE_NORMAL_MAX = v225->PHASE_NORMAL_MAX;
    v227 = v222 > PHASE_NORMAL_MAX;
    if ( v224 && !v221->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v221);
      v221 = QuestBoardListViewItemDraw_TypeInfo;
      v225 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
      PHASE_NORMAL_MAX = v225->PHASE_NORMAL_MAX;
      v224 = WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400;
    }
    v228 = v220 == 2 && dispType != 2;
    if ( v222 <= PHASE_NORMAL_MAX )
    {
      if ( v224 && !v221->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v221);
        v221 = QuestBoardListViewItemDraw_TypeInfo;
        v225 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
      }
      p_QUEST_BOARD_PHASE_INTERVAL = &v225->QUEST_BOARD_PHASE_INTERVAL;
    }
    else
    {
      if ( v224 && !v221->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v221);
        v221 = QuestBoardListViewItemDraw_TypeInfo;
        v225 = QuestBoardListViewItemDraw_TypeInfo->static_fields;
      }
      p_QUEST_BOARD_PHASE_INTERVAL = &v225->QUEST_BOARD_PHASE_EX_INTERVAL;
    }
    v230 = 0;
    v231 = v222 - 1;
    v232 = checkTimea == 2 && v220 == 5;
    v233 = -*p_QUEST_BOARD_PHASE_INTERVAL;
    v234 = v220 - 3;
    while ( 1 )
    {
      if ( (BYTE3(v221->vtable._0_Equals.methodPtr) & 4) != 0 && !v221->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v221);
        v221 = QuestBoardListViewItemDraw_TypeInfo;
      }
      if ( v230 >= v221->static_fields->PHASE_EXTRA_MAX )
        break;
      mPhaseSp = v409->fields.mPhaseSp;
      if ( !mPhaseSp )
        goto LABEL_636;
      if ( v230 >= mPhaseSp->max_length )
        goto LABEL_637;
      v236 = &mPhaseSp->obj.klass + v230;
      v237 = (UISprite_o *)v236[4];
      if ( !v237 )
        goto LABEL_636;
      Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v236[4], 0LL);
      if ( !Instance )
        goto LABEL_636;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v230 < v222, 0LL);
      if ( v230 < v222 )
      {
        v239 = !v407 && v230 < v404[11];
        PhaseArrowSpriteName = QuestBoardListViewItemDraw__GetPhaseArrowSpriteName(
                                 (QuestBoardListViewItemDraw_o *)Instance,
                                 v227,
                                 v239,
                                 v231 == v230,
                                 v228,
                                 (v231 == v230) & (unsigned __int8)(v234 < 2),
                                 v238);
        UISprite__set_spriteName(v237, PhaseArrowSpriteName, 0LL);
        if ( v232 )
          *(UnityEngine_Color_o *)&v241 = UnityEngine_Color__get_gray(0LL);
        else
          *(UnityEngine_Color_o *)&v241 = UnityEngine_Color__get_white(0LL);
        UIWidget__set_color((UIWidget_o *)v237, *(UnityEngine_Color_o *)&v241, 0LL);
        PhaseArrowIntervalSize = QuestBoardListViewItemDraw__GetPhaseArrowIntervalSize(
                                   v245,
                                   v227,
                                   v231 == v230 && v234 < 2,
                                   v246);
        Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v237, 0LL);
        if ( !Instance )
          goto LABEL_636;
        v233 += PhaseArrowIntervalSize;
        v412.fields.x = (float)v233;
        v412.fields.y = 0.0;
        v412.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v412, 0LL);
        Instance = ((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v237->klass->vtable._33_MakePixelPerfect.method)(
                     v237,
                     v237->klass->vtable._34_get_minWidth.methodPtr);
      }
      v221 = QuestBoardListViewItemDraw_TypeInfo;
      ++v230;
    }
  }
  v248 = v409;
  Instance = (__int64)v409->fields.mDamageRecordSp;
  if ( !Instance )
    goto LABEL_636;
  v249 = v405;
  v250 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  Instance = QuestEntity__HasFlag(v405, 0x4000000LL, 0LL);
  if ( !v250 )
    goto LABEL_636;
  UnityEngine_GameObject__SetActive(v250, Instance & 1, 0LL);
  Instance = (__int64)v409->fields.mDamageRecordSp;
  if ( !Instance )
    goto LABEL_636;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_636;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    v251 = QuestBoardListViewItemDraw_TypeInfo;
    mDamageRecordSp = v409->fields.mDamageRecordSp;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v251 = QuestBoardListViewItemDraw_TypeInfo;
    }
    QUEST_BOARD_DAMAGE_RECODE_NAME = v251->static_fields->QUEST_BOARD_DAMAGE_RECODE_NAME;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetBanner(mDamageRecordSp, QUEST_BOARD_DAMAGE_RECODE_NAME, 0LL);
    v254 = (UserQuestRecordMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        v399,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserQuestRecordMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    if ( !v254 )
      goto LABEL_636;
    MaxTurnDamage = (void (__fastcall *)())UserQuestRecordMaster__GetMaxTurnDamage(v254, Instance, v405->fields.id, 0LL);
    mDamageRecordLb = v409->fields.mDamageRecordLb;
    methoda.methodPointer = MaxTurnDamage;
    v257 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &methoda);
    Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_23567/*"{0:#,0}"*/, v257, 0LL);
    if ( !mDamageRecordLb )
      goto LABEL_636;
    UILabel__set_text(mDamageRecordLb, (System_String_o *)Instance, 0LL);
    Instance = (__int64)v409->fields.mDamageRecordSp;
    if ( !Instance )
      goto LABEL_636;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v406 + 24), 0LL);
    Instance = (__int64)v409->fields.mDamageRecordLb;
    if ( !Instance )
      goto LABEL_636;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v406 + 24), 0LL);
  }
  Instance = (__int64)v409->fields.mKnockdownRecordSp;
  if ( !Instance )
    goto LABEL_636;
  v258 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  Instance = QuestEntity__HasFlag(v405, 0x2000000000LL, 0LL);
  if ( !v258 )
    goto LABEL_636;
  UnityEngine_GameObject__SetActive(v258, Instance & 1, 0LL);
  Instance = (__int64)v409->fields.mKnockdownRecordSp;
  if ( !Instance )
    goto LABEL_636;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_636;
  if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
    goto LABEL_426;
  v259 = QuestBoardListViewItemDraw_TypeInfo;
  mKnockdownRecordSp = v409->fields.mKnockdownRecordSp;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v259 = QuestBoardListViewItemDraw_TypeInfo;
  }
  QUEST_BOARD_KNOCKDOWN_RECODE_NAME = v259->static_fields->QUEST_BOARD_KNOCKDOWN_RECODE_NAME;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(mKnockdownRecordSp, QUEST_BOARD_KNOCKDOWN_RECODE_NAME, 0LL);
  v264 = sub_B0D974(QuestKnockdownInfo_TypeInfo, v262, v263);
  QuestKnockdownInfo___ctor((QuestKnockdownInfo_o *)v264, 0LL);
  v265 = (UserQuestRecordMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      v399,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserQuestRecordMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v265 )
    goto LABEL_636;
  UserQuestRecordMaster__GetKnockdownRecordinfo(v265, Instance, v405->fields.id, (QuestKnockdownInfo_o *)v264, 0LL);
  mKnockdownRecordCountLb = v409->fields.mKnockdownRecordCountLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10919/*"QUEST_BOARD_KNOCKDOWN_COUNT"*/, 0LL);
  if ( !v264 )
    goto LABEL_636;
  v267 = (System_String_o *)Instance;
  methoda.methodPointer = *(Il2CppMethodPointer *)(v264 + 16);
  v268 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &methoda);
  Instance = (__int64)System_String__Format(v267, v268, 0LL);
  if ( !mKnockdownRecordCountLb )
    goto LABEL_636;
  UILabel__set_text(mKnockdownRecordCountLb, (System_String_o *)Instance, 0LL);
  mKnockdownRecordDamageLb = v409->fields.mKnockdownRecordDamageLb;
  v270 = LocalizationManager__Get((System_String_o *)StringLiteral_10920/*"QUEST_BOARD_KNOCKDOWN_DAMAGE"*/, 0LL);
  methoda.name = *(const char **)(v264 + 24);
  v271 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &methoda.name);
  Instance = (__int64)System_String__Format(v270, v271, 0LL);
  if ( !mKnockdownRecordDamageLb )
    goto LABEL_636;
  UILabel__set_text(mKnockdownRecordDamageLb, (System_String_o *)Instance, 0LL);
  mKnockdownRecordPlusLb = v409->fields.mKnockdownRecordPlusLb;
  v273 = LocalizationManager__Get((System_String_o *)StringLiteral_10922/*"QUEST_BOARD_KNOCKDOWN_PLUS"*/, 0LL);
  v274 = (_QWORD **)Method_System_Array_Empty_object___;
  v275 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
  v276 = *(_WORD *)(v275 + 306);
  if ( (v276 & 1) == 0 )
  {
    sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
    v276 = *(_WORD *)(v275 + 306);
  }
  if ( (v276 & 0x400) != 0 )
  {
    v277 = *v274[6];
    if ( (*(_BYTE *)(v277 + 306) & 1) == 0 )
      sub_AA65A4(*v274[6]);
    if ( !*(_DWORD *)(v277 + 224) )
    {
      v278 = *v274[6];
      if ( (*(_BYTE *)(v278 + 306) & 1) == 0 )
        sub_AA65A4(*v274[6]);
      j_il2cpp_runtime_class_init_0(v278);
    }
  }
  v279 = *v274[6];
  if ( (*(_BYTE *)(v279 + 306) & 1) == 0 )
    sub_AA65A4(*v274[6]);
  Instance = (__int64)System_String__Format_43928628(v273, **(System_Object_array ***)(v279 + 184), 0LL);
  if ( !mKnockdownRecordPlusLb )
    goto LABEL_636;
  UILabel__set_text(mKnockdownRecordPlusLb, (System_String_o *)Instance, 0LL);
  mKnockdownRecordDamageNameLb = v409->fields.mKnockdownRecordDamageNameLb;
  v281 = LocalizationManager__Get((System_String_o *)StringLiteral_10921/*"QUEST_BOARD_KNOCKDOWN_DAMAGE_NAME"*/, 0LL);
  v282 = (_QWORD **)Method_System_Array_Empty_object___;
  v283 = v281;
  v284 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
  v285 = *(_WORD *)(v284 + 306);
  if ( (v285 & 1) == 0 )
  {
    sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
    v285 = *(_WORD *)(v284 + 306);
  }
  if ( (v285 & 0x400) != 0 )
  {
    v286 = *v282[6];
    if ( (*(_BYTE *)(v286 + 306) & 1) == 0 )
      sub_AA65A4(*v282[6]);
    if ( !*(_DWORD *)(v286 + 224) )
    {
      v287 = *v282[6];
      if ( (*(_BYTE *)(v287 + 306) & 1) == 0 )
        sub_AA65A4(*v282[6]);
      j_il2cpp_runtime_class_init_0(v287);
    }
  }
  v288 = *v282[6];
  if ( (*(_BYTE *)(v288 + 306) & 1) == 0 )
    sub_AA65A4(*v282[6]);
  Instance = (__int64)System_String__Format_43928628(v283, **(System_Object_array ***)(v288 + 184), 0LL);
  if ( !mKnockdownRecordDamageNameLb
    || (UILabel__set_text(mKnockdownRecordDamageNameLb, (System_String_o *)Instance, 0LL),
        v248 = v409,
        (Instance = (__int64)v409->fields.mKnockdownRecordDamageLb) == 0)
    || (UILabel__SetCondensedScale(
          (UILabel_o *)Instance,
          QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_KNOCKDOWN_DAMAGE_WIDTH,
          0LL),
        Instance = (__int64)v409->fields.mKnockdownRecordDamageLb,
        v249 = v405,
        !Instance) )
  {
LABEL_636:
    sub_B0D97C(Instance);
  }
  if ( *(__int64 *)(v264 + 24) <= 0 )
  {
    UIWidget__set_pivot((UIWidget_o *)Instance, 3, 0LL);
    Instance = (__int64)v409->fields.mKnockdownRecordDamageLb;
    if ( Instance )
    {
      Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( v409->fields.mKnockdownRecordPlusLb )
      {
        v291 = (UnityEngine_GameObject_o *)Instance;
        v293 = UnityEngine_Component__get_gameObject(
                 (UnityEngine_Component_o *)v409->fields.mKnockdownRecordPlusLb,
                 0LL);
        LocalPositionX = GameObjectExtensions__GetLocalPositionX(v293, 0LL);
        v295 = QuestBoardListViewItemDraw_TypeInfo;
        v296 = LocalPositionX;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v295 = QuestBoardListViewItemDraw_TypeInfo;
        }
        QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX = v296 + (float)v295->static_fields->QUEST_BOARD_KNOCKDOWN_ZERO_DAMAGE_POSX;
        goto LABEL_420;
      }
    }
    goto LABEL_636;
  }
  UIWidget__set_pivot((UIWidget_o *)Instance, 5, 0LL);
  Instance = (__int64)v409->fields.mKnockdownRecordDamageLb;
  if ( !Instance )
    goto LABEL_636;
  v289 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  v290 = QuestBoardListViewItemDraw_TypeInfo;
  v291 = v289;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v290 = QuestBoardListViewItemDraw_TypeInfo;
  }
  QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX = (float)v290->static_fields->QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX;
LABEL_420:
  GameObjectExtensions__SetLocalPositionX(v291, QUEST_BOARD_KNOCKDOWN_DAMAGE_POSX, 0LL);
  Instance = (__int64)v409->fields.mKnockdownRecordSp;
  if ( !Instance )
    goto LABEL_636;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v406 + 24), 0LL);
  Instance = (__int64)v409->fields.mKnockdownRecordDamageLb;
  if ( !Instance )
    goto LABEL_636;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v406 + 24), 0LL);
  Instance = (__int64)v409->fields.mKnockdownRecordDamageNameLb;
  if ( !Instance )
    goto LABEL_636;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v406 + 24), 0LL);
  Instance = (__int64)v409->fields.mKnockdownRecordPlusLb;
  if ( !Instance )
    goto LABEL_636;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v406 + 24), 0LL);
  mQuestInfoBtn = (UIWidget_o *)v409->fields.mKnockdownRecordCountLb;
  if ( !mQuestInfoBtn )
    goto LABEL_575;
  UIWidget__set_color(mQuestInfoBtn, *(UnityEngine_Color_o *)(v406 + 24), 0LL);
LABEL_426:
  id = v249->fields.id;
  if ( (BYTE3(QuestInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestInformationComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
  }
  if ( QuestInformationComponent__IsDisplayQuestInformation(id, 0LL) )
  {
    mQuestInfoBtn = (UIWidget_o *)v248->fields.mQuestInfoBtn;
    if ( !mQuestInfoBtn )
      goto LABEL_575;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mQuestInfoBtn, 1, 0LL);
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_421083D )
    {
      sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v299);
      byte_421083D = 1;
    }
    v300 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v300 = TerminalSceneComponent_TypeInfo;
    }
    mQuestInfoBtn = (UIWidget_o *)v300->static_fields->mInstance;
    if ( !mQuestInfoBtn )
      goto LABEL_575;
    if ( TerminalSceneComponent__QuestInfoShowing((TerminalSceneComponent_o *)mQuestInfoBtn, 0LL) == v249->fields.id )
    {
      mQuestInfoBtn = (UIWidget_o *)v248->fields.mQuestInfoShowing;
      if ( !mQuestInfoBtn )
        goto LABEL_575;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mQuestInfoBtn, 1, 0LL);
    }
    mQuestInfoBtn = (UIWidget_o *)v248->fields.mQuestInfoBtn;
    if ( !mQuestInfoBtn )
      goto LABEL_575;
    mQuestInfoBtn = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)mQuestInfoBtn,
                                    (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
    v301 = mQuestInfoBtn;
    if ( checkTimea == 2 )
    {
      mQuestInfoBtn = (UIWidget_o *)QuestEntity__HasFlag(v249, 0x400000000000000LL, 0LL);
      v302 = v397 & (unsigned int)mQuestInfoBtn & 1;
      if ( !v301 )
        goto LABEL_575;
    }
    else
    {
      v302 = 1LL;
      if ( !mQuestInfoBtn )
        goto LABEL_575;
    }
    ((void (__fastcall *)(UIWidget_o *, __int64, Il2CppMethodPointer))v301->klass->vtable._5_get_isAnchoredVertically.method)(
      v301,
      v302,
      v301->klass->vtable._6_get_canBeAnchored.methodPtr);
  }
  mOptionRestrinctionLb = v248->fields.mOptionRestrinctionLb;
  mQuestInfoBtn = (UIWidget_o *)QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  }
  if ( !mOptionRestrinctionLb )
    goto LABEL_575;
  UILabel__set_fontSize(
    mOptionRestrinctionLb,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_DEFAULT_FONT_SIZE,
    0LL);
  mQuestInfoBtn = (UIWidget_o *)v248->fields.mOptionRestrinctionLb;
  if ( !mQuestInfoBtn )
    goto LABEL_575;
  UILabel__set_overflowMethod((UILabel_o *)mQuestInfoBtn, 2, 0LL);
  mQuestInfoBtn = (UIWidget_o *)v248->fields.mOptionRestrinctionLb;
  if ( !mQuestInfoBtn )
    goto LABEL_575;
  v304 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mQuestInfoBtn, 0LL);
  one = UnityEngine_Vector3__get_one(0LL);
  GameObjectExtensions__SetLocalScale(v304, one, 0LL);
  mQuestInfoBtn = (UIWidget_o *)v248->fields.mOptionRestrinctionLb;
  if ( !mQuestInfoBtn )
    goto LABEL_575;
  mQuestInfoBtn = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mQuestInfoBtn, 0LL);
  if ( !mQuestInfoBtn )
    goto LABEL_575;
  mQuestInfoBtn = (UIWidget_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)mQuestInfoBtn, 0LL);
  if ( !mQuestInfoBtn )
    goto LABEL_575;
  mQuestInfoBtn = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mQuestInfoBtn, 0LL);
  if ( !mQuestInfoBtn )
    goto LABEL_575;
  mQuestInfoBtn = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)mQuestInfoBtn,
                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_QuestBoardListViewMultiLimitedFormation___);
  if ( !mQuestInfoBtn )
    goto LABEL_575;
  v305 = (UnityEngine_Behaviour_o *)mQuestInfoBtn;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mQuestInfoBtn, 0, 0LL);
  mQuestInfoBtn = (UIWidget_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  v399,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !mQuestInfoBtn )
    goto LABEL_575;
  mQuestInfoBtn = (UIWidget_o *)QuestPhaseDetailMaster__TryGetEntity(
                                  (QuestPhaseDetailMaster_o *)mQuestInfoBtn,
                                  (QuestPhaseDetailEntity_o **)&methoda.parameters,
                                  v404[4],
                                  questPhase,
                                  0LL);
  if ( ((unsigned __int8)mQuestInfoBtn & 1) == 0 )
    goto LABEL_477;
  if ( !methoda.parameters )
    goto LABEL_575;
  if ( !*((_QWORD *)methoda.parameters + 5) )
    goto LABEL_477;
  mQuestInfoBtn = (UIWidget_o *)v248->fields.mOptionRestrinctionLb;
  if ( !mQuestInfoBtn )
    goto LABEL_575;
  UILabel__set_maxLineCount((UILabel_o *)mQuestInfoBtn, 0, 0LL);
  if ( !methoda.parameters )
    goto LABEL_575;
  v307 = *((_QWORD *)methoda.parameters + 5);
  if ( !v307 )
    goto LABEL_575;
  v308 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v307 + 32);
  if ( v308
    && (mQuestInfoBtn = (UIWidget_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                        v308,
                                        (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_QuestPhaseDetailEntity_BoardInfo___)) != 0LL
    && (leftAnchor = mQuestInfoBtn->fields.leftAnchor,
        v310 = (QuestPhaseDetailEntity_BoardInfo_array *)mQuestInfoBtn,
        leftAnchor) )
  {
    if ( (_DWORD)leftAnchor == 1 )
    {
      rightAnchor = mQuestInfoBtn->fields.rightAnchor;
      if ( !rightAnchor )
        goto LABEL_575;
      mQuestInfoBtn = (UIWidget_o *)rightAnchor->fields.target;
      if ( !mQuestInfoBtn )
        goto LABEL_575;
      mQuestInfoBtn = (UIWidget_o *)QuestPhaseDetailEntity_BoardInfo_TextInfo__SetText(
                                      (QuestPhaseDetailEntity_BoardInfo_TextInfo_o *)mQuestInfoBtn,
                                      v248->fields.mOptionRestrinctionLb,
                                      (float)v248->fields.restrictionDefaultWidth,
                                      0LL);
      if ( !v310->max_length )
        goto LABEL_638;
      v312 = v310->m_Items[0];
      if ( !v312 )
        goto LABEL_575;
      v313 = (char)mQuestInfoBtn;
      mQuestInfoBtn = (UIWidget_o *)v312->fields.image;
      if ( !mQuestInfoBtn )
        goto LABEL_575;
      v314 = QuestPhaseDetailEntity_BoardInfo_ImageInfo__SetImage(
               (QuestPhaseDetailEntity_BoardInfo_ImageInfo_o *)mQuestInfoBtn,
               v248->fields.mOptionRestrinctionSp,
               0LL);
      v315 = 0;
    }
    else
    {
      UnityEngine_Behaviour__set_enabled(v305, 1, 0LL);
      if ( QuestEntity__HasFlag(v405, 0x400000000000000LL, 0LL) )
      {
        v387 = QuestBoardListViewItemDraw_TypeInfo;
        if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          v387 = QuestBoardListViewItemDraw_TypeInfo;
        }
        p_RESTRICTION_FONT_WIDTH_ALLOUT = &v387->static_fields->RESTRICTION_FONT_WIDTH_ALLOUT;
      }
      else
      {
        p_RESTRICTION_FONT_WIDTH_ALLOUT = &v248->fields.restrictionDefaultWidth;
      }
      QuestBoardListViewMultiLimitedFormation__Init(
        (QuestBoardListViewMultiLimitedFormation_o *)v305,
        v248->fields.mOptionRestrinctionLb,
        v248->fields.mOptionRestrinctionSp,
        v310,
        (float)*p_RESTRICTION_FONT_WIDTH_ALLOUT,
        0LL);
      v315 = 1;
      v313 = 1;
      v314 = 1;
    }
  }
  else
  {
LABEL_477:
    v313 = QuestBoardListViewItemDraw__SetRestrictionLabelFromQuestRestrictionMaster(v248, v404[4], questPhase, v306);
    v315 = 0;
    v314 = 0;
  }
  if ( QuestEntity__HasFlag(v405, 0x40000000LL, 0LL) )
  {
    mQuestInfoBtn = (UIWidget_o *)v248->fields.mMultiSecondBattleInformation;
    if ( !mQuestInfoBtn )
      goto LABEL_575;
    p_mCostConsumeBattleWinSp = (UIWidget_o **)&v248->fields.mCostConsumeBattleWinSp;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mQuestInfoBtn,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v248->fields.mCostConsumeBattleWinSp,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UISprite__Add__);
    v317 = 1;
  }
  else
  {
    v317 = 0;
    p_mCostConsumeBattleWinSp = (UIWidget_o **)&v248->fields.mCostConsumeBattleWinSp;
  }
  mQuestInfoBtn = *p_mCostConsumeBattleWinSp;
  if ( !*p_mCostConsumeBattleWinSp )
    goto LABEL_575;
  mQuestInfoBtn = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mQuestInfoBtn, 0LL);
  if ( !mQuestInfoBtn )
    goto LABEL_575;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mQuestInfoBtn, v317, 0LL);
  mQuestInfoBtn = *p_mCostConsumeBattleWinSp;
  if ( !*p_mCostConsumeBattleWinSp )
    goto LABEL_575;
  UIWidget__set_color(mQuestInfoBtn, *(UnityEngine_Color_o *)(v406 + 24), 0LL);
  if ( methoda.parameters
    && QuestPhaseDetailEntity__HasFlag((QuestPhaseDetailEntity_o *)methoda.parameters, 0x400000LL, 0LL) )
  {
    v318 = QuestBoardListViewItemDraw_TypeInfo;
    mOptionPreBattleSp = v248->fields.mOptionPreBattleSp;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v318 = QuestBoardListViewItemDraw_TypeInfo;
    }
    PRE_BATTLE_ORGANIZATION = v318->static_fields->PRE_BATTLE_ORGANIZATION;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetBanner(mOptionPreBattleSp, PRE_BATTLE_ORGANIZATION, 0LL);
    v248 = v409;
    mQuestInfoBtn = (UIWidget_o *)v409->fields.mMultiSecondBattleInformation;
    if ( !mQuestInfoBtn )
      goto LABEL_575;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mQuestInfoBtn,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v409->fields.mOptionPreBattleSp,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UISprite__Add__);
    v321 = 1;
  }
  else
  {
    v321 = 0;
  }
  mQuestInfoBtn = (UIWidget_o *)v248->fields.mOptionPreBattleSp;
  if ( !mQuestInfoBtn )
    goto LABEL_575;
  mQuestInfoBtn = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mQuestInfoBtn, 0LL);
  if ( !mQuestInfoBtn )
    goto LABEL_575;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mQuestInfoBtn, v321, 0LL);
  v417.fields.g = 0.078431;
  v417.fields.r = 0.78039;
  v417.fields.a = 1.0;
  v417.fields.b = 0.078431;
  UnityEngine_Color___ctor(v417, v322, v323, v324, v325, (const MethodInfo *)&methoda.klass);
  v330 = (UIWidget_o *)v248->fields.mOptionPreBattleSp;
  klass_high = HIDWORD(methoda.klass);
  klass = (int)methoda.klass;
  return_type = (int)methoda.return_type;
  if ( checkTimea == 2 )
  {
    v418.fields.r = *(float *)&methoda.klass * 0.5;
    v418.fields.g = *((float *)&methoda.klass + 1) * 0.5;
    v418.fields.b = *(float *)&methoda.return_type * 0.5;
    v418.fields.a = 1.0;
    methoda.methodPointer = 0LL;
    methoda.invoker_method = 0LL;
    UnityEngine_Color___ctor(v418, v326, v327, v328, v329, &methoda);
    klass_high = HIDWORD(methoda.methodPointer);
    klass = (int)methoda.methodPointer;
    invoker_method_high = HIDWORD(methoda.invoker_method);
    return_type = (int)methoda.invoker_method;
    if ( !v330 )
      goto LABEL_575;
  }
  else
  {
    invoker_method_high = HIDWORD(methoda.return_type);
    if ( !v330 )
      goto LABEL_575;
  }
  UIWidget__set_color(v330, *(UnityEngine_Color_o *)&klass, 0LL);
  mMultiSecondBattleInformation = v248->fields.mMultiSecondBattleInformation;
  if ( !mMultiSecondBattleInformation )
    goto LABEL_575;
  if ( mMultiSecondBattleInformation->fields._size >= 2 )
  {
    mQuestInfoBtn = (UIWidget_o *)v248->fields.secondBattleInformation;
    if ( !mQuestInfoBtn )
      goto LABEL_575;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mQuestInfoBtn, 1, 0LL);
    mQuestInfoBtn = (UIWidget_o *)v248->fields.secondBattleInformation;
    if ( !mQuestInfoBtn )
      goto LABEL_575;
    QuestBoardListViewMultiSecondBattleInformation__Init(
      (QuestBoardListViewMultiSecondBattleInformation_o *)mQuestInfoBtn,
      v248->fields.mMultiSecondBattleInformation,
      0LL);
  }
  mQuestInfoBtn = (UIWidget_o *)v248->fields.mOptionRestrinctionLb;
  if ( !mQuestInfoBtn )
    goto LABEL_575;
  mQuestInfoBtn = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mQuestInfoBtn, 0LL);
  if ( !mQuestInfoBtn )
    goto LABEL_575;
  mQuestInfoBtn = (UIWidget_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)mQuestInfoBtn, 0LL);
  if ( !mQuestInfoBtn )
    goto LABEL_575;
  mQuestInfoBtn = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mQuestInfoBtn, 0LL);
  if ( !mQuestInfoBtn )
    goto LABEL_575;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mQuestInfoBtn, v313 || v314, 0LL);
  mQuestInfoBtn = (UIWidget_o *)QuestEntity__HasFlag(v405, 0x400000000000000LL, 0LL);
  if ( !v248->fields.mOptionRestrinctionLb )
    goto LABEL_575;
  v336 = (char)mQuestInfoBtn;
  mQuestInfoBtn = (UIWidget_o *)UnityEngine_Component__get_transform(
                                  (UnityEngine_Component_o *)v248->fields.mOptionRestrinctionLb,
                                  0LL);
  if ( !mQuestInfoBtn )
    goto LABEL_575;
  mQuestInfoBtn = (UIWidget_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)mQuestInfoBtn, 0LL);
  if ( !mQuestInfoBtn )
    goto LABEL_575;
  v337 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mQuestInfoBtn, 0LL);
  v338 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (v336 & 1) == 0 )
  {
    if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v338 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v337, v338->static_fields->RESTRICTION_POS_DEFAULT, 0LL);
    v343 = v248->fields.mOptionRestrinctionLb;
    if ( !v343 )
      goto LABEL_575;
    if ( v343->fields.mWidth <= v248->fields.restrictionDefaultWidth )
    {
      v346 = QuestBoardListViewItemDraw_TypeInfo;
      mSpacingX = v343->fields.mSpacingX;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v346 = QuestBoardListViewItemDraw_TypeInfo;
      }
      RESTRICTION_FONT_SPACING_DEFAULT = v346->static_fields->RESTRICTION_FONT_SPACING_DEFAULT;
      if ( mSpacingX == RESTRICTION_FONT_SPACING_DEFAULT )
      {
        if ( (v315 & 1) != 0 )
          goto LABEL_546;
        goto LABEL_543;
      }
      if ( (BYTE3(v346->vtable._0_Equals.methodPtr) & 4) != 0 && !v346->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v346);
        RESTRICTION_FONT_SPACING_DEFAULT = QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_FONT_SPACING_DEFAULT;
      }
    }
    else
    {
      v344 = QuestBoardListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        v344 = QuestBoardListViewItemDraw_TypeInfo;
      }
      RESTRICTION_FONT_SPACING_DEFAULT = v344->static_fields->RESTRICTION_FONT_SPACING_MIN;
    }
    QuestBoardListViewItemDraw__SetRestrinctionLabelSpacingX(v248, RESTRICTION_FONT_SPACING_DEFAULT, v342);
    if ( (v315 & 1) != 0 )
      goto LABEL_546;
LABEL_543:
    mQuestInfoBtn = (UIWidget_o *)v248->fields.mOptionRestrinctionLb;
    if ( !mQuestInfoBtn )
      goto LABEL_575;
    restrictionDefaultWidth = v248->fields.restrictionDefaultWidth;
LABEL_545:
    UILabel__SetCondensedScale((UILabel_o *)mQuestInfoBtn, restrictionDefaultWidth, 0LL);
    goto LABEL_546;
  }
  if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v338 = QuestBoardListViewItemDraw_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition(v337, v338->static_fields->RESTRICTION_POS_ALLOUT, 0LL);
  mQuestInfoBtn = (UIWidget_o *)v248->fields.mOptionRestrinctionLb;
  if ( !mQuestInfoBtn )
    goto LABEL_575;
  UILabel__set_fontSize(
    (UILabel_o *)mQuestInfoBtn,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_FONT_SIZE_ALLOUT,
    0LL);
  QuestBoardListViewItemDraw__SetRestrinctionLabelSpacingX(
    v248,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_FONT_SPACING_DEFAULT,
    v339);
  if ( (v315 & 1) == 0 )
  {
    mQuestInfoBtn = (UIWidget_o *)QuestBoardListViewItemDraw_TypeInfo;
    v340 = (UIWidget_o *)v248->fields.mOptionRestrinctionLb;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    }
    if ( !v340 )
      goto LABEL_575;
    mQuestInfoBtn = v340;
    restrictionDefaultWidth = QuestBoardListViewItemDraw_TypeInfo->static_fields->RESTRICTION_FONT_WIDTH_ALLOUT;
    goto LABEL_545;
  }
LABEL_546:
  mQuestInfoBtn = (UIWidget_o *)v248->fields.mOptionRestrinctionLb;
  if ( !mQuestInfoBtn )
    goto LABEL_575;
  UIWidget__set_color(mQuestInfoBtn, *(UnityEngine_Color_o *)(v406 + 24), 0LL);
  if ( checkTimea == 2 )
  {
    mOptionRestrinctionSp = (UIWidget_o *)v248->fields.mOptionRestrinctionSp;
    if ( !mOptionRestrinctionSp )
      goto LABEL_575;
    v419.fields.a = mOptionRestrinctionSp->fields.mColor.fields.a;
    v419.fields.r = mOptionRestrinctionSp->fields.mColor.fields.r * 0.5;
    v419.fields.g = mOptionRestrinctionSp->fields.mColor.fields.g * 0.5;
    v419.fields.b = mOptionRestrinctionSp->fields.mColor.fields.b * 0.5;
    methoda.methodPointer = 0LL;
    methoda.invoker_method = 0LL;
    UnityEngine_Color___ctor(v419, 0.5, v348, v349, v350, &methoda);
    *(_QWORD *)&v420.fields.r = methoda.methodPointer;
    *(_QWORD *)&v420.fields.b = methoda.invoker_method;
    UIWidget__set_color(mOptionRestrinctionSp, v420, 0LL);
  }
  mQuestInfoBtn = (UIWidget_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  v399,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !mQuestInfoBtn )
    goto LABEL_575;
  v352 = v396;
  v353 = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)mQuestInfoBtn, v405->fields.id, questPhase, 0LL);
  v354 = v353;
  if ( v353 )
  {
    classIds = v353->fields.classIds;
    if ( classIds )
      LODWORD(classIds) = classIds->max_length != 0;
  }
  else
  {
    LODWORD(classIds) = 0;
  }
  v356 = ((unsigned int)classIds & v352) == 0;
  if ( ((unsigned int)classIds & v352) != 0 && checkTimea == 2 )
    v356 = QuestEntity__HasFlag(v405, 2048LL, 0LL);
  mQuestInfoBtn = (UIWidget_o *)v248->fields.mClassIconRoot;
  if ( !mQuestInfoBtn )
    goto LABEL_575;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mQuestInfoBtn, !v356, 0LL);
  mQuestInfoBtn = (UIWidget_o *)v248->fields.mClassStrSp;
  if ( !mQuestInfoBtn )
    goto LABEL_575;
  UIWidget__set_color(mQuestInfoBtn, *(UnityEngine_Color_o *)(v406 + 24), 0LL);
  if ( !v356 )
  {
    if ( !v354 )
      goto LABEL_575;
    mClassIcons = v248->fields.mClassIcons;
    if ( !mClassIcons )
      goto LABEL_575;
    max_length = mClassIcons->max_length;
    if ( max_length >= 1 )
    {
      v359 = v354->fields.classIds;
      v360 = 1;
      while ( 1 )
      {
        v361 = v360 - 1;
        if ( v360 - 1 >= mClassIcons->max_length )
          break;
        v362 = v361;
        v363 = (__int64)mClassIcons + 8 * v361;
        v364 = *(UnityEngine_Component_o **)(v363 + 32);
        if ( !v364 )
          goto LABEL_575;
        mQuestInfoBtn = (UIWidget_o *)UnityEngine_Component__get_gameObject(
                                        *(UnityEngine_Component_o **)(v363 + 32),
                                        0LL);
        if ( !v359 )
          goto LABEL_575;
        if ( !mQuestInfoBtn )
          goto LABEL_575;
        UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)mQuestInfoBtn,
          (int)v362 < (signed int)v359->max_length,
          0LL);
        mQuestInfoBtn = (UIWidget_o *)UnityEngine_Component__get_gameObject(v364, 0LL);
        if ( !mQuestInfoBtn )
          goto LABEL_575;
        mQuestInfoBtn = (UIWidget_o *)UnityEngine_GameObject__get_activeSelf(
                                        (UnityEngine_GameObject_o *)mQuestInfoBtn,
                                        0LL);
        if ( ((unsigned __int8)mQuestInfoBtn & 1) != 0 )
        {
          if ( (unsigned int)v362 >= v359->max_length )
            break;
          ServantClassIconComponent__Set((ServantClassIconComponent_o *)v364, v359->m_Items[v362 + 1], 0LL);
          ServantClassIconComponent__SetColor(
            (ServantClassIconComponent_o *)v364,
            *(UnityEngine_Color_o *)(v406 + 24),
            0LL);
        }
        if ( v360 >= max_length )
          goto LABEL_576;
        mClassIcons = v248->fields.mClassIcons;
        ++v360;
        if ( !mClassIcons )
          goto LABEL_575;
      }
LABEL_638:
      v390 = sub_B0D9A8(mQuestInfoBtn);
      sub_B0D948(v390, 0LL);
    }
  }
LABEL_576:
  if ( key >= 1 )
  {
    eventTarget = (UnityEngine_Object_o *)v248->fields.eventTarget;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(eventTarget, 0LL, 0LL) )
    {
      eventTargetComponent = (UnityEngine_Object_o *)v248->fields.eventTargetComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(eventTargetComponent, 0LL, 0LL) )
      {
        mQuestInfoBtn = (UIWidget_o *)v248->fields.mQuestInfoBtn;
        if ( !mQuestInfoBtn )
          goto LABEL_575;
        if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)mQuestInfoBtn, 0LL) )
        {
          mQuestInfoBtn = (UIWidget_o *)v248->fields.eventTargetComponent;
          if ( !mQuestInfoBtn )
            goto LABEL_575;
          BoardOptionEventTargetComponent__DestroyList((BoardOptionEventTargetComponent_o *)mQuestInfoBtn, 0LL);
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          mQuestInfoBtn = (UIWidget_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ViewEnemyMaster___);
          if ( !mQuestInfoBtn )
            goto LABEL_575;
          EntityListFromQuestId = ViewEnemyMaster__GetEntityListFromQuestId(
                                    (ViewEnemyMaster_o *)mQuestInfoBtn,
                                    v404[4],
                                    0LL);
          if ( EntityListFromQuestId
            && (v370 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromQuestId,
                *(_QWORD *)&EntityListFromQuestId->max_length) )
          {
            v371 = QuestBoardListViewItemDraw___c_TypeInfo;
            if ( (BYTE3(QuestBoardListViewItemDraw___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !QuestBoardListViewItemDraw___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw___c_TypeInfo);
              v371 = QuestBoardListViewItemDraw___c_TypeInfo;
            }
            v372 = v371->static_fields;
            _9__305_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v372->__9__305_1;
            if ( !_9__305_1 )
            {
              if ( (BYTE3(v371->vtable._0_Equals.methodPtr) & 4) != 0 && !v371->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v371);
                v372 = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
              }
              v374 = (Il2CppObject *)v372->__9;
              _9__305_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                            System_Func_ViewEnemyEntity__int__TypeInfo,
                                                                                            v368,
                                                                                            v369);
              System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
                _9__305_1,
                v374,
                Method_QuestBoardListViewItemDraw___c__SetItemOfQuest_b__305_1__,
                (const MethodInfo_2619564 *)Method_System_Func_ViewEnemyEntity__int___ctor__);
              v375 = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
              v375->__9__305_1 = (struct System_Func_ViewEnemyEntity__int__o *)_9__305_1;
              sub_B0D840(
                (BattleServantConfConponent_o *)&v375->__9__305_1,
                (System_Int32_array **)_9__305_1,
                v376,
                v377,
                v378,
                v379,
                v380,
                v381);
            }
            v382 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                          v370,
                                                                          (System_Func_TSource__TResult__o *)_9__305_1,
                                                                          (const MethodInfo_1B51AB4 *)Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___);
            mQuestInfoBtn = (UIWidget_o *)System_Linq_Enumerable__ToArray_int_(
                                            v382,
                                            (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
            if ( !v248->fields.eventTarget )
              goto LABEL_575;
            v383 = (System_Int32_array *)mQuestInfoBtn;
            UnityEngine_GameObject__SetActive(v248->fields.eventTarget, 1, 0LL);
            mQuestInfoBtn = (UIWidget_o *)v248->fields.eventTargetComponent;
            if ( !mQuestInfoBtn )
              goto LABEL_575;
            BoardOptionEventTargetComponent__CreateEnemyList(
              (BoardOptionEventTargetComponent_o *)mQuestInfoBtn,
              v404[4],
              v383,
              0LL);
          }
          else
          {
            mQuestInfoBtn = (UIWidget_o *)v248->fields.eventTarget;
            if ( !mQuestInfoBtn )
              goto LABEL_575;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mQuestInfoBtn, 0, 0LL);
          }
        }
      }
    }
  }
  if ( ((unsigned __int8)v397 & (checkTimea == 2) & QuestEntity__HasFlag(v405, 0x400000000000000LL, 0LL)) == 1 )
  {
    alloutRoot = (UnityEngine_Object_o *)v248->fields.alloutRoot;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(alloutRoot, 0LL, 0LL) )
    {
      alloutRootComponent = (UnityEngine_Object_o *)v248->fields.alloutRootComponent;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(alloutRootComponent, 0LL, 0LL) )
      {
        if ( !v404[17] )
          goto LABEL_624;
        v386 = v404[4];
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( CondType__IsQuestClear_25410236(v386, -1, 1, 0LL) )
        {
LABEL_624:
          mQuestInfoBtn = (UIWidget_o *)v248->fields.alloutRoot;
          if ( mQuestInfoBtn )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mQuestInfoBtn, 1, 0LL);
            mQuestInfoBtn = (UIWidget_o *)v248->fields.alloutRootComponent;
            if ( mQuestInfoBtn )
            {
              BoardOptionAlloutComponent__SetIcon((BoardOptionAlloutComponent_o *)mQuestInfoBtn, v404[4], 0LL);
              return;
            }
          }
LABEL_575:
          sub_B0D97C(mQuestInfoBtn);
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
  __int64 v23; // x1
  int64_t Instance; // x0
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
  UnityEngine_GameObject_o *gameObject; // x24
  QuestBoardListViewItemDraw_c *v54; // x8
  float NEXT_POS_X_QUEST; // w8
  bool activeSelf; // w0
  const MethodInfo *v57; // x3
  QuestBoardListViewItemDraw_c *v58; // x8
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  const MethodInfo *v63; // x1
  const MethodInfo *v64; // x3
  const MethodInfo *v65; // x1
  const MethodInfo *v66; // x4
  struct UILabel_o **p_mTitleNameLb; // x24
  System_String_o *v68; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v69; // x22
  Il2CppObject *BattleName; // x0
  UILabel_o *v71; // x22
  const MethodInfo *v72; // x3
  int32_t questId; // w22
  int32_t afterClear; // w23
  bool IsRepeatReward; // w0
  const MethodInfo *v76; // x4
  const MethodInfo *v77; // x3
  const MethodInfo *v78; // x1
  int32_t questPhase; // w22
  int32_t PhaseMax; // w0
  int32_t v81; // w0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *mInfoTextList; // x22
  const MethodInfo *v83; // x6
  int64_t *p_expireAt; // x8
  int64_t v85; // x22
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v86; // x21
  System_String_o *v87; // x24
  __int64 v88; // x1
  __int64 v89; // x2
  QuestBoardInformaionText_o *v90; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v91; // x23
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v92; // x23
  int32_t size; // w1
  struct BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x21
  struct QuestBoardListViewObject_o *v95; // x8
  __int64 v96; // x10
  const MethodInfo *v97; // x3
  int32_t AlphaAnimCnt; // w22
  bool v99; // w22
  UnityEngine_Object_o *mEarthLine; // x21
  const MethodInfo *v101; // x3
  QuestBoardListViewEarthLine_o *v102; // x21
  QuestBoardListViewItemDraw_o *v103; // x0
  const MethodInfo *v104; // x1
  EventCampaignEntity_o *v105; // [xsp+0h] [xbp-A0h]
  const MethodInfo *v106; // [xsp+10h] [xbp-90h]
  int32_t v107; // [xsp+1Ch] [xbp-84h] BYREF
  int32_t fixedVal[2]; // [xsp+20h] [xbp-80h] BYREF
  UserQuestEntity_o *entity; // [xsp+28h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v110; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v111; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v112; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v113; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v114; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v115; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v116; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4216CD7 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, questBoardItem);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserQuestMaster___, v6);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v8);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__, v13);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v14);
    sub_B0D8A4(&NetworkManager_TypeInfo, v15);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v16);
    sub_B0D8A4(&QuestBoardInformaionText_TypeInfo, v17);
    sub_B0D8A4(&QuestBoardListViewItemDraw_TypeInfo, v18);
    sub_B0D8A4(&QuestBoardListViewManager_TypeInfo, v19);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B0D8A4(&StringLiteral_13452/*"TIME_REST_QUEST_BOARD_QUEST"*/, v21);
    sub_B0D8A4(&StringLiteral_23617/*"{0}"*/, v22);
    sub_B0D8A4(&StringLiteral_1/*""*/, v23);
    byte_4216CD7 = 1;
  }
  entity = 0LL;
  *(_QWORD *)fixedVal = 0LL;
  v107 = 0;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !questBoardItem )
    goto LABEL_155;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_155;
  v26 = (DataManager_o *)Instance;
  Instance = (int64_t)MapControl_QuestInfo__GetMine(questBoardItem->fields._quest_info_k__BackingField, 0LL);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_155;
  v28 = (QuestEntity_o *)Instance;
  Instance = (int64_t)mListViewObject->fields.manager;
  if ( !Instance )
    goto LABEL_155;
  v29 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v29
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v29 - 8) != QuestBoardListViewManager_TypeInfo )
  {
    sub_B0DC70(Instance);
    goto LABEL_157;
  }
  if ( !v26 )
    goto LABEL_155;
  dispType = quest_info_k__BackingField->fields.dispType;
  v31 = *(_QWORD *)(Instance + 568);
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              v26,
                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v28 || !MasterData_WarQuestSelectionMaster )
    goto LABEL_155;
  UserQuestMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, Instance, v28->fields.id, 0LL);
  *(UnityEngine_Color_o *)&v33 = dispType == 2 ? UnityEngine_Color__get_gray(0LL) : UnityEngine_Color__get_white(0LL);
  Instance = (int64_t)this->fields.mLabelObj;
  v37 = v33;
  v38 = v34;
  v39 = v35;
  v40 = v36;
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mLabelNameSp;
  if ( !Instance )
    goto LABEL_155;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mLabelChapterSp;
  if ( !Instance )
    goto LABEL_155;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mLabelFaceMaskShortcutSp;
  if ( !Instance )
    goto LABEL_155;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mLabelFaceMaskQuestSp;
  if ( !Instance )
    goto LABEL_155;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mTitleObj;
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mTitleLevelRoot;
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mTitleShortcutLb;
  if ( !Instance )
    goto LABEL_155;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mAdvanceNoticeObj;
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mOverwriteAdvanceNoticeObj;
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mOptionObj;
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_155;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_155;
  Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_155;
  Instance = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_155;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mRewardObj;
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mPhaseObj;
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mChallengeObj;
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mCostObj;
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mCondObject;
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mLabelFaceObj;
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  OverwriteBannerId_k__BackingField = questBoardItem->fields._OverwriteBannerId_k__BackingField;
  if ( OverwriteBannerId_k__BackingField < 1 )
  {
    if ( v28->fields.bannerId <= 0 )
    {
      p_mcBaseP = &this->fields.mcBaseP;
      goto LABEL_61;
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
    v107 = OverwriteBannerId_k__BackingField;
    v44 = System_Int32__ToString((int32_t)&v107, 0LL);
    v45 = RECOLLECTION_QUEST_BOARD_SPNAME_PREFIX;
  }
  v48 = System_String__Concat_43849904(v45, v44, 0LL);
  p_mcBaseP = &this->fields.mcBaseP;
  mcBaseP = this->fields.mcBaseP;
  v51 = v48;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = AtlasManager__SetEventUI(mcBaseP, v51, 0LL);
  if ( !mcBaseP )
    goto LABEL_155;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mcBaseP, Instance & 1, 0LL);
LABEL_61:
  Instance = (int64_t)*p_mcBaseP;
  if ( !*p_mcBaseP )
    goto LABEL_155;
  (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 840LL))(
    Instance,
    *(_QWORD *)(*(_QWORD *)Instance + 848LL));
  Instance = (int64_t)*p_mcBaseP;
  if ( !*p_mcBaseP )
    goto LABEL_155;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_155;
  Instance = (int64_t)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                        (UnityEngine_GameObject_o *)Instance,
                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Instance )
    goto LABEL_155;
  v111.fields.r = v37;
  v111.fields.g = v38;
  v111.fields.b = v39;
  v111.fields.a = v40;
  UIWidget__set_color((UIWidget_o *)Instance, v111, 0LL);
  if ( MapControl_QuestInfo__IsDisplayQuestNextIcon(quest_info_k__BackingField, 0LL) )
  {
    Instance = (int64_t)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_155;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_155;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    Instance = (int64_t)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_155;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    v54 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v54 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionX(gameObject, v54->static_fields->NEXT_POS_X_QUEST, 0LL);
    Instance = (int64_t)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_155;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_155;
    Instance = (int64_t)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          (UnityEngine_GameObject_o *)Instance,
                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( !Instance )
      goto LABEL_155;
    NEXT_POS_X_QUEST = QuestBoardListViewItemDraw_TypeInfo->static_fields->NEXT_POS_X_QUEST;
    *(float *)(Instance + 120) = NEXT_POS_X_QUEST;
    *(float *)(Instance + 132) = NEXT_POS_X_QUEST;
  }
  if ( dispType != 2 && quest_info_k__BackingField->fields.isNew )
    QuestBoardListViewItemDraw__SetStatusActive(this, 1, 1, v52);
  Instance = (int64_t)this->fields.mNextSp;
  if ( !Instance )
    goto LABEL_155;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_155;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  v58 = QuestBoardListViewItemDraw_TypeInfo;
  if ( activeSelf )
  {
    if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v58 = QuestBoardListViewItemDraw_TypeInfo;
    }
    static_fields = v58->static_fields;
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
      v58 = QuestBoardListViewItemDraw_TypeInfo;
    }
    static_fields = v58->static_fields;
    x = static_fields->NEW_POS_SHORTCUT.fields.x;
    y = static_fields->NEW_POS_SHORTCUT.fields.y;
    z = static_fields->NEW_POS_SHORTCUT.fields.z;
  }
  QuestBoardListViewItemDraw__SetNewIcon(
    this,
    *(UnityEngine_Vector3_o *)&x,
    static_fields->NEW_W_DEFAULT,
    static_fields->NEW_H_DEFAULT,
    v57);
  if ( quest_info_k__BackingField->fields.pickupPriority >= 1 )
    QuestBoardListViewItemDraw__SetStatusActive(this, 4, 1, v64);
  QuestBoardListViewItemDraw__SetPickupIcon(this, v63);
  if ( dispType == 2 )
  {
    QuestBoardListViewItemDraw__SetAdvanceNoticeText(this, quest_info_k__BackingField, v28, v31, v66);
    p_mTitleNameLb = &this->fields.mTitleNameLb;
  }
  else
  {
    if ( quest_info_k__BackingField->fields.isNew && quest_info_k__BackingField->fields.pickupPriority >= 1 )
      QuestBoardListViewItemDraw__SetStatusToggle(this, v65);
    Instance = (int64_t)QuestEntity__getQuestName(v28, 0LL);
    if ( !Instance )
      goto LABEL_155;
    v68 = (System_String_o *)Instance;
    if ( System_String__Contains((System_String_o *)Instance, (System_String_o *)StringLiteral_23617/*"{0}"*/, 0LL) )
    {
      v69 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             v26,
                                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
      Instance = QuestEntity__getServantId(v28, 0LL);
      if ( !v69 )
        goto LABEL_155;
      Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            v69,
                            Instance,
                            (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_155;
      BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)Instance, 0, -1, 0LL);
      v68 = System_String__Format(v68, BattleName, 0LL);
    }
    p_mTitleNameLb = &this->fields.mTitleNameLb;
    Instance = (int64_t)this->fields.mTitleNameLb;
    if ( !Instance )
      goto LABEL_155;
    UILabel__set_text((UILabel_o *)Instance, v68, 0LL);
    Instance = (int64_t)this->fields.mAdvanceNoticeLb;
    if ( !Instance )
      goto LABEL_155;
    UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
  v71 = *p_mTitleNameLb;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  }
  if ( !v71 )
    goto LABEL_155;
  UILabel__SetCondensedScale(v71, QuestBoardListViewItemDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH, 0LL);
  Instance = (int64_t)*p_mTitleNameLb;
  if ( !*p_mTitleNameLb )
    goto LABEL_155;
  v112.fields.r = v37;
  v112.fields.g = v38;
  v112.fields.b = v39;
  v112.fields.a = v40;
  UIWidget__set_color((UIWidget_o *)Instance, v112, 0LL);
  v113.fields.r = v37;
  v113.fields.g = v38;
  v113.fields.b = v39;
  v113.fields.a = v40;
  QuestBoardListViewItemDraw__SetupRewardIconDisp(this, v28, dispType == 2, v113, v72);
  questId = quest_info_k__BackingField->fields.questId;
  afterClear = v28->fields.afterClear;
  IsRepeatReward = QuestEntity__IsRepeatReward(v28, 0LL);
  v114.fields.r = v37;
  v114.fields.g = v38;
  v114.fields.b = v39;
  v114.fields.a = v40;
  QuestBoardListViewItemDraw__SetupFirstRewardDisp(this, questId, afterClear, v114, IsRepeatReward, v76);
  v115.fields.r = v37;
  v115.fields.g = v38;
  v115.fields.b = v39;
  v115.fields.a = v40;
  QuestBoardListViewItemDraw__SetupRewardGotAndNotGiveDisp(this, quest_info_k__BackingField, entity, v115, v77);
  QuestBoardListViewItemDraw__ResetInfoTextList(this, v78);
  fixedVal[0] = -1;
  fixedVal[1] = 0;
  questPhase = quest_info_k__BackingField->fields.questPhase;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0LL);
  v81 = UnityEngine_Mathf__Min_40819044(questPhase + 1, PhaseMax, 0LL);
  mInfoTextList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields.mInfoTextList;
  Instance = (int64_t)QuestBoardListViewItemDraw__GetCampaignText(
                        this,
                        quest_info_k__BackingField->fields.questId,
                        v81,
                        0,
                        &fixedVal[1],
                        fixedVal,
                        v83);
  if ( !mInfoTextList )
    goto LABEL_155;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    mInfoTextList,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
  Instance = (int64_t)this->fields.mRarePrismSp;
  if ( !Instance )
    goto LABEL_155;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_155;
  Instance = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( (Instance & 1) != 0 )
  {
    Instance = (int64_t)entity;
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
  v85 = *p_expireAt;
  if ( *p_expireAt >= 1 )
  {
    Instance = QuestEntity__HasFlag(v28, 32LL, 0LL);
    if ( (Instance & 1) == 0 )
    {
      v86 = this->fields.mInfoTextList;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v87 = LocalizationManager__Get((System_String_o *)StringLiteral_13452/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0LL);
      v90 = (QuestBoardInformaionText_o *)sub_B0D974(QuestBoardInformaionText_TypeInfo, v88, v89);
      v116.fields.r = 0.0;
      v116.fields.g = 0.0;
      v116.fields.b = 0.0;
      v116.fields.a = 0.0;
      v110.fields.x = 0.0;
      v110.fields.y = 0.0;
      v110.fields.z = 0.0;
      v91 = (EventMissionProgressRequest_Argument_ProgressData_o *)v90;
      QuestBoardInformaionText___ctor(v90, v87, v85, 0, 0, v116, -1, 0, v110, 1, v105, 0LL, v106);
      if ( !v86 )
        goto LABEL_155;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v86,
        v91,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
    }
  }
LABEL_126:
  v92 = this->fields.mInfoTextList;
  if ( !v92 )
    goto LABEL_155;
  size = v92->fields._size;
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  if ( size < 1 )
  {
    v99 = 0;
    goto LABEL_138;
  }
  v95 = this->fields.mListViewObject;
  if ( !v95 )
    goto LABEL_155;
  Instance = (int64_t)v95->fields.manager;
  if ( !Instance )
    goto LABEL_155;
  v96 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v96
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v96 - 8) != QuestBoardListViewManager_TypeInfo )
  {
LABEL_157:
    sub_B0DC70(Instance);
    QuestBoardListViewItemDraw__ResetInfoTextList(v103, v104);
    return;
  }
  AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt((QuestBoardListViewManager_o *)Instance, size, 0LL);
  if ( v92->fields._size <= (unsigned int)AlphaAnimCnt )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  Instance = (int64_t)v92->fields._items->m_Items[AlphaAnimCnt];
  if ( !Instance )
    goto LABEL_155;
  QuestBoardInformaionText__SetTime(
    (QuestBoardInformaionText_o *)Instance,
    &this->fields.mOptionInfoLb,
    &this->fields.mOptionInfoFrameSp,
    v97);
  Instance = (int64_t)this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_155;
  BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)Instance, 1.0, 0LL);
  v99 = 1;
  quest_info_k__BackingField->fields.costCalcVal = fixedVal[1];
  quest_info_k__BackingField->fields._fixedCostVal_k__BackingField = fixedVal[0];
LABEL_138:
  Instance = (int64_t)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_155;
  Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_155;
  Instance = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_155;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v99, 0LL);
  Instance = (int64_t)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_155;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v99, 0LL);
  mEarthLine = (UnityEngine_Object_o *)this->fields.mEarthLine;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mEarthLine, 0LL, 0LL) )
  {
    Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
    v102 = this->fields.mEarthLine;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
    }
    if ( v102 )
    {
      QuestBoardListViewEarthLine__SetupSecond(
        v102,
        *(UnityEngine_Vector3_o *)(*(_QWORD *)(Instance + 184) + 244LL),
        this->fields.mListViewObject,
        quest_info_k__BackingField->fields.warId,
        v101);
      return;
    }
LABEL_155:
    sub_B0D97C(Instance);
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
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x20
  int32_t info_kind_k__BackingField; // w28
  DataManager_o *v26; // x22
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  QuestEntity_o *v28; // x21
  __int64 v29; // x9
  int32_t dispType; // w27
  int64_t v31; // x23
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x24
  float v33; // s0
  float v34; // s1
  float v35; // s2
  float v36; // s3
  float v37; // s8
  float v38; // s9
  float v39; // s10
  float v40; // s11
  UISprite_o *mcBaseP; // x24
  System_String_o **v42; // x8
  const MethodInfo *v43; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  QuestBoardListViewItemDraw_c *v45; // x8
  UnityEngine_GameObject_o *v46; // x24
  float NEXT_POS_X_QUEST; // w8
  bool activeSelf; // w0
  const MethodInfo *v49; // x3
  QuestBoardListViewItemDraw_c *v50; // x8
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  const MethodInfo *v55; // x1
  const MethodInfo *v56; // x3
  const MethodInfo *v57; // x1
  const MethodInfo *v58; // x4
  struct UILabel_o **p_mTitleNameLb; // x24
  System_String_o *v60; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v61; // x24
  Il2CppObject *BattleName; // x0
  UILabel_o *v63; // x23
  int32_t ServantId; // w23
  UILabel_o *mTitleShortcutLb; // x22
  const MethodInfo *v66; // x5
  QuestBoardListViewItemDraw_c *v67; // x0
  UISprite_o *mLabelFaceMaskShortcutSp; // x22
  const MethodInfo *v69; // x3
  int32_t questId; // w22
  int32_t afterClear; // w23
  bool IsRepeatReward; // w0
  const MethodInfo *v73; // x4
  const MethodInfo *v74; // x3
  const MethodInfo *v75; // x1
  int32_t questPhase; // w22
  int32_t PhaseMax; // w0
  int32_t v78; // w0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *mInfoTextList; // x22
  const MethodInfo *v80; // x6
  int64_t *p_expireAt; // x8
  int64_t v82; // x22
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v83; // x21
  System_String_o *v84; // x24
  __int64 v85; // x1
  __int64 v86; // x2
  QuestBoardInformaionText_o *v87; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v88; // x23
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v89; // x23
  int32_t size; // w1
  struct BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x21
  struct QuestBoardListViewObject_o *v92; // x8
  __int64 v93; // x10
  const MethodInfo *v94; // x3
  int32_t AlphaAnimCnt; // w22
  bool v96; // w22
  UnityEngine_Object_o *mEarthLine; // x21
  const MethodInfo *v98; // x3
  QuestBoardListViewEarthLine_o *v99; // x21
  QuestBoardListViewItemDraw_o *v100; // x0
  QuestBoardListViewItem_o *v101; // x1
  const MethodInfo *v102; // x2
  EventCampaignEntity_o *v103; // [xsp+0h] [xbp-A0h]
  const MethodInfo *v104; // [xsp+10h] [xbp-90h]
  int32_t fixedVal[2]; // [xsp+20h] [xbp-80h] BYREF
  UserQuestEntity_o *entity; // [xsp+28h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v107; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v108; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v109; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v110; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v111; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v112; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v113; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v114; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v115; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4216CD6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, questBoardItem);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserQuestMaster___, v5);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v7);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__, v12);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v13);
    sub_B0D8A4(&NetworkManager_TypeInfo, v14);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v15);
    sub_B0D8A4(&QuestBoardInformaionText_TypeInfo, v16);
    sub_B0D8A4(&QuestBoardListViewItemDraw_TypeInfo, v17);
    sub_B0D8A4(&QuestBoardListViewManager_TypeInfo, v18);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B0D8A4(&StringLiteral_13452/*"TIME_REST_QUEST_BOARD_QUEST"*/, v20);
    sub_B0D8A4(&StringLiteral_23617/*"{0}"*/, v21);
    sub_B0D8A4(&StringLiteral_1/*""*/, v22);
    byte_4216CD6 = 1;
  }
  *(_QWORD *)fixedVal = 0LL;
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !questBoardItem )
    goto LABEL_159;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_159;
  info_kind_k__BackingField = questBoardItem->fields._info_kind_k__BackingField;
  v26 = (DataManager_o *)Instance;
  Instance = (int64_t)MapControl_QuestInfo__GetMine(questBoardItem->fields._quest_info_k__BackingField, 0LL);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_159;
  v28 = (QuestEntity_o *)Instance;
  Instance = (int64_t)mListViewObject->fields.manager;
  if ( !Instance )
    goto LABEL_159;
  v29 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v29
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v29 - 8) != QuestBoardListViewManager_TypeInfo )
  {
    sub_B0DC70(Instance);
    goto LABEL_161;
  }
  if ( !v26 )
    goto LABEL_159;
  dispType = quest_info_k__BackingField->fields.dispType;
  v31 = *(_QWORD *)(Instance + 568);
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              v26,
                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v28 || !MasterData_WarQuestSelectionMaster )
    goto LABEL_159;
  UserQuestMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, Instance, v28->fields.id, 0LL);
  *(UnityEngine_Color_o *)&v33 = dispType == 2 ? UnityEngine_Color__get_gray(0LL) : UnityEngine_Color__get_white(0LL);
  Instance = (int64_t)this->fields.mLabelObj;
  v37 = v33;
  v38 = v34;
  v39 = v35;
  v40 = v36;
  if ( !Instance )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mLabelNameSp;
  if ( !Instance )
    goto LABEL_159;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mLabelChapterSp;
  if ( !Instance )
    goto LABEL_159;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mLabelFaceMaskShortcutSp;
  if ( !Instance )
    goto LABEL_159;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mLabelFaceMaskQuestSp;
  if ( !Instance )
    goto LABEL_159;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mTitleObj;
  if ( !Instance )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mTitleLevelRoot;
  if ( !Instance )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mTitleShortcutLb;
  if ( !Instance )
    goto LABEL_159;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mAdvanceNoticeObj;
  if ( !Instance )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mOverwriteAdvanceNoticeObj;
  if ( !Instance )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mOptionObj;
  if ( !Instance )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_159;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_159;
  Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_159;
  Instance = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_159;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mRewardObj;
  if ( !Instance )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mPhaseObj;
  if ( !Instance )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mChallengeObj;
  if ( !Instance )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mCostObj;
  if ( !Instance )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mCondObject;
  if ( !Instance )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mcBaseP;
  if ( !Instance )
    goto LABEL_159;
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
    v42 = (System_String_o **)(*(_QWORD *)(Instance + 184) + 1016LL);
    if ( !mcBaseP )
      goto LABEL_159;
  }
  else
  {
    if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
    }
    v42 = (System_String_o **)(*(_QWORD *)(Instance + 184) + 1024LL);
    if ( !mcBaseP )
      goto LABEL_159;
  }
  UISprite__set_spriteName(mcBaseP, *v42, 0LL);
  Instance = (int64_t)this->fields.mcBaseP;
  if ( !Instance )
    goto LABEL_159;
  (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 840LL))(
    Instance,
    *(_QWORD *)(*(_QWORD *)Instance + 848LL));
  Instance = (int64_t)this->fields.mcBaseP;
  if ( !Instance )
    goto LABEL_159;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_159;
  Instance = (int64_t)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                        (UnityEngine_GameObject_o *)Instance,
                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Instance )
    goto LABEL_159;
  v108.fields.r = v37;
  v108.fields.g = v38;
  v108.fields.b = v39;
  v108.fields.a = v40;
  UIWidget__set_color((UIWidget_o *)Instance, v108, 0LL);
  if ( MapControl_QuestInfo__IsDisplayQuestNextIcon(quest_info_k__BackingField, 0LL) )
  {
    Instance = (int64_t)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_159;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_159;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    Instance = (int64_t)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_159;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    v45 = QuestBoardListViewItemDraw_TypeInfo;
    v46 = gameObject;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v45 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionX(v46, v45->static_fields->NEXT_POS_X_QUEST, 0LL);
    Instance = (int64_t)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_159;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_159;
    Instance = (int64_t)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          (UnityEngine_GameObject_o *)Instance,
                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( !Instance )
      goto LABEL_159;
    NEXT_POS_X_QUEST = QuestBoardListViewItemDraw_TypeInfo->static_fields->NEXT_POS_X_QUEST;
    *(float *)(Instance + 120) = NEXT_POS_X_QUEST;
    *(float *)(Instance + 132) = NEXT_POS_X_QUEST;
  }
  if ( dispType != 2 && quest_info_k__BackingField->fields.isNew )
    QuestBoardListViewItemDraw__SetStatusActive(this, 1, 1, v43);
  Instance = (int64_t)this->fields.mNextSp;
  if ( !Instance )
    goto LABEL_159;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_159;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  v50 = QuestBoardListViewItemDraw_TypeInfo;
  if ( activeSelf )
  {
    if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v50 = QuestBoardListViewItemDraw_TypeInfo;
    }
    static_fields = v50->static_fields;
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
      v50 = QuestBoardListViewItemDraw_TypeInfo;
    }
    static_fields = v50->static_fields;
    x = static_fields->NEW_POS_SHORTCUT.fields.x;
    y = static_fields->NEW_POS_SHORTCUT.fields.y;
    z = static_fields->NEW_POS_SHORTCUT.fields.z;
  }
  QuestBoardListViewItemDraw__SetNewIcon(
    this,
    *(UnityEngine_Vector3_o *)&x,
    static_fields->NEW_W_DEFAULT,
    static_fields->NEW_H_DEFAULT,
    v49);
  if ( quest_info_k__BackingField->fields.pickupPriority >= 1 )
    QuestBoardListViewItemDraw__SetStatusActive(this, 4, 1, v56);
  QuestBoardListViewItemDraw__SetPickupIcon(this, v55);
  if ( dispType == 2 )
  {
    QuestBoardListViewItemDraw__SetAdvanceNoticeText(this, quest_info_k__BackingField, v28, v31, v58);
    p_mTitleNameLb = &this->fields.mTitleNameLb;
  }
  else
  {
    if ( quest_info_k__BackingField->fields.isNew && quest_info_k__BackingField->fields.pickupPriority >= 1 )
      QuestBoardListViewItemDraw__SetStatusToggle(this, v57);
    Instance = (int64_t)QuestEntity__getQuestName(v28, 0LL);
    if ( !Instance )
      goto LABEL_159;
    v60 = (System_String_o *)Instance;
    if ( System_String__Contains((System_String_o *)Instance, (System_String_o *)StringLiteral_23617/*"{0}"*/, 0LL) )
    {
      v61 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             v26,
                                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
      Instance = QuestEntity__getServantId(v28, 0LL);
      if ( !v61 )
        goto LABEL_159;
      Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            v61,
                            Instance,
                            (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_159;
      BattleName = (Il2CppObject *)ServantEntity__getBattleName((ServantEntity_o *)Instance, 0, -1, 0LL);
      v60 = System_String__Format(v60, BattleName, 0LL);
    }
    p_mTitleNameLb = &this->fields.mTitleNameLb;
    Instance = (int64_t)this->fields.mTitleNameLb;
    if ( !Instance )
      goto LABEL_159;
    UILabel__set_text((UILabel_o *)Instance, v60, 0LL);
    Instance = (int64_t)this->fields.mAdvanceNoticeLb;
    if ( !Instance )
      goto LABEL_159;
    UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
  v63 = *p_mTitleNameLb;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  }
  if ( !v63 )
    goto LABEL_159;
  UILabel__SetCondensedScale(v63, QuestBoardListViewItemDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH, 0LL);
  Instance = (int64_t)*p_mTitleNameLb;
  if ( !*p_mTitleNameLb )
    goto LABEL_159;
  v109.fields.r = v37;
  v109.fields.g = v38;
  v109.fields.b = v39;
  v109.fields.a = v40;
  UIWidget__set_color((UIWidget_o *)Instance, v109, 0LL);
  ServantId = QuestEntity__getServantId(v28, 0LL);
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        v26,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_159;
  Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        ServantId,
                        (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  mTitleShortcutLb = this->fields.mTitleShortcutLb;
  if ( Instance )
  {
    Instance = (int64_t)ServantEntity__getName((ServantEntity_o *)Instance, -1, -1, 0LL);
    if ( !mTitleShortcutLb )
      goto LABEL_159;
    UILabel__set_text(mTitleShortcutLb, (System_String_o *)Instance, 0LL);
    Instance = (int64_t)this->fields.mTitleShortcutLb;
    if ( !Instance )
      goto LABEL_159;
    v110.fields.r = v37;
    v110.fields.g = v38;
    v110.fields.b = v39;
    v110.fields.a = v40;
    UIWidget__set_color((UIWidget_o *)Instance, v110, 0LL);
  }
  else
  {
    if ( !mTitleShortcutLb )
      goto LABEL_159;
    UILabel__set_text(this->fields.mTitleShortcutLb, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  v67 = QuestBoardListViewItemDraw_TypeInfo;
  mLabelFaceMaskShortcutSp = this->fields.mLabelFaceMaskShortcutSp;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v67 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v111.fields.r = v37;
  v111.fields.g = v38;
  v111.fields.b = v39;
  v111.fields.a = v40;
  QuestBoardListViewItemDraw__SetFaceImage(
    this,
    v28,
    mLabelFaceMaskShortcutSp,
    v67->static_fields->SHORTCUT_FACE_MASK_SP_W,
    v67->static_fields->SHORTCUT_FACE_MASK_SPNAME,
    v111,
    v66);
  v112.fields.r = v37;
  v112.fields.g = v38;
  v112.fields.b = v39;
  v112.fields.a = v40;
  QuestBoardListViewItemDraw__SetupRewardIconDisp(this, v28, dispType == 2, v112, v69);
  questId = quest_info_k__BackingField->fields.questId;
  afterClear = v28->fields.afterClear;
  IsRepeatReward = QuestEntity__IsRepeatReward(v28, 0LL);
  v113.fields.r = v37;
  v113.fields.g = v38;
  v113.fields.b = v39;
  v113.fields.a = v40;
  QuestBoardListViewItemDraw__SetupFirstRewardDisp(this, questId, afterClear, v113, IsRepeatReward, v73);
  v114.fields.r = v37;
  v114.fields.g = v38;
  v114.fields.b = v39;
  v114.fields.a = v40;
  QuestBoardListViewItemDraw__SetupRewardGotAndNotGiveDisp(this, quest_info_k__BackingField, entity, v114, v74);
  QuestBoardListViewItemDraw__ResetInfoTextList(this, v75);
  fixedVal[0] = -1;
  fixedVal[1] = 0;
  questPhase = quest_info_k__BackingField->fields.questPhase;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0LL);
  v78 = UnityEngine_Mathf__Min_40819044(questPhase + 1, PhaseMax, 0LL);
  mInfoTextList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields.mInfoTextList;
  Instance = (int64_t)QuestBoardListViewItemDraw__GetCampaignText(
                        this,
                        quest_info_k__BackingField->fields.questId,
                        v78,
                        0,
                        &fixedVal[1],
                        fixedVal,
                        v80);
  if ( !mInfoTextList
    || (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          mInfoTextList,
          (System_Collections_Generic_IEnumerable_T__o *)Instance,
          (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__),
        (Instance = (int64_t)this->fields.mRarePrismSp) == 0)
    || (Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL)) == 0 )
  {
LABEL_159:
    sub_B0D97C(Instance);
  }
  Instance = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( (Instance & 1) != 0 )
  {
    Instance = (int64_t)entity;
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
  v82 = *p_expireAt;
  if ( *p_expireAt >= 1 )
  {
    Instance = QuestEntity__HasFlag(v28, 32LL, 0LL);
    if ( (Instance & 1) == 0 )
    {
      v83 = this->fields.mInfoTextList;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v84 = LocalizationManager__Get((System_String_o *)StringLiteral_13452/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0LL);
      v87 = (QuestBoardInformaionText_o *)sub_B0D974(QuestBoardInformaionText_TypeInfo, v85, v86);
      v115.fields.r = 0.0;
      v115.fields.g = 0.0;
      v115.fields.b = 0.0;
      v115.fields.a = 0.0;
      v107.fields.x = 0.0;
      v107.fields.y = 0.0;
      v107.fields.z = 0.0;
      v88 = (EventMissionProgressRequest_Argument_ProgressData_o *)v87;
      QuestBoardInformaionText___ctor(v87, v84, v82, 0, 0, v115, -1, 0, v107, 1, v103, 0LL, v104);
      if ( !v83 )
        goto LABEL_159;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v83,
        v88,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
    }
  }
LABEL_131:
  v89 = this->fields.mInfoTextList;
  if ( !v89 )
    goto LABEL_159;
  size = v89->fields._size;
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  if ( size >= 1 )
  {
    v92 = this->fields.mListViewObject;
    if ( !v92 )
      goto LABEL_159;
    Instance = (int64_t)v92->fields.manager;
    if ( !Instance )
      goto LABEL_159;
    v93 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) >= (unsigned int)v93
      && *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v93 - 8) == QuestBoardListViewManager_TypeInfo )
    {
      AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt((QuestBoardListViewManager_o *)Instance, size, 0LL);
      if ( v89->fields._size <= (unsigned int)AlphaAnimCnt )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      Instance = (int64_t)v89->fields._items->m_Items[AlphaAnimCnt];
      if ( !Instance )
        goto LABEL_159;
      QuestBoardInformaionText__SetTime(
        (QuestBoardInformaionText_o *)Instance,
        &this->fields.mOptionInfoLb,
        &this->fields.mOptionInfoFrameSp,
        v94);
      Instance = (int64_t)this->fields.mOptionInfoLb;
      if ( !Instance )
        goto LABEL_159;
      BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)Instance, 1.0, 0LL);
      v96 = 1;
      quest_info_k__BackingField->fields.costCalcVal = fixedVal[1];
      quest_info_k__BackingField->fields._fixedCostVal_k__BackingField = fixedVal[0];
      goto LABEL_143;
    }
LABEL_161:
    sub_B0DC70(Instance);
    QuestBoardListViewItemDraw__SetItemOfQuest(v100, v101, v102);
    return;
  }
  v96 = 0;
LABEL_143:
  Instance = (int64_t)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_159;
  Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_159;
  Instance = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_159;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v96, 0LL);
  Instance = (int64_t)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_159;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_159;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v96, 0LL);
  mEarthLine = (UnityEngine_Object_o *)this->fields.mEarthLine;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mEarthLine, 0LL, 0LL) )
  {
    Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
    v99 = this->fields.mEarthLine;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
    }
    if ( !v99 )
      goto LABEL_159;
    QuestBoardListViewEarthLine__SetupSecond(
      v99,
      *(UnityEngine_Vector3_o *)(*(_QWORD *)(Instance + 184) + 244LL),
      this->fields.mListViewObject,
      quest_info_k__BackingField->fields.warId,
      v98);
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
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct MapControl_QuestInfo_o *quest_info_k__BackingField; // x21
  DataManager_o *v37; // x23
  QuestEntity_o *PhaseDetailedEntity; // x22
  unsigned int v39; // w25
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  __int64 v41; // x9
  int32_t dispType; // w26
  int64_t v43; // x24
  bool HasFlag; // w27
  int v45; // s0
  int v46; // s1
  int v47; // s2
  int v48; // s3
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x23
  int32_t questId; // w23
  bool IsQuestClear_25410236; // w0
  int32_t v52; // w23
  int32_t PhaseMax; // w0
  UnityEngine_GameObject_o *mLabelObj; // x8
  UnityEngine_GameObject_o *mCostObj; // x25
  QuestBoardListViewItemDraw_c *v56; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v58; // x0
  UnityEngine_GameObject_o *v59; // x0
  QuestBoardListViewItemDraw_c *v60; // x0
  System_String_o *QUEST_BOARD_SPNAME_PREFIX; // x24
  System_String_o *v62; // x0
  System_String_o *v63; // x0
  UISprite_o *v64; // x25
  struct UISprite_o **p_mcBaseP; // x27
  System_String_o *v66; // x24
  UISprite_o *v67; // x24
  System_String_o *QUEST_BOARD_SHOHI_SPNAME_PREFIX; // x25
  System_String_o *v69; // x0
  System_String_o *v70; // x0
  int32_t v71; // w25
  UISprite_o *mShohiSp; // x25
  UISprite_o *mcBaseP; // x28
  __int64 v74; // x8
  System_String_o *v75; // x24
  UISprite_o *v76; // x25
  int32_t v77; // w24
  __int64 v78; // x8
  System_String_o *v79; // x0
  System_String_o *v80; // x24
  const MethodInfo *v81; // x3
  UnityEngine_GameObject_o *v82; // x0
  QuestBoardListViewItemDraw_c *v83; // x8
  UnityEngine_GameObject_o *v84; // x25
  float NEXT_POS_X_QUEST; // w8
  int32_t v86; // w1
  bool activeSelf; // w0
  const MethodInfo *v88; // x3
  QuestBoardListViewItemDraw_c *v89; // x8
  struct QuestBoardListViewItemDraw_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  const MethodInfo *v94; // x2
  UnityEngine_GameObject_o *v95; // x28
  _BOOL8 v96; // x0
  const MethodInfo *v97; // x5
  QuestBoardListViewItemDraw_c *v98; // x0
  int32_t v99; // w28
  System_String_o *RecommendLv; // x0
  const MethodInfo *v101; // x2
  const MethodInfo *v102; // x2
  QuestBoardListViewItemDraw_o *v103; // x0
  UISprite_o *mLabelFaceMaskQuestSp; // x27
  int32_t y_low; // w24
  System_String_o *FaceMaskSpriteName; // x0
  const MethodInfo *v107; // x5
  bool v108; // w0
  const MethodInfo *v109; // x3
  UILabel_o *mTitleNameLb; // x27
  const MethodInfo *v111; // x4
  QuestBoardListViewItemDraw_o *v112; // x0
  const MethodInfo *v113; // x2
  UILabel_o *mLabelSubSectionNumLb; // x25
  const MethodInfo *v115; // x2
  bool v116; // w8
  QuestBoardListViewItemDraw_o *p_chapterSubId; // x0
  UISprite_o *mLabelNameSp; // x27
  QuestBoardListViewItemDraw_o *v119; // x0
  const MethodInfo *v120; // x3
  System_String_o *QuestIconName; // x24
  __int64 v122; // x1
  __int64 v123; // x2
  System_Action_o *v124; // x24
  const MethodInfo *v125; // x3
  UISprite_o *v126; // x28
  __int64 v127; // x8
  UISprite_o *mLabelChapterSp; // x25
  QuestBoardListViewItemDraw_o *v129; // x0
  const MethodInfo *v130; // x2
  System_String_o *QuestIconNameForMainType; // x24
  UILabel_o *v132; // x25
  const MethodInfo *v133; // x3
  int32_t v134; // w24
  int32_t afterClear; // w25
  float v136; // s8
  float v137; // s9
  float v138; // s10
  float v139; // s11
  bool IsRepeatReward; // w0
  const MethodInfo *v141; // x4
  const MethodInfo *v142; // x3
  const MethodInfo *v143; // x1
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *mInfoTextList; // x25
  const MethodInfo *v145; // x6
  int64_t *p_expireAt; // x8
  int64_t v147; // x24
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v148; // x25
  System_String_o *v149; // x27
  __int64 v150; // x1
  __int64 v151; // x2
  QuestBoardInformaionText_o *v152; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v153; // x26
  struct System_Collections_Generic_List_QuestBoardInformaionText__o *v154; // x26
  int32_t size; // w1
  struct BoardOptionTextWithIconComponent_o **p_mOptionInfoLb; // x24
  struct QuestBoardListViewObject_o *v157; // x8
  __int64 v158; // x10
  const MethodInfo *v159; // x3
  int32_t AlphaAnimCnt; // w25
  bool v161; // w25
  WarBoardQuestEntity_o *v162; // x0
  WarBoardQuestEntity_o *v163; // x21
  UILabel_o *mBoardMessage; // x21
  __int64 v165; // x0
  EventCampaignEntity_o *v166; // [xsp+0h] [xbp-C0h]
  const MethodInfo *v167; // [xsp+10h] [xbp-B0h]
  int64_t checkTime; // [xsp+18h] [xbp-A8h]
  bool v169; // [xsp+24h] [xbp-9Ch]
  bool v170; // [xsp+28h] [xbp-98h]
  unsigned int v171; // [xsp+2Ch] [xbp-94h]
  int32_t questPhase; // [xsp+30h] [xbp-90h]
  int32_t fixedVal; // [xsp+34h] [xbp-8Ch] BYREF
  int32_t costCalcVal; // [xsp+38h] [xbp-88h] BYREF
  bool isTripleItemConsume; // [xsp+3Ch] [xbp-84h] BYREF
  bool isDoubleItemConsumeQp; // [xsp+40h] [xbp-80h] BYREF
  bool isDoubleItemConsume; // [xsp+44h] [xbp-7Ch] BYREF
  UserQuestEntity_o *entity; // [xsp+48h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v179; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v180; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v181; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4216CDC & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, questBoardItem);
    sub_B0D8A4(&AtlasManager_TypeInfo, v5);
    sub_B0D8A4(&CondType_TypeInfo, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserQuestMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_WarBoardQuestMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_WarBoardStageMaster___, v10);
    sub_B0D8A4(&Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__, v11);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v12);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Count__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__, v17);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v18);
    sub_B0D8A4(&NetworkManager_TypeInfo, v19);
    sub_B0D8A4(&QuestBoardInformaionText_TypeInfo, v20);
    sub_B0D8A4(&QuestBoardListViewItemDraw_TypeInfo, v21);
    sub_B0D8A4(&QuestBoardListViewManager_TypeInfo, v22);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_B0D8A4(&Method_QuestBoardListViewItemDraw___c__DisplayClass306_0__SetItemOfWarBoard_b__0__, v24);
    sub_B0D8A4(&QuestBoardListViewItemDraw___c__DisplayClass306_0_TypeInfo, v25);
    sub_B0D8A4(&StringLiteral_13452/*"TIME_REST_QUEST_BOARD_QUEST"*/, v26);
    sub_B0D8A4(&StringLiteral_1/*""*/, v27);
    byte_4216CDC = 1;
  }
  entity = 0LL;
  isDoubleItemConsume = 0;
  isDoubleItemConsumeQp = 0;
  isTripleItemConsume = 0;
  fixedVal = 0;
  costCalcVal = 0;
  v28 = sub_B0D974(QuestBoardListViewItemDraw___c__DisplayClass306_0_TypeInfo, questBoardItem, method);
  QuestBoardListViewItemDraw___c__DisplayClass306_0___ctor(
    (QuestBoardListViewItemDraw___c__DisplayClass306_0_o *)v28,
    0LL);
  if ( !v28 )
    goto LABEL_244;
  *(_QWORD *)(v28 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v28 + 16), (System_Int32_array **)this, v30, v31, v32, v33, v34, v35);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !questBoardItem )
    goto LABEL_244;
  quest_info_k__BackingField = questBoardItem->fields._quest_info_k__BackingField;
  if ( !quest_info_k__BackingField )
    goto LABEL_244;
  v37 = (DataManager_o *)Instance;
  Instance = (int64_t)MapControl_QuestInfo__GetMine(quest_info_k__BackingField, 0LL);
  if ( !Instance )
    goto LABEL_244;
  PhaseDetailedEntity = QuestEntity__GetPhaseDetailedEntity((QuestEntity_o *)Instance, 0LL);
  Instance = MapControl_QuestInfo__GetQuestType(quest_info_k__BackingField, 0LL);
  if ( !v37 )
    goto LABEL_244;
  v39 = Instance;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        v37,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !PhaseDetailedEntity )
    goto LABEL_244;
  if ( !Instance )
    goto LABEL_244;
  Instance = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Instance, PhaseDetailedEntity->fields.id, 0LL);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_244;
  Instance = (int64_t)mListViewObject->fields.manager;
  if ( !Instance )
    goto LABEL_244;
  v41 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v41
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v41 - 8) != QuestBoardListViewManager_TypeInfo )
  {
    sub_B0DC70(Instance);
LABEL_246:
    sub_B0DC70(Instance);
    goto LABEL_247;
  }
  dispType = quest_info_k__BackingField->fields.dispType;
  v43 = *(_QWORD *)(Instance + 568);
  HasFlag = QuestEntity__HasFlag(PhaseDetailedEntity, 2LL, 0LL);
  if ( dispType == 2 )
    *(UnityEngine_Color_o *)&v45 = UnityEngine_Color__get_gray(0LL);
  else
    *(UnityEngine_Color_o *)&v45 = UnityEngine_Color__get_white(0LL);
  *(_DWORD *)(v28 + 24) = v45;
  *(_DWORD *)(v28 + 28) = v46;
  *(_DWORD *)(v28 + 32) = v47;
  *(_DWORD *)(v28 + 36) = v48;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              v37,
                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_244;
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
  IsQuestClear_25410236 = CondType__IsQuestClear_25410236(questId, -1, 0, 0LL);
  v52 = quest_info_k__BackingField->fields.questPhase;
  v170 = IsQuestClear_25410236;
  PhaseMax = MapControl_QuestInfo__GetPhaseMax(quest_info_k__BackingField, 0LL);
  Instance = UnityEngine_Mathf__Min_40819044(v52 + 1, PhaseMax, 0LL);
  mLabelObj = this->fields.mLabelObj;
  questPhase = Instance;
  if ( !mLabelObj )
    goto LABEL_244;
  UnityEngine_GameObject__SetActive(mLabelObj, 1, 0LL);
  Instance = (int64_t)this->fields.mLabelNameSp;
  if ( !Instance )
    goto LABEL_244;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_244;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mLabelChapterSp;
  if ( !Instance )
    goto LABEL_244;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_244;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mLabelFaceMaskShortcutSp;
  if ( !Instance )
    goto LABEL_244;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_244;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mLabelFaceMaskQuestSp;
  if ( !Instance )
    goto LABEL_244;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_244;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mTitleObj;
  if ( !Instance )
    goto LABEL_244;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mTitleShortcutLb;
  if ( !Instance )
    goto LABEL_244;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_244;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mAdvanceNoticeObj;
  if ( !Instance )
    goto LABEL_244;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mOverwriteAdvanceNoticeObj;
  if ( !Instance )
    goto LABEL_244;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mOptionObj;
  if ( !Instance )
    goto LABEL_244;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mRewardObj;
  if ( !Instance )
    goto LABEL_244;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_244;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_244;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mPhaseObj;
  if ( !Instance )
    goto LABEL_244;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mChallengeObj;
  if ( !Instance )
    goto LABEL_244;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mOptionRestrinctionLb;
  if ( !Instance )
    goto LABEL_244;
  Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_244;
  Instance = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_244;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_244;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (int64_t)this->fields.mBoardMessage;
  if ( !Instance )
    goto LABEL_244;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_244;
  v171 = v39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.mCondObject;
  if ( !Instance )
    goto LABEL_244;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  mCostObj = this->fields.mCostObj;
  v56 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v56 = QuestBoardListViewItemDraw_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition(mCostObj, v56->static_fields->COST_OBJ_POS_WAR_BOARD, 0LL);
  Instance = (int64_t)this->fields.mCostApSp;
  if ( !Instance )
    goto LABEL_244;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPosition(
    gameObject,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_1_ICON_AP_POS_WAR_BOARD,
    0LL);
  Instance = (int64_t)this->fields.mCostLb1;
  if ( !Instance )
    goto LABEL_244;
  v169 = HasFlag;
  checkTime = v43;
  v58 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPosition(
    v58,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->COST_1_LABEL_AP_POS_WAR_BOARD,
    0LL);
  Instance = (int64_t)this->fields.mShohiSp;
  if ( !Instance )
    goto LABEL_244;
  v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPosition(
    v59,
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
      goto LABEL_244;
    UISprite__set_spriteName(mShohiSp, QuestBoardListViewItemDraw_TypeInfo->static_fields->SHOHI_SP_NAME_WAR_BOARD, 0LL);
    v71 = v171;
    if ( v171 <= 7 && ((1 << v171) & 0xA6) != 0 )
    {
      p_mcBaseP = &this->fields.mcBaseP;
      mcBaseP = this->fields.mcBaseP;
      Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
      if ( v171 == 7 )
      {
        if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
          Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
        }
        v74 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 1032LL);
        if ( !v74 )
          goto LABEL_244;
        if ( *(_DWORD *)(v74 + 24) > 1u )
        {
          v75 = *(System_String_o **)(v74 + 40);
          goto LABEL_91;
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
        v78 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 1032LL);
        if ( !v78 )
          goto LABEL_244;
        if ( v171 < *(_DWORD *)(v78 + 24) )
        {
          v75 = *(System_String_o **)(v78 + 8LL * (int)v171 + 32);
LABEL_91:
          v79 = System_Int32__ToString((int)PhaseDetailedEntity + 60, 0LL);
          v80 = System_String__Concat_43849904(v75, v79, 0LL);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__SetBanner(mcBaseP, v80, 0LL);
          goto LABEL_95;
        }
      }
    }
    else
    {
      p_mcBaseP = &this->fields.mcBaseP;
      Instance = (int64_t)this->fields.mcBaseP;
      if ( !Instance )
        goto LABEL_244;
      UISprite__set_atlas((UISprite_o *)Instance, this->fields.mTerminalAtlas, 0LL);
      Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
      v126 = this->fields.mcBaseP;
      if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
        Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
      }
      v127 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 1032LL);
      if ( !v127 )
        goto LABEL_244;
      if ( v171 < *(_DWORD *)(v127 + 24) )
      {
        if ( !v126 )
          goto LABEL_244;
        UISprite__set_spriteName(v126, *(System_String_o **)(v127 + 8LL * (int)v171 + 32), 0LL);
        goto LABEL_95;
      }
    }
LABEL_247:
    v165 = sub_B0D9A8(Instance);
    sub_B0D948(v165, 0LL);
  }
  v60 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v60 = QuestBoardListViewItemDraw_TypeInfo;
  }
  QUEST_BOARD_SPNAME_PREFIX = v60->static_fields->QUEST_BOARD_SPNAME_PREFIX;
  v62 = System_Int32__ToString((int)PhaseDetailedEntity + 64, 0LL);
  v63 = System_String__Concat_43849904(QUEST_BOARD_SPNAME_PREFIX, v62, 0LL);
  p_mcBaseP = &this->fields.mcBaseP;
  v64 = this->fields.mcBaseP;
  v66 = v63;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = AtlasManager__SetEventUI(v64, v66, 0LL);
  if ( !v64 )
    goto LABEL_244;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v64, Instance & 1, 0LL);
  v67 = this->fields.mShohiSp;
  QUEST_BOARD_SHOHI_SPNAME_PREFIX = QuestBoardListViewItemDraw_TypeInfo->static_fields->QUEST_BOARD_SHOHI_SPNAME_PREFIX;
  v69 = System_Int32__ToString((int)PhaseDetailedEntity + 64, 0LL);
  v70 = System_String__Concat_43849904(QUEST_BOARD_SHOHI_SPNAME_PREFIX, v69, 0LL);
  if ( AtlasManager__SetEventUI(v67, v70, 0LL) )
  {
    v71 = v171;
LABEL_95:
    v77 = dispType;
    goto LABEL_96;
  }
  Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
  v76 = this->fields.mShohiSp;
  v77 = dispType;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  }
  if ( !v76 )
    goto LABEL_244;
  UISprite__set_spriteName(v76, QuestBoardListViewItemDraw_TypeInfo->static_fields->SHOHI_SP_NAME_WAR_BOARD, 0LL);
  v71 = v171;
LABEL_96:
  Instance = (int64_t)*p_mcBaseP;
  if ( !*p_mcBaseP )
    goto LABEL_244;
  (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 840LL))(
    Instance,
    *(_QWORD *)(*(_QWORD *)Instance + 848LL));
  Instance = (int64_t)*p_mcBaseP;
  if ( !*p_mcBaseP )
    goto LABEL_244;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_244;
  Instance = (int64_t)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                        (UnityEngine_GameObject_o *)Instance,
                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Instance )
    goto LABEL_244;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v28 + 24), 0LL);
  if ( MapControl_QuestInfo__IsDisplayQuestNextIcon(quest_info_k__BackingField, 0LL) )
  {
    Instance = (int64_t)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_244;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_244;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    Instance = (int64_t)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_244;
    v82 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    v83 = QuestBoardListViewItemDraw_TypeInfo;
    v84 = v82;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v83 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionX(v84, v83->static_fields->NEXT_POS_X_QUEST, 0LL);
    Instance = (int64_t)this->fields.mNextSp;
    if ( !Instance )
      goto LABEL_244;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    v71 = v171;
    if ( !Instance )
      goto LABEL_244;
    Instance = (int64_t)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          (UnityEngine_GameObject_o *)Instance,
                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    if ( !Instance )
      goto LABEL_244;
    NEXT_POS_X_QUEST = QuestBoardListViewItemDraw_TypeInfo->static_fields->NEXT_POS_X_QUEST;
    *(float *)(Instance + 120) = NEXT_POS_X_QUEST;
    *(float *)(Instance + 132) = NEXT_POS_X_QUEST;
  }
  if ( v77 != 2 )
  {
    if ( quest_info_k__BackingField->fields.isNew )
    {
      v86 = 1;
    }
    else
    {
      if ( !v170 )
        goto LABEL_117;
      v86 = 2;
    }
    QuestBoardListViewItemDraw__SetStatusActive(this, v86, 1, v81);
  }
LABEL_117:
  Instance = (int64_t)this->fields.mNextSp;
  if ( !Instance )
    goto LABEL_244;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_244;
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  v89 = QuestBoardListViewItemDraw_TypeInfo;
  if ( activeSelf )
  {
    if ( (WORD1(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v89 = QuestBoardListViewItemDraw_TypeInfo;
    }
    static_fields = v89->static_fields;
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
      v89 = QuestBoardListViewItemDraw_TypeInfo;
    }
    static_fields = v89->static_fields;
    x = static_fields->NEW_POS_QUEST.fields.x;
    y = static_fields->NEW_POS_QUEST.fields.y;
    z = static_fields->NEW_POS_QUEST.fields.z;
  }
  QuestBoardListViewItemDraw__SetNewIcon(
    this,
    *(UnityEngine_Vector3_o *)&x,
    static_fields->NEW_W_DEFAULT,
    static_fields->NEW_H_DEFAULT,
    v88);
  Instance = (int64_t)QuestBoardListViewItemDraw__GetStatusSp(this, 2, v94);
  if ( !Instance )
    goto LABEL_244;
  v95 = (UnityEngine_GameObject_o *)Instance;
  v96 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( v96 )
  {
    v98 = QuestBoardListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
      v98 = QuestBoardListViewItemDraw_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v95, v98->static_fields->CLEAR_POS_QUEST, 0LL);
  }
  v99 = dispType;
  RecommendLv = QuestBoardListViewItemDraw__GetRecommendLv(
                  (QuestBoardListViewItemDraw_o *)v96,
                  PhaseDetailedEntity,
                  questPhase,
                  !v169,
                  dispType == 2,
                  v97);
  QuestBoardListViewItemDraw__SetRecommendLv(this, RecommendLv, *(UnityEngine_Color_o *)(v28 + 24), v101);
  v103 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  mLabelFaceMaskQuestSp = this->fields.mLabelFaceMaskQuestSp;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v103 = (QuestBoardListViewItemDraw_o *)QuestBoardListViewItemDraw_TypeInfo;
  }
  y_low = LODWORD(v103->fields.mTitleLevelSp[1].fields.mOldV0.fields.y);
  FaceMaskSpriteName = QuestBoardListViewItemDraw__GetFaceMaskSpriteName(v103, v71, v102);
  v108 = QuestBoardListViewItemDraw__SetFaceImage(
           this,
           PhaseDetailedEntity,
           mLabelFaceMaskQuestSp,
           y_low,
           FaceMaskSpriteName,
           *(UnityEngine_Color_o *)(v28 + 24),
           v107);
  mTitleNameLb = this->fields.mTitleNameLb;
  if ( v108 )
  {
    Instance = (int64_t)QuestBoardListViewItemDraw__GetDispQuestName(this, PhaseDetailedEntity, v71, v109);
    if ( !mTitleNameLb )
      goto LABEL_244;
    UILabel__set_text(mTitleNameLb, (System_String_o *)Instance, 0LL);
    goto LABEL_164;
  }
  Instance = (int64_t)QuestEntity__getQuestName(PhaseDetailedEntity, 0LL);
  if ( !mTitleNameLb )
    goto LABEL_244;
  UILabel__set_text(mTitleNameLb, (System_String_o *)Instance, 0LL);
  if ( v71 != 1 || !QuestBoardListViewItemDraw__IsMainWar(v112, quest_info_k__BackingField->fields.warId, v113) )
  {
    Instance = (int64_t)this->fields.boardIconTexture;
    if ( !Instance )
      goto LABEL_244;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0LL);
    Instance = (int64_t)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_244;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_244;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    mLabelNameSp = this->fields.mLabelNameSp;
    QuestIconName = QuestBoardListViewItemDraw__GetQuestIconName(v119, PhaseDetailedEntity, v71, v120);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    Instance = AtlasManager__SetEventUI(mLabelNameSp, QuestIconName, 0LL);
    if ( !mLabelNameSp )
      goto LABEL_244;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLabelNameSp, Instance & 1, 0LL);
    Instance = (int64_t)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_244;
    (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 840LL))(
      Instance,
      *(_QWORD *)(*(_QWORD *)Instance + 848LL));
    Instance = (int64_t)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_244;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_244;
    Instance = (int64_t)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          (UnityEngine_GameObject_o *)Instance,
                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !Instance )
      goto LABEL_244;
    UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v28 + 24), 0LL);
    Instance = (int64_t)this->fields.mLabelNameSp;
    if ( !Instance )
      goto LABEL_244;
    if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Instance, 0LL) )
    {
      *(_DWORD *)(v28 + 40) = PhaseDetailedEntity->fields.id;
      v124 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v122, v123);
      System_Action___ctor(
        v124,
        (Il2CppObject *)v28,
        Method_QuestBoardListViewItemDraw___c__DisplayClass306_0__SetItemOfWarBoard_b__0__,
        0LL);
      QuestBoardListViewItemDraw__LoadBoardIconTexture(this, PhaseDetailedEntity, v124, v125);
    }
LABEL_164:
    if ( dispType == 2 )
      goto LABEL_165;
    goto LABEL_187;
  }
  if ( dispType == 2 )
  {
LABEL_165:
    QuestBoardListViewItemDraw__SetAdvanceNoticeText(
      this,
      quest_info_k__BackingField,
      PhaseDetailedEntity,
      checkTime,
      v111);
    goto LABEL_189;
  }
  Instance = (int64_t)this->fields.mLabelSubSectionNumLb;
  if ( !Instance )
    goto LABEL_244;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_244;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  if ( PhaseDetailedEntity->fields.iconId <= 0
    && System_String__IsNullOrEmpty(PhaseDetailedEntity->fields.chapterSubStr, 0LL) )
  {
    mLabelSubSectionNumLb = this->fields.mLabelSubSectionNumLb;
    v116 = QuestEntity__HasFlag(PhaseDetailedEntity, 0x40000LL, 0LL);
    p_chapterSubId = (QuestBoardListViewItemDraw_o *)&PhaseDetailedEntity->fields.chapterSubId;
    if ( v116 )
      Instance = (int64_t)QuestBoardListViewItemDraw__ConvertToChineseAscii(
                            p_chapterSubId,
                            (int32_t)p_chapterSubId->klass,
                            v115);
    else
      Instance = (int64_t)System_Int32__ToString((int32_t)p_chapterSubId, 0LL);
    if ( !mLabelSubSectionNumLb )
      goto LABEL_244;
    UILabel__set_text(mLabelSubSectionNumLb, (System_String_o *)Instance, 0LL);
    Instance = (int64_t)this->fields.mLabelSubSectionNumLb;
    if ( !Instance )
      goto LABEL_244;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_244;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  }
  Instance = (int64_t)this->fields.mLabelChapterSp;
  if ( !Instance )
    goto LABEL_244;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_244;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  mLabelChapterSp = this->fields.mLabelChapterSp;
  QuestIconNameForMainType = QuestBoardListViewItemDraw__GetQuestIconNameForMainType(v129, PhaseDetailedEntity, v130);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = AtlasManager__SetEventUI(mLabelChapterSp, QuestIconNameForMainType, 0LL);
  if ( !mLabelChapterSp
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)mLabelChapterSp, Instance & 1, 0LL),
        (Instance = (int64_t)this->fields.mLabelChapterSp) == 0) )
  {
LABEL_244:
    sub_B0D97C(Instance);
  }
  (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 840LL))(
    Instance,
    *(_QWORD *)(*(_QWORD *)Instance + 848LL));
LABEL_187:
  Instance = (int64_t)this->fields.mAdvanceNoticeLb;
  if ( !Instance )
    goto LABEL_244;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
LABEL_189:
  Instance = (int64_t)QuestBoardListViewItemDraw_TypeInfo;
  v132 = this->fields.mTitleNameLb;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
  }
  if ( !v132 )
    goto LABEL_244;
  UILabel__SetCondensedScale(v132, QuestBoardListViewItemDraw_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH, 0LL);
  Instance = (int64_t)this->fields.mTitleNameLb;
  if ( !Instance )
    goto LABEL_244;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)(v28 + 24), 0LL);
  QuestBoardListViewItemDraw__SetupRewardIconDisp(
    this,
    PhaseDetailedEntity,
    dispType == 2,
    *(UnityEngine_Color_o *)(v28 + 24),
    v133);
  v134 = quest_info_k__BackingField->fields.questId;
  afterClear = PhaseDetailedEntity->fields.afterClear;
  v136 = *(float *)(v28 + 24);
  v137 = *(float *)(v28 + 28);
  v138 = *(float *)(v28 + 32);
  v139 = *(float *)(v28 + 36);
  IsRepeatReward = QuestEntity__IsRepeatReward(PhaseDetailedEntity, 0LL);
  v180.fields.r = v136;
  v180.fields.g = v137;
  v180.fields.b = v138;
  v180.fields.a = v139;
  QuestBoardListViewItemDraw__SetupFirstRewardDisp(this, v134, afterClear, v180, IsRepeatReward, v141);
  QuestBoardListViewItemDraw__SetupRewardGotAndNotGiveDisp(
    this,
    quest_info_k__BackingField,
    entity,
    *(UnityEngine_Color_o *)(v28 + 24),
    v142);
  QuestBoardListViewItemDraw__ResetInfoTextList(this, v143);
  fixedVal = -1;
  costCalcVal = 0;
  mInfoTextList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields.mInfoTextList;
  Instance = (int64_t)QuestBoardListViewItemDraw__GetCampaignText(
                        this,
                        PhaseDetailedEntity->fields.id,
                        questPhase,
                        !v170,
                        &costCalcVal,
                        &fixedVal,
                        v145);
  if ( !mInfoTextList )
    goto LABEL_244;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    mInfoTextList,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__AddRange__);
  Instance = (int64_t)this->fields.mRarePrismSp;
  if ( !Instance )
    goto LABEL_244;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_244;
  Instance = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( (Instance & 1) != 0 )
  {
    Instance = (int64_t)entity;
    if ( !entity )
      goto LABEL_244;
    Instance = UserQuestEntity__IsExpireNoLimit(entity, 0LL);
    if ( (Instance & 1) != 0 )
      goto LABEL_210;
    if ( !entity )
      goto LABEL_244;
    p_expireAt = &entity->fields.expireAt;
  }
  else
  {
    p_expireAt = &quest_info_k__BackingField->fields.endTime;
  }
  v147 = *p_expireAt;
  if ( *p_expireAt >= 1 )
  {
    Instance = QuestEntity__HasFlag(PhaseDetailedEntity, 32LL, 0LL);
    if ( (Instance & 1) == 0 )
    {
      v148 = this->fields.mInfoTextList;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v149 = LocalizationManager__Get((System_String_o *)StringLiteral_13452/*"TIME_REST_QUEST_BOARD_QUEST"*/, 0LL);
      v152 = (QuestBoardInformaionText_o *)sub_B0D974(QuestBoardInformaionText_TypeInfo, v150, v151);
      v181.fields.r = 0.0;
      v181.fields.g = 0.0;
      v181.fields.b = 0.0;
      v181.fields.a = 0.0;
      v179.fields.x = 0.0;
      v179.fields.y = 0.0;
      v179.fields.z = 0.0;
      v153 = (EventMissionProgressRequest_Argument_ProgressData_o *)v152;
      QuestBoardInformaionText___ctor(v152, v149, v147, 0, 0, v181, -1, 0, v179, 1, v166, 0LL, v167);
      if ( !v148 )
        goto LABEL_244;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v148,
        v153,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_QuestBoardInformaionText__Add__);
    }
  }
LABEL_210:
  v154 = this->fields.mInfoTextList;
  if ( !v154 )
    goto LABEL_244;
  size = v154->fields._size;
  p_mOptionInfoLb = &this->fields.mOptionInfoLb;
  if ( size < 1 )
  {
    v161 = 0;
    goto LABEL_222;
  }
  v157 = this->fields.mListViewObject;
  if ( !v157 )
    goto LABEL_244;
  Instance = (int64_t)v157->fields.manager;
  if ( !Instance )
    goto LABEL_244;
  v158 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v158
    || *(QuestBoardListViewManager_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v158 - 8) != QuestBoardListViewManager_TypeInfo )
  {
    goto LABEL_246;
  }
  AlphaAnimCnt = QuestBoardListViewManager__GetAlphaAnimCnt((QuestBoardListViewManager_o *)Instance, size, 0LL);
  if ( v154->fields._size <= (unsigned int)AlphaAnimCnt )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  Instance = (int64_t)v154->fields._items->m_Items[AlphaAnimCnt];
  if ( !Instance )
    goto LABEL_244;
  QuestBoardInformaionText__SetTime(
    (QuestBoardInformaionText_o *)Instance,
    &this->fields.mOptionInfoLb,
    &this->fields.mOptionInfoFrameSp,
    v159);
  Instance = (int64_t)this->fields.mOptionInfoLb;
  if ( !Instance )
    goto LABEL_244;
  BoardOptionTextWithIconComponent__set_Alpha((BoardOptionTextWithIconComponent_o *)Instance, 1.0, 0LL);
  v161 = 1;
  quest_info_k__BackingField->fields.costCalcVal = costCalcVal;
  quest_info_k__BackingField->fields._fixedCostVal_k__BackingField = fixedVal;
LABEL_222:
  Instance = (int64_t)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_244;
  Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_244;
  Instance = (int64_t)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_244;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_244;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v161, 0LL);
  Instance = (int64_t)*p_mOptionInfoLb;
  if ( !*p_mOptionInfoLb )
    goto LABEL_244;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_244;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v161, 0LL);
  QuestBoardListViewItemDraw__SetCostDisp(
    this,
    PhaseDetailedEntity,
    v99 == 2,
    costCalcVal,
    fixedVal,
    *(UnityEngine_Color_o *)(v28 + 24),
    &isDoubleItemConsume,
    &isDoubleItemConsumeQp,
    &isTripleItemConsume,
    (const MethodInfo *)v166);
  Instance = (int64_t)this->fields.mBoardMessage;
  if ( !Instance )
    goto LABEL_244;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_244;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_WarBoardQuestMaster___);
  if ( !Instance )
    goto LABEL_244;
  v162 = WarBoardQuestMaster__GetEntity(
           (WarBoardQuestMaster_o *)Instance,
           quest_info_k__BackingField->fields.questId,
           questPhase,
           0LL);
  if ( !v162 )
    return;
  v163 = v162;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_244;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_WarBoardStageMaster___);
  if ( !Instance )
    goto LABEL_244;
  Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        v163->fields.stageId,
                        (const MethodInfo_2669BD4 *)Method_DataMasterBase_WarBoardStageMaster__WarBoardStageEntity__int__GetEntity__);
  if ( Instance )
  {
    if ( !this->fields.mBoardMessage )
      goto LABEL_244;
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
    goto LABEL_244;
  UILabel__SetCondensedScale(
    mBoardMessage,
    QuestBoardListViewItemDraw_TypeInfo->static_fields->BOARD_MESSAGE_MAX_WITDH,
    0LL);
  Instance = (int64_t)this->fields.mBoardMessage;
  if ( !Instance )
    goto LABEL_244;
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
  sub_B0D840(
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
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *v15; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x19
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4216CEB & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___, *(_QWORD *)&w);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    byte_4216CEB = 1;
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
    v17.fields.x = x;
    v17.fields.y = y;
    v17.fields.z = z;
    GameObjectExtensions__SetLocalPosition(gameObject, v17, 0LL);
    StatusSp = (UnityEngine_GameObject_o *)this->fields.mNewIcon;
    if ( !StatusSp )
      goto LABEL_21;
    StatusSp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)StatusSp, 0LL);
    if ( !StatusSp )
      goto LABEL_21;
    StatusSp = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             StatusSp,
                                             (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !StatusSp )
      goto LABEL_21;
    v15 = (UIWidget_o *)StatusSp;
    UIWidget__set_width((UIWidget_o *)StatusSp, w, 0LL);
    UIWidget__set_height(v15, h, 0LL);
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
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
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
    sub_B0D97C(StatusSp);
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

  if ( (byte_4216CEE & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, info);
    sub_B0D8A4(&QuestBoardListViewItemDraw_TypeInfo, v7);
    byte_4216CEE = 1;
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
                                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
      sub_B0D97C(mNextSp);
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
  UnityEngine_Object_o *Component_srcLineSprite; // x19

  if ( (byte_4216CEC & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    byte_4216CEC = 1;
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
                                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
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
    sub_B0D97C(v6);
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
  QuestGroupMaster_o *v21; // x22
  __int64 v22; // x1
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
  if ( (byte_4216CEF & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, questEnt);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v9);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_int___, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v14);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v15);
    sub_B0D8A4(&QuestBoardListViewItemDraw_TypeInfo, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v18);
    byte_4216CEF = 1;
  }
  v19 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    questEnt,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !questEnt )
    goto LABEL_38;
  v21 = (QuestGroupMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_38;
  Instance = (DataManager_o *)QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)Instance, questEnt->fields.id, 16, 0LL);
  if ( (_DWORD)Instance )
  {
    Instance = (DataManager_o *)QuestGroupMaster__GetQuestIdListByGroupId(v21, (int32_t)Instance, 16, 0LL);
    if ( !Instance )
      goto LABEL_38;
    if ( Instance->fields.datalist )
    {
      Instance = (DataManager_o *)System_Linq_Enumerable__ToList_int_(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                                    (const MethodInfo_1B58FA0 *)Method_System_Linq_Enumerable_ToList_int___);
      v19 = (System_Collections_Generic_List_int__o *)Instance;
    }
  }
  if ( !v19 )
LABEL_38:
    sub_B0D97C(Instance);
  if ( v19->fields._size <= 0 )
    System_Collections_Generic_List_int___Add(
      v19,
      questEnt->fields.id,
      (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4211AD9 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v22);
    byte_4211AD9 = 1;
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
          (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__) )
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
  UnityEngine_Object_o *Component_WebViewObject; // x20
  UnityEngine_GameObject_o *v15; // x21
  float v16; // s0
  float v17; // s0
  float v18; // s8
  struct UILabel_o *mTitleLevelLb; // x8
  UnityEngine_Object_o *v20; // x20
  int mWidth; // s8
  float m_CachedPtr; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = baseColor.fields.a;
  b = baseColor.fields.b;
  g = baseColor.fields.g;
  r = baseColor.fields.r;
  if ( (byte_4216D10 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___, recommendLv);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_CondensedScaleSprite___, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_4216D10 = 1;
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
                                                        (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_CondensedScaleSprite___);
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
        v24.fields.r = r;
        v24.fields.g = g;
        v24.fields.b = b;
        v24.fields.a = a;
        UIWidget__set_color((UIWidget_o *)IsNullOrEmpty, v24, 0LL);
        IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.mTitleLevelSp;
        if ( IsNullOrEmpty )
        {
          v25.fields.r = r;
          v25.fields.g = g;
          v25.fields.b = b;
          v25.fields.a = a;
          UIWidget__set_color((UIWidget_o *)IsNullOrEmpty, v25, 0LL);
          IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.mTitleLevelStrSp;
          if ( IsNullOrEmpty )
          {
            v26.fields.r = r;
            v26.fields.g = g;
            v26.fields.b = b;
            v26.fields.a = a;
            UIWidget__set_color((UIWidget_o *)IsNullOrEmpty, v26, 0LL);
            IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.mTitleLevelSp;
            if ( IsNullOrEmpty )
            {
              IsNullOrEmpty = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(IsNullOrEmpty, 0LL);
              if ( this->fields.mTitleLevelStrSp )
              {
                v15 = (UnityEngine_GameObject_o *)IsNullOrEmpty;
                IsNullOrEmpty = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                             (UnityEngine_Component_o *)this->fields.mTitleLevelStrSp,
                                                             0LL);
                if ( IsNullOrEmpty )
                {
                  LODWORD(v16) = (unsigned int)UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)IsNullOrEmpty,
                                                 0LL);
                  GameObjectExtensions__SetLocalPositionX(v15, v16, 0LL);
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
                      v17 = CondensedScaleSprite__GetAfterAdjustWidth(
                              (CondensedScaleSprite_o *)Component_WebViewObject,
                              0LL);
                      IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.mTitleLevelSp;
                      if ( IsNullOrEmpty )
                      {
                        v18 = (float)(IsNullOrEmpty[6].fields.m_CachedPtr / 2) + (float)(v17 * -0.5);
LABEL_39:
                        gameObject = UnityEngine_Component__get_gameObject(IsNullOrEmpty, 0LL);
                        GameObjectExtensions__AddLocalPositionX(gameObject, v18, 0LL);
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
                                                                   (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_CondensedScaleLabel___);
                      mTitleLevelLb = this->fields.mTitleLevelLb;
                      if ( mTitleLevelLb )
                      {
                        v20 = (UnityEngine_Object_o *)IsNullOrEmpty;
                        mWidth = mTitleLevelLb->fields.mWidth;
                        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        }
                        m_CachedPtr = (float)mWidth;
                        IsNullOrEmpty = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v20, 0LL, 0LL);
                        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
                        {
                          if ( !v20 )
                            goto LABEL_40;
                          if ( m_CachedPtr > (float)v20[1].fields.m_CachedPtr )
                            m_CachedPtr = (float)v20[1].fields.m_CachedPtr;
                        }
                        IsNullOrEmpty = (UnityEngine_Component_o *)this->fields.mTitleLevelSp;
                        if ( IsNullOrEmpty )
                        {
                          v18 = m_CachedPtr * -0.5;
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
    sub_B0D97C(IsNullOrEmpty);
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

  if ( (byte_4216CDE & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestRestrictionMaster___, *(_QWORD *)&questId);
    sub_B0D8A4(&Method_DataManager_GetMaster_RestrictionBaseMaster___, v7);
    sub_B0D8A4(&DataManager_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B0D8A4(&StringLiteral_1/*""*/, v10);
    byte_4216CDE = 1;
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
  mOptionRestrinctionSp = (UnityEngine_Component_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_RestrictionBaseMaster___);
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
  mOptionRestrinctionSp = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !mOptionRestrinctionSp
    || (mOptionRestrinctionSp = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)mOptionRestrinctionSp,
                                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestRestrictionMaster___)) == 0LL
    || (mOptionRestrinctionSp = (UnityEngine_Component_o *)QuestRestrictionMaster__GetRestrictionName(
                                                             (QuestRestrictionMaster_o *)mOptionRestrinctionSp,
                                                             questId,
                                                             phase,
                                                             0LL),
        !mOptionRestrinctionLb) )
  {
LABEL_18:
    sub_B0D97C(mOptionRestrinctionSp);
  }
  UILabel__set_text(mOptionRestrinctionLb, (System_String_o *)mOptionRestrinctionSp, 0LL);
LABEL_16:
  v13 = this->fields.mOptionRestrinctionLb;
  if ( !v13 )
    goto LABEL_18;
  return !System_String__IsNullOrEmpty(v13->fields.mText, 0LL);
}


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
    sub_B0D97C(mOptionRestrinctionLb);
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
      sub_B0D97C(0LL);
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

  StatusSp = QuestBoardListViewItemDraw__GetStatusSp(this, status, (const MethodInfo *)isActive);
  if ( !StatusSp || (StatusSp = UnityEngine_GameObject__get_gameObject(StatusSp, 0LL)) == 0LL )
    sub_B0D97C(StatusSp);
  UnityEngine_GameObject__SetActive(StatusSp, isActive, 0LL);
}


void __fastcall QuestBoardListViewItemDraw__SetStatusToggle(
        QuestBoardListViewItemDraw_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  void *StatusSp; // x0
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

  if ( (byte_4216CF0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___, method);
    sub_B0D8A4(&QuestBoardListViewManager_TypeInfo, v4);
    byte_4216CF0 = 1;
  }
  StatusSp = QuestBoardListViewItemDraw__GetStatusSp(this, 4, v2);
  if ( !StatusSp )
    goto LABEL_12;
  Component_srcLineSprite = (TimeSyncAlphaSwitcher_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         (UnityEngine_GameObject_o *)StatusSp,
                                                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
  StatusSp = QuestBoardListViewItemDraw__GetStatusSp(this, 1, v7);
  if ( !StatusSp )
    goto LABEL_12;
  StatusSp = UnityEngine_GameObject__GetComponent_srcLineSprite_(
               (UnityEngine_GameObject_o *)StatusSp,
               (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_TimeSyncAlphaSwitcher___);
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_12;
  v9 = (TimeSyncAlphaSwitcher_o *)StatusSp;
  StatusSp = mListViewObject->fields.manager;
  if ( !StatusSp )
    goto LABEL_12;
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
    sub_B0D97C(StatusSp);
  }
  sub_B0DC70(StatusSp);
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
  this = (QuestBoardListViewItemDraw_o *)UnityEngine_Mathf__Min_40819044(
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
    v26 = sub_B0D9A8(this);
    sub_B0D948(v26, 0LL);
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
    sub_B0D97C(this);
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
  if ( (byte_4216D06 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, v3);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&QuestBoardListViewItemDraw_TypeInfo, v6);
    this = (QuestBoardListViewItemDraw_o *)sub_B0D8A4(&TerminalPramsManager_TypeInfo, v7);
    byte_4216D06 = 1;
  }
  mTerminalBanners = v2->fields.mTerminalBanners;
  if ( !mTerminalBanners )
    goto LABEL_43;
  if ( !mTerminalBanners->max_length )
  {
    v16 = sub_B0D9A8(this);
    sub_B0D948(v16, 0LL);
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
                                                            (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
          UnityEngine_Object__Destroy_34935276(Component_srcLineSprite, 0LL);
        }
        v12 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        v10,
                                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
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
          UnityEngine_Object__Destroy_34935276(v12, 0LL);
        }
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_4216D14 )
        {
          sub_B0D8A4(&TerminalPramsManager_TypeInfo, v13);
          byte_4216D14 = 1;
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
                                                 (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
    sub_B0D97C(this);
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
  if ( (byte_4216CE6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, *(_QWORD *)&questId);
    sub_B0D8A4(&SingletonTemplate_clsQuestCheck__TypeInfo, v14);
    byte_4216CE6 = 1;
  }
  if ( afterClearType == 3 )
  {
    if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
    }
    mRewardFirstSP = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !mRewardFirstSP )
LABEL_14:
      sub_B0D97C(mRewardFirstSP);
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
  if ( (byte_4216CE7 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_B0D8A4(&CondType_TypeInfo, questInfo);
    byte_4216CE7 = 1;
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
  this = (QuestBoardListViewItemDraw_o *)CondType__IsQuestClear_25410236(questId, -1, 0, 0LL);
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
    sub_B0D97C(this);
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
  UnityEngine_Component_o *mRewardIcon; // x0
  int giftIconId; // w1
  bool v27; // w1
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_IEnumerable_TSource__o *GiftListById; // x21
  QuestBoardListViewItemDraw___c_c *v31; // x8
  struct QuestBoardListViewItemDraw___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__316_0; // x22
  Il2CppObject *v34; // x23
  struct QuestBoardListViewItemDraw___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  UnityEngine_Component_c *klass; // x1
  struct GiftEntity_array *v50; // x21
  struct QuestBoardListViewObject_o *mListViewObject; // x8
  __int64 v52; // x10
  int32_t *v53; // x9
  int32_t v54; // w1
  int v55; // w8
  int32_t v56; // w2
  int32_t v57; // w3
  __int64 v58; // x0
  UnityEngine_Color_o v59; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v60; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_4216CE4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_GiftMaster___, questEnt);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_GiftEntity___, v16);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_GiftEntity___, v17);
    sub_B0D8A4(&Method_System_Func_GiftEntity__bool___ctor__, v18);
    sub_B0D8A4(&System_Func_GiftEntity__bool__TypeInfo, v19);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v20);
    sub_B0D8A4(&QuestBoardListViewManager_TypeInfo, v21);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B0D8A4(&Method_QuestBoardListViewItemDraw___c__SetupRewardIconDisp_b__316_0__, v23);
    sub_B0D8A4(&QuestBoardListViewItemDraw___c_TypeInfo, v24);
    byte_4216CE4 = 1;
  }
  this->fields.mRewardIconInfs = 0LL;
  sub_B0D840(
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
      mRewardIcon = (UnityEngine_Component_o *)this->fields.mRewardObj;
      if ( !mRewardIcon )
        goto LABEL_57;
      v27 = 0;
      goto LABEL_16;
    }
    mRewardIcon = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( mRewardIcon )
    {
      mRewardIcon = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)mRewardIcon,
                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GiftMaster___);
      if ( mRewardIcon )
      {
        GiftListById = (System_Collections_Generic_IEnumerable_TSource__o *)GiftMaster__GetGiftListById(
                                                                              (GiftMaster_o *)mRewardIcon,
                                                                              questEnt->fields.giftId,
                                                                              0LL);
        v31 = QuestBoardListViewItemDraw___c_TypeInfo;
        if ( (BYTE3(QuestBoardListViewItemDraw___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestBoardListViewItemDraw___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw___c_TypeInfo);
          v31 = QuestBoardListViewItemDraw___c_TypeInfo;
        }
        static_fields = v31->static_fields;
        _9__316_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__316_0;
        if ( !_9__316_0 )
        {
          if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v31);
            static_fields = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
          }
          v34 = (Il2CppObject *)static_fields->__9;
          _9__316_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                           System_Func_GiftEntity__bool__TypeInfo,
                                                                                           v28,
                                                                                           v29);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            _9__316_0,
            v34,
            Method_QuestBoardListViewItemDraw___c__SetupRewardIconDisp_b__316_0__,
            (const MethodInfo_26189B8 *)Method_System_Func_GiftEntity__bool___ctor__);
          v35 = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
          v35->__9__316_0 = (struct System_Func_GiftEntity__bool__o *)_9__316_0;
          sub_B0D840(
            (BattleServantConfConponent_o *)&v35->__9__316_0,
            (System_Int32_array **)_9__316_0,
            v36,
            v37,
            v38,
            v39,
            v40,
            v41);
        }
        v42 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                GiftListById,
                (System_Func_TSource__bool__o *)_9__316_0,
                (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
        mRewardIcon = (UnityEngine_Component_o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                   v42,
                                                   (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
        if ( mRewardIcon )
        {
          klass = mRewardIcon[1].klass;
          v50 = (struct GiftEntity_array *)mRewardIcon;
          if ( !klass )
          {
LABEL_56:
            this->fields.mRewardIconInfs = v50;
            sub_B0D840(
              (BattleServantConfConponent_o *)&this->fields.mRewardIconInfs,
              (System_Int32_array **)v50,
              v43,
              v44,
              v45,
              v46,
              v47,
              v48);
            goto LABEL_17;
          }
          mListViewObject = this->fields.mListViewObject;
          if ( mListViewObject )
          {
            mRewardIcon = (UnityEngine_Component_o *)mListViewObject->fields.manager;
            if ( mRewardIcon )
            {
              v52 = *(&QuestBoardListViewManager_TypeInfo->_2.bitflags2 + 1);
              if ( *(&mRewardIcon->klass->_2.bitflags2 + 1) >= (unsigned int)v52
                && (QuestBoardListViewManager_c *)mRewardIcon->klass->_2.typeHierarchy[v52 - 1] == QuestBoardListViewManager_TypeInfo )
              {
                mRewardIcon = (UnityEngine_Component_o *)QuestBoardListViewManager__GetAlphaAnimCnt(
                                                           (QuestBoardListViewManager_o *)mRewardIcon,
                                                           (int32_t)klass,
                                                           0LL);
                if ( (unsigned int)mRewardIcon < v50->max_length )
                {
                  v53 = (int32_t *)v50->m_Items[(int)mRewardIcon];
                  if ( !v53 )
                    goto LABEL_57;
                  v54 = v53[11];
                  mRewardIcon = (UnityEngine_Component_o *)this->fields.mRewardIcon;
                  v55 = v53[7];
                  if ( v54 < 1 )
                  {
                    if ( !mRewardIcon )
                      goto LABEL_57;
                    if ( v55 <= 1 )
                      v57 = -1;
                    else
                      v57 = v53[7];
                    ItemIconComponent__SetGift((ItemIconComponent_o *)mRewardIcon, v53[5], v53[6], v57, 1, 0LL);
                  }
                  else
                  {
                    if ( !mRewardIcon )
                      goto LABEL_57;
                    if ( v55 <= 1 )
                      v56 = -1;
                    else
                      v56 = v53[7];
                    ItemIconComponent__SetItemImage_26857580((ItemIconComponent_o *)mRewardIcon, v54, v56, 0LL);
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
                sub_B0DC70(mRewardIcon);
              }
              v58 = sub_B0D9A8(mRewardIcon);
              sub_B0D948(v58, 0LL);
            }
          }
        }
      }
    }
LABEL_57:
    sub_B0D97C(mRewardIcon);
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
                                             (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !mRewardIcon )
    goto LABEL_57;
  v59.fields.r = r;
  v59.fields.g = g;
  v59.fields.b = b;
  v59.fields.a = a;
  UIWidget__set_color((UIWidget_o *)mRewardIcon, v59, 0LL);
  mRewardIcon = (UnityEngine_Component_o *)this->fields.mRewardIcon;
  if ( !mRewardIcon )
    goto LABEL_57;
  v60.fields.b = b;
  v60.fields.a = a;
  v60.fields.r = r;
  v60.fields.g = g;
  ItemIconComponent__SetColor((ItemIconComponent_o *)mRewardIcon, v60, 0LL);
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x1
  struct TerminalBannerComponent_array *mTerminalBanners; // x8
  UnityEngine_Object_o *v28; // x20
  UnityEngine_GameObject_o *v29; // x20
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v30; // x21
  int v31; // s0
  int v32; // s1
  int v33; // s2
  __int64 v34; // x1
  __int64 v35; // x2
  QuestBoardListViewItemDraw_c *v36; // x0
  float BANNER_ENTORY_EFFECT_DURATION; // w8
  EventDelegate_Callback_o *v38; // x22
  float v39; // w8
  __int64 v40; // x0

  if ( (byte_4216D07 & 1) == 0 )
  {
    sub_B0D8A4(&EventDelegate_Callback_TypeInfo, endCallback);
    sub_B0D8A4(&Method_UnityEngine_GameObject_AddComponent_TweenAlpha___, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_AddComponent_TweenPosition___, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&QuestBoardListViewItemDraw_TypeInfo, v8);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v9);
    sub_B0D8A4(&Method_QuestBoardListViewItemDraw___c__DisplayClass366_0__StartEntryBanner_b__0__, v10);
    sub_B0D8A4(&QuestBoardListViewItemDraw___c__DisplayClass366_0_TypeInfo, v11);
    byte_4216D07 = 1;
  }
  v12 = sub_B0D974(QuestBoardListViewItemDraw___c__DisplayClass366_0_TypeInfo, endCallback, method);
  QuestBoardListViewItemDraw___c__DisplayClass366_0___ctor(
    (QuestBoardListViewItemDraw___c__DisplayClass366_0_o *)v12,
    0LL);
  if ( !v12 )
    goto LABEL_28;
  *(_QWORD *)(v12 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v12 + 24) = endCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v12 + 24),
    (System_Int32_array **)endCallback,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4216D14 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v26);
    byte_4216D14 = 1;
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
    v40 = sub_B0D9A8(gameObject);
    sub_B0D948(v40, 0LL);
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
          (const MethodInfo_1B62AAC *)Method_UnityEngine_GameObject_AddComponent_TweenPosition___);
  *(UnityEngine_Vector3_o *)&v31 = GameObjectExtensions__GetLocalPosition(v29, 0LL);
  if ( !v30 )
    goto LABEL_28;
  LODWORD(v30[3].fields.callbackQueue) = v31;
  HIDWORD(v30[3].fields.callbackQueue) = v32;
  LODWORD(v30[4].klass) = v33;
  *(UnityEngine_Vector3_o *)((char *)&v30[4].klass + 4) = UnityEngine_Vector3__get_zero(0LL);
  v36 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v36 = QuestBoardListViewItemDraw_TypeInfo;
  }
  BANNER_ENTORY_EFFECT_DURATION = v36->static_fields->BANNER_ENTORY_EFFECT_DURATION;
  LODWORD(v30->fields.callbackQueue) = 2;
  *(float *)&v30[1].fields.m_CachedPtr = BANNER_ENTORY_EFFECT_DURATION;
  v38 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v34, v35);
  EventDelegate_Callback___ctor(
    v38,
    (Il2CppObject *)v12,
    Method_QuestBoardListViewItemDraw___c__DisplayClass366_0__StartEntryBanner_b__0__,
    0LL);
  UITweener__SetOnFinished((UITweener_o *)v30, v38, 0LL);
  UITweener__PlayForward((UITweener_o *)v30, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                             v29,
                                             (const MethodInfo_1B62AAC *)Method_UnityEngine_GameObject_AddComponent_TweenAlpha___);
  if ( !gameObject )
LABEL_28:
    sub_B0D97C(gameObject);
  gameObject[5].klass = (UnityEngine_GameObject_c *)0x3F80000000000000LL;
  v39 = QuestBoardListViewItemDraw_TypeInfo->static_fields->BANNER_ENTORY_EFFECT_DURATION;
  LODWORD(gameObject[1].klass) = 3;
  *(float *)&gameObject[2].klass = v39;
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
  if ( (byte_4216D09 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_B0D8A4(&QuestBoardListViewItemDraw_TypeInfo, *(_QWORD *)&index);
    byte_4216D09 = 1;
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
        v10 = sub_B0D9A8(this);
        sub_B0D948(v10, 0LL);
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
    sub_B0D97C(this);
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
  if ( (byte_4216CD5 & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_B0D8A4(
                                             &Method_System_Collections_Generic_List_QuestBoardInformaionText__get_Item__,
                                             questBoardItem);
    byte_4216CD5 = 1;
  }
  mInfoTextList = v7->fields.mInfoTextList;
  if ( !mInfoTextList )
    goto LABEL_8;
  if ( mInfoTextList->fields._size <= (unsigned int)strIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  this = (QuestBoardListViewItemDraw_o *)mInfoTextList->fields._items->m_Items[strIndex];
  if ( !this )
LABEL_8:
    sub_B0D97C(this);
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
      sub_B0D97C(this);
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
  UnityEngine_Vector2_o ScreenPosition_27684436; // kr00_8
  _BOOL4 mIsEnableDragX; // w8

  v4 = this;
  if ( (byte_4216D0C & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw_o *)sub_B0D8A4(&CTouch_TypeInfo, questBoardManager);
    byte_4216D0C = 1;
  }
  if ( v4->fields.mIsPressedForDragX )
  {
    v4->fields.mTouchPosOld = v4->fields.mTouchPosNow;
    if ( !questBoardManager )
      sub_B0D97C(this);
    mUICamera = questBoardManager->fields.mUICamera;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    ScreenPosition_27684436 = CTouch__getScreenPosition_27684436(mUICamera, 0LL);
    mIsEnableDragX = v4->fields.mIsEnableDragX;
    v4->fields.mTouchPosNow = ScreenPosition_27684436;
    if ( mIsEnableDragX )
      v4->fields.mTouchPosDif = ScreenPosition_27684436.fields.x - v4->fields.mTouchPosOld.fields.x;
  }
}


void __fastcall QuestBoardListViewItemDraw___SetAdvanceNoticeText_g__CalculateLabel_317_0(
        UILabel_o *label,
        System_String_o *message,
        int32_t baseHeight,
        const MethodInfo *method)
{
  UILabel_o *v6; // x19
  int mHeight; // w21
  QuestBoardListViewItemDraw_c *v8; // x0
  float v9; // s8
  UnityEngine_Transform_o *transform; // x20
  float v11; // s0
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  v6 = label;
  if ( (byte_4216D13 & 1) == 0 )
  {
    label = (UILabel_o *)sub_B0D8A4(&QuestBoardListViewItemDraw_TypeInfo, message);
    byte_4216D13 = 1;
  }
  if ( !v6 )
    goto LABEL_10;
  UILabel__set_text(v6, message, 0LL);
  UILabel__AssumeNaturalSize(v6, 0LL);
  mHeight = v6->fields.mHeight;
  UIWidget__set_height((UIWidget_o *)v6, baseHeight, 0LL);
  v8 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v8 = QuestBoardListViewItemDraw_TypeInfo;
  }
  UILabel__SetCondensedScale(v6, v8->static_fields->ADVANCE_NOTICE_BASE_WIDTH, 0LL);
  v9 = UnityEngine_Mathf__Clamp(1.0 - (float)((float)baseHeight / (float)mHeight), 0.0, 1.0, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v6, 0LL);
  label = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v6, 0LL);
  if ( !label
    || (LODWORD(v11) = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)label, 0LL),
        !transform) )
  {
LABEL_10:
    sub_B0D97C(label);
  }
  v12.fields.y = 1.0;
  v12.fields.x = v9 + v11;
  v12.fields.z = 1.0;
  UnityEngine_Transform__set_localScale(transform, v12, 0LL);
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
    sub_B0D97C(0LL);
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
  Il2CppObject *v3; // x19
  struct QuestBoardListViewItemDraw___c_StaticFields *static_fields; // x0

  if ( (byte_42121D9 & 1) == 0 )
  {
    sub_B0D8A4(&QuestBoardListViewItemDraw___c_TypeInfo, v1);
    byte_42121D9 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(QuestBoardListViewItemDraw___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = QuestBoardListViewItemDraw___c_TypeInfo->static_fields;
  static_fields->__9 = (struct QuestBoardListViewItemDraw___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall QuestBoardListViewItemDraw___c___ctor(QuestBoardListViewItemDraw___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw___c___IsValidSupportSelection_b__344_0(
        QuestBoardListViewItemDraw___c_o *this,
        RestrictionEntity_o *rest,
        const MethodInfo *method)
{
  if ( !rest )
    sub_B0D97C(this);
  return rest->fields.type == 9;
}


int32_t __fastcall QuestBoardListViewItemDraw___c___SetItemOfQuest_b__305_1(
        QuestBoardListViewItemDraw___c_o *this,
        ViewEnemyEntity_o *value,
        const MethodInfo *method)
{
  if ( !value )
    sub_B0D97C(this);
  return value->fields.enemyId;
}


bool __fastcall QuestBoardListViewItemDraw___c___SetupRewardIconDisp_b__316_0(
        QuestBoardListViewItemDraw___c_o *this,
        GiftEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_B0D97C(this);
  return ent->fields.type != 15;
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass303_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass303_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw___c__DisplayClass303_0___IsPurchasedByRarePrism_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass303_0_o *this,
        MapControl_QuestInfo_o *quest,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw___c__DisplayClass303_0_o *v4; // x20
  struct MapControl_WarInfo_o *WarInfo_k__BackingField; // x8
  struct WarEntity_o *warEnt; // x9
  UserQuestMaster_o *userQuestMst; // x20
  UserQuestEntity_o *EntityFromId; // x0

  v4 = this;
  if ( (byte_42121DA & 1) == 0 )
  {
    this = (QuestBoardListViewItemDraw___c__DisplayClass303_0_o *)sub_B0D8A4(&NetworkManager_TypeInfo, quest);
    byte_42121DA = 1;
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
  this = (QuestBoardListViewItemDraw___c__DisplayClass303_0_o *)NetworkManager__get_UserId(0LL);
  if ( !userQuestMst )
LABEL_14:
    sub_B0D97C(this);
  EntityFromId = UserQuestMaster__getEntityFromId(userQuestMst, (int64_t)this, quest->fields.questId, 0LL);
  if ( EntityFromId )
    return UserQuestEntity__HasStatus(EntityFromId, 8, 0LL);
  return 0;
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass304_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass304_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw___c__DisplayClass304_0___HasNewQuestInWar_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass304_0_o *this,
        MapControl_QuestInfo_o *quest,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw___c__DisplayClass304_0_o *v3; // x20
  struct MapControl_WarInfo_o *WarInfo_k__BackingField; // x8

  v3 = this;
  if ( this->fields.isMainInterlude )
  {
    if ( !quest
      || (this = (QuestBoardListViewItemDraw___c__DisplayClass304_0_o *)MapControl_QuestInfo__GetMine(quest, 0LL)) == 0LL )
    {
LABEL_11:
      sub_B0D97C(this);
    }
    this = (QuestBoardListViewItemDraw___c__DisplayClass304_0_o *)QuestEntity__HasFlag((QuestEntity_o *)this, 4LL, 0LL);
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


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass305_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass305_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass305_0___SetItemOfQuest_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass305_0_o *this,
        const MethodInfo *method)
{
  struct QuestBoardListViewItemDraw_o *_4__this; // x8
  QuestBoardListViewItemDraw___c__DisplayClass305_0_o *v3; // x19
  struct QuestBoardListViewItemDraw_o *v4; // x8
  struct QuestBoardListViewItemDraw_o *v5; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  v3 = this;
  this = (QuestBoardListViewItemDraw___c__DisplayClass305_0_o *)_4__this->fields.mLabelNameSp;
  if ( !this )
    goto LABEL_11;
  this = (QuestBoardListViewItemDraw___c__DisplayClass305_0_o *)UnityEngine_Behaviour__get_enabled(
                                                                  (UnityEngine_Behaviour_o *)this,
                                                                  0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v4 = v3->fields.__4__this;
    if ( !v4 )
      goto LABEL_11;
    if ( v4->fields.boardIconQuestId == v3->fields.boardIconQuestIdOld )
    {
      this = (QuestBoardListViewItemDraw___c__DisplayClass305_0_o *)v4->fields.boardIconTexture;
      if ( this )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
        v5 = v3->fields.__4__this;
        if ( v5 )
        {
          this = (QuestBoardListViewItemDraw___c__DisplayClass305_0_o *)v5->fields.boardIconTexture;
          if ( this )
          {
            UIWidget__set_color((UIWidget_o *)this, v3->fields.baseColor, 0LL);
            return;
          }
        }
      }
LABEL_11:
      sub_B0D97C(this);
    }
  }
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass306_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass306_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass306_0___SetItemOfWarBoard_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass306_0_o *this,
        const MethodInfo *method)
{
  struct QuestBoardListViewItemDraw_o *_4__this; // x8
  QuestBoardListViewItemDraw___c__DisplayClass306_0_o *v3; // x19
  struct QuestBoardListViewItemDraw_o *v4; // x8
  struct QuestBoardListViewItemDraw_o *v5; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  v3 = this;
  this = (QuestBoardListViewItemDraw___c__DisplayClass306_0_o *)_4__this->fields.mLabelNameSp;
  if ( !this )
    goto LABEL_11;
  this = (QuestBoardListViewItemDraw___c__DisplayClass306_0_o *)UnityEngine_Behaviour__get_enabled(
                                                                  (UnityEngine_Behaviour_o *)this,
                                                                  0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v4 = v3->fields.__4__this;
    if ( !v4 )
      goto LABEL_11;
    if ( v4->fields.boardIconQuestId == v3->fields.boardIconQuestIdOld )
    {
      this = (QuestBoardListViewItemDraw___c__DisplayClass306_0_o *)v4->fields.boardIconTexture;
      if ( this )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
        v5 = v3->fields.__4__this;
        if ( v5 )
        {
          this = (QuestBoardListViewItemDraw___c__DisplayClass306_0_o *)v5->fields.boardIconTexture;
          if ( this )
          {
            UIWidget__set_color((UIWidget_o *)this, v3->fields.baseColor, 0LL);
            return;
          }
        }
      }
LABEL_11:
      sub_B0D97C(this);
    }
  }
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass340_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass340_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw___c__DisplayClass340_0___GetCampaignTextListByEventQuestMaster_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass340_0_o *this,
        EventEntity_o *entity,
        const MethodInfo *method)
{
  struct EventCampaignEntity_o *eventCampaignEnt; // x8

  if ( !entity || (eventCampaignEnt = this->fields.eventCampaignEnt) == 0LL )
    sub_B0D97C(this);
  return entity->fields.id == eventCampaignEnt->fields.eventId;
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass340_1___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass340_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw___c__DisplayClass340_1___GetCampaignTextListByEventQuestMaster_b__1(
        QuestBoardListViewItemDraw___c__DisplayClass340_1_o *this,
        EventEntity_o *entity,
        const MethodInfo *method)
{
  struct EventCampaignEntity_o *eventCampaignEnt; // x8

  if ( !entity || (eventCampaignEnt = this->fields.eventCampaignEnt) == 0LL )
    sub_B0D97C(this);
  return entity->fields.id == eventCampaignEnt->fields.eventId;
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass342_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass342_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestBoardListViewItemDraw___c__DisplayClass342_0___CreateQuestBoardInformationText_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass342_0_o *this,
        UserOwnItemInfo_o *x,
        const MethodInfo *method)
{
  const MethodInfo_2980204 *v3; // x3
  __int64 v6; // x0
  System_Nullable_long__o v8; // [xsp+0h] [xbp-30h] BYREF
  System_Nullable_long__o v9; // 0:x0.16

  if ( (byte_42121DB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Nullable_long___ctor__, x);
    byte_42121DB = 1;
  }
  *(_QWORD *)&v9.fields.has_value = this->fields.checkTime;
  v9.fields.value = (int64_t)&v8;
  v8.fields.value = 0LL;
  *(_QWORD *)&v8.fields.has_value = 0LL;
  System_Nullable_long____ctor(v9, Method_System_Nullable_long___ctor__, v3);
  if ( !x )
    sub_B0D97C(v6);
  return !UserOwnItemInfo__IsExpired(x, v8, 0LL);
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass366_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass366_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass366_0___StartEntryBanner_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass366_0_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct QuestBoardListViewItemDraw_o *_4__this; // x8

  if ( (byte_42121DC & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42121DC = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4211AC6 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211AC6 = 1;
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
    sub_B0D97C(v3);
  _4__this->fields._bannerState_k__BackingField = 2;
  ActionExtensions__Call(this->fields.endCallback, 0LL);
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass377_0___ctor(
        QuestBoardListViewItemDraw___c__DisplayClass377_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestBoardListViewItemDraw___c__DisplayClass377_0___LoadBoardIconTexture_b__0(
        QuestBoardListViewItemDraw___c__DisplayClass377_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  QuestBoardListViewItemDraw___c__DisplayClass377_0_o *v4; // x19
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
  __int64 v17; // x1
  __int64 v18; // x2
  UnityEngine_Material_o *v19; // x20
  struct QuestBoardListViewItemDraw_o *v20; // x8
  struct QuestBoardListViewItemDraw_o *v21; // x8
  struct QuestBoardListViewItemDraw_o *v22; // x8
  AssetData_o *boardIconAssetData; // x21
  UnityEngine_Texture_o *Object_WarBoardWaitTimeSetting; // x0

  v4 = this;
  if ( (byte_42121DD & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_Texture2D____67951464, assetData);
    sub_B0D8A4(&AssetManager_TypeInfo, v5);
    sub_B0D8A4(&UnityEngine_Material_TypeInfo, v6);
    sub_B0D8A4(&QuestBoardListViewItemDraw_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B0D8A4(&StringLiteral_16181/*"_alpha"*/, v9);
    sub_B0D8A4(&StringLiteral_4552/*"Custom/SpriteWithMask"*/, v10);
    this = (QuestBoardListViewItemDraw___c__DisplayClass377_0_o *)sub_B0D8A4(&StringLiteral_16063/*"_MaskTex"*/, v11);
    byte_42121DD = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_22;
  this = (QuestBoardListViewItemDraw___c__DisplayClass377_0_o *)System_String__op_Inequality(
                                                                  v4->fields.loadBoardIconName,
                                                                  _4__this->fields.boardIconName,
                                                                  0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v15 = v4->fields.__4__this;
    if ( v15 )
    {
      v15->fields.boardIconAssetData = assetData;
      sub_B0D840(&v15->fields.boardIconAssetData, assetData);
      v16 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4552/*"Custom/SpriteWithMask"*/, 0LL);
      v19 = (UnityEngine_Material_o *)sub_B0D974(UnityEngine_Material_TypeInfo, v17, v18);
      UnityEngine_Material___ctor(v19, v16, 0LL);
      v20 = v4->fields.__4__this;
      if ( v20 )
      {
        this = (QuestBoardListViewItemDraw___c__DisplayClass377_0_o *)v20->fields.boardIconTexture;
        if ( this )
        {
          this = (QuestBoardListViewItemDraw___c__DisplayClass377_0_o *)((__int64 (__fastcall *)(QuestBoardListViewItemDraw___c__DisplayClass377_0_o *, UnityEngine_Material_o *, Il2CppMethodPointer))this->klass[1].vtable._2_GetHashCode.method)(
                                                                          this,
                                                                          v19,
                                                                          this->klass[1].vtable._3_ToString.methodPtr);
          v21 = v4->fields.__4__this;
          if ( v21 )
          {
            this = (QuestBoardListViewItemDraw___c__DisplayClass377_0_o *)v21->fields.boardIconAssetData;
            if ( this )
            {
              this = (QuestBoardListViewItemDraw___c__DisplayClass377_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                              (AssetData_o *)this,
                                                                              v21->fields.boardIconName,
                                                                              (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_Texture2D____67951464);
              if ( v19 )
              {
                UnityEngine_Material__set_mainTexture(v19, (UnityEngine_Texture_o *)this, 0LL);
                v22 = v4->fields.__4__this;
                if ( v22 )
                {
                  boardIconAssetData = v22->fields.boardIconAssetData;
                  this = (QuestBoardListViewItemDraw___c__DisplayClass377_0_o *)System_String__Concat_43849904(
                                                                                  v22->fields.boardIconName,
                                                                                  (System_String_o *)StringLiteral_16181/*"_alpha"*/,
                                                                                  0LL);
                  if ( boardIconAssetData )
                  {
                    Object_WarBoardWaitTimeSetting = (UnityEngine_Texture_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                boardIconAssetData,
                                                                                (System_String_o *)this,
                                                                                (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_Texture2D____67951464);
                    UnityEngine_Material__SetTexture(
                      v19,
                      (System_String_o *)StringLiteral_16063/*"_MaskTex"*/,
                      Object_WarBoardWaitTimeSetting,
                      0LL);
                    this = (QuestBoardListViewItemDraw___c__DisplayClass377_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_B0D97C(this);
  }
  v13 = QuestBoardListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestBoardListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardListViewItemDraw_TypeInfo);
    v13 = QuestBoardListViewItemDraw_TypeInfo;
  }
  v14 = System_String__Concat_43849904(
          v13->static_fields->QUEST_BOARD_ICON_TEXTURE_PATH,
          v4->fields.loadBoardIconName,
          0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(v14, 0LL);
}