void __fastcall WarBoardData___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w1
  struct WarBoardData_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FA10F & 1) == 0 )
  {
    sub_1B640C8(&WarBoardData_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_2056/*"AFTER_CONTINUE_DEVICE_FOR_WARBOARD"*/, v4);
    sub_1B640C8(&StringLiteral_15315/*"WARBOARDDATA_SAVEDATA"*/, v5);
    byte_49FA10F = 1;
  }
  WarBoardData_TypeInfo->static_fields->WARBOARDDATA_SAVEDATA_KEY = (struct System_String_o *)StringLiteral_15315/*"WARBOARDDATA_SAVEDATA"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)WarBoardData_TypeInfo->static_fields, StringLiteral_15315/*"WARBOARDDATA_SAVEDATA"*/, v2, v3);
  v6 = StringLiteral_2056/*"AFTER_CONTINUE_DEVICE_FOR_WARBOARD"*/;
  static_fields = WarBoardData_TypeInfo->static_fields;
  static_fields->AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY = (struct System_String_o *)StringLiteral_2056/*"AFTER_CONTINUE_DEVICE_FOR_WARBOARD"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY, v6, v8, v9);
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
  int32_t v138; // w2
  int32_t v139; // w3
  __int64 v140; // x1
  __int64 v141; // x2
  System_Collections_Generic_List_object__o *v142; // x19
  int32_t v143; // w2
  int32_t v144; // w3
  struct System_Int32_array *v145; // x0
  int32_t v146; // w2
  int32_t v147; // w3
  struct System_UInt32_array *v148; // x0
  int32_t v149; // w2
  int32_t v150; // w3
  __int64 v151; // x1
  __int64 v152; // x2
  System_Collections_Generic_List_object__o *v153; // x19
  int32_t v154; // w2
  int32_t v155; // w3
  __int64 v156; // x1
  __int64 v157; // x2
  System_Collections_Generic_List_object__o *v158; // x19
  int32_t v159; // w2
  int32_t v160; // w3
  __int64 v161; // x1
  __int64 v162; // x2
  System_Collections_Generic_List_int__o *v163; // x19
  int32_t v164; // w2
  int32_t v165; // w3
  __int64 v166; // x1
  __int64 v167; // x2
  System_Collections_Generic_List_object__o *v168; // x19
  int32_t v169; // w2
  int32_t v170; // w3
  __int64 v171; // x1
  __int64 v172; // x2
  System_Collections_Generic_List_int__o *v173; // x19
  int32_t v174; // w2
  int32_t v175; // w3
  __int64 v176; // x1
  __int64 v177; // x2
  System_Collections_Generic_List_int__o *v178; // x19
  int32_t v179; // w2
  int32_t v180; // w3
  __int64 v181; // x1
  __int64 v182; // x2
  WarBoardData___c_c *v183; // x0
  System_Comparison_T__o *_9__77_0; // x19
  Il2CppObject *v185; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v187; // w2
  int32_t v188; // w3
  int32_t v189; // w2
  int32_t v190; // w3
  __int64 Instance; // x0
  Il2CppObject *MasterData_object; // x0
  struct WarBoardStageNpcMaster_o **p_stageNpcMaster; // x19
  int32_t v194; // w2
  int32_t v195; // w3
  System_Collections_Generic_IEnumerable_WarBoardStageNpcEntity__o *WarBoardStageEntities; // x0
  __int64 v197; // x1
  __int64 v198; // x2
  WarBoardData___c_c *v199; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v200; // x21
  System_Func_T__TResult__o *_9__77_1; // x19
  Il2CppObject *v202; // x22
  struct WarBoardData___c_StaticFields *v203; // x0
  int32_t v204; // w2
  int32_t v205; // w3
  struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *v206; // x0
  int32_t v207; // w2
  int32_t v208; // w3
  System_Collections_Generic_IEnumerable_WarBoardActionPointEntity__o *WarBoardActionPointEntities; // x0
  __int64 v210; // x1
  __int64 v211; // x2
  WarBoardData___c_c *v212; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v213; // x20
  System_Func_T__TResult__o *_9__77_2; // x19
  Il2CppObject *v215; // x21
  struct WarBoardData___c_StaticFields *v216; // x0
  int32_t v217; // w2
  int32_t v218; // w3
  struct System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__o *v219; // x0
  int32_t v220; // w2
  int32_t v221; // w3
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v223; // x1
  __int64 v224; // x2
  WarBoardData___c_c *v225; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v226; // x20
  System_Func_object__int__o *_9__77_3; // x19
  Il2CppObject *v228; // x21
  struct WarBoardData___c_StaticFields *v229; // x0
  int32_t v230; // w2
  int32_t v231; // w3
  System_Collections_Generic_Dictionary_TKey__TValue__o *npcEntityDict; // x8
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *v233; // x0
  __int64 v234; // x1
  __int64 v235; // x2
  WarBoardData___c_c *v236; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v237; // x20
  System_Func_object__int__o *_9__77_4; // x19
  Il2CppObject *v239; // x21
  struct WarBoardData___c_StaticFields *v240; // x0
  int32_t v241; // w2
  int32_t v242; // w3
  __int64 v243; // x1
  __int64 v244; // x2
  __int64 v245; // x1
  __int64 v246; // x2
  __int64 v247; // x1
  __int64 v248; // x2
  System_Collections_Generic_List_object__o *v249; // x27
  __int64 v250; // x1
  __int64 v251; // x2
  __int64 v252; // x1
  __int64 v253; // x2
  __int64 v254; // x1
  __int64 v255; // x2
  __int64 v256; // x1
  __int64 v257; // x2
  WarBoardData_c *v258; // x0
  WarBoardDataEntity_o *v259; // x26
  System_Collections_Generic_List_object__o *v260; // x24
  WarBoardStageLayoutEntity_array *v261; // x28
  System_String_o *WARBOARDDATA_SAVEDATA_KEY; // x19
  WarBoardData_c *v263; // x0
  int32_t progressType; // w19
  System_String_o *v265; // x19
  System_String_o *String; // x19
  System_Byte_array *v267; // x19
  __int64 v268; // x1
  __int64 v269; // x2
  MiniMessagePack_MiniMessagePacker_o *v270; // x20
  Il2CppObject *v271; // x0
  struct WarBoardData_WarBoardLocalSaveData_o **p_localSaveData; // x20
  int32_t v273; // w2
  int32_t v274; // w3
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8
  __int64 v276; // x1
  __int64 v277; // x2
  struct WarBoardPieceData_SaveData_array *pieceSaves; // x24
  _QWORD *v279; // x25
  unsigned __int64 v280; // x28
  __int64 v281; // x22
  const MethodInfo *v282; // x1
  int32_t v283; // w2
  int32_t v284; // w3
  WarBoardPieceData_SaveData_o *v285; // x1
  WarBoardPieceData_SaveData_o **v286; // x21
  __int64 v287; // x1
  __int64 v288; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v289; // x19
  System_Func_object__bool__o *v290; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v291; // x19
  System_Func_object__bool__o *v292; // x23
  struct WarBoardItemData_SaveData_array *itemSaves; // x24
  unsigned __int64 v294; // x28
  __int64 v295; // x19
  int32_t v296; // w2
  int32_t v297; // w3
  WarBoardItemData_SaveData_o *v298; // x1
  __int64 v299; // x1
  __int64 v300; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v301; // x22
  System_Func_object__bool__o *v302; // x23
  ServantStatusBattleListViewItem_o *v303; // x25
  struct WarBoardTreasureData_SaveData_array *treasureSaves; // x28
  char v305; // w26
  unsigned __int64 v306; // x29
  __int64 v307; // x19
  int32_t v308; // w2
  int32_t v309; // w3
  WarBoardTreasureData_SaveData_o *v310; // x1
  __int64 v311; // x21
  System_Collections_Generic_IEnumerable_TSource__o *klass; // x23
  __int64 v313; // x1
  __int64 v314; // x2
  System_Func_object__bool__o *v315; // x24
  WarBoardData___c_c *v316; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v317; // x21
  System_Func_object__bool__o *_9__77_9; // x19
  Il2CppObject *v319; // x23
  struct WarBoardData___c_StaticFields *v320; // x0
  int32_t v321; // w2
  int32_t v322; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v323; // x0
  System_Object_array *v324; // x0
  int32_t v325; // w2
  int32_t v326; // w3
  struct WarBoardWallData_SaveData_array *wallSaves; // x24
  unsigned __int64 v328; // x25
  __int64 v329; // x19
  int32_t v330; // w2
  int32_t v331; // w3
  WarBoardWallData_SaveData_o *v332; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v333; // x22
  __int64 v334; // x1
  __int64 v335; // x2
  System_Func_object__bool__o *v336; // x23
  int v337; // w19
  __int64 v338; // x2
  unsigned __int64 v339; // x23
  __int64 v340; // x24
  __int64 v341; // x25
  struct WarBoardSquareIndexData_SaveData_array *squareIndexInfo; // x8
  unsigned int *v343; // x27
  WarBoardSquareIndexData_SaveData_o *v344; // x21
  WarBoardSquareIndexData_o *v345; // x19
  int32_t v346; // w2
  int32_t v347; // w3
  int v348; // w19
  __int64 v349; // x2
  unsigned __int64 v350; // x23
  __int64 v351; // x24
  __int64 v352; // x25
  struct WarBoardBossBattleData_SaveData_array *bossBattleInfo; // x8
  unsigned int *v354; // x27
  WarBoardBossBattleData_SaveData_o *v355; // x21
  WarBoardBossBattleData_o *v356; // x19
  const MethodInfo *v357; // x2
  int32_t v358; // w2
  int32_t v359; // w3
  WarBoardData_c *v360; // x0
  int32_t v361; // w2
  int32_t v362; // w3
  __int64 v363; // x2
  unsigned __int64 v364; // x25
  __int64 v365; // x23
  int32_t v366; // w2
  int32_t v367; // w3
  WarBoardStageLayoutEntity_o *v368; // x1
  WarBoardStageLayoutEntity_o **v369; // x29
  WarBoardStageLayoutEntity_o *v370; // x19
  __int64 v371; // x1
  __int64 v372; // x2
  WarBoardSquareData_o *v373; // x22
  int32_t v374; // w3
  __int64 v375; // x9
  WarBoardStageLayoutEntity_o *v376; // x8
  int32_t throughCondId; // w1
  struct System_Object_array *items; // x8
  _QWORD *v379; // x9
  __int64 size; // x10
  Il2CppClass **v381; // x0
  WarBoardStageLayoutEntity_o *v382; // x8
  int32_t questPhase; // w22
  System_Collections_Generic_IEnumerable_TSource__o *svtInfo; // x19
  System_Func_object__bool__o *v385; // x20
  WarBoardUserServantData_o *v386; // x21
  WarBoardUserMasterData_o *v387; // x20
  struct System_Object_array *v388; // x8
  _QWORD *v389; // x9
  __int64 v390; // x10
  Il2CppClass **v391; // x0
  ServantStatusBattleListViewItem_o *v392; // x0
  int32_t v393; // w1
  System_Collections_Generic_IEnumerable_TSource__o *masterInfo; // x19
  System_Func_object__bool__o *v395; // x20
  WarBoardStageLayoutEntity_o *v396; // x8
  WarBoardDataEntity_WarBoardDeckData_o **v397; // x9
  WarBoardDataEntity_WarBoardDeckData_o *v398; // x27
  int32_t Type; // w0
  bool IsNpc; // w0
  WarBoardStageLayoutEntity_o *v401; // x28
  int32_t v402; // w22
  bool v403; // w26
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *v404; // x19
  __int64 v405; // x1
  __int64 v406; // x2
  WarBoardPieceData_o *v407; // x0
  WarBoardPieceData_o *v408; // x24
  bool v409; // w5
  int32_t v410; // w2
  int32_t v411; // w3
  int32_t forceId_k__BackingField; // w1
  __int64 v413; // x8
  _QWORD *v414; // x9
  __int64 v415; // x10
  NpcFollowerEntity_o *Entity_39109336; // x0
  NpcFollowerEntity_o *v417; // x19
  int32_t v418; // w2
  int32_t v419; // w3
  struct System_Object_array *v420; // x8
  _QWORD *v421; // x9
  __int64 v422; // x10
  Il2CppClass **v423; // x0
  __int64 v424; // x8
  System_Collections_Generic_List_object__o *v425; // x0
  Il2CppObject *v426; // x1
  struct System_Object_array *v427; // x8
  _QWORD *v428; // x9
  __int64 v429; // x10
  Il2CppClass **v430; // x0
  WarBoardStageLayoutEntity_o *v431; // x21
  System_Collections_Generic_IEnumerable_TSource__o *getItemInfo; // x19
  System_Func_object__bool__o *v433; // x20
  Il2CppObject *v434; // x0
  WarBoardStageLayoutEntity_o *v435; // x19
  WarBoardUserGetItemData_o *v436; // x21
  __int64 v437; // x1
  __int64 v438; // x2
  WarBoardItemData_o *v439; // x20
  System_Collections_Generic_List_object__o *v440; // x12
  int32_t version; // w10
  struct System_Object_array *v442; // x8
  void **v443; // x9
  System_Collections_Generic_IEnumerable_TSource__o *treasureInfo; // x19
  System_Func_object__bool__o *v445; // x20
  System_Collections_Generic_IEnumerable_TSource__o *wallInfo; // x19
  System_Func_object__bool__o *v447; // x20
  Il2CppObject *v448; // x0
  WarBoardStageLayoutEntity_o *v449; // x19
  WarBoardUserWallData_o *v450; // x21
  __int64 v451; // x1
  __int64 v452; // x2
  _QWORD *v453; // x9
  __int64 v454; // x10
  Il2CppClass **v455; // x0
  System_Object_array *v456; // x0
  WarBoardData_o *v457; // x25
  int32_t v458; // w2
  int32_t v459; // w3
  System_Object_array *v460; // x0
  int32_t v461; // w2
  int32_t v462; // w3
  System_Object_array *v463; // x0
  System_Collections_Generic_IEnumerable_T__o **p_pieces; // x23
  int32_t v465; // w2
  int32_t v466; // w3
  System_Object_array *pieces; // x19
  __int64 v468; // x1
  __int64 v469; // x2
  System_Comparison_T__o *v470; // x20
  System_Object_array *v471; // x0
  int32_t v472; // w2
  int32_t v473; // w3
  System_Object_array *v474; // x0
  int32_t v475; // w2
  int32_t v476; // w3
  System_Object_array *v477; // x0
  int32_t v478; // w2
  int32_t v479; // w3
  System_Object_array *v480; // x0
  int32_t v481; // w2
  int32_t v482; // w3
  int32_t v483; // w2
  int32_t v484; // w3
  __int64 v485; // x2
  struct WarBoardData_WarBoardLocalSaveData_o *v486; // x8
  struct WarBoardPieceData_SaveData_array *v487; // x28
  unsigned __int64 v488; // x29
  __int64 v489; // x21
  int32_t v490; // w2
  int32_t v491; // w3
  WarBoardPieceData_SaveData_o *v492; // x1
  WarBoardPieceData_SaveData_o **v493; // x22
  System_Collections_Generic_IEnumerable_T__o *v494; // x19
  __int64 v495; // x1
  __int64 v496; // x2
  System_Func_object__bool__o *v497; // x24
  __int64 v498; // x1
  __int64 v499; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v500; // x19
  System_Func_object__bool__o *v501; // x24
  Il2CppObject *v502; // x21
  __int64 v503; // x1
  __int64 v504; // x2
  System_Collections_Generic_List_object__o *v505; // x24
  __int64 v506; // x1
  __int64 v507; // x2
  int32_t id; // w19
  WarBoardPieceData_SaveData_o *v509; // x26
  WarBoardPieceData_o *v510; // x25
  int32_t v511; // w2
  int32_t v512; // w3
  struct System_Object_array *v513; // x8
  _QWORD *v514; // x9
  __int64 v515; // x10
  Il2CppClass **v516; // x0
  System_Object_array *v517; // x0
  int32_t v518; // w2
  int32_t v519; // w3
  __int64 v520; // x20
  int v521; // w8
  unsigned int v522; // w21
  __int64 v523; // x8
  WarBoardItemData_SaveData_o *v524; // x19
  _DWORD *data; // x20
  int v526; // w8
  unsigned int v527; // w21
  char *v528; // x8
  WarBoardTreasureData_SaveData_o *v529; // x19
  __int64 v530; // x20
  int v531; // w8
  unsigned int v532; // w21
  __int64 v533; // x8
  WarBoardWallData_SaveData_o *v534; // x19
  Il2CppClass *element_class; // x20
  int namespaze; // w8
  unsigned int v537; // w21
  void **v538; // x8
  WarBoardSquareData_SaveData_o *v539; // x19
  System_Collections_Generic_List_object__o *v540; // x19
  int32_t v541; // w2
  int32_t v542; // w3
  __int64 v543; // x2
  int32_t v544; // w3
  struct WarBoardData_WarBoardLocalSaveData_o *v545; // x8
  struct WarBoardEventData_SaveData_array *eventSaves; // x20
  __int64 v547; // x8
  unsigned __int64 v548; // x23
  WarBoardEventData_SaveData_o *v549; // x19
  System_Collections_Generic_List_object__o *v550; // x21
  WarBoardEventData_o *v551; // x22
  int32_t v552; // w2
  int32_t v553; // w3
  struct System_Object_array *v554; // x8
  _QWORD *v555; // x9
  __int64 v556; // x10
  Il2CppClass **v557; // x0
  Il2CppClass *v558; // x8
  struct System_Int32_array *typeHierarchy; // x1
  int32_t v560; // w2
  int32_t v561; // w3
  struct WarBoardData_WarBoardLocalSaveData_o *v562; // x8
  ServantStatusBattleListViewItem_c *latestBattlePieceUniqueIndexes; // x1
  __int64 v564; // x1
  __int64 v565; // x2
  System_Collections_Generic_List_object__o *v566; // x19
  int32_t v567; // w2
  int32_t v568; // w3
  __int64 v569; // x2
  _QWORD *properties; // x20
  __int64 v571; // x8
  unsigned __int64 v572; // x23
  WarBoardPrevCondData_SaveData_o *v573; // x19
  System_Collections_Generic_List_object__o *v574; // x21
  WarBoardPrevCondData_o *v575; // x22
  int32_t v576; // w2
  int32_t v577; // w3
  struct System_Object_array *v578; // x8
  _QWORD *v579; // x9
  __int64 v580; // x10
  Il2CppClass **v581; // x0
  System_Collections_Generic_List_object__o *v582; // x19
  int32_t v583; // w2
  int32_t v584; // w3
  __int64 v585; // x2
  _QWORD *methods; // x20
  __int64 v587; // x8
  unsigned __int64 v588; // x23
  HoldReinforcementsData_SaveData_o *v589; // x19
  System_Collections_Generic_List_object__o *v590; // x21
  HoldReinforcementsData_o *v591; // x22
  int32_t v592; // w2
  int32_t v593; // w3
  struct System_Object_array *v594; // x8
  _QWORD *v595; // x9
  __int64 v596; // x10
  Il2CppClass **v597; // x0
  System_Collections_Generic_List_TSource__o *v598; // x0
  int32_t v599; // w2
  int32_t v600; // w3
  __int64 v601; // x1
  __int64 v602; // x2
  System_Collections_Generic_List_object__o *v603; // x19
  int32_t v604; // w2
  int32_t v605; // w3
  __int64 v606; // x2
  int32_t v607; // w3
  Il2CppClass **implementedInterfaces; // x20
  Il2CppClass *v609; // x8
  unsigned __int64 v610; // x23
  WarBoardUiData_SaveData_o *v611; // x19
  System_Collections_Generic_List_object__o *v612; // x21
  WarBoardUiData_o *v613; // x22
  int32_t v614; // w2
  int32_t v615; // w3
  struct System_Object_array *v616; // x8
  _QWORD *v617; // x9
  __int64 v618; // x10
  Il2CppClass **v619; // x0
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets; // x1
  Il2CppClass *v621; // x8
  WarBoardData_WarBoardLocalSaveData_o *v622; // x19
  int32_t v623; // w2
  int32_t v624; // w3
  __int64 v625; // x0
  ServantStatusBattleListViewItem_o *p_bgAnimationInfo_k__BackingField; // [xsp+10h] [xbp-170h]
  ServantStatusBattleListViewItem_o *p_listUiData; // [xsp+18h] [xbp-168h]
  ServantStatusBattleListViewItem_o *p_playedStageReinforcementsList; // [xsp+20h] [xbp-160h]
  ServantStatusBattleListViewItem_o *p_latestBattlePieceUniqueIndexes; // [xsp+28h] [xbp-158h]
  struct System_Int32_array **p_latestPieceActionSquareIndexes; // [xsp+30h] [xbp-150h]
  ServantStatusBattleListViewItem_o *p_reinforcementsSaveList; // [xsp+38h] [xbp-148h]
  DataMasterBase_TMaster__TEntity__PKType__o *v632; // [xsp+40h] [xbp-140h]
  System_Collections_Generic_List_object__o *v633; // [xsp+48h] [xbp-138h]
  WarBoardDataEntity_WarBoardDeckData_o **p_myDeck; // [xsp+50h] [xbp-130h]
  struct System_Collections_Generic_List_int__o **p_masterExistsForce; // [xsp+58h] [xbp-128h]
  System_Collections_Generic_List_object__o *v636; // [xsp+60h] [xbp-120h]
  System_Collections_Generic_List_object__o *v637; // [xsp+68h] [xbp-118h]
  System_Collections_Generic_List_object__o *v638; // [xsp+70h] [xbp-110h]
  NpcFollowerMaster_o *v639; // [xsp+78h] [xbp-108h]
  WarBoardStagePieceDetailMaster_o *Master_object; // [xsp+80h] [xbp-100h]
  System_Collections_Generic_List_object__o *v641; // [xsp+88h] [xbp-F8h]
  WarBoardData_Fields *p_fields; // [xsp+90h] [xbp-F0h]
  WarBoardCommonReleaseMaster_o *v643; // [xsp+98h] [xbp-E8h]
  WarBoardData_o *v644; // [xsp+A0h] [xbp-E0h]
  struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o **p_npcEntityDict; // [xsp+A8h] [xbp-D8h]
  System_Collections_Generic_List_object__o *v646; // [xsp+B0h] [xbp-D0h]
  System_Collections_Generic_List_object__o *v647; // [xsp+B0h] [xbp-D0h]
  System_Collections_Generic_List_object__o *v648; // [xsp+B8h] [xbp-C8h]
  WarBoardDataEntity_WarBoardDeckData_o **p_enemyDeck; // [xsp+C8h] [xbp-B8h]
  ServantStatusBattleListViewItem_o *p_listPrevCond; // [xsp+D0h] [xbp-B0h]
  struct System_Collections_Generic_List_WarBoardEventData__o **p_listEvent; // [xsp+D8h] [xbp-A8h]
  int32_t v653; // [xsp+E4h] [xbp-9Ch]
  int32_t questId; // [xsp+E8h] [xbp-98h]
  int32_t npcIdx; // [xsp+ECh] [xbp-94h]
  System_Object_array **v657; // [xsp+F0h] [xbp-90h]
  WarBoardDataEntity_o *v658; // [xsp+F0h] [xbp-90h]
  __int64 v659; // [xsp+F8h] [xbp-88h]
  WarBoardRoadEntity_array *roadEntitiesb; // [xsp+100h] [xbp-80h]
  bool isChangeName; // [xsp+10Ch] [xbp-74h] BYREF
  Il2CppObject *v663; // [xsp+110h] [xbp-70h] BYREF
  WarBoardStagePieceDetailEntity_o *entity; // [xsp+118h] [xbp-68h] BYREF

  if ( (byte_49FA0B7 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Resize_WarBoardBossBattleData___, stage);
    sub_1B640C8(&Method_System_Array_Resize_WarBoardSquareIndexData___, v8);
    sub_1B640C8(&Method_System_Array_Sort_WarBoardPieceData___, v9);
    sub_1B640C8(&Method_System_Array_Sort_WarBoardStageLayoutEntity___, v10);
    sub_1B640C8(&Method_BasicHelper_Any_WarBoardPieceData___, v11);
    sub_1B640C8(&System_Comparison_WarBoardPieceData__TypeInfo, v12);
    sub_1B640C8(&System_Comparison_WarBoardStageLayoutEntity__TypeInfo, v13);
    sub_1B640C8(&System_Convert_TypeInfo, v14);
    sub_1B640C8(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___, v15);
    sub_1B640C8(&Method_DataManager_GetMasterData_WarBoardActionPointMaster___, v16);
    sub_1B640C8(&Method_DataManager_GetMasterData_WarBoardStageDetailMaster___, v17);
    sub_1B640C8(&Method_DataManager_GetMasterData_WarBoardStageNpcMaster___, v18);
    sub_1B640C8(&Method_DataManager_GetMaster_NpcFollowerMaster___, v19);
    sub_1B640C8(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, v20);
    sub_1B640C8(&Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___, v21);
    sub_1B640C8(&DataManager_TypeInfo, v22);
    sub_1B640C8(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v24);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Values__, v25);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v26);
    sub_1B640C8(&EncryptedPlayerPrefs_TypeInfo, v27);
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_WarBoardBossBattleData_SaveData___, v28);
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData_SaveData___, v29);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___, v30);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___, v31);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___, v32);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserTreasureData___, v33);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___, v34);
    sub_1B640C8(&Method_System_Linq_Enumerable_Max_WarBoardStageNpcEntity___, v35);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_WarBoardUserTreasureData___, v36);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToDictionary_WarBoardActionPointEntity__uint___, v37);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToDictionary_WarBoardStageNpcEntity__uint___, v38);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_int___, v39);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_WarBoardUserTreasureData___, v40);
    sub_1B640C8(&System_Func_WarBoardUserTreasureData__bool__TypeInfo, v41);
    sub_1B640C8(&System_Func_WarBoardStageNpcEntity__uint__TypeInfo, v42);
    sub_1B640C8(&System_Func_WarBoardUserWallData__bool__TypeInfo, v43);
    sub_1B640C8(&System_Func_WarBoardUserMasterData__bool__TypeInfo, v44);
    sub_1B640C8(&System_Func_WarBoardStageNpcEntity__int__TypeInfo, v45);
    sub_1B640C8(&System_Func_WarBoardUserServantData__bool__TypeInfo, v46);
    sub_1B640C8(&System_Func_WarBoardPieceData__bool__TypeInfo, v47);
    sub_1B640C8(&System_Func_WarBoardUserGetItemData__bool__TypeInfo, v48);
    sub_1B640C8(&System_Func_WarBoardActionPointEntity__uint__TypeInfo, v49);
    sub_1B640C8(&HoldReinforcementsData_TypeInfo, v50);
    sub_1B640C8(&int___TypeInfo, v51);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__, v52);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v53);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardSquareData__Add__, v54);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardUiData__Add__, v55);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__, v56);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardEventData__Add__, v57);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardEffectData__Add__, v58);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTreasureData__Add__, v59);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, v60);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardWallData__Add__, v61);
    sub_1B640C8(&Method_System_Collections_Generic_List_HoldReinforcementsData__Add__, v62);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardItemData__Add__, v63);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v64);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTreasureData__ToArray__, v65);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardEffectData__ToArray__, v66);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardWallData__ToArray__, v67);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__, v68);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__, v69);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardItemData__ToArray__, v70);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPrevCondData___ctor__, v71);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v72);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v73);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardSquareData___ctor__, v74);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardEventData___ctor__, v75);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardUiData___ctor__, v76);
    sub_1B640C8(&Method_System_Collections_Generic_List_HoldReinforcementsData___ctor__, v77);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTreasureData___ctor__, v78);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardItemData___ctor__, v79);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardWallData___ctor__, v80);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardEffectData___ctor__, v81);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v82);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardSquareData__TypeInfo, v83);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v84);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardWallData__TypeInfo, v85);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardTreasureData__TypeInfo, v86);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardItemData__TypeInfo, v87);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardUiData__TypeInfo, v88);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardPrevCondData__TypeInfo, v89);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardEffectData__TypeInfo, v90);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardEventData__TypeInfo, v91);
    sub_1B640C8(&System_Collections_Generic_List_HoldReinforcementsData__TypeInfo, v92);
    sub_1B640C8(&Method_MiniMessagePack_MiniMessagePacker_UnpackClass_WarBoardData_WarBoardLocalSaveData___, v93);
    sub_1B640C8(&MiniMessagePack_MiniMessagePacker_TypeInfo, v94);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v95);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v96);
    sub_1B640C8(&Method_WarBoardData___c___ctor_b__77_0__, v97);
    sub_1B640C8(&Method_WarBoardData___c___ctor_b__77_1__, v98);
    sub_1B640C8(&Method_WarBoardData___c___ctor_b__77_2__, v99);
    sub_1B640C8(&Method_WarBoardData___c___ctor_b__77_3__, v100);
    sub_1B640C8(&Method_WarBoardData___c___ctor_b__77_4__, v101);
    sub_1B640C8(&Method_WarBoardData___c___ctor_b__77_9__, v102);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass77_0___ctor_b__5__, v103);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass77_0___ctor_b__6__, v104);
    sub_1B640C8(&WarBoardData___c__DisplayClass77_0_TypeInfo, v105);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass77_1___ctor_b__7__, v106);
    sub_1B640C8(&WarBoardData___c__DisplayClass77_1_TypeInfo, v107);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass77_2___ctor_b__8__, v108);
    sub_1B640C8(&WarBoardData___c__DisplayClass77_2_TypeInfo, v109);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass77_3___ctor_b__10__, v110);
    sub_1B640C8(&WarBoardData___c__DisplayClass77_3_TypeInfo, v111);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__11__, v112);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__12__, v113);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__13__, v114);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__14__, v115);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__15__, v116);
    sub_1B640C8(&WarBoardData___c__DisplayClass77_4_TypeInfo, v117);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass77_5___ctor_b__16__, v118);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass77_5___ctor_b__17__, v119);
    sub_1B640C8(&WarBoardData___c__DisplayClass77_5_TypeInfo, v120);
    sub_1B640C8(&WarBoardData___c_TypeInfo, v121);
    sub_1B640C8(&uint___TypeInfo, v122);
    sub_1B640C8(&WarBoardBossBattleData_TypeInfo, v123);
    sub_1B640C8(&Method_WarBoardData_ComparePiece__, v124);
    sub_1B640C8(&WarBoardData_TypeInfo, v125);
    sub_1B640C8(&WarBoardEffectData_TypeInfo, v126);
    sub_1B640C8(&WarBoardEventData_TypeInfo, v127);
    sub_1B640C8(&WarBoardItemData_TypeInfo, v128);
    sub_1B640C8(&WarBoardData_WarBoardLocalSaveData_TypeInfo, v129);
    sub_1B640C8(&WarBoardPieceData_TypeInfo, v130);
    sub_1B640C8(&WarBoardPrevCondData_TypeInfo, v131);
    sub_1B640C8(&WarBoardSquareData_TypeInfo, v132);
    sub_1B640C8(&WarBoardSquareIndexData_TypeInfo, v133);
    sub_1B640C8(&WarBoardTreasureData_TypeInfo, v134);
    sub_1B640C8(&WarBoardUiData_TypeInfo, v135);
    sub_1B640C8(&WarBoardWallData_TypeInfo, v136);
    byte_49FA0B7 = 1;
  }
  v663 = 0LL;
  entity = 0LL;
  isChangeName = 0;
  v137 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                      System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                      stage,
                                                                      layoutEntities);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v137,
    (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  this->fields._bgAnimationInfo_k__BackingField = (struct System_Collections_Generic_Dictionary_string__object__o *)v137;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._bgAnimationInfo_k__BackingField,
    (int32_t)v137,
    v138,
    v139);
  v142 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                        System_Collections_Generic_List_WarBoardEventData__TypeInfo,
                                                        v140,
                                                        v141);
  System_Collections_Generic_List_object____ctor(
    v142,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardEventData___ctor__);
  this->fields.listEvent = (struct System_Collections_Generic_List_WarBoardEventData__o *)v142;
  p_listEvent = &this->fields.listEvent;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.listEvent, (int32_t)v142, v143, v144);
  *(_QWORD *)&this->fields.winCondId = -1LL;
  v145 = (struct System_Int32_array *)sub_1B64170(int___TypeInfo, 2LL);
  this->fields.latestPieceActionSquareIndexes = v145;
  p_latestPieceActionSquareIndexes = &this->fields.latestPieceActionSquareIndexes;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.latestPieceActionSquareIndexes,
    (int32_t)v145,
    v146,
    v147);
  v148 = (struct System_UInt32_array *)sub_1B64170(uint___TypeInfo, 0LL);
  this->fields.latestBattlePieceUniqueIndexes = v148;
  p_latestBattlePieceUniqueIndexes = (ServantStatusBattleListViewItem_o *)&this->fields.latestBattlePieceUniqueIndexes;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.latestBattlePieceUniqueIndexes,
    (int32_t)v148,
    v149,
    v150);
  v153 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                        System_Collections_Generic_List_WarBoardPrevCondData__TypeInfo,
                                                        v151,
                                                        v152);
  System_Collections_Generic_List_object____ctor(
    v153,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardPrevCondData___ctor__);
  this->fields.listPrevCond = (struct System_Collections_Generic_List_WarBoardPrevCondData__o *)v153;
  p_listPrevCond = (ServantStatusBattleListViewItem_o *)&this->fields.listPrevCond;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.listPrevCond, (int32_t)v153, v154, v155);
  v158 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                        System_Collections_Generic_List_HoldReinforcementsData__TypeInfo,
                                                        v156,
                                                        v157);
  System_Collections_Generic_List_object____ctor(
    v158,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_HoldReinforcementsData___ctor__);
  this->fields.reinforcementsSaveList = (struct System_Collections_Generic_List_HoldReinforcementsData__o *)v158;
  p_reinforcementsSaveList = (ServantStatusBattleListViewItem_o *)&this->fields.reinforcementsSaveList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.reinforcementsSaveList, (int32_t)v158, v159, v160);
  v163 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                     System_Collections_Generic_List_int__TypeInfo,
                                                     v161,
                                                     v162);
  System_Collections_Generic_List_int____ctor(
    v163,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.playedStageReinforcementsList = v163;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.playedStageReinforcementsList,
    (int32_t)v163,
    v164,
    v165);
  v168 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                        System_Collections_Generic_List_WarBoardUiData__TypeInfo,
                                                        v166,
                                                        v167);
  System_Collections_Generic_List_object____ctor(
    v168,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardUiData___ctor__);
  this->fields.listUiData = (struct System_Collections_Generic_List_WarBoardUiData__o *)v168;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.listUiData, (int32_t)v168, v169, v170);
  v173 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                     System_Collections_Generic_List_int__TypeInfo,
                                                     v171,
                                                     v172);
  System_Collections_Generic_List_int____ctor(
    v173,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.masterExistsForce = v173;
  p_masterExistsForce = &this->fields.masterExistsForce;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.masterExistsForce, (int32_t)v173, v174, v175);
  v178 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                     System_Collections_Generic_List_int__TypeInfo,
                                                     v176,
                                                     v177);
  System_Collections_Generic_List_int____ctor(
    v178,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.reinforcementsAppointmentSquareList = v178;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.reinforcementsAppointmentSquareList,
    (int32_t)v178,
    v179,
    v180);
  this->fields.localSaveTiming = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v183 = WarBoardData___c_TypeInfo;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v183 = WarBoardData___c_TypeInfo;
  }
  _9__77_0 = (System_Comparison_T__o *)v183->static_fields->__9__77_0;
  if ( !_9__77_0 )
  {
    if ( !v183->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v183);
      v183 = WarBoardData___c_TypeInfo;
    }
    v185 = (Il2CppObject *)v183->static_fields->__9;
    _9__77_0 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_WarBoardStageLayoutEntity__TypeInfo, v181, v182);
    System_Comparison_object____ctor(_9__77_0, v185, Method_WarBoardData___c___ctor_b__77_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__77_0 = (struct System_Comparison_WarBoardStageLayoutEntity__o *)_9__77_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__77_0, (int32_t)_9__77_0, v187, v188);
  }
  System_Array__Sort_object__48264584(
    (System_Object_array *)layoutEntities,
    _9__77_0,
    (const MethodInfo_2E07588 *)Method_System_Array_Sort_WarBoardStageLayoutEntity___);
  this->fields.stageEntity = stage;
  p_fields = &this->fields;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)stage, v189, v190);
  if ( !layoutEntities )
    goto LABEL_359;
  v659 = *(_QWORD *)&layoutEntities->max_length;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_359;
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_WarBoardStageDetailMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_359;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_WarBoardStageNpcMaster___);
  this->fields.stageNpcMaster = (struct WarBoardStageNpcMaster_o *)MasterData_object;
  p_stageNpcMaster = &this->fields.stageNpcMaster;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.stageNpcMaster, (int32_t)MasterData_object, v194, v195);
  if ( !stage )
    goto LABEL_359;
  Instance = (__int64)*p_stageNpcMaster;
  if ( !*p_stageNpcMaster )
    goto LABEL_359;
  WarBoardStageEntities = WarBoardStageNpcMaster__GetWarBoardStageEntities(
                            (WarBoardStageNpcMaster_o *)Instance,
                            stage->fields.id,
                            0LL);
  v199 = WarBoardData___c_TypeInfo;
  v200 = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardStageEntities;
  p_playedStageReinforcementsList = (ServantStatusBattleListViewItem_o *)&this->fields.playedStageReinforcementsList;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v199 = WarBoardData___c_TypeInfo;
  }
  _9__77_1 = (System_Func_T__TResult__o *)v199->static_fields->__9__77_1;
  if ( !_9__77_1 )
  {
    if ( !v199->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v199);
      v199 = WarBoardData___c_TypeInfo;
    }
    v202 = (Il2CppObject *)v199->static_fields->__9;
    _9__77_1 = (System_Func_T__TResult__o *)sub_1B64314(System_Func_WarBoardStageNpcEntity__uint__TypeInfo, v197, v198);
    System_Func_object__uint____ctor(_9__77_1, v202, Method_WarBoardData___c___ctor_b__77_1__, 0LL);
    v203 = WarBoardData___c_TypeInfo->static_fields;
    v203->__9__77_1 = (struct System_Func_WarBoardStageNpcEntity__uint__o *)_9__77_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v203->__9__77_1, (int32_t)_9__77_1, v204, v205);
  }
  v206 = (struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *)System_Linq_Enumerable__ToDictionary_object__uint_(
                                                                                           v200,
                                                                                           (System_Func_TSource__TKey__o *)_9__77_1,
                                                                                           (const MethodInfo_2E717A0 *)Method_System_Linq_Enumerable_ToDictionary_WarBoardStageNpcEntity__uint___);
  this->fields.npcEntityDict = v206;
  p_npcEntityDict = &this->fields.npcEntityDict;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.npcEntityDict, (int32_t)v206, v207, v208);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_359;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_WarBoardActionPointMaster___);
  if ( !Instance )
    goto LABEL_359;
  WarBoardActionPointEntities = WarBoardActionPointMaster__GetWarBoardActionPointEntities(
                                  (WarBoardActionPointMaster_o *)Instance,
                                  stage->fields.id,
                                  0LL);
  v212 = WarBoardData___c_TypeInfo;
  v213 = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardActionPointEntities;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v212 = WarBoardData___c_TypeInfo;
  }
  _9__77_2 = (System_Func_T__TResult__o *)v212->static_fields->__9__77_2;
  if ( !_9__77_2 )
  {
    if ( !v212->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v212);
      v212 = WarBoardData___c_TypeInfo;
    }
    v215 = (Il2CppObject *)v212->static_fields->__9;
    _9__77_2 = (System_Func_T__TResult__o *)sub_1B64314(
                                              System_Func_WarBoardActionPointEntity__uint__TypeInfo,
                                              v210,
                                              v211);
    System_Func_object__uint____ctor(_9__77_2, v215, Method_WarBoardData___c___ctor_b__77_2__, 0LL);
    v216 = WarBoardData___c_TypeInfo->static_fields;
    v216->__9__77_2 = (struct System_Func_WarBoardActionPointEntity__uint__o *)_9__77_2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v216->__9__77_2, (int32_t)_9__77_2, v217, v218);
  }
  v219 = (struct System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__o *)System_Linq_Enumerable__ToDictionary_object__uint_(
                                                                                              v213,
                                                                                              (System_Func_TSource__TKey__o *)_9__77_2,
                                                                                              (const MethodInfo_2E717A0 *)Method_System_Linq_Enumerable_ToDictionary_WarBoardActionPointEntity__uint___);
  this->fields.actionPointEntityDict = v219;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.actionPointEntityDict, (int32_t)v219, v220, v221);
  Instance = (__int64)this->fields.npcEntityDict;
  if ( !Instance )
    goto LABEL_359;
  Values = System_Collections_Generic_Dictionary_uint__object___get_Values(
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)Instance,
             (const MethodInfo_31B1F40 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Values__);
  v225 = WarBoardData___c_TypeInfo;
  v226 = (System_Collections_Generic_IEnumerable_TSource__o *)Values;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v225 = WarBoardData___c_TypeInfo;
  }
  _9__77_3 = (System_Func_object__int__o *)v225->static_fields->__9__77_3;
  if ( !_9__77_3 )
  {
    if ( !v225->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v225);
      v225 = WarBoardData___c_TypeInfo;
    }
    v228 = (Il2CppObject *)v225->static_fields->__9;
    _9__77_3 = (System_Func_object__int__o *)sub_1B64314(System_Func_WarBoardStageNpcEntity__int__TypeInfo, v223, v224);
    System_Func_object__int____ctor(_9__77_3, v228, Method_WarBoardData___c___ctor_b__77_3__, 0LL);
    v229 = WarBoardData___c_TypeInfo->static_fields;
    v229->__9__77_3 = (struct System_Func_WarBoardStageNpcEntity__int__o *)_9__77_3;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v229->__9__77_3, (int32_t)_9__77_3, v230, v231);
  }
  Instance = System_Linq_Enumerable__Max_object_(
               v226,
               (System_Func_TSource__int__o *)_9__77_3,
               (const MethodInfo_2E61D74 *)Method_System_Linq_Enumerable_Max_WarBoardStageNpcEntity___);
  npcEntityDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.npcEntityDict;
  this->fields._maxForceId_k__BackingField = Instance;
  if ( !npcEntityDict )
    goto LABEL_359;
  v233 = System_Collections_Generic_Dictionary_uint__object___get_Values(
           npcEntityDict,
           (const MethodInfo_31B1F40 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Values__);
  v236 = WarBoardData___c_TypeInfo;
  v237 = (System_Collections_Generic_IEnumerable_TSource__o *)v233;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v236 = WarBoardData___c_TypeInfo;
  }
  _9__77_4 = (System_Func_object__int__o *)v236->static_fields->__9__77_4;
  if ( !_9__77_4 )
  {
    if ( !v236->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v236);
      v236 = WarBoardData___c_TypeInfo;
    }
    v239 = (Il2CppObject *)v236->static_fields->__9;
    _9__77_4 = (System_Func_object__int__o *)sub_1B64314(System_Func_WarBoardStageNpcEntity__int__TypeInfo, v234, v235);
    System_Func_object__int____ctor(_9__77_4, v239, Method_WarBoardData___c___ctor_b__77_4__, 0LL);
    v240 = WarBoardData___c_TypeInfo->static_fields;
    v240->__9__77_4 = (struct System_Func_WarBoardStageNpcEntity__int__o *)_9__77_4;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v240->__9__77_4, (int32_t)_9__77_4, v241, v242);
  }
  p_bgAnimationInfo_k__BackingField = (ServantStatusBattleListViewItem_o *)&this->fields._bgAnimationInfo_k__BackingField;
  p_listUiData = (ServantStatusBattleListViewItem_o *)&this->fields.listUiData;
  this->fields._maxGroupId_k__BackingField = System_Linq_Enumerable__Max_object_(
                                               v237,
                                               (System_Func_TSource__int__o *)_9__77_4,
                                               (const MethodInfo_2E61D74 *)Method_System_Linq_Enumerable_Max_WarBoardStageNpcEntity___);
  v644 = this;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_359;
  v632 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (WarBoardStagePieceDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
  v639 = (NpcFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v643 = (WarBoardCommonReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  v648 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                        System_Collections_Generic_List_WarBoardSquareData__TypeInfo,
                                                        v243,
                                                        v244);
  System_Collections_Generic_List_object____ctor(
    v648,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor__);
  v641 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                        System_Collections_Generic_List_WarBoardSquareData__TypeInfo,
                                                        v245,
                                                        v246);
  System_Collections_Generic_List_object____ctor(
    v641,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor__);
  v249 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                        System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                        v247,
                                                        v248);
  System_Collections_Generic_List_object____ctor(
    v249,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v638 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                        System_Collections_Generic_List_WarBoardItemData__TypeInfo,
                                                        v250,
                                                        v251);
  System_Collections_Generic_List_object____ctor(
    v638,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardItemData___ctor__);
  v633 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                        System_Collections_Generic_List_WarBoardTreasureData__TypeInfo,
                                                        v252,
                                                        v253);
  System_Collections_Generic_List_object____ctor(
    v633,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardTreasureData___ctor__);
  v636 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                        System_Collections_Generic_List_WarBoardWallData__TypeInfo,
                                                        v254,
                                                        v255);
  System_Collections_Generic_List_object____ctor(
    v636,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardWallData___ctor__);
  v637 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                        System_Collections_Generic_List_WarBoardEffectData__TypeInfo,
                                                        v256,
                                                        v257);
  System_Collections_Generic_List_object____ctor(
    v637,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardEffectData___ctor__);
  v258 = WarBoardData_TypeInfo;
  if ( !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    v258 = WarBoardData_TypeInfo;
  }
  v259 = serverData;
  v260 = v648;
  v261 = layoutEntities;
  WARBOARDDATA_SAVEDATA_KEY = v258->static_fields->WARBOARDDATA_SAVEDATA_KEY;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  Instance = EncryptedPlayerPrefs__HasKey(WARBOARDDATA_SAVEDATA_KEY, 0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( !serverData )
      goto LABEL_359;
    v263 = WarBoardData_TypeInfo;
    progressType = serverData->fields.progressType;
    if ( !WarBoardData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    if ( progressType == 3 )
    {
      WarBoardData__DeleteLocalSave((const MethodInfo *)v263);
    }
    else
    {
      v265 = WarBoardData_TypeInfo->static_fields->WARBOARDDATA_SAVEDATA_KEY;
      if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
      String = EncryptedPlayerPrefs__GetString(v265, 0LL);
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v267 = System_Convert__FromBase64String(String, 0LL);
      v270 = (MiniMessagePack_MiniMessagePacker_o *)sub_1B64314(MiniMessagePack_MiniMessagePacker_TypeInfo, v268, v269);
      MiniMessagePack_MiniMessagePacker___ctor(v270, 0LL);
      if ( !v270 )
        goto LABEL_359;
      v271 = MiniMessagePack_MiniMessagePacker__UnpackClass_object_(
               v270,
               v267,
               (const MethodInfo_2EB6380 *)Method_MiniMessagePack_MiniMessagePacker_UnpackClass_WarBoardData_WarBoardLocalSaveData___);
      this->fields.localSaveData = (struct WarBoardData_WarBoardLocalSaveData_o *)v271;
      p_localSaveData = &this->fields.localSaveData;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.localSaveData, (int32_t)v271, v273, v274);
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
        Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        v279 = (_QWORD *)Instance;
        if ( (int)pieceSaves->max_length < 1 )
        {
LABEL_87:
          v657 = (System_Object_array **)v279;
          if ( !*p_localSaveData )
            goto LABEL_359;
          itemSaves = (*p_localSaveData)->fields.itemSaves;
          v646 = v249;
          if ( !itemSaves )
            goto LABEL_359;
          if ( (int)itemSaves->max_length < 1 )
          {
LABEL_97:
            if ( !v279 )
              goto LABEL_359;
            v303 = (ServantStatusBattleListViewItem_o *)(v279 + 5);
            if ( v657[5] )
            {
              if ( !*p_localSaveData )
                goto LABEL_359;
              treasureSaves = (*p_localSaveData)->fields.treasureSaves;
              if ( !treasureSaves )
                goto LABEL_359;
              if ( (int)treasureSaves->max_length >= 1 )
              {
                v305 = 0;
                v306 = 0LL;
                do
                {
                  v307 = sub_1B64314(WarBoardData___c__DisplayClass77_2_TypeInfo, v276, v277);
                  WarBoardData___c__DisplayClass77_2___ctor((WarBoardData___c__DisplayClass77_2_o *)v307, 0LL);
                  if ( v306 >= treasureSaves->max_length )
                    goto LABEL_360;
                  if ( !v307 )
                    goto LABEL_359;
                  v310 = treasureSaves->m_Items[v306];
                  *(_QWORD *)(v307 + 16) = v310;
                  v311 = v307 + 16;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v307 + 16), (int32_t)v310, v308, v309);
                  klass = (System_Collections_Generic_IEnumerable_TSource__o *)v303->klass;
                  v315 = (System_Func_object__bool__o *)sub_1B64314(
                                                          System_Func_WarBoardUserTreasureData__bool__TypeInfo,
                                                          v313,
                                                          v314);
                  System_Func_object__bool____ctor(
                    v315,
                    (Il2CppObject *)v307,
                    Method_WarBoardData___c__DisplayClass77_2___ctor_b__8__,
                    0LL);
                  Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__48617700(
                                        klass,
                                        (System_Func_TSource__bool__o *)v315,
                                        (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserTreasureData___);
                  if ( Instance )
                  {
                    if ( !*(_QWORD *)v311 )
                      goto LABEL_359;
                    if ( !*(_BYTE *)(*(_QWORD *)v311 + 20LL) )
                    {
                      v305 = 1;
                      *(_BYTE *)(Instance + 20) = 0;
                    }
                  }
                  ++v306;
                }
                while ( (__int64)v306 < (int)treasureSaves->max_length );
                if ( (v305 & 1) != 0 )
                {
                  v316 = WarBoardData___c_TypeInfo;
                  v317 = (System_Collections_Generic_IEnumerable_TSource__o *)v303->klass;
                  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
                    v316 = WarBoardData___c_TypeInfo;
                  }
                  _9__77_9 = (System_Func_object__bool__o *)v316->static_fields->__9__77_9;
                  if ( !_9__77_9 )
                  {
                    if ( !v316->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(v316);
                      v316 = WarBoardData___c_TypeInfo;
                    }
                    v319 = (Il2CppObject *)v316->static_fields->__9;
                    _9__77_9 = (System_Func_object__bool__o *)sub_1B64314(
                                                                System_Func_WarBoardUserTreasureData__bool__TypeInfo,
                                                                v276,
                                                                v277);
                    System_Func_object__bool____ctor(_9__77_9, v319, Method_WarBoardData___c___ctor_b__77_9__, 0LL);
                    v320 = WarBoardData___c_TypeInfo->static_fields;
                    v320->__9__77_9 = (struct System_Func_WarBoardUserTreasureData__bool__o *)_9__77_9;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v320->__9__77_9, (int32_t)_9__77_9, v321, v322);
                  }
                  v323 = System_Linq_Enumerable__Where_object_(
                           v317,
                           (System_Func_TSource__bool__o *)_9__77_9,
                           (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_WarBoardUserTreasureData___);
                  v324 = System_Linq_Enumerable__ToArray_object_(
                           v323,
                           (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_WarBoardUserTreasureData___);
                  v303->klass = (ServantStatusBattleListViewItem_c *)v324;
                  sub_1B6406C(v303, (int32_t)v324, v325, v326);
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
              v337 = System_Linq_Enumerable__Count_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)(*p_localSaveData)->fields.squareIndexInfo,
                       (const MethodInfo_2E55CB4 *)Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData_SaveData___);
              System_Array__Resize_object_(
                v657 + 11,
                v337,
                (const MethodInfo_2DF910C *)Method_System_Array_Resize_WarBoardSquareIndexData___);
              v261 = layoutEntities;
              if ( v337 >= 1 )
              {
                v339 = 0LL;
                v340 = (unsigned int)v337;
                v341 = 8LL;
                while ( *p_localSaveData )
                {
                  squareIndexInfo = (*p_localSaveData)->fields.squareIndexInfo;
                  if ( !squareIndexInfo )
                    break;
                  if ( v339 >= squareIndexInfo->max_length )
                    goto LABEL_360;
                  v343 = (unsigned int *)v657[11];
                  v344 = *(WarBoardSquareIndexData_SaveData_o **)((char *)&squareIndexInfo->obj.klass + v341 * 4);
                  v345 = (WarBoardSquareIndexData_o *)sub_1B64314(WarBoardSquareIndexData_TypeInfo, v282, v338);
                  WarBoardSquareIndexData___ctor_35283300(v345, v344, 0LL);
                  if ( !v343 )
                    break;
                  if ( v345 )
                  {
                    Instance = sub_1B64204(v345, *(_QWORD *)(*(_QWORD *)v343 + 64LL));
                    if ( !Instance )
                    {
LABEL_361:
                      v625 = sub_1B64348(Instance);
                      sub_1B641F0(v625, 0LL);
                    }
                  }
                  if ( v339 >= v343[6] )
                    goto LABEL_360;
                  *(_QWORD *)&v343[v341] = v345;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v343[v341], (int32_t)v345, v346, v347);
                  v249 = v646;
                  ++v339;
                  v341 += 2LL;
                  if ( v340 == v339 )
                    goto LABEL_138;
                }
                goto LABEL_359;
              }
LABEL_138:
              if ( !*p_localSaveData )
                goto LABEL_359;
              v259 = (WarBoardDataEntity_o *)v657;
              v348 = System_Linq_Enumerable__Count_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)(*p_localSaveData)->fields.bossBattleInfo,
                       (const MethodInfo_2E55CB4 *)Method_System_Linq_Enumerable_Count_WarBoardBossBattleData_SaveData___);
              System_Array__Resize_object_(
                v657 + 12,
                v348,
                (const MethodInfo_2DF910C *)Method_System_Array_Resize_WarBoardBossBattleData___);
              if ( v348 >= 1 )
              {
                v350 = 0LL;
                v351 = (unsigned int)v348;
                v352 = 8LL;
                do
                {
                  if ( !*p_localSaveData )
                    goto LABEL_359;
                  bossBattleInfo = (*p_localSaveData)->fields.bossBattleInfo;
                  if ( !bossBattleInfo )
                    goto LABEL_359;
                  if ( v350 >= bossBattleInfo->max_length )
                    goto LABEL_360;
                  v354 = (unsigned int *)v657[12];
                  v355 = *(WarBoardBossBattleData_SaveData_o **)((char *)&bossBattleInfo->obj.klass + v352 * 4);
                  v356 = (WarBoardBossBattleData_o *)sub_1B64314(WarBoardBossBattleData_TypeInfo, v282, v349);
                  WarBoardBossBattleData___ctor_35036736(v356, v355, v357);
                  if ( !v354 )
                    goto LABEL_359;
                  if ( v356 )
                  {
                    Instance = sub_1B64204(v356, *(_QWORD *)(*(_QWORD *)v354 + 64LL));
                    if ( !Instance )
                      goto LABEL_361;
                  }
                  if ( v350 >= v354[6] )
                    goto LABEL_360;
                  *(_QWORD *)&v354[v352] = v356;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v354[v352], (int32_t)v356, v358, v359);
                  v249 = v646;
                  ++v350;
                  v352 += 2LL;
                }
                while ( v351 != v350 );
                v259 = (WarBoardDataEntity_o *)v657;
              }
              v260 = v648;
              goto LABEL_154;
            }
            v328 = 0LL;
            while ( 1 )
            {
              v329 = sub_1B64314(WarBoardData___c__DisplayClass77_3_TypeInfo, v276, v277);
              WarBoardData___c__DisplayClass77_3___ctor((WarBoardData___c__DisplayClass77_3_o *)v329, 0LL);
              if ( v328 >= wallSaves->max_length )
                break;
              if ( !v329 )
                goto LABEL_359;
              v332 = wallSaves->m_Items[v328];
              *(_QWORD *)(v329 + 16) = v332;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v329 + 16), (int32_t)v332, v330, v331);
              v333 = (System_Collections_Generic_IEnumerable_TSource__o *)v657[6];
              v336 = (System_Func_object__bool__o *)sub_1B64314(
                                                      System_Func_WarBoardUserWallData__bool__TypeInfo,
                                                      v334,
                                                      v335);
              System_Func_object__bool____ctor(
                v336,
                (Il2CppObject *)v329,
                Method_WarBoardData___c__DisplayClass77_3___ctor_b__10__,
                0LL);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__48617700(
                                    v333,
                                    (System_Func_TSource__bool__o *)v336,
                                    (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
              if ( Instance )
                WarBoardUserWallData__SetSaveData(
                  (WarBoardUserWallData_o *)Instance,
                  *(WarBoardWallData_SaveData_o **)(v329 + 16),
                  0LL);
              if ( (__int64)++v328 >= (int)wallSaves->max_length )
                goto LABEL_127;
            }
          }
          else
          {
            v294 = 0LL;
            while ( 1 )
            {
              v295 = sub_1B64314(WarBoardData___c__DisplayClass77_1_TypeInfo, v276, v277);
              WarBoardData___c__DisplayClass77_1___ctor((WarBoardData___c__DisplayClass77_1_o *)v295, 0LL);
              if ( v294 >= itemSaves->max_length )
                break;
              if ( !v295 )
                goto LABEL_359;
              v298 = itemSaves->m_Items[v294];
              *(_QWORD *)(v295 + 16) = v298;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v295 + 16), (int32_t)v298, v296, v297);
              if ( !v279 )
                goto LABEL_359;
              v301 = (System_Collections_Generic_IEnumerable_TSource__o *)v279[4];
              v302 = (System_Func_object__bool__o *)sub_1B64314(
                                                      System_Func_WarBoardUserGetItemData__bool__TypeInfo,
                                                      v299,
                                                      v300);
              System_Func_object__bool____ctor(
                v302,
                (Il2CppObject *)v295,
                Method_WarBoardData___c__DisplayClass77_1___ctor_b__7__,
                0LL);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__48617700(
                                    v301,
                                    (System_Func_TSource__bool__o *)v302,
                                    (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
              if ( Instance )
                WarBoardUserGetItemData__SetSaveData(
                  (WarBoardUserGetItemData_o *)Instance,
                  *(WarBoardItemData_SaveData_o **)(v295 + 16),
                  0LL);
              if ( (__int64)++v294 >= (int)itemSaves->max_length )
                goto LABEL_97;
            }
          }
        }
        else
        {
          v280 = 0LL;
          while ( 1 )
          {
            v281 = sub_1B64314(WarBoardData___c__DisplayClass77_0_TypeInfo, v276, v277);
            WarBoardData___c__DisplayClass77_0___ctor((WarBoardData___c__DisplayClass77_0_o *)v281, 0LL);
            if ( v280 >= pieceSaves->max_length )
              break;
            if ( !v281 )
              goto LABEL_359;
            v285 = pieceSaves->m_Items[v280];
            *(_QWORD *)(v281 + 16) = v285;
            v286 = (WarBoardPieceData_SaveData_o **)(v281 + 16);
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v281 + 16), (int32_t)v285, v283, v284);
            if ( !*(_QWORD *)(v281 + 16) || !v279 )
              goto LABEL_359;
            if ( *(_DWORD *)(*(_QWORD *)(v281 + 16) + 24LL) )
            {
              v289 = (System_Collections_Generic_IEnumerable_TSource__o *)v279[2];
              v290 = (System_Func_object__bool__o *)sub_1B64314(
                                                      System_Func_WarBoardUserServantData__bool__TypeInfo,
                                                      v287,
                                                      v288);
              System_Func_object__bool____ctor(
                v290,
                (Il2CppObject *)v281,
                Method_WarBoardData___c__DisplayClass77_0___ctor_b__6__,
                0LL);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__48617700(
                                    v289,
                                    (System_Func_TSource__bool__o *)v290,
                                    (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
              if ( Instance )
                WarBoardUserServantData__SetSaveData((WarBoardUserServantData_o *)Instance, *v286, 0LL);
            }
            else
            {
              v291 = (System_Collections_Generic_IEnumerable_TSource__o *)v279[3];
              v292 = (System_Func_object__bool__o *)sub_1B64314(
                                                      System_Func_WarBoardUserMasterData__bool__TypeInfo,
                                                      v287,
                                                      v288);
              System_Func_object__bool____ctor(
                v292,
                (Il2CppObject *)v281,
                Method_WarBoardData___c__DisplayClass77_0___ctor_b__5__,
                0LL);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__48617700(
                                    v291,
                                    (System_Func_TSource__bool__o *)v292,
                                    (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
              if ( Instance )
                WarBoardUserMasterData__SetSaveData((WarBoardUserMasterData_o *)Instance, *v286, 0LL);
            }
            if ( (__int64)++v280 >= (int)pieceSaves->max_length )
              goto LABEL_87;
          }
        }
LABEL_360:
        sub_1B6432C(Instance, v282);
      }
      v360 = WarBoardData_TypeInfo;
      if ( !WarBoardData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
      WarBoardData__DeleteLocalSave((const MethodInfo *)v360);
      *p_localSaveData = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.localSaveData, 0, v361, v362);
    }
LABEL_154:
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    goto LABEL_155;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !serverData )
    goto LABEL_359;
LABEL_155:
  if ( !Instance )
    goto LABEL_359;
  WarBoardManager__InitializeLogic((WarBoardManager_o *)Instance, v259, v259->fields.progressType != 3, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_359;
  WarBoardManager__UpdateServerData((WarBoardManager_o *)Instance, v259, 0LL);
  v658 = v259;
  if ( (int)v659 >= 1 )
  {
    v364 = 0LL;
    p_enemyDeck = &v259->fields.enemyDeck;
    npcIdx = 0;
    p_myDeck = &v259->fields.myDeck;
    v647 = v249;
    do
    {
      v365 = sub_1B64314(WarBoardData___c__DisplayClass77_4_TypeInfo, v282, v363);
      WarBoardData___c__DisplayClass77_4___ctor((WarBoardData___c__DisplayClass77_4_o *)v365, 0LL);
      if ( v364 >= v261->max_length )
        goto LABEL_360;
      if ( !v365 )
        goto LABEL_359;
      v368 = v261->m_Items[v364];
      *(_QWORD *)(v365 + 16) = v368;
      v369 = (WarBoardStageLayoutEntity_o **)(v365 + 16);
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v365 + 16), (int32_t)v368, v366, v367);
      v370 = *(WarBoardStageLayoutEntity_o **)(v365 + 16);
      v373 = (WarBoardSquareData_o *)sub_1B64314(WarBoardSquareData_TypeInfo, v371, v372);
      WarBoardSquareData___ctor(v373, v370, roadEntities, 0LL);
      if ( v364 )
      {
        if ( (unsigned int)(v364 - 1) >= v261->max_length )
          goto LABEL_360;
        v375 = *((_QWORD *)&v261->max_length + v364);
        if ( !v375 )
          goto LABEL_359;
        v376 = *v369;
        if ( !*v369 )
          goto LABEL_359;
        if ( *(_DWORD *)(v375 + 20) == v376->fields.squareIndex )
          goto LABEL_176;
      }
      else
      {
        v376 = *v369;
        if ( !*v369 )
          goto LABEL_359;
      }
      throughCondId = v376->fields.throughCondId;
      if ( !throughCondId )
        goto LABEL_364;
      Instance = (__int64)v643;
      if ( !v643 )
        goto LABEL_359;
      Instance = WarBoardCommonReleaseMaster__IsOpen(v643, throughCondId, 0LL);
      if ( (Instance & 1) != 0 )
      {
LABEL_364:
        if ( !v260 )
          goto LABEL_359;
        items = v260->fields._items;
        v379 = Method_System_Collections_Generic_List_WarBoardSquareData__Add__;
        ++v260->fields._version;
        if ( !items )
          goto LABEL_359;
        size = v260->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v260,
            (Il2CppObject *)v373,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v379[4] + 192LL) + 112LL));
        }
        else
        {
          v381 = &items->obj.klass + size;
          v260->fields._size = size + 1;
          v381[4] = (Il2CppClass *)v373;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v381 + 4), (int32_t)v373, v363, v374);
        }
LABEL_176:
        v382 = *v369;
        if ( !*v369 )
          goto LABEL_359;
        if ( v382->fields.isPiecePut )
        {
          questPhase = v259->fields.questPhase;
          questId = v259->fields.questId;
          if ( v382->fields.pieceIndex )
          {
            svtInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v259->fields.svtInfo;
            v385 = (System_Func_object__bool__o *)sub_1B64314(
                                                    System_Func_WarBoardUserServantData__bool__TypeInfo,
                                                    v282,
                                                    v363);
            System_Func_object__bool____ctor(
              v385,
              (Il2CppObject *)v365,
              Method_WarBoardData___c__DisplayClass77_4___ctor_b__13__,
              0LL);
            Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__48617700(
                                  svtInfo,
                                  (System_Func_TSource__bool__o *)v385,
                                  (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
            v386 = (WarBoardUserServantData_o *)Instance;
            v387 = 0LL;
          }
          else
          {
            masterInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v259->fields.masterInfo;
            v395 = (System_Func_object__bool__o *)sub_1B64314(
                                                    System_Func_WarBoardUserMasterData__bool__TypeInfo,
                                                    v282,
                                                    v363);
            System_Func_object__bool____ctor(
              v395,
              (Il2CppObject *)v365,
              Method_WarBoardData___c__DisplayClass77_4___ctor_b__12__,
              0LL);
            Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__48617700(
                                  masterInfo,
                                  (System_Func_TSource__bool__o *)v395,
                                  (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
            v387 = (WarBoardUserMasterData_o *)Instance;
            v386 = 0LL;
          }
          v396 = *v369;
          if ( !*v369 )
            goto LABEL_359;
          v397 = p_enemyDeck;
          v653 = questPhase;
          if ( !v396->fields.forceId )
          {
            v397 = p_enemyDeck;
            if ( !v396->fields.pieceIndex )
              v397 = p_myDeck;
          }
          v398 = *v397;
          Type = Follower__getType(v396->fields.followerType, 0LL);
          IsNpc = Follower__IsNpc(Type, 0LL);
          v401 = *v369;
          v402 = v259->fields.progressType;
          v403 = IsNpc;
          v404 = *p_npcEntityDict;
          v407 = (WarBoardPieceData_o *)sub_1B64314(WarBoardPieceData_TypeInfo, v405, v406);
          v408 = v407;
          v409 = v402 == 3;
          if ( v403 )
          {
            WarBoardPieceData___ctor(v407, v401, v386, v387, v398, v409, v404, npcIdx, 0LL);
            if ( !*v369 )
              goto LABEL_359;
            v259 = v658;
            v261 = layoutEntities;
            v249 = v647;
            Instance = (__int64)Master_object;
            if ( !Master_object )
              goto LABEL_359;
            Instance = WarBoardStagePieceDetailMaster__TryGetEntity(
                         Master_object,
                         &entity,
                         (*v369)->fields.stageId,
                         (*v369)->fields.forceId,
                         (*v369)->fields.groupId,
                         (*v369)->fields.pieceIndex,
                         0LL);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)entity;
              if ( !entity )
                goto LABEL_359;
              Instance = WarBoardStagePieceDetailEntity__GetImageSvtId(entity, 0LL);
              if ( !v408 )
                goto LABEL_359;
              v408->fields._npcImageSvtId_k__BackingField = Instance;
              Instance = (__int64)entity;
              if ( !entity )
                goto LABEL_359;
              v408->fields._npcDispLimitCount_k__BackingField = WarBoardStagePieceDetailEntity__GetDispLimitCnt(
                                                                  entity,
                                                                  0LL);
            }
            else if ( !v408 )
            {
              goto LABEL_359;
            }
            Instance = (__int64)v639;
            if ( !v639 )
              goto LABEL_359;
            Entity_39109336 = NpcFollowerMaster__GetEntity_39109336(
                                v639,
                                questId,
                                v653,
                                v408->fields._npcId_k__BackingField,
                                0LL);
            if ( Entity_39109336 )
            {
              v417 = Entity_39109336;
              if ( !v408->fields._npcImageSvtId_k__BackingField )
                v408->fields._npcImageSvtId_k__BackingField = NpcFollowerEntity__GetImageSvtId(Entity_39109336, 0LL);
              if ( (v408->fields._npcDispLimitCount_k__BackingField & 0x80000000) != 0 )
                v408->fields._npcDispLimitCount_k__BackingField = NpcFollowerEntity__GetDispLimitCnt(v417, 0LL);
            }
            Instance = WarBoardPieceData__get_isPlayerGroup(v408, 0LL);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)v632;
              if ( !v632 )
                goto LABEL_359;
              Instance = DataMasterBase_object__object__long___TryGetEntity(
                           v632,
                           &v663,
                           v408->fields._npcId_k__BackingField,
                           (const MethodInfo_30D40A4 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
              if ( (Instance & 1) != 0 )
              {
                Instance = (__int64)v663;
                if ( !v663 )
                  goto LABEL_359;
                Instance = (__int64)NpcServantFollowerEntity__GetFollowerName_39110520(
                                      (NpcServantFollowerEntity_o *)v663,
                                      v408->fields._npcId_k__BackingField,
                                      questId,
                                      v653,
                                      &isChangeName,
                                      0LL);
                if ( isChangeName )
                {
                  Instance = (__int64)v408->fields._battleServant_k__BackingField;
                  if ( !Instance )
                    goto LABEL_359;
                  BattleServantData__ClearOverwriteServantName((BattleServantData_o *)Instance, 0LL);
                }
              }
            }
            if ( !v647 )
              goto LABEL_359;
            v420 = v647->fields._items;
            v421 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
            ++v647->fields._version;
            if ( !v420 )
              goto LABEL_359;
            v422 = v647->fields._size;
            if ( (unsigned int)v422 >= v420->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v647,
                (Il2CppObject *)v408,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v421[4] + 192LL) + 112LL));
            }
            else
            {
              v423 = &v420->obj.klass + v422;
              v647->fields._size = v422 + 1;
              v423[4] = (Il2CppClass *)v408;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v423 + 4), (int32_t)v408, v418, v419);
            }
            ++npcIdx;
          }
          else
          {
            WarBoardPieceData___ctor(v407, v401, v386, v387, v398, v409, v404, -1, 0LL);
            if ( !v408 )
              goto LABEL_359;
            Instance = WarBoardPieceData__get_isMaster(v408, 0LL);
            v259 = v658;
            v261 = layoutEntities;
            v249 = v647;
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)*p_masterExistsForce;
              if ( !*p_masterExistsForce )
                goto LABEL_359;
              Instance = System_Collections_Generic_List_int___Contains(
                           (System_Collections_Generic_List_int__o *)Instance,
                           v408->fields._forceId_k__BackingField,
                           (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
              if ( (Instance & 1) == 0 )
              {
                Instance = (__int64)*p_masterExistsForce;
                if ( !*p_masterExistsForce )
                  goto LABEL_359;
                forceId_k__BackingField = v408->fields._forceId_k__BackingField;
                v413 = *(_QWORD *)(Instance + 16);
                v414 = Method_System_Collections_Generic_List_int__Add__;
                ++*(_DWORD *)(Instance + 28);
                if ( !v413 )
                  goto LABEL_359;
                v415 = *(int *)(Instance + 24);
                if ( (unsigned int)v415 >= *(_DWORD *)(v413 + 24) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    (System_Collections_Generic_List_int__o *)Instance,
                    forceId_k__BackingField,
                    *(const MethodInfo_348FEDC **)(*(_QWORD *)(v414[4] + 192LL) + 112LL));
                }
                else
                {
                  *(_DWORD *)(Instance + 24) = v415 + 1;
                  *(_DWORD *)(v413 + 4 * v415 + 32) = forceId_k__BackingField;
                }
              }
            }
            if ( !v647 )
              goto LABEL_359;
            v427 = v647->fields._items;
            v428 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
            ++v647->fields._version;
            if ( !v427 )
              goto LABEL_359;
            v429 = v647->fields._size;
            if ( (unsigned int)v429 >= v427->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v647,
                (Il2CppObject *)v408,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v428[4] + 192LL) + 112LL));
            }
            else
            {
              v430 = &v427->obj.klass + v429;
              v647->fields._size = v429 + 1;
              v430[4] = (Il2CppClass *)v408;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v430 + 4), (int32_t)v408, v410, v411);
            }
          }
          v260 = v648;
        }
        v431 = *v369;
        if ( !*v369 )
          goto LABEL_359;
        switch ( v431->fields.type )
        {
          case 2:
            getItemInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v259->fields.getItemInfo;
            v433 = (System_Func_object__bool__o *)sub_1B64314(
                                                    System_Func_WarBoardUserGetItemData__bool__TypeInfo,
                                                    v282,
                                                    v363);
            System_Func_object__bool____ctor(
              v433,
              (Il2CppObject *)v365,
              Method_WarBoardData___c__DisplayClass77_4___ctor_b__14__,
              0LL);
            v434 = System_Linq_Enumerable__FirstOrDefault_object__48617700(
                     getItemInfo,
                     (System_Func_TSource__bool__o *)v433,
                     (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
            v435 = *(WarBoardStageLayoutEntity_o **)(v365 + 16);
            v436 = (WarBoardUserGetItemData_o *)v434;
            v439 = (WarBoardItemData_o *)sub_1B64314(WarBoardItemData_TypeInfo, v437, v438);
            WarBoardItemData___ctor(v439, v435, v436, 0LL);
            v440 = v638;
            if ( !v638 )
              goto LABEL_359;
            version = v638->fields._version;
            v442 = v638->fields._items;
            v443 = &Method_System_Collections_Generic_List_WarBoardItemData__Add__;
            goto LABEL_246;
          case 3:
            v439 = (WarBoardItemData_o *)sub_1B64314(WarBoardEffectData_TypeInfo, v282, v363);
            WarBoardEffectData___ctor((WarBoardEffectData_o *)v439, v431, 0LL);
            v440 = v637;
            if ( !v637 )
              goto LABEL_359;
            version = v637->fields._version;
            v442 = v637->fields._items;
            v443 = &Method_System_Collections_Generic_List_WarBoardEffectData__Add__;
            goto LABEL_246;
          case 4:
            treasureInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v259->fields.treasureInfo;
            if ( !treasureInfo )
              goto LABEL_242;
            v445 = (System_Func_object__bool__o *)sub_1B64314(
                                                    System_Func_WarBoardUserTreasureData__bool__TypeInfo,
                                                    v282,
                                                    v363);
            System_Func_object__bool____ctor(
              v445,
              (Il2CppObject *)v365,
              Method_WarBoardData___c__DisplayClass77_4___ctor_b__11__,
              0LL);
            Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__48617700(
                                  treasureInfo,
                                  (System_Func_TSource__bool__o *)v445,
                                  (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserTreasureData___);
            if ( Instance )
              continue;
            v431 = *v369;
LABEL_242:
            v439 = (WarBoardItemData_o *)sub_1B64314(WarBoardTreasureData_TypeInfo, v282, v363);
            WarBoardTreasureData___ctor((WarBoardTreasureData_o *)v439, v431, 0LL);
            v440 = v633;
            if ( !v633 )
              goto LABEL_359;
            version = v633->fields._version;
            v442 = v633->fields._items;
            v443 = &Method_System_Collections_Generic_List_WarBoardTreasureData__Add__;
LABEL_246:
            v453 = *v443;
            v440->fields._version = version + 1;
            if ( !v442 )
              goto LABEL_359;
            v454 = v440->fields._size;
            if ( (unsigned int)v454 < v442->max_length )
            {
              v455 = &v442->obj.klass + v454;
              v440->fields._size = v454 + 1;
              v455[4] = (Il2CppClass *)v439;
              v392 = (ServantStatusBattleListViewItem_o *)(v455 + 4);
              v393 = (int)v439;
              goto LABEL_249;
            }
            v424 = v453[4];
            v425 = v440;
            v426 = (Il2CppObject *)v439;
            break;
          case 5:
            wallInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v259->fields.wallInfo;
            v447 = (System_Func_object__bool__o *)sub_1B64314(
                                                    System_Func_WarBoardUserWallData__bool__TypeInfo,
                                                    v282,
                                                    v363);
            System_Func_object__bool____ctor(
              v447,
              (Il2CppObject *)v365,
              Method_WarBoardData___c__DisplayClass77_4___ctor_b__15__,
              0LL);
            v448 = System_Linq_Enumerable__FirstOrDefault_object__48617700(
                     wallInfo,
                     (System_Func_TSource__bool__o *)v447,
                     (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
            v449 = *(WarBoardStageLayoutEntity_o **)(v365 + 16);
            v450 = (WarBoardUserWallData_o *)v448;
            v439 = (WarBoardItemData_o *)sub_1B64314(WarBoardWallData_TypeInfo, v451, v452);
            WarBoardWallData___ctor((WarBoardWallData_o *)v439, v449, v450, 0LL);
            v440 = v636;
            if ( !v636 )
              goto LABEL_359;
            version = v636->fields._version;
            v442 = v636->fields._items;
            v443 = &Method_System_Collections_Generic_List_WarBoardWallData__Add__;
            goto LABEL_246;
          default:
            continue;
        }
        goto LABEL_251;
      }
      if ( !v641 )
        goto LABEL_359;
      v388 = v641->fields._items;
      v389 = Method_System_Collections_Generic_List_WarBoardSquareData__Add__;
      ++v641->fields._version;
      if ( !v388 )
        goto LABEL_359;
      v390 = v641->fields._size;
      if ( (unsigned int)v390 < v388->max_length )
      {
        v391 = &v388->obj.klass + v390;
        v641->fields._size = v390 + 1;
        v391[4] = (Il2CppClass *)v373;
        v392 = (ServantStatusBattleListViewItem_o *)(v391 + 4);
        v393 = (int)v373;
LABEL_249:
        sub_1B6406C(v392, v393, v363, v374);
        continue;
      }
      v424 = v389[4];
      v425 = v641;
      v426 = (Il2CppObject *)v373;
LABEL_251:
      System_Collections_Generic_List_object___AddWithResize(
        v425,
        v426,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v424 + 192) + 112LL));
    }
    while ( (unsigned int)v659 != ++v364 );
  }
  if ( !v260 )
    goto LABEL_359;
  v456 = System_Collections_Generic_List_object___ToArray(
           v260,
           (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  v457 = v644;
  v644->fields.squares = (struct WarBoardSquareData_array *)v456;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v644->fields.squares, (int32_t)v456, v458, v459);
  Instance = (__int64)v641;
  if ( !v641 )
    goto LABEL_359;
  v460 = System_Collections_Generic_List_object___ToArray(
           v641,
           (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  v644->fields.condSquares = (struct WarBoardSquareData_array *)v460;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v644->fields.condSquares, (int32_t)v460, v461, v462);
  if ( !v249 )
    goto LABEL_359;
  v463 = System_Collections_Generic_List_object___ToArray(
           v249,
           (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  v644->fields.pieces = (struct WarBoardPieceData_array *)v463;
  p_pieces = (System_Collections_Generic_IEnumerable_T__o **)&v644->fields.pieces;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v644->fields.pieces, (int32_t)v463, v465, v466);
  pieces = (System_Object_array *)v644->fields.pieces;
  v470 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_WarBoardPieceData__TypeInfo, v468, v469);
  System_Comparison_object____ctor(v470, (Il2CppObject *)v644, Method_WarBoardData_ComparePiece__, 0LL);
  System_Array__Sort_object__48264584(
    pieces,
    v470,
    (const MethodInfo_2E07588 *)Method_System_Array_Sort_WarBoardPieceData___);
  Instance = (__int64)v638;
  if ( !v638 )
    goto LABEL_359;
  v471 = System_Collections_Generic_List_object___ToArray(
           v638,
           (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_WarBoardItemData__ToArray__);
  v644->fields.items = (struct WarBoardItemData_array *)v471;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v644->fields.items, (int32_t)v471, v472, v473);
  Instance = (__int64)v633;
  if ( !v633 )
    goto LABEL_359;
  v474 = System_Collections_Generic_List_object___ToArray(
           v633,
           (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_WarBoardTreasureData__ToArray__);
  v644->fields.treasures = (struct WarBoardTreasureData_array *)v474;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v644->fields.treasures, (int32_t)v474, v475, v476);
  Instance = (__int64)v637;
  if ( !v637 )
    goto LABEL_359;
  v477 = System_Collections_Generic_List_object___ToArray(
           v637,
           (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_WarBoardEffectData__ToArray__);
  v644->fields.effects = (struct WarBoardEffectData_array *)v477;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v644->fields.effects, (int32_t)v477, v478, v479);
  Instance = (__int64)v636;
  if ( !v636 )
    goto LABEL_359;
  v480 = System_Collections_Generic_List_object___ToArray(
           v636,
           (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_WarBoardWallData__ToArray__);
  v644->fields.walls = (struct WarBoardWallData_array *)v480;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v644->fields.walls, (int32_t)v480, v481, v482);
  v644->fields.serverData = v259;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v644->fields.serverData, (int32_t)v259, v483, v484);
  if ( v259->fields.progressType == 3 )
    WarBoardData__InitPrevCondData(v644, v282);
  v486 = v644->fields.localSaveData;
  if ( v486 )
  {
    v487 = v486->fields.pieceSaves;
    roadEntitiesb = (WarBoardRoadEntity_array *)&v644->fields.localSaveData;
    if ( v487 )
    {
      if ( (int)v487->max_length >= 1 )
      {
        v488 = 0LL;
        do
        {
          v489 = sub_1B64314(WarBoardData___c__DisplayClass77_5_TypeInfo, v282, v485);
          WarBoardData___c__DisplayClass77_5___ctor((WarBoardData___c__DisplayClass77_5_o *)v489, 0LL);
          if ( v488 >= v487->max_length )
            goto LABEL_360;
          if ( !v489 )
            goto LABEL_359;
          v492 = v487->m_Items[v488];
          *(_QWORD *)(v489 + 16) = v492;
          v493 = (WarBoardPieceData_SaveData_o **)(v489 + 16);
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v489 + 16), (int32_t)v492, v490, v491);
          v494 = *p_pieces;
          v497 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardPieceData__bool__TypeInfo, v495, v496);
          System_Func_object__bool____ctor(
            v497,
            (Il2CppObject *)v489,
            Method_WarBoardData___c__DisplayClass77_5___ctor_b__16__,
            0LL);
          if ( !BasicHelper__Any_object__48384284(
                  (System_Object_array *)v494,
                  (System_Func_T__bool__o *)v497,
                  (const MethodInfo_2E2491C *)Method_BasicHelper_Any_WarBoardPieceData___) )
          {
            v500 = (System_Collections_Generic_IEnumerable_TSource__o *)v259->fields.svtInfo;
            v501 = (System_Func_object__bool__o *)sub_1B64314(
                                                    System_Func_WarBoardUserServantData__bool__TypeInfo,
                                                    v498,
                                                    v499);
            System_Func_object__bool____ctor(
              v501,
              (Il2CppObject *)v489,
              Method_WarBoardData___c__DisplayClass77_5___ctor_b__17__,
              0LL);
            v502 = System_Linq_Enumerable__FirstOrDefault_object__48617700(
                     v500,
                     (System_Func_TSource__bool__o *)v501,
                     (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
            v505 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                                  System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                                  v503,
                                                                  v504);
            System_Collections_Generic_List_object____ctor(
              v505,
              (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
            if ( !v505 )
              goto LABEL_359;
            System_Collections_Generic_List_object___AddRange(
              v505,
              *p_pieces,
              (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
            if ( !p_fields->stageEntity )
              goto LABEL_359;
            id = p_fields->stageEntity->fields.id;
            v509 = *v493;
            v510 = (WarBoardPieceData_o *)sub_1B64314(WarBoardPieceData_TypeInfo, v506, v507);
            WarBoardPieceData___ctor_35260848(v510, id, (WarBoardUserServantData_o *)v502, v509, 0LL, -1, 0LL);
            v513 = v505->fields._items;
            v514 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
            ++v505->fields._version;
            if ( !v513 )
              goto LABEL_359;
            v515 = v505->fields._size;
            if ( (unsigned int)v515 >= v513->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v505,
                (Il2CppObject *)v510,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v514[4] + 192LL) + 112LL));
            }
            else
            {
              v516 = &v513->obj.klass + v515;
              v505->fields._size = v515 + 1;
              v516[4] = (Il2CppClass *)v510;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v516 + 4), (int32_t)v510, v511, v512);
            }
            v259 = v658;
            v517 = System_Collections_Generic_List_object___ToArray(
                     v505,
                     (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
            *p_pieces = (System_Collections_Generic_IEnumerable_T__o *)v517;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)p_pieces, (int32_t)v517, v518, v519);
            v457 = v644;
          }
          Instance = (__int64)*v493;
          if ( !*v493 )
            goto LABEL_359;
          WarBoardPieceData_SaveData__SetOwner((WarBoardPieceData_SaveData_o *)Instance, v457, 0LL);
          Instance = (__int64)*v493;
          if ( !*v493 )
            goto LABEL_359;
          WarBoardPieceData_SaveData__Load((WarBoardPieceData_SaveData_o *)Instance, 0LL);
        }
        while ( (__int64)++v488 < (int)v487->max_length );
      }
      if ( roadEntitiesb->obj.klass )
      {
        v520 = *(_QWORD *)&roadEntitiesb->obj.klass->_1.byval_arg.bits;
        if ( v520 )
        {
          v521 = *(_DWORD *)(v520 + 24);
          if ( v521 >= 1 )
          {
            v522 = 0;
            while ( v522 < v521 )
            {
              v523 = v520 + 8LL * (int)v522;
              v524 = *(WarBoardItemData_SaveData_o **)(v523 + 32);
              if ( !v524 )
                goto LABEL_359;
              WarBoardItemData_SaveData__SetOwner(*(WarBoardItemData_SaveData_o **)(v523 + 32), v457, 0LL);
              WarBoardItemData_SaveData__Load(v524, 0LL);
              v521 = *(_DWORD *)(v520 + 24);
              if ( (int)++v522 >= v521 )
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
              v526 = data[6];
              if ( v526 >= 1 )
              {
                v527 = 0;
                while ( v527 < v526 )
                {
                  v528 = (char *)&data[2 * v527];
                  v529 = (WarBoardTreasureData_SaveData_o *)*((_QWORD *)v528 + 4);
                  if ( !v529 )
                    goto LABEL_359;
                  WarBoardTreasureData_SaveData__SetOwner(*((WarBoardTreasureData_SaveData_o **)v528 + 4), v457, 0LL);
                  WarBoardTreasureData_SaveData__Load(v529, 0LL);
                  v526 = data[6];
                  if ( (int)++v527 >= v526 )
                    goto LABEL_293;
                }
                goto LABEL_360;
              }
LABEL_293:
              if ( roadEntitiesb->obj.klass )
              {
                v530 = *(_QWORD *)&roadEntitiesb->obj.klass->_1.this_arg.bits;
                if ( v530 )
                {
                  v531 = *(_DWORD *)(v530 + 24);
                  if ( v531 >= 1 )
                  {
                    v532 = 0;
                    while ( v532 < v531 )
                    {
                      v533 = v530 + 8LL * (int)v532;
                      v534 = *(WarBoardWallData_SaveData_o **)(v533 + 32);
                      if ( !v534 )
                        goto LABEL_359;
                      WarBoardWallData_SaveData__SetOwner(*(WarBoardWallData_SaveData_o **)(v533 + 32), v457, 0LL);
                      WarBoardWallData_SaveData__Load(v534, 0LL);
                      v531 = *(_DWORD *)(v530 + 24);
                      if ( (int)++v532 >= v531 )
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
                        v537 = 0;
                        while ( v537 < namespaze )
                        {
                          v538 = &element_class->_1.image + (int)v537;
                          v539 = (WarBoardSquareData_SaveData_o *)v538[4];
                          if ( !v539 )
                            goto LABEL_359;
                          WarBoardSquareData_SaveData__SetOwner((WarBoardSquareData_SaveData_o *)v538[4], v457, 0LL);
                          WarBoardSquareData_SaveData__Load(v539, 0LL);
                          namespaze = (int)element_class->_1.namespaze;
                          if ( (int)++v537 >= namespaze )
                            goto LABEL_307;
                        }
                        goto LABEL_360;
                      }
LABEL_307:
                      if ( roadEntitiesb->obj.klass )
                      {
                        v457->fields.isPlayedHalfDeadMessage = (bool)roadEntitiesb->obj.klass->_1.interopData;
                        v540 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                                              System_Collections_Generic_List_WarBoardEventData__TypeInfo,
                                                                              v282,
                                                                              v485);
                        System_Collections_Generic_List_object____ctor(
                          v540,
                          (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardEventData___ctor__);
                        v457->fields.listEvent = (struct System_Collections_Generic_List_WarBoardEventData__o *)v540;
                        sub_1B6406C((ServantStatusBattleListViewItem_o *)p_listEvent, (int32_t)v540, v541, v542);
                        v545 = v457->fields.localSaveData;
                        if ( v545 )
                        {
                          eventSaves = v545->fields.eventSaves;
                          if ( eventSaves )
                          {
                            v547 = *(_QWORD *)&eventSaves->max_length;
                            if ( (int)v547 >= 1 )
                            {
                              v548 = 0LL;
                              while ( v548 < (unsigned int)v547 )
                              {
                                v549 = eventSaves->m_Items[v548];
                                v550 = (System_Collections_Generic_List_object__o *)*p_listEvent;
                                v551 = (WarBoardEventData_o *)sub_1B64314(WarBoardEventData_TypeInfo, v282, v543);
                                WarBoardEventData___ctor_35251088(v551, v549, 0LL);
                                if ( !v550 )
                                  goto LABEL_359;
                                v554 = v550->fields._items;
                                v555 = Method_System_Collections_Generic_List_WarBoardEventData__Add__;
                                ++v550->fields._version;
                                if ( !v554 )
                                  goto LABEL_359;
                                v556 = v550->fields._size;
                                if ( (unsigned int)v556 >= v554->max_length )
                                {
                                  System_Collections_Generic_List_object___AddWithResize(
                                    v550,
                                    (Il2CppObject *)v551,
                                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v555[4] + 192LL) + 112LL));
                                }
                                else
                                {
                                  v557 = &v554->obj.klass + v556;
                                  v550->fields._size = v556 + 1;
                                  v557[4] = (Il2CppClass *)v551;
                                  sub_1B6406C(
                                    (ServantStatusBattleListViewItem_o *)(v557 + 4),
                                    (int32_t)v551,
                                    v552,
                                    v553);
                                }
                                LODWORD(v547) = eventSaves->max_length;
                                if ( (__int64)++v548 >= (int)v547 )
                                  goto LABEL_319;
                              }
                              goto LABEL_360;
                            }
LABEL_319:
                            v558 = roadEntitiesb->obj.klass;
                            if ( roadEntitiesb->obj.klass )
                            {
                              v644->fields.winCondId = (int32_t)v558->_1.fields;
                              typeHierarchy = (struct System_Int32_array *)v558->_2.typeHierarchy;
                              v644->fields.latestPieceActionSquareIndexes = typeHierarchy;
                              sub_1B6406C(
                                (ServantStatusBattleListViewItem_o *)p_latestPieceActionSquareIndexes,
                                (int32_t)typeHierarchy,
                                v543,
                                v544);
                              v562 = v644->fields.localSaveData;
                              if ( v562 )
                              {
                                latestBattlePieceUniqueIndexes = (ServantStatusBattleListViewItem_c *)v562->fields.latestBattlePieceUniqueIndexes;
                                p_latestBattlePieceUniqueIndexes->klass = latestBattlePieceUniqueIndexes;
                                sub_1B6406C(
                                  p_latestBattlePieceUniqueIndexes,
                                  (int32_t)latestBattlePieceUniqueIndexes,
                                  v560,
                                  v561);
                                v566 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                                                      System_Collections_Generic_List_WarBoardPrevCondData__TypeInfo,
                                                                                      v564,
                                                                                      v565);
                                System_Collections_Generic_List_object____ctor(
                                  v566,
                                  (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardPrevCondData___ctor__);
                                p_listPrevCond->klass = (ServantStatusBattleListViewItem_c *)v566;
                                sub_1B6406C(p_listPrevCond, (int32_t)v566, v567, v568);
                                if ( roadEntitiesb->obj.klass )
                                {
                                  properties = roadEntitiesb->obj.klass->_1.properties;
                                  if ( properties )
                                  {
                                    v571 = properties[3];
                                    if ( (int)v571 >= 1 )
                                    {
                                      v572 = 0LL;
                                      while ( v572 < (unsigned int)v571 )
                                      {
                                        v573 = (WarBoardPrevCondData_SaveData_o *)properties[v572 + 4];
                                        v574 = (System_Collections_Generic_List_object__o *)p_listPrevCond->klass;
                                        v575 = (WarBoardPrevCondData_o *)sub_1B64314(
                                                                           WarBoardPrevCondData_TypeInfo,
                                                                           v282,
                                                                           v569);
                                        WarBoardPrevCondData___ctor_35277928(v575, v573, 0LL);
                                        if ( !v574 )
                                          goto LABEL_359;
                                        v578 = v574->fields._items;
                                        v579 = Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__;
                                        ++v574->fields._version;
                                        if ( !v578 )
                                          goto LABEL_359;
                                        v580 = v574->fields._size;
                                        if ( (unsigned int)v580 >= v578->max_length )
                                        {
                                          System_Collections_Generic_List_object___AddWithResize(
                                            v574,
                                            (Il2CppObject *)v575,
                                            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v579[4] + 192LL) + 112LL));
                                        }
                                        else
                                        {
                                          v581 = &v578->obj.klass + v580;
                                          v574->fields._size = v580 + 1;
                                          v581[4] = (Il2CppClass *)v575;
                                          sub_1B6406C(
                                            (ServantStatusBattleListViewItem_o *)(v581 + 4),
                                            (int32_t)v575,
                                            v576,
                                            v577);
                                        }
                                        LODWORD(v571) = *((_DWORD *)properties + 6);
                                        if ( (__int64)++v572 >= (int)v571 )
                                          goto LABEL_332;
                                      }
                                      goto LABEL_360;
                                    }
LABEL_332:
                                    v582 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                                                          System_Collections_Generic_List_HoldReinforcementsData__TypeInfo,
                                                                                          v282,
                                                                                          v569);
                                    System_Collections_Generic_List_object____ctor(
                                      v582,
                                      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_HoldReinforcementsData___ctor__);
                                    p_reinforcementsSaveList->klass = (ServantStatusBattleListViewItem_c *)v582;
                                    sub_1B6406C(p_reinforcementsSaveList, (int32_t)v582, v583, v584);
                                    if ( roadEntitiesb->obj.klass )
                                    {
                                      methods = roadEntitiesb->obj.klass->_1.methods;
                                      if ( methods )
                                      {
                                        v587 = methods[3];
                                        if ( (int)v587 >= 1 )
                                        {
                                          v588 = 0LL;
                                          while ( v588 < (unsigned int)v587 )
                                          {
                                            v589 = (HoldReinforcementsData_SaveData_o *)methods[v588 + 4];
                                            v590 = (System_Collections_Generic_List_object__o *)p_reinforcementsSaveList->klass;
                                            v591 = (HoldReinforcementsData_o *)sub_1B64314(
                                                                                 HoldReinforcementsData_TypeInfo,
                                                                                 v282,
                                                                                 v585);
                                            HoldReinforcementsData___ctor_35278128(v591, v589, 0LL);
                                            if ( !v590 )
                                              goto LABEL_359;
                                            v594 = v590->fields._items;
                                            v595 = Method_System_Collections_Generic_List_HoldReinforcementsData__Add__;
                                            ++v590->fields._version;
                                            if ( !v594 )
                                              goto LABEL_359;
                                            v596 = v590->fields._size;
                                            if ( (unsigned int)v596 >= v594->max_length )
                                            {
                                              System_Collections_Generic_List_object___AddWithResize(
                                                v590,
                                                (Il2CppObject *)v591,
                                                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v595[4] + 192LL) + 112LL));
                                            }
                                            else
                                            {
                                              v597 = &v594->obj.klass + v596;
                                              v590->fields._size = v596 + 1;
                                              v597[4] = (Il2CppClass *)v591;
                                              sub_1B6406C(
                                                (ServantStatusBattleListViewItem_o *)(v597 + 4),
                                                (int32_t)v591,
                                                v592,
                                                v593);
                                            }
                                            LODWORD(v587) = *((_DWORD *)methods + 6);
                                            if ( (__int64)++v588 >= (int)v587 )
                                              goto LABEL_343;
                                          }
                                          goto LABEL_360;
                                        }
LABEL_343:
                                        if ( roadEntitiesb->obj.klass )
                                        {
                                          v598 = System_Linq_Enumerable__ToList_int_(
                                                   (System_Collections_Generic_IEnumerable_TSource__o *)roadEntitiesb->obj.klass->_1.nestedTypes,
                                                   (const MethodInfo_2E74DB0 *)Method_System_Linq_Enumerable_ToList_int___);
                                          p_playedStageReinforcementsList->klass = (ServantStatusBattleListViewItem_c *)v598;
                                          sub_1B6406C(p_playedStageReinforcementsList, (int32_t)v598, v599, v600);
                                          v603 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                                                                System_Collections_Generic_List_WarBoardUiData__TypeInfo,
                                                                                                v601,
                                                                                                v602);
                                          System_Collections_Generic_List_object____ctor(
                                            v603,
                                            (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardUiData___ctor__);
                                          p_listUiData->klass = (ServantStatusBattleListViewItem_c *)v603;
                                          sub_1B6406C(p_listUiData, (int32_t)v603, v604, v605);
                                          if ( roadEntitiesb->obj.klass )
                                          {
                                            implementedInterfaces = roadEntitiesb->obj.klass->_1.implementedInterfaces;
                                            if ( implementedInterfaces )
                                            {
                                              v609 = implementedInterfaces[3];
                                              if ( (int)v609 >= 1 )
                                              {
                                                v610 = 0LL;
                                                while ( v610 < (unsigned int)v609 )
                                                {
                                                  v611 = (WarBoardUiData_SaveData_o *)implementedInterfaces[v610 + 4];
                                                  v612 = (System_Collections_Generic_List_object__o *)p_listUiData->klass;
                                                  v613 = (WarBoardUiData_o *)sub_1B64314(
                                                                               WarBoardUiData_TypeInfo,
                                                                               v282,
                                                                               v606);
                                                  WarBoardUiData___ctor_35284548(v613, v611, 0LL);
                                                  if ( !v612 )
                                                    goto LABEL_359;
                                                  v616 = v612->fields._items;
                                                  v617 = Method_System_Collections_Generic_List_WarBoardUiData__Add__;
                                                  ++v612->fields._version;
                                                  if ( !v616 )
                                                    goto LABEL_359;
                                                  v618 = v612->fields._size;
                                                  if ( (unsigned int)v618 >= v616->max_length )
                                                  {
                                                    System_Collections_Generic_List_object___AddWithResize(
                                                      v612,
                                                      (Il2CppObject *)v613,
                                                      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v617[4] + 192LL) + 112LL));
                                                  }
                                                  else
                                                  {
                                                    v619 = &v616->obj.klass + v618;
                                                    v612->fields._size = v618 + 1;
                                                    v619[4] = (Il2CppClass *)v613;
                                                    sub_1B6406C(
                                                      (ServantStatusBattleListViewItem_o *)(v619 + 4),
                                                      (int32_t)v613,
                                                      v614,
                                                      v615);
                                                  }
                                                  LODWORD(v609) = *((_DWORD *)implementedInterfaces + 6);
                                                  if ( (__int64)++v610 >= (int)v609 )
                                                    goto LABEL_355;
                                                }
                                                goto LABEL_360;
                                              }
LABEL_355:
                                              if ( roadEntitiesb->obj.klass )
                                              {
                                                interfaceOffsets = roadEntitiesb->obj.klass->_1.interfaceOffsets;
                                                p_bgAnimationInfo_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)interfaceOffsets;
                                                sub_1B6406C(
                                                  p_bgAnimationInfo_k__BackingField,
                                                  (int32_t)interfaceOffsets,
                                                  v606,
                                                  v607);
                                                v621 = roadEntitiesb->obj.klass;
                                                if ( roadEntitiesb->obj.klass )
                                                {
                                                  v644->fields._ContinueConsumeType_k__BackingField = HIDWORD(v621->_2.unity_user_data);
                                                  v644->fields._IsContinue_k__BackingField = v621->_2.initializationExceptionGCHandle;
                                                  v644->fields._IsNextTurn_k__BackingField = BYTE1(v621->_2.initializationExceptionGCHandle);
                                                  v644->fields.localSaveTiming = (int32_t)v621->_2.unity_user_data;
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
    sub_1B64324(Instance);
  }
  v622 = (WarBoardData_WarBoardLocalSaveData_o *)sub_1B64314(WarBoardData_WarBoardLocalSaveData_TypeInfo, v282, v485);
  WarBoardData_WarBoardLocalSaveData___ctor_35238080(v622, v644, 0LL);
  v644->fields.localSaveData = v622;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v644->fields.localSaveData, (int32_t)v622, v623, v624);
}


void __fastcall WarBoardData__AddPlayedEventData(
        WarBoardData_o *this,
        WarBoardEventData_o *eventData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Collections_Generic_List_object__o *listEvent; // x0
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppClass **v10; // x8

  if ( (byte_49FA0F2 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardEventData__Add__, eventData);
    byte_49FA0F2 = 1;
  }
  listEvent = (System_Collections_Generic_List_object__o *)this->fields.listEvent;
  if ( !listEvent
    || (items = listEvent->fields._items,
        v8 = Method_System_Collections_Generic_List_WarBoardEventData__Add__,
        ++listEvent->fields._version,
        !items) )
  {
    sub_1B64324(listEvent);
  }
  size = listEvent->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      listEvent,
      (Il2CppObject *)eventData,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    listEvent->fields._size = size + 1;
    v10[4] = (Il2CppClass *)eventData;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 4), (int32_t)eventData, (int32_t)method, v3);
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
  __int64 Instance; // x0
  Il2CppObject *v29; // x28
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  System_Collections_Generic_List_object__o *v34; // x19
  __int64 v35; // x1
  __int64 v36; // x8
  unsigned __int64 v37; // x27
  WarBoardUserServantData_o *v38; // x26
  struct System_Int32_array *reinforcementsIds; // x8
  struct System_Int32_array *v40; // x8
  __int64 v41; // x9
  WarBoardStagePieceDetailMaster_o *v42; // x19
  WarBoardDataEntity_o *v43; // x22
  WarBoardReinforcementsEntity_o *v44; // x25
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *npcEntityDict; // x20
  WarBoardStageReinforcementsEntity_o *v46; // x24
  __int64 v47; // x2
  int32_t v48; // w28
  int32_t v49; // w21
  WarBoardPieceData_o *v50; // x23
  NpcFollowerEntity_o *Entity_39109336; // x0
  NpcFollowerEntity_o *v52; // x20
  int32_t v53; // w2
  int32_t v54; // w3
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  Il2CppClass **v58; // x0
  struct WarBoardPieceData_array **p_pieces; // x20
  System_Object_array *v60; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  int32_t v63; // w2
  int32_t v64; // w3
  struct WarBoardUserServantData_array *svtInfo; // x1
  __int64 v66; // x21
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x22
  int32_t v68; // w2
  int32_t v69; // w3
  __int64 v70; // x2
  unsigned __int64 v71; // x23
  __int64 v72; // x26
  __int64 v73; // x27
  struct WarBoardData_WarBoardLocalSaveData_o *v74; // x8
  struct WarBoardPieceData_array *v75; // x9
  unsigned int *pieceSaves; // x28
  WarBoardPieceData_o *v77; // x22
  WarBoardPieceData_SaveData_o *v78; // x21
  int32_t v79; // w2
  int32_t v80; // w3
  __int64 v82; // x0
  System_Collections_Generic_List_object__o *v83; // [xsp+10h] [xbp-D0h]
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+18h] [xbp-C8h]
  System_Int32_array *v85; // [xsp+20h] [xbp-C0h]
  Il2CppObject *v86; // [xsp+28h] [xbp-B8h]
  WarBoardUserServantData_array *v87; // [xsp+30h] [xbp-B0h]
  NpcFollowerMaster_o *v88; // [xsp+38h] [xbp-A8h]
  System_Collections_Generic_List_object__o *v89; // [xsp+40h] [xbp-A0h]
  WarBoardUserServantData_o **m_Items; // [xsp+48h] [xbp-98h]
  int32_t questPhase; // [xsp+50h] [xbp-90h]
  int32_t questId; // [xsp+54h] [xbp-8Ch]
  int32_t *v93; // [xsp+58h] [xbp-88h]
  bool isChangeName; // [xsp+64h] [xbp-7Ch] BYREF
  Il2CppObject *v95; // [xsp+68h] [xbp-78h] BYREF
  WarBoardStagePieceDetailEntity_o *v96; // [xsp+70h] [xbp-70h] BYREF
  WarBoardReinforcementsEntity_o *entity; // [xsp+78h] [xbp-68h] BYREF

  v9 = serverData;
  if ( (byte_49FA0F0 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___, serverData);
    sub_1B640C8(&Method_DataManager_GetMaster_NpcFollowerMaster___, v11);
    sub_1B640C8(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___, v12);
    sub_1B640C8(&Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___, v13);
    sub_1B640C8(&DataManager_TypeInfo, v14);
    sub_1B640C8(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__RemoveAt__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v21);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v22);
    sub_1B640C8(&WarBoardPieceData_SaveData___TypeInfo, v23);
    sub_1B640C8(&WarBoardPieceData_SaveData_TypeInfo, v24);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1B640C8(&WarBoardPieceData_TypeInfo, v26);
    byte_49FA0F0 = 1;
  }
  v96 = 0LL;
  entity = 0LL;
  v95 = 0LL;
  isChangeName = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  v29 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v88 = (NpcFollowerMaster_o *)Instance;
  if ( !v9 )
    goto LABEL_69;
  questPhase = v9->fields.questPhase;
  questId = v9->fields.questId;
  v83 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                       v30,
                                                       v31);
  System_Collections_Generic_List_object____ctor(
    v83,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v34 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                       v32,
                                                       v33);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( !reinfoSvtInfo )
    goto LABEL_69;
  v36 = *(_QWORD *)&reinfoSvtInfo->max_length;
  v89 = v34;
  if ( (int)v36 >= 1 )
  {
    v37 = 0LL;
    v93 = &indexList->m_Items[1];
    m_Items = reinfoSvtInfo->m_Items;
    v86 = Master_object;
    v87 = reinfoSvtInfo;
    v85 = indexList;
    do
    {
      if ( v37 >= (unsigned int)v36 )
LABEL_70:
        sub_1B6432C(Instance, v35);
      v38 = m_Items[v37];
      if ( v38 )
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
        if ( v37 >= indexList->max_length )
          goto LABEL_70;
        if ( v93[v37] < (signed int)reinforcementsIds->max_length )
          goto LABEL_52;
      }
      if ( v37 >= indexList->max_length )
        goto LABEL_70;
      v40 = reinfoStage->fields.reinforcementsIds;
      if ( !v40 )
        goto LABEL_69;
      v41 = v93[v37];
      if ( (unsigned int)v41 >= v40->max_length )
        goto LABEL_70;
      if ( !Master_object )
        goto LABEL_69;
      v42 = (WarBoardStagePieceDetailMaster_o *)v29;
      v43 = v9;
      WarBoardReinforcementsMaster__TryGetEntity(
        (WarBoardReinforcementsMaster_o *)Master_object,
        &entity,
        v40->m_Items[v41 + 1],
        0LL);
      Instance = (__int64)this->fields.reinforcementsAppointmentSquareList;
      if ( !Instance )
        goto LABEL_69;
      v44 = entity;
      npcEntityDict = this->fields.npcEntityDict;
      v46 = reinfoStage;
      Instance = System_Collections_Generic_List_int___get_Item(
                   (System_Collections_Generic_List_int__o *)Instance,
                   0,
                   (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( v37 >= indexList->max_length )
        goto LABEL_70;
      v48 = Instance;
      v49 = v93[v37];
      v50 = (WarBoardPieceData_o *)sub_1B64314(WarBoardPieceData_TypeInfo, v35, v47);
      WarBoardPieceData___ctor_35259640(v50, v46, v44, v38, npcEntityDict, v37, v48, v49, 0LL);
      Instance = (__int64)this->fields.reinforcementsAppointmentSquareList;
      if ( !Instance )
        goto LABEL_69;
      System_Collections_Generic_List_int___RemoveAt(
        (System_Collections_Generic_List_int__o *)Instance,
        0,
        (const MethodInfo_34916FC *)Method_System_Collections_Generic_List_int__RemoveAt__);
      if ( !v50 )
        goto LABEL_69;
      v29 = (Il2CppObject *)v42;
      if ( !v42 )
        goto LABEL_69;
      v9 = v43;
      Instance = WarBoardStagePieceDetailMaster__TryGetEntity(
                   v42,
                   &v96,
                   v43->fields.stageId,
                   v50->fields._forceId_k__BackingField,
                   v50->fields._groupId_k__BackingField,
                   v50->fields._index_k__BackingField,
                   0LL);
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)v96;
        if ( !v96 )
          goto LABEL_69;
        v50->fields._npcImageSvtId_k__BackingField = WarBoardStagePieceDetailEntity__GetImageSvtId(v96, 0LL);
        Instance = (__int64)v96;
        if ( !v96 )
          goto LABEL_69;
        Instance = WarBoardStagePieceDetailEntity__GetDispLimitCnt(v96, 0LL);
        v50->fields._npcDispLimitCount_k__BackingField = Instance;
      }
      if ( !v88 )
        goto LABEL_69;
      Entity_39109336 = NpcFollowerMaster__GetEntity_39109336(
                          v88,
                          questId,
                          questPhase,
                          v50->fields._npcId_k__BackingField,
                          0LL);
      if ( Entity_39109336 )
      {
        v52 = Entity_39109336;
        if ( !v50->fields._npcImageSvtId_k__BackingField )
          v50->fields._npcImageSvtId_k__BackingField = NpcFollowerEntity__GetImageSvtId(Entity_39109336, 0LL);
        if ( (v50->fields._npcDispLimitCount_k__BackingField & 0x80000000) != 0 )
          v50->fields._npcDispLimitCount_k__BackingField = NpcFollowerEntity__GetDispLimitCnt(v52, 0LL);
      }
      Instance = WarBoardPieceData__get_isPlayerGroup(v50, 0LL);
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)MasterData_object;
        if ( !MasterData_object )
          goto LABEL_69;
        Instance = DataMasterBase_object__object__long___TryGetEntity(
                     MasterData_object,
                     &v95,
                     v50->fields._npcId_k__BackingField,
                     (const MethodInfo_30D40A4 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
        if ( (Instance & 1) != 0 )
        {
          Instance = (__int64)v95;
          if ( !v95 )
            goto LABEL_69;
          Instance = (__int64)NpcServantFollowerEntity__GetFollowerName_39110520(
                                (NpcServantFollowerEntity_o *)v95,
                                v50->fields._npcId_k__BackingField,
                                questId,
                                questPhase,
                                &isChangeName,
                                0LL);
          if ( isChangeName )
          {
            Instance = (__int64)v50->fields._battleServant_k__BackingField;
            if ( !Instance )
              goto LABEL_69;
            BattleServantData__ClearOverwriteServantName((BattleServantData_o *)Instance, 0LL);
          }
        }
      }
      if ( !v89 )
        goto LABEL_69;
      items = v89->fields._items;
      v56 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
      ++v89->fields._version;
      if ( !items )
        goto LABEL_69;
      size = v89->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v89,
          (Il2CppObject *)v50,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
      }
      else
      {
        v58 = &items->obj.klass + size;
        v89->fields._size = size + 1;
        v58[4] = (Il2CppClass *)v50;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v58 + 4), (int32_t)v50, v53, v54);
      }
      reinfoStage = v46;
      indexList = v85;
      Master_object = v86;
      reinfoSvtInfo = v87;
LABEL_52:
      LODWORD(v36) = reinfoSvtInfo->max_length;
    }
    while ( (__int64)++v37 < (int)v36 );
  }
  if ( !v83 )
    goto LABEL_69;
  p_pieces = &this->fields.pieces;
  System_Collections_Generic_List_object___AddRange(
    v83,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.pieces,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v83,
    (System_Collections_Generic_IEnumerable_T__o *)v89,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
  v60 = System_Collections_Generic_List_object___ToArray(
          v83,
          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  this->fields.pieces = (struct WarBoardPieceData_array *)v60;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.pieces, (int32_t)v60, v61, v62);
  Instance = (__int64)this->fields.serverData;
  if ( !Instance
    || (svtInfo = v9->fields.svtInfo,
        *(_QWORD *)(Instance + 16) = svtInfo,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(Instance + 16), (int32_t)svtInfo, v63, v64),
        !*p_pieces)
    || (v66 = *(_QWORD *)&(*p_pieces)->max_length,
        localSaveData = this->fields.localSaveData,
        Instance = sub_1B64170(WarBoardPieceData_SaveData___TypeInfo, (unsigned int)v66),
        !localSaveData) )
  {
LABEL_69:
    sub_1B64324(Instance);
  }
  localSaveData->fields.pieceSaves = (struct WarBoardPieceData_SaveData_array *)Instance;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&localSaveData->fields.pieceSaves, Instance, v68, v69);
  if ( (int)v66 >= 1 )
  {
    v71 = 0LL;
    v72 = (unsigned int)v66;
    v73 = 8LL;
    do
    {
      v74 = this->fields.localSaveData;
      if ( !v74 )
        goto LABEL_69;
      v75 = *p_pieces;
      if ( !*p_pieces )
        goto LABEL_69;
      if ( v71 >= v75->max_length )
        goto LABEL_70;
      pieceSaves = (unsigned int *)v74->fields.pieceSaves;
      v77 = *(WarBoardPieceData_o **)((char *)&v75->obj.klass + v73 * 4);
      v78 = (WarBoardPieceData_SaveData_o *)sub_1B64314(WarBoardPieceData_SaveData_TypeInfo, v35, v70);
      WarBoardPieceData_SaveData___ctor_35241132(v78, v77, 0LL);
      if ( !pieceSaves )
        goto LABEL_69;
      if ( v78 )
      {
        Instance = sub_1B64204(v78, *(_QWORD *)(*(_QWORD *)pieceSaves + 64LL));
        if ( !Instance )
        {
          v82 = sub_1B64348(0LL);
          sub_1B641F0(v82, 0LL);
        }
      }
      if ( v71 >= pieceSaves[6] )
        goto LABEL_70;
      *(_QWORD *)&pieceSaves[v73] = v78;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&pieceSaves[v73], (int32_t)v78, v79, v80);
      ++v71;
      v73 += 2LL;
    }
    while ( v72 != v71 );
  }
  Instance = (__int64)v89;
  if ( !v89 )
    goto LABEL_69;
  return (WarBoardPieceData_array *)System_Collections_Generic_List_object___ToArray(
                                      v89,
                                      (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
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
  __int64 v18; // x2
  struct WarBoardDataEntity_o *serverData; // x8
  System_Object_array *squareIndexInfo; // x20
  System_Func_object__bool__o *v21; // x21
  Il2CppObject *object; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  ServantStatusBattleListViewItem_o *p_monitor; // x20
  System_Collections_Generic_IEnumerable_T__o *monitor; // x22
  System_Collections_Generic_List_int__o *v27; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  System_Int32_array *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3

  if ( (byte_49FA0F7 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Find_WarBoardSquareIndexData___, *(_QWORD *)&squareIndex);
    sub_1B640C8(&System_Func_WarBoardSquareIndexData__bool__TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor___75657200, v11);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass173_0__AddSquareInfo_b__0__, v13);
    sub_1B640C8(&WarBoardData___c__DisplayClass173_0_TypeInfo, v14);
    byte_49FA0F7 = 1;
  }
  v15 = (WarBoardData___c__DisplayClass173_0_o *)sub_1B64314(
                                                   WarBoardData___c__DisplayClass173_0_TypeInfo,
                                                   *(_QWORD *)&squareIndex,
                                                   *(_QWORD *)&effectId);
  WarBoardData___c__DisplayClass173_0___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_14;
  v15->fields.squareIndex = squareIndex;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_14;
  squareIndexInfo = (System_Object_array *)serverData->fields.squareIndexInfo;
  v21 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardSquareIndexData__bool__TypeInfo, v17, v18);
  System_Func_object__bool____ctor(
    v21,
    (Il2CppObject *)v15,
    Method_WarBoardData___c__DisplayClass173_0__AddSquareInfo_b__0__,
    0LL);
  object = BasicHelper__Find_object_(
             squareIndexInfo,
             (System_Func_T__bool__o *)v21,
             (const MethodInfo_2E2543C *)Method_BasicHelper_Find_WarBoardSquareIndexData___);
  if ( !object )
    return;
  p_monitor = (ServantStatusBattleListViewItem_o *)&object[1].monitor;
  monitor = (System_Collections_Generic_IEnumerable_T__o *)object[1].monitor;
  v27 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v23, v24);
  System_Collections_Generic_List_int____ctor_55113648(
    v27,
    monitor,
    (const MethodInfo_348F7B0 *)Method_System_Collections_Generic_List_int___ctor___75657200);
  if ( !v27 )
    goto LABEL_14;
  v16 = System_Collections_Generic_List_int___Contains(
          v27,
          effectId,
          (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
  if ( v16 )
    return;
  items = v27->fields._items;
  v29 = Method_System_Collections_Generic_List_int__Add__;
  ++v27->fields._version;
  if ( !items )
LABEL_14:
    sub_1B64324(v16);
  size = v27->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v27,
      effectId,
      *(const MethodInfo_348FEDC **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    v27->fields._size = size + 1;
    items->m_Items[size + 1] = effectId;
  }
  v31 = System_Collections_Generic_List_int___ToArray(
          v27,
          (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
  p_monitor->klass = (ServantStatusBattleListViewItem_c *)v31;
  sub_1B6406C(p_monitor, (int32_t)v31, v32, v33);
}


void __fastcall WarBoardData__BuffTurnProgressing(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  WarBoardData___c_c *v13; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__object__o *_9__191_0; // x20
  Il2CppObject *v16; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_IEnumerable_TResult__o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  WarBoardData___c_c *v23; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x19
  System_Func_object__bool__o *_9__191_1; // x20
  Il2CppObject *v26; // x21
  struct WarBoardData___c_StaticFields *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  WarBoardData___c_c *v33; // x8
  System_Collections_Generic_IEnumerable_T__o *v34; // x19
  System_Action_object__o *_9__191_2; // x20
  Il2CppObject *v36; // x21
  ServantStatusBattleListViewItem_o *p__9__191_2; // x0
  int32_t v38; // w2
  int32_t v39; // w3

  if ( (byte_49FA106 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_BattleBuffData__TypeInfo, method);
    sub_1B640C8(&Method_BasicHelper_ForEach_BattleBuffData___, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__BattleBuffData___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_BattleBuffData___, v6);
    sub_1B640C8(&System_Func_BattleBuffData__bool__TypeInfo, v7);
    sub_1B640C8(&System_Func_WarBoardPieceData__BattleBuffData__TypeInfo, v8);
    sub_1B640C8(&Method_WarBoardData___c__BuffTurnProgressing_b__191_0__, v9);
    sub_1B640C8(&Method_WarBoardData___c__BuffTurnProgressing_b__191_1__, v10);
    sub_1B640C8(&Method_WarBoardData___c__BuffTurnProgressing_b__191_2__, v11);
    sub_1B640C8(&WarBoardData___c_TypeInfo, v12);
    byte_49FA106 = 1;
  }
  v13 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v13 = WarBoardData___c_TypeInfo;
  }
  _9__191_0 = (System_Func_object__object__o *)v13->static_fields->__9__191_0;
  if ( !_9__191_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = WarBoardData___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__191_0 = (System_Func_object__object__o *)sub_1B64314(
                                                   System_Func_WarBoardPieceData__BattleBuffData__TypeInfo,
                                                   method,
                                                   v2);
    System_Func_object__object____ctor(_9__191_0, v16, Method_WarBoardData___c__BuffTurnProgressing_b__191_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__191_0 = (struct System_Func_WarBoardPieceData__BattleBuffData__o *)_9__191_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__191_0, (int32_t)_9__191_0, v18, v19);
  }
  v20 = System_Linq_Enumerable__Select_object__object_(
          pieces,
          (System_Func_TSource__TResult__o *)_9__191_0,
          (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__BattleBuffData___);
  v23 = WarBoardData___c_TypeInfo;
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)v20;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v23 = WarBoardData___c_TypeInfo;
  }
  _9__191_1 = (System_Func_object__bool__o *)v23->static_fields->__9__191_1;
  if ( !_9__191_1 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = WarBoardData___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v23->static_fields->__9;
    _9__191_1 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BattleBuffData__bool__TypeInfo, v21, v22);
    System_Func_object__bool____ctor(_9__191_1, v26, Method_WarBoardData___c__BuffTurnProgressing_b__191_1__, 0LL);
    v27 = WarBoardData___c_TypeInfo->static_fields;
    v27->__9__191_1 = (struct System_Func_BattleBuffData__bool__o *)_9__191_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v27->__9__191_1, (int32_t)_9__191_1, v28, v29);
  }
  v30 = System_Linq_Enumerable__Where_object_(
          v24,
          (System_Func_TSource__bool__o *)_9__191_1,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_BattleBuffData___);
  v33 = WarBoardData___c_TypeInfo;
  v34 = (System_Collections_Generic_IEnumerable_T__o *)v30;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v33 = WarBoardData___c_TypeInfo;
  }
  _9__191_2 = (System_Action_object__o *)v33->static_fields->__9__191_2;
  if ( !_9__191_2 )
  {
    if ( !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      v33 = WarBoardData___c_TypeInfo;
    }
    v36 = (Il2CppObject *)v33->static_fields->__9;
    _9__191_2 = (System_Action_object__o *)sub_1B64314(System_Action_BattleBuffData__TypeInfo, v31, v32);
    System_Action_object____ctor(_9__191_2, v36, Method_WarBoardData___c__BuffTurnProgressing_b__191_2__, 0LL);
    p__9__191_2 = (ServantStatusBattleListViewItem_o *)&WarBoardData___c_TypeInfo->static_fields->__9__191_2;
    p__9__191_2->klass = (ServantStatusBattleListViewItem_c *)_9__191_2;
    sub_1B6406C(p__9__191_2, (int32_t)_9__191_2, v38, v39);
  }
  BasicHelper__ForEach_object_(
    v34,
    (System_Action_T__o *)_9__191_2,
    (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_BattleBuffData___);
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
  const MethodInfo_35D2010 *v17; // x2
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x24
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  Il2CppObject *Instance; // x25
  int32_t v26; // w2
  int32_t v27; // w3
  __int64 v28; // x26
  __int64 v29; // x0
  System_Nullable_Vector3__o v30; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_float__o v31; // 0:x3.8
  System_Nullable_Vector3__o v32; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FA0BD & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, taskList);
    sub_1B640C8(&Method_System_Nullable_Vector3___ctor__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_1B640C8(&WarBoardTaskBase___TypeInfo, v7);
    byte_49FA0BD = 1;
  }
  AliveServantPieces = (__int64)WarBoardData__GetAliveServantPieces(this, (const MethodInfo *)taskList);
  if ( !AliveServantPieces )
LABEL_27:
    sub_1B64324(AliveServantPieces);
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
          AliveServantPieces = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !*(_QWORD *)(v15 + 56) )
            goto LABEL_27;
          v16 = (WarBoardManager_o *)AliveServantPieces;
          AliveServantPieces = (__int64)UnityEngine_Component__get_transform(
                                          *(UnityEngine_Component_o **)(v15 + 56),
                                          0LL);
          if ( !AliveServantPieces )
            goto LABEL_27;
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)AliveServantPieces, 0LL);
          *(_QWORD *)&v32.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
          *(_QWORD *)&v32.fields.hasValue = &v30;
          *(_QWORD *)&v30.fields.hasValue = 0LL;
          *(_QWORD *)&v30.fields.value.fields.y = 0LL;
          System_Nullable_Vector3____ctor(v32, localPosition, v17);
          if ( !v16 )
            goto LABEL_27;
          v31 = 0LL;
          AliveServantPieces = (__int64)WarBoardManager__GetCameraPerformanceTask(v16, v30, v31, 1, 0, 1, 0LL);
          v20 = AliveServantPieces;
          if ( taskList )
          {
            items = taskList->fields._items;
            v22 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
            ++taskList->fields._version;
            if ( !items )
              goto LABEL_27;
            size = taskList->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)taskList,
                (Il2CppObject *)AliveServantPieces,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v24 = &items->obj.klass + size;
              taskList->fields._size = size + 1;
              v24[4] = (Il2CppClass *)v20;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 4), v20, v18, v19);
            }
          }
          else
          {
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
            AliveServantPieces = sub_1B64170(WarBoardTaskBase___TypeInfo, 1LL);
            if ( !AliveServantPieces )
              goto LABEL_27;
            v28 = AliveServantPieces;
            if ( v20 )
            {
              AliveServantPieces = sub_1B64204(v20, *(_QWORD *)(*(_QWORD *)AliveServantPieces + 64LL));
              if ( !AliveServantPieces )
              {
                v29 = sub_1B64348(0LL);
                sub_1B641F0(v29, 0LL);
              }
            }
            if ( !*(_DWORD *)(v28 + 24) )
              break;
            *(_QWORD *)(v28 + 32) = v20;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 32), v20, v26, v27);
            if ( !Instance )
              goto LABEL_27;
            WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v28, 0LL);
          }
          AliveServantPieces = WarBoardItemData__Get((WarBoardItemData_o *)v15, v14, taskList, 0, 0LL);
        }
      }
      v11 = *(_DWORD *)(v12 + 24);
      if ( (int)++v13 >= v11 )
        return;
    }
    sub_1B6432C(AliveServantPieces, v9);
  }
}


bool __fastcall WarBoardData__CheckWinCond(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WarBoardPieceData_array *Master_object; // x0
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
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t condGroup; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FA0C2 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_int____75747976, v6);
    sub_1B640C8(&System_Func_int__bool__TypeInfo, v7);
    sub_1B640C8(&Method_WarBoardData___c__CheckWinCond_b__98_0__, v8);
    sub_1B640C8(&WarBoardData___c_TypeInfo, v9);
    byte_49FA0C2 = 1;
  }
  if ( (this->fields.winCondId & 0x80000000) == 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (WarBoardPieceData_array *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    condGroup = -1;
    if ( Master_object )
    {
      if ( !WarBoardCommonReleaseMaster__IsOpen_39993448(
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
    sub_1B64324(Master_object);
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
      Master_object = WarBoardData__GetPieces_35058084(this, i, v17, v3);
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
            sub_1B6432C(Master_object, method);
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
    _9__98_0 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, method, v2);
    System_Func_int__bool____ctor(_9__98_0, v24, Method_WarBoardData___c__CheckWinCond_b__98_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__98_0 = _9__98_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__98_0, (int32_t)_9__98_0, v26, v27);
  }
  return (v14 == 0) & (System_Linq_Enumerable__Count_int__48589684(
                         (System_Collections_Generic_IEnumerable_TSource__o *)masterExistsForce,
                         (System_Func_TSource__bool__o *)_9__98_0,
                         (const MethodInfo_2E56B74 *)Method_System_Linq_Enumerable_Count_int____75747976) > 0) | (v15 == 0);
}


void __fastcall WarBoardData__ClearLastBattlePieceUniqueIndexes(WarBoardData_o *this, const MethodInfo *method)
{
  struct System_UInt32_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FA0FA & 1) == 0 )
  {
    sub_1B640C8(&uint___TypeInfo, method);
    byte_49FA0FA = 1;
  }
  v3 = (struct System_UInt32_array *)sub_1B64170(uint___TypeInfo, 0LL);
  this->fields.latestBattlePieceUniqueIndexes = v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.latestBattlePieceUniqueIndexes, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
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

  if ( (byte_49FA10E & 1) == 0 )
  {
    sub_1B640C8(&WarBoardData_BattleParticipantInfo_TypeInfo, attackPieceData);
    byte_49FA10E = 1;
  }
  v6 = (WarBoardData_BattleParticipantInfo_o *)sub_1B64314(
                                                 WarBoardData_BattleParticipantInfo_TypeInfo,
                                                 attackPieceData,
                                                 targetPieceData);
  WarBoardData_BattleParticipantInfo___ctor(v6, attackPieceData, targetPieceData, 0LL);
  return v6;
}


void __fastcall WarBoardData__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WarBoardData_c *v3; // x0
  System_String_o *AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY; // x19

  if ( (byte_49FA0BA & 1) == 0 )
  {
    sub_1B640C8(&EncryptedPlayerPrefs_TypeInfo, v1);
    sub_1B640C8(&WarBoardData_TypeInfo, v2);
    byte_49FA0BA = 1;
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
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  System_Delegate_o **v10; // x20
  System_Delegate_o *v11; // x21
  WarBoardData___c_c *v12; // x0
  WarBoardTaskBase_TaskCallback_o *_9__152_0; // x22
  Il2CppObject *v14; // x23
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_Delegate_o *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_Delegate_o *v21; // x8
  WarBoardTaskBase_TaskCallback_c *v22; // x1

  if ( (byte_49FA0EA & 1) == 0 )
  {
    sub_1B640C8(&WarBoardTaskBase_TaskCallback_TypeInfo, method);
    sub_1B640C8(&Method_WarBoardData___c__CreateEventBossUIDataTask_b__152_0__, v3);
    sub_1B640C8(&WarBoardData___c_TypeInfo, v4);
    sub_1B640C8(&WarBoardWaitTime_TypeInfo, v5);
    byte_49FA0EA = 1;
  }
  v6 = sub_1B64314(WarBoardWaitTime_TypeInfo, method, v2);
  WarBoardWaitTime___ctor((WarBoardWaitTime_o *)v6, 0.0, 0LL);
  if ( !v6 )
    sub_1B64324(v7);
  v10 = (System_Delegate_o **)(v6 + 40);
  v11 = *(System_Delegate_o **)(v6 + 40);
  v12 = WarBoardData___c_TypeInfo;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v12 = WarBoardData___c_TypeInfo;
  }
  _9__152_0 = v12->static_fields->__9__152_0;
  if ( !_9__152_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = WarBoardData___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v12->static_fields->__9;
    _9__152_0 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64314(WarBoardTaskBase_TaskCallback_TypeInfo, v8, v9);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__152_0,
      v14,
      Method_WarBoardData___c__CreateEventBossUIDataTask_b__152_0__,
      0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__152_0 = _9__152_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__152_0, (int32_t)_9__152_0, v16, v17);
  }
  v18 = System_Delegate__Combine(v11, (System_Delegate_o *)_9__152_0, 0LL);
  v21 = v18;
  if ( !v18 )
    goto LABEL_14;
  v22 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v18->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v10 = v18, (WarBoardTaskBase_TaskCallback_c *)v18->klass != v22) )
  {
    sub_1B645E4(v18);
LABEL_14:
    *v10 = v21;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v6 + 40), (int32_t)v21, v19, v20);
  return (WarBoardWaitTime_o *)v6;
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
  __int64 v18; // x2
  struct WarBoardDataEntity_o *serverData; // x8
  System_Object_array *squareIndexInfo; // x20
  System_Func_object__bool__o *v21; // x21
  Il2CppObject *object; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  ServantStatusBattleListViewItem_o *p_monitor; // x20
  System_Collections_Generic_IEnumerable_T__o *monitor; // x22
  System_Collections_Generic_List_int__o *v27; // x21
  System_Int32_array *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3

  if ( (byte_49FA0F8 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Find_WarBoardSquareIndexData___, *(_QWORD *)&squareIndex);
    sub_1B640C8(&System_Func_WarBoardSquareIndexData__bool__TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Remove__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor___75657200, v11);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass174_0__DelSquareInfo_b__0__, v13);
    sub_1B640C8(&WarBoardData___c__DisplayClass174_0_TypeInfo, v14);
    byte_49FA0F8 = 1;
  }
  v15 = (WarBoardData___c__DisplayClass174_0_o *)sub_1B64314(
                                                   WarBoardData___c__DisplayClass174_0_TypeInfo,
                                                   *(_QWORD *)&squareIndex,
                                                   *(_QWORD *)&effectId);
  WarBoardData___c__DisplayClass174_0___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_10;
  v15->fields.squareIndex = squareIndex;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_10;
  squareIndexInfo = (System_Object_array *)serverData->fields.squareIndexInfo;
  v21 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardSquareIndexData__bool__TypeInfo, v17, v18);
  System_Func_object__bool____ctor(
    v21,
    (Il2CppObject *)v15,
    Method_WarBoardData___c__DisplayClass174_0__DelSquareInfo_b__0__,
    0LL);
  object = BasicHelper__Find_object_(
             squareIndexInfo,
             (System_Func_T__bool__o *)v21,
             (const MethodInfo_2E2543C *)Method_BasicHelper_Find_WarBoardSquareIndexData___);
  if ( !object )
    return;
  p_monitor = (ServantStatusBattleListViewItem_o *)&object[1].monitor;
  monitor = (System_Collections_Generic_IEnumerable_T__o *)object[1].monitor;
  v27 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v23, v24);
  System_Collections_Generic_List_int____ctor_55113648(
    v27,
    monitor,
    (const MethodInfo_348F7B0 *)Method_System_Collections_Generic_List_int___ctor___75657200);
  if ( !v27 )
LABEL_10:
    sub_1B64324(v16);
  if ( System_Collections_Generic_List_int___Contains(
         v27,
         effectId,
         (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    System_Collections_Generic_List_int___Remove(
      v27,
      effectId,
      (const MethodInfo_3491478 *)Method_System_Collections_Generic_List_int__Remove__);
    v28 = System_Collections_Generic_List_int___ToArray(
            v27,
            (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
    p_monitor->klass = (ServantStatusBattleListViewItem_c *)v28;
    sub_1B6406C(p_monitor, (int32_t)v28, v29, v30);
  }
}


void __fastcall WarBoardData__DeleteAfterContinueDeviceLocalSave(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WarBoardData_c *v3; // x0
  System_String_o *AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY; // x19

  if ( (byte_49FA0BB & 1) == 0 )
  {
    sub_1B640C8(&EncryptedPlayerPrefs_TypeInfo, v1);
    sub_1B640C8(&WarBoardData_TypeInfo, v2);
    byte_49FA0BB = 1;
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

  if ( (byte_49FA0B9 & 1) == 0 )
  {
    sub_1B640C8(&EncryptedPlayerPrefs_TypeInfo, v1);
    sub_1B640C8(&WarBoardData_TypeInfo, v2);
    byte_49FA0B9 = 1;
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
  if ( (byte_49FA0BF & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__TryGetValue__,
      *(_QWORD *)&forceId);
    byte_49FA0BF = 1;
  }
  value = 0LL;
  actionPointEntityDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.actionPointEntityDict;
  if ( !actionPointEntityDict )
    sub_1B64324(0LL);
  System_Collections_Generic_Dictionary_uint__object___TryGetValue(
    actionPointEntityDict,
    (forceId << 24) | (v4 << 16),
    &value,
    (const MethodInfo_31B38BC *)Method_System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__TryGetValue__);
  return (WarBoardActionPointEntity_o *)value;
}


System_Collections_Generic_List_WarBoardPieceData__o *__fastcall WarBoardData__GetAliveEnemyServantPieces(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WarBoardData___c_c *v8; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *_9__110_0; // x20
  Il2CppObject *v11; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_49FA0CE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_WarBoardPieceData___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v4);
    sub_1B640C8(&System_Func_WarBoardPieceData__bool__TypeInfo, v5);
    sub_1B640C8(&Method_WarBoardData___c__GetAliveEnemyServantPieces_b__110_0__, v6);
    sub_1B640C8(&WarBoardData___c_TypeInfo, v7);
    byte_49FA0CE = 1;
  }
  v8 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v8 = WarBoardData___c_TypeInfo;
  }
  _9__110_0 = (System_Func_object__bool__o *)v8->static_fields->__9__110_0;
  if ( !_9__110_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = WarBoardData___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__110_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardPieceData__bool__TypeInfo, method, v2);
    System_Func_object__bool____ctor(
      _9__110_0,
      v11,
      Method_WarBoardData___c__GetAliveEnemyServantPieces_b__110_0__,
      0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__110_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__110_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__110_0, (int32_t)_9__110_0, v13, v14);
  }
  v15 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__110_0,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (System_Collections_Generic_List_WarBoardPieceData__o *)System_Linq_Enumerable__ToList_object_(
                                                                   v15,
                                                                   (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
}


WarBoardPieceData_array *__fastcall WarBoardData__GetAlivePieces(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WarBoardData___c_c *v8; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *_9__107_0; // x20
  Il2CppObject *v11; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_49FA0CB & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v4);
    sub_1B640C8(&System_Func_WarBoardPieceData__bool__TypeInfo, v5);
    sub_1B640C8(&Method_WarBoardData___c__GetAlivePieces_b__107_0__, v6);
    sub_1B640C8(&WarBoardData___c_TypeInfo, v7);
    byte_49FA0CB = 1;
  }
  v8 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v8 = WarBoardData___c_TypeInfo;
  }
  _9__107_0 = (System_Func_object__bool__o *)v8->static_fields->__9__107_0;
  if ( !_9__107_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = WarBoardData___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__107_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardPieceData__bool__TypeInfo, method, v2);
    System_Func_object__bool____ctor(_9__107_0, v11, Method_WarBoardData___c__GetAlivePieces_b__107_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__107_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__107_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__107_0, (int32_t)_9__107_0, v13, v14);
  }
  v15 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__107_0,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v15,
                                      (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


System_Collections_Generic_List_WarBoardPieceData__o *__fastcall WarBoardData__GetAlivePlayerGroupServantPieces(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WarBoardData___c_c *v8; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *_9__109_0; // x20
  Il2CppObject *v11; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_49FA0CD & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_WarBoardPieceData___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v4);
    sub_1B640C8(&System_Func_WarBoardPieceData__bool__TypeInfo, v5);
    sub_1B640C8(&Method_WarBoardData___c__GetAlivePlayerGroupServantPieces_b__109_0__, v6);
    sub_1B640C8(&WarBoardData___c_TypeInfo, v7);
    byte_49FA0CD = 1;
  }
  v8 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v8 = WarBoardData___c_TypeInfo;
  }
  _9__109_0 = (System_Func_object__bool__o *)v8->static_fields->__9__109_0;
  if ( !_9__109_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = WarBoardData___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__109_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardPieceData__bool__TypeInfo, method, v2);
    System_Func_object__bool____ctor(
      _9__109_0,
      v11,
      Method_WarBoardData___c__GetAlivePlayerGroupServantPieces_b__109_0__,
      0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__109_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__109_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__109_0, (int32_t)_9__109_0, v13, v14);
  }
  v15 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__109_0,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (System_Collections_Generic_List_WarBoardPieceData__o *)System_Linq_Enumerable__ToList_object_(
                                                                   v15,
                                                                   (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
}


WarBoardPieceData_array *__fastcall WarBoardData__GetAliveServantPieces(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WarBoardData___c_c *v8; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *_9__108_0; // x20
  Il2CppObject *v11; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_49FA0CC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v4);
    sub_1B640C8(&System_Func_WarBoardPieceData__bool__TypeInfo, v5);
    sub_1B640C8(&Method_WarBoardData___c__GetAliveServantPieces_b__108_0__, v6);
    sub_1B640C8(&WarBoardData___c_TypeInfo, v7);
    byte_49FA0CC = 1;
  }
  v8 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v8 = WarBoardData___c_TypeInfo;
  }
  _9__108_0 = (System_Func_object__bool__o *)v8->static_fields->__9__108_0;
  if ( !_9__108_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = WarBoardData___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__108_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardPieceData__bool__TypeInfo, method, v2);
    System_Func_object__bool____ctor(_9__108_0, v11, Method_WarBoardData___c__GetAliveServantPieces_b__108_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__108_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__108_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__108_0, (int32_t)_9__108_0, v13, v14);
  }
  v15 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__108_0,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v15,
                                      (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
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
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *listPrevCond; // x19
  System_Predicate_object__o *v13; // x20
  Il2CppObject *v14; // x0

  if ( (byte_49FA0FE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPrevCondData__Find__, *(_QWORD *)&condId);
    sub_1B640C8(&System_Predicate_WarBoardPrevCondData__TypeInfo, v5);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass183_0__GetClearedTurn_b__0__, v6);
    sub_1B640C8(&WarBoardData___c__DisplayClass183_0_TypeInfo, v7);
    byte_49FA0FE = 1;
  }
  v8 = (WarBoardData___c__DisplayClass183_0_o *)sub_1B64314(
                                                  WarBoardData___c__DisplayClass183_0_TypeInfo,
                                                  *(_QWORD *)&condId,
                                                  method);
  WarBoardData___c__DisplayClass183_0___ctor(v8, 0LL);
  if ( !v8
    || (v8->fields.condId = condId,
        listPrevCond = (System_Collections_Generic_List_object__o *)this->fields.listPrevCond,
        v13 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_WarBoardPrevCondData__TypeInfo, v10, v11),
        System_Predicate_object____ctor(
          v13,
          (Il2CppObject *)v8,
          Method_WarBoardData___c__DisplayClass183_0__GetClearedTurn_b__0__,
          0LL),
        !listPrevCond) )
  {
    sub_1B64324(v9);
  }
  v14 = System_Collections_Generic_List_object___Find(
          listPrevCond,
          (System_Predicate_T__o *)v13,
          (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_WarBoardPrevCondData__Find__);
  if ( v14 )
    return HIDWORD(v14[1].klass);
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
  __int64 v11; // x2
  System_Collections_Generic_IEnumerable_TSource__o *condSquares; // x19
  System_Func_object__bool__o *v13; // x20

  if ( (byte_49FA0DC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___, *(_QWORD *)&squareIndex);
    sub_1B640C8(&System_Func_WarBoardSquareData__bool__TypeInfo, v5);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass130_0__GetCondSquare_b__0__, v6);
    sub_1B640C8(&WarBoardData___c__DisplayClass130_0_TypeInfo, v7);
    byte_49FA0DC = 1;
  }
  v8 = (WarBoardData___c__DisplayClass130_0_o *)sub_1B64314(
                                                  WarBoardData___c__DisplayClass130_0_TypeInfo,
                                                  *(_QWORD *)&squareIndex,
                                                  method);
  WarBoardData___c__DisplayClass130_0___ctor(v8, 0LL);
  if ( !v8 )
    sub_1B64324(v9);
  v8->fields.squareIndex = squareIndex;
  condSquares = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.condSquares;
  v13 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardSquareData__bool__TypeInfo, v10, v11);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v8,
    Method_WarBoardData___c__DisplayClass130_0__GetCondSquare_b__0__,
    0LL);
  return (WarBoardSquareData_o *)System_Linq_Enumerable__FirstOrDefault_object__48617700(
                                   condSquares,
                                   (System_Func_TSource__bool__o *)v13,
                                   (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
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
  void *Piece_35061152; // x0
  __int64 value; // x1
  const MethodInfo *v16; // x2
  signed int max_length; // w8
  unsigned int v18; // w25
  System_Int32_array *v19; // x28
  unsigned __int64 v20; // x27
  WarBoardData___c__DisplayClass133_0_o *v21; // x22
  const MethodInfo *v22; // x2
  int32_t v23; // w1
  const MethodInfo *v24; // x3
  System_Collections_Generic_List_T__o *reinforcementsAppointmentSquareList; // x23
  System_Func_int__bool__o *v26; // x24
  System_Func_int__bool__o *v27; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10

  if ( (byte_49FA0DE & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_int___, squareIds);
    sub_1B640C8(&System_Func_int__bool__TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__0__, v10);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__1__, v11);
    sub_1B640C8(&WarBoardData___c__DisplayClass133_0_TypeInfo, v12);
    byte_49FA0DE = 1;
  }
  v13 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    squareIds,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !squareIds )
    goto LABEL_29;
  max_length = squareIds->max_length;
  if ( max_length >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= max_length )
LABEL_30:
        sub_1B6432C(Piece_35061152, value);
      v19 = squareIds->m_Items[v18];
      if ( !v19 )
        break;
      if ( (int)v19->max_length < 1 )
      {
LABEL_18:
        value = 0xFFFFFFFFLL;
        if ( !v13 )
          break;
      }
      else
      {
        v20 = 0LL;
        while ( 1 )
        {
          v21 = (WarBoardData___c__DisplayClass133_0_o *)sub_1B64314(
                                                           WarBoardData___c__DisplayClass133_0_TypeInfo,
                                                           value,
                                                           v16);
          WarBoardData___c__DisplayClass133_0___ctor(v21, 0LL);
          if ( v20 >= v19->max_length )
            goto LABEL_30;
          if ( !v21 )
            goto LABEL_29;
          v23 = v19->m_Items[v20 + 1];
          v21->fields.value = v23;
          Piece_35061152 = WarBoardData__GetPiece_35061152(this, v23, v22);
          if ( !Piece_35061152 )
          {
            Piece_35061152 = WarBoardData__GetUnusedTreasure(this, v21->fields.value, v16);
            if ( !Piece_35061152 )
            {
              Piece_35061152 = WarBoardData__GetWall(this, v21->fields.value, 0, v24);
              if ( !Piece_35061152 )
              {
                reinforcementsAppointmentSquareList = (System_Collections_Generic_List_T__o *)this->fields.reinforcementsAppointmentSquareList;
                v26 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, value, v16);
                System_Func_int__bool____ctor(
                  v26,
                  (Il2CppObject *)v21,
                  Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__0__,
                  0LL);
                Piece_35061152 = (void *)BasicHelper__Any_int_(
                                           reinforcementsAppointmentSquareList,
                                           (System_Func_T__bool__o *)v26,
                                           (const MethodInfo_2E24544 *)Method_BasicHelper_Any_int___);
                if ( ((unsigned __int8)Piece_35061152 & 1) == 0 )
                {
                  v27 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, value, v16);
                  System_Func_int__bool____ctor(
                    v27,
                    (Il2CppObject *)v21,
                    Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__1__,
                    0LL);
                  Piece_35061152 = (void *)BasicHelper__Any_int_(
                                             (System_Collections_Generic_List_T__o *)v13,
                                             (System_Func_T__bool__o *)v27,
                                             (const MethodInfo_2E24544 *)Method_BasicHelper_Any_int___);
                  if ( ((unsigned __int8)Piece_35061152 & 1) == 0 )
                    break;
                }
              }
            }
          }
          if ( (__int64)++v20 >= (int)v19->max_length )
            goto LABEL_18;
        }
        value = (unsigned int)v21->fields.value;
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
          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v13->fields._size = size + 1;
        items->m_Items[size + 1] = value;
      }
      max_length = squareIds->max_length;
      if ( (int)++v18 >= max_length )
        goto LABEL_27;
    }
LABEL_29:
    sub_1B64324(Piece_35061152);
  }
LABEL_27:
  if ( !v13 )
    goto LABEL_29;
  return System_Collections_Generic_List_int___ToArray(
           v13,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_String_o *__fastcall WarBoardData__GetEditBgmName(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  struct WarBoardStageEntity_o *stageEntity; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FA0E7 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_BgmMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FA0E7 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_BgmMaster___);
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity || !Instance )
    goto LABEL_11;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               stageEntity->fields.editBgmId,
                               (const MethodInfo_30D3EF8 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return (System_String_o *)entity[1].monitor;
LABEL_11:
    sub_1B64324(Instance);
  }
  return 0LL;
}


WarBoardPieceData_array *__fastcall WarBoardData__GetEditableServantPieces(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WarBoardData___c_c *v8; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *_9__120_0; // x20
  Il2CppObject *v11; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_49FA0D4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v4);
    sub_1B640C8(&System_Func_WarBoardPieceData__bool__TypeInfo, v5);
    sub_1B640C8(&Method_WarBoardData___c__GetEditableServantPieces_b__120_0__, v6);
    sub_1B640C8(&WarBoardData___c_TypeInfo, v7);
    byte_49FA0D4 = 1;
  }
  v8 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v8 = WarBoardData___c_TypeInfo;
  }
  _9__120_0 = (System_Func_object__bool__o *)v8->static_fields->__9__120_0;
  if ( !_9__120_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = WarBoardData___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__120_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardPieceData__bool__TypeInfo, method, v2);
    System_Func_object__bool____ctor(_9__120_0, v11, Method_WarBoardData___c__GetEditableServantPieces_b__120_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__120_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__120_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__120_0, (int32_t)_9__120_0, v13, v14);
  }
  v15 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__120_0,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v15,
                                      (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
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
  __int64 v11; // x2
  System_Collections_Generic_IEnumerable_TSource__o *effects; // x19
  System_Func_object__bool__o *v13; // x20

  if ( (byte_49FA0E3 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardEffectData___, *(_QWORD *)&squareIndex);
    sub_1B640C8(&System_Func_WarBoardEffectData__bool__TypeInfo, v5);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass142_0__GetEffect_b__0__, v6);
    sub_1B640C8(&WarBoardData___c__DisplayClass142_0_TypeInfo, v7);
    byte_49FA0E3 = 1;
  }
  v8 = (WarBoardData___c__DisplayClass142_0_o *)sub_1B64314(
                                                  WarBoardData___c__DisplayClass142_0_TypeInfo,
                                                  *(_QWORD *)&squareIndex,
                                                  method);
  WarBoardData___c__DisplayClass142_0___ctor(v8, 0LL);
  if ( !v8 )
    sub_1B64324(v9);
  v8->fields.squareIndex = squareIndex;
  effects = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.effects;
  v13 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardEffectData__bool__TypeInfo, v10, v11);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v8,
    Method_WarBoardData___c__DisplayClass142_0__GetEffect_b__0__,
    0LL);
  return (WarBoardEffectData_o *)System_Linq_Enumerable__FirstOrDefault_object__48617700(
                                   effects,
                                   (System_Func_TSource__bool__o *)v13,
                                   (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardEffectData___);
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
  __int64 v11; // x2
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v13; // x20

  if ( (byte_49FA0C9 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, *(_QWORD *)&stageBossIndex);
    sub_1B640C8(&System_Func_WarBoardPieceData__bool__TypeInfo, v5);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass105_0__GetEventBossPiece_b__0__, v6);
    sub_1B640C8(&WarBoardData___c__DisplayClass105_0_TypeInfo, v7);
    byte_49FA0C9 = 1;
  }
  v8 = (WarBoardData___c__DisplayClass105_0_o *)sub_1B64314(
                                                  WarBoardData___c__DisplayClass105_0_TypeInfo,
                                                  *(_QWORD *)&stageBossIndex,
                                                  method);
  WarBoardData___c__DisplayClass105_0___ctor(v8, 0LL);
  if ( !v8 )
    sub_1B64324(v9);
  v8->fields.stageBossIndex = stageBossIndex;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v13 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardPieceData__bool__TypeInfo, v10, v11);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v8,
    Method_WarBoardData___c__DisplayClass105_0__GetEventBossPiece_b__0__,
    0LL);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_object__48617700(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v13,
                                  (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
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
        sub_1B6432C(this, method);
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
    sub_1B64324(this);
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
  __int64 v42; // x2
  System_Collections_Generic_List_object__o *reinforcementsSaveList; // x22
  System_Predicate_object__o *v44; // x24
  Il2CppObject *v45; // x25
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  __int64 v49; // x1
  __int64 v50; // x2
  System_Collections_Generic_List_object__o *v51; // x22
  int32_t v52; // w2
  int32_t v53; // w3
  __int64 v54; // x1
  __int64 v55; // x2
  struct System_Collections_Generic_List_HoldReinforcementsData__o *v56; // x22
  System_Func_object__bool__o *v57; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x0
  const MethodInfo_322A0B0 **v59; // x26
  WarBoardData___c__DisplayClass188_1_c **v60; // x27
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x24
  __int64 v64; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  int32_t current; // w1
  HoldReinforcementsData_o **v68; // x22
  __int64 v69; // x0
  struct WarBoardStageEntity_o *stageEntity; // x8
  _BOOL8 v71; // x0
  const MethodInfo *v72; // x2
  System_Int32_array *DeploySquareIds; // x0
  __int64 v74; // x1
  const MethodInfo *v75; // x3
  struct System_Int32_array *limitNums; // x9
  __int64 index_k__BackingField; // x2
  System_Int32_array *v78; // x23
  WarBoardPieceData_array *ReinfocementsPieces; // x0
  __int64 v80; // x1
  struct System_Int32_array *v81; // x8
  __int64 v82; // x9
  _BOOL4 v83; // w25
  Il2CppObject *Instance; // x0
  _BOOL8 IsPlayerTurn; // x0
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x10
  int max_length; // w11
  int v90; // w10
  const MethodInfo_322A0B0 **v91; // x20
  System_Collections_Generic_List_T__o *v92; // x25
  System_Func_object__bool__o *v93; // x26
  bool v94; // w0
  __int64 v95; // x1
  __int64 v96; // x2
  WarBoardData___c__DisplayClass188_1_c **v97; // x29
  _BOOL8 v98; // x0
  __int64 v99; // x1
  __int64 v100; // x2
  Il2CppObject *v101; // x27
  System_Collections_Generic_List_int__o *v102; // x25
  __int64 v103; // x1
  __int64 v104; // x2
  System_Collections_Generic_List_int__o *v105; // x24
  __int64 v106; // x0
  __int64 v107; // x0
  int32_t v108; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v110; // x9
  __int64 size; // x10
  System_Int32_array *v112; // x0
  int32_t v113; // w2
  int32_t v114; // w3
  __int64 v115; // x0
  ServantStatusBattleListViewItem_o *v116; // x25
  __int64 v117; // x0
  __int64 v118; // x1
  __int64 v119; // x8
  int32_t v120; // w1
  struct System_Int32_array *v121; // x8
  _QWORD *v122; // x9
  __int64 v123; // x10
  System_Int32_array *v124; // x0
  int32_t v125; // w2
  int32_t v126; // w3
  Il2CppObject *v127; // x0
  __int64 v128; // x1
  void *monitor; // x8
  HoldReinforcementsData_o *v130; // x0
  __int64 v131; // x9
  System_Collections_Generic_List_int__o *v132; // x8
  int32_t v133; // w1
  struct System_Int32_array *v134; // x9
  _QWORD *v135; // x10
  __int64 v136; // x11
  __int64 v137; // x24
  __int64 v138; // x0
  __int64 v139; // x0
  int32_t v140; // w2
  int32_t v141; // w3
  __int64 v142; // x0
  int32_t v143; // w2
  int32_t v144; // w3
  __int64 v145; // x8
  int32_t v146; // w2
  int32_t v147; // w3
  System_Collections_Generic_List_object__o *v148; // x0
  struct System_Object_array *v149; // x8
  _QWORD *v150; // x9
  __int64 v151; // x10
  Il2CppClass **v152; // x8
  Il2CppObject *v153; // x0
  __int64 v154; // x1
  void *v155; // x8
  HoldReinforcementsData_o *v156; // x0
  __int64 v157; // x9
  System_Collections_Generic_List_int__o *v158; // x8
  int32_t v159; // w1
  struct System_Int32_array *v160; // x9
  _QWORD *v161; // x10
  __int64 v162; // x11
  System_Collections_Generic_List_Enumerator_object__o v164; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v165; // [xsp+20h] [xbp-A0h] BYREF
  WarBoardStageReinforcementsEntity_o *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v167; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_49FA103 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_ReinforcementsData___, reinforcementsDatas);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_HoldReinforcementsData___, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_HoldReinforcementsData___, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__Dispose__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__MoveNext__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__get_Current__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__get_Current__, v15);
    sub_1B640C8(&System_Func_HoldReinforcementsData__bool__TypeInfo, v16);
    sub_1B640C8(&System_Func_ReinforcementsData__bool__TypeInfo, v17);
    sub_1B640C8(&int___TypeInfo, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__AddRange__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_ReinforcementsData__Add__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_ReinforcementsData__GetEnumerator__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_List_HoldReinforcementsData__RemoveAll__, v24);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v25);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v26);
    sub_1B640C8(&Method_System_Collections_Generic_List_ReinforcementsData___ctor__, v27);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v28);
    sub_1B640C8(&System_Collections_Generic_List_ReinforcementsData__TypeInfo, v29);
    sub_1B640C8(&System_Predicate_HoldReinforcementsData__TypeInfo, v30);
    sub_1B640C8(&ReinforcementsData_TypeInfo, v31);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v32);
    sub_1B640C8(&Method_WarBoardData___c__GetHoldReinforcements_b__188_0__, v33);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass188_0__GetHoldReinforcements_b__1__, v34);
    sub_1B640C8(&WarBoardData___c__DisplayClass188_0_TypeInfo, v35);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass188_1__GetHoldReinforcements_b__2__, v36);
    sub_1B640C8(&WarBoardData___c__DisplayClass188_1_TypeInfo, v37);
    sub_1B640C8(&WarBoardData___c_TypeInfo, v38);
    byte_49FA103 = 1;
  }
  memset(&v167, 0, sizeof(v167));
  entity = 0LL;
  memset(&v165, 0, sizeof(v165));
  v39 = (WarBoardData___c__DisplayClass188_0_o *)sub_1B64314(
                                                   WarBoardData___c__DisplayClass188_0_TypeInfo,
                                                   reinforcementsDatas,
                                                   mst);
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
  v44 = *(System_Predicate_object__o **)(*((_QWORD *)v40 + 23) + 232LL);
  if ( !v44 )
  {
    if ( !*((_DWORD *)v40 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v40);
      v40 = WarBoardData___c_TypeInfo;
    }
    v45 = (Il2CppObject *)**((_QWORD **)v40 + 23);
    v44 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_HoldReinforcementsData__TypeInfo, v41, v42);
    System_Predicate_object____ctor(v44, v45, Method_WarBoardData___c__GetHoldReinforcements_b__188_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__188_0 = (struct System_Predicate_HoldReinforcementsData__o *)v44;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__188_0, (int32_t)v44, v47, v48);
  }
  if ( !reinforcementsSaveList )
    goto LABEL_156;
  System_Collections_Generic_List_object___RemoveAll(
    reinforcementsSaveList,
    (System_Predicate_T__o *)v44,
    (const MethodInfo_34AEDD0 *)Method_System_Collections_Generic_List_HoldReinforcementsData__RemoveAll__);
  v51 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ReinforcementsData__TypeInfo,
                                                       v49,
                                                       v50);
  System_Collections_Generic_List_object____ctor(
    v51,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ReinforcementsData___ctor__);
  *reinforcementsDatas = (System_Collections_Generic_List_ReinforcementsData__o *)v51;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)reinforcementsDatas, (int32_t)v51, v52, v53);
  v56 = this->fields.reinforcementsSaveList;
  if ( (v39->fields.targetStageReinforcementsId & 0x80000000) == 0 )
  {
    v57 = (System_Func_object__bool__o *)sub_1B64314(System_Func_HoldReinforcementsData__bool__TypeInfo, v54, v55);
    System_Func_object__bool____ctor(
      v57,
      (Il2CppObject *)v39,
      Method_WarBoardData___c__DisplayClass188_0__GetHoldReinforcements_b__1__,
      0LL);
    v58 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v56,
            (System_Func_TSource__bool__o *)v57,
            (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_HoldReinforcementsData___);
    v40 = System_Linq_Enumerable__ToList_object_(
            v58,
            (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_HoldReinforcementsData___);
    v56 = (struct System_Collections_Generic_List_HoldReinforcementsData__o *)v40;
  }
  if ( !v56 )
LABEL_156:
    sub_1B64324(v40);
  v59 = (const MethodInfo_322A0B0 **)&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__;
  v60 = &WarBoardData___c__DisplayClass188_1_TypeInfo;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v164,
    (System_Collections_Generic_List_object__o *)v56,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
  v167 = v164;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(&v167, *v59) )
  {
    v63 = sub_1B64314(*v60, v61, v62);
    WarBoardData___c__DisplayClass188_1___ctor((WarBoardData___c__DisplayClass188_1_o *)v63, 0LL);
    if ( !v63 )
      sub_1B64324(v64);
    current = (int32_t)v167.fields._current;
    *(_QWORD *)(v63 + 16) = v167.fields._current;
    v68 = (HoldReinforcementsData_o **)(v63 + 16);
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v63 + 16), current, v65, v66);
    stageEntity = this->fields.stageEntity;
    if ( !stageEntity )
      sub_1B64324(v69);
    if ( !*v68 )
      sub_1B64324(v69);
    if ( !mst )
      sub_1B64324(v69);
    v71 = WarBoardStageReinforcementsMaster__TryGetEntity(
            mst,
            &entity,
            stageEntity->fields.id,
            (*v68)->fields._id_k__BackingField,
            0LL);
    if ( v71 )
    {
      if ( !entity )
        sub_1B64324(v71);
      DeploySquareIds = WarBoardData__GetDeploySquareIds(this, entity->fields.squareIds, v72);
      if ( !entity )
        sub_1B64324(DeploySquareIds);
      if ( !*v68 )
        sub_1B64324(DeploySquareIds);
      limitNums = entity->fields.limitNums;
      if ( !limitNums )
        sub_1B64324(DeploySquareIds);
      index_k__BackingField = (*v68)->fields._index_k__BackingField;
      if ( (unsigned int)index_k__BackingField >= limitNums->max_length )
        sub_1B6432C(DeploySquareIds, v74);
      v78 = DeploySquareIds;
      if ( limitNums->m_Items[index_k__BackingField + 1] < 1 )
      {
        v83 = 0;
      }
      else
      {
        ReinfocementsPieces = WarBoardData__GetReinfocementsPieces(this, entity->fields.id, index_k__BackingField, v75);
        if ( !ReinfocementsPieces )
          sub_1B64324(0LL);
        if ( !entity )
          sub_1B64324(ReinfocementsPieces);
        if ( !*v68 )
          sub_1B64324(ReinfocementsPieces);
        v81 = entity->fields.limitNums;
        if ( !v81 )
          sub_1B64324(ReinfocementsPieces);
        v82 = (*v68)->fields._index_k__BackingField;
        if ( (unsigned int)v82 >= v81->max_length )
          sub_1B6432C(ReinfocementsPieces, v80);
        v83 = v81->m_Items[v82 + 1] <= (signed int)ReinfocementsPieces->max_length;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !Instance )
        sub_1B64324(0LL);
      IsPlayerTurn = WarBoardManager__IsPlayerTurn((WarBoardManager_o *)Instance, 0LL);
      if ( !entity )
        sub_1B64324(IsPlayerTurn);
      if ( !v78 )
        sub_1B64324(IsPlayerTurn);
      if ( !*v68 )
        sub_1B64324(IsPlayerTurn);
      v88 = (*v68)->fields._index_k__BackingField;
      max_length = v78->max_length;
      if ( (int)v88 >= max_length )
      {
        v90 = 0;
      }
      else
      {
        if ( (unsigned int)v88 >= max_length )
          sub_1B6432C(IsPlayerTurn, v86);
        v90 = v78->m_Items[v88 + 1] >= 0 && !v83;
      }
      if ( (IsPlayerTurn ^ (entity->fields.forceId != 0)) & (unsigned int)v90 )
      {
        v91 = v59;
        v92 = (System_Collections_Generic_List_T__o *)*reinforcementsDatas;
        v93 = (System_Func_object__bool__o *)sub_1B64314(System_Func_ReinforcementsData__bool__TypeInfo, v86, v87);
        System_Func_object__bool____ctor(
          v93,
          (Il2CppObject *)v63,
          Method_WarBoardData___c__DisplayClass188_1__GetHoldReinforcements_b__2__,
          0LL);
        v94 = BasicHelper__Any_object_(
                v92,
                (System_Func_T__bool__o *)v93,
                (const MethodInfo_2E24870 *)Method_BasicHelper_Any_ReinforcementsData___);
        v59 = v91;
        if ( v94 )
        {
          if ( !*reinforcementsDatas )
            sub_1B64324(0LL);
          v97 = v60;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v164,
            (System_Collections_Generic_List_object__o *)*reinforcementsDatas,
            (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ReinforcementsData__GetEnumerator__);
          v165 = v164;
          do
          {
            v98 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v165,
                    (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__MoveNext__);
            if ( !v98 )
            {
              v60 = v97;
              goto LABEL_76;
            }
            v101 = v165.fields._current;
            if ( !v165.fields._current )
              sub_1B64324(v98);
            if ( !*v68 )
              sub_1B64324(v98);
          }
          while ( LODWORD(v165.fields._current[1].klass) != (*v68)->fields._id_k__BackingField );
          v102 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                             System_Collections_Generic_List_int__TypeInfo,
                                                             v99,
                                                             v100);
          System_Collections_Generic_List_int____ctor(
            v102,
            (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
          v105 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                             System_Collections_Generic_List_int__TypeInfo,
                                                             v103,
                                                             v104);
          System_Collections_Generic_List_int____ctor(
            v105,
            (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
          if ( !v102 )
            sub_1B64324(v106);
          System_Collections_Generic_List_int___AddRange(
            v102,
            (System_Collections_Generic_IEnumerable_T__o *)v101[1].monitor,
            (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__);
          if ( !*v68 )
            sub_1B64324(v107);
          v108 = (*v68)->fields._index_k__BackingField;
          items = v102->fields._items;
          v110 = Method_System_Collections_Generic_List_int__Add__;
          ++v102->fields._version;
          if ( !items )
            sub_1B64324(v107);
          size = v102->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v102,
              v108,
              *(const MethodInfo_348FEDC **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
          }
          else
          {
            v102->fields._size = size + 1;
            items->m_Items[size + 1] = v108;
          }
          v112 = System_Collections_Generic_List_int___ToArray(
                   v102,
                   (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
          v101[1].monitor = v112;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v101[1].monitor, (int32_t)v112, v113, v114);
          if ( !v105 )
            sub_1B64324(v115);
          v116 = (ServantStatusBattleListViewItem_o *)&v101[2];
          v59 = v91;
          System_Collections_Generic_List_int___AddRange(
            v105,
            (System_Collections_Generic_IEnumerable_T__o *)v101[2].klass,
            (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__);
          if ( !*v68 )
            sub_1B64324(v117);
          v119 = (*v68)->fields._index_k__BackingField;
          v60 = v97;
          if ( (unsigned int)v119 >= v78->max_length )
            sub_1B6432C(v117, v118);
          v120 = v78->m_Items[v119 + 1];
          v121 = v105->fields._items;
          v122 = Method_System_Collections_Generic_List_int__Add__;
          ++v105->fields._version;
          if ( !v121 )
            sub_1B64324(v117);
          v123 = v105->fields._size;
          if ( (unsigned int)v123 >= v121->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v105,
              v120,
              *(const MethodInfo_348FEDC **)(*(_QWORD *)(v122[4] + 192LL) + 112LL));
          }
          else
          {
            v105->fields._size = v123 + 1;
            v121->m_Items[v123 + 1] = v120;
          }
          v124 = System_Collections_Generic_List_int___ToArray(
                   v105,
                   (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
          v116->klass = (ServantStatusBattleListViewItem_c *)v124;
          sub_1B6406C(v116, (int32_t)v124, v125, v126);
          v127 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !v127 )
            sub_1B64324(0LL);
          monitor = v127[27].monitor;
          if ( !monitor )
            sub_1B64324(v127);
          v130 = *v68;
          if ( !*v68 )
            sub_1B64324(0LL);
          v131 = v130->fields._index_k__BackingField;
          if ( (unsigned int)v131 >= v78->max_length )
            sub_1B6432C(v130, v128);
          v132 = (System_Collections_Generic_List_int__o *)*((_QWORD *)monitor + 29);
          if ( !v132 )
            sub_1B64324(v130);
          v133 = v78->m_Items[v131 + 1];
          v134 = v132->fields._items;
          v135 = Method_System_Collections_Generic_List_int__Add__;
          ++v132->fields._version;
          if ( !v134 )
            sub_1B64324(v130);
          v136 = v132->fields._size;
          if ( (unsigned int)v136 >= v134->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v132,
              v133,
              *(const MethodInfo_348FEDC **)(*(_QWORD *)(v135[4] + 192LL) + 112LL));
            v130 = *v68;
            if ( !*v68 )
              sub_1B64324(0LL);
          }
          else
          {
            v132->fields._size = v136 + 1;
            v134->m_Items[v136 + 1] = v133;
          }
          HoldReinforcementsData__DecreaseHoldNum(v130, 0LL);
LABEL_76:
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v165,
            (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__Dispose__);
        }
        else
        {
          v137 = sub_1B64314(ReinforcementsData_TypeInfo, v95, v96);
          ReinforcementsData___ctor((ReinforcementsData_o *)v137, 0LL);
          if ( !entity )
            sub_1B64324(v138);
          if ( !v137 )
            sub_1B64324(v138);
          *(_DWORD *)(v137 + 16) = entity->fields.id;
          v139 = sub_1B64170(int___TypeInfo, 1LL);
          if ( !*v68 )
            sub_1B64324(v139);
          if ( !v139 )
            sub_1B64324(0LL);
          if ( !*(_DWORD *)(v139 + 24) )
            sub_1B6432C(v139, v139);
          *(_DWORD *)(v139 + 32) = (*v68)->fields._index_k__BackingField;
          *(_QWORD *)(v137 + 24) = v139;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v137 + 24), v139, v140, v141);
          v142 = sub_1B64170(int___TypeInfo, 1LL);
          if ( !*v68 )
            sub_1B64324(v142);
          v145 = (*v68)->fields._index_k__BackingField;
          if ( (unsigned int)v145 >= v78->max_length )
            sub_1B6432C(v142, v142);
          if ( !v142 )
            sub_1B64324(0LL);
          if ( !*(_DWORD *)(v142 + 24) )
            sub_1B6432C(v142, v142);
          *(_DWORD *)(v142 + 32) = v78->m_Items[v145 + 1];
          *(_QWORD *)(v137 + 32) = v142;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v137 + 32), v142, v143, v144);
          v148 = (System_Collections_Generic_List_object__o *)*reinforcementsDatas;
          if ( !*reinforcementsDatas )
            sub_1B64324(0LL);
          v149 = v148->fields._items;
          v150 = Method_System_Collections_Generic_List_ReinforcementsData__Add__;
          ++v148->fields._version;
          if ( !v149 )
            sub_1B64324(v148);
          v151 = v148->fields._size;
          if ( (unsigned int)v151 >= v149->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v148,
              (Il2CppObject *)v137,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v150[4] + 192LL) + 112LL));
          }
          else
          {
            v152 = &v149->obj.klass + v151;
            v148->fields._size = v151 + 1;
            v152[4] = (Il2CppClass *)v137;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v152 + 4), v137, v146, v147);
          }
          v153 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !v153 )
            sub_1B64324(0LL);
          v155 = v153[27].monitor;
          if ( !v155 )
            sub_1B64324(v153);
          v156 = *v68;
          if ( !*v68 )
            sub_1B64324(0LL);
          v157 = v156->fields._index_k__BackingField;
          if ( (unsigned int)v157 >= v78->max_length )
            sub_1B6432C(v156, v154);
          v158 = (System_Collections_Generic_List_int__o *)*((_QWORD *)v155 + 29);
          if ( !v158 )
            sub_1B64324(v156);
          v159 = v78->m_Items[v157 + 1];
          v160 = v158->fields._items;
          v161 = Method_System_Collections_Generic_List_int__Add__;
          ++v158->fields._version;
          if ( !v160 )
            sub_1B64324(v156);
          v162 = v158->fields._size;
          if ( (unsigned int)v162 >= v160->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v158,
              v159,
              *(const MethodInfo_348FEDC **)(*(_QWORD *)(v161[4] + 192LL) + 112LL));
            v156 = *v68;
            if ( !*v68 )
              sub_1B64324(0LL);
          }
          else
          {
            v158->fields._size = v162 + 1;
            v160->m_Items[v162 + 1] = v159;
          }
          HoldReinforcementsData__DecreaseHoldNum(v156, 0LL);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v167,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
}


int32_t __fastcall WarBoardData__GetHoldReinforcementsCount(WarBoardData_o *this, const MethodInfo *method)
{
  WarBoardData_o *v2; // x19
  struct System_Collections_Generic_List_HoldReinforcementsData__o *reinforcementsSaveList; // x8

  v2 = this;
  if ( (byte_49FA0EF & 1) == 0 )
  {
    this = (WarBoardData_o *)sub_1B640C8(
                               &Method_System_Collections_Generic_List_HoldReinforcementsData__get_Count__,
                               method);
    byte_49FA0EF = 1;
  }
  reinforcementsSaveList = v2->fields.reinforcementsSaveList;
  if ( !reinforcementsSaveList )
    sub_1B64324(this);
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
  const MethodInfo *v19; // x4
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *v22; // x20
  WarBoardData___c_c *v23; // x0
  System_Func_object__int__o *_9__123_0; // x21
  Il2CppObject *v25; // x22
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  System_Func_int__bool__o *v32; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *rangeSearches; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49FA0D7 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_WarBoardData_SquareRangeSearch__int___, *(_QWORD *)&start);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_int___, v10);
    sub_1B640C8(&System_Func_int__bool__TypeInfo, v11);
    sub_1B640C8(&System_Func_WarBoardData_SquareRangeSearch__int__TypeInfo, v12);
    sub_1B640C8(&Method_WarBoardData___c__GetInRangeSquareIndecies_b__123_0__, v13);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass123_0__GetInRangeSquareIndecies_b__1__, v14);
    sub_1B640C8(&WarBoardData___c__DisplayClass123_0_TypeInfo, v15);
    sub_1B640C8(&WarBoardData___c_TypeInfo, v16);
    byte_49FA0D7 = 1;
  }
  v17 = (WarBoardData___c__DisplayClass123_0_o *)sub_1B64314(
                                                   WarBoardData___c__DisplayClass123_0_TypeInfo,
                                                   *(_QWORD *)&start,
                                                   *(_QWORD *)&range);
  WarBoardData___c__DisplayClass123_0___ctor(v17, 0LL);
  if ( !v17 )
    sub_1B64324(v18);
  v17->fields.start = start;
  v17->fields.ignoreStart = ignoreStart;
  rangeSearches = 0LL;
  WarBoardData__SearchInRangeSquares(this, start, range, &rangeSearches, v19);
  v22 = rangeSearches;
  if ( !rangeSearches )
    return 0LL;
  v23 = WarBoardData___c_TypeInfo;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v23 = WarBoardData___c_TypeInfo;
  }
  _9__123_0 = (System_Func_object__int__o *)v23->static_fields->__9__123_0;
  if ( !_9__123_0 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = WarBoardData___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v23->static_fields->__9;
    _9__123_0 = (System_Func_object__int__o *)sub_1B64314(
                                                System_Func_WarBoardData_SquareRangeSearch__int__TypeInfo,
                                                v20,
                                                v21);
    System_Func_object__int____ctor(_9__123_0, v25, Method_WarBoardData___c__GetInRangeSquareIndecies_b__123_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__123_0 = (struct System_Func_WarBoardData_SquareRangeSearch__int__o *)_9__123_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__123_0, (int32_t)_9__123_0, v27, v28);
  }
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v22,
                                                               (System_Func_TSource__TResult__o *)_9__123_0,
                                                               (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_WarBoardData_SquareRangeSearch__int___);
  v32 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v30, v31);
  System_Func_int__bool____ctor(
    v32,
    (Il2CppObject *)v17,
    Method_WarBoardData___c__DisplayClass123_0__GetInRangeSquareIndecies_b__1__,
    0LL);
  v33 = System_Linq_Enumerable__Where_int_(
          v29,
          (System_Func_TSource__bool__o *)v32,
          (const MethodInfo_2E76DC8 *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v33,
           (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
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
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x20
  System_Func_T__TResult__o *v16; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_49FA0D8 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_int__WarBoardSquareData___, *(_QWORD *)&start);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_WarBoardSquareData___, v9);
    sub_1B640C8(&System_Func_int__WarBoardSquareData__TypeInfo, v10);
    sub_1B640C8(&Method_WarBoardData__GetInRangeSquares_b__124_0__, v11);
    byte_49FA0D8 = 1;
  }
  result = (WarBoardSquareData_array *)WarBoardData__GetInRangeSquareIndecies(this, start, range, ignoreStart, method);
  if ( result )
  {
    v15 = (System_Collections_Generic_IEnumerable_TSource__o *)result;
    v16 = (System_Func_T__TResult__o *)sub_1B64314(System_Func_int__WarBoardSquareData__TypeInfo, v13, v14);
    System_Func_int__object____ctor(v16, (Il2CppObject *)this, Method_WarBoardData__GetInRangeSquares_b__124_0__, 0LL);
    v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                 v15,
                                                                 (System_Func_TSource__TResult__o *)v16,
                                                                 (const MethodInfo_2E66FCC *)Method_System_Linq_Enumerable_Select_int__WarBoardSquareData___);
    return (WarBoardSquareData_array *)System_Linq_Enumerable__ToArray_object_(
                                         v17,
                                         (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_WarBoardSquareData___);
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
  __int64 v11; // x2
  System_Collections_Generic_IEnumerable_TSource__o *items; // x19
  System_Func_object__bool__o *v13; // x20

  if ( (byte_49FA0DF & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___, *(_QWORD *)&squareIndex);
    sub_1B640C8(&System_Func_WarBoardItemData__bool__TypeInfo, v5);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass135_0__GetItem_b__0__, v6);
    sub_1B640C8(&WarBoardData___c__DisplayClass135_0_TypeInfo, v7);
    byte_49FA0DF = 1;
  }
  v8 = (WarBoardData___c__DisplayClass135_0_o *)sub_1B64314(
                                                  WarBoardData___c__DisplayClass135_0_TypeInfo,
                                                  *(_QWORD *)&squareIndex,
                                                  method);
  WarBoardData___c__DisplayClass135_0___ctor(v8, 0LL);
  if ( !v8 )
    sub_1B64324(v9);
  v8->fields.squareIndex = squareIndex;
  items = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.items;
  v13 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardItemData__bool__TypeInfo, v10, v11);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v8,
    Method_WarBoardData___c__DisplayClass135_0__GetItem_b__0__,
    0LL);
  return (WarBoardItemData_o *)System_Linq_Enumerable__FirstOrDefault_object__48617700(
                                 items,
                                 (System_Func_TSource__bool__o *)v13,
                                 (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___);
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
    sub_1B64324(this);
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
  if ( (byte_49FA0BE & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__TryGetValue__,
      *(_QWORD *)&forceId);
    byte_49FA0BE = 1;
  }
  value = 0LL;
  npcEntityDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.npcEntityDict;
  if ( !npcEntityDict )
    sub_1B64324(0LL);
  System_Collections_Generic_Dictionary_uint__object___TryGetValue(
    npcEntityDict,
    (forceId << 24) | (v4 << 16),
    &value,
    (const MethodInfo_31B38BC *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__TryGetValue__);
  return (WarBoardStageNpcEntity_o *)value;
}


int32_t __fastcall WarBoardData__GetPartySkillId(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardStageEntity_o *stageEntity; // x8

  stageEntity = this->fields.stageEntity;
  if ( !stageEntity )
    sub_1B64324(this);
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
  int32_t v16; // w2
  int32_t v17; // w3
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  System_Func_object__bool__o *v21; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0

  if ( (byte_49FA0D2 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, *(_QWORD *)&start);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v9);
    sub_1B640C8(&System_Func_WarBoardPieceData__bool__TypeInfo, v10);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass118_0__GetPicesForRange_b__0__, v11);
    sub_1B640C8(&WarBoardData___c__DisplayClass118_0_TypeInfo, v12);
    byte_49FA0D2 = 1;
  }
  v13 = sub_1B64314(WarBoardData___c__DisplayClass118_0_TypeInfo, *(_QWORD *)&start, *(_QWORD *)&range);
  WarBoardData___c__DisplayClass118_0___ctor((WarBoardData___c__DisplayClass118_0_o *)v13, 0LL);
  v15 = WarBoardData__GetInRangeSquareIndecies(this, start, range, ignoreStart, v14);
  if ( !v13 )
    sub_1B64324(v15);
  *(_QWORD *)(v13 + 16) = v15;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)v15, v16, v17);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v21 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardPieceData__bool__TypeInfo, v19, v20);
  System_Func_object__bool____ctor(
    v21,
    (Il2CppObject *)v13,
    Method_WarBoardData___c__DisplayClass118_0__GetPicesForRange_b__0__,
    0LL);
  v22 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)v21,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v22,
                                      (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
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
  int32_t v16; // w2
  int32_t v17; // w3
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  System_Func_object__bool__o *v21; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0

  if ( (byte_49FA0D3 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, *(_QWORD *)&start);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v9);
    sub_1B640C8(&System_Func_WarBoardPieceData__bool__TypeInfo, v10);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass119_0__GetPicesForRangeIsAlive_b__0__, v11);
    sub_1B640C8(&WarBoardData___c__DisplayClass119_0_TypeInfo, v12);
    byte_49FA0D3 = 1;
  }
  v13 = sub_1B64314(WarBoardData___c__DisplayClass119_0_TypeInfo, *(_QWORD *)&start, *(_QWORD *)&range);
  WarBoardData___c__DisplayClass119_0___ctor((WarBoardData___c__DisplayClass119_0_o *)v13, 0LL);
  v15 = WarBoardData__GetInRangeSquareIndecies(this, start, range, ignoreStart, v14);
  if ( !v13 )
    sub_1B64324(v15);
  *(_QWORD *)(v13 + 16) = v15;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)v15, v16, v17);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v21 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardPieceData__bool__TypeInfo, v19, v20);
  System_Func_object__bool____ctor(
    v21,
    (Il2CppObject *)v13,
    Method_WarBoardData___c__DisplayClass119_0__GetPicesForRangeIsAlive_b__0__,
    0LL);
  v22 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)v21,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v22,
                                      (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
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
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  __int64 v18; // x1
  __int64 v19; // x2
  System_Func_object__bool__o *v20; // x20

  if ( (byte_49FA0C4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, *(_QWORD *)&forceId);
    sub_1B640C8(&System_Func_WarBoardPieceData__bool__TypeInfo, v11);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass100_0__GetPiece_b__0__, v12);
    sub_1B640C8(&WarBoardData___c__DisplayClass100_0_TypeInfo, v13);
    sub_1B640C8(&WarBoardPieceData_TypeInfo, v14);
    byte_49FA0C4 = 1;
  }
  v15 = (WarBoardData___c__DisplayClass100_0_o *)sub_1B64314(
                                                   WarBoardData___c__DisplayClass100_0_TypeInfo,
                                                   *(_QWORD *)&forceId,
                                                   *(_QWORD *)&groupId);
  WarBoardData___c__DisplayClass100_0___ctor(v15, 0LL);
  if ( !v15 )
    sub_1B64324(v16);
  v15->fields.ignoreDead = ignoreDead;
  if ( !WarBoardPieceData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardPieceData_TypeInfo);
  v15->fields.uniqueId = WarBoardPieceData__GetUniqueIndex(forceId, groupId, index, 0LL);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v20 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardPieceData__bool__TypeInfo, v18, v19);
  System_Func_object__bool____ctor(
    v20,
    (Il2CppObject *)v15,
    Method_WarBoardData___c__DisplayClass100_0__GetPiece_b__0__,
    0LL);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_object__48617700(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v20,
                                  (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
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
  int32_t v10; // w2
  int32_t v11; // w3
  const MethodInfo *v12; // x1
  System_Object_array *AlivePieces; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  System_Predicate_object__o *v16; // x20

  if ( (byte_49FA0E6 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_FindIndex_WarBoardPieceData___, piece);
    sub_1B640C8(&System_Predicate_WarBoardPieceData__TypeInfo, v5);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass145_0__GetPieceDispPriority_b__0__, v6);
    sub_1B640C8(&WarBoardData___c__DisplayClass145_0_TypeInfo, v7);
    byte_49FA0E6 = 1;
  }
  v8 = sub_1B64314(WarBoardData___c__DisplayClass145_0_TypeInfo, piece, method);
  WarBoardData___c__DisplayClass145_0___ctor((WarBoardData___c__DisplayClass145_0_o *)v8, 0LL);
  if ( !v8 )
    sub_1B64324(v9);
  *(_QWORD *)(v8 + 16) = piece;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)piece, v10, v11);
  AlivePieces = (System_Object_array *)WarBoardData__GetAlivePieces(this, v12);
  v16 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_WarBoardPieceData__TypeInfo, v14, v15);
  System_Predicate_object____ctor(
    v16,
    (Il2CppObject *)v8,
    Method_WarBoardData___c__DisplayClass145_0__GetPieceDispPriority_b__0__,
    0LL);
  return System_Array__FindIndex_object_(
           AlivePieces,
           (System_Predicate_T__o *)v16,
           (const MethodInfo_2F30B3C *)Method_System_Array_FindIndex_WarBoardPieceData___);
}


int32_t __fastcall WarBoardData__GetPieceMaxDispPriotiry(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceData_array *pieces; // x8

  pieces = this->fields.pieces;
  if ( !pieces )
    sub_1B64324(this);
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
  UnityEngine_Component_o *gameObject; // x0
  bool activeInHierarchy; // w8

  if ( (byte_49FA0C7 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&forceId);
    byte_49FA0C7 = 1;
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
      sub_1B64324(gameObject);
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
  __int64 v16; // x2
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v18; // x20
  Il2CppObject *v19; // x0

  if ( (byte_49FA0C3 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, *(_QWORD *)&forceId);
    sub_1B640C8(&System_Func_WarBoardPieceData__bool__TypeInfo, v9);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass99_0__GetPiecePosition_b__0__, v10);
    sub_1B640C8(&WarBoardData___c__DisplayClass99_0_TypeInfo, v11);
    sub_1B640C8(&WarBoardPieceData_TypeInfo, v12);
    byte_49FA0C3 = 1;
  }
  v13 = (WarBoardData___c__DisplayClass99_0_o *)sub_1B64314(
                                                  WarBoardData___c__DisplayClass99_0_TypeInfo,
                                                  *(_QWORD *)&forceId,
                                                  *(_QWORD *)&groupId);
  WarBoardData___c__DisplayClass99_0___ctor(v13, 0LL);
  if ( !WarBoardPieceData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardPieceData_TypeInfo);
  UniqueIndex = WarBoardPieceData__GetUniqueIndex(forceId, groupId, index, 0LL);
  if ( !v13 )
    sub_1B64324(UniqueIndex);
  v13->fields.uniqueId = UniqueIndex;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v18 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardPieceData__bool__TypeInfo, v15, v16);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v13,
    Method_WarBoardData___c__DisplayClass99_0__GetPiecePosition_b__0__,
    0LL);
  v19 = System_Linq_Enumerable__FirstOrDefault_object__48617700(
          pieces,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
  if ( v19 )
    return (int32_t)v19[4].klass;
  else
    return -1;
}


// local variable allocation has failed, the output may be wrong!
WarBoardPieceData_o *__fastcall WarBoardData__GetPiece_35061152(
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
  __int64 v11; // x2
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v13; // x20

  if ( (byte_49FA0C5 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, *(_QWORD *)&squareIndex);
    sub_1B640C8(&System_Func_WarBoardPieceData__bool__TypeInfo, v5);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass101_0__GetPiece_b__0__, v6);
    sub_1B640C8(&WarBoardData___c__DisplayClass101_0_TypeInfo, v7);
    byte_49FA0C5 = 1;
  }
  v8 = (WarBoardData___c__DisplayClass101_0_o *)sub_1B64314(
                                                  WarBoardData___c__DisplayClass101_0_TypeInfo,
                                                  *(_QWORD *)&squareIndex,
                                                  method);
  WarBoardData___c__DisplayClass101_0___ctor(v8, 0LL);
  if ( !v8 )
    sub_1B64324(v9);
  v8->fields.squareIndex = squareIndex;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v13 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardPieceData__bool__TypeInfo, v10, v11);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v8,
    Method_WarBoardData___c__DisplayClass101_0__GetPiece_b__0__,
    0LL);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_object__48617700(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v13,
                                  (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


// local variable allocation has failed, the output may be wrong!
WarBoardPieceData_o *__fastcall WarBoardData__GetPiece_35061364(
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
  __int64 v13; // x2
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v15; // x20

  if ( (byte_49FA0C6 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, *(_QWORD *)&uniqueIndex);
    sub_1B640C8(&System_Func_WarBoardPieceData__bool__TypeInfo, v7);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass102_0__GetPiece_b__0__, v8);
    sub_1B640C8(&WarBoardData___c__DisplayClass102_0_TypeInfo, v9);
    byte_49FA0C6 = 1;
  }
  v10 = (WarBoardData___c__DisplayClass102_0_o *)sub_1B64314(
                                                   WarBoardData___c__DisplayClass102_0_TypeInfo,
                                                   *(_QWORD *)&uniqueIndex,
                                                   ignoreDead);
  WarBoardData___c__DisplayClass102_0___ctor(v10, 0LL);
  if ( !v10 )
    sub_1B64324(v11);
  v10->fields.uniqueIndex = uniqueIndex;
  v10->fields.ignoreDead = ignoreDead;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v15 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardPieceData__bool__TypeInfo, v12, v13);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v10,
    Method_WarBoardData___c__DisplayClass102_0__GetPiece_b__0__,
    0LL);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_object__48617700(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v15,
                                  (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
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
  __int64 v12; // x2
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v14; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_49FA0D0 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, *(_QWORD *)&forceId);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v5);
    sub_1B640C8(&System_Func_WarBoardPieceData__bool__TypeInfo, v6);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass116_0__GetPieces_b__0__, v7);
    sub_1B640C8(&WarBoardData___c__DisplayClass116_0_TypeInfo, v8);
    byte_49FA0D0 = 1;
  }
  v9 = (WarBoardData___c__DisplayClass116_0_o *)sub_1B64314(
                                                  WarBoardData___c__DisplayClass116_0_TypeInfo,
                                                  *(_QWORD *)&forceId,
                                                  method);
  WarBoardData___c__DisplayClass116_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_1B64324(v10);
  v9->fields.forceIdOnly = forceId << 24;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v14 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardPieceData__bool__TypeInfo, v11, v12);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass116_0__GetPieces_b__0__,
    0LL);
  v15 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v15,
                                      (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


// local variable allocation has failed, the output may be wrong!
WarBoardPieceData_array *__fastcall WarBoardData__GetPieces_35058084(
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
  __int64 v14; // x2
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v16; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  v4 = groupId;
  if ( (byte_49FA0D1 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, *(_QWORD *)&forceId);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v7);
    sub_1B640C8(&System_Func_WarBoardPieceData__bool__TypeInfo, v8);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass117_0__GetPieces_b__0__, v9);
    sub_1B640C8(&WarBoardData___c__DisplayClass117_0_TypeInfo, v10);
    byte_49FA0D1 = 1;
  }
  v11 = (WarBoardData___c__DisplayClass117_0_o *)sub_1B64314(
                                                   WarBoardData___c__DisplayClass117_0_TypeInfo,
                                                   *(_QWORD *)&forceId,
                                                   *(_QWORD *)&groupId);
  WarBoardData___c__DisplayClass117_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_1B64324(v12);
  v11->fields.forceAndGroup = (forceId << 24) | (v4 << 16);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v16 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardPieceData__bool__TypeInfo, v13, v14);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v11,
    Method_WarBoardData___c__DisplayClass117_0__GetPieces_b__0__,
    0LL);
  v17 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)v16,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v17,
                                      (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


System_String_o *__fastcall WarBoardData__GetPlayBgmName(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  struct WarBoardStageEntity_o *stageEntity; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FA0E8 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_BgmMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FA0E8 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_BgmMaster___);
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity || !Instance )
    goto LABEL_11;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               stageEntity->fields.playBgmId,
                               (const MethodInfo_30D3EF8 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return (System_String_o *)entity[1].monitor;
LABEL_11:
    sub_1B64324(Instance);
  }
  return 0LL;
}


System_Int32_array *__fastcall WarBoardData__GetPlayReinforcements(WarBoardData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *playedStageReinforcementsList; // x0

  if ( (byte_49FA101 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, method);
    byte_49FA101 = 1;
  }
  playedStageReinforcementsList = this->fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList )
    sub_1B64324(0LL);
  return System_Collections_Generic_List_int___ToArray(
           playedStageReinforcementsList,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *listEvent; // x19
  System_Predicate_object__o *v13; // x20

  if ( (byte_49FA0F1 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardEventData__Find__, *(_QWORD *)&eventId);
    sub_1B640C8(&System_Predicate_WarBoardEventData__TypeInfo, v5);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass164_0__GetPlayedEventData_b__0__, v6);
    sub_1B640C8(&WarBoardData___c__DisplayClass164_0_TypeInfo, v7);
    byte_49FA0F1 = 1;
  }
  v8 = (WarBoardData___c__DisplayClass164_0_o *)sub_1B64314(
                                                  WarBoardData___c__DisplayClass164_0_TypeInfo,
                                                  *(_QWORD *)&eventId,
                                                  method);
  WarBoardData___c__DisplayClass164_0___ctor(v8, 0LL);
  if ( !v8
    || (v8->fields.eventId = eventId,
        listEvent = (System_Collections_Generic_List_object__o *)this->fields.listEvent,
        v13 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_WarBoardEventData__TypeInfo, v10, v11),
        System_Predicate_object____ctor(
          v13,
          (Il2CppObject *)v8,
          Method_WarBoardData___c__DisplayClass164_0__GetPlayedEventData_b__0__,
          0LL),
        !listEvent) )
  {
    sub_1B64324(v9);
  }
  return (WarBoardEventData_o *)System_Collections_Generic_List_object___Find(
                                  listEvent,
                                  (System_Predicate_T__o *)v13,
                                  (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_WarBoardEventData__Find__);
}


WarBoardPieceData_o *__fastcall WarBoardData__GetPlayerMasterPiece(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  WarBoardData___c_c *v7; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *_9__104_0; // x20
  Il2CppObject *v10; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FA0C8 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, method);
    sub_1B640C8(&System_Func_WarBoardPieceData__bool__TypeInfo, v4);
    sub_1B640C8(&Method_WarBoardData___c__GetPlayerMasterPiece_b__104_0__, v5);
    sub_1B640C8(&WarBoardData___c_TypeInfo, v6);
    byte_49FA0C8 = 1;
  }
  v7 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v7 = WarBoardData___c_TypeInfo;
  }
  _9__104_0 = (System_Func_object__bool__o *)v7->static_fields->__9__104_0;
  if ( !_9__104_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = WarBoardData___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__104_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardPieceData__bool__TypeInfo, method, v2);
    System_Func_object__bool____ctor(_9__104_0, v10, Method_WarBoardData___c__GetPlayerMasterPiece_b__104_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__104_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__104_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__104_0, (int32_t)_9__104_0, v12, v13);
  }
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_object__48617700(
                                  pieces,
                                  (System_Func_TSource__bool__o *)_9__104_0,
                                  (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


WarBoardPieceData_array *__fastcall WarBoardData__GetPlayerPieces(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WarBoardData___c_c *v8; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *_9__121_0; // x20
  Il2CppObject *v11; // x21
  ServantStatusBattleListViewItem_o *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_49FA0D5 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v4);
    sub_1B640C8(&System_Func_WarBoardPieceData__bool__TypeInfo, v5);
    sub_1B640C8(&Method_WarBoardData___c__GetPlayerPieces_b__121_0__, v6);
    sub_1B640C8(&WarBoardData___c_TypeInfo, v7);
    byte_49FA0D5 = 1;
  }
  v8 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v8 = WarBoardData___c_TypeInfo;
  }
  _9__121_0 = (System_Func_object__bool__o *)v8->static_fields->__9__121_0;
  if ( !_9__121_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = WarBoardData___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__121_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardPieceData__bool__TypeInfo, method, v2);
    System_Func_object__bool____ctor(_9__121_0, v11, Method_WarBoardData___c__GetPlayerPieces_b__121_0__, 0LL);
    static_fields = (ServantStatusBattleListViewItem_o *)WarBoardData___c_TypeInfo->static_fields;
    static_fields[1].klass = (ServantStatusBattleListViewItem_c *)_9__121_0;
    sub_1B6406C(static_fields + 1, (int32_t)_9__121_0, v13, v14);
  }
  v15 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__121_0,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v15,
                                      (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
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

  if ( (byte_49FA0FC & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, commonReleaseIds);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_Distinct_int___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_int___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_49FA0FC = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    commonReleaseIds,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Collections_Generic_List_int__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
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
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
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
    sub_1B6432C(Master_object, v13);
  }
LABEL_23:
  v24 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v11,
          (const MethodInfo_2E57DA0 *)Method_System_Linq_Enumerable_Distinct_int___);
  Master_object = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                              v24,
                                                              (const MethodInfo_2E74DB0 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !Master_object )
LABEL_25:
    sub_1B64324(Master_object);
  return System_Collections_Generic_List_int___ToArray(
           Master_object,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  WarBoardPieceData_o *v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  int max_length; // w8
  WarBoardPieceData_array *v17; // x22
  unsigned int v18; // w23
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_49FA0D6 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, *(_QWORD *)&stageReinfoId);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v9);
    byte_49FA0D6 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                       *(_QWORD *)&stageReinfoId,
                                                       *(_QWORD *)&reinfoIndex);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  AlivePieces = WarBoardData__GetAlivePieces(this, v11);
  if ( !AlivePieces )
    goto LABEL_18;
  max_length = AlivePieces->max_length;
  v17 = AlivePieces;
  if ( max_length >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= max_length )
        sub_1B6432C(AlivePieces, v13);
      v13 = v17->m_Items[v18];
      if ( !v13 )
        break;
      if ( v13->fields._StageReinfoId_k__BackingField == stageReinfoId
        && v13->fields._ReinfoIndex_k__BackingField == reinfoIndex )
      {
        if ( !v10 )
          break;
        items = v10->fields._items;
        v20 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
        ++v10->fields._version;
        if ( !items )
          break;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)v13,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v13;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v13, v14, v15);
        }
      }
      max_length = v17->max_length;
      if ( (int)++v18 >= max_length )
        goto LABEL_16;
    }
LABEL_18:
    sub_1B64324(AlivePieces);
  }
LABEL_16:
  if ( !v10 )
    goto LABEL_18;
  return (WarBoardPieceData_array *)System_Collections_Generic_List_object___ToArray(
                                      v10,
                                      (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
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
  struct WarBoardStageEntity_o *stageEntity; // x8
  WarBoardData___c__DisplayClass189_0_Fields *p_fields; // x24
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_List_int__o *v29; // x23
  __int64 v30; // x1
  __int64 v31; // x2
  const MethodInfo *v32; // x2
  System_Int32_array *DeploySquareIds; // x24
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x25
  int32_t v37; // w2
  int32_t v38; // w3
  __int64 v39; // x19
  __int64 v40; // x1
  const MethodInfo *v41; // x3
  __int64 v42; // x8
  __int64 v43; // x2
  struct System_Int32_array *reinforcementsIds; // x8
  struct System_Int32_array *limitNums; // x8
  WarBoardStageReinforcementsEntity_o *v46; // x8
  struct System_Int32_array *v47; // x9
  __int64 v48; // x10
  _BOOL4 v49; // w20
  _BOOL4 IsOnce; // w27
  WarBoardData_o *v51; // x26
  const MethodInfo *v52; // x1
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x29
  __int64 v56; // x22
  System_Func_int__bool__o *v57; // x21
  System_Int32_array *v58; // x28
  int32_t v59; // w2
  int32_t v60; // w3
  _BOOL4 v61; // w28
  System_Collections_Generic_List_T__o *v62; // x19
  __int64 v63; // x1
  __int64 v64; // x2
  System_Func_object__bool__o *v65; // x21
  const MethodInfo *v66; // x3
  int32_t v67; // w2
  unsigned int max_length; // w8
  __int64 v69; // x8
  struct System_Int32_array *items; // x9
  _QWORD *v71; // x10
  __int64 size; // x11
  __int64 v73; // x9
  int32_t v74; // w1
  struct System_Int32_array *v75; // x8
  _QWORD *v76; // x9
  __int64 v77; // x10
  _QWORD *monitor; // x9
  __int64 v79; // x8
  __int64 v80; // x8
  _QWORD *v81; // x9
  __int64 forceId; // x10
  __int64 v83; // x20
  System_Int32_array *v84; // x0
  int32_t v85; // w2
  int32_t v86; // w3
  System_Int32_array *v87; // x0
  int32_t v88; // w2
  int32_t v89; // w3
  int32_t v90; // w2
  int32_t v91; // w3
  __int64 v92; // x8
  _QWORD *v93; // x9
  __int64 v94; // x10
  __int64 v95; // x8
  WarBoardData___c__DisplayClass189_0_Fields *v96; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_int__o *v97; // [xsp+10h] [xbp-70h]

  if ( (byte_49FA104 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_int____75709408, reinfoDatas);
    sub_1B640C8(&Method_BasicHelper_Any_ReinforcementsData___, v8);
    sub_1B640C8(&System_Func_int__bool__TypeInfo, v9);
    sub_1B640C8(&System_Func_ReinforcementsData__bool__TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ReinforcementsData__Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v15);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v16);
    sub_1B640C8(&ReinforcementsData_TypeInfo, v17);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v18);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass189_0__GetReinforcements_b__0__, v19);
    sub_1B640C8(&WarBoardData___c__DisplayClass189_0_TypeInfo, v20);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__1__, v21);
    sub_1B640C8(&WarBoardData___c__DisplayClass189_1_TypeInfo, v22);
    byte_49FA104 = 1;
  }
  v23 = (WarBoardData___c__DisplayClass189_0_o *)sub_1B64314(
                                                   WarBoardData___c__DisplayClass189_0_TypeInfo,
                                                   reinfoDatas,
                                                   mst);
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
  v29 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v27, v28);
  System_Collections_Generic_List_int____ctor(
    v29,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  v97 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v30, v31);
  System_Collections_Generic_List_int____ctor(
    v97,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  v96 = &v23->fields;
  if ( !p_fields->stageEntity )
    goto LABEL_65;
  DeploySquareIds = WarBoardData__GetDeploySquareIds(this, p_fields->stageEntity->fields.squareIds, v32);
  v36 = sub_1B64314(WarBoardData___c__DisplayClass189_1_TypeInfo, v34, v35);
  WarBoardData___c__DisplayClass189_1___ctor((WarBoardData___c__DisplayClass189_1_o *)v36, 0LL);
  if ( !v36 )
    goto LABEL_65;
  *(_QWORD *)(v36 + 24) = v23;
  v39 = v36 + 24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v36 + 24), (int32_t)v23, v37, v38);
  v42 = *(_QWORD *)(v36 + 24);
  *(_DWORD *)(v36 + 16) = 0;
  if ( !v42 )
    goto LABEL_65;
  v43 = 0LL;
  while ( 1 )
  {
    ReinfocementsPieces = *(WarBoardStageReinforcementsEntity_o **)(v42 + 16);
    if ( !ReinfocementsPieces )
      goto LABEL_65;
    reinforcementsIds = ReinfocementsPieces->fields.reinforcementsIds;
    if ( !reinforcementsIds )
      goto LABEL_65;
    if ( (int)v43 >= (signed int)reinforcementsIds->max_length )
      break;
    limitNums = ReinfocementsPieces->fields.limitNums;
    if ( !limitNums )
      goto LABEL_65;
    if ( (unsigned int)v43 >= limitNums->max_length )
      goto LABEL_66;
    if ( limitNums->m_Items[(int)v43 + 1] < 1 )
    {
      v49 = 0;
    }
    else
    {
      ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)WarBoardData__GetReinfocementsPieces(
                                                                     this,
                                                                     ReinfocementsPieces->fields.id,
                                                                     v43,
                                                                     v41);
      if ( !ReinfocementsPieces )
        goto LABEL_65;
      if ( !*(_QWORD *)v39 )
        goto LABEL_65;
      v46 = ReinfocementsPieces;
      ReinfocementsPieces = *(WarBoardStageReinforcementsEntity_o **)(*(_QWORD *)v39 + 16LL);
      if ( !ReinfocementsPieces )
        goto LABEL_65;
      v47 = ReinfocementsPieces->fields.limitNums;
      if ( !v47 )
        goto LABEL_65;
      v48 = *(int *)(v36 + 16);
      if ( (unsigned int)v48 >= v47->max_length )
        goto LABEL_66;
      v49 = v47->m_Items[v48 + 1] <= v46->fields.forceId;
    }
    IsOnce = WarBoardStageReinforcementsEntity__IsOnce(ReinfocementsPieces, 0LL);
    v51 = this;
    ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)WarBoardData__GetPlayReinforcements(this, v52);
    v55 = *(_QWORD *)v39;
    if ( !*(_QWORD *)v39 )
      goto LABEL_65;
    v56 = v39;
    v57 = *(System_Func_int__bool__o **)(v55 + 24);
    v58 = (System_Int32_array *)ReinfocementsPieces;
    if ( !v57 )
    {
      v57 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v53, v54);
      System_Func_int__bool____ctor(
        v57,
        (Il2CppObject *)v55,
        Method_WarBoardData___c__DisplayClass189_0__GetReinforcements_b__0__,
        0LL);
      *(_QWORD *)(v55 + 24) = v57;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v55 + 24), (int32_t)v57, v59, v60);
    }
    v61 = BasicHelper__Any_int__48383472(
            v58,
            (System_Func_T__bool__o *)v57,
            (const MethodInfo_2E245F0 *)Method_BasicHelper_Any_int____75709408);
    v62 = (System_Collections_Generic_List_T__o *)*reinfoDatas;
    v65 = (System_Func_object__bool__o *)sub_1B64314(System_Func_ReinforcementsData__bool__TypeInfo, v63, v64);
    System_Func_object__bool____ctor(
      v65,
      (Il2CppObject *)v36,
      Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__1__,
      0LL);
    ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)BasicHelper__Any_object_(
                                                                   v62,
                                                                   (System_Func_T__bool__o *)v65,
                                                                   (const MethodInfo_2E24870 *)Method_BasicHelper_Any_ReinforcementsData___);
    if ( !DeploySquareIds )
      goto LABEL_65;
    v67 = *(_DWORD *)(v36 + 16);
    max_length = DeploySquareIds->max_length;
    if ( v67 >= max_length )
      goto LABEL_66;
    if ( (unsigned __int8)ReinfocementsPieces & 1 | (IsOnce && v61 || v49 || DeploySquareIds->m_Items[v67 + 1] < 0) )
    {
      if ( !*(_QWORD *)v56 )
        goto LABEL_65;
      v69 = *(_QWORD *)(*(_QWORD *)v56 + 16LL);
      if ( !v69 )
        goto LABEL_65;
      v39 = v56;
      this = v51;
      WarBoardData__SaveHoldReinforcements(v51, *(_DWORD *)(v69 + 20), v67, v66);
    }
    else
    {
      if ( !v29 )
        goto LABEL_65;
      items = v29->fields._items;
      v71 = Method_System_Collections_Generic_List_int__Add__;
      ++v29->fields._version;
      if ( !items )
        goto LABEL_65;
      size = v29->fields._size;
      this = v51;
      v39 = v56;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v29,
          v67,
          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
        max_length = DeploySquareIds->max_length;
      }
      else
      {
        v29->fields._size = size + 1;
        items->m_Items[size + 1] = v67;
      }
      v73 = *(int *)(v36 + 16);
      ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)v97;
      if ( (unsigned int)v73 >= max_length )
LABEL_66:
        sub_1B6432C(ReinfocementsPieces, v40);
      if ( !v97 )
        goto LABEL_65;
      v74 = DeploySquareIds->m_Items[v73 + 1];
      v75 = v97->fields._items;
      v76 = Method_System_Collections_Generic_List_int__Add__;
      ++v97->fields._version;
      if ( !v75 )
        goto LABEL_65;
      v77 = v97->fields._size;
      if ( (unsigned int)v77 >= v75->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v97,
          v74,
          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
      }
      else
      {
        v97->fields._size = v77 + 1;
        v75->m_Items[v77 + 1] = v74;
      }
      ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !ReinfocementsPieces )
        goto LABEL_65;
      monitor = ReinfocementsPieces[6].monitor;
      if ( !monitor )
        goto LABEL_65;
      v79 = *(int *)(v36 + 16);
      if ( (unsigned int)v79 >= DeploySquareIds->max_length )
        goto LABEL_66;
      ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)monitor[29];
      if ( !ReinfocementsPieces )
        goto LABEL_65;
      v40 = (unsigned int)DeploySquareIds->m_Items[v79 + 1];
      v80 = *(_QWORD *)&ReinfocementsPieces->fields.warBoardStageId;
      v81 = Method_System_Collections_Generic_List_int__Add__;
      ++ReinfocementsPieces->fields.groupId;
      if ( !v80 )
        goto LABEL_65;
      forceId = ReinfocementsPieces->fields.forceId;
      if ( (unsigned int)forceId >= *(_DWORD *)(v80 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)ReinfocementsPieces,
          v40,
          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
      }
      else
      {
        ReinfocementsPieces->fields.forceId = forceId + 1;
        *(_DWORD *)(v80 + 4 * forceId + 32) = v40;
      }
    }
    v42 = *(_QWORD *)(v36 + 24);
    v43 = (unsigned int)(*(_DWORD *)(v36 + 16) + 1);
    *(_DWORD *)(v36 + 16) = v43;
    if ( !v42 )
      goto LABEL_65;
  }
  if ( !v29 )
    goto LABEL_65;
  if ( v29->fields._size < 1 )
    return;
  v83 = sub_1B64314(ReinforcementsData_TypeInfo, v40, v43);
  ReinforcementsData___ctor((ReinforcementsData_o *)v83, 0LL);
  if ( !v96->stageEntity )
    goto LABEL_65;
  if ( !v83 )
    goto LABEL_65;
  *(_DWORD *)(v83 + 16) = v96->stageEntity->fields.id;
  v84 = System_Collections_Generic_List_int___ToArray(
          v29,
          (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)(v83 + 24) = v84;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v83 + 24), (int32_t)v84, v85, v86);
  ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)v97;
  if ( !v97
    || (v87 = System_Collections_Generic_List_int___ToArray(
                v97,
                (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__),
        *(_QWORD *)(v83 + 32) = v87,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v83 + 32), (int32_t)v87, v88, v89),
        (ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)*reinfoDatas) == 0LL)
    || (v92 = *(_QWORD *)&ReinfocementsPieces->fields.warBoardStageId,
        v93 = Method_System_Collections_Generic_List_ReinforcementsData__Add__,
        ++ReinfocementsPieces->fields.groupId,
        !v92) )
  {
LABEL_65:
    sub_1B64324(ReinfocementsPieces);
  }
  v94 = ReinfocementsPieces->fields.forceId;
  if ( (unsigned int)v94 >= *(_DWORD *)(v92 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)ReinfocementsPieces,
      (Il2CppObject *)v83,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
  }
  else
  {
    v95 = v92 + 8 * v94;
    ReinfocementsPieces->fields.forceId = v94 + 1;
    *(_QWORD *)(v95 + 32) = v83;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v95 + 32), v83, v90, v91);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
  __int64 v12; // x2
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v14; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_49FA0CA & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, isPlayerGroup);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v5);
    sub_1B640C8(&System_Func_WarBoardPieceData__bool__TypeInfo, v6);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass106_0__GetServantPieces_b__0__, v7);
    sub_1B640C8(&WarBoardData___c__DisplayClass106_0_TypeInfo, v8);
    byte_49FA0CA = 1;
  }
  v9 = (WarBoardData___c__DisplayClass106_0_o *)sub_1B64314(
                                                  WarBoardData___c__DisplayClass106_0_TypeInfo,
                                                  isPlayerGroup,
                                                  method);
  WarBoardData___c__DisplayClass106_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_1B64324(v10);
  v9->fields.isPlayerGroup = isPlayerGroup;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v14 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardPieceData__bool__TypeInfo, v11, v12);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass106_0__GetServantPieces_b__0__,
    0LL);
  v15 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v15,
                                      (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
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
  __int64 v11; // x2
  System_Collections_Generic_IEnumerable_TSource__o *squares; // x19
  System_Func_object__bool__o *v13; // x20

  if ( (byte_49FA0DB & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___, *(_QWORD *)&squareIndex);
    sub_1B640C8(&System_Func_WarBoardSquareData__bool__TypeInfo, v5);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass128_0__GetSquare_b__0__, v6);
    sub_1B640C8(&WarBoardData___c__DisplayClass128_0_TypeInfo, v7);
    byte_49FA0DB = 1;
  }
  v8 = (WarBoardData___c__DisplayClass128_0_o *)sub_1B64314(
                                                  WarBoardData___c__DisplayClass128_0_TypeInfo,
                                                  *(_QWORD *)&squareIndex,
                                                  method);
  WarBoardData___c__DisplayClass128_0___ctor(v8, 0LL);
  if ( !v8 )
    sub_1B64324(v9);
  v8->fields.squareIndex = squareIndex;
  squares = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.squares;
  v13 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardSquareData__bool__TypeInfo, v10, v11);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v8,
    Method_WarBoardData___c__DisplayClass128_0__GetSquare_b__0__,
    0LL);
  return (WarBoardSquareData_o *)System_Linq_Enumerable__FirstOrDefault_object__48617700(
                                   squares,
                                   (System_Func_TSource__bool__o *)v13,
                                   (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
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
  __int64 v11; // x2
  struct WarBoardDataEntity_o *serverData; // x8
  System_Object_array *svtInfo; // x19
  System_Func_object__bool__o *v14; // x20

  if ( (byte_49FA0EB & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Find_WarBoardUserServantData___, *(_QWORD *)&stageBossIdx);
    sub_1B640C8(&System_Func_WarBoardUserServantData__bool__TypeInfo, v5);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass153_0__GetStageBossData_b__0__, v6);
    sub_1B640C8(&WarBoardData___c__DisplayClass153_0_TypeInfo, v7);
    byte_49FA0EB = 1;
  }
  v8 = (WarBoardData___c__DisplayClass153_0_o *)sub_1B64314(
                                                  WarBoardData___c__DisplayClass153_0_TypeInfo,
                                                  *(_QWORD *)&stageBossIdx,
                                                  method);
  WarBoardData___c__DisplayClass153_0___ctor(v8, 0LL);
  if ( !v8 || (v8->fields.stageBossIdx = stageBossIdx, (serverData = this->fields.serverData) == 0LL) )
    sub_1B64324(v9);
  svtInfo = (System_Object_array *)serverData->fields.svtInfo;
  v14 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardUserServantData__bool__TypeInfo, v10, v11);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v8,
    Method_WarBoardData___c__DisplayClass153_0__GetStageBossData_b__0__,
    0LL);
  return (WarBoardUserServantData_o *)BasicHelper__Find_object_(
                                        svtInfo,
                                        (System_Func_T__bool__o *)v14,
                                        (const MethodInfo_2E2543C *)Method_BasicHelper_Find_WarBoardUserServantData___);
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
  __int64 v11; // x2
  System_Collections_Generic_IEnumerable_TSource__o *treasures; // x19
  System_Func_object__bool__o *v13; // x20

  if ( (byte_49FA0E0 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___, *(_QWORD *)&squareIndex);
    sub_1B640C8(&System_Func_WarBoardTreasureData__bool__TypeInfo, v5);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass137_0__GetTreasure_b__0__, v6);
    sub_1B640C8(&WarBoardData___c__DisplayClass137_0_TypeInfo, v7);
    byte_49FA0E0 = 1;
  }
  v8 = (WarBoardData___c__DisplayClass137_0_o *)sub_1B64314(
                                                  WarBoardData___c__DisplayClass137_0_TypeInfo,
                                                  *(_QWORD *)&squareIndex,
                                                  method);
  WarBoardData___c__DisplayClass137_0___ctor(v8, 0LL);
  if ( !v8 )
    sub_1B64324(v9);
  v8->fields.squareIndex = squareIndex;
  treasures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.treasures;
  v13 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardTreasureData__bool__TypeInfo, v10, v11);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v8,
    Method_WarBoardData___c__DisplayClass137_0__GetTreasure_b__0__,
    0LL);
  return (WarBoardTreasureData_o *)System_Linq_Enumerable__FirstOrDefault_object__48617700(
                                     treasures,
                                     (System_Func_TSource__bool__o *)v13,
                                     (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___);
}


System_Int32_array *__fastcall WarBoardData__GetTreasureIdList(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_int__o *v7; // x19
  __int64 v8; // x0
  __int64 treasureId; // x1
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8
  struct WarBoardTreasureData_SaveData_array *treasureSaves; // x20
  int max_length; // w8
  unsigned int v13; // w21
  WarBoardTreasureData_SaveData_o *v14; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10

  if ( (byte_49FA0CF & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v6);
    byte_49FA0CF = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  localSaveData = this->fields.localSaveData;
  if ( !localSaveData )
    goto LABEL_18;
  treasureSaves = localSaveData->fields.treasureSaves;
  if ( !treasureSaves )
    goto LABEL_18;
  max_length = treasureSaves->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
        sub_1B6432C(v8, treasureId);
      v14 = treasureSaves->m_Items[v13];
      if ( !v14 )
        break;
      if ( v14->fields.isUse )
      {
        if ( !v7 )
          break;
        treasureId = (unsigned int)v14->fields.treasureId;
        items = v7->fields._items;
        v16 = Method_System_Collections_Generic_List_int__Add__;
        ++v7->fields._version;
        if ( !items )
          break;
        size = v7->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v7,
            treasureId,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v7->fields._size = size + 1;
          items->m_Items[size + 1] = treasureId;
        }
      }
      max_length = treasureSaves->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_16;
    }
LABEL_18:
    sub_1B64324(v8);
  }
LABEL_16:
  if ( !v7 )
    goto LABEL_18;
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *listUiData; // x19
  System_Predicate_object__o *v13; // x20

  if ( (byte_49FA108 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardUiData__Find__, *(_QWORD *)&squareIndex);
    sub_1B640C8(&System_Predicate_WarBoardUiData__TypeInfo, v5);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass193_0__GetUiData_b__0__, v6);
    sub_1B640C8(&WarBoardData___c__DisplayClass193_0_TypeInfo, v7);
    byte_49FA108 = 1;
  }
  v8 = (WarBoardData___c__DisplayClass193_0_o *)sub_1B64314(
                                                  WarBoardData___c__DisplayClass193_0_TypeInfo,
                                                  *(_QWORD *)&squareIndex,
                                                  method);
  WarBoardData___c__DisplayClass193_0___ctor(v8, 0LL);
  if ( !v8
    || (v8->fields.squareIndex = squareIndex,
        listUiData = (System_Collections_Generic_List_object__o *)this->fields.listUiData,
        v13 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_WarBoardUiData__TypeInfo, v10, v11),
        System_Predicate_object____ctor(
          v13,
          (Il2CppObject *)v8,
          Method_WarBoardData___c__DisplayClass193_0__GetUiData_b__0__,
          0LL),
        !listUiData) )
  {
    sub_1B64324(v9);
  }
  return (WarBoardUiData_o *)System_Collections_Generic_List_object___Find(
                               listUiData,
                               (System_Predicate_T__o *)v13,
                               (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_WarBoardUiData__Find__);
}


WarBoardUiData_o *__fastcall WarBoardData__GetUiData_35092672(
        WarBoardData_o *this,
        System_Int32_array *pieceIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_List_object__o *listUiData; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  System_Predicate_object__o *v15; // x20

  if ( (byte_49FA109 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardUiData__Find__, pieceIndex);
    sub_1B640C8(&System_Predicate_WarBoardUiData__TypeInfo, v5);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass194_0__GetUiData_b__0__, v6);
    sub_1B640C8(&WarBoardData___c__DisplayClass194_0_TypeInfo, v7);
    byte_49FA109 = 1;
  }
  v8 = sub_1B64314(WarBoardData___c__DisplayClass194_0_TypeInfo, pieceIndex, method);
  WarBoardData___c__DisplayClass194_0___ctor((WarBoardData___c__DisplayClass194_0_o *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = pieceIndex,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)pieceIndex, v10, v11),
        listUiData = (System_Collections_Generic_List_object__o *)this->fields.listUiData,
        v15 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_WarBoardUiData__TypeInfo, v13, v14),
        System_Predicate_object____ctor(
          v15,
          (Il2CppObject *)v8,
          Method_WarBoardData___c__DisplayClass194_0__GetUiData_b__0__,
          0LL),
        !listUiData) )
  {
    sub_1B64324(v9);
  }
  return (WarBoardUiData_o *)System_Collections_Generic_List_object___Find(
                               listUiData,
                               (System_Predicate_T__o *)v15,
                               (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_WarBoardUiData__Find__);
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
  __int64 v11; // x2
  System_Collections_Generic_IEnumerable_TSource__o *treasures; // x19
  System_Func_object__bool__o *v13; // x20

  if ( (byte_49FA0E1 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___, *(_QWORD *)&squareIndex);
    sub_1B640C8(&System_Func_WarBoardTreasureData__bool__TypeInfo, v5);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass138_0__GetUnusedTreasure_b__0__, v6);
    sub_1B640C8(&WarBoardData___c__DisplayClass138_0_TypeInfo, v7);
    byte_49FA0E1 = 1;
  }
  v8 = (WarBoardData___c__DisplayClass138_0_o *)sub_1B64314(
                                                  WarBoardData___c__DisplayClass138_0_TypeInfo,
                                                  *(_QWORD *)&squareIndex,
                                                  method);
  WarBoardData___c__DisplayClass138_0___ctor(v8, 0LL);
  if ( !v8 )
    sub_1B64324(v9);
  v8->fields.squareIndex = squareIndex;
  treasures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.treasures;
  v13 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardTreasureData__bool__TypeInfo, v10, v11);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v8,
    Method_WarBoardData___c__DisplayClass138_0__GetUnusedTreasure_b__0__,
    0LL);
  return (WarBoardTreasureData_o *)System_Linq_Enumerable__FirstOrDefault_object__48617700(
                                     treasures,
                                     (System_Func_TSource__bool__o *)v13,
                                     (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___);
}


System_Int32_array *__fastcall WarBoardData__GetUseCommonReleaseIds(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_int__o *v12; // x19
  void *Master_object; // x0
  struct WarBoardDataEntity_o *serverData; // x8
  WarBoardEventScriptMaster_o *v15; // x20
  int32_t stageId; // w21
  __int64 v17; // x1
  int v18; // w8
  void *v19; // x21
  unsigned int v20; // w23
  __int64 v21; // x22
  __int64 v22; // x25
  __int64 v23; // x8
  unsigned __int64 v24; // x26
  struct System_Int32_array *items; // x9
  _QWORD *v26; // x10
  __int64 size; // x11
  __int64 v28; // x25
  __int64 v29; // x8
  unsigned __int64 v30; // x26
  int v31; // w8
  void *v32; // x22
  unsigned int v33; // w27
  struct System_Int32_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0

  if ( (byte_49FA0FB & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_WarBoardEventMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMaster_WarBoardEventScriptMaster___, v4);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_Distinct_int___, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_int___, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v11);
    byte_49FA0FB = 1;
  }
  v12 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_WarBoardEventScriptMaster___);
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_46;
  v15 = (WarBoardEventScriptMaster_o *)Master_object;
  stageId = serverData->fields.stageId;
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_WarBoardEventMaster___);
  if ( !Master_object )
    goto LABEL_46;
  Master_object = WarBoardEventMaster__GetListByStageId((WarBoardEventMaster_o *)Master_object, stageId, 0LL);
  if ( !Master_object )
    goto LABEL_46;
  v18 = *((_DWORD *)Master_object + 6);
  v19 = Master_object;
  if ( v18 >= 1 )
  {
    v20 = 0;
    do
    {
      if ( v20 >= v18 )
        goto LABEL_47;
      v21 = *((_QWORD *)v19 + (int)v20 + 4);
      if ( !v21 )
        goto LABEL_46;
      v22 = *(_QWORD *)(v21 + 56);
      if ( v22 )
      {
        v23 = *(_QWORD *)(v22 + 24);
        if ( v23 )
        {
          if ( (int)v23 >= 1 )
          {
            v24 = 0LL;
            while ( v24 < (unsigned int)v23 )
            {
              v17 = *(unsigned int *)(v22 + 32 + 4 * v24);
              if ( (int)v17 >= 1 )
              {
                if ( !v12 )
                  goto LABEL_46;
                items = v12->fields._items;
                v26 = Method_System_Collections_Generic_List_int__Add__;
                ++v12->fields._version;
                if ( !items )
                  goto LABEL_46;
                size = v12->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v12,
                    v17,
                    *(const MethodInfo_348FEDC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
                  LODWORD(v23) = *(_DWORD *)(v22 + 24);
                }
                else
                {
                  v12->fields._size = size + 1;
                  items->m_Items[size + 1] = v17;
                }
              }
              if ( (__int64)++v24 >= (int)v23 )
                goto LABEL_24;
            }
LABEL_47:
            sub_1B6432C(Master_object, v17);
          }
LABEL_24:
          v28 = *(_QWORD *)(v21 + 48);
          if ( !v28 )
            goto LABEL_46;
          v29 = *(_QWORD *)(v28 + 24);
          if ( (int)v29 >= 1 )
          {
            v30 = 0LL;
            while ( 1 )
            {
              if ( v30 >= (unsigned int)v29 )
                goto LABEL_47;
              if ( !v15 )
                goto LABEL_46;
              Master_object = WarBoardEventScriptMaster__GetList(v15, *(_DWORD *)(v28 + 4 * v30 + 32), 0LL);
              if ( !Master_object )
                goto LABEL_46;
              v31 = *((_DWORD *)Master_object + 6);
              v32 = Master_object;
              if ( v31 >= 1 )
                break;
LABEL_42:
              LODWORD(v29) = *(_DWORD *)(v28 + 24);
              if ( (__int64)++v30 >= (int)v29 )
                goto LABEL_43;
            }
            v33 = 0;
            while ( v33 < v31 )
            {
              Master_object = (void *)*((_QWORD *)v32 + (int)v33 + 4);
              if ( !Master_object )
                goto LABEL_46;
              if ( *((_DWORD *)Master_object + 6) == 2 )
              {
                Master_object = (void *)WarBoardEventScriptEntity__GetChangeWinCondition(
                                          (WarBoardEventScriptEntity_o *)Master_object,
                                          0LL);
                if ( ((unsigned int)Master_object & 0x80000000) == 0 )
                {
                  if ( !v12 )
                    goto LABEL_46;
                  v34 = v12->fields._items;
                  v35 = Method_System_Collections_Generic_List_int__Add__;
                  ++v12->fields._version;
                  if ( !v34 )
                    goto LABEL_46;
                  v36 = v12->fields._size;
                  v17 = (unsigned int)Master_object;
                  if ( (unsigned int)v36 >= v34->max_length )
                  {
                    System_Collections_Generic_List_int___AddWithResize(
                      v12,
                      (int32_t)Master_object,
                      *(const MethodInfo_348FEDC **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v12->fields._size = v36 + 1;
                    v34->m_Items[v36 + 1] = (int)Master_object;
                  }
                }
              }
              v31 = *((_DWORD *)v32 + 6);
              if ( (int)++v33 >= v31 )
                goto LABEL_42;
            }
            goto LABEL_47;
          }
        }
      }
LABEL_43:
      v18 = *((_DWORD *)v19 + 6);
    }
    while ( (int)++v20 < v18 );
  }
  v37 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v12,
          (const MethodInfo_2E57DA0 *)Method_System_Linq_Enumerable_Distinct_int___);
  Master_object = System_Linq_Enumerable__ToList_int_(
                    v37,
                    (const MethodInfo_2E74DB0 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !Master_object )
LABEL_46:
    sub_1B64324(Master_object);
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)Master_object,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v13; // x2
  System_Collections_Generic_IEnumerable_TSource__o *walls; // x19
  System_Func_object__bool__o *v15; // x20

  if ( (byte_49FA0E2 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardWallData___, *(_QWORD *)&squareIndex);
    sub_1B640C8(&System_Func_WarBoardWallData__bool__TypeInfo, v7);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass140_0__GetWall_b__0__, v8);
    sub_1B640C8(&WarBoardData___c__DisplayClass140_0_TypeInfo, v9);
    byte_49FA0E2 = 1;
  }
  v10 = (WarBoardData___c__DisplayClass140_0_o *)sub_1B64314(
                                                   WarBoardData___c__DisplayClass140_0_TypeInfo,
                                                   *(_QWORD *)&squareIndex,
                                                   ignoreDestroy);
  WarBoardData___c__DisplayClass140_0___ctor(v10, 0LL);
  if ( !v10 )
    sub_1B64324(v11);
  v10->fields.squareIndex = squareIndex;
  v10->fields.ignoreDestroy = ignoreDestroy;
  walls = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.walls;
  v15 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardWallData__bool__TypeInfo, v12, v13);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v10,
    Method_WarBoardData___c__DisplayClass140_0__GetWall_b__0__,
    0LL);
  return (WarBoardWallData_o *)System_Linq_Enumerable__FirstOrDefault_object__48617700(
                                 walls,
                                 (System_Func_TSource__bool__o *)v15,
                                 (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardWallData___);
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

  if ( (byte_49FA0F3 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardManager_TypeInfo, method);
    byte_49FA0F3 = 1;
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
  __int64 v8; // x2
  __int64 v9; // x8
  System_Int32_array *v10; // x20
  unsigned __int64 v11; // x24
  int32_t v12; // w23
  System_Collections_Generic_List_object__o *listPrevCond; // x21
  WarBoardPrevCondData_o *v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_49FA0FD & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__, method);
    sub_1B640C8(&WarBoardPrevCondData_TypeInfo, v3);
    byte_49FA0FD = 1;
  }
  UseCommonReleaseIds = (WarBoardData_o *)WarBoardData__GetUseCommonReleaseIds(this, method);
  PrevCondIds = WarBoardData__GetPrevCondIds(UseCommonReleaseIds, (System_Int32_array *)UseCommonReleaseIds, v5);
  if ( !PrevCondIds )
    goto LABEL_14;
  v9 = *(_QWORD *)&PrevCondIds->max_length;
  v10 = PrevCondIds;
  if ( (int)v9 >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v9 )
        sub_1B6432C(PrevCondIds, v7);
      v12 = v10->m_Items[v11 + 1];
      listPrevCond = (System_Collections_Generic_List_object__o *)this->fields.listPrevCond;
      v14 = (WarBoardPrevCondData_o *)sub_1B64314(WarBoardPrevCondData_TypeInfo, v7, v8);
      WarBoardPrevCondData___ctor_35277884(v14, v12, -1, 0LL);
      if ( !listPrevCond )
        break;
      items = listPrevCond->fields._items;
      v18 = Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__;
      ++listPrevCond->fields._version;
      if ( !items )
        break;
      size = listPrevCond->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          listPrevCond,
          (Il2CppObject *)v14,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        listPrevCond->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v14;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v14, v15, v16);
      }
      LODWORD(v9) = v10->max_length;
      if ( (__int64)++v11 >= (int)v9 )
        return;
    }
LABEL_14:
    sub_1B64324(PrevCondIds);
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
  __int64 v18; // x2
  struct WarBoardDataEntity_o *serverData; // x8
  System_Object_array *bossBattleInfo; // x21
  System_Func_object__bool__o *v21; // x22
  Il2CppObject *object; // x0
  Il2CppObject *v23; // x21
  Il2CppObject *v24; // x20
  Il2CppObject *valuea; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FA0F6 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Find_WarBoardBossBattleData___, *(_QWORD *)&bossId);
    sub_1B640C8(&System_Convert_TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v11);
    sub_1B640C8(&System_Func_WarBoardBossBattleData__bool__TypeInfo, v12);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass172_0__IsBossInfo_b__0__, v13);
    sub_1B640C8(&WarBoardData___c__DisplayClass172_0_TypeInfo, v14);
    byte_49FA0F6 = 1;
  }
  valuea = 0LL;
  v15 = (WarBoardData___c__DisplayClass172_0_o *)sub_1B64314(
                                                   WarBoardData___c__DisplayClass172_0_TypeInfo,
                                                   *(_QWORD *)&bossId,
                                                   key);
  WarBoardData___c__DisplayClass172_0___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_17;
  v15->fields.bossId = bossId;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_17;
  bossBattleInfo = (System_Object_array *)serverData->fields.bossBattleInfo;
  v21 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardBossBattleData__bool__TypeInfo, v17, v18);
  System_Func_object__bool____ctor(
    v21,
    (Il2CppObject *)v15,
    Method_WarBoardData___c__DisplayClass172_0__IsBossInfo_b__0__,
    0LL);
  object = BasicHelper__Find_object_(
             bossBattleInfo,
             (System_Func_T__bool__o *)v21,
             (const MethodInfo_2E2543C *)Method_BasicHelper_Find_WarBoardBossBattleData___);
  if ( !object )
    return value == 0;
  v23 = object;
  monitor = (System_Collections_Generic_Dictionary_object__object__o *)object[1].monitor;
  if ( !monitor )
    goto LABEL_17;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          monitor,
          (Il2CppObject *)key,
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return value == 0;
  monitor = (System_Collections_Generic_Dictionary_object__object__o *)v23[1].monitor;
  if ( !monitor )
LABEL_17:
    sub_1B64324(monitor);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          monitor,
          (Il2CppObject *)key,
          &valuea,
          (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return value == 0;
  v24 = valuea;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToInt32(v24, 0LL) == value;
}


bool __fastcall WarBoardData__IsDefenseTarget(
        WarBoardData_o *this,
        System_Int32_array **data,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  _QWORD *v9; // x23
  __int64 v10; // x8
  __int64 v11; // x0
  __int64 v12; // x0
  System_Int32_array **v13; // x8
  System_Int32_array *v14; // x1
  WarBoardStageNpcMaster_o *stageNpcMaster; // x0
  struct WarBoardStageEntity_o *stageEntity; // x8
  System_Int32_array *DefenseTarget; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  WarBoardStageNpcEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FA0F4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_int___, data);
    byte_49FA0F4 = 1;
  }
  v9 = Method_System_Array_Empty_int___;
  entity = 0LL;
  v10 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v10 )
  {
    sub_1BB6000(Method_System_Array_Empty_int___);
    v10 = v9[7];
  }
  v11 = *(_QWORD *)(v10 + 16);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1BB5FA4(v11);
  if ( !*(_DWORD *)(v11 + 224) )
    j_il2cpp_runtime_class_init_0(v11);
  v12 = *(_QWORD *)(v9[7] + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1BB5FA4(v12);
  v13 = *(System_Int32_array ***)(v12 + 184);
  v14 = *v13;
  *data = *v13;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)data, (int32_t)v14, forceId, groupId);
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)data, (int32_t)DefenseTarget, v18, v19);
  }
  stageNpcMaster = (WarBoardStageNpcMaster_o *)BasicHelper__IsNullOrEmpty(
                                                 (System_Collections_ICollection_o *)*data,
                                                 0LL);
  if ( ((unsigned __int8)stageNpcMaster & 1) != 0 )
    return 0;
  if ( !*data )
LABEL_20:
    sub_1B64324(stageNpcMaster);
  return ((*data)->max_length & 1) == 0;
}


bool __fastcall WarBoardData__IsLose(WarBoardData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  WarBoardPieceData_array *Pieces_35058084; // x0
  const MethodInfo *v5; // x1
  int max_length; // w8
  WarBoardPieceData_array *v7; // x20
  int v8; // w24
  int v9; // w22
  int v10; // w23
  WarBoardPieceData_o *v11; // x21

  Pieces_35058084 = WarBoardData__GetPieces_35058084(this, 0, 0, v2);
  if ( !Pieces_35058084 )
LABEL_18:
    sub_1B64324(Pieces_35058084);
  max_length = Pieces_35058084->max_length;
  v7 = Pieces_35058084;
  if ( max_length < 1 )
    return 1;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  do
  {
    if ( v8 >= (unsigned int)max_length )
      sub_1B6432C(Pieces_35058084, v5);
    v11 = v7->m_Items[v8];
    if ( !v11 )
      goto LABEL_18;
    if ( !v11->fields._isDead_k__BackingField )
    {
      Pieces_35058084 = (WarBoardPieceData_array *)WarBoardPieceData__HasAvailablePermanentSleepBuff(v11, 0LL);
      if ( ((unsigned __int8)Pieces_35058084 & 1) == 0 )
      {
        Pieces_35058084 = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster(v11, 0LL);
        if ( ((unsigned __int8)Pieces_35058084 & 1) != 0 )
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
  WarBoardPieceData_array *Pieces_35058084; // x0
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
          Pieces_35058084 = WarBoardData__GetPieces_35058084(this, i, v10, v2);
          if ( !Pieces_35058084 )
            goto LABEL_28;
          max_length = Pieces_35058084->max_length;
          v14 = Pieces_35058084;
          if ( max_length >= 1 )
          {
            v15 = 0;
            while ( 1 )
            {
              if ( v15 >= max_length )
                sub_1B6432C(Pieces_35058084, v12);
              v16 = &v14->obj.klass + (int)v15;
              v17 = v16[4];
              if ( !v17 )
                break;
              Pieces_35058084 = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster(
                                                             (WarBoardPieceData_o *)v16[4],
                                                             0LL);
              if ( ((unsigned __int8)Pieces_35058084 & 1) == 0 && !LOBYTE(v17->_1.klass) )
              {
                ++v7;
                v8 += *((unsigned __int8 *)&v17->_1.this_arg.bits + 4);
              }
              max_length = v14->max_length;
              if ( (int)++v15 >= max_length )
                goto LABEL_16;
            }
LABEL_28:
            sub_1B64324(Pieces_35058084);
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
  WarBoardCommonReleaseEntity_array *List; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_Dictionary_int__bool__o *v18; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  int max_length; // w8
  unsigned int v22; // w21
  int32_t *v23; // x25
  int32_t v24; // w8
  int32_t v25; // w1
  const MethodInfo_31150E8 *v26; // x3
  bool v27; // w2
  System_Collections_Generic_Dictionary_int__bool__o *v28; // x0
  WarBoardData___c_c *v29; // x0
  System_Func_KeyValuePair_int__bool___bool__o *_9__95_0; // x20
  Il2CppObject *v31; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  int32_t v34; // w3

  if ( (byte_49FA0C0 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v7);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__bool____, v9);
    sub_1B640C8(&System_Func_KeyValuePair_int__bool___bool__TypeInfo, v10);
    sub_1B640C8(&Method_WarBoardData___c__IsReachableWinConditions_b__95_0__, v11);
    sub_1B640C8(&WarBoardData___c_TypeInfo, v12);
    byte_49FA0C0 = 1;
  }
  if ( (this->fields.winCondId & 0x80000000) != 0 )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  if ( !Master_object )
    goto LABEL_33;
  List = WarBoardCommonReleaseMaster__GetList(
           (WarBoardCommonReleaseMaster_o *)Master_object,
           this->fields.winCondId,
           0LL);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)List, 0LL) )
    return 0;
  v18 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1B64314(
                                                                System_Collections_Generic_Dictionary_int__bool__TypeInfo,
                                                                v15,
                                                                v16);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v18,
    (const MethodInfo_3114728 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  if ( !List )
LABEL_33:
    sub_1B64324(Master_object);
  max_length = List->max_length;
  if ( max_length >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      if ( v22 >= max_length )
        sub_1B6432C(Master_object, v19);
      v23 = (int32_t *)List->m_Items[v22];
      if ( !v23 || !v18 )
        goto LABEL_33;
      if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
              v18,
              v23[6],
              (const MethodInfo_31152FC *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
        break;
      Master_object = (Il2CppObject *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                        v18,
                                        v23[6],
                                        (const MethodInfo_3115058 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
        break;
LABEL_25:
      max_length = List->max_length;
      if ( (int)++v22 >= max_length )
        goto LABEL_26;
    }
    v24 = v23[7];
    if ( v24 == 1 )
    {
      v25 = v23[6];
      v26 = (const MethodInfo_31150E8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__;
      v27 = v23[10] == 0;
    }
    else
    {
      if ( v24 != 5 )
      {
        v25 = v23[6];
        v26 = (const MethodInfo_31150E8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__;
        v28 = v18;
        v27 = 0;
        goto LABEL_24;
      }
      v25 = v23[6];
      v26 = (const MethodInfo_31150E8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__;
      v27 = v23[10] < 1;
    }
    v28 = v18;
LABEL_24:
    System_Collections_Generic_Dictionary_int__bool___set_Item(v28, v25, v27, v26);
    goto LABEL_25;
  }
LABEL_26:
  v29 = WarBoardData___c_TypeInfo;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v29 = WarBoardData___c_TypeInfo;
  }
  _9__95_0 = v29->static_fields->__9__95_0;
  if ( !_9__95_0 )
  {
    if ( !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      v29 = WarBoardData___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v29->static_fields->__9;
    _9__95_0 = (System_Func_KeyValuePair_int__bool___bool__o *)sub_1B64314(
                                                                 System_Func_KeyValuePair_int__bool___bool__TypeInfo,
                                                                 v19,
                                                                 v20);
    System_Func_KeyValuePair_int__bool___bool____ctor(
      _9__95_0,
      v31,
      Method_WarBoardData___c__IsReachableWinConditions_b__95_0__,
      0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__95_0 = _9__95_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__95_0, (int32_t)_9__95_0, v33, v34);
  }
  return System_Linq_Enumerable__Any_KeyValuePair_int__bool__(
           (System_Collections_Generic_IEnumerable_TSource__o *)v18,
           (System_Func_TSource__bool__o *)_9__95_0,
           (const MethodInfo_2E472FC *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__bool____);
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
  struct WarBoardStageEntity_o *stageEntity; // x8
  void **p_entity; // x20
  bool IsOnce; // w23
  const MethodInfo *v19; // x1
  System_Int32_array *PlayReinforcements; // x25
  __int64 v21; // x1
  __int64 v22; // x2
  System_Func_int__bool__o *v23; // x26
  const MethodInfo *v24; // x2
  struct WarBoardStageReinforcementsEntity_o *entity; // x8
  char v26; // w9
  bool v27; // w23
  __int64 v28; // x1
  const MethodInfo *v29; // x3
  void *v30; // x8
  __int64 v31; // x9
  WarBoardStageReinforcementsMaster_o *v32; // x21
  int32_t v33; // w22
  int32_t v34; // w9
  __int64 v35; // x9
  __int64 v36; // x9
  _BOOL4 v37; // w9

  if ( (byte_49FA105 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_int____75709408, *(_QWORD *)&forceId);
    sub_1B640C8(&Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___, v9);
    sub_1B640C8(&DataManager_TypeInfo, v10);
    sub_1B640C8(&System_Func_int__bool__TypeInfo, v11);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass190_0__IsReinforcementsApper_b__0__, v12);
    sub_1B640C8(&WarBoardData___c__DisplayClass190_0_TypeInfo, v13);
    byte_49FA105 = 1;
  }
  v14 = (WarBoardData___c__DisplayClass190_0_o *)sub_1B64314(
                                                   WarBoardData___c__DisplayClass190_0_TypeInfo,
                                                   *(_QWORD *)&forceId,
                                                   *(_QWORD *)&groupId);
  WarBoardData___c__DisplayClass190_0___ctor(v14, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (WarBoardStageReinforcementsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
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
  PlayReinforcements = WarBoardData__GetPlayReinforcements(this, v19);
  v23 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v21, v22);
  System_Func_int__bool____ctor(
    v23,
    (Il2CppObject *)v14,
    Method_WarBoardData___c__DisplayClass190_0__IsReinforcementsApper_b__0__,
    0LL);
  Master_object = (WarBoardStageReinforcementsMaster_o *)BasicHelper__Any_int__48383472(
                                                           PlayReinforcements,
                                                           (System_Func_T__bool__o *)v23,
                                                           (const MethodInfo_2E245F0 *)Method_BasicHelper_Any_int____75709408);
  entity = v14->fields.entity;
  if ( !entity )
    goto LABEL_32;
  v26 = IsOnce & (unsigned __int8)Master_object;
  v27 = 0;
  if ( (v26 & 1) != 0 || entity->fields.forceId != forceId || entity->fields.groupId != groupId )
    return v27;
  Master_object = (WarBoardStageReinforcementsMaster_o *)WarBoardData__GetDeploySquareIds(
                                                           this,
                                                           entity->fields.squareIds,
                                                           v24);
  v30 = *p_entity;
  if ( !*p_entity || (v31 = *((_QWORD *)v30 + 5)) == 0 )
LABEL_32:
    sub_1B64324(Master_object);
  v32 = Master_object;
  v33 = 0;
  while ( 1 )
  {
    v34 = *(_DWORD *)(v31 + 24);
    v27 = v33 < v34;
    if ( v33 >= v34 )
      return v27;
    v35 = *((_QWORD *)v30 + 8);
    if ( !v35 )
      goto LABEL_32;
    if ( (unsigned int)v33 >= *(_DWORD *)(v35 + 24) )
LABEL_35:
      sub_1B6432C(Master_object, v28);
    if ( *(int *)(v35 + 4LL * v33 + 32) < 1 )
    {
      v37 = 0;
      if ( !v32 )
        goto LABEL_32;
    }
    else
    {
      Master_object = (WarBoardStageReinforcementsMaster_o *)WarBoardData__GetReinfocementsPieces(
                                                               this,
                                                               *((_DWORD *)v30 + 5),
                                                               v33,
                                                               v29);
      if ( !Master_object )
        goto LABEL_32;
      v30 = *p_entity;
      if ( !*p_entity )
        goto LABEL_32;
      v36 = *((_QWORD *)v30 + 8);
      if ( !v36 )
        goto LABEL_32;
      if ( (unsigned int)v33 >= *(_DWORD *)(v36 + 24) )
        goto LABEL_35;
      v37 = *(_DWORD *)(v36 + 4LL * v33 + 32) <= SLODWORD(Master_object->fields._MasterName_k__BackingField);
      if ( !v32 )
        goto LABEL_32;
    }
    if ( (unsigned int)v33 >= LODWORD(v32->fields._MasterName_k__BackingField) )
      goto LABEL_35;
    if ( !v37 && (*((_DWORD *)&v32->fields.list + v33) & 0x80000000) == 0 )
      return v27;
    v31 = *((_QWORD *)v30 + 5);
    ++v33;
    if ( !v31 )
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
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x20
  bool v12; // w20
  System_Type_o *Type; // x21
  intptr_t v14; // w22
  System_Type_o *TypeFromHandle; // x1
  bool v16; // w19
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF
  System_RuntimeTypeHandle_o v20; // 0:w0.4

  if ( (byte_49FA0C1 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__Dispose__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__get_Current__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__GetEnumerator__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7);
    sub_1B640C8(&System_Type_TypeInfo, v8);
    sub_1B640C8(&WarBoardChangeWinConditionTask_var, v9);
    byte_49FA0C1 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( !WarBoardData__CheckWinCond(this, method) )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 28, 0LL, 0LL);
  Instance = (Il2CppObject *)System_Linq_Enumerable__Any_object_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)EventTasks,
                               (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    WarBoardManager__AddTask_35188000((WarBoardManager_o *)Instance, 0, EventTasks, 0LL);
  }
  if ( !EventTasks )
LABEL_20:
    sub_1B64324(Instance);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)EventTasks,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_WarBoardTaskBase__GetEnumerator__);
  v19 = v18;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__MoveNext__);
    if ( !v12 )
      break;
    if ( !v19.fields._current )
      sub_1B64324(0LL);
    Type = System_Object__GetType(v19.fields._current, 0LL);
    v14 = (int)WarBoardChangeWinConditionTask_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v20.fields.value = v14;
    TypeFromHandle = System_Type__GetTypeFromHandle(v20, 0LL);
    if ( System_Type__op_Equality(Type, TypeFromHandle, 0LL) )
    {
      this->fields.winCondGroup = -1;
      break;
    }
  }
  v16 = !v12;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__Dispose__);
  return v16;
}


void __fastcall WarBoardData__JudgePrevCondData(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x0
  WarBoardCommonReleaseMaster_o *v9; // x20
  _BOOL8 v10; // x0
  Il2CppObject *current; // x21
  struct WarBoardDataEntity_o *serverData; // x8
  int32_t turn; // w1
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49FA0FF & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__, v7);
    byte_49FA0FF = 1;
  }
  memset(&v15, 0, sizeof(v15));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  if ( !this->fields.listPrevCond )
    sub_1B64324(Master_object);
  v9 = (WarBoardCommonReleaseMaster_o *)Master_object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)this->fields.listPrevCond,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__);
  v15 = v14;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__);
    if ( !v10 )
      break;
    current = v15.fields._current;
    if ( !v15.fields._current )
      sub_1B64324(v10);
    if ( (HIDWORD(v15.fields._current[1].klass) & 0x80000000) != 0 )
    {
      if ( !v9 )
        sub_1B64324(v10);
      if ( WarBoardCommonReleaseMaster__IsOpen(v9, (int32_t)v15.fields._current[1].klass, 0LL) )
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
    &v15,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__);
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
  __int64 v79; // x1
  __int64 v80; // x2
  System_Collections_Generic_List_object__o *v81; // x20
  __int64 v82; // x1
  __int64 v83; // x2
  Il2CppObject *current; // x22
  WarBoardEventData_SaveData_o *v85; // x21
  __int64 v86; // x0
  int32_t v87; // w2
  int32_t v88; // w3
  struct System_Object_array *items; // x8
  _QWORD *v90; // x9
  __int64 size; // x10
  Il2CppClass **v92; // x0
  WarBoardData_o *v93; // x21
  int32_t v94; // w2
  int32_t v95; // w3
  int32_t v96; // w2
  int32_t v97; // w3
  struct System_Collections_Generic_List_WarBoardUiData__o *latestPieceActionSquareIndexes; // x1
  int32_t v99; // w2
  int32_t v100; // w3
  struct System_UInt32_array *latestBattlePieceUniqueIndexes; // x1
  __int64 v102; // x1
  __int64 v103; // x2
  System_Collections_Generic_List_object__o *v104; // x20
  __int64 v105; // x1
  __int64 v106; // x2
  Il2CppObject *v107; // x22
  WarBoardPrevCondData_SaveData_o *v108; // x21
  __int64 v109; // x0
  int32_t v110; // w2
  int32_t v111; // w3
  struct System_Object_array *v112; // x8
  _QWORD *v113; // x9
  __int64 v114; // x10
  Il2CppClass **v115; // x0
  WarBoardData_o *v116; // x21
  int32_t v117; // w2
  int32_t v118; // w3
  __int64 v119; // x1
  __int64 v120; // x2
  System_Collections_Generic_List_object__o *v121; // x20
  __int64 v122; // x1
  __int64 v123; // x2
  Il2CppObject *v124; // x22
  HoldReinforcementsData_SaveData_o *v125; // x21
  __int64 v126; // x0
  int32_t v127; // w2
  int32_t v128; // w3
  struct System_Object_array *v129; // x8
  _QWORD *v130; // x9
  __int64 v131; // x10
  Il2CppClass **v132; // x0
  WarBoardData_o *v133; // x21
  int32_t v134; // w2
  int32_t v135; // w3
  struct WarBoardData_WarBoardLocalSaveData_o *v136; // x20
  int32_t v137; // w2
  int32_t v138; // w3
  __int64 v139; // x1
  __int64 v140; // x2
  System_Collections_Generic_List_object__o *v141; // x20
  __int64 v142; // x1
  __int64 v143; // x2
  Il2CppObject *v144; // x22
  WarBoardUiData_SaveData_o *v145; // x21
  __int64 v146; // x0
  int32_t v147; // w2
  int32_t v148; // w3
  struct System_Object_array *v149; // x8
  _QWORD *v150; // x9
  __int64 v151; // x10
  Il2CppClass **v152; // x0
  WarBoardData_o *v153; // x21
  int32_t v154; // w2
  int32_t v155; // w3
  struct WarBoardDataEntity_o *v156; // x8
  unsigned int v157; // w0
  WarBoardData_o *v158; // x21
  int v159; // w20
  int32_t v160; // w2
  int32_t v161; // w3
  __int64 v162; // x2
  unsigned __int64 v163; // x22
  __int64 v164; // x24
  __int64 v165; // x25
  struct WarBoardDataEntity_o *v166; // x9
  struct WarBoardSquareIndexData_array *squareIndexInfo; // x9
  unsigned int *reinforcementsSaveList; // x26
  WarBoardSquareIndexData_o *v169; // x21
  WarBoardSquareIndexData_SaveData_o *v170; // x20
  int32_t v171; // w2
  int32_t v172; // w3
  struct WarBoardDataEntity_o *v173; // x8
  unsigned int v174; // w0
  WarBoardData_o *v175; // x21
  int v176; // w20
  int32_t v177; // w2
  int32_t v178; // w3
  __int64 v179; // x2
  int32_t v180; // w3
  unsigned __int64 v181; // x22
  __int64 v182; // x24
  __int64 v183; // x25
  struct WarBoardDataEntity_o *v184; // x8
  struct WarBoardBossBattleData_array *bossBattleInfo; // x8
  struct System_Collections_Generic_List_int__o *playedStageReinforcementsList; // x26
  WarBoardBossBattleData_o *v187; // x21
  WarBoardBossBattleData_SaveData_o *v188; // x20
  const MethodInfo *v189; // x2
  int32_t v190; // w2
  int32_t v191; // w3
  struct System_Collections_Generic_List_WarBoardPrevCondData__o *bgAnimationInfo_k__BackingField; // x1
  __int64 v193; // x1
  __int64 v194; // x2
  WarBoardData_o *v195; // x8
  MiniMessagePack_MiniMessagePacker_o *v196; // x19
  System_Byte_array *v197; // x19
  WarBoardData_c *v198; // x8
  System_String_o *WARBOARDDATA_SAVEDATA_KEY; // x20
  System_String_o *v200; // x19
  __int64 v201; // x0
  System_Collections_Generic_List_Enumerator_object__o v202; // [xsp+8h] [xbp-F8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v203; // [xsp+20h] [xbp-E0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v204; // [xsp+40h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v205; // [xsp+60h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v206; // [xsp+80h] [xbp-80h] BYREF

  v4 = this;
  if ( (byte_49FA0B8 & 1) == 0 )
  {
    sub_1B640C8(&System_Convert_TypeInfo, onBoardSkillUpdate);
    sub_1B640C8(&EncryptedPlayerPrefs_TypeInfo, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__Dispose__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__MoveNext__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__get_Current__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__get_Current__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__get_Current__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__get_Current__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardUiData_SaveData__Add__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__Add__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardEventData_SaveData__Add__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__Add__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__, v24);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__, v25);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardEventData__GetEnumerator__, v26);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__, v27);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__ToArray__, v28);
    sub_1B640C8(&Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__ToArray__, v29);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v30);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardEventData_SaveData__ToArray__, v31);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardUiData_SaveData__ToArray__, v32);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData___ctor__, v33);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardEventData_SaveData___ctor__, v34);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardUiData_SaveData___ctor__, v35);
    sub_1B640C8(&Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData___ctor__, v36);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardPrevCondData_SaveData__TypeInfo, v37);
    sub_1B640C8(&System_Collections_Generic_List_HoldReinforcementsData_SaveData__TypeInfo, v38);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardEventData_SaveData__TypeInfo, v39);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardUiData_SaveData__TypeInfo, v40);
    sub_1B640C8(&MiniMessagePack_MiniMessagePacker_TypeInfo, v41);
    sub_1B640C8(&WarBoardSquareIndexData_SaveData___TypeInfo, v42);
    sub_1B640C8(&WarBoardBossBattleData_SaveData___TypeInfo, v43);
    sub_1B640C8(&WarBoardBossBattleData_SaveData_TypeInfo, v44);
    sub_1B640C8(&WarBoardPrevCondData_SaveData_TypeInfo, v45);
    sub_1B640C8(&WarBoardUiData_SaveData_TypeInfo, v46);
    sub_1B640C8(&WarBoardEventData_SaveData_TypeInfo, v47);
    sub_1B640C8(&WarBoardSquareIndexData_SaveData_TypeInfo, v48);
    sub_1B640C8(&HoldReinforcementsData_SaveData_TypeInfo, v49);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v50);
    this = (WarBoardData_o *)sub_1B640C8(&WarBoardData_TypeInfo, v51);
    byte_49FA0B8 = 1;
  }
  memset(&v206, 0, sizeof(v206));
  memset(&v205, 0, sizeof(v205));
  memset(&v204, 0, sizeof(v204));
  memset(&v203, 0, sizeof(v203));
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
    sub_1B6432C(this, onBoardSkillUpdate);
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
  this = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  v81 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WarBoardEventData_SaveData__TypeInfo,
                                                       v79,
                                                       v80);
  System_Collections_Generic_List_object____ctor(
    v81,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardEventData_SaveData___ctor__);
  this = (WarBoardData_o *)v4->fields.listEvent;
  if ( !this )
    goto LABEL_129;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v202,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_WarBoardEventData__GetEnumerator__);
  v206 = v202;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v206,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__MoveNext__) )
  {
    current = v206.fields._current;
    v85 = (WarBoardEventData_SaveData_o *)sub_1B64314(WarBoardEventData_SaveData_TypeInfo, v82, v83);
    WarBoardEventData_SaveData___ctor_35241616(v85, (WarBoardEventData_o *)current, 0LL);
    if ( !v81 )
      sub_1B64324(v86);
    items = v81->fields._items;
    v90 = Method_System_Collections_Generic_List_WarBoardEventData_SaveData__Add__;
    ++v81->fields._version;
    if ( !items )
      sub_1B64324(v86);
    size = v81->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v81,
        (Il2CppObject *)v85,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
    }
    else
    {
      v92 = &items->obj.klass + size;
      v81->fields._size = size + 1;
      v92[4] = (Il2CppClass *)v85;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v92 + 4), (int32_t)v85, v87, v88);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v206,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__Dispose__);
  if ( !v81 )
    goto LABEL_129;
  v93 = *p_localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_object___ToArray(
                             v81,
                             (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_WarBoardEventData_SaveData__ToArray__);
  if ( !v93 )
    goto LABEL_129;
  v93->fields.localSaveData = (struct WarBoardData_WarBoardLocalSaveData_o *)this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v93->fields.localSaveData, (int32_t)this, v94, v95);
  this = *p_localSaveData;
  if ( !*p_localSaveData )
    goto LABEL_129;
  this->fields._maxForceId_k__BackingField = v4->fields.winCondId;
  latestPieceActionSquareIndexes = (struct System_Collections_Generic_List_WarBoardUiData__o *)v4->fields.latestPieceActionSquareIndexes;
  this->fields.listUiData = latestPieceActionSquareIndexes;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.listUiData,
    (int32_t)latestPieceActionSquareIndexes,
    v96,
    v97);
  this = (WarBoardData_o *)v4->fields.localSaveData;
  if ( !this )
    goto LABEL_129;
  latestBattlePieceUniqueIndexes = v4->fields.latestBattlePieceUniqueIndexes;
  *(_QWORD *)&this->fields.isPlayedHalfDeadMessage = latestBattlePieceUniqueIndexes;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.isPlayedHalfDeadMessage,
    (int32_t)latestBattlePieceUniqueIndexes,
    v99,
    v100);
  v104 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                        System_Collections_Generic_List_WarBoardPrevCondData_SaveData__TypeInfo,
                                                        v102,
                                                        v103);
  System_Collections_Generic_List_object____ctor(
    v104,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData___ctor__);
  this = (WarBoardData_o *)v4->fields.listPrevCond;
  if ( !this )
    goto LABEL_129;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v202,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__);
  v205 = v202;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v205,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__) )
  {
    v107 = v205.fields._current;
    v108 = (WarBoardPrevCondData_SaveData_o *)sub_1B64314(WarBoardPrevCondData_SaveData_TypeInfo, v105, v106);
    WarBoardPrevCondData_SaveData___ctor_35241676(v108, (WarBoardPrevCondData_o *)v107, 0LL);
    if ( !v104 )
      sub_1B64324(v109);
    v112 = v104->fields._items;
    v113 = Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__Add__;
    ++v104->fields._version;
    if ( !v112 )
      sub_1B64324(v109);
    v114 = v104->fields._size;
    if ( (unsigned int)v114 >= v112->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v104,
        (Il2CppObject *)v108,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v113[4] + 192LL) + 112LL));
    }
    else
    {
      v115 = &v112->obj.klass + v114;
      v104->fields._size = v114 + 1;
      v115[4] = (Il2CppClass *)v108;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v115 + 4), (int32_t)v108, v110, v111);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v205,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__);
  if ( !v104 )
    goto LABEL_129;
  v116 = *p_localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_object___ToArray(
                             v104,
                             (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__ToArray__);
  if ( !v116 )
    goto LABEL_129;
  v116->fields.listEvent = (struct System_Collections_Generic_List_WarBoardEventData__o *)this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v116->fields.listEvent, (int32_t)this, v117, v118);
  v121 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                        System_Collections_Generic_List_HoldReinforcementsData_SaveData__TypeInfo,
                                                        v119,
                                                        v120);
  System_Collections_Generic_List_object____ctor(
    v121,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData___ctor__);
  this = (WarBoardData_o *)v4->fields.reinforcementsSaveList;
  if ( !this )
    goto LABEL_129;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v202,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
  v204 = v202;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v204,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__) )
  {
    v124 = v204.fields._current;
    v125 = (HoldReinforcementsData_SaveData_o *)sub_1B64314(HoldReinforcementsData_SaveData_TypeInfo, v122, v123);
    HoldReinforcementsData_SaveData___ctor_35241728(v125, (HoldReinforcementsData_o *)v124, 0LL);
    if ( !v121 )
      sub_1B64324(v126);
    v129 = v121->fields._items;
    v130 = Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__Add__;
    ++v121->fields._version;
    if ( !v129 )
      sub_1B64324(v126);
    v131 = v121->fields._size;
    if ( (unsigned int)v131 >= v129->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v121,
        (Il2CppObject *)v125,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v130[4] + 192LL) + 112LL));
    }
    else
    {
      v132 = &v129->obj.klass + v131;
      v121->fields._size = v131 + 1;
      v132[4] = (Il2CppClass *)v125;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v132 + 4), (int32_t)v125, v127, v128);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v204,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
  if ( !v121 )
    goto LABEL_129;
  v133 = *p_localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_object___ToArray(
                             v121,
                             (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__ToArray__);
  if ( !v133 )
    goto LABEL_129;
  *(_QWORD *)&v133->fields.winCondId = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v133->fields.winCondId, (int32_t)this, v134, v135);
  this = (WarBoardData_o *)v4->fields.playedStageReinforcementsList;
  if ( !this )
    goto LABEL_129;
  v136 = v4->fields.localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_int___ToArray(
                             (System_Collections_Generic_List_int__o *)this,
                             (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v136 )
    goto LABEL_129;
  v136->fields.playedReinforcements = (struct System_Int32_array *)this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v136->fields.playedReinforcements, (int32_t)this, v137, v138);
  v141 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                        System_Collections_Generic_List_WarBoardUiData_SaveData__TypeInfo,
                                                        v139,
                                                        v140);
  System_Collections_Generic_List_object____ctor(
    v141,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardUiData_SaveData___ctor__);
  this = (WarBoardData_o *)v4->fields.listUiData;
  if ( !this )
    goto LABEL_129;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v202,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__);
  v203 = v202;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v203,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__) )
  {
    v144 = v203.fields._current;
    v145 = (WarBoardUiData_SaveData_o *)sub_1B64314(WarBoardUiData_SaveData_TypeInfo, v142, v143);
    WarBoardUiData_SaveData___ctor_35241788(v145, (WarBoardUiData_o *)v144, 0LL);
    if ( !v141 )
      sub_1B64324(v146);
    v149 = v141->fields._items;
    v150 = Method_System_Collections_Generic_List_WarBoardUiData_SaveData__Add__;
    ++v141->fields._version;
    if ( !v149 )
      sub_1B64324(v146);
    v151 = v141->fields._size;
    if ( (unsigned int)v151 >= v149->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v141,
        (Il2CppObject *)v145,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v150[4] + 192LL) + 112LL));
    }
    else
    {
      v152 = &v149->obj.klass + v151;
      v141->fields._size = v151 + 1;
      v152[4] = (Il2CppClass *)v145;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v152 + 4), (int32_t)v145, v147, v148);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v203,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__);
  if ( !v141 )
    goto LABEL_129;
  v153 = *p_localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_object___ToArray(
                             v141,
                             (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_WarBoardUiData_SaveData__ToArray__);
  if ( !v153
    || (v153->fields.latestBattlePieceUniqueIndexes = (struct System_UInt32_array *)this,
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&v153->fields.latestBattlePieceUniqueIndexes,
          (int32_t)this,
          v154,
          v155),
        (v156 = v4->fields.serverData) == 0LL)
    || (v157 = System_Linq_Enumerable__Count_object_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v156->fields.squareIndexInfo,
                 (const MethodInfo_2E55CB4 *)Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___),
        v158 = *p_localSaveData,
        v159 = v157,
        this = (WarBoardData_o *)sub_1B64170(WarBoardSquareIndexData_SaveData___TypeInfo, v157),
        !v158) )
  {
LABEL_129:
    sub_1B64324(this);
  }
  v158->fields.reinforcementsSaveList = (struct System_Collections_Generic_List_HoldReinforcementsData__o *)this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v158->fields.reinforcementsSaveList, (int32_t)this, v160, v161);
  if ( v159 >= 1 )
  {
    v163 = 0LL;
    v164 = (unsigned int)v159;
    v165 = 8LL;
    while ( *p_localSaveData )
    {
      v166 = v4->fields.serverData;
      if ( !v166 )
        break;
      squareIndexInfo = v166->fields.squareIndexInfo;
      if ( !squareIndexInfo )
        break;
      if ( v163 >= squareIndexInfo->max_length )
        goto LABEL_130;
      reinforcementsSaveList = (unsigned int *)(*p_localSaveData)->fields.reinforcementsSaveList;
      v169 = *(WarBoardSquareIndexData_o **)((char *)&squareIndexInfo->obj.klass + v165 * 4);
      v170 = (WarBoardSquareIndexData_SaveData_o *)sub_1B64314(
                                                     WarBoardSquareIndexData_SaveData_TypeInfo,
                                                     onBoardSkillUpdate,
                                                     v162);
      WarBoardSquareIndexData_SaveData___ctor_35241868(v170, v169, 0LL);
      if ( !reinforcementsSaveList )
        break;
      if ( v170 )
      {
        this = (WarBoardData_o *)sub_1B64204(v170, *(_QWORD *)(*(_QWORD *)reinforcementsSaveList + 64LL));
        if ( !this )
        {
LABEL_139:
          v201 = sub_1B64348(this);
          sub_1B641F0(v201, 0LL);
        }
      }
      if ( v163 >= reinforcementsSaveList[6] )
        goto LABEL_130;
      *(_QWORD *)&reinforcementsSaveList[v165] = v170;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&reinforcementsSaveList[v165], (int32_t)v170, v171, v172);
      ++v163;
      v165 += 2LL;
      if ( v164 == v163 )
        goto LABEL_106;
    }
    goto LABEL_129;
  }
LABEL_106:
  v173 = v4->fields.serverData;
  if ( !v173 )
    goto LABEL_129;
  v174 = System_Linq_Enumerable__Count_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v173->fields.bossBattleInfo,
           (const MethodInfo_2E55CB4 *)Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___);
  v175 = *p_localSaveData;
  v176 = v174;
  this = (WarBoardData_o *)sub_1B64170(WarBoardBossBattleData_SaveData___TypeInfo, v174);
  if ( !v175 )
    goto LABEL_129;
  v175->fields.playedStageReinforcementsList = (struct System_Collections_Generic_List_int__o *)this;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&v175->fields.playedStageReinforcementsList,
    (int32_t)this,
    v177,
    v178);
  this = *p_localSaveData;
  if ( v176 >= 1 )
  {
    v181 = 0LL;
    v182 = (unsigned int)v176;
    v183 = 32LL;
    while ( this )
    {
      v184 = v4->fields.serverData;
      if ( !v184 )
        break;
      bossBattleInfo = v184->fields.bossBattleInfo;
      if ( !bossBattleInfo )
        break;
      if ( v181 >= bossBattleInfo->max_length )
        goto LABEL_130;
      playedStageReinforcementsList = this->fields.playedStageReinforcementsList;
      v187 = *(WarBoardBossBattleData_o **)((char *)&bossBattleInfo->obj.klass + v183);
      v188 = (WarBoardBossBattleData_SaveData_o *)sub_1B64314(
                                                    WarBoardBossBattleData_SaveData_TypeInfo,
                                                    onBoardSkillUpdate,
                                                    v179);
      WarBoardBossBattleData_SaveData___ctor_35036840(v188, v187, v189);
      if ( !playedStageReinforcementsList )
        break;
      if ( v188 )
      {
        this = (WarBoardData_o *)sub_1B64204(v188, playedStageReinforcementsList->klass->_1.element_class);
        if ( !this )
          goto LABEL_139;
      }
      if ( v181 >= (unsigned int)playedStageReinforcementsList->fields._size )
        goto LABEL_130;
      *(System_Collections_Generic_List_int__c **)((char *)&playedStageReinforcementsList->klass + v183) = (System_Collections_Generic_List_int__c *)v188;
      sub_1B6406C(
        (ServantStatusBattleListViewItem_o *)((char *)playedStageReinforcementsList + v183),
        (int32_t)v188,
        v190,
        v191);
      this = *p_localSaveData;
      ++v181;
      v183 += 8LL;
      if ( v182 == v181 )
        goto LABEL_119;
    }
    goto LABEL_129;
  }
LABEL_119:
  if ( !this )
    goto LABEL_129;
  bgAnimationInfo_k__BackingField = (struct System_Collections_Generic_List_WarBoardPrevCondData__o *)v4->fields._bgAnimationInfo_k__BackingField;
  this->fields.listPrevCond = bgAnimationInfo_k__BackingField;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.listPrevCond,
    (int32_t)bgAnimationInfo_k__BackingField,
    v179,
    v180);
  v195 = *p_localSaveData;
  if ( !*p_localSaveData )
    goto LABEL_129;
  v195->fields._CurrentMemberCount_k__BackingField = v4->fields._ContinueConsumeType_k__BackingField;
  LOBYTE(v195->fields._ContinueConsumeType_k__BackingField) = v4->fields._IsContinue_k__BackingField;
  BYTE1(v195->fields._ContinueConsumeType_k__BackingField) = v4->fields._IsNextTurn_k__BackingField;
  v195->fields._CurrentPartyCost_k__BackingField = v4->fields.localSaveTiming;
  v196 = (MiniMessagePack_MiniMessagePacker_o *)sub_1B64314(MiniMessagePack_MiniMessagePacker_TypeInfo, v193, v194);
  MiniMessagePack_MiniMessagePacker___ctor(v196, 0LL);
  if ( !v196 )
    goto LABEL_129;
  v197 = MiniMessagePack_MiniMessagePacker__PackClass(v196, (Il2CppObject *)*p_localSaveData, 0LL);
  v198 = WarBoardData_TypeInfo;
  if ( !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    v198 = WarBoardData_TypeInfo;
  }
  WARBOARDDATA_SAVEDATA_KEY = v198->static_fields->WARBOARDDATA_SAVEDATA_KEY;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v200 = System_Convert__ToBase64String(v197, 0LL);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SetString(WARBOARDDATA_SAVEDATA_KEY, v200, 0LL);
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
  __int64 v19; // x2
  System_Collections_Generic_List_T__o *reinforcementsSaveList; // x21
  System_Func_object__bool__o *v21; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  _BOOL8 v24; // x0
  int32_t v25; // w21
  int32_t v26; // w22
  HoldReinforcementsData_o *v27; // x20
  int32_t v28; // w2
  int32_t v29; // w3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x8
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49FA102 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_HoldReinforcementsData___, *(_QWORD *)&stageReinforcementsId);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__get_Current__, v9);
    sub_1B640C8(&System_Func_HoldReinforcementsData__bool__TypeInfo, v10);
    sub_1B640C8(&HoldReinforcementsData_TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_HoldReinforcementsData__Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__, v13);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass187_0__SaveHoldReinforcements_b__0__, v14);
    sub_1B640C8(&WarBoardData___c__DisplayClass187_0_TypeInfo, v15);
    byte_49FA102 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  v16 = (WarBoardData___c__DisplayClass187_0_o *)sub_1B64314(
                                                   WarBoardData___c__DisplayClass187_0_TypeInfo,
                                                   *(_QWORD *)&stageReinforcementsId,
                                                   *(_QWORD *)&index);
  WarBoardData___c__DisplayClass187_0___ctor(v16, 0LL);
  if ( !v16 )
    goto LABEL_20;
  v16->fields.stageReinforcementsId = stageReinforcementsId;
  v16->fields.index = index;
  reinforcementsSaveList = (System_Collections_Generic_List_T__o *)this->fields.reinforcementsSaveList;
  v21 = (System_Func_object__bool__o *)sub_1B64314(System_Func_HoldReinforcementsData__bool__TypeInfo, v18, v19);
  System_Func_object__bool____ctor(
    v21,
    (Il2CppObject *)v16,
    Method_WarBoardData___c__DisplayClass187_0__SaveHoldReinforcements_b__0__,
    0LL);
  if ( !BasicHelper__Any_object_(
          reinforcementsSaveList,
          (System_Func_T__bool__o *)v21,
          (const MethodInfo_2E24870 *)Method_BasicHelper_Any_HoldReinforcementsData___) )
  {
    v25 = v16->fields.stageReinforcementsId;
    v26 = v16->fields.index;
    v27 = (HoldReinforcementsData_o *)sub_1B64314(HoldReinforcementsData_TypeInfo, v22, v23);
    HoldReinforcementsData___ctor_35278188(v27, v25, v26, 1, 0LL);
    v17 = (System_Collections_Generic_List_object__o *)this->fields.reinforcementsSaveList;
    if ( v17 )
    {
      items = v17->fields._items;
      v31 = Method_System_Collections_Generic_List_HoldReinforcementsData__Add__;
      ++v17->fields._version;
      if ( items )
      {
        size = v17->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v17,
            (Il2CppObject *)v27,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          v17->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v27;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)v27, v28, v29);
        }
        return;
      }
    }
LABEL_20:
    sub_1B64324(v17);
  }
  v17 = (System_Collections_Generic_List_object__o *)this->fields.reinforcementsSaveList;
  if ( !v17 )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    v17,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
  v35 = v34;
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v35,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__);
    if ( !v24 )
      break;
    if ( !v35.fields._current )
      sub_1B64324(v24);
    if ( LODWORD(v35.fields._current[1].klass) == v16->fields.stageReinforcementsId
      && HIDWORD(v35.fields._current[1].klass) == v16->fields.index )
    {
      HoldReinforcementsData__IncreaseHoldNum((HoldReinforcementsData_o *)v35.fields._current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v35,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
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

  if ( (byte_49FA100 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&stageReinforcementsId);
    byte_49FA100 = 1;
  }
  playedStageReinforcementsList = this->fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList
    || (items = playedStageReinforcementsList->fields._items,
        v7 = Method_System_Collections_Generic_List_int__Add__,
        ++playedStageReinforcementsList->fields._version,
        !items) )
  {
    sub_1B64324(playedStageReinforcementsList);
  }
  size = playedStageReinforcementsList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      playedStageReinforcementsList,
      stageReinforcementsId,
      *(const MethodInfo_348FEDC **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
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
  const MethodInfo *v22; // x2
  WarBoardSquareData_o *Square; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *v26; // x24
  WarBoardSquareData_o *v27; // x22
  System_Collections_Generic_List_object__o *v28; // x24
  int32_t v29; // w2
  int32_t v30; // w3
  System_Func_object__bool__o *v31; // x25
  __int64 v32; // x1
  __int64 v33; // x2
  System_Collections_Generic_List_object__o *v34; // x24
  int32_t v35; // w26
  WarBoardData_SquareRangeSearch_o *v36; // x25
  int32_t v37; // w2
  int32_t v38; // w3
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  struct System_Int32_array *linkedSquares; // x8
  __int64 v44; // x8
  unsigned __int64 v45; // x28
  __int64 v46; // x29
  __int64 v47; // x24
  int32_t v48; // w2
  int32_t v49; // w3
  __int64 v50; // x23
  __int64 v51; // x2
  struct System_Int32_array *v52; // x8
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *v53; // x25
  System_Func_object__bool__o *v54; // x26
  __int64 v55; // x2
  const MethodInfo *v56; // x4
  System_Collections_Generic_List_T__o *v57; // x25
  System_Func_object__bool__o *v58; // x26
  struct System_Int32_array *v59; // x8

  if ( (byte_49FA0D9 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_WarBoardData_SquareRangeSearch___, *(_QWORD *)&start);
    sub_1B640C8(&Method_System_Linq_Enumerable_All_WarBoardData_SquareRangeSearch___, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardData_SquareRangeSearch___, v9);
    sub_1B640C8(&System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardData_SquareRangeSearch__TypeInfo, v13);
    sub_1B640C8(&WarBoardData_SquareRangeSearch_TypeInfo, v14);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass125_0__SearchInRangeSquares_b__0__, v15);
    sub_1B640C8(&WarBoardData___c__DisplayClass125_0_TypeInfo, v16);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__1__, v17);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__2__, v18);
    sub_1B640C8(&WarBoardData___c__DisplayClass125_1_TypeInfo, v19);
    byte_49FA0D9 = 1;
  }
  v20 = (WarBoardData___c__DisplayClass125_0_o *)sub_1B64314(
                                                   WarBoardData___c__DisplayClass125_0_TypeInfo,
                                                   *(_QWORD *)&start,
                                                   *(_QWORD *)&range);
  WarBoardData___c__DisplayClass125_0___ctor(v20, 0LL);
  if ( !v20 )
    goto LABEL_29;
  v20->fields.start = start;
  Square = WarBoardData__GetSquare(this, start, v22);
  if ( Square )
  {
    v26 = *rangeSearches;
    v27 = Square;
    if ( !*rangeSearches )
    {
      v28 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                           System_Collections_Generic_List_WarBoardData_SquareRangeSearch__TypeInfo,
                                                           v24,
                                                           v25);
      System_Collections_Generic_List_object____ctor(
        v28,
        (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch___ctor__);
      *rangeSearches = (System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *)v28;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)rangeSearches, (int32_t)v28, v29, v30);
      v26 = *rangeSearches;
    }
    v31 = (System_Func_object__bool__o *)sub_1B64314(
                                           System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo,
                                           v24,
                                           v25);
    System_Func_object__bool____ctor(
      v31,
      (Il2CppObject *)v20,
      Method_WarBoardData___c__DisplayClass125_0__SearchInRangeSquares_b__0__,
      0LL);
    v21 = System_Linq_Enumerable__FirstOrDefault_object__48617700(
            (System_Collections_Generic_IEnumerable_TSource__o *)v26,
            (System_Func_TSource__bool__o *)v31,
            (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardData_SquareRangeSearch___);
    if ( v21 )
    {
      HIDWORD(v21[1].klass) = range;
    }
    else
    {
      v34 = (System_Collections_Generic_List_object__o *)*rangeSearches;
      v35 = v20->fields.start;
      v36 = (WarBoardData_SquareRangeSearch_o *)sub_1B64314(WarBoardData_SquareRangeSearch_TypeInfo, v32, v33);
      WarBoardData_SquareRangeSearch___ctor(v36, v35, range, 0LL);
      if ( !v34 )
        goto LABEL_29;
      items = v34->fields._items;
      v40 = Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch__Add__;
      ++v34->fields._version;
      if ( !items )
        goto LABEL_29;
      size = v34->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v34,
          (Il2CppObject *)v36,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v42 = &items->obj.klass + size;
        v34->fields._size = size + 1;
        v42[4] = (Il2CppClass *)v36;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v42 + 4), (int32_t)v36, v37, v38);
      }
    }
    v20->fields.nextRange = range - 1;
    if ( range - 1 >= 0 )
    {
      linkedSquares = v27->fields.linkedSquares;
      if ( !linkedSquares )
        goto LABEL_29;
      v44 = *(_QWORD *)&linkedSquares->max_length;
      if ( (int)v44 >= 1 )
      {
        v45 = 0LL;
        v46 = (unsigned int)v44;
        while ( 1 )
        {
          v47 = sub_1B64314(WarBoardData___c__DisplayClass125_1_TypeInfo, v32, v33);
          WarBoardData___c__DisplayClass125_1___ctor((WarBoardData___c__DisplayClass125_1_o *)v47, 0LL);
          if ( !v47 )
            break;
          *(_QWORD *)(v47 + 24) = v20;
          v50 = v47 + 24;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v47 + 24), (int32_t)v20, v48, v49);
          v52 = v27->fields.linkedSquares;
          if ( !v52 )
            break;
          if ( v45 >= v52->max_length )
            goto LABEL_30;
          *(_DWORD *)(v47 + 16) = v52->m_Items[v45 + 1];
          v53 = *rangeSearches;
          v54 = (System_Func_object__bool__o *)sub_1B64314(
                                                 System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo,
                                                 v32,
                                                 v51);
          System_Func_object__bool____ctor(
            v54,
            (Il2CppObject *)v47,
            Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__1__,
            0LL);
          v21 = (Il2CppObject *)System_Linq_Enumerable__All_object_(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)v53,
                                  (System_Func_TSource__bool__o *)v54,
                                  (const MethodInfo_2E45664 *)Method_System_Linq_Enumerable_All_WarBoardData_SquareRangeSearch___);
          if ( ((unsigned __int8)v21 & 1) != 0
            || (v57 = (System_Collections_Generic_List_T__o *)*rangeSearches,
                v58 = (System_Func_object__bool__o *)sub_1B64314(
                                                       System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo,
                                                       v32,
                                                       v55),
                System_Func_object__bool____ctor(
                  v58,
                  (Il2CppObject *)v47,
                  Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__2__,
                  0LL),
                v21 = (Il2CppObject *)BasicHelper__Any_object_(
                                        v57,
                                        (System_Func_T__bool__o *)v58,
                                        (const MethodInfo_2E24870 *)Method_BasicHelper_Any_WarBoardData_SquareRangeSearch___),
                ((unsigned __int8)v21 & 1) != 0) )
          {
            v59 = v27->fields.linkedSquares;
            if ( !v59 )
              break;
            if ( v45 >= v59->max_length )
LABEL_30:
              sub_1B6432C(v21, v32);
            if ( !*(_QWORD *)v50 )
              break;
            WarBoardData__SearchInRangeSquares(
              this,
              v59->m_Items[v45 + 1],
              *(_DWORD *)(*(_QWORD *)v50 + 20LL),
              rangeSearches,
              v56);
          }
          if ( v46 == ++v45 )
            return;
        }
LABEL_29:
        sub_1B64324(v21);
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
  WarBoardPieceData_o *Piece_35061152; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_HashSet_int__o *v22; // x23
  const MethodInfo *v23; // x2
  WarBoardSquareData_o *Square; // x0
  const MethodInfo *v25; // x2
  WarBoardSquareData_o *v26; // x24
  WarBoardPieceData_o *v27; // x25
  __int64 v28; // x1
  struct System_Int32_array *linkedSquares; // x24
  __int64 v30; // x8
  unsigned __int64 v31; // x25
  int32_t v32; // w22

  v7 = destination;
  if ( (byte_49FA0DA & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Add__, *(_QWORD *)&destination);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Contains__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_HashSet_int__TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_Queue_int__Contains__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_Queue_int__Dequeue__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_Queue_int__Enqueue__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_Queue_int___ctor__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_Queue_int__get_Count__, v16);
    sub_1B640C8(&System_Collections_Generic_Queue_int__TypeInfo, v17);
    byte_49FA0DA = 1;
  }
  if ( v7 != current )
  {
    v18 = (System_Collections_Generic_Queue_int__o *)sub_1B64314(
                                                       System_Collections_Generic_Queue_int__TypeInfo,
                                                       *(_QWORD *)&destination,
                                                       *(_QWORD *)&current);
    System_Collections_Generic_Queue_int____ctor(
      v18,
      (const MethodInfo_3620CF4 *)Method_System_Collections_Generic_Queue_int___ctor__);
    if ( !v18 )
LABEL_24:
      sub_1B64324(Piece_35061152);
    System_Collections_Generic_Queue_int___Enqueue(
      v18,
      v7,
      (const MethodInfo_362126C *)Method_System_Collections_Generic_Queue_int__Enqueue__);
    v22 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                         System_Collections_Generic_HashSet_int__TypeInfo,
                                                         v20,
                                                         v21);
    System_Collections_Generic_HashSet_int____ctor(
      v22,
      (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
    if ( v18->fields._size >= 1 )
    {
      do
      {
        v7 = System_Collections_Generic_Queue_int___Dequeue(
               v18,
               (const MethodInfo_36213E8 *)Method_System_Collections_Generic_Queue_int__Dequeue__);
        Square = WarBoardData__GetSquare(this, v7, v23);
        if ( !Square )
          break;
        v26 = Square;
        Piece_35061152 = WarBoardData__GetPiece_35061152(this, v7, v25);
        if ( !Piece_35061152 )
          return v7;
        if ( !checkReplaceFunc )
          goto LABEL_24;
        v27 = Piece_35061152;
        Piece_35061152 = (WarBoardPieceData_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, WarBoardPieceData_o *, _QWORD))checkReplaceFunc->fields.m_target)(
                                                  checkReplaceFunc->fields.original_method_info,
                                                  Piece_35061152,
                                                  *(_QWORD *)&checkReplaceFunc->fields.extra_arg);
        if ( ((unsigned __int8)Piece_35061152 & 1) != 0 )
        {
          WarBoardPieceData__SetSquareIndex(v27, -1, 0LL);
          return v7;
        }
        if ( !v22 )
          goto LABEL_24;
        Piece_35061152 = (WarBoardPieceData_o *)System_Collections_Generic_HashSet_int___Add(
                                                  v22,
                                                  v7,
                                                  (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
        linkedSquares = v26->fields.linkedSquares;
        if ( !linkedSquares )
          goto LABEL_24;
        v30 = *(_QWORD *)&linkedSquares->max_length;
        if ( (int)v30 >= 1 )
        {
          v31 = 0LL;
          do
          {
            if ( v31 >= (unsigned int)v30 )
              sub_1B6432C(Piece_35061152, v28);
            v32 = linkedSquares->m_Items[v31 + 1];
            Piece_35061152 = (WarBoardPieceData_o *)System_Collections_Generic_HashSet_int___Contains(
                                                      v22,
                                                      v32,
                                                      (const MethodInfo_33640A0 *)Method_System_Collections_Generic_HashSet_int__Contains__);
            if ( ((unsigned __int8)Piece_35061152 & 1) == 0 )
            {
              Piece_35061152 = (WarBoardPieceData_o *)System_Collections_Generic_Queue_int___Contains(
                                                        v18,
                                                        v32,
                                                        (const MethodInfo_36214A4 *)Method_System_Collections_Generic_Queue_int__Contains__);
              if ( ((unsigned __int8)Piece_35061152 & 1) == 0 )
                System_Collections_Generic_Queue_int___Enqueue(
                  v18,
                  v32,
                  (const MethodInfo_362126C *)Method_System_Collections_Generic_Queue_int__Enqueue__);
            }
            LODWORD(v30) = linkedSquares->max_length;
            ++v31;
          }
          while ( (__int64)v31 < (int)v30 );
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

  if ( (byte_49FA10D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, objectName);
    byte_49FA10D = 1;
  }
  bgAnimationInfo_k__BackingField = this->fields._bgAnimationInfo_k__BackingField;
  if ( !bgAnimationInfo_k__BackingField )
    sub_1B64324(0LL);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)bgAnimationInfo_k__BackingField,
    (Il2CppObject *)objectName,
    (Il2CppObject *)animName,
    (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
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
  __int64 v24; // x1
  __int64 v25; // x2
  WarBoardData___c_c *v26; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x20
  System_Func_object__int__o *_9__82_0; // x21
  Il2CppObject *v29; // x22
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  System_Object_array *v34; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  WarBoardData___c_c *v37; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x20
  System_Func_object__object__o *_9__82_1; // x21
  Il2CppObject *v40; // x22
  struct WarBoardData___c_StaticFields *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_Collections_Generic_IEnumerable_T__o *v44; // x0
  System_Collections_Generic_IEnumerable_T__o *v45; // x0
  System_Object_array *v46; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  WarBoardData___c_c *v49; // x8
  BattleServantData_array *v50; // x21
  System_Func_object__bool__o *_9__82_2; // x22
  Il2CppObject *v52; // x23
  struct WarBoardData___c_StaticFields *v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  WarBoardData___c_c *v59; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x22
  System_Func_object__int__o *_9__82_3; // x23
  Il2CppObject *v62; // x24
  struct WarBoardData___c_StaticFields *v63; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  System_Collections_Generic_IEnumerable_T__o *v66; // x23
  __int64 v67; // x1
  __int64 v68; // x2
  System_Collections_Generic_HashSet_int__o *v69; // x22
  Il2CppObject *Instance; // x0
  __int64 v71; // x1
  __int64 v72; // x2
  WarBoardData___c_c *v73; // x0
  System_Action_object__o *_9__82_4; // x21
  Il2CppObject *v75; // x22
  struct WarBoardData___c_StaticFields *v76; // x0
  int32_t v77; // w2
  int32_t v78; // w3
  __int64 v79; // x1
  struct WarBoardItemData_array *items; // x19
  int max_length; // w8
  unsigned int v82; // w20

  if ( (byte_49FA0BC & 1) == 0 )
  {
    sub_1B640C8(&System_Action_WarBoardPieceData__TypeInfo, method);
    sub_1B640C8(&Method_BasicHelper_ExcludeNull_BattleServantData___, v3);
    sub_1B640C8(&Method_BasicHelper_ForEach_WarBoardPieceData___, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderBy_WarBoardPieceData__int___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__BattleServantData___, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_BattleServantData___, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v10);
    sub_1B640C8(&System_Func_WarBoardPieceData__BattleServantData__TypeInfo, v11);
    sub_1B640C8(&System_Func_WarBoardPieceData__int__TypeInfo, v12);
    sub_1B640C8(&System_Func_WarBoardPieceData__bool__TypeInfo, v13);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor___75637208, v14);
    sub_1B640C8(&System_Collections_Generic_HashSet_int__TypeInfo, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v16);
    sub_1B640C8(&Method_WarBoardData___c__SetContinue_b__82_0__, v17);
    sub_1B640C8(&Method_WarBoardData___c__SetContinue_b__82_1__, v18);
    sub_1B640C8(&Method_WarBoardData___c__SetContinue_b__82_2__, v19);
    sub_1B640C8(&Method_WarBoardData___c__SetContinue_b__82_3__, v20);
    sub_1B640C8(&Method_WarBoardData___c__SetContinue_b__82_4__, v21);
    sub_1B640C8(&WarBoardData___c_TypeInfo, v22);
    byte_49FA0BC = 1;
  }
  PlayerPieces = WarBoardData__GetPlayerPieces(this, method);
  v26 = WarBoardData___c_TypeInfo;
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)PlayerPieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v26 = WarBoardData___c_TypeInfo;
  }
  _9__82_0 = (System_Func_object__int__o *)v26->static_fields->__9__82_0;
  if ( !_9__82_0 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = WarBoardData___c_TypeInfo;
    }
    v29 = (Il2CppObject *)v26->static_fields->__9;
    _9__82_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_WarBoardPieceData__int__TypeInfo, v24, v25);
    System_Func_object__int____ctor(_9__82_0, v29, Method_WarBoardData___c__SetContinue_b__82_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__82_0 = (struct System_Func_WarBoardPieceData__int__o *)_9__82_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__82_0, (int32_t)_9__82_0, v31, v32);
  }
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v27,
                                                               (System_Func_TSource__TKey__o *)_9__82_0,
                                                               (const MethodInfo_2E630C0 *)Method_System_Linq_Enumerable_OrderBy_WarBoardPieceData__int___);
  v34 = System_Linq_Enumerable__ToArray_object_(
          v33,
          (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
  v37 = WarBoardData___c_TypeInfo;
  v38 = (System_Collections_Generic_IEnumerable_TSource__o *)v34;
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
    _9__82_1 = (System_Func_object__object__o *)sub_1B64314(
                                                  System_Func_WarBoardPieceData__BattleServantData__TypeInfo,
                                                  v35,
                                                  v36);
    System_Func_object__object____ctor(_9__82_1, v40, Method_WarBoardData___c__SetContinue_b__82_1__, 0LL);
    v41 = WarBoardData___c_TypeInfo->static_fields;
    v41->__9__82_1 = (struct System_Func_WarBoardPieceData__BattleServantData__o *)_9__82_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v41->__9__82_1, (int32_t)_9__82_1, v42, v43);
  }
  v44 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                         v38,
                                                         (System_Func_TSource__TResult__o *)_9__82_1,
                                                         (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__BattleServantData___);
  v45 = BasicHelper__ExcludeNull_object_(
          v44,
          (const MethodInfo_2E251C4 *)Method_BasicHelper_ExcludeNull_BattleServantData___);
  v46 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v45,
          (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  v49 = WarBoardData___c_TypeInfo;
  v50 = (BattleServantData_array *)v46;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v49 = WarBoardData___c_TypeInfo;
  }
  _9__82_2 = (System_Func_object__bool__o *)v49->static_fields->__9__82_2;
  if ( !_9__82_2 )
  {
    if ( !v49->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v49);
      v49 = WarBoardData___c_TypeInfo;
    }
    v52 = (Il2CppObject *)v49->static_fields->__9;
    _9__82_2 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardPieceData__bool__TypeInfo, v47, v48);
    System_Func_object__bool____ctor(_9__82_2, v52, Method_WarBoardData___c__SetContinue_b__82_2__, 0LL);
    v53 = WarBoardData___c_TypeInfo->static_fields;
    v53->__9__82_2 = (struct System_Func_WarBoardPieceData__bool__o *)_9__82_2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v53->__9__82_2, (int32_t)_9__82_2, v54, v55);
  }
  v56 = System_Linq_Enumerable__Where_object_(
          v38,
          (System_Func_TSource__bool__o *)_9__82_2,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  v59 = WarBoardData___c_TypeInfo;
  v60 = v56;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v59 = WarBoardData___c_TypeInfo;
  }
  _9__82_3 = (System_Func_object__int__o *)v59->static_fields->__9__82_3;
  if ( !_9__82_3 )
  {
    if ( !v59->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v59);
      v59 = WarBoardData___c_TypeInfo;
    }
    v62 = (Il2CppObject *)v59->static_fields->__9;
    _9__82_3 = (System_Func_object__int__o *)sub_1B64314(System_Func_WarBoardPieceData__int__TypeInfo, v57, v58);
    System_Func_object__int____ctor(_9__82_3, v62, Method_WarBoardData___c__SetContinue_b__82_3__, 0LL);
    v63 = WarBoardData___c_TypeInfo->static_fields;
    v63->__9__82_3 = (struct System_Func_WarBoardPieceData__int__o *)_9__82_3;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v63->__9__82_3, (int32_t)_9__82_3, v64, v65);
  }
  v66 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                         v60,
                                                         (System_Func_TSource__TResult__o *)_9__82_3,
                                                         (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___);
  v69 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v67,
                                                       v68);
  System_Collections_Generic_HashSet_int____ctor_53885596(
    v69,
    v66,
    (const MethodInfo_3363A9C *)Method_System_Collections_Generic_HashSet_int___ctor___75637208);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (Il2CppObject *)Instance[36].monitor;
  if ( !Instance )
    goto LABEL_42;
  BattleData__ProcContinue((BattleData_o *)Instance, v50, v69, 0LL);
  v73 = WarBoardData___c_TypeInfo;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v73 = WarBoardData___c_TypeInfo;
  }
  _9__82_4 = (System_Action_object__o *)v73->static_fields->__9__82_4;
  if ( !_9__82_4 )
  {
    if ( !v73->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v73);
      v73 = WarBoardData___c_TypeInfo;
    }
    v75 = (Il2CppObject *)v73->static_fields->__9;
    _9__82_4 = (System_Action_object__o *)sub_1B64314(System_Action_WarBoardPieceData__TypeInfo, v71, v72);
    System_Action_object____ctor(_9__82_4, v75, Method_WarBoardData___c__SetContinue_b__82_4__, 0LL);
    v76 = WarBoardData___c_TypeInfo->static_fields;
    v76->__9__82_4 = (struct System_Action_WarBoardPieceData__o *)_9__82_4;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v76->__9__82_4, (int32_t)_9__82_4, v77, v78);
  }
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)v38,
    (System_Action_T__o *)_9__82_4,
    (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_WarBoardPieceData___);
  items = this->fields.items;
  if ( !items )
    goto LABEL_42;
  max_length = items->max_length;
  if ( max_length >= 1 )
  {
    v82 = 0;
    while ( 1 )
    {
      if ( v82 >= max_length )
        sub_1B6432C(Instance, v79);
      Instance = (Il2CppObject *)items->m_Items[v82];
      if ( !Instance )
        break;
      WarBoardItemData__ResetItem((WarBoardItemData_o *)Instance, 0LL);
      max_length = items->max_length;
      if ( (int)++v82 >= max_length )
        return;
    }
LABEL_42:
    sub_1B64324(Instance);
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
  int32_t v13; // w2
  int32_t v14; // w3
  Il2CppObject *object; // x0

  if ( (byte_49FA0E5 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Find_WarBoardPieceData___, userEquipId);
    sub_1B640C8(&System_Predicate_WarBoardPieceData__TypeInfo, v5);
    sub_1B640C8(&Method_WarBoardData___c__SetPlayerMasterUserEquip_b__144_0__, v6);
    sub_1B640C8(&WarBoardData___c_TypeInfo, v7);
    byte_49FA0E5 = 1;
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
    _9__144_0 = (System_Predicate_object__o *)sub_1B64314(
                                                System_Predicate_WarBoardPieceData__TypeInfo,
                                                userEquipId,
                                                method);
    System_Predicate_object____ctor(_9__144_0, v11, Method_WarBoardData___c__SetPlayerMasterUserEquip_b__144_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__144_0 = (struct System_Predicate_WarBoardPieceData__o *)_9__144_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__144_0, (int32_t)_9__144_0, v13, v14);
  }
  object = System_Array__Find_object_(
             pieces,
             (System_Predicate_T__o *)_9__144_0,
             (const MethodInfo_2F2FF10 *)Method_System_Array_Find_WarBoardPieceData___);
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
  int32_t v32; // w2
  int32_t v33; // w3
  Il2CppObject *v34; // x0
  struct WarBoardDataEntity_o *serverData; // x8
  Il2CppObject *p_obj; // x21
  System_Byte_array *v37; // x21
  System_Byte_array *v38; // x21
  System_String_o *v39; // x0
  struct WarBoardDataEntity_o *v40; // x8
  Il2CppObject *v41; // x0
  System_Byte_array *v42; // x0
  System_Byte_array *v43; // x0
  System_String_o *v44; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  System_Collections_Generic_IEnumerable_TSource__o *items; // x23
  WarBoardData___c_c *v48; // x0
  System_String_o *v49; // x22
  System_String_o *v50; // x21
  System_Func_object__object__o *_9__156_1; // x24
  System_Byte_array *v52; // x21
  System_Byte_array *v53; // x0
  System_Convert_c *v54; // x8
  System_Byte_array *v55; // x21
  Il2CppObject *v56; // x25
  struct WarBoardData___c_StaticFields *v57; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  System_Collections_Generic_IEnumerable_TResult__o *v60; // x0
  __int64 v61; // x1
  __int64 v62; // x2
  WarBoardData___c_c *v63; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x23
  System_Func_object__bool__o *_9__156_2; // x24
  Il2CppObject *v66; // x25
  struct WarBoardData___c_StaticFields *v67; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x0
  System_String_array *v71; // x0
  Il2CppObject *v72; // x0
  Il2CppObject *v73; // x0
  System_Byte_array *v74; // x21
  System_Byte_array *v75; // x0
  System_String_o *v76; // x0
  struct WarBoardDataEntity_o *v77; // x8
  Il2CppObject *v78; // x21
  Il2CppObject *v79; // x0
  System_Byte_array *v80; // x21
  System_Byte_array *v81; // x21
  System_String_o *v82; // x0
  struct WarBoardDataEntity_o *v83; // x8
  Il2CppObject *v84; // x0
  System_Byte_array *v85; // x0
  System_Byte_array *v86; // x0
  System_String_o *v87; // x0
  struct WarBoardDataEntity_o *v88; // x8
  Il2CppObject *v89; // x0
  System_Byte_array *v90; // x0
  System_Byte_array *v91; // x0
  System_String_o *v92; // x2

  if ( (byte_49FA0EE & 1) == 0 )
  {
    sub_1B640C8(&System_Action_WarBoardPieceData__TypeInfo, request);
    sub_1B640C8(&Method_BasicHelper_ForEach_WarBoardPieceData___, v5);
    sub_1B640C8(&CatAndMouseGame_TypeInfo, v6);
    sub_1B640C8(&System_Convert_TypeInfo, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_WarBoardItemData__string___, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_string___, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_string___, v10);
    sub_1B640C8(&System_Func_WarBoardItemData__string__TypeInfo, v11);
    sub_1B640C8(&System_Func_string__bool__TypeInfo, v12);
    sub_1B640C8(&JsonManager_TypeInfo, v13);
    sub_1B640C8(&Method_WarBoardData___c__SetRequest_b__156_0__, v14);
    sub_1B640C8(&Method_WarBoardData___c__SetRequest_b__156_1__, v15);
    sub_1B640C8(&Method_WarBoardData___c__SetRequest_b__156_2__, v16);
    sub_1B640C8(&WarBoardData___c_TypeInfo, v17);
    sub_1B640C8(&StringLiteral_17312/*"bossBattleInfo"*/, v18);
    sub_1B640C8(&StringLiteral_23612/*"svtInfo"*/, v19);
    sub_1B640C8(&StringLiteral_21222/*"masterInfo"*/, v20);
    sub_1B640C8(&StringLiteral_24506/*"wallInfo"*/, v21);
    sub_1B640C8(&StringLiteral_22086/*"null"*/, v22);
    sub_1B640C8(&StringLiteral_23358/*"squareIndexInfo"*/, v23);
    sub_1B640C8(&StringLiteral_19676/*"getItemInfo"*/, v24);
    sub_1B640C8(&StringLiteral_869/*","*/, v25);
    sub_1B640C8(&StringLiteral_15956/*"[{0}]"*/, v26);
    byte_49FA0EE = 1;
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
    _9__156_0 = (System_Action_object__o *)sub_1B64314(System_Action_WarBoardPieceData__TypeInfo, request, method);
    System_Action_object____ctor(_9__156_0, v30, Method_WarBoardData___c__SetRequest_b__156_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__156_0 = (struct System_Action_WarBoardPieceData__o *)_9__156_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__156_0, (int32_t)_9__156_0, v32, v33);
  }
  BasicHelper__ForEach_object_(
    pieces,
    (System_Action_T__o *)_9__156_0,
    (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_WarBoardPieceData___);
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_51;
  p_obj = &serverData->fields.svtInfo->obj;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v34 = (Il2CppObject *)JsonManager__toJson(p_obj, 0, 0, 0LL);
  if ( !request )
    goto LABEL_51;
  v37 = RequestBase__PackToMessagePack(request, v34, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v38 = CatAndMouseGame__CatGame5Bytes(v37, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v39 = System_Convert__ToBase64String(v38, 0LL);
  RequestBase__addField_40850936(request, (System_String_o *)StringLiteral_23612/*"svtInfo"*/, v39, 0LL);
  v40 = this->fields.serverData;
  if ( !v40
    || (v41 = (Il2CppObject *)JsonManager__toJson(&v40->fields.masterInfo->obj, 0, 0, 0LL),
        v42 = RequestBase__PackToMessagePack(request, v41, 0LL),
        v43 = CatAndMouseGame__CatGame5Bytes(v42, 0LL),
        v44 = System_Convert__ToBase64String(v43, 0LL),
        RequestBase__addField_40850936(request, (System_String_o *)StringLiteral_21222/*"masterInfo"*/, v44, 0LL),
        (items = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.items) == 0LL) )
  {
LABEL_51:
    sub_1B64324(v34);
  }
  if ( items[1].monitor )
  {
    v48 = WarBoardData___c_TypeInfo;
    if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
      v48 = WarBoardData___c_TypeInfo;
    }
    v49 = (System_String_o *)StringLiteral_869/*","*/;
    v50 = (System_String_o *)StringLiteral_15956/*"[{0}]"*/;
    _9__156_1 = (System_Func_object__object__o *)v48->static_fields->__9__156_1;
    if ( !_9__156_1 )
    {
      if ( !v48->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v48);
        v48 = WarBoardData___c_TypeInfo;
      }
      v56 = (Il2CppObject *)v48->static_fields->__9;
      _9__156_1 = (System_Func_object__object__o *)sub_1B64314(System_Func_WarBoardItemData__string__TypeInfo, v45, v46);
      System_Func_object__object____ctor(_9__156_1, v56, Method_WarBoardData___c__SetRequest_b__156_1__, 0LL);
      v57 = WarBoardData___c_TypeInfo->static_fields;
      v57->__9__156_1 = (struct System_Func_WarBoardItemData__string__o *)_9__156_1;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v57->__9__156_1, (int32_t)_9__156_1, v58, v59);
    }
    v60 = System_Linq_Enumerable__Select_object__object_(
            items,
            (System_Func_TSource__TResult__o *)_9__156_1,
            (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_WarBoardItemData__string___);
    v63 = WarBoardData___c_TypeInfo;
    v64 = (System_Collections_Generic_IEnumerable_TSource__o *)v60;
    if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
      v63 = WarBoardData___c_TypeInfo;
    }
    _9__156_2 = (System_Func_object__bool__o *)v63->static_fields->__9__156_2;
    if ( !_9__156_2 )
    {
      if ( !v63->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v63);
        v63 = WarBoardData___c_TypeInfo;
      }
      v66 = (Il2CppObject *)v63->static_fields->__9;
      _9__156_2 = (System_Func_object__bool__o *)sub_1B64314(System_Func_string__bool__TypeInfo, v61, v62);
      System_Func_object__bool____ctor(_9__156_2, v66, Method_WarBoardData___c__SetRequest_b__156_2__, 0LL);
      v67 = WarBoardData___c_TypeInfo->static_fields;
      v67->__9__156_2 = (struct System_Func_string__bool__o *)_9__156_2;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v67->__9__156_2, (int32_t)_9__156_2, v68, v69);
    }
    v70 = System_Linq_Enumerable__Where_object_(
            v64,
            (System_Func_TSource__bool__o *)_9__156_2,
            (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_string___);
    v71 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                   v70,
                                   (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_string___);
    v72 = (Il2CppObject *)System_String__Join(v49, v71, 0LL);
    v73 = (Il2CppObject *)System_String__Format(v50, v72, 0LL);
    v74 = RequestBase__PackToMessagePack(request, v73, 0LL);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v75 = CatAndMouseGame__CatGame5Bytes(v74, 0LL);
    v54 = System_Convert_TypeInfo;
    v55 = v75;
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
LABEL_40:
      j_il2cpp_runtime_class_init_0(v54);
  }
  else
  {
    v52 = RequestBase__PackToMessagePack(request, (Il2CppObject *)StringLiteral_22086/*"null"*/, 0LL);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v53 = CatAndMouseGame__CatGame5Bytes(v52, 0LL);
    v54 = System_Convert_TypeInfo;
    v55 = v53;
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      goto LABEL_40;
  }
  v76 = System_Convert__ToBase64String(v55, 0LL);
  RequestBase__addField_40850936(request, (System_String_o *)StringLiteral_19676/*"getItemInfo"*/, v76, 0LL);
  v77 = this->fields.serverData;
  if ( !v77 )
    goto LABEL_51;
  v78 = &v77->fields.wallInfo->obj;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v79 = (Il2CppObject *)JsonManager__toJson(v78, 0, 0, 0LL);
  v80 = RequestBase__PackToMessagePack(request, v79, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v81 = CatAndMouseGame__CatGame5Bytes(v80, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v82 = System_Convert__ToBase64String(v81, 0LL);
  RequestBase__addField_40850936(request, (System_String_o *)StringLiteral_24506/*"wallInfo"*/, v82, 0LL);
  v83 = this->fields.serverData;
  if ( !v83 )
    goto LABEL_51;
  v84 = (Il2CppObject *)JsonManager__toJson(&v83->fields.squareIndexInfo->obj, 0, 0, 0LL);
  v85 = RequestBase__PackToMessagePack(request, v84, 0LL);
  v86 = CatAndMouseGame__CatGame5Bytes(v85, 0LL);
  v87 = System_Convert__ToBase64String(v86, 0LL);
  RequestBase__addField_40850936(request, (System_String_o *)StringLiteral_23358/*"squareIndexInfo"*/, v87, 0LL);
  v88 = this->fields.serverData;
  if ( !v88 )
    goto LABEL_51;
  v89 = (Il2CppObject *)JsonManager__toJson(&v88->fields.bossBattleInfo->obj, 0, 0, 0LL);
  v90 = RequestBase__PackToMessagePack(request, v89, 0LL);
  v91 = CatAndMouseGame__CatGame5Bytes(v90, 0LL);
  v92 = System_Convert__ToBase64String(v91, 0LL);
  RequestBase__addField_40850936(request, (System_String_o *)StringLiteral_17312/*"bossBattleInfo"*/, v92, 0LL);
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
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x5
  Il2CppObject *current; // x25
  __int64 klass_low; // x1
  WarBoardSquareData_o *Square; // x0
  void *pieceComponent; // x8
  _DWORD *monitor; // x8
  unsigned int v17; // w9
  WarBoardPieceData_o *Piece; // x0
  UnityEngine_Object_o *v19; // x20
  _BOOL8 v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FA10C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&WarBoardControlUiDataComponent_TypeInfo, v7);
    byte_49FA10C = 1;
  }
  memset(&v22, 0, sizeof(v22));
  listUiData = (System_Collections_Generic_List_object__o *)this->fields.listUiData;
  if ( !listUiData )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    listUiData,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__);
  v22 = v21;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v22,
           (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__);
    if ( !v9 )
      break;
    current = v22.fields._current;
    if ( !v22.fields._current )
      sub_1B64324(v9);
    klass_low = LODWORD(v22.fields._current[1].klass);
    if ( (klass_low & 0x80000000) != 0 )
    {
      monitor = v22.fields._current[1].monitor;
      if ( !monitor )
        sub_1B64324(v9);
      v17 = monitor[6];
      if ( !v17 )
        sub_1B6432C(v9, klass_low);
      if ( v17 == 1 )
        sub_1B6432C(v9, klass_low);
      if ( v17 <= 2 )
        sub_1B6432C(v9, klass_low);
      Piece = WarBoardData__GetPiece(this, monitor[8], monitor[9], monitor[10], 1, v11);
      if ( Piece )
      {
        pieceComponent = Piece->fields.pieceComponent;
        if ( !pieceComponent )
          sub_1B64324(Piece);
LABEL_17:
        v19 = (UnityEngine_Object_o *)*((_QWORD *)pieceComponent + 23);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v20 = UnityEngine_Object__op_Equality(v19, 0LL, 0LL);
        if ( !v20 )
        {
          if ( !v19 )
            sub_1B64324(v20);
          WarBoardControlUiDataComponent__SetUiDataFromLocalData(
            (WarBoardControlUiDataComponent_o *)v19,
            (System_String_array *)current[2].klass,
            0LL);
        }
      }
    }
    else
    {
      Square = WarBoardData__GetSquare(this, klass_low, v10);
      if ( Square )
      {
        pieceComponent = Square->fields.squareComponent;
        if ( !pieceComponent )
          sub_1B64324(Square);
        goto LABEL_17;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__);
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
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x1
  __int64 v21; // x2
  System_Func_bool__o *v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_WaitUntil_o *v25; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  System_Delegate_o **v31; // x21
  System_Delegate_o *v32; // x22
  WarBoardTaskBase_TaskCallback_o *v33; // x23
  System_Delegate_o *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  WarBoardTaskBase_TaskCallback_c *v37; // x1
  Il2CppObject *Instance; // x19
  System_Collections_Generic_Dictionary_int__object__o *v39; // x21
  __int64 v40; // x0
  __int64 v41; // x1
  int32_t v42; // w2
  int32_t v43; // w3
  __int64 v44; // x0

  if ( (byte_49FA0EC & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__,
      consumedPieceActionPointDict);
    sub_1B640C8(&System_Func_bool__TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_1B640C8(&WarBoardTaskBase_TaskCallback_TypeInfo, v7);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__0__, v8);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__1__, v9);
    sub_1B640C8(&WarBoardData___c__DisplayClass154_0_TypeInfo, v10);
    sub_1B640C8(&UnityEngine_WaitUntil_TypeInfo, v11);
    sub_1B640C8(&WarBoardCallbackTask_TypeInfo, v12);
    sub_1B640C8(&WarBoardTaskBase___TypeInfo, v13);
    byte_49FA0EC = 1;
  }
  v14 = sub_1B64314(WarBoardData___c__DisplayClass154_0_TypeInfo, consumedPieceActionPointDict, method);
  WarBoardData___c__DisplayClass154_0___ctor((WarBoardData___c__DisplayClass154_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_18;
  *(_QWORD *)(v14 + 24) = consumedPieceActionPointDict;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 24), (int32_t)consumedPieceActionPointDict, v16, v17);
  *(_QWORD *)(v14 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 32), (int32_t)this, v18, v19);
  v15 = *(System_Collections_Generic_Dictionary_int__object__o **)(v14 + 24);
  if ( !v15 )
    goto LABEL_18;
  if ( System_Collections_Generic_Dictionary_int__object___get_Count(
         v15,
         (const MethodInfo_3123634 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__) < 1 )
    return;
  *(_BYTE *)(v14 + 16) = 0;
  v22 = (System_Func_bool__o *)sub_1B64314(System_Func_bool__TypeInfo, v20, v21);
  System_Func_bool____ctor(
    v22,
    (Il2CppObject *)v14,
    Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__0__,
    0LL);
  v25 = (UnityEngine_WaitUntil_o *)sub_1B64314(UnityEngine_WaitUntil_TypeInfo, v23, v24);
  UnityEngine_WaitUntil___ctor(v25, v22, 0LL);
  v28 = sub_1B64314(WarBoardCallbackTask_TypeInfo, v26, v27);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v28, (UnityEngine_CustomYieldInstruction_o *)v25, 0LL);
  if ( !v28 )
LABEL_18:
    sub_1B64324(v15);
  v31 = (System_Delegate_o **)(v28 + 32);
  v32 = *(System_Delegate_o **)(v28 + 32);
  v33 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64314(WarBoardTaskBase_TaskCallback_TypeInfo, v29, v30);
  WarBoardTaskBase_TaskCallback___ctor(
    v33,
    (Il2CppObject *)v14,
    Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__1__,
    0LL);
  v34 = System_Delegate__Combine(v32, (System_Delegate_o *)v33, 0LL);
  if ( !v34 )
  {
    *v31 = 0LL;
LABEL_13:
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 32), (int32_t)v34, v35, v36);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v15 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64170(WarBoardTaskBase___TypeInfo, 1LL);
    if ( v15 )
    {
      v39 = v15;
      v40 = sub_1B64204(v28, v15->klass->_1.element_class);
      if ( !v40 )
      {
        v44 = sub_1B64348(0LL);
        sub_1B641F0(v44, 0LL);
      }
      if ( !LODWORD(v39->fields._entries) )
        sub_1B6432C(v40, v41);
      *(_QWORD *)&v39->fields._count = v28;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v39->fields._count, v28, v42, v43);
      if ( Instance )
      {
        WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 1, (WarBoardTaskBase_array *)v39, 0LL);
        return;
      }
    }
    goto LABEL_18;
  }
  v37 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v34->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    *v31 = v34;
    if ( (WarBoardTaskBase_TaskCallback_c *)v34->klass == v37 )
      goto LABEL_13;
  }
  sub_1B645E4(v34);
}


System_String_o *__fastcall WarBoardData__ToJson(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *serverData; // x19

  if ( (byte_49FA0ED & 1) == 0 )
  {
    sub_1B640C8(&JsonManager_TypeInfo, method);
    sub_1B640C8(&string_TypeInfo, v3);
    byte_49FA0ED = 1;
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
  __int64 v17; // x2
  struct WarBoardDataEntity_o *serverData; // x8
  System_Object_array *bossBattleInfo; // x21
  System_Func_object__bool__o *v20; // x22
  Il2CppObject *object; // x0
  System_Collections_Generic_Dictionary_object__object__o *monitor; // x21
  int32_t v23; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FA0F5 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Find_WarBoardBossBattleData___, *(_QWORD *)&bossId);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v9);
    sub_1B640C8(&System_Func_WarBoardBossBattleData__bool__TypeInfo, v10);
    sub_1B640C8(&int_TypeInfo, v11);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass171_0__UpdateBossInfo_b__0__, v12);
    sub_1B640C8(&WarBoardData___c__DisplayClass171_0_TypeInfo, v13);
    byte_49FA0F5 = 1;
  }
  v14 = (WarBoardData___c__DisplayClass171_0_o *)sub_1B64314(
                                                   WarBoardData___c__DisplayClass171_0_TypeInfo,
                                                   *(_QWORD *)&bossId,
                                                   key);
  WarBoardData___c__DisplayClass171_0___ctor(v14, 0LL);
  if ( !v14 )
    goto LABEL_9;
  v14->fields.bossId = bossId;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_9;
  bossBattleInfo = (System_Object_array *)serverData->fields.bossBattleInfo;
  v20 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardBossBattleData__bool__TypeInfo, v16, v17);
  System_Func_object__bool____ctor(
    v20,
    (Il2CppObject *)v14,
    Method_WarBoardData___c__DisplayClass171_0__UpdateBossInfo_b__0__,
    0LL);
  object = BasicHelper__Find_object_(
             bossBattleInfo,
             (System_Func_T__bool__o *)v20,
             (const MethodInfo_2E2543C *)Method_BasicHelper_Find_WarBoardBossBattleData___);
  if ( !object )
    return;
  monitor = (System_Collections_Generic_Dictionary_object__object__o *)object[1].monitor;
  v23 = value;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
  if ( !monitor )
LABEL_9:
    sub_1B64324(v15);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    monitor,
    (Il2CppObject *)key,
    v15,
    (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
}


void __fastcall WarBoardData__UpdateBuffTurnNoticeDisp(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  WarBoardData___c_c *v13; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__object__o *_9__192_0; // x20
  Il2CppObject *v16; // x21
  ServantStatusBattleListViewItem_o *p__9__192_0; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_IEnumerable_TResult__o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  WarBoardData___c_c *v23; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x19
  System_Func_object__bool__o *_9__192_1; // x20
  Il2CppObject *v26; // x21
  ServantStatusBattleListViewItem_o *p__9__192_1; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  WarBoardData___c_c *v33; // x8
  System_Collections_Generic_IEnumerable_T__o *v34; // x19
  System_Action_object__o *_9__192_2; // x20
  Il2CppObject *v36; // x21
  ServantStatusBattleListViewItem_o *p__9__192_2; // x0
  int32_t v38; // w2
  int32_t v39; // w3

  if ( (byte_49FA107 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_WarBoardPieceBaseComponent__TypeInfo, method);
    sub_1B640C8(&Method_BasicHelper_ForEach_WarBoardPieceBaseComponent___, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__WarBoardPieceBaseComponent___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_WarBoardPieceBaseComponent___, v6);
    sub_1B640C8(&System_Func_WarBoardPieceBaseComponent__bool__TypeInfo, v7);
    sub_1B640C8(&System_Func_WarBoardPieceData__WarBoardPieceBaseComponent__TypeInfo, v8);
    sub_1B640C8(&Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_0__, v9);
    sub_1B640C8(&Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_1__, v10);
    sub_1B640C8(&Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_2__, v11);
    sub_1B640C8(&WarBoardData___c_TypeInfo, v12);
    byte_49FA107 = 1;
  }
  v13 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v13 = WarBoardData___c_TypeInfo;
  }
  _9__192_0 = (System_Func_object__object__o *)v13->static_fields->__9__192_0;
  if ( !_9__192_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = WarBoardData___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__192_0 = (System_Func_object__object__o *)sub_1B64314(
                                                   System_Func_WarBoardPieceData__WarBoardPieceBaseComponent__TypeInfo,
                                                   method,
                                                   v2);
    System_Func_object__object____ctor(
      _9__192_0,
      v16,
      Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_0__,
      0LL);
    p__9__192_0 = (ServantStatusBattleListViewItem_o *)&WarBoardData___c_TypeInfo->static_fields->__9__192_0;
    p__9__192_0->klass = (ServantStatusBattleListViewItem_c *)_9__192_0;
    sub_1B6406C(p__9__192_0, (int32_t)_9__192_0, v18, v19);
  }
  v20 = System_Linq_Enumerable__Select_object__object_(
          pieces,
          (System_Func_TSource__TResult__o *)_9__192_0,
          (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__WarBoardPieceBaseComponent___);
  v23 = WarBoardData___c_TypeInfo;
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)v20;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v23 = WarBoardData___c_TypeInfo;
  }
  _9__192_1 = (System_Func_object__bool__o *)v23->static_fields->__9__192_1;
  if ( !_9__192_1 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = WarBoardData___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v23->static_fields->__9;
    _9__192_1 = (System_Func_object__bool__o *)sub_1B64314(
                                                 System_Func_WarBoardPieceBaseComponent__bool__TypeInfo,
                                                 v21,
                                                 v22);
    System_Func_object__bool____ctor(_9__192_1, v26, Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_1__, 0LL);
    p__9__192_1 = (ServantStatusBattleListViewItem_o *)&WarBoardData___c_TypeInfo->static_fields->__9__192_1;
    p__9__192_1->klass = (ServantStatusBattleListViewItem_c *)_9__192_1;
    sub_1B6406C(p__9__192_1, (int32_t)_9__192_1, v28, v29);
  }
  v30 = System_Linq_Enumerable__Where_object_(
          v24,
          (System_Func_TSource__bool__o *)_9__192_1,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_WarBoardPieceBaseComponent___);
  v33 = WarBoardData___c_TypeInfo;
  v34 = (System_Collections_Generic_IEnumerable_T__o *)v30;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v33 = WarBoardData___c_TypeInfo;
  }
  _9__192_2 = (System_Action_object__o *)v33->static_fields->__9__192_2;
  if ( !_9__192_2 )
  {
    if ( !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      v33 = WarBoardData___c_TypeInfo;
    }
    v36 = (Il2CppObject *)v33->static_fields->__9;
    _9__192_2 = (System_Action_object__o *)sub_1B64314(System_Action_WarBoardPieceBaseComponent__TypeInfo, v31, v32);
    System_Action_object____ctor(_9__192_2, v36, Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_2__, 0LL);
    p__9__192_2 = (ServantStatusBattleListViewItem_o *)&WarBoardData___c_TypeInfo->static_fields->__9__192_2;
    p__9__192_2->klass = (ServantStatusBattleListViewItem_c *)_9__192_2;
    sub_1B6406C(p__9__192_2, (int32_t)_9__192_2, v38, v39);
  }
  BasicHelper__ForEach_object_(
    v34,
    (System_Action_T__o *)_9__192_2,
    (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_WarBoardPieceBaseComponent___);
}


void __fastcall WarBoardData__UpdateCurrentPartyCost(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v18; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_long__o *v21; // x21
  const MethodInfo *v22; // x1
  WarBoardPieceData_array *EditableServantPieces; // x0
  int64_t UserServantEquipId_k__BackingField; // x1
  int max_length; // w8
  WarBoardPieceData_array *v26; // x22
  unsigned int v27; // w23
  WarBoardPieceData_o *v28; // x25
  int32_t version; // w11
  int64_t UserServantId_k__BackingField; // x1
  struct System_Int64_array *items; // x9
  _QWORD *v32; // x8
  __int64 size; // x12
  int32_t v34; // w10
  __int64 v35; // x0
  __int64 v36; // x0
  UserServantEntity_array *Entities_39936464; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  WarBoardData___c_c *v40; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x21
  System_Func_object__int__o *_9__143_0; // x22
  Il2CppObject *v43; // x23
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  int32_t v47; // w2
  int32_t v48; // w3
  __int64 v49; // x1
  __int64 v50; // x2
  System_Func_object__bool__o *v51; // x22

  if ( (byte_49FA0E4 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_UserServantEntity___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_Sum_UserServantEntity___, v6);
    sub_1B640C8(&System_Func_UserServantEntity__bool__TypeInfo, v7);
    sub_1B640C8(&System_Func_UserServantEntity__int__TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B640C8(&Method_WarBoardData___c__UpdateCurrentPartyCost_b__143_0__, v14);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass143_0__UpdateCurrentPartyCost_b__1__, v15);
    sub_1B640C8(&WarBoardData___c__DisplayClass143_0_TypeInfo, v16);
    sub_1B640C8(&WarBoardData___c_TypeInfo, v17);
    byte_49FA0E4 = 1;
  }
  v18 = sub_1B64314(WarBoardData___c__DisplayClass143_0_TypeInfo, method, v2);
  WarBoardData___c__DisplayClass143_0___ctor((WarBoardData___c__DisplayClass143_0_o *)v18, 0LL);
  v21 = (System_Collections_Generic_List_long__o *)sub_1B64314(System_Collections_Generic_List_long__TypeInfo, v19, v20);
  System_Collections_Generic_List_long____ctor(
    v21,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  EditableServantPieces = WarBoardData__GetEditableServantPieces(this, v22);
  if ( !EditableServantPieces )
    goto LABEL_33;
  max_length = EditableServantPieces->max_length;
  v26 = EditableServantPieces;
  if ( max_length >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      if ( v27 >= max_length )
        sub_1B6432C(EditableServantPieces, UserServantEquipId_k__BackingField);
      v28 = v26->m_Items[v27];
      if ( !v28 )
        break;
      if ( !v21 )
        break;
      version = v21->fields._version;
      UserServantId_k__BackingField = v28->fields._UserServantId_k__BackingField;
      items = v21->fields._items;
      v32 = Method_System_Collections_Generic_List_long__Add__;
      v21->fields._version = version + 1;
      if ( !items )
        break;
      size = v21->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v21,
          UserServantId_k__BackingField,
          *(const MethodInfo_3495074 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        v34 = v21->fields._size;
        v32 = Method_System_Collections_Generic_List_long__Add__;
        items = v21->fields._items;
        UserServantEquipId_k__BackingField = v28->fields._UserServantEquipId_k__BackingField;
        ++v21->fields._version;
        if ( !items )
          break;
      }
      else
      {
        v34 = size + 1;
        v21->fields._size = size + 1;
        items->m_Items[size] = UserServantId_k__BackingField;
        UserServantEquipId_k__BackingField = v28->fields._UserServantEquipId_k__BackingField;
        v21->fields._version = version + 2;
      }
      if ( v34 >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v21,
          UserServantEquipId_k__BackingField,
          *(const MethodInfo_3495074 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v21->fields._size = v34 + 1;
        items->m_Items[v34] = UserServantEquipId_k__BackingField;
      }
      max_length = v26->max_length;
      if ( (int)++v27 >= max_length )
        goto LABEL_17;
    }
LABEL_33:
    sub_1B64324(EditableServantPieces);
  }
LABEL_17:
  v35 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v35 + 309) & 1) == 0 )
    v35 = sub_1BB5FA4(v35);
  v36 = *(_QWORD *)(*(_QWORD *)(v35 + 192) + 16LL);
  if ( (*(_BYTE *)(v36 + 309) & 1) == 0 )
    v36 = sub_1BB5FA4(v36);
  EditableServantPieces = **(WarBoardPieceData_array ***)(v36 + 184);
  if ( !EditableServantPieces )
    goto LABEL_33;
  EditableServantPieces = (WarBoardPieceData_array *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)EditableServantPieces,
                                                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !EditableServantPieces )
    goto LABEL_33;
  Entities_39936464 = UserServantMaster__GetEntities_39936464((UserServantMaster_o *)EditableServantPieces, v21, 0LL);
  v40 = WarBoardData___c_TypeInfo;
  v41 = (System_Collections_Generic_IEnumerable_TSource__o *)Entities_39936464;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v40 = WarBoardData___c_TypeInfo;
  }
  _9__143_0 = (System_Func_object__int__o *)v40->static_fields->__9__143_0;
  if ( !_9__143_0 )
  {
    if ( !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
      v40 = WarBoardData___c_TypeInfo;
    }
    v43 = (Il2CppObject *)v40->static_fields->__9;
    _9__143_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_UserServantEntity__int__TypeInfo, v38, v39);
    System_Func_object__int____ctor(_9__143_0, v43, Method_WarBoardData___c__UpdateCurrentPartyCost_b__143_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__143_0 = (struct System_Func_UserServantEntity__int__o *)_9__143_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__143_0, (int32_t)_9__143_0, v45, v46);
  }
  EditableServantPieces = (WarBoardPieceData_array *)System_Linq_Enumerable__Sum_object_(
                                                       v41,
                                                       (System_Func_TSource__int__o *)_9__143_0,
                                                       (const MethodInfo_2E700DC *)Method_System_Linq_Enumerable_Sum_UserServantEntity___);
  if ( !this )
    goto LABEL_33;
  this->fields._CurrentPartyCost_k__BackingField = (int)EditableServantPieces;
  EditableServantPieces = (WarBoardPieceData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !EditableServantPieces )
    goto LABEL_33;
  EditableServantPieces = (WarBoardPieceData_array *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)EditableServantPieces,
                                                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !v18 )
    goto LABEL_33;
  *(_QWORD *)(v18 + 16) = EditableServantPieces;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 16), (int32_t)EditableServantPieces, v47, v48);
  v51 = (System_Func_object__bool__o *)sub_1B64314(System_Func_UserServantEntity__bool__TypeInfo, v49, v50);
  System_Func_object__bool____ctor(
    v51,
    (Il2CppObject *)v18,
    Method_WarBoardData___c__DisplayClass143_0__UpdateCurrentPartyCost_b__1__,
    0LL);
  this->fields._CurrentMemberCount_k__BackingField = System_Linq_Enumerable__Count_object__48591404(
                                                       v41,
                                                       (System_Func_TSource__bool__o *)v51,
                                                       (const MethodInfo_2E5722C *)Method_System_Linq_Enumerable_Count_UserServantEntity___);
}


void __fastcall WarBoardData__UpdateFromServerData(
        WarBoardData_o *this,
        WarBoardDataEntity_o *warBoardDataEntity,
        bool forceUpdate,
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
  WarBoardDataEntity_o **p_serverData; // x21
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  WarBoardManager_TaskMultiList_o *v39; // x24
  __int64 v40; // x1
  __int64 v41; // x2
  WarBoardManager_TaskMultiList_o *v42; // x23
  __int64 v43; // x1
  __int64 v44; // x2
  System_Collections_Generic_Dictionary_int__object__o *v45; // x20
  __int64 v46; // x1
  __int64 v47; // x2
  System_Collections_Generic_List_object__o *v48; // x26
  System_Collections_Generic_List_object__o *isPlayerGroup; // x0
  const MethodInfo *klass_high; // x1
  __int64 v51; // x2
  struct WarBoardPieceData_array *pieces; // x25
  int max_length; // w8
  unsigned int v54; // w19
  bool v55; // w27
  WarBoardPieceData_o *v56; // x28
  WarBoardManager_TaskList_o *v57; // x29
  char v58; // w2
  int32_t v59; // w3
  struct WarBoardManager_TaskList_array *items; // x8
  _QWORD *v61; // x9
  __int64 size; // x10
  Il2CppClass **v63; // x0
  struct WarBoardManager_TaskList_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  __int64 v67; // x8
  System_Collections_Generic_List_object__o *v68; // x0
  __int64 v69; // x1
  __int64 v70; // x2
  int32_t ConsumedRecoverDonotActCost_k__BackingField; // w29
  System_Collections_Generic_Dictionary_int__object__o *v72; // x21
  System_Collections_Generic_List_object__o *v73; // x20
  System_Collections_Generic_Dictionary_int__object__o *v74; // x0
  Il2CppObject *v75; // x2
  char v76; // w2
  int32_t v77; // w3
  struct System_Object_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  Il2CppClass **v81; // x8
  __int64 v82; // x1
  __int64 v83; // x2
  Il2CppObject *current; // x28
  WarBoardManager_TaskList_o *v85; // x26
  __int64 v86; // x0
  int monitor; // w25
  Il2CppClass *v88; // x0
  __int64 v89; // x0
  char v90; // w2
  int32_t v91; // w3
  int monitor_high; // w27
  Il2CppClass *klass; // x0
  Il2CppClass *v94; // x0
  struct WarBoardManager_TaskList_array *v95; // x8
  _QWORD *v96; // x9
  __int64 v97; // x10
  Il2CppClass **v98; // x0
  struct WarBoardManager_TaskList_array *v99; // x8
  _QWORD *v100; // x9
  __int64 v101; // x10
  Il2CppClass **v102; // x0
  const MethodInfo *v103; // x2
  System_Collections_Generic_IEnumerable_T__o *v104; // x0
  __int64 v105; // x2
  char v106; // w2
  int32_t v107; // w3
  struct System_Object_array *v108; // x8
  _QWORD *v109; // x9
  __int64 v110; // x10
  System_Collections_Generic_List_object__o *v111; // x1
  Il2CppClass **v112; // x0
  __int64 v113; // x1
  __int64 v114; // x2
  WarBoardWaitNonBlockingTaskEnd_o *v115; // x23
  char v116; // w2
  int32_t v117; // w3
  struct System_Object_array *v118; // x8
  _QWORD *v119; // x9
  __int64 v120; // x10
  Il2CppClass **v121; // x0
  struct WarBoardItemData_array *v122; // x19
  int v123; // w8
  unsigned int v124; // w20
  struct WarBoardWallData_array *walls; // x19
  unsigned __int64 v126; // x24
  __int64 v127; // x20
  char v128; // w2
  int32_t v129; // w3
  WarBoardWallData_o *v130; // x1
  System_Collections_Generic_List_object__o **v131; // x21
  __int64 v132; // x1
  __int64 v133; // x2
  System_Collections_Generic_IEnumerable_TSource__o *wallInfo; // x22
  System_Func_object__bool__o *v135; // x23
  Il2CppObject *v136; // x0
  Il2CppObject *v137; // x8
  System_Collections_Generic_List_object__o *v138; // [xsp+8h] [xbp-B8h]
  WarBoardData_o *v139; // [xsp+10h] [xbp-B0h]
  WarBoardDataEntity_o **v140; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v142; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v143; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_49FA0E9 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Add__, warBoardDataEntity);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___ContainsKey__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData____ctor__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Item__, v9);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___TypeInfo, v10);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__Dispose__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__MoveNext__, v13);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__get_Current__,
      v14);
    sub_1B640C8(&System_Func_WarBoardUserWallData__bool__TypeInfo, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__GetEnumerator__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList___ctor__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Count__, v24);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v25);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v26);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__TypeInfo, v27);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v28);
    sub_1B640C8(&WarBoardManager_TaskList_TypeInfo, v29);
    sub_1B640C8(&WarBoardManager_TaskMultiList_TypeInfo, v30);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass151_0__UpdateFromServerData_b__0__, v31);
    sub_1B640C8(&WarBoardData___c__DisplayClass151_0_TypeInfo, v32);
    sub_1B640C8(&WarBoardWaitNonBlockingTaskEnd_TypeInfo, v33);
    byte_49FA0E9 = 1;
  }
  memset(&v143, 0, sizeof(v143));
  p_serverData = &this->fields.serverData;
  if ( !this->fields.serverData )
    return;
  this->fields.serverData = warBoardDataEntity;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.serverData,
    (int32_t)warBoardDataEntity,
    forceUpdate,
    (int32_t)method);
  v138 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                        System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                        v35,
                                                        v36);
  System_Collections_Generic_List_object____ctor(
    v138,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v39 = (WarBoardManager_TaskMultiList_o *)sub_1B64314(WarBoardManager_TaskMultiList_TypeInfo, v37, v38);
  WarBoardManager_TaskMultiList___ctor(v39, 0LL);
  v42 = (WarBoardManager_TaskMultiList_o *)sub_1B64314(WarBoardManager_TaskMultiList_TypeInfo, v40, v41);
  WarBoardManager_TaskMultiList___ctor(v42, 0LL);
  v45 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___TypeInfo,
                                                                  v43,
                                                                  v44);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v45,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData____ctor__);
  v48 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__TypeInfo,
                                                       v46,
                                                       v47);
  System_Collections_Generic_List_object____ctor(
    v48,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList___ctor__);
  pieces = this->fields.pieces;
  v139 = this;
  if ( !pieces )
    goto LABEL_96;
  max_length = pieces->max_length;
  v140 = &this->fields.serverData;
  if ( max_length >= 1 )
  {
    v54 = 0;
    v55 = forceUpdate;
    do
    {
      if ( v54 >= max_length )
        goto LABEL_97;
      v56 = pieces->m_Items[v54];
      v57 = (WarBoardManager_TaskList_o *)sub_1B64314(WarBoardManager_TaskList_TypeInfo, klass_high, v51);
      WarBoardManager_TaskList___ctor(v57, 0LL);
      if ( !v56 )
        goto LABEL_96;
      WarBoardPieceData__UpdateFromServerData(
        v56,
        *p_serverData,
        (System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__o *)v48,
        v57,
        v55,
        0LL);
      if ( !v57 )
        goto LABEL_96;
      if ( v57->fields._size >= 1 )
      {
        if ( v56->fields._isDead_k__BackingField )
        {
          if ( !v42 )
            goto LABEL_96;
          items = v42->fields._items;
          v61 = Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__;
          ++v42->fields._version;
          if ( !items )
            goto LABEL_96;
          size = v42->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            v67 = v61[4];
            v68 = (System_Collections_Generic_List_object__o *)v42;
LABEL_23:
            System_Collections_Generic_List_object___AddWithResize(
              v68,
              (Il2CppObject *)v57,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v67 + 192) + 112LL));
            goto LABEL_24;
          }
          v63 = &items->obj.klass + size;
          v42->fields._size = size + 1;
        }
        else
        {
          if ( !v39 )
            goto LABEL_96;
          v64 = v39->fields._items;
          v65 = Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__;
          ++v39->fields._version;
          if ( !v64 )
            goto LABEL_96;
          v66 = v39->fields._size;
          if ( (unsigned int)v66 >= v64->max_length )
          {
            v67 = v65[4];
            v68 = (System_Collections_Generic_List_object__o *)v39;
            goto LABEL_23;
          }
          v63 = &v64->obj.klass + v66;
          v39->fields._size = v66 + 1;
        }
        v63[4] = (Il2CppClass *)v57;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v63 + 4), (int32_t)v57, v58, v59);
      }
LABEL_24:
      isPlayerGroup = (System_Collections_Generic_List_object__o *)WarBoardPieceData__get_isPlayerGroup(v56, 0LL);
      if ( ((unsigned __int8)isPlayerGroup & 1) != 0 )
      {
        isPlayerGroup = (System_Collections_Generic_List_object__o *)WarBoardPieceData__get_isMaster(v56, 0LL);
        if ( ((unsigned __int8)isPlayerGroup & 1) == 0 && v56->fields._IsDispConsumedPieceActionPoint_k__BackingField )
        {
          if ( !v45 )
            goto LABEL_96;
          if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                  v45,
                  v56->fields._ConsumedRecoverDonotActCost_k__BackingField,
                  (const MethodInfo_3123B78 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___ContainsKey__) )
          {
            ConsumedRecoverDonotActCost_k__BackingField = v56->fields._ConsumedRecoverDonotActCost_k__BackingField;
            v72 = v45;
            v73 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                                 System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                                 v69,
                                                                 v70);
            System_Collections_Generic_List_object____ctor(
              v73,
              (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
            v74 = v72;
            v75 = (Il2CppObject *)v73;
            v45 = v72;
            p_serverData = v140;
            System_Collections_Generic_Dictionary_int__object___Add(
              v74,
              ConsumedRecoverDonotActCost_k__BackingField,
              v75,
              (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Add__);
          }
          isPlayerGroup = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                         v45,
                                                                         v56->fields._ConsumedRecoverDonotActCost_k__BackingField,
                                                                         (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Item__);
          if ( !isPlayerGroup )
            goto LABEL_96;
          v78 = isPlayerGroup->fields._items;
          v79 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
          ++isPlayerGroup->fields._version;
          if ( !v78 )
            goto LABEL_96;
          v80 = isPlayerGroup->fields._size;
          if ( (unsigned int)v80 >= v78->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              isPlayerGroup,
              (Il2CppObject *)v56,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
          }
          else
          {
            v81 = &v78->obj.klass + v80;
            isPlayerGroup->fields._size = v80 + 1;
            v81[4] = (Il2CppClass *)v56;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v81 + 4), (int32_t)v56, v76, v77);
          }
        }
      }
      max_length = pieces->max_length;
    }
    while ( (int)++v54 < max_length );
  }
  if ( !v48 )
    goto LABEL_96;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v142,
    v48,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__GetEnumerator__);
  v143 = v142;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v143,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__MoveNext__) )
  {
    current = v143.fields._current;
    v85 = (WarBoardManager_TaskList_o *)sub_1B64314(WarBoardManager_TaskList_TypeInfo, v82, v83);
    WarBoardManager_TaskList___ctor(v85, 0LL);
    if ( !current )
      sub_1B64324(v86);
    monitor = (int)current[1].monitor;
    if ( (monitor & 0x80000000) != 0 )
    {
      monitor_high = HIDWORD(current[1].monitor);
      if ( monitor_high >= 1 )
      {
        klass = current[1].klass;
        if ( !klass )
          sub_1B64324(0LL);
        (*((void (__fastcall **)(Il2CppClass *, _QWORD, _QWORD, WarBoardManager_TaskList_o *, __int64, _QWORD, __int64, _QWORD))klass->_1.image
         + 101))(
          klass,
          (unsigned int)monitor_high,
          0LL,
          v85,
          0xFFFFFFFFLL,
          0LL,
          1LL,
          *((_QWORD *)klass->_1.image + 102));
      }
      v94 = current[1].klass;
      if ( !v94 )
        sub_1B64324(0LL);
      v89 = (*((__int64 (**)(void))v94->_1.image + 103))();
    }
    else
    {
      v88 = current[1].klass;
      if ( !v88 )
        sub_1B64324(0LL);
      v89 = (*((__int64 (__fastcall **)(Il2CppClass *, _QWORD, _QWORD, WarBoardManager_TaskList_o *, __int64, _QWORD, __int64, _QWORD))v88->_1.image
             + 101))(
              v88,
              HIDWORD(current[1].monitor),
              0LL,
              v85,
              0xFFFFFFFFLL,
              0LL,
              1LL,
              *((_QWORD *)v88->_1.image + 102));
    }
    if ( !v85 )
      sub_1B64324(v89);
    if ( v85->fields._size >= 1 )
    {
      if ( (monitor & 0x80000000) != 0 )
      {
        if ( !v42 )
          sub_1B64324(v89);
        v99 = v42->fields._items;
        v100 = Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__;
        ++v42->fields._version;
        if ( !v99 )
          sub_1B64324(v89);
        v101 = v42->fields._size;
        if ( (unsigned int)v101 >= v99->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)v42,
            (Il2CppObject *)v85,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
        }
        else
        {
          v102 = &v99->obj.klass + v101;
          v42->fields._size = v101 + 1;
          v102[4] = (Il2CppClass *)v85;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v102 + 4), (int32_t)v85, v90, v91);
        }
      }
      else
      {
        if ( !v39 )
          sub_1B64324(v89);
        v95 = v39->fields._items;
        v96 = Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__;
        ++v39->fields._version;
        if ( !v95 )
          sub_1B64324(v89);
        v97 = v39->fields._size;
        if ( (unsigned int)v97 >= v95->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)v39,
            (Il2CppObject *)v85,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
        }
        else
        {
          v98 = &v95->obj.klass + v97;
          v39->fields._size = v97 + 1;
          v98[4] = (Il2CppClass *)v85;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v98 + 4), (int32_t)v85, v90, v91);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v143,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__Dispose__);
  if ( !v45 )
    goto LABEL_96;
  isPlayerGroup = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Count(
                                                                 v45,
                                                                 (const MethodInfo_3123634 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__);
  if ( (int)isPlayerGroup >= 1 )
    WarBoardData__ShowConsumedPieceActionPointPopup(
      v139,
      (System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___o *)v45,
      v103);
  if ( !v39 )
    goto LABEL_96;
  isPlayerGroup = (System_Collections_Generic_List_object__o *)WarBoardManager_TaskMultiList__SortedFlatted(v39, 0LL);
  if ( !v138 )
    goto LABEL_96;
  System_Collections_Generic_List_object___AddRange(
    v138,
    (System_Collections_Generic_IEnumerable_T__o *)isPlayerGroup,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( !v42 )
    goto LABEL_96;
  v104 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager_TaskMultiList__SortedFlatted(v42, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v138,
    v104,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( v138->fields._size >= 1 )
  {
    isPlayerGroup = (System_Collections_Generic_List_object__o *)WarBoardData__CreateEventBossUIDataTask(
                                                                   (WarBoardData_o *)isPlayerGroup,
                                                                   klass_high);
    v108 = v138->fields._items;
    v109 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v138->fields._version;
    if ( !v108 )
      goto LABEL_96;
    v110 = v138->fields._size;
    v111 = isPlayerGroup;
    if ( (unsigned int)v110 >= v108->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v138,
        (Il2CppObject *)isPlayerGroup,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
    }
    else
    {
      v112 = &v108->obj.klass + v110;
      v138->fields._size = v110 + 1;
      v112[4] = (Il2CppClass *)v111;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v112 + 4), (int32_t)v111, v106, v107);
    }
    v115 = (WarBoardWaitNonBlockingTaskEnd_o *)sub_1B64314(WarBoardWaitNonBlockingTaskEnd_TypeInfo, v113, v114);
    WarBoardWaitNonBlockingTaskEnd___ctor(v115, 0LL);
    v118 = v138->fields._items;
    v119 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v138->fields._version;
    if ( !v118 )
      goto LABEL_96;
    v120 = v138->fields._size;
    if ( (unsigned int)v120 >= v118->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v138,
        (Il2CppObject *)v115,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v119[4] + 192LL) + 112LL));
    }
    else
    {
      v121 = &v118->obj.klass + v120;
      v138->fields._size = v120 + 1;
      v121[4] = (Il2CppClass *)v115;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v121 + 4), (int32_t)v115, v116, v117);
    }
    isPlayerGroup = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !isPlayerGroup )
      goto LABEL_96;
    WarBoardManager__InsertTask_35180484(
      (WarBoardManager_o *)isPlayerGroup,
      0,
      (System_Collections_Generic_List_WarBoardTaskBase__o *)v138,
      0LL);
  }
  v122 = v139->fields.items;
  if ( !v122 )
    goto LABEL_96;
  v123 = v122->max_length;
  if ( v123 >= 1 )
  {
    v124 = 0;
    while ( v124 < v123 )
    {
      isPlayerGroup = (System_Collections_Generic_List_object__o *)v122->m_Items[v124];
      if ( !isPlayerGroup )
        goto LABEL_96;
      WarBoardItemData__UpdateFromServerData((WarBoardItemData_o *)isPlayerGroup, *v140, 0LL);
      v123 = v122->max_length;
      if ( (int)++v124 >= v123 )
        goto LABEL_84;
    }
LABEL_97:
    sub_1B6432C(isPlayerGroup, klass_high);
  }
LABEL_84:
  walls = v139->fields.walls;
  if ( !walls )
LABEL_96:
    sub_1B64324(isPlayerGroup);
  if ( (int)walls->max_length >= 1 )
  {
    v126 = 0LL;
    while ( 1 )
    {
      v127 = sub_1B64314(WarBoardData___c__DisplayClass151_0_TypeInfo, klass_high, v105);
      WarBoardData___c__DisplayClass151_0___ctor((WarBoardData___c__DisplayClass151_0_o *)v127, 0LL);
      if ( v126 >= walls->max_length )
        goto LABEL_97;
      if ( !v127 )
        goto LABEL_96;
      v130 = walls->m_Items[v126];
      *(_QWORD *)(v127 + 16) = v130;
      v131 = (System_Collections_Generic_List_object__o **)(v127 + 16);
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v127 + 16), (int32_t)v130, v128, v129);
      if ( !warBoardDataEntity )
        goto LABEL_96;
      wallInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEntity->fields.wallInfo;
      v135 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardUserWallData__bool__TypeInfo, v132, v133);
      System_Func_object__bool____ctor(
        v135,
        (Il2CppObject *)v127,
        Method_WarBoardData___c__DisplayClass151_0__UpdateFromServerData_b__0__,
        0LL);
      v136 = System_Linq_Enumerable__FirstOrDefault_object__48617700(
               wallInfo,
               (System_Func_TSource__bool__o *)v135,
               (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
      if ( v136 )
      {
        v137 = v136;
        isPlayerGroup = *v131;
        if ( !*v131 )
          goto LABEL_96;
        klass_high = (const MethodInfo *)HIDWORD(v137[1].klass);
        if ( isPlayerGroup->fields._size > (int)klass_high )
          WarBoardWallData__SetBreakPoint((WarBoardWallData_o *)isPlayerGroup, (int32_t)klass_high, 0LL);
      }
      if ( (__int64)++v126 >= (int)walls->max_length )
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
  int32_t v5; // w2
  int32_t v6; // w3

  if ( !participantInfo )
    sub_1B64324(this);
  v4 = WarBoardData_BattleParticipantInfo__ToUniqueIndexArray(participantInfo, 0LL);
  this->fields.latestBattlePieceUniqueIndexes = v4;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.latestBattlePieceUniqueIndexes, (int32_t)v4, v5, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardData__UpdateLatestPieceActionSquareIndexes(
        WarBoardData_o *this,
        int32_t fromSquareIndex,
        int32_t toSquareIndex,
        const MethodInfo *method)
{
  struct System_Int32_array *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  il2cpp_array_size_t max_length; // w8

  if ( (byte_49FA0F9 & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, *(_QWORD *)&fromSquareIndex);
    byte_49FA0F9 = 1;
  }
  v7 = (struct System_Int32_array *)sub_1B64170(int___TypeInfo, 2LL);
  if ( !v7 )
    sub_1B64324(0LL);
  max_length = v7->max_length;
  if ( !max_length || (v7->m_Items[1] = fromSquareIndex, max_length == 1) )
    sub_1B6432C(v7, v7);
  v7->m_Items[2] = toSquareIndex;
  this->fields.latestPieceActionSquareIndexes = v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.latestPieceActionSquareIndexes, (int32_t)v7, v8, v9);
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
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  System_Object_array *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  ServantStatusBattleListViewItem_o *p_condSquares; // x19
  System_Collections_Generic_IEnumerable_T__o *condSquares; // t1
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_object__o *v25; // x21
  System_Object_array *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3

  if ( (byte_49FA0DD & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardSquareData__Add__, square);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardSquareData__Remove__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardSquareData___ctor___75674728, v7);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardSquareData__TypeInfo, v8);
    byte_49FA0DD = 1;
  }
  squares = (System_Collections_Generic_IEnumerable_T__o *)this->fields.squares;
  v10 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WarBoardSquareData__TypeInfo,
                                                       square,
                                                       method);
  System_Collections_Generic_List_object____ctor_55234504(
    v10,
    squares,
    (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor___75674728);
  if ( !v10 )
    goto LABEL_10;
  items = v10->fields._items;
  v15 = Method_System_Collections_Generic_List_WarBoardSquareData__Add__;
  ++v10->fields._version;
  if ( !items )
    goto LABEL_10;
  size = v10->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      (Il2CppObject *)square,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &items->obj.klass + size;
    v10->fields._size = size + 1;
    v17[4] = (Il2CppClass *)square;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)square, v12, v13);
  }
  v18 = System_Collections_Generic_List_object___ToArray(
          v10,
          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  this->fields.squares = (struct WarBoardSquareData_array *)v18;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.squares, (int32_t)v18, v19, v20);
  condSquares = (System_Collections_Generic_IEnumerable_T__o *)this->fields.condSquares;
  p_condSquares = (ServantStatusBattleListViewItem_o *)&this->fields.condSquares;
  v25 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WarBoardSquareData__TypeInfo,
                                                       v23,
                                                       v24);
  System_Collections_Generic_List_object____ctor_55234504(
    v25,
    condSquares,
    (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor___75674728);
  if ( !v25 )
LABEL_10:
    sub_1B64324(v11);
  System_Collections_Generic_List_object___Remove(
    v25,
    (Il2CppObject *)square,
    (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_WarBoardSquareData__Remove__);
  v26 = System_Collections_Generic_List_object___ToArray(
          v25,
          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  p_condSquares->klass = (ServantStatusBattleListViewItem_c *)v26;
  sub_1B6406C(p_condSquares, (int32_t)v26, v27, v28);
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
  __int64 v10; // x2
  il2cpp_array_size_t max_length; // w8
  Il2CppObject *v12; // x1
  WarBoardUiData_o *v13; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  Il2CppClass *klass; // x8
  _QWORD *v17; // x9
  __int64 monitor_low; // x10
  __int64 v19; // x8

  if ( (byte_49FA10A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardUiData__Add__, *(_QWORD *)&squareIndex);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardUiData__Remove__, v7);
    sub_1B640C8(&WarBoardUiData_TypeInfo, v8);
    byte_49FA10A = 1;
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
        (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_WarBoardUiData__Remove__);
      return;
    }
LABEL_16:
    sub_1B64324(UiData);
  }
  if ( max_length )
  {
    v13 = (WarBoardUiData_o *)sub_1B64314(WarBoardUiData_TypeInfo, 0LL, v10);
    WarBoardUiData___ctor_35284628(v13, squareIndex, setKeys, 0LL);
    UiData = (Il2CppObject *)this->fields.listUiData;
    if ( !UiData )
      goto LABEL_16;
    klass = UiData[1].klass;
    v17 = Method_System_Collections_Generic_List_WarBoardUiData__Add__;
    ++HIDWORD(UiData[1].monitor);
    if ( !klass )
      goto LABEL_16;
    monitor_low = SLODWORD(UiData[1].monitor);
    if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)UiData,
        (Il2CppObject *)v13,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    }
    else
    {
      v19 = (__int64)klass + 8 * monitor_low;
      LODWORD(UiData[1].monitor) = monitor_low + 1;
      *(_QWORD *)(v19 + 32) = v13;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 32), (int32_t)v13, v14, v15);
    }
  }
}


void __fastcall WarBoardData__UpdateUiData_35093264(
        WarBoardData_o *this,
        System_Int32_array *pieceIndex,
        System_String_array *setKeys,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *UiData_35092672; // x0
  __int64 v10; // x2
  il2cpp_array_size_t max_length; // w8
  Il2CppObject *v12; // x1
  WarBoardUiData_o *v13; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  Il2CppClass *klass; // x8
  _QWORD *v17; // x9
  __int64 monitor_low; // x10
  __int64 v19; // x8

  if ( (byte_49FA10B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardUiData__Add__, pieceIndex);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardUiData__Remove__, v7);
    sub_1B640C8(&WarBoardUiData_TypeInfo, v8);
    byte_49FA10B = 1;
  }
  UiData_35092672 = (Il2CppObject *)WarBoardData__GetUiData_35092672(this, pieceIndex, (const MethodInfo *)setKeys);
  if ( !setKeys )
    goto LABEL_16;
  max_length = setKeys->max_length;
  v12 = UiData_35092672;
  if ( UiData_35092672 )
  {
    if ( max_length )
    {
      WarBoardUiData__SetKeys((WarBoardUiData_o *)UiData_35092672, setKeys, 0LL);
      return;
    }
    UiData_35092672 = (Il2CppObject *)this->fields.listUiData;
    if ( UiData_35092672 )
    {
      System_Collections_Generic_List_object___Remove(
        (System_Collections_Generic_List_object__o *)UiData_35092672,
        v12,
        (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_WarBoardUiData__Remove__);
      return;
    }
LABEL_16:
    sub_1B64324(UiData_35092672);
  }
  if ( max_length )
  {
    v13 = (WarBoardUiData_o *)sub_1B64314(WarBoardUiData_TypeInfo, 0LL, v10);
    WarBoardUiData___ctor_35284700(v13, pieceIndex, setKeys, 0LL);
    UiData_35092672 = (Il2CppObject *)this->fields.listUiData;
    if ( !UiData_35092672 )
      goto LABEL_16;
    klass = UiData_35092672[1].klass;
    v17 = Method_System_Collections_Generic_List_WarBoardUiData__Add__;
    ++HIDWORD(UiData_35092672[1].monitor);
    if ( !klass )
      goto LABEL_16;
    monitor_low = SLODWORD(UiData_35092672[1].monitor);
    if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)UiData_35092672,
        (Il2CppObject *)v13,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    }
    else
    {
      v19 = (__int64)klass + 8 * monitor_low;
      LODWORD(UiData_35092672[1].monitor) = monitor_low + 1;
      *(_QWORD *)(v19 + 32) = v13;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 32), (int32_t)v13, v14, v15);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  WarBoardData___c_c *v7; // x0
  System_Object_array *pieces; // x19
  System_Predicate_object__o *_9__62_0; // x20
  Il2CppObject *v10; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  int64_t result; // x0

  if ( (byte_49FA0B6 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Find_WarBoardPieceData___, method);
    sub_1B640C8(&System_Predicate_WarBoardPieceData__TypeInfo, v4);
    sub_1B640C8(&Method_WarBoardData___c__get_PlayerMasterUserEquipId_b__62_0__, v5);
    sub_1B640C8(&WarBoardData___c_TypeInfo, v6);
    byte_49FA0B6 = 1;
  }
  v7 = WarBoardData___c_TypeInfo;
  pieces = (System_Object_array *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v7 = WarBoardData___c_TypeInfo;
  }
  _9__62_0 = (System_Predicate_object__o *)v7->static_fields->__9__62_0;
  if ( !_9__62_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = WarBoardData___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__62_0 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_WarBoardPieceData__TypeInfo, method, v2);
    System_Predicate_object____ctor(_9__62_0, v10, Method_WarBoardData___c__get_PlayerMasterUserEquipId_b__62_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__62_0 = (struct System_Predicate_WarBoardPieceData__o *)_9__62_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__62_0, (int32_t)_9__62_0, v12, v13);
  }
  result = (int64_t)System_Array__Find_object_(
                      pieces,
                      (System_Predicate_T__o *)_9__62_0,
                      (const MethodInfo_2F2FF10 *)Method_System_Array_Find_WarBoardPieceData___);
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
    sub_1B64324(this);
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

  this->fields._bgAnimationInfo_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._bgAnimationInfo_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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
  int32_t v10; // w2
  int32_t v11; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  v9 = WarBoardData_BattleParticipantInfo__AggregateBattleParticipants(v7, attackPieceData, targetPieceData, v8);
  this->fields._Participants_k__BackingField = v9;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v9, v10, v11);
}


void __fastcall WarBoardData_BattleParticipantInfo___ctor_35242772(
        WarBoardData_BattleParticipantInfo_o *this,
        System_UInt32_array *uniqueIndexArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  Il2CppObject *Instance; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  void *monitor; // x1
  __int64 v17; // x1
  __int64 v18; // x2
  System_Func_T__TResult__o *v19; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_Object_array *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3

  if ( (byte_49FA216 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_uint__WarBoardPieceData___, uniqueIndexArray);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, v5);
    sub_1B640C8(&System_Func_uint__WarBoardPieceData__TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7);
    sub_1B640C8(&Method_WarBoardData_BattleParticipantInfo___c__DisplayClass13_0___ctor_b__0__, v8);
    sub_1B640C8(&WarBoardData_BattleParticipantInfo___c__DisplayClass13_0_TypeInfo, v9);
    byte_49FA216 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v12 = sub_1B64314(WarBoardData_BattleParticipantInfo___c__DisplayClass13_0_TypeInfo, v10, v11);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !uniqueIndexArray )
    goto LABEL_9;
  if ( (int)uniqueIndexArray->max_length > 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance && v12 )
    {
      monitor = Instance[27].monitor;
      *(_QWORD *)(v12 + 16) = monitor;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)monitor, v14, v15);
      v19 = (System_Func_T__TResult__o *)sub_1B64314(System_Func_uint__WarBoardPieceData__TypeInfo, v17, v18);
      System_Func_uint__object____ctor(
        v19,
        (Il2CppObject *)v12,
        Method_WarBoardData_BattleParticipantInfo___c__DisplayClass13_0___ctor_b__0__,
        0LL);
      v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_uint__object_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)uniqueIndexArray,
                                                                   (System_Func_TSource__TResult__o *)v19,
                                                                   (const MethodInfo_2E6A5D4 *)Method_System_Linq_Enumerable_Select_uint__WarBoardPieceData___);
      v21 = System_Linq_Enumerable__ToArray_object_(
              v20,
              (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
      this->fields._Participants_k__BackingField = (struct WarBoardPieceData_array *)v21;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v21, v22, v23);
      return;
    }
LABEL_9:
    sub_1B64324(Instance);
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
  WarBoardData_o *Instance; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Object_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  Il2CppClass **v24; // x0
  __int64 v25; // x1
  struct WarBoardStageNpcMaster_o *stageNpcMaster; // x8
  WarBoardPieceData_array *v27; // x20
  unsigned __int64 v28; // x23
  WarBoardPieceData_o **p_npcEntityDict; // x25
  WarBoardPieceData_o *v30; // x21
  int32_t v31; // w2
  int32_t v32; // w3
  struct System_Object_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  Il2CppClass **v36; // x0

  if ( (byte_49FA218 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, attackPieceData);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPieceData__Contains__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    byte_49FA218 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                       attackPieceData,
                                                       targetPieceData);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( !v11 )
    goto LABEL_31;
  items = v11->fields._items;
  v16 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
  ++v11->fields._version;
  if ( !items )
    goto LABEL_31;
  size = v11->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      (Il2CppObject *)attackPieceData,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    v11->fields._size = size + 1;
    v18[4] = (Il2CppClass *)attackPieceData;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)attackPieceData, v13, v14);
  }
  v21 = v11->fields._items;
  v22 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
  ++v11->fields._version;
  if ( !v21 )
    goto LABEL_31;
  v23 = v11->fields._size;
  if ( (unsigned int)v23 >= v21->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      (Il2CppObject *)targetPieceData,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &v21->obj.klass + v23;
    v11->fields._size = v23 + 1;
    v24[4] = (Il2CppClass *)targetPieceData;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)targetPieceData, v19, v20);
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || !targetPieceData
    || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0LL
    || (Instance = (WarBoardData_o *)WarBoardData__GetPicesForRangeIsAlive(
                                       Instance,
                                       targetPieceData->fields._nowSquareIndex_k__BackingField,
                                       1,
                                       1,
                                       0LL)) == 0LL )
  {
LABEL_31:
    sub_1B64324(Instance);
  }
  stageNpcMaster = Instance->fields.stageNpcMaster;
  v27 = (WarBoardPieceData_array *)Instance;
  if ( (int)stageNpcMaster >= 1 )
  {
    v28 = 0LL;
    p_npcEntityDict = (WarBoardPieceData_o **)&Instance->fields.npcEntityDict;
    do
    {
      if ( v28 >= (unsigned int)stageNpcMaster )
        sub_1B6432C(Instance, v25);
      v30 = p_npcEntityDict[v28];
      Instance = (WarBoardData_o *)System_Collections_Generic_List_object___Contains(
                                     v11,
                                     (Il2CppObject *)v30,
                                     (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_WarBoardPieceData__Contains__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !v30 )
          goto LABEL_31;
        if ( v30->fields._type_k__BackingField != 1 )
        {
          Instance = (WarBoardData_o *)v30->fields._battleServant_k__BackingField;
          if ( !Instance
            || (Instance = (WarBoardData_o *)BattleServantData__HasAvailableWarBoardNotAttackedBuff(
                                               (BattleServantData_o *)Instance,
                                               0LL),
                ((unsigned __int8)Instance & 1) == 0) )
          {
            v33 = v11->fields._items;
            v34 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
            ++v11->fields._version;
            if ( !v33 )
              goto LABEL_31;
            v35 = v11->fields._size;
            if ( (unsigned int)v35 >= v33->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v11,
                (Il2CppObject *)v30,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
            }
            else
            {
              v36 = &v33->obj.klass + v35;
              v11->fields._size = v35 + 1;
              v36[4] = (Il2CppClass *)v30;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v36 + 4), (int32_t)v30, v31, v32);
            }
          }
        }
      }
      LODWORD(stageNpcMaster) = v27->max_length;
      ++v28;
    }
    while ( (__int64)v28 < (int)stageNpcMaster );
  }
  return (WarBoardPieceData_array *)System_Collections_Generic_List_object___ToArray(
                                      v11,
                                      (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
}


WarBoardData_BattleParticipantInfo_o *__fastcall WarBoardData_BattleParticipantInfo__LoadFromUniqueIndex(
        System_UInt32_array *uniqueIndexArray,
        const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardData_BattleParticipantInfo_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_49FA219 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardData_BattleParticipantInfo_TypeInfo, method);
    byte_49FA219 = 1;
  }
  v4 = (WarBoardData_BattleParticipantInfo_o *)sub_1B64314(WarBoardData_BattleParticipantInfo_TypeInfo, method, v2);
  WarBoardData_BattleParticipantInfo___ctor_35242772(v4, uniqueIndexArray, v5);
  return v4;
}


System_UInt32_array *__fastcall WarBoardData_BattleParticipantInfo__ToUniqueIndexArray(
        WarBoardData_BattleParticipantInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WarBoardData_BattleParticipantInfo___c_c *v8; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Participants_k__BackingField; // x19
  System_Func_T__TResult__o *_9__14_0; // x20
  Il2CppObject *v11; // x21
  struct WarBoardData_BattleParticipantInfo___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_49FA217 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__uint___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_uint___, v4);
    sub_1B640C8(&System_Func_WarBoardPieceData__uint__TypeInfo, v5);
    sub_1B640C8(&Method_WarBoardData_BattleParticipantInfo___c__ToUniqueIndexArray_b__14_0__, v6);
    sub_1B640C8(&WarBoardData_BattleParticipantInfo___c_TypeInfo, v7);
    byte_49FA217 = 1;
  }
  v8 = WarBoardData_BattleParticipantInfo___c_TypeInfo;
  Participants_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._Participants_k__BackingField;
  if ( !WarBoardData_BattleParticipantInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_BattleParticipantInfo___c_TypeInfo);
    v8 = WarBoardData_BattleParticipantInfo___c_TypeInfo;
  }
  _9__14_0 = (System_Func_T__TResult__o *)v8->static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = WarBoardData_BattleParticipantInfo___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__14_0 = (System_Func_T__TResult__o *)sub_1B64314(System_Func_WarBoardPieceData__uint__TypeInfo, method, v2);
    System_Func_object__uint____ctor(
      _9__14_0,
      v11,
      Method_WarBoardData_BattleParticipantInfo___c__ToUniqueIndexArray_b__14_0__,
      0LL);
    static_fields = WarBoardData_BattleParticipantInfo___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Func_WarBoardPieceData__uint__o *)_9__14_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__14_0, (int32_t)_9__14_0, v13, v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__uint_(
                                                               Participants_k__BackingField,
                                                               (System_Func_TSource__TResult__o *)_9__14_0,
                                                               (const MethodInfo_2E69A04 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__uint___);
  return System_Linq_Enumerable__ToArray_uint_(
           v15,
           (const MethodInfo_2E714D4 *)Method_System_Linq_Enumerable_ToArray_uint___);
}


WarBoardPieceData_o *__fastcall WarBoardData_BattleParticipantInfo__get_Attacker(
        WarBoardData_BattleParticipantInfo_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceData_array *Participants_k__BackingField; // x8

  Participants_k__BackingField = this->fields._Participants_k__BackingField;
  if ( !Participants_k__BackingField )
    sub_1B64324(this);
  if ( !Participants_k__BackingField->max_length )
    sub_1B6432C(this, method);
  return Participants_k__BackingField->m_Items[0];
}


WarBoardPieceData_o *__fastcall WarBoardData_BattleParticipantInfo__get_Defender(
        WarBoardData_BattleParticipantInfo_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceData_array *Participants_k__BackingField; // x8

  Participants_k__BackingField = this->fields._Participants_k__BackingField;
  if ( !Participants_k__BackingField )
    sub_1B64324(this);
  if ( Participants_k__BackingField->max_length <= 1 )
    sub_1B6432C(this, method);
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
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FA21A & 1) == 0 )
  {
    sub_1B640C8(&WarBoardData_BattleParticipantInfo___c_TypeInfo, v1);
    byte_49FA21A = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(WarBoardData_BattleParticipantInfo___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  WarBoardData_BattleParticipantInfo___c_TypeInfo->static_fields->__9 = (struct WarBoardData_BattleParticipantInfo___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)WarBoardData_BattleParticipantInfo___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
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
    sub_1B64324(0LL);
  return WarBoardData__GetPiece_35061364(warBoardData, x, 0, 0LL);
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
  int32_t v3; // w2
  int32_t v4; // w3
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  struct UnityEngine_Vector2_o zeroVector; // d1
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_QWORD *)&this->fields.questId = 0LL;
  this->fields.stageId = 0;
  this->fields.pieceSaves = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.pieceSaves, 0, v3, v4);
  this->fields.itemSaves = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.itemSaves, 0, v5, v6);
  this->fields.treasureSaves = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.treasureSaves, 0, v7, v8);
  this->fields.wallSaves = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.wallSaves, 0, v9, v10);
  this->fields.squareSaves = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.squareSaves, 0, v11, v12);
  if ( !byte_49F700A )
  {
    sub_1B640C8(&UnityEngine_Vector2_TypeInfo, v13);
    byte_49F700A = 1;
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventSaves, 0, v14, v15);
  this->fields.winCondId = -1;
  this->fields.latestBattlePieceUniqueIndexes = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.latestBattlePieceUniqueIndexes, 0, v17, v18);
  this->fields.prevCondSaves = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.prevCondSaves, 0, v19, v20);
  this->fields.reinforcementsSaves = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.reinforcementsSaves, 0, v21, v22);
  this->fields.playedReinforcements = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.playedReinforcements, 0, v23, v24);
  this->fields.uiDataSaves = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.uiDataSaves, 0, v25, v26);
  this->fields.bgAnimationInfo = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.bgAnimationInfo, 0, v27, v28);
  this->fields.squareIndexInfo = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.squareIndexInfo, 0, v29, v30);
  this->fields.bossBattleInfo = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.bossBattleInfo, 0, v31, v32);
}


void __fastcall WarBoardData_WarBoardLocalSaveData___ctor_35238080(
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
  struct WarBoardDataEntity_o *serverData; // x8
  struct WarBoardPieceData_array *pieces; // x8
  __int64 v40; // x22
  struct WarBoardPieceData_SaveData_array *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  __int64 v44; // x1
  __int64 v45; // x2
  unsigned __int64 v46; // x24
  __int64 v47; // x26
  __int64 v48; // x27
  struct WarBoardPieceData_array *v49; // x8
  struct WarBoardPieceData_SaveData_array *pieceSaves; // x28
  WarBoardPieceData_o *v51; // x23
  WarBoardPieceData_SaveData_o *v52; // x22
  const MethodInfo *v53; // x2
  int32_t v54; // w2
  int32_t v55; // w3
  struct WarBoardItemData_array *items; // x8
  __int64 v57; // x22
  struct WarBoardItemData_SaveData_array *v58; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  __int64 v61; // x2
  unsigned __int64 v62; // x24
  __int64 v63; // x26
  __int64 v64; // x27
  struct WarBoardItemData_array *v65; // x8
  struct WarBoardItemData_SaveData_array *itemSaves; // x28
  WarBoardItemData_o *v67; // x23
  WarBoardItemData_SaveData_o *v68; // x22
  const MethodInfo *v69; // x2
  int32_t v70; // w2
  int32_t v71; // w3
  struct WarBoardTreasureData_array *treasures; // x8
  __int64 v73; // x22
  struct WarBoardTreasureData_SaveData_array *v74; // x0
  int32_t v75; // w2
  int32_t v76; // w3
  __int64 v77; // x2
  unsigned __int64 v78; // x24
  __int64 v79; // x26
  __int64 v80; // x27
  struct WarBoardTreasureData_array *v81; // x8
  struct WarBoardTreasureData_SaveData_array *treasureSaves; // x28
  WarBoardTreasureData_o *v83; // x23
  WarBoardTreasureData_SaveData_o *v84; // x22
  const MethodInfo *v85; // x2
  int32_t v86; // w2
  int32_t v87; // w3
  struct WarBoardWallData_array *walls; // x8
  __int64 v89; // x22
  struct WarBoardWallData_SaveData_array *v90; // x0
  int32_t v91; // w2
  int32_t v92; // w3
  __int64 v93; // x2
  unsigned __int64 v94; // x24
  __int64 v95; // x26
  __int64 v96; // x27
  struct WarBoardWallData_array *v97; // x8
  struct WarBoardWallData_SaveData_array *wallSaves; // x28
  WarBoardWallData_o *v99; // x23
  WarBoardWallData_SaveData_o *v100; // x22
  const MethodInfo *v101; // x2
  int32_t v102; // w2
  int32_t v103; // w3
  struct WarBoardSquareData_array *squares; // x8
  __int64 v105; // x22
  struct WarBoardSquareData_SaveData_array *v106; // x0
  int32_t v107; // w2
  int32_t v108; // w3
  __int64 v109; // x2
  unsigned __int64 v110; // x24
  __int64 v111; // x26
  __int64 v112; // x27
  struct WarBoardSquareData_array *v113; // x8
  struct WarBoardSquareData_SaveData_array *squareSaves; // x28
  WarBoardSquareData_o *v115; // x23
  WarBoardSquareData_SaveData_o *v116; // x22
  const MethodInfo *v117; // x2
  int32_t v118; // w2
  int32_t v119; // w3
  struct UnityEngine_Vector2_o zeroVector; // d0
  struct System_Collections_Generic_List_WarBoardEventData__o *listEvent; // x8
  __int64 size; // x21
  struct WarBoardEventData_SaveData_array *v123; // x0
  int32_t v124; // w2
  int32_t v125; // w3
  int32_t v126; // w2
  int32_t v127; // w3
  unsigned __int64 v128; // x23
  __int64 v129; // x28
  struct WarBoardEventData_SaveData_array *eventSaves; // x29
  Il2CppObject *Item; // x25
  __int64 v132; // x1
  __int64 v133; // x2
  WarBoardEventData_SaveData_o *v134; // x24
  const MethodInfo *v135; // x2
  int32_t v136; // w2
  int32_t v137; // w3
  struct System_Int32_array *latestPieceActionSquareIndexes; // x1
  struct System_UInt32_array *latestBattlePieceUniqueIndexes; // x1
  int32_t v140; // w2
  int32_t v141; // w3
  struct System_Collections_Generic_List_WarBoardPrevCondData__o *listPrevCond; // x8
  __int64 v143; // x21
  struct WarBoardPrevCondData_SaveData_array *v144; // x0
  int32_t v145; // w2
  int32_t v146; // w3
  unsigned __int64 v147; // x23
  __int64 v148; // x28
  struct WarBoardPrevCondData_SaveData_array *prevCondSaves; // x29
  Il2CppObject *v150; // x25
  __int64 v151; // x1
  __int64 v152; // x2
  WarBoardPrevCondData_SaveData_o *v153; // x24
  const MethodInfo *v154; // x2
  int32_t v155; // w2
  int32_t v156; // w3
  struct System_Collections_Generic_List_HoldReinforcementsData__o *reinforcementsSaveList; // x8
  __int64 v158; // x21
  struct HoldReinforcementsData_SaveData_array *v159; // x0
  int32_t v160; // w2
  int32_t v161; // w3
  unsigned __int64 v162; // x23
  __int64 v163; // x28
  struct HoldReinforcementsData_SaveData_array *reinforcementsSaves; // x29
  Il2CppObject *v165; // x25
  __int64 v166; // x1
  __int64 v167; // x2
  HoldReinforcementsData_SaveData_o *v168; // x24
  const MethodInfo *v169; // x2
  int32_t v170; // w2
  int32_t v171; // w3
  struct System_Int32_array *v172; // x0
  int32_t v173; // w2
  int32_t v174; // w3
  struct System_Collections_Generic_List_WarBoardUiData__o *listUiData; // x8
  __int64 v176; // x21
  struct WarBoardUiData_SaveData_array *v177; // x0
  int32_t v178; // w2
  int32_t v179; // w3
  unsigned __int64 v180; // x23
  __int64 v181; // x28
  struct WarBoardUiData_SaveData_array *uiDataSaves; // x29
  Il2CppObject *v183; // x25
  __int64 v184; // x1
  __int64 v185; // x2
  WarBoardUiData_SaveData_o *v186; // x24
  const MethodInfo *v187; // x2
  int32_t v188; // w2
  int32_t v189; // w3
  struct WarBoardDataEntity_o *v190; // x8
  int32_t v191; // w22
  struct WarBoardSquareIndexData_SaveData_array *v192; // x0
  int32_t v193; // w2
  int32_t v194; // w3
  __int64 v195; // x2
  unsigned __int64 v196; // x24
  __int64 v197; // x26
  __int64 v198; // x27
  struct WarBoardDataEntity_o *v199; // x8
  struct WarBoardSquareIndexData_array *squareIndexInfo; // x8
  struct WarBoardSquareIndexData_SaveData_array *v201; // x28
  WarBoardSquareIndexData_o *v202; // x23
  WarBoardSquareIndexData_SaveData_o *v203; // x22
  const MethodInfo *v204; // x2
  int32_t v205; // w2
  int32_t v206; // w3
  struct WarBoardDataEntity_o *v207; // x8
  int32_t v208; // w22
  struct WarBoardBossBattleData_SaveData_array *v209; // x0
  int32_t v210; // w2
  int32_t v211; // w3
  __int64 v212; // x2
  unsigned __int64 v213; // x24
  __int64 v214; // x26
  __int64 v215; // x27
  struct WarBoardDataEntity_o *v216; // x8
  struct WarBoardBossBattleData_array *bossBattleInfo; // x8
  struct WarBoardBossBattleData_SaveData_array *v218; // x28
  WarBoardBossBattleData_o *v219; // x23
  WarBoardBossBattleData_SaveData_o *v220; // x22
  int32_t v221; // w2
  int32_t v222; // w3
  int32_t ContinueConsumeType_k__BackingField; // w8
  __int64 v224; // x0

  if ( (byte_49FA215 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___, warBoardData);
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardUiData__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPrevCondData__get_Count__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardEventData__get_Count__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_HoldReinforcementsData__get_Count__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardEventData__get_Item__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardUiData__get_Item__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPrevCondData__get_Item__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_HoldReinforcementsData__get_Item__, v14);
    sub_1B640C8(&WarBoardTreasureData_SaveData___TypeInfo, v15);
    sub_1B640C8(&WarBoardSquareData_SaveData___TypeInfo, v16);
    sub_1B640C8(&WarBoardSquareIndexData_SaveData___TypeInfo, v17);
    sub_1B640C8(&HoldReinforcementsData_SaveData___TypeInfo, v18);
    sub_1B640C8(&WarBoardItemData_SaveData___TypeInfo, v19);
    sub_1B640C8(&WarBoardWallData_SaveData___TypeInfo, v20);
    sub_1B640C8(&WarBoardPrevCondData_SaveData___TypeInfo, v21);
    sub_1B640C8(&WarBoardEventData_SaveData___TypeInfo, v22);
    sub_1B640C8(&WarBoardUiData_SaveData___TypeInfo, v23);
    sub_1B640C8(&WarBoardPieceData_SaveData___TypeInfo, v24);
    sub_1B640C8(&WarBoardBossBattleData_SaveData___TypeInfo, v25);
    sub_1B640C8(&WarBoardSquareData_SaveData_TypeInfo, v26);
    sub_1B640C8(&WarBoardTreasureData_SaveData_TypeInfo, v27);
    sub_1B640C8(&WarBoardBossBattleData_SaveData_TypeInfo, v28);
    sub_1B640C8(&WarBoardItemData_SaveData_TypeInfo, v29);
    sub_1B640C8(&WarBoardPrevCondData_SaveData_TypeInfo, v30);
    sub_1B640C8(&WarBoardWallData_SaveData_TypeInfo, v31);
    sub_1B640C8(&WarBoardUiData_SaveData_TypeInfo, v32);
    sub_1B640C8(&WarBoardEventData_SaveData_TypeInfo, v33);
    sub_1B640C8(&WarBoardSquareIndexData_SaveData_TypeInfo, v34);
    sub_1B640C8(&HoldReinforcementsData_SaveData_TypeInfo, v35);
    sub_1B640C8(&WarBoardPieceData_SaveData_TypeInfo, v36);
    byte_49FA215 = 1;
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
  v40 = *(_QWORD *)&pieces->max_length;
  v41 = (struct WarBoardPieceData_SaveData_array *)sub_1B64170(WarBoardPieceData_SaveData___TypeInfo, (unsigned int)v40);
  this->fields.pieceSaves = v41;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.pieceSaves, (int32_t)v41, v42, v43);
  if ( (int)v40 >= 1 )
  {
    v46 = 0LL;
    v47 = (unsigned int)v40;
    v48 = 32LL;
    while ( 1 )
    {
      v49 = warBoardData->fields.pieces;
      if ( !v49 )
        break;
      if ( v46 >= v49->max_length )
        goto LABEL_118;
      pieceSaves = this->fields.pieceSaves;
      v51 = *(WarBoardPieceData_o **)((char *)&v49->obj.klass + v48);
      v52 = (WarBoardPieceData_SaveData_o *)sub_1B64314(WarBoardPieceData_SaveData_TypeInfo, v44, v45);
      WarBoardPieceData_SaveData___ctor_35241132(v52, v51, v53);
      if ( !pieceSaves )
        break;
      if ( v52 )
      {
        GutsCount = sub_1B64204(v52, pieceSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
        {
LABEL_119:
          v224 = sub_1B64348(GutsCount);
          sub_1B641F0(v224, 0LL);
        }
      }
      if ( v46 >= pieceSaves->max_length )
LABEL_118:
        sub_1B6432C(GutsCount, v44);
      *(Il2CppClass **)((char *)&pieceSaves->obj.klass + v48) = (Il2CppClass *)v52;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)pieceSaves + v48), (int32_t)v52, v54, v55);
      ++v46;
      v48 += 8LL;
      if ( v47 == v46 )
        goto LABEL_15;
    }
LABEL_117:
    sub_1B64324(GutsCount);
  }
LABEL_15:
  items = warBoardData->fields.items;
  if ( !items )
    goto LABEL_117;
  v57 = *(_QWORD *)&items->max_length;
  v58 = (struct WarBoardItemData_SaveData_array *)sub_1B64170(WarBoardItemData_SaveData___TypeInfo, (unsigned int)v57);
  this->fields.itemSaves = v58;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.itemSaves, (int32_t)v58, v59, v60);
  if ( (int)v57 >= 1 )
  {
    v62 = 0LL;
    v63 = (unsigned int)v57;
    v64 = 32LL;
    do
    {
      v65 = warBoardData->fields.items;
      if ( !v65 )
        goto LABEL_117;
      if ( v62 >= v65->max_length )
        goto LABEL_118;
      itemSaves = this->fields.itemSaves;
      v67 = *(WarBoardItemData_o **)((char *)&v65->obj.klass + v64);
      v68 = (WarBoardItemData_SaveData_o *)sub_1B64314(WarBoardItemData_SaveData_TypeInfo, v44, v61);
      WarBoardItemData_SaveData___ctor_35241216(v68, v67, v69);
      if ( !itemSaves )
        goto LABEL_117;
      if ( v68 )
      {
        GutsCount = sub_1B64204(v68, itemSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v62 >= itemSaves->max_length )
        goto LABEL_118;
      *(Il2CppClass **)((char *)&itemSaves->obj.klass + v64) = (Il2CppClass *)v68;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)itemSaves + v64), (int32_t)v68, v70, v71);
      ++v62;
      v64 += 8LL;
    }
    while ( v63 != v62 );
  }
  treasures = warBoardData->fields.treasures;
  if ( !treasures )
    goto LABEL_117;
  v73 = *(_QWORD *)&treasures->max_length;
  v74 = (struct WarBoardTreasureData_SaveData_array *)sub_1B64170(
                                                        WarBoardTreasureData_SaveData___TypeInfo,
                                                        (unsigned int)v73);
  this->fields.treasureSaves = v74;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.treasureSaves, (int32_t)v74, v75, v76);
  if ( (int)v73 >= 1 )
  {
    v78 = 0LL;
    v79 = (unsigned int)v73;
    v80 = 32LL;
    do
    {
      v81 = warBoardData->fields.treasures;
      if ( !v81 )
        goto LABEL_117;
      if ( v78 >= v81->max_length )
        goto LABEL_118;
      treasureSaves = this->fields.treasureSaves;
      v83 = *(WarBoardTreasureData_o **)((char *)&v81->obj.klass + v80);
      v84 = (WarBoardTreasureData_SaveData_o *)sub_1B64314(WarBoardTreasureData_SaveData_TypeInfo, v44, v77);
      WarBoardTreasureData_SaveData___ctor_35241300(v84, v83, v85);
      if ( !treasureSaves )
        goto LABEL_117;
      if ( v84 )
      {
        GutsCount = sub_1B64204(v84, treasureSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v78 >= treasureSaves->max_length )
        goto LABEL_118;
      *(Il2CppClass **)((char *)&treasureSaves->obj.klass + v80) = (Il2CppClass *)v84;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)treasureSaves + v80), (int32_t)v84, v86, v87);
      ++v78;
      v80 += 8LL;
    }
    while ( v79 != v78 );
  }
  walls = warBoardData->fields.walls;
  if ( !walls )
    goto LABEL_117;
  v89 = *(_QWORD *)&walls->max_length;
  v90 = (struct WarBoardWallData_SaveData_array *)sub_1B64170(WarBoardWallData_SaveData___TypeInfo, (unsigned int)v89);
  this->fields.wallSaves = v90;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.wallSaves, (int32_t)v90, v91, v92);
  if ( (int)v89 >= 1 )
  {
    v94 = 0LL;
    v95 = (unsigned int)v89;
    v96 = 32LL;
    do
    {
      v97 = warBoardData->fields.walls;
      if ( !v97 )
        goto LABEL_117;
      if ( v94 >= v97->max_length )
        goto LABEL_118;
      wallSaves = this->fields.wallSaves;
      v99 = *(WarBoardWallData_o **)((char *)&v97->obj.klass + v96);
      v100 = (WarBoardWallData_SaveData_o *)sub_1B64314(WarBoardWallData_SaveData_TypeInfo, v44, v93);
      WarBoardWallData_SaveData___ctor_35241416(v100, v99, v101);
      if ( !wallSaves )
        goto LABEL_117;
      if ( v100 )
      {
        GutsCount = sub_1B64204(v100, wallSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v94 >= wallSaves->max_length )
        goto LABEL_118;
      *(Il2CppClass **)((char *)&wallSaves->obj.klass + v96) = (Il2CppClass *)v100;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)wallSaves + v96), (int32_t)v100, v102, v103);
      ++v94;
      v96 += 8LL;
    }
    while ( v95 != v94 );
  }
  squares = warBoardData->fields.squares;
  if ( !squares )
    goto LABEL_117;
  v105 = *(_QWORD *)&squares->max_length;
  v106 = (struct WarBoardSquareData_SaveData_array *)sub_1B64170(
                                                       WarBoardSquareData_SaveData___TypeInfo,
                                                       (unsigned int)v105);
  this->fields.squareSaves = v106;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.squareSaves, (int32_t)v106, v107, v108);
  if ( (int)v105 >= 1 )
  {
    v110 = 0LL;
    v111 = (unsigned int)v105;
    v112 = 32LL;
    do
    {
      v113 = warBoardData->fields.squares;
      if ( !v113 )
        goto LABEL_117;
      if ( v110 >= v113->max_length )
        goto LABEL_118;
      squareSaves = this->fields.squareSaves;
      v115 = *(WarBoardSquareData_o **)((char *)&v113->obj.klass + v112);
      v116 = (WarBoardSquareData_SaveData_o *)sub_1B64314(WarBoardSquareData_SaveData_TypeInfo, v44, v109);
      WarBoardSquareData_SaveData___ctor_35241524(v116, v115, v117);
      if ( !squareSaves )
        goto LABEL_117;
      if ( v116 )
      {
        GutsCount = sub_1B64204(v116, squareSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v110 >= squareSaves->max_length )
        goto LABEL_118;
      *(Il2CppClass **)((char *)&squareSaves->obj.klass + v112) = (Il2CppClass *)v116;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)squareSaves + v112), (int32_t)v116, v118, v119);
      ++v110;
      v112 += 8LL;
    }
    while ( v111 != v110 );
  }
  if ( !byte_49F700A )
  {
    sub_1B640C8(&UnityEngine_Vector2_TypeInfo, v44);
    byte_49F700A = 1;
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
  v123 = (struct WarBoardEventData_SaveData_array *)sub_1B64170(
                                                      WarBoardEventData_SaveData___TypeInfo,
                                                      (unsigned int)size);
  this->fields.eventSaves = v123;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventSaves, (int32_t)v123, v124, v125);
  if ( (int)size >= 1 )
  {
    v128 = 0LL;
    v129 = 32LL;
    do
    {
      GutsCount = (__int64)warBoardData->fields.listEvent;
      if ( !GutsCount )
        goto LABEL_117;
      eventSaves = this->fields.eventSaves;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)GutsCount,
               v128,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_WarBoardEventData__get_Item__);
      v134 = (WarBoardEventData_SaveData_o *)sub_1B64314(WarBoardEventData_SaveData_TypeInfo, v132, v133);
      WarBoardEventData_SaveData___ctor_35241616(v134, (WarBoardEventData_o *)Item, v135);
      if ( !eventSaves )
        goto LABEL_117;
      if ( v134 )
      {
        GutsCount = sub_1B64204(v134, eventSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v128 >= eventSaves->max_length )
        goto LABEL_118;
      *(Il2CppClass **)((char *)&eventSaves->obj.klass + v129) = (Il2CppClass *)v134;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)eventSaves + v129), (int32_t)v134, v136, v137);
      ++v128;
      v129 += 8LL;
    }
    while ( size != v128 );
  }
  this->fields.winCondId = warBoardData->fields.winCondId;
  latestPieceActionSquareIndexes = warBoardData->fields.latestPieceActionSquareIndexes;
  this->fields.latestPieceActionSquareIndexes = latestPieceActionSquareIndexes;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.latestPieceActionSquareIndexes,
    (int32_t)latestPieceActionSquareIndexes,
    v126,
    v127);
  latestBattlePieceUniqueIndexes = warBoardData->fields.latestBattlePieceUniqueIndexes;
  this->fields.latestBattlePieceUniqueIndexes = latestBattlePieceUniqueIndexes;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.latestBattlePieceUniqueIndexes,
    (int32_t)latestBattlePieceUniqueIndexes,
    v140,
    v141);
  listPrevCond = warBoardData->fields.listPrevCond;
  if ( !listPrevCond )
    goto LABEL_117;
  v143 = (unsigned int)listPrevCond->fields._size;
  v144 = (struct WarBoardPrevCondData_SaveData_array *)sub_1B64170(
                                                         WarBoardPrevCondData_SaveData___TypeInfo,
                                                         (unsigned int)v143);
  this->fields.prevCondSaves = v144;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.prevCondSaves, (int32_t)v144, v145, v146);
  if ( (int)v143 >= 1 )
  {
    v147 = 0LL;
    v148 = 32LL;
    do
    {
      GutsCount = (__int64)warBoardData->fields.listPrevCond;
      if ( !GutsCount )
        goto LABEL_117;
      prevCondSaves = this->fields.prevCondSaves;
      v150 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)GutsCount,
               v147,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_WarBoardPrevCondData__get_Item__);
      v153 = (WarBoardPrevCondData_SaveData_o *)sub_1B64314(WarBoardPrevCondData_SaveData_TypeInfo, v151, v152);
      WarBoardPrevCondData_SaveData___ctor_35241676(v153, (WarBoardPrevCondData_o *)v150, v154);
      if ( !prevCondSaves )
        goto LABEL_117;
      if ( v153 )
      {
        GutsCount = sub_1B64204(v153, prevCondSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v147 >= prevCondSaves->max_length )
        goto LABEL_118;
      *(Il2CppClass **)((char *)&prevCondSaves->obj.klass + v148) = (Il2CppClass *)v153;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)prevCondSaves + v148), (int32_t)v153, v155, v156);
      ++v147;
      v148 += 8LL;
    }
    while ( v143 != v147 );
  }
  reinforcementsSaveList = warBoardData->fields.reinforcementsSaveList;
  if ( !reinforcementsSaveList )
    goto LABEL_117;
  v158 = (unsigned int)reinforcementsSaveList->fields._size;
  v159 = (struct HoldReinforcementsData_SaveData_array *)sub_1B64170(
                                                           HoldReinforcementsData_SaveData___TypeInfo,
                                                           (unsigned int)v158);
  this->fields.reinforcementsSaves = v159;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.reinforcementsSaves, (int32_t)v159, v160, v161);
  if ( (int)v158 >= 1 )
  {
    v162 = 0LL;
    v163 = 32LL;
    do
    {
      GutsCount = (__int64)warBoardData->fields.reinforcementsSaveList;
      if ( !GutsCount )
        goto LABEL_117;
      reinforcementsSaves = this->fields.reinforcementsSaves;
      v165 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)GutsCount,
               v162,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_HoldReinforcementsData__get_Item__);
      v168 = (HoldReinforcementsData_SaveData_o *)sub_1B64314(HoldReinforcementsData_SaveData_TypeInfo, v166, v167);
      HoldReinforcementsData_SaveData___ctor_35241728(v168, (HoldReinforcementsData_o *)v165, v169);
      if ( !reinforcementsSaves )
        goto LABEL_117;
      if ( v168 )
      {
        GutsCount = sub_1B64204(v168, reinforcementsSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v162 >= reinforcementsSaves->max_length )
        goto LABEL_118;
      *(Il2CppClass **)((char *)&reinforcementsSaves->obj.klass + v163) = (Il2CppClass *)v168;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)reinforcementsSaves + v163), (int32_t)v168, v170, v171);
      ++v162;
      v163 += 8LL;
    }
    while ( v158 != v162 );
  }
  GutsCount = (__int64)warBoardData->fields.playedStageReinforcementsList;
  if ( !GutsCount )
    goto LABEL_117;
  v172 = System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)GutsCount,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.playedReinforcements = v172;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.playedReinforcements, (int32_t)v172, v173, v174);
  listUiData = warBoardData->fields.listUiData;
  if ( !listUiData )
    goto LABEL_117;
  v176 = (unsigned int)listUiData->fields._size;
  v177 = (struct WarBoardUiData_SaveData_array *)sub_1B64170(WarBoardUiData_SaveData___TypeInfo, (unsigned int)v176);
  this->fields.uiDataSaves = v177;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.uiDataSaves, (int32_t)v177, v178, v179);
  if ( (int)v176 >= 1 )
  {
    v180 = 0LL;
    v181 = 32LL;
    do
    {
      GutsCount = (__int64)warBoardData->fields.listUiData;
      if ( !GutsCount )
        goto LABEL_117;
      uiDataSaves = this->fields.uiDataSaves;
      v183 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)GutsCount,
               v180,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_WarBoardUiData__get_Item__);
      v186 = (WarBoardUiData_SaveData_o *)sub_1B64314(WarBoardUiData_SaveData_TypeInfo, v184, v185);
      WarBoardUiData_SaveData___ctor_35241788(v186, (WarBoardUiData_o *)v183, v187);
      if ( !uiDataSaves )
        goto LABEL_117;
      if ( v186 )
      {
        GutsCount = sub_1B64204(v186, uiDataSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v180 >= uiDataSaves->max_length )
        goto LABEL_118;
      *(Il2CppClass **)((char *)&uiDataSaves->obj.klass + v181) = (Il2CppClass *)v186;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)uiDataSaves + v181), (int32_t)v186, v188, v189);
      ++v180;
      v181 += 8LL;
    }
    while ( v176 != v180 );
  }
  v190 = warBoardData->fields.serverData;
  if ( !v190 )
    goto LABEL_117;
  v191 = System_Linq_Enumerable__Count_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v190->fields.squareIndexInfo,
           (const MethodInfo_2E55CB4 *)Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___);
  v192 = (struct WarBoardSquareIndexData_SaveData_array *)sub_1B64170(
                                                            WarBoardSquareIndexData_SaveData___TypeInfo,
                                                            (unsigned int)v191);
  this->fields.squareIndexInfo = v192;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.squareIndexInfo, (int32_t)v192, v193, v194);
  if ( v191 >= 1 )
  {
    v196 = 0LL;
    v197 = (unsigned int)v191;
    v198 = 32LL;
    do
    {
      v199 = warBoardData->fields.serverData;
      if ( !v199 )
        goto LABEL_117;
      squareIndexInfo = v199->fields.squareIndexInfo;
      if ( !squareIndexInfo )
        goto LABEL_117;
      if ( v196 >= squareIndexInfo->max_length )
        goto LABEL_118;
      v201 = this->fields.squareIndexInfo;
      v202 = *(WarBoardSquareIndexData_o **)((char *)&squareIndexInfo->obj.klass + v198);
      v203 = (WarBoardSquareIndexData_SaveData_o *)sub_1B64314(WarBoardSquareIndexData_SaveData_TypeInfo, v44, v195);
      WarBoardSquareIndexData_SaveData___ctor_35241868(v203, v202, v204);
      if ( !v201 )
        goto LABEL_117;
      if ( v203 )
      {
        GutsCount = sub_1B64204(v203, v201->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v196 >= v201->max_length )
        goto LABEL_118;
      *(Il2CppClass **)((char *)&v201->obj.klass + v198) = (Il2CppClass *)v203;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)v201 + v198), (int32_t)v203, v205, v206);
      ++v196;
      v198 += 8LL;
    }
    while ( v197 != v196 );
  }
  v207 = warBoardData->fields.serverData;
  if ( !v207 )
    goto LABEL_117;
  v208 = System_Linq_Enumerable__Count_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v207->fields.bossBattleInfo,
           (const MethodInfo_2E55CB4 *)Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___);
  v209 = (struct WarBoardBossBattleData_SaveData_array *)sub_1B64170(
                                                           WarBoardBossBattleData_SaveData___TypeInfo,
                                                           (unsigned int)v208);
  this->fields.bossBattleInfo = v209;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.bossBattleInfo, (int32_t)v209, v210, v211);
  if ( v208 >= 1 )
  {
    v213 = 0LL;
    v214 = (unsigned int)v208;
    v215 = 32LL;
    do
    {
      v216 = warBoardData->fields.serverData;
      if ( !v216 )
        goto LABEL_117;
      bossBattleInfo = v216->fields.bossBattleInfo;
      if ( !bossBattleInfo )
        goto LABEL_117;
      if ( v213 >= bossBattleInfo->max_length )
        goto LABEL_118;
      v218 = this->fields.bossBattleInfo;
      v219 = *(WarBoardBossBattleData_o **)((char *)&bossBattleInfo->obj.klass + v215);
      v220 = (WarBoardBossBattleData_SaveData_o *)sub_1B64314(WarBoardBossBattleData_SaveData_TypeInfo, v44, v212);
      WarBoardBossBattleData_SaveData___ctor_35036840(v220, v219, 0LL);
      if ( !v218 )
        goto LABEL_117;
      if ( v220 )
      {
        GutsCount = sub_1B64204(v220, v218->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v213 >= v218->max_length )
        goto LABEL_118;
      *(Il2CppClass **)((char *)&v218->obj.klass + v215) = (Il2CppClass *)v220;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)v218 + v215), (int32_t)v220, v221, v222);
      ++v213;
      v215 += 8LL;
    }
    while ( v214 != v213 );
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
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FA21B & 1) == 0 )
  {
    sub_1B640C8(&WarBoardData___c_TypeInfo, v1);
    byte_49FA21B = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(WarBoardData___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  WarBoardData___c_TypeInfo->static_fields->__9 = (struct WarBoardData___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)WarBoardData___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
  return x->fields.squareIndex - y->fields.squareIndex;
}


uint32_t __fastcall WarBoardData___c____ctor_b__77_1(
        WarBoardData___c_o *this,
        WarBoardStageNpcEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return (x->fields.forceId << 24) | ((unsigned __int8)x->fields.groupId << 16);
}


uint32_t __fastcall WarBoardData___c____ctor_b__77_2(
        WarBoardData___c_o *this,
        WarBoardActionPointEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return (x->fields.forceId << 24) | ((unsigned __int8)x->fields.groupId << 16);
}


int32_t __fastcall WarBoardData___c____ctor_b__77_3(
        WarBoardData___c_o *this,
        WarBoardStageNpcEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.forceId;
}


int32_t __fastcall WarBoardData___c____ctor_b__77_4(
        WarBoardData___c_o *this,
        WarBoardStageNpcEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.groupId;
}


bool __fastcall WarBoardData___c____ctor_b__77_9(
        WarBoardData___c_o *this,
        WarBoardUserTreasureData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.isReceived;
}


BattleBuffData_o *__fastcall WarBoardData___c___BuffTurnProgressing_b__191_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *p,
        const MethodInfo *method)
{
  struct BattleServantData_o *battleServant_k__BackingField; // x8

  if ( !p )
    sub_1B64324(this);
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
    sub_1B64324(this);
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
  WarBoardManager_o *v3; // x19

  if ( (byte_49FA21D & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_49FA21D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  v3 = (WarBoardManager_o *)Instance;
  WarBoardManager__UpdateEventBossUIData((WarBoardManager_o *)Instance, 0LL);
  WarBoardManager__SaveEventBossUIData(
    v3,
    v3->fields._EventId_k__BackingField,
    v3->fields._StageId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


bool __fastcall WarBoardData___c___GetAliveEnemyServantPieces_b__110_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
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
    sub_1B64324(this);
  return !x->fields._isDead_k__BackingField;
}


bool __fastcall WarBoardData___c___GetAlivePlayerGroupServantPieces_b__109_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
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
    sub_1B64324(this);
  return !x->fields._isDead_k__BackingField && x->fields._type_k__BackingField == 0;
}


bool __fastcall WarBoardData___c___GetEditableServantPieces_b__120_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
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
    sub_1B64324(this);
  return x->fields._holdNum_k__BackingField < 1;
}


int32_t __fastcall WarBoardData___c___GetInRangeSquareIndecies_b__123_0(
        WarBoardData___c_o *this,
        WarBoardData_SquareRangeSearch_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.squareIndex;
}


bool __fastcall WarBoardData___c___GetPlayerMasterPiece_b__104_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
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
    sub_1B64324(this);
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
  if ( (byte_49FA21C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__, status);
    byte_49FA21C = 1;
  }
  return value;
}


int32_t __fastcall WarBoardData___c___SetContinue_b__82_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields._index_k__BackingField;
}


BattleServantData_o *__fastcall WarBoardData___c___SetContinue_b__82_1(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields._battleServant_k__BackingField;
}


bool __fastcall WarBoardData___c___SetContinue_b__82_2(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields._isDead_k__BackingField && x->fields._battleServant_k__BackingField != 0LL;
}


int32_t __fastcall WarBoardData___c___SetContinue_b__82_3(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct BattleServantData_o *battleServant_k__BackingField; // x8

  if ( !x || (battleServant_k__BackingField = x->fields._battleServant_k__BackingField) == 0LL )
    sub_1B64324(this);
  return battleServant_k__BackingField->fields.uniqueId;
}


void __fastcall WarBoardData___c___SetContinue_b__82_4(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  WarBoardPieceData__ProcContinue(x, (const MethodInfo *)x);
}


bool __fastcall WarBoardData___c___SetPlayerMasterUserEquip_b__144_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
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
    sub_1B64324(this);
  WarBoardPieceData__SetServarData(x, (const MethodInfo *)x);
}


System_String_o *__fastcall WarBoardData___c___SetRequest_b__156_1(
        WarBoardData___c_o *this,
        WarBoardItemData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
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
    sub_1B64324(this);
  return p->fields.pieceComponent;
}


bool __fastcall WarBoardData___c___UpdateBuffTurnNoticeDisp_b__192_1(
        WarBoardData___c_o *this,
        WarBoardPieceBaseComponent_o *c,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  UnityEngine_Object_o *v5; // x19

  if ( (byte_49FA21E & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, c);
    byte_49FA21E = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)c, 0LL, 0LL);
  if ( !v4 )
    return 0;
  if ( !c )
    sub_1B64324(v4);
  v5 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))c->klass->vtable._4_get_BuffTrunNotice.method)(
                                 c,
                                 c->klass->vtable._5_Initialize.methodPtr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(v5, 0LL, 0LL);
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
    sub_1B64324(this);
  }
  WarBoardServantPieceBuffTurnComponent__UpdateDisp((WarBoardServantPieceBuffTurnComponent_o *)this, 1, 0LL);
}


int32_t __fastcall WarBoardData___c___UpdateCurrentPartyCost_b__143_0(
        WarBoardData___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return UserServantEntity__getCost(x, 0LL);
}


bool __fastcall WarBoardData___c___get_PlayerMasterUserEquipId_b__62_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
  if ( (byte_49FA21F & 1) == 0 )
  {
    this = (WarBoardData___c__DisplayClass118_0_o *)sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, x);
    byte_49FA21F = 1;
  }
  if ( !x )
    sub_1B64324(this);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.inRangeSquaers,
           x->fields._nowSquareIndex_k__BackingField,
           (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___);
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
  if ( (byte_49FA220 & 1) == 0 )
  {
    this = (WarBoardData___c__DisplayClass119_0_o *)sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, x);
    byte_49FA220 = 1;
  }
  if ( !x )
    sub_1B64324(this);
  return !x->fields._isDead_k__BackingField
      && System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.inRangeSquaers,
           x->fields._nowSquareIndex_k__BackingField,
           (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
  if ( (byte_49FA221 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, x);
    this = (WarBoardData___c__DisplayClass143_0_o *)sub_1B640C8(
                                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                      v5);
    byte_49FA221 = 1;
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
  this = (WarBoardData___c__DisplayClass143_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                    v10,
                                                    0LL);
  if ( !svtMaster
    || (this = (WarBoardData___c__DisplayClass143_0_o *)DataMasterBase_object__object__int___GetEntity(
                                                          svtMaster,
                                                          (int32_t)this,
                                                          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_bool__o *_9__2; // x21
  WarBoardManager_o *v13; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t key; // w0
  struct System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___o *consumedPieceActionPointDict; // x8
  int32_t v18; // w19
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *Only; // x0
  System_Collections_Generic_KeyValuePair_int__object__o KeyValuePair_int__object; // kr00_16

  if ( (byte_49FA222 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_bool__TypeInfo, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____, v3);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__List_WarBoardPieceData___get_Key__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__List_WarBoardPieceData___get_Value__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPieceData__AsReadOnly__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__2__, v8);
    byte_49FA222 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  _9__2 = this->fields.__9__2;
  v13 = (WarBoardManager_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_bool__o *)sub_1B64314(System_Action_bool__TypeInfo, v10, v11);
    System_Action_bool____ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v14, v15);
  }
  key = System_Linq_Enumerable__First_KeyValuePair_int__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.consumedPieceActionPointDict,
          (const MethodInfo_2E59D48 *)Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____).fields.key;
  consumedPieceActionPointDict = this->fields.consumedPieceActionPointDict;
  v18 = key;
  KeyValuePair_int__object = System_Linq_Enumerable__First_KeyValuePair_int__object__(
                               (System_Collections_Generic_IEnumerable_TSource__o *)consumedPieceActionPointDict,
                               (const MethodInfo_2E59D48 *)Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____);
  Only = *(System_Collections_ObjectModel_ReadOnlyCollection_T__o **)&KeyValuePair_int__object.fields.key;
  if ( !KeyValuePair_int__object.fields.value
    || (Only = System_Collections_Generic_List_object___AsReadOnly(
                 (System_Collections_Generic_List_object__o *)KeyValuePair_int__object.fields.value,
                 (const MethodInfo_34AD8FC *)Method_System_Collections_Generic_List_WarBoardPieceData__AsReadOnly__),
        !v13) )
  {
    sub_1B64324(Only);
  }
  WarBoardManager__ShowConsumedPieceActionPointPopup(
    v13,
    _9__2,
    v18,
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
  __int64 v8; // x2
  System_Action_o *_9__3; // x22
  WarBoardManager_o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FA223 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, _);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    sub_1B640C8(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__3__, v5);
    byte_49FA223 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  _9__3 = this->fields.__9__3;
  v10 = (WarBoardManager_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__3, (int32_t)_9__3, v11, v12);
  }
  if ( !v10 )
    sub_1B64324(Instance);
  WarBoardManager__HideConsumedPieceActionPointPopup(v10, _9__3, 0LL);
}


void __fastcall WarBoardData___c__DisplayClass154_0___ShowConsumedPieceActionPointPopup_b__3(
        WarBoardData___c__DisplayClass154_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___o *consumedPieceActionPointDict; // x20
  WarBoardData_o *_4__this; // x0

  if ( (byte_49FA224 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Remove__, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____, v3);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__List_WarBoardPieceData___get_Key__, v4);
    byte_49FA224 = 1;
  }
  this->fields.consumedPiecePopupClose = 1;
  consumedPieceActionPointDict = this->fields.consumedPieceActionPointDict;
  _4__this = (WarBoardData_o *)*(_OWORD *)&System_Linq_Enumerable__First_KeyValuePair_int__object__(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)consumedPieceActionPointDict,
                                             (const MethodInfo_2E59D48 *)Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____);
  if ( !consumedPieceActionPointDict
    || (System_Collections_Generic_Dictionary_int__object___Remove(
          (System_Collections_Generic_Dictionary_int__object__o *)consumedPieceActionPointDict,
          (int32_t)_4__this,
          (const MethodInfo_3124E0C *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Remove__),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_1B64324(_4__this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
  int32_t v11; // w2
  int32_t v12; // w3

  v4 = this;
  if ( (byte_49FA225 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_int____75709408, x);
    sub_1B640C8(&System_Func_int__bool__TypeInfo, v5);
    this = (WarBoardData___c__DisplayClass189_1_o *)sub_1B640C8(
                                                      &Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__2__,
                                                      v6);
    byte_49FA225 = 1;
  }
  if ( !x
    || (CS___8__locals1 = v4->fields.CS___8__locals1) == 0LL
    || (stageEntity = CS___8__locals1->fields.stageEntity) == 0LL )
  {
    sub_1B64324(this);
  }
  if ( x->fields.stageReinforcementId != stageEntity->fields.id )
    return 0;
  reinforcementsIdx = x->fields.reinforcementsIdx;
  _9__2 = v4->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, x, method);
    System_Func_int__bool____ctor(
      _9__2,
      (Il2CppObject *)v4,
      Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__2__,
      0LL);
    v4->fields.__9__2 = _9__2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__9__2, (int32_t)_9__2, v11, v12);
  }
  return BasicHelper__Any_int__48383472(
           reinforcementsIdx,
           (System_Func_T__bool__o *)_9__2,
           (const MethodInfo_2E245F0 *)Method_BasicHelper_Any_int____75709408);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
      sub_1B6432C(this, a);
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
    sub_1B64324(this);
  return x->fields.forceId == piece->fields.forceId && x->fields.groupId == piece->fields.groupId;
}


bool __fastcall WarBoardData___c__DisplayClass77_0____ctor_b__6(
        WarBoardData___c__DisplayClass77_0_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_SaveData_o *piece; // x8

  if ( !x || (piece = this->fields.piece) == 0LL )
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return x->fields.treasureId == layout->fields.effectId;
}


bool __fastcall WarBoardData___c__DisplayClass77_4____ctor_b__12(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserMasterData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0LL )
    sub_1B64324(this);
  return x->fields.forceId == layout->fields.forceId && x->fields.groupId == layout->fields.groupId;
}


bool __fastcall WarBoardData___c__DisplayClass77_4____ctor_b__13(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0LL )
    sub_1B64324(this);
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
    sub_1B64324(this);
  return x->fields.squareIndex == layout->fields.squareIndex;
}


bool __fastcall WarBoardData___c__DisplayClass77_4____ctor_b__15(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserWallData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0LL )
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return !x->fields._isDead_k__BackingField && x->fields._uniqueIndex_k__BackingField == this->fields.uniqueId;
}