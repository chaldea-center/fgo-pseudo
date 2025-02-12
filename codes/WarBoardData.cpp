void __fastcall WarBoardData___cctor(const MethodInfo *method)
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
  int64_t v10; // x1
  struct WarBoardData_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BB22FC & 1) == 0 )
  {
    sub_1C13D24(&WarBoardData_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_2059/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/, v8);
    sub_1C13D24(&StringLiteral_15626/*"VmallocChunk"*/, v9);
    byte_4BB22FC = 1;
  }
  WarBoardData_TypeInfo->static_fields->WARBOARDDATA_SAVEDATA_KEY = (struct System_String_o *)StringLiteral_15626/*"VmallocChunk"*/;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)WarBoardData_TypeInfo->static_fields,
    StringLiteral_15626/*"VmallocChunk"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = StringLiteral_2059/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/;
  static_fields = WarBoardData_TypeInfo->static_fields;
  static_fields->AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY = (struct System_String_o *)StringLiteral_2059/*"AFTER_CHANGE_SKILL_SUB_TITLE"*/;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&static_fields->AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY,
    v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


void __fastcall WarBoardData___ctor(
        WarBoardData_o *this,
        WarBoardStageEntity_o *stage,
        WarBoardStageLayoutEntity_array *layoutEntities,
        WarBoardRoadEntity_array *roadEntities,
        WarBoardDataEntity_o *serverData,
        const MethodInfo *method)
{
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
  __int64 v74; // x1
  __int64 v75; // x1
  __int64 v76; // x1
  __int64 v77; // x1
  __int64 v78; // x1
  __int64 v79; // x1
  __int64 v80; // x1
  __int64 v81; // x1
  __int64 v82; // x1
  __int64 v83; // x1
  __int64 v84; // x1
  __int64 v85; // x1
  __int64 v86; // x1
  __int64 v87; // x1
  __int64 v88; // x1
  __int64 v89; // x1
  __int64 v90; // x1
  __int64 v91; // x1
  __int64 v92; // x1
  __int64 v93; // x1
  __int64 v94; // x1
  __int64 v95; // x1
  __int64 v96; // x1
  __int64 v97; // x1
  __int64 v98; // x1
  __int64 v99; // x1
  __int64 v100; // x1
  __int64 v101; // x1
  __int64 v102; // x1
  __int64 v103; // x1
  __int64 v104; // x1
  __int64 v105; // x1
  __int64 v106; // x1
  __int64 v107; // x1
  __int64 v108; // x1
  __int64 v109; // x1
  __int64 v110; // x1
  __int64 v111; // x1
  __int64 v112; // x1
  __int64 v113; // x1
  __int64 v114; // x1
  __int64 v115; // x1
  __int64 v116; // x1
  __int64 v117; // x1
  __int64 v118; // x1
  __int64 v119; // x1
  __int64 v120; // x1
  __int64 v121; // x1
  __int64 v122; // x1
  __int64 v123; // x1
  __int64 v124; // x1
  __int64 v125; // x1
  __int64 v126; // x1
  __int64 v127; // x1
  __int64 v128; // x1
  __int64 v129; // x1
  __int64 v130; // x1
  __int64 v131; // x1
  __int64 v132; // x1
  __int64 v133; // x1
  __int64 v134; // x1
  __int64 v135; // x1
  __int64 v136; // x1
  System_Collections_Generic_Dictionary_object__object__o *v137; // x19
  int64_t v138; // x2
  int32_t v139; // w3
  System_String_o *v140; // x4
  BattleSetupInfo_o *v141; // x5
  FollowerInfo_o *v142; // x6
  PartyListViewItem_o *v143; // x7
  System_Collections_Generic_List_object__o *v144; // x19
  int64_t v145; // x2
  int32_t v146; // w3
  System_String_o *v147; // x4
  BattleSetupInfo_o *v148; // x5
  FollowerInfo_o *v149; // x6
  PartyListViewItem_o *v150; // x7
  struct System_Int32_array *v151; // x0
  int64_t v152; // x2
  int32_t v153; // w3
  System_String_o *v154; // x4
  BattleSetupInfo_o *v155; // x5
  FollowerInfo_o *v156; // x6
  PartyListViewItem_o *v157; // x7
  struct System_UInt32_array *v158; // x0
  int64_t v159; // x2
  int32_t v160; // w3
  System_String_o *v161; // x4
  BattleSetupInfo_o *v162; // x5
  FollowerInfo_o *v163; // x6
  PartyListViewItem_o *v164; // x7
  System_Collections_Generic_List_object__o *v165; // x19
  int64_t v166; // x2
  int32_t v167; // w3
  System_String_o *v168; // x4
  BattleSetupInfo_o *v169; // x5
  FollowerInfo_o *v170; // x6
  PartyListViewItem_o *v171; // x7
  System_Collections_Generic_List_object__o *v172; // x19
  int64_t v173; // x2
  int32_t v174; // w3
  System_String_o *v175; // x4
  BattleSetupInfo_o *v176; // x5
  FollowerInfo_o *v177; // x6
  PartyListViewItem_o *v178; // x7
  System_Collections_Generic_List_int__o *v179; // x19
  int64_t v180; // x2
  int32_t v181; // w3
  System_String_o *v182; // x4
  BattleSetupInfo_o *v183; // x5
  FollowerInfo_o *v184; // x6
  PartyListViewItem_o *v185; // x7
  System_Collections_Generic_List_object__o *v186; // x19
  int64_t v187; // x2
  int32_t v188; // w3
  System_String_o *v189; // x4
  BattleSetupInfo_o *v190; // x5
  FollowerInfo_o *v191; // x6
  PartyListViewItem_o *v192; // x7
  System_Collections_Generic_List_int__o *v193; // x19
  int64_t v194; // x2
  int32_t v195; // w3
  System_String_o *v196; // x4
  BattleSetupInfo_o *v197; // x5
  FollowerInfo_o *v198; // x6
  PartyListViewItem_o *v199; // x7
  System_Collections_Generic_List_int__o *v200; // x19
  int64_t v201; // x2
  int32_t v202; // w3
  System_String_o *v203; // x4
  BattleSetupInfo_o *v204; // x5
  FollowerInfo_o *v205; // x6
  PartyListViewItem_o *v206; // x7
  WarBoardData___c_c *v207; // x0
  System_Comparison_T__o *_9__77_0; // x19
  Il2CppObject *v209; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int64_t v211; // x2
  int32_t v212; // w3
  System_String_o *v213; // x4
  BattleSetupInfo_o *v214; // x5
  FollowerInfo_o *v215; // x6
  PartyListViewItem_o *v216; // x7
  int64_t v217; // x2
  int32_t v218; // w3
  System_String_o *v219; // x4
  BattleSetupInfo_o *v220; // x5
  FollowerInfo_o *v221; // x6
  PartyListViewItem_o *v222; // x7
  __int64 Instance; // x0
  unsigned __int64 throughCondId; // x1
  Il2CppObject *MasterData_object; // x0
  struct WarBoardStageNpcMaster_o **p_stageNpcMaster; // x19
  int64_t v227; // x2
  int32_t v228; // w3
  System_String_o *v229; // x4
  BattleSetupInfo_o *v230; // x5
  FollowerInfo_o *v231; // x6
  PartyListViewItem_o *v232; // x7
  System_Collections_Generic_IEnumerable_WarBoardStageNpcEntity__o *WarBoardStageEntities; // x0
  WarBoardData___c_c *v234; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v235; // x21
  System_Func_T__TResult__o *_9__77_1; // x19
  Il2CppObject *v237; // x22
  struct WarBoardData___c_StaticFields *v238; // x0
  int64_t v239; // x2
  int32_t v240; // w3
  System_String_o *v241; // x4
  BattleSetupInfo_o *v242; // x5
  FollowerInfo_o *v243; // x6
  PartyListViewItem_o *v244; // x7
  struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *v245; // x0
  int64_t v246; // x2
  int32_t v247; // w3
  System_String_o *v248; // x4
  BattleSetupInfo_o *v249; // x5
  FollowerInfo_o *v250; // x6
  PartyListViewItem_o *v251; // x7
  System_Collections_Generic_IEnumerable_WarBoardActionPointEntity__o *WarBoardActionPointEntities; // x0
  WarBoardData___c_c *v253; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v254; // x20
  System_Func_T__TResult__o *_9__77_2; // x19
  Il2CppObject *v256; // x21
  struct WarBoardData___c_StaticFields *v257; // x0
  int64_t v258; // x2
  int32_t v259; // w3
  System_String_o *v260; // x4
  BattleSetupInfo_o *v261; // x5
  FollowerInfo_o *v262; // x6
  PartyListViewItem_o *v263; // x7
  struct System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__o *v264; // x0
  int64_t v265; // x2
  int32_t v266; // w3
  System_String_o *v267; // x4
  BattleSetupInfo_o *v268; // x5
  FollowerInfo_o *v269; // x6
  PartyListViewItem_o *v270; // x7
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  WarBoardData___c_c *v272; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v273; // x20
  System_Func_object__int__o *_9__77_3; // x19
  Il2CppObject *v275; // x21
  struct WarBoardData___c_StaticFields *v276; // x0
  int64_t v277; // x2
  int32_t v278; // w3
  System_String_o *v279; // x4
  BattleSetupInfo_o *v280; // x5
  FollowerInfo_o *v281; // x6
  PartyListViewItem_o *v282; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *npcEntityDict; // x8
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *v284; // x0
  WarBoardData___c_c *v285; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v286; // x20
  System_Func_object__int__o *_9__77_4; // x19
  Il2CppObject *v288; // x21
  struct WarBoardData___c_StaticFields *v289; // x0
  int64_t v290; // x2
  int32_t v291; // w3
  System_String_o *v292; // x4
  BattleSetupInfo_o *v293; // x5
  FollowerInfo_o *v294; // x6
  PartyListViewItem_o *v295; // x7
  System_Collections_Generic_List_object__o *v296; // x27
  WarBoardData_c *v297; // x0
  WarBoardDataEntity_o *v298; // x26
  System_Collections_Generic_List_object__o *v299; // x24
  WarBoardStageLayoutEntity_array *v300; // x28
  System_String_o *WARBOARDDATA_SAVEDATA_KEY; // x19
  WarBoardData_c *v302; // x0
  int32_t progressType; // w19
  System_String_o *v304; // x19
  System_String_o *String; // x19
  System_Byte_array *v306; // x19
  MiniMessagePack_MiniMessagePacker_o *v307; // x20
  Il2CppObject *v308; // x0
  struct WarBoardData_WarBoardLocalSaveData_o **p_localSaveData; // x20
  int64_t v310; // x2
  int32_t v311; // w3
  System_String_o *v312; // x4
  BattleSetupInfo_o *v313; // x5
  FollowerInfo_o *v314; // x6
  PartyListViewItem_o *v315; // x7
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8
  struct WarBoardPieceData_SaveData_array *pieceSaves; // x24
  _QWORD *v318; // x25
  unsigned __int64 v319; // x28
  __int64 v320; // x22
  int64_t v321; // x2
  int32_t v322; // w3
  System_String_o *v323; // x4
  BattleSetupInfo_o *v324; // x5
  FollowerInfo_o *v325; // x6
  PartyListViewItem_o *v326; // x7
  int64_t v327; // x1
  WarBoardPieceData_SaveData_o **v328; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v329; // x19
  System_Func_object__bool__o *v330; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v331; // x19
  System_Func_object__bool__o *v332; // x23
  struct WarBoardItemData_SaveData_array *itemSaves; // x24
  unsigned __int64 v334; // x28
  __int64 v335; // x19
  int64_t v336; // x2
  int32_t v337; // w3
  System_String_o *v338; // x4
  BattleSetupInfo_o *v339; // x5
  FollowerInfo_o *v340; // x6
  PartyListViewItem_o *v341; // x7
  int64_t v342; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v343; // x22
  System_Func_object__bool__o *v344; // x23
  PartyOrganizationUtility_o *v345; // x25
  struct WarBoardTreasureData_SaveData_array *treasureSaves; // x28
  char v347; // w26
  unsigned __int64 v348; // x29
  __int64 v349; // x19
  int64_t v350; // x2
  int32_t v351; // w3
  System_String_o *v352; // x4
  BattleSetupInfo_o *v353; // x5
  FollowerInfo_o *v354; // x6
  PartyListViewItem_o *v355; // x7
  int64_t v356; // x1
  __int64 v357; // x21
  System_Collections_Generic_IEnumerable_TSource__o *klass; // x23
  System_Func_object__bool__o *v359; // x24
  WarBoardData___c_c *v360; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v361; // x21
  System_Func_object__bool__o *_9__77_9; // x19
  Il2CppObject *v363; // x23
  struct WarBoardData___c_StaticFields *v364; // x0
  int64_t v365; // x2
  int32_t v366; // w3
  System_String_o *v367; // x4
  BattleSetupInfo_o *v368; // x5
  FollowerInfo_o *v369; // x6
  PartyListViewItem_o *v370; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v371; // x0
  System_Object_array *v372; // x0
  int64_t v373; // x2
  int32_t v374; // w3
  System_String_o *v375; // x4
  BattleSetupInfo_o *v376; // x5
  FollowerInfo_o *v377; // x6
  PartyListViewItem_o *v378; // x7
  struct WarBoardWallData_SaveData_array *wallSaves; // x24
  unsigned __int64 v380; // x25
  __int64 v381; // x19
  int64_t v382; // x2
  int32_t v383; // w3
  System_String_o *v384; // x4
  BattleSetupInfo_o *v385; // x5
  FollowerInfo_o *v386; // x6
  PartyListViewItem_o *v387; // x7
  int64_t v388; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v389; // x22
  System_Func_object__bool__o *v390; // x23
  int v391; // w19
  unsigned __int64 v392; // x23
  __int64 v393; // x24
  __int64 v394; // x25
  struct WarBoardSquareIndexData_SaveData_array *squareIndexInfo; // x8
  unsigned int *v396; // x27
  WarBoardSquareIndexData_SaveData_o *v397; // x21
  WarBoardSquareIndexData_o *v398; // x19
  int64_t v399; // x2
  int32_t v400; // w3
  System_String_o *v401; // x4
  BattleSetupInfo_o *v402; // x5
  FollowerInfo_o *v403; // x6
  PartyListViewItem_o *v404; // x7
  int v405; // w19
  unsigned __int64 v406; // x23
  __int64 v407; // x24
  __int64 v408; // x25
  struct WarBoardBossBattleData_SaveData_array *bossBattleInfo; // x8
  unsigned int *v410; // x27
  WarBoardBossBattleData_SaveData_o *v411; // x21
  WarBoardBossBattleData_o *v412; // x19
  const MethodInfo *v413; // x2
  int64_t v414; // x2
  int32_t v415; // w3
  System_String_o *v416; // x4
  BattleSetupInfo_o *v417; // x5
  FollowerInfo_o *v418; // x6
  PartyListViewItem_o *v419; // x7
  WarBoardData_c *v420; // x0
  int64_t v421; // x2
  int32_t v422; // w3
  System_String_o *v423; // x4
  BattleSetupInfo_o *v424; // x5
  FollowerInfo_o *v425; // x6
  PartyListViewItem_o *v426; // x7
  unsigned __int64 v427; // x25
  __int64 v428; // x23
  int64_t v429; // x2
  int32_t v430; // w3
  System_String_o *v431; // x4
  BattleSetupInfo_o *v432; // x5
  FollowerInfo_o *v433; // x6
  PartyListViewItem_o *v434; // x7
  int64_t v435; // x1
  WarBoardStageLayoutEntity_o **v436; // x29
  WarBoardStageLayoutEntity_o *v437; // x19
  WarBoardSquareData_o *v438; // x22
  int64_t v439; // x2
  int32_t v440; // w3
  System_String_o *v441; // x4
  BattleSetupInfo_o *v442; // x5
  FollowerInfo_o *v443; // x6
  PartyListViewItem_o *v444; // x7
  __int64 v445; // x9
  WarBoardStageLayoutEntity_o *v446; // x8
  struct System_Object_array *items; // x8
  _QWORD *v448; // x9
  __int64 size; // x10
  Il2CppClass **v450; // x0
  WarBoardStageLayoutEntity_o *v451; // x8
  int32_t questPhase; // w22
  System_Collections_Generic_IEnumerable_TSource__o *svtInfo; // x19
  System_Func_object__bool__o *v454; // x20
  WarBoardUserServantData_o *v455; // x21
  WarBoardUserMasterData_o *v456; // x20
  struct System_Object_array *v457; // x8
  _QWORD *v458; // x9
  __int64 v459; // x10
  Il2CppClass **v460; // x0
  PartyOrganizationUtility_o *v461; // x0
  int64_t v462; // x1
  System_Collections_Generic_IEnumerable_TSource__o *masterInfo; // x19
  System_Func_object__bool__o *v464; // x20
  WarBoardStageLayoutEntity_o *v465; // x8
  WarBoardDataEntity_WarBoardDeckData_o **v466; // x9
  WarBoardDataEntity_WarBoardDeckData_o *v467; // x27
  int32_t Type; // w0
  bool IsNpc; // w0
  WarBoardStageLayoutEntity_o *v470; // x28
  int32_t v471; // w22
  bool v472; // w26
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *v473; // x19
  WarBoardPieceData_o *v474; // x0
  WarBoardPieceData_o *v475; // x24
  bool v476; // w5
  int64_t v477; // x2
  int32_t v478; // w3
  System_String_o *v479; // x4
  BattleSetupInfo_o *v480; // x5
  FollowerInfo_o *v481; // x6
  PartyListViewItem_o *v482; // x7
  __int64 v483; // x8
  _QWORD *v484; // x9
  __int64 v485; // x10
  NpcFollowerEntity_o *Entity_40593204; // x0
  NpcFollowerEntity_o *v487; // x19
  int64_t v488; // x2
  int32_t v489; // w3
  System_String_o *v490; // x4
  BattleSetupInfo_o *v491; // x5
  FollowerInfo_o *v492; // x6
  PartyListViewItem_o *v493; // x7
  struct System_Object_array *v494; // x8
  _QWORD *v495; // x9
  __int64 v496; // x10
  Il2CppClass **v497; // x0
  __int64 v498; // x8
  System_Collections_Generic_List_object__o *v499; // x0
  Il2CppObject *v500; // x1
  struct System_Object_array *v501; // x8
  _QWORD *v502; // x9
  __int64 v503; // x10
  Il2CppClass **v504; // x0
  WarBoardStageLayoutEntity_o *v505; // x21
  System_Collections_Generic_IEnumerable_TSource__o *getItemInfo; // x19
  System_Func_object__bool__o *v507; // x20
  Il2CppObject *v508; // x0
  WarBoardStageLayoutEntity_o *v509; // x19
  WarBoardUserGetItemData_o *v510; // x21
  WarBoardItemData_o *v511; // x20
  System_Collections_Generic_List_object__o *v512; // x12
  int32_t version; // w10
  struct System_Object_array *v514; // x8
  void **v515; // x9
  System_Collections_Generic_IEnumerable_TSource__o *treasureInfo; // x19
  System_Func_object__bool__o *v517; // x20
  System_Collections_Generic_IEnumerable_TSource__o *wallInfo; // x19
  System_Func_object__bool__o *v519; // x20
  Il2CppObject *v520; // x0
  WarBoardStageLayoutEntity_o *v521; // x19
  WarBoardUserWallData_o *v522; // x21
  _QWORD *v523; // x9
  __int64 v524; // x10
  Il2CppClass **v525; // x0
  System_Object_array *v526; // x0
  WarBoardData_o *v527; // x25
  int64_t v528; // x2
  int32_t v529; // w3
  System_String_o *v530; // x4
  BattleSetupInfo_o *v531; // x5
  FollowerInfo_o *v532; // x6
  PartyListViewItem_o *v533; // x7
  System_Object_array *v534; // x0
  int64_t v535; // x2
  int32_t v536; // w3
  System_String_o *v537; // x4
  BattleSetupInfo_o *v538; // x5
  FollowerInfo_o *v539; // x6
  PartyListViewItem_o *v540; // x7
  System_Object_array *v541; // x0
  System_Collections_Generic_IEnumerable_T__o **p_pieces; // x23
  int64_t v543; // x2
  int32_t v544; // w3
  System_String_o *v545; // x4
  BattleSetupInfo_o *v546; // x5
  FollowerInfo_o *v547; // x6
  PartyListViewItem_o *v548; // x7
  System_Object_array *pieces; // x19
  System_Comparison_T__o *v550; // x20
  System_Object_array *v551; // x0
  int64_t v552; // x2
  int32_t v553; // w3
  System_String_o *v554; // x4
  BattleSetupInfo_o *v555; // x5
  FollowerInfo_o *v556; // x6
  PartyListViewItem_o *v557; // x7
  System_Object_array *v558; // x0
  int64_t v559; // x2
  int32_t v560; // w3
  System_String_o *v561; // x4
  BattleSetupInfo_o *v562; // x5
  FollowerInfo_o *v563; // x6
  PartyListViewItem_o *v564; // x7
  System_Object_array *v565; // x0
  int64_t v566; // x2
  int32_t v567; // w3
  System_String_o *v568; // x4
  BattleSetupInfo_o *v569; // x5
  FollowerInfo_o *v570; // x6
  PartyListViewItem_o *v571; // x7
  System_Object_array *v572; // x0
  int64_t v573; // x2
  int32_t v574; // w3
  System_String_o *v575; // x4
  BattleSetupInfo_o *v576; // x5
  FollowerInfo_o *v577; // x6
  PartyListViewItem_o *v578; // x7
  int64_t v579; // x2
  int32_t v580; // w3
  System_String_o *v581; // x4
  BattleSetupInfo_o *v582; // x5
  FollowerInfo_o *v583; // x6
  PartyListViewItem_o *v584; // x7
  struct WarBoardData_WarBoardLocalSaveData_o *v585; // x8
  struct WarBoardPieceData_SaveData_array *v586; // x28
  unsigned __int64 v587; // x29
  __int64 v588; // x21
  int64_t v589; // x2
  int32_t v590; // w3
  System_String_o *v591; // x4
  BattleSetupInfo_o *v592; // x5
  FollowerInfo_o *v593; // x6
  PartyListViewItem_o *v594; // x7
  int64_t v595; // x1
  WarBoardPieceData_SaveData_o **v596; // x22
  System_Collections_Generic_IEnumerable_T__o *v597; // x19
  System_Func_object__bool__o *v598; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v599; // x19
  System_Func_object__bool__o *v600; // x24
  Il2CppObject *v601; // x21
  System_Collections_Generic_List_object__o *v602; // x24
  int32_t id; // w19
  WarBoardPieceData_SaveData_o *v604; // x26
  WarBoardPieceData_o *v605; // x25
  int64_t v606; // x2
  int32_t v607; // w3
  System_String_o *v608; // x4
  BattleSetupInfo_o *v609; // x5
  FollowerInfo_o *v610; // x6
  PartyListViewItem_o *v611; // x7
  struct System_Object_array *v612; // x8
  _QWORD *v613; // x9
  __int64 v614; // x10
  Il2CppClass **v615; // x0
  System_Object_array *v616; // x0
  int64_t v617; // x2
  int32_t v618; // w3
  System_String_o *v619; // x4
  BattleSetupInfo_o *v620; // x5
  FollowerInfo_o *v621; // x6
  PartyListViewItem_o *v622; // x7
  __int64 v623; // x20
  int v624; // w8
  unsigned int v625; // w21
  __int64 v626; // x8
  WarBoardItemData_SaveData_o *v627; // x19
  _DWORD *data; // x20
  int v629; // w8
  unsigned int v630; // w21
  char *v631; // x8
  WarBoardTreasureData_SaveData_o *v632; // x19
  __int64 v633; // x20
  int v634; // w8
  unsigned int v635; // w21
  __int64 v636; // x8
  WarBoardWallData_SaveData_o *v637; // x19
  Il2CppClass *element_class; // x20
  int namespaze; // w8
  unsigned int v640; // w21
  void **v641; // x8
  WarBoardSquareData_SaveData_o *v642; // x19
  System_Collections_Generic_List_object__o *v643; // x19
  int64_t v644; // x2
  int32_t v645; // w3
  System_String_o *v646; // x4
  BattleSetupInfo_o *v647; // x5
  FollowerInfo_o *v648; // x6
  PartyListViewItem_o *v649; // x7
  int64_t v650; // x2
  int32_t v651; // w3
  System_String_o *v652; // x4
  BattleSetupInfo_o *v653; // x5
  FollowerInfo_o *v654; // x6
  PartyListViewItem_o *v655; // x7
  struct WarBoardData_WarBoardLocalSaveData_o *v656; // x8
  struct WarBoardEventData_SaveData_array *eventSaves; // x20
  __int64 v658; // x8
  unsigned __int64 v659; // x23
  WarBoardEventData_SaveData_o *v660; // x19
  System_Collections_Generic_List_object__o *v661; // x21
  WarBoardEventData_o *v662; // x22
  int64_t v663; // x2
  int32_t v664; // w3
  System_String_o *v665; // x4
  BattleSetupInfo_o *v666; // x5
  FollowerInfo_o *v667; // x6
  PartyListViewItem_o *v668; // x7
  struct System_Object_array *v669; // x8
  _QWORD *v670; // x9
  __int64 v671; // x10
  Il2CppClass **v672; // x0
  Il2CppClass *v673; // x8
  int64_t typeHierarchy; // x1
  int64_t v675; // x2
  int32_t v676; // w3
  System_String_o *v677; // x4
  BattleSetupInfo_o *v678; // x5
  FollowerInfo_o *v679; // x6
  PartyListViewItem_o *v680; // x7
  struct WarBoardData_WarBoardLocalSaveData_o *v681; // x8
  int64_t latestBattlePieceUniqueIndexes; // x1
  System_Collections_Generic_List_object__o *v683; // x19
  int64_t v684; // x2
  int32_t v685; // w3
  System_String_o *v686; // x4
  BattleSetupInfo_o *v687; // x5
  FollowerInfo_o *v688; // x6
  PartyListViewItem_o *v689; // x7
  _QWORD *properties; // x20
  __int64 v691; // x8
  unsigned __int64 v692; // x23
  WarBoardPrevCondData_SaveData_o *v693; // x19
  System_Collections_Generic_List_object__o *v694; // x21
  WarBoardPrevCondData_o *v695; // x22
  int64_t v696; // x2
  int32_t v697; // w3
  System_String_o *v698; // x4
  BattleSetupInfo_o *v699; // x5
  FollowerInfo_o *v700; // x6
  PartyListViewItem_o *v701; // x7
  struct System_Object_array *v702; // x8
  _QWORD *v703; // x9
  __int64 v704; // x10
  Il2CppClass **v705; // x0
  System_Collections_Generic_List_object__o *v706; // x19
  int64_t v707; // x2
  int32_t v708; // w3
  System_String_o *v709; // x4
  BattleSetupInfo_o *v710; // x5
  FollowerInfo_o *v711; // x6
  PartyListViewItem_o *v712; // x7
  _QWORD *methods; // x20
  __int64 v714; // x8
  unsigned __int64 v715; // x23
  HoldReinforcementsData_SaveData_o *v716; // x19
  System_Collections_Generic_List_object__o *v717; // x21
  HoldReinforcementsData_o *v718; // x22
  int64_t v719; // x2
  int32_t v720; // w3
  System_String_o *v721; // x4
  BattleSetupInfo_o *v722; // x5
  FollowerInfo_o *v723; // x6
  PartyListViewItem_o *v724; // x7
  struct System_Object_array *v725; // x8
  _QWORD *v726; // x9
  __int64 v727; // x10
  Il2CppClass **v728; // x0
  System_Collections_Generic_List_TSource__o *v729; // x0
  int64_t v730; // x2
  int32_t v731; // w3
  System_String_o *v732; // x4
  BattleSetupInfo_o *v733; // x5
  FollowerInfo_o *v734; // x6
  PartyListViewItem_o *v735; // x7
  System_Collections_Generic_List_object__o *v736; // x19
  int64_t v737; // x2
  int32_t v738; // w3
  System_String_o *v739; // x4
  BattleSetupInfo_o *v740; // x5
  FollowerInfo_o *v741; // x6
  PartyListViewItem_o *v742; // x7
  int64_t v743; // x2
  int32_t v744; // w3
  System_String_o *v745; // x4
  BattleSetupInfo_o *v746; // x5
  FollowerInfo_o *v747; // x6
  PartyListViewItem_o *v748; // x7
  Il2CppClass **implementedInterfaces; // x20
  Il2CppClass *v750; // x8
  unsigned __int64 v751; // x23
  WarBoardUiData_SaveData_o *v752; // x19
  System_Collections_Generic_List_object__o *v753; // x21
  WarBoardUiData_o *v754; // x22
  int64_t v755; // x2
  int32_t v756; // w3
  System_String_o *v757; // x4
  BattleSetupInfo_o *v758; // x5
  FollowerInfo_o *v759; // x6
  PartyListViewItem_o *v760; // x7
  struct System_Object_array *v761; // x8
  _QWORD *v762; // x9
  __int64 v763; // x10
  Il2CppClass **v764; // x0
  int64_t interfaceOffsets; // x1
  Il2CppClass *v766; // x8
  WarBoardData_WarBoardLocalSaveData_o *v767; // x19
  int64_t v768; // x2
  int32_t v769; // w3
  System_String_o *v770; // x4
  BattleSetupInfo_o *v771; // x5
  FollowerInfo_o *v772; // x6
  PartyListViewItem_o *v773; // x7
  __int64 v774; // x0
  PartyOrganizationUtility_o *p_bgAnimationInfo_k__BackingField; // [xsp+10h] [xbp-170h]
  PartyOrganizationUtility_o *p_listUiData; // [xsp+18h] [xbp-168h]
  PartyOrganizationUtility_o *p_playedStageReinforcementsList; // [xsp+20h] [xbp-160h]
  PartyOrganizationUtility_o *p_latestBattlePieceUniqueIndexes; // [xsp+28h] [xbp-158h]
  struct System_Int32_array **p_latestPieceActionSquareIndexes; // [xsp+30h] [xbp-150h]
  PartyOrganizationUtility_o *p_reinforcementsSaveList; // [xsp+38h] [xbp-148h]
  DataMasterBase_TMaster__TEntity__PKType__o *v781; // [xsp+40h] [xbp-140h]
  System_Collections_Generic_List_object__o *v782; // [xsp+48h] [xbp-138h]
  WarBoardDataEntity_WarBoardDeckData_o **p_myDeck; // [xsp+50h] [xbp-130h]
  struct System_Collections_Generic_List_int__o **p_masterExistsForce; // [xsp+58h] [xbp-128h]
  System_Collections_Generic_List_object__o *v785; // [xsp+60h] [xbp-120h]
  System_Collections_Generic_List_object__o *v786; // [xsp+68h] [xbp-118h]
  System_Collections_Generic_List_object__o *v787; // [xsp+70h] [xbp-110h]
  NpcFollowerMaster_o *v788; // [xsp+78h] [xbp-108h]
  WarBoardStagePieceDetailMaster_o *Master_object; // [xsp+80h] [xbp-100h]
  System_Collections_Generic_List_object__o *v790; // [xsp+88h] [xbp-F8h]
  WarBoardData_Fields *p_fields; // [xsp+90h] [xbp-F0h]
  WarBoardCommonReleaseMaster_o *v792; // [xsp+98h] [xbp-E8h]
  WarBoardData_o *v793; // [xsp+A0h] [xbp-E0h]
  struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o **p_npcEntityDict; // [xsp+A8h] [xbp-D8h]
  System_Collections_Generic_List_object__o *v795; // [xsp+B0h] [xbp-D0h]
  System_Collections_Generic_List_object__o *v796; // [xsp+B0h] [xbp-D0h]
  System_Collections_Generic_List_object__o *v797; // [xsp+B8h] [xbp-C8h]
  WarBoardDataEntity_WarBoardDeckData_o **p_enemyDeck; // [xsp+C8h] [xbp-B8h]
  PartyOrganizationUtility_o *p_listPrevCond; // [xsp+D0h] [xbp-B0h]
  struct System_Collections_Generic_List_WarBoardEventData__o **p_listEvent; // [xsp+D8h] [xbp-A8h]
  int32_t v802; // [xsp+E4h] [xbp-9Ch]
  int32_t questId; // [xsp+E8h] [xbp-98h]
  int32_t npcIdx; // [xsp+ECh] [xbp-94h]
  System_Object_array **v806; // [xsp+F0h] [xbp-90h]
  WarBoardDataEntity_o *v807; // [xsp+F0h] [xbp-90h]
  __int64 v808; // [xsp+F8h] [xbp-88h]
  WarBoardRoadEntity_array *roadEntitiesb; // [xsp+100h] [xbp-80h]
  bool isChangeName; // [xsp+10Ch] [xbp-74h] BYREF
  Il2CppObject *v812; // [xsp+110h] [xbp-70h] BYREF
  WarBoardStagePieceDetailEntity_o *entity; // [xsp+118h] [xbp-68h] BYREF

  if ( (byte_4BB22A4 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Array_Resize_WarBoardBossBattleData___, stage);
    sub_1C13D24(&Method_System_Array_Resize_WarBoardSquareIndexData___, v8);
    sub_1C13D24(&Method_System_Array_Sort_WarBoardPieceData___, v9);
    sub_1C13D24(&Method_System_Array_Sort_WarBoardStageLayoutEntity___, v10);
    sub_1C13D24(&Method_BasicHelper_Any_WarBoardPieceData___, v11);
    sub_1C13D24(&System_Comparison_WarBoardPieceData__TypeInfo, v12);
    sub_1C13D24(&System_Comparison_WarBoardStageLayoutEntity__TypeInfo, v13);
    sub_1C13D24(&System_Convert_TypeInfo, v14);
    sub_1C13D24(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___, v15);
    sub_1C13D24(&Method_DataManager_GetMasterData_WarBoardActionPointMaster___, v16);
    sub_1C13D24(&Method_DataManager_GetMasterData_WarBoardStageDetailMaster___, v17);
    sub_1C13D24(&Method_DataManager_GetMasterData_WarBoardStageNpcMaster___, v18);
    sub_1C13D24(&Method_DataManager_GetMaster_NpcFollowerMaster___, v19);
    sub_1C13D24(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, v20);
    sub_1C13D24(&Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___, v21);
    sub_1C13D24(&DataManager_TypeInfo, v22);
    sub_1C13D24(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__, v23);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v24);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Values__, v25);
    sub_1C13D24(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v26);
    sub_1C13D24(&EncryptedPlayerPrefs_TypeInfo, v27);
    sub_1C13D24(&Method_System_Linq_Enumerable_Count_WarBoardBossBattleData_SaveData___, v28);
    sub_1C13D24(&Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData_SaveData___, v29);
    sub_1C13D24(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___, v30);
    sub_1C13D24(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___, v31);
    sub_1C13D24(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___, v32);
    sub_1C13D24(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserTreasureData___, v33);
    sub_1C13D24(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___, v34);
    sub_1C13D24(&Method_System_Linq_Enumerable_Max_WarBoardStageNpcEntity___, v35);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_WarBoardUserTreasureData___, v36);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToDictionary_WarBoardActionPointEntity__uint___, v37);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToDictionary_WarBoardStageNpcEntity__uint___, v38);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToList_int___, v39);
    sub_1C13D24(&Method_System_Linq_Enumerable_Where_WarBoardUserTreasureData___, v40);
    sub_1C13D24(&System_Func_WarBoardUserTreasureData__bool__TypeInfo, v41);
    sub_1C13D24(&System_Func_WarBoardStageNpcEntity__uint__TypeInfo, v42);
    sub_1C13D24(&System_Func_WarBoardUserWallData__bool__TypeInfo, v43);
    sub_1C13D24(&System_Func_WarBoardUserMasterData__bool__TypeInfo, v44);
    sub_1C13D24(&System_Func_WarBoardStageNpcEntity__int__TypeInfo, v45);
    sub_1C13D24(&System_Func_WarBoardUserServantData__bool__TypeInfo, v46);
    sub_1C13D24(&System_Func_WarBoardPieceData__bool__TypeInfo, v47);
    sub_1C13D24(&System_Func_WarBoardUserGetItemData__bool__TypeInfo, v48);
    sub_1C13D24(&System_Func_WarBoardActionPointEntity__uint__TypeInfo, v49);
    sub_1C13D24(&HoldReinforcementsData_TypeInfo, v50);
    sub_1C13D24(&int___TypeInfo, v51);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__, v52);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, v53);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardSquareData__Add__, v54);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardUiData__Add__, v55);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__, v56);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardEventData__Add__, v57);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardEffectData__Add__, v58);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardTreasureData__Add__, v59);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, v60);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardWallData__Add__, v61);
    sub_1C13D24(&Method_System_Collections_Generic_List_HoldReinforcementsData__Add__, v62);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardItemData__Add__, v63);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Contains__, v64);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardTreasureData__ToArray__, v65);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardEffectData__ToArray__, v66);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardWallData__ToArray__, v67);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__, v68);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__, v69);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardItemData__ToArray__, v70);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardPrevCondData___ctor__, v71);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v72);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v73);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardSquareData___ctor__, v74);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardEventData___ctor__, v75);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardUiData___ctor__, v76);
    sub_1C13D24(&Method_System_Collections_Generic_List_HoldReinforcementsData___ctor__, v77);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardTreasureData___ctor__, v78);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardItemData___ctor__, v79);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardWallData___ctor__, v80);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardEffectData___ctor__, v81);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v82);
    sub_1C13D24(&System_Collections_Generic_List_WarBoardSquareData__TypeInfo, v83);
    sub_1C13D24(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v84);
    sub_1C13D24(&System_Collections_Generic_List_WarBoardWallData__TypeInfo, v85);
    sub_1C13D24(&System_Collections_Generic_List_WarBoardTreasureData__TypeInfo, v86);
    sub_1C13D24(&System_Collections_Generic_List_WarBoardItemData__TypeInfo, v87);
    sub_1C13D24(&System_Collections_Generic_List_WarBoardUiData__TypeInfo, v88);
    sub_1C13D24(&System_Collections_Generic_List_WarBoardPrevCondData__TypeInfo, v89);
    sub_1C13D24(&System_Collections_Generic_List_WarBoardEffectData__TypeInfo, v90);
    sub_1C13D24(&System_Collections_Generic_List_WarBoardEventData__TypeInfo, v91);
    sub_1C13D24(&System_Collections_Generic_List_HoldReinforcementsData__TypeInfo, v92);
    sub_1C13D24(&Method_MiniMessagePack_MiniMessagePacker_UnpackClass_WarBoardData_WarBoardLocalSaveData___, v93);
    sub_1C13D24(&MiniMessagePack_MiniMessagePacker_TypeInfo, v94);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v95);
    sub_1C13D24(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v96);
    sub_1C13D24(&Method_WarBoardData___c___ctor_b__77_0__, v97);
    sub_1C13D24(&Method_WarBoardData___c___ctor_b__77_1__, v98);
    sub_1C13D24(&Method_WarBoardData___c___ctor_b__77_2__, v99);
    sub_1C13D24(&Method_WarBoardData___c___ctor_b__77_3__, v100);
    sub_1C13D24(&Method_WarBoardData___c___ctor_b__77_4__, v101);
    sub_1C13D24(&Method_WarBoardData___c___ctor_b__77_9__, v102);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass77_0___ctor_b__5__, v103);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass77_0___ctor_b__6__, v104);
    sub_1C13D24(&WarBoardData___c__DisplayClass77_0_TypeInfo, v105);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass77_1___ctor_b__7__, v106);
    sub_1C13D24(&WarBoardData___c__DisplayClass77_1_TypeInfo, v107);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass77_2___ctor_b__8__, v108);
    sub_1C13D24(&WarBoardData___c__DisplayClass77_2_TypeInfo, v109);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass77_3___ctor_b__10__, v110);
    sub_1C13D24(&WarBoardData___c__DisplayClass77_3_TypeInfo, v111);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__11__, v112);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__12__, v113);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__13__, v114);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__14__, v115);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__15__, v116);
    sub_1C13D24(&WarBoardData___c__DisplayClass77_4_TypeInfo, v117);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass77_5___ctor_b__16__, v118);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass77_5___ctor_b__17__, v119);
    sub_1C13D24(&WarBoardData___c__DisplayClass77_5_TypeInfo, v120);
    sub_1C13D24(&WarBoardData___c_TypeInfo, v121);
    sub_1C13D24(&uint___TypeInfo, v122);
    sub_1C13D24(&WarBoardBossBattleData_TypeInfo, v123);
    sub_1C13D24(&Method_WarBoardData_ComparePiece__, v124);
    sub_1C13D24(&WarBoardData_TypeInfo, v125);
    sub_1C13D24(&WarBoardEffectData_TypeInfo, v126);
    sub_1C13D24(&WarBoardEventData_TypeInfo, v127);
    sub_1C13D24(&WarBoardItemData_TypeInfo, v128);
    sub_1C13D24(&WarBoardData_WarBoardLocalSaveData_TypeInfo, v129);
    sub_1C13D24(&WarBoardPieceData_TypeInfo, v130);
    sub_1C13D24(&WarBoardPrevCondData_TypeInfo, v131);
    sub_1C13D24(&WarBoardSquareData_TypeInfo, v132);
    sub_1C13D24(&WarBoardSquareIndexData_TypeInfo, v133);
    sub_1C13D24(&WarBoardTreasureData_TypeInfo, v134);
    sub_1C13D24(&WarBoardUiData_TypeInfo, v135);
    sub_1C13D24(&WarBoardWallData_TypeInfo, v136);
    byte_4BB22A4 = 1;
  }
  v812 = 0LL;
  entity = 0LL;
  isChangeName = 0;
  v137 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C13F70(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v137,
    (const MethodInfo_32F2000 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  this->fields._bgAnimationInfo_k__BackingField = (struct System_Collections_Generic_Dictionary_string__object__o *)v137;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields._bgAnimationInfo_k__BackingField,
    (int64_t)v137,
    v138,
    v139,
    v140,
    v141,
    v142,
    v143);
  v144 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WarBoardEventData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v144,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_WarBoardEventData___ctor__);
  this->fields.listEvent = (struct System_Collections_Generic_List_WarBoardEventData__o *)v144;
  p_listEvent = &this->fields.listEvent;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.listEvent, (int64_t)v144, v145, v146, v147, v148, v149, v150);
  *(_QWORD *)&this->fields.winCondId = -1LL;
  v151 = (struct System_Int32_array *)sub_1C13DCC(int___TypeInfo, 2LL);
  this->fields.latestPieceActionSquareIndexes = v151;
  p_latestPieceActionSquareIndexes = &this->fields.latestPieceActionSquareIndexes;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.latestPieceActionSquareIndexes,
    (int64_t)v151,
    v152,
    v153,
    v154,
    v155,
    v156,
    v157);
  v158 = (struct System_UInt32_array *)sub_1C13DCC(uint___TypeInfo, 0LL);
  this->fields.latestBattlePieceUniqueIndexes = v158;
  p_latestBattlePieceUniqueIndexes = (PartyOrganizationUtility_o *)&this->fields.latestBattlePieceUniqueIndexes;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.latestBattlePieceUniqueIndexes,
    (int64_t)v158,
    v159,
    v160,
    v161,
    v162,
    v163,
    v164);
  v165 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WarBoardPrevCondData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v165,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_WarBoardPrevCondData___ctor__);
  this->fields.listPrevCond = (struct System_Collections_Generic_List_WarBoardPrevCondData__o *)v165;
  p_listPrevCond = (PartyOrganizationUtility_o *)&this->fields.listPrevCond;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.listPrevCond,
    (int64_t)v165,
    v166,
    v167,
    v168,
    v169,
    v170,
    v171);
  v172 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_HoldReinforcementsData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v172,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_HoldReinforcementsData___ctor__);
  this->fields.reinforcementsSaveList = (struct System_Collections_Generic_List_HoldReinforcementsData__o *)v172;
  p_reinforcementsSaveList = (PartyOrganizationUtility_o *)&this->fields.reinforcementsSaveList;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.reinforcementsSaveList,
    (int64_t)v172,
    v173,
    v174,
    v175,
    v176,
    v177,
    v178);
  v179 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v179,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.playedStageReinforcementsList = v179;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.playedStageReinforcementsList,
    (int64_t)v179,
    v180,
    v181,
    v182,
    v183,
    v184,
    v185);
  v186 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WarBoardUiData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v186,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_WarBoardUiData___ctor__);
  this->fields.listUiData = (struct System_Collections_Generic_List_WarBoardUiData__o *)v186;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.listUiData, (int64_t)v186, v187, v188, v189, v190, v191, v192);
  v193 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v193,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.masterExistsForce = v193;
  p_masterExistsForce = &this->fields.masterExistsForce;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.masterExistsForce,
    (int64_t)v193,
    v194,
    v195,
    v196,
    v197,
    v198,
    v199);
  v200 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v200,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.reinforcementsAppointmentSquareList = v200;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.reinforcementsAppointmentSquareList,
    (int64_t)v200,
    v201,
    v202,
    v203,
    v204,
    v205,
    v206);
  this->fields.localSaveTiming = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v207 = WarBoardData___c_TypeInfo;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v207 = WarBoardData___c_TypeInfo;
  }
  _9__77_0 = (System_Comparison_T__o *)v207->static_fields->__9__77_0;
  if ( !_9__77_0 )
  {
    if ( !v207->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v207);
      v207 = WarBoardData___c_TypeInfo;
    }
    v209 = (Il2CppObject *)v207->static_fields->__9;
    _9__77_0 = (System_Comparison_T__o *)sub_1C13F70(System_Comparison_WarBoardStageLayoutEntity__TypeInfo);
    System_Comparison_object____ctor(_9__77_0, v209, Method_WarBoardData___c___ctor_b__77_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__77_0 = (struct System_Comparison_WarBoardStageLayoutEntity__o *)_9__77_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__77_0,
      (int64_t)_9__77_0,
      v211,
      v212,
      v213,
      v214,
      v215,
      v216);
  }
  System_Array__Sort_object__49663660(
    (System_Object_array *)layoutEntities,
    _9__77_0,
    (const MethodInfo_2F5CEAC *)Method_System_Array_Sort_WarBoardStageLayoutEntity___);
  this->fields.stageEntity = stage;
  p_fields = &this->fields;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, (int64_t)stage, v217, v218, v219, v220, v221, v222);
  if ( !layoutEntities )
    goto LABEL_359;
  v808 = *(_QWORD *)&layoutEntities->max_length;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_359;
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_WarBoardStageDetailMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_359;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_WarBoardStageNpcMaster___);
  this->fields.stageNpcMaster = (struct WarBoardStageNpcMaster_o *)MasterData_object;
  p_stageNpcMaster = &this->fields.stageNpcMaster;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.stageNpcMaster,
    (int64_t)MasterData_object,
    v227,
    v228,
    v229,
    v230,
    v231,
    v232);
  if ( !stage )
    goto LABEL_359;
  Instance = (__int64)*p_stageNpcMaster;
  if ( !*p_stageNpcMaster )
    goto LABEL_359;
  WarBoardStageEntities = WarBoardStageNpcMaster__GetWarBoardStageEntities(
                            (WarBoardStageNpcMaster_o *)Instance,
                            stage->fields.id,
                            0LL);
  v234 = WarBoardData___c_TypeInfo;
  v235 = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardStageEntities;
  p_playedStageReinforcementsList = (PartyOrganizationUtility_o *)&this->fields.playedStageReinforcementsList;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v234 = WarBoardData___c_TypeInfo;
  }
  _9__77_1 = (System_Func_T__TResult__o *)v234->static_fields->__9__77_1;
  if ( !_9__77_1 )
  {
    if ( !v234->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v234);
      v234 = WarBoardData___c_TypeInfo;
    }
    v237 = (Il2CppObject *)v234->static_fields->__9;
    _9__77_1 = (System_Func_T__TResult__o *)sub_1C13F70(System_Func_WarBoardStageNpcEntity__uint__TypeInfo);
    System_Func_object__uint____ctor(_9__77_1, v237, Method_WarBoardData___c___ctor_b__77_1__, 0LL);
    v238 = WarBoardData___c_TypeInfo->static_fields;
    v238->__9__77_1 = (struct System_Func_WarBoardStageNpcEntity__uint__o *)_9__77_1;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v238->__9__77_1, (int64_t)_9__77_1, v239, v240, v241, v242, v243, v244);
  }
  v245 = (struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *)System_Linq_Enumerable__ToDictionary_object__uint_(
                                                                                           v235,
                                                                                           (System_Func_TSource__TKey__o *)_9__77_1,
                                                                                           (const MethodInfo_2FC9110 *)Method_System_Linq_Enumerable_ToDictionary_WarBoardStageNpcEntity__uint___);
  this->fields.npcEntityDict = v245;
  p_npcEntityDict = &this->fields.npcEntityDict;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.npcEntityDict,
    (int64_t)v245,
    v246,
    v247,
    v248,
    v249,
    v250,
    v251);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_359;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_WarBoardActionPointMaster___);
  if ( !Instance )
    goto LABEL_359;
  WarBoardActionPointEntities = WarBoardActionPointMaster__GetWarBoardActionPointEntities(
                                  (WarBoardActionPointMaster_o *)Instance,
                                  stage->fields.id,
                                  0LL);
  v253 = WarBoardData___c_TypeInfo;
  v254 = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardActionPointEntities;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v253 = WarBoardData___c_TypeInfo;
  }
  _9__77_2 = (System_Func_T__TResult__o *)v253->static_fields->__9__77_2;
  if ( !_9__77_2 )
  {
    if ( !v253->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v253);
      v253 = WarBoardData___c_TypeInfo;
    }
    v256 = (Il2CppObject *)v253->static_fields->__9;
    _9__77_2 = (System_Func_T__TResult__o *)sub_1C13F70(System_Func_WarBoardActionPointEntity__uint__TypeInfo);
    System_Func_object__uint____ctor(_9__77_2, v256, Method_WarBoardData___c___ctor_b__77_2__, 0LL);
    v257 = WarBoardData___c_TypeInfo->static_fields;
    v257->__9__77_2 = (struct System_Func_WarBoardActionPointEntity__uint__o *)_9__77_2;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v257->__9__77_2, (int64_t)_9__77_2, v258, v259, v260, v261, v262, v263);
  }
  v264 = (struct System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__o *)System_Linq_Enumerable__ToDictionary_object__uint_(
                                                                                              v254,
                                                                                              (System_Func_TSource__TKey__o *)_9__77_2,
                                                                                              (const MethodInfo_2FC9110 *)Method_System_Linq_Enumerable_ToDictionary_WarBoardActionPointEntity__uint___);
  this->fields.actionPointEntityDict = v264;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.actionPointEntityDict,
    (int64_t)v264,
    v265,
    v266,
    v267,
    v268,
    v269,
    v270);
  Instance = (__int64)this->fields.npcEntityDict;
  if ( !Instance )
    goto LABEL_359;
  Values = System_Collections_Generic_Dictionary_uint__object___get_Values(
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)Instance,
             (const MethodInfo_332B428 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Values__);
  v272 = WarBoardData___c_TypeInfo;
  v273 = (System_Collections_Generic_IEnumerable_TSource__o *)Values;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v272 = WarBoardData___c_TypeInfo;
  }
  _9__77_3 = (System_Func_object__int__o *)v272->static_fields->__9__77_3;
  if ( !_9__77_3 )
  {
    if ( !v272->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v272);
      v272 = WarBoardData___c_TypeInfo;
    }
    v275 = (Il2CppObject *)v272->static_fields->__9;
    _9__77_3 = (System_Func_object__int__o *)sub_1C13F70(System_Func_WarBoardStageNpcEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__77_3, v275, Method_WarBoardData___c___ctor_b__77_3__, 0LL);
    v276 = WarBoardData___c_TypeInfo->static_fields;
    v276->__9__77_3 = (struct System_Func_WarBoardStageNpcEntity__int__o *)_9__77_3;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v276->__9__77_3, (int64_t)_9__77_3, v277, v278, v279, v280, v281, v282);
  }
  Instance = System_Linq_Enumerable__Max_object_(
               v273,
               (System_Func_TSource__int__o *)_9__77_3,
               (const MethodInfo_2FB70E0 *)Method_System_Linq_Enumerable_Max_WarBoardStageNpcEntity___);
  npcEntityDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.npcEntityDict;
  this->fields._maxForceId_k__BackingField = Instance;
  if ( !npcEntityDict )
    goto LABEL_359;
  v284 = System_Collections_Generic_Dictionary_uint__object___get_Values(
           npcEntityDict,
           (const MethodInfo_332B428 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Values__);
  v285 = WarBoardData___c_TypeInfo;
  v286 = (System_Collections_Generic_IEnumerable_TSource__o *)v284;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v285 = WarBoardData___c_TypeInfo;
  }
  _9__77_4 = (System_Func_object__int__o *)v285->static_fields->__9__77_4;
  if ( !_9__77_4 )
  {
    if ( !v285->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v285);
      v285 = WarBoardData___c_TypeInfo;
    }
    v288 = (Il2CppObject *)v285->static_fields->__9;
    _9__77_4 = (System_Func_object__int__o *)sub_1C13F70(System_Func_WarBoardStageNpcEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__77_4, v288, Method_WarBoardData___c___ctor_b__77_4__, 0LL);
    v289 = WarBoardData___c_TypeInfo->static_fields;
    v289->__9__77_4 = (struct System_Func_WarBoardStageNpcEntity__int__o *)_9__77_4;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v289->__9__77_4, (int64_t)_9__77_4, v290, v291, v292, v293, v294, v295);
  }
  p_bgAnimationInfo_k__BackingField = (PartyOrganizationUtility_o *)&this->fields._bgAnimationInfo_k__BackingField;
  p_listUiData = (PartyOrganizationUtility_o *)&this->fields.listUiData;
  this->fields._maxGroupId_k__BackingField = System_Linq_Enumerable__Max_object_(
                                               v286,
                                               (System_Func_TSource__int__o *)_9__77_4,
                                               (const MethodInfo_2FB70E0 *)Method_System_Linq_Enumerable_Max_WarBoardStageNpcEntity___);
  v793 = this;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_359;
  v781 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (WarBoardStagePieceDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
  v788 = (NpcFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v792 = (WarBoardCommonReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  v797 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v797,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor__);
  v790 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v790,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor__);
  v296 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v296,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v787 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WarBoardItemData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v787,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_WarBoardItemData___ctor__);
  v782 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WarBoardTreasureData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v782,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_WarBoardTreasureData___ctor__);
  v785 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WarBoardWallData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v785,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_WarBoardWallData___ctor__);
  v786 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WarBoardEffectData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v786,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_WarBoardEffectData___ctor__);
  v297 = WarBoardData_TypeInfo;
  if ( !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    v297 = WarBoardData_TypeInfo;
  }
  v298 = serverData;
  v299 = v797;
  v300 = layoutEntities;
  WARBOARDDATA_SAVEDATA_KEY = v297->static_fields->WARBOARDDATA_SAVEDATA_KEY;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  Instance = EncryptedPlayerPrefs__HasKey(WARBOARDDATA_SAVEDATA_KEY, 0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( !serverData )
      goto LABEL_359;
    v302 = WarBoardData_TypeInfo;
    progressType = serverData->fields.progressType;
    if ( !WarBoardData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    if ( progressType == 3 )
    {
      WarBoardData__DeleteLocalSave((const MethodInfo *)v302);
    }
    else
    {
      v304 = WarBoardData_TypeInfo->static_fields->WARBOARDDATA_SAVEDATA_KEY;
      if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
      String = EncryptedPlayerPrefs__GetString(v304, 0LL);
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v306 = System_Convert__FromBase64String(String, 0LL);
      v307 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C13F70(MiniMessagePack_MiniMessagePacker_TypeInfo);
      MiniMessagePack_MiniMessagePacker___ctor(v307, 0LL);
      if ( !v307 )
        goto LABEL_359;
      v308 = MiniMessagePack_MiniMessagePacker__UnpackClass_object_(
               v307,
               v306,
               (const MethodInfo_300E8B0 *)Method_MiniMessagePack_MiniMessagePacker_UnpackClass_WarBoardData_WarBoardLocalSaveData___);
      this->fields.localSaveData = (struct WarBoardData_WarBoardLocalSaveData_o *)v308;
      p_localSaveData = &this->fields.localSaveData;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&this->fields.localSaveData,
        (int64_t)v308,
        v310,
        v311,
        v312,
        v313,
        v314,
        v315);
      localSaveData = this->fields.localSaveData;
      if ( localSaveData
        && localSaveData->fields.questId == serverData->fields.questId
        && localSaveData->fields.questPhase == serverData->fields.questPhase
        && localSaveData->fields.stageId == serverData->fields.stageId )
      {
        if ( localSaveData->fields.localSaveTiming == 6
          && (localSaveData->fields.turn != serverData->fields.turn
           || localSaveData->fields.turnForceId != serverData->fields.turnForceId
           || localSaveData->fields.turnGroupId != serverData->fields.turnGroupId) )
        {
          localSaveData->fields.localSaveTiming = 7;
        }
        Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !*p_localSaveData )
          goto LABEL_359;
        if ( !Instance )
          goto LABEL_359;
        Instance = (__int64)WarBoardManager__CheckAndLoadCacheServerData(
                              (WarBoardManager_o *)Instance,
                              serverData,
                              (*p_localSaveData)->fields.localSaveTiming,
                              0LL);
        if ( !*p_localSaveData )
          goto LABEL_359;
        pieceSaves = (*p_localSaveData)->fields.pieceSaves;
        if ( !pieceSaves )
          goto LABEL_359;
        v318 = (_QWORD *)Instance;
        if ( (int)pieceSaves->max_length < 1 )
        {
LABEL_87:
          v806 = (System_Object_array **)v318;
          if ( !*p_localSaveData )
            goto LABEL_359;
          itemSaves = (*p_localSaveData)->fields.itemSaves;
          v795 = v296;
          if ( !itemSaves )
            goto LABEL_359;
          if ( (int)itemSaves->max_length < 1 )
          {
LABEL_97:
            if ( !v318 )
              goto LABEL_359;
            v345 = (PartyOrganizationUtility_o *)(v318 + 5);
            if ( v806[5] )
            {
              if ( !*p_localSaveData )
                goto LABEL_359;
              treasureSaves = (*p_localSaveData)->fields.treasureSaves;
              if ( !treasureSaves )
                goto LABEL_359;
              if ( (int)treasureSaves->max_length >= 1 )
              {
                v347 = 0;
                v348 = 0LL;
                do
                {
                  v349 = sub_1C13F70(WarBoardData___c__DisplayClass77_2_TypeInfo);
                  WarBoardData___c__DisplayClass77_2___ctor((WarBoardData___c__DisplayClass77_2_o *)v349, 0LL);
                  if ( v348 >= treasureSaves->max_length )
                    goto LABEL_360;
                  if ( !v349 )
                    goto LABEL_359;
                  v356 = (int64_t)treasureSaves->m_Items[v348];
                  *(_QWORD *)(v349 + 16) = v356;
                  v357 = v349 + 16;
                  sub_1C13CC8((PartyOrganizationUtility_o *)(v349 + 16), v356, v350, v351, v352, v353, v354, v355);
                  klass = (System_Collections_Generic_IEnumerable_TSource__o *)v345->klass;
                  v359 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardUserTreasureData__bool__TypeInfo);
                  System_Func_object__bool____ctor(
                    v359,
                    (Il2CppObject *)v349,
                    Method_WarBoardData___c__DisplayClass77_2___ctor_b__8__,
                    0LL);
                  Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__50015312(
                                        klass,
                                        (System_Func_TSource__bool__o *)v359,
                                        (const MethodInfo_2FB2C50 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserTreasureData___);
                  if ( Instance )
                  {
                    if ( !*(_QWORD *)v357 )
                      goto LABEL_359;
                    if ( !*(_BYTE *)(*(_QWORD *)v357 + 20LL) )
                    {
                      v347 = 1;
                      *(_BYTE *)(Instance + 20) = 0;
                    }
                  }
                  ++v348;
                }
                while ( (__int64)v348 < (int)treasureSaves->max_length );
                if ( (v347 & 1) != 0 )
                {
                  v360 = WarBoardData___c_TypeInfo;
                  v361 = (System_Collections_Generic_IEnumerable_TSource__o *)v345->klass;
                  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
                    v360 = WarBoardData___c_TypeInfo;
                  }
                  _9__77_9 = (System_Func_object__bool__o *)v360->static_fields->__9__77_9;
                  if ( !_9__77_9 )
                  {
                    if ( !v360->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(v360);
                      v360 = WarBoardData___c_TypeInfo;
                    }
                    v363 = (Il2CppObject *)v360->static_fields->__9;
                    _9__77_9 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardUserTreasureData__bool__TypeInfo);
                    System_Func_object__bool____ctor(_9__77_9, v363, Method_WarBoardData___c___ctor_b__77_9__, 0LL);
                    v364 = WarBoardData___c_TypeInfo->static_fields;
                    v364->__9__77_9 = (struct System_Func_WarBoardUserTreasureData__bool__o *)_9__77_9;
                    sub_1C13CC8(
                      (PartyOrganizationUtility_o *)&v364->__9__77_9,
                      (int64_t)_9__77_9,
                      v365,
                      v366,
                      v367,
                      v368,
                      v369,
                      v370);
                  }
                  v371 = System_Linq_Enumerable__Where_object_(
                           v361,
                           (System_Func_TSource__bool__o *)_9__77_9,
                           (const MethodInfo_2FCEBC0 *)Method_System_Linq_Enumerable_Where_WarBoardUserTreasureData___);
                  v372 = System_Linq_Enumerable__ToArray_object_(
                           v371,
                           (const MethodInfo_2FC8D34 *)Method_System_Linq_Enumerable_ToArray_WarBoardUserTreasureData___);
                  v345->klass = (PartyOrganizationUtility_c *)v372;
                  sub_1C13CC8(v345, (int64_t)v372, v373, v374, v375, v376, v377, v378);
                }
              }
            }
            if ( !*p_localSaveData )
              goto LABEL_359;
            wallSaves = (*p_localSaveData)->fields.wallSaves;
            if ( !wallSaves )
              goto LABEL_359;
            if ( (int)wallSaves->max_length < 1 )
            {
LABEL_127:
              if ( !*p_localSaveData )
                goto LABEL_359;
              v391 = System_Linq_Enumerable__Count_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)(*p_localSaveData)->fields.squareIndexInfo,
                       (const MethodInfo_2FAA35C *)Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData_SaveData___);
              System_Array__Resize_object_(
                v806 + 11,
                v391,
                (const MethodInfo_2F4E8C8 *)Method_System_Array_Resize_WarBoardSquareIndexData___);
              v300 = layoutEntities;
              if ( v391 >= 1 )
              {
                v392 = 0LL;
                v393 = (unsigned int)v391;
                v394 = 8LL;
                while ( *p_localSaveData )
                {
                  squareIndexInfo = (*p_localSaveData)->fields.squareIndexInfo;
                  if ( !squareIndexInfo )
                    break;
                  if ( v392 >= squareIndexInfo->max_length )
                    goto LABEL_360;
                  v396 = (unsigned int *)v806[11];
                  v397 = *(WarBoardSquareIndexData_SaveData_o **)((char *)&squareIndexInfo->obj.klass + v394 * 4);
                  v398 = (WarBoardSquareIndexData_o *)sub_1C13F70(WarBoardSquareIndexData_TypeInfo);
                  WarBoardSquareIndexData___ctor_36677192(v398, v397, 0LL);
                  if ( !v396 )
                    break;
                  if ( v398 )
                  {
                    Instance = sub_1C13E60(v398, *(_QWORD *)(*(_QWORD *)v396 + 64LL));
                    if ( !Instance )
                    {
LABEL_361:
                      v774 = sub_1C13FA4();
                      sub_1C13E4C(v774, 0LL);
                    }
                  }
                  if ( v392 >= v396[6] )
                    goto LABEL_360;
                  *(_QWORD *)&v396[v394] = v398;
                  sub_1C13CC8(
                    (PartyOrganizationUtility_o *)&v396[v394],
                    (int64_t)v398,
                    v399,
                    v400,
                    v401,
                    v402,
                    v403,
                    v404);
                  v296 = v795;
                  ++v392;
                  v394 += 2LL;
                  if ( v393 == v392 )
                    goto LABEL_138;
                }
                goto LABEL_359;
              }
LABEL_138:
              if ( !*p_localSaveData )
                goto LABEL_359;
              v298 = (WarBoardDataEntity_o *)v806;
              v405 = System_Linq_Enumerable__Count_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)(*p_localSaveData)->fields.bossBattleInfo,
                       (const MethodInfo_2FAA35C *)Method_System_Linq_Enumerable_Count_WarBoardBossBattleData_SaveData___);
              System_Array__Resize_object_(
                v806 + 12,
                v405,
                (const MethodInfo_2F4E8C8 *)Method_System_Array_Resize_WarBoardBossBattleData___);
              if ( v405 >= 1 )
              {
                v406 = 0LL;
                v407 = (unsigned int)v405;
                v408 = 8LL;
                do
                {
                  if ( !*p_localSaveData )
                    goto LABEL_359;
                  bossBattleInfo = (*p_localSaveData)->fields.bossBattleInfo;
                  if ( !bossBattleInfo )
                    goto LABEL_359;
                  if ( v406 >= bossBattleInfo->max_length )
                    goto LABEL_360;
                  v410 = (unsigned int *)v806[12];
                  v411 = *(WarBoardBossBattleData_SaveData_o **)((char *)&bossBattleInfo->obj.klass + v408 * 4);
                  v412 = (WarBoardBossBattleData_o *)sub_1C13F70(WarBoardBossBattleData_TypeInfo);
                  WarBoardBossBattleData___ctor_36432448(v412, v411, v413);
                  if ( !v410 )
                    goto LABEL_359;
                  if ( v412 )
                  {
                    Instance = sub_1C13E60(v412, *(_QWORD *)(*(_QWORD *)v410 + 64LL));
                    if ( !Instance )
                      goto LABEL_361;
                  }
                  if ( v406 >= v410[6] )
                    goto LABEL_360;
                  *(_QWORD *)&v410[v408] = v412;
                  sub_1C13CC8(
                    (PartyOrganizationUtility_o *)&v410[v408],
                    (int64_t)v412,
                    v414,
                    v415,
                    v416,
                    v417,
                    v418,
                    v419);
                  v296 = v795;
                  ++v406;
                  v408 += 2LL;
                }
                while ( v407 != v406 );
                v298 = (WarBoardDataEntity_o *)v806;
              }
              v299 = v797;
              goto LABEL_154;
            }
            v380 = 0LL;
            while ( 1 )
            {
              v381 = sub_1C13F70(WarBoardData___c__DisplayClass77_3_TypeInfo);
              WarBoardData___c__DisplayClass77_3___ctor((WarBoardData___c__DisplayClass77_3_o *)v381, 0LL);
              if ( v380 >= wallSaves->max_length )
                break;
              if ( !v381 )
                goto LABEL_359;
              v388 = (int64_t)wallSaves->m_Items[v380];
              *(_QWORD *)(v381 + 16) = v388;
              sub_1C13CC8((PartyOrganizationUtility_o *)(v381 + 16), v388, v382, v383, v384, v385, v386, v387);
              v389 = (System_Collections_Generic_IEnumerable_TSource__o *)v806[6];
              v390 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardUserWallData__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v390,
                (Il2CppObject *)v381,
                Method_WarBoardData___c__DisplayClass77_3___ctor_b__10__,
                0LL);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__50015312(
                                    v389,
                                    (System_Func_TSource__bool__o *)v390,
                                    (const MethodInfo_2FB2C50 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
              if ( Instance )
                WarBoardUserWallData__SetSaveData(
                  (WarBoardUserWallData_o *)Instance,
                  *(WarBoardWallData_SaveData_o **)(v381 + 16),
                  0LL);
              if ( (__int64)++v380 >= (int)wallSaves->max_length )
                goto LABEL_127;
            }
          }
          else
          {
            v334 = 0LL;
            while ( 1 )
            {
              v335 = sub_1C13F70(WarBoardData___c__DisplayClass77_1_TypeInfo);
              WarBoardData___c__DisplayClass77_1___ctor((WarBoardData___c__DisplayClass77_1_o *)v335, 0LL);
              if ( v334 >= itemSaves->max_length )
                break;
              if ( !v335 )
                goto LABEL_359;
              v342 = (int64_t)itemSaves->m_Items[v334];
              *(_QWORD *)(v335 + 16) = v342;
              sub_1C13CC8((PartyOrganizationUtility_o *)(v335 + 16), v342, v336, v337, v338, v339, v340, v341);
              if ( !v318 )
                goto LABEL_359;
              v343 = (System_Collections_Generic_IEnumerable_TSource__o *)v318[4];
              v344 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardUserGetItemData__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v344,
                (Il2CppObject *)v335,
                Method_WarBoardData___c__DisplayClass77_1___ctor_b__7__,
                0LL);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__50015312(
                                    v343,
                                    (System_Func_TSource__bool__o *)v344,
                                    (const MethodInfo_2FB2C50 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
              if ( Instance )
                WarBoardUserGetItemData__SetSaveData(
                  (WarBoardUserGetItemData_o *)Instance,
                  *(WarBoardItemData_SaveData_o **)(v335 + 16),
                  0LL);
              if ( (__int64)++v334 >= (int)itemSaves->max_length )
                goto LABEL_97;
            }
          }
        }
        else
        {
          v319 = 0LL;
          while ( 1 )
          {
            v320 = sub_1C13F70(WarBoardData___c__DisplayClass77_0_TypeInfo);
            WarBoardData___c__DisplayClass77_0___ctor((WarBoardData___c__DisplayClass77_0_o *)v320, 0LL);
            if ( v319 >= pieceSaves->max_length )
              break;
            if ( !v320 )
              goto LABEL_359;
            v327 = (int64_t)pieceSaves->m_Items[v319];
            *(_QWORD *)(v320 + 16) = v327;
            v328 = (WarBoardPieceData_SaveData_o **)(v320 + 16);
            sub_1C13CC8((PartyOrganizationUtility_o *)(v320 + 16), v327, v321, v322, v323, v324, v325, v326);
            if ( !*(_QWORD *)(v320 + 16) || !v318 )
              goto LABEL_359;
            if ( *(_DWORD *)(*(_QWORD *)(v320 + 16) + 24LL) )
            {
              v329 = (System_Collections_Generic_IEnumerable_TSource__o *)v318[2];
              v330 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardUserServantData__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v330,
                (Il2CppObject *)v320,
                Method_WarBoardData___c__DisplayClass77_0___ctor_b__6__,
                0LL);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__50015312(
                                    v329,
                                    (System_Func_TSource__bool__o *)v330,
                                    (const MethodInfo_2FB2C50 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
              if ( Instance )
                WarBoardUserServantData__SetSaveData((WarBoardUserServantData_o *)Instance, *v328, 0LL);
            }
            else
            {
              v331 = (System_Collections_Generic_IEnumerable_TSource__o *)v318[3];
              v332 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardUserMasterData__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v332,
                (Il2CppObject *)v320,
                Method_WarBoardData___c__DisplayClass77_0___ctor_b__5__,
                0LL);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__50015312(
                                    v331,
                                    (System_Func_TSource__bool__o *)v332,
                                    (const MethodInfo_2FB2C50 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
              if ( Instance )
                WarBoardUserMasterData__SetSaveData((WarBoardUserMasterData_o *)Instance, *v328, 0LL);
            }
            if ( (__int64)++v319 >= (int)pieceSaves->max_length )
              goto LABEL_87;
          }
        }
LABEL_360:
        sub_1C13F88(Instance, throughCondId);
      }
      v420 = WarBoardData_TypeInfo;
      if ( !WarBoardData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
      WarBoardData__DeleteLocalSave((const MethodInfo *)v420);
      *p_localSaveData = 0LL;
      sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.localSaveData, 0LL, v421, v422, v423, v424, v425, v426);
    }
LABEL_154:
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    goto LABEL_155;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !serverData )
    goto LABEL_359;
LABEL_155:
  if ( !Instance )
    goto LABEL_359;
  WarBoardManager__InitializeLogic((WarBoardManager_o *)Instance, v298, v298->fields.progressType != 3, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_359;
  WarBoardManager__UpdateServerData((WarBoardManager_o *)Instance, v298, 0LL);
  v807 = v298;
  if ( (int)v808 >= 1 )
  {
    v427 = 0LL;
    p_enemyDeck = &v298->fields.enemyDeck;
    npcIdx = 0;
    p_myDeck = &v298->fields.myDeck;
    v796 = v296;
    do
    {
      v428 = sub_1C13F70(WarBoardData___c__DisplayClass77_4_TypeInfo);
      WarBoardData___c__DisplayClass77_4___ctor((WarBoardData___c__DisplayClass77_4_o *)v428, 0LL);
      if ( v427 >= v300->max_length )
        goto LABEL_360;
      if ( !v428 )
        goto LABEL_359;
      v435 = (int64_t)v300->m_Items[v427];
      *(_QWORD *)(v428 + 16) = v435;
      v436 = (WarBoardStageLayoutEntity_o **)(v428 + 16);
      sub_1C13CC8((PartyOrganizationUtility_o *)(v428 + 16), v435, v429, v430, v431, v432, v433, v434);
      v437 = *(WarBoardStageLayoutEntity_o **)(v428 + 16);
      v438 = (WarBoardSquareData_o *)sub_1C13F70(WarBoardSquareData_TypeInfo);
      WarBoardSquareData___ctor(v438, v437, roadEntities, 0LL);
      if ( v427 )
      {
        if ( (unsigned int)(v427 - 1) >= v300->max_length )
          goto LABEL_360;
        v445 = *((_QWORD *)&v300->max_length + v427);
        if ( !v445 )
          goto LABEL_359;
        v446 = *v436;
        if ( !*v436 )
          goto LABEL_359;
        if ( *(_DWORD *)(v445 + 20) == v446->fields.squareIndex )
          goto LABEL_176;
      }
      else
      {
        v446 = *v436;
        if ( !*v436 )
          goto LABEL_359;
      }
      throughCondId = (unsigned int)v446->fields.throughCondId;
      if ( !(_DWORD)throughCondId )
        goto LABEL_364;
      Instance = (__int64)v792;
      if ( !v792 )
        goto LABEL_359;
      Instance = WarBoardCommonReleaseMaster__IsOpen(v792, throughCondId, 0LL);
      if ( (Instance & 1) != 0 )
      {
LABEL_364:
        if ( !v299 )
          goto LABEL_359;
        items = v299->fields._items;
        v448 = Method_System_Collections_Generic_List_WarBoardSquareData__Add__;
        ++v299->fields._version;
        if ( !items )
          goto LABEL_359;
        size = v299->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v299,
            (Il2CppObject *)v438,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v448[4] + 192LL) + 112LL));
        }
        else
        {
          v450 = &items->obj.klass + size;
          v299->fields._size = size + 1;
          v450[4] = (Il2CppClass *)v438;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v450 + 4), (int64_t)v438, v439, v440, v441, v442, v443, v444);
        }
LABEL_176:
        v451 = *v436;
        if ( !*v436 )
          goto LABEL_359;
        if ( v451->fields.isPiecePut )
        {
          questPhase = v298->fields.questPhase;
          questId = v298->fields.questId;
          if ( v451->fields.pieceIndex )
          {
            svtInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v298->fields.svtInfo;
            v454 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardUserServantData__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v454,
              (Il2CppObject *)v428,
              Method_WarBoardData___c__DisplayClass77_4___ctor_b__13__,
              0LL);
            Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__50015312(
                                  svtInfo,
                                  (System_Func_TSource__bool__o *)v454,
                                  (const MethodInfo_2FB2C50 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
            v455 = (WarBoardUserServantData_o *)Instance;
            v456 = 0LL;
          }
          else
          {
            masterInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v298->fields.masterInfo;
            v464 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardUserMasterData__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v464,
              (Il2CppObject *)v428,
              Method_WarBoardData___c__DisplayClass77_4___ctor_b__12__,
              0LL);
            Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__50015312(
                                  masterInfo,
                                  (System_Func_TSource__bool__o *)v464,
                                  (const MethodInfo_2FB2C50 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
            v456 = (WarBoardUserMasterData_o *)Instance;
            v455 = 0LL;
          }
          v465 = *v436;
          if ( !*v436 )
            goto LABEL_359;
          v466 = p_enemyDeck;
          v802 = questPhase;
          if ( !v465->fields.forceId )
          {
            v466 = p_enemyDeck;
            if ( !v465->fields.pieceIndex )
              v466 = p_myDeck;
          }
          v467 = *v466;
          Type = Follower__getType(v465->fields.followerType, 0LL);
          IsNpc = Follower__IsNpc(Type, 0LL);
          v470 = *v436;
          v471 = v298->fields.progressType;
          v472 = IsNpc;
          v473 = *p_npcEntityDict;
          v474 = (WarBoardPieceData_o *)sub_1C13F70(WarBoardPieceData_TypeInfo);
          v475 = v474;
          v476 = v471 == 3;
          if ( v472 )
          {
            WarBoardPieceData___ctor(v474, v470, v455, v456, v467, v476, v473, npcIdx, 0LL);
            if ( !*v436 )
              goto LABEL_359;
            v298 = v807;
            v300 = layoutEntities;
            v296 = v796;
            Instance = (__int64)Master_object;
            if ( !Master_object )
              goto LABEL_359;
            Instance = WarBoardStagePieceDetailMaster__TryGetEntity(
                         Master_object,
                         &entity,
                         (*v436)->fields.stageId,
                         (*v436)->fields.forceId,
                         (*v436)->fields.groupId,
                         (*v436)->fields.pieceIndex,
                         0LL);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)entity;
              if ( !entity )
                goto LABEL_359;
              Instance = WarBoardStagePieceDetailEntity__GetImageSvtId(entity, 0LL);
              if ( !v475 )
                goto LABEL_359;
              v475->fields._npcImageSvtId_k__BackingField = Instance;
              Instance = (__int64)entity;
              if ( !entity )
                goto LABEL_359;
              v475->fields._npcDispLimitCount_k__BackingField = WarBoardStagePieceDetailEntity__GetDispLimitCnt(
                                                                  entity,
                                                                  0LL);
            }
            else if ( !v475 )
            {
              goto LABEL_359;
            }
            Instance = (__int64)v788;
            if ( !v788 )
              goto LABEL_359;
            Entity_40593204 = NpcFollowerMaster__GetEntity_40593204(
                                v788,
                                questId,
                                v802,
                                v475->fields._npcId_k__BackingField,
                                0LL);
            if ( Entity_40593204 )
            {
              v487 = Entity_40593204;
              if ( !v475->fields._npcImageSvtId_k__BackingField )
                v475->fields._npcImageSvtId_k__BackingField = NpcFollowerEntity__GetImageSvtId(Entity_40593204, 0LL);
              if ( (v475->fields._npcDispLimitCount_k__BackingField & 0x80000000) != 0 )
                v475->fields._npcDispLimitCount_k__BackingField = NpcFollowerEntity__GetDispLimitCnt(v487, -1, 0LL);
            }
            Instance = WarBoardPieceData__get_isPlayerGroup(v475, 0LL);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)v781;
              if ( !v781 )
                goto LABEL_359;
              Instance = DataMasterBase_object__object__long___TryGetEntity(
                           v781,
                           &v812,
                           v475->fields._npcId_k__BackingField,
                           (const MethodInfo_323ABCC *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
              if ( (Instance & 1) != 0 )
              {
                Instance = (__int64)v812;
                if ( !v812 )
                  goto LABEL_359;
                Instance = (__int64)NpcServantFollowerEntity__GetFollowerName_40596344(
                                      (NpcServantFollowerEntity_o *)v812,
                                      v475->fields._npcId_k__BackingField,
                                      questId,
                                      v802,
                                      &isChangeName,
                                      0LL);
                if ( isChangeName )
                {
                  Instance = (__int64)v475->fields._battleServant_k__BackingField;
                  if ( !Instance )
                    goto LABEL_359;
                  BattleServantData__ClearOverwriteServantName((BattleServantData_o *)Instance, 0LL);
                }
              }
            }
            if ( !v796 )
              goto LABEL_359;
            v494 = v796->fields._items;
            v495 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
            ++v796->fields._version;
            if ( !v494 )
              goto LABEL_359;
            v496 = v796->fields._size;
            if ( (unsigned int)v496 >= v494->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v796,
                (Il2CppObject *)v475,
                *(const MethodInfo_362D1CC **)(*(_QWORD *)(v495[4] + 192LL) + 112LL));
            }
            else
            {
              v497 = &v494->obj.klass + v496;
              v796->fields._size = v496 + 1;
              v497[4] = (Il2CppClass *)v475;
              sub_1C13CC8((PartyOrganizationUtility_o *)(v497 + 4), (int64_t)v475, v488, v489, v490, v491, v492, v493);
            }
            ++npcIdx;
          }
          else
          {
            WarBoardPieceData___ctor(v474, v470, v455, v456, v467, v476, v473, -1, 0LL);
            if ( !v475 )
              goto LABEL_359;
            Instance = WarBoardPieceData__get_isMaster(v475, 0LL);
            v298 = v807;
            v300 = layoutEntities;
            v296 = v796;
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)*p_masterExistsForce;
              if ( !*p_masterExistsForce )
                goto LABEL_359;
              Instance = System_Collections_Generic_List_int___Contains(
                           (System_Collections_Generic_List_int__o *)Instance,
                           v475->fields._forceId_k__BackingField,
                           (const MethodInfo_3610520 *)Method_System_Collections_Generic_List_int__Contains__);
              if ( (Instance & 1) == 0 )
              {
                Instance = (__int64)*p_masterExistsForce;
                if ( !*p_masterExistsForce )
                  goto LABEL_359;
                throughCondId = (unsigned int)v475->fields._forceId_k__BackingField;
                v483 = *(_QWORD *)(Instance + 16);
                v484 = Method_System_Collections_Generic_List_int__Add__;
                ++*(_DWORD *)(Instance + 28);
                if ( !v483 )
                  goto LABEL_359;
                v485 = *(int *)(Instance + 24);
                if ( (unsigned int)v485 >= *(_DWORD *)(v483 + 24) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    (System_Collections_Generic_List_int__o *)Instance,
                    throughCondId,
                    *(const MethodInfo_36101A8 **)(*(_QWORD *)(v484[4] + 192LL) + 112LL));
                }
                else
                {
                  *(_DWORD *)(Instance + 24) = v485 + 1;
                  *(_DWORD *)(v483 + 4 * v485 + 32) = throughCondId;
                }
              }
            }
            if ( !v796 )
              goto LABEL_359;
            v501 = v796->fields._items;
            v502 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
            ++v796->fields._version;
            if ( !v501 )
              goto LABEL_359;
            v503 = v796->fields._size;
            if ( (unsigned int)v503 >= v501->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v796,
                (Il2CppObject *)v475,
                *(const MethodInfo_362D1CC **)(*(_QWORD *)(v502[4] + 192LL) + 112LL));
            }
            else
            {
              v504 = &v501->obj.klass + v503;
              v796->fields._size = v503 + 1;
              v504[4] = (Il2CppClass *)v475;
              sub_1C13CC8((PartyOrganizationUtility_o *)(v504 + 4), (int64_t)v475, v477, v478, v479, v480, v481, v482);
            }
          }
          v299 = v797;
        }
        v505 = *v436;
        if ( !*v436 )
          goto LABEL_359;
        switch ( v505->fields.type )
        {
          case 2:
            getItemInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v298->fields.getItemInfo;
            v507 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardUserGetItemData__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v507,
              (Il2CppObject *)v428,
              Method_WarBoardData___c__DisplayClass77_4___ctor_b__14__,
              0LL);
            v508 = System_Linq_Enumerable__FirstOrDefault_object__50015312(
                     getItemInfo,
                     (System_Func_TSource__bool__o *)v507,
                     (const MethodInfo_2FB2C50 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
            v509 = *(WarBoardStageLayoutEntity_o **)(v428 + 16);
            v510 = (WarBoardUserGetItemData_o *)v508;
            v511 = (WarBoardItemData_o *)sub_1C13F70(WarBoardItemData_TypeInfo);
            WarBoardItemData___ctor(v511, v509, v510, 0LL);
            v512 = v787;
            if ( !v787 )
              goto LABEL_359;
            version = v787->fields._version;
            v514 = v787->fields._items;
            v515 = &Method_System_Collections_Generic_List_WarBoardItemData__Add__;
            goto LABEL_246;
          case 3:
            v511 = (WarBoardItemData_o *)sub_1C13F70(WarBoardEffectData_TypeInfo);
            WarBoardEffectData___ctor((WarBoardEffectData_o *)v511, v505, 0LL);
            v512 = v786;
            if ( !v786 )
              goto LABEL_359;
            version = v786->fields._version;
            v514 = v786->fields._items;
            v515 = &Method_System_Collections_Generic_List_WarBoardEffectData__Add__;
            goto LABEL_246;
          case 4:
            treasureInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v298->fields.treasureInfo;
            if ( !treasureInfo )
              goto LABEL_242;
            v517 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardUserTreasureData__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v517,
              (Il2CppObject *)v428,
              Method_WarBoardData___c__DisplayClass77_4___ctor_b__11__,
              0LL);
            Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__50015312(
                                  treasureInfo,
                                  (System_Func_TSource__bool__o *)v517,
                                  (const MethodInfo_2FB2C50 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserTreasureData___);
            if ( Instance )
              continue;
            v505 = *v436;
LABEL_242:
            v511 = (WarBoardItemData_o *)sub_1C13F70(WarBoardTreasureData_TypeInfo);
            WarBoardTreasureData___ctor((WarBoardTreasureData_o *)v511, v505, 0LL);
            v512 = v782;
            if ( !v782 )
              goto LABEL_359;
            version = v782->fields._version;
            v514 = v782->fields._items;
            v515 = &Method_System_Collections_Generic_List_WarBoardTreasureData__Add__;
LABEL_246:
            v523 = *v515;
            v512->fields._version = version + 1;
            if ( !v514 )
              goto LABEL_359;
            v524 = v512->fields._size;
            if ( (unsigned int)v524 < v514->max_length )
            {
              v525 = &v514->obj.klass + v524;
              v512->fields._size = v524 + 1;
              v525[4] = (Il2CppClass *)v511;
              v461 = (PartyOrganizationUtility_o *)(v525 + 4);
              v462 = (int64_t)v511;
              goto LABEL_249;
            }
            v498 = v523[4];
            v499 = v512;
            v500 = (Il2CppObject *)v511;
            break;
          case 5:
            wallInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v298->fields.wallInfo;
            v519 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardUserWallData__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v519,
              (Il2CppObject *)v428,
              Method_WarBoardData___c__DisplayClass77_4___ctor_b__15__,
              0LL);
            v520 = System_Linq_Enumerable__FirstOrDefault_object__50015312(
                     wallInfo,
                     (System_Func_TSource__bool__o *)v519,
                     (const MethodInfo_2FB2C50 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
            v521 = *(WarBoardStageLayoutEntity_o **)(v428 + 16);
            v522 = (WarBoardUserWallData_o *)v520;
            v511 = (WarBoardItemData_o *)sub_1C13F70(WarBoardWallData_TypeInfo);
            WarBoardWallData___ctor((WarBoardWallData_o *)v511, v521, v522, 0LL);
            v512 = v785;
            if ( !v785 )
              goto LABEL_359;
            version = v785->fields._version;
            v514 = v785->fields._items;
            v515 = &Method_System_Collections_Generic_List_WarBoardWallData__Add__;
            goto LABEL_246;
          default:
            continue;
        }
        goto LABEL_251;
      }
      if ( !v790 )
        goto LABEL_359;
      v457 = v790->fields._items;
      v458 = Method_System_Collections_Generic_List_WarBoardSquareData__Add__;
      ++v790->fields._version;
      if ( !v457 )
        goto LABEL_359;
      v459 = v790->fields._size;
      if ( (unsigned int)v459 < v457->max_length )
      {
        v460 = &v457->obj.klass + v459;
        v790->fields._size = v459 + 1;
        v460[4] = (Il2CppClass *)v438;
        v461 = (PartyOrganizationUtility_o *)(v460 + 4);
        v462 = (int64_t)v438;
LABEL_249:
        sub_1C13CC8(v461, v462, v439, v440, v441, v442, v443, v444);
        continue;
      }
      v498 = v458[4];
      v499 = v790;
      v500 = (Il2CppObject *)v438;
LABEL_251:
      System_Collections_Generic_List_object___AddWithResize(
        v499,
        v500,
        *(const MethodInfo_362D1CC **)(*(_QWORD *)(v498 + 192) + 112LL));
    }
    while ( (unsigned int)v808 != ++v427 );
  }
  if ( !v299 )
    goto LABEL_359;
  v526 = System_Collections_Generic_List_object___ToArray(
           v299,
           (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  v527 = v793;
  v793->fields.squares = (struct WarBoardSquareData_array *)v526;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v793->fields.squares, (int64_t)v526, v528, v529, v530, v531, v532, v533);
  Instance = (__int64)v790;
  if ( !v790 )
    goto LABEL_359;
  v534 = System_Collections_Generic_List_object___ToArray(
           v790,
           (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  v793->fields.condSquares = (struct WarBoardSquareData_array *)v534;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&v793->fields.condSquares,
    (int64_t)v534,
    v535,
    v536,
    v537,
    v538,
    v539,
    v540);
  if ( !v296 )
    goto LABEL_359;
  v541 = System_Collections_Generic_List_object___ToArray(
           v296,
           (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  v793->fields.pieces = (struct WarBoardPieceData_array *)v541;
  p_pieces = (System_Collections_Generic_IEnumerable_T__o **)&v793->fields.pieces;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v793->fields.pieces, (int64_t)v541, v543, v544, v545, v546, v547, v548);
  pieces = (System_Object_array *)v793->fields.pieces;
  v550 = (System_Comparison_T__o *)sub_1C13F70(System_Comparison_WarBoardPieceData__TypeInfo);
  System_Comparison_object____ctor(v550, (Il2CppObject *)v793, Method_WarBoardData_ComparePiece__, 0LL);
  System_Array__Sort_object__49663660(
    pieces,
    v550,
    (const MethodInfo_2F5CEAC *)Method_System_Array_Sort_WarBoardPieceData___);
  Instance = (__int64)v787;
  if ( !v787 )
    goto LABEL_359;
  v551 = System_Collections_Generic_List_object___ToArray(
           v787,
           (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_WarBoardItemData__ToArray__);
  v793->fields.items = (struct WarBoardItemData_array *)v551;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v793->fields.items, (int64_t)v551, v552, v553, v554, v555, v556, v557);
  Instance = (__int64)v782;
  if ( !v782 )
    goto LABEL_359;
  v558 = System_Collections_Generic_List_object___ToArray(
           v782,
           (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_WarBoardTreasureData__ToArray__);
  v793->fields.treasures = (struct WarBoardTreasureData_array *)v558;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v793->fields.treasures, (int64_t)v558, v559, v560, v561, v562, v563, v564);
  Instance = (__int64)v786;
  if ( !v786 )
    goto LABEL_359;
  v565 = System_Collections_Generic_List_object___ToArray(
           v786,
           (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_WarBoardEffectData__ToArray__);
  v793->fields.effects = (struct WarBoardEffectData_array *)v565;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v793->fields.effects, (int64_t)v565, v566, v567, v568, v569, v570, v571);
  Instance = (__int64)v785;
  if ( !v785 )
    goto LABEL_359;
  v572 = System_Collections_Generic_List_object___ToArray(
           v785,
           (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_WarBoardWallData__ToArray__);
  v793->fields.walls = (struct WarBoardWallData_array *)v572;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v793->fields.walls, (int64_t)v572, v573, v574, v575, v576, v577, v578);
  v793->fields.serverData = v298;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v793->fields.serverData, (int64_t)v298, v579, v580, v581, v582, v583, v584);
  if ( v298->fields.progressType == 3 )
    WarBoardData__InitPrevCondData(v793, (const MethodInfo *)throughCondId);
  v585 = v793->fields.localSaveData;
  if ( v585 )
  {
    v586 = v585->fields.pieceSaves;
    roadEntitiesb = (WarBoardRoadEntity_array *)&v793->fields.localSaveData;
    if ( v586 )
    {
      if ( (int)v586->max_length >= 1 )
      {
        v587 = 0LL;
        do
        {
          v588 = sub_1C13F70(WarBoardData___c__DisplayClass77_5_TypeInfo);
          WarBoardData___c__DisplayClass77_5___ctor((WarBoardData___c__DisplayClass77_5_o *)v588, 0LL);
          if ( v587 >= v586->max_length )
            goto LABEL_360;
          if ( !v588 )
            goto LABEL_359;
          v595 = (int64_t)v586->m_Items[v587];
          *(_QWORD *)(v588 + 16) = v595;
          v596 = (WarBoardPieceData_SaveData_o **)(v588 + 16);
          sub_1C13CC8((PartyOrganizationUtility_o *)(v588 + 16), v595, v589, v590, v591, v592, v593, v594);
          v597 = *p_pieces;
          v598 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardPieceData__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v598,
            (Il2CppObject *)v588,
            Method_WarBoardData___c__DisplayClass77_5___ctor_b__16__,
            0LL);
          if ( !BasicHelper__Any_object__49783940(
                  (System_Object_array *)v597,
                  (System_Func_T__bool__o *)v598,
                  (const MethodInfo_2F7A484 *)Method_BasicHelper_Any_WarBoardPieceData___) )
          {
            v599 = (System_Collections_Generic_IEnumerable_TSource__o *)v298->fields.svtInfo;
            v600 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardUserServantData__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v600,
              (Il2CppObject *)v588,
              Method_WarBoardData___c__DisplayClass77_5___ctor_b__17__,
              0LL);
            v601 = System_Linq_Enumerable__FirstOrDefault_object__50015312(
                     v599,
                     (System_Func_TSource__bool__o *)v600,
                     (const MethodInfo_2FB2C50 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
            v602 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v602,
              (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
            if ( !v602 )
              goto LABEL_359;
            System_Collections_Generic_List_object___AddRange(
              v602,
              *p_pieces,
              (const MethodInfo_362D3D8 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
            if ( !p_fields->stageEntity )
              goto LABEL_359;
            id = p_fields->stageEntity->fields.id;
            v604 = *v596;
            v605 = (WarBoardPieceData_o *)sub_1C13F70(WarBoardPieceData_TypeInfo);
            WarBoardPieceData___ctor_36654708(v605, id, (WarBoardUserServantData_o *)v601, v604, 0LL, -1, 0LL);
            v612 = v602->fields._items;
            v613 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
            ++v602->fields._version;
            if ( !v612 )
              goto LABEL_359;
            v614 = v602->fields._size;
            if ( (unsigned int)v614 >= v612->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v602,
                (Il2CppObject *)v605,
                *(const MethodInfo_362D1CC **)(*(_QWORD *)(v613[4] + 192LL) + 112LL));
            }
            else
            {
              v615 = &v612->obj.klass + v614;
              v602->fields._size = v614 + 1;
              v615[4] = (Il2CppClass *)v605;
              sub_1C13CC8((PartyOrganizationUtility_o *)(v615 + 4), (int64_t)v605, v606, v607, v608, v609, v610, v611);
            }
            v298 = v807;
            v616 = System_Collections_Generic_List_object___ToArray(
                     v602,
                     (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
            *p_pieces = (System_Collections_Generic_IEnumerable_T__o *)v616;
            sub_1C13CC8((PartyOrganizationUtility_o *)p_pieces, (int64_t)v616, v617, v618, v619, v620, v621, v622);
            v527 = v793;
          }
          Instance = (__int64)*v596;
          if ( !*v596 )
            goto LABEL_359;
          WarBoardPieceData_SaveData__SetOwner((WarBoardPieceData_SaveData_o *)Instance, v527, 0LL);
          Instance = (__int64)*v596;
          if ( !*v596 )
            goto LABEL_359;
          WarBoardPieceData_SaveData__Load((WarBoardPieceData_SaveData_o *)Instance, 0LL);
        }
        while ( (__int64)++v587 < (int)v586->max_length );
      }
      if ( roadEntitiesb->obj.klass )
      {
        v623 = *(_QWORD *)&roadEntitiesb->obj.klass->_1.byval_arg.bits;
        if ( v623 )
        {
          v624 = *(_DWORD *)(v623 + 24);
          if ( v624 >= 1 )
          {
            v625 = 0;
            while ( v625 < v624 )
            {
              v626 = v623 + 8LL * (int)v625;
              v627 = *(WarBoardItemData_SaveData_o **)(v626 + 32);
              if ( !v627 )
                goto LABEL_359;
              WarBoardItemData_SaveData__SetOwner(*(WarBoardItemData_SaveData_o **)(v626 + 32), v527, 0LL);
              WarBoardItemData_SaveData__Load(v627, 0LL);
              v624 = *(_DWORD *)(v623 + 24);
              if ( (int)++v625 >= v624 )
                goto LABEL_286;
            }
            goto LABEL_360;
          }
LABEL_286:
          if ( roadEntitiesb->obj.klass )
          {
            data = roadEntitiesb->obj.klass->_1.this_arg.data;
            if ( data )
            {
              v629 = data[6];
              if ( v629 >= 1 )
              {
                v630 = 0;
                while ( v630 < v629 )
                {
                  v631 = (char *)&data[2 * v630];
                  v632 = (WarBoardTreasureData_SaveData_o *)*((_QWORD *)v631 + 4);
                  if ( !v632 )
                    goto LABEL_359;
                  WarBoardTreasureData_SaveData__SetOwner(*((WarBoardTreasureData_SaveData_o **)v631 + 4), v527, 0LL);
                  WarBoardTreasureData_SaveData__Load(v632, 0LL);
                  v629 = data[6];
                  if ( (int)++v630 >= v629 )
                    goto LABEL_293;
                }
                goto LABEL_360;
              }
LABEL_293:
              if ( roadEntitiesb->obj.klass )
              {
                v633 = *(_QWORD *)&roadEntitiesb->obj.klass->_1.this_arg.bits;
                if ( v633 )
                {
                  v634 = *(_DWORD *)(v633 + 24);
                  if ( v634 >= 1 )
                  {
                    v635 = 0;
                    while ( v635 < v634 )
                    {
                      v636 = v633 + 8LL * (int)v635;
                      v637 = *(WarBoardWallData_SaveData_o **)(v636 + 32);
                      if ( !v637 )
                        goto LABEL_359;
                      WarBoardWallData_SaveData__SetOwner(*(WarBoardWallData_SaveData_o **)(v636 + 32), v527, 0LL);
                      WarBoardWallData_SaveData__Load(v637, 0LL);
                      v634 = *(_DWORD *)(v633 + 24);
                      if ( (int)++v635 >= v634 )
                        goto LABEL_300;
                    }
                    goto LABEL_360;
                  }
LABEL_300:
                  if ( roadEntitiesb->obj.klass )
                  {
                    element_class = roadEntitiesb->obj.klass->_1.element_class;
                    if ( element_class )
                    {
                      namespaze = (int)element_class->_1.namespaze;
                      if ( namespaze >= 1 )
                      {
                        v640 = 0;
                        while ( v640 < namespaze )
                        {
                          v641 = &element_class->_1.image + (int)v640;
                          v642 = (WarBoardSquareData_SaveData_o *)v641[4];
                          if ( !v642 )
                            goto LABEL_359;
                          WarBoardSquareData_SaveData__SetOwner((WarBoardSquareData_SaveData_o *)v641[4], v527, 0LL);
                          WarBoardSquareData_SaveData__Load(v642, 0LL);
                          namespaze = (int)element_class->_1.namespaze;
                          if ( (int)++v640 >= namespaze )
                            goto LABEL_307;
                        }
                        goto LABEL_360;
                      }
LABEL_307:
                      if ( roadEntitiesb->obj.klass )
                      {
                        v527->fields.isPlayedHalfDeadMessage = (bool)roadEntitiesb->obj.klass->_1.interopData;
                        v643 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WarBoardEventData__TypeInfo);
                        System_Collections_Generic_List_object____ctor(
                          v643,
                          (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_WarBoardEventData___ctor__);
                        v527->fields.listEvent = (struct System_Collections_Generic_List_WarBoardEventData__o *)v643;
                        sub_1C13CC8(
                          (PartyOrganizationUtility_o *)p_listEvent,
                          (int64_t)v643,
                          v644,
                          v645,
                          v646,
                          v647,
                          v648,
                          v649);
                        v656 = v527->fields.localSaveData;
                        if ( v656 )
                        {
                          eventSaves = v656->fields.eventSaves;
                          if ( eventSaves )
                          {
                            v658 = *(_QWORD *)&eventSaves->max_length;
                            if ( (int)v658 >= 1 )
                            {
                              v659 = 0LL;
                              while ( v659 < (unsigned int)v658 )
                              {
                                v660 = eventSaves->m_Items[v659];
                                v661 = (System_Collections_Generic_List_object__o *)*p_listEvent;
                                v662 = (WarBoardEventData_o *)sub_1C13F70(WarBoardEventData_TypeInfo);
                                WarBoardEventData___ctor_36644948(v662, v660, 0LL);
                                if ( !v661 )
                                  goto LABEL_359;
                                v669 = v661->fields._items;
                                v670 = Method_System_Collections_Generic_List_WarBoardEventData__Add__;
                                ++v661->fields._version;
                                if ( !v669 )
                                  goto LABEL_359;
                                v671 = v661->fields._size;
                                if ( (unsigned int)v671 >= v669->max_length )
                                {
                                  System_Collections_Generic_List_object___AddWithResize(
                                    v661,
                                    (Il2CppObject *)v662,
                                    *(const MethodInfo_362D1CC **)(*(_QWORD *)(v670[4] + 192LL) + 112LL));
                                }
                                else
                                {
                                  v672 = &v669->obj.klass + v671;
                                  v661->fields._size = v671 + 1;
                                  v672[4] = (Il2CppClass *)v662;
                                  sub_1C13CC8(
                                    (PartyOrganizationUtility_o *)(v672 + 4),
                                    (int64_t)v662,
                                    v663,
                                    v664,
                                    v665,
                                    v666,
                                    v667,
                                    v668);
                                }
                                LODWORD(v658) = eventSaves->max_length;
                                if ( (__int64)++v659 >= (int)v658 )
                                  goto LABEL_319;
                              }
                              goto LABEL_360;
                            }
LABEL_319:
                            v673 = roadEntitiesb->obj.klass;
                            if ( roadEntitiesb->obj.klass )
                            {
                              v793->fields.winCondId = (int32_t)v673->_1.fields;
                              typeHierarchy = (int64_t)v673->_2.typeHierarchy;
                              v793->fields.latestPieceActionSquareIndexes = (struct System_Int32_array *)typeHierarchy;
                              sub_1C13CC8(
                                (PartyOrganizationUtility_o *)p_latestPieceActionSquareIndexes,
                                typeHierarchy,
                                v650,
                                v651,
                                v652,
                                v653,
                                v654,
                                v655);
                              v681 = v793->fields.localSaveData;
                              if ( v681 )
                              {
                                latestBattlePieceUniqueIndexes = (int64_t)v681->fields.latestBattlePieceUniqueIndexes;
                                p_latestBattlePieceUniqueIndexes->klass = (PartyOrganizationUtility_c *)latestBattlePieceUniqueIndexes;
                                sub_1C13CC8(
                                  p_latestBattlePieceUniqueIndexes,
                                  latestBattlePieceUniqueIndexes,
                                  v675,
                                  v676,
                                  v677,
                                  v678,
                                  v679,
                                  v680);
                                v683 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WarBoardPrevCondData__TypeInfo);
                                System_Collections_Generic_List_object____ctor(
                                  v683,
                                  (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_WarBoardPrevCondData___ctor__);
                                p_listPrevCond->klass = (PartyOrganizationUtility_c *)v683;
                                sub_1C13CC8(p_listPrevCond, (int64_t)v683, v684, v685, v686, v687, v688, v689);
                                if ( roadEntitiesb->obj.klass )
                                {
                                  properties = roadEntitiesb->obj.klass->_1.properties;
                                  if ( properties )
                                  {
                                    v691 = properties[3];
                                    if ( (int)v691 >= 1 )
                                    {
                                      v692 = 0LL;
                                      while ( v692 < (unsigned int)v691 )
                                      {
                                        v693 = (WarBoardPrevCondData_SaveData_o *)properties[v692 + 4];
                                        v694 = (System_Collections_Generic_List_object__o *)p_listPrevCond->klass;
                                        v695 = (WarBoardPrevCondData_o *)sub_1C13F70(WarBoardPrevCondData_TypeInfo);
                                        WarBoardPrevCondData___ctor_36671820(v695, v693, 0LL);
                                        if ( !v694 )
                                          goto LABEL_359;
                                        v702 = v694->fields._items;
                                        v703 = Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__;
                                        ++v694->fields._version;
                                        if ( !v702 )
                                          goto LABEL_359;
                                        v704 = v694->fields._size;
                                        if ( (unsigned int)v704 >= v702->max_length )
                                        {
                                          System_Collections_Generic_List_object___AddWithResize(
                                            v694,
                                            (Il2CppObject *)v695,
                                            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v703[4] + 192LL) + 112LL));
                                        }
                                        else
                                        {
                                          v705 = &v702->obj.klass + v704;
                                          v694->fields._size = v704 + 1;
                                          v705[4] = (Il2CppClass *)v695;
                                          sub_1C13CC8(
                                            (PartyOrganizationUtility_o *)(v705 + 4),
                                            (int64_t)v695,
                                            v696,
                                            v697,
                                            v698,
                                            v699,
                                            v700,
                                            v701);
                                        }
                                        LODWORD(v691) = *((_DWORD *)properties + 6);
                                        if ( (__int64)++v692 >= (int)v691 )
                                          goto LABEL_332;
                                      }
                                      goto LABEL_360;
                                    }
LABEL_332:
                                    v706 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_HoldReinforcementsData__TypeInfo);
                                    System_Collections_Generic_List_object____ctor(
                                      v706,
                                      (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_HoldReinforcementsData___ctor__);
                                    p_reinforcementsSaveList->klass = (PartyOrganizationUtility_c *)v706;
                                    sub_1C13CC8(
                                      p_reinforcementsSaveList,
                                      (int64_t)v706,
                                      v707,
                                      v708,
                                      v709,
                                      v710,
                                      v711,
                                      v712);
                                    if ( roadEntitiesb->obj.klass )
                                    {
                                      methods = roadEntitiesb->obj.klass->_1.methods;
                                      if ( methods )
                                      {
                                        v714 = methods[3];
                                        if ( (int)v714 >= 1 )
                                        {
                                          v715 = 0LL;
                                          while ( v715 < (unsigned int)v714 )
                                          {
                                            v716 = (HoldReinforcementsData_SaveData_o *)methods[v715 + 4];
                                            v717 = (System_Collections_Generic_List_object__o *)p_reinforcementsSaveList->klass;
                                            v718 = (HoldReinforcementsData_o *)sub_1C13F70(HoldReinforcementsData_TypeInfo);
                                            HoldReinforcementsData___ctor_36672020(v718, v716, 0LL);
                                            if ( !v717 )
                                              goto LABEL_359;
                                            v725 = v717->fields._items;
                                            v726 = Method_System_Collections_Generic_List_HoldReinforcementsData__Add__;
                                            ++v717->fields._version;
                                            if ( !v725 )
                                              goto LABEL_359;
                                            v727 = v717->fields._size;
                                            if ( (unsigned int)v727 >= v725->max_length )
                                            {
                                              System_Collections_Generic_List_object___AddWithResize(
                                                v717,
                                                (Il2CppObject *)v718,
                                                *(const MethodInfo_362D1CC **)(*(_QWORD *)(v726[4] + 192LL) + 112LL));
                                            }
                                            else
                                            {
                                              v728 = &v725->obj.klass + v727;
                                              v717->fields._size = v727 + 1;
                                              v728[4] = (Il2CppClass *)v718;
                                              sub_1C13CC8(
                                                (PartyOrganizationUtility_o *)(v728 + 4),
                                                (int64_t)v718,
                                                v719,
                                                v720,
                                                v721,
                                                v722,
                                                v723,
                                                v724);
                                            }
                                            LODWORD(v714) = *((_DWORD *)methods + 6);
                                            if ( (__int64)++v715 >= (int)v714 )
                                              goto LABEL_343;
                                          }
                                          goto LABEL_360;
                                        }
LABEL_343:
                                        if ( roadEntitiesb->obj.klass )
                                        {
                                          v729 = System_Linq_Enumerable__ToList_int_(
                                                   (System_Collections_Generic_IEnumerable_TSource__o *)roadEntitiesb->obj.klass->_1.nestedTypes,
                                                   (const MethodInfo_2FCC824 *)Method_System_Linq_Enumerable_ToList_int___);
                                          p_playedStageReinforcementsList->klass = (PartyOrganizationUtility_c *)v729;
                                          sub_1C13CC8(
                                            p_playedStageReinforcementsList,
                                            (int64_t)v729,
                                            v730,
                                            v731,
                                            v732,
                                            v733,
                                            v734,
                                            v735);
                                          v736 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WarBoardUiData__TypeInfo);
                                          System_Collections_Generic_List_object____ctor(
                                            v736,
                                            (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_WarBoardUiData___ctor__);
                                          p_listUiData->klass = (PartyOrganizationUtility_c *)v736;
                                          sub_1C13CC8(p_listUiData, (int64_t)v736, v737, v738, v739, v740, v741, v742);
                                          if ( roadEntitiesb->obj.klass )
                                          {
                                            implementedInterfaces = roadEntitiesb->obj.klass->_1.implementedInterfaces;
                                            if ( implementedInterfaces )
                                            {
                                              v750 = implementedInterfaces[3];
                                              if ( (int)v750 >= 1 )
                                              {
                                                v751 = 0LL;
                                                while ( v751 < (unsigned int)v750 )
                                                {
                                                  v752 = (WarBoardUiData_SaveData_o *)implementedInterfaces[v751 + 4];
                                                  v753 = (System_Collections_Generic_List_object__o *)p_listUiData->klass;
                                                  v754 = (WarBoardUiData_o *)sub_1C13F70(WarBoardUiData_TypeInfo);
                                                  WarBoardUiData___ctor_36678440(v754, v752, 0LL);
                                                  if ( !v753 )
                                                    goto LABEL_359;
                                                  v761 = v753->fields._items;
                                                  v762 = Method_System_Collections_Generic_List_WarBoardUiData__Add__;
                                                  ++v753->fields._version;
                                                  if ( !v761 )
                                                    goto LABEL_359;
                                                  v763 = v753->fields._size;
                                                  if ( (unsigned int)v763 >= v761->max_length )
                                                  {
                                                    System_Collections_Generic_List_object___AddWithResize(
                                                      v753,
                                                      (Il2CppObject *)v754,
                                                      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v762[4] + 192LL) + 112LL));
                                                  }
                                                  else
                                                  {
                                                    v764 = &v761->obj.klass + v763;
                                                    v753->fields._size = v763 + 1;
                                                    v764[4] = (Il2CppClass *)v754;
                                                    sub_1C13CC8(
                                                      (PartyOrganizationUtility_o *)(v764 + 4),
                                                      (int64_t)v754,
                                                      v755,
                                                      v756,
                                                      v757,
                                                      v758,
                                                      v759,
                                                      v760);
                                                  }
                                                  LODWORD(v750) = *((_DWORD *)implementedInterfaces + 6);
                                                  if ( (__int64)++v751 >= (int)v750 )
                                                    goto LABEL_355;
                                                }
                                                goto LABEL_360;
                                              }
LABEL_355:
                                              if ( roadEntitiesb->obj.klass )
                                              {
                                                interfaceOffsets = (int64_t)roadEntitiesb->obj.klass->_1.interfaceOffsets;
                                                p_bgAnimationInfo_k__BackingField->klass = (PartyOrganizationUtility_c *)interfaceOffsets;
                                                sub_1C13CC8(
                                                  p_bgAnimationInfo_k__BackingField,
                                                  interfaceOffsets,
                                                  v743,
                                                  v744,
                                                  v745,
                                                  v746,
                                                  v747,
                                                  v748);
                                                v766 = roadEntitiesb->obj.klass;
                                                if ( roadEntitiesb->obj.klass )
                                                {
                                                  v793->fields._ContinueConsumeType_k__BackingField = HIDWORD(v766->_2.unity_user_data);
                                                  v793->fields._IsContinue_k__BackingField = v766->_2.initializationExceptionGCHandle;
                                                  v793->fields._IsNextTurn_k__BackingField = BYTE1(v766->_2.initializationExceptionGCHandle);
                                                  v793->fields.localSaveTiming = (int32_t)v766->_2.unity_user_data;
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
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_359:
    sub_1C13F80(Instance, throughCondId);
  }
  v767 = (WarBoardData_WarBoardLocalSaveData_o *)sub_1C13F70(WarBoardData_WarBoardLocalSaveData_TypeInfo);
  WarBoardData_WarBoardLocalSaveData___ctor_36631940(v767, v793, 0LL);
  v793->fields.localSaveData = v767;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&v793->fields.localSaveData,
    (int64_t)v767,
    v768,
    v769,
    v770,
    v771,
    v772,
    v773);
}


void __fastcall WarBoardData__AddPlayedEventData(
        WarBoardData_o *this,
        WarBoardEventData_o *eventData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_Collections_Generic_List_object__o *listEvent; // x0
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4BB22DF & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardEventData__Add__, eventData);
    byte_4BB22DF = 1;
  }
  listEvent = (System_Collections_Generic_List_object__o *)this->fields.listEvent;
  if ( !listEvent
    || (items = listEvent->fields._items,
        v12 = Method_System_Collections_Generic_List_WarBoardEventData__Add__,
        ++listEvent->fields._version,
        !items) )
  {
    sub_1C13F80(listEvent, eventData);
  }
  size = listEvent->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      listEvent,
      (Il2CppObject *)eventData,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    listEvent->fields._size = size + 1;
    v14[4] = (Il2CppClass *)eventData;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v14 + 4), (int64_t)eventData, (int64_t)method, v3, v4, v5, v6, v7);
  }
}


WarBoardPieceData_array *__fastcall WarBoardData__AddReinforcementPieces(
        WarBoardData_o *this,
        WarBoardDataEntity_o *serverData,
        WarBoardUserServantData_array *reinfoSvtInfo,
        System_Int32_array *indexList,
        WarBoardStageReinforcementsEntity_o *reinfoStage,
        const MethodInfo *method)
{
  WarBoardDataEntity_o *v9; // x25
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
  Il2CppObject *Master_object; // x24
  int64_t Instance; // x0
  __int64 v29; // x1
  Il2CppObject *v30; // x28
  System_Collections_Generic_List_object__o *v31; // x19
  __int64 v32; // x8
  unsigned __int64 v33; // x27
  WarBoardUserServantData_o *v34; // x26
  struct System_Int32_array *reinforcementsIds; // x8
  struct System_Int32_array *v36; // x8
  __int64 v37; // x9
  WarBoardStagePieceDetailMaster_o *v38; // x19
  WarBoardDataEntity_o *v39; // x22
  WarBoardReinforcementsEntity_o *v40; // x25
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *npcEntityDict; // x20
  WarBoardStageReinforcementsEntity_o *v42; // x24
  int32_t v43; // w28
  int32_t v44; // w21
  WarBoardPieceData_o *v45; // x23
  NpcFollowerEntity_o *Entity_40593204; // x0
  NpcFollowerEntity_o *v47; // x20
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
  struct WarBoardPieceData_array **p_pieces; // x20
  System_Object_array *v59; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  int64_t svtInfo; // x1
  __int64 v73; // x21
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x22
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  unsigned __int64 v81; // x23
  __int64 v82; // x26
  __int64 v83; // x27
  struct WarBoardData_WarBoardLocalSaveData_o *v84; // x8
  struct WarBoardPieceData_array *v85; // x9
  unsigned int *pieceSaves; // x28
  WarBoardPieceData_o *v87; // x22
  WarBoardPieceData_SaveData_o *v88; // x21
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  __int64 v96; // x0
  System_Collections_Generic_List_object__o *v97; // [xsp+10h] [xbp-D0h]
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+18h] [xbp-C8h]
  System_Int32_array *v99; // [xsp+20h] [xbp-C0h]
  Il2CppObject *v100; // [xsp+28h] [xbp-B8h]
  WarBoardUserServantData_array *v101; // [xsp+30h] [xbp-B0h]
  NpcFollowerMaster_o *v102; // [xsp+38h] [xbp-A8h]
  System_Collections_Generic_List_object__o *v103; // [xsp+40h] [xbp-A0h]
  WarBoardUserServantData_o **m_Items; // [xsp+48h] [xbp-98h]
  int32_t questPhase; // [xsp+50h] [xbp-90h]
  int32_t questId; // [xsp+54h] [xbp-8Ch]
  int32_t *v107; // [xsp+58h] [xbp-88h]
  bool isChangeName; // [xsp+64h] [xbp-7Ch] BYREF
  Il2CppObject *v109; // [xsp+68h] [xbp-78h] BYREF
  WarBoardStagePieceDetailEntity_o *v110; // [xsp+70h] [xbp-70h] BYREF
  WarBoardReinforcementsEntity_o *entity; // [xsp+78h] [xbp-68h] BYREF

  v9 = serverData;
  if ( (byte_4BB22DD & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___, serverData);
    sub_1C13D24(&Method_DataManager_GetMaster_NpcFollowerMaster___, v11);
    sub_1C13D24(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___, v12);
    sub_1C13D24(&Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___, v13);
    sub_1C13D24(&DataManager_TypeInfo, v14);
    sub_1C13D24(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__, v15);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__, v16);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, v17);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__RemoveAt__, v18);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__, v19);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v20);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__get_Item__, v21);
    sub_1C13D24(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v22);
    sub_1C13D24(&WarBoardPieceData_SaveData___TypeInfo, v23);
    sub_1C13D24(&WarBoardPieceData_SaveData_TypeInfo, v24);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1C13D24(&WarBoardPieceData_TypeInfo, v26);
    byte_4BB22DD = 1;
  }
  v110 = 0LL;
  entity = 0LL;
  v109 = 0LL;
  isChangeName = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  v30 = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v102 = (NpcFollowerMaster_o *)Instance;
  if ( !v9 )
    goto LABEL_69;
  questPhase = v9->fields.questPhase;
  questId = v9->fields.questId;
  v97 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v97,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v31 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( !reinfoSvtInfo )
    goto LABEL_69;
  v32 = *(_QWORD *)&reinfoSvtInfo->max_length;
  v103 = v31;
  if ( (int)v32 >= 1 )
  {
    v33 = 0LL;
    v107 = &indexList->m_Items[1];
    m_Items = reinfoSvtInfo->m_Items;
    v100 = Master_object;
    v101 = reinfoSvtInfo;
    v99 = indexList;
    do
    {
      if ( v33 >= (unsigned int)v32 )
LABEL_70:
        sub_1C13F88(Instance, v29);
      v34 = m_Items[v33];
      if ( v34 )
      {
        if ( !reinfoStage || !indexList )
          goto LABEL_69;
      }
      else
      {
        if ( !reinfoStage )
          goto LABEL_69;
        reinforcementsIds = reinfoStage->fields.reinforcementsIds;
        if ( !reinforcementsIds || !indexList )
          goto LABEL_69;
        if ( v33 >= indexList->max_length )
          goto LABEL_70;
        if ( v107[v33] < (signed int)reinforcementsIds->max_length )
          goto LABEL_52;
      }
      if ( v33 >= indexList->max_length )
        goto LABEL_70;
      v36 = reinfoStage->fields.reinforcementsIds;
      if ( !v36 )
        goto LABEL_69;
      v37 = v107[v33];
      if ( (unsigned int)v37 >= v36->max_length )
        goto LABEL_70;
      if ( !Master_object )
        goto LABEL_69;
      v38 = (WarBoardStagePieceDetailMaster_o *)v30;
      v39 = v9;
      WarBoardReinforcementsMaster__TryGetEntity(
        (WarBoardReinforcementsMaster_o *)Master_object,
        &entity,
        v36->m_Items[v37 + 1],
        0LL);
      Instance = (int64_t)this->fields.reinforcementsAppointmentSquareList;
      if ( !Instance )
        goto LABEL_69;
      v40 = entity;
      npcEntityDict = this->fields.npcEntityDict;
      v42 = reinfoStage;
      Instance = System_Collections_Generic_List_int___get_Item(
                   (System_Collections_Generic_List_int__o *)Instance,
                   0,
                   (const MethodInfo_360FEB8 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( v33 >= indexList->max_length )
        goto LABEL_70;
      v43 = Instance;
      v44 = v107[v33];
      v45 = (WarBoardPieceData_o *)sub_1C13F70(WarBoardPieceData_TypeInfo);
      WarBoardPieceData___ctor_36653500(v45, v42, v40, v34, npcEntityDict, v33, v43, v44, 0LL);
      Instance = (int64_t)this->fields.reinforcementsAppointmentSquareList;
      if ( !Instance )
        goto LABEL_69;
      System_Collections_Generic_List_int___RemoveAt(
        (System_Collections_Generic_List_int__o *)Instance,
        0,
        (const MethodInfo_3611928 *)Method_System_Collections_Generic_List_int__RemoveAt__);
      if ( !v45 )
        goto LABEL_69;
      v30 = (Il2CppObject *)v38;
      if ( !v38 )
        goto LABEL_69;
      v9 = v39;
      Instance = WarBoardStagePieceDetailMaster__TryGetEntity(
                   v38,
                   &v110,
                   v39->fields.stageId,
                   v45->fields._forceId_k__BackingField,
                   v45->fields._groupId_k__BackingField,
                   v45->fields._index_k__BackingField,
                   0LL);
      if ( (Instance & 1) != 0 )
      {
        Instance = (int64_t)v110;
        if ( !v110 )
          goto LABEL_69;
        v45->fields._npcImageSvtId_k__BackingField = WarBoardStagePieceDetailEntity__GetImageSvtId(v110, 0LL);
        Instance = (int64_t)v110;
        if ( !v110 )
          goto LABEL_69;
        Instance = WarBoardStagePieceDetailEntity__GetDispLimitCnt(v110, 0LL);
        v45->fields._npcDispLimitCount_k__BackingField = Instance;
      }
      if ( !v102 )
        goto LABEL_69;
      Entity_40593204 = NpcFollowerMaster__GetEntity_40593204(
                          v102,
                          questId,
                          questPhase,
                          v45->fields._npcId_k__BackingField,
                          0LL);
      if ( Entity_40593204 )
      {
        v47 = Entity_40593204;
        if ( !v45->fields._npcImageSvtId_k__BackingField )
          v45->fields._npcImageSvtId_k__BackingField = NpcFollowerEntity__GetImageSvtId(Entity_40593204, 0LL);
        if ( (v45->fields._npcDispLimitCount_k__BackingField & 0x80000000) != 0 )
          v45->fields._npcDispLimitCount_k__BackingField = NpcFollowerEntity__GetDispLimitCnt(v47, -1, 0LL);
      }
      Instance = WarBoardPieceData__get_isPlayerGroup(v45, 0LL);
      if ( (Instance & 1) != 0 )
      {
        Instance = (int64_t)MasterData_object;
        if ( !MasterData_object )
          goto LABEL_69;
        Instance = DataMasterBase_object__object__long___TryGetEntity(
                     MasterData_object,
                     &v109,
                     v45->fields._npcId_k__BackingField,
                     (const MethodInfo_323ABCC *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
        if ( (Instance & 1) != 0 )
        {
          Instance = (int64_t)v109;
          if ( !v109 )
            goto LABEL_69;
          Instance = (int64_t)NpcServantFollowerEntity__GetFollowerName_40596344(
                                (NpcServantFollowerEntity_o *)v109,
                                v45->fields._npcId_k__BackingField,
                                questId,
                                questPhase,
                                &isChangeName,
                                0LL);
          if ( isChangeName )
          {
            Instance = (int64_t)v45->fields._battleServant_k__BackingField;
            if ( !Instance )
              goto LABEL_69;
            BattleServantData__ClearOverwriteServantName((BattleServantData_o *)Instance, 0LL);
          }
        }
      }
      if ( !v103 )
        goto LABEL_69;
      items = v103->fields._items;
      v55 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
      ++v103->fields._version;
      if ( !items )
        goto LABEL_69;
      size = v103->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v103,
          (Il2CppObject *)v45,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
      }
      else
      {
        v57 = &items->obj.klass + size;
        v103->fields._size = size + 1;
        v57[4] = (Il2CppClass *)v45;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v57 + 4), (int64_t)v45, v48, v49, v50, v51, v52, v53);
      }
      reinfoStage = v42;
      indexList = v99;
      Master_object = v100;
      reinfoSvtInfo = v101;
LABEL_52:
      LODWORD(v32) = reinfoSvtInfo->max_length;
    }
    while ( (__int64)++v33 < (int)v32 );
  }
  if ( !v97 )
    goto LABEL_69;
  p_pieces = &this->fields.pieces;
  System_Collections_Generic_List_object___AddRange(
    v97,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.pieces,
    (const MethodInfo_362D3D8 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v97,
    (System_Collections_Generic_IEnumerable_T__o *)v103,
    (const MethodInfo_362D3D8 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
  v59 = System_Collections_Generic_List_object___ToArray(
          v97,
          (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  this->fields.pieces = (struct WarBoardPieceData_array *)v59;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.pieces, (int64_t)v59, v60, v61, v62, v63, v64, v65);
  Instance = (int64_t)this->fields.serverData;
  if ( !Instance
    || (svtInfo = (int64_t)v9->fields.svtInfo,
        *(_QWORD *)(Instance + 16) = svtInfo,
        sub_1C13CC8((PartyOrganizationUtility_o *)(Instance + 16), svtInfo, v66, v67, v68, v69, v70, v71),
        !*p_pieces)
    || (v73 = *(_QWORD *)&(*p_pieces)->max_length,
        localSaveData = this->fields.localSaveData,
        Instance = sub_1C13DCC(WarBoardPieceData_SaveData___TypeInfo, (unsigned int)v73),
        !localSaveData) )
  {
LABEL_69:
    sub_1C13F80(Instance, v29);
  }
  localSaveData->fields.pieceSaves = (struct WarBoardPieceData_SaveData_array *)Instance;
  sub_1C13CC8((PartyOrganizationUtility_o *)&localSaveData->fields.pieceSaves, Instance, v75, v76, v77, v78, v79, v80);
  if ( (int)v73 >= 1 )
  {
    v81 = 0LL;
    v82 = (unsigned int)v73;
    v83 = 8LL;
    do
    {
      v84 = this->fields.localSaveData;
      if ( !v84 )
        goto LABEL_69;
      v85 = *p_pieces;
      if ( !*p_pieces )
        goto LABEL_69;
      if ( v81 >= v85->max_length )
        goto LABEL_70;
      pieceSaves = (unsigned int *)v84->fields.pieceSaves;
      v87 = *(WarBoardPieceData_o **)((char *)&v85->obj.klass + v83 * 4);
      v88 = (WarBoardPieceData_SaveData_o *)sub_1C13F70(WarBoardPieceData_SaveData_TypeInfo);
      WarBoardPieceData_SaveData___ctor_36634992(v88, v87, 0LL);
      if ( !pieceSaves )
        goto LABEL_69;
      if ( v88 )
      {
        Instance = sub_1C13E60(v88, *(_QWORD *)(*(_QWORD *)pieceSaves + 64LL));
        if ( !Instance )
        {
          v96 = sub_1C13FA4();
          sub_1C13E4C(v96, 0LL);
        }
      }
      if ( v81 >= pieceSaves[6] )
        goto LABEL_70;
      *(_QWORD *)&pieceSaves[v83] = v88;
      sub_1C13CC8((PartyOrganizationUtility_o *)&pieceSaves[v83], (int64_t)v88, v89, v90, v91, v92, v93, v94);
      ++v81;
      v83 += 2LL;
    }
    while ( v82 != v81 );
  }
  Instance = (int64_t)v103;
  if ( !v103 )
    goto LABEL_69;
  return (WarBoardPieceData_array *)System_Collections_Generic_List_object___ToArray(
                                      v103,
                                      (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardData__AddSquareInfo(
        WarBoardData_o *this,
        int32_t squareIndex,
        int32_t effectId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  WarBoardData___c__DisplayClass173_0_o *v15; // x22
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  System_Object_array *squareIndexInfo; // x20
  System_Func_object__bool__o *v20; // x21
  Il2CppObject *object; // x0
  PartyOrganizationUtility_o *p_monitor; // x20
  System_Collections_Generic_IEnumerable_T__o *monitor; // x22
  System_Collections_Generic_List_int__o *v24; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  System_Int32_array *v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7

  if ( (byte_4BB22E4 & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_Find_WarBoardSquareIndexData___, *(_QWORD *)&squareIndex);
    sub_1C13D24(&System_Func_WarBoardSquareIndexData__bool__TypeInfo, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Contains__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor___77417304, v11);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass173_0__AddSquareInfo_b__0__, v13);
    sub_1C13D24(&WarBoardData___c__DisplayClass173_0_TypeInfo, v14);
    byte_4BB22E4 = 1;
  }
  v15 = (WarBoardData___c__DisplayClass173_0_o *)sub_1C13F70(WarBoardData___c__DisplayClass173_0_TypeInfo);
  WarBoardData___c__DisplayClass173_0___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_14;
  v15->fields.squareIndex = squareIndex;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_14;
  squareIndexInfo = (System_Object_array *)serverData->fields.squareIndexInfo;
  v20 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardSquareIndexData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v20,
    (Il2CppObject *)v15,
    Method_WarBoardData___c__DisplayClass173_0__AddSquareInfo_b__0__,
    0LL);
  object = BasicHelper__Find_object_(
             squareIndexInfo,
             (System_Func_T__bool__o *)v20,
             (const MethodInfo_2F7AFA4 *)Method_BasicHelper_Find_WarBoardSquareIndexData___);
  if ( !object )
    return;
  p_monitor = (PartyOrganizationUtility_o *)&object[1].monitor;
  monitor = (System_Collections_Generic_IEnumerable_T__o *)object[1].monitor;
  v24 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_56687228(
    v24,
    monitor,
    (const MethodInfo_360FA7C *)Method_System_Collections_Generic_List_int___ctor___77417304);
  if ( !v24 )
    goto LABEL_14;
  v16 = System_Collections_Generic_List_int___Contains(
          v24,
          effectId,
          (const MethodInfo_3610520 *)Method_System_Collections_Generic_List_int__Contains__);
  if ( v16 )
    return;
  items = v24->fields._items;
  v26 = Method_System_Collections_Generic_List_int__Add__;
  ++v24->fields._version;
  if ( !items )
LABEL_14:
    sub_1C13F80(v16, v17);
  size = v24->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v24,
      effectId,
      *(const MethodInfo_36101A8 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v24->fields._size = size + 1;
    items->m_Items[size + 1] = effectId;
  }
  v28 = System_Collections_Generic_List_int___ToArray(
          v24,
          (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
  p_monitor->klass = (PartyOrganizationUtility_c *)v28;
  sub_1C13CC8(p_monitor, (int64_t)v28, v29, v30, v31, v32, v33, v34);
}


void __fastcall WarBoardData__BuffTurnProgressing(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  WarBoardData___c_c *v12; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__object__o *_9__191_0; // x20
  Il2CppObject *v15; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v23; // x0
  WarBoardData___c_c *v24; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x19
  System_Func_object__bool__o *_9__191_1; // x20
  Il2CppObject *v27; // x21
  struct WarBoardData___c_StaticFields *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  WarBoardData___c_c *v36; // x8
  System_Collections_Generic_IEnumerable_T__o *v37; // x19
  System_Action_object__o *_9__191_2; // x20
  Il2CppObject *v39; // x21
  PartyOrganizationUtility_o *p__9__191_2; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7

  if ( (byte_4BB22F3 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_BattleBuffData__TypeInfo, method);
    sub_1C13D24(&Method_BasicHelper_ForEach_BattleBuffData___, v3);
    sub_1C13D24(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__BattleBuffData___, v4);
    sub_1C13D24(&Method_System_Linq_Enumerable_Where_BattleBuffData___, v5);
    sub_1C13D24(&System_Func_BattleBuffData__bool__TypeInfo, v6);
    sub_1C13D24(&System_Func_WarBoardPieceData__BattleBuffData__TypeInfo, v7);
    sub_1C13D24(&Method_WarBoardData___c__BuffTurnProgressing_b__191_0__, v8);
    sub_1C13D24(&Method_WarBoardData___c__BuffTurnProgressing_b__191_1__, v9);
    sub_1C13D24(&Method_WarBoardData___c__BuffTurnProgressing_b__191_2__, v10);
    sub_1C13D24(&WarBoardData___c_TypeInfo, v11);
    byte_4BB22F3 = 1;
  }
  v12 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v12 = WarBoardData___c_TypeInfo;
  }
  _9__191_0 = (System_Func_object__object__o *)v12->static_fields->__9__191_0;
  if ( !_9__191_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = WarBoardData___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__191_0 = (System_Func_object__object__o *)sub_1C13F70(System_Func_WarBoardPieceData__BattleBuffData__TypeInfo);
    System_Func_object__object____ctor(_9__191_0, v15, Method_WarBoardData___c__BuffTurnProgressing_b__191_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__191_0 = (struct System_Func_WarBoardPieceData__BattleBuffData__o *)_9__191_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__191_0,
      (int64_t)_9__191_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  v23 = System_Linq_Enumerable__Select_object__object_(
          pieces,
          (System_Func_TSource__TResult__o *)_9__191_0,
          (const MethodInfo_2FC0B08 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__BattleBuffData___);
  v24 = WarBoardData___c_TypeInfo;
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)v23;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v24 = WarBoardData___c_TypeInfo;
  }
  _9__191_1 = (System_Func_object__bool__o *)v24->static_fields->__9__191_1;
  if ( !_9__191_1 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v24 = WarBoardData___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v24->static_fields->__9;
    _9__191_1 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_BattleBuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__191_1, v27, Method_WarBoardData___c__BuffTurnProgressing_b__191_1__, 0LL);
    v28 = WarBoardData___c_TypeInfo->static_fields;
    v28->__9__191_1 = (struct System_Func_BattleBuffData__bool__o *)_9__191_1;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v28->__9__191_1, (int64_t)_9__191_1, v29, v30, v31, v32, v33, v34);
  }
  v35 = System_Linq_Enumerable__Where_object_(
          v25,
          (System_Func_TSource__bool__o *)_9__191_1,
          (const MethodInfo_2FCEBC0 *)Method_System_Linq_Enumerable_Where_BattleBuffData___);
  v36 = WarBoardData___c_TypeInfo;
  v37 = (System_Collections_Generic_IEnumerable_T__o *)v35;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v36 = WarBoardData___c_TypeInfo;
  }
  _9__191_2 = (System_Action_object__o *)v36->static_fields->__9__191_2;
  if ( !_9__191_2 )
  {
    if ( !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      v36 = WarBoardData___c_TypeInfo;
    }
    v39 = (Il2CppObject *)v36->static_fields->__9;
    _9__191_2 = (System_Action_object__o *)sub_1C13F70(System_Action_BattleBuffData__TypeInfo);
    System_Action_object____ctor(_9__191_2, v39, Method_WarBoardData___c__BuffTurnProgressing_b__191_2__, 0LL);
    p__9__191_2 = (PartyOrganizationUtility_o *)&WarBoardData___c_TypeInfo->static_fields->__9__191_2;
    p__9__191_2->klass = (PartyOrganizationUtility_c *)_9__191_2;
    sub_1C13CC8(p__9__191_2, (int64_t)_9__191_2, v41, v42, v43, v44, v45, v46);
  }
  BasicHelper__ForEach_object_(
    v37,
    (System_Action_T__o *)_9__191_2,
    (const MethodInfo_2F7C3C8 *)Method_BasicHelper_ForEach_BattleBuffData___);
}


void __fastcall WarBoardData__CheckItem(
        WarBoardData_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 AliveServantPieces; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  int v11; // w8
  __int64 v12; // x21
  unsigned int v13; // w27
  WarBoardPieceData_o *v14; // x22
  __int64 v15; // x23
  WarBoardManager_o *v16; // x24
  const MethodInfo_374D684 *v17; // x2
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x24
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  Il2CppObject *Instance; // x25
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x26
  __int64 v37; // x0
  System_Nullable_Vector3__o v38; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_float__o v39; // 0:x3.8
  System_Nullable_Vector3__o v40; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BB22AA & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, taskList);
    sub_1C13D24(&Method_System_Nullable_Vector3___ctor__, v5);
    sub_1C13D24(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_1C13D24(&WarBoardTaskBase___TypeInfo, v7);
    byte_4BB22AA = 1;
  }
  AliveServantPieces = (__int64)WarBoardData__GetAliveServantPieces(this, (const MethodInfo *)taskList);
  if ( !AliveServantPieces )
LABEL_27:
    sub_1C13F80(AliveServantPieces, v9);
  v11 = *(_DWORD *)(AliveServantPieces + 24);
  v12 = AliveServantPieces;
  if ( v11 >= 1 )
  {
    v13 = 0;
    while ( v13 < v11 )
    {
      v14 = *(WarBoardPieceData_o **)(v12 + 8LL * (int)v13 + 32);
      if ( !v14 )
        goto LABEL_27;
      AliveServantPieces = (__int64)WarBoardData__GetItem(this, v14->fields._nowSquareIndex_k__BackingField, v10);
      if ( AliveServantPieces )
      {
        v15 = AliveServantPieces;
        AliveServantPieces = WarBoardItemData__get_Acquired((WarBoardItemData_o *)AliveServantPieces, 0LL);
        if ( (AliveServantPieces & 1) == 0 )
        {
          AliveServantPieces = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !*(_QWORD *)(v15 + 56) )
            goto LABEL_27;
          v16 = (WarBoardManager_o *)AliveServantPieces;
          AliveServantPieces = (__int64)UnityEngine_Component__get_transform(
                                          *(UnityEngine_Component_o **)(v15 + 56),
                                          0LL);
          if ( !AliveServantPieces )
            goto LABEL_27;
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)AliveServantPieces, 0LL);
          *(_QWORD *)&v40.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
          *(_QWORD *)&v40.fields.hasValue = &v38;
          *(_QWORD *)&v38.fields.hasValue = 0LL;
          *(_QWORD *)&v38.fields.value.fields.y = 0LL;
          System_Nullable_Vector3____ctor(v40, localPosition, v17);
          if ( !v16 )
            goto LABEL_27;
          v39 = 0LL;
          AliveServantPieces = (__int64)WarBoardManager__GetCameraPerformanceTask(v16, v38, v39, 1, 0, 1, 0LL);
          v24 = AliveServantPieces;
          if ( taskList )
          {
            items = taskList->fields._items;
            v26 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
            ++taskList->fields._version;
            if ( !items )
              goto LABEL_27;
            size = taskList->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)taskList,
                (Il2CppObject *)AliveServantPieces,
                *(const MethodInfo_362D1CC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
            }
            else
            {
              v28 = &items->obj.klass + size;
              taskList->fields._size = size + 1;
              v28[4] = (Il2CppClass *)v24;
              sub_1C13CC8((PartyOrganizationUtility_o *)(v28 + 4), v24, v18, v19, v20, v21, v22, v23);
            }
          }
          else
          {
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
            AliveServantPieces = sub_1C13DCC(WarBoardTaskBase___TypeInfo, 1LL);
            if ( !AliveServantPieces )
              goto LABEL_27;
            v36 = AliveServantPieces;
            if ( v24 )
            {
              AliveServantPieces = sub_1C13E60(v24, *(_QWORD *)(*(_QWORD *)AliveServantPieces + 64LL));
              if ( !AliveServantPieces )
              {
                v37 = sub_1C13FA4();
                sub_1C13E4C(v37, 0LL);
              }
            }
            if ( !*(_DWORD *)(v36 + 24) )
              break;
            *(_QWORD *)(v36 + 32) = v24;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v36 + 32), v24, v30, v31, v32, v33, v34, v35);
            if ( !Instance )
              goto LABEL_27;
            WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v36, 0LL);
          }
          AliveServantPieces = WarBoardItemData__Get((WarBoardItemData_o *)v15, v14, taskList, 0, 0LL);
        }
      }
      v11 = *(_DWORD *)(v12 + 24);
      if ( (int)++v13 >= v11 )
        return;
    }
    sub_1C13F88(AliveServantPieces, v9);
  }
}


bool __fastcall WarBoardData__CheckWinCond(WarBoardData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WarBoardPieceData_array *Master_object; // x0
  __int64 v10; // x1
  bool result; // w0
  int32_t maxForceId_k__BackingField; // w9
  int32_t maxGroupId_k__BackingField; // w8
  int v14; // w24
  int v15; // w23
  int32_t i; // w20
  int32_t v17; // w21
  int max_length; // w8
  WarBoardPieceData_array *v19; // x22
  unsigned int v20; // w25
  struct System_Collections_Generic_List_int__o *masterExistsForce; // x19
  WarBoardData___c_c *v22; // x0
  System_Func_int__bool__o *_9__98_0; // x20
  Il2CppObject *v24; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int32_t condGroup; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BB22AF & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, method);
    sub_1C13D24(&DataManager_TypeInfo, v4);
    sub_1C13D24(&Method_System_Linq_Enumerable_Count_int____77509280, v5);
    sub_1C13D24(&System_Func_int__bool__TypeInfo, v6);
    sub_1C13D24(&Method_WarBoardData___c__CheckWinCond_b__98_0__, v7);
    sub_1C13D24(&WarBoardData___c_TypeInfo, v8);
    byte_4BB22AF = 1;
  }
  if ( (this->fields.winCondId & 0x80000000) == 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (WarBoardPieceData_array *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    condGroup = -1;
    if ( Master_object )
    {
      if ( !WarBoardCommonReleaseMaster__IsOpen_41491628(
              (WarBoardCommonReleaseMaster_o *)Master_object,
              this->fields.winCondId,
              &condGroup,
              0LL) )
        return 0;
      result = 1;
      this->fields.winCondGroup = condGroup;
      return result;
    }
LABEL_39:
    sub_1C13F80(Master_object, v10);
  }
  maxForceId_k__BackingField = this->fields._maxForceId_k__BackingField;
  if ( maxForceId_k__BackingField < 1 )
  {
    v15 = 0;
    v14 = 0;
    goto LABEL_30;
  }
  maxGroupId_k__BackingField = this->fields._maxGroupId_k__BackingField;
  v14 = 0;
  v15 = 0;
  for ( i = 1; i <= maxForceId_k__BackingField; ++i )
  {
    if ( (maxGroupId_k__BackingField & 0x80000000) != 0 )
      continue;
    v17 = 0;
    do
    {
      Master_object = WarBoardData__GetPieces_36453640(this, i, v17, v2);
      if ( !Master_object )
        goto LABEL_39;
      max_length = Master_object->max_length;
      v19 = Master_object;
      if ( max_length >= 1 )
      {
        v20 = 0;
        do
        {
          if ( v20 >= max_length )
            sub_1C13F88(Master_object, v10);
          Master_object = (WarBoardPieceData_array *)v19->m_Items[v20];
          if ( !Master_object )
            goto LABEL_39;
          if ( !BYTE4(Master_object->m_Items[3]) && !LOBYTE(Master_object->m_Items[11]) )
          {
            Master_object = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster(
                                                         (WarBoardPieceData_o *)Master_object,
                                                         0LL);
            if ( ((unsigned __int8)Master_object & 1) != 0 )
              ++v14;
            else
              ++v15;
          }
          max_length = v19->max_length;
        }
        while ( (int)++v20 < max_length );
      }
      maxGroupId_k__BackingField = this->fields._maxGroupId_k__BackingField;
      ++v17;
    }
    while ( v17 <= maxGroupId_k__BackingField );
    maxForceId_k__BackingField = this->fields._maxForceId_k__BackingField;
  }
LABEL_30:
  masterExistsForce = this->fields.masterExistsForce;
  v22 = WarBoardData___c_TypeInfo;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v22 = WarBoardData___c_TypeInfo;
  }
  _9__98_0 = v22->static_fields->__9__98_0;
  if ( !_9__98_0 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = WarBoardData___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v22->static_fields->__9;
    _9__98_0 = (System_Func_int__bool__o *)sub_1C13F70(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__98_0, v24, Method_WarBoardData___c__CheckWinCond_b__98_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__98_0 = _9__98_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__98_0,
      (int64_t)_9__98_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  return (v14 == 0) & (System_Linq_Enumerable__Count_int__49984028(
                         (System_Collections_Generic_IEnumerable_TSource__o *)masterExistsForce,
                         (System_Func_TSource__bool__o *)_9__98_0,
                         (const MethodInfo_2FAB21C *)Method_System_Linq_Enumerable_Count_int____77509280) > 0) | (v15 == 0);
}


void __fastcall WarBoardData__ClearLastBattlePieceUniqueIndexes(WarBoardData_o *this, const MethodInfo *method)
{
  struct System_UInt32_array *v3; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BB22E7 & 1) == 0 )
  {
    sub_1C13D24(&uint___TypeInfo, method);
    byte_4BB22E7 = 1;
  }
  v3 = (struct System_UInt32_array *)sub_1C13DCC(uint___TypeInfo, 0LL);
  this->fields.latestBattlePieceUniqueIndexes = v3;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.latestBattlePieceUniqueIndexes,
    (int64_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


int32_t __fastcall WarBoardData__ComparePiece(
        WarBoardData_o *this,
        WarBoardPieceData_o *a,
        WarBoardPieceData_o *b,
        const MethodInfo *method)
{
  _BOOL4 isServant; // w21
  int32_t result; // w0
  int32_t forceId_k__BackingField; // w8
  int32_t v9; // w9
  int32_t groupId_k__BackingField; // w8
  int32_t index_k__BackingField; // w9
  int32_t v12; // w8
  int32_t v13; // w9
  int32_t v14; // w8
  int32_t v15; // w9

  if ( !a || (this = (WarBoardData_o *)WarBoardPieceData__get_isMaster(a, 0LL), !b) )
    sub_1C13F80(this, a);
  if ( (((unsigned int)this ^ WarBoardPieceData__get_isMaster(b, 0LL)) & 1) == 0 )
  {
    forceId_k__BackingField = a->fields._forceId_k__BackingField;
    v9 = b->fields._forceId_k__BackingField;
    result = v9 - forceId_k__BackingField;
    if ( v9 != forceId_k__BackingField )
      return result;
    groupId_k__BackingField = b->fields._groupId_k__BackingField;
    index_k__BackingField = a->fields._groupId_k__BackingField;
    return groupId_k__BackingField - index_k__BackingField;
  }
  isServant = WarBoardPieceData__get_isServant(a, 0LL);
  if ( ((isServant ^ WarBoardPieceData__get_isServant(b, 0LL)) & 1) != 0 )
  {
    if ( WarBoardPieceData__get_isMaster(a, 0LL) )
      return 1;
    else
      return WarBoardPieceData__get_isMaster(b, 0LL) << 31 >> 31;
  }
  v12 = a->fields._forceId_k__BackingField;
  v13 = b->fields._forceId_k__BackingField;
  result = v13 - v12;
  if ( v13 == v12 )
  {
    v14 = a->fields._groupId_k__BackingField;
    v15 = b->fields._groupId_k__BackingField;
    result = v15 - v14;
    if ( v15 == v14 )
    {
      groupId_k__BackingField = b->fields._index_k__BackingField;
      index_k__BackingField = a->fields._index_k__BackingField;
      return groupId_k__BackingField - index_k__BackingField;
    }
  }
  return result;
}


WarBoardData_BattleParticipantInfo_o *__fastcall WarBoardData__CreateBattleParticipantInfo(
        WarBoardData_o *this,
        WarBoardPieceData_o *attackPieceData,
        WarBoardPieceData_o *targetPieceData,
        const MethodInfo *method)
{
  WarBoardData_BattleParticipantInfo_o *v6; // x21

  if ( (byte_4BB22FB & 1) == 0 )
  {
    sub_1C13D24(&WarBoardData_BattleParticipantInfo_TypeInfo, attackPieceData);
    byte_4BB22FB = 1;
  }
  v6 = (WarBoardData_BattleParticipantInfo_o *)sub_1C13F70(WarBoardData_BattleParticipantInfo_TypeInfo);
  WarBoardData_BattleParticipantInfo___ctor(v6, attackPieceData, targetPieceData, 0LL);
  return v6;
}


void __fastcall WarBoardData__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WarBoardData_c *v3; // x0
  System_String_o *AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY; // x19

  if ( (byte_4BB22A7 & 1) == 0 )
  {
    sub_1C13D24(&EncryptedPlayerPrefs_TypeInfo, v1);
    sub_1C13D24(&WarBoardData_TypeInfo, v2);
    byte_4BB22A7 = 1;
  }
  v3 = WarBoardData_TypeInfo;
  if ( !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    v3 = WarBoardData_TypeInfo;
  }
  AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY = v3->static_fields->AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SetInt(AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY, 1, 0LL);
}


WarBoardWaitTime_o *__fastcall WarBoardData__CreateEventBossUIDataTask(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  _QWORD *v8; // x20
  System_Delegate_o *v9; // x21
  WarBoardData___c_c *v10; // x0
  WarBoardTaskBase_TaskCallback_o *_9__152_0; // x22
  Il2CppObject *v12; // x23
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Delegate_o *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x8
  WarBoardTaskBase_TaskCallback_c *v28; // x1

  if ( (byte_4BB22D7 & 1) == 0 )
  {
    sub_1C13D24(&WarBoardTaskBase_TaskCallback_TypeInfo, method);
    sub_1C13D24(&Method_WarBoardData___c__CreateEventBossUIDataTask_b__152_0__, v2);
    sub_1C13D24(&WarBoardData___c_TypeInfo, v3);
    sub_1C13D24(&WarBoardWaitTime_TypeInfo, v4);
    byte_4BB22D7 = 1;
  }
  v5 = sub_1C13F70(WarBoardWaitTime_TypeInfo);
  WarBoardWaitTime___ctor((WarBoardWaitTime_o *)v5, 0.0, 0LL);
  if ( !v5 )
    sub_1C13F80(v6, v7);
  v8 = (_QWORD *)(v5 + 40);
  v9 = *(System_Delegate_o **)(v5 + 40);
  v10 = WarBoardData___c_TypeInfo;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v10 = WarBoardData___c_TypeInfo;
  }
  _9__152_0 = v10->static_fields->__9__152_0;
  if ( !_9__152_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = WarBoardData___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__152_0 = (WarBoardTaskBase_TaskCallback_o *)sub_1C13F70(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__152_0,
      v12,
      Method_WarBoardData___c__CreateEventBossUIDataTask_b__152_0__,
      0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__152_0 = _9__152_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__152_0,
      (int64_t)_9__152_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = System_Delegate__Combine(v9, (System_Delegate_o *)_9__152_0, 0LL);
  v27 = (int64_t)v20;
  if ( !v20 )
    goto LABEL_14;
  v28 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v20->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v8 = v20, (WarBoardTaskBase_TaskCallback_c *)v20->klass != v28) )
  {
    sub_1C14240(v20);
LABEL_14:
    *v8 = v27;
  }
  sub_1C13CC8((PartyOrganizationUtility_o *)(v5 + 40), v27, v21, v22, v23, v24, v25, v26);
  return (WarBoardWaitTime_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardData__DelSquareInfo(
        WarBoardData_o *this,
        int32_t squareIndex,
        int32_t effectId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  WarBoardData___c__DisplayClass174_0_o *v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  System_Object_array *squareIndexInfo; // x20
  System_Func_object__bool__o *v20; // x21
  Il2CppObject *object; // x0
  PartyOrganizationUtility_o *p_monitor; // x20
  System_Collections_Generic_IEnumerable_T__o *monitor; // x22
  System_Collections_Generic_List_int__o *v24; // x21
  System_Int32_array *v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7

  if ( (byte_4BB22E5 & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_Find_WarBoardSquareIndexData___, *(_QWORD *)&squareIndex);
    sub_1C13D24(&System_Func_WarBoardSquareIndexData__bool__TypeInfo, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Contains__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Remove__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor___77417304, v11);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass174_0__DelSquareInfo_b__0__, v13);
    sub_1C13D24(&WarBoardData___c__DisplayClass174_0_TypeInfo, v14);
    byte_4BB22E5 = 1;
  }
  v15 = (WarBoardData___c__DisplayClass174_0_o *)sub_1C13F70(WarBoardData___c__DisplayClass174_0_TypeInfo);
  WarBoardData___c__DisplayClass174_0___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_10;
  v15->fields.squareIndex = squareIndex;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_10;
  squareIndexInfo = (System_Object_array *)serverData->fields.squareIndexInfo;
  v20 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardSquareIndexData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v20,
    (Il2CppObject *)v15,
    Method_WarBoardData___c__DisplayClass174_0__DelSquareInfo_b__0__,
    0LL);
  object = BasicHelper__Find_object_(
             squareIndexInfo,
             (System_Func_T__bool__o *)v20,
             (const MethodInfo_2F7AFA4 *)Method_BasicHelper_Find_WarBoardSquareIndexData___);
  if ( !object )
    return;
  p_monitor = (PartyOrganizationUtility_o *)&object[1].monitor;
  monitor = (System_Collections_Generic_IEnumerable_T__o *)object[1].monitor;
  v24 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_56687228(
    v24,
    monitor,
    (const MethodInfo_360FA7C *)Method_System_Collections_Generic_List_int___ctor___77417304);
  if ( !v24 )
LABEL_10:
    sub_1C13F80(v16, v17);
  if ( System_Collections_Generic_List_int___Contains(
         v24,
         effectId,
         (const MethodInfo_3610520 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    System_Collections_Generic_List_int___Remove(
      v24,
      effectId,
      (const MethodInfo_36116A4 *)Method_System_Collections_Generic_List_int__Remove__);
    v25 = System_Collections_Generic_List_int___ToArray(
            v24,
            (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
    p_monitor->klass = (PartyOrganizationUtility_c *)v25;
    sub_1C13CC8(p_monitor, (int64_t)v25, v26, v27, v28, v29, v30, v31);
  }
}


void __fastcall WarBoardData__DeleteAfterContinueDeviceLocalSave(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WarBoardData_c *v3; // x0
  System_String_o *AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY; // x19

  if ( (byte_4BB22A8 & 1) == 0 )
  {
    sub_1C13D24(&EncryptedPlayerPrefs_TypeInfo, v1);
    sub_1C13D24(&WarBoardData_TypeInfo, v2);
    byte_4BB22A8 = 1;
  }
  v3 = WarBoardData_TypeInfo;
  if ( !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    v3 = WarBoardData_TypeInfo;
  }
  AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY = v3->static_fields->AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__DeleteKey(AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY, 0LL);
}


void __fastcall WarBoardData__DeleteLocalSave(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WarBoardData_c *v3; // x0
  System_String_o *WARBOARDDATA_SAVEDATA_KEY; // x19

  if ( (byte_4BB22A6 & 1) == 0 )
  {
    sub_1C13D24(&EncryptedPlayerPrefs_TypeInfo, v1);
    sub_1C13D24(&WarBoardData_TypeInfo, v2);
    byte_4BB22A6 = 1;
  }
  v3 = WarBoardData_TypeInfo;
  if ( !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    v3 = WarBoardData_TypeInfo;
  }
  WARBOARDDATA_SAVEDATA_KEY = v3->static_fields->WARBOARDDATA_SAVEDATA_KEY;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__DeleteKey(WARBOARDDATA_SAVEDATA_KEY, 0LL);
}


// local variable allocation has failed, the output may be wrong!
WarBoardActionPointEntity_o *__fastcall WarBoardData__GetActionPointEntity(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  unsigned __int8 v4; // w19
  System_Collections_Generic_Dictionary_TKey__TValue__o *actionPointEntityDict; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v4 = groupId;
  if ( (byte_4BB22AC & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__TryGetValue__,
      *(_QWORD *)&forceId);
    byte_4BB22AC = 1;
  }
  value = 0LL;
  actionPointEntityDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.actionPointEntityDict;
  if ( !actionPointEntityDict )
    sub_1C13F80(0LL, *(_QWORD *)&forceId);
  System_Collections_Generic_Dictionary_uint__object___TryGetValue(
    actionPointEntityDict,
    (forceId << 24) | (v4 << 16),
    &value,
    (const MethodInfo_332CDA4 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__TryGetValue__);
  return (WarBoardActionPointEntity_o *)value;
}


System_Collections_Generic_List_WarBoardPieceData__o *__fastcall WarBoardData__GetAliveEnemyServantPieces(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  WarBoardData___c_c *v7; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *_9__110_0; // x20
  Il2CppObject *v10; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0

  if ( (byte_4BB22BB & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_ToList_WarBoardPieceData___, method);
    sub_1C13D24(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v3);
    sub_1C13D24(&System_Func_WarBoardPieceData__bool__TypeInfo, v4);
    sub_1C13D24(&Method_WarBoardData___c__GetAliveEnemyServantPieces_b__110_0__, v5);
    sub_1C13D24(&WarBoardData___c_TypeInfo, v6);
    byte_4BB22BB = 1;
  }
  v7 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v7 = WarBoardData___c_TypeInfo;
  }
  _9__110_0 = (System_Func_object__bool__o *)v7->static_fields->__9__110_0;
  if ( !_9__110_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = WarBoardData___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__110_0 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__110_0,
      v10,
      Method_WarBoardData___c__GetAliveEnemyServantPieces_b__110_0__,
      0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__110_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__110_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__110_0,
      (int64_t)_9__110_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  v18 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__110_0,
          (const MethodInfo_2FCEBC0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (System_Collections_Generic_List_WarBoardPieceData__o *)System_Linq_Enumerable__ToList_object_(
                                                                   v18,
                                                                   (const MethodInfo_2FCCA90 *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
}


WarBoardPieceData_array *__fastcall WarBoardData__GetAlivePieces(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  WarBoardData___c_c *v7; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *_9__107_0; // x20
  Il2CppObject *v10; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0

  if ( (byte_4BB22B8 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, method);
    sub_1C13D24(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v3);
    sub_1C13D24(&System_Func_WarBoardPieceData__bool__TypeInfo, v4);
    sub_1C13D24(&Method_WarBoardData___c__GetAlivePieces_b__107_0__, v5);
    sub_1C13D24(&WarBoardData___c_TypeInfo, v6);
    byte_4BB22B8 = 1;
  }
  v7 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v7 = WarBoardData___c_TypeInfo;
  }
  _9__107_0 = (System_Func_object__bool__o *)v7->static_fields->__9__107_0;
  if ( !_9__107_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = WarBoardData___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__107_0 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__107_0, v10, Method_WarBoardData___c__GetAlivePieces_b__107_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__107_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__107_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__107_0,
      (int64_t)_9__107_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  v18 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__107_0,
          (const MethodInfo_2FCEBC0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v18,
                                      (const MethodInfo_2FC8D34 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


System_Collections_Generic_List_WarBoardPieceData__o *__fastcall WarBoardData__GetAlivePlayerGroupServantPieces(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  WarBoardData___c_c *v7; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *_9__109_0; // x20
  Il2CppObject *v10; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0

  if ( (byte_4BB22BA & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_ToList_WarBoardPieceData___, method);
    sub_1C13D24(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v3);
    sub_1C13D24(&System_Func_WarBoardPieceData__bool__TypeInfo, v4);
    sub_1C13D24(&Method_WarBoardData___c__GetAlivePlayerGroupServantPieces_b__109_0__, v5);
    sub_1C13D24(&WarBoardData___c_TypeInfo, v6);
    byte_4BB22BA = 1;
  }
  v7 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v7 = WarBoardData___c_TypeInfo;
  }
  _9__109_0 = (System_Func_object__bool__o *)v7->static_fields->__9__109_0;
  if ( !_9__109_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = WarBoardData___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__109_0 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__109_0,
      v10,
      Method_WarBoardData___c__GetAlivePlayerGroupServantPieces_b__109_0__,
      0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__109_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__109_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__109_0,
      (int64_t)_9__109_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  v18 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__109_0,
          (const MethodInfo_2FCEBC0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (System_Collections_Generic_List_WarBoardPieceData__o *)System_Linq_Enumerable__ToList_object_(
                                                                   v18,
                                                                   (const MethodInfo_2FCCA90 *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
}


WarBoardPieceData_array *__fastcall WarBoardData__GetAliveServantPieces(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  WarBoardData___c_c *v7; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *_9__108_0; // x20
  Il2CppObject *v10; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0

  if ( (byte_4BB22B9 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, method);
    sub_1C13D24(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v3);
    sub_1C13D24(&System_Func_WarBoardPieceData__bool__TypeInfo, v4);
    sub_1C13D24(&Method_WarBoardData___c__GetAliveServantPieces_b__108_0__, v5);
    sub_1C13D24(&WarBoardData___c_TypeInfo, v6);
    byte_4BB22B9 = 1;
  }
  v7 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v7 = WarBoardData___c_TypeInfo;
  }
  _9__108_0 = (System_Func_object__bool__o *)v7->static_fields->__9__108_0;
  if ( !_9__108_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = WarBoardData___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__108_0 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__108_0, v10, Method_WarBoardData___c__GetAliveServantPieces_b__108_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__108_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__108_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__108_0,
      (int64_t)_9__108_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  v18 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__108_0,
          (const MethodInfo_2FCEBC0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v18,
                                      (const MethodInfo_2FC8D34 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


WarBoardEffectData_array *__fastcall WarBoardData__GetAllEffects(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.effects;
}


WarBoardItemData_array *__fastcall WarBoardData__GetAllItems(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.items;
}


WarBoardPieceData_array *__fastcall WarBoardData__GetAllPieces(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.pieces;
}


int32_t __fastcall WarBoardData__GetAttackCost(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  WarBoardActionPointEntity_o *ActionPointEntity; // x0

  ActionPointEntity = WarBoardData__GetActionPointEntity(this, forceId, groupId, method);
  if ( ActionPointEntity )
    LODWORD(ActionPointEntity) = ActionPointEntity->fields.attackCost;
  return (int)ActionPointEntity;
}


int32_t __fastcall WarBoardData__GetBaseActionPoint(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  WarBoardActionPointEntity_o *ActionPointEntity; // x0

  ActionPointEntity = WarBoardData__GetActionPointEntity(this, forceId, groupId, method);
  if ( ActionPointEntity )
    LODWORD(ActionPointEntity) = ActionPointEntity->fields.baseActionPoint;
  return (int)ActionPointEntity;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WarBoardData__GetClearedTurn(WarBoardData_o *this, int32_t condId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WarBoardData___c__DisplayClass183_0_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *listPrevCond; // x19
  System_Predicate_object__o *v12; // x20
  Il2CppObject *v13; // x0

  if ( (byte_4BB22EB & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardPrevCondData__Find__, *(_QWORD *)&condId);
    sub_1C13D24(&System_Predicate_WarBoardPrevCondData__TypeInfo, v5);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass183_0__GetClearedTurn_b__0__, v6);
    sub_1C13D24(&WarBoardData___c__DisplayClass183_0_TypeInfo, v7);
    byte_4BB22EB = 1;
  }
  v8 = (WarBoardData___c__DisplayClass183_0_o *)sub_1C13F70(WarBoardData___c__DisplayClass183_0_TypeInfo);
  WarBoardData___c__DisplayClass183_0___ctor(v8, 0LL);
  if ( !v8
    || (v8->fields.condId = condId,
        listPrevCond = (System_Collections_Generic_List_object__o *)this->fields.listPrevCond,
        v12 = (System_Predicate_object__o *)sub_1C13F70(System_Predicate_WarBoardPrevCondData__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_WarBoardData___c__DisplayClass183_0__GetClearedTurn_b__0__,
          0LL),
        !listPrevCond) )
  {
    sub_1C13F80(v9, v10);
  }
  v13 = System_Collections_Generic_List_object___Find(
          listPrevCond,
          (System_Predicate_T__o *)v12,
          (const MethodInfo_362D834 *)Method_System_Collections_Generic_List_WarBoardPrevCondData__Find__);
  if ( v13 )
    return HIDWORD(v13[1].klass);
  else
    return -1;
}


// local variable allocation has failed, the output may be wrong!
WarBoardSquareData_o *__fastcall WarBoardData__GetCondSquare(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WarBoardData___c__DisplayClass130_0_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_TSource__o *condSquares; // x19
  System_Func_object__bool__o *v12; // x20

  if ( (byte_4BB22C9 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___, *(_QWORD *)&squareIndex);
    sub_1C13D24(&System_Func_WarBoardSquareData__bool__TypeInfo, v5);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass130_0__GetCondSquare_b__0__, v6);
    sub_1C13D24(&WarBoardData___c__DisplayClass130_0_TypeInfo, v7);
    byte_4BB22C9 = 1;
  }
  v8 = (WarBoardData___c__DisplayClass130_0_o *)sub_1C13F70(WarBoardData___c__DisplayClass130_0_TypeInfo);
  WarBoardData___c__DisplayClass130_0___ctor(v8, 0LL);
  if ( !v8 )
    sub_1C13F80(v9, v10);
  v8->fields.squareIndex = squareIndex;
  condSquares = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.condSquares;
  v12 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardSquareData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_WarBoardData___c__DisplayClass130_0__GetCondSquare_b__0__,
    0LL);
  return (WarBoardSquareData_o *)System_Linq_Enumerable__FirstOrDefault_object__50015312(
                                   condSquares,
                                   (System_Func_TSource__bool__o *)v12,
                                   (const MethodInfo_2FB2C50 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
}


WarBoardSquareData_array *__fastcall WarBoardData__GetCondSquares(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.condSquares;
}


System_Int32_array *__fastcall WarBoardData__GetDeploySquareIds(
        WarBoardData_o *this,
        System_Int32_array_array *squareIds,
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
  System_Collections_Generic_List_int__o *v13; // x21
  void *Piece_36396444; // x0
  __int64 value; // x1
  signed int max_length; // w8
  unsigned int v17; // w25
  System_Int32_array *v18; // x28
  unsigned __int64 v19; // x27
  WarBoardData___c__DisplayClass133_0_o *v20; // x22
  const MethodInfo *v21; // x2
  int32_t v22; // w1
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x3
  System_Collections_Generic_List_T__o *reinforcementsAppointmentSquareList; // x23
  System_Func_int__bool__o *v26; // x24
  System_Func_int__bool__o *v27; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10

  if ( (byte_4BB22CB & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_Any_int___, squareIds);
    sub_1C13D24(&System_Func_int__bool__TypeInfo, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__0__, v10);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__1__, v11);
    sub_1C13D24(&WarBoardData___c__DisplayClass133_0_TypeInfo, v12);
    byte_4BB22CB = 1;
  }
  v13 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !squareIds )
    goto LABEL_29;
  max_length = squareIds->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
LABEL_30:
        sub_1C13F88(Piece_36396444, value);
      v18 = squareIds->m_Items[v17];
      if ( !v18 )
        break;
      if ( (int)v18->max_length < 1 )
      {
LABEL_18:
        value = 0xFFFFFFFFLL;
        if ( !v13 )
          break;
      }
      else
      {
        v19 = 0LL;
        while ( 1 )
        {
          v20 = (WarBoardData___c__DisplayClass133_0_o *)sub_1C13F70(WarBoardData___c__DisplayClass133_0_TypeInfo);
          WarBoardData___c__DisplayClass133_0___ctor(v20, 0LL);
          if ( v19 >= v18->max_length )
            goto LABEL_30;
          if ( !v20 )
            goto LABEL_29;
          v22 = v18->m_Items[v19 + 1];
          v20->fields.value = v22;
          Piece_36396444 = WarBoardData__GetPiece_36396444(this, v22, v21);
          if ( !Piece_36396444 )
          {
            Piece_36396444 = WarBoardData__GetUnusedTreasure(this, v20->fields.value, v23);
            if ( !Piece_36396444 )
            {
              Piece_36396444 = WarBoardData__GetWall(this, v20->fields.value, 0, v24);
              if ( !Piece_36396444 )
              {
                reinforcementsAppointmentSquareList = (System_Collections_Generic_List_T__o *)this->fields.reinforcementsAppointmentSquareList;
                v26 = (System_Func_int__bool__o *)sub_1C13F70(System_Func_int__bool__TypeInfo);
                System_Func_int__bool____ctor(
                  v26,
                  (Il2CppObject *)v20,
                  Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__0__,
                  0LL);
                Piece_36396444 = (void *)BasicHelper__Any_int_(
                                           reinforcementsAppointmentSquareList,
                                           (System_Func_T__bool__o *)v26,
                                           (const MethodInfo_2F7A0AC *)Method_BasicHelper_Any_int___);
                if ( ((unsigned __int8)Piece_36396444 & 1) == 0 )
                {
                  v27 = (System_Func_int__bool__o *)sub_1C13F70(System_Func_int__bool__TypeInfo);
                  System_Func_int__bool____ctor(
                    v27,
                    (Il2CppObject *)v20,
                    Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__1__,
                    0LL);
                  Piece_36396444 = (void *)BasicHelper__Any_int_(
                                             (System_Collections_Generic_List_T__o *)v13,
                                             (System_Func_T__bool__o *)v27,
                                             (const MethodInfo_2F7A0AC *)Method_BasicHelper_Any_int___);
                  if ( ((unsigned __int8)Piece_36396444 & 1) == 0 )
                    break;
                }
              }
            }
          }
          if ( (__int64)++v19 >= (int)v18->max_length )
            goto LABEL_18;
        }
        value = (unsigned int)v20->fields.value;
        if ( !v13 )
          break;
      }
      items = v13->fields._items;
      v29 = Method_System_Collections_Generic_List_int__Add__;
      ++v13->fields._version;
      if ( !items )
        break;
      size = v13->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v13,
          value,
          *(const MethodInfo_36101A8 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v13->fields._size = size + 1;
        items->m_Items[size + 1] = value;
      }
      max_length = squareIds->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_27;
    }
LABEL_29:
    sub_1C13F80(Piece_36396444, value);
  }
LABEL_27:
  if ( !v13 )
    goto LABEL_29;
  return System_Collections_Generic_List_int___ToArray(
           v13,
           (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_String_o *__fastcall WarBoardData__GetEditBgmName(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BB22D4 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_BgmMaster___, method);
    sub_1C13D24(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v3);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4BB22D4 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_BgmMaster___);
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity || !Instance )
    goto LABEL_11;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               stageEntity->fields.editBgmId,
                               (const MethodInfo_3238670 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return (System_String_o *)entity[1].monitor;
LABEL_11:
    sub_1C13F80(Instance, v6);
  }
  return 0LL;
}


WarBoardPieceData_array *__fastcall WarBoardData__GetEditableServantPieces(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  WarBoardData___c_c *v7; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *_9__120_0; // x20
  Il2CppObject *v10; // x21
  PartyOrganizationUtility_o *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0

  if ( (byte_4BB22C1 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, method);
    sub_1C13D24(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v3);
    sub_1C13D24(&System_Func_WarBoardPieceData__bool__TypeInfo, v4);
    sub_1C13D24(&Method_WarBoardData___c__GetEditableServantPieces_b__120_0__, v5);
    sub_1C13D24(&WarBoardData___c_TypeInfo, v6);
    byte_4BB22C1 = 1;
  }
  v7 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v7 = WarBoardData___c_TypeInfo;
  }
  _9__120_0 = (System_Func_object__bool__o *)v7->static_fields->__9__120_0;
  if ( !_9__120_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = WarBoardData___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__120_0 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__120_0, v10, Method_WarBoardData___c__GetEditableServantPieces_b__120_0__, 0LL);
    static_fields = (PartyOrganizationUtility_o *)WarBoardData___c_TypeInfo->static_fields;
    static_fields[1].klass = (PartyOrganizationUtility_c *)_9__120_0;
    sub_1C13CC8(static_fields + 1, (int64_t)_9__120_0, v12, v13, v14, v15, v16, v17);
  }
  v18 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__120_0,
          (const MethodInfo_2FCEBC0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v18,
                                      (const MethodInfo_2FC8D34 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


// local variable allocation has failed, the output may be wrong!
WarBoardEffectData_o *__fastcall WarBoardData__GetEffect(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WarBoardData___c__DisplayClass142_0_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_TSource__o *effects; // x19
  System_Func_object__bool__o *v12; // x20

  if ( (byte_4BB22D0 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardEffectData___, *(_QWORD *)&squareIndex);
    sub_1C13D24(&System_Func_WarBoardEffectData__bool__TypeInfo, v5);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass142_0__GetEffect_b__0__, v6);
    sub_1C13D24(&WarBoardData___c__DisplayClass142_0_TypeInfo, v7);
    byte_4BB22D0 = 1;
  }
  v8 = (WarBoardData___c__DisplayClass142_0_o *)sub_1C13F70(WarBoardData___c__DisplayClass142_0_TypeInfo);
  WarBoardData___c__DisplayClass142_0___ctor(v8, 0LL);
  if ( !v8 )
    sub_1C13F80(v9, v10);
  v8->fields.squareIndex = squareIndex;
  effects = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.effects;
  v12 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardEffectData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_WarBoardData___c__DisplayClass142_0__GetEffect_b__0__,
    0LL);
  return (WarBoardEffectData_o *)System_Linq_Enumerable__FirstOrDefault_object__50015312(
                                   effects,
                                   (System_Func_TSource__bool__o *)v12,
                                   (const MethodInfo_2FB2C50 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardEffectData___);
}


WarBoardEffectData_array *__fastcall WarBoardData__GetEffects(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.effects;
}


// local variable allocation has failed, the output may be wrong!
WarBoardPieceData_o *__fastcall WarBoardData__GetEventBossPiece(
        WarBoardData_o *this,
        int32_t stageBossIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WarBoardData___c__DisplayClass105_0_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v12; // x20

  if ( (byte_4BB22B6 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, *(_QWORD *)&stageBossIndex);
    sub_1C13D24(&System_Func_WarBoardPieceData__bool__TypeInfo, v5);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass105_0__GetEventBossPiece_b__0__, v6);
    sub_1C13D24(&WarBoardData___c__DisplayClass105_0_TypeInfo, v7);
    byte_4BB22B6 = 1;
  }
  v8 = (WarBoardData___c__DisplayClass105_0_o *)sub_1C13F70(WarBoardData___c__DisplayClass105_0_TypeInfo);
  WarBoardData___c__DisplayClass105_0___ctor(v8, 0LL);
  if ( !v8 )
    sub_1C13F80(v9, v10);
  v8->fields.stageBossIndex = stageBossIndex;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v12 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_WarBoardData___c__DisplayClass105_0__GetEventBossPiece_b__0__,
    0LL);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_object__50015312(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v12,
                                  (const MethodInfo_2FB2C50 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


int32_t __fastcall WarBoardData__GetExpensiveIcon(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8
  struct WarBoardTreasureData_SaveData_array *treasureSaves; // x22
  int max_length; // w8
  unsigned int v5; // w24
  int32_t iconId; // w23
  int v7; // w19
  int32_t Rarity; // w20
  WarBoardTreasureData_SaveData_o *v9; // x21

  localSaveData = this->fields.localSaveData;
  if ( !localSaveData )
    goto LABEL_17;
  treasureSaves = localSaveData->fields.treasureSaves;
  if ( !treasureSaves )
    goto LABEL_17;
  max_length = treasureSaves->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    iconId = 0;
    v7 = -1;
    Rarity = -1;
    while ( 1 )
    {
      if ( v5 >= max_length )
        sub_1C13F88(this, method);
      v9 = treasureSaves->m_Items[v5];
      if ( !v9 )
        break;
      if ( v9->fields.isUse )
      {
        if ( WarBoardTreasureData_SaveData__get_Rarity(v9, 0LL) > Rarity
          || (this = (WarBoardData_o *)WarBoardTreasureData_SaveData__get_Rarity(v9, 0LL), (_DWORD)this == Rarity)
          && (this = (WarBoardData_o *)WarBoardTreasureData_SaveData__get_Effect(v9, 0LL), (int)this > v7) )
        {
          iconId = v9->fields.iconId;
          Rarity = WarBoardTreasureData_SaveData__get_Rarity(v9, 0LL);
          this = (WarBoardData_o *)WarBoardTreasureData_SaveData__get_Effect(v9, 0LL);
          v7 = (int)this;
        }
      }
      max_length = treasureSaves->max_length;
      if ( (int)++v5 >= max_length )
        return iconId + 1;
    }
LABEL_17:
    sub_1C13F80(this, method);
  }
  iconId = 0;
  return iconId + 1;
}


void __fastcall WarBoardData__GetHoldReinforcements(
        WarBoardData_o *this,
        System_Collections_Generic_List_ReinforcementsData__o **reinforcementsDatas,
        WarBoardStageReinforcementsMaster_o *mst,
        int32_t targetStageReinforcementsId,
        const MethodInfo *method)
{
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
  WarBoardData___c__DisplayClass188_0_o *v39; // x23
  void *v40; // x0
  __int64 v41; // x1
  System_Collections_Generic_List_object__o *reinforcementsSaveList; // x22
  System_Predicate_object__o *v43; // x24
  Il2CppObject *v44; // x25
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  System_Collections_Generic_List_object__o *v52; // x22
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  struct System_Collections_Generic_List_HoldReinforcementsData__o *v59; // x22
  System_Func_object__bool__o *v60; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x0
  const MethodInfo_33BEBE8 **v62; // x26
  WarBoardData___c__DisplayClass188_1_c **v63; // x27
  __int64 v64; // x24
  __int64 v65; // x0
  __int64 v66; // x1
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  Il2CppObject *current; // x1
  HoldReinforcementsData_o **v74; // x22
  __int64 v75; // x0
  __int64 v76; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  _BOOL8 v78; // x0
  __int64 v79; // x1
  const MethodInfo *v80; // x2
  System_Int32_array *DeploySquareIds; // x0
  __int64 v82; // x1
  const MethodInfo *v83; // x3
  struct System_Int32_array *limitNums; // x9
  __int64 index_k__BackingField; // x2
  System_Int32_array *v86; // x23
  WarBoardPieceData_array *ReinfocementsPieces; // x0
  __int64 v88; // x1
  struct System_Int32_array *v89; // x8
  __int64 v90; // x9
  _BOOL4 v91; // w25
  Il2CppObject *Instance; // x0
  __int64 v93; // x1
  _BOOL8 IsPlayerTurn; // x0
  __int64 v95; // x1
  __int64 v96; // x10
  int max_length; // w11
  int v98; // w10
  const MethodInfo_33BEBE8 **v99; // x20
  System_Collections_Generic_List_T__o *v100; // x25
  System_Func_object__bool__o *v101; // x26
  bool v102; // w0
  __int64 v103; // x1
  WarBoardData___c__DisplayClass188_1_c **v104; // x29
  _BOOL8 v105; // x0
  __int64 v106; // x1
  Il2CppObject *v107; // x27
  System_Collections_Generic_List_int__o *v108; // x25
  System_Collections_Generic_List_int__o *v109; // x24
  __int64 v110; // x0
  __int64 v111; // x1
  __int64 v112; // x0
  __int64 v113; // x1
  __int64 v114; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v116; // x9
  __int64 size; // x10
  System_Int32_array *v118; // x0
  int64_t v119; // x2
  int32_t v120; // w3
  System_String_o *v121; // x4
  BattleSetupInfo_o *v122; // x5
  FollowerInfo_o *v123; // x6
  PartyListViewItem_o *v124; // x7
  __int64 v125; // x0
  __int64 v126; // x1
  PartyOrganizationUtility_o *v127; // x25
  __int64 v128; // x0
  __int64 v129; // x1
  __int64 v130; // x8
  __int64 v131; // x1
  struct System_Int32_array *v132; // x8
  _QWORD *v133; // x9
  __int64 v134; // x10
  System_Int32_array *v135; // x0
  int64_t v136; // x2
  int32_t v137; // w3
  System_String_o *v138; // x4
  BattleSetupInfo_o *v139; // x5
  FollowerInfo_o *v140; // x6
  PartyListViewItem_o *v141; // x7
  Il2CppObject *v142; // x0
  __int64 v143; // x1
  void *monitor; // x8
  HoldReinforcementsData_o *v145; // x0
  __int64 v146; // x9
  System_Collections_Generic_List_int__o *v147; // x8
  __int64 v148; // x1
  struct System_Int32_array *v149; // x9
  _QWORD *v150; // x10
  __int64 v151; // x11
  __int64 v152; // x1
  int64_t v153; // x24
  __int64 v154; // x0
  __int64 v155; // x1
  int64_t v156; // x0
  int64_t v157; // x2
  int32_t v158; // w3
  System_String_o *v159; // x4
  BattleSetupInfo_o *v160; // x5
  FollowerInfo_o *v161; // x6
  PartyListViewItem_o *v162; // x7
  int64_t v163; // x0
  int64_t v164; // x2
  int32_t v165; // w3
  System_String_o *v166; // x4
  BattleSetupInfo_o *v167; // x5
  FollowerInfo_o *v168; // x6
  PartyListViewItem_o *v169; // x7
  __int64 v170; // x8
  __int64 v171; // x1
  int64_t v172; // x2
  int32_t v173; // w3
  System_String_o *v174; // x4
  BattleSetupInfo_o *v175; // x5
  FollowerInfo_o *v176; // x6
  PartyListViewItem_o *v177; // x7
  System_Collections_Generic_List_object__o *v178; // x0
  struct System_Object_array *v179; // x8
  _QWORD *v180; // x9
  __int64 v181; // x10
  Il2CppClass **v182; // x8
  Il2CppObject *v183; // x0
  __int64 v184; // x1
  void *v185; // x8
  HoldReinforcementsData_o *v186; // x0
  __int64 v187; // x9
  System_Collections_Generic_List_int__o *v188; // x8
  __int64 v189; // x1
  struct System_Int32_array *v190; // x9
  _QWORD *v191; // x10
  __int64 v192; // x11
  __int64 v193; // x1
  System_Collections_Generic_List_Enumerator_object__o v195; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v196; // [xsp+20h] [xbp-A0h] BYREF
  WarBoardStageReinforcementsEntity_o *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v198; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4BB22F0 & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_Any_ReinforcementsData___, reinforcementsDatas);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToList_HoldReinforcementsData___, v8);
    sub_1C13D24(&Method_System_Linq_Enumerable_Where_HoldReinforcementsData___, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__Dispose__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__MoveNext__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__get_Current__, v14);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__get_Current__, v15);
    sub_1C13D24(&System_Func_HoldReinforcementsData__bool__TypeInfo, v16);
    sub_1C13D24(&System_Func_ReinforcementsData__bool__TypeInfo, v17);
    sub_1C13D24(&int___TypeInfo, v18);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__AddRange__, v19);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, v20);
    sub_1C13D24(&Method_System_Collections_Generic_List_ReinforcementsData__Add__, v21);
    sub_1C13D24(&Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__, v22);
    sub_1C13D24(&Method_System_Collections_Generic_List_ReinforcementsData__GetEnumerator__, v23);
    sub_1C13D24(&Method_System_Collections_Generic_List_HoldReinforcementsData__RemoveAll__, v24);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__ToArray__, v25);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v26);
    sub_1C13D24(&Method_System_Collections_Generic_List_ReinforcementsData___ctor__, v27);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v28);
    sub_1C13D24(&System_Collections_Generic_List_ReinforcementsData__TypeInfo, v29);
    sub_1C13D24(&System_Predicate_HoldReinforcementsData__TypeInfo, v30);
    sub_1C13D24(&ReinforcementsData_TypeInfo, v31);
    sub_1C13D24(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v32);
    sub_1C13D24(&Method_WarBoardData___c__GetHoldReinforcements_b__188_0__, v33);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass188_0__GetHoldReinforcements_b__1__, v34);
    sub_1C13D24(&WarBoardData___c__DisplayClass188_0_TypeInfo, v35);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass188_1__GetHoldReinforcements_b__2__, v36);
    sub_1C13D24(&WarBoardData___c__DisplayClass188_1_TypeInfo, v37);
    sub_1C13D24(&WarBoardData___c_TypeInfo, v38);
    byte_4BB22F0 = 1;
  }
  memset(&v198, 0, sizeof(v198));
  entity = 0LL;
  memset(&v196, 0, sizeof(v196));
  v39 = (WarBoardData___c__DisplayClass188_0_o *)sub_1C13F70(WarBoardData___c__DisplayClass188_0_TypeInfo);
  WarBoardData___c__DisplayClass188_0___ctor(v39, 0LL);
  if ( !v39 )
    goto LABEL_156;
  v39->fields.targetStageReinforcementsId = targetStageReinforcementsId;
  reinforcementsSaveList = (System_Collections_Generic_List_object__o *)this->fields.reinforcementsSaveList;
  v40 = WarBoardData___c_TypeInfo;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v40 = WarBoardData___c_TypeInfo;
  }
  v43 = *(System_Predicate_object__o **)(*((_QWORD *)v40 + 23) + 232LL);
  if ( !v43 )
  {
    if ( !*((_DWORD *)v40 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v40);
      v40 = WarBoardData___c_TypeInfo;
    }
    v44 = (Il2CppObject *)**((_QWORD **)v40 + 23);
    v43 = (System_Predicate_object__o *)sub_1C13F70(System_Predicate_HoldReinforcementsData__TypeInfo);
    System_Predicate_object____ctor(v43, v44, Method_WarBoardData___c__GetHoldReinforcements_b__188_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__188_0 = (struct System_Predicate_HoldReinforcementsData__o *)v43;
    sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->__9__188_0, (int64_t)v43, v46, v47, v48, v49, v50, v51);
  }
  if ( !reinforcementsSaveList )
    goto LABEL_156;
  System_Collections_Generic_List_object___RemoveAll(
    reinforcementsSaveList,
    (System_Predicate_T__o *)v43,
    (const MethodInfo_362E828 *)Method_System_Collections_Generic_List_HoldReinforcementsData__RemoveAll__);
  v52 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_ReinforcementsData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v52,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_ReinforcementsData___ctor__);
  *reinforcementsDatas = (System_Collections_Generic_List_ReinforcementsData__o *)v52;
  sub_1C13CC8((PartyOrganizationUtility_o *)reinforcementsDatas, (int64_t)v52, v53, v54, v55, v56, v57, v58);
  v59 = this->fields.reinforcementsSaveList;
  if ( (v39->fields.targetStageReinforcementsId & 0x80000000) == 0 )
  {
    v60 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_HoldReinforcementsData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v60,
      (Il2CppObject *)v39,
      Method_WarBoardData___c__DisplayClass188_0__GetHoldReinforcements_b__1__,
      0LL);
    v61 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v59,
            (System_Func_TSource__bool__o *)v60,
            (const MethodInfo_2FCEBC0 *)Method_System_Linq_Enumerable_Where_HoldReinforcementsData___);
    v40 = System_Linq_Enumerable__ToList_object_(
            v61,
            (const MethodInfo_2FCCA90 *)Method_System_Linq_Enumerable_ToList_HoldReinforcementsData___);
    v59 = (struct System_Collections_Generic_List_HoldReinforcementsData__o *)v40;
  }
  if ( !v59 )
LABEL_156:
    sub_1C13F80(v40, v41);
  v62 = (const MethodInfo_33BEBE8 **)&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__;
  v63 = &WarBoardData___c__DisplayClass188_1_TypeInfo;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v195,
    (System_Collections_Generic_List_object__o *)v59,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
  v198 = v195;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(&v198, *v62) )
  {
    v64 = sub_1C13F70(*v63);
    WarBoardData___c__DisplayClass188_1___ctor((WarBoardData___c__DisplayClass188_1_o *)v64, 0LL);
    if ( !v64 )
      sub_1C13F80(v65, v66);
    current = v198.fields._current;
    *(_QWORD *)(v64 + 16) = v198.fields._current;
    v74 = (HoldReinforcementsData_o **)(v64 + 16);
    sub_1C13CC8((PartyOrganizationUtility_o *)(v64 + 16), (int64_t)current, v67, v68, v69, v70, v71, v72);
    stageEntity = this->fields.stageEntity;
    if ( !stageEntity )
      sub_1C13F80(v75, v76);
    if ( !*v74 )
      sub_1C13F80(v75, v76);
    if ( !mst )
      sub_1C13F80(v75, v76);
    v78 = WarBoardStageReinforcementsMaster__TryGetEntity(
            mst,
            &entity,
            stageEntity->fields.id,
            (*v74)->fields._id_k__BackingField,
            0LL);
    if ( v78 )
    {
      if ( !entity )
        sub_1C13F80(v78, v79);
      DeploySquareIds = WarBoardData__GetDeploySquareIds(this, entity->fields.squareIds, v80);
      if ( !entity )
        sub_1C13F80(DeploySquareIds, v82);
      if ( !*v74 )
        sub_1C13F80(DeploySquareIds, v82);
      limitNums = entity->fields.limitNums;
      if ( !limitNums )
        sub_1C13F80(DeploySquareIds, v82);
      index_k__BackingField = (*v74)->fields._index_k__BackingField;
      if ( (unsigned int)index_k__BackingField >= limitNums->max_length )
        sub_1C13F88(DeploySquareIds, v82);
      v86 = DeploySquareIds;
      if ( limitNums->m_Items[index_k__BackingField + 1] < 1 )
      {
        v91 = 0;
      }
      else
      {
        ReinfocementsPieces = WarBoardData__GetReinfocementsPieces(this, entity->fields.id, index_k__BackingField, v83);
        if ( !ReinfocementsPieces )
          sub_1C13F80(0LL, v88);
        if ( !entity )
          sub_1C13F80(ReinfocementsPieces, v88);
        if ( !*v74 )
          sub_1C13F80(ReinfocementsPieces, v88);
        v89 = entity->fields.limitNums;
        if ( !v89 )
          sub_1C13F80(ReinfocementsPieces, v88);
        v90 = (*v74)->fields._index_k__BackingField;
        if ( (unsigned int)v90 >= v89->max_length )
          sub_1C13F88(ReinfocementsPieces, v88);
        v91 = v89->m_Items[v90 + 1] <= (signed int)ReinfocementsPieces->max_length;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !Instance )
        sub_1C13F80(0LL, v93);
      IsPlayerTurn = WarBoardManager__IsPlayerTurn((WarBoardManager_o *)Instance, 0LL);
      if ( !entity )
        sub_1C13F80(IsPlayerTurn, v95);
      if ( !v86 )
        sub_1C13F80(IsPlayerTurn, v95);
      if ( !*v74 )
        sub_1C13F80(IsPlayerTurn, v95);
      v96 = (*v74)->fields._index_k__BackingField;
      max_length = v86->max_length;
      if ( (int)v96 >= max_length )
      {
        v98 = 0;
      }
      else
      {
        if ( (unsigned int)v96 >= max_length )
          sub_1C13F88(IsPlayerTurn, v95);
        v98 = v86->m_Items[v96 + 1] >= 0 && !v91;
      }
      if ( (IsPlayerTurn ^ (entity->fields.forceId != 0)) & (unsigned int)v98 )
      {
        v99 = v62;
        v100 = (System_Collections_Generic_List_T__o *)*reinforcementsDatas;
        v101 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_ReinforcementsData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v101,
          (Il2CppObject *)v64,
          Method_WarBoardData___c__DisplayClass188_1__GetHoldReinforcements_b__2__,
          0LL);
        v102 = BasicHelper__Any_object_(
                 v100,
                 (System_Func_T__bool__o *)v101,
                 (const MethodInfo_2F7A3D8 *)Method_BasicHelper_Any_ReinforcementsData___);
        v62 = v99;
        if ( v102 )
        {
          if ( !*reinforcementsDatas )
            sub_1C13F80(0LL, v103);
          v104 = v63;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v195,
            (System_Collections_Generic_List_object__o *)*reinforcementsDatas,
            (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_ReinforcementsData__GetEnumerator__);
          v196 = v195;
          do
          {
            v105 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &v196,
                     (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__MoveNext__);
            if ( !v105 )
            {
              v63 = v104;
              goto LABEL_76;
            }
            v107 = v196.fields._current;
            if ( !v196.fields._current )
              sub_1C13F80(v105, v106);
            if ( !*v74 )
              sub_1C13F80(v105, v106);
          }
          while ( LODWORD(v196.fields._current[1].klass) != (*v74)->fields._id_k__BackingField );
          v108 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor(
            v108,
            (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
          v109 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor(
            v109,
            (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
          if ( !v108 )
            sub_1C13F80(v110, v111);
          System_Collections_Generic_List_int___AddRange(
            v108,
            (System_Collections_Generic_IEnumerable_T__o *)v107[1].monitor,
            (const MethodInfo_36103B4 *)Method_System_Collections_Generic_List_int__AddRange__);
          if ( !*v74 )
            sub_1C13F80(v112, v113);
          v114 = (unsigned int)(*v74)->fields._index_k__BackingField;
          items = v108->fields._items;
          v116 = Method_System_Collections_Generic_List_int__Add__;
          ++v108->fields._version;
          if ( !items )
            sub_1C13F80(v112, v114);
          size = v108->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v108,
              v114,
              *(const MethodInfo_36101A8 **)(*(_QWORD *)(v116[4] + 192LL) + 112LL));
          }
          else
          {
            v108->fields._size = size + 1;
            items->m_Items[size + 1] = v114;
          }
          v118 = System_Collections_Generic_List_int___ToArray(
                   v108,
                   (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
          v107[1].monitor = v118;
          sub_1C13CC8((PartyOrganizationUtility_o *)&v107[1].monitor, (int64_t)v118, v119, v120, v121, v122, v123, v124);
          if ( !v109 )
            sub_1C13F80(v125, v126);
          v127 = (PartyOrganizationUtility_o *)&v107[2];
          v62 = v99;
          System_Collections_Generic_List_int___AddRange(
            v109,
            (System_Collections_Generic_IEnumerable_T__o *)v107[2].klass,
            (const MethodInfo_36103B4 *)Method_System_Collections_Generic_List_int__AddRange__);
          if ( !*v74 )
            sub_1C13F80(v128, v129);
          v130 = (*v74)->fields._index_k__BackingField;
          v63 = v104;
          if ( (unsigned int)v130 >= v86->max_length )
            sub_1C13F88(v128, v129);
          v131 = (unsigned int)v86->m_Items[v130 + 1];
          v132 = v109->fields._items;
          v133 = Method_System_Collections_Generic_List_int__Add__;
          ++v109->fields._version;
          if ( !v132 )
            sub_1C13F80(v128, v131);
          v134 = v109->fields._size;
          if ( (unsigned int)v134 >= v132->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v109,
              v131,
              *(const MethodInfo_36101A8 **)(*(_QWORD *)(v133[4] + 192LL) + 112LL));
          }
          else
          {
            v109->fields._size = v134 + 1;
            v132->m_Items[v134 + 1] = v131;
          }
          v135 = System_Collections_Generic_List_int___ToArray(
                   v109,
                   (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
          v127->klass = (PartyOrganizationUtility_c *)v135;
          sub_1C13CC8(v127, (int64_t)v135, v136, v137, v138, v139, v140, v141);
          v142 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !v142 )
            sub_1C13F80(0LL, v143);
          monitor = v142[27].monitor;
          if ( !monitor )
            sub_1C13F80(v142, v143);
          v145 = *v74;
          if ( !*v74 )
            sub_1C13F80(0LL, v143);
          v146 = v145->fields._index_k__BackingField;
          if ( (unsigned int)v146 >= v86->max_length )
            sub_1C13F88(v145, v143);
          v147 = (System_Collections_Generic_List_int__o *)*((_QWORD *)monitor + 29);
          if ( !v147 )
            sub_1C13F80(v145, v143);
          v148 = (unsigned int)v86->m_Items[v146 + 1];
          v149 = v147->fields._items;
          v150 = Method_System_Collections_Generic_List_int__Add__;
          ++v147->fields._version;
          if ( !v149 )
            sub_1C13F80(v145, v148);
          v151 = v147->fields._size;
          if ( (unsigned int)v151 >= v149->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v147,
              v148,
              *(const MethodInfo_36101A8 **)(*(_QWORD *)(v150[4] + 192LL) + 112LL));
            v145 = *v74;
            if ( !*v74 )
              sub_1C13F80(0LL, v152);
          }
          else
          {
            v147->fields._size = v151 + 1;
            v149->m_Items[v151 + 1] = v148;
          }
          HoldReinforcementsData__DecreaseHoldNum(v145, 0LL);
LABEL_76:
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v196,
            (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__Dispose__);
        }
        else
        {
          v153 = sub_1C13F70(ReinforcementsData_TypeInfo);
          ReinforcementsData___ctor((ReinforcementsData_o *)v153, 0LL);
          if ( !entity )
            sub_1C13F80(v154, v155);
          if ( !v153 )
            sub_1C13F80(v154, v155);
          *(_DWORD *)(v153 + 16) = entity->fields.id;
          v156 = sub_1C13DCC(int___TypeInfo, 1LL);
          if ( !*v74 )
            sub_1C13F80(v156, v156);
          if ( !v156 )
            sub_1C13F80(0LL, 0LL);
          if ( !*(_DWORD *)(v156 + 24) )
            sub_1C13F88(v156, v156);
          *(_DWORD *)(v156 + 32) = (*v74)->fields._index_k__BackingField;
          *(_QWORD *)(v153 + 24) = v156;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v153 + 24), v156, v157, v158, v159, v160, v161, v162);
          v163 = sub_1C13DCC(int___TypeInfo, 1LL);
          if ( !*v74 )
            sub_1C13F80(v163, v163);
          v170 = (*v74)->fields._index_k__BackingField;
          if ( (unsigned int)v170 >= v86->max_length )
            sub_1C13F88(v163, v163);
          if ( !v163 )
            sub_1C13F80(0LL, 0LL);
          if ( !*(_DWORD *)(v163 + 24) )
            sub_1C13F88(v163, v163);
          *(_DWORD *)(v163 + 32) = v86->m_Items[v170 + 1];
          *(_QWORD *)(v153 + 32) = v163;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v153 + 32), v163, v164, v165, v166, v167, v168, v169);
          v178 = (System_Collections_Generic_List_object__o *)*reinforcementsDatas;
          if ( !*reinforcementsDatas )
            sub_1C13F80(0LL, v171);
          v179 = v178->fields._items;
          v180 = Method_System_Collections_Generic_List_ReinforcementsData__Add__;
          ++v178->fields._version;
          if ( !v179 )
            sub_1C13F80(v178, v171);
          v181 = v178->fields._size;
          if ( (unsigned int)v181 >= v179->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v178,
              (Il2CppObject *)v153,
              *(const MethodInfo_362D1CC **)(*(_QWORD *)(v180[4] + 192LL) + 112LL));
          }
          else
          {
            v182 = &v179->obj.klass + v181;
            v178->fields._size = v181 + 1;
            v182[4] = (Il2CppClass *)v153;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v182 + 4), v153, v172, v173, v174, v175, v176, v177);
          }
          v183 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !v183 )
            sub_1C13F80(0LL, v184);
          v185 = v183[27].monitor;
          if ( !v185 )
            sub_1C13F80(v183, v184);
          v186 = *v74;
          if ( !*v74 )
            sub_1C13F80(0LL, v184);
          v187 = v186->fields._index_k__BackingField;
          if ( (unsigned int)v187 >= v86->max_length )
            sub_1C13F88(v186, v184);
          v188 = (System_Collections_Generic_List_int__o *)*((_QWORD *)v185 + 29);
          if ( !v188 )
            sub_1C13F80(v186, v184);
          v189 = (unsigned int)v86->m_Items[v187 + 1];
          v190 = v188->fields._items;
          v191 = Method_System_Collections_Generic_List_int__Add__;
          ++v188->fields._version;
          if ( !v190 )
            sub_1C13F80(v186, v189);
          v192 = v188->fields._size;
          if ( (unsigned int)v192 >= v190->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v188,
              v189,
              *(const MethodInfo_36101A8 **)(*(_QWORD *)(v191[4] + 192LL) + 112LL));
            v186 = *v74;
            if ( !*v74 )
              sub_1C13F80(0LL, v193);
          }
          else
          {
            v188->fields._size = v192 + 1;
            v190->m_Items[v192 + 1] = v189;
          }
          HoldReinforcementsData__DecreaseHoldNum(v186, 0LL);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v198,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
}


int32_t __fastcall WarBoardData__GetHoldReinforcementsCount(WarBoardData_o *this, const MethodInfo *method)
{
  WarBoardData_o *v2; // x19
  struct System_Collections_Generic_List_HoldReinforcementsData__o *reinforcementsSaveList; // x8

  v2 = this;
  if ( (byte_4BB22DC & 1) == 0 )
  {
    this = (WarBoardData_o *)sub_1C13D24(
                               &Method_System_Collections_Generic_List_HoldReinforcementsData__get_Count__,
                               method);
    byte_4BB22DC = 1;
  }
  reinforcementsSaveList = v2->fields.reinforcementsSaveList;
  if ( !reinforcementsSaveList )
    sub_1C13F80(this, method);
  return reinforcementsSaveList->fields._size;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall WarBoardData__GetInRangeSquareIndecies(
        WarBoardData_o *this,
        int32_t start,
        int32_t range,
        bool ignoreStart,
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
  WarBoardData___c__DisplayClass123_0_o *v17; // x19
  __int64 v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x4
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *v21; // x20
  WarBoardData___c_c *v22; // x0
  System_Func_object__int__o *_9__123_0; // x21
  Il2CppObject *v24; // x22
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x20
  System_Func_int__bool__o *v33; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *rangeSearches; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BB22C4 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Select_WarBoardData_SquareRangeSearch__int___, *(_QWORD *)&start);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_int___, v9);
    sub_1C13D24(&Method_System_Linq_Enumerable_Where_int___, v10);
    sub_1C13D24(&System_Func_int__bool__TypeInfo, v11);
    sub_1C13D24(&System_Func_WarBoardData_SquareRangeSearch__int__TypeInfo, v12);
    sub_1C13D24(&Method_WarBoardData___c__GetInRangeSquareIndecies_b__123_0__, v13);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass123_0__GetInRangeSquareIndecies_b__1__, v14);
    sub_1C13D24(&WarBoardData___c__DisplayClass123_0_TypeInfo, v15);
    sub_1C13D24(&WarBoardData___c_TypeInfo, v16);
    byte_4BB22C4 = 1;
  }
  v17 = (WarBoardData___c__DisplayClass123_0_o *)sub_1C13F70(WarBoardData___c__DisplayClass123_0_TypeInfo);
  WarBoardData___c__DisplayClass123_0___ctor(v17, 0LL);
  if ( !v17 )
    sub_1C13F80(v18, v19);
  v17->fields.start = start;
  v17->fields.ignoreStart = ignoreStart;
  rangeSearches = 0LL;
  WarBoardData__SearchInRangeSquares(this, start, range, &rangeSearches, v20);
  v21 = rangeSearches;
  if ( !rangeSearches )
    return 0LL;
  v22 = WarBoardData___c_TypeInfo;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v22 = WarBoardData___c_TypeInfo;
  }
  _9__123_0 = (System_Func_object__int__o *)v22->static_fields->__9__123_0;
  if ( !_9__123_0 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = WarBoardData___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v22->static_fields->__9;
    _9__123_0 = (System_Func_object__int__o *)sub_1C13F70(System_Func_WarBoardData_SquareRangeSearch__int__TypeInfo);
    System_Func_object__int____ctor(_9__123_0, v24, Method_WarBoardData___c__GetInRangeSquareIndecies_b__123_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__123_0 = (struct System_Func_WarBoardData_SquareRangeSearch__int__o *)_9__123_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__123_0,
      (int64_t)_9__123_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v21,
                                                               (System_Func_TSource__TResult__o *)_9__123_0,
                                                               (const MethodInfo_2FC022C *)Method_System_Linq_Enumerable_Select_WarBoardData_SquareRangeSearch__int___);
  v33 = (System_Func_int__bool__o *)sub_1C13F70(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v33,
    (Il2CppObject *)v17,
    Method_WarBoardData___c__DisplayClass123_0__GetInRangeSquareIndecies_b__1__,
    0LL);
  v34 = System_Linq_Enumerable__Where_int_(
          v32,
          (System_Func_TSource__bool__o *)v33,
          (const MethodInfo_2FCE8EC *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v34,
           (const MethodInfo_2FC8B9C *)Method_System_Linq_Enumerable_ToArray_int___);
}


// local variable allocation has failed, the output may be wrong!
WarBoardSquareData_array *__fastcall WarBoardData__GetInRangeSquares(
        WarBoardData_o *this,
        int32_t start,
        int32_t range,
        bool ignoreStart,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  WarBoardSquareData_array *result; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x20
  System_Func_T__TResult__o *v14; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_4BB22C5 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Select_int__WarBoardSquareData___, *(_QWORD *)&start);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_WarBoardSquareData___, v9);
    sub_1C13D24(&System_Func_int__WarBoardSquareData__TypeInfo, v10);
    sub_1C13D24(&Method_WarBoardData__GetInRangeSquares_b__124_0__, v11);
    byte_4BB22C5 = 1;
  }
  result = (WarBoardSquareData_array *)WarBoardData__GetInRangeSquareIndecies(this, start, range, ignoreStart, method);
  if ( result )
  {
    v13 = (System_Collections_Generic_IEnumerable_TSource__o *)result;
    v14 = (System_Func_T__TResult__o *)sub_1C13F70(System_Func_int__WarBoardSquareData__TypeInfo);
    System_Func_int__object____ctor(v14, (Il2CppObject *)this, Method_WarBoardData__GetInRangeSquares_b__124_0__, 0LL);
    v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                 v13,
                                                                 (System_Func_TSource__TResult__o *)v14,
                                                                 (const MethodInfo_2FBE434 *)Method_System_Linq_Enumerable_Select_int__WarBoardSquareData___);
    return (WarBoardSquareData_array *)System_Linq_Enumerable__ToArray_object_(
                                         v15,
                                         (const MethodInfo_2FC8D34 *)Method_System_Linq_Enumerable_ToArray_WarBoardSquareData___);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
WarBoardItemData_o *__fastcall WarBoardData__GetItem(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WarBoardData___c__DisplayClass135_0_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_TSource__o *items; // x19
  System_Func_object__bool__o *v12; // x20

  if ( (byte_4BB22CC & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___, *(_QWORD *)&squareIndex);
    sub_1C13D24(&System_Func_WarBoardItemData__bool__TypeInfo, v5);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass135_0__GetItem_b__0__, v6);
    sub_1C13D24(&WarBoardData___c__DisplayClass135_0_TypeInfo, v7);
    byte_4BB22CC = 1;
  }
  v8 = (WarBoardData___c__DisplayClass135_0_o *)sub_1C13F70(WarBoardData___c__DisplayClass135_0_TypeInfo);
  WarBoardData___c__DisplayClass135_0___ctor(v8, 0LL);
  if ( !v8 )
    sub_1C13F80(v9, v10);
  v8->fields.squareIndex = squareIndex;
  items = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.items;
  v12 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardItemData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_WarBoardData___c__DisplayClass135_0__GetItem_b__0__,
    0LL);
  return (WarBoardItemData_o *)System_Linq_Enumerable__FirstOrDefault_object__50015312(
                                 items,
                                 (System_Func_TSource__bool__o *)v12,
                                 (const MethodInfo_2FB2C50 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___);
}


int32_t __fastcall WarBoardData__GetItemCost(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  WarBoardActionPointEntity_o *ActionPointEntity; // x0

  ActionPointEntity = WarBoardData__GetActionPointEntity(this, forceId, groupId, method);
  if ( ActionPointEntity )
    LODWORD(ActionPointEntity) = ActionPointEntity->fields.itemCost;
  return (int)ActionPointEntity;
}


WarBoardItemData_array *__fastcall WarBoardData__GetItems(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.items;
}


uint32_t __fastcall WarBoardData__GetLastSelectPieceUniqueIndex(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8

  localSaveData = this->fields.localSaveData;
  if ( !localSaveData )
    sub_1C13F80(this, method);
  return localSaveData->fields.lastSelectPieceUniqueIndex;
}


System_UInt32_array *__fastcall WarBoardData__GetLatestBattlePieceUniqueIndexes(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  return this->fields.latestBattlePieceUniqueIndexes;
}


System_Int32_array *__fastcall WarBoardData__GetLatestPieceActionSquareIndexes(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  return this->fields.latestPieceActionSquareIndexes;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WarBoardData__GetMoveCost(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        bool swap,
        bool isMaster,
        const MethodInfo *method)
{
  WarBoardActionPointEntity_o *ActionPointEntity; // x0

  ActionPointEntity = WarBoardData__GetActionPointEntity(this, forceId, groupId, (const MethodInfo *)swap);
  if ( ActionPointEntity )
  {
    if ( swap )
    {
      if ( isMaster )
        LODWORD(ActionPointEntity) = ActionPointEntity->fields.moveCost + ActionPointEntity->fields.masterMoveCost;
      else
        LODWORD(ActionPointEntity) = 2 * ActionPointEntity->fields.moveCost;
    }
    else if ( isMaster )
    {
      LODWORD(ActionPointEntity) = ActionPointEntity->fields.masterMoveCost;
    }
    else
    {
      LODWORD(ActionPointEntity) = ActionPointEntity->fields.moveCost;
    }
  }
  return (int)ActionPointEntity;
}


// local variable allocation has failed, the output may be wrong!
WarBoardStageNpcEntity_o *__fastcall WarBoardData__GetNpcEntity(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  unsigned __int8 v4; // w19
  System_Collections_Generic_Dictionary_TKey__TValue__o *npcEntityDict; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v4 = groupId;
  if ( (byte_4BB22AB & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__TryGetValue__,
      *(_QWORD *)&forceId);
    byte_4BB22AB = 1;
  }
  value = 0LL;
  npcEntityDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.npcEntityDict;
  if ( !npcEntityDict )
    sub_1C13F80(0LL, *(_QWORD *)&forceId);
  System_Collections_Generic_Dictionary_uint__object___TryGetValue(
    npcEntityDict,
    (forceId << 24) | (v4 << 16),
    &value,
    (const MethodInfo_332CDA4 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__TryGetValue__);
  return (WarBoardStageNpcEntity_o *)value;
}


int32_t __fastcall WarBoardData__GetPartySkillId(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardStageEntity_o *stageEntity; // x8

  stageEntity = this->fields.stageEntity;
  if ( !stageEntity )
    sub_1C13F80(this, method);
  return stageEntity->fields.partySkillId;
}


// local variable allocation has failed, the output may be wrong!
WarBoardPieceData_array *__fastcall WarBoardData__GetPicesForRange(
        WarBoardData_o *this,
        int32_t start,
        int32_t range,
        bool ignoreStart,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x23
  const MethodInfo *v14; // x4
  System_Int32_array *v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v24; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0

  if ( (byte_4BB22BF & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, *(_QWORD *)&start);
    sub_1C13D24(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v9);
    sub_1C13D24(&System_Func_WarBoardPieceData__bool__TypeInfo, v10);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass118_0__GetPicesForRange_b__0__, v11);
    sub_1C13D24(&WarBoardData___c__DisplayClass118_0_TypeInfo, v12);
    byte_4BB22BF = 1;
  }
  v13 = sub_1C13F70(WarBoardData___c__DisplayClass118_0_TypeInfo);
  WarBoardData___c__DisplayClass118_0___ctor((WarBoardData___c__DisplayClass118_0_o *)v13, 0LL);
  v15 = WarBoardData__GetInRangeSquareIndecies(this, start, range, ignoreStart, v14);
  if ( !v13 )
    sub_1C13F80(v15, v16);
  *(_QWORD *)(v13 + 16) = v15;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)v15, v17, v18, v19, v20, v21, v22);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v24 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v24,
    (Il2CppObject *)v13,
    Method_WarBoardData___c__DisplayClass118_0__GetPicesForRange_b__0__,
    0LL);
  v25 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)v24,
          (const MethodInfo_2FCEBC0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v25,
                                      (const MethodInfo_2FC8D34 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


// local variable allocation has failed, the output may be wrong!
WarBoardPieceData_array *__fastcall WarBoardData__GetPicesForRangeIsAlive(
        WarBoardData_o *this,
        int32_t start,
        int32_t range,
        bool ignoreStart,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x23
  const MethodInfo *v14; // x4
  System_Int32_array *v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v24; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0

  if ( (byte_4BB22C0 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, *(_QWORD *)&start);
    sub_1C13D24(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v9);
    sub_1C13D24(&System_Func_WarBoardPieceData__bool__TypeInfo, v10);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass119_0__GetPicesForRangeIsAlive_b__0__, v11);
    sub_1C13D24(&WarBoardData___c__DisplayClass119_0_TypeInfo, v12);
    byte_4BB22C0 = 1;
  }
  v13 = sub_1C13F70(WarBoardData___c__DisplayClass119_0_TypeInfo);
  WarBoardData___c__DisplayClass119_0___ctor((WarBoardData___c__DisplayClass119_0_o *)v13, 0LL);
  v15 = WarBoardData__GetInRangeSquareIndecies(this, start, range, ignoreStart, v14);
  if ( !v13 )
    sub_1C13F80(v15, v16);
  *(_QWORD *)(v13 + 16) = v15;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)v15, v17, v18, v19, v20, v21, v22);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v24 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v24,
    (Il2CppObject *)v13,
    Method_WarBoardData___c__DisplayClass119_0__GetPicesForRangeIsAlive_b__0__,
    0LL);
  v25 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)v24,
          (const MethodInfo_2FCEBC0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v25,
                                      (const MethodInfo_2FC8D34 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


// local variable allocation has failed, the output may be wrong!
WarBoardPieceData_o *__fastcall WarBoardData__GetPiece(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        int32_t index,
        bool ignoreDead,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  WarBoardData___c__DisplayClass100_0_o *v15; // x24
  __int64 v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v19; // x20

  if ( (byte_4BB22B1 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, *(_QWORD *)&forceId);
    sub_1C13D24(&System_Func_WarBoardPieceData__bool__TypeInfo, v11);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass100_0__GetPiece_b__0__, v12);
    sub_1C13D24(&WarBoardData___c__DisplayClass100_0_TypeInfo, v13);
    sub_1C13D24(&WarBoardPieceData_TypeInfo, v14);
    byte_4BB22B1 = 1;
  }
  v15 = (WarBoardData___c__DisplayClass100_0_o *)sub_1C13F70(WarBoardData___c__DisplayClass100_0_TypeInfo);
  WarBoardData___c__DisplayClass100_0___ctor(v15, 0LL);
  if ( !v15 )
    sub_1C13F80(v16, v17);
  v15->fields.ignoreDead = ignoreDead;
  if ( !WarBoardPieceData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardPieceData_TypeInfo);
  v15->fields.uniqueId = WarBoardPieceData__GetUniqueIndex(forceId, groupId, index, 0LL);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v19 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v19,
    (Il2CppObject *)v15,
    Method_WarBoardData___c__DisplayClass100_0__GetPiece_b__0__,
    0LL);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_object__50015312(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v19,
                                  (const MethodInfo_2FB2C50 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


int32_t __fastcall WarBoardData__GetPieceDispPriority(
        WarBoardData_o *this,
        WarBoardPieceData_o *piece,
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
  const MethodInfo *v17; // x1
  System_Object_array *AlivePieces; // x19
  System_Predicate_object__o *v19; // x20

  if ( (byte_4BB22D3 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Array_FindIndex_WarBoardPieceData___, piece);
    sub_1C13D24(&System_Predicate_WarBoardPieceData__TypeInfo, v5);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass145_0__GetPieceDispPriority_b__0__, v6);
    sub_1C13D24(&WarBoardData___c__DisplayClass145_0_TypeInfo, v7);
    byte_4BB22D3 = 1;
  }
  v8 = sub_1C13F70(WarBoardData___c__DisplayClass145_0_TypeInfo);
  WarBoardData___c__DisplayClass145_0___ctor((WarBoardData___c__DisplayClass145_0_o *)v8, 0LL);
  if ( !v8 )
    sub_1C13F80(v9, v10);
  *(_QWORD *)(v8 + 16) = piece;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)piece, v11, v12, v13, v14, v15, v16);
  AlivePieces = (System_Object_array *)WarBoardData__GetAlivePieces(this, v17);
  v19 = (System_Predicate_object__o *)sub_1C13F70(System_Predicate_WarBoardPieceData__TypeInfo);
  System_Predicate_object____ctor(
    v19,
    (Il2CppObject *)v8,
    Method_WarBoardData___c__DisplayClass145_0__GetPieceDispPriority_b__0__,
    0LL);
  return System_Array__FindIndex_object_(
           AlivePieces,
           (System_Predicate_T__o *)v19,
           (const MethodInfo_308AE68 *)Method_System_Array_FindIndex_WarBoardPieceData___);
}


int32_t __fastcall WarBoardData__GetPieceMaxDispPriotiry(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceData_array *pieces; // x8

  pieces = this->fields.pieces;
  if ( !pieces )
    sub_1C13F80(this, method);
  return pieces->max_length;
}


// local variable allocation has failed, the output may be wrong!
WarBoardPieceData_o *__fastcall WarBoardData__GetPieceOnDisplay(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  WarBoardPieceData_o *result; // x0
  WarBoardPieceData_o *v11; // x19
  UnityEngine_Object_o *pieceComponent; // x20
  __int64 v13; // x1
  UnityEngine_Component_o *gameObject; // x0
  bool activeInHierarchy; // w8

  if ( (byte_4BB22B4 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, *(_QWORD *)&forceId);
    byte_4BB22B4 = 1;
  }
  result = WarBoardData__GetPiece(this, forceId, groupId, index, 0, v5);
  if ( result )
  {
    v11 = result;
    if ( !result->fields._isDead_k__BackingField )
      return v11;
    pieceComponent = (UnityEngine_Object_o *)result->fields.pieceComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(pieceComponent, 0LL, 0LL) )
      return v11;
    gameObject = (UnityEngine_Component_o *)v11->fields.pieceComponent;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_1C13F80(gameObject, v13);
    }
    activeInHierarchy = UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)gameObject, 0LL);
    result = 0LL;
    if ( activeInHierarchy )
      return v11;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WarBoardData__GetPiecePosition(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  WarBoardData___c__DisplayClass99_0_o *v13; // x23
  __int64 UniqueIndex; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v17; // x20
  Il2CppObject *v18; // x0

  if ( (byte_4BB22B0 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, *(_QWORD *)&forceId);
    sub_1C13D24(&System_Func_WarBoardPieceData__bool__TypeInfo, v9);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass99_0__GetPiecePosition_b__0__, v10);
    sub_1C13D24(&WarBoardData___c__DisplayClass99_0_TypeInfo, v11);
    sub_1C13D24(&WarBoardPieceData_TypeInfo, v12);
    byte_4BB22B0 = 1;
  }
  v13 = (WarBoardData___c__DisplayClass99_0_o *)sub_1C13F70(WarBoardData___c__DisplayClass99_0_TypeInfo);
  WarBoardData___c__DisplayClass99_0___ctor(v13, 0LL);
  if ( !WarBoardPieceData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardPieceData_TypeInfo);
  UniqueIndex = WarBoardPieceData__GetUniqueIndex(forceId, groupId, index, 0LL);
  if ( !v13 )
    sub_1C13F80(UniqueIndex, v15);
  v13->fields.uniqueId = UniqueIndex;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v17 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v13,
    Method_WarBoardData___c__DisplayClass99_0__GetPiecePosition_b__0__,
    0LL);
  v18 = System_Linq_Enumerable__FirstOrDefault_object__50015312(
          pieces,
          (System_Func_TSource__bool__o *)v17,
          (const MethodInfo_2FB2C50 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
  if ( v18 )
    return (int32_t)v18[4].klass;
  else
    return -1;
}


// local variable allocation has failed, the output may be wrong!
WarBoardPieceData_o *__fastcall WarBoardData__GetPiece_36396444(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WarBoardData___c__DisplayClass101_0_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v12; // x20

  if ( (byte_4BB22B2 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, *(_QWORD *)&squareIndex);
    sub_1C13D24(&System_Func_WarBoardPieceData__bool__TypeInfo, v5);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass101_0__GetPiece_b__0__, v6);
    sub_1C13D24(&WarBoardData___c__DisplayClass101_0_TypeInfo, v7);
    byte_4BB22B2 = 1;
  }
  v8 = (WarBoardData___c__DisplayClass101_0_o *)sub_1C13F70(WarBoardData___c__DisplayClass101_0_TypeInfo);
  WarBoardData___c__DisplayClass101_0___ctor(v8, 0LL);
  if ( !v8 )
    sub_1C13F80(v9, v10);
  v8->fields.squareIndex = squareIndex;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v12 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_WarBoardData___c__DisplayClass101_0__GetPiece_b__0__,
    0LL);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_object__50015312(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v12,
                                  (const MethodInfo_2FB2C50 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


// local variable allocation has failed, the output may be wrong!
WarBoardPieceData_o *__fastcall WarBoardData__GetPiece_36398148(
        WarBoardData_o *this,
        uint32_t uniqueIndex,
        bool ignoreDead,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WarBoardData___c__DisplayClass102_0_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v14; // x20

  if ( (byte_4BB22B3 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, *(_QWORD *)&uniqueIndex);
    sub_1C13D24(&System_Func_WarBoardPieceData__bool__TypeInfo, v7);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass102_0__GetPiece_b__0__, v8);
    sub_1C13D24(&WarBoardData___c__DisplayClass102_0_TypeInfo, v9);
    byte_4BB22B3 = 1;
  }
  v10 = (WarBoardData___c__DisplayClass102_0_o *)sub_1C13F70(WarBoardData___c__DisplayClass102_0_TypeInfo);
  WarBoardData___c__DisplayClass102_0___ctor(v10, 0LL);
  if ( !v10 )
    sub_1C13F80(v11, v12);
  v10->fields.uniqueIndex = uniqueIndex;
  v10->fields.ignoreDead = ignoreDead;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v14 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v10,
    Method_WarBoardData___c__DisplayClass102_0__GetPiece_b__0__,
    0LL);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_object__50015312(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v14,
                                  (const MethodInfo_2FB2C50 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


// local variable allocation has failed, the output may be wrong!
WarBoardPieceData_array *__fastcall WarBoardData__GetPieces(
        WarBoardData_o *this,
        int32_t forceId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WarBoardData___c__DisplayClass116_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v13; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_4BB22BD & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, *(_QWORD *)&forceId);
    sub_1C13D24(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v5);
    sub_1C13D24(&System_Func_WarBoardPieceData__bool__TypeInfo, v6);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass116_0__GetPieces_b__0__, v7);
    sub_1C13D24(&WarBoardData___c__DisplayClass116_0_TypeInfo, v8);
    byte_4BB22BD = 1;
  }
  v9 = (WarBoardData___c__DisplayClass116_0_o *)sub_1C13F70(WarBoardData___c__DisplayClass116_0_TypeInfo);
  WarBoardData___c__DisplayClass116_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_1C13F80(v10, v11);
  v9->fields.forceIdOnly = forceId << 24;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v13 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass116_0__GetPieces_b__0__,
    0LL);
  v14 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_2FCEBC0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v14,
                                      (const MethodInfo_2FC8D34 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


// local variable allocation has failed, the output may be wrong!
WarBoardPieceData_array *__fastcall WarBoardData__GetPieces_36453640(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  unsigned __int8 v4; // w20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WarBoardData___c__DisplayClass117_0_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v15; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0

  v4 = groupId;
  if ( (byte_4BB22BE & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, *(_QWORD *)&forceId);
    sub_1C13D24(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v7);
    sub_1C13D24(&System_Func_WarBoardPieceData__bool__TypeInfo, v8);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass117_0__GetPieces_b__0__, v9);
    sub_1C13D24(&WarBoardData___c__DisplayClass117_0_TypeInfo, v10);
    byte_4BB22BE = 1;
  }
  v11 = (WarBoardData___c__DisplayClass117_0_o *)sub_1C13F70(WarBoardData___c__DisplayClass117_0_TypeInfo);
  WarBoardData___c__DisplayClass117_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_1C13F80(v12, v13);
  v11->fields.forceAndGroup = (forceId << 24) | (v4 << 16);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v15 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v11,
    Method_WarBoardData___c__DisplayClass117_0__GetPieces_b__0__,
    0LL);
  v16 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_2FCEBC0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v16,
                                      (const MethodInfo_2FC8D34 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


System_String_o *__fastcall WarBoardData__GetPlayBgmName(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BB22D5 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_BgmMaster___, method);
    sub_1C13D24(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v3);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4BB22D5 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_BgmMaster___);
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity || !Instance )
    goto LABEL_11;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               stageEntity->fields.playBgmId,
                               (const MethodInfo_3238670 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return (System_String_o *)entity[1].monitor;
LABEL_11:
    sub_1C13F80(Instance, v6);
  }
  return 0LL;
}


System_Int32_array *__fastcall WarBoardData__GetPlayReinforcements(WarBoardData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *playedStageReinforcementsList; // x0

  if ( (byte_4BB22EE & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_int__ToArray__, method);
    byte_4BB22EE = 1;
  }
  playedStageReinforcementsList = this->fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList )
    sub_1C13F80(0LL, method);
  return System_Collections_Generic_List_int___ToArray(
           playedStageReinforcementsList,
           (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardEventData_o *__fastcall WarBoardData__GetPlayedEventData(
        WarBoardData_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WarBoardData___c__DisplayClass164_0_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *listEvent; // x19
  System_Predicate_object__o *v12; // x20

  if ( (byte_4BB22DE & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardEventData__Find__, *(_QWORD *)&eventId);
    sub_1C13D24(&System_Predicate_WarBoardEventData__TypeInfo, v5);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass164_0__GetPlayedEventData_b__0__, v6);
    sub_1C13D24(&WarBoardData___c__DisplayClass164_0_TypeInfo, v7);
    byte_4BB22DE = 1;
  }
  v8 = (WarBoardData___c__DisplayClass164_0_o *)sub_1C13F70(WarBoardData___c__DisplayClass164_0_TypeInfo);
  WarBoardData___c__DisplayClass164_0___ctor(v8, 0LL);
  if ( !v8
    || (v8->fields.eventId = eventId,
        listEvent = (System_Collections_Generic_List_object__o *)this->fields.listEvent,
        v12 = (System_Predicate_object__o *)sub_1C13F70(System_Predicate_WarBoardEventData__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_WarBoardData___c__DisplayClass164_0__GetPlayedEventData_b__0__,
          0LL),
        !listEvent) )
  {
    sub_1C13F80(v9, v10);
  }
  return (WarBoardEventData_o *)System_Collections_Generic_List_object___Find(
                                  listEvent,
                                  (System_Predicate_T__o *)v12,
                                  (const MethodInfo_362D834 *)Method_System_Collections_Generic_List_WarBoardEventData__Find__);
}


WarBoardPieceData_o *__fastcall WarBoardData__GetPlayerMasterPiece(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WarBoardData___c_c *v6; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *_9__104_0; // x20
  Il2CppObject *v9; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4BB22B5 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, method);
    sub_1C13D24(&System_Func_WarBoardPieceData__bool__TypeInfo, v3);
    sub_1C13D24(&Method_WarBoardData___c__GetPlayerMasterPiece_b__104_0__, v4);
    sub_1C13D24(&WarBoardData___c_TypeInfo, v5);
    byte_4BB22B5 = 1;
  }
  v6 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v6 = WarBoardData___c_TypeInfo;
  }
  _9__104_0 = (System_Func_object__bool__o *)v6->static_fields->__9__104_0;
  if ( !_9__104_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = WarBoardData___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__104_0 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__104_0, v9, Method_WarBoardData___c__GetPlayerMasterPiece_b__104_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__104_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__104_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__104_0,
      (int64_t)_9__104_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_object__50015312(
                                  pieces,
                                  (System_Func_TSource__bool__o *)_9__104_0,
                                  (const MethodInfo_2FB2C50 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


WarBoardPieceData_array *__fastcall WarBoardData__GetPlayerPieces(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  WarBoardData___c_c *v7; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *_9__121_0; // x20
  Il2CppObject *v10; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0

  if ( (byte_4BB22C2 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, method);
    sub_1C13D24(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v3);
    sub_1C13D24(&System_Func_WarBoardPieceData__bool__TypeInfo, v4);
    sub_1C13D24(&Method_WarBoardData___c__GetPlayerPieces_b__121_0__, v5);
    sub_1C13D24(&WarBoardData___c_TypeInfo, v6);
    byte_4BB22C2 = 1;
  }
  v7 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v7 = WarBoardData___c_TypeInfo;
  }
  _9__121_0 = (System_Func_object__bool__o *)v7->static_fields->__9__121_0;
  if ( !_9__121_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = WarBoardData___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__121_0 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__121_0, v10, Method_WarBoardData___c__GetPlayerPieces_b__121_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__121_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__121_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__121_0,
      (int64_t)_9__121_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  v18 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__121_0,
          (const MethodInfo_2FCEBC0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v18,
                                      (const MethodInfo_2FC8D34 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


System_Int32_array *__fastcall WarBoardData__GetPrevCondIds(
        WarBoardData_o *this,
        System_Int32_array *commonReleaseIds,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *v11; // x20
  System_Collections_Generic_List_int__o *Master_object; // x0
  __int64 v13; // x1
  __int64 v14; // x8
  WarBoardCommonReleaseMaster_o *v15; // x21
  unsigned __int64 v16; // x23
  int size; // w8
  System_Collections_Generic_List_int__o *v18; // x22
  unsigned int v19; // w25
  __int64 v20; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_4BB22E9 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, commonReleaseIds);
    sub_1C13D24(&DataManager_TypeInfo, v4);
    sub_1C13D24(&Method_System_Linq_Enumerable_Distinct_int___, v5);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToList_int___, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_4BB22E9 = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Collections_Generic_List_int__o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  if ( !commonReleaseIds )
    goto LABEL_25;
  v14 = *(_QWORD *)&commonReleaseIds->max_length;
  if ( (int)v14 >= 1 )
  {
    v15 = (WarBoardCommonReleaseMaster_o *)Master_object;
    v16 = 0LL;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)v14 )
        goto LABEL_26;
      if ( !v15 )
        goto LABEL_25;
      Master_object = (System_Collections_Generic_List_int__o *)WarBoardCommonReleaseMaster__GetList(
                                                                  v15,
                                                                  commonReleaseIds->m_Items[v16 + 1],
                                                                  0LL);
      if ( !Master_object )
        goto LABEL_25;
      size = Master_object->fields._size;
      v18 = Master_object;
      if ( size >= 1 )
        break;
LABEL_22:
      LODWORD(v14) = commonReleaseIds->max_length;
      if ( (__int64)++v16 >= (int)v14 )
        goto LABEL_23;
    }
    v19 = 0;
    while ( v19 < size )
    {
      v20 = *((_QWORD *)&v18->fields._syncRoot + (int)v19);
      if ( !v20 )
        goto LABEL_25;
      if ( (unsigned int)(*(_DWORD *)(v20 + 28) - 7) <= 1 )
      {
        if ( !v11 )
          goto LABEL_25;
        v13 = *(unsigned int *)(v20 + 40);
        items = v11->fields._items;
        v22 = Method_System_Collections_Generic_List_int__Add__;
        ++v11->fields._version;
        if ( !items )
          goto LABEL_25;
        v23 = v11->fields._size;
        if ( (unsigned int)v23 >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v11,
            v13,
            *(const MethodInfo_36101A8 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v11->fields._size = v23 + 1;
          items->m_Items[v23 + 1] = v13;
        }
      }
      size = v18->fields._size;
      if ( (int)++v19 >= size )
        goto LABEL_22;
    }
LABEL_26:
    sub_1C13F88(Master_object, v13);
  }
LABEL_23:
  v24 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v11,
          (const MethodInfo_2FAC754 *)Method_System_Linq_Enumerable_Distinct_int___);
  Master_object = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                              v24,
                                                              (const MethodInfo_2FCC824 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !Master_object )
LABEL_25:
    sub_1C13F80(Master_object, v13);
  return System_Collections_Generic_List_int___ToArray(
           Master_object,
           (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall WarBoardData__GetRandomGutsCount(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8

  localSaveData = this->fields.localSaveData;
  if ( localSaveData )
    return localSaveData->fields.randGutsCount;
  else
    return 0;
}


int32_t __fastcall WarBoardData__GetRandomLogicCount(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8

  localSaveData = this->fields.localSaveData;
  if ( localSaveData )
    return localSaveData->fields.randLogicCount;
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
WarBoardPieceData_array *__fastcall WarBoardData__GetReinfocementsPieces(
        WarBoardData_o *this,
        int32_t stageReinfoId,
        int32_t reinfoIndex,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x21
  const MethodInfo *v11; // x1
  WarBoardPieceData_array *AlivePieces; // x0
  int64_t v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int max_length; // w8
  WarBoardPieceData_array *v21; // x22
  unsigned int v22; // w23
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4BB22C3 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, *(_QWORD *)&stageReinfoId);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v8);
    sub_1C13D24(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v9);
    byte_4BB22C3 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  AlivePieces = WarBoardData__GetAlivePieces(this, v11);
  if ( !AlivePieces )
    goto LABEL_18;
  max_length = AlivePieces->max_length;
  v21 = AlivePieces;
  if ( max_length >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      if ( v22 >= max_length )
        sub_1C13F88(AlivePieces, v13);
      v13 = (int64_t)v21->m_Items[v22];
      if ( !v13 )
        break;
      if ( *(_DWORD *)(v13 + 288) == stageReinfoId && *(_DWORD *)(v13 + 292) == reinfoIndex )
      {
        if ( !v10 )
          break;
        items = v10->fields._items;
        v24 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
        ++v10->fields._version;
        if ( !items )
          break;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)v13,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v26[4] = (Il2CppClass *)v13;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v26 + 4), v13, v14, v15, v16, v17, v18, v19);
        }
      }
      max_length = v21->max_length;
      if ( (int)++v22 >= max_length )
        goto LABEL_16;
    }
LABEL_18:
    sub_1C13F80(AlivePieces, v13);
  }
LABEL_16:
  if ( !v10 )
    goto LABEL_18;
  return (WarBoardPieceData_array *)System_Collections_Generic_List_object___ToArray(
                                      v10,
                                      (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
}


void __fastcall WarBoardData__GetReinforcements(
        WarBoardData_o *this,
        System_Collections_Generic_List_ReinforcementsData__o **reinfoDatas,
        WarBoardStageReinforcementsMaster_o *mst,
        int32_t targetStageReinforcementsId,
        const MethodInfo *method)
{
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
  WarBoardData___c__DisplayClass189_0_o *v23; // x27
  WarBoardStageReinforcementsEntity_o *ReinfocementsPieces; // x0
  __int64 v25; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  WarBoardData___c__DisplayClass189_0_Fields *p_fields; // x24
  System_Collections_Generic_List_int__o *v28; // x23
  const MethodInfo *v29; // x2
  System_Int32_array *DeploySquareIds; // x24
  __int64 v31; // x25
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  __int64 v38; // x19
  const MethodInfo *v39; // x3
  __int64 v40; // x8
  int32_t v41; // w2
  struct System_Int32_array *reinforcementsIds; // x8
  struct System_Int32_array *limitNums; // x8
  WarBoardStageReinforcementsEntity_o *v44; // x8
  struct System_Int32_array *v45; // x9
  __int64 v46; // x10
  _BOOL4 v47; // w20
  _BOOL4 IsOnce; // w27
  WarBoardData_o *v49; // x26
  const MethodInfo *v50; // x1
  __int64 v51; // x29
  __int64 v52; // x22
  System_Func_int__bool__o *v53; // x21
  System_Int32_array *v54; // x28
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  _BOOL4 v61; // w28
  System_Collections_Generic_List_T__o *v62; // x19
  System_Func_object__bool__o *v63; // x21
  const MethodInfo *v64; // x3
  int32_t v65; // w2
  unsigned int max_length; // w8
  __int64 v67; // x8
  struct System_Int32_array *items; // x9
  _QWORD *v69; // x10
  __int64 size; // x11
  __int64 v71; // x9
  struct System_Int32_array *v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  _QWORD *monitor; // x9
  __int64 v76; // x8
  __int64 v77; // x8
  _QWORD *v78; // x9
  __int64 forceId; // x10
  int64_t v80; // x20
  System_Int32_array *v81; // x0
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  System_Int32_array *v88; // x0
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  __int64 v101; // x8
  _QWORD *v102; // x9
  __int64 v103; // x10
  __int64 v104; // x8
  WarBoardData___c__DisplayClass189_0_Fields *v105; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_int__o *v106; // [xsp+10h] [xbp-70h]

  if ( (byte_4BB22F1 & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_Any_int____77470256, reinfoDatas);
    sub_1C13D24(&Method_BasicHelper_Any_ReinforcementsData___, v8);
    sub_1C13D24(&System_Func_int__bool__TypeInfo, v9);
    sub_1C13D24(&System_Func_ReinforcementsData__bool__TypeInfo, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_ReinforcementsData__Add__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__ToArray__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__get_Count__, v15);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v16);
    sub_1C13D24(&ReinforcementsData_TypeInfo, v17);
    sub_1C13D24(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v18);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass189_0__GetReinforcements_b__0__, v19);
    sub_1C13D24(&WarBoardData___c__DisplayClass189_0_TypeInfo, v20);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__1__, v21);
    sub_1C13D24(&WarBoardData___c__DisplayClass189_1_TypeInfo, v22);
    byte_4BB22F1 = 1;
  }
  v23 = (WarBoardData___c__DisplayClass189_0_o *)sub_1C13F70(WarBoardData___c__DisplayClass189_0_TypeInfo);
  WarBoardData___c__DisplayClass189_0___ctor(v23, 0LL);
  if ( !v23 )
    goto LABEL_65;
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity || !mst )
    goto LABEL_65;
  p_fields = &v23->fields;
  if ( !WarBoardStageReinforcementsMaster__TryGetReleaseEntity(
          mst,
          &v23->fields.stageEntity,
          stageEntity->fields.id,
          targetStageReinforcementsId,
          0LL) )
    return;
  v28 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v28,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  v106 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v106,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  v105 = &v23->fields;
  if ( !p_fields->stageEntity )
    goto LABEL_65;
  DeploySquareIds = WarBoardData__GetDeploySquareIds(this, p_fields->stageEntity->fields.squareIds, v29);
  v31 = sub_1C13F70(WarBoardData___c__DisplayClass189_1_TypeInfo);
  WarBoardData___c__DisplayClass189_1___ctor((WarBoardData___c__DisplayClass189_1_o *)v31, 0LL);
  if ( !v31 )
    goto LABEL_65;
  *(_QWORD *)(v31 + 24) = v23;
  v38 = v31 + 24;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v31 + 24), (int64_t)v23, v32, v33, v34, v35, v36, v37);
  v40 = *(_QWORD *)(v31 + 24);
  *(_DWORD *)(v31 + 16) = 0;
  if ( !v40 )
    goto LABEL_65;
  v41 = 0;
  while ( 1 )
  {
    ReinfocementsPieces = *(WarBoardStageReinforcementsEntity_o **)(v40 + 16);
    if ( !ReinfocementsPieces )
      goto LABEL_65;
    reinforcementsIds = ReinfocementsPieces->fields.reinforcementsIds;
    if ( !reinforcementsIds )
      goto LABEL_65;
    if ( v41 >= (signed int)reinforcementsIds->max_length )
      break;
    limitNums = ReinfocementsPieces->fields.limitNums;
    if ( !limitNums )
      goto LABEL_65;
    if ( v41 >= limitNums->max_length )
      goto LABEL_66;
    if ( limitNums->m_Items[v41 + 1] < 1 )
    {
      v47 = 0;
    }
    else
    {
      ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)WarBoardData__GetReinfocementsPieces(
                                                                     this,
                                                                     ReinfocementsPieces->fields.id,
                                                                     v41,
                                                                     v39);
      if ( !ReinfocementsPieces )
        goto LABEL_65;
      if ( !*(_QWORD *)v38 )
        goto LABEL_65;
      v44 = ReinfocementsPieces;
      ReinfocementsPieces = *(WarBoardStageReinforcementsEntity_o **)(*(_QWORD *)v38 + 16LL);
      if ( !ReinfocementsPieces )
        goto LABEL_65;
      v45 = ReinfocementsPieces->fields.limitNums;
      if ( !v45 )
        goto LABEL_65;
      v46 = *(int *)(v31 + 16);
      if ( (unsigned int)v46 >= v45->max_length )
        goto LABEL_66;
      v47 = v45->m_Items[v46 + 1] <= v44->fields.forceId;
    }
    IsOnce = WarBoardStageReinforcementsEntity__IsOnce(ReinfocementsPieces, 0LL);
    v49 = this;
    ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)WarBoardData__GetPlayReinforcements(this, v50);
    v51 = *(_QWORD *)v38;
    if ( !*(_QWORD *)v38 )
      goto LABEL_65;
    v52 = v38;
    v53 = *(System_Func_int__bool__o **)(v51 + 24);
    v54 = (System_Int32_array *)ReinfocementsPieces;
    if ( !v53 )
    {
      v53 = (System_Func_int__bool__o *)sub_1C13F70(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v53,
        (Il2CppObject *)v51,
        Method_WarBoardData___c__DisplayClass189_0__GetReinforcements_b__0__,
        0LL);
      *(_QWORD *)(v51 + 24) = v53;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v51 + 24), (int64_t)v53, v55, v56, v57, v58, v59, v60);
    }
    v61 = BasicHelper__Any_int__49783128(
            v54,
            (System_Func_T__bool__o *)v53,
            (const MethodInfo_2F7A158 *)Method_BasicHelper_Any_int____77470256);
    v62 = (System_Collections_Generic_List_T__o *)*reinfoDatas;
    v63 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_ReinforcementsData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v63,
      (Il2CppObject *)v31,
      Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__1__,
      0LL);
    ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)BasicHelper__Any_object_(
                                                                   v62,
                                                                   (System_Func_T__bool__o *)v63,
                                                                   (const MethodInfo_2F7A3D8 *)Method_BasicHelper_Any_ReinforcementsData___);
    if ( !DeploySquareIds )
      goto LABEL_65;
    v65 = *(_DWORD *)(v31 + 16);
    max_length = DeploySquareIds->max_length;
    if ( v65 >= max_length )
      goto LABEL_66;
    if ( (unsigned __int8)ReinfocementsPieces & 1 | (IsOnce && v61 || v47 || DeploySquareIds->m_Items[v65 + 1] < 0) )
    {
      if ( !*(_QWORD *)v52 )
        goto LABEL_65;
      v67 = *(_QWORD *)(*(_QWORD *)v52 + 16LL);
      if ( !v67 )
        goto LABEL_65;
      v38 = v52;
      this = v49;
      WarBoardData__SaveHoldReinforcements(v49, *(_DWORD *)(v67 + 20), v65, v64);
    }
    else
    {
      if ( !v28 )
        goto LABEL_65;
      items = v28->fields._items;
      v69 = Method_System_Collections_Generic_List_int__Add__;
      ++v28->fields._version;
      if ( !items )
        goto LABEL_65;
      size = v28->fields._size;
      this = v49;
      v38 = v52;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v28,
          v65,
          *(const MethodInfo_36101A8 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
        max_length = DeploySquareIds->max_length;
      }
      else
      {
        v28->fields._size = size + 1;
        items->m_Items[size + 1] = v65;
      }
      v71 = *(int *)(v31 + 16);
      ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)v106;
      if ( (unsigned int)v71 >= max_length )
LABEL_66:
        sub_1C13F88(ReinfocementsPieces, v25);
      if ( !v106 )
        goto LABEL_65;
      v25 = (unsigned int)DeploySquareIds->m_Items[v71 + 1];
      v72 = v106->fields._items;
      v73 = Method_System_Collections_Generic_List_int__Add__;
      ++v106->fields._version;
      if ( !v72 )
        goto LABEL_65;
      v74 = v106->fields._size;
      if ( (unsigned int)v74 >= v72->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v106,
          v25,
          *(const MethodInfo_36101A8 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
      }
      else
      {
        v106->fields._size = v74 + 1;
        v72->m_Items[v74 + 1] = v25;
      }
      ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !ReinfocementsPieces )
        goto LABEL_65;
      monitor = ReinfocementsPieces[6].monitor;
      if ( !monitor )
        goto LABEL_65;
      v76 = *(int *)(v31 + 16);
      if ( (unsigned int)v76 >= DeploySquareIds->max_length )
        goto LABEL_66;
      ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)monitor[29];
      if ( !ReinfocementsPieces )
        goto LABEL_65;
      v25 = (unsigned int)DeploySquareIds->m_Items[v76 + 1];
      v77 = *(_QWORD *)&ReinfocementsPieces->fields.warBoardStageId;
      v78 = Method_System_Collections_Generic_List_int__Add__;
      ++ReinfocementsPieces->fields.groupId;
      if ( !v77 )
        goto LABEL_65;
      forceId = ReinfocementsPieces->fields.forceId;
      if ( (unsigned int)forceId >= *(_DWORD *)(v77 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)ReinfocementsPieces,
          v25,
          *(const MethodInfo_36101A8 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
      }
      else
      {
        ReinfocementsPieces->fields.forceId = forceId + 1;
        *(_DWORD *)(v77 + 4 * forceId + 32) = v25;
      }
    }
    v40 = *(_QWORD *)(v31 + 24);
    v41 = *(_DWORD *)(v31 + 16) + 1;
    *(_DWORD *)(v31 + 16) = v41;
    if ( !v40 )
      goto LABEL_65;
  }
  if ( !v28 )
    goto LABEL_65;
  if ( v28->fields._size < 1 )
    return;
  v80 = sub_1C13F70(ReinforcementsData_TypeInfo);
  ReinforcementsData___ctor((ReinforcementsData_o *)v80, 0LL);
  if ( !v105->stageEntity )
    goto LABEL_65;
  if ( !v80 )
    goto LABEL_65;
  *(_DWORD *)(v80 + 16) = v105->stageEntity->fields.id;
  v81 = System_Collections_Generic_List_int___ToArray(
          v28,
          (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)(v80 + 24) = v81;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v80 + 24), (int64_t)v81, v82, v83, v84, v85, v86, v87);
  ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)v106;
  if ( !v106
    || (v88 = System_Collections_Generic_List_int___ToArray(
                v106,
                (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__),
        *(_QWORD *)(v80 + 32) = v88,
        sub_1C13CC8((PartyOrganizationUtility_o *)(v80 + 32), (int64_t)v88, v89, v90, v91, v92, v93, v94),
        (ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)*reinfoDatas) == 0LL)
    || (v101 = *(_QWORD *)&ReinfocementsPieces->fields.warBoardStageId,
        v102 = Method_System_Collections_Generic_List_ReinforcementsData__Add__,
        ++ReinfocementsPieces->fields.groupId,
        !v101) )
  {
LABEL_65:
    sub_1C13F80(ReinfocementsPieces, v25);
  }
  v103 = ReinfocementsPieces->fields.forceId;
  if ( (unsigned int)v103 >= *(_DWORD *)(v101 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)ReinfocementsPieces,
      (Il2CppObject *)v80,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v102[4] + 192LL) + 112LL));
  }
  else
  {
    v104 = v101 + 8 * v103;
    ReinfocementsPieces->fields.forceId = v103 + 1;
    *(_QWORD *)(v104 + 32) = v80;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v104 + 32), v80, v95, v96, v97, v98, v99, v100);
  }
}


UnityEngine_Vector2_o __fastcall WarBoardData__GetSaveCameraPos(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  localSaveData = this->fields.localSaveData;
  if ( !localSaveData )
    sub_1C13F80(this, method);
  x = localSaveData->fields.cameraPos.fields.x;
  y = localSaveData->fields.cameraPos.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


float __fastcall WarBoardData__GetSaveCameraSize(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8

  localSaveData = this->fields.localSaveData;
  if ( !localSaveData )
    sub_1C13F80(this, method);
  return localSaveData->fields.cameraSize;
}


// local variable allocation has failed, the output may be wrong!
WarBoardPieceData_array *__fastcall WarBoardData__GetServantPieces(
        WarBoardData_o *this,
        bool isPlayerGroup,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WarBoardData___c__DisplayClass106_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v13; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_4BB22B7 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, isPlayerGroup);
    sub_1C13D24(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v5);
    sub_1C13D24(&System_Func_WarBoardPieceData__bool__TypeInfo, v6);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass106_0__GetServantPieces_b__0__, v7);
    sub_1C13D24(&WarBoardData___c__DisplayClass106_0_TypeInfo, v8);
    byte_4BB22B7 = 1;
  }
  v9 = (WarBoardData___c__DisplayClass106_0_o *)sub_1C13F70(WarBoardData___c__DisplayClass106_0_TypeInfo);
  WarBoardData___c__DisplayClass106_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_1C13F80(v10, v11);
  v9->fields.isPlayerGroup = isPlayerGroup;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v13 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass106_0__GetServantPieces_b__0__,
    0LL);
  v14 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_2FCEBC0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v14,
                                      (const MethodInfo_2FC8D34 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


WarBoardDataEntity_o *__fastcall WarBoardData__GetServerData(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.serverData;
}


// local variable allocation has failed, the output may be wrong!
WarBoardSquareData_o *__fastcall WarBoardData__GetSquare(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WarBoardData___c__DisplayClass128_0_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_TSource__o *squares; // x19
  System_Func_object__bool__o *v12; // x20

  if ( (byte_4BB22C8 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___, *(_QWORD *)&squareIndex);
    sub_1C13D24(&System_Func_WarBoardSquareData__bool__TypeInfo, v5);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass128_0__GetSquare_b__0__, v6);
    sub_1C13D24(&WarBoardData___c__DisplayClass128_0_TypeInfo, v7);
    byte_4BB22C8 = 1;
  }
  v8 = (WarBoardData___c__DisplayClass128_0_o *)sub_1C13F70(WarBoardData___c__DisplayClass128_0_TypeInfo);
  WarBoardData___c__DisplayClass128_0___ctor(v8, 0LL);
  if ( !v8 )
    sub_1C13F80(v9, v10);
  v8->fields.squareIndex = squareIndex;
  squares = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.squares;
  v12 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardSquareData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_WarBoardData___c__DisplayClass128_0__GetSquare_b__0__,
    0LL);
  return (WarBoardSquareData_o *)System_Linq_Enumerable__FirstOrDefault_object__50015312(
                                   squares,
                                   (System_Func_TSource__bool__o *)v12,
                                   (const MethodInfo_2FB2C50 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
}


WarBoardSquareData_array *__fastcall WarBoardData__GetSquares(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.squares;
}


// local variable allocation has failed, the output may be wrong!
WarBoardUserServantData_o *__fastcall WarBoardData__GetStageBossData(
        WarBoardData_o *this,
        int32_t stageBossIdx,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WarBoardData___c__DisplayClass153_0_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  System_Object_array *svtInfo; // x19
  System_Func_object__bool__o *v13; // x20

  if ( (byte_4BB22D8 & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_Find_WarBoardUserServantData___, *(_QWORD *)&stageBossIdx);
    sub_1C13D24(&System_Func_WarBoardUserServantData__bool__TypeInfo, v5);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass153_0__GetStageBossData_b__0__, v6);
    sub_1C13D24(&WarBoardData___c__DisplayClass153_0_TypeInfo, v7);
    byte_4BB22D8 = 1;
  }
  v8 = (WarBoardData___c__DisplayClass153_0_o *)sub_1C13F70(WarBoardData___c__DisplayClass153_0_TypeInfo);
  WarBoardData___c__DisplayClass153_0___ctor(v8, 0LL);
  if ( !v8 || (v8->fields.stageBossIdx = stageBossIdx, (serverData = this->fields.serverData) == 0LL) )
    sub_1C13F80(v9, v10);
  svtInfo = (System_Object_array *)serverData->fields.svtInfo;
  v13 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardUserServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v8,
    Method_WarBoardData___c__DisplayClass153_0__GetStageBossData_b__0__,
    0LL);
  return (WarBoardUserServantData_o *)BasicHelper__Find_object_(
                                        svtInfo,
                                        (System_Func_T__bool__o *)v13,
                                        (const MethodInfo_2F7AFA4 *)Method_BasicHelper_Find_WarBoardUserServantData___);
}


// local variable allocation has failed, the output may be wrong!
WarBoardTreasureData_o *__fastcall WarBoardData__GetTreasure(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WarBoardData___c__DisplayClass137_0_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_TSource__o *treasures; // x19
  System_Func_object__bool__o *v12; // x20

  if ( (byte_4BB22CD & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___, *(_QWORD *)&squareIndex);
    sub_1C13D24(&System_Func_WarBoardTreasureData__bool__TypeInfo, v5);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass137_0__GetTreasure_b__0__, v6);
    sub_1C13D24(&WarBoardData___c__DisplayClass137_0_TypeInfo, v7);
    byte_4BB22CD = 1;
  }
  v8 = (WarBoardData___c__DisplayClass137_0_o *)sub_1C13F70(WarBoardData___c__DisplayClass137_0_TypeInfo);
  WarBoardData___c__DisplayClass137_0___ctor(v8, 0LL);
  if ( !v8 )
    sub_1C13F80(v9, v10);
  v8->fields.squareIndex = squareIndex;
  treasures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.treasures;
  v12 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardTreasureData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_WarBoardData___c__DisplayClass137_0__GetTreasure_b__0__,
    0LL);
  return (WarBoardTreasureData_o *)System_Linq_Enumerable__FirstOrDefault_object__50015312(
                                     treasures,
                                     (System_Func_TSource__bool__o *)v12,
                                     (const MethodInfo_2FB2C50 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___);
}


System_Int32_array *__fastcall WarBoardData__GetTreasureIdList(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_int__o *v6; // x19
  __int64 v7; // x0
  __int64 treasureId; // x1
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8
  struct WarBoardTreasureData_SaveData_array *treasureSaves; // x20
  int max_length; // w8
  unsigned int v12; // w21
  WarBoardTreasureData_SaveData_o *v13; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10

  if ( (byte_4BB22BC & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v5);
    byte_4BB22BC = 1;
  }
  v6 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  localSaveData = this->fields.localSaveData;
  if ( !localSaveData )
    goto LABEL_18;
  treasureSaves = localSaveData->fields.treasureSaves;
  if ( !treasureSaves )
    goto LABEL_18;
  max_length = treasureSaves->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_1C13F88(v7, treasureId);
      v13 = treasureSaves->m_Items[v12];
      if ( !v13 )
        break;
      if ( v13->fields.isUse )
      {
        if ( !v6 )
          break;
        treasureId = (unsigned int)v13->fields.treasureId;
        items = v6->fields._items;
        v15 = Method_System_Collections_Generic_List_int__Add__;
        ++v6->fields._version;
        if ( !items )
          break;
        size = v6->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v6,
            treasureId,
            *(const MethodInfo_36101A8 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v6->fields._size = size + 1;
          items->m_Items[size + 1] = treasureId;
        }
      }
      max_length = treasureSaves->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_16;
    }
LABEL_18:
    sub_1C13F80(v7, treasureId);
  }
LABEL_16:
  if ( !v6 )
    goto LABEL_18;
  return System_Collections_Generic_List_int___ToArray(
           v6,
           (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
}


WarBoardTreasureData_array *__fastcall WarBoardData__GetTreasures(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.treasures;
}


// local variable allocation has failed, the output may be wrong!
WarBoardUiData_o *__fastcall WarBoardData__GetUiData(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WarBoardData___c__DisplayClass193_0_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *listUiData; // x19
  System_Predicate_object__o *v12; // x20

  if ( (byte_4BB22F5 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardUiData__Find__, *(_QWORD *)&squareIndex);
    sub_1C13D24(&System_Predicate_WarBoardUiData__TypeInfo, v5);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass193_0__GetUiData_b__0__, v6);
    sub_1C13D24(&WarBoardData___c__DisplayClass193_0_TypeInfo, v7);
    byte_4BB22F5 = 1;
  }
  v8 = (WarBoardData___c__DisplayClass193_0_o *)sub_1C13F70(WarBoardData___c__DisplayClass193_0_TypeInfo);
  WarBoardData___c__DisplayClass193_0___ctor(v8, 0LL);
  if ( !v8
    || (v8->fields.squareIndex = squareIndex,
        listUiData = (System_Collections_Generic_List_object__o *)this->fields.listUiData,
        v12 = (System_Predicate_object__o *)sub_1C13F70(System_Predicate_WarBoardUiData__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_WarBoardData___c__DisplayClass193_0__GetUiData_b__0__,
          0LL),
        !listUiData) )
  {
    sub_1C13F80(v9, v10);
  }
  return (WarBoardUiData_o *)System_Collections_Generic_List_object___Find(
                               listUiData,
                               (System_Predicate_T__o *)v12,
                               (const MethodInfo_362D834 *)Method_System_Collections_Generic_List_WarBoardUiData__Find__);
}


WarBoardUiData_o *__fastcall WarBoardData__GetUiData_36486344(
        WarBoardData_o *this,
        System_Int32_array *pieceIndex,
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
  System_Collections_Generic_List_object__o *listUiData; // x19
  System_Predicate_object__o *v18; // x20

  if ( (byte_4BB22F6 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardUiData__Find__, pieceIndex);
    sub_1C13D24(&System_Predicate_WarBoardUiData__TypeInfo, v5);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass194_0__GetUiData_b__0__, v6);
    sub_1C13D24(&WarBoardData___c__DisplayClass194_0_TypeInfo, v7);
    byte_4BB22F6 = 1;
  }
  v8 = sub_1C13F70(WarBoardData___c__DisplayClass194_0_TypeInfo);
  WarBoardData___c__DisplayClass194_0___ctor((WarBoardData___c__DisplayClass194_0_o *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = pieceIndex,
        sub_1C13CC8((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)pieceIndex, v11, v12, v13, v14, v15, v16),
        listUiData = (System_Collections_Generic_List_object__o *)this->fields.listUiData,
        v18 = (System_Predicate_object__o *)sub_1C13F70(System_Predicate_WarBoardUiData__TypeInfo),
        System_Predicate_object____ctor(
          v18,
          (Il2CppObject *)v8,
          Method_WarBoardData___c__DisplayClass194_0__GetUiData_b__0__,
          0LL),
        !listUiData) )
  {
    sub_1C13F80(v9, v10);
  }
  return (WarBoardUiData_o *)System_Collections_Generic_List_object___Find(
                               listUiData,
                               (System_Predicate_T__o *)v18,
                               (const MethodInfo_362D834 *)Method_System_Collections_Generic_List_WarBoardUiData__Find__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardTreasureData_o *__fastcall WarBoardData__GetUnusedTreasure(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WarBoardData___c__DisplayClass138_0_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_TSource__o *treasures; // x19
  System_Func_object__bool__o *v12; // x20

  if ( (byte_4BB22CE & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___, *(_QWORD *)&squareIndex);
    sub_1C13D24(&System_Func_WarBoardTreasureData__bool__TypeInfo, v5);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass138_0__GetUnusedTreasure_b__0__, v6);
    sub_1C13D24(&WarBoardData___c__DisplayClass138_0_TypeInfo, v7);
    byte_4BB22CE = 1;
  }
  v8 = (WarBoardData___c__DisplayClass138_0_o *)sub_1C13F70(WarBoardData___c__DisplayClass138_0_TypeInfo);
  WarBoardData___c__DisplayClass138_0___ctor(v8, 0LL);
  if ( !v8 )
    sub_1C13F80(v9, v10);
  v8->fields.squareIndex = squareIndex;
  treasures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.treasures;
  v12 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardTreasureData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_WarBoardData___c__DisplayClass138_0__GetUnusedTreasure_b__0__,
    0LL);
  return (WarBoardTreasureData_o *)System_Linq_Enumerable__FirstOrDefault_object__50015312(
                                     treasures,
                                     (System_Func_TSource__bool__o *)v12,
                                     (const MethodInfo_2FB2C50 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___);
}


System_Int32_array *__fastcall WarBoardData__GetUseCommonReleaseIds(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *v11; // x19
  void *Master_object; // x0
  __int64 v13; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  WarBoardEventScriptMaster_o *v15; // x20
  int32_t stageId; // w21
  int v17; // w8
  void *v18; // x21
  unsigned int v19; // w23
  __int64 v20; // x22
  __int64 v21; // x25
  __int64 v22; // x8
  unsigned __int64 v23; // x26
  struct System_Int32_array *items; // x9
  _QWORD *v25; // x10
  __int64 size; // x11
  __int64 v27; // x25
  __int64 v28; // x8
  unsigned __int64 v29; // x26
  int v30; // w8
  void *v31; // x22
  unsigned int v32; // w27
  struct System_Int32_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0

  if ( (byte_4BB22E8 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_WarBoardEventMaster___, method);
    sub_1C13D24(&Method_DataManager_GetMaster_WarBoardEventScriptMaster___, v3);
    sub_1C13D24(&DataManager_TypeInfo, v4);
    sub_1C13D24(&Method_System_Linq_Enumerable_Distinct_int___, v5);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToList_int___, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_4BB22E8 = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_WarBoardEventScriptMaster___);
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_46;
  v15 = (WarBoardEventScriptMaster_o *)Master_object;
  stageId = serverData->fields.stageId;
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_WarBoardEventMaster___);
  if ( !Master_object )
    goto LABEL_46;
  Master_object = WarBoardEventMaster__GetListByStageId((WarBoardEventMaster_o *)Master_object, stageId, 0LL);
  if ( !Master_object )
    goto LABEL_46;
  v17 = *((_DWORD *)Master_object + 6);
  v18 = Master_object;
  if ( v17 >= 1 )
  {
    v19 = 0;
    do
    {
      if ( v19 >= v17 )
        goto LABEL_47;
      v20 = *((_QWORD *)v18 + (int)v19 + 4);
      if ( !v20 )
        goto LABEL_46;
      v21 = *(_QWORD *)(v20 + 56);
      if ( v21 )
      {
        v22 = *(_QWORD *)(v21 + 24);
        if ( v22 )
        {
          if ( (int)v22 >= 1 )
          {
            v23 = 0LL;
            while ( v23 < (unsigned int)v22 )
            {
              v13 = *(unsigned int *)(v21 + 32 + 4 * v23);
              if ( (int)v13 >= 1 )
              {
                if ( !v11 )
                  goto LABEL_46;
                items = v11->fields._items;
                v25 = Method_System_Collections_Generic_List_int__Add__;
                ++v11->fields._version;
                if ( !items )
                  goto LABEL_46;
                size = v11->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v11,
                    v13,
                    *(const MethodInfo_36101A8 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
                  LODWORD(v22) = *(_DWORD *)(v21 + 24);
                }
                else
                {
                  v11->fields._size = size + 1;
                  items->m_Items[size + 1] = v13;
                }
              }
              if ( (__int64)++v23 >= (int)v22 )
                goto LABEL_24;
            }
LABEL_47:
            sub_1C13F88(Master_object, v13);
          }
LABEL_24:
          v27 = *(_QWORD *)(v20 + 48);
          if ( !v27 )
            goto LABEL_46;
          v28 = *(_QWORD *)(v27 + 24);
          if ( (int)v28 >= 1 )
          {
            v29 = 0LL;
            while ( 1 )
            {
              if ( v29 >= (unsigned int)v28 )
                goto LABEL_47;
              if ( !v15 )
                goto LABEL_46;
              Master_object = WarBoardEventScriptMaster__GetList(v15, *(_DWORD *)(v27 + 4 * v29 + 32), 0LL);
              if ( !Master_object )
                goto LABEL_46;
              v30 = *((_DWORD *)Master_object + 6);
              v31 = Master_object;
              if ( v30 >= 1 )
                break;
LABEL_42:
              LODWORD(v28) = *(_DWORD *)(v27 + 24);
              if ( (__int64)++v29 >= (int)v28 )
                goto LABEL_43;
            }
            v32 = 0;
            while ( v32 < v30 )
            {
              Master_object = (void *)*((_QWORD *)v31 + (int)v32 + 4);
              if ( !Master_object )
                goto LABEL_46;
              if ( *((_DWORD *)Master_object + 6) == 2 )
              {
                Master_object = (void *)WarBoardEventScriptEntity__GetChangeWinCondition(
                                          (WarBoardEventScriptEntity_o *)Master_object,
                                          0LL);
                if ( ((unsigned int)Master_object & 0x80000000) == 0 )
                {
                  if ( !v11 )
                    goto LABEL_46;
                  v33 = v11->fields._items;
                  v34 = Method_System_Collections_Generic_List_int__Add__;
                  ++v11->fields._version;
                  if ( !v33 )
                    goto LABEL_46;
                  v35 = v11->fields._size;
                  v13 = (unsigned int)Master_object;
                  if ( (unsigned int)v35 >= v33->max_length )
                  {
                    System_Collections_Generic_List_int___AddWithResize(
                      v11,
                      (int32_t)Master_object,
                      *(const MethodInfo_36101A8 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v11->fields._size = v35 + 1;
                    v33->m_Items[v35 + 1] = (int)Master_object;
                  }
                }
              }
              v30 = *((_DWORD *)v31 + 6);
              if ( (int)++v32 >= v30 )
                goto LABEL_42;
            }
            goto LABEL_47;
          }
        }
      }
LABEL_43:
      v17 = *((_DWORD *)v18 + 6);
    }
    while ( (int)++v19 < v17 );
  }
  v36 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v11,
          (const MethodInfo_2FAC754 *)Method_System_Linq_Enumerable_Distinct_int___);
  Master_object = System_Linq_Enumerable__ToList_int_(
                    v36,
                    (const MethodInfo_2FCC824 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !Master_object )
LABEL_46:
    sub_1C13F80(Master_object, v13);
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)Master_object,
           (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardWallData_o *__fastcall WarBoardData__GetWall(
        WarBoardData_o *this,
        int32_t squareIndex,
        bool ignoreDestroy,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WarBoardData___c__DisplayClass140_0_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerable_TSource__o *walls; // x19
  System_Func_object__bool__o *v14; // x20

  if ( (byte_4BB22CF & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardWallData___, *(_QWORD *)&squareIndex);
    sub_1C13D24(&System_Func_WarBoardWallData__bool__TypeInfo, v7);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass140_0__GetWall_b__0__, v8);
    sub_1C13D24(&WarBoardData___c__DisplayClass140_0_TypeInfo, v9);
    byte_4BB22CF = 1;
  }
  v10 = (WarBoardData___c__DisplayClass140_0_o *)sub_1C13F70(WarBoardData___c__DisplayClass140_0_TypeInfo);
  WarBoardData___c__DisplayClass140_0___ctor(v10, 0LL);
  if ( !v10 )
    sub_1C13F80(v11, v12);
  v10->fields.squareIndex = squareIndex;
  v10->fields.ignoreDestroy = ignoreDestroy;
  walls = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.walls;
  v14 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardWallData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v10,
    Method_WarBoardData___c__DisplayClass140_0__GetWall_b__0__,
    0LL);
  return (WarBoardWallData_o *)System_Linq_Enumerable__FirstOrDefault_object__50015312(
                                 walls,
                                 (System_Func_TSource__bool__o *)v14,
                                 (const MethodInfo_2FB2C50 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardWallData___);
}


int32_t __fastcall WarBoardData__GetWallAttackCost(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  WarBoardActionPointEntity_o *ActionPointEntity; // x0

  ActionPointEntity = WarBoardData__GetActionPointEntity(this, forceId, groupId, method);
  if ( ActionPointEntity )
    LODWORD(ActionPointEntity) = ActionPointEntity->fields.wallAttackCost;
  return (int)ActionPointEntity;
}


WarBoardWallData_array *__fastcall WarBoardData__GetWalls(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.walls;
}


int32_t __fastcall WarBoardData__GetWinCondGroup(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.winCondGroup;
}


int32_t __fastcall WarBoardData__GetWinCondId(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.winCondId;
}


bool __fastcall WarBoardData__HasNewWinCond(WarBoardData_o *this, const MethodInfo *method)
{
  WarBoardManager_c *v3; // x0

  if ( (byte_4BB22E0 & 1) == 0 )
  {
    sub_1C13D24(&WarBoardManager_TypeInfo, method);
    byte_4BB22E0 = 1;
  }
  v3 = WarBoardManager_TypeInfo;
  if ( !WarBoardManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
    v3 = WarBoardManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v3->static_fields->SAVE_KEY_WAR_BOARD_CONFIRMED_RULE, -1, 0LL) != this->fields.winCondId;
}


void __fastcall WarBoardData__InitPrevCondData(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WarBoardData_o *UseCommonReleaseIds; // x0
  const MethodInfo *v5; // x2
  System_Int32_array *PrevCondIds; // x0
  __int64 v7; // x1
  __int64 v8; // x8
  System_Int32_array *v9; // x20
  unsigned __int64 v10; // x24
  int32_t v11; // w23
  System_Collections_Generic_List_object__o *listPrevCond; // x21
  WarBoardPrevCondData_o *v13; // x22
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4BB22EA & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__, method);
    sub_1C13D24(&WarBoardPrevCondData_TypeInfo, v3);
    byte_4BB22EA = 1;
  }
  UseCommonReleaseIds = (WarBoardData_o *)WarBoardData__GetUseCommonReleaseIds(this, method);
  PrevCondIds = WarBoardData__GetPrevCondIds(UseCommonReleaseIds, (System_Int32_array *)UseCommonReleaseIds, v5);
  if ( !PrevCondIds )
    goto LABEL_14;
  v8 = *(_QWORD *)&PrevCondIds->max_length;
  v9 = PrevCondIds;
  if ( (int)v8 >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)v8 )
        sub_1C13F88(PrevCondIds, v7);
      v11 = v9->m_Items[v10 + 1];
      listPrevCond = (System_Collections_Generic_List_object__o *)this->fields.listPrevCond;
      v13 = (WarBoardPrevCondData_o *)sub_1C13F70(WarBoardPrevCondData_TypeInfo);
      WarBoardPrevCondData___ctor_36671776(v13, v11, -1, 0LL);
      if ( !listPrevCond )
        break;
      items = listPrevCond->fields._items;
      v21 = Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__;
      ++listPrevCond->fields._version;
      if ( !items )
        break;
      size = listPrevCond->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          listPrevCond,
          (Il2CppObject *)v13,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        listPrevCond->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v13;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v23 + 4), (int64_t)v13, v14, v15, v16, v17, v18, v19);
      }
      LODWORD(v8) = v9->max_length;
      if ( (__int64)++v10 >= (int)v8 )
        return;
    }
LABEL_14:
    sub_1C13F80(PrevCondIds, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardData__IsBossInfo(
        WarBoardData_o *this,
        int32_t bossId,
        System_String_o *key,
        int32_t value,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  WarBoardData___c__DisplayClass172_0_o *v15; // x23
  System_Collections_Generic_Dictionary_object__object__o *monitor; // x0
  __int64 v17; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  System_Object_array *bossBattleInfo; // x21
  System_Func_object__bool__o *v20; // x22
  Il2CppObject *object; // x0
  Il2CppObject *v22; // x21
  Il2CppObject *v23; // x20
  Il2CppObject *valuea; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BB22E3 & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_Find_WarBoardBossBattleData___, *(_QWORD *)&bossId);
    sub_1C13D24(&System_Convert_TypeInfo, v9);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v11);
    sub_1C13D24(&System_Func_WarBoardBossBattleData__bool__TypeInfo, v12);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass172_0__IsBossInfo_b__0__, v13);
    sub_1C13D24(&WarBoardData___c__DisplayClass172_0_TypeInfo, v14);
    byte_4BB22E3 = 1;
  }
  valuea = 0LL;
  v15 = (WarBoardData___c__DisplayClass172_0_o *)sub_1C13F70(WarBoardData___c__DisplayClass172_0_TypeInfo);
  WarBoardData___c__DisplayClass172_0___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_17;
  v15->fields.bossId = bossId;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_17;
  bossBattleInfo = (System_Object_array *)serverData->fields.bossBattleInfo;
  v20 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardBossBattleData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v20,
    (Il2CppObject *)v15,
    Method_WarBoardData___c__DisplayClass172_0__IsBossInfo_b__0__,
    0LL);
  object = BasicHelper__Find_object_(
             bossBattleInfo,
             (System_Func_T__bool__o *)v20,
             (const MethodInfo_2F7AFA4 *)Method_BasicHelper_Find_WarBoardBossBattleData___);
  if ( !object )
    return value == 0;
  v22 = object;
  monitor = (System_Collections_Generic_Dictionary_object__object__o *)object[1].monitor;
  if ( !monitor )
    goto LABEL_17;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          monitor,
          (Il2CppObject *)key,
          (const MethodInfo_32F2BA4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return value == 0;
  monitor = (System_Collections_Generic_Dictionary_object__object__o *)v22[1].monitor;
  if ( !monitor )
LABEL_17:
    sub_1C13F80(monitor, v17);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          monitor,
          (Il2CppObject *)key,
          &valuea,
          (const MethodInfo_32F41BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return value == 0;
  v23 = valuea;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToInt32(v23, 0LL) == value;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardData__IsDefenseTarget(
        WarBoardData_o *this,
        System_Int32_array **data,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  long double inited; // q0
  _QWORD *v13; // x23
  __int64 v14; // x8
  __int64 v15; // x0
  __int64 v16; // x0
  System_Int32_array **v17; // x8
  System_Int32_array *v18; // x1
  WarBoardStageNpcMaster_o *stageNpcMaster; // x0
  __int64 v20; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  System_Int32_array *DefenseTarget; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  WarBoardStageNpcEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BB22E1 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Array_Empty_int___, data);
    byte_4BB22E1 = 1;
  }
  v13 = Method_System_Array_Empty_int___;
  entity = 0LL;
  v14 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v14 )
  {
    sub_1C65C5C(Method_System_Array_Empty_int___);
    v14 = v13[7];
  }
  v15 = *(_QWORD *)(v14 + 16);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C65C00(inited);
  if ( !*(_DWORD *)(v15 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v15);
  v16 = *(_QWORD *)(v13[7] + 16LL);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1C65C00(inited);
  v17 = *(System_Int32_array ***)(v16 + 184);
  v18 = *v17;
  *data = *v17;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)data,
    (int64_t)v18,
    *(int64_t *)&forceId,
    groupId,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity )
    goto LABEL_20;
  stageNpcMaster = this->fields.stageNpcMaster;
  if ( !stageNpcMaster )
    goto LABEL_20;
  if ( WarBoardStageNpcMaster__TryGetEntity(stageNpcMaster, &entity, stageEntity->fields.id, forceId, groupId, 0LL) )
  {
    stageNpcMaster = (WarBoardStageNpcMaster_o *)entity;
    if ( !entity )
      goto LABEL_20;
    DefenseTarget = WarBoardStageNpcEntity__GetDefenseTarget(entity, 0LL);
    *data = DefenseTarget;
    sub_1C13CC8((PartyOrganizationUtility_o *)data, (int64_t)DefenseTarget, v23, v24, v25, v26, v27, v28);
  }
  stageNpcMaster = (WarBoardStageNpcMaster_o *)BasicHelper__IsNullOrEmpty(
                                                 (System_Collections_ICollection_o *)*data,
                                                 0LL);
  if ( ((unsigned __int8)stageNpcMaster & 1) != 0 )
    return 0;
  if ( !*data )
LABEL_20:
    sub_1C13F80(stageNpcMaster, v20);
  return ((*data)->max_length & 1) == 0;
}


bool __fastcall WarBoardData__IsLose(WarBoardData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  WarBoardPieceData_array *Pieces_36453640; // x0
  const MethodInfo *v5; // x1
  int max_length; // w8
  WarBoardPieceData_array *v7; // x20
  int v8; // w24
  int v9; // w22
  int v10; // w23
  WarBoardPieceData_o *v11; // x21

  Pieces_36453640 = WarBoardData__GetPieces_36453640(this, 0, 0, v2);
  if ( !Pieces_36453640 )
LABEL_18:
    sub_1C13F80(Pieces_36453640, v5);
  max_length = Pieces_36453640->max_length;
  v7 = Pieces_36453640;
  if ( max_length < 1 )
    return 1;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  do
  {
    if ( v8 >= (unsigned int)max_length )
      sub_1C13F88(Pieces_36453640, v5);
    v11 = v7->m_Items[v8];
    if ( !v11 )
      goto LABEL_18;
    if ( !v11->fields._isDead_k__BackingField )
    {
      Pieces_36453640 = (WarBoardPieceData_array *)WarBoardPieceData__HasAvailablePermanentSleepBuff(v11, 0LL);
      if ( ((unsigned __int8)Pieces_36453640 & 1) == 0 )
      {
        Pieces_36453640 = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster(v11, 0LL);
        if ( ((unsigned __int8)Pieces_36453640 & 1) != 0 )
          ++v10;
        else
          ++v9;
      }
    }
    max_length = v7->max_length;
    ++v8;
  }
  while ( v8 < max_length );
  if ( v10 )
    return !v9 && !WarBoardData__IsReachableWinConditions(this, v5);
  else
    return 1;
}


bool __fastcall WarBoardData__IsPlayedEnemyHalfDeadMessage(WarBoardData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  bool result; // w0
  int32_t maxForceId_k__BackingField; // w9
  int32_t maxGroupId_k__BackingField; // w8
  int v7; // w25
  int v8; // w24
  int32_t i; // w20
  int32_t v10; // w21
  WarBoardPieceData_array *Pieces_36453640; // x0
  __int64 v12; // x1
  int max_length; // w8
  WarBoardPieceData_array *v14; // x22
  unsigned int v15; // w26
  Il2CppClass **v16; // x8
  Il2CppClass *v17; // x23
  int v18; // w8

  if ( this->fields.isPlayedHalfDeadMessage )
    return 1;
  maxForceId_k__BackingField = this->fields._maxForceId_k__BackingField;
  if ( maxForceId_k__BackingField < 1 )
  {
    v8 = 0;
    v7 = 0;
  }
  else
  {
    maxGroupId_k__BackingField = this->fields._maxGroupId_k__BackingField;
    v7 = 0;
    v8 = 0;
    for ( i = 1; i <= maxForceId_k__BackingField; ++i )
    {
      if ( (maxGroupId_k__BackingField & 0x80000000) == 0 )
      {
        v10 = 0;
        do
        {
          Pieces_36453640 = WarBoardData__GetPieces_36453640(this, i, v10, v2);
          if ( !Pieces_36453640 )
            goto LABEL_28;
          max_length = Pieces_36453640->max_length;
          v14 = Pieces_36453640;
          if ( max_length >= 1 )
          {
            v15 = 0;
            while ( 1 )
            {
              if ( v15 >= max_length )
                sub_1C13F88(Pieces_36453640, v12);
              v16 = &v14->obj.klass + (int)v15;
              v17 = v16[4];
              if ( !v17 )
                break;
              Pieces_36453640 = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster(
                                                             (WarBoardPieceData_o *)v16[4],
                                                             0LL);
              if ( ((unsigned __int8)Pieces_36453640 & 1) == 0 && !LOBYTE(v17->_1.klass) )
              {
                ++v7;
                v8 += *((unsigned __int8 *)&v17->_1.this_arg.bits + 4);
              }
              max_length = v14->max_length;
              if ( (int)++v15 >= max_length )
                goto LABEL_16;
            }
LABEL_28:
            sub_1C13F80(Pieces_36453640, v12);
          }
LABEL_16:
          maxGroupId_k__BackingField = this->fields._maxGroupId_k__BackingField;
          ++v10;
        }
        while ( v10 <= maxGroupId_k__BackingField );
        maxForceId_k__BackingField = this->fields._maxForceId_k__BackingField;
      }
    }
  }
  if ( v7 >= 0 )
    v18 = v7;
  else
    v18 = v7 + 1;
  result = 1;
  if ( v8 > v18 >> 1 )
  {
    this->fields.isPlayedHalfDeadMessage = 1;
    return 0;
  }
  return result;
}


bool __fastcall WarBoardData__IsReachableWinConditions(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *Master_object; // x0
  __int64 v14; // x1
  WarBoardCommonReleaseEntity_array *List; // x20
  System_Collections_Generic_Dictionary_int__bool__o *v17; // x19
  int max_length; // w8
  unsigned int v19; // w21
  int32_t *v20; // x25
  int32_t v21; // w8
  int32_t v22; // w1
  const MethodInfo_32836CC *v23; // x3
  bool v24; // w2
  System_Collections_Generic_Dictionary_int__bool__o *v25; // x0
  WarBoardData___c_c *v26; // x0
  System_Func_KeyValuePair_int__bool___bool__o *_9__95_0; // x20
  Il2CppObject *v28; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7

  if ( (byte_4BB22AD & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, method);
    sub_1C13D24(&DataManager_TypeInfo, v3);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v7);
    sub_1C13D24(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v8);
    sub_1C13D24(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__bool____, v9);
    sub_1C13D24(&System_Func_KeyValuePair_int__bool___bool__TypeInfo, v10);
    sub_1C13D24(&Method_WarBoardData___c__IsReachableWinConditions_b__95_0__, v11);
    sub_1C13D24(&WarBoardData___c_TypeInfo, v12);
    byte_4BB22AD = 1;
  }
  if ( (this->fields.winCondId & 0x80000000) != 0 )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  if ( !Master_object )
    goto LABEL_33;
  List = WarBoardCommonReleaseMaster__GetList(
           (WarBoardCommonReleaseMaster_o *)Master_object,
           this->fields.winCondId,
           0LL);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)List, 0LL) )
    return 0;
  v17 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1C13F70(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v17,
    (const MethodInfo_3282D0C *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  if ( !List )
LABEL_33:
    sub_1C13F80(Master_object, v14);
  max_length = List->max_length;
  if ( max_length >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= max_length )
        sub_1C13F88(Master_object, v14);
      v20 = (int32_t *)List->m_Items[v19];
      if ( !v20 || !v17 )
        goto LABEL_33;
      if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
              v17,
              v20[6],
              (const MethodInfo_32838E0 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
        break;
      Master_object = (Il2CppObject *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                        v17,
                                        v20[6],
                                        (const MethodInfo_328363C *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
        break;
LABEL_25:
      max_length = List->max_length;
      if ( (int)++v19 >= max_length )
        goto LABEL_26;
    }
    v21 = v20[7];
    if ( v21 == 1 )
    {
      v22 = v20[6];
      v23 = (const MethodInfo_32836CC *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__;
      v24 = v20[10] == 0;
    }
    else
    {
      if ( v21 != 5 )
      {
        v22 = v20[6];
        v23 = (const MethodInfo_32836CC *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__;
        v25 = v17;
        v24 = 0;
        goto LABEL_24;
      }
      v22 = v20[6];
      v23 = (const MethodInfo_32836CC *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__;
      v24 = v20[10] < 1;
    }
    v25 = v17;
LABEL_24:
    System_Collections_Generic_Dictionary_int__bool___set_Item(v25, v22, v24, v23);
    goto LABEL_25;
  }
LABEL_26:
  v26 = WarBoardData___c_TypeInfo;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v26 = WarBoardData___c_TypeInfo;
  }
  _9__95_0 = v26->static_fields->__9__95_0;
  if ( !_9__95_0 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = WarBoardData___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v26->static_fields->__9;
    _9__95_0 = (System_Func_KeyValuePair_int__bool___bool__o *)sub_1C13F70(System_Func_KeyValuePair_int__bool___bool__TypeInfo);
    System_Func_KeyValuePair_int__bool___bool____ctor(
      _9__95_0,
      v28,
      Method_WarBoardData___c__IsReachableWinConditions_b__95_0__,
      0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__95_0 = _9__95_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__95_0,
      (int64_t)_9__95_0,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  return System_Linq_Enumerable__Any_KeyValuePair_int__bool__(
           (System_Collections_Generic_IEnumerable_TSource__o *)v17,
           (System_Func_TSource__bool__o *)_9__95_0,
           (const MethodInfo_2F9B174 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__bool____);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardData__IsReinforcementsApper(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        int32_t targetStageReinforcementsId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  WarBoardData___c__DisplayClass190_0_o *v14; // x24
  WarBoardStageReinforcementsMaster_o *Master_object; // x0
  __int64 v16; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  void **p_entity; // x20
  bool IsOnce; // w23
  const MethodInfo *v20; // x1
  System_Int32_array *PlayReinforcements; // x25
  System_Func_int__bool__o *v22; // x26
  const MethodInfo *v23; // x2
  struct WarBoardStageReinforcementsEntity_o *entity; // x8
  char v25; // w9
  bool v26; // w23
  const MethodInfo *v27; // x3
  void *v28; // x8
  __int64 v29; // x9
  WarBoardStageReinforcementsMaster_o *v30; // x21
  int32_t v31; // w22
  int32_t v32; // w9
  __int64 v33; // x9
  __int64 v34; // x9
  _BOOL4 v35; // w9

  if ( (byte_4BB22F2 & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_Any_int____77470256, *(_QWORD *)&forceId);
    sub_1C13D24(&Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___, v9);
    sub_1C13D24(&DataManager_TypeInfo, v10);
    sub_1C13D24(&System_Func_int__bool__TypeInfo, v11);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass190_0__IsReinforcementsApper_b__0__, v12);
    sub_1C13D24(&WarBoardData___c__DisplayClass190_0_TypeInfo, v13);
    byte_4BB22F2 = 1;
  }
  v14 = (WarBoardData___c__DisplayClass190_0_o *)sub_1C13F70(WarBoardData___c__DisplayClass190_0_TypeInfo);
  WarBoardData___c__DisplayClass190_0___ctor(v14, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (WarBoardStageReinforcementsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
  if ( !v14 )
    goto LABEL_32;
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity || !Master_object )
    goto LABEL_32;
  p_entity = (void **)&v14->fields.entity;
  if ( !WarBoardStageReinforcementsMaster__TryGetReleaseEntity(
          Master_object,
          &v14->fields.entity,
          stageEntity->fields.id,
          targetStageReinforcementsId,
          0LL) )
    return 0;
  Master_object = (WarBoardStageReinforcementsMaster_o *)*p_entity;
  if ( !*p_entity )
    goto LABEL_32;
  IsOnce = WarBoardStageReinforcementsEntity__IsOnce((WarBoardStageReinforcementsEntity_o *)Master_object, 0LL);
  PlayReinforcements = WarBoardData__GetPlayReinforcements(this, v20);
  v22 = (System_Func_int__bool__o *)sub_1C13F70(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v22,
    (Il2CppObject *)v14,
    Method_WarBoardData___c__DisplayClass190_0__IsReinforcementsApper_b__0__,
    0LL);
  Master_object = (WarBoardStageReinforcementsMaster_o *)BasicHelper__Any_int__49783128(
                                                           PlayReinforcements,
                                                           (System_Func_T__bool__o *)v22,
                                                           (const MethodInfo_2F7A158 *)Method_BasicHelper_Any_int____77470256);
  entity = v14->fields.entity;
  if ( !entity )
    goto LABEL_32;
  v25 = IsOnce & (unsigned __int8)Master_object;
  v26 = 0;
  if ( (v25 & 1) != 0 || entity->fields.forceId != forceId || entity->fields.groupId != groupId )
    return v26;
  Master_object = (WarBoardStageReinforcementsMaster_o *)WarBoardData__GetDeploySquareIds(
                                                           this,
                                                           entity->fields.squareIds,
                                                           v23);
  v28 = *p_entity;
  if ( !*p_entity || (v29 = *((_QWORD *)v28 + 5)) == 0 )
LABEL_32:
    sub_1C13F80(Master_object, v16);
  v30 = Master_object;
  v31 = 0;
  while ( 1 )
  {
    v32 = *(_DWORD *)(v29 + 24);
    v26 = v31 < v32;
    if ( v31 >= v32 )
      return v26;
    v33 = *((_QWORD *)v28 + 8);
    if ( !v33 )
      goto LABEL_32;
    if ( (unsigned int)v31 >= *(_DWORD *)(v33 + 24) )
LABEL_35:
      sub_1C13F88(Master_object, v16);
    if ( *(int *)(v33 + 4LL * v31 + 32) < 1 )
    {
      v35 = 0;
      if ( !v30 )
        goto LABEL_32;
    }
    else
    {
      Master_object = (WarBoardStageReinforcementsMaster_o *)WarBoardData__GetReinfocementsPieces(
                                                               this,
                                                               *((_DWORD *)v28 + 5),
                                                               v31,
                                                               v27);
      if ( !Master_object )
        goto LABEL_32;
      v28 = *p_entity;
      if ( !*p_entity )
        goto LABEL_32;
      v34 = *((_QWORD *)v28 + 8);
      if ( !v34 )
        goto LABEL_32;
      if ( (unsigned int)v31 >= *(_DWORD *)(v34 + 24) )
        goto LABEL_35;
      v35 = *(_DWORD *)(v34 + 4LL * v31 + 32) <= SLODWORD(Master_object->fields._MasterName_k__BackingField);
      if ( !v30 )
        goto LABEL_32;
    }
    if ( (unsigned int)v31 >= LODWORD(v30->fields._MasterName_k__BackingField) )
      goto LABEL_35;
    if ( !v35 && (*(&v30->fields.revision + v31) & 0x80000000) == 0 )
      return v26;
    v29 = *((_QWORD *)v28 + 5);
    ++v31;
    if ( !v29 )
      goto LABEL_32;
  }
}


bool __fastcall WarBoardData__IsWin(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x20
  __int64 v13; // x1
  bool v14; // w20
  System_Type_o *Type; // x21
  intptr_t v16; // w22
  System_Type_o *TypeFromHandle; // x1
  bool v18; // w19
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-60h] BYREF
  System_RuntimeTypeHandle_o v22; // 0:w0.4

  if ( (byte_4BB22AE & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__Dispose__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__MoveNext__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__get_Current__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardTaskBase__GetEnumerator__, v6);
    sub_1C13D24(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7);
    sub_1C13D24(&System_Type_TypeInfo, v8);
    sub_1C13D24(&WarBoardChangeWinConditionTask_var, v9);
    byte_4BB22AE = 1;
  }
  memset(&v21, 0, sizeof(v21));
  if ( !WarBoardData__CheckWinCond(this, method) )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 28, 0LL, 0LL);
  Instance = (Il2CppObject *)System_Linq_Enumerable__Any_object_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)EventTasks,
                               (const MethodInfo_2F9A90C *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    WarBoardManager__AddTask_36581852((WarBoardManager_o *)Instance, 0, EventTasks, 0LL);
  }
  if ( !EventTasks )
LABEL_20:
    sub_1C13F80(Instance, v11);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)EventTasks,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__MoveNext__);
    if ( !v14 )
      break;
    if ( !v21.fields._current )
      sub_1C13F80(0LL, v13);
    Type = System_Object__GetType(v21.fields._current, 0LL);
    v16 = (int)WarBoardChangeWinConditionTask_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v22.fields.value = v16;
    TypeFromHandle = System_Type__GetTypeFromHandle(v22, 0LL);
    if ( System_Type__op_Equality(Type, TypeFromHandle, 0LL) )
    {
      this->fields.winCondGroup = -1;
      break;
    }
  }
  v18 = !v14;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__Dispose__);
  return v18;
}


void __fastcall WarBoardData__JudgePrevCondData(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  WarBoardCommonReleaseMaster_o *v10; // x20
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x21
  struct WarBoardDataEntity_o *serverData; // x8
  int32_t turn; // w1
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4BB22EC & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, method);
    sub_1C13D24(&DataManager_TypeInfo, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__get_Current__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__, v7);
    byte_4BB22EC = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  if ( !this->fields.listPrevCond )
    sub_1C13F80(Master_object, v9);
  v10 = (WarBoardCommonReleaseMaster_o *)Master_object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)this->fields.listPrevCond,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__);
  v17 = v16;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__);
    if ( !v11 )
      break;
    current = v17.fields._current;
    if ( !v17.fields._current )
      sub_1C13F80(v11, v12);
    if ( (HIDWORD(v17.fields._current[1].klass) & 0x80000000) != 0 )
    {
      if ( !v10 )
        sub_1C13F80(v11, v12);
      if ( WarBoardCommonReleaseMaster__IsOpen(v10, (int32_t)v17.fields._current[1].klass, 0LL) )
      {
        serverData = this->fields.serverData;
        if ( serverData )
          turn = serverData->fields.turn;
        else
          turn = 0;
        WarBoardPrevCondData__SetClearedTurn((WarBoardPrevCondData_o *)current, turn, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__);
}


WarBoardData_BattleParticipantInfo_o *__fastcall WarBoardData__LoadBattleParticipantInfo(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  return WarBoardData_BattleParticipantInfo__LoadFromUniqueIndex(this->fields.latestBattlePieceUniqueIndexes, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardData__LocalSave(WarBoardData_o *this, bool onBoardSkillUpdate, const MethodInfo *method)
{
  WarBoardData_o *v4; // x19
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
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8
  WarBoardData_o **p_localSaveData; // x23
  struct WarBoardPieceData_SaveData_array *pieceSaves; // x21
  int max_length; // w8
  unsigned int v56; // w22
  struct System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__o *actionPointEntityDict; // x21
  int entries; // w8
  unsigned int v59; // w22
  struct WarBoardPieceData_array *pieces; // x21
  int v61; // w8
  unsigned int v62; // w22
  struct WarBoardSquareData_array *squares; // x21
  int v64; // w8
  unsigned int v65; // w22
  struct WarBoardSquareData_array *condSquares; // x21
  int v67; // w8
  unsigned int v68; // w22
  struct WarBoardDataEntity_o *serverData; // x8
  struct WarBoardData_WarBoardLocalSaveData_o *v70; // x22
  WarBoardData_o *v71; // x21
  struct WarBoardPieceData_array *v72; // x8
  struct WarBoardPieceData_array *v73; // x8
  WarBoardData_o *v74; // x22
  float ZoomSize; // s0
  WarBoardData_o *v76; // x22
  int npcEntityDict_high; // w8
  WarBoardData_o *v78; // x20
  System_Collections_Generic_List_object__o *v79; // x20
  Il2CppObject *current; // x22
  WarBoardEventData_SaveData_o *v81; // x21
  __int64 v82; // x0
  __int64 v83; // x1
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
  WarBoardData_o *v94; // x21
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  struct System_Collections_Generic_List_WarBoardUiData__o *latestPieceActionSquareIndexes; // x1
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  int64_t latestBattlePieceUniqueIndexes; // x1
  System_Collections_Generic_List_object__o *v115; // x20
  Il2CppObject *v116; // x22
  WarBoardPrevCondData_SaveData_o *v117; // x21
  __int64 v118; // x0
  __int64 v119; // x1
  int64_t v120; // x2
  int32_t v121; // w3
  System_String_o *v122; // x4
  BattleSetupInfo_o *v123; // x5
  FollowerInfo_o *v124; // x6
  PartyListViewItem_o *v125; // x7
  struct System_Object_array *v126; // x8
  _QWORD *v127; // x9
  __int64 v128; // x10
  Il2CppClass **v129; // x0
  WarBoardData_o *v130; // x21
  int64_t v131; // x2
  int32_t v132; // w3
  System_String_o *v133; // x4
  BattleSetupInfo_o *v134; // x5
  FollowerInfo_o *v135; // x6
  PartyListViewItem_o *v136; // x7
  System_Collections_Generic_List_object__o *v137; // x20
  Il2CppObject *v138; // x22
  HoldReinforcementsData_SaveData_o *v139; // x21
  __int64 v140; // x0
  __int64 v141; // x1
  int64_t v142; // x2
  int32_t v143; // w3
  System_String_o *v144; // x4
  BattleSetupInfo_o *v145; // x5
  FollowerInfo_o *v146; // x6
  PartyListViewItem_o *v147; // x7
  struct System_Object_array *v148; // x8
  _QWORD *v149; // x9
  __int64 v150; // x10
  Il2CppClass **v151; // x0
  WarBoardData_o *v152; // x21
  int64_t v153; // x2
  int32_t v154; // w3
  System_String_o *v155; // x4
  BattleSetupInfo_o *v156; // x5
  FollowerInfo_o *v157; // x6
  PartyListViewItem_o *v158; // x7
  PartyOrganizationUtility_o *v159; // x20
  int64_t v160; // x2
  int32_t v161; // w3
  System_String_o *v162; // x4
  BattleSetupInfo_o *v163; // x5
  FollowerInfo_o *v164; // x6
  PartyListViewItem_o *v165; // x7
  System_Collections_Generic_List_object__o *v166; // x20
  Il2CppObject *v167; // x22
  WarBoardUiData_SaveData_o *v168; // x21
  __int64 v169; // x0
  __int64 v170; // x1
  int64_t v171; // x2
  int32_t v172; // w3
  System_String_o *v173; // x4
  BattleSetupInfo_o *v174; // x5
  FollowerInfo_o *v175; // x6
  PartyListViewItem_o *v176; // x7
  struct System_Object_array *v177; // x8
  _QWORD *v178; // x9
  __int64 v179; // x10
  Il2CppClass **v180; // x0
  WarBoardData_o *v181; // x21
  int64_t v182; // x2
  int32_t v183; // w3
  System_String_o *v184; // x4
  BattleSetupInfo_o *v185; // x5
  FollowerInfo_o *v186; // x6
  PartyListViewItem_o *v187; // x7
  struct WarBoardDataEntity_o *v188; // x8
  unsigned int v189; // w0
  WarBoardData_o *v190; // x21
  int v191; // w20
  int64_t v192; // x2
  int32_t v193; // w3
  System_String_o *v194; // x4
  BattleSetupInfo_o *v195; // x5
  FollowerInfo_o *v196; // x6
  PartyListViewItem_o *v197; // x7
  unsigned __int64 v198; // x22
  __int64 v199; // x24
  __int64 v200; // x25
  struct WarBoardDataEntity_o *v201; // x9
  struct WarBoardSquareIndexData_array *squareIndexInfo; // x9
  unsigned int *reinforcementsSaveList; // x26
  WarBoardSquareIndexData_o *v204; // x21
  WarBoardSquareIndexData_SaveData_o *v205; // x20
  int64_t v206; // x2
  int32_t v207; // w3
  System_String_o *v208; // x4
  BattleSetupInfo_o *v209; // x5
  FollowerInfo_o *v210; // x6
  PartyListViewItem_o *v211; // x7
  struct WarBoardDataEntity_o *v212; // x8
  unsigned int v213; // w0
  WarBoardData_o *v214; // x21
  int v215; // w20
  int64_t v216; // x2
  int32_t v217; // w3
  System_String_o *v218; // x4
  BattleSetupInfo_o *v219; // x5
  FollowerInfo_o *v220; // x6
  PartyListViewItem_o *v221; // x7
  int64_t v222; // x2
  int32_t v223; // w3
  System_String_o *v224; // x4
  BattleSetupInfo_o *v225; // x5
  FollowerInfo_o *v226; // x6
  PartyListViewItem_o *v227; // x7
  unsigned __int64 v228; // x22
  __int64 v229; // x24
  __int64 v230; // x25
  struct WarBoardDataEntity_o *v231; // x8
  struct WarBoardBossBattleData_array *bossBattleInfo; // x8
  struct System_Collections_Generic_List_int__o *playedStageReinforcementsList; // x26
  WarBoardBossBattleData_o *v234; // x21
  WarBoardBossBattleData_SaveData_o *v235; // x20
  const MethodInfo *v236; // x2
  int64_t v237; // x2
  int32_t v238; // w3
  System_String_o *v239; // x4
  BattleSetupInfo_o *v240; // x5
  FollowerInfo_o *v241; // x6
  PartyListViewItem_o *v242; // x7
  struct System_Collections_Generic_List_WarBoardPrevCondData__o *bgAnimationInfo_k__BackingField; // x1
  WarBoardData_o *v244; // x8
  MiniMessagePack_MiniMessagePacker_o *v245; // x19
  System_Byte_array *v246; // x19
  WarBoardData_c *v247; // x8
  System_String_o *WARBOARDDATA_SAVEDATA_KEY; // x20
  System_String_o *v249; // x19
  __int64 v250; // x0
  System_Collections_Generic_List_Enumerator_object__o v251; // [xsp+8h] [xbp-F8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v252; // [xsp+20h] [xbp-E0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v253; // [xsp+40h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v254; // [xsp+60h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v255; // [xsp+80h] [xbp-80h] BYREF

  v4 = this;
  if ( (byte_4BB22A5 & 1) == 0 )
  {
    sub_1C13D24(&System_Convert_TypeInfo, onBoardSkillUpdate);
    sub_1C13D24(&EncryptedPlayerPrefs_TypeInfo, v5);
    sub_1C13D24(&Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___, v6);
    sub_1C13D24(&Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__Dispose__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__, v14);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__MoveNext__, v15);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__get_Current__, v16);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__get_Current__, v17);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__get_Current__, v18);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__get_Current__, v19);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardUiData_SaveData__Add__, v20);
    sub_1C13D24(&Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__Add__, v21);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardEventData_SaveData__Add__, v22);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__Add__, v23);
    sub_1C13D24(&Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__, v24);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__, v25);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardEventData__GetEnumerator__, v26);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__, v27);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__ToArray__, v28);
    sub_1C13D24(&Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__ToArray__, v29);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__ToArray__, v30);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardEventData_SaveData__ToArray__, v31);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardUiData_SaveData__ToArray__, v32);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData___ctor__, v33);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardEventData_SaveData___ctor__, v34);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardUiData_SaveData___ctor__, v35);
    sub_1C13D24(&Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData___ctor__, v36);
    sub_1C13D24(&System_Collections_Generic_List_WarBoardPrevCondData_SaveData__TypeInfo, v37);
    sub_1C13D24(&System_Collections_Generic_List_HoldReinforcementsData_SaveData__TypeInfo, v38);
    sub_1C13D24(&System_Collections_Generic_List_WarBoardEventData_SaveData__TypeInfo, v39);
    sub_1C13D24(&System_Collections_Generic_List_WarBoardUiData_SaveData__TypeInfo, v40);
    sub_1C13D24(&MiniMessagePack_MiniMessagePacker_TypeInfo, v41);
    sub_1C13D24(&WarBoardSquareIndexData_SaveData___TypeInfo, v42);
    sub_1C13D24(&WarBoardBossBattleData_SaveData___TypeInfo, v43);
    sub_1C13D24(&WarBoardBossBattleData_SaveData_TypeInfo, v44);
    sub_1C13D24(&WarBoardPrevCondData_SaveData_TypeInfo, v45);
    sub_1C13D24(&WarBoardUiData_SaveData_TypeInfo, v46);
    sub_1C13D24(&WarBoardEventData_SaveData_TypeInfo, v47);
    sub_1C13D24(&WarBoardSquareIndexData_SaveData_TypeInfo, v48);
    sub_1C13D24(&HoldReinforcementsData_SaveData_TypeInfo, v49);
    sub_1C13D24(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v50);
    this = (WarBoardData_o *)sub_1C13D24(&WarBoardData_TypeInfo, v51);
    byte_4BB22A5 = 1;
  }
  memset(&v255, 0, sizeof(v255));
  memset(&v254, 0, sizeof(v254));
  memset(&v253, 0, sizeof(v253));
  memset(&v252, 0, sizeof(v252));
  p_localSaveData = (WarBoardData_o **)&v4->fields.localSaveData;
  localSaveData = v4->fields.localSaveData;
  if ( !localSaveData )
    goto LABEL_129;
  pieceSaves = localSaveData->fields.pieceSaves;
  if ( !pieceSaves )
    goto LABEL_129;
  max_length = pieceSaves->max_length;
  if ( max_length >= 1 )
  {
    v56 = 0;
    while ( v56 < max_length )
    {
      this = (WarBoardData_o *)pieceSaves->m_Items[v56];
      if ( !this )
        goto LABEL_129;
      WarBoardPieceData_SaveData__Save((WarBoardPieceData_SaveData_o *)this, 0LL);
      max_length = pieceSaves->max_length;
      if ( (int)++v56 >= max_length )
        goto LABEL_10;
    }
LABEL_130:
    sub_1C13F88(this, onBoardSkillUpdate);
  }
LABEL_10:
  if ( !*p_localSaveData )
    goto LABEL_129;
  actionPointEntityDict = (*p_localSaveData)->fields.actionPointEntityDict;
  if ( !actionPointEntityDict )
    goto LABEL_129;
  entries = (int)actionPointEntityDict->fields._entries;
  if ( entries >= 1 )
  {
    v59 = 0;
    while ( v59 < entries )
    {
      this = (WarBoardData_o *)*((_QWORD *)&actionPointEntityDict->fields._count + (int)v59);
      if ( !this )
        goto LABEL_129;
      WarBoardItemData_SaveData__Save((WarBoardItemData_SaveData_o *)this, 0LL);
      entries = (int)actionPointEntityDict->fields._entries;
      if ( (int)++v59 >= entries )
        goto LABEL_17;
    }
    goto LABEL_130;
  }
LABEL_17:
  if ( !*p_localSaveData )
    goto LABEL_129;
  pieces = (*p_localSaveData)->fields.pieces;
  if ( !pieces )
    goto LABEL_129;
  v61 = pieces->max_length;
  if ( v61 >= 1 )
  {
    v62 = 0;
    while ( v62 < v61 )
    {
      this = (WarBoardData_o *)pieces->m_Items[v62];
      if ( !this )
        goto LABEL_129;
      WarBoardTreasureData_SaveData__Save((WarBoardTreasureData_SaveData_o *)this, 0LL);
      v61 = pieces->max_length;
      if ( (int)++v62 >= v61 )
        goto LABEL_24;
    }
    goto LABEL_130;
  }
LABEL_24:
  if ( !*p_localSaveData )
    goto LABEL_129;
  squares = (*p_localSaveData)->fields.squares;
  if ( !squares )
    goto LABEL_129;
  v64 = squares->max_length;
  if ( v64 >= 1 )
  {
    v65 = 0;
    while ( v65 < v64 )
    {
      this = (WarBoardData_o *)squares->m_Items[v65];
      if ( !this )
        goto LABEL_129;
      WarBoardWallData_SaveData__Save((WarBoardWallData_SaveData_o *)this, 0LL);
      v64 = squares->max_length;
      if ( (int)++v65 >= v64 )
        goto LABEL_31;
    }
    goto LABEL_130;
  }
LABEL_31:
  if ( !*p_localSaveData )
    goto LABEL_129;
  condSquares = (*p_localSaveData)->fields.condSquares;
  if ( !condSquares )
    goto LABEL_129;
  v67 = condSquares->max_length;
  if ( v67 >= 1 )
  {
    v68 = 0;
    while ( v68 < v67 )
    {
      this = (WarBoardData_o *)condSquares->m_Items[v68];
      if ( !this )
        goto LABEL_129;
      WarBoardSquareData_SaveData__Save((WarBoardSquareData_SaveData_o *)this, 0LL);
      v67 = condSquares->max_length;
      if ( (int)++v68 >= v67 )
        goto LABEL_38;
    }
    goto LABEL_130;
  }
LABEL_38:
  this = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  serverData = v4->fields.serverData;
  if ( !serverData )
    goto LABEL_129;
  v70 = v4->fields.localSaveData;
  if ( !v70 )
    goto LABEL_129;
  v71 = this;
  v70->fields.turn = serverData->fields.turn;
  *(_QWORD *)&v70->fields.turnForceId = *(_QWORD *)&serverData->fields.turnForceId;
  if ( !this )
    goto LABEL_129;
  v72 = this->fields.pieces;
  if ( !v72 )
    goto LABEL_129;
  this = (WarBoardData_o *)v72->m_Items[5];
  if ( !this )
    goto LABEL_129;
  v70->fields.cameraPos = MapScroll__GetScrlPos((MapScroll_o *)this, 0LL);
  v73 = v71->fields.pieces;
  if ( !v73 )
    goto LABEL_129;
  this = (WarBoardData_o *)v73->m_Items[6];
  if ( !this )
    goto LABEL_129;
  v74 = *p_localSaveData;
  ZoomSize = MapZoom__GetZoomSize((MapZoom_o *)this, 0LL);
  if ( !v74 )
    goto LABEL_129;
  *(float *)&v74->fields.treasures = ZoomSize;
  v76 = *p_localSaveData;
  if ( !*p_localSaveData )
    goto LABEL_129;
  npcEntityDict_high = HIDWORD(v71[3].fields.npcEntityDict);
  BYTE4(v76->fields.effects) = onBoardSkillUpdate;
  HIDWORD(v76->fields.treasures) = npcEntityDict_high;
  LODWORD(v76->fields.serverData) = BattleRandom__GetLogicCount(0LL);
  v78 = *p_localSaveData;
  this = (WarBoardData_o *)BattleRandom__GetGutsCount(0LL);
  if ( !v78 )
    goto LABEL_129;
  HIDWORD(v78->fields.serverData) = (_DWORD)this;
  if ( !*p_localSaveData )
    goto LABEL_129;
  LOBYTE((*p_localSaveData)->fields._bgAnimationInfo_k__BackingField) = v4->fields.isPlayedHalfDeadMessage;
  v79 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WarBoardEventData_SaveData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v79,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_WarBoardEventData_SaveData___ctor__);
  this = (WarBoardData_o *)v4->fields.listEvent;
  if ( !this )
    goto LABEL_129;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v251,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_WarBoardEventData__GetEnumerator__);
  v255 = v251;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v255,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__MoveNext__) )
  {
    current = v255.fields._current;
    v81 = (WarBoardEventData_SaveData_o *)sub_1C13F70(WarBoardEventData_SaveData_TypeInfo);
    WarBoardEventData_SaveData___ctor_36635476(v81, (WarBoardEventData_o *)current, 0LL);
    if ( !v79 )
      sub_1C13F80(v82, v83);
    items = v79->fields._items;
    v91 = Method_System_Collections_Generic_List_WarBoardEventData_SaveData__Add__;
    ++v79->fields._version;
    if ( !items )
      sub_1C13F80(v82, v83);
    size = v79->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v79,
        (Il2CppObject *)v81,
        *(const MethodInfo_362D1CC **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
    }
    else
    {
      v93 = &items->obj.klass + size;
      v79->fields._size = size + 1;
      v93[4] = (Il2CppClass *)v81;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v93 + 4), (int64_t)v81, v84, v85, v86, v87, v88, v89);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v255,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__Dispose__);
  if ( !v79 )
    goto LABEL_129;
  v94 = *p_localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_object___ToArray(
                             v79,
                             (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_WarBoardEventData_SaveData__ToArray__);
  if ( !v94 )
    goto LABEL_129;
  v94->fields.localSaveData = (struct WarBoardData_WarBoardLocalSaveData_o *)this;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v94->fields.localSaveData, (int64_t)this, v95, v96, v97, v98, v99, v100);
  this = *p_localSaveData;
  if ( !*p_localSaveData )
    goto LABEL_129;
  this->fields._maxForceId_k__BackingField = v4->fields.winCondId;
  latestPieceActionSquareIndexes = (struct System_Collections_Generic_List_WarBoardUiData__o *)v4->fields.latestPieceActionSquareIndexes;
  this->fields.listUiData = latestPieceActionSquareIndexes;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.listUiData,
    (int64_t)latestPieceActionSquareIndexes,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  this = (WarBoardData_o *)v4->fields.localSaveData;
  if ( !this )
    goto LABEL_129;
  latestBattlePieceUniqueIndexes = (int64_t)v4->fields.latestBattlePieceUniqueIndexes;
  *(_QWORD *)&this->fields.isPlayedHalfDeadMessage = latestBattlePieceUniqueIndexes;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.isPlayedHalfDeadMessage,
    latestBattlePieceUniqueIndexes,
    v108,
    v109,
    v110,
    v111,
    v112,
    v113);
  v115 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WarBoardPrevCondData_SaveData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v115,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData___ctor__);
  this = (WarBoardData_o *)v4->fields.listPrevCond;
  if ( !this )
    goto LABEL_129;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v251,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__);
  v254 = v251;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v254,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__) )
  {
    v116 = v254.fields._current;
    v117 = (WarBoardPrevCondData_SaveData_o *)sub_1C13F70(WarBoardPrevCondData_SaveData_TypeInfo);
    WarBoardPrevCondData_SaveData___ctor_36635536(v117, (WarBoardPrevCondData_o *)v116, 0LL);
    if ( !v115 )
      sub_1C13F80(v118, v119);
    v126 = v115->fields._items;
    v127 = Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__Add__;
    ++v115->fields._version;
    if ( !v126 )
      sub_1C13F80(v118, v119);
    v128 = v115->fields._size;
    if ( (unsigned int)v128 >= v126->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v115,
        (Il2CppObject *)v117,
        *(const MethodInfo_362D1CC **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
    }
    else
    {
      v129 = &v126->obj.klass + v128;
      v115->fields._size = v128 + 1;
      v129[4] = (Il2CppClass *)v117;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v129 + 4), (int64_t)v117, v120, v121, v122, v123, v124, v125);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v254,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__);
  if ( !v115 )
    goto LABEL_129;
  v130 = *p_localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_object___ToArray(
                             v115,
                             (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__ToArray__);
  if ( !v130 )
    goto LABEL_129;
  v130->fields.listEvent = (struct System_Collections_Generic_List_WarBoardEventData__o *)this;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v130->fields.listEvent, (int64_t)this, v131, v132, v133, v134, v135, v136);
  v137 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_HoldReinforcementsData_SaveData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v137,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData___ctor__);
  this = (WarBoardData_o *)v4->fields.reinforcementsSaveList;
  if ( !this )
    goto LABEL_129;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v251,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
  v253 = v251;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v253,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__) )
  {
    v138 = v253.fields._current;
    v139 = (HoldReinforcementsData_SaveData_o *)sub_1C13F70(HoldReinforcementsData_SaveData_TypeInfo);
    HoldReinforcementsData_SaveData___ctor_36635588(v139, (HoldReinforcementsData_o *)v138, 0LL);
    if ( !v137 )
      sub_1C13F80(v140, v141);
    v148 = v137->fields._items;
    v149 = Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__Add__;
    ++v137->fields._version;
    if ( !v148 )
      sub_1C13F80(v140, v141);
    v150 = v137->fields._size;
    if ( (unsigned int)v150 >= v148->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v137,
        (Il2CppObject *)v139,
        *(const MethodInfo_362D1CC **)(*(_QWORD *)(v149[4] + 192LL) + 112LL));
    }
    else
    {
      v151 = &v148->obj.klass + v150;
      v137->fields._size = v150 + 1;
      v151[4] = (Il2CppClass *)v139;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v151 + 4), (int64_t)v139, v142, v143, v144, v145, v146, v147);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v253,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
  if ( !v137 )
    goto LABEL_129;
  v152 = *p_localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_object___ToArray(
                             v137,
                             (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__ToArray__);
  if ( !v152 )
    goto LABEL_129;
  *(_QWORD *)&v152->fields.winCondId = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v152->fields.winCondId, (int64_t)this, v153, v154, v155, v156, v157, v158);
  this = (WarBoardData_o *)v4->fields.playedStageReinforcementsList;
  if ( !this )
    goto LABEL_129;
  v159 = (PartyOrganizationUtility_o *)v4->fields.localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_int___ToArray(
                             (System_Collections_Generic_List_int__o *)this,
                             (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v159 )
    goto LABEL_129;
  v159[1].klass = (PartyOrganizationUtility_c *)this;
  sub_1C13CC8(v159 + 1, (int64_t)this, v160, v161, v162, v163, v164, v165);
  v166 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WarBoardUiData_SaveData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v166,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_WarBoardUiData_SaveData___ctor__);
  this = (WarBoardData_o *)v4->fields.listUiData;
  if ( !this )
    goto LABEL_129;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v251,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__);
  v252 = v251;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v252,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__) )
  {
    v167 = v252.fields._current;
    v168 = (WarBoardUiData_SaveData_o *)sub_1C13F70(WarBoardUiData_SaveData_TypeInfo);
    WarBoardUiData_SaveData___ctor_36635648(v168, (WarBoardUiData_o *)v167, 0LL);
    if ( !v166 )
      sub_1C13F80(v169, v170);
    v177 = v166->fields._items;
    v178 = Method_System_Collections_Generic_List_WarBoardUiData_SaveData__Add__;
    ++v166->fields._version;
    if ( !v177 )
      sub_1C13F80(v169, v170);
    v179 = v166->fields._size;
    if ( (unsigned int)v179 >= v177->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v166,
        (Il2CppObject *)v168,
        *(const MethodInfo_362D1CC **)(*(_QWORD *)(v178[4] + 192LL) + 112LL));
    }
    else
    {
      v180 = &v177->obj.klass + v179;
      v166->fields._size = v179 + 1;
      v180[4] = (Il2CppClass *)v168;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v180 + 4), (int64_t)v168, v171, v172, v173, v174, v175, v176);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v252,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__);
  if ( !v166 )
    goto LABEL_129;
  v181 = *p_localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_object___ToArray(
                             v166,
                             (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_WarBoardUiData_SaveData__ToArray__);
  if ( !v181
    || (v181->fields.latestBattlePieceUniqueIndexes = (struct System_UInt32_array *)this,
        sub_1C13CC8(
          (PartyOrganizationUtility_o *)&v181->fields.latestBattlePieceUniqueIndexes,
          (int64_t)this,
          v182,
          v183,
          v184,
          v185,
          v186,
          v187),
        (v188 = v4->fields.serverData) == 0LL)
    || (v189 = System_Linq_Enumerable__Count_object_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v188->fields.squareIndexInfo,
                 (const MethodInfo_2FAA35C *)Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___),
        v190 = *p_localSaveData,
        v191 = v189,
        this = (WarBoardData_o *)sub_1C13DCC(WarBoardSquareIndexData_SaveData___TypeInfo, v189),
        !v190) )
  {
LABEL_129:
    sub_1C13F80(this, onBoardSkillUpdate);
  }
  v190->fields.reinforcementsSaveList = (struct System_Collections_Generic_List_HoldReinforcementsData__o *)this;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&v190->fields.reinforcementsSaveList,
    (int64_t)this,
    v192,
    v193,
    v194,
    v195,
    v196,
    v197);
  if ( v191 >= 1 )
  {
    v198 = 0LL;
    v199 = (unsigned int)v191;
    v200 = 8LL;
    while ( *p_localSaveData )
    {
      v201 = v4->fields.serverData;
      if ( !v201 )
        break;
      squareIndexInfo = v201->fields.squareIndexInfo;
      if ( !squareIndexInfo )
        break;
      if ( v198 >= squareIndexInfo->max_length )
        goto LABEL_130;
      reinforcementsSaveList = (unsigned int *)(*p_localSaveData)->fields.reinforcementsSaveList;
      v204 = *(WarBoardSquareIndexData_o **)((char *)&squareIndexInfo->obj.klass + v200 * 4);
      v205 = (WarBoardSquareIndexData_SaveData_o *)sub_1C13F70(WarBoardSquareIndexData_SaveData_TypeInfo);
      WarBoardSquareIndexData_SaveData___ctor_36635728(v205, v204, 0LL);
      if ( !reinforcementsSaveList )
        break;
      if ( v205 )
      {
        this = (WarBoardData_o *)sub_1C13E60(v205, *(_QWORD *)(*(_QWORD *)reinforcementsSaveList + 64LL));
        if ( !this )
        {
LABEL_139:
          v250 = sub_1C13FA4();
          sub_1C13E4C(v250, 0LL);
        }
      }
      if ( v198 >= reinforcementsSaveList[6] )
        goto LABEL_130;
      *(_QWORD *)&reinforcementsSaveList[v200] = v205;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&reinforcementsSaveList[v200],
        (int64_t)v205,
        v206,
        v207,
        v208,
        v209,
        v210,
        v211);
      ++v198;
      v200 += 2LL;
      if ( v199 == v198 )
        goto LABEL_106;
    }
    goto LABEL_129;
  }
LABEL_106:
  v212 = v4->fields.serverData;
  if ( !v212 )
    goto LABEL_129;
  v213 = System_Linq_Enumerable__Count_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v212->fields.bossBattleInfo,
           (const MethodInfo_2FAA35C *)Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___);
  v214 = *p_localSaveData;
  v215 = v213;
  this = (WarBoardData_o *)sub_1C13DCC(WarBoardBossBattleData_SaveData___TypeInfo, v213);
  if ( !v214 )
    goto LABEL_129;
  v214->fields.playedStageReinforcementsList = (struct System_Collections_Generic_List_int__o *)this;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&v214->fields.playedStageReinforcementsList,
    (int64_t)this,
    v216,
    v217,
    v218,
    v219,
    v220,
    v221);
  this = *p_localSaveData;
  if ( v215 >= 1 )
  {
    v228 = 0LL;
    v229 = (unsigned int)v215;
    v230 = 32LL;
    while ( this )
    {
      v231 = v4->fields.serverData;
      if ( !v231 )
        break;
      bossBattleInfo = v231->fields.bossBattleInfo;
      if ( !bossBattleInfo )
        break;
      if ( v228 >= bossBattleInfo->max_length )
        goto LABEL_130;
      playedStageReinforcementsList = this->fields.playedStageReinforcementsList;
      v234 = *(WarBoardBossBattleData_o **)((char *)&bossBattleInfo->obj.klass + v230);
      v235 = (WarBoardBossBattleData_SaveData_o *)sub_1C13F70(WarBoardBossBattleData_SaveData_TypeInfo);
      WarBoardBossBattleData_SaveData___ctor_36432552(v235, v234, v236);
      if ( !playedStageReinforcementsList )
        break;
      if ( v235 )
      {
        this = (WarBoardData_o *)sub_1C13E60(v235, playedStageReinforcementsList->klass->_1.element_class);
        if ( !this )
          goto LABEL_139;
      }
      if ( v228 >= (unsigned int)playedStageReinforcementsList->fields._size )
        goto LABEL_130;
      *(System_Collections_Generic_List_int__c **)((char *)&playedStageReinforcementsList->klass + v230) = (System_Collections_Generic_List_int__c *)v235;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)((char *)playedStageReinforcementsList + v230),
        (int64_t)v235,
        v237,
        v238,
        v239,
        v240,
        v241,
        v242);
      this = *p_localSaveData;
      ++v228;
      v230 += 8LL;
      if ( v229 == v228 )
        goto LABEL_119;
    }
    goto LABEL_129;
  }
LABEL_119:
  if ( !this )
    goto LABEL_129;
  bgAnimationInfo_k__BackingField = (struct System_Collections_Generic_List_WarBoardPrevCondData__o *)v4->fields._bgAnimationInfo_k__BackingField;
  this->fields.listPrevCond = bgAnimationInfo_k__BackingField;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.listPrevCond,
    (int64_t)bgAnimationInfo_k__BackingField,
    v222,
    v223,
    v224,
    v225,
    v226,
    v227);
  v244 = *p_localSaveData;
  if ( !*p_localSaveData )
    goto LABEL_129;
  v244->fields._CurrentMemberCount_k__BackingField = v4->fields._ContinueConsumeType_k__BackingField;
  LOBYTE(v244->fields._ContinueConsumeType_k__BackingField) = v4->fields._IsContinue_k__BackingField;
  BYTE1(v244->fields._ContinueConsumeType_k__BackingField) = v4->fields._IsNextTurn_k__BackingField;
  v244->fields._CurrentPartyCost_k__BackingField = v4->fields.localSaveTiming;
  v245 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C13F70(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v245, 0LL);
  if ( !v245 )
    goto LABEL_129;
  v246 = MiniMessagePack_MiniMessagePacker__PackClass(v245, (Il2CppObject *)*p_localSaveData, 0LL);
  v247 = WarBoardData_TypeInfo;
  if ( !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    v247 = WarBoardData_TypeInfo;
  }
  WARBOARDDATA_SAVEDATA_KEY = v247->static_fields->WARBOARDDATA_SAVEDATA_KEY;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v249 = System_Convert__ToBase64String(v246, 0LL);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SetString(WARBOARDDATA_SAVEDATA_KEY, v249, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardData__SaveHoldReinforcements(
        WarBoardData_o *this,
        int32_t stageReinforcementsId,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  WarBoardData___c__DisplayClass187_0_o *v16; // x20
  System_Collections_Generic_List_object__o *v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_T__o *reinforcementsSaveList; // x21
  System_Func_object__bool__o *v20; // x22
  _BOOL8 v21; // x0
  __int64 v22; // x1
  int32_t v23; // w21
  int32_t v24; // w22
  HoldReinforcementsData_o *v25; // x20
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x8
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4BB22EF & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_Any_HoldReinforcementsData___, *(_QWORD *)&stageReinforcementsId);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__get_Current__, v9);
    sub_1C13D24(&System_Func_HoldReinforcementsData__bool__TypeInfo, v10);
    sub_1C13D24(&HoldReinforcementsData_TypeInfo, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_HoldReinforcementsData__Add__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__, v13);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass187_0__SaveHoldReinforcements_b__0__, v14);
    sub_1C13D24(&WarBoardData___c__DisplayClass187_0_TypeInfo, v15);
    byte_4BB22EF = 1;
  }
  memset(&v37, 0, sizeof(v37));
  v16 = (WarBoardData___c__DisplayClass187_0_o *)sub_1C13F70(WarBoardData___c__DisplayClass187_0_TypeInfo);
  WarBoardData___c__DisplayClass187_0___ctor(v16, 0LL);
  if ( !v16 )
    goto LABEL_20;
  v16->fields.stageReinforcementsId = stageReinforcementsId;
  v16->fields.index = index;
  reinforcementsSaveList = (System_Collections_Generic_List_T__o *)this->fields.reinforcementsSaveList;
  v20 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_HoldReinforcementsData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v20,
    (Il2CppObject *)v16,
    Method_WarBoardData___c__DisplayClass187_0__SaveHoldReinforcements_b__0__,
    0LL);
  if ( !BasicHelper__Any_object_(
          reinforcementsSaveList,
          (System_Func_T__bool__o *)v20,
          (const MethodInfo_2F7A3D8 *)Method_BasicHelper_Any_HoldReinforcementsData___) )
  {
    v23 = v16->fields.stageReinforcementsId;
    v24 = v16->fields.index;
    v25 = (HoldReinforcementsData_o *)sub_1C13F70(HoldReinforcementsData_TypeInfo);
    HoldReinforcementsData___ctor_36672080(v25, v23, v24, 1, 0LL);
    v17 = (System_Collections_Generic_List_object__o *)this->fields.reinforcementsSaveList;
    if ( v17 )
    {
      items = v17->fields._items;
      v33 = Method_System_Collections_Generic_List_HoldReinforcementsData__Add__;
      ++v17->fields._version;
      if ( items )
      {
        size = v17->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v17,
            (Il2CppObject *)v25,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + size;
          v17->fields._size = size + 1;
          v35[4] = (Il2CppClass *)v25;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v35 + 4), (int64_t)v25, v26, v27, v28, v29, v30, v31);
        }
        return;
      }
    }
LABEL_20:
    sub_1C13F80(v17, v18);
  }
  v17 = (System_Collections_Generic_List_object__o *)this->fields.reinforcementsSaveList;
  if ( !v17 )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    v17,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
  v37 = v36;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v37,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__);
    if ( !v21 )
      break;
    if ( !v37.fields._current )
      sub_1C13F80(v21, v22);
    if ( LODWORD(v37.fields._current[1].klass) == v16->fields.stageReinforcementsId
      && HIDWORD(v37.fields._current[1].klass) == v16->fields.index )
    {
      HoldReinforcementsData__IncreaseHoldNum((HoldReinforcementsData_o *)v37.fields._current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v37,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardData__SavePlayReinforcements(
        WarBoardData_o *this,
        int32_t stageReinforcementsId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *playedStageReinforcementsList; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v7; // x9
  __int64 size; // x10

  if ( (byte_4BB22ED & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&stageReinforcementsId);
    byte_4BB22ED = 1;
  }
  playedStageReinforcementsList = this->fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList
    || (items = playedStageReinforcementsList->fields._items,
        v7 = Method_System_Collections_Generic_List_int__Add__,
        ++playedStageReinforcementsList->fields._version,
        !items) )
  {
    sub_1C13F80(playedStageReinforcementsList, *(_QWORD *)&stageReinforcementsId);
  }
  size = playedStageReinforcementsList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      playedStageReinforcementsList,
      stageReinforcementsId,
      *(const MethodInfo_36101A8 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
  }
  else
  {
    playedStageReinforcementsList->fields._size = size + 1;
    items->m_Items[size + 1] = stageReinforcementsId;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardData__SearchInRangeSquares(
        WarBoardData_o *this,
        int32_t start,
        int32_t range,
        System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o **rangeSearches,
        const MethodInfo *method)
{
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
  WarBoardData___c__DisplayClass125_0_o *v20; // x21
  Il2CppObject *v21; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  WarBoardSquareData_o *Square; // x0
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *v25; // x24
  WarBoardSquareData_o *v26; // x22
  System_Collections_Generic_List_object__o *v27; // x24
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_Func_object__bool__o *v34; // x25
  System_Collections_Generic_List_object__o *v35; // x24
  int32_t v36; // w26
  WarBoardData_SquareRangeSearch_o *v37; // x25
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  struct System_Int32_array *linkedSquares; // x8
  __int64 v49; // x8
  unsigned __int64 v50; // x28
  __int64 v51; // x29
  __int64 v52; // x24
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  __int64 v59; // x23
  struct System_Int32_array *v60; // x8
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *v61; // x25
  System_Func_object__bool__o *v62; // x26
  const MethodInfo *v63; // x4
  System_Collections_Generic_List_T__o *v64; // x25
  System_Func_object__bool__o *v65; // x26
  struct System_Int32_array *v66; // x8

  if ( (byte_4BB22C6 & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_Any_WarBoardData_SquareRangeSearch___, *(_QWORD *)&start);
    sub_1C13D24(&Method_System_Linq_Enumerable_All_WarBoardData_SquareRangeSearch___, v8);
    sub_1C13D24(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardData_SquareRangeSearch___, v9);
    sub_1C13D24(&System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch__Add__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch___ctor__, v12);
    sub_1C13D24(&System_Collections_Generic_List_WarBoardData_SquareRangeSearch__TypeInfo, v13);
    sub_1C13D24(&WarBoardData_SquareRangeSearch_TypeInfo, v14);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass125_0__SearchInRangeSquares_b__0__, v15);
    sub_1C13D24(&WarBoardData___c__DisplayClass125_0_TypeInfo, v16);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__1__, v17);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__2__, v18);
    sub_1C13D24(&WarBoardData___c__DisplayClass125_1_TypeInfo, v19);
    byte_4BB22C6 = 1;
  }
  v20 = (WarBoardData___c__DisplayClass125_0_o *)sub_1C13F70(WarBoardData___c__DisplayClass125_0_TypeInfo);
  WarBoardData___c__DisplayClass125_0___ctor(v20, 0LL);
  if ( !v20 )
    goto LABEL_29;
  v20->fields.start = start;
  Square = WarBoardData__GetSquare(this, start, v23);
  if ( Square )
  {
    v25 = *rangeSearches;
    v26 = Square;
    if ( !*rangeSearches )
    {
      v27 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WarBoardData_SquareRangeSearch__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v27,
        (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch___ctor__);
      *rangeSearches = (System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *)v27;
      sub_1C13CC8((PartyOrganizationUtility_o *)rangeSearches, (int64_t)v27, v28, v29, v30, v31, v32, v33);
      v25 = *rangeSearches;
    }
    v34 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v34,
      (Il2CppObject *)v20,
      Method_WarBoardData___c__DisplayClass125_0__SearchInRangeSquares_b__0__,
      0LL);
    v21 = System_Linq_Enumerable__FirstOrDefault_object__50015312(
            (System_Collections_Generic_IEnumerable_TSource__o *)v25,
            (System_Func_TSource__bool__o *)v34,
            (const MethodInfo_2FB2C50 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardData_SquareRangeSearch___);
    if ( v21 )
    {
      HIDWORD(v21[1].klass) = range;
    }
    else
    {
      v35 = (System_Collections_Generic_List_object__o *)*rangeSearches;
      v36 = v20->fields.start;
      v37 = (WarBoardData_SquareRangeSearch_o *)sub_1C13F70(WarBoardData_SquareRangeSearch_TypeInfo);
      WarBoardData_SquareRangeSearch___ctor(v37, v36, range, 0LL);
      if ( !v35 )
        goto LABEL_29;
      items = v35->fields._items;
      v45 = Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch__Add__;
      ++v35->fields._version;
      if ( !items )
        goto LABEL_29;
      size = v35->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v35,
          (Il2CppObject *)v37,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
      }
      else
      {
        v47 = &items->obj.klass + size;
        v35->fields._size = size + 1;
        v47[4] = (Il2CppClass *)v37;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v47 + 4), (int64_t)v37, v38, v39, v40, v41, v42, v43);
      }
    }
    v20->fields.nextRange = range - 1;
    if ( range - 1 >= 0 )
    {
      linkedSquares = v26->fields.linkedSquares;
      if ( !linkedSquares )
        goto LABEL_29;
      v49 = *(_QWORD *)&linkedSquares->max_length;
      if ( (int)v49 >= 1 )
      {
        v50 = 0LL;
        v51 = (unsigned int)v49;
        while ( 1 )
        {
          v52 = sub_1C13F70(WarBoardData___c__DisplayClass125_1_TypeInfo);
          WarBoardData___c__DisplayClass125_1___ctor((WarBoardData___c__DisplayClass125_1_o *)v52, 0LL);
          if ( !v52 )
            break;
          *(_QWORD *)(v52 + 24) = v20;
          v59 = v52 + 24;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v52 + 24), (int64_t)v20, v53, v54, v55, v56, v57, v58);
          v60 = v26->fields.linkedSquares;
          if ( !v60 )
            break;
          if ( v50 >= v60->max_length )
            goto LABEL_30;
          *(_DWORD *)(v52 + 16) = v60->m_Items[v50 + 1];
          v61 = *rangeSearches;
          v62 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v62,
            (Il2CppObject *)v52,
            Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__1__,
            0LL);
          v21 = (Il2CppObject *)System_Linq_Enumerable__All_object_(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)v61,
                                  (System_Func_TSource__bool__o *)v62,
                                  (const MethodInfo_2F994DC *)Method_System_Linq_Enumerable_All_WarBoardData_SquareRangeSearch___);
          if ( ((unsigned __int8)v21 & 1) != 0
            || (v64 = (System_Collections_Generic_List_T__o *)*rangeSearches,
                v65 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo),
                System_Func_object__bool____ctor(
                  v65,
                  (Il2CppObject *)v52,
                  Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__2__,
                  0LL),
                v21 = (Il2CppObject *)BasicHelper__Any_object_(
                                        v64,
                                        (System_Func_T__bool__o *)v65,
                                        (const MethodInfo_2F7A3D8 *)Method_BasicHelper_Any_WarBoardData_SquareRangeSearch___),
                ((unsigned __int8)v21 & 1) != 0) )
          {
            v66 = v26->fields.linkedSquares;
            if ( !v66 )
              break;
            if ( v50 >= v66->max_length )
LABEL_30:
              sub_1C13F88(v21, v22);
            if ( !*(_QWORD *)v59 )
              break;
            WarBoardData__SearchInRangeSquares(
              this,
              v66->m_Items[v50 + 1],
              *(_DWORD *)(*(_QWORD *)v59 + 20LL),
              rangeSearches,
              v63);
          }
          if ( v51 == ++v50 )
            return;
        }
LABEL_29:
        sub_1C13F80(v21, v22);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WarBoardData__SearchNearestEmptySquare(
        WarBoardData_o *this,
        int32_t destination,
        int32_t current,
        System_Func_WarBoardPieceData__bool__o *checkReplaceFunc,
        const MethodInfo *method)
{
  int32_t v7; // w22
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_Queue_int__o *v18; // x21
  WarBoardPieceData_o *Piece_36396444; // x0
  __int64 v20; // x1
  System_Collections_Generic_HashSet_int__o *v21; // x23
  const MethodInfo *v22; // x2
  WarBoardSquareData_o *Square; // x0
  const MethodInfo *v24; // x2
  WarBoardSquareData_o *v25; // x24
  WarBoardPieceData_o *v26; // x25
  struct System_Int32_array *linkedSquares; // x24
  __int64 v28; // x8
  unsigned __int64 v29; // x25
  int32_t v30; // w22

  v7 = destination;
  if ( (byte_4BB22C7 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_int__Add__, *(_QWORD *)&destination);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_int__Contains__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_int___ctor__, v10);
    sub_1C13D24(&System_Collections_Generic_HashSet_int__TypeInfo, v11);
    sub_1C13D24(&Method_System_Collections_Generic_Queue_int__Contains__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_Queue_int__Dequeue__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_Queue_int__Enqueue__, v14);
    sub_1C13D24(&Method_System_Collections_Generic_Queue_int___ctor__, v15);
    sub_1C13D24(&Method_System_Collections_Generic_Queue_int__get_Count__, v16);
    sub_1C13D24(&System_Collections_Generic_Queue_int__TypeInfo, v17);
    byte_4BB22C7 = 1;
  }
  if ( v7 != current )
  {
    v18 = (System_Collections_Generic_Queue_int__o *)sub_1C13F70(System_Collections_Generic_Queue_int__TypeInfo);
    System_Collections_Generic_Queue_int____ctor(
      v18,
      (const MethodInfo_379D380 *)Method_System_Collections_Generic_Queue_int___ctor__);
    if ( !v18 )
LABEL_24:
      sub_1C13F80(Piece_36396444, v20);
    System_Collections_Generic_Queue_int___Enqueue(
      v18,
      v7,
      (const MethodInfo_379D8F8 *)Method_System_Collections_Generic_Queue_int__Enqueue__);
    v21 = (System_Collections_Generic_HashSet_int__o *)sub_1C13F70(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v21,
      (const MethodInfo_34E02D8 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    if ( v18->fields._size >= 1 )
    {
      do
      {
        v7 = System_Collections_Generic_Queue_int___Dequeue(
               v18,
               (const MethodInfo_379DA74 *)Method_System_Collections_Generic_Queue_int__Dequeue__);
        Square = WarBoardData__GetSquare(this, v7, v22);
        if ( !Square )
          break;
        v25 = Square;
        Piece_36396444 = WarBoardData__GetPiece_36396444(this, v7, v24);
        if ( !Piece_36396444 )
          return v7;
        if ( !checkReplaceFunc )
          goto LABEL_24;
        v26 = Piece_36396444;
        Piece_36396444 = (WarBoardPieceData_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, WarBoardPieceData_o *, _QWORD))checkReplaceFunc->fields.m_target)(
                                                  checkReplaceFunc->fields.original_method_info,
                                                  Piece_36396444,
                                                  *(_QWORD *)&checkReplaceFunc->fields.extra_arg);
        if ( ((unsigned __int8)Piece_36396444 & 1) != 0 )
        {
          WarBoardPieceData__SetSquareIndex(v26, -1, 0LL);
          return v7;
        }
        if ( !v21 )
          goto LABEL_24;
        Piece_36396444 = (WarBoardPieceData_o *)System_Collections_Generic_HashSet_int___Add(
                                                  v21,
                                                  v7,
                                                  (const MethodInfo_34E14DC *)Method_System_Collections_Generic_HashSet_int__Add__);
        linkedSquares = v25->fields.linkedSquares;
        if ( !linkedSquares )
          goto LABEL_24;
        v28 = *(_QWORD *)&linkedSquares->max_length;
        if ( (int)v28 >= 1 )
        {
          v29 = 0LL;
          do
          {
            if ( v29 >= (unsigned int)v28 )
              sub_1C13F88(Piece_36396444, v20);
            v30 = linkedSquares->m_Items[v29 + 1];
            Piece_36396444 = (WarBoardPieceData_o *)System_Collections_Generic_HashSet_int___Contains(
                                                      v21,
                                                      v30,
                                                      (const MethodInfo_34E09CC *)Method_System_Collections_Generic_HashSet_int__Contains__);
            if ( ((unsigned __int8)Piece_36396444 & 1) == 0 )
            {
              Piece_36396444 = (WarBoardPieceData_o *)System_Collections_Generic_Queue_int___Contains(
                                                        v18,
                                                        v30,
                                                        (const MethodInfo_379DB30 *)Method_System_Collections_Generic_Queue_int__Contains__);
              if ( ((unsigned __int8)Piece_36396444 & 1) == 0 )
                System_Collections_Generic_Queue_int___Enqueue(
                  v18,
                  v30,
                  (const MethodInfo_379D8F8 *)Method_System_Collections_Generic_Queue_int__Enqueue__);
            }
            LODWORD(v28) = linkedSquares->max_length;
            ++v29;
          }
          while ( (__int64)v29 < (int)v28 );
        }
      }
      while ( v18->fields._size > 0 );
    }
    return -1;
  }
  return v7;
}


void __fastcall WarBoardData__SetBgAnimationInfo(
        WarBoardData_o *this,
        System_String_o *objectName,
        System_String_o *animName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *bgAnimationInfo_k__BackingField; // x0

  if ( (byte_4BB22FA & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, objectName);
    byte_4BB22FA = 1;
  }
  bgAnimationInfo_k__BackingField = this->fields._bgAnimationInfo_k__BackingField;
  if ( !bgAnimationInfo_k__BackingField )
    sub_1C13F80(0LL, objectName);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)bgAnimationInfo_k__BackingField,
    (Il2CppObject *)objectName,
    (Il2CppObject *)animName,
    (const MethodInfo_32F299C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
}


void __fastcall WarBoardData__SetContinue(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  WarBoardPieceData_array *PlayerPieces; // x0
  WarBoardData___c_c *v24; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x20
  System_Func_object__int__o *_9__82_0; // x21
  Il2CppObject *v27; // x22
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  System_Object_array *v36; // x0
  WarBoardData___c_c *v37; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x20
  System_Func_object__object__o *_9__82_1; // x21
  Il2CppObject *v40; // x22
  struct WarBoardData___c_StaticFields *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  System_Collections_Generic_IEnumerable_T__o *v48; // x0
  System_Collections_Generic_IEnumerable_T__o *v49; // x0
  System_Object_array *v50; // x0
  WarBoardData___c_c *v51; // x8
  BattleServantData_array *v52; // x21
  System_Func_object__bool__o *_9__82_2; // x22
  Il2CppObject *v54; // x23
  struct WarBoardData___c_StaticFields *v55; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x0
  WarBoardData___c_c *v63; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x22
  System_Func_object__int__o *_9__82_3; // x23
  Il2CppObject *v66; // x24
  struct WarBoardData___c_StaticFields *v67; // x0
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  System_Collections_Generic_IEnumerable_T__o *v74; // x23
  System_Collections_Generic_HashSet_int__o *v75; // x22
  Il2CppObject *Instance; // x0
  __int64 v77; // x1
  WarBoardData___c_c *v78; // x0
  System_Action_object__o *_9__82_4; // x21
  Il2CppObject *v80; // x22
  struct WarBoardData___c_StaticFields *v81; // x0
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  struct WarBoardItemData_array *items; // x19
  int max_length; // w8
  unsigned int v90; // w20

  if ( (byte_4BB22A9 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_WarBoardPieceData__TypeInfo, method);
    sub_1C13D24(&Method_BasicHelper_ExcludeNull_BattleServantData___, v3);
    sub_1C13D24(&Method_BasicHelper_ForEach_WarBoardPieceData___, v4);
    sub_1C13D24(&Method_System_Linq_Enumerable_OrderBy_WarBoardPieceData__int___, v5);
    sub_1C13D24(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__BattleServantData___, v6);
    sub_1C13D24(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___, v7);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_BattleServantData___, v8);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, v9);
    sub_1C13D24(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v10);
    sub_1C13D24(&System_Func_WarBoardPieceData__BattleServantData__TypeInfo, v11);
    sub_1C13D24(&System_Func_WarBoardPieceData__int__TypeInfo, v12);
    sub_1C13D24(&System_Func_WarBoardPieceData__bool__TypeInfo, v13);
    sub_1C13D24(&Method_System_Collections_Generic_HashSet_int___ctor___77396904, v14);
    sub_1C13D24(&System_Collections_Generic_HashSet_int__TypeInfo, v15);
    sub_1C13D24(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v16);
    sub_1C13D24(&Method_WarBoardData___c__SetContinue_b__82_0__, v17);
    sub_1C13D24(&Method_WarBoardData___c__SetContinue_b__82_1__, v18);
    sub_1C13D24(&Method_WarBoardData___c__SetContinue_b__82_2__, v19);
    sub_1C13D24(&Method_WarBoardData___c__SetContinue_b__82_3__, v20);
    sub_1C13D24(&Method_WarBoardData___c__SetContinue_b__82_4__, v21);
    sub_1C13D24(&WarBoardData___c_TypeInfo, v22);
    byte_4BB22A9 = 1;
  }
  PlayerPieces = WarBoardData__GetPlayerPieces(this, method);
  v24 = WarBoardData___c_TypeInfo;
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)PlayerPieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v24 = WarBoardData___c_TypeInfo;
  }
  _9__82_0 = (System_Func_object__int__o *)v24->static_fields->__9__82_0;
  if ( !_9__82_0 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v24 = WarBoardData___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v24->static_fields->__9;
    _9__82_0 = (System_Func_object__int__o *)sub_1C13F70(System_Func_WarBoardPieceData__int__TypeInfo);
    System_Func_object__int____ctor(_9__82_0, v27, Method_WarBoardData___c__SetContinue_b__82_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__82_0 = (struct System_Func_WarBoardPieceData__int__o *)_9__82_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__82_0,
      (int64_t)_9__82_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v25,
                                                               (System_Func_TSource__TKey__o *)_9__82_0,
                                                               (const MethodInfo_2FB842C *)Method_System_Linq_Enumerable_OrderBy_WarBoardPieceData__int___);
  v36 = System_Linq_Enumerable__ToArray_object_(
          v35,
          (const MethodInfo_2FC8D34 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
  v37 = WarBoardData___c_TypeInfo;
  v38 = (System_Collections_Generic_IEnumerable_TSource__o *)v36;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v37 = WarBoardData___c_TypeInfo;
  }
  _9__82_1 = (System_Func_object__object__o *)v37->static_fields->__9__82_1;
  if ( !_9__82_1 )
  {
    if ( !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      v37 = WarBoardData___c_TypeInfo;
    }
    v40 = (Il2CppObject *)v37->static_fields->__9;
    _9__82_1 = (System_Func_object__object__o *)sub_1C13F70(System_Func_WarBoardPieceData__BattleServantData__TypeInfo);
    System_Func_object__object____ctor(_9__82_1, v40, Method_WarBoardData___c__SetContinue_b__82_1__, 0LL);
    v41 = WarBoardData___c_TypeInfo->static_fields;
    v41->__9__82_1 = (struct System_Func_WarBoardPieceData__BattleServantData__o *)_9__82_1;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v41->__9__82_1, (int64_t)_9__82_1, v42, v43, v44, v45, v46, v47);
  }
  v48 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                         v38,
                                                         (System_Func_TSource__TResult__o *)_9__82_1,
                                                         (const MethodInfo_2FC0B08 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__BattleServantData___);
  v49 = BasicHelper__ExcludeNull_object_(
          v48,
          (const MethodInfo_2F7AD2C *)Method_BasicHelper_ExcludeNull_BattleServantData___);
  v50 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v49,
          (const MethodInfo_2FC8D34 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  v51 = WarBoardData___c_TypeInfo;
  v52 = (BattleServantData_array *)v50;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v51 = WarBoardData___c_TypeInfo;
  }
  _9__82_2 = (System_Func_object__bool__o *)v51->static_fields->__9__82_2;
  if ( !_9__82_2 )
  {
    if ( !v51->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v51);
      v51 = WarBoardData___c_TypeInfo;
    }
    v54 = (Il2CppObject *)v51->static_fields->__9;
    _9__82_2 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__82_2, v54, Method_WarBoardData___c__SetContinue_b__82_2__, 0LL);
    v55 = WarBoardData___c_TypeInfo->static_fields;
    v55->__9__82_2 = (struct System_Func_WarBoardPieceData__bool__o *)_9__82_2;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v55->__9__82_2, (int64_t)_9__82_2, v56, v57, v58, v59, v60, v61);
  }
  v62 = System_Linq_Enumerable__Where_object_(
          v38,
          (System_Func_TSource__bool__o *)_9__82_2,
          (const MethodInfo_2FCEBC0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  v63 = WarBoardData___c_TypeInfo;
  v64 = v62;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v63 = WarBoardData___c_TypeInfo;
  }
  _9__82_3 = (System_Func_object__int__o *)v63->static_fields->__9__82_3;
  if ( !_9__82_3 )
  {
    if ( !v63->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v63);
      v63 = WarBoardData___c_TypeInfo;
    }
    v66 = (Il2CppObject *)v63->static_fields->__9;
    _9__82_3 = (System_Func_object__int__o *)sub_1C13F70(System_Func_WarBoardPieceData__int__TypeInfo);
    System_Func_object__int____ctor(_9__82_3, v66, Method_WarBoardData___c__SetContinue_b__82_3__, 0LL);
    v67 = WarBoardData___c_TypeInfo->static_fields;
    v67->__9__82_3 = (struct System_Func_WarBoardPieceData__int__o *)_9__82_3;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v67->__9__82_3, (int64_t)_9__82_3, v68, v69, v70, v71, v72, v73);
  }
  v74 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                         v64,
                                                         (System_Func_TSource__TResult__o *)_9__82_3,
                                                         (const MethodInfo_2FC022C *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___);
  v75 = (System_Collections_Generic_HashSet_int__o *)sub_1C13F70(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_55444424(
    v75,
    v74,
    (const MethodInfo_34E03C8 *)Method_System_Collections_Generic_HashSet_int___ctor___77396904);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (Il2CppObject *)Instance[36].monitor;
  if ( !Instance )
    goto LABEL_42;
  BattleData__ProcContinue((BattleData_o *)Instance, v52, v75, 0LL);
  v78 = WarBoardData___c_TypeInfo;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v78 = WarBoardData___c_TypeInfo;
  }
  _9__82_4 = (System_Action_object__o *)v78->static_fields->__9__82_4;
  if ( !_9__82_4 )
  {
    if ( !v78->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v78);
      v78 = WarBoardData___c_TypeInfo;
    }
    v80 = (Il2CppObject *)v78->static_fields->__9;
    _9__82_4 = (System_Action_object__o *)sub_1C13F70(System_Action_WarBoardPieceData__TypeInfo);
    System_Action_object____ctor(_9__82_4, v80, Method_WarBoardData___c__SetContinue_b__82_4__, 0LL);
    v81 = WarBoardData___c_TypeInfo->static_fields;
    v81->__9__82_4 = (struct System_Action_WarBoardPieceData__o *)_9__82_4;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v81->__9__82_4, (int64_t)_9__82_4, v82, v83, v84, v85, v86, v87);
  }
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)v38,
    (System_Action_T__o *)_9__82_4,
    (const MethodInfo_2F7C3C8 *)Method_BasicHelper_ForEach_WarBoardPieceData___);
  items = this->fields.items;
  if ( !items )
    goto LABEL_42;
  max_length = items->max_length;
  if ( max_length >= 1 )
  {
    v90 = 0;
    while ( 1 )
    {
      if ( v90 >= max_length )
        sub_1C13F88(Instance, v77);
      Instance = (Il2CppObject *)items->m_Items[v90];
      if ( !Instance )
        break;
      WarBoardItemData__ResetItem((WarBoardItemData_o *)Instance, 0LL);
      max_length = items->max_length;
      if ( (int)++v90 >= max_length )
        return;
    }
LABEL_42:
    sub_1C13F80(Instance, v77);
  }
}


void __fastcall WarBoardData__SetPlayerMasterUserEquip(
        WarBoardData_o *this,
        int64_t userEquipId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WarBoardData___c_c *v8; // x0
  System_Object_array *pieces; // x20
  System_Predicate_object__o *_9__144_0; // x21
  Il2CppObject *v11; // x22
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  Il2CppObject *object; // x0

  if ( (byte_4BB22D2 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Array_Find_WarBoardPieceData___, userEquipId);
    sub_1C13D24(&System_Predicate_WarBoardPieceData__TypeInfo, v5);
    sub_1C13D24(&Method_WarBoardData___c__SetPlayerMasterUserEquip_b__144_0__, v6);
    sub_1C13D24(&WarBoardData___c_TypeInfo, v7);
    byte_4BB22D2 = 1;
  }
  v8 = WarBoardData___c_TypeInfo;
  pieces = (System_Object_array *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v8 = WarBoardData___c_TypeInfo;
  }
  _9__144_0 = (System_Predicate_object__o *)v8->static_fields->__9__144_0;
  if ( !_9__144_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = WarBoardData___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__144_0 = (System_Predicate_object__o *)sub_1C13F70(System_Predicate_WarBoardPieceData__TypeInfo);
    System_Predicate_object____ctor(_9__144_0, v11, Method_WarBoardData___c__SetPlayerMasterUserEquip_b__144_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__144_0 = (struct System_Predicate_WarBoardPieceData__o *)_9__144_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__144_0,
      (int64_t)_9__144_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  object = System_Array__Find_object_(
             pieces,
             (System_Predicate_T__o *)_9__144_0,
             (const MethodInfo_308A23C *)Method_System_Array_Find_WarBoardPieceData___);
  if ( object )
    WarBoardPieceData__SetMasterEquip((WarBoardPieceData_o *)object, userEquipId, 0LL);
}


void __fastcall WarBoardData__SetRequest(WarBoardData_o *this, RequestBase_o *request, const MethodInfo *method)
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
  WarBoardData___c_c *v27; // x0
  System_Collections_Generic_IEnumerable_T__o *pieces; // x21
  System_Action_object__o *_9__156_0; // x22
  Il2CppObject *v30; // x23
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  Il2CppObject *v38; // x0
  __int64 v39; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  Il2CppObject *p_obj; // x21
  System_Byte_array *v42; // x21
  System_Byte_array *v43; // x21
  System_String_o *v44; // x0
  struct WarBoardDataEntity_o *v45; // x8
  Il2CppObject *v46; // x0
  System_Byte_array *v47; // x0
  System_Byte_array *v48; // x0
  System_String_o *v49; // x0
  System_Collections_Generic_IEnumerable_TSource__o *items; // x23
  WarBoardData___c_c *v51; // x0
  System_String_o *v52; // x22
  System_String_o *v53; // x21
  System_Func_object__object__o *_9__156_1; // x24
  System_Byte_array *v55; // x21
  System_Byte_array *v56; // x0
  System_Convert_c *v57; // x8
  System_Byte_array *v58; // x21
  Il2CppObject *v59; // x25
  struct WarBoardData___c_StaticFields *v60; // x0
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v67; // x0
  WarBoardData___c_c *v68; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v69; // x23
  System_Func_object__bool__o *_9__156_2; // x24
  Il2CppObject *v71; // x25
  struct WarBoardData___c_StaticFields *v72; // x0
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v79; // x0
  System_String_array *v80; // x0
  Il2CppObject *v81; // x0
  Il2CppObject *v82; // x0
  System_Byte_array *v83; // x21
  System_Byte_array *v84; // x0
  System_String_o *v85; // x0
  struct WarBoardDataEntity_o *v86; // x8
  Il2CppObject *v87; // x21
  Il2CppObject *v88; // x0
  System_Byte_array *v89; // x21
  System_Byte_array *v90; // x21
  System_String_o *v91; // x0
  struct WarBoardDataEntity_o *v92; // x8
  Il2CppObject *v93; // x0
  System_Byte_array *v94; // x0
  System_Byte_array *v95; // x0
  System_String_o *v96; // x0
  struct WarBoardDataEntity_o *v97; // x8
  Il2CppObject *v98; // x0
  System_Byte_array *v99; // x0
  System_Byte_array *v100; // x0
  System_String_o *v101; // x2

  if ( (byte_4BB22DB & 1) == 0 )
  {
    sub_1C13D24(&System_Action_WarBoardPieceData__TypeInfo, request);
    sub_1C13D24(&Method_BasicHelper_ForEach_WarBoardPieceData___, v5);
    sub_1C13D24(&CatAndMouseGame_TypeInfo, v6);
    sub_1C13D24(&System_Convert_TypeInfo, v7);
    sub_1C13D24(&Method_System_Linq_Enumerable_Select_WarBoardItemData__string___, v8);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_string___, v9);
    sub_1C13D24(&Method_System_Linq_Enumerable_Where_string___, v10);
    sub_1C13D24(&System_Func_WarBoardItemData__string__TypeInfo, v11);
    sub_1C13D24(&System_Func_string__bool__TypeInfo, v12);
    sub_1C13D24(&JsonManager_TypeInfo, v13);
    sub_1C13D24(&Method_WarBoardData___c__SetRequest_b__156_0__, v14);
    sub_1C13D24(&Method_WarBoardData___c__SetRequest_b__156_1__, v15);
    sub_1C13D24(&Method_WarBoardData___c__SetRequest_b__156_2__, v16);
    sub_1C13D24(&WarBoardData___c_TypeInfo, v17);
    sub_1C13D24(&StringLiteral_17643/*"border-bottom-left-radius"*/, v18);
    sub_1C13D24(&StringLiteral_24098/*"supportName"*/, v19);
    sub_1C13D24(&StringLiteral_21659/*"master"*/, v20);
    sub_1C13D24(&StringLiteral_25003/*"vm.threads"*/, v21);
    sub_1C13D24(&StringLiteral_22544/*"nowrap"*/, v22);
    sub_1C13D24(&StringLiteral_23844/*"spot_info_gauge_s"*/, v23);
    sub_1C13D24(&StringLiteral_20069/*"getDescription"*/, v24);
    sub_1C13D24(&StringLiteral_866/*","*/, v25);
    sub_1C13D24(&StringLiteral_16274/*"[s]"*/, v26);
    byte_4BB22DB = 1;
  }
  v27 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_T__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v27 = WarBoardData___c_TypeInfo;
  }
  _9__156_0 = (System_Action_object__o *)v27->static_fields->__9__156_0;
  if ( !_9__156_0 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = WarBoardData___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v27->static_fields->__9;
    _9__156_0 = (System_Action_object__o *)sub_1C13F70(System_Action_WarBoardPieceData__TypeInfo);
    System_Action_object____ctor(_9__156_0, v30, Method_WarBoardData___c__SetRequest_b__156_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__156_0 = (struct System_Action_WarBoardPieceData__o *)_9__156_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__156_0,
      (int64_t)_9__156_0,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  BasicHelper__ForEach_object_(
    pieces,
    (System_Action_T__o *)_9__156_0,
    (const MethodInfo_2F7C3C8 *)Method_BasicHelper_ForEach_WarBoardPieceData___);
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_51;
  p_obj = &serverData->fields.svtInfo->obj;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v38 = (Il2CppObject *)JsonManager__toJson(p_obj, 0, 0, 0LL);
  if ( !request )
    goto LABEL_51;
  v42 = RequestBase__PackToMessagePack(request, v38, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v43 = CatAndMouseGame__CatGame5Bytes(v42, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v44 = System_Convert__ToBase64String(v43, 0LL);
  RequestBase__addField_42303556(request, (System_String_o *)StringLiteral_24098/*"supportName"*/, v44, 0LL);
  v45 = this->fields.serverData;
  if ( !v45
    || (v46 = (Il2CppObject *)JsonManager__toJson(&v45->fields.masterInfo->obj, 0, 0, 0LL),
        v47 = RequestBase__PackToMessagePack(request, v46, 0LL),
        v48 = CatAndMouseGame__CatGame5Bytes(v47, 0LL),
        v49 = System_Convert__ToBase64String(v48, 0LL),
        RequestBase__addField_42303556(request, (System_String_o *)StringLiteral_21659/*"master"*/, v49, 0LL),
        (items = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.items) == 0LL) )
  {
LABEL_51:
    sub_1C13F80(v38, v39);
  }
  if ( items[1].monitor )
  {
    v51 = WarBoardData___c_TypeInfo;
    if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
      v51 = WarBoardData___c_TypeInfo;
    }
    v52 = (System_String_o *)StringLiteral_866/*","*/;
    v53 = (System_String_o *)StringLiteral_16274/*"[s]"*/;
    _9__156_1 = (System_Func_object__object__o *)v51->static_fields->__9__156_1;
    if ( !_9__156_1 )
    {
      if ( !v51->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v51);
        v51 = WarBoardData___c_TypeInfo;
      }
      v59 = (Il2CppObject *)v51->static_fields->__9;
      _9__156_1 = (System_Func_object__object__o *)sub_1C13F70(System_Func_WarBoardItemData__string__TypeInfo);
      System_Func_object__object____ctor(_9__156_1, v59, Method_WarBoardData___c__SetRequest_b__156_1__, 0LL);
      v60 = WarBoardData___c_TypeInfo->static_fields;
      v60->__9__156_1 = (struct System_Func_WarBoardItemData__string__o *)_9__156_1;
      sub_1C13CC8((PartyOrganizationUtility_o *)&v60->__9__156_1, (int64_t)_9__156_1, v61, v62, v63, v64, v65, v66);
    }
    v67 = System_Linq_Enumerable__Select_object__object_(
            items,
            (System_Func_TSource__TResult__o *)_9__156_1,
            (const MethodInfo_2FC0B08 *)Method_System_Linq_Enumerable_Select_WarBoardItemData__string___);
    v68 = WarBoardData___c_TypeInfo;
    v69 = (System_Collections_Generic_IEnumerable_TSource__o *)v67;
    if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
      v68 = WarBoardData___c_TypeInfo;
    }
    _9__156_2 = (System_Func_object__bool__o *)v68->static_fields->__9__156_2;
    if ( !_9__156_2 )
    {
      if ( !v68->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v68);
        v68 = WarBoardData___c_TypeInfo;
      }
      v71 = (Il2CppObject *)v68->static_fields->__9;
      _9__156_2 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_string__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__156_2, v71, Method_WarBoardData___c__SetRequest_b__156_2__, 0LL);
      v72 = WarBoardData___c_TypeInfo->static_fields;
      v72->__9__156_2 = (struct System_Func_string__bool__o *)_9__156_2;
      sub_1C13CC8((PartyOrganizationUtility_o *)&v72->__9__156_2, (int64_t)_9__156_2, v73, v74, v75, v76, v77, v78);
    }
    v79 = System_Linq_Enumerable__Where_object_(
            v69,
            (System_Func_TSource__bool__o *)_9__156_2,
            (const MethodInfo_2FCEBC0 *)Method_System_Linq_Enumerable_Where_string___);
    v80 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                   v79,
                                   (const MethodInfo_2FC8D34 *)Method_System_Linq_Enumerable_ToArray_string___);
    v81 = (Il2CppObject *)System_String__Join(v52, v80, 0LL);
    v82 = (Il2CppObject *)System_String__Format(v53, v81, 0LL);
    v83 = RequestBase__PackToMessagePack(request, v82, 0LL);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v84 = CatAndMouseGame__CatGame5Bytes(v83, 0LL);
    v57 = System_Convert_TypeInfo;
    v58 = v84;
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
LABEL_40:
      j_il2cpp_runtime_class_init_0(v57);
  }
  else
  {
    v55 = RequestBase__PackToMessagePack(request, (Il2CppObject *)StringLiteral_22544/*"nowrap"*/, 0LL);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v56 = CatAndMouseGame__CatGame5Bytes(v55, 0LL);
    v57 = System_Convert_TypeInfo;
    v58 = v56;
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      goto LABEL_40;
  }
  v85 = System_Convert__ToBase64String(v58, 0LL);
  RequestBase__addField_42303556(request, (System_String_o *)StringLiteral_20069/*"getDescription"*/, v85, 0LL);
  v86 = this->fields.serverData;
  if ( !v86 )
    goto LABEL_51;
  v87 = &v86->fields.wallInfo->obj;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v88 = (Il2CppObject *)JsonManager__toJson(v87, 0, 0, 0LL);
  v89 = RequestBase__PackToMessagePack(request, v88, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v90 = CatAndMouseGame__CatGame5Bytes(v89, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v91 = System_Convert__ToBase64String(v90, 0LL);
  RequestBase__addField_42303556(request, (System_String_o *)StringLiteral_25003/*"vm.threads"*/, v91, 0LL);
  v92 = this->fields.serverData;
  if ( !v92 )
    goto LABEL_51;
  v93 = (Il2CppObject *)JsonManager__toJson(&v92->fields.squareIndexInfo->obj, 0, 0, 0LL);
  v94 = RequestBase__PackToMessagePack(request, v93, 0LL);
  v95 = CatAndMouseGame__CatGame5Bytes(v94, 0LL);
  v96 = System_Convert__ToBase64String(v95, 0LL);
  RequestBase__addField_42303556(request, (System_String_o *)StringLiteral_23844/*"spot_info_gauge_s"*/, v96, 0LL);
  v97 = this->fields.serverData;
  if ( !v97 )
    goto LABEL_51;
  v98 = (Il2CppObject *)JsonManager__toJson(&v97->fields.bossBattleInfo->obj, 0, 0, 0LL);
  v99 = RequestBase__PackToMessagePack(request, v98, 0LL);
  v100 = CatAndMouseGame__CatGame5Bytes(v99, 0LL);
  v101 = System_Convert__ToBase64String(v100, 0LL);
  RequestBase__addField_42303556(request, (System_String_o *)StringLiteral_17643/*"border-bottom-left-radius"*/, v101, 0LL);
}


void __fastcall WarBoardData__SetUiDataFromLocalData(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *listUiData; // x0
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x5
  Il2CppObject *current; // x25
  __int64 klass_low; // x1
  WarBoardSquareData_o *Square; // x0
  __int64 v16; // x1
  void *pieceComponent; // x8
  _DWORD *monitor; // x8
  unsigned int v19; // w9
  WarBoardPieceData_o *Piece; // x0
  __int64 v21; // x1
  UnityEngine_Object_o *v22; // x20
  _BOOL8 v23; // x0
  __int64 v24; // x1
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BB22F9 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__get_Current__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__, v5);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v6);
    sub_1C13D24(&WarBoardControlUiDataComponent_TypeInfo, v7);
    byte_4BB22F9 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  listUiData = (System_Collections_Generic_List_object__o *)this->fields.listUiData;
  if ( !listUiData )
    sub_1C13F80(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    listUiData,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__);
  v26 = v25;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v26,
           (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__);
    if ( !v9 )
      break;
    current = v26.fields._current;
    if ( !v26.fields._current )
      sub_1C13F80(v9, v10);
    klass_low = LODWORD(v26.fields._current[1].klass);
    if ( (klass_low & 0x80000000) != 0 )
    {
      monitor = v26.fields._current[1].monitor;
      if ( !monitor )
        sub_1C13F80(v9, klass_low);
      v19 = monitor[6];
      if ( !v19 )
        sub_1C13F88(v9, klass_low);
      if ( v19 == 1 )
        sub_1C13F88(v9, klass_low);
      if ( v19 <= 2 )
        sub_1C13F88(v9, klass_low);
      Piece = WarBoardData__GetPiece(this, monitor[8], monitor[9], monitor[10], 1, v12);
      if ( Piece )
      {
        pieceComponent = Piece->fields.pieceComponent;
        if ( !pieceComponent )
          sub_1C13F80(Piece, v21);
LABEL_17:
        v22 = (UnityEngine_Object_o *)*((_QWORD *)pieceComponent + 23);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v23 = UnityEngine_Object__op_Equality(v22, 0LL, 0LL);
        if ( !v23 )
        {
          if ( !v22 )
            sub_1C13F80(v23, v24);
          WarBoardControlUiDataComponent__SetUiDataFromLocalData(
            (WarBoardControlUiDataComponent_o *)v22,
            (System_String_array *)current[2].klass,
            0LL);
        }
      }
    }
    else
    {
      Square = WarBoardData__GetSquare(this, klass_low, v11);
      if ( Square )
      {
        pieceComponent = Square->fields.squareComponent;
        if ( !pieceComponent )
          sub_1C13F80(Square, v16);
        goto LABEL_17;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__);
  if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  WarBoardControlUiDataComponent__ResumeUiDataAll(0LL);
}


void __fastcall WarBoardData__ShowConsumedPieceActionPointPopup(
        WarBoardData_o *this,
        System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___o *consumedPieceActionPointDict,
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
  __int64 v14; // x19
  System_Collections_Generic_Dictionary_int__object__o *v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_Func_bool__o *v29; // x20
  UnityEngine_WaitUntil_o *v30; // x21
  int64_t v31; // x20
  System_Delegate_o **v32; // x21
  System_Delegate_o *v33; // x22
  WarBoardTaskBase_TaskCallback_o *v34; // x23
  System_Delegate_o *v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  WarBoardTaskBase_TaskCallback_c *v42; // x1
  Il2CppObject *Instance; // x19
  System_Collections_Generic_Dictionary_int__object__o *v44; // x21
  __int64 v45; // x0
  __int64 v46; // x1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  __int64 v53; // x0

  if ( (byte_4BB22D9 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__,
      consumedPieceActionPointDict);
    sub_1C13D24(&System_Func_bool__TypeInfo, v5);
    sub_1C13D24(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_1C13D24(&WarBoardTaskBase_TaskCallback_TypeInfo, v7);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__0__, v8);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__1__, v9);
    sub_1C13D24(&WarBoardData___c__DisplayClass154_0_TypeInfo, v10);
    sub_1C13D24(&UnityEngine_WaitUntil_TypeInfo, v11);
    sub_1C13D24(&WarBoardCallbackTask_TypeInfo, v12);
    sub_1C13D24(&WarBoardTaskBase___TypeInfo, v13);
    byte_4BB22D9 = 1;
  }
  v14 = sub_1C13F70(WarBoardData___c__DisplayClass154_0_TypeInfo);
  WarBoardData___c__DisplayClass154_0___ctor((WarBoardData___c__DisplayClass154_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_18;
  *(_QWORD *)(v14 + 24) = consumedPieceActionPointDict;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)(v14 + 24),
    (int64_t)consumedPieceActionPointDict,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  *(_QWORD *)(v14 + 32) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v14 + 32), (int64_t)this, v23, v24, v25, v26, v27, v28);
  v15 = *(System_Collections_Generic_Dictionary_int__object__o **)(v14 + 24);
  if ( !v15 )
    goto LABEL_18;
  if ( System_Collections_Generic_Dictionary_int__object___get_Count(
         v15,
         (const MethodInfo_3291F58 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__) < 1 )
    return;
  *(_BYTE *)(v14 + 16) = 0;
  v29 = (System_Func_bool__o *)sub_1C13F70(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v29,
    (Il2CppObject *)v14,
    Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__0__,
    0LL);
  v30 = (UnityEngine_WaitUntil_o *)sub_1C13F70(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v30, v29, 0LL);
  v31 = sub_1C13F70(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v31, (UnityEngine_CustomYieldInstruction_o *)v30, 0LL);
  if ( !v31 )
LABEL_18:
    sub_1C13F80(v15, v16);
  v32 = (System_Delegate_o **)(v31 + 32);
  v33 = *(System_Delegate_o **)(v31 + 32);
  v34 = (WarBoardTaskBase_TaskCallback_o *)sub_1C13F70(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v34,
    (Il2CppObject *)v14,
    Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__1__,
    0LL);
  v35 = System_Delegate__Combine(v33, (System_Delegate_o *)v34, 0LL);
  if ( !v35 )
  {
    *v32 = 0LL;
LABEL_13:
    sub_1C13CC8((PartyOrganizationUtility_o *)(v31 + 32), (int64_t)v35, v36, v37, v38, v39, v40, v41);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v15 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C13DCC(WarBoardTaskBase___TypeInfo, 1LL);
    if ( v15 )
    {
      v44 = v15;
      v45 = sub_1C13E60(v31, v15->klass->_1.element_class);
      if ( !v45 )
      {
        v53 = sub_1C13FA4();
        sub_1C13E4C(v53, 0LL);
      }
      if ( !LODWORD(v44->fields._entries) )
        sub_1C13F88(v45, v46);
      *(_QWORD *)&v44->fields._count = v31;
      sub_1C13CC8((PartyOrganizationUtility_o *)&v44->fields._count, v31, v47, v48, v49, v50, v51, v52);
      if ( Instance )
      {
        WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 1, (WarBoardTaskBase_array *)v44, 0LL);
        return;
      }
    }
    goto LABEL_18;
  }
  v42 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v35->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    *v32 = v35;
    if ( (WarBoardTaskBase_TaskCallback_c *)v35->klass == v42 )
      goto LABEL_13;
  }
  sub_1C14240(v35);
}


System_String_o *__fastcall WarBoardData__ToJson(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *serverData; // x19

  if ( (byte_4BB22DA & 1) == 0 )
  {
    sub_1C13D24(&JsonManager_TypeInfo, method);
    sub_1C13D24(&string_TypeInfo, v3);
    byte_4BB22DA = 1;
  }
  serverData = (Il2CppObject *)this->fields.serverData;
  if ( !serverData )
    return string_TypeInfo->static_fields->Empty;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson(serverData, 0, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardData__UpdateBossInfo(
        WarBoardData_o *this,
        int32_t bossId,
        System_String_o *key,
        int32_t value,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  WarBoardData___c__DisplayClass171_0_o *v14; // x23
  Il2CppObject *v15; // x0
  __int64 v16; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  System_Object_array *bossBattleInfo; // x21
  System_Func_object__bool__o *v19; // x22
  Il2CppObject *object; // x0
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_Dictionary_object__object__o *monitor; // x21
  int32_t v25; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BB22E2 & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_Find_WarBoardBossBattleData___, *(_QWORD *)&bossId);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v9);
    sub_1C13D24(&System_Func_WarBoardBossBattleData__bool__TypeInfo, v10);
    sub_1C13D24(&int_TypeInfo, v11);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass171_0__UpdateBossInfo_b__0__, v12);
    sub_1C13D24(&WarBoardData___c__DisplayClass171_0_TypeInfo, v13);
    byte_4BB22E2 = 1;
  }
  v14 = (WarBoardData___c__DisplayClass171_0_o *)sub_1C13F70(WarBoardData___c__DisplayClass171_0_TypeInfo);
  WarBoardData___c__DisplayClass171_0___ctor(v14, 0LL);
  if ( !v14 )
    goto LABEL_9;
  v14->fields.bossId = bossId;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_9;
  bossBattleInfo = (System_Object_array *)serverData->fields.bossBattleInfo;
  v19 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardBossBattleData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v19,
    (Il2CppObject *)v14,
    Method_WarBoardData___c__DisplayClass171_0__UpdateBossInfo_b__0__,
    0LL);
  object = BasicHelper__Find_object_(
             bossBattleInfo,
             (System_Func_T__bool__o *)v19,
             (const MethodInfo_2F7AFA4 *)Method_BasicHelper_Find_WarBoardBossBattleData___);
  if ( !object )
    return;
  monitor = (System_Collections_Generic_Dictionary_object__object__o *)object[1].monitor;
  v25 = value;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v21, v22, v23);
  if ( !monitor )
LABEL_9:
    sub_1C13F80(v15, v16);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    monitor,
    (Il2CppObject *)key,
    v15,
    (const MethodInfo_32F299C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
}


void __fastcall WarBoardData__UpdateBuffTurnNoticeDisp(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  WarBoardData___c_c *v12; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__object__o *_9__192_0; // x20
  Il2CppObject *v15; // x21
  PartyOrganizationUtility_o *p__9__192_0; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v23; // x0
  WarBoardData___c_c *v24; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x19
  System_Func_object__bool__o *_9__192_1; // x20
  Il2CppObject *v27; // x21
  PartyOrganizationUtility_o *p__9__192_1; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  WarBoardData___c_c *v36; // x8
  System_Collections_Generic_IEnumerable_T__o *v37; // x19
  System_Action_object__o *_9__192_2; // x20
  Il2CppObject *v39; // x21
  PartyOrganizationUtility_o *p__9__192_2; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7

  if ( (byte_4BB22F4 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_WarBoardPieceBaseComponent__TypeInfo, method);
    sub_1C13D24(&Method_BasicHelper_ForEach_WarBoardPieceBaseComponent___, v3);
    sub_1C13D24(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__WarBoardPieceBaseComponent___, v4);
    sub_1C13D24(&Method_System_Linq_Enumerable_Where_WarBoardPieceBaseComponent___, v5);
    sub_1C13D24(&System_Func_WarBoardPieceBaseComponent__bool__TypeInfo, v6);
    sub_1C13D24(&System_Func_WarBoardPieceData__WarBoardPieceBaseComponent__TypeInfo, v7);
    sub_1C13D24(&Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_0__, v8);
    sub_1C13D24(&Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_1__, v9);
    sub_1C13D24(&Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_2__, v10);
    sub_1C13D24(&WarBoardData___c_TypeInfo, v11);
    byte_4BB22F4 = 1;
  }
  v12 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v12 = WarBoardData___c_TypeInfo;
  }
  _9__192_0 = (System_Func_object__object__o *)v12->static_fields->__9__192_0;
  if ( !_9__192_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = WarBoardData___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__192_0 = (System_Func_object__object__o *)sub_1C13F70(System_Func_WarBoardPieceData__WarBoardPieceBaseComponent__TypeInfo);
    System_Func_object__object____ctor(
      _9__192_0,
      v15,
      Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_0__,
      0LL);
    p__9__192_0 = (PartyOrganizationUtility_o *)&WarBoardData___c_TypeInfo->static_fields->__9__192_0;
    p__9__192_0->klass = (PartyOrganizationUtility_c *)_9__192_0;
    sub_1C13CC8(p__9__192_0, (int64_t)_9__192_0, v17, v18, v19, v20, v21, v22);
  }
  v23 = System_Linq_Enumerable__Select_object__object_(
          pieces,
          (System_Func_TSource__TResult__o *)_9__192_0,
          (const MethodInfo_2FC0B08 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__WarBoardPieceBaseComponent___);
  v24 = WarBoardData___c_TypeInfo;
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)v23;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v24 = WarBoardData___c_TypeInfo;
  }
  _9__192_1 = (System_Func_object__bool__o *)v24->static_fields->__9__192_1;
  if ( !_9__192_1 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v24 = WarBoardData___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v24->static_fields->__9;
    _9__192_1 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardPieceBaseComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__192_1, v27, Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_1__, 0LL);
    p__9__192_1 = (PartyOrganizationUtility_o *)&WarBoardData___c_TypeInfo->static_fields->__9__192_1;
    p__9__192_1->klass = (PartyOrganizationUtility_c *)_9__192_1;
    sub_1C13CC8(p__9__192_1, (int64_t)_9__192_1, v29, v30, v31, v32, v33, v34);
  }
  v35 = System_Linq_Enumerable__Where_object_(
          v25,
          (System_Func_TSource__bool__o *)_9__192_1,
          (const MethodInfo_2FCEBC0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceBaseComponent___);
  v36 = WarBoardData___c_TypeInfo;
  v37 = (System_Collections_Generic_IEnumerable_T__o *)v35;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v36 = WarBoardData___c_TypeInfo;
  }
  _9__192_2 = (System_Action_object__o *)v36->static_fields->__9__192_2;
  if ( !_9__192_2 )
  {
    if ( !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      v36 = WarBoardData___c_TypeInfo;
    }
    v39 = (Il2CppObject *)v36->static_fields->__9;
    _9__192_2 = (System_Action_object__o *)sub_1C13F70(System_Action_WarBoardPieceBaseComponent__TypeInfo);
    System_Action_object____ctor(_9__192_2, v39, Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_2__, 0LL);
    p__9__192_2 = (PartyOrganizationUtility_o *)&WarBoardData___c_TypeInfo->static_fields->__9__192_2;
    p__9__192_2->klass = (PartyOrganizationUtility_c *)_9__192_2;
    sub_1C13CC8(p__9__192_2, (int64_t)_9__192_2, v41, v42, v43, v44, v45, v46);
  }
  BasicHelper__ForEach_object_(
    v37,
    (System_Action_T__o *)_9__192_2,
    (const MethodInfo_2F7C3C8 *)Method_BasicHelper_ForEach_WarBoardPieceBaseComponent___);
}


void __fastcall WarBoardData__UpdateCurrentPartyCost(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  __int64 v17; // x20
  System_Collections_Generic_List_long__o *v18; // x21
  const MethodInfo *v19; // x1
  WarBoardPieceData_array *EditableServantPieces; // x0
  int64_t UserServantId_k__BackingField; // x1
  long double v22; // q0
  int max_length; // w8
  WarBoardPieceData_array *v24; // x22
  unsigned int v25; // w23
  WarBoardPieceData_o *v26; // x25
  int32_t version; // w11
  struct System_Int64_array *items; // x9
  _QWORD *v29; // x8
  __int64 size; // x12
  int32_t v31; // w10
  __int64 v32; // x0
  __int64 v33; // x0
  UserServantEntity_array *Entities_41434316; // x0
  WarBoardData___c_c *v35; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x21
  System_Func_object__int__o *_9__143_0; // x22
  Il2CppObject *v38; // x23
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  System_Func_object__bool__o *v52; // x22

  if ( (byte_4BB22D1 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_1C13D24(&Method_System_Linq_Enumerable_Count_UserServantEntity___, v4);
    sub_1C13D24(&Method_System_Linq_Enumerable_Sum_UserServantEntity___, v5);
    sub_1C13D24(&System_Func_UserServantEntity__bool__TypeInfo, v6);
    sub_1C13D24(&System_Func_UserServantEntity__int__TypeInfo, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_long__Add__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_1C13D24(&System_Collections_Generic_List_long__TypeInfo, v10);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v11);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1C13D24(&Method_WarBoardData___c__UpdateCurrentPartyCost_b__143_0__, v13);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass143_0__UpdateCurrentPartyCost_b__1__, v14);
    sub_1C13D24(&WarBoardData___c__DisplayClass143_0_TypeInfo, v15);
    sub_1C13D24(&WarBoardData___c_TypeInfo, v16);
    byte_4BB22D1 = 1;
  }
  v17 = sub_1C13F70(WarBoardData___c__DisplayClass143_0_TypeInfo);
  WarBoardData___c__DisplayClass143_0___ctor((WarBoardData___c__DisplayClass143_0_o *)v17, 0LL);
  v18 = (System_Collections_Generic_List_long__o *)sub_1C13F70(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v18,
    (const MethodInfo_36149AC *)Method_System_Collections_Generic_List_long___ctor__);
  EditableServantPieces = WarBoardData__GetEditableServantPieces(this, v19);
  if ( !EditableServantPieces )
    goto LABEL_33;
  max_length = EditableServantPieces->max_length;
  v24 = EditableServantPieces;
  if ( max_length >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      if ( v25 >= max_length )
        sub_1C13F88(EditableServantPieces, UserServantId_k__BackingField);
      v26 = v24->m_Items[v25];
      if ( !v26 )
        break;
      if ( !v18 )
        break;
      version = v18->fields._version;
      UserServantId_k__BackingField = v26->fields._UserServantId_k__BackingField;
      items = v18->fields._items;
      v29 = Method_System_Collections_Generic_List_long__Add__;
      v18->fields._version = version + 1;
      if ( !items )
        break;
      size = v18->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v18,
          UserServantId_k__BackingField,
          *(const MethodInfo_3615200 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        v31 = v18->fields._size;
        v29 = Method_System_Collections_Generic_List_long__Add__;
        items = v18->fields._items;
        UserServantId_k__BackingField = v26->fields._UserServantEquipId_k__BackingField;
        ++v18->fields._version;
        if ( !items )
          break;
      }
      else
      {
        v31 = size + 1;
        v18->fields._size = size + 1;
        items->m_Items[size] = UserServantId_k__BackingField;
        UserServantId_k__BackingField = v26->fields._UserServantEquipId_k__BackingField;
        v18->fields._version = version + 2;
      }
      if ( v31 >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v18,
          UserServantId_k__BackingField,
          *(const MethodInfo_3615200 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v18->fields._size = v31 + 1;
        items->m_Items[v31] = UserServantId_k__BackingField;
      }
      max_length = v24->max_length;
      if ( (int)++v25 >= max_length )
        goto LABEL_17;
    }
LABEL_33:
    sub_1C13F80(EditableServantPieces, UserServantId_k__BackingField);
  }
LABEL_17:
  v32 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v32 + 309) & 1) == 0 )
    v32 = sub_1C65C00(v22);
  v33 = *(_QWORD *)(*(_QWORD *)(v32 + 192) + 16LL);
  if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
    v33 = sub_1C65C00(v22);
  EditableServantPieces = **(WarBoardPieceData_array ***)(v33 + 184);
  if ( !EditableServantPieces )
    goto LABEL_33;
  EditableServantPieces = (WarBoardPieceData_array *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)EditableServantPieces,
                                                       (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !EditableServantPieces )
    goto LABEL_33;
  Entities_41434316 = UserServantMaster__GetEntities_41434316((UserServantMaster_o *)EditableServantPieces, v18, 0LL);
  v35 = WarBoardData___c_TypeInfo;
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)Entities_41434316;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v35 = WarBoardData___c_TypeInfo;
  }
  _9__143_0 = (System_Func_object__int__o *)v35->static_fields->__9__143_0;
  if ( !_9__143_0 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v35 = WarBoardData___c_TypeInfo;
    }
    v38 = (Il2CppObject *)v35->static_fields->__9;
    _9__143_0 = (System_Func_object__int__o *)sub_1C13F70(System_Func_UserServantEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__143_0, v38, Method_WarBoardData___c__UpdateCurrentPartyCost_b__143_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__143_0 = (struct System_Func_UserServantEntity__int__o *)_9__143_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__143_0,
      (int64_t)_9__143_0,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
  }
  EditableServantPieces = (WarBoardPieceData_array *)System_Linq_Enumerable__Sum_object_(
                                                       v36,
                                                       (System_Func_TSource__int__o *)_9__143_0,
                                                       (const MethodInfo_2FC78B4 *)Method_System_Linq_Enumerable_Sum_UserServantEntity___);
  if ( !this )
    goto LABEL_33;
  this->fields._CurrentPartyCost_k__BackingField = (int)EditableServantPieces;
  EditableServantPieces = (WarBoardPieceData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !EditableServantPieces )
    goto LABEL_33;
  EditableServantPieces = (WarBoardPieceData_array *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)EditableServantPieces,
                                                       (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !v17 )
    goto LABEL_33;
  *(_QWORD *)(v17 + 16) = EditableServantPieces;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)EditableServantPieces, v46, v47, v48, v49, v50, v51);
  v52 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v52,
    (Il2CppObject *)v17,
    Method_WarBoardData___c__DisplayClass143_0__UpdateCurrentPartyCost_b__1__,
    0LL);
  this->fields._CurrentMemberCount_k__BackingField = System_Linq_Enumerable__Count_object__49985748(
                                                       v36,
                                                       (System_Func_TSource__bool__o *)v52,
                                                       (const MethodInfo_2FAB8D4 *)Method_System_Linq_Enumerable_Count_UserServantEntity___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardData__UpdateFromServerData(
        WarBoardData_o *this,
        WarBoardDataEntity_o *warBoardDataEntity,
        bool forceUpdate,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  WarBoardDataEntity_o **p_serverData; // x21
  WarBoardManager_TaskMultiList_o *v39; // x24
  WarBoardManager_TaskMultiList_o *v40; // x23
  System_Collections_Generic_Dictionary_int__object__o *v41; // x20
  System_Collections_Generic_List_object__o *v42; // x26
  int64_t isPlayerGroup; // x0
  const MethodInfo *v44; // x1
  struct WarBoardPieceData_array *pieces; // x25
  int max_length; // w8
  unsigned int v47; // w19
  bool v48; // w27
  WarBoardPieceData_o *v49; // x28
  WarBoardManager_TaskList_o *v50; // x29
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct WarBoardManager_TaskList_array *items; // x8
  _QWORD *v58; // x9
  __int64 size; // x10
  Il2CppClass **v60; // x0
  struct WarBoardManager_TaskList_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  __int64 v64; // x8
  System_Collections_Generic_List_object__o *v65; // x0
  int32_t ConsumedRecoverDonotActCost_k__BackingField; // w29
  System_Collections_Generic_Dictionary_int__object__o *v67; // x21
  System_Collections_Generic_List_object__o *v68; // x20
  System_Collections_Generic_Dictionary_int__object__o *v69; // x0
  Il2CppObject *v70; // x2
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  struct System_Object_array *v77; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  Il2CppClass **v80; // x8
  Il2CppObject *current; // x28
  WarBoardManager_TaskList_o *v82; // x26
  __int64 v83; // x0
  __int64 v84; // x1
  int monitor; // w25
  Il2CppClass *v86; // x0
  __int64 v87; // x0
  __int64 v88; // x1
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  int monitor_high; // w27
  Il2CppClass *klass; // x0
  Il2CppClass *v97; // x0
  struct WarBoardManager_TaskList_array *v98; // x8
  _QWORD *v99; // x9
  __int64 v100; // x10
  Il2CppClass **v101; // x0
  struct WarBoardManager_TaskList_array *v102; // x8
  _QWORD *v103; // x9
  __int64 v104; // x10
  Il2CppClass **v105; // x0
  const MethodInfo *v106; // x2
  System_Collections_Generic_IEnumerable_T__o *v107; // x0
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  struct System_Object_array *v114; // x8
  _QWORD *v115; // x9
  __int64 v116; // x10
  int64_t v117; // x1
  Il2CppClass **v118; // x0
  WarBoardWaitNonBlockingTaskEnd_o *v119; // x23
  int64_t v120; // x2
  int32_t v121; // w3
  System_String_o *v122; // x4
  BattleSetupInfo_o *v123; // x5
  FollowerInfo_o *v124; // x6
  PartyListViewItem_o *v125; // x7
  struct System_Object_array *v126; // x8
  _QWORD *v127; // x9
  __int64 v128; // x10
  Il2CppClass **v129; // x0
  struct WarBoardItemData_array *v130; // x19
  int v131; // w8
  unsigned int v132; // w20
  struct WarBoardWallData_array *walls; // x19
  unsigned __int64 v134; // x24
  __int64 v135; // x20
  int64_t v136; // x2
  int32_t v137; // w3
  System_String_o *v138; // x4
  BattleSetupInfo_o *v139; // x5
  FollowerInfo_o *v140; // x6
  PartyListViewItem_o *v141; // x7
  int64_t v142; // x1
  System_Collections_Generic_List_object__o **v143; // x21
  System_Collections_Generic_IEnumerable_TSource__o *wallInfo; // x22
  System_Func_object__bool__o *v145; // x23
  Il2CppObject *v146; // x0
  Il2CppObject *v147; // x8
  int32_t klass_high; // w1
  System_Collections_Generic_List_object__o *v149; // [xsp+8h] [xbp-B8h]
  WarBoardData_o *v150; // [xsp+10h] [xbp-B0h]
  WarBoardDataEntity_o **v151; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v153; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v154; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4BB22D6 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Add__, warBoardDataEntity);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___ContainsKey__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData____ctor__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Item__, v13);
    sub_1C13D24(&System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___TypeInfo, v14);
    sub_1C13D24(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___, v15);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__Dispose__, v16);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__MoveNext__, v17);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__get_Current__,
      v18);
    sub_1C13D24(&System_Func_WarBoardUserWallData__bool__TypeInfo, v19);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v20);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v21);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__, v22);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, v23);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__GetEnumerator__, v24);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v25);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList___ctor__, v26);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v27);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Count__, v28);
    sub_1C13D24(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v29);
    sub_1C13D24(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v30);
    sub_1C13D24(&System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__TypeInfo, v31);
    sub_1C13D24(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v32);
    sub_1C13D24(&WarBoardManager_TaskList_TypeInfo, v33);
    sub_1C13D24(&WarBoardManager_TaskMultiList_TypeInfo, v34);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass151_0__UpdateFromServerData_b__0__, v35);
    sub_1C13D24(&WarBoardData___c__DisplayClass151_0_TypeInfo, v36);
    sub_1C13D24(&WarBoardWaitNonBlockingTaskEnd_TypeInfo, v37);
    byte_4BB22D6 = 1;
  }
  memset(&v154, 0, sizeof(v154));
  p_serverData = &this->fields.serverData;
  if ( !this->fields.serverData )
    return;
  this->fields.serverData = warBoardDataEntity;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.serverData,
    (int64_t)warBoardDataEntity,
    forceUpdate,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v149 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v149,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v39 = (WarBoardManager_TaskMultiList_o *)sub_1C13F70(WarBoardManager_TaskMultiList_TypeInfo);
  WarBoardManager_TaskMultiList___ctor(v39, 0LL);
  v40 = (WarBoardManager_TaskMultiList_o *)sub_1C13F70(WarBoardManager_TaskMultiList_TypeInfo);
  WarBoardManager_TaskMultiList___ctor(v40, 0LL);
  v41 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C13F70(System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v41,
    (const MethodInfo_32918D4 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData____ctor__);
  v42 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v42,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList___ctor__);
  pieces = this->fields.pieces;
  v150 = this;
  if ( !pieces )
    goto LABEL_96;
  max_length = pieces->max_length;
  v151 = &this->fields.serverData;
  if ( max_length >= 1 )
  {
    v47 = 0;
    v48 = forceUpdate;
    do
    {
      if ( v47 >= max_length )
        goto LABEL_97;
      v49 = pieces->m_Items[v47];
      v50 = (WarBoardManager_TaskList_o *)sub_1C13F70(WarBoardManager_TaskList_TypeInfo);
      WarBoardManager_TaskList___ctor(v50, 0LL);
      if ( !v49 )
        goto LABEL_96;
      WarBoardPieceData__UpdateFromServerData(
        v49,
        *p_serverData,
        (System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__o *)v42,
        v50,
        v48,
        0LL);
      if ( !v50 )
        goto LABEL_96;
      if ( v50->fields._size >= 1 )
      {
        if ( v49->fields._isDead_k__BackingField )
        {
          if ( !v40 )
            goto LABEL_96;
          items = v40->fields._items;
          v58 = Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__;
          ++v40->fields._version;
          if ( !items )
            goto LABEL_96;
          size = v40->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            v64 = v58[4];
            v65 = (System_Collections_Generic_List_object__o *)v40;
LABEL_23:
            System_Collections_Generic_List_object___AddWithResize(
              v65,
              (Il2CppObject *)v50,
              *(const MethodInfo_362D1CC **)(*(_QWORD *)(v64 + 192) + 112LL));
            goto LABEL_24;
          }
          v60 = &items->obj.klass + size;
          v40->fields._size = size + 1;
        }
        else
        {
          if ( !v39 )
            goto LABEL_96;
          v61 = v39->fields._items;
          v62 = Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__;
          ++v39->fields._version;
          if ( !v61 )
            goto LABEL_96;
          v63 = v39->fields._size;
          if ( (unsigned int)v63 >= v61->max_length )
          {
            v64 = v62[4];
            v65 = (System_Collections_Generic_List_object__o *)v39;
            goto LABEL_23;
          }
          v60 = &v61->obj.klass + v63;
          v39->fields._size = v63 + 1;
        }
        v60[4] = (Il2CppClass *)v50;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v60 + 4), (int64_t)v50, v51, v52, v53, v54, v55, v56);
      }
LABEL_24:
      isPlayerGroup = WarBoardPieceData__get_isPlayerGroup(v49, 0LL);
      if ( (isPlayerGroup & 1) != 0 )
      {
        isPlayerGroup = WarBoardPieceData__get_isMaster(v49, 0LL);
        if ( (isPlayerGroup & 1) == 0 && v49->fields._IsDispConsumedPieceActionPoint_k__BackingField )
        {
          if ( !v41 )
            goto LABEL_96;
          if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                  v41,
                  v49->fields._ConsumedRecoverDonotActCost_k__BackingField,
                  (const MethodInfo_329249C *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___ContainsKey__) )
          {
            ConsumedRecoverDonotActCost_k__BackingField = v49->fields._ConsumedRecoverDonotActCost_k__BackingField;
            v67 = v41;
            v68 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v68,
              (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
            v69 = v67;
            v70 = (Il2CppObject *)v68;
            v41 = v67;
            p_serverData = v151;
            System_Collections_Generic_Dictionary_int__object___Add(
              v69,
              ConsumedRecoverDonotActCost_k__BackingField,
              v70,
              (const MethodInfo_32922A8 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Add__);
          }
          isPlayerGroup = (int64_t)System_Collections_Generic_Dictionary_int__object___get_Item(
                                     v41,
                                     v49->fields._ConsumedRecoverDonotActCost_k__BackingField,
                                     (const MethodInfo_3292208 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Item__);
          if ( !isPlayerGroup )
            goto LABEL_96;
          v77 = *(struct System_Object_array **)(isPlayerGroup + 16);
          v78 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
          ++*(_DWORD *)(isPlayerGroup + 28);
          if ( !v77 )
            goto LABEL_96;
          v79 = *(int *)(isPlayerGroup + 24);
          if ( (unsigned int)v79 >= v77->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)isPlayerGroup,
              (Il2CppObject *)v49,
              *(const MethodInfo_362D1CC **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
          }
          else
          {
            v80 = &v77->obj.klass + v79;
            *(_DWORD *)(isPlayerGroup + 24) = v79 + 1;
            v80[4] = (Il2CppClass *)v49;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v80 + 4), (int64_t)v49, v71, v72, v73, v74, v75, v76);
          }
        }
      }
      max_length = pieces->max_length;
    }
    while ( (int)++v47 < max_length );
  }
  if ( !v42 )
    goto LABEL_96;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v153,
    v42,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__GetEnumerator__);
  v154 = v153;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v154,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__MoveNext__) )
  {
    current = v154.fields._current;
    v82 = (WarBoardManager_TaskList_o *)sub_1C13F70(WarBoardManager_TaskList_TypeInfo);
    WarBoardManager_TaskList___ctor(v82, 0LL);
    if ( !current )
      sub_1C13F80(v83, v84);
    monitor = (int)current[1].monitor;
    if ( (monitor & 0x80000000) != 0 )
    {
      monitor_high = HIDWORD(current[1].monitor);
      if ( monitor_high >= 1 )
      {
        klass = current[1].klass;
        if ( !klass )
          sub_1C13F80(0LL, v84);
        (*((void (__fastcall **)(Il2CppClass *, _QWORD, _QWORD, WarBoardManager_TaskList_o *, __int64, _QWORD, __int64, _QWORD))klass->_1.image
         + 101))(
          klass,
          (unsigned int)monitor_high,
          0LL,
          v82,
          0xFFFFFFFFLL,
          0LL,
          1LL,
          *((_QWORD *)klass->_1.image + 102));
      }
      v97 = current[1].klass;
      if ( !v97 )
        sub_1C13F80(0LL, v84);
      v87 = (*((__int64 (**)(void))v97->_1.image + 103))();
    }
    else
    {
      v86 = current[1].klass;
      if ( !v86 )
        sub_1C13F80(0LL, v84);
      v87 = (*((__int64 (__fastcall **)(Il2CppClass *, _QWORD, _QWORD, WarBoardManager_TaskList_o *, __int64, _QWORD, __int64, _QWORD))v86->_1.image
             + 101))(
              v86,
              HIDWORD(current[1].monitor),
              0LL,
              v82,
              0xFFFFFFFFLL,
              0LL,
              1LL,
              *((_QWORD *)v86->_1.image + 102));
    }
    if ( !v82 )
      sub_1C13F80(v87, v88);
    if ( v82->fields._size >= 1 )
    {
      if ( (monitor & 0x80000000) != 0 )
      {
        if ( !v40 )
          sub_1C13F80(v87, v88);
        v102 = v40->fields._items;
        v103 = Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__;
        ++v40->fields._version;
        if ( !v102 )
          sub_1C13F80(v87, v88);
        v104 = v40->fields._size;
        if ( (unsigned int)v104 >= v102->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)v40,
            (Il2CppObject *)v82,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
        }
        else
        {
          v105 = &v102->obj.klass + v104;
          v40->fields._size = v104 + 1;
          v105[4] = (Il2CppClass *)v82;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v105 + 4), (int64_t)v82, v89, v90, v91, v92, v93, v94);
        }
      }
      else
      {
        if ( !v39 )
          sub_1C13F80(v87, v88);
        v98 = v39->fields._items;
        v99 = Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__;
        ++v39->fields._version;
        if ( !v98 )
          sub_1C13F80(v87, v88);
        v100 = v39->fields._size;
        if ( (unsigned int)v100 >= v98->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)v39,
            (Il2CppObject *)v82,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
        }
        else
        {
          v101 = &v98->obj.klass + v100;
          v39->fields._size = v100 + 1;
          v101[4] = (Il2CppClass *)v82;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v101 + 4), (int64_t)v82, v89, v90, v91, v92, v93, v94);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v154,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__Dispose__);
  if ( !v41 )
    goto LABEL_96;
  isPlayerGroup = System_Collections_Generic_Dictionary_int__object___get_Count(
                    v41,
                    (const MethodInfo_3291F58 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__);
  if ( (int)isPlayerGroup >= 1 )
    WarBoardData__ShowConsumedPieceActionPointPopup(
      v150,
      (System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___o *)v41,
      v106);
  if ( !v39 )
    goto LABEL_96;
  isPlayerGroup = (int64_t)WarBoardManager_TaskMultiList__SortedFlatted(v39, 0LL);
  if ( !v149 )
    goto LABEL_96;
  System_Collections_Generic_List_object___AddRange(
    v149,
    (System_Collections_Generic_IEnumerable_T__o *)isPlayerGroup,
    (const MethodInfo_362D3D8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( !v40 )
    goto LABEL_96;
  v107 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager_TaskMultiList__SortedFlatted(v40, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v149,
    v107,
    (const MethodInfo_362D3D8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( v149->fields._size >= 1 )
  {
    isPlayerGroup = (int64_t)WarBoardData__CreateEventBossUIDataTask((WarBoardData_o *)isPlayerGroup, v44);
    v114 = v149->fields._items;
    v115 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v149->fields._version;
    if ( !v114 )
      goto LABEL_96;
    v116 = v149->fields._size;
    v117 = isPlayerGroup;
    if ( (unsigned int)v116 >= v114->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v149,
        (Il2CppObject *)isPlayerGroup,
        *(const MethodInfo_362D1CC **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
    }
    else
    {
      v118 = &v114->obj.klass + v116;
      v149->fields._size = v116 + 1;
      v118[4] = (Il2CppClass *)v117;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v118 + 4), v117, v108, v109, v110, v111, v112, v113);
    }
    v119 = (WarBoardWaitNonBlockingTaskEnd_o *)sub_1C13F70(WarBoardWaitNonBlockingTaskEnd_TypeInfo);
    WarBoardWaitNonBlockingTaskEnd___ctor(v119, 0LL);
    v126 = v149->fields._items;
    v127 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v149->fields._version;
    if ( !v126 )
      goto LABEL_96;
    v128 = v149->fields._size;
    if ( (unsigned int)v128 >= v126->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v149,
        (Il2CppObject *)v119,
        *(const MethodInfo_362D1CC **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
    }
    else
    {
      v129 = &v126->obj.klass + v128;
      v149->fields._size = v128 + 1;
      v129[4] = (Il2CppClass *)v119;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v129 + 4), (int64_t)v119, v120, v121, v122, v123, v124, v125);
    }
    isPlayerGroup = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !isPlayerGroup )
      goto LABEL_96;
    WarBoardManager__InsertTask_36574336(
      (WarBoardManager_o *)isPlayerGroup,
      0,
      (System_Collections_Generic_List_WarBoardTaskBase__o *)v149,
      0LL);
  }
  v130 = v150->fields.items;
  if ( !v130 )
    goto LABEL_96;
  v131 = v130->max_length;
  if ( v131 >= 1 )
  {
    v132 = 0;
    while ( v132 < v131 )
    {
      isPlayerGroup = (int64_t)v130->m_Items[v132];
      if ( !isPlayerGroup )
        goto LABEL_96;
      WarBoardItemData__UpdateFromServerData((WarBoardItemData_o *)isPlayerGroup, *v151, 0LL);
      v131 = v130->max_length;
      if ( (int)++v132 >= v131 )
        goto LABEL_84;
    }
LABEL_97:
    sub_1C13F88(isPlayerGroup, v44);
  }
LABEL_84:
  walls = v150->fields.walls;
  if ( !walls )
LABEL_96:
    sub_1C13F80(isPlayerGroup, v44);
  if ( (int)walls->max_length >= 1 )
  {
    v134 = 0LL;
    while ( 1 )
    {
      v135 = sub_1C13F70(WarBoardData___c__DisplayClass151_0_TypeInfo);
      WarBoardData___c__DisplayClass151_0___ctor((WarBoardData___c__DisplayClass151_0_o *)v135, 0LL);
      if ( v134 >= walls->max_length )
        goto LABEL_97;
      if ( !v135 )
        goto LABEL_96;
      v142 = (int64_t)walls->m_Items[v134];
      *(_QWORD *)(v135 + 16) = v142;
      v143 = (System_Collections_Generic_List_object__o **)(v135 + 16);
      sub_1C13CC8((PartyOrganizationUtility_o *)(v135 + 16), v142, v136, v137, v138, v139, v140, v141);
      if ( !warBoardDataEntity )
        goto LABEL_96;
      wallInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEntity->fields.wallInfo;
      v145 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_WarBoardUserWallData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v145,
        (Il2CppObject *)v135,
        Method_WarBoardData___c__DisplayClass151_0__UpdateFromServerData_b__0__,
        0LL);
      v146 = System_Linq_Enumerable__FirstOrDefault_object__50015312(
               wallInfo,
               (System_Func_TSource__bool__o *)v145,
               (const MethodInfo_2FB2C50 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
      if ( v146 )
      {
        v147 = v146;
        isPlayerGroup = (int64_t)*v143;
        if ( !*v143 )
          goto LABEL_96;
        klass_high = HIDWORD(v147[1].klass);
        if ( *(_DWORD *)(isPlayerGroup + 24) > klass_high )
          WarBoardWallData__SetBreakPoint((WarBoardWallData_o *)isPlayerGroup, klass_high, 0LL);
      }
      if ( (__int64)++v134 >= (int)walls->max_length )
        return;
    }
  }
}


void __fastcall WarBoardData__UpdateLatestBattlePieceUniqueIndexes(
        WarBoardData_o *this,
        WarBoardData_BattleParticipantInfo_o *participantInfo,
        const MethodInfo *method)
{
  struct System_UInt32_array *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( !participantInfo )
    sub_1C13F80(this, 0LL);
  v4 = WarBoardData_BattleParticipantInfo__ToUniqueIndexArray(participantInfo, 0LL);
  this->fields.latestBattlePieceUniqueIndexes = v4;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.latestBattlePieceUniqueIndexes,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardData__UpdateLatestPieceActionSquareIndexes(
        WarBoardData_o *this,
        int32_t fromSquareIndex,
        int32_t toSquareIndex,
        const MethodInfo *method)
{
  struct System_Int32_array *v7; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  il2cpp_array_size_t max_length; // w8

  if ( (byte_4BB22E6 & 1) == 0 )
  {
    sub_1C13D24(&int___TypeInfo, *(_QWORD *)&fromSquareIndex);
    byte_4BB22E6 = 1;
  }
  v7 = (struct System_Int32_array *)sub_1C13DCC(int___TypeInfo, 2LL);
  if ( !v7 )
    sub_1C13F80(0LL, v8);
  max_length = v7->max_length;
  if ( !max_length || (v7->m_Items[1] = fromSquareIndex, max_length == 1) )
    sub_1C13F88(v7, v7);
  v7->m_Items[2] = toSquareIndex;
  this->fields.latestPieceActionSquareIndexes = v7;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.latestPieceActionSquareIndexes,
    (int64_t)v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardData__UpdateLinkedSquareList(
        WarBoardData_o *this,
        int32_t squareIndex1,
        int32_t squareIndex2,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2
  WarBoardSquareData_o *Square; // x21
  const MethodInfo *v9; // x2
  WarBoardSquareData_o *CondSquare; // x23

  Square = WarBoardData__GetSquare(this, squareIndex1, *(const MethodInfo **)&squareIndex2);
  if ( !Square )
    Square = WarBoardData__GetCondSquare(this, squareIndex1, v7);
  CondSquare = WarBoardData__GetSquare(this, squareIndex2, v7);
  if ( CondSquare )
  {
    if ( !Square )
      return;
  }
  else
  {
    CondSquare = WarBoardData__GetCondSquare(this, squareIndex2, v9);
    if ( !Square )
      return;
  }
  if ( CondSquare )
  {
    WarBoardSquareData__UpdateLinkedSquareList(Square, squareIndex2, 0LL);
    WarBoardSquareData__UpdateLinkedSquareList(CondSquare, squareIndex1, 0LL);
  }
}


void __fastcall WarBoardData__UpdateSquareList(
        WarBoardData_o *this,
        WarBoardSquareData_o *square,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_IEnumerable_T__o *squares; // x23
  System_Collections_Generic_List_object__o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Object_array *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  PartyOrganizationUtility_o *p_condSquares; // x19
  System_Collections_Generic_IEnumerable_T__o *condSquares; // t1
  System_Collections_Generic_List_object__o *v32; // x21
  System_Object_array *v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7

  if ( (byte_4BB22CA & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardSquareData__Add__, square);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardSquareData__Remove__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardSquareData___ctor___77435056, v7);
    sub_1C13D24(&System_Collections_Generic_List_WarBoardSquareData__TypeInfo, v8);
    byte_4BB22CA = 1;
  }
  squares = (System_Collections_Generic_IEnumerable_T__o *)this->fields.squares;
  v10 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
  System_Collections_Generic_List_object____ctor_56806080(
    v10,
    squares,
    (const MethodInfo_362CAC0 *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor___77435056);
  if ( !v10 )
    goto LABEL_10;
  items = v10->fields._items;
  v20 = Method_System_Collections_Generic_List_WarBoardSquareData__Add__;
  ++v10->fields._version;
  if ( !items )
    goto LABEL_10;
  size = v10->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      (Il2CppObject *)square,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &items->obj.klass + size;
    v10->fields._size = size + 1;
    v22[4] = (Il2CppClass *)square;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v22 + 4), (int64_t)square, v13, v14, v15, v16, v17, v18);
  }
  v23 = System_Collections_Generic_List_object___ToArray(
          v10,
          (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  this->fields.squares = (struct WarBoardSquareData_array *)v23;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.squares, (int64_t)v23, v24, v25, v26, v27, v28, v29);
  condSquares = (System_Collections_Generic_IEnumerable_T__o *)this->fields.condSquares;
  p_condSquares = (PartyOrganizationUtility_o *)&this->fields.condSquares;
  v32 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
  System_Collections_Generic_List_object____ctor_56806080(
    v32,
    condSquares,
    (const MethodInfo_362CAC0 *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor___77435056);
  if ( !v32 )
LABEL_10:
    sub_1C13F80(v11, v12);
  System_Collections_Generic_List_object___Remove(
    v32,
    (Il2CppObject *)square,
    (const MethodInfo_362E6F4 *)Method_System_Collections_Generic_List_WarBoardSquareData__Remove__);
  v33 = System_Collections_Generic_List_object___ToArray(
          v32,
          (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  p_condSquares->klass = (PartyOrganizationUtility_c *)v33;
  sub_1C13CC8(p_condSquares, (int64_t)v33, v34, v35, v36, v37, v38, v39);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardData__UpdateUiData(
        WarBoardData_o *this,
        int32_t squareIndex,
        System_String_array *setKeys,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *UiData; // x0
  Il2CppObject *v10; // x1
  il2cpp_array_size_t max_length; // w8
  WarBoardUiData_o *v12; // x22
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  Il2CppClass *klass; // x8
  _QWORD *v20; // x9
  __int64 monitor_low; // x10
  __int64 v22; // x8

  if ( (byte_4BB22F7 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardUiData__Add__, *(_QWORD *)&squareIndex);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardUiData__Remove__, v7);
    sub_1C13D24(&WarBoardUiData_TypeInfo, v8);
    byte_4BB22F7 = 1;
  }
  UiData = (Il2CppObject *)WarBoardData__GetUiData(this, squareIndex, (const MethodInfo *)setKeys);
  if ( !setKeys )
    goto LABEL_16;
  max_length = setKeys->max_length;
  v10 = UiData;
  if ( UiData )
  {
    if ( max_length )
    {
      WarBoardUiData__SetKeys((WarBoardUiData_o *)UiData, setKeys, 0LL);
      return;
    }
    UiData = (Il2CppObject *)this->fields.listUiData;
    if ( UiData )
    {
      System_Collections_Generic_List_object___Remove(
        (System_Collections_Generic_List_object__o *)UiData,
        v10,
        (const MethodInfo_362E6F4 *)Method_System_Collections_Generic_List_WarBoardUiData__Remove__);
      return;
    }
LABEL_16:
    sub_1C13F80(UiData, v10);
  }
  if ( max_length )
  {
    v12 = (WarBoardUiData_o *)sub_1C13F70(WarBoardUiData_TypeInfo);
    WarBoardUiData___ctor_36678520(v12, squareIndex, setKeys, 0LL);
    UiData = (Il2CppObject *)this->fields.listUiData;
    if ( !UiData )
      goto LABEL_16;
    klass = UiData[1].klass;
    v20 = Method_System_Collections_Generic_List_WarBoardUiData__Add__;
    ++HIDWORD(UiData[1].monitor);
    if ( !klass )
      goto LABEL_16;
    monitor_low = SLODWORD(UiData[1].monitor);
    if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)UiData,
        (Il2CppObject *)v12,
        *(const MethodInfo_362D1CC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    }
    else
    {
      v22 = (__int64)klass + 8 * monitor_low;
      LODWORD(UiData[1].monitor) = monitor_low + 1;
      *(_QWORD *)(v22 + 32) = v12;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v22 + 32), (int64_t)v12, v13, v14, v15, v16, v17, v18);
    }
  }
}


void __fastcall WarBoardData__UpdateUiData_36486936(
        WarBoardData_o *this,
        System_Int32_array *pieceIndex,
        System_String_array *setKeys,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *UiData_36486344; // x0
  Il2CppObject *v10; // x1
  il2cpp_array_size_t max_length; // w8
  WarBoardUiData_o *v12; // x22
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  Il2CppClass *klass; // x8
  _QWORD *v20; // x9
  __int64 monitor_low; // x10
  __int64 v22; // x8

  if ( (byte_4BB22F8 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardUiData__Add__, pieceIndex);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardUiData__Remove__, v7);
    sub_1C13D24(&WarBoardUiData_TypeInfo, v8);
    byte_4BB22F8 = 1;
  }
  UiData_36486344 = (Il2CppObject *)WarBoardData__GetUiData_36486344(this, pieceIndex, (const MethodInfo *)setKeys);
  if ( !setKeys )
    goto LABEL_16;
  max_length = setKeys->max_length;
  v10 = UiData_36486344;
  if ( UiData_36486344 )
  {
    if ( max_length )
    {
      WarBoardUiData__SetKeys((WarBoardUiData_o *)UiData_36486344, setKeys, 0LL);
      return;
    }
    UiData_36486344 = (Il2CppObject *)this->fields.listUiData;
    if ( UiData_36486344 )
    {
      System_Collections_Generic_List_object___Remove(
        (System_Collections_Generic_List_object__o *)UiData_36486344,
        v10,
        (const MethodInfo_362E6F4 *)Method_System_Collections_Generic_List_WarBoardUiData__Remove__);
      return;
    }
LABEL_16:
    sub_1C13F80(UiData_36486344, v10);
  }
  if ( max_length )
  {
    v12 = (WarBoardUiData_o *)sub_1C13F70(WarBoardUiData_TypeInfo);
    WarBoardUiData___ctor_36678592(v12, pieceIndex, setKeys, 0LL);
    UiData_36486344 = (Il2CppObject *)this->fields.listUiData;
    if ( !UiData_36486344 )
      goto LABEL_16;
    klass = UiData_36486344[1].klass;
    v20 = Method_System_Collections_Generic_List_WarBoardUiData__Add__;
    ++HIDWORD(UiData_36486344[1].monitor);
    if ( !klass )
      goto LABEL_16;
    monitor_low = SLODWORD(UiData_36486344[1].monitor);
    if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)UiData_36486344,
        (Il2CppObject *)v12,
        *(const MethodInfo_362D1CC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    }
    else
    {
      v22 = (__int64)klass + 8 * monitor_low;
      LODWORD(UiData_36486344[1].monitor) = monitor_low + 1;
      *(_QWORD *)(v22 + 32) = v12;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v22 + 32), (int64_t)v12, v13, v14, v15, v16, v17, v18);
    }
  }
}


void __fastcall WarBoardData__UpdateWinCondId(
        WarBoardData_o *this,
        int32_t overWriteWinCondId,
        const MethodInfo *method)
{
  this->fields.winCondId = overWriteWinCondId;
}


int32_t __fastcall WarBoardData__get_ContinueConsumeType(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields._ContinueConsumeType_k__BackingField;
}


int32_t __fastcall WarBoardData__get_CurrentMemberCount(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields._CurrentMemberCount_k__BackingField;
}


int32_t __fastcall WarBoardData__get_CurrentPartyCost(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields._CurrentPartyCost_k__BackingField;
}


int32_t __fastcall WarBoardData__get_FormationLimitCost(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardStageEntity_o *stageEntity; // x8

  stageEntity = this->fields.stageEntity;
  if ( stageEntity )
    return stageEntity->fields.formationCost;
  else
    return 0;
}


bool __fastcall WarBoardData__get_IsContinue(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields._IsContinue_k__BackingField;
}


bool __fastcall WarBoardData__get_IsEmptyMember(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields._CurrentMemberCount_k__BackingField < 1;
}


bool __fastcall WarBoardData__get_IsNextTurn(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields._IsNextTurn_k__BackingField;
}


bool __fastcall WarBoardData__get_IsPartyCostOver(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardStageEntity_o *stageEntity; // x9

  stageEntity = this->fields.stageEntity;
  if ( stageEntity )
    LODWORD(stageEntity) = stageEntity->fields.formationCost;
  return this->fields._CurrentPartyCost_k__BackingField > (int)stageEntity;
}


System_Collections_Generic_List_int__o *__fastcall WarBoardData__get_MasterExistsForce(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  return this->fields.masterExistsForce;
}


int64_t __fastcall WarBoardData__get_PlayerMasterUserEquipId(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WarBoardData___c_c *v6; // x0
  System_Object_array *pieces; // x19
  System_Predicate_object__o *_9__62_0; // x20
  Il2CppObject *v9; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t result; // x0

  if ( (byte_4BB22A3 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Array_Find_WarBoardPieceData___, method);
    sub_1C13D24(&System_Predicate_WarBoardPieceData__TypeInfo, v3);
    sub_1C13D24(&Method_WarBoardData___c__get_PlayerMasterUserEquipId_b__62_0__, v4);
    sub_1C13D24(&WarBoardData___c_TypeInfo, v5);
    byte_4BB22A3 = 1;
  }
  v6 = WarBoardData___c_TypeInfo;
  pieces = (System_Object_array *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v6 = WarBoardData___c_TypeInfo;
  }
  _9__62_0 = (System_Predicate_object__o *)v6->static_fields->__9__62_0;
  if ( !_9__62_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = WarBoardData___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__62_0 = (System_Predicate_object__o *)sub_1C13F70(System_Predicate_WarBoardPieceData__TypeInfo);
    System_Predicate_object____ctor(_9__62_0, v9, Method_WarBoardData___c__get_PlayerMasterUserEquipId_b__62_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__62_0 = (struct System_Predicate_WarBoardPieceData__o *)_9__62_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__62_0,
      (int64_t)_9__62_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  result = (int64_t)System_Array__Find_object_(
                      pieces,
                      (System_Predicate_T__o *)_9__62_0,
                      (const MethodInfo_308A23C *)Method_System_Array_Find_WarBoardPieceData___);
  if ( result )
    return *(_QWORD *)(result + 248);
  return result;
}


int32_t __fastcall WarBoardData__get_TurnCount(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardDataEntity_o *serverData; // x8

  serverData = this->fields.serverData;
  if ( serverData )
    return serverData->fields.turn;
  else
    return 0;
}


System_Collections_Generic_Dictionary_string__object__o *__fastcall WarBoardData__get_bgAnimationInfo(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  return this->fields._bgAnimationInfo_k__BackingField;
}


int32_t __fastcall WarBoardData__get_id(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardStageEntity_o *stageEntity; // x8

  stageEntity = this->fields.stageEntity;
  if ( !stageEntity )
    sub_1C13F80(this, method);
  return stageEntity->fields.id;
}


int32_t __fastcall WarBoardData__get_maxForceId(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields._maxForceId_k__BackingField;
}


int32_t __fastcall WarBoardData__get_maxGroupId(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields._maxGroupId_k__BackingField;
}


void __fastcall WarBoardData__set_ContinueConsumeType(WarBoardData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._ContinueConsumeType_k__BackingField = value;
}


void __fastcall WarBoardData__set_CurrentMemberCount(WarBoardData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._CurrentMemberCount_k__BackingField = value;
}


void __fastcall WarBoardData__set_CurrentPartyCost(WarBoardData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._CurrentPartyCost_k__BackingField = value;
}


void __fastcall WarBoardData__set_IsContinue(WarBoardData_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsContinue_k__BackingField = value;
}


void __fastcall WarBoardData__set_IsNextTurn(WarBoardData_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsNextTurn_k__BackingField = value;
}


void __fastcall WarBoardData__set_bgAnimationInfo(
        WarBoardData_o *this,
        System_Collections_Generic_Dictionary_string__object__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._bgAnimationInfo_k__BackingField = value;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields._bgAnimationInfo_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall WarBoardData__set_maxForceId(WarBoardData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._maxForceId_k__BackingField = value;
}


void __fastcall WarBoardData__set_maxGroupId(WarBoardData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._maxGroupId_k__BackingField = value;
}


void __fastcall WarBoardData_BattleParticipantInfo___ctor(
        WarBoardData_BattleParticipantInfo_o *this,
        WarBoardPieceData_o *attackPieceData,
        WarBoardPieceData_o *targetPieceData,
        const MethodInfo *method)
{
  WarBoardData_BattleParticipantInfo_o *v7; // x0
  const MethodInfo *v8; // x3
  struct WarBoardPieceData_array *v9; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  v9 = WarBoardData_BattleParticipantInfo__AggregateBattleParticipants(v7, attackPieceData, targetPieceData, v8);
  this->fields._Participants_k__BackingField = v9;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, (int64_t)v9, v10, v11, v12, v13, v14, v15);
}


void __fastcall WarBoardData_BattleParticipantInfo___ctor_36636632(
        WarBoardData_BattleParticipantInfo_o *this,
        System_UInt32_array *uniqueIndexArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t monitor; // x1
  System_Func_T__TResult__o *v20; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  System_Object_array *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  if ( (byte_4BB2404 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Select_uint__WarBoardPieceData___, uniqueIndexArray);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, v5);
    sub_1C13D24(&System_Func_uint__WarBoardPieceData__TypeInfo, v6);
    sub_1C13D24(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7);
    sub_1C13D24(&Method_WarBoardData_BattleParticipantInfo___c__DisplayClass13_0___ctor_b__0__, v8);
    sub_1C13D24(&WarBoardData_BattleParticipantInfo___c__DisplayClass13_0_TypeInfo, v9);
    byte_4BB2404 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v10 = sub_1C13F70(WarBoardData_BattleParticipantInfo___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !uniqueIndexArray )
    goto LABEL_9;
  if ( (int)uniqueIndexArray->max_length > 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance && v10 )
    {
      monitor = (int64_t)Instance[27].monitor;
      *(_QWORD *)(v10 + 16) = monitor;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v10 + 16), monitor, v13, v14, v15, v16, v17, v18);
      v20 = (System_Func_T__TResult__o *)sub_1C13F70(System_Func_uint__WarBoardPieceData__TypeInfo);
      System_Func_uint__object____ctor(
        v20,
        (Il2CppObject *)v10,
        Method_WarBoardData_BattleParticipantInfo___c__DisplayClass13_0___ctor_b__0__,
        0LL);
      v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_uint__object_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)uniqueIndexArray,
                                                                   (System_Func_TSource__TResult__o *)v20,
                                                                   (const MethodInfo_2FC1D30 *)Method_System_Linq_Enumerable_Select_uint__WarBoardPieceData___);
      v22 = System_Linq_Enumerable__ToArray_object_(
              v21,
              (const MethodInfo_2FC8D34 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
      this->fields._Participants_k__BackingField = (struct WarBoardPieceData_array *)v22;
      sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, (int64_t)v22, v23, v24, v25, v26, v27, v28);
      return;
    }
LABEL_9:
    sub_1C13F80(Instance, v12);
  }
  this->fields._Invalid_k__BackingField = 1;
}


WarBoardPieceData_array *__fastcall WarBoardData_BattleParticipantInfo__AggregateBattleParticipants(
        WarBoardData_BattleParticipantInfo_o *this,
        WarBoardPieceData_o *attackPieceData,
        WarBoardPieceData_o *targetPieceData,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x19
  WarBoardPieceData_array *Instance; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Object_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  Il2CppClass **v33; // x0
  __int64 v34; // x8
  WarBoardPieceData_array *v35; // x20
  unsigned __int64 v36; // x23
  WarBoardPieceData_o **m_Items; // x25
  int64_t v38; // x21
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct System_Object_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  Il2CppClass **v48; // x0

  if ( (byte_4BB2406 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, attackPieceData);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardPieceData__Contains__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v8);
    sub_1C13D24(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v9);
    sub_1C13D24(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    byte_4BB2406 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( !v11 )
    goto LABEL_31;
  items = v11->fields._items;
  v21 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
  ++v11->fields._version;
  if ( !items )
    goto LABEL_31;
  size = v11->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      (Il2CppObject *)attackPieceData,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &items->obj.klass + size;
    v11->fields._size = size + 1;
    v23[4] = (Il2CppClass *)attackPieceData;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v23 + 4), (int64_t)attackPieceData, v14, v15, v16, v17, v18, v19);
  }
  v30 = v11->fields._items;
  v31 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
  ++v11->fields._version;
  if ( !v30 )
    goto LABEL_31;
  v32 = v11->fields._size;
  if ( (unsigned int)v32 >= v30->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      (Il2CppObject *)targetPieceData,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = &v30->obj.klass + v32;
    v11->fields._size = v32 + 1;
    v33[4] = (Il2CppClass *)targetPieceData;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)targetPieceData, v24, v25, v26, v27, v28, v29);
  }
  Instance = (WarBoardPieceData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || !targetPieceData
    || (Instance = (WarBoardPieceData_array *)Instance->m_Items[51]) == 0LL
    || (Instance = WarBoardData__GetPicesForRangeIsAlive(
                     (WarBoardData_o *)Instance,
                     targetPieceData->fields._nowSquareIndex_k__BackingField,
                     1,
                     1,
                     0LL)) == 0LL )
  {
LABEL_31:
    sub_1C13F80(Instance, v13);
  }
  v34 = *(_QWORD *)&Instance->max_length;
  v35 = Instance;
  if ( (int)v34 >= 1 )
  {
    v36 = 0LL;
    m_Items = Instance->m_Items;
    do
    {
      if ( v36 >= (unsigned int)v34 )
        sub_1C13F88(Instance, v13);
      v38 = (int64_t)m_Items[v36];
      Instance = (WarBoardPieceData_array *)System_Collections_Generic_List_object___Contains(
                                              v11,
                                              (Il2CppObject *)v38,
                                              (const MethodInfo_362D55C *)Method_System_Collections_Generic_List_WarBoardPieceData__Contains__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !v38 )
          goto LABEL_31;
        if ( *(_DWORD *)(v38 + 16) != 1 )
        {
          Instance = *(WarBoardPieceData_array **)(v38 + 128);
          if ( !Instance
            || (Instance = (WarBoardPieceData_array *)BattleServantData__HasAvailableWarBoardNotAttackedBuff(
                                                        (BattleServantData_o *)Instance,
                                                        0LL),
                ((unsigned __int8)Instance & 1) == 0) )
          {
            v45 = v11->fields._items;
            v46 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
            ++v11->fields._version;
            if ( !v45 )
              goto LABEL_31;
            v47 = v11->fields._size;
            if ( (unsigned int)v47 >= v45->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v11,
                (Il2CppObject *)v38,
                *(const MethodInfo_362D1CC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
            }
            else
            {
              v48 = &v45->obj.klass + v47;
              v11->fields._size = v47 + 1;
              v48[4] = (Il2CppClass *)v38;
              sub_1C13CC8((PartyOrganizationUtility_o *)(v48 + 4), v38, v39, v40, v41, v42, v43, v44);
            }
          }
        }
      }
      LODWORD(v34) = v35->max_length;
      ++v36;
    }
    while ( (__int64)v36 < (int)v34 );
  }
  return (WarBoardPieceData_array *)System_Collections_Generic_List_object___ToArray(
                                      v11,
                                      (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
}


WarBoardData_BattleParticipantInfo_o *__fastcall WarBoardData_BattleParticipantInfo__LoadFromUniqueIndex(
        System_UInt32_array *uniqueIndexArray,
        const MethodInfo *method)
{
  WarBoardData_BattleParticipantInfo_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4BB2407 & 1) == 0 )
  {
    sub_1C13D24(&WarBoardData_BattleParticipantInfo_TypeInfo, method);
    byte_4BB2407 = 1;
  }
  v3 = (WarBoardData_BattleParticipantInfo_o *)sub_1C13F70(WarBoardData_BattleParticipantInfo_TypeInfo);
  WarBoardData_BattleParticipantInfo___ctor_36636632(v3, uniqueIndexArray, v4);
  return v3;
}


System_UInt32_array *__fastcall WarBoardData_BattleParticipantInfo__ToUniqueIndexArray(
        WarBoardData_BattleParticipantInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  WarBoardData_BattleParticipantInfo___c_c *v7; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Participants_k__BackingField; // x19
  System_Func_T__TResult__o *_9__14_0; // x20
  Il2CppObject *v10; // x21
  struct WarBoardData_BattleParticipantInfo___c_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0

  if ( (byte_4BB2405 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__uint___, method);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_uint___, v3);
    sub_1C13D24(&System_Func_WarBoardPieceData__uint__TypeInfo, v4);
    sub_1C13D24(&Method_WarBoardData_BattleParticipantInfo___c__ToUniqueIndexArray_b__14_0__, v5);
    sub_1C13D24(&WarBoardData_BattleParticipantInfo___c_TypeInfo, v6);
    byte_4BB2405 = 1;
  }
  v7 = WarBoardData_BattleParticipantInfo___c_TypeInfo;
  Participants_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._Participants_k__BackingField;
  if ( !WarBoardData_BattleParticipantInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_BattleParticipantInfo___c_TypeInfo);
    v7 = WarBoardData_BattleParticipantInfo___c_TypeInfo;
  }
  _9__14_0 = (System_Func_T__TResult__o *)v7->static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = WarBoardData_BattleParticipantInfo___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__14_0 = (System_Func_T__TResult__o *)sub_1C13F70(System_Func_WarBoardPieceData__uint__TypeInfo);
    System_Func_object__uint____ctor(
      _9__14_0,
      v10,
      Method_WarBoardData_BattleParticipantInfo___c__ToUniqueIndexArray_b__14_0__,
      0LL);
    static_fields = WarBoardData_BattleParticipantInfo___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Func_WarBoardPieceData__uint__o *)_9__14_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__14_0,
      (int64_t)_9__14_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__uint_(
                                                               Participants_k__BackingField,
                                                               (System_Func_TSource__TResult__o *)_9__14_0,
                                                               (const MethodInfo_2FC1160 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__uint___);
  return System_Linq_Enumerable__ToArray_uint_(
           v18,
           (const MethodInfo_2FC8E44 *)Method_System_Linq_Enumerable_ToArray_uint___);
}


WarBoardPieceData_o *__fastcall WarBoardData_BattleParticipantInfo__get_Attacker(
        WarBoardData_BattleParticipantInfo_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceData_array *Participants_k__BackingField; // x8

  Participants_k__BackingField = this->fields._Participants_k__BackingField;
  if ( !Participants_k__BackingField )
    sub_1C13F80(this, method);
  if ( !Participants_k__BackingField->max_length )
    sub_1C13F88(this, method);
  return Participants_k__BackingField->m_Items[0];
}


WarBoardPieceData_o *__fastcall WarBoardData_BattleParticipantInfo__get_Defender(
        WarBoardData_BattleParticipantInfo_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceData_array *Participants_k__BackingField; // x8

  Participants_k__BackingField = this->fields._Participants_k__BackingField;
  if ( !Participants_k__BackingField )
    sub_1C13F80(this, method);
  if ( Participants_k__BackingField->max_length <= 1 )
    sub_1C13F88(this, method);
  return Participants_k__BackingField->m_Items[1];
}


bool __fastcall WarBoardData_BattleParticipantInfo__get_Invalid(
        WarBoardData_BattleParticipantInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._Invalid_k__BackingField;
}


WarBoardPieceData_array *__fastcall WarBoardData_BattleParticipantInfo__get_Participants(
        WarBoardData_BattleParticipantInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._Participants_k__BackingField;
}


void __fastcall WarBoardData_BattleParticipantInfo___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB2408 & 1) == 0 )
  {
    sub_1C13D24(&WarBoardData_BattleParticipantInfo___c_TypeInfo, v1);
    byte_4BB2408 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(WarBoardData_BattleParticipantInfo___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardData_BattleParticipantInfo___c_TypeInfo->static_fields->__9 = (struct WarBoardData_BattleParticipantInfo___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)WarBoardData_BattleParticipantInfo___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall WarBoardData_BattleParticipantInfo___c___ctor(
        WarBoardData_BattleParticipantInfo___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


uint32_t __fastcall WarBoardData_BattleParticipantInfo___c___ToUniqueIndexArray_b__14_0(
        WarBoardData_BattleParticipantInfo___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return x->fields._uniqueIndex_k__BackingField;
}


void __fastcall WarBoardData_BattleParticipantInfo___c__DisplayClass13_0___ctor(
        WarBoardData_BattleParticipantInfo___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


WarBoardPieceData_o *__fastcall WarBoardData_BattleParticipantInfo___c__DisplayClass13_0____ctor_b__0(
        WarBoardData_BattleParticipantInfo___c__DisplayClass13_0_o *this,
        uint32_t x,
        const MethodInfo *method)
{
  WarBoardData_o *warBoardData; // x0

  warBoardData = this->fields.warBoardData;
  if ( !warBoardData )
    sub_1C13F80(0LL, x);
  return WarBoardData__GetPiece_36398148(warBoardData, x, 0, 0LL);
}


void __fastcall WarBoardData_SquareRangeSearch___ctor(
        WarBoardData_SquareRangeSearch_o *this,
        int32_t position,
        int32_t range,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.squareIndex = position;
  this->fields.range = range;
}


void __fastcall WarBoardData_WarBoardDeadBreakList___ctor(
        WarBoardData_WarBoardDeadBreakList_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardData_WarBoardLocalSaveData___ctor(
        WarBoardData_WarBoardLocalSaveData_o *this,
        const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
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
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct UnityEngine_Vector2_o zeroVector; // d1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_QWORD *)&this->fields.questId = 0LL;
  this->fields.stageId = 0;
  this->fields.pieceSaves = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.pieceSaves, 0LL, v3, v4, v5, v6, v7, v8);
  this->fields.itemSaves = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.itemSaves, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.treasureSaves = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.treasureSaves, 0LL, v15, v16, v17, v18, v19, v20);
  this->fields.wallSaves = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.wallSaves, 0LL, v21, v22, v23, v24, v25, v26);
  this->fields.squareSaves = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.squareSaves, 0LL, v27, v28, v29, v30, v31, v32);
  if ( !byte_4BAEC9A )
  {
    sub_1C13D24(&UnityEngine_Vector2_TypeInfo, v33);
    byte_4BAEC9A = 1;
  }
  zeroVector = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  this->fields.cameraSize = 0.0;
  *(_QWORD *)&this->fields.turn = 0xFFFFFFFF00000000LL;
  this->fields.turnGroupId = -1;
  this->fields.onBoardSkillUpdate = 0;
  this->fields.cameraPos = zeroVector;
  this->fields.eventSaves = 0LL;
  *(_QWORD *)&this->fields.randLogicCount = 0LL;
  this->fields.isPlayedHalfDeadMessage = 0;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.eventSaves, 0LL, v34, v35, v36, v37, v38, v39);
  this->fields.winCondId = -1;
  this->fields.latestBattlePieceUniqueIndexes = 0LL;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.latestBattlePieceUniqueIndexes,
    0LL,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields.prevCondSaves = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.prevCondSaves, 0LL, v47, v48, v49, v50, v51, v52);
  this->fields.reinforcementsSaves = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.reinforcementsSaves, 0LL, v53, v54, v55, v56, v57, v58);
  this->fields.playedReinforcements = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.playedReinforcements, 0LL, v59, v60, v61, v62, v63, v64);
  this->fields.uiDataSaves = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.uiDataSaves, 0LL, v65, v66, v67, v68, v69, v70);
  this->fields.bgAnimationInfo = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.bgAnimationInfo, 0LL, v71, v72, v73, v74, v75, v76);
  this->fields.squareIndexInfo = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.squareIndexInfo, 0LL, v77, v78, v79, v80, v81, v82);
  this->fields.bossBattleInfo = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.bossBattleInfo, 0LL, v83, v84, v85, v86, v87, v88);
}


void __fastcall WarBoardData_WarBoardLocalSaveData___ctor_36631940(
        WarBoardData_WarBoardLocalSaveData_o *this,
        WarBoardData_o *warBoardData,
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
  __int64 GutsCount; // x0
  __int64 v38; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  struct WarBoardPieceData_array *pieces; // x8
  __int64 v41; // x22
  struct WarBoardPieceData_SaveData_array *v42; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  unsigned __int64 v49; // x24
  __int64 v50; // x26
  __int64 v51; // x27
  struct WarBoardPieceData_array *v52; // x8
  struct WarBoardPieceData_SaveData_array *pieceSaves; // x28
  WarBoardPieceData_o *v54; // x23
  WarBoardPieceData_SaveData_o *v55; // x22
  const MethodInfo *v56; // x2
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  struct WarBoardItemData_array *items; // x8
  __int64 v64; // x22
  struct WarBoardItemData_SaveData_array *v65; // x0
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  unsigned __int64 v72; // x24
  __int64 v73; // x26
  __int64 v74; // x27
  struct WarBoardItemData_array *v75; // x8
  struct WarBoardItemData_SaveData_array *itemSaves; // x28
  WarBoardItemData_o *v77; // x23
  WarBoardItemData_SaveData_o *v78; // x22
  const MethodInfo *v79; // x2
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  struct WarBoardTreasureData_array *treasures; // x8
  __int64 v87; // x22
  struct WarBoardTreasureData_SaveData_array *v88; // x0
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  unsigned __int64 v95; // x24
  __int64 v96; // x26
  __int64 v97; // x27
  struct WarBoardTreasureData_array *v98; // x8
  struct WarBoardTreasureData_SaveData_array *treasureSaves; // x28
  WarBoardTreasureData_o *v100; // x23
  WarBoardTreasureData_SaveData_o *v101; // x22
  const MethodInfo *v102; // x2
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  struct WarBoardWallData_array *walls; // x8
  __int64 v110; // x22
  struct WarBoardWallData_SaveData_array *v111; // x0
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  unsigned __int64 v118; // x24
  __int64 v119; // x26
  __int64 v120; // x27
  struct WarBoardWallData_array *v121; // x8
  struct WarBoardWallData_SaveData_array *wallSaves; // x28
  WarBoardWallData_o *v123; // x23
  WarBoardWallData_SaveData_o *v124; // x22
  const MethodInfo *v125; // x2
  int64_t v126; // x2
  int32_t v127; // w3
  System_String_o *v128; // x4
  BattleSetupInfo_o *v129; // x5
  FollowerInfo_o *v130; // x6
  PartyListViewItem_o *v131; // x7
  struct WarBoardSquareData_array *squares; // x8
  __int64 v133; // x22
  struct WarBoardSquareData_SaveData_array *v134; // x0
  int64_t v135; // x2
  int32_t v136; // w3
  System_String_o *v137; // x4
  BattleSetupInfo_o *v138; // x5
  FollowerInfo_o *v139; // x6
  PartyListViewItem_o *v140; // x7
  unsigned __int64 v141; // x24
  __int64 v142; // x26
  __int64 v143; // x27
  struct WarBoardSquareData_array *v144; // x8
  struct WarBoardSquareData_SaveData_array *squareSaves; // x28
  WarBoardSquareData_o *v146; // x23
  WarBoardSquareData_SaveData_o *v147; // x22
  const MethodInfo *v148; // x2
  int64_t v149; // x2
  int32_t v150; // w3
  System_String_o *v151; // x4
  BattleSetupInfo_o *v152; // x5
  FollowerInfo_o *v153; // x6
  PartyListViewItem_o *v154; // x7
  struct UnityEngine_Vector2_o zeroVector; // d0
  struct System_Collections_Generic_List_WarBoardEventData__o *listEvent; // x8
  __int64 size; // x21
  struct WarBoardEventData_SaveData_array *v158; // x0
  int64_t v159; // x2
  int32_t v160; // w3
  System_String_o *v161; // x4
  BattleSetupInfo_o *v162; // x5
  FollowerInfo_o *v163; // x6
  PartyListViewItem_o *v164; // x7
  int64_t v165; // x2
  int32_t v166; // w3
  System_String_o *v167; // x4
  BattleSetupInfo_o *v168; // x5
  FollowerInfo_o *v169; // x6
  PartyListViewItem_o *v170; // x7
  unsigned __int64 v171; // x23
  __int64 v172; // x28
  struct WarBoardEventData_SaveData_array *eventSaves; // x29
  Il2CppObject *Item; // x25
  WarBoardEventData_SaveData_o *v175; // x24
  const MethodInfo *v176; // x2
  int64_t v177; // x2
  int32_t v178; // w3
  System_String_o *v179; // x4
  BattleSetupInfo_o *v180; // x5
  FollowerInfo_o *v181; // x6
  PartyListViewItem_o *v182; // x7
  struct System_Int32_array *latestPieceActionSquareIndexes; // x1
  struct System_UInt32_array *latestBattlePieceUniqueIndexes; // x1
  int64_t v185; // x2
  int32_t v186; // w3
  System_String_o *v187; // x4
  BattleSetupInfo_o *v188; // x5
  FollowerInfo_o *v189; // x6
  PartyListViewItem_o *v190; // x7
  struct System_Collections_Generic_List_WarBoardPrevCondData__o *listPrevCond; // x8
  __int64 v192; // x21
  struct WarBoardPrevCondData_SaveData_array *v193; // x0
  int64_t v194; // x2
  int32_t v195; // w3
  System_String_o *v196; // x4
  BattleSetupInfo_o *v197; // x5
  FollowerInfo_o *v198; // x6
  PartyListViewItem_o *v199; // x7
  unsigned __int64 v200; // x23
  __int64 v201; // x28
  struct WarBoardPrevCondData_SaveData_array *prevCondSaves; // x29
  Il2CppObject *v203; // x25
  WarBoardPrevCondData_SaveData_o *v204; // x24
  const MethodInfo *v205; // x2
  int64_t v206; // x2
  int32_t v207; // w3
  System_String_o *v208; // x4
  BattleSetupInfo_o *v209; // x5
  FollowerInfo_o *v210; // x6
  PartyListViewItem_o *v211; // x7
  struct System_Collections_Generic_List_HoldReinforcementsData__o *reinforcementsSaveList; // x8
  __int64 v213; // x21
  struct HoldReinforcementsData_SaveData_array *v214; // x0
  int64_t v215; // x2
  int32_t v216; // w3
  System_String_o *v217; // x4
  BattleSetupInfo_o *v218; // x5
  FollowerInfo_o *v219; // x6
  PartyListViewItem_o *v220; // x7
  unsigned __int64 v221; // x23
  __int64 v222; // x28
  struct HoldReinforcementsData_SaveData_array *reinforcementsSaves; // x29
  Il2CppObject *v224; // x25
  HoldReinforcementsData_SaveData_o *v225; // x24
  const MethodInfo *v226; // x2
  int64_t v227; // x2
  int32_t v228; // w3
  System_String_o *v229; // x4
  BattleSetupInfo_o *v230; // x5
  FollowerInfo_o *v231; // x6
  PartyListViewItem_o *v232; // x7
  struct System_Int32_array *v233; // x0
  int64_t v234; // x2
  int32_t v235; // w3
  System_String_o *v236; // x4
  BattleSetupInfo_o *v237; // x5
  FollowerInfo_o *v238; // x6
  PartyListViewItem_o *v239; // x7
  struct System_Collections_Generic_List_WarBoardUiData__o *listUiData; // x8
  __int64 v241; // x21
  struct WarBoardUiData_SaveData_array *v242; // x0
  int64_t v243; // x2
  int32_t v244; // w3
  System_String_o *v245; // x4
  BattleSetupInfo_o *v246; // x5
  FollowerInfo_o *v247; // x6
  PartyListViewItem_o *v248; // x7
  unsigned __int64 v249; // x23
  __int64 v250; // x28
  struct WarBoardUiData_SaveData_array *uiDataSaves; // x29
  Il2CppObject *v252; // x25
  WarBoardUiData_SaveData_o *v253; // x24
  const MethodInfo *v254; // x2
  int64_t v255; // x2
  int32_t v256; // w3
  System_String_o *v257; // x4
  BattleSetupInfo_o *v258; // x5
  FollowerInfo_o *v259; // x6
  PartyListViewItem_o *v260; // x7
  struct WarBoardDataEntity_o *v261; // x8
  int32_t v262; // w22
  struct WarBoardSquareIndexData_SaveData_array *v263; // x0
  int64_t v264; // x2
  int32_t v265; // w3
  System_String_o *v266; // x4
  BattleSetupInfo_o *v267; // x5
  FollowerInfo_o *v268; // x6
  PartyListViewItem_o *v269; // x7
  unsigned __int64 v270; // x24
  __int64 v271; // x26
  __int64 v272; // x27
  struct WarBoardDataEntity_o *v273; // x8
  struct WarBoardSquareIndexData_array *squareIndexInfo; // x8
  struct WarBoardSquareIndexData_SaveData_array *v275; // x28
  WarBoardSquareIndexData_o *v276; // x23
  WarBoardSquareIndexData_SaveData_o *v277; // x22
  const MethodInfo *v278; // x2
  int64_t v279; // x2
  int32_t v280; // w3
  System_String_o *v281; // x4
  BattleSetupInfo_o *v282; // x5
  FollowerInfo_o *v283; // x6
  PartyListViewItem_o *v284; // x7
  struct WarBoardDataEntity_o *v285; // x8
  int32_t v286; // w22
  struct WarBoardBossBattleData_SaveData_array *v287; // x0
  int64_t v288; // x2
  int32_t v289; // w3
  System_String_o *v290; // x4
  BattleSetupInfo_o *v291; // x5
  FollowerInfo_o *v292; // x6
  PartyListViewItem_o *v293; // x7
  unsigned __int64 v294; // x24
  __int64 v295; // x26
  __int64 v296; // x27
  struct WarBoardDataEntity_o *v297; // x8
  struct WarBoardBossBattleData_array *bossBattleInfo; // x8
  struct WarBoardBossBattleData_SaveData_array *v299; // x28
  WarBoardBossBattleData_o *v300; // x23
  WarBoardBossBattleData_SaveData_o *v301; // x22
  int64_t v302; // x2
  int32_t v303; // w3
  System_String_o *v304; // x4
  BattleSetupInfo_o *v305; // x5
  FollowerInfo_o *v306; // x6
  PartyListViewItem_o *v307; // x7
  int32_t ContinueConsumeType_k__BackingField; // w8
  __int64 v309; // x0

  if ( (byte_4BB2403 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___, warBoardData);
    sub_1C13D24(&Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardUiData__get_Count__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardPrevCondData__get_Count__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardEventData__get_Count__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_HoldReinforcementsData__get_Count__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardEventData__get_Item__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardUiData__get_Item__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardPrevCondData__get_Item__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_List_HoldReinforcementsData__get_Item__, v14);
    sub_1C13D24(&WarBoardTreasureData_SaveData___TypeInfo, v15);
    sub_1C13D24(&WarBoardSquareData_SaveData___TypeInfo, v16);
    sub_1C13D24(&WarBoardSquareIndexData_SaveData___TypeInfo, v17);
    sub_1C13D24(&HoldReinforcementsData_SaveData___TypeInfo, v18);
    sub_1C13D24(&WarBoardItemData_SaveData___TypeInfo, v19);
    sub_1C13D24(&WarBoardWallData_SaveData___TypeInfo, v20);
    sub_1C13D24(&WarBoardPrevCondData_SaveData___TypeInfo, v21);
    sub_1C13D24(&WarBoardEventData_SaveData___TypeInfo, v22);
    sub_1C13D24(&WarBoardUiData_SaveData___TypeInfo, v23);
    sub_1C13D24(&WarBoardPieceData_SaveData___TypeInfo, v24);
    sub_1C13D24(&WarBoardBossBattleData_SaveData___TypeInfo, v25);
    sub_1C13D24(&WarBoardSquareData_SaveData_TypeInfo, v26);
    sub_1C13D24(&WarBoardTreasureData_SaveData_TypeInfo, v27);
    sub_1C13D24(&WarBoardBossBattleData_SaveData_TypeInfo, v28);
    sub_1C13D24(&WarBoardItemData_SaveData_TypeInfo, v29);
    sub_1C13D24(&WarBoardPrevCondData_SaveData_TypeInfo, v30);
    sub_1C13D24(&WarBoardWallData_SaveData_TypeInfo, v31);
    sub_1C13D24(&WarBoardUiData_SaveData_TypeInfo, v32);
    sub_1C13D24(&WarBoardEventData_SaveData_TypeInfo, v33);
    sub_1C13D24(&WarBoardSquareIndexData_SaveData_TypeInfo, v34);
    sub_1C13D24(&HoldReinforcementsData_SaveData_TypeInfo, v35);
    sub_1C13D24(&WarBoardPieceData_SaveData_TypeInfo, v36);
    byte_4BB2403 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !warBoardData )
    goto LABEL_117;
  serverData = warBoardData->fields.serverData;
  if ( !serverData )
    goto LABEL_117;
  *(_QWORD *)&this->fields.questId = *(_QWORD *)&serverData->fields.questId;
  this->fields.stageId = serverData->fields.stageId;
  this->fields.turn = serverData->fields.turn;
  *(_QWORD *)&this->fields.turnForceId = *(_QWORD *)&serverData->fields.turnForceId;
  pieces = warBoardData->fields.pieces;
  if ( !pieces )
    goto LABEL_117;
  v41 = *(_QWORD *)&pieces->max_length;
  v42 = (struct WarBoardPieceData_SaveData_array *)sub_1C13DCC(WarBoardPieceData_SaveData___TypeInfo, (unsigned int)v41);
  this->fields.pieceSaves = v42;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.pieceSaves, (int64_t)v42, v43, v44, v45, v46, v47, v48);
  if ( (int)v41 >= 1 )
  {
    v49 = 0LL;
    v50 = (unsigned int)v41;
    v51 = 32LL;
    while ( 1 )
    {
      v52 = warBoardData->fields.pieces;
      if ( !v52 )
        break;
      if ( v49 >= v52->max_length )
        goto LABEL_118;
      pieceSaves = this->fields.pieceSaves;
      v54 = *(WarBoardPieceData_o **)((char *)&v52->obj.klass + v51);
      v55 = (WarBoardPieceData_SaveData_o *)sub_1C13F70(WarBoardPieceData_SaveData_TypeInfo);
      WarBoardPieceData_SaveData___ctor_36634992(v55, v54, v56);
      if ( !pieceSaves )
        break;
      if ( v55 )
      {
        GutsCount = sub_1C13E60(v55, pieceSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
        {
LABEL_119:
          v309 = sub_1C13FA4();
          sub_1C13E4C(v309, 0LL);
        }
      }
      if ( v49 >= pieceSaves->max_length )
LABEL_118:
        sub_1C13F88(GutsCount, v38);
      *(Il2CppClass **)((char *)&pieceSaves->obj.klass + v51) = (Il2CppClass *)v55;
      sub_1C13CC8((PartyOrganizationUtility_o *)((char *)pieceSaves + v51), (int64_t)v55, v57, v58, v59, v60, v61, v62);
      ++v49;
      v51 += 8LL;
      if ( v50 == v49 )
        goto LABEL_15;
    }
LABEL_117:
    sub_1C13F80(GutsCount, v38);
  }
LABEL_15:
  items = warBoardData->fields.items;
  if ( !items )
    goto LABEL_117;
  v64 = *(_QWORD *)&items->max_length;
  v65 = (struct WarBoardItemData_SaveData_array *)sub_1C13DCC(WarBoardItemData_SaveData___TypeInfo, (unsigned int)v64);
  this->fields.itemSaves = v65;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.itemSaves, (int64_t)v65, v66, v67, v68, v69, v70, v71);
  if ( (int)v64 >= 1 )
  {
    v72 = 0LL;
    v73 = (unsigned int)v64;
    v74 = 32LL;
    do
    {
      v75 = warBoardData->fields.items;
      if ( !v75 )
        goto LABEL_117;
      if ( v72 >= v75->max_length )
        goto LABEL_118;
      itemSaves = this->fields.itemSaves;
      v77 = *(WarBoardItemData_o **)((char *)&v75->obj.klass + v74);
      v78 = (WarBoardItemData_SaveData_o *)sub_1C13F70(WarBoardItemData_SaveData_TypeInfo);
      WarBoardItemData_SaveData___ctor_36635076(v78, v77, v79);
      if ( !itemSaves )
        goto LABEL_117;
      if ( v78 )
      {
        GutsCount = sub_1C13E60(v78, itemSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v72 >= itemSaves->max_length )
        goto LABEL_118;
      *(Il2CppClass **)((char *)&itemSaves->obj.klass + v74) = (Il2CppClass *)v78;
      sub_1C13CC8((PartyOrganizationUtility_o *)((char *)itemSaves + v74), (int64_t)v78, v80, v81, v82, v83, v84, v85);
      ++v72;
      v74 += 8LL;
    }
    while ( v73 != v72 );
  }
  treasures = warBoardData->fields.treasures;
  if ( !treasures )
    goto LABEL_117;
  v87 = *(_QWORD *)&treasures->max_length;
  v88 = (struct WarBoardTreasureData_SaveData_array *)sub_1C13DCC(
                                                        WarBoardTreasureData_SaveData___TypeInfo,
                                                        (unsigned int)v87);
  this->fields.treasureSaves = v88;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.treasureSaves, (int64_t)v88, v89, v90, v91, v92, v93, v94);
  if ( (int)v87 >= 1 )
  {
    v95 = 0LL;
    v96 = (unsigned int)v87;
    v97 = 32LL;
    do
    {
      v98 = warBoardData->fields.treasures;
      if ( !v98 )
        goto LABEL_117;
      if ( v95 >= v98->max_length )
        goto LABEL_118;
      treasureSaves = this->fields.treasureSaves;
      v100 = *(WarBoardTreasureData_o **)((char *)&v98->obj.klass + v97);
      v101 = (WarBoardTreasureData_SaveData_o *)sub_1C13F70(WarBoardTreasureData_SaveData_TypeInfo);
      WarBoardTreasureData_SaveData___ctor_36635160(v101, v100, v102);
      if ( !treasureSaves )
        goto LABEL_117;
      if ( v101 )
      {
        GutsCount = sub_1C13E60(v101, treasureSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v95 >= treasureSaves->max_length )
        goto LABEL_118;
      *(Il2CppClass **)((char *)&treasureSaves->obj.klass + v97) = (Il2CppClass *)v101;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)((char *)treasureSaves + v97),
        (int64_t)v101,
        v103,
        v104,
        v105,
        v106,
        v107,
        v108);
      ++v95;
      v97 += 8LL;
    }
    while ( v96 != v95 );
  }
  walls = warBoardData->fields.walls;
  if ( !walls )
    goto LABEL_117;
  v110 = *(_QWORD *)&walls->max_length;
  v111 = (struct WarBoardWallData_SaveData_array *)sub_1C13DCC(WarBoardWallData_SaveData___TypeInfo, (unsigned int)v110);
  this->fields.wallSaves = v111;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.wallSaves, (int64_t)v111, v112, v113, v114, v115, v116, v117);
  if ( (int)v110 >= 1 )
  {
    v118 = 0LL;
    v119 = (unsigned int)v110;
    v120 = 32LL;
    do
    {
      v121 = warBoardData->fields.walls;
      if ( !v121 )
        goto LABEL_117;
      if ( v118 >= v121->max_length )
        goto LABEL_118;
      wallSaves = this->fields.wallSaves;
      v123 = *(WarBoardWallData_o **)((char *)&v121->obj.klass + v120);
      v124 = (WarBoardWallData_SaveData_o *)sub_1C13F70(WarBoardWallData_SaveData_TypeInfo);
      WarBoardWallData_SaveData___ctor_36635276(v124, v123, v125);
      if ( !wallSaves )
        goto LABEL_117;
      if ( v124 )
      {
        GutsCount = sub_1C13E60(v124, wallSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v118 >= wallSaves->max_length )
        goto LABEL_118;
      *(Il2CppClass **)((char *)&wallSaves->obj.klass + v120) = (Il2CppClass *)v124;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)((char *)wallSaves + v120),
        (int64_t)v124,
        v126,
        v127,
        v128,
        v129,
        v130,
        v131);
      ++v118;
      v120 += 8LL;
    }
    while ( v119 != v118 );
  }
  squares = warBoardData->fields.squares;
  if ( !squares )
    goto LABEL_117;
  v133 = *(_QWORD *)&squares->max_length;
  v134 = (struct WarBoardSquareData_SaveData_array *)sub_1C13DCC(
                                                       WarBoardSquareData_SaveData___TypeInfo,
                                                       (unsigned int)v133);
  this->fields.squareSaves = v134;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.squareSaves,
    (int64_t)v134,
    v135,
    v136,
    v137,
    v138,
    v139,
    v140);
  if ( (int)v133 >= 1 )
  {
    v141 = 0LL;
    v142 = (unsigned int)v133;
    v143 = 32LL;
    do
    {
      v144 = warBoardData->fields.squares;
      if ( !v144 )
        goto LABEL_117;
      if ( v141 >= v144->max_length )
        goto LABEL_118;
      squareSaves = this->fields.squareSaves;
      v146 = *(WarBoardSquareData_o **)((char *)&v144->obj.klass + v143);
      v147 = (WarBoardSquareData_SaveData_o *)sub_1C13F70(WarBoardSquareData_SaveData_TypeInfo);
      WarBoardSquareData_SaveData___ctor_36635384(v147, v146, v148);
      if ( !squareSaves )
        goto LABEL_117;
      if ( v147 )
      {
        GutsCount = sub_1C13E60(v147, squareSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v141 >= squareSaves->max_length )
        goto LABEL_118;
      *(Il2CppClass **)((char *)&squareSaves->obj.klass + v143) = (Il2CppClass *)v147;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)((char *)squareSaves + v143),
        (int64_t)v147,
        v149,
        v150,
        v151,
        v152,
        v153,
        v154);
      ++v141;
      v143 += 8LL;
    }
    while ( v142 != v141 );
  }
  if ( !byte_4BAEC9A )
  {
    sub_1C13D24(&UnityEngine_Vector2_TypeInfo, v38);
    byte_4BAEC9A = 1;
  }
  zeroVector = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  *(_QWORD *)&this->fields.cameraSize = 3212836864LL;
  this->fields.onBoardSkillUpdate = 0;
  this->fields.cameraPos = zeroVector;
  this->fields.randLogicCount = BattleRandom__GetLogicCount(0LL);
  GutsCount = BattleRandom__GetGutsCount(0LL);
  this->fields.randGutsCount = GutsCount;
  this->fields.isPlayedHalfDeadMessage = warBoardData->fields.isPlayedHalfDeadMessage;
  listEvent = warBoardData->fields.listEvent;
  if ( !listEvent )
    goto LABEL_117;
  size = (unsigned int)listEvent->fields._size;
  v158 = (struct WarBoardEventData_SaveData_array *)sub_1C13DCC(
                                                      WarBoardEventData_SaveData___TypeInfo,
                                                      (unsigned int)size);
  this->fields.eventSaves = v158;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.eventSaves, (int64_t)v158, v159, v160, v161, v162, v163, v164);
  if ( (int)size >= 1 )
  {
    v171 = 0LL;
    v172 = 32LL;
    do
    {
      GutsCount = (__int64)warBoardData->fields.listEvent;
      if ( !GutsCount )
        goto LABEL_117;
      eventSaves = this->fields.eventSaves;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)GutsCount,
               v171,
               (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_WarBoardEventData__get_Item__);
      v175 = (WarBoardEventData_SaveData_o *)sub_1C13F70(WarBoardEventData_SaveData_TypeInfo);
      WarBoardEventData_SaveData___ctor_36635476(v175, (WarBoardEventData_o *)Item, v176);
      if ( !eventSaves )
        goto LABEL_117;
      if ( v175 )
      {
        GutsCount = sub_1C13E60(v175, eventSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v171 >= eventSaves->max_length )
        goto LABEL_118;
      *(Il2CppClass **)((char *)&eventSaves->obj.klass + v172) = (Il2CppClass *)v175;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)((char *)eventSaves + v172),
        (int64_t)v175,
        v177,
        v178,
        v179,
        v180,
        v181,
        v182);
      ++v171;
      v172 += 8LL;
    }
    while ( size != v171 );
  }
  this->fields.winCondId = warBoardData->fields.winCondId;
  latestPieceActionSquareIndexes = warBoardData->fields.latestPieceActionSquareIndexes;
  this->fields.latestPieceActionSquareIndexes = latestPieceActionSquareIndexes;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.latestPieceActionSquareIndexes,
    (int64_t)latestPieceActionSquareIndexes,
    v165,
    v166,
    v167,
    v168,
    v169,
    v170);
  latestBattlePieceUniqueIndexes = warBoardData->fields.latestBattlePieceUniqueIndexes;
  this->fields.latestBattlePieceUniqueIndexes = latestBattlePieceUniqueIndexes;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.latestBattlePieceUniqueIndexes,
    (int64_t)latestBattlePieceUniqueIndexes,
    v185,
    v186,
    v187,
    v188,
    v189,
    v190);
  listPrevCond = warBoardData->fields.listPrevCond;
  if ( !listPrevCond )
    goto LABEL_117;
  v192 = (unsigned int)listPrevCond->fields._size;
  v193 = (struct WarBoardPrevCondData_SaveData_array *)sub_1C13DCC(
                                                         WarBoardPrevCondData_SaveData___TypeInfo,
                                                         (unsigned int)v192);
  this->fields.prevCondSaves = v193;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.prevCondSaves,
    (int64_t)v193,
    v194,
    v195,
    v196,
    v197,
    v198,
    v199);
  if ( (int)v192 >= 1 )
  {
    v200 = 0LL;
    v201 = 32LL;
    do
    {
      GutsCount = (__int64)warBoardData->fields.listPrevCond;
      if ( !GutsCount )
        goto LABEL_117;
      prevCondSaves = this->fields.prevCondSaves;
      v203 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)GutsCount,
               v200,
               (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_WarBoardPrevCondData__get_Item__);
      v204 = (WarBoardPrevCondData_SaveData_o *)sub_1C13F70(WarBoardPrevCondData_SaveData_TypeInfo);
      WarBoardPrevCondData_SaveData___ctor_36635536(v204, (WarBoardPrevCondData_o *)v203, v205);
      if ( !prevCondSaves )
        goto LABEL_117;
      if ( v204 )
      {
        GutsCount = sub_1C13E60(v204, prevCondSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v200 >= prevCondSaves->max_length )
        goto LABEL_118;
      *(Il2CppClass **)((char *)&prevCondSaves->obj.klass + v201) = (Il2CppClass *)v204;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)((char *)prevCondSaves + v201),
        (int64_t)v204,
        v206,
        v207,
        v208,
        v209,
        v210,
        v211);
      ++v200;
      v201 += 8LL;
    }
    while ( v192 != v200 );
  }
  reinforcementsSaveList = warBoardData->fields.reinforcementsSaveList;
  if ( !reinforcementsSaveList )
    goto LABEL_117;
  v213 = (unsigned int)reinforcementsSaveList->fields._size;
  v214 = (struct HoldReinforcementsData_SaveData_array *)sub_1C13DCC(
                                                           HoldReinforcementsData_SaveData___TypeInfo,
                                                           (unsigned int)v213);
  this->fields.reinforcementsSaves = v214;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.reinforcementsSaves,
    (int64_t)v214,
    v215,
    v216,
    v217,
    v218,
    v219,
    v220);
  if ( (int)v213 >= 1 )
  {
    v221 = 0LL;
    v222 = 32LL;
    do
    {
      GutsCount = (__int64)warBoardData->fields.reinforcementsSaveList;
      if ( !GutsCount )
        goto LABEL_117;
      reinforcementsSaves = this->fields.reinforcementsSaves;
      v224 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)GutsCount,
               v221,
               (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_HoldReinforcementsData__get_Item__);
      v225 = (HoldReinforcementsData_SaveData_o *)sub_1C13F70(HoldReinforcementsData_SaveData_TypeInfo);
      HoldReinforcementsData_SaveData___ctor_36635588(v225, (HoldReinforcementsData_o *)v224, v226);
      if ( !reinforcementsSaves )
        goto LABEL_117;
      if ( v225 )
      {
        GutsCount = sub_1C13E60(v225, reinforcementsSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v221 >= reinforcementsSaves->max_length )
        goto LABEL_118;
      *(Il2CppClass **)((char *)&reinforcementsSaves->obj.klass + v222) = (Il2CppClass *)v225;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)((char *)reinforcementsSaves + v222),
        (int64_t)v225,
        v227,
        v228,
        v229,
        v230,
        v231,
        v232);
      ++v221;
      v222 += 8LL;
    }
    while ( v213 != v221 );
  }
  GutsCount = (__int64)warBoardData->fields.playedStageReinforcementsList;
  if ( !GutsCount )
    goto LABEL_117;
  v233 = System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)GutsCount,
           (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.playedReinforcements = v233;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.playedReinforcements,
    (int64_t)v233,
    v234,
    v235,
    v236,
    v237,
    v238,
    v239);
  listUiData = warBoardData->fields.listUiData;
  if ( !listUiData )
    goto LABEL_117;
  v241 = (unsigned int)listUiData->fields._size;
  v242 = (struct WarBoardUiData_SaveData_array *)sub_1C13DCC(WarBoardUiData_SaveData___TypeInfo, (unsigned int)v241);
  this->fields.uiDataSaves = v242;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.uiDataSaves,
    (int64_t)v242,
    v243,
    v244,
    v245,
    v246,
    v247,
    v248);
  if ( (int)v241 >= 1 )
  {
    v249 = 0LL;
    v250 = 32LL;
    do
    {
      GutsCount = (__int64)warBoardData->fields.listUiData;
      if ( !GutsCount )
        goto LABEL_117;
      uiDataSaves = this->fields.uiDataSaves;
      v252 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)GutsCount,
               v249,
               (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_WarBoardUiData__get_Item__);
      v253 = (WarBoardUiData_SaveData_o *)sub_1C13F70(WarBoardUiData_SaveData_TypeInfo);
      WarBoardUiData_SaveData___ctor_36635648(v253, (WarBoardUiData_o *)v252, v254);
      if ( !uiDataSaves )
        goto LABEL_117;
      if ( v253 )
      {
        GutsCount = sub_1C13E60(v253, uiDataSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v249 >= uiDataSaves->max_length )
        goto LABEL_118;
      *(Il2CppClass **)((char *)&uiDataSaves->obj.klass + v250) = (Il2CppClass *)v253;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)((char *)uiDataSaves + v250),
        (int64_t)v253,
        v255,
        v256,
        v257,
        v258,
        v259,
        v260);
      ++v249;
      v250 += 8LL;
    }
    while ( v241 != v249 );
  }
  v261 = warBoardData->fields.serverData;
  if ( !v261 )
    goto LABEL_117;
  v262 = System_Linq_Enumerable__Count_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v261->fields.squareIndexInfo,
           (const MethodInfo_2FAA35C *)Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___);
  v263 = (struct WarBoardSquareIndexData_SaveData_array *)sub_1C13DCC(
                                                            WarBoardSquareIndexData_SaveData___TypeInfo,
                                                            (unsigned int)v262);
  this->fields.squareIndexInfo = v263;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.squareIndexInfo,
    (int64_t)v263,
    v264,
    v265,
    v266,
    v267,
    v268,
    v269);
  if ( v262 >= 1 )
  {
    v270 = 0LL;
    v271 = (unsigned int)v262;
    v272 = 32LL;
    do
    {
      v273 = warBoardData->fields.serverData;
      if ( !v273 )
        goto LABEL_117;
      squareIndexInfo = v273->fields.squareIndexInfo;
      if ( !squareIndexInfo )
        goto LABEL_117;
      if ( v270 >= squareIndexInfo->max_length )
        goto LABEL_118;
      v275 = this->fields.squareIndexInfo;
      v276 = *(WarBoardSquareIndexData_o **)((char *)&squareIndexInfo->obj.klass + v272);
      v277 = (WarBoardSquareIndexData_SaveData_o *)sub_1C13F70(WarBoardSquareIndexData_SaveData_TypeInfo);
      WarBoardSquareIndexData_SaveData___ctor_36635728(v277, v276, v278);
      if ( !v275 )
        goto LABEL_117;
      if ( v277 )
      {
        GutsCount = sub_1C13E60(v277, v275->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v270 >= v275->max_length )
        goto LABEL_118;
      *(Il2CppClass **)((char *)&v275->obj.klass + v272) = (Il2CppClass *)v277;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)((char *)v275 + v272),
        (int64_t)v277,
        v279,
        v280,
        v281,
        v282,
        v283,
        v284);
      ++v270;
      v272 += 8LL;
    }
    while ( v271 != v270 );
  }
  v285 = warBoardData->fields.serverData;
  if ( !v285 )
    goto LABEL_117;
  v286 = System_Linq_Enumerable__Count_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v285->fields.bossBattleInfo,
           (const MethodInfo_2FAA35C *)Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___);
  v287 = (struct WarBoardBossBattleData_SaveData_array *)sub_1C13DCC(
                                                           WarBoardBossBattleData_SaveData___TypeInfo,
                                                           (unsigned int)v286);
  this->fields.bossBattleInfo = v287;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.bossBattleInfo,
    (int64_t)v287,
    v288,
    v289,
    v290,
    v291,
    v292,
    v293);
  if ( v286 >= 1 )
  {
    v294 = 0LL;
    v295 = (unsigned int)v286;
    v296 = 32LL;
    do
    {
      v297 = warBoardData->fields.serverData;
      if ( !v297 )
        goto LABEL_117;
      bossBattleInfo = v297->fields.bossBattleInfo;
      if ( !bossBattleInfo )
        goto LABEL_117;
      if ( v294 >= bossBattleInfo->max_length )
        goto LABEL_118;
      v299 = this->fields.bossBattleInfo;
      v300 = *(WarBoardBossBattleData_o **)((char *)&bossBattleInfo->obj.klass + v296);
      v301 = (WarBoardBossBattleData_SaveData_o *)sub_1C13F70(WarBoardBossBattleData_SaveData_TypeInfo);
      WarBoardBossBattleData_SaveData___ctor_36432552(v301, v300, 0LL);
      if ( !v299 )
        goto LABEL_117;
      if ( v301 )
      {
        GutsCount = sub_1C13E60(v301, v299->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v294 >= v299->max_length )
        goto LABEL_118;
      *(Il2CppClass **)((char *)&v299->obj.klass + v296) = (Il2CppClass *)v301;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)((char *)v299 + v296),
        (int64_t)v301,
        v302,
        v303,
        v304,
        v305,
        v306,
        v307);
      ++v294;
      v296 += 8LL;
    }
    while ( v295 != v294 );
  }
  ContinueConsumeType_k__BackingField = warBoardData->fields._ContinueConsumeType_k__BackingField;
  *(_WORD *)&this->fields.isContinue = 0;
  this->fields.continueConsumeType = ContinueConsumeType_k__BackingField;
  this->fields.localSaveTiming = warBoardData->fields.localSaveTiming;
}


void __fastcall WarBoardData___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB2409 & 1) == 0 )
  {
    sub_1C13D24(&WarBoardData___c_TypeInfo, v1);
    byte_4BB2409 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(WarBoardData___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardData___c_TypeInfo->static_fields->__9 = (struct WarBoardData___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)WarBoardData___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall WarBoardData___c___ctor(WarBoardData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall WarBoardData___c____ctor_b__77_0(
        WarBoardData___c_o *this,
        WarBoardStageLayoutEntity_o *x,
        WarBoardStageLayoutEntity_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_1C13F80(this, x);
  return x->fields.squareIndex - y->fields.squareIndex;
}


uint32_t __fastcall WarBoardData___c____ctor_b__77_1(
        WarBoardData___c_o *this,
        WarBoardStageNpcEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return (x->fields.forceId << 24) | ((unsigned __int8)x->fields.groupId << 16);
}


uint32_t __fastcall WarBoardData___c____ctor_b__77_2(
        WarBoardData___c_o *this,
        WarBoardActionPointEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return (x->fields.forceId << 24) | ((unsigned __int8)x->fields.groupId << 16);
}


int32_t __fastcall WarBoardData___c____ctor_b__77_3(
        WarBoardData___c_o *this,
        WarBoardStageNpcEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return x->fields.forceId;
}


int32_t __fastcall WarBoardData___c____ctor_b__77_4(
        WarBoardData___c_o *this,
        WarBoardStageNpcEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return x->fields.groupId;
}


bool __fastcall WarBoardData___c____ctor_b__77_9(
        WarBoardData___c_o *this,
        WarBoardUserTreasureData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return x->fields.isReceived;
}


BattleBuffData_o *__fastcall WarBoardData___c___BuffTurnProgressing_b__191_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *p,
        const MethodInfo *method)
{
  struct BattleServantData_o *battleServant_k__BackingField; // x8

  if ( !p )
    sub_1C13F80(this, 0LL);
  battleServant_k__BackingField = p->fields._battleServant_k__BackingField;
  if ( battleServant_k__BackingField )
    return battleServant_k__BackingField->fields.buffData;
  else
    return 0LL;
}


bool __fastcall WarBoardData___c___BuffTurnProgressing_b__191_1(
        WarBoardData___c_o *this,
        BattleBuffData_o *b,
        const MethodInfo *method)
{
  return b != 0LL;
}


void __fastcall WarBoardData___c___BuffTurnProgressing_b__191_2(
        WarBoardData___c_o *this,
        BattleBuffData_o *b,
        const MethodInfo *method)
{
  if ( !b )
    sub_1C13F80(this, 0LL);
  BattleBuffData__BoardTurnProgressing(b, 0LL);
}


bool __fastcall WarBoardData___c___CheckWinCond_b__98_0(WarBoardData___c_o *this, int32_t x, const MethodInfo *method)
{
  return x > 0;
}


void __fastcall WarBoardData___c___CreateEventBossUIDataTask_b__152_0(
        WarBoardData___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  WarBoardManager_o *v4; // x19

  if ( (byte_4BB240B & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4BB240B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1C13F80(0LL, v3);
  v4 = (WarBoardManager_o *)Instance;
  WarBoardManager__UpdateEventBossUIData((WarBoardManager_o *)Instance, 0LL);
  WarBoardManager__SaveEventBossUIData(
    v4,
    v4->fields._EventId_k__BackingField,
    v4->fields._StageId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


bool __fastcall WarBoardData___c___GetAliveEnemyServantPieces_b__110_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return !x->fields._isDead_k__BackingField
      && x->fields._forceId_k__BackingField
      && x->fields._type_k__BackingField == 0;
}


bool __fastcall WarBoardData___c___GetAlivePieces_b__107_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return !x->fields._isDead_k__BackingField;
}


bool __fastcall WarBoardData___c___GetAlivePlayerGroupServantPieces_b__109_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return !x->fields._isDead_k__BackingField
      && !x->fields._forceId_k__BackingField
      && !x->fields._groupId_k__BackingField
      && x->fields._type_k__BackingField == 0;
}


bool __fastcall WarBoardData___c___GetAliveServantPieces_b__108_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return !x->fields._isDead_k__BackingField && x->fields._type_k__BackingField == 0;
}


bool __fastcall WarBoardData___c___GetEditableServantPieces_b__120_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return !x->fields._forceId_k__BackingField
      && !x->fields._groupId_k__BackingField
      && x->fields._type_k__BackingField == 0;
}


bool __fastcall WarBoardData___c___GetHoldReinforcements_b__188_0(
        WarBoardData___c_o *this,
        HoldReinforcementsData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return x->fields._holdNum_k__BackingField < 1;
}


int32_t __fastcall WarBoardData___c___GetInRangeSquareIndecies_b__123_0(
        WarBoardData___c_o *this,
        WarBoardData_SquareRangeSearch_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return x->fields.squareIndex;
}


bool __fastcall WarBoardData___c___GetPlayerMasterPiece_b__104_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return !x->fields._forceId_k__BackingField
      && !x->fields._groupId_k__BackingField
      && x->fields._type_k__BackingField == 1;
}


bool __fastcall WarBoardData___c___GetPlayerPieces_b__121_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return !x->fields._forceId_k__BackingField
      && !x->fields._groupId_k__BackingField
      && x->fields._iconId_k__BackingField != 0;
}


bool __fastcall WarBoardData___c___IsReachableWinConditions_b__95_0(
        WarBoardData___c_o *this,
        System_Collections_Generic_KeyValuePair_int__bool__o status,
        const MethodInfo *method)
{
  bool value; // x19^4

  value = status.fields.value;
  if ( (byte_4BB240A & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__, status);
    byte_4BB240A = 1;
  }
  return value;
}


int32_t __fastcall WarBoardData___c___SetContinue_b__82_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return x->fields._index_k__BackingField;
}


BattleServantData_o *__fastcall WarBoardData___c___SetContinue_b__82_1(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return x->fields._battleServant_k__BackingField;
}


bool __fastcall WarBoardData___c___SetContinue_b__82_2(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return x->fields._isDead_k__BackingField && x->fields._battleServant_k__BackingField != 0LL;
}


int32_t __fastcall WarBoardData___c___SetContinue_b__82_3(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct BattleServantData_o *battleServant_k__BackingField; // x8

  if ( !x || (battleServant_k__BackingField = x->fields._battleServant_k__BackingField) == 0LL )
    sub_1C13F80(this, x);
  return battleServant_k__BackingField->fields.uniqueId;
}


void __fastcall WarBoardData___c___SetContinue_b__82_4(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  WarBoardPieceData__ProcContinue(x, (const MethodInfo *)x);
}


bool __fastcall WarBoardData___c___SetPlayerMasterUserEquip_b__144_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return !x->fields._forceId_k__BackingField
      && !x->fields._groupId_k__BackingField
      && x->fields._type_k__BackingField == 1;
}


void __fastcall WarBoardData___c___SetRequest_b__156_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  WarBoardPieceData__SetServarData(x, (const MethodInfo *)x);
}


System_String_o *__fastcall WarBoardData___c___SetRequest_b__156_1(
        WarBoardData___c_o *this,
        WarBoardItemData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return WarBoardItemData__ToJson(x, (const MethodInfo *)x);
}


bool __fastcall WarBoardData___c___SetRequest_b__156_2(
        WarBoardData___c_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  return !System_String__IsNullOrEmpty(x, 0LL);
}


WarBoardPieceBaseComponent_o *__fastcall WarBoardData___c___UpdateBuffTurnNoticeDisp_b__192_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *p,
        const MethodInfo *method)
{
  if ( !p )
    sub_1C13F80(this, 0LL);
  return p->fields.pieceComponent;
}


bool __fastcall WarBoardData___c___UpdateBuffTurnNoticeDisp_b__192_1(
        WarBoardData___c_o *this,
        WarBoardPieceBaseComponent_o *c,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x19

  if ( (byte_4BB240C & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, c);
    byte_4BB240C = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)c, 0LL, 0LL);
  if ( !v4 )
    return 0;
  if ( !c )
    sub_1C13F80(v4, v5);
  v6 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))c->klass->vtable._4_get_BuffTrunNotice.method)(
                                 c,
                                 c->klass->vtable._5_Initialize.methodPtr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
}


void __fastcall WarBoardData___c___UpdateBuffTurnNoticeDisp_b__192_2(
        WarBoardData___c_o *this,
        WarBoardPieceBaseComponent_o *n,
        const MethodInfo *method)
{
  if ( !n
    || (this = (WarBoardData___c_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer, const MethodInfo *))n->klass->vtable._4_get_BuffTrunNotice.method)(
                                       n,
                                       n->klass->vtable._5_Initialize.methodPtr,
                                       method)) == 0LL )
  {
    sub_1C13F80(this, n);
  }
  WarBoardServantPieceBuffTurnComponent__UpdateDisp((WarBoardServantPieceBuffTurnComponent_o *)this, 1, 0LL);
}


int32_t __fastcall WarBoardData___c___UpdateCurrentPartyCost_b__143_0(
        WarBoardData___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return UserServantEntity__getCost(x, 0LL);
}


bool __fastcall WarBoardData___c___get_PlayerMasterUserEquipId_b__62_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return !x->fields._forceId_k__BackingField
      && !x->fields._groupId_k__BackingField
      && x->fields._type_k__BackingField == 1;
}


void __fastcall WarBoardData___c__DisplayClass100_0___ctor(
        WarBoardData___c__DisplayClass100_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass100_0___GetPiece_b__0(
        WarBoardData___c__DisplayClass100_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !this->fields.ignoreDead )
  {
    if ( x )
      return x->fields._uniqueIndex_k__BackingField == this->fields.uniqueId;
LABEL_7:
    sub_1C13F80(this, x);
  }
  if ( !x )
    goto LABEL_7;
  if ( x->fields._isDead_k__BackingField )
    return 0;
  return x->fields._uniqueIndex_k__BackingField == this->fields.uniqueId;
}


void __fastcall WarBoardData___c__DisplayClass101_0___ctor(
        WarBoardData___c__DisplayClass101_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass101_0___GetPiece_b__0(
        WarBoardData___c__DisplayClass101_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return !x->fields._isDead_k__BackingField && x->fields._nowSquareIndex_k__BackingField == this->fields.squareIndex;
}


void __fastcall WarBoardData___c__DisplayClass102_0___ctor(
        WarBoardData___c__DisplayClass102_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass102_0___GetPiece_b__0(
        WarBoardData___c__DisplayClass102_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !this->fields.ignoreDead )
  {
    if ( x )
      return x->fields._uniqueIndex_k__BackingField == this->fields.uniqueIndex;
LABEL_7:
    sub_1C13F80(this, x);
  }
  if ( !x )
    goto LABEL_7;
  if ( x->fields._isDead_k__BackingField )
    return 0;
  return x->fields._uniqueIndex_k__BackingField == this->fields.uniqueIndex;
}


void __fastcall WarBoardData___c__DisplayClass105_0___ctor(
        WarBoardData___c__DisplayClass105_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass105_0___GetEventBossPiece_b__0(
        WarBoardData___c__DisplayClass105_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardUserServantData_o *serverServantData; // x8

  if ( !x || (serverServantData = x->fields.serverServantData) == 0LL )
    sub_1C13F80(this, x);
  return serverServantData->fields.stageBossIdx == this->fields.stageBossIndex;
}


void __fastcall WarBoardData___c__DisplayClass106_0___ctor(
        WarBoardData___c__DisplayClass106_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass106_0___GetServantPieces_b__0(
        WarBoardData___c__DisplayClass106_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  _BOOL4 v3; // w8

  if ( !x )
    sub_1C13F80(this, 0LL);
  if ( x->fields._forceId_k__BackingField )
    v3 = 0;
  else
    v3 = x->fields._groupId_k__BackingField == 0;
  return this->fields.isPlayerGroup == v3 && !x->fields._type_k__BackingField && x->fields._iconId_k__BackingField != 0;
}


void __fastcall WarBoardData___c__DisplayClass116_0___ctor(
        WarBoardData___c__DisplayClass116_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass116_0___GetPieces_b__0(
        WarBoardData___c__DisplayClass116_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return this->fields.forceIdOnly == HIBYTE(x->fields._uniqueIndex_k__BackingField) << 24;
}


void __fastcall WarBoardData___c__DisplayClass117_0___ctor(
        WarBoardData___c__DisplayClass117_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass117_0___GetPieces_b__0(
        WarBoardData___c__DisplayClass117_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return this->fields.forceAndGroup == HIWORD(x->fields._uniqueIndex_k__BackingField) << 16;
}


void __fastcall WarBoardData___c__DisplayClass118_0___ctor(
        WarBoardData___c__DisplayClass118_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass118_0___GetPicesForRange_b__0(
        WarBoardData___c__DisplayClass118_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass118_0_o *v4; // x20

  v4 = this;
  if ( (byte_4BB240D & 1) == 0 )
  {
    this = (WarBoardData___c__DisplayClass118_0_o *)sub_1C13D24(&Method_System_Linq_Enumerable_Contains_int___, x);
    byte_4BB240D = 1;
  }
  if ( !x )
    sub_1C13F80(this, x);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.inRangeSquaers,
           x->fields._nowSquareIndex_k__BackingField,
           (const MethodInfo_2FA7350 *)Method_System_Linq_Enumerable_Contains_int___);
}


void __fastcall WarBoardData___c__DisplayClass119_0___ctor(
        WarBoardData___c__DisplayClass119_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass119_0___GetPicesForRangeIsAlive_b__0(
        WarBoardData___c__DisplayClass119_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass119_0_o *v4; // x20

  v4 = this;
  if ( (byte_4BB240E & 1) == 0 )
  {
    this = (WarBoardData___c__DisplayClass119_0_o *)sub_1C13D24(&Method_System_Linq_Enumerable_Contains_int___, x);
    byte_4BB240E = 1;
  }
  if ( !x )
    sub_1C13F80(this, x);
  return !x->fields._isDead_k__BackingField
      && System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.inRangeSquaers,
           x->fields._nowSquareIndex_k__BackingField,
           (const MethodInfo_2FA7350 *)Method_System_Linq_Enumerable_Contains_int___);
}


void __fastcall WarBoardData___c__DisplayClass123_0___ctor(
        WarBoardData___c__DisplayClass123_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass123_0___GetInRangeSquareIndecies_b__1(
        WarBoardData___c__DisplayClass123_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  _BOOL4 ignoreStart; // w9
  bool result; // w0

  ignoreStart = this->fields.ignoreStart;
  result = !this->fields.ignoreStart;
  if ( ignoreStart && this->fields.start != x )
    return 1;
  return result;
}


void __fastcall WarBoardData___c__DisplayClass125_0___ctor(
        WarBoardData___c__DisplayClass125_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass125_0___SearchInRangeSquares_b__0(
        WarBoardData___c__DisplayClass125_0_o *this,
        WarBoardData_SquareRangeSearch_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return x->fields.squareIndex == this->fields.start;
}


void __fastcall WarBoardData___c__DisplayClass125_1___ctor(
        WarBoardData___c__DisplayClass125_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass125_1___SearchInRangeSquares_b__1(
        WarBoardData___c__DisplayClass125_1_o *this,
        WarBoardData_SquareRangeSearch_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return x->fields.squareIndex != this->fields.position;
}


bool __fastcall WarBoardData___c__DisplayClass125_1___SearchInRangeSquares_b__2(
        WarBoardData___c__DisplayClass125_1_o *this,
        WarBoardData_SquareRangeSearch_o *x,
        const MethodInfo *method)
{
  struct WarBoardData___c__DisplayClass125_0_o *CS___8__locals1; // x8

  if ( !x )
    goto LABEL_6;
  if ( x->fields.squareIndex == this->fields.position )
  {
    CS___8__locals1 = this->fields.CS___8__locals1;
    if ( CS___8__locals1 )
      return x->fields.range < CS___8__locals1->fields.nextRange;
LABEL_6:
    sub_1C13F80(this, x);
  }
  return 0;
}


void __fastcall WarBoardData___c__DisplayClass128_0___ctor(
        WarBoardData___c__DisplayClass128_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass128_0___GetSquare_b__0(
        WarBoardData___c__DisplayClass128_0_o *this,
        WarBoardSquareData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return x->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


void __fastcall WarBoardData___c__DisplayClass130_0___ctor(
        WarBoardData___c__DisplayClass130_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass130_0___GetCondSquare_b__0(
        WarBoardData___c__DisplayClass130_0_o *this,
        WarBoardSquareData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return x->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


void __fastcall WarBoardData___c__DisplayClass133_0___ctor(
        WarBoardData___c__DisplayClass133_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass133_0___GetDeploySquareIds_b__0(
        WarBoardData___c__DisplayClass133_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.value == x;
}


bool __fastcall WarBoardData___c__DisplayClass133_0___GetDeploySquareIds_b__1(
        WarBoardData___c__DisplayClass133_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.value == x;
}


void __fastcall WarBoardData___c__DisplayClass135_0___ctor(
        WarBoardData___c__DisplayClass135_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass135_0___GetItem_b__0(
        WarBoardData___c__DisplayClass135_0_o *this,
        WarBoardItemData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return x->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


void __fastcall WarBoardData___c__DisplayClass137_0___ctor(
        WarBoardData___c__DisplayClass137_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass137_0___GetTreasure_b__0(
        WarBoardData___c__DisplayClass137_0_o *this,
        WarBoardTreasureData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return x->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


void __fastcall WarBoardData___c__DisplayClass138_0___ctor(
        WarBoardData___c__DisplayClass138_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass138_0___GetUnusedTreasure_b__0(
        WarBoardData___c__DisplayClass138_0_o *this,
        WarBoardTreasureData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return !x->fields._isUse_k__BackingField && x->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


void __fastcall WarBoardData___c__DisplayClass140_0___ctor(
        WarBoardData___c__DisplayClass140_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass140_0___GetWall_b__0(
        WarBoardData___c__DisplayClass140_0_o *this,
        WarBoardWallData_o *x,
        const MethodInfo *method)
{
  if ( this->fields.ignoreDestroy )
  {
    if ( x )
      return x->fields._squareIndex_k__BackingField == this->fields.squareIndex;
LABEL_7:
    sub_1C13F80(this, x);
  }
  if ( !x )
    goto LABEL_7;
  if ( !x->fields._isDestroy_k__BackingField )
    return x->fields._squareIndex_k__BackingField == this->fields.squareIndex;
  return 0;
}


void __fastcall WarBoardData___c__DisplayClass142_0___ctor(
        WarBoardData___c__DisplayClass142_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass142_0___GetEffect_b__0(
        WarBoardData___c__DisplayClass142_0_o *this,
        WarBoardEffectData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return x->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


void __fastcall WarBoardData___c__DisplayClass143_0___ctor(
        WarBoardData___c__DisplayClass143_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass143_0___UpdateCurrentPartyCost_b__1(
        WarBoardData___c__DisplayClass143_0_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass143_0_o *v4; // x20
  __int64 v5; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *svtMaster; // x20
  __int64 v7; // x19
  __int64 v8; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v4 = this;
  if ( (byte_4BB240F & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, x);
    this = (WarBoardData___c__DisplayClass143_0_o *)sub_1C13D24(
                                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                      v5);
    byte_4BB240F = 1;
  }
  if ( !x )
    goto LABEL_9;
  svtMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields.svtMaster;
  v8 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  this = (WarBoardData___c__DisplayClass143_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                                    v10,
                                                    0LL);
  if ( !svtMaster
    || (this = (WarBoardData___c__DisplayClass143_0_o *)DataMasterBase_object__object__int___GetEntity(
                                                          svtMaster,
                                                          (int32_t)this,
                                                          (const MethodInfo_3238624 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1C13F80(this, x);
  }
  return ServantEntity__get_IsServant((ServantEntity_o *)this, 0LL);
}


void __fastcall WarBoardData___c__DisplayClass145_0___ctor(
        WarBoardData___c__DisplayClass145_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass145_0___GetPieceDispPriority_b__0(
        WarBoardData___c__DisplayClass145_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *piece; // x8

  if ( !x || (piece = this->fields.piece) == 0LL )
    sub_1C13F80(this, x);
  return x->fields._uniqueIndex_k__BackingField == piece->fields._uniqueIndex_k__BackingField;
}


void __fastcall WarBoardData___c__DisplayClass151_0___ctor(
        WarBoardData___c__DisplayClass151_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass151_0___UpdateFromServerData_b__0(
        WarBoardData___c__DisplayClass151_0_o *this,
        WarBoardUserWallData_o *x,
        const MethodInfo *method)
{
  struct WarBoardWallData_o *wall; // x8

  if ( !x || (wall = this->fields.wall) == 0LL )
    sub_1C13F80(this, x);
  return x->fields.id == wall->fields._wallId_k__BackingField;
}


void __fastcall WarBoardData___c__DisplayClass153_0___ctor(
        WarBoardData___c__DisplayClass153_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass153_0___GetStageBossData_b__0(
        WarBoardData___c__DisplayClass153_0_o *this,
        WarBoardUserServantData_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C13F80(this, 0LL);
  return n->fields.stageBossIdx == this->fields.stageBossIdx;
}


void __fastcall WarBoardData___c__DisplayClass154_0___ctor(
        WarBoardData___c__DisplayClass154_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass154_0___ShowConsumedPieceActionPointPopup_b__0(
        WarBoardData___c__DisplayClass154_0_o *this,
        const MethodInfo *method)
{
  return this->fields.consumedPiecePopupClose;
}


void __fastcall WarBoardData___c__DisplayClass154_0___ShowConsumedPieceActionPointPopup_b__1(
        WarBoardData___c__DisplayClass154_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Instance; // x0
  System_Action_bool__o *_9__2; // x21
  WarBoardManager_o *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int32_t key; // w0
  struct System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___o *consumedPieceActionPointDict; // x8
  int32_t v20; // w19
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *Only; // x0
  Il2CppObject *value; // x1
  System_Collections_Generic_KeyValuePair_int__object__o KeyValuePair_int__object; // kr00_16

  if ( (byte_4BB2410 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_bool__TypeInfo, method);
    sub_1C13D24(&Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____, v3);
    sub_1C13D24(&Method_System_Collections_Generic_KeyValuePair_int__List_WarBoardPieceData___get_Key__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_KeyValuePair_int__List_WarBoardPieceData___get_Value__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardPieceData__AsReadOnly__, v6);
    sub_1C13D24(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__2__, v8);
    byte_4BB2410 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  _9__2 = this->fields.__9__2;
  v11 = (WarBoardManager_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_bool__o *)sub_1C13F70(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v12, v13, v14, v15, v16, v17);
  }
  key = System_Linq_Enumerable__First_KeyValuePair_int__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.consumedPieceActionPointDict,
          (const MethodInfo_2FAF0B4 *)Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____).fields.key;
  consumedPieceActionPointDict = this->fields.consumedPieceActionPointDict;
  v20 = key;
  KeyValuePair_int__object = System_Linq_Enumerable__First_KeyValuePair_int__object__(
                               (System_Collections_Generic_IEnumerable_TSource__o *)consumedPieceActionPointDict,
                               (const MethodInfo_2FAF0B4 *)Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____);
  value = KeyValuePair_int__object.fields.value;
  Only = *(System_Collections_ObjectModel_ReadOnlyCollection_T__o **)&KeyValuePair_int__object.fields.key;
  if ( !KeyValuePair_int__object.fields.value
    || (Only = System_Collections_Generic_List_object___AsReadOnly(
                 (System_Collections_Generic_List_object__o *)KeyValuePair_int__object.fields.value,
                 (const MethodInfo_362D3F4 *)Method_System_Collections_Generic_List_WarBoardPieceData__AsReadOnly__),
        !v11) )
  {
    sub_1C13F80(Only, value);
  }
  WarBoardManager__ShowConsumedPieceActionPointPopup(
    v11,
    _9__2,
    v20,
    (System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__o *)Only,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardData___c__DisplayClass154_0___ShowConsumedPieceActionPointPopup_b__2(
        WarBoardData___c__DisplayClass154_0_o *this,
        bool _,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  System_Action_o *_9__3; // x22
  WarBoardManager_o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4BB2411 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, _);
    sub_1C13D24(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    sub_1C13D24(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__3__, v5);
    byte_4BB2411 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  _9__3 = this->fields.__9__3;
  v9 = (WarBoardManager_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.__9__3, (int64_t)_9__3, v10, v11, v12, v13, v14, v15);
  }
  if ( !v9 )
    sub_1C13F80(Instance, v7);
  WarBoardManager__HideConsumedPieceActionPointPopup(v9, _9__3, 0LL);
}


void __fastcall WarBoardData___c__DisplayClass154_0___ShowConsumedPieceActionPointPopup_b__3(
        WarBoardData___c__DisplayClass154_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___o *consumedPieceActionPointDict; // x20
  WarBoardData_o *_4__this; // x0
  Il2CppObject *value; // x1
  System_Collections_Generic_KeyValuePair_int__object__o KeyValuePair_int__object; // kr00_16

  if ( (byte_4BB2412 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Remove__, method);
    sub_1C13D24(&Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____, v3);
    sub_1C13D24(&Method_System_Collections_Generic_KeyValuePair_int__List_WarBoardPieceData___get_Key__, v4);
    byte_4BB2412 = 1;
  }
  this->fields.consumedPiecePopupClose = 1;
  consumedPieceActionPointDict = this->fields.consumedPieceActionPointDict;
  KeyValuePair_int__object = System_Linq_Enumerable__First_KeyValuePair_int__object__(
                               (System_Collections_Generic_IEnumerable_TSource__o *)consumedPieceActionPointDict,
                               (const MethodInfo_2FAF0B4 *)Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____);
  value = KeyValuePair_int__object.fields.value;
  _4__this = *(WarBoardData_o **)&KeyValuePair_int__object.fields.key;
  if ( !consumedPieceActionPointDict
    || (System_Collections_Generic_Dictionary_int__object___Remove(
          (System_Collections_Generic_Dictionary_int__object__o *)consumedPieceActionPointDict,
          KeyValuePair_int__object.fields.key,
          (const MethodInfo_3293730 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Remove__),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_1C13F80(_4__this, value);
  }
  WarBoardData__ShowConsumedPieceActionPointPopup(_4__this, this->fields.consumedPieceActionPointDict, 0LL);
}


void __fastcall WarBoardData___c__DisplayClass164_0___ctor(
        WarBoardData___c__DisplayClass164_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass164_0___GetPlayedEventData_b__0(
        WarBoardData___c__DisplayClass164_0_o *this,
        WarBoardEventData_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C13F80(this, 0LL);
  return a->fields._eventId_k__BackingField == this->fields.eventId;
}


void __fastcall WarBoardData___c__DisplayClass171_0___ctor(
        WarBoardData___c__DisplayClass171_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass171_0___UpdateBossInfo_b__0(
        WarBoardData___c__DisplayClass171_0_o *this,
        WarBoardBossBattleData_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C13F80(this, 0LL);
  return n->fields.bossIdx == this->fields.bossId;
}


void __fastcall WarBoardData___c__DisplayClass172_0___ctor(
        WarBoardData___c__DisplayClass172_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass172_0___IsBossInfo_b__0(
        WarBoardData___c__DisplayClass172_0_o *this,
        WarBoardBossBattleData_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C13F80(this, 0LL);
  return n->fields.bossIdx == this->fields.bossId;
}


void __fastcall WarBoardData___c__DisplayClass173_0___ctor(
        WarBoardData___c__DisplayClass173_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass173_0___AddSquareInfo_b__0(
        WarBoardData___c__DisplayClass173_0_o *this,
        WarBoardSquareIndexData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return x->fields.squareIndex == this->fields.squareIndex;
}


void __fastcall WarBoardData___c__DisplayClass174_0___ctor(
        WarBoardData___c__DisplayClass174_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass174_0___DelSquareInfo_b__0(
        WarBoardData___c__DisplayClass174_0_o *this,
        WarBoardSquareIndexData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return x->fields.squareIndex == this->fields.squareIndex;
}


void __fastcall WarBoardData___c__DisplayClass183_0___ctor(
        WarBoardData___c__DisplayClass183_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass183_0___GetClearedTurn_b__0(
        WarBoardData___c__DisplayClass183_0_o *this,
        WarBoardPrevCondData_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C13F80(this, 0LL);
  return a->fields._condId_k__BackingField == this->fields.condId;
}


void __fastcall WarBoardData___c__DisplayClass187_0___ctor(
        WarBoardData___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass187_0___SaveHoldReinforcements_b__0(
        WarBoardData___c__DisplayClass187_0_o *this,
        HoldReinforcementsData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return x->fields._id_k__BackingField == this->fields.stageReinforcementsId
      && x->fields._index_k__BackingField == this->fields.index;
}


void __fastcall WarBoardData___c__DisplayClass188_0___ctor(
        WarBoardData___c__DisplayClass188_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass188_0___GetHoldReinforcements_b__1(
        WarBoardData___c__DisplayClass188_0_o *this,
        HoldReinforcementsData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return x->fields._id_k__BackingField == this->fields.targetStageReinforcementsId;
}


void __fastcall WarBoardData___c__DisplayClass188_1___ctor(
        WarBoardData___c__DisplayClass188_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass188_1___GetHoldReinforcements_b__2(
        WarBoardData___c__DisplayClass188_1_o *this,
        ReinforcementsData_o *x,
        const MethodInfo *method)
{
  struct HoldReinforcementsData_o *pram; // x8

  if ( !x || (pram = this->fields.pram) == 0LL )
    sub_1C13F80(this, x);
  return x->fields.stageReinforcementId == pram->fields._id_k__BackingField;
}


void __fastcall WarBoardData___c__DisplayClass189_0___ctor(
        WarBoardData___c__DisplayClass189_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass189_0___GetReinforcements_b__0(
        WarBoardData___c__DisplayClass189_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct WarBoardStageReinforcementsEntity_o *stageEntity; // x8

  stageEntity = this->fields.stageEntity;
  if ( !stageEntity )
    sub_1C13F80(this, x);
  return stageEntity->fields.id == x;
}


void __fastcall WarBoardData___c__DisplayClass189_1___ctor(
        WarBoardData___c__DisplayClass189_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass189_1___GetReinforcements_b__1(
        WarBoardData___c__DisplayClass189_1_o *this,
        ReinforcementsData_o *x,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass189_1_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  struct WarBoardData___c__DisplayClass189_0_o *CS___8__locals1; // x8
  struct WarBoardStageReinforcementsEntity_o *stageEntity; // x8
  System_Int32_array *reinforcementsIdx; // x20
  System_Func_int__bool__o *_9__2; // x22
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  v4 = this;
  if ( (byte_4BB2413 & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_Any_int____77470256, x);
    sub_1C13D24(&System_Func_int__bool__TypeInfo, v5);
    this = (WarBoardData___c__DisplayClass189_1_o *)sub_1C13D24(
                                                      &Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__2__,
                                                      v6);
    byte_4BB2413 = 1;
  }
  if ( !x
    || (CS___8__locals1 = v4->fields.CS___8__locals1) == 0LL
    || (stageEntity = CS___8__locals1->fields.stageEntity) == 0LL )
  {
    sub_1C13F80(this, x);
  }
  if ( x->fields.stageReinforcementId != stageEntity->fields.id )
    return 0;
  reinforcementsIdx = x->fields.reinforcementsIdx;
  _9__2 = v4->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Func_int__bool__o *)sub_1C13F70(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__2,
      (Il2CppObject *)v4,
      Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__2__,
      0LL);
    v4->fields.__9__2 = _9__2;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v4->fields.__9__2, (int64_t)_9__2, v11, v12, v13, v14, v15, v16);
  }
  return BasicHelper__Any_int__49783128(
           reinforcementsIdx,
           (System_Func_T__bool__o *)_9__2,
           (const MethodInfo_2F7A158 *)Method_BasicHelper_Any_int____77470256);
}


bool __fastcall WarBoardData___c__DisplayClass189_1___GetReinforcements_b__2(
        WarBoardData___c__DisplayClass189_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.i == x;
}


void __fastcall WarBoardData___c__DisplayClass190_0___ctor(
        WarBoardData___c__DisplayClass190_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass190_0___IsReinforcementsApper_b__0(
        WarBoardData___c__DisplayClass190_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct WarBoardStageReinforcementsEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1C13F80(this, x);
  return entity->fields.id == x;
}


void __fastcall WarBoardData___c__DisplayClass193_0___ctor(
        WarBoardData___c__DisplayClass193_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass193_0___GetUiData_b__0(
        WarBoardData___c__DisplayClass193_0_o *this,
        WarBoardUiData_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C13F80(this, 0LL);
  return a->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


void __fastcall WarBoardData___c__DisplayClass194_0___ctor(
        WarBoardData___c__DisplayClass194_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass194_0___GetUiData_b__0(
        WarBoardData___c__DisplayClass194_0_o *this,
        WarBoardUiData_o *a,
        const MethodInfo *method)
{
  struct System_Int32_array *pieceIndex_k__BackingField; // x8
  unsigned int max_length; // w10
  struct System_Int32_array *pieceIndex; // x9
  unsigned int v6; // w11

  if ( !a )
    goto LABEL_15;
  pieceIndex_k__BackingField = a->fields._pieceIndex_k__BackingField;
  if ( !pieceIndex_k__BackingField )
    return 0;
  max_length = pieceIndex_k__BackingField->max_length;
  if ( !max_length )
    goto LABEL_14;
  pieceIndex = this->fields.pieceIndex;
  if ( !pieceIndex )
LABEL_15:
    sub_1C13F80(this, a);
  v6 = pieceIndex->max_length;
  if ( !v6 )
    goto LABEL_14;
  if ( pieceIndex_k__BackingField->m_Items[1] == pieceIndex->m_Items[1] )
  {
    if ( max_length <= 1 || v6 <= 1 )
      goto LABEL_14;
    if ( pieceIndex_k__BackingField->m_Items[2] == pieceIndex->m_Items[2] )
    {
      if ( max_length > 2 && v6 > 2 )
        return pieceIndex_k__BackingField->m_Items[3] == pieceIndex->m_Items[3];
LABEL_14:
      sub_1C13F88(this, a);
    }
  }
  return 0;
}


void __fastcall WarBoardData___c__DisplayClass77_0___ctor(
        WarBoardData___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass77_0____ctor_b__5(
        WarBoardData___c__DisplayClass77_0_o *this,
        WarBoardUserMasterData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_SaveData_o *piece; // x8

  if ( !x || (piece = this->fields.piece) == 0LL )
    sub_1C13F80(this, x);
  return x->fields.forceId == piece->fields.forceId && x->fields.groupId == piece->fields.groupId;
}


bool __fastcall WarBoardData___c__DisplayClass77_0____ctor_b__6(
        WarBoardData___c__DisplayClass77_0_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_SaveData_o *piece; // x8

  if ( !x || (piece = this->fields.piece) == 0LL )
    sub_1C13F80(this, x);
  return x->fields.forceId == piece->fields.forceId
      && x->fields.groupId == piece->fields.groupId
      && x->fields.pieceIndex == piece->fields.pieceIndex;
}


void __fastcall WarBoardData___c__DisplayClass77_1___ctor(
        WarBoardData___c__DisplayClass77_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass77_1____ctor_b__7(
        WarBoardData___c__DisplayClass77_1_o *this,
        WarBoardUserGetItemData_o *x,
        const MethodInfo *method)
{
  struct WarBoardItemData_SaveData_o *item; // x8

  if ( !x || (item = this->fields.item) == 0LL )
    sub_1C13F80(this, x);
  return x->fields.pieceIndex == item->fields.pieceIndex;
}


void __fastcall WarBoardData___c__DisplayClass77_2___ctor(
        WarBoardData___c__DisplayClass77_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass77_2____ctor_b__8(
        WarBoardData___c__DisplayClass77_2_o *this,
        WarBoardUserTreasureData_o *x,
        const MethodInfo *method)
{
  struct WarBoardTreasureData_SaveData_o *treasure; // x8

  if ( !x || (treasure = this->fields.treasure) == 0LL )
    sub_1C13F80(this, x);
  return x->fields.treasureId == treasure->fields.treasureId;
}


void __fastcall WarBoardData___c__DisplayClass77_3___ctor(
        WarBoardData___c__DisplayClass77_3_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass77_3____ctor_b__10(
        WarBoardData___c__DisplayClass77_3_o *this,
        WarBoardUserWallData_o *x,
        const MethodInfo *method)
{
  struct WarBoardWallData_SaveData_o *wall; // x8

  if ( !x || (wall = this->fields.wall) == 0LL )
    sub_1C13F80(this, x);
  return x->fields.id == wall->fields.wallId && wall->fields.squareIndex == x->fields.beforeSquareIndex;
}


void __fastcall WarBoardData___c__DisplayClass77_4___ctor(
        WarBoardData___c__DisplayClass77_4_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass77_4____ctor_b__11(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserTreasureData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0LL )
    sub_1C13F80(this, x);
  return x->fields.treasureId == layout->fields.effectId;
}


bool __fastcall WarBoardData___c__DisplayClass77_4____ctor_b__12(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserMasterData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0LL )
    sub_1C13F80(this, x);
  return x->fields.forceId == layout->fields.forceId && x->fields.groupId == layout->fields.groupId;
}


bool __fastcall WarBoardData___c__DisplayClass77_4____ctor_b__13(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0LL )
    sub_1C13F80(this, x);
  return x->fields.forceId == layout->fields.forceId
      && x->fields.groupId == layout->fields.groupId
      && x->fields.pieceIndex == layout->fields.pieceIndex;
}


bool __fastcall WarBoardData___c__DisplayClass77_4____ctor_b__14(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserGetItemData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0LL )
    sub_1C13F80(this, x);
  return x->fields.squareIndex == layout->fields.squareIndex;
}


bool __fastcall WarBoardData___c__DisplayClass77_4____ctor_b__15(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserWallData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0LL )
    sub_1C13F80(this, x);
  return x->fields.id == layout->fields.effectId;
}


void __fastcall WarBoardData___c__DisplayClass77_5___ctor(
        WarBoardData___c__DisplayClass77_5_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass77_5____ctor_b__16(
        WarBoardData___c__DisplayClass77_5_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_SaveData_o *piece; // x8

  if ( !x || (piece = this->fields.piece) == 0LL )
    sub_1C13F80(this, x);
  return x->fields._forceId_k__BackingField == piece->fields.forceId
      && x->fields._groupId_k__BackingField == piece->fields.groupId
      && x->fields._index_k__BackingField == piece->fields.pieceIndex;
}


bool __fastcall WarBoardData___c__DisplayClass77_5____ctor_b__17(
        WarBoardData___c__DisplayClass77_5_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_SaveData_o *piece; // x8

  if ( !x || (piece = this->fields.piece) == 0LL )
    sub_1C13F80(this, x);
  return x->fields.forceId == piece->fields.forceId
      && x->fields.groupId == piece->fields.groupId
      && x->fields.pieceIndex == piece->fields.pieceIndex;
}


void __fastcall WarBoardData___c__DisplayClass99_0___ctor(
        WarBoardData___c__DisplayClass99_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass99_0___GetPiecePosition_b__0(
        WarBoardData___c__DisplayClass99_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return !x->fields._isDead_k__BackingField && x->fields._uniqueIndex_k__BackingField == this->fields.uniqueId;
}