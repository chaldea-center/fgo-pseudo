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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int64_t v12; // x1
  struct WarBoardData_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B13E58 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardData_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_2051/*"AFTER_CONTINUE_DEVICE_FOR_WARBOARD"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_15550/*"WARBOARDDATA_SAVEDATA"*/, v10, v11);
    byte_4B13E58 = 1;
  }
  WarBoardData_TypeInfo->static_fields->WARBOARDDATA_SAVEDATA_KEY = (struct System_String_o *)StringLiteral_15550/*"WARBOARDDATA_SAVEDATA"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarBoardData_TypeInfo->static_fields,
    StringLiteral_15550/*"WARBOARDDATA_SAVEDATA"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = StringLiteral_2051/*"AFTER_CONTINUE_DEVICE_FOR_WARBOARD"*/;
  static_fields = WarBoardData_TypeInfo->static_fields;
  static_fields->AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY = (struct System_String_o *)StringLiteral_2051/*"AFTER_CONTINUE_DEVICE_FOR_WARBOARD"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY,
    v12,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x1
  __int64 v95; // x2
  __int64 v96; // x1
  __int64 v97; // x2
  __int64 v98; // x1
  __int64 v99; // x2
  __int64 v100; // x1
  __int64 v101; // x2
  __int64 v102; // x1
  __int64 v103; // x2
  __int64 v104; // x1
  __int64 v105; // x2
  __int64 v106; // x1
  __int64 v107; // x2
  __int64 v108; // x1
  __int64 v109; // x2
  __int64 v110; // x1
  __int64 v111; // x2
  __int64 v112; // x1
  __int64 v113; // x2
  __int64 v114; // x1
  __int64 v115; // x2
  __int64 v116; // x1
  __int64 v117; // x2
  __int64 v118; // x1
  __int64 v119; // x2
  __int64 v120; // x1
  __int64 v121; // x2
  __int64 v122; // x1
  __int64 v123; // x2
  __int64 v124; // x1
  __int64 v125; // x2
  __int64 v126; // x1
  __int64 v127; // x2
  __int64 v128; // x1
  __int64 v129; // x2
  __int64 v130; // x1
  __int64 v131; // x2
  __int64 v132; // x1
  __int64 v133; // x2
  __int64 v134; // x1
  __int64 v135; // x2
  __int64 v136; // x1
  __int64 v137; // x2
  __int64 v138; // x1
  __int64 v139; // x2
  __int64 v140; // x1
  __int64 v141; // x2
  __int64 v142; // x1
  __int64 v143; // x2
  __int64 v144; // x1
  __int64 v145; // x2
  __int64 v146; // x1
  __int64 v147; // x2
  __int64 v148; // x1
  __int64 v149; // x2
  __int64 v150; // x1
  __int64 v151; // x2
  __int64 v152; // x1
  __int64 v153; // x2
  __int64 v154; // x1
  __int64 v155; // x2
  __int64 v156; // x1
  __int64 v157; // x2
  __int64 v158; // x1
  __int64 v159; // x2
  __int64 v160; // x1
  __int64 v161; // x2
  __int64 v162; // x1
  __int64 v163; // x2
  __int64 v164; // x1
  __int64 v165; // x2
  __int64 v166; // x1
  __int64 v167; // x2
  __int64 v168; // x1
  __int64 v169; // x2
  __int64 v170; // x1
  __int64 v171; // x2
  __int64 v172; // x1
  __int64 v173; // x2
  __int64 v174; // x1
  __int64 v175; // x2
  __int64 v176; // x1
  __int64 v177; // x2
  __int64 v178; // x1
  __int64 v179; // x2
  __int64 v180; // x1
  __int64 v181; // x2
  __int64 v182; // x1
  __int64 v183; // x2
  __int64 v184; // x1
  __int64 v185; // x2
  __int64 v186; // x1
  __int64 v187; // x2
  __int64 v188; // x1
  __int64 v189; // x2
  __int64 v190; // x1
  __int64 v191; // x2
  __int64 v192; // x1
  __int64 v193; // x2
  __int64 v194; // x1
  __int64 v195; // x2
  __int64 v196; // x1
  __int64 v197; // x2
  __int64 v198; // x1
  __int64 v199; // x2
  __int64 v200; // x1
  __int64 v201; // x2
  __int64 v202; // x1
  __int64 v203; // x2
  __int64 v204; // x1
  __int64 v205; // x2
  __int64 v206; // x1
  __int64 v207; // x2
  __int64 v208; // x1
  __int64 v209; // x2
  __int64 v210; // x1
  __int64 v211; // x2
  __int64 v212; // x1
  __int64 v213; // x2
  __int64 v214; // x1
  __int64 v215; // x2
  __int64 v216; // x1
  __int64 v217; // x2
  __int64 v218; // x1
  __int64 v219; // x2
  __int64 v220; // x1
  __int64 v221; // x2
  __int64 v222; // x1
  __int64 v223; // x2
  __int64 v224; // x1
  __int64 v225; // x2
  __int64 v226; // x1
  __int64 v227; // x2
  __int64 v228; // x1
  __int64 v229; // x2
  __int64 v230; // x1
  __int64 v231; // x2
  __int64 v232; // x1
  __int64 v233; // x2
  __int64 v234; // x1
  __int64 v235; // x2
  __int64 v236; // x1
  __int64 v237; // x2
  __int64 v238; // x1
  __int64 v239; // x2
  __int64 v240; // x1
  __int64 v241; // x2
  __int64 v242; // x1
  __int64 v243; // x2
  __int64 v244; // x1
  __int64 v245; // x2
  __int64 v246; // x1
  __int64 v247; // x2
  __int64 v248; // x1
  __int64 v249; // x2
  __int64 v250; // x1
  __int64 v251; // x2
  __int64 v252; // x1
  __int64 v253; // x2
  __int64 v254; // x1
  __int64 v255; // x2
  __int64 v256; // x1
  __int64 v257; // x2
  __int64 v258; // x1
  __int64 v259; // x2
  __int64 v260; // x1
  __int64 v261; // x2
  __int64 v262; // x1
  __int64 v263; // x2
  __int64 v264; // x1
  __int64 v265; // x2
  System_Collections_Generic_Dictionary_object__object__o *v266; // x19
  int64_t v267; // x2
  int32_t v268; // w3
  System_String_o *v269; // x4
  BattleSetupInfo_o *v270; // x5
  FollowerInfo_o *v271; // x6
  PartyListViewItem_o *v272; // x7
  __int64 v273; // x1
  __int64 v274; // x2
  __int64 v275; // x3
  System_Collections_Generic_List_object__o *v276; // x19
  int64_t v277; // x2
  int32_t v278; // w3
  System_String_o *v279; // x4
  BattleSetupInfo_o *v280; // x5
  FollowerInfo_o *v281; // x6
  PartyListViewItem_o *v282; // x7
  struct System_Int32_array *v283; // x0
  int64_t v284; // x2
  int32_t v285; // w3
  System_String_o *v286; // x4
  BattleSetupInfo_o *v287; // x5
  FollowerInfo_o *v288; // x6
  PartyListViewItem_o *v289; // x7
  struct System_UInt32_array *v290; // x0
  int64_t v291; // x2
  int32_t v292; // w3
  System_String_o *v293; // x4
  BattleSetupInfo_o *v294; // x5
  FollowerInfo_o *v295; // x6
  PartyListViewItem_o *v296; // x7
  __int64 v297; // x1
  __int64 v298; // x2
  __int64 v299; // x3
  System_Collections_Generic_List_object__o *v300; // x19
  int64_t v301; // x2
  int32_t v302; // w3
  System_String_o *v303; // x4
  BattleSetupInfo_o *v304; // x5
  FollowerInfo_o *v305; // x6
  PartyListViewItem_o *v306; // x7
  __int64 v307; // x1
  __int64 v308; // x2
  __int64 v309; // x3
  System_Collections_Generic_List_object__o *v310; // x19
  int64_t v311; // x2
  int32_t v312; // w3
  System_String_o *v313; // x4
  BattleSetupInfo_o *v314; // x5
  FollowerInfo_o *v315; // x6
  PartyListViewItem_o *v316; // x7
  __int64 v317; // x1
  __int64 v318; // x2
  __int64 v319; // x3
  System_Collections_Generic_List_int__o *v320; // x19
  int64_t v321; // x2
  int32_t v322; // w3
  System_String_o *v323; // x4
  BattleSetupInfo_o *v324; // x5
  FollowerInfo_o *v325; // x6
  PartyListViewItem_o *v326; // x7
  __int64 v327; // x1
  __int64 v328; // x2
  __int64 v329; // x3
  System_Collections_Generic_List_object__o *v330; // x19
  int64_t v331; // x2
  int32_t v332; // w3
  System_String_o *v333; // x4
  BattleSetupInfo_o *v334; // x5
  FollowerInfo_o *v335; // x6
  PartyListViewItem_o *v336; // x7
  __int64 v337; // x1
  __int64 v338; // x2
  __int64 v339; // x3
  System_Collections_Generic_List_int__o *v340; // x19
  int64_t v341; // x2
  int32_t v342; // w3
  System_String_o *v343; // x4
  BattleSetupInfo_o *v344; // x5
  FollowerInfo_o *v345; // x6
  PartyListViewItem_o *v346; // x7
  __int64 v347; // x1
  __int64 v348; // x2
  __int64 v349; // x3
  System_Collections_Generic_List_int__o *v350; // x19
  int64_t v351; // x2
  int32_t v352; // w3
  System_String_o *v353; // x4
  BattleSetupInfo_o *v354; // x5
  FollowerInfo_o *v355; // x6
  PartyListViewItem_o *v356; // x7
  __int64 v357; // x1
  __int64 v358; // x2
  __int64 v359; // x3
  WarBoardData___c_c *v360; // x0
  System_Comparison_T__o *_9__77_0; // x19
  Il2CppObject *v362; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int64_t v364; // x2
  int32_t v365; // w3
  System_String_o *v366; // x4
  BattleSetupInfo_o *v367; // x5
  FollowerInfo_o *v368; // x6
  PartyListViewItem_o *v369; // x7
  int64_t v370; // x2
  int32_t v371; // w3
  System_String_o *v372; // x4
  BattleSetupInfo_o *v373; // x5
  FollowerInfo_o *v374; // x6
  PartyListViewItem_o *v375; // x7
  __int64 Instance; // x0
  unsigned __int64 throughCondId; // x1
  Il2CppObject *MasterData_object; // x0
  struct WarBoardStageNpcMaster_o **p_stageNpcMaster; // x19
  int64_t v380; // x2
  int32_t v381; // w3
  System_String_o *v382; // x4
  BattleSetupInfo_o *v383; // x5
  FollowerInfo_o *v384; // x6
  PartyListViewItem_o *v385; // x7
  System_Collections_Generic_IEnumerable_WarBoardStageNpcEntity__o *WarBoardStageEntities; // x0
  __int64 v387; // x1
  __int64 v388; // x2
  __int64 v389; // x3
  WarBoardData___c_c *v390; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v391; // x21
  System_Func_T__TResult__o *_9__77_1; // x19
  Il2CppObject *v393; // x22
  struct WarBoardData___c_StaticFields *v394; // x0
  int64_t v395; // x2
  int32_t v396; // w3
  System_String_o *v397; // x4
  BattleSetupInfo_o *v398; // x5
  FollowerInfo_o *v399; // x6
  PartyListViewItem_o *v400; // x7
  struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *v401; // x0
  int64_t v402; // x2
  int32_t v403; // w3
  System_String_o *v404; // x4
  BattleSetupInfo_o *v405; // x5
  FollowerInfo_o *v406; // x6
  PartyListViewItem_o *v407; // x7
  System_Collections_Generic_IEnumerable_WarBoardActionPointEntity__o *WarBoardActionPointEntities; // x0
  __int64 v409; // x1
  __int64 v410; // x2
  __int64 v411; // x3
  WarBoardData___c_c *v412; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v413; // x20
  System_Func_T__TResult__o *_9__77_2; // x19
  Il2CppObject *v415; // x21
  struct WarBoardData___c_StaticFields *v416; // x0
  int64_t v417; // x2
  int32_t v418; // w3
  System_String_o *v419; // x4
  BattleSetupInfo_o *v420; // x5
  FollowerInfo_o *v421; // x6
  PartyListViewItem_o *v422; // x7
  struct System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__o *v423; // x0
  int64_t v424; // x2
  int32_t v425; // w3
  System_String_o *v426; // x4
  BattleSetupInfo_o *v427; // x5
  FollowerInfo_o *v428; // x6
  PartyListViewItem_o *v429; // x7
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v431; // x1
  __int64 v432; // x2
  __int64 v433; // x3
  WarBoardData___c_c *v434; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v435; // x20
  System_Func_object__int__o *_9__77_3; // x19
  Il2CppObject *v437; // x21
  struct WarBoardData___c_StaticFields *v438; // x0
  int64_t v439; // x2
  int32_t v440; // w3
  System_String_o *v441; // x4
  BattleSetupInfo_o *v442; // x5
  FollowerInfo_o *v443; // x6
  PartyListViewItem_o *v444; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *npcEntityDict; // x8
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *v446; // x0
  __int64 v447; // x1
  __int64 v448; // x2
  __int64 v449; // x3
  WarBoardData___c_c *v450; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v451; // x20
  System_Func_object__int__o *_9__77_4; // x19
  Il2CppObject *v453; // x21
  struct WarBoardData___c_StaticFields *v454; // x0
  int64_t v455; // x2
  int32_t v456; // w3
  System_String_o *v457; // x4
  BattleSetupInfo_o *v458; // x5
  FollowerInfo_o *v459; // x6
  PartyListViewItem_o *v460; // x7
  __int64 v461; // x1
  __int64 v462; // x1
  __int64 v463; // x2
  __int64 v464; // x3
  __int64 v465; // x1
  __int64 v466; // x2
  __int64 v467; // x3
  __int64 v468; // x1
  __int64 v469; // x2
  __int64 v470; // x3
  System_Collections_Generic_List_object__o *v471; // x27
  __int64 v472; // x1
  __int64 v473; // x2
  __int64 v474; // x3
  __int64 v475; // x1
  __int64 v476; // x2
  __int64 v477; // x3
  __int64 v478; // x1
  __int64 v479; // x2
  __int64 v480; // x3
  __int64 v481; // x1
  __int64 v482; // x2
  __int64 v483; // x3
  __int64 v484; // x1
  WarBoardData_c *v485; // x0
  WarBoardDataEntity_o *v486; // x26
  System_Collections_Generic_List_object__o *v487; // x24
  WarBoardStageLayoutEntity_array *v488; // x28
  System_String_o *WARBOARDDATA_SAVEDATA_KEY; // x19
  WarBoardData_c *v490; // x0
  int32_t progressType; // w19
  System_String_o *v492; // x19
  __int64 v493; // x1
  System_String_o *String; // x19
  System_Byte_array *v495; // x19
  __int64 v496; // x1
  __int64 v497; // x2
  __int64 v498; // x3
  MiniMessagePack_MiniMessagePacker_o *v499; // x20
  Il2CppObject *v500; // x0
  struct WarBoardData_WarBoardLocalSaveData_o **p_localSaveData; // x20
  int64_t v502; // x2
  int32_t v503; // w3
  System_String_o *v504; // x4
  BattleSetupInfo_o *v505; // x5
  FollowerInfo_o *v506; // x6
  PartyListViewItem_o *v507; // x7
  __int64 v508; // x1
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8
  __int64 v510; // x2
  __int64 v511; // x3
  struct WarBoardPieceData_SaveData_array *pieceSaves; // x24
  _QWORD *v513; // x25
  unsigned __int64 v514; // x28
  __int64 v515; // x22
  int64_t v516; // x2
  int32_t v517; // w3
  System_String_o *v518; // x4
  BattleSetupInfo_o *v519; // x5
  FollowerInfo_o *v520; // x6
  PartyListViewItem_o *v521; // x7
  int64_t v522; // x1
  WarBoardPieceData_SaveData_o **v523; // x21
  __int64 v524; // x2
  __int64 v525; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v526; // x19
  System_Func_object__bool__o *v527; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v528; // x19
  System_Func_object__bool__o *v529; // x23
  struct WarBoardItemData_SaveData_array *itemSaves; // x24
  unsigned __int64 v531; // x28
  __int64 v532; // x19
  int64_t v533; // x2
  int32_t v534; // w3
  System_String_o *v535; // x4
  BattleSetupInfo_o *v536; // x5
  FollowerInfo_o *v537; // x6
  PartyListViewItem_o *v538; // x7
  int64_t v539; // x1
  __int64 v540; // x2
  __int64 v541; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v542; // x22
  System_Func_object__bool__o *v543; // x23
  PartyOrganizationUtility_o *v544; // x25
  struct WarBoardTreasureData_SaveData_array *treasureSaves; // x28
  char v546; // w26
  unsigned __int64 v547; // x29
  __int64 v548; // x19
  int64_t v549; // x2
  int32_t v550; // w3
  System_String_o *v551; // x4
  BattleSetupInfo_o *v552; // x5
  FollowerInfo_o *v553; // x6
  PartyListViewItem_o *v554; // x7
  int64_t v555; // x1
  __int64 v556; // x21
  System_Collections_Generic_IEnumerable_TSource__o *klass; // x23
  __int64 v558; // x1
  __int64 v559; // x2
  __int64 v560; // x3
  System_Func_object__bool__o *v561; // x24
  WarBoardData___c_c *v562; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v563; // x21
  System_Func_object__bool__o *_9__77_9; // x19
  Il2CppObject *v565; // x23
  struct WarBoardData___c_StaticFields *v566; // x0
  int64_t v567; // x2
  int32_t v568; // w3
  System_String_o *v569; // x4
  BattleSetupInfo_o *v570; // x5
  FollowerInfo_o *v571; // x6
  PartyListViewItem_o *v572; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v573; // x0
  System_Object_array *v574; // x0
  int64_t v575; // x2
  int32_t v576; // w3
  System_String_o *v577; // x4
  BattleSetupInfo_o *v578; // x5
  FollowerInfo_o *v579; // x6
  PartyListViewItem_o *v580; // x7
  struct WarBoardWallData_SaveData_array *wallSaves; // x24
  unsigned __int64 v582; // x25
  __int64 v583; // x19
  int64_t v584; // x2
  int32_t v585; // w3
  System_String_o *v586; // x4
  BattleSetupInfo_o *v587; // x5
  FollowerInfo_o *v588; // x6
  PartyListViewItem_o *v589; // x7
  int64_t v590; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v591; // x22
  __int64 v592; // x1
  __int64 v593; // x2
  __int64 v594; // x3
  System_Func_object__bool__o *v595; // x23
  int v596; // w19
  __int64 v597; // x2
  __int64 v598; // x3
  unsigned __int64 v599; // x23
  __int64 v600; // x24
  __int64 v601; // x25
  struct WarBoardSquareIndexData_SaveData_array *squareIndexInfo; // x8
  unsigned int *v603; // x27
  WarBoardSquareIndexData_SaveData_o *v604; // x21
  WarBoardSquareIndexData_o *v605; // x19
  int64_t v606; // x2
  int32_t v607; // w3
  System_String_o *v608; // x4
  BattleSetupInfo_o *v609; // x5
  FollowerInfo_o *v610; // x6
  PartyListViewItem_o *v611; // x7
  int v612; // w19
  __int64 v613; // x2
  __int64 v614; // x3
  unsigned __int64 v615; // x23
  __int64 v616; // x24
  __int64 v617; // x25
  struct WarBoardBossBattleData_SaveData_array *bossBattleInfo; // x8
  unsigned int *v619; // x27
  WarBoardBossBattleData_SaveData_o *v620; // x21
  WarBoardBossBattleData_o *v621; // x19
  const MethodInfo *v622; // x2
  int64_t v623; // x2
  int32_t v624; // w3
  System_String_o *v625; // x4
  BattleSetupInfo_o *v626; // x5
  FollowerInfo_o *v627; // x6
  PartyListViewItem_o *v628; // x7
  WarBoardData_c *v629; // x0
  int64_t v630; // x2
  int32_t v631; // w3
  System_String_o *v632; // x4
  BattleSetupInfo_o *v633; // x5
  FollowerInfo_o *v634; // x6
  PartyListViewItem_o *v635; // x7
  int64_t v636; // x2
  __int64 v637; // x3
  unsigned __int64 v638; // x25
  __int64 v639; // x23
  int64_t v640; // x2
  int32_t v641; // w3
  System_String_o *v642; // x4
  BattleSetupInfo_o *v643; // x5
  FollowerInfo_o *v644; // x6
  PartyListViewItem_o *v645; // x7
  int64_t v646; // x1
  WarBoardStageLayoutEntity_o **v647; // x29
  WarBoardStageLayoutEntity_o *v648; // x19
  __int64 v649; // x1
  __int64 v650; // x2
  __int64 v651; // x3
  WarBoardSquareData_o *v652; // x22
  System_String_o *v653; // x4
  BattleSetupInfo_o *v654; // x5
  FollowerInfo_o *v655; // x6
  PartyListViewItem_o *v656; // x7
  __int64 v657; // x9
  WarBoardStageLayoutEntity_o *v658; // x8
  struct System_Object_array *items; // x8
  _QWORD *v660; // x9
  __int64 size; // x10
  Il2CppClass **v662; // x0
  WarBoardStageLayoutEntity_o *v663; // x8
  int32_t questPhase; // w22
  System_Collections_Generic_IEnumerable_TSource__o *svtInfo; // x19
  System_Func_object__bool__o *v666; // x20
  WarBoardUserServantData_o *v667; // x21
  WarBoardUserMasterData_o *v668; // x20
  struct System_Object_array *v669; // x8
  _QWORD *v670; // x9
  __int64 v671; // x10
  Il2CppClass **v672; // x0
  PartyOrganizationUtility_o *v673; // x0
  int64_t v674; // x1
  System_Collections_Generic_IEnumerable_TSource__o *masterInfo; // x19
  System_Func_object__bool__o *v676; // x20
  WarBoardStageLayoutEntity_o *v677; // x8
  WarBoardDataEntity_WarBoardDeckData_o **v678; // x9
  WarBoardDataEntity_WarBoardDeckData_o *v679; // x27
  int32_t Type; // w0
  bool IsNpc; // w0
  WarBoardStageLayoutEntity_o *v682; // x28
  int32_t v683; // w22
  bool v684; // w26
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *v685; // x19
  __int64 v686; // x1
  __int64 v687; // x2
  __int64 v688; // x3
  WarBoardPieceData_o *v689; // x0
  WarBoardPieceData_o *v690; // x24
  bool v691; // w5
  int64_t v692; // x2
  int32_t v693; // w3
  System_String_o *v694; // x4
  BattleSetupInfo_o *v695; // x5
  FollowerInfo_o *v696; // x6
  PartyListViewItem_o *v697; // x7
  __int64 v698; // x8
  _QWORD *v699; // x9
  __int64 v700; // x10
  NpcFollowerEntity_o *Entity_40158156; // x0
  NpcFollowerEntity_o *v702; // x19
  int64_t v703; // x2
  int32_t v704; // w3
  System_String_o *v705; // x4
  BattleSetupInfo_o *v706; // x5
  FollowerInfo_o *v707; // x6
  PartyListViewItem_o *v708; // x7
  struct System_Object_array *v709; // x8
  _QWORD *v710; // x9
  __int64 v711; // x10
  Il2CppClass **v712; // x0
  __int64 v713; // x8
  System_Collections_Generic_List_object__o *v714; // x0
  Il2CppObject *v715; // x1
  struct System_Object_array *v716; // x8
  _QWORD *v717; // x9
  __int64 v718; // x10
  Il2CppClass **v719; // x0
  WarBoardStageLayoutEntity_o *v720; // x21
  System_Collections_Generic_IEnumerable_TSource__o *getItemInfo; // x19
  System_Func_object__bool__o *v722; // x20
  Il2CppObject *v723; // x0
  WarBoardStageLayoutEntity_o *v724; // x19
  WarBoardUserGetItemData_o *v725; // x21
  __int64 v726; // x1
  __int64 v727; // x2
  __int64 v728; // x3
  WarBoardItemData_o *v729; // x20
  System_Collections_Generic_List_object__o *v730; // x12
  int32_t version; // w10
  struct System_Object_array *v732; // x8
  void **v733; // x9
  System_Collections_Generic_IEnumerable_TSource__o *treasureInfo; // x19
  System_Func_object__bool__o *v735; // x20
  System_Collections_Generic_IEnumerable_TSource__o *wallInfo; // x19
  System_Func_object__bool__o *v737; // x20
  Il2CppObject *v738; // x0
  WarBoardStageLayoutEntity_o *v739; // x19
  WarBoardUserWallData_o *v740; // x21
  __int64 v741; // x1
  __int64 v742; // x2
  __int64 v743; // x3
  _QWORD *v744; // x9
  __int64 v745; // x10
  Il2CppClass **v746; // x0
  System_Object_array *v747; // x0
  WarBoardData_o *v748; // x25
  int64_t v749; // x2
  int32_t v750; // w3
  System_String_o *v751; // x4
  BattleSetupInfo_o *v752; // x5
  FollowerInfo_o *v753; // x6
  PartyListViewItem_o *v754; // x7
  System_Object_array *v755; // x0
  int64_t v756; // x2
  int32_t v757; // w3
  System_String_o *v758; // x4
  BattleSetupInfo_o *v759; // x5
  FollowerInfo_o *v760; // x6
  PartyListViewItem_o *v761; // x7
  System_Object_array *v762; // x0
  System_Collections_Generic_IEnumerable_T__o **p_pieces; // x23
  int64_t v764; // x2
  int32_t v765; // w3
  System_String_o *v766; // x4
  BattleSetupInfo_o *v767; // x5
  FollowerInfo_o *v768; // x6
  PartyListViewItem_o *v769; // x7
  System_Object_array *pieces; // x19
  __int64 v771; // x1
  __int64 v772; // x2
  __int64 v773; // x3
  System_Comparison_T__o *v774; // x20
  System_Object_array *v775; // x0
  int64_t v776; // x2
  int32_t v777; // w3
  System_String_o *v778; // x4
  BattleSetupInfo_o *v779; // x5
  FollowerInfo_o *v780; // x6
  PartyListViewItem_o *v781; // x7
  System_Object_array *v782; // x0
  int64_t v783; // x2
  int32_t v784; // w3
  System_String_o *v785; // x4
  BattleSetupInfo_o *v786; // x5
  FollowerInfo_o *v787; // x6
  PartyListViewItem_o *v788; // x7
  System_Object_array *v789; // x0
  int64_t v790; // x2
  int32_t v791; // w3
  System_String_o *v792; // x4
  BattleSetupInfo_o *v793; // x5
  FollowerInfo_o *v794; // x6
  PartyListViewItem_o *v795; // x7
  System_Object_array *v796; // x0
  int64_t v797; // x2
  int32_t v798; // w3
  System_String_o *v799; // x4
  BattleSetupInfo_o *v800; // x5
  FollowerInfo_o *v801; // x6
  PartyListViewItem_o *v802; // x7
  int64_t v803; // x2
  int32_t v804; // w3
  System_String_o *v805; // x4
  BattleSetupInfo_o *v806; // x5
  FollowerInfo_o *v807; // x6
  PartyListViewItem_o *v808; // x7
  __int64 v809; // x2
  __int64 v810; // x3
  struct WarBoardData_WarBoardLocalSaveData_o *v811; // x8
  struct WarBoardPieceData_SaveData_array *v812; // x28
  unsigned __int64 v813; // x29
  __int64 v814; // x21
  int64_t v815; // x2
  int32_t v816; // w3
  System_String_o *v817; // x4
  BattleSetupInfo_o *v818; // x5
  FollowerInfo_o *v819; // x6
  PartyListViewItem_o *v820; // x7
  int64_t v821; // x1
  WarBoardPieceData_SaveData_o **v822; // x22
  System_Collections_Generic_IEnumerable_T__o *v823; // x19
  __int64 v824; // x1
  __int64 v825; // x2
  __int64 v826; // x3
  System_Func_object__bool__o *v827; // x24
  __int64 v828; // x2
  __int64 v829; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v830; // x19
  System_Func_object__bool__o *v831; // x24
  Il2CppObject *v832; // x21
  __int64 v833; // x1
  __int64 v834; // x2
  __int64 v835; // x3
  System_Collections_Generic_List_object__o *v836; // x24
  __int64 v837; // x2
  __int64 v838; // x3
  int32_t id; // w19
  WarBoardPieceData_SaveData_o *v840; // x26
  WarBoardPieceData_o *v841; // x25
  int64_t v842; // x2
  int32_t v843; // w3
  System_String_o *v844; // x4
  BattleSetupInfo_o *v845; // x5
  FollowerInfo_o *v846; // x6
  PartyListViewItem_o *v847; // x7
  struct System_Object_array *v848; // x8
  _QWORD *v849; // x9
  __int64 v850; // x10
  Il2CppClass **v851; // x0
  System_Object_array *v852; // x0
  int64_t v853; // x2
  int32_t v854; // w3
  System_String_o *v855; // x4
  BattleSetupInfo_o *v856; // x5
  FollowerInfo_o *v857; // x6
  PartyListViewItem_o *v858; // x7
  __int64 v859; // x20
  int v860; // w8
  unsigned int v861; // w21
  __int64 v862; // x8
  WarBoardItemData_SaveData_o *v863; // x19
  _DWORD *data; // x20
  int v865; // w8
  unsigned int v866; // w21
  char *v867; // x8
  WarBoardTreasureData_SaveData_o *v868; // x19
  __int64 v869; // x20
  int v870; // w8
  unsigned int v871; // w21
  __int64 v872; // x8
  WarBoardWallData_SaveData_o *v873; // x19
  Il2CppClass *element_class; // x20
  int namespaze; // w8
  unsigned int v876; // w21
  void **v877; // x8
  WarBoardSquareData_SaveData_o *v878; // x19
  System_Collections_Generic_List_object__o *v879; // x19
  int64_t v880; // x2
  int32_t v881; // w3
  System_String_o *v882; // x4
  BattleSetupInfo_o *v883; // x5
  FollowerInfo_o *v884; // x6
  PartyListViewItem_o *v885; // x7
  int64_t v886; // x2
  __int64 v887; // x3
  System_String_o *v888; // x4
  BattleSetupInfo_o *v889; // x5
  FollowerInfo_o *v890; // x6
  PartyListViewItem_o *v891; // x7
  struct WarBoardData_WarBoardLocalSaveData_o *v892; // x8
  struct WarBoardEventData_SaveData_array *eventSaves; // x20
  __int64 v894; // x8
  unsigned __int64 v895; // x23
  WarBoardEventData_SaveData_o *v896; // x19
  System_Collections_Generic_List_object__o *v897; // x21
  WarBoardEventData_o *v898; // x22
  int64_t v899; // x2
  int32_t v900; // w3
  System_String_o *v901; // x4
  BattleSetupInfo_o *v902; // x5
  FollowerInfo_o *v903; // x6
  PartyListViewItem_o *v904; // x7
  struct System_Object_array *v905; // x8
  _QWORD *v906; // x9
  __int64 v907; // x10
  Il2CppClass **v908; // x0
  Il2CppClass *v909; // x8
  int64_t typeHierarchy; // x1
  int64_t v911; // x2
  int32_t v912; // w3
  System_String_o *v913; // x4
  BattleSetupInfo_o *v914; // x5
  FollowerInfo_o *v915; // x6
  PartyListViewItem_o *v916; // x7
  struct WarBoardData_WarBoardLocalSaveData_o *v917; // x8
  int64_t latestBattlePieceUniqueIndexes; // x1
  __int64 v919; // x1
  __int64 v920; // x2
  __int64 v921; // x3
  System_Collections_Generic_List_object__o *v922; // x19
  int64_t v923; // x2
  int32_t v924; // w3
  System_String_o *v925; // x4
  BattleSetupInfo_o *v926; // x5
  FollowerInfo_o *v927; // x6
  PartyListViewItem_o *v928; // x7
  __int64 v929; // x2
  __int64 v930; // x3
  _QWORD *properties; // x20
  __int64 v932; // x8
  unsigned __int64 v933; // x23
  WarBoardPrevCondData_SaveData_o *v934; // x19
  System_Collections_Generic_List_object__o *v935; // x21
  WarBoardPrevCondData_o *v936; // x22
  int64_t v937; // x2
  int32_t v938; // w3
  System_String_o *v939; // x4
  BattleSetupInfo_o *v940; // x5
  FollowerInfo_o *v941; // x6
  PartyListViewItem_o *v942; // x7
  struct System_Object_array *v943; // x8
  _QWORD *v944; // x9
  __int64 v945; // x10
  Il2CppClass **v946; // x0
  System_Collections_Generic_List_object__o *v947; // x19
  int64_t v948; // x2
  int32_t v949; // w3
  System_String_o *v950; // x4
  BattleSetupInfo_o *v951; // x5
  FollowerInfo_o *v952; // x6
  PartyListViewItem_o *v953; // x7
  __int64 v954; // x2
  __int64 v955; // x3
  _QWORD *methods; // x20
  __int64 v957; // x8
  unsigned __int64 v958; // x23
  HoldReinforcementsData_SaveData_o *v959; // x19
  System_Collections_Generic_List_object__o *v960; // x21
  HoldReinforcementsData_o *v961; // x22
  int64_t v962; // x2
  int32_t v963; // w3
  System_String_o *v964; // x4
  BattleSetupInfo_o *v965; // x5
  FollowerInfo_o *v966; // x6
  PartyListViewItem_o *v967; // x7
  struct System_Object_array *v968; // x8
  _QWORD *v969; // x9
  __int64 v970; // x10
  Il2CppClass **v971; // x0
  System_Collections_Generic_List_TSource__o *v972; // x0
  int64_t v973; // x2
  int32_t v974; // w3
  System_String_o *v975; // x4
  BattleSetupInfo_o *v976; // x5
  FollowerInfo_o *v977; // x6
  PartyListViewItem_o *v978; // x7
  __int64 v979; // x1
  __int64 v980; // x2
  __int64 v981; // x3
  System_Collections_Generic_List_object__o *v982; // x19
  int64_t v983; // x2
  int32_t v984; // w3
  System_String_o *v985; // x4
  BattleSetupInfo_o *v986; // x5
  FollowerInfo_o *v987; // x6
  PartyListViewItem_o *v988; // x7
  int64_t v989; // x2
  __int64 v990; // x3
  System_String_o *v991; // x4
  BattleSetupInfo_o *v992; // x5
  FollowerInfo_o *v993; // x6
  PartyListViewItem_o *v994; // x7
  Il2CppClass **implementedInterfaces; // x20
  Il2CppClass *v996; // x8
  unsigned __int64 v997; // x23
  WarBoardUiData_SaveData_o *v998; // x19
  System_Collections_Generic_List_object__o *v999; // x21
  WarBoardUiData_o *v1000; // x22
  int64_t v1001; // x2
  int32_t v1002; // w3
  System_String_o *v1003; // x4
  BattleSetupInfo_o *v1004; // x5
  FollowerInfo_o *v1005; // x6
  PartyListViewItem_o *v1006; // x7
  struct System_Object_array *v1007; // x8
  _QWORD *v1008; // x9
  __int64 v1009; // x10
  Il2CppClass **v1010; // x0
  int64_t interfaceOffsets; // x1
  Il2CppClass *v1012; // x8
  WarBoardData_WarBoardLocalSaveData_o *v1013; // x19
  int64_t v1014; // x2
  int32_t v1015; // w3
  System_String_o *v1016; // x4
  BattleSetupInfo_o *v1017; // x5
  FollowerInfo_o *v1018; // x6
  PartyListViewItem_o *v1019; // x7
  __int64 v1020; // x0
  PartyOrganizationUtility_o *p_bgAnimationInfo_k__BackingField; // [xsp+10h] [xbp-170h]
  PartyOrganizationUtility_o *p_listUiData; // [xsp+18h] [xbp-168h]
  PartyOrganizationUtility_o *p_playedStageReinforcementsList; // [xsp+20h] [xbp-160h]
  PartyOrganizationUtility_o *p_latestBattlePieceUniqueIndexes; // [xsp+28h] [xbp-158h]
  struct System_Int32_array **p_latestPieceActionSquareIndexes; // [xsp+30h] [xbp-150h]
  PartyOrganizationUtility_o *p_reinforcementsSaveList; // [xsp+38h] [xbp-148h]
  DataMasterBase_TMaster__TEntity__PKType__o *v1027; // [xsp+40h] [xbp-140h]
  System_Collections_Generic_List_object__o *v1028; // [xsp+48h] [xbp-138h]
  WarBoardDataEntity_WarBoardDeckData_o **p_myDeck; // [xsp+50h] [xbp-130h]
  struct System_Collections_Generic_List_int__o **p_masterExistsForce; // [xsp+58h] [xbp-128h]
  System_Collections_Generic_List_object__o *v1031; // [xsp+60h] [xbp-120h]
  System_Collections_Generic_List_object__o *v1032; // [xsp+68h] [xbp-118h]
  System_Collections_Generic_List_object__o *v1033; // [xsp+70h] [xbp-110h]
  NpcFollowerMaster_o *v1034; // [xsp+78h] [xbp-108h]
  WarBoardStagePieceDetailMaster_o *Master_object; // [xsp+80h] [xbp-100h]
  System_Collections_Generic_List_object__o *v1036; // [xsp+88h] [xbp-F8h]
  WarBoardData_Fields *p_fields; // [xsp+90h] [xbp-F0h]
  WarBoardCommonReleaseMaster_o *v1038; // [xsp+98h] [xbp-E8h]
  WarBoardData_o *v1039; // [xsp+A0h] [xbp-E0h]
  struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o **p_npcEntityDict; // [xsp+A8h] [xbp-D8h]
  System_Collections_Generic_List_object__o *v1041; // [xsp+B0h] [xbp-D0h]
  System_Collections_Generic_List_object__o *v1042; // [xsp+B0h] [xbp-D0h]
  System_Collections_Generic_List_object__o *v1043; // [xsp+B8h] [xbp-C8h]
  WarBoardDataEntity_WarBoardDeckData_o **p_enemyDeck; // [xsp+C8h] [xbp-B8h]
  PartyOrganizationUtility_o *p_listPrevCond; // [xsp+D0h] [xbp-B0h]
  struct System_Collections_Generic_List_WarBoardEventData__o **p_listEvent; // [xsp+D8h] [xbp-A8h]
  int32_t v1048; // [xsp+E4h] [xbp-9Ch]
  int32_t questId; // [xsp+E8h] [xbp-98h]
  int32_t npcIdx; // [xsp+ECh] [xbp-94h]
  System_Object_array **v1052; // [xsp+F0h] [xbp-90h]
  WarBoardDataEntity_o *v1053; // [xsp+F0h] [xbp-90h]
  __int64 v1054; // [xsp+F8h] [xbp-88h]
  WarBoardRoadEntity_array *roadEntitiesb; // [xsp+100h] [xbp-80h]
  bool isChangeName; // [xsp+10Ch] [xbp-74h] BYREF
  Il2CppObject *v1058; // [xsp+110h] [xbp-70h] BYREF
  WarBoardStagePieceDetailEntity_o *entity; // [xsp+118h] [xbp-68h] BYREF

  if ( (byte_4B13E00 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Resize_WarBoardBossBattleData___, stage, layoutEntities);
    sub_1BCA7E0(&Method_System_Array_Resize_WarBoardSquareIndexData___, v8, v9);
    sub_1BCA7E0(&Method_System_Array_Sort_WarBoardPieceData___, v10, v11);
    sub_1BCA7E0(&Method_System_Array_Sort_WarBoardStageLayoutEntity___, v12, v13);
    sub_1BCA7E0(&Method_BasicHelper_Any_WarBoardPieceData___, v14, v15);
    sub_1BCA7E0(&System_Comparison_WarBoardPieceData__TypeInfo, v16, v17);
    sub_1BCA7E0(&System_Comparison_WarBoardStageLayoutEntity__TypeInfo, v18, v19);
    sub_1BCA7E0(&System_Convert_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___, v22, v23);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarBoardActionPointMaster___, v24, v25);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarBoardStageDetailMaster___, v26, v27);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarBoardStageNpcMaster___, v28, v29);
    sub_1BCA7E0(&Method_DataManager_GetMaster_NpcFollowerMaster___, v30, v31);
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, v32, v33);
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___, v34, v35);
    sub_1BCA7E0(&DataManager_TypeInfo, v36, v37);
    sub_1BCA7E0(
      &Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__,
      v38,
      v39);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v40, v41);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Values__, v42, v43);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v44, v45);
    sub_1BCA7E0(&EncryptedPlayerPrefs_TypeInfo, v46, v47);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_WarBoardBossBattleData_SaveData___, v48, v49);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData_SaveData___, v50, v51);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___, v52, v53);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___, v54, v55);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___, v56, v57);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserTreasureData___, v58, v59);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___, v60, v61);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Max_WarBoardStageNpcEntity___, v62, v63);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_WarBoardUserTreasureData___, v64, v65);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToDictionary_WarBoardActionPointEntity__uint___, v66, v67);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToDictionary_WarBoardStageNpcEntity__uint___, v68, v69);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_int___, v70, v71);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_WarBoardUserTreasureData___, v72, v73);
    sub_1BCA7E0(&System_Func_WarBoardUserTreasureData__bool__TypeInfo, v74, v75);
    sub_1BCA7E0(&System_Func_WarBoardStageNpcEntity__uint__TypeInfo, v76, v77);
    sub_1BCA7E0(&System_Func_WarBoardUserWallData__bool__TypeInfo, v78, v79);
    sub_1BCA7E0(&System_Func_WarBoardUserMasterData__bool__TypeInfo, v80, v81);
    sub_1BCA7E0(&System_Func_WarBoardStageNpcEntity__int__TypeInfo, v82, v83);
    sub_1BCA7E0(&System_Func_WarBoardUserServantData__bool__TypeInfo, v84, v85);
    sub_1BCA7E0(&System_Func_WarBoardPieceData__bool__TypeInfo, v86, v87);
    sub_1BCA7E0(&System_Func_WarBoardUserGetItemData__bool__TypeInfo, v88, v89);
    sub_1BCA7E0(&System_Func_WarBoardActionPointEntity__uint__TypeInfo, v90, v91);
    sub_1BCA7E0(&HoldReinforcementsData_TypeInfo, v92, v93);
    sub_1BCA7E0(&int___TypeInfo, v94, v95);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__, v96, v97);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v98, v99);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardSquareData__Add__, v100, v101);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardUiData__Add__, v102, v103);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__, v104, v105);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardEventData__Add__, v106, v107);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardEffectData__Add__, v108, v109);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTreasureData__Add__, v110, v111);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, v112, v113);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardWallData__Add__, v114, v115);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_HoldReinforcementsData__Add__, v116, v117);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardItemData__Add__, v118, v119);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v120, v121);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTreasureData__ToArray__, v122, v123);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardEffectData__ToArray__, v124, v125);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardWallData__ToArray__, v126, v127);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__, v128, v129);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__, v130, v131);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardItemData__ToArray__, v132, v133);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPrevCondData___ctor__, v134, v135);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v136, v137);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v138, v139);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardSquareData___ctor__, v140, v141);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardEventData___ctor__, v142, v143);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardUiData___ctor__, v144, v145);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_HoldReinforcementsData___ctor__, v146, v147);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTreasureData___ctor__, v148, v149);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardItemData___ctor__, v150, v151);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardWallData___ctor__, v152, v153);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardEffectData___ctor__, v154, v155);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v156, v157);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardSquareData__TypeInfo, v158, v159);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v160, v161);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardWallData__TypeInfo, v162, v163);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardTreasureData__TypeInfo, v164, v165);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardItemData__TypeInfo, v166, v167);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardUiData__TypeInfo, v168, v169);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardPrevCondData__TypeInfo, v170, v171);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardEffectData__TypeInfo, v172, v173);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardEventData__TypeInfo, v174, v175);
    sub_1BCA7E0(&System_Collections_Generic_List_HoldReinforcementsData__TypeInfo, v176, v177);
    sub_1BCA7E0(&Method_MiniMessagePack_MiniMessagePacker_UnpackClass_WarBoardData_WarBoardLocalSaveData___, v178, v179);
    sub_1BCA7E0(&MiniMessagePack_MiniMessagePacker_TypeInfo, v180, v181);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v182, v183);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v184, v185);
    sub_1BCA7E0(&Method_WarBoardData___c___ctor_b__77_0__, v186, v187);
    sub_1BCA7E0(&Method_WarBoardData___c___ctor_b__77_1__, v188, v189);
    sub_1BCA7E0(&Method_WarBoardData___c___ctor_b__77_2__, v190, v191);
    sub_1BCA7E0(&Method_WarBoardData___c___ctor_b__77_3__, v192, v193);
    sub_1BCA7E0(&Method_WarBoardData___c___ctor_b__77_4__, v194, v195);
    sub_1BCA7E0(&Method_WarBoardData___c___ctor_b__77_9__, v196, v197);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass77_0___ctor_b__5__, v198, v199);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass77_0___ctor_b__6__, v200, v201);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass77_0_TypeInfo, v202, v203);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass77_1___ctor_b__7__, v204, v205);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass77_1_TypeInfo, v206, v207);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass77_2___ctor_b__8__, v208, v209);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass77_2_TypeInfo, v210, v211);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass77_3___ctor_b__10__, v212, v213);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass77_3_TypeInfo, v214, v215);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__11__, v216, v217);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__12__, v218, v219);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__13__, v220, v221);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__14__, v222, v223);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__15__, v224, v225);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass77_4_TypeInfo, v226, v227);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass77_5___ctor_b__16__, v228, v229);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass77_5___ctor_b__17__, v230, v231);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass77_5_TypeInfo, v232, v233);
    sub_1BCA7E0(&WarBoardData___c_TypeInfo, v234, v235);
    sub_1BCA7E0(&uint___TypeInfo, v236, v237);
    sub_1BCA7E0(&WarBoardBossBattleData_TypeInfo, v238, v239);
    sub_1BCA7E0(&Method_WarBoardData_ComparePiece__, v240, v241);
    sub_1BCA7E0(&WarBoardData_TypeInfo, v242, v243);
    sub_1BCA7E0(&WarBoardEffectData_TypeInfo, v244, v245);
    sub_1BCA7E0(&WarBoardEventData_TypeInfo, v246, v247);
    sub_1BCA7E0(&WarBoardItemData_TypeInfo, v248, v249);
    sub_1BCA7E0(&WarBoardData_WarBoardLocalSaveData_TypeInfo, v250, v251);
    sub_1BCA7E0(&WarBoardPieceData_TypeInfo, v252, v253);
    sub_1BCA7E0(&WarBoardPrevCondData_TypeInfo, v254, v255);
    sub_1BCA7E0(&WarBoardSquareData_TypeInfo, v256, v257);
    sub_1BCA7E0(&WarBoardSquareIndexData_TypeInfo, v258, v259);
    sub_1BCA7E0(&WarBoardTreasureData_TypeInfo, v260, v261);
    sub_1BCA7E0(&WarBoardUiData_TypeInfo, v262, v263);
    sub_1BCA7E0(&WarBoardWallData_TypeInfo, v264, v265);
    byte_4B13E00 = 1;
  }
  v1058 = 0LL;
  entity = 0LL;
  isChangeName = 0;
  v266 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                      System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                      stage,
                                                                      layoutEntities,
                                                                      roadEntities);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v266,
    (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  this->fields._bgAnimationInfo_k__BackingField = (struct System_Collections_Generic_Dictionary_string__object__o *)v266;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._bgAnimationInfo_k__BackingField,
    (int64_t)v266,
    v267,
    v268,
    v269,
    v270,
    v271,
    v272);
  v276 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_WarBoardEventData__TypeInfo,
                                                        v273,
                                                        v274,
                                                        v275);
  System_Collections_Generic_List_object____ctor(
    v276,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardEventData___ctor__);
  this->fields.listEvent = (struct System_Collections_Generic_List_WarBoardEventData__o *)v276;
  p_listEvent = &this->fields.listEvent;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.listEvent, (int64_t)v276, v277, v278, v279, v280, v281, v282);
  *(_QWORD *)&this->fields.winCondId = -1LL;
  v283 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 2LL);
  this->fields.latestPieceActionSquareIndexes = v283;
  p_latestPieceActionSquareIndexes = &this->fields.latestPieceActionSquareIndexes;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.latestPieceActionSquareIndexes,
    (int64_t)v283,
    v284,
    v285,
    v286,
    v287,
    v288,
    v289);
  v290 = (struct System_UInt32_array *)sub_1BCA888(uint___TypeInfo, 0LL);
  this->fields.latestBattlePieceUniqueIndexes = v290;
  p_latestBattlePieceUniqueIndexes = (PartyOrganizationUtility_o *)&this->fields.latestBattlePieceUniqueIndexes;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.latestBattlePieceUniqueIndexes,
    (int64_t)v290,
    v291,
    v292,
    v293,
    v294,
    v295,
    v296);
  v300 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_WarBoardPrevCondData__TypeInfo,
                                                        v297,
                                                        v298,
                                                        v299);
  System_Collections_Generic_List_object____ctor(
    v300,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardPrevCondData___ctor__);
  this->fields.listPrevCond = (struct System_Collections_Generic_List_WarBoardPrevCondData__o *)v300;
  p_listPrevCond = (PartyOrganizationUtility_o *)&this->fields.listPrevCond;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.listPrevCond,
    (int64_t)v300,
    v301,
    v302,
    v303,
    v304,
    v305,
    v306);
  v310 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_HoldReinforcementsData__TypeInfo,
                                                        v307,
                                                        v308,
                                                        v309);
  System_Collections_Generic_List_object____ctor(
    v310,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_HoldReinforcementsData___ctor__);
  this->fields.reinforcementsSaveList = (struct System_Collections_Generic_List_HoldReinforcementsData__o *)v310;
  p_reinforcementsSaveList = (PartyOrganizationUtility_o *)&this->fields.reinforcementsSaveList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.reinforcementsSaveList,
    (int64_t)v310,
    v311,
    v312,
    v313,
    v314,
    v315,
    v316);
  v320 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_int__TypeInfo,
                                                     v317,
                                                     v318,
                                                     v319);
  System_Collections_Generic_List_int____ctor(
    v320,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.playedStageReinforcementsList = v320;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.playedStageReinforcementsList,
    (int64_t)v320,
    v321,
    v322,
    v323,
    v324,
    v325,
    v326);
  v330 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_WarBoardUiData__TypeInfo,
                                                        v327,
                                                        v328,
                                                        v329);
  System_Collections_Generic_List_object____ctor(
    v330,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardUiData___ctor__);
  this->fields.listUiData = (struct System_Collections_Generic_List_WarBoardUiData__o *)v330;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.listUiData, (int64_t)v330, v331, v332, v333, v334, v335, v336);
  v340 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_int__TypeInfo,
                                                     v337,
                                                     v338,
                                                     v339);
  System_Collections_Generic_List_int____ctor(
    v340,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.masterExistsForce = v340;
  p_masterExistsForce = &this->fields.masterExistsForce;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.masterExistsForce,
    (int64_t)v340,
    v341,
    v342,
    v343,
    v344,
    v345,
    v346);
  v350 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_int__TypeInfo,
                                                     v347,
                                                     v348,
                                                     v349);
  System_Collections_Generic_List_int____ctor(
    v350,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.reinforcementsAppointmentSquareList = v350;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.reinforcementsAppointmentSquareList,
    (int64_t)v350,
    v351,
    v352,
    v353,
    v354,
    v355,
    v356);
  this->fields.localSaveTiming = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v360 = WarBoardData___c_TypeInfo;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, v357);
    v360 = WarBoardData___c_TypeInfo;
  }
  _9__77_0 = (System_Comparison_T__o *)v360->static_fields->__9__77_0;
  if ( !_9__77_0 )
  {
    if ( !v360->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v360, v357);
      v360 = WarBoardData___c_TypeInfo;
    }
    v362 = (Il2CppObject *)v360->static_fields->__9;
    _9__77_0 = (System_Comparison_T__o *)sub_1BCAA2C(
                                           System_Comparison_WarBoardStageLayoutEntity__TypeInfo,
                                           v357,
                                           v358,
                                           v359);
    System_Comparison_object____ctor(_9__77_0, v362, Method_WarBoardData___c___ctor_b__77_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__77_0 = (struct System_Comparison_WarBoardStageLayoutEntity__o *)_9__77_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__77_0,
      (int64_t)_9__77_0,
      v364,
      v365,
      v366,
      v367,
      v368,
      v369);
  }
  System_Array__Sort_object__49153980(
    (System_Object_array *)layoutEntities,
    _9__77_0,
    (const MethodInfo_2EE07BC *)Method_System_Array_Sort_WarBoardStageLayoutEntity___);
  this->fields.stageEntity = stage;
  p_fields = &this->fields;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)stage, v370, v371, v372, v373, v374, v375);
  if ( !layoutEntities )
    goto LABEL_359;
  v1054 = *(_QWORD *)&layoutEntities->max_length;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_359;
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarBoardStageDetailMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_359;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarBoardStageNpcMaster___);
  this->fields.stageNpcMaster = (struct WarBoardStageNpcMaster_o *)MasterData_object;
  p_stageNpcMaster = &this->fields.stageNpcMaster;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.stageNpcMaster,
    (int64_t)MasterData_object,
    v380,
    v381,
    v382,
    v383,
    v384,
    v385);
  if ( !stage )
    goto LABEL_359;
  Instance = (__int64)*p_stageNpcMaster;
  if ( !*p_stageNpcMaster )
    goto LABEL_359;
  WarBoardStageEntities = WarBoardStageNpcMaster__GetWarBoardStageEntities(
                            (WarBoardStageNpcMaster_o *)Instance,
                            stage->fields.id,
                            0LL);
  v390 = WarBoardData___c_TypeInfo;
  v391 = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardStageEntities;
  p_playedStageReinforcementsList = (PartyOrganizationUtility_o *)&this->fields.playedStageReinforcementsList;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, v387);
    v390 = WarBoardData___c_TypeInfo;
  }
  _9__77_1 = (System_Func_T__TResult__o *)v390->static_fields->__9__77_1;
  if ( !_9__77_1 )
  {
    if ( !v390->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v390, v387);
      v390 = WarBoardData___c_TypeInfo;
    }
    v393 = (Il2CppObject *)v390->static_fields->__9;
    _9__77_1 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                              System_Func_WarBoardStageNpcEntity__uint__TypeInfo,
                                              v387,
                                              v388,
                                              v389);
    System_Func_object__uint____ctor(_9__77_1, v393, Method_WarBoardData___c___ctor_b__77_1__, 0LL);
    v394 = WarBoardData___c_TypeInfo->static_fields;
    v394->__9__77_1 = (struct System_Func_WarBoardStageNpcEntity__uint__o *)_9__77_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v394->__9__77_1, (int64_t)_9__77_1, v395, v396, v397, v398, v399, v400);
  }
  v401 = (struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *)System_Linq_Enumerable__ToDictionary_object__uint_(
                                                                                           v391,
                                                                                           (System_Func_TSource__TKey__o *)_9__77_1,
                                                                                           (const MethodInfo_2F4BDE4 *)Method_System_Linq_Enumerable_ToDictionary_WarBoardStageNpcEntity__uint___);
  this->fields.npcEntityDict = v401;
  p_npcEntityDict = &this->fields.npcEntityDict;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.npcEntityDict,
    (int64_t)v401,
    v402,
    v403,
    v404,
    v405,
    v406,
    v407);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_359;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarBoardActionPointMaster___);
  if ( !Instance )
    goto LABEL_359;
  WarBoardActionPointEntities = WarBoardActionPointMaster__GetWarBoardActionPointEntities(
                                  (WarBoardActionPointMaster_o *)Instance,
                                  stage->fields.id,
                                  0LL);
  v412 = WarBoardData___c_TypeInfo;
  v413 = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardActionPointEntities;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, v409);
    v412 = WarBoardData___c_TypeInfo;
  }
  _9__77_2 = (System_Func_T__TResult__o *)v412->static_fields->__9__77_2;
  if ( !_9__77_2 )
  {
    if ( !v412->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v412, v409);
      v412 = WarBoardData___c_TypeInfo;
    }
    v415 = (Il2CppObject *)v412->static_fields->__9;
    _9__77_2 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                              System_Func_WarBoardActionPointEntity__uint__TypeInfo,
                                              v409,
                                              v410,
                                              v411);
    System_Func_object__uint____ctor(_9__77_2, v415, Method_WarBoardData___c___ctor_b__77_2__, 0LL);
    v416 = WarBoardData___c_TypeInfo->static_fields;
    v416->__9__77_2 = (struct System_Func_WarBoardActionPointEntity__uint__o *)_9__77_2;
    sub_1BCA784((PartyOrganizationUtility_o *)&v416->__9__77_2, (int64_t)_9__77_2, v417, v418, v419, v420, v421, v422);
  }
  v423 = (struct System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__o *)System_Linq_Enumerable__ToDictionary_object__uint_(
                                                                                              v413,
                                                                                              (System_Func_TSource__TKey__o *)_9__77_2,
                                                                                              (const MethodInfo_2F4BDE4 *)Method_System_Linq_Enumerable_ToDictionary_WarBoardActionPointEntity__uint___);
  this->fields.actionPointEntityDict = v423;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.actionPointEntityDict,
    (int64_t)v423,
    v424,
    v425,
    v426,
    v427,
    v428,
    v429);
  Instance = (__int64)this->fields.npcEntityDict;
  if ( !Instance )
    goto LABEL_359;
  Values = System_Collections_Generic_Dictionary_uint__object___get_Values(
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)Instance,
             (const MethodInfo_329DCD8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Values__);
  v434 = WarBoardData___c_TypeInfo;
  v435 = (System_Collections_Generic_IEnumerable_TSource__o *)Values;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, v431);
    v434 = WarBoardData___c_TypeInfo;
  }
  _9__77_3 = (System_Func_object__int__o *)v434->static_fields->__9__77_3;
  if ( !_9__77_3 )
  {
    if ( !v434->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v434, v431);
      v434 = WarBoardData___c_TypeInfo;
    }
    v437 = (Il2CppObject *)v434->static_fields->__9;
    _9__77_3 = (System_Func_object__int__o *)sub_1BCAA2C(
                                               System_Func_WarBoardStageNpcEntity__int__TypeInfo,
                                               v431,
                                               v432,
                                               v433);
    System_Func_object__int____ctor(_9__77_3, v437, Method_WarBoardData___c___ctor_b__77_3__, 0LL);
    v438 = WarBoardData___c_TypeInfo->static_fields;
    v438->__9__77_3 = (struct System_Func_WarBoardStageNpcEntity__int__o *)_9__77_3;
    sub_1BCA784((PartyOrganizationUtility_o *)&v438->__9__77_3, (int64_t)_9__77_3, v439, v440, v441, v442, v443, v444);
  }
  Instance = System_Linq_Enumerable__Max_object_(
               v435,
               (System_Func_TSource__int__o *)_9__77_3,
               (const MethodInfo_2F3A048 *)Method_System_Linq_Enumerable_Max_WarBoardStageNpcEntity___);
  npcEntityDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.npcEntityDict;
  this->fields._maxForceId_k__BackingField = Instance;
  if ( !npcEntityDict )
    goto LABEL_359;
  v446 = System_Collections_Generic_Dictionary_uint__object___get_Values(
           npcEntityDict,
           (const MethodInfo_329DCD8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Values__);
  v450 = WarBoardData___c_TypeInfo;
  v451 = (System_Collections_Generic_IEnumerable_TSource__o *)v446;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, v447);
    v450 = WarBoardData___c_TypeInfo;
  }
  _9__77_4 = (System_Func_object__int__o *)v450->static_fields->__9__77_4;
  if ( !_9__77_4 )
  {
    if ( !v450->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v450, v447);
      v450 = WarBoardData___c_TypeInfo;
    }
    v453 = (Il2CppObject *)v450->static_fields->__9;
    _9__77_4 = (System_Func_object__int__o *)sub_1BCAA2C(
                                               System_Func_WarBoardStageNpcEntity__int__TypeInfo,
                                               v447,
                                               v448,
                                               v449);
    System_Func_object__int____ctor(_9__77_4, v453, Method_WarBoardData___c___ctor_b__77_4__, 0LL);
    v454 = WarBoardData___c_TypeInfo->static_fields;
    v454->__9__77_4 = (struct System_Func_WarBoardStageNpcEntity__int__o *)_9__77_4;
    sub_1BCA784((PartyOrganizationUtility_o *)&v454->__9__77_4, (int64_t)_9__77_4, v455, v456, v457, v458, v459, v460);
  }
  p_bgAnimationInfo_k__BackingField = (PartyOrganizationUtility_o *)&this->fields._bgAnimationInfo_k__BackingField;
  p_listUiData = (PartyOrganizationUtility_o *)&this->fields.listUiData;
  this->fields._maxGroupId_k__BackingField = System_Linq_Enumerable__Max_object_(
                                               v451,
                                               (System_Func_TSource__int__o *)_9__77_4,
                                               (const MethodInfo_2F3A048 *)Method_System_Linq_Enumerable_Max_WarBoardStageNpcEntity___);
  v1039 = this;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_359;
  v1027 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v461);
  Master_object = (WarBoardStagePieceDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
  v1034 = (NpcFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v1038 = (WarBoardCommonReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  v1043 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_WarBoardSquareData__TypeInfo,
                                                         v462,
                                                         v463,
                                                         v464);
  System_Collections_Generic_List_object____ctor(
    v1043,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor__);
  v1036 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_WarBoardSquareData__TypeInfo,
                                                         v465,
                                                         v466,
                                                         v467);
  System_Collections_Generic_List_object____ctor(
    v1036,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor__);
  v471 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                        v468,
                                                        v469,
                                                        v470);
  System_Collections_Generic_List_object____ctor(
    v471,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v1033 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_WarBoardItemData__TypeInfo,
                                                         v472,
                                                         v473,
                                                         v474);
  System_Collections_Generic_List_object____ctor(
    v1033,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardItemData___ctor__);
  v1028 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_WarBoardTreasureData__TypeInfo,
                                                         v475,
                                                         v476,
                                                         v477);
  System_Collections_Generic_List_object____ctor(
    v1028,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardTreasureData___ctor__);
  v1031 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_WarBoardWallData__TypeInfo,
                                                         v478,
                                                         v479,
                                                         v480);
  System_Collections_Generic_List_object____ctor(
    v1031,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardWallData___ctor__);
  v1032 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_WarBoardEffectData__TypeInfo,
                                                         v481,
                                                         v482,
                                                         v483);
  System_Collections_Generic_List_object____ctor(
    v1032,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardEffectData___ctor__);
  v485 = WarBoardData_TypeInfo;
  if ( !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo, v484);
    v485 = WarBoardData_TypeInfo;
  }
  v486 = serverData;
  v487 = v1043;
  v488 = layoutEntities;
  WARBOARDDATA_SAVEDATA_KEY = v485->static_fields->WARBOARDDATA_SAVEDATA_KEY;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, v484);
  Instance = EncryptedPlayerPrefs__HasKey(WARBOARDDATA_SAVEDATA_KEY, 0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( !serverData )
      goto LABEL_359;
    v490 = WarBoardData_TypeInfo;
    progressType = serverData->fields.progressType;
    if ( !WarBoardData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo, throughCondId);
    if ( progressType == 3 )
    {
      WarBoardData__DeleteLocalSave((const MethodInfo *)v490);
    }
    else
    {
      v492 = WarBoardData_TypeInfo->static_fields->WARBOARDDATA_SAVEDATA_KEY;
      if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, throughCondId);
      String = EncryptedPlayerPrefs__GetString(v492, 0LL);
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v493);
      v495 = System_Convert__FromBase64String(String, 0LL);
      v499 = (MiniMessagePack_MiniMessagePacker_o *)sub_1BCAA2C(
                                                      MiniMessagePack_MiniMessagePacker_TypeInfo,
                                                      v496,
                                                      v497,
                                                      v498);
      MiniMessagePack_MiniMessagePacker___ctor(v499, 0LL);
      if ( !v499 )
        goto LABEL_359;
      v500 = MiniMessagePack_MiniMessagePacker__UnpackClass_object_(
               v499,
               v495,
               (const MethodInfo_2F912C8 *)Method_MiniMessagePack_MiniMessagePacker_UnpackClass_WarBoardData_WarBoardLocalSaveData___);
      this->fields.localSaveData = (struct WarBoardData_WarBoardLocalSaveData_o *)v500;
      p_localSaveData = &this->fields.localSaveData;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.localSaveData,
        (int64_t)v500,
        v502,
        v503,
        v504,
        v505,
        v506,
        v507);
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
        Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        v513 = (_QWORD *)Instance;
        if ( (int)pieceSaves->max_length < 1 )
        {
LABEL_87:
          v1052 = (System_Object_array **)v513;
          if ( !*p_localSaveData )
            goto LABEL_359;
          itemSaves = (*p_localSaveData)->fields.itemSaves;
          v1041 = v471;
          if ( !itemSaves )
            goto LABEL_359;
          if ( (int)itemSaves->max_length < 1 )
          {
LABEL_97:
            if ( !v513 )
              goto LABEL_359;
            v544 = (PartyOrganizationUtility_o *)(v513 + 5);
            if ( v1052[5] )
            {
              if ( !*p_localSaveData )
                goto LABEL_359;
              treasureSaves = (*p_localSaveData)->fields.treasureSaves;
              if ( !treasureSaves )
                goto LABEL_359;
              if ( (int)treasureSaves->max_length >= 1 )
              {
                v546 = 0;
                v547 = 0LL;
                do
                {
                  v548 = sub_1BCAA2C(WarBoardData___c__DisplayClass77_2_TypeInfo, throughCondId, v510, v511);
                  WarBoardData___c__DisplayClass77_2___ctor((WarBoardData___c__DisplayClass77_2_o *)v548, 0LL);
                  if ( v547 >= treasureSaves->max_length )
                    goto LABEL_360;
                  if ( !v548 )
                    goto LABEL_359;
                  v555 = (int64_t)treasureSaves->m_Items[v547];
                  *(_QWORD *)(v548 + 16) = v555;
                  v556 = v548 + 16;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v548 + 16), v555, v549, v550, v551, v552, v553, v554);
                  klass = (System_Collections_Generic_IEnumerable_TSource__o *)v544->klass;
                  v561 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                          System_Func_WarBoardUserTreasureData__bool__TypeInfo,
                                                          v558,
                                                          v559,
                                                          v560);
                  System_Func_object__bool____ctor(
                    v561,
                    (Il2CppObject *)v548,
                    Method_WarBoardData___c__DisplayClass77_2___ctor_b__8__,
                    0LL);
                  Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                                        klass,
                                        (System_Func_TSource__bool__o *)v561,
                                        (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserTreasureData___);
                  if ( Instance )
                  {
                    if ( !*(_QWORD *)v556 )
                      goto LABEL_359;
                    if ( !*(_BYTE *)(*(_QWORD *)v556 + 20LL) )
                    {
                      v546 = 1;
                      *(_BYTE *)(Instance + 20) = 0;
                    }
                  }
                  ++v547;
                }
                while ( (__int64)v547 < (int)treasureSaves->max_length );
                if ( (v546 & 1) != 0 )
                {
                  v562 = WarBoardData___c_TypeInfo;
                  v563 = (System_Collections_Generic_IEnumerable_TSource__o *)v544->klass;
                  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, throughCondId);
                    v562 = WarBoardData___c_TypeInfo;
                  }
                  _9__77_9 = (System_Func_object__bool__o *)v562->static_fields->__9__77_9;
                  if ( !_9__77_9 )
                  {
                    if ( !v562->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(v562, throughCondId);
                      v562 = WarBoardData___c_TypeInfo;
                    }
                    v565 = (Il2CppObject *)v562->static_fields->__9;
                    _9__77_9 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                                System_Func_WarBoardUserTreasureData__bool__TypeInfo,
                                                                throughCondId,
                                                                v510,
                                                                v511);
                    System_Func_object__bool____ctor(_9__77_9, v565, Method_WarBoardData___c___ctor_b__77_9__, 0LL);
                    v566 = WarBoardData___c_TypeInfo->static_fields;
                    v566->__9__77_9 = (struct System_Func_WarBoardUserTreasureData__bool__o *)_9__77_9;
                    sub_1BCA784(
                      (PartyOrganizationUtility_o *)&v566->__9__77_9,
                      (int64_t)_9__77_9,
                      v567,
                      v568,
                      v569,
                      v570,
                      v571,
                      v572);
                  }
                  v573 = System_Linq_Enumerable__Where_object_(
                           v563,
                           (System_Func_TSource__bool__o *)_9__77_9,
                           (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_WarBoardUserTreasureData___);
                  v574 = System_Linq_Enumerable__ToArray_object_(
                           v573,
                           (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_WarBoardUserTreasureData___);
                  v544->klass = (PartyOrganizationUtility_c *)v574;
                  sub_1BCA784(v544, (int64_t)v574, v575, v576, v577, v578, v579, v580);
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
              v596 = System_Linq_Enumerable__Count_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)(*p_localSaveData)->fields.squareIndexInfo,
                       (const MethodInfo_2F2DF88 *)Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData_SaveData___);
              System_Array__Resize_object_(
                v1052 + 11,
                v596,
                (const MethodInfo_2ED21D8 *)Method_System_Array_Resize_WarBoardSquareIndexData___);
              v488 = layoutEntities;
              if ( v596 >= 1 )
              {
                v599 = 0LL;
                v600 = (unsigned int)v596;
                v601 = 8LL;
                while ( *p_localSaveData )
                {
                  squareIndexInfo = (*p_localSaveData)->fields.squareIndexInfo;
                  if ( !squareIndexInfo )
                    break;
                  if ( v599 >= squareIndexInfo->max_length )
                    goto LABEL_360;
                  v603 = (unsigned int *)v1052[11];
                  v604 = *(WarBoardSquareIndexData_SaveData_o **)((char *)&squareIndexInfo->obj.klass + v601 * 4);
                  v605 = (WarBoardSquareIndexData_o *)sub_1BCAA2C(
                                                        WarBoardSquareIndexData_TypeInfo,
                                                        throughCondId,
                                                        v597,
                                                        v598);
                  WarBoardSquareIndexData___ctor_36276888(v605, v604, 0LL);
                  if ( !v603 )
                    break;
                  if ( v605 )
                  {
                    Instance = sub_1BCA91C(v605, *(_QWORD *)(*(_QWORD *)v603 + 64LL));
                    if ( !Instance )
                    {
LABEL_361:
                      v1020 = sub_1BCAA60(Instance);
                      sub_1BCA908(v1020, 0LL);
                    }
                  }
                  if ( v599 >= v603[6] )
                    goto LABEL_360;
                  *(_QWORD *)&v603[v601] = v605;
                  sub_1BCA784(
                    (PartyOrganizationUtility_o *)&v603[v601],
                    (int64_t)v605,
                    v606,
                    v607,
                    v608,
                    v609,
                    v610,
                    v611);
                  v471 = v1041;
                  ++v599;
                  v601 += 2LL;
                  if ( v600 == v599 )
                    goto LABEL_138;
                }
                goto LABEL_359;
              }
LABEL_138:
              if ( !*p_localSaveData )
                goto LABEL_359;
              v486 = (WarBoardDataEntity_o *)v1052;
              v612 = System_Linq_Enumerable__Count_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)(*p_localSaveData)->fields.bossBattleInfo,
                       (const MethodInfo_2F2DF88 *)Method_System_Linq_Enumerable_Count_WarBoardBossBattleData_SaveData___);
              System_Array__Resize_object_(
                v1052 + 12,
                v612,
                (const MethodInfo_2ED21D8 *)Method_System_Array_Resize_WarBoardBossBattleData___);
              if ( v612 >= 1 )
              {
                v615 = 0LL;
                v616 = (unsigned int)v612;
                v617 = 8LL;
                do
                {
                  if ( !*p_localSaveData )
                    goto LABEL_359;
                  bossBattleInfo = (*p_localSaveData)->fields.bossBattleInfo;
                  if ( !bossBattleInfo )
                    goto LABEL_359;
                  if ( v615 >= bossBattleInfo->max_length )
                    goto LABEL_360;
                  v619 = (unsigned int *)v1052[12];
                  v620 = *(WarBoardBossBattleData_SaveData_o **)((char *)&bossBattleInfo->obj.klass + v617 * 4);
                  v621 = (WarBoardBossBattleData_o *)sub_1BCAA2C(
                                                       WarBoardBossBattleData_TypeInfo,
                                                       throughCondId,
                                                       v613,
                                                       v614);
                  WarBoardBossBattleData___ctor_36030124(v621, v620, v622);
                  if ( !v619 )
                    goto LABEL_359;
                  if ( v621 )
                  {
                    Instance = sub_1BCA91C(v621, *(_QWORD *)(*(_QWORD *)v619 + 64LL));
                    if ( !Instance )
                      goto LABEL_361;
                  }
                  if ( v615 >= v619[6] )
                    goto LABEL_360;
                  *(_QWORD *)&v619[v617] = v621;
                  sub_1BCA784(
                    (PartyOrganizationUtility_o *)&v619[v617],
                    (int64_t)v621,
                    v623,
                    v624,
                    v625,
                    v626,
                    v627,
                    v628);
                  v471 = v1041;
                  ++v615;
                  v617 += 2LL;
                }
                while ( v616 != v615 );
                v486 = (WarBoardDataEntity_o *)v1052;
              }
              v487 = v1043;
              goto LABEL_154;
            }
            v582 = 0LL;
            while ( 1 )
            {
              v583 = sub_1BCAA2C(WarBoardData___c__DisplayClass77_3_TypeInfo, throughCondId, v510, v511);
              WarBoardData___c__DisplayClass77_3___ctor((WarBoardData___c__DisplayClass77_3_o *)v583, 0LL);
              if ( v582 >= wallSaves->max_length )
                break;
              if ( !v583 )
                goto LABEL_359;
              v590 = (int64_t)wallSaves->m_Items[v582];
              *(_QWORD *)(v583 + 16) = v590;
              sub_1BCA784((PartyOrganizationUtility_o *)(v583 + 16), v590, v584, v585, v586, v587, v588, v589);
              v591 = (System_Collections_Generic_IEnumerable_TSource__o *)v1052[6];
              v595 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                      System_Func_WarBoardUserWallData__bool__TypeInfo,
                                                      v592,
                                                      v593,
                                                      v594);
              System_Func_object__bool____ctor(
                v595,
                (Il2CppObject *)v583,
                Method_WarBoardData___c__DisplayClass77_3___ctor_b__10__,
                0LL);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                                    v591,
                                    (System_Func_TSource__bool__o *)v595,
                                    (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
              if ( Instance )
                WarBoardUserWallData__SetSaveData(
                  (WarBoardUserWallData_o *)Instance,
                  *(WarBoardWallData_SaveData_o **)(v583 + 16),
                  0LL);
              if ( (__int64)++v582 >= (int)wallSaves->max_length )
                goto LABEL_127;
            }
          }
          else
          {
            v531 = 0LL;
            while ( 1 )
            {
              v532 = sub_1BCAA2C(WarBoardData___c__DisplayClass77_1_TypeInfo, throughCondId, v510, v511);
              WarBoardData___c__DisplayClass77_1___ctor((WarBoardData___c__DisplayClass77_1_o *)v532, 0LL);
              if ( v531 >= itemSaves->max_length )
                break;
              if ( !v532 )
                goto LABEL_359;
              v539 = (int64_t)itemSaves->m_Items[v531];
              *(_QWORD *)(v532 + 16) = v539;
              sub_1BCA784((PartyOrganizationUtility_o *)(v532 + 16), v539, v533, v534, v535, v536, v537, v538);
              if ( !v513 )
                goto LABEL_359;
              v542 = (System_Collections_Generic_IEnumerable_TSource__o *)v513[4];
              v543 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                      System_Func_WarBoardUserGetItemData__bool__TypeInfo,
                                                      throughCondId,
                                                      v540,
                                                      v541);
              System_Func_object__bool____ctor(
                v543,
                (Il2CppObject *)v532,
                Method_WarBoardData___c__DisplayClass77_1___ctor_b__7__,
                0LL);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                                    v542,
                                    (System_Func_TSource__bool__o *)v543,
                                    (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
              if ( Instance )
                WarBoardUserGetItemData__SetSaveData(
                  (WarBoardUserGetItemData_o *)Instance,
                  *(WarBoardItemData_SaveData_o **)(v532 + 16),
                  0LL);
              if ( (__int64)++v531 >= (int)itemSaves->max_length )
                goto LABEL_97;
            }
          }
        }
        else
        {
          v514 = 0LL;
          while ( 1 )
          {
            v515 = sub_1BCAA2C(WarBoardData___c__DisplayClass77_0_TypeInfo, throughCondId, v510, v511);
            WarBoardData___c__DisplayClass77_0___ctor((WarBoardData___c__DisplayClass77_0_o *)v515, 0LL);
            if ( v514 >= pieceSaves->max_length )
              break;
            if ( !v515 )
              goto LABEL_359;
            v522 = (int64_t)pieceSaves->m_Items[v514];
            *(_QWORD *)(v515 + 16) = v522;
            v523 = (WarBoardPieceData_SaveData_o **)(v515 + 16);
            sub_1BCA784((PartyOrganizationUtility_o *)(v515 + 16), v522, v516, v517, v518, v519, v520, v521);
            if ( !*(_QWORD *)(v515 + 16) || !v513 )
              goto LABEL_359;
            if ( *(_DWORD *)(*(_QWORD *)(v515 + 16) + 24LL) )
            {
              v526 = (System_Collections_Generic_IEnumerable_TSource__o *)v513[2];
              v527 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                      System_Func_WarBoardUserServantData__bool__TypeInfo,
                                                      throughCondId,
                                                      v524,
                                                      v525);
              System_Func_object__bool____ctor(
                v527,
                (Il2CppObject *)v515,
                Method_WarBoardData___c__DisplayClass77_0___ctor_b__6__,
                0LL);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                                    v526,
                                    (System_Func_TSource__bool__o *)v527,
                                    (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
              if ( Instance )
                WarBoardUserServantData__SetSaveData((WarBoardUserServantData_o *)Instance, *v523, 0LL);
            }
            else
            {
              v528 = (System_Collections_Generic_IEnumerable_TSource__o *)v513[3];
              v529 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                      System_Func_WarBoardUserMasterData__bool__TypeInfo,
                                                      throughCondId,
                                                      v524,
                                                      v525);
              System_Func_object__bool____ctor(
                v529,
                (Il2CppObject *)v515,
                Method_WarBoardData___c__DisplayClass77_0___ctor_b__5__,
                0LL);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                                    v528,
                                    (System_Func_TSource__bool__o *)v529,
                                    (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
              if ( Instance )
                WarBoardUserMasterData__SetSaveData((WarBoardUserMasterData_o *)Instance, *v523, 0LL);
            }
            if ( (__int64)++v514 >= (int)pieceSaves->max_length )
              goto LABEL_87;
          }
        }
LABEL_360:
        sub_1BCAA44(Instance, throughCondId);
      }
      v629 = WarBoardData_TypeInfo;
      if ( !WarBoardData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo, v508);
      WarBoardData__DeleteLocalSave((const MethodInfo *)v629);
      *p_localSaveData = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.localSaveData, 0LL, v630, v631, v632, v633, v634, v635);
    }
LABEL_154:
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    goto LABEL_155;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !serverData )
    goto LABEL_359;
LABEL_155:
  if ( !Instance )
    goto LABEL_359;
  WarBoardManager__InitializeLogic((WarBoardManager_o *)Instance, v486, v486->fields.progressType != 3, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_359;
  WarBoardManager__UpdateServerData((WarBoardManager_o *)Instance, v486, 0LL);
  v1053 = v486;
  if ( (int)v1054 >= 1 )
  {
    v638 = 0LL;
    p_enemyDeck = &v486->fields.enemyDeck;
    npcIdx = 0;
    p_myDeck = &v486->fields.myDeck;
    v1042 = v471;
    do
    {
      v639 = sub_1BCAA2C(WarBoardData___c__DisplayClass77_4_TypeInfo, throughCondId, v636, v637);
      WarBoardData___c__DisplayClass77_4___ctor((WarBoardData___c__DisplayClass77_4_o *)v639, 0LL);
      if ( v638 >= v488->max_length )
        goto LABEL_360;
      if ( !v639 )
        goto LABEL_359;
      v646 = (int64_t)v488->m_Items[v638];
      *(_QWORD *)(v639 + 16) = v646;
      v647 = (WarBoardStageLayoutEntity_o **)(v639 + 16);
      sub_1BCA784((PartyOrganizationUtility_o *)(v639 + 16), v646, v640, v641, v642, v643, v644, v645);
      v648 = *(WarBoardStageLayoutEntity_o **)(v639 + 16);
      v652 = (WarBoardSquareData_o *)sub_1BCAA2C(WarBoardSquareData_TypeInfo, v649, v650, v651);
      WarBoardSquareData___ctor(v652, v648, roadEntities, 0LL);
      if ( v638 )
      {
        if ( (unsigned int)(v638 - 1) >= v488->max_length )
          goto LABEL_360;
        v657 = *((_QWORD *)&v488->max_length + v638);
        if ( !v657 )
          goto LABEL_359;
        v658 = *v647;
        if ( !*v647 )
          goto LABEL_359;
        if ( *(_DWORD *)(v657 + 20) == v658->fields.squareIndex )
          goto LABEL_176;
      }
      else
      {
        v658 = *v647;
        if ( !*v647 )
          goto LABEL_359;
      }
      throughCondId = (unsigned int)v658->fields.throughCondId;
      if ( !(_DWORD)throughCondId )
        goto LABEL_364;
      Instance = (__int64)v1038;
      if ( !v1038 )
        goto LABEL_359;
      Instance = WarBoardCommonReleaseMaster__IsOpen(v1038, throughCondId, 0LL);
      if ( (Instance & 1) != 0 )
      {
LABEL_364:
        if ( !v487 )
          goto LABEL_359;
        items = v487->fields._items;
        v660 = Method_System_Collections_Generic_List_WarBoardSquareData__Add__;
        ++v487->fields._version;
        if ( !items )
          goto LABEL_359;
        size = v487->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v487,
            (Il2CppObject *)v652,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v660[4] + 192LL) + 112LL));
        }
        else
        {
          v662 = &items->obj.klass + size;
          v487->fields._size = size + 1;
          v662[4] = (Il2CppClass *)v652;
          sub_1BCA784((PartyOrganizationUtility_o *)(v662 + 4), (int64_t)v652, v636, v637, v653, v654, v655, v656);
        }
LABEL_176:
        v663 = *v647;
        if ( !*v647 )
          goto LABEL_359;
        if ( v663->fields.isPiecePut )
        {
          questPhase = v486->fields.questPhase;
          questId = v486->fields.questId;
          if ( v663->fields.pieceIndex )
          {
            svtInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v486->fields.svtInfo;
            v666 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                    System_Func_WarBoardUserServantData__bool__TypeInfo,
                                                    throughCondId,
                                                    v636,
                                                    v637);
            System_Func_object__bool____ctor(
              v666,
              (Il2CppObject *)v639,
              Method_WarBoardData___c__DisplayClass77_4___ctor_b__13__,
              0LL);
            Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                                  svtInfo,
                                  (System_Func_TSource__bool__o *)v666,
                                  (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
            v667 = (WarBoardUserServantData_o *)Instance;
            v668 = 0LL;
          }
          else
          {
            masterInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v486->fields.masterInfo;
            v676 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                    System_Func_WarBoardUserMasterData__bool__TypeInfo,
                                                    throughCondId,
                                                    v636,
                                                    v637);
            System_Func_object__bool____ctor(
              v676,
              (Il2CppObject *)v639,
              Method_WarBoardData___c__DisplayClass77_4___ctor_b__12__,
              0LL);
            Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                                  masterInfo,
                                  (System_Func_TSource__bool__o *)v676,
                                  (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
            v668 = (WarBoardUserMasterData_o *)Instance;
            v667 = 0LL;
          }
          v677 = *v647;
          if ( !*v647 )
            goto LABEL_359;
          v678 = p_enemyDeck;
          v1048 = questPhase;
          if ( !v677->fields.forceId )
          {
            v678 = p_enemyDeck;
            if ( !v677->fields.pieceIndex )
              v678 = p_myDeck;
          }
          v679 = *v678;
          Type = Follower__getType(v677->fields.followerType, 0LL);
          IsNpc = Follower__IsNpc(Type, 0LL);
          v682 = *v647;
          v683 = v486->fields.progressType;
          v684 = IsNpc;
          v685 = *p_npcEntityDict;
          v689 = (WarBoardPieceData_o *)sub_1BCAA2C(WarBoardPieceData_TypeInfo, v686, v687, v688);
          v690 = v689;
          v691 = v683 == 3;
          if ( v684 )
          {
            WarBoardPieceData___ctor(v689, v682, v667, v668, v679, v691, v685, npcIdx, 0LL);
            if ( !*v647 )
              goto LABEL_359;
            v486 = v1053;
            v488 = layoutEntities;
            v471 = v1042;
            Instance = (__int64)Master_object;
            if ( !Master_object )
              goto LABEL_359;
            Instance = WarBoardStagePieceDetailMaster__TryGetEntity(
                         Master_object,
                         &entity,
                         (*v647)->fields.stageId,
                         (*v647)->fields.forceId,
                         (*v647)->fields.groupId,
                         (*v647)->fields.pieceIndex,
                         0LL);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)entity;
              if ( !entity )
                goto LABEL_359;
              Instance = WarBoardStagePieceDetailEntity__GetImageSvtId(entity, 0LL);
              if ( !v690 )
                goto LABEL_359;
              v690->fields._npcImageSvtId_k__BackingField = Instance;
              Instance = (__int64)entity;
              if ( !entity )
                goto LABEL_359;
              v690->fields._npcDispLimitCount_k__BackingField = WarBoardStagePieceDetailEntity__GetDispLimitCnt(
                                                                  entity,
                                                                  0LL);
            }
            else if ( !v690 )
            {
              goto LABEL_359;
            }
            Instance = (__int64)v1034;
            if ( !v1034 )
              goto LABEL_359;
            Entity_40158156 = NpcFollowerMaster__GetEntity_40158156(
                                v1034,
                                questId,
                                v1048,
                                v690->fields._npcId_k__BackingField,
                                0LL);
            if ( Entity_40158156 )
            {
              v702 = Entity_40158156;
              if ( !v690->fields._npcImageSvtId_k__BackingField )
                v690->fields._npcImageSvtId_k__BackingField = NpcFollowerEntity__GetImageSvtId(Entity_40158156, 0LL);
              if ( (v690->fields._npcDispLimitCount_k__BackingField & 0x80000000) != 0 )
                v690->fields._npcDispLimitCount_k__BackingField = NpcFollowerEntity__GetDispLimitCnt(v702, -1, 0LL);
            }
            Instance = WarBoardPieceData__get_isPlayerGroup(v690, 0LL);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)v1027;
              if ( !v1027 )
                goto LABEL_359;
              Instance = DataMasterBase_object__object__long___TryGetEntity(
                           v1027,
                           &v1058,
                           v690->fields._npcId_k__BackingField,
                           (const MethodInfo_31B3040 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
              if ( (Instance & 1) != 0 )
              {
                Instance = (__int64)v1058;
                if ( !v1058 )
                  goto LABEL_359;
                Instance = (__int64)NpcServantFollowerEntity__GetFollowerName_40160740(
                                      (NpcServantFollowerEntity_o *)v1058,
                                      v690->fields._npcId_k__BackingField,
                                      questId,
                                      v1048,
                                      &isChangeName,
                                      0LL);
                if ( isChangeName )
                {
                  Instance = (__int64)v690->fields._battleServant_k__BackingField;
                  if ( !Instance )
                    goto LABEL_359;
                  BattleServantData__ClearOverwriteServantName((BattleServantData_o *)Instance, 0LL);
                }
              }
            }
            if ( !v1042 )
              goto LABEL_359;
            v709 = v1042->fields._items;
            v710 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
            ++v1042->fields._version;
            if ( !v709 )
              goto LABEL_359;
            v711 = v1042->fields._size;
            if ( (unsigned int)v711 >= v709->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v1042,
                (Il2CppObject *)v690,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v710[4] + 192LL) + 112LL));
            }
            else
            {
              v712 = &v709->obj.klass + v711;
              v1042->fields._size = v711 + 1;
              v712[4] = (Il2CppClass *)v690;
              sub_1BCA784((PartyOrganizationUtility_o *)(v712 + 4), (int64_t)v690, v703, v704, v705, v706, v707, v708);
            }
            ++npcIdx;
          }
          else
          {
            WarBoardPieceData___ctor(v689, v682, v667, v668, v679, v691, v685, -1, 0LL);
            if ( !v690 )
              goto LABEL_359;
            Instance = WarBoardPieceData__get_isMaster(v690, 0LL);
            v486 = v1053;
            v488 = layoutEntities;
            v471 = v1042;
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)*p_masterExistsForce;
              if ( !*p_masterExistsForce )
                goto LABEL_359;
              Instance = System_Collections_Generic_List_int___Contains(
                           (System_Collections_Generic_List_int__o *)Instance,
                           v690->fields._forceId_k__BackingField,
                           (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
              if ( (Instance & 1) == 0 )
              {
                Instance = (__int64)*p_masterExistsForce;
                if ( !*p_masterExistsForce )
                  goto LABEL_359;
                throughCondId = (unsigned int)v690->fields._forceId_k__BackingField;
                v698 = *(_QWORD *)(Instance + 16);
                v699 = Method_System_Collections_Generic_List_int__Add__;
                ++*(_DWORD *)(Instance + 28);
                if ( !v698 )
                  goto LABEL_359;
                v700 = *(int *)(Instance + 24);
                if ( (unsigned int)v700 >= *(_DWORD *)(v698 + 24) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    (System_Collections_Generic_List_int__o *)Instance,
                    throughCondId,
                    *(const MethodInfo_3584C38 **)(*(_QWORD *)(v699[4] + 192LL) + 112LL));
                }
                else
                {
                  *(_DWORD *)(Instance + 24) = v700 + 1;
                  *(_DWORD *)(v698 + 4 * v700 + 32) = throughCondId;
                }
              }
            }
            if ( !v1042 )
              goto LABEL_359;
            v716 = v1042->fields._items;
            v717 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
            ++v1042->fields._version;
            if ( !v716 )
              goto LABEL_359;
            v718 = v1042->fields._size;
            if ( (unsigned int)v718 >= v716->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v1042,
                (Il2CppObject *)v690,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v717[4] + 192LL) + 112LL));
            }
            else
            {
              v719 = &v716->obj.klass + v718;
              v1042->fields._size = v718 + 1;
              v719[4] = (Il2CppClass *)v690;
              sub_1BCA784((PartyOrganizationUtility_o *)(v719 + 4), (int64_t)v690, v692, v693, v694, v695, v696, v697);
            }
          }
          v487 = v1043;
        }
        v720 = *v647;
        if ( !*v647 )
          goto LABEL_359;
        switch ( v720->fields.type )
        {
          case 2:
            getItemInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v486->fields.getItemInfo;
            v722 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                    System_Func_WarBoardUserGetItemData__bool__TypeInfo,
                                                    throughCondId,
                                                    v636,
                                                    v637);
            System_Func_object__bool____ctor(
              v722,
              (Il2CppObject *)v639,
              Method_WarBoardData___c__DisplayClass77_4___ctor_b__14__,
              0LL);
            v723 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
                     getItemInfo,
                     (System_Func_TSource__bool__o *)v722,
                     (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
            v724 = *(WarBoardStageLayoutEntity_o **)(v639 + 16);
            v725 = (WarBoardUserGetItemData_o *)v723;
            v729 = (WarBoardItemData_o *)sub_1BCAA2C(WarBoardItemData_TypeInfo, v726, v727, v728);
            WarBoardItemData___ctor(v729, v724, v725, 0LL);
            v730 = v1033;
            if ( !v1033 )
              goto LABEL_359;
            version = v1033->fields._version;
            v732 = v1033->fields._items;
            v733 = &Method_System_Collections_Generic_List_WarBoardItemData__Add__;
            goto LABEL_246;
          case 3:
            v729 = (WarBoardItemData_o *)sub_1BCAA2C(WarBoardEffectData_TypeInfo, throughCondId, v636, v637);
            WarBoardEffectData___ctor((WarBoardEffectData_o *)v729, v720, 0LL);
            v730 = v1032;
            if ( !v1032 )
              goto LABEL_359;
            version = v1032->fields._version;
            v732 = v1032->fields._items;
            v733 = &Method_System_Collections_Generic_List_WarBoardEffectData__Add__;
            goto LABEL_246;
          case 4:
            treasureInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v486->fields.treasureInfo;
            if ( !treasureInfo )
              goto LABEL_242;
            v735 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                    System_Func_WarBoardUserTreasureData__bool__TypeInfo,
                                                    throughCondId,
                                                    v636,
                                                    v637);
            System_Func_object__bool____ctor(
              v735,
              (Il2CppObject *)v639,
              Method_WarBoardData___c__DisplayClass77_4___ctor_b__11__,
              0LL);
            Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                                  treasureInfo,
                                  (System_Func_TSource__bool__o *)v735,
                                  (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserTreasureData___);
            if ( Instance )
              continue;
            v720 = *v647;
LABEL_242:
            v729 = (WarBoardItemData_o *)sub_1BCAA2C(WarBoardTreasureData_TypeInfo, throughCondId, v636, v637);
            WarBoardTreasureData___ctor((WarBoardTreasureData_o *)v729, v720, 0LL);
            v730 = v1028;
            if ( !v1028 )
              goto LABEL_359;
            version = v1028->fields._version;
            v732 = v1028->fields._items;
            v733 = &Method_System_Collections_Generic_List_WarBoardTreasureData__Add__;
LABEL_246:
            v744 = *v733;
            v730->fields._version = version + 1;
            if ( !v732 )
              goto LABEL_359;
            v745 = v730->fields._size;
            if ( (unsigned int)v745 < v732->max_length )
            {
              v746 = &v732->obj.klass + v745;
              v730->fields._size = v745 + 1;
              v746[4] = (Il2CppClass *)v729;
              v673 = (PartyOrganizationUtility_o *)(v746 + 4);
              v674 = (int64_t)v729;
              goto LABEL_249;
            }
            v713 = v744[4];
            v714 = v730;
            v715 = (Il2CppObject *)v729;
            break;
          case 5:
            wallInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v486->fields.wallInfo;
            v737 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                    System_Func_WarBoardUserWallData__bool__TypeInfo,
                                                    throughCondId,
                                                    v636,
                                                    v637);
            System_Func_object__bool____ctor(
              v737,
              (Il2CppObject *)v639,
              Method_WarBoardData___c__DisplayClass77_4___ctor_b__15__,
              0LL);
            v738 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
                     wallInfo,
                     (System_Func_TSource__bool__o *)v737,
                     (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
            v739 = *(WarBoardStageLayoutEntity_o **)(v639 + 16);
            v740 = (WarBoardUserWallData_o *)v738;
            v729 = (WarBoardItemData_o *)sub_1BCAA2C(WarBoardWallData_TypeInfo, v741, v742, v743);
            WarBoardWallData___ctor((WarBoardWallData_o *)v729, v739, v740, 0LL);
            v730 = v1031;
            if ( !v1031 )
              goto LABEL_359;
            version = v1031->fields._version;
            v732 = v1031->fields._items;
            v733 = &Method_System_Collections_Generic_List_WarBoardWallData__Add__;
            goto LABEL_246;
          default:
            continue;
        }
        goto LABEL_251;
      }
      if ( !v1036 )
        goto LABEL_359;
      v669 = v1036->fields._items;
      v670 = Method_System_Collections_Generic_List_WarBoardSquareData__Add__;
      ++v1036->fields._version;
      if ( !v669 )
        goto LABEL_359;
      v671 = v1036->fields._size;
      if ( (unsigned int)v671 < v669->max_length )
      {
        v672 = &v669->obj.klass + v671;
        v1036->fields._size = v671 + 1;
        v672[4] = (Il2CppClass *)v652;
        v673 = (PartyOrganizationUtility_o *)(v672 + 4);
        v674 = (int64_t)v652;
LABEL_249:
        sub_1BCA784(v673, v674, v636, v637, v653, v654, v655, v656);
        continue;
      }
      v713 = v670[4];
      v714 = v1036;
      v715 = (Il2CppObject *)v652;
LABEL_251:
      System_Collections_Generic_List_object___AddWithResize(
        v714,
        v715,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v713 + 192) + 112LL));
    }
    while ( (unsigned int)v1054 != ++v638 );
  }
  if ( !v487 )
    goto LABEL_359;
  v747 = System_Collections_Generic_List_object___ToArray(
           v487,
           (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  v748 = v1039;
  v1039->fields.squares = (struct WarBoardSquareData_array *)v747;
  sub_1BCA784((PartyOrganizationUtility_o *)&v1039->fields.squares, (int64_t)v747, v749, v750, v751, v752, v753, v754);
  Instance = (__int64)v1036;
  if ( !v1036 )
    goto LABEL_359;
  v755 = System_Collections_Generic_List_object___ToArray(
           v1036,
           (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  v1039->fields.condSquares = (struct WarBoardSquareData_array *)v755;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1039->fields.condSquares,
    (int64_t)v755,
    v756,
    v757,
    v758,
    v759,
    v760,
    v761);
  if ( !v471 )
    goto LABEL_359;
  v762 = System_Collections_Generic_List_object___ToArray(
           v471,
           (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  v1039->fields.pieces = (struct WarBoardPieceData_array *)v762;
  p_pieces = (System_Collections_Generic_IEnumerable_T__o **)&v1039->fields.pieces;
  sub_1BCA784((PartyOrganizationUtility_o *)&v1039->fields.pieces, (int64_t)v762, v764, v765, v766, v767, v768, v769);
  pieces = (System_Object_array *)v1039->fields.pieces;
  v774 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_WarBoardPieceData__TypeInfo, v771, v772, v773);
  System_Comparison_object____ctor(v774, (Il2CppObject *)v1039, Method_WarBoardData_ComparePiece__, 0LL);
  System_Array__Sort_object__49153980(
    pieces,
    v774,
    (const MethodInfo_2EE07BC *)Method_System_Array_Sort_WarBoardPieceData___);
  Instance = (__int64)v1033;
  if ( !v1033 )
    goto LABEL_359;
  v775 = System_Collections_Generic_List_object___ToArray(
           v1033,
           (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_WarBoardItemData__ToArray__);
  v1039->fields.items = (struct WarBoardItemData_array *)v775;
  sub_1BCA784((PartyOrganizationUtility_o *)&v1039->fields.items, (int64_t)v775, v776, v777, v778, v779, v780, v781);
  Instance = (__int64)v1028;
  if ( !v1028 )
    goto LABEL_359;
  v782 = System_Collections_Generic_List_object___ToArray(
           v1028,
           (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_WarBoardTreasureData__ToArray__);
  v1039->fields.treasures = (struct WarBoardTreasureData_array *)v782;
  sub_1BCA784((PartyOrganizationUtility_o *)&v1039->fields.treasures, (int64_t)v782, v783, v784, v785, v786, v787, v788);
  Instance = (__int64)v1032;
  if ( !v1032 )
    goto LABEL_359;
  v789 = System_Collections_Generic_List_object___ToArray(
           v1032,
           (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_WarBoardEffectData__ToArray__);
  v1039->fields.effects = (struct WarBoardEffectData_array *)v789;
  sub_1BCA784((PartyOrganizationUtility_o *)&v1039->fields.effects, (int64_t)v789, v790, v791, v792, v793, v794, v795);
  Instance = (__int64)v1031;
  if ( !v1031 )
    goto LABEL_359;
  v796 = System_Collections_Generic_List_object___ToArray(
           v1031,
           (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_WarBoardWallData__ToArray__);
  v1039->fields.walls = (struct WarBoardWallData_array *)v796;
  sub_1BCA784((PartyOrganizationUtility_o *)&v1039->fields.walls, (int64_t)v796, v797, v798, v799, v800, v801, v802);
  v1039->fields.serverData = v486;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1039->fields.serverData,
    (int64_t)v486,
    v803,
    v804,
    v805,
    v806,
    v807,
    v808);
  if ( v486->fields.progressType == 3 )
    WarBoardData__InitPrevCondData(v1039, (const MethodInfo *)throughCondId);
  v811 = v1039->fields.localSaveData;
  if ( v811 )
  {
    v812 = v811->fields.pieceSaves;
    roadEntitiesb = (WarBoardRoadEntity_array *)&v1039->fields.localSaveData;
    if ( v812 )
    {
      if ( (int)v812->max_length >= 1 )
      {
        v813 = 0LL;
        do
        {
          v814 = sub_1BCAA2C(WarBoardData___c__DisplayClass77_5_TypeInfo, throughCondId, v809, v810);
          WarBoardData___c__DisplayClass77_5___ctor((WarBoardData___c__DisplayClass77_5_o *)v814, 0LL);
          if ( v813 >= v812->max_length )
            goto LABEL_360;
          if ( !v814 )
            goto LABEL_359;
          v821 = (int64_t)v812->m_Items[v813];
          *(_QWORD *)(v814 + 16) = v821;
          v822 = (WarBoardPieceData_SaveData_o **)(v814 + 16);
          sub_1BCA784((PartyOrganizationUtility_o *)(v814 + 16), v821, v815, v816, v817, v818, v819, v820);
          v823 = *p_pieces;
          v827 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                  System_Func_WarBoardPieceData__bool__TypeInfo,
                                                  v824,
                                                  v825,
                                                  v826);
          System_Func_object__bool____ctor(
            v827,
            (Il2CppObject *)v814,
            Method_WarBoardData___c__DisplayClass77_5___ctor_b__16__,
            0LL);
          if ( !BasicHelper__Any_object__49274176(
                  (System_Object_array *)v823,
                  (System_Func_T__bool__o *)v827,
                  (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_WarBoardPieceData___) )
          {
            v830 = (System_Collections_Generic_IEnumerable_TSource__o *)v486->fields.svtInfo;
            v831 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                    System_Func_WarBoardUserServantData__bool__TypeInfo,
                                                    throughCondId,
                                                    v828,
                                                    v829);
            System_Func_object__bool____ctor(
              v831,
              (Il2CppObject *)v814,
              Method_WarBoardData___c__DisplayClass77_5___ctor_b__17__,
              0LL);
            v832 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
                     v830,
                     (System_Func_TSource__bool__o *)v831,
                     (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
            v836 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                                  v833,
                                                                  v834,
                                                                  v835);
            System_Collections_Generic_List_object____ctor(
              v836,
              (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
            if ( !v836 )
              goto LABEL_359;
            System_Collections_Generic_List_object___AddRange(
              v836,
              *p_pieces,
              (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
            if ( !p_fields->stageEntity )
              goto LABEL_359;
            id = p_fields->stageEntity->fields.id;
            v840 = *v822;
            v841 = (WarBoardPieceData_o *)sub_1BCAA2C(WarBoardPieceData_TypeInfo, throughCondId, v837, v838);
            WarBoardPieceData___ctor_36254404(v841, id, (WarBoardUserServantData_o *)v832, v840, 0LL, -1, 0LL);
            v848 = v836->fields._items;
            v849 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
            ++v836->fields._version;
            if ( !v848 )
              goto LABEL_359;
            v850 = v836->fields._size;
            if ( (unsigned int)v850 >= v848->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v836,
                (Il2CppObject *)v841,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v849[4] + 192LL) + 112LL));
            }
            else
            {
              v851 = &v848->obj.klass + v850;
              v836->fields._size = v850 + 1;
              v851[4] = (Il2CppClass *)v841;
              sub_1BCA784((PartyOrganizationUtility_o *)(v851 + 4), (int64_t)v841, v842, v843, v844, v845, v846, v847);
            }
            v486 = v1053;
            v852 = System_Collections_Generic_List_object___ToArray(
                     v836,
                     (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
            *p_pieces = (System_Collections_Generic_IEnumerable_T__o *)v852;
            sub_1BCA784((PartyOrganizationUtility_o *)p_pieces, (int64_t)v852, v853, v854, v855, v856, v857, v858);
            v748 = v1039;
          }
          Instance = (__int64)*v822;
          if ( !*v822 )
            goto LABEL_359;
          WarBoardPieceData_SaveData__SetOwner((WarBoardPieceData_SaveData_o *)Instance, v748, 0LL);
          Instance = (__int64)*v822;
          if ( !*v822 )
            goto LABEL_359;
          WarBoardPieceData_SaveData__Load((WarBoardPieceData_SaveData_o *)Instance, 0LL);
        }
        while ( (__int64)++v813 < (int)v812->max_length );
      }
      if ( roadEntitiesb->obj.klass )
      {
        v859 = *(_QWORD *)&roadEntitiesb->obj.klass->_1.byval_arg.bits;
        if ( v859 )
        {
          v860 = *(_DWORD *)(v859 + 24);
          if ( v860 >= 1 )
          {
            v861 = 0;
            while ( v861 < v860 )
            {
              v862 = v859 + 8LL * (int)v861;
              v863 = *(WarBoardItemData_SaveData_o **)(v862 + 32);
              if ( !v863 )
                goto LABEL_359;
              WarBoardItemData_SaveData__SetOwner(*(WarBoardItemData_SaveData_o **)(v862 + 32), v748, 0LL);
              WarBoardItemData_SaveData__Load(v863, 0LL);
              v860 = *(_DWORD *)(v859 + 24);
              if ( (int)++v861 >= v860 )
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
              v865 = data[6];
              if ( v865 >= 1 )
              {
                v866 = 0;
                while ( v866 < v865 )
                {
                  v867 = (char *)&data[2 * v866];
                  v868 = (WarBoardTreasureData_SaveData_o *)*((_QWORD *)v867 + 4);
                  if ( !v868 )
                    goto LABEL_359;
                  WarBoardTreasureData_SaveData__SetOwner(*((WarBoardTreasureData_SaveData_o **)v867 + 4), v748, 0LL);
                  WarBoardTreasureData_SaveData__Load(v868, 0LL);
                  v865 = data[6];
                  if ( (int)++v866 >= v865 )
                    goto LABEL_293;
                }
                goto LABEL_360;
              }
LABEL_293:
              if ( roadEntitiesb->obj.klass )
              {
                v869 = *(_QWORD *)&roadEntitiesb->obj.klass->_1.this_arg.bits;
                if ( v869 )
                {
                  v870 = *(_DWORD *)(v869 + 24);
                  if ( v870 >= 1 )
                  {
                    v871 = 0;
                    while ( v871 < v870 )
                    {
                      v872 = v869 + 8LL * (int)v871;
                      v873 = *(WarBoardWallData_SaveData_o **)(v872 + 32);
                      if ( !v873 )
                        goto LABEL_359;
                      WarBoardWallData_SaveData__SetOwner(*(WarBoardWallData_SaveData_o **)(v872 + 32), v748, 0LL);
                      WarBoardWallData_SaveData__Load(v873, 0LL);
                      v870 = *(_DWORD *)(v869 + 24);
                      if ( (int)++v871 >= v870 )
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
                        v876 = 0;
                        while ( v876 < namespaze )
                        {
                          v877 = &element_class->_1.image + (int)v876;
                          v878 = (WarBoardSquareData_SaveData_o *)v877[4];
                          if ( !v878 )
                            goto LABEL_359;
                          WarBoardSquareData_SaveData__SetOwner((WarBoardSquareData_SaveData_o *)v877[4], v748, 0LL);
                          WarBoardSquareData_SaveData__Load(v878, 0LL);
                          namespaze = (int)element_class->_1.namespaze;
                          if ( (int)++v876 >= namespaze )
                            goto LABEL_307;
                        }
                        goto LABEL_360;
                      }
LABEL_307:
                      if ( roadEntitiesb->obj.klass )
                      {
                        v748->fields.isPlayedHalfDeadMessage = (bool)roadEntitiesb->obj.klass->_1.interopData;
                        v879 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                              System_Collections_Generic_List_WarBoardEventData__TypeInfo,
                                                                              throughCondId,
                                                                              v809,
                                                                              v810);
                        System_Collections_Generic_List_object____ctor(
                          v879,
                          (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardEventData___ctor__);
                        v748->fields.listEvent = (struct System_Collections_Generic_List_WarBoardEventData__o *)v879;
                        sub_1BCA784(
                          (PartyOrganizationUtility_o *)p_listEvent,
                          (int64_t)v879,
                          v880,
                          v881,
                          v882,
                          v883,
                          v884,
                          v885);
                        v892 = v748->fields.localSaveData;
                        if ( v892 )
                        {
                          eventSaves = v892->fields.eventSaves;
                          if ( eventSaves )
                          {
                            v894 = *(_QWORD *)&eventSaves->max_length;
                            if ( (int)v894 >= 1 )
                            {
                              v895 = 0LL;
                              while ( v895 < (unsigned int)v894 )
                              {
                                v896 = eventSaves->m_Items[v895];
                                v897 = (System_Collections_Generic_List_object__o *)*p_listEvent;
                                v898 = (WarBoardEventData_o *)sub_1BCAA2C(
                                                                WarBoardEventData_TypeInfo,
                                                                throughCondId,
                                                                v886,
                                                                v887);
                                WarBoardEventData___ctor_36244644(v898, v896, 0LL);
                                if ( !v897 )
                                  goto LABEL_359;
                                v905 = v897->fields._items;
                                v906 = Method_System_Collections_Generic_List_WarBoardEventData__Add__;
                                ++v897->fields._version;
                                if ( !v905 )
                                  goto LABEL_359;
                                v907 = v897->fields._size;
                                if ( (unsigned int)v907 >= v905->max_length )
                                {
                                  System_Collections_Generic_List_object___AddWithResize(
                                    v897,
                                    (Il2CppObject *)v898,
                                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v906[4] + 192LL) + 112LL));
                                }
                                else
                                {
                                  v908 = &v905->obj.klass + v907;
                                  v897->fields._size = v907 + 1;
                                  v908[4] = (Il2CppClass *)v898;
                                  sub_1BCA784(
                                    (PartyOrganizationUtility_o *)(v908 + 4),
                                    (int64_t)v898,
                                    v899,
                                    v900,
                                    v901,
                                    v902,
                                    v903,
                                    v904);
                                }
                                LODWORD(v894) = eventSaves->max_length;
                                if ( (__int64)++v895 >= (int)v894 )
                                  goto LABEL_319;
                              }
                              goto LABEL_360;
                            }
LABEL_319:
                            v909 = roadEntitiesb->obj.klass;
                            if ( roadEntitiesb->obj.klass )
                            {
                              v1039->fields.winCondId = (int32_t)v909->_1.fields;
                              typeHierarchy = (int64_t)v909->_2.typeHierarchy;
                              v1039->fields.latestPieceActionSquareIndexes = (struct System_Int32_array *)typeHierarchy;
                              sub_1BCA784(
                                (PartyOrganizationUtility_o *)p_latestPieceActionSquareIndexes,
                                typeHierarchy,
                                v886,
                                v887,
                                v888,
                                v889,
                                v890,
                                v891);
                              v917 = v1039->fields.localSaveData;
                              if ( v917 )
                              {
                                latestBattlePieceUniqueIndexes = (int64_t)v917->fields.latestBattlePieceUniqueIndexes;
                                p_latestBattlePieceUniqueIndexes->klass = (PartyOrganizationUtility_c *)latestBattlePieceUniqueIndexes;
                                sub_1BCA784(
                                  p_latestBattlePieceUniqueIndexes,
                                  latestBattlePieceUniqueIndexes,
                                  v911,
                                  v912,
                                  v913,
                                  v914,
                                  v915,
                                  v916);
                                v922 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                                      System_Collections_Generic_List_WarBoardPrevCondData__TypeInfo,
                                                                                      v919,
                                                                                      v920,
                                                                                      v921);
                                System_Collections_Generic_List_object____ctor(
                                  v922,
                                  (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardPrevCondData___ctor__);
                                p_listPrevCond->klass = (PartyOrganizationUtility_c *)v922;
                                sub_1BCA784(p_listPrevCond, (int64_t)v922, v923, v924, v925, v926, v927, v928);
                                if ( roadEntitiesb->obj.klass )
                                {
                                  properties = roadEntitiesb->obj.klass->_1.properties;
                                  if ( properties )
                                  {
                                    v932 = properties[3];
                                    if ( (int)v932 >= 1 )
                                    {
                                      v933 = 0LL;
                                      while ( v933 < (unsigned int)v932 )
                                      {
                                        v934 = (WarBoardPrevCondData_SaveData_o *)properties[v933 + 4];
                                        v935 = (System_Collections_Generic_List_object__o *)p_listPrevCond->klass;
                                        v936 = (WarBoardPrevCondData_o *)sub_1BCAA2C(
                                                                           WarBoardPrevCondData_TypeInfo,
                                                                           throughCondId,
                                                                           v929,
                                                                           v930);
                                        WarBoardPrevCondData___ctor_36271516(v936, v934, 0LL);
                                        if ( !v935 )
                                          goto LABEL_359;
                                        v943 = v935->fields._items;
                                        v944 = Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__;
                                        ++v935->fields._version;
                                        if ( !v943 )
                                          goto LABEL_359;
                                        v945 = v935->fields._size;
                                        if ( (unsigned int)v945 >= v943->max_length )
                                        {
                                          System_Collections_Generic_List_object___AddWithResize(
                                            v935,
                                            (Il2CppObject *)v936,
                                            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v944[4] + 192LL) + 112LL));
                                        }
                                        else
                                        {
                                          v946 = &v943->obj.klass + v945;
                                          v935->fields._size = v945 + 1;
                                          v946[4] = (Il2CppClass *)v936;
                                          sub_1BCA784(
                                            (PartyOrganizationUtility_o *)(v946 + 4),
                                            (int64_t)v936,
                                            v937,
                                            v938,
                                            v939,
                                            v940,
                                            v941,
                                            v942);
                                        }
                                        LODWORD(v932) = *((_DWORD *)properties + 6);
                                        if ( (__int64)++v933 >= (int)v932 )
                                          goto LABEL_332;
                                      }
                                      goto LABEL_360;
                                    }
LABEL_332:
                                    v947 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                                          System_Collections_Generic_List_HoldReinforcementsData__TypeInfo,
                                                                                          throughCondId,
                                                                                          v929,
                                                                                          v930);
                                    System_Collections_Generic_List_object____ctor(
                                      v947,
                                      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_HoldReinforcementsData___ctor__);
                                    p_reinforcementsSaveList->klass = (PartyOrganizationUtility_c *)v947;
                                    sub_1BCA784(
                                      p_reinforcementsSaveList,
                                      (int64_t)v947,
                                      v948,
                                      v949,
                                      v950,
                                      v951,
                                      v952,
                                      v953);
                                    if ( roadEntitiesb->obj.klass )
                                    {
                                      methods = roadEntitiesb->obj.klass->_1.methods;
                                      if ( methods )
                                      {
                                        v957 = methods[3];
                                        if ( (int)v957 >= 1 )
                                        {
                                          v958 = 0LL;
                                          while ( v958 < (unsigned int)v957 )
                                          {
                                            v959 = (HoldReinforcementsData_SaveData_o *)methods[v958 + 4];
                                            v960 = (System_Collections_Generic_List_object__o *)p_reinforcementsSaveList->klass;
                                            v961 = (HoldReinforcementsData_o *)sub_1BCAA2C(
                                                                                 HoldReinforcementsData_TypeInfo,
                                                                                 throughCondId,
                                                                                 v954,
                                                                                 v955);
                                            HoldReinforcementsData___ctor_36271716(v961, v959, 0LL);
                                            if ( !v960 )
                                              goto LABEL_359;
                                            v968 = v960->fields._items;
                                            v969 = Method_System_Collections_Generic_List_HoldReinforcementsData__Add__;
                                            ++v960->fields._version;
                                            if ( !v968 )
                                              goto LABEL_359;
                                            v970 = v960->fields._size;
                                            if ( (unsigned int)v970 >= v968->max_length )
                                            {
                                              System_Collections_Generic_List_object___AddWithResize(
                                                v960,
                                                (Il2CppObject *)v961,
                                                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v969[4] + 192LL) + 112LL));
                                            }
                                            else
                                            {
                                              v971 = &v968->obj.klass + v970;
                                              v960->fields._size = v970 + 1;
                                              v971[4] = (Il2CppClass *)v961;
                                              sub_1BCA784(
                                                (PartyOrganizationUtility_o *)(v971 + 4),
                                                (int64_t)v961,
                                                v962,
                                                v963,
                                                v964,
                                                v965,
                                                v966,
                                                v967);
                                            }
                                            LODWORD(v957) = *((_DWORD *)methods + 6);
                                            if ( (__int64)++v958 >= (int)v957 )
                                              goto LABEL_343;
                                          }
                                          goto LABEL_360;
                                        }
LABEL_343:
                                        if ( roadEntitiesb->obj.klass )
                                        {
                                          v972 = System_Linq_Enumerable__ToList_int_(
                                                   (System_Collections_Generic_IEnumerable_TSource__o *)roadEntitiesb->obj.klass->_1.nestedTypes,
                                                   (const MethodInfo_2F4F4F8 *)Method_System_Linq_Enumerable_ToList_int___);
                                          p_playedStageReinforcementsList->klass = (PartyOrganizationUtility_c *)v972;
                                          sub_1BCA784(
                                            p_playedStageReinforcementsList,
                                            (int64_t)v972,
                                            v973,
                                            v974,
                                            v975,
                                            v976,
                                            v977,
                                            v978);
                                          v982 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                                                System_Collections_Generic_List_WarBoardUiData__TypeInfo,
                                                                                                v979,
                                                                                                v980,
                                                                                                v981);
                                          System_Collections_Generic_List_object____ctor(
                                            v982,
                                            (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardUiData___ctor__);
                                          p_listUiData->klass = (PartyOrganizationUtility_c *)v982;
                                          sub_1BCA784(p_listUiData, (int64_t)v982, v983, v984, v985, v986, v987, v988);
                                          if ( roadEntitiesb->obj.klass )
                                          {
                                            implementedInterfaces = roadEntitiesb->obj.klass->_1.implementedInterfaces;
                                            if ( implementedInterfaces )
                                            {
                                              v996 = implementedInterfaces[3];
                                              if ( (int)v996 >= 1 )
                                              {
                                                v997 = 0LL;
                                                while ( v997 < (unsigned int)v996 )
                                                {
                                                  v998 = (WarBoardUiData_SaveData_o *)implementedInterfaces[v997 + 4];
                                                  v999 = (System_Collections_Generic_List_object__o *)p_listUiData->klass;
                                                  v1000 = (WarBoardUiData_o *)sub_1BCAA2C(
                                                                                WarBoardUiData_TypeInfo,
                                                                                throughCondId,
                                                                                v989,
                                                                                v990);
                                                  WarBoardUiData___ctor_36278136(v1000, v998, 0LL);
                                                  if ( !v999 )
                                                    goto LABEL_359;
                                                  v1007 = v999->fields._items;
                                                  v1008 = Method_System_Collections_Generic_List_WarBoardUiData__Add__;
                                                  ++v999->fields._version;
                                                  if ( !v1007 )
                                                    goto LABEL_359;
                                                  v1009 = v999->fields._size;
                                                  if ( (unsigned int)v1009 >= v1007->max_length )
                                                  {
                                                    System_Collections_Generic_List_object___AddWithResize(
                                                      v999,
                                                      (Il2CppObject *)v1000,
                                                      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v1008[4] + 192LL)
                                                                                   + 112LL));
                                                  }
                                                  else
                                                  {
                                                    v1010 = &v1007->obj.klass + v1009;
                                                    v999->fields._size = v1009 + 1;
                                                    v1010[4] = (Il2CppClass *)v1000;
                                                    sub_1BCA784(
                                                      (PartyOrganizationUtility_o *)(v1010 + 4),
                                                      (int64_t)v1000,
                                                      v1001,
                                                      v1002,
                                                      v1003,
                                                      v1004,
                                                      v1005,
                                                      v1006);
                                                  }
                                                  LODWORD(v996) = *((_DWORD *)implementedInterfaces + 6);
                                                  if ( (__int64)++v997 >= (int)v996 )
                                                    goto LABEL_355;
                                                }
                                                goto LABEL_360;
                                              }
LABEL_355:
                                              if ( roadEntitiesb->obj.klass )
                                              {
                                                interfaceOffsets = (int64_t)roadEntitiesb->obj.klass->_1.interfaceOffsets;
                                                p_bgAnimationInfo_k__BackingField->klass = (PartyOrganizationUtility_c *)interfaceOffsets;
                                                sub_1BCA784(
                                                  p_bgAnimationInfo_k__BackingField,
                                                  interfaceOffsets,
                                                  v989,
                                                  v990,
                                                  v991,
                                                  v992,
                                                  v993,
                                                  v994);
                                                v1012 = roadEntitiesb->obj.klass;
                                                if ( roadEntitiesb->obj.klass )
                                                {
                                                  v1039->fields._ContinueConsumeType_k__BackingField = HIDWORD(v1012->_2.unity_user_data);
                                                  v1039->fields._IsContinue_k__BackingField = v1012->_2.initializationExceptionGCHandle;
                                                  v1039->fields._IsNextTurn_k__BackingField = BYTE1(v1012->_2.initializationExceptionGCHandle);
                                                  v1039->fields.localSaveTiming = (int32_t)v1012->_2.unity_user_data;
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
    sub_1BCAA3C(Instance, throughCondId);
  }
  v1013 = (WarBoardData_WarBoardLocalSaveData_o *)sub_1BCAA2C(
                                                    WarBoardData_WarBoardLocalSaveData_TypeInfo,
                                                    throughCondId,
                                                    v809,
                                                    v810);
  WarBoardData_WarBoardLocalSaveData___ctor_36231636(v1013, v1039, 0LL);
  v1039->fields.localSaveData = v1013;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v1039->fields.localSaveData,
    (int64_t)v1013,
    v1014,
    v1015,
    v1016,
    v1017,
    v1018,
    v1019);
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

  if ( (byte_4B13E3B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardEventData__Add__, eventData, method);
    byte_4B13E3B = 1;
  }
  listEvent = (System_Collections_Generic_List_object__o *)this->fields.listEvent;
  if ( !listEvent
    || (items = listEvent->fields._items,
        v12 = Method_System_Collections_Generic_List_WarBoardEventData__Add__,
        ++listEvent->fields._version,
        !items) )
  {
    sub_1BCAA3C(listEvent, eventData);
  }
  size = listEvent->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      listEvent,
      (Il2CppObject *)eventData,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    listEvent->fields._size = size + 1;
    v14[4] = (Il2CppClass *)eventData;
    sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 4), (int64_t)eventData, (int64_t)method, v3, v4, v5, v6, v7);
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
  WarBoardUserServantData_array *v8; // x22
  WarBoardDataEntity_o *v9; // x25
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  Il2CppObject *Master_object; // x24
  int64_t Instance; // x0
  __int64 v45; // x1
  Il2CppObject *v46; // x28
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  System_Collections_Generic_List_object__o *v52; // x19
  __int64 v53; // x8
  unsigned __int64 v54; // x27
  WarBoardUserServantData_o *v55; // x26
  struct System_Int32_array *reinforcementsIds; // x8
  struct System_Int32_array *v57; // x8
  __int64 v58; // x9
  WarBoardStagePieceDetailMaster_o *v59; // x19
  WarBoardDataEntity_o *v60; // x22
  WarBoardReinforcementsEntity_o *v61; // x25
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *npcEntityDict; // x20
  WarBoardStageReinforcementsEntity_o *v63; // x24
  __int64 v64; // x2
  __int64 v65; // x3
  int32_t v66; // w28
  int32_t v67; // w21
  WarBoardPieceData_o *v68; // x23
  NpcFollowerEntity_o *Entity_40158156; // x0
  NpcFollowerEntity_o *v70; // x20
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  struct System_Object_array *items; // x8
  _QWORD *v78; // x9
  __int64 size; // x10
  Il2CppClass **v80; // x0
  struct WarBoardPieceData_array **p_pieces; // x20
  System_Object_array *v82; // x0
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  int64_t svtInfo; // x1
  __int64 v96; // x21
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x22
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  __int64 v104; // x2
  __int64 v105; // x3
  unsigned __int64 v106; // x23
  __int64 v107; // x26
  __int64 v108; // x27
  struct WarBoardData_WarBoardLocalSaveData_o *v109; // x8
  struct WarBoardPieceData_array *v110; // x9
  unsigned int *pieceSaves; // x28
  WarBoardPieceData_o *v112; // x22
  WarBoardPieceData_SaveData_o *v113; // x21
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  __int64 v121; // x0
  System_Collections_Generic_List_object__o *v122; // [xsp+10h] [xbp-D0h]
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+18h] [xbp-C8h]
  System_Int32_array *v124; // [xsp+20h] [xbp-C0h]
  Il2CppObject *v125; // [xsp+28h] [xbp-B8h]
  WarBoardUserServantData_array *v126; // [xsp+30h] [xbp-B0h]
  NpcFollowerMaster_o *v127; // [xsp+38h] [xbp-A8h]
  System_Collections_Generic_List_object__o *v128; // [xsp+40h] [xbp-A0h]
  WarBoardUserServantData_o **m_Items; // [xsp+48h] [xbp-98h]
  int32_t questPhase; // [xsp+50h] [xbp-90h]
  int32_t questId; // [xsp+54h] [xbp-8Ch]
  int32_t *v132; // [xsp+58h] [xbp-88h]
  bool isChangeName; // [xsp+64h] [xbp-7Ch] BYREF
  Il2CppObject *v134; // [xsp+68h] [xbp-78h] BYREF
  WarBoardStagePieceDetailEntity_o *v135; // [xsp+70h] [xbp-70h] BYREF
  WarBoardReinforcementsEntity_o *entity; // [xsp+78h] [xbp-68h] BYREF

  v8 = reinfoSvtInfo;
  v9 = serverData;
  if ( (byte_4B13E39 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___, serverData, reinfoSvtInfo);
    sub_1BCA7E0(&Method_DataManager_GetMaster_NpcFollowerMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___, v15, v16);
    sub_1BCA7E0(&DataManager_TypeInfo, v17, v18);
    sub_1BCA7E0(
      &Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__,
      v19,
      v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__RemoveAt__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v31, v32);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v33, v34);
    sub_1BCA7E0(&WarBoardPieceData_SaveData___TypeInfo, v35, v36);
    sub_1BCA7E0(&WarBoardPieceData_SaveData_TypeInfo, v37, v38);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v39, v40);
    sub_1BCA7E0(&WarBoardPieceData_TypeInfo, v41, v42);
    byte_4B13E39 = 1;
  }
  v135 = 0LL;
  entity = 0LL;
  v134 = 0LL;
  isChangeName = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, serverData);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  v46 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v127 = (NpcFollowerMaster_o *)Instance;
  if ( !v9 )
    goto LABEL_69;
  questPhase = v9->fields.questPhase;
  questId = v9->fields.questId;
  v122 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                        v45,
                                                        v47,
                                                        v48);
  System_Collections_Generic_List_object____ctor(
    v122,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v52 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                       v49,
                                                       v50,
                                                       v51);
  System_Collections_Generic_List_object____ctor(
    v52,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( !v8 )
    goto LABEL_69;
  v53 = *(_QWORD *)&v8->max_length;
  v128 = v52;
  if ( (int)v53 >= 1 )
  {
    v54 = 0LL;
    v132 = &indexList->m_Items[1];
    m_Items = v8->m_Items;
    v125 = Master_object;
    v126 = v8;
    v124 = indexList;
    do
    {
      if ( v54 >= (unsigned int)v53 )
LABEL_70:
        sub_1BCAA44(Instance, v45);
      v55 = m_Items[v54];
      if ( v55 )
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
        if ( v54 >= indexList->max_length )
          goto LABEL_70;
        if ( v132[v54] < (signed int)reinforcementsIds->max_length )
          goto LABEL_52;
      }
      if ( v54 >= indexList->max_length )
        goto LABEL_70;
      v57 = reinfoStage->fields.reinforcementsIds;
      if ( !v57 )
        goto LABEL_69;
      v58 = v132[v54];
      if ( (unsigned int)v58 >= v57->max_length )
        goto LABEL_70;
      if ( !Master_object )
        goto LABEL_69;
      v59 = (WarBoardStagePieceDetailMaster_o *)v46;
      v60 = v9;
      WarBoardReinforcementsMaster__TryGetEntity(
        (WarBoardReinforcementsMaster_o *)Master_object,
        &entity,
        v57->m_Items[v58 + 1],
        0LL);
      Instance = (int64_t)this->fields.reinforcementsAppointmentSquareList;
      if ( !Instance )
        goto LABEL_69;
      v61 = entity;
      npcEntityDict = this->fields.npcEntityDict;
      v63 = reinfoStage;
      Instance = System_Collections_Generic_List_int___get_Item(
                   (System_Collections_Generic_List_int__o *)Instance,
                   0,
                   (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( v54 >= indexList->max_length )
        goto LABEL_70;
      v66 = Instance;
      v67 = v132[v54];
      v68 = (WarBoardPieceData_o *)sub_1BCAA2C(WarBoardPieceData_TypeInfo, v45, v64, v65);
      WarBoardPieceData___ctor_36253196(v68, v63, v61, v55, npcEntityDict, v54, v66, v67, 0LL);
      Instance = (int64_t)this->fields.reinforcementsAppointmentSquareList;
      if ( !Instance )
        goto LABEL_69;
      System_Collections_Generic_List_int___RemoveAt(
        (System_Collections_Generic_List_int__o *)Instance,
        0,
        (const MethodInfo_35863B8 *)Method_System_Collections_Generic_List_int__RemoveAt__);
      if ( !v68 )
        goto LABEL_69;
      v46 = (Il2CppObject *)v59;
      if ( !v59 )
        goto LABEL_69;
      v9 = v60;
      Instance = WarBoardStagePieceDetailMaster__TryGetEntity(
                   v59,
                   &v135,
                   v60->fields.stageId,
                   v68->fields._forceId_k__BackingField,
                   v68->fields._groupId_k__BackingField,
                   v68->fields._index_k__BackingField,
                   0LL);
      if ( (Instance & 1) != 0 )
      {
        Instance = (int64_t)v135;
        if ( !v135 )
          goto LABEL_69;
        v68->fields._npcImageSvtId_k__BackingField = WarBoardStagePieceDetailEntity__GetImageSvtId(v135, 0LL);
        Instance = (int64_t)v135;
        if ( !v135 )
          goto LABEL_69;
        Instance = WarBoardStagePieceDetailEntity__GetDispLimitCnt(v135, 0LL);
        v68->fields._npcDispLimitCount_k__BackingField = Instance;
      }
      if ( !v127 )
        goto LABEL_69;
      Entity_40158156 = NpcFollowerMaster__GetEntity_40158156(
                          v127,
                          questId,
                          questPhase,
                          v68->fields._npcId_k__BackingField,
                          0LL);
      if ( Entity_40158156 )
      {
        v70 = Entity_40158156;
        if ( !v68->fields._npcImageSvtId_k__BackingField )
          v68->fields._npcImageSvtId_k__BackingField = NpcFollowerEntity__GetImageSvtId(Entity_40158156, 0LL);
        if ( (v68->fields._npcDispLimitCount_k__BackingField & 0x80000000) != 0 )
          v68->fields._npcDispLimitCount_k__BackingField = NpcFollowerEntity__GetDispLimitCnt(v70, -1, 0LL);
      }
      Instance = WarBoardPieceData__get_isPlayerGroup(v68, 0LL);
      if ( (Instance & 1) != 0 )
      {
        Instance = (int64_t)MasterData_object;
        if ( !MasterData_object )
          goto LABEL_69;
        Instance = DataMasterBase_object__object__long___TryGetEntity(
                     MasterData_object,
                     &v134,
                     v68->fields._npcId_k__BackingField,
                     (const MethodInfo_31B3040 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
        if ( (Instance & 1) != 0 )
        {
          Instance = (int64_t)v134;
          if ( !v134 )
            goto LABEL_69;
          Instance = (int64_t)NpcServantFollowerEntity__GetFollowerName_40160740(
                                (NpcServantFollowerEntity_o *)v134,
                                v68->fields._npcId_k__BackingField,
                                questId,
                                questPhase,
                                &isChangeName,
                                0LL);
          if ( isChangeName )
          {
            Instance = (int64_t)v68->fields._battleServant_k__BackingField;
            if ( !Instance )
              goto LABEL_69;
            BattleServantData__ClearOverwriteServantName((BattleServantData_o *)Instance, 0LL);
          }
        }
      }
      if ( !v128 )
        goto LABEL_69;
      items = v128->fields._items;
      v78 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
      ++v128->fields._version;
      if ( !items )
        goto LABEL_69;
      size = v128->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v128,
          (Il2CppObject *)v68,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
      }
      else
      {
        v80 = &items->obj.klass + size;
        v128->fields._size = size + 1;
        v80[4] = (Il2CppClass *)v68;
        sub_1BCA784((PartyOrganizationUtility_o *)(v80 + 4), (int64_t)v68, v71, v72, v73, v74, v75, v76);
      }
      reinfoStage = v63;
      indexList = v124;
      Master_object = v125;
      v8 = v126;
LABEL_52:
      LODWORD(v53) = v8->max_length;
    }
    while ( (__int64)++v54 < (int)v53 );
  }
  if ( !v122 )
    goto LABEL_69;
  p_pieces = &this->fields.pieces;
  System_Collections_Generic_List_object___AddRange(
    v122,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.pieces,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v122,
    (System_Collections_Generic_IEnumerable_T__o *)v128,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
  v82 = System_Collections_Generic_List_object___ToArray(
          v122,
          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  this->fields.pieces = (struct WarBoardPieceData_array *)v82;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.pieces, (int64_t)v82, v83, v84, v85, v86, v87, v88);
  Instance = (int64_t)this->fields.serverData;
  if ( !Instance
    || (svtInfo = (int64_t)v9->fields.svtInfo,
        *(_QWORD *)(Instance + 16) = svtInfo,
        sub_1BCA784((PartyOrganizationUtility_o *)(Instance + 16), svtInfo, v89, v90, v91, v92, v93, v94),
        !*p_pieces)
    || (v96 = *(_QWORD *)&(*p_pieces)->max_length,
        localSaveData = this->fields.localSaveData,
        Instance = sub_1BCA888(WarBoardPieceData_SaveData___TypeInfo, (unsigned int)v96),
        !localSaveData) )
  {
LABEL_69:
    sub_1BCAA3C(Instance, v45);
  }
  localSaveData->fields.pieceSaves = (struct WarBoardPieceData_SaveData_array *)Instance;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&localSaveData->fields.pieceSaves,
    Instance,
    v98,
    v99,
    v100,
    v101,
    v102,
    v103);
  if ( (int)v96 >= 1 )
  {
    v106 = 0LL;
    v107 = (unsigned int)v96;
    v108 = 8LL;
    do
    {
      v109 = this->fields.localSaveData;
      if ( !v109 )
        goto LABEL_69;
      v110 = *p_pieces;
      if ( !*p_pieces )
        goto LABEL_69;
      if ( v106 >= v110->max_length )
        goto LABEL_70;
      pieceSaves = (unsigned int *)v109->fields.pieceSaves;
      v112 = *(WarBoardPieceData_o **)((char *)&v110->obj.klass + v108 * 4);
      v113 = (WarBoardPieceData_SaveData_o *)sub_1BCAA2C(WarBoardPieceData_SaveData_TypeInfo, v45, v104, v105);
      WarBoardPieceData_SaveData___ctor_36234688(v113, v112, 0LL);
      if ( !pieceSaves )
        goto LABEL_69;
      if ( v113 )
      {
        Instance = sub_1BCA91C(v113, *(_QWORD *)(*(_QWORD *)pieceSaves + 64LL));
        if ( !Instance )
        {
          v121 = sub_1BCAA60(0LL);
          sub_1BCA908(v121, 0LL);
        }
      }
      if ( v106 >= pieceSaves[6] )
        goto LABEL_70;
      *(_QWORD *)&pieceSaves[v108] = v113;
      sub_1BCA784((PartyOrganizationUtility_o *)&pieceSaves[v108], (int64_t)v113, v114, v115, v116, v117, v118, v119);
      ++v106;
      v108 += 2LL;
    }
    while ( v107 != v106 );
  }
  Instance = (int64_t)v128;
  if ( !v128 )
    goto LABEL_69;
  return (WarBoardPieceData_array *)System_Collections_Generic_List_object___ToArray(
                                      v128,
                                      (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardData__AddSquareInfo(
        WarBoardData_o *this,
        int32_t squareIndex,
        int32_t effectId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  WarBoardData___c__DisplayClass173_0_o *v23; // x22
  _BOOL8 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  struct WarBoardDataEntity_o *serverData; // x8
  System_Object_array *squareIndexInfo; // x20
  System_Func_object__bool__o *v30; // x21
  Il2CppObject *object; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  PartyOrganizationUtility_o *p_monitor; // x20
  System_Collections_Generic_IEnumerable_T__o *monitor; // x22
  System_Collections_Generic_List_int__o *v37; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  System_Int32_array *v41; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7

  if ( (byte_4B13E40 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Find_WarBoardSquareIndexData___, *(_QWORD *)&squareIndex, *(_QWORD *)&effectId);
    sub_1BCA7E0(&System_Func_WarBoardSquareIndexData__bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor___76787440, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass173_0__AddSquareInfo_b__0__, v19, v20);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass173_0_TypeInfo, v21, v22);
    byte_4B13E40 = 1;
  }
  v23 = (WarBoardData___c__DisplayClass173_0_o *)sub_1BCAA2C(
                                                   WarBoardData___c__DisplayClass173_0_TypeInfo,
                                                   *(_QWORD *)&squareIndex,
                                                   *(_QWORD *)&effectId,
                                                   method);
  WarBoardData___c__DisplayClass173_0___ctor(v23, 0LL);
  if ( !v23 )
    goto LABEL_14;
  v23->fields.squareIndex = squareIndex;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_14;
  squareIndexInfo = (System_Object_array *)serverData->fields.squareIndexInfo;
  v30 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarBoardSquareIndexData__bool__TypeInfo, v25, v26, v27);
  System_Func_object__bool____ctor(
    v30,
    (Il2CppObject *)v23,
    Method_WarBoardData___c__DisplayClass173_0__AddSquareInfo_b__0__,
    0LL);
  object = BasicHelper__Find_object_(
             squareIndexInfo,
             (System_Func_T__bool__o *)v30,
             (const MethodInfo_2EFE860 *)Method_BasicHelper_Find_WarBoardSquareIndexData___);
  if ( !object )
    return;
  p_monitor = (PartyOrganizationUtility_o *)&object[1].monitor;
  monitor = (System_Collections_Generic_IEnumerable_T__o *)object[1].monitor;
  v37 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v32,
                                                    v33,
                                                    v34);
  System_Collections_Generic_List_int____ctor_56116492(
    v37,
    monitor,
    (const MethodInfo_358450C *)Method_System_Collections_Generic_List_int___ctor___76787440);
  if ( !v37 )
    goto LABEL_14;
  v24 = System_Collections_Generic_List_int___Contains(
          v37,
          effectId,
          (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
  if ( v24 )
    return;
  items = v37->fields._items;
  v39 = Method_System_Collections_Generic_List_int__Add__;
  ++v37->fields._version;
  if ( !items )
LABEL_14:
    sub_1BCAA3C(v24, v25);
  size = v37->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v37,
      effectId,
      *(const MethodInfo_3584C38 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
  }
  else
  {
    v37->fields._size = size + 1;
    items->m_Items[size + 1] = effectId;
  }
  v41 = System_Collections_Generic_List_int___ToArray(
          v37,
          (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  p_monitor->klass = (PartyOrganizationUtility_c *)v41;
  sub_1BCA784(p_monitor, (int64_t)v41, v42, v43, v44, v45, v46, v47);
}


void __fastcall WarBoardData__BuffTurnProgressing(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  WarBoardData___c_c *v23; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__object__o *_9__191_0; // x20
  Il2CppObject *v26; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v34; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  WarBoardData___c_c *v38; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x19
  System_Func_object__bool__o *_9__191_1; // x20
  Il2CppObject *v41; // x21
  struct WarBoardData___c_StaticFields *v42; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  WarBoardData___c_c *v53; // x8
  System_Collections_Generic_IEnumerable_T__o *v54; // x19
  System_Action_object__o *_9__191_2; // x20
  Il2CppObject *v56; // x21
  PartyOrganizationUtility_o *p__9__191_2; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7

  if ( (byte_4B13E4F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BattleBuffData__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_BattleBuffData___, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__BattleBuffData___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BattleBuffData___, v9, v10);
    sub_1BCA7E0(&System_Func_BattleBuffData__bool__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Func_WarBoardPieceData__BattleBuffData__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_WarBoardData___c__BuffTurnProgressing_b__191_0__, v15, v16);
    sub_1BCA7E0(&Method_WarBoardData___c__BuffTurnProgressing_b__191_1__, v17, v18);
    sub_1BCA7E0(&Method_WarBoardData___c__BuffTurnProgressing_b__191_2__, v19, v20);
    sub_1BCA7E0(&WarBoardData___c_TypeInfo, v21, v22);
    byte_4B13E4F = 1;
  }
  v23 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, method);
    v23 = WarBoardData___c_TypeInfo;
  }
  _9__191_0 = (System_Func_object__object__o *)v23->static_fields->__9__191_0;
  if ( !_9__191_0 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23, method);
      v23 = WarBoardData___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v23->static_fields->__9;
    _9__191_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                   System_Func_WarBoardPieceData__BattleBuffData__TypeInfo,
                                                   method,
                                                   v2,
                                                   v3);
    System_Func_object__object____ctor(_9__191_0, v26, Method_WarBoardData___c__BuffTurnProgressing_b__191_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__191_0 = (struct System_Func_WarBoardPieceData__BattleBuffData__o *)_9__191_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__191_0,
      (int64_t)_9__191_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  v34 = System_Linq_Enumerable__Select_object__object_(
          pieces,
          (System_Func_TSource__TResult__o *)_9__191_0,
          (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__BattleBuffData___);
  v38 = WarBoardData___c_TypeInfo;
  v39 = (System_Collections_Generic_IEnumerable_TSource__o *)v34;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, v35);
    v38 = WarBoardData___c_TypeInfo;
  }
  _9__191_1 = (System_Func_object__bool__o *)v38->static_fields->__9__191_1;
  if ( !_9__191_1 )
  {
    if ( !v38->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v38, v35);
      v38 = WarBoardData___c_TypeInfo;
    }
    v41 = (Il2CppObject *)v38->static_fields->__9;
    _9__191_1 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_BattleBuffData__bool__TypeInfo, v35, v36, v37);
    System_Func_object__bool____ctor(_9__191_1, v41, Method_WarBoardData___c__BuffTurnProgressing_b__191_1__, 0LL);
    v42 = WarBoardData___c_TypeInfo->static_fields;
    v42->__9__191_1 = (struct System_Func_BattleBuffData__bool__o *)_9__191_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v42->__9__191_1, (int64_t)_9__191_1, v43, v44, v45, v46, v47, v48);
  }
  v49 = System_Linq_Enumerable__Where_object_(
          v39,
          (System_Func_TSource__bool__o *)_9__191_1,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattleBuffData___);
  v53 = WarBoardData___c_TypeInfo;
  v54 = (System_Collections_Generic_IEnumerable_T__o *)v49;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, v50);
    v53 = WarBoardData___c_TypeInfo;
  }
  _9__191_2 = (System_Action_object__o *)v53->static_fields->__9__191_2;
  if ( !_9__191_2 )
  {
    if ( !v53->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v53, v50);
      v53 = WarBoardData___c_TypeInfo;
    }
    v56 = (Il2CppObject *)v53->static_fields->__9;
    _9__191_2 = (System_Action_object__o *)sub_1BCAA2C(System_Action_BattleBuffData__TypeInfo, v50, v51, v52);
    System_Action_object____ctor(_9__191_2, v56, Method_WarBoardData___c__BuffTurnProgressing_b__191_2__, 0LL);
    p__9__191_2 = (PartyOrganizationUtility_o *)&WarBoardData___c_TypeInfo->static_fields->__9__191_2;
    p__9__191_2->klass = (PartyOrganizationUtility_c *)_9__191_2;
    sub_1BCA784(p__9__191_2, (int64_t)_9__191_2, v58, v59, v60, v61, v62, v63);
  }
  BasicHelper__ForEach_object_(
    v54,
    (System_Action_T__o *)_9__191_2,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_BattleBuffData___);
}


void __fastcall WarBoardData__CheckItem(
        WarBoardData_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 AliveServantPieces; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  int v14; // w8
  __int64 v15; // x21
  unsigned int v16; // w27
  WarBoardPieceData_o *v17; // x22
  __int64 v18; // x23
  WarBoardManager_o *v19; // x24
  const MethodInfo_36C2D28 *v20; // x2
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x24
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  Il2CppObject *Instance; // x25
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 v39; // x26
  __int64 v40; // x0
  System_Nullable_Vector3__o v41; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_float__o v42; // 0:x3.8
  System_Nullable_Vector3__o v43; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B13E06 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, taskList, method);
    sub_1BCA7E0(&Method_System_Nullable_Vector3___ctor__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7, v8);
    sub_1BCA7E0(&WarBoardTaskBase___TypeInfo, v9, v10);
    byte_4B13E06 = 1;
  }
  AliveServantPieces = (__int64)WarBoardData__GetAliveServantPieces(this, (const MethodInfo *)taskList);
  if ( !AliveServantPieces )
LABEL_27:
    sub_1BCAA3C(AliveServantPieces, v12);
  v14 = *(_DWORD *)(AliveServantPieces + 24);
  v15 = AliveServantPieces;
  if ( v14 >= 1 )
  {
    v16 = 0;
    while ( v16 < v14 )
    {
      v17 = *(WarBoardPieceData_o **)(v15 + 8LL * (int)v16 + 32);
      if ( !v17 )
        goto LABEL_27;
      AliveServantPieces = (__int64)WarBoardData__GetItem(this, v17->fields._nowSquareIndex_k__BackingField, v13);
      if ( AliveServantPieces )
      {
        v18 = AliveServantPieces;
        AliveServantPieces = WarBoardItemData__get_Acquired((WarBoardItemData_o *)AliveServantPieces, 0LL);
        if ( (AliveServantPieces & 1) == 0 )
        {
          AliveServantPieces = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !*(_QWORD *)(v18 + 56) )
            goto LABEL_27;
          v19 = (WarBoardManager_o *)AliveServantPieces;
          AliveServantPieces = (__int64)UnityEngine_Component__get_transform(
                                          *(UnityEngine_Component_o **)(v18 + 56),
                                          0LL);
          if ( !AliveServantPieces )
            goto LABEL_27;
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)AliveServantPieces, 0LL);
          *(_QWORD *)&v43.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
          *(_QWORD *)&v43.fields.hasValue = &v41;
          *(_QWORD *)&v41.fields.hasValue = 0LL;
          *(_QWORD *)&v41.fields.value.fields.y = 0LL;
          System_Nullable_Vector3____ctor(v43, localPosition, v20);
          if ( !v19 )
            goto LABEL_27;
          v42 = 0LL;
          AliveServantPieces = (__int64)WarBoardManager__GetCameraPerformanceTask(v19, v41, v42, 1, 0, 1, 0LL);
          v27 = AliveServantPieces;
          if ( taskList )
          {
            items = taskList->fields._items;
            v29 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
            ++taskList->fields._version;
            if ( !items )
              goto LABEL_27;
            size = taskList->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)taskList,
                (Il2CppObject *)AliveServantPieces,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
            }
            else
            {
              v31 = &items->obj.klass + size;
              taskList->fields._size = size + 1;
              v31[4] = (Il2CppClass *)v27;
              sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 4), v27, v21, v22, v23, v24, v25, v26);
            }
          }
          else
          {
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
            AliveServantPieces = sub_1BCA888(WarBoardTaskBase___TypeInfo, 1LL);
            if ( !AliveServantPieces )
              goto LABEL_27;
            v39 = AliveServantPieces;
            if ( v27 )
            {
              AliveServantPieces = sub_1BCA91C(v27, *(_QWORD *)(*(_QWORD *)AliveServantPieces + 64LL));
              if ( !AliveServantPieces )
              {
                v40 = sub_1BCAA60(0LL);
                sub_1BCA908(v40, 0LL);
              }
            }
            if ( !*(_DWORD *)(v39 + 24) )
              break;
            *(_QWORD *)(v39 + 32) = v27;
            sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 32), v27, v33, v34, v35, v36, v37, v38);
            if ( !Instance )
              goto LABEL_27;
            WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v39, 0LL);
          }
          AliveServantPieces = WarBoardItemData__Get((WarBoardItemData_o *)v18, v17, taskList, 0, 0LL);
        }
      }
      v14 = *(_DWORD *)(v15 + 24);
      if ( (int)++v16 >= v14 )
        return;
    }
    sub_1BCAA44(AliveServantPieces, v12);
  }
}


bool __fastcall WarBoardData__CheckWinCond(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  WarBoardPieceData_array *Master_object; // x0
  bool result; // w0
  int32_t maxForceId_k__BackingField; // w9
  int32_t maxGroupId_k__BackingField; // w8
  int v19; // w24
  int v20; // w23
  int32_t i; // w20
  int32_t v22; // w21
  int max_length; // w8
  WarBoardPieceData_array *v24; // x22
  unsigned int v25; // w25
  struct System_Collections_Generic_List_int__o *masterExistsForce; // x19
  WarBoardData___c_c *v27; // x0
  System_Func_int__bool__o *_9__98_0; // x20
  Il2CppObject *v29; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int32_t condGroup; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B13E0B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_int____76879160, v7, v8);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_WarBoardData___c__CheckWinCond_b__98_0__, v11, v12);
    sub_1BCA7E0(&WarBoardData___c_TypeInfo, v13, v14);
    byte_4B13E0B = 1;
  }
  if ( (this->fields.winCondId & 0x80000000) == 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    Master_object = (WarBoardPieceData_array *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    condGroup = -1;
    if ( Master_object )
    {
      if ( !WarBoardCommonReleaseMaster__IsOpen_41057200(
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
    sub_1BCAA3C(Master_object, method);
  }
  maxForceId_k__BackingField = this->fields._maxForceId_k__BackingField;
  if ( maxForceId_k__BackingField < 1 )
  {
    v20 = 0;
    v19 = 0;
    goto LABEL_30;
  }
  maxGroupId_k__BackingField = this->fields._maxGroupId_k__BackingField;
  v19 = 0;
  v20 = 0;
  for ( i = 1; i <= maxForceId_k__BackingField; ++i )
  {
    if ( (maxGroupId_k__BackingField & 0x80000000) != 0 )
      continue;
    v22 = 0;
    do
    {
      Master_object = WarBoardData__GetPieces_36051476(this, i, v22, v3);
      if ( !Master_object )
        goto LABEL_39;
      max_length = Master_object->max_length;
      v24 = Master_object;
      if ( max_length >= 1 )
      {
        v25 = 0;
        do
        {
          if ( v25 >= max_length )
            sub_1BCAA44(Master_object, method);
          Master_object = (WarBoardPieceData_array *)v24->m_Items[v25];
          if ( !Master_object )
            goto LABEL_39;
          if ( !BYTE4(Master_object->m_Items[3]) && !LOBYTE(Master_object->m_Items[11]) )
          {
            Master_object = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster(
                                                         (WarBoardPieceData_o *)Master_object,
                                                         0LL);
            if ( ((unsigned __int8)Master_object & 1) != 0 )
              ++v19;
            else
              ++v20;
          }
          max_length = v24->max_length;
        }
        while ( (int)++v25 < max_length );
      }
      maxGroupId_k__BackingField = this->fields._maxGroupId_k__BackingField;
      ++v22;
    }
    while ( v22 <= maxGroupId_k__BackingField );
    maxForceId_k__BackingField = this->fields._maxForceId_k__BackingField;
  }
LABEL_30:
  masterExistsForce = this->fields.masterExistsForce;
  v27 = WarBoardData___c_TypeInfo;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, method);
    v27 = WarBoardData___c_TypeInfo;
  }
  _9__98_0 = v27->static_fields->__9__98_0;
  if ( !_9__98_0 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27, method);
      v27 = WarBoardData___c_TypeInfo;
    }
    v29 = (Il2CppObject *)v27->static_fields->__9;
    _9__98_0 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, method, v2, v3);
    System_Func_int__bool____ctor(_9__98_0, v29, Method_WarBoardData___c__CheckWinCond_b__98_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__98_0 = _9__98_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__98_0,
      (int64_t)_9__98_0,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  return (v19 == 0) & (System_Linq_Enumerable__Count_int__49475144(
                         (System_Collections_Generic_IEnumerable_TSource__o *)masterExistsForce,
                         (System_Func_TSource__bool__o *)_9__98_0,
                         (const MethodInfo_2F2EE48 *)Method_System_Linq_Enumerable_Count_int____76879160) > 0) | (v20 == 0);
}


void __fastcall WarBoardData__ClearLastBattlePieceUniqueIndexes(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_UInt32_array *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B13E43 & 1) == 0 )
  {
    sub_1BCA7E0(&uint___TypeInfo, method, v2);
    byte_4B13E43 = 1;
  }
  v4 = (struct System_UInt32_array *)sub_1BCA888(uint___TypeInfo, 0LL);
  this->fields.latestBattlePieceUniqueIndexes = v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.latestBattlePieceUniqueIndexes,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
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

  if ( (byte_4B13E57 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardData_BattleParticipantInfo_TypeInfo, attackPieceData, targetPieceData);
    byte_4B13E57 = 1;
  }
  v6 = (WarBoardData_BattleParticipantInfo_o *)sub_1BCAA2C(
                                                 WarBoardData_BattleParticipantInfo_TypeInfo,
                                                 attackPieceData,
                                                 targetPieceData,
                                                 method);
  WarBoardData_BattleParticipantInfo___ctor(v6, attackPieceData, targetPieceData, 0LL);
  return v6;
}


void __fastcall WarBoardData__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  WarBoardData_c *v5; // x0
  System_String_o *AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY; // x19

  if ( (byte_4B13E03 & 1) == 0 )
  {
    sub_1BCA7E0(&EncryptedPlayerPrefs_TypeInfo, v1, v2);
    sub_1BCA7E0(&WarBoardData_TypeInfo, v3, v4);
    byte_4B13E03 = 1;
  }
  v5 = WarBoardData_TypeInfo;
  if ( !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo, v1);
    v5 = WarBoardData_TypeInfo;
  }
  AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY = v5->static_fields->AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, v1);
  EncryptedPlayerPrefs__SetInt(AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY, 1, 0LL);
}


WarBoardWaitTime_o *__fastcall WarBoardData__CreateEventBossUIDataTask(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x19
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  _QWORD *v15; // x20
  System_Delegate_o *v16; // x21
  WarBoardData___c_c *v17; // x0
  WarBoardTaskBase_TaskCallback_o *_9__152_0; // x22
  Il2CppObject *v19; // x23
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_Delegate_o *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x8
  WarBoardTaskBase_TaskCallback_c *v35; // x1

  if ( (byte_4B13E33 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardTaskBase_TaskCallback_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_WarBoardData___c__CreateEventBossUIDataTask_b__152_0__, v4, v5);
    sub_1BCA7E0(&WarBoardData___c_TypeInfo, v6, v7);
    sub_1BCA7E0(&WarBoardWaitTime_TypeInfo, v8, v9);
    byte_4B13E33 = 1;
  }
  v10 = sub_1BCAA2C(WarBoardWaitTime_TypeInfo, method, v2, v3);
  WarBoardWaitTime___ctor((WarBoardWaitTime_o *)v10, 0.0, 0LL);
  if ( !v10 )
    sub_1BCAA3C(v11, v12);
  v15 = (_QWORD *)(v10 + 40);
  v16 = *(System_Delegate_o **)(v10 + 40);
  v17 = WarBoardData___c_TypeInfo;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, v12);
    v17 = WarBoardData___c_TypeInfo;
  }
  _9__152_0 = v17->static_fields->__9__152_0;
  if ( !_9__152_0 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17, v12);
      v17 = WarBoardData___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v17->static_fields->__9;
    _9__152_0 = (WarBoardTaskBase_TaskCallback_o *)sub_1BCAA2C(WarBoardTaskBase_TaskCallback_TypeInfo, v12, v13, v14);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__152_0,
      v19,
      Method_WarBoardData___c__CreateEventBossUIDataTask_b__152_0__,
      0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__152_0 = _9__152_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__152_0,
      (int64_t)_9__152_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  v27 = System_Delegate__Combine(v16, (System_Delegate_o *)_9__152_0, 0LL);
  v34 = (int64_t)v27;
  if ( !v27 )
    goto LABEL_14;
  v35 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v27->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v15 = v27, (WarBoardTaskBase_TaskCallback_c *)v27->klass != v35) )
  {
    sub_1BCACFC(v27);
LABEL_14:
    *v15 = v34;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 40), v34, v28, v29, v30, v31, v32, v33);
  return (WarBoardWaitTime_o *)v10;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardData__DelSquareInfo(
        WarBoardData_o *this,
        int32_t squareIndex,
        int32_t effectId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  WarBoardData___c__DisplayClass174_0_o *v23; // x22
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  struct WarBoardDataEntity_o *serverData; // x8
  System_Object_array *squareIndexInfo; // x20
  System_Func_object__bool__o *v30; // x21
  Il2CppObject *object; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  PartyOrganizationUtility_o *p_monitor; // x20
  System_Collections_Generic_IEnumerable_T__o *monitor; // x22
  System_Collections_Generic_List_int__o *v37; // x21
  System_Int32_array *v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7

  if ( (byte_4B13E41 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Find_WarBoardSquareIndexData___, *(_QWORD *)&squareIndex, *(_QWORD *)&effectId);
    sub_1BCA7E0(&System_Func_WarBoardSquareIndexData__bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Remove__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor___76787440, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass174_0__DelSquareInfo_b__0__, v19, v20);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass174_0_TypeInfo, v21, v22);
    byte_4B13E41 = 1;
  }
  v23 = (WarBoardData___c__DisplayClass174_0_o *)sub_1BCAA2C(
                                                   WarBoardData___c__DisplayClass174_0_TypeInfo,
                                                   *(_QWORD *)&squareIndex,
                                                   *(_QWORD *)&effectId,
                                                   method);
  WarBoardData___c__DisplayClass174_0___ctor(v23, 0LL);
  if ( !v23 )
    goto LABEL_10;
  v23->fields.squareIndex = squareIndex;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_10;
  squareIndexInfo = (System_Object_array *)serverData->fields.squareIndexInfo;
  v30 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarBoardSquareIndexData__bool__TypeInfo, v25, v26, v27);
  System_Func_object__bool____ctor(
    v30,
    (Il2CppObject *)v23,
    Method_WarBoardData___c__DisplayClass174_0__DelSquareInfo_b__0__,
    0LL);
  object = BasicHelper__Find_object_(
             squareIndexInfo,
             (System_Func_T__bool__o *)v30,
             (const MethodInfo_2EFE860 *)Method_BasicHelper_Find_WarBoardSquareIndexData___);
  if ( !object )
    return;
  p_monitor = (PartyOrganizationUtility_o *)&object[1].monitor;
  monitor = (System_Collections_Generic_IEnumerable_T__o *)object[1].monitor;
  v37 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v32,
                                                    v33,
                                                    v34);
  System_Collections_Generic_List_int____ctor_56116492(
    v37,
    monitor,
    (const MethodInfo_358450C *)Method_System_Collections_Generic_List_int___ctor___76787440);
  if ( !v37 )
LABEL_10:
    sub_1BCAA3C(v24, v25);
  if ( System_Collections_Generic_List_int___Contains(
         v37,
         effectId,
         (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    System_Collections_Generic_List_int___Remove(
      v37,
      effectId,
      (const MethodInfo_3586134 *)Method_System_Collections_Generic_List_int__Remove__);
    v38 = System_Collections_Generic_List_int___ToArray(
            v37,
            (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
    p_monitor->klass = (PartyOrganizationUtility_c *)v38;
    sub_1BCA784(p_monitor, (int64_t)v38, v39, v40, v41, v42, v43, v44);
  }
}


void __fastcall WarBoardData__DeleteAfterContinueDeviceLocalSave(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  WarBoardData_c *v5; // x0
  System_String_o *AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY; // x19

  if ( (byte_4B13E04 & 1) == 0 )
  {
    sub_1BCA7E0(&EncryptedPlayerPrefs_TypeInfo, v1, v2);
    sub_1BCA7E0(&WarBoardData_TypeInfo, v3, v4);
    byte_4B13E04 = 1;
  }
  v5 = WarBoardData_TypeInfo;
  if ( !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo, v1);
    v5 = WarBoardData_TypeInfo;
  }
  AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY = v5->static_fields->AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, v1);
  EncryptedPlayerPrefs__DeleteKey(AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY, 0LL);
}


void __fastcall WarBoardData__DeleteLocalSave(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  WarBoardData_c *v5; // x0
  System_String_o *WARBOARDDATA_SAVEDATA_KEY; // x19

  if ( (byte_4B13E02 & 1) == 0 )
  {
    sub_1BCA7E0(&EncryptedPlayerPrefs_TypeInfo, v1, v2);
    sub_1BCA7E0(&WarBoardData_TypeInfo, v3, v4);
    byte_4B13E02 = 1;
  }
  v5 = WarBoardData_TypeInfo;
  if ( !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo, v1);
    v5 = WarBoardData_TypeInfo;
  }
  WARBOARDDATA_SAVEDATA_KEY = v5->static_fields->WARBOARDDATA_SAVEDATA_KEY;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, v1);
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
  if ( (byte_4B13E08 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__TryGetValue__,
      *(_QWORD *)&forceId,
      *(_QWORD *)&groupId);
    byte_4B13E08 = 1;
  }
  value = 0LL;
  actionPointEntityDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.actionPointEntityDict;
  if ( !actionPointEntityDict )
    sub_1BCAA3C(0LL, *(_QWORD *)&forceId);
  System_Collections_Generic_Dictionary_uint__object___TryGetValue(
    actionPointEntityDict,
    (forceId << 24) | (v4 << 16),
    &value,
    (const MethodInfo_329F654 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__TryGetValue__);
  return (WarBoardActionPointEntity_o *)value;
}


System_Collections_Generic_List_WarBoardPieceData__o *__fastcall WarBoardData__GetAliveEnemyServantPieces(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  WarBoardData___c_c *v13; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *_9__110_0; // x20
  Il2CppObject *v16; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_4B13E17 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_WarBoardPieceData___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v5, v6);
    sub_1BCA7E0(&System_Func_WarBoardPieceData__bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_WarBoardData___c__GetAliveEnemyServantPieces_b__110_0__, v9, v10);
    sub_1BCA7E0(&WarBoardData___c_TypeInfo, v11, v12);
    byte_4B13E17 = 1;
  }
  v13 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, method);
    v13 = WarBoardData___c_TypeInfo;
  }
  _9__110_0 = (System_Func_object__bool__o *)v13->static_fields->__9__110_0;
  if ( !_9__110_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13, method);
      v13 = WarBoardData___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__110_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                 System_Func_WarBoardPieceData__bool__TypeInfo,
                                                 method,
                                                 v2,
                                                 v3);
    System_Func_object__bool____ctor(
      _9__110_0,
      v16,
      Method_WarBoardData___c__GetAliveEnemyServantPieces_b__110_0__,
      0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__110_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__110_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__110_0,
      (int64_t)_9__110_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v24 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__110_0,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (System_Collections_Generic_List_WarBoardPieceData__o *)System_Linq_Enumerable__ToList_object_(
                                                                   v24,
                                                                   (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
}


WarBoardPieceData_array *__fastcall WarBoardData__GetAlivePieces(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  WarBoardData___c_c *v13; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *_9__107_0; // x20
  Il2CppObject *v16; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_4B13E14 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v5, v6);
    sub_1BCA7E0(&System_Func_WarBoardPieceData__bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_WarBoardData___c__GetAlivePieces_b__107_0__, v9, v10);
    sub_1BCA7E0(&WarBoardData___c_TypeInfo, v11, v12);
    byte_4B13E14 = 1;
  }
  v13 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, method);
    v13 = WarBoardData___c_TypeInfo;
  }
  _9__107_0 = (System_Func_object__bool__o *)v13->static_fields->__9__107_0;
  if ( !_9__107_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13, method);
      v13 = WarBoardData___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__107_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                 System_Func_WarBoardPieceData__bool__TypeInfo,
                                                 method,
                                                 v2,
                                                 v3);
    System_Func_object__bool____ctor(_9__107_0, v16, Method_WarBoardData___c__GetAlivePieces_b__107_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__107_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__107_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__107_0,
      (int64_t)_9__107_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v24 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__107_0,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v24,
                                      (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


System_Collections_Generic_List_WarBoardPieceData__o *__fastcall WarBoardData__GetAlivePlayerGroupServantPieces(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  WarBoardData___c_c *v13; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *_9__109_0; // x20
  Il2CppObject *v16; // x21
  PartyOrganizationUtility_o *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_4B13E16 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_WarBoardPieceData___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v5, v6);
    sub_1BCA7E0(&System_Func_WarBoardPieceData__bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_WarBoardData___c__GetAlivePlayerGroupServantPieces_b__109_0__, v9, v10);
    sub_1BCA7E0(&WarBoardData___c_TypeInfo, v11, v12);
    byte_4B13E16 = 1;
  }
  v13 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, method);
    v13 = WarBoardData___c_TypeInfo;
  }
  _9__109_0 = (System_Func_object__bool__o *)v13->static_fields->__9__109_0;
  if ( !_9__109_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13, method);
      v13 = WarBoardData___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__109_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                 System_Func_WarBoardPieceData__bool__TypeInfo,
                                                 method,
                                                 v2,
                                                 v3);
    System_Func_object__bool____ctor(
      _9__109_0,
      v16,
      Method_WarBoardData___c__GetAlivePlayerGroupServantPieces_b__109_0__,
      0LL);
    static_fields = (PartyOrganizationUtility_o *)WarBoardData___c_TypeInfo->static_fields;
    static_fields[1].klass = (PartyOrganizationUtility_c *)_9__109_0;
    sub_1BCA784(static_fields + 1, (int64_t)_9__109_0, v18, v19, v20, v21, v22, v23);
  }
  v24 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__109_0,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (System_Collections_Generic_List_WarBoardPieceData__o *)System_Linq_Enumerable__ToList_object_(
                                                                   v24,
                                                                   (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
}


WarBoardPieceData_array *__fastcall WarBoardData__GetAliveServantPieces(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  WarBoardData___c_c *v13; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *_9__108_0; // x20
  Il2CppObject *v16; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_4B13E15 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v5, v6);
    sub_1BCA7E0(&System_Func_WarBoardPieceData__bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_WarBoardData___c__GetAliveServantPieces_b__108_0__, v9, v10);
    sub_1BCA7E0(&WarBoardData___c_TypeInfo, v11, v12);
    byte_4B13E15 = 1;
  }
  v13 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, method);
    v13 = WarBoardData___c_TypeInfo;
  }
  _9__108_0 = (System_Func_object__bool__o *)v13->static_fields->__9__108_0;
  if ( !_9__108_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13, method);
      v13 = WarBoardData___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__108_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                 System_Func_WarBoardPieceData__bool__TypeInfo,
                                                 method,
                                                 v2,
                                                 v3);
    System_Func_object__bool____ctor(_9__108_0, v16, Method_WarBoardData___c__GetAliveServantPieces_b__108_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__108_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__108_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__108_0,
      (int64_t)_9__108_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v24 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__108_0,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v24,
                                      (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  WarBoardData___c__DisplayClass183_0_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_List_object__o *listPrevCond; // x19
  System_Predicate_object__o *v18; // x20
  Il2CppObject *v19; // x0

  if ( (byte_4B13E47 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPrevCondData__Find__, *(_QWORD *)&condId, method);
    sub_1BCA7E0(&System_Predicate_WarBoardPrevCondData__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass183_0__GetClearedTurn_b__0__, v8, v9);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass183_0_TypeInfo, v10, v11);
    byte_4B13E47 = 1;
  }
  v12 = (WarBoardData___c__DisplayClass183_0_o *)sub_1BCAA2C(
                                                   WarBoardData___c__DisplayClass183_0_TypeInfo,
                                                   *(_QWORD *)&condId,
                                                   method,
                                                   v3);
  WarBoardData___c__DisplayClass183_0___ctor(v12, 0LL);
  if ( !v12
    || (v12->fields.condId = condId,
        listPrevCond = (System_Collections_Generic_List_object__o *)this->fields.listPrevCond,
        v18 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_WarBoardPrevCondData__TypeInfo, v14, v15, v16),
        System_Predicate_object____ctor(
          v18,
          (Il2CppObject *)v12,
          Method_WarBoardData___c__DisplayClass183_0__GetClearedTurn_b__0__,
          0LL),
        !listPrevCond) )
  {
    sub_1BCAA3C(v13, v14);
  }
  v19 = System_Collections_Generic_List_object___Find(
          listPrevCond,
          (System_Predicate_T__o *)v18,
          (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_WarBoardPrevCondData__Find__);
  if ( v19 )
    return HIDWORD(v19[1].klass);
  else
    return -1;
}


// local variable allocation has failed, the output may be wrong!
WarBoardSquareData_o *__fastcall WarBoardData__GetCondSquare(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  WarBoardData___c__DisplayClass130_0_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *condSquares; // x19
  System_Func_object__bool__o *v18; // x20

  if ( (byte_4B13E25 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___, *(_QWORD *)&squareIndex, method);
    sub_1BCA7E0(&System_Func_WarBoardSquareData__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass130_0__GetCondSquare_b__0__, v8, v9);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass130_0_TypeInfo, v10, v11);
    byte_4B13E25 = 1;
  }
  v12 = (WarBoardData___c__DisplayClass130_0_o *)sub_1BCAA2C(
                                                   WarBoardData___c__DisplayClass130_0_TypeInfo,
                                                   *(_QWORD *)&squareIndex,
                                                   method,
                                                   v3);
  WarBoardData___c__DisplayClass130_0___ctor(v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  v12->fields.squareIndex = squareIndex;
  condSquares = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.condSquares;
  v18 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarBoardSquareData__bool__TypeInfo, v14, v15, v16);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v12,
    Method_WarBoardData___c__DisplayClass130_0__GetCondSquare_b__0__,
    0LL);
  return (WarBoardSquareData_o *)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                                   condSquares,
                                   (System_Func_TSource__bool__o *)v18,
                                   (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_int__o *v22; // x21
  void *Piece_36054544; // x0
  __int64 value; // x1
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x3
  signed int max_length; // w8
  unsigned int v28; // w25
  System_Int32_array *v29; // x28
  unsigned __int64 v30; // x27
  WarBoardData___c__DisplayClass133_0_o *v31; // x22
  const MethodInfo *v32; // x2
  int32_t v33; // w1
  System_Collections_Generic_List_T__o *reinforcementsAppointmentSquareList; // x23
  System_Func_int__bool__o *v35; // x24
  System_Func_int__bool__o *v36; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10

  if ( (byte_4B13E27 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int___, squareIds, method);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__0__, v16, v17);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__1__, v18, v19);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass133_0_TypeInfo, v20, v21);
    byte_4B13E27 = 1;
  }
  v22 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    squareIds,
                                                    method,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !squareIds )
    goto LABEL_29;
  max_length = squareIds->max_length;
  if ( max_length >= 1 )
  {
    v28 = 0;
    while ( 1 )
    {
      if ( v28 >= max_length )
LABEL_30:
        sub_1BCAA44(Piece_36054544, value);
      v29 = squareIds->m_Items[v28];
      if ( !v29 )
        break;
      if ( (int)v29->max_length < 1 )
      {
LABEL_18:
        value = 0xFFFFFFFFLL;
        if ( !v22 )
          break;
      }
      else
      {
        v30 = 0LL;
        while ( 1 )
        {
          v31 = (WarBoardData___c__DisplayClass133_0_o *)sub_1BCAA2C(
                                                           WarBoardData___c__DisplayClass133_0_TypeInfo,
                                                           value,
                                                           v25,
                                                           v26);
          WarBoardData___c__DisplayClass133_0___ctor(v31, 0LL);
          if ( v30 >= v29->max_length )
            goto LABEL_30;
          if ( !v31 )
            goto LABEL_29;
          v33 = v29->m_Items[v30 + 1];
          v31->fields.value = v33;
          Piece_36054544 = WarBoardData__GetPiece_36054544(this, v33, v32);
          if ( !Piece_36054544 )
          {
            Piece_36054544 = WarBoardData__GetUnusedTreasure(this, v31->fields.value, v25);
            if ( !Piece_36054544 )
            {
              Piece_36054544 = WarBoardData__GetWall(this, v31->fields.value, 0, v26);
              if ( !Piece_36054544 )
              {
                reinforcementsAppointmentSquareList = (System_Collections_Generic_List_T__o *)this->fields.reinforcementsAppointmentSquareList;
                v35 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, value, v25, v26);
                System_Func_int__bool____ctor(
                  v35,
                  (Il2CppObject *)v31,
                  Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__0__,
                  0LL);
                Piece_36054544 = (void *)BasicHelper__Any_int_(
                                           reinforcementsAppointmentSquareList,
                                           (System_Func_T__bool__o *)v35,
                                           (const MethodInfo_2EFD968 *)Method_BasicHelper_Any_int___);
                if ( ((unsigned __int8)Piece_36054544 & 1) == 0 )
                {
                  v36 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, value, v25, v26);
                  System_Func_int__bool____ctor(
                    v36,
                    (Il2CppObject *)v31,
                    Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__1__,
                    0LL);
                  Piece_36054544 = (void *)BasicHelper__Any_int_(
                                             (System_Collections_Generic_List_T__o *)v22,
                                             (System_Func_T__bool__o *)v36,
                                             (const MethodInfo_2EFD968 *)Method_BasicHelper_Any_int___);
                  if ( ((unsigned __int8)Piece_36054544 & 1) == 0 )
                    break;
                }
              }
            }
          }
          if ( (__int64)++v30 >= (int)v29->max_length )
            goto LABEL_18;
        }
        value = (unsigned int)v31->fields.value;
        if ( !v22 )
          break;
      }
      items = v22->fields._items;
      v38 = Method_System_Collections_Generic_List_int__Add__;
      ++v22->fields._version;
      if ( !items )
        break;
      size = v22->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v22,
          value,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        v22->fields._size = size + 1;
        items->m_Items[size + 1] = value;
      }
      max_length = squareIds->max_length;
      if ( (int)++v28 >= max_length )
        goto LABEL_27;
    }
LABEL_29:
    sub_1BCAA3C(Piece_36054544, value);
  }
LABEL_27:
  if ( !v22 )
    goto LABEL_29;
  return System_Collections_Generic_List_int___ToArray(
           v22,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_String_o *__fastcall WarBoardData__GetEditBgmName(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B13E30 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_BgmMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B13E30 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_BgmMaster___);
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity || !Instance )
    goto LABEL_11;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               stageEntity->fields.editBgmId,
                               (const MethodInfo_31B2E94 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return (System_String_o *)entity[1].monitor;
LABEL_11:
    sub_1BCAA3C(Instance, v9);
  }
  return 0LL;
}


WarBoardPieceData_array *__fastcall WarBoardData__GetEditableServantPieces(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  WarBoardData___c_c *v13; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *_9__120_0; // x20
  Il2CppObject *v16; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_4B13E1D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v5, v6);
    sub_1BCA7E0(&System_Func_WarBoardPieceData__bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_WarBoardData___c__GetEditableServantPieces_b__120_0__, v9, v10);
    sub_1BCA7E0(&WarBoardData___c_TypeInfo, v11, v12);
    byte_4B13E1D = 1;
  }
  v13 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, method);
    v13 = WarBoardData___c_TypeInfo;
  }
  _9__120_0 = (System_Func_object__bool__o *)v13->static_fields->__9__120_0;
  if ( !_9__120_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13, method);
      v13 = WarBoardData___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__120_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                 System_Func_WarBoardPieceData__bool__TypeInfo,
                                                 method,
                                                 v2,
                                                 v3);
    System_Func_object__bool____ctor(_9__120_0, v16, Method_WarBoardData___c__GetEditableServantPieces_b__120_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__120_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__120_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__120_0,
      (int64_t)_9__120_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v24 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__120_0,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v24,
                                      (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


// local variable allocation has failed, the output may be wrong!
WarBoardEffectData_o *__fastcall WarBoardData__GetEffect(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  WarBoardData___c__DisplayClass142_0_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *effects; // x19
  System_Func_object__bool__o *v18; // x20

  if ( (byte_4B13E2C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardEffectData___, *(_QWORD *)&squareIndex, method);
    sub_1BCA7E0(&System_Func_WarBoardEffectData__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass142_0__GetEffect_b__0__, v8, v9);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass142_0_TypeInfo, v10, v11);
    byte_4B13E2C = 1;
  }
  v12 = (WarBoardData___c__DisplayClass142_0_o *)sub_1BCAA2C(
                                                   WarBoardData___c__DisplayClass142_0_TypeInfo,
                                                   *(_QWORD *)&squareIndex,
                                                   method,
                                                   v3);
  WarBoardData___c__DisplayClass142_0___ctor(v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  v12->fields.squareIndex = squareIndex;
  effects = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.effects;
  v18 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarBoardEffectData__bool__TypeInfo, v14, v15, v16);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v12,
    Method_WarBoardData___c__DisplayClass142_0__GetEffect_b__0__,
    0LL);
  return (WarBoardEffectData_o *)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                                   effects,
                                   (System_Func_TSource__bool__o *)v18,
                                   (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardEffectData___);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  WarBoardData___c__DisplayClass105_0_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v18; // x20

  if ( (byte_4B13E12 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, *(_QWORD *)&stageBossIndex, method);
    sub_1BCA7E0(&System_Func_WarBoardPieceData__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass105_0__GetEventBossPiece_b__0__, v8, v9);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass105_0_TypeInfo, v10, v11);
    byte_4B13E12 = 1;
  }
  v12 = (WarBoardData___c__DisplayClass105_0_o *)sub_1BCAA2C(
                                                   WarBoardData___c__DisplayClass105_0_TypeInfo,
                                                   *(_QWORD *)&stageBossIndex,
                                                   method,
                                                   v3);
  WarBoardData___c__DisplayClass105_0___ctor(v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  v12->fields.stageBossIndex = stageBossIndex;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v18 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarBoardPieceData__bool__TypeInfo, v14, v15, v16);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v12,
    Method_WarBoardData___c__DisplayClass105_0__GetEventBossPiece_b__0__,
    0LL);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v18,
                                  (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
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
        sub_1BCAA44(this, method);
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
    sub_1BCAA3C(this, method);
  }
  iconId = 0;
  return iconId + 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardData__GetHoldReinforcements(
        WarBoardData_o *this,
        System_Collections_Generic_List_ReinforcementsData__o **reinforcementsDatas,
        WarBoardStageReinforcementsMaster_o *mst,
        int32_t targetStageReinforcementsId,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x1
  __int64 v69; // x2
  WarBoardData___c__DisplayClass188_0_o *v70; // x23
  void *v71; // x0
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  System_Collections_Generic_List_object__o *reinforcementsSaveList; // x22
  System_Predicate_object__o *v76; // x24
  Il2CppObject *v77; // x25
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x3
  System_Collections_Generic_List_object__o *v88; // x22
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  __int64 v95; // x2
  __int64 v96; // x3
  struct System_Collections_Generic_List_HoldReinforcementsData__o *v97; // x22
  System_Func_object__bool__o *v98; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v99; // x0
  const MethodInfo_3316D1C **v100; // x26
  WarBoardData___c__DisplayClass188_1_c **v101; // x27
  __int64 v102; // x1
  __int64 v103; // x2
  __int64 v104; // x3
  __int64 v105; // x24
  __int64 v106; // x0
  __int64 v107; // x1
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  Il2CppObject *current; // x1
  HoldReinforcementsData_o **v115; // x22
  __int64 v116; // x0
  __int64 v117; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  _BOOL8 v119; // x0
  __int64 v120; // x1
  const MethodInfo *v121; // x2
  System_Int32_array *DeploySquareIds; // x0
  __int64 v123; // x1
  const MethodInfo *v124; // x3
  struct System_Int32_array *limitNums; // x9
  __int64 index_k__BackingField; // x2
  System_Int32_array *v127; // x23
  WarBoardPieceData_array *ReinfocementsPieces; // x0
  __int64 v129; // x1
  struct System_Int32_array *v130; // x8
  __int64 v131; // x9
  _BOOL4 v132; // w25
  Il2CppObject *Instance; // x0
  __int64 v134; // x1
  _BOOL8 IsPlayerTurn; // x0
  __int64 v136; // x1
  __int64 v137; // x2
  __int64 v138; // x3
  __int64 v139; // x10
  int max_length; // w11
  int v141; // w10
  const MethodInfo_3316D1C **v142; // x20
  System_Collections_Generic_List_T__o *v143; // x25
  System_Func_object__bool__o *v144; // x26
  bool v145; // w0
  __int64 v146; // x1
  __int64 v147; // x2
  __int64 v148; // x3
  WarBoardData___c__DisplayClass188_1_c **v149; // x29
  _BOOL8 v150; // x0
  __int64 v151; // x1
  __int64 v152; // x2
  __int64 v153; // x3
  Il2CppObject *v154; // x27
  System_Collections_Generic_List_int__o *v155; // x25
  __int64 v156; // x1
  __int64 v157; // x2
  __int64 v158; // x3
  System_Collections_Generic_List_int__o *v159; // x24
  __int64 v160; // x0
  __int64 v161; // x1
  __int64 v162; // x0
  __int64 v163; // x1
  __int64 v164; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v166; // x9
  __int64 size; // x10
  System_Int32_array *v168; // x0
  int64_t v169; // x2
  int32_t v170; // w3
  System_String_o *v171; // x4
  BattleSetupInfo_o *v172; // x5
  FollowerInfo_o *v173; // x6
  PartyListViewItem_o *v174; // x7
  __int64 v175; // x0
  __int64 v176; // x1
  PartyOrganizationUtility_o *v177; // x25
  __int64 v178; // x0
  __int64 v179; // x1
  __int64 v180; // x8
  __int64 v181; // x1
  struct System_Int32_array *v182; // x8
  _QWORD *v183; // x9
  __int64 v184; // x10
  System_Int32_array *v185; // x0
  int64_t v186; // x2
  int32_t v187; // w3
  System_String_o *v188; // x4
  BattleSetupInfo_o *v189; // x5
  FollowerInfo_o *v190; // x6
  PartyListViewItem_o *v191; // x7
  Il2CppObject *v192; // x0
  __int64 v193; // x1
  void *monitor; // x8
  HoldReinforcementsData_o *v195; // x0
  __int64 v196; // x9
  System_Collections_Generic_List_int__o *v197; // x8
  __int64 v198; // x1
  struct System_Int32_array *v199; // x9
  _QWORD *v200; // x10
  __int64 v201; // x11
  __int64 v202; // x1
  int64_t v203; // x24
  __int64 v204; // x0
  __int64 v205; // x1
  int64_t v206; // x0
  int64_t v207; // x2
  int32_t v208; // w3
  System_String_o *v209; // x4
  BattleSetupInfo_o *v210; // x5
  FollowerInfo_o *v211; // x6
  PartyListViewItem_o *v212; // x7
  int64_t v213; // x0
  int64_t v214; // x2
  int32_t v215; // w3
  System_String_o *v216; // x4
  BattleSetupInfo_o *v217; // x5
  FollowerInfo_o *v218; // x6
  PartyListViewItem_o *v219; // x7
  __int64 v220; // x8
  __int64 v221; // x1
  int64_t v222; // x2
  int32_t v223; // w3
  System_String_o *v224; // x4
  BattleSetupInfo_o *v225; // x5
  FollowerInfo_o *v226; // x6
  PartyListViewItem_o *v227; // x7
  System_Collections_Generic_List_object__o *v228; // x0
  struct System_Object_array *v229; // x8
  _QWORD *v230; // x9
  __int64 v231; // x10
  Il2CppClass **v232; // x8
  Il2CppObject *v233; // x0
  __int64 v234; // x1
  void *v235; // x8
  HoldReinforcementsData_o *v236; // x0
  __int64 v237; // x9
  System_Collections_Generic_List_int__o *v238; // x8
  __int64 v239; // x1
  struct System_Int32_array *v240; // x9
  _QWORD *v241; // x10
  __int64 v242; // x11
  __int64 v243; // x1
  System_Collections_Generic_List_Enumerator_object__o v245; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v246; // [xsp+20h] [xbp-A0h] BYREF
  WarBoardStageReinforcementsEntity_o *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v248; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4B13E4C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_ReinforcementsData___, reinforcementsDatas, mst);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_HoldReinforcementsData___, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_HoldReinforcementsData___, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__Dispose__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__MoveNext__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__get_Current__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__get_Current__, v22, v23);
    sub_1BCA7E0(&System_Func_HoldReinforcementsData__bool__TypeInfo, v24, v25);
    sub_1BCA7E0(&System_Func_ReinforcementsData__bool__TypeInfo, v26, v27);
    sub_1BCA7E0(&int___TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v32, v33);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ReinforcementsData__Add__, v34, v35);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__, v36, v37);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ReinforcementsData__GetEnumerator__, v38, v39);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_HoldReinforcementsData__RemoveAll__, v40, v41);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v42, v43);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v44, v45);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ReinforcementsData___ctor__, v46, v47);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v48, v49);
    sub_1BCA7E0(&System_Collections_Generic_List_ReinforcementsData__TypeInfo, v50, v51);
    sub_1BCA7E0(&System_Predicate_HoldReinforcementsData__TypeInfo, v52, v53);
    sub_1BCA7E0(&ReinforcementsData_TypeInfo, v54, v55);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v56, v57);
    sub_1BCA7E0(&Method_WarBoardData___c__GetHoldReinforcements_b__188_0__, v58, v59);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass188_0__GetHoldReinforcements_b__1__, v60, v61);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass188_0_TypeInfo, v62, v63);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass188_1__GetHoldReinforcements_b__2__, v64, v65);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass188_1_TypeInfo, v66, v67);
    sub_1BCA7E0(&WarBoardData___c_TypeInfo, v68, v69);
    byte_4B13E4C = 1;
  }
  memset(&v248, 0, sizeof(v248));
  entity = 0LL;
  memset(&v246, 0, sizeof(v246));
  v70 = (WarBoardData___c__DisplayClass188_0_o *)sub_1BCAA2C(
                                                   WarBoardData___c__DisplayClass188_0_TypeInfo,
                                                   reinforcementsDatas,
                                                   mst,
                                                   *(_QWORD *)&targetStageReinforcementsId);
  WarBoardData___c__DisplayClass188_0___ctor(v70, 0LL);
  if ( !v70 )
    goto LABEL_156;
  v70->fields.targetStageReinforcementsId = targetStageReinforcementsId;
  reinforcementsSaveList = (System_Collections_Generic_List_object__o *)this->fields.reinforcementsSaveList;
  v71 = WarBoardData___c_TypeInfo;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, v72);
    v71 = WarBoardData___c_TypeInfo;
  }
  v76 = *(System_Predicate_object__o **)(*((_QWORD *)v71 + 23) + 232LL);
  if ( !v76 )
  {
    if ( !*((_DWORD *)v71 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v71, v72);
      v71 = WarBoardData___c_TypeInfo;
    }
    v77 = (Il2CppObject *)**((_QWORD **)v71 + 23);
    v76 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_HoldReinforcementsData__TypeInfo, v72, v73, v74);
    System_Predicate_object____ctor(v76, v77, Method_WarBoardData___c__GetHoldReinforcements_b__188_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__188_0 = (struct System_Predicate_HoldReinforcementsData__o *)v76;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__188_0, (int64_t)v76, v79, v80, v81, v82, v83, v84);
  }
  if ( !reinforcementsSaveList )
    goto LABEL_156;
  System_Collections_Generic_List_object___RemoveAll(
    reinforcementsSaveList,
    (System_Predicate_T__o *)v76,
    (const MethodInfo_35A32B8 *)Method_System_Collections_Generic_List_HoldReinforcementsData__RemoveAll__);
  v88 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ReinforcementsData__TypeInfo,
                                                       v85,
                                                       v86,
                                                       v87);
  System_Collections_Generic_List_object____ctor(
    v88,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ReinforcementsData___ctor__);
  *reinforcementsDatas = (System_Collections_Generic_List_ReinforcementsData__o *)v88;
  sub_1BCA784((PartyOrganizationUtility_o *)reinforcementsDatas, (int64_t)v88, v89, v90, v91, v92, v93, v94);
  v97 = this->fields.reinforcementsSaveList;
  if ( (v70->fields.targetStageReinforcementsId & 0x80000000) == 0 )
  {
    v98 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_HoldReinforcementsData__bool__TypeInfo, v72, v95, v96);
    System_Func_object__bool____ctor(
      v98,
      (Il2CppObject *)v70,
      Method_WarBoardData___c__DisplayClass188_0__GetHoldReinforcements_b__1__,
      0LL);
    v99 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v97,
            (System_Func_TSource__bool__o *)v98,
            (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_HoldReinforcementsData___);
    v71 = System_Linq_Enumerable__ToList_object_(
            v99,
            (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_HoldReinforcementsData___);
    v97 = (struct System_Collections_Generic_List_HoldReinforcementsData__o *)v71;
  }
  if ( !v97 )
LABEL_156:
    sub_1BCAA3C(v71, v72);
  v100 = (const MethodInfo_3316D1C **)&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__;
  v101 = &WarBoardData___c__DisplayClass188_1_TypeInfo;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v245,
    (System_Collections_Generic_List_object__o *)v97,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
  v248 = v245;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(&v248, *v100) )
  {
    v105 = sub_1BCAA2C(*v101, v102, v103, v104);
    WarBoardData___c__DisplayClass188_1___ctor((WarBoardData___c__DisplayClass188_1_o *)v105, 0LL);
    if ( !v105 )
      sub_1BCAA3C(v106, v107);
    current = v248.fields._current;
    *(_QWORD *)(v105 + 16) = v248.fields._current;
    v115 = (HoldReinforcementsData_o **)(v105 + 16);
    sub_1BCA784((PartyOrganizationUtility_o *)(v105 + 16), (int64_t)current, v108, v109, v110, v111, v112, v113);
    stageEntity = this->fields.stageEntity;
    if ( !stageEntity )
      sub_1BCAA3C(v116, v117);
    if ( !*v115 )
      sub_1BCAA3C(v116, v117);
    if ( !mst )
      sub_1BCAA3C(v116, v117);
    v119 = WarBoardStageReinforcementsMaster__TryGetEntity(
             mst,
             &entity,
             stageEntity->fields.id,
             (*v115)->fields._id_k__BackingField,
             0LL);
    if ( v119 )
    {
      if ( !entity )
        sub_1BCAA3C(v119, v120);
      DeploySquareIds = WarBoardData__GetDeploySquareIds(this, entity->fields.squareIds, v121);
      if ( !entity )
        sub_1BCAA3C(DeploySquareIds, v123);
      if ( !*v115 )
        sub_1BCAA3C(DeploySquareIds, v123);
      limitNums = entity->fields.limitNums;
      if ( !limitNums )
        sub_1BCAA3C(DeploySquareIds, v123);
      index_k__BackingField = (*v115)->fields._index_k__BackingField;
      if ( (unsigned int)index_k__BackingField >= limitNums->max_length )
        sub_1BCAA44(DeploySquareIds, v123);
      v127 = DeploySquareIds;
      if ( limitNums->m_Items[index_k__BackingField + 1] < 1 )
      {
        v132 = 0;
      }
      else
      {
        ReinfocementsPieces = WarBoardData__GetReinfocementsPieces(this, entity->fields.id, index_k__BackingField, v124);
        if ( !ReinfocementsPieces )
          sub_1BCAA3C(0LL, v129);
        if ( !entity )
          sub_1BCAA3C(ReinfocementsPieces, v129);
        if ( !*v115 )
          sub_1BCAA3C(ReinfocementsPieces, v129);
        v130 = entity->fields.limitNums;
        if ( !v130 )
          sub_1BCAA3C(ReinfocementsPieces, v129);
        v131 = (*v115)->fields._index_k__BackingField;
        if ( (unsigned int)v131 >= v130->max_length )
          sub_1BCAA44(ReinfocementsPieces, v129);
        v132 = v130->m_Items[v131 + 1] <= (signed int)ReinfocementsPieces->max_length;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !Instance )
        sub_1BCAA3C(0LL, v134);
      IsPlayerTurn = WarBoardManager__IsPlayerTurn((WarBoardManager_o *)Instance, 0LL);
      if ( !entity )
        sub_1BCAA3C(IsPlayerTurn, v136);
      if ( !v127 )
        sub_1BCAA3C(IsPlayerTurn, v136);
      if ( !*v115 )
        sub_1BCAA3C(IsPlayerTurn, v136);
      v139 = (*v115)->fields._index_k__BackingField;
      max_length = v127->max_length;
      if ( (int)v139 >= max_length )
      {
        v141 = 0;
      }
      else
      {
        if ( (unsigned int)v139 >= max_length )
          sub_1BCAA44(IsPlayerTurn, v136);
        v141 = v127->m_Items[v139 + 1] >= 0 && !v132;
      }
      if ( (IsPlayerTurn ^ (entity->fields.forceId != 0)) & (unsigned int)v141 )
      {
        v142 = v100;
        v143 = (System_Collections_Generic_List_T__o *)*reinforcementsDatas;
        v144 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                System_Func_ReinforcementsData__bool__TypeInfo,
                                                v136,
                                                v137,
                                                v138);
        System_Func_object__bool____ctor(
          v144,
          (Il2CppObject *)v105,
          Method_WarBoardData___c__DisplayClass188_1__GetHoldReinforcements_b__2__,
          0LL);
        v145 = BasicHelper__Any_object_(
                 v143,
                 (System_Func_T__bool__o *)v144,
                 (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_ReinforcementsData___);
        v100 = v142;
        if ( v145 )
        {
          if ( !*reinforcementsDatas )
            sub_1BCAA3C(0LL, v146);
          v149 = v101;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v245,
            (System_Collections_Generic_List_object__o *)*reinforcementsDatas,
            (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ReinforcementsData__GetEnumerator__);
          v246 = v245;
          do
          {
            v150 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &v246,
                     (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__MoveNext__);
            if ( !v150 )
            {
              v101 = v149;
              goto LABEL_76;
            }
            v154 = v246.fields._current;
            if ( !v246.fields._current )
              sub_1BCAA3C(v150, v151);
            if ( !*v115 )
              sub_1BCAA3C(v150, v151);
          }
          while ( LODWORD(v246.fields._current[1].klass) != (*v115)->fields._id_k__BackingField );
          v155 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                             System_Collections_Generic_List_int__TypeInfo,
                                                             v151,
                                                             v152,
                                                             v153);
          System_Collections_Generic_List_int____ctor(
            v155,
            (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
          v159 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                             System_Collections_Generic_List_int__TypeInfo,
                                                             v156,
                                                             v157,
                                                             v158);
          System_Collections_Generic_List_int____ctor(
            v159,
            (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
          if ( !v155 )
            sub_1BCAA3C(v160, v161);
          System_Collections_Generic_List_int___AddRange(
            v155,
            (System_Collections_Generic_IEnumerable_T__o *)v154[1].monitor,
            (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
          if ( !*v115 )
            sub_1BCAA3C(v162, v163);
          v164 = (unsigned int)(*v115)->fields._index_k__BackingField;
          items = v155->fields._items;
          v166 = Method_System_Collections_Generic_List_int__Add__;
          ++v155->fields._version;
          if ( !items )
            sub_1BCAA3C(v162, v164);
          size = v155->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v155,
              v164,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v166[4] + 192LL) + 112LL));
          }
          else
          {
            v155->fields._size = size + 1;
            items->m_Items[size + 1] = v164;
          }
          v168 = System_Collections_Generic_List_int___ToArray(
                   v155,
                   (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
          v154[1].monitor = v168;
          sub_1BCA784((PartyOrganizationUtility_o *)&v154[1].monitor, (int64_t)v168, v169, v170, v171, v172, v173, v174);
          if ( !v159 )
            sub_1BCAA3C(v175, v176);
          v177 = (PartyOrganizationUtility_o *)&v154[2];
          v100 = v142;
          System_Collections_Generic_List_int___AddRange(
            v159,
            (System_Collections_Generic_IEnumerable_T__o *)v154[2].klass,
            (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
          if ( !*v115 )
            sub_1BCAA3C(v178, v179);
          v180 = (*v115)->fields._index_k__BackingField;
          v101 = v149;
          if ( (unsigned int)v180 >= v127->max_length )
            sub_1BCAA44(v178, v179);
          v181 = (unsigned int)v127->m_Items[v180 + 1];
          v182 = v159->fields._items;
          v183 = Method_System_Collections_Generic_List_int__Add__;
          ++v159->fields._version;
          if ( !v182 )
            sub_1BCAA3C(v178, v181);
          v184 = v159->fields._size;
          if ( (unsigned int)v184 >= v182->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v159,
              v181,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v183[4] + 192LL) + 112LL));
          }
          else
          {
            v159->fields._size = v184 + 1;
            v182->m_Items[v184 + 1] = v181;
          }
          v185 = System_Collections_Generic_List_int___ToArray(
                   v159,
                   (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
          v177->klass = (PartyOrganizationUtility_c *)v185;
          sub_1BCA784(v177, (int64_t)v185, v186, v187, v188, v189, v190, v191);
          v192 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !v192 )
            sub_1BCAA3C(0LL, v193);
          monitor = v192[27].monitor;
          if ( !monitor )
            sub_1BCAA3C(v192, v193);
          v195 = *v115;
          if ( !*v115 )
            sub_1BCAA3C(0LL, v193);
          v196 = v195->fields._index_k__BackingField;
          if ( (unsigned int)v196 >= v127->max_length )
            sub_1BCAA44(v195, v193);
          v197 = (System_Collections_Generic_List_int__o *)*((_QWORD *)monitor + 29);
          if ( !v197 )
            sub_1BCAA3C(v195, v193);
          v198 = (unsigned int)v127->m_Items[v196 + 1];
          v199 = v197->fields._items;
          v200 = Method_System_Collections_Generic_List_int__Add__;
          ++v197->fields._version;
          if ( !v199 )
            sub_1BCAA3C(v195, v198);
          v201 = v197->fields._size;
          if ( (unsigned int)v201 >= v199->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v197,
              v198,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v200[4] + 192LL) + 112LL));
            v195 = *v115;
            if ( !*v115 )
              sub_1BCAA3C(0LL, v202);
          }
          else
          {
            v197->fields._size = v201 + 1;
            v199->m_Items[v201 + 1] = v198;
          }
          HoldReinforcementsData__DecreaseHoldNum(v195, 0LL);
LABEL_76:
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v246,
            (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__Dispose__);
        }
        else
        {
          v203 = sub_1BCAA2C(ReinforcementsData_TypeInfo, v146, v147, v148);
          ReinforcementsData___ctor((ReinforcementsData_o *)v203, 0LL);
          if ( !entity )
            sub_1BCAA3C(v204, v205);
          if ( !v203 )
            sub_1BCAA3C(v204, v205);
          *(_DWORD *)(v203 + 16) = entity->fields.id;
          v206 = sub_1BCA888(int___TypeInfo, 1LL);
          if ( !*v115 )
            sub_1BCAA3C(v206, v206);
          if ( !v206 )
            sub_1BCAA3C(0LL, 0LL);
          if ( !*(_DWORD *)(v206 + 24) )
            sub_1BCAA44(v206, v206);
          *(_DWORD *)(v206 + 32) = (*v115)->fields._index_k__BackingField;
          *(_QWORD *)(v203 + 24) = v206;
          sub_1BCA784((PartyOrganizationUtility_o *)(v203 + 24), v206, v207, v208, v209, v210, v211, v212);
          v213 = sub_1BCA888(int___TypeInfo, 1LL);
          if ( !*v115 )
            sub_1BCAA3C(v213, v213);
          v220 = (*v115)->fields._index_k__BackingField;
          if ( (unsigned int)v220 >= v127->max_length )
            sub_1BCAA44(v213, v213);
          if ( !v213 )
            sub_1BCAA3C(0LL, 0LL);
          if ( !*(_DWORD *)(v213 + 24) )
            sub_1BCAA44(v213, v213);
          *(_DWORD *)(v213 + 32) = v127->m_Items[v220 + 1];
          *(_QWORD *)(v203 + 32) = v213;
          sub_1BCA784((PartyOrganizationUtility_o *)(v203 + 32), v213, v214, v215, v216, v217, v218, v219);
          v228 = (System_Collections_Generic_List_object__o *)*reinforcementsDatas;
          if ( !*reinforcementsDatas )
            sub_1BCAA3C(0LL, v221);
          v229 = v228->fields._items;
          v230 = Method_System_Collections_Generic_List_ReinforcementsData__Add__;
          ++v228->fields._version;
          if ( !v229 )
            sub_1BCAA3C(v228, v221);
          v231 = v228->fields._size;
          if ( (unsigned int)v231 >= v229->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v228,
              (Il2CppObject *)v203,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v230[4] + 192LL) + 112LL));
          }
          else
          {
            v232 = &v229->obj.klass + v231;
            v228->fields._size = v231 + 1;
            v232[4] = (Il2CppClass *)v203;
            sub_1BCA784((PartyOrganizationUtility_o *)(v232 + 4), v203, v222, v223, v224, v225, v226, v227);
          }
          v233 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !v233 )
            sub_1BCAA3C(0LL, v234);
          v235 = v233[27].monitor;
          if ( !v235 )
            sub_1BCAA3C(v233, v234);
          v236 = *v115;
          if ( !*v115 )
            sub_1BCAA3C(0LL, v234);
          v237 = v236->fields._index_k__BackingField;
          if ( (unsigned int)v237 >= v127->max_length )
            sub_1BCAA44(v236, v234);
          v238 = (System_Collections_Generic_List_int__o *)*((_QWORD *)v235 + 29);
          if ( !v238 )
            sub_1BCAA3C(v236, v234);
          v239 = (unsigned int)v127->m_Items[v237 + 1];
          v240 = v238->fields._items;
          v241 = Method_System_Collections_Generic_List_int__Add__;
          ++v238->fields._version;
          if ( !v240 )
            sub_1BCAA3C(v236, v239);
          v242 = v238->fields._size;
          if ( (unsigned int)v242 >= v240->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v238,
              v239,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v241[4] + 192LL) + 112LL));
            v236 = *v115;
            if ( !*v115 )
              sub_1BCAA3C(0LL, v243);
          }
          else
          {
            v238->fields._size = v242 + 1;
            v240->m_Items[v242 + 1] = v239;
          }
          HoldReinforcementsData__DecreaseHoldNum(v236, 0LL);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v248,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
}


int32_t __fastcall WarBoardData__GetHoldReinforcementsCount(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardData_o *v3; // x19
  struct System_Collections_Generic_List_HoldReinforcementsData__o *reinforcementsSaveList; // x8

  v3 = this;
  if ( (byte_4B13E38 & 1) == 0 )
  {
    this = (WarBoardData_o *)sub_1BCA7E0(
                               &Method_System_Collections_Generic_List_HoldReinforcementsData__get_Count__,
                               method,
                               v2);
    byte_4B13E38 = 1;
  }
  reinforcementsSaveList = v3->fields.reinforcementsSaveList;
  if ( !reinforcementsSaveList )
    sub_1BCAA3C(this, method);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  WarBoardData___c__DisplayClass123_0_o *v25; // x19
  __int64 v26; // x0
  __int64 v27; // x1
  const MethodInfo *v28; // x4
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *v32; // x20
  WarBoardData___c_c *v33; // x0
  System_Func_object__int__o *_9__123_0; // x21
  Il2CppObject *v35; // x22
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x20
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  System_Func_int__bool__o *v47; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *rangeSearches; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B13E20 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Select_WarBoardData_SquareRangeSearch__int___,
      *(_QWORD *)&start,
      *(_QWORD *)&range);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_int___, v11, v12);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Func_WarBoardData_SquareRangeSearch__int__TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_WarBoardData___c__GetInRangeSquareIndecies_b__123_0__, v17, v18);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass123_0__GetInRangeSquareIndecies_b__1__, v19, v20);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass123_0_TypeInfo, v21, v22);
    sub_1BCA7E0(&WarBoardData___c_TypeInfo, v23, v24);
    byte_4B13E20 = 1;
  }
  v25 = (WarBoardData___c__DisplayClass123_0_o *)sub_1BCAA2C(
                                                   WarBoardData___c__DisplayClass123_0_TypeInfo,
                                                   *(_QWORD *)&start,
                                                   *(_QWORD *)&range,
                                                   ignoreStart);
  WarBoardData___c__DisplayClass123_0___ctor(v25, 0LL);
  if ( !v25 )
    sub_1BCAA3C(v26, v27);
  v25->fields.start = start;
  v25->fields.ignoreStart = ignoreStart;
  rangeSearches = 0LL;
  WarBoardData__SearchInRangeSquares(this, start, range, &rangeSearches, v28);
  v32 = rangeSearches;
  if ( !rangeSearches )
    return 0LL;
  v33 = WarBoardData___c_TypeInfo;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, v29);
    v33 = WarBoardData___c_TypeInfo;
  }
  _9__123_0 = (System_Func_object__int__o *)v33->static_fields->__9__123_0;
  if ( !_9__123_0 )
  {
    if ( !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33, v29);
      v33 = WarBoardData___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v33->static_fields->__9;
    _9__123_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                System_Func_WarBoardData_SquareRangeSearch__int__TypeInfo,
                                                v29,
                                                v30,
                                                v31);
    System_Func_object__int____ctor(_9__123_0, v35, Method_WarBoardData___c__GetInRangeSquareIndecies_b__123_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__123_0 = (struct System_Func_WarBoardData_SquareRangeSearch__int__o *)_9__123_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__123_0,
      (int64_t)_9__123_0,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
  }
  v43 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v32,
                                                               (System_Func_TSource__TResult__o *)_9__123_0,
                                                               (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_WarBoardData_SquareRangeSearch__int___);
  v47 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v44, v45, v46);
  System_Func_int__bool____ctor(
    v47,
    (Il2CppObject *)v25,
    Method_WarBoardData___c__DisplayClass123_0__GetInRangeSquareIndecies_b__1__,
    0LL);
  v48 = System_Linq_Enumerable__Where_int_(
          v43,
          (System_Func_TSource__bool__o *)v47,
          (const MethodInfo_2F515C0 *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v48,
           (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  WarBoardSquareData_array *result; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x20
  System_Func_T__TResult__o *v20; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0

  if ( (byte_4B13E21 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_int__WarBoardSquareData___, *(_QWORD *)&start, *(_QWORD *)&range);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_WarBoardSquareData___, v9, v10);
    sub_1BCA7E0(&System_Func_int__WarBoardSquareData__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_WarBoardData__GetInRangeSquares_b__124_0__, v13, v14);
    byte_4B13E21 = 1;
  }
  result = (WarBoardSquareData_array *)WarBoardData__GetInRangeSquareIndecies(this, start, range, ignoreStart, method);
  if ( result )
  {
    v19 = (System_Collections_Generic_IEnumerable_TSource__o *)result;
    v20 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_int__WarBoardSquareData__TypeInfo, v16, v17, v18);
    System_Func_int__object____ctor(v20, (Il2CppObject *)this, Method_WarBoardData__GetInRangeSquares_b__124_0__, 0LL);
    v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                 v19,
                                                                 (System_Func_TSource__TResult__o *)v20,
                                                                 (const MethodInfo_2F3F30C *)Method_System_Linq_Enumerable_Select_int__WarBoardSquareData___);
    return (WarBoardSquareData_array *)System_Linq_Enumerable__ToArray_object_(
                                         v21,
                                         (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_WarBoardSquareData___);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
WarBoardItemData_o *__fastcall WarBoardData__GetItem(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  WarBoardData___c__DisplayClass135_0_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *items; // x19
  System_Func_object__bool__o *v18; // x20

  if ( (byte_4B13E28 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___, *(_QWORD *)&squareIndex, method);
    sub_1BCA7E0(&System_Func_WarBoardItemData__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass135_0__GetItem_b__0__, v8, v9);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass135_0_TypeInfo, v10, v11);
    byte_4B13E28 = 1;
  }
  v12 = (WarBoardData___c__DisplayClass135_0_o *)sub_1BCAA2C(
                                                   WarBoardData___c__DisplayClass135_0_TypeInfo,
                                                   *(_QWORD *)&squareIndex,
                                                   method,
                                                   v3);
  WarBoardData___c__DisplayClass135_0___ctor(v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  v12->fields.squareIndex = squareIndex;
  items = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.items;
  v18 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarBoardItemData__bool__TypeInfo, v14, v15, v16);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v12,
    Method_WarBoardData___c__DisplayClass135_0__GetItem_b__0__,
    0LL);
  return (WarBoardItemData_o *)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                                 items,
                                 (System_Func_TSource__bool__o *)v18,
                                 (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___);
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
    sub_1BCAA3C(this, method);
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
  if ( (byte_4B13E07 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__TryGetValue__,
      *(_QWORD *)&forceId,
      *(_QWORD *)&groupId);
    byte_4B13E07 = 1;
  }
  value = 0LL;
  npcEntityDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.npcEntityDict;
  if ( !npcEntityDict )
    sub_1BCAA3C(0LL, *(_QWORD *)&forceId);
  System_Collections_Generic_Dictionary_uint__object___TryGetValue(
    npcEntityDict,
    (forceId << 24) | (v4 << 16),
    &value,
    (const MethodInfo_329F654 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__TryGetValue__);
  return (WarBoardStageNpcEntity_o *)value;
}


int32_t __fastcall WarBoardData__GetPartySkillId(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardStageEntity_o *stageEntity; // x8

  stageEntity = this->fields.stageEntity;
  if ( !stageEntity )
    sub_1BCAA3C(this, method);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x23
  const MethodInfo *v18; // x4
  System_Int32_array *v19; // x0
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  System_Func_object__bool__o *v31; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0

  if ( (byte_4B13E1B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, *(_QWORD *)&start, *(_QWORD *)&range);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v9, v10);
    sub_1BCA7E0(&System_Func_WarBoardPieceData__bool__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass118_0__GetPicesForRange_b__0__, v13, v14);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass118_0_TypeInfo, v15, v16);
    byte_4B13E1B = 1;
  }
  v17 = sub_1BCAA2C(WarBoardData___c__DisplayClass118_0_TypeInfo, *(_QWORD *)&start, *(_QWORD *)&range, ignoreStart);
  WarBoardData___c__DisplayClass118_0___ctor((WarBoardData___c__DisplayClass118_0_o *)v17, 0LL);
  v19 = WarBoardData__GetInRangeSquareIndecies(this, start, range, ignoreStart, v18);
  if ( !v17 )
    sub_1BCAA3C(v19, v20);
  *(_QWORD *)(v17 + 16) = v19;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)v19, v21, v22, v23, v24, v25, v26);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v31 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarBoardPieceData__bool__TypeInfo, v28, v29, v30);
  System_Func_object__bool____ctor(
    v31,
    (Il2CppObject *)v17,
    Method_WarBoardData___c__DisplayClass118_0__GetPicesForRange_b__0__,
    0LL);
  v32 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)v31,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v32,
                                      (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x23
  const MethodInfo *v18; // x4
  System_Int32_array *v19; // x0
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  System_Func_object__bool__o *v31; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0

  if ( (byte_4B13E1C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, *(_QWORD *)&start, *(_QWORD *)&range);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v9, v10);
    sub_1BCA7E0(&System_Func_WarBoardPieceData__bool__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass119_0__GetPicesForRangeIsAlive_b__0__, v13, v14);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass119_0_TypeInfo, v15, v16);
    byte_4B13E1C = 1;
  }
  v17 = sub_1BCAA2C(WarBoardData___c__DisplayClass119_0_TypeInfo, *(_QWORD *)&start, *(_QWORD *)&range, ignoreStart);
  WarBoardData___c__DisplayClass119_0___ctor((WarBoardData___c__DisplayClass119_0_o *)v17, 0LL);
  v19 = WarBoardData__GetInRangeSquareIndecies(this, start, range, ignoreStart, v18);
  if ( !v17 )
    sub_1BCAA3C(v19, v20);
  *(_QWORD *)(v17 + 16) = v19;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)v19, v21, v22, v23, v24, v25, v26);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v31 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarBoardPieceData__bool__TypeInfo, v28, v29, v30);
  System_Func_object__bool____ctor(
    v31,
    (Il2CppObject *)v17,
    Method_WarBoardData___c__DisplayClass119_0__GetPicesForRangeIsAlive_b__0__,
    0LL);
  v32 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)v31,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v32,
                                      (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  WarBoardData___c__DisplayClass100_0_o *v19; // x24
  __int64 v20; // x0
  __int64 v21; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Func_object__bool__o *v26; // x20

  if ( (byte_4B13E0D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___,
      *(_QWORD *)&forceId,
      *(_QWORD *)&groupId);
    sub_1BCA7E0(&System_Func_WarBoardPieceData__bool__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass100_0__GetPiece_b__0__, v13, v14);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass100_0_TypeInfo, v15, v16);
    sub_1BCA7E0(&WarBoardPieceData_TypeInfo, v17, v18);
    byte_4B13E0D = 1;
  }
  v19 = (WarBoardData___c__DisplayClass100_0_o *)sub_1BCAA2C(
                                                   WarBoardData___c__DisplayClass100_0_TypeInfo,
                                                   *(_QWORD *)&forceId,
                                                   *(_QWORD *)&groupId,
                                                   *(_QWORD *)&index);
  WarBoardData___c__DisplayClass100_0___ctor(v19, 0LL);
  if ( !v19 )
    sub_1BCAA3C(v20, v21);
  v19->fields.ignoreDead = ignoreDead;
  if ( !WarBoardPieceData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardPieceData_TypeInfo, v21);
  v19->fields.uniqueId = WarBoardPieceData__GetUniqueIndex(forceId, groupId, index, 0LL);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v26 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarBoardPieceData__bool__TypeInfo, v23, v24, v25);
  System_Func_object__bool____ctor(
    v26,
    (Il2CppObject *)v19,
    Method_WarBoardData___c__DisplayClass100_0__GetPiece_b__0__,
    0LL);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v26,
                                  (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


int32_t __fastcall WarBoardData__GetPieceDispPriority(
        WarBoardData_o *this,
        WarBoardPieceData_o *piece,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  const MethodInfo *v21; // x1
  System_Object_array *AlivePieces; // x19
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Predicate_object__o *v26; // x20

  if ( (byte_4B13E2F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_FindIndex_WarBoardPieceData___, piece, method);
    sub_1BCA7E0(&System_Predicate_WarBoardPieceData__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass145_0__GetPieceDispPriority_b__0__, v8, v9);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass145_0_TypeInfo, v10, v11);
    byte_4B13E2F = 1;
  }
  v12 = sub_1BCAA2C(WarBoardData___c__DisplayClass145_0_TypeInfo, piece, method, v3);
  WarBoardData___c__DisplayClass145_0___ctor((WarBoardData___c__DisplayClass145_0_o *)v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  *(_QWORD *)(v12 + 16) = piece;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)piece, v15, v16, v17, v18, v19, v20);
  AlivePieces = (System_Object_array *)WarBoardData__GetAlivePieces(this, v21);
  v26 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_WarBoardPieceData__TypeInfo, v23, v24, v25);
  System_Predicate_object____ctor(
    v26,
    (Il2CppObject *)v12,
    Method_WarBoardData___c__DisplayClass145_0__GetPieceDispPriority_b__0__,
    0LL);
  return System_Array__FindIndex_object_(
           AlivePieces,
           (System_Predicate_T__o *)v26,
           (const MethodInfo_300D674 *)Method_System_Array_FindIndex_WarBoardPieceData___);
}


int32_t __fastcall WarBoardData__GetPieceMaxDispPriotiry(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceData_array *pieces; // x8

  pieces = this->fields.pieces;
  if ( !pieces )
    sub_1BCAA3C(this, method);
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
  __int64 v11; // x1
  WarBoardPieceData_o *v12; // x19
  UnityEngine_Object_o *pieceComponent; // x20
  __int64 v14; // x1
  UnityEngine_Component_o *gameObject; // x0
  bool activeInHierarchy; // w8

  if ( (byte_4B13E10 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&forceId, *(_QWORD *)&groupId);
    byte_4B13E10 = 1;
  }
  result = WarBoardData__GetPiece(this, forceId, groupId, index, 0, v5);
  if ( result )
  {
    v12 = result;
    if ( !result->fields._isDead_k__BackingField )
      return v12;
    pieceComponent = (UnityEngine_Object_o *)result->fields.pieceComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    if ( !UnityEngine_Object__op_Inequality(pieceComponent, 0LL, 0LL) )
      return v12;
    gameObject = (UnityEngine_Component_o *)v12->fields.pieceComponent;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_1BCAA3C(gameObject, v14);
    }
    activeInHierarchy = UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)gameObject, 0LL);
    result = 0LL;
    if ( activeInHierarchy )
      return v12;
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  WarBoardData___c__DisplayClass99_0_o *v17; // x23
  __int64 v18; // x1
  __int64 UniqueIndex; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v24; // x20
  Il2CppObject *v25; // x0

  if ( (byte_4B13E0C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___,
      *(_QWORD *)&forceId,
      *(_QWORD *)&groupId);
    sub_1BCA7E0(&System_Func_WarBoardPieceData__bool__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass99_0__GetPiecePosition_b__0__, v11, v12);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass99_0_TypeInfo, v13, v14);
    sub_1BCA7E0(&WarBoardPieceData_TypeInfo, v15, v16);
    byte_4B13E0C = 1;
  }
  v17 = (WarBoardData___c__DisplayClass99_0_o *)sub_1BCAA2C(
                                                  WarBoardData___c__DisplayClass99_0_TypeInfo,
                                                  *(_QWORD *)&forceId,
                                                  *(_QWORD *)&groupId,
                                                  *(_QWORD *)&index);
  WarBoardData___c__DisplayClass99_0___ctor(v17, 0LL);
  if ( !WarBoardPieceData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardPieceData_TypeInfo, v18);
  UniqueIndex = WarBoardPieceData__GetUniqueIndex(forceId, groupId, index, 0LL);
  if ( !v17 )
    sub_1BCAA3C(UniqueIndex, v20);
  v17->fields.uniqueId = UniqueIndex;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v24 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarBoardPieceData__bool__TypeInfo, v20, v21, v22);
  System_Func_object__bool____ctor(
    v24,
    (Il2CppObject *)v17,
    Method_WarBoardData___c__DisplayClass99_0__GetPiecePosition_b__0__,
    0LL);
  v25 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
          pieces,
          (System_Func_TSource__bool__o *)v24,
          (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
  if ( v25 )
    return (int32_t)v25[4].klass;
  else
    return -1;
}


// local variable allocation has failed, the output may be wrong!
WarBoardPieceData_o *__fastcall WarBoardData__GetPiece_36054544(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  WarBoardData___c__DisplayClass101_0_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v18; // x20

  if ( (byte_4B13E0E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, *(_QWORD *)&squareIndex, method);
    sub_1BCA7E0(&System_Func_WarBoardPieceData__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass101_0__GetPiece_b__0__, v8, v9);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass101_0_TypeInfo, v10, v11);
    byte_4B13E0E = 1;
  }
  v12 = (WarBoardData___c__DisplayClass101_0_o *)sub_1BCAA2C(
                                                   WarBoardData___c__DisplayClass101_0_TypeInfo,
                                                   *(_QWORD *)&squareIndex,
                                                   method,
                                                   v3);
  WarBoardData___c__DisplayClass101_0___ctor(v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  v12->fields.squareIndex = squareIndex;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v18 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarBoardPieceData__bool__TypeInfo, v14, v15, v16);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v12,
    Method_WarBoardData___c__DisplayClass101_0__GetPiece_b__0__,
    0LL);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v18,
                                  (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


// local variable allocation has failed, the output may be wrong!
WarBoardPieceData_o *__fastcall WarBoardData__GetPiece_36054756(
        WarBoardData_o *this,
        uint32_t uniqueIndex,
        bool ignoreDead,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  WarBoardData___c__DisplayClass102_0_o *v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v19; // x20

  if ( (byte_4B13E0F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, *(_QWORD *)&uniqueIndex, ignoreDead);
    sub_1BCA7E0(&System_Func_WarBoardPieceData__bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass102_0__GetPiece_b__0__, v9, v10);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass102_0_TypeInfo, v11, v12);
    byte_4B13E0F = 1;
  }
  v13 = (WarBoardData___c__DisplayClass102_0_o *)sub_1BCAA2C(
                                                   WarBoardData___c__DisplayClass102_0_TypeInfo,
                                                   *(_QWORD *)&uniqueIndex,
                                                   ignoreDead,
                                                   method);
  WarBoardData___c__DisplayClass102_0___ctor(v13, 0LL);
  if ( !v13 )
    sub_1BCAA3C(v14, v15);
  v13->fields.uniqueIndex = uniqueIndex;
  v13->fields.ignoreDead = ignoreDead;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v19 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarBoardPieceData__bool__TypeInfo, v15, v16, v17);
  System_Func_object__bool____ctor(
    v19,
    (Il2CppObject *)v13,
    Method_WarBoardData___c__DisplayClass102_0__GetPiece_b__0__,
    0LL);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v19,
                                  (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


// local variable allocation has failed, the output may be wrong!
WarBoardPieceData_array *__fastcall WarBoardData__GetPieces(
        WarBoardData_o *this,
        int32_t forceId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  WarBoardData___c__DisplayClass116_0_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v20; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0

  if ( (byte_4B13E19 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, *(_QWORD *)&forceId, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v6, v7);
    sub_1BCA7E0(&System_Func_WarBoardPieceData__bool__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass116_0__GetPieces_b__0__, v10, v11);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass116_0_TypeInfo, v12, v13);
    byte_4B13E19 = 1;
  }
  v14 = (WarBoardData___c__DisplayClass116_0_o *)sub_1BCAA2C(
                                                   WarBoardData___c__DisplayClass116_0_TypeInfo,
                                                   *(_QWORD *)&forceId,
                                                   method,
                                                   v3);
  WarBoardData___c__DisplayClass116_0___ctor(v14, 0LL);
  if ( !v14 )
    sub_1BCAA3C(v15, v16);
  v14->fields.forceIdOnly = forceId << 24;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v20 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarBoardPieceData__bool__TypeInfo, v16, v17, v18);
  System_Func_object__bool____ctor(
    v20,
    (Il2CppObject *)v14,
    Method_WarBoardData___c__DisplayClass116_0__GetPieces_b__0__,
    0LL);
  v21 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)v20,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v21,
                                      (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


// local variable allocation has failed, the output may be wrong!
WarBoardPieceData_array *__fastcall WarBoardData__GetPieces_36051476(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  unsigned __int8 v4; // w20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  WarBoardData___c__DisplayClass117_0_o *v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v21; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0

  v4 = groupId;
  if ( (byte_4B13E1A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, *(_QWORD *)&forceId, *(_QWORD *)&groupId);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v7, v8);
    sub_1BCA7E0(&System_Func_WarBoardPieceData__bool__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass117_0__GetPieces_b__0__, v11, v12);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass117_0_TypeInfo, v13, v14);
    byte_4B13E1A = 1;
  }
  v15 = (WarBoardData___c__DisplayClass117_0_o *)sub_1BCAA2C(
                                                   WarBoardData___c__DisplayClass117_0_TypeInfo,
                                                   *(_QWORD *)&forceId,
                                                   *(_QWORD *)&groupId,
                                                   method);
  WarBoardData___c__DisplayClass117_0___ctor(v15, 0LL);
  if ( !v15 )
    sub_1BCAA3C(v16, v17);
  v15->fields.forceAndGroup = (forceId << 24) | (v4 << 16);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v21 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarBoardPieceData__bool__TypeInfo, v17, v18, v19);
  System_Func_object__bool____ctor(
    v21,
    (Il2CppObject *)v15,
    Method_WarBoardData___c__DisplayClass117_0__GetPieces_b__0__,
    0LL);
  v22 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)v21,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v22,
                                      (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


System_String_o *__fastcall WarBoardData__GetPlayBgmName(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B13E31 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_BgmMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B13E31 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_BgmMaster___);
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity || !Instance )
    goto LABEL_11;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               stageEntity->fields.playBgmId,
                               (const MethodInfo_31B2E94 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return (System_String_o *)entity[1].monitor;
LABEL_11:
    sub_1BCAA3C(Instance, v9);
  }
  return 0LL;
}


System_Int32_array *__fastcall WarBoardData__GetPlayReinforcements(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_Generic_List_int__o *playedStageReinforcementsList; // x0

  if ( (byte_4B13E4A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, method, v2);
    byte_4B13E4A = 1;
  }
  playedStageReinforcementsList = this->fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList )
    sub_1BCAA3C(0LL, method);
  return System_Collections_Generic_List_int___ToArray(
           playedStageReinforcementsList,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardEventData_o *__fastcall WarBoardData__GetPlayedEventData(
        WarBoardData_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  WarBoardData___c__DisplayClass164_0_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_List_object__o *listEvent; // x19
  System_Predicate_object__o *v18; // x20

  if ( (byte_4B13E3A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardEventData__Find__, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&System_Predicate_WarBoardEventData__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass164_0__GetPlayedEventData_b__0__, v8, v9);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass164_0_TypeInfo, v10, v11);
    byte_4B13E3A = 1;
  }
  v12 = (WarBoardData___c__DisplayClass164_0_o *)sub_1BCAA2C(
                                                   WarBoardData___c__DisplayClass164_0_TypeInfo,
                                                   *(_QWORD *)&eventId,
                                                   method,
                                                   v3);
  WarBoardData___c__DisplayClass164_0___ctor(v12, 0LL);
  if ( !v12
    || (v12->fields.eventId = eventId,
        listEvent = (System_Collections_Generic_List_object__o *)this->fields.listEvent,
        v18 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_WarBoardEventData__TypeInfo, v14, v15, v16),
        System_Predicate_object____ctor(
          v18,
          (Il2CppObject *)v12,
          Method_WarBoardData___c__DisplayClass164_0__GetPlayedEventData_b__0__,
          0LL),
        !listEvent) )
  {
    sub_1BCAA3C(v13, v14);
  }
  return (WarBoardEventData_o *)System_Collections_Generic_List_object___Find(
                                  listEvent,
                                  (System_Predicate_T__o *)v18,
                                  (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_WarBoardEventData__Find__);
}


WarBoardPieceData_o *__fastcall WarBoardData__GetPlayerMasterPiece(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  WarBoardData___c_c *v11; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *_9__104_0; // x20
  Il2CppObject *v14; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B13E11 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, method, v2);
    sub_1BCA7E0(&System_Func_WarBoardPieceData__bool__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_WarBoardData___c__GetPlayerMasterPiece_b__104_0__, v7, v8);
    sub_1BCA7E0(&WarBoardData___c_TypeInfo, v9, v10);
    byte_4B13E11 = 1;
  }
  v11 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, method);
    v11 = WarBoardData___c_TypeInfo;
  }
  _9__104_0 = (System_Func_object__bool__o *)v11->static_fields->__9__104_0;
  if ( !_9__104_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11, method);
      v11 = WarBoardData___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__104_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                 System_Func_WarBoardPieceData__bool__TypeInfo,
                                                 method,
                                                 v2,
                                                 v3);
    System_Func_object__bool____ctor(_9__104_0, v14, Method_WarBoardData___c__GetPlayerMasterPiece_b__104_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__104_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__104_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__104_0,
      (int64_t)_9__104_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                                  pieces,
                                  (System_Func_TSource__bool__o *)_9__104_0,
                                  (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


WarBoardPieceData_array *__fastcall WarBoardData__GetPlayerPieces(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  WarBoardData___c_c *v13; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *_9__121_0; // x20
  Il2CppObject *v16; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_4B13E1E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v5, v6);
    sub_1BCA7E0(&System_Func_WarBoardPieceData__bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_WarBoardData___c__GetPlayerPieces_b__121_0__, v9, v10);
    sub_1BCA7E0(&WarBoardData___c_TypeInfo, v11, v12);
    byte_4B13E1E = 1;
  }
  v13 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, method);
    v13 = WarBoardData___c_TypeInfo;
  }
  _9__121_0 = (System_Func_object__bool__o *)v13->static_fields->__9__121_0;
  if ( !_9__121_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13, method);
      v13 = WarBoardData___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__121_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                 System_Func_WarBoardPieceData__bool__TypeInfo,
                                                 method,
                                                 v2,
                                                 v3);
    System_Func_object__bool____ctor(_9__121_0, v16, Method_WarBoardData___c__GetPlayerPieces_b__121_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__121_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__121_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__121_0,
      (int64_t)_9__121_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v24 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__121_0,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v24,
                                      (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


System_Int32_array *__fastcall WarBoardData__GetPrevCondIds(
        WarBoardData_o *this,
        System_Int32_array *commonReleaseIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_int__o *v19; // x20
  __int64 v20; // x1
  System_Collections_Generic_List_int__o *Master_object; // x0
  __int64 v22; // x1
  __int64 v23; // x8
  WarBoardCommonReleaseMaster_o *v24; // x21
  unsigned __int64 v25; // x23
  int size; // w8
  System_Collections_Generic_List_int__o *v27; // x22
  unsigned int v28; // w25
  __int64 v29; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0

  if ( (byte_4B13E45 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, commonReleaseIds, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Distinct_int___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_int___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v17, v18);
    byte_4B13E45 = 1;
  }
  v19 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    commonReleaseIds,
                                                    method,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v20);
  Master_object = (System_Collections_Generic_List_int__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  if ( !commonReleaseIds )
    goto LABEL_25;
  v23 = *(_QWORD *)&commonReleaseIds->max_length;
  if ( (int)v23 >= 1 )
  {
    v24 = (WarBoardCommonReleaseMaster_o *)Master_object;
    v25 = 0LL;
    while ( 1 )
    {
      if ( v25 >= (unsigned int)v23 )
        goto LABEL_26;
      if ( !v24 )
        goto LABEL_25;
      Master_object = (System_Collections_Generic_List_int__o *)WarBoardCommonReleaseMaster__GetList(
                                                                  v24,
                                                                  commonReleaseIds->m_Items[v25 + 1],
                                                                  0LL);
      if ( !Master_object )
        goto LABEL_25;
      size = Master_object->fields._size;
      v27 = Master_object;
      if ( size >= 1 )
        break;
LABEL_22:
      LODWORD(v23) = commonReleaseIds->max_length;
      if ( (__int64)++v25 >= (int)v23 )
        goto LABEL_23;
    }
    v28 = 0;
    while ( v28 < size )
    {
      v29 = *((_QWORD *)&v27->fields._syncRoot + (int)v28);
      if ( !v29 )
        goto LABEL_25;
      if ( (unsigned int)(*(_DWORD *)(v29 + 28) - 7) <= 1 )
      {
        if ( !v19 )
          goto LABEL_25;
        v22 = *(unsigned int *)(v29 + 40);
        items = v19->fields._items;
        v31 = Method_System_Collections_Generic_List_int__Add__;
        ++v19->fields._version;
        if ( !items )
          goto LABEL_25;
        v32 = v19->fields._size;
        if ( (unsigned int)v32 >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v19,
            v22,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v19->fields._size = v32 + 1;
          items->m_Items[v32 + 1] = v22;
        }
      }
      size = v27->fields._size;
      if ( (int)++v28 >= size )
        goto LABEL_22;
    }
LABEL_26:
    sub_1BCAA44(Master_object, v22);
  }
LABEL_23:
  v33 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v19,
          (const MethodInfo_2F30074 *)Method_System_Linq_Enumerable_Distinct_int___);
  Master_object = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                              v33,
                                                              (const MethodInfo_2F4F4F8 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !Master_object )
LABEL_25:
    sub_1BCAA3C(Master_object, v22);
  return System_Collections_Generic_List_int___ToArray(
           Master_object,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *v13; // x21
  const MethodInfo *v14; // x1
  WarBoardPieceData_array *AlivePieces; // x0
  int64_t v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int max_length; // w8
  WarBoardPieceData_array *v24; // x22
  unsigned int v25; // w23
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0

  if ( (byte_4B13E1F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_WarBoardPieceData__Add__,
      *(_QWORD *)&stageReinfoId,
      *(_QWORD *)&reinfoIndex);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v11, v12);
    byte_4B13E1F = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                       *(_QWORD *)&stageReinfoId,
                                                       *(_QWORD *)&reinfoIndex,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  AlivePieces = WarBoardData__GetAlivePieces(this, v14);
  if ( !AlivePieces )
    goto LABEL_18;
  max_length = AlivePieces->max_length;
  v24 = AlivePieces;
  if ( max_length >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      if ( v25 >= max_length )
        sub_1BCAA44(AlivePieces, v16);
      v16 = (int64_t)v24->m_Items[v25];
      if ( !v16 )
        break;
      if ( *(_DWORD *)(v16 + 288) == stageReinfoId && *(_DWORD *)(v16 + 292) == reinfoIndex )
      {
        if ( !v13 )
          break;
        items = v13->fields._items;
        v27 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
        ++v13->fields._version;
        if ( !items )
          break;
        size = v13->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v13,
            (Il2CppObject *)v16,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = &items->obj.klass + size;
          v13->fields._size = size + 1;
          v29[4] = (Il2CppClass *)v16;
          sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 4), v16, v17, v18, v19, v20, v21, v22);
        }
      }
      max_length = v24->max_length;
      if ( (int)++v25 >= max_length )
        goto LABEL_16;
    }
LABEL_18:
    sub_1BCAA3C(AlivePieces, v16);
  }
LABEL_16:
  if ( !v13 )
    goto LABEL_18;
  return (WarBoardPieceData_array *)System_Collections_Generic_List_object___ToArray(
                                      v13,
                                      (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardData__GetReinforcements(
        WarBoardData_o *this,
        System_Collections_Generic_List_ReinforcementsData__o **reinfoDatas,
        WarBoardStageReinforcementsMaster_o *mst,
        int32_t targetStageReinforcementsId,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  WarBoardData___c__DisplayClass189_0_o *v38; // x27
  WarBoardStageReinforcementsEntity_o *ReinfocementsPieces; // x0
  __int64 v40; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  WarBoardData___c__DisplayClass189_0_Fields *p_fields; // x24
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  System_Collections_Generic_List_int__o *v46; // x23
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  const MethodInfo *v50; // x2
  System_Int32_array *DeploySquareIds; // x24
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x25
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  __int64 v62; // x19
  const MethodInfo *v63; // x3
  __int64 v64; // x8
  __int64 v65; // x2
  struct System_Int32_array *reinforcementsIds; // x8
  struct System_Int32_array *limitNums; // x8
  WarBoardStageReinforcementsEntity_o *v68; // x8
  struct System_Int32_array *v69; // x9
  __int64 v70; // x10
  _BOOL4 v71; // w20
  _BOOL4 IsOnce; // w27
  WarBoardData_o *v73; // x26
  const MethodInfo *v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x29
  __int64 v78; // x22
  System_Func_int__bool__o *v79; // x21
  System_Int32_array *v80; // x28
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  _BOOL4 v87; // w28
  System_Collections_Generic_List_T__o *v88; // x19
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x3
  System_Func_object__bool__o *v92; // x21
  const MethodInfo *v93; // x3
  int32_t v94; // w2
  unsigned int max_length; // w8
  __int64 v96; // x8
  struct System_Int32_array *items; // x9
  _QWORD *v98; // x10
  __int64 size; // x11
  __int64 v100; // x9
  struct System_Int32_array *v101; // x8
  _QWORD *v102; // x9
  __int64 v103; // x10
  _QWORD *monitor; // x9
  __int64 v105; // x8
  __int64 v106; // x8
  _QWORD *v107; // x9
  __int64 forceId; // x10
  int64_t v109; // x20
  System_Int32_array *v110; // x0
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  System_Int32_array *v117; // x0
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  int64_t v124; // x2
  int32_t v125; // w3
  System_String_o *v126; // x4
  BattleSetupInfo_o *v127; // x5
  FollowerInfo_o *v128; // x6
  PartyListViewItem_o *v129; // x7
  __int64 v130; // x8
  _QWORD *v131; // x9
  __int64 v132; // x10
  __int64 v133; // x8
  WarBoardData___c__DisplayClass189_0_Fields *v134; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_int__o *v135; // [xsp+10h] [xbp-70h]

  if ( (byte_4B13E4D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int____76840176, reinfoDatas, mst);
    sub_1BCA7E0(&Method_BasicHelper_Any_ReinforcementsData___, v8, v9);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Func_ReinforcementsData__bool__TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ReinforcementsData__Add__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v22, v23);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v24, v25);
    sub_1BCA7E0(&ReinforcementsData_TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v28, v29);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass189_0__GetReinforcements_b__0__, v30, v31);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass189_0_TypeInfo, v32, v33);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__1__, v34, v35);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass189_1_TypeInfo, v36, v37);
    byte_4B13E4D = 1;
  }
  v38 = (WarBoardData___c__DisplayClass189_0_o *)sub_1BCAA2C(
                                                   WarBoardData___c__DisplayClass189_0_TypeInfo,
                                                   reinfoDatas,
                                                   mst,
                                                   *(_QWORD *)&targetStageReinforcementsId);
  WarBoardData___c__DisplayClass189_0___ctor(v38, 0LL);
  if ( !v38 )
    goto LABEL_65;
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity || !mst )
    goto LABEL_65;
  p_fields = &v38->fields;
  if ( !WarBoardStageReinforcementsMaster__TryGetReleaseEntity(
          mst,
          &v38->fields.stageEntity,
          stageEntity->fields.id,
          targetStageReinforcementsId,
          0LL) )
    return;
  v46 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v43,
                                                    v44,
                                                    v45);
  System_Collections_Generic_List_int____ctor(
    v46,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  v135 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_int__TypeInfo,
                                                     v47,
                                                     v48,
                                                     v49);
  System_Collections_Generic_List_int____ctor(
    v135,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  v134 = &v38->fields;
  if ( !p_fields->stageEntity )
    goto LABEL_65;
  DeploySquareIds = WarBoardData__GetDeploySquareIds(this, p_fields->stageEntity->fields.squareIds, v50);
  v55 = sub_1BCAA2C(WarBoardData___c__DisplayClass189_1_TypeInfo, v52, v53, v54);
  WarBoardData___c__DisplayClass189_1___ctor((WarBoardData___c__DisplayClass189_1_o *)v55, 0LL);
  if ( !v55 )
    goto LABEL_65;
  *(_QWORD *)(v55 + 24) = v38;
  v62 = v55 + 24;
  sub_1BCA784((PartyOrganizationUtility_o *)(v55 + 24), (int64_t)v38, v56, v57, v58, v59, v60, v61);
  v64 = *(_QWORD *)(v55 + 24);
  *(_DWORD *)(v55 + 16) = 0;
  if ( !v64 )
    goto LABEL_65;
  v65 = 0LL;
  while ( 1 )
  {
    ReinfocementsPieces = *(WarBoardStageReinforcementsEntity_o **)(v64 + 16);
    if ( !ReinfocementsPieces )
      goto LABEL_65;
    reinforcementsIds = ReinfocementsPieces->fields.reinforcementsIds;
    if ( !reinforcementsIds )
      goto LABEL_65;
    if ( (int)v65 >= (signed int)reinforcementsIds->max_length )
      break;
    limitNums = ReinfocementsPieces->fields.limitNums;
    if ( !limitNums )
      goto LABEL_65;
    if ( (unsigned int)v65 >= limitNums->max_length )
      goto LABEL_66;
    if ( limitNums->m_Items[(int)v65 + 1] < 1 )
    {
      v71 = 0;
    }
    else
    {
      ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)WarBoardData__GetReinfocementsPieces(
                                                                     this,
                                                                     ReinfocementsPieces->fields.id,
                                                                     v65,
                                                                     v63);
      if ( !ReinfocementsPieces )
        goto LABEL_65;
      if ( !*(_QWORD *)v62 )
        goto LABEL_65;
      v68 = ReinfocementsPieces;
      ReinfocementsPieces = *(WarBoardStageReinforcementsEntity_o **)(*(_QWORD *)v62 + 16LL);
      if ( !ReinfocementsPieces )
        goto LABEL_65;
      v69 = ReinfocementsPieces->fields.limitNums;
      if ( !v69 )
        goto LABEL_65;
      v70 = *(int *)(v55 + 16);
      if ( (unsigned int)v70 >= v69->max_length )
        goto LABEL_66;
      v71 = v69->m_Items[v70 + 1] <= v68->fields.forceId;
    }
    IsOnce = WarBoardStageReinforcementsEntity__IsOnce(ReinfocementsPieces, 0LL);
    v73 = this;
    ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)WarBoardData__GetPlayReinforcements(this, v74);
    v77 = *(_QWORD *)v62;
    if ( !*(_QWORD *)v62 )
      goto LABEL_65;
    v78 = v62;
    v79 = *(System_Func_int__bool__o **)(v77 + 24);
    v80 = (System_Int32_array *)ReinfocementsPieces;
    if ( !v79 )
    {
      v79 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v40, v75, v76);
      System_Func_int__bool____ctor(
        v79,
        (Il2CppObject *)v77,
        Method_WarBoardData___c__DisplayClass189_0__GetReinforcements_b__0__,
        0LL);
      *(_QWORD *)(v77 + 24) = v79;
      sub_1BCA784((PartyOrganizationUtility_o *)(v77 + 24), (int64_t)v79, v81, v82, v83, v84, v85, v86);
    }
    v87 = BasicHelper__Any_int__49273364(
            v80,
            (System_Func_T__bool__o *)v79,
            (const MethodInfo_2EFDA14 *)Method_BasicHelper_Any_int____76840176);
    v88 = (System_Collections_Generic_List_T__o *)*reinfoDatas;
    v92 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_ReinforcementsData__bool__TypeInfo, v89, v90, v91);
    System_Func_object__bool____ctor(
      v92,
      (Il2CppObject *)v55,
      Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__1__,
      0LL);
    ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)BasicHelper__Any_object_(
                                                                   v88,
                                                                   (System_Func_T__bool__o *)v92,
                                                                   (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_ReinforcementsData___);
    if ( !DeploySquareIds )
      goto LABEL_65;
    v94 = *(_DWORD *)(v55 + 16);
    max_length = DeploySquareIds->max_length;
    if ( v94 >= max_length )
      goto LABEL_66;
    if ( (unsigned __int8)ReinfocementsPieces & 1 | (IsOnce && v87 || v71 || DeploySquareIds->m_Items[v94 + 1] < 0) )
    {
      if ( !*(_QWORD *)v78 )
        goto LABEL_65;
      v96 = *(_QWORD *)(*(_QWORD *)v78 + 16LL);
      if ( !v96 )
        goto LABEL_65;
      v62 = v78;
      this = v73;
      WarBoardData__SaveHoldReinforcements(v73, *(_DWORD *)(v96 + 20), v94, v93);
    }
    else
    {
      if ( !v46 )
        goto LABEL_65;
      items = v46->fields._items;
      v98 = Method_System_Collections_Generic_List_int__Add__;
      ++v46->fields._version;
      if ( !items )
        goto LABEL_65;
      size = v46->fields._size;
      this = v73;
      v62 = v78;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v46,
          v94,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
        max_length = DeploySquareIds->max_length;
      }
      else
      {
        v46->fields._size = size + 1;
        items->m_Items[size + 1] = v94;
      }
      v100 = *(int *)(v55 + 16);
      ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)v135;
      if ( (unsigned int)v100 >= max_length )
LABEL_66:
        sub_1BCAA44(ReinfocementsPieces, v40);
      if ( !v135 )
        goto LABEL_65;
      v40 = (unsigned int)DeploySquareIds->m_Items[v100 + 1];
      v101 = v135->fields._items;
      v102 = Method_System_Collections_Generic_List_int__Add__;
      ++v135->fields._version;
      if ( !v101 )
        goto LABEL_65;
      v103 = v135->fields._size;
      if ( (unsigned int)v103 >= v101->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v135,
          v40,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v102[4] + 192LL) + 112LL));
      }
      else
      {
        v135->fields._size = v103 + 1;
        v101->m_Items[v103 + 1] = v40;
      }
      ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !ReinfocementsPieces )
        goto LABEL_65;
      monitor = ReinfocementsPieces[6].monitor;
      if ( !monitor )
        goto LABEL_65;
      v105 = *(int *)(v55 + 16);
      if ( (unsigned int)v105 >= DeploySquareIds->max_length )
        goto LABEL_66;
      ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)monitor[29];
      if ( !ReinfocementsPieces )
        goto LABEL_65;
      v40 = (unsigned int)DeploySquareIds->m_Items[v105 + 1];
      v106 = *(_QWORD *)&ReinfocementsPieces->fields.warBoardStageId;
      v107 = Method_System_Collections_Generic_List_int__Add__;
      ++ReinfocementsPieces->fields.groupId;
      if ( !v106 )
        goto LABEL_65;
      forceId = ReinfocementsPieces->fields.forceId;
      if ( (unsigned int)forceId >= *(_DWORD *)(v106 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)ReinfocementsPieces,
          v40,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
      }
      else
      {
        ReinfocementsPieces->fields.forceId = forceId + 1;
        *(_DWORD *)(v106 + 4 * forceId + 32) = v40;
      }
    }
    v64 = *(_QWORD *)(v55 + 24);
    v65 = (unsigned int)(*(_DWORD *)(v55 + 16) + 1);
    *(_DWORD *)(v55 + 16) = v65;
    if ( !v64 )
      goto LABEL_65;
  }
  if ( !v46 )
    goto LABEL_65;
  if ( v46->fields._size < 1 )
    return;
  v109 = sub_1BCAA2C(ReinforcementsData_TypeInfo, v40, v65, v63);
  ReinforcementsData___ctor((ReinforcementsData_o *)v109, 0LL);
  if ( !v134->stageEntity )
    goto LABEL_65;
  if ( !v109 )
    goto LABEL_65;
  *(_DWORD *)(v109 + 16) = v134->stageEntity->fields.id;
  v110 = System_Collections_Generic_List_int___ToArray(
           v46,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)(v109 + 24) = v110;
  sub_1BCA784((PartyOrganizationUtility_o *)(v109 + 24), (int64_t)v110, v111, v112, v113, v114, v115, v116);
  ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)v135;
  if ( !v135
    || (v117 = System_Collections_Generic_List_int___ToArray(
                 v135,
                 (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__),
        *(_QWORD *)(v109 + 32) = v117,
        sub_1BCA784((PartyOrganizationUtility_o *)(v109 + 32), (int64_t)v117, v118, v119, v120, v121, v122, v123),
        (ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)*reinfoDatas) == 0LL)
    || (v130 = *(_QWORD *)&ReinfocementsPieces->fields.warBoardStageId,
        v131 = Method_System_Collections_Generic_List_ReinforcementsData__Add__,
        ++ReinfocementsPieces->fields.groupId,
        !v130) )
  {
LABEL_65:
    sub_1BCAA3C(ReinfocementsPieces, v40);
  }
  v132 = ReinfocementsPieces->fields.forceId;
  if ( (unsigned int)v132 >= *(_DWORD *)(v130 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)ReinfocementsPieces,
      (Il2CppObject *)v109,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v131[4] + 192LL) + 112LL));
  }
  else
  {
    v133 = v130 + 8 * v132;
    ReinfocementsPieces->fields.forceId = v132 + 1;
    *(_QWORD *)(v133 + 32) = v109;
    sub_1BCA784((PartyOrganizationUtility_o *)(v133 + 32), v109, v124, v125, v126, v127, v128, v129);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
  return localSaveData->fields.cameraSize;
}


// local variable allocation has failed, the output may be wrong!
WarBoardPieceData_array *__fastcall WarBoardData__GetServantPieces(
        WarBoardData_o *this,
        bool isPlayerGroup,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  WarBoardData___c__DisplayClass106_0_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v20; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0

  if ( (byte_4B13E13 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, isPlayerGroup, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v6, v7);
    sub_1BCA7E0(&System_Func_WarBoardPieceData__bool__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass106_0__GetServantPieces_b__0__, v10, v11);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass106_0_TypeInfo, v12, v13);
    byte_4B13E13 = 1;
  }
  v14 = (WarBoardData___c__DisplayClass106_0_o *)sub_1BCAA2C(
                                                   WarBoardData___c__DisplayClass106_0_TypeInfo,
                                                   isPlayerGroup,
                                                   method,
                                                   v3);
  WarBoardData___c__DisplayClass106_0___ctor(v14, 0LL);
  if ( !v14 )
    sub_1BCAA3C(v15, v16);
  v14->fields.isPlayerGroup = isPlayerGroup;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v20 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarBoardPieceData__bool__TypeInfo, v16, v17, v18);
  System_Func_object__bool____ctor(
    v20,
    (Il2CppObject *)v14,
    Method_WarBoardData___c__DisplayClass106_0__GetServantPieces_b__0__,
    0LL);
  v21 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)v20,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v21,
                                      (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  WarBoardData___c__DisplayClass128_0_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *squares; // x19
  System_Func_object__bool__o *v18; // x20

  if ( (byte_4B13E24 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___, *(_QWORD *)&squareIndex, method);
    sub_1BCA7E0(&System_Func_WarBoardSquareData__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass128_0__GetSquare_b__0__, v8, v9);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass128_0_TypeInfo, v10, v11);
    byte_4B13E24 = 1;
  }
  v12 = (WarBoardData___c__DisplayClass128_0_o *)sub_1BCAA2C(
                                                   WarBoardData___c__DisplayClass128_0_TypeInfo,
                                                   *(_QWORD *)&squareIndex,
                                                   method,
                                                   v3);
  WarBoardData___c__DisplayClass128_0___ctor(v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  v12->fields.squareIndex = squareIndex;
  squares = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.squares;
  v18 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarBoardSquareData__bool__TypeInfo, v14, v15, v16);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v12,
    Method_WarBoardData___c__DisplayClass128_0__GetSquare_b__0__,
    0LL);
  return (WarBoardSquareData_o *)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                                   squares,
                                   (System_Func_TSource__bool__o *)v18,
                                   (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  WarBoardData___c__DisplayClass153_0_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  struct WarBoardDataEntity_o *serverData; // x8
  System_Object_array *svtInfo; // x19
  System_Func_object__bool__o *v19; // x20

  if ( (byte_4B13E34 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Find_WarBoardUserServantData___, *(_QWORD *)&stageBossIdx, method);
    sub_1BCA7E0(&System_Func_WarBoardUserServantData__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass153_0__GetStageBossData_b__0__, v8, v9);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass153_0_TypeInfo, v10, v11);
    byte_4B13E34 = 1;
  }
  v12 = (WarBoardData___c__DisplayClass153_0_o *)sub_1BCAA2C(
                                                   WarBoardData___c__DisplayClass153_0_TypeInfo,
                                                   *(_QWORD *)&stageBossIdx,
                                                   method,
                                                   v3);
  WarBoardData___c__DisplayClass153_0___ctor(v12, 0LL);
  if ( !v12 || (v12->fields.stageBossIdx = stageBossIdx, (serverData = this->fields.serverData) == 0LL) )
    sub_1BCAA3C(v13, v14);
  svtInfo = (System_Object_array *)serverData->fields.svtInfo;
  v19 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarBoardUserServantData__bool__TypeInfo, v14, v15, v16);
  System_Func_object__bool____ctor(
    v19,
    (Il2CppObject *)v12,
    Method_WarBoardData___c__DisplayClass153_0__GetStageBossData_b__0__,
    0LL);
  return (WarBoardUserServantData_o *)BasicHelper__Find_object_(
                                        svtInfo,
                                        (System_Func_T__bool__o *)v19,
                                        (const MethodInfo_2EFE860 *)Method_BasicHelper_Find_WarBoardUserServantData___);
}


// local variable allocation has failed, the output may be wrong!
WarBoardTreasureData_o *__fastcall WarBoardData__GetTreasure(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  WarBoardData___c__DisplayClass137_0_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *treasures; // x19
  System_Func_object__bool__o *v18; // x20

  if ( (byte_4B13E29 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___, *(_QWORD *)&squareIndex, method);
    sub_1BCA7E0(&System_Func_WarBoardTreasureData__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass137_0__GetTreasure_b__0__, v8, v9);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass137_0_TypeInfo, v10, v11);
    byte_4B13E29 = 1;
  }
  v12 = (WarBoardData___c__DisplayClass137_0_o *)sub_1BCAA2C(
                                                   WarBoardData___c__DisplayClass137_0_TypeInfo,
                                                   *(_QWORD *)&squareIndex,
                                                   method,
                                                   v3);
  WarBoardData___c__DisplayClass137_0___ctor(v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  v12->fields.squareIndex = squareIndex;
  treasures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.treasures;
  v18 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarBoardTreasureData__bool__TypeInfo, v14, v15, v16);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v12,
    Method_WarBoardData___c__DisplayClass137_0__GetTreasure_b__0__,
    0LL);
  return (WarBoardTreasureData_o *)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                                     treasures,
                                     (System_Func_TSource__bool__o *)v18,
                                     (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___);
}


System_Int32_array *__fastcall WarBoardData__GetTreasureIdList(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_int__o *v11; // x19
  __int64 v12; // x0
  __int64 treasureId; // x1
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8
  struct WarBoardTreasureData_SaveData_array *treasureSaves; // x20
  int max_length; // w8
  unsigned int v17; // w21
  WarBoardTreasureData_SaveData_o *v18; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10

  if ( (byte_4B13E18 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v9, v10);
    byte_4B13E18 = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  localSaveData = this->fields.localSaveData;
  if ( !localSaveData )
    goto LABEL_18;
  treasureSaves = localSaveData->fields.treasureSaves;
  if ( !treasureSaves )
    goto LABEL_18;
  max_length = treasureSaves->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
        sub_1BCAA44(v12, treasureId);
      v18 = treasureSaves->m_Items[v17];
      if ( !v18 )
        break;
      if ( v18->fields.isUse )
      {
        if ( !v11 )
          break;
        treasureId = (unsigned int)v18->fields.treasureId;
        items = v11->fields._items;
        v20 = Method_System_Collections_Generic_List_int__Add__;
        ++v11->fields._version;
        if ( !items )
          break;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v11,
            treasureId,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v11->fields._size = size + 1;
          items->m_Items[size + 1] = treasureId;
        }
      }
      max_length = treasureSaves->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_16;
    }
LABEL_18:
    sub_1BCAA3C(v12, treasureId);
  }
LABEL_16:
  if ( !v11 )
    goto LABEL_18;
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  WarBoardData___c__DisplayClass193_0_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_List_object__o *listUiData; // x19
  System_Predicate_object__o *v18; // x20

  if ( (byte_4B13E51 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardUiData__Find__, *(_QWORD *)&squareIndex, method);
    sub_1BCA7E0(&System_Predicate_WarBoardUiData__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass193_0__GetUiData_b__0__, v8, v9);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass193_0_TypeInfo, v10, v11);
    byte_4B13E51 = 1;
  }
  v12 = (WarBoardData___c__DisplayClass193_0_o *)sub_1BCAA2C(
                                                   WarBoardData___c__DisplayClass193_0_TypeInfo,
                                                   *(_QWORD *)&squareIndex,
                                                   method,
                                                   v3);
  WarBoardData___c__DisplayClass193_0___ctor(v12, 0LL);
  if ( !v12
    || (v12->fields.squareIndex = squareIndex,
        listUiData = (System_Collections_Generic_List_object__o *)this->fields.listUiData,
        v18 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_WarBoardUiData__TypeInfo, v14, v15, v16),
        System_Predicate_object____ctor(
          v18,
          (Il2CppObject *)v12,
          Method_WarBoardData___c__DisplayClass193_0__GetUiData_b__0__,
          0LL),
        !listUiData) )
  {
    sub_1BCAA3C(v13, v14);
  }
  return (WarBoardUiData_o *)System_Collections_Generic_List_object___Find(
                               listUiData,
                               (System_Predicate_T__o *)v18,
                               (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_WarBoardUiData__Find__);
}


WarBoardUiData_o *__fastcall WarBoardData__GetUiData_36086068(
        WarBoardData_o *this,
        System_Int32_array *pieceIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Collections_Generic_List_object__o *listUiData; // x19
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Predicate_object__o *v25; // x20

  if ( (byte_4B13E52 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardUiData__Find__, pieceIndex, method);
    sub_1BCA7E0(&System_Predicate_WarBoardUiData__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass194_0__GetUiData_b__0__, v8, v9);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass194_0_TypeInfo, v10, v11);
    byte_4B13E52 = 1;
  }
  v12 = sub_1BCAA2C(WarBoardData___c__DisplayClass194_0_TypeInfo, pieceIndex, method, v3);
  WarBoardData___c__DisplayClass194_0___ctor((WarBoardData___c__DisplayClass194_0_o *)v12, 0LL);
  if ( !v12
    || (*(_QWORD *)(v12 + 16) = pieceIndex,
        sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)pieceIndex, v15, v16, v17, v18, v19, v20),
        listUiData = (System_Collections_Generic_List_object__o *)this->fields.listUiData,
        v25 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_WarBoardUiData__TypeInfo, v22, v23, v24),
        System_Predicate_object____ctor(
          v25,
          (Il2CppObject *)v12,
          Method_WarBoardData___c__DisplayClass194_0__GetUiData_b__0__,
          0LL),
        !listUiData) )
  {
    sub_1BCAA3C(v13, v14);
  }
  return (WarBoardUiData_o *)System_Collections_Generic_List_object___Find(
                               listUiData,
                               (System_Predicate_T__o *)v25,
                               (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_WarBoardUiData__Find__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardTreasureData_o *__fastcall WarBoardData__GetUnusedTreasure(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  WarBoardData___c__DisplayClass138_0_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *treasures; // x19
  System_Func_object__bool__o *v18; // x20

  if ( (byte_4B13E2A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___, *(_QWORD *)&squareIndex, method);
    sub_1BCA7E0(&System_Func_WarBoardTreasureData__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass138_0__GetUnusedTreasure_b__0__, v8, v9);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass138_0_TypeInfo, v10, v11);
    byte_4B13E2A = 1;
  }
  v12 = (WarBoardData___c__DisplayClass138_0_o *)sub_1BCAA2C(
                                                   WarBoardData___c__DisplayClass138_0_TypeInfo,
                                                   *(_QWORD *)&squareIndex,
                                                   method,
                                                   v3);
  WarBoardData___c__DisplayClass138_0___ctor(v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  v12->fields.squareIndex = squareIndex;
  treasures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.treasures;
  v18 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarBoardTreasureData__bool__TypeInfo, v14, v15, v16);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v12,
    Method_WarBoardData___c__DisplayClass138_0__GetUnusedTreasure_b__0__,
    0LL);
  return (WarBoardTreasureData_o *)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                                     treasures,
                                     (System_Func_TSource__bool__o *)v18,
                                     (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___);
}


System_Int32_array *__fastcall WarBoardData__GetUseCommonReleaseIds(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_int__o *v21; // x19
  __int64 v22; // x1
  void *Master_object; // x0
  __int64 v24; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  WarBoardEventScriptMaster_o *v26; // x20
  int32_t stageId; // w21
  int v28; // w8
  void *v29; // x21
  unsigned int v30; // w23
  __int64 v31; // x22
  __int64 v32; // x25
  __int64 v33; // x8
  unsigned __int64 v34; // x26
  struct System_Int32_array *items; // x9
  _QWORD *v36; // x10
  __int64 size; // x11
  __int64 v38; // x25
  __int64 v39; // x8
  unsigned __int64 v40; // x26
  int v41; // w8
  void *v42; // x22
  unsigned int v43; // w27
  struct System_Int32_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0

  if ( (byte_4B13E44 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardEventMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardEventScriptMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Distinct_int___, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_int___, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v19, v20);
    byte_4B13E44 = 1;
  }
  v21 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v22);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardEventScriptMaster___);
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_46;
  v26 = (WarBoardEventScriptMaster_o *)Master_object;
  stageId = serverData->fields.stageId;
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardEventMaster___);
  if ( !Master_object )
    goto LABEL_46;
  Master_object = WarBoardEventMaster__GetListByStageId((WarBoardEventMaster_o *)Master_object, stageId, 0LL);
  if ( !Master_object )
    goto LABEL_46;
  v28 = *((_DWORD *)Master_object + 6);
  v29 = Master_object;
  if ( v28 >= 1 )
  {
    v30 = 0;
    do
    {
      if ( v30 >= v28 )
        goto LABEL_47;
      v31 = *((_QWORD *)v29 + (int)v30 + 4);
      if ( !v31 )
        goto LABEL_46;
      v32 = *(_QWORD *)(v31 + 56);
      if ( v32 )
      {
        v33 = *(_QWORD *)(v32 + 24);
        if ( v33 )
        {
          if ( (int)v33 >= 1 )
          {
            v34 = 0LL;
            while ( v34 < (unsigned int)v33 )
            {
              v24 = *(unsigned int *)(v32 + 32 + 4 * v34);
              if ( (int)v24 >= 1 )
              {
                if ( !v21 )
                  goto LABEL_46;
                items = v21->fields._items;
                v36 = Method_System_Collections_Generic_List_int__Add__;
                ++v21->fields._version;
                if ( !items )
                  goto LABEL_46;
                size = v21->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v21,
                    v24,
                    *(const MethodInfo_3584C38 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
                  LODWORD(v33) = *(_DWORD *)(v32 + 24);
                }
                else
                {
                  v21->fields._size = size + 1;
                  items->m_Items[size + 1] = v24;
                }
              }
              if ( (__int64)++v34 >= (int)v33 )
                goto LABEL_24;
            }
LABEL_47:
            sub_1BCAA44(Master_object, v24);
          }
LABEL_24:
          v38 = *(_QWORD *)(v31 + 48);
          if ( !v38 )
            goto LABEL_46;
          v39 = *(_QWORD *)(v38 + 24);
          if ( (int)v39 >= 1 )
          {
            v40 = 0LL;
            while ( 1 )
            {
              if ( v40 >= (unsigned int)v39 )
                goto LABEL_47;
              if ( !v26 )
                goto LABEL_46;
              Master_object = WarBoardEventScriptMaster__GetList(v26, *(_DWORD *)(v38 + 4 * v40 + 32), 0LL);
              if ( !Master_object )
                goto LABEL_46;
              v41 = *((_DWORD *)Master_object + 6);
              v42 = Master_object;
              if ( v41 >= 1 )
                break;
LABEL_42:
              LODWORD(v39) = *(_DWORD *)(v38 + 24);
              if ( (__int64)++v40 >= (int)v39 )
                goto LABEL_43;
            }
            v43 = 0;
            while ( v43 < v41 )
            {
              Master_object = (void *)*((_QWORD *)v42 + (int)v43 + 4);
              if ( !Master_object )
                goto LABEL_46;
              if ( *((_DWORD *)Master_object + 6) == 2 )
              {
                Master_object = (void *)WarBoardEventScriptEntity__GetChangeWinCondition(
                                          (WarBoardEventScriptEntity_o *)Master_object,
                                          0LL);
                if ( ((unsigned int)Master_object & 0x80000000) == 0 )
                {
                  if ( !v21 )
                    goto LABEL_46;
                  v44 = v21->fields._items;
                  v45 = Method_System_Collections_Generic_List_int__Add__;
                  ++v21->fields._version;
                  if ( !v44 )
                    goto LABEL_46;
                  v46 = v21->fields._size;
                  v24 = (unsigned int)Master_object;
                  if ( (unsigned int)v46 >= v44->max_length )
                  {
                    System_Collections_Generic_List_int___AddWithResize(
                      v21,
                      (int32_t)Master_object,
                      *(const MethodInfo_3584C38 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v21->fields._size = v46 + 1;
                    v44->m_Items[v46 + 1] = (int)Master_object;
                  }
                }
              }
              v41 = *((_DWORD *)v42 + 6);
              if ( (int)++v43 >= v41 )
                goto LABEL_42;
            }
            goto LABEL_47;
          }
        }
      }
LABEL_43:
      v28 = *((_DWORD *)v29 + 6);
    }
    while ( (int)++v30 < v28 );
  }
  v47 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v21,
          (const MethodInfo_2F30074 *)Method_System_Linq_Enumerable_Distinct_int___);
  Master_object = System_Linq_Enumerable__ToList_int_(
                    v47,
                    (const MethodInfo_2F4F4F8 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !Master_object )
LABEL_46:
    sub_1BCAA3C(Master_object, v24);
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)Master_object,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardWallData_o *__fastcall WarBoardData__GetWall(
        WarBoardData_o *this,
        int32_t squareIndex,
        bool ignoreDestroy,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  WarBoardData___c__DisplayClass140_0_o *v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Collections_Generic_IEnumerable_TSource__o *walls; // x19
  System_Func_object__bool__o *v19; // x20

  if ( (byte_4B13E2B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_FirstOrDefault_WarBoardWallData___,
      *(_QWORD *)&squareIndex,
      ignoreDestroy);
    sub_1BCA7E0(&System_Func_WarBoardWallData__bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass140_0__GetWall_b__0__, v9, v10);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass140_0_TypeInfo, v11, v12);
    byte_4B13E2B = 1;
  }
  v13 = (WarBoardData___c__DisplayClass140_0_o *)sub_1BCAA2C(
                                                   WarBoardData___c__DisplayClass140_0_TypeInfo,
                                                   *(_QWORD *)&squareIndex,
                                                   ignoreDestroy,
                                                   method);
  WarBoardData___c__DisplayClass140_0___ctor(v13, 0LL);
  if ( !v13 )
    sub_1BCAA3C(v14, v15);
  v13->fields.squareIndex = squareIndex;
  v13->fields.ignoreDestroy = ignoreDestroy;
  walls = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.walls;
  v19 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarBoardWallData__bool__TypeInfo, v15, v16, v17);
  System_Func_object__bool____ctor(
    v19,
    (Il2CppObject *)v13,
    Method_WarBoardData___c__DisplayClass140_0__GetWall_b__0__,
    0LL);
  return (WarBoardWallData_o *)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                                 walls,
                                 (System_Func_TSource__bool__o *)v19,
                                 (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardWallData___);
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
  __int64 v2; // x2
  WarBoardManager_c *v4; // x0

  if ( (byte_4B13E3C & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardManager_TypeInfo, method, v2);
    byte_4B13E3C = 1;
  }
  v4 = WarBoardManager_TypeInfo;
  if ( !WarBoardManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo, method);
    v4 = WarBoardManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v4->static_fields->SAVE_KEY_WAR_BOARD_CONFIRMED_RULE, -1, 0LL) != this->fields.winCondId;
}


void __fastcall WarBoardData__InitPrevCondData(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  WarBoardData_o *UseCommonReleaseIds; // x0
  const MethodInfo *v7; // x2
  System_Int32_array *PrevCondIds; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x8
  System_Int32_array *v13; // x20
  unsigned __int64 v14; // x24
  int32_t v15; // w23
  System_Collections_Generic_List_object__o *listPrevCond; // x21
  WarBoardPrevCondData_o *v17; // x22
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0

  if ( (byte_4B13E46 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__, method, v2);
    sub_1BCA7E0(&WarBoardPrevCondData_TypeInfo, v4, v5);
    byte_4B13E46 = 1;
  }
  UseCommonReleaseIds = (WarBoardData_o *)WarBoardData__GetUseCommonReleaseIds(this, method);
  PrevCondIds = WarBoardData__GetPrevCondIds(UseCommonReleaseIds, (System_Int32_array *)UseCommonReleaseIds, v7);
  if ( !PrevCondIds )
    goto LABEL_14;
  v12 = *(_QWORD *)&PrevCondIds->max_length;
  v13 = PrevCondIds;
  if ( (int)v12 >= 1 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)v12 )
        sub_1BCAA44(PrevCondIds, v9);
      v15 = v13->m_Items[v14 + 1];
      listPrevCond = (System_Collections_Generic_List_object__o *)this->fields.listPrevCond;
      v17 = (WarBoardPrevCondData_o *)sub_1BCAA2C(WarBoardPrevCondData_TypeInfo, v9, v10, v11);
      WarBoardPrevCondData___ctor_36271472(v17, v15, -1, 0LL);
      if ( !listPrevCond )
        break;
      items = listPrevCond->fields._items;
      v25 = Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__;
      ++listPrevCond->fields._version;
      if ( !items )
        break;
      size = listPrevCond->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          listPrevCond,
          (Il2CppObject *)v17,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = &items->obj.klass + size;
        listPrevCond->fields._size = size + 1;
        v27[4] = (Il2CppClass *)v17;
        sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 4), (int64_t)v17, v18, v19, v20, v21, v22, v23);
      }
      LODWORD(v12) = v13->max_length;
      if ( (__int64)++v14 >= (int)v12 )
        return;
    }
LABEL_14:
    sub_1BCAA3C(PrevCondIds, v9);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  WarBoardData___c__DisplayClass172_0_o *v21; // x23
  System_Collections_Generic_Dictionary_object__object__o *monitor; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  struct WarBoardDataEntity_o *serverData; // x8
  System_Object_array *bossBattleInfo; // x21
  System_Func_object__bool__o *v28; // x22
  Il2CppObject *object; // x0
  Il2CppObject *v30; // x21
  __int64 v31; // x1
  Il2CppObject *v32; // x20
  Il2CppObject *valuea; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B13E3F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Find_WarBoardBossBattleData___, *(_QWORD *)&bossId, key);
    sub_1BCA7E0(&System_Convert_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v13, v14);
    sub_1BCA7E0(&System_Func_WarBoardBossBattleData__bool__TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass172_0__IsBossInfo_b__0__, v17, v18);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass172_0_TypeInfo, v19, v20);
    byte_4B13E3F = 1;
  }
  valuea = 0LL;
  v21 = (WarBoardData___c__DisplayClass172_0_o *)sub_1BCAA2C(
                                                   WarBoardData___c__DisplayClass172_0_TypeInfo,
                                                   *(_QWORD *)&bossId,
                                                   key,
                                                   *(_QWORD *)&value);
  WarBoardData___c__DisplayClass172_0___ctor(v21, 0LL);
  if ( !v21 )
    goto LABEL_17;
  v21->fields.bossId = bossId;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_17;
  bossBattleInfo = (System_Object_array *)serverData->fields.bossBattleInfo;
  v28 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarBoardBossBattleData__bool__TypeInfo, v23, v24, v25);
  System_Func_object__bool____ctor(
    v28,
    (Il2CppObject *)v21,
    Method_WarBoardData___c__DisplayClass172_0__IsBossInfo_b__0__,
    0LL);
  object = BasicHelper__Find_object_(
             bossBattleInfo,
             (System_Func_T__bool__o *)v28,
             (const MethodInfo_2EFE860 *)Method_BasicHelper_Find_WarBoardBossBattleData___);
  if ( !object )
    return value == 0;
  v30 = object;
  monitor = (System_Collections_Generic_Dictionary_object__object__o *)object[1].monitor;
  if ( !monitor )
    goto LABEL_17;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          monitor,
          (Il2CppObject *)key,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return value == 0;
  monitor = (System_Collections_Generic_Dictionary_object__object__o *)v30[1].monitor;
  if ( !monitor )
LABEL_17:
    sub_1BCAA3C(monitor, v23);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          monitor,
          (Il2CppObject *)key,
          &valuea,
          (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return value == 0;
  v32 = valuea;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v31);
  return System_Convert__ToInt32(v32, 0LL) == value;
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

  if ( (byte_4B13E3D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_int___, data, *(_QWORD *)&forceId);
    byte_4B13E3D = 1;
  }
  v13 = Method_System_Array_Empty_int___;
  entity = 0LL;
  v14 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v14 )
  {
    sub_1C1C718(Method_System_Array_Empty_int___, data);
    v14 = v13[7];
  }
  v15 = *(_QWORD *)(v14 + 16);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C1C6BC(inited);
  if ( !*(_DWORD *)(v15 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v15, data);
  v16 = *(_QWORD *)(v13[7] + 16LL);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1C1C6BC(inited);
  v17 = *(System_Int32_array ***)(v16 + 184);
  v18 = *v17;
  *data = *v17;
  sub_1BCA784(
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
    sub_1BCA784((PartyOrganizationUtility_o *)data, (int64_t)DefenseTarget, v23, v24, v25, v26, v27, v28);
  }
  stageNpcMaster = (WarBoardStageNpcMaster_o *)BasicHelper__IsNullOrEmpty(
                                                 (System_Collections_ICollection_o *)*data,
                                                 0LL);
  if ( ((unsigned __int8)stageNpcMaster & 1) != 0 )
    return 0;
  if ( !*data )
LABEL_20:
    sub_1BCAA3C(stageNpcMaster, v20);
  return ((*data)->max_length & 1) == 0;
}


bool __fastcall WarBoardData__IsLose(WarBoardData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  WarBoardPieceData_array *Pieces_36051476; // x0
  const MethodInfo *v5; // x1
  int max_length; // w8
  WarBoardPieceData_array *v7; // x20
  int v8; // w24
  int v9; // w22
  int v10; // w23
  WarBoardPieceData_o *v11; // x21

  Pieces_36051476 = WarBoardData__GetPieces_36051476(this, 0, 0, v2);
  if ( !Pieces_36051476 )
LABEL_18:
    sub_1BCAA3C(Pieces_36051476, v5);
  max_length = Pieces_36051476->max_length;
  v7 = Pieces_36051476;
  if ( max_length < 1 )
    return 1;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  do
  {
    if ( v8 >= (unsigned int)max_length )
      sub_1BCAA44(Pieces_36051476, v5);
    v11 = v7->m_Items[v8];
    if ( !v11 )
      goto LABEL_18;
    if ( !v11->fields._isDead_k__BackingField )
    {
      Pieces_36051476 = (WarBoardPieceData_array *)WarBoardPieceData__HasAvailablePermanentSleepBuff(v11, 0LL);
      if ( ((unsigned __int8)Pieces_36051476 & 1) == 0 )
      {
        Pieces_36051476 = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster(v11, 0LL);
        if ( ((unsigned __int8)Pieces_36051476 & 1) != 0 )
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
  WarBoardPieceData_array *Pieces_36051476; // x0
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
          Pieces_36051476 = WarBoardData__GetPieces_36051476(this, i, v10, v2);
          if ( !Pieces_36051476 )
            goto LABEL_28;
          max_length = Pieces_36051476->max_length;
          v14 = Pieces_36051476;
          if ( max_length >= 1 )
          {
            v15 = 0;
            while ( 1 )
            {
              if ( v15 >= max_length )
                sub_1BCAA44(Pieces_36051476, v12);
              v16 = &v14->obj.klass + (int)v15;
              v17 = v16[4];
              if ( !v17 )
                break;
              Pieces_36051476 = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster(
                                                             (WarBoardPieceData_o *)v16[4],
                                                             0LL);
              if ( ((unsigned __int8)Pieces_36051476 & 1) == 0 && !LOBYTE(v17->_1.klass) )
              {
                ++v7;
                v8 += *((unsigned __int8 *)&v17->_1.this_arg.bits + 4);
              }
              max_length = v14->max_length;
              if ( (int)++v15 >= max_length )
                goto LABEL_16;
            }
LABEL_28:
            sub_1BCAA3C(Pieces_36051476, v12);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  Il2CppObject *Master_object; // x0
  __int64 v25; // x1
  WarBoardCommonReleaseEntity_array *List; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Collections_Generic_Dictionary_int__bool__o *v31; // x19
  __int64 v32; // x2
  __int64 v33; // x3
  int max_length; // w8
  unsigned int v35; // w21
  int32_t *v36; // x25
  int32_t v37; // w8
  int32_t v38; // w1
  const MethodInfo_31F74A8 *v39; // x3
  bool v40; // w2
  System_Collections_Generic_Dictionary_int__bool__o *v41; // x0
  WarBoardData___c_c *v42; // x0
  System_Func_KeyValuePair_int__bool___bool__o *_9__95_0; // x20
  Il2CppObject *v44; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7

  if ( (byte_4B13E09 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__bool____, v16, v17);
    sub_1BCA7E0(&System_Func_KeyValuePair_int__bool___bool__TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_WarBoardData___c__IsReachableWinConditions_b__95_0__, v20, v21);
    sub_1BCA7E0(&WarBoardData___c_TypeInfo, v22, v23);
    byte_4B13E09 = 1;
  }
  if ( (this->fields.winCondId & 0x80000000) != 0 )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  if ( !Master_object )
    goto LABEL_33;
  List = WarBoardCommonReleaseMaster__GetList(
           (WarBoardCommonReleaseMaster_o *)Master_object,
           this->fields.winCondId,
           0LL);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)List, 0LL) )
    return 0;
  v31 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1BCAA2C(
                                                                System_Collections_Generic_Dictionary_int__bool__TypeInfo,
                                                                v27,
                                                                v28,
                                                                v29);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v31,
    (const MethodInfo_31F6AE8 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  if ( !List )
LABEL_33:
    sub_1BCAA3C(Master_object, v25);
  max_length = List->max_length;
  if ( max_length >= 1 )
  {
    v35 = 0;
    while ( 1 )
    {
      if ( v35 >= max_length )
        sub_1BCAA44(Master_object, v25);
      v36 = (int32_t *)List->m_Items[v35];
      if ( !v36 || !v31 )
        goto LABEL_33;
      if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
              v31,
              v36[6],
              (const MethodInfo_31F76BC *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
        break;
      Master_object = (Il2CppObject *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                        v31,
                                        v36[6],
                                        (const MethodInfo_31F7418 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
        break;
LABEL_25:
      max_length = List->max_length;
      if ( (int)++v35 >= max_length )
        goto LABEL_26;
    }
    v37 = v36[7];
    if ( v37 == 1 )
    {
      v38 = v36[6];
      v39 = (const MethodInfo_31F74A8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__;
      v40 = v36[10] == 0;
    }
    else
    {
      if ( v37 != 5 )
      {
        v38 = v36[6];
        v39 = (const MethodInfo_31F74A8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__;
        v41 = v31;
        v40 = 0;
        goto LABEL_24;
      }
      v38 = v36[6];
      v39 = (const MethodInfo_31F74A8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__;
      v40 = v36[10] < 1;
    }
    v41 = v31;
LABEL_24:
    System_Collections_Generic_Dictionary_int__bool___set_Item(v41, v38, v40, v39);
    goto LABEL_25;
  }
LABEL_26:
  v42 = WarBoardData___c_TypeInfo;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, v25);
    v42 = WarBoardData___c_TypeInfo;
  }
  _9__95_0 = v42->static_fields->__9__95_0;
  if ( !_9__95_0 )
  {
    if ( !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42, v25);
      v42 = WarBoardData___c_TypeInfo;
    }
    v44 = (Il2CppObject *)v42->static_fields->__9;
    _9__95_0 = (System_Func_KeyValuePair_int__bool___bool__o *)sub_1BCAA2C(
                                                                 System_Func_KeyValuePair_int__bool___bool__TypeInfo,
                                                                 v25,
                                                                 v32,
                                                                 v33);
    System_Func_KeyValuePair_int__bool___bool____ctor(
      _9__95_0,
      v44,
      Method_WarBoardData___c__IsReachableWinConditions_b__95_0__,
      0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__95_0 = _9__95_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__95_0,
      (int64_t)_9__95_0,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
  }
  return System_Linq_Enumerable__Any_KeyValuePair_int__bool__(
           (System_Collections_Generic_IEnumerable_TSource__o *)v31,
           (System_Func_TSource__bool__o *)_9__95_0,
           (const MethodInfo_2F1F0AC *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__bool____);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  WarBoardData___c__DisplayClass190_0_o *v19; // x24
  __int64 v20; // x1
  WarBoardStageReinforcementsMaster_o *Master_object; // x0
  __int64 v22; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  void **p_entity; // x20
  bool IsOnce; // w23
  const MethodInfo *v26; // x1
  System_Int32_array *PlayReinforcements; // x25
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  System_Func_int__bool__o *v31; // x26
  const MethodInfo *v32; // x2
  struct WarBoardStageReinforcementsEntity_o *entity; // x8
  char v34; // w9
  bool v35; // w23
  const MethodInfo *v36; // x3
  void *v37; // x8
  __int64 v38; // x9
  WarBoardStageReinforcementsMaster_o *v39; // x21
  int32_t v40; // w22
  int32_t v41; // w9
  __int64 v42; // x9
  __int64 v43; // x9
  _BOOL4 v44; // w9

  if ( (byte_4B13E4E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int____76840176, *(_QWORD *)&forceId, *(_QWORD *)&groupId);
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass190_0__IsReinforcementsApper_b__0__, v15, v16);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass190_0_TypeInfo, v17, v18);
    byte_4B13E4E = 1;
  }
  v19 = (WarBoardData___c__DisplayClass190_0_o *)sub_1BCAA2C(
                                                   WarBoardData___c__DisplayClass190_0_TypeInfo,
                                                   *(_QWORD *)&forceId,
                                                   *(_QWORD *)&groupId,
                                                   *(_QWORD *)&targetStageReinforcementsId);
  WarBoardData___c__DisplayClass190_0___ctor(v19, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v20);
  Master_object = (WarBoardStageReinforcementsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
  if ( !v19 )
    goto LABEL_32;
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity || !Master_object )
    goto LABEL_32;
  p_entity = (void **)&v19->fields.entity;
  if ( !WarBoardStageReinforcementsMaster__TryGetReleaseEntity(
          Master_object,
          &v19->fields.entity,
          stageEntity->fields.id,
          targetStageReinforcementsId,
          0LL) )
    return 0;
  Master_object = (WarBoardStageReinforcementsMaster_o *)*p_entity;
  if ( !*p_entity )
    goto LABEL_32;
  IsOnce = WarBoardStageReinforcementsEntity__IsOnce((WarBoardStageReinforcementsEntity_o *)Master_object, 0LL);
  PlayReinforcements = WarBoardData__GetPlayReinforcements(this, v26);
  v31 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v28, v29, v30);
  System_Func_int__bool____ctor(
    v31,
    (Il2CppObject *)v19,
    Method_WarBoardData___c__DisplayClass190_0__IsReinforcementsApper_b__0__,
    0LL);
  Master_object = (WarBoardStageReinforcementsMaster_o *)BasicHelper__Any_int__49273364(
                                                           PlayReinforcements,
                                                           (System_Func_T__bool__o *)v31,
                                                           (const MethodInfo_2EFDA14 *)Method_BasicHelper_Any_int____76840176);
  entity = v19->fields.entity;
  if ( !entity )
    goto LABEL_32;
  v34 = IsOnce & (unsigned __int8)Master_object;
  v35 = 0;
  if ( (v34 & 1) != 0 || entity->fields.forceId != forceId || entity->fields.groupId != groupId )
    return v35;
  Master_object = (WarBoardStageReinforcementsMaster_o *)WarBoardData__GetDeploySquareIds(
                                                           this,
                                                           entity->fields.squareIds,
                                                           v32);
  v37 = *p_entity;
  if ( !*p_entity || (v38 = *((_QWORD *)v37 + 5)) == 0 )
LABEL_32:
    sub_1BCAA3C(Master_object, v22);
  v39 = Master_object;
  v40 = 0;
  while ( 1 )
  {
    v41 = *(_DWORD *)(v38 + 24);
    v35 = v40 < v41;
    if ( v40 >= v41 )
      return v35;
    v42 = *((_QWORD *)v37 + 8);
    if ( !v42 )
      goto LABEL_32;
    if ( (unsigned int)v40 >= *(_DWORD *)(v42 + 24) )
LABEL_35:
      sub_1BCAA44(Master_object, v22);
    if ( *(int *)(v42 + 4LL * v40 + 32) < 1 )
    {
      v44 = 0;
      if ( !v39 )
        goto LABEL_32;
    }
    else
    {
      Master_object = (WarBoardStageReinforcementsMaster_o *)WarBoardData__GetReinfocementsPieces(
                                                               this,
                                                               *((_DWORD *)v37 + 5),
                                                               v40,
                                                               v36);
      if ( !Master_object )
        goto LABEL_32;
      v37 = *p_entity;
      if ( !*p_entity )
        goto LABEL_32;
      v43 = *((_QWORD *)v37 + 8);
      if ( !v43 )
        goto LABEL_32;
      if ( (unsigned int)v40 >= *(_DWORD *)(v43 + 24) )
        goto LABEL_35;
      v44 = *(_DWORD *)(v43 + 4LL * v40 + 32) <= SLODWORD(Master_object->fields._MasterName_k__BackingField);
      if ( !v39 )
        goto LABEL_32;
    }
    if ( (unsigned int)v40 >= LODWORD(v39->fields._MasterName_k__BackingField) )
      goto LABEL_35;
    if ( !v44 && (*((_DWORD *)&v39->fields.list + v40) & 0x80000000) == 0 )
      return v35;
    v38 = *((_QWORD *)v37 + 5);
    ++v40;
    if ( !v38 )
      goto LABEL_32;
  }
}


bool __fastcall WarBoardData__IsWin(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x20
  __int64 v21; // x1
  bool v22; // w20
  __int64 v23; // x1
  System_Type_o *Type; // x21
  intptr_t v25; // w22
  System_Type_o *TypeFromHandle; // x1
  bool v27; // w19
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-60h] BYREF
  System_RuntimeTypeHandle_o v31; // 0:w0.4

  if ( (byte_4B13E0A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__GetEnumerator__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&System_Type_TypeInfo, v14, v15);
    sub_1BCA7E0(&WarBoardChangeWinConditionTask_var, v16, v17);
    byte_4B13E0A = 1;
  }
  memset(&v30, 0, sizeof(v30));
  if ( !WarBoardData__CheckWinCond(this, method) )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 28, 0LL, 0LL);
  Instance = (Il2CppObject *)System_Linq_Enumerable__Any_object_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)EventTasks,
                               (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    WarBoardManager__AddTask_36181556((WarBoardManager_o *)Instance, 0, EventTasks, 0LL);
  }
  if ( !EventTasks )
LABEL_20:
    sub_1BCAA3C(Instance, v19);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)EventTasks,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_WarBoardTaskBase__GetEnumerator__);
  v30 = v29;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__MoveNext__);
    if ( !v22 )
      break;
    if ( !v30.fields._current )
      sub_1BCAA3C(0LL, v21);
    Type = System_Object__GetType(v30.fields._current, 0LL);
    v25 = (int)WarBoardChangeWinConditionTask_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v23);
    v31.fields.value = v25;
    TypeFromHandle = System_Type__GetTypeFromHandle(v31, 0LL);
    if ( System_Type__op_Equality(Type, TypeFromHandle, 0LL) )
    {
      this->fields.winCondGroup = -1;
      break;
    }
  }
  v27 = !v22;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__Dispose__);
  return v27;
}


void __fastcall WarBoardData__JudgePrevCondData(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *Master_object; // x0
  __int64 v15; // x1
  WarBoardCommonReleaseMaster_o *v16; // x20
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppObject *current; // x21
  struct WarBoardDataEntity_o *serverData; // x8
  int32_t turn; // w1
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B13E48 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__get_Current__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__, v12, v13);
    byte_4B13E48 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  if ( !this->fields.listPrevCond )
    sub_1BCAA3C(Master_object, v15);
  v16 = (WarBoardCommonReleaseMaster_o *)Master_object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)this->fields.listPrevCond,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__);
  v23 = v22;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__);
    if ( !v17 )
      break;
    current = v23.fields._current;
    if ( !v23.fields._current )
      sub_1BCAA3C(v17, v18);
    if ( (HIDWORD(v23.fields._current[1].klass) & 0x80000000) != 0 )
    {
      if ( !v16 )
        sub_1BCAA3C(v17, v18);
      if ( WarBoardCommonReleaseMaster__IsOpen(v16, (int32_t)v23.fields._current[1].klass, 0LL) )
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
    &v23,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x1
  __int64 v98; // x2
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8
  WarBoardData_o **p_localSaveData; // x23
  struct WarBoardPieceData_SaveData_array *pieceSaves; // x21
  int max_length; // w8
  unsigned int v103; // w22
  struct System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__o *actionPointEntityDict; // x21
  int entries; // w8
  unsigned int v106; // w22
  struct WarBoardPieceData_array *pieces; // x21
  int v108; // w8
  unsigned int v109; // w22
  struct WarBoardSquareData_array *squares; // x21
  int v111; // w8
  unsigned int v112; // w22
  struct WarBoardSquareData_array *condSquares; // x21
  int v114; // w8
  unsigned int v115; // w22
  struct WarBoardDataEntity_o *serverData; // x8
  struct WarBoardData_WarBoardLocalSaveData_o *v117; // x22
  WarBoardData_o *v118; // x21
  struct WarBoardPieceData_array *v119; // x8
  struct WarBoardPieceData_array *v120; // x8
  WarBoardData_o *v121; // x22
  float ZoomSize; // s0
  WarBoardData_o *v123; // x22
  int npcEntityDict_high; // w8
  WarBoardData_o *v125; // x20
  __int64 v126; // x2
  __int64 v127; // x3
  System_Collections_Generic_List_object__o *v128; // x20
  __int64 v129; // x1
  __int64 v130; // x2
  __int64 v131; // x3
  Il2CppObject *current; // x22
  WarBoardEventData_SaveData_o *v133; // x21
  __int64 v134; // x0
  __int64 v135; // x1
  int64_t v136; // x2
  int32_t v137; // w3
  System_String_o *v138; // x4
  BattleSetupInfo_o *v139; // x5
  FollowerInfo_o *v140; // x6
  PartyListViewItem_o *v141; // x7
  struct System_Object_array *items; // x8
  _QWORD *v143; // x9
  __int64 size; // x10
  Il2CppClass **v145; // x0
  WarBoardData_o *v146; // x21
  int64_t v147; // x2
  int32_t v148; // w3
  System_String_o *v149; // x4
  BattleSetupInfo_o *v150; // x5
  FollowerInfo_o *v151; // x6
  PartyListViewItem_o *v152; // x7
  int64_t v153; // x2
  int32_t v154; // w3
  System_String_o *v155; // x4
  BattleSetupInfo_o *v156; // x5
  FollowerInfo_o *v157; // x6
  PartyListViewItem_o *v158; // x7
  struct System_Collections_Generic_List_WarBoardUiData__o *latestPieceActionSquareIndexes; // x1
  int64_t v160; // x2
  int32_t v161; // w3
  System_String_o *v162; // x4
  BattleSetupInfo_o *v163; // x5
  FollowerInfo_o *v164; // x6
  PartyListViewItem_o *v165; // x7
  int64_t latestBattlePieceUniqueIndexes; // x1
  __int64 v167; // x1
  __int64 v168; // x2
  __int64 v169; // x3
  System_Collections_Generic_List_object__o *v170; // x20
  __int64 v171; // x1
  __int64 v172; // x2
  __int64 v173; // x3
  Il2CppObject *v174; // x22
  WarBoardPrevCondData_SaveData_o *v175; // x21
  __int64 v176; // x0
  __int64 v177; // x1
  int64_t v178; // x2
  int32_t v179; // w3
  System_String_o *v180; // x4
  BattleSetupInfo_o *v181; // x5
  FollowerInfo_o *v182; // x6
  PartyListViewItem_o *v183; // x7
  struct System_Object_array *v184; // x8
  _QWORD *v185; // x9
  __int64 v186; // x10
  Il2CppClass **v187; // x0
  WarBoardData_o *v188; // x21
  int64_t v189; // x2
  int32_t v190; // w3
  System_String_o *v191; // x4
  BattleSetupInfo_o *v192; // x5
  FollowerInfo_o *v193; // x6
  PartyListViewItem_o *v194; // x7
  __int64 v195; // x1
  __int64 v196; // x2
  __int64 v197; // x3
  System_Collections_Generic_List_object__o *v198; // x20
  __int64 v199; // x1
  __int64 v200; // x2
  __int64 v201; // x3
  Il2CppObject *v202; // x22
  HoldReinforcementsData_SaveData_o *v203; // x21
  __int64 v204; // x0
  __int64 v205; // x1
  int64_t v206; // x2
  int32_t v207; // w3
  System_String_o *v208; // x4
  BattleSetupInfo_o *v209; // x5
  FollowerInfo_o *v210; // x6
  PartyListViewItem_o *v211; // x7
  struct System_Object_array *v212; // x8
  _QWORD *v213; // x9
  __int64 v214; // x10
  Il2CppClass **v215; // x0
  WarBoardData_o *v216; // x21
  int64_t v217; // x2
  int32_t v218; // w3
  System_String_o *v219; // x4
  BattleSetupInfo_o *v220; // x5
  FollowerInfo_o *v221; // x6
  PartyListViewItem_o *v222; // x7
  struct WarBoardData_WarBoardLocalSaveData_o *v223; // x20
  int64_t v224; // x2
  int32_t v225; // w3
  System_String_o *v226; // x4
  BattleSetupInfo_o *v227; // x5
  FollowerInfo_o *v228; // x6
  PartyListViewItem_o *v229; // x7
  __int64 v230; // x1
  __int64 v231; // x2
  __int64 v232; // x3
  System_Collections_Generic_List_object__o *v233; // x20
  __int64 v234; // x1
  __int64 v235; // x2
  __int64 v236; // x3
  Il2CppObject *v237; // x22
  WarBoardUiData_SaveData_o *v238; // x21
  __int64 v239; // x0
  __int64 v240; // x1
  int64_t v241; // x2
  int32_t v242; // w3
  System_String_o *v243; // x4
  BattleSetupInfo_o *v244; // x5
  FollowerInfo_o *v245; // x6
  PartyListViewItem_o *v246; // x7
  struct System_Object_array *v247; // x8
  _QWORD *v248; // x9
  __int64 v249; // x10
  Il2CppClass **v250; // x0
  WarBoardData_o *v251; // x21
  int64_t v252; // x2
  int32_t v253; // w3
  System_String_o *v254; // x4
  BattleSetupInfo_o *v255; // x5
  FollowerInfo_o *v256; // x6
  PartyListViewItem_o *v257; // x7
  struct WarBoardDataEntity_o *v258; // x8
  unsigned int v259; // w0
  WarBoardData_o *v260; // x21
  int v261; // w20
  int64_t v262; // x2
  int32_t v263; // w3
  System_String_o *v264; // x4
  BattleSetupInfo_o *v265; // x5
  FollowerInfo_o *v266; // x6
  PartyListViewItem_o *v267; // x7
  __int64 v268; // x2
  __int64 v269; // x3
  unsigned __int64 v270; // x22
  __int64 v271; // x24
  __int64 v272; // x25
  struct WarBoardDataEntity_o *v273; // x9
  struct WarBoardSquareIndexData_array *squareIndexInfo; // x9
  unsigned int *reinforcementsSaveList; // x26
  WarBoardSquareIndexData_o *v276; // x21
  WarBoardSquareIndexData_SaveData_o *v277; // x20
  int64_t v278; // x2
  int32_t v279; // w3
  System_String_o *v280; // x4
  BattleSetupInfo_o *v281; // x5
  FollowerInfo_o *v282; // x6
  PartyListViewItem_o *v283; // x7
  struct WarBoardDataEntity_o *v284; // x8
  unsigned int v285; // w0
  WarBoardData_o *v286; // x21
  int v287; // w20
  int64_t v288; // x2
  int32_t v289; // w3
  System_String_o *v290; // x4
  BattleSetupInfo_o *v291; // x5
  FollowerInfo_o *v292; // x6
  PartyListViewItem_o *v293; // x7
  int64_t v294; // x2
  __int64 v295; // x3
  System_String_o *v296; // x4
  BattleSetupInfo_o *v297; // x5
  FollowerInfo_o *v298; // x6
  PartyListViewItem_o *v299; // x7
  unsigned __int64 v300; // x22
  __int64 v301; // x24
  __int64 v302; // x25
  struct WarBoardDataEntity_o *v303; // x8
  struct WarBoardBossBattleData_array *bossBattleInfo; // x8
  struct System_Collections_Generic_List_int__o *playedStageReinforcementsList; // x26
  WarBoardBossBattleData_o *v306; // x21
  WarBoardBossBattleData_SaveData_o *v307; // x20
  const MethodInfo *v308; // x2
  int64_t v309; // x2
  int32_t v310; // w3
  System_String_o *v311; // x4
  BattleSetupInfo_o *v312; // x5
  FollowerInfo_o *v313; // x6
  PartyListViewItem_o *v314; // x7
  struct System_Collections_Generic_List_WarBoardPrevCondData__o *bgAnimationInfo_k__BackingField; // x1
  __int64 v316; // x2
  __int64 v317; // x3
  WarBoardData_o *v318; // x8
  MiniMessagePack_MiniMessagePacker_o *v319; // x19
  __int64 v320; // x1
  System_Byte_array *v321; // x19
  WarBoardData_c *v322; // x8
  System_String_o *WARBOARDDATA_SAVEDATA_KEY; // x20
  __int64 v324; // x1
  System_String_o *v325; // x19
  __int64 v326; // x0
  System_Collections_Generic_List_Enumerator_object__o v327; // [xsp+8h] [xbp-F8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v328; // [xsp+20h] [xbp-E0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v329; // [xsp+40h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v330; // [xsp+60h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v331; // [xsp+80h] [xbp-80h] BYREF

  v4 = this;
  if ( (byte_4B13E01 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, onBoardSkillUpdate, method);
    sub_1BCA7E0(&EncryptedPlayerPrefs_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__Dispose__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__MoveNext__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__get_Current__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__get_Current__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__get_Current__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__get_Current__, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardUiData_SaveData__Add__, v35, v36);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__Add__, v37, v38);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardEventData_SaveData__Add__, v39, v40);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__Add__, v41, v42);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__, v43, v44);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__, v45, v46);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardEventData__GetEnumerator__, v47, v48);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__, v49, v50);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__ToArray__, v51, v52);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__ToArray__, v53, v54);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v55, v56);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardEventData_SaveData__ToArray__, v57, v58);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardUiData_SaveData__ToArray__, v59, v60);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData___ctor__, v61, v62);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardEventData_SaveData___ctor__, v63, v64);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardUiData_SaveData___ctor__, v65, v66);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData___ctor__, v67, v68);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardPrevCondData_SaveData__TypeInfo, v69, v70);
    sub_1BCA7E0(&System_Collections_Generic_List_HoldReinforcementsData_SaveData__TypeInfo, v71, v72);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardEventData_SaveData__TypeInfo, v73, v74);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardUiData_SaveData__TypeInfo, v75, v76);
    sub_1BCA7E0(&MiniMessagePack_MiniMessagePacker_TypeInfo, v77, v78);
    sub_1BCA7E0(&WarBoardSquareIndexData_SaveData___TypeInfo, v79, v80);
    sub_1BCA7E0(&WarBoardBossBattleData_SaveData___TypeInfo, v81, v82);
    sub_1BCA7E0(&WarBoardBossBattleData_SaveData_TypeInfo, v83, v84);
    sub_1BCA7E0(&WarBoardPrevCondData_SaveData_TypeInfo, v85, v86);
    sub_1BCA7E0(&WarBoardUiData_SaveData_TypeInfo, v87, v88);
    sub_1BCA7E0(&WarBoardEventData_SaveData_TypeInfo, v89, v90);
    sub_1BCA7E0(&WarBoardSquareIndexData_SaveData_TypeInfo, v91, v92);
    sub_1BCA7E0(&HoldReinforcementsData_SaveData_TypeInfo, v93, v94);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v95, v96);
    this = (WarBoardData_o *)sub_1BCA7E0(&WarBoardData_TypeInfo, v97, v98);
    byte_4B13E01 = 1;
  }
  memset(&v331, 0, sizeof(v331));
  memset(&v330, 0, sizeof(v330));
  memset(&v329, 0, sizeof(v329));
  memset(&v328, 0, sizeof(v328));
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
    v103 = 0;
    while ( v103 < max_length )
    {
      this = (WarBoardData_o *)pieceSaves->m_Items[v103];
      if ( !this )
        goto LABEL_129;
      WarBoardPieceData_SaveData__Save((WarBoardPieceData_SaveData_o *)this, 0LL);
      max_length = pieceSaves->max_length;
      if ( (int)++v103 >= max_length )
        goto LABEL_10;
    }
LABEL_130:
    sub_1BCAA44(this, onBoardSkillUpdate);
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
    v106 = 0;
    while ( v106 < entries )
    {
      this = (WarBoardData_o *)*((_QWORD *)&actionPointEntityDict->fields._count + (int)v106);
      if ( !this )
        goto LABEL_129;
      WarBoardItemData_SaveData__Save((WarBoardItemData_SaveData_o *)this, 0LL);
      entries = (int)actionPointEntityDict->fields._entries;
      if ( (int)++v106 >= entries )
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
  v108 = pieces->max_length;
  if ( v108 >= 1 )
  {
    v109 = 0;
    while ( v109 < v108 )
    {
      this = (WarBoardData_o *)pieces->m_Items[v109];
      if ( !this )
        goto LABEL_129;
      WarBoardTreasureData_SaveData__Save((WarBoardTreasureData_SaveData_o *)this, 0LL);
      v108 = pieces->max_length;
      if ( (int)++v109 >= v108 )
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
  v111 = squares->max_length;
  if ( v111 >= 1 )
  {
    v112 = 0;
    while ( v112 < v111 )
    {
      this = (WarBoardData_o *)squares->m_Items[v112];
      if ( !this )
        goto LABEL_129;
      WarBoardWallData_SaveData__Save((WarBoardWallData_SaveData_o *)this, 0LL);
      v111 = squares->max_length;
      if ( (int)++v112 >= v111 )
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
  v114 = condSquares->max_length;
  if ( v114 >= 1 )
  {
    v115 = 0;
    while ( v115 < v114 )
    {
      this = (WarBoardData_o *)condSquares->m_Items[v115];
      if ( !this )
        goto LABEL_129;
      WarBoardSquareData_SaveData__Save((WarBoardSquareData_SaveData_o *)this, 0LL);
      v114 = condSquares->max_length;
      if ( (int)++v115 >= v114 )
        goto LABEL_38;
    }
    goto LABEL_130;
  }
LABEL_38:
  this = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  serverData = v4->fields.serverData;
  if ( !serverData )
    goto LABEL_129;
  v117 = v4->fields.localSaveData;
  if ( !v117 )
    goto LABEL_129;
  v118 = this;
  v117->fields.turn = serverData->fields.turn;
  *(_QWORD *)&v117->fields.turnForceId = *(_QWORD *)&serverData->fields.turnForceId;
  if ( !this )
    goto LABEL_129;
  v119 = this->fields.pieces;
  if ( !v119 )
    goto LABEL_129;
  this = (WarBoardData_o *)v119->m_Items[5];
  if ( !this )
    goto LABEL_129;
  v117->fields.cameraPos = MapScroll__GetScrlPos((MapScroll_o *)this, 0LL);
  v120 = v118->fields.pieces;
  if ( !v120 )
    goto LABEL_129;
  this = (WarBoardData_o *)v120->m_Items[6];
  if ( !this )
    goto LABEL_129;
  v121 = *p_localSaveData;
  ZoomSize = MapZoom__GetZoomSize((MapZoom_o *)this, 0LL);
  if ( !v121 )
    goto LABEL_129;
  *(float *)&v121->fields.treasures = ZoomSize;
  v123 = *p_localSaveData;
  if ( !*p_localSaveData )
    goto LABEL_129;
  npcEntityDict_high = HIDWORD(v118[3].fields.npcEntityDict);
  BYTE4(v123->fields.effects) = onBoardSkillUpdate;
  HIDWORD(v123->fields.treasures) = npcEntityDict_high;
  LODWORD(v123->fields.serverData) = BattleRandom__GetLogicCount(0LL);
  v125 = *p_localSaveData;
  this = (WarBoardData_o *)BattleRandom__GetGutsCount(0LL);
  if ( !v125 )
    goto LABEL_129;
  HIDWORD(v125->fields.serverData) = (_DWORD)this;
  if ( !*p_localSaveData )
    goto LABEL_129;
  LOBYTE((*p_localSaveData)->fields._bgAnimationInfo_k__BackingField) = v4->fields.isPlayedHalfDeadMessage;
  v128 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_WarBoardEventData_SaveData__TypeInfo,
                                                        onBoardSkillUpdate,
                                                        v126,
                                                        v127);
  System_Collections_Generic_List_object____ctor(
    v128,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardEventData_SaveData___ctor__);
  this = (WarBoardData_o *)v4->fields.listEvent;
  if ( !this )
    goto LABEL_129;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v327,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_WarBoardEventData__GetEnumerator__);
  v331 = v327;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v331,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__MoveNext__) )
  {
    current = v331.fields._current;
    v133 = (WarBoardEventData_SaveData_o *)sub_1BCAA2C(WarBoardEventData_SaveData_TypeInfo, v129, v130, v131);
    WarBoardEventData_SaveData___ctor_36235172(v133, (WarBoardEventData_o *)current, 0LL);
    if ( !v128 )
      sub_1BCAA3C(v134, v135);
    items = v128->fields._items;
    v143 = Method_System_Collections_Generic_List_WarBoardEventData_SaveData__Add__;
    ++v128->fields._version;
    if ( !items )
      sub_1BCAA3C(v134, v135);
    size = v128->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v128,
        (Il2CppObject *)v133,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v143[4] + 192LL) + 112LL));
    }
    else
    {
      v145 = &items->obj.klass + size;
      v128->fields._size = size + 1;
      v145[4] = (Il2CppClass *)v133;
      sub_1BCA784((PartyOrganizationUtility_o *)(v145 + 4), (int64_t)v133, v136, v137, v138, v139, v140, v141);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v331,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__Dispose__);
  if ( !v128 )
    goto LABEL_129;
  v146 = *p_localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_object___ToArray(
                             v128,
                             (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_WarBoardEventData_SaveData__ToArray__);
  if ( !v146 )
    goto LABEL_129;
  v146->fields.localSaveData = (struct WarBoardData_WarBoardLocalSaveData_o *)this;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v146->fields.localSaveData,
    (int64_t)this,
    v147,
    v148,
    v149,
    v150,
    v151,
    v152);
  this = *p_localSaveData;
  if ( !*p_localSaveData )
    goto LABEL_129;
  this->fields._maxForceId_k__BackingField = v4->fields.winCondId;
  latestPieceActionSquareIndexes = (struct System_Collections_Generic_List_WarBoardUiData__o *)v4->fields.latestPieceActionSquareIndexes;
  this->fields.listUiData = latestPieceActionSquareIndexes;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.listUiData,
    (int64_t)latestPieceActionSquareIndexes,
    v153,
    v154,
    v155,
    v156,
    v157,
    v158);
  this = (WarBoardData_o *)v4->fields.localSaveData;
  if ( !this )
    goto LABEL_129;
  latestBattlePieceUniqueIndexes = (int64_t)v4->fields.latestBattlePieceUniqueIndexes;
  *(_QWORD *)&this->fields.isPlayedHalfDeadMessage = latestBattlePieceUniqueIndexes;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.isPlayedHalfDeadMessage,
    latestBattlePieceUniqueIndexes,
    v160,
    v161,
    v162,
    v163,
    v164,
    v165);
  v170 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_WarBoardPrevCondData_SaveData__TypeInfo,
                                                        v167,
                                                        v168,
                                                        v169);
  System_Collections_Generic_List_object____ctor(
    v170,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData___ctor__);
  this = (WarBoardData_o *)v4->fields.listPrevCond;
  if ( !this )
    goto LABEL_129;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v327,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__);
  v330 = v327;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v330,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__) )
  {
    v174 = v330.fields._current;
    v175 = (WarBoardPrevCondData_SaveData_o *)sub_1BCAA2C(WarBoardPrevCondData_SaveData_TypeInfo, v171, v172, v173);
    WarBoardPrevCondData_SaveData___ctor_36235232(v175, (WarBoardPrevCondData_o *)v174, 0LL);
    if ( !v170 )
      sub_1BCAA3C(v176, v177);
    v184 = v170->fields._items;
    v185 = Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__Add__;
    ++v170->fields._version;
    if ( !v184 )
      sub_1BCAA3C(v176, v177);
    v186 = v170->fields._size;
    if ( (unsigned int)v186 >= v184->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v170,
        (Il2CppObject *)v175,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v185[4] + 192LL) + 112LL));
    }
    else
    {
      v187 = &v184->obj.klass + v186;
      v170->fields._size = v186 + 1;
      v187[4] = (Il2CppClass *)v175;
      sub_1BCA784((PartyOrganizationUtility_o *)(v187 + 4), (int64_t)v175, v178, v179, v180, v181, v182, v183);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v330,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__);
  if ( !v170 )
    goto LABEL_129;
  v188 = *p_localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_object___ToArray(
                             v170,
                             (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__ToArray__);
  if ( !v188 )
    goto LABEL_129;
  v188->fields.listEvent = (struct System_Collections_Generic_List_WarBoardEventData__o *)this;
  sub_1BCA784((PartyOrganizationUtility_o *)&v188->fields.listEvent, (int64_t)this, v189, v190, v191, v192, v193, v194);
  v198 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_HoldReinforcementsData_SaveData__TypeInfo,
                                                        v195,
                                                        v196,
                                                        v197);
  System_Collections_Generic_List_object____ctor(
    v198,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData___ctor__);
  this = (WarBoardData_o *)v4->fields.reinforcementsSaveList;
  if ( !this )
    goto LABEL_129;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v327,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
  v329 = v327;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v329,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__) )
  {
    v202 = v329.fields._current;
    v203 = (HoldReinforcementsData_SaveData_o *)sub_1BCAA2C(HoldReinforcementsData_SaveData_TypeInfo, v199, v200, v201);
    HoldReinforcementsData_SaveData___ctor_36235284(v203, (HoldReinforcementsData_o *)v202, 0LL);
    if ( !v198 )
      sub_1BCAA3C(v204, v205);
    v212 = v198->fields._items;
    v213 = Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__Add__;
    ++v198->fields._version;
    if ( !v212 )
      sub_1BCAA3C(v204, v205);
    v214 = v198->fields._size;
    if ( (unsigned int)v214 >= v212->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v198,
        (Il2CppObject *)v203,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v213[4] + 192LL) + 112LL));
    }
    else
    {
      v215 = &v212->obj.klass + v214;
      v198->fields._size = v214 + 1;
      v215[4] = (Il2CppClass *)v203;
      sub_1BCA784((PartyOrganizationUtility_o *)(v215 + 4), (int64_t)v203, v206, v207, v208, v209, v210, v211);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v329,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
  if ( !v198 )
    goto LABEL_129;
  v216 = *p_localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_object___ToArray(
                             v198,
                             (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__ToArray__);
  if ( !v216 )
    goto LABEL_129;
  *(_QWORD *)&v216->fields.winCondId = this;
  sub_1BCA784((PartyOrganizationUtility_o *)&v216->fields.winCondId, (int64_t)this, v217, v218, v219, v220, v221, v222);
  this = (WarBoardData_o *)v4->fields.playedStageReinforcementsList;
  if ( !this )
    goto LABEL_129;
  v223 = v4->fields.localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_int___ToArray(
                             (System_Collections_Generic_List_int__o *)this,
                             (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v223 )
    goto LABEL_129;
  v223->fields.playedReinforcements = (struct System_Int32_array *)this;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v223->fields.playedReinforcements,
    (int64_t)this,
    v224,
    v225,
    v226,
    v227,
    v228,
    v229);
  v233 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_WarBoardUiData_SaveData__TypeInfo,
                                                        v230,
                                                        v231,
                                                        v232);
  System_Collections_Generic_List_object____ctor(
    v233,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardUiData_SaveData___ctor__);
  this = (WarBoardData_o *)v4->fields.listUiData;
  if ( !this )
    goto LABEL_129;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v327,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__);
  v328 = v327;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v328,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__) )
  {
    v237 = v328.fields._current;
    v238 = (WarBoardUiData_SaveData_o *)sub_1BCAA2C(WarBoardUiData_SaveData_TypeInfo, v234, v235, v236);
    WarBoardUiData_SaveData___ctor_36235344(v238, (WarBoardUiData_o *)v237, 0LL);
    if ( !v233 )
      sub_1BCAA3C(v239, v240);
    v247 = v233->fields._items;
    v248 = Method_System_Collections_Generic_List_WarBoardUiData_SaveData__Add__;
    ++v233->fields._version;
    if ( !v247 )
      sub_1BCAA3C(v239, v240);
    v249 = v233->fields._size;
    if ( (unsigned int)v249 >= v247->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v233,
        (Il2CppObject *)v238,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v248[4] + 192LL) + 112LL));
    }
    else
    {
      v250 = &v247->obj.klass + v249;
      v233->fields._size = v249 + 1;
      v250[4] = (Il2CppClass *)v238;
      sub_1BCA784((PartyOrganizationUtility_o *)(v250 + 4), (int64_t)v238, v241, v242, v243, v244, v245, v246);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v328,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__);
  if ( !v233 )
    goto LABEL_129;
  v251 = *p_localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_object___ToArray(
                             v233,
                             (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_WarBoardUiData_SaveData__ToArray__);
  if ( !v251
    || (v251->fields.latestBattlePieceUniqueIndexes = (struct System_UInt32_array *)this,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v251->fields.latestBattlePieceUniqueIndexes,
          (int64_t)this,
          v252,
          v253,
          v254,
          v255,
          v256,
          v257),
        (v258 = v4->fields.serverData) == 0LL)
    || (v259 = System_Linq_Enumerable__Count_object_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v258->fields.squareIndexInfo,
                 (const MethodInfo_2F2DF88 *)Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___),
        v260 = *p_localSaveData,
        v261 = v259,
        this = (WarBoardData_o *)sub_1BCA888(WarBoardSquareIndexData_SaveData___TypeInfo, v259),
        !v260) )
  {
LABEL_129:
    sub_1BCAA3C(this, onBoardSkillUpdate);
  }
  v260->fields.reinforcementsSaveList = (struct System_Collections_Generic_List_HoldReinforcementsData__o *)this;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v260->fields.reinforcementsSaveList,
    (int64_t)this,
    v262,
    v263,
    v264,
    v265,
    v266,
    v267);
  if ( v261 >= 1 )
  {
    v270 = 0LL;
    v271 = (unsigned int)v261;
    v272 = 8LL;
    while ( *p_localSaveData )
    {
      v273 = v4->fields.serverData;
      if ( !v273 )
        break;
      squareIndexInfo = v273->fields.squareIndexInfo;
      if ( !squareIndexInfo )
        break;
      if ( v270 >= squareIndexInfo->max_length )
        goto LABEL_130;
      reinforcementsSaveList = (unsigned int *)(*p_localSaveData)->fields.reinforcementsSaveList;
      v276 = *(WarBoardSquareIndexData_o **)((char *)&squareIndexInfo->obj.klass + v272 * 4);
      v277 = (WarBoardSquareIndexData_SaveData_o *)sub_1BCAA2C(
                                                     WarBoardSquareIndexData_SaveData_TypeInfo,
                                                     onBoardSkillUpdate,
                                                     v268,
                                                     v269);
      WarBoardSquareIndexData_SaveData___ctor_36235424(v277, v276, 0LL);
      if ( !reinforcementsSaveList )
        break;
      if ( v277 )
      {
        this = (WarBoardData_o *)sub_1BCA91C(v277, *(_QWORD *)(*(_QWORD *)reinforcementsSaveList + 64LL));
        if ( !this )
        {
LABEL_139:
          v326 = sub_1BCAA60(this);
          sub_1BCA908(v326, 0LL);
        }
      }
      if ( v270 >= reinforcementsSaveList[6] )
        goto LABEL_130;
      *(_QWORD *)&reinforcementsSaveList[v272] = v277;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&reinforcementsSaveList[v272],
        (int64_t)v277,
        v278,
        v279,
        v280,
        v281,
        v282,
        v283);
      ++v270;
      v272 += 2LL;
      if ( v271 == v270 )
        goto LABEL_106;
    }
    goto LABEL_129;
  }
LABEL_106:
  v284 = v4->fields.serverData;
  if ( !v284 )
    goto LABEL_129;
  v285 = System_Linq_Enumerable__Count_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v284->fields.bossBattleInfo,
           (const MethodInfo_2F2DF88 *)Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___);
  v286 = *p_localSaveData;
  v287 = v285;
  this = (WarBoardData_o *)sub_1BCA888(WarBoardBossBattleData_SaveData___TypeInfo, v285);
  if ( !v286 )
    goto LABEL_129;
  v286->fields.playedStageReinforcementsList = (struct System_Collections_Generic_List_int__o *)this;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v286->fields.playedStageReinforcementsList,
    (int64_t)this,
    v288,
    v289,
    v290,
    v291,
    v292,
    v293);
  this = *p_localSaveData;
  if ( v287 >= 1 )
  {
    v300 = 0LL;
    v301 = (unsigned int)v287;
    v302 = 32LL;
    while ( this )
    {
      v303 = v4->fields.serverData;
      if ( !v303 )
        break;
      bossBattleInfo = v303->fields.bossBattleInfo;
      if ( !bossBattleInfo )
        break;
      if ( v300 >= bossBattleInfo->max_length )
        goto LABEL_130;
      playedStageReinforcementsList = this->fields.playedStageReinforcementsList;
      v306 = *(WarBoardBossBattleData_o **)((char *)&bossBattleInfo->obj.klass + v302);
      v307 = (WarBoardBossBattleData_SaveData_o *)sub_1BCAA2C(
                                                    WarBoardBossBattleData_SaveData_TypeInfo,
                                                    onBoardSkillUpdate,
                                                    v294,
                                                    v295);
      WarBoardBossBattleData_SaveData___ctor_36030228(v307, v306, v308);
      if ( !playedStageReinforcementsList )
        break;
      if ( v307 )
      {
        this = (WarBoardData_o *)sub_1BCA91C(v307, playedStageReinforcementsList->klass->_1.element_class);
        if ( !this )
          goto LABEL_139;
      }
      if ( v300 >= (unsigned int)playedStageReinforcementsList->fields._size )
        goto LABEL_130;
      *(System_Collections_Generic_List_int__c **)((char *)&playedStageReinforcementsList->klass + v302) = (System_Collections_Generic_List_int__c *)v307;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)((char *)playedStageReinforcementsList + v302),
        (int64_t)v307,
        v309,
        v310,
        v311,
        v312,
        v313,
        v314);
      this = *p_localSaveData;
      ++v300;
      v302 += 8LL;
      if ( v301 == v300 )
        goto LABEL_119;
    }
    goto LABEL_129;
  }
LABEL_119:
  if ( !this )
    goto LABEL_129;
  bgAnimationInfo_k__BackingField = (struct System_Collections_Generic_List_WarBoardPrevCondData__o *)v4->fields._bgAnimationInfo_k__BackingField;
  this->fields.listPrevCond = bgAnimationInfo_k__BackingField;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.listPrevCond,
    (int64_t)bgAnimationInfo_k__BackingField,
    v294,
    v295,
    v296,
    v297,
    v298,
    v299);
  v318 = *p_localSaveData;
  if ( !*p_localSaveData )
    goto LABEL_129;
  v318->fields._CurrentMemberCount_k__BackingField = v4->fields._ContinueConsumeType_k__BackingField;
  LOBYTE(v318->fields._ContinueConsumeType_k__BackingField) = v4->fields._IsContinue_k__BackingField;
  BYTE1(v318->fields._ContinueConsumeType_k__BackingField) = v4->fields._IsNextTurn_k__BackingField;
  v318->fields._CurrentPartyCost_k__BackingField = v4->fields.localSaveTiming;
  v319 = (MiniMessagePack_MiniMessagePacker_o *)sub_1BCAA2C(
                                                  MiniMessagePack_MiniMessagePacker_TypeInfo,
                                                  onBoardSkillUpdate,
                                                  v316,
                                                  v317);
  MiniMessagePack_MiniMessagePacker___ctor(v319, 0LL);
  if ( !v319 )
    goto LABEL_129;
  v321 = MiniMessagePack_MiniMessagePacker__PackClass(v319, (Il2CppObject *)*p_localSaveData, 0LL);
  v322 = WarBoardData_TypeInfo;
  if ( !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo, v320);
    v322 = WarBoardData_TypeInfo;
  }
  WARBOARDDATA_SAVEDATA_KEY = v322->static_fields->WARBOARDDATA_SAVEDATA_KEY;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v320);
  v325 = System_Convert__ToBase64String(v321, 0LL);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, v324);
  EncryptedPlayerPrefs__SetString(WARBOARDDATA_SAVEDATA_KEY, v325, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardData__SaveHoldReinforcements(
        WarBoardData_o *this,
        int32_t stageReinforcementsId,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  WarBoardData___c__DisplayClass187_0_o *v25; // x20
  System_Collections_Generic_List_object__o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Collections_Generic_List_T__o *reinforcementsSaveList; // x21
  System_Func_object__bool__o *v31; // x22
  __int64 v32; // x2
  __int64 v33; // x3
  _BOOL8 v34; // x0
  __int64 v35; // x1
  int32_t v36; // w21
  int32_t v37; // w22
  HoldReinforcementsData_o *v38; // x20
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x8
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B13E4B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_HoldReinforcementsData___, *(_QWORD *)&stageReinforcementsId, *(_QWORD *)&index);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__get_Current__, v11, v12);
    sub_1BCA7E0(&System_Func_HoldReinforcementsData__bool__TypeInfo, v13, v14);
    sub_1BCA7E0(&HoldReinforcementsData_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_HoldReinforcementsData__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__, v19, v20);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass187_0__SaveHoldReinforcements_b__0__, v21, v22);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass187_0_TypeInfo, v23, v24);
    byte_4B13E4B = 1;
  }
  memset(&v50, 0, sizeof(v50));
  v25 = (WarBoardData___c__DisplayClass187_0_o *)sub_1BCAA2C(
                                                   WarBoardData___c__DisplayClass187_0_TypeInfo,
                                                   *(_QWORD *)&stageReinforcementsId,
                                                   *(_QWORD *)&index,
                                                   method);
  WarBoardData___c__DisplayClass187_0___ctor(v25, 0LL);
  if ( !v25 )
    goto LABEL_20;
  v25->fields.stageReinforcementsId = stageReinforcementsId;
  v25->fields.index = index;
  reinforcementsSaveList = (System_Collections_Generic_List_T__o *)this->fields.reinforcementsSaveList;
  v31 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_HoldReinforcementsData__bool__TypeInfo, v27, v28, v29);
  System_Func_object__bool____ctor(
    v31,
    (Il2CppObject *)v25,
    Method_WarBoardData___c__DisplayClass187_0__SaveHoldReinforcements_b__0__,
    0LL);
  if ( !BasicHelper__Any_object_(
          reinforcementsSaveList,
          (System_Func_T__bool__o *)v31,
          (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_HoldReinforcementsData___) )
  {
    v36 = v25->fields.stageReinforcementsId;
    v37 = v25->fields.index;
    v38 = (HoldReinforcementsData_o *)sub_1BCAA2C(HoldReinforcementsData_TypeInfo, v27, v32, v33);
    HoldReinforcementsData___ctor_36271776(v38, v36, v37, 1, 0LL);
    v26 = (System_Collections_Generic_List_object__o *)this->fields.reinforcementsSaveList;
    if ( v26 )
    {
      items = v26->fields._items;
      v46 = Method_System_Collections_Generic_List_HoldReinforcementsData__Add__;
      ++v26->fields._version;
      if ( items )
      {
        size = v26->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v26,
            (Il2CppObject *)v38,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
        }
        else
        {
          v48 = &items->obj.klass + size;
          v26->fields._size = size + 1;
          v48[4] = (Il2CppClass *)v38;
          sub_1BCA784((PartyOrganizationUtility_o *)(v48 + 4), (int64_t)v38, v39, v40, v41, v42, v43, v44);
        }
        return;
      }
    }
LABEL_20:
    sub_1BCAA3C(v26, v27);
  }
  v26 = (System_Collections_Generic_List_object__o *)this->fields.reinforcementsSaveList;
  if ( !v26 )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v49,
    v26,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
  v50 = v49;
  while ( 1 )
  {
    v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v50,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__);
    if ( !v34 )
      break;
    if ( !v50.fields._current )
      sub_1BCAA3C(v34, v35);
    if ( LODWORD(v50.fields._current[1].klass) == v25->fields.stageReinforcementsId
      && HIDWORD(v50.fields._current[1].klass) == v25->fields.index )
    {
      HoldReinforcementsData__IncreaseHoldNum((HoldReinforcementsData_o *)v50.fields._current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v50,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
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

  if ( (byte_4B13E49 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&stageReinforcementsId, method);
    byte_4B13E49 = 1;
  }
  playedStageReinforcementsList = this->fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList
    || (items = playedStageReinforcementsList->fields._items,
        v7 = Method_System_Collections_Generic_List_int__Add__,
        ++playedStageReinforcementsList->fields._version,
        !items) )
  {
    sub_1BCAA3C(playedStageReinforcementsList, *(_QWORD *)&stageReinforcementsId);
  }
  size = playedStageReinforcementsList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      playedStageReinforcementsList,
      stageReinforcementsId,
      *(const MethodInfo_3584C38 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  WarBoardData___c__DisplayClass125_0_o *v32; // x21
  Il2CppObject *v33; // x0
  __int64 v34; // x1
  const MethodInfo *v35; // x2
  WarBoardSquareData_o *Square; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *v40; // x24
  WarBoardSquareData_o *v41; // x22
  System_Collections_Generic_List_object__o *v42; // x24
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  System_Func_object__bool__o *v49; // x25
  __int64 v50; // x2
  __int64 v51; // x3
  System_Collections_Generic_List_object__o *v52; // x24
  int32_t v53; // w26
  WarBoardData_SquareRangeSearch_o *v54; // x25
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
  struct System_Int32_array *linkedSquares; // x8
  __int64 v66; // x8
  unsigned __int64 v67; // x28
  __int64 v68; // x29
  __int64 v69; // x24
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  __int64 v76; // x23
  __int64 v77; // x2
  __int64 v78; // x3
  struct System_Int32_array *v79; // x8
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *v80; // x25
  System_Func_object__bool__o *v81; // x26
  __int64 v82; // x2
  __int64 v83; // x3
  const MethodInfo *v84; // x4
  System_Collections_Generic_List_T__o *v85; // x25
  System_Func_object__bool__o *v86; // x26
  struct System_Int32_array *v87; // x8

  if ( (byte_4B13E22 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_WarBoardData_SquareRangeSearch___, *(_QWORD *)&start, *(_QWORD *)&range);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_All_WarBoardData_SquareRangeSearch___, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardData_SquareRangeSearch___, v10, v11);
    sub_1BCA7E0(&System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch___ctor__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardData_SquareRangeSearch__TypeInfo, v18, v19);
    sub_1BCA7E0(&WarBoardData_SquareRangeSearch_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass125_0__SearchInRangeSquares_b__0__, v22, v23);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass125_0_TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__1__, v26, v27);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__2__, v28, v29);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass125_1_TypeInfo, v30, v31);
    byte_4B13E22 = 1;
  }
  v32 = (WarBoardData___c__DisplayClass125_0_o *)sub_1BCAA2C(
                                                   WarBoardData___c__DisplayClass125_0_TypeInfo,
                                                   *(_QWORD *)&start,
                                                   *(_QWORD *)&range,
                                                   rangeSearches);
  WarBoardData___c__DisplayClass125_0___ctor(v32, 0LL);
  if ( !v32 )
    goto LABEL_29;
  v32->fields.start = start;
  Square = WarBoardData__GetSquare(this, start, v35);
  if ( Square )
  {
    v40 = *rangeSearches;
    v41 = Square;
    if ( !*rangeSearches )
    {
      v42 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                           System_Collections_Generic_List_WarBoardData_SquareRangeSearch__TypeInfo,
                                                           v37,
                                                           v38,
                                                           v39);
      System_Collections_Generic_List_object____ctor(
        v42,
        (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch___ctor__);
      *rangeSearches = (System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *)v42;
      sub_1BCA784((PartyOrganizationUtility_o *)rangeSearches, (int64_t)v42, v43, v44, v45, v46, v47, v48);
      v40 = *rangeSearches;
    }
    v49 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                           System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo,
                                           v37,
                                           v38,
                                           v39);
    System_Func_object__bool____ctor(
      v49,
      (Il2CppObject *)v32,
      Method_WarBoardData___c__DisplayClass125_0__SearchInRangeSquares_b__0__,
      0LL);
    v33 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
            (System_Collections_Generic_IEnumerable_TSource__o *)v40,
            (System_Func_TSource__bool__o *)v49,
            (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardData_SquareRangeSearch___);
    if ( v33 )
    {
      HIDWORD(v33[1].klass) = range;
    }
    else
    {
      v52 = (System_Collections_Generic_List_object__o *)*rangeSearches;
      v53 = v32->fields.start;
      v54 = (WarBoardData_SquareRangeSearch_o *)sub_1BCAA2C(WarBoardData_SquareRangeSearch_TypeInfo, v34, v50, v51);
      WarBoardData_SquareRangeSearch___ctor(v54, v53, range, 0LL);
      if ( !v52 )
        goto LABEL_29;
      items = v52->fields._items;
      v62 = Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch__Add__;
      ++v52->fields._version;
      if ( !items )
        goto LABEL_29;
      size = v52->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v52,
          (Il2CppObject *)v54,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
      }
      else
      {
        v64 = &items->obj.klass + size;
        v52->fields._size = size + 1;
        v64[4] = (Il2CppClass *)v54;
        sub_1BCA784((PartyOrganizationUtility_o *)(v64 + 4), (int64_t)v54, v55, v56, v57, v58, v59, v60);
      }
    }
    v32->fields.nextRange = range - 1;
    if ( range - 1 >= 0 )
    {
      linkedSquares = v41->fields.linkedSquares;
      if ( !linkedSquares )
        goto LABEL_29;
      v66 = *(_QWORD *)&linkedSquares->max_length;
      if ( (int)v66 >= 1 )
      {
        v67 = 0LL;
        v68 = (unsigned int)v66;
        while ( 1 )
        {
          v69 = sub_1BCAA2C(WarBoardData___c__DisplayClass125_1_TypeInfo, v34, v50, v51);
          WarBoardData___c__DisplayClass125_1___ctor((WarBoardData___c__DisplayClass125_1_o *)v69, 0LL);
          if ( !v69 )
            break;
          *(_QWORD *)(v69 + 24) = v32;
          v76 = v69 + 24;
          sub_1BCA784((PartyOrganizationUtility_o *)(v69 + 24), (int64_t)v32, v70, v71, v72, v73, v74, v75);
          v79 = v41->fields.linkedSquares;
          if ( !v79 )
            break;
          if ( v67 >= v79->max_length )
            goto LABEL_30;
          *(_DWORD *)(v69 + 16) = v79->m_Items[v67 + 1];
          v80 = *rangeSearches;
          v81 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                 System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo,
                                                 v34,
                                                 v77,
                                                 v78);
          System_Func_object__bool____ctor(
            v81,
            (Il2CppObject *)v69,
            Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__1__,
            0LL);
          v33 = (Il2CppObject *)System_Linq_Enumerable__All_object_(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)v80,
                                  (System_Func_TSource__bool__o *)v81,
                                  (const MethodInfo_2F1D414 *)Method_System_Linq_Enumerable_All_WarBoardData_SquareRangeSearch___);
          if ( ((unsigned __int8)v33 & 1) != 0
            || (v85 = (System_Collections_Generic_List_T__o *)*rangeSearches,
                v86 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                       System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo,
                                                       v34,
                                                       v82,
                                                       v83),
                System_Func_object__bool____ctor(
                  v86,
                  (Il2CppObject *)v69,
                  Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__2__,
                  0LL),
                v33 = (Il2CppObject *)BasicHelper__Any_object_(
                                        v85,
                                        (System_Func_T__bool__o *)v86,
                                        (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_WarBoardData_SquareRangeSearch___),
                ((unsigned __int8)v33 & 1) != 0) )
          {
            v87 = v41->fields.linkedSquares;
            if ( !v87 )
              break;
            if ( v67 >= v87->max_length )
LABEL_30:
              sub_1BCAA44(v33, v34);
            if ( !*(_QWORD *)v76 )
              break;
            WarBoardData__SearchInRangeSquares(
              this,
              v87->m_Items[v67 + 1],
              *(_DWORD *)(*(_QWORD *)v76 + 20LL),
              rangeSearches,
              v84);
          }
          if ( v68 == ++v67 )
            return;
        }
LABEL_29:
        sub_1BCAA3C(v33, v34);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_Queue_int__o *v27; // x21
  WarBoardPieceData_o *Piece_36054544; // x0
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Collections_Generic_HashSet_int__o *v33; // x23
  const MethodInfo *v34; // x2
  WarBoardSquareData_o *Square; // x0
  const MethodInfo *v36; // x2
  WarBoardSquareData_o *v37; // x24
  WarBoardPieceData_o *v38; // x25
  struct System_Int32_array *linkedSquares; // x24
  __int64 v40; // x8
  unsigned __int64 v41; // x25
  int32_t v42; // w22

  v7 = destination;
  if ( (byte_4B13E23 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Add__, *(_QWORD *)&destination, *(_QWORD *)&current);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Contains__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_int__Contains__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_int__Dequeue__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_int__Enqueue__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_int___ctor__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_int__get_Count__, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_Queue_int__TypeInfo, v25, v26);
    byte_4B13E23 = 1;
  }
  if ( v7 != current )
  {
    v27 = (System_Collections_Generic_Queue_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_Queue_int__TypeInfo,
                                                       *(_QWORD *)&destination,
                                                       *(_QWORD *)&current,
                                                       checkReplaceFunc);
    System_Collections_Generic_Queue_int____ctor(
      v27,
      (const MethodInfo_3712880 *)Method_System_Collections_Generic_Queue_int___ctor__);
    if ( !v27 )
LABEL_24:
      sub_1BCAA3C(Piece_36054544, v29);
    System_Collections_Generic_Queue_int___Enqueue(
      v27,
      v7,
      (const MethodInfo_3712DF8 *)Method_System_Collections_Generic_Queue_int__Enqueue__);
    v33 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_HashSet_int__TypeInfo,
                                                         v30,
                                                         v31,
                                                         v32);
    System_Collections_Generic_HashSet_int____ctor(
      v33,
      (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    if ( v27->fields._size >= 1 )
    {
      do
      {
        v7 = System_Collections_Generic_Queue_int___Dequeue(
               v27,
               (const MethodInfo_3712F74 *)Method_System_Collections_Generic_Queue_int__Dequeue__);
        Square = WarBoardData__GetSquare(this, v7, v34);
        if ( !Square )
          break;
        v37 = Square;
        Piece_36054544 = WarBoardData__GetPiece_36054544(this, v7, v36);
        if ( !Piece_36054544 )
          return v7;
        if ( !checkReplaceFunc )
          goto LABEL_24;
        v38 = Piece_36054544;
        Piece_36054544 = (WarBoardPieceData_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, WarBoardPieceData_o *, _QWORD))checkReplaceFunc->fields.m_target)(
                                                  checkReplaceFunc->fields.original_method_info,
                                                  Piece_36054544,
                                                  *(_QWORD *)&checkReplaceFunc->fields.extra_arg);
        if ( ((unsigned __int8)Piece_36054544 & 1) != 0 )
        {
          WarBoardPieceData__SetSquareIndex(v38, -1, 0LL);
          return v7;
        }
        if ( !v33 )
          goto LABEL_24;
        Piece_36054544 = (WarBoardPieceData_o *)System_Collections_Generic_HashSet_int___Add(
                                                  v33,
                                                  v7,
                                                  (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
        linkedSquares = v37->fields.linkedSquares;
        if ( !linkedSquares )
          goto LABEL_24;
        v40 = *(_QWORD *)&linkedSquares->max_length;
        if ( (int)v40 >= 1 )
        {
          v41 = 0LL;
          do
          {
            if ( v41 >= (unsigned int)v40 )
              sub_1BCAA44(Piece_36054544, v29);
            v42 = linkedSquares->m_Items[v41 + 1];
            Piece_36054544 = (WarBoardPieceData_o *)System_Collections_Generic_HashSet_int___Contains(
                                                      v33,
                                                      v42,
                                                      (const MethodInfo_3455298 *)Method_System_Collections_Generic_HashSet_int__Contains__);
            if ( ((unsigned __int8)Piece_36054544 & 1) == 0 )
            {
              Piece_36054544 = (WarBoardPieceData_o *)System_Collections_Generic_Queue_int___Contains(
                                                        v27,
                                                        v42,
                                                        (const MethodInfo_3713030 *)Method_System_Collections_Generic_Queue_int__Contains__);
              if ( ((unsigned __int8)Piece_36054544 & 1) == 0 )
                System_Collections_Generic_Queue_int___Enqueue(
                  v27,
                  v42,
                  (const MethodInfo_3712DF8 *)Method_System_Collections_Generic_Queue_int__Enqueue__);
            }
            LODWORD(v40) = linkedSquares->max_length;
            ++v41;
          }
          while ( (__int64)v41 < (int)v40 );
        }
      }
      while ( v27->fields._size > 0 );
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

  if ( (byte_4B13E56 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, objectName, animName);
    byte_4B13E56 = 1;
  }
  bgAnimationInfo_k__BackingField = this->fields._bgAnimationInfo_k__BackingField;
  if ( !bgAnimationInfo_k__BackingField )
    sub_1BCAA3C(0LL, objectName);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)bgAnimationInfo_k__BackingField,
    (Il2CppObject *)objectName,
    (Il2CppObject *)animName,
    (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
}


void __fastcall WarBoardData__SetContinue(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  WarBoardPieceData_array *PlayerPieces; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  WarBoardData___c_c *v48; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x20
  System_Func_object__int__o *_9__82_0; // x21
  Il2CppObject *v51; // x22
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x0
  System_Object_array *v60; // x0
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  WarBoardData___c_c *v64; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v65; // x20
  System_Func_object__object__o *_9__82_1; // x21
  Il2CppObject *v67; // x22
  struct WarBoardData___c_StaticFields *v68; // x0
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  System_Collections_Generic_IEnumerable_T__o *v75; // x0
  System_Collections_Generic_IEnumerable_T__o *v76; // x0
  System_Object_array *v77; // x0
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  WarBoardData___c_c *v81; // x8
  BattleServantData_array *v82; // x21
  System_Func_object__bool__o *_9__82_2; // x22
  Il2CppObject *v84; // x23
  struct WarBoardData___c_StaticFields *v85; // x0
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v92; // x0
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x3
  WarBoardData___c_c *v96; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v97; // x22
  System_Func_object__int__o *_9__82_3; // x23
  Il2CppObject *v99; // x24
  struct WarBoardData___c_StaticFields *v100; // x0
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  System_Collections_Generic_IEnumerable_T__o *v107; // x23
  __int64 v108; // x1
  __int64 v109; // x2
  __int64 v110; // x3
  System_Collections_Generic_HashSet_int__o *v111; // x22
  Il2CppObject *Instance; // x0
  __int64 v113; // x1
  __int64 v114; // x1
  __int64 v115; // x2
  __int64 v116; // x3
  WarBoardData___c_c *v117; // x0
  System_Action_object__o *_9__82_4; // x21
  Il2CppObject *v119; // x22
  struct WarBoardData___c_StaticFields *v120; // x0
  int64_t v121; // x2
  int32_t v122; // w3
  System_String_o *v123; // x4
  BattleSetupInfo_o *v124; // x5
  FollowerInfo_o *v125; // x6
  PartyListViewItem_o *v126; // x7
  struct WarBoardItemData_array *items; // x19
  int max_length; // w8
  unsigned int v129; // w20

  if ( (byte_4B13E05 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_WarBoardPieceData__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BasicHelper_ExcludeNull_BattleServantData___, v4, v5);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_WarBoardPieceData___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderBy_WarBoardPieceData__int___, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__BattleServantData___, v10, v11);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___, v12, v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_BattleServantData___, v14, v15);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, v16, v17);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v18, v19);
    sub_1BCA7E0(&System_Func_WarBoardPieceData__BattleServantData__TypeInfo, v20, v21);
    sub_1BCA7E0(&System_Func_WarBoardPieceData__int__TypeInfo, v22, v23);
    sub_1BCA7E0(&System_Func_WarBoardPieceData__bool__TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor___76767240, v26, v27);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v30, v31);
    sub_1BCA7E0(&Method_WarBoardData___c__SetContinue_b__82_0__, v32, v33);
    sub_1BCA7E0(&Method_WarBoardData___c__SetContinue_b__82_1__, v34, v35);
    sub_1BCA7E0(&Method_WarBoardData___c__SetContinue_b__82_2__, v36, v37);
    sub_1BCA7E0(&Method_WarBoardData___c__SetContinue_b__82_3__, v38, v39);
    sub_1BCA7E0(&Method_WarBoardData___c__SetContinue_b__82_4__, v40, v41);
    sub_1BCA7E0(&WarBoardData___c_TypeInfo, v42, v43);
    byte_4B13E05 = 1;
  }
  PlayerPieces = WarBoardData__GetPlayerPieces(this, method);
  v48 = WarBoardData___c_TypeInfo;
  v49 = (System_Collections_Generic_IEnumerable_TSource__o *)PlayerPieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, v45);
    v48 = WarBoardData___c_TypeInfo;
  }
  _9__82_0 = (System_Func_object__int__o *)v48->static_fields->__9__82_0;
  if ( !_9__82_0 )
  {
    if ( !v48->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v48, v45);
      v48 = WarBoardData___c_TypeInfo;
    }
    v51 = (Il2CppObject *)v48->static_fields->__9;
    _9__82_0 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_WarBoardPieceData__int__TypeInfo, v45, v46, v47);
    System_Func_object__int____ctor(_9__82_0, v51, Method_WarBoardData___c__SetContinue_b__82_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__82_0 = (struct System_Func_WarBoardPieceData__int__o *)_9__82_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__82_0,
      (int64_t)_9__82_0,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
  }
  v59 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v49,
                                                               (System_Func_TSource__TKey__o *)_9__82_0,
                                                               (const MethodInfo_2F3B394 *)Method_System_Linq_Enumerable_OrderBy_WarBoardPieceData__int___);
  v60 = System_Linq_Enumerable__ToArray_object_(
          v59,
          (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
  v64 = WarBoardData___c_TypeInfo;
  v65 = (System_Collections_Generic_IEnumerable_TSource__o *)v60;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, v61);
    v64 = WarBoardData___c_TypeInfo;
  }
  _9__82_1 = (System_Func_object__object__o *)v64->static_fields->__9__82_1;
  if ( !_9__82_1 )
  {
    if ( !v64->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v64, v61);
      v64 = WarBoardData___c_TypeInfo;
    }
    v67 = (Il2CppObject *)v64->static_fields->__9;
    _9__82_1 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                  System_Func_WarBoardPieceData__BattleServantData__TypeInfo,
                                                  v61,
                                                  v62,
                                                  v63);
    System_Func_object__object____ctor(_9__82_1, v67, Method_WarBoardData___c__SetContinue_b__82_1__, 0LL);
    v68 = WarBoardData___c_TypeInfo->static_fields;
    v68->__9__82_1 = (struct System_Func_WarBoardPieceData__BattleServantData__o *)_9__82_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v68->__9__82_1, (int64_t)_9__82_1, v69, v70, v71, v72, v73, v74);
  }
  v75 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                         v65,
                                                         (System_Func_TSource__TResult__o *)_9__82_1,
                                                         (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__BattleServantData___);
  v76 = BasicHelper__ExcludeNull_object_(
          v75,
          (const MethodInfo_2EFE5E8 *)Method_BasicHelper_ExcludeNull_BattleServantData___);
  v77 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v76,
          (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  v81 = WarBoardData___c_TypeInfo;
  v82 = (BattleServantData_array *)v77;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, v78);
    v81 = WarBoardData___c_TypeInfo;
  }
  _9__82_2 = (System_Func_object__bool__o *)v81->static_fields->__9__82_2;
  if ( !_9__82_2 )
  {
    if ( !v81->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v81, v78);
      v81 = WarBoardData___c_TypeInfo;
    }
    v84 = (Il2CppObject *)v81->static_fields->__9;
    _9__82_2 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarBoardPieceData__bool__TypeInfo, v78, v79, v80);
    System_Func_object__bool____ctor(_9__82_2, v84, Method_WarBoardData___c__SetContinue_b__82_2__, 0LL);
    v85 = WarBoardData___c_TypeInfo->static_fields;
    v85->__9__82_2 = (struct System_Func_WarBoardPieceData__bool__o *)_9__82_2;
    sub_1BCA784((PartyOrganizationUtility_o *)&v85->__9__82_2, (int64_t)_9__82_2, v86, v87, v88, v89, v90, v91);
  }
  v92 = System_Linq_Enumerable__Where_object_(
          v65,
          (System_Func_TSource__bool__o *)_9__82_2,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  v96 = WarBoardData___c_TypeInfo;
  v97 = v92;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, v93);
    v96 = WarBoardData___c_TypeInfo;
  }
  _9__82_3 = (System_Func_object__int__o *)v96->static_fields->__9__82_3;
  if ( !_9__82_3 )
  {
    if ( !v96->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v96, v93);
      v96 = WarBoardData___c_TypeInfo;
    }
    v99 = (Il2CppObject *)v96->static_fields->__9;
    _9__82_3 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_WarBoardPieceData__int__TypeInfo, v93, v94, v95);
    System_Func_object__int____ctor(_9__82_3, v99, Method_WarBoardData___c__SetContinue_b__82_3__, 0LL);
    v100 = WarBoardData___c_TypeInfo->static_fields;
    v100->__9__82_3 = (struct System_Func_WarBoardPieceData__int__o *)_9__82_3;
    sub_1BCA784((PartyOrganizationUtility_o *)&v100->__9__82_3, (int64_t)_9__82_3, v101, v102, v103, v104, v105, v106);
  }
  v107 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                          v97,
                                                          (System_Func_TSource__TResult__o *)_9__82_3,
                                                          (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___);
  v111 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_HashSet_int__TypeInfo,
                                                        v108,
                                                        v109,
                                                        v110);
  System_Collections_Generic_HashSet_int____ctor_54873236(
    v111,
    v107,
    (const MethodInfo_3454C94 *)Method_System_Collections_Generic_HashSet_int___ctor___76767240);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (Il2CppObject *)Instance[36].monitor;
  if ( !Instance )
    goto LABEL_42;
  BattleData__ProcContinue((BattleData_o *)Instance, v82, v111, 0LL);
  v117 = WarBoardData___c_TypeInfo;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, v114);
    v117 = WarBoardData___c_TypeInfo;
  }
  _9__82_4 = (System_Action_object__o *)v117->static_fields->__9__82_4;
  if ( !_9__82_4 )
  {
    if ( !v117->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v117, v114);
      v117 = WarBoardData___c_TypeInfo;
    }
    v119 = (Il2CppObject *)v117->static_fields->__9;
    _9__82_4 = (System_Action_object__o *)sub_1BCAA2C(System_Action_WarBoardPieceData__TypeInfo, v114, v115, v116);
    System_Action_object____ctor(_9__82_4, v119, Method_WarBoardData___c__SetContinue_b__82_4__, 0LL);
    v120 = WarBoardData___c_TypeInfo->static_fields;
    v120->__9__82_4 = (struct System_Action_WarBoardPieceData__o *)_9__82_4;
    sub_1BCA784((PartyOrganizationUtility_o *)&v120->__9__82_4, (int64_t)_9__82_4, v121, v122, v123, v124, v125, v126);
  }
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)v65,
    (System_Action_T__o *)_9__82_4,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_WarBoardPieceData___);
  items = this->fields.items;
  if ( !items )
    goto LABEL_42;
  max_length = items->max_length;
  if ( max_length >= 1 )
  {
    v129 = 0;
    while ( 1 )
    {
      if ( v129 >= max_length )
        sub_1BCAA44(Instance, v113);
      Instance = (Il2CppObject *)items->m_Items[v129];
      if ( !Instance )
        break;
      WarBoardItemData__ResetItem((WarBoardItemData_o *)Instance, 0LL);
      max_length = items->max_length;
      if ( (int)++v129 >= max_length )
        return;
    }
LABEL_42:
    sub_1BCAA3C(Instance, v113);
  }
}


void __fastcall WarBoardData__SetPlayerMasterUserEquip(
        WarBoardData_o *this,
        int64_t userEquipId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  WarBoardData___c_c *v12; // x0
  System_Object_array *pieces; // x20
  System_Predicate_object__o *_9__144_0; // x21
  Il2CppObject *v15; // x22
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  Il2CppObject *object; // x0

  if ( (byte_4B13E2E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Find_WarBoardPieceData___, userEquipId, method);
    sub_1BCA7E0(&System_Predicate_WarBoardPieceData__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_WarBoardData___c__SetPlayerMasterUserEquip_b__144_0__, v8, v9);
    sub_1BCA7E0(&WarBoardData___c_TypeInfo, v10, v11);
    byte_4B13E2E = 1;
  }
  v12 = WarBoardData___c_TypeInfo;
  pieces = (System_Object_array *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, userEquipId);
    v12 = WarBoardData___c_TypeInfo;
  }
  _9__144_0 = (System_Predicate_object__o *)v12->static_fields->__9__144_0;
  if ( !_9__144_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12, userEquipId);
      v12 = WarBoardData___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__144_0 = (System_Predicate_object__o *)sub_1BCAA2C(
                                                System_Predicate_WarBoardPieceData__TypeInfo,
                                                userEquipId,
                                                method,
                                                v3);
    System_Predicate_object____ctor(_9__144_0, v15, Method_WarBoardData___c__SetPlayerMasterUserEquip_b__144_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__144_0 = (struct System_Predicate_WarBoardPieceData__o *)_9__144_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__144_0,
      (int64_t)_9__144_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  object = System_Array__Find_object_(
             pieces,
             (System_Predicate_T__o *)_9__144_0,
             (const MethodInfo_300CA48 *)Method_System_Array_Find_WarBoardPieceData___);
  if ( object )
    WarBoardPieceData__SetMasterEquip((WarBoardPieceData_o *)object, userEquipId, 0LL);
}


void __fastcall WarBoardData__SetRequest(WarBoardData_o *this, RequestBase_o *request, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  WarBoardData___c_c *v50; // x0
  System_Collections_Generic_IEnumerable_T__o *pieces; // x21
  System_Action_object__o *_9__156_0; // x22
  Il2CppObject *v53; // x23
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  Il2CppObject *v61; // x0
  __int64 v62; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  Il2CppObject *p_obj; // x21
  __int64 v65; // x1
  System_Byte_array *v66; // x21
  __int64 v67; // x1
  System_Byte_array *v68; // x21
  System_String_o *v69; // x0
  struct WarBoardDataEntity_o *v70; // x8
  Il2CppObject *v71; // x0
  System_Byte_array *v72; // x0
  System_Byte_array *v73; // x0
  System_String_o *v74; // x0
  __int64 v75; // x2
  __int64 v76; // x3
  System_Collections_Generic_IEnumerable_TSource__o *items; // x23
  WarBoardData___c_c *v78; // x0
  System_String_o *v79; // x22
  System_String_o *v80; // x21
  System_Func_object__object__o *_9__156_1; // x24
  __int64 v82; // x1
  System_Byte_array *v83; // x21
  System_Byte_array *v84; // x0
  __int64 v85; // x1
  System_Convert_c *v86; // x8
  System_Byte_array *v87; // x21
  Il2CppObject *v88; // x25
  struct WarBoardData___c_StaticFields *v89; // x0
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v96; // x0
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x3
  WarBoardData___c_c *v100; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v101; // x23
  System_Func_object__bool__o *_9__156_2; // x24
  Il2CppObject *v103; // x25
  struct WarBoardData___c_StaticFields *v104; // x0
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v111; // x0
  System_String_array *v112; // x0
  Il2CppObject *v113; // x0
  Il2CppObject *v114; // x0
  __int64 v115; // x1
  System_Byte_array *v116; // x21
  System_Byte_array *v117; // x0
  System_String_o *v118; // x0
  struct WarBoardDataEntity_o *v119; // x8
  Il2CppObject *v120; // x21
  Il2CppObject *v121; // x0
  __int64 v122; // x1
  System_Byte_array *v123; // x21
  __int64 v124; // x1
  System_Byte_array *v125; // x21
  System_String_o *v126; // x0
  struct WarBoardDataEntity_o *v127; // x8
  Il2CppObject *v128; // x0
  System_Byte_array *v129; // x0
  System_Byte_array *v130; // x0
  System_String_o *v131; // x0
  struct WarBoardDataEntity_o *v132; // x8
  Il2CppObject *v133; // x0
  System_Byte_array *v134; // x0
  System_Byte_array *v135; // x0
  System_String_o *v136; // x2

  if ( (byte_4B13E37 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_WarBoardPieceData__TypeInfo, request, method);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_WarBoardPieceData___, v6, v7);
    sub_1BCA7E0(&CatAndMouseGame_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Convert_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_WarBoardItemData__string___, v12, v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_string___, v14, v15);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_string___, v16, v17);
    sub_1BCA7E0(&System_Func_WarBoardItemData__string__TypeInfo, v18, v19);
    sub_1BCA7E0(&System_Func_string__bool__TypeInfo, v20, v21);
    sub_1BCA7E0(&JsonManager_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_WarBoardData___c__SetRequest_b__156_0__, v24, v25);
    sub_1BCA7E0(&Method_WarBoardData___c__SetRequest_b__156_1__, v26, v27);
    sub_1BCA7E0(&Method_WarBoardData___c__SetRequest_b__156_2__, v28, v29);
    sub_1BCA7E0(&WarBoardData___c_TypeInfo, v30, v31);
    sub_1BCA7E0(&StringLiteral_17555/*"bossBattleInfo"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_23957/*"svtInfo"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_21538/*"masterInfo"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_24859/*"wallInfo"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_22414/*"null"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_23704/*"squareIndexInfo"*/, v42, v43);
    sub_1BCA7E0(&StringLiteral_19957/*"getItemInfo"*/, v44, v45);
    sub_1BCA7E0(&StringLiteral_863/*","*/, v46, v47);
    sub_1BCA7E0(&StringLiteral_16191/*"[{0}]"*/, v48, v49);
    byte_4B13E37 = 1;
  }
  v50 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_T__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, request);
    v50 = WarBoardData___c_TypeInfo;
  }
  _9__156_0 = (System_Action_object__o *)v50->static_fields->__9__156_0;
  if ( !_9__156_0 )
  {
    if ( !v50->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v50, request);
      v50 = WarBoardData___c_TypeInfo;
    }
    v53 = (Il2CppObject *)v50->static_fields->__9;
    _9__156_0 = (System_Action_object__o *)sub_1BCAA2C(System_Action_WarBoardPieceData__TypeInfo, request, method, v3);
    System_Action_object____ctor(_9__156_0, v53, Method_WarBoardData___c__SetRequest_b__156_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__156_0 = (struct System_Action_WarBoardPieceData__o *)_9__156_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__156_0,
      (int64_t)_9__156_0,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
  }
  BasicHelper__ForEach_object_(
    pieces,
    (System_Action_T__o *)_9__156_0,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_WarBoardPieceData___);
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_51;
  p_obj = &serverData->fields.svtInfo->obj;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v62);
  v61 = (Il2CppObject *)JsonManager__toJson(p_obj, 0, 0, 0LL);
  if ( !request )
    goto LABEL_51;
  v66 = RequestBase__PackToMessagePack(request, v61, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v65);
  v68 = CatAndMouseGame__CatGame5Bytes(v66, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v67);
  v69 = System_Convert__ToBase64String(v68, 0LL);
  RequestBase__addField_41862348(request, (System_String_o *)StringLiteral_23957/*"svtInfo"*/, v69, 0LL);
  v70 = this->fields.serverData;
  if ( !v70
    || (v71 = (Il2CppObject *)JsonManager__toJson(&v70->fields.masterInfo->obj, 0, 0, 0LL),
        v72 = RequestBase__PackToMessagePack(request, v71, 0LL),
        v73 = CatAndMouseGame__CatGame5Bytes(v72, 0LL),
        v74 = System_Convert__ToBase64String(v73, 0LL),
        RequestBase__addField_41862348(request, (System_String_o *)StringLiteral_21538/*"masterInfo"*/, v74, 0LL),
        (items = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.items) == 0LL) )
  {
LABEL_51:
    sub_1BCAA3C(v61, v62);
  }
  if ( items[1].monitor )
  {
    v78 = WarBoardData___c_TypeInfo;
    if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, v62);
      v78 = WarBoardData___c_TypeInfo;
    }
    v79 = (System_String_o *)StringLiteral_863/*","*/;
    v80 = (System_String_o *)StringLiteral_16191/*"[{0}]"*/;
    _9__156_1 = (System_Func_object__object__o *)v78->static_fields->__9__156_1;
    if ( !_9__156_1 )
    {
      if ( !v78->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v78, v62);
        v78 = WarBoardData___c_TypeInfo;
      }
      v88 = (Il2CppObject *)v78->static_fields->__9;
      _9__156_1 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                     System_Func_WarBoardItemData__string__TypeInfo,
                                                     v62,
                                                     v75,
                                                     v76);
      System_Func_object__object____ctor(_9__156_1, v88, Method_WarBoardData___c__SetRequest_b__156_1__, 0LL);
      v89 = WarBoardData___c_TypeInfo->static_fields;
      v89->__9__156_1 = (struct System_Func_WarBoardItemData__string__o *)_9__156_1;
      sub_1BCA784((PartyOrganizationUtility_o *)&v89->__9__156_1, (int64_t)_9__156_1, v90, v91, v92, v93, v94, v95);
    }
    v96 = System_Linq_Enumerable__Select_object__object_(
            items,
            (System_Func_TSource__TResult__o *)_9__156_1,
            (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_WarBoardItemData__string___);
    v100 = WarBoardData___c_TypeInfo;
    v101 = (System_Collections_Generic_IEnumerable_TSource__o *)v96;
    if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, v97);
      v100 = WarBoardData___c_TypeInfo;
    }
    _9__156_2 = (System_Func_object__bool__o *)v100->static_fields->__9__156_2;
    if ( !_9__156_2 )
    {
      if ( !v100->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v100, v97);
        v100 = WarBoardData___c_TypeInfo;
      }
      v103 = (Il2CppObject *)v100->static_fields->__9;
      _9__156_2 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_string__bool__TypeInfo, v97, v98, v99);
      System_Func_object__bool____ctor(_9__156_2, v103, Method_WarBoardData___c__SetRequest_b__156_2__, 0LL);
      v104 = WarBoardData___c_TypeInfo->static_fields;
      v104->__9__156_2 = (struct System_Func_string__bool__o *)_9__156_2;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v104->__9__156_2,
        (int64_t)_9__156_2,
        v105,
        v106,
        v107,
        v108,
        v109,
        v110);
    }
    v111 = System_Linq_Enumerable__Where_object_(
             v101,
             (System_Func_TSource__bool__o *)_9__156_2,
             (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_string___);
    v112 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                    v111,
                                    (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_string___);
    v113 = (Il2CppObject *)System_String__Join(v79, v112, 0LL);
    v114 = (Il2CppObject *)System_String__Format(v80, v113, 0LL);
    v116 = RequestBase__PackToMessagePack(request, v114, 0LL);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v115);
    v117 = CatAndMouseGame__CatGame5Bytes(v116, 0LL);
    v86 = System_Convert_TypeInfo;
    v87 = v117;
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
LABEL_40:
      j_il2cpp_runtime_class_init_0(v86, v85);
  }
  else
  {
    v83 = RequestBase__PackToMessagePack(request, (Il2CppObject *)StringLiteral_22414/*"null"*/, 0LL);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v82);
    v84 = CatAndMouseGame__CatGame5Bytes(v83, 0LL);
    v86 = System_Convert_TypeInfo;
    v87 = v84;
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      goto LABEL_40;
  }
  v118 = System_Convert__ToBase64String(v87, 0LL);
  RequestBase__addField_41862348(request, (System_String_o *)StringLiteral_19957/*"getItemInfo"*/, v118, 0LL);
  v119 = this->fields.serverData;
  if ( !v119 )
    goto LABEL_51;
  v120 = &v119->fields.wallInfo->obj;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v62);
  v121 = (Il2CppObject *)JsonManager__toJson(v120, 0, 0, 0LL);
  v123 = RequestBase__PackToMessagePack(request, v121, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v122);
  v125 = CatAndMouseGame__CatGame5Bytes(v123, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v124);
  v126 = System_Convert__ToBase64String(v125, 0LL);
  RequestBase__addField_41862348(request, (System_String_o *)StringLiteral_24859/*"wallInfo"*/, v126, 0LL);
  v127 = this->fields.serverData;
  if ( !v127 )
    goto LABEL_51;
  v128 = (Il2CppObject *)JsonManager__toJson(&v127->fields.squareIndexInfo->obj, 0, 0, 0LL);
  v129 = RequestBase__PackToMessagePack(request, v128, 0LL);
  v130 = CatAndMouseGame__CatGame5Bytes(v129, 0LL);
  v131 = System_Convert__ToBase64String(v130, 0LL);
  RequestBase__addField_41862348(request, (System_String_o *)StringLiteral_23704/*"squareIndexInfo"*/, v131, 0LL);
  v132 = this->fields.serverData;
  if ( !v132 )
    goto LABEL_51;
  v133 = (Il2CppObject *)JsonManager__toJson(&v132->fields.bossBattleInfo->obj, 0, 0, 0LL);
  v134 = RequestBase__PackToMessagePack(request, v133, 0LL);
  v135 = CatAndMouseGame__CatGame5Bytes(v134, 0LL);
  v136 = System_Convert__ToBase64String(v135, 0LL);
  RequestBase__addField_41862348(request, (System_String_o *)StringLiteral_17555/*"bossBattleInfo"*/, v136, 0LL);
}


void __fastcall WarBoardData__SetUiDataFromLocalData(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_object__o *listUiData; // x0
  _BOOL8 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x5
  Il2CppObject *current; // x25
  __int64 klass_low; // x1
  WarBoardSquareData_o *Square; // x0
  __int64 v22; // x1
  void *pieceComponent; // x8
  _DWORD *monitor; // x8
  unsigned int v25; // w9
  WarBoardPieceData_o *Piece; // x0
  UnityEngine_Object_o *v27; // x20
  _BOOL8 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x1
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B13E55 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&WarBoardControlUiDataComponent_TypeInfo, v12, v13);
    byte_4B13E55 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  listUiData = (System_Collections_Generic_List_object__o *)this->fields.listUiData;
  if ( !listUiData )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    listUiData,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__);
  v32 = v31;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__);
    if ( !v15 )
      break;
    current = v32.fields._current;
    if ( !v32.fields._current )
      sub_1BCAA3C(v15, v16);
    klass_low = LODWORD(v32.fields._current[1].klass);
    if ( (klass_low & 0x80000000) != 0 )
    {
      monitor = v32.fields._current[1].monitor;
      if ( !monitor )
        sub_1BCAA3C(v15, klass_low);
      v25 = monitor[6];
      if ( !v25 )
        sub_1BCAA44(v15, klass_low);
      if ( v25 == 1 )
        sub_1BCAA44(v15, klass_low);
      if ( v25 <= 2 )
        sub_1BCAA44(v15, klass_low);
      Piece = WarBoardData__GetPiece(this, monitor[8], monitor[9], monitor[10], 1, v18);
      if ( Piece )
      {
        pieceComponent = Piece->fields.pieceComponent;
        if ( !pieceComponent )
          sub_1BCAA3C(Piece, v22);
LABEL_17:
        v27 = (UnityEngine_Object_o *)*((_QWORD *)pieceComponent + 23);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
        v28 = UnityEngine_Object__op_Equality(v27, 0LL, 0LL);
        if ( !v28 )
        {
          if ( !v27 )
            sub_1BCAA3C(v28, v29);
          WarBoardControlUiDataComponent__SetUiDataFromLocalData(
            (WarBoardControlUiDataComponent_o *)v27,
            (System_String_array *)current[2].klass,
            0LL);
        }
      }
    }
    else
    {
      Square = WarBoardData__GetSquare(this, klass_low, v17);
      if ( Square )
      {
        pieceComponent = Square->fields.squareComponent;
        if ( !pieceComponent )
          sub_1BCAA3C(Square, v22);
        goto LABEL_17;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__);
  if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo, v30);
  WarBoardControlUiDataComponent__ResumeUiDataAll(0LL);
}


void __fastcall WarBoardData__ShowConsumedPieceActionPointPopup(
        WarBoardData_o *this,
        System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___o *consumedPieceActionPointDict,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x19
  System_Collections_Generic_Dictionary_int__object__o *v25; // x0
  __int64 v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_Func_bool__o *v42; // x20
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  UnityEngine_WaitUntil_o *v46; // x21
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  int64_t v50; // x20
  __int64 v51; // x2
  __int64 v52; // x3
  System_Delegate_o **v53; // x21
  System_Delegate_o *v54; // x22
  WarBoardTaskBase_TaskCallback_o *v55; // x23
  System_Delegate_o *v56; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  WarBoardTaskBase_TaskCallback_c *v63; // x1
  Il2CppObject *Instance; // x19
  System_Collections_Generic_Dictionary_int__object__o *v65; // x21
  __int64 v66; // x0
  __int64 v67; // x1
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  __int64 v74; // x0

  if ( (byte_4B13E35 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__,
      consumedPieceActionPointDict,
      method);
    sub_1BCA7E0(&System_Func_bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&WarBoardTaskBase_TaskCallback_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__0__, v12, v13);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__1__, v14, v15);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass154_0_TypeInfo, v16, v17);
    sub_1BCA7E0(&UnityEngine_WaitUntil_TypeInfo, v18, v19);
    sub_1BCA7E0(&WarBoardCallbackTask_TypeInfo, v20, v21);
    sub_1BCA7E0(&WarBoardTaskBase___TypeInfo, v22, v23);
    byte_4B13E35 = 1;
  }
  v24 = sub_1BCAA2C(WarBoardData___c__DisplayClass154_0_TypeInfo, consumedPieceActionPointDict, method, v3);
  WarBoardData___c__DisplayClass154_0___ctor((WarBoardData___c__DisplayClass154_0_o *)v24, 0LL);
  if ( !v24 )
    goto LABEL_18;
  *(_QWORD *)(v24 + 24) = consumedPieceActionPointDict;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)(v24 + 24),
    (int64_t)consumedPieceActionPointDict,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  *(_QWORD *)(v24 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 32), (int64_t)this, v33, v34, v35, v36, v37, v38);
  v25 = *(System_Collections_Generic_Dictionary_int__object__o **)(v24 + 24);
  if ( !v25 )
    goto LABEL_18;
  if ( System_Collections_Generic_Dictionary_int__object___get_Count(
         v25,
         (const MethodInfo_3205B94 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__) < 1 )
    return;
  *(_BYTE *)(v24 + 16) = 0;
  v42 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v39, v40, v41);
  System_Func_bool____ctor(
    v42,
    (Il2CppObject *)v24,
    Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__0__,
    0LL);
  v46 = (UnityEngine_WaitUntil_o *)sub_1BCAA2C(UnityEngine_WaitUntil_TypeInfo, v43, v44, v45);
  UnityEngine_WaitUntil___ctor(v46, v42, 0LL);
  v50 = sub_1BCAA2C(WarBoardCallbackTask_TypeInfo, v47, v48, v49);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v50, (UnityEngine_CustomYieldInstruction_o *)v46, 0LL);
  if ( !v50 )
LABEL_18:
    sub_1BCAA3C(v25, v26);
  v53 = (System_Delegate_o **)(v50 + 32);
  v54 = *(System_Delegate_o **)(v50 + 32);
  v55 = (WarBoardTaskBase_TaskCallback_o *)sub_1BCAA2C(WarBoardTaskBase_TaskCallback_TypeInfo, v26, v51, v52);
  WarBoardTaskBase_TaskCallback___ctor(
    v55,
    (Il2CppObject *)v24,
    Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__1__,
    0LL);
  v56 = System_Delegate__Combine(v54, (System_Delegate_o *)v55, 0LL);
  if ( !v56 )
  {
    *v53 = 0LL;
LABEL_13:
    sub_1BCA784((PartyOrganizationUtility_o *)(v50 + 32), (int64_t)v56, v57, v58, v59, v60, v61, v62);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v25 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCA888(WarBoardTaskBase___TypeInfo, 1LL);
    if ( v25 )
    {
      v65 = v25;
      v66 = sub_1BCA91C(v50, v25->klass->_1.element_class);
      if ( !v66 )
      {
        v74 = sub_1BCAA60(0LL);
        sub_1BCA908(v74, 0LL);
      }
      if ( !LODWORD(v65->fields._entries) )
        sub_1BCAA44(v66, v67);
      *(_QWORD *)&v65->fields._count = v50;
      sub_1BCA784((PartyOrganizationUtility_o *)&v65->fields._count, v50, v68, v69, v70, v71, v72, v73);
      if ( Instance )
      {
        WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 1, (WarBoardTaskBase_array *)v65, 0LL);
        return;
      }
    }
    goto LABEL_18;
  }
  v63 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v56->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    *v53 = v56;
    if ( (WarBoardTaskBase_TaskCallback_c *)v56->klass == v63 )
      goto LABEL_13;
  }
  sub_1BCACFC(v56);
}


System_String_o *__fastcall WarBoardData__ToJson(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *serverData; // x19

  if ( (byte_4B13E36 & 1) == 0 )
  {
    sub_1BCA7E0(&JsonManager_TypeInfo, method, v2);
    sub_1BCA7E0(&string_TypeInfo, v4, v5);
    byte_4B13E36 = 1;
  }
  serverData = (Il2CppObject *)this->fields.serverData;
  if ( !serverData )
    return string_TypeInfo->static_fields->Empty;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, method);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  WarBoardData___c__DisplayClass171_0_o *v19; // x23
  Il2CppObject *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  struct WarBoardDataEntity_o *serverData; // x8
  System_Object_array *bossBattleInfo; // x21
  System_Func_object__bool__o *v26; // x22
  Il2CppObject *object; // x0
  System_Collections_Generic_Dictionary_object__object__o *monitor; // x21
  int32_t v29; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B13E3E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Find_WarBoardBossBattleData___, *(_QWORD *)&bossId, key);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v9, v10);
    sub_1BCA7E0(&System_Func_WarBoardBossBattleData__bool__TypeInfo, v11, v12);
    sub_1BCA7E0(&int_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass171_0__UpdateBossInfo_b__0__, v15, v16);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass171_0_TypeInfo, v17, v18);
    byte_4B13E3E = 1;
  }
  v19 = (WarBoardData___c__DisplayClass171_0_o *)sub_1BCAA2C(
                                                   WarBoardData___c__DisplayClass171_0_TypeInfo,
                                                   *(_QWORD *)&bossId,
                                                   key,
                                                   *(_QWORD *)&value);
  WarBoardData___c__DisplayClass171_0___ctor(v19, 0LL);
  if ( !v19 )
    goto LABEL_9;
  v19->fields.bossId = bossId;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_9;
  bossBattleInfo = (System_Object_array *)serverData->fields.bossBattleInfo;
  v26 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarBoardBossBattleData__bool__TypeInfo, v21, v22, v23);
  System_Func_object__bool____ctor(
    v26,
    (Il2CppObject *)v19,
    Method_WarBoardData___c__DisplayClass171_0__UpdateBossInfo_b__0__,
    0LL);
  object = BasicHelper__Find_object_(
             bossBattleInfo,
             (System_Func_T__bool__o *)v26,
             (const MethodInfo_2EFE860 *)Method_BasicHelper_Find_WarBoardBossBattleData___);
  if ( !object )
    return;
  monitor = (System_Collections_Generic_Dictionary_object__object__o *)object[1].monitor;
  v29 = value;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
  if ( !monitor )
LABEL_9:
    sub_1BCAA3C(v20, v21);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    monitor,
    (Il2CppObject *)key,
    v20,
    (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
}


void __fastcall WarBoardData__UpdateBuffTurnNoticeDisp(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  WarBoardData___c_c *v23; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__object__o *_9__192_0; // x20
  Il2CppObject *v26; // x21
  PartyOrganizationUtility_o *p__9__192_0; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v34; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  WarBoardData___c_c *v38; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x19
  System_Func_object__bool__o *_9__192_1; // x20
  Il2CppObject *v41; // x21
  PartyOrganizationUtility_o *p__9__192_1; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  WarBoardData___c_c *v53; // x8
  System_Collections_Generic_IEnumerable_T__o *v54; // x19
  System_Action_object__o *_9__192_2; // x20
  Il2CppObject *v56; // x21
  PartyOrganizationUtility_o *p__9__192_2; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7

  if ( (byte_4B13E50 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_WarBoardPieceBaseComponent__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_WarBoardPieceBaseComponent___, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__WarBoardPieceBaseComponent___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_WarBoardPieceBaseComponent___, v9, v10);
    sub_1BCA7E0(&System_Func_WarBoardPieceBaseComponent__bool__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Func_WarBoardPieceData__WarBoardPieceBaseComponent__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_0__, v15, v16);
    sub_1BCA7E0(&Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_1__, v17, v18);
    sub_1BCA7E0(&Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_2__, v19, v20);
    sub_1BCA7E0(&WarBoardData___c_TypeInfo, v21, v22);
    byte_4B13E50 = 1;
  }
  v23 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, method);
    v23 = WarBoardData___c_TypeInfo;
  }
  _9__192_0 = (System_Func_object__object__o *)v23->static_fields->__9__192_0;
  if ( !_9__192_0 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23, method);
      v23 = WarBoardData___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v23->static_fields->__9;
    _9__192_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                   System_Func_WarBoardPieceData__WarBoardPieceBaseComponent__TypeInfo,
                                                   method,
                                                   v2,
                                                   v3);
    System_Func_object__object____ctor(
      _9__192_0,
      v26,
      Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_0__,
      0LL);
    p__9__192_0 = (PartyOrganizationUtility_o *)&WarBoardData___c_TypeInfo->static_fields->__9__192_0;
    p__9__192_0->klass = (PartyOrganizationUtility_c *)_9__192_0;
    sub_1BCA784(p__9__192_0, (int64_t)_9__192_0, v28, v29, v30, v31, v32, v33);
  }
  v34 = System_Linq_Enumerable__Select_object__object_(
          pieces,
          (System_Func_TSource__TResult__o *)_9__192_0,
          (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__WarBoardPieceBaseComponent___);
  v38 = WarBoardData___c_TypeInfo;
  v39 = (System_Collections_Generic_IEnumerable_TSource__o *)v34;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, v35);
    v38 = WarBoardData___c_TypeInfo;
  }
  _9__192_1 = (System_Func_object__bool__o *)v38->static_fields->__9__192_1;
  if ( !_9__192_1 )
  {
    if ( !v38->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v38, v35);
      v38 = WarBoardData___c_TypeInfo;
    }
    v41 = (Il2CppObject *)v38->static_fields->__9;
    _9__192_1 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                 System_Func_WarBoardPieceBaseComponent__bool__TypeInfo,
                                                 v35,
                                                 v36,
                                                 v37);
    System_Func_object__bool____ctor(_9__192_1, v41, Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_1__, 0LL);
    p__9__192_1 = (PartyOrganizationUtility_o *)&WarBoardData___c_TypeInfo->static_fields->__9__192_1;
    p__9__192_1->klass = (PartyOrganizationUtility_c *)_9__192_1;
    sub_1BCA784(p__9__192_1, (int64_t)_9__192_1, v43, v44, v45, v46, v47, v48);
  }
  v49 = System_Linq_Enumerable__Where_object_(
          v39,
          (System_Func_TSource__bool__o *)_9__192_1,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_WarBoardPieceBaseComponent___);
  v53 = WarBoardData___c_TypeInfo;
  v54 = (System_Collections_Generic_IEnumerable_T__o *)v49;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, v50);
    v53 = WarBoardData___c_TypeInfo;
  }
  _9__192_2 = (System_Action_object__o *)v53->static_fields->__9__192_2;
  if ( !_9__192_2 )
  {
    if ( !v53->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v53, v50);
      v53 = WarBoardData___c_TypeInfo;
    }
    v56 = (Il2CppObject *)v53->static_fields->__9;
    _9__192_2 = (System_Action_object__o *)sub_1BCAA2C(
                                             System_Action_WarBoardPieceBaseComponent__TypeInfo,
                                             v50,
                                             v51,
                                             v52);
    System_Action_object____ctor(_9__192_2, v56, Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_2__, 0LL);
    p__9__192_2 = (PartyOrganizationUtility_o *)&WarBoardData___c_TypeInfo->static_fields->__9__192_2;
    p__9__192_2->klass = (PartyOrganizationUtility_c *)_9__192_2;
    sub_1BCA784(p__9__192_2, (int64_t)_9__192_2, v58, v59, v60, v61, v62, v63);
  }
  BasicHelper__ForEach_object_(
    v54,
    (System_Action_T__o *)_9__192_2,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_WarBoardPieceBaseComponent___);
}


void __fastcall WarBoardData__UpdateCurrentPartyCost(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x20
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  System_Collections_Generic_List_long__o *v37; // x21
  const MethodInfo *v38; // x1
  WarBoardPieceData_array *EditableServantPieces; // x0
  int64_t UserServantId_k__BackingField; // x1
  long double v41; // q0
  int max_length; // w8
  WarBoardPieceData_array *v43; // x22
  unsigned int v44; // w23
  WarBoardPieceData_o *v45; // x25
  int32_t version; // w11
  struct System_Int64_array *items; // x9
  _QWORD *v48; // x8
  __int64 size; // x12
  int32_t v50; // w10
  __int64 v51; // x0
  __int64 v52; // x0
  UserServantEntity_array *Entities_41000708; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  WarBoardData___c_c *v57; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x21
  System_Func_object__int__o *_9__143_0; // x22
  Il2CppObject *v60; // x23
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  System_Func_object__bool__o *v77; // x22

  if ( (byte_4B13E2D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_UserServantEntity___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Sum_UserServantEntity___, v9, v10);
    sub_1BCA7E0(&System_Func_UserServantEntity__bool__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Func_UserServantEntity__int__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    sub_1BCA7E0(&Method_WarBoardData___c__UpdateCurrentPartyCost_b__143_0__, v25, v26);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass143_0__UpdateCurrentPartyCost_b__1__, v27, v28);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass143_0_TypeInfo, v29, v30);
    sub_1BCA7E0(&WarBoardData___c_TypeInfo, v31, v32);
    byte_4B13E2D = 1;
  }
  v33 = sub_1BCAA2C(WarBoardData___c__DisplayClass143_0_TypeInfo, method, v2, v3);
  WarBoardData___c__DisplayClass143_0___ctor((WarBoardData___c__DisplayClass143_0_o *)v33, 0LL);
  v37 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v34,
                                                     v35,
                                                     v36);
  System_Collections_Generic_List_long____ctor(
    v37,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  EditableServantPieces = WarBoardData__GetEditableServantPieces(this, v38);
  if ( !EditableServantPieces )
    goto LABEL_33;
  max_length = EditableServantPieces->max_length;
  v43 = EditableServantPieces;
  if ( max_length >= 1 )
  {
    v44 = 0;
    while ( 1 )
    {
      if ( v44 >= max_length )
        sub_1BCAA44(EditableServantPieces, UserServantId_k__BackingField);
      v45 = v43->m_Items[v44];
      if ( !v45 )
        break;
      if ( !v37 )
        break;
      version = v37->fields._version;
      UserServantId_k__BackingField = v45->fields._UserServantId_k__BackingField;
      items = v37->fields._items;
      v48 = Method_System_Collections_Generic_List_long__Add__;
      v37->fields._version = version + 1;
      if ( !items )
        break;
      size = v37->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v37,
          UserServantId_k__BackingField,
          *(const MethodInfo_3589C90 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
        v50 = v37->fields._size;
        v48 = Method_System_Collections_Generic_List_long__Add__;
        items = v37->fields._items;
        UserServantId_k__BackingField = v45->fields._UserServantEquipId_k__BackingField;
        ++v37->fields._version;
        if ( !items )
          break;
      }
      else
      {
        v50 = size + 1;
        v37->fields._size = size + 1;
        items->m_Items[size] = UserServantId_k__BackingField;
        UserServantId_k__BackingField = v45->fields._UserServantEquipId_k__BackingField;
        v37->fields._version = version + 2;
      }
      if ( v50 >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v37,
          UserServantId_k__BackingField,
          *(const MethodInfo_3589C90 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
      }
      else
      {
        v37->fields._size = v50 + 1;
        items->m_Items[v50] = UserServantId_k__BackingField;
      }
      max_length = v43->max_length;
      if ( (int)++v44 >= max_length )
        goto LABEL_17;
    }
LABEL_33:
    sub_1BCAA3C(EditableServantPieces, UserServantId_k__BackingField);
  }
LABEL_17:
  v51 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v51 + 309) & 1) == 0 )
    v51 = sub_1C1C6BC(v41);
  v52 = *(_QWORD *)(*(_QWORD *)(v51 + 192) + 16LL);
  if ( (*(_BYTE *)(v52 + 309) & 1) == 0 )
    v52 = sub_1C1C6BC(v41);
  EditableServantPieces = **(WarBoardPieceData_array ***)(v52 + 184);
  if ( !EditableServantPieces )
    goto LABEL_33;
  EditableServantPieces = (WarBoardPieceData_array *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)EditableServantPieces,
                                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !EditableServantPieces )
    goto LABEL_33;
  Entities_41000708 = UserServantMaster__GetEntities_41000708((UserServantMaster_o *)EditableServantPieces, v37, 0LL);
  v57 = WarBoardData___c_TypeInfo;
  v58 = (System_Collections_Generic_IEnumerable_TSource__o *)Entities_41000708;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, v54);
    v57 = WarBoardData___c_TypeInfo;
  }
  _9__143_0 = (System_Func_object__int__o *)v57->static_fields->__9__143_0;
  if ( !_9__143_0 )
  {
    if ( !v57->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v57, v54);
      v57 = WarBoardData___c_TypeInfo;
    }
    v60 = (Il2CppObject *)v57->static_fields->__9;
    _9__143_0 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_UserServantEntity__int__TypeInfo, v54, v55, v56);
    System_Func_object__int____ctor(_9__143_0, v60, Method_WarBoardData___c__UpdateCurrentPartyCost_b__143_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__143_0 = (struct System_Func_UserServantEntity__int__o *)_9__143_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__143_0,
      (int64_t)_9__143_0,
      v62,
      v63,
      v64,
      v65,
      v66,
      v67);
  }
  EditableServantPieces = (WarBoardPieceData_array *)System_Linq_Enumerable__Sum_object_(
                                                       v58,
                                                       (System_Func_TSource__int__o *)_9__143_0,
                                                       (const MethodInfo_2F4A588 *)Method_System_Linq_Enumerable_Sum_UserServantEntity___);
  if ( !this )
    goto LABEL_33;
  this->fields._CurrentPartyCost_k__BackingField = (int)EditableServantPieces;
  EditableServantPieces = (WarBoardPieceData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !EditableServantPieces )
    goto LABEL_33;
  EditableServantPieces = (WarBoardPieceData_array *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)EditableServantPieces,
                                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !v33 )
    goto LABEL_33;
  *(_QWORD *)(v33 + 16) = EditableServantPieces;
  sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 16), (int64_t)EditableServantPieces, v68, v69, v70, v71, v72, v73);
  v77 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_UserServantEntity__bool__TypeInfo, v74, v75, v76);
  System_Func_object__bool____ctor(
    v77,
    (Il2CppObject *)v33,
    Method_WarBoardData___c__DisplayClass143_0__UpdateCurrentPartyCost_b__1__,
    0LL);
  this->fields._CurrentMemberCount_k__BackingField = System_Linq_Enumerable__Count_object__49476864(
                                                       v58,
                                                       (System_Func_TSource__bool__o *)v77,
                                                       (const MethodInfo_2F2F500 *)Method_System_Linq_Enumerable_Count_UserServantEntity___);
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x1
  __int64 v65; // x2
  WarBoardDataEntity_o **p_serverData; // x21
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  WarBoardManager_TaskMultiList_o *v73; // x24
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  WarBoardManager_TaskMultiList_o *v77; // x23
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  System_Collections_Generic_Dictionary_int__object__o *v81; // x20
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  System_Collections_Generic_List_object__o *v85; // x26
  int64_t isPlayerGroup; // x0
  const MethodInfo *klass_high; // x1
  __int64 v88; // x2
  __int64 v89; // x3
  struct WarBoardPieceData_array *pieces; // x25
  int max_length; // w8
  unsigned int v92; // w19
  bool v93; // w27
  WarBoardPieceData_o *v94; // x28
  WarBoardManager_TaskList_o *v95; // x29
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  struct WarBoardManager_TaskList_array *items; // x8
  _QWORD *v103; // x9
  __int64 size; // x10
  Il2CppClass **v105; // x0
  struct WarBoardManager_TaskList_array *v106; // x8
  _QWORD *v107; // x9
  __int64 v108; // x10
  __int64 v109; // x8
  System_Collections_Generic_List_object__o *v110; // x0
  __int64 v111; // x1
  __int64 v112; // x2
  __int64 v113; // x3
  int32_t ConsumedRecoverDonotActCost_k__BackingField; // w29
  System_Collections_Generic_Dictionary_int__object__o *v115; // x21
  System_Collections_Generic_List_object__o *v116; // x20
  System_Collections_Generic_Dictionary_int__object__o *v117; // x0
  Il2CppObject *v118; // x2
  int64_t v119; // x2
  int32_t v120; // w3
  System_String_o *v121; // x4
  BattleSetupInfo_o *v122; // x5
  FollowerInfo_o *v123; // x6
  PartyListViewItem_o *v124; // x7
  struct System_Object_array *v125; // x8
  _QWORD *v126; // x9
  __int64 v127; // x10
  Il2CppClass **v128; // x8
  __int64 v129; // x1
  __int64 v130; // x2
  __int64 v131; // x3
  Il2CppObject *current; // x28
  WarBoardManager_TaskList_o *v133; // x26
  __int64 v134; // x0
  __int64 v135; // x1
  int monitor; // w25
  Il2CppClass *v137; // x0
  __int64 v138; // x0
  __int64 v139; // x1
  int64_t v140; // x2
  int32_t v141; // w3
  System_String_o *v142; // x4
  BattleSetupInfo_o *v143; // x5
  FollowerInfo_o *v144; // x6
  PartyListViewItem_o *v145; // x7
  int monitor_high; // w27
  Il2CppClass *klass; // x0
  Il2CppClass *v148; // x0
  struct WarBoardManager_TaskList_array *v149; // x8
  _QWORD *v150; // x9
  __int64 v151; // x10
  Il2CppClass **v152; // x0
  struct WarBoardManager_TaskList_array *v153; // x8
  _QWORD *v154; // x9
  __int64 v155; // x10
  Il2CppClass **v156; // x0
  const MethodInfo *v157; // x2
  System_Collections_Generic_IEnumerable_T__o *v158; // x0
  __int64 v159; // x2
  __int64 v160; // x3
  int64_t v161; // x2
  int32_t v162; // w3
  System_String_o *v163; // x4
  BattleSetupInfo_o *v164; // x5
  FollowerInfo_o *v165; // x6
  PartyListViewItem_o *v166; // x7
  struct System_Object_array *v167; // x8
  _QWORD *v168; // x9
  __int64 v169; // x10
  int64_t v170; // x1
  Il2CppClass **v171; // x0
  __int64 v172; // x1
  __int64 v173; // x2
  __int64 v174; // x3
  WarBoardWaitNonBlockingTaskEnd_o *v175; // x23
  int64_t v176; // x2
  int32_t v177; // w3
  System_String_o *v178; // x4
  BattleSetupInfo_o *v179; // x5
  FollowerInfo_o *v180; // x6
  PartyListViewItem_o *v181; // x7
  struct System_Object_array *v182; // x8
  _QWORD *v183; // x9
  __int64 v184; // x10
  Il2CppClass **v185; // x0
  struct WarBoardItemData_array *v186; // x19
  int v187; // w8
  unsigned int v188; // w20
  struct WarBoardWallData_array *walls; // x19
  unsigned __int64 v190; // x24
  __int64 v191; // x20
  int64_t v192; // x2
  int32_t v193; // w3
  System_String_o *v194; // x4
  BattleSetupInfo_o *v195; // x5
  FollowerInfo_o *v196; // x6
  PartyListViewItem_o *v197; // x7
  int64_t v198; // x1
  System_Collections_Generic_List_object__o **v199; // x21
  __int64 v200; // x2
  __int64 v201; // x3
  System_Collections_Generic_IEnumerable_TSource__o *wallInfo; // x22
  System_Func_object__bool__o *v203; // x23
  Il2CppObject *v204; // x0
  Il2CppObject *v205; // x8
  System_Collections_Generic_List_object__o *v206; // [xsp+8h] [xbp-B8h]
  WarBoardData_o *v207; // [xsp+10h] [xbp-B0h]
  WarBoardDataEntity_o **v208; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v210; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v211; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4B13E32 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Add__,
      warBoardDataEntity,
      forceUpdate);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___ContainsKey__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData____ctor__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Item__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___, v20, v21);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__Dispose__,
      v22,
      v23);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__MoveNext__,
      v24,
      v25);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__get_Current__,
      v26,
      v27);
    sub_1BCA7E0(&System_Func_WarBoardUserWallData__bool__TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v32, v33);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__, v34, v35);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, v36, v37);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__GetEnumerator__, v38, v39);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v40, v41);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList___ctor__, v42, v43);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v44, v45);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Count__, v46, v47);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v48, v49);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v50, v51);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__TypeInfo, v52, v53);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v54, v55);
    sub_1BCA7E0(&WarBoardManager_TaskList_TypeInfo, v56, v57);
    sub_1BCA7E0(&WarBoardManager_TaskMultiList_TypeInfo, v58, v59);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass151_0__UpdateFromServerData_b__0__, v60, v61);
    sub_1BCA7E0(&WarBoardData___c__DisplayClass151_0_TypeInfo, v62, v63);
    sub_1BCA7E0(&WarBoardWaitNonBlockingTaskEnd_TypeInfo, v64, v65);
    byte_4B13E32 = 1;
  }
  memset(&v211, 0, sizeof(v211));
  p_serverData = &this->fields.serverData;
  if ( !this->fields.serverData )
    return;
  this->fields.serverData = warBoardDataEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.serverData,
    (int64_t)warBoardDataEntity,
    forceUpdate,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v206 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                        v67,
                                                        v68,
                                                        v69);
  System_Collections_Generic_List_object____ctor(
    v206,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v73 = (WarBoardManager_TaskMultiList_o *)sub_1BCAA2C(WarBoardManager_TaskMultiList_TypeInfo, v70, v71, v72);
  WarBoardManager_TaskMultiList___ctor(v73, 0LL);
  v77 = (WarBoardManager_TaskMultiList_o *)sub_1BCAA2C(WarBoardManager_TaskMultiList_TypeInfo, v74, v75, v76);
  WarBoardManager_TaskMultiList___ctor(v77, 0LL);
  v81 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___TypeInfo,
                                                                  v78,
                                                                  v79,
                                                                  v80);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v81,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData____ctor__);
  v85 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__TypeInfo,
                                                       v82,
                                                       v83,
                                                       v84);
  System_Collections_Generic_List_object____ctor(
    v85,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList___ctor__);
  pieces = this->fields.pieces;
  v207 = this;
  if ( !pieces )
    goto LABEL_96;
  max_length = pieces->max_length;
  v208 = &this->fields.serverData;
  if ( max_length >= 1 )
  {
    v92 = 0;
    v93 = forceUpdate;
    do
    {
      if ( v92 >= max_length )
        goto LABEL_97;
      v94 = pieces->m_Items[v92];
      v95 = (WarBoardManager_TaskList_o *)sub_1BCAA2C(WarBoardManager_TaskList_TypeInfo, klass_high, v88, v89);
      WarBoardManager_TaskList___ctor(v95, 0LL);
      if ( !v94 )
        goto LABEL_96;
      WarBoardPieceData__UpdateFromServerData(
        v94,
        *p_serverData,
        (System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__o *)v85,
        v95,
        v93,
        0LL);
      if ( !v95 )
        goto LABEL_96;
      if ( v95->fields._size >= 1 )
      {
        if ( v94->fields._isDead_k__BackingField )
        {
          if ( !v77 )
            goto LABEL_96;
          items = v77->fields._items;
          v103 = Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__;
          ++v77->fields._version;
          if ( !items )
            goto LABEL_96;
          size = v77->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            v109 = v103[4];
            v110 = (System_Collections_Generic_List_object__o *)v77;
LABEL_23:
            System_Collections_Generic_List_object___AddWithResize(
              v110,
              (Il2CppObject *)v95,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v109 + 192) + 112LL));
            goto LABEL_24;
          }
          v105 = &items->obj.klass + size;
          v77->fields._size = size + 1;
        }
        else
        {
          if ( !v73 )
            goto LABEL_96;
          v106 = v73->fields._items;
          v107 = Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__;
          ++v73->fields._version;
          if ( !v106 )
            goto LABEL_96;
          v108 = v73->fields._size;
          if ( (unsigned int)v108 >= v106->max_length )
          {
            v109 = v107[4];
            v110 = (System_Collections_Generic_List_object__o *)v73;
            goto LABEL_23;
          }
          v105 = &v106->obj.klass + v108;
          v73->fields._size = v108 + 1;
        }
        v105[4] = (Il2CppClass *)v95;
        sub_1BCA784((PartyOrganizationUtility_o *)(v105 + 4), (int64_t)v95, v96, v97, v98, v99, v100, v101);
      }
LABEL_24:
      isPlayerGroup = WarBoardPieceData__get_isPlayerGroup(v94, 0LL);
      if ( (isPlayerGroup & 1) != 0 )
      {
        isPlayerGroup = WarBoardPieceData__get_isMaster(v94, 0LL);
        if ( (isPlayerGroup & 1) == 0 && v94->fields._IsDispConsumedPieceActionPoint_k__BackingField )
        {
          if ( !v81 )
            goto LABEL_96;
          if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                  v81,
                  v94->fields._ConsumedRecoverDonotActCost_k__BackingField,
                  (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___ContainsKey__) )
          {
            ConsumedRecoverDonotActCost_k__BackingField = v94->fields._ConsumedRecoverDonotActCost_k__BackingField;
            v115 = v81;
            v116 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                                  v111,
                                                                  v112,
                                                                  v113);
            System_Collections_Generic_List_object____ctor(
              v116,
              (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
            v117 = v115;
            v118 = (Il2CppObject *)v116;
            v81 = v115;
            p_serverData = v208;
            System_Collections_Generic_Dictionary_int__object___Add(
              v117,
              ConsumedRecoverDonotActCost_k__BackingField,
              v118,
              (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Add__);
          }
          isPlayerGroup = (int64_t)System_Collections_Generic_Dictionary_int__object___get_Item(
                                     v81,
                                     v94->fields._ConsumedRecoverDonotActCost_k__BackingField,
                                     (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Item__);
          if ( !isPlayerGroup )
            goto LABEL_96;
          v125 = *(struct System_Object_array **)(isPlayerGroup + 16);
          v126 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
          ++*(_DWORD *)(isPlayerGroup + 28);
          if ( !v125 )
            goto LABEL_96;
          v127 = *(int *)(isPlayerGroup + 24);
          if ( (unsigned int)v127 >= v125->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)isPlayerGroup,
              (Il2CppObject *)v94,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v126[4] + 192LL) + 112LL));
          }
          else
          {
            v128 = &v125->obj.klass + v127;
            *(_DWORD *)(isPlayerGroup + 24) = v127 + 1;
            v128[4] = (Il2CppClass *)v94;
            sub_1BCA784((PartyOrganizationUtility_o *)(v128 + 4), (int64_t)v94, v119, v120, v121, v122, v123, v124);
          }
        }
      }
      max_length = pieces->max_length;
    }
    while ( (int)++v92 < max_length );
  }
  if ( !v85 )
    goto LABEL_96;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v210,
    v85,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__GetEnumerator__);
  v211 = v210;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v211,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__MoveNext__) )
  {
    current = v211.fields._current;
    v133 = (WarBoardManager_TaskList_o *)sub_1BCAA2C(WarBoardManager_TaskList_TypeInfo, v129, v130, v131);
    WarBoardManager_TaskList___ctor(v133, 0LL);
    if ( !current )
      sub_1BCAA3C(v134, v135);
    monitor = (int)current[1].monitor;
    if ( (monitor & 0x80000000) != 0 )
    {
      monitor_high = HIDWORD(current[1].monitor);
      if ( monitor_high >= 1 )
      {
        klass = current[1].klass;
        if ( !klass )
          sub_1BCAA3C(0LL, v135);
        (*((void (__fastcall **)(Il2CppClass *, _QWORD, _QWORD, WarBoardManager_TaskList_o *, __int64, _QWORD, __int64, _QWORD))klass->_1.image
         + 101))(
          klass,
          (unsigned int)monitor_high,
          0LL,
          v133,
          0xFFFFFFFFLL,
          0LL,
          1LL,
          *((_QWORD *)klass->_1.image + 102));
      }
      v148 = current[1].klass;
      if ( !v148 )
        sub_1BCAA3C(0LL, v135);
      v138 = (*((__int64 (**)(void))v148->_1.image + 103))();
    }
    else
    {
      v137 = current[1].klass;
      if ( !v137 )
        sub_1BCAA3C(0LL, v135);
      v138 = (*((__int64 (__fastcall **)(Il2CppClass *, _QWORD, _QWORD, WarBoardManager_TaskList_o *, __int64, _QWORD, __int64, _QWORD))v137->_1.image
              + 101))(
               v137,
               HIDWORD(current[1].monitor),
               0LL,
               v133,
               0xFFFFFFFFLL,
               0LL,
               1LL,
               *((_QWORD *)v137->_1.image + 102));
    }
    if ( !v133 )
      sub_1BCAA3C(v138, v139);
    if ( v133->fields._size >= 1 )
    {
      if ( (monitor & 0x80000000) != 0 )
      {
        if ( !v77 )
          sub_1BCAA3C(v138, v139);
        v153 = v77->fields._items;
        v154 = Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__;
        ++v77->fields._version;
        if ( !v153 )
          sub_1BCAA3C(v138, v139);
        v155 = v77->fields._size;
        if ( (unsigned int)v155 >= v153->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)v77,
            (Il2CppObject *)v133,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v154[4] + 192LL) + 112LL));
        }
        else
        {
          v156 = &v153->obj.klass + v155;
          v77->fields._size = v155 + 1;
          v156[4] = (Il2CppClass *)v133;
          sub_1BCA784((PartyOrganizationUtility_o *)(v156 + 4), (int64_t)v133, v140, v141, v142, v143, v144, v145);
        }
      }
      else
      {
        if ( !v73 )
          sub_1BCAA3C(v138, v139);
        v149 = v73->fields._items;
        v150 = Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__;
        ++v73->fields._version;
        if ( !v149 )
          sub_1BCAA3C(v138, v139);
        v151 = v73->fields._size;
        if ( (unsigned int)v151 >= v149->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)v73,
            (Il2CppObject *)v133,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v150[4] + 192LL) + 112LL));
        }
        else
        {
          v152 = &v149->obj.klass + v151;
          v73->fields._size = v151 + 1;
          v152[4] = (Il2CppClass *)v133;
          sub_1BCA784((PartyOrganizationUtility_o *)(v152 + 4), (int64_t)v133, v140, v141, v142, v143, v144, v145);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v211,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__Dispose__);
  if ( !v81 )
    goto LABEL_96;
  isPlayerGroup = System_Collections_Generic_Dictionary_int__object___get_Count(
                    v81,
                    (const MethodInfo_3205B94 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__);
  if ( (int)isPlayerGroup >= 1 )
    WarBoardData__ShowConsumedPieceActionPointPopup(
      v207,
      (System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___o *)v81,
      v157);
  if ( !v73 )
    goto LABEL_96;
  isPlayerGroup = (int64_t)WarBoardManager_TaskMultiList__SortedFlatted(v73, 0LL);
  if ( !v206 )
    goto LABEL_96;
  System_Collections_Generic_List_object___AddRange(
    v206,
    (System_Collections_Generic_IEnumerable_T__o *)isPlayerGroup,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( !v77 )
    goto LABEL_96;
  v158 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager_TaskMultiList__SortedFlatted(v77, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v206,
    v158,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( v206->fields._size >= 1 )
  {
    isPlayerGroup = (int64_t)WarBoardData__CreateEventBossUIDataTask((WarBoardData_o *)isPlayerGroup, klass_high);
    v167 = v206->fields._items;
    v168 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v206->fields._version;
    if ( !v167 )
      goto LABEL_96;
    v169 = v206->fields._size;
    v170 = isPlayerGroup;
    if ( (unsigned int)v169 >= v167->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v206,
        (Il2CppObject *)isPlayerGroup,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v168[4] + 192LL) + 112LL));
    }
    else
    {
      v171 = &v167->obj.klass + v169;
      v206->fields._size = v169 + 1;
      v171[4] = (Il2CppClass *)v170;
      sub_1BCA784((PartyOrganizationUtility_o *)(v171 + 4), v170, v161, v162, v163, v164, v165, v166);
    }
    v175 = (WarBoardWaitNonBlockingTaskEnd_o *)sub_1BCAA2C(WarBoardWaitNonBlockingTaskEnd_TypeInfo, v172, v173, v174);
    WarBoardWaitNonBlockingTaskEnd___ctor(v175, 0LL);
    v182 = v206->fields._items;
    v183 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v206->fields._version;
    if ( !v182 )
      goto LABEL_96;
    v184 = v206->fields._size;
    if ( (unsigned int)v184 >= v182->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v206,
        (Il2CppObject *)v175,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v183[4] + 192LL) + 112LL));
    }
    else
    {
      v185 = &v182->obj.klass + v184;
      v206->fields._size = v184 + 1;
      v185[4] = (Il2CppClass *)v175;
      sub_1BCA784((PartyOrganizationUtility_o *)(v185 + 4), (int64_t)v175, v176, v177, v178, v179, v180, v181);
    }
    isPlayerGroup = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !isPlayerGroup )
      goto LABEL_96;
    WarBoardManager__InsertTask_36174040(
      (WarBoardManager_o *)isPlayerGroup,
      0,
      (System_Collections_Generic_List_WarBoardTaskBase__o *)v206,
      0LL);
  }
  v186 = v207->fields.items;
  if ( !v186 )
    goto LABEL_96;
  v187 = v186->max_length;
  if ( v187 >= 1 )
  {
    v188 = 0;
    while ( v188 < v187 )
    {
      isPlayerGroup = (int64_t)v186->m_Items[v188];
      if ( !isPlayerGroup )
        goto LABEL_96;
      WarBoardItemData__UpdateFromServerData((WarBoardItemData_o *)isPlayerGroup, *v208, 0LL);
      v187 = v186->max_length;
      if ( (int)++v188 >= v187 )
        goto LABEL_84;
    }
LABEL_97:
    sub_1BCAA44(isPlayerGroup, klass_high);
  }
LABEL_84:
  walls = v207->fields.walls;
  if ( !walls )
LABEL_96:
    sub_1BCAA3C(isPlayerGroup, klass_high);
  if ( (int)walls->max_length >= 1 )
  {
    v190 = 0LL;
    while ( 1 )
    {
      v191 = sub_1BCAA2C(WarBoardData___c__DisplayClass151_0_TypeInfo, klass_high, v159, v160);
      WarBoardData___c__DisplayClass151_0___ctor((WarBoardData___c__DisplayClass151_0_o *)v191, 0LL);
      if ( v190 >= walls->max_length )
        goto LABEL_97;
      if ( !v191 )
        goto LABEL_96;
      v198 = (int64_t)walls->m_Items[v190];
      *(_QWORD *)(v191 + 16) = v198;
      v199 = (System_Collections_Generic_List_object__o **)(v191 + 16);
      sub_1BCA784((PartyOrganizationUtility_o *)(v191 + 16), v198, v192, v193, v194, v195, v196, v197);
      if ( !warBoardDataEntity )
        goto LABEL_96;
      wallInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEntity->fields.wallInfo;
      v203 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                              System_Func_WarBoardUserWallData__bool__TypeInfo,
                                              klass_high,
                                              v200,
                                              v201);
      System_Func_object__bool____ctor(
        v203,
        (Il2CppObject *)v191,
        Method_WarBoardData___c__DisplayClass151_0__UpdateFromServerData_b__0__,
        0LL);
      v204 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
               wallInfo,
               (System_Func_TSource__bool__o *)v203,
               (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
      if ( v204 )
      {
        v205 = v204;
        isPlayerGroup = (int64_t)*v199;
        if ( !*v199 )
          goto LABEL_96;
        klass_high = (const MethodInfo *)HIDWORD(v205[1].klass);
        if ( *(_DWORD *)(isPlayerGroup + 24) > (int)klass_high )
          WarBoardWallData__SetBreakPoint((WarBoardWallData_o *)isPlayerGroup, (int32_t)klass_high, 0LL);
      }
      if ( (__int64)++v190 >= (int)walls->max_length )
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
    sub_1BCAA3C(this, 0LL);
  v4 = WarBoardData_BattleParticipantInfo__ToUniqueIndexArray(participantInfo, 0LL);
  this->fields.latestBattlePieceUniqueIndexes = v4;
  sub_1BCA784(
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

  if ( (byte_4B13E42 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, *(_QWORD *)&fromSquareIndex, *(_QWORD *)&toSquareIndex);
    byte_4B13E42 = 1;
  }
  v7 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 2LL);
  if ( !v7 )
    sub_1BCAA3C(0LL, v8);
  max_length = v7->max_length;
  if ( !max_length || (v7->m_Items[1] = fromSquareIndex, max_length == 1) )
    sub_1BCAA44(v7, v7);
  v7->m_Items[2] = toSquareIndex;
  this->fields.latestPieceActionSquareIndexes = v7;
  sub_1BCA784(
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_IEnumerable_T__o *squares; // x23
  System_Collections_Generic_List_object__o *v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Object_array *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  PartyOrganizationUtility_o *p_condSquares; // x19
  System_Collections_Generic_IEnumerable_T__o *condSquares; // t1
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Collections_Generic_List_object__o *v40; // x21
  System_Object_array *v41; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7

  if ( (byte_4B13E26 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardSquareData__Add__, square, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardSquareData__Remove__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardSquareData___ctor___76805072, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardSquareData__TypeInfo, v12, v13);
    byte_4B13E26 = 1;
  }
  squares = (System_Collections_Generic_IEnumerable_T__o *)this->fields.squares;
  v15 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardSquareData__TypeInfo,
                                                       square,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor_56235344(
    v15,
    squares,
    (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor___76805072);
  if ( !v15 )
    goto LABEL_10;
  items = v15->fields._items;
  v25 = Method_System_Collections_Generic_List_WarBoardSquareData__Add__;
  ++v15->fields._version;
  if ( !items )
    goto LABEL_10;
  size = v15->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)square,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = &items->obj.klass + size;
    v15->fields._size = size + 1;
    v27[4] = (Il2CppClass *)square;
    sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 4), (int64_t)square, v18, v19, v20, v21, v22, v23);
  }
  v28 = System_Collections_Generic_List_object___ToArray(
          v15,
          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  this->fields.squares = (struct WarBoardSquareData_array *)v28;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.squares, (int64_t)v28, v29, v30, v31, v32, v33, v34);
  condSquares = (System_Collections_Generic_IEnumerable_T__o *)this->fields.condSquares;
  p_condSquares = (PartyOrganizationUtility_o *)&this->fields.condSquares;
  v40 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardSquareData__TypeInfo,
                                                       v37,
                                                       v38,
                                                       v39);
  System_Collections_Generic_List_object____ctor_56235344(
    v40,
    condSquares,
    (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor___76805072);
  if ( !v40 )
LABEL_10:
    sub_1BCAA3C(v16, v17);
  System_Collections_Generic_List_object___Remove(
    v40,
    (Il2CppObject *)square,
    (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_WarBoardSquareData__Remove__);
  v41 = System_Collections_Generic_List_object___ToArray(
          v40,
          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  p_condSquares->klass = (PartyOrganizationUtility_c *)v41;
  sub_1BCA784(p_condSquares, (int64_t)v41, v42, v43, v44, v45, v46, v47);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardData__UpdateUiData(
        WarBoardData_o *this,
        int32_t squareIndex,
        System_String_array *setKeys,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *UiData; // x0
  Il2CppObject *v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  il2cpp_array_size_t max_length; // w8
  WarBoardUiData_o *v16; // x22
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  Il2CppClass *klass; // x8
  _QWORD *v24; // x9
  __int64 monitor_low; // x10
  __int64 v26; // x8

  if ( (byte_4B13E53 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardUiData__Add__, *(_QWORD *)&squareIndex, setKeys);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardUiData__Remove__, v7, v8);
    sub_1BCA7E0(&WarBoardUiData_TypeInfo, v9, v10);
    byte_4B13E53 = 1;
  }
  UiData = (Il2CppObject *)WarBoardData__GetUiData(this, squareIndex, (const MethodInfo *)setKeys);
  if ( !setKeys )
    goto LABEL_16;
  max_length = setKeys->max_length;
  v12 = UiData;
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
        v12,
        (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_WarBoardUiData__Remove__);
      return;
    }
LABEL_16:
    sub_1BCAA3C(UiData, v12);
  }
  if ( max_length )
  {
    v16 = (WarBoardUiData_o *)sub_1BCAA2C(WarBoardUiData_TypeInfo, 0LL, v13, v14);
    WarBoardUiData___ctor_36278216(v16, squareIndex, setKeys, 0LL);
    UiData = (Il2CppObject *)this->fields.listUiData;
    if ( !UiData )
      goto LABEL_16;
    klass = UiData[1].klass;
    v24 = Method_System_Collections_Generic_List_WarBoardUiData__Add__;
    ++HIDWORD(UiData[1].monitor);
    if ( !klass )
      goto LABEL_16;
    monitor_low = SLODWORD(UiData[1].monitor);
    if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)UiData,
        (Il2CppObject *)v16,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = (__int64)klass + 8 * monitor_low;
      LODWORD(UiData[1].monitor) = monitor_low + 1;
      *(_QWORD *)(v26 + 32) = v16;
      sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 32), (int64_t)v16, v17, v18, v19, v20, v21, v22);
    }
  }
}


void __fastcall WarBoardData__UpdateUiData_36086660(
        WarBoardData_o *this,
        System_Int32_array *pieceIndex,
        System_String_array *setKeys,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *UiData_36086068; // x0
  Il2CppObject *v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  il2cpp_array_size_t max_length; // w8
  WarBoardUiData_o *v16; // x22
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  Il2CppClass *klass; // x8
  _QWORD *v24; // x9
  __int64 monitor_low; // x10
  __int64 v26; // x8

  if ( (byte_4B13E54 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardUiData__Add__, pieceIndex, setKeys);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardUiData__Remove__, v7, v8);
    sub_1BCA7E0(&WarBoardUiData_TypeInfo, v9, v10);
    byte_4B13E54 = 1;
  }
  UiData_36086068 = (Il2CppObject *)WarBoardData__GetUiData_36086068(this, pieceIndex, (const MethodInfo *)setKeys);
  if ( !setKeys )
    goto LABEL_16;
  max_length = setKeys->max_length;
  v12 = UiData_36086068;
  if ( UiData_36086068 )
  {
    if ( max_length )
    {
      WarBoardUiData__SetKeys((WarBoardUiData_o *)UiData_36086068, setKeys, 0LL);
      return;
    }
    UiData_36086068 = (Il2CppObject *)this->fields.listUiData;
    if ( UiData_36086068 )
    {
      System_Collections_Generic_List_object___Remove(
        (System_Collections_Generic_List_object__o *)UiData_36086068,
        v12,
        (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_WarBoardUiData__Remove__);
      return;
    }
LABEL_16:
    sub_1BCAA3C(UiData_36086068, v12);
  }
  if ( max_length )
  {
    v16 = (WarBoardUiData_o *)sub_1BCAA2C(WarBoardUiData_TypeInfo, 0LL, v13, v14);
    WarBoardUiData___ctor_36278288(v16, pieceIndex, setKeys, 0LL);
    UiData_36086068 = (Il2CppObject *)this->fields.listUiData;
    if ( !UiData_36086068 )
      goto LABEL_16;
    klass = UiData_36086068[1].klass;
    v24 = Method_System_Collections_Generic_List_WarBoardUiData__Add__;
    ++HIDWORD(UiData_36086068[1].monitor);
    if ( !klass )
      goto LABEL_16;
    monitor_low = SLODWORD(UiData_36086068[1].monitor);
    if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)UiData_36086068,
        (Il2CppObject *)v16,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = (__int64)klass + 8 * monitor_low;
      LODWORD(UiData_36086068[1].monitor) = monitor_low + 1;
      *(_QWORD *)(v26 + 32) = v16;
      sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 32), (int64_t)v16, v17, v18, v19, v20, v21, v22);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  WarBoardData___c_c *v11; // x0
  System_Object_array *pieces; // x19
  System_Predicate_object__o *_9__62_0; // x20
  Il2CppObject *v14; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t result; // x0

  if ( (byte_4B13DFF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Find_WarBoardPieceData___, method, v2);
    sub_1BCA7E0(&System_Predicate_WarBoardPieceData__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_WarBoardData___c__get_PlayerMasterUserEquipId_b__62_0__, v7, v8);
    sub_1BCA7E0(&WarBoardData___c_TypeInfo, v9, v10);
    byte_4B13DFF = 1;
  }
  v11 = WarBoardData___c_TypeInfo;
  pieces = (System_Object_array *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, method);
    v11 = WarBoardData___c_TypeInfo;
  }
  _9__62_0 = (System_Predicate_object__o *)v11->static_fields->__9__62_0;
  if ( !_9__62_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11, method);
      v11 = WarBoardData___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__62_0 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_WarBoardPieceData__TypeInfo, method, v2, v3);
    System_Predicate_object____ctor(_9__62_0, v14, Method_WarBoardData___c__get_PlayerMasterUserEquipId_b__62_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__62_0 = (struct System_Predicate_WarBoardPieceData__o *)_9__62_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__62_0,
      (int64_t)_9__62_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  result = (int64_t)System_Array__Find_object_(
                      pieces,
                      (System_Predicate_T__o *)_9__62_0,
                      (const MethodInfo_300CA48 *)Method_System_Array_Find_WarBoardPieceData___);
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
    sub_1BCAA3C(this, method);
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
  sub_1BCA784(
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v9, v10, v11, v12, v13, v14, v15);
}


void __fastcall WarBoardData_BattleParticipantInfo___ctor_36236328(
        WarBoardData_BattleParticipantInfo_o *this,
        System_UInt32_array *uniqueIndexArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x21
  Il2CppObject *Instance; // x0
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t monitor; // x1
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  System_Func_T__TResult__o *v31; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  System_Object_array *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7

  if ( (byte_4B13F5F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_uint__WarBoardPieceData___, uniqueIndexArray, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, v5, v6);
    sub_1BCA7E0(&System_Func_uint__WarBoardPieceData__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_WarBoardData_BattleParticipantInfo___c__DisplayClass13_0___ctor_b__0__, v11, v12);
    sub_1BCA7E0(&WarBoardData_BattleParticipantInfo___c__DisplayClass13_0_TypeInfo, v13, v14);
    byte_4B13F5F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v18 = sub_1BCAA2C(WarBoardData_BattleParticipantInfo___c__DisplayClass13_0_TypeInfo, v15, v16, v17);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !uniqueIndexArray )
    goto LABEL_9;
  if ( (int)uniqueIndexArray->max_length > 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance && v18 )
    {
      monitor = (int64_t)Instance[27].monitor;
      *(_QWORD *)(v18 + 16) = monitor;
      sub_1BCA784((PartyOrganizationUtility_o *)(v18 + 16), monitor, v21, v22, v23, v24, v25, v26);
      v31 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_uint__WarBoardPieceData__TypeInfo, v28, v29, v30);
      System_Func_uint__object____ctor(
        v31,
        (Il2CppObject *)v18,
        Method_WarBoardData_BattleParticipantInfo___c__DisplayClass13_0___ctor_b__0__,
        0LL);
      v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_uint__object_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)uniqueIndexArray,
                                                                   (System_Func_TSource__TResult__o *)v31,
                                                                   (const MethodInfo_2F44C98 *)Method_System_Linq_Enumerable_Select_uint__WarBoardPieceData___);
      v33 = System_Linq_Enumerable__ToArray_object_(
              v32,
              (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
      this->fields._Participants_k__BackingField = (struct WarBoardPieceData_array *)v33;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v33, v34, v35, v36, v37, v38, v39);
      return;
    }
LABEL_9:
    sub_1BCAA3C(Instance, v20);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_object__o *v16; // x19
  WarBoardPieceData_array *Instance; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
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
  __int64 v39; // x8
  WarBoardPieceData_array *v40; // x20
  unsigned __int64 v41; // x23
  WarBoardPieceData_o **m_Items; // x25
  int64_t v43; // x21
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

  if ( (byte_4B13F61 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, attackPieceData, targetPieceData);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPieceData__Contains__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v14, v15);
    byte_4B13F61 = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                       attackPieceData,
                                                       targetPieceData,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( !v16 )
    goto LABEL_31;
  items = v16->fields._items;
  v26 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
  ++v16->fields._version;
  if ( !items )
    goto LABEL_31;
  size = v16->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v16,
      (Il2CppObject *)attackPieceData,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &items->obj.klass + size;
    v16->fields._size = size + 1;
    v28[4] = (Il2CppClass *)attackPieceData;
    sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 4), (int64_t)attackPieceData, v19, v20, v21, v22, v23, v24);
  }
  v35 = v16->fields._items;
  v36 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
  ++v16->fields._version;
  if ( !v35 )
    goto LABEL_31;
  v37 = v16->fields._size;
  if ( (unsigned int)v37 >= v35->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v16,
      (Il2CppObject *)targetPieceData,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
  }
  else
  {
    v38 = &v35->obj.klass + v37;
    v16->fields._size = v37 + 1;
    v38[4] = (Il2CppClass *)targetPieceData;
    sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 4), (int64_t)targetPieceData, v29, v30, v31, v32, v33, v34);
  }
  Instance = (WarBoardPieceData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1BCAA3C(Instance, v18);
  }
  v39 = *(_QWORD *)&Instance->max_length;
  v40 = Instance;
  if ( (int)v39 >= 1 )
  {
    v41 = 0LL;
    m_Items = Instance->m_Items;
    do
    {
      if ( v41 >= (unsigned int)v39 )
        sub_1BCAA44(Instance, v18);
      v43 = (int64_t)m_Items[v41];
      Instance = (WarBoardPieceData_array *)System_Collections_Generic_List_object___Contains(
                                              v16,
                                              (Il2CppObject *)v43,
                                              (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_WarBoardPieceData__Contains__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !v43 )
          goto LABEL_31;
        if ( *(_DWORD *)(v43 + 16) != 1 )
        {
          Instance = *(WarBoardPieceData_array **)(v43 + 128);
          if ( !Instance
            || (Instance = (WarBoardPieceData_array *)BattleServantData__HasAvailableWarBoardNotAttackedBuff(
                                                        (BattleServantData_o *)Instance,
                                                        0LL),
                ((unsigned __int8)Instance & 1) == 0) )
          {
            v50 = v16->fields._items;
            v51 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
            ++v16->fields._version;
            if ( !v50 )
              goto LABEL_31;
            v52 = v16->fields._size;
            if ( (unsigned int)v52 >= v50->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v16,
                (Il2CppObject *)v43,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
            }
            else
            {
              v53 = &v50->obj.klass + v52;
              v16->fields._size = v52 + 1;
              v53[4] = (Il2CppClass *)v43;
              sub_1BCA784((PartyOrganizationUtility_o *)(v53 + 4), v43, v44, v45, v46, v47, v48, v49);
            }
          }
        }
      }
      LODWORD(v39) = v40->max_length;
      ++v41;
    }
    while ( (__int64)v41 < (int)v39 );
  }
  return (WarBoardPieceData_array *)System_Collections_Generic_List_object___ToArray(
                                      v16,
                                      (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
}


WarBoardData_BattleParticipantInfo_o *__fastcall WarBoardData_BattleParticipantInfo__LoadFromUniqueIndex(
        System_UInt32_array *uniqueIndexArray,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  WarBoardData_BattleParticipantInfo_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4B13F62 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardData_BattleParticipantInfo_TypeInfo, method, v2);
    byte_4B13F62 = 1;
  }
  v5 = (WarBoardData_BattleParticipantInfo_o *)sub_1BCAA2C(WarBoardData_BattleParticipantInfo_TypeInfo, method, v2, v3);
  WarBoardData_BattleParticipantInfo___ctor_36236328(v5, uniqueIndexArray, v6);
  return v5;
}


System_UInt32_array *__fastcall WarBoardData_BattleParticipantInfo__ToUniqueIndexArray(
        WarBoardData_BattleParticipantInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  WarBoardData_BattleParticipantInfo___c_c *v13; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Participants_k__BackingField; // x19
  System_Func_T__TResult__o *_9__14_0; // x20
  Il2CppObject *v16; // x21
  struct WarBoardData_BattleParticipantInfo___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_4B13F60 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__uint___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_uint___, v5, v6);
    sub_1BCA7E0(&System_Func_WarBoardPieceData__uint__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_WarBoardData_BattleParticipantInfo___c__ToUniqueIndexArray_b__14_0__, v9, v10);
    sub_1BCA7E0(&WarBoardData_BattleParticipantInfo___c_TypeInfo, v11, v12);
    byte_4B13F60 = 1;
  }
  v13 = WarBoardData_BattleParticipantInfo___c_TypeInfo;
  Participants_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._Participants_k__BackingField;
  if ( !WarBoardData_BattleParticipantInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_BattleParticipantInfo___c_TypeInfo, method);
    v13 = WarBoardData_BattleParticipantInfo___c_TypeInfo;
  }
  _9__14_0 = (System_Func_T__TResult__o *)v13->static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13, method);
      v13 = WarBoardData_BattleParticipantInfo___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__14_0 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_WarBoardPieceData__uint__TypeInfo, method, v2, v3);
    System_Func_object__uint____ctor(
      _9__14_0,
      v16,
      Method_WarBoardData_BattleParticipantInfo___c__ToUniqueIndexArray_b__14_0__,
      0LL);
    static_fields = WarBoardData_BattleParticipantInfo___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Func_WarBoardPieceData__uint__o *)_9__14_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__14_0,
      (int64_t)_9__14_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__uint_(
                                                               Participants_k__BackingField,
                                                               (System_Func_TSource__TResult__o *)_9__14_0,
                                                               (const MethodInfo_2F440C8 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__uint___);
  return System_Linq_Enumerable__ToArray_uint_(
           v24,
           (const MethodInfo_2F4BB18 *)Method_System_Linq_Enumerable_ToArray_uint___);
}


WarBoardPieceData_o *__fastcall WarBoardData_BattleParticipantInfo__get_Attacker(
        WarBoardData_BattleParticipantInfo_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceData_array *Participants_k__BackingField; // x8

  Participants_k__BackingField = this->fields._Participants_k__BackingField;
  if ( !Participants_k__BackingField )
    sub_1BCAA3C(this, method);
  if ( !Participants_k__BackingField->max_length )
    sub_1BCAA44(this, method);
  return Participants_k__BackingField->m_Items[0];
}


WarBoardPieceData_o *__fastcall WarBoardData_BattleParticipantInfo__get_Defender(
        WarBoardData_BattleParticipantInfo_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceData_array *Participants_k__BackingField; // x8

  Participants_k__BackingField = this->fields._Participants_k__BackingField;
  if ( !Participants_k__BackingField )
    sub_1BCAA3C(this, method);
  if ( Participants_k__BackingField->max_length <= 1 )
    sub_1BCAA44(this, method);
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B13F63 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardData_BattleParticipantInfo___c_TypeInfo, v1, v2);
    byte_4B13F63 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(WarBoardData_BattleParticipantInfo___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  WarBoardData_BattleParticipantInfo___c_TypeInfo->static_fields->__9 = (struct WarBoardData_BattleParticipantInfo___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarBoardData_BattleParticipantInfo___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return x->fields._uniqueIndex_k__BackingField;
}


void __fastcall WarBoardData_BattleParticipantInfo___c__DisplayClass13_0___ctor(
        WarBoardData_BattleParticipantInfo___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
WarBoardPieceData_o *__fastcall WarBoardData_BattleParticipantInfo___c__DisplayClass13_0____ctor_b__0(
        WarBoardData_BattleParticipantInfo___c__DisplayClass13_0_o *this,
        uint32_t x,
        const MethodInfo *method)
{
  WarBoardData_o *warBoardData; // x0

  warBoardData = this->fields.warBoardData;
  if ( !warBoardData )
    sub_1BCAA3C(0LL, *(_QWORD *)&x);
  return WarBoardData__GetPiece_36054756(warBoardData, x, 0, 0LL);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.pieceSaves, 0LL, v3, v4, v5, v6, v7, v8);
  this->fields.itemSaves = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.itemSaves, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.treasureSaves = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.treasureSaves, 0LL, v15, v16, v17, v18, v19, v20);
  this->fields.wallSaves = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.wallSaves, 0LL, v21, v22, v23, v24, v25, v26);
  this->fields.squareSaves = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.squareSaves, 0LL, v27, v28, v29, v30, v31, v32);
  if ( !byte_4B108BA )
  {
    sub_1BCA7E0(&UnityEngine_Vector2_TypeInfo, v33, v34);
    byte_4B108BA = 1;
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.eventSaves, 0LL, v34, v35, v36, v37, v38, v39);
  this->fields.winCondId = -1;
  this->fields.latestBattlePieceUniqueIndexes = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.latestBattlePieceUniqueIndexes,
    0LL,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields.prevCondSaves = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.prevCondSaves, 0LL, v47, v48, v49, v50, v51, v52);
  this->fields.reinforcementsSaves = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.reinforcementsSaves, 0LL, v53, v54, v55, v56, v57, v58);
  this->fields.playedReinforcements = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.playedReinforcements, 0LL, v59, v60, v61, v62, v63, v64);
  this->fields.uiDataSaves = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.uiDataSaves, 0LL, v65, v66, v67, v68, v69, v70);
  this->fields.bgAnimationInfo = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.bgAnimationInfo, 0LL, v71, v72, v73, v74, v75, v76);
  this->fields.squareIndexInfo = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.squareIndexInfo, 0LL, v77, v78, v79, v80, v81, v82);
  this->fields.bossBattleInfo = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.bossBattleInfo, 0LL, v83, v84, v85, v86, v87, v88);
}


void __fastcall WarBoardData_WarBoardLocalSaveData___ctor_36231636(
        WarBoardData_WarBoardLocalSaveData_o *this,
        WarBoardData_o *warBoardData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 GutsCount; // x0
  __int64 v70; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  struct WarBoardPieceData_array *pieces; // x8
  __int64 v73; // x22
  struct WarBoardPieceData_SaveData_array *v74; // x0
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  __int64 v81; // x2
  __int64 v82; // x3
  unsigned __int64 v83; // x24
  __int64 v84; // x26
  __int64 v85; // x27
  struct WarBoardPieceData_array *v86; // x8
  struct WarBoardPieceData_SaveData_array *pieceSaves; // x28
  WarBoardPieceData_o *v88; // x23
  WarBoardPieceData_SaveData_o *v89; // x22
  const MethodInfo *v90; // x2
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  struct WarBoardItemData_array *items; // x8
  __int64 v98; // x22
  struct WarBoardItemData_SaveData_array *v99; // x0
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  __int64 v106; // x2
  __int64 v107; // x3
  unsigned __int64 v108; // x24
  __int64 v109; // x26
  __int64 v110; // x27
  struct WarBoardItemData_array *v111; // x8
  struct WarBoardItemData_SaveData_array *itemSaves; // x28
  WarBoardItemData_o *v113; // x23
  WarBoardItemData_SaveData_o *v114; // x22
  const MethodInfo *v115; // x2
  int64_t v116; // x2
  int32_t v117; // w3
  System_String_o *v118; // x4
  BattleSetupInfo_o *v119; // x5
  FollowerInfo_o *v120; // x6
  PartyListViewItem_o *v121; // x7
  struct WarBoardTreasureData_array *treasures; // x8
  __int64 v123; // x22
  struct WarBoardTreasureData_SaveData_array *v124; // x0
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  __int64 v131; // x2
  __int64 v132; // x3
  unsigned __int64 v133; // x24
  __int64 v134; // x26
  __int64 v135; // x27
  struct WarBoardTreasureData_array *v136; // x8
  struct WarBoardTreasureData_SaveData_array *treasureSaves; // x28
  WarBoardTreasureData_o *v138; // x23
  WarBoardTreasureData_SaveData_o *v139; // x22
  const MethodInfo *v140; // x2
  int64_t v141; // x2
  int32_t v142; // w3
  System_String_o *v143; // x4
  BattleSetupInfo_o *v144; // x5
  FollowerInfo_o *v145; // x6
  PartyListViewItem_o *v146; // x7
  struct WarBoardWallData_array *walls; // x8
  __int64 v148; // x22
  struct WarBoardWallData_SaveData_array *v149; // x0
  int64_t v150; // x2
  int32_t v151; // w3
  System_String_o *v152; // x4
  BattleSetupInfo_o *v153; // x5
  FollowerInfo_o *v154; // x6
  PartyListViewItem_o *v155; // x7
  __int64 v156; // x2
  __int64 v157; // x3
  unsigned __int64 v158; // x24
  __int64 v159; // x26
  __int64 v160; // x27
  struct WarBoardWallData_array *v161; // x8
  struct WarBoardWallData_SaveData_array *wallSaves; // x28
  WarBoardWallData_o *v163; // x23
  WarBoardWallData_SaveData_o *v164; // x22
  const MethodInfo *v165; // x2
  int64_t v166; // x2
  int32_t v167; // w3
  System_String_o *v168; // x4
  BattleSetupInfo_o *v169; // x5
  FollowerInfo_o *v170; // x6
  PartyListViewItem_o *v171; // x7
  struct WarBoardSquareData_array *squares; // x8
  __int64 v173; // x22
  struct WarBoardSquareData_SaveData_array *v174; // x0
  int64_t v175; // x2
  int32_t v176; // w3
  System_String_o *v177; // x4
  BattleSetupInfo_o *v178; // x5
  FollowerInfo_o *v179; // x6
  PartyListViewItem_o *v180; // x7
  __int64 v181; // x2
  __int64 v182; // x3
  unsigned __int64 v183; // x24
  __int64 v184; // x26
  __int64 v185; // x27
  struct WarBoardSquareData_array *v186; // x8
  struct WarBoardSquareData_SaveData_array *squareSaves; // x28
  WarBoardSquareData_o *v188; // x23
  WarBoardSquareData_SaveData_o *v189; // x22
  const MethodInfo *v190; // x2
  int64_t v191; // x2
  int32_t v192; // w3
  System_String_o *v193; // x4
  BattleSetupInfo_o *v194; // x5
  FollowerInfo_o *v195; // x6
  PartyListViewItem_o *v196; // x7
  struct UnityEngine_Vector2_o zeroVector; // d0
  struct System_Collections_Generic_List_WarBoardEventData__o *listEvent; // x8
  __int64 size; // x21
  struct WarBoardEventData_SaveData_array *v200; // x0
  int64_t v201; // x2
  int32_t v202; // w3
  System_String_o *v203; // x4
  BattleSetupInfo_o *v204; // x5
  FollowerInfo_o *v205; // x6
  PartyListViewItem_o *v206; // x7
  int64_t v207; // x2
  int32_t v208; // w3
  System_String_o *v209; // x4
  BattleSetupInfo_o *v210; // x5
  FollowerInfo_o *v211; // x6
  PartyListViewItem_o *v212; // x7
  unsigned __int64 v213; // x23
  __int64 v214; // x28
  struct WarBoardEventData_SaveData_array *eventSaves; // x29
  Il2CppObject *Item; // x25
  __int64 v217; // x1
  __int64 v218; // x2
  __int64 v219; // x3
  WarBoardEventData_SaveData_o *v220; // x24
  const MethodInfo *v221; // x2
  int64_t v222; // x2
  int32_t v223; // w3
  System_String_o *v224; // x4
  BattleSetupInfo_o *v225; // x5
  FollowerInfo_o *v226; // x6
  PartyListViewItem_o *v227; // x7
  struct System_Int32_array *latestPieceActionSquareIndexes; // x1
  struct System_UInt32_array *latestBattlePieceUniqueIndexes; // x1
  int64_t v230; // x2
  int32_t v231; // w3
  System_String_o *v232; // x4
  BattleSetupInfo_o *v233; // x5
  FollowerInfo_o *v234; // x6
  PartyListViewItem_o *v235; // x7
  struct System_Collections_Generic_List_WarBoardPrevCondData__o *listPrevCond; // x8
  __int64 v237; // x21
  struct WarBoardPrevCondData_SaveData_array *v238; // x0
  int64_t v239; // x2
  int32_t v240; // w3
  System_String_o *v241; // x4
  BattleSetupInfo_o *v242; // x5
  FollowerInfo_o *v243; // x6
  PartyListViewItem_o *v244; // x7
  unsigned __int64 v245; // x23
  __int64 v246; // x28
  struct WarBoardPrevCondData_SaveData_array *prevCondSaves; // x29
  Il2CppObject *v248; // x25
  __int64 v249; // x1
  __int64 v250; // x2
  __int64 v251; // x3
  WarBoardPrevCondData_SaveData_o *v252; // x24
  const MethodInfo *v253; // x2
  int64_t v254; // x2
  int32_t v255; // w3
  System_String_o *v256; // x4
  BattleSetupInfo_o *v257; // x5
  FollowerInfo_o *v258; // x6
  PartyListViewItem_o *v259; // x7
  struct System_Collections_Generic_List_HoldReinforcementsData__o *reinforcementsSaveList; // x8
  __int64 v261; // x21
  struct HoldReinforcementsData_SaveData_array *v262; // x0
  int64_t v263; // x2
  int32_t v264; // w3
  System_String_o *v265; // x4
  BattleSetupInfo_o *v266; // x5
  FollowerInfo_o *v267; // x6
  PartyListViewItem_o *v268; // x7
  unsigned __int64 v269; // x23
  __int64 v270; // x28
  struct HoldReinforcementsData_SaveData_array *reinforcementsSaves; // x29
  Il2CppObject *v272; // x25
  __int64 v273; // x1
  __int64 v274; // x2
  __int64 v275; // x3
  HoldReinforcementsData_SaveData_o *v276; // x24
  const MethodInfo *v277; // x2
  int64_t v278; // x2
  int32_t v279; // w3
  System_String_o *v280; // x4
  BattleSetupInfo_o *v281; // x5
  FollowerInfo_o *v282; // x6
  PartyListViewItem_o *v283; // x7
  struct System_Int32_array *v284; // x0
  int64_t v285; // x2
  int32_t v286; // w3
  System_String_o *v287; // x4
  BattleSetupInfo_o *v288; // x5
  FollowerInfo_o *v289; // x6
  PartyListViewItem_o *v290; // x7
  struct System_Collections_Generic_List_WarBoardUiData__o *listUiData; // x8
  __int64 v292; // x21
  struct WarBoardUiData_SaveData_array *v293; // x0
  int64_t v294; // x2
  int32_t v295; // w3
  System_String_o *v296; // x4
  BattleSetupInfo_o *v297; // x5
  FollowerInfo_o *v298; // x6
  PartyListViewItem_o *v299; // x7
  unsigned __int64 v300; // x23
  __int64 v301; // x28
  struct WarBoardUiData_SaveData_array *uiDataSaves; // x29
  Il2CppObject *v303; // x25
  __int64 v304; // x1
  __int64 v305; // x2
  __int64 v306; // x3
  WarBoardUiData_SaveData_o *v307; // x24
  const MethodInfo *v308; // x2
  int64_t v309; // x2
  int32_t v310; // w3
  System_String_o *v311; // x4
  BattleSetupInfo_o *v312; // x5
  FollowerInfo_o *v313; // x6
  PartyListViewItem_o *v314; // x7
  struct WarBoardDataEntity_o *v315; // x8
  int32_t v316; // w22
  struct WarBoardSquareIndexData_SaveData_array *v317; // x0
  int64_t v318; // x2
  int32_t v319; // w3
  System_String_o *v320; // x4
  BattleSetupInfo_o *v321; // x5
  FollowerInfo_o *v322; // x6
  PartyListViewItem_o *v323; // x7
  __int64 v324; // x2
  __int64 v325; // x3
  unsigned __int64 v326; // x24
  __int64 v327; // x26
  __int64 v328; // x27
  struct WarBoardDataEntity_o *v329; // x8
  struct WarBoardSquareIndexData_array *squareIndexInfo; // x8
  struct WarBoardSquareIndexData_SaveData_array *v331; // x28
  WarBoardSquareIndexData_o *v332; // x23
  WarBoardSquareIndexData_SaveData_o *v333; // x22
  const MethodInfo *v334; // x2
  int64_t v335; // x2
  int32_t v336; // w3
  System_String_o *v337; // x4
  BattleSetupInfo_o *v338; // x5
  FollowerInfo_o *v339; // x6
  PartyListViewItem_o *v340; // x7
  struct WarBoardDataEntity_o *v341; // x8
  int32_t v342; // w22
  struct WarBoardBossBattleData_SaveData_array *v343; // x0
  int64_t v344; // x2
  int32_t v345; // w3
  System_String_o *v346; // x4
  BattleSetupInfo_o *v347; // x5
  FollowerInfo_o *v348; // x6
  PartyListViewItem_o *v349; // x7
  __int64 v350; // x2
  __int64 v351; // x3
  unsigned __int64 v352; // x24
  __int64 v353; // x26
  __int64 v354; // x27
  struct WarBoardDataEntity_o *v355; // x8
  struct WarBoardBossBattleData_array *bossBattleInfo; // x8
  struct WarBoardBossBattleData_SaveData_array *v357; // x28
  WarBoardBossBattleData_o *v358; // x23
  WarBoardBossBattleData_SaveData_o *v359; // x22
  int64_t v360; // x2
  int32_t v361; // w3
  System_String_o *v362; // x4
  BattleSetupInfo_o *v363; // x5
  FollowerInfo_o *v364; // x6
  PartyListViewItem_o *v365; // x7
  int32_t ContinueConsumeType_k__BackingField; // w8
  __int64 v367; // x0

  if ( (byte_4B13F5E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___, warBoardData, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardUiData__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPrevCondData__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardEventData__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_HoldReinforcementsData__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardEventData__get_Item__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardUiData__get_Item__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPrevCondData__get_Item__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_HoldReinforcementsData__get_Item__, v23, v24);
    sub_1BCA7E0(&WarBoardTreasureData_SaveData___TypeInfo, v25, v26);
    sub_1BCA7E0(&WarBoardSquareData_SaveData___TypeInfo, v27, v28);
    sub_1BCA7E0(&WarBoardSquareIndexData_SaveData___TypeInfo, v29, v30);
    sub_1BCA7E0(&HoldReinforcementsData_SaveData___TypeInfo, v31, v32);
    sub_1BCA7E0(&WarBoardItemData_SaveData___TypeInfo, v33, v34);
    sub_1BCA7E0(&WarBoardWallData_SaveData___TypeInfo, v35, v36);
    sub_1BCA7E0(&WarBoardPrevCondData_SaveData___TypeInfo, v37, v38);
    sub_1BCA7E0(&WarBoardEventData_SaveData___TypeInfo, v39, v40);
    sub_1BCA7E0(&WarBoardUiData_SaveData___TypeInfo, v41, v42);
    sub_1BCA7E0(&WarBoardPieceData_SaveData___TypeInfo, v43, v44);
    sub_1BCA7E0(&WarBoardBossBattleData_SaveData___TypeInfo, v45, v46);
    sub_1BCA7E0(&WarBoardSquareData_SaveData_TypeInfo, v47, v48);
    sub_1BCA7E0(&WarBoardTreasureData_SaveData_TypeInfo, v49, v50);
    sub_1BCA7E0(&WarBoardBossBattleData_SaveData_TypeInfo, v51, v52);
    sub_1BCA7E0(&WarBoardItemData_SaveData_TypeInfo, v53, v54);
    sub_1BCA7E0(&WarBoardPrevCondData_SaveData_TypeInfo, v55, v56);
    sub_1BCA7E0(&WarBoardWallData_SaveData_TypeInfo, v57, v58);
    sub_1BCA7E0(&WarBoardUiData_SaveData_TypeInfo, v59, v60);
    sub_1BCA7E0(&WarBoardEventData_SaveData_TypeInfo, v61, v62);
    sub_1BCA7E0(&WarBoardSquareIndexData_SaveData_TypeInfo, v63, v64);
    sub_1BCA7E0(&HoldReinforcementsData_SaveData_TypeInfo, v65, v66);
    sub_1BCA7E0(&WarBoardPieceData_SaveData_TypeInfo, v67, v68);
    byte_4B13F5E = 1;
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
  v73 = *(_QWORD *)&pieces->max_length;
  v74 = (struct WarBoardPieceData_SaveData_array *)sub_1BCA888(WarBoardPieceData_SaveData___TypeInfo, (unsigned int)v73);
  this->fields.pieceSaves = v74;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.pieceSaves, (int64_t)v74, v75, v76, v77, v78, v79, v80);
  if ( (int)v73 >= 1 )
  {
    v83 = 0LL;
    v84 = (unsigned int)v73;
    v85 = 32LL;
    while ( 1 )
    {
      v86 = warBoardData->fields.pieces;
      if ( !v86 )
        break;
      if ( v83 >= v86->max_length )
        goto LABEL_118;
      pieceSaves = this->fields.pieceSaves;
      v88 = *(WarBoardPieceData_o **)((char *)&v86->obj.klass + v85);
      v89 = (WarBoardPieceData_SaveData_o *)sub_1BCAA2C(WarBoardPieceData_SaveData_TypeInfo, v70, v81, v82);
      WarBoardPieceData_SaveData___ctor_36234688(v89, v88, v90);
      if ( !pieceSaves )
        break;
      if ( v89 )
      {
        GutsCount = sub_1BCA91C(v89, pieceSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
        {
LABEL_119:
          v367 = sub_1BCAA60(GutsCount);
          sub_1BCA908(v367, 0LL);
        }
      }
      if ( v83 >= pieceSaves->max_length )
LABEL_118:
        sub_1BCAA44(GutsCount, v70);
      *(Il2CppClass **)((char *)&pieceSaves->obj.klass + v85) = (Il2CppClass *)v89;
      sub_1BCA784((PartyOrganizationUtility_o *)((char *)pieceSaves + v85), (int64_t)v89, v91, v92, v93, v94, v95, v96);
      ++v83;
      v85 += 8LL;
      if ( v84 == v83 )
        goto LABEL_15;
    }
LABEL_117:
    sub_1BCAA3C(GutsCount, v70);
  }
LABEL_15:
  items = warBoardData->fields.items;
  if ( !items )
    goto LABEL_117;
  v98 = *(_QWORD *)&items->max_length;
  v99 = (struct WarBoardItemData_SaveData_array *)sub_1BCA888(WarBoardItemData_SaveData___TypeInfo, (unsigned int)v98);
  this->fields.itemSaves = v99;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.itemSaves, (int64_t)v99, v100, v101, v102, v103, v104, v105);
  if ( (int)v98 >= 1 )
  {
    v108 = 0LL;
    v109 = (unsigned int)v98;
    v110 = 32LL;
    do
    {
      v111 = warBoardData->fields.items;
      if ( !v111 )
        goto LABEL_117;
      if ( v108 >= v111->max_length )
        goto LABEL_118;
      itemSaves = this->fields.itemSaves;
      v113 = *(WarBoardItemData_o **)((char *)&v111->obj.klass + v110);
      v114 = (WarBoardItemData_SaveData_o *)sub_1BCAA2C(WarBoardItemData_SaveData_TypeInfo, v70, v106, v107);
      WarBoardItemData_SaveData___ctor_36234772(v114, v113, v115);
      if ( !itemSaves )
        goto LABEL_117;
      if ( v114 )
      {
        GutsCount = sub_1BCA91C(v114, itemSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v108 >= itemSaves->max_length )
        goto LABEL_118;
      *(Il2CppClass **)((char *)&itemSaves->obj.klass + v110) = (Il2CppClass *)v114;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)((char *)itemSaves + v110),
        (int64_t)v114,
        v116,
        v117,
        v118,
        v119,
        v120,
        v121);
      ++v108;
      v110 += 8LL;
    }
    while ( v109 != v108 );
  }
  treasures = warBoardData->fields.treasures;
  if ( !treasures )
    goto LABEL_117;
  v123 = *(_QWORD *)&treasures->max_length;
  v124 = (struct WarBoardTreasureData_SaveData_array *)sub_1BCA888(
                                                         WarBoardTreasureData_SaveData___TypeInfo,
                                                         (unsigned int)v123);
  this->fields.treasureSaves = v124;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.treasureSaves,
    (int64_t)v124,
    v125,
    v126,
    v127,
    v128,
    v129,
    v130);
  if ( (int)v123 >= 1 )
  {
    v133 = 0LL;
    v134 = (unsigned int)v123;
    v135 = 32LL;
    do
    {
      v136 = warBoardData->fields.treasures;
      if ( !v136 )
        goto LABEL_117;
      if ( v133 >= v136->max_length )
        goto LABEL_118;
      treasureSaves = this->fields.treasureSaves;
      v138 = *(WarBoardTreasureData_o **)((char *)&v136->obj.klass + v135);
      v139 = (WarBoardTreasureData_SaveData_o *)sub_1BCAA2C(WarBoardTreasureData_SaveData_TypeInfo, v70, v131, v132);
      WarBoardTreasureData_SaveData___ctor_36234856(v139, v138, v140);
      if ( !treasureSaves )
        goto LABEL_117;
      if ( v139 )
      {
        GutsCount = sub_1BCA91C(v139, treasureSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v133 >= treasureSaves->max_length )
        goto LABEL_118;
      *(Il2CppClass **)((char *)&treasureSaves->obj.klass + v135) = (Il2CppClass *)v139;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)((char *)treasureSaves + v135),
        (int64_t)v139,
        v141,
        v142,
        v143,
        v144,
        v145,
        v146);
      ++v133;
      v135 += 8LL;
    }
    while ( v134 != v133 );
  }
  walls = warBoardData->fields.walls;
  if ( !walls )
    goto LABEL_117;
  v148 = *(_QWORD *)&walls->max_length;
  v149 = (struct WarBoardWallData_SaveData_array *)sub_1BCA888(WarBoardWallData_SaveData___TypeInfo, (unsigned int)v148);
  this->fields.wallSaves = v149;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.wallSaves, (int64_t)v149, v150, v151, v152, v153, v154, v155);
  if ( (int)v148 >= 1 )
  {
    v158 = 0LL;
    v159 = (unsigned int)v148;
    v160 = 32LL;
    do
    {
      v161 = warBoardData->fields.walls;
      if ( !v161 )
        goto LABEL_117;
      if ( v158 >= v161->max_length )
        goto LABEL_118;
      wallSaves = this->fields.wallSaves;
      v163 = *(WarBoardWallData_o **)((char *)&v161->obj.klass + v160);
      v164 = (WarBoardWallData_SaveData_o *)sub_1BCAA2C(WarBoardWallData_SaveData_TypeInfo, v70, v156, v157);
      WarBoardWallData_SaveData___ctor_36234972(v164, v163, v165);
      if ( !wallSaves )
        goto LABEL_117;
      if ( v164 )
      {
        GutsCount = sub_1BCA91C(v164, wallSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v158 >= wallSaves->max_length )
        goto LABEL_118;
      *(Il2CppClass **)((char *)&wallSaves->obj.klass + v160) = (Il2CppClass *)v164;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)((char *)wallSaves + v160),
        (int64_t)v164,
        v166,
        v167,
        v168,
        v169,
        v170,
        v171);
      ++v158;
      v160 += 8LL;
    }
    while ( v159 != v158 );
  }
  squares = warBoardData->fields.squares;
  if ( !squares )
    goto LABEL_117;
  v173 = *(_QWORD *)&squares->max_length;
  v174 = (struct WarBoardSquareData_SaveData_array *)sub_1BCA888(
                                                       WarBoardSquareData_SaveData___TypeInfo,
                                                       (unsigned int)v173);
  this->fields.squareSaves = v174;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.squareSaves,
    (int64_t)v174,
    v175,
    v176,
    v177,
    v178,
    v179,
    v180);
  if ( (int)v173 >= 1 )
  {
    v183 = 0LL;
    v184 = (unsigned int)v173;
    v185 = 32LL;
    do
    {
      v186 = warBoardData->fields.squares;
      if ( !v186 )
        goto LABEL_117;
      if ( v183 >= v186->max_length )
        goto LABEL_118;
      squareSaves = this->fields.squareSaves;
      v188 = *(WarBoardSquareData_o **)((char *)&v186->obj.klass + v185);
      v189 = (WarBoardSquareData_SaveData_o *)sub_1BCAA2C(WarBoardSquareData_SaveData_TypeInfo, v70, v181, v182);
      WarBoardSquareData_SaveData___ctor_36235080(v189, v188, v190);
      if ( !squareSaves )
        goto LABEL_117;
      if ( v189 )
      {
        GutsCount = sub_1BCA91C(v189, squareSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v183 >= squareSaves->max_length )
        goto LABEL_118;
      *(Il2CppClass **)((char *)&squareSaves->obj.klass + v185) = (Il2CppClass *)v189;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)((char *)squareSaves + v185),
        (int64_t)v189,
        v191,
        v192,
        v193,
        v194,
        v195,
        v196);
      ++v183;
      v185 += 8LL;
    }
    while ( v184 != v183 );
  }
  if ( !byte_4B108BA )
  {
    sub_1BCA7E0(&UnityEngine_Vector2_TypeInfo, v70, v181);
    byte_4B108BA = 1;
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
  v200 = (struct WarBoardEventData_SaveData_array *)sub_1BCA888(
                                                      WarBoardEventData_SaveData___TypeInfo,
                                                      (unsigned int)size);
  this->fields.eventSaves = v200;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.eventSaves, (int64_t)v200, v201, v202, v203, v204, v205, v206);
  if ( (int)size >= 1 )
  {
    v213 = 0LL;
    v214 = 32LL;
    do
    {
      GutsCount = (__int64)warBoardData->fields.listEvent;
      if ( !GutsCount )
        goto LABEL_117;
      eventSaves = this->fields.eventSaves;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)GutsCount,
               v213,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_WarBoardEventData__get_Item__);
      v220 = (WarBoardEventData_SaveData_o *)sub_1BCAA2C(WarBoardEventData_SaveData_TypeInfo, v217, v218, v219);
      WarBoardEventData_SaveData___ctor_36235172(v220, (WarBoardEventData_o *)Item, v221);
      if ( !eventSaves )
        goto LABEL_117;
      if ( v220 )
      {
        GutsCount = sub_1BCA91C(v220, eventSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v213 >= eventSaves->max_length )
        goto LABEL_118;
      *(Il2CppClass **)((char *)&eventSaves->obj.klass + v214) = (Il2CppClass *)v220;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)((char *)eventSaves + v214),
        (int64_t)v220,
        v222,
        v223,
        v224,
        v225,
        v226,
        v227);
      ++v213;
      v214 += 8LL;
    }
    while ( size != v213 );
  }
  this->fields.winCondId = warBoardData->fields.winCondId;
  latestPieceActionSquareIndexes = warBoardData->fields.latestPieceActionSquareIndexes;
  this->fields.latestPieceActionSquareIndexes = latestPieceActionSquareIndexes;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.latestPieceActionSquareIndexes,
    (int64_t)latestPieceActionSquareIndexes,
    v207,
    v208,
    v209,
    v210,
    v211,
    v212);
  latestBattlePieceUniqueIndexes = warBoardData->fields.latestBattlePieceUniqueIndexes;
  this->fields.latestBattlePieceUniqueIndexes = latestBattlePieceUniqueIndexes;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.latestBattlePieceUniqueIndexes,
    (int64_t)latestBattlePieceUniqueIndexes,
    v230,
    v231,
    v232,
    v233,
    v234,
    v235);
  listPrevCond = warBoardData->fields.listPrevCond;
  if ( !listPrevCond )
    goto LABEL_117;
  v237 = (unsigned int)listPrevCond->fields._size;
  v238 = (struct WarBoardPrevCondData_SaveData_array *)sub_1BCA888(
                                                         WarBoardPrevCondData_SaveData___TypeInfo,
                                                         (unsigned int)v237);
  this->fields.prevCondSaves = v238;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.prevCondSaves,
    (int64_t)v238,
    v239,
    v240,
    v241,
    v242,
    v243,
    v244);
  if ( (int)v237 >= 1 )
  {
    v245 = 0LL;
    v246 = 32LL;
    do
    {
      GutsCount = (__int64)warBoardData->fields.listPrevCond;
      if ( !GutsCount )
        goto LABEL_117;
      prevCondSaves = this->fields.prevCondSaves;
      v248 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)GutsCount,
               v245,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_WarBoardPrevCondData__get_Item__);
      v252 = (WarBoardPrevCondData_SaveData_o *)sub_1BCAA2C(WarBoardPrevCondData_SaveData_TypeInfo, v249, v250, v251);
      WarBoardPrevCondData_SaveData___ctor_36235232(v252, (WarBoardPrevCondData_o *)v248, v253);
      if ( !prevCondSaves )
        goto LABEL_117;
      if ( v252 )
      {
        GutsCount = sub_1BCA91C(v252, prevCondSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v245 >= prevCondSaves->max_length )
        goto LABEL_118;
      *(Il2CppClass **)((char *)&prevCondSaves->obj.klass + v246) = (Il2CppClass *)v252;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)((char *)prevCondSaves + v246),
        (int64_t)v252,
        v254,
        v255,
        v256,
        v257,
        v258,
        v259);
      ++v245;
      v246 += 8LL;
    }
    while ( v237 != v245 );
  }
  reinforcementsSaveList = warBoardData->fields.reinforcementsSaveList;
  if ( !reinforcementsSaveList )
    goto LABEL_117;
  v261 = (unsigned int)reinforcementsSaveList->fields._size;
  v262 = (struct HoldReinforcementsData_SaveData_array *)sub_1BCA888(
                                                           HoldReinforcementsData_SaveData___TypeInfo,
                                                           (unsigned int)v261);
  this->fields.reinforcementsSaves = v262;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.reinforcementsSaves,
    (int64_t)v262,
    v263,
    v264,
    v265,
    v266,
    v267,
    v268);
  if ( (int)v261 >= 1 )
  {
    v269 = 0LL;
    v270 = 32LL;
    do
    {
      GutsCount = (__int64)warBoardData->fields.reinforcementsSaveList;
      if ( !GutsCount )
        goto LABEL_117;
      reinforcementsSaves = this->fields.reinforcementsSaves;
      v272 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)GutsCount,
               v269,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_HoldReinforcementsData__get_Item__);
      v276 = (HoldReinforcementsData_SaveData_o *)sub_1BCAA2C(
                                                    HoldReinforcementsData_SaveData_TypeInfo,
                                                    v273,
                                                    v274,
                                                    v275);
      HoldReinforcementsData_SaveData___ctor_36235284(v276, (HoldReinforcementsData_o *)v272, v277);
      if ( !reinforcementsSaves )
        goto LABEL_117;
      if ( v276 )
      {
        GutsCount = sub_1BCA91C(v276, reinforcementsSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v269 >= reinforcementsSaves->max_length )
        goto LABEL_118;
      *(Il2CppClass **)((char *)&reinforcementsSaves->obj.klass + v270) = (Il2CppClass *)v276;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)((char *)reinforcementsSaves + v270),
        (int64_t)v276,
        v278,
        v279,
        v280,
        v281,
        v282,
        v283);
      ++v269;
      v270 += 8LL;
    }
    while ( v261 != v269 );
  }
  GutsCount = (__int64)warBoardData->fields.playedStageReinforcementsList;
  if ( !GutsCount )
    goto LABEL_117;
  v284 = System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)GutsCount,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.playedReinforcements = v284;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.playedReinforcements,
    (int64_t)v284,
    v285,
    v286,
    v287,
    v288,
    v289,
    v290);
  listUiData = warBoardData->fields.listUiData;
  if ( !listUiData )
    goto LABEL_117;
  v292 = (unsigned int)listUiData->fields._size;
  v293 = (struct WarBoardUiData_SaveData_array *)sub_1BCA888(WarBoardUiData_SaveData___TypeInfo, (unsigned int)v292);
  this->fields.uiDataSaves = v293;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.uiDataSaves,
    (int64_t)v293,
    v294,
    v295,
    v296,
    v297,
    v298,
    v299);
  if ( (int)v292 >= 1 )
  {
    v300 = 0LL;
    v301 = 32LL;
    do
    {
      GutsCount = (__int64)warBoardData->fields.listUiData;
      if ( !GutsCount )
        goto LABEL_117;
      uiDataSaves = this->fields.uiDataSaves;
      v303 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)GutsCount,
               v300,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_WarBoardUiData__get_Item__);
      v307 = (WarBoardUiData_SaveData_o *)sub_1BCAA2C(WarBoardUiData_SaveData_TypeInfo, v304, v305, v306);
      WarBoardUiData_SaveData___ctor_36235344(v307, (WarBoardUiData_o *)v303, v308);
      if ( !uiDataSaves )
        goto LABEL_117;
      if ( v307 )
      {
        GutsCount = sub_1BCA91C(v307, uiDataSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v300 >= uiDataSaves->max_length )
        goto LABEL_118;
      *(Il2CppClass **)((char *)&uiDataSaves->obj.klass + v301) = (Il2CppClass *)v307;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)((char *)uiDataSaves + v301),
        (int64_t)v307,
        v309,
        v310,
        v311,
        v312,
        v313,
        v314);
      ++v300;
      v301 += 8LL;
    }
    while ( v292 != v300 );
  }
  v315 = warBoardData->fields.serverData;
  if ( !v315 )
    goto LABEL_117;
  v316 = System_Linq_Enumerable__Count_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v315->fields.squareIndexInfo,
           (const MethodInfo_2F2DF88 *)Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___);
  v317 = (struct WarBoardSquareIndexData_SaveData_array *)sub_1BCA888(
                                                            WarBoardSquareIndexData_SaveData___TypeInfo,
                                                            (unsigned int)v316);
  this->fields.squareIndexInfo = v317;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.squareIndexInfo,
    (int64_t)v317,
    v318,
    v319,
    v320,
    v321,
    v322,
    v323);
  if ( v316 >= 1 )
  {
    v326 = 0LL;
    v327 = (unsigned int)v316;
    v328 = 32LL;
    do
    {
      v329 = warBoardData->fields.serverData;
      if ( !v329 )
        goto LABEL_117;
      squareIndexInfo = v329->fields.squareIndexInfo;
      if ( !squareIndexInfo )
        goto LABEL_117;
      if ( v326 >= squareIndexInfo->max_length )
        goto LABEL_118;
      v331 = this->fields.squareIndexInfo;
      v332 = *(WarBoardSquareIndexData_o **)((char *)&squareIndexInfo->obj.klass + v328);
      v333 = (WarBoardSquareIndexData_SaveData_o *)sub_1BCAA2C(
                                                     WarBoardSquareIndexData_SaveData_TypeInfo,
                                                     v70,
                                                     v324,
                                                     v325);
      WarBoardSquareIndexData_SaveData___ctor_36235424(v333, v332, v334);
      if ( !v331 )
        goto LABEL_117;
      if ( v333 )
      {
        GutsCount = sub_1BCA91C(v333, v331->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v326 >= v331->max_length )
        goto LABEL_118;
      *(Il2CppClass **)((char *)&v331->obj.klass + v328) = (Il2CppClass *)v333;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)((char *)v331 + v328),
        (int64_t)v333,
        v335,
        v336,
        v337,
        v338,
        v339,
        v340);
      ++v326;
      v328 += 8LL;
    }
    while ( v327 != v326 );
  }
  v341 = warBoardData->fields.serverData;
  if ( !v341 )
    goto LABEL_117;
  v342 = System_Linq_Enumerable__Count_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v341->fields.bossBattleInfo,
           (const MethodInfo_2F2DF88 *)Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___);
  v343 = (struct WarBoardBossBattleData_SaveData_array *)sub_1BCA888(
                                                           WarBoardBossBattleData_SaveData___TypeInfo,
                                                           (unsigned int)v342);
  this->fields.bossBattleInfo = v343;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.bossBattleInfo,
    (int64_t)v343,
    v344,
    v345,
    v346,
    v347,
    v348,
    v349);
  if ( v342 >= 1 )
  {
    v352 = 0LL;
    v353 = (unsigned int)v342;
    v354 = 32LL;
    do
    {
      v355 = warBoardData->fields.serverData;
      if ( !v355 )
        goto LABEL_117;
      bossBattleInfo = v355->fields.bossBattleInfo;
      if ( !bossBattleInfo )
        goto LABEL_117;
      if ( v352 >= bossBattleInfo->max_length )
        goto LABEL_118;
      v357 = this->fields.bossBattleInfo;
      v358 = *(WarBoardBossBattleData_o **)((char *)&bossBattleInfo->obj.klass + v354);
      v359 = (WarBoardBossBattleData_SaveData_o *)sub_1BCAA2C(WarBoardBossBattleData_SaveData_TypeInfo, v70, v350, v351);
      WarBoardBossBattleData_SaveData___ctor_36030228(v359, v358, 0LL);
      if ( !v357 )
        goto LABEL_117;
      if ( v359 )
      {
        GutsCount = sub_1BCA91C(v359, v357->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v352 >= v357->max_length )
        goto LABEL_118;
      *(Il2CppClass **)((char *)&v357->obj.klass + v354) = (Il2CppClass *)v359;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)((char *)v357 + v354),
        (int64_t)v359,
        v360,
        v361,
        v362,
        v363,
        v364,
        v365);
      ++v352;
      v354 += 8LL;
    }
    while ( v353 != v352 );
  }
  ContinueConsumeType_k__BackingField = warBoardData->fields._ContinueConsumeType_k__BackingField;
  *(_WORD *)&this->fields.isContinue = 0;
  this->fields.continueConsumeType = ContinueConsumeType_k__BackingField;
  this->fields.localSaveTiming = warBoardData->fields.localSaveTiming;
}


void __fastcall WarBoardData___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B13F64 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardData___c_TypeInfo, v1, v2);
    byte_4B13F64 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(WarBoardData___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  WarBoardData___c_TypeInfo->static_fields->__9 = (struct WarBoardData___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarBoardData___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, x);
  return x->fields.squareIndex - y->fields.squareIndex;
}


uint32_t __fastcall WarBoardData___c____ctor_b__77_1(
        WarBoardData___c_o *this,
        WarBoardStageNpcEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return (x->fields.forceId << 24) | ((unsigned __int8)x->fields.groupId << 16);
}


uint32_t __fastcall WarBoardData___c____ctor_b__77_2(
        WarBoardData___c_o *this,
        WarBoardActionPointEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return (x->fields.forceId << 24) | ((unsigned __int8)x->fields.groupId << 16);
}


int32_t __fastcall WarBoardData___c____ctor_b__77_3(
        WarBoardData___c_o *this,
        WarBoardStageNpcEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.forceId;
}


int32_t __fastcall WarBoardData___c____ctor_b__77_4(
        WarBoardData___c_o *this,
        WarBoardStageNpcEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.groupId;
}


bool __fastcall WarBoardData___c____ctor_b__77_9(
        WarBoardData___c_o *this,
        WarBoardUserTreasureData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.isReceived;
}


BattleBuffData_o *__fastcall WarBoardData___c___BuffTurnProgressing_b__191_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *p,
        const MethodInfo *method)
{
  struct BattleServantData_o *battleServant_k__BackingField; // x8

  if ( !p )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  WarBoardManager_o *v5; // x19

  if ( (byte_4B13F66 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method, v2);
    byte_4B13F66 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  v5 = (WarBoardManager_o *)Instance;
  WarBoardManager__UpdateEventBossUIData((WarBoardManager_o *)Instance, 0LL);
  WarBoardManager__SaveEventBossUIData(
    v5,
    v5->fields._EventId_k__BackingField,
    v5->fields._StageId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


bool __fastcall WarBoardData___c___GetAliveEnemyServantPieces_b__110_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  return !x->fields._isDead_k__BackingField;
}


bool __fastcall WarBoardData___c___GetAlivePlayerGroupServantPieces_b__109_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  return !x->fields._isDead_k__BackingField && x->fields._type_k__BackingField == 0;
}


bool __fastcall WarBoardData___c___GetEditableServantPieces_b__120_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  return x->fields._holdNum_k__BackingField < 1;
}


int32_t __fastcall WarBoardData___c___GetInRangeSquareIndecies_b__123_0(
        WarBoardData___c_o *this,
        WarBoardData_SquareRangeSearch_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.squareIndex;
}


bool __fastcall WarBoardData___c___GetPlayerMasterPiece_b__104_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
  if ( (byte_4B13F65 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__, status, method);
    byte_4B13F65 = 1;
  }
  return value;
}


int32_t __fastcall WarBoardData___c___SetContinue_b__82_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields._index_k__BackingField;
}


BattleServantData_o *__fastcall WarBoardData___c___SetContinue_b__82_1(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields._battleServant_k__BackingField;
}


bool __fastcall WarBoardData___c___SetContinue_b__82_2(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields._isDead_k__BackingField && x->fields._battleServant_k__BackingField != 0LL;
}


int32_t __fastcall WarBoardData___c___SetContinue_b__82_3(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct BattleServantData_o *battleServant_k__BackingField; // x8

  if ( !x || (battleServant_k__BackingField = x->fields._battleServant_k__BackingField) == 0LL )
    sub_1BCAA3C(this, x);
  return battleServant_k__BackingField->fields.uniqueId;
}


void __fastcall WarBoardData___c___SetContinue_b__82_4(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  WarBoardPieceData__ProcContinue(x, (const MethodInfo *)x);
}


bool __fastcall WarBoardData___c___SetPlayerMasterUserEquip_b__144_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  WarBoardPieceData__SetServarData(x, (const MethodInfo *)x);
}


System_String_o *__fastcall WarBoardData___c___SetRequest_b__156_1(
        WarBoardData___c_o *this,
        WarBoardItemData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  return p->fields.pieceComponent;
}


bool __fastcall WarBoardData___c___UpdateBuffTurnNoticeDisp_b__192_1(
        WarBoardData___c_o *this,
        WarBoardPieceBaseComponent_o *c,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *v7; // x19

  if ( (byte_4B13F67 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, c, method);
    byte_4B13F67 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, c);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)c, 0LL, 0LL);
  if ( !v4 )
    return 0;
  if ( !c )
    sub_1BCAA3C(v4, v5);
  v7 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))c->klass->vtable._4_get_BuffTrunNotice.method)(
                                 c,
                                 c->klass->vtable._5_Initialize.methodPtr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  return UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
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
    sub_1BCAA3C(this, n);
  }
  WarBoardServantPieceBuffTurnComponent__UpdateDisp((WarBoardServantPieceBuffTurnComponent_o *)this, 1, 0LL);
}


int32_t __fastcall WarBoardData___c___UpdateCurrentPartyCost_b__143_0(
        WarBoardData___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return UserServantEntity__getCost(x, 0LL);
}


bool __fastcall WarBoardData___c___get_PlayerMasterUserEquipId_b__62_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, x);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, x);
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
    sub_1BCAA3C(this, x);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
  if ( (byte_4B13F68 & 1) == 0 )
  {
    this = (WarBoardData___c__DisplayClass118_0_o *)sub_1BCA7E0(
                                                      &Method_System_Linq_Enumerable_Contains_int___,
                                                      x,
                                                      method);
    byte_4B13F68 = 1;
  }
  if ( !x )
    sub_1BCAA3C(this, x);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.inRangeSquaers,
           x->fields._nowSquareIndex_k__BackingField,
           (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
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
  if ( (byte_4B13F69 & 1) == 0 )
  {
    this = (WarBoardData___c__DisplayClass119_0_o *)sub_1BCA7E0(
                                                      &Method_System_Linq_Enumerable_Contains_int___,
                                                      x,
                                                      method);
    byte_4B13F69 = 1;
  }
  if ( !x )
    sub_1BCAA3C(this, x);
  return !x->fields._isDead_k__BackingField
      && System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.inRangeSquaers,
           x->fields._nowSquareIndex_k__BackingField,
           (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, x);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, x);
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
    sub_1BCAA3C(this, 0LL);
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
  __int64 v6; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *svtMaster; // x20
  __int64 v8; // x19
  __int64 v9; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  v4 = this;
  if ( (byte_4B13F6A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, x, method);
    this = (WarBoardData___c__DisplayClass143_0_o *)sub_1BCA7E0(
                                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                      v5,
                                                      v6);
    byte_4B13F6A = 1;
  }
  if ( !x )
    goto LABEL_9;
  svtMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields.svtMaster;
  v9 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, x);
  *(_QWORD *)&v11.fields.currentCryptoKey = v9;
  *(_QWORD *)&v11.fields.fakeValue = v8;
  this = (WarBoardData___c__DisplayClass143_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                    v11,
                                                    0LL);
  if ( !svtMaster
    || (this = (WarBoardData___c__DisplayClass143_0_o *)DataMasterBase_object__object__int___GetEntity(
                                                          svtMaster,
                                                          (int32_t)this,
                                                          (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1BCAA3C(this, x);
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
    sub_1BCAA3C(this, x);
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
    sub_1BCAA3C(this, x);
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
    sub_1BCAA3C(this, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Action_bool__o *_9__2; // x21
  WarBoardManager_o *v21; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int32_t key; // w0
  struct System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___o *consumedPieceActionPointDict; // x8
  int32_t v30; // w19
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *Only; // x0
  Il2CppObject *value; // x1
  System_Collections_Generic_KeyValuePair_int__object__o KeyValuePair_int__object; // kr00_16

  if ( (byte_4B13F6B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_bool__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__List_WarBoardPieceData___get_Key__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__List_WarBoardPieceData___get_Value__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPieceData__AsReadOnly__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__2__, v14, v15);
    byte_4B13F6B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  _9__2 = this->fields.__9__2;
  v21 = (WarBoardManager_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_bool__o *)sub_1BCAA2C(System_Action_bool__TypeInfo, v17, v18, v19);
    System_Action_bool____ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v22, v23, v24, v25, v26, v27);
  }
  key = System_Linq_Enumerable__First_KeyValuePair_int__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.consumedPieceActionPointDict,
          (const MethodInfo_2F3201C *)Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____).fields.key;
  consumedPieceActionPointDict = this->fields.consumedPieceActionPointDict;
  v30 = key;
  KeyValuePair_int__object = System_Linq_Enumerable__First_KeyValuePair_int__object__(
                               (System_Collections_Generic_IEnumerable_TSource__o *)consumedPieceActionPointDict,
                               (const MethodInfo_2F3201C *)Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____);
  value = KeyValuePair_int__object.fields.value;
  Only = *(System_Collections_ObjectModel_ReadOnlyCollection_T__o **)&KeyValuePair_int__object.fields.key;
  if ( !KeyValuePair_int__object.fields.value
    || (Only = System_Collections_Generic_List_object___AsReadOnly(
                 (System_Collections_Generic_List_object__o *)KeyValuePair_int__object.fields.value,
                 (const MethodInfo_35A1E84 *)Method_System_Collections_Generic_List_WarBoardPieceData__AsReadOnly__),
        !v21) )
  {
    sub_1BCAA3C(Only, value);
  }
  WarBoardManager__ShowConsumedPieceActionPointPopup(
    v21,
    _9__2,
    v30,
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *_9__3; // x22
  WarBoardManager_o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B13F6C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, _, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__3__, v6, v7);
    byte_4B13F6C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  _9__3 = this->fields.__9__3;
  v13 = (WarBoardManager_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__3, (int64_t)_9__3, v14, v15, v16, v17, v18, v19);
  }
  if ( !v13 )
    sub_1BCAA3C(Instance, v9);
  WarBoardManager__HideConsumedPieceActionPointPopup(v13, _9__3, 0LL);
}


void __fastcall WarBoardData___c__DisplayClass154_0___ShowConsumedPieceActionPointPopup_b__3(
        WarBoardData___c__DisplayClass154_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___o *consumedPieceActionPointDict; // x20
  WarBoardData_o *_4__this; // x0
  Il2CppObject *value; // x1
  System_Collections_Generic_KeyValuePair_int__object__o KeyValuePair_int__object; // kr00_16

  if ( (byte_4B13F6D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Remove__, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__List_WarBoardPieceData___get_Key__, v6, v7);
    byte_4B13F6D = 1;
  }
  this->fields.consumedPiecePopupClose = 1;
  consumedPieceActionPointDict = this->fields.consumedPieceActionPointDict;
  KeyValuePair_int__object = System_Linq_Enumerable__First_KeyValuePair_int__object__(
                               (System_Collections_Generic_IEnumerable_TSource__o *)consumedPieceActionPointDict,
                               (const MethodInfo_2F3201C *)Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____);
  value = KeyValuePair_int__object.fields.value;
  _4__this = *(WarBoardData_o **)&KeyValuePair_int__object.fields.key;
  if ( !consumedPieceActionPointDict
    || (System_Collections_Generic_Dictionary_int__object___Remove(
          (System_Collections_Generic_Dictionary_int__object__o *)consumedPieceActionPointDict,
          KeyValuePair_int__object.fields.key,
          (const MethodInfo_320736C *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Remove__),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_1BCAA3C(_4__this, value);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, x);
  return x->fields.stageReinforcementId == pram->fields._id_k__BackingField;
}


void __fastcall WarBoardData___c__DisplayClass189_0___ctor(
        WarBoardData___c__DisplayClass189_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardData___c__DisplayClass189_0___GetReinforcements_b__0(
        WarBoardData___c__DisplayClass189_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct WarBoardStageReinforcementsEntity_o *stageEntity; // x8

  stageEntity = this->fields.stageEntity;
  if ( !stageEntity )
    sub_1BCAA3C(this, *(_QWORD *)&x);
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
  __int64 v3; // x3
  WarBoardData___c__DisplayClass189_1_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct WarBoardData___c__DisplayClass189_0_o *CS___8__locals1; // x8
  struct WarBoardStageReinforcementsEntity_o *stageEntity; // x8
  System_Int32_array *reinforcementsIdx; // x20
  System_Func_int__bool__o *_9__2; // x22
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  v5 = this;
  if ( (byte_4B13F6E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int____76840176, x, method);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v6, v7);
    this = (WarBoardData___c__DisplayClass189_1_o *)sub_1BCA7E0(
                                                      &Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__2__,
                                                      v8,
                                                      v9);
    byte_4B13F6E = 1;
  }
  if ( !x
    || (CS___8__locals1 = v5->fields.CS___8__locals1) == 0LL
    || (stageEntity = CS___8__locals1->fields.stageEntity) == 0LL )
  {
    sub_1BCAA3C(this, x);
  }
  if ( x->fields.stageReinforcementId != stageEntity->fields.id )
    return 0;
  reinforcementsIdx = x->fields.reinforcementsIdx;
  _9__2 = v5->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, x, method, v3);
    System_Func_int__bool____ctor(
      _9__2,
      (Il2CppObject *)v5,
      Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__2__,
      0LL);
    v5->fields.__9__2 = _9__2;
    sub_1BCA784((PartyOrganizationUtility_o *)&v5->fields.__9__2, (int64_t)_9__2, v14, v15, v16, v17, v18, v19);
  }
  return BasicHelper__Any_int__49273364(
           reinforcementsIdx,
           (System_Func_T__bool__o *)_9__2,
           (const MethodInfo_2EFDA14 *)Method_BasicHelper_Any_int____76840176);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardData___c__DisplayClass190_0___IsReinforcementsApper_b__0(
        WarBoardData___c__DisplayClass190_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct WarBoardStageReinforcementsEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1BCAA3C(this, *(_QWORD *)&x);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, a);
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
      sub_1BCAA44(this, a);
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
    sub_1BCAA3C(this, x);
  return x->fields.forceId == piece->fields.forceId && x->fields.groupId == piece->fields.groupId;
}


bool __fastcall WarBoardData___c__DisplayClass77_0____ctor_b__6(
        WarBoardData___c__DisplayClass77_0_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_SaveData_o *piece; // x8

  if ( !x || (piece = this->fields.piece) == 0LL )
    sub_1BCAA3C(this, x);
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
    sub_1BCAA3C(this, x);
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
    sub_1BCAA3C(this, x);
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
    sub_1BCAA3C(this, x);
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
    sub_1BCAA3C(this, x);
  return x->fields.treasureId == layout->fields.effectId;
}


bool __fastcall WarBoardData___c__DisplayClass77_4____ctor_b__12(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserMasterData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0LL )
    sub_1BCAA3C(this, x);
  return x->fields.forceId == layout->fields.forceId && x->fields.groupId == layout->fields.groupId;
}


bool __fastcall WarBoardData___c__DisplayClass77_4____ctor_b__13(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0LL )
    sub_1BCAA3C(this, x);
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
    sub_1BCAA3C(this, x);
  return x->fields.squareIndex == layout->fields.squareIndex;
}


bool __fastcall WarBoardData___c__DisplayClass77_4____ctor_b__15(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserWallData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0LL )
    sub_1BCAA3C(this, x);
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
    sub_1BCAA3C(this, x);
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
    sub_1BCAA3C(this, x);
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
    sub_1BCAA3C(this, 0LL);
  return !x->fields._isDead_k__BackingField && x->fields._uniqueIndex_k__BackingField == this->fields.uniqueId;
}