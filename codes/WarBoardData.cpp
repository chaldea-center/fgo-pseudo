void __fastcall WarBoardData___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v15; // x1
  struct WarBoardData_StaticFields *v16; // x0
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42E77AA & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardData_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_1687/*"AFTER_CONTINUE_DEVICE_FOR_WARBOARD"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_15390/*"WARBOARDDATA_SAVEDATA"*/, v11, v12, v13);
    byte_42E77AA = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardData_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_15390/*"WARBOARDDATA_SAVEDATA"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_15390/*"WARBOARDDATA_SAVEDATA"*/;
  sub_B5D560(static_fields, v15, v2, v3, v4, v5, v6, v7);
  v16 = WarBoardData_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_1687/*"AFTER_CONTINUE_DEVICE_FOR_WARBOARD"*/;
  v16->AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY = (struct System_String_o *)StringLiteral_1687/*"AFTER_CONTINUE_DEVICE_FOR_WARBOARD"*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v16->AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
}


void __fastcall WarBoardData___ctor(
        WarBoardData_o *this,
        WarBoardStageEntity_o *stage,
        WarBoardStageLayoutEntity_array *layoutEntities,
        WarBoardRoadEntity_array *roadEntities,
        WarBoardDataEntity_o *serverData,
        const MethodInfo *method)
{
  WarBoardRoadEntity_array *v7; // x28
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  int v79; // w1
  int v80; // w2
  __int64 v81; // x3
  int v82; // w1
  int v83; // w2
  __int64 v84; // x3
  int v85; // w1
  int v86; // w2
  __int64 v87; // x3
  int v88; // w1
  int v89; // w2
  __int64 v90; // x3
  int v91; // w1
  int v92; // w2
  __int64 v93; // x3
  int v94; // w1
  int v95; // w2
  __int64 v96; // x3
  int v97; // w1
  int v98; // w2
  __int64 v99; // x3
  int v100; // w1
  int v101; // w2
  __int64 v102; // x3
  int v103; // w1
  int v104; // w2
  __int64 v105; // x3
  int v106; // w1
  int v107; // w2
  __int64 v108; // x3
  int v109; // w1
  int v110; // w2
  __int64 v111; // x3
  int v112; // w1
  int v113; // w2
  __int64 v114; // x3
  int v115; // w1
  int v116; // w2
  __int64 v117; // x3
  int v118; // w1
  int v119; // w2
  __int64 v120; // x3
  int v121; // w1
  int v122; // w2
  __int64 v123; // x3
  int v124; // w1
  int v125; // w2
  __int64 v126; // x3
  int v127; // w1
  int v128; // w2
  __int64 v129; // x3
  int v130; // w1
  int v131; // w2
  __int64 v132; // x3
  int v133; // w1
  int v134; // w2
  __int64 v135; // x3
  int v136; // w1
  int v137; // w2
  __int64 v138; // x3
  int v139; // w1
  int v140; // w2
  __int64 v141; // x3
  int v142; // w1
  int v143; // w2
  __int64 v144; // x3
  int v145; // w1
  int v146; // w2
  __int64 v147; // x3
  int v148; // w1
  int v149; // w2
  __int64 v150; // x3
  int v151; // w1
  int v152; // w2
  __int64 v153; // x3
  int v154; // w1
  int v155; // w2
  __int64 v156; // x3
  int v157; // w1
  int v158; // w2
  __int64 v159; // x3
  int v160; // w1
  int v161; // w2
  __int64 v162; // x3
  int v163; // w1
  int v164; // w2
  __int64 v165; // x3
  int v166; // w1
  int v167; // w2
  __int64 v168; // x3
  int v169; // w1
  int v170; // w2
  __int64 v171; // x3
  int v172; // w1
  int v173; // w2
  __int64 v174; // x3
  int v175; // w1
  int v176; // w2
  __int64 v177; // x3
  int v178; // w1
  int v179; // w2
  __int64 v180; // x3
  int v181; // w1
  int v182; // w2
  __int64 v183; // x3
  int v184; // w1
  int v185; // w2
  __int64 v186; // x3
  int v187; // w1
  int v188; // w2
  __int64 v189; // x3
  int v190; // w1
  int v191; // w2
  __int64 v192; // x3
  int v193; // w1
  int v194; // w2
  __int64 v195; // x3
  int v196; // w1
  int v197; // w2
  __int64 v198; // x3
  int v199; // w1
  int v200; // w2
  __int64 v201; // x3
  int v202; // w1
  int v203; // w2
  __int64 v204; // x3
  int v205; // w1
  int v206; // w2
  __int64 v207; // x3
  int v208; // w1
  int v209; // w2
  __int64 v210; // x3
  int v211; // w1
  int v212; // w2
  __int64 v213; // x3
  int v214; // w1
  int v215; // w2
  __int64 v216; // x3
  int v217; // w1
  int v218; // w2
  __int64 v219; // x3
  int v220; // w1
  int v221; // w2
  __int64 v222; // x3
  int v223; // w1
  int v224; // w2
  __int64 v225; // x3
  int v226; // w1
  int v227; // w2
  __int64 v228; // x3
  int v229; // w1
  int v230; // w2
  __int64 v231; // x3
  int v232; // w1
  int v233; // w2
  __int64 v234; // x3
  int v235; // w1
  int v236; // w2
  __int64 v237; // x3
  int v238; // w1
  int v239; // w2
  __int64 v240; // x3
  int v241; // w1
  int v242; // w2
  __int64 v243; // x3
  int v244; // w1
  int v245; // w2
  __int64 v246; // x3
  int v247; // w1
  int v248; // w2
  __int64 v249; // x3
  int v250; // w1
  int v251; // w2
  __int64 v252; // x3
  int v253; // w1
  int v254; // w2
  __int64 v255; // x3
  int v256; // w1
  int v257; // w2
  __int64 v258; // x3
  int v259; // w1
  int v260; // w2
  __int64 v261; // x3
  int v262; // w1
  int v263; // w2
  __int64 v264; // x3
  int v265; // w1
  int v266; // w2
  __int64 v267; // x3
  int v268; // w1
  int v269; // w2
  __int64 v270; // x3
  int v271; // w1
  int v272; // w2
  __int64 v273; // x3
  int v274; // w1
  int v275; // w2
  __int64 v276; // x3
  int v277; // w1
  int v278; // w2
  __int64 v279; // x3
  int v280; // w1
  int v281; // w2
  __int64 v282; // x3
  int v283; // w1
  int v284; // w2
  __int64 v285; // x3
  int v286; // w1
  int v287; // w2
  __int64 v288; // x3
  int v289; // w1
  int v290; // w2
  __int64 v291; // x3
  int v292; // w1
  int v293; // w2
  __int64 v294; // x3
  int v295; // w1
  int v296; // w2
  __int64 v297; // x3
  int v298; // w1
  int v299; // w2
  __int64 v300; // x3
  int v301; // w1
  int v302; // w2
  __int64 v303; // x3
  int v304; // w1
  int v305; // w2
  __int64 v306; // x3
  int v307; // w1
  int v308; // w2
  __int64 v309; // x3
  int v310; // w1
  int v311; // w2
  __int64 v312; // x3
  int v313; // w1
  int v314; // w2
  __int64 v315; // x3
  int v316; // w1
  int v317; // w2
  __int64 v318; // x3
  int v319; // w1
  int v320; // w2
  __int64 v321; // x3
  int v322; // w1
  int v323; // w2
  __int64 v324; // x3
  int v325; // w1
  int v326; // w2
  __int64 v327; // x3
  int v328; // w1
  int v329; // w2
  __int64 v330; // x3
  int v331; // w1
  int v332; // w2
  __int64 v333; // x3
  int v334; // w1
  int v335; // w2
  __int64 v336; // x3
  int v337; // w1
  int v338; // w2
  __int64 v339; // x3
  int v340; // w1
  int v341; // w2
  __int64 v342; // x3
  int v343; // w1
  int v344; // w2
  __int64 v345; // x3
  int v346; // w1
  int v347; // w2
  __int64 v348; // x3
  int v349; // w1
  int v350; // w2
  __int64 v351; // x3
  int v352; // w1
  int v353; // w2
  __int64 v354; // x3
  int v355; // w1
  int v356; // w2
  __int64 v357; // x3
  int v358; // w1
  int v359; // w2
  __int64 v360; // x3
  int v361; // w1
  int v362; // w2
  __int64 v363; // x3
  int v364; // w1
  int v365; // w2
  __int64 v366; // x3
  int v367; // w1
  int v368; // w2
  __int64 v369; // x3
  int v370; // w1
  int v371; // w2
  __int64 v372; // x3
  int v373; // w1
  int v374; // w2
  __int64 v375; // x3
  int v376; // w1
  int v377; // w2
  __int64 v378; // x3
  int v379; // w1
  int v380; // w2
  __int64 v381; // x3
  int v382; // w1
  int v383; // w2
  __int64 v384; // x3
  int v385; // w1
  int v386; // w2
  __int64 v387; // x3
  int v388; // w1
  int v389; // w2
  __int64 v390; // x3
  int v391; // w1
  int v392; // w2
  __int64 v393; // x3
  int v394; // w1
  int v395; // w2
  __int64 v396; // x3
  int v397; // w1
  int v398; // w2
  __int64 v399; // x3
  int v400; // w1
  int v401; // w2
  __int64 v402; // x3
  int v403; // w1
  int v404; // w2
  __int64 v405; // x3
  int v406; // w1
  int v407; // w2
  __int64 v408; // x3
  int v409; // w1
  int v410; // w2
  __int64 v411; // x3
  int v412; // w1
  int v413; // w2
  __int64 v414; // x3
  int v415; // w1
  int v416; // w2
  __int64 v417; // x3
  int v418; // w1
  int v419; // w2
  __int64 v420; // x3
  int v421; // w1
  int v422; // w2
  __int64 v423; // x3
  int v424; // w1
  int v425; // w2
  __int64 v426; // x3
  int v427; // w1
  int v428; // w2
  __int64 v429; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v430; // x19
  System_String_array **v431; // x2
  System_String_array **v432; // x3
  System_Boolean_array **v433; // x4
  System_Int32_array **v434; // x5
  System_Int32_array *v435; // x6
  System_Int32_array *v436; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v437; // x19
  System_String_array **v438; // x2
  System_String_array **v439; // x3
  System_Boolean_array **v440; // x4
  System_Int32_array **v441; // x5
  System_Int32_array *v442; // x6
  System_Int32_array *v443; // x7
  struct System_Int32_array *v444; // x0
  System_String_array **v445; // x2
  System_String_array **v446; // x3
  System_Boolean_array **v447; // x4
  System_Int32_array **v448; // x5
  System_Int32_array *v449; // x6
  System_Int32_array *v450; // x7
  struct System_UInt32_array *v451; // x0
  System_String_array **v452; // x2
  System_String_array **v453; // x3
  System_Boolean_array **v454; // x4
  System_Int32_array **v455; // x5
  System_Int32_array *v456; // x6
  System_Int32_array *v457; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v458; // x19
  System_String_array **v459; // x2
  System_String_array **v460; // x3
  System_Boolean_array **v461; // x4
  System_Int32_array **v462; // x5
  System_Int32_array *v463; // x6
  System_Int32_array *v464; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v465; // x19
  System_String_array **v466; // x2
  System_String_array **v467; // x3
  System_Boolean_array **v468; // x4
  System_Int32_array **v469; // x5
  System_Int32_array *v470; // x6
  System_Int32_array *v471; // x7
  System_Collections_Generic_List_int__o *v472; // x19
  System_String_array **v473; // x2
  System_String_array **v474; // x3
  System_Boolean_array **v475; // x4
  System_Int32_array **v476; // x5
  System_Int32_array *v477; // x6
  System_Int32_array *v478; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v479; // x19
  System_String_array **v480; // x2
  System_String_array **v481; // x3
  System_Boolean_array **v482; // x4
  System_Int32_array **v483; // x5
  System_Int32_array *v484; // x6
  System_Int32_array *v485; // x7
  System_Collections_Generic_List_int__o *v486; // x19
  System_String_array **v487; // x2
  System_String_array **v488; // x3
  System_Boolean_array **v489; // x4
  System_Int32_array **v490; // x5
  System_Int32_array *v491; // x6
  System_Int32_array *v492; // x7
  System_Collections_Generic_List_int__o *v493; // x19
  System_String_array **v494; // x2
  System_String_array **v495; // x3
  System_Boolean_array **v496; // x4
  System_Int32_array **v497; // x5
  System_Int32_array *v498; // x6
  System_Int32_array *v499; // x7
  WarBoardData___c_c *v500; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__77_0; // x19
  Il2CppObject *v503; // x20
  struct WarBoardData___c_StaticFields *v504; // x0
  System_String_array **v505; // x2
  System_String_array **v506; // x3
  System_Boolean_array **v507; // x4
  System_Int32_array **v508; // x5
  System_Int32_array *v509; // x6
  System_Int32_array *v510; // x7
  System_String_array **v511; // x2
  System_String_array **v512; // x3
  System_Boolean_array **v513; // x4
  System_Int32_array **v514; // x5
  System_Int32_array *v515; // x6
  System_Int32_array *v516; // x7
  __int64 Instance; // x0
  const MethodInfo *throughCondId; // x1
  __int64 v519; // x20
  struct WarBoardStageNpcMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v521; // x2
  System_String_array **v522; // x3
  System_Boolean_array **v523; // x4
  System_Int32_array **v524; // x5
  System_Int32_array *v525; // x6
  System_Int32_array *v526; // x7
  System_Collections_Generic_IEnumerable_WarBoardStageNpcEntity__o *WarBoardStageEntities; // x0
  WarBoardData___c_c *v528; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v529; // x21
  struct WarBoardData___c_StaticFields *v530; // x9
  System_Func_WarBoardStageNpcEntity__uint__o *_9__77_1; // x19
  Il2CppObject *v532; // x20
  struct WarBoardData___c_StaticFields *v533; // x0
  System_String_array **v534; // x2
  System_String_array **v535; // x3
  System_Boolean_array **v536; // x4
  System_Int32_array **v537; // x5
  System_Int32_array *v538; // x6
  System_Int32_array *v539; // x7
  struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *v540; // x0
  System_String_array **v541; // x2
  System_String_array **v542; // x3
  System_Boolean_array **v543; // x4
  System_Int32_array **v544; // x5
  System_Int32_array *v545; // x6
  System_Int32_array *v546; // x7
  System_Collections_Generic_IEnumerable_WarBoardActionPointEntity__o *WarBoardActionPointEntities; // x0
  WarBoardData___c_c *v548; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v549; // x21
  struct WarBoardData___c_StaticFields *v550; // x9
  System_Func_WarBoardStageNpcEntity__uint__o *_9__77_2; // x19
  Il2CppObject *v552; // x20
  struct WarBoardData___c_StaticFields *v553; // x0
  System_String_array **v554; // x2
  System_String_array **v555; // x3
  System_Boolean_array **v556; // x4
  System_Int32_array **v557; // x5
  System_Int32_array *v558; // x6
  System_Int32_array *v559; // x7
  struct System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__o *v560; // x0
  System_String_array **v561; // x2
  System_String_array **v562; // x3
  System_Boolean_array **v563; // x4
  System_Int32_array **v564; // x5
  System_Int32_array *v565; // x6
  System_Int32_array *v566; // x7
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  WarBoardData___c_c *v568; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v569; // x21
  struct WarBoardData___c_StaticFields *v570; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__77_3; // x19
  Il2CppObject *v572; // x20
  struct WarBoardData___c_StaticFields *v573; // x0
  System_String_array **v574; // x2
  System_String_array **v575; // x3
  System_Boolean_array **v576; // x4
  System_Int32_array **v577; // x5
  System_Int32_array *v578; // x6
  System_Int32_array *v579; // x7
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *npcEntityDict; // x8
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *v581; // x0
  WarBoardData___c_c *v582; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v583; // x21
  WarBoardDataEntity_o *v584; // x22
  struct WarBoardData___c_StaticFields *v585; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__77_4; // x19
  Il2CppObject *v587; // x20
  struct WarBoardData___c_StaticFields *v588; // x0
  System_String_array **v589; // x2
  System_String_array **v590; // x3
  System_Boolean_array **v591; // x4
  System_Int32_array **v592; // x5
  System_Int32_array *v593; // x6
  System_Int32_array *v594; // x7
  WarBoardData_c *v595; // x0
  System_String_o *WARBOARDDATA_SAVEDATA_KEY; // x19
  const MethodInfo *v597; // x0
  WarBoardStageLayoutEntity_array *v598; // x24
  int v599; // w19
  System_String_o *image; // x19
  System_String_o *String; // x19
  System_Byte_array *v602; // x19
  MiniMessagePack_MiniMessagePacker_o *v603; // x20
  struct WarBoardData_WarBoardLocalSaveData_o *v604; // x0
  System_String_array **v605; // x2
  System_String_array **v606; // x3
  System_Boolean_array **v607; // x4
  System_Int32_array **v608; // x5
  System_Int32_array *v609; // x6
  System_Int32_array *v610; // x7
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8
  struct WarBoardPieceData_SaveData_array *pieceSaves; // x23
  __int64 v613; // x22
  unsigned __int64 v614; // x26
  __int64 v615; // x21
  System_String_array **v616; // x2
  System_String_array **v617; // x3
  System_Boolean_array **v618; // x4
  System_Int32_array **v619; // x5
  System_Int32_array *v620; // x6
  System_Int32_array *v621; // x7
  System_Int32_array **v622; // x1
  WarBoardPieceData_SaveData_o **v623; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v624; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v625; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v626; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v627; // x22
  struct WarBoardItemData_SaveData_array *itemSaves; // x23
  unsigned __int64 v629; // x26
  __int64 v630; // x20
  System_String_array **v631; // x2
  System_String_array **v632; // x3
  System_Boolean_array **v633; // x4
  System_Int32_array **v634; // x5
  System_Int32_array *v635; // x6
  System_Int32_array *v636; // x7
  System_Int32_array **v637; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v638; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v639; // x22
  BattleServantConfConponent_o *v640; // x21
  struct WarBoardTreasureData_SaveData_array *treasureSaves; // x28
  unsigned __int64 v642; // x26
  __int64 v643; // x19
  System_String_array **v644; // x2
  System_String_array **v645; // x3
  System_Boolean_array **v646; // x4
  System_Int32_array **v647; // x5
  System_Int32_array *v648; // x6
  System_Int32_array *v649; // x7
  System_Int32_array **v650; // x1
  __int64 v651; // x20
  System_Collections_Generic_IEnumerable_TSource__o *klass; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v653; // x23
  WarBoardData___c_c *v654; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v655; // x22
  struct WarBoardData___c_StaticFields *v656; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__77_9; // x19
  Il2CppObject *v658; // x20
  struct WarBoardData___c_StaticFields *v659; // x0
  System_String_array **v660; // x2
  System_String_array **v661; // x3
  System_Boolean_array **v662; // x4
  System_Int32_array **v663; // x5
  System_Int32_array *v664; // x6
  System_Int32_array *v665; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v666; // x0
  System_Int32_array **v667; // x0
  System_String_array **v668; // x2
  System_String_array **v669; // x3
  System_Boolean_array **v670; // x4
  System_Int32_array **v671; // x5
  System_Int32_array *v672; // x6
  System_Int32_array *v673; // x7
  struct WarBoardWallData_SaveData_array *wallSaves; // x23
  unsigned __int64 v675; // x25
  __int64 v676; // x19
  System_String_array **v677; // x2
  System_String_array **v678; // x3
  System_Boolean_array **v679; // x4
  System_Int32_array **v680; // x5
  System_Int32_array *v681; // x6
  System_Int32_array *v682; // x7
  System_Int32_array **v683; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v684; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v685; // x22
  int v686; // w19
  unsigned int **v687; // x21
  unsigned __int64 v688; // x22
  signed __int64 v689; // x23
  __int64 v690; // x24
  struct WarBoardSquareIndexData_SaveData_array *squareIndexInfo; // x8
  unsigned int *v692; // x26
  WarBoardSquareIndexData_SaveData_o *v693; // x20
  WarBoardSquareIndexData_o *v694; // x19
  System_String_array **v695; // x2
  System_String_array **v696; // x3
  System_Boolean_array **v697; // x4
  System_Int32_array **v698; // x5
  System_Int32_array *v699; // x6
  System_Int32_array *v700; // x7
  int v701; // w19
  unsigned __int64 v702; // x22
  signed __int64 v703; // x23
  __int64 v704; // x24
  struct WarBoardBossBattleData_SaveData_array *bossBattleInfo; // x8
  unsigned int *v706; // x26
  WarBoardBossBattleData_SaveData_o *v707; // x20
  WarBoardBossBattleData_o *v708; // x19
  const MethodInfo *v709; // x2
  System_String_array **v710; // x2
  System_String_array **v711; // x3
  System_Boolean_array **v712; // x4
  System_Int32_array **v713; // x5
  System_Int32_array *v714; // x6
  System_Int32_array *v715; // x7
  WarBoardData_c *v716; // x0
  System_String_array **v717; // x2
  System_String_array **v718; // x3
  System_Boolean_array **v719; // x4
  System_Int32_array **v720; // x5
  System_Int32_array *v721; // x6
  System_Int32_array *v722; // x7
  unsigned __int64 v723; // x23
  signed __int64 v724; // x25
  __int64 v725; // x26
  System_String_array **v726; // x2
  System_String_array **v727; // x3
  System_Boolean_array **v728; // x4
  System_Int32_array **v729; // x5
  System_Int32_array *v730; // x6
  System_Int32_array *v731; // x7
  System_Int32_array **v732; // x1
  WarBoardStageLayoutEntity_o **v733; // x21
  WarBoardStageLayoutEntity_o *v734; // x19
  WarBoardSquareData_o *v735; // x20
  const MethodInfo *v736; // x3
  __int64 v737; // x9
  WarBoardStageLayoutEntity_o *v738; // x8
  int32_t questPhase; // w24
  System_Collections_Generic_IEnumerable_TSource__o *svtInfo; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v741; // x20
  WarBoardData_SquareRangeSearch_o *v742; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *v743; // x1
  const MethodInfo_3056FC0 *v744; // x2
  System_Collections_Generic_IEnumerable_TSource__o *masterInfo; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v746; // x20
  WarBoardStageLayoutEntity_o *v747; // x8
  WarBoardDataEntity_WarBoardDeckData_o **v748; // x9
  WarBoardDataEntity_WarBoardDeckData_o *v749; // x24
  int32_t Type; // w0
  bool IsNpc; // w0
  WarBoardStageLayoutEntity_o *v752; // x19
  int32_t progressType; // w25
  bool v754; // w22
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *v755; // x27
  WarBoardPieceData_o *v756; // x0
  WarBoardPieceData_o *v757; // x28
  bool v758; // w5
  NpcFollowerEntity_o *Entity_20688452; // x0
  NpcFollowerEntity_o *v760; // x19
  WarBoardStageLayoutEntity_o *v761; // x20
  System_Collections_Generic_IEnumerable_TSource__o *getItemInfo; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v763; // x20
  WarBoardData_SquareRangeSearch_o *v764; // x0
  WarBoardStageLayoutEntity_o *v765; // x20
  WarBoardUserGetItemData_o *v766; // x21
  WarBoardItemData_o *v767; // x19
  __int64 *v768; // x8
  System_Collections_Generic_IEnumerable_TSource__o *treasureInfo; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v770; // x20
  System_Collections_Generic_IEnumerable_TSource__o *wallInfo; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v772; // x20
  WarBoardData_SquareRangeSearch_o *v773; // x0
  WarBoardStageLayoutEntity_o *v774; // x20
  WarBoardUserWallData_o *v775; // x21
  struct WarBoardSquareData_array *v776; // x0
  System_String_array **v777; // x2
  System_String_array **v778; // x3
  System_Boolean_array **v779; // x4
  System_Int32_array **v780; // x5
  System_Int32_array *v781; // x6
  System_Int32_array *v782; // x7
  struct WarBoardSquareData_array *v783; // x0
  System_String_array **v784; // x2
  System_String_array **v785; // x3
  System_Boolean_array **v786; // x4
  System_Int32_array **v787; // x5
  System_Int32_array *v788; // x6
  System_Int32_array *v789; // x7
  struct WarBoardPieceData_array *v790; // x0
  System_Collections_Generic_IEnumerable_T__o **p_pieces; // x22
  System_String_array **v792; // x2
  System_String_array **v793; // x3
  System_Boolean_array **v794; // x4
  System_Int32_array **v795; // x5
  System_Int32_array *v796; // x6
  System_Int32_array *v797; // x7
  struct WarBoardPieceData_array *pieces; // x19
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v799; // x20
  struct WarBoardItemData_array *v800; // x0
  System_String_array **v801; // x2
  System_String_array **v802; // x3
  System_Boolean_array **v803; // x4
  System_Int32_array **v804; // x5
  System_Int32_array *v805; // x6
  System_Int32_array *v806; // x7
  struct WarBoardTreasureData_array *v807; // x0
  System_String_array **v808; // x2
  System_String_array **v809; // x3
  System_Boolean_array **v810; // x4
  System_Int32_array **v811; // x5
  System_Int32_array *v812; // x6
  System_Int32_array *v813; // x7
  struct WarBoardEffectData_array *v814; // x0
  System_String_array **v815; // x2
  System_String_array **v816; // x3
  System_Boolean_array **v817; // x4
  System_Int32_array **v818; // x5
  System_Int32_array *v819; // x6
  System_Int32_array *v820; // x7
  struct WarBoardWallData_array *v821; // x0
  System_String_array **v822; // x2
  System_String_array **v823; // x3
  System_Boolean_array **v824; // x4
  System_Int32_array **v825; // x5
  System_Int32_array *v826; // x6
  System_Int32_array *v827; // x7
  System_String_array **v828; // x2
  System_String_array **v829; // x3
  System_Boolean_array **v830; // x4
  System_Int32_array **v831; // x5
  System_Int32_array *v832; // x6
  System_Int32_array *v833; // x7
  struct WarBoardData_WarBoardLocalSaveData_o *v834; // x8
  struct WarBoardPieceData_SaveData_array *v835; // x26
  unsigned __int64 v836; // x27
  WarBoardPieceData_SaveData_o **m_Items; // x21
  __int64 v838; // x20
  System_String_array **v839; // x2
  System_String_array **v840; // x3
  System_Boolean_array **v841; // x4
  System_Int32_array **v842; // x5
  System_Int32_array *v843; // x6
  System_Int32_array *v844; // x7
  System_Int32_array **v845; // x1
  WarBoardPieceData_SaveData_o **v846; // x23
  System_Collections_Generic_IEnumerable_T__o *v847; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v848; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v849; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v850; // x24
  WarBoardData_SquareRangeSearch_o *v851; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v852; // x20
  struct WarBoardPieceData_SaveData_array *v853; // x19
  WarBoardPieceData_o *v854; // x26
  System_Int32_array **v855; // x0
  System_String_array **v856; // x2
  System_String_array **v857; // x3
  System_Boolean_array **v858; // x4
  System_Int32_array **v859; // x5
  System_Int32_array *v860; // x6
  System_Int32_array *v861; // x7
  struct WarBoardItemData_SaveData_array *v862; // x20
  int max_length; // w8
  unsigned int v864; // w21
  Il2CppClass **v865; // x8
  WarBoardItemData_SaveData_o *v866; // x19
  struct WarBoardTreasureData_SaveData_array *v867; // x20
  int v868; // w8
  unsigned int v869; // w21
  Il2CppClass **v870; // x8
  WarBoardTreasureData_SaveData_o *v871; // x19
  struct WarBoardWallData_SaveData_array *v872; // x20
  int v873; // w8
  unsigned int v874; // w21
  Il2CppClass **v875; // x8
  WarBoardWallData_SaveData_o *v876; // x19
  struct WarBoardSquareData_SaveData_array *squareSaves; // x20
  int v878; // w8
  unsigned int v879; // w21
  Il2CppClass **v880; // x8
  WarBoardSquareData_SaveData_o *v881; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v882; // x19
  System_String_array **v883; // x2
  System_String_array **v884; // x3
  System_Boolean_array **v885; // x4
  System_Int32_array **v886; // x5
  System_Int32_array *v887; // x6
  System_Int32_array *v888; // x7
  System_String_array **v889; // x2
  System_String_array **v890; // x3
  System_Boolean_array **v891; // x4
  System_Int32_array **v892; // x5
  System_Int32_array *v893; // x6
  System_Int32_array *v894; // x7
  struct WarBoardData_WarBoardLocalSaveData_o *v895; // x8
  struct WarBoardEventData_SaveData_array *eventSaves; // x21
  __int64 v897; // x8
  unsigned __int64 v898; // x23
  WarBoardEventData_SaveData_o *v899; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v900; // x19
  WarBoardEventData_o *v901; // x20
  struct WarBoardData_WarBoardLocalSaveData_o *v902; // x8
  System_Int32_array **latestPieceActionSquareIndexes; // x1
  System_String_array **v904; // x2
  System_String_array **v905; // x3
  System_Boolean_array **v906; // x4
  System_Int32_array **v907; // x5
  System_Int32_array *v908; // x6
  System_Int32_array *v909; // x7
  struct WarBoardData_WarBoardLocalSaveData_o *v910; // x8
  System_Int32_array **latestBattlePieceUniqueIndexes; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v912; // x19
  System_String_array **v913; // x2
  System_String_array **v914; // x3
  System_Boolean_array **v915; // x4
  System_Int32_array **v916; // x5
  System_Int32_array *v917; // x6
  System_Int32_array *v918; // x7
  struct WarBoardPrevCondData_SaveData_array *prevCondSaves; // x21
  __int64 v920; // x8
  unsigned __int64 v921; // x23
  WarBoardPrevCondData_SaveData_o *v922; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v923; // x19
  WarBoardPrevCondData_o *v924; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v925; // x19
  System_String_array **v926; // x2
  System_String_array **v927; // x3
  System_Boolean_array **v928; // x4
  System_Int32_array **v929; // x5
  System_Int32_array *v930; // x6
  System_Int32_array *v931; // x7
  struct HoldReinforcementsData_SaveData_array *reinforcementsSaves; // x21
  __int64 v933; // x8
  unsigned __int64 v934; // x23
  HoldReinforcementsData_SaveData_o *v935; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v936; // x19
  HoldReinforcementsData_o *v937; // x20
  System_Int32_array **v938; // x0
  System_String_array **v939; // x2
  System_String_array **v940; // x3
  System_Boolean_array **v941; // x4
  System_Int32_array **v942; // x5
  System_Int32_array *v943; // x6
  System_Int32_array *v944; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v945; // x19
  System_String_array **v946; // x2
  System_String_array **v947; // x3
  System_Boolean_array **v948; // x4
  System_Int32_array **v949; // x5
  System_Int32_array *v950; // x6
  System_Int32_array *v951; // x7
  System_String_array **v952; // x2
  System_String_array **v953; // x3
  System_Boolean_array **v954; // x4
  System_Int32_array **v955; // x5
  System_Int32_array *v956; // x6
  System_Int32_array *v957; // x7
  struct WarBoardUiData_SaveData_array *uiDataSaves; // x21
  __int64 v959; // x8
  unsigned __int64 v960; // x23
  WarBoardUiData_SaveData_o *v961; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v962; // x19
  WarBoardUiData_o *v963; // x20
  System_Int32_array **bgAnimationInfo; // x1
  struct WarBoardData_WarBoardLocalSaveData_o *v965; // x8
  WarBoardData_WarBoardLocalSaveData_o *v966; // x19
  System_String_array **v967; // x2
  System_String_array **v968; // x3
  System_Boolean_array **v969; // x4
  System_Int32_array **v970; // x5
  System_Int32_array *v971; // x6
  System_Int32_array *v972; // x7
  __int64 v973; // x0
  __int64 v974; // x0
  BattleServantConfConponent_o *p_latestBattlePieceUniqueIndexes; // [xsp+10h] [xbp-180h]
  struct System_Int32_array **p_latestPieceActionSquareIndexes; // [xsp+18h] [xbp-178h]
  BattleServantConfConponent_o *p_playedStageReinforcementsList; // [xsp+20h] [xbp-170h]
  BattleServantConfConponent_o *p_bgAnimationInfo_k__BackingField; // [xsp+28h] [xbp-168h]
  struct System_Collections_Generic_List_WarBoardEventData__o **p_listEvent; // [xsp+30h] [xbp-160h]
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v980; // [xsp+38h] [xbp-158h]
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v981; // [xsp+40h] [xbp-150h]
  WarBoardDataEntity_WarBoardDeckData_o **p_myDeck; // [xsp+48h] [xbp-148h]
  struct System_Collections_Generic_List_int__o **p_masterExistsForce; // [xsp+50h] [xbp-140h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v984; // [xsp+58h] [xbp-138h]
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v985; // [xsp+60h] [xbp-130h]
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v986; // [xsp+68h] [xbp-128h]
  NpcFollowerMaster_o *v987; // [xsp+70h] [xbp-120h]
  WarBoardStagePieceDetailMaster_o *Master_WarQuestSelectionMaster; // [xsp+78h] [xbp-118h]
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v989; // [xsp+80h] [xbp-110h]
  WarBoardData_Fields *p_fields; // [xsp+88h] [xbp-108h]
  WarBoardCommonReleaseMaster_o *v991; // [xsp+90h] [xbp-100h]
  signed __int64 v992; // [xsp+98h] [xbp-F8h]
  int32_t npcIdx; // [xsp+A4h] [xbp-ECh]
  WarBoardRoadEntity_array *v994; // [xsp+A8h] [xbp-E8h]
  WarBoardRoadEntity_array *v995; // [xsp+A8h] [xbp-E8h]
  struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o **p_npcEntityDict; // [xsp+B0h] [xbp-E0h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v997; // [xsp+B8h] [xbp-D8h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v998; // [xsp+C0h] [xbp-D0h]
  WarBoardDataEntity_WarBoardDeckData_o **p_enemyDeck; // [xsp+D0h] [xbp-C0h]
  BattleServantConfConponent_o *p_listUiData; // [xsp+D8h] [xbp-B8h]
  BattleServantConfConponent_o *p_listPrevCond; // [xsp+E0h] [xbp-B0h]
  BattleServantConfConponent_o *p_reinforcementsSaveList; // [xsp+E8h] [xbp-A8h]
  char v1004; // [xsp+F0h] [xbp-A0h]
  int32_t v1005; // [xsp+F0h] [xbp-A0h]
  struct WarBoardData_WarBoardLocalSaveData_o **v1006; // [xsp+F0h] [xbp-A0h]
  struct WarBoardData_WarBoardLocalSaveData_o **p_localSaveData; // [xsp+F8h] [xbp-98h]
  int32_t questId; // [xsp+F8h] [xbp-98h]
  WarBoardPieceData_SaveData_o *v1009; // [xsp+F8h] [xbp-98h]
  __int64 v1010; // [xsp+100h] [xbp-90h]
  struct WarBoardDataEntity_o *v1011; // [xsp+100h] [xbp-90h]
  int v1012; // [xsp+108h] [xbp-88h]
  WarBoardUserMasterData_o *v1013; // [xsp+108h] [xbp-88h]
  int32_t id; // [xsp+108h] [xbp-88h]
  WarBoardData_o *v1015; // [xsp+110h] [xbp-80h]
  bool isChangeName; // [xsp+11Ch] [xbp-74h] BYREF
  UserServantEntity_o *v1017; // [xsp+120h] [xbp-70h] BYREF
  WarBoardStagePieceDetailEntity_o *entity; // [xsp+128h] [xbp-68h] BYREF
  int32_t condGroup[3]; // [xsp+134h] [xbp-5Ch] BYREF

  v7 = roadEntities;
  if ( (byte_42E7752 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Array_Resize_WarBoardBossBattleData___,
      (_DWORD)stage,
      (_DWORD)layoutEntities,
      roadEntities);
    sub_B5D5C4(&Method_System_Array_Resize_WarBoardSquareIndexData___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Array_Sort_WarBoardPieceData___, v13, v14, v15);
    sub_B5D5C4(&Method_System_Array_Sort_WarBoardStageLayoutEntity___, v16, v17, v18);
    sub_B5D5C4(&Method_BasicHelper_Any_WarBoardPieceData___, v19, v20, v21);
    sub_B5D5C4(&Method_System_Comparison_WarBoardStageLayoutEntity___ctor__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Comparison_WarBoardPieceData___ctor__, v25, v26, v27);
    sub_B5D5C4(&System_Comparison_WarBoardStageLayoutEntity__TypeInfo, v28, v29, v30);
    sub_B5D5C4(&System_Comparison_WarBoardPieceData__TypeInfo, v31, v32, v33);
    sub_B5D5C4(&System_Convert_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___, v37, v38, v39);
    sub_B5D5C4(&Method_DataManager_GetMasterData_WarBoardActionPointMaster___, v40, v41, v42);
    sub_B5D5C4(&Method_DataManager_GetMasterData_WarBoardStageDetailMaster___, v43, v44, v45);
    sub_B5D5C4(&Method_DataManager_GetMasterData_WarBoardStageNpcMaster___, v46, v47, v48);
    sub_B5D5C4(&Method_DataManager_GetMaster_NpcFollowerMaster___, v49, v50, v51);
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, v52, v53, v54);
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___, v55, v56, v57);
    sub_B5D5C4(&DataManager_TypeInfo, v58, v59, v60);
    sub_B5D5C4(
      &Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__,
      v61,
      v62,
      v63);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v64, v65, v66);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Values__, v67, v68, v69);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v70, v71, v72);
    sub_B5D5C4(&EncryptedPlayerPrefs_TypeInfo, v73, v74, v75);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData_SaveData___, v76, v77, v78);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_WarBoardBossBattleData_SaveData___, v79, v80, v81);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___, v82, v83, v84);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___, v85, v86, v87);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___, v88, v89, v90);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserTreasureData___, v91, v92, v93);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___, v94, v95, v96);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Max_WarBoardStageNpcEntity___, v97, v98, v99);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_WarBoardUserTreasureData___, v100, v101, v102);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToDictionary_WarBoardActionPointEntity__uint___, v103, v104, v105);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToDictionary_WarBoardStageNpcEntity__uint___, v106, v107, v108);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_int___, v109, v110, v111);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_WarBoardUserTreasureData___, v112, v113, v114);
    sub_B5D5C4(&Method_System_Func_WarBoardUserTreasureData__bool___ctor__, v115, v116, v117);
    sub_B5D5C4(&Method_System_Func_WarBoardUserMasterData__bool___ctor__, v118, v119, v120);
    sub_B5D5C4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v121, v122, v123);
    sub_B5D5C4(&Method_System_Func_WarBoardUserGetItemData__bool___ctor__, v124, v125, v126);
    sub_B5D5C4(&Method_System_Func_WarBoardStageNpcEntity__uint___ctor__, v127, v128, v129);
    sub_B5D5C4(&Method_System_Func_WarBoardStageNpcEntity__int___ctor__, v130, v131, v132);
    sub_B5D5C4(&Method_System_Func_WarBoardActionPointEntity__uint___ctor__, v133, v134, v135);
    sub_B5D5C4(&Method_System_Func_WarBoardUserServantData__bool___ctor__, v136, v137, v138);
    sub_B5D5C4(&Method_System_Func_WarBoardUserWallData__bool___ctor__, v139, v140, v141);
    sub_B5D5C4(&System_Func_WarBoardActionPointEntity__uint__TypeInfo, v142, v143, v144);
    sub_B5D5C4(&System_Func_WarBoardUserTreasureData__bool__TypeInfo, v145, v146, v147);
    sub_B5D5C4(&System_Func_WarBoardPieceData__bool__TypeInfo, v148, v149, v150);
    sub_B5D5C4(&System_Func_WarBoardUserGetItemData__bool__TypeInfo, v151, v152, v153);
    sub_B5D5C4(&System_Func_WarBoardStageNpcEntity__uint__TypeInfo, v154, v155, v156);
    sub_B5D5C4(&System_Func_WarBoardUserMasterData__bool__TypeInfo, v157, v158, v159);
    sub_B5D5C4(&System_Func_WarBoardUserWallData__bool__TypeInfo, v160, v161, v162);
    sub_B5D5C4(&System_Func_WarBoardStageNpcEntity__int__TypeInfo, v163, v164, v165);
    sub_B5D5C4(&System_Func_WarBoardUserServantData__bool__TypeInfo, v166, v167, v168);
    sub_B5D5C4(&HoldReinforcementsData_TypeInfo, v169, v170, v171);
    sub_B5D5C4(&int___TypeInfo, v172, v173, v174);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__, v175, v176, v177);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__, v178, v179, v180);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardEventData__Add__, v181, v182, v183);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardItemData__Add__, v184, v185, v186);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardSquareData__Add__, v187, v188, v189);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardUiData__Add__, v190, v191, v192);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTreasureData__Add__, v193, v194, v195);
    sub_B5D5C4(&Method_System_Collections_Generic_List_HoldReinforcementsData__Add__, v196, v197, v198);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, v199, v200, v201);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardWallData__Add__, v202, v203, v204);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardEffectData__Add__, v205, v206, v207);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v208, v209, v210);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v211, v212, v213);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTreasureData__ToArray__, v214, v215, v216);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__, v217, v218, v219);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardItemData__ToArray__, v220, v221, v222);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardEffectData__ToArray__, v223, v224, v225);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardWallData__ToArray__, v226, v227, v228);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__, v229, v230, v231);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardEventData___ctor__, v232, v233, v234);
    sub_B5D5C4(&Method_System_Collections_Generic_List_HoldReinforcementsData___ctor__, v235, v236, v237);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v238, v239, v240);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardItemData___ctor__, v241, v242, v243);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v244, v245, v246);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardUiData___ctor__, v247, v248, v249);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTreasureData___ctor__, v250, v251, v252);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardWallData___ctor__, v253, v254, v255);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardEffectData___ctor__, v256, v257, v258);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPrevCondData___ctor__, v259, v260, v261);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardSquareData___ctor__, v262, v263, v264);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v265, v266, v267);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardUiData__TypeInfo, v268, v269, v270);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v271, v272, v273);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardPrevCondData__TypeInfo, v274, v275, v276);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardItemData__TypeInfo, v277, v278, v279);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardSquareData__TypeInfo, v280, v281, v282);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardTreasureData__TypeInfo, v283, v284, v285);
    sub_B5D5C4(&System_Collections_Generic_List_HoldReinforcementsData__TypeInfo, v286, v287, v288);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardWallData__TypeInfo, v289, v290, v291);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardEffectData__TypeInfo, v292, v293, v294);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardEventData__TypeInfo, v295, v296, v297);
    sub_B5D5C4(
      &Method_MiniMessagePack_MiniMessagePacker_UnpackClass_WarBoardData_WarBoardLocalSaveData___,
      v298,
      v299,
      v300);
    sub_B5D5C4(&MiniMessagePack_MiniMessagePacker_TypeInfo, v301, v302, v303);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v304, v305, v306);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v307, v308, v309);
    sub_B5D5C4(&Method_WarBoardData___c___ctor_b__77_0__, v310, v311, v312);
    sub_B5D5C4(&Method_WarBoardData___c___ctor_b__77_1__, v313, v314, v315);
    sub_B5D5C4(&Method_WarBoardData___c___ctor_b__77_2__, v316, v317, v318);
    sub_B5D5C4(&Method_WarBoardData___c___ctor_b__77_3__, v319, v320, v321);
    sub_B5D5C4(&Method_WarBoardData___c___ctor_b__77_4__, v322, v323, v324);
    sub_B5D5C4(&Method_WarBoardData___c___ctor_b__77_9__, v325, v326, v327);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass77_0___ctor_b__5__, v328, v329, v330);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass77_0___ctor_b__6__, v331, v332, v333);
    sub_B5D5C4(&WarBoardData___c__DisplayClass77_0_TypeInfo, v334, v335, v336);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass77_1___ctor_b__7__, v337, v338, v339);
    sub_B5D5C4(&WarBoardData___c__DisplayClass77_1_TypeInfo, v340, v341, v342);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass77_2___ctor_b__8__, v343, v344, v345);
    sub_B5D5C4(&WarBoardData___c__DisplayClass77_2_TypeInfo, v346, v347, v348);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass77_3___ctor_b__10__, v349, v350, v351);
    sub_B5D5C4(&WarBoardData___c__DisplayClass77_3_TypeInfo, v352, v353, v354);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__11__, v355, v356, v357);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__12__, v358, v359, v360);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__13__, v361, v362, v363);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__14__, v364, v365, v366);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__15__, v367, v368, v369);
    sub_B5D5C4(&WarBoardData___c__DisplayClass77_4_TypeInfo, v370, v371, v372);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass77_5___ctor_b__16__, v373, v374, v375);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass77_5___ctor_b__17__, v376, v377, v378);
    sub_B5D5C4(&WarBoardData___c__DisplayClass77_5_TypeInfo, v379, v380, v381);
    sub_B5D5C4(&WarBoardData___c_TypeInfo, v382, v383, v384);
    sub_B5D5C4(&uint___TypeInfo, v385, v386, v387);
    sub_B5D5C4(&WarBoardBossBattleData_TypeInfo, v388, v389, v390);
    sub_B5D5C4(&Method_WarBoardData_ComparePiece__, v391, v392, v393);
    sub_B5D5C4(&WarBoardData_TypeInfo, v394, v395, v396);
    sub_B5D5C4(&WarBoardEffectData_TypeInfo, v397, v398, v399);
    sub_B5D5C4(&WarBoardEventData_TypeInfo, v400, v401, v402);
    sub_B5D5C4(&WarBoardItemData_TypeInfo, v403, v404, v405);
    sub_B5D5C4(&WarBoardData_WarBoardLocalSaveData_TypeInfo, v406, v407, v408);
    sub_B5D5C4(&WarBoardPieceData_TypeInfo, v409, v410, v411);
    sub_B5D5C4(&WarBoardPrevCondData_TypeInfo, v412, v413, v414);
    sub_B5D5C4(&WarBoardSquareData_TypeInfo, v415, v416, v417);
    sub_B5D5C4(&WarBoardSquareIndexData_TypeInfo, v418, v419, v420);
    sub_B5D5C4(&WarBoardTreasureData_TypeInfo, v421, v422, v423);
    sub_B5D5C4(&WarBoardUiData_TypeInfo, v424, v425, v426);
    sub_B5D5C4(&WarBoardWallData_TypeInfo, v427, v428, v429);
    byte_42E7752 = 1;
  }
  v1017 = 0LL;
  entity = 0LL;
  isChangeName = 0;
  v430 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v430,
    (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  this->fields._bgAnimationInfo_k__BackingField = (struct System_Collections_Generic_Dictionary_string__object__o *)v430;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._bgAnimationInfo_k__BackingField,
    (System_Int32_array **)v430,
    v431,
    v432,
    v433,
    v434,
    v435,
    v436);
  v437 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardEventData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v437,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardEventData___ctor__);
  this->fields.listEvent = (struct System_Collections_Generic_List_WarBoardEventData__o *)v437;
  p_listEvent = &this->fields.listEvent;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.listEvent,
    (System_Int32_array **)v437,
    v438,
    v439,
    v440,
    v441,
    v442,
    v443);
  *(_QWORD *)&this->fields.winCondId = -1LL;
  v444 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 2LL);
  this->fields.latestPieceActionSquareIndexes = v444;
  p_latestPieceActionSquareIndexes = &this->fields.latestPieceActionSquareIndexes;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.latestPieceActionSquareIndexes,
    (System_Int32_array **)v444,
    v445,
    v446,
    v447,
    v448,
    v449,
    v450);
  v451 = (struct System_UInt32_array *)sub_B5D5DC(uint___TypeInfo, 0LL);
  this->fields.latestBattlePieceUniqueIndexes = v451;
  p_latestBattlePieceUniqueIndexes = (BattleServantConfConponent_o *)&this->fields.latestBattlePieceUniqueIndexes;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.latestBattlePieceUniqueIndexes,
    (System_Int32_array **)v451,
    v452,
    v453,
    v454,
    v455,
    v456,
    v457);
  v458 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardPrevCondData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v458,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardPrevCondData___ctor__);
  this->fields.listPrevCond = (struct System_Collections_Generic_List_WarBoardPrevCondData__o *)v458;
  p_listPrevCond = (BattleServantConfConponent_o *)&this->fields.listPrevCond;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.listPrevCond,
    (System_Int32_array **)v458,
    v459,
    v460,
    v461,
    v462,
    v463,
    v464);
  v465 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_HoldReinforcementsData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v465,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_HoldReinforcementsData___ctor__);
  this->fields.reinforcementsSaveList = (struct System_Collections_Generic_List_HoldReinforcementsData__o *)v465;
  p_reinforcementsSaveList = (BattleServantConfConponent_o *)&this->fields.reinforcementsSaveList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.reinforcementsSaveList,
    (System_Int32_array **)v465,
    v466,
    v467,
    v468,
    v469,
    v470,
    v471);
  v472 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v472,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  this->fields.playedStageReinforcementsList = v472;
  p_playedStageReinforcementsList = (BattleServantConfConponent_o *)&this->fields.playedStageReinforcementsList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.playedStageReinforcementsList,
    (System_Int32_array **)v472,
    v473,
    v474,
    v475,
    v476,
    v477,
    v478);
  v479 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardUiData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v479,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardUiData___ctor__);
  this->fields.listUiData = (struct System_Collections_Generic_List_WarBoardUiData__o *)v479;
  p_listUiData = (BattleServantConfConponent_o *)&this->fields.listUiData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.listUiData,
    (System_Int32_array **)v479,
    v480,
    v481,
    v482,
    v483,
    v484,
    v485);
  v486 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v486,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  this->fields.masterExistsForce = v486;
  p_masterExistsForce = &this->fields.masterExistsForce;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.masterExistsForce,
    (System_Int32_array **)v486,
    v487,
    v488,
    v489,
    v490,
    v491,
    v492);
  v493 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v493,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  this->fields.reinforcementsAppointmentSquareList = v493;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.reinforcementsAppointmentSquareList,
    (System_Int32_array **)v493,
    v494,
    v495,
    v496,
    v497,
    v498,
    v499);
  this->fields.localSaveTiming = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v500 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v500 = WarBoardData___c_TypeInfo;
  }
  static_fields = v500->static_fields;
  _9__77_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__77_0;
  if ( !_9__77_0 )
  {
    if ( (BYTE3(v500->vtable._0_Equals.methodPtr) & 4) != 0 && !v500->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v500);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v503 = (Il2CppObject *)static_fields->__9;
    _9__77_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_WarBoardStageLayoutEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__77_0,
      v503,
      Method_WarBoardData___c___ctor_b__77_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_WarBoardStageLayoutEntity___ctor__);
    v504 = WarBoardData___c_TypeInfo->static_fields;
    v504->__9__77_0 = (struct System_Comparison_WarBoardStageLayoutEntity__o *)_9__77_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v504->__9__77_0,
      (System_Int32_array **)_9__77_0,
      v505,
      v506,
      v507,
      v508,
      v509,
      v510);
  }
  System_Array__Sort_BattleBuffData_BuffData_(
    (BattleBuffData_BuffData_array *)layoutEntities,
    (System_Comparison_T__o *)_9__77_0,
    (const MethodInfo_1AC8530 *)Method_System_Array_Sort_WarBoardStageLayoutEntity___);
  this->fields.stageEntity = stage;
  p_fields = &this->fields;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)stage,
    v511,
    v512,
    v513,
    v514,
    v515,
    v516);
  if ( !layoutEntities )
    goto LABEL_341;
  v519 = *(_QWORD *)&layoutEntities->max_length;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_341;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)Instance,
    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_WarBoardStageDetailMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_341;
  MasterData_WarQuestSelectionMaster = (struct WarBoardStageNpcMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                            (DataManager_o *)Instance,
                                                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_WarBoardStageNpcMaster___);
  this->fields.stageNpcMaster = MasterData_WarQuestSelectionMaster;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.stageNpcMaster,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v521,
    v522,
    v523,
    v524,
    v525,
    v526);
  if ( !stage )
    goto LABEL_341;
  Instance = (__int64)this->fields.stageNpcMaster;
  v1012 = v519;
  if ( !Instance )
    goto LABEL_341;
  WarBoardStageEntities = WarBoardStageNpcMaster__GetWarBoardStageEntities(
                            (WarBoardStageNpcMaster_o *)Instance,
                            stage->fields.id,
                            0LL);
  v528 = WarBoardData___c_TypeInfo;
  v529 = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardStageEntities;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v528 = WarBoardData___c_TypeInfo;
  }
  v530 = v528->static_fields;
  _9__77_1 = v530->__9__77_1;
  if ( !_9__77_1 )
  {
    if ( (BYTE3(v528->vtable._0_Equals.methodPtr) & 4) != 0 && !v528->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v528);
      v530 = WarBoardData___c_TypeInfo->static_fields;
    }
    v532 = (Il2CppObject *)v530->__9;
    _9__77_1 = (System_Func_WarBoardStageNpcEntity__uint__o *)sub_B5D694(System_Func_WarBoardStageNpcEntity__uint__TypeInfo);
    System_Func_WarBoardStageNpcEntity__uint____ctor(
      _9__77_1,
      v532,
      Method_WarBoardData___c___ctor_b__77_1__,
      (const MethodInfo_2C31790 *)Method_System_Func_WarBoardStageNpcEntity__uint___ctor__);
    v533 = WarBoardData___c_TypeInfo->static_fields;
    v533->__9__77_1 = _9__77_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v533->__9__77_1,
      (System_Int32_array **)_9__77_1,
      v534,
      v535,
      v536,
      v537,
      v538,
      v539);
  }
  v540 = (struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *)System_Linq_Enumerable__ToDictionary_WarBoardStageNpcEntity__uint_(
                                                                                           v529,
                                                                                           (System_Func_TSource__TKey__o *)_9__77_1,
                                                                                           (const MethodInfo_1CB7B48 *)Method_System_Linq_Enumerable_ToDictionary_WarBoardStageNpcEntity__uint___);
  this->fields.npcEntityDict = v540;
  p_npcEntityDict = &this->fields.npcEntityDict;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.npcEntityDict,
    (System_Int32_array **)v540,
    v541,
    v542,
    v543,
    v544,
    v545,
    v546);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_341;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_WarBoardActionPointMaster___);
  if ( !Instance )
    goto LABEL_341;
  WarBoardActionPointEntities = WarBoardActionPointMaster__GetWarBoardActionPointEntities(
                                  (WarBoardActionPointMaster_o *)Instance,
                                  stage->fields.id,
                                  0LL);
  v548 = WarBoardData___c_TypeInfo;
  v549 = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardActionPointEntities;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v548 = WarBoardData___c_TypeInfo;
  }
  v550 = v548->static_fields;
  _9__77_2 = (System_Func_WarBoardStageNpcEntity__uint__o *)v550->__9__77_2;
  if ( !_9__77_2 )
  {
    if ( (BYTE3(v548->vtable._0_Equals.methodPtr) & 4) != 0 && !v548->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v548);
      v550 = WarBoardData___c_TypeInfo->static_fields;
    }
    v552 = (Il2CppObject *)v550->__9;
    _9__77_2 = (System_Func_WarBoardStageNpcEntity__uint__o *)sub_B5D694(System_Func_WarBoardActionPointEntity__uint__TypeInfo);
    System_Func_WarBoardStageNpcEntity__uint____ctor(
      _9__77_2,
      v552,
      Method_WarBoardData___c___ctor_b__77_2__,
      (const MethodInfo_2C31790 *)Method_System_Func_WarBoardActionPointEntity__uint___ctor__);
    v553 = WarBoardData___c_TypeInfo->static_fields;
    v553->__9__77_2 = (struct System_Func_WarBoardActionPointEntity__uint__o *)_9__77_2;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v553->__9__77_2,
      (System_Int32_array **)_9__77_2,
      v554,
      v555,
      v556,
      v557,
      v558,
      v559);
  }
  v560 = (struct System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__o *)System_Linq_Enumerable__ToDictionary_WarBoardStageNpcEntity__uint_(
                                                                                              v549,
                                                                                              (System_Func_TSource__TKey__o *)_9__77_2,
                                                                                              (const MethodInfo_1CB7B48 *)Method_System_Linq_Enumerable_ToDictionary_WarBoardActionPointEntity__uint___);
  this->fields.actionPointEntityDict = v560;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.actionPointEntityDict,
    (System_Int32_array **)v560,
    v561,
    v562,
    v563,
    v564,
    v565,
    v566);
  Instance = (__int64)this->fields.npcEntityDict;
  if ( !Instance )
    goto LABEL_341;
  Values = System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity___get_Values(
             (System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *)Instance,
             (const MethodInfo_2EE8780 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Values__);
  v568 = WarBoardData___c_TypeInfo;
  v569 = (System_Collections_Generic_IEnumerable_TSource__o *)Values;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v568 = WarBoardData___c_TypeInfo;
  }
  v570 = v568->static_fields;
  _9__77_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v570->__9__77_3;
  if ( !_9__77_3 )
  {
    if ( (BYTE3(v568->vtable._0_Equals.methodPtr) & 4) != 0 && !v568->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v568);
      v570 = WarBoardData___c_TypeInfo->static_fields;
    }
    v572 = (Il2CppObject *)v570->__9;
    _9__77_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_WarBoardStageNpcEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__77_3,
      v572,
      Method_WarBoardData___c___ctor_b__77_3__,
      (const MethodInfo_2C2F87C *)Method_System_Func_WarBoardStageNpcEntity__int___ctor__);
    v573 = WarBoardData___c_TypeInfo->static_fields;
    v573->__9__77_3 = (struct System_Func_WarBoardStageNpcEntity__int__o *)_9__77_3;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v573->__9__77_3,
      (System_Int32_array **)_9__77_3,
      v574,
      v575,
      v576,
      v577,
      v578,
      v579);
  }
  p_bgAnimationInfo_k__BackingField = (BattleServantConfConponent_o *)&this->fields._bgAnimationInfo_k__BackingField;
  Instance = System_Linq_Enumerable__Max_BattleBuffData_BuffData_(
               v569,
               (System_Func_TSource__int__o *)_9__77_3,
               (const MethodInfo_1CAE860 *)Method_System_Linq_Enumerable_Max_WarBoardStageNpcEntity___);
  npcEntityDict = this->fields.npcEntityDict;
  this->fields._maxForceId_k__BackingField = Instance;
  if ( !npcEntityDict )
    goto LABEL_341;
  v581 = System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity___get_Values(
           npcEntityDict,
           (const MethodInfo_2EE8780 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Values__);
  v582 = WarBoardData___c_TypeInfo;
  v583 = (System_Collections_Generic_IEnumerable_TSource__o *)v581;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v584 = serverData;
    if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
      v582 = WarBoardData___c_TypeInfo;
    }
  }
  else
  {
    v584 = serverData;
  }
  v585 = v582->static_fields;
  _9__77_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v585->__9__77_4;
  if ( !_9__77_4 )
  {
    if ( (BYTE3(v582->vtable._0_Equals.methodPtr) & 4) != 0 && !v582->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v582);
      v585 = WarBoardData___c_TypeInfo->static_fields;
    }
    v587 = (Il2CppObject *)v585->__9;
    _9__77_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_WarBoardStageNpcEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__77_4,
      v587,
      Method_WarBoardData___c___ctor_b__77_4__,
      (const MethodInfo_2C2F87C *)Method_System_Func_WarBoardStageNpcEntity__int___ctor__);
    v588 = WarBoardData___c_TypeInfo->static_fields;
    v588->__9__77_4 = (struct System_Func_WarBoardStageNpcEntity__int__o *)_9__77_4;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v588->__9__77_4,
      (System_Int32_array **)_9__77_4,
      v589,
      v590,
      v591,
      v592,
      v593,
      v594);
  }
  this->fields._maxGroupId_k__BackingField = System_Linq_Enumerable__Max_BattleBuffData_BuffData_(
                                               v583,
                                               (System_Func_TSource__int__o *)_9__77_4,
                                               (const MethodInfo_1CAE860 *)Method_System_Linq_Enumerable_Max_WarBoardStageNpcEntity___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_341;
  v980 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                  (DataManager_o *)Instance,
                                                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardStagePieceDetailMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
  v987 = (NpcFollowerMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v991 = (WarBoardCommonReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  v997 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v997,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor__);
  v989 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v989,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor__);
  v998 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v998,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v985 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardItemData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v985,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardItemData___ctor__);
  v981 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardTreasureData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v981,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardTreasureData___ctor__);
  v986 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardWallData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v986,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardWallData___ctor__);
  v984 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardEffectData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v984,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardEffectData___ctor__);
  v595 = WarBoardData_TypeInfo;
  if ( (BYTE3(WarBoardData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    v595 = WarBoardData_TypeInfo;
  }
  WARBOARDDATA_SAVEDATA_KEY = v595->static_fields->WARBOARDDATA_SAVEDATA_KEY;
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  Instance = EncryptedPlayerPrefs__HasKey(WARBOARDDATA_SAVEDATA_KEY, 0LL);
  v1015 = this;
  if ( (Instance & 1) != 0 )
  {
    if ( !v584 )
      goto LABEL_341;
    v597 = (const MethodInfo *)WarBoardData_TypeInfo;
    if ( v584->fields.progressType == 3 )
    {
      if ( (WORD1(WarBoardData_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !WarBoardData_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
      }
      WarBoardData__DeleteLocalSave(v597);
    }
    else
    {
      if ( (WORD1(WarBoardData_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !WarBoardData_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
        v597 = (const MethodInfo *)WarBoardData_TypeInfo;
      }
      image = (System_String_o *)v597[2].klass->_1.image;
      if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
      }
      String = EncryptedPlayerPrefs__GetString(image, 0LL);
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      v602 = System_Convert__FromBase64String(String, 0LL);
      v603 = (MiniMessagePack_MiniMessagePacker_o *)sub_B5D694(MiniMessagePack_MiniMessagePacker_TypeInfo);
      MiniMessagePack_MiniMessagePacker___ctor(v603, 0LL);
      if ( !v603 )
        goto LABEL_341;
      v604 = MiniMessagePack_MiniMessagePacker__UnpackClass_WarBoardData_WarBoardLocalSaveData_(
               v603,
               v602,
               (const MethodInfo_1E63788 *)Method_MiniMessagePack_MiniMessagePacker_UnpackClass_WarBoardData_WarBoardLocalSaveData___);
      this->fields.localSaveData = v604;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.localSaveData,
        (System_Int32_array **)v604,
        v605,
        v606,
        v607,
        v608,
        v609,
        v610);
      localSaveData = this->fields.localSaveData;
      p_localSaveData = &this->fields.localSaveData;
      if ( localSaveData
        && localSaveData->fields.questId == v584->fields.questId
        && localSaveData->fields.questPhase == v584->fields.questPhase
        && localSaveData->fields.stageId == v584->fields.stageId )
      {
        if ( localSaveData->fields.localSaveTiming == 6
          && (localSaveData->fields.turn != v584->fields.turn
           || localSaveData->fields.turnForceId != v584->fields.turnForceId
           || localSaveData->fields.turnGroupId != v584->fields.turnGroupId) )
        {
          localSaveData->fields.localSaveTiming = 7;
        }
        Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !*p_localSaveData )
          goto LABEL_341;
        if ( !Instance )
          goto LABEL_341;
        Instance = (__int64)WarBoardManager__CheckAndLoadCacheServerData(
                              (WarBoardManager_o *)Instance,
                              v584,
                              (*p_localSaveData)->fields.localSaveTiming,
                              0LL);
        if ( !*p_localSaveData )
          goto LABEL_341;
        pieceSaves = (*p_localSaveData)->fields.pieceSaves;
        v994 = v7;
        if ( !pieceSaves )
          goto LABEL_341;
        v613 = Instance;
        v1010 = Instance;
        if ( (int)pieceSaves->max_length < 1 )
        {
LABEL_108:
          if ( !*p_localSaveData )
            goto LABEL_341;
          itemSaves = (*p_localSaveData)->fields.itemSaves;
          if ( !itemSaves )
            goto LABEL_341;
          if ( (int)itemSaves->max_length < 1 )
          {
LABEL_118:
            if ( !v613 )
              goto LABEL_341;
            v640 = (BattleServantConfConponent_o *)(v613 + 40);
            if ( *(_QWORD *)(v613 + 40) )
            {
              if ( !*p_localSaveData )
                goto LABEL_341;
              treasureSaves = (*p_localSaveData)->fields.treasureSaves;
              if ( !treasureSaves )
                goto LABEL_341;
              if ( (int)treasureSaves->max_length >= 1 )
              {
                v1004 = 0;
                v642 = 0LL;
                do
                {
                  v643 = sub_B5D694(WarBoardData___c__DisplayClass77_2_TypeInfo);
                  WarBoardData___c__DisplayClass77_2___ctor((WarBoardData___c__DisplayClass77_2_o *)v643, 0LL);
                  if ( v642 >= treasureSaves->max_length )
                    goto LABEL_342;
                  if ( !v643 )
                    goto LABEL_341;
                  v650 = (System_Int32_array **)treasureSaves->m_Items[v642];
                  *(_QWORD *)(v643 + 16) = v650;
                  v651 = v643 + 16;
                  sub_B5D560((BattleServantConfConponent_o *)(v643 + 16), v650, v644, v645, v646, v647, v648, v649);
                  klass = (System_Collections_Generic_IEnumerable_TSource__o *)v640->klass;
                  v653 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardUserTreasureData__bool__TypeInfo);
                  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                    v653,
                    (Il2CppObject *)v643,
                    Method_WarBoardData___c__DisplayClass77_2___ctor_b__8__,
                    (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardUserTreasureData__bool___ctor__);
                  Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                        klass,
                                        (System_Func_TSource__bool__o *)v653,
                                        (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserTreasureData___);
                  if ( Instance )
                  {
                    v613 = v1010;
                    if ( !*(_QWORD *)v651 )
                      goto LABEL_341;
                    if ( !*(_BYTE *)(*(_QWORD *)v651 + 20LL) )
                    {
                      *(_BYTE *)(Instance + 20) = 0;
                      v1004 = 1;
                    }
                  }
                  else
                  {
                    v613 = v1010;
                  }
                  ++v642;
                }
                while ( (__int64)v642 < (int)treasureSaves->max_length );
                if ( (v1004 & 1) != 0 )
                {
                  v654 = WarBoardData___c_TypeInfo;
                  v655 = (System_Collections_Generic_IEnumerable_TSource__o *)v640->klass;
                  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
                    v654 = WarBoardData___c_TypeInfo;
                  }
                  v656 = v654->static_fields;
                  _9__77_9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v656->__9__77_9;
                  if ( !_9__77_9 )
                  {
                    if ( (BYTE3(v654->vtable._0_Equals.methodPtr) & 4) != 0 && !v654->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(v654);
                      v656 = WarBoardData___c_TypeInfo->static_fields;
                    }
                    v658 = (Il2CppObject *)v656->__9;
                    _9__77_9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardUserTreasureData__bool__TypeInfo);
                    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                      _9__77_9,
                      v658,
                      Method_WarBoardData___c___ctor_b__77_9__,
                      (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardUserTreasureData__bool___ctor__);
                    v659 = WarBoardData___c_TypeInfo->static_fields;
                    v659->__9__77_9 = (struct System_Func_WarBoardUserTreasureData__bool__o *)_9__77_9;
                    sub_B5D560(
                      (BattleServantConfConponent_o *)&v659->__9__77_9,
                      (System_Int32_array **)_9__77_9,
                      v660,
                      v661,
                      v662,
                      v663,
                      v664,
                      v665);
                  }
                  v666 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                           v655,
                           (System_Func_TSource__bool__o *)_9__77_9,
                           (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_WarBoardUserTreasureData___);
                  v667 = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                  v666,
                                                  (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_WarBoardUserTreasureData___);
                  v640->klass = (BattleServantConfConponent_c *)v667;
                  sub_B5D560(v640, v667, v668, v669, v670, v671, v672, v673);
                  v613 = v1010;
                }
              }
            }
            if ( !*p_localSaveData )
              goto LABEL_341;
            wallSaves = (*p_localSaveData)->fields.wallSaves;
            if ( !wallSaves )
              goto LABEL_341;
            if ( (int)wallSaves->max_length < 1 )
            {
LABEL_151:
              if ( !*p_localSaveData )
                goto LABEL_341;
              v686 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)(*p_localSaveData)->fields.squareIndexInfo,
                       (const MethodInfo_1CA7CA4 *)Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData_SaveData___);
              v687 = (unsigned int **)(v613 + 88);
              System_Array__Resize_WarBoardSquareIndexData_(
                (WarBoardSquareIndexData_array **)(v613 + 88),
                v686,
                (const MethodInfo_2236DC0 *)Method_System_Array_Resize_WarBoardSquareIndexData___);
              v7 = v994;
              if ( v686 >= 1 )
              {
                v688 = 0LL;
                v689 = v686;
                v690 = 8LL;
                while ( *p_localSaveData )
                {
                  squareIndexInfo = (*p_localSaveData)->fields.squareIndexInfo;
                  if ( !squareIndexInfo )
                    break;
                  if ( v688 >= squareIndexInfo->max_length )
                    goto LABEL_342;
                  v692 = *v687;
                  v693 = *(WarBoardSquareIndexData_SaveData_o **)((char *)&squareIndexInfo->obj.klass + v690 * 4);
                  v694 = (WarBoardSquareIndexData_o *)sub_B5D694(WarBoardSquareIndexData_TypeInfo);
                  WarBoardSquareIndexData___ctor_29175512(v694, v693, 0LL);
                  if ( !v692 )
                    break;
                  if ( v694 )
                  {
                    Instance = sub_B5D684(v694, *(_QWORD *)(*(_QWORD *)v692 + 64LL));
                    if ( !Instance )
                    {
LABEL_343:
                      v974 = sub_B5D6BC();
                      sub_B5D668(v974, 0LL);
                    }
                  }
                  if ( v688 >= v692[6] )
                    goto LABEL_342;
                  *(_QWORD *)&v692[v690] = v694;
                  sub_B5D560(
                    (BattleServantConfConponent_o *)&v692[v690],
                    (System_Int32_array **)v694,
                    v695,
                    v696,
                    v697,
                    v698,
                    v699,
                    v700);
                  ++v688;
                  v690 += 2LL;
                  if ( (__int64)v688 >= v689 )
                    goto LABEL_162;
                }
                goto LABEL_341;
              }
LABEL_162:
              if ( !*p_localSaveData )
                goto LABEL_341;
              v584 = (WarBoardDataEntity_o *)v1010;
              v701 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)(*p_localSaveData)->fields.bossBattleInfo,
                       (const MethodInfo_1CA7CA4 *)Method_System_Linq_Enumerable_Count_WarBoardBossBattleData_SaveData___);
              System_Array__Resize_WarBoardSquareIndexData_(
                (WarBoardSquareIndexData_array **)(v1010 + 96),
                v701,
                (const MethodInfo_2236DC0 *)Method_System_Array_Resize_WarBoardBossBattleData___);
              if ( v701 >= 1 )
              {
                v702 = 0LL;
                v703 = v701;
                v704 = 8LL;
                do
                {
                  if ( !*p_localSaveData )
                    goto LABEL_341;
                  bossBattleInfo = (*p_localSaveData)->fields.bossBattleInfo;
                  if ( !bossBattleInfo )
                    goto LABEL_341;
                  if ( v702 >= bossBattleInfo->max_length )
                    goto LABEL_342;
                  v706 = *(unsigned int **)(v1010 + 96);
                  v707 = *(WarBoardBossBattleData_SaveData_o **)((char *)&bossBattleInfo->obj.klass + v704 * 4);
                  v708 = (WarBoardBossBattleData_o *)sub_B5D694(WarBoardBossBattleData_TypeInfo);
                  WarBoardBossBattleData___ctor_23157160(v708, v707, v709);
                  if ( !v706 )
                    goto LABEL_341;
                  if ( v708 )
                  {
                    Instance = sub_B5D684(v708, *(_QWORD *)(*(_QWORD *)v706 + 64LL));
                    if ( !Instance )
                      goto LABEL_343;
                  }
                  if ( v702 >= v706[6] )
                    goto LABEL_342;
                  *(_QWORD *)&v706[v704] = v708;
                  sub_B5D560(
                    (BattleServantConfConponent_o *)&v706[v704],
                    (System_Int32_array **)v708,
                    v710,
                    v711,
                    v712,
                    v713,
                    v714,
                    v715);
                  ++v702;
                  v704 += 2LL;
                }
                while ( (__int64)v702 < v703 );
                v584 = (WarBoardDataEntity_o *)v1010;
              }
              goto LABEL_178;
            }
            v675 = 0LL;
            while ( 1 )
            {
              v676 = sub_B5D694(WarBoardData___c__DisplayClass77_3_TypeInfo);
              WarBoardData___c__DisplayClass77_3___ctor((WarBoardData___c__DisplayClass77_3_o *)v676, 0LL);
              if ( v675 >= wallSaves->max_length )
                break;
              if ( !v676 )
                goto LABEL_341;
              v683 = (System_Int32_array **)wallSaves->m_Items[v675];
              *(_QWORD *)(v676 + 16) = v683;
              sub_B5D560((BattleServantConfConponent_o *)(v676 + 16), v683, v677, v678, v679, v680, v681, v682);
              v684 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v613 + 48);
              v685 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardUserWallData__bool__TypeInfo);
              System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                v685,
                (Il2CppObject *)v676,
                Method_WarBoardData___c__DisplayClass77_3___ctor_b__10__,
                (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardUserWallData__bool___ctor__);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                    v684,
                                    (System_Func_TSource__bool__o *)v685,
                                    (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
              if ( Instance )
                WarBoardUserWallData__SetSaveData(
                  (WarBoardUserWallData_o *)Instance,
                  *(WarBoardWallData_SaveData_o **)(v676 + 16),
                  0LL);
              v613 = v1010;
              if ( (__int64)++v675 >= (int)wallSaves->max_length )
                goto LABEL_151;
            }
          }
          else
          {
            v629 = 0LL;
            while ( 1 )
            {
              v630 = sub_B5D694(WarBoardData___c__DisplayClass77_1_TypeInfo);
              WarBoardData___c__DisplayClass77_1___ctor((WarBoardData___c__DisplayClass77_1_o *)v630, 0LL);
              if ( v629 >= itemSaves->max_length )
                break;
              if ( !v630 )
                goto LABEL_341;
              v637 = (System_Int32_array **)itemSaves->m_Items[v629];
              *(_QWORD *)(v630 + 16) = v637;
              sub_B5D560((BattleServantConfConponent_o *)(v630 + 16), v637, v631, v632, v633, v634, v635, v636);
              if ( !v613 )
                goto LABEL_341;
              v638 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v613 + 32);
              v639 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardUserGetItemData__bool__TypeInfo);
              System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                v639,
                (Il2CppObject *)v630,
                Method_WarBoardData___c__DisplayClass77_1___ctor_b__7__,
                (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardUserGetItemData__bool___ctor__);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                    v638,
                                    (System_Func_TSource__bool__o *)v639,
                                    (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
              if ( Instance )
                WarBoardUserGetItemData__SetSaveData(
                  (WarBoardUserGetItemData_o *)Instance,
                  *(WarBoardItemData_SaveData_o **)(v630 + 16),
                  0LL);
              v613 = v1010;
              if ( (__int64)++v629 >= (int)itemSaves->max_length )
                goto LABEL_118;
            }
          }
        }
        else
        {
          v614 = 0LL;
          while ( 1 )
          {
            v615 = sub_B5D694(WarBoardData___c__DisplayClass77_0_TypeInfo);
            WarBoardData___c__DisplayClass77_0___ctor((WarBoardData___c__DisplayClass77_0_o *)v615, 0LL);
            if ( v614 >= pieceSaves->max_length )
              break;
            if ( !v615 )
              goto LABEL_341;
            v622 = (System_Int32_array **)pieceSaves->m_Items[v614];
            *(_QWORD *)(v615 + 16) = v622;
            v623 = (WarBoardPieceData_SaveData_o **)(v615 + 16);
            sub_B5D560((BattleServantConfConponent_o *)(v615 + 16), v622, v616, v617, v618, v619, v620, v621);
            if ( !*(_QWORD *)(v615 + 16) || !v613 )
              goto LABEL_341;
            if ( *(_DWORD *)(*(_QWORD *)(v615 + 16) + 24LL) )
            {
              v624 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v613 + 16);
              v625 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardUserServantData__bool__TypeInfo);
              System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                v625,
                (Il2CppObject *)v615,
                Method_WarBoardData___c__DisplayClass77_0___ctor_b__6__,
                (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardUserServantData__bool___ctor__);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                    v624,
                                    (System_Func_TSource__bool__o *)v625,
                                    (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
              if ( Instance )
                WarBoardUserServantData__SetSaveData((WarBoardUserServantData_o *)Instance, *v623, 0LL);
            }
            else
            {
              v626 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v613 + 24);
              v627 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardUserMasterData__bool__TypeInfo);
              System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                v627,
                (Il2CppObject *)v615,
                Method_WarBoardData___c__DisplayClass77_0___ctor_b__5__,
                (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardUserMasterData__bool___ctor__);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                    v626,
                                    (System_Func_TSource__bool__o *)v627,
                                    (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
              if ( Instance )
                WarBoardUserMasterData__SetSaveData((WarBoardUserMasterData_o *)Instance, *v623, 0LL);
            }
            v613 = v1010;
            if ( (__int64)++v614 >= (int)pieceSaves->max_length )
              goto LABEL_108;
          }
        }
LABEL_342:
        v973 = sub_B5D6C8(Instance);
        sub_B5D668(v973, 0LL);
      }
      v716 = WarBoardData_TypeInfo;
      if ( (BYTE3(WarBoardData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardData_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
      }
      WarBoardData__DeleteLocalSave((const MethodInfo *)v716);
      *p_localSaveData = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)p_localSaveData, 0LL, v717, v718, v719, v720, v721, v722);
    }
LABEL_178:
    v598 = layoutEntities;
    v599 = v1012;
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_341;
    goto LABEL_179;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v584 )
    goto LABEL_341;
  v598 = layoutEntities;
  v599 = v1012;
  if ( !Instance )
    goto LABEL_341;
LABEL_179:
  WarBoardManager__InitializeLogic((WarBoardManager_o *)Instance, v584, v584->fields.progressType != 3, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_341;
  WarBoardManager__UpdateServerData((WarBoardManager_o *)Instance, v584, 0LL);
  v1011 = v584;
  if ( v599 >= 1 )
  {
    v723 = 0LL;
    p_enemyDeck = &v584->fields.enemyDeck;
    v724 = v599;
    npcIdx = 0;
    p_myDeck = &v584->fields.myDeck;
    v995 = v7;
    v992 = v599;
    do
    {
      v725 = sub_B5D694(WarBoardData___c__DisplayClass77_4_TypeInfo);
      WarBoardData___c__DisplayClass77_4___ctor((WarBoardData___c__DisplayClass77_4_o *)v725, 0LL);
      if ( v723 >= v598->max_length )
        goto LABEL_342;
      if ( !v725 )
        goto LABEL_341;
      v732 = (System_Int32_array **)v598->m_Items[v723];
      *(_QWORD *)(v725 + 16) = v732;
      v733 = (WarBoardStageLayoutEntity_o **)(v725 + 16);
      sub_B5D560((BattleServantConfConponent_o *)(v725 + 16), v732, v726, v727, v728, v729, v730, v731);
      v734 = *(WarBoardStageLayoutEntity_o **)(v725 + 16);
      v735 = (WarBoardSquareData_o *)sub_B5D694(WarBoardSquareData_TypeInfo);
      WarBoardSquareData___ctor(v735, v734, v7, 0LL);
      if ( v723 )
      {
        if ( (unsigned int)(v723 - 1) >= v598->max_length )
          goto LABEL_342;
        v737 = *((_QWORD *)&v598->max_length + v723);
        if ( !v737 )
          goto LABEL_341;
        v738 = *v733;
        if ( !*v733 )
          goto LABEL_341;
        if ( *(_DWORD *)(v737 + 20) == v738->fields.squareIndex )
          goto LABEL_196;
      }
      else
      {
        v738 = *v733;
        if ( !*v733 )
          goto LABEL_341;
      }
      throughCondId = (const MethodInfo *)(unsigned int)v738->fields.throughCondId;
      if ( (_DWORD)throughCondId )
      {
        Instance = (__int64)v991;
        if ( !v991 )
          goto LABEL_341;
        condGroup[0] = 0;
        if ( !WarBoardCommonReleaseMaster__IsOpen_23169312(v991, (int32_t)throughCondId, condGroup, v736) )
        {
          Instance = (__int64)v989;
          if ( !v989 )
            goto LABEL_341;
          v743 = (EventMissionProgressRequest_Argument_ProgressData_o *)v735;
          v744 = (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardSquareData__Add__;
          goto LABEL_253;
        }
      }
      Instance = (__int64)v997;
      if ( !v997 )
        goto LABEL_341;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v997,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v735,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardSquareData__Add__);
      v738 = *v733;
      if ( !*v733 )
        goto LABEL_341;
LABEL_196:
      if ( v738->fields.isPiecePut )
      {
        questPhase = v584->fields.questPhase;
        questId = v584->fields.questId;
        if ( v738->fields.pieceIndex )
        {
          svtInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v584->fields.svtInfo;
          v741 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardUserServantData__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v741,
            (Il2CppObject *)v725,
            Method_WarBoardData___c__DisplayClass77_4___ctor_b__13__,
            (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardUserServantData__bool___ctor__);
          v742 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                   svtInfo,
                   (System_Func_TSource__bool__o *)v741,
                   (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
          Instance = 0LL;
        }
        else
        {
          masterInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v584->fields.masterInfo;
          v746 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardUserMasterData__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v746,
            (Il2CppObject *)v725,
            Method_WarBoardData___c__DisplayClass77_4___ctor_b__12__,
            (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardUserMasterData__bool___ctor__);
          Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                masterInfo,
                                (System_Func_TSource__bool__o *)v746,
                                (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
          v742 = 0LL;
        }
        v747 = *v733;
        if ( !*v733 )
          goto LABEL_341;
        v748 = p_enemyDeck;
        v1013 = (WarBoardUserMasterData_o *)Instance;
        v1005 = questPhase;
        if ( !v747->fields.forceId )
        {
          v748 = p_enemyDeck;
          if ( !v747->fields.pieceIndex )
            v748 = p_myDeck;
        }
        v749 = *v748;
        Type = Follower__getType(v747->fields.followerType, 0LL);
        IsNpc = Follower__IsNpc(Type, 0LL);
        v752 = *v733;
        progressType = v584->fields.progressType;
        v754 = IsNpc;
        v755 = *p_npcEntityDict;
        v756 = (WarBoardPieceData_o *)sub_B5D694(WarBoardPieceData_TypeInfo);
        v757 = v756;
        v758 = progressType == 3;
        if ( v754 )
        {
          WarBoardPieceData___ctor(v756, v752, (WarBoardUserServantData_o *)v742, v1013, v749, v758, v755, npcIdx, 0LL);
          if ( !*v733 )
            goto LABEL_341;
          v584 = v1011;
          v598 = layoutEntities;
          Instance = (__int64)Master_WarQuestSelectionMaster;
          v724 = v992;
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_341;
          Instance = WarBoardStagePieceDetailMaster__TryGetEntity(
                       Master_WarQuestSelectionMaster,
                       &entity,
                       (*v733)->fields.stageId,
                       (*v733)->fields.forceId,
                       (*v733)->fields.groupId,
                       (*v733)->fields.pieceIndex,
                       0LL);
          if ( (Instance & 1) != 0 )
          {
            Instance = (__int64)entity;
            if ( !entity )
              goto LABEL_341;
            Instance = WarBoardStagePieceDetailEntity__GetImageSvtId(entity, 0LL);
            if ( !v757 )
              goto LABEL_341;
            v757->fields._npcImageSvtId_k__BackingField = Instance;
            Instance = (__int64)entity;
            if ( !entity )
              goto LABEL_341;
            v757->fields._npcDispLimitCount_k__BackingField = WarBoardStagePieceDetailEntity__GetDispLimitCnt(
                                                                entity,
                                                                0LL);
          }
          else if ( !v757 )
          {
            goto LABEL_341;
          }
          Instance = (__int64)v987;
          if ( !v987 )
            goto LABEL_341;
          Entity_20688452 = NpcFollowerMaster__GetEntity_20688452(
                              v987,
                              questId,
                              v1005,
                              v757->fields._npcId_k__BackingField,
                              0LL);
          if ( Entity_20688452 )
          {
            v760 = Entity_20688452;
            if ( !v757->fields._npcImageSvtId_k__BackingField )
              v757->fields._npcImageSvtId_k__BackingField = NpcFollowerEntity__GetImageSvtId(Entity_20688452, 0LL);
            if ( (v757->fields._npcDispLimitCount_k__BackingField & 0x80000000) != 0 )
              v757->fields._npcDispLimitCount_k__BackingField = NpcFollowerEntity__GetDispLimitCnt(v760, 0LL);
          }
          if ( WarBoardPieceData__get_isPlayerGroup(v757, 0LL) )
          {
            Instance = (__int64)v980;
            if ( !v980 )
              goto LABEL_341;
            if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                   v980,
                   &v1017,
                   v757->fields._npcId_k__BackingField,
                   (const MethodInfo_23FB094 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
            {
              Instance = (__int64)v1017;
              if ( !v1017 )
                goto LABEL_341;
              NpcServantFollowerEntity__GetFollowerName_20689924(
                (NpcServantFollowerEntity_o *)v1017,
                v757->fields._npcId_k__BackingField,
                questId,
                v1005,
                &isChangeName,
                0LL);
              if ( isChangeName )
              {
                Instance = (__int64)v757->fields._battleServant_k__BackingField;
                if ( !Instance )
                  goto LABEL_341;
                BattleServantData__ClearOverwriteServantName((BattleServantData_o *)Instance, 0LL);
              }
            }
          }
          Instance = (__int64)v998;
          if ( !v998 )
            goto LABEL_341;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v998,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v757,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
          ++npcIdx;
        }
        else
        {
          WarBoardPieceData___ctor(v756, v752, (WarBoardUserServantData_o *)v742, v1013, v749, v758, v755, -1, 0LL);
          if ( !v757 )
            goto LABEL_341;
          v584 = v1011;
          v598 = layoutEntities;
          v724 = v992;
          if ( WarBoardPieceData__get_isMaster(v757, 0LL) )
          {
            Instance = (__int64)*p_masterExistsForce;
            if ( !*p_masterExistsForce )
              goto LABEL_341;
            if ( !System_Collections_Generic_List_int___Contains(
                    (System_Collections_Generic_List_int__o *)Instance,
                    v757->fields._forceId_k__BackingField,
                    (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__) )
            {
              Instance = (__int64)*p_masterExistsForce;
              if ( !*p_masterExistsForce )
                goto LABEL_341;
              System_Collections_Generic_List_int___Add(
                (System_Collections_Generic_List_int__o *)Instance,
                v757->fields._forceId_k__BackingField,
                (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
            }
          }
          Instance = (__int64)v998;
          if ( !v998 )
            goto LABEL_341;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v998,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v757,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
        }
        this = v1015;
        v7 = v995;
      }
      v761 = *v733;
      if ( !*v733 )
        goto LABEL_341;
      switch ( v761->fields.type )
      {
        case 2:
          getItemInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v584->fields.getItemInfo;
          v763 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardUserGetItemData__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v763,
            (Il2CppObject *)v725,
            Method_WarBoardData___c__DisplayClass77_4___ctor_b__14__,
            (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardUserGetItemData__bool___ctor__);
          v764 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                   getItemInfo,
                   (System_Func_TSource__bool__o *)v763,
                   (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
          v765 = *(WarBoardStageLayoutEntity_o **)(v725 + 16);
          v766 = (WarBoardUserGetItemData_o *)v764;
          v767 = (WarBoardItemData_o *)sub_B5D694(WarBoardItemData_TypeInfo);
          WarBoardItemData___ctor(v767, v765, v766, 0LL);
          Instance = (__int64)v985;
          if ( !v985 )
            goto LABEL_341;
          v768 = &Method_System_Collections_Generic_List_WarBoardItemData__Add__;
          goto LABEL_252;
        case 3:
          v767 = (WarBoardItemData_o *)sub_B5D694(WarBoardEffectData_TypeInfo);
          WarBoardEffectData___ctor((WarBoardEffectData_o *)v767, v761, 0LL);
          Instance = (__int64)v984;
          if ( !v984 )
            goto LABEL_341;
          v768 = &Method_System_Collections_Generic_List_WarBoardEffectData__Add__;
          goto LABEL_252;
        case 4:
          treasureInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v584->fields.treasureInfo;
          if ( !treasureInfo )
            goto LABEL_246;
          v770 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardUserTreasureData__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v770,
            (Il2CppObject *)v725,
            Method_WarBoardData___c__DisplayClass77_4___ctor_b__11__,
            (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardUserTreasureData__bool___ctor__);
          if ( System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                 treasureInfo,
                 (System_Func_TSource__bool__o *)v770,
                 (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserTreasureData___) )
          {
            goto LABEL_254;
          }
          v761 = *v733;
LABEL_246:
          v767 = (WarBoardItemData_o *)sub_B5D694(WarBoardTreasureData_TypeInfo);
          WarBoardTreasureData___ctor((WarBoardTreasureData_o *)v767, v761, 0LL);
          Instance = (__int64)v981;
          if ( !v981 )
            goto LABEL_341;
          v768 = &Method_System_Collections_Generic_List_WarBoardTreasureData__Add__;
LABEL_252:
          v744 = (const MethodInfo_3056FC0 *)*v768;
          v743 = (EventMissionProgressRequest_Argument_ProgressData_o *)v767;
          break;
        case 5:
          wallInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v584->fields.wallInfo;
          v772 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardUserWallData__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v772,
            (Il2CppObject *)v725,
            Method_WarBoardData___c__DisplayClass77_4___ctor_b__15__,
            (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardUserWallData__bool___ctor__);
          v773 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                   wallInfo,
                   (System_Func_TSource__bool__o *)v772,
                   (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
          v774 = *(WarBoardStageLayoutEntity_o **)(v725 + 16);
          v775 = (WarBoardUserWallData_o *)v773;
          v767 = (WarBoardItemData_o *)sub_B5D694(WarBoardWallData_TypeInfo);
          WarBoardWallData___ctor((WarBoardWallData_o *)v767, v774, v775, 0LL);
          Instance = (__int64)v986;
          if ( !v986 )
            goto LABEL_341;
          v768 = &Method_System_Collections_Generic_List_WarBoardWallData__Add__;
          goto LABEL_252;
        default:
          goto LABEL_254;
      }
LABEL_253:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
        v743,
        v744);
LABEL_254:
      ++v723;
    }
    while ( (__int64)v723 < v724 );
  }
  Instance = (__int64)v997;
  if ( !v997 )
    goto LABEL_341;
  v776 = (struct WarBoardSquareData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v997,
                                              (const MethodInfo_305910C *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  this->fields.squares = v776;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.squares,
    (System_Int32_array **)v776,
    v777,
    v778,
    v779,
    v780,
    v781,
    v782);
  Instance = (__int64)v989;
  if ( !v989 )
    goto LABEL_341;
  v783 = (struct WarBoardSquareData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              v989,
                                              (const MethodInfo_305910C *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  this->fields.condSquares = v783;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.condSquares,
    (System_Int32_array **)v783,
    v784,
    v785,
    v786,
    v787,
    v788,
    v789);
  Instance = (__int64)v998;
  if ( !v998 )
    goto LABEL_341;
  v790 = (struct WarBoardPieceData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v998,
                                             (const MethodInfo_305910C *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  this->fields.pieces = v790;
  p_pieces = (System_Collections_Generic_IEnumerable_T__o **)&this->fields.pieces;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.pieces,
    (System_Int32_array **)v790,
    v792,
    v793,
    v794,
    v795,
    v796,
    v797);
  pieces = this->fields.pieces;
  v799 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_WarBoardPieceData__TypeInfo);
  System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
    v799,
    (Il2CppObject *)this,
    Method_WarBoardData_ComparePiece__,
    (const MethodInfo_249B1FC *)Method_System_Comparison_WarBoardPieceData___ctor__);
  System_Array__Sort_BattleBuffData_BuffData_(
    (BattleBuffData_BuffData_array *)pieces,
    (System_Comparison_T__o *)v799,
    (const MethodInfo_1AC8530 *)Method_System_Array_Sort_WarBoardPieceData___);
  Instance = (__int64)v985;
  if ( !v985 )
    goto LABEL_341;
  v800 = (struct WarBoardItemData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            v985,
                                            (const MethodInfo_305910C *)Method_System_Collections_Generic_List_WarBoardItemData__ToArray__);
  this->fields.items = v800;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.items,
    (System_Int32_array **)v800,
    v801,
    v802,
    v803,
    v804,
    v805,
    v806);
  Instance = (__int64)v981;
  if ( !v981 )
    goto LABEL_341;
  v807 = (struct WarBoardTreasureData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                v981,
                                                (const MethodInfo_305910C *)Method_System_Collections_Generic_List_WarBoardTreasureData__ToArray__);
  this->fields.treasures = v807;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.treasures,
    (System_Int32_array **)v807,
    v808,
    v809,
    v810,
    v811,
    v812,
    v813);
  Instance = (__int64)v984;
  if ( !v984 )
    goto LABEL_341;
  v814 = (struct WarBoardEffectData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v984,
                                              (const MethodInfo_305910C *)Method_System_Collections_Generic_List_WarBoardEffectData__ToArray__);
  this->fields.effects = v814;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.effects,
    (System_Int32_array **)v814,
    v815,
    v816,
    v817,
    v818,
    v819,
    v820);
  Instance = (__int64)v986;
  if ( !v986 )
    goto LABEL_341;
  v821 = (struct WarBoardWallData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            v986,
                                            (const MethodInfo_305910C *)Method_System_Collections_Generic_List_WarBoardWallData__ToArray__);
  this->fields.walls = v821;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.walls,
    (System_Int32_array **)v821,
    v822,
    v823,
    v824,
    v825,
    v826,
    v827);
  this->fields.serverData = v1011;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.serverData,
    (System_Int32_array **)v1011,
    v828,
    v829,
    v830,
    v831,
    v832,
    v833);
  if ( v1011->fields.progressType == 3 )
    WarBoardData__InitPrevCondData(this, throughCondId);
  v834 = this->fields.localSaveData;
  if ( v834 )
  {
    v835 = v834->fields.pieceSaves;
    v1006 = &this->fields.localSaveData;
    if ( v835 )
    {
      if ( (int)v835->max_length >= 1 )
      {
        v836 = 0LL;
        m_Items = v835->m_Items;
        do
        {
          v838 = sub_B5D694(WarBoardData___c__DisplayClass77_5_TypeInfo);
          WarBoardData___c__DisplayClass77_5___ctor((WarBoardData___c__DisplayClass77_5_o *)v838, 0LL);
          if ( v836 >= v835->max_length )
            goto LABEL_342;
          if ( !v838 )
            goto LABEL_341;
          v845 = (System_Int32_array **)m_Items[v836];
          *(_QWORD *)(v838 + 16) = v845;
          v846 = (WarBoardPieceData_SaveData_o **)(v838 + 16);
          sub_B5D560((BattleServantConfConponent_o *)(v838 + 16), v845, v839, v840, v841, v842, v843, v844);
          v847 = *p_pieces;
          v848 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardPieceData__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v848,
            (Il2CppObject *)v838,
            Method_WarBoardData___c__DisplayClass77_5___ctor_b__16__,
            (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
          if ( !BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
                  (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)v847,
                  (System_Func_T__bool__o *)v848,
                  (const MethodInfo_1AD6DE0 *)Method_BasicHelper_Any_WarBoardPieceData___) )
          {
            v849 = (System_Collections_Generic_IEnumerable_TSource__o *)v1011->fields.svtInfo;
            v850 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardUserServantData__bool__TypeInfo);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
              v850,
              (Il2CppObject *)v838,
              Method_WarBoardData___c__DisplayClass77_5___ctor_b__17__,
              (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardUserServantData__bool___ctor__);
            v851 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                     v849,
                     (System_Func_TSource__bool__o *)v850,
                     (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
            v852 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v852,
              (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
            if ( !v852 )
              goto LABEL_341;
            v853 = v835;
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v852,
              *p_pieces,
              (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
            if ( !p_fields->stageEntity )
              goto LABEL_341;
            id = p_fields->stageEntity->fields.id;
            v1009 = *v846;
            v854 = (WarBoardPieceData_o *)sub_B5D694(WarBoardPieceData_TypeInfo);
            WarBoardPieceData___ctor_23051036(v854, id, (WarBoardUserServantData_o *)v851, v1009, 0LL, -1, 0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v852,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v854,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
            v855 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v852,
                                            (const MethodInfo_305910C *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
            *p_pieces = (System_Collections_Generic_IEnumerable_T__o *)v855;
            sub_B5D560((BattleServantConfConponent_o *)p_pieces, v855, v856, v857, v858, v859, v860, v861);
            v835 = v853;
          }
          Instance = (__int64)*v846;
          if ( !*v846 )
            goto LABEL_341;
          WarBoardPieceData_SaveData__SetOwner((WarBoardPieceData_SaveData_o *)Instance, v1015, 0LL);
          Instance = (__int64)*v846;
          if ( !*v846 )
            goto LABEL_341;
          WarBoardPieceData_SaveData__Load((WarBoardPieceData_SaveData_o *)Instance, 0LL);
        }
        while ( (__int64)++v836 < (int)v835->max_length );
      }
      if ( *v1006 )
      {
        v862 = (*v1006)->fields.itemSaves;
        if ( v862 )
        {
          max_length = v862->max_length;
          if ( max_length >= 1 )
          {
            v864 = 0;
            while ( v864 < max_length )
            {
              v865 = &v862->obj.klass + (int)v864;
              v866 = (WarBoardItemData_SaveData_o *)v865[4];
              if ( !v866 )
                goto LABEL_341;
              WarBoardItemData_SaveData__SetOwner((WarBoardItemData_SaveData_o *)v865[4], v1015, 0LL);
              WarBoardItemData_SaveData__Load(v866, 0LL);
              max_length = v862->max_length;
              if ( (int)++v864 >= max_length )
                goto LABEL_284;
            }
            goto LABEL_342;
          }
LABEL_284:
          if ( *v1006 )
          {
            v867 = (*v1006)->fields.treasureSaves;
            if ( v867 )
            {
              v868 = v867->max_length;
              if ( v868 >= 1 )
              {
                v869 = 0;
                while ( v869 < v868 )
                {
                  v870 = &v867->obj.klass + (int)v869;
                  v871 = (WarBoardTreasureData_SaveData_o *)v870[4];
                  if ( !v871 )
                    goto LABEL_341;
                  WarBoardTreasureData_SaveData__SetOwner((WarBoardTreasureData_SaveData_o *)v870[4], v1015, 0LL);
                  WarBoardTreasureData_SaveData__Load(v871, 0LL);
                  v868 = v867->max_length;
                  if ( (int)++v869 >= v868 )
                    goto LABEL_291;
                }
                goto LABEL_342;
              }
LABEL_291:
              if ( *v1006 )
              {
                v872 = (*v1006)->fields.wallSaves;
                if ( v872 )
                {
                  v873 = v872->max_length;
                  if ( v873 >= 1 )
                  {
                    v874 = 0;
                    while ( v874 < v873 )
                    {
                      v875 = &v872->obj.klass + (int)v874;
                      v876 = (WarBoardWallData_SaveData_o *)v875[4];
                      if ( !v876 )
                        goto LABEL_341;
                      WarBoardWallData_SaveData__SetOwner((WarBoardWallData_SaveData_o *)v875[4], v1015, 0LL);
                      WarBoardWallData_SaveData__Load(v876, 0LL);
                      v873 = v872->max_length;
                      if ( (int)++v874 >= v873 )
                        goto LABEL_298;
                    }
                    goto LABEL_342;
                  }
LABEL_298:
                  if ( *v1006 )
                  {
                    squareSaves = (*v1006)->fields.squareSaves;
                    if ( squareSaves )
                    {
                      v878 = squareSaves->max_length;
                      if ( v878 >= 1 )
                      {
                        v879 = 0;
                        while ( v879 < v878 )
                        {
                          v880 = &squareSaves->obj.klass + (int)v879;
                          v881 = (WarBoardSquareData_SaveData_o *)v880[4];
                          if ( !v881 )
                            goto LABEL_341;
                          WarBoardSquareData_SaveData__SetOwner((WarBoardSquareData_SaveData_o *)v880[4], v1015, 0LL);
                          WarBoardSquareData_SaveData__Load(v881, 0LL);
                          v878 = squareSaves->max_length;
                          if ( (int)++v879 >= v878 )
                            goto LABEL_305;
                        }
                        goto LABEL_342;
                      }
LABEL_305:
                      if ( *v1006 )
                      {
                        v1015->fields.isPlayedHalfDeadMessage = (*v1006)->fields.isPlayedHalfDeadMessage;
                        v882 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardEventData__TypeInfo);
                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                          v882,
                          (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardEventData___ctor__);
                        v1015->fields.listEvent = (struct System_Collections_Generic_List_WarBoardEventData__o *)v882;
                        sub_B5D560(
                          (BattleServantConfConponent_o *)p_listEvent,
                          (System_Int32_array **)v882,
                          v883,
                          v884,
                          v885,
                          v886,
                          v887,
                          v888);
                        v895 = v1015->fields.localSaveData;
                        if ( v895 )
                        {
                          eventSaves = v895->fields.eventSaves;
                          if ( eventSaves )
                          {
                            v897 = *(_QWORD *)&eventSaves->max_length;
                            if ( (int)v897 >= 1 )
                            {
                              v898 = 0LL;
                              while ( v898 < (unsigned int)v897 )
                              {
                                v899 = eventSaves->m_Items[v898];
                                v900 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_listEvent;
                                v901 = (WarBoardEventData_o *)sub_B5D694(WarBoardEventData_TypeInfo);
                                WarBoardEventData___ctor_18690792(v901, v899, 0LL);
                                if ( !v900 )
                                  goto LABEL_341;
                                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                  v900,
                                  (EventMissionProgressRequest_Argument_ProgressData_o *)v901,
                                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardEventData__Add__);
                                LODWORD(v897) = eventSaves->max_length;
                                if ( (__int64)++v898 >= (int)v897 )
                                  goto LABEL_313;
                              }
                              goto LABEL_342;
                            }
LABEL_313:
                            v902 = *v1006;
                            if ( *v1006 )
                            {
                              v1015->fields.winCondId = v902->fields.winCondId;
                              latestPieceActionSquareIndexes = (System_Int32_array **)v902->fields.latestPieceActionSquareIndexes;
                              v1015->fields.latestPieceActionSquareIndexes = (struct System_Int32_array *)latestPieceActionSquareIndexes;
                              sub_B5D560(
                                (BattleServantConfConponent_o *)p_latestPieceActionSquareIndexes,
                                latestPieceActionSquareIndexes,
                                v889,
                                v890,
                                v891,
                                v892,
                                v893,
                                v894);
                              v910 = v1015->fields.localSaveData;
                              if ( v910 )
                              {
                                latestBattlePieceUniqueIndexes = (System_Int32_array **)v910->fields.latestBattlePieceUniqueIndexes;
                                p_latestBattlePieceUniqueIndexes->klass = (BattleServantConfConponent_c *)latestBattlePieceUniqueIndexes;
                                sub_B5D560(
                                  p_latestBattlePieceUniqueIndexes,
                                  latestBattlePieceUniqueIndexes,
                                  v904,
                                  v905,
                                  v906,
                                  v907,
                                  v908,
                                  v909);
                                v912 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardPrevCondData__TypeInfo);
                                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                                  v912,
                                  (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardPrevCondData___ctor__);
                                p_listPrevCond->klass = (BattleServantConfConponent_c *)v912;
                                sub_B5D560(
                                  p_listPrevCond,
                                  (System_Int32_array **)v912,
                                  v913,
                                  v914,
                                  v915,
                                  v916,
                                  v917,
                                  v918);
                                if ( *v1006 )
                                {
                                  prevCondSaves = (*v1006)->fields.prevCondSaves;
                                  if ( prevCondSaves )
                                  {
                                    v920 = *(_QWORD *)&prevCondSaves->max_length;
                                    if ( (int)v920 >= 1 )
                                    {
                                      v921 = 0LL;
                                      while ( v921 < (unsigned int)v920 )
                                      {
                                        v922 = prevCondSaves->m_Items[v921];
                                        v923 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)p_listPrevCond->klass;
                                        v924 = (WarBoardPrevCondData_o *)sub_B5D694(WarBoardPrevCondData_TypeInfo);
                                        WarBoardPrevCondData___ctor_29110976(v924, v922, 0LL);
                                        if ( !v923 )
                                          goto LABEL_341;
                                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                          v923,
                                          (EventMissionProgressRequest_Argument_ProgressData_o *)v924,
                                          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__);
                                        LODWORD(v920) = prevCondSaves->max_length;
                                        if ( (__int64)++v921 >= (int)v920 )
                                          goto LABEL_322;
                                      }
                                      goto LABEL_342;
                                    }
LABEL_322:
                                    v925 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_HoldReinforcementsData__TypeInfo);
                                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                                      v925,
                                      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_HoldReinforcementsData___ctor__);
                                    p_reinforcementsSaveList->klass = (BattleServantConfConponent_c *)v925;
                                    sub_B5D560(
                                      p_reinforcementsSaveList,
                                      (System_Int32_array **)v925,
                                      v926,
                                      v927,
                                      v928,
                                      v929,
                                      v930,
                                      v931);
                                    if ( *v1006 )
                                    {
                                      reinforcementsSaves = (*v1006)->fields.reinforcementsSaves;
                                      if ( reinforcementsSaves )
                                      {
                                        v933 = *(_QWORD *)&reinforcementsSaves->max_length;
                                        if ( (int)v933 >= 1 )
                                        {
                                          v934 = 0LL;
                                          while ( v934 < (unsigned int)v933 )
                                          {
                                            v935 = reinforcementsSaves->m_Items[v934];
                                            v936 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)p_reinforcementsSaveList->klass;
                                            v937 = (HoldReinforcementsData_o *)sub_B5D694(HoldReinforcementsData_TypeInfo);
                                            HoldReinforcementsData___ctor_28462620(v937, v935, 0LL);
                                            if ( !v936 )
                                              goto LABEL_341;
                                            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                              v936,
                                              (EventMissionProgressRequest_Argument_ProgressData_o *)v937,
                                              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_HoldReinforcementsData__Add__);
                                            LODWORD(v933) = reinforcementsSaves->max_length;
                                            if ( (__int64)++v934 >= (int)v933 )
                                              goto LABEL_329;
                                          }
                                          goto LABEL_342;
                                        }
LABEL_329:
                                        if ( *v1006 )
                                        {
                                          v938 = (System_Int32_array **)System_Linq_Enumerable__ToList_int_(
                                                                          (System_Collections_Generic_IEnumerable_TSource__o *)(*v1006)->fields.playedReinforcements,
                                                                          (const MethodInfo_1CBA56C *)Method_System_Linq_Enumerable_ToList_int___);
                                          p_playedStageReinforcementsList->klass = (BattleServantConfConponent_c *)v938;
                                          sub_B5D560(
                                            p_playedStageReinforcementsList,
                                            v938,
                                            v939,
                                            v940,
                                            v941,
                                            v942,
                                            v943,
                                            v944);
                                          v945 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardUiData__TypeInfo);
                                          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                                            v945,
                                            (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardUiData___ctor__);
                                          p_listUiData->klass = (BattleServantConfConponent_c *)v945;
                                          sub_B5D560(
                                            p_listUiData,
                                            (System_Int32_array **)v945,
                                            v946,
                                            v947,
                                            v948,
                                            v949,
                                            v950,
                                            v951);
                                          if ( *v1006 )
                                          {
                                            uiDataSaves = (*v1006)->fields.uiDataSaves;
                                            if ( uiDataSaves )
                                            {
                                              v959 = *(_QWORD *)&uiDataSaves->max_length;
                                              if ( (int)v959 >= 1 )
                                              {
                                                v960 = 0LL;
                                                while ( v960 < (unsigned int)v959 )
                                                {
                                                  v961 = uiDataSaves->m_Items[v960];
                                                  v962 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)p_listUiData->klass;
                                                  v963 = (WarBoardUiData_o *)sub_B5D694(WarBoardUiData_TypeInfo);
                                                  WarBoardUiData___ctor_26255768(v963, v961, 0LL);
                                                  if ( !v962 )
                                                    goto LABEL_341;
                                                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                    v962,
                                                    (EventMissionProgressRequest_Argument_ProgressData_o *)v963,
                                                    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardUiData__Add__);
                                                  LODWORD(v959) = uiDataSaves->max_length;
                                                  if ( (__int64)++v960 >= (int)v959 )
                                                    goto LABEL_337;
                                                }
                                                goto LABEL_342;
                                              }
LABEL_337:
                                              if ( *v1006 )
                                              {
                                                bgAnimationInfo = (System_Int32_array **)(*v1006)->fields.bgAnimationInfo;
                                                p_bgAnimationInfo_k__BackingField->klass = (BattleServantConfConponent_c *)bgAnimationInfo;
                                                sub_B5D560(
                                                  p_bgAnimationInfo_k__BackingField,
                                                  bgAnimationInfo,
                                                  v952,
                                                  v953,
                                                  v954,
                                                  v955,
                                                  v956,
                                                  v957);
                                                v965 = *v1006;
                                                if ( *v1006 )
                                                {
                                                  v1015->fields._ContinueConsumeType_k__BackingField = v965->fields.continueConsumeType;
                                                  v1015->fields._IsContinue_k__BackingField = v965->fields.isContinue;
                                                  v1015->fields._IsNextTurn_k__BackingField = v965->fields.isNextTurn;
                                                  v1015->fields.localSaveTiming = v965->fields.localSaveTiming;
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
LABEL_341:
    sub_B5D69C(Instance, throughCondId);
  }
  v966 = (WarBoardData_WarBoardLocalSaveData_o *)sub_B5D694(WarBoardData_WarBoardLocalSaveData_TypeInfo);
  WarBoardData_WarBoardLocalSaveData___ctor_23081720(v966, this, 0LL);
  this->fields.localSaveData = v966;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.localSaveData,
    (System_Int32_array **)v966,
    v967,
    v968,
    v969,
    v970,
    v971,
    v972);
}


void __fastcall WarBoardData__AddPlayedEventData(
        WarBoardData_o *this,
        WarBoardEventData_o *eventData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Collections_Generic_List_WarBoardEventData__o *listEvent; // x0

  if ( (byte_42E778D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardEventData__Add__, (_DWORD)eventData, (_DWORD)method, v3);
    byte_42E778D = 1;
  }
  listEvent = this->fields.listEvent;
  if ( !listEvent )
    sub_B5D69C(0LL, eventData);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)listEvent,
    (EventMissionProgressRequest_Argument_ProgressData_o *)eventData,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardEventData__Add__);
}


WarBoardPieceData_array *__fastcall WarBoardData__AddReinforcementPieces(
        WarBoardData_o *this,
        WarBoardDataEntity_o *serverData,
        WarBoardUserServantData_array *reinfoSvtInfo,
        System_Int32_array *indexList,
        WarBoardStageReinforcementsEntity_o *reinfoStage,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x26
  WarBoardUserServantData_array *v8; // x25
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  WarBoardReinforcementsMaster_o *Master_WarQuestSelectionMaster; // x27
  __int64 Instance; // x0
  __int64 v61; // x1
  WarQuestSelectionMaster_o *v62; // x19
  __int64 v63; // x8
  unsigned __int64 v64; // x23
  int32_t *v65; // x22
  WarBoardUserServantData_o *v66; // x19
  struct System_Int32_array *reinforcementsIds; // x8
  struct System_Int32_array *v68; // x8
  __int64 v69; // x9
  struct System_Collections_Generic_List_int__o *reinforcementsAppointmentSquareList; // x20
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *npcEntityDict; // x25
  System_Int32_array *v72; // x27
  WarBoardUserServantData_o *v73; // x24
  int32_t *v74; // x19
  int32_t v75; // w26
  int32_t v76; // w22
  WarBoardPieceData_o *v77; // x20
  NpcFollowerEntity_o *Entity_20688452; // x0
  NpcFollowerEntity_o *v79; // x24
  struct WarBoardPieceData_array **p_pieces; // x20
  struct WarBoardPieceData_array *v81; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_Int32_array **svtInfo; // x1
  __int64 v95; // x21
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x22
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  unsigned __int64 v103; // x23
  signed __int64 v104; // x24
  __int64 v105; // x25
  struct WarBoardData_WarBoardLocalSaveData_o *v106; // x8
  struct WarBoardPieceData_array *v107; // x9
  unsigned int *pieceSaves; // x27
  WarBoardPieceData_o *v109; // x22
  WarBoardPieceData_SaveData_o *v110; // x21
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  __int64 v118; // x0
  __int64 v119; // x0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v120; // [xsp+8h] [xbp-C8h]
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // [xsp+10h] [xbp-C0h]
  WarBoardReinforcementsMaster_o *v122; // [xsp+18h] [xbp-B8h]
  WarBoardUserServantData_array *v123; // [xsp+20h] [xbp-B0h]
  NpcFollowerMaster_o *v124; // [xsp+28h] [xbp-A8h]
  WarBoardStagePieceDetailMaster_o *v125; // [xsp+30h] [xbp-A0h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v126; // [xsp+38h] [xbp-98h]
  WarBoardUserServantData_o **m_Items; // [xsp+40h] [xbp-90h]
  int32_t questPhase; // [xsp+48h] [xbp-88h]
  int32_t questId; // [xsp+4Ch] [xbp-84h]
  WarBoardReinforcementsEntity_o *v130; // [xsp+50h] [xbp-80h]
  WarBoardStageReinforcementsEntity_o *v131; // [xsp+58h] [xbp-78h]
  bool isChangeName; // [xsp+64h] [xbp-6Ch] BYREF
  UserServantEntity_o *v133; // [xsp+68h] [xbp-68h] BYREF
  WarBoardStagePieceDetailEntity_o *v134; // [xsp+70h] [xbp-60h] BYREF
  WarBoardReinforcementsEntity_o *entity; // [xsp+78h] [xbp-58h] BYREF

  v7 = indexList;
  v8 = reinfoSvtInfo;
  if ( (byte_42E778B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_NpcServantFollowerMaster___,
      (_DWORD)serverData,
      (_DWORD)reinfoSvtInfo,
      indexList);
    sub_B5D5C4(&Method_DataManager_GetMaster_NpcFollowerMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___, v17, v18, v19);
    sub_B5D5C4(&DataManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(
      &Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__,
      v23,
      v24,
      v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__RemoveAt__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v41, v42, v43);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v44, v45, v46);
    sub_B5D5C4(&WarBoardPieceData_SaveData___TypeInfo, v47, v48, v49);
    sub_B5D5C4(&WarBoardPieceData_SaveData_TypeInfo, v50, v51, v52);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v53, v54, v55);
    sub_B5D5C4(&WarBoardPieceData_TypeInfo, v56, v57, v58);
    byte_42E778B = 1;
  }
  entity = 0LL;
  v134 = 0LL;
  v133 = 0LL;
  isChangeName = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardReinforcementsMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  v62 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
  Instance = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v124 = (NpcFollowerMaster_o *)Instance;
  if ( !serverData )
    goto LABEL_68;
  v125 = (WarBoardStagePieceDetailMaster_o *)v62;
  questId = serverData->fields.questId;
  questPhase = serverData->fields.questPhase;
  v120 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)sub_B5D694(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v120,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v126 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v126,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( !v8 )
    goto LABEL_68;
  v63 = *(_QWORD *)&v8->max_length;
  if ( (int)v63 >= 1 )
  {
    v64 = 0LL;
    v65 = &v7->m_Items[1];
    m_Items = v8->m_Items;
    v131 = reinfoStage;
    v122 = Master_WarQuestSelectionMaster;
    v123 = v8;
    do
    {
      if ( v64 >= (unsigned int)v63 )
      {
LABEL_69:
        v118 = sub_B5D6C8(Instance);
        sub_B5D668(v118, 0LL);
      }
      v66 = m_Items[v64];
      if ( v66 )
      {
        if ( !reinfoStage || !v7 )
          goto LABEL_68;
      }
      else
      {
        if ( !reinfoStage )
          goto LABEL_68;
        reinforcementsIds = reinfoStage->fields.reinforcementsIds;
        if ( !reinforcementsIds || !v7 )
          goto LABEL_68;
        if ( v64 >= v7->max_length )
          goto LABEL_69;
        if ( v65[v64] < (signed int)reinforcementsIds->max_length )
          goto LABEL_51;
      }
      if ( v64 >= v7->max_length )
        goto LABEL_69;
      v68 = reinfoStage->fields.reinforcementsIds;
      if ( !v68 )
        goto LABEL_68;
      v69 = v65[v64];
      if ( (unsigned int)v69 >= v68->max_length )
        goto LABEL_69;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_68;
      Instance = WarBoardReinforcementsMaster__TryGetEntity(
                   Master_WarQuestSelectionMaster,
                   &entity,
                   v68->m_Items[v69 + 1],
                   0LL);
      reinforcementsAppointmentSquareList = this->fields.reinforcementsAppointmentSquareList;
      if ( !reinforcementsAppointmentSquareList )
        goto LABEL_68;
      npcEntityDict = this->fields.npcEntityDict;
      v130 = entity;
      if ( !reinforcementsAppointmentSquareList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( v64 >= v7->max_length )
        goto LABEL_69;
      v72 = v7;
      v73 = v66;
      v74 = v65;
      v75 = reinforcementsAppointmentSquareList->fields._items->m_Items[1];
      v76 = v65[v64];
      v77 = (WarBoardPieceData_o *)sub_B5D694(WarBoardPieceData_TypeInfo);
      WarBoardPieceData___ctor_23049788(v77, v131, v130, v73, npcEntityDict, v64, v75, v76, 0LL);
      Instance = (__int64)this->fields.reinforcementsAppointmentSquareList;
      if ( !Instance )
        goto LABEL_68;
      System_Collections_Generic_List_int___RemoveAt(
        (System_Collections_Generic_List_int__o *)Instance,
        0,
        (const MethodInfo_30860C4 *)Method_System_Collections_Generic_List_int__RemoveAt__);
      Instance = (__int64)v125;
      if ( !v77 || !v125 )
        goto LABEL_68;
      v7 = v72;
      v65 = v74;
      Master_WarQuestSelectionMaster = v122;
      v8 = v123;
      if ( WarBoardStagePieceDetailMaster__TryGetEntity(
             v125,
             &v134,
             serverData->fields.stageId,
             v77->fields._forceId_k__BackingField,
             v77->fields._groupId_k__BackingField,
             v77->fields._index_k__BackingField,
             0LL) )
      {
        Instance = (__int64)v134;
        if ( !v134 )
          goto LABEL_68;
        v77->fields._npcImageSvtId_k__BackingField = WarBoardStagePieceDetailEntity__GetImageSvtId(v134, 0LL);
        Instance = (__int64)v134;
        if ( !v134 )
          goto LABEL_68;
        v77->fields._npcDispLimitCount_k__BackingField = WarBoardStagePieceDetailEntity__GetDispLimitCnt(v134, 0LL);
      }
      Instance = (__int64)v124;
      if ( !v124 )
        goto LABEL_68;
      Entity_20688452 = NpcFollowerMaster__GetEntity_20688452(
                          v124,
                          questId,
                          questPhase,
                          v77->fields._npcId_k__BackingField,
                          0LL);
      if ( Entity_20688452 )
      {
        v79 = Entity_20688452;
        if ( !v77->fields._npcImageSvtId_k__BackingField )
          v77->fields._npcImageSvtId_k__BackingField = NpcFollowerEntity__GetImageSvtId(Entity_20688452, 0LL);
        if ( (v77->fields._npcDispLimitCount_k__BackingField & 0x80000000) != 0 )
          v77->fields._npcDispLimitCount_k__BackingField = NpcFollowerEntity__GetDispLimitCnt(v79, 0LL);
      }
      reinfoStage = v131;
      if ( WarBoardPieceData__get_isPlayerGroup(v77, 0LL) )
      {
        Instance = (__int64)MasterData_WarQuestSelectionMaster;
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_68;
        if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
               MasterData_WarQuestSelectionMaster,
               &v133,
               v77->fields._npcId_k__BackingField,
               (const MethodInfo_23FB094 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
        {
          Instance = (__int64)v133;
          if ( !v133 )
            goto LABEL_68;
          NpcServantFollowerEntity__GetFollowerName_20689924(
            (NpcServantFollowerEntity_o *)v133,
            v77->fields._npcId_k__BackingField,
            questId,
            questPhase,
            &isChangeName,
            0LL);
          if ( isChangeName )
          {
            Instance = (__int64)v77->fields._battleServant_k__BackingField;
            if ( !Instance )
              goto LABEL_68;
            BattleServantData__ClearOverwriteServantName((BattleServantData_o *)Instance, 0LL);
          }
        }
      }
      Instance = (__int64)v126;
      if ( !v126 )
        goto LABEL_68;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v126,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v77,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
LABEL_51:
      LODWORD(v63) = v8->max_length;
    }
    while ( (__int64)++v64 < (int)v63 );
  }
  if ( !v120 )
    goto LABEL_68;
  p_pieces = &this->fields.pieces;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    v120,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.pieces,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    v120,
    (System_Collections_Generic_IEnumerable_T__o *)v126,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
  v81 = (struct WarBoardPieceData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v120,
                                            (const MethodInfo_305910C *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  this->fields.pieces = v81;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.pieces,
    (System_Int32_array **)v81,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
  Instance = (__int64)this->fields.serverData;
  if ( !Instance
    || (svtInfo = (System_Int32_array **)serverData->fields.svtInfo,
        *(_QWORD *)(Instance + 16) = svtInfo,
        sub_B5D560((BattleServantConfConponent_o *)(Instance + 16), svtInfo, v88, v89, v90, v91, v92, v93),
        !*p_pieces)
    || (v95 = *(_QWORD *)&(*p_pieces)->max_length,
        localSaveData = this->fields.localSaveData,
        Instance = sub_B5D5DC(WarBoardPieceData_SaveData___TypeInfo, (unsigned int)v95),
        !localSaveData) )
  {
LABEL_68:
    sub_B5D69C(Instance, v61);
  }
  localSaveData->fields.pieceSaves = (struct WarBoardPieceData_SaveData_array *)Instance;
  sub_B5D560(
    (BattleServantConfConponent_o *)&localSaveData->fields.pieceSaves,
    (System_Int32_array **)Instance,
    v97,
    v98,
    v99,
    v100,
    v101,
    v102);
  if ( (int)v95 >= 1 )
  {
    v103 = 0LL;
    v104 = (int)v95;
    v105 = 8LL;
    do
    {
      v106 = this->fields.localSaveData;
      if ( !v106 )
        goto LABEL_68;
      v107 = *p_pieces;
      if ( !*p_pieces )
        goto LABEL_68;
      if ( v103 >= v107->max_length )
        goto LABEL_69;
      pieceSaves = (unsigned int *)v106->fields.pieceSaves;
      v109 = *(WarBoardPieceData_o **)((char *)&v107->obj.klass + v105 * 4);
      v110 = (WarBoardPieceData_SaveData_o *)sub_B5D694(WarBoardPieceData_SaveData_TypeInfo);
      WarBoardPieceData_SaveData___ctor_20357988(v110, v109, 0LL);
      if ( !pieceSaves )
        goto LABEL_68;
      if ( v110 )
      {
        Instance = sub_B5D684(v110, *(_QWORD *)(*(_QWORD *)pieceSaves + 64LL));
        if ( !Instance )
        {
          v119 = sub_B5D6BC();
          sub_B5D668(v119, 0LL);
        }
      }
      if ( v103 >= pieceSaves[6] )
        goto LABEL_69;
      *(_QWORD *)&pieceSaves[v105] = v110;
      sub_B5D560(
        (BattleServantConfConponent_o *)&pieceSaves[v105],
        (System_Int32_array **)v110,
        v111,
        v112,
        v113,
        v114,
        v115,
        v116);
      ++v103;
      v105 += 2LL;
    }
    while ( (__int64)v103 < v104 );
  }
  Instance = (__int64)v126;
  if ( !v126 )
    goto LABEL_68;
  return (WarBoardPieceData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v126,
                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
}


void __fastcall WarBoardData__AddSquareInfo(
        WarBoardData_o *this,
        int32_t squareIndex,
        int32_t effectId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  WarBoardData___c__DisplayClass173_0_o *v34; // x22
  __int64 v35; // x0
  __int64 v36; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *squareIndexInfo; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v39; // x21
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0
  BattleServantConfConponent_o *p_isExecute; // x20
  System_Collections_Generic_IEnumerable_T__o *v42; // x22
  System_Collections_Generic_List_int__o *v43; // x21
  System_Int32_array **v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7

  if ( (byte_42E7792 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Find_WarBoardSquareIndexData___, squareIndex, effectId, method);
    sub_B5D5C4(&Method_System_Func_WarBoardSquareIndexData__bool___ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Func_WarBoardSquareIndexData__bool__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor__, v22, v23, v24);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass173_0__AddSquareInfo_b__0__, v28, v29, v30);
    sub_B5D5C4(&WarBoardData___c__DisplayClass173_0_TypeInfo, v31, v32, v33);
    byte_42E7792 = 1;
  }
  v34 = (WarBoardData___c__DisplayClass173_0_o *)sub_B5D694(WarBoardData___c__DisplayClass173_0_TypeInfo);
  WarBoardData___c__DisplayClass173_0___ctor(v34, 0LL);
  if ( !v34 )
    goto LABEL_10;
  v34->fields.squareIndex = squareIndex;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_10;
  squareIndexInfo = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)serverData->fields.squareIndexInfo;
  v39 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardSquareIndexData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v39,
    (Il2CppObject *)v34,
    Method_WarBoardData___c__DisplayClass173_0__AddSquareInfo_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardSquareIndexData__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                     squareIndexInfo,
                                                                     (System_Func_T__bool__o *)v39,
                                                                     (const MethodInfo_1AD7278 *)Method_BasicHelper_Find_WarBoardSquareIndexData___);
  if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
    return;
  p_isExecute = (BattleServantConfConponent_o *)&USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.isExecute;
  v42 = *(System_Collections_Generic_IEnumerable_T__o **)&USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.isExecute;
  v43 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_50870440(
    v43,
    v42,
    (const MethodInfo_30838A8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v43 )
LABEL_10:
    sub_B5D69C(v35, v36);
  if ( !System_Collections_Generic_List_int___Contains(
          v43,
          effectId,
          (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    System_Collections_Generic_List_int___Add(
      v43,
      effectId,
      (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
    v44 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                   v43,
                                   (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
    p_isExecute->klass = (BattleServantConfConponent_c *)v44;
    sub_B5D560(p_isExecute, v44, v45, v46, v47, v48, v49, v50);
  }
}


void __fastcall WarBoardData__BuffTurnProgressing(WarBoardData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  WarBoardData___c_c *v42; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__191_0; // x20
  Il2CppObject *v45; // x21
  struct WarBoardData___c_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v53; // x0
  WarBoardData___c_c *v54; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x19
  struct WarBoardData___c_StaticFields *v56; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__191_1; // x20
  Il2CppObject *v58; // x21
  struct WarBoardData___c_StaticFields *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x0
  WarBoardData___c_c *v67; // x8
  System_Collections_Generic_IEnumerable_T__o *v68; // x19
  struct WarBoardData___c_StaticFields *v69; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__191_2; // x20
  Il2CppObject *v71; // x21
  struct WarBoardData___c_StaticFields *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7

  if ( (byte_42E77A1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleBuffData___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_BattleBuffData__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BasicHelper_ForEach_BattleBuffData___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__BattleBuffData___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BattleBuffData___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Func_BattleBuffData__bool___ctor__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Func_WarBoardPieceData__BattleBuffData___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Func_WarBoardPieceData__BattleBuffData__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&System_Func_BattleBuffData__bool__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_WarBoardData___c__BuffTurnProgressing_b__191_0__, v29, v30, v31);
    sub_B5D5C4(&Method_WarBoardData___c__BuffTurnProgressing_b__191_1__, v32, v33, v34);
    sub_B5D5C4(&Method_WarBoardData___c__BuffTurnProgressing_b__191_2__, v35, v36, v37);
    sub_B5D5C4(&WarBoardData___c_TypeInfo, v38, v39, v40);
    byte_42E77A1 = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v42 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v42 = WarBoardData___c_TypeInfo;
  }
  static_fields = v42->static_fields;
  _9__191_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__191_0;
  if ( !_9__191_0 )
  {
    if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v45 = (Il2CppObject *)static_fields->__9;
    _9__191_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_WarBoardPieceData__BattleBuffData__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__191_0,
      v45,
      Method_WarBoardData___c__BuffTurnProgressing_b__191_0__,
      (const MethodInfo_2C3041C *)Method_System_Func_WarBoardPieceData__BattleBuffData___ctor__);
    v46 = WarBoardData___c_TypeInfo->static_fields;
    v46->__9__191_0 = (struct System_Func_WarBoardPieceData__BattleBuffData__o *)_9__191_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v46->__9__191_0,
      (System_Int32_array **)_9__191_0,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
  }
  v53 = System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
          pieces,
          (System_Func_TSource__TResult__o *)_9__191_0,
          (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__BattleBuffData___);
  v54 = WarBoardData___c_TypeInfo;
  v55 = (System_Collections_Generic_IEnumerable_TSource__o *)v53;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v54 = WarBoardData___c_TypeInfo;
  }
  v56 = v54->static_fields;
  _9__191_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v56->__9__191_1;
  if ( !_9__191_1 )
  {
    if ( (BYTE3(v54->vtable._0_Equals.methodPtr) & 4) != 0 && !v54->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v54);
      v56 = WarBoardData___c_TypeInfo->static_fields;
    }
    v58 = (Il2CppObject *)v56->__9;
    _9__191_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleBuffData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__191_1,
      v58,
      Method_WarBoardData___c__BuffTurnProgressing_b__191_1__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleBuffData__bool___ctor__);
    v59 = WarBoardData___c_TypeInfo->static_fields;
    v59->__9__191_1 = (struct System_Func_BattleBuffData__bool__o *)_9__191_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v59->__9__191_1,
      (System_Int32_array **)_9__191_1,
      v60,
      v61,
      v62,
      v63,
      v64,
      v65);
  }
  v66 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v55,
          (System_Func_TSource__bool__o *)_9__191_1,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattleBuffData___);
  v67 = WarBoardData___c_TypeInfo;
  v68 = (System_Collections_Generic_IEnumerable_T__o *)v66;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v67 = WarBoardData___c_TypeInfo;
  }
  v69 = v67->static_fields;
  _9__191_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v69->__9__191_2;
  if ( !_9__191_2 )
  {
    if ( (BYTE3(v67->vtable._0_Equals.methodPtr) & 4) != 0 && !v67->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v67);
      v69 = WarBoardData___c_TypeInfo->static_fields;
    }
    v71 = (Il2CppObject *)v69->__9;
    _9__191_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleBuffData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__191_2,
      v71,
      Method_WarBoardData___c__BuffTurnProgressing_b__191_2__,
      (const MethodInfo_258B320 *)Method_System_Action_BattleBuffData___ctor__);
    v72 = WarBoardData___c_TypeInfo->static_fields;
    v72->__9__191_2 = (struct System_Action_BattleBuffData__o *)_9__191_2;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v72->__9__191_2,
      (System_Int32_array **)_9__191_2,
      v73,
      v74,
      v75,
      v76,
      v77,
      v78);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v68,
    (System_Action_T__o *)_9__191_2,
    (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_BattleBuffData___);
}


void __fastcall WarBoardData__CheckItem(
        WarBoardData_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_List_WarBoardTaskBase__o *v4; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 AliveServantPieces; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  int v18; // w8
  __int64 v19; // x21
  const MethodInfo_2A2FE60 **v20; // x26
  unsigned int v21; // w27
  WarBoardPieceData_o *v22; // x22
  __int64 v23; // x23
  WarBoardManager_o *v24; // x24
  const MethodInfo_234ED3C *v25; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *CameraPerformanceTask; // x24
  const MethodInfo_2A2FE60 **v27; // x19
  WebViewManager_o *Instance; // x25
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x26
  __int64 v36; // x0
  __int64 v37; // x0
  WarBoardData_o *v38; // [xsp+8h] [xbp-68h]
  System_Nullable_Vector3__o v39; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_float__o v40; // 0:x3.8
  System_Nullable_Vector3__o v41; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = taskList;
  if ( (byte_42E7758 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, (_DWORD)taskList, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Nullable_Vector3___ctor__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&WarBoardTaskBase___TypeInfo, v12, v13, v14);
    byte_42E7758 = 1;
  }
  AliveServantPieces = (__int64)WarBoardData__GetAliveServantPieces(this, (const MethodInfo *)taskList);
  if ( !AliveServantPieces )
LABEL_24:
    sub_B5D69C(AliveServantPieces, v16);
  v18 = *(_DWORD *)(AliveServantPieces + 24);
  v19 = AliveServantPieces;
  if ( v18 >= 1 )
  {
    v20 = (const MethodInfo_2A2FE60 **)&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__;
    v21 = 0;
    v38 = this;
    while ( v21 < v18 )
    {
      v22 = *(WarBoardPieceData_o **)(v19 + 8LL * (int)v21 + 32);
      if ( !v22 )
        goto LABEL_24;
      AliveServantPieces = (__int64)WarBoardData__GetItem(this, v22->fields._nowSquareIndex_k__BackingField, v17);
      if ( AliveServantPieces )
      {
        v23 = AliveServantPieces;
        AliveServantPieces = WarBoardItemData__get_Acquired((WarBoardItemData_o *)AliveServantPieces, 0LL);
        if ( (AliveServantPieces & 1) == 0 )
        {
          AliveServantPieces = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance(*v20);
          if ( !*(_QWORD *)(v23 + 56) )
            goto LABEL_24;
          v24 = (WarBoardManager_o *)AliveServantPieces;
          AliveServantPieces = (__int64)UnityEngine_Component__get_transform(
                                          *(UnityEngine_Component_o **)(v23 + 56),
                                          0LL);
          if ( !AliveServantPieces )
            goto LABEL_24;
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)AliveServantPieces, 0LL);
          *(_QWORD *)&v41.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
          *(_QWORD *)&v41.fields.value.fields.x = &v39;
          *(_QWORD *)&v39.fields.value.fields.x = 0LL;
          *(_QWORD *)&v39.fields.value.fields.z = 0LL;
          System_Nullable_Vector3____ctor(v41, localPosition, v25);
          if ( !v24 )
            goto LABEL_24;
          v40 = 0LL;
          CameraPerformanceTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardManager__GetCameraPerformanceTask(
                                                                                           v24,
                                                                                           v39,
                                                                                           v40,
                                                                                           1,
                                                                                           0,
                                                                                           1,
                                                                                           0LL);
          if ( v4 )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v4,
              CameraPerformanceTask,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
          }
          else
          {
            v27 = v20;
            Instance = SingletonMonoBehaviour_WebViewManager___get_Instance(*v20);
            AliveServantPieces = sub_B5D5DC(WarBoardTaskBase___TypeInfo, 1LL);
            if ( !AliveServantPieces )
              goto LABEL_24;
            v35 = AliveServantPieces;
            if ( CameraPerformanceTask )
            {
              AliveServantPieces = sub_B5D684(CameraPerformanceTask, *(_QWORD *)(*(_QWORD *)AliveServantPieces + 64LL));
              if ( !AliveServantPieces )
              {
                v37 = sub_B5D6BC();
                sub_B5D668(v37, 0LL);
              }
            }
            if ( !*(_DWORD *)(v35 + 24) )
              break;
            *(_QWORD *)(v35 + 32) = CameraPerformanceTask;
            sub_B5D560(
              (BattleServantConfConponent_o *)(v35 + 32),
              (System_Int32_array **)CameraPerformanceTask,
              v29,
              v30,
              v31,
              v32,
              v33,
              v34);
            if ( !Instance )
              goto LABEL_24;
            WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v35, 0LL);
            v20 = v27;
            v4 = 0LL;
            this = v38;
          }
          AliveServantPieces = WarBoardItemData__Get((WarBoardItemData_o *)v23, v22, v4, 0, 0LL);
        }
      }
      v18 = *(_DWORD *)(v19 + 24);
      if ( (int)++v21 >= v18 )
        return;
    }
    v36 = sub_B5D6C8(AliveServantPieces);
    sub_B5D668(v36, 0LL);
  }
}


bool __fastcall WarBoardData__CheckWinCond(WarBoardData_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  void *Master_WarQuestSelectionMaster; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x3
  bool result; // w0
  int32_t maxForceId_k__BackingField; // w9
  int32_t maxGroupId_k__BackingField; // w8
  int v29; // w24
  int v30; // w23
  int32_t i; // w20
  int32_t v32; // w21
  int v33; // w8
  void *v34; // x22
  unsigned int v35; // w25
  struct System_Collections_Generic_List_int__o *masterExistsForce; // x19
  WarBoardData___c_c *v37; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__98_0; // x20
  Il2CppObject *v40; // x21
  struct WarBoardData___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v48; // x0
  int32_t condGroup; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42E775D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_int____68844936, v8, v9, v10);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_WarBoardData___c__CheckWinCond_b__98_0__, v17, v18, v19);
    sub_B5D5C4(&WarBoardData___c_TypeInfo, v20, v21, v22);
    byte_42E775D = 1;
  }
  condGroup = 0;
  if ( (this->fields.winCondId & 0x80000000) == 0 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    condGroup = -1;
    if ( Master_WarQuestSelectionMaster )
    {
      if ( !WarBoardCommonReleaseMaster__IsOpen_23169312(
              (WarBoardCommonReleaseMaster_o *)Master_WarQuestSelectionMaster,
              this->fields.winCondId,
              &condGroup,
              v25) )
        return 0;
      result = 1;
      this->fields.winCondGroup = condGroup;
      return result;
    }
LABEL_41:
    sub_B5D69C(Master_WarQuestSelectionMaster, v24);
  }
  maxForceId_k__BackingField = this->fields._maxForceId_k__BackingField;
  if ( maxForceId_k__BackingField < 1 )
  {
    v30 = 0;
    v29 = 0;
    goto LABEL_31;
  }
  maxGroupId_k__BackingField = this->fields._maxGroupId_k__BackingField;
  v29 = 0;
  v30 = 0;
  for ( i = 1; i <= maxForceId_k__BackingField; ++i )
  {
    if ( (maxGroupId_k__BackingField & 0x80000000) != 0 )
      continue;
    v32 = 0;
    do
    {
      Master_WarQuestSelectionMaster = WarBoardData__GetPieces_23174640(this, i, v32, v3);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_41;
      v33 = *((_DWORD *)Master_WarQuestSelectionMaster + 6);
      v34 = Master_WarQuestSelectionMaster;
      if ( v33 >= 1 )
      {
        v35 = 0;
        do
        {
          if ( v35 >= v33 )
          {
            v48 = sub_B5D6C8(Master_WarQuestSelectionMaster);
            sub_B5D668(v48, 0LL);
          }
          Master_WarQuestSelectionMaster = (void *)*((_QWORD *)v34 + (int)v35 + 4);
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_41;
          if ( !*((_BYTE *)Master_WarQuestSelectionMaster + 60) && !*((_BYTE *)Master_WarQuestSelectionMaster + 120) )
          {
            Master_WarQuestSelectionMaster = (void *)WarBoardPieceData__get_isMaster(
                                                       (WarBoardPieceData_o *)Master_WarQuestSelectionMaster,
                                                       0LL);
            if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
              ++v29;
            else
              ++v30;
          }
          v33 = *((_DWORD *)v34 + 6);
        }
        while ( (int)++v35 < v33 );
      }
      maxGroupId_k__BackingField = this->fields._maxGroupId_k__BackingField;
      ++v32;
    }
    while ( v32 <= maxGroupId_k__BackingField );
    maxForceId_k__BackingField = this->fields._maxForceId_k__BackingField;
  }
LABEL_31:
  masterExistsForce = this->fields.masterExistsForce;
  v37 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v37 = WarBoardData___c_TypeInfo;
  }
  static_fields = v37->static_fields;
  _9__98_0 = static_fields->__9__98_0;
  if ( !_9__98_0 )
  {
    if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v40 = (Il2CppObject *)static_fields->__9;
    _9__98_0 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__98_0,
      v40,
      Method_WarBoardData___c__CheckWinCond_b__98_0__,
      (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
    v41 = WarBoardData___c_TypeInfo->static_fields;
    v41->__9__98_0 = _9__98_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v41->__9__98_0,
      (System_Int32_array **)_9__98_0,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
  }
  return (v29 == 0) & (System_Linq_Enumerable__Count_int__30049212(
                         (System_Collections_Generic_IEnumerable_TSource__o *)masterExistsForce,
                         (System_Func_TSource__bool__o *)_9__98_0,
                         (const MethodInfo_1CA83BC *)Method_System_Linq_Enumerable_Count_int____68844936) > 0) | (v30 == 0);
}


void __fastcall WarBoardData__ClearLastBattlePieceUniqueIndexes(WarBoardData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_UInt32_array *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7795 & 1) == 0 )
  {
    sub_B5D5C4(&uint___TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7795 = 1;
  }
  v5 = (struct System_UInt32_array *)sub_B5D5DC(uint___TypeInfo, 0LL);
  this->fields.latestBattlePieceUniqueIndexes = v5;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.latestBattlePieceUniqueIndexes,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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
    sub_B5D69C(this, a);
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

  if ( (byte_42E77A9 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardData_BattleParticipantInfo_TypeInfo, (_DWORD)attackPieceData, (_DWORD)targetPieceData, method);
    byte_42E77A9 = 1;
  }
  v6 = (WarBoardData_BattleParticipantInfo_o *)sub_B5D694(WarBoardData_BattleParticipantInfo_TypeInfo);
  WarBoardData_BattleParticipantInfo___ctor(v6, attackPieceData, targetPieceData, 0LL);
  return v6;
}


void __fastcall WarBoardData__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WarBoardData_c *v7; // x0
  System_String_o *AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY; // x19

  if ( (byte_42E7755 & 1) == 0 )
  {
    sub_B5D5C4(&EncryptedPlayerPrefs_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&WarBoardData_TypeInfo, v4, v5, v6);
    byte_42E7755 = 1;
  }
  v7 = WarBoardData_TypeInfo;
  if ( (BYTE3(WarBoardData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    v7 = WarBoardData_TypeInfo;
  }
  AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY = v7->static_fields->AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY;
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  EncryptedPlayerPrefs__SetInt(AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY, 1, 0LL);
}


WarBoardWaitTime_o *__fastcall WarBoardData__CreateEventBossUIDataTask(WarBoardData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  __int64 v13; // x19
  __int64 v14; // x0
  __int64 v15; // x1
  System_Delegate_o *v16; // x21
  WarBoardData___c_c *v17; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  WarBoardTaskBase_TaskCallback_o *_9__152_0; // x22
  Il2CppObject *v20; // x23
  struct WarBoardData___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  WarBoardData_o *v36; // x0
  int32_t v37; // w1
  const MethodInfo *v38; // x2

  if ( (byte_42E7785 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardTaskBase_TaskCallback_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_WarBoardData___c__CreateEventBossUIDataTask_b__152_0__, v4, v5, v6);
    sub_B5D5C4(&WarBoardData___c_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&WarBoardWaitTime_TypeInfo, v10, v11, v12);
    byte_42E7785 = 1;
  }
  v13 = sub_B5D694(WarBoardWaitTime_TypeInfo);
  WarBoardWaitTime___ctor((WarBoardWaitTime_o *)v13, 0.0, 0LL);
  if ( !v13 )
    sub_B5D69C(v14, v15);
  v16 = *(System_Delegate_o **)(v13 + 40);
  v17 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v17 = WarBoardData___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__152_0 = static_fields->__9__152_0;
  if ( !_9__152_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__152_0 = (WarBoardTaskBase_TaskCallback_o *)sub_B5D694(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__152_0,
      v20,
      Method_WarBoardData___c__CreateEventBossUIDataTask_b__152_0__,
      0LL);
    v21 = WarBoardData___c_TypeInfo->static_fields;
    v21->__9__152_0 = _9__152_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v21->__9__152_0,
      (System_Int32_array **)_9__152_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  v28 = (System_Int32_array **)System_Delegate__Combine(v16, (System_Delegate_o *)_9__152_0, 0LL);
  if ( v28 && *v28 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    v36 = (WarBoardData_o *)sub_B5D990(v28);
    return (WarBoardWaitTime_o *)WarBoardData__GetStageBossData(v36, v37, v38);
  }
  else
  {
    *(_QWORD *)(v13 + 40) = v28;
    sub_B5D560((BattleServantConfConponent_o *)(v13 + 40), v28, v29, v30, v31, v32, v33, v34);
    return (WarBoardWaitTime_o *)v13;
  }
}


void __fastcall WarBoardData__DelSquareInfo(
        WarBoardData_o *this,
        int32_t squareIndex,
        int32_t effectId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  WarBoardData___c__DisplayClass174_0_o *v34; // x22
  __int64 v35; // x0
  __int64 v36; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *squareIndexInfo; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v39; // x21
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0
  BattleServantConfConponent_o *p_isExecute; // x20
  System_Collections_Generic_IEnumerable_T__o *v42; // x22
  System_Collections_Generic_List_int__o *v43; // x21
  System_Int32_array **v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7

  if ( (byte_42E7793 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Find_WarBoardSquareIndexData___, squareIndex, effectId, method);
    sub_B5D5C4(&Method_System_Func_WarBoardSquareIndexData__bool___ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Func_WarBoardSquareIndexData__bool__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Remove__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor__, v22, v23, v24);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass174_0__DelSquareInfo_b__0__, v28, v29, v30);
    sub_B5D5C4(&WarBoardData___c__DisplayClass174_0_TypeInfo, v31, v32, v33);
    byte_42E7793 = 1;
  }
  v34 = (WarBoardData___c__DisplayClass174_0_o *)sub_B5D694(WarBoardData___c__DisplayClass174_0_TypeInfo);
  WarBoardData___c__DisplayClass174_0___ctor(v34, 0LL);
  if ( !v34 )
    goto LABEL_10;
  v34->fields.squareIndex = squareIndex;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_10;
  squareIndexInfo = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)serverData->fields.squareIndexInfo;
  v39 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardSquareIndexData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v39,
    (Il2CppObject *)v34,
    Method_WarBoardData___c__DisplayClass174_0__DelSquareInfo_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardSquareIndexData__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                     squareIndexInfo,
                                                                     (System_Func_T__bool__o *)v39,
                                                                     (const MethodInfo_1AD7278 *)Method_BasicHelper_Find_WarBoardSquareIndexData___);
  if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
    return;
  p_isExecute = (BattleServantConfConponent_o *)&USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.isExecute;
  v42 = *(System_Collections_Generic_IEnumerable_T__o **)&USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.isExecute;
  v43 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_50870440(
    v43,
    v42,
    (const MethodInfo_30838A8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v43 )
LABEL_10:
    sub_B5D69C(v35, v36);
  if ( System_Collections_Generic_List_int___Contains(
         v43,
         effectId,
         (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    System_Collections_Generic_List_int___Remove(
      v43,
      effectId,
      (const MethodInfo_3085D88 *)Method_System_Collections_Generic_List_int__Remove__);
    v44 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                   v43,
                                   (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
    p_isExecute->klass = (BattleServantConfConponent_c *)v44;
    sub_B5D560(p_isExecute, v44, v45, v46, v47, v48, v49, v50);
  }
}


void __fastcall WarBoardData__DeleteAfterContinueDeviceLocalSave(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WarBoardData_c *v7; // x0
  System_String_o *AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY; // x19

  if ( (byte_42E7756 & 1) == 0 )
  {
    sub_B5D5C4(&EncryptedPlayerPrefs_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&WarBoardData_TypeInfo, v4, v5, v6);
    byte_42E7756 = 1;
  }
  v7 = WarBoardData_TypeInfo;
  if ( (BYTE3(WarBoardData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    v7 = WarBoardData_TypeInfo;
  }
  AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY = v7->static_fields->AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY;
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  EncryptedPlayerPrefs__DeleteKey(AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY, 0LL);
}


void __fastcall WarBoardData__DeleteLocalSave(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WarBoardData_c *v7; // x0
  System_String_o *WARBOARDDATA_SAVEDATA_KEY; // x19

  if ( (byte_42E7754 & 1) == 0 )
  {
    sub_B5D5C4(&EncryptedPlayerPrefs_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&WarBoardData_TypeInfo, v4, v5, v6);
    byte_42E7754 = 1;
  }
  v7 = WarBoardData_TypeInfo;
  if ( (BYTE3(WarBoardData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    v7 = WarBoardData_TypeInfo;
  }
  WARBOARDDATA_SAVEDATA_KEY = v7->static_fields->WARBOARDDATA_SAVEDATA_KEY;
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
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
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *actionPointEntityDict; // x0
  WarBoardStageNpcEntity_o *value; // [xsp+8h] [xbp-28h] BYREF

  v4 = groupId;
  if ( (byte_42E775A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__TryGetValue__,
      forceId,
      (_BYTE)groupId,
      method);
    byte_42E775A = 1;
  }
  value = 0LL;
  actionPointEntityDict = (System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *)this->fields.actionPointEntityDict;
  if ( !actionPointEntityDict )
    sub_B5D69C(0LL, *(_QWORD *)&forceId);
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity___TryGetValue(
    actionPointEntityDict,
    (forceId << 24) | (v4 << 16),
    &value,
    (const MethodInfo_2EEA700 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__TryGetValue__);
  return (WarBoardActionPointEntity_o *)value;
}


System_Collections_Generic_List_WarBoardPieceData__o *__fastcall WarBoardData__GetAliveEnemyServantPieces(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  WarBoardData___c_c *v21; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__110_0; // x20
  Il2CppObject *v24; // x21
  struct WarBoardData___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0

  if ( (byte_42E7769 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_WarBoardPieceData___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_WarBoardPieceData__bool__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_WarBoardData___c__GetAliveEnemyServantPieces_b__110_0__, v14, v15, v16);
    sub_B5D5C4(&WarBoardData___c_TypeInfo, v17, v18, v19);
    byte_42E7769 = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v21 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v21 = WarBoardData___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__110_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__110_0;
  if ( !_9__110_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__110_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__110_0,
      v24,
      Method_WarBoardData___c__GetAliveEnemyServantPieces_b__110_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
    v25 = WarBoardData___c_TypeInfo->static_fields;
    v25->__9__110_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__110_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v25->__9__110_0,
      (System_Int32_array **)_9__110_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  v32 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)_9__110_0,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (System_Collections_Generic_List_WarBoardPieceData__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                   v32,
                                                                   (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
}


WarBoardPieceData_array *__fastcall WarBoardData__GetAlivePieces(WarBoardData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  WarBoardData___c_c *v21; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__107_0; // x20
  Il2CppObject *v24; // x21
  struct WarBoardData___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0

  if ( (byte_42E7766 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_WarBoardPieceData__bool__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_WarBoardData___c__GetAlivePieces_b__107_0__, v14, v15, v16);
    sub_B5D5C4(&WarBoardData___c_TypeInfo, v17, v18, v19);
    byte_42E7766 = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v21 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v21 = WarBoardData___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__107_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__107_0;
  if ( !_9__107_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__107_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__107_0,
      v24,
      Method_WarBoardData___c__GetAlivePieces_b__107_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
    v25 = WarBoardData___c_TypeInfo->static_fields;
    v25->__9__107_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__107_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v25->__9__107_0,
      (System_Int32_array **)_9__107_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  v32 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)_9__107_0,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v32,
                                      (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


System_Collections_Generic_List_WarBoardPieceData__o *__fastcall WarBoardData__GetAlivePlayerGroupServantPieces(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  WarBoardData___c_c *v21; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__109_0; // x20
  Il2CppObject *v24; // x21
  struct WarBoardData___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0

  if ( (byte_42E7768 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_WarBoardPieceData___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_WarBoardPieceData__bool__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_WarBoardData___c__GetAlivePlayerGroupServantPieces_b__109_0__, v14, v15, v16);
    sub_B5D5C4(&WarBoardData___c_TypeInfo, v17, v18, v19);
    byte_42E7768 = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v21 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v21 = WarBoardData___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__109_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__109_0;
  if ( !_9__109_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__109_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__109_0,
      v24,
      Method_WarBoardData___c__GetAlivePlayerGroupServantPieces_b__109_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
    v25 = WarBoardData___c_TypeInfo->static_fields;
    v25->__9__109_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__109_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v25->__9__109_0,
      (System_Int32_array **)_9__109_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  v32 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)_9__109_0,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (System_Collections_Generic_List_WarBoardPieceData__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                   v32,
                                                                   (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
}


WarBoardPieceData_array *__fastcall WarBoardData__GetAliveServantPieces(WarBoardData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  WarBoardData___c_c *v21; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__108_0; // x20
  Il2CppObject *v24; // x21
  struct WarBoardData___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0

  if ( (byte_42E7767 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_WarBoardPieceData__bool__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_WarBoardData___c__GetAliveServantPieces_b__108_0__, v14, v15, v16);
    sub_B5D5C4(&WarBoardData___c_TypeInfo, v17, v18, v19);
    byte_42E7767 = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v21 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v21 = WarBoardData___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__108_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__108_0;
  if ( !_9__108_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__108_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__108_0,
      v24,
      Method_WarBoardData___c__GetAliveServantPieces_b__108_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
    v25 = WarBoardData___c_TypeInfo->static_fields;
    v25->__9__108_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__108_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v25->__9__108_0,
      (System_Int32_array **)_9__108_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  v32 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)_9__108_0,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v32,
                                      (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
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


int32_t __fastcall WarBoardData__GetClearedTurn(WarBoardData_o *this, int32_t condId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  WarBoardData___c__DisplayClass183_0_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  struct System_Collections_Generic_List_WarBoardPrevCondData__o *listPrevCond; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v22; // x20
  peRenderTexture_ChangeLayerObject_o *v23; // x0

  if ( (byte_42E7799 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPrevCondData__Find__, condId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Predicate_WarBoardPrevCondData___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Predicate_WarBoardPrevCondData__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass183_0__GetClearedTurn_b__0__, v12, v13, v14);
    sub_B5D5C4(&WarBoardData___c__DisplayClass183_0_TypeInfo, v15, v16, v17);
    byte_42E7799 = 1;
  }
  v18 = (WarBoardData___c__DisplayClass183_0_o *)sub_B5D694(WarBoardData___c__DisplayClass183_0_TypeInfo);
  WarBoardData___c__DisplayClass183_0___ctor(v18, 0LL);
  if ( !v18
    || (v18->fields.condId = condId,
        listPrevCond = this->fields.listPrevCond,
        v22 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_WarBoardPrevCondData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v22,
          (Il2CppObject *)v18,
          Method_WarBoardData___c__DisplayClass183_0__GetClearedTurn_b__0__,
          (const MethodInfo_2B9320C *)Method_System_Predicate_WarBoardPrevCondData___ctor__),
        !listPrevCond) )
  {
    sub_B5D69C(v19, v20);
  }
  v23 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)listPrevCond,
          (System_Predicate_T__o *)v22,
          (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_WarBoardPrevCondData__Find__);
  if ( v23 )
    return HIDWORD(v23->fields.gameObject);
  else
    return -1;
}


WarBoardSquareData_o *__fastcall WarBoardData__GetCondSquare(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  WarBoardData___c__DisplayClass130_0_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_IEnumerable_TSource__o *condSquares; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v22; // x20

  if ( (byte_42E7777 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___, squareIndex, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_WarBoardSquareData__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_WarBoardSquareData__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass130_0__GetCondSquare_b__0__, v12, v13, v14);
    sub_B5D5C4(&WarBoardData___c__DisplayClass130_0_TypeInfo, v15, v16, v17);
    byte_42E7777 = 1;
  }
  v18 = (WarBoardData___c__DisplayClass130_0_o *)sub_B5D694(WarBoardData___c__DisplayClass130_0_TypeInfo);
  WarBoardData___c__DisplayClass130_0___ctor(v18, 0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  v18->fields.squareIndex = squareIndex;
  condSquares = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.condSquares;
  v22 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardSquareData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v22,
    (Il2CppObject *)v18,
    Method_WarBoardData___c__DisplayClass130_0__GetCondSquare_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardSquareData__bool___ctor__);
  return (WarBoardSquareData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                   condSquares,
                                   (System_Func_TSource__bool__o *)v22,
                                   (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
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
  System_Int32_array_array *v4; // x22
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  System_Collections_Generic_List_int__o *v33; // x21
  void *Piece_23181536; // x0
  __int64 value; // x1
  int max_length; // w8
  unsigned int v37; // w25
  System_Int32_array *v38; // x28
  unsigned __int64 v39; // x27
  WarBoardData___c__DisplayClass133_0_o *v40; // x22
  const MethodInfo *v41; // x2
  int32_t v42; // w1
  const MethodInfo *v43; // x2
  const MethodInfo *v44; // x3
  System_Collections_Generic_List_T__o *reinforcementsAppointmentSquareList; // x23
  System_Func_int__bool__o *v46; // x24
  System_Func_int__bool__o *v47; // x23
  __int64 v49; // x0
  System_Int32_array_array *v50; // [xsp+8h] [xbp-58h]

  v4 = squareIds;
  if ( (byte_42E7779 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_int___, (_DWORD)squareIds, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__0__, v24, v25, v26);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__1__, v27, v28, v29);
    sub_B5D5C4(&WarBoardData___c__DisplayClass133_0_TypeInfo, v30, v31, v32);
    byte_42E7779 = 1;
  }
  v33 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v33,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( !v4 )
    goto LABEL_27;
  max_length = v4->max_length;
  if ( max_length >= 1 )
  {
    v37 = 0;
    v50 = v4;
    while ( 1 )
    {
      if ( v37 >= max_length )
      {
LABEL_26:
        v49 = sub_B5D6C8(Piece_23181536);
        sub_B5D668(v49, 0LL);
      }
      v38 = v4->m_Items[v37];
      if ( !v38 )
        break;
      if ( (int)v38->max_length < 1 )
      {
        value = 0xFFFFFFFFLL;
        if ( !v33 )
          break;
      }
      else
      {
        v39 = 0LL;
        do
        {
          v40 = (WarBoardData___c__DisplayClass133_0_o *)sub_B5D694(WarBoardData___c__DisplayClass133_0_TypeInfo);
          WarBoardData___c__DisplayClass133_0___ctor(v40, 0LL);
          if ( v39 >= v38->max_length )
            goto LABEL_26;
          if ( !v40 )
            goto LABEL_27;
          v42 = v38->m_Items[v39 + 1];
          v40->fields.value = v42;
          Piece_23181536 = WarBoardData__GetPiece_23181536(this, v42, v41);
          if ( !Piece_23181536 )
          {
            Piece_23181536 = WarBoardData__GetUnusedTreasure(this, v40->fields.value, v43);
            if ( !Piece_23181536 )
            {
              Piece_23181536 = WarBoardData__GetWall(this, v40->fields.value, 0, v44);
              if ( !Piece_23181536 )
              {
                reinforcementsAppointmentSquareList = (System_Collections_Generic_List_T__o *)this->fields.reinforcementsAppointmentSquareList;
                v46 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
                System_Func_int__bool____ctor(
                  v46,
                  (Il2CppObject *)v40,
                  Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__0__,
                  (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
                Piece_23181536 = (void *)BasicHelper__Any_int_(
                                           reinforcementsAppointmentSquareList,
                                           (System_Func_T__bool__o *)v46,
                                           (const MethodInfo_1AD69F0 *)Method_BasicHelper_Any_int___);
                if ( ((unsigned __int8)Piece_23181536 & 1) == 0 )
                {
                  v47 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
                  System_Func_int__bool____ctor(
                    v47,
                    (Il2CppObject *)v40,
                    Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__1__,
                    (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
                  Piece_23181536 = (void *)BasicHelper__Any_int_(
                                             (System_Collections_Generic_List_T__o *)v33,
                                             (System_Func_T__bool__o *)v47,
                                             (const MethodInfo_1AD69F0 *)Method_BasicHelper_Any_int___);
                  if ( ((unsigned __int8)Piece_23181536 & 1) == 0 )
                  {
                    value = (unsigned int)v40->fields.value;
                    goto LABEL_20;
                  }
                }
              }
            }
          }
          ++v39;
        }
        while ( (__int64)v39 < (int)v38->max_length );
        value = 0xFFFFFFFFLL;
LABEL_20:
        v4 = v50;
        if ( !v33 )
          break;
      }
      System_Collections_Generic_List_int___Add(
        v33,
        value,
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      max_length = v4->max_length;
      if ( (int)++v37 >= max_length )
        goto LABEL_24;
    }
LABEL_27:
    sub_B5D69C(Piece_23181536, value);
  }
LABEL_24:
  if ( !v33 )
    goto LABEL_27;
  return System_Collections_Generic_List_int___ToArray(
           v33,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_String_o *__fastcall WarBoardData__GetEditBgmName(WarBoardData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E7782 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_BgmMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E7782 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_BgmMaster___);
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity || !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                &entity,
                                stageEntity->fields.editBgmId,
                                (const MethodInfo_23FAE6C *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.age;
LABEL_11:
    sub_B5D69C(Instance, v12);
  }
  return 0LL;
}


WarBoardPieceData_array *__fastcall WarBoardData__GetEditableServantPieces(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  WarBoardData___c_c *v21; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__120_0; // x20
  Il2CppObject *v24; // x21
  struct WarBoardData___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0

  if ( (byte_42E776F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_WarBoardPieceData__bool__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_WarBoardData___c__GetEditableServantPieces_b__120_0__, v14, v15, v16);
    sub_B5D5C4(&WarBoardData___c_TypeInfo, v17, v18, v19);
    byte_42E776F = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v21 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v21 = WarBoardData___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__120_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__120_0;
  if ( !_9__120_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__120_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__120_0,
      v24,
      Method_WarBoardData___c__GetEditableServantPieces_b__120_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
    v25 = WarBoardData___c_TypeInfo->static_fields;
    v25->__9__120_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__120_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v25->__9__120_0,
      (System_Int32_array **)_9__120_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  v32 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)_9__120_0,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v32,
                                      (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


WarBoardEffectData_o *__fastcall WarBoardData__GetEffect(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  WarBoardData___c__DisplayClass142_0_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_IEnumerable_TSource__o *effects; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v22; // x20

  if ( (byte_42E777E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardEffectData___, squareIndex, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_WarBoardEffectData__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_WarBoardEffectData__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass142_0__GetEffect_b__0__, v12, v13, v14);
    sub_B5D5C4(&WarBoardData___c__DisplayClass142_0_TypeInfo, v15, v16, v17);
    byte_42E777E = 1;
  }
  v18 = (WarBoardData___c__DisplayClass142_0_o *)sub_B5D694(WarBoardData___c__DisplayClass142_0_TypeInfo);
  WarBoardData___c__DisplayClass142_0___ctor(v18, 0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  v18->fields.squareIndex = squareIndex;
  effects = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.effects;
  v22 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardEffectData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v22,
    (Il2CppObject *)v18,
    Method_WarBoardData___c__DisplayClass142_0__GetEffect_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardEffectData__bool___ctor__);
  return (WarBoardEffectData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                   effects,
                                   (System_Func_TSource__bool__o *)v22,
                                   (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardEffectData___);
}


WarBoardEffectData_array *__fastcall WarBoardData__GetEffects(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.effects;
}


WarBoardPieceData_o *__fastcall WarBoardData__GetEventBossPiece(
        WarBoardData_o *this,
        int32_t stageBossIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  WarBoardData___c__DisplayClass105_0_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v22; // x20

  if ( (byte_42E7764 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, stageBossIndex, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_WarBoardPieceData__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass105_0__GetEventBossPiece_b__0__, v12, v13, v14);
    sub_B5D5C4(&WarBoardData___c__DisplayClass105_0_TypeInfo, v15, v16, v17);
    byte_42E7764 = 1;
  }
  v18 = (WarBoardData___c__DisplayClass105_0_o *)sub_B5D694(WarBoardData___c__DisplayClass105_0_TypeInfo);
  WarBoardData___c__DisplayClass105_0___ctor(v18, 0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  v18->fields.stageBossIndex = stageBossIndex;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v22 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v22,
    (Il2CppObject *)v18,
    Method_WarBoardData___c__DisplayClass105_0__GetEventBossPiece_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v22,
                                  (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
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
  __int64 v11; // x0

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
      {
        v11 = sub_B5D6C8(this);
        sub_B5D668(v11, 0LL);
      }
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
    sub_B5D69C(this, method);
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  int v86; // w1
  int v87; // w2
  __int64 v88; // x3
  int v89; // w1
  int v90; // w2
  __int64 v91; // x3
  int v92; // w1
  int v93; // w2
  __int64 v94; // x3
  int v95; // w1
  int v96; // w2
  __int64 v97; // x3
  int v98; // w1
  int v99; // w2
  __int64 v100; // x3
  int v101; // w1
  int v102; // w2
  __int64 v103; // x3
  int v104; // w1
  int v105; // w2
  __int64 v106; // x3
  int v107; // w1
  int v108; // w2
  __int64 v109; // x3
  WarBoardData___c__DisplayClass188_0_o *v110; // x23
  void *v111; // x0
  __int64 v112; // x1
  struct System_Collections_Generic_List_HoldReinforcementsData__o *reinforcementsSaveList; // x22
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__188_0; // x24
  Il2CppObject *v116; // x25
  struct WarBoardData___c_StaticFields *v117; // x0
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v124; // x22
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  struct System_Collections_Generic_List_HoldReinforcementsData__o *v131; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v132; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v133; // x0
  int v134; // w26
  __int64 v135; // x24
  __int64 v136; // x0
  __int64 v137; // x1
  System_String_array **v138; // x2
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  System_Int32_array **current; // x1
  HoldReinforcementsData_o **v145; // x22
  __int64 v146; // x0
  __int64 v147; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  _BOOL8 v149; // x0
  __int64 v150; // x1
  const MethodInfo *v151; // x2
  System_Int32_array *DeploySquareIds; // x0
  __int64 v153; // x1
  const MethodInfo *v154; // x3
  struct System_Int32_array *limitNums; // x9
  __int64 index_k__BackingField; // x2
  System_Int32_array *v157; // x23
  WarBoardPieceData_array *ReinfocementsPieces; // x0
  __int64 v159; // x1
  struct System_Int32_array *v160; // x8
  __int64 v161; // x9
  _BOOL4 v162; // w25
  WebViewManager_o *Instance; // x0
  __int64 v164; // x1
  _BOOL8 IsPlayerTurn; // x0
  __int64 v166; // x1
  __int64 v167; // x10
  int max_length; // w11
  int v169; // w10
  System_Collections_Generic_List_T__o *v170; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v171; // x26
  bool v172; // w0
  __int64 v173; // x1
  _BOOL8 v174; // x0
  __int64 v175; // x1
  Il2CppObject *v176; // x24
  System_Collections_Generic_List_int__o *v177; // x25
  System_Collections_Generic_List_int__o *v178; // x26
  __int64 v179; // x0
  __int64 v180; // x1
  __int64 v181; // x0
  __int64 v182; // x1
  System_Int32_array **v183; // x0
  System_String_array **v184; // x2
  System_String_array **v185; // x3
  System_Boolean_array **v186; // x4
  System_Int32_array **v187; // x5
  System_Int32_array *v188; // x6
  System_Int32_array *v189; // x7
  __int64 v190; // x0
  __int64 v191; // x1
  __int64 v192; // x0
  __int64 v193; // x1
  __int64 v194; // x8
  System_Int32_array **v195; // x0
  System_String_array **v196; // x2
  System_String_array **v197; // x3
  System_Boolean_array **v198; // x4
  System_Int32_array **v199; // x5
  System_Int32_array *v200; // x6
  System_Int32_array *v201; // x7
  WebViewManager_o *v202; // x0
  __int64 v203; // x1
  __int64 v204; // x8
  __int64 v205; // x9
  System_Collections_Generic_List_int__o *v206; // x0
  __int64 v207; // x1
  int v208; // w8
  __int64 v209; // x24
  __int64 v210; // x0
  __int64 v211; // x1
  __int64 v212; // x0
  System_String_array **v213; // x2
  System_String_array **v214; // x3
  System_Boolean_array **v215; // x4
  System_Int32_array **v216; // x5
  System_Int32_array *v217; // x6
  System_Int32_array *v218; // x7
  __int64 v219; // x0
  System_String_array **v220; // x2
  System_String_array **v221; // x3
  System_Boolean_array **v222; // x4
  System_Int32_array **v223; // x5
  System_Int32_array *v224; // x6
  System_Int32_array *v225; // x7
  __int64 v226; // x8
  __int64 v227; // x1
  WebViewManager_o *v228; // x0
  __int64 v229; // x1
  __int64 v230; // x8
  __int64 v231; // x9
  System_Collections_Generic_List_int__o *v232; // x0
  __int64 v233; // x1
  __int64 v234; // x0
  __int64 v235; // x0
  int v236; // w26
  __int64 v237; // x0
  __int64 v238; // x0
  __int64 v239; // x0
  __int64 v240; // x0
  __int64 v241; // x0
  __int64 v242; // x0
  __int64 v243; // x0
  int v244; // [xsp+14h] [xbp-CCh]
  int v245; // [xsp+1Ch] [xbp-C4h]
  _BYTE v247[36]; // [xsp+28h] [xbp-B8h] BYREF
  int v248; // [xsp+4Ch] [xbp-94h]
  System_Collections_Generic_List_Enumerator_T__o v249; // [xsp+50h] [xbp-90h] BYREF
  WarBoardStageReinforcementsEntity_o *entity; // [xsp+68h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v251; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_42E779E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_BasicHelper_Any_ReinforcementsData___,
      (_DWORD)reinforcementsDatas,
      (_DWORD)mst,
      *(_QWORD *)&targetStageReinforcementsId);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_HoldReinforcementsData___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_HoldReinforcementsData___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__Dispose__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__MoveNext__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__get_Current__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__get_Current__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Func_ReinforcementsData__bool___ctor__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Func_HoldReinforcementsData__bool___ctor__, v35, v36, v37);
    sub_B5D5C4(&System_Func_ReinforcementsData__bool__TypeInfo, v38, v39, v40);
    sub_B5D5C4(&System_Func_HoldReinforcementsData__bool__TypeInfo, v41, v42, v43);
    sub_B5D5C4(&int___TypeInfo, v44, v45, v46);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__AddRange__, v47, v48, v49);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ReinforcementsData__Add__, v50, v51, v52);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v53, v54, v55);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ReinforcementsData__GetEnumerator__, v56, v57, v58);
    sub_B5D5C4(&Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__, v59, v60, v61);
    sub_B5D5C4(&Method_System_Collections_Generic_List_HoldReinforcementsData__RemoveAll__, v62, v63, v64);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v65, v66, v67);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v68, v69, v70);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ReinforcementsData___ctor__, v71, v72, v73);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v74, v75, v76);
    sub_B5D5C4(&System_Collections_Generic_List_ReinforcementsData__TypeInfo, v77, v78, v79);
    sub_B5D5C4(&Method_System_Predicate_HoldReinforcementsData___ctor__, v80, v81, v82);
    sub_B5D5C4(&System_Predicate_HoldReinforcementsData__TypeInfo, v83, v84, v85);
    sub_B5D5C4(&ReinforcementsData_TypeInfo, v86, v87, v88);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v89, v90, v91);
    sub_B5D5C4(&Method_WarBoardData___c__GetHoldReinforcements_b__188_0__, v92, v93, v94);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass188_0__GetHoldReinforcements_b__1__, v95, v96, v97);
    sub_B5D5C4(&WarBoardData___c__DisplayClass188_0_TypeInfo, v98, v99, v100);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass188_1__GetHoldReinforcements_b__2__, v101, v102, v103);
    sub_B5D5C4(&WarBoardData___c__DisplayClass188_1_TypeInfo, v104, v105, v106);
    sub_B5D5C4(&WarBoardData___c_TypeInfo, v107, v108, v109);
    byte_42E779E = 1;
  }
  memset(&v251, 0, sizeof(v251));
  entity = 0LL;
  memset(&v249, 0, sizeof(v249));
  v248 = 0;
  v110 = (WarBoardData___c__DisplayClass188_0_o *)sub_B5D694(WarBoardData___c__DisplayClass188_0_TypeInfo);
  WarBoardData___c__DisplayClass188_0___ctor(v110, 0LL);
  if ( !v110 )
    goto LABEL_123;
  v110->fields.targetStageReinforcementsId = targetStageReinforcementsId;
  reinforcementsSaveList = this->fields.reinforcementsSaveList;
  v111 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v111 = WarBoardData___c_TypeInfo;
  }
  static_fields = (struct WarBoardData___c_StaticFields *)*((_QWORD *)v111 + 23);
  _9__188_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__188_0;
  if ( !_9__188_0 )
  {
    if ( (*((_BYTE *)v111 + 307) & 4) != 0 && !*((_DWORD *)v111 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v111);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v116 = (Il2CppObject *)static_fields->__9;
    _9__188_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_HoldReinforcementsData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__188_0,
      v116,
      Method_WarBoardData___c__GetHoldReinforcements_b__188_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_HoldReinforcementsData___ctor__);
    v117 = WarBoardData___c_TypeInfo->static_fields;
    v117->__9__188_0 = (struct System_Predicate_HoldReinforcementsData__o *)_9__188_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v117->__9__188_0,
      (System_Int32_array **)_9__188_0,
      v118,
      v119,
      v120,
      v121,
      v122,
      v123);
  }
  if ( !reinforcementsSaveList )
    goto LABEL_123;
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)reinforcementsSaveList,
    (System_Predicate_T__o *)_9__188_0,
    (const MethodInfo_3058B10 *)Method_System_Collections_Generic_List_HoldReinforcementsData__RemoveAll__);
  v124 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ReinforcementsData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v124,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ReinforcementsData___ctor__);
  *reinforcementsDatas = (System_Collections_Generic_List_ReinforcementsData__o *)v124;
  sub_B5D560(
    (BattleServantConfConponent_o *)reinforcementsDatas,
    (System_Int32_array **)v124,
    v125,
    v126,
    v127,
    v128,
    v129,
    v130);
  v131 = this->fields.reinforcementsSaveList;
  if ( (v110->fields.targetStageReinforcementsId & 0x80000000) == 0 )
  {
    v132 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_HoldReinforcementsData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v132,
      (Il2CppObject *)v110,
      Method_WarBoardData___c__DisplayClass188_0__GetHoldReinforcements_b__1__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_HoldReinforcementsData__bool___ctor__);
    v133 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v131,
             (System_Func_TSource__bool__o *)v132,
             (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_HoldReinforcementsData___);
    v111 = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
             v133,
             (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_HoldReinforcementsData___);
    v131 = (struct System_Collections_Generic_List_HoldReinforcementsData__o *)v111;
  }
  if ( !v131 )
LABEL_123:
    sub_B5D69C(v111, v112);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v247,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v131,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
  v245 = 0;
  v134 = 0;
  v251 = *(System_Collections_Generic_List_Enumerator_T__o *)v247;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v251,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__) )
  {
    v135 = sub_B5D694(WarBoardData___c__DisplayClass188_1_TypeInfo);
    WarBoardData___c__DisplayClass188_1___ctor((WarBoardData___c__DisplayClass188_1_o *)v135, 0LL);
    if ( !v135 )
      sub_B5D69C(v136, v137);
    current = (System_Int32_array **)v251.fields.current;
    *(_QWORD *)(v135 + 16) = v251.fields.current;
    v145 = (HoldReinforcementsData_o **)(v135 + 16);
    sub_B5D560((BattleServantConfConponent_o *)(v135 + 16), current, v138, v139, v140, v141, v142, v143);
    stageEntity = this->fields.stageEntity;
    if ( !stageEntity )
      sub_B5D69C(v146, v147);
    if ( !*v145 )
      sub_B5D69C(v146, v147);
    if ( !mst )
      sub_B5D69C(v146, v147);
    v149 = WarBoardStageReinforcementsMaster__TryGetEntity(
             mst,
             &entity,
             stageEntity->fields.id,
             (*v145)->fields._id_k__BackingField,
             0LL);
    if ( v149 )
    {
      if ( !entity )
        sub_B5D69C(v149, v150);
      DeploySquareIds = WarBoardData__GetDeploySquareIds(this, entity->fields.squareIds, v151);
      if ( !entity )
        sub_B5D69C(DeploySquareIds, v153);
      if ( !*v145 )
        sub_B5D69C(DeploySquareIds, v153);
      limitNums = entity->fields.limitNums;
      if ( !limitNums )
        sub_B5D69C(DeploySquareIds, v153);
      index_k__BackingField = (*v145)->fields._index_k__BackingField;
      if ( (unsigned int)index_k__BackingField >= limitNums->max_length )
      {
        v237 = sub_B5D6C8(DeploySquareIds);
        sub_B5D668(v237, 0LL);
      }
      v157 = DeploySquareIds;
      if ( limitNums->m_Items[index_k__BackingField + 1] < 1 )
      {
        v162 = 0;
      }
      else
      {
        ReinfocementsPieces = WarBoardData__GetReinfocementsPieces(this, entity->fields.id, index_k__BackingField, v154);
        if ( !ReinfocementsPieces )
          sub_B5D69C(0LL, v159);
        if ( !entity )
          sub_B5D69C(ReinfocementsPieces, v159);
        if ( !*v145 )
          sub_B5D69C(ReinfocementsPieces, v159);
        v160 = entity->fields.limitNums;
        if ( !v160 )
          sub_B5D69C(ReinfocementsPieces, v159);
        v161 = (*v145)->fields._index_k__BackingField;
        if ( (unsigned int)v161 >= v160->max_length )
        {
          v238 = sub_B5D6C8(ReinfocementsPieces);
          sub_B5D668(v238, 0LL);
        }
        v162 = v160->m_Items[v161 + 1] <= (signed int)ReinfocementsPieces->max_length;
      }
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !Instance )
        sub_B5D69C(0LL, v164);
      IsPlayerTurn = WarBoardManager__IsPlayerTurn((WarBoardManager_o *)Instance, 0LL);
      if ( !entity )
        sub_B5D69C(IsPlayerTurn, v166);
      if ( !v157 )
        sub_B5D69C(IsPlayerTurn, v166);
      if ( !*v145 )
        sub_B5D69C(IsPlayerTurn, v166);
      v167 = (*v145)->fields._index_k__BackingField;
      max_length = v157->max_length;
      if ( (int)v167 >= max_length )
      {
        v169 = 0;
      }
      else
      {
        if ( (unsigned int)v167 >= max_length )
        {
          v239 = sub_B5D6C8(IsPlayerTurn);
          sub_B5D668(v239, 0LL);
        }
        v169 = v157->m_Items[v167 + 1] >= 0 && !v162;
      }
      if ( v169 & (IsPlayerTurn ^ (entity->fields.forceId != 0)) )
      {
        v244 = v134;
        v170 = (System_Collections_Generic_List_T__o *)*reinforcementsDatas;
        v171 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_ReinforcementsData__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v171,
          (Il2CppObject *)v135,
          Method_WarBoardData___c__DisplayClass188_1__GetHoldReinforcements_b__2__,
          (const MethodInfo_2C2ECD0 *)Method_System_Func_ReinforcementsData__bool___ctor__);
        v172 = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                 v170,
                 (System_Func_T__bool__o *)v171,
                 (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_ReinforcementsData___);
        v134 = v244;
        if ( !v172 )
          goto LABEL_70;
        if ( !*reinforcementsDatas )
          sub_B5D69C(0LL, v173);
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v247,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)*reinforcementsDatas,
          (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ReinforcementsData__GetEnumerator__);
        v249 = *(System_Collections_Generic_List_Enumerator_T__o *)v247;
        while ( 1 )
        {
          v174 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                   &v249,
                   (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__MoveNext__);
          if ( !v174 )
            break;
          v176 = v249.fields.current;
          if ( !v249.fields.current )
            sub_B5D69C(v174, v175);
          if ( !*v145 )
            sub_B5D69C(v174, v175);
          if ( LODWORD(v249.fields.current[1].klass) == (*v145)->fields._id_k__BackingField )
          {
            v177 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor(
              v177,
              (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
            v178 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor(
              v178,
              (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
            if ( !v177 )
              sub_B5D69C(v179, v180);
            System_Collections_Generic_List_int___AddRange(
              v177,
              (System_Collections_Generic_IEnumerable_T__o *)v176[1].monitor,
              (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
            if ( !*v145 )
              sub_B5D69C(v181, v182);
            System_Collections_Generic_List_int___Add(
              v177,
              (*v145)->fields._index_k__BackingField,
              (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
            v183 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                            v177,
                                            (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
            v176[1].monitor = v183;
            sub_B5D560((BattleServantConfConponent_o *)&v176[1].monitor, v183, v184, v185, v186, v187, v188, v189);
            if ( !v178 )
              sub_B5D69C(v190, v191);
            System_Collections_Generic_List_int___AddRange(
              v178,
              (System_Collections_Generic_IEnumerable_T__o *)v176[2].klass,
              (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
            if ( !*v145 )
              sub_B5D69C(v192, v193);
            v194 = (*v145)->fields._index_k__BackingField;
            if ( (unsigned int)v194 >= v157->max_length )
            {
              v234 = sub_B5D6C8(v192);
              sub_B5D668(v234, 0LL);
            }
            System_Collections_Generic_List_int___Add(
              v178,
              v157->m_Items[v194 + 1],
              (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
            v195 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                            v178,
                                            (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
            v176[2].klass = (Il2CppClass *)v195;
            sub_B5D560((BattleServantConfConponent_o *)&v176[2], v195, v196, v197, v198, v199, v200, v201);
            v202 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
            if ( !v202 )
              sub_B5D69C(0LL, v203);
            v204 = *(_QWORD *)&v202[4].fields.m_CachedPtr;
            if ( !v204 )
              sub_B5D69C(v202, v203);
            if ( !*v145 )
              sub_B5D69C(v202, v203);
            v205 = (*v145)->fields._index_k__BackingField;
            if ( (unsigned int)v205 >= v157->max_length )
            {
              v235 = sub_B5D6C8(v202);
              sub_B5D668(v235, 0LL);
            }
            v206 = *(System_Collections_Generic_List_int__o **)(v204 + 232);
            if ( !v206 )
              sub_B5D69C(0LL, v203);
            System_Collections_Generic_List_int___Add(
              v206,
              v157->m_Items[v205 + 1],
              (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
            if ( !*v145 )
              sub_B5D69C(0LL, v207);
            HoldReinforcementsData__DecreaseHoldNum(*v145, 0LL);
            break;
          }
        }
        *(_DWORD *)&v247[4 * v245 + 24] = 727;
        v134 = ++v248;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v249,
          (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__Dispose__);
        if ( v134 )
        {
          v208 = v134 - 1;
          v245 = v134;
          if ( *(_DWORD *)&v247[4 * v134 + 20] != 727 )
            goto LABEL_70;
          v248 = --v134;
          v245 = v208;
        }
        else
        {
          v245 = 0;
LABEL_70:
          v209 = sub_B5D694(ReinforcementsData_TypeInfo);
          ReinforcementsData___ctor((ReinforcementsData_o *)v209, 0LL);
          if ( !entity )
            sub_B5D69C(v210, v211);
          if ( !v209 )
            sub_B5D69C(v210, v211);
          *(_DWORD *)(v209 + 16) = entity->fields.id;
          v212 = sub_B5D5DC(int___TypeInfo, 1LL);
          if ( !*v145 )
            sub_B5D69C(v212, v212);
          if ( !v212 )
            sub_B5D69C(0LL, 0LL);
          if ( !*(_DWORD *)(v212 + 24) )
          {
            v241 = sub_B5D6C8(v212);
            sub_B5D668(v241, 0LL);
          }
          *(_DWORD *)(v212 + 32) = (*v145)->fields._index_k__BackingField;
          *(_QWORD *)(v209 + 24) = v212;
          sub_B5D560(
            (BattleServantConfConponent_o *)(v209 + 24),
            (System_Int32_array **)v212,
            v213,
            v214,
            v215,
            v216,
            v217,
            v218);
          v219 = sub_B5D5DC(int___TypeInfo, 1LL);
          if ( !*v145 )
            sub_B5D69C(v219, v219);
          v226 = (*v145)->fields._index_k__BackingField;
          if ( (unsigned int)v226 >= v157->max_length )
          {
            v242 = sub_B5D6C8(v219);
            sub_B5D668(v242, 0LL);
          }
          if ( !v219 )
            sub_B5D69C(0LL, 0LL);
          if ( !*(_DWORD *)(v219 + 24) )
          {
            v240 = sub_B5D6C8(v219);
            sub_B5D668(v240, 0LL);
          }
          *(_DWORD *)(v219 + 32) = v157->m_Items[v226 + 1];
          *(_QWORD *)(v209 + 32) = v219;
          sub_B5D560(
            (BattleServantConfConponent_o *)(v209 + 32),
            (System_Int32_array **)v219,
            v220,
            v221,
            v222,
            v223,
            v224,
            v225);
          if ( !*reinforcementsDatas )
            sub_B5D69C(0LL, v227);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*reinforcementsDatas,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v209,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ReinforcementsData__Add__);
          v228 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !v228 )
            sub_B5D69C(0LL, v229);
          v230 = *(_QWORD *)&v228[4].fields.m_CachedPtr;
          if ( !v230 )
            sub_B5D69C(v228, v229);
          if ( !*v145 )
            sub_B5D69C(v228, v229);
          v231 = (*v145)->fields._index_k__BackingField;
          if ( (unsigned int)v231 >= v157->max_length )
          {
            v243 = sub_B5D6C8(v228);
            sub_B5D668(v243, 0LL);
          }
          v232 = *(System_Collections_Generic_List_int__o **)(v230 + 232);
          if ( !v232 )
            sub_B5D69C(0LL, v229);
          System_Collections_Generic_List_int___Add(
            v232,
            v157->m_Items[v231 + 1],
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          if ( !*v145 )
            sub_B5D69C(0LL, v233);
          HoldReinforcementsData__DecreaseHoldNum(*v145, 0LL);
        }
      }
    }
  }
  *(_DWORD *)&v247[4 * v245 + 24] = 755;
  v236 = ++v248;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v251,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
  if ( v236 && *(_DWORD *)&v247[4 * v236 + 20] == 755 )
    v248 = v236 - 1;
}


int32_t __fastcall WarBoardData__GetHoldReinforcementsCount(WarBoardData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WarBoardData_o *v4; // x19
  struct System_Collections_Generic_List_HoldReinforcementsData__o *reinforcementsSaveList; // x8

  v4 = this;
  if ( (byte_42E778A & 1) == 0 )
  {
    this = (WarBoardData_o *)sub_B5D5C4(
                               &Method_System_Collections_Generic_List_HoldReinforcementsData__get_Count__,
                               (_DWORD)method,
                               v2,
                               v3);
    byte_42E778A = 1;
  }
  reinforcementsSaveList = v4->fields.reinforcementsSaveList;
  if ( !reinforcementsSaveList )
    sub_B5D69C(this, method);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  WarBoardData___c__DisplayClass123_0_o *v39; // x19
  __int64 v40; // x0
  __int64 v41; // x1
  const MethodInfo *v42; // x4
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *v43; // x20
  WarBoardData___c_c *v44; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__123_0; // x21
  Il2CppObject *v47; // x22
  struct WarBoardData___c_StaticFields *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x20
  System_Func_int__bool__o *v56; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x0
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *rangeSearches; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E7772 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_WarBoardData_SquareRangeSearch__int___, start, range, ignoreStart);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_int___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Func_WarBoardData_SquareRangeSearch__int___ctor__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&System_Func_WarBoardData_SquareRangeSearch__int__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_WarBoardData___c__GetInRangeSquareIndecies_b__123_0__, v27, v28, v29);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass123_0__GetInRangeSquareIndecies_b__1__, v30, v31, v32);
    sub_B5D5C4(&WarBoardData___c__DisplayClass123_0_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&WarBoardData___c_TypeInfo, v36, v37, v38);
    byte_42E7772 = 1;
  }
  rangeSearches = 0LL;
  v39 = (WarBoardData___c__DisplayClass123_0_o *)sub_B5D694(WarBoardData___c__DisplayClass123_0_TypeInfo);
  WarBoardData___c__DisplayClass123_0___ctor(v39, 0LL);
  if ( !v39 )
    sub_B5D69C(v40, v41);
  v39->fields.start = start;
  v39->fields.ignoreStart = ignoreStart;
  rangeSearches = 0LL;
  WarBoardData__SearchInRangeSquares(this, start, range, &rangeSearches, v42);
  v43 = rangeSearches;
  if ( !rangeSearches )
    return 0LL;
  v44 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v44 = WarBoardData___c_TypeInfo;
  }
  static_fields = v44->static_fields;
  _9__123_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__123_0;
  if ( !_9__123_0 )
  {
    if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v47 = (Il2CppObject *)static_fields->__9;
    _9__123_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_WarBoardData_SquareRangeSearch__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__123_0,
      v47,
      Method_WarBoardData___c__GetInRangeSquareIndecies_b__123_0__,
      (const MethodInfo_2C2F87C *)Method_System_Func_WarBoardData_SquareRangeSearch__int___ctor__);
    v48 = WarBoardData___c_TypeInfo->static_fields;
    v48->__9__123_0 = (struct System_Func_WarBoardData_SquareRangeSearch__int__o *)_9__123_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v48->__9__123_0,
      (System_Int32_array **)_9__123_0,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
  }
  v55 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v43,
                                                               (System_Func_TSource__TResult__o *)_9__123_0,
                                                               (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_WarBoardData_SquareRangeSearch__int___);
  v56 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v56,
    (Il2CppObject *)v39,
    Method_WarBoardData___c__DisplayClass123_0__GetInRangeSquareIndecies_b__1__,
    (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
  v57 = System_Linq_Enumerable__Where_int_(
          v55,
          (System_Func_TSource__bool__o *)v56,
          (const MethodInfo_1CBBC7C *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v57,
           (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
}


// local variable allocation has failed, the output may be wrong!
WarBoardSquareData_array *__fastcall WarBoardData__GetInRangeSquares(
        WarBoardData_o *this,
        int32_t start,
        int32_t range,
        bool ignoreStart,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  WarBoardSquareData_array *result; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x20
  System_Func_int__BattleActionData_SideEffectData__o *v23; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_42E7773 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_int__WarBoardSquareData___, start, range, ignoreStart);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_WarBoardSquareData___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Func_int__WarBoardSquareData___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Func_int__WarBoardSquareData__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_WarBoardData__GetInRangeSquares_b__124_0__, v18, v19, v20);
    byte_42E7773 = 1;
  }
  result = (WarBoardSquareData_array *)WarBoardData__GetInRangeSquareIndecies(this, start, range, ignoreStart, method);
  if ( result )
  {
    v22 = (System_Collections_Generic_IEnumerable_TSource__o *)result;
    v23 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B5D694(System_Func_int__WarBoardSquareData__TypeInfo);
    System_Func_int__BattleActionData_SideEffectData____ctor(
      v23,
      (Il2CppObject *)this,
      Method_WarBoardData__GetInRangeSquares_b__124_0__,
      (const MethodInfo_2C29938 *)Method_System_Func_int__WarBoardSquareData___ctor__);
    v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                                 v22,
                                                                 (System_Func_TSource__TResult__o *)v23,
                                                                 (const MethodInfo_1CB1D40 *)Method_System_Linq_Enumerable_Select_int__WarBoardSquareData___);
    return (WarBoardSquareData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                         v24,
                                         (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_WarBoardSquareData___);
  }
  return result;
}


WarBoardItemData_o *__fastcall WarBoardData__GetItem(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  WarBoardData___c__DisplayClass135_0_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_IEnumerable_TSource__o *items; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v22; // x20

  if ( (byte_42E777A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___, squareIndex, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_WarBoardItemData__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_WarBoardItemData__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass135_0__GetItem_b__0__, v12, v13, v14);
    sub_B5D5C4(&WarBoardData___c__DisplayClass135_0_TypeInfo, v15, v16, v17);
    byte_42E777A = 1;
  }
  v18 = (WarBoardData___c__DisplayClass135_0_o *)sub_B5D694(WarBoardData___c__DisplayClass135_0_TypeInfo);
  WarBoardData___c__DisplayClass135_0___ctor(v18, 0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  v18->fields.squareIndex = squareIndex;
  items = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.items;
  v22 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardItemData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v22,
    (Il2CppObject *)v18,
    Method_WarBoardData___c__DisplayClass135_0__GetItem_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardItemData__bool___ctor__);
  return (WarBoardItemData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                 items,
                                 (System_Func_TSource__bool__o *)v22,
                                 (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___);
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
    sub_B5D69C(this, method);
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
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *npcEntityDict; // x0
  WarBoardStageNpcEntity_o *value; // [xsp+8h] [xbp-28h] BYREF

  v4 = groupId;
  if ( (byte_42E7759 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__TryGetValue__,
      forceId,
      (_BYTE)groupId,
      method);
    byte_42E7759 = 1;
  }
  value = 0LL;
  npcEntityDict = this->fields.npcEntityDict;
  if ( !npcEntityDict )
    sub_B5D69C(0LL, *(_QWORD *)&forceId);
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity___TryGetValue(
    npcEntityDict,
    (forceId << 24) | (v4 << 16),
    &value,
    (const MethodInfo_2EEA700 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__TryGetValue__);
  return value;
}


int32_t __fastcall WarBoardData__GetPartySkillId(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardStageEntity_o *stageEntity; // x8

  stageEntity = this->fields.stageEntity;
  if ( !stageEntity )
    sub_B5D69C(this, method);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  __int64 v24; // x23
  const MethodInfo *v25; // x4
  System_Int32_array **v26; // x0
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v35; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0

  if ( (byte_42E776D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, start, range, ignoreStart);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Func_WarBoardPieceData__bool__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass118_0__GetPicesForRange_b__0__, v18, v19, v20);
    sub_B5D5C4(&WarBoardData___c__DisplayClass118_0_TypeInfo, v21, v22, v23);
    byte_42E776D = 1;
  }
  v24 = sub_B5D694(WarBoardData___c__DisplayClass118_0_TypeInfo);
  WarBoardData___c__DisplayClass118_0___ctor((WarBoardData___c__DisplayClass118_0_o *)v24, 0LL);
  v26 = (System_Int32_array **)WarBoardData__GetInRangeSquareIndecies(this, start, range, ignoreStart, v25);
  if ( !v24 )
    sub_B5D69C(v26, v27);
  *(_QWORD *)(v24 + 16) = v26;
  sub_B5D560((BattleServantConfConponent_o *)(v24 + 16), v26, v28, v29, v30, v31, v32, v33);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v35 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v35,
    (Il2CppObject *)v24,
    Method_WarBoardData___c__DisplayClass118_0__GetPicesForRange_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v36 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)v35,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v36,
                                      (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


// local variable allocation has failed, the output may be wrong!
WarBoardPieceData_array *__fastcall WarBoardData__GetPicesForRangeIsAlive(
        WarBoardData_o *this,
        int32_t start,
        int32_t range,
        bool ignoreStart,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  __int64 v24; // x23
  const MethodInfo *v25; // x4
  System_Int32_array **v26; // x0
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v35; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0

  if ( (byte_42E776E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, start, range, ignoreStart);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Func_WarBoardPieceData__bool__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass119_0__GetPicesForRangeIsAlive_b__0__, v18, v19, v20);
    sub_B5D5C4(&WarBoardData___c__DisplayClass119_0_TypeInfo, v21, v22, v23);
    byte_42E776E = 1;
  }
  v24 = sub_B5D694(WarBoardData___c__DisplayClass119_0_TypeInfo);
  WarBoardData___c__DisplayClass119_0___ctor((WarBoardData___c__DisplayClass119_0_o *)v24, 0LL);
  v26 = (System_Int32_array **)WarBoardData__GetInRangeSquareIndecies(this, start, range, ignoreStart, v25);
  if ( !v24 )
    sub_B5D69C(v26, v27);
  *(_QWORD *)(v24 + 16) = v26;
  sub_B5D560((BattleServantConfConponent_o *)(v24 + 16), v26, v28, v29, v30, v31, v32, v33);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v35 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v35,
    (Il2CppObject *)v24,
    Method_WarBoardData___c__DisplayClass119_0__GetPicesForRangeIsAlive_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v36 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)v35,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v36,
                                      (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  WarBoardData___c__DisplayClass100_0_o *v26; // x24
  __int64 v27; // x0
  __int64 v28; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v30; // x20

  if ( (byte_42E775F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, forceId, groupId, *(_QWORD *)&index);
    sub_B5D5C4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Func_WarBoardPieceData__bool__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass100_0__GetPiece_b__0__, v17, v18, v19);
    sub_B5D5C4(&WarBoardData___c__DisplayClass100_0_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&WarBoardPieceData_TypeInfo, v23, v24, v25);
    byte_42E775F = 1;
  }
  v26 = (WarBoardData___c__DisplayClass100_0_o *)sub_B5D694(WarBoardData___c__DisplayClass100_0_TypeInfo);
  WarBoardData___c__DisplayClass100_0___ctor(v26, 0LL);
  if ( !v26 )
    sub_B5D69C(v27, v28);
  v26->fields.ignoreDead = ignoreDead;
  if ( (BYTE3(WarBoardPieceData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardPieceData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceData_TypeInfo);
  }
  v26->fields.uniqueId = WarBoardPieceData__GetUniqueIndex(forceId, groupId, index, 0LL);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v30 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v30,
    (Il2CppObject *)v26,
    Method_WarBoardData___c__DisplayClass100_0__GetPiece_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v30,
                                  (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


int32_t __fastcall WarBoardData__GetPieceDispPriority(
        WarBoardData_o *this,
        WarBoardPieceData_o *piece,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x1
  WarBoardPieceData_array *AlivePieces; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v29; // x20

  if ( (byte_42E7781 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_FindIndex_WarBoardPieceData___, (_DWORD)piece, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Predicate_WarBoardPieceData___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Predicate_WarBoardPieceData__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass145_0__GetPieceDispPriority_b__0__, v12, v13, v14);
    sub_B5D5C4(&WarBoardData___c__DisplayClass145_0_TypeInfo, v15, v16, v17);
    byte_42E7781 = 1;
  }
  v18 = sub_B5D694(WarBoardData___c__DisplayClass145_0_TypeInfo);
  WarBoardData___c__DisplayClass145_0___ctor((WarBoardData___c__DisplayClass145_0_o *)v18, 0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  *(_QWORD *)(v18 + 16) = piece;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)piece, v21, v22, v23, v24, v25, v26);
  AlivePieces = WarBoardData__GetAlivePieces(this, v27);
  v29 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_WarBoardPieceData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v29,
    (Il2CppObject *)v18,
    Method_WarBoardData___c__DisplayClass145_0__GetPieceDispPriority_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_WarBoardPieceData___ctor__);
  return System_Array__FindIndex_WarBoardPieceData_(
           AlivePieces,
           (System_Predicate_T__o *)v29,
           (const MethodInfo_1FC0AB0 *)Method_System_Array_FindIndex_WarBoardPieceData___);
}


int32_t __fastcall WarBoardData__GetPieceMaxDispPriotiry(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceData_array *pieces; // x8

  pieces = this->fields.pieces;
  if ( !pieces )
    sub_B5D69C(this, method);
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

  if ( (byte_42E7762 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, forceId, groupId, *(_QWORD *)&index);
    byte_42E7762 = 1;
  }
  result = WarBoardData__GetPiece(this, forceId, groupId, index, 0, v5);
  if ( result )
  {
    v11 = result;
    if ( !result->fields._isDead_k__BackingField )
      return v11;
    pieceComponent = (UnityEngine_Object_o *)result->fields.pieceComponent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(pieceComponent, 0LL, 0LL) )
      return v11;
    gameObject = (UnityEngine_Component_o *)v11->fields.pieceComponent;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_B5D69C(gameObject, v13);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  WarBoardData___c__DisplayClass99_0_o *v24; // x23
  __int64 UniqueIndex; // x0
  __int64 v26; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v28; // x20
  WarBoardData_SquareRangeSearch_o *v29; // x0

  if ( (byte_42E775E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, forceId, groupId, *(_QWORD *)&index);
    sub_B5D5C4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Func_WarBoardPieceData__bool__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass99_0__GetPiecePosition_b__0__, v15, v16, v17);
    sub_B5D5C4(&WarBoardData___c__DisplayClass99_0_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&WarBoardPieceData_TypeInfo, v21, v22, v23);
    byte_42E775E = 1;
  }
  v24 = (WarBoardData___c__DisplayClass99_0_o *)sub_B5D694(WarBoardData___c__DisplayClass99_0_TypeInfo);
  WarBoardData___c__DisplayClass99_0___ctor(v24, 0LL);
  if ( (BYTE3(WarBoardPieceData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardPieceData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceData_TypeInfo);
  }
  UniqueIndex = WarBoardPieceData__GetUniqueIndex(forceId, groupId, index, 0LL);
  if ( !v24 )
    sub_B5D69C(UniqueIndex, v26);
  v24->fields.uniqueId = UniqueIndex;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v28 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v28,
    (Il2CppObject *)v24,
    Method_WarBoardData___c__DisplayClass99_0__GetPiecePosition_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v29 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          pieces,
          (System_Func_TSource__bool__o *)v28,
          (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
  if ( v29 )
    return v29[2].fields.squareIndex;
  else
    return -1;
}


WarBoardPieceData_o *__fastcall WarBoardData__GetPiece_23181536(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  WarBoardData___c__DisplayClass101_0_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v22; // x20

  if ( (byte_42E7760 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, squareIndex, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_WarBoardPieceData__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass101_0__GetPiece_b__0__, v12, v13, v14);
    sub_B5D5C4(&WarBoardData___c__DisplayClass101_0_TypeInfo, v15, v16, v17);
    byte_42E7760 = 1;
  }
  v18 = (WarBoardData___c__DisplayClass101_0_o *)sub_B5D694(WarBoardData___c__DisplayClass101_0_TypeInfo);
  WarBoardData___c__DisplayClass101_0___ctor(v18, 0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  v18->fields.squareIndex = squareIndex;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v22 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v22,
    (Il2CppObject *)v18,
    Method_WarBoardData___c__DisplayClass101_0__GetPiece_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v22,
                                  (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


WarBoardPieceData_o *__fastcall WarBoardData__GetPiece_23222488(
        WarBoardData_o *this,
        uint32_t uniqueIndex,
        bool ignoreDead,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  WarBoardData___c__DisplayClass102_0_o *v19; // x22
  __int64 v20; // x0
  __int64 v21; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v23; // x20

  if ( (byte_42E7761 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, uniqueIndex, ignoreDead, method);
    sub_B5D5C4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Func_WarBoardPieceData__bool__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass102_0__GetPiece_b__0__, v13, v14, v15);
    sub_B5D5C4(&WarBoardData___c__DisplayClass102_0_TypeInfo, v16, v17, v18);
    byte_42E7761 = 1;
  }
  v19 = (WarBoardData___c__DisplayClass102_0_o *)sub_B5D694(WarBoardData___c__DisplayClass102_0_TypeInfo);
  WarBoardData___c__DisplayClass102_0___ctor(v19, 0LL);
  if ( !v19 )
    sub_B5D69C(v20, v21);
  v19->fields.uniqueIndex = uniqueIndex;
  v19->fields.ignoreDead = ignoreDead;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v23 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v23,
    (Il2CppObject *)v19,
    Method_WarBoardData___c__DisplayClass102_0__GetPiece_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v23,
                                  (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


WarBoardPieceData_array *__fastcall WarBoardData__GetPieces(
        WarBoardData_o *this,
        int32_t forceId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  WarBoardData___c__DisplayClass116_0_o *v21; // x21
  __int64 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v25; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0

  if ( (byte_42E776B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, forceId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Func_WarBoardPieceData__bool__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass116_0__GetPieces_b__0__, v15, v16, v17);
    sub_B5D5C4(&WarBoardData___c__DisplayClass116_0_TypeInfo, v18, v19, v20);
    byte_42E776B = 1;
  }
  v21 = (WarBoardData___c__DisplayClass116_0_o *)sub_B5D694(WarBoardData___c__DisplayClass116_0_TypeInfo);
  WarBoardData___c__DisplayClass116_0___ctor(v21, 0LL);
  if ( !v21 )
    sub_B5D69C(v22, v23);
  v21->fields.forceIdOnly = forceId << 24;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v25 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v25,
    (Il2CppObject *)v21,
    Method_WarBoardData___c__DisplayClass116_0__GetPieces_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v26 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)v25,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v26,
                                      (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


WarBoardPieceData_array *__fastcall WarBoardData__GetPieces_23174640(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  unsigned __int8 v4; // w19
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  WarBoardData___c__DisplayClass117_0_o *v22; // x22
  __int64 v23; // x0
  __int64 v24; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v26; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0

  v4 = groupId;
  if ( (byte_42E776C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, forceId, (_BYTE)groupId, method);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Func_WarBoardPieceData__bool__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass117_0__GetPieces_b__0__, v16, v17, v18);
    sub_B5D5C4(&WarBoardData___c__DisplayClass117_0_TypeInfo, v19, v20, v21);
    byte_42E776C = 1;
  }
  v22 = (WarBoardData___c__DisplayClass117_0_o *)sub_B5D694(WarBoardData___c__DisplayClass117_0_TypeInfo);
  WarBoardData___c__DisplayClass117_0___ctor(v22, 0LL);
  if ( !v22 )
    sub_B5D69C(v23, v24);
  v22->fields.forceAndGroup = (forceId << 24) | (v4 << 16);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v26 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v26,
    (Il2CppObject *)v22,
    Method_WarBoardData___c__DisplayClass117_0__GetPieces_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v27 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)v26,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v27,
                                      (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


System_String_o *__fastcall WarBoardData__GetPlayBgmName(WarBoardData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E7783 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_BgmMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E7783 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_BgmMaster___);
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity || !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                &entity,
                                stageEntity->fields.playBgmId,
                                (const MethodInfo_23FAE6C *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.age;
LABEL_11:
    sub_B5D69C(Instance, v12);
  }
  return 0LL;
}


System_Int32_array *__fastcall WarBoardData__GetPlayReinforcements(WarBoardData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Collections_Generic_List_int__o *playedStageReinforcementsList; // x0

  if ( (byte_42E779C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, (_DWORD)method, v2, v3);
    byte_42E779C = 1;
  }
  playedStageReinforcementsList = this->fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList )
    sub_B5D69C(0LL, method);
  return System_Collections_Generic_List_int___ToArray(
           playedStageReinforcementsList,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


WarBoardEventData_o *__fastcall WarBoardData__GetPlayedEventData(
        WarBoardData_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  WarBoardData___c__DisplayClass164_0_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  struct System_Collections_Generic_List_WarBoardEventData__o *listEvent; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v22; // x20

  if ( (byte_42E778C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardEventData__Find__, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Predicate_WarBoardEventData___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Predicate_WarBoardEventData__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass164_0__GetPlayedEventData_b__0__, v12, v13, v14);
    sub_B5D5C4(&WarBoardData___c__DisplayClass164_0_TypeInfo, v15, v16, v17);
    byte_42E778C = 1;
  }
  v18 = (WarBoardData___c__DisplayClass164_0_o *)sub_B5D694(WarBoardData___c__DisplayClass164_0_TypeInfo);
  WarBoardData___c__DisplayClass164_0___ctor(v18, 0LL);
  if ( !v18
    || (v18->fields.eventId = eventId,
        listEvent = this->fields.listEvent,
        v22 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_WarBoardEventData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v22,
          (Il2CppObject *)v18,
          Method_WarBoardData___c__DisplayClass164_0__GetPlayedEventData_b__0__,
          (const MethodInfo_2B9320C *)Method_System_Predicate_WarBoardEventData___ctor__),
        !listEvent) )
  {
    sub_B5D69C(v19, v20);
  }
  return (WarBoardEventData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)listEvent,
                                  (System_Predicate_T__o *)v22,
                                  (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_WarBoardEventData__Find__);
}


WarBoardPieceData_o *__fastcall WarBoardData__GetPlayerMasterPiece(WarBoardData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  WarBoardData___c_c *v18; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__104_0; // x20
  Il2CppObject *v21; // x21
  struct WarBoardData___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42E7763 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_WarBoardPieceData__bool__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_WarBoardData___c__GetPlayerMasterPiece_b__104_0__, v11, v12, v13);
    sub_B5D5C4(&WarBoardData___c_TypeInfo, v14, v15, v16);
    byte_42E7763 = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v18 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v18 = WarBoardData___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__104_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__104_0;
  if ( !_9__104_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__104_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__104_0,
      v21,
      Method_WarBoardData___c__GetPlayerMasterPiece_b__104_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
    v22 = WarBoardData___c_TypeInfo->static_fields;
    v22->__9__104_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__104_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v22->__9__104_0,
      (System_Int32_array **)_9__104_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                  pieces,
                                  (System_Func_TSource__bool__o *)_9__104_0,
                                  (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


WarBoardPieceData_array *__fastcall WarBoardData__GetPlayerPieces(WarBoardData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  WarBoardData___c_c *v21; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__121_0; // x20
  Il2CppObject *v24; // x21
  struct WarBoardData___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0

  if ( (byte_42E7770 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_WarBoardPieceData__bool__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_WarBoardData___c__GetPlayerPieces_b__121_0__, v14, v15, v16);
    sub_B5D5C4(&WarBoardData___c_TypeInfo, v17, v18, v19);
    byte_42E7770 = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v21 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v21 = WarBoardData___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__121_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__121_0;
  if ( !_9__121_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__121_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__121_0,
      v24,
      Method_WarBoardData___c__GetPlayerPieces_b__121_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
    v25 = WarBoardData___c_TypeInfo->static_fields;
    v25->__9__121_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__121_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v25->__9__121_0,
      (System_Int32_array **)_9__121_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  v32 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)_9__121_0,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v32,
                                      (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


System_Int32_array *__fastcall WarBoardData__GetPrevCondIds(
        WarBoardData_o *this,
        System_Int32_array *commonReleaseIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_Collections_Generic_List_int__o *v26; // x20
  System_Collections_Generic_List_int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x2
  __int64 v30; // x8
  WarBoardCommonReleaseMaster_o *v31; // x21
  unsigned __int64 v32; // x23
  int size; // w8
  System_Collections_Generic_List_int__o *v34; // x22
  unsigned int v35; // w25
  __int64 v36; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  __int64 v39; // x0

  if ( (byte_42E7797 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___,
      (_DWORD)commonReleaseIds,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Distinct_int___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_int___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v23, v24, v25);
    byte_42E7797 = 1;
  }
  v26 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v26,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Collections_Generic_List_int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  if ( !commonReleaseIds )
    goto LABEL_23;
  v30 = *(_QWORD *)&commonReleaseIds->max_length;
  if ( (int)v30 >= 1 )
  {
    v31 = (WarBoardCommonReleaseMaster_o *)Master_WarQuestSelectionMaster;
    v32 = 0LL;
    while ( 1 )
    {
      if ( v32 >= (unsigned int)v30 )
        goto LABEL_24;
      if ( !v31 )
        goto LABEL_23;
      Master_WarQuestSelectionMaster = (System_Collections_Generic_List_int__o *)WarBoardCommonReleaseMaster__GetList(
                                                                                   v31,
                                                                                   commonReleaseIds->m_Items[v32 + 1],
                                                                                   v29);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_23;
      size = Master_WarQuestSelectionMaster->fields._size;
      v34 = Master_WarQuestSelectionMaster;
      if ( size >= 1 )
        break;
LABEL_20:
      LODWORD(v30) = commonReleaseIds->max_length;
      if ( (__int64)++v32 >= (int)v30 )
        goto LABEL_21;
    }
    v35 = 0;
    while ( v35 < size )
    {
      v36 = *((_QWORD *)&v34->fields._syncRoot + (int)v35);
      if ( !v36 )
        goto LABEL_23;
      if ( (unsigned int)(*(_DWORD *)(v36 + 28) - 7) <= 1 )
      {
        if ( !v26 )
          goto LABEL_23;
        System_Collections_Generic_List_int___Add(
          v26,
          *(_DWORD *)(v36 + 40),
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      }
      size = v34->fields._size;
      if ( (int)++v35 >= size )
        goto LABEL_20;
    }
LABEL_24:
    v39 = sub_B5D6C8(Master_WarQuestSelectionMaster);
    sub_B5D668(v39, 0LL);
  }
LABEL_21:
  v37 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v26,
          (const MethodInfo_1CA8DAC *)Method_System_Linq_Enumerable_Distinct_int___);
  Master_WarQuestSelectionMaster = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                                               v37,
                                                                               (const MethodInfo_1CBA56C *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_23:
    sub_B5D69C(Master_WarQuestSelectionMaster, v28);
  return System_Collections_Generic_List_int___ToArray(
           Master_WarQuestSelectionMaster,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
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


WarBoardPieceData_array *__fastcall WarBoardData__GetReinfocementsPieces(
        WarBoardData_o *this,
        int32_t stageReinfoId,
        int32_t reinfoIndex,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x21
  const MethodInfo *v17; // x1
  WarBoardPieceData_array *AlivePieces; // x0
  WarBoardPieceData_o *v19; // x1
  int max_length; // w8
  WarBoardPieceData_array *v21; // x22
  unsigned int v22; // w23
  __int64 v24; // x0

  if ( (byte_42E7771 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, stageReinfoId, reinfoIndex, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v13, v14, v15);
    byte_42E7771 = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  AlivePieces = WarBoardData__GetAlivePieces(this, v17);
  if ( !AlivePieces )
    goto LABEL_15;
  max_length = AlivePieces->max_length;
  v21 = AlivePieces;
  if ( max_length >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      if ( v22 >= max_length )
      {
        v24 = sub_B5D6C8(AlivePieces);
        sub_B5D668(v24, 0LL);
      }
      v19 = v21->m_Items[v22];
      if ( !v19 )
        break;
      if ( v19->fields._StageReinfoId_k__BackingField == stageReinfoId
        && v19->fields._ReinfoIndex_k__BackingField == reinfoIndex )
      {
        if ( !v16 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v16,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
      }
      max_length = v21->max_length;
      if ( (int)++v22 >= max_length )
        goto LABEL_13;
    }
LABEL_15:
    sub_B5D69C(AlivePieces, v19);
  }
LABEL_13:
  if ( !v16 )
    goto LABEL_15;
  return (WarBoardPieceData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v16,
                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardData__GetReinforcements(
        WarBoardData_o *this,
        System_Collections_Generic_List_ReinforcementsData__o **reinfoDatas,
        WarBoardStageReinforcementsMaster_o *mst,
        int32_t targetStageReinforcementsId,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  WarBoardData___c__DisplayClass189_0_o *v59; // x27
  WarBoardStageReinforcementsEntity_o *ReinfocementsPieces; // x0
  __int64 v61; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  WarBoardData___c__DisplayClass189_0_Fields *p_fields; // x24
  const MethodInfo *v64; // x2
  System_Int32_array *DeploySquareIds; // x24
  __int64 v66; // x25
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  __int64 v73; // x26
  const MethodInfo *v74; // x3
  __int64 v75; // x8
  int32_t v76; // w2
  struct System_Int32_array *reinforcementsIds; // x8
  struct System_Int32_array *limitNums; // x8
  WarBoardStageReinforcementsEntity_o *v79; // x8
  struct System_Int32_array *v80; // x9
  __int64 v81; // x10
  _BOOL4 v82; // w23
  _BOOL4 IsOnce; // w27
  const MethodInfo *v84; // x1
  __int64 v85; // x21
  System_Func_int__bool__o *v86; // x22
  System_Int32_array *v87; // x28
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  _BOOL4 v94; // w28
  System_Collections_Generic_List_T__o *v95; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v96; // x21
  const MethodInfo *v97; // x3
  __int64 v98; // x8
  __int64 v99; // x9
  __int64 v100; // x8
  WarBoardStageReinforcementsEntity_c *klass; // x8
  __int64 v102; // x9
  __int64 v103; // x20
  System_Int32_array **v104; // x0
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_Int32_array **v111; // x0
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  __int64 v118; // x0
  WarBoardData___c__DisplayClass189_0_Fields *v119; // [xsp+0h] [xbp-70h]
  System_Collections_Generic_List_int__o *v120; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_List_int__o *v121; // [xsp+10h] [xbp-60h]

  if ( (byte_42E779F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_BasicHelper_Any_int____68810384,
      (_DWORD)reinfoDatas,
      (_DWORD)mst,
      *(_QWORD *)&targetStageReinforcementsId);
    sub_B5D5C4(&Method_BasicHelper_Any_ReinforcementsData___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Func_ReinforcementsData__bool___ctor__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_Func_ReinforcementsData__bool__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ReinforcementsData__Add__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v35, v36, v37);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v38, v39, v40);
    sub_B5D5C4(&ReinforcementsData_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v44, v45, v46);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass189_0__GetReinforcements_b__0__, v47, v48, v49);
    sub_B5D5C4(&WarBoardData___c__DisplayClass189_0_TypeInfo, v50, v51, v52);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__1__, v53, v54, v55);
    sub_B5D5C4(&WarBoardData___c__DisplayClass189_1_TypeInfo, v56, v57, v58);
    byte_42E779F = 1;
  }
  v59 = (WarBoardData___c__DisplayClass189_0_o *)sub_B5D694(WarBoardData___c__DisplayClass189_0_TypeInfo);
  WarBoardData___c__DisplayClass189_0___ctor(v59, 0LL);
  if ( !v59 )
    goto LABEL_51;
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity || !mst )
    goto LABEL_51;
  p_fields = &v59->fields;
  if ( WarBoardStageReinforcementsMaster__TryGetReleaseEntity(
         mst,
         &v59->fields.stageEntity,
         stageEntity->fields.id,
         targetStageReinforcementsId,
         0LL) )
  {
    v121 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v121,
      (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
    v120 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v120,
      (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
    if ( !p_fields->stageEntity )
      goto LABEL_51;
    v119 = &v59->fields;
    DeploySquareIds = WarBoardData__GetDeploySquareIds(this, p_fields->stageEntity->fields.squareIds, v64);
    v66 = sub_B5D694(WarBoardData___c__DisplayClass189_1_TypeInfo);
    WarBoardData___c__DisplayClass189_1___ctor((WarBoardData___c__DisplayClass189_1_o *)v66, 0LL);
    if ( !v66 )
      goto LABEL_51;
    *(_QWORD *)(v66 + 24) = v59;
    v73 = v66 + 24;
    sub_B5D560((BattleServantConfConponent_o *)(v66 + 24), (System_Int32_array **)v59, v67, v68, v69, v70, v71, v72);
    v75 = *(_QWORD *)(v66 + 24);
    *(_DWORD *)(v66 + 16) = 0;
    if ( !v75 )
      goto LABEL_51;
    v76 = 0;
    while ( 1 )
    {
      ReinfocementsPieces = *(WarBoardStageReinforcementsEntity_o **)(v75 + 16);
      if ( !ReinfocementsPieces )
        goto LABEL_51;
      reinforcementsIds = ReinfocementsPieces->fields.reinforcementsIds;
      if ( !reinforcementsIds )
        goto LABEL_51;
      if ( v76 >= (signed int)reinforcementsIds->max_length )
        break;
      limitNums = ReinfocementsPieces->fields.limitNums;
      if ( !limitNums )
        goto LABEL_51;
      if ( v76 >= limitNums->max_length )
        goto LABEL_52;
      if ( limitNums->m_Items[v76 + 1] < 1 )
      {
        v82 = 0;
      }
      else
      {
        ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)WarBoardData__GetReinfocementsPieces(
                                                                       this,
                                                                       ReinfocementsPieces->fields.id,
                                                                       v76,
                                                                       v74);
        if ( !ReinfocementsPieces )
          goto LABEL_51;
        if ( !*(_QWORD *)v73 )
          goto LABEL_51;
        v79 = ReinfocementsPieces;
        ReinfocementsPieces = *(WarBoardStageReinforcementsEntity_o **)(*(_QWORD *)v73 + 16LL);
        if ( !ReinfocementsPieces )
          goto LABEL_51;
        v80 = ReinfocementsPieces->fields.limitNums;
        if ( !v80 )
          goto LABEL_51;
        v81 = *(int *)(v66 + 16);
        if ( (unsigned int)v81 >= v80->max_length )
          goto LABEL_52;
        v82 = v80->m_Items[v81 + 1] <= v79->fields.forceId;
      }
      IsOnce = WarBoardStageReinforcementsEntity__IsOnce(ReinfocementsPieces, 0LL);
      ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)WarBoardData__GetPlayReinforcements(this, v84);
      v85 = *(_QWORD *)v73;
      if ( !*(_QWORD *)v73 )
        goto LABEL_51;
      v86 = *(System_Func_int__bool__o **)(v85 + 24);
      v87 = (System_Int32_array *)ReinfocementsPieces;
      if ( !v86 )
      {
        v86 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v86,
          (Il2CppObject *)v85,
          Method_WarBoardData___c__DisplayClass189_0__GetReinforcements_b__0__,
          (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
        *(_QWORD *)(v85 + 24) = v86;
        sub_B5D560((BattleServantConfConponent_o *)(v85 + 24), (System_Int32_array **)v86, v88, v89, v90, v91, v92, v93);
      }
      v94 = BasicHelper__Any_int__28142236(
              v87,
              (System_Func_T__bool__o *)v86,
              (const MethodInfo_1AD6A9C *)Method_BasicHelper_Any_int____68810384);
      v95 = (System_Collections_Generic_List_T__o *)*reinfoDatas;
      v96 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_ReinforcementsData__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v96,
        (Il2CppObject *)v66,
        Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__1__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_ReinforcementsData__bool___ctor__);
      ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                                                     v95,
                                                                     (System_Func_T__bool__o *)v96,
                                                                     (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_ReinforcementsData___);
      if ( !DeploySquareIds )
        goto LABEL_51;
      v98 = *(int *)(v66 + 16);
      if ( (unsigned int)v98 >= DeploySquareIds->max_length )
        goto LABEL_52;
      if ( (unsigned __int8)ReinfocementsPieces & 1 | (IsOnce && v94 || v82 || DeploySquareIds->m_Items[v98 + 1] < 0) )
      {
        if ( !*(_QWORD *)v73 )
          goto LABEL_51;
        v99 = *(_QWORD *)(*(_QWORD *)v73 + 16LL);
        if ( !v99 )
          goto LABEL_51;
        WarBoardData__SaveHoldReinforcements(this, *(_DWORD *)(v99 + 20), v98, v97);
      }
      else
      {
        ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)v121;
        if ( !v121 )
          goto LABEL_51;
        System_Collections_Generic_List_int___Add(
          v121,
          v98,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        v100 = *(int *)(v66 + 16);
        if ( (unsigned int)v100 >= DeploySquareIds->max_length )
        {
LABEL_52:
          v118 = sub_B5D6C8(ReinfocementsPieces);
          sub_B5D668(v118, 0LL);
        }
        ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)v120;
        if ( !v120 )
          goto LABEL_51;
        System_Collections_Generic_List_int___Add(
          v120,
          DeploySquareIds->m_Items[v100 + 1],
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !ReinfocementsPieces )
          goto LABEL_51;
        klass = ReinfocementsPieces[6].klass;
        if ( !klass )
          goto LABEL_51;
        v102 = *(int *)(v66 + 16);
        if ( (unsigned int)v102 >= DeploySquareIds->max_length )
          goto LABEL_52;
        ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)klass->_2.genericContainerHandle;
        if ( !ReinfocementsPieces )
          goto LABEL_51;
        System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)ReinfocementsPieces,
          DeploySquareIds->m_Items[v102 + 1],
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      }
      v75 = *(_QWORD *)(v66 + 24);
      v76 = *(_DWORD *)(v66 + 16) + 1;
      *(_DWORD *)(v66 + 16) = v76;
      if ( !v75 )
        goto LABEL_51;
    }
    if ( !v121 )
      goto LABEL_51;
    if ( v121->fields._size >= 1 )
    {
      v103 = sub_B5D694(ReinforcementsData_TypeInfo);
      ReinforcementsData___ctor((ReinforcementsData_o *)v103, 0LL);
      if ( v119->stageEntity )
      {
        ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)v121;
        if ( v103 )
        {
          *(_DWORD *)(v103 + 16) = v119->stageEntity->fields.id;
          v104 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                          v121,
                                          (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
          *(_QWORD *)(v103 + 24) = v104;
          sub_B5D560((BattleServantConfConponent_o *)(v103 + 24), v104, v105, v106, v107, v108, v109, v110);
          ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)v120;
          if ( v120 )
          {
            v111 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                            v120,
                                            (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
            *(_QWORD *)(v103 + 32) = v111;
            sub_B5D560((BattleServantConfConponent_o *)(v103 + 32), v111, v112, v113, v114, v115, v116, v117);
            ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)*reinfoDatas;
            if ( *reinfoDatas )
            {
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)ReinfocementsPieces,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v103,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ReinforcementsData__Add__);
              return;
            }
          }
        }
      }
LABEL_51:
      sub_B5D69C(ReinfocementsPieces, v61);
    }
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(this, method);
  return localSaveData->fields.cameraSize;
}


WarBoardPieceData_array *__fastcall WarBoardData__GetServantPieces(
        WarBoardData_o *this,
        bool isPlayerGroup,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  char v18; // w1
  int v19; // w2
  __int64 v20; // x3
  WarBoardData___c__DisplayClass106_0_o *v21; // x21
  __int64 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v25; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0

  if ( (byte_42E7765 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, isPlayerGroup, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Func_WarBoardPieceData__bool__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass106_0__GetServantPieces_b__0__, v15, v16, v17);
    sub_B5D5C4(&WarBoardData___c__DisplayClass106_0_TypeInfo, v18, v19, v20);
    byte_42E7765 = 1;
  }
  v21 = (WarBoardData___c__DisplayClass106_0_o *)sub_B5D694(WarBoardData___c__DisplayClass106_0_TypeInfo);
  WarBoardData___c__DisplayClass106_0___ctor(v21, 0LL);
  if ( !v21 )
    sub_B5D69C(v22, v23);
  v21->fields.isPlayerGroup = isPlayerGroup;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v25 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v25,
    (Il2CppObject *)v21,
    Method_WarBoardData___c__DisplayClass106_0__GetServantPieces_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v26 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)v25,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v26,
                                      (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


WarBoardDataEntity_o *__fastcall WarBoardData__GetServerData(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.serverData;
}


WarBoardSquareData_o *__fastcall WarBoardData__GetSquare(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  WarBoardData___c__DisplayClass128_0_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_IEnumerable_TSource__o *squares; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v22; // x20

  if ( (byte_42E7776 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___, squareIndex, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_WarBoardSquareData__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_WarBoardSquareData__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass128_0__GetSquare_b__0__, v12, v13, v14);
    sub_B5D5C4(&WarBoardData___c__DisplayClass128_0_TypeInfo, v15, v16, v17);
    byte_42E7776 = 1;
  }
  v18 = (WarBoardData___c__DisplayClass128_0_o *)sub_B5D694(WarBoardData___c__DisplayClass128_0_TypeInfo);
  WarBoardData___c__DisplayClass128_0___ctor(v18, 0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  v18->fields.squareIndex = squareIndex;
  squares = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.squares;
  v22 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardSquareData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v22,
    (Il2CppObject *)v18,
    Method_WarBoardData___c__DisplayClass128_0__GetSquare_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardSquareData__bool___ctor__);
  return (WarBoardSquareData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                   squares,
                                   (System_Func_TSource__bool__o *)v22,
                                   (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
}


WarBoardSquareData_array *__fastcall WarBoardData__GetSquares(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.squares;
}


WarBoardUserServantData_o *__fastcall WarBoardData__GetStageBossData(
        WarBoardData_o *this,
        int32_t stageBossIdx,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  WarBoardData___c__DisplayClass153_0_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *svtInfo; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v23; // x20

  if ( (byte_42E7786 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Find_WarBoardUserServantData___, stageBossIdx, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_WarBoardUserServantData__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_WarBoardUserServantData__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass153_0__GetStageBossData_b__0__, v12, v13, v14);
    sub_B5D5C4(&WarBoardData___c__DisplayClass153_0_TypeInfo, v15, v16, v17);
    byte_42E7786 = 1;
  }
  v18 = (WarBoardData___c__DisplayClass153_0_o *)sub_B5D694(WarBoardData___c__DisplayClass153_0_TypeInfo);
  WarBoardData___c__DisplayClass153_0___ctor(v18, 0LL);
  if ( !v18 || (v18->fields.stageBossIdx = stageBossIdx, (serverData = this->fields.serverData) == 0LL) )
    sub_B5D69C(v19, v20);
  svtInfo = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)serverData->fields.svtInfo;
  v23 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardUserServantData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v23,
    (Il2CppObject *)v18,
    Method_WarBoardData___c__DisplayClass153_0__GetStageBossData_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardUserServantData__bool___ctor__);
  return (WarBoardUserServantData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                        svtInfo,
                                        (System_Func_T__bool__o *)v23,
                                        (const MethodInfo_1AD7278 *)Method_BasicHelper_Find_WarBoardUserServantData___);
}


WarBoardTreasureData_o *__fastcall WarBoardData__GetTreasure(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  WarBoardData___c__DisplayClass137_0_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_IEnumerable_TSource__o *treasures; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v22; // x20

  if ( (byte_42E777B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___, squareIndex, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_WarBoardTreasureData__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_WarBoardTreasureData__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass137_0__GetTreasure_b__0__, v12, v13, v14);
    sub_B5D5C4(&WarBoardData___c__DisplayClass137_0_TypeInfo, v15, v16, v17);
    byte_42E777B = 1;
  }
  v18 = (WarBoardData___c__DisplayClass137_0_o *)sub_B5D694(WarBoardData___c__DisplayClass137_0_TypeInfo);
  WarBoardData___c__DisplayClass137_0___ctor(v18, 0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  v18->fields.squareIndex = squareIndex;
  treasures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.treasures;
  v22 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardTreasureData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v22,
    (Il2CppObject *)v18,
    Method_WarBoardData___c__DisplayClass137_0__GetTreasure_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardTreasureData__bool___ctor__);
  return (WarBoardTreasureData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                     treasures,
                                     (System_Func_TSource__bool__o *)v22,
                                     (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___);
}


System_Int32_array *__fastcall WarBoardData__GetTreasureIdList(WarBoardData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Collections_Generic_List_int__o *v14; // x19
  __int64 v15; // x0
  __int64 v16; // x1
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8
  struct WarBoardTreasureData_SaveData_array *treasureSaves; // x20
  int max_length; // w8
  unsigned int v20; // w21
  WarBoardTreasureData_SaveData_o *v21; // x8
  __int64 v23; // x0

  if ( (byte_42E776A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v11, v12, v13);
    byte_42E776A = 1;
  }
  v14 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  localSaveData = this->fields.localSaveData;
  if ( !localSaveData )
    goto LABEL_15;
  treasureSaves = localSaveData->fields.treasureSaves;
  if ( !treasureSaves )
    goto LABEL_15;
  max_length = treasureSaves->max_length;
  if ( max_length >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      if ( v20 >= max_length )
      {
        v23 = sub_B5D6C8(v15);
        sub_B5D668(v23, 0LL);
      }
      v21 = treasureSaves->m_Items[v20];
      if ( !v21 )
        break;
      if ( v21->fields.isUse )
      {
        if ( !v14 )
          break;
        System_Collections_Generic_List_int___Add(
          v14,
          v21->fields.treasureId,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      }
      max_length = treasureSaves->max_length;
      if ( (int)++v20 >= max_length )
        goto LABEL_13;
    }
LABEL_15:
    sub_B5D69C(v15, v16);
  }
LABEL_13:
  if ( !v14 )
    goto LABEL_15;
  return System_Collections_Generic_List_int___ToArray(
           v14,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


WarBoardTreasureData_array *__fastcall WarBoardData__GetTreasures(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.treasures;
}


WarBoardUiData_o *__fastcall WarBoardData__GetUiData(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  WarBoardData___c__DisplayClass193_0_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  struct System_Collections_Generic_List_WarBoardUiData__o *listUiData; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v22; // x20

  if ( (byte_42E77A3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardUiData__Find__, squareIndex, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Predicate_WarBoardUiData___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Predicate_WarBoardUiData__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass193_0__GetUiData_b__0__, v12, v13, v14);
    sub_B5D5C4(&WarBoardData___c__DisplayClass193_0_TypeInfo, v15, v16, v17);
    byte_42E77A3 = 1;
  }
  v18 = (WarBoardData___c__DisplayClass193_0_o *)sub_B5D694(WarBoardData___c__DisplayClass193_0_TypeInfo);
  WarBoardData___c__DisplayClass193_0___ctor(v18, 0LL);
  if ( !v18
    || (v18->fields.squareIndex = squareIndex,
        listUiData = this->fields.listUiData,
        v22 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_WarBoardUiData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v22,
          (Il2CppObject *)v18,
          Method_WarBoardData___c__DisplayClass193_0__GetUiData_b__0__,
          (const MethodInfo_2B9320C *)Method_System_Predicate_WarBoardUiData___ctor__),
        !listUiData) )
  {
    sub_B5D69C(v19, v20);
  }
  return (WarBoardUiData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                               (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)listUiData,
                               (System_Predicate_T__o *)v22,
                               (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_WarBoardUiData__Find__);
}


WarBoardUiData_o *__fastcall WarBoardData__GetUiData_23249100(
        WarBoardData_o *this,
        System_Int32_array *pieceIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct System_Collections_Generic_List_WarBoardUiData__o *listUiData; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v28; // x20

  if ( (byte_42E77A4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardUiData__Find__, (_DWORD)pieceIndex, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Predicate_WarBoardUiData___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Predicate_WarBoardUiData__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass194_0__GetUiData_b__0__, v12, v13, v14);
    sub_B5D5C4(&WarBoardData___c__DisplayClass194_0_TypeInfo, v15, v16, v17);
    byte_42E77A4 = 1;
  }
  v18 = sub_B5D694(WarBoardData___c__DisplayClass194_0_TypeInfo);
  WarBoardData___c__DisplayClass194_0___ctor((WarBoardData___c__DisplayClass194_0_o *)v18, 0LL);
  if ( !v18
    || (*(_QWORD *)(v18 + 16) = pieceIndex,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v18 + 16),
          (System_Int32_array **)pieceIndex,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26),
        listUiData = this->fields.listUiData,
        v28 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_WarBoardUiData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v28,
          (Il2CppObject *)v18,
          Method_WarBoardData___c__DisplayClass194_0__GetUiData_b__0__,
          (const MethodInfo_2B9320C *)Method_System_Predicate_WarBoardUiData___ctor__),
        !listUiData) )
  {
    sub_B5D69C(v19, v20);
  }
  return (WarBoardUiData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                               (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)listUiData,
                               (System_Predicate_T__o *)v28,
                               (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_WarBoardUiData__Find__);
}


WarBoardTreasureData_o *__fastcall WarBoardData__GetUnusedTreasure(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  WarBoardData___c__DisplayClass138_0_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_IEnumerable_TSource__o *treasures; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v22; // x20

  if ( (byte_42E777C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___, squareIndex, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_WarBoardTreasureData__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_WarBoardTreasureData__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass138_0__GetUnusedTreasure_b__0__, v12, v13, v14);
    sub_B5D5C4(&WarBoardData___c__DisplayClass138_0_TypeInfo, v15, v16, v17);
    byte_42E777C = 1;
  }
  v18 = (WarBoardData___c__DisplayClass138_0_o *)sub_B5D694(WarBoardData___c__DisplayClass138_0_TypeInfo);
  WarBoardData___c__DisplayClass138_0___ctor(v18, 0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  v18->fields.squareIndex = squareIndex;
  treasures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.treasures;
  v22 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardTreasureData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v22,
    (Il2CppObject *)v18,
    Method_WarBoardData___c__DisplayClass138_0__GetUnusedTreasure_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardTreasureData__bool___ctor__);
  return (WarBoardTreasureData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                     treasures,
                                     (System_Func_TSource__bool__o *)v22,
                                     (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___);
}


System_Int32_array *__fastcall WarBoardData__GetUseCommonReleaseIds(WarBoardData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_int__o *v29; // x19
  void *Master_WarQuestSelectionMaster; // x0
  __int64 v31; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  int32_t stageId; // w21
  WarBoardEventScriptMaster_o *v34; // x20
  int v35; // w8
  void *v36; // x21
  unsigned int v37; // w23
  __int64 v38; // x22
  __int64 v39; // x25
  __int64 v40; // x8
  unsigned __int64 v41; // x26
  __int64 v42; // x25
  __int64 v43; // x8
  unsigned __int64 v44; // x26
  int v45; // w8
  void *v46; // x22
  unsigned int v47; // w27
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  __int64 v50; // x0

  if ( (byte_42E7796 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardEventMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardEventScriptMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Distinct_int___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_int___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v26, v27, v28);
    byte_42E7796 = 1;
  }
  v29 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v29,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardEventScriptMaster___);
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_41;
  stageId = serverData->fields.stageId;
  v34 = (WarBoardEventScriptMaster_o *)Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardEventMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_41;
  Master_WarQuestSelectionMaster = WarBoardEventMaster__GetListByStageId(
                                     (WarBoardEventMaster_o *)Master_WarQuestSelectionMaster,
                                     stageId,
                                     0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_41;
  v35 = *((_DWORD *)Master_WarQuestSelectionMaster + 6);
  v36 = Master_WarQuestSelectionMaster;
  if ( v35 >= 1 )
  {
    v37 = 0;
    do
    {
      if ( v37 >= v35 )
        goto LABEL_42;
      v38 = *((_QWORD *)v36 + (int)v37 + 4);
      if ( !v38 )
        goto LABEL_41;
      v39 = *(_QWORD *)(v38 + 56);
      if ( v39 )
      {
        v40 = *(_QWORD *)(v39 + 24);
        if ( v40 )
        {
          if ( (int)v40 >= 1 )
          {
            v41 = 0LL;
            while ( v41 < (unsigned int)v40 )
            {
              v31 = *(unsigned int *)(v39 + 32 + 4 * v41);
              if ( (int)v31 >= 1 )
              {
                if ( !v29 )
                  goto LABEL_41;
                System_Collections_Generic_List_int___Add(
                  v29,
                  v31,
                  (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
                LODWORD(v40) = *(_DWORD *)(v39 + 24);
              }
              if ( (__int64)++v41 >= (int)v40 )
                goto LABEL_22;
            }
LABEL_42:
            v50 = sub_B5D6C8(Master_WarQuestSelectionMaster);
            sub_B5D668(v50, 0LL);
          }
LABEL_22:
          v42 = *(_QWORD *)(v38 + 48);
          if ( !v42 )
            goto LABEL_41;
          v43 = *(_QWORD *)(v42 + 24);
          if ( (int)v43 >= 1 )
          {
            v44 = 0LL;
            while ( 1 )
            {
              if ( v44 >= (unsigned int)v43 )
                goto LABEL_42;
              if ( !v34 )
                goto LABEL_41;
              Master_WarQuestSelectionMaster = WarBoardEventScriptMaster__GetList(
                                                 v34,
                                                 *(_DWORD *)(v42 + 4 * v44 + 32),
                                                 0LL);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_41;
              v45 = *((_DWORD *)Master_WarQuestSelectionMaster + 6);
              v46 = Master_WarQuestSelectionMaster;
              if ( v45 >= 1 )
                break;
LABEL_37:
              LODWORD(v43) = *(_DWORD *)(v42 + 24);
              if ( (__int64)++v44 >= (int)v43 )
                goto LABEL_38;
            }
            v47 = 0;
            while ( v47 < v45 )
            {
              Master_WarQuestSelectionMaster = (void *)*((_QWORD *)v46 + (int)v47 + 4);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_41;
              if ( *((_DWORD *)Master_WarQuestSelectionMaster + 6) == 2 )
              {
                Master_WarQuestSelectionMaster = (void *)WarBoardEventScriptEntity__GetChangeWinCondition(
                                                           (WarBoardEventScriptEntity_o *)Master_WarQuestSelectionMaster,
                                                           0LL);
                if ( ((unsigned int)Master_WarQuestSelectionMaster & 0x80000000) == 0 )
                {
                  if ( !v29 )
                    goto LABEL_41;
                  System_Collections_Generic_List_int___Add(
                    v29,
                    (int32_t)Master_WarQuestSelectionMaster,
                    (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
                }
              }
              v45 = *((_DWORD *)v46 + 6);
              if ( (int)++v47 >= v45 )
                goto LABEL_37;
            }
            goto LABEL_42;
          }
        }
      }
LABEL_38:
      v35 = *((_DWORD *)v36 + 6);
    }
    while ( (int)++v37 < v35 );
  }
  v48 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v29,
          (const MethodInfo_1CA8DAC *)Method_System_Linq_Enumerable_Distinct_int___);
  Master_WarQuestSelectionMaster = System_Linq_Enumerable__ToList_int_(
                                     v48,
                                     (const MethodInfo_1CBA56C *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_41:
    sub_B5D69C(Master_WarQuestSelectionMaster, v31);
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)Master_WarQuestSelectionMaster,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


WarBoardWallData_o *__fastcall WarBoardData__GetWall(
        WarBoardData_o *this,
        int32_t squareIndex,
        bool ignoreDestroy,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  WarBoardData___c__DisplayClass140_0_o *v19; // x22
  __int64 v20; // x0
  __int64 v21; // x1
  System_Collections_Generic_IEnumerable_TSource__o *walls; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v23; // x20

  if ( (byte_42E777D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardWallData___, squareIndex, ignoreDestroy, method);
    sub_B5D5C4(&Method_System_Func_WarBoardWallData__bool___ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Func_WarBoardWallData__bool__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass140_0__GetWall_b__0__, v13, v14, v15);
    sub_B5D5C4(&WarBoardData___c__DisplayClass140_0_TypeInfo, v16, v17, v18);
    byte_42E777D = 1;
  }
  v19 = (WarBoardData___c__DisplayClass140_0_o *)sub_B5D694(WarBoardData___c__DisplayClass140_0_TypeInfo);
  WarBoardData___c__DisplayClass140_0___ctor(v19, 0LL);
  if ( !v19 )
    sub_B5D69C(v20, v21);
  v19->fields.squareIndex = squareIndex;
  v19->fields.ignoreDestroy = ignoreDestroy;
  walls = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.walls;
  v23 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardWallData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v23,
    (Il2CppObject *)v19,
    Method_WarBoardData___c__DisplayClass140_0__GetWall_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardWallData__bool___ctor__);
  return (WarBoardWallData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                 walls,
                                 (System_Func_TSource__bool__o *)v23,
                                 (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardWallData___);
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
  int v2; // w2
  __int64 v3; // x3
  WarBoardManager_c *v5; // x0

  if ( (byte_42E778E & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E778E = 1;
  }
  v5 = WarBoardManager_TypeInfo;
  if ( (BYTE3(WarBoardManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
    v5 = WarBoardManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v5->static_fields->SAVE_KEY_WAR_BOARD_CONFIRMED_RULE, -1, 0LL) != this->fields.winCondId;
}


void __fastcall WarBoardData__InitPrevCondData(WarBoardData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  WarBoardData_o *UseCommonReleaseIds; // x0
  const MethodInfo *v9; // x2
  System_Int32_array *PrevCondIds; // x0
  __int64 v11; // x1
  __int64 v12; // x8
  System_Int32_array *v13; // x20
  unsigned __int64 v14; // x24
  int32_t v15; // w23
  struct System_Collections_Generic_List_WarBoardPrevCondData__o *listPrevCond; // x21
  WarBoardPrevCondData_o *v17; // x22
  __int64 v18; // x0

  if ( (byte_42E7798 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&WarBoardPrevCondData_TypeInfo, v5, v6, v7);
    byte_42E7798 = 1;
  }
  UseCommonReleaseIds = (WarBoardData_o *)WarBoardData__GetUseCommonReleaseIds(this, method);
  PrevCondIds = WarBoardData__GetPrevCondIds(UseCommonReleaseIds, (System_Int32_array *)UseCommonReleaseIds, v9);
  if ( !PrevCondIds )
    goto LABEL_11;
  v12 = *(_QWORD *)&PrevCondIds->max_length;
  v13 = PrevCondIds;
  if ( (int)v12 >= 1 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)v12 )
      {
        v18 = sub_B5D6C8(PrevCondIds);
        sub_B5D668(v18, 0LL);
      }
      v15 = v13->m_Items[v14 + 1];
      listPrevCond = this->fields.listPrevCond;
      v17 = (WarBoardPrevCondData_o *)sub_B5D694(WarBoardPrevCondData_TypeInfo);
      WarBoardPrevCondData___ctor_29110920(v17, v15, -1, 0LL);
      if ( !listPrevCond )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)listPrevCond,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__);
      LODWORD(v12) = v13->max_length;
      if ( (__int64)++v14 >= (int)v12 )
        return;
    }
LABEL_11:
    sub_B5D69C(PrevCondIds, v11);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  WarBoardData___c__DisplayClass172_0_o *v30; // x23
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v31; // x0
  __int64 v32; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *bossBattleInfo; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v35; // x22
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *v37; // x21
  Il2CppObject *v38; // x20
  System_Xml_Schema_XmlSchemaObject_o *valuea; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E7791 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Find_WarBoardBossBattleData___, bossId, (_DWORD)key, *(_QWORD *)&value);
    sub_B5D5C4(&System_Convert_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Func_WarBoardBossBattleData__bool___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Func_WarBoardBossBattleData__bool__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass172_0__IsBossInfo_b__0__, v24, v25, v26);
    sub_B5D5C4(&WarBoardData___c__DisplayClass172_0_TypeInfo, v27, v28, v29);
    byte_42E7791 = 1;
  }
  valuea = 0LL;
  v30 = (WarBoardData___c__DisplayClass172_0_o *)sub_B5D694(WarBoardData___c__DisplayClass172_0_TypeInfo);
  WarBoardData___c__DisplayClass172_0___ctor(v30, 0LL);
  if ( !v30 )
    goto LABEL_18;
  v30->fields.bossId = bossId;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_18;
  bossBattleInfo = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)serverData->fields.bossBattleInfo;
  v35 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardBossBattleData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v35,
    (Il2CppObject *)v30,
    Method_WarBoardData___c__DisplayClass172_0__IsBossInfo_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardBossBattleData__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                     bossBattleInfo,
                                                                     (System_Func_T__bool__o *)v35,
                                                                     (const MethodInfo_1AD7278 *)Method_BasicHelper_Find_WarBoardBossBattleData___);
  if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
    return value == 0;
  v37 = USFGOActorBattleActionEventConditional_OverwriteParamCondition;
  v31 = *(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **)&USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.isExecute;
  if ( !v31 )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          v31,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return value == 0;
  v31 = *(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **)&v37->fields.isExecute;
  if ( !v31 )
LABEL_18:
    sub_B5D69C(v31, v32);
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          v31,
          (System_Xml_XmlQualifiedName_o *)key,
          &valuea,
          (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return value == 0;
  v38 = (Il2CppObject *)valuea;
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  return System_Convert__ToInt32(v38, 0LL) == value;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardData__IsDefenseTarget(
        WarBoardData_o *this,
        System_Int32_array **data,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  _QWORD **v12; // x24
  __int64 v13; // x23
  __int16 v14; // w8
  __int64 v15; // x23
  __int64 v16; // x23
  __int64 v17; // x23
  System_Int32_array **v18; // x8
  System_Int32_array *v19; // x1
  WarBoardStageNpcMaster_o *stageNpcMaster; // x0
  __int64 v21; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  System_Int32_array *DefenseTarget; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  WarBoardStageNpcEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E778F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_int___, (_DWORD)data, forceId, *(_QWORD *)&groupId);
    byte_42E778F = 1;
  }
  entity = 0LL;
  v12 = (_QWORD **)Method_System_Array_Empty_int___;
  v13 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v14 = *(_WORD *)(v13 + 306);
  if ( (v14 & 1) == 0 )
  {
    sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v14 = *(_WORD *)(v13 + 306);
  }
  if ( (v14 & 0x400) != 0 )
  {
    v15 = *v12[6];
    if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
      sub_AF52C4(*v12[6]);
    if ( !*(_DWORD *)(v15 + 224) )
    {
      v16 = *v12[6];
      if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
        sub_AF52C4(*v12[6]);
      j_il2cpp_runtime_class_init_0(v16);
    }
  }
  v17 = *v12[6];
  if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
    sub_AF52C4(*v12[6]);
  v18 = *(System_Int32_array ***)(v17 + 184);
  v19 = *v18;
  *data = *v18;
  sub_B5D560(
    (BattleServantConfConponent_o *)data,
    (System_Int32_array **)v19,
    *(System_String_array ***)&forceId,
    *(System_String_array ***)&groupId,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity )
    goto LABEL_24;
  stageNpcMaster = this->fields.stageNpcMaster;
  if ( !stageNpcMaster )
    goto LABEL_24;
  if ( WarBoardStageNpcMaster__TryGetEntity(stageNpcMaster, &entity, stageEntity->fields.id, forceId, groupId, 0LL) )
  {
    stageNpcMaster = (WarBoardStageNpcMaster_o *)entity;
    if ( !entity )
      goto LABEL_24;
    DefenseTarget = WarBoardStageNpcEntity__GetDefenseTarget(entity, 0LL);
    *data = DefenseTarget;
    sub_B5D560((BattleServantConfConponent_o *)data, (System_Int32_array **)DefenseTarget, v24, v25, v26, v27, v28, v29);
  }
  stageNpcMaster = (WarBoardStageNpcMaster_o *)BasicHelper__IsNullOrEmpty(
                                                 (System_Collections_ICollection_o *)*data,
                                                 0LL);
  if ( ((unsigned __int8)stageNpcMaster & 1) != 0 )
    return 0;
  if ( !*data )
LABEL_24:
    sub_B5D69C(stageNpcMaster, v21);
  return ((*data)->max_length & 1) == 0;
}


bool __fastcall WarBoardData__IsLose(WarBoardData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  WarBoardPieceData_array *Pieces_23174640; // x0
  const MethodInfo *v5; // x1
  int max_length; // w8
  WarBoardPieceData_array *v7; // x20
  int v8; // w24
  int v9; // w22
  int v10; // w23
  WarBoardPieceData_o *v11; // x21
  __int64 v14; // x0

  Pieces_23174640 = WarBoardData__GetPieces_23174640(this, 0, 0, v2);
  if ( !Pieces_23174640 )
LABEL_19:
    sub_B5D69C(Pieces_23174640, v5);
  max_length = Pieces_23174640->max_length;
  v7 = Pieces_23174640;
  if ( max_length < 1 )
    return 1;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  do
  {
    if ( v8 >= (unsigned int)max_length )
    {
      v14 = sub_B5D6C8(Pieces_23174640);
      sub_B5D668(v14, 0LL);
    }
    v11 = v7->m_Items[v8];
    if ( !v11 )
      goto LABEL_19;
    if ( !v11->fields._isDead_k__BackingField )
    {
      Pieces_23174640 = (WarBoardPieceData_array *)WarBoardPieceData__HasAvailablePermanentSleepBuff(v11, 0LL);
      if ( ((unsigned __int8)Pieces_23174640 & 1) == 0 )
      {
        Pieces_23174640 = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster(v11, 0LL);
        if ( ((unsigned __int8)Pieces_23174640 & 1) != 0 )
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
  WarBoardPieceData_array *Pieces_23174640; // x0
  __int64 v12; // x1
  int max_length; // w8
  WarBoardPieceData_array *v14; // x22
  unsigned int v15; // w26
  Il2CppClass **v16; // x8
  Il2CppClass *v17; // x23
  int v18; // w8
  __int64 v19; // x0

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
          Pieces_23174640 = WarBoardData__GetPieces_23174640(this, i, v10, v2);
          if ( !Pieces_23174640 )
            goto LABEL_28;
          max_length = Pieces_23174640->max_length;
          v14 = Pieces_23174640;
          if ( max_length >= 1 )
          {
            v15 = 0;
            while ( 1 )
            {
              if ( v15 >= max_length )
              {
                v19 = sub_B5D6C8(Pieces_23174640);
                sub_B5D668(v19, 0LL);
              }
              v16 = &v14->obj.klass + (int)v15;
              v17 = v16[4];
              if ( !v17 )
                break;
              Pieces_23174640 = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster(
                                                             (WarBoardPieceData_o *)v16[4],
                                                             0LL);
              if ( ((unsigned __int8)Pieces_23174640 & 1) == 0 && !LOBYTE(v17->_1.klass) )
              {
                ++v7;
                v8 += *((unsigned __int8 *)&v17->_1.this_arg.bits + 4);
              }
              max_length = v14->max_length;
              if ( (int)++v15 >= max_length )
                goto LABEL_16;
            }
LABEL_28:
            sub_B5D69C(Pieces_23174640, v12);
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
  if ( v18 >> 1 < v8 )
  {
    this->fields.isPlayedHalfDeadMessage = 1;
    return 0;
  }
  return result;
}


bool __fastcall WarBoardData__IsReachableWinConditions(WarBoardData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v39; // x1
  const MethodInfo *v40; // x2
  WarBoardCommonReleaseEntity_array *List; // x20
  System_Collections_Generic_Dictionary_int__bool__o *v43; // x19
  int max_length; // w8
  unsigned int v45; // w21
  int32_t *v46; // x25
  int32_t v47; // w8
  int32_t v48; // w1
  const MethodInfo_2F034F8 *v49; // x3
  bool v50; // w2
  System_Collections_Generic_Dictionary_int__bool__o *v51; // x0
  WarBoardData___c_c *v52; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_KeyValuePair_int__bool___bool__o *_9__95_0; // x20
  Il2CppObject *v55; // x21
  struct WarBoardData___c_StaticFields *v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  __int64 v63; // x0

  if ( (byte_42E775B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__bool____, v23, v24, v25);
    sub_B5D5C4(&Method_System_Func_KeyValuePair_int__bool___bool___ctor__, v26, v27, v28);
    sub_B5D5C4(&System_Func_KeyValuePair_int__bool___bool__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_WarBoardData___c__IsReachableWinConditions_b__95_0__, v32, v33, v34);
    sub_B5D5C4(&WarBoardData___c_TypeInfo, v35, v36, v37);
    byte_42E775B = 1;
  }
  if ( (this->fields.winCondId & 0x80000000) != 0 )
    return 1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_36;
  List = WarBoardCommonReleaseMaster__GetList(
           (WarBoardCommonReleaseMaster_o *)Master_WarQuestSelectionMaster,
           this->fields.winCondId,
           v40);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)List, 0LL) )
    return 0;
  v43 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v43,
    (const MethodInfo_2F02974 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  if ( !List )
LABEL_36:
    sub_B5D69C(Master_WarQuestSelectionMaster, v39);
  max_length = List->max_length;
  if ( max_length >= 1 )
  {
    v45 = 0;
    while ( 1 )
    {
      if ( v45 >= max_length )
      {
        v63 = sub_B5D6C8(Master_WarQuestSelectionMaster);
        sub_B5D668(v63, 0LL);
      }
      v46 = (int32_t *)List->m_Items[v45];
      if ( !v46 || !v43 )
        goto LABEL_36;
      if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
              v43,
              v46[6],
              (const MethodInfo_2F03798 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
        break;
      Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                                                      v43,
                                                                      v46[6],
                                                                      (const MethodInfo_2F03460 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
        break;
LABEL_26:
      max_length = List->max_length;
      if ( (int)++v45 >= max_length )
        goto LABEL_27;
    }
    v47 = v46[7];
    if ( v47 == 1 )
    {
      v48 = v46[6];
      v49 = (const MethodInfo_2F034F8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__;
      v50 = v46[10] == 0;
    }
    else
    {
      if ( v47 != 5 )
      {
        v48 = v46[6];
        v49 = (const MethodInfo_2F034F8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__;
        v51 = v43;
        v50 = 0;
        goto LABEL_25;
      }
      v48 = v46[6];
      v49 = (const MethodInfo_2F034F8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__;
      v50 = v46[10] < 1;
    }
    v51 = v43;
LABEL_25:
    System_Collections_Generic_Dictionary_int__bool___set_Item(v51, v48, v50, v49);
    goto LABEL_26;
  }
LABEL_27:
  v52 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v52 = WarBoardData___c_TypeInfo;
  }
  static_fields = v52->static_fields;
  _9__95_0 = static_fields->__9__95_0;
  if ( !_9__95_0 )
  {
    if ( (BYTE3(v52->vtable._0_Equals.methodPtr) & 4) != 0 && !v52->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v52);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v55 = (Il2CppObject *)static_fields->__9;
    _9__95_0 = (System_Func_KeyValuePair_int__bool___bool__o *)sub_B5D694(System_Func_KeyValuePair_int__bool___bool__TypeInfo);
    System_Func_KeyValuePair_int__bool___bool____ctor(
      _9__95_0,
      v55,
      Method_WarBoardData___c__IsReachableWinConditions_b__95_0__,
      (const MethodInfo_27923C8 *)Method_System_Func_KeyValuePair_int__bool___bool___ctor__);
    v56 = WarBoardData___c_TypeInfo->static_fields;
    v56->__9__95_0 = _9__95_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v56->__9__95_0,
      (System_Int32_array **)_9__95_0,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62);
  }
  return System_Linq_Enumerable__Any_KeyValuePair_int__bool__(
           (System_Collections_Generic_IEnumerable_TSource__o *)v43,
           (System_Func_TSource__bool__o *)_9__95_0,
           (const MethodInfo_1C991E4 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__bool____);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardData__IsReinforcementsApper(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        int32_t targetStageReinforcementsId,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  WarBoardData___c__DisplayClass190_0_o *v27; // x24
  WarBoardStageReinforcementsMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v29; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  void **p_entity; // x20
  bool IsOnce; // w23
  const MethodInfo *v33; // x1
  System_Int32_array *PlayReinforcements; // x25
  System_Func_int__bool__o *v35; // x26
  const MethodInfo *v36; // x2
  struct WarBoardStageReinforcementsEntity_o *entity; // x8
  char v38; // w9
  bool result; // w0
  const MethodInfo *v40; // x3
  void *v41; // x8
  __int64 v42; // x9
  WarBoardStageReinforcementsMaster_o *v43; // x21
  int32_t v44; // w22
  __int64 v45; // x9
  __int64 v46; // x9
  _BOOL4 v47; // w9
  __int64 v48; // x0

  if ( (byte_42E77A0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_int____68810384, forceId, groupId, *(_QWORD *)&targetStageReinforcementsId);
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___, v9, v10, v11);
    sub_B5D5C4(&DataManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass190_0__IsReinforcementsApper_b__0__, v21, v22, v23);
    sub_B5D5C4(&WarBoardData___c__DisplayClass190_0_TypeInfo, v24, v25, v26);
    byte_42E77A0 = 1;
  }
  v27 = (WarBoardData___c__DisplayClass190_0_o *)sub_B5D694(WarBoardData___c__DisplayClass190_0_TypeInfo);
  WarBoardData___c__DisplayClass190_0___ctor(v27, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardStageReinforcementsMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
  if ( !v27 )
    goto LABEL_33;
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity || !Master_WarQuestSelectionMaster )
    goto LABEL_33;
  p_entity = (void **)&v27->fields.entity;
  if ( !WarBoardStageReinforcementsMaster__TryGetReleaseEntity(
          Master_WarQuestSelectionMaster,
          &v27->fields.entity,
          stageEntity->fields.id,
          targetStageReinforcementsId,
          0LL) )
    return 0;
  Master_WarQuestSelectionMaster = (WarBoardStageReinforcementsMaster_o *)*p_entity;
  if ( !*p_entity
    || (IsOnce = WarBoardStageReinforcementsEntity__IsOnce(
                   (WarBoardStageReinforcementsEntity_o *)Master_WarQuestSelectionMaster,
                   0LL),
        PlayReinforcements = WarBoardData__GetPlayReinforcements(this, v33),
        v35 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo),
        System_Func_int__bool____ctor(
          v35,
          (Il2CppObject *)v27,
          Method_WarBoardData___c__DisplayClass190_0__IsReinforcementsApper_b__0__,
          (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__),
        Master_WarQuestSelectionMaster = (WarBoardStageReinforcementsMaster_o *)BasicHelper__Any_int__28142236(
                                                                                  PlayReinforcements,
                                                                                  (System_Func_T__bool__o *)v35,
                                                                                  (const MethodInfo_1AD6A9C *)Method_BasicHelper_Any_int____68810384),
        (entity = v27->fields.entity) == 0LL) )
  {
LABEL_33:
    sub_B5D69C(Master_WarQuestSelectionMaster, v29);
  }
  v38 = IsOnce & (unsigned __int8)Master_WarQuestSelectionMaster;
  result = 0;
  if ( (v38 & 1) == 0 && entity->fields.forceId == forceId && entity->fields.groupId == groupId )
  {
    Master_WarQuestSelectionMaster = (WarBoardStageReinforcementsMaster_o *)WarBoardData__GetDeploySquareIds(
                                                                              this,
                                                                              entity->fields.squareIds,
                                                                              v36);
    v41 = *p_entity;
    if ( *p_entity )
    {
      v42 = *((_QWORD *)v41 + 5);
      if ( v42 )
      {
        v43 = Master_WarQuestSelectionMaster;
        v44 = 0;
        while ( v44 < *(_DWORD *)(v42 + 24) )
        {
          v45 = *((_QWORD *)v41 + 8);
          if ( !v45 )
            goto LABEL_33;
          if ( (unsigned int)v44 >= *(_DWORD *)(v45 + 24) )
          {
LABEL_37:
            v48 = sub_B5D6C8(Master_WarQuestSelectionMaster);
            sub_B5D668(v48, 0LL);
          }
          if ( *(int *)(v45 + 4LL * v44 + 32) < 1 )
          {
            v47 = 0;
            if ( !v43 )
              goto LABEL_33;
          }
          else
          {
            Master_WarQuestSelectionMaster = (WarBoardStageReinforcementsMaster_o *)WarBoardData__GetReinfocementsPieces(
                                                                                      this,
                                                                                      *((_DWORD *)v41 + 5),
                                                                                      v44,
                                                                                      v40);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_33;
            v41 = *p_entity;
            if ( !*p_entity )
              goto LABEL_33;
            v46 = *((_QWORD *)v41 + 8);
            if ( !v46 )
              goto LABEL_33;
            if ( (unsigned int)v44 >= *(_DWORD *)(v46 + 24) )
              goto LABEL_37;
            v47 = *(_DWORD *)(v46 + 4LL * v44 + 32) <= SLODWORD(Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField);
            if ( !v43 )
              goto LABEL_33;
          }
          if ( (unsigned int)v44 >= LODWORD(v43->fields._MasterName_k__BackingField) )
            goto LABEL_37;
          if ( !v47 && (*((_DWORD *)&v43->fields.list + v44) & 0x80000000) == 0 )
            return 1;
          v42 = *((_QWORD *)v41 + 5);
          ++v44;
          if ( !v42 )
            goto LABEL_33;
        }
        return 0;
      }
    }
    goto LABEL_33;
  }
  return result;
}


bool __fastcall WarBoardData__IsWin(WarBoardData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  WebViewManager_o *Instance; // x0
  __int64 v27; // x1
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x20
  __int64 v29; // x1
  System_Type_o *Type; // x20
  intptr_t v31; // w21
  System_Type_o *TypeFromHandle; // x1
  bool v33; // w20
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-48h] BYREF
  System_RuntimeTypeHandle_o v36; // 0:w0.4

  if ( (byte_42E775C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__get_Current__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&System_Type_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&WarBoardChangeWinConditionTask_var, v23, v24, v25);
    byte_42E775C = 1;
  }
  memset(&v35, 0, sizeof(v35));
  if ( !WarBoardData__CheckWinCond(this, method) )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 28, 0LL, 0LL);
  Instance = (WebViewManager_o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                   (System_Collections_Generic_IEnumerable_TSource__o *)EventTasks,
                                   (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    WarBoardManager__AddTask_18807556((WarBoardManager_o *)Instance, 0, EventTasks, 0LL);
  }
  if ( !EventTasks )
LABEL_22:
    sub_B5D69C(Instance, v27);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v35,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventTasks,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v35,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__MoveNext__) )
  {
    if ( !v35.fields.current )
      sub_B5D69C(0LL, v29);
    Type = System_Object__GetType(v35.fields.current, 0LL);
    v31 = (int)WarBoardChangeWinConditionTask_var;
    if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v36.fields.value = v31;
    TypeFromHandle = System_Type__GetTypeFromHandle(v36, 0LL);
    if ( System_Type__op_Equality(Type, TypeFromHandle, 0LL) )
    {
      v33 = 0;
      this->fields.winCondGroup = -1;
      goto LABEL_19;
    }
  }
  v33 = 1;
LABEL_19:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v35,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__Dispose__);
  return v33;
}


void __fastcall WarBoardData__JudgePrevCondData(WarBoardData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v21; // x1
  WarBoardCommonReleaseMaster_o *v22; // x20
  _BOOL8 v23; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x3
  Il2CppObject *current; // x21
  int32_t klass; // w1
  struct WarBoardDataEntity_o *serverData; // x8
  int32_t turn; // w1
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+0h] [xbp-40h] BYREF
  int32_t condGroup; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_42E779A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__get_Current__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__, v17, v18, v19);
    byte_42E779A = 1;
  }
  memset(&v30, 0, sizeof(v30));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  if ( !this->fields.listPrevCond )
    sub_B5D69C(Master_WarQuestSelectionMaster, v21);
  v22 = (WarBoardCommonReleaseMaster_o *)Master_WarQuestSelectionMaster;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v30,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.listPrevCond,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__);
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v30,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__);
    if ( !v23 )
      break;
    current = v30.fields.current;
    if ( !v30.fields.current )
      sub_B5D69C(v23, v24);
    if ( (HIDWORD(v30.fields.current[1].klass) & 0x80000000) != 0 )
    {
      if ( !v22 )
        sub_B5D69C(v23, v24);
      klass = (int32_t)v30.fields.current[1].klass;
      condGroup = 0;
      if ( WarBoardCommonReleaseMaster__IsOpen_23169312(v22, klass, &condGroup, v25) )
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
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v30,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__);
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
  __int64 v3; // x3
  WarBoardData_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  int v81; // w1
  int v82; // w2
  __int64 v83; // x3
  int v84; // w1
  int v85; // w2
  __int64 v86; // x3
  int v87; // w1
  int v88; // w2
  __int64 v89; // x3
  int v90; // w1
  int v91; // w2
  __int64 v92; // x3
  int v93; // w1
  int v94; // w2
  __int64 v95; // x3
  int v96; // w1
  int v97; // w2
  __int64 v98; // x3
  int v99; // w1
  int v100; // w2
  __int64 v101; // x3
  int v102; // w1
  int v103; // w2
  __int64 v104; // x3
  int v105; // w1
  int v106; // w2
  __int64 v107; // x3
  int v108; // w1
  int v109; // w2
  __int64 v110; // x3
  int v111; // w1
  int v112; // w2
  __int64 v113; // x3
  int v114; // w1
  int v115; // w2
  __int64 v116; // x3
  int v117; // w1
  int v118; // w2
  __int64 v119; // x3
  int v120; // w1
  int v121; // w2
  __int64 v122; // x3
  int v123; // w1
  int v124; // w2
  __int64 v125; // x3
  int v126; // w1
  int v127; // w2
  __int64 v128; // x3
  int v129; // w1
  int v130; // w2
  __int64 v131; // x3
  int v132; // w1
  int v133; // w2
  __int64 v134; // x3
  int v135; // w1
  int v136; // w2
  __int64 v137; // x3
  int v138; // w1
  int v139; // w2
  __int64 v140; // x3
  int v141; // w1
  int v142; // w2
  __int64 v143; // x3
  int v144; // w1
  int v145; // w2
  __int64 v146; // x3
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8
  WarBoardData_o **p_localSaveData; // x23
  struct WarBoardPieceData_SaveData_array *pieceSaves; // x21
  int max_length; // w8
  unsigned int v151; // w22
  struct System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__o *actionPointEntityDict; // x21
  int entries; // w8
  unsigned int v154; // w22
  struct WarBoardPieceData_array *pieces; // x21
  int v156; // w8
  unsigned int v157; // w22
  struct WarBoardSquareData_array *squares; // x21
  int v159; // w8
  unsigned int v160; // w22
  struct WarBoardSquareData_array *condSquares; // x21
  int v162; // w8
  unsigned int v163; // w22
  struct WarBoardDataEntity_o *serverData; // x8
  struct WarBoardData_WarBoardLocalSaveData_o *v165; // x9
  struct WarBoardDataEntity_o *v166; // x8
  struct WarBoardData_WarBoardLocalSaveData_o *v167; // x9
  struct WarBoardDataEntity_o *v168; // x8
  struct WarBoardData_WarBoardLocalSaveData_o *v169; // x9
  WarBoardData_o *v170; // x21
  struct System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__o *v171; // x8
  UnityEngine_Vector2_o *v172; // x22
  UnityEngine_Vector2_o ScrlPos; // kr00_8
  struct System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__o *v174; // x8
  WarBoardData_o *v175; // x22
  float ZoomSize; // s0
  WarBoardData_o *v177; // x20
  WarBoardData_o *v178; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v179; // x20
  Il2CppObject *current; // x22
  WarBoardEventData_SaveData_o *v181; // x21
  __int64 v182; // x0
  __int64 v183; // x1
  WarBoardData_o *v184; // x21
  System_String_array **v185; // x2
  System_String_array **v186; // x3
  System_Boolean_array **v187; // x4
  System_Int32_array **v188; // x5
  System_Int32_array *v189; // x6
  System_Int32_array *v190; // x7
  System_String_array **v191; // x2
  System_String_array **v192; // x3
  System_Boolean_array **v193; // x4
  System_Int32_array **v194; // x5
  System_Int32_array *v195; // x6
  System_Int32_array *v196; // x7
  struct System_Collections_Generic_List_WarBoardUiData__o *latestPieceActionSquareIndexes; // x1
  System_String_array **v198; // x2
  System_String_array **v199; // x3
  System_Boolean_array **v200; // x4
  System_Int32_array **v201; // x5
  System_Int32_array *v202; // x6
  System_Int32_array *v203; // x7
  System_Int32_array **latestBattlePieceUniqueIndexes; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v205; // x20
  Il2CppObject *v206; // x22
  WarBoardPrevCondData_SaveData_o *v207; // x21
  __int64 v208; // x0
  __int64 v209; // x1
  WarBoardData_o *v210; // x21
  System_String_array **v211; // x2
  System_String_array **v212; // x3
  System_Boolean_array **v213; // x4
  System_Int32_array **v214; // x5
  System_Int32_array *v215; // x6
  System_Int32_array *v216; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v217; // x20
  Il2CppObject *v218; // x22
  HoldReinforcementsData_SaveData_o *v219; // x21
  __int64 v220; // x0
  __int64 v221; // x1
  WarBoardData_o *v222; // x21
  System_String_array **v223; // x2
  System_String_array **v224; // x3
  System_Boolean_array **v225; // x4
  System_Int32_array **v226; // x5
  System_Int32_array *v227; // x6
  System_Int32_array *v228; // x7
  struct WarBoardData_WarBoardLocalSaveData_o *v229; // x20
  System_String_array **v230; // x2
  System_String_array **v231; // x3
  System_Boolean_array **v232; // x4
  System_Int32_array **v233; // x5
  System_Int32_array *v234; // x6
  System_Int32_array *v235; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v236; // x20
  Il2CppObject *v237; // x22
  WarBoardUiData_SaveData_o *v238; // x21
  __int64 v239; // x0
  __int64 v240; // x1
  WarBoardData_o *v241; // x21
  System_String_array **v242; // x2
  System_String_array **v243; // x3
  System_Boolean_array **v244; // x4
  System_Int32_array **v245; // x5
  System_Int32_array *v246; // x6
  System_Int32_array *v247; // x7
  struct WarBoardDataEntity_o *v248; // x8
  unsigned int v249; // w0
  WarBoardData_o *v250; // x21
  int v251; // w20
  System_String_array **v252; // x2
  System_String_array **v253; // x3
  System_Boolean_array **v254; // x4
  System_Int32_array **v255; // x5
  System_Int32_array *v256; // x6
  System_Int32_array *v257; // x7
  unsigned __int64 v258; // x22
  signed __int64 v259; // x24
  __int64 v260; // x25
  struct WarBoardDataEntity_o *v261; // x9
  struct WarBoardSquareIndexData_array *squareIndexInfo; // x9
  unsigned int *reinforcementsSaveList; // x27
  WarBoardSquareIndexData_o *v264; // x21
  WarBoardSquareIndexData_SaveData_o *v265; // x20
  System_String_array **v266; // x2
  System_String_array **v267; // x3
  System_Boolean_array **v268; // x4
  System_Int32_array **v269; // x5
  System_Int32_array *v270; // x6
  System_Int32_array *v271; // x7
  struct WarBoardDataEntity_o *v272; // x8
  unsigned int v273; // w0
  WarBoardData_o *v274; // x21
  int v275; // w20
  System_String_array **v276; // x2
  System_String_array **v277; // x3
  System_Boolean_array **v278; // x4
  System_Int32_array **v279; // x5
  System_Int32_array *v280; // x6
  System_Int32_array *v281; // x7
  System_String_array **v282; // x2
  System_String_array **v283; // x3
  System_Boolean_array **v284; // x4
  System_Int32_array **v285; // x5
  System_Int32_array *v286; // x6
  System_Int32_array *v287; // x7
  unsigned __int64 v288; // x22
  signed __int64 v289; // x24
  __int64 v290; // x25
  struct WarBoardDataEntity_o *v291; // x8
  struct WarBoardBossBattleData_array *bossBattleInfo; // x8
  struct System_Collections_Generic_List_int__o *playedStageReinforcementsList; // x27
  WarBoardBossBattleData_o *v294; // x21
  WarBoardBossBattleData_SaveData_o *v295; // x20
  System_String_array **v296; // x2
  System_String_array **v297; // x3
  System_Boolean_array **v298; // x4
  System_Int32_array **v299; // x5
  System_Int32_array *v300; // x6
  System_Int32_array *v301; // x7
  struct System_Collections_Generic_List_WarBoardPrevCondData__o *bgAnimationInfo_k__BackingField; // x1
  struct WarBoardData_WarBoardLocalSaveData_o *v303; // x8
  struct WarBoardData_WarBoardLocalSaveData_o *v304; // x8
  struct WarBoardData_WarBoardLocalSaveData_o *v305; // x8
  MiniMessagePack_MiniMessagePacker_o *v306; // x19
  System_Byte_array *v307; // x19
  WarBoardData_c *v308; // x8
  System_String_o *WARBOARDDATA_SAVEDATA_KEY; // x20
  System_String_o *v310; // x19
  __int64 v311; // x0
  __int64 v312; // x0
  _BYTE v313[40]; // [xsp+0h] [xbp-100h] BYREF
  int v314; // [xsp+28h] [xbp-D8h]
  System_Collections_Generic_List_Enumerator_T__o v315; // [xsp+30h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v316; // [xsp+50h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v317; // [xsp+70h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v318; // [xsp+90h] [xbp-70h] BYREF

  v5 = this;
  if ( (byte_42E7753 & 1) == 0 )
  {
    sub_B5D5C4(&System_Convert_TypeInfo, onBoardSkillUpdate, (_DWORD)method, v3);
    sub_B5D5C4(&EncryptedPlayerPrefs_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__Dispose__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__MoveNext__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__get_Current__, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__get_Current__, v42, v43, v44);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__get_Current__, v45, v46, v47);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__get_Current__, v48, v49, v50);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardUiData_SaveData__Add__, v51, v52, v53);
    sub_B5D5C4(&Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__Add__, v54, v55, v56);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__Add__, v57, v58, v59);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardEventData_SaveData__Add__, v60, v61, v62);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__, v63, v64, v65);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__, v66, v67, v68);
    sub_B5D5C4(&Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__, v69, v70, v71);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardEventData__GetEnumerator__, v72, v73, v74);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__ToArray__, v75, v76, v77);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardEventData_SaveData__ToArray__, v78, v79, v80);
    sub_B5D5C4(&Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__ToArray__, v81, v82, v83);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v84, v85, v86);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardUiData_SaveData__ToArray__, v87, v88, v89);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData___ctor__, v90, v91, v92);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardUiData_SaveData___ctor__, v93, v94, v95);
    sub_B5D5C4(&Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData___ctor__, v96, v97, v98);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardEventData_SaveData___ctor__, v99, v100, v101);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardEventData_SaveData__TypeInfo, v102, v103, v104);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardPrevCondData_SaveData__TypeInfo, v105, v106, v107);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardUiData_SaveData__TypeInfo, v108, v109, v110);
    sub_B5D5C4(&System_Collections_Generic_List_HoldReinforcementsData_SaveData__TypeInfo, v111, v112, v113);
    sub_B5D5C4(&MiniMessagePack_MiniMessagePacker_TypeInfo, v114, v115, v116);
    sub_B5D5C4(&WarBoardSquareIndexData_SaveData___TypeInfo, v117, v118, v119);
    sub_B5D5C4(&WarBoardBossBattleData_SaveData___TypeInfo, v120, v121, v122);
    sub_B5D5C4(&WarBoardUiData_SaveData_TypeInfo, v123, v124, v125);
    sub_B5D5C4(&WarBoardEventData_SaveData_TypeInfo, v126, v127, v128);
    sub_B5D5C4(&WarBoardSquareIndexData_SaveData_TypeInfo, v129, v130, v131);
    sub_B5D5C4(&WarBoardPrevCondData_SaveData_TypeInfo, v132, v133, v134);
    sub_B5D5C4(&HoldReinforcementsData_SaveData_TypeInfo, v135, v136, v137);
    sub_B5D5C4(&WarBoardBossBattleData_SaveData_TypeInfo, v138, v139, v140);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v141, v142, v143);
    this = (WarBoardData_o *)sub_B5D5C4(&WarBoardData_TypeInfo, v144, v145, v146);
    byte_42E7753 = 1;
  }
  memset(&v318, 0, sizeof(v318));
  memset(&v317, 0, sizeof(v317));
  memset(&v316, 0, sizeof(v316));
  memset(&v315, 0, sizeof(v315));
  v314 = 0;
  p_localSaveData = (WarBoardData_o **)&v5->fields.localSaveData;
  localSaveData = v5->fields.localSaveData;
  if ( !localSaveData )
    goto LABEL_143;
  pieceSaves = localSaveData->fields.pieceSaves;
  if ( !pieceSaves )
    goto LABEL_143;
  max_length = pieceSaves->max_length;
  if ( max_length >= 1 )
  {
    v151 = 0;
    while ( v151 < max_length )
    {
      this = (WarBoardData_o *)pieceSaves->m_Items[v151];
      if ( !this )
        goto LABEL_143;
      WarBoardPieceData_SaveData__Save((WarBoardPieceData_SaveData_o *)this, 0LL);
      max_length = pieceSaves->max_length;
      if ( (int)++v151 >= max_length )
        goto LABEL_10;
    }
LABEL_144:
    v311 = sub_B5D6C8(this);
    sub_B5D668(v311, 0LL);
  }
LABEL_10:
  if ( !*p_localSaveData )
    goto LABEL_143;
  actionPointEntityDict = (*p_localSaveData)->fields.actionPointEntityDict;
  if ( !actionPointEntityDict )
    goto LABEL_143;
  entries = (int)actionPointEntityDict->fields.entries;
  if ( entries >= 1 )
  {
    v154 = 0;
    while ( v154 < entries )
    {
      this = (WarBoardData_o *)*((_QWORD *)&actionPointEntityDict->fields.count + (int)v154);
      if ( !this )
        goto LABEL_143;
      WarBoardItemData_SaveData__Save((WarBoardItemData_SaveData_o *)this, 0LL);
      entries = (int)actionPointEntityDict->fields.entries;
      if ( (int)++v154 >= entries )
        goto LABEL_17;
    }
    goto LABEL_144;
  }
LABEL_17:
  if ( !*p_localSaveData )
    goto LABEL_143;
  pieces = (*p_localSaveData)->fields.pieces;
  if ( !pieces )
    goto LABEL_143;
  v156 = pieces->max_length;
  if ( v156 >= 1 )
  {
    v157 = 0;
    while ( v157 < v156 )
    {
      this = (WarBoardData_o *)pieces->m_Items[v157];
      if ( !this )
        goto LABEL_143;
      WarBoardTreasureData_SaveData__Save((WarBoardTreasureData_SaveData_o *)this, 0LL);
      v156 = pieces->max_length;
      if ( (int)++v157 >= v156 )
        goto LABEL_24;
    }
    goto LABEL_144;
  }
LABEL_24:
  if ( !*p_localSaveData )
    goto LABEL_143;
  squares = (*p_localSaveData)->fields.squares;
  if ( !squares )
    goto LABEL_143;
  v159 = squares->max_length;
  if ( v159 >= 1 )
  {
    v160 = 0;
    while ( v160 < v159 )
    {
      this = (WarBoardData_o *)squares->m_Items[v160];
      if ( !this )
        goto LABEL_143;
      WarBoardWallData_SaveData__Save((WarBoardWallData_SaveData_o *)this, 0LL);
      v159 = squares->max_length;
      if ( (int)++v160 >= v159 )
        goto LABEL_31;
    }
    goto LABEL_144;
  }
LABEL_31:
  if ( !*p_localSaveData )
    goto LABEL_143;
  condSquares = (*p_localSaveData)->fields.condSquares;
  if ( !condSquares )
    goto LABEL_143;
  v162 = condSquares->max_length;
  if ( v162 >= 1 )
  {
    v163 = 0;
    while ( v163 < v162 )
    {
      this = (WarBoardData_o *)condSquares->m_Items[v163];
      if ( !this )
        goto LABEL_143;
      WarBoardSquareData_SaveData__Save((WarBoardSquareData_SaveData_o *)this, 0LL);
      v162 = condSquares->max_length;
      if ( (int)++v163 >= v162 )
        goto LABEL_38;
    }
    goto LABEL_144;
  }
LABEL_38:
  this = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  serverData = v5->fields.serverData;
  if ( !serverData )
    goto LABEL_143;
  v165 = v5->fields.localSaveData;
  if ( !v165 )
    goto LABEL_143;
  v165->fields.turn = serverData->fields.turn;
  v166 = v5->fields.serverData;
  if ( !v166 )
    goto LABEL_143;
  v167 = v5->fields.localSaveData;
  if ( !v167 )
    goto LABEL_143;
  v167->fields.turnForceId = v166->fields.turnForceId;
  v168 = v5->fields.serverData;
  if ( !v168 )
    goto LABEL_143;
  v169 = v5->fields.localSaveData;
  if ( !v169 )
    goto LABEL_143;
  v170 = this;
  v169->fields.turnGroupId = v168->fields.turnGroupId;
  if ( !this )
    goto LABEL_143;
  v171 = this->fields.actionPointEntityDict;
  if ( !v171 )
    goto LABEL_143;
  this = (WarBoardData_o *)v171->fields.values;
  if ( !this )
    goto LABEL_143;
  v172 = (UnityEngine_Vector2_o *)*p_localSaveData;
  ScrlPos = MapScroll__GetScrlPos((MapScroll_o *)this, 0LL);
  if ( !v172 )
    goto LABEL_143;
  v172[9] = ScrlPos;
  v174 = v170->fields.actionPointEntityDict;
  if ( !v174 )
    goto LABEL_143;
  this = (WarBoardData_o *)v174->fields._syncRoot;
  if ( !this )
    goto LABEL_143;
  v175 = *p_localSaveData;
  ZoomSize = MapZoom__GetZoomSize((MapZoom_o *)this, 0LL);
  if ( !v175 )
    goto LABEL_143;
  *(float *)&v175->fields.treasures = ZoomSize;
  if ( !*p_localSaveData )
    goto LABEL_143;
  HIDWORD((*p_localSaveData)->fields.treasures) = HIDWORD(v170[3].fields.stageNpcMaster);
  if ( !*p_localSaveData )
    goto LABEL_143;
  BYTE4((*p_localSaveData)->fields.effects) = onBoardSkillUpdate;
  v177 = *p_localSaveData;
  this = (WarBoardData_o *)BattleRandom__GetLogicCount(0LL);
  if ( !v177 )
    goto LABEL_143;
  LODWORD(v177->fields.serverData) = (_DWORD)this;
  v178 = *p_localSaveData;
  this = (WarBoardData_o *)BattleRandom__GetGutsCount(0LL);
  if ( !v178 )
    goto LABEL_143;
  HIDWORD(v178->fields.serverData) = (_DWORD)this;
  if ( !*p_localSaveData )
    goto LABEL_143;
  LOBYTE((*p_localSaveData)->fields._bgAnimationInfo_k__BackingField) = v5->fields.isPlayedHalfDeadMessage;
  v179 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardEventData_SaveData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v179,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardEventData_SaveData___ctor__);
  this = (WarBoardData_o *)v5->fields.listEvent;
  if ( !this )
    goto LABEL_143;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v313,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_WarBoardEventData__GetEnumerator__);
  v318 = *(System_Collections_Generic_List_Enumerator_T__o *)v313;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v318,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__MoveNext__) )
  {
    current = v318.fields.current;
    v181 = (WarBoardEventData_SaveData_o *)sub_B5D694(WarBoardEventData_SaveData_TypeInfo);
    WarBoardEventData_SaveData___ctor_23084988(v181, (WarBoardEventData_o *)current, 0LL);
    if ( !v179 )
      sub_B5D69C(v182, v183);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v179,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v181,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardEventData_SaveData__Add__);
  }
  *(_DWORD *)&v313[4 * v314++ + 24] = 482;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v318,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__Dispose__);
  if ( v314 && *(_DWORD *)&v313[4 * v314 + 20] == 482 )
    --v314;
  if ( !v179 )
    goto LABEL_143;
  v184 = *p_localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v179,
                             (const MethodInfo_305910C *)Method_System_Collections_Generic_List_WarBoardEventData_SaveData__ToArray__);
  if ( !v184 )
    goto LABEL_143;
  v184->fields.localSaveData = (struct WarBoardData_WarBoardLocalSaveData_o *)this;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v184->fields.localSaveData,
    (System_Int32_array **)this,
    v185,
    v186,
    v187,
    v188,
    v189,
    v190);
  if ( !*p_localSaveData )
    goto LABEL_143;
  (*p_localSaveData)->fields._maxForceId_k__BackingField = v5->fields.winCondId;
  this = (WarBoardData_o *)v5->fields.localSaveData;
  if ( !this )
    goto LABEL_143;
  latestPieceActionSquareIndexes = (struct System_Collections_Generic_List_WarBoardUiData__o *)v5->fields.latestPieceActionSquareIndexes;
  this->fields.listUiData = latestPieceActionSquareIndexes;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.listUiData,
    (System_Int32_array **)latestPieceActionSquareIndexes,
    v191,
    v192,
    v193,
    v194,
    v195,
    v196);
  this = (WarBoardData_o *)v5->fields.localSaveData;
  if ( !this )
    goto LABEL_143;
  latestBattlePieceUniqueIndexes = (System_Int32_array **)v5->fields.latestBattlePieceUniqueIndexes;
  *(_QWORD *)&this->fields.isPlayedHalfDeadMessage = latestBattlePieceUniqueIndexes;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.isPlayedHalfDeadMessage,
    latestBattlePieceUniqueIndexes,
    v198,
    v199,
    v200,
    v201,
    v202,
    v203);
  v205 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardPrevCondData_SaveData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v205,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData___ctor__);
  this = (WarBoardData_o *)v5->fields.listPrevCond;
  if ( !this )
    goto LABEL_143;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v313,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__);
  v317 = *(System_Collections_Generic_List_Enumerator_T__o *)v313;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v317,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__) )
  {
    v206 = v317.fields.current;
    v207 = (WarBoardPrevCondData_SaveData_o *)sub_B5D694(WarBoardPrevCondData_SaveData_TypeInfo);
    WarBoardPrevCondData_SaveData___ctor_20360240(v207, (WarBoardPrevCondData_o *)v206, 0LL);
    if ( !v205 )
      sub_B5D69C(v208, v209);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v205,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v207,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__Add__);
  }
  *(_DWORD *)&v313[4 * v314++ + 24] = 618;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v317,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__);
  if ( v314 && *(_DWORD *)&v313[4 * v314 + 20] == 618 )
    --v314;
  if ( !v205 )
    goto LABEL_143;
  v210 = *p_localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v205,
                             (const MethodInfo_305910C *)Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__ToArray__);
  if ( !v210 )
    goto LABEL_143;
  v210->fields.listEvent = (struct System_Collections_Generic_List_WarBoardEventData__o *)this;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v210->fields.listEvent,
    (System_Int32_array **)this,
    v211,
    v212,
    v213,
    v214,
    v215,
    v216);
  v217 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_HoldReinforcementsData_SaveData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v217,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData___ctor__);
  this = (WarBoardData_o *)v5->fields.reinforcementsSaveList;
  if ( !this )
    goto LABEL_143;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v313,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
  v316 = *(System_Collections_Generic_List_Enumerator_T__o *)v313;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v316,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__) )
  {
    v218 = v316.fields.current;
    v219 = (HoldReinforcementsData_SaveData_o *)sub_B5D694(HoldReinforcementsData_SaveData_TypeInfo);
    HoldReinforcementsData_SaveData___ctor_19313908(v219, (HoldReinforcementsData_o *)v218, 0LL);
    if ( !v217 )
      sub_B5D69C(v220, v221);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v217,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v219,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__Add__);
  }
  *(_DWORD *)&v313[4 * v314++ + 24] = 703;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v316,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
  if ( v314 && *(_DWORD *)&v313[4 * v314 + 20] == 703 )
    --v314;
  if ( !v217 )
    goto LABEL_143;
  v222 = *p_localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v217,
                             (const MethodInfo_305910C *)Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__ToArray__);
  if ( !v222 )
    goto LABEL_143;
  *(_QWORD *)&v222->fields.winCondId = this;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v222->fields.winCondId,
    (System_Int32_array **)this,
    v223,
    v224,
    v225,
    v226,
    v227,
    v228);
  this = (WarBoardData_o *)v5->fields.playedStageReinforcementsList;
  if ( !this )
    goto LABEL_143;
  v229 = v5->fields.localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_int___ToArray(
                             (System_Collections_Generic_List_int__o *)this,
                             (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v229 )
    goto LABEL_143;
  v229->fields.playedReinforcements = (struct System_Int32_array *)this;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v229->fields.playedReinforcements,
    (System_Int32_array **)this,
    v230,
    v231,
    v232,
    v233,
    v234,
    v235);
  v236 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardUiData_SaveData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v236,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardUiData_SaveData___ctor__);
  this = (WarBoardData_o *)v5->fields.listUiData;
  if ( !this )
    goto LABEL_143;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v313,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__);
  v315 = *(System_Collections_Generic_List_Enumerator_T__o *)v313;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v315,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__) )
  {
    v237 = v315.fields.current;
    v238 = (WarBoardUiData_SaveData_o *)sub_B5D694(WarBoardUiData_SaveData_TypeInfo);
    WarBoardUiData_SaveData___ctor_20371368(v238, (WarBoardUiData_o *)v237, 0LL);
    if ( !v236 )
      sub_B5D69C(v239, v240);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v236,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v238,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardUiData_SaveData__Add__);
  }
  *(_DWORD *)&v313[4 * v314++ + 24] = 812;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v315,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__);
  if ( v314 && *(_DWORD *)&v313[4 * v314 + 20] == 812 )
    --v314;
  if ( !v236 )
    goto LABEL_143;
  v241 = *p_localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v236,
                             (const MethodInfo_305910C *)Method_System_Collections_Generic_List_WarBoardUiData_SaveData__ToArray__);
  if ( !v241
    || (v241->fields.latestBattlePieceUniqueIndexes = (struct System_UInt32_array *)this,
        sub_B5D560(
          (BattleServantConfConponent_o *)&v241->fields.latestBattlePieceUniqueIndexes,
          (System_Int32_array **)this,
          v242,
          v243,
          v244,
          v245,
          v246,
          v247),
        (v248 = v5->fields.serverData) == 0LL)
    || (v249 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v248->fields.squareIndexInfo,
                 (const MethodInfo_1CA7CA4 *)Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___),
        v250 = *p_localSaveData,
        v251 = v249,
        this = (WarBoardData_o *)sub_B5D5DC(WarBoardSquareIndexData_SaveData___TypeInfo, v249),
        !v250) )
  {
LABEL_143:
    sub_B5D69C(this, onBoardSkillUpdate);
  }
  v250->fields.reinforcementsSaveList = (struct System_Collections_Generic_List_HoldReinforcementsData__o *)this;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v250->fields.reinforcementsSaveList,
    (System_Int32_array **)this,
    v252,
    v253,
    v254,
    v255,
    v256,
    v257);
  if ( v251 >= 1 )
  {
    v258 = 0LL;
    v259 = v251;
    v260 = 8LL;
    while ( *p_localSaveData )
    {
      v261 = v5->fields.serverData;
      if ( !v261 )
        break;
      squareIndexInfo = v261->fields.squareIndexInfo;
      if ( !squareIndexInfo )
        break;
      if ( v258 >= squareIndexInfo->max_length )
        goto LABEL_144;
      reinforcementsSaveList = (unsigned int *)(*p_localSaveData)->fields.reinforcementsSaveList;
      v264 = *(WarBoardSquareIndexData_o **)((char *)&squareIndexInfo->obj.klass + v260 * 4);
      v265 = (WarBoardSquareIndexData_SaveData_o *)sub_B5D694(WarBoardSquareIndexData_SaveData_TypeInfo);
      WarBoardSquareIndexData_SaveData___ctor_20366340(v265, v264, 0LL);
      if ( !reinforcementsSaveList )
        break;
      if ( v265 )
      {
        this = (WarBoardData_o *)sub_B5D684(v265, *(_QWORD *)(*(_QWORD *)reinforcementsSaveList + 64LL));
        if ( !this )
        {
LABEL_149:
          v312 = sub_B5D6BC();
          sub_B5D668(v312, 0LL);
        }
      }
      if ( v258 >= reinforcementsSaveList[6] )
        goto LABEL_144;
      *(_QWORD *)&reinforcementsSaveList[v260] = v265;
      sub_B5D560(
        (BattleServantConfConponent_o *)&reinforcementsSaveList[v260],
        (System_Int32_array **)v265,
        v266,
        v267,
        v268,
        v269,
        v270,
        v271);
      ++v258;
      v260 += 2LL;
      if ( (__int64)v258 >= v259 )
        goto LABEL_114;
    }
    goto LABEL_143;
  }
LABEL_114:
  v272 = v5->fields.serverData;
  if ( !v272 )
    goto LABEL_143;
  v273 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v272->fields.bossBattleInfo,
           (const MethodInfo_1CA7CA4 *)Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___);
  v274 = *p_localSaveData;
  v275 = v273;
  this = (WarBoardData_o *)sub_B5D5DC(WarBoardBossBattleData_SaveData___TypeInfo, v273);
  if ( !v274 )
    goto LABEL_143;
  v274->fields.playedStageReinforcementsList = (struct System_Collections_Generic_List_int__o *)this;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v274->fields.playedStageReinforcementsList,
    (System_Int32_array **)this,
    v276,
    v277,
    v278,
    v279,
    v280,
    v281);
  this = *p_localSaveData;
  if ( v275 >= 1 )
  {
    v288 = 0LL;
    v289 = v275;
    v290 = 32LL;
    while ( this )
    {
      v291 = v5->fields.serverData;
      if ( !v291 )
        break;
      bossBattleInfo = v291->fields.bossBattleInfo;
      if ( !bossBattleInfo )
        break;
      if ( v288 >= bossBattleInfo->max_length )
        goto LABEL_144;
      playedStageReinforcementsList = this->fields.playedStageReinforcementsList;
      v294 = *(WarBoardBossBattleData_o **)((char *)&bossBattleInfo->obj.klass + v290);
      v295 = (WarBoardBossBattleData_SaveData_o *)sub_B5D694(WarBoardBossBattleData_SaveData_TypeInfo);
      WarBoardBossBattleData_SaveData___ctor_22451244(v295, v294, 0LL);
      if ( !playedStageReinforcementsList )
        break;
      if ( v295 )
      {
        this = (WarBoardData_o *)sub_B5D684(v295, playedStageReinforcementsList->klass->_1.element_class);
        if ( !this )
          goto LABEL_149;
      }
      if ( v288 >= (unsigned int)playedStageReinforcementsList->fields._size )
        goto LABEL_144;
      *(System_Collections_Generic_List_int__c **)((char *)&playedStageReinforcementsList->klass + v290) = (System_Collections_Generic_List_int__c *)v295;
      sub_B5D560(
        (BattleServantConfConponent_o *)((char *)playedStageReinforcementsList + v290),
        (System_Int32_array **)v295,
        v296,
        v297,
        v298,
        v299,
        v300,
        v301);
      this = *p_localSaveData;
      ++v288;
      v290 += 8LL;
      if ( (__int64)v288 >= v289 )
        goto LABEL_127;
    }
    goto LABEL_143;
  }
LABEL_127:
  if ( !this )
    goto LABEL_143;
  bgAnimationInfo_k__BackingField = (struct System_Collections_Generic_List_WarBoardPrevCondData__o *)v5->fields._bgAnimationInfo_k__BackingField;
  this->fields.listPrevCond = bgAnimationInfo_k__BackingField;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.listPrevCond,
    (System_Int32_array **)bgAnimationInfo_k__BackingField,
    v282,
    v283,
    v284,
    v285,
    v286,
    v287);
  if ( !*p_localSaveData )
    goto LABEL_143;
  (*p_localSaveData)->fields._CurrentMemberCount_k__BackingField = v5->fields._ContinueConsumeType_k__BackingField;
  v303 = v5->fields.localSaveData;
  if ( !v303 )
    goto LABEL_143;
  v303->fields.isContinue = v5->fields._IsContinue_k__BackingField;
  v304 = v5->fields.localSaveData;
  if ( !v304 )
    goto LABEL_143;
  v304->fields.isNextTurn = v5->fields._IsNextTurn_k__BackingField;
  v305 = v5->fields.localSaveData;
  if ( !v305 )
    goto LABEL_143;
  v305->fields.localSaveTiming = v5->fields.localSaveTiming;
  v306 = (MiniMessagePack_MiniMessagePacker_o *)sub_B5D694(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v306, 0LL);
  if ( !v306 )
    goto LABEL_143;
  v307 = MiniMessagePack_MiniMessagePacker__PackClass(v306, (Il2CppObject *)*p_localSaveData, 0LL);
  v308 = WarBoardData_TypeInfo;
  if ( (BYTE3(WarBoardData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    v308 = WarBoardData_TypeInfo;
  }
  WARBOARDDATA_SAVEDATA_KEY = v308->static_fields->WARBOARDDATA_SAVEDATA_KEY;
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v310 = System_Convert__ToBase64String(v307, 0LL);
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  EncryptedPlayerPrefs__SetString(WARBOARDDATA_SAVEDATA_KEY, v310, 0LL);
}


void __fastcall WarBoardData__SaveHoldReinforcements(
        WarBoardData_o *this,
        int32_t stageReinforcementsId,
        int32_t index,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  WarBoardData___c__DisplayClass187_0_o *v37; // x20
  struct System_Collections_Generic_List_HoldReinforcementsData__o *v38; // x0
  __int64 v39; // x1
  System_Collections_Generic_List_T__o *reinforcementsSaveList; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v41; // x22
  _BOOL8 v42; // x0
  __int64 v43; // x1
  int32_t v44; // w21
  int32_t v45; // w22
  HoldReinforcementsData_o *v46; // x20
  System_Collections_Generic_List_Enumerator_T__o v47; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E779D & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_HoldReinforcementsData___, stageReinforcementsId, index, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__get_Current__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Func_HoldReinforcementsData__bool___ctor__, v16, v17, v18);
    sub_B5D5C4(&System_Func_HoldReinforcementsData__bool__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&HoldReinforcementsData_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_HoldReinforcementsData__Add__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__, v28, v29, v30);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass187_0__SaveHoldReinforcements_b__0__, v31, v32, v33);
    sub_B5D5C4(&WarBoardData___c__DisplayClass187_0_TypeInfo, v34, v35, v36);
    byte_42E779D = 1;
  }
  memset(&v47, 0, sizeof(v47));
  v37 = (WarBoardData___c__DisplayClass187_0_o *)sub_B5D694(WarBoardData___c__DisplayClass187_0_TypeInfo);
  WarBoardData___c__DisplayClass187_0___ctor(v37, 0LL);
  if ( !v37 )
    goto LABEL_17;
  v37->fields.stageReinforcementsId = stageReinforcementsId;
  v37->fields.index = index;
  reinforcementsSaveList = (System_Collections_Generic_List_T__o *)this->fields.reinforcementsSaveList;
  v41 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_HoldReinforcementsData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v41,
    (Il2CppObject *)v37,
    Method_WarBoardData___c__DisplayClass187_0__SaveHoldReinforcements_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_HoldReinforcementsData__bool___ctor__);
  if ( !BasicHelper__Any_WarBoardData_SquareRangeSearch_(
          reinforcementsSaveList,
          (System_Func_T__bool__o *)v41,
          (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_HoldReinforcementsData___) )
  {
    v44 = v37->fields.stageReinforcementsId;
    v45 = v37->fields.index;
    v46 = (HoldReinforcementsData_o *)sub_B5D694(HoldReinforcementsData_TypeInfo);
    HoldReinforcementsData___ctor_28462692(v46, v44, v45, 1, 0LL);
    v38 = this->fields.reinforcementsSaveList;
    if ( v38 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v38,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v46,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_HoldReinforcementsData__Add__);
      return;
    }
LABEL_17:
    sub_B5D69C(v38, v39);
  }
  v38 = this->fields.reinforcementsSaveList;
  if ( !v38 )
    goto LABEL_17;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v47,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v38,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
  while ( 1 )
  {
    v42 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v47,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__);
    if ( !v42 )
      break;
    if ( !v47.fields.current )
      sub_B5D69C(v42, v43);
    if ( LODWORD(v47.fields.current[1].klass) == v37->fields.stageReinforcementsId
      && HIDWORD(v47.fields.current[1].klass) == v37->fields.index )
    {
      HoldReinforcementsData__IncreaseHoldNum((HoldReinforcementsData_o *)v47.fields.current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v47,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardData__SavePlayReinforcements(
        WarBoardData_o *this,
        int32_t stageReinforcementsId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_List_int__o *playedStageReinforcementsList; // x0

  if ( (byte_42E779B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, stageReinforcementsId, (_DWORD)method, v3);
    byte_42E779B = 1;
  }
  playedStageReinforcementsList = this->fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList )
    sub_B5D69C(0LL, *(_QWORD *)&stageReinforcementsId);
  System_Collections_Generic_List_int___Add(
    playedStageReinforcementsList,
    stageReinforcementsId,
    (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
}


void __fastcall WarBoardData__SearchInRangeSquares(
        WarBoardData_o *this,
        int32_t start,
        int32_t range,
        System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o **rangeSearches,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  WarBoardData___c__DisplayClass125_0_o *v47; // x21
  WarBoardData_SquareRangeSearch_o *v48; // x0
  __int64 v49; // x1
  const MethodInfo *v50; // x2
  WarBoardSquareData_o *Square; // x0
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *v52; // x24
  WarBoardSquareData_o *v53; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v54; // x24
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v61; // x25
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *v62; // x24
  int32_t v63; // w26
  WarBoardData_SquareRangeSearch_o *v64; // x25
  struct System_Int32_array *linkedSquares; // x8
  __int64 v66; // x8
  __int64 v67; // x20
  __int64 i; // x27
  __int64 v69; // x24
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  __int64 v76; // x23
  struct System_Int32_array *v77; // x8
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *v78; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v79; // x26
  const MethodInfo *v80; // x4
  System_Collections_Generic_List_T__o *v81; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v82; // x26
  struct System_Int32_array *v83; // x8
  __int64 v84; // x8
  __int64 v85; // x0

  if ( (byte_42E7774 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_WarBoardData_SquareRangeSearch___, start, range, rangeSearches);
    sub_B5D5C4(&Method_System_Linq_Enumerable_All_WarBoardData_SquareRangeSearch___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardData_SquareRangeSearch___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Func_WarBoardData_SquareRangeSearch__bool___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch__Add__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch___ctor__, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardData_SquareRangeSearch__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&WarBoardData_SquareRangeSearch_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass125_0__SearchInRangeSquares_b__0__, v32, v33, v34);
    sub_B5D5C4(&WarBoardData___c__DisplayClass125_0_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__1__, v38, v39, v40);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__2__, v41, v42, v43);
    sub_B5D5C4(&WarBoardData___c__DisplayClass125_1_TypeInfo, v44, v45, v46);
    byte_42E7774 = 1;
  }
  v47 = (WarBoardData___c__DisplayClass125_0_o *)sub_B5D694(WarBoardData___c__DisplayClass125_0_TypeInfo);
  WarBoardData___c__DisplayClass125_0___ctor(v47, 0LL);
  if ( !v47 )
    goto LABEL_26;
  v47->fields.start = start;
  Square = WarBoardData__GetSquare(this, start, v50);
  if ( Square )
  {
    v52 = *rangeSearches;
    v53 = Square;
    if ( !*rangeSearches )
    {
      v54 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardData_SquareRangeSearch__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v54,
        (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch___ctor__);
      *rangeSearches = (System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *)v54;
      sub_B5D560(
        (BattleServantConfConponent_o *)rangeSearches,
        (System_Int32_array **)v54,
        v55,
        v56,
        v57,
        v58,
        v59,
        v60);
      v52 = *rangeSearches;
    }
    v61 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v61,
      (Il2CppObject *)v47,
      Method_WarBoardData___c__DisplayClass125_0__SearchInRangeSquares_b__0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardData_SquareRangeSearch__bool___ctor__);
    v48 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v52,
            (System_Func_TSource__bool__o *)v61,
            (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardData_SquareRangeSearch___);
    if ( v48 )
    {
      v48->fields.range = range;
    }
    else
    {
      v62 = *rangeSearches;
      v63 = v47->fields.start;
      v64 = (WarBoardData_SquareRangeSearch_o *)sub_B5D694(WarBoardData_SquareRangeSearch_TypeInfo);
      WarBoardData_SquareRangeSearch___ctor(v64, v63, range, 0LL);
      if ( !v62 )
        goto LABEL_26;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v62,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v64,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch__Add__);
    }
    v47->fields.nextRange = range - 1;
    if ( range - 1 >= 0 )
    {
      linkedSquares = v53->fields.linkedSquares;
      if ( !linkedSquares )
        goto LABEL_26;
      v66 = *(_QWORD *)&linkedSquares->max_length;
      if ( (int)v66 >= 1 )
      {
        v67 = (int)v66;
        for ( i = 8LL; ; ++i )
        {
          v69 = sub_B5D694(WarBoardData___c__DisplayClass125_1_TypeInfo);
          WarBoardData___c__DisplayClass125_1___ctor((WarBoardData___c__DisplayClass125_1_o *)v69, 0LL);
          if ( !v69 )
            break;
          *(_QWORD *)(v69 + 24) = v47;
          v76 = v69 + 24;
          sub_B5D560(
            (BattleServantConfConponent_o *)(v69 + 24),
            (System_Int32_array **)v47,
            v70,
            v71,
            v72,
            v73,
            v74,
            v75);
          v77 = v53->fields.linkedSquares;
          if ( !v77 )
            break;
          if ( i - 8 >= (unsigned __int64)v77->max_length )
            goto LABEL_27;
          *(_DWORD *)(v69 + 16) = *((_DWORD *)&v77->obj.klass + i);
          v78 = *rangeSearches;
          v79 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v79,
            (Il2CppObject *)v69,
            Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__1__,
            (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardData_SquareRangeSearch__bool___ctor__);
          v48 = (WarBoardData_SquareRangeSearch_o *)System_Linq_Enumerable__All_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                      (System_Collections_Generic_IEnumerable_TSource__o *)v78,
                                                      (System_Func_TSource__bool__o *)v79,
                                                      (const MethodInfo_1C97E70 *)Method_System_Linq_Enumerable_All_WarBoardData_SquareRangeSearch___);
          if ( ((unsigned __int8)v48 & 1) != 0
            || (v81 = (System_Collections_Generic_List_T__o *)*rangeSearches,
                v82 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo),
                System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                  v82,
                  (Il2CppObject *)v69,
                  Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__2__,
                  (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardData_SquareRangeSearch__bool___ctor__),
                v48 = (WarBoardData_SquareRangeSearch_o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                                            v81,
                                                            (System_Func_T__bool__o *)v82,
                                                            (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_WarBoardData_SquareRangeSearch___),
                ((unsigned __int8)v48 & 1) != 0) )
          {
            v83 = v53->fields.linkedSquares;
            if ( !v83 )
              break;
            if ( i - 8 >= (unsigned __int64)v83->max_length )
            {
LABEL_27:
              v85 = sub_B5D6C8(v48);
              sub_B5D668(v85, 0LL);
            }
            if ( !*(_QWORD *)v76 )
              break;
            WarBoardData__SearchInRangeSquares(
              this,
              *((_DWORD *)&v83->obj.klass + i),
              *(_DWORD *)(*(_QWORD *)v76 + 20LL),
              rangeSearches,
              v80);
          }
          v84 = i - 7;
          if ( v84 >= v67 )
            return;
        }
LABEL_26:
        sub_B5D69C(v48, v49);
      }
    }
  }
}


int32_t __fastcall WarBoardData__SearchNearestEmptySquare(
        WarBoardData_o *this,
        int32_t destination,
        int32_t current,
        System_Func_WarBoardPieceData__bool__o *checkReplaceFunc,
        const MethodInfo *method)
{
  int32_t v7; // w22
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  System_Collections_Generic_Queue_int__o *v39; // x21
  WarBoardPieceData_o *Piece_23181536; // x0
  __int64 v41; // x1
  System_Collections_Generic_HashSet_int__o *v42; // x23
  const MethodInfo *v43; // x2
  WarBoardSquareData_o *Square; // x0
  const MethodInfo *v45; // x2
  WarBoardSquareData_o *v46; // x24
  WarBoardPieceData_o *v47; // x25
  struct System_Int32_array *linkedSquares; // x24
  __int64 v49; // x8
  unsigned __int64 v50; // x25
  int32_t v51; // w22
  __int64 v53; // x0

  v7 = destination;
  if ( (byte_42E7775 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Func_WarBoardPieceData__bool__Invoke__, destination, current, checkReplaceFunc);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Contains__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_Queue_int__Contains__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_Queue_int__Dequeue__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_Queue_int__Enqueue__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_Queue_int___ctor___68768104, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_Queue_int__get_Count__, v33, v34, v35);
    sub_B5D5C4(&System_Collections_Generic_Queue_int__TypeInfo, v36, v37, v38);
    byte_42E7775 = 1;
  }
  if ( v7 != current )
  {
    v39 = (System_Collections_Generic_Queue_int__o *)sub_B5D694(System_Collections_Generic_Queue_int__TypeInfo);
    System_Collections_Generic_Queue_int____ctor(
      v39,
      (const MethodInfo_2B9C704 *)Method_System_Collections_Generic_Queue_int___ctor___68768104);
    if ( !v39 )
LABEL_24:
      sub_B5D69C(Piece_23181536, v41);
    System_Collections_Generic_Queue_int___Enqueue(
      v39,
      v7,
      (const MethodInfo_2B9CCA4 *)Method_System_Collections_Generic_Queue_int__Enqueue__);
    v42 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v42,
      (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
    if ( v39->fields._size >= 1 )
    {
      do
      {
        v7 = System_Collections_Generic_Queue_int___Dequeue(
               v39,
               (const MethodInfo_2B9CEB0 *)Method_System_Collections_Generic_Queue_int__Dequeue__);
        Square = WarBoardData__GetSquare(this, v7, v43);
        if ( !Square )
          break;
        v46 = Square;
        Piece_23181536 = WarBoardData__GetPiece_23181536(this, v7, v45);
        if ( !Piece_23181536 )
          return v7;
        if ( !checkReplaceFunc )
          goto LABEL_24;
        v47 = Piece_23181536;
        Piece_23181536 = (WarBoardPieceData_o *)System_Func_BattleBuffData_BuffData__bool___Invoke(
                                                  (System_Func_BattleBuffData_BuffData__bool__o *)checkReplaceFunc,
                                                  (BattleBuffData_BuffData_o *)Piece_23181536,
                                                  (const MethodInfo_2C2ECE4 *)Method_System_Func_WarBoardPieceData__bool__Invoke__);
        if ( ((unsigned __int8)Piece_23181536 & 1) != 0 )
        {
          WarBoardPieceData__SetSquareIndex(v47, -1, 0LL);
          return v7;
        }
        if ( !v42 )
          goto LABEL_24;
        Piece_23181536 = (WarBoardPieceData_o *)System_Collections_Generic_HashSet_int___Add(
                                                  v42,
                                                  v7,
                                                  (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
        linkedSquares = v46->fields.linkedSquares;
        if ( !linkedSquares )
          goto LABEL_24;
        v49 = *(_QWORD *)&linkedSquares->max_length;
        if ( (int)v49 >= 1 )
        {
          v50 = 0LL;
          do
          {
            if ( v50 >= (unsigned int)v49 )
            {
              v53 = sub_B5D6C8(Piece_23181536);
              sub_B5D668(v53, 0LL);
            }
            v51 = linkedSquares->m_Items[v50 + 1];
            Piece_23181536 = (WarBoardPieceData_o *)System_Collections_Generic_HashSet_int___Contains(
                                                      v42,
                                                      v51,
                                                      (const MethodInfo_24FFAFC *)Method_System_Collections_Generic_HashSet_int__Contains__);
            if ( ((unsigned __int8)Piece_23181536 & 1) == 0 )
            {
              Piece_23181536 = (WarBoardPieceData_o *)System_Collections_Generic_Queue_int___Contains(
                                                        v39,
                                                        v51,
                                                        (const MethodInfo_2B9CFC0 *)Method_System_Collections_Generic_Queue_int__Contains__);
              if ( ((unsigned __int8)Piece_23181536 & 1) == 0 )
                System_Collections_Generic_Queue_int___Enqueue(
                  v39,
                  v51,
                  (const MethodInfo_2B9CCA4 *)Method_System_Collections_Generic_Queue_int__Enqueue__);
            }
            LODWORD(v49) = linkedSquares->max_length;
            ++v50;
          }
          while ( (__int64)v50 < (int)v49 );
        }
      }
      while ( v39->fields._size > 0 );
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

  if ( (byte_42E77A8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__set_Item__,
      (_DWORD)objectName,
      (_DWORD)animName,
      method);
    byte_42E77A8 = 1;
  }
  bgAnimationInfo_k__BackingField = this->fields._bgAnimationInfo_k__BackingField;
  if ( !bgAnimationInfo_k__BackingField )
    sub_B5D69C(0LL, objectName);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)bgAnimationInfo_k__BackingField,
    (System_Xml_XmlQualifiedName_o *)objectName,
    (System_Xml_Schema_XmlSchemaObject_o *)animName,
    (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
}


void __fastcall WarBoardData__SetContinue(WarBoardData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_IEnumerable_TSource__o *PlayerPieces; // x20
  WarBoardData___c_c *v30; // x8
  struct WarBoardData___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__82_0; // x21
  Il2CppObject *v33; // x22
  struct WarBoardData___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  WarBoardItemData_o *v41; // x0
  __int64 v42; // x1
  __int64 v43; // x3
  WarBoardItemData_c *klass; // x8
  WarBoardItemData_o *v45; // x20
  unsigned __int64 v46; // x10
  int32_t *p_offset; // x11
  __int64 v48; // x0
  __int64 v49; // x1
  __int64 v50; // x3
  __int64 v51; // x20
  __int64 v52; // x8
  unsigned __int64 v53; // x10
  int *v54; // x11
  __int64 v55; // x0
  __int64 v56; // x3
  __int64 v57; // x8
  unsigned __int64 v58; // x10
  int *v59; // x11
  __int64 v60; // x0
  WarBoardPieceData_o *v61; // x0
  __int64 v62; // x1
  __int64 v63; // x8
  unsigned __int64 v64; // x10
  int *v65; // x11
  __int64 v66; // x0
  struct WarBoardItemData_array *items; // x19
  int max_length; // w8
  unsigned int v69; // w20
  __int64 v70; // x0

  if ( (byte_42E7757 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_OrderBy_WarBoardPieceData__int___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Func_WarBoardPieceData__int___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_WarBoardPieceData__int__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_WarBoardData___c__SetContinue_b__82_0__, v23, v24, v25);
    sub_B5D5C4(&WarBoardData___c_TypeInfo, v26, v27, v28);
    byte_42E7757 = 1;
  }
  PlayerPieces = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardData__GetPlayerPieces(this, method);
  v30 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v30 = WarBoardData___c_TypeInfo;
  }
  static_fields = v30->static_fields;
  _9__82_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__82_0;
  if ( !_9__82_0 )
  {
    if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v33 = (Il2CppObject *)static_fields->__9;
    _9__82_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_WarBoardPieceData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__82_0,
      v33,
      Method_WarBoardData___c__SetContinue_b__82_0__,
      (const MethodInfo_2C2F87C *)Method_System_Func_WarBoardPieceData__int___ctor__);
    v34 = WarBoardData___c_TypeInfo->static_fields;
    v34->__9__82_0 = (struct System_Func_WarBoardPieceData__int__o *)_9__82_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v34->__9__82_0,
      (System_Int32_array **)_9__82_0,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  v41 = (WarBoardItemData_o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                PlayerPieces,
                                (System_Func_TSource__TKey__o *)_9__82_0,
                                (const MethodInfo_1CAF208 *)Method_System_Linq_Enumerable_OrderBy_WarBoardPieceData__int___);
  if ( !v41 )
    goto LABEL_48;
  klass = v41->klass;
  v45 = v41;
  if ( *(_WORD *)&v41->klass->_2.bitflags1 )
  {
    v46 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_WarBoardPieceData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo )
    {
      ++v46;
      p_offset += 4;
      if ( v46 >= *(unsigned __int16 *)&v41->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    v48 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_16:
    v48 = sub_AF54C0(v41, System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo, 0LL, v43);
  }
  v51 = (*(__int64 (__fastcall **)(WarBoardItemData_o *, _QWORD))v48)(v45, *(_QWORD *)(v48 + 8));
  if ( !v51 )
    sub_B5D69C(0LL, v49);
  while ( 1 )
  {
    v52 = *(_QWORD *)v51;
    if ( *(_WORD *)(*(_QWORD *)v51 + 298LL) )
    {
      v53 = 0LL;
      v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v54 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v53;
        v54 += 4;
        if ( v53 >= *(unsigned __int16 *)(*(_QWORD *)v51 + 298LL) )
          goto LABEL_23;
      }
      v55 = v52 + 16LL * *v54 + 312;
    }
    else
    {
LABEL_23:
      v55 = sub_AF54C0(v51, System_Collections_IEnumerator_TypeInfo, 0LL, v50);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v51, *(_QWORD *)(v55 + 8)) & 1) == 0 )
      break;
    v57 = *(_QWORD *)v51;
    if ( *(_WORD *)(*(_QWORD *)v51 + 298LL) )
    {
      v58 = 0LL;
      v59 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_WarBoardPieceData__c **)v59 - 1) != System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo )
      {
        ++v58;
        v59 += 4;
        if ( v58 >= *(unsigned __int16 *)(*(_QWORD *)v51 + 298LL) )
          goto LABEL_30;
      }
      v60 = v57 + 16LL * *v59 + 312;
    }
    else
    {
LABEL_30:
      v60 = sub_AF54C0(v51, System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo, 0LL, v56);
    }
    v61 = (WarBoardPieceData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v60)(v51, *(_QWORD *)(v60 + 8));
    if ( !v61 )
      sub_B5D69C(0LL, v62);
    WarBoardPieceData__SetContinue(v61, 0LL);
  }
  v63 = *(_QWORD *)v51;
  if ( *(_WORD *)(*(_QWORD *)v51 + 298LL) )
  {
    v64 = 0LL;
    v65 = (int *)(*(_QWORD *)(v63 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v65 - 1) != System_IDisposable_TypeInfo )
    {
      ++v64;
      v65 += 4;
      if ( v64 >= *(unsigned __int16 *)(*(_QWORD *)v51 + 298LL) )
        goto LABEL_38;
    }
    v66 = v63 + 16LL * *v65 + 312;
  }
  else
  {
LABEL_38:
    v66 = sub_AF54C0(v51, System_IDisposable_TypeInfo, 0LL, v56);
  }
  v41 = (WarBoardItemData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v66)(v51, *(_QWORD *)(v66 + 8));
  items = this->fields.items;
  if ( !items )
LABEL_48:
    sub_B5D69C(v41, v42);
  max_length = items->max_length;
  if ( max_length >= 1 )
  {
    v69 = 0;
    while ( 1 )
    {
      if ( v69 >= max_length )
      {
        v70 = sub_B5D6C8(v41);
        sub_B5D668(v70, 0LL);
      }
      v41 = items->m_Items[v69];
      if ( !v41 )
        break;
      WarBoardItemData__ResetItem(v41, 0LL);
      max_length = items->max_length;
      if ( (int)++v69 >= max_length )
        return;
    }
    goto LABEL_48;
  }
}


void __fastcall WarBoardData__SetPlayerMasterUserEquip(
        WarBoardData_o *this,
        int64_t userEquipId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  struct WarBoardPieceData_array *pieces; // x20
  WarBoardData___c_c *v19; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__144_0; // x21
  Il2CppObject *v22; // x22
  struct WarBoardData___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  WarBoardPieceData_o *USFGOPlayStandardCutInLimitCount_OverwriteCutIn; // x0

  if ( (byte_42E7780 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Find_WarBoardPieceData___, userEquipId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Predicate_WarBoardPieceData___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Predicate_WarBoardPieceData__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_WarBoardData___c__SetPlayerMasterUserEquip_b__144_0__, v12, v13, v14);
    sub_B5D5C4(&WarBoardData___c_TypeInfo, v15, v16, v17);
    byte_42E7780 = 1;
  }
  pieces = this->fields.pieces;
  v19 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v19 = WarBoardData___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__144_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__144_0;
  if ( !_9__144_0 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__144_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_WarBoardPieceData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__144_0,
      v22,
      Method_WarBoardData___c__SetPlayerMasterUserEquip_b__144_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_WarBoardPieceData___ctor__);
    v23 = WarBoardData___c_TypeInfo->static_fields;
    v23->__9__144_0 = (struct System_Predicate_WarBoardPieceData__o *)_9__144_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v23->__9__144_0,
      (System_Int32_array **)_9__144_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  USFGOPlayStandardCutInLimitCount_OverwriteCutIn = (WarBoardPieceData_o *)System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                                                                             (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)pieces,
                                                                             (System_Predicate_T__o *)_9__144_0,
                                                                             (const MethodInfo_1FC03F4 *)Method_System_Array_Find_WarBoardPieceData___);
  if ( USFGOPlayStandardCutInLimitCount_OverwriteCutIn )
    WarBoardPieceData__SetMasterEquip(USFGOPlayStandardCutInLimitCount_OverwriteCutIn, userEquipId, 0LL);
}


void __fastcall WarBoardData__SetRequest(WarBoardData_o *this, RequestBase_o *request, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  System_Collections_Generic_IEnumerable_T__o *pieces; // x21
  WarBoardData___c_c *v82; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__156_0; // x22
  Il2CppObject *v85; // x23
  struct WarBoardData___c_StaticFields *v86; // x0
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  Il2CppObject *v93; // x0
  __int64 v94; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  Il2CppObject *p_obj; // x21
  System_Byte_array *v97; // x21
  System_Byte_array *v98; // x21
  System_String_o *v99; // x0
  struct WarBoardDataEntity_o *v100; // x8
  Il2CppObject *v101; // x0
  System_Byte_array *v102; // x0
  System_Byte_array *v103; // x0
  System_String_o *v104; // x0
  System_Collections_Generic_IEnumerable_TSource__o *items; // x23
  WarBoardData___c_c *v106; // x0
  struct WarBoardData___c_StaticFields *v107; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__156_1; // x24
  System_String_o *v109; // x22
  System_String_o *v110; // x21
  Il2CppObject *v111; // x1
  Il2CppObject *v112; // x25
  struct WarBoardData___c_StaticFields *v113; // x0
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v120; // x0
  WarBoardData___c_c *v121; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v122; // x23
  struct WarBoardData___c_StaticFields *v123; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__156_2; // x24
  Il2CppObject *v125; // x25
  struct WarBoardData___c_StaticFields *v126; // x0
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v133; // x0
  System_String_array *v134; // x0
  Il2CppObject *v135; // x0
  System_Byte_array *v136; // x21
  System_Byte_array *v137; // x21
  System_String_o *v138; // x0
  struct WarBoardDataEntity_o *v139; // x8
  Il2CppObject *v140; // x21
  Il2CppObject *v141; // x0
  System_Byte_array *v142; // x21
  System_Byte_array *v143; // x21
  System_String_o *v144; // x0
  struct WarBoardDataEntity_o *v145; // x8
  Il2CppObject *v146; // x0
  System_Byte_array *v147; // x0
  System_Byte_array *v148; // x0
  System_String_o *v149; // x0
  struct WarBoardDataEntity_o *v150; // x8
  Il2CppObject *v151; // x0
  System_Byte_array *v152; // x0
  System_Byte_array *v153; // x0
  System_String_o *v154; // x2

  if ( (byte_42E7789 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_WarBoardPieceData___ctor__, (_DWORD)request, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_WarBoardPieceData__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_BasicHelper_ForEach_WarBoardPieceData___, v9, v10, v11);
    sub_B5D5C4(&CatAndMouseGame_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Convert_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_WarBoardItemData__string___, v18, v19, v20);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_string___, v21, v22, v23);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_string___, v24, v25, v26);
    sub_B5D5C4(&Method_System_Func_WarBoardItemData__string___ctor__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Func_string__bool___ctor__, v30, v31, v32);
    sub_B5D5C4(&System_Func_WarBoardItemData__string__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&System_Func_string__bool__TypeInfo, v36, v37, v38);
    sub_B5D5C4(&JsonManager_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_WarBoardData___c__SetRequest_b__156_0__, v42, v43, v44);
    sub_B5D5C4(&Method_WarBoardData___c__SetRequest_b__156_1__, v45, v46, v47);
    sub_B5D5C4(&Method_WarBoardData___c__SetRequest_b__156_2__, v48, v49, v50);
    sub_B5D5C4(&WarBoardData___c_TypeInfo, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_17094/*"bossBattleInfo"*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_22774/*"svtInfo"*/, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_20659/*"masterInfo"*/, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_23503/*"wallInfo"*/, v63, v64, v65);
    sub_B5D5C4(&StringLiteral_21446/*"null"*/, v66, v67, v68);
    sub_B5D5C4(&StringLiteral_22544/*"squareIndexInfo"*/, v69, v70, v71);
    sub_B5D5C4(&StringLiteral_19241/*"getItemInfo"*/, v72, v73, v74);
    sub_B5D5C4(&StringLiteral_707/*","*/, v75, v76, v77);
    sub_B5D5C4(&StringLiteral_16018/*"[{0}]"*/, v78, v79, v80);
    byte_42E7789 = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_T__o *)this->fields.pieces;
  v82 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v82 = WarBoardData___c_TypeInfo;
  }
  static_fields = v82->static_fields;
  _9__156_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__156_0;
  if ( !_9__156_0 )
  {
    if ( (BYTE3(v82->vtable._0_Equals.methodPtr) & 4) != 0 && !v82->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v82);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v85 = (Il2CppObject *)static_fields->__9;
    _9__156_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_WarBoardPieceData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__156_0,
      v85,
      Method_WarBoardData___c__SetRequest_b__156_0__,
      (const MethodInfo_258B320 *)Method_System_Action_WarBoardPieceData___ctor__);
    v86 = WarBoardData___c_TypeInfo->static_fields;
    v86->__9__156_0 = (struct System_Action_WarBoardPieceData__o *)_9__156_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v86->__9__156_0,
      (System_Int32_array **)_9__156_0,
      v87,
      v88,
      v89,
      v90,
      v91,
      v92);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    pieces,
    (System_Action_T__o *)_9__156_0,
    (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_WarBoardPieceData___);
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_63;
  p_obj = &serverData->fields.svtInfo->obj;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v93 = (Il2CppObject *)JsonManager__toJson(p_obj, 0, 0, 0LL);
  if ( !request )
    goto LABEL_63;
  v97 = RequestBase__PackToMessagePack(request, v93, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v98 = CatAndMouseGame__CatGame5Bytes(v97, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v99 = System_Convert__ToBase64String(v98, 0LL);
  RequestBase__addField_32362260(request, (System_String_o *)StringLiteral_22774/*"svtInfo"*/, v99, 0LL);
  v100 = this->fields.serverData;
  if ( !v100 )
    goto LABEL_63;
  v101 = (Il2CppObject *)JsonManager__toJson(&v100->fields.masterInfo->obj, 0, 0, 0LL);
  v102 = RequestBase__PackToMessagePack(request, v101, 0LL);
  v103 = CatAndMouseGame__CatGame5Bytes(v102, 0LL);
  v104 = System_Convert__ToBase64String(v103, 0LL);
  RequestBase__addField_32362260(request, (System_String_o *)StringLiteral_20659/*"masterInfo"*/, v104, 0LL);
  items = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.items;
  if ( !items )
    goto LABEL_63;
  if ( items[1].monitor )
  {
    v106 = WarBoardData___c_TypeInfo;
    if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
      v106 = WarBoardData___c_TypeInfo;
    }
    v107 = v106->static_fields;
    _9__156_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v107->__9__156_1;
    v109 = (System_String_o *)StringLiteral_707/*","*/;
    v110 = (System_String_o *)StringLiteral_16018/*"[{0}]"*/;
    if ( !_9__156_1 )
    {
      if ( (BYTE3(v106->vtable._0_Equals.methodPtr) & 4) != 0 && !v106->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v106);
        v107 = WarBoardData___c_TypeInfo->static_fields;
      }
      v112 = (Il2CppObject *)v107->__9;
      _9__156_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_WarBoardItemData__string__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__156_1,
        v112,
        Method_WarBoardData___c__SetRequest_b__156_1__,
        (const MethodInfo_2C3041C *)Method_System_Func_WarBoardItemData__string___ctor__);
      v113 = WarBoardData___c_TypeInfo->static_fields;
      v113->__9__156_1 = (struct System_Func_WarBoardItemData__string__o *)_9__156_1;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v113->__9__156_1,
        (System_Int32_array **)_9__156_1,
        v114,
        v115,
        v116,
        v117,
        v118,
        v119);
    }
    v120 = System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
             items,
             (System_Func_TSource__TResult__o *)_9__156_1,
             (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_WarBoardItemData__string___);
    v121 = WarBoardData___c_TypeInfo;
    v122 = (System_Collections_Generic_IEnumerable_TSource__o *)v120;
    if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
      v121 = WarBoardData___c_TypeInfo;
    }
    v123 = v121->static_fields;
    _9__156_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v123->__9__156_2;
    if ( !_9__156_2 )
    {
      if ( (BYTE3(v121->vtable._0_Equals.methodPtr) & 4) != 0 && !v121->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v121);
        v123 = WarBoardData___c_TypeInfo->static_fields;
      }
      v125 = (Il2CppObject *)v123->__9;
      _9__156_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_string__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__156_2,
        v125,
        Method_WarBoardData___c__SetRequest_b__156_2__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_string__bool___ctor__);
      v126 = WarBoardData___c_TypeInfo->static_fields;
      v126->__9__156_2 = (struct System_Func_string__bool__o *)_9__156_2;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v126->__9__156_2,
        (System_Int32_array **)_9__156_2,
        v127,
        v128,
        v129,
        v130,
        v131,
        v132);
    }
    v133 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
             v122,
             (System_Func_TSource__bool__o *)_9__156_2,
             (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_string___);
    v134 = (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                    v133,
                                    (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_string___);
    v135 = (Il2CppObject *)System_String__Join(v109, v134, 0LL);
    v111 = (Il2CppObject *)System_String__Format(v110, v135, 0LL);
  }
  else
  {
    v111 = (Il2CppObject *)StringLiteral_21446/*"null"*/;
  }
  v136 = RequestBase__PackToMessagePack(request, v111, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v137 = CatAndMouseGame__CatGame5Bytes(v136, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v138 = System_Convert__ToBase64String(v137, 0LL);
  RequestBase__addField_32362260(request, (System_String_o *)StringLiteral_19241/*"getItemInfo"*/, v138, 0LL);
  v139 = this->fields.serverData;
  if ( !v139 )
    goto LABEL_63;
  v140 = &v139->fields.wallInfo->obj;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v141 = (Il2CppObject *)JsonManager__toJson(v140, 0, 0, 0LL);
  v142 = RequestBase__PackToMessagePack(request, v141, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v143 = CatAndMouseGame__CatGame5Bytes(v142, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v144 = System_Convert__ToBase64String(v143, 0LL);
  RequestBase__addField_32362260(request, (System_String_o *)StringLiteral_23503/*"wallInfo"*/, v144, 0LL);
  v145 = this->fields.serverData;
  if ( !v145
    || (v146 = (Il2CppObject *)JsonManager__toJson(&v145->fields.squareIndexInfo->obj, 0, 0, 0LL),
        v147 = RequestBase__PackToMessagePack(request, v146, 0LL),
        v148 = CatAndMouseGame__CatGame5Bytes(v147, 0LL),
        v149 = System_Convert__ToBase64String(v148, 0LL),
        RequestBase__addField_32362260(request, (System_String_o *)StringLiteral_22544/*"squareIndexInfo"*/, v149, 0LL),
        (v150 = this->fields.serverData) == 0LL) )
  {
LABEL_63:
    sub_B5D69C(v93, v94);
  }
  v151 = (Il2CppObject *)JsonManager__toJson(&v150->fields.bossBattleInfo->obj, 0, 0, 0LL);
  v152 = RequestBase__PackToMessagePack(request, v151, 0LL);
  v153 = CatAndMouseGame__CatGame5Bytes(v152, 0LL);
  v154 = System_Convert__ToBase64String(v153, 0LL);
  RequestBase__addField_32362260(request, (System_String_o *)StringLiteral_17094/*"bossBattleInfo"*/, v154, 0LL);
}


void __fastcall WarBoardData__SetUiDataFromLocalData(WarBoardData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct System_Collections_Generic_List_WarBoardUiData__o *listUiData; // x0
  _BOOL8 v21; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x5
  Il2CppObject *current; // x23
  __int64 klass_low; // x1
  WarBoardSquareData_o *Square; // x0
  __int64 v28; // x1
  void *pieceComponent; // x8
  _DWORD *monitor; // x8
  unsigned int v31; // w9
  WarBoardPieceData_o *Piece; // x0
  __int64 v33; // x1
  UnityEngine_Object_o *v34; // x20
  _BOOL8 v35; // x0
  __int64 v36; // x1
  const MethodInfo *v37; // x2
  WarBoardControlUiDataComponent_c *v38; // x0
  __int64 v39; // x0
  __int64 v40; // x0
  __int64 v41; // x0
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42E77A7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&WarBoardControlUiDataComponent_TypeInfo, v17, v18, v19);
    byte_42E77A7 = 1;
  }
  memset(&v43, 0, sizeof(v43));
  listUiData = this->fields.listUiData;
  if ( !listUiData )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v42,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)listUiData,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__);
  v43 = v42;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v43,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__);
    if ( !v21 )
      break;
    current = v43.fields.current;
    if ( !v43.fields.current )
      sub_B5D69C(v21, v22);
    klass_low = LODWORD(v43.fields.current[1].klass);
    if ( (klass_low & 0x80000000) != 0 )
    {
      monitor = v43.fields.current[1].monitor;
      if ( !monitor )
        sub_B5D69C(v21, klass_low);
      v31 = monitor[6];
      if ( !v31 )
      {
        v40 = sub_B5D6C8(v21);
        sub_B5D668(v40, 0LL);
      }
      if ( v31 == 1 )
      {
        v41 = sub_B5D6C8(v21);
        sub_B5D668(v41, 0LL);
      }
      if ( v31 <= 2 )
      {
        v39 = sub_B5D6C8(v21);
        sub_B5D668(v39, 0LL);
      }
      Piece = WarBoardData__GetPiece(this, monitor[8], monitor[9], monitor[10], 1, v24);
      if ( Piece )
      {
        pieceComponent = Piece->fields.pieceComponent;
        if ( !pieceComponent )
          sub_B5D69C(Piece, v33);
LABEL_17:
        v34 = (UnityEngine_Object_o *)*((_QWORD *)pieceComponent + 22);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v35 = UnityEngine_Object__op_Equality(v34, 0LL, 0LL);
        if ( !v35 )
        {
          if ( !v34 )
            sub_B5D69C(v35, v36);
          WarBoardControlUiDataComponent__SetUiDataFromLocalData(
            (WarBoardControlUiDataComponent_o *)v34,
            (System_String_array *)current[2].klass,
            v37);
        }
      }
    }
    else
    {
      Square = WarBoardData__GetSquare(this, klass_low, v23);
      if ( Square )
      {
        pieceComponent = Square->fields.squareComponent;
        if ( !pieceComponent )
          sub_B5D69C(Square, v28);
        goto LABEL_17;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v43,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__);
  v38 = WarBoardControlUiDataComponent_TypeInfo;
  if ( (BYTE3(WarBoardControlUiDataComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  }
  WarBoardControlUiDataComponent__ResumeUiDataAll((const MethodInfo *)v38);
}


void __fastcall WarBoardData__ShowConsumedPieceActionPointPopup(
        WarBoardData_o *this,
        System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___o *consumedPieceActionPointDict,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  __int64 v36; // x19
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v37; // x0
  __int64 v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Func_bool__o *v51; // x20
  UnityEngine_WaitUntil_o *v52; // x21
  __int64 v53; // x20
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Delegate_o *v60; // x22
  WarBoardTaskBase_TaskCallback_o *v61; // x23
  System_Int32_array **v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  WebViewManager_o *Instance; // x19
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v70; // x21
  __int64 v71; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  __int64 v78; // x0
  __int64 v79; // x0
  WarBoardData_o *v80; // x0
  const MethodInfo *v81; // x1

  if ( (byte_42E7787 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__,
      (_DWORD)consumedPieceActionPointDict,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Func_bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&WarBoardTaskBase_TaskCallback_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__0__, v18, v19, v20);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__1__, v21, v22, v23);
    sub_B5D5C4(&WarBoardData___c__DisplayClass154_0_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&UnityEngine_WaitUntil_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&WarBoardCallbackTask_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&WarBoardTaskBase___TypeInfo, v33, v34, v35);
    byte_42E7787 = 1;
  }
  v36 = sub_B5D694(WarBoardData___c__DisplayClass154_0_TypeInfo);
  WarBoardData___c__DisplayClass154_0___ctor((WarBoardData___c__DisplayClass154_0_o *)v36, 0LL);
  if ( !v36 )
    goto LABEL_15;
  *(_QWORD *)(v36 + 24) = consumedPieceActionPointDict;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v36 + 24),
    (System_Int32_array **)consumedPieceActionPointDict,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  *(_QWORD *)(v36 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v36 + 32), (System_Int32_array **)this, v45, v46, v47, v48, v49, v50);
  v37 = *(System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **)(v36 + 24);
  if ( !v37 )
    goto LABEL_15;
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
         v37,
         (const MethodInfo_2F31CC0 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__) >= 1 )
  {
    *(_BYTE *)(v36 + 16) = 0;
    v51 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v51,
      (Il2CppObject *)v36,
      Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__0__,
      (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
    v52 = (UnityEngine_WaitUntil_o *)sub_B5D694(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v52, v51, 0LL);
    v53 = sub_B5D694(WarBoardCallbackTask_TypeInfo);
    WarBoardTaskBase___ctor((WarBoardTaskBase_o *)v53, 0LL);
    *(_QWORD *)(v53 + 56) = v52;
    sub_B5D560((BattleServantConfConponent_o *)(v53 + 56), (System_Int32_array **)v52, v54, v55, v56, v57, v58, v59);
    if ( !v53 )
      goto LABEL_15;
    v60 = *(System_Delegate_o **)(v53 + 32);
    v61 = (WarBoardTaskBase_TaskCallback_o *)sub_B5D694(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      v61,
      (Il2CppObject *)v36,
      Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__1__,
      0LL);
    v62 = (System_Int32_array **)System_Delegate__Combine(v60, (System_Delegate_o *)v61, 0LL);
    if ( !v62 || *v62 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *(_QWORD *)(v53 + 32) = v62;
      sub_B5D560((BattleServantConfConponent_o *)(v53 + 32), v62, v63, v64, v65, v66, v67, v68);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      v37 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D5DC(WarBoardTaskBase___TypeInfo, 1LL);
      if ( v37 )
      {
        v70 = v37;
        v71 = sub_B5D684(v53, v37->klass->_1.element_class);
        if ( !v71 )
        {
          v78 = sub_B5D6BC();
          sub_B5D668(v78, 0LL);
        }
        if ( !LODWORD(v70->fields.entries) )
        {
          v79 = sub_B5D6C8(v71);
          sub_B5D668(v79, 0LL);
        }
        *(_QWORD *)&v70->fields.count = v53;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v70->fields.count,
          (System_Int32_array **)v53,
          v72,
          v73,
          v74,
          v75,
          v76,
          v77);
        if ( Instance )
        {
          WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 1, (WarBoardTaskBase_array *)v70, 0LL);
          return;
        }
      }
LABEL_15:
      sub_B5D69C(v37, v38);
    }
    v80 = (WarBoardData_o *)sub_B5D990(v62);
    WarBoardData__CreateEventBossUIDataTask(v80, v81);
  }
}


System_String_o *__fastcall WarBoardData__ToJson(WarBoardData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  Il2CppObject *serverData; // x19

  if ( (byte_42E7788 & 1) == 0 )
  {
    sub_B5D5C4(&JsonManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&string_TypeInfo, v5, v6, v7);
    byte_42E7788 = 1;
  }
  serverData = (Il2CppObject *)this->fields.serverData;
  if ( !serverData )
    return string_TypeInfo->static_fields->Empty;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  WarBoardData___c__DisplayClass171_0_o *v27; // x23
  System_Xml_Schema_XmlSchemaObject_o *v28; // x0
  __int64 v29; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *bossBattleInfo; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v32; // x22
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v34; // x21
  int32_t v35; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E7790 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Find_WarBoardBossBattleData___, bossId, (_DWORD)key, *(_QWORD *)&value);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Func_WarBoardBossBattleData__bool___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Func_WarBoardBossBattleData__bool__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&int_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass171_0__UpdateBossInfo_b__0__, v21, v22, v23);
    sub_B5D5C4(&WarBoardData___c__DisplayClass171_0_TypeInfo, v24, v25, v26);
    byte_42E7790 = 1;
  }
  v27 = (WarBoardData___c__DisplayClass171_0_o *)sub_B5D694(WarBoardData___c__DisplayClass171_0_TypeInfo);
  WarBoardData___c__DisplayClass171_0___ctor(v27, 0LL);
  if ( !v27 )
    goto LABEL_9;
  v27->fields.bossId = bossId;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_9;
  bossBattleInfo = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)serverData->fields.bossBattleInfo;
  v32 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardBossBattleData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v32,
    (Il2CppObject *)v27,
    Method_WarBoardData___c__DisplayClass171_0__UpdateBossInfo_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardBossBattleData__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                     bossBattleInfo,
                                                                     (System_Func_T__bool__o *)v32,
                                                                     (const MethodInfo_1AD7278 *)Method_BasicHelper_Find_WarBoardBossBattleData___);
  if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
    return;
  v34 = *(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **)&USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.isExecute;
  v35 = value;
  v28 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v35);
  if ( !v34 )
LABEL_9:
    sub_B5D69C(v28, v29);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v34,
    (System_Xml_XmlQualifiedName_o *)key,
    v28,
    (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
}


void __fastcall WarBoardData__UpdateBuffTurnNoticeDisp(WarBoardData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  WarBoardData___c_c *v42; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__192_0; // x20
  Il2CppObject *v45; // x21
  struct WarBoardData___c_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v53; // x0
  WarBoardData___c_c *v54; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x19
  struct WarBoardData___c_StaticFields *v56; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__192_1; // x20
  Il2CppObject *v58; // x21
  struct WarBoardData___c_StaticFields *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x0
  WarBoardData___c_c *v67; // x8
  System_Collections_Generic_IEnumerable_T__o *v68; // x19
  struct WarBoardData___c_StaticFields *v69; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__192_2; // x20
  Il2CppObject *v71; // x21
  struct WarBoardData___c_StaticFields *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7

  if ( (byte_42E77A2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_WarBoardPieceBaseComponent___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_WarBoardPieceBaseComponent__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BasicHelper_ForEach_WarBoardPieceBaseComponent___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__WarBoardPieceBaseComponent___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_WarBoardPieceBaseComponent___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Func_WarBoardPieceBaseComponent__bool___ctor__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Func_WarBoardPieceData__WarBoardPieceBaseComponent___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Func_WarBoardPieceData__WarBoardPieceBaseComponent__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&System_Func_WarBoardPieceBaseComponent__bool__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_0__, v29, v30, v31);
    sub_B5D5C4(&Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_1__, v32, v33, v34);
    sub_B5D5C4(&Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_2__, v35, v36, v37);
    sub_B5D5C4(&WarBoardData___c_TypeInfo, v38, v39, v40);
    byte_42E77A2 = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v42 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v42 = WarBoardData___c_TypeInfo;
  }
  static_fields = v42->static_fields;
  _9__192_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__192_0;
  if ( !_9__192_0 )
  {
    if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v45 = (Il2CppObject *)static_fields->__9;
    _9__192_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_WarBoardPieceData__WarBoardPieceBaseComponent__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__192_0,
      v45,
      Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_0__,
      (const MethodInfo_2C3041C *)Method_System_Func_WarBoardPieceData__WarBoardPieceBaseComponent___ctor__);
    v46 = WarBoardData___c_TypeInfo->static_fields;
    v46->__9__192_0 = (struct System_Func_WarBoardPieceData__WarBoardPieceBaseComponent__o *)_9__192_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v46->__9__192_0,
      (System_Int32_array **)_9__192_0,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
  }
  v53 = System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
          pieces,
          (System_Func_TSource__TResult__o *)_9__192_0,
          (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__WarBoardPieceBaseComponent___);
  v54 = WarBoardData___c_TypeInfo;
  v55 = (System_Collections_Generic_IEnumerable_TSource__o *)v53;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v54 = WarBoardData___c_TypeInfo;
  }
  v56 = v54->static_fields;
  _9__192_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v56->__9__192_1;
  if ( !_9__192_1 )
  {
    if ( (BYTE3(v54->vtable._0_Equals.methodPtr) & 4) != 0 && !v54->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v54);
      v56 = WarBoardData___c_TypeInfo->static_fields;
    }
    v58 = (Il2CppObject *)v56->__9;
    _9__192_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardPieceBaseComponent__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__192_1,
      v58,
      Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_1__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardPieceBaseComponent__bool___ctor__);
    v59 = WarBoardData___c_TypeInfo->static_fields;
    v59->__9__192_1 = (struct System_Func_WarBoardPieceBaseComponent__bool__o *)_9__192_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v59->__9__192_1,
      (System_Int32_array **)_9__192_1,
      v60,
      v61,
      v62,
      v63,
      v64,
      v65);
  }
  v66 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v55,
          (System_Func_TSource__bool__o *)_9__192_1,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_WarBoardPieceBaseComponent___);
  v67 = WarBoardData___c_TypeInfo;
  v68 = (System_Collections_Generic_IEnumerable_T__o *)v66;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v67 = WarBoardData___c_TypeInfo;
  }
  v69 = v67->static_fields;
  _9__192_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v69->__9__192_2;
  if ( !_9__192_2 )
  {
    if ( (BYTE3(v67->vtable._0_Equals.methodPtr) & 4) != 0 && !v67->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v67);
      v69 = WarBoardData___c_TypeInfo->static_fields;
    }
    v71 = (Il2CppObject *)v69->__9;
    _9__192_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_WarBoardPieceBaseComponent__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__192_2,
      v71,
      Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_2__,
      (const MethodInfo_258B320 *)Method_System_Action_WarBoardPieceBaseComponent___ctor__);
    v72 = WarBoardData___c_TypeInfo->static_fields;
    v72->__9__192_2 = (struct System_Action_WarBoardPieceBaseComponent__o *)_9__192_2;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v72->__9__192_2,
      (System_Int32_array **)_9__192_2,
      v73,
      v74,
      v75,
      v76,
      v77,
      v78);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v68,
    (System_Action_T__o *)_9__192_2,
    (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_WarBoardPieceBaseComponent___);
}


void __fastcall WarBoardData__UpdateCurrentPartyCost(WarBoardData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  __int64 v53; // x20
  System_Collections_Generic_List_long__o *v54; // x21
  const MethodInfo *v55; // x1
  void *EditableServantPieces; // x0
  __int64 v57; // x1
  int v58; // w8
  void *v59; // x22
  unsigned int v60; // w23
  __int64 v61; // x25
  __int64 v62; // x22
  __int64 v63; // x22
  System_Collections_Generic_IEnumerable_TSource__o *Entities_35232552; // x21
  WarBoardData___c_c *v65; // x8
  struct WarBoardData___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__143_0; // x22
  Il2CppObject *v68; // x23
  struct WarBoardData___c_StaticFields *v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v82; // x22
  __int64 v83; // x0

  if ( (byte_42E777F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_UserServantEntity___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Sum_UserServantEntity___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Func_UserServantEntity__int___ctor__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Func_UserServantEntity__bool___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Func_UserServantEntity__bool__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&System_Func_UserServantEntity__int__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v29, v30, v31);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v35, v36, v37);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v38, v39, v40);
    sub_B5D5C4(&Method_WarBoardData___c__UpdateCurrentPartyCost_b__143_0__, v41, v42, v43);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass143_0__UpdateCurrentPartyCost_b__1__, v44, v45, v46);
    sub_B5D5C4(&WarBoardData___c__DisplayClass143_0_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&WarBoardData___c_TypeInfo, v50, v51, v52);
    byte_42E777F = 1;
  }
  v53 = sub_B5D694(WarBoardData___c__DisplayClass143_0_TypeInfo);
  WarBoardData___c__DisplayClass143_0___ctor((WarBoardData___c__DisplayClass143_0_o *)v53, 0LL);
  v54 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v54,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  EditableServantPieces = WarBoardData__GetEditableServantPieces(this, v55);
  if ( !EditableServantPieces )
    goto LABEL_28;
  v58 = *((_DWORD *)EditableServantPieces + 6);
  v59 = EditableServantPieces;
  if ( v58 >= 1 )
  {
    v60 = 0;
    while ( 1 )
    {
      if ( v60 >= v58 )
      {
        v83 = sub_B5D6C8(EditableServantPieces);
        sub_B5D668(v83, 0LL);
      }
      v61 = *((_QWORD *)v59 + (int)v60 + 4);
      if ( !v61 || !v54 )
        break;
      System_Collections_Generic_List_long___Add(
        v54,
        *(_QWORD *)(v61 + 224),
        (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
      System_Collections_Generic_List_long___Add(
        v54,
        *(_QWORD *)(v61 + 232),
        (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
      v58 = *((_DWORD *)v59 + 6);
      if ( (int)++v60 >= v58 )
        goto LABEL_10;
    }
LABEL_28:
    sub_B5D69C(EditableServantPieces, v57);
  }
LABEL_10:
  v62 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v62 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v63 = **(_QWORD **)(v62 + 192);
  if ( (*(_BYTE *)(v63 + 306) & 1) == 0 )
    sub_AF52C4(v63);
  EditableServantPieces = **(void ***)(v63 + 184);
  if ( !EditableServantPieces )
    goto LABEL_28;
  EditableServantPieces = DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)EditableServantPieces,
                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !EditableServantPieces )
    goto LABEL_28;
  Entities_35232552 = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__GetEntities_35232552(
                                                                             (UserServantMaster_o *)EditableServantPieces,
                                                                             v54,
                                                                             0LL);
  v65 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v65 = WarBoardData___c_TypeInfo;
  }
  static_fields = v65->static_fields;
  _9__143_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__143_0;
  if ( !_9__143_0 )
  {
    if ( (BYTE3(v65->vtable._0_Equals.methodPtr) & 4) != 0 && !v65->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v65);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v68 = (Il2CppObject *)static_fields->__9;
    _9__143_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_UserServantEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__143_0,
      v68,
      Method_WarBoardData___c__UpdateCurrentPartyCost_b__143_0__,
      (const MethodInfo_2C2F87C *)Method_System_Func_UserServantEntity__int___ctor__);
    v69 = WarBoardData___c_TypeInfo->static_fields;
    v69->__9__143_0 = (struct System_Func_UserServantEntity__int__o *)_9__143_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v69->__9__143_0,
      (System_Int32_array **)_9__143_0,
      v70,
      v71,
      v72,
      v73,
      v74,
      v75);
  }
  EditableServantPieces = (void *)System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData_(
                                    Entities_35232552,
                                    (System_Func_TSource__int__o *)_9__143_0,
                                    (const MethodInfo_1CB6D68 *)Method_System_Linq_Enumerable_Sum_UserServantEntity___);
  if ( !this )
    goto LABEL_28;
  this->fields._CurrentPartyCost_k__BackingField = (int)EditableServantPieces;
  EditableServantPieces = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !EditableServantPieces )
    goto LABEL_28;
  EditableServantPieces = DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)EditableServantPieces,
                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !v53 )
    goto LABEL_28;
  *(_QWORD *)(v53 + 16) = EditableServantPieces;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v53 + 16),
    (System_Int32_array **)EditableServantPieces,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  v82 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v82,
    (Il2CppObject *)v53,
    Method_WarBoardData___c__DisplayClass143_0__UpdateCurrentPartyCost_b__1__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_UserServantEntity__bool___ctor__);
  this->fields._CurrentMemberCount_k__BackingField = System_Linq_Enumerable__Count_WarBoardAIRoute_RouteData_(
                                                       Entities_35232552,
                                                       (System_Func_TSource__bool__o *)v82,
                                                       (const MethodInfo_1CA8A5C *)Method_System_Linq_Enumerable_Count_UserServantEntity___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardData__UpdateFromServerData(
        WarBoardData_o *this,
        WarBoardDataEntity_o *warBoardDataEntity,
        bool forceUpdate,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  int v86; // w1
  int v87; // w2
  __int64 v88; // x3
  int v89; // w1
  int v90; // w2
  __int64 v91; // x3
  int v92; // w1
  int v93; // w2
  __int64 v94; // x3
  int v95; // w1
  int v96; // w2
  __int64 v97; // x3
  WarBoardDataEntity_o **p_serverData; // x21
  WarBoardManager_TaskMultiList_o *v99; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v100; // x27
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *isPlayerGroup; // x0
  const MethodInfo *v102; // x1
  struct WarBoardPieceData_array *pieces; // x25
  int max_length; // w8
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v105; // x22
  unsigned int v106; // w19
  bool v107; // w26
  WarBoardPieceData_o *v108; // x28
  WarBoardManager_TaskList_o *v109; // x20
  int32_t ConsumedRecoverDonotActCost_k__BackingField; // w20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v111; // x22
  WarBoardEvalValueSquare_EvalValueSquare_o *v112; // x2
  Il2CppObject *current; // x25
  WarBoardManager_TaskList_o *v114; // x26
  __int64 v115; // x0
  __int64 v116; // x1
  Il2CppClass *v117; // x0
  __int64 v118; // x0
  __int64 v119; // x1
  char v120; // w8
  int monitor_high; // w20
  Il2CppClass *klass; // x0
  Il2CppClass *v123; // x0
  const MethodInfo *v124; // x2
  System_Collections_Generic_IEnumerable_T__o *v125; // x0
  WarBoardDataEntity_o *v126; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *EventBossUIDataTask; // x0
  WarBoardWaitNonBlockingTaskEnd_o *v128; // x20
  struct WarBoardItemData_array *items; // x19
  int v130; // w8
  unsigned int v131; // w20
  struct WarBoardWallData_array *walls; // x19
  unsigned __int64 v133; // x24
  __int64 v134; // x20
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  System_Int32_array **v141; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **v142; // x21
  System_Collections_Generic_IEnumerable_TSource__o *wallInfo; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v144; // x23
  WarBoardData_SquareRangeSearch_o *v145; // x0
  WarBoardData_SquareRangeSearch_o *v146; // x8
  int32_t range; // w1
  __int64 v148; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v149; // [xsp+0h] [xbp-B0h]
  WarBoardData_o *v150; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v151; // [xsp+10h] [xbp-A0h]
  WarBoardManager_TaskMultiList_o *v152; // [xsp+18h] [xbp-98h]
  WarBoardDataEntity_o *v153; // [xsp+20h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v154; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v155; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_42E7784 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Add__,
      (_DWORD)warBoardDataEntity,
      forceUpdate,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___ContainsKey__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData____ctor__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Item__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___, v26, v27, v28);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__Dispose__,
      v29,
      v30,
      v31);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__MoveNext__,
      v32,
      v33,
      v34);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__get_Current__,
      v35,
      v36,
      v37);
    sub_B5D5C4(&Method_System_Func_WarBoardUserWallData__bool___ctor__, v38, v39, v40);
    sub_B5D5C4(&System_Func_WarBoardUserWallData__bool__TypeInfo, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v44, v45, v46);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, v47, v48, v49);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__, v50, v51, v52);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v53, v54, v55);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__GetEnumerator__,
      v56,
      v57,
      v58);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v59, v60, v61);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v62, v63, v64);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList___ctor__, v65, v66, v67);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Count__, v68, v69, v70);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v71, v72, v73);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v74, v75, v76);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__TypeInfo, v77, v78, v79);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v80, v81, v82);
    sub_B5D5C4(&WarBoardManager_TaskList_TypeInfo, v83, v84, v85);
    sub_B5D5C4(&WarBoardManager_TaskMultiList_TypeInfo, v86, v87, v88);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass151_0__UpdateFromServerData_b__0__, v89, v90, v91);
    sub_B5D5C4(&WarBoardData___c__DisplayClass151_0_TypeInfo, v92, v93, v94);
    sub_B5D5C4(&WarBoardWaitNonBlockingTaskEnd_TypeInfo, v95, v96, v97);
    byte_42E7784 = 1;
  }
  memset(&v155, 0, sizeof(v155));
  p_serverData = &this->fields.serverData;
  if ( !this->fields.serverData )
    return;
  this->fields.serverData = warBoardDataEntity;
  v153 = warBoardDataEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.serverData,
    (System_Int32_array **)warBoardDataEntity,
    (System_String_array **)forceUpdate,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v149 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v149,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v152 = (WarBoardManager_TaskMultiList_o *)sub_B5D694(WarBoardManager_TaskMultiList_TypeInfo);
  WarBoardManager_TaskMultiList___ctor(v152, 0LL);
  v99 = (WarBoardManager_TaskMultiList_o *)sub_B5D694(WarBoardManager_TaskMultiList_TypeInfo);
  WarBoardManager_TaskMultiList___ctor(v99, 0LL);
  v151 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v151,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData____ctor__);
  v100 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v100,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList___ctor__);
  pieces = this->fields.pieces;
  v150 = this;
  if ( !pieces )
    goto LABEL_71;
  max_length = pieces->max_length;
  v105 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v151;
  if ( max_length >= 1 )
  {
    v106 = 0;
    v107 = forceUpdate;
    while ( v106 < max_length )
    {
      v108 = pieces->m_Items[v106];
      v109 = (WarBoardManager_TaskList_o *)sub_B5D694(WarBoardManager_TaskList_TypeInfo);
      WarBoardManager_TaskList___ctor(v109, 0LL);
      if ( !v108 )
        goto LABEL_71;
      WarBoardPieceData__UpdateFromServerData(
        v108,
        *p_serverData,
        (System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__o *)v100,
        v109,
        v107,
        0LL);
      if ( !v109 )
        goto LABEL_71;
      if ( v109->fields._size >= 1 )
      {
        if ( v108->fields._isDead_k__BackingField )
        {
          if ( !v99 )
            goto LABEL_71;
          isPlayerGroup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v99;
        }
        else
        {
          isPlayerGroup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v152;
          if ( !v152 )
            goto LABEL_71;
        }
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          isPlayerGroup,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v109,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__);
      }
      isPlayerGroup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)WarBoardPieceData__get_isPlayerGroup(v108, 0LL);
      if ( ((unsigned __int8)isPlayerGroup & 1) != 0 )
      {
        isPlayerGroup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)WarBoardPieceData__get_isMaster(v108, 0LL);
        if ( ((unsigned __int8)isPlayerGroup & 1) == 0 && v108->fields._IsDispConsumedPieceActionPoint_k__BackingField )
        {
          if ( !v105 )
            goto LABEL_71;
          if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                  v105,
                  v108->fields._ConsumedRecoverDonotActCost_k__BackingField,
                  (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___ContainsKey__) )
          {
            ConsumedRecoverDonotActCost_k__BackingField = v108->fields._ConsumedRecoverDonotActCost_k__BackingField;
            v111 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v111,
              (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
            v112 = (WarBoardEvalValueSquare_EvalValueSquare_o *)v111;
            v105 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v151;
            System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
              v151,
              ConsumedRecoverDonotActCost_k__BackingField,
              v112,
              (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Add__);
          }
          isPlayerGroup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item((System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v105, v108->fields._ConsumedRecoverDonotActCost_k__BackingField, (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Item__);
          if ( !isPlayerGroup )
            goto LABEL_71;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            isPlayerGroup,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v108,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
        }
      }
      max_length = pieces->max_length;
      if ( (int)++v106 >= max_length )
        goto LABEL_25;
    }
LABEL_72:
    v148 = sub_B5D6C8(isPlayerGroup);
    sub_B5D668(v148, 0LL);
  }
LABEL_25:
  if ( !v100 )
    goto LABEL_71;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v154,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v100,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__GetEnumerator__);
  v155 = v154;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v155,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__MoveNext__) )
  {
    current = v155.fields.current;
    v114 = (WarBoardManager_TaskList_o *)sub_B5D694(WarBoardManager_TaskList_TypeInfo);
    WarBoardManager_TaskList___ctor(v114, 0LL);
    if ( !current )
      sub_B5D69C(v115, v116);
    if ( ((__int64)current[1].monitor & 0x80000000) != 0 )
    {
      monitor_high = HIDWORD(current[1].monitor);
      if ( monitor_high >= 1 )
      {
        klass = current[1].klass;
        if ( !klass )
          sub_B5D69C(0LL, v116);
        (*((void (__fastcall **)(Il2CppClass *, _QWORD, _QWORD, WarBoardManager_TaskList_o *, __int64, _QWORD, __int64, _QWORD))klass->_1.image
         + 101))(
          klass,
          (unsigned int)monitor_high,
          0LL,
          v114,
          0xFFFFFFFFLL,
          0LL,
          1LL,
          *((_QWORD *)klass->_1.image + 102));
      }
      v123 = current[1].klass;
      if ( !v123 )
        sub_B5D69C(0LL, v116);
      v118 = (*((__int64 (**)(void))v123->_1.image + 103))();
      v120 = 1;
      if ( !v114 )
LABEL_74:
        sub_B5D69C(v118, v119);
    }
    else
    {
      v117 = current[1].klass;
      if ( !v117 )
        sub_B5D69C(0LL, v116);
      v118 = (*((__int64 (__fastcall **)(Il2CppClass *, _QWORD, _QWORD, WarBoardManager_TaskList_o *, __int64, _QWORD, __int64, _QWORD))v117->_1.image
              + 101))(
               v117,
               HIDWORD(current[1].monitor),
               0LL,
               v114,
               0xFFFFFFFFLL,
               0LL,
               1LL,
               *((_QWORD *)v117->_1.image + 102));
      v120 = 0;
      if ( !v114 )
        goto LABEL_74;
    }
    if ( v114->fields._size >= 1 )
    {
      if ( (v120 & 1) != 0 )
      {
        if ( !v99 )
          sub_B5D69C(v118, v119);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v99,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v114,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__);
      }
      else
      {
        if ( !v152 )
          sub_B5D69C(v118, v119);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v152,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v114,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v155,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__Dispose__);
  if ( !v151 )
    goto LABEL_71;
  isPlayerGroup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(v151, (const MethodInfo_2F31CC0 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__);
  if ( (int)isPlayerGroup >= 1 )
    WarBoardData__ShowConsumedPieceActionPointPopup(
      v150,
      (System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___o *)v151,
      v124);
  if ( !v152 )
    goto LABEL_71;
  isPlayerGroup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)WarBoardManager_TaskMultiList__SortedFlatted(v152, 0LL);
  if ( !v149 )
    goto LABEL_71;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v149,
    (System_Collections_Generic_IEnumerable_T__o *)isPlayerGroup,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( !v99 )
    goto LABEL_71;
  v125 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager_TaskMultiList__SortedFlatted(v99, 0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v149,
    v125,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  v126 = v153;
  if ( v149->fields._size >= 1 )
  {
    EventBossUIDataTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardData__CreateEventBossUIDataTask(
                                                                                   (WarBoardData_o *)isPlayerGroup,
                                                                                   v102);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v149,
      EventBossUIDataTask,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    v128 = (WarBoardWaitNonBlockingTaskEnd_o *)sub_B5D694(WarBoardWaitNonBlockingTaskEnd_TypeInfo);
    WarBoardWaitNonBlockingTaskEnd___ctor(v128, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v149,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v128,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    isPlayerGroup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !isPlayerGroup )
      goto LABEL_71;
    WarBoardManager__InsertTask_18800572(
      (WarBoardManager_o *)isPlayerGroup,
      0,
      (System_Collections_Generic_List_WarBoardTaskBase__o *)v149,
      0LL);
  }
  items = v150->fields.items;
  if ( !items )
    goto LABEL_71;
  v130 = items->max_length;
  if ( v130 >= 1 )
  {
    v131 = 0;
    while ( v131 < v130 )
    {
      isPlayerGroup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)items->m_Items[v131];
      if ( !isPlayerGroup )
        goto LABEL_71;
      WarBoardItemData__UpdateFromServerData((WarBoardItemData_o *)isPlayerGroup, *p_serverData, 0LL);
      v130 = items->max_length;
      if ( (int)++v131 >= v130 )
        goto LABEL_59;
    }
    goto LABEL_72;
  }
LABEL_59:
  walls = v150->fields.walls;
  if ( !walls )
LABEL_71:
    sub_B5D69C(isPlayerGroup, v102);
  if ( (int)walls->max_length >= 1 )
  {
    v133 = 0LL;
    while ( 1 )
    {
      v134 = sub_B5D694(WarBoardData___c__DisplayClass151_0_TypeInfo);
      WarBoardData___c__DisplayClass151_0___ctor((WarBoardData___c__DisplayClass151_0_o *)v134, 0LL);
      if ( v133 >= walls->max_length )
        goto LABEL_72;
      if ( !v134 )
        goto LABEL_71;
      v141 = (System_Int32_array **)walls->m_Items[v133];
      *(_QWORD *)(v134 + 16) = v141;
      v142 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)(v134 + 16);
      sub_B5D560((BattleServantConfConponent_o *)(v134 + 16), v141, v135, v136, v137, v138, v139, v140);
      if ( !v126 )
        goto LABEL_71;
      wallInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v126->fields.wallInfo;
      v144 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardUserWallData__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v144,
        (Il2CppObject *)v134,
        Method_WarBoardData___c__DisplayClass151_0__UpdateFromServerData_b__0__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardUserWallData__bool___ctor__);
      v145 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
               wallInfo,
               (System_Func_TSource__bool__o *)v144,
               (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
      if ( v145 )
      {
        v146 = v145;
        isPlayerGroup = *v142;
        if ( !*v142 )
          goto LABEL_71;
        range = v146->fields.range;
        if ( isPlayerGroup->fields._size > range )
          WarBoardWallData__SetBreakPoint((WarBoardWallData_o *)isPlayerGroup, range, 0LL);
      }
      v126 = v153;
      if ( (__int64)++v133 >= (int)walls->max_length )
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
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( !participantInfo )
    sub_B5D69C(this, 0LL);
  v4 = WarBoardData_BattleParticipantInfo__ToUniqueIndexArray(participantInfo, 0LL);
  this->fields.latestBattlePieceUniqueIndexes = v4;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.latestBattlePieceUniqueIndexes,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall WarBoardData__UpdateLatestPieceActionSquareIndexes(
        WarBoardData_o *this,
        int32_t fromSquareIndex,
        int32_t toSquareIndex,
        const MethodInfo *method)
{
  struct System_Int32_array *v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  il2cpp_array_size_t max_length; // w8
  __int64 v16; // x0

  if ( (byte_42E7794 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, fromSquareIndex, toSquareIndex, method);
    byte_42E7794 = 1;
  }
  v7 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 2LL);
  if ( !v7 )
    sub_B5D69C(0LL, v8);
  max_length = v7->max_length;
  if ( !max_length || (v7->m_Items[1] = fromSquareIndex, max_length == 1) )
  {
    v16 = sub_B5D6C8(v7);
    sub_B5D668(v16, 0LL);
  }
  v7->m_Items[2] = toSquareIndex;
  this->fields.latestPieceActionSquareIndexes = v7;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.latestPieceActionSquareIndexes,
    (System_Int32_array **)v7,
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Collections_Generic_IEnumerable_T__o *squares; // x23
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v19; // x22
  __int64 v20; // x0
  __int64 v21; // x1
  struct WarBoardSquareData_array *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  BattleServantConfConponent_o *p_condSquares; // x19
  System_Collections_Generic_IEnumerable_T__o *condSquares; // t1
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v31; // x21
  System_Int32_array **v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_42E7778 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardSquareData__Add__, (_DWORD)square, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardSquareData__Remove__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardSquareData___ctor___68755216, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardSquareData__TypeInfo, v15, v16, v17);
    byte_42E7778 = 1;
  }
  squares = (System_Collections_Generic_IEnumerable_T__o *)this->fields.squares;
  v19 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v19,
    squares,
    (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor___68755216);
  if ( !v19 )
    goto LABEL_6;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v19,
    (EventMissionProgressRequest_Argument_ProgressData_o *)square,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardSquareData__Add__);
  v22 = (struct WarBoardSquareData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v19,
                                             (const MethodInfo_305910C *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  this->fields.squares = v22;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.squares,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  condSquares = (System_Collections_Generic_IEnumerable_T__o *)this->fields.condSquares;
  p_condSquares = (BattleServantConfConponent_o *)&this->fields.condSquares;
  v31 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v31,
    condSquares,
    (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor___68755216);
  if ( !v31 )
LABEL_6:
    sub_B5D69C(v20, v21);
  System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
    (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v31,
    (WarBoardManager_TaskList_o *)square,
    (const MethodInfo_305896C *)Method_System_Collections_Generic_List_WarBoardSquareData__Remove__);
  v32 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v31,
                                 (const MethodInfo_305910C *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  p_condSquares->klass = (BattleServantConfConponent_c *)v32;
  sub_B5D560(p_condSquares, v32, v33, v34, v35, v36, v37, v38);
}


void __fastcall WarBoardData__UpdateUiData(
        WarBoardData_o *this,
        int32_t squareIndex,
        System_String_array *setKeys,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  WarBoardUiData_o *UiData; // x0
  WarBoardManager_TaskList_o *v14; // x1
  il2cpp_array_size_t max_length; // w8
  WarBoardUiData_o *v16; // x22

  if ( (byte_42E77A5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardUiData__Add__, squareIndex, (_DWORD)setKeys, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardUiData__Remove__, v7, v8, v9);
    sub_B5D5C4(&WarBoardUiData_TypeInfo, v10, v11, v12);
    byte_42E77A5 = 1;
  }
  UiData = WarBoardData__GetUiData(this, squareIndex, (const MethodInfo *)setKeys);
  if ( !setKeys )
    goto LABEL_13;
  max_length = setKeys->max_length;
  v14 = (WarBoardManager_TaskList_o *)UiData;
  if ( UiData )
  {
    if ( max_length )
    {
      WarBoardUiData__SetKeys(UiData, setKeys, 0LL);
      return;
    }
    UiData = (WarBoardUiData_o *)this->fields.listUiData;
    if ( UiData )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        (System_Collections_Generic_List_WarBoardManager_TaskList__o *)UiData,
        v14,
        (const MethodInfo_305896C *)Method_System_Collections_Generic_List_WarBoardUiData__Remove__);
      return;
    }
LABEL_13:
    sub_B5D69C(UiData, v14);
  }
  if ( max_length )
  {
    v16 = (WarBoardUiData_o *)sub_B5D694(WarBoardUiData_TypeInfo);
    WarBoardUiData___ctor_26255852(v16, squareIndex, setKeys, 0LL);
    UiData = (WarBoardUiData_o *)this->fields.listUiData;
    if ( UiData )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UiData,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardUiData__Add__);
      return;
    }
    goto LABEL_13;
  }
}


void __fastcall WarBoardData__UpdateUiData_23203000(
        WarBoardData_o *this,
        System_Int32_array *pieceIndex,
        System_String_array *setKeys,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  WarBoardUiData_o *UiData_23249100; // x0
  WarBoardManager_TaskList_o *v14; // x1
  il2cpp_array_size_t max_length; // w8
  WarBoardUiData_o *v16; // x22

  if ( (byte_42E77A6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_WarBoardUiData__Add__,
      (_DWORD)pieceIndex,
      (_DWORD)setKeys,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardUiData__Remove__, v7, v8, v9);
    sub_B5D5C4(&WarBoardUiData_TypeInfo, v10, v11, v12);
    byte_42E77A6 = 1;
  }
  UiData_23249100 = WarBoardData__GetUiData_23249100(this, pieceIndex, (const MethodInfo *)setKeys);
  if ( !setKeys )
    goto LABEL_13;
  max_length = setKeys->max_length;
  v14 = (WarBoardManager_TaskList_o *)UiData_23249100;
  if ( UiData_23249100 )
  {
    if ( max_length )
    {
      WarBoardUiData__SetKeys(UiData_23249100, setKeys, 0LL);
      return;
    }
    UiData_23249100 = (WarBoardUiData_o *)this->fields.listUiData;
    if ( UiData_23249100 )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        (System_Collections_Generic_List_WarBoardManager_TaskList__o *)UiData_23249100,
        v14,
        (const MethodInfo_305896C *)Method_System_Collections_Generic_List_WarBoardUiData__Remove__);
      return;
    }
LABEL_13:
    sub_B5D69C(UiData_23249100, v14);
  }
  if ( max_length )
  {
    v16 = (WarBoardUiData_o *)sub_B5D694(WarBoardUiData_TypeInfo);
    WarBoardUiData___ctor_26255936(v16, pieceIndex, setKeys, 0LL);
    UiData_23249100 = (WarBoardUiData_o *)this->fields.listUiData;
    if ( UiData_23249100 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UiData_23249100,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardUiData__Add__);
      return;
    }
    goto LABEL_13;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct WarBoardPieceData_array *pieces; // x19
  WarBoardData___c_c *v18; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__62_0; // x20
  Il2CppObject *v21; // x21
  struct WarBoardData___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  int64_t result; // x0

  if ( (byte_42E7751 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Find_WarBoardPieceData___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Predicate_WarBoardPieceData___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Predicate_WarBoardPieceData__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_WarBoardData___c__get_PlayerMasterUserEquipId_b__62_0__, v11, v12, v13);
    sub_B5D5C4(&WarBoardData___c_TypeInfo, v14, v15, v16);
    byte_42E7751 = 1;
  }
  pieces = this->fields.pieces;
  v18 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v18 = WarBoardData___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__62_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__62_0;
  if ( !_9__62_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__62_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_WarBoardPieceData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__62_0,
      v21,
      Method_WarBoardData___c__get_PlayerMasterUserEquipId_b__62_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_WarBoardPieceData___ctor__);
    v22 = WarBoardData___c_TypeInfo->static_fields;
    v22->__9__62_0 = (struct System_Predicate_WarBoardPieceData__o *)_9__62_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v22->__9__62_0,
      (System_Int32_array **)_9__62_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  result = (int64_t)System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                      (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)pieces,
                      (System_Predicate_T__o *)_9__62_0,
                      (const MethodInfo_1FC03F4 *)Method_System_Array_Find_WarBoardPieceData___);
  if ( result )
    return *(_QWORD *)(result + 240);
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
    sub_B5D69C(this, method);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._bgAnimationInfo_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._bgAnimationInfo_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  struct WarBoardPieceData_array *v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  v9 = WarBoardData_BattleParticipantInfo__AggregateBattleParticipants(v7, attackPieceData, targetPieceData, v8);
  this->fields._Participants_k__BackingField = v9;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
}


void __fastcall WarBoardData_BattleParticipantInfo___ctor_23080560(
        WarBoardData_BattleParticipantInfo_o *this,
        System_UInt32_array *uniqueIndexArray,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  __int64 v24; // x21
  WebViewManager_o *Instance; // x0
  __int64 v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x1
  System_Func_uint__WarBoardPieceData__o *v34; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  struct WarBoardPieceData_array *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7

  if ( (byte_42E7660 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_Select_uint__WarBoardPieceData___,
      (_DWORD)uniqueIndexArray,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Func_uint__WarBoardPieceData___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Func_uint__WarBoardPieceData__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&Method_WarBoardData_BattleParticipantInfo___c__DisplayClass13_0___ctor_b__0__, v18, v19, v20);
    sub_B5D5C4(&WarBoardData_BattleParticipantInfo___c__DisplayClass13_0_TypeInfo, v21, v22, v23);
    byte_42E7660 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v24 = sub_B5D694(WarBoardData_BattleParticipantInfo___c__DisplayClass13_0_TypeInfo);
  WarBoardData_BattleParticipantInfo___c__DisplayClass13_0___ctor(
    (WarBoardData_BattleParticipantInfo___c__DisplayClass13_0_o *)v24,
    0LL);
  if ( !uniqueIndexArray )
    goto LABEL_9;
  if ( (int)uniqueIndexArray->max_length > 1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance && v24 )
    {
      v33 = *(System_Int32_array ***)&Instance[4].fields.m_CachedPtr;
      *(_QWORD *)(v24 + 16) = v33;
      sub_B5D560((BattleServantConfConponent_o *)(v24 + 16), v33, v27, v28, v29, v30, v31, v32);
      v34 = (System_Func_uint__WarBoardPieceData__o *)sub_B5D694(System_Func_uint__WarBoardPieceData__TypeInfo);
      System_Func_uint__WarBoardPieceData____ctor(
        v34,
        (Il2CppObject *)v24,
        Method_WarBoardData_BattleParticipantInfo___c__DisplayClass13_0___ctor_b__0__,
        (const MethodInfo_2C36458 *)Method_System_Func_uint__WarBoardPieceData___ctor__);
      v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_uint__WarBoardPieceData_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)uniqueIndexArray,
                                                                   (System_Func_TSource__TResult__o *)v34,
                                                                   (const MethodInfo_1CB42A8 *)Method_System_Linq_Enumerable_Select_uint__WarBoardPieceData___);
      v36 = (struct WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                v35,
                                                (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
      this->fields._Participants_k__BackingField = v36;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields,
        (System_Int32_array **)v36,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
      return;
    }
LABEL_9:
    sub_B5D69C(Instance, v26);
  }
  this->fields._Invalid_k__BackingField = 1;
}


WarBoardPieceData_array *__fastcall WarBoardData_BattleParticipantInfo__AggregateBattleParticipants(
        WarBoardData_BattleParticipantInfo_o *this,
        WarBoardPieceData_o *attackPieceData,
        WarBoardPieceData_o *targetPieceData,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x19
  WarBoardData_o *Instance; // x0
  __int64 v23; // x1
  struct WarBoardStageNpcMaster_o *stageNpcMaster; // x8
  WarBoardData_o *v25; // x20
  unsigned __int64 v26; // x23
  struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o **p_npcEntityDict; // x24
  WarBoardManager_TaskList_o *v28; // x21
  __int64 v30; // x0

  if ( (byte_42E7662 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_WarBoardPieceData__Add__,
      (_DWORD)attackPieceData,
      (_DWORD)targetPieceData,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPieceData__Contains__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v18, v19, v20);
    byte_42E7662 = 1;
  }
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( !v21
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v21,
          (EventMissionProgressRequest_Argument_ProgressData_o *)attackPieceData,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v21,
          (EventMissionProgressRequest_Argument_ProgressData_o *)targetPieceData,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__),
        (Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || !targetPieceData
    || (Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList) == 0LL
    || (Instance = (WarBoardData_o *)WarBoardData__GetPicesForRangeIsAlive(
                                       Instance,
                                       targetPieceData->fields._nowSquareIndex_k__BackingField,
                                       1,
                                       1,
                                       0LL)) == 0LL )
  {
LABEL_19:
    sub_B5D69C(Instance, v23);
  }
  stageNpcMaster = Instance->fields.stageNpcMaster;
  v25 = Instance;
  if ( (int)stageNpcMaster >= 1 )
  {
    v26 = 0LL;
    p_npcEntityDict = &Instance->fields.npcEntityDict;
    do
    {
      if ( v26 >= (unsigned int)stageNpcMaster )
      {
        v30 = sub_B5D6C8(Instance);
        sub_B5D668(v30, 0LL);
      }
      v28 = (WarBoardManager_TaskList_o *)p_npcEntityDict[v26];
      Instance = (WarBoardData_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                     (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v21,
                                     v28,
                                     (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_WarBoardPieceData__Contains__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !v28 )
          goto LABEL_19;
        Instance = (WarBoardData_o *)WarBoardPieceData__get_isMaster((WarBoardPieceData_o *)v28, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (WarBoardData_o *)WarBoardPieceData__HasAvailableWarBoardNotAttackedBuff(
                                         (WarBoardPieceData_o *)v28,
                                         0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v21,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
        }
      }
      LODWORD(stageNpcMaster) = v25->fields.stageNpcMaster;
      ++v26;
    }
    while ( (__int64)v26 < (int)stageNpcMaster );
  }
  return (WarBoardPieceData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v21,
                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
}


WarBoardData_BattleParticipantInfo_o *__fastcall WarBoardData_BattleParticipantInfo__LoadFromUniqueIndex(
        System_UInt32_array *uniqueIndexArray,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WarBoardData_BattleParticipantInfo_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_42E7663 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardData_BattleParticipantInfo_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7663 = 1;
  }
  v5 = (WarBoardData_BattleParticipantInfo_o *)sub_B5D694(WarBoardData_BattleParticipantInfo_TypeInfo);
  WarBoardData_BattleParticipantInfo___ctor_23080560(v5, uniqueIndexArray, v6);
  return v5;
}


System_UInt32_array *__fastcall WarBoardData_BattleParticipantInfo__ToUniqueIndexArray(
        WarBoardData_BattleParticipantInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_IEnumerable_TSource__o *Participants_k__BackingField; // x19
  WarBoardData_BattleParticipantInfo___c_c *v21; // x0
  struct WarBoardData_BattleParticipantInfo___c_StaticFields *static_fields; // x8
  System_Func_WarBoardStageNpcEntity__uint__o *_9__14_0; // x20
  Il2CppObject *v24; // x21
  struct WarBoardData_BattleParticipantInfo___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0

  if ( (byte_42E7661 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__uint___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_uint___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_WarBoardPieceData__uint___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_WarBoardPieceData__uint__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_WarBoardData_BattleParticipantInfo___c__ToUniqueIndexArray_b__14_0__, v14, v15, v16);
    sub_B5D5C4(&WarBoardData_BattleParticipantInfo___c_TypeInfo, v17, v18, v19);
    byte_42E7661 = 1;
  }
  Participants_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._Participants_k__BackingField;
  v21 = WarBoardData_BattleParticipantInfo___c_TypeInfo;
  if ( (BYTE3(WarBoardData_BattleParticipantInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData_BattleParticipantInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_BattleParticipantInfo___c_TypeInfo);
    v21 = WarBoardData_BattleParticipantInfo___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__14_0 = (System_Func_WarBoardStageNpcEntity__uint__o *)static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = WarBoardData_BattleParticipantInfo___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__14_0 = (System_Func_WarBoardStageNpcEntity__uint__o *)sub_B5D694(System_Func_WarBoardPieceData__uint__TypeInfo);
    System_Func_WarBoardStageNpcEntity__uint____ctor(
      _9__14_0,
      v24,
      Method_WarBoardData_BattleParticipantInfo___c__ToUniqueIndexArray_b__14_0__,
      (const MethodInfo_2C31790 *)Method_System_Func_WarBoardPieceData__uint___ctor__);
    v25 = WarBoardData_BattleParticipantInfo___c_TypeInfo->static_fields;
    v25->__9__14_0 = (struct System_Func_WarBoardPieceData__uint__o *)_9__14_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v25->__9__14_0,
      (System_Int32_array **)_9__14_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardPieceData__uint_(
                                                               Participants_k__BackingField,
                                                               (System_Func_TSource__TResult__o *)_9__14_0,
                                                               (const MethodInfo_1CB3AA4 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__uint___);
  return System_Linq_Enumerable__ToArray_uint_(
           v32,
           (const MethodInfo_1CB7978 *)Method_System_Linq_Enumerable_ToArray_uint___);
}


WarBoardPieceData_o *__fastcall WarBoardData_BattleParticipantInfo__get_Attacker(
        WarBoardData_BattleParticipantInfo_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceData_array *Participants_k__BackingField; // x8
  __int64 v4; // x0

  Participants_k__BackingField = this->fields._Participants_k__BackingField;
  if ( !Participants_k__BackingField )
    sub_B5D69C(this, method);
  if ( !Participants_k__BackingField->max_length )
  {
    v4 = sub_B5D6C8(this);
    sub_B5D668(v4, 0LL);
  }
  return Participants_k__BackingField->m_Items[0];
}


WarBoardPieceData_o *__fastcall WarBoardData_BattleParticipantInfo__get_Defender(
        WarBoardData_BattleParticipantInfo_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceData_array *Participants_k__BackingField; // x8
  __int64 v4; // x0

  Participants_k__BackingField = this->fields._Participants_k__BackingField;
  if ( !Participants_k__BackingField )
    sub_B5D69C(this, method);
  if ( Participants_k__BackingField->max_length <= 1 )
  {
    v4 = sub_B5D6C8(this);
    sub_B5D668(v4, 0LL);
  }
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42F549F & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardData_BattleParticipantInfo___c_TypeInfo, v1, v2, v3);
    byte_42F549F = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(WarBoardData_BattleParticipantInfo___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardData_BattleParticipantInfo___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(0LL, x);
  return WarBoardData__GetPiece_23222488(warBoardData, x, 0, 0LL);
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
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
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
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_QWORD *)&this->fields.questId = 0LL;
  this->fields.stageId = 0;
  this->fields.pieceSaves = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.pieceSaves, 0LL, v3, v4, v5, v6, v7, v8);
  this->fields.itemSaves = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.itemSaves, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.treasureSaves = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.treasureSaves, 0LL, v15, v16, v17, v18, v19, v20);
  this->fields.wallSaves = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.wallSaves, 0LL, v21, v22, v23, v24, v25, v26);
  this->fields.squareSaves = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.squareSaves, 0LL, v27, v28, v29, v30, v31, v32);
  this->fields.cameraPos = UnityEngine_Vector2__get_zero(0LL);
  this->fields.cameraSize = 0.0;
  this->fields.onBoardSkillUpdate = 0;
  *(_QWORD *)&this->fields.turn = 0xFFFFFFFF00000000LL;
  this->fields.turnGroupId = -1;
  this->fields.eventSaves = 0LL;
  this->fields.isPlayedHalfDeadMessage = 0;
  *(_QWORD *)&this->fields.randLogicCount = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.eventSaves, 0LL, v33, v34, v35, v36, v37, v38);
  this->fields.winCondId = -1;
  this->fields.latestBattlePieceUniqueIndexes = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.latestBattlePieceUniqueIndexes,
    0LL,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  this->fields.prevCondSaves = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.prevCondSaves, 0LL, v45, v46, v47, v48, v49, v50);
  this->fields.reinforcementsSaves = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.reinforcementsSaves, 0LL, v51, v52, v53, v54, v55, v56);
  this->fields.playedReinforcements = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.playedReinforcements, 0LL, v57, v58, v59, v60, v61, v62);
  this->fields.uiDataSaves = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.uiDataSaves, 0LL, v63, v64, v65, v66, v67, v68);
  this->fields.bgAnimationInfo = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.bgAnimationInfo, 0LL, v69, v70, v71, v72, v73, v74);
  this->fields.squareIndexInfo = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.squareIndexInfo, 0LL, v75, v76, v77, v78, v79, v80);
  this->fields.bossBattleInfo = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.bossBattleInfo, 0LL, v81, v82, v83, v84, v85, v86);
}


void __fastcall WarBoardData_WarBoardLocalSaveData___ctor_23081720(
        WarBoardData_WarBoardLocalSaveData_o *this,
        WarBoardData_o *warBoardData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  int v81; // w1
  int v82; // w2
  __int64 v83; // x3
  int v84; // w1
  int v85; // w2
  __int64 v86; // x3
  int v87; // w1
  int v88; // w2
  __int64 v89; // x3
  int v90; // w1
  int v91; // w2
  __int64 v92; // x3
  int v93; // w1
  int v94; // w2
  __int64 v95; // x3
  int v96; // w1
  int v97; // w2
  __int64 v98; // x3
  int v99; // w1
  int v100; // w2
  __int64 v101; // x3
  __int64 GutsCount; // x0
  __int64 v103; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  struct WarBoardDataEntity_o *v105; // x8
  struct WarBoardDataEntity_o *v106; // x8
  struct WarBoardDataEntity_o *v107; // x8
  struct WarBoardDataEntity_o *v108; // x8
  struct WarBoardDataEntity_o *v109; // x8
  struct WarBoardPieceData_array *pieces; // x8
  __int64 v111; // x22
  struct WarBoardPieceData_SaveData_array *v112; // x0
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  unsigned __int64 v119; // x24
  signed __int64 v120; // x25
  __int64 v121; // x26
  struct WarBoardPieceData_array *v122; // x8
  struct WarBoardPieceData_SaveData_array *pieceSaves; // x20
  WarBoardPieceData_o *v124; // x23
  WarBoardPieceData_SaveData_o *v125; // x22
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  struct WarBoardItemData_array *items; // x8
  __int64 v133; // x22
  struct WarBoardItemData_SaveData_array *v134; // x0
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  unsigned __int64 v141; // x24
  signed __int64 v142; // x25
  __int64 v143; // x26
  struct WarBoardItemData_array *v144; // x8
  struct WarBoardItemData_SaveData_array *itemSaves; // x20
  WarBoardItemData_o *v146; // x23
  WarBoardItemData_SaveData_o *v147; // x22
  const MethodInfo *v148; // x2
  System_String_array **v149; // x2
  System_String_array **v150; // x3
  System_Boolean_array **v151; // x4
  System_Int32_array **v152; // x5
  System_Int32_array *v153; // x6
  System_Int32_array *v154; // x7
  struct WarBoardTreasureData_array *treasures; // x8
  __int64 v156; // x22
  struct WarBoardTreasureData_SaveData_array *v157; // x0
  System_String_array **v158; // x2
  System_String_array **v159; // x3
  System_Boolean_array **v160; // x4
  System_Int32_array **v161; // x5
  System_Int32_array *v162; // x6
  System_Int32_array *v163; // x7
  unsigned __int64 v164; // x24
  signed __int64 v165; // x25
  __int64 v166; // x26
  struct WarBoardTreasureData_array *v167; // x8
  struct WarBoardTreasureData_SaveData_array *treasureSaves; // x20
  WarBoardTreasureData_o *v169; // x23
  WarBoardTreasureData_SaveData_o *v170; // x22
  System_String_array **v171; // x2
  System_String_array **v172; // x3
  System_Boolean_array **v173; // x4
  System_Int32_array **v174; // x5
  System_Int32_array *v175; // x6
  System_Int32_array *v176; // x7
  struct WarBoardWallData_array *walls; // x8
  __int64 v178; // x22
  struct WarBoardWallData_SaveData_array *v179; // x0
  System_String_array **v180; // x2
  System_String_array **v181; // x3
  System_Boolean_array **v182; // x4
  System_Int32_array **v183; // x5
  System_Int32_array *v184; // x6
  System_Int32_array *v185; // x7
  unsigned __int64 v186; // x24
  signed __int64 v187; // x25
  __int64 v188; // x26
  struct WarBoardWallData_array *v189; // x8
  struct WarBoardWallData_SaveData_array *wallSaves; // x20
  WarBoardWallData_o *v191; // x23
  WarBoardWallData_SaveData_o *v192; // x22
  System_String_array **v193; // x2
  System_String_array **v194; // x3
  System_Boolean_array **v195; // x4
  System_Int32_array **v196; // x5
  System_Int32_array *v197; // x6
  System_Int32_array *v198; // x7
  struct WarBoardSquareData_array *squares; // x8
  __int64 v200; // x22
  struct WarBoardSquareData_SaveData_array *v201; // x0
  System_String_array **v202; // x2
  System_String_array **v203; // x3
  System_Boolean_array **v204; // x4
  System_Int32_array **v205; // x5
  System_Int32_array *v206; // x6
  System_Int32_array *v207; // x7
  unsigned __int64 v208; // x24
  signed __int64 v209; // x25
  __int64 v210; // x26
  struct WarBoardSquareData_array *v211; // x8
  struct WarBoardSquareData_SaveData_array *squareSaves; // x20
  WarBoardSquareData_o *v213; // x23
  WarBoardSquareData_SaveData_o *v214; // x22
  System_String_array **v215; // x2
  System_String_array **v216; // x3
  System_Boolean_array **v217; // x4
  System_Int32_array **v218; // x5
  System_Int32_array *v219; // x6
  System_Int32_array *v220; // x7
  struct System_Collections_Generic_List_WarBoardEventData__o *listEvent; // x8
  int size; // w22
  struct WarBoardEventData_SaveData_array *v223; // x0
  struct WarBoardEventData_SaveData_array **p_eventSaves; // x21
  System_String_array **v225; // x2
  System_String_array **v226; // x3
  System_Boolean_array **v227; // x4
  System_Int32_array **v228; // x5
  System_Int32_array *v229; // x6
  System_Int32_array *v230; // x7
  System_String_array **v231; // x2
  System_String_array **v232; // x3
  System_Boolean_array **v233; // x4
  System_Int32_array **v234; // x5
  System_Int32_array *v235; // x6
  System_Int32_array *v236; // x7
  __int64 v237; // x24
  __int64 v238; // x27
  __int64 v239; // x25
  struct System_Collections_Generic_List_WarBoardEventData__o *v240; // x22
  unsigned int *v241; // x28
  WarBoardEventData_o *v242; // x23
  WarBoardEventData_SaveData_o *v243; // x22
  const MethodInfo *v244; // x2
  System_String_array **v245; // x2
  System_String_array **v246; // x3
  System_Boolean_array **v247; // x4
  System_Int32_array **v248; // x5
  System_Int32_array *v249; // x6
  System_Int32_array *v250; // x7
  __int64 v251; // x8
  System_Int32_array **latestPieceActionSquareIndexes; // x1
  System_Int32_array **latestBattlePieceUniqueIndexes; // x1
  System_String_array **v254; // x2
  System_String_array **v255; // x3
  System_Boolean_array **v256; // x4
  System_Int32_array **v257; // x5
  System_Int32_array *v258; // x6
  System_Int32_array *v259; // x7
  struct System_Collections_Generic_List_WarBoardPrevCondData__o *listPrevCond; // x8
  int v261; // w22
  System_Int32_array **v262; // x0
  System_String_array **v263; // x2
  System_String_array **v264; // x3
  System_Boolean_array **v265; // x4
  System_Int32_array **v266; // x5
  System_Int32_array *v267; // x6
  System_Int32_array *v268; // x7
  __int64 v269; // x24
  __int64 v270; // x27
  __int64 v271; // x25
  struct System_Collections_Generic_List_WarBoardPrevCondData__o *v272; // x22
  unsigned int *prevCondSaves; // x28
  WarBoardPrevCondData_o *v274; // x23
  WarBoardPrevCondData_SaveData_o *v275; // x22
  System_String_array **v276; // x2
  System_String_array **v277; // x3
  System_Boolean_array **v278; // x4
  System_Int32_array **v279; // x5
  System_Int32_array *v280; // x6
  System_Int32_array *v281; // x7
  __int64 v282; // x8
  struct System_Collections_Generic_List_HoldReinforcementsData__o *reinforcementsSaveList; // x8
  int v284; // w22
  System_Int32_array **v285; // x0
  System_String_array **v286; // x2
  System_String_array **v287; // x3
  System_Boolean_array **v288; // x4
  System_Int32_array **v289; // x5
  System_Int32_array *v290; // x6
  System_Int32_array *v291; // x7
  __int64 v292; // x24
  __int64 v293; // x27
  __int64 v294; // x25
  struct System_Collections_Generic_List_HoldReinforcementsData__o *v295; // x22
  unsigned int *reinforcementsSaves; // x28
  HoldReinforcementsData_o *v297; // x23
  HoldReinforcementsData_SaveData_o *v298; // x22
  System_String_array **v299; // x2
  System_String_array **v300; // x3
  System_Boolean_array **v301; // x4
  System_Int32_array **v302; // x5
  System_Int32_array *v303; // x6
  System_Int32_array *v304; // x7
  __int64 v305; // x8
  System_Int32_array **v306; // x0
  System_String_array **v307; // x2
  System_String_array **v308; // x3
  System_Boolean_array **v309; // x4
  System_Int32_array **v310; // x5
  System_Int32_array *v311; // x6
  System_Int32_array *v312; // x7
  struct System_Collections_Generic_List_WarBoardUiData__o *listUiData; // x8
  int v314; // w22
  System_Int32_array **v315; // x0
  System_String_array **v316; // x2
  System_String_array **v317; // x3
  System_Boolean_array **v318; // x4
  System_Int32_array **v319; // x5
  System_Int32_array *v320; // x6
  System_Int32_array *v321; // x7
  __int64 v322; // x24
  __int64 v323; // x27
  __int64 v324; // x25
  struct System_Collections_Generic_List_WarBoardUiData__o *v325; // x22
  unsigned int *uiDataSaves; // x28
  WarBoardUiData_o *v327; // x23
  WarBoardUiData_SaveData_o *v328; // x22
  System_String_array **v329; // x2
  System_String_array **v330; // x3
  System_Boolean_array **v331; // x4
  System_Int32_array **v332; // x5
  System_Int32_array *v333; // x6
  System_Int32_array *v334; // x7
  __int64 v335; // x8
  struct WarBoardDataEntity_o *v336; // x8
  int32_t v337; // w22
  System_Int32_array **v338; // x0
  System_String_array **v339; // x2
  System_String_array **v340; // x3
  System_Boolean_array **v341; // x4
  System_Int32_array **v342; // x5
  System_Int32_array *v343; // x6
  System_Int32_array *v344; // x7
  unsigned __int64 v345; // x24
  signed __int64 v346; // x25
  __int64 v347; // x26
  struct WarBoardDataEntity_o *v348; // x8
  struct WarBoardSquareIndexData_array *squareIndexInfo; // x8
  unsigned int *v350; // x20
  WarBoardSquareIndexData_o *v351; // x23
  WarBoardSquareIndexData_SaveData_o *v352; // x22
  System_String_array **v353; // x2
  System_String_array **v354; // x3
  System_Boolean_array **v355; // x4
  System_Int32_array **v356; // x5
  System_Int32_array *v357; // x6
  System_Int32_array *v358; // x7
  struct WarBoardDataEntity_o *v359; // x8
  int32_t v360; // w22
  System_Int32_array **v361; // x0
  System_String_array **v362; // x2
  System_String_array **v363; // x3
  System_Boolean_array **v364; // x4
  System_Int32_array **v365; // x5
  System_Int32_array *v366; // x6
  System_Int32_array *v367; // x7
  unsigned __int64 v368; // x24
  signed __int64 v369; // x25
  __int64 v370; // x26
  struct WarBoardDataEntity_o *v371; // x8
  struct WarBoardBossBattleData_array *bossBattleInfo; // x8
  unsigned int *v373; // x20
  WarBoardBossBattleData_o *v374; // x23
  WarBoardBossBattleData_SaveData_o *v375; // x22
  System_String_array **v376; // x2
  System_String_array **v377; // x3
  System_Boolean_array **v378; // x4
  System_Int32_array **v379; // x5
  System_Int32_array *v380; // x6
  System_Int32_array *v381; // x7
  int32_t ContinueConsumeType_k__BackingField; // w8
  __int64 v383; // x0
  __int64 v384; // x0
  WarBoardData_WarBoardLocalSaveData_o *v385; // [xsp+8h] [xbp-58h]

  if ( (byte_42E7664 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___, (_DWORD)warBoardData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardEventData__get_Count__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_HoldReinforcementsData__get_Count__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardUiData__get_Count__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPrevCondData__get_Count__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardEventData__get_Item__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_HoldReinforcementsData__get_Item__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardUiData__get_Item__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPrevCondData__get_Item__, v33, v34, v35);
    sub_B5D5C4(&WarBoardUiData_SaveData___TypeInfo, v36, v37, v38);
    sub_B5D5C4(&WarBoardSquareData_SaveData___TypeInfo, v39, v40, v41);
    sub_B5D5C4(&WarBoardTreasureData_SaveData___TypeInfo, v42, v43, v44);
    sub_B5D5C4(&WarBoardSquareIndexData_SaveData___TypeInfo, v45, v46, v47);
    sub_B5D5C4(&HoldReinforcementsData_SaveData___TypeInfo, v48, v49, v50);
    sub_B5D5C4(&WarBoardItemData_SaveData___TypeInfo, v51, v52, v53);
    sub_B5D5C4(&WarBoardBossBattleData_SaveData___TypeInfo, v54, v55, v56);
    sub_B5D5C4(&WarBoardEventData_SaveData___TypeInfo, v57, v58, v59);
    sub_B5D5C4(&WarBoardPrevCondData_SaveData___TypeInfo, v60, v61, v62);
    sub_B5D5C4(&WarBoardPieceData_SaveData___TypeInfo, v63, v64, v65);
    sub_B5D5C4(&WarBoardWallData_SaveData___TypeInfo, v66, v67, v68);
    sub_B5D5C4(&WarBoardItemData_SaveData_TypeInfo, v69, v70, v71);
    sub_B5D5C4(&WarBoardPieceData_SaveData_TypeInfo, v72, v73, v74);
    sub_B5D5C4(&WarBoardWallData_SaveData_TypeInfo, v75, v76, v77);
    sub_B5D5C4(&WarBoardUiData_SaveData_TypeInfo, v78, v79, v80);
    sub_B5D5C4(&WarBoardTreasureData_SaveData_TypeInfo, v81, v82, v83);
    sub_B5D5C4(&WarBoardEventData_SaveData_TypeInfo, v84, v85, v86);
    sub_B5D5C4(&WarBoardSquareData_SaveData_TypeInfo, v87, v88, v89);
    sub_B5D5C4(&WarBoardSquareIndexData_SaveData_TypeInfo, v90, v91, v92);
    sub_B5D5C4(&WarBoardPrevCondData_SaveData_TypeInfo, v93, v94, v95);
    sub_B5D5C4(&HoldReinforcementsData_SaveData_TypeInfo, v96, v97, v98);
    sub_B5D5C4(&WarBoardBossBattleData_SaveData_TypeInfo, v99, v100, v101);
    byte_42E7664 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !warBoardData )
    goto LABEL_128;
  serverData = warBoardData->fields.serverData;
  if ( !serverData )
    goto LABEL_128;
  this->fields.questId = serverData->fields.questId;
  v105 = warBoardData->fields.serverData;
  if ( !v105 )
    goto LABEL_128;
  this->fields.questPhase = v105->fields.questPhase;
  v106 = warBoardData->fields.serverData;
  if ( !v106 )
    goto LABEL_128;
  this->fields.stageId = v106->fields.stageId;
  v107 = warBoardData->fields.serverData;
  if ( !v107 )
    goto LABEL_128;
  this->fields.turn = v107->fields.turn;
  v108 = warBoardData->fields.serverData;
  if ( !v108 )
    goto LABEL_128;
  this->fields.turnForceId = v108->fields.turnForceId;
  v109 = warBoardData->fields.serverData;
  if ( !v109 )
    goto LABEL_128;
  this->fields.turnGroupId = v109->fields.turnGroupId;
  pieces = warBoardData->fields.pieces;
  if ( !pieces )
    goto LABEL_128;
  v111 = *(_QWORD *)&pieces->max_length;
  v112 = (struct WarBoardPieceData_SaveData_array *)sub_B5D5DC(
                                                      WarBoardPieceData_SaveData___TypeInfo,
                                                      (unsigned int)v111);
  this->fields.pieceSaves = v112;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.pieceSaves,
    (System_Int32_array **)v112,
    v113,
    v114,
    v115,
    v116,
    v117,
    v118);
  if ( (int)v111 >= 1 )
  {
    v119 = 0LL;
    v120 = (int)v111;
    v121 = 32LL;
    while ( 1 )
    {
      v122 = warBoardData->fields.pieces;
      if ( !v122 )
        break;
      if ( v119 >= v122->max_length )
        goto LABEL_129;
      pieceSaves = this->fields.pieceSaves;
      v124 = *(WarBoardPieceData_o **)((char *)&v122->obj.klass + v121);
      v125 = (WarBoardPieceData_SaveData_o *)sub_B5D694(WarBoardPieceData_SaveData_TypeInfo);
      WarBoardPieceData_SaveData___ctor_20357988(v125, v124, 0LL);
      if ( !pieceSaves )
        break;
      if ( v125 )
      {
        GutsCount = sub_B5D684(v125, pieceSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
        {
LABEL_130:
          v384 = sub_B5D6BC();
          sub_B5D668(v384, 0LL);
        }
      }
      if ( v119 >= pieceSaves->max_length )
      {
LABEL_129:
        v383 = sub_B5D6C8(GutsCount);
        sub_B5D668(v383, 0LL);
      }
      *(Il2CppClass **)((char *)&pieceSaves->obj.klass + v121) = (Il2CppClass *)v125;
      sub_B5D560(
        (BattleServantConfConponent_o *)((char *)pieceSaves + v121),
        (System_Int32_array **)v125,
        v126,
        v127,
        v128,
        v129,
        v130,
        v131);
      ++v119;
      v121 += 8LL;
      if ( (__int64)v119 >= v120 )
        goto LABEL_20;
    }
LABEL_128:
    sub_B5D69C(GutsCount, v103);
  }
LABEL_20:
  items = warBoardData->fields.items;
  if ( !items )
    goto LABEL_128;
  v133 = *(_QWORD *)&items->max_length;
  v134 = (struct WarBoardItemData_SaveData_array *)sub_B5D5DC(WarBoardItemData_SaveData___TypeInfo, (unsigned int)v133);
  this->fields.itemSaves = v134;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.itemSaves,
    (System_Int32_array **)v134,
    v135,
    v136,
    v137,
    v138,
    v139,
    v140);
  if ( (int)v133 >= 1 )
  {
    v141 = 0LL;
    v142 = (int)v133;
    v143 = 32LL;
    do
    {
      v144 = warBoardData->fields.items;
      if ( !v144 )
        goto LABEL_128;
      if ( v141 >= v144->max_length )
        goto LABEL_129;
      itemSaves = this->fields.itemSaves;
      v146 = *(WarBoardItemData_o **)((char *)&v144->obj.klass + v143);
      v147 = (WarBoardItemData_SaveData_o *)sub_B5D694(WarBoardItemData_SaveData_TypeInfo);
      WarBoardItemData_SaveData___ctor_23084892(v147, v146, v148);
      if ( !itemSaves )
        goto LABEL_128;
      if ( v147 )
      {
        GutsCount = sub_B5D684(v147, itemSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_130;
      }
      if ( v141 >= itemSaves->max_length )
        goto LABEL_129;
      *(Il2CppClass **)((char *)&itemSaves->obj.klass + v143) = (Il2CppClass *)v147;
      sub_B5D560(
        (BattleServantConfConponent_o *)((char *)itemSaves + v143),
        (System_Int32_array **)v147,
        v149,
        v150,
        v151,
        v152,
        v153,
        v154);
      ++v141;
      v143 += 8LL;
    }
    while ( (__int64)v141 < v142 );
  }
  treasures = warBoardData->fields.treasures;
  if ( !treasures )
    goto LABEL_128;
  v156 = *(_QWORD *)&treasures->max_length;
  v157 = (struct WarBoardTreasureData_SaveData_array *)sub_B5D5DC(
                                                         WarBoardTreasureData_SaveData___TypeInfo,
                                                         (unsigned int)v156);
  this->fields.treasureSaves = v157;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.treasureSaves,
    (System_Int32_array **)v157,
    v158,
    v159,
    v160,
    v161,
    v162,
    v163);
  if ( (int)v156 >= 1 )
  {
    v164 = 0LL;
    v165 = (int)v156;
    v166 = 32LL;
    do
    {
      v167 = warBoardData->fields.treasures;
      if ( !v167 )
        goto LABEL_128;
      if ( v164 >= v167->max_length )
        goto LABEL_129;
      treasureSaves = this->fields.treasureSaves;
      v169 = *(WarBoardTreasureData_o **)((char *)&v167->obj.klass + v166);
      v170 = (WarBoardTreasureData_SaveData_o *)sub_B5D694(WarBoardTreasureData_SaveData_TypeInfo);
      WarBoardTreasureData_SaveData___ctor_20370960(v170, v169, 0LL);
      if ( !treasureSaves )
        goto LABEL_128;
      if ( v170 )
      {
        GutsCount = sub_B5D684(v170, treasureSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_130;
      }
      if ( v164 >= treasureSaves->max_length )
        goto LABEL_129;
      *(Il2CppClass **)((char *)&treasureSaves->obj.klass + v166) = (Il2CppClass *)v170;
      sub_B5D560(
        (BattleServantConfConponent_o *)((char *)treasureSaves + v166),
        (System_Int32_array **)v170,
        v171,
        v172,
        v173,
        v174,
        v175,
        v176);
      ++v164;
      v166 += 8LL;
    }
    while ( (__int64)v164 < v165 );
  }
  walls = warBoardData->fields.walls;
  if ( !walls )
    goto LABEL_128;
  v178 = *(_QWORD *)&walls->max_length;
  v179 = (struct WarBoardWallData_SaveData_array *)sub_B5D5DC(WarBoardWallData_SaveData___TypeInfo, (unsigned int)v178);
  this->fields.wallSaves = v179;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.wallSaves,
    (System_Int32_array **)v179,
    v180,
    v181,
    v182,
    v183,
    v184,
    v185);
  if ( (int)v178 >= 1 )
  {
    v186 = 0LL;
    v187 = (int)v178;
    v188 = 32LL;
    do
    {
      v189 = warBoardData->fields.walls;
      if ( !v189 )
        goto LABEL_128;
      if ( v186 >= v189->max_length )
        goto LABEL_129;
      wallSaves = this->fields.wallSaves;
      v191 = *(WarBoardWallData_o **)((char *)&v189->obj.klass + v188);
      v192 = (WarBoardWallData_SaveData_o *)sub_B5D694(WarBoardWallData_SaveData_TypeInfo);
      WarBoardWallData_SaveData___ctor_20374188(v192, v191, 0LL);
      if ( !wallSaves )
        goto LABEL_128;
      if ( v192 )
      {
        GutsCount = sub_B5D684(v192, wallSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_130;
      }
      if ( v186 >= wallSaves->max_length )
        goto LABEL_129;
      *(Il2CppClass **)((char *)&wallSaves->obj.klass + v188) = (Il2CppClass *)v192;
      sub_B5D560(
        (BattleServantConfConponent_o *)((char *)wallSaves + v188),
        (System_Int32_array **)v192,
        v193,
        v194,
        v195,
        v196,
        v197,
        v198);
      ++v186;
      v188 += 8LL;
    }
    while ( (__int64)v186 < v187 );
  }
  squares = warBoardData->fields.squares;
  if ( !squares )
    goto LABEL_128;
  v200 = *(_QWORD *)&squares->max_length;
  v201 = (struct WarBoardSquareData_SaveData_array *)sub_B5D5DC(
                                                       WarBoardSquareData_SaveData___TypeInfo,
                                                       (unsigned int)v200);
  this->fields.squareSaves = v201;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.squareSaves,
    (System_Int32_array **)v201,
    v202,
    v203,
    v204,
    v205,
    v206,
    v207);
  if ( (int)v200 >= 1 )
  {
    v208 = 0LL;
    v209 = (int)v200;
    v210 = 32LL;
    do
    {
      v211 = warBoardData->fields.squares;
      if ( !v211 )
        goto LABEL_128;
      if ( v208 >= v211->max_length )
        goto LABEL_129;
      squareSaves = this->fields.squareSaves;
      v213 = *(WarBoardSquareData_o **)((char *)&v211->obj.klass + v210);
      v214 = (WarBoardSquareData_SaveData_o *)sub_B5D694(WarBoardSquareData_SaveData_TypeInfo);
      WarBoardSquareData_SaveData___ctor_20366008(v214, v213, 0LL);
      if ( !squareSaves )
        goto LABEL_128;
      if ( v214 )
      {
        GutsCount = sub_B5D684(v214, squareSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_130;
      }
      if ( v208 >= squareSaves->max_length )
        goto LABEL_129;
      *(Il2CppClass **)((char *)&squareSaves->obj.klass + v210) = (Il2CppClass *)v214;
      sub_B5D560(
        (BattleServantConfConponent_o *)((char *)squareSaves + v210),
        (System_Int32_array **)v214,
        v215,
        v216,
        v217,
        v218,
        v219,
        v220);
      ++v208;
      v210 += 8LL;
    }
    while ( (__int64)v208 < v209 );
  }
  this->fields.cameraPos = UnityEngine_Vector2__get_zero(0LL);
  *(_QWORD *)&this->fields.cameraSize = 3212836864LL;
  this->fields.onBoardSkillUpdate = 0;
  this->fields.randLogicCount = BattleRandom__GetLogicCount(0LL);
  GutsCount = BattleRandom__GetGutsCount(0LL);
  this->fields.randGutsCount = GutsCount;
  this->fields.isPlayedHalfDeadMessage = warBoardData->fields.isPlayedHalfDeadMessage;
  listEvent = warBoardData->fields.listEvent;
  if ( !listEvent )
    goto LABEL_128;
  size = listEvent->fields._size;
  v223 = (struct WarBoardEventData_SaveData_array *)sub_B5D5DC(
                                                      WarBoardEventData_SaveData___TypeInfo,
                                                      (unsigned int)size);
  this->fields.eventSaves = v223;
  p_eventSaves = &this->fields.eventSaves;
  v385 = this;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventSaves,
    (System_Int32_array **)v223,
    v225,
    v226,
    v227,
    v228,
    v229,
    v230);
  if ( size >= 1 )
  {
    v237 = size;
    v238 = 4LL;
    v239 = 8LL;
    do
    {
      v240 = warBoardData->fields.listEvent;
      if ( !v240 )
        goto LABEL_128;
      v241 = (unsigned int *)*p_eventSaves;
      if ( v238 - 4 >= (unsigned __int64)(unsigned int)v240->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v242 = (WarBoardEventData_o *)*((_QWORD *)&v240->fields._items->obj.klass + v238);
      v243 = (WarBoardEventData_SaveData_o *)sub_B5D694(WarBoardEventData_SaveData_TypeInfo);
      WarBoardEventData_SaveData___ctor_23084988(v243, v242, v244);
      if ( !v241 )
        goto LABEL_128;
      if ( v243 )
      {
        GutsCount = sub_B5D684(v243, *(_QWORD *)(*(_QWORD *)v241 + 64LL));
        if ( !GutsCount )
          goto LABEL_130;
      }
      if ( v238 - 4 >= (unsigned __int64)v241[6] )
        goto LABEL_129;
      *(_QWORD *)&v241[2 * v238] = v243;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v241[v239],
        (System_Int32_array **)v243,
        v245,
        v246,
        v247,
        v248,
        v249,
        v250);
      v251 = v238 - 3;
      ++v238;
      v239 += 2LL;
    }
    while ( v251 < v237 );
  }
  v385->fields.winCondId = warBoardData->fields.winCondId;
  latestPieceActionSquareIndexes = (System_Int32_array **)warBoardData->fields.latestPieceActionSquareIndexes;
  v385->fields.latestPieceActionSquareIndexes = (struct System_Int32_array *)latestPieceActionSquareIndexes;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v385->fields.latestPieceActionSquareIndexes,
    latestPieceActionSquareIndexes,
    v231,
    v232,
    v233,
    v234,
    v235,
    v236);
  latestBattlePieceUniqueIndexes = (System_Int32_array **)warBoardData->fields.latestBattlePieceUniqueIndexes;
  v385->fields.latestBattlePieceUniqueIndexes = (struct System_UInt32_array *)latestBattlePieceUniqueIndexes;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v385->fields.latestBattlePieceUniqueIndexes,
    latestBattlePieceUniqueIndexes,
    v254,
    v255,
    v256,
    v257,
    v258,
    v259);
  listPrevCond = warBoardData->fields.listPrevCond;
  if ( !listPrevCond )
    goto LABEL_128;
  v261 = listPrevCond->fields._size;
  v262 = (System_Int32_array **)sub_B5D5DC(WarBoardPrevCondData_SaveData___TypeInfo, (unsigned int)v261);
  v385->fields.prevCondSaves = (struct WarBoardPrevCondData_SaveData_array *)v262;
  sub_B5D560((BattleServantConfConponent_o *)&v385->fields.prevCondSaves, v262, v263, v264, v265, v266, v267, v268);
  if ( v261 >= 1 )
  {
    v269 = v261;
    v270 = 4LL;
    v271 = 8LL;
    do
    {
      v272 = warBoardData->fields.listPrevCond;
      if ( !v272 )
        goto LABEL_128;
      prevCondSaves = (unsigned int *)v385->fields.prevCondSaves;
      if ( v270 - 4 >= (unsigned __int64)(unsigned int)v272->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v274 = (WarBoardPrevCondData_o *)*((_QWORD *)&v272->fields._items->obj.klass + v270);
      v275 = (WarBoardPrevCondData_SaveData_o *)sub_B5D694(WarBoardPrevCondData_SaveData_TypeInfo);
      WarBoardPrevCondData_SaveData___ctor_20360240(v275, v274, 0LL);
      if ( !prevCondSaves )
        goto LABEL_128;
      if ( v275 )
      {
        GutsCount = sub_B5D684(v275, *(_QWORD *)(*(_QWORD *)prevCondSaves + 64LL));
        if ( !GutsCount )
          goto LABEL_130;
      }
      if ( v270 - 4 >= (unsigned __int64)prevCondSaves[6] )
        goto LABEL_129;
      *(_QWORD *)&prevCondSaves[2 * v270] = v275;
      sub_B5D560(
        (BattleServantConfConponent_o *)&prevCondSaves[v271],
        (System_Int32_array **)v275,
        v276,
        v277,
        v278,
        v279,
        v280,
        v281);
      v282 = v270 - 3;
      ++v270;
      v271 += 2LL;
    }
    while ( v282 < v269 );
  }
  reinforcementsSaveList = warBoardData->fields.reinforcementsSaveList;
  if ( !reinforcementsSaveList )
    goto LABEL_128;
  v284 = reinforcementsSaveList->fields._size;
  v285 = (System_Int32_array **)sub_B5D5DC(HoldReinforcementsData_SaveData___TypeInfo, (unsigned int)v284);
  v385->fields.reinforcementsSaves = (struct HoldReinforcementsData_SaveData_array *)v285;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v385->fields.reinforcementsSaves,
    v285,
    v286,
    v287,
    v288,
    v289,
    v290,
    v291);
  if ( v284 >= 1 )
  {
    v292 = v284;
    v293 = 4LL;
    v294 = 8LL;
    do
    {
      v295 = warBoardData->fields.reinforcementsSaveList;
      if ( !v295 )
        goto LABEL_128;
      reinforcementsSaves = (unsigned int *)v385->fields.reinforcementsSaves;
      if ( v293 - 4 >= (unsigned __int64)(unsigned int)v295->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v297 = (HoldReinforcementsData_o *)*((_QWORD *)&v295->fields._items->obj.klass + v293);
      v298 = (HoldReinforcementsData_SaveData_o *)sub_B5D694(HoldReinforcementsData_SaveData_TypeInfo);
      HoldReinforcementsData_SaveData___ctor_19313908(v298, v297, 0LL);
      if ( !reinforcementsSaves )
        goto LABEL_128;
      if ( v298 )
      {
        GutsCount = sub_B5D684(v298, *(_QWORD *)(*(_QWORD *)reinforcementsSaves + 64LL));
        if ( !GutsCount )
          goto LABEL_130;
      }
      if ( v293 - 4 >= (unsigned __int64)reinforcementsSaves[6] )
        goto LABEL_129;
      *(_QWORD *)&reinforcementsSaves[2 * v293] = v298;
      sub_B5D560(
        (BattleServantConfConponent_o *)&reinforcementsSaves[v294],
        (System_Int32_array **)v298,
        v299,
        v300,
        v301,
        v302,
        v303,
        v304);
      v305 = v293 - 3;
      ++v293;
      v294 += 2LL;
    }
    while ( v305 < v292 );
  }
  GutsCount = (__int64)warBoardData->fields.playedStageReinforcementsList;
  if ( !GutsCount )
    goto LABEL_128;
  v306 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                  (System_Collections_Generic_List_int__o *)GutsCount,
                                  (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  v385->fields.playedReinforcements = (struct System_Int32_array *)v306;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v385->fields.playedReinforcements,
    v306,
    v307,
    v308,
    v309,
    v310,
    v311,
    v312);
  listUiData = warBoardData->fields.listUiData;
  if ( !listUiData )
    goto LABEL_128;
  v314 = listUiData->fields._size;
  v315 = (System_Int32_array **)sub_B5D5DC(WarBoardUiData_SaveData___TypeInfo, (unsigned int)v314);
  v385->fields.uiDataSaves = (struct WarBoardUiData_SaveData_array *)v315;
  sub_B5D560((BattleServantConfConponent_o *)&v385->fields.uiDataSaves, v315, v316, v317, v318, v319, v320, v321);
  if ( v314 >= 1 )
  {
    v322 = v314;
    v323 = 4LL;
    v324 = 8LL;
    do
    {
      v325 = warBoardData->fields.listUiData;
      if ( !v325 )
        goto LABEL_128;
      uiDataSaves = (unsigned int *)v385->fields.uiDataSaves;
      if ( v323 - 4 >= (unsigned __int64)(unsigned int)v325->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v327 = (WarBoardUiData_o *)*((_QWORD *)&v325->fields._items->obj.klass + v323);
      v328 = (WarBoardUiData_SaveData_o *)sub_B5D694(WarBoardUiData_SaveData_TypeInfo);
      WarBoardUiData_SaveData___ctor_20371368(v328, v327, 0LL);
      if ( !uiDataSaves )
        goto LABEL_128;
      if ( v328 )
      {
        GutsCount = sub_B5D684(v328, *(_QWORD *)(*(_QWORD *)uiDataSaves + 64LL));
        if ( !GutsCount )
          goto LABEL_130;
      }
      if ( v323 - 4 >= (unsigned __int64)uiDataSaves[6] )
        goto LABEL_129;
      *(_QWORD *)&uiDataSaves[2 * v323] = v328;
      sub_B5D560(
        (BattleServantConfConponent_o *)&uiDataSaves[v324],
        (System_Int32_array **)v328,
        v329,
        v330,
        v331,
        v332,
        v333,
        v334);
      v335 = v323 - 3;
      ++v323;
      v324 += 2LL;
    }
    while ( v335 < v322 );
  }
  v336 = warBoardData->fields.serverData;
  if ( !v336 )
    goto LABEL_128;
  v337 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v336->fields.squareIndexInfo,
           (const MethodInfo_1CA7CA4 *)Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___);
  v338 = (System_Int32_array **)sub_B5D5DC(WarBoardSquareIndexData_SaveData___TypeInfo, (unsigned int)v337);
  v385->fields.squareIndexInfo = (struct WarBoardSquareIndexData_SaveData_array *)v338;
  sub_B5D560((BattleServantConfConponent_o *)&v385->fields.squareIndexInfo, v338, v339, v340, v341, v342, v343, v344);
  if ( v337 >= 1 )
  {
    v345 = 0LL;
    v346 = v337;
    v347 = 8LL;
    do
    {
      v348 = warBoardData->fields.serverData;
      if ( !v348 )
        goto LABEL_128;
      squareIndexInfo = v348->fields.squareIndexInfo;
      if ( !squareIndexInfo )
        goto LABEL_128;
      if ( v345 >= squareIndexInfo->max_length )
        goto LABEL_129;
      v350 = (unsigned int *)v385->fields.squareIndexInfo;
      v351 = *(WarBoardSquareIndexData_o **)((char *)&squareIndexInfo->obj.klass + v347 * 4);
      v352 = (WarBoardSquareIndexData_SaveData_o *)sub_B5D694(WarBoardSquareIndexData_SaveData_TypeInfo);
      WarBoardSquareIndexData_SaveData___ctor_20366340(v352, v351, 0LL);
      if ( !v350 )
        goto LABEL_128;
      if ( v352 )
      {
        GutsCount = sub_B5D684(v352, *(_QWORD *)(*(_QWORD *)v350 + 64LL));
        if ( !GutsCount )
          goto LABEL_130;
      }
      if ( v345 >= v350[6] )
        goto LABEL_129;
      *(_QWORD *)&v350[v347] = v352;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v350[v347],
        (System_Int32_array **)v352,
        v353,
        v354,
        v355,
        v356,
        v357,
        v358);
      ++v345;
      v347 += 2LL;
    }
    while ( (__int64)v345 < v346 );
  }
  v359 = warBoardData->fields.serverData;
  if ( !v359 )
    goto LABEL_128;
  v360 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v359->fields.bossBattleInfo,
           (const MethodInfo_1CA7CA4 *)Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___);
  v361 = (System_Int32_array **)sub_B5D5DC(WarBoardBossBattleData_SaveData___TypeInfo, (unsigned int)v360);
  v385->fields.bossBattleInfo = (struct WarBoardBossBattleData_SaveData_array *)v361;
  sub_B5D560((BattleServantConfConponent_o *)&v385->fields.bossBattleInfo, v361, v362, v363, v364, v365, v366, v367);
  if ( v360 >= 1 )
  {
    v368 = 0LL;
    v369 = v360;
    v370 = 8LL;
    do
    {
      v371 = warBoardData->fields.serverData;
      if ( !v371 )
        goto LABEL_128;
      bossBattleInfo = v371->fields.bossBattleInfo;
      if ( !bossBattleInfo )
        goto LABEL_128;
      if ( v368 >= bossBattleInfo->max_length )
        goto LABEL_129;
      v373 = (unsigned int *)v385->fields.bossBattleInfo;
      v374 = *(WarBoardBossBattleData_o **)((char *)&bossBattleInfo->obj.klass + v370 * 4);
      v375 = (WarBoardBossBattleData_SaveData_o *)sub_B5D694(WarBoardBossBattleData_SaveData_TypeInfo);
      WarBoardBossBattleData_SaveData___ctor_22451244(v375, v374, 0LL);
      if ( !v373 )
        goto LABEL_128;
      if ( v375 )
      {
        GutsCount = sub_B5D684(v375, *(_QWORD *)(*(_QWORD *)v373 + 64LL));
        if ( !GutsCount )
          goto LABEL_130;
      }
      if ( v368 >= v373[6] )
        goto LABEL_129;
      *(_QWORD *)&v373[v370] = v375;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v373[v370],
        (System_Int32_array **)v375,
        v376,
        v377,
        v378,
        v379,
        v380,
        v381);
      ++v368;
      v370 += 2LL;
    }
    while ( (__int64)v368 < v369 );
  }
  ContinueConsumeType_k__BackingField = warBoardData->fields._ContinueConsumeType_k__BackingField;
  *(_WORD *)&v385->fields.isContinue = 0;
  v385->fields.continueConsumeType = ContinueConsumeType_k__BackingField;
  v385->fields.localSaveTiming = warBoardData->fields.localSaveTiming;
}


void __fastcall WarBoardData___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7655 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardData___c_TypeInfo, v1, v2, v3);
    byte_42E7655 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(WarBoardData___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardData___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, x);
  return x->fields.squareIndex - y->fields.squareIndex;
}


uint32_t __fastcall WarBoardData___c____ctor_b__77_1(
        WarBoardData___c_o *this,
        WarBoardStageNpcEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return (x->fields.forceId << 24) | ((unsigned __int8)x->fields.groupId << 16);
}


uint32_t __fastcall WarBoardData___c____ctor_b__77_2(
        WarBoardData___c_o *this,
        WarBoardActionPointEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return (x->fields.forceId << 24) | ((unsigned __int8)x->fields.groupId << 16);
}


int32_t __fastcall WarBoardData___c____ctor_b__77_3(
        WarBoardData___c_o *this,
        WarBoardStageNpcEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.forceId;
}


int32_t __fastcall WarBoardData___c____ctor_b__77_4(
        WarBoardData___c_o *this,
        WarBoardStageNpcEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.groupId;
}


bool __fastcall WarBoardData___c____ctor_b__77_9(
        WarBoardData___c_o *this,
        WarBoardUserTreasureData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.isReceived;
}


BattleBuffData_o *__fastcall WarBoardData___c___BuffTurnProgressing_b__191_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *p,
        const MethodInfo *method)
{
  if ( !p )
    sub_B5D69C(this, 0LL);
  return WarBoardPieceData__get_BuffData(p, 0LL);
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
    sub_B5D69C(this, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  WebViewManager_o *Instance; // x0
  __int64 v5; // x1
  WarBoardManager_o *v6; // x19

  if ( (byte_42E7657 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E7657 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  v6 = (WarBoardManager_o *)Instance;
  WarBoardManager__UpdateEventBossUIData((WarBoardManager_o *)Instance, 0LL);
  WarBoardManager__SaveEventBossUIData(
    v6,
    v6->fields._EventId_k__BackingField,
    v6->fields._StageId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


bool __fastcall WarBoardData___c___GetAliveEnemyServantPieces_b__110_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return !x->fields._isDead_k__BackingField && WarBoardPieceData__get_isEnemyServant(x, 0LL);
}


bool __fastcall WarBoardData___c___GetAlivePieces_b__107_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return !x->fields._isDead_k__BackingField;
}


bool __fastcall WarBoardData___c___GetAlivePlayerGroupServantPieces_b__109_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return !x->fields._isDead_k__BackingField && WarBoardPieceData__get_isPlayerServant(x, 0LL);
}


bool __fastcall WarBoardData___c___GetAliveServantPieces_b__108_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return !x->fields._isDead_k__BackingField && WarBoardPieceData__get_isServant(x, 0LL);
}


bool __fastcall WarBoardData___c___GetEditableServantPieces_b__120_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return WarBoardPieceData__get_isPlayerServant(x, 0LL);
}


bool __fastcall WarBoardData___c___GetHoldReinforcements_b__188_0(
        WarBoardData___c_o *this,
        HoldReinforcementsData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields._holdNum_k__BackingField < 1;
}


int32_t __fastcall WarBoardData___c___GetInRangeSquareIndecies_b__123_0(
        WarBoardData___c_o *this,
        WarBoardData_SquareRangeSearch_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.squareIndex;
}


bool __fastcall WarBoardData___c___GetPlayerMasterPiece_b__104_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return WarBoardPieceData__get_isPlayerMaster(x, 0LL);
}


bool __fastcall WarBoardData___c___GetPlayerPieces_b__121_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return WarBoardPieceData__get_isPlayerGroup(x, 0LL) && x->fields._iconId_k__BackingField != 0;
}


bool __fastcall WarBoardData___c___IsReachableWinConditions_b__95_0(
        WarBoardData___c_o *this,
        System_Collections_Generic_KeyValuePair_int__bool__o status,
        const MethodInfo *method)
{
  __int64 v3; // x3
  bool value; // x19^4

  value = status.fields.value;
  if ( (byte_42E7656 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__,
      status.fields.key,
      (_DWORD)method,
      v3);
    byte_42E7656 = 1;
  }
  return value;
}


int32_t __fastcall WarBoardData___c___SetContinue_b__82_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields._index_k__BackingField;
}


bool __fastcall WarBoardData___c___SetPlayerMasterUserEquip_b__144_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return WarBoardPieceData__get_isPlayerMaster(x, 0LL);
}


void __fastcall WarBoardData___c___SetRequest_b__156_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  WarBoardPieceData__SetServarData(x, 0LL);
}


System_String_o *__fastcall WarBoardData___c___SetRequest_b__156_1(
        WarBoardData___c_o *this,
        WarBoardItemData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return WarBoardItemData__ToJson(x, 0LL);
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
    sub_B5D69C(this, 0LL);
  return p->fields.pieceComponent;
}


bool __fastcall WarBoardData___c___UpdateBuffTurnNoticeDisp_b__192_1(
        WarBoardData___c_o *this,
        WarBoardPieceBaseComponent_o *c,
        const MethodInfo *method)
{
  __int64 v3; // x3
  _BOOL8 v5; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *v7; // x19

  if ( (byte_42E7658 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)c, (_DWORD)method, v3);
    byte_42E7658 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)c, 0LL, 0LL);
  if ( !v5 )
    return 0;
  if ( !c )
    sub_B5D69C(v5, v6);
  v7 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))c->klass->vtable._4_get_BuffTrunNotice.method)(
                                 c,
                                 c->klass->vtable._5_Initialize.methodPtr);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
    sub_B5D69C(this, n);
  }
  WarBoardServantPieceBuffTurnComponent__UpdateDisp((WarBoardServantPieceBuffTurnComponent_o *)this, 1, 0LL);
}


int32_t __fastcall WarBoardData___c___UpdateCurrentPartyCost_b__143_0(
        WarBoardData___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return UserServantEntity__getCost(x, 0LL);
}


bool __fastcall WarBoardData___c___get_PlayerMasterUserEquipId_b__62_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return WarBoardPieceData__get_isPlayerMaster(x, 0LL);
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
LABEL_8:
    sub_B5D69C(this, x);
  }
  if ( !x )
    goto LABEL_8;
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
    sub_B5D69C(this, 0LL);
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
LABEL_8:
    sub_B5D69C(this, x);
  }
  if ( !x )
    goto LABEL_8;
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
  if ( !x )
    sub_B5D69C(this, 0LL);
  return WarBoardPieceData__get_StageBossIdx(x, 0LL) == this->fields.stageBossIndex;
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
  if ( !x )
    sub_B5D69C(this, 0LL);
  return ((WarBoardPieceData__get_isPlayerGroup(x, 0LL) ^ !this->fields.isPlayerGroup) & 1) != 0
      && WarBoardPieceData__get_isServant(x, 0LL)
      && x->fields._iconId_k__BackingField != 0;
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
    sub_B5D69C(this, 0LL);
  return (x->fields._uniqueIndex_k__BackingField & 0xFF000000) == this->fields.forceIdOnly;
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
    sub_B5D69C(this, 0LL);
  return (x->fields._uniqueIndex_k__BackingField & 0xFFFF0000) == this->fields.forceAndGroup;
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
  __int64 v3; // x3
  WarBoardData___c__DisplayClass118_0_o *v5; // x20

  v5 = this;
  if ( (byte_42E7659 & 1) == 0 )
  {
    this = (WarBoardData___c__DisplayClass118_0_o *)sub_B5D5C4(
                                                      &Method_System_Linq_Enumerable_Contains_int___,
                                                      (_DWORD)x,
                                                      (_DWORD)method,
                                                      v3);
    byte_42E7659 = 1;
  }
  if ( !x )
    sub_B5D69C(this, x);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v5->fields.inRangeSquaers,
           x->fields._nowSquareIndex_k__BackingField,
           (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___);
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
  __int64 v3; // x3
  WarBoardData___c__DisplayClass119_0_o *v5; // x20

  v5 = this;
  if ( (byte_42E765A & 1) == 0 )
  {
    this = (WarBoardData___c__DisplayClass119_0_o *)sub_B5D5C4(
                                                      &Method_System_Linq_Enumerable_Contains_int___,
                                                      (_DWORD)x,
                                                      (_DWORD)method,
                                                      v3);
    byte_42E765A = 1;
  }
  if ( !x )
    sub_B5D69C(this, x);
  return !x->fields._isDead_k__BackingField
      && System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v5->fields.inRangeSquaers,
           x->fields._nowSquareIndex_k__BackingField,
           (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___);
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
  return this->fields.ignoreStart && this->fields.start != x || !this->fields.ignoreStart;
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
  return x->fields.squareIndex != this->fields.position;
}


bool __fastcall WarBoardData___c__DisplayClass125_1___SearchInRangeSquares_b__2(
        WarBoardData___c__DisplayClass125_1_o *this,
        WarBoardData_SquareRangeSearch_o *x,
        const MethodInfo *method)
{
  struct WarBoardData___c__DisplayClass125_0_o *CS___8__locals1; // x8

  if ( !x )
    goto LABEL_7;
  if ( x->fields.squareIndex == this->fields.position )
  {
    CS___8__locals1 = this->fields.CS___8__locals1;
    if ( CS___8__locals1 )
      return x->fields.range < CS___8__locals1->fields.nextRange;
LABEL_7:
    sub_B5D69C(this, x);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
LABEL_8:
    sub_B5D69C(this, x);
  }
  if ( !x )
    goto LABEL_8;
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
    sub_B5D69C(this, 0LL);
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
  __int64 v3; // x3
  WarBoardData___c__DisplayClass143_0_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *svtMaster; // x20
  __int64 v10; // x19
  __int64 v11; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  v5 = this;
  if ( (byte_42E765B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, (_DWORD)x, (_DWORD)method, v3);
    this = (WarBoardData___c__DisplayClass143_0_o *)sub_B5D5C4(
                                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                      v6,
                                                      v7,
                                                      v8);
    byte_42E765B = 1;
  }
  if ( !x )
    goto LABEL_10;
  svtMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)v5->fields.svtMaster;
  v11 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v11;
  *(_QWORD *)&v13.fields.fakeValue = v10;
  this = (WarBoardData___c__DisplayClass143_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                    v13,
                                                    0LL);
  if ( !svtMaster
    || (this = (WarBoardData___c__DisplayClass143_0_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                          svtMaster,
                                                          (int32_t)this,
                                                          (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B5D69C(this, x);
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
    sub_B5D69C(this, x);
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
    sub_B5D69C(this, x);
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
    sub_B5D69C(this, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  WebViewManager_o *Instance; // x0
  System_Action_bool__o *_9__2; // x21
  WarBoardManager_o *v28; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  int32_t key; // w0
  struct System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___o *consumedPieceActionPointDict; // x8
  int32_t v37; // w19
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *Only; // x0
  Il2CppObject *value; // x1
  System_Collections_Generic_KeyValuePair_int__object__o KeyValuePair_int__object; // kr00_16

  if ( (byte_42E765C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_bool__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__List_WarBoardPieceData___get_Key__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__List_WarBoardPieceData___get_Value__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPieceData__AsReadOnly__, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__2__, v23, v24, v25);
    byte_42E765C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  _9__2 = this->fields.__9__2;
  v28 = (WarBoardManager_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_bool__o *)sub_B5D694(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__2__,
      (const MethodInfo_25873D8 *)Method_System_Action_bool___ctor__);
    this->fields.__9__2 = _9__2;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  key = System_Linq_Enumerable__First_KeyValuePair_int__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.consumedPieceActionPointDict,
          (const MethodInfo_1CAA4F8 *)Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____).fields.key;
  consumedPieceActionPointDict = this->fields.consumedPieceActionPointDict;
  v37 = key;
  KeyValuePair_int__object = System_Linq_Enumerable__First_KeyValuePair_int__object__(
                               (System_Collections_Generic_IEnumerable_TSource__o *)consumedPieceActionPointDict,
                               (const MethodInfo_1CAA4F8 *)Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____);
  value = KeyValuePair_int__object.fields.value;
  Only = *(System_Collections_ObjectModel_ReadOnlyCollection_T__o **)&KeyValuePair_int__object.fields.key;
  if ( !KeyValuePair_int__object.fields.value
    || (Only = System_Collections_Generic_List_WarBoardAIRoute_RouteData___AsReadOnly(
                 (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)KeyValuePair_int__object.fields.value,
                 (const MethodInfo_3057240 *)Method_System_Collections_Generic_List_WarBoardPieceData__AsReadOnly__),
        !v28) )
  {
    sub_B5D69C(Only, value);
  }
  WarBoardManager__ShowConsumedPieceActionPointPopup(
    v28,
    _9__2,
    v37,
    (System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__o *)Only,
    0LL);
}


void __fastcall WarBoardData___c__DisplayClass154_0___ShowConsumedPieceActionPointPopup_b__2(
        WarBoardData___c__DisplayClass154_0_o *this,
        bool _,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  System_Action_o *_9__3; // x22
  WarBoardManager_o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42E765D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, _, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__3__, v8, v9, v10);
    byte_42E765D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  _9__3 = this->fields.__9__3;
  v14 = (WarBoardManager_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.__9__3,
      (System_Int32_array **)_9__3,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !v14 )
    sub_B5D69C(Instance, v12);
  WarBoardManager__HideConsumedPieceActionPointPopup(v14, _9__3, 0LL);
}


void __fastcall WarBoardData___c__DisplayClass154_0___ShowConsumedPieceActionPointPopup_b__3(
        WarBoardData___c__DisplayClass154_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___o *consumedPieceActionPointDict; // x20
  WarBoardData_o *_4__this; // x0
  Il2CppObject *value; // x1
  System_Collections_Generic_KeyValuePair_int__object__o KeyValuePair_int__object; // kr00_16

  if ( (byte_42E765E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Remove__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__List_WarBoardPieceData___get_Key__, v8, v9, v10);
    byte_42E765E = 1;
  }
  this->fields.consumedPiecePopupClose = 1;
  consumedPieceActionPointDict = this->fields.consumedPieceActionPointDict;
  KeyValuePair_int__object = System_Linq_Enumerable__First_KeyValuePair_int__object__(
                               (System_Collections_Generic_IEnumerable_TSource__o *)consumedPieceActionPointDict,
                               (const MethodInfo_1CAA4F8 *)Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____);
  value = KeyValuePair_int__object.fields.value;
  _4__this = *(WarBoardData_o **)&KeyValuePair_int__object.fields.key;
  if ( !consumedPieceActionPointDict
    || (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)consumedPieceActionPointDict,
          KeyValuePair_int__object.fields.key,
          (const MethodInfo_2F33AA0 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Remove__),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_B5D69C(_4__this, value);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, x);
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
    sub_B5D69C(this, x);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct WarBoardData___c__DisplayClass189_0_o *CS___8__locals1; // x8
  struct WarBoardStageReinforcementsEntity_o *stageEntity; // x8
  System_Int32_array *reinforcementsIdx; // x20
  System_Func_int__bool__o *_9__2; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  v5 = this;
  if ( (byte_42E765F & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_int____68810384, (_DWORD)x, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v9, v10, v11);
    this = (WarBoardData___c__DisplayClass189_1_o *)sub_B5D5C4(
                                                      &Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__2__,
                                                      v12,
                                                      v13,
                                                      v14);
    byte_42E765F = 1;
  }
  if ( !x
    || (CS___8__locals1 = v5->fields.CS___8__locals1) == 0LL
    || (stageEntity = CS___8__locals1->fields.stageEntity) == 0LL )
  {
    sub_B5D69C(this, x);
  }
  if ( x->fields.stageReinforcementId != stageEntity->fields.id )
    return 0;
  reinforcementsIdx = x->fields.reinforcementsIdx;
  _9__2 = v5->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__2,
      (Il2CppObject *)v5,
      Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__2__,
      (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
    v5->fields.__9__2 = _9__2;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v5->fields.__9__2,
      (System_Int32_array **)_9__2,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  return BasicHelper__Any_int__28142236(
           reinforcementsIdx,
           (System_Func_T__bool__o *)_9__2,
           (const MethodInfo_1AD6A9C *)Method_BasicHelper_Any_int____68810384);
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
    sub_B5D69C(this, x);
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
    sub_B5D69C(this, 0LL);
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
  __int64 v8; // x0

  if ( !a )
    goto LABEL_16;
  pieceIndex_k__BackingField = a->fields._pieceIndex_k__BackingField;
  if ( !pieceIndex_k__BackingField )
    return 0;
  max_length = pieceIndex_k__BackingField->max_length;
  if ( !max_length )
    goto LABEL_15;
  pieceIndex = this->fields.pieceIndex;
  if ( !pieceIndex )
LABEL_16:
    sub_B5D69C(this, a);
  v6 = pieceIndex->max_length;
  if ( !v6 )
    goto LABEL_15;
  if ( pieceIndex_k__BackingField->m_Items[1] == pieceIndex->m_Items[1] )
  {
    if ( max_length <= 1 || v6 <= 1 )
      goto LABEL_15;
    if ( pieceIndex_k__BackingField->m_Items[2] == pieceIndex->m_Items[2] )
    {
      if ( max_length > 2 && v6 > 2 )
        return pieceIndex_k__BackingField->m_Items[3] == pieceIndex->m_Items[3];
LABEL_15:
      v8 = sub_B5D6C8(this);
      sub_B5D668(v8, 0LL);
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
    sub_B5D69C(this, x);
  return x->fields.forceId == piece->fields.forceId && x->fields.groupId == piece->fields.groupId;
}


bool __fastcall WarBoardData___c__DisplayClass77_0____ctor_b__6(
        WarBoardData___c__DisplayClass77_0_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_SaveData_o *piece; // x8

  if ( !x || (piece = this->fields.piece) == 0LL )
    sub_B5D69C(this, x);
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
    sub_B5D69C(this, x);
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
    sub_B5D69C(this, x);
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
    sub_B5D69C(this, x);
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
    sub_B5D69C(this, x);
  return x->fields.treasureId == layout->fields.effectId;
}


bool __fastcall WarBoardData___c__DisplayClass77_4____ctor_b__12(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserMasterData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0LL )
    sub_B5D69C(this, x);
  return x->fields.forceId == layout->fields.forceId && x->fields.groupId == layout->fields.groupId;
}


bool __fastcall WarBoardData___c__DisplayClass77_4____ctor_b__13(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0LL )
    sub_B5D69C(this, x);
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
    sub_B5D69C(this, x);
  return x->fields.squareIndex == layout->fields.squareIndex;
}


bool __fastcall WarBoardData___c__DisplayClass77_4____ctor_b__15(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserWallData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0LL )
    sub_B5D69C(this, x);
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
    sub_B5D69C(this, x);
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
    sub_B5D69C(this, x);
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
    sub_B5D69C(this, 0LL);
  return !x->fields._isDead_k__BackingField && x->fields._uniqueIndex_k__BackingField == this->fields.uniqueId;
}