void WarBoardData___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct WarBoardData_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_593602C & 1) == 0 )
  {
    sub_21FFC50(&WarBoardData_TypeInfo);
    sub_21FFC50(&StringLiteral_2010/*"AFTER_CONTINUE_DEVICE_FOR_WARBOARD"*/);
    sub_21FFC50(&StringLiteral_15951/*"WARBOARDDATA_SAVEDATA"*/);
    byte_593602C = 1;
  }
  v7 = StringLiteral_15951/*"WARBOARDDATA_SAVEDATA"*/;
  WarBoardData_TypeInfo->static_fields->WARBOARDDATA_SAVEDATA_KEY = (struct System_String_o *)StringLiteral_15951/*"WARBOARDDATA_SAVEDATA"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)WarBoardData_TypeInfo->static_fields, v7, v1, v2, v3, v4, v5, v6);
  v8 = StringLiteral_2010/*"AFTER_CONTINUE_DEVICE_FOR_WARBOARD"*/;
  static_fields = WarBoardData_TypeInfo->static_fields;
  static_fields->AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY = (struct System_String_o *)StringLiteral_2010/*"AFTER_CONTINUE_DEVICE_FOR_WARBOARD"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


void WarBoardData___ctor(
        WarBoardData_o *this,
        WarBoardStageEntity_o *stage,
        WarBoardStageLayoutEntity_array *layoutEntities,
        WarBoardRoadEntity_array *roadEntities,
        WarBoardDataEntity_o *serverData,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v8; // x19
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_List_object__o *v15; // x19
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  Il2CppClass *v22; // x0
  struct System_Int32_array *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct System_UInt32_array *v30; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  System_Collections_Generic_List_object__o *v37; // x19
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_Collections_Generic_List_object__o *v44; // x19
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  System_Collections_Generic_List_int__o *v51; // x19
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  System_Collections_Generic_List_object__o *v58; // x19
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  System_Collections_Generic_List_int__o *v65; // x19
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  System_Collections_Generic_List_int__o *v72; // x19
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  __int64 v79; // x1
  __int64 v80; // x2
  WarBoardData___c_c *v81; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__77_0; // x19
  Il2CppObject *v84; // x21
  struct WarBoardData___c_StaticFields *v85; // x0
  System_String_o *v86; // x2
  System_String_o *v87; // x3
  int32_t v88; // w4
  int32_t v89; // w5
  bool v90; // w6
  bool v91; // w7
  System_String_o *v92; // x2
  System_String_o *v93; // x3
  int32_t v94; // w4
  int32_t v95; // w5
  bool v96; // w6
  bool v97; // w7
  __int64 Instance; // x0
  unsigned __int64 throughCondId; // x1
  Il2CppObject *MasterData_object; // x0
  struct WarBoardStageNpcMaster_o **p_stageNpcMaster; // x19
  System_String_o *v102; // x2
  System_String_o *v103; // x3
  int32_t v104; // w4
  int32_t v105; // w5
  bool v106; // w6
  bool v107; // w7
  System_Collections_Generic_IEnumerable_WarBoardStageNpcEntity__o *WarBoardStageEntities; // x0
  __int64 v109; // x1
  __int64 v110; // x2
  WarBoardData___c_c *v111; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v112; // x21
  struct WarBoardData___c_StaticFields *v113; // x9
  System_Func_T__TResult__o *_9__77_1; // x19
  Il2CppObject *v115; // x22
  struct WarBoardData___c_StaticFields *v116; // x0
  System_String_o *v117; // x2
  System_String_o *v118; // x3
  int32_t v119; // w4
  int32_t v120; // w5
  bool v121; // w6
  bool v122; // w7
  struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *v123; // x0
  System_String_o *v124; // x2
  System_String_o *v125; // x3
  int32_t v126; // w4
  int32_t v127; // w5
  bool v128; // w6
  bool v129; // w7
  System_Collections_Generic_IEnumerable_WarBoardActionPointEntity__o *WarBoardActionPointEntities; // x0
  __int64 v131; // x1
  __int64 v132; // x2
  WarBoardData___c_c *v133; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v134; // x20
  struct WarBoardData___c_StaticFields *v135; // x9
  System_Func_T__TResult__o *_9__77_2; // x19
  Il2CppObject *v137; // x21
  struct WarBoardData___c_StaticFields *v138; // x0
  System_String_o *v139; // x2
  System_String_o *v140; // x3
  int32_t v141; // w4
  int32_t v142; // w5
  bool v143; // w6
  bool v144; // w7
  struct System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__o *v145; // x0
  System_String_o *v146; // x2
  System_String_o *v147; // x3
  int32_t v148; // w4
  int32_t v149; // w5
  bool v150; // w6
  bool v151; // w7
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v153; // x1
  __int64 v154; // x2
  WarBoardData___c_c *v155; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v156; // x20
  struct WarBoardData___c_StaticFields *v157; // x9
  System_Func_object__int__o *_9__77_3; // x19
  Il2CppObject *v159; // x21
  struct WarBoardData___c_StaticFields *v160; // x0
  System_String_o *v161; // x2
  System_String_o *v162; // x3
  int32_t v163; // w4
  int32_t v164; // w5
  bool v165; // w6
  bool v166; // w7
  System_Collections_Generic_Dictionary_TKey__TValue__o *npcEntityDict; // x8
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *v168; // x0
  __int64 v169; // x1
  __int64 v170; // x2
  WarBoardData___c_c *v171; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v172; // x20
  struct WarBoardData___c_StaticFields *v173; // x9
  System_Func_object__int__o *_9__77_4; // x19
  Il2CppObject *v175; // x21
  struct WarBoardData___c_StaticFields *v176; // x0
  System_String_o *v177; // x2
  System_String_o *v178; // x3
  int32_t v179; // w4
  int32_t v180; // w5
  bool v181; // w6
  bool v182; // w7
  int32_t v183; // w0
  const MethodInfo_476E8C0 *v184; // x8
  __int64 v185; // x1
  __int64 v186; // x2
  __int64 v187; // x1
  __int64 v188; // x2
  WarBoardData_c *v189; // x0
  WarBoardStageLayoutEntity_array *v190; // x27
  System_Collections_Generic_List_object__o *v191; // x28
  WarBoardDataEntity_o *v192; // x26
  System_String_o *WARBOARDDATA_SAVEDATA_KEY; // x19
  __int64 v194; // x2
  WarBoardData_c *v195; // x0
  int v196; // w8
  System_String_o *v197; // x19
  __int64 v198; // x1
  __int64 v199; // x2
  System_String_o *String; // x19
  System_Byte_array *v201; // x19
  MiniMessagePack_MiniMessagePacker_o *v202; // x20
  Il2CppObject *v203; // x0
  struct WarBoardData_WarBoardLocalSaveData_o **p_localSaveData; // x20
  System_String_o *v205; // x2
  System_String_o *v206; // x3
  int32_t v207; // w4
  int32_t v208; // w5
  bool v209; // w6
  bool v210; // w7
  __int64 v211; // x1
  __int64 v212; // x2
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8
  struct WarBoardPieceData_SaveData_array *pieceSaves; // x24
  _QWORD *v215; // x25
  unsigned __int64 v216; // x28
  __int64 v217; // x23
  System_String_o *v218; // x2
  System_String_o *v219; // x3
  int32_t v220; // w4
  int32_t v221; // w5
  bool v222; // w6
  bool v223; // w7
  WarBoardPieceData_SaveData_o *v224; // x1
  WarBoardPieceData_SaveData_o **v225; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v226; // x19
  System_Func_object__bool__o *v227; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v228; // x19
  System_Func_object__bool__o *v229; // x22
  struct WarBoardItemData_SaveData_array *itemSaves; // x24
  unsigned __int64 v231; // x28
  __int64 v232; // x21
  System_String_o *v233; // x2
  System_String_o *v234; // x3
  int32_t v235; // w4
  int32_t v236; // w5
  bool v237; // w6
  bool v238; // w7
  WarBoardItemData_SaveData_o *v239; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v240; // x19
  System_Func_object__bool__o *v241; // x23
  MissionNaviTransitionBoardItem_o *v242; // x25
  struct WarBoardTreasureData_SaveData_array *treasureSaves; // x28
  char v244; // w26
  unsigned __int64 v245; // x29
  __int64 v246; // x19
  System_String_o *v247; // x2
  System_String_o *v248; // x3
  int32_t v249; // w4
  int32_t v250; // w5
  bool v251; // w6
  bool v252; // w7
  WarBoardTreasureData_SaveData_o *v253; // x1
  __int64 v254; // x22
  System_Collections_Generic_IEnumerable_TSource__o *klass; // x23
  System_Func_object__bool__o *v256; // x24
  __int64 v257; // x2
  WarBoardData___c_c *v258; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v259; // x23
  struct WarBoardData___c_StaticFields *v260; // x8
  System_Func_object__bool__o *_9__77_9; // x19
  Il2CppObject *v262; // x22
  struct WarBoardData___c_StaticFields *v263; // x0
  System_String_o *v264; // x2
  System_String_o *v265; // x3
  int32_t v266; // w4
  int32_t v267; // w5
  bool v268; // w6
  bool v269; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v270; // x0
  System_Object_array *v271; // x0
  System_String_o *v272; // x2
  System_String_o *v273; // x3
  int32_t v274; // w4
  int32_t v275; // w5
  bool v276; // w6
  bool v277; // w7
  struct WarBoardWallData_SaveData_array *wallSaves; // x24
  unsigned __int64 v279; // x25
  __int64 v280; // x19
  System_String_o *v281; // x2
  System_String_o *v282; // x3
  int32_t v283; // w4
  int32_t v284; // w5
  bool v285; // w6
  bool v286; // w7
  WarBoardWallData_SaveData_o *v287; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v288; // x22
  System_Func_object__bool__o *v289; // x23
  int v290; // w19
  unsigned __int64 v291; // x22
  __int64 v292; // x24
  __int64 v293; // x25
  struct WarBoardSquareIndexData_SaveData_array *squareIndexInfo; // x8
  unsigned int *v295; // x26
  WarBoardSquareIndexData_SaveData_o *v296; // x21
  WarBoardSquareIndexData_o *v297; // x19
  System_String_o *v298; // x2
  System_String_o *v299; // x3
  int32_t v300; // w4
  int32_t v301; // w5
  bool v302; // w6
  bool v303; // w7
  __int64 v304; // x1
  int v305; // w19
  unsigned __int64 v306; // x22
  __int64 v307; // x24
  __int64 v308; // x25
  struct WarBoardBossBattleData_SaveData_array *bossBattleInfo; // x8
  unsigned int *v310; // x26
  WarBoardBossBattleData_SaveData_o *v311; // x21
  WarBoardBossBattleData_o *v312; // x19
  const MethodInfo *v313; // x2
  System_String_o *v314; // x2
  System_String_o *v315; // x3
  int32_t v316; // w4
  int32_t v317; // w5
  bool v318; // w6
  bool v319; // w7
  WarBoardData_c *v320; // x0
  System_String_o *v321; // x2
  System_String_o *v322; // x3
  int32_t v323; // w4
  int32_t v324; // w5
  bool v325; // w6
  bool v326; // w7
  unsigned __int64 v327; // x23
  __int64 v328; // x24
  System_String_o *v329; // x2
  System_String_o *v330; // x3
  int32_t v331; // w4
  int32_t v332; // w5
  bool v333; // w6
  bool v334; // w7
  Il2CppClass **v335; // x20
  Il2CppClass *v336; // x1
  WarBoardStageLayoutEntity_o **v337; // x29
  WarBoardStageLayoutEntity_o *v338; // x19
  WarBoardSquareData_o *v339; // x21
  System_String_o *v340; // x2
  System_String_o *v341; // x3
  int32_t v342; // w4
  int32_t v343; // w5
  bool v344; // w6
  bool v345; // w7
  Il2CppClass *v346; // x9
  WarBoardStageLayoutEntity_o *v347; // x8
  struct System_Object_array *v348; // x8
  _QWORD *v349; // x9
  __int64 size; // x10
  Il2CppClass **v351; // x0
  WarBoardStageLayoutEntity_o *v352; // x8
  System_Collections_Generic_IEnumerable_TSource__o *svtInfo; // x19
  System_Func_object__bool__o *v354; // x20
  WarBoardUserServantData_o *v355; // x27
  WarBoardUserMasterData_o *v356; // x20
  System_Collections_Generic_List_object__o *v357; // x12
  int32_t version; // w10
  struct System_Object_array *items; // x8
  __int64 *v360; // x9
  System_Collections_Generic_IEnumerable_TSource__o *masterInfo; // x19
  System_Func_object__bool__o *v362; // x20
  WarBoardStageLayoutEntity_o *v363; // x8
  WarBoardDataEntity_WarBoardDeckData_o **v364; // x9
  WarBoardDataEntity_WarBoardDeckData_o *v365; // x22
  int32_t Type; // w0
  bool IsNpc; // w0
  WarBoardStageLayoutEntity_o *v368; // x28
  bool v369; // w25
  int32_t progressType; // w26
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *v371; // x19
  WarBoardPieceData_o *v372; // x0
  WarBoardPieceData_o *v373; // x21
  bool v374; // w5
  int32_t v375; // w8
  System_String_o *v376; // x2
  System_String_o *v377; // x3
  int32_t v378; // w4
  int32_t v379; // w5
  bool v380; // w6
  bool v381; // w7
  __int64 v382; // x8
  _QWORD *v383; // x9
  __int64 v384; // x10
  NpcFollowerEntity_o *Entity_49386132; // x0
  NpcFollowerEntity_o *v386; // x19
  System_String_o *v387; // x2
  System_String_o *v388; // x3
  int32_t v389; // w4
  int32_t v390; // w5
  bool v391; // w6
  bool v392; // w7
  struct System_Object_array *v393; // x8
  _QWORD *v394; // x9
  __int64 v395; // x10
  Il2CppClass **v396; // x0
  struct System_Object_array *v397; // x8
  _QWORD *v398; // x9
  __int64 v399; // x10
  Il2CppClass **v400; // x0
  WarBoardStageLayoutEntity_o *v401; // x20
  int v402; // w8
  System_Collections_Generic_IEnumerable_TSource__o *wallInfo; // x19
  System_Func_object__bool__o *v404; // x20
  Il2CppObject *v405; // x0
  WarBoardStageLayoutEntity_o *v406; // x19
  WarBoardUserWallData_o *v407; // x21
  WarBoardWallData_o *v408; // x20
  System_Collections_Generic_List_object__o *v409; // x12
  int32_t v410; // w10
  struct System_Object_array *v411; // x8
  __int64 *v412; // x9
  System_Collections_Generic_IEnumerable_TSource__o *getItemInfo; // x19
  System_Func_object__bool__o *v414; // x20
  Il2CppObject *v415; // x0
  WarBoardStageLayoutEntity_o *v416; // x19
  WarBoardUserGetItemData_o *v417; // x21
  __int64 v418; // x9
  __int64 v419; // x10
  Il2CppClass **v420; // x0
  int32_t v421; // w1
  MissionNaviTransitionBoardItem_o *v422; // x0
  System_Collections_Generic_IEnumerable_TSource__o *treasureInfo; // x19
  System_Func_object__bool__o *v424; // x20
  __int64 v425; // x9
  __int64 v426; // x10
  Il2CppClass **v427; // x0
  __int64 v428; // x8
  System_Collections_Generic_List_object__o *v429; // x0
  Il2CppObject *v430; // x1
  System_Object_array *v431; // x0
  System_String_o *v432; // x2
  System_String_o *v433; // x3
  int32_t v434; // w4
  int32_t v435; // w5
  bool v436; // w6
  bool v437; // w7
  System_Object_array *v438; // x0
  System_String_o *v439; // x2
  System_String_o *v440; // x3
  int32_t v441; // w4
  int32_t v442; // w5
  bool v443; // w6
  bool v444; // w7
  System_Object_array *v445; // x0
  System_Collections_Generic_IEnumerable_T__o **p_pieces; // x24
  System_String_o *v447; // x2
  System_String_o *v448; // x3
  int32_t v449; // w4
  int32_t v450; // w5
  bool v451; // w6
  bool v452; // w7
  System_Object_array *pieces; // x19
  System_Comparison_T__o *v454; // x20
  System_Object_array *v455; // x0
  System_String_o *v456; // x2
  System_String_o *v457; // x3
  int32_t v458; // w4
  int32_t v459; // w5
  bool v460; // w6
  bool v461; // w7
  System_Object_array *v462; // x0
  System_String_o *v463; // x2
  System_String_o *v464; // x3
  int32_t v465; // w4
  int32_t v466; // w5
  bool v467; // w6
  bool v468; // w7
  System_Object_array *v469; // x0
  System_String_o *v470; // x2
  System_String_o *v471; // x3
  int32_t v472; // w4
  int32_t v473; // w5
  bool v474; // w6
  bool v475; // w7
  System_Object_array *v476; // x0
  System_String_o *v477; // x2
  System_String_o *v478; // x3
  int32_t v479; // w4
  int32_t v480; // w5
  bool v481; // w6
  bool v482; // w7
  System_String_o *v483; // x2
  System_String_o *v484; // x3
  int32_t v485; // w4
  int32_t v486; // w5
  bool v487; // w6
  bool v488; // w7
  struct WarBoardData_WarBoardLocalSaveData_o *v489; // x8
  struct WarBoardPieceData_SaveData_array *v490; // x28
  unsigned __int64 v491; // x29
  __int64 v492; // x23
  System_String_o *v493; // x2
  System_String_o *v494; // x3
  int32_t v495; // w4
  int32_t v496; // w5
  bool v497; // w6
  bool v498; // w7
  WarBoardPieceData_SaveData_o *v499; // x1
  WarBoardPieceData_SaveData_o **v500; // x21
  System_Collections_Generic_IEnumerable_T__o *v501; // x19
  System_Func_object__bool__o *v502; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v503; // x19
  System_Func_object__bool__o *v504; // x22
  Il2CppObject *v505; // x25
  System_Collections_Generic_List_object__o *v506; // x23
  int32_t id; // w19
  WarBoardPieceData_SaveData_o *v508; // x26
  WarBoardPieceData_o *v509; // x22
  System_String_o *v510; // x2
  System_String_o *v511; // x3
  int32_t v512; // w4
  int32_t v513; // w5
  bool v514; // w6
  bool v515; // w7
  struct System_Object_array *v516; // x8
  _QWORD *v517; // x9
  __int64 v518; // x10
  Il2CppClass **v519; // x0
  System_Object_array *v520; // x0
  System_String_o *v521; // x2
  System_String_o *v522; // x3
  int32_t v523; // w4
  int32_t v524; // w5
  bool v525; // w6
  bool v526; // w7
  struct WarBoardItemData_SaveData_array *v527; // x20
  int v528; // w8
  __int64 v529; // x21
  WarBoardItemData_SaveData_o *v530; // x19
  struct WarBoardTreasureData_SaveData_array *v531; // x20
  int v532; // w8
  __int64 v533; // x21
  WarBoardTreasureData_SaveData_o *v534; // x19
  struct WarBoardWallData_SaveData_array *v535; // x20
  int v536; // w8
  __int64 v537; // x21
  WarBoardWallData_SaveData_o *v538; // x19
  struct WarBoardSquareData_SaveData_array *squareSaves; // x20
  int v540; // w8
  __int64 v541; // x21
  WarBoardSquareData_SaveData_o *v542; // x19
  System_Collections_Generic_List_object__o *v543; // x19
  System_String_o *v544; // x2
  System_String_o *v545; // x3
  int32_t v546; // w4
  int32_t v547; // w5
  bool v548; // w6
  bool v549; // w7
  System_String_o *v550; // x2
  System_String_o *v551; // x3
  int32_t v552; // w4
  int32_t v553; // w5
  bool v554; // w6
  bool v555; // w7
  struct WarBoardData_WarBoardLocalSaveData_o *v556; // x8
  struct WarBoardEventData_SaveData_array *eventSaves; // x20
  il2cpp_array_size_t v558; // x8
  unsigned __int64 v559; // x23
  WarBoardEventData_SaveData_o *v560; // x19
  System_Collections_Generic_List_object__o *v561; // x21
  WarBoardEventData_o *v562; // x22
  System_String_o *v563; // x2
  System_String_o *v564; // x3
  int32_t v565; // w4
  int32_t v566; // w5
  bool v567; // w6
  bool v568; // w7
  struct System_Object_array *v569; // x8
  _QWORD *v570; // x9
  __int64 v571; // x10
  Il2CppClass **v572; // x0
  struct WarBoardData_WarBoardLocalSaveData_o *v573; // x8
  struct System_Int32_array *latestPieceActionSquareIndexes; // x1
  System_String_o *v575; // x2
  System_String_o *v576; // x3
  int32_t v577; // w4
  int32_t v578; // w5
  bool v579; // w6
  bool v580; // w7
  struct WarBoardData_WarBoardLocalSaveData_o *v581; // x8
  MissionNaviTransitionBoardItem_c *latestBattlePieceUniqueIndexes; // x1
  System_Collections_Generic_List_object__o *v583; // x19
  System_String_o *v584; // x2
  System_String_o *v585; // x3
  int32_t v586; // w4
  int32_t v587; // w5
  bool v588; // w6
  bool v589; // w7
  struct WarBoardPrevCondData_SaveData_array *prevCondSaves; // x20
  il2cpp_array_size_t v591; // x8
  unsigned __int64 v592; // x23
  WarBoardPrevCondData_SaveData_o *v593; // x19
  System_Collections_Generic_List_object__o *v594; // x21
  WarBoardPrevCondData_o *v595; // x22
  System_String_o *v596; // x2
  System_String_o *v597; // x3
  int32_t v598; // w4
  int32_t v599; // w5
  bool v600; // w6
  bool v601; // w7
  struct System_Object_array *v602; // x8
  _QWORD *v603; // x9
  __int64 v604; // x10
  Il2CppClass **v605; // x0
  System_Collections_Generic_List_object__o *v606; // x19
  System_String_o *v607; // x2
  System_String_o *v608; // x3
  int32_t v609; // w4
  int32_t v610; // w5
  bool v611; // w6
  bool v612; // w7
  struct HoldReinforcementsData_SaveData_array *reinforcementsSaves; // x20
  il2cpp_array_size_t v614; // x8
  unsigned __int64 v615; // x23
  HoldReinforcementsData_SaveData_o *v616; // x19
  System_Collections_Generic_List_object__o *v617; // x21
  HoldReinforcementsData_o *v618; // x22
  System_String_o *v619; // x2
  System_String_o *v620; // x3
  int32_t v621; // w4
  int32_t v622; // w5
  bool v623; // w6
  bool v624; // w7
  struct System_Object_array *v625; // x8
  _QWORD *v626; // x9
  __int64 v627; // x10
  Il2CppClass **v628; // x0
  System_Collections_Generic_List_TSource__o *v629; // x0
  System_String_o *v630; // x2
  System_String_o *v631; // x3
  int32_t v632; // w4
  int32_t v633; // w5
  bool v634; // w6
  bool v635; // w7
  System_Collections_Generic_List_object__o *v636; // x19
  System_String_o *v637; // x2
  System_String_o *v638; // x3
  int32_t v639; // w4
  int32_t v640; // w5
  bool v641; // w6
  bool v642; // w7
  System_String_o *v643; // x2
  System_String_o *v644; // x3
  int32_t v645; // w4
  int32_t v646; // w5
  bool v647; // w6
  bool v648; // w7
  struct WarBoardUiData_SaveData_array *uiDataSaves; // x20
  il2cpp_array_size_t v650; // x8
  unsigned __int64 v651; // x23
  WarBoardUiData_SaveData_o *v652; // x19
  System_Collections_Generic_List_object__o *v653; // x21
  WarBoardUiData_o *v654; // x22
  System_String_o *v655; // x2
  System_String_o *v656; // x3
  int32_t v657; // w4
  int32_t v658; // w5
  bool v659; // w6
  bool v660; // w7
  struct System_Object_array *v661; // x8
  _QWORD *v662; // x9
  __int64 v663; // x10
  Il2CppClass **v664; // x0
  MissionNaviTransitionBoardItem_c *bgAnimationInfo; // x1
  struct WarBoardData_WarBoardLocalSaveData_o *v666; // x8
  WarBoardData_WarBoardLocalSaveData_o *v667; // x19
  System_String_o *v668; // x2
  System_String_o *v669; // x3
  int32_t v670; // w4
  int32_t v671; // w5
  bool v672; // w6
  bool v673; // w7
  __int64 v674; // x0
  MissionNaviTransitionBoardItem_o *p_bgAnimationInfo_k__BackingField; // [xsp+10h] [xbp-170h]
  MissionNaviTransitionBoardItem_o *p_listUiData; // [xsp+18h] [xbp-168h]
  MissionNaviTransitionBoardItem_o *p_playedStageReinforcementsList; // [xsp+20h] [xbp-160h]
  MissionNaviTransitionBoardItem_o *p_latestBattlePieceUniqueIndexes; // [xsp+28h] [xbp-158h]
  struct System_Int32_array **p_latestPieceActionSquareIndexes; // [xsp+30h] [xbp-150h]
  MissionNaviTransitionBoardItem_o *p_reinforcementsSaveList; // [xsp+38h] [xbp-148h]
  DataMasterBase_TMaster__TEntity__PKType__o *v681; // [xsp+40h] [xbp-140h]
  System_Collections_Generic_List_object__o *v682; // [xsp+48h] [xbp-138h]
  WarBoardDataEntity_WarBoardDeckData_o **p_myDeck; // [xsp+50h] [xbp-130h]
  struct System_Collections_Generic_List_int__o **p_masterExistsForce; // [xsp+58h] [xbp-128h]
  System_Collections_Generic_List_object__o *v685; // [xsp+60h] [xbp-120h]
  System_Collections_Generic_List_object__o *v686; // [xsp+68h] [xbp-118h]
  System_Collections_Generic_List_object__o *v687; // [xsp+70h] [xbp-110h]
  NpcFollowerMaster_o *v688; // [xsp+78h] [xbp-108h]
  WarBoardStagePieceDetailMaster_o *Master_object; // [xsp+80h] [xbp-100h]
  System_Collections_Generic_List_object__o *v690; // [xsp+88h] [xbp-F8h]
  WarBoardData_Fields *p_fields; // [xsp+90h] [xbp-F0h]
  WarBoardCommonReleaseMaster_o *v692; // [xsp+98h] [xbp-E8h]
  struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o **p_npcEntityDict; // [xsp+A0h] [xbp-E0h]
  System_Collections_Generic_List_object__o *v694; // [xsp+A8h] [xbp-D8h]
  System_Collections_Generic_List_object__o *v695; // [xsp+B0h] [xbp-D0h]
  WarBoardDataEntity_WarBoardDeckData_o **p_enemyDeck; // [xsp+C0h] [xbp-C0h]
  MissionNaviTransitionBoardItem_o *p_listPrevCond; // [xsp+C8h] [xbp-B8h]
  struct System_Collections_Generic_List_WarBoardEventData__o **p_listEvent; // [xsp+D0h] [xbp-B0h]
  int32_t questId; // [xsp+DCh] [xbp-A4h]
  int32_t npcIdx; // [xsp+E0h] [xbp-A0h]
  int32_t questPhase; // [xsp+E4h] [xbp-9Ch]
  WarBoardData_o *v703; // [xsp+E8h] [xbp-98h]
  il2cpp_array_size_t max_length; // [xsp+F0h] [xbp-90h]
  _QWORD *v706; // [xsp+F8h] [xbp-88h]
  WarBoardDataEntity_o *v707; // [xsp+F8h] [xbp-88h]
  struct WarBoardData_WarBoardLocalSaveData_o **roadEntitiesb; // [xsp+100h] [xbp-80h]
  bool isChangeName; // [xsp+10Ch] [xbp-74h] BYREF
  Il2CppObject *v711; // [xsp+110h] [xbp-70h] BYREF
  WarBoardStagePieceDetailEntity_o *entity; // [xsp+118h] [xbp-68h] BYREF

  if ( (byte_5935FD4 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Resize_WarBoardBossBattleData___);
    sub_21FFC50(&Method_System_Array_Resize_WarBoardSquareIndexData___);
    sub_21FFC50(&Method_System_Array_Sort_WarBoardPieceData___);
    sub_21FFC50(&Method_System_Array_Sort_WarBoardStageLayoutEntity___);
    sub_21FFC50(&Method_BasicHelper_Any_WarBoardPieceData___);
    sub_21FFC50(&System_Comparison_WarBoardPieceData__TypeInfo);
    sub_21FFC50(&System_Comparison_WarBoardStageLayoutEntity__TypeInfo);
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_WarBoardActionPointMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_WarBoardStageDetailMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_WarBoardStageNpcMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Values__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_21FFC50(&EncryptedPlayerPrefs_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Count_WarBoardBossBattleData_SaveData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData_SaveData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserTreasureData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Max_WarBoardStageNpcEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_WarBoardUserTreasureData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToDictionary_WarBoardActionPointEntity__uint___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToDictionary_WarBoardStageNpcEntity__uint___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_WarBoardUserTreasureData___);
    sub_21FFC50(&System_Func_WarBoardUserTreasureData__bool__TypeInfo);
    sub_21FFC50(&System_Func_WarBoardStageNpcEntity__uint__TypeInfo);
    sub_21FFC50(&System_Func_WarBoardUserWallData__bool__TypeInfo);
    sub_21FFC50(&System_Func_WarBoardUserMasterData__bool__TypeInfo);
    sub_21FFC50(&System_Func_WarBoardStageNpcEntity__int__TypeInfo);
    sub_21FFC50(&System_Func_WarBoardUserServantData__bool__TypeInfo);
    sub_21FFC50(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_21FFC50(&System_Func_WarBoardUserGetItemData__bool__TypeInfo);
    sub_21FFC50(&System_Func_WarBoardActionPointEntity__uint__TypeInfo);
    sub_21FFC50(&HoldReinforcementsData_TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardSquareData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardUiData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardEventData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardEffectData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTreasureData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardWallData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_HoldReinforcementsData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardItemData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTreasureData__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardEffectData__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardWallData__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardItemData__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardPrevCondData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardSquareData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardEventData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardUiData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_HoldReinforcementsData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTreasureData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardItemData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardWallData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardEffectData___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardWallData__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardTreasureData__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardItemData__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardUiData__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardPrevCondData__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardEffectData__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardEventData__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_HoldReinforcementsData__TypeInfo);
    sub_21FFC50(&Method_MiniMessagePack_MiniMessagePacker_UnpackClass_WarBoardData_WarBoardLocalSaveData___);
    sub_21FFC50(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&Method_WarBoardData___c___ctor_b__77_0__);
    sub_21FFC50(&Method_WarBoardData___c___ctor_b__77_1__);
    sub_21FFC50(&Method_WarBoardData___c___ctor_b__77_2__);
    sub_21FFC50(&Method_WarBoardData___c___ctor_b__77_3__);
    sub_21FFC50(&Method_WarBoardData___c___ctor_b__77_4__);
    sub_21FFC50(&Method_WarBoardData___c___ctor_b__77_9__);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass77_0___ctor_b__5__);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass77_0___ctor_b__6__);
    sub_21FFC50(&WarBoardData___c__DisplayClass77_0_TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass77_1___ctor_b__7__);
    sub_21FFC50(&WarBoardData___c__DisplayClass77_1_TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass77_2___ctor_b__8__);
    sub_21FFC50(&WarBoardData___c__DisplayClass77_2_TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass77_3___ctor_b__10__);
    sub_21FFC50(&WarBoardData___c__DisplayClass77_3_TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__11__);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__12__);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__13__);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__14__);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__15__);
    sub_21FFC50(&WarBoardData___c__DisplayClass77_4_TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass77_5___ctor_b__16__);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass77_5___ctor_b__17__);
    sub_21FFC50(&WarBoardData___c__DisplayClass77_5_TypeInfo);
    sub_21FFC50(&WarBoardData___c_TypeInfo);
    sub_21FFC50(&uint___TypeInfo);
    sub_21FFC50(&WarBoardBossBattleData_TypeInfo);
    sub_21FFC50(&Method_WarBoardData_ComparePiece__);
    sub_21FFC50(&WarBoardData_TypeInfo);
    sub_21FFC50(&WarBoardEffectData_TypeInfo);
    sub_21FFC50(&WarBoardEventData_TypeInfo);
    sub_21FFC50(&WarBoardItemData_TypeInfo);
    sub_21FFC50(&WarBoardData_WarBoardLocalSaveData_TypeInfo);
    sub_21FFC50(&WarBoardPieceData_TypeInfo);
    sub_21FFC50(&WarBoardPrevCondData_TypeInfo);
    sub_21FFC50(&WarBoardSquareData_TypeInfo);
    sub_21FFC50(&WarBoardSquareIndexData_TypeInfo);
    sub_21FFC50(&WarBoardTreasureData_TypeInfo);
    sub_21FFC50(&WarBoardUiData_TypeInfo);
    sub_21FFC50(&WarBoardWallData_TypeInfo);
    byte_5935FD4 = 1;
  }
  v711 = 0;
  entity = 0;
  isChangeName = 0;
  v8 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v8,
    (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  this->fields._bgAnimationInfo_k__BackingField = (struct System_Collections_Generic_Dictionary_string__object__o *)v8;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._bgAnimationInfo_k__BackingField,
    (int32_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardEventData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardEventData___ctor__);
  this->fields.listEvent = (struct System_Collections_Generic_List_WarBoardEventData__o *)v15;
  p_listEvent = &this->fields.listEvent;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.listEvent, (int32_t)v15, v16, v17, v18, v19, v20, v21);
  v22 = int___TypeInfo;
  *(_QWORD *)&this->fields.winCondId = -1;
  v23 = (struct System_Int32_array *)sub_21FFD10(v22, 2);
  this->fields.latestPieceActionSquareIndexes = v23;
  p_latestPieceActionSquareIndexes = &this->fields.latestPieceActionSquareIndexes;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.latestPieceActionSquareIndexes,
    (int32_t)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = (struct System_UInt32_array *)sub_21FFD10(uint___TypeInfo, 0);
  this->fields.latestBattlePieceUniqueIndexes = v30;
  p_latestBattlePieceUniqueIndexes = (MissionNaviTransitionBoardItem_o *)&this->fields.latestBattlePieceUniqueIndexes;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.latestBattlePieceUniqueIndexes,
    (int32_t)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v37 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardPrevCondData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardPrevCondData___ctor__);
  this->fields.listPrevCond = (struct System_Collections_Generic_List_WarBoardPrevCondData__o *)v37;
  p_listPrevCond = (MissionNaviTransitionBoardItem_o *)&this->fields.listPrevCond;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.listPrevCond,
    (int32_t)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v44 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_HoldReinforcementsData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v44,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_HoldReinforcementsData___ctor__);
  this->fields.reinforcementsSaveList = (struct System_Collections_Generic_List_HoldReinforcementsData__o *)v44;
  p_reinforcementsSaveList = (MissionNaviTransitionBoardItem_o *)&this->fields.reinforcementsSaveList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.reinforcementsSaveList,
    (int32_t)v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  v51 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v51,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.playedStageReinforcementsList = v51;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.playedStageReinforcementsList,
    (int32_t)v51,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  v58 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardUiData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v58,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardUiData___ctor__);
  this->fields.listUiData = (struct System_Collections_Generic_List_WarBoardUiData__o *)v58;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.listUiData, (int32_t)v58, v59, v60, v61, v62, v63, v64);
  v65 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v65,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.masterExistsForce = v65;
  p_masterExistsForce = &this->fields.masterExistsForce;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.masterExistsForce,
    (int32_t)v65,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  v72 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v72,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.reinforcementsAppointmentSquareList = v72;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.reinforcementsAppointmentSquareList,
    (int32_t)v72,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  this->fields.localSaveTiming = 1;
  System_Object___ctor((Il2CppObject *)this, 0);
  v81 = WarBoardData___c_TypeInfo;
  if ( !*(&WarBoardData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, v79, v80);
    v81 = WarBoardData___c_TypeInfo;
  }
  static_fields = v81->static_fields;
  _9__77_0 = (System_Comparison_T__o *)static_fields->__9__77_0;
  if ( !_9__77_0 )
  {
    if ( !*(&v81->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v81, v79, v80);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v84 = (Il2CppObject *)static_fields->__9;
    _9__77_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_WarBoardStageLayoutEntity__TypeInfo);
    System_Comparison_object____ctor(_9__77_0, v84, Method_WarBoardData___c___ctor_b__77_0__, 0);
    v85 = WarBoardData___c_TypeInfo->static_fields;
    v85->__9__77_0 = (struct System_Comparison_WarBoardStageLayoutEntity__o *)_9__77_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v85->__9__77_0, (int32_t)_9__77_0, v86, v87, v88, v89, v90, v91);
  }
  System_Array__Sort_object__58222280(
    (System_Object_array *)layoutEntities,
    _9__77_0,
    (const MethodInfo_37866C8 *)Method_System_Array_Sort_WarBoardStageLayoutEntity___);
  this->fields.stageEntity = stage;
  p_fields = &this->fields;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)stage, v92, v93, v94, v95, v96, v97);
  if ( !layoutEntities )
    goto LABEL_366;
  max_length = layoutEntities->max_length;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_366;
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_WarBoardStageDetailMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_366;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_WarBoardStageNpcMaster___);
  this->fields.stageNpcMaster = (struct WarBoardStageNpcMaster_o *)MasterData_object;
  p_stageNpcMaster = &this->fields.stageNpcMaster;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.stageNpcMaster,
    (int32_t)MasterData_object,
    v102,
    v103,
    v104,
    v105,
    v106,
    v107);
  if ( !stage )
    goto LABEL_366;
  Instance = (__int64)*p_stageNpcMaster;
  if ( !*p_stageNpcMaster )
    goto LABEL_366;
  WarBoardStageEntities = WarBoardStageNpcMaster__GetWarBoardStageEntities(
                            (WarBoardStageNpcMaster_o *)Instance,
                            stage->fields.id,
                            0);
  v111 = WarBoardData___c_TypeInfo;
  v112 = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardStageEntities;
  p_playedStageReinforcementsList = (MissionNaviTransitionBoardItem_o *)&this->fields.playedStageReinforcementsList;
  if ( !*(&WarBoardData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, v109, v110);
    v111 = WarBoardData___c_TypeInfo;
  }
  v113 = v111->static_fields;
  _9__77_1 = (System_Func_T__TResult__o *)v113->__9__77_1;
  if ( !_9__77_1 )
  {
    if ( !*(&v111->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v111, v109, v110);
      v113 = WarBoardData___c_TypeInfo->static_fields;
    }
    v115 = (Il2CppObject *)v113->__9;
    _9__77_1 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_WarBoardStageNpcEntity__uint__TypeInfo);
    System_Func_object__uint____ctor(_9__77_1, v115, Method_WarBoardData___c___ctor_b__77_1__, 0);
    v116 = WarBoardData___c_TypeInfo->static_fields;
    v116->__9__77_1 = (struct System_Func_WarBoardStageNpcEntity__uint__o *)_9__77_1;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v116->__9__77_1,
      (int32_t)_9__77_1,
      v117,
      v118,
      v119,
      v120,
      v121,
      v122);
  }
  v123 = (struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *)System_Linq_Enumerable__ToDictionary_object__uint_(
                                                                                           v112,
                                                                                           (System_Func_TSource__TKey__o *)_9__77_1,
                                                                                           (const MethodInfo_3868C60 *)Method_System_Linq_Enumerable_ToDictionary_WarBoardStageNpcEntity__uint___);
  this->fields.npcEntityDict = v123;
  p_npcEntityDict = &this->fields.npcEntityDict;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.npcEntityDict,
    (int32_t)v123,
    v124,
    v125,
    v126,
    v127,
    v128,
    v129);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_366;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_WarBoardActionPointMaster___);
  if ( !Instance )
    goto LABEL_366;
  WarBoardActionPointEntities = WarBoardActionPointMaster__GetWarBoardActionPointEntities(
                                  (WarBoardActionPointMaster_o *)Instance,
                                  stage->fields.id,
                                  0);
  v133 = WarBoardData___c_TypeInfo;
  v134 = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardActionPointEntities;
  if ( !*(&WarBoardData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, v131, v132);
    v133 = WarBoardData___c_TypeInfo;
  }
  v135 = v133->static_fields;
  _9__77_2 = (System_Func_T__TResult__o *)v135->__9__77_2;
  if ( !_9__77_2 )
  {
    if ( !*(&v133->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v133, v131, v132);
      v135 = WarBoardData___c_TypeInfo->static_fields;
    }
    v137 = (Il2CppObject *)v135->__9;
    _9__77_2 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_WarBoardActionPointEntity__uint__TypeInfo);
    System_Func_object__uint____ctor(_9__77_2, v137, Method_WarBoardData___c___ctor_b__77_2__, 0);
    v138 = WarBoardData___c_TypeInfo->static_fields;
    v138->__9__77_2 = (struct System_Func_WarBoardActionPointEntity__uint__o *)_9__77_2;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v138->__9__77_2,
      (int32_t)_9__77_2,
      v139,
      v140,
      v141,
      v142,
      v143,
      v144);
  }
  v145 = (struct System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__o *)System_Linq_Enumerable__ToDictionary_object__uint_(
                                                                                              v134,
                                                                                              (System_Func_TSource__TKey__o *)_9__77_2,
                                                                                              (const MethodInfo_3868C60 *)Method_System_Linq_Enumerable_ToDictionary_WarBoardActionPointEntity__uint___);
  this->fields.actionPointEntityDict = v145;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.actionPointEntityDict,
    (int32_t)v145,
    v146,
    v147,
    v148,
    v149,
    v150,
    v151);
  Instance = (__int64)this->fields.npcEntityDict;
  if ( !Instance )
    goto LABEL_366;
  Values = System_Collections_Generic_Dictionary_uint__object___get_Values(
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)Instance,
             (const MethodInfo_40221BC *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Values__);
  v155 = WarBoardData___c_TypeInfo;
  v156 = (System_Collections_Generic_IEnumerable_TSource__o *)Values;
  if ( !*(&WarBoardData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, v153, v154);
    v155 = WarBoardData___c_TypeInfo;
  }
  v157 = v155->static_fields;
  _9__77_3 = (System_Func_object__int__o *)v157->__9__77_3;
  if ( !_9__77_3 )
  {
    if ( !*(&v155->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v155, v153, v154);
      v157 = WarBoardData___c_TypeInfo->static_fields;
    }
    v159 = (Il2CppObject *)v157->__9;
    _9__77_3 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_WarBoardStageNpcEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__77_3, v159, Method_WarBoardData___c___ctor_b__77_3__, 0);
    v160 = WarBoardData___c_TypeInfo->static_fields;
    v160->__9__77_3 = (struct System_Func_WarBoardStageNpcEntity__int__o *)_9__77_3;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v160->__9__77_3,
      (int32_t)_9__77_3,
      v161,
      v162,
      v163,
      v164,
      v165,
      v166);
  }
  Instance = System_Linq_Enumerable__Max_object_(
               v156,
               (System_Func_TSource__int__o *)_9__77_3,
               (const MethodInfo_3854100 *)Method_System_Linq_Enumerable_Max_WarBoardStageNpcEntity___);
  npcEntityDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.npcEntityDict;
  this->fields._maxForceId_k__BackingField = Instance;
  if ( !npcEntityDict )
    goto LABEL_366;
  v168 = System_Collections_Generic_Dictionary_uint__object___get_Values(
           npcEntityDict,
           (const MethodInfo_40221BC *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Values__);
  v171 = WarBoardData___c_TypeInfo;
  v172 = (System_Collections_Generic_IEnumerable_TSource__o *)v168;
  if ( !*(&WarBoardData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, v169, v170);
    v171 = WarBoardData___c_TypeInfo;
  }
  v173 = v171->static_fields;
  _9__77_4 = (System_Func_object__int__o *)v173->__9__77_4;
  if ( !_9__77_4 )
  {
    if ( !*(&v171->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v171, v169, v170);
      v173 = WarBoardData___c_TypeInfo->static_fields;
    }
    v175 = (Il2CppObject *)v173->__9;
    _9__77_4 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_WarBoardStageNpcEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__77_4, v175, Method_WarBoardData___c___ctor_b__77_4__, 0);
    v176 = WarBoardData___c_TypeInfo->static_fields;
    v176->__9__77_4 = (struct System_Func_WarBoardStageNpcEntity__int__o *)_9__77_4;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v176->__9__77_4,
      (int32_t)_9__77_4,
      v177,
      v178,
      v179,
      v180,
      v181,
      v182);
  }
  p_bgAnimationInfo_k__BackingField = (MissionNaviTransitionBoardItem_o *)&this->fields._bgAnimationInfo_k__BackingField;
  p_listUiData = (MissionNaviTransitionBoardItem_o *)&this->fields.listUiData;
  v183 = System_Linq_Enumerable__Max_object_(
           v172,
           (System_Func_TSource__int__o *)_9__77_4,
           (const MethodInfo_3854100 *)Method_System_Linq_Enumerable_Max_WarBoardStageNpcEntity___);
  v184 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields._maxGroupId_k__BackingField = v183;
  v703 = this;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance(v184);
  if ( !Instance )
    goto LABEL_366;
  v681 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v185, v186);
  Master_object = (WarBoardStagePieceDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
  v688 = (NpcFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v692 = (WarBoardCommonReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  v695 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v695,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor__);
  v690 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v690,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor__);
  v694 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v694,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v687 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardItemData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v687,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardItemData___ctor__);
  v682 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardTreasureData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v682,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardTreasureData___ctor__);
  v685 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardWallData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v685,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardWallData___ctor__);
  v686 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardEffectData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v686,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardEffectData___ctor__);
  v189 = WarBoardData_TypeInfo;
  if ( !*(&WarBoardData_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo, v187, v188);
    v189 = WarBoardData_TypeInfo;
  }
  v191 = v695;
  v190 = layoutEntities;
  v192 = serverData;
  WARBOARDDATA_SAVEDATA_KEY = v189->static_fields->WARBOARDDATA_SAVEDATA_KEY;
  if ( !*(&EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, v187, v188);
  Instance = EncryptedPlayerPrefs__HasKey(WARBOARDDATA_SAVEDATA_KEY, 0);
  if ( (Instance & 1) != 0 )
  {
    if ( !serverData )
      goto LABEL_366;
    v195 = WarBoardData_TypeInfo;
    v196 = *(&WarBoardData_TypeInfo->_2.cctor_finished + 1);
    if ( serverData->fields.progressType == 3 )
    {
      if ( !v196 )
        j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo, throughCondId, v194);
      WarBoardData__DeleteLocalSave((const MethodInfo *)v195);
    }
    else
    {
      if ( !v196 )
      {
        j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo, throughCondId, v194);
        v195 = WarBoardData_TypeInfo;
      }
      v197 = v195->static_fields->WARBOARDDATA_SAVEDATA_KEY;
      if ( !*(&EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, throughCondId, v194);
      String = EncryptedPlayerPrefs__GetString(v197, 0);
      if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v198, v199);
      v201 = System_Convert__FromBase64String(String, 0);
      v202 = (MiniMessagePack_MiniMessagePacker_o *)sub_21FFEBC(MiniMessagePack_MiniMessagePacker_TypeInfo);
      MiniMessagePack_MiniMessagePacker___ctor(v202, 0);
      if ( !v202 )
        goto LABEL_366;
      v203 = MiniMessagePack_MiniMessagePacker__UnpackClass_object_(
               v202,
               v201,
               (const MethodInfo_38B9CF0 *)Method_MiniMessagePack_MiniMessagePacker_UnpackClass_WarBoardData_WarBoardLocalSaveData___);
      this->fields.localSaveData = (struct WarBoardData_WarBoardLocalSaveData_o *)v203;
      p_localSaveData = &this->fields.localSaveData;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.localSaveData,
        (int32_t)v203,
        v205,
        v206,
        v207,
        v208,
        v209,
        v210);
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
        Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !*p_localSaveData )
          goto LABEL_366;
        if ( !Instance )
          goto LABEL_366;
        Instance = (__int64)WarBoardManager__CheckAndLoadCacheServerData(
                              (WarBoardManager_o *)Instance,
                              serverData,
                              (*p_localSaveData)->fields.localSaveTiming,
                              0);
        if ( !*p_localSaveData )
          goto LABEL_366;
        pieceSaves = (*p_localSaveData)->fields.pieceSaves;
        if ( !pieceSaves )
          goto LABEL_366;
        v215 = (_QWORD *)Instance;
        if ( SLODWORD(pieceSaves->max_length) < 1 )
        {
LABEL_90:
          v706 = v215;
          if ( !*p_localSaveData )
            goto LABEL_366;
          itemSaves = (*p_localSaveData)->fields.itemSaves;
          if ( !itemSaves )
            goto LABEL_366;
          if ( SLODWORD(itemSaves->max_length) < 1 )
          {
LABEL_100:
            if ( !v215 )
              goto LABEL_366;
            v242 = (MissionNaviTransitionBoardItem_o *)(v215 + 5);
            if ( v706[5] )
            {
              if ( !*p_localSaveData )
                goto LABEL_366;
              treasureSaves = (*p_localSaveData)->fields.treasureSaves;
              if ( !treasureSaves )
                goto LABEL_366;
              if ( SLODWORD(treasureSaves->max_length) >= 1 )
              {
                v244 = 0;
                v245 = 0;
                do
                {
                  v246 = sub_21FFEBC(WarBoardData___c__DisplayClass77_2_TypeInfo);
                  WarBoardData___c__DisplayClass77_2___ctor((WarBoardData___c__DisplayClass77_2_o *)v246, 0);
                  if ( v245 >= LODWORD(treasureSaves->max_length) )
                    goto LABEL_367;
                  if ( !v246 )
                    goto LABEL_366;
                  v253 = treasureSaves->m_Items[v245];
                  *(_QWORD *)(v246 + 16) = v253;
                  v254 = v246 + 16;
                  sub_21FFBF4(
                    (MissionNaviTransitionBoardItem_o *)(v246 + 16),
                    (int32_t)v253,
                    v247,
                    v248,
                    v249,
                    v250,
                    v251,
                    v252);
                  klass = (System_Collections_Generic_IEnumerable_TSource__o *)v242->klass;
                  v256 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardUserTreasureData__bool__TypeInfo);
                  System_Func_object__bool____ctor(
                    v256,
                    (Il2CppObject *)v246,
                    Method_WarBoardData___c__DisplayClass77_2___ctor_b__8__,
                    0);
                  Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__59044732(
                                        klass,
                                        (System_Func_TSource__bool__o *)v256,
                                        (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserTreasureData___);
                  if ( Instance )
                  {
                    if ( !*(_QWORD *)v254 )
                      goto LABEL_366;
                    if ( !*(_BYTE *)(*(_QWORD *)v254 + 20LL) )
                    {
                      v244 = 1;
                      *(_BYTE *)(Instance + 20) = 0;
                    }
                  }
                  ++v245;
                }
                while ( (__int64)v245 < SLODWORD(treasureSaves->max_length) );
                if ( (v244 & 1) != 0 )
                {
                  v258 = WarBoardData___c_TypeInfo;
                  v259 = (System_Collections_Generic_IEnumerable_TSource__o *)v242->klass;
                  if ( !*(&WarBoardData___c_TypeInfo->_2.cctor_finished + 1) )
                  {
                    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, throughCondId, v257);
                    v258 = WarBoardData___c_TypeInfo;
                  }
                  v260 = v258->static_fields;
                  _9__77_9 = (System_Func_object__bool__o *)v260->__9__77_9;
                  if ( !_9__77_9 )
                  {
                    if ( !*(&v258->_2.cctor_finished + 1) )
                    {
                      j_il2cpp_runtime_class_init_0(v258, throughCondId, v257);
                      v260 = WarBoardData___c_TypeInfo->static_fields;
                    }
                    v262 = (Il2CppObject *)v260->__9;
                    _9__77_9 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardUserTreasureData__bool__TypeInfo);
                    System_Func_object__bool____ctor(_9__77_9, v262, Method_WarBoardData___c___ctor_b__77_9__, 0);
                    v263 = WarBoardData___c_TypeInfo->static_fields;
                    v263->__9__77_9 = (struct System_Func_WarBoardUserTreasureData__bool__o *)_9__77_9;
                    sub_21FFBF4(
                      (MissionNaviTransitionBoardItem_o *)&v263->__9__77_9,
                      (int32_t)_9__77_9,
                      v264,
                      v265,
                      v266,
                      v267,
                      v268,
                      v269);
                  }
                  v270 = System_Linq_Enumerable__Where_object_(
                           v259,
                           (System_Func_TSource__bool__o *)_9__77_9,
                           (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_WarBoardUserTreasureData___);
                  v271 = System_Linq_Enumerable__ToArray_object_(
                           v270,
                           (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_WarBoardUserTreasureData___);
                  v242->klass = (MissionNaviTransitionBoardItem_c *)v271;
                  sub_21FFBF4(v242, (int32_t)v271, v272, v273, v274, v275, v276, v277);
                }
              }
            }
            if ( !*p_localSaveData )
              goto LABEL_366;
            wallSaves = (*p_localSaveData)->fields.wallSaves;
            if ( !wallSaves )
              goto LABEL_366;
            if ( SLODWORD(wallSaves->max_length) < 1 )
            {
LABEL_130:
              if ( !*p_localSaveData )
                goto LABEL_366;
              v290 = System_Linq_Enumerable__Count_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)(*p_localSaveData)->fields.squareIndexInfo,
                       (const MethodInfo_384633C *)Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData_SaveData___);
              v192 = (WarBoardDataEntity_o *)v706;
              System_Array__Resize_object_(
                (System_Object_array **)v706 + 11,
                v290,
                (const MethodInfo_3775044 *)Method_System_Array_Resize_WarBoardSquareIndexData___);
              v191 = v695;
              v190 = layoutEntities;
              if ( v290 >= 1 )
              {
                v291 = 0;
                v292 = (unsigned int)v290;
                v293 = 8;
                while ( *p_localSaveData )
                {
                  squareIndexInfo = (*p_localSaveData)->fields.squareIndexInfo;
                  if ( !squareIndexInfo )
                    break;
                  if ( v291 >= LODWORD(squareIndexInfo->max_length) )
                    goto LABEL_367;
                  v295 = (unsigned int *)v192->fields.squareIndexInfo;
                  v296 = *(WarBoardSquareIndexData_SaveData_o **)((char *)&squareIndexInfo->obj.klass + v293 * 4);
                  v297 = (WarBoardSquareIndexData_o *)sub_21FFEBC(WarBoardSquareIndexData_TypeInfo);
                  WarBoardSquareIndexData___ctor_45042296(v297, v296, 0);
                  if ( !v295 )
                    break;
                  if ( v297 )
                  {
                    Instance = sub_21FFDA4(v297, *(_QWORD *)(*(_QWORD *)v295 + 64LL));
                    if ( !Instance )
                    {
LABEL_368:
                      v674 = sub_21FFEF0(Instance, v304);
                      sub_21FFD90(v674, 0);
                    }
                  }
                  if ( v291 >= v295[6] )
                    goto LABEL_367;
                  *(_QWORD *)&v295[v293] = v297;
                  sub_21FFBF4(
                    (MissionNaviTransitionBoardItem_o *)&v295[v293],
                    (int32_t)v297,
                    v298,
                    v299,
                    v300,
                    v301,
                    v302,
                    v303);
                  ++v291;
                  v192 = (WarBoardDataEntity_o *)v706;
                  v293 += 2;
                  if ( v292 == v291 )
                    goto LABEL_141;
                }
                goto LABEL_366;
              }
LABEL_141:
              if ( !*p_localSaveData )
                goto LABEL_366;
              v305 = System_Linq_Enumerable__Count_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)(*p_localSaveData)->fields.bossBattleInfo,
                       (const MethodInfo_384633C *)Method_System_Linq_Enumerable_Count_WarBoardBossBattleData_SaveData___);
              System_Array__Resize_object_(
                (System_Object_array **)&v192->fields.bossBattleInfo,
                v305,
                (const MethodInfo_3775044 *)Method_System_Array_Resize_WarBoardBossBattleData___);
              if ( v305 < 1 )
              {
                this = v703;
              }
              else
              {
                v306 = 0;
                v307 = (unsigned int)v305;
                v308 = 8;
                do
                {
                  if ( !*p_localSaveData )
                    goto LABEL_366;
                  bossBattleInfo = (*p_localSaveData)->fields.bossBattleInfo;
                  if ( !bossBattleInfo )
                    goto LABEL_366;
                  if ( v306 >= LODWORD(bossBattleInfo->max_length) )
                    goto LABEL_367;
                  v310 = (unsigned int *)v706[12];
                  v311 = *(WarBoardBossBattleData_SaveData_o **)((char *)&bossBattleInfo->obj.klass + v308 * 4);
                  v312 = (WarBoardBossBattleData_o *)sub_21FFEBC(WarBoardBossBattleData_TypeInfo);
                  WarBoardBossBattleData___ctor_44799032(v312, v311, v313);
                  if ( !v310 )
                    goto LABEL_366;
                  if ( v312 )
                  {
                    Instance = sub_21FFDA4(v312, *(_QWORD *)(*(_QWORD *)v310 + 64LL));
                    if ( !Instance )
                      goto LABEL_368;
                  }
                  if ( v306 >= v310[6] )
                    goto LABEL_367;
                  *(_QWORD *)&v310[v308] = v312;
                  sub_21FFBF4(
                    (MissionNaviTransitionBoardItem_o *)&v310[v308],
                    (int32_t)v312,
                    v314,
                    v315,
                    v316,
                    v317,
                    v318,
                    v319);
                  ++v306;
                  v308 += 2;
                }
                while ( v307 != v306 );
                this = v703;
                v192 = (WarBoardDataEntity_o *)v706;
              }
              goto LABEL_156;
            }
            v279 = 0;
            while ( 1 )
            {
              v280 = sub_21FFEBC(WarBoardData___c__DisplayClass77_3_TypeInfo);
              WarBoardData___c__DisplayClass77_3___ctor((WarBoardData___c__DisplayClass77_3_o *)v280, 0);
              if ( v279 >= LODWORD(wallSaves->max_length) )
                break;
              if ( !v280 )
                goto LABEL_366;
              v287 = wallSaves->m_Items[v279];
              *(_QWORD *)(v280 + 16) = v287;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)(v280 + 16),
                (int32_t)v287,
                v281,
                v282,
                v283,
                v284,
                v285,
                v286);
              v288 = (System_Collections_Generic_IEnumerable_TSource__o *)v706[6];
              v289 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardUserWallData__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v289,
                (Il2CppObject *)v280,
                Method_WarBoardData___c__DisplayClass77_3___ctor_b__10__,
                0);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__59044732(
                                    v288,
                                    (System_Func_TSource__bool__o *)v289,
                                    (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
              if ( Instance )
                WarBoardUserWallData__SetSaveData(
                  (WarBoardUserWallData_o *)Instance,
                  *(WarBoardWallData_SaveData_o **)(v280 + 16),
                  0);
              if ( (__int64)++v279 >= SLODWORD(wallSaves->max_length) )
                goto LABEL_130;
            }
          }
          else
          {
            v231 = 0;
            while ( 1 )
            {
              v232 = sub_21FFEBC(WarBoardData___c__DisplayClass77_1_TypeInfo);
              WarBoardData___c__DisplayClass77_1___ctor((WarBoardData___c__DisplayClass77_1_o *)v232, 0);
              if ( v231 >= LODWORD(itemSaves->max_length) )
                break;
              if ( !v232 )
                goto LABEL_366;
              v239 = itemSaves->m_Items[v231];
              *(_QWORD *)(v232 + 16) = v239;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)(v232 + 16),
                (int32_t)v239,
                v233,
                v234,
                v235,
                v236,
                v237,
                v238);
              if ( !v215 )
                goto LABEL_366;
              v240 = (System_Collections_Generic_IEnumerable_TSource__o *)v215[4];
              v241 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardUserGetItemData__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v241,
                (Il2CppObject *)v232,
                Method_WarBoardData___c__DisplayClass77_1___ctor_b__7__,
                0);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__59044732(
                                    v240,
                                    (System_Func_TSource__bool__o *)v241,
                                    (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
              if ( Instance )
                WarBoardUserGetItemData__SetSaveData(
                  (WarBoardUserGetItemData_o *)Instance,
                  *(WarBoardItemData_SaveData_o **)(v232 + 16),
                  0);
              if ( (__int64)++v231 >= SLODWORD(itemSaves->max_length) )
                goto LABEL_100;
            }
          }
        }
        else
        {
          v216 = 0;
          while ( 1 )
          {
            v217 = sub_21FFEBC(WarBoardData___c__DisplayClass77_0_TypeInfo);
            WarBoardData___c__DisplayClass77_0___ctor((WarBoardData___c__DisplayClass77_0_o *)v217, 0);
            if ( v216 >= LODWORD(pieceSaves->max_length) )
              break;
            if ( !v217 )
              goto LABEL_366;
            v224 = pieceSaves->m_Items[v216];
            *(_QWORD *)(v217 + 16) = v224;
            v225 = (WarBoardPieceData_SaveData_o **)(v217 + 16);
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)(v217 + 16),
              (int32_t)v224,
              v218,
              v219,
              v220,
              v221,
              v222,
              v223);
            if ( !*(_QWORD *)(v217 + 16) )
              goto LABEL_366;
            if ( *(_DWORD *)(*(_QWORD *)(v217 + 16) + 24LL) )
            {
              if ( !v215 )
                goto LABEL_366;
              v226 = (System_Collections_Generic_IEnumerable_TSource__o *)v215[2];
              v227 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardUserServantData__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v227,
                (Il2CppObject *)v217,
                Method_WarBoardData___c__DisplayClass77_0___ctor_b__6__,
                0);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__59044732(
                                    v226,
                                    (System_Func_TSource__bool__o *)v227,
                                    (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
              if ( Instance )
                WarBoardUserServantData__SetSaveData((WarBoardUserServantData_o *)Instance, *v225, 0);
            }
            else
            {
              if ( !v215 )
                goto LABEL_366;
              v228 = (System_Collections_Generic_IEnumerable_TSource__o *)v215[3];
              v229 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardUserMasterData__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v229,
                (Il2CppObject *)v217,
                Method_WarBoardData___c__DisplayClass77_0___ctor_b__5__,
                0);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__59044732(
                                    v228,
                                    (System_Func_TSource__bool__o *)v229,
                                    (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
              if ( Instance )
                WarBoardUserMasterData__SetSaveData((WarBoardUserMasterData_o *)Instance, *v225, 0);
            }
            if ( (__int64)++v216 >= SLODWORD(pieceSaves->max_length) )
              goto LABEL_90;
          }
        }
LABEL_367:
        sub_21FFED4(Instance);
      }
      v320 = WarBoardData_TypeInfo;
      if ( !*(&WarBoardData_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo, v211, v212);
      WarBoardData__DeleteLocalSave((const MethodInfo *)v320);
      *p_localSaveData = 0;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.localSaveData,
        0,
        v321,
        v322,
        v323,
        v324,
        v325,
        v326);
    }
LABEL_156:
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    goto LABEL_157;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !serverData )
    goto LABEL_366;
LABEL_157:
  if ( !Instance )
    goto LABEL_366;
  WarBoardManager__InitializeLogic((WarBoardManager_o *)Instance, v192, v192->fields.progressType != 3, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_366;
  WarBoardManager__UpdateServerData((WarBoardManager_o *)Instance, v192, 0);
  v707 = v192;
  if ( (int)max_length >= 1 )
  {
    npcIdx = 0;
    v327 = 0;
    p_enemyDeck = &v192->fields.enemyDeck;
    p_myDeck = &v192->fields.myDeck;
    do
    {
      v328 = sub_21FFEBC(WarBoardData___c__DisplayClass77_4_TypeInfo);
      WarBoardData___c__DisplayClass77_4___ctor((WarBoardData___c__DisplayClass77_4_o *)v328, 0);
      if ( v327 >= LODWORD(v190->max_length) )
        goto LABEL_367;
      if ( !v328 )
        goto LABEL_366;
      v335 = &v190->obj.klass + v327;
      v336 = v335[4];
      *(_QWORD *)(v328 + 16) = v336;
      v337 = (WarBoardStageLayoutEntity_o **)(v328 + 16);
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v328 + 16), (int32_t)v336, v329, v330, v331, v332, v333, v334);
      v338 = *(WarBoardStageLayoutEntity_o **)(v328 + 16);
      v339 = (WarBoardSquareData_o *)sub_21FFEBC(WarBoardSquareData_TypeInfo);
      WarBoardSquareData___ctor(v339, v338, roadEntities, 0);
      if ( v327 )
      {
        if ( (unsigned int)(v327 - 1) >= LODWORD(v190->max_length) )
          goto LABEL_367;
        v346 = v335[3];
        if ( !v346 )
          goto LABEL_366;
        v347 = *v337;
        if ( !*v337 )
          goto LABEL_366;
        if ( HIDWORD(v346->_1.name) == v347->fields.squareIndex )
          goto LABEL_178;
      }
      else
      {
        v347 = *v337;
        if ( !*v337 )
          goto LABEL_366;
      }
      throughCondId = (unsigned int)v347->fields.throughCondId;
      if ( (_DWORD)throughCondId )
      {
        Instance = (__int64)v692;
        if ( !v692 )
          goto LABEL_366;
        Instance = WarBoardCommonReleaseMaster__IsOpen(v692, throughCondId, 0);
        if ( (Instance & 1) == 0 )
        {
          v357 = v690;
          if ( !v690 )
            goto LABEL_366;
          version = v690->fields._version;
          items = v690->fields._items;
          v360 = (__int64 *)&Method_System_Collections_Generic_List_WarBoardSquareData__Add__;
          goto LABEL_251;
        }
      }
      if ( !v191 )
        goto LABEL_366;
      v348 = v191->fields._items;
      v349 = Method_System_Collections_Generic_List_WarBoardSquareData__Add__;
      ++v191->fields._version;
      if ( !v348 )
        goto LABEL_366;
      size = v191->fields._size;
      if ( (unsigned int)size >= LODWORD(v348->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v191,
          (Il2CppObject *)v339,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v349[4] + 192LL) + 112LL));
      }
      else
      {
        v351 = &v348->obj.klass + size;
        v191->fields._size = size + 1;
        v351[4] = (Il2CppClass *)v339;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v351 + 4), (int32_t)v339, v340, v341, v342, v343, v344, v345);
      }
LABEL_178:
      v352 = *v337;
      if ( !*v337 )
        goto LABEL_366;
      if ( v352->fields.isPiecePut )
      {
        questId = v192->fields.questId;
        questPhase = v192->fields.questPhase;
        if ( v352->fields.pieceIndex )
        {
          svtInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v192->fields.svtInfo;
          v354 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardUserServantData__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v354,
            (Il2CppObject *)v328,
            Method_WarBoardData___c__DisplayClass77_4___ctor_b__13__,
            0);
          Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__59044732(
                                svtInfo,
                                (System_Func_TSource__bool__o *)v354,
                                (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
          v355 = (WarBoardUserServantData_o *)Instance;
          v356 = 0;
        }
        else
        {
          masterInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v192->fields.masterInfo;
          v362 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardUserMasterData__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v362,
            (Il2CppObject *)v328,
            Method_WarBoardData___c__DisplayClass77_4___ctor_b__12__,
            0);
          Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__59044732(
                                masterInfo,
                                (System_Func_TSource__bool__o *)v362,
                                (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
          v356 = (WarBoardUserMasterData_o *)Instance;
          v355 = 0;
        }
        v363 = *v337;
        if ( !*v337 )
          goto LABEL_366;
        v364 = p_enemyDeck;
        if ( !v363->fields.forceId )
        {
          v364 = p_enemyDeck;
          if ( !v363->fields.pieceIndex )
            v364 = p_myDeck;
        }
        v365 = *v364;
        Type = Follower__getType(v363->fields.followerType, 0);
        IsNpc = Follower__IsNpc(Type, 0);
        v368 = *v337;
        v369 = IsNpc;
        progressType = v192->fields.progressType;
        v371 = *p_npcEntityDict;
        v372 = (WarBoardPieceData_o *)sub_21FFEBC(WarBoardPieceData_TypeInfo);
        v373 = v372;
        v374 = progressType == 3;
        if ( v369 )
        {
          WarBoardPieceData___ctor(v372, v368, v355, v356, v365, v374, v371, npcIdx, 0);
          if ( !*v337 )
            goto LABEL_366;
          v191 = v695;
          v190 = layoutEntities;
          this = v703;
          v192 = v707;
          Instance = (__int64)Master_object;
          if ( !Master_object )
            goto LABEL_366;
          Instance = WarBoardStagePieceDetailMaster__TryGetEntity(
                       Master_object,
                       &entity,
                       (*v337)->fields.stageId,
                       (*v337)->fields.forceId,
                       (*v337)->fields.groupId,
                       (*v337)->fields.pieceIndex,
                       0);
          if ( (Instance & 1) != 0 )
          {
            Instance = (__int64)entity;
            if ( !entity )
              goto LABEL_366;
            Instance = WarBoardStagePieceDetailEntity__GetImageSvtId(entity, 0);
            if ( !v373 )
              goto LABEL_366;
            v375 = Instance;
            Instance = (__int64)entity;
            v373->fields._npcImageSvtId_k__BackingField = v375;
            if ( !Instance )
              goto LABEL_366;
            v373->fields._npcDispLimitCount_k__BackingField = WarBoardStagePieceDetailEntity__GetDispLimitCnt(
                                                                (WarBoardStagePieceDetailEntity_o *)Instance,
                                                                0);
          }
          else if ( !v373 )
          {
            goto LABEL_366;
          }
          Instance = (__int64)v688;
          if ( !v688 )
            goto LABEL_366;
          Entity_49386132 = NpcFollowerMaster__GetEntity_49386132(
                              v688,
                              questId,
                              questPhase,
                              v373->fields._npcId_k__BackingField,
                              0);
          if ( Entity_49386132 )
          {
            v386 = Entity_49386132;
            if ( !v373->fields._npcImageSvtId_k__BackingField )
              v373->fields._npcImageSvtId_k__BackingField = NpcFollowerEntity__GetImageSvtId(Entity_49386132, 0);
            if ( v373->fields._npcDispLimitCount_k__BackingField < 0 )
              v373->fields._npcDispLimitCount_k__BackingField = NpcFollowerEntity__GetDispLimitCnt(v386, -1, 0);
          }
          Instance = WarBoardPieceData__get_isPlayerGroup(v373, 0);
          if ( (Instance & 1) != 0 )
          {
            Instance = (__int64)v681;
            if ( !v681 )
              goto LABEL_366;
            Instance = DataMasterBase_object__object__long___TryGetEntity(
                         v681,
                         &v711,
                         v373->fields._npcId_k__BackingField,
                         (const MethodInfo_3EDFA34 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)v711;
              if ( !v711 )
                goto LABEL_366;
              Instance = (__int64)NpcServantFollowerEntity__GetFollowerName_49390336(
                                    (NpcServantFollowerEntity_o *)v711,
                                    v373->fields._npcId_k__BackingField,
                                    questId,
                                    questPhase,
                                    &isChangeName,
                                    0);
              if ( isChangeName )
              {
                Instance = (__int64)v373->fields._battleServant_k__BackingField;
                if ( !Instance )
                  goto LABEL_366;
                BattleServantData__ClearOverwriteServantName((BattleServantData_o *)Instance, 0);
              }
            }
          }
          if ( !v694 )
            goto LABEL_366;
          v393 = v694->fields._items;
          v394 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
          ++v694->fields._version;
          if ( !v393 )
            goto LABEL_366;
          v395 = v694->fields._size;
          if ( (unsigned int)v395 >= LODWORD(v393->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v694,
              (Il2CppObject *)v373,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v394[4] + 192LL) + 112LL));
          }
          else
          {
            v396 = &v393->obj.klass + v395;
            v694->fields._size = v395 + 1;
            v396[4] = (Il2CppClass *)v373;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)(v396 + 4),
              (int32_t)v373,
              v387,
              v388,
              v389,
              v390,
              v391,
              v392);
          }
          ++npcIdx;
        }
        else
        {
          WarBoardPieceData___ctor(v372, v368, v355, v356, v365, v374, v371, -1, 0);
          if ( !v373 )
            goto LABEL_366;
          Instance = WarBoardPieceData__get_isMaster(v373, 0);
          v191 = v695;
          v190 = layoutEntities;
          this = v703;
          v192 = v707;
          if ( (Instance & 1) != 0 )
          {
            Instance = (__int64)*p_masterExistsForce;
            if ( !*p_masterExistsForce )
              goto LABEL_366;
            Instance = System_Collections_Generic_List_int___Contains(
                         (System_Collections_Generic_List_int__o *)Instance,
                         v373->fields._forceId_k__BackingField,
                         (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__);
            if ( (Instance & 1) == 0 )
            {
              Instance = (__int64)*p_masterExistsForce;
              if ( !*p_masterExistsForce )
                goto LABEL_366;
              v382 = *(_QWORD *)(Instance + 16);
              throughCondId = (unsigned int)v373->fields._forceId_k__BackingField;
              v383 = Method_System_Collections_Generic_List_int__Add__;
              ++*(_DWORD *)(Instance + 28);
              if ( !v382 )
                goto LABEL_366;
              v384 = *(int *)(Instance + 24);
              if ( (unsigned int)v384 >= *(_DWORD *)(v382 + 24) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  (System_Collections_Generic_List_int__o *)Instance,
                  throughCondId,
                  *(const MethodInfo_4433138 **)(*(_QWORD *)(v383[4] + 192LL) + 112LL));
              }
              else
              {
                *(_DWORD *)(Instance + 24) = v384 + 1;
                *(_DWORD *)(v382 + 4 * v384 + 32) = throughCondId;
              }
            }
          }
          if ( !v694 )
            goto LABEL_366;
          v397 = v694->fields._items;
          v398 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
          ++v694->fields._version;
          if ( !v397 )
            goto LABEL_366;
          v399 = v694->fields._size;
          if ( (unsigned int)v399 >= LODWORD(v397->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v694,
              (Il2CppObject *)v373,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v398[4] + 192LL) + 112LL));
          }
          else
          {
            v400 = &v397->obj.klass + v399;
            v694->fields._size = v399 + 1;
            v400[4] = (Il2CppClass *)v373;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)(v400 + 4),
              (int32_t)v373,
              v376,
              v377,
              v378,
              v379,
              v380,
              v381);
          }
        }
      }
      v401 = *v337;
      if ( !*v337 )
        goto LABEL_366;
      v402 = v401->fields.type;
      if ( v402 > 3 )
      {
        if ( v402 == 4 )
        {
          treasureInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v192->fields.treasureInfo;
          if ( !treasureInfo )
            goto LABEL_249;
          v424 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardUserTreasureData__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v424,
            (Il2CppObject *)v328,
            Method_WarBoardData___c__DisplayClass77_4___ctor_b__11__,
            0);
          Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__59044732(
                                treasureInfo,
                                (System_Func_TSource__bool__o *)v424,
                                (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserTreasureData___);
          if ( !Instance )
          {
            v401 = *v337;
LABEL_249:
            v339 = (WarBoardSquareData_o *)sub_21FFEBC(WarBoardTreasureData_TypeInfo);
            WarBoardTreasureData___ctor((WarBoardTreasureData_o *)v339, v401, 0);
            v357 = v682;
            if ( !v682 )
              goto LABEL_366;
            version = v682->fields._version;
            items = v682->fields._items;
            v360 = &Method_System_Collections_Generic_List_WarBoardTreasureData__Add__;
LABEL_251:
            v425 = *v360;
            v357->fields._version = version + 1;
            if ( !items )
              goto LABEL_366;
            v426 = v357->fields._size;
            if ( (unsigned int)v426 >= LODWORD(items->max_length) )
            {
              v428 = *(_QWORD *)(v425 + 32);
              v429 = v357;
              v430 = (Il2CppObject *)v339;
LABEL_257:
              System_Collections_Generic_List_object___AddWithResize(
                v429,
                v430,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v428 + 192) + 112LL));
              continue;
            }
            v427 = &items->obj.klass + v426;
            v421 = (int)v339;
            v357->fields._size = v426 + 1;
            v427[4] = (Il2CppClass *)v339;
            v422 = (MissionNaviTransitionBoardItem_o *)(v427 + 4);
LABEL_254:
            sub_21FFBF4(v422, v421, v340, v341, v342, v343, v344, v345);
          }
        }
        else if ( v402 == 5 )
        {
          wallInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v192->fields.wallInfo;
          v404 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardUserWallData__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v404,
            (Il2CppObject *)v328,
            Method_WarBoardData___c__DisplayClass77_4___ctor_b__15__,
            0);
          v405 = System_Linq_Enumerable__FirstOrDefault_object__59044732(
                   wallInfo,
                   (System_Func_TSource__bool__o *)v404,
                   (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
          v406 = *(WarBoardStageLayoutEntity_o **)(v328 + 16);
          v407 = (WarBoardUserWallData_o *)v405;
          v408 = (WarBoardWallData_o *)sub_21FFEBC(WarBoardWallData_TypeInfo);
          WarBoardWallData___ctor(v408, v406, v407, 0);
          v409 = v685;
          if ( !v685 )
            goto LABEL_366;
          v410 = v685->fields._version;
          v411 = v685->fields._items;
          v412 = &Method_System_Collections_Generic_List_WarBoardWallData__Add__;
LABEL_243:
          v418 = *v412;
          v409->fields._version = v410 + 1;
          if ( !v411 )
            goto LABEL_366;
          v419 = v409->fields._size;
          if ( (unsigned int)v419 >= LODWORD(v411->max_length) )
          {
            v428 = *(_QWORD *)(v418 + 32);
            v429 = v409;
            v430 = (Il2CppObject *)v408;
            goto LABEL_257;
          }
          v420 = &v411->obj.klass + v419;
          v421 = (int)v408;
          v409->fields._size = v419 + 1;
          v420[4] = (Il2CppClass *)v408;
          v422 = (MissionNaviTransitionBoardItem_o *)(v420 + 4);
          goto LABEL_254;
        }
      }
      else
      {
        if ( v402 == 2 )
        {
          getItemInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v192->fields.getItemInfo;
          v414 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardUserGetItemData__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v414,
            (Il2CppObject *)v328,
            Method_WarBoardData___c__DisplayClass77_4___ctor_b__14__,
            0);
          v415 = System_Linq_Enumerable__FirstOrDefault_object__59044732(
                   getItemInfo,
                   (System_Func_TSource__bool__o *)v414,
                   (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
          v416 = *(WarBoardStageLayoutEntity_o **)(v328 + 16);
          v417 = (WarBoardUserGetItemData_o *)v415;
          v408 = (WarBoardWallData_o *)sub_21FFEBC(WarBoardItemData_TypeInfo);
          WarBoardItemData___ctor((WarBoardItemData_o *)v408, v416, v417, 0);
          v409 = v687;
          if ( !v687 )
            goto LABEL_366;
          v410 = v687->fields._version;
          v411 = v687->fields._items;
          v412 = &Method_System_Collections_Generic_List_WarBoardItemData__Add__;
          goto LABEL_243;
        }
        if ( v402 == 3 )
        {
          v339 = (WarBoardSquareData_o *)sub_21FFEBC(WarBoardEffectData_TypeInfo);
          WarBoardEffectData___ctor((WarBoardEffectData_o *)v339, v401, 0);
          v357 = v686;
          if ( !v686 )
            goto LABEL_366;
          version = v686->fields._version;
          items = v686->fields._items;
          v360 = &Method_System_Collections_Generic_List_WarBoardEffectData__Add__;
          goto LABEL_251;
        }
      }
    }
    while ( (unsigned int)max_length != ++v327 );
  }
  if ( !v191 )
    goto LABEL_366;
  v431 = System_Collections_Generic_List_object___ToArray(
           v191,
           (const MethodInfo_445164C *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  this->fields.squares = (struct WarBoardSquareData_array *)v431;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.squares,
    (int32_t)v431,
    v432,
    v433,
    v434,
    v435,
    v436,
    v437);
  Instance = (__int64)v690;
  if ( !v690 )
    goto LABEL_366;
  v438 = System_Collections_Generic_List_object___ToArray(
           v690,
           (const MethodInfo_445164C *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  this->fields.condSquares = (struct WarBoardSquareData_array *)v438;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.condSquares,
    (int32_t)v438,
    v439,
    v440,
    v441,
    v442,
    v443,
    v444);
  Instance = (__int64)v694;
  if ( !v694 )
    goto LABEL_366;
  v445 = System_Collections_Generic_List_object___ToArray(
           v694,
           (const MethodInfo_445164C *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  this->fields.pieces = (struct WarBoardPieceData_array *)v445;
  p_pieces = (System_Collections_Generic_IEnumerable_T__o **)&this->fields.pieces;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.pieces,
    (int32_t)v445,
    v447,
    v448,
    v449,
    v450,
    v451,
    v452);
  pieces = (System_Object_array *)this->fields.pieces;
  v454 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_WarBoardPieceData__TypeInfo);
  System_Comparison_object____ctor(v454, (Il2CppObject *)this, Method_WarBoardData_ComparePiece__, 0);
  System_Array__Sort_object__58222280(
    pieces,
    v454,
    (const MethodInfo_37866C8 *)Method_System_Array_Sort_WarBoardPieceData___);
  Instance = (__int64)v687;
  if ( !v687 )
    goto LABEL_366;
  v455 = System_Collections_Generic_List_object___ToArray(
           v687,
           (const MethodInfo_445164C *)Method_System_Collections_Generic_List_WarBoardItemData__ToArray__);
  this->fields.items = (struct WarBoardItemData_array *)v455;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.items,
    (int32_t)v455,
    v456,
    v457,
    v458,
    v459,
    v460,
    v461);
  Instance = (__int64)v682;
  if ( !v682 )
    goto LABEL_366;
  v462 = System_Collections_Generic_List_object___ToArray(
           v682,
           (const MethodInfo_445164C *)Method_System_Collections_Generic_List_WarBoardTreasureData__ToArray__);
  this->fields.treasures = (struct WarBoardTreasureData_array *)v462;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.treasures,
    (int32_t)v462,
    v463,
    v464,
    v465,
    v466,
    v467,
    v468);
  Instance = (__int64)v686;
  if ( !v686 )
    goto LABEL_366;
  v469 = System_Collections_Generic_List_object___ToArray(
           v686,
           (const MethodInfo_445164C *)Method_System_Collections_Generic_List_WarBoardEffectData__ToArray__);
  this->fields.effects = (struct WarBoardEffectData_array *)v469;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.effects,
    (int32_t)v469,
    v470,
    v471,
    v472,
    v473,
    v474,
    v475);
  Instance = (__int64)v685;
  if ( !v685 )
    goto LABEL_366;
  v476 = System_Collections_Generic_List_object___ToArray(
           v685,
           (const MethodInfo_445164C *)Method_System_Collections_Generic_List_WarBoardWallData__ToArray__);
  this->fields.walls = (struct WarBoardWallData_array *)v476;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.walls,
    (int32_t)v476,
    v477,
    v478,
    v479,
    v480,
    v481,
    v482);
  this->fields.serverData = v192;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.serverData,
    (int32_t)v192,
    v483,
    v484,
    v485,
    v486,
    v487,
    v488);
  if ( v192->fields.progressType == 3 )
    WarBoardData__InitPrevCondData(this, (const MethodInfo *)throughCondId);
  v489 = this->fields.localSaveData;
  if ( v489 )
  {
    v490 = v489->fields.pieceSaves;
    roadEntitiesb = &this->fields.localSaveData;
    if ( v490 )
    {
      if ( SLODWORD(v490->max_length) >= 1 )
      {
        v491 = 0;
        do
        {
          v492 = sub_21FFEBC(WarBoardData___c__DisplayClass77_5_TypeInfo);
          WarBoardData___c__DisplayClass77_5___ctor((WarBoardData___c__DisplayClass77_5_o *)v492, 0);
          if ( v491 >= LODWORD(v490->max_length) )
            goto LABEL_367;
          if ( !v492 )
            goto LABEL_366;
          v499 = v490->m_Items[v491];
          *(_QWORD *)(v492 + 16) = v499;
          v500 = (WarBoardPieceData_SaveData_o **)(v492 + 16);
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)(v492 + 16),
            (int32_t)v499,
            v493,
            v494,
            v495,
            v496,
            v497,
            v498);
          v501 = *p_pieces;
          v502 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardPieceData__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v502,
            (Il2CppObject *)v492,
            Method_WarBoardData___c__DisplayClass77_5___ctor_b__16__,
            0);
          if ( !BasicHelper__Any_object__58575580(
                  (System_Object_array *)v501,
                  (System_Func_T__bool__o *)v502,
                  (const MethodInfo_37DCADC *)Method_BasicHelper_Any_WarBoardPieceData___) )
          {
            v503 = (System_Collections_Generic_IEnumerable_TSource__o *)v192->fields.svtInfo;
            v504 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardUserServantData__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v504,
              (Il2CppObject *)v492,
              Method_WarBoardData___c__DisplayClass77_5___ctor_b__17__,
              0);
            v505 = System_Linq_Enumerable__FirstOrDefault_object__59044732(
                     v503,
                     (System_Func_TSource__bool__o *)v504,
                     (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
            v506 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v506,
              (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
            if ( !v506 )
              goto LABEL_366;
            System_Collections_Generic_List_object___AddRange(
              v506,
              *p_pieces,
              (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
            if ( !p_fields->stageEntity )
              goto LABEL_366;
            id = p_fields->stageEntity->fields.id;
            v508 = *v500;
            v509 = (WarBoardPieceData_o *)sub_21FFEBC(WarBoardPieceData_TypeInfo);
            WarBoardPieceData___ctor_45019948(v509, id, (WarBoardUserServantData_o *)v505, v508, 0, -1, 0);
            v516 = v506->fields._items;
            v517 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
            ++v506->fields._version;
            if ( !v516 )
              goto LABEL_366;
            v518 = v506->fields._size;
            this = v703;
            if ( (unsigned int)v518 >= LODWORD(v516->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v506,
                (Il2CppObject *)v509,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v517[4] + 192LL) + 112LL));
            }
            else
            {
              v519 = &v516->obj.klass + v518;
              v506->fields._size = v518 + 1;
              v519[4] = (Il2CppClass *)v509;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)(v519 + 4),
                (int32_t)v509,
                v510,
                v511,
                v512,
                v513,
                v514,
                v515);
            }
            v192 = v707;
            v520 = System_Collections_Generic_List_object___ToArray(
                     v506,
                     (const MethodInfo_445164C *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
            *p_pieces = (System_Collections_Generic_IEnumerable_T__o *)v520;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_pieces, (int32_t)v520, v521, v522, v523, v524, v525, v526);
          }
          Instance = (__int64)*v500;
          if ( !*v500 )
            goto LABEL_366;
          WarBoardPieceData_SaveData__SetOwner((WarBoardPieceData_SaveData_o *)Instance, this, 0);
          Instance = (__int64)*v500;
          if ( !*v500 )
            goto LABEL_366;
          WarBoardPieceData_SaveData__Load((WarBoardPieceData_SaveData_o *)Instance, 0);
        }
        while ( (__int64)++v491 < SLODWORD(v490->max_length) );
      }
      if ( *roadEntitiesb )
      {
        v527 = (*roadEntitiesb)->fields.itemSaves;
        if ( v527 )
        {
          v528 = v527->max_length;
          if ( v528 >= 1 )
          {
            v529 = 0;
            while ( (unsigned int)v529 < v528 )
            {
              v530 = v527->m_Items[v529];
              if ( !v530 )
                goto LABEL_366;
              WarBoardItemData_SaveData__SetOwner(v527->m_Items[v529], this, 0);
              WarBoardItemData_SaveData__Load(v530, 0);
              v528 = v527->max_length;
              if ( (int)++v529 >= v528 )
                goto LABEL_292;
            }
            goto LABEL_367;
          }
LABEL_292:
          if ( *roadEntitiesb )
          {
            v531 = (*roadEntitiesb)->fields.treasureSaves;
            if ( v531 )
            {
              v532 = v531->max_length;
              if ( v532 >= 1 )
              {
                v533 = 0;
                while ( (unsigned int)v533 < v532 )
                {
                  v534 = v531->m_Items[v533];
                  if ( !v534 )
                    goto LABEL_366;
                  WarBoardTreasureData_SaveData__SetOwner(v531->m_Items[v533], this, 0);
                  WarBoardTreasureData_SaveData__Load(v534, 0);
                  v532 = v531->max_length;
                  if ( (int)++v533 >= v532 )
                    goto LABEL_299;
                }
                goto LABEL_367;
              }
LABEL_299:
              if ( *roadEntitiesb )
              {
                v535 = (*roadEntitiesb)->fields.wallSaves;
                if ( v535 )
                {
                  v536 = v535->max_length;
                  if ( v536 >= 1 )
                  {
                    v537 = 0;
                    while ( (unsigned int)v537 < v536 )
                    {
                      v538 = v535->m_Items[v537];
                      if ( !v538 )
                        goto LABEL_366;
                      WarBoardWallData_SaveData__SetOwner(v535->m_Items[v537], this, 0);
                      WarBoardWallData_SaveData__Load(v538, 0);
                      v536 = v535->max_length;
                      if ( (int)++v537 >= v536 )
                        goto LABEL_306;
                    }
                    goto LABEL_367;
                  }
LABEL_306:
                  if ( *roadEntitiesb )
                  {
                    squareSaves = (*roadEntitiesb)->fields.squareSaves;
                    if ( squareSaves )
                    {
                      v540 = squareSaves->max_length;
                      if ( v540 >= 1 )
                      {
                        v541 = 0;
                        while ( (unsigned int)v541 < v540 )
                        {
                          v542 = squareSaves->m_Items[v541];
                          if ( !v542 )
                            goto LABEL_366;
                          WarBoardSquareData_SaveData__SetOwner(squareSaves->m_Items[v541], this, 0);
                          WarBoardSquareData_SaveData__Load(v542, 0);
                          v540 = squareSaves->max_length;
                          if ( (int)++v541 >= v540 )
                            goto LABEL_313;
                        }
                        goto LABEL_367;
                      }
LABEL_313:
                      if ( *roadEntitiesb )
                      {
                        this->fields.isPlayedHalfDeadMessage = (*roadEntitiesb)->fields.isPlayedHalfDeadMessage;
                        v543 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardEventData__TypeInfo);
                        System_Collections_Generic_List_object____ctor(
                          v543,
                          (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardEventData___ctor__);
                        this->fields.listEvent = (struct System_Collections_Generic_List_WarBoardEventData__o *)v543;
                        sub_21FFBF4(
                          (MissionNaviTransitionBoardItem_o *)p_listEvent,
                          (int32_t)v543,
                          v544,
                          v545,
                          v546,
                          v547,
                          v548,
                          v549);
                        v556 = this->fields.localSaveData;
                        if ( v556 )
                        {
                          eventSaves = v556->fields.eventSaves;
                          if ( eventSaves )
                          {
                            v558 = eventSaves->max_length;
                            if ( (int)v558 >= 1 )
                            {
                              v559 = 0;
                              while ( v559 < (unsigned int)v558 )
                              {
                                v560 = eventSaves->m_Items[v559];
                                v561 = (System_Collections_Generic_List_object__o *)*p_listEvent;
                                v562 = (WarBoardEventData_o *)sub_21FFEBC(WarBoardEventData_TypeInfo);
                                WarBoardEventData___ctor_45010344(v562, v560, 0);
                                if ( !v561 )
                                  goto LABEL_366;
                                v569 = v561->fields._items;
                                v570 = Method_System_Collections_Generic_List_WarBoardEventData__Add__;
                                ++v561->fields._version;
                                if ( !v569 )
                                  goto LABEL_366;
                                v571 = v561->fields._size;
                                if ( (unsigned int)v571 >= LODWORD(v569->max_length) )
                                {
                                  System_Collections_Generic_List_object___AddWithResize(
                                    v561,
                                    (Il2CppObject *)v562,
                                    *(const MethodInfo_444FB2C **)(*(_QWORD *)(v570[4] + 192LL) + 112LL));
                                }
                                else
                                {
                                  v572 = &v569->obj.klass + v571;
                                  v561->fields._size = v571 + 1;
                                  v572[4] = (Il2CppClass *)v562;
                                  sub_21FFBF4(
                                    (MissionNaviTransitionBoardItem_o *)(v572 + 4),
                                    (int32_t)v562,
                                    v563,
                                    v564,
                                    v565,
                                    v566,
                                    v567,
                                    v568);
                                }
                                LODWORD(v558) = eventSaves->max_length;
                                if ( (__int64)++v559 >= (int)v558 )
                                  goto LABEL_325;
                              }
                              goto LABEL_367;
                            }
LABEL_325:
                            v573 = *roadEntitiesb;
                            if ( *roadEntitiesb )
                            {
                              latestPieceActionSquareIndexes = v573->fields.latestPieceActionSquareIndexes;
                              v703->fields.winCondId = v573->fields.winCondId;
                              v703->fields.latestPieceActionSquareIndexes = latestPieceActionSquareIndexes;
                              sub_21FFBF4(
                                (MissionNaviTransitionBoardItem_o *)p_latestPieceActionSquareIndexes,
                                (int32_t)latestPieceActionSquareIndexes,
                                v550,
                                v551,
                                v552,
                                v553,
                                v554,
                                v555);
                              v581 = v703->fields.localSaveData;
                              if ( v581 )
                              {
                                latestBattlePieceUniqueIndexes = (MissionNaviTransitionBoardItem_c *)v581->fields.latestBattlePieceUniqueIndexes;
                                p_latestBattlePieceUniqueIndexes->klass = latestBattlePieceUniqueIndexes;
                                sub_21FFBF4(
                                  p_latestBattlePieceUniqueIndexes,
                                  (int32_t)latestBattlePieceUniqueIndexes,
                                  v575,
                                  v576,
                                  v577,
                                  v578,
                                  v579,
                                  v580);
                                v583 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardPrevCondData__TypeInfo);
                                System_Collections_Generic_List_object____ctor(
                                  v583,
                                  (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardPrevCondData___ctor__);
                                p_listPrevCond->klass = (MissionNaviTransitionBoardItem_c *)v583;
                                sub_21FFBF4(p_listPrevCond, (int32_t)v583, v584, v585, v586, v587, v588, v589);
                                if ( *roadEntitiesb )
                                {
                                  prevCondSaves = (*roadEntitiesb)->fields.prevCondSaves;
                                  if ( prevCondSaves )
                                  {
                                    v591 = prevCondSaves->max_length;
                                    if ( (int)v591 >= 1 )
                                    {
                                      v592 = 0;
                                      while ( v592 < (unsigned int)v591 )
                                      {
                                        v593 = prevCondSaves->m_Items[v592];
                                        v594 = (System_Collections_Generic_List_object__o *)p_listPrevCond->klass;
                                        v595 = (WarBoardPrevCondData_o *)sub_21FFEBC(WarBoardPrevCondData_TypeInfo);
                                        WarBoardPrevCondData___ctor_45037000(v595, v593, 0);
                                        if ( !v594 )
                                          goto LABEL_366;
                                        v602 = v594->fields._items;
                                        v603 = Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__;
                                        ++v594->fields._version;
                                        if ( !v602 )
                                          goto LABEL_366;
                                        v604 = v594->fields._size;
                                        if ( (unsigned int)v604 >= LODWORD(v602->max_length) )
                                        {
                                          System_Collections_Generic_List_object___AddWithResize(
                                            v594,
                                            (Il2CppObject *)v595,
                                            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v603[4] + 192LL) + 112LL));
                                        }
                                        else
                                        {
                                          v605 = &v602->obj.klass + v604;
                                          v594->fields._size = v604 + 1;
                                          v605[4] = (Il2CppClass *)v595;
                                          sub_21FFBF4(
                                            (MissionNaviTransitionBoardItem_o *)(v605 + 4),
                                            (int32_t)v595,
                                            v596,
                                            v597,
                                            v598,
                                            v599,
                                            v600,
                                            v601);
                                        }
                                        LODWORD(v591) = prevCondSaves->max_length;
                                        if ( (__int64)++v592 >= (int)v591 )
                                          goto LABEL_338;
                                      }
                                      goto LABEL_367;
                                    }
LABEL_338:
                                    v606 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_HoldReinforcementsData__TypeInfo);
                                    System_Collections_Generic_List_object____ctor(
                                      v606,
                                      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_HoldReinforcementsData___ctor__);
                                    p_reinforcementsSaveList->klass = (MissionNaviTransitionBoardItem_c *)v606;
                                    sub_21FFBF4(
                                      p_reinforcementsSaveList,
                                      (int32_t)v606,
                                      v607,
                                      v608,
                                      v609,
                                      v610,
                                      v611,
                                      v612);
                                    if ( *roadEntitiesb )
                                    {
                                      reinforcementsSaves = (*roadEntitiesb)->fields.reinforcementsSaves;
                                      if ( reinforcementsSaves )
                                      {
                                        v614 = reinforcementsSaves->max_length;
                                        if ( (int)v614 >= 1 )
                                        {
                                          v615 = 0;
                                          while ( v615 < (unsigned int)v614 )
                                          {
                                            v616 = reinforcementsSaves->m_Items[v615];
                                            v617 = (System_Collections_Generic_List_object__o *)p_reinforcementsSaveList->klass;
                                            v618 = (HoldReinforcementsData_o *)sub_21FFEBC(HoldReinforcementsData_TypeInfo);
                                            HoldReinforcementsData___ctor_45037200(v618, v616, 0);
                                            if ( !v617 )
                                              goto LABEL_366;
                                            v625 = v617->fields._items;
                                            v626 = Method_System_Collections_Generic_List_HoldReinforcementsData__Add__;
                                            ++v617->fields._version;
                                            if ( !v625 )
                                              goto LABEL_366;
                                            v627 = v617->fields._size;
                                            if ( (unsigned int)v627 >= LODWORD(v625->max_length) )
                                            {
                                              System_Collections_Generic_List_object___AddWithResize(
                                                v617,
                                                (Il2CppObject *)v618,
                                                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v626[4] + 192LL) + 112LL));
                                            }
                                            else
                                            {
                                              v628 = &v625->obj.klass + v627;
                                              v617->fields._size = v627 + 1;
                                              v628[4] = (Il2CppClass *)v618;
                                              sub_21FFBF4(
                                                (MissionNaviTransitionBoardItem_o *)(v628 + 4),
                                                (int32_t)v618,
                                                v619,
                                                v620,
                                                v621,
                                                v622,
                                                v623,
                                                v624);
                                            }
                                            LODWORD(v614) = reinforcementsSaves->max_length;
                                            if ( (__int64)++v615 >= (int)v614 )
                                              goto LABEL_349;
                                          }
                                          goto LABEL_367;
                                        }
LABEL_349:
                                        if ( *roadEntitiesb )
                                        {
                                          v629 = System_Linq_Enumerable__ToList_int_(
                                                   (System_Collections_Generic_IEnumerable_TSource__o *)(*roadEntitiesb)->fields.playedReinforcements,
                                                   (const MethodInfo_386D6A8 *)Method_System_Linq_Enumerable_ToList_int___);
                                          p_playedStageReinforcementsList->klass = (MissionNaviTransitionBoardItem_c *)v629;
                                          sub_21FFBF4(
                                            p_playedStageReinforcementsList,
                                            (int32_t)v629,
                                            v630,
                                            v631,
                                            v632,
                                            v633,
                                            v634,
                                            v635);
                                          v636 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardUiData__TypeInfo);
                                          System_Collections_Generic_List_object____ctor(
                                            v636,
                                            (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardUiData___ctor__);
                                          p_listUiData->klass = (MissionNaviTransitionBoardItem_c *)v636;
                                          sub_21FFBF4(p_listUiData, (int32_t)v636, v637, v638, v639, v640, v641, v642);
                                          if ( *roadEntitiesb )
                                          {
                                            uiDataSaves = (*roadEntitiesb)->fields.uiDataSaves;
                                            if ( uiDataSaves )
                                            {
                                              v650 = uiDataSaves->max_length;
                                              if ( (int)v650 >= 1 )
                                              {
                                                v651 = 0;
                                                while ( v651 < (unsigned int)v650 )
                                                {
                                                  v652 = uiDataSaves->m_Items[v651];
                                                  v653 = (System_Collections_Generic_List_object__o *)p_listUiData->klass;
                                                  v654 = (WarBoardUiData_o *)sub_21FFEBC(WarBoardUiData_TypeInfo);
                                                  WarBoardUiData___ctor_45043488(v654, v652, 0);
                                                  if ( !v653 )
                                                    goto LABEL_366;
                                                  v661 = v653->fields._items;
                                                  v662 = Method_System_Collections_Generic_List_WarBoardUiData__Add__;
                                                  ++v653->fields._version;
                                                  if ( !v661 )
                                                    goto LABEL_366;
                                                  v663 = v653->fields._size;
                                                  if ( (unsigned int)v663 >= LODWORD(v661->max_length) )
                                                  {
                                                    System_Collections_Generic_List_object___AddWithResize(
                                                      v653,
                                                      (Il2CppObject *)v654,
                                                      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v662[4] + 192LL) + 112LL));
                                                  }
                                                  else
                                                  {
                                                    v664 = &v661->obj.klass + v663;
                                                    v653->fields._size = v663 + 1;
                                                    v664[4] = (Il2CppClass *)v654;
                                                    sub_21FFBF4(
                                                      (MissionNaviTransitionBoardItem_o *)(v664 + 4),
                                                      (int32_t)v654,
                                                      v655,
                                                      v656,
                                                      v657,
                                                      v658,
                                                      v659,
                                                      v660);
                                                  }
                                                  LODWORD(v650) = uiDataSaves->max_length;
                                                  if ( (__int64)++v651 >= (int)v650 )
                                                    goto LABEL_361;
                                                }
                                                goto LABEL_367;
                                              }
LABEL_361:
                                              if ( *roadEntitiesb )
                                              {
                                                bgAnimationInfo = (MissionNaviTransitionBoardItem_c *)(*roadEntitiesb)->fields.bgAnimationInfo;
                                                p_bgAnimationInfo_k__BackingField->klass = bgAnimationInfo;
                                                sub_21FFBF4(
                                                  p_bgAnimationInfo_k__BackingField,
                                                  (int32_t)bgAnimationInfo,
                                                  v643,
                                                  v644,
                                                  v645,
                                                  v646,
                                                  v647,
                                                  v648);
                                                v666 = *roadEntitiesb;
                                                if ( *roadEntitiesb )
                                                {
                                                  v703->fields._ContinueConsumeType_k__BackingField = v666->fields.continueConsumeType;
                                                  *(_WORD *)&v703->fields._IsContinue_k__BackingField = *(_WORD *)&v666->fields.isContinue;
                                                  v703->fields.localSaveTiming = v666->fields.localSaveTiming;
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
LABEL_366:
    sub_21FFECC(Instance, throughCondId);
  }
  v667 = (WarBoardData_WarBoardLocalSaveData_o *)sub_21FFEBC(WarBoardData_WarBoardLocalSaveData_TypeInfo);
  WarBoardData_WarBoardLocalSaveData___ctor_44997680(v667, this, 0);
  this->fields.localSaveData = v667;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.localSaveData,
    (int32_t)v667,
    v668,
    v669,
    v670,
    v671,
    v672,
    v673);
}


void WarBoardData__AddPlayedEventData(WarBoardData_o *this, WarBoardEventData_o *eventData, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  WarBoardData_o *v9; // x20
  System_Collections_Generic_List_object__o *listEvent; // x8
  struct System_Object_array *items; // x9
  _QWORD *v12; // x10
  __int64 size; // x11
  Il2CppClass **v14; // x0

  v9 = this;
  if ( (byte_593600F & 1) == 0 )
  {
    this = (WarBoardData_o *)sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardEventData__Add__);
    byte_593600F = 1;
  }
  listEvent = (System_Collections_Generic_List_object__o *)v9->fields.listEvent;
  if ( !listEvent
    || (items = listEvent->fields._items,
        v12 = Method_System_Collections_Generic_List_WarBoardEventData__Add__,
        ++listEvent->fields._version,
        !items) )
  {
    sub_21FFECC(this, eventData);
  }
  size = listEvent->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      listEvent,
      (Il2CppObject *)eventData,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    listEvent->fields._size = size + 1;
    v14[4] = (Il2CppClass *)eventData;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)(v14 + 4),
      (int32_t)eventData,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
}


WarBoardPieceData_array *WarBoardData__AddReinforcementPieces(
        WarBoardData_o *this,
        WarBoardDataEntity_o *serverData,
        WarBoardUserServantData_array *reinfoSvtInfo,
        System_Int32_array *indexList,
        WarBoardStageReinforcementsEntity_o *reinfoStage,
        const MethodInfo *method)
{
  WarBoardUserServantData_array *v8; // x19
  WarBoardDataEntity_o *v9; // x25
  int v11; // w8
  Il2CppObject *Master_object; // x28
  __int64 Instance; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_object__o *v15; // x24
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v17; // x26
  WarBoardUserServantData_o *v18; // x27
  struct System_Int32_array *reinforcementsIds; // x8
  unsigned __int64 max_length_low; // x9
  __int64 v21; // x9
  Il2CppObject *v22; // x21
  WarBoardDataEntity_o *v23; // x22
  WarBoardReinforcementsEntity_o *v24; // x25
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *npcEntityDict; // x20
  int32_t v26; // w28
  int32_t v27; // w19
  WarBoardPieceData_o *v28; // x23
  WarBoardStagePieceDetailEntity_o *v29; // x8
  NpcFollowerEntity_o *Entity_49386132; // x0
  NpcFollowerEntity_o *v31; // x20
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  System_Object_array *v42; // x0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  struct WarBoardUserServantData_array *svtInfo; // x1
  struct WarBoardPieceData_array *pieces; // x8
  il2cpp_array_size_t v57; // x20
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x21
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  unsigned __int64 v65; // x23
  __int64 v66; // x26
  __int64 v67; // x27
  struct WarBoardData_WarBoardLocalSaveData_o *v68; // x8
  struct WarBoardPieceData_array *v69; // x9
  unsigned int *pieceSaves; // x28
  WarBoardPieceData_o *v71; // x21
  WarBoardPieceData_SaveData_o *v72; // x20
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  __int64 v79; // x1
  __int64 v81; // x0
  System_Collections_Generic_List_object__o *v82; // [xsp+10h] [xbp-D0h]
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+18h] [xbp-C8h]
  System_Int32_array *v84; // [xsp+20h] [xbp-C0h]
  WarBoardUserServantData_array *v85; // [xsp+28h] [xbp-B8h]
  NpcFollowerMaster_o *v86; // [xsp+30h] [xbp-B0h]
  Il2CppObject *v87; // [xsp+38h] [xbp-A8h]
  WarBoardUserServantData_o **v88; // [xsp+40h] [xbp-A0h]
  int32_t questPhase; // [xsp+48h] [xbp-98h]
  int32_t questId; // [xsp+4Ch] [xbp-94h]
  WarBoardStageReinforcementsEntity_o *stageReinforcementsEntity; // [xsp+50h] [xbp-90h]
  int32_t *m_Items; // [xsp+58h] [xbp-88h]
  bool isChangeName; // [xsp+64h] [xbp-7Ch] BYREF
  Il2CppObject *v94; // [xsp+68h] [xbp-78h] BYREF
  WarBoardStagePieceDetailEntity_o *v95; // [xsp+70h] [xbp-70h] BYREF
  WarBoardReinforcementsEntity_o *entity; // [xsp+78h] [xbp-68h] BYREF

  v8 = reinfoSvtInfo;
  v9 = serverData;
  if ( (byte_593600D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__RemoveAt__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    sub_21FFC50(&WarBoardPieceData_SaveData___TypeInfo);
    sub_21FFC50(&WarBoardPieceData_SaveData_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&WarBoardPieceData_TypeInfo);
    byte_593600D = 1;
  }
  v95 = 0;
  entity = 0;
  v11 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  v94 = 0;
  isChangeName = 0;
  if ( !v11 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, serverData, reinfoSvtInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  v87 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v86 = (NpcFollowerMaster_o *)Instance;
  if ( !v9 )
    goto LABEL_69;
  questPhase = v9->fields.questPhase;
  questId = v9->fields.questId;
  v82 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v82,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v15 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( !v8 )
    goto LABEL_69;
  max_length = v8->max_length;
  if ( (int)max_length >= 1 )
  {
    v17 = 0;
    stageReinforcementsEntity = reinfoStage;
    m_Items = indexList->m_Items;
    v88 = v8->m_Items;
    v84 = indexList;
    v85 = v8;
    do
    {
      if ( v17 >= (unsigned int)max_length )
LABEL_70:
        sub_21FFED4(Instance);
      v18 = v88[v17];
      if ( v18 )
      {
        if ( !reinfoStage || !indexList )
          goto LABEL_69;
        reinforcementsIds = reinfoStage->fields.reinforcementsIds;
        max_length_low = LODWORD(indexList->max_length);
      }
      else
      {
        if ( !reinfoStage )
          goto LABEL_69;
        reinforcementsIds = reinfoStage->fields.reinforcementsIds;
        if ( !reinforcementsIds || !indexList )
          goto LABEL_69;
        max_length_low = LODWORD(indexList->max_length);
        if ( v17 >= max_length_low )
          goto LABEL_70;
        if ( m_Items[v17] < SLODWORD(reinforcementsIds->max_length) )
          goto LABEL_52;
      }
      if ( v17 >= max_length_low )
        goto LABEL_70;
      if ( !reinforcementsIds )
        goto LABEL_69;
      v21 = m_Items[v17];
      if ( (unsigned int)v21 >= LODWORD(reinforcementsIds->max_length) )
        goto LABEL_70;
      if ( !Master_object )
        goto LABEL_69;
      v22 = Master_object;
      WarBoardReinforcementsMaster__TryGetEntity(
        (WarBoardReinforcementsMaster_o *)Master_object,
        &entity,
        reinforcementsIds->m_Items[v21],
        0);
      Instance = (__int64)this->fields.reinforcementsAppointmentSquareList;
      if ( !Instance )
        goto LABEL_69;
      v23 = v9;
      v24 = entity;
      npcEntityDict = this->fields.npcEntityDict;
      Instance = System_Collections_Generic_List_int___get_Item(
                   (System_Collections_Generic_List_int__o *)Instance,
                   0,
                   (const MethodInfo_4432E40 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( v17 >= LODWORD(indexList->max_length) )
        goto LABEL_70;
      v26 = Instance;
      v27 = m_Items[v17];
      v28 = (WarBoardPieceData_o *)sub_21FFEBC(WarBoardPieceData_TypeInfo);
      WarBoardPieceData___ctor_45018756(v28, stageReinforcementsEntity, v24, v18, npcEntityDict, v17, v26, v27, 0);
      Instance = (__int64)this->fields.reinforcementsAppointmentSquareList;
      if ( !Instance )
        goto LABEL_69;
      System_Collections_Generic_List_int___RemoveAt(
        (System_Collections_Generic_List_int__o *)Instance,
        0,
        (const MethodInfo_443487C *)Method_System_Collections_Generic_List_int__RemoveAt__);
      if ( !v28 )
        goto LABEL_69;
      Instance = (__int64)v87;
      if ( !v87 )
        goto LABEL_69;
      v9 = v23;
      Master_object = v22;
      Instance = WarBoardStagePieceDetailMaster__TryGetEntity(
                   (WarBoardStagePieceDetailMaster_o *)v87,
                   &v95,
                   v23->fields.stageId,
                   v28->fields._forceId_k__BackingField,
                   v28->fields._groupId_k__BackingField,
                   v28->fields._index_k__BackingField,
                   0);
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)v95;
        if ( !v95 )
          goto LABEL_69;
        Instance = WarBoardStagePieceDetailEntity__GetImageSvtId(v95, 0);
        v29 = v95;
        v28->fields._npcImageSvtId_k__BackingField = Instance;
        if ( !v29 )
          goto LABEL_69;
        Instance = WarBoardStagePieceDetailEntity__GetDispLimitCnt(v29, 0);
        v28->fields._npcDispLimitCount_k__BackingField = Instance;
      }
      if ( !v86 )
        goto LABEL_69;
      Entity_49386132 = NpcFollowerMaster__GetEntity_49386132(
                          v86,
                          questId,
                          questPhase,
                          v28->fields._npcId_k__BackingField,
                          0);
      if ( Entity_49386132 )
      {
        v31 = Entity_49386132;
        if ( !v28->fields._npcImageSvtId_k__BackingField )
          v28->fields._npcImageSvtId_k__BackingField = NpcFollowerEntity__GetImageSvtId(Entity_49386132, 0);
        if ( v28->fields._npcDispLimitCount_k__BackingField < 0 )
          v28->fields._npcDispLimitCount_k__BackingField = NpcFollowerEntity__GetDispLimitCnt(v31, -1, 0);
      }
      Instance = WarBoardPieceData__get_isPlayerGroup(v28, 0);
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)MasterData_object;
        if ( !MasterData_object )
          goto LABEL_69;
        Instance = DataMasterBase_object__object__long___TryGetEntity(
                     MasterData_object,
                     &v94,
                     v28->fields._npcId_k__BackingField,
                     (const MethodInfo_3EDFA34 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
        if ( (Instance & 1) != 0 )
        {
          Instance = (__int64)v94;
          if ( !v94 )
            goto LABEL_69;
          Instance = (__int64)NpcServantFollowerEntity__GetFollowerName_49390336(
                                (NpcServantFollowerEntity_o *)v94,
                                v28->fields._npcId_k__BackingField,
                                questId,
                                questPhase,
                                &isChangeName,
                                0);
          if ( isChangeName )
          {
            Instance = (__int64)v28->fields._battleServant_k__BackingField;
            if ( !Instance )
              goto LABEL_69;
            BattleServantData__ClearOverwriteServantName((BattleServantData_o *)Instance, 0);
          }
        }
      }
      if ( !v15 )
        goto LABEL_69;
      items = v15->fields._items;
      v39 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
      ++v15->fields._version;
      if ( !items )
        goto LABEL_69;
      size = v15->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          (Il2CppObject *)v28,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v41 = &items->obj.klass + size;
        v15->fields._size = size + 1;
        v41[4] = (Il2CppClass *)v28;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v41 + 4), (int32_t)v28, v32, v33, v34, v35, v36, v37);
      }
      indexList = v84;
      v8 = v85;
      reinfoStage = stageReinforcementsEntity;
LABEL_52:
      LODWORD(max_length) = v8->max_length;
    }
    while ( (__int64)++v17 < (int)max_length );
  }
  if ( !v82 )
    goto LABEL_69;
  System_Collections_Generic_List_object___AddRange(
    v82,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.pieces,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v82,
    (System_Collections_Generic_IEnumerable_T__o *)v15,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
  v42 = System_Collections_Generic_List_object___ToArray(
          v82,
          (const MethodInfo_445164C *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  this->fields.pieces = (struct WarBoardPieceData_array *)v42;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.pieces, (int32_t)v42, v43, v44, v45, v46, v47, v48);
  Instance = (__int64)this->fields.serverData;
  if ( !Instance
    || (svtInfo = v9->fields.svtInfo,
        *(_QWORD *)(Instance + 16) = svtInfo,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(Instance + 16), (int32_t)svtInfo, v49, v50, v51, v52, v53, v54),
        (pieces = this->fields.pieces) == 0)
    || (v57 = pieces->max_length,
        localSaveData = this->fields.localSaveData,
        Instance = sub_21FFD10(WarBoardPieceData_SaveData___TypeInfo, (unsigned int)v57),
        !localSaveData) )
  {
LABEL_69:
    sub_21FFECC(Instance, v14);
  }
  localSaveData->fields.pieceSaves = (struct WarBoardPieceData_SaveData_array *)Instance;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&localSaveData->fields.pieceSaves,
    Instance,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  if ( (int)v57 >= 1 )
  {
    v65 = 0;
    v66 = (unsigned int)v57;
    v67 = 8;
    do
    {
      v68 = this->fields.localSaveData;
      if ( !v68 )
        goto LABEL_69;
      v69 = this->fields.pieces;
      if ( !v69 )
        goto LABEL_69;
      if ( v65 >= LODWORD(v69->max_length) )
        goto LABEL_70;
      pieceSaves = (unsigned int *)v68->fields.pieceSaves;
      v71 = *(WarBoardPieceData_o **)((char *)&v69->obj.klass + v67 * 4);
      v72 = (WarBoardPieceData_SaveData_o *)sub_21FFEBC(WarBoardPieceData_SaveData_TypeInfo);
      WarBoardPieceData_SaveData___ctor_45000728(v72, v71, 0);
      if ( !pieceSaves )
        goto LABEL_69;
      if ( v72 )
      {
        Instance = sub_21FFDA4(v72, *(_QWORD *)(*(_QWORD *)pieceSaves + 64LL));
        if ( !Instance )
        {
          v81 = sub_21FFEF0(0, v79);
          sub_21FFD90(v81, 0);
        }
      }
      if ( v65 >= pieceSaves[6] )
        goto LABEL_70;
      *(_QWORD *)&pieceSaves[v67] = v72;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&pieceSaves[v67], (int32_t)v72, v73, v74, v75, v76, v77, v78);
      ++v65;
      v67 += 2;
    }
    while ( v66 != v65 );
  }
  if ( !v15 )
    goto LABEL_69;
  return (WarBoardPieceData_array *)System_Collections_Generic_List_object___ToArray(
                                      v15,
                                      (const MethodInfo_445164C *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
}


void WarBoardData__AddSquareInfo(WarBoardData_o *this, int32_t squareIndex, int32_t effectId, const MethodInfo *method)
{
  WarBoardData___c__DisplayClass173_0_o *v7; // x22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  System_Object_array *squareIndexInfo; // x20
  System_Func_object__bool__o *v12; // x21
  Il2CppObject *object; // x0
  MissionNaviTransitionBoardItem_o *p_monitor; // x20
  System_Collections_Generic_IEnumerable_T__o *monitor; // x22
  System_Collections_Generic_List_int__o *v16; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  System_Int32_array *v20; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  if ( (byte_5936014 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Find_WarBoardSquareIndexData___);
    sub_21FFC50(&System_Func_WarBoardSquareIndexData__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor___91427360);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass173_0__AddSquareInfo_b__0__);
    sub_21FFC50(&WarBoardData___c__DisplayClass173_0_TypeInfo);
    byte_5936014 = 1;
  }
  v7 = (WarBoardData___c__DisplayClass173_0_o *)sub_21FFEBC(WarBoardData___c__DisplayClass173_0_TypeInfo);
  WarBoardData___c__DisplayClass173_0___ctor(v7, 0);
  if ( !v7 )
    goto LABEL_14;
  serverData = this->fields.serverData;
  v7->fields.squareIndex = squareIndex;
  if ( !serverData )
    goto LABEL_14;
  squareIndexInfo = (System_Object_array *)serverData->fields.squareIndexInfo;
  v12 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardSquareIndexData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v7,
    Method_WarBoardData___c__DisplayClass173_0__AddSquareInfo_b__0__,
    0);
  object = BasicHelper__Find_object_(
             squareIndexInfo,
             (System_Func_T__bool__o *)v12,
             (const MethodInfo_37DD66C *)Method_BasicHelper_Find_WarBoardSquareIndexData___);
  if ( !object )
    return;
  p_monitor = (MissionNaviTransitionBoardItem_o *)&object[1].monitor;
  monitor = (System_Collections_Generic_IEnumerable_T__o *)object[1].monitor;
  v16 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_71510500(
    v16,
    monitor,
    (const MethodInfo_44329E4 *)Method_System_Collections_Generic_List_int___ctor___91427360);
  if ( !v16 )
    goto LABEL_14;
  v8 = System_Collections_Generic_List_int___Contains(
         v16,
         effectId,
         (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__);
  if ( v8 )
    return;
  items = v16->fields._items;
  v18 = Method_System_Collections_Generic_List_int__Add__;
  ++v16->fields._version;
  if ( !items )
LABEL_14:
    sub_21FFECC(v8, v9);
  size = v16->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v16,
      effectId,
      *(const MethodInfo_4433138 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v16->fields._size = size + 1;
    items->m_Items[size] = effectId;
  }
  v20 = System_Collections_Generic_List_int___ToArray(
          v16,
          (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
  p_monitor->klass = (MissionNaviTransitionBoardItem_c *)v20;
  sub_21FFBF4(p_monitor, (int32_t)v20, v21, v22, v23, v24, v25, v26);
}


void WarBoardData__BuffTurnProgressing(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardData___c_c *v4; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__191_0; // x20
  Il2CppObject *v8; // x21
  struct WarBoardData___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_IEnumerable_TResult__o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  WarBoardData___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  struct WarBoardData___c_StaticFields *v21; // x9
  System_Func_object__bool__o *_9__191_1; // x20
  Il2CppObject *v23; // x21
  struct WarBoardData___c_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  WarBoardData___c_c *v34; // x8
  System_Collections_Generic_IEnumerable_T__o *v35; // x19
  struct WarBoardData___c_StaticFields *v36; // x9
  System_Action_object__o *_9__191_2; // x20
  Il2CppObject *v38; // x21
  MissionNaviTransitionBoardItem_o *p__9__191_2; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7

  if ( (byte_5936023 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_BattleBuffData__TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_BattleBuffData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__BattleBuffData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_BattleBuffData___);
    sub_21FFC50(&System_Func_BattleBuffData__bool__TypeInfo);
    sub_21FFC50(&System_Func_WarBoardPieceData__BattleBuffData__TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__BuffTurnProgressing_b__191_0__);
    sub_21FFC50(&Method_WarBoardData___c__BuffTurnProgressing_b__191_1__);
    sub_21FFC50(&Method_WarBoardData___c__BuffTurnProgressing_b__191_2__);
    sub_21FFC50(&WarBoardData___c_TypeInfo);
    byte_5936023 = 1;
  }
  v4 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !*(&WarBoardData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, method, v2);
    v4 = WarBoardData___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__191_0 = (System_Func_object__object__o *)static_fields->__9__191_0;
  if ( !_9__191_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__191_0 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_WarBoardPieceData__BattleBuffData__TypeInfo);
    System_Func_object__object____ctor(_9__191_0, v8, Method_WarBoardData___c__BuffTurnProgressing_b__191_0__, 0);
    v9 = WarBoardData___c_TypeInfo->static_fields;
    v9->__9__191_0 = (struct System_Func_WarBoardPieceData__BattleBuffData__o *)_9__191_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->__9__191_0, (int32_t)_9__191_0, v10, v11, v12, v13, v14, v15);
  }
  v16 = System_Linq_Enumerable__Select_object__object_(
          pieces,
          (System_Func_TSource__TResult__o *)_9__191_0,
          (const MethodInfo_385DD00 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__BattleBuffData___);
  v19 = WarBoardData___c_TypeInfo;
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)v16;
  if ( !*(&WarBoardData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, v17, v18);
    v19 = WarBoardData___c_TypeInfo;
  }
  v21 = v19->static_fields;
  _9__191_1 = (System_Func_object__bool__o *)v21->__9__191_1;
  if ( !_9__191_1 )
  {
    if ( !*(&v19->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v19, v17, v18);
      v21 = WarBoardData___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)v21->__9;
    _9__191_1 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_BattleBuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__191_1, v23, Method_WarBoardData___c__BuffTurnProgressing_b__191_1__, 0);
    v24 = WarBoardData___c_TypeInfo->static_fields;
    v24->__9__191_1 = (struct System_Func_BattleBuffData__bool__o *)_9__191_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v24->__9__191_1, (int32_t)_9__191_1, v25, v26, v27, v28, v29, v30);
  }
  v31 = System_Linq_Enumerable__Where_object_(
          v20,
          (System_Func_TSource__bool__o *)_9__191_1,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_BattleBuffData___);
  v34 = WarBoardData___c_TypeInfo;
  v35 = (System_Collections_Generic_IEnumerable_T__o *)v31;
  if ( !*(&WarBoardData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, v32, v33);
    v34 = WarBoardData___c_TypeInfo;
  }
  v36 = v34->static_fields;
  _9__191_2 = (System_Action_object__o *)v36->__9__191_2;
  if ( !_9__191_2 )
  {
    if ( !*(&v34->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v34, v32, v33);
      v36 = WarBoardData___c_TypeInfo->static_fields;
    }
    v38 = (Il2CppObject *)v36->__9;
    _9__191_2 = (System_Action_object__o *)sub_21FFEBC(System_Action_BattleBuffData__TypeInfo);
    System_Action_object____ctor(_9__191_2, v38, Method_WarBoardData___c__BuffTurnProgressing_b__191_2__, 0);
    p__9__191_2 = (MissionNaviTransitionBoardItem_o *)&WarBoardData___c_TypeInfo->static_fields->__9__191_2;
    p__9__191_2->klass = (MissionNaviTransitionBoardItem_c *)_9__191_2;
    sub_21FFBF4(p__9__191_2, (int32_t)_9__191_2, v40, v41, v42, v43, v44, v45);
  }
  BasicHelper__ForEach_object_(
    v35,
    (System_Action_T__o *)_9__191_2,
    (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_BattleBuffData___);
}


void WarBoardData__CheckItem(
        WarBoardData_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  __int64 AliveServantPieces; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  int v8; // w8
  __int64 v9; // x21
  unsigned int v10; // w29
  WarBoardPieceData_o *v11; // x22
  __int64 v12; // x23
  WarBoardManager_o *v13; // x24
  const MethodInfo_45B5018 *v14; // x2
  System_Nullable_float__o v15; // x3
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x24
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  Il2CppObject *Instance; // x25
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  __int64 v34; // x26
  __int64 v35; // x1
  __int64 v36; // x0
  System_Nullable_Vector3__o v37; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_Vector3__o v38; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5935FDA & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_21FFC50(&Method_System_Nullable_Vector3___ctor__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&WarBoardTaskBase___TypeInfo);
    byte_5935FDA = 1;
  }
  AliveServantPieces = (__int64)WarBoardData__GetAliveServantPieces(this, (const MethodInfo *)taskList);
  if ( !AliveServantPieces )
LABEL_27:
    sub_21FFECC(AliveServantPieces, v6);
  v8 = *(_DWORD *)(AliveServantPieces + 24);
  v9 = AliveServantPieces;
  if ( v8 >= 1 )
  {
    v10 = 0;
    while ( v10 < v8 )
    {
      v11 = *(WarBoardPieceData_o **)(v9 + 8LL * (int)v10 + 32);
      if ( !v11 )
        goto LABEL_27;
      AliveServantPieces = (__int64)WarBoardData__GetItem(this, v11->fields._nowSquareIndex_k__BackingField, v7);
      if ( AliveServantPieces )
      {
        v12 = AliveServantPieces;
        AliveServantPieces = WarBoardItemData__get_Acquired((WarBoardItemData_o *)AliveServantPieces, 0);
        if ( (AliveServantPieces & 1) == 0 )
        {
          AliveServantPieces = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !*(_QWORD *)(v12 + 56) )
            goto LABEL_27;
          v13 = (WarBoardManager_o *)AliveServantPieces;
          AliveServantPieces = (__int64)UnityEngine_Component__get_transform(*(UnityEngine_Component_o **)(v12 + 56), 0);
          if ( !AliveServantPieces )
            goto LABEL_27;
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)AliveServantPieces, 0);
          *(_QWORD *)&v38.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
          *(_QWORD *)&v38.fields.hasValue = &v37;
          *(_QWORD *)&v37.fields.hasValue = 0;
          *(_QWORD *)&v37.fields.value.fields.y = 0;
          System_Nullable_Vector3____ctor(v38, localPosition, v14);
          if ( !v13 )
            goto LABEL_27;
          v15 = 0;
          AliveServantPieces = (__int64)WarBoardManager__GetCameraPerformanceTask(v13, v37, v15, 1, 0, 1, 0);
          v22 = AliveServantPieces;
          if ( taskList )
          {
            items = taskList->fields._items;
            v24 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
            ++taskList->fields._version;
            if ( !items )
              goto LABEL_27;
            size = taskList->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)taskList,
                (Il2CppObject *)AliveServantPieces,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
            }
            else
            {
              v26 = &items->obj.klass + size;
              taskList->fields._size = size + 1;
              v26[4] = (Il2CppClass *)v22;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v26 + 4), v22, v16, v17, v18, v19, v20, v21);
            }
          }
          else
          {
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
            AliveServantPieces = sub_21FFD10(WarBoardTaskBase___TypeInfo, 1);
            if ( !AliveServantPieces )
              goto LABEL_27;
            v34 = AliveServantPieces;
            if ( v22 )
            {
              AliveServantPieces = sub_21FFDA4(v22, *(_QWORD *)(*(_QWORD *)AliveServantPieces + 64LL));
              if ( !AliveServantPieces )
              {
                v36 = sub_21FFEF0(0, v35);
                sub_21FFD90(v36, 0);
              }
            }
            if ( !*(_DWORD *)(v34 + 24) )
              break;
            *(_QWORD *)(v34 + 32) = v22;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v34 + 32), v22, v28, v29, v30, v31, v32, v33);
            if ( !Instance )
              goto LABEL_27;
            WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v34, 0);
          }
          AliveServantPieces = WarBoardItemData__Get((WarBoardItemData_o *)v12, v11, taskList, 0, 0);
        }
      }
      v8 = *(_DWORD *)(v9 + 24);
      if ( (int)++v10 >= v8 )
        return;
    }
    sub_21FFED4(AliveServantPieces);
  }
}


bool WarBoardData__CheckWinCond(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  int32_t winCondId; // w8
  WarBoardPieceData_array *Pieces_44819988; // x0
  bool result; // w0
  int32_t maxForceId_k__BackingField; // w9
  int32_t maxGroupId_k__BackingField; // w8
  int v10; // w24
  int v11; // w23
  int32_t v12; // w20
  int32_t v13; // w21
  int max_length; // w8
  WarBoardPieceData_array *v15; // x22
  unsigned int v16; // w25
  bool v17; // w24
  bool v18; // w22
  struct System_Collections_Generic_List_int__o *masterExistsForce; // x19
  WarBoardData___c_c *v20; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__98_0; // x20
  Il2CppObject *v23; // x21
  struct WarBoardData___c_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  bool v31; // w8
  int32_t condGroup; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_5935FDF & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Count_int____91524792);
    sub_21FFC50(&System_Func_int__bool__TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__CheckWinCond_b__98_0__);
    sub_21FFC50(&WarBoardData___c_TypeInfo);
    byte_5935FDF = 1;
  }
  winCondId = this->fields.winCondId;
  condGroup = 0;
  if ( winCondId < 0 )
  {
    maxForceId_k__BackingField = this->fields._maxForceId_k__BackingField;
    if ( maxForceId_k__BackingField >= 1 )
    {
      maxGroupId_k__BackingField = this->fields._maxGroupId_k__BackingField;
      v10 = 0;
      v11 = 0;
      v12 = 1;
      while ( 1 )
      {
        if ( maxGroupId_k__BackingField < 0 )
          goto LABEL_26;
        v13 = 0;
        do
        {
          Pieces_44819988 = WarBoardData__GetPieces_44819988(this, v12, v13, v3);
          if ( !Pieces_44819988 )
            goto LABEL_41;
          max_length = Pieces_44819988->max_length;
          v15 = Pieces_44819988;
          if ( max_length >= 1 )
          {
            v16 = 0;
            while ( 1 )
            {
              if ( v16 >= max_length )
                sub_21FFED4(Pieces_44819988);
              Pieces_44819988 = (WarBoardPieceData_array *)v15->m_Items[v16];
              if ( !Pieces_44819988 )
                break;
              if ( !BYTE4(Pieces_44819988->m_Items[3]) && !LOBYTE(Pieces_44819988->m_Items[11]) )
              {
                Pieces_44819988 = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster(
                                                               (WarBoardPieceData_o *)Pieces_44819988,
                                                               0);
                if ( ((unsigned __int8)Pieces_44819988 & 1) != 0 )
                  ++v10;
                else
                  ++v11;
              }
              max_length = v15->max_length;
              if ( (int)++v16 >= max_length )
                goto LABEL_24;
            }
LABEL_41:
            sub_21FFECC(Pieces_44819988, method);
          }
LABEL_24:
          maxGroupId_k__BackingField = this->fields._maxGroupId_k__BackingField;
          ++v13;
        }
        while ( v13 <= maxGroupId_k__BackingField );
        maxForceId_k__BackingField = this->fields._maxForceId_k__BackingField;
LABEL_26:
        if ( ++v12 > maxForceId_k__BackingField )
        {
          v17 = v10 == 0;
          v18 = v11 == 0;
          goto LABEL_30;
        }
      }
    }
    v18 = 1;
    v17 = 1;
LABEL_30:
    masterExistsForce = this->fields.masterExistsForce;
    v20 = WarBoardData___c_TypeInfo;
    if ( !*(&WarBoardData___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, method, v2);
      v20 = WarBoardData___c_TypeInfo;
    }
    static_fields = v20->static_fields;
    _9__98_0 = static_fields->__9__98_0;
    if ( !_9__98_0 )
    {
      if ( !*(&v20->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v20, method, v2);
        static_fields = WarBoardData___c_TypeInfo->static_fields;
      }
      v23 = (Il2CppObject *)static_fields->__9;
      _9__98_0 = (System_Func_int__bool__o *)sub_21FFEBC(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(_9__98_0, v23, Method_WarBoardData___c__CheckWinCond_b__98_0__, 0);
      v24 = WarBoardData___c_TypeInfo->static_fields;
      v24->__9__98_0 = _9__98_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v24->__9__98_0, (int32_t)_9__98_0, v25, v26, v27, v28, v29, v30);
    }
    v31 = System_Linq_Enumerable__Count_int__59011368(
            (System_Collections_Generic_IEnumerable_TSource__o *)masterExistsForce,
            (System_Func_TSource__bool__o *)_9__98_0,
            (const MethodInfo_3847128 *)Method_System_Linq_Enumerable_Count_int____91524792) > 0
       && v17;
    return v31 || v18;
  }
  else
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
    Pieces_44819988 = (WarBoardPieceData_array *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    condGroup = -1;
    if ( !Pieces_44819988 )
      goto LABEL_41;
    if ( WarBoardCommonReleaseMaster__IsOpen_50256512(
           (WarBoardCommonReleaseMaster_o *)Pieces_44819988,
           this->fields.winCondId,
           &condGroup,
           0) )
    {
      result = 1;
      this->fields.winCondGroup = condGroup;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


void WarBoardData__ClearLastBattlePieceUniqueIndexes(WarBoardData_o *this, const MethodInfo *method)
{
  struct System_UInt32_array *v3; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5936017 & 1) == 0 )
  {
    sub_21FFC50(&uint___TypeInfo);
    byte_5936017 = 1;
  }
  v3 = (struct System_UInt32_array *)sub_21FFD10(uint___TypeInfo, 0);
  this->fields.latestBattlePieceUniqueIndexes = v3;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.latestBattlePieceUniqueIndexes,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


int32_t WarBoardData__ComparePiece(
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

  if ( !a || (this = (WarBoardData_o *)WarBoardPieceData__get_isMaster(a, 0), !b) )
    sub_21FFECC(this, a);
  if ( (((unsigned int)this ^ WarBoardPieceData__get_isMaster(b, 0)) & 1) == 0 )
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
  isServant = WarBoardPieceData__get_isServant(a, 0);
  if ( ((isServant ^ WarBoardPieceData__get_isServant(b, 0)) & 1) != 0 )
  {
    if ( WarBoardPieceData__get_isMaster(a, 0) )
      return 1;
    else
      return WarBoardPieceData__get_isMaster(b, 0) << 31 >> 31;
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


WarBoardData_BattleParticipantInfo_o *WarBoardData__CreateBattleParticipantInfo(
        WarBoardData_o *this,
        WarBoardPieceData_o *attackPieceData,
        WarBoardPieceData_o *targetPieceData,
        const MethodInfo *method)
{
  WarBoardData_BattleParticipantInfo_o *v6; // x21

  if ( (byte_593602B & 1) == 0 )
  {
    sub_21FFC50(&WarBoardData_BattleParticipantInfo_TypeInfo);
    byte_593602B = 1;
  }
  v6 = (WarBoardData_BattleParticipantInfo_o *)sub_21FFEBC(WarBoardData_BattleParticipantInfo_TypeInfo);
  WarBoardData_BattleParticipantInfo___ctor(v6, attackPieceData, targetPieceData, 0);
  return v6;
}


void WarBoardData__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  WarBoardData_c *v3; // x0
  System_String_o *AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY; // x19

  if ( (byte_5935FD7 & 1) == 0 )
  {
    sub_21FFC50(&EncryptedPlayerPrefs_TypeInfo);
    sub_21FFC50(&WarBoardData_TypeInfo);
    byte_5935FD7 = 1;
  }
  v3 = WarBoardData_TypeInfo;
  if ( !*(&WarBoardData_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo, v1, v2);
    v3 = WarBoardData_TypeInfo;
  }
  AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY = v3->static_fields->AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY;
  if ( !*(&EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, v1, v2);
  EncryptedPlayerPrefs__SetInt(AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY, 1, 0);
}


WarBoardWaitTime_o *WarBoardData__CreateEventBossUIDataTask(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x19
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  System_Delegate_o **v6; // x20
  System_Delegate_o *v7; // x21
  WarBoardData___c_c *v8; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  WarBoardTaskBase_TaskCallback_o *_9__152_0; // x22
  Il2CppObject *v11; // x23
  struct WarBoardData___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Delegate_o *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  int32_t v26; // w8
  WarBoardTaskBase_TaskCallback_c *v27; // x1

  if ( (byte_5936007 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__CreateEventBossUIDataTask_b__152_0__);
    sub_21FFC50(&WarBoardData___c_TypeInfo);
    sub_21FFC50(&WarBoardWaitTime_TypeInfo);
    byte_5936007 = 1;
  }
  v2 = sub_21FFEBC(WarBoardWaitTime_TypeInfo);
  WarBoardWaitTime___ctor((WarBoardWaitTime_o *)v2, 0.0, 0);
  if ( !v2 )
    sub_21FFECC(v3, v4);
  v6 = (System_Delegate_o **)(v2 + 40);
  v7 = *(System_Delegate_o **)(v2 + 40);
  v8 = WarBoardData___c_TypeInfo;
  if ( !*(&WarBoardData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, v4, v5);
    v8 = WarBoardData___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__152_0 = static_fields->__9__152_0;
  if ( !_9__152_0 )
  {
    if ( !*(&v8->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v8, v4, v5);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__152_0 = (WarBoardTaskBase_TaskCallback_o *)sub_21FFEBC(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__152_0,
      v11,
      Method_WarBoardData___c__CreateEventBossUIDataTask_b__152_0__,
      0);
    v12 = WarBoardData___c_TypeInfo->static_fields;
    v12->__9__152_0 = _9__152_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v12->__9__152_0, (int32_t)_9__152_0, v13, v14, v15, v16, v17, v18);
  }
  v19 = System_Delegate__Combine(v7, (System_Delegate_o *)_9__152_0, 0);
  v26 = (int)v19;
  if ( !v19 )
    goto LABEL_14;
  v27 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v19->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v6 = v19, (WarBoardTaskBase_TaskCallback_c *)v19->klass != v27) )
  {
    sub_220024C(v19, v27, v20, v21);
LABEL_14:
    *v6 = 0;
  }
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v2 + 40), v26, v20, v21, v22, v23, v24, v25);
  return (WarBoardWaitTime_o *)v2;
}


void WarBoardData__DelSquareInfo(WarBoardData_o *this, int32_t squareIndex, int32_t effectId, const MethodInfo *method)
{
  WarBoardData___c__DisplayClass174_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  System_Object_array *squareIndexInfo; // x20
  System_Func_object__bool__o *v12; // x21
  Il2CppObject *object; // x0
  MissionNaviTransitionBoardItem_o *p_monitor; // x20
  System_Collections_Generic_IEnumerable_T__o *monitor; // x22
  System_Collections_Generic_List_int__o *v16; // x21
  System_Int32_array *v17; // x1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_5936015 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Find_WarBoardSquareIndexData___);
    sub_21FFC50(&System_Func_WarBoardSquareIndexData__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Remove__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor___91427360);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass174_0__DelSquareInfo_b__0__);
    sub_21FFC50(&WarBoardData___c__DisplayClass174_0_TypeInfo);
    byte_5936015 = 1;
  }
  v7 = (WarBoardData___c__DisplayClass174_0_o *)sub_21FFEBC(WarBoardData___c__DisplayClass174_0_TypeInfo);
  WarBoardData___c__DisplayClass174_0___ctor(v7, 0);
  if ( !v7 )
    goto LABEL_10;
  serverData = this->fields.serverData;
  v7->fields.squareIndex = squareIndex;
  if ( !serverData )
    goto LABEL_10;
  squareIndexInfo = (System_Object_array *)serverData->fields.squareIndexInfo;
  v12 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardSquareIndexData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v7,
    Method_WarBoardData___c__DisplayClass174_0__DelSquareInfo_b__0__,
    0);
  object = BasicHelper__Find_object_(
             squareIndexInfo,
             (System_Func_T__bool__o *)v12,
             (const MethodInfo_37DD66C *)Method_BasicHelper_Find_WarBoardSquareIndexData___);
  if ( !object )
    return;
  p_monitor = (MissionNaviTransitionBoardItem_o *)&object[1].monitor;
  monitor = (System_Collections_Generic_IEnumerable_T__o *)object[1].monitor;
  v16 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_71510500(
    v16,
    monitor,
    (const MethodInfo_44329E4 *)Method_System_Collections_Generic_List_int___ctor___91427360);
  if ( !v16 )
LABEL_10:
    sub_21FFECC(v8, v9);
  if ( System_Collections_Generic_List_int___Contains(
         v16,
         effectId,
         (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    System_Collections_Generic_List_int___Remove(
      v16,
      effectId,
      (const MethodInfo_44345F8 *)Method_System_Collections_Generic_List_int__Remove__);
    v17 = System_Collections_Generic_List_int___ToArray(
            v16,
            (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
    p_monitor->klass = (MissionNaviTransitionBoardItem_c *)v17;
    sub_21FFBF4(p_monitor, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  }
}


void WarBoardData__DeleteAfterContinueDeviceLocalSave(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  WarBoardData_c *v3; // x0
  System_String_o *AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY; // x19

  if ( (byte_5935FD8 & 1) == 0 )
  {
    sub_21FFC50(&EncryptedPlayerPrefs_TypeInfo);
    sub_21FFC50(&WarBoardData_TypeInfo);
    byte_5935FD8 = 1;
  }
  v3 = WarBoardData_TypeInfo;
  if ( !*(&WarBoardData_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo, v1, v2);
    v3 = WarBoardData_TypeInfo;
  }
  AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY = v3->static_fields->AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY;
  if ( !*(&EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, v1, v2);
  EncryptedPlayerPrefs__DeleteKey(AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY, 0);
}


void WarBoardData__DeleteLocalSave(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  WarBoardData_c *v3; // x0
  System_String_o *WARBOARDDATA_SAVEDATA_KEY; // x19

  if ( (byte_5935FD6 & 1) == 0 )
  {
    sub_21FFC50(&EncryptedPlayerPrefs_TypeInfo);
    sub_21FFC50(&WarBoardData_TypeInfo);
    byte_5935FD6 = 1;
  }
  v3 = WarBoardData_TypeInfo;
  if ( !*(&WarBoardData_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo, v1, v2);
    v3 = WarBoardData_TypeInfo;
  }
  WARBOARDDATA_SAVEDATA_KEY = v3->static_fields->WARBOARDDATA_SAVEDATA_KEY;
  if ( !*(&EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, v1, v2);
  EncryptedPlayerPrefs__DeleteKey(WARBOARDDATA_SAVEDATA_KEY, 0);
}


// local variable allocation has failed, the output may be wrong!
WarBoardActionPointEntity_o *WarBoardData__GetActionPointEntity(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  unsigned __int8 v4; // w19
  System_Collections_Generic_Dictionary_TKey__TValue__o *actionPointEntityDict; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v4 = groupId;
  if ( (byte_5935FDC & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__TryGetValue__);
    byte_5935FDC = 1;
  }
  actionPointEntityDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.actionPointEntityDict;
  value = 0;
  if ( !actionPointEntityDict )
    sub_21FFECC(0, *(_QWORD *)&forceId);
  System_Collections_Generic_Dictionary_uint__object___TryGetValue(
    actionPointEntityDict,
    (forceId << 24) | (v4 << 16),
    &value,
    (const MethodInfo_4023E94 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__TryGetValue__);
  return (WarBoardActionPointEntity_o *)value;
}


System_Collections_Generic_List_WarBoardPieceData__o *WarBoardData__GetAliveEnemyServantPieces(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardData___c_c *v4; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__110_0; // x20
  Il2CppObject *v8; // x21
  struct WarBoardData___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0

  if ( (byte_5935FEB & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_21FFC50(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__GetAliveEnemyServantPieces_b__110_0__);
    sub_21FFC50(&WarBoardData___c_TypeInfo);
    byte_5935FEB = 1;
  }
  v4 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !*(&WarBoardData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, method, v2);
    v4 = WarBoardData___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__110_0 = (System_Func_object__bool__o *)static_fields->__9__110_0;
  if ( !_9__110_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__110_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__110_0, v8, Method_WarBoardData___c__GetAliveEnemyServantPieces_b__110_0__, 0);
    v9 = WarBoardData___c_TypeInfo->static_fields;
    v9->__9__110_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__110_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->__9__110_0, (int32_t)_9__110_0, v10, v11, v12, v13, v14, v15);
  }
  v16 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__110_0,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (System_Collections_Generic_List_WarBoardPieceData__o *)System_Linq_Enumerable__ToList_object_(
                                                                   v16,
                                                                   (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
}


WarBoardPieceData_array *WarBoardData__GetAlivePieces(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardData___c_c *v4; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__107_0; // x20
  Il2CppObject *v8; // x21
  struct WarBoardData___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0

  if ( (byte_5935FE8 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_21FFC50(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__GetAlivePieces_b__107_0__);
    sub_21FFC50(&WarBoardData___c_TypeInfo);
    byte_5935FE8 = 1;
  }
  v4 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !*(&WarBoardData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, method, v2);
    v4 = WarBoardData___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__107_0 = (System_Func_object__bool__o *)static_fields->__9__107_0;
  if ( !_9__107_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__107_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__107_0, v8, Method_WarBoardData___c__GetAlivePieces_b__107_0__, 0);
    v9 = WarBoardData___c_TypeInfo->static_fields;
    v9->__9__107_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__107_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->__9__107_0, (int32_t)_9__107_0, v10, v11, v12, v13, v14, v15);
  }
  v16 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__107_0,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v16,
                                      (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


System_Collections_Generic_List_WarBoardPieceData__o *WarBoardData__GetAlivePlayerGroupServantPieces(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardData___c_c *v4; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__109_0; // x20
  Il2CppObject *v8; // x21
  struct WarBoardData___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0

  if ( (byte_5935FEA & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_21FFC50(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__GetAlivePlayerGroupServantPieces_b__109_0__);
    sub_21FFC50(&WarBoardData___c_TypeInfo);
    byte_5935FEA = 1;
  }
  v4 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !*(&WarBoardData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, method, v2);
    v4 = WarBoardData___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__109_0 = (System_Func_object__bool__o *)static_fields->__9__109_0;
  if ( !_9__109_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__109_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__109_0,
      v8,
      Method_WarBoardData___c__GetAlivePlayerGroupServantPieces_b__109_0__,
      0);
    v9 = WarBoardData___c_TypeInfo->static_fields;
    v9->__9__109_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__109_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->__9__109_0, (int32_t)_9__109_0, v10, v11, v12, v13, v14, v15);
  }
  v16 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__109_0,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (System_Collections_Generic_List_WarBoardPieceData__o *)System_Linq_Enumerable__ToList_object_(
                                                                   v16,
                                                                   (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
}


WarBoardPieceData_array *WarBoardData__GetAliveServantPieces(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardData___c_c *v4; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__108_0; // x20
  Il2CppObject *v8; // x21
  struct WarBoardData___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0

  if ( (byte_5935FE9 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_21FFC50(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__GetAliveServantPieces_b__108_0__);
    sub_21FFC50(&WarBoardData___c_TypeInfo);
    byte_5935FE9 = 1;
  }
  v4 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !*(&WarBoardData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, method, v2);
    v4 = WarBoardData___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__108_0 = (System_Func_object__bool__o *)static_fields->__9__108_0;
  if ( !_9__108_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__108_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__108_0, v8, Method_WarBoardData___c__GetAliveServantPieces_b__108_0__, 0);
    v9 = WarBoardData___c_TypeInfo->static_fields;
    v9->__9__108_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__108_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->__9__108_0, (int32_t)_9__108_0, v10, v11, v12, v13, v14, v15);
  }
  v16 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__108_0,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v16,
                                      (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


WarBoardEffectData_array *WarBoardData__GetAllEffects(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.effects;
}


WarBoardItemData_array *WarBoardData__GetAllItems(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.items;
}


WarBoardPieceData_array *WarBoardData__GetAllPieces(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.pieces;
}


int32_t WarBoardData__GetAttackCost(WarBoardData_o *this, int32_t forceId, int32_t groupId, const MethodInfo *method)
{
  WarBoardActionPointEntity_o *ActionPointEntity; // x0

  ActionPointEntity = WarBoardData__GetActionPointEntity(this, forceId, groupId, method);
  if ( ActionPointEntity )
    LODWORD(ActionPointEntity) = ActionPointEntity->fields.attackCost;
  return (int)ActionPointEntity;
}


int32_t WarBoardData__GetBaseActionPoint(
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


int32_t WarBoardData__GetClearedTurn(WarBoardData_o *this, int32_t condId, const MethodInfo *method)
{
  WarBoardData___c__DisplayClass183_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *listPrevCond; // x20
  System_Predicate_object__o *v9; // x19
  Il2CppObject *v10; // x0

  if ( (byte_593601B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardPrevCondData__Find__);
    sub_21FFC50(&System_Predicate_WarBoardPrevCondData__TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass183_0__GetClearedTurn_b__0__);
    sub_21FFC50(&WarBoardData___c__DisplayClass183_0_TypeInfo);
    byte_593601B = 1;
  }
  v5 = (WarBoardData___c__DisplayClass183_0_o *)sub_21FFEBC(WarBoardData___c__DisplayClass183_0_TypeInfo);
  WarBoardData___c__DisplayClass183_0___ctor(v5, 0);
  if ( !v5
    || (listPrevCond = (System_Collections_Generic_List_object__o *)this->fields.listPrevCond,
        v5->fields.condId = condId,
        v9 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_WarBoardPrevCondData__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_WarBoardData___c__DisplayClass183_0__GetClearedTurn_b__0__,
          0),
        !listPrevCond) )
  {
    sub_21FFECC(v6, v7);
  }
  v10 = System_Collections_Generic_List_object___Find(
          listPrevCond,
          (System_Predicate_T__o *)v9,
          (const MethodInfo_4450188 *)Method_System_Collections_Generic_List_WarBoardPrevCondData__Find__);
  if ( v10 )
    return HIDWORD(v10[1].klass);
  else
    return -1;
}


WarBoardSquareData_o *WarBoardData__GetCondSquare(WarBoardData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  WarBoardData___c__DisplayClass130_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *condSquares; // x20
  System_Func_object__bool__o *v9; // x19

  if ( (byte_5935FF9 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
    sub_21FFC50(&System_Func_WarBoardSquareData__bool__TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass130_0__GetCondSquare_b__0__);
    sub_21FFC50(&WarBoardData___c__DisplayClass130_0_TypeInfo);
    byte_5935FF9 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass130_0_o *)sub_21FFEBC(WarBoardData___c__DisplayClass130_0_TypeInfo);
  WarBoardData___c__DisplayClass130_0___ctor(v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  condSquares = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.condSquares;
  v5->fields.squareIndex = squareIndex;
  v9 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardSquareData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass130_0__GetCondSquare_b__0__,
    0);
  return (WarBoardSquareData_o *)System_Linq_Enumerable__FirstOrDefault_object__59044732(
                                   condSquares,
                                   (System_Func_TSource__bool__o *)v9,
                                   (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
}


WarBoardSquareData_array *WarBoardData__GetCondSquares(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.condSquares;
}


System_Int32_array *WarBoardData__GetDeploySquareIds(
        WarBoardData_o *this,
        System_Int32_array_array *squareIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x21
  void *Piece_44763860; // x0
  __int64 value; // x1
  int max_length; // w8
  unsigned int v9; // w29
  System_Int32_array *v10; // x27
  unsigned __int64 v11; // x26
  WarBoardData___c__DisplayClass133_0_o *v12; // x22
  const MethodInfo *v13; // x2
  int32_t v14; // w1
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x3
  System_Collections_Generic_List_T__o *reinforcementsAppointmentSquareList; // x23
  System_Func_int__bool__o *v18; // x24
  System_Func_int__bool__o *v19; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10

  if ( (byte_5935FFB & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_int___);
    sub_21FFC50(&System_Func_int__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__0__);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__1__);
    sub_21FFC50(&WarBoardData___c__DisplayClass133_0_TypeInfo);
    byte_5935FFB = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !squareIds )
    goto LABEL_29;
  max_length = squareIds->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
LABEL_30:
        sub_21FFED4(Piece_44763860);
      v10 = squareIds->m_Items[v9];
      if ( !v10 )
        break;
      if ( SLODWORD(v10->max_length) < 1 )
      {
LABEL_18:
        value = 0xFFFFFFFFLL;
        if ( !v5 )
          break;
      }
      else
      {
        v11 = 0;
        while ( 1 )
        {
          v12 = (WarBoardData___c__DisplayClass133_0_o *)sub_21FFEBC(WarBoardData___c__DisplayClass133_0_TypeInfo);
          WarBoardData___c__DisplayClass133_0___ctor(v12, 0);
          if ( v11 >= LODWORD(v10->max_length) )
            goto LABEL_30;
          if ( !v12 )
            goto LABEL_29;
          v14 = v10->m_Items[v11];
          v12->fields.value = v14;
          Piece_44763860 = WarBoardData__GetPiece_44763860(this, v14, v13);
          if ( !Piece_44763860 )
          {
            Piece_44763860 = WarBoardData__GetUnusedTreasure(this, v12->fields.value, v15);
            if ( !Piece_44763860 )
            {
              Piece_44763860 = WarBoardData__GetWall(this, v12->fields.value, 0, v16);
              if ( !Piece_44763860 )
              {
                reinforcementsAppointmentSquareList = (System_Collections_Generic_List_T__o *)this->fields.reinforcementsAppointmentSquareList;
                v18 = (System_Func_int__bool__o *)sub_21FFEBC(System_Func_int__bool__TypeInfo);
                System_Func_int__bool____ctor(
                  v18,
                  (Il2CppObject *)v12,
                  Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__0__,
                  0);
                Piece_44763860 = (void *)BasicHelper__Any_int_(
                                           reinforcementsAppointmentSquareList,
                                           (System_Func_T__bool__o *)v18,
                                           (const MethodInfo_37DC704 *)Method_BasicHelper_Any_int___);
                if ( ((unsigned __int8)Piece_44763860 & 1) == 0 )
                {
                  v19 = (System_Func_int__bool__o *)sub_21FFEBC(System_Func_int__bool__TypeInfo);
                  System_Func_int__bool____ctor(
                    v19,
                    (Il2CppObject *)v12,
                    Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__1__,
                    0);
                  Piece_44763860 = (void *)BasicHelper__Any_int_(
                                             (System_Collections_Generic_List_T__o *)v5,
                                             (System_Func_T__bool__o *)v19,
                                             (const MethodInfo_37DC704 *)Method_BasicHelper_Any_int___);
                  if ( ((unsigned __int8)Piece_44763860 & 1) == 0 )
                    break;
                }
              }
            }
          }
          if ( (__int64)++v11 >= SLODWORD(v10->max_length) )
            goto LABEL_18;
        }
        value = (unsigned int)v12->fields.value;
        if ( !v5 )
          break;
      }
      items = v5->fields._items;
      v21 = Method_System_Collections_Generic_List_int__Add__;
      ++v5->fields._version;
      if ( !items )
        break;
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v5,
          value,
          *(const MethodInfo_4433138 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v5->fields._size = size + 1;
        items->m_Items[size] = value;
      }
      max_length = squareIds->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_27;
    }
LABEL_29:
    sub_21FFECC(Piece_44763860, value);
  }
LABEL_27:
  if ( !v5 )
    goto LABEL_29;
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_String_o *WarBoardData__GetEditBgmName(WarBoardData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5936004 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_21FFC50(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5936004 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_BgmMaster___);
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity || !Instance )
    goto LABEL_11;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               stageEntity->fields.editBgmId,
                               (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return (System_String_o *)entity[1].monitor;
LABEL_11:
    sub_21FFECC(Instance, v4);
  }
  return 0;
}


WarBoardPieceData_array *WarBoardData__GetEditableServantPieces(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardData___c_c *v4; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__120_0; // x20
  Il2CppObject *v8; // x21
  struct WarBoardData___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0

  if ( (byte_5935FF1 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_21FFC50(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__GetEditableServantPieces_b__120_0__);
    sub_21FFC50(&WarBoardData___c_TypeInfo);
    byte_5935FF1 = 1;
  }
  v4 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !*(&WarBoardData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, method, v2);
    v4 = WarBoardData___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__120_0 = (System_Func_object__bool__o *)static_fields->__9__120_0;
  if ( !_9__120_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__120_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__120_0, v8, Method_WarBoardData___c__GetEditableServantPieces_b__120_0__, 0);
    v9 = WarBoardData___c_TypeInfo->static_fields;
    v9->__9__120_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__120_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->__9__120_0, (int32_t)_9__120_0, v10, v11, v12, v13, v14, v15);
  }
  v16 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__120_0,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v16,
                                      (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


WarBoardEffectData_o *WarBoardData__GetEffect(WarBoardData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  WarBoardData___c__DisplayClass142_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *effects; // x20
  System_Func_object__bool__o *v9; // x19

  if ( (byte_5936000 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardEffectData___);
    sub_21FFC50(&System_Func_WarBoardEffectData__bool__TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass142_0__GetEffect_b__0__);
    sub_21FFC50(&WarBoardData___c__DisplayClass142_0_TypeInfo);
    byte_5936000 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass142_0_o *)sub_21FFEBC(WarBoardData___c__DisplayClass142_0_TypeInfo);
  WarBoardData___c__DisplayClass142_0___ctor(v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  effects = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.effects;
  v5->fields.squareIndex = squareIndex;
  v9 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardEffectData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass142_0__GetEffect_b__0__,
    0);
  return (WarBoardEffectData_o *)System_Linq_Enumerable__FirstOrDefault_object__59044732(
                                   effects,
                                   (System_Func_TSource__bool__o *)v9,
                                   (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardEffectData___);
}


WarBoardEffectData_array *WarBoardData__GetEffects(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.effects;
}


WarBoardPieceData_o *WarBoardData__GetEventBossPiece(
        WarBoardData_o *this,
        int32_t stageBossIndex,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass105_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x20
  System_Func_object__bool__o *v9; // x19

  if ( (byte_5935FE6 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
    sub_21FFC50(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass105_0__GetEventBossPiece_b__0__);
    sub_21FFC50(&WarBoardData___c__DisplayClass105_0_TypeInfo);
    byte_5935FE6 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass105_0_o *)sub_21FFEBC(WarBoardData___c__DisplayClass105_0_TypeInfo);
  WarBoardData___c__DisplayClass105_0___ctor(v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v5->fields.stageBossIndex = stageBossIndex;
  v9 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass105_0__GetEventBossPiece_b__0__,
    0);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_object__59044732(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v9,
                                  (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


int32_t WarBoardData__GetExpensiveIcon(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8
  struct WarBoardTreasureData_SaveData_array *treasureSaves; // x22
  int max_length; // w8
  int v5; // w23
  int32_t iconId; // w24
  int v7; // w19
  int32_t Rarity; // w20
  WarBoardTreasureData_SaveData_o *v9; // x21

  localSaveData = this->fields.localSaveData;
  if ( !localSaveData || (treasureSaves = localSaveData->fields.treasureSaves) == 0 )
LABEL_15:
    sub_21FFECC(this, method);
  max_length = treasureSaves->max_length;
  if ( max_length < 1 )
    return 1;
  v5 = 0;
  iconId = 0;
  v7 = -1;
  Rarity = -1;
  do
  {
    if ( v5 >= (unsigned int)max_length )
      sub_21FFED4(this);
    v9 = treasureSaves->m_Items[v5];
    if ( !v9 )
      goto LABEL_15;
    if ( v9->fields.isUse )
    {
      if ( WarBoardTreasureData_SaveData__get_Rarity(v9, 0) > Rarity
        || (this = (WarBoardData_o *)WarBoardTreasureData_SaveData__get_Rarity(v9, 0), (_DWORD)this == Rarity)
        && (this = (WarBoardData_o *)WarBoardTreasureData_SaveData__get_Effect(v9, 0), (int)this > v7) )
      {
        iconId = v9->fields.iconId;
        Rarity = WarBoardTreasureData_SaveData__get_Rarity(v9, 0);
        this = (WarBoardData_o *)WarBoardTreasureData_SaveData__get_Effect(v9, 0);
        v7 = (int)this;
      }
    }
    max_length = treasureSaves->max_length;
    ++v5;
  }
  while ( v5 < max_length );
  return iconId + 1;
}


void WarBoardData__GetHoldReinforcements(
        WarBoardData_o *this,
        System_Collections_Generic_List_ReinforcementsData__o **reinforcementsDatas,
        WarBoardStageReinforcementsMaster_o *mst,
        int32_t targetStageReinforcementsId,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass188_0_o *v8; // x23
  void *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *reinforcementsSaveList; // x22
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Predicate_object__o *_9__188_0; // x24
  Il2CppObject *v15; // x25
  struct WarBoardData___c_StaticFields *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Collections_Generic_List_object__o *v23; // x22
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct System_Collections_Generic_List_HoldReinforcementsData__o *v30; // x22
  System_Func_object__bool__o *v31; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  __int64 v33; // x24
  __int64 v34; // x0
  __int64 v35; // x1
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  int32_t current; // w1
  HoldReinforcementsData_o **v43; // x22
  __int64 v44; // x0
  __int64 v45; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  _BOOL8 v47; // x0
  __int64 v48; // x1
  const MethodInfo *v49; // x2
  System_Int32_array *DeploySquareIds; // x0
  __int64 v51; // x1
  const MethodInfo *v52; // x3
  struct System_Int32_array *limitNums; // x9
  __int64 index_k__BackingField; // x2
  System_Int32_array *v55; // x23
  WarBoardPieceData_array *ReinfocementsPieces; // x0
  __int64 v57; // x1
  struct System_Int32_array *v58; // x8
  __int64 v59; // x9
  _BOOL4 v60; // w25
  Il2CppObject *Instance; // x0
  __int64 v62; // x1
  _BOOL8 IsPlayerTurn; // x0
  __int64 v64; // x1
  __int64 v65; // x9
  int max_length; // w10
  System_Collections_Generic_List_T__o *v67; // x25
  System_Func_object__bool__o *v68; // x26
  __int64 v69; // x1
  _BOOL8 v70; // x0
  __int64 v71; // x1
  Il2CppObject *v72; // x26
  System_Collections_Generic_List_int__o *v73; // x25
  System_Collections_Generic_List_int__o *v74; // x24
  __int64 v75; // x0
  __int64 v76; // x1
  __int64 v77; // x0
  __int64 v78; // x1
  __int64 v79; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v81; // x9
  __int64 size; // x10
  System_Int32_array *v83; // x0
  System_String_o *v84; // x2
  System_String_o *v85; // x3
  int32_t v86; // w4
  int32_t v87; // w5
  bool v88; // w6
  bool v89; // w7
  __int64 v90; // x0
  __int64 v91; // x1
  __int64 v92; // x0
  __int64 v93; // x1
  __int64 v94; // x8
  char *v95; // x9
  struct System_Int32_array *v96; // x8
  __int64 v97; // x1
  __int64 v98; // x10
  System_Int32_array *v99; // x0
  System_String_o *v100; // x2
  System_String_o *v101; // x3
  int32_t v102; // w4
  int32_t v103; // w5
  bool v104; // w6
  bool v105; // w7
  Il2CppObject *v106; // x0
  __int64 v107; // x1
  void *monitor; // x8
  HoldReinforcementsData_o *v109; // x0
  __int64 v110; // x9
  System_Collections_Generic_List_int__o *v111; // x8
  char *v112; // x10
  struct System_Int32_array *v113; // x9
  __int64 v114; // x11
  __int64 v115; // x1
  __int64 v116; // x24
  __int64 v117; // x0
  __int64 v118; // x1
  Il2CppClass *v119; // x0
  __int64 v120; // x0
  System_String_o *v121; // x2
  System_String_o *v122; // x3
  int32_t v123; // w4
  int32_t v124; // w5
  bool v125; // w6
  bool v126; // w7
  __int64 v127; // x0
  System_String_o *v128; // x2
  System_String_o *v129; // x3
  int32_t v130; // w4
  int32_t v131; // w5
  bool v132; // w6
  bool v133; // w7
  __int64 v134; // x8
  __int64 v135; // x1
  System_String_o *v136; // x2
  System_String_o *v137; // x3
  int32_t v138; // w4
  int32_t v139; // w5
  bool v140; // w6
  bool v141; // w7
  System_Collections_Generic_List_object__o *v142; // x0
  struct System_Object_array *v143; // x8
  _QWORD *v144; // x9
  __int64 v145; // x10
  Il2CppClass **v146; // x8
  Il2CppObject *v147; // x0
  __int64 v148; // x1
  void *v149; // x8
  HoldReinforcementsData_o *v150; // x0
  __int64 v151; // x9
  System_Collections_Generic_List_int__o *v152; // x8
  char *v153; // x10
  struct System_Int32_array *v154; // x9
  __int64 v155; // x11
  __int64 v156; // x1
  System_Collections_Generic_List_Enumerator_object__o v158; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v159; // [xsp+30h] [xbp-A0h] BYREF
  WarBoardStageReinforcementsEntity_o *entity; // [xsp+48h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v161; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_5936020 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_ReinforcementsData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_HoldReinforcementsData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_HoldReinforcementsData___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__get_Current__);
    sub_21FFC50(&System_Func_HoldReinforcementsData__bool__TypeInfo);
    sub_21FFC50(&System_Func_ReinforcementsData__bool__TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ReinforcementsData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ReinforcementsData__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_HoldReinforcementsData__RemoveAll__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ReinforcementsData___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_ReinforcementsData__TypeInfo);
    sub_21FFC50(&System_Predicate_HoldReinforcementsData__TypeInfo);
    sub_21FFC50(&ReinforcementsData_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&Method_WarBoardData___c__GetHoldReinforcements_b__188_0__);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass188_0__GetHoldReinforcements_b__1__);
    sub_21FFC50(&WarBoardData___c__DisplayClass188_0_TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass188_1__GetHoldReinforcements_b__2__);
    sub_21FFC50(&WarBoardData___c__DisplayClass188_1_TypeInfo);
    sub_21FFC50(&WarBoardData___c_TypeInfo);
    byte_5936020 = 1;
  }
  memset(&v161, 0, sizeof(v161));
  entity = 0;
  memset(&v159, 0, sizeof(v159));
  v8 = (WarBoardData___c__DisplayClass188_0_o *)sub_21FFEBC(WarBoardData___c__DisplayClass188_0_TypeInfo);
  WarBoardData___c__DisplayClass188_0___ctor(v8, 0);
  if ( !v8 )
    goto LABEL_135;
  v8->fields.targetStageReinforcementsId = targetStageReinforcementsId;
  reinforcementsSaveList = (System_Collections_Generic_List_object__o *)this->fields.reinforcementsSaveList;
  v9 = WarBoardData___c_TypeInfo;
  if ( !*(&WarBoardData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, v10, v11);
    v9 = WarBoardData___c_TypeInfo;
  }
  static_fields = (struct WarBoardData___c_StaticFields *)*((_QWORD *)v9 + 23);
  _9__188_0 = (System_Predicate_object__o *)static_fields->__9__188_0;
  if ( !_9__188_0 )
  {
    if ( !*((_DWORD *)v9 + 57) )
    {
      j_il2cpp_runtime_class_init_0(v9, v10, v11);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__188_0 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_HoldReinforcementsData__TypeInfo);
    System_Predicate_object____ctor(_9__188_0, v15, Method_WarBoardData___c__GetHoldReinforcements_b__188_0__, 0);
    v16 = WarBoardData___c_TypeInfo->static_fields;
    v16->__9__188_0 = (struct System_Predicate_HoldReinforcementsData__o *)_9__188_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v16->__9__188_0, (int32_t)_9__188_0, v17, v18, v19, v20, v21, v22);
  }
  if ( !reinforcementsSaveList )
    goto LABEL_135;
  System_Collections_Generic_List_object___RemoveAll(
    reinforcementsSaveList,
    (System_Predicate_T__o *)_9__188_0,
    (const MethodInfo_4451158 *)Method_System_Collections_Generic_List_HoldReinforcementsData__RemoveAll__);
  v23 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ReinforcementsData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ReinforcementsData___ctor__);
  *reinforcementsDatas = (System_Collections_Generic_List_ReinforcementsData__o *)v23;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)reinforcementsDatas, (int32_t)v23, v24, v25, v26, v27, v28, v29);
  v30 = this->fields.reinforcementsSaveList;
  if ( (v8->fields.targetStageReinforcementsId & 0x80000000) == 0 )
  {
    v31 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_HoldReinforcementsData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v31,
      (Il2CppObject *)v8,
      Method_WarBoardData___c__DisplayClass188_0__GetHoldReinforcements_b__1__,
      0);
    v32 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v30,
            (System_Func_TSource__bool__o *)v31,
            (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_HoldReinforcementsData___);
    v9 = System_Linq_Enumerable__ToList_object_(
           v32,
           (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_HoldReinforcementsData___);
    v30 = (struct System_Collections_Generic_List_HoldReinforcementsData__o *)v9;
  }
  if ( !v30 )
LABEL_135:
    sub_21FFECC(v9, v10);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v158,
    (System_Collections_Generic_List_object__o *)v30,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
  v161 = v158;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v161,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__) )
  {
    v33 = sub_21FFEBC(WarBoardData___c__DisplayClass188_1_TypeInfo);
    WarBoardData___c__DisplayClass188_1___ctor((WarBoardData___c__DisplayClass188_1_o *)v33, 0);
    if ( !v33 )
      sub_21FFECC(v34, v35);
    current = (int32_t)v161.fields._current;
    *(_QWORD *)(v33 + 16) = v161.fields._current;
    v43 = (HoldReinforcementsData_o **)(v33 + 16);
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v33 + 16), current, v36, v37, v38, v39, v40, v41);
    stageEntity = this->fields.stageEntity;
    if ( !stageEntity )
      sub_21FFECC(v44, v45);
    if ( !*v43 )
      sub_21FFECC(v44, v45);
    if ( !mst )
      sub_21FFECC(v44, v45);
    v47 = WarBoardStageReinforcementsMaster__TryGetEntity(
            mst,
            &entity,
            stageEntity->fields.id,
            (*v43)->fields._id_k__BackingField,
            0);
    if ( v47 )
    {
      if ( !entity )
        sub_21FFECC(v47, v48);
      DeploySquareIds = WarBoardData__GetDeploySquareIds(this, entity->fields.squareIds, v49);
      if ( !entity )
        sub_21FFECC(DeploySquareIds, v51);
      if ( !*v43 )
        sub_21FFECC(DeploySquareIds, v51);
      limitNums = entity->fields.limitNums;
      if ( !limitNums )
        sub_21FFECC(DeploySquareIds, v51);
      index_k__BackingField = (*v43)->fields._index_k__BackingField;
      if ( (unsigned int)index_k__BackingField >= LODWORD(limitNums->max_length) )
        sub_21FFED4(DeploySquareIds);
      v55 = DeploySquareIds;
      if ( limitNums->m_Items[index_k__BackingField] < 1 )
      {
        v60 = 0;
      }
      else
      {
        ReinfocementsPieces = WarBoardData__GetReinfocementsPieces(this, entity->fields.id, index_k__BackingField, v52);
        if ( !ReinfocementsPieces )
          sub_21FFECC(0, v57);
        if ( !entity )
          sub_21FFECC(ReinfocementsPieces, v57);
        if ( !*v43 )
          sub_21FFECC(ReinfocementsPieces, v57);
        v58 = entity->fields.limitNums;
        if ( !v58 )
          sub_21FFECC(ReinfocementsPieces, v57);
        v59 = (*v43)->fields._index_k__BackingField;
        if ( (unsigned int)v59 >= LODWORD(v58->max_length) )
          sub_21FFED4(ReinfocementsPieces);
        v60 = v58->m_Items[v59] <= SLODWORD(ReinfocementsPieces->max_length);
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !Instance )
        sub_21FFECC(0, v62);
      IsPlayerTurn = WarBoardManager__IsPlayerTurn((WarBoardManager_o *)Instance, 0);
      if ( !entity )
        sub_21FFECC(IsPlayerTurn, v64);
      if ( !v55 )
        sub_21FFECC(IsPlayerTurn, v64);
      if ( !*v43 )
        sub_21FFECC(IsPlayerTurn, v64);
      v65 = (*v43)->fields._index_k__BackingField;
      max_length = v55->max_length;
      if ( (int)v65 < max_length )
      {
        if ( (unsigned int)v65 >= max_length )
          sub_21FFED4(IsPlayerTurn);
        if ( (v55->m_Items[v65] & 0x80000000) == 0 && IsPlayerTurn == (entity->fields.forceId == 0) && !v60 )
        {
          v67 = (System_Collections_Generic_List_T__o *)*reinforcementsDatas;
          v68 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_ReinforcementsData__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v68,
            (Il2CppObject *)v33,
            Method_WarBoardData___c__DisplayClass188_1__GetHoldReinforcements_b__2__,
            0);
          if ( BasicHelper__Any_object_(
                 v67,
                 (System_Func_T__bool__o *)v68,
                 (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_ReinforcementsData___) )
          {
            if ( !*reinforcementsDatas )
              sub_21FFECC(0, v69);
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v158,
              (System_Collections_Generic_List_object__o *)*reinforcementsDatas,
              (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ReinforcementsData__GetEnumerator__);
            v159 = v158;
            v158.fields._list = 0;
            *(_QWORD *)&v158.fields._index = &v159;
            while ( 1 )
            {
              v70 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v159,
                      (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__MoveNext__);
              if ( !v70 )
                break;
              v72 = v159.fields._current;
              if ( !v159.fields._current )
                sub_21FFECC(v70, v71);
              if ( !*v43 )
                sub_21FFECC(v70, v71);
              if ( LODWORD(v159.fields._current[1].klass) == (*v43)->fields._id_k__BackingField )
              {
                v73 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
                System_Collections_Generic_List_int____ctor(
                  v73,
                  (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
                v74 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
                System_Collections_Generic_List_int____ctor(
                  v74,
                  (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
                if ( !v73 )
                  sub_21FFECC(v75, v76);
                System_Collections_Generic_List_int___AddRange(
                  v73,
                  (System_Collections_Generic_IEnumerable_T__o *)v72[1].monitor,
                  (const MethodInfo_4433344 *)Method_System_Collections_Generic_List_int__AddRange__);
                if ( !*v43 )
                  sub_21FFECC(v77, v78);
                v79 = (unsigned int)(*v43)->fields._index_k__BackingField;
                items = v73->fields._items;
                v81 = Method_System_Collections_Generic_List_int__Add__;
                ++v73->fields._version;
                if ( !items )
                  sub_21FFECC(v77, v79);
                size = v73->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v73,
                    v79,
                    *(const MethodInfo_4433138 **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
                }
                else
                {
                  v73->fields._size = size + 1;
                  items->m_Items[size] = v79;
                }
                v83 = System_Collections_Generic_List_int___ToArray(
                        v73,
                        (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
                v72[1].monitor = v83;
                sub_21FFBF4(
                  (MissionNaviTransitionBoardItem_o *)&v72[1].monitor,
                  (int32_t)v83,
                  v84,
                  v85,
                  v86,
                  v87,
                  v88,
                  v89);
                if ( !v74 )
                  sub_21FFECC(v90, v91);
                System_Collections_Generic_List_int___AddRange(
                  v74,
                  (System_Collections_Generic_IEnumerable_T__o *)v72[2].klass,
                  (const MethodInfo_4433344 *)Method_System_Collections_Generic_List_int__AddRange__);
                if ( !*v43 )
                  sub_21FFECC(v92, v93);
                v94 = (*v43)->fields._index_k__BackingField;
                if ( (unsigned int)v94 >= LODWORD(v55->max_length) )
                  sub_21FFED4(v92);
                v95 = (char *)v55 + 4 * v94;
                v96 = v74->fields._items;
                v97 = *((unsigned int *)v95 + 8);
                ++v74->fields._version;
                if ( !v96 )
                  sub_21FFECC(v92, v97);
                v98 = v74->fields._size;
                if ( (unsigned int)v98 >= LODWORD(v96->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v74,
                    v97,
                    *(const MethodInfo_4433138 **)(*(_QWORD *)(*((_QWORD *)Method_System_Collections_Generic_List_int__Add__
                                                               + 4)
                                                             + 192LL)
                                                 + 112LL));
                }
                else
                {
                  v74->fields._size = v98 + 1;
                  v96->m_Items[v98] = v97;
                }
                v99 = System_Collections_Generic_List_int___ToArray(
                        v74,
                        (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
                v72[2].klass = (Il2CppClass *)v99;
                sub_21FFBF4(
                  (MissionNaviTransitionBoardItem_o *)&v72[2],
                  (int32_t)v99,
                  v100,
                  v101,
                  v102,
                  v103,
                  v104,
                  v105);
                v106 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
                if ( !v106 )
                  sub_21FFECC(0, v107);
                monitor = v106[27].monitor;
                if ( !monitor )
                  sub_21FFECC(v106, v107);
                v109 = *v43;
                if ( !*v43 )
                  sub_21FFECC(0, v107);
                v110 = v109->fields._index_k__BackingField;
                if ( (unsigned int)v110 >= LODWORD(v55->max_length) )
                  sub_21FFED4(v109);
                v111 = (System_Collections_Generic_List_int__o *)*((_QWORD *)monitor + 29);
                if ( !v111
                  || (v112 = (char *)v55 + 4 * v110,
                      v113 = v111->fields._items,
                      v107 = *((unsigned int *)v112 + 8),
                      ++v111->fields._version,
                      !v113) )
                {
                  sub_21FFECC(v109, v107);
                }
                v114 = v111->fields._size;
                if ( (unsigned int)v114 >= LODWORD(v113->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v111,
                    v107,
                    *(const MethodInfo_4433138 **)(*(_QWORD *)(*((_QWORD *)Method_System_Collections_Generic_List_int__Add__
                                                               + 4)
                                                             + 192LL)
                                                 + 112LL));
                  v109 = *v43;
                  if ( !*v43 )
                    sub_21FFECC(0, v115);
                }
                else
                {
                  v111->fields._size = v114 + 1;
                  v113->m_Items[v114] = v107;
                }
                HoldReinforcementsData__DecreaseHoldNum(v109, 0);
                break;
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v159,
              (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__Dispose__);
          }
          else
          {
            v116 = sub_21FFEBC(ReinforcementsData_TypeInfo);
            ReinforcementsData___ctor((ReinforcementsData_o *)v116, 0);
            if ( !entity )
              sub_21FFECC(v117, v118);
            if ( !v116 )
              sub_21FFECC(v117, v118);
            v119 = int___TypeInfo;
            *(_DWORD *)(v116 + 16) = entity->fields.id;
            v120 = sub_21FFD10(v119, 1);
            if ( !*v43 )
              sub_21FFECC(v120, v120);
            if ( !v120 )
              sub_21FFECC(0, 0);
            if ( !*(_DWORD *)(v120 + 24) )
              sub_21FFED4(v120);
            *(_DWORD *)(v120 + 32) = (*v43)->fields._index_k__BackingField;
            *(_QWORD *)(v116 + 24) = v120;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v116 + 24), v120, v121, v122, v123, v124, v125, v126);
            v127 = sub_21FFD10(int___TypeInfo, 1);
            if ( !*v43 )
              sub_21FFECC(v127, v127);
            v134 = (*v43)->fields._index_k__BackingField;
            if ( (unsigned int)v134 >= LODWORD(v55->max_length) )
              goto LABEL_134;
            if ( !v127 )
              sub_21FFECC(0, 0);
            if ( !*(_DWORD *)(v127 + 24) )
LABEL_134:
              sub_21FFED4(v127);
            *(_DWORD *)(v127 + 32) = v55->m_Items[v134];
            *(_QWORD *)(v116 + 32) = v127;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v116 + 32), v127, v128, v129, v130, v131, v132, v133);
            v142 = (System_Collections_Generic_List_object__o *)*reinforcementsDatas;
            if ( !*reinforcementsDatas
              || (v143 = v142->fields._items,
                  v144 = Method_System_Collections_Generic_List_ReinforcementsData__Add__,
                  ++v142->fields._version,
                  !v143) )
            {
              sub_21FFECC(v142, v135);
            }
            v145 = v142->fields._size;
            if ( (unsigned int)v145 >= LODWORD(v143->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v142,
                (Il2CppObject *)v116,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v144[4] + 192LL) + 112LL));
            }
            else
            {
              v146 = &v143->obj.klass + v145;
              v142->fields._size = v145 + 1;
              v146[4] = (Il2CppClass *)v116;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v146 + 4), v116, v136, v137, v138, v139, v140, v141);
            }
            v147 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
            if ( !v147 )
              sub_21FFECC(0, v148);
            v149 = v147[27].monitor;
            if ( !v149 )
              sub_21FFECC(v147, v148);
            v150 = *v43;
            if ( !*v43 )
              sub_21FFECC(0, v148);
            v151 = v150->fields._index_k__BackingField;
            if ( (unsigned int)v151 >= LODWORD(v55->max_length) )
              sub_21FFED4(v150);
            v152 = (System_Collections_Generic_List_int__o *)*((_QWORD *)v149 + 29);
            if ( !v152
              || (v153 = (char *)v55 + 4 * v151,
                  v154 = v152->fields._items,
                  v148 = *((unsigned int *)v153 + 8),
                  ++v152->fields._version,
                  !v154) )
            {
              sub_21FFECC(v150, v148);
            }
            v155 = v152->fields._size;
            if ( (unsigned int)v155 >= LODWORD(v154->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v152,
                v148,
                *(const MethodInfo_4433138 **)(*(_QWORD *)(*((_QWORD *)Method_System_Collections_Generic_List_int__Add__
                                                           + 4)
                                                         + 192LL)
                                             + 112LL));
              v150 = *v43;
              if ( !*v43 )
                sub_21FFECC(0, v156);
            }
            else
            {
              v152->fields._size = v155 + 1;
              v154->m_Items[v155] = v148;
            }
            HoldReinforcementsData__DecreaseHoldNum(v150, 0);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v161,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
}


int32_t WarBoardData__GetHoldReinforcementsCount(WarBoardData_o *this, const MethodInfo *method)
{
  WarBoardData_o *v2; // x19
  struct System_Collections_Generic_List_HoldReinforcementsData__o *reinforcementsSaveList; // x8

  v2 = this;
  if ( (byte_593600C & 1) == 0 )
  {
    this = (WarBoardData_o *)sub_21FFC50(&Method_System_Collections_Generic_List_HoldReinforcementsData__get_Count__);
    byte_593600C = 1;
  }
  reinforcementsSaveList = v2->fields.reinforcementsSaveList;
  if ( !reinforcementsSaveList )
    sub_21FFECC(this, method);
  return reinforcementsSaveList->fields._size;
}


System_Int32_array *WarBoardData__GetInRangeSquareIndecies(
        WarBoardData_o *this,
        int32_t start,
        int32_t range,
        bool ignoreStart,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass123_0_o *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x4
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *v15; // x20
  WarBoardData___c_c *v16; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__123_0; // x21
  Il2CppObject *v19; // x22
  struct WarBoardData___c_StaticFields *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x20
  System_Func_int__bool__o *v28; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *rangeSearches; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_5935FF4 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_WarBoardData_SquareRangeSearch__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_int___);
    sub_21FFC50(&System_Func_int__bool__TypeInfo);
    sub_21FFC50(&System_Func_WarBoardData_SquareRangeSearch__int__TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__GetInRangeSquareIndecies_b__123_0__);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass123_0__GetInRangeSquareIndecies_b__1__);
    sub_21FFC50(&WarBoardData___c__DisplayClass123_0_TypeInfo);
    sub_21FFC50(&WarBoardData___c_TypeInfo);
    byte_5935FF4 = 1;
  }
  rangeSearches = 0;
  v9 = (WarBoardData___c__DisplayClass123_0_o *)sub_21FFEBC(WarBoardData___c__DisplayClass123_0_TypeInfo);
  WarBoardData___c__DisplayClass123_0___ctor(v9, 0);
  if ( !v9 )
    sub_21FFECC(v10, v11);
  v9->fields.start = start;
  v9->fields.ignoreStart = ignoreStart;
  rangeSearches = 0;
  WarBoardData__SearchInRangeSquares(this, start, range, &rangeSearches, v12);
  v15 = rangeSearches;
  if ( !rangeSearches )
    return 0;
  v16 = WarBoardData___c_TypeInfo;
  if ( !*(&WarBoardData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, v13, v14);
    v16 = WarBoardData___c_TypeInfo;
  }
  static_fields = v16->static_fields;
  _9__123_0 = (System_Func_object__int__o *)static_fields->__9__123_0;
  if ( !_9__123_0 )
  {
    if ( !*(&v16->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v16, v13, v14);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__123_0 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_WarBoardData_SquareRangeSearch__int__TypeInfo);
    System_Func_object__int____ctor(_9__123_0, v19, Method_WarBoardData___c__GetInRangeSquareIndecies_b__123_0__, 0);
    v20 = WarBoardData___c_TypeInfo->static_fields;
    v20->__9__123_0 = (struct System_Func_WarBoardData_SquareRangeSearch__int__o *)_9__123_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v20->__9__123_0, (int32_t)_9__123_0, v21, v22, v23, v24, v25, v26);
  }
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v15,
                                                               (System_Func_TSource__TResult__o *)_9__123_0,
                                                               (const MethodInfo_385D394 *)Method_System_Linq_Enumerable_Select_WarBoardData_SquareRangeSearch__int___);
  v28 = (System_Func_int__bool__o *)sub_21FFEBC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v28,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass123_0__GetInRangeSquareIndecies_b__1__,
    0);
  v29 = System_Linq_Enumerable__Where_int_(
          v27,
          (System_Func_TSource__bool__o *)v28,
          (const MethodInfo_386F9A8 *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v29,
           (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
}


WarBoardSquareData_array *WarBoardData__GetInRangeSquares(
        WarBoardData_o *this,
        int32_t start,
        int32_t range,
        bool ignoreStart,
        const MethodInfo *method)
{
  WarBoardSquareData_array *result; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x20
  System_Func_T__TResult__o *v11; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0

  if ( (byte_5935FF5 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_int__WarBoardSquareData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_WarBoardSquareData___);
    sub_21FFC50(&System_Func_int__WarBoardSquareData__TypeInfo);
    sub_21FFC50(&Method_WarBoardData__GetInRangeSquares_b__124_0__);
    byte_5935FF5 = 1;
  }
  result = (WarBoardSquareData_array *)WarBoardData__GetInRangeSquareIndecies(this, start, range, ignoreStart, method);
  if ( result )
  {
    v10 = (System_Collections_Generic_IEnumerable_TSource__o *)result;
    v11 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_int__WarBoardSquareData__TypeInfo);
    System_Func_int__object____ctor(v11, (Il2CppObject *)this, Method_WarBoardData__GetInRangeSquares_b__124_0__, 0);
    v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                 v10,
                                                                 (System_Func_TSource__TResult__o *)v11,
                                                                 (const MethodInfo_385A9E0 *)Method_System_Linq_Enumerable_Select_int__WarBoardSquareData___);
    return (WarBoardSquareData_array *)System_Linq_Enumerable__ToArray_object_(
                                         v12,
                                         (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_WarBoardSquareData___);
  }
  return result;
}


WarBoardItemData_o *WarBoardData__GetItem(WarBoardData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  WarBoardData___c__DisplayClass135_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *items; // x20
  System_Func_object__bool__o *v9; // x19

  if ( (byte_5935FFC & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___);
    sub_21FFC50(&System_Func_WarBoardItemData__bool__TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass135_0__GetItem_b__0__);
    sub_21FFC50(&WarBoardData___c__DisplayClass135_0_TypeInfo);
    byte_5935FFC = 1;
  }
  v5 = (WarBoardData___c__DisplayClass135_0_o *)sub_21FFEBC(WarBoardData___c__DisplayClass135_0_TypeInfo);
  WarBoardData___c__DisplayClass135_0___ctor(v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  items = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.items;
  v5->fields.squareIndex = squareIndex;
  v9 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardItemData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass135_0__GetItem_b__0__,
    0);
  return (WarBoardItemData_o *)System_Linq_Enumerable__FirstOrDefault_object__59044732(
                                 items,
                                 (System_Func_TSource__bool__o *)v9,
                                 (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___);
}


int32_t WarBoardData__GetItemCost(WarBoardData_o *this, int32_t forceId, int32_t groupId, const MethodInfo *method)
{
  WarBoardActionPointEntity_o *ActionPointEntity; // x0

  ActionPointEntity = WarBoardData__GetActionPointEntity(this, forceId, groupId, method);
  if ( ActionPointEntity )
    LODWORD(ActionPointEntity) = ActionPointEntity->fields.itemCost;
  return (int)ActionPointEntity;
}


WarBoardItemData_array *WarBoardData__GetItems(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.items;
}


uint32_t WarBoardData__GetLastSelectPieceUniqueIndex(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8

  localSaveData = this->fields.localSaveData;
  if ( !localSaveData )
    sub_21FFECC(this, method);
  return localSaveData->fields.lastSelectPieceUniqueIndex;
}


System_UInt32_array *WarBoardData__GetLatestBattlePieceUniqueIndexes(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.latestBattlePieceUniqueIndexes;
}


System_Int32_array *WarBoardData__GetLatestPieceActionSquareIndexes(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.latestPieceActionSquareIndexes;
}


// local variable allocation has failed, the output may be wrong!
int32_t WarBoardData__GetMoveCost(
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
WarBoardStageNpcEntity_o *WarBoardData__GetNpcEntity(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  unsigned __int8 v4; // w19
  System_Collections_Generic_Dictionary_TKey__TValue__o *npcEntityDict; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v4 = groupId;
  if ( (byte_5935FDB & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__TryGetValue__);
    byte_5935FDB = 1;
  }
  npcEntityDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.npcEntityDict;
  value = 0;
  if ( !npcEntityDict )
    sub_21FFECC(0, *(_QWORD *)&forceId);
  System_Collections_Generic_Dictionary_uint__object___TryGetValue(
    npcEntityDict,
    (forceId << 24) | (v4 << 16),
    &value,
    (const MethodInfo_4023E94 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__TryGetValue__);
  return (WarBoardStageNpcEntity_o *)value;
}


int32_t WarBoardData__GetPartySkillId(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardStageEntity_o *stageEntity; // x8

  stageEntity = this->fields.stageEntity;
  if ( !stageEntity )
    sub_21FFECC(this, method);
  return stageEntity->fields.partySkillId;
}


WarBoardPieceData_array *WarBoardData__GetPicesForRange(
        WarBoardData_o *this,
        int32_t start,
        int32_t range,
        bool ignoreStart,
        const MethodInfo *method)
{
  __int64 v9; // x23
  const MethodInfo *v10; // x4
  System_Int32_array *v11; // x0
  __int64 v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v20; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0

  if ( (byte_5935FEF & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_21FFC50(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass118_0__GetPicesForRange_b__0__);
    sub_21FFC50(&WarBoardData___c__DisplayClass118_0_TypeInfo);
    byte_5935FEF = 1;
  }
  v9 = sub_21FFEBC(WarBoardData___c__DisplayClass118_0_TypeInfo);
  WarBoardData___c__DisplayClass118_0___ctor((WarBoardData___c__DisplayClass118_0_o *)v9, 0);
  v11 = WarBoardData__GetInRangeSquareIndecies(this, start, range, ignoreStart, v10);
  if ( !v9 )
    sub_21FFECC(v11, v12);
  *(_QWORD *)(v9 + 16) = v11;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)v11, v13, v14, v15, v16, v17, v18);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v20 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v20,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass118_0__GetPicesForRange_b__0__,
    0);
  v21 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)v20,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v21,
                                      (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


WarBoardPieceData_array *WarBoardData__GetPicesForRangeIsAlive(
        WarBoardData_o *this,
        int32_t start,
        int32_t range,
        bool ignoreStart,
        const MethodInfo *method)
{
  __int64 v9; // x23
  const MethodInfo *v10; // x4
  System_Int32_array *v11; // x0
  __int64 v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v20; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0

  if ( (byte_5935FF0 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_21FFC50(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass119_0__GetPicesForRangeIsAlive_b__0__);
    sub_21FFC50(&WarBoardData___c__DisplayClass119_0_TypeInfo);
    byte_5935FF0 = 1;
  }
  v9 = sub_21FFEBC(WarBoardData___c__DisplayClass119_0_TypeInfo);
  WarBoardData___c__DisplayClass119_0___ctor((WarBoardData___c__DisplayClass119_0_o *)v9, 0);
  v11 = WarBoardData__GetInRangeSquareIndecies(this, start, range, ignoreStart, v10);
  if ( !v9 )
    sub_21FFECC(v11, v12);
  *(_QWORD *)(v9 + 16) = v11;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)v11, v13, v14, v15, v16, v17, v18);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v20 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v20,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass119_0__GetPicesForRangeIsAlive_b__0__,
    0);
  v21 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)v20,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v21,
                                      (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


WarBoardPieceData_o *WarBoardData__GetPiece(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        int32_t index,
        bool ignoreDead,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass100_0_o *v11; // x24
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  WarBoardPieceData_c *v15; // x0
  int v16; // w8
  uint32_t UniqueIndex; // w0
  System_Func_WarBoardPieceData__bool__c *v18; // x8
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v20; // x20

  if ( (byte_5935FE1 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
    sub_21FFC50(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass100_0__GetPiece_b__0__);
    sub_21FFC50(&WarBoardData___c__DisplayClass100_0_TypeInfo);
    sub_21FFC50(&WarBoardPieceData_TypeInfo);
    byte_5935FE1 = 1;
  }
  v11 = (WarBoardData___c__DisplayClass100_0_o *)sub_21FFEBC(WarBoardData___c__DisplayClass100_0_TypeInfo);
  WarBoardData___c__DisplayClass100_0___ctor(v11, 0);
  if ( !v11 )
    sub_21FFECC(v12, v13);
  v15 = WarBoardPieceData_TypeInfo;
  v16 = *(&WarBoardPieceData_TypeInfo->_2.cctor_finished + 1);
  v11->fields.ignoreDead = ignoreDead;
  if ( !v16 )
    j_il2cpp_runtime_class_init_0(v15, v13, v14);
  UniqueIndex = WarBoardPieceData__GetUniqueIndex(forceId, groupId, index, 0);
  v18 = System_Func_WarBoardPieceData__bool__TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v11->fields.uniqueId = UniqueIndex;
  v20 = (System_Func_object__bool__o *)sub_21FFEBC(v18);
  System_Func_object__bool____ctor(
    v20,
    (Il2CppObject *)v11,
    Method_WarBoardData___c__DisplayClass100_0__GetPiece_b__0__,
    0);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_object__59044732(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v20,
                                  (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


int32_t WarBoardData__GetPieceDispPriority(WarBoardData_o *this, WarBoardPieceData_o *piece, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x1
  System_Object_array *AlivePieces; // x19
  System_Predicate_object__o *v16; // x20

  if ( (byte_5936003 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_FindIndex_WarBoardPieceData___);
    sub_21FFC50(&System_Predicate_WarBoardPieceData__TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass145_0__GetPieceDispPriority_b__0__);
    sub_21FFC50(&WarBoardData___c__DisplayClass145_0_TypeInfo);
    byte_5936003 = 1;
  }
  v5 = sub_21FFEBC(WarBoardData___c__DisplayClass145_0_TypeInfo);
  WarBoardData___c__DisplayClass145_0___ctor((WarBoardData___c__DisplayClass145_0_o *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  *(_QWORD *)(v5 + 16) = piece;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)piece, v8, v9, v10, v11, v12, v13);
  AlivePieces = (System_Object_array *)WarBoardData__GetAlivePieces(this, v14);
  v16 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_WarBoardPieceData__TypeInfo);
  System_Predicate_object____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass145_0__GetPieceDispPriority_b__0__,
    0);
  return System_Array__FindIndex_object_(
           AlivePieces,
           (System_Predicate_T__o *)v16,
           (const MethodInfo_39781C0 *)Method_System_Array_FindIndex_WarBoardPieceData___);
}


int32_t WarBoardData__GetPieceMaxDispPriotiry(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceData_array *pieces; // x8

  pieces = this->fields.pieces;
  if ( !pieces )
    sub_21FFECC(this, method);
  return pieces->max_length;
}


WarBoardPieceData_o *WarBoardData__GetPieceOnDisplay(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  WarBoardPieceData_o *result; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  WarBoardPieceData_o *v13; // x19
  UnityEngine_Object_o *pieceComponent; // x20
  __int64 v15; // x1
  UnityEngine_Component_o *gameObject; // x0
  bool activeInHierarchy; // w8

  if ( (byte_5935FE4 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935FE4 = 1;
  }
  result = WarBoardData__GetPiece(this, forceId, groupId, index, 0, v5);
  if ( result )
  {
    v13 = result;
    if ( !result->fields._isDead_k__BackingField )
      return v13;
    pieceComponent = (UnityEngine_Object_o *)result->fields.pieceComponent;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
    if ( !UnityEngine_Object__op_Inequality(pieceComponent, 0, 0) )
      return v13;
    gameObject = (UnityEngine_Component_o *)v13->fields.pieceComponent;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
      sub_21FFECC(gameObject, v15);
    }
    activeInHierarchy = UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)gameObject, 0);
    result = 0;
    if ( activeInHierarchy )
      return v13;
  }
  return result;
}


int32_t WarBoardData__GetPiecePosition(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        int32_t index,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass99_0_o *v9; // x23
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 UniqueIndex; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v15; // x20
  Il2CppObject *v16; // x0

  if ( (byte_5935FE0 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
    sub_21FFC50(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass99_0__GetPiecePosition_b__0__);
    sub_21FFC50(&WarBoardData___c__DisplayClass99_0_TypeInfo);
    sub_21FFC50(&WarBoardPieceData_TypeInfo);
    byte_5935FE0 = 1;
  }
  v9 = (WarBoardData___c__DisplayClass99_0_o *)sub_21FFEBC(WarBoardData___c__DisplayClass99_0_TypeInfo);
  WarBoardData___c__DisplayClass99_0___ctor(v9, 0);
  if ( !*(&WarBoardPieceData_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WarBoardPieceData_TypeInfo, v10, v11);
  UniqueIndex = WarBoardPieceData__GetUniqueIndex(forceId, groupId, index, 0);
  if ( !v9 )
    sub_21FFECC(UniqueIndex, v13);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v9->fields.uniqueId = UniqueIndex;
  v15 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass99_0__GetPiecePosition_b__0__,
    0);
  v16 = System_Linq_Enumerable__FirstOrDefault_object__59044732(
          pieces,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
  if ( v16 )
    return (int32_t)v16[4].klass;
  else
    return -1;
}


WarBoardPieceData_o *WarBoardData__GetPiece_44763860(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass101_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x20
  System_Func_object__bool__o *v9; // x19

  if ( (byte_5935FE2 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
    sub_21FFC50(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass101_0__GetPiece_b__0__);
    sub_21FFC50(&WarBoardData___c__DisplayClass101_0_TypeInfo);
    byte_5935FE2 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass101_0_o *)sub_21FFEBC(WarBoardData___c__DisplayClass101_0_TypeInfo);
  WarBoardData___c__DisplayClass101_0___ctor(v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v5->fields.squareIndex = squareIndex;
  v9 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass101_0__GetPiece_b__0__,
    0);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_object__59044732(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v9,
                                  (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


WarBoardPieceData_o *WarBoardData__GetPiece_44765572(
        WarBoardData_o *this,
        uint32_t uniqueIndex,
        bool ignoreDead,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass102_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  bool v10; // w9
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x20
  System_Func_WarBoardPieceData__bool__c *v12; // x0
  System_Func_object__bool__o *v13; // x19

  if ( (byte_5935FE3 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
    sub_21FFC50(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass102_0__GetPiece_b__0__);
    sub_21FFC50(&WarBoardData___c__DisplayClass102_0_TypeInfo);
    byte_5935FE3 = 1;
  }
  v7 = (WarBoardData___c__DisplayClass102_0_o *)sub_21FFEBC(WarBoardData___c__DisplayClass102_0_TypeInfo);
  WarBoardData___c__DisplayClass102_0___ctor(v7, 0);
  if ( !v7 )
    sub_21FFECC(v8, v9);
  v10 = ignoreDead;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v7->fields.uniqueIndex = uniqueIndex;
  v12 = System_Func_WarBoardPieceData__bool__TypeInfo;
  v7->fields.ignoreDead = v10;
  v13 = (System_Func_object__bool__o *)sub_21FFEBC(v12);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v7,
    Method_WarBoardData___c__DisplayClass102_0__GetPiece_b__0__,
    0);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_object__59044732(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v13,
                                  (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


WarBoardPieceData_array *WarBoardData__GetPieces(WarBoardData_o *this, int32_t forceId, const MethodInfo *method)
{
  WarBoardData___c__DisplayClass116_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w9
  System_Func_WarBoardPieceData__bool__c *v9; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v11; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0

  if ( (byte_5935FED & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_21FFC50(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass116_0__GetPieces_b__0__);
    sub_21FFC50(&WarBoardData___c__DisplayClass116_0_TypeInfo);
    byte_5935FED = 1;
  }
  v5 = (WarBoardData___c__DisplayClass116_0_o *)sub_21FFEBC(WarBoardData___c__DisplayClass116_0_TypeInfo);
  WarBoardData___c__DisplayClass116_0___ctor(v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  v8 = forceId << 24;
  v9 = System_Func_WarBoardPieceData__bool__TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v5->fields.forceIdOnly = v8;
  v11 = (System_Func_object__bool__o *)sub_21FFEBC(v9);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass116_0__GetPieces_b__0__,
    0);
  v12 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v12,
                                      (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


WarBoardPieceData_array *WarBoardData__GetPieces_44819988(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  unsigned __int8 v4; // w19
  WarBoardData___c__DisplayClass117_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int v10; // w9
  System_Func_WarBoardPieceData__bool__c *v11; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v13; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  v4 = groupId;
  if ( (byte_5935FEE & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_21FFC50(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass117_0__GetPieces_b__0__);
    sub_21FFC50(&WarBoardData___c__DisplayClass117_0_TypeInfo);
    byte_5935FEE = 1;
  }
  v7 = (WarBoardData___c__DisplayClass117_0_o *)sub_21FFEBC(WarBoardData___c__DisplayClass117_0_TypeInfo);
  WarBoardData___c__DisplayClass117_0___ctor(v7, 0);
  if ( !v7 )
    sub_21FFECC(v8, v9);
  v10 = (forceId << 24) | (v4 << 16);
  v11 = System_Func_WarBoardPieceData__bool__TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v7->fields.forceAndGroup = v10;
  v13 = (System_Func_object__bool__o *)sub_21FFEBC(v11);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v7,
    Method_WarBoardData___c__DisplayClass117_0__GetPieces_b__0__,
    0);
  v14 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v14,
                                      (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


System_String_o *WarBoardData__GetPlayBgmName(WarBoardData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5936005 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_21FFC50(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5936005 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_BgmMaster___);
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity || !Instance )
    goto LABEL_11;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               stageEntity->fields.playBgmId,
                               (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return (System_String_o *)entity[1].monitor;
LABEL_11:
    sub_21FFECC(Instance, v4);
  }
  return 0;
}


System_Int32_array *WarBoardData__GetPlayReinforcements(WarBoardData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *playedStageReinforcementsList; // x0

  if ( (byte_593601E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_593601E = 1;
  }
  playedStageReinforcementsList = this->fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList )
    sub_21FFECC(0, method);
  return System_Collections_Generic_List_int___ToArray(
           playedStageReinforcementsList,
           (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


WarBoardEventData_o *WarBoardData__GetPlayedEventData(WarBoardData_o *this, int32_t eventId, const MethodInfo *method)
{
  WarBoardData___c__DisplayClass164_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *listEvent; // x20
  System_Predicate_object__o *v9; // x19

  if ( (byte_593600E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardEventData__Find__);
    sub_21FFC50(&System_Predicate_WarBoardEventData__TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass164_0__GetPlayedEventData_b__0__);
    sub_21FFC50(&WarBoardData___c__DisplayClass164_0_TypeInfo);
    byte_593600E = 1;
  }
  v5 = (WarBoardData___c__DisplayClass164_0_o *)sub_21FFEBC(WarBoardData___c__DisplayClass164_0_TypeInfo);
  WarBoardData___c__DisplayClass164_0___ctor(v5, 0);
  if ( !v5
    || (listEvent = (System_Collections_Generic_List_object__o *)this->fields.listEvent,
        v5->fields.eventId = eventId,
        v9 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_WarBoardEventData__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_WarBoardData___c__DisplayClass164_0__GetPlayedEventData_b__0__,
          0),
        !listEvent) )
  {
    sub_21FFECC(v6, v7);
  }
  return (WarBoardEventData_o *)System_Collections_Generic_List_object___Find(
                                  listEvent,
                                  (System_Predicate_T__o *)v9,
                                  (const MethodInfo_4450188 *)Method_System_Collections_Generic_List_WarBoardEventData__Find__);
}


WarBoardPieceData_o *WarBoardData__GetPlayerMasterPiece(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardData___c_c *v4; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__104_0; // x20
  Il2CppObject *v8; // x21
  struct WarBoardData___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5935FE5 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
    sub_21FFC50(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__GetPlayerMasterPiece_b__104_0__);
    sub_21FFC50(&WarBoardData___c_TypeInfo);
    byte_5935FE5 = 1;
  }
  v4 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !*(&WarBoardData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, method, v2);
    v4 = WarBoardData___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__104_0 = (System_Func_object__bool__o *)static_fields->__9__104_0;
  if ( !_9__104_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__104_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__104_0, v8, Method_WarBoardData___c__GetPlayerMasterPiece_b__104_0__, 0);
    v9 = WarBoardData___c_TypeInfo->static_fields;
    v9->__9__104_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__104_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->__9__104_0, (int32_t)_9__104_0, v10, v11, v12, v13, v14, v15);
  }
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_object__59044732(
                                  pieces,
                                  (System_Func_TSource__bool__o *)_9__104_0,
                                  (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


WarBoardPieceData_array *WarBoardData__GetPlayerPieces(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardData___c_c *v4; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__121_0; // x20
  Il2CppObject *v8; // x21
  MissionNaviTransitionBoardItem_o *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0

  if ( (byte_5935FF2 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_21FFC50(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__GetPlayerPieces_b__121_0__);
    sub_21FFC50(&WarBoardData___c_TypeInfo);
    byte_5935FF2 = 1;
  }
  v4 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !*(&WarBoardData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, method, v2);
    v4 = WarBoardData___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__121_0 = (System_Func_object__bool__o *)static_fields->__9__121_0;
  if ( !_9__121_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__121_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__121_0, v8, Method_WarBoardData___c__GetPlayerPieces_b__121_0__, 0);
    v9 = (MissionNaviTransitionBoardItem_o *)WarBoardData___c_TypeInfo->static_fields;
    v9[1].klass = (MissionNaviTransitionBoardItem_c *)_9__121_0;
    sub_21FFBF4(v9 + 1, (int32_t)_9__121_0, v10, v11, v12, v13, v14, v15);
  }
  v16 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__121_0,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v16,
                                      (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


System_Int32_array *WarBoardData__GetPrevCondIds(
        WarBoardData_o *this,
        System_Int32_array *commonReleaseIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_int__o *Master_object; // x0
  __int64 v8; // x1
  il2cpp_array_size_t max_length; // x8
  WarBoardCommonReleaseMaster_o *v10; // x21
  unsigned __int64 v11; // x23
  int size; // w8
  System_Collections_Generic_List_int__o *v13; // x22
  unsigned int v14; // w25
  __int64 v15; // x8
  struct System_Int32_array *items; // x9
  _QWORD *v17; // x8
  __int64 v18; // x10
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  if ( (byte_5936019 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_int___);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    byte_5936019 = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5, v6);
  Master_object = (System_Collections_Generic_List_int__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  if ( !commonReleaseIds )
    goto LABEL_25;
  max_length = commonReleaseIds->max_length;
  if ( (int)max_length >= 1 )
  {
    v10 = (WarBoardCommonReleaseMaster_o *)Master_object;
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)max_length )
        goto LABEL_26;
      if ( !v10 )
        goto LABEL_25;
      Master_object = (System_Collections_Generic_List_int__o *)WarBoardCommonReleaseMaster__GetList(
                                                                  v10,
                                                                  commonReleaseIds->m_Items[v11],
                                                                  0);
      if ( !Master_object )
        goto LABEL_25;
      size = Master_object->fields._size;
      v13 = Master_object;
      if ( size >= 1 )
        break;
LABEL_22:
      LODWORD(max_length) = commonReleaseIds->max_length;
      if ( (__int64)++v11 >= (int)max_length )
        goto LABEL_23;
    }
    v14 = 0;
    while ( v14 < size )
    {
      v15 = *((_QWORD *)&v13->fields._syncRoot + (int)v14);
      if ( !v15 )
        goto LABEL_25;
      if ( (unsigned int)(*(_DWORD *)(v15 + 28) - 7) <= 1 )
      {
        if ( !v4 )
          goto LABEL_25;
        items = v4->fields._items;
        v8 = *(unsigned int *)(v15 + 40);
        v17 = Method_System_Collections_Generic_List_int__Add__;
        ++v4->fields._version;
        if ( !items )
          goto LABEL_25;
        v18 = v4->fields._size;
        if ( (unsigned int)v18 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v4,
            v8,
            *(const MethodInfo_4433138 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v4->fields._size = v18 + 1;
          items->m_Items[v18] = v8;
        }
      }
      size = v13->fields._size;
      if ( (int)++v14 >= size )
        goto LABEL_22;
    }
LABEL_26:
    sub_21FFED4(Master_object);
  }
LABEL_23:
  v19 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v4,
          (const MethodInfo_3849124 *)Method_System_Linq_Enumerable_Distinct_int___);
  Master_object = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                              v19,
                                                              (const MethodInfo_386D6A8 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !Master_object )
LABEL_25:
    sub_21FFECC(Master_object, v8);
  return System_Collections_Generic_List_int___ToArray(
           Master_object,
           (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t WarBoardData__GetRandomGutsCount(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8

  localSaveData = this->fields.localSaveData;
  if ( localSaveData )
    return localSaveData->fields.randGutsCount;
  else
    return 0;
}


int32_t WarBoardData__GetRandomLogicCount(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8

  localSaveData = this->fields.localSaveData;
  if ( localSaveData )
    return localSaveData->fields.randLogicCount;
  else
    return 0;
}


WarBoardPieceData_array *WarBoardData__GetReinfocementsPieces(
        WarBoardData_o *this,
        int32_t stageReinfoId,
        int32_t reinfoIndex,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x21
  const MethodInfo *v8; // x1
  WarBoardPieceData_array *AlivePieces; // x0
  WarBoardPieceData_o *v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int max_length; // w8
  WarBoardPieceData_array *v18; // x22
  unsigned int v19; // w24
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_5935FF3 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    byte_5935FF3 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  AlivePieces = WarBoardData__GetAlivePieces(this, v8);
  if ( !AlivePieces )
    goto LABEL_18;
  max_length = AlivePieces->max_length;
  v18 = AlivePieces;
  if ( max_length >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= max_length )
        sub_21FFED4(AlivePieces);
      v10 = v18->m_Items[v19];
      if ( !v10 )
        break;
      if ( v10->fields._StageReinfoId_k__BackingField == stageReinfoId
        && v10->fields._ReinfoIndex_k__BackingField == reinfoIndex )
      {
        if ( !v7 )
          break;
        items = v7->fields._items;
        v21 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
        ++v7->fields._version;
        if ( !items )
          break;
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)v10,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v10;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v23 + 4), (int32_t)v10, v11, v12, v13, v14, v15, v16);
        }
      }
      max_length = v18->max_length;
      if ( (int)++v19 >= max_length )
        goto LABEL_16;
    }
LABEL_18:
    sub_21FFECC(AlivePieces, v10);
  }
LABEL_16:
  if ( !v7 )
    goto LABEL_18;
  return (WarBoardPieceData_array *)System_Collections_Generic_List_object___ToArray(
                                      v7,
                                      (const MethodInfo_445164C *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
}


void WarBoardData__GetReinforcements(
        WarBoardData_o *this,
        System_Collections_Generic_List_ReinforcementsData__o **reinfoDatas,
        WarBoardStageReinforcementsMaster_o *mst,
        int32_t targetStageReinforcementsId,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass189_0_o *v8; // x24
  WarBoardStageReinforcementsEntity_o *ReinfocementsPieces; // x0
  __int64 v10; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  System_Collections_Generic_List_int__o *v12; // x23
  const MethodInfo *v13; // x2
  struct WarBoardStageReinforcementsEntity_o *v14; // x8
  System_Int32_array *DeploySquareIds; // x24
  __int64 v16; // x25
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x19
  const MethodInfo *v24; // x3
  __int64 v25; // x8
  int32_t v26; // w2
  struct System_Int32_array *reinforcementsIds; // x8
  struct System_Int32_array *limitNums; // x8
  WarBoardStageReinforcementsEntity_o *v29; // x8
  struct System_Int32_array *v30; // x9
  __int64 v31; // x10
  _BOOL4 v32; // w20
  _BOOL4 IsOnce; // w27
  WarBoardData_o *v34; // x26
  const MethodInfo *v35; // x1
  __int64 v36; // x29
  __int64 v37; // x22
  System_Int32_array *v38; // x28
  System_Func_int__bool__o *v39; // x19
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  _BOOL4 v46; // w28
  System_Collections_Generic_List_T__o *v47; // x19
  System_Func_object__bool__o *v48; // x21
  const MethodInfo *v49; // x3
  int32_t v50; // w2
  unsigned int max_length; // w8
  int v52; // w9
  __int64 v53; // x8
  struct System_Int32_array *items; // x9
  _QWORD *v55; // x10
  __int64 size; // x11
  __int64 v57; // x9
  struct System_Int32_array *v58; // x8
  __int64 v59; // x10
  _QWORD *monitor; // x9
  __int64 v61; // x8
  char *v62; // x9
  __int64 v63; // x8
  __int64 forceId; // x10
  __int64 v65; // x20
  struct WarBoardStageReinforcementsEntity_o *v66; // x8
  const MethodInfo_4434BB8 *v67; // x1
  System_Int32_array *v68; // x0
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  System_Int32_array *v75; // x0
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  System_Collections_Generic_List_object__o *v88; // x8
  struct System_Object_array *v89; // x9
  _QWORD *v90; // x10
  __int64 v91; // x11
  Il2CppClass **v92; // x0
  WarBoardData___c__DisplayClass189_0_o *v93; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_int__o *v94; // [xsp+10h] [xbp-70h]

  if ( (byte_5936021 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_int____91485032);
    sub_21FFC50(&Method_BasicHelper_Any_ReinforcementsData___);
    sub_21FFC50(&System_Func_int__bool__TypeInfo);
    sub_21FFC50(&System_Func_ReinforcementsData__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ReinforcementsData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&ReinforcementsData_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass189_0__GetReinforcements_b__0__);
    sub_21FFC50(&WarBoardData___c__DisplayClass189_0_TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__1__);
    sub_21FFC50(&WarBoardData___c__DisplayClass189_1_TypeInfo);
    byte_5936021 = 1;
  }
  v8 = (WarBoardData___c__DisplayClass189_0_o *)sub_21FFEBC(WarBoardData___c__DisplayClass189_0_TypeInfo);
  WarBoardData___c__DisplayClass189_0___ctor(v8, 0);
  if ( !v8 )
    goto LABEL_56;
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity || !mst )
    goto LABEL_56;
  if ( !WarBoardStageReinforcementsMaster__TryGetReleaseEntity(
          mst,
          &v8->fields.stageEntity,
          stageEntity->fields.id,
          targetStageReinforcementsId,
          0) )
    return;
  v12 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  v94 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v94,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  v14 = v8->fields.stageEntity;
  v93 = v8;
  if ( !v14 )
    goto LABEL_56;
  DeploySquareIds = WarBoardData__GetDeploySquareIds(this, v14->fields.squareIds, v13);
  v16 = sub_21FFEBC(WarBoardData___c__DisplayClass189_1_TypeInfo);
  WarBoardData___c__DisplayClass189_1___ctor((WarBoardData___c__DisplayClass189_1_o *)v16, 0);
  if ( !v16 )
    goto LABEL_56;
  *(_QWORD *)(v16 + 24) = v93;
  v23 = v16 + 24;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v16 + 24), (int32_t)v93, v17, v18, v19, v20, v21, v22);
  v25 = *(_QWORD *)(v16 + 24);
  *(_DWORD *)(v16 + 16) = 0;
  if ( !v25 )
    goto LABEL_56;
  v26 = 0;
  while ( 1 )
  {
    ReinfocementsPieces = *(WarBoardStageReinforcementsEntity_o **)(v25 + 16);
    if ( !ReinfocementsPieces )
      goto LABEL_56;
    reinforcementsIds = ReinfocementsPieces->fields.reinforcementsIds;
    if ( !reinforcementsIds )
      goto LABEL_56;
    if ( v26 >= SLODWORD(reinforcementsIds->max_length) )
      break;
    limitNums = ReinfocementsPieces->fields.limitNums;
    if ( !limitNums )
      goto LABEL_56;
    if ( (unsigned int)v26 >= LODWORD(limitNums->max_length) )
      goto LABEL_68;
    if ( limitNums->m_Items[v26] < 1 )
    {
      v32 = 0;
    }
    else
    {
      ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)WarBoardData__GetReinfocementsPieces(
                                                                     this,
                                                                     ReinfocementsPieces->fields.id,
                                                                     v26,
                                                                     v24);
      if ( !ReinfocementsPieces )
        goto LABEL_56;
      if ( !*(_QWORD *)v23 )
        goto LABEL_56;
      v29 = ReinfocementsPieces;
      ReinfocementsPieces = *(WarBoardStageReinforcementsEntity_o **)(*(_QWORD *)v23 + 16LL);
      if ( !ReinfocementsPieces )
        goto LABEL_56;
      v30 = ReinfocementsPieces->fields.limitNums;
      if ( !v30 )
        goto LABEL_56;
      v31 = *(int *)(v16 + 16);
      if ( (unsigned int)v31 >= LODWORD(v30->max_length) )
        goto LABEL_68;
      v32 = v30->m_Items[v31] <= v29->fields.forceId;
    }
    IsOnce = WarBoardStageReinforcementsEntity__IsOnce(ReinfocementsPieces, 0);
    v34 = this;
    ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)WarBoardData__GetPlayReinforcements(this, v35);
    v36 = *(_QWORD *)v23;
    if ( !*(_QWORD *)v23 )
      goto LABEL_56;
    v37 = v23;
    v38 = (System_Int32_array *)ReinfocementsPieces;
    v39 = *(System_Func_int__bool__o **)(v36 + 24);
    if ( !v39 )
    {
      v39 = (System_Func_int__bool__o *)sub_21FFEBC(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v39,
        (Il2CppObject *)v36,
        Method_WarBoardData___c__DisplayClass189_0__GetReinforcements_b__0__,
        0);
      *(_QWORD *)(v36 + 24) = v39;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v36 + 24), (int32_t)v39, v40, v41, v42, v43, v44, v45);
    }
    v46 = BasicHelper__Any_int__58574768(
            v38,
            (System_Func_T__bool__o *)v39,
            (const MethodInfo_37DC7B0 *)Method_BasicHelper_Any_int____91485032);
    v47 = (System_Collections_Generic_List_T__o *)*reinfoDatas;
    v48 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_ReinforcementsData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v48,
      (Il2CppObject *)v16,
      Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__1__,
      0);
    ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)BasicHelper__Any_object_(
                                                                   v47,
                                                                   (System_Func_T__bool__o *)v48,
                                                                   (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_ReinforcementsData___);
    if ( !DeploySquareIds )
      goto LABEL_56;
    v50 = *(_DWORD *)(v16 + 16);
    max_length = DeploySquareIds->max_length;
    if ( v50 >= max_length )
      goto LABEL_68;
    v52 = DeploySquareIds->m_Items[v50] < 0 || v32;
    if ( (((unsigned int)ReinfocementsPieces | (IsOnce && v46) | v52) & 1) != 0 )
    {
      if ( !*(_QWORD *)v37 )
        goto LABEL_56;
      v53 = *(_QWORD *)(*(_QWORD *)v37 + 16LL);
      if ( !v53 )
        goto LABEL_56;
      v23 = v37;
      this = v34;
      WarBoardData__SaveHoldReinforcements(v34, *(_DWORD *)(v53 + 20), v50, v49);
    }
    else
    {
      if ( !v12 )
        goto LABEL_56;
      items = v12->fields._items;
      v55 = Method_System_Collections_Generic_List_int__Add__;
      ++v12->fields._version;
      if ( !items )
        goto LABEL_56;
      size = v12->fields._size;
      this = v34;
      v23 = v37;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v12,
          v50,
          *(const MethodInfo_4433138 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
        max_length = DeploySquareIds->max_length;
      }
      else
      {
        v12->fields._size = size + 1;
        items->m_Items[size] = v50;
      }
      v57 = *(int *)(v16 + 16);
      ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)v94;
      if ( (unsigned int)v57 >= max_length )
LABEL_68:
        sub_21FFED4(ReinfocementsPieces);
      if ( !v94 )
        goto LABEL_56;
      v58 = v94->fields._items;
      v10 = (unsigned int)DeploySquareIds->m_Items[v57];
      ++v94->fields._version;
      if ( !v58 )
        goto LABEL_56;
      v59 = v94->fields._size;
      if ( (unsigned int)v59 >= LODWORD(v58->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v94,
          v10,
          *(const MethodInfo_4433138 **)(*(_QWORD *)(*((_QWORD *)Method_System_Collections_Generic_List_int__Add__ + 4)
                                                   + 192LL)
                                       + 112LL));
      }
      else
      {
        v94->fields._size = v59 + 1;
        v58->m_Items[v59] = v10;
      }
      ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !ReinfocementsPieces )
        goto LABEL_56;
      monitor = ReinfocementsPieces[6].monitor;
      if ( !monitor )
        goto LABEL_56;
      v61 = *(int *)(v16 + 16);
      if ( (unsigned int)v61 >= LODWORD(DeploySquareIds->max_length) )
        goto LABEL_68;
      ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)monitor[29];
      if ( !ReinfocementsPieces )
        goto LABEL_56;
      v62 = (char *)DeploySquareIds + 4 * v61;
      v63 = *(_QWORD *)&ReinfocementsPieces->fields.warBoardStageId;
      v10 = *((unsigned int *)v62 + 8);
      ++ReinfocementsPieces->fields.groupId;
      if ( !v63 )
        goto LABEL_56;
      forceId = ReinfocementsPieces->fields.forceId;
      if ( (unsigned int)forceId >= *(_DWORD *)(v63 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)ReinfocementsPieces,
          v10,
          *(const MethodInfo_4433138 **)(*(_QWORD *)(*((_QWORD *)Method_System_Collections_Generic_List_int__Add__ + 4)
                                                   + 192LL)
                                       + 112LL));
      }
      else
      {
        ReinfocementsPieces->fields.forceId = forceId + 1;
        *(_DWORD *)(v63 + 4 * forceId + 32) = v10;
      }
    }
    v25 = *(_QWORD *)(v16 + 24);
    v26 = *(_DWORD *)(v16 + 16) + 1;
    *(_DWORD *)(v16 + 16) = v26;
    if ( !v25 )
      goto LABEL_56;
  }
  if ( !v12 )
    goto LABEL_56;
  if ( v12->fields._size < 1 )
    return;
  v65 = sub_21FFEBC(ReinforcementsData_TypeInfo);
  ReinforcementsData___ctor((ReinforcementsData_o *)v65, 0);
  v66 = v93->fields.stageEntity;
  if ( !v66 )
    goto LABEL_56;
  if ( !v65 )
    goto LABEL_56;
  v67 = (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__;
  *(_DWORD *)(v65 + 16) = v66->fields.id;
  v68 = System_Collections_Generic_List_int___ToArray(v12, v67);
  *(_QWORD *)(v65 + 24) = v68;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v65 + 24), (int32_t)v68, v69, v70, v71, v72, v73, v74);
  ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)v94;
  if ( !v94
    || (v75 = System_Collections_Generic_List_int___ToArray(
                v94,
                (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__),
        *(_QWORD *)(v65 + 32) = v75,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v65 + 32), (int32_t)v75, v76, v77, v78, v79, v80, v81),
        (v88 = (System_Collections_Generic_List_object__o *)*reinfoDatas) == 0)
    || (v89 = v88->fields._items,
        v90 = Method_System_Collections_Generic_List_ReinforcementsData__Add__,
        ++v88->fields._version,
        !v89) )
  {
LABEL_56:
    sub_21FFECC(ReinfocementsPieces, v10);
  }
  v91 = v88->fields._size;
  if ( (unsigned int)v91 >= LODWORD(v89->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v88,
      (Il2CppObject *)v65,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
  }
  else
  {
    v92 = &v89->obj.klass + v91;
    v88->fields._size = v91 + 1;
    v92[4] = (Il2CppClass *)v65;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v92 + 4), v65, v82, v83, v84, v85, v86, v87);
  }
}


UnityEngine_Vector2_o WarBoardData__GetSaveCameraPos(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  localSaveData = this->fields.localSaveData;
  if ( !localSaveData )
    sub_21FFECC(this, method);
  x = localSaveData->fields.cameraPos.fields.x;
  y = localSaveData->fields.cameraPos.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


float WarBoardData__GetSaveCameraSize(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8

  localSaveData = this->fields.localSaveData;
  if ( !localSaveData )
    sub_21FFECC(this, method);
  return localSaveData->fields.cameraSize;
}


WarBoardPieceData_array *WarBoardData__GetServantPieces(
        WarBoardData_o *this,
        bool isPlayerGroup,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass106_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  bool v8; // w9
  System_Func_WarBoardPieceData__bool__c *v9; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v11; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0

  if ( (byte_5935FE7 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_21FFC50(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass106_0__GetServantPieces_b__0__);
    sub_21FFC50(&WarBoardData___c__DisplayClass106_0_TypeInfo);
    byte_5935FE7 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass106_0_o *)sub_21FFEBC(WarBoardData___c__DisplayClass106_0_TypeInfo);
  WarBoardData___c__DisplayClass106_0___ctor(v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  v8 = isPlayerGroup;
  v9 = System_Func_WarBoardPieceData__bool__TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v5->fields.isPlayerGroup = v8;
  v11 = (System_Func_object__bool__o *)sub_21FFEBC(v9);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass106_0__GetServantPieces_b__0__,
    0);
  v12 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v12,
                                      (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


WarBoardDataEntity_o *WarBoardData__GetServerData(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.serverData;
}


WarBoardSquareData_o *WarBoardData__GetSquare(WarBoardData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  WarBoardData___c__DisplayClass128_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *squares; // x20
  System_Func_object__bool__o *v9; // x19

  if ( (byte_5935FF8 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
    sub_21FFC50(&System_Func_WarBoardSquareData__bool__TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass128_0__GetSquare_b__0__);
    sub_21FFC50(&WarBoardData___c__DisplayClass128_0_TypeInfo);
    byte_5935FF8 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass128_0_o *)sub_21FFEBC(WarBoardData___c__DisplayClass128_0_TypeInfo);
  WarBoardData___c__DisplayClass128_0___ctor(v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  squares = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.squares;
  v5->fields.squareIndex = squareIndex;
  v9 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardSquareData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass128_0__GetSquare_b__0__,
    0);
  return (WarBoardSquareData_o *)System_Linq_Enumerable__FirstOrDefault_object__59044732(
                                   squares,
                                   (System_Func_TSource__bool__o *)v9,
                                   (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
}


WarBoardSquareData_array *WarBoardData__GetSquares(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.squares;
}


WarBoardUserServantData_o *WarBoardData__GetStageBossData(
        WarBoardData_o *this,
        int32_t stageBossIdx,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass153_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  System_Object_array *svtInfo; // x19
  System_Func_object__bool__o *v10; // x20

  if ( (byte_5936008 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Find_WarBoardUserServantData___);
    sub_21FFC50(&System_Func_WarBoardUserServantData__bool__TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass153_0__GetStageBossData_b__0__);
    sub_21FFC50(&WarBoardData___c__DisplayClass153_0_TypeInfo);
    byte_5936008 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass153_0_o *)sub_21FFEBC(WarBoardData___c__DisplayClass153_0_TypeInfo);
  WarBoardData___c__DisplayClass153_0___ctor(v5, 0);
  if ( !v5 || (serverData = this->fields.serverData, v5->fields.stageBossIdx = stageBossIdx, !serverData) )
    sub_21FFECC(v6, v7);
  svtInfo = (System_Object_array *)serverData->fields.svtInfo;
  v10 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardUserServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass153_0__GetStageBossData_b__0__,
    0);
  return (WarBoardUserServantData_o *)BasicHelper__Find_object_(
                                        svtInfo,
                                        (System_Func_T__bool__o *)v10,
                                        (const MethodInfo_37DD66C *)Method_BasicHelper_Find_WarBoardUserServantData___);
}


WarBoardTreasureData_o *WarBoardData__GetTreasure(WarBoardData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  WarBoardData___c__DisplayClass137_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *treasures; // x20
  System_Func_object__bool__o *v9; // x19

  if ( (byte_5935FFD & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___);
    sub_21FFC50(&System_Func_WarBoardTreasureData__bool__TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass137_0__GetTreasure_b__0__);
    sub_21FFC50(&WarBoardData___c__DisplayClass137_0_TypeInfo);
    byte_5935FFD = 1;
  }
  v5 = (WarBoardData___c__DisplayClass137_0_o *)sub_21FFEBC(WarBoardData___c__DisplayClass137_0_TypeInfo);
  WarBoardData___c__DisplayClass137_0___ctor(v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  treasures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.treasures;
  v5->fields.squareIndex = squareIndex;
  v9 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardTreasureData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass137_0__GetTreasure_b__0__,
    0);
  return (WarBoardTreasureData_o *)System_Linq_Enumerable__FirstOrDefault_object__59044732(
                                     treasures,
                                     (System_Func_TSource__bool__o *)v9,
                                     (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___);
}


System_Int32_array *WarBoardData__GetTreasureIdList(WarBoardData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  __int64 v4; // x0
  __int64 treasureId; // x1
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8
  struct WarBoardTreasureData_SaveData_array *treasureSaves; // x20
  int max_length; // w8
  unsigned int v9; // w22
  WarBoardTreasureData_SaveData_o *v10; // x9
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10

  if ( (byte_5935FEC & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    byte_5935FEC = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  localSaveData = this->fields.localSaveData;
  if ( !localSaveData )
    goto LABEL_18;
  treasureSaves = localSaveData->fields.treasureSaves;
  if ( !treasureSaves )
    goto LABEL_18;
  max_length = treasureSaves->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_21FFED4(v4);
      v10 = treasureSaves->m_Items[v9];
      if ( !v10 )
        break;
      if ( v10->fields.isUse )
      {
        if ( !v3 )
          break;
        items = v3->fields._items;
        treasureId = (unsigned int)v10->fields.treasureId;
        v12 = Method_System_Collections_Generic_List_int__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v3,
            treasureId,
            *(const MethodInfo_4433138 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v3->fields._size = size + 1;
          items->m_Items[size] = treasureId;
        }
      }
      max_length = treasureSaves->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_16;
    }
LABEL_18:
    sub_21FFECC(v4, treasureId);
  }
LABEL_16:
  if ( !v3 )
    goto LABEL_18;
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


WarBoardTreasureData_array *WarBoardData__GetTreasures(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.treasures;
}


WarBoardUiData_o *WarBoardData__GetUiData(WarBoardData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  WarBoardData___c__DisplayClass193_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *listUiData; // x20
  System_Predicate_object__o *v9; // x19

  if ( (byte_5936025 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardUiData__Find__);
    sub_21FFC50(&System_Predicate_WarBoardUiData__TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass193_0__GetUiData_b__0__);
    sub_21FFC50(&WarBoardData___c__DisplayClass193_0_TypeInfo);
    byte_5936025 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass193_0_o *)sub_21FFEBC(WarBoardData___c__DisplayClass193_0_TypeInfo);
  WarBoardData___c__DisplayClass193_0___ctor(v5, 0);
  if ( !v5
    || (listUiData = (System_Collections_Generic_List_object__o *)this->fields.listUiData,
        v5->fields.squareIndex = squareIndex,
        v9 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_WarBoardUiData__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_WarBoardData___c__DisplayClass193_0__GetUiData_b__0__,
          0),
        !listUiData) )
  {
    sub_21FFECC(v6, v7);
  }
  return (WarBoardUiData_o *)System_Collections_Generic_List_object___Find(
                               listUiData,
                               (System_Predicate_T__o *)v9,
                               (const MethodInfo_4450188 *)Method_System_Collections_Generic_List_WarBoardUiData__Find__);
}


WarBoardUiData_o *WarBoardData__GetUiData_44852372(
        WarBoardData_o *this,
        System_Int32_array *pieceIndex,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_List_object__o *listUiData; // x19
  System_Predicate_object__o *v15; // x20

  if ( (byte_5936026 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardUiData__Find__);
    sub_21FFC50(&System_Predicate_WarBoardUiData__TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass194_0__GetUiData_b__0__);
    sub_21FFC50(&WarBoardData___c__DisplayClass194_0_TypeInfo);
    byte_5936026 = 1;
  }
  v5 = sub_21FFEBC(WarBoardData___c__DisplayClass194_0_TypeInfo);
  WarBoardData___c__DisplayClass194_0___ctor((WarBoardData___c__DisplayClass194_0_o *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = pieceIndex,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)pieceIndex, v8, v9, v10, v11, v12, v13),
        listUiData = (System_Collections_Generic_List_object__o *)this->fields.listUiData,
        v15 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_WarBoardUiData__TypeInfo),
        System_Predicate_object____ctor(
          v15,
          (Il2CppObject *)v5,
          Method_WarBoardData___c__DisplayClass194_0__GetUiData_b__0__,
          0),
        !listUiData) )
  {
    sub_21FFECC(v6, v7);
  }
  return (WarBoardUiData_o *)System_Collections_Generic_List_object___Find(
                               listUiData,
                               (System_Predicate_T__o *)v15,
                               (const MethodInfo_4450188 *)Method_System_Collections_Generic_List_WarBoardUiData__Find__);
}


WarBoardTreasureData_o *WarBoardData__GetUnusedTreasure(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass138_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *treasures; // x20
  System_Func_object__bool__o *v9; // x19

  if ( (byte_5935FFE & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___);
    sub_21FFC50(&System_Func_WarBoardTreasureData__bool__TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass138_0__GetUnusedTreasure_b__0__);
    sub_21FFC50(&WarBoardData___c__DisplayClass138_0_TypeInfo);
    byte_5935FFE = 1;
  }
  v5 = (WarBoardData___c__DisplayClass138_0_o *)sub_21FFEBC(WarBoardData___c__DisplayClass138_0_TypeInfo);
  WarBoardData___c__DisplayClass138_0___ctor(v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  treasures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.treasures;
  v5->fields.squareIndex = squareIndex;
  v9 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardTreasureData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass138_0__GetUnusedTreasure_b__0__,
    0);
  return (WarBoardTreasureData_o *)System_Linq_Enumerable__FirstOrDefault_object__59044732(
                                     treasures,
                                     (System_Func_TSource__bool__o *)v9,
                                     (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___);
}


System_Int32_array *WarBoardData__GetUseCommonReleaseIds(WarBoardData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  void *Master_object; // x0
  __int64 v7; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  WarBoardEventScriptMaster_o *v9; // x20
  int32_t stageId; // w21
  int v11; // w8
  void *v12; // x21
  unsigned int v13; // w24
  __int64 v14; // x22
  __int64 v15; // x25
  __int64 v16; // x8
  unsigned __int64 v17; // x26
  struct System_Int32_array *items; // x9
  _QWORD *v19; // x10
  __int64 size; // x11
  __int64 v21; // x25
  __int64 v22; // x8
  unsigned __int64 v23; // x26
  int v24; // w8
  void *v25; // x22
  unsigned int v26; // w27
  struct System_Int32_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0

  if ( (byte_5936018 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardEventMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardEventScriptMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_int___);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    byte_5936018 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4, v5);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardEventScriptMaster___);
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_46;
  v9 = (WarBoardEventScriptMaster_o *)Master_object;
  stageId = serverData->fields.stageId;
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardEventMaster___);
  if ( !Master_object )
    goto LABEL_46;
  Master_object = WarBoardEventMaster__GetListByStageId((WarBoardEventMaster_o *)Master_object, stageId, 0);
  if ( !Master_object )
    goto LABEL_46;
  v11 = *((_DWORD *)Master_object + 6);
  v12 = Master_object;
  if ( v11 >= 1 )
  {
    v13 = 0;
    do
    {
      if ( v13 >= v11 )
        goto LABEL_47;
      v14 = *((_QWORD *)v12 + (int)v13 + 4);
      if ( !v14 )
        goto LABEL_46;
      v15 = *(_QWORD *)(v14 + 56);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 24);
        if ( v16 )
        {
          if ( (int)v16 >= 1 )
          {
            v17 = 0;
            while ( v17 < (unsigned int)v16 )
            {
              v7 = *(unsigned int *)(v15 + 32 + 4 * v17);
              if ( (int)v7 >= 1 )
              {
                if ( !v3 )
                  goto LABEL_46;
                items = v3->fields._items;
                v19 = Method_System_Collections_Generic_List_int__Add__;
                ++v3->fields._version;
                if ( !items )
                  goto LABEL_46;
                size = v3->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v3,
                    v7,
                    *(const MethodInfo_4433138 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
                  LODWORD(v16) = *(_DWORD *)(v15 + 24);
                }
                else
                {
                  v3->fields._size = size + 1;
                  items->m_Items[size] = v7;
                }
              }
              if ( (__int64)++v17 >= (int)v16 )
                goto LABEL_24;
            }
LABEL_47:
            sub_21FFED4(Master_object);
          }
LABEL_24:
          v21 = *(_QWORD *)(v14 + 48);
          if ( !v21 )
            goto LABEL_46;
          v22 = *(_QWORD *)(v21 + 24);
          if ( (int)v22 >= 1 )
          {
            v23 = 0;
            while ( 1 )
            {
              if ( v23 >= (unsigned int)v22 )
                goto LABEL_47;
              if ( !v9 )
                goto LABEL_46;
              Master_object = WarBoardEventScriptMaster__GetList(v9, *(_DWORD *)(v21 + 4 * v23 + 32), 0);
              if ( !Master_object )
                goto LABEL_46;
              v24 = *((_DWORD *)Master_object + 6);
              v25 = Master_object;
              if ( v24 >= 1 )
                break;
LABEL_42:
              LODWORD(v22) = *(_DWORD *)(v21 + 24);
              if ( (__int64)++v23 >= (int)v22 )
                goto LABEL_43;
            }
            v26 = 0;
            while ( v26 < v24 )
            {
              Master_object = (void *)*((_QWORD *)v25 + (int)v26 + 4);
              if ( !Master_object )
                goto LABEL_46;
              if ( *((_DWORD *)Master_object + 6) == 2 )
              {
                Master_object = (void *)WarBoardEventScriptEntity__GetChangeWinCondition(
                                          (WarBoardEventScriptEntity_o *)Master_object,
                                          0);
                if ( ((unsigned int)Master_object & 0x80000000) == 0 )
                {
                  if ( !v3 )
                    goto LABEL_46;
                  v27 = v3->fields._items;
                  v28 = Method_System_Collections_Generic_List_int__Add__;
                  ++v3->fields._version;
                  if ( !v27 )
                    goto LABEL_46;
                  v29 = v3->fields._size;
                  v7 = (unsigned int)Master_object;
                  if ( (unsigned int)v29 >= LODWORD(v27->max_length) )
                  {
                    System_Collections_Generic_List_int___AddWithResize(
                      v3,
                      (int32_t)Master_object,
                      *(const MethodInfo_4433138 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v3->fields._size = v29 + 1;
                    v27->m_Items[v29] = (int)Master_object;
                  }
                }
              }
              v24 = *((_DWORD *)v25 + 6);
              if ( (int)++v26 >= v24 )
                goto LABEL_42;
            }
            goto LABEL_47;
          }
        }
      }
LABEL_43:
      v11 = *((_DWORD *)v12 + 6);
    }
    while ( (int)++v13 < v11 );
  }
  v30 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v3,
          (const MethodInfo_3849124 *)Method_System_Linq_Enumerable_Distinct_int___);
  Master_object = System_Linq_Enumerable__ToList_int_(
                    v30,
                    (const MethodInfo_386D6A8 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !Master_object )
LABEL_46:
    sub_21FFECC(Master_object, v7);
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)Master_object,
           (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


WarBoardWallData_o *WarBoardData__GetWall(
        WarBoardData_o *this,
        int32_t squareIndex,
        bool ignoreDestroy,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass140_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  bool v10; // w9
  System_Collections_Generic_IEnumerable_TSource__o *walls; // x20
  System_Func_WarBoardWallData__bool__c *v12; // x0
  System_Func_object__bool__o *v13; // x19

  if ( (byte_5935FFF & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardWallData___);
    sub_21FFC50(&System_Func_WarBoardWallData__bool__TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass140_0__GetWall_b__0__);
    sub_21FFC50(&WarBoardData___c__DisplayClass140_0_TypeInfo);
    byte_5935FFF = 1;
  }
  v7 = (WarBoardData___c__DisplayClass140_0_o *)sub_21FFEBC(WarBoardData___c__DisplayClass140_0_TypeInfo);
  WarBoardData___c__DisplayClass140_0___ctor(v7, 0);
  if ( !v7 )
    sub_21FFECC(v8, v9);
  v10 = ignoreDestroy;
  walls = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.walls;
  v7->fields.squareIndex = squareIndex;
  v12 = System_Func_WarBoardWallData__bool__TypeInfo;
  v7->fields.ignoreDestroy = v10;
  v13 = (System_Func_object__bool__o *)sub_21FFEBC(v12);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v7,
    Method_WarBoardData___c__DisplayClass140_0__GetWall_b__0__,
    0);
  return (WarBoardWallData_o *)System_Linq_Enumerable__FirstOrDefault_object__59044732(
                                 walls,
                                 (System_Func_TSource__bool__o *)v13,
                                 (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardWallData___);
}


int32_t WarBoardData__GetWallAttackCost(
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


WarBoardWallData_array *WarBoardData__GetWalls(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.walls;
}


int32_t WarBoardData__GetWinCondGroup(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.winCondGroup;
}


int32_t WarBoardData__GetWinCondId(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.winCondId;
}


bool WarBoardData__HasNewWinCond(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardManager_c *v4; // x0

  if ( (byte_5936010 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardManager_TypeInfo);
    byte_5936010 = 1;
  }
  v4 = WarBoardManager_TypeInfo;
  if ( !*(&WarBoardManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo, method, v2);
    v4 = WarBoardManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v4->static_fields->SAVE_KEY_WAR_BOARD_CONFIRMED_RULE, -1, 0) != this->fields.winCondId;
}


void WarBoardData__InitPrevCondData(WarBoardData_o *this, const MethodInfo *method)
{
  WarBoardData_o *UseCommonReleaseIds; // x0
  const MethodInfo *v4; // x2
  System_Int32_array *PrevCondIds; // x0
  __int64 v6; // x1
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v8; // x20
  unsigned __int64 v9; // x24
  int32_t v10; // w23
  System_Collections_Generic_List_object__o *listPrevCond; // x21
  WarBoardPrevCondData_o *v12; // x22
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_593601A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__);
    sub_21FFC50(&WarBoardPrevCondData_TypeInfo);
    byte_593601A = 1;
  }
  UseCommonReleaseIds = (WarBoardData_o *)WarBoardData__GetUseCommonReleaseIds(this, method);
  PrevCondIds = WarBoardData__GetPrevCondIds(UseCommonReleaseIds, (System_Int32_array *)UseCommonReleaseIds, v4);
  if ( !PrevCondIds )
    goto LABEL_14;
  max_length = PrevCondIds->max_length;
  v8 = PrevCondIds;
  if ( (int)max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)max_length )
        sub_21FFED4(PrevCondIds);
      v10 = v8->m_Items[v9];
      listPrevCond = (System_Collections_Generic_List_object__o *)this->fields.listPrevCond;
      v12 = (WarBoardPrevCondData_o *)sub_21FFEBC(WarBoardPrevCondData_TypeInfo);
      WarBoardPrevCondData___ctor_45036956(v12, v10, -1, 0);
      if ( !listPrevCond )
        break;
      items = listPrevCond->fields._items;
      v20 = Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__;
      ++listPrevCond->fields._version;
      if ( !items )
        break;
      size = listPrevCond->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          listPrevCond,
          (Il2CppObject *)v12,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        listPrevCond->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v12;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v12, v13, v14, v15, v16, v17, v18);
      }
      LODWORD(max_length) = v8->max_length;
      if ( (__int64)++v9 >= (int)max_length )
        return;
    }
LABEL_14:
    sub_21FFECC(PrevCondIds, v6);
  }
}


bool WarBoardData__IsBossInfo(
        WarBoardData_o *this,
        int32_t bossId,
        System_String_o *key,
        int32_t value,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass172_0_o *v9; // x23
  System_Collections_Generic_Dictionary_object__object__o *monitor; // x0
  __int64 v11; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  System_Object_array *bossBattleInfo; // x21
  System_Func_object__bool__o *v14; // x22
  Il2CppObject *object; // x0
  Il2CppObject *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *v19; // x20
  Il2CppObject *valuea; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5936013 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Find_WarBoardBossBattleData___);
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_21FFC50(&System_Func_WarBoardBossBattleData__bool__TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass172_0__IsBossInfo_b__0__);
    sub_21FFC50(&WarBoardData___c__DisplayClass172_0_TypeInfo);
    byte_5936013 = 1;
  }
  valuea = 0;
  v9 = (WarBoardData___c__DisplayClass172_0_o *)sub_21FFEBC(WarBoardData___c__DisplayClass172_0_TypeInfo);
  WarBoardData___c__DisplayClass172_0___ctor(v9, 0);
  if ( !v9 )
    goto LABEL_17;
  serverData = this->fields.serverData;
  v9->fields.bossId = bossId;
  if ( !serverData )
    goto LABEL_17;
  bossBattleInfo = (System_Object_array *)serverData->fields.bossBattleInfo;
  v14 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardBossBattleData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass172_0__IsBossInfo_b__0__,
    0);
  object = BasicHelper__Find_object_(
             bossBattleInfo,
             (System_Func_T__bool__o *)v14,
             (const MethodInfo_37DD66C *)Method_BasicHelper_Find_WarBoardBossBattleData___);
  if ( !object )
    return value == 0;
  v16 = object;
  monitor = (System_Collections_Generic_Dictionary_object__object__o *)object[1].monitor;
  if ( !monitor )
    goto LABEL_17;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          monitor,
          (Il2CppObject *)key,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return value == 0;
  monitor = (System_Collections_Generic_Dictionary_object__object__o *)v16[1].monitor;
  if ( !monitor )
LABEL_17:
    sub_21FFECC(monitor, v11);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          monitor,
          (Il2CppObject *)key,
          &valuea,
          (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return value == 0;
  v19 = valuea;
  if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v17, v18);
  return System_Convert__ToInt32(v19, 0) == value;
}


// local variable allocation has failed, the output may be wrong!
bool WarBoardData__IsDefenseTarget(
        WarBoardData_o *this,
        System_Int32_array **data,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  long double v8; // q0
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
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  WarBoardStageNpcEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5936011 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_int___);
    byte_5936011 = 1;
  }
  v13 = Method_System_Array_Empty_int___;
  entity = 0;
  v14 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v14 )
  {
    sub_2237B54(Method_System_Array_Empty_int___);
    v14 = v13[7];
  }
  v15 = *(_QWORD *)(v14 + 16);
  if ( (*(_WORD *)(v15 + 309) & 1) == 0 )
    v15 = sub_2237AF8(v8);
  if ( !*(_DWORD *)(v15 + 228) )
    *(__n128 *)&v8 = j_il2cpp_runtime_class_init_0(v15, data, *(_QWORD *)&forceId);
  v16 = *(_QWORD *)(v13[7] + 16LL);
  if ( (*(_WORD *)(v16 + 309) & 1) == 0 )
    v16 = sub_2237AF8(v8);
  v17 = *(System_Int32_array ***)(v16 + 184);
  v18 = *v17;
  *data = *v17;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)data,
    (int32_t)v18,
    *(System_String_o **)&forceId,
    *(System_String_o **)&groupId,
    (int32_t)method,
    v5,
    v6,
    v7);
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity )
    goto LABEL_20;
  stageNpcMaster = this->fields.stageNpcMaster;
  if ( !stageNpcMaster )
    goto LABEL_20;
  if ( WarBoardStageNpcMaster__TryGetEntity(stageNpcMaster, &entity, stageEntity->fields.id, forceId, groupId, 0) )
  {
    stageNpcMaster = (WarBoardStageNpcMaster_o *)entity;
    if ( !entity )
      goto LABEL_20;
    DefenseTarget = WarBoardStageNpcEntity__GetDefenseTarget(entity, 0);
    *data = DefenseTarget;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)data, (int32_t)DefenseTarget, v23, v24, v25, v26, v27, v28);
  }
  stageNpcMaster = (WarBoardStageNpcMaster_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*data, 0);
  if ( ((unsigned __int8)stageNpcMaster & 1) != 0 )
    return 0;
  if ( !*data )
LABEL_20:
    sub_21FFECC(stageNpcMaster, v20);
  return ((*data)->max_length & 1) == 0;
}


bool WarBoardData__IsLose(WarBoardData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  WarBoardPieceData_array *Pieces_44819988; // x0
  const MethodInfo *v5; // x1
  int max_length; // w8
  WarBoardPieceData_array *v7; // x20
  int v8; // w23
  int v9; // w22
  int v10; // w24
  WarBoardPieceData_o *v11; // x21
  bool v12; // w8

  Pieces_44819988 = WarBoardData__GetPieces_44819988(this, 0, 0, v2);
  if ( !Pieces_44819988 )
LABEL_18:
    sub_21FFECC(Pieces_44819988, v5);
  max_length = Pieces_44819988->max_length;
  v7 = Pieces_44819988;
  if ( max_length < 1 )
  {
    return 1;
  }
  else
  {
    v8 = 0;
    v9 = 0;
    v10 = 0;
    do
    {
      if ( v8 >= (unsigned int)max_length )
        sub_21FFED4(Pieces_44819988);
      v11 = v7->m_Items[v8];
      if ( !v11 )
        goto LABEL_18;
      if ( !v11->fields._isDead_k__BackingField )
      {
        Pieces_44819988 = (WarBoardPieceData_array *)WarBoardPieceData__HasAvailablePermanentSleepBuff(v11, 0);
        if ( ((unsigned __int8)Pieces_44819988 & 1) == 0 )
        {
          Pieces_44819988 = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster(v11, 0);
          if ( ((unsigned __int8)Pieces_44819988 & 1) != 0 )
            ++v10;
          else
            ++v9;
        }
      }
      max_length = v7->max_length;
      ++v8;
    }
    while ( v8 < max_length );
    v12 = v10 == 0;
    if ( v10 && !v9 )
      return !WarBoardData__IsReachableWinConditions(this, v5);
  }
  return v12;
}


bool WarBoardData__IsPlayedEnemyHalfDeadMessage(WarBoardData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  bool result; // w0
  int32_t maxForceId_k__BackingField; // w9
  int32_t maxGroupId_k__BackingField; // w8
  int v7; // w25
  int v8; // w24
  int32_t i; // w20
  int32_t v10; // w21
  WarBoardPieceData_array *Pieces_44819988; // x0
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
    return 1;
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
        Pieces_44819988 = WarBoardData__GetPieces_44819988(this, i, v10, v2);
        if ( !Pieces_44819988 )
          goto LABEL_25;
        max_length = Pieces_44819988->max_length;
        v14 = Pieces_44819988;
        if ( max_length >= 1 )
        {
          v15 = 0;
          while ( 1 )
          {
            if ( v15 >= max_length )
              sub_21FFED4(Pieces_44819988);
            v16 = &v14->obj.klass + (int)v15;
            v17 = v16[4];
            if ( !v17 )
              break;
            Pieces_44819988 = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster(
                                                           (WarBoardPieceData_o *)v16[4],
                                                           0);
            if ( ((unsigned __int8)Pieces_44819988 & 1) == 0 && !LOBYTE(v17->_1.klass) )
            {
              ++v7;
              v8 += *((unsigned __int8 *)&v17->_1.this_arg.bits + 4);
            }
            max_length = v14->max_length;
            if ( (int)++v15 >= max_length )
              goto LABEL_17;
          }
LABEL_25:
          sub_21FFECC(Pieces_44819988, v12);
        }
LABEL_17:
        maxGroupId_k__BackingField = this->fields._maxGroupId_k__BackingField;
        ++v10;
      }
      while ( v10 <= maxGroupId_k__BackingField );
      maxForceId_k__BackingField = this->fields._maxForceId_k__BackingField;
    }
  }
  result = 1;
  if ( v7 >= 0 )
    v18 = v7;
  else
    v18 = v7 + 1;
  if ( v8 > v18 >> 1 )
  {
    this->fields.isPlayedHalfDeadMessage = 1;
    return 0;
  }
  return result;
}


bool WarBoardData__IsReachableWinConditions(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  WarBoardCommonReleaseEntity_array *List; // x20
  System_Collections_Generic_Dictionary_int__bool__o *v8; // x19
  __int64 v9; // x2
  int max_length; // w8
  unsigned int v11; // w24
  int32_t *v12; // x25
  int32_t v13; // w8
  bool v14; // w2
  WarBoardData___c_c *v15; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_KeyValuePair_int__bool___bool__o *_9__95_0; // x20
  Il2CppObject *v18; // x21
  struct WarBoardData___c_StaticFields *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( (byte_5935FDD & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__bool____);
    sub_21FFC50(&System_Func_KeyValuePair_int__bool___bool__TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__IsReachableWinConditions_b__95_0__);
    sub_21FFC50(&WarBoardData___c_TypeInfo);
    byte_5935FDD = 1;
  }
  if ( this->fields.winCondId < 0 )
    return 1;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  if ( !Master_object )
    goto LABEL_32;
  List = WarBoardCommonReleaseMaster__GetList((WarBoardCommonReleaseMaster_o *)Master_object, this->fields.winCondId, 0);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)List, 0) )
    return 0;
  v8 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v8,
    (const MethodInfo_3F551E8 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  if ( !List )
LABEL_32:
    sub_21FFECC(Master_object, v5);
  max_length = List->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    do
    {
      if ( v11 >= max_length )
        sub_21FFED4(Master_object);
      v12 = (int32_t *)List->m_Items[v11];
      if ( !v12 || !v8 )
        goto LABEL_32;
      if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
              v8,
              v12[6],
              (const MethodInfo_3F55D94 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
        || (Master_object = (Il2CppObject *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                              v8,
                                              v12[6],
                                              (const MethodInfo_3F55AF8 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
            ((unsigned __int8)Master_object & 1) != 0) )
      {
        v13 = v12[7];
        if ( v13 == 1 )
          v14 = v12[10] == 0;
        else
          v14 = v13 == 5 && v12[10] < 1;
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          v8,
          v12[6],
          v14,
          (const MethodInfo_3F55B88 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      max_length = List->max_length;
    }
    while ( (int)++v11 < max_length );
  }
  v15 = WarBoardData___c_TypeInfo;
  if ( !*(&WarBoardData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, v5, v9);
    v15 = WarBoardData___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__95_0 = static_fields->__9__95_0;
  if ( !_9__95_0 )
  {
    if ( !*(&v15->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v15, v5, v9);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__95_0 = (System_Func_KeyValuePair_int__bool___bool__o *)sub_21FFEBC(System_Func_KeyValuePair_int__bool___bool__TypeInfo);
    System_Func_KeyValuePair_int__bool___bool____ctor(
      _9__95_0,
      v18,
      Method_WarBoardData___c__IsReachableWinConditions_b__95_0__,
      0);
    v19 = WarBoardData___c_TypeInfo->static_fields;
    v19->__9__95_0 = _9__95_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v19->__9__95_0, (int32_t)_9__95_0, v20, v21, v22, v23, v24, v25);
  }
  return System_Linq_Enumerable__Any_KeyValuePair_int__bool__(
           (System_Collections_Generic_IEnumerable_TSource__o *)v8,
           (System_Func_TSource__bool__o *)_9__95_0,
           (const MethodInfo_383337C *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__bool____);
}


bool WarBoardData__IsReinforcementsApper(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        int32_t targetStageReinforcementsId,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass190_0_o *v9; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  WarBoardStageReinforcementsMaster_o *Master_object; // x0
  __int64 v13; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  bool IsOnce; // w23
  const MethodInfo *v16; // x1
  System_Int32_array *PlayReinforcements; // x24
  System_Func_int__bool__o *v18; // x25
  const MethodInfo *v19; // x2
  struct WarBoardStageReinforcementsEntity_o *entity; // x8
  char v21; // w9
  bool v22; // w23
  const MethodInfo *v23; // x3
  struct WarBoardStageReinforcementsEntity_o *v24; // x8
  struct System_Int32_array *reinforcementsIds; // x9
  WarBoardStageReinforcementsMaster_o *v26; // x21
  int32_t v27; // w22
  int32_t max_length; // w9
  struct System_Int32_array *limitNums; // x9
  struct System_Int32_array *v30; // x9
  bool v31; // w9

  if ( (byte_5936022 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_int____91485032);
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&System_Func_int__bool__TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass190_0__IsReinforcementsApper_b__0__);
    sub_21FFC50(&WarBoardData___c__DisplayClass190_0_TypeInfo);
    byte_5936022 = 1;
  }
  v9 = (WarBoardData___c__DisplayClass190_0_o *)sub_21FFEBC(WarBoardData___c__DisplayClass190_0_TypeInfo);
  WarBoardData___c__DisplayClass190_0___ctor(v9, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10, v11);
  Master_object = (WarBoardStageReinforcementsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
  if ( !v9 )
    goto LABEL_33;
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity || !Master_object )
    goto LABEL_33;
  if ( !WarBoardStageReinforcementsMaster__TryGetReleaseEntity(
          Master_object,
          &v9->fields.entity,
          stageEntity->fields.id,
          targetStageReinforcementsId,
          0) )
    return 0;
  Master_object = (WarBoardStageReinforcementsMaster_o *)v9->fields.entity;
  if ( !Master_object )
    goto LABEL_33;
  IsOnce = WarBoardStageReinforcementsEntity__IsOnce((WarBoardStageReinforcementsEntity_o *)Master_object, 0);
  PlayReinforcements = WarBoardData__GetPlayReinforcements(this, v16);
  v18 = (System_Func_int__bool__o *)sub_21FFEBC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v18,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass190_0__IsReinforcementsApper_b__0__,
    0);
  Master_object = (WarBoardStageReinforcementsMaster_o *)BasicHelper__Any_int__58574768(
                                                           PlayReinforcements,
                                                           (System_Func_T__bool__o *)v18,
                                                           (const MethodInfo_37DC7B0 *)Method_BasicHelper_Any_int____91485032);
  entity = v9->fields.entity;
  if ( !entity )
    goto LABEL_33;
  v21 = IsOnce & (unsigned __int8)Master_object;
  v22 = 0;
  if ( (v21 & 1) != 0 || entity->fields.forceId != forceId || entity->fields.groupId != groupId )
    return v22;
  Master_object = (WarBoardStageReinforcementsMaster_o *)WarBoardData__GetDeploySquareIds(
                                                           this,
                                                           entity->fields.squareIds,
                                                           v19);
  v24 = v9->fields.entity;
  if ( !v24 || (reinforcementsIds = v24->fields.reinforcementsIds) == 0 )
LABEL_33:
    sub_21FFECC(Master_object, v13);
  v26 = Master_object;
  v27 = 0;
  while ( 1 )
  {
    max_length = reinforcementsIds->max_length;
    v22 = v27 < max_length;
    if ( v27 >= max_length )
      return v22;
    limitNums = v24->fields.limitNums;
    if ( !limitNums )
      goto LABEL_33;
    if ( (unsigned int)v27 >= LODWORD(limitNums->max_length) )
LABEL_36:
      sub_21FFED4(Master_object);
    if ( limitNums->m_Items[v27] < 1 )
    {
      v31 = 0;
      if ( !v26 )
        goto LABEL_33;
    }
    else
    {
      Master_object = (WarBoardStageReinforcementsMaster_o *)WarBoardData__GetReinfocementsPieces(
                                                               this,
                                                               v24->fields.id,
                                                               v27,
                                                               v23);
      if ( !Master_object )
        goto LABEL_33;
      v24 = v9->fields.entity;
      if ( !v24 )
        goto LABEL_33;
      v30 = v24->fields.limitNums;
      if ( !v30 )
        goto LABEL_33;
      if ( (unsigned int)v27 >= LODWORD(v30->max_length) )
        goto LABEL_36;
      v31 = v30->m_Items[v27] <= SLODWORD(Master_object->fields._MasterName_k__BackingField);
      if ( !v26 )
        goto LABEL_33;
    }
    if ( (unsigned int)v27 >= LODWORD(v26->fields._MasterName_k__BackingField) )
      goto LABEL_36;
    if ( *(&v26->fields.revision + v27) < 0 )
      v31 = 1;
    if ( !v31 )
      return v22;
    reinforcementsIds = v24->fields.reinforcementsIds;
    ++v27;
    if ( !reinforcementsIds )
      goto LABEL_33;
  }
}


bool WarBoardData__IsWin(WarBoardData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x20
  __int64 v6; // x1
  bool v7; // w20
  __int64 v8; // x1
  __int64 v9; // x2
  System_Type_o *Type; // x21
  Il2CppType *v11; // x22
  System_RuntimeTypeHandle_o v12; // x0
  System_Type_o *TypeFromHandle; // x1
  bool v14; // w19
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_5935FDE & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__GetEnumerator__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&WarBoardChangeWinConditionTask_var);
    byte_5935FDE = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( !WarBoardData__CheckWinCond(this, method) )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 28, 0, 0);
  Instance = (Il2CppObject *)System_Linq_Enumerable__Any_object_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)EventTasks,
                               (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    WarBoardManager__AddTask_44947516((WarBoardManager_o *)Instance, 0, EventTasks, 0);
  }
  if ( !EventTasks )
LABEL_20:
    sub_21FFECC(Instance, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)EventTasks,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_WarBoardTaskBase__GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__MoveNext__);
    if ( !v7 )
      break;
    if ( !v16.fields._current )
      sub_21FFECC(0, v6);
    Type = System_Object__GetType(v16.fields._current, 0);
    v11 = WarBoardChangeWinConditionTask_var;
    if ( !*(_DWORD *)(qword_594C108 + 228) )
      j_il2cpp_runtime_class_init_0(qword_594C108, v8, v9);
    v12.fields.value = (intptr_t)v11;
    TypeFromHandle = System_Type__GetTypeFromHandle(v12, 0);
    if ( System_Type__op_Equality(Type, TypeFromHandle, 0) )
    {
      this->fields.winCondGroup = -1;
      break;
    }
  }
  v14 = !v7;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__Dispose__);
  return v14;
}


void WarBoardData__JudgePrevCondData(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int v4; // w8
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  WarBoardCommonReleaseMaster_o *v7; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *current; // x21
  struct WarBoardDataEntity_o *serverData; // x8
  int32_t turn; // w1
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_593601C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__);
    byte_593601C = 1;
  }
  v4 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  memset(&v13, 0, sizeof(v13));
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  if ( !this->fields.listPrevCond )
    sub_21FFECC(Master_object, v6);
  v7 = (WarBoardCommonReleaseMaster_o *)Master_object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)this->fields.listPrevCond,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__);
    if ( !v8 )
      break;
    current = v13.fields._current;
    if ( !v13.fields._current )
      sub_21FFECC(v8, v9);
    if ( (*(_DWORD *)((_BYTE *)&v13.fields._current->klass + (unsigned __int64)&dword_14) & 0x80000000) != 0 )
    {
      if ( !v7 )
        sub_21FFECC(v8, v9);
      if ( WarBoardCommonReleaseMaster__IsOpen(
             v7,
             *(_DWORD *)((char *)&v13.fields._current->klass + (unsigned __int64)&word_10),
             0) )
      {
        serverData = this->fields.serverData;
        if ( serverData )
          turn = serverData->fields.turn;
        else
          turn = 0;
        WarBoardPrevCondData__SetClearedTurn((WarBoardPrevCondData_o *)current, turn, 0);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__);
}


WarBoardData_BattleParticipantInfo_o *WarBoardData__LoadBattleParticipantInfo(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  return WarBoardData_BattleParticipantInfo__LoadFromUniqueIndex(this->fields.latestBattlePieceUniqueIndexes, 0);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardData__LocalSave(WarBoardData_o *this, bool onBoardSkillUpdate, const MethodInfo *method)
{
  WarBoardData_o *v4; // x19
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8
  struct WarBoardPieceData_SaveData_array *pieceSaves; // x21
  int max_length; // w8
  __int64 v8; // x22
  struct WarBoardData_WarBoardLocalSaveData_o *v9; // x8
  struct WarBoardItemData_SaveData_array *itemSaves; // x21
  int v11; // w8
  __int64 v12; // x22
  struct WarBoardData_WarBoardLocalSaveData_o *v13; // x8
  struct WarBoardTreasureData_SaveData_array *treasureSaves; // x21
  int v15; // w8
  __int64 v16; // x22
  struct WarBoardData_WarBoardLocalSaveData_o *v17; // x8
  struct WarBoardWallData_SaveData_array *wallSaves; // x21
  int v19; // w8
  __int64 v20; // x22
  struct WarBoardData_WarBoardLocalSaveData_o *v21; // x8
  struct WarBoardSquareData_SaveData_array *squareSaves; // x21
  int v23; // w8
  __int64 v24; // x22
  struct WarBoardDataEntity_o *serverData; // x8
  struct WarBoardData_WarBoardLocalSaveData_o *v26; // x22
  WarBoardData_o *v27; // x21
  struct WarBoardPieceData_array *pieces; // x8
  struct WarBoardPieceData_array *v29; // x8
  struct WarBoardData_WarBoardLocalSaveData_o *v30; // x22
  float ZoomSize; // s0
  struct WarBoardData_WarBoardLocalSaveData_o *v32; // x22
  uint32_t npcEntityDict_high; // w8
  struct WarBoardData_WarBoardLocalSaveData_o *v34; // x20
  struct WarBoardData_WarBoardLocalSaveData_o *v35; // x8
  System_Collections_Generic_List_WarBoardEventData_SaveData__c *v36; // x0
  System_Collections_Generic_List_object__o *v37; // x20
  Il2CppObject *current; // x22
  WarBoardEventData_SaveData_o *v39; // x21
  __int64 v40; // x0
  __int64 v41; // x1
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x0
  struct WarBoardData_WarBoardLocalSaveData_o *v52; // x21
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  struct System_Collections_Generic_List_WarBoardUiData__o *latestPieceActionSquareIndexes; // x1
  int32_t winCondId; // w8
  struct System_Collections_Generic_List_WarBoardUiData__o **p_listUiData; // x0
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  struct System_UInt32_array *latestBattlePieceUniqueIndexes; // x1
  System_Collections_Generic_List_object__o *v75; // x20
  Il2CppObject *v76; // x22
  WarBoardPrevCondData_SaveData_o *v77; // x21
  __int64 v78; // x0
  __int64 v79; // x1
  System_String_o *v80; // x2
  System_String_o *v81; // x3
  int32_t v82; // w4
  int32_t v83; // w5
  bool v84; // w6
  bool v85; // w7
  struct System_Object_array *v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  Il2CppClass **v89; // x0
  struct WarBoardData_WarBoardLocalSaveData_o *v90; // x21
  System_String_o *v91; // x2
  System_String_o *v92; // x3
  int32_t v93; // w4
  int32_t v94; // w5
  bool v95; // w6
  bool v96; // w7
  System_Collections_Generic_List_object__o *v97; // x20
  Il2CppObject *v98; // x22
  HoldReinforcementsData_SaveData_o *v99; // x21
  __int64 v100; // x0
  __int64 v101; // x1
  System_String_o *v102; // x2
  System_String_o *v103; // x3
  int32_t v104; // w4
  int32_t v105; // w5
  bool v106; // w6
  bool v107; // w7
  struct System_Object_array *v108; // x8
  _QWORD *v109; // x9
  __int64 v110; // x10
  Il2CppClass **v111; // x0
  struct WarBoardData_WarBoardLocalSaveData_o *v112; // x21
  System_String_o *v113; // x2
  System_String_o *v114; // x3
  int32_t v115; // w4
  int32_t v116; // w5
  bool v117; // w6
  bool v118; // w7
  struct WarBoardData_WarBoardLocalSaveData_o *v119; // x20
  System_String_o *v120; // x2
  System_String_o *v121; // x3
  int32_t v122; // w4
  int32_t v123; // w5
  bool v124; // w6
  bool v125; // w7
  System_Collections_Generic_List_object__o *v126; // x20
  Il2CppObject *v127; // x22
  WarBoardUiData_SaveData_o *v128; // x21
  __int64 v129; // x0
  __int64 v130; // x1
  System_String_o *v131; // x2
  System_String_o *v132; // x3
  int32_t v133; // w4
  int32_t v134; // w5
  bool v135; // w6
  bool v136; // w7
  struct System_Object_array *v137; // x8
  _QWORD *v138; // x9
  __int64 v139; // x10
  Il2CppClass **v140; // x0
  MissionNaviTransitionBoardItem_o *v141; // x21
  System_String_o *v142; // x2
  System_String_o *v143; // x3
  int32_t v144; // w4
  int32_t v145; // w5
  bool v146; // w6
  bool v147; // w7
  struct WarBoardDataEntity_o *v148; // x8
  unsigned int v149; // w0
  struct WarBoardData_WarBoardLocalSaveData_o *v150; // x21
  int v151; // w20
  System_String_o *v152; // x2
  System_String_o *v153; // x3
  int32_t v154; // w4
  int32_t v155; // w5
  bool v156; // w6
  bool v157; // w7
  unsigned __int64 v158; // x22
  __int64 v159; // x23
  __int64 v160; // x24
  struct WarBoardData_WarBoardLocalSaveData_o *v161; // x8
  struct WarBoardDataEntity_o *v162; // x9
  struct WarBoardSquareIndexData_array *squareIndexInfo; // x9
  unsigned int *v164; // x25
  WarBoardSquareIndexData_o *v165; // x21
  WarBoardSquareIndexData_SaveData_o *v166; // x20
  System_String_o *v167; // x2
  System_String_o *v168; // x3
  int32_t v169; // w4
  int32_t v170; // w5
  bool v171; // w6
  bool v172; // w7
  __int64 v173; // x1
  struct WarBoardDataEntity_o *v174; // x8
  unsigned int v175; // w0
  struct WarBoardData_WarBoardLocalSaveData_o *v176; // x21
  int v177; // w20
  System_String_o *v178; // x2
  System_String_o *v179; // x3
  int32_t v180; // w4
  int32_t v181; // w5
  bool v182; // w6
  bool v183; // w7
  System_String_o *v184; // x2
  System_String_o *v185; // x3
  int32_t v186; // w4
  int32_t v187; // w5
  bool v188; // w6
  bool v189; // w7
  unsigned __int64 v190; // x22
  __int64 v191; // x23
  __int64 v192; // x24
  struct WarBoardData_WarBoardLocalSaveData_o *v193; // x8
  struct WarBoardDataEntity_o *v194; // x9
  struct WarBoardBossBattleData_array *bossBattleInfo; // x9
  unsigned int *v196; // x25
  WarBoardBossBattleData_o *v197; // x21
  WarBoardBossBattleData_SaveData_o *v198; // x20
  const MethodInfo *v199; // x2
  System_String_o *v200; // x2
  System_String_o *v201; // x3
  int32_t v202; // w4
  int32_t v203; // w5
  bool v204; // w6
  bool v205; // w7
  struct System_Collections_Generic_List_WarBoardPrevCondData__o *bgAnimationInfo_k__BackingField; // x1
  struct WarBoardData_WarBoardLocalSaveData_o *v207; // x8
  MiniMessagePack_MiniMessagePacker_c *v208; // x0
  MiniMessagePack_MiniMessagePacker_o *v209; // x20
  __int64 v210; // x1
  __int64 v211; // x2
  System_Byte_array *v212; // x19
  WarBoardData_c *v213; // x8
  System_String_o *WARBOARDDATA_SAVEDATA_KEY; // x20
  __int64 v215; // x1
  __int64 v216; // x2
  System_String_o *v217; // x19
  __int64 v218; // x0
  System_Collections_Generic_List_Enumerator_object__o v219; // [xsp+8h] [xbp-F8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v220; // [xsp+20h] [xbp-E0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v221; // [xsp+40h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v222; // [xsp+60h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v223; // [xsp+80h] [xbp-80h] BYREF

  v4 = this;
  if ( (byte_5935FD5 & 1) == 0 )
  {
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&EncryptedPlayerPrefs_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardUiData_SaveData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardEventData_SaveData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardEventData__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardEventData_SaveData__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardUiData_SaveData__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardEventData_SaveData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardUiData_SaveData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardPrevCondData_SaveData__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_HoldReinforcementsData_SaveData__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardEventData_SaveData__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardUiData_SaveData__TypeInfo);
    sub_21FFC50(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_21FFC50(&WarBoardSquareIndexData_SaveData___TypeInfo);
    sub_21FFC50(&WarBoardBossBattleData_SaveData___TypeInfo);
    sub_21FFC50(&WarBoardBossBattleData_SaveData_TypeInfo);
    sub_21FFC50(&WarBoardPrevCondData_SaveData_TypeInfo);
    sub_21FFC50(&WarBoardUiData_SaveData_TypeInfo);
    sub_21FFC50(&WarBoardEventData_SaveData_TypeInfo);
    sub_21FFC50(&WarBoardSquareIndexData_SaveData_TypeInfo);
    sub_21FFC50(&HoldReinforcementsData_SaveData_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    this = (WarBoardData_o *)sub_21FFC50(&WarBoardData_TypeInfo);
    byte_5935FD5 = 1;
  }
  localSaveData = v4->fields.localSaveData;
  memset(&v223, 0, sizeof(v223));
  memset(&v222, 0, sizeof(v222));
  memset(&v221, 0, sizeof(v221));
  memset(&v220, 0, sizeof(v220));
  if ( !localSaveData )
    goto LABEL_129;
  pieceSaves = localSaveData->fields.pieceSaves;
  if ( !pieceSaves )
    goto LABEL_129;
  max_length = pieceSaves->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( (unsigned int)v8 < max_length )
    {
      this = (WarBoardData_o *)pieceSaves->m_Items[v8];
      if ( !this )
        goto LABEL_129;
      WarBoardPieceData_SaveData__Save((WarBoardPieceData_SaveData_o *)this, 0);
      max_length = pieceSaves->max_length;
      if ( (int)++v8 >= max_length )
        goto LABEL_10;
    }
LABEL_130:
    sub_21FFED4(this);
  }
LABEL_10:
  v9 = v4->fields.localSaveData;
  if ( !v9 )
    goto LABEL_129;
  itemSaves = v9->fields.itemSaves;
  if ( !itemSaves )
    goto LABEL_129;
  v11 = itemSaves->max_length;
  if ( v11 >= 1 )
  {
    v12 = 0;
    while ( (unsigned int)v12 < v11 )
    {
      this = (WarBoardData_o *)itemSaves->m_Items[v12];
      if ( !this )
        goto LABEL_129;
      WarBoardItemData_SaveData__Save((WarBoardItemData_SaveData_o *)this, 0);
      v11 = itemSaves->max_length;
      if ( (int)++v12 >= v11 )
        goto LABEL_17;
    }
    goto LABEL_130;
  }
LABEL_17:
  v13 = v4->fields.localSaveData;
  if ( !v13 )
    goto LABEL_129;
  treasureSaves = v13->fields.treasureSaves;
  if ( !treasureSaves )
    goto LABEL_129;
  v15 = treasureSaves->max_length;
  if ( v15 >= 1 )
  {
    v16 = 0;
    while ( (unsigned int)v16 < v15 )
    {
      this = (WarBoardData_o *)treasureSaves->m_Items[v16];
      if ( !this )
        goto LABEL_129;
      WarBoardTreasureData_SaveData__Save((WarBoardTreasureData_SaveData_o *)this, 0);
      v15 = treasureSaves->max_length;
      if ( (int)++v16 >= v15 )
        goto LABEL_24;
    }
    goto LABEL_130;
  }
LABEL_24:
  v17 = v4->fields.localSaveData;
  if ( !v17 )
    goto LABEL_129;
  wallSaves = v17->fields.wallSaves;
  if ( !wallSaves )
    goto LABEL_129;
  v19 = wallSaves->max_length;
  if ( v19 >= 1 )
  {
    v20 = 0;
    while ( (unsigned int)v20 < v19 )
    {
      this = (WarBoardData_o *)wallSaves->m_Items[v20];
      if ( !this )
        goto LABEL_129;
      WarBoardWallData_SaveData__Save((WarBoardWallData_SaveData_o *)this, 0);
      v19 = wallSaves->max_length;
      if ( (int)++v20 >= v19 )
        goto LABEL_31;
    }
    goto LABEL_130;
  }
LABEL_31:
  v21 = v4->fields.localSaveData;
  if ( !v21 )
    goto LABEL_129;
  squareSaves = v21->fields.squareSaves;
  if ( !squareSaves )
    goto LABEL_129;
  v23 = squareSaves->max_length;
  if ( v23 >= 1 )
  {
    v24 = 0;
    while ( (unsigned int)v24 < v23 )
    {
      this = (WarBoardData_o *)squareSaves->m_Items[v24];
      if ( !this )
        goto LABEL_129;
      WarBoardSquareData_SaveData__Save((WarBoardSquareData_SaveData_o *)this, 0);
      v23 = squareSaves->max_length;
      if ( (int)++v24 >= v23 )
        goto LABEL_38;
    }
    goto LABEL_130;
  }
LABEL_38:
  this = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  serverData = v4->fields.serverData;
  if ( !serverData )
    goto LABEL_129;
  v26 = v4->fields.localSaveData;
  if ( !v26 )
    goto LABEL_129;
  v27 = this;
  v26->fields.turn = serverData->fields.turn;
  *(_QWORD *)&v26->fields.turnForceId = *(_QWORD *)&serverData->fields.turnForceId;
  if ( !this )
    goto LABEL_129;
  pieces = this->fields.pieces;
  if ( !pieces )
    goto LABEL_129;
  this = (WarBoardData_o *)pieces->m_Items[5];
  if ( !this )
    goto LABEL_129;
  v26->fields.cameraPos = MapScroll__GetScrlPos((MapScroll_o *)this, 0);
  v29 = v27->fields.pieces;
  if ( !v29 )
    goto LABEL_129;
  this = (WarBoardData_o *)v29->m_Items[6];
  if ( !this )
    goto LABEL_129;
  v30 = v4->fields.localSaveData;
  ZoomSize = MapZoom__GetZoomSize((MapZoom_o *)this, 0);
  if ( !v30 )
    goto LABEL_129;
  v30->fields.cameraSize = ZoomSize;
  v32 = v4->fields.localSaveData;
  if ( !v32 )
    goto LABEL_129;
  npcEntityDict_high = HIDWORD(v27[3].fields.npcEntityDict);
  v32->fields.onBoardSkillUpdate = onBoardSkillUpdate;
  v32->fields.lastSelectPieceUniqueIndex = npcEntityDict_high;
  v32->fields.randLogicCount = BattleRandom__GetLogicCount(0);
  v34 = v4->fields.localSaveData;
  this = (WarBoardData_o *)BattleRandom__GetGutsCount(0);
  if ( !v34 )
    goto LABEL_129;
  v34->fields.randGutsCount = (int)this;
  v35 = v4->fields.localSaveData;
  if ( !v35 )
    goto LABEL_129;
  v36 = System_Collections_Generic_List_WarBoardEventData_SaveData__TypeInfo;
  v35->fields.isPlayedHalfDeadMessage = v4->fields.isPlayedHalfDeadMessage;
  v37 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(v36);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardEventData_SaveData___ctor__);
  this = (WarBoardData_o *)v4->fields.listEvent;
  if ( !this )
    goto LABEL_129;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v219,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_WarBoardEventData__GetEnumerator__);
  v223 = v219;
  v219.fields._list = 0;
  *(_QWORD *)&v219.fields._index = &v223;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v223,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__MoveNext__) )
  {
    current = v223.fields._current;
    v39 = (WarBoardEventData_SaveData_o *)sub_21FFEBC(WarBoardEventData_SaveData_TypeInfo);
    WarBoardEventData_SaveData___ctor_45001200(v39, (WarBoardEventData_o *)current, 0);
    if ( !v37
      || (items = v37->fields._items,
          v49 = Method_System_Collections_Generic_List_WarBoardEventData_SaveData__Add__,
          ++v37->fields._version,
          !items) )
    {
      sub_21FFECC(v40, v41);
    }
    size = v37->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v37,
        (Il2CppObject *)v39,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
    }
    else
    {
      v51 = &items->obj.klass + size;
      v37->fields._size = size + 1;
      v51[4] = (Il2CppClass *)v39;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v51 + 4), (int32_t)v39, v42, v43, v44, v45, v46, v47);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v223,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__Dispose__);
  if ( !v37 )
    goto LABEL_129;
  v52 = v4->fields.localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_object___ToArray(
                             v37,
                             (const MethodInfo_445164C *)Method_System_Collections_Generic_List_WarBoardEventData_SaveData__ToArray__);
  if ( !v52 )
    goto LABEL_129;
  v52->fields.eventSaves = (struct WarBoardEventData_SaveData_array *)this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v52->fields.eventSaves, (int32_t)this, v53, v54, v55, v56, v57, v58);
  this = (WarBoardData_o *)v4->fields.localSaveData;
  if ( !this )
    goto LABEL_129;
  latestPieceActionSquareIndexes = (struct System_Collections_Generic_List_WarBoardUiData__o *)v4->fields.latestPieceActionSquareIndexes;
  winCondId = v4->fields.winCondId;
  this->fields.listUiData = latestPieceActionSquareIndexes;
  p_listUiData = &this->fields.listUiData;
  *((_DWORD *)p_listUiData - 18) = winCondId;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)p_listUiData,
    (int32_t)latestPieceActionSquareIndexes,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  this = (WarBoardData_o *)v4->fields.localSaveData;
  if ( !this )
    goto LABEL_129;
  latestBattlePieceUniqueIndexes = v4->fields.latestBattlePieceUniqueIndexes;
  *(_QWORD *)&this->fields.isPlayedHalfDeadMessage = latestBattlePieceUniqueIndexes;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.isPlayedHalfDeadMessage,
    (int32_t)latestBattlePieceUniqueIndexes,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  v75 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardPrevCondData_SaveData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v75,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData___ctor__);
  this = (WarBoardData_o *)v4->fields.listPrevCond;
  if ( !this )
    goto LABEL_129;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v219,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__);
  v222 = v219;
  v219.fields._list = 0;
  *(_QWORD *)&v219.fields._index = &v222;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v222,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__) )
  {
    v76 = v222.fields._current;
    v77 = (WarBoardPrevCondData_SaveData_o *)sub_21FFEBC(WarBoardPrevCondData_SaveData_TypeInfo);
    WarBoardPrevCondData_SaveData___ctor_45001260(v77, (WarBoardPrevCondData_o *)v76, 0);
    if ( !v75
      || (v86 = v75->fields._items,
          v87 = Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__Add__,
          ++v75->fields._version,
          !v86) )
    {
      sub_21FFECC(v78, v79);
    }
    v88 = v75->fields._size;
    if ( (unsigned int)v88 >= LODWORD(v86->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v75,
        (Il2CppObject *)v77,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
    }
    else
    {
      v89 = &v86->obj.klass + v88;
      v75->fields._size = v88 + 1;
      v89[4] = (Il2CppClass *)v77;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v89 + 4), (int32_t)v77, v80, v81, v82, v83, v84, v85);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v222,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__);
  if ( !v75 )
    goto LABEL_129;
  v90 = v4->fields.localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_object___ToArray(
                             v75,
                             (const MethodInfo_445164C *)Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__ToArray__);
  if ( !v90 )
    goto LABEL_129;
  v90->fields.prevCondSaves = (struct WarBoardPrevCondData_SaveData_array *)this;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v90->fields.prevCondSaves,
    (int32_t)this,
    v91,
    v92,
    v93,
    v94,
    v95,
    v96);
  v97 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_HoldReinforcementsData_SaveData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v97,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData___ctor__);
  this = (WarBoardData_o *)v4->fields.reinforcementsSaveList;
  if ( !this )
    goto LABEL_129;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v219,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
  v221 = v219;
  v219.fields._list = 0;
  *(_QWORD *)&v219.fields._index = &v221;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v221,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__) )
  {
    v98 = v221.fields._current;
    v99 = (HoldReinforcementsData_SaveData_o *)sub_21FFEBC(HoldReinforcementsData_SaveData_TypeInfo);
    HoldReinforcementsData_SaveData___ctor_45001312(v99, (HoldReinforcementsData_o *)v98, 0);
    if ( !v97
      || (v108 = v97->fields._items,
          v109 = Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__Add__,
          ++v97->fields._version,
          !v108) )
    {
      sub_21FFECC(v100, v101);
    }
    v110 = v97->fields._size;
    if ( (unsigned int)v110 >= LODWORD(v108->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v97,
        (Il2CppObject *)v99,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
    }
    else
    {
      v111 = &v108->obj.klass + v110;
      v97->fields._size = v110 + 1;
      v111[4] = (Il2CppClass *)v99;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v111 + 4), (int32_t)v99, v102, v103, v104, v105, v106, v107);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v221,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
  if ( !v97 )
    goto LABEL_129;
  v112 = v4->fields.localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_object___ToArray(
                             v97,
                             (const MethodInfo_445164C *)Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__ToArray__);
  if ( !v112 )
    goto LABEL_129;
  v112->fields.reinforcementsSaves = (struct HoldReinforcementsData_SaveData_array *)this;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v112->fields.reinforcementsSaves,
    (int32_t)this,
    v113,
    v114,
    v115,
    v116,
    v117,
    v118);
  this = (WarBoardData_o *)v4->fields.playedStageReinforcementsList;
  if ( !this )
    goto LABEL_129;
  v119 = v4->fields.localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_int___ToArray(
                             (System_Collections_Generic_List_int__o *)this,
                             (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v119 )
    goto LABEL_129;
  v119->fields.playedReinforcements = (struct System_Int32_array *)this;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v119->fields.playedReinforcements,
    (int32_t)this,
    v120,
    v121,
    v122,
    v123,
    v124,
    v125);
  v126 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardUiData_SaveData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v126,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardUiData_SaveData___ctor__);
  this = (WarBoardData_o *)v4->fields.listUiData;
  if ( !this )
    goto LABEL_129;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v219,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__);
  v220 = v219;
  v219.fields._list = 0;
  *(_QWORD *)&v219.fields._index = &v220;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v220,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__) )
  {
    v127 = v220.fields._current;
    v128 = (WarBoardUiData_SaveData_o *)sub_21FFEBC(WarBoardUiData_SaveData_TypeInfo);
    WarBoardUiData_SaveData___ctor_45001372(v128, (WarBoardUiData_o *)v127, 0);
    if ( !v126
      || (v137 = v126->fields._items,
          v138 = Method_System_Collections_Generic_List_WarBoardUiData_SaveData__Add__,
          ++v126->fields._version,
          !v137) )
    {
      sub_21FFECC(v129, v130);
    }
    v139 = v126->fields._size;
    if ( (unsigned int)v139 >= LODWORD(v137->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v126,
        (Il2CppObject *)v128,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v138[4] + 192LL) + 112LL));
    }
    else
    {
      v140 = &v137->obj.klass + v139;
      v126->fields._size = v139 + 1;
      v140[4] = (Il2CppClass *)v128;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v140 + 4), (int32_t)v128, v131, v132, v133, v134, v135, v136);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v220,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__);
  if ( !v126 )
    goto LABEL_129;
  v141 = (MissionNaviTransitionBoardItem_o *)v4->fields.localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_object___ToArray(
                             v126,
                             (const MethodInfo_445164C *)Method_System_Collections_Generic_List_WarBoardUiData_SaveData__ToArray__);
  if ( !v141
    || (v141[1].klass = (MissionNaviTransitionBoardItem_c *)this,
        sub_21FFBF4(v141 + 1, (int32_t)this, v142, v143, v144, v145, v146, v147),
        (v148 = v4->fields.serverData) == 0)
    || (v149 = System_Linq_Enumerable__Count_object_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v148->fields.squareIndexInfo,
                 (const MethodInfo_384633C *)Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___),
        v150 = v4->fields.localSaveData,
        v151 = v149,
        this = (WarBoardData_o *)sub_21FFD10(WarBoardSquareIndexData_SaveData___TypeInfo, v149),
        !v150) )
  {
LABEL_129:
    sub_21FFECC(this, onBoardSkillUpdate);
  }
  v150->fields.squareIndexInfo = (struct WarBoardSquareIndexData_SaveData_array *)this;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v150->fields.squareIndexInfo,
    (int32_t)this,
    v152,
    v153,
    v154,
    v155,
    v156,
    v157);
  if ( v151 >= 1 )
  {
    v158 = 0;
    v159 = (unsigned int)v151;
    v160 = 8;
    do
    {
      v161 = v4->fields.localSaveData;
      if ( !v161 )
        goto LABEL_129;
      v162 = v4->fields.serverData;
      if ( !v162 )
        goto LABEL_129;
      squareIndexInfo = v162->fields.squareIndexInfo;
      if ( !squareIndexInfo )
        goto LABEL_129;
      if ( v158 >= LODWORD(squareIndexInfo->max_length) )
        goto LABEL_130;
      v164 = (unsigned int *)v161->fields.squareIndexInfo;
      v165 = *(WarBoardSquareIndexData_o **)((char *)&squareIndexInfo->obj.klass + v160 * 4);
      v166 = (WarBoardSquareIndexData_SaveData_o *)sub_21FFEBC(WarBoardSquareIndexData_SaveData_TypeInfo);
      WarBoardSquareIndexData_SaveData___ctor_45001452(v166, v165, 0);
      if ( !v164 )
        goto LABEL_129;
      if ( v166 )
      {
        this = (WarBoardData_o *)sub_21FFDA4(v166, *(_QWORD *)(*(_QWORD *)v164 + 64LL));
        if ( !this )
        {
LABEL_135:
          v218 = sub_21FFEF0(this, v173);
          sub_21FFD90(v218, 0);
        }
      }
      if ( v158 >= v164[6] )
        goto LABEL_130;
      *(_QWORD *)&v164[v160] = v166;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v164[v160], (int32_t)v166, v167, v168, v169, v170, v171, v172);
      ++v158;
      v160 += 2;
    }
    while ( v159 != v158 );
  }
  v174 = v4->fields.serverData;
  if ( !v174 )
    goto LABEL_129;
  v175 = System_Linq_Enumerable__Count_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v174->fields.bossBattleInfo,
           (const MethodInfo_384633C *)Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___);
  v176 = v4->fields.localSaveData;
  v177 = v175;
  this = (WarBoardData_o *)sub_21FFD10(WarBoardBossBattleData_SaveData___TypeInfo, v175);
  if ( !v176 )
    goto LABEL_129;
  v176->fields.bossBattleInfo = (struct WarBoardBossBattleData_SaveData_array *)this;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v176->fields.bossBattleInfo,
    (int32_t)this,
    v178,
    v179,
    v180,
    v181,
    v182,
    v183);
  if ( v177 >= 1 )
  {
    v190 = 0;
    v191 = (unsigned int)v177;
    v192 = 8;
    do
    {
      v193 = v4->fields.localSaveData;
      if ( !v193 )
        goto LABEL_129;
      v194 = v4->fields.serverData;
      if ( !v194 )
        goto LABEL_129;
      bossBattleInfo = v194->fields.bossBattleInfo;
      if ( !bossBattleInfo )
        goto LABEL_129;
      if ( v190 >= LODWORD(bossBattleInfo->max_length) )
        goto LABEL_130;
      v196 = (unsigned int *)v193->fields.bossBattleInfo;
      v197 = *(WarBoardBossBattleData_o **)((char *)&bossBattleInfo->obj.klass + v192 * 4);
      v198 = (WarBoardBossBattleData_SaveData_o *)sub_21FFEBC(WarBoardBossBattleData_SaveData_TypeInfo);
      WarBoardBossBattleData_SaveData___ctor_44799136(v198, v197, v199);
      if ( !v196 )
        goto LABEL_129;
      if ( v198 )
      {
        this = (WarBoardData_o *)sub_21FFDA4(v198, *(_QWORD *)(*(_QWORD *)v196 + 64LL));
        if ( !this )
          goto LABEL_135;
      }
      if ( v190 >= v196[6] )
        goto LABEL_130;
      *(_QWORD *)&v196[v192] = v198;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v196[v192], (int32_t)v198, v200, v201, v202, v203, v204, v205);
      ++v190;
      v192 += 2;
    }
    while ( v191 != v190 );
  }
  this = (WarBoardData_o *)v4->fields.localSaveData;
  if ( !this )
    goto LABEL_129;
  bgAnimationInfo_k__BackingField = (struct System_Collections_Generic_List_WarBoardPrevCondData__o *)v4->fields._bgAnimationInfo_k__BackingField;
  this->fields.listPrevCond = bgAnimationInfo_k__BackingField;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.listPrevCond,
    (int32_t)bgAnimationInfo_k__BackingField,
    v184,
    v185,
    v186,
    v187,
    v188,
    v189);
  v207 = v4->fields.localSaveData;
  if ( !v207 )
    goto LABEL_129;
  v207->fields.continueConsumeType = v4->fields._ContinueConsumeType_k__BackingField;
  *(_WORD *)&v207->fields.isContinue = *(_WORD *)&v4->fields._IsContinue_k__BackingField;
  v208 = MiniMessagePack_MiniMessagePacker_TypeInfo;
  v207->fields.localSaveTiming = v4->fields.localSaveTiming;
  v209 = (MiniMessagePack_MiniMessagePacker_o *)sub_21FFEBC(v208);
  MiniMessagePack_MiniMessagePacker___ctor(v209, 0);
  if ( !v209 )
    goto LABEL_129;
  v212 = MiniMessagePack_MiniMessagePacker__PackClass(v209, (Il2CppObject *)v4->fields.localSaveData, 0);
  v213 = WarBoardData_TypeInfo;
  if ( !*(&WarBoardData_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo, v210, v211);
    v213 = WarBoardData_TypeInfo;
  }
  WARBOARDDATA_SAVEDATA_KEY = v213->static_fields->WARBOARDDATA_SAVEDATA_KEY;
  if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v210, v211);
  v217 = System_Convert__ToBase64String(v212, 0);
  if ( !*(&EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo, v215, v216);
  EncryptedPlayerPrefs__SetString(WARBOARDDATA_SAVEDATA_KEY, v217, 0);
}


void WarBoardData__SaveHoldReinforcements(
        WarBoardData_o *this,
        int32_t stageReinforcementsId,
        int32_t index,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass187_0_o *v7; // x20
  System_Collections_Generic_List_object__o *v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_T__o *reinforcementsSaveList; // x23
  System_Func_object__bool__o *v11; // x21
  __int64 v12; // x1
  int32_t v13; // w21
  int32_t v14; // w22
  HoldReinforcementsData_o *v15; // x20
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x8
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_593601F & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_HoldReinforcementsData___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__get_Current__);
    sub_21FFC50(&System_Func_HoldReinforcementsData__bool__TypeInfo);
    sub_21FFC50(&HoldReinforcementsData_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_HoldReinforcementsData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass187_0__SaveHoldReinforcements_b__0__);
    sub_21FFC50(&WarBoardData___c__DisplayClass187_0_TypeInfo);
    byte_593601F = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v7 = (WarBoardData___c__DisplayClass187_0_o *)sub_21FFEBC(WarBoardData___c__DisplayClass187_0_TypeInfo);
  WarBoardData___c__DisplayClass187_0___ctor(v7, 0);
  if ( !v7 )
    goto LABEL_20;
  reinforcementsSaveList = (System_Collections_Generic_List_T__o *)this->fields.reinforcementsSaveList;
  v7->fields.stageReinforcementsId = stageReinforcementsId;
  v7->fields.index = index;
  v11 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_HoldReinforcementsData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_WarBoardData___c__DisplayClass187_0__SaveHoldReinforcements_b__0__,
    0);
  if ( !BasicHelper__Any_object_(
          reinforcementsSaveList,
          (System_Func_T__bool__o *)v11,
          (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_HoldReinforcementsData___) )
  {
    v13 = v7->fields.stageReinforcementsId;
    v14 = v7->fields.index;
    v15 = (HoldReinforcementsData_o *)sub_21FFEBC(HoldReinforcementsData_TypeInfo);
    HoldReinforcementsData___ctor_45037260(v15, v13, v14, 1, 0);
    v8 = (System_Collections_Generic_List_object__o *)this->fields.reinforcementsSaveList;
    if ( v8 )
    {
      items = v8->fields._items;
      v23 = Method_System_Collections_Generic_List_HoldReinforcementsData__Add__;
      ++v8->fields._version;
      if ( items )
      {
        size = v8->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            (Il2CppObject *)v15,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v15;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v25 + 4), (int32_t)v15, v16, v17, v18, v19, v20, v21);
        }
        return;
      }
    }
LABEL_20:
    sub_21FFECC(v8, v9);
  }
  v8 = (System_Collections_Generic_List_object__o *)this->fields.reinforcementsSaveList;
  if ( !v8 )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    v8,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__) )
  {
    if ( !v26.fields._current )
      sub_21FFECC(0, v12);
    if ( *(_DWORD *)((char *)&v26.fields._current->klass + (unsigned __int64)&word_10) == v7->fields.stageReinforcementsId
      && *(_DWORD *)((char *)&v26.fields._current->klass + (unsigned __int64)&dword_14) == v7->fields.index )
    {
      HoldReinforcementsData__IncreaseHoldNum((HoldReinforcementsData_o *)v26.fields._current, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardData__SavePlayReinforcements(
        WarBoardData_o *this,
        int32_t stageReinforcementsId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *playedStageReinforcementsList; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v7; // x9
  __int64 size; // x10

  if ( (byte_593601D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    byte_593601D = 1;
  }
  playedStageReinforcementsList = this->fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList
    || (items = playedStageReinforcementsList->fields._items,
        v7 = Method_System_Collections_Generic_List_int__Add__,
        ++playedStageReinforcementsList->fields._version,
        !items) )
  {
    sub_21FFECC(playedStageReinforcementsList, *(_QWORD *)&stageReinforcementsId);
  }
  size = playedStageReinforcementsList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      playedStageReinforcementsList,
      stageReinforcementsId,
      *(const MethodInfo_4433138 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
  }
  else
  {
    playedStageReinforcementsList->fields._size = size + 1;
    items->m_Items[size] = stageReinforcementsId;
  }
}


void WarBoardData__SearchInRangeSquares(
        WarBoardData_o *this,
        int32_t start,
        int32_t range,
        System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o **rangeSearches,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass125_0_o *v8; // x21
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  WarBoardSquareData_o *Square; // x0
  System_Func_WarBoardData_SquareRangeSearch__bool__c **v13; // x26
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *v14; // x24
  WarBoardSquareData_o *v15; // x22
  System_Collections_Generic_List_object__o *v16; // x24
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Func_object__bool__o *v23; // x25
  System_Collections_Generic_List_object__o *v24; // x24
  int32_t v25; // w26
  WarBoardData_SquareRangeSearch_o *v26; // x25
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  struct System_Int32_array *linkedSquares; // x8
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v39; // x28
  __int64 v40; // x29
  __int64 v41; // x24
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  __int64 v48; // x23
  struct System_Int32_array *v49; // x8
  System_Func_WarBoardData_SquareRangeSearch__bool__c *v50; // x0
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *v51; // x25
  System_Func_WarBoardData_SquareRangeSearch__bool__c **v52; // x20
  System_Func_object__bool__o *v53; // x26
  const MethodInfo *v54; // x4
  System_Collections_Generic_List_T__o *v55; // x25
  System_Func_object__bool__o *v56; // x26
  struct System_Int32_array *v57; // x8

  if ( (byte_5935FF6 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_WarBoardData_SquareRangeSearch___);
    sub_21FFC50(&Method_System_Linq_Enumerable_All_WarBoardData_SquareRangeSearch___);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardData_SquareRangeSearch___);
    sub_21FFC50(&System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardData_SquareRangeSearch__TypeInfo);
    sub_21FFC50(&WarBoardData_SquareRangeSearch_TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass125_0__SearchInRangeSquares_b__0__);
    sub_21FFC50(&WarBoardData___c__DisplayClass125_0_TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__1__);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__2__);
    sub_21FFC50(&WarBoardData___c__DisplayClass125_1_TypeInfo);
    byte_5935FF6 = 1;
  }
  v8 = (WarBoardData___c__DisplayClass125_0_o *)sub_21FFEBC(WarBoardData___c__DisplayClass125_0_TypeInfo);
  WarBoardData___c__DisplayClass125_0___ctor(v8, 0);
  if ( !v8 )
    goto LABEL_29;
  v8->fields.start = start;
  Square = WarBoardData__GetSquare(this, start, v11);
  if ( Square )
  {
    v13 = &System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo;
    v14 = *rangeSearches;
    v15 = Square;
    if ( !*rangeSearches )
    {
      v16 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardData_SquareRangeSearch__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v16,
        (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch___ctor__);
      *rangeSearches = (System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *)v16;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)rangeSearches, (int32_t)v16, v17, v18, v19, v20, v21, v22);
      v14 = *rangeSearches;
    }
    v23 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v23,
      (Il2CppObject *)v8,
      Method_WarBoardData___c__DisplayClass125_0__SearchInRangeSquares_b__0__,
      0);
    v9 = System_Linq_Enumerable__FirstOrDefault_object__59044732(
           (System_Collections_Generic_IEnumerable_TSource__o *)v14,
           (System_Func_TSource__bool__o *)v23,
           (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardData_SquareRangeSearch___);
    if ( v9 )
    {
      HIDWORD(v9[1].klass) = range;
    }
    else
    {
      v24 = (System_Collections_Generic_List_object__o *)*rangeSearches;
      v25 = v8->fields.start;
      v26 = (WarBoardData_SquareRangeSearch_o *)sub_21FFEBC(WarBoardData_SquareRangeSearch_TypeInfo);
      WarBoardData_SquareRangeSearch___ctor(v26, v25, range, 0);
      if ( !v24 )
        goto LABEL_29;
      items = v24->fields._items;
      v34 = Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch__Add__;
      ++v24->fields._version;
      if ( !items )
        goto LABEL_29;
      size = v24->fields._size;
      v13 = &System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v24,
          (Il2CppObject *)v26,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &items->obj.klass + size;
        v24->fields._size = size + 1;
        v36[4] = (Il2CppClass *)v26;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v36 + 4), (int32_t)v26, v27, v28, v29, v30, v31, v32);
      }
    }
    v8->fields.nextRange = range - 1;
    if ( range - 1 >= 0 )
    {
      linkedSquares = v15->fields.linkedSquares;
      if ( !linkedSquares )
        goto LABEL_29;
      max_length = linkedSquares->max_length;
      if ( (int)max_length >= 1 )
      {
        v39 = 0;
        v40 = (unsigned int)max_length;
        while ( 1 )
        {
          v41 = sub_21FFEBC(WarBoardData___c__DisplayClass125_1_TypeInfo);
          WarBoardData___c__DisplayClass125_1___ctor((WarBoardData___c__DisplayClass125_1_o *)v41, 0);
          if ( !v41 )
            break;
          *(_QWORD *)(v41 + 24) = v8;
          v48 = v41 + 24;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v41 + 24), (int32_t)v8, v42, v43, v44, v45, v46, v47);
          v49 = v15->fields.linkedSquares;
          if ( !v49 )
            break;
          if ( v39 >= LODWORD(v49->max_length) )
            goto LABEL_30;
          v50 = *v13;
          v51 = *rangeSearches;
          v52 = v13;
          *(_DWORD *)(v41 + 16) = v49->m_Items[v39];
          v53 = (System_Func_object__bool__o *)sub_21FFEBC(v50);
          System_Func_object__bool____ctor(
            v53,
            (Il2CppObject *)v41,
            Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__1__,
            0);
          v9 = (Il2CppObject *)System_Linq_Enumerable__All_object_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)v51,
                                 (System_Func_TSource__bool__o *)v53,
                                 (const MethodInfo_3831808 *)Method_System_Linq_Enumerable_All_WarBoardData_SquareRangeSearch___);
          if ( ((unsigned __int8)v9 & 1) != 0
            || (v55 = (System_Collections_Generic_List_T__o *)*rangeSearches,
                v56 = (System_Func_object__bool__o *)sub_21FFEBC(*v52),
                System_Func_object__bool____ctor(
                  v56,
                  (Il2CppObject *)v41,
                  Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__2__,
                  0),
                v9 = (Il2CppObject *)BasicHelper__Any_object_(
                                       v55,
                                       (System_Func_T__bool__o *)v56,
                                       (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_WarBoardData_SquareRangeSearch___),
                ((unsigned __int8)v9 & 1) != 0) )
          {
            v57 = v15->fields.linkedSquares;
            if ( !v57 )
              break;
            if ( v39 >= LODWORD(v57->max_length) )
LABEL_30:
              sub_21FFED4(v9);
            if ( !*(_QWORD *)v48 )
              break;
            WarBoardData__SearchInRangeSquares(
              this,
              v57->m_Items[v39],
              *(_DWORD *)(*(_QWORD *)v48 + 20LL),
              rangeSearches,
              v54);
          }
          ++v39;
          v13 = v52;
          if ( v40 == v39 )
            return;
        }
LABEL_29:
        sub_21FFECC(v9, v10);
      }
    }
  }
}


int32_t WarBoardData__SearchNearestEmptySquare(
        WarBoardData_o *this,
        int32_t destination,
        int32_t current,
        System_Func_WarBoardPieceData__bool__o *checkReplaceFunc,
        const MethodInfo *method)
{
  System_Collections_Generic_Queue_int__o *v9; // x21
  WarBoardPieceData_o *Piece_44763860; // x0
  __int64 v11; // x1
  System_Collections_Generic_HashSet_int__o *v12; // x23
  const MethodInfo *v13; // x2
  WarBoardSquareData_o *Square; // x0
  const MethodInfo *v15; // x2
  WarBoardSquareData_o *v16; // x24
  WarBoardPieceData_o *v17; // x25
  struct System_Int32_array *linkedSquares; // x24
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v20; // x25
  int32_t v21; // w22

  if ( (byte_5935FF7 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Queue_int__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_Queue_int__Dequeue__);
    sub_21FFC50(&Method_System_Collections_Generic_Queue_int__Enqueue__);
    sub_21FFC50(&Method_System_Collections_Generic_Queue_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Queue_int__get_Count__);
    sub_21FFC50(&System_Collections_Generic_Queue_int__TypeInfo);
    byte_5935FF7 = 1;
  }
  if ( destination != current )
  {
    v9 = (System_Collections_Generic_Queue_int__o *)sub_21FFEBC(System_Collections_Generic_Queue_int__TypeInfo);
    System_Collections_Generic_Queue_int____ctor(
      v9,
      (const MethodInfo_469DF54 *)Method_System_Collections_Generic_Queue_int___ctor__);
    if ( !v9 )
LABEL_24:
      sub_21FFECC(Piece_44763860, v11);
    System_Collections_Generic_Queue_int___Enqueue(
      v9,
      destination,
      (const MethodInfo_469E4D8 *)Method_System_Collections_Generic_Queue_int__Enqueue__);
    v12 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v12,
      (const MethodInfo_4280264 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    if ( v9->fields._size >= 1 )
    {
      do
      {
        destination = System_Collections_Generic_Queue_int___Dequeue(
                        v9,
                        (const MethodInfo_469E654 *)Method_System_Collections_Generic_Queue_int__Dequeue__);
        Square = WarBoardData__GetSquare(this, destination, v13);
        if ( !Square )
          break;
        v16 = Square;
        Piece_44763860 = WarBoardData__GetPiece_44763860(this, destination, v15);
        if ( !Piece_44763860 )
          return destination;
        if ( !checkReplaceFunc )
          goto LABEL_24;
        v17 = Piece_44763860;
        Piece_44763860 = (WarBoardPieceData_o *)((__int64 (__fastcall *)(intptr_t, WarBoardPieceData_o *, intptr_t))checkReplaceFunc->fields.invoke_impl)(
                                                  checkReplaceFunc->fields.method_code,
                                                  Piece_44763860,
                                                  checkReplaceFunc->fields.method);
        if ( ((unsigned __int8)Piece_44763860 & 1) != 0 )
        {
          WarBoardPieceData__SetSquareIndex(v17, -1, 0);
          return destination;
        }
        if ( !v12 )
          goto LABEL_24;
        Piece_44763860 = (WarBoardPieceData_o *)System_Collections_Generic_HashSet_int___Add(
                                                  v12,
                                                  destination,
                                                  (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
        linkedSquares = v16->fields.linkedSquares;
        if ( !linkedSquares )
          goto LABEL_24;
        max_length = linkedSquares->max_length;
        if ( (int)max_length >= 1 )
        {
          v20 = 0;
          do
          {
            if ( v20 >= (unsigned int)max_length )
              sub_21FFED4(Piece_44763860);
            v21 = linkedSquares->m_Items[v20];
            Piece_44763860 = (WarBoardPieceData_o *)System_Collections_Generic_HashSet_int___Contains(
                                                      v12,
                                                      v21,
                                                      (const MethodInfo_4280968 *)Method_System_Collections_Generic_HashSet_int__Contains__);
            if ( ((unsigned __int8)Piece_44763860 & 1) == 0 )
            {
              Piece_44763860 = (WarBoardPieceData_o *)System_Collections_Generic_Queue_int___Contains(
                                                        v9,
                                                        v21,
                                                        (const MethodInfo_469E7D8 *)Method_System_Collections_Generic_Queue_int__Contains__);
              if ( ((unsigned __int8)Piece_44763860 & 1) == 0 )
                System_Collections_Generic_Queue_int___Enqueue(
                  v9,
                  v21,
                  (const MethodInfo_469E4D8 *)Method_System_Collections_Generic_Queue_int__Enqueue__);
            }
            LODWORD(max_length) = linkedSquares->max_length;
            ++v20;
          }
          while ( (__int64)v20 < (int)max_length );
        }
      }
      while ( v9->fields._size > 0 );
    }
    return -1;
  }
  return destination;
}


void WarBoardData__SetBgAnimationInfo(
        WarBoardData_o *this,
        System_String_o *objectName,
        System_String_o *animName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *bgAnimationInfo_k__BackingField; // x0

  if ( (byte_593602A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    byte_593602A = 1;
  }
  bgAnimationInfo_k__BackingField = this->fields._bgAnimationInfo_k__BackingField;
  if ( !bgAnimationInfo_k__BackingField )
    sub_21FFECC(0, objectName);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)bgAnimationInfo_k__BackingField,
    (Il2CppObject *)objectName,
    (Il2CppObject *)animName,
    (const MethodInfo_3FCA454 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
}


void WarBoardData__SetContinue(WarBoardData_o *this, const MethodInfo *method)
{
  WarBoardPieceData_array *PlayerPieces; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  WarBoardData___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x20
  struct WarBoardData___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__82_0; // x21
  Il2CppObject *v10; // x22
  struct WarBoardData___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Object_array *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  WarBoardData___c_c *v22; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x20
  struct WarBoardData___c_StaticFields *v24; // x9
  System_Func_object__object__o *_9__82_1; // x21
  Il2CppObject *v26; // x22
  struct WarBoardData___c_StaticFields *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_Collections_Generic_IEnumerable_T__o *v34; // x0
  System_Collections_Generic_IEnumerable_T__o *v35; // x0
  System_Object_array *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  WarBoardData___c_c *v39; // x8
  BattleServantData_array *v40; // x21
  struct WarBoardData___c_StaticFields *v41; // x9
  System_Func_object__bool__o *_9__82_2; // x22
  Il2CppObject *v43; // x23
  struct WarBoardData___c_StaticFields *v44; // x0
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x0
  __int64 v52; // x1
  __int64 v53; // x2
  WarBoardData___c_c *v54; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x22
  struct WarBoardData___c_StaticFields *v56; // x9
  System_Func_object__int__o *_9__82_3; // x23
  Il2CppObject *v58; // x24
  struct WarBoardData___c_StaticFields *v59; // x0
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  System_Collections_Generic_IEnumerable_T__o *v66; // x23
  System_Collections_Generic_HashSet_int__o *v67; // x22
  BattleData_o *Instance; // x0
  __int64 v69; // x1
  __int64 v70; // x1
  __int64 v71; // x2
  WarBoardData___c_c *v72; // x0
  struct WarBoardData___c_StaticFields *v73; // x8
  System_Action_object__o *_9__82_4; // x21
  Il2CppObject *v75; // x22
  struct WarBoardData___c_StaticFields *v76; // x0
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  struct WarBoardItemData_array *items; // x19
  int max_length; // w8
  __int64 v85; // x20

  if ( (byte_5935FD9 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_WarBoardPieceData__TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ExcludeNull_BattleServantData___);
    sub_21FFC50(&Method_BasicHelper_ForEach_WarBoardPieceData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderBy_WarBoardPieceData__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__BattleServantData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_21FFC50(&System_Func_WarBoardPieceData__BattleServantData__TypeInfo);
    sub_21FFC50(&System_Func_WarBoardPieceData__int__TypeInfo);
    sub_21FFC50(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int___ctor___91404032);
    sub_21FFC50(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&Method_WarBoardData___c__SetContinue_b__82_0__);
    sub_21FFC50(&Method_WarBoardData___c__SetContinue_b__82_1__);
    sub_21FFC50(&Method_WarBoardData___c__SetContinue_b__82_2__);
    sub_21FFC50(&Method_WarBoardData___c__SetContinue_b__82_3__);
    sub_21FFC50(&Method_WarBoardData___c__SetContinue_b__82_4__);
    sub_21FFC50(&WarBoardData___c_TypeInfo);
    byte_5935FD9 = 1;
  }
  PlayerPieces = WarBoardData__GetPlayerPieces(this, method);
  v6 = WarBoardData___c_TypeInfo;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)PlayerPieces;
  if ( !*(&WarBoardData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, v4, v5);
    v6 = WarBoardData___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__82_0 = (System_Func_object__int__o *)static_fields->__9__82_0;
  if ( !_9__82_0 )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, v4, v5);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__82_0 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_WarBoardPieceData__int__TypeInfo);
    System_Func_object__int____ctor(_9__82_0, v10, Method_WarBoardData___c__SetContinue_b__82_0__, 0);
    v11 = WarBoardData___c_TypeInfo->static_fields;
    v11->__9__82_0 = (struct System_Func_WarBoardPieceData__int__o *)_9__82_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v11->__9__82_0, (int32_t)_9__82_0, v12, v13, v14, v15, v16, v17);
  }
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v7,
                                                               (System_Func_TSource__TKey__o *)_9__82_0,
                                                               (const MethodInfo_38556D8 *)Method_System_Linq_Enumerable_OrderBy_WarBoardPieceData__int___);
  v19 = System_Linq_Enumerable__ToArray_object_(
          v18,
          (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
  v22 = WarBoardData___c_TypeInfo;
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)v19;
  if ( !*(&WarBoardData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, v20, v21);
    v22 = WarBoardData___c_TypeInfo;
  }
  v24 = v22->static_fields;
  _9__82_1 = (System_Func_object__object__o *)v24->__9__82_1;
  if ( !_9__82_1 )
  {
    if ( !*(&v22->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v22, v20, v21);
      v24 = WarBoardData___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)v24->__9;
    _9__82_1 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_WarBoardPieceData__BattleServantData__TypeInfo);
    System_Func_object__object____ctor(_9__82_1, v26, Method_WarBoardData___c__SetContinue_b__82_1__, 0);
    v27 = WarBoardData___c_TypeInfo->static_fields;
    v27->__9__82_1 = (struct System_Func_WarBoardPieceData__BattleServantData__o *)_9__82_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v27->__9__82_1, (int32_t)_9__82_1, v28, v29, v30, v31, v32, v33);
  }
  v34 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                         v23,
                                                         (System_Func_TSource__TResult__o *)_9__82_1,
                                                         (const MethodInfo_385DD00 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__BattleServantData___);
  v35 = BasicHelper__ExcludeNull_object_(
          v34,
          (const MethodInfo_37DD3BC *)Method_BasicHelper_ExcludeNull_BattleServantData___);
  v36 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v35,
          (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  v39 = WarBoardData___c_TypeInfo;
  v40 = (BattleServantData_array *)v36;
  if ( !*(&WarBoardData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, v37, v38);
    v39 = WarBoardData___c_TypeInfo;
  }
  v41 = v39->static_fields;
  _9__82_2 = (System_Func_object__bool__o *)v41->__9__82_2;
  if ( !_9__82_2 )
  {
    if ( !*(&v39->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v39, v37, v38);
      v41 = WarBoardData___c_TypeInfo->static_fields;
    }
    v43 = (Il2CppObject *)v41->__9;
    _9__82_2 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__82_2, v43, Method_WarBoardData___c__SetContinue_b__82_2__, 0);
    v44 = WarBoardData___c_TypeInfo->static_fields;
    v44->__9__82_2 = (struct System_Func_WarBoardPieceData__bool__o *)_9__82_2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v44->__9__82_2, (int32_t)_9__82_2, v45, v46, v47, v48, v49, v50);
  }
  v51 = System_Linq_Enumerable__Where_object_(
          v23,
          (System_Func_TSource__bool__o *)_9__82_2,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  v54 = WarBoardData___c_TypeInfo;
  v55 = v51;
  if ( !*(&WarBoardData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, v52, v53);
    v54 = WarBoardData___c_TypeInfo;
  }
  v56 = v54->static_fields;
  _9__82_3 = (System_Func_object__int__o *)v56->__9__82_3;
  if ( !_9__82_3 )
  {
    if ( !*(&v54->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v54, v52, v53);
      v56 = WarBoardData___c_TypeInfo->static_fields;
    }
    v58 = (Il2CppObject *)v56->__9;
    _9__82_3 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_WarBoardPieceData__int__TypeInfo);
    System_Func_object__int____ctor(_9__82_3, v58, Method_WarBoardData___c__SetContinue_b__82_3__, 0);
    v59 = WarBoardData___c_TypeInfo->static_fields;
    v59->__9__82_3 = (struct System_Func_WarBoardPieceData__int__o *)_9__82_3;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v59->__9__82_3, (int32_t)_9__82_3, v60, v61, v62, v63, v64, v65);
  }
  v66 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                         v55,
                                                         (System_Func_TSource__TResult__o *)_9__82_3,
                                                         (const MethodInfo_385D394 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___);
  v67 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_69731156(
    v67,
    v66,
    (const MethodInfo_4280354 *)Method_System_Collections_Generic_HashSet_int___ctor___91404032);
  Instance = (BattleData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (BattleData_o *)Instance->fields.freshBuffDataList;
  if ( !Instance )
    goto LABEL_42;
  BattleData__ProcContinue(Instance, v40, v67, 0);
  v72 = WarBoardData___c_TypeInfo;
  if ( !*(&WarBoardData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, v70, v71);
    v72 = WarBoardData___c_TypeInfo;
  }
  v73 = v72->static_fields;
  _9__82_4 = (System_Action_object__o *)v73->__9__82_4;
  if ( !_9__82_4 )
  {
    if ( !*(&v72->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v72, v70, v71);
      v73 = WarBoardData___c_TypeInfo->static_fields;
    }
    v75 = (Il2CppObject *)v73->__9;
    _9__82_4 = (System_Action_object__o *)sub_21FFEBC(System_Action_WarBoardPieceData__TypeInfo);
    System_Action_object____ctor(_9__82_4, v75, Method_WarBoardData___c__SetContinue_b__82_4__, 0);
    v76 = WarBoardData___c_TypeInfo->static_fields;
    v76->__9__82_4 = (struct System_Action_WarBoardPieceData__o *)_9__82_4;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v76->__9__82_4, (int32_t)_9__82_4, v77, v78, v79, v80, v81, v82);
  }
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)v23,
    (System_Action_T__o *)_9__82_4,
    (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_WarBoardPieceData___);
  items = this->fields.items;
  if ( !items )
    goto LABEL_42;
  max_length = items->max_length;
  if ( max_length >= 1 )
  {
    v85 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v85 >= max_length )
        sub_21FFED4(Instance);
      Instance = (BattleData_o *)items->m_Items[v85];
      if ( !Instance )
        break;
      WarBoardItemData__ResetItem((WarBoardItemData_o *)Instance, 0);
      max_length = items->max_length;
      if ( (int)++v85 >= max_length )
        return;
    }
LABEL_42:
    sub_21FFECC(Instance, v69);
  }
}


void WarBoardData__SetPlayerMasterUserEquip(WarBoardData_o *this, int64_t userEquipId, const MethodInfo *method)
{
  WarBoardData___c_c *v5; // x0
  System_Object_array *pieces; // x20
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Predicate_object__o *_9__144_0; // x21
  Il2CppObject *v9; // x22
  struct WarBoardData___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  Il2CppObject *object; // x0

  if ( (byte_5936002 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Find_WarBoardPieceData___);
    sub_21FFC50(&System_Predicate_WarBoardPieceData__TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__SetPlayerMasterUserEquip_b__144_0__);
    sub_21FFC50(&WarBoardData___c_TypeInfo);
    byte_5936002 = 1;
  }
  v5 = WarBoardData___c_TypeInfo;
  pieces = (System_Object_array *)this->fields.pieces;
  if ( !*(&WarBoardData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, userEquipId, method);
    v5 = WarBoardData___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__144_0 = (System_Predicate_object__o *)static_fields->__9__144_0;
  if ( !_9__144_0 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, userEquipId, method);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__144_0 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_WarBoardPieceData__TypeInfo);
    System_Predicate_object____ctor(_9__144_0, v9, Method_WarBoardData___c__SetPlayerMasterUserEquip_b__144_0__, 0);
    v10 = WarBoardData___c_TypeInfo->static_fields;
    v10->__9__144_0 = (struct System_Predicate_WarBoardPieceData__o *)_9__144_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v10->__9__144_0, (int32_t)_9__144_0, v11, v12, v13, v14, v15, v16);
  }
  object = System_Array__Find_object_(
             pieces,
             (System_Predicate_T__o *)_9__144_0,
             (const MethodInfo_39772EC *)Method_System_Array_Find_WarBoardPieceData___);
  if ( object )
    WarBoardPieceData__SetMasterEquip((WarBoardPieceData_o *)object, userEquipId, 0);
}


void WarBoardData__SetRequest(WarBoardData_o *this, RequestBase_o *request, const MethodInfo *method)
{
  WarBoardData___c_c *v5; // x0
  System_Collections_Generic_IEnumerable_T__o *pieces; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__156_0; // x22
  Il2CppObject *v9; // x23
  struct WarBoardData___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  Il2CppObject *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  struct WarBoardDataEntity_o *serverData; // x8
  Il2CppObject *p_obj; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  System_Byte_array *v24; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  System_Byte_array *v27; // x21
  System_String_o *v28; // x0
  struct WarBoardDataEntity_o *v29; // x8
  Il2CppObject *v30; // x0
  System_Byte_array *v31; // x0
  System_Byte_array *v32; // x0
  System_String_o *v33; // x0
  __int64 v34; // x2
  System_Collections_Generic_IEnumerable_TSource__o *items; // x23
  WarBoardData___c_c *v36; // x0
  struct WarBoardData___c_StaticFields *v37; // x8
  System_String_o *v38; // x22
  System_String_o *v39; // x21
  System_Func_object__object__o *_9__156_1; // x24
  Il2CppObject *v41; // x25
  struct WarBoardData___c_StaticFields *v42; // x0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  System_Collections_Generic_IEnumerable_TResult__o *v49; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  WarBoardData___c_c *v52; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x23
  struct WarBoardData___c_StaticFields *v54; // x9
  System_Func_object__bool__o *_9__156_2; // x24
  Il2CppObject *v56; // x25
  struct WarBoardData___c_StaticFields *v57; // x0
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x0
  System_String_array *v65; // x0
  Il2CppObject *v66; // x0
  Il2CppObject *v67; // x0
  __int64 v68; // x1
  __int64 v69; // x2
  System_Byte_array *v70; // x21
  __int64 v71; // x1
  __int64 v72; // x2
  System_Byte_array *v73; // x21
  System_Convert_c *v74; // x8
  System_String_o *v75; // x0
  __int64 v76; // x2
  struct WarBoardDataEntity_o *v77; // x8
  Il2CppObject *v78; // x21
  Il2CppObject *v79; // x0
  __int64 v80; // x1
  __int64 v81; // x2
  System_Byte_array *v82; // x21
  __int64 v83; // x1
  __int64 v84; // x2
  System_Byte_array *v85; // x21
  System_String_o *v86; // x0
  struct WarBoardDataEntity_o *v87; // x8
  Il2CppObject *v88; // x0
  System_Byte_array *v89; // x0
  System_Byte_array *v90; // x0
  System_String_o *v91; // x0
  struct WarBoardDataEntity_o *v92; // x8
  Il2CppObject *v93; // x0
  System_Byte_array *v94; // x0
  System_Byte_array *v95; // x0
  System_String_o *v96; // x2
  __int64 v97; // x1
  __int64 v98; // x2
  System_Byte_array *v99; // x21
  System_Byte_array *v100; // x0

  if ( (byte_593600B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_WarBoardPieceData__TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_WarBoardPieceData___);
    sub_21FFC50(&CatAndMouseGame_TypeInfo);
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_WarBoardItemData__string___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_string___);
    sub_21FFC50(&System_Func_WarBoardItemData__string__TypeInfo);
    sub_21FFC50(&System_Func_string__bool__TypeInfo);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__SetRequest_b__156_0__);
    sub_21FFC50(&Method_WarBoardData___c__SetRequest_b__156_1__);
    sub_21FFC50(&Method_WarBoardData___c__SetRequest_b__156_2__);
    sub_21FFC50(&WarBoardData___c_TypeInfo);
    sub_21FFC50(&StringLiteral_18071/*"bossBattleInfo"*/);
    sub_21FFC50(&StringLiteral_25093/*"svtInfo"*/);
    sub_21FFC50(&StringLiteral_22505/*"masterInfo"*/);
    sub_21FFC50(&StringLiteral_26046/*"wallInfo"*/);
    sub_21FFC50(&StringLiteral_23418/*"null"*/);
    sub_21FFC50(&StringLiteral_24835/*"squareIndexInfo"*/);
    sub_21FFC50(&StringLiteral_20689/*"getItemInfo"*/);
    sub_21FFC50(&StringLiteral_869/*","*/);
    sub_21FFC50(&StringLiteral_16616/*"[{0}]"*/);
    byte_593600B = 1;
  }
  v5 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_T__o *)this->fields.pieces;
  if ( !*(&WarBoardData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, request, method);
    v5 = WarBoardData___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__156_0 = (System_Action_object__o *)static_fields->__9__156_0;
  if ( !_9__156_0 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, request, method);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__156_0 = (System_Action_object__o *)sub_21FFEBC(System_Action_WarBoardPieceData__TypeInfo);
    System_Action_object____ctor(_9__156_0, v9, Method_WarBoardData___c__SetRequest_b__156_0__, 0);
    v10 = WarBoardData___c_TypeInfo->static_fields;
    v10->__9__156_0 = (struct System_Action_WarBoardPieceData__o *)_9__156_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v10->__9__156_0, (int32_t)_9__156_0, v11, v12, v13, v14, v15, v16);
  }
  BasicHelper__ForEach_object_(
    pieces,
    (System_Action_T__o *)_9__156_0,
    (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_WarBoardPieceData___);
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_50;
  p_obj = &serverData->fields.svtInfo->obj;
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v18, v19);
  v17 = (Il2CppObject *)JsonManager__toJson(p_obj, 0, 0, 0);
  if ( !request )
    goto LABEL_50;
  v24 = RequestBase__PackToMessagePack(request, v17, 0);
  if ( !*(&CatAndMouseGame_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v22, v23);
  v27 = CatAndMouseGame__CatGame5Bytes(v24, 0);
  if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v25, v26);
  v28 = System_Convert__ToBase64String(v27, 0);
  RequestBase__addField_51187332(request, (System_String_o *)StringLiteral_25093/*"svtInfo"*/, v28, 0);
  v29 = this->fields.serverData;
  if ( !v29
    || (v30 = (Il2CppObject *)JsonManager__toJson(&v29->fields.masterInfo->obj, 0, 0, 0),
        v31 = RequestBase__PackToMessagePack(request, v30, 0),
        v32 = CatAndMouseGame__CatGame5Bytes(v31, 0),
        v33 = System_Convert__ToBase64String(v32, 0),
        RequestBase__addField_51187332(request, (System_String_o *)StringLiteral_22505/*"masterInfo"*/, v33, 0),
        (items = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.items) == 0) )
  {
LABEL_50:
    sub_21FFECC(v17, v18);
  }
  if ( items[1].monitor )
  {
    v36 = WarBoardData___c_TypeInfo;
    if ( !*(&WarBoardData___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, v18, v34);
      v36 = WarBoardData___c_TypeInfo;
    }
    v37 = v36->static_fields;
    v38 = (System_String_o *)StringLiteral_869/*","*/;
    v39 = (System_String_o *)StringLiteral_16616/*"[{0}]"*/;
    _9__156_1 = (System_Func_object__object__o *)v37->__9__156_1;
    if ( !_9__156_1 )
    {
      if ( !*(&v36->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v36, v18, v34);
        v37 = WarBoardData___c_TypeInfo->static_fields;
      }
      v41 = (Il2CppObject *)v37->__9;
      _9__156_1 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_WarBoardItemData__string__TypeInfo);
      System_Func_object__object____ctor(_9__156_1, v41, Method_WarBoardData___c__SetRequest_b__156_1__, 0);
      v42 = WarBoardData___c_TypeInfo->static_fields;
      v42->__9__156_1 = (struct System_Func_WarBoardItemData__string__o *)_9__156_1;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v42->__9__156_1,
        (int32_t)_9__156_1,
        v43,
        v44,
        v45,
        v46,
        v47,
        v48);
    }
    v49 = System_Linq_Enumerable__Select_object__object_(
            items,
            (System_Func_TSource__TResult__o *)_9__156_1,
            (const MethodInfo_385DD00 *)Method_System_Linq_Enumerable_Select_WarBoardItemData__string___);
    v52 = WarBoardData___c_TypeInfo;
    v53 = (System_Collections_Generic_IEnumerable_TSource__o *)v49;
    if ( !*(&WarBoardData___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, v50, v51);
      v52 = WarBoardData___c_TypeInfo;
    }
    v54 = v52->static_fields;
    _9__156_2 = (System_Func_object__bool__o *)v54->__9__156_2;
    if ( !_9__156_2 )
    {
      if ( !*(&v52->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v52, v50, v51);
        v54 = WarBoardData___c_TypeInfo->static_fields;
      }
      v56 = (Il2CppObject *)v54->__9;
      _9__156_2 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_string__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__156_2, v56, Method_WarBoardData___c__SetRequest_b__156_2__, 0);
      v57 = WarBoardData___c_TypeInfo->static_fields;
      v57->__9__156_2 = (struct System_Func_string__bool__o *)_9__156_2;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v57->__9__156_2,
        (int32_t)_9__156_2,
        v58,
        v59,
        v60,
        v61,
        v62,
        v63);
    }
    v64 = System_Linq_Enumerable__Where_object_(
            v53,
            (System_Func_TSource__bool__o *)_9__156_2,
            (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_string___);
    v65 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                   v64,
                                   (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_string___);
    v66 = (Il2CppObject *)System_String__Join(v38, v65, 0);
    v67 = (Il2CppObject *)System_String__Format(v39, v66, 0);
    v70 = RequestBase__PackToMessagePack(request, v67, 0);
    if ( !*(&CatAndMouseGame_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v68, v69);
    v73 = CatAndMouseGame__CatGame5Bytes(v70, 0);
    v74 = System_Convert_TypeInfo;
    if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
LABEL_35:
      j_il2cpp_runtime_class_init_0(v74, v71, v72);
  }
  else
  {
    v99 = RequestBase__PackToMessagePack(request, (Il2CppObject *)StringLiteral_23418/*"null"*/, 0);
    if ( !*(&CatAndMouseGame_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v97, v98);
    v100 = CatAndMouseGame__CatGame5Bytes(v99, 0);
    v74 = System_Convert_TypeInfo;
    v73 = v100;
    if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
      goto LABEL_35;
  }
  v75 = System_Convert__ToBase64String(v73, 0);
  RequestBase__addField_51187332(request, (System_String_o *)StringLiteral_20689/*"getItemInfo"*/, v75, 0);
  v77 = this->fields.serverData;
  if ( !v77 )
    goto LABEL_50;
  v78 = &v77->fields.wallInfo->obj;
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v18, v76);
  v79 = (Il2CppObject *)JsonManager__toJson(v78, 0, 0, 0);
  v82 = RequestBase__PackToMessagePack(request, v79, 0);
  if ( !*(&CatAndMouseGame_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v80, v81);
  v85 = CatAndMouseGame__CatGame5Bytes(v82, 0);
  if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v83, v84);
  v86 = System_Convert__ToBase64String(v85, 0);
  RequestBase__addField_51187332(request, (System_String_o *)StringLiteral_26046/*"wallInfo"*/, v86, 0);
  v87 = this->fields.serverData;
  if ( !v87 )
    goto LABEL_50;
  v88 = (Il2CppObject *)JsonManager__toJson(&v87->fields.squareIndexInfo->obj, 0, 0, 0);
  v89 = RequestBase__PackToMessagePack(request, v88, 0);
  v90 = CatAndMouseGame__CatGame5Bytes(v89, 0);
  v91 = System_Convert__ToBase64String(v90, 0);
  RequestBase__addField_51187332(request, (System_String_o *)StringLiteral_24835/*"squareIndexInfo"*/, v91, 0);
  v92 = this->fields.serverData;
  if ( !v92 )
    goto LABEL_50;
  v93 = (Il2CppObject *)JsonManager__toJson(&v92->fields.bossBattleInfo->obj, 0, 0, 0);
  v94 = RequestBase__PackToMessagePack(request, v93, 0);
  v95 = CatAndMouseGame__CatGame5Bytes(v94, 0);
  v96 = System_Convert__ToBase64String(v95, 0);
  RequestBase__addField_51187332(request, (System_String_o *)StringLiteral_18071/*"bossBattleInfo"*/, v96, 0);
}


void WarBoardData__SetUiDataFromLocalData(WarBoardData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *listUiData; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x5
  Il2CppObject *current; // x25
  __int64 klass_low; // x1
  WarBoardSquareData_o *Square; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  void *pieceComponent; // x8
  _DWORD *monitor; // x8
  unsigned int v15; // w9
  WarBoardPieceData_o *Piece; // x0
  UnityEngine_Object_o *v17; // x20
  _BOOL8 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_5936029 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&WarBoardControlUiDataComponent_TypeInfo);
    byte_5936029 = 1;
  }
  listUiData = (System_Collections_Generic_List_object__o *)this->fields.listUiData;
  memset(&v23, 0, sizeof(v23));
  if ( !listUiData )
    sub_21FFECC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    listUiData,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__);
  v23 = v22;
  v22.fields._list = 0;
  *(_QWORD *)&v22.fields._index = &v23;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v23,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__);
    if ( !v4 )
      break;
    current = v23.fields._current;
    if ( !v23.fields._current )
      sub_21FFECC(v4, v5);
    klass_low = LODWORD(v23.fields._current[1].klass);
    if ( (klass_low & 0x80000000) != 0 )
    {
      monitor = v23.fields._current[1].monitor;
      if ( !monitor )
        sub_21FFECC(v4, klass_low);
      v15 = monitor[6];
      if ( !v15 )
        sub_21FFED4(v4);
      if ( v15 == 1 )
        sub_21FFED4(v4);
      if ( v15 <= 2 )
        sub_21FFED4(v4);
      Piece = WarBoardData__GetPiece(this, monitor[8], monitor[9], monitor[10], 1, v7);
      if ( Piece )
      {
        pieceComponent = Piece->fields.pieceComponent;
        if ( !pieceComponent )
          sub_21FFECC(Piece, v11);
LABEL_17:
        v17 = (UnityEngine_Object_o *)*((_QWORD *)pieceComponent + 23);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
        v18 = UnityEngine_Object__op_Equality(v17, 0, 0);
        if ( !v18 )
        {
          if ( !v17 )
            sub_21FFECC(v18, v19);
          WarBoardControlUiDataComponent__SetUiDataFromLocalData(
            (WarBoardControlUiDataComponent_o *)v17,
            (System_String_array *)current[2].klass,
            0);
        }
      }
    }
    else
    {
      Square = WarBoardData__GetSquare(this, klass_low, v6);
      if ( Square )
      {
        pieceComponent = Square->fields.squareComponent;
        if ( !pieceComponent )
          sub_21FFECC(Square, v11);
        goto LABEL_17;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__);
  if ( !*(&WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo, v20, v21);
  WarBoardControlUiDataComponent__ResumeUiDataAll(0);
}


void WarBoardData__ShowConsumedPieceActionPointPopup(
        WarBoardData_o *this,
        System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___o *consumedPieceActionPointDict,
        const MethodInfo *method)
{
  __int64 v5; // x19
  System_Collections_Generic_Dictionary_int__object__o *v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Func_bool__o *v20; // x20
  UnityEngine_WaitUntil_o *v21; // x21
  __int64 v22; // x20
  System_Delegate_o **v23; // x21
  System_Delegate_o *v24; // x22
  WarBoardTaskBase_TaskCallback_o *v25; // x23
  System_Delegate_o *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  WarBoardTaskBase_TaskCallback_c *v33; // x1
  Il2CppObject *Instance; // x19
  System_Collections_Generic_Dictionary_int__object__o *v35; // x21
  __int64 v36; // x0
  __int64 v37; // x1
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  __int64 v44; // x0

  if ( (byte_5936009 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__);
    sub_21FFC50(&System_Func_bool__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__0__);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__1__);
    sub_21FFC50(&WarBoardData___c__DisplayClass154_0_TypeInfo);
    sub_21FFC50(&UnityEngine_WaitUntil_TypeInfo);
    sub_21FFC50(&WarBoardCallbackTask_TypeInfo);
    sub_21FFC50(&WarBoardTaskBase___TypeInfo);
    byte_5936009 = 1;
  }
  v5 = sub_21FFEBC(WarBoardData___c__DisplayClass154_0_TypeInfo);
  WarBoardData___c__DisplayClass154_0___ctor((WarBoardData___c__DisplayClass154_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_18;
  *(_QWORD *)(v5 + 24) = consumedPieceActionPointDict;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)(v5 + 24),
    (int32_t)consumedPieceActionPointDict,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  *(_QWORD *)(v5 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v14, v15, v16, v17, v18, v19);
  v6 = *(System_Collections_Generic_Dictionary_int__object__o **)(v5 + 24);
  if ( !v6 )
    goto LABEL_18;
  if ( System_Collections_Generic_Dictionary_int__object___get_Count(
         v6,
         (const MethodInfo_3F689A0 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__) < 1 )
    return;
  *(_BYTE *)(v5 + 16) = 0;
  v20 = (System_Func_bool__o *)sub_21FFEBC(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v20,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__0__,
    0);
  v21 = (UnityEngine_WaitUntil_o *)sub_21FFEBC(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v21, v20, 0);
  v22 = sub_21FFEBC(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v22, (UnityEngine_CustomYieldInstruction_o *)v21, 0);
  if ( !v22 )
LABEL_18:
    sub_21FFECC(v6, v7);
  v23 = (System_Delegate_o **)(v22 + 32);
  v24 = *(System_Delegate_o **)(v22 + 32);
  v25 = (WarBoardTaskBase_TaskCallback_o *)sub_21FFEBC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v25,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__1__,
    0);
  v26 = System_Delegate__Combine(v24, (System_Delegate_o *)v25, 0);
  if ( !v26 )
  {
    *v23 = 0;
LABEL_13:
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 32), (int32_t)v26, v27, v28, v29, v30, v31, v32);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v6 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFD10(WarBoardTaskBase___TypeInfo, 1);
    if ( v6 )
    {
      v35 = v6;
      v36 = sub_21FFDA4(v22, v6->klass->_1.element_class);
      if ( !v36 )
      {
        v44 = sub_21FFEF0(0, v37);
        sub_21FFD90(v44, 0);
      }
      if ( !LODWORD(v35->fields._entries) )
        sub_21FFED4(v36);
      *(_QWORD *)&v35->fields._count = v22;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v35->fields._count, v22, v38, v39, v40, v41, v42, v43);
      if ( Instance )
      {
        WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 1, (WarBoardTaskBase_array *)v35, 0);
        return;
      }
    }
    goto LABEL_18;
  }
  v33 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v26->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    *v23 = v26;
    if ( (WarBoardTaskBase_TaskCallback_c *)v26->klass == v33 )
      goto LABEL_13;
  }
  sub_220024C(v26, v33, v27, v28);
}


System_String_o *WarBoardData__ToJson(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *serverData; // x19

  if ( (byte_593600A & 1) == 0 )
  {
    sub_21FFC50(&JsonManager_TypeInfo);
    byte_593600A = 1;
  }
  serverData = (Il2CppObject *)this->fields.serverData;
  if ( !serverData )
    return **(System_String_o ***)(qword_594C0B8 + 184);
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, method, v2);
  return JsonManager__toJson(serverData, 0, 0, 0);
}


void WarBoardData__UpdateBossInfo(
        WarBoardData_o *this,
        int32_t bossId,
        System_String_o *key,
        int32_t value,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass171_0_o *v9; // x23
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  System_Object_array *bossBattleInfo; // x21
  System_Func_object__bool__o *v14; // x22
  Il2CppObject *object; // x0
  System_Collections_Generic_Dictionary_object__object__o *monitor; // x21
  int32_t v17; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5936012 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Find_WarBoardBossBattleData___);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_21FFC50(&System_Func_WarBoardBossBattleData__bool__TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass171_0__UpdateBossInfo_b__0__);
    sub_21FFC50(&WarBoardData___c__DisplayClass171_0_TypeInfo);
    byte_5936012 = 1;
  }
  v9 = (WarBoardData___c__DisplayClass171_0_o *)sub_21FFEBC(WarBoardData___c__DisplayClass171_0_TypeInfo);
  WarBoardData___c__DisplayClass171_0___ctor(v9, 0);
  if ( !v9 )
    goto LABEL_9;
  serverData = this->fields.serverData;
  v9->fields.bossId = bossId;
  if ( !serverData )
    goto LABEL_9;
  bossBattleInfo = (System_Object_array *)serverData->fields.bossBattleInfo;
  v14 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardBossBattleData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass171_0__UpdateBossInfo_b__0__,
    0);
  object = BasicHelper__Find_object_(
             bossBattleInfo,
             (System_Func_T__bool__o *)v14,
             (const MethodInfo_37DD66C *)Method_BasicHelper_Find_WarBoardBossBattleData___);
  if ( !object )
    return;
  monitor = (System_Collections_Generic_Dictionary_object__object__o *)object[1].monitor;
  v17 = value;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v17);
  if ( !monitor )
LABEL_9:
    sub_21FFECC(v10, v11);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    monitor,
    (Il2CppObject *)key,
    v10,
    (const MethodInfo_3FCA454 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
}


void WarBoardData__UpdateBuffTurnNoticeDisp(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardData___c_c *v4; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__192_0; // x20
  Il2CppObject *v8; // x21
  MissionNaviTransitionBoardItem_o *p__9__192_0; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_IEnumerable_TResult__o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  WarBoardData___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  struct WarBoardData___c_StaticFields *v21; // x9
  System_Func_object__bool__o *_9__192_1; // x20
  Il2CppObject *v23; // x21
  MissionNaviTransitionBoardItem_o *p__9__192_1; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  WarBoardData___c_c *v34; // x8
  System_Collections_Generic_IEnumerable_T__o *v35; // x19
  struct WarBoardData___c_StaticFields *v36; // x9
  System_Action_object__o *_9__192_2; // x20
  Il2CppObject *v38; // x21
  MissionNaviTransitionBoardItem_o *p__9__192_2; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7

  if ( (byte_5936024 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_WarBoardPieceBaseComponent__TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_WarBoardPieceBaseComponent___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__WarBoardPieceBaseComponent___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_WarBoardPieceBaseComponent___);
    sub_21FFC50(&System_Func_WarBoardPieceBaseComponent__bool__TypeInfo);
    sub_21FFC50(&System_Func_WarBoardPieceData__WarBoardPieceBaseComponent__TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_0__);
    sub_21FFC50(&Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_1__);
    sub_21FFC50(&Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_2__);
    sub_21FFC50(&WarBoardData___c_TypeInfo);
    byte_5936024 = 1;
  }
  v4 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !*(&WarBoardData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, method, v2);
    v4 = WarBoardData___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__192_0 = (System_Func_object__object__o *)static_fields->__9__192_0;
  if ( !_9__192_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__192_0 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_WarBoardPieceData__WarBoardPieceBaseComponent__TypeInfo);
    System_Func_object__object____ctor(_9__192_0, v8, Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_0__, 0);
    p__9__192_0 = (MissionNaviTransitionBoardItem_o *)&WarBoardData___c_TypeInfo->static_fields->__9__192_0;
    p__9__192_0->klass = (MissionNaviTransitionBoardItem_c *)_9__192_0;
    sub_21FFBF4(p__9__192_0, (int32_t)_9__192_0, v10, v11, v12, v13, v14, v15);
  }
  v16 = System_Linq_Enumerable__Select_object__object_(
          pieces,
          (System_Func_TSource__TResult__o *)_9__192_0,
          (const MethodInfo_385DD00 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__WarBoardPieceBaseComponent___);
  v19 = WarBoardData___c_TypeInfo;
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)v16;
  if ( !*(&WarBoardData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, v17, v18);
    v19 = WarBoardData___c_TypeInfo;
  }
  v21 = v19->static_fields;
  _9__192_1 = (System_Func_object__bool__o *)v21->__9__192_1;
  if ( !_9__192_1 )
  {
    if ( !*(&v19->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v19, v17, v18);
      v21 = WarBoardData___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)v21->__9;
    _9__192_1 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardPieceBaseComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__192_1, v23, Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_1__, 0);
    p__9__192_1 = (MissionNaviTransitionBoardItem_o *)&WarBoardData___c_TypeInfo->static_fields->__9__192_1;
    p__9__192_1->klass = (MissionNaviTransitionBoardItem_c *)_9__192_1;
    sub_21FFBF4(p__9__192_1, (int32_t)_9__192_1, v25, v26, v27, v28, v29, v30);
  }
  v31 = System_Linq_Enumerable__Where_object_(
          v20,
          (System_Func_TSource__bool__o *)_9__192_1,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceBaseComponent___);
  v34 = WarBoardData___c_TypeInfo;
  v35 = (System_Collections_Generic_IEnumerable_T__o *)v31;
  if ( !*(&WarBoardData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, v32, v33);
    v34 = WarBoardData___c_TypeInfo;
  }
  v36 = v34->static_fields;
  _9__192_2 = (System_Action_object__o *)v36->__9__192_2;
  if ( !_9__192_2 )
  {
    if ( !*(&v34->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v34, v32, v33);
      v36 = WarBoardData___c_TypeInfo->static_fields;
    }
    v38 = (Il2CppObject *)v36->__9;
    _9__192_2 = (System_Action_object__o *)sub_21FFEBC(System_Action_WarBoardPieceBaseComponent__TypeInfo);
    System_Action_object____ctor(_9__192_2, v38, Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_2__, 0);
    p__9__192_2 = (MissionNaviTransitionBoardItem_o *)&WarBoardData___c_TypeInfo->static_fields->__9__192_2;
    p__9__192_2->klass = (MissionNaviTransitionBoardItem_c *)_9__192_2;
    sub_21FFBF4(p__9__192_2, (int32_t)_9__192_2, v40, v41, v42, v43, v44, v45);
  }
  BasicHelper__ForEach_object_(
    v35,
    (System_Action_T__o *)_9__192_2,
    (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_WarBoardPieceBaseComponent___);
}


void WarBoardData__UpdateCurrentPartyCost(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  const MethodInfo *v5; // x1
  WarBoardPieceData_array *EditableServantPieces; // x0
  int64_t UserServantId_k__BackingField; // x1
  long double v8; // q0
  int max_length; // w8
  WarBoardPieceData_array *v10; // x22
  unsigned int v11; // w24
  WarBoardPieceData_o *v12; // x25
  int32x2_t v13; // d0
  __int64 v14; // x8
  _QWORD *v15; // x9
  signed __int32 v16; // w10
  unsigned int v17; // w10
  __int64 v18; // x0
  __int64 v19; // x0
  UserServantEntity_array *Entities; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  WarBoardData___c_c *v23; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__143_0; // x22
  Il2CppObject *v27; // x23
  struct WarBoardData___c_StaticFields *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_Func_object__bool__o *v41; // x22

  if ( (byte_5936001 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Count_UserServantEntity____91524816);
    sub_21FFC50(&Method_System_Linq_Enumerable_Sum_UserServantEntity___);
    sub_21FFC50(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_21FFC50(&System_Func_UserServantEntity__int__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_WarBoardData___c__UpdateCurrentPartyCost_b__143_0__);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass143_0__UpdateCurrentPartyCost_b__1__);
    sub_21FFC50(&WarBoardData___c__DisplayClass143_0_TypeInfo);
    sub_21FFC50(&WarBoardData___c_TypeInfo);
    byte_5936001 = 1;
  }
  v3 = sub_21FFEBC(WarBoardData___c__DisplayClass143_0_TypeInfo);
  WarBoardData___c__DisplayClass143_0___ctor((WarBoardData___c__DisplayClass143_0_o *)v3, 0);
  v4 = sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    (System_Collections_Generic_List_long__o *)v4,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  EditableServantPieces = WarBoardData__GetEditableServantPieces(this, v5);
  if ( !EditableServantPieces )
    goto LABEL_33;
  max_length = EditableServantPieces->max_length;
  v10 = EditableServantPieces;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
        sub_21FFED4(EditableServantPieces);
      v12 = v10->m_Items[v11];
      if ( !v12 )
        break;
      if ( !v4 )
        break;
      v13.n64_u64[0] = *(unsigned __int64 *)(v4 + 24);
      v14 = *(_QWORD *)(v4 + 16);
      UserServantId_k__BackingField = v12->fields._UserServantId_k__BackingField;
      v15 = Method_System_Collections_Generic_List_long__Add__;
      *(_DWORD *)(v4 + 28) = v13.n64_u32[1] + 1;
      if ( !v14 )
        break;
      v16 = v13.n64_u32[0];
      if ( v13.n64_u32[0] >= *(_DWORD *)(v14 + 24) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          (System_Collections_Generic_List_long__o *)v4,
          UserServantId_k__BackingField,
          *(const MethodInfo_4438164 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        v17 = *(_DWORD *)(v4 + 24);
        v15 = Method_System_Collections_Generic_List_long__Add__;
        v14 = *(_QWORD *)(v4 + 16);
        UserServantId_k__BackingField = v12->fields._UserServantEquipId_k__BackingField;
        ++*(_DWORD *)(v4 + 28);
        if ( !v14 )
          break;
      }
      else
      {
        *(int32x2_t *)&v8 = vadd_s32(v13, (int32x2_t)0x200000001LL);
        *(_QWORD *)(v14 + 8LL * v16 + 32) = UserServantId_k__BackingField;
        UserServantId_k__BackingField = v12->fields._UserServantEquipId_k__BackingField;
        *(_QWORD *)(v4 + 24) = *(_QWORD *)&v8;
        v17 = LODWORD(v8);
      }
      if ( v17 >= *(_DWORD *)(v14 + 24) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          (System_Collections_Generic_List_long__o *)v4,
          UserServantId_k__BackingField,
          *(const MethodInfo_4438164 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        *(_DWORD *)(v4 + 24) = v17 + 1;
        *(_QWORD *)(v14 + 8LL * (int)v17 + 32) = UserServantId_k__BackingField;
      }
      max_length = v10->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_17;
    }
LABEL_33:
    sub_21FFECC(EditableServantPieces, UserServantId_k__BackingField);
  }
LABEL_17:
  v18 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v18 + 309) & 1) == 0 )
    v18 = sub_2237AF8(v8);
  v19 = *(_QWORD *)(*(_QWORD *)(v18 + 192) + 16LL);
  if ( (*(_WORD *)(v19 + 309) & 1) == 0 )
    v19 = sub_2237AF8(v8);
  EditableServantPieces = **(WarBoardPieceData_array ***)(v19 + 184);
  if ( !EditableServantPieces )
    goto LABEL_33;
  EditableServantPieces = (WarBoardPieceData_array *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)EditableServantPieces,
                                                       (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !EditableServantPieces )
    goto LABEL_33;
  Entities = UserServantMaster__GetEntities(
               (UserServantMaster_o *)EditableServantPieces,
               (System_Collections_Generic_List_long__o *)v4,
               0);
  v23 = WarBoardData___c_TypeInfo;
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)Entities;
  if ( !*(&WarBoardData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, v21, v22);
    v23 = WarBoardData___c_TypeInfo;
  }
  static_fields = v23->static_fields;
  _9__143_0 = (System_Func_object__int__o *)static_fields->__9__143_0;
  if ( !_9__143_0 )
  {
    if ( !*(&v23->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v23, v21, v22);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__143_0 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_UserServantEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__143_0, v27, Method_WarBoardData___c__UpdateCurrentPartyCost_b__143_0__, 0);
    v28 = WarBoardData___c_TypeInfo->static_fields;
    v28->__9__143_0 = (struct System_Func_UserServantEntity__int__o *)_9__143_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v28->__9__143_0, (int32_t)_9__143_0, v29, v30, v31, v32, v33, v34);
  }
  EditableServantPieces = (WarBoardPieceData_array *)System_Linq_Enumerable__Sum_object_(
                                                       v24,
                                                       (System_Func_TSource__int__o *)_9__143_0,
                                                       (const MethodInfo_3866AE0 *)Method_System_Linq_Enumerable_Sum_UserServantEntity___);
  if ( !this )
    goto LABEL_33;
  this->fields._CurrentPartyCost_k__BackingField = (int)EditableServantPieces;
  EditableServantPieces = (WarBoardPieceData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !EditableServantPieces )
    goto LABEL_33;
  EditableServantPieces = (WarBoardPieceData_array *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)EditableServantPieces,
                                                       (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !v3 )
    goto LABEL_33;
  *(_QWORD *)(v3 + 16) = EditableServantPieces;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)(v3 + 16),
    (int32_t)EditableServantPieces,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v41 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v41,
    (Il2CppObject *)v3,
    Method_WarBoardData___c__DisplayClass143_0__UpdateCurrentPartyCost_b__1__,
    0);
  this->fields._CurrentMemberCount_k__BackingField = System_Linq_Enumerable__Count_object__59013780(
                                                       v24,
                                                       (System_Func_TSource__bool__o *)v41,
                                                       (const MethodInfo_3847A94 *)Method_System_Linq_Enumerable_Count_UserServantEntity____91524816);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardData__UpdateFromServerData(
        WarBoardData_o *this,
        WarBoardDataEntity_o *warBoardDataEntity,
        bool forceUpdate,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  WarBoardDataEntity_o **p_serverData; // x21
  WarBoardData_o *v11; // x20
  WarBoardManager_TaskMultiList_o *v12; // x24
  WarBoardManager_TaskMultiList_o *v13; // x23
  System_Collections_Generic_List_object__o *v14; // x27
  System_Collections_Generic_List_object__o *isPlayerGroup; // x0
  const MethodInfo *v16; // x1
  struct WarBoardPieceData_array *pieces; // x25
  int max_length; // w8
  System_Collections_Generic_Dictionary_int__object__o *v19; // x20
  unsigned int v20; // w19
  WarBoardPieceData_o *v21; // x28
  WarBoardManager_TaskList_o *v22; // x29
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct WarBoardManager_TaskList_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  struct WarBoardManager_TaskList_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  __int64 v36; // x8
  System_Collections_Generic_List_object__o *v37; // x0
  int32_t ConsumedRecoverDonotActCost_k__BackingField; // w29
  System_Collections_Generic_List_object__o *v39; // x20
  Il2CppObject *v40; // x2
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  struct System_Object_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  Il2CppClass **v50; // x8
  Il2CppObject *current; // x28
  WarBoardManager_TaskList_o *v52; // x26
  __int64 v53; // x0
  __int64 v54; // x1
  int monitor; // w25
  Il2CppClass *v56; // x0
  __int64 v57; // x0
  __int64 v58; // x1
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  int monitor_high; // w27
  Il2CppClass *klass; // x0
  Il2CppClass *v67; // x0
  struct WarBoardManager_TaskList_array *v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  Il2CppClass **v71; // x0
  struct WarBoardManager_TaskList_array *v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  Il2CppClass **v75; // x0
  const MethodInfo *v76; // x2
  System_Collections_Generic_IEnumerable_T__o *v77; // x0
  System_String_o *v78; // x2
  System_String_o *v79; // x3
  int32_t v80; // w4
  int32_t v81; // w5
  bool v82; // w6
  bool v83; // w7
  struct System_Object_array *v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  System_Collections_Generic_List_object__o *v87; // x1
  Il2CppClass **v88; // x0
  WarBoardWaitNonBlockingTaskEnd_o *v89; // x23
  System_String_o *v90; // x2
  System_String_o *v91; // x3
  int32_t v92; // w4
  int32_t v93; // w5
  bool v94; // w6
  bool v95; // w7
  struct System_Object_array *v96; // x8
  _QWORD *v97; // x9
  __int64 v98; // x10
  Il2CppClass **v99; // x0
  struct WarBoardItemData_array *v100; // x19
  int v101; // w8
  __int64 v102; // x20
  struct WarBoardWallData_array *walls; // x19
  unsigned __int64 v104; // x24
  __int64 v105; // x20
  System_String_o *v106; // x2
  System_String_o *v107; // x3
  int32_t v108; // w4
  int32_t v109; // w5
  bool v110; // w6
  bool v111; // w7
  WarBoardWallData_o *v112; // x1
  System_Collections_Generic_List_object__o **v113; // x21
  System_Collections_Generic_IEnumerable_TSource__o *wallInfo; // x22
  System_Func_object__bool__o *v115; // x23
  Il2CppObject *v116; // x0
  Il2CppObject *v117; // x8
  int32_t klass_high; // w1
  System_Collections_Generic_List_object__o *v119; // [xsp+8h] [xbp-B8h]
  WarBoardData_o *v120; // [xsp+10h] [xbp-B0h]
  System_Collections_Generic_Dictionary_int__object__o *v121; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v123; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v124; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_5936006 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData____ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__get_Current__);
    sub_21FFC50(&System_Func_WarBoardUserWallData__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&WarBoardManager_TaskList_TypeInfo);
    sub_21FFC50(&WarBoardManager_TaskMultiList_TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass151_0__UpdateFromServerData_b__0__);
    sub_21FFC50(&WarBoardData___c__DisplayClass151_0_TypeInfo);
    sub_21FFC50(&WarBoardWaitNonBlockingTaskEnd_TypeInfo);
    byte_5936006 = 1;
  }
  memset(&v124, 0, sizeof(v124));
  p_serverData = &this->fields.serverData;
  if ( !this->fields.serverData )
    return;
  this->fields.serverData = warBoardDataEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.serverData,
    (int32_t)warBoardDataEntity,
    (System_String_o *)forceUpdate,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  v119 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v119,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v11 = this;
  v12 = (WarBoardManager_TaskMultiList_o *)sub_21FFEBC(WarBoardManager_TaskMultiList_TypeInfo);
  WarBoardManager_TaskMultiList___ctor(v12, 0);
  v13 = (WarBoardManager_TaskMultiList_o *)sub_21FFEBC(WarBoardManager_TaskMultiList_TypeInfo);
  WarBoardManager_TaskMultiList___ctor(v13, 0);
  v121 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v121,
    (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData____ctor__);
  v14 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList___ctor__);
  pieces = v11->fields.pieces;
  v120 = v11;
  if ( !pieces )
    goto LABEL_96;
  max_length = pieces->max_length;
  v19 = v121;
  if ( max_length >= 1 )
  {
    v20 = 0;
    do
    {
      if ( v20 >= max_length )
        goto LABEL_97;
      v21 = pieces->m_Items[v20];
      v22 = (WarBoardManager_TaskList_o *)sub_21FFEBC(WarBoardManager_TaskList_TypeInfo);
      WarBoardManager_TaskList___ctor(v22, 0);
      if ( !v21 )
        goto LABEL_96;
      WarBoardPieceData__UpdateFromServerData(
        v21,
        *p_serverData,
        (System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__o *)v14,
        v22,
        forceUpdate,
        0);
      if ( !v22 )
        goto LABEL_96;
      if ( v22->fields._size >= 1 )
      {
        if ( v21->fields._isDead_k__BackingField )
        {
          if ( !v13 )
            goto LABEL_96;
          items = v13->fields._items;
          v30 = Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__;
          ++v13->fields._version;
          if ( !items )
            goto LABEL_96;
          size = v13->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v36 = v30[4];
            v37 = (System_Collections_Generic_List_object__o *)v13;
LABEL_23:
            System_Collections_Generic_List_object___AddWithResize(
              v37,
              (Il2CppObject *)v22,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v36 + 192) + 112LL));
            goto LABEL_24;
          }
          v32 = &items->obj.klass + size;
          v13->fields._size = size + 1;
        }
        else
        {
          if ( !v12 )
            goto LABEL_96;
          v33 = v12->fields._items;
          v34 = Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__;
          ++v12->fields._version;
          if ( !v33 )
            goto LABEL_96;
          v35 = v12->fields._size;
          if ( (unsigned int)v35 >= LODWORD(v33->max_length) )
          {
            v36 = v34[4];
            v37 = (System_Collections_Generic_List_object__o *)v12;
            goto LABEL_23;
          }
          v32 = &v33->obj.klass + v35;
          v12->fields._size = v35 + 1;
        }
        v32[4] = (Il2CppClass *)v22;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 4), (int32_t)v22, v23, v24, v25, v26, v27, v28);
      }
LABEL_24:
      isPlayerGroup = (System_Collections_Generic_List_object__o *)WarBoardPieceData__get_isPlayerGroup(v21, 0);
      if ( ((unsigned __int8)isPlayerGroup & 1) != 0 )
      {
        isPlayerGroup = (System_Collections_Generic_List_object__o *)WarBoardPieceData__get_isMaster(v21, 0);
        if ( ((unsigned __int8)isPlayerGroup & 1) == 0 && v21->fields._IsDispConsumedPieceActionPoint_k__BackingField )
        {
          if ( !v19 )
            goto LABEL_96;
          if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                  v19,
                  v21->fields._ConsumedRecoverDonotActCost_k__BackingField,
                  (const MethodInfo_3F68EFC *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___ContainsKey__) )
          {
            ConsumedRecoverDonotActCost_k__BackingField = v21->fields._ConsumedRecoverDonotActCost_k__BackingField;
            v39 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v39,
              (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
            v40 = (Il2CppObject *)v39;
            v19 = v121;
            System_Collections_Generic_Dictionary_int__object___Add(
              v121,
              ConsumedRecoverDonotActCost_k__BackingField,
              v40,
              (const MethodInfo_3F68D08 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Add__);
          }
          isPlayerGroup = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                         v19,
                                                                         v21->fields._ConsumedRecoverDonotActCost_k__BackingField,
                                                                         (const MethodInfo_3F68C68 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Item__);
          if ( !isPlayerGroup )
            goto LABEL_96;
          v47 = isPlayerGroup->fields._items;
          v48 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
          ++isPlayerGroup->fields._version;
          if ( !v47 )
            goto LABEL_96;
          v49 = isPlayerGroup->fields._size;
          if ( (unsigned int)v49 >= LODWORD(v47->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              isPlayerGroup,
              (Il2CppObject *)v21,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
          }
          else
          {
            v50 = &v47->obj.klass + v49;
            isPlayerGroup->fields._size = v49 + 1;
            v50[4] = (Il2CppClass *)v21;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v50 + 4), (int32_t)v21, v41, v42, v43, v44, v45, v46);
          }
        }
      }
      max_length = pieces->max_length;
    }
    while ( (int)++v20 < max_length );
  }
  if ( !v14 )
    goto LABEL_96;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v123,
    v14,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__GetEnumerator__);
  v124 = v123;
  v123.fields._list = 0;
  *(_QWORD *)&v123.fields._index = &v124;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v124,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__MoveNext__) )
  {
    current = v124.fields._current;
    v52 = (WarBoardManager_TaskList_o *)sub_21FFEBC(WarBoardManager_TaskList_TypeInfo);
    WarBoardManager_TaskList___ctor(v52, 0);
    if ( !current )
      sub_21FFECC(v53, v54);
    monitor = (int)current[1].monitor;
    if ( monitor < 0 )
    {
      monitor_high = HIDWORD(current[1].monitor);
      if ( monitor_high >= 1 )
      {
        klass = current[1].klass;
        if ( !klass )
          sub_21FFECC(0, v54);
        (*((void (__fastcall **)(Il2CppClass *, _QWORD, _QWORD, WarBoardManager_TaskList_o *, __int64, _QWORD, __int64, _QWORD))klass->_1.image
         + 101))(
          klass,
          (unsigned int)monitor_high,
          0,
          v52,
          0xFFFFFFFFLL,
          0,
          1,
          *((_QWORD *)klass->_1.image + 102));
      }
      v67 = current[1].klass;
      if ( !v67 )
        sub_21FFECC(0, v54);
      v57 = (*((__int64 (**)(void))v67->_1.image + 103))();
    }
    else
    {
      v56 = current[1].klass;
      if ( !v56 )
        sub_21FFECC(0, v54);
      v57 = (*((__int64 (__fastcall **)(Il2CppClass *, _QWORD, _QWORD, WarBoardManager_TaskList_o *, __int64, _QWORD, __int64, _QWORD))v56->_1.image
             + 101))(
              v56,
              HIDWORD(current[1].monitor),
              0,
              v52,
              0xFFFFFFFFLL,
              0,
              1,
              *((_QWORD *)v56->_1.image + 102));
    }
    if ( !v52 )
      sub_21FFECC(v57, v58);
    if ( v52->fields._size >= 1 )
    {
      if ( monitor < 0 )
      {
        if ( !v13
          || (v72 = v13->fields._items,
              v73 = Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__,
              ++v13->fields._version,
              !v72) )
        {
          sub_21FFECC(v57, v58);
        }
        v74 = v13->fields._size;
        if ( (unsigned int)v74 >= LODWORD(v72->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)v13,
            (Il2CppObject *)v52,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
        }
        else
        {
          v75 = &v72->obj.klass + v74;
          v13->fields._size = v74 + 1;
          v75[4] = (Il2CppClass *)v52;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v75 + 4), (int32_t)v52, v59, v60, v61, v62, v63, v64);
        }
      }
      else
      {
        if ( !v12
          || (v68 = v12->fields._items,
              v69 = Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__,
              ++v12->fields._version,
              !v68) )
        {
          sub_21FFECC(v57, v58);
        }
        v70 = v12->fields._size;
        if ( (unsigned int)v70 >= LODWORD(v68->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)v12,
            (Il2CppObject *)v52,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
        }
        else
        {
          v71 = &v68->obj.klass + v70;
          v12->fields._size = v70 + 1;
          v71[4] = (Il2CppClass *)v52;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v71 + 4), (int32_t)v52, v59, v60, v61, v62, v63, v64);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v124,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__Dispose__);
  if ( !v121 )
    goto LABEL_96;
  isPlayerGroup = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Count(
                                                                 v121,
                                                                 (const MethodInfo_3F689A0 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__);
  if ( (int)isPlayerGroup >= 1 )
    WarBoardData__ShowConsumedPieceActionPointPopup(
      v120,
      (System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___o *)v121,
      v76);
  if ( !v12 )
    goto LABEL_96;
  isPlayerGroup = (System_Collections_Generic_List_object__o *)WarBoardManager_TaskMultiList__SortedFlatted(v12, 0);
  if ( !v119 )
    goto LABEL_96;
  System_Collections_Generic_List_object___AddRange(
    v119,
    (System_Collections_Generic_IEnumerable_T__o *)isPlayerGroup,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( !v13 )
    goto LABEL_96;
  v77 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager_TaskMultiList__SortedFlatted(v13, 0);
  System_Collections_Generic_List_object___AddRange(
    v119,
    v77,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( v119->fields._size >= 1 )
  {
    isPlayerGroup = (System_Collections_Generic_List_object__o *)WarBoardData__CreateEventBossUIDataTask(
                                                                   (WarBoardData_o *)isPlayerGroup,
                                                                   v16);
    v84 = v119->fields._items;
    v85 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v119->fields._version;
    if ( !v84 )
      goto LABEL_96;
    v86 = v119->fields._size;
    v87 = isPlayerGroup;
    if ( (unsigned int)v86 >= LODWORD(v84->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v119,
        (Il2CppObject *)isPlayerGroup,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
    }
    else
    {
      v88 = &v84->obj.klass + v86;
      v119->fields._size = v86 + 1;
      v88[4] = (Il2CppClass *)v87;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v88 + 4), (int32_t)v87, v78, v79, v80, v81, v82, v83);
    }
    v89 = (WarBoardWaitNonBlockingTaskEnd_o *)sub_21FFEBC(WarBoardWaitNonBlockingTaskEnd_TypeInfo);
    WarBoardWaitNonBlockingTaskEnd___ctor(v89, 0);
    v96 = v119->fields._items;
    v97 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v119->fields._version;
    if ( !v96 )
      goto LABEL_96;
    v98 = v119->fields._size;
    if ( (unsigned int)v98 >= LODWORD(v96->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v119,
        (Il2CppObject *)v89,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
    }
    else
    {
      v99 = &v96->obj.klass + v98;
      v119->fields._size = v98 + 1;
      v99[4] = (Il2CppClass *)v89;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v99 + 4), (int32_t)v89, v90, v91, v92, v93, v94, v95);
    }
    isPlayerGroup = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !isPlayerGroup )
      goto LABEL_96;
    WarBoardManager__InsertTask_44940072(
      (WarBoardManager_o *)isPlayerGroup,
      0,
      (System_Collections_Generic_List_WarBoardTaskBase__o *)v119,
      0);
  }
  v100 = v120->fields.items;
  if ( !v100 )
    goto LABEL_96;
  v101 = v100->max_length;
  if ( v101 >= 1 )
  {
    v102 = 0;
    while ( (unsigned int)v102 < v101 )
    {
      isPlayerGroup = (System_Collections_Generic_List_object__o *)v100->m_Items[v102];
      if ( !isPlayerGroup )
        goto LABEL_96;
      WarBoardItemData__UpdateFromServerData((WarBoardItemData_o *)isPlayerGroup, *p_serverData, 0);
      v101 = v100->max_length;
      if ( (int)++v102 >= v101 )
        goto LABEL_84;
    }
LABEL_97:
    sub_21FFED4(isPlayerGroup);
  }
LABEL_84:
  walls = v120->fields.walls;
  if ( !walls )
LABEL_96:
    sub_21FFECC(isPlayerGroup, v16);
  if ( SLODWORD(walls->max_length) >= 1 )
  {
    v104 = 0;
    while ( 1 )
    {
      v105 = sub_21FFEBC(WarBoardData___c__DisplayClass151_0_TypeInfo);
      WarBoardData___c__DisplayClass151_0___ctor((WarBoardData___c__DisplayClass151_0_o *)v105, 0);
      if ( v104 >= LODWORD(walls->max_length) )
        goto LABEL_97;
      if ( !v105 )
        goto LABEL_96;
      v112 = walls->m_Items[v104];
      *(_QWORD *)(v105 + 16) = v112;
      v113 = (System_Collections_Generic_List_object__o **)(v105 + 16);
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v105 + 16), (int32_t)v112, v106, v107, v108, v109, v110, v111);
      if ( !warBoardDataEntity )
        goto LABEL_96;
      wallInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEntity->fields.wallInfo;
      v115 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardUserWallData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v115,
        (Il2CppObject *)v105,
        Method_WarBoardData___c__DisplayClass151_0__UpdateFromServerData_b__0__,
        0);
      v116 = System_Linq_Enumerable__FirstOrDefault_object__59044732(
               wallInfo,
               (System_Func_TSource__bool__o *)v115,
               (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
      if ( v116 )
      {
        v117 = v116;
        isPlayerGroup = *v113;
        if ( !*v113 )
          goto LABEL_96;
        klass_high = HIDWORD(v117[1].klass);
        if ( isPlayerGroup->fields._size > klass_high )
          WarBoardWallData__SetBreakPoint((WarBoardWallData_o *)isPlayerGroup, klass_high, 0);
      }
      if ( (__int64)++v104 >= SLODWORD(walls->max_length) )
        return;
    }
  }
}


void WarBoardData__UpdateLatestBattlePieceUniqueIndexes(
        WarBoardData_o *this,
        WarBoardData_BattleParticipantInfo_o *participantInfo,
        const MethodInfo *method)
{
  struct System_UInt32_array *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( !participantInfo )
    sub_21FFECC(this, 0);
  v4 = WarBoardData_BattleParticipantInfo__ToUniqueIndexArray(participantInfo, 0);
  this->fields.latestBattlePieceUniqueIndexes = v4;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.latestBattlePieceUniqueIndexes,
    (int32_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void WarBoardData__UpdateLatestPieceActionSquareIndexes(
        WarBoardData_o *this,
        int32_t fromSquareIndex,
        int32_t toSquareIndex,
        const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  int v15; // w8

  if ( (byte_5936016 & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    byte_5936016 = 1;
  }
  v7 = sub_21FFD10(int___TypeInfo, 2);
  if ( !v7 )
    sub_21FFECC(0, v8);
  v15 = *(_DWORD *)(v7 + 24);
  if ( !v15 || (*(_DWORD *)(v7 + 32) = fromSquareIndex, v15 == 1) )
    sub_21FFED4(v7);
  this->fields.latestPieceActionSquareIndexes = (struct System_Int32_array *)v7;
  *(_DWORD *)(v7 + 36) = toSquareIndex;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.latestPieceActionSquareIndexes,
    v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardData__UpdateLinkedSquareList(
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
    WarBoardSquareData__UpdateLinkedSquareList(Square, squareIndex2, 0);
    WarBoardSquareData__UpdateLinkedSquareList(CondSquare, squareIndex1, 0);
  }
}


void WarBoardData__UpdateSquareList(WarBoardData_o *this, WarBoardSquareData_o *square, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *squares; // x23
  System_Collections_Generic_List_object__o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  System_Object_array *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  MissionNaviTransitionBoardItem_o *p_condSquares; // x19
  System_Collections_Generic_IEnumerable_T__o *condSquares; // t1
  System_Collections_Generic_List_object__o *v28; // x21
  System_Object_array *v29; // x1
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7

  if ( (byte_5935FFA & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardSquareData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardSquareData__Remove__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardSquareData___ctor___91446328);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
    byte_5935FFA = 1;
  }
  squares = (System_Collections_Generic_IEnumerable_T__o *)this->fields.squares;
  v6 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
  System_Collections_Generic_List_object____ctor_71627776(
    v6,
    squares,
    (const MethodInfo_444F400 *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor___91446328);
  if ( !v6 )
    goto LABEL_10;
  items = v6->fields._items;
  v16 = Method_System_Collections_Generic_List_WarBoardSquareData__Add__;
  ++v6->fields._version;
  if ( !items )
    goto LABEL_10;
  size = v6->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)square,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v18[4] = (Il2CppClass *)square;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v18 + 4), (int32_t)square, v9, v10, v11, v12, v13, v14);
  }
  v19 = System_Collections_Generic_List_object___ToArray(
          v6,
          (const MethodInfo_445164C *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  this->fields.squares = (struct WarBoardSquareData_array *)v19;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.squares, (int32_t)v19, v20, v21, v22, v23, v24, v25);
  condSquares = (System_Collections_Generic_IEnumerable_T__o *)this->fields.condSquares;
  p_condSquares = (MissionNaviTransitionBoardItem_o *)&this->fields.condSquares;
  v28 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
  System_Collections_Generic_List_object____ctor_71627776(
    v28,
    condSquares,
    (const MethodInfo_444F400 *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor___91446328);
  if ( !v28 )
LABEL_10:
    sub_21FFECC(v7, v8);
  System_Collections_Generic_List_object___Remove(
    v28,
    (Il2CppObject *)square,
    (const MethodInfo_445101C *)Method_System_Collections_Generic_List_WarBoardSquareData__Remove__);
  v29 = System_Collections_Generic_List_object___ToArray(
          v28,
          (const MethodInfo_445164C *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  p_condSquares->klass = (MissionNaviTransitionBoardItem_c *)v29;
  sub_21FFBF4(p_condSquares, (int32_t)v29, v30, v31, v32, v33, v34, v35);
}


void WarBoardData__UpdateUiData(
        WarBoardData_o *this,
        int32_t squareIndex,
        System_String_array *setKeys,
        const MethodInfo *method)
{
  WarBoardUiData_o *UiData; // x0
  Il2CppObject *v8; // x1
  WarBoardUiData_o *v9; // x22
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_List_object__o *listUiData; // x8
  struct System_Object_array *items; // x9
  _QWORD *v18; // x10
  __int64 size; // x11
  Il2CppClass **v20; // x0

  if ( (byte_5936027 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardUiData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardUiData__Remove__);
    sub_21FFC50(&WarBoardUiData_TypeInfo);
    byte_5936027 = 1;
  }
  UiData = WarBoardData__GetUiData(this, squareIndex, (const MethodInfo *)setKeys);
  if ( !setKeys )
    goto LABEL_16;
  v8 = (Il2CppObject *)UiData;
  if ( UiData )
  {
    if ( LODWORD(setKeys->max_length) )
    {
      WarBoardUiData__SetKeys(UiData, setKeys, 0);
      return;
    }
    UiData = (WarBoardUiData_o *)this->fields.listUiData;
    if ( UiData )
    {
      System_Collections_Generic_List_object___Remove(
        (System_Collections_Generic_List_object__o *)UiData,
        v8,
        (const MethodInfo_445101C *)Method_System_Collections_Generic_List_WarBoardUiData__Remove__);
      return;
    }
LABEL_16:
    sub_21FFECC(UiData, v8);
  }
  if ( LODWORD(setKeys->max_length) )
  {
    v9 = (WarBoardUiData_o *)sub_21FFEBC(WarBoardUiData_TypeInfo);
    WarBoardUiData___ctor_45043568(v9, squareIndex, setKeys, 0);
    listUiData = (System_Collections_Generic_List_object__o *)this->fields.listUiData;
    if ( !listUiData )
      goto LABEL_16;
    items = listUiData->fields._items;
    v18 = Method_System_Collections_Generic_List_WarBoardUiData__Add__;
    ++listUiData->fields._version;
    if ( !items )
      goto LABEL_16;
    size = listUiData->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        listUiData,
        (Il2CppObject *)v9,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    }
    else
    {
      v20 = &items->obj.klass + size;
      listUiData->fields._size = size + 1;
      v20[4] = (Il2CppClass *)v9;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v9, v10, v11, v12, v13, v14, v15);
    }
  }
}


void WarBoardData__UpdateUiData_44852964(
        WarBoardData_o *this,
        System_Int32_array *pieceIndex,
        System_String_array *setKeys,
        const MethodInfo *method)
{
  WarBoardUiData_o *UiData_44852372; // x0
  Il2CppObject *v8; // x1
  WarBoardUiData_o *v9; // x22
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_List_object__o *listUiData; // x8
  struct System_Object_array *items; // x9
  _QWORD *v18; // x10
  __int64 size; // x11
  Il2CppClass **v20; // x0

  if ( (byte_5936028 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardUiData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardUiData__Remove__);
    sub_21FFC50(&WarBoardUiData_TypeInfo);
    byte_5936028 = 1;
  }
  UiData_44852372 = WarBoardData__GetUiData_44852372(this, pieceIndex, (const MethodInfo *)setKeys);
  if ( !setKeys )
    goto LABEL_16;
  v8 = (Il2CppObject *)UiData_44852372;
  if ( UiData_44852372 )
  {
    if ( LODWORD(setKeys->max_length) )
    {
      WarBoardUiData__SetKeys(UiData_44852372, setKeys, 0);
      return;
    }
    UiData_44852372 = (WarBoardUiData_o *)this->fields.listUiData;
    if ( UiData_44852372 )
    {
      System_Collections_Generic_List_object___Remove(
        (System_Collections_Generic_List_object__o *)UiData_44852372,
        v8,
        (const MethodInfo_445101C *)Method_System_Collections_Generic_List_WarBoardUiData__Remove__);
      return;
    }
LABEL_16:
    sub_21FFECC(UiData_44852372, v8);
  }
  if ( LODWORD(setKeys->max_length) )
  {
    v9 = (WarBoardUiData_o *)sub_21FFEBC(WarBoardUiData_TypeInfo);
    WarBoardUiData___ctor_45043640(v9, pieceIndex, setKeys, 0);
    listUiData = (System_Collections_Generic_List_object__o *)this->fields.listUiData;
    if ( !listUiData )
      goto LABEL_16;
    items = listUiData->fields._items;
    v18 = Method_System_Collections_Generic_List_WarBoardUiData__Add__;
    ++listUiData->fields._version;
    if ( !items )
      goto LABEL_16;
    size = listUiData->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        listUiData,
        (Il2CppObject *)v9,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    }
    else
    {
      v20 = &items->obj.klass + size;
      listUiData->fields._size = size + 1;
      v20[4] = (Il2CppClass *)v9;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v9, v10, v11, v12, v13, v14, v15);
    }
  }
}


void WarBoardData__UpdateWinCondId(WarBoardData_o *this, int32_t overWriteWinCondId, const MethodInfo *method)
{
  this->fields.winCondId = overWriteWinCondId;
}


int32_t WarBoardData__get_ContinueConsumeType(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields._ContinueConsumeType_k__BackingField;
}


int32_t WarBoardData__get_CurrentMemberCount(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields._CurrentMemberCount_k__BackingField;
}


int32_t WarBoardData__get_CurrentPartyCost(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields._CurrentPartyCost_k__BackingField;
}


int32_t WarBoardData__get_FormationLimitCost(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardStageEntity_o *stageEntity; // x8

  stageEntity = this->fields.stageEntity;
  if ( stageEntity )
    return stageEntity->fields.formationCost;
  else
    return 0;
}


bool WarBoardData__get_IsContinue(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields._IsContinue_k__BackingField;
}


bool WarBoardData__get_IsEmptyMember(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields._CurrentMemberCount_k__BackingField < 1;
}


bool WarBoardData__get_IsNextTurn(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields._IsNextTurn_k__BackingField;
}


bool WarBoardData__get_IsPartyCostOver(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardStageEntity_o *stageEntity; // x9

  stageEntity = this->fields.stageEntity;
  if ( stageEntity )
    LODWORD(stageEntity) = stageEntity->fields.formationCost;
  return this->fields._CurrentPartyCost_k__BackingField > (int)stageEntity;
}


System_Collections_Generic_List_int__o *WarBoardData__get_MasterExistsForce(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  return this->fields.masterExistsForce;
}


int64_t WarBoardData__get_PlayerMasterUserEquipId(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardData___c_c *v4; // x0
  System_Object_array *pieces; // x19
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Predicate_object__o *_9__62_0; // x20
  Il2CppObject *v8; // x21
  struct WarBoardData___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int64_t result; // x0

  if ( (byte_5935FD3 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Find_WarBoardPieceData___);
    sub_21FFC50(&System_Predicate_WarBoardPieceData__TypeInfo);
    sub_21FFC50(&Method_WarBoardData___c__get_PlayerMasterUserEquipId_b__62_0__);
    sub_21FFC50(&WarBoardData___c_TypeInfo);
    byte_5935FD3 = 1;
  }
  v4 = WarBoardData___c_TypeInfo;
  pieces = (System_Object_array *)this->fields.pieces;
  if ( !*(&WarBoardData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo, method, v2);
    v4 = WarBoardData___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__62_0 = (System_Predicate_object__o *)static_fields->__9__62_0;
  if ( !_9__62_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__62_0 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_WarBoardPieceData__TypeInfo);
    System_Predicate_object____ctor(_9__62_0, v8, Method_WarBoardData___c__get_PlayerMasterUserEquipId_b__62_0__, 0);
    v9 = WarBoardData___c_TypeInfo->static_fields;
    v9->__9__62_0 = (struct System_Predicate_WarBoardPieceData__o *)_9__62_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->__9__62_0, (int32_t)_9__62_0, v10, v11, v12, v13, v14, v15);
  }
  result = (int64_t)System_Array__Find_object_(
                      pieces,
                      (System_Predicate_T__o *)_9__62_0,
                      (const MethodInfo_39772EC *)Method_System_Array_Find_WarBoardPieceData___);
  if ( result )
    return *(_QWORD *)(result + 248);
  return result;
}


int32_t WarBoardData__get_TurnCount(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardDataEntity_o *serverData; // x8

  serverData = this->fields.serverData;
  if ( serverData )
    return serverData->fields.turn;
  else
    return 0;
}


System_Collections_Generic_Dictionary_string__object__o *WarBoardData__get_bgAnimationInfo(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  return this->fields._bgAnimationInfo_k__BackingField;
}


int32_t WarBoardData__get_id(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardStageEntity_o *stageEntity; // x8

  stageEntity = this->fields.stageEntity;
  if ( !stageEntity )
    sub_21FFECC(this, method);
  return stageEntity->fields.id;
}


int32_t WarBoardData__get_maxForceId(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields._maxForceId_k__BackingField;
}


int32_t WarBoardData__get_maxGroupId(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields._maxGroupId_k__BackingField;
}


void WarBoardData__set_ContinueConsumeType(WarBoardData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._ContinueConsumeType_k__BackingField = value;
}


void WarBoardData__set_CurrentMemberCount(WarBoardData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._CurrentMemberCount_k__BackingField = value;
}


void WarBoardData__set_CurrentPartyCost(WarBoardData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._CurrentPartyCost_k__BackingField = value;
}


void WarBoardData__set_IsContinue(WarBoardData_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsContinue_k__BackingField = value;
}


void WarBoardData__set_IsNextTurn(WarBoardData_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsNextTurn_k__BackingField = value;
}


void WarBoardData__set_bgAnimationInfo(
        WarBoardData_o *this,
        System_Collections_Generic_Dictionary_string__object__o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._bgAnimationInfo_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._bgAnimationInfo_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardData__set_maxForceId(WarBoardData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._maxForceId_k__BackingField = value;
}


void WarBoardData__set_maxGroupId(WarBoardData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._maxGroupId_k__BackingField = value;
}


void WarBoardData_BattleParticipantInfo___ctor(
        WarBoardData_BattleParticipantInfo_o *this,
        WarBoardPieceData_o *attackPieceData,
        WarBoardPieceData_o *targetPieceData,
        const MethodInfo *method)
{
  WarBoardData_BattleParticipantInfo_o *v7; // x0
  const MethodInfo *v8; // x3
  struct WarBoardPieceData_array *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  v9 = WarBoardData_BattleParticipantInfo__AggregateBattleParticipants(v7, attackPieceData, targetPieceData, v8);
  this->fields._Participants_k__BackingField = v9;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v9, v10, v11, v12, v13, v14, v15);
}


void WarBoardData_BattleParticipantInfo___ctor_45002356(
        WarBoardData_BattleParticipantInfo_o *this,
        System_UInt32_array *uniqueIndexArray,
        const MethodInfo *method)
{
  __int64 v5; // x21
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  void *monitor; // x1
  System_Func_T__TResult__o *v15; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Object_array *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_5936135 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_uint__WarBoardPieceData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_21FFC50(&System_Func_uint__WarBoardPieceData__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&Method_WarBoardData_BattleParticipantInfo___c__DisplayClass13_0___ctor_b__0__);
    sub_21FFC50(&WarBoardData_BattleParticipantInfo___c__DisplayClass13_0_TypeInfo);
    byte_5936135 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v5 = sub_21FFEBC(WarBoardData_BattleParticipantInfo___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !uniqueIndexArray )
    goto LABEL_9;
  if ( SLODWORD(uniqueIndexArray->max_length) > 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance && v5 )
    {
      monitor = Instance[27].monitor;
      *(_QWORD *)(v5 + 16) = monitor;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)monitor, v8, v9, v10, v11, v12, v13);
      v15 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_uint__WarBoardPieceData__TypeInfo);
      System_Func_uint__object____ctor(
        v15,
        (Il2CppObject *)v5,
        Method_WarBoardData_BattleParticipantInfo___c__DisplayClass13_0___ctor_b__0__,
        0);
      v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_uint__object_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)uniqueIndexArray,
                                                                   (System_Func_TSource__TResult__o *)v15,
                                                                   (const MethodInfo_385F36C *)Method_System_Linq_Enumerable_Select_uint__WarBoardPieceData___);
      v17 = System_Linq_Enumerable__ToArray_object_(
              v16,
              (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
      this->fields._Participants_k__BackingField = (struct WarBoardPieceData_array *)v17;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v17, v18, v19, v20, v21, v22, v23);
      return;
    }
LABEL_9:
    sub_21FFECC(Instance, v7);
  }
  this->fields._Invalid_k__BackingField = 1;
}


WarBoardPieceData_array *WarBoardData_BattleParticipantInfo__AggregateBattleParticipants(
        WarBoardData_BattleParticipantInfo_o *this,
        WarBoardPieceData_o *attackPieceData,
        WarBoardPieceData_o *targetPieceData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x19
  WarBoardData_o *Instance; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct System_Object_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x0
  il2cpp_array_size_t stageNpcMaster; // x8
  WarBoardPieceData_array *v30; // x20
  unsigned __int64 v31; // x23
  WarBoardPieceData_o **p_npcEntityDict; // x25
  WarBoardPieceData_o *v33; // x21
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  struct System_Object_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  Il2CppClass **v43; // x0

  if ( (byte_5936137 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardPieceData__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_5936137 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( !v6 )
    goto LABEL_30;
  items = v6->fields._items;
  v16 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
  ++v6->fields._version;
  if ( !items )
    goto LABEL_30;
  size = v6->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)attackPieceData,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v18[4] = (Il2CppClass *)attackPieceData;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v18 + 4), (int32_t)attackPieceData, v9, v10, v11, v12, v13, v14);
  }
  v25 = v6->fields._items;
  v26 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
  ++v6->fields._version;
  if ( !v25 )
    goto LABEL_30;
  v27 = v6->fields._size;
  if ( (unsigned int)v27 >= LODWORD(v25->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)targetPieceData,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &v25->obj.klass + v27;
    v6->fields._size = v27 + 1;
    v28[4] = (Il2CppClass *)targetPieceData;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v28 + 4), (int32_t)targetPieceData, v19, v20, v21, v22, v23, v24);
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || !targetPieceData
    || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0
    || (Instance = (WarBoardData_o *)WarBoardData__GetPicesForRangeIsAlive(
                                       Instance,
                                       targetPieceData->fields._nowSquareIndex_k__BackingField,
                                       1,
                                       1,
                                       0)) == 0 )
  {
LABEL_30:
    sub_21FFECC(Instance, v8);
  }
  stageNpcMaster = (il2cpp_array_size_t)Instance->fields.stageNpcMaster;
  v30 = (WarBoardPieceData_array *)Instance;
  if ( (int)stageNpcMaster >= 1 )
  {
    v31 = 0;
    p_npcEntityDict = (WarBoardPieceData_o **)&Instance->fields.npcEntityDict;
    do
    {
      if ( v31 >= (unsigned int)stageNpcMaster )
        sub_21FFED4(Instance);
      v33 = p_npcEntityDict[v31];
      Instance = (WarBoardData_o *)System_Collections_Generic_List_object___Contains(
                                     v6,
                                     (Il2CppObject *)v33,
                                     (const MethodInfo_444FEC8 *)Method_System_Collections_Generic_List_WarBoardPieceData__Contains__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !v33 )
          goto LABEL_30;
        if ( v33->fields._type_k__BackingField != 1 )
        {
          Instance = (WarBoardData_o *)v33->fields._battleServant_k__BackingField;
          if ( !Instance
            || (Instance = (WarBoardData_o *)BattleServantData__HasAvailableWarBoardNotAttackedBuff(
                                               (BattleServantData_o *)Instance,
                                               0),
                ((unsigned __int8)Instance & 1) == 0) )
          {
            v40 = v6->fields._items;
            v41 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
            ++v6->fields._version;
            if ( !v40 )
              goto LABEL_30;
            v42 = v6->fields._size;
            if ( (unsigned int)v42 >= LODWORD(v40->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v6,
                (Il2CppObject *)v33,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
            }
            else
            {
              v43 = &v40->obj.klass + v42;
              v6->fields._size = v42 + 1;
              v43[4] = (Il2CppClass *)v33;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v43 + 4), (int32_t)v33, v34, v35, v36, v37, v38, v39);
            }
          }
        }
      }
      LODWORD(stageNpcMaster) = v30->max_length;
      ++v31;
    }
    while ( (__int64)v31 < (int)stageNpcMaster );
  }
  return (WarBoardPieceData_array *)System_Collections_Generic_List_object___ToArray(
                                      v6,
                                      (const MethodInfo_445164C *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
}


WarBoardData_BattleParticipantInfo_o *WarBoardData_BattleParticipantInfo__LoadFromUniqueIndex(
        System_UInt32_array *uniqueIndexArray,
        const MethodInfo *method)
{
  WarBoardData_BattleParticipantInfo_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_5936138 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardData_BattleParticipantInfo_TypeInfo);
    byte_5936138 = 1;
  }
  v3 = (WarBoardData_BattleParticipantInfo_o *)sub_21FFEBC(WarBoardData_BattleParticipantInfo_TypeInfo);
  WarBoardData_BattleParticipantInfo___ctor_45002356(v3, uniqueIndexArray, v4);
  return v3;
}


System_UInt32_array *WarBoardData_BattleParticipantInfo__ToUniqueIndexArray(
        WarBoardData_BattleParticipantInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardData_BattleParticipantInfo___c_c *v4; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Participants_k__BackingField; // x19
  struct WarBoardData_BattleParticipantInfo___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__14_0; // x20
  Il2CppObject *v8; // x21
  struct WarBoardData_BattleParticipantInfo___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0

  if ( (byte_5936136 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__uint___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_uint___);
    sub_21FFC50(&System_Func_WarBoardPieceData__uint__TypeInfo);
    sub_21FFC50(&Method_WarBoardData_BattleParticipantInfo___c__ToUniqueIndexArray_b__14_0__);
    sub_21FFC50(&WarBoardData_BattleParticipantInfo___c_TypeInfo);
    byte_5936136 = 1;
  }
  v4 = WarBoardData_BattleParticipantInfo___c_TypeInfo;
  Participants_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._Participants_k__BackingField;
  if ( !*(&WarBoardData_BattleParticipantInfo___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_BattleParticipantInfo___c_TypeInfo, method, v2);
    v4 = WarBoardData_BattleParticipantInfo___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__14_0 = (System_Func_T__TResult__o *)static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = WarBoardData_BattleParticipantInfo___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__14_0 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_WarBoardPieceData__uint__TypeInfo);
    System_Func_object__uint____ctor(
      _9__14_0,
      v8,
      Method_WarBoardData_BattleParticipantInfo___c__ToUniqueIndexArray_b__14_0__,
      0);
    v9 = WarBoardData_BattleParticipantInfo___c_TypeInfo->static_fields;
    v9->__9__14_0 = (struct System_Func_WarBoardPieceData__uint__o *)_9__14_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->__9__14_0, (int32_t)_9__14_0, v10, v11, v12, v13, v14, v15);
  }
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__uint_(
                                                               Participants_k__BackingField,
                                                               (System_Func_TSource__TResult__o *)_9__14_0,
                                                               (const MethodInfo_385E6DC *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__uint___);
  return System_Linq_Enumerable__ToArray_uint_(
           v16,
           (const MethodInfo_38687FC *)Method_System_Linq_Enumerable_ToArray_uint___);
}


WarBoardPieceData_o *WarBoardData_BattleParticipantInfo__get_Attacker(
        WarBoardData_BattleParticipantInfo_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceData_array *Participants_k__BackingField; // x8

  Participants_k__BackingField = this->fields._Participants_k__BackingField;
  if ( !Participants_k__BackingField )
    sub_21FFECC(this, method);
  if ( !LODWORD(Participants_k__BackingField->max_length) )
    sub_21FFED4(this);
  return Participants_k__BackingField->m_Items[0];
}


WarBoardPieceData_o *WarBoardData_BattleParticipantInfo__get_Defender(
        WarBoardData_BattleParticipantInfo_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceData_array *Participants_k__BackingField; // x8

  Participants_k__BackingField = this->fields._Participants_k__BackingField;
  if ( !Participants_k__BackingField )
    sub_21FFECC(this, method);
  if ( (Participants_k__BackingField->max_length & 0xFFFFFFFE) == 0 )
    sub_21FFED4(this);
  return Participants_k__BackingField->m_Items[1];
}


bool WarBoardData_BattleParticipantInfo__get_Invalid(
        WarBoardData_BattleParticipantInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._Invalid_k__BackingField;
}


WarBoardPieceData_array *WarBoardData_BattleParticipantInfo__get_Participants(
        WarBoardData_BattleParticipantInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._Participants_k__BackingField;
}


void WarBoardData_BattleParticipantInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5936139 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardData_BattleParticipantInfo___c_TypeInfo);
    byte_5936139 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(WarBoardData_BattleParticipantInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardData_BattleParticipantInfo___c_TypeInfo->static_fields->__9 = (struct WarBoardData_BattleParticipantInfo___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)WarBoardData_BattleParticipantInfo___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardData_BattleParticipantInfo___c___ctor(
        WarBoardData_BattleParticipantInfo___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


uint32_t WarBoardData_BattleParticipantInfo___c___ToUniqueIndexArray_b__14_0(
        WarBoardData_BattleParticipantInfo___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields._uniqueIndex_k__BackingField;
}


void WarBoardData_BattleParticipantInfo___c__DisplayClass13_0___ctor(
        WarBoardData_BattleParticipantInfo___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
WarBoardPieceData_o *WarBoardData_BattleParticipantInfo___c__DisplayClass13_0____ctor_b__0(
        WarBoardData_BattleParticipantInfo___c__DisplayClass13_0_o *this,
        uint32_t x,
        const MethodInfo *method)
{
  WarBoardData_o *warBoardData; // x0

  warBoardData = this->fields.warBoardData;
  if ( !warBoardData )
    sub_21FFECC(0, *(_QWORD *)&x);
  return WarBoardData__GetPiece_44765572(warBoardData, x, 0, 0);
}


void WarBoardData_SquareRangeSearch___ctor(
        WarBoardData_SquareRangeSearch_o *this,
        int32_t position,
        int32_t range,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.squareIndex = position;
  this->fields.range = range;
}


void WarBoardData_WarBoardDeadBreakList___ctor(WarBoardData_WarBoardDeadBreakList_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardData_WarBoardLocalSaveData___ctor(WarBoardData_WarBoardLocalSaveData_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct UnityEngine_Vector2_o zeroVector; // d1
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  System_String_o *v70; // x2
  System_String_o *v71; // x3
  int32_t v72; // w4
  int32_t v73; // w5
  bool v74; // w6
  bool v75; // w7
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  *(_QWORD *)&this->fields.questId = 0;
  this->fields.stageId = 0;
  this->fields.pieceSaves = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.pieceSaves, 0, v3, v4, v5, v6, v7, v8);
  this->fields.itemSaves = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.itemSaves, 0, v9, v10, v11, v12, v13, v14);
  this->fields.treasureSaves = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.treasureSaves, 0, v15, v16, v17, v18, v19, v20);
  this->fields.wallSaves = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.wallSaves, 0, v21, v22, v23, v24, v25, v26);
  this->fields.squareSaves = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.squareSaves, 0, v27, v28, v29, v30, v31, v32);
  if ( !byte_5931820 )
  {
    sub_21FFC50(&UnityEngine_Vector2_TypeInfo);
    byte_5931820 = 1;
  }
  zeroVector = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  this->fields.cameraSize = 0.0;
  *(_QWORD *)&this->fields.turn = 0xFFFFFFFF00000000LL;
  this->fields.turnGroupId = -1;
  this->fields.onBoardSkillUpdate = 0;
  this->fields.eventSaves = 0;
  *(_QWORD *)&this->fields.randLogicCount = 0;
  this->fields.cameraPos = zeroVector;
  this->fields.isPlayedHalfDeadMessage = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.eventSaves, 0, v33, v34, v35, v36, v37, v38);
  this->fields.winCondId = -1;
  this->fields.latestBattlePieceUniqueIndexes = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.latestBattlePieceUniqueIndexes,
    0,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  this->fields.prevCondSaves = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.prevCondSaves, 0, v46, v47, v48, v49, v50, v51);
  this->fields.reinforcementsSaves = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.reinforcementsSaves, 0, v52, v53, v54, v55, v56, v57);
  this->fields.playedReinforcements = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.playedReinforcements, 0, v58, v59, v60, v61, v62, v63);
  this->fields.uiDataSaves = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.uiDataSaves, 0, v64, v65, v66, v67, v68, v69);
  this->fields.bgAnimationInfo = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.bgAnimationInfo, 0, v70, v71, v72, v73, v74, v75);
  this->fields.squareIndexInfo = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.squareIndexInfo, 0, v76, v77, v78, v79, v80, v81);
  this->fields.bossBattleInfo = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.bossBattleInfo, 0, v82, v83, v84, v85, v86, v87);
}


void WarBoardData_WarBoardLocalSaveData___ctor_44997680(
        WarBoardData_WarBoardLocalSaveData_o *this,
        WarBoardData_o *warBoardData,
        const MethodInfo *method)
{
  __int64 GutsCount; // x0
  __int64 v6; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  int32_t turn; // w10
  __int64 v9; // d0
  struct WarBoardPieceData_array *pieces; // x8
  il2cpp_array_size_t max_length; // x22
  struct WarBoardPieceData_SaveData_array *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  unsigned __int64 v19; // x24
  __int64 v20; // x26
  __int64 v21; // x27
  struct WarBoardPieceData_array *v22; // x8
  unsigned int *pieceSaves; // x28
  WarBoardPieceData_o *v24; // x23
  WarBoardPieceData_SaveData_o *v25; // x22
  const MethodInfo *v26; // x2
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  __int64 v33; // x1
  struct WarBoardItemData_array *items; // x8
  il2cpp_array_size_t v35; // x22
  struct WarBoardItemData_SaveData_array *v36; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  unsigned __int64 v43; // x24
  __int64 v44; // x26
  __int64 v45; // x27
  struct WarBoardItemData_array *v46; // x8
  unsigned int *itemSaves; // x28
  WarBoardItemData_o *v48; // x23
  WarBoardItemData_SaveData_o *v49; // x22
  const MethodInfo *v50; // x2
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  struct WarBoardTreasureData_array *treasures; // x8
  il2cpp_array_size_t v58; // x22
  struct WarBoardTreasureData_SaveData_array *v59; // x0
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  unsigned __int64 v66; // x24
  __int64 v67; // x26
  __int64 v68; // x27
  struct WarBoardTreasureData_array *v69; // x8
  unsigned int *treasureSaves; // x28
  WarBoardTreasureData_o *v71; // x23
  WarBoardTreasureData_SaveData_o *v72; // x22
  const MethodInfo *v73; // x2
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  struct WarBoardWallData_array *walls; // x8
  il2cpp_array_size_t v81; // x22
  struct WarBoardWallData_SaveData_array *v82; // x0
  System_String_o *v83; // x2
  System_String_o *v84; // x3
  int32_t v85; // w4
  int32_t v86; // w5
  bool v87; // w6
  bool v88; // w7
  unsigned __int64 v89; // x24
  __int64 v90; // x26
  __int64 v91; // x27
  struct WarBoardWallData_array *v92; // x8
  unsigned int *wallSaves; // x28
  WarBoardWallData_o *v94; // x23
  WarBoardWallData_SaveData_o *v95; // x22
  const MethodInfo *v96; // x2
  System_String_o *v97; // x2
  System_String_o *v98; // x3
  int32_t v99; // w4
  int32_t v100; // w5
  bool v101; // w6
  bool v102; // w7
  struct WarBoardSquareData_array *squares; // x8
  il2cpp_array_size_t v104; // x22
  struct WarBoardSquareData_SaveData_array *v105; // x0
  System_String_o *v106; // x2
  System_String_o *v107; // x3
  int32_t v108; // w4
  int32_t v109; // w5
  bool v110; // w6
  bool v111; // w7
  unsigned __int64 v112; // x24
  __int64 v113; // x26
  __int64 v114; // x27
  struct WarBoardSquareData_array *v115; // x8
  unsigned int *squareSaves; // x28
  WarBoardSquareData_o *v117; // x23
  WarBoardSquareData_SaveData_o *v118; // x22
  const MethodInfo *v119; // x2
  System_String_o *v120; // x2
  System_String_o *v121; // x3
  int32_t v122; // w4
  int32_t v123; // w5
  bool v124; // w6
  bool v125; // w7
  struct UnityEngine_Vector2_o zeroVector; // d0
  bool isPlayedHalfDeadMessage; // w9
  struct System_Collections_Generic_List_WarBoardEventData__o *listEvent; // x8
  __int64 size; // x21
  struct WarBoardEventData_SaveData_array *v130; // x0
  System_String_o *v131; // x2
  System_String_o *v132; // x3
  int32_t v133; // w4
  int32_t v134; // w5
  bool v135; // w6
  bool v136; // w7
  System_String_o *v137; // x2
  System_String_o *v138; // x3
  int32_t v139; // w4
  int32_t v140; // w5
  bool v141; // w6
  bool v142; // w7
  unsigned __int64 v143; // x23
  __int64 v144; // x28
  unsigned int *eventSaves; // x29
  Il2CppObject *Item; // x25
  WarBoardEventData_SaveData_o *v147; // x24
  const MethodInfo *v148; // x2
  System_String_o *v149; // x2
  System_String_o *v150; // x3
  int32_t v151; // w4
  int32_t v152; // w5
  bool v153; // w6
  bool v154; // w7
  struct System_Int32_array *latestPieceActionSquareIndexes; // x1
  struct System_UInt32_array *latestBattlePieceUniqueIndexes; // x1
  System_String_o *v157; // x2
  System_String_o *v158; // x3
  int32_t v159; // w4
  int32_t v160; // w5
  bool v161; // w6
  bool v162; // w7
  struct System_Collections_Generic_List_WarBoardPrevCondData__o *listPrevCond; // x8
  __int64 v164; // x21
  struct WarBoardPrevCondData_SaveData_array *v165; // x0
  System_String_o *v166; // x2
  System_String_o *v167; // x3
  int32_t v168; // w4
  int32_t v169; // w5
  bool v170; // w6
  bool v171; // w7
  unsigned __int64 v172; // x23
  __int64 v173; // x28
  unsigned int *prevCondSaves; // x29
  Il2CppObject *v175; // x25
  WarBoardPrevCondData_SaveData_o *v176; // x24
  const MethodInfo *v177; // x2
  System_String_o *v178; // x2
  System_String_o *v179; // x3
  int32_t v180; // w4
  int32_t v181; // w5
  bool v182; // w6
  bool v183; // w7
  struct System_Collections_Generic_List_HoldReinforcementsData__o *reinforcementsSaveList; // x8
  __int64 v185; // x21
  struct HoldReinforcementsData_SaveData_array *v186; // x0
  System_String_o *v187; // x2
  System_String_o *v188; // x3
  int32_t v189; // w4
  int32_t v190; // w5
  bool v191; // w6
  bool v192; // w7
  unsigned __int64 v193; // x23
  __int64 v194; // x28
  unsigned int *reinforcementsSaves; // x29
  Il2CppObject *v196; // x25
  HoldReinforcementsData_SaveData_o *v197; // x24
  const MethodInfo *v198; // x2
  System_String_o *v199; // x2
  System_String_o *v200; // x3
  int32_t v201; // w4
  int32_t v202; // w5
  bool v203; // w6
  bool v204; // w7
  struct System_Int32_array *v205; // x0
  System_String_o *v206; // x2
  System_String_o *v207; // x3
  int32_t v208; // w4
  int32_t v209; // w5
  bool v210; // w6
  bool v211; // w7
  struct System_Collections_Generic_List_WarBoardUiData__o *listUiData; // x8
  __int64 v213; // x21
  struct WarBoardUiData_SaveData_array *v214; // x0
  System_String_o *v215; // x2
  System_String_o *v216; // x3
  int32_t v217; // w4
  int32_t v218; // w5
  bool v219; // w6
  bool v220; // w7
  unsigned __int64 v221; // x23
  __int64 v222; // x28
  unsigned int *uiDataSaves; // x29
  Il2CppObject *v224; // x25
  WarBoardUiData_SaveData_o *v225; // x24
  const MethodInfo *v226; // x2
  System_String_o *v227; // x2
  System_String_o *v228; // x3
  int32_t v229; // w4
  int32_t v230; // w5
  bool v231; // w6
  bool v232; // w7
  struct WarBoardDataEntity_o *v233; // x8
  int32_t v234; // w22
  struct WarBoardSquareIndexData_SaveData_array *v235; // x0
  System_String_o *v236; // x2
  System_String_o *v237; // x3
  int32_t v238; // w4
  int32_t v239; // w5
  bool v240; // w6
  bool v241; // w7
  unsigned __int64 v242; // x24
  __int64 v243; // x26
  __int64 v244; // x27
  struct WarBoardDataEntity_o *v245; // x8
  struct WarBoardSquareIndexData_array *squareIndexInfo; // x8
  unsigned int *v247; // x28
  WarBoardSquareIndexData_o *v248; // x23
  WarBoardSquareIndexData_SaveData_o *v249; // x22
  const MethodInfo *v250; // x2
  System_String_o *v251; // x2
  System_String_o *v252; // x3
  int32_t v253; // w4
  int32_t v254; // w5
  bool v255; // w6
  bool v256; // w7
  struct WarBoardDataEntity_o *v257; // x8
  int32_t v258; // w22
  struct WarBoardBossBattleData_SaveData_array *v259; // x0
  System_String_o *v260; // x2
  System_String_o *v261; // x3
  int32_t v262; // w4
  int32_t v263; // w5
  bool v264; // w6
  bool v265; // w7
  unsigned __int64 v266; // x24
  __int64 v267; // x26
  __int64 v268; // x27
  struct WarBoardDataEntity_o *v269; // x8
  struct WarBoardBossBattleData_array *bossBattleInfo; // x8
  unsigned int *v271; // x28
  WarBoardBossBattleData_o *v272; // x23
  WarBoardBossBattleData_SaveData_o *v273; // x22
  System_String_o *v274; // x2
  System_String_o *v275; // x3
  int32_t v276; // w4
  int32_t v277; // w5
  bool v278; // w6
  bool v279; // w7
  int32_t ContinueConsumeType_k__BackingField; // w8
  __int64 v281; // x0

  if ( (byte_5936134 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardUiData__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardPrevCondData__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardEventData__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_HoldReinforcementsData__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardEventData__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardUiData__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardPrevCondData__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_HoldReinforcementsData__get_Item__);
    sub_21FFC50(&WarBoardTreasureData_SaveData___TypeInfo);
    sub_21FFC50(&WarBoardSquareData_SaveData___TypeInfo);
    sub_21FFC50(&WarBoardSquareIndexData_SaveData___TypeInfo);
    sub_21FFC50(&HoldReinforcementsData_SaveData___TypeInfo);
    sub_21FFC50(&WarBoardItemData_SaveData___TypeInfo);
    sub_21FFC50(&WarBoardWallData_SaveData___TypeInfo);
    sub_21FFC50(&WarBoardPrevCondData_SaveData___TypeInfo);
    sub_21FFC50(&WarBoardEventData_SaveData___TypeInfo);
    sub_21FFC50(&WarBoardUiData_SaveData___TypeInfo);
    sub_21FFC50(&WarBoardPieceData_SaveData___TypeInfo);
    sub_21FFC50(&WarBoardBossBattleData_SaveData___TypeInfo);
    sub_21FFC50(&WarBoardSquareData_SaveData_TypeInfo);
    sub_21FFC50(&WarBoardTreasureData_SaveData_TypeInfo);
    sub_21FFC50(&WarBoardBossBattleData_SaveData_TypeInfo);
    sub_21FFC50(&WarBoardItemData_SaveData_TypeInfo);
    sub_21FFC50(&WarBoardPrevCondData_SaveData_TypeInfo);
    sub_21FFC50(&WarBoardWallData_SaveData_TypeInfo);
    sub_21FFC50(&WarBoardUiData_SaveData_TypeInfo);
    sub_21FFC50(&WarBoardEventData_SaveData_TypeInfo);
    sub_21FFC50(&WarBoardSquareIndexData_SaveData_TypeInfo);
    sub_21FFC50(&HoldReinforcementsData_SaveData_TypeInfo);
    sub_21FFC50(&WarBoardPieceData_SaveData_TypeInfo);
    byte_5936134 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !warBoardData )
    goto LABEL_117;
  serverData = warBoardData->fields.serverData;
  if ( !serverData )
    goto LABEL_117;
  *(_QWORD *)&this->fields.questId = *(_QWORD *)&serverData->fields.questId;
  turn = serverData->fields.turn;
  this->fields.stageId = serverData->fields.stageId;
  this->fields.turn = turn;
  v9 = *(_QWORD *)&serverData->fields.turnForceId;
  pieces = warBoardData->fields.pieces;
  *(_QWORD *)&this->fields.turnForceId = v9;
  if ( !pieces )
    goto LABEL_117;
  max_length = pieces->max_length;
  v12 = (struct WarBoardPieceData_SaveData_array *)sub_21FFD10(
                                                     WarBoardPieceData_SaveData___TypeInfo,
                                                     (unsigned int)max_length);
  this->fields.pieceSaves = v12;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.pieceSaves, (int32_t)v12, v13, v14, v15, v16, v17, v18);
  if ( (int)max_length >= 1 )
  {
    v19 = 0;
    v20 = (unsigned int)max_length;
    v21 = 8;
    while ( 1 )
    {
      v22 = warBoardData->fields.pieces;
      if ( !v22 )
        break;
      if ( v19 >= LODWORD(v22->max_length) )
        goto LABEL_118;
      pieceSaves = (unsigned int *)this->fields.pieceSaves;
      v24 = *(WarBoardPieceData_o **)((char *)&v22->obj.klass + v21 * 4);
      v25 = (WarBoardPieceData_SaveData_o *)sub_21FFEBC(WarBoardPieceData_SaveData_TypeInfo);
      WarBoardPieceData_SaveData___ctor_45000728(v25, v24, v26);
      if ( !pieceSaves )
        break;
      if ( v25 )
      {
        GutsCount = sub_21FFDA4(v25, *(_QWORD *)(*(_QWORD *)pieceSaves + 64LL));
        if ( !GutsCount )
        {
LABEL_119:
          v281 = sub_21FFEF0(GutsCount, v33);
          sub_21FFD90(v281, 0);
        }
      }
      if ( v19 >= pieceSaves[6] )
LABEL_118:
        sub_21FFED4(GutsCount);
      *(_QWORD *)&pieceSaves[v21] = v25;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&pieceSaves[v21], (int32_t)v25, v27, v28, v29, v30, v31, v32);
      ++v19;
      v21 += 2;
      if ( v20 == v19 )
        goto LABEL_15;
    }
LABEL_117:
    sub_21FFECC(GutsCount, v6);
  }
LABEL_15:
  items = warBoardData->fields.items;
  if ( !items )
    goto LABEL_117;
  v35 = items->max_length;
  v36 = (struct WarBoardItemData_SaveData_array *)sub_21FFD10(WarBoardItemData_SaveData___TypeInfo, (unsigned int)v35);
  this->fields.itemSaves = v36;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.itemSaves, (int32_t)v36, v37, v38, v39, v40, v41, v42);
  if ( (int)v35 >= 1 )
  {
    v43 = 0;
    v44 = (unsigned int)v35;
    v45 = 8;
    do
    {
      v46 = warBoardData->fields.items;
      if ( !v46 )
        goto LABEL_117;
      if ( v43 >= LODWORD(v46->max_length) )
        goto LABEL_118;
      itemSaves = (unsigned int *)this->fields.itemSaves;
      v48 = *(WarBoardItemData_o **)((char *)&v46->obj.klass + v45 * 4);
      v49 = (WarBoardItemData_SaveData_o *)sub_21FFEBC(WarBoardItemData_SaveData_TypeInfo);
      WarBoardItemData_SaveData___ctor_45000812(v49, v48, v50);
      if ( !itemSaves )
        goto LABEL_117;
      if ( v49 )
      {
        GutsCount = sub_21FFDA4(v49, *(_QWORD *)(*(_QWORD *)itemSaves + 64LL));
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v43 >= itemSaves[6] )
        goto LABEL_118;
      *(_QWORD *)&itemSaves[v45] = v49;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&itemSaves[v45], (int32_t)v49, v51, v52, v53, v54, v55, v56);
      ++v43;
      v45 += 2;
    }
    while ( v44 != v43 );
  }
  treasures = warBoardData->fields.treasures;
  if ( !treasures )
    goto LABEL_117;
  v58 = treasures->max_length;
  v59 = (struct WarBoardTreasureData_SaveData_array *)sub_21FFD10(
                                                        WarBoardTreasureData_SaveData___TypeInfo,
                                                        (unsigned int)v58);
  this->fields.treasureSaves = v59;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.treasureSaves,
    (int32_t)v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  if ( (int)v58 >= 1 )
  {
    v66 = 0;
    v67 = (unsigned int)v58;
    v68 = 8;
    do
    {
      v69 = warBoardData->fields.treasures;
      if ( !v69 )
        goto LABEL_117;
      if ( v66 >= LODWORD(v69->max_length) )
        goto LABEL_118;
      treasureSaves = (unsigned int *)this->fields.treasureSaves;
      v71 = *(WarBoardTreasureData_o **)((char *)&v69->obj.klass + v68 * 4);
      v72 = (WarBoardTreasureData_SaveData_o *)sub_21FFEBC(WarBoardTreasureData_SaveData_TypeInfo);
      WarBoardTreasureData_SaveData___ctor_45000896(v72, v71, v73);
      if ( !treasureSaves )
        goto LABEL_117;
      if ( v72 )
      {
        GutsCount = sub_21FFDA4(v72, *(_QWORD *)(*(_QWORD *)treasureSaves + 64LL));
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v66 >= treasureSaves[6] )
        goto LABEL_118;
      *(_QWORD *)&treasureSaves[v68] = v72;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&treasureSaves[v68], (int32_t)v72, v74, v75, v76, v77, v78, v79);
      ++v66;
      v68 += 2;
    }
    while ( v67 != v66 );
  }
  walls = warBoardData->fields.walls;
  if ( !walls )
    goto LABEL_117;
  v81 = walls->max_length;
  v82 = (struct WarBoardWallData_SaveData_array *)sub_21FFD10(WarBoardWallData_SaveData___TypeInfo, (unsigned int)v81);
  this->fields.wallSaves = v82;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.wallSaves, (int32_t)v82, v83, v84, v85, v86, v87, v88);
  if ( (int)v81 >= 1 )
  {
    v89 = 0;
    v90 = (unsigned int)v81;
    v91 = 8;
    do
    {
      v92 = warBoardData->fields.walls;
      if ( !v92 )
        goto LABEL_117;
      if ( v89 >= LODWORD(v92->max_length) )
        goto LABEL_118;
      wallSaves = (unsigned int *)this->fields.wallSaves;
      v94 = *(WarBoardWallData_o **)((char *)&v92->obj.klass + v91 * 4);
      v95 = (WarBoardWallData_SaveData_o *)sub_21FFEBC(WarBoardWallData_SaveData_TypeInfo);
      WarBoardWallData_SaveData___ctor_45001012(v95, v94, v96);
      if ( !wallSaves )
        goto LABEL_117;
      if ( v95 )
      {
        GutsCount = sub_21FFDA4(v95, *(_QWORD *)(*(_QWORD *)wallSaves + 64LL));
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v89 >= wallSaves[6] )
        goto LABEL_118;
      *(_QWORD *)&wallSaves[v91] = v95;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&wallSaves[v91], (int32_t)v95, v97, v98, v99, v100, v101, v102);
      ++v89;
      v91 += 2;
    }
    while ( v90 != v89 );
  }
  squares = warBoardData->fields.squares;
  if ( !squares )
    goto LABEL_117;
  v104 = squares->max_length;
  v105 = (struct WarBoardSquareData_SaveData_array *)sub_21FFD10(
                                                       WarBoardSquareData_SaveData___TypeInfo,
                                                       (unsigned int)v104);
  this->fields.squareSaves = v105;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.squareSaves,
    (int32_t)v105,
    v106,
    v107,
    v108,
    v109,
    v110,
    v111);
  if ( (int)v104 >= 1 )
  {
    v112 = 0;
    v113 = (unsigned int)v104;
    v114 = 8;
    do
    {
      v115 = warBoardData->fields.squares;
      if ( !v115 )
        goto LABEL_117;
      if ( v112 >= LODWORD(v115->max_length) )
        goto LABEL_118;
      squareSaves = (unsigned int *)this->fields.squareSaves;
      v117 = *(WarBoardSquareData_o **)((char *)&v115->obj.klass + v114 * 4);
      v118 = (WarBoardSquareData_SaveData_o *)sub_21FFEBC(WarBoardSquareData_SaveData_TypeInfo);
      WarBoardSquareData_SaveData___ctor_45001112(v118, v117, v119);
      if ( !squareSaves )
        goto LABEL_117;
      if ( v118 )
      {
        GutsCount = sub_21FFDA4(v118, *(_QWORD *)(*(_QWORD *)squareSaves + 64LL));
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v112 >= squareSaves[6] )
        goto LABEL_118;
      *(_QWORD *)&squareSaves[v114] = v118;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&squareSaves[v114],
        (int32_t)v118,
        v120,
        v121,
        v122,
        v123,
        v124,
        v125);
      ++v112;
      v114 += 2;
    }
    while ( v113 != v112 );
  }
  if ( !byte_5931820 )
  {
    sub_21FFC50(&UnityEngine_Vector2_TypeInfo);
    byte_5931820 = 1;
  }
  zeroVector = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  *(_QWORD *)&this->fields.cameraSize = 3212836864LL;
  this->fields.onBoardSkillUpdate = 0;
  this->fields.cameraPos = zeroVector;
  this->fields.randLogicCount = BattleRandom__GetLogicCount(0);
  GutsCount = BattleRandom__GetGutsCount(0);
  isPlayedHalfDeadMessage = warBoardData->fields.isPlayedHalfDeadMessage;
  listEvent = warBoardData->fields.listEvent;
  this->fields.randGutsCount = GutsCount;
  this->fields.isPlayedHalfDeadMessage = isPlayedHalfDeadMessage;
  if ( !listEvent )
    goto LABEL_117;
  size = (unsigned int)listEvent->fields._size;
  v130 = (struct WarBoardEventData_SaveData_array *)sub_21FFD10(
                                                      WarBoardEventData_SaveData___TypeInfo,
                                                      (unsigned int)size);
  this->fields.eventSaves = v130;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventSaves,
    (int32_t)v130,
    v131,
    v132,
    v133,
    v134,
    v135,
    v136);
  if ( (int)size >= 1 )
  {
    v143 = 0;
    v144 = 8;
    do
    {
      GutsCount = (__int64)warBoardData->fields.listEvent;
      if ( !GutsCount )
        goto LABEL_117;
      eventSaves = (unsigned int *)this->fields.eventSaves;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)GutsCount,
               v143,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_WarBoardEventData__get_Item__);
      v147 = (WarBoardEventData_SaveData_o *)sub_21FFEBC(WarBoardEventData_SaveData_TypeInfo);
      WarBoardEventData_SaveData___ctor_45001200(v147, (WarBoardEventData_o *)Item, v148);
      if ( !eventSaves )
        goto LABEL_117;
      if ( v147 )
      {
        GutsCount = sub_21FFDA4(v147, *(_QWORD *)(*(_QWORD *)eventSaves + 64LL));
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v143 >= eventSaves[6] )
        goto LABEL_118;
      *(_QWORD *)&eventSaves[v144] = v147;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&eventSaves[v144],
        (int32_t)v147,
        v149,
        v150,
        v151,
        v152,
        v153,
        v154);
      ++v143;
      v144 += 2;
    }
    while ( size != v143 );
  }
  latestPieceActionSquareIndexes = warBoardData->fields.latestPieceActionSquareIndexes;
  this->fields.winCondId = warBoardData->fields.winCondId;
  this->fields.latestPieceActionSquareIndexes = latestPieceActionSquareIndexes;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.latestPieceActionSquareIndexes,
    (int32_t)latestPieceActionSquareIndexes,
    v137,
    v138,
    v139,
    v140,
    v141,
    v142);
  latestBattlePieceUniqueIndexes = warBoardData->fields.latestBattlePieceUniqueIndexes;
  this->fields.latestBattlePieceUniqueIndexes = latestBattlePieceUniqueIndexes;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.latestBattlePieceUniqueIndexes,
    (int32_t)latestBattlePieceUniqueIndexes,
    v157,
    v158,
    v159,
    v160,
    v161,
    v162);
  listPrevCond = warBoardData->fields.listPrevCond;
  if ( !listPrevCond )
    goto LABEL_117;
  v164 = (unsigned int)listPrevCond->fields._size;
  v165 = (struct WarBoardPrevCondData_SaveData_array *)sub_21FFD10(
                                                         WarBoardPrevCondData_SaveData___TypeInfo,
                                                         (unsigned int)v164);
  this->fields.prevCondSaves = v165;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.prevCondSaves,
    (int32_t)v165,
    v166,
    v167,
    v168,
    v169,
    v170,
    v171);
  if ( (int)v164 >= 1 )
  {
    v172 = 0;
    v173 = 8;
    do
    {
      GutsCount = (__int64)warBoardData->fields.listPrevCond;
      if ( !GutsCount )
        goto LABEL_117;
      prevCondSaves = (unsigned int *)this->fields.prevCondSaves;
      v175 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)GutsCount,
               v172,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_WarBoardPrevCondData__get_Item__);
      v176 = (WarBoardPrevCondData_SaveData_o *)sub_21FFEBC(WarBoardPrevCondData_SaveData_TypeInfo);
      WarBoardPrevCondData_SaveData___ctor_45001260(v176, (WarBoardPrevCondData_o *)v175, v177);
      if ( !prevCondSaves )
        goto LABEL_117;
      if ( v176 )
      {
        GutsCount = sub_21FFDA4(v176, *(_QWORD *)(*(_QWORD *)prevCondSaves + 64LL));
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v172 >= prevCondSaves[6] )
        goto LABEL_118;
      *(_QWORD *)&prevCondSaves[v173] = v176;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&prevCondSaves[v173],
        (int32_t)v176,
        v178,
        v179,
        v180,
        v181,
        v182,
        v183);
      ++v172;
      v173 += 2;
    }
    while ( v164 != v172 );
  }
  reinforcementsSaveList = warBoardData->fields.reinforcementsSaveList;
  if ( !reinforcementsSaveList )
    goto LABEL_117;
  v185 = (unsigned int)reinforcementsSaveList->fields._size;
  v186 = (struct HoldReinforcementsData_SaveData_array *)sub_21FFD10(
                                                           HoldReinforcementsData_SaveData___TypeInfo,
                                                           (unsigned int)v185);
  this->fields.reinforcementsSaves = v186;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.reinforcementsSaves,
    (int32_t)v186,
    v187,
    v188,
    v189,
    v190,
    v191,
    v192);
  if ( (int)v185 >= 1 )
  {
    v193 = 0;
    v194 = 8;
    do
    {
      GutsCount = (__int64)warBoardData->fields.reinforcementsSaveList;
      if ( !GutsCount )
        goto LABEL_117;
      reinforcementsSaves = (unsigned int *)this->fields.reinforcementsSaves;
      v196 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)GutsCount,
               v193,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_HoldReinforcementsData__get_Item__);
      v197 = (HoldReinforcementsData_SaveData_o *)sub_21FFEBC(HoldReinforcementsData_SaveData_TypeInfo);
      HoldReinforcementsData_SaveData___ctor_45001312(v197, (HoldReinforcementsData_o *)v196, v198);
      if ( !reinforcementsSaves )
        goto LABEL_117;
      if ( v197 )
      {
        GutsCount = sub_21FFDA4(v197, *(_QWORD *)(*(_QWORD *)reinforcementsSaves + 64LL));
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v193 >= reinforcementsSaves[6] )
        goto LABEL_118;
      *(_QWORD *)&reinforcementsSaves[v194] = v197;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&reinforcementsSaves[v194],
        (int32_t)v197,
        v199,
        v200,
        v201,
        v202,
        v203,
        v204);
      ++v193;
      v194 += 2;
    }
    while ( v185 != v193 );
  }
  GutsCount = (__int64)warBoardData->fields.playedStageReinforcementsList;
  if ( !GutsCount )
    goto LABEL_117;
  v205 = System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)GutsCount,
           (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.playedReinforcements = v205;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.playedReinforcements,
    (int32_t)v205,
    v206,
    v207,
    v208,
    v209,
    v210,
    v211);
  listUiData = warBoardData->fields.listUiData;
  if ( !listUiData )
    goto LABEL_117;
  v213 = (unsigned int)listUiData->fields._size;
  v214 = (struct WarBoardUiData_SaveData_array *)sub_21FFD10(WarBoardUiData_SaveData___TypeInfo, (unsigned int)v213);
  this->fields.uiDataSaves = v214;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.uiDataSaves,
    (int32_t)v214,
    v215,
    v216,
    v217,
    v218,
    v219,
    v220);
  if ( (int)v213 >= 1 )
  {
    v221 = 0;
    v222 = 8;
    do
    {
      GutsCount = (__int64)warBoardData->fields.listUiData;
      if ( !GutsCount )
        goto LABEL_117;
      uiDataSaves = (unsigned int *)this->fields.uiDataSaves;
      v224 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)GutsCount,
               v221,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_WarBoardUiData__get_Item__);
      v225 = (WarBoardUiData_SaveData_o *)sub_21FFEBC(WarBoardUiData_SaveData_TypeInfo);
      WarBoardUiData_SaveData___ctor_45001372(v225, (WarBoardUiData_o *)v224, v226);
      if ( !uiDataSaves )
        goto LABEL_117;
      if ( v225 )
      {
        GutsCount = sub_21FFDA4(v225, *(_QWORD *)(*(_QWORD *)uiDataSaves + 64LL));
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v221 >= uiDataSaves[6] )
        goto LABEL_118;
      *(_QWORD *)&uiDataSaves[v222] = v225;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&uiDataSaves[v222],
        (int32_t)v225,
        v227,
        v228,
        v229,
        v230,
        v231,
        v232);
      ++v221;
      v222 += 2;
    }
    while ( v213 != v221 );
  }
  v233 = warBoardData->fields.serverData;
  if ( !v233 )
    goto LABEL_117;
  v234 = System_Linq_Enumerable__Count_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v233->fields.squareIndexInfo,
           (const MethodInfo_384633C *)Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___);
  v235 = (struct WarBoardSquareIndexData_SaveData_array *)sub_21FFD10(
                                                            WarBoardSquareIndexData_SaveData___TypeInfo,
                                                            (unsigned int)v234);
  this->fields.squareIndexInfo = v235;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.squareIndexInfo,
    (int32_t)v235,
    v236,
    v237,
    v238,
    v239,
    v240,
    v241);
  if ( v234 >= 1 )
  {
    v242 = 0;
    v243 = (unsigned int)v234;
    v244 = 8;
    do
    {
      v245 = warBoardData->fields.serverData;
      if ( !v245 )
        goto LABEL_117;
      squareIndexInfo = v245->fields.squareIndexInfo;
      if ( !squareIndexInfo )
        goto LABEL_117;
      if ( v242 >= LODWORD(squareIndexInfo->max_length) )
        goto LABEL_118;
      v247 = (unsigned int *)this->fields.squareIndexInfo;
      v248 = *(WarBoardSquareIndexData_o **)((char *)&squareIndexInfo->obj.klass + v244 * 4);
      v249 = (WarBoardSquareIndexData_SaveData_o *)sub_21FFEBC(WarBoardSquareIndexData_SaveData_TypeInfo);
      WarBoardSquareIndexData_SaveData___ctor_45001452(v249, v248, v250);
      if ( !v247 )
        goto LABEL_117;
      if ( v249 )
      {
        GutsCount = sub_21FFDA4(v249, *(_QWORD *)(*(_QWORD *)v247 + 64LL));
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v242 >= v247[6] )
        goto LABEL_118;
      *(_QWORD *)&v247[v244] = v249;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v247[v244], (int32_t)v249, v251, v252, v253, v254, v255, v256);
      ++v242;
      v244 += 2;
    }
    while ( v243 != v242 );
  }
  v257 = warBoardData->fields.serverData;
  if ( !v257 )
    goto LABEL_117;
  v258 = System_Linq_Enumerable__Count_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v257->fields.bossBattleInfo,
           (const MethodInfo_384633C *)Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___);
  v259 = (struct WarBoardBossBattleData_SaveData_array *)sub_21FFD10(
                                                           WarBoardBossBattleData_SaveData___TypeInfo,
                                                           (unsigned int)v258);
  this->fields.bossBattleInfo = v259;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.bossBattleInfo,
    (int32_t)v259,
    v260,
    v261,
    v262,
    v263,
    v264,
    v265);
  if ( v258 >= 1 )
  {
    v266 = 0;
    v267 = (unsigned int)v258;
    v268 = 8;
    do
    {
      v269 = warBoardData->fields.serverData;
      if ( !v269 )
        goto LABEL_117;
      bossBattleInfo = v269->fields.bossBattleInfo;
      if ( !bossBattleInfo )
        goto LABEL_117;
      if ( v266 >= LODWORD(bossBattleInfo->max_length) )
        goto LABEL_118;
      v271 = (unsigned int *)this->fields.bossBattleInfo;
      v272 = *(WarBoardBossBattleData_o **)((char *)&bossBattleInfo->obj.klass + v268 * 4);
      v273 = (WarBoardBossBattleData_SaveData_o *)sub_21FFEBC(WarBoardBossBattleData_SaveData_TypeInfo);
      WarBoardBossBattleData_SaveData___ctor_44799136(v273, v272, 0);
      if ( !v271 )
        goto LABEL_117;
      if ( v273 )
      {
        GutsCount = sub_21FFDA4(v273, *(_QWORD *)(*(_QWORD *)v271 + 64LL));
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v266 >= v271[6] )
        goto LABEL_118;
      *(_QWORD *)&v271[v268] = v273;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v271[v268], (int32_t)v273, v274, v275, v276, v277, v278, v279);
      ++v266;
      v268 += 2;
    }
    while ( v267 != v266 );
  }
  ContinueConsumeType_k__BackingField = warBoardData->fields._ContinueConsumeType_k__BackingField;
  *(_WORD *)&this->fields.isContinue = 0;
  this->fields.localSaveTiming = warBoardData->fields.localSaveTiming;
  this->fields.continueConsumeType = ContinueConsumeType_k__BackingField;
}


void WarBoardData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593613A & 1) == 0 )
  {
    sub_21FFC50(&WarBoardData___c_TypeInfo);
    byte_593613A = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(WarBoardData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardData___c_TypeInfo->static_fields->__9 = (struct WarBoardData___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)WarBoardData___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardData___c___ctor(WarBoardData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t WarBoardData___c____ctor_b__77_0(
        WarBoardData___c_o *this,
        WarBoardStageLayoutEntity_o *x,
        WarBoardStageLayoutEntity_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_21FFECC(this, x);
  return x->fields.squareIndex - y->fields.squareIndex;
}


uint32_t WarBoardData___c____ctor_b__77_1(
        WarBoardData___c_o *this,
        WarBoardStageNpcEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return (x->fields.forceId << 24) | ((unsigned __int8)x->fields.groupId << 16);
}


uint32_t WarBoardData___c____ctor_b__77_2(
        WarBoardData___c_o *this,
        WarBoardActionPointEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return (x->fields.forceId << 24) | ((unsigned __int8)x->fields.groupId << 16);
}


int32_t WarBoardData___c____ctor_b__77_3(
        WarBoardData___c_o *this,
        WarBoardStageNpcEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.forceId;
}


int32_t WarBoardData___c____ctor_b__77_4(
        WarBoardData___c_o *this,
        WarBoardStageNpcEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.groupId;
}


bool WarBoardData___c____ctor_b__77_9(
        WarBoardData___c_o *this,
        WarBoardUserTreasureData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.isReceived;
}


BattleBuffData_o *WarBoardData___c___BuffTurnProgressing_b__191_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *p,
        const MethodInfo *method)
{
  struct BattleServantData_o *battleServant_k__BackingField; // x8

  if ( !p )
    sub_21FFECC(this, 0);
  battleServant_k__BackingField = p->fields._battleServant_k__BackingField;
  if ( battleServant_k__BackingField )
    return battleServant_k__BackingField->fields.buffData;
  else
    return 0;
}


bool WarBoardData___c___BuffTurnProgressing_b__191_1(
        WarBoardData___c_o *this,
        BattleBuffData_o *b,
        const MethodInfo *method)
{
  return b != 0;
}


void WarBoardData___c___BuffTurnProgressing_b__191_2(
        WarBoardData___c_o *this,
        BattleBuffData_o *b,
        const MethodInfo *method)
{
  if ( !b )
    sub_21FFECC(this, 0);
  BattleBuffData__BoardTurnProgressing(b, 0);
}


bool WarBoardData___c___CheckWinCond_b__98_0(WarBoardData___c_o *this, int32_t x, const MethodInfo *method)
{
  return x > 0;
}


void WarBoardData___c___CreateEventBossUIDataTask_b__152_0(WarBoardData___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  WarBoardManager_o *v4; // x19

  if ( (byte_593613C & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_593613C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v3);
  v4 = (WarBoardManager_o *)Instance;
  WarBoardManager__UpdateEventBossUIData((WarBoardManager_o *)Instance, 0);
  WarBoardManager__SaveEventBossUIData(v4, v4->fields._EventId_k__BackingField, v4->fields._StageId_k__BackingField, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


bool WarBoardData___c___GetAliveEnemyServantPieces_b__110_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return !x->fields._isDead_k__BackingField
      && x->fields._forceId_k__BackingField
      && x->fields._type_k__BackingField == 0;
}


bool WarBoardData___c___GetAlivePieces_b__107_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return !x->fields._isDead_k__BackingField;
}


bool WarBoardData___c___GetAlivePlayerGroupServantPieces_b__109_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return !x->fields._isDead_k__BackingField
      && !x->fields._forceId_k__BackingField
      && !x->fields._groupId_k__BackingField
      && x->fields._type_k__BackingField == 0;
}


bool WarBoardData___c___GetAliveServantPieces_b__108_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return !x->fields._isDead_k__BackingField && x->fields._type_k__BackingField == 0;
}


bool WarBoardData___c___GetEditableServantPieces_b__120_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return !x->fields._forceId_k__BackingField
      && !x->fields._groupId_k__BackingField
      && x->fields._type_k__BackingField == 0;
}


bool WarBoardData___c___GetHoldReinforcements_b__188_0(
        WarBoardData___c_o *this,
        HoldReinforcementsData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields._holdNum_k__BackingField < 1;
}


int32_t WarBoardData___c___GetInRangeSquareIndecies_b__123_0(
        WarBoardData___c_o *this,
        WarBoardData_SquareRangeSearch_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.squareIndex;
}


bool WarBoardData___c___GetPlayerMasterPiece_b__104_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return !x->fields._forceId_k__BackingField
      && !x->fields._groupId_k__BackingField
      && x->fields._type_k__BackingField == 1;
}


bool WarBoardData___c___GetPlayerPieces_b__121_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return !x->fields._forceId_k__BackingField
      && !x->fields._groupId_k__BackingField
      && x->fields._iconId_k__BackingField != 0;
}


bool WarBoardData___c___IsReachableWinConditions_b__95_0(
        WarBoardData___c_o *this,
        System_Collections_Generic_KeyValuePair_int__bool__o status,
        const MethodInfo *method)
{
  if ( (byte_593613B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__);
    byte_593613B = 1;
  }
  return (*(_QWORD *)&status & 0xFF00000000LL) != 0;
}


int32_t WarBoardData___c___SetContinue_b__82_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields._index_k__BackingField;
}


BattleServantData_o *WarBoardData___c___SetContinue_b__82_1(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields._battleServant_k__BackingField;
}


bool WarBoardData___c___SetContinue_b__82_2(WarBoardData___c_o *this, WarBoardPieceData_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields._isDead_k__BackingField && x->fields._battleServant_k__BackingField != 0;
}


int32_t WarBoardData___c___SetContinue_b__82_3(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct BattleServantData_o *battleServant_k__BackingField; // x8

  if ( !x || (battleServant_k__BackingField = x->fields._battleServant_k__BackingField) == 0 )
    sub_21FFECC(this, x);
  return battleServant_k__BackingField->fields.uniqueId;
}


void WarBoardData___c___SetContinue_b__82_4(WarBoardData___c_o *this, WarBoardPieceData_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  WarBoardPieceData__ProcContinue(x, (const MethodInfo *)x);
}


bool WarBoardData___c___SetPlayerMasterUserEquip_b__144_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return !x->fields._forceId_k__BackingField
      && !x->fields._groupId_k__BackingField
      && x->fields._type_k__BackingField == 1;
}


void WarBoardData___c___SetRequest_b__156_0(WarBoardData___c_o *this, WarBoardPieceData_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  WarBoardPieceData__SetServarData(x, (const MethodInfo *)x);
}


System_String_o *WarBoardData___c___SetRequest_b__156_1(
        WarBoardData___c_o *this,
        WarBoardItemData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return WarBoardItemData__ToJson(x, (const MethodInfo *)x);
}


bool WarBoardData___c___SetRequest_b__156_2(WarBoardData___c_o *this, System_String_o *x, const MethodInfo *method)
{
  return !System_String__IsNullOrEmpty(x, 0);
}


WarBoardPieceBaseComponent_o *WarBoardData___c___UpdateBuffTurnNoticeDisp_b__192_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *p,
        const MethodInfo *method)
{
  if ( !p )
    sub_21FFECC(this, 0);
  return p->fields.pieceComponent;
}


bool WarBoardData___c___UpdateBuffTurnNoticeDisp_b__192_1(
        WarBoardData___c_o *this,
        WarBoardPieceBaseComponent_o *c,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *v8; // x19

  if ( (byte_593613D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593613D = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, c, method);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)c, 0, 0);
  if ( !v4 )
    return 0;
  if ( !c )
    sub_21FFECC(v4, v5);
  v8 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))c->klass->vtable._4_get_BuffTrunNotice.methodPtr)(
                                 c,
                                 c->klass->vtable._4_get_BuffTrunNotice.method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  return UnityEngine_Object__op_Inequality(v8, 0, 0);
}


void WarBoardData___c___UpdateBuffTurnNoticeDisp_b__192_2(
        WarBoardData___c_o *this,
        WarBoardPieceBaseComponent_o *n,
        const MethodInfo *method)
{
  if ( !n
    || (this = (WarBoardData___c_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *, const MethodInfo *))n->klass->vtable._4_get_BuffTrunNotice.methodPtr)(
                                       n,
                                       n->klass->vtable._4_get_BuffTrunNotice.method,
                                       method)) == 0 )
  {
    sub_21FFECC(this, n);
  }
  WarBoardServantPieceBuffTurnComponent__UpdateDisp((WarBoardServantPieceBuffTurnComponent_o *)this, 1, 0);
}


int32_t WarBoardData___c___UpdateCurrentPartyCost_b__143_0(
        WarBoardData___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return UserServantEntity__getCost(x, 0);
}


bool WarBoardData___c___get_PlayerMasterUserEquipId_b__62_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return !x->fields._forceId_k__BackingField
      && !x->fields._groupId_k__BackingField
      && x->fields._type_k__BackingField == 1;
}


void WarBoardData___c__DisplayClass100_0___ctor(WarBoardData___c__DisplayClass100_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass100_0___GetPiece_b__0(
        WarBoardData___c__DisplayClass100_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !this->fields.ignoreDead )
  {
    if ( x )
      return x->fields._uniqueIndex_k__BackingField == this->fields.uniqueId;
LABEL_7:
    sub_21FFECC(this, x);
  }
  if ( !x )
    goto LABEL_7;
  if ( x->fields._isDead_k__BackingField )
    return 0;
  return x->fields._uniqueIndex_k__BackingField == this->fields.uniqueId;
}


void WarBoardData___c__DisplayClass101_0___ctor(WarBoardData___c__DisplayClass101_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass101_0___GetPiece_b__0(
        WarBoardData___c__DisplayClass101_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return !x->fields._isDead_k__BackingField && x->fields._nowSquareIndex_k__BackingField == this->fields.squareIndex;
}


void WarBoardData___c__DisplayClass102_0___ctor(WarBoardData___c__DisplayClass102_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass102_0___GetPiece_b__0(
        WarBoardData___c__DisplayClass102_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !this->fields.ignoreDead )
  {
    if ( x )
      return x->fields._uniqueIndex_k__BackingField == this->fields.uniqueIndex;
LABEL_7:
    sub_21FFECC(this, x);
  }
  if ( !x )
    goto LABEL_7;
  if ( x->fields._isDead_k__BackingField )
    return 0;
  return x->fields._uniqueIndex_k__BackingField == this->fields.uniqueIndex;
}


void WarBoardData___c__DisplayClass105_0___ctor(WarBoardData___c__DisplayClass105_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass105_0___GetEventBossPiece_b__0(
        WarBoardData___c__DisplayClass105_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardUserServantData_o *serverServantData; // x8

  if ( !x || (serverServantData = x->fields.serverServantData) == 0 )
    sub_21FFECC(this, x);
  return serverServantData->fields.stageBossIdx == this->fields.stageBossIndex;
}


void WarBoardData___c__DisplayClass106_0___ctor(WarBoardData___c__DisplayClass106_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass106_0___GetServantPieces_b__0(
        WarBoardData___c__DisplayClass106_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  _BOOL4 v3; // w8

  if ( !x )
    sub_21FFECC(this, 0);
  if ( x->fields._forceId_k__BackingField )
    v3 = 0;
  else
    v3 = x->fields._groupId_k__BackingField == 0;
  return this->fields.isPlayerGroup == v3 && !x->fields._type_k__BackingField && x->fields._iconId_k__BackingField != 0;
}


void WarBoardData___c__DisplayClass116_0___ctor(WarBoardData___c__DisplayClass116_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass116_0___GetPieces_b__0(
        WarBoardData___c__DisplayClass116_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return this->fields.forceIdOnly == HIBYTE(x->fields._uniqueIndex_k__BackingField) << 24;
}


void WarBoardData___c__DisplayClass117_0___ctor(WarBoardData___c__DisplayClass117_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass117_0___GetPieces_b__0(
        WarBoardData___c__DisplayClass117_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return this->fields.forceAndGroup == HIWORD(x->fields._uniqueIndex_k__BackingField) << 16;
}


void WarBoardData___c__DisplayClass118_0___ctor(WarBoardData___c__DisplayClass118_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass118_0___GetPicesForRange_b__0(
        WarBoardData___c__DisplayClass118_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass118_0_o *v4; // x20

  v4 = this;
  if ( (byte_593613E & 1) == 0 )
  {
    this = (WarBoardData___c__DisplayClass118_0_o *)sub_21FFC50(&Method_System_Linq_Enumerable_Contains_int___);
    byte_593613E = 1;
  }
  if ( !x )
    sub_21FFECC(this, x);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.inRangeSquaers,
           x->fields._nowSquareIndex_k__BackingField,
           (const MethodInfo_3843178 *)Method_System_Linq_Enumerable_Contains_int___);
}


void WarBoardData___c__DisplayClass119_0___ctor(WarBoardData___c__DisplayClass119_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass119_0___GetPicesForRangeIsAlive_b__0(
        WarBoardData___c__DisplayClass119_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass119_0_o *v4; // x20

  v4 = this;
  if ( (byte_593613F & 1) == 0 )
  {
    this = (WarBoardData___c__DisplayClass119_0_o *)sub_21FFC50(&Method_System_Linq_Enumerable_Contains_int___);
    byte_593613F = 1;
  }
  if ( !x )
    sub_21FFECC(this, x);
  return !x->fields._isDead_k__BackingField
      && System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.inRangeSquaers,
           x->fields._nowSquareIndex_k__BackingField,
           (const MethodInfo_3843178 *)Method_System_Linq_Enumerable_Contains_int___);
}


void WarBoardData___c__DisplayClass123_0___ctor(WarBoardData___c__DisplayClass123_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass123_0___GetInRangeSquareIndecies_b__1(
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


void WarBoardData___c__DisplayClass125_0___ctor(WarBoardData___c__DisplayClass125_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass125_0___SearchInRangeSquares_b__0(
        WarBoardData___c__DisplayClass125_0_o *this,
        WarBoardData_SquareRangeSearch_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.squareIndex == this->fields.start;
}


void WarBoardData___c__DisplayClass125_1___ctor(WarBoardData___c__DisplayClass125_1_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass125_1___SearchInRangeSquares_b__1(
        WarBoardData___c__DisplayClass125_1_o *this,
        WarBoardData_SquareRangeSearch_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.squareIndex != this->fields.position;
}


bool WarBoardData___c__DisplayClass125_1___SearchInRangeSquares_b__2(
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
    sub_21FFECC(this, x);
  }
  return 0;
}


void WarBoardData___c__DisplayClass128_0___ctor(WarBoardData___c__DisplayClass128_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass128_0___GetSquare_b__0(
        WarBoardData___c__DisplayClass128_0_o *this,
        WarBoardSquareData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


void WarBoardData___c__DisplayClass130_0___ctor(WarBoardData___c__DisplayClass130_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass130_0___GetCondSquare_b__0(
        WarBoardData___c__DisplayClass130_0_o *this,
        WarBoardSquareData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


void WarBoardData___c__DisplayClass133_0___ctor(WarBoardData___c__DisplayClass133_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass133_0___GetDeploySquareIds_b__0(
        WarBoardData___c__DisplayClass133_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.value == x;
}


bool WarBoardData___c__DisplayClass133_0___GetDeploySquareIds_b__1(
        WarBoardData___c__DisplayClass133_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.value == x;
}


void WarBoardData___c__DisplayClass135_0___ctor(WarBoardData___c__DisplayClass135_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass135_0___GetItem_b__0(
        WarBoardData___c__DisplayClass135_0_o *this,
        WarBoardItemData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


void WarBoardData___c__DisplayClass137_0___ctor(WarBoardData___c__DisplayClass137_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass137_0___GetTreasure_b__0(
        WarBoardData___c__DisplayClass137_0_o *this,
        WarBoardTreasureData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


void WarBoardData___c__DisplayClass138_0___ctor(WarBoardData___c__DisplayClass138_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass138_0___GetUnusedTreasure_b__0(
        WarBoardData___c__DisplayClass138_0_o *this,
        WarBoardTreasureData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return !x->fields._isUse_k__BackingField && x->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


void WarBoardData___c__DisplayClass140_0___ctor(WarBoardData___c__DisplayClass140_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass140_0___GetWall_b__0(
        WarBoardData___c__DisplayClass140_0_o *this,
        WarBoardWallData_o *x,
        const MethodInfo *method)
{
  if ( this->fields.ignoreDestroy )
  {
    if ( x )
      return x->fields._squareIndex_k__BackingField == this->fields.squareIndex;
LABEL_7:
    sub_21FFECC(this, x);
  }
  if ( !x )
    goto LABEL_7;
  if ( !x->fields._isDestroy_k__BackingField )
    return x->fields._squareIndex_k__BackingField == this->fields.squareIndex;
  return 0;
}


void WarBoardData___c__DisplayClass142_0___ctor(WarBoardData___c__DisplayClass142_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass142_0___GetEffect_b__0(
        WarBoardData___c__DisplayClass142_0_o *this,
        WarBoardEffectData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


void WarBoardData___c__DisplayClass143_0___ctor(WarBoardData___c__DisplayClass143_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass143_0___UpdateCurrentPartyCost_b__1(
        WarBoardData___c__DisplayClass143_0_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass143_0_o *v4; // x20
  __int64 v5; // x19
  __int64 v6; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *svtMaster; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v4 = this;
  if ( (byte_5936140 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    this = (WarBoardData___c__DisplayClass143_0_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5936140 = 1;
  }
  if ( !x )
    goto LABEL_9;
  v6 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  svtMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields.svtMaster;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, x, method);
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  this = (WarBoardData___c__DisplayClass143_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                    v9,
                                                    0);
  if ( !svtMaster
    || (this = (WarBoardData___c__DisplayClass143_0_o *)DataMasterBase_object__object__int___GetEntity(
                                                          svtMaster,
                                                          (int32_t)this,
                                                          (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
LABEL_9:
    sub_21FFECC(this, x);
  }
  return ServantEntity__get_IsServant((ServantEntity_o *)this, 0);
}


void WarBoardData___c__DisplayClass145_0___ctor(WarBoardData___c__DisplayClass145_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass145_0___GetPieceDispPriority_b__0(
        WarBoardData___c__DisplayClass145_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *piece; // x8

  if ( !x || (piece = this->fields.piece) == 0 )
    sub_21FFECC(this, x);
  return x->fields._uniqueIndex_k__BackingField == piece->fields._uniqueIndex_k__BackingField;
}


void WarBoardData___c__DisplayClass151_0___ctor(WarBoardData___c__DisplayClass151_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass151_0___UpdateFromServerData_b__0(
        WarBoardData___c__DisplayClass151_0_o *this,
        WarBoardUserWallData_o *x,
        const MethodInfo *method)
{
  struct WarBoardWallData_o *wall; // x8

  if ( !x || (wall = this->fields.wall) == 0 )
    sub_21FFECC(this, x);
  return x->fields.id == wall->fields._wallId_k__BackingField;
}


void WarBoardData___c__DisplayClass153_0___ctor(WarBoardData___c__DisplayClass153_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass153_0___GetStageBossData_b__0(
        WarBoardData___c__DisplayClass153_0_o *this,
        WarBoardUserServantData_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_21FFECC(this, 0);
  return n->fields.stageBossIdx == this->fields.stageBossIdx;
}


void WarBoardData___c__DisplayClass154_0___ctor(WarBoardData___c__DisplayClass154_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass154_0___ShowConsumedPieceActionPointPopup_b__0(
        WarBoardData___c__DisplayClass154_0_o *this,
        const MethodInfo *method)
{
  return this->fields.consumedPiecePopupClose;
}


void WarBoardData___c__DisplayClass154_0___ShowConsumedPieceActionPointPopup_b__1(
        WarBoardData___c__DisplayClass154_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_bool__o *_9__2; // x21
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  int32_t key; // w0
  struct System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___o *consumedPieceActionPointDict; // x8
  int32_t v13; // w19
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *Only; // x0
  Il2CppObject *value; // x1
  System_Collections_Generic_KeyValuePair_int__object__o KeyValuePair_int__object; // kr00_16

  if ( (byte_5936141 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_bool__TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__List_WarBoardPieceData___get_Key__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__List_WarBoardPieceData___get_Value__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardPieceData__AsReadOnly__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__2__);
    byte_5936141 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_bool__o *)sub_21FFEBC(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v5, v6, v7, v8, v9, v10);
  }
  key = System_Linq_Enumerable__First_KeyValuePair_int__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.consumedPieceActionPointDict,
          (const MethodInfo_384BAA8 *)Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____).fields.key;
  consumedPieceActionPointDict = this->fields.consumedPieceActionPointDict;
  v13 = key;
  KeyValuePair_int__object = System_Linq_Enumerable__First_KeyValuePair_int__object__(
                               (System_Collections_Generic_IEnumerable_TSource__o *)consumedPieceActionPointDict,
                               (const MethodInfo_384BAA8 *)Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____);
  value = KeyValuePair_int__object.fields.value;
  Only = *(System_Collections_ObjectModel_ReadOnlyCollection_T__o **)&KeyValuePair_int__object.fields.key;
  if ( !KeyValuePair_int__object.fields.value
    || (Only = System_Collections_Generic_List_object___AsReadOnly(
                 (System_Collections_Generic_List_object__o *)KeyValuePair_int__object.fields.value,
                 (const MethodInfo_444FD58 *)Method_System_Collections_Generic_List_WarBoardPieceData__AsReadOnly__),
        !Instance) )
  {
    sub_21FFECC(Only, value);
  }
  WarBoardManager__ShowConsumedPieceActionPointPopup(
    (WarBoardManager_o *)Instance,
    _9__2,
    v13,
    (System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__o *)Only,
    0);
}


void WarBoardData___c__DisplayClass154_0___ShowConsumedPieceActionPointPopup_b__2(
        WarBoardData___c__DisplayClass154_0_o *this,
        bool _,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  WarBoardManager_o *v6; // x20
  System_Action_o *_9__3; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_5936142 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__3__);
    byte_5936142 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v6 = (WarBoardManager_o *)Instance;
  _9__3 = this->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__3__,
      0);
    this->fields.__9__3 = _9__3;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__9__3, (int32_t)_9__3, v8, v9, v10, v11, v12, v13);
  }
  if ( !v6 )
    sub_21FFECC(Instance, v5);
  WarBoardManager__HideConsumedPieceActionPointPopup(v6, _9__3, 0);
}


void WarBoardData___c__DisplayClass154_0___ShowConsumedPieceActionPointPopup_b__3(
        WarBoardData___c__DisplayClass154_0_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___o *consumedPieceActionPointDict; // x20
  const MethodInfo_384BAA8 *v4; // x1
  WarBoardData_o *_4__this; // x0
  Il2CppObject *value; // x1
  System_Collections_Generic_KeyValuePair_int__object__o KeyValuePair_int__object; // kr00_16

  if ( (byte_5936143 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Remove__);
    sub_21FFC50(&Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__List_WarBoardPieceData___get_Key__);
    byte_5936143 = 1;
  }
  consumedPieceActionPointDict = this->fields.consumedPieceActionPointDict;
  v4 = (const MethodInfo_384BAA8 *)Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____;
  this->fields.consumedPiecePopupClose = 1;
  KeyValuePair_int__object = System_Linq_Enumerable__First_KeyValuePair_int__object__(
                               (System_Collections_Generic_IEnumerable_TSource__o *)consumedPieceActionPointDict,
                               v4);
  value = KeyValuePair_int__object.fields.value;
  _4__this = *(WarBoardData_o **)&KeyValuePair_int__object.fields.key;
  if ( !consumedPieceActionPointDict
    || (System_Collections_Generic_Dictionary_int__object___Remove(
          (System_Collections_Generic_Dictionary_int__object__o *)consumedPieceActionPointDict,
          KeyValuePair_int__object.fields.key,
          (const MethodInfo_3F6A1B0 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Remove__),
        (_4__this = this->fields.__4__this) == 0) )
  {
    sub_21FFECC(_4__this, value);
  }
  WarBoardData__ShowConsumedPieceActionPointPopup(_4__this, this->fields.consumedPieceActionPointDict, 0);
}


void WarBoardData___c__DisplayClass164_0___ctor(WarBoardData___c__DisplayClass164_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass164_0___GetPlayedEventData_b__0(
        WarBoardData___c__DisplayClass164_0_o *this,
        WarBoardEventData_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_21FFECC(this, 0);
  return a->fields._eventId_k__BackingField == this->fields.eventId;
}


void WarBoardData___c__DisplayClass171_0___ctor(WarBoardData___c__DisplayClass171_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass171_0___UpdateBossInfo_b__0(
        WarBoardData___c__DisplayClass171_0_o *this,
        WarBoardBossBattleData_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_21FFECC(this, 0);
  return n->fields.bossIdx == this->fields.bossId;
}


void WarBoardData___c__DisplayClass172_0___ctor(WarBoardData___c__DisplayClass172_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass172_0___IsBossInfo_b__0(
        WarBoardData___c__DisplayClass172_0_o *this,
        WarBoardBossBattleData_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_21FFECC(this, 0);
  return n->fields.bossIdx == this->fields.bossId;
}


void WarBoardData___c__DisplayClass173_0___ctor(WarBoardData___c__DisplayClass173_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass173_0___AddSquareInfo_b__0(
        WarBoardData___c__DisplayClass173_0_o *this,
        WarBoardSquareIndexData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.squareIndex == this->fields.squareIndex;
}


void WarBoardData___c__DisplayClass174_0___ctor(WarBoardData___c__DisplayClass174_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass174_0___DelSquareInfo_b__0(
        WarBoardData___c__DisplayClass174_0_o *this,
        WarBoardSquareIndexData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.squareIndex == this->fields.squareIndex;
}


void WarBoardData___c__DisplayClass183_0___ctor(WarBoardData___c__DisplayClass183_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass183_0___GetClearedTurn_b__0(
        WarBoardData___c__DisplayClass183_0_o *this,
        WarBoardPrevCondData_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_21FFECC(this, 0);
  return a->fields._condId_k__BackingField == this->fields.condId;
}


void WarBoardData___c__DisplayClass187_0___ctor(WarBoardData___c__DisplayClass187_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass187_0___SaveHoldReinforcements_b__0(
        WarBoardData___c__DisplayClass187_0_o *this,
        HoldReinforcementsData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields._id_k__BackingField == this->fields.stageReinforcementsId
      && x->fields._index_k__BackingField == this->fields.index;
}


void WarBoardData___c__DisplayClass188_0___ctor(WarBoardData___c__DisplayClass188_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass188_0___GetHoldReinforcements_b__1(
        WarBoardData___c__DisplayClass188_0_o *this,
        HoldReinforcementsData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields._id_k__BackingField == this->fields.targetStageReinforcementsId;
}


void WarBoardData___c__DisplayClass188_1___ctor(WarBoardData___c__DisplayClass188_1_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass188_1___GetHoldReinforcements_b__2(
        WarBoardData___c__DisplayClass188_1_o *this,
        ReinforcementsData_o *x,
        const MethodInfo *method)
{
  struct HoldReinforcementsData_o *pram; // x8

  if ( !x || (pram = this->fields.pram) == 0 )
    sub_21FFECC(this, x);
  return x->fields.stageReinforcementId == pram->fields._id_k__BackingField;
}


void WarBoardData___c__DisplayClass189_0___ctor(WarBoardData___c__DisplayClass189_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool WarBoardData___c__DisplayClass189_0___GetReinforcements_b__0(
        WarBoardData___c__DisplayClass189_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct WarBoardStageReinforcementsEntity_o *stageEntity; // x8

  stageEntity = this->fields.stageEntity;
  if ( !stageEntity )
    sub_21FFECC(this, *(_QWORD *)&x);
  return stageEntity->fields.id == x;
}


void WarBoardData___c__DisplayClass189_1___ctor(WarBoardData___c__DisplayClass189_1_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass189_1___GetReinforcements_b__1(
        WarBoardData___c__DisplayClass189_1_o *this,
        ReinforcementsData_o *x,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass189_1_o *v4; // x19
  struct WarBoardData___c__DisplayClass189_0_o *CS___8__locals1; // x8
  struct WarBoardStageReinforcementsEntity_o *stageEntity; // x8
  System_Int32_array *reinforcementsIdx; // x20
  System_Func_int__bool__o *_9__2; // x22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  v4 = this;
  if ( (byte_5936144 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_int____91485032);
    sub_21FFC50(&System_Func_int__bool__TypeInfo);
    this = (WarBoardData___c__DisplayClass189_1_o *)sub_21FFC50(&Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__2__);
    byte_5936144 = 1;
  }
  if ( !x
    || (CS___8__locals1 = v4->fields.CS___8__locals1) == 0
    || (stageEntity = CS___8__locals1->fields.stageEntity) == 0 )
  {
    sub_21FFECC(this, x);
  }
  if ( x->fields.stageReinforcementId != stageEntity->fields.id )
    return 0;
  reinforcementsIdx = x->fields.reinforcementsIdx;
  _9__2 = v4->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Func_int__bool__o *)sub_21FFEBC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__2,
      (Il2CppObject *)v4,
      Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__2__,
      0);
    v4->fields.__9__2 = _9__2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v4->fields.__9__2, (int32_t)_9__2, v9, v10, v11, v12, v13, v14);
  }
  return BasicHelper__Any_int__58574768(
           reinforcementsIdx,
           (System_Func_T__bool__o *)_9__2,
           (const MethodInfo_37DC7B0 *)Method_BasicHelper_Any_int____91485032);
}


bool WarBoardData___c__DisplayClass189_1___GetReinforcements_b__2(
        WarBoardData___c__DisplayClass189_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.i == x;
}


void WarBoardData___c__DisplayClass190_0___ctor(WarBoardData___c__DisplayClass190_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool WarBoardData___c__DisplayClass190_0___IsReinforcementsApper_b__0(
        WarBoardData___c__DisplayClass190_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct WarBoardStageReinforcementsEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_21FFECC(this, *(_QWORD *)&x);
  return entity->fields.id == x;
}


void WarBoardData___c__DisplayClass193_0___ctor(WarBoardData___c__DisplayClass193_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass193_0___GetUiData_b__0(
        WarBoardData___c__DisplayClass193_0_o *this,
        WarBoardUiData_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_21FFECC(this, 0);
  return a->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


void WarBoardData___c__DisplayClass194_0___ctor(WarBoardData___c__DisplayClass194_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass194_0___GetUiData_b__0(
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
    sub_21FFECC(this, a);
  v6 = pieceIndex->max_length;
  if ( !v6 )
    goto LABEL_14;
  if ( pieceIndex_k__BackingField->m_Items[0] == pieceIndex->m_Items[0] )
  {
    if ( max_length == 1 || v6 == 1 )
      goto LABEL_14;
    if ( pieceIndex_k__BackingField->m_Items[1] == pieceIndex->m_Items[1] )
    {
      if ( max_length > 2 && v6 > 2 )
        return pieceIndex_k__BackingField->m_Items[2] == pieceIndex->m_Items[2];
LABEL_14:
      sub_21FFED4(this);
    }
  }
  return 0;
}


void WarBoardData___c__DisplayClass77_0___ctor(WarBoardData___c__DisplayClass77_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass77_0____ctor_b__5(
        WarBoardData___c__DisplayClass77_0_o *this,
        WarBoardUserMasterData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_SaveData_o *piece; // x8

  if ( !x || (piece = this->fields.piece) == 0 )
    sub_21FFECC(this, x);
  return x->fields.forceId == piece->fields.forceId && x->fields.groupId == piece->fields.groupId;
}


bool WarBoardData___c__DisplayClass77_0____ctor_b__6(
        WarBoardData___c__DisplayClass77_0_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_SaveData_o *piece; // x8

  if ( !x || (piece = this->fields.piece) == 0 )
    sub_21FFECC(this, x);
  return x->fields.forceId == piece->fields.forceId
      && x->fields.groupId == piece->fields.groupId
      && x->fields.pieceIndex == piece->fields.pieceIndex;
}


void WarBoardData___c__DisplayClass77_1___ctor(WarBoardData___c__DisplayClass77_1_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass77_1____ctor_b__7(
        WarBoardData___c__DisplayClass77_1_o *this,
        WarBoardUserGetItemData_o *x,
        const MethodInfo *method)
{
  struct WarBoardItemData_SaveData_o *item; // x8

  if ( !x || (item = this->fields.item) == 0 )
    sub_21FFECC(this, x);
  return x->fields.pieceIndex == item->fields.pieceIndex;
}


void WarBoardData___c__DisplayClass77_2___ctor(WarBoardData___c__DisplayClass77_2_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass77_2____ctor_b__8(
        WarBoardData___c__DisplayClass77_2_o *this,
        WarBoardUserTreasureData_o *x,
        const MethodInfo *method)
{
  struct WarBoardTreasureData_SaveData_o *treasure; // x8

  if ( !x || (treasure = this->fields.treasure) == 0 )
    sub_21FFECC(this, x);
  return x->fields.treasureId == treasure->fields.treasureId;
}


void WarBoardData___c__DisplayClass77_3___ctor(WarBoardData___c__DisplayClass77_3_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass77_3____ctor_b__10(
        WarBoardData___c__DisplayClass77_3_o *this,
        WarBoardUserWallData_o *x,
        const MethodInfo *method)
{
  struct WarBoardWallData_SaveData_o *wall; // x8

  if ( !x || (wall = this->fields.wall) == 0 )
    sub_21FFECC(this, x);
  return x->fields.id == wall->fields.wallId && wall->fields.squareIndex == x->fields.beforeSquareIndex;
}


void WarBoardData___c__DisplayClass77_4___ctor(WarBoardData___c__DisplayClass77_4_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass77_4____ctor_b__11(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserTreasureData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0 )
    sub_21FFECC(this, x);
  return x->fields.treasureId == layout->fields.effectId;
}


bool WarBoardData___c__DisplayClass77_4____ctor_b__12(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserMasterData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0 )
    sub_21FFECC(this, x);
  return x->fields.forceId == layout->fields.forceId && x->fields.groupId == layout->fields.groupId;
}


bool WarBoardData___c__DisplayClass77_4____ctor_b__13(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0 )
    sub_21FFECC(this, x);
  return x->fields.forceId == layout->fields.forceId
      && x->fields.groupId == layout->fields.groupId
      && x->fields.pieceIndex == layout->fields.pieceIndex;
}


bool WarBoardData___c__DisplayClass77_4____ctor_b__14(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserGetItemData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0 )
    sub_21FFECC(this, x);
  return x->fields.squareIndex == layout->fields.squareIndex;
}


bool WarBoardData___c__DisplayClass77_4____ctor_b__15(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserWallData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0 )
    sub_21FFECC(this, x);
  return x->fields.id == layout->fields.effectId;
}


void WarBoardData___c__DisplayClass77_5___ctor(WarBoardData___c__DisplayClass77_5_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass77_5____ctor_b__16(
        WarBoardData___c__DisplayClass77_5_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_SaveData_o *piece; // x8

  if ( !x || (piece = this->fields.piece) == 0 )
    sub_21FFECC(this, x);
  return x->fields._forceId_k__BackingField == piece->fields.forceId
      && x->fields._groupId_k__BackingField == piece->fields.groupId
      && x->fields._index_k__BackingField == piece->fields.pieceIndex;
}


bool WarBoardData___c__DisplayClass77_5____ctor_b__17(
        WarBoardData___c__DisplayClass77_5_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_SaveData_o *piece; // x8

  if ( !x || (piece = this->fields.piece) == 0 )
    sub_21FFECC(this, x);
  return x->fields.forceId == piece->fields.forceId
      && x->fields.groupId == piece->fields.groupId
      && x->fields.pieceIndex == piece->fields.pieceIndex;
}


void WarBoardData___c__DisplayClass99_0___ctor(WarBoardData___c__DisplayClass99_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass99_0___GetPiecePosition_b__0(
        WarBoardData___c__DisplayClass99_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return !x->fields._isDead_k__BackingField && x->fields._uniqueIndex_k__BackingField == this->fields.uniqueId;
}