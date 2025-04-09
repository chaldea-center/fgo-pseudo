void __fastcall WarBoardData___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w1
  struct WarBoardData_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_49B8A4B & 1) == 0 )
  {
    sub_1B4CF90(&WarBoardData_TypeInfo, v1);
    sub_1B4CF90(&StringLiteral_1938/*"AFTER_CONTINUE_DEVICE_FOR_WARBOARD"*/, v4);
    sub_1B4CF90(&StringLiteral_15082/*"WARBOARDDATA_SAVEDATA"*/, v5);
    byte_49B8A4B = 1;
  }
  WarBoardData_TypeInfo->static_fields->WARBOARDDATA_SAVEDATA_KEY = (struct System_String_o *)StringLiteral_15082/*"WARBOARDDATA_SAVEDATA"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)WarBoardData_TypeInfo->static_fields, StringLiteral_15082/*"WARBOARDDATA_SAVEDATA"*/, v2, v3);
  v6 = StringLiteral_1938/*"AFTER_CONTINUE_DEVICE_FOR_WARBOARD"*/;
  static_fields = WarBoardData_TypeInfo->static_fields;
  static_fields->AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY = (struct System_String_o *)StringLiteral_1938/*"AFTER_CONTINUE_DEVICE_FOR_WARBOARD"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY, v6, v8, v9);
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
  const MethodInfo *v139; // x3
  System_Collections_Generic_List_object__o *v140; // x19
  int32_t v141; // w2
  const MethodInfo *v142; // x3
  struct System_Int32_array *v143; // x0
  int32_t v144; // w2
  const MethodInfo *v145; // x3
  struct System_UInt32_array *v146; // x0
  int32_t v147; // w2
  const MethodInfo *v148; // x3
  System_Collections_Generic_List_object__o *v149; // x19
  int32_t v150; // w2
  const MethodInfo *v151; // x3
  System_Collections_Generic_List_object__o *v152; // x19
  int32_t v153; // w2
  const MethodInfo *v154; // x3
  System_Collections_Generic_List_int__o *v155; // x19
  int32_t v156; // w2
  const MethodInfo *v157; // x3
  System_Collections_Generic_List_object__o *v158; // x19
  int32_t v159; // w2
  const MethodInfo *v160; // x3
  System_Collections_Generic_List_int__o *v161; // x19
  int32_t v162; // w2
  const MethodInfo *v163; // x3
  System_Collections_Generic_List_int__o *v164; // x19
  int32_t v165; // w2
  const MethodInfo *v166; // x3
  WarBoardData___c_c *v167; // x0
  System_Comparison_T__o *_9__77_0; // x19
  Il2CppObject *v169; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v171; // w2
  const MethodInfo *v172; // x3
  int32_t v173; // w2
  const MethodInfo *v174; // x3
  __int64 Instance; // x0
  unsigned __int64 throughCondId; // x1
  Il2CppObject *MasterData_object; // x0
  struct WarBoardStageNpcMaster_o **p_stageNpcMaster; // x19
  int32_t v179; // w2
  const MethodInfo *v180; // x3
  System_Collections_Generic_IEnumerable_WarBoardStageNpcEntity__o *WarBoardStageEntities; // x0
  WarBoardData___c_c *v182; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v183; // x21
  System_Func_T__TResult__o *_9__77_1; // x19
  Il2CppObject *v185; // x22
  struct WarBoardData___c_StaticFields *v186; // x0
  int32_t v187; // w2
  const MethodInfo *v188; // x3
  struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *v189; // x0
  int32_t v190; // w2
  const MethodInfo *v191; // x3
  System_Collections_Generic_IEnumerable_WarBoardActionPointEntity__o *WarBoardActionPointEntities; // x0
  WarBoardData___c_c *v193; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v194; // x20
  System_Func_T__TResult__o *_9__77_2; // x19
  Il2CppObject *v196; // x21
  struct WarBoardData___c_StaticFields *v197; // x0
  int32_t v198; // w2
  const MethodInfo *v199; // x3
  struct System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__o *v200; // x0
  int32_t v201; // w2
  const MethodInfo *v202; // x3
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  WarBoardData___c_c *v204; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v205; // x20
  System_Func_object__int__o *_9__77_3; // x19
  Il2CppObject *v207; // x21
  struct WarBoardData___c_StaticFields *v208; // x0
  int32_t v209; // w2
  const MethodInfo *v210; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *npcEntityDict; // x8
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *v212; // x0
  WarBoardData___c_c *v213; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v214; // x20
  System_Func_object__int__o *_9__77_4; // x19
  Il2CppObject *v216; // x21
  struct WarBoardData___c_StaticFields *v217; // x0
  int32_t v218; // w2
  const MethodInfo *v219; // x3
  System_Collections_Generic_List_object__o *v220; // x27
  WarBoardData_c *v221; // x0
  WarBoardDataEntity_o *v222; // x26
  System_Collections_Generic_List_object__o *v223; // x24
  WarBoardStageLayoutEntity_array *v224; // x28
  System_String_o *WARBOARDDATA_SAVEDATA_KEY; // x19
  WarBoardData_c *v226; // x0
  int32_t progressType; // w19
  System_String_o *v228; // x19
  System_String_o *String; // x19
  System_Byte_array *v230; // x19
  MiniMessagePack_MiniMessagePacker_o *v231; // x20
  Il2CppObject *v232; // x0
  struct WarBoardData_WarBoardLocalSaveData_o **p_localSaveData; // x20
  int32_t v234; // w2
  const MethodInfo *v235; // x3
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8
  struct WarBoardPieceData_SaveData_array *pieceSaves; // x24
  _QWORD *v238; // x25
  unsigned __int64 v239; // x28
  __int64 v240; // x22
  int32_t v241; // w2
  const MethodInfo *v242; // x3
  WarBoardPieceData_SaveData_o *v243; // x1
  WarBoardPieceData_SaveData_o **v244; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v245; // x19
  System_Func_object__bool__o *v246; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v247; // x19
  System_Func_object__bool__o *v248; // x23
  struct WarBoardItemData_SaveData_array *itemSaves; // x24
  unsigned __int64 v250; // x28
  __int64 v251; // x19
  int32_t v252; // w2
  const MethodInfo *v253; // x3
  WarBoardItemData_SaveData_o *v254; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v255; // x22
  System_Func_object__bool__o *v256; // x23
  CGThumbnailListItem_o *v257; // x25
  struct WarBoardTreasureData_SaveData_array *treasureSaves; // x28
  char v259; // w26
  unsigned __int64 v260; // x29
  __int64 v261; // x19
  int32_t v262; // w2
  const MethodInfo *v263; // x3
  WarBoardTreasureData_SaveData_o *v264; // x1
  __int64 v265; // x21
  System_Collections_Generic_IEnumerable_TSource__o *klass; // x23
  System_Func_object__bool__o *v267; // x24
  WarBoardData___c_c *v268; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v269; // x21
  System_Func_object__bool__o *_9__77_9; // x19
  Il2CppObject *v271; // x23
  struct WarBoardData___c_StaticFields *v272; // x0
  int32_t v273; // w2
  const MethodInfo *v274; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v275; // x0
  System_Object_array *v276; // x0
  int32_t v277; // w2
  const MethodInfo *v278; // x3
  struct WarBoardWallData_SaveData_array *wallSaves; // x24
  unsigned __int64 v280; // x25
  __int64 v281; // x19
  int32_t v282; // w2
  const MethodInfo *v283; // x3
  WarBoardWallData_SaveData_o *v284; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v285; // x22
  System_Func_object__bool__o *v286; // x23
  int v287; // w19
  unsigned __int64 v288; // x23
  __int64 v289; // x24
  __int64 v290; // x25
  struct WarBoardSquareIndexData_SaveData_array *squareIndexInfo; // x8
  unsigned int *v292; // x27
  WarBoardSquareIndexData_SaveData_o *v293; // x21
  WarBoardSquareIndexData_o *v294; // x19
  int32_t v295; // w2
  const MethodInfo *v296; // x3
  int v297; // w19
  unsigned __int64 v298; // x23
  __int64 v299; // x24
  __int64 v300; // x25
  struct WarBoardBossBattleData_SaveData_array *bossBattleInfo; // x8
  unsigned int *v302; // x27
  WarBoardBossBattleData_SaveData_o *v303; // x21
  WarBoardBossBattleData_o *v304; // x19
  const MethodInfo *v305; // x2
  int32_t v306; // w2
  const MethodInfo *v307; // x3
  WarBoardData_c *v308; // x0
  int32_t v309; // w2
  const MethodInfo *v310; // x3
  unsigned __int64 v311; // x25
  __int64 v312; // x23
  int32_t v313; // w2
  const MethodInfo *v314; // x3
  WarBoardStageLayoutEntity_o *v315; // x1
  WarBoardStageLayoutEntity_o **v316; // x29
  WarBoardStageLayoutEntity_o *v317; // x19
  WarBoardSquareData_o *v318; // x22
  int32_t v319; // w2
  const MethodInfo *v320; // x3
  __int64 v321; // x9
  WarBoardStageLayoutEntity_o *v322; // x8
  struct System_Object_array *items; // x8
  _QWORD *v324; // x9
  __int64 size; // x10
  Il2CppClass **v326; // x0
  WarBoardStageLayoutEntity_o *v327; // x8
  int32_t questPhase; // w22
  System_Collections_Generic_IEnumerable_TSource__o *svtInfo; // x19
  System_Func_object__bool__o *v330; // x20
  WarBoardUserServantData_o *v331; // x21
  WarBoardUserMasterData_o *v332; // x20
  struct System_Object_array *v333; // x8
  _QWORD *v334; // x9
  __int64 v335; // x10
  Il2CppClass **v336; // x0
  CGThumbnailListItem_o *v337; // x0
  int32_t v338; // w1
  System_Collections_Generic_IEnumerable_TSource__o *masterInfo; // x19
  System_Func_object__bool__o *v340; // x20
  WarBoardStageLayoutEntity_o *v341; // x8
  WarBoardDataEntity_WarBoardDeckData_o **v342; // x9
  WarBoardDataEntity_WarBoardDeckData_o *v343; // x27
  int32_t Type; // w0
  bool IsNpc; // w0
  WarBoardStageLayoutEntity_o *v346; // x28
  int32_t v347; // w22
  bool v348; // w26
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *v349; // x19
  WarBoardPieceData_o *v350; // x0
  WarBoardPieceData_o *v351; // x24
  bool v352; // w5
  int32_t v353; // w2
  const MethodInfo *v354; // x3
  __int64 v355; // x8
  _QWORD *v356; // x9
  __int64 v357; // x10
  NpcFollowerEntity_o *Entity_40004608; // x0
  NpcFollowerEntity_o *v359; // x19
  int32_t v360; // w2
  const MethodInfo *v361; // x3
  struct System_Object_array *v362; // x8
  _QWORD *v363; // x9
  __int64 v364; // x10
  Il2CppClass **v365; // x0
  __int64 v366; // x8
  System_Collections_Generic_List_object__o *v367; // x0
  Il2CppObject *v368; // x1
  struct System_Object_array *v369; // x8
  _QWORD *v370; // x9
  __int64 v371; // x10
  Il2CppClass **v372; // x0
  WarBoardStageLayoutEntity_o *v373; // x21
  System_Collections_Generic_IEnumerable_TSource__o *getItemInfo; // x19
  System_Func_object__bool__o *v375; // x20
  Il2CppObject *v376; // x0
  WarBoardStageLayoutEntity_o *v377; // x19
  WarBoardUserGetItemData_o *v378; // x21
  WarBoardItemData_o *v379; // x20
  System_Collections_Generic_List_object__o *v380; // x12
  int32_t version; // w10
  struct System_Object_array *v382; // x8
  void **v383; // x9
  System_Collections_Generic_IEnumerable_TSource__o *treasureInfo; // x19
  System_Func_object__bool__o *v385; // x20
  System_Collections_Generic_IEnumerable_TSource__o *wallInfo; // x19
  System_Func_object__bool__o *v387; // x20
  Il2CppObject *v388; // x0
  WarBoardStageLayoutEntity_o *v389; // x19
  WarBoardUserWallData_o *v390; // x21
  _QWORD *v391; // x9
  __int64 v392; // x10
  Il2CppClass **v393; // x0
  System_Object_array *v394; // x0
  WarBoardData_o *v395; // x25
  int32_t v396; // w2
  const MethodInfo *v397; // x3
  System_Object_array *v398; // x0
  int32_t v399; // w2
  const MethodInfo *v400; // x3
  System_Object_array *v401; // x0
  System_Collections_Generic_IEnumerable_T__o **p_pieces; // x23
  int32_t v403; // w2
  const MethodInfo *v404; // x3
  System_Object_array *pieces; // x19
  System_Comparison_T__o *v406; // x20
  System_Object_array *v407; // x0
  int32_t v408; // w2
  const MethodInfo *v409; // x3
  System_Object_array *v410; // x0
  int32_t v411; // w2
  const MethodInfo *v412; // x3
  System_Object_array *v413; // x0
  int32_t v414; // w2
  const MethodInfo *v415; // x3
  System_Object_array *v416; // x0
  int32_t v417; // w2
  const MethodInfo *v418; // x3
  int32_t v419; // w2
  const MethodInfo *v420; // x3
  struct WarBoardData_WarBoardLocalSaveData_o *v421; // x8
  struct WarBoardPieceData_SaveData_array *v422; // x28
  unsigned __int64 v423; // x29
  __int64 v424; // x21
  int32_t v425; // w2
  const MethodInfo *v426; // x3
  WarBoardPieceData_SaveData_o *v427; // x1
  WarBoardPieceData_SaveData_o **v428; // x22
  System_Collections_Generic_IEnumerable_T__o *v429; // x19
  System_Func_object__bool__o *v430; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v431; // x19
  System_Func_object__bool__o *v432; // x24
  Il2CppObject *v433; // x21
  System_Collections_Generic_List_object__o *v434; // x24
  int32_t id; // w19
  WarBoardPieceData_SaveData_o *v436; // x26
  WarBoardPieceData_o *v437; // x25
  int32_t v438; // w2
  const MethodInfo *v439; // x3
  struct System_Object_array *v440; // x8
  _QWORD *v441; // x9
  __int64 v442; // x10
  Il2CppClass **v443; // x0
  System_Object_array *v444; // x0
  int32_t v445; // w2
  const MethodInfo *v446; // x3
  __int64 v447; // x20
  int v448; // w8
  unsigned int v449; // w21
  __int64 v450; // x8
  WarBoardItemData_SaveData_o *v451; // x19
  _DWORD *data; // x20
  int v453; // w8
  unsigned int v454; // w21
  char *v455; // x8
  WarBoardTreasureData_SaveData_o *v456; // x19
  __int64 v457; // x20
  int v458; // w8
  unsigned int v459; // w21
  __int64 v460; // x8
  WarBoardWallData_SaveData_o *v461; // x19
  Il2CppClass *element_class; // x20
  int namespaze; // w8
  unsigned int v464; // w21
  void **v465; // x8
  WarBoardSquareData_SaveData_o *v466; // x19
  System_Collections_Generic_List_object__o *v467; // x19
  int32_t v468; // w2
  const MethodInfo *v469; // x3
  int32_t v470; // w2
  const MethodInfo *v471; // x3
  struct WarBoardData_WarBoardLocalSaveData_o *v472; // x8
  struct WarBoardEventData_SaveData_array *eventSaves; // x20
  __int64 v474; // x8
  unsigned __int64 v475; // x23
  WarBoardEventData_SaveData_o *v476; // x19
  System_Collections_Generic_List_object__o *v477; // x21
  WarBoardEventData_o *v478; // x22
  int32_t v479; // w2
  const MethodInfo *v480; // x3
  struct System_Object_array *v481; // x8
  _QWORD *v482; // x9
  __int64 v483; // x10
  Il2CppClass **v484; // x0
  Il2CppClass *v485; // x8
  struct System_Int32_array *typeHierarchy; // x1
  int32_t v487; // w2
  const MethodInfo *v488; // x3
  struct WarBoardData_WarBoardLocalSaveData_o *v489; // x8
  CGThumbnailListItem_c *latestBattlePieceUniqueIndexes; // x1
  System_Collections_Generic_List_object__o *v491; // x19
  int32_t v492; // w2
  const MethodInfo *v493; // x3
  _QWORD *properties; // x20
  __int64 v495; // x8
  unsigned __int64 v496; // x23
  WarBoardPrevCondData_SaveData_o *v497; // x19
  System_Collections_Generic_List_object__o *v498; // x21
  WarBoardPrevCondData_o *v499; // x22
  int32_t v500; // w2
  const MethodInfo *v501; // x3
  struct System_Object_array *v502; // x8
  _QWORD *v503; // x9
  __int64 v504; // x10
  Il2CppClass **v505; // x0
  System_Collections_Generic_List_object__o *v506; // x19
  int32_t v507; // w2
  const MethodInfo *v508; // x3
  _QWORD *methods; // x20
  __int64 v510; // x8
  unsigned __int64 v511; // x23
  HoldReinforcementsData_SaveData_o *v512; // x19
  System_Collections_Generic_List_object__o *v513; // x21
  HoldReinforcementsData_o *v514; // x22
  int32_t v515; // w2
  const MethodInfo *v516; // x3
  struct System_Object_array *v517; // x8
  _QWORD *v518; // x9
  __int64 v519; // x10
  Il2CppClass **v520; // x0
  System_Collections_Generic_List_TSource__o *v521; // x0
  int32_t v522; // w2
  const MethodInfo *v523; // x3
  System_Collections_Generic_List_object__o *v524; // x19
  int32_t v525; // w2
  const MethodInfo *v526; // x3
  int32_t v527; // w2
  const MethodInfo *v528; // x3
  Il2CppClass **implementedInterfaces; // x20
  Il2CppClass *v530; // x8
  unsigned __int64 v531; // x23
  WarBoardUiData_SaveData_o *v532; // x19
  System_Collections_Generic_List_object__o *v533; // x21
  WarBoardUiData_o *v534; // x22
  int32_t v535; // w2
  const MethodInfo *v536; // x3
  struct System_Object_array *v537; // x8
  _QWORD *v538; // x9
  __int64 v539; // x10
  Il2CppClass **v540; // x0
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets; // x1
  Il2CppClass *v542; // x8
  WarBoardData_WarBoardLocalSaveData_o *v543; // x19
  int32_t v544; // w2
  const MethodInfo *v545; // x3
  __int64 v546; // x0
  CGThumbnailListItem_o *p_bgAnimationInfo_k__BackingField; // [xsp+10h] [xbp-170h]
  CGThumbnailListItem_o *p_listUiData; // [xsp+18h] [xbp-168h]
  CGThumbnailListItem_o *p_playedStageReinforcementsList; // [xsp+20h] [xbp-160h]
  CGThumbnailListItem_o *p_latestBattlePieceUniqueIndexes; // [xsp+28h] [xbp-158h]
  struct System_Int32_array **p_latestPieceActionSquareIndexes; // [xsp+30h] [xbp-150h]
  CGThumbnailListItem_o *p_reinforcementsSaveList; // [xsp+38h] [xbp-148h]
  DataMasterBase_TMaster__TEntity__PKType__o *v553; // [xsp+40h] [xbp-140h]
  System_Collections_Generic_List_object__o *v554; // [xsp+48h] [xbp-138h]
  WarBoardDataEntity_WarBoardDeckData_o **p_myDeck; // [xsp+50h] [xbp-130h]
  struct System_Collections_Generic_List_int__o **p_masterExistsForce; // [xsp+58h] [xbp-128h]
  System_Collections_Generic_List_object__o *v557; // [xsp+60h] [xbp-120h]
  System_Collections_Generic_List_object__o *v558; // [xsp+68h] [xbp-118h]
  System_Collections_Generic_List_object__o *v559; // [xsp+70h] [xbp-110h]
  NpcFollowerMaster_o *v560; // [xsp+78h] [xbp-108h]
  WarBoardStagePieceDetailMaster_o *Master_object; // [xsp+80h] [xbp-100h]
  System_Collections_Generic_List_object__o *v562; // [xsp+88h] [xbp-F8h]
  WarBoardData_Fields *p_fields; // [xsp+90h] [xbp-F0h]
  WarBoardCommonReleaseMaster_o *v564; // [xsp+98h] [xbp-E8h]
  WarBoardData_o *v565; // [xsp+A0h] [xbp-E0h]
  struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o **p_npcEntityDict; // [xsp+A8h] [xbp-D8h]
  System_Collections_Generic_List_object__o *v567; // [xsp+B0h] [xbp-D0h]
  System_Collections_Generic_List_object__o *v568; // [xsp+B0h] [xbp-D0h]
  System_Collections_Generic_List_object__o *v569; // [xsp+B8h] [xbp-C8h]
  WarBoardDataEntity_WarBoardDeckData_o **p_enemyDeck; // [xsp+C8h] [xbp-B8h]
  CGThumbnailListItem_o *p_listPrevCond; // [xsp+D0h] [xbp-B0h]
  struct System_Collections_Generic_List_WarBoardEventData__o **p_listEvent; // [xsp+D8h] [xbp-A8h]
  int32_t v574; // [xsp+E4h] [xbp-9Ch]
  int32_t questId; // [xsp+E8h] [xbp-98h]
  int32_t npcIdx; // [xsp+ECh] [xbp-94h]
  System_Object_array **v578; // [xsp+F0h] [xbp-90h]
  WarBoardDataEntity_o *v579; // [xsp+F0h] [xbp-90h]
  __int64 v580; // [xsp+F8h] [xbp-88h]
  WarBoardRoadEntity_array *roadEntitiesb; // [xsp+100h] [xbp-80h]
  bool isChangeName; // [xsp+10Ch] [xbp-74h] BYREF
  Il2CppObject *v584; // [xsp+110h] [xbp-70h] BYREF
  WarBoardStagePieceDetailEntity_o *entity; // [xsp+118h] [xbp-68h] BYREF

  if ( (byte_49B89F3 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Array_Resize_WarBoardBossBattleData___, stage);
    sub_1B4CF90(&Method_System_Array_Resize_WarBoardSquareIndexData___, v8);
    sub_1B4CF90(&Method_System_Array_Sort_WarBoardPieceData___, v9);
    sub_1B4CF90(&Method_System_Array_Sort_WarBoardStageLayoutEntity___, v10);
    sub_1B4CF90(&Method_BasicHelper_Any_WarBoardPieceData___, v11);
    sub_1B4CF90(&System_Comparison_WarBoardPieceData__TypeInfo, v12);
    sub_1B4CF90(&System_Comparison_WarBoardStageLayoutEntity__TypeInfo, v13);
    sub_1B4CF90(&System_Convert_TypeInfo, v14);
    sub_1B4CF90(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___, v15);
    sub_1B4CF90(&Method_DataManager_GetMasterData_WarBoardActionPointMaster___, v16);
    sub_1B4CF90(&Method_DataManager_GetMasterData_WarBoardStageDetailMaster___, v17);
    sub_1B4CF90(&Method_DataManager_GetMasterData_WarBoardStageNpcMaster___, v18);
    sub_1B4CF90(&Method_DataManager_GetMaster_NpcFollowerMaster___, v19);
    sub_1B4CF90(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, v20);
    sub_1B4CF90(&Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___, v21);
    sub_1B4CF90(&DataManager_TypeInfo, v22);
    sub_1B4CF90(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__, v23);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v24);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Values__, v25);
    sub_1B4CF90(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v26);
    sub_1B4CF90(&EncryptedPlayerPrefs_TypeInfo, v27);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Count_WarBoardBossBattleData_SaveData___, v28);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData_SaveData___, v29);
    sub_1B4CF90(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___, v30);
    sub_1B4CF90(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___, v31);
    sub_1B4CF90(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___, v32);
    sub_1B4CF90(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserTreasureData___, v33);
    sub_1B4CF90(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___, v34);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Max_WarBoardStageNpcEntity___, v35);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_WarBoardUserTreasureData___, v36);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToDictionary_WarBoardActionPointEntity__uint___, v37);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToDictionary_WarBoardStageNpcEntity__uint___, v38);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToList_int___, v39);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_WarBoardUserTreasureData___, v40);
    sub_1B4CF90(&System_Func_WarBoardUserTreasureData__bool__TypeInfo, v41);
    sub_1B4CF90(&System_Func_WarBoardStageNpcEntity__uint__TypeInfo, v42);
    sub_1B4CF90(&System_Func_WarBoardUserWallData__bool__TypeInfo, v43);
    sub_1B4CF90(&System_Func_WarBoardUserMasterData__bool__TypeInfo, v44);
    sub_1B4CF90(&System_Func_WarBoardStageNpcEntity__int__TypeInfo, v45);
    sub_1B4CF90(&System_Func_WarBoardUserServantData__bool__TypeInfo, v46);
    sub_1B4CF90(&System_Func_WarBoardPieceData__bool__TypeInfo, v47);
    sub_1B4CF90(&System_Func_WarBoardUserGetItemData__bool__TypeInfo, v48);
    sub_1B4CF90(&System_Func_WarBoardActionPointEntity__uint__TypeInfo, v49);
    sub_1B4CF90(&HoldReinforcementsData_TypeInfo, v50);
    sub_1B4CF90(&int___TypeInfo, v51);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__, v52);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, v53);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardSquareData__Add__, v54);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardUiData__Add__, v55);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__, v56);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardEventData__Add__, v57);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardEffectData__Add__, v58);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardTreasureData__Add__, v59);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, v60);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardWallData__Add__, v61);
    sub_1B4CF90(&Method_System_Collections_Generic_List_HoldReinforcementsData__Add__, v62);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardItemData__Add__, v63);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Contains__, v64);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardTreasureData__ToArray__, v65);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardEffectData__ToArray__, v66);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardWallData__ToArray__, v67);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__, v68);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__, v69);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardItemData__ToArray__, v70);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardPrevCondData___ctor__, v71);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v72);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v73);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardSquareData___ctor__, v74);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardEventData___ctor__, v75);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardUiData___ctor__, v76);
    sub_1B4CF90(&Method_System_Collections_Generic_List_HoldReinforcementsData___ctor__, v77);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardTreasureData___ctor__, v78);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardItemData___ctor__, v79);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardWallData___ctor__, v80);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardEffectData___ctor__, v81);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v82);
    sub_1B4CF90(&System_Collections_Generic_List_WarBoardSquareData__TypeInfo, v83);
    sub_1B4CF90(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v84);
    sub_1B4CF90(&System_Collections_Generic_List_WarBoardWallData__TypeInfo, v85);
    sub_1B4CF90(&System_Collections_Generic_List_WarBoardTreasureData__TypeInfo, v86);
    sub_1B4CF90(&System_Collections_Generic_List_WarBoardItemData__TypeInfo, v87);
    sub_1B4CF90(&System_Collections_Generic_List_WarBoardUiData__TypeInfo, v88);
    sub_1B4CF90(&System_Collections_Generic_List_WarBoardPrevCondData__TypeInfo, v89);
    sub_1B4CF90(&System_Collections_Generic_List_WarBoardEffectData__TypeInfo, v90);
    sub_1B4CF90(&System_Collections_Generic_List_WarBoardEventData__TypeInfo, v91);
    sub_1B4CF90(&System_Collections_Generic_List_HoldReinforcementsData__TypeInfo, v92);
    sub_1B4CF90(&Method_MiniMessagePack_MiniMessagePacker_UnpackClass_WarBoardData_WarBoardLocalSaveData___, v93);
    sub_1B4CF90(&MiniMessagePack_MiniMessagePacker_TypeInfo, v94);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v95);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v96);
    sub_1B4CF90(&Method_WarBoardData___c___ctor_b__77_0__, v97);
    sub_1B4CF90(&Method_WarBoardData___c___ctor_b__77_1__, v98);
    sub_1B4CF90(&Method_WarBoardData___c___ctor_b__77_2__, v99);
    sub_1B4CF90(&Method_WarBoardData___c___ctor_b__77_3__, v100);
    sub_1B4CF90(&Method_WarBoardData___c___ctor_b__77_4__, v101);
    sub_1B4CF90(&Method_WarBoardData___c___ctor_b__77_9__, v102);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass77_0___ctor_b__5__, v103);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass77_0___ctor_b__6__, v104);
    sub_1B4CF90(&WarBoardData___c__DisplayClass77_0_TypeInfo, v105);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass77_1___ctor_b__7__, v106);
    sub_1B4CF90(&WarBoardData___c__DisplayClass77_1_TypeInfo, v107);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass77_2___ctor_b__8__, v108);
    sub_1B4CF90(&WarBoardData___c__DisplayClass77_2_TypeInfo, v109);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass77_3___ctor_b__10__, v110);
    sub_1B4CF90(&WarBoardData___c__DisplayClass77_3_TypeInfo, v111);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__11__, v112);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__12__, v113);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__13__, v114);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__14__, v115);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__15__, v116);
    sub_1B4CF90(&WarBoardData___c__DisplayClass77_4_TypeInfo, v117);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass77_5___ctor_b__16__, v118);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass77_5___ctor_b__17__, v119);
    sub_1B4CF90(&WarBoardData___c__DisplayClass77_5_TypeInfo, v120);
    sub_1B4CF90(&WarBoardData___c_TypeInfo, v121);
    sub_1B4CF90(&uint___TypeInfo, v122);
    sub_1B4CF90(&WarBoardBossBattleData_TypeInfo, v123);
    sub_1B4CF90(&Method_WarBoardData_ComparePiece__, v124);
    sub_1B4CF90(&WarBoardData_TypeInfo, v125);
    sub_1B4CF90(&WarBoardEffectData_TypeInfo, v126);
    sub_1B4CF90(&WarBoardEventData_TypeInfo, v127);
    sub_1B4CF90(&WarBoardItemData_TypeInfo, v128);
    sub_1B4CF90(&WarBoardData_WarBoardLocalSaveData_TypeInfo, v129);
    sub_1B4CF90(&WarBoardPieceData_TypeInfo, v130);
    sub_1B4CF90(&WarBoardPrevCondData_TypeInfo, v131);
    sub_1B4CF90(&WarBoardSquareData_TypeInfo, v132);
    sub_1B4CF90(&WarBoardSquareIndexData_TypeInfo, v133);
    sub_1B4CF90(&WarBoardTreasureData_TypeInfo, v134);
    sub_1B4CF90(&WarBoardUiData_TypeInfo, v135);
    sub_1B4CF90(&WarBoardWallData_TypeInfo, v136);
    byte_49B89F3 = 1;
  }
  v584 = 0LL;
  entity = 0LL;
  isChangeName = 0;
  v137 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v137,
    (const MethodInfo_3257168 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  this->fields._bgAnimationInfo_k__BackingField = (struct System_Collections_Generic_Dictionary_string__object__o *)v137;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._bgAnimationInfo_k__BackingField, (int32_t)v137, v138, v139);
  v140 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_WarBoardEventData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v140,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_WarBoardEventData___ctor__);
  this->fields.listEvent = (struct System_Collections_Generic_List_WarBoardEventData__o *)v140;
  p_listEvent = &this->fields.listEvent;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.listEvent, (int32_t)v140, v141, v142);
  *(_QWORD *)&this->fields.winCondId = -1LL;
  v143 = (struct System_Int32_array *)sub_1B4D038(int___TypeInfo, 2LL);
  this->fields.latestPieceActionSquareIndexes = v143;
  p_latestPieceActionSquareIndexes = &this->fields.latestPieceActionSquareIndexes;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.latestPieceActionSquareIndexes, (int32_t)v143, v144, v145);
  v146 = (struct System_UInt32_array *)sub_1B4D038(uint___TypeInfo, 0LL);
  this->fields.latestBattlePieceUniqueIndexes = v146;
  p_latestBattlePieceUniqueIndexes = (CGThumbnailListItem_o *)&this->fields.latestBattlePieceUniqueIndexes;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.latestBattlePieceUniqueIndexes, (int32_t)v146, v147, v148);
  v149 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_WarBoardPrevCondData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v149,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_WarBoardPrevCondData___ctor__);
  this->fields.listPrevCond = (struct System_Collections_Generic_List_WarBoardPrevCondData__o *)v149;
  p_listPrevCond = (CGThumbnailListItem_o *)&this->fields.listPrevCond;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.listPrevCond, (int32_t)v149, v150, v151);
  v152 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_HoldReinforcementsData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v152,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_HoldReinforcementsData___ctor__);
  this->fields.reinforcementsSaveList = (struct System_Collections_Generic_List_HoldReinforcementsData__o *)v152;
  p_reinforcementsSaveList = (CGThumbnailListItem_o *)&this->fields.reinforcementsSaveList;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.reinforcementsSaveList, (int32_t)v152, v153, v154);
  v155 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v155,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.playedStageReinforcementsList = v155;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.playedStageReinforcementsList, (int32_t)v155, v156, v157);
  v158 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_WarBoardUiData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v158,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_WarBoardUiData___ctor__);
  this->fields.listUiData = (struct System_Collections_Generic_List_WarBoardUiData__o *)v158;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.listUiData, (int32_t)v158, v159, v160);
  v161 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v161,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.masterExistsForce = v161;
  p_masterExistsForce = &this->fields.masterExistsForce;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.masterExistsForce, (int32_t)v161, v162, v163);
  v164 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v164,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.reinforcementsAppointmentSquareList = v164;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.reinforcementsAppointmentSquareList, (int32_t)v164, v165, v166);
  this->fields.localSaveTiming = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v167 = WarBoardData___c_TypeInfo;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v167 = WarBoardData___c_TypeInfo;
  }
  _9__77_0 = (System_Comparison_T__o *)v167->static_fields->__9__77_0;
  if ( !_9__77_0 )
  {
    if ( !v167->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v167);
      v167 = WarBoardData___c_TypeInfo;
    }
    v169 = (Il2CppObject *)v167->static_fields->__9;
    _9__77_0 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_WarBoardStageLayoutEntity__TypeInfo);
    System_Comparison_object____ctor(_9__77_0, v169, Method_WarBoardData___c___ctor_b__77_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__77_0 = (struct System_Comparison_WarBoardStageLayoutEntity__o *)_9__77_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__77_0, (int32_t)_9__77_0, v171, v172);
  }
  System_Array__Sort_object__49088784(
    (System_Object_array *)layoutEntities,
    _9__77_0,
    (const MethodInfo_2ED0910 *)Method_System_Array_Sort_WarBoardStageLayoutEntity___);
  this->fields.stageEntity = stage;
  p_fields = &this->fields;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields, (int32_t)stage, v173, v174);
  if ( !layoutEntities )
    goto LABEL_359;
  v580 = *(_QWORD *)&layoutEntities->max_length;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_359;
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_WarBoardStageDetailMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_359;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_WarBoardStageNpcMaster___);
  this->fields.stageNpcMaster = (struct WarBoardStageNpcMaster_o *)MasterData_object;
  p_stageNpcMaster = &this->fields.stageNpcMaster;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.stageNpcMaster, (int32_t)MasterData_object, v179, v180);
  if ( !stage )
    goto LABEL_359;
  Instance = (__int64)*p_stageNpcMaster;
  if ( !*p_stageNpcMaster )
    goto LABEL_359;
  WarBoardStageEntities = WarBoardStageNpcMaster__GetWarBoardStageEntities(
                            (WarBoardStageNpcMaster_o *)Instance,
                            stage->fields.id,
                            0LL);
  v182 = WarBoardData___c_TypeInfo;
  v183 = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardStageEntities;
  p_playedStageReinforcementsList = (CGThumbnailListItem_o *)&this->fields.playedStageReinforcementsList;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v182 = WarBoardData___c_TypeInfo;
  }
  _9__77_1 = (System_Func_T__TResult__o *)v182->static_fields->__9__77_1;
  if ( !_9__77_1 )
  {
    if ( !v182->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v182);
      v182 = WarBoardData___c_TypeInfo;
    }
    v185 = (Il2CppObject *)v182->static_fields->__9;
    _9__77_1 = (System_Func_T__TResult__o *)sub_1B4D1DC(System_Func_WarBoardStageNpcEntity__uint__TypeInfo);
    System_Func_object__uint____ctor(_9__77_1, v185, Method_WarBoardData___c___ctor_b__77_1__, 0LL);
    v186 = WarBoardData___c_TypeInfo->static_fields;
    v186->__9__77_1 = (struct System_Func_WarBoardStageNpcEntity__uint__o *)_9__77_1;
    sub_1B4CF34((CGThumbnailListItem_o *)&v186->__9__77_1, (int32_t)_9__77_1, v187, v188);
  }
  v189 = (struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *)System_Linq_Enumerable__ToDictionary_object__uint_(
                                                                                           v183,
                                                                                           (System_Func_TSource__TKey__o *)_9__77_1,
                                                                                           (const MethodInfo_2F3C848 *)Method_System_Linq_Enumerable_ToDictionary_WarBoardStageNpcEntity__uint___);
  this->fields.npcEntityDict = v189;
  p_npcEntityDict = &this->fields.npcEntityDict;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.npcEntityDict, (int32_t)v189, v190, v191);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_359;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_WarBoardActionPointMaster___);
  if ( !Instance )
    goto LABEL_359;
  WarBoardActionPointEntities = WarBoardActionPointMaster__GetWarBoardActionPointEntities(
                                  (WarBoardActionPointMaster_o *)Instance,
                                  stage->fields.id,
                                  0LL);
  v193 = WarBoardData___c_TypeInfo;
  v194 = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardActionPointEntities;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v193 = WarBoardData___c_TypeInfo;
  }
  _9__77_2 = (System_Func_T__TResult__o *)v193->static_fields->__9__77_2;
  if ( !_9__77_2 )
  {
    if ( !v193->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v193);
      v193 = WarBoardData___c_TypeInfo;
    }
    v196 = (Il2CppObject *)v193->static_fields->__9;
    _9__77_2 = (System_Func_T__TResult__o *)sub_1B4D1DC(System_Func_WarBoardActionPointEntity__uint__TypeInfo);
    System_Func_object__uint____ctor(_9__77_2, v196, Method_WarBoardData___c___ctor_b__77_2__, 0LL);
    v197 = WarBoardData___c_TypeInfo->static_fields;
    v197->__9__77_2 = (struct System_Func_WarBoardActionPointEntity__uint__o *)_9__77_2;
    sub_1B4CF34((CGThumbnailListItem_o *)&v197->__9__77_2, (int32_t)_9__77_2, v198, v199);
  }
  v200 = (struct System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__o *)System_Linq_Enumerable__ToDictionary_object__uint_(
                                                                                              v194,
                                                                                              (System_Func_TSource__TKey__o *)_9__77_2,
                                                                                              (const MethodInfo_2F3C848 *)Method_System_Linq_Enumerable_ToDictionary_WarBoardActionPointEntity__uint___);
  this->fields.actionPointEntityDict = v200;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.actionPointEntityDict, (int32_t)v200, v201, v202);
  Instance = (__int64)this->fields.npcEntityDict;
  if ( !Instance )
    goto LABEL_359;
  Values = System_Collections_Generic_Dictionary_uint__object___get_Values(
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)Instance,
             (const MethodInfo_32904F8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Values__);
  v204 = WarBoardData___c_TypeInfo;
  v205 = (System_Collections_Generic_IEnumerable_TSource__o *)Values;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v204 = WarBoardData___c_TypeInfo;
  }
  _9__77_3 = (System_Func_object__int__o *)v204->static_fields->__9__77_3;
  if ( !_9__77_3 )
  {
    if ( !v204->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v204);
      v204 = WarBoardData___c_TypeInfo;
    }
    v207 = (Il2CppObject *)v204->static_fields->__9;
    _9__77_3 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_WarBoardStageNpcEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__77_3, v207, Method_WarBoardData___c___ctor_b__77_3__, 0LL);
    v208 = WarBoardData___c_TypeInfo->static_fields;
    v208->__9__77_3 = (struct System_Func_WarBoardStageNpcEntity__int__o *)_9__77_3;
    sub_1B4CF34((CGThumbnailListItem_o *)&v208->__9__77_3, (int32_t)_9__77_3, v209, v210);
  }
  Instance = System_Linq_Enumerable__Max_object_(
               v205,
               (System_Func_TSource__int__o *)_9__77_3,
               (const MethodInfo_2F2C7B4 *)Method_System_Linq_Enumerable_Max_WarBoardStageNpcEntity___);
  npcEntityDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.npcEntityDict;
  this->fields._maxForceId_k__BackingField = Instance;
  if ( !npcEntityDict )
    goto LABEL_359;
  v212 = System_Collections_Generic_Dictionary_uint__object___get_Values(
           npcEntityDict,
           (const MethodInfo_32904F8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Values__);
  v213 = WarBoardData___c_TypeInfo;
  v214 = (System_Collections_Generic_IEnumerable_TSource__o *)v212;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v213 = WarBoardData___c_TypeInfo;
  }
  _9__77_4 = (System_Func_object__int__o *)v213->static_fields->__9__77_4;
  if ( !_9__77_4 )
  {
    if ( !v213->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v213);
      v213 = WarBoardData___c_TypeInfo;
    }
    v216 = (Il2CppObject *)v213->static_fields->__9;
    _9__77_4 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_WarBoardStageNpcEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__77_4, v216, Method_WarBoardData___c___ctor_b__77_4__, 0LL);
    v217 = WarBoardData___c_TypeInfo->static_fields;
    v217->__9__77_4 = (struct System_Func_WarBoardStageNpcEntity__int__o *)_9__77_4;
    sub_1B4CF34((CGThumbnailListItem_o *)&v217->__9__77_4, (int32_t)_9__77_4, v218, v219);
  }
  p_bgAnimationInfo_k__BackingField = (CGThumbnailListItem_o *)&this->fields._bgAnimationInfo_k__BackingField;
  p_listUiData = (CGThumbnailListItem_o *)&this->fields.listUiData;
  this->fields._maxGroupId_k__BackingField = System_Linq_Enumerable__Max_object_(
                                               v214,
                                               (System_Func_TSource__int__o *)_9__77_4,
                                               (const MethodInfo_2F2C7B4 *)Method_System_Linq_Enumerable_Max_WarBoardStageNpcEntity___);
  v565 = this;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_359;
  v553 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (WarBoardStagePieceDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
  v560 = (NpcFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v564 = (WarBoardCommonReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  v569 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v569,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor__);
  v562 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v562,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor__);
  v220 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v220,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v559 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_WarBoardItemData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v559,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_WarBoardItemData___ctor__);
  v554 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_WarBoardTreasureData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v554,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_WarBoardTreasureData___ctor__);
  v557 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_WarBoardWallData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v557,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_WarBoardWallData___ctor__);
  v558 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_WarBoardEffectData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v558,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_WarBoardEffectData___ctor__);
  v221 = WarBoardData_TypeInfo;
  if ( !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    v221 = WarBoardData_TypeInfo;
  }
  v222 = serverData;
  v223 = v569;
  v224 = layoutEntities;
  WARBOARDDATA_SAVEDATA_KEY = v221->static_fields->WARBOARDDATA_SAVEDATA_KEY;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  Instance = EncryptedPlayerPrefs__HasKey(WARBOARDDATA_SAVEDATA_KEY, 0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( !serverData )
      goto LABEL_359;
    v226 = WarBoardData_TypeInfo;
    progressType = serverData->fields.progressType;
    if ( !WarBoardData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    if ( progressType == 3 )
    {
      WarBoardData__DeleteLocalSave((const MethodInfo *)v226);
    }
    else
    {
      v228 = WarBoardData_TypeInfo->static_fields->WARBOARDDATA_SAVEDATA_KEY;
      if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
      String = EncryptedPlayerPrefs__GetString(v228, 0LL);
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v230 = System_Convert__FromBase64String(String, 0LL);
      v231 = (MiniMessagePack_MiniMessagePacker_o *)sub_1B4D1DC(MiniMessagePack_MiniMessagePacker_TypeInfo);
      MiniMessagePack_MiniMessagePacker___ctor(v231, 0LL);
      if ( !v231 )
        goto LABEL_359;
      v232 = MiniMessagePack_MiniMessagePacker__UnpackClass_object_(
               v231,
               v230,
               (const MethodInfo_2F824AC *)Method_MiniMessagePack_MiniMessagePacker_UnpackClass_WarBoardData_WarBoardLocalSaveData___);
      this->fields.localSaveData = (struct WarBoardData_WarBoardLocalSaveData_o *)v232;
      p_localSaveData = &this->fields.localSaveData;
      sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.localSaveData, (int32_t)v232, v234, v235);
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
        Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        v238 = (_QWORD *)Instance;
        if ( (int)pieceSaves->max_length < 1 )
        {
LABEL_87:
          v578 = (System_Object_array **)v238;
          if ( !*p_localSaveData )
            goto LABEL_359;
          itemSaves = (*p_localSaveData)->fields.itemSaves;
          v567 = v220;
          if ( !itemSaves )
            goto LABEL_359;
          if ( (int)itemSaves->max_length < 1 )
          {
LABEL_97:
            if ( !v238 )
              goto LABEL_359;
            v257 = (CGThumbnailListItem_o *)(v238 + 5);
            if ( v578[5] )
            {
              if ( !*p_localSaveData )
                goto LABEL_359;
              treasureSaves = (*p_localSaveData)->fields.treasureSaves;
              if ( !treasureSaves )
                goto LABEL_359;
              if ( (int)treasureSaves->max_length >= 1 )
              {
                v259 = 0;
                v260 = 0LL;
                do
                {
                  v261 = sub_1B4D1DC(WarBoardData___c__DisplayClass77_2_TypeInfo);
                  WarBoardData___c__DisplayClass77_2___ctor((WarBoardData___c__DisplayClass77_2_o *)v261, 0LL);
                  if ( v260 >= treasureSaves->max_length )
                    goto LABEL_360;
                  if ( !v261 )
                    goto LABEL_359;
                  v264 = treasureSaves->m_Items[v260];
                  *(_QWORD *)(v261 + 16) = v264;
                  v265 = v261 + 16;
                  sub_1B4CF34((CGThumbnailListItem_o *)(v261 + 16), (int32_t)v264, v262, v263);
                  klass = (System_Collections_Generic_IEnumerable_TSource__o *)v257->klass;
                  v267 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardUserTreasureData__bool__TypeInfo);
                  System_Func_object__bool____ctor(
                    v267,
                    (Il2CppObject *)v261,
                    Method_WarBoardData___c__DisplayClass77_2___ctor_b__8__,
                    0LL);
                  Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__49446844(
                                        klass,
                                        (System_Func_TSource__bool__o *)v267,
                                        (const MethodInfo_2F27FBC *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserTreasureData___);
                  if ( Instance )
                  {
                    if ( !*(_QWORD *)v265 )
                      goto LABEL_359;
                    if ( !*(_BYTE *)(*(_QWORD *)v265 + 20LL) )
                    {
                      v259 = 1;
                      *(_BYTE *)(Instance + 20) = 0;
                    }
                  }
                  ++v260;
                }
                while ( (__int64)v260 < (int)treasureSaves->max_length );
                if ( (v259 & 1) != 0 )
                {
                  v268 = WarBoardData___c_TypeInfo;
                  v269 = (System_Collections_Generic_IEnumerable_TSource__o *)v257->klass;
                  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
                    v268 = WarBoardData___c_TypeInfo;
                  }
                  _9__77_9 = (System_Func_object__bool__o *)v268->static_fields->__9__77_9;
                  if ( !_9__77_9 )
                  {
                    if ( !v268->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(v268);
                      v268 = WarBoardData___c_TypeInfo;
                    }
                    v271 = (Il2CppObject *)v268->static_fields->__9;
                    _9__77_9 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardUserTreasureData__bool__TypeInfo);
                    System_Func_object__bool____ctor(_9__77_9, v271, Method_WarBoardData___c___ctor_b__77_9__, 0LL);
                    v272 = WarBoardData___c_TypeInfo->static_fields;
                    v272->__9__77_9 = (struct System_Func_WarBoardUserTreasureData__bool__o *)_9__77_9;
                    sub_1B4CF34((CGThumbnailListItem_o *)&v272->__9__77_9, (int32_t)_9__77_9, v273, v274);
                  }
                  v275 = System_Linq_Enumerable__Where_object_(
                           v269,
                           (System_Func_TSource__bool__o *)_9__77_9,
                           (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_WarBoardUserTreasureData___);
                  v276 = System_Linq_Enumerable__ToArray_object_(
                           v275,
                           (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_WarBoardUserTreasureData___);
                  v257->klass = (CGThumbnailListItem_c *)v276;
                  sub_1B4CF34(v257, (int32_t)v276, v277, v278);
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
              v287 = System_Linq_Enumerable__Count_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)(*p_localSaveData)->fields.squareIndexInfo,
                       (const MethodInfo_2F1F018 *)Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData_SaveData___);
              System_Array__Resize_object_(
                v578 + 11,
                v287,
                (const MethodInfo_2EC2B54 *)Method_System_Array_Resize_WarBoardSquareIndexData___);
              v224 = layoutEntities;
              if ( v287 >= 1 )
              {
                v288 = 0LL;
                v289 = (unsigned int)v287;
                v290 = 8LL;
                while ( *p_localSaveData )
                {
                  squareIndexInfo = (*p_localSaveData)->fields.squareIndexInfo;
                  if ( !squareIndexInfo )
                    break;
                  if ( v288 >= squareIndexInfo->max_length )
                    goto LABEL_360;
                  v292 = (unsigned int *)v578[11];
                  v293 = *(WarBoardSquareIndexData_SaveData_o **)((char *)&squareIndexInfo->obj.klass + v290 * 4);
                  v294 = (WarBoardSquareIndexData_o *)sub_1B4D1DC(WarBoardSquareIndexData_TypeInfo);
                  WarBoardSquareIndexData___ctor_36045692(v294, v293, 0LL);
                  if ( !v292 )
                    break;
                  if ( v294 )
                  {
                    Instance = sub_1B4D0CC(v294, *(_QWORD *)(*(_QWORD *)v292 + 64LL));
                    if ( !Instance )
                    {
LABEL_361:
                      v546 = sub_1B4D210();
                      sub_1B4D0B8(v546, 0LL);
                    }
                  }
                  if ( v288 >= v292[6] )
                    goto LABEL_360;
                  *(_QWORD *)&v292[v290] = v294;
                  sub_1B4CF34((CGThumbnailListItem_o *)&v292[v290], (int32_t)v294, v295, v296);
                  v220 = v567;
                  ++v288;
                  v290 += 2LL;
                  if ( v289 == v288 )
                    goto LABEL_138;
                }
                goto LABEL_359;
              }
LABEL_138:
              if ( !*p_localSaveData )
                goto LABEL_359;
              v222 = (WarBoardDataEntity_o *)v578;
              v297 = System_Linq_Enumerable__Count_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)(*p_localSaveData)->fields.bossBattleInfo,
                       (const MethodInfo_2F1F018 *)Method_System_Linq_Enumerable_Count_WarBoardBossBattleData_SaveData___);
              System_Array__Resize_object_(
                v578 + 12,
                v297,
                (const MethodInfo_2EC2B54 *)Method_System_Array_Resize_WarBoardBossBattleData___);
              if ( v297 >= 1 )
              {
                v298 = 0LL;
                v299 = (unsigned int)v297;
                v300 = 8LL;
                do
                {
                  if ( !*p_localSaveData )
                    goto LABEL_359;
                  bossBattleInfo = (*p_localSaveData)->fields.bossBattleInfo;
                  if ( !bossBattleInfo )
                    goto LABEL_359;
                  if ( v298 >= bossBattleInfo->max_length )
                    goto LABEL_360;
                  v302 = (unsigned int *)v578[12];
                  v303 = *(WarBoardBossBattleData_SaveData_o **)((char *)&bossBattleInfo->obj.klass + v300 * 4);
                  v304 = (WarBoardBossBattleData_o *)sub_1B4D1DC(WarBoardBossBattleData_TypeInfo);
                  WarBoardBossBattleData___ctor_35800932(v304, v303, v305);
                  if ( !v302 )
                    goto LABEL_359;
                  if ( v304 )
                  {
                    Instance = sub_1B4D0CC(v304, *(_QWORD *)(*(_QWORD *)v302 + 64LL));
                    if ( !Instance )
                      goto LABEL_361;
                  }
                  if ( v298 >= v302[6] )
                    goto LABEL_360;
                  *(_QWORD *)&v302[v300] = v304;
                  sub_1B4CF34((CGThumbnailListItem_o *)&v302[v300], (int32_t)v304, v306, v307);
                  v220 = v567;
                  ++v298;
                  v300 += 2LL;
                }
                while ( v299 != v298 );
                v222 = (WarBoardDataEntity_o *)v578;
              }
              v223 = v569;
              goto LABEL_154;
            }
            v280 = 0LL;
            while ( 1 )
            {
              v281 = sub_1B4D1DC(WarBoardData___c__DisplayClass77_3_TypeInfo);
              WarBoardData___c__DisplayClass77_3___ctor((WarBoardData___c__DisplayClass77_3_o *)v281, 0LL);
              if ( v280 >= wallSaves->max_length )
                break;
              if ( !v281 )
                goto LABEL_359;
              v284 = wallSaves->m_Items[v280];
              *(_QWORD *)(v281 + 16) = v284;
              sub_1B4CF34((CGThumbnailListItem_o *)(v281 + 16), (int32_t)v284, v282, v283);
              v285 = (System_Collections_Generic_IEnumerable_TSource__o *)v578[6];
              v286 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardUserWallData__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v286,
                (Il2CppObject *)v281,
                Method_WarBoardData___c__DisplayClass77_3___ctor_b__10__,
                0LL);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__49446844(
                                    v285,
                                    (System_Func_TSource__bool__o *)v286,
                                    (const MethodInfo_2F27FBC *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
              if ( Instance )
                WarBoardUserWallData__SetSaveData(
                  (WarBoardUserWallData_o *)Instance,
                  *(WarBoardWallData_SaveData_o **)(v281 + 16),
                  0LL);
              if ( (__int64)++v280 >= (int)wallSaves->max_length )
                goto LABEL_127;
            }
          }
          else
          {
            v250 = 0LL;
            while ( 1 )
            {
              v251 = sub_1B4D1DC(WarBoardData___c__DisplayClass77_1_TypeInfo);
              WarBoardData___c__DisplayClass77_1___ctor((WarBoardData___c__DisplayClass77_1_o *)v251, 0LL);
              if ( v250 >= itemSaves->max_length )
                break;
              if ( !v251 )
                goto LABEL_359;
              v254 = itemSaves->m_Items[v250];
              *(_QWORD *)(v251 + 16) = v254;
              sub_1B4CF34((CGThumbnailListItem_o *)(v251 + 16), (int32_t)v254, v252, v253);
              if ( !v238 )
                goto LABEL_359;
              v255 = (System_Collections_Generic_IEnumerable_TSource__o *)v238[4];
              v256 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardUserGetItemData__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v256,
                (Il2CppObject *)v251,
                Method_WarBoardData___c__DisplayClass77_1___ctor_b__7__,
                0LL);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__49446844(
                                    v255,
                                    (System_Func_TSource__bool__o *)v256,
                                    (const MethodInfo_2F27FBC *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
              if ( Instance )
                WarBoardUserGetItemData__SetSaveData(
                  (WarBoardUserGetItemData_o *)Instance,
                  *(WarBoardItemData_SaveData_o **)(v251 + 16),
                  0LL);
              if ( (__int64)++v250 >= (int)itemSaves->max_length )
                goto LABEL_97;
            }
          }
        }
        else
        {
          v239 = 0LL;
          while ( 1 )
          {
            v240 = sub_1B4D1DC(WarBoardData___c__DisplayClass77_0_TypeInfo);
            WarBoardData___c__DisplayClass77_0___ctor((WarBoardData___c__DisplayClass77_0_o *)v240, 0LL);
            if ( v239 >= pieceSaves->max_length )
              break;
            if ( !v240 )
              goto LABEL_359;
            v243 = pieceSaves->m_Items[v239];
            *(_QWORD *)(v240 + 16) = v243;
            v244 = (WarBoardPieceData_SaveData_o **)(v240 + 16);
            sub_1B4CF34((CGThumbnailListItem_o *)(v240 + 16), (int32_t)v243, v241, v242);
            if ( !*(_QWORD *)(v240 + 16) || !v238 )
              goto LABEL_359;
            if ( *(_DWORD *)(*(_QWORD *)(v240 + 16) + 24LL) )
            {
              v245 = (System_Collections_Generic_IEnumerable_TSource__o *)v238[2];
              v246 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardUserServantData__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v246,
                (Il2CppObject *)v240,
                Method_WarBoardData___c__DisplayClass77_0___ctor_b__6__,
                0LL);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__49446844(
                                    v245,
                                    (System_Func_TSource__bool__o *)v246,
                                    (const MethodInfo_2F27FBC *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
              if ( Instance )
                WarBoardUserServantData__SetSaveData((WarBoardUserServantData_o *)Instance, *v244, 0LL);
            }
            else
            {
              v247 = (System_Collections_Generic_IEnumerable_TSource__o *)v238[3];
              v248 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardUserMasterData__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v248,
                (Il2CppObject *)v240,
                Method_WarBoardData___c__DisplayClass77_0___ctor_b__5__,
                0LL);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__49446844(
                                    v247,
                                    (System_Func_TSource__bool__o *)v248,
                                    (const MethodInfo_2F27FBC *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
              if ( Instance )
                WarBoardUserMasterData__SetSaveData((WarBoardUserMasterData_o *)Instance, *v244, 0LL);
            }
            if ( (__int64)++v239 >= (int)pieceSaves->max_length )
              goto LABEL_87;
          }
        }
LABEL_360:
        sub_1B4D1F4(Instance, throughCondId);
      }
      v308 = WarBoardData_TypeInfo;
      if ( !WarBoardData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
      WarBoardData__DeleteLocalSave((const MethodInfo *)v308);
      *p_localSaveData = 0LL;
      sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.localSaveData, 0, v309, v310);
    }
LABEL_154:
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    goto LABEL_155;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !serverData )
    goto LABEL_359;
LABEL_155:
  if ( !Instance )
    goto LABEL_359;
  WarBoardManager__InitializeLogic((WarBoardManager_o *)Instance, v222, v222->fields.progressType != 3, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_359;
  WarBoardManager__UpdateServerData((WarBoardManager_o *)Instance, v222, 0LL);
  v579 = v222;
  if ( (int)v580 >= 1 )
  {
    v311 = 0LL;
    p_enemyDeck = &v222->fields.enemyDeck;
    npcIdx = 0;
    p_myDeck = &v222->fields.myDeck;
    v568 = v220;
    do
    {
      v312 = sub_1B4D1DC(WarBoardData___c__DisplayClass77_4_TypeInfo);
      WarBoardData___c__DisplayClass77_4___ctor((WarBoardData___c__DisplayClass77_4_o *)v312, 0LL);
      if ( v311 >= v224->max_length )
        goto LABEL_360;
      if ( !v312 )
        goto LABEL_359;
      v315 = v224->m_Items[v311];
      *(_QWORD *)(v312 + 16) = v315;
      v316 = (WarBoardStageLayoutEntity_o **)(v312 + 16);
      sub_1B4CF34((CGThumbnailListItem_o *)(v312 + 16), (int32_t)v315, v313, v314);
      v317 = *(WarBoardStageLayoutEntity_o **)(v312 + 16);
      v318 = (WarBoardSquareData_o *)sub_1B4D1DC(WarBoardSquareData_TypeInfo);
      WarBoardSquareData___ctor(v318, v317, roadEntities, 0LL);
      if ( v311 )
      {
        if ( (unsigned int)(v311 - 1) >= v224->max_length )
          goto LABEL_360;
        v321 = *((_QWORD *)&v224->max_length + v311);
        if ( !v321 )
          goto LABEL_359;
        v322 = *v316;
        if ( !*v316 )
          goto LABEL_359;
        if ( *(_DWORD *)(v321 + 20) == v322->fields.squareIndex )
          goto LABEL_176;
      }
      else
      {
        v322 = *v316;
        if ( !*v316 )
          goto LABEL_359;
      }
      throughCondId = (unsigned int)v322->fields.throughCondId;
      if ( !(_DWORD)throughCondId )
        goto LABEL_364;
      Instance = (__int64)v564;
      if ( !v564 )
        goto LABEL_359;
      Instance = WarBoardCommonReleaseMaster__IsOpen(v564, throughCondId, 0LL);
      if ( (Instance & 1) != 0 )
      {
LABEL_364:
        if ( !v223 )
          goto LABEL_359;
        items = v223->fields._items;
        v324 = Method_System_Collections_Generic_List_WarBoardSquareData__Add__;
        ++v223->fields._version;
        if ( !items )
          goto LABEL_359;
        size = v223->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v223,
            (Il2CppObject *)v318,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v324[4] + 192LL) + 112LL));
        }
        else
        {
          v326 = &items->obj.klass + size;
          v223->fields._size = size + 1;
          v326[4] = (Il2CppClass *)v318;
          sub_1B4CF34((CGThumbnailListItem_o *)(v326 + 4), (int32_t)v318, v319, v320);
        }
LABEL_176:
        v327 = *v316;
        if ( !*v316 )
          goto LABEL_359;
        if ( v327->fields.isPiecePut )
        {
          questPhase = v222->fields.questPhase;
          questId = v222->fields.questId;
          if ( v327->fields.pieceIndex )
          {
            svtInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v222->fields.svtInfo;
            v330 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardUserServantData__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v330,
              (Il2CppObject *)v312,
              Method_WarBoardData___c__DisplayClass77_4___ctor_b__13__,
              0LL);
            Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__49446844(
                                  svtInfo,
                                  (System_Func_TSource__bool__o *)v330,
                                  (const MethodInfo_2F27FBC *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
            v331 = (WarBoardUserServantData_o *)Instance;
            v332 = 0LL;
          }
          else
          {
            masterInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v222->fields.masterInfo;
            v340 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardUserMasterData__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v340,
              (Il2CppObject *)v312,
              Method_WarBoardData___c__DisplayClass77_4___ctor_b__12__,
              0LL);
            Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__49446844(
                                  masterInfo,
                                  (System_Func_TSource__bool__o *)v340,
                                  (const MethodInfo_2F27FBC *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
            v332 = (WarBoardUserMasterData_o *)Instance;
            v331 = 0LL;
          }
          v341 = *v316;
          if ( !*v316 )
            goto LABEL_359;
          v342 = p_enemyDeck;
          v574 = questPhase;
          if ( !v341->fields.forceId )
          {
            v342 = p_enemyDeck;
            if ( !v341->fields.pieceIndex )
              v342 = p_myDeck;
          }
          v343 = *v342;
          Type = Follower__getType(v341->fields.followerType, 0LL);
          IsNpc = Follower__IsNpc(Type, 0LL);
          v346 = *v316;
          v347 = v222->fields.progressType;
          v348 = IsNpc;
          v349 = *p_npcEntityDict;
          v350 = (WarBoardPieceData_o *)sub_1B4D1DC(WarBoardPieceData_TypeInfo);
          v351 = v350;
          v352 = v347 == 3;
          if ( v348 )
          {
            WarBoardPieceData___ctor(v350, v346, v331, v332, v343, v352, v349, npcIdx, 0LL);
            if ( !*v316 )
              goto LABEL_359;
            v222 = v579;
            v224 = layoutEntities;
            v220 = v568;
            Instance = (__int64)Master_object;
            if ( !Master_object )
              goto LABEL_359;
            Instance = WarBoardStagePieceDetailMaster__TryGetEntity(
                         Master_object,
                         &entity,
                         (*v316)->fields.stageId,
                         (*v316)->fields.forceId,
                         (*v316)->fields.groupId,
                         (*v316)->fields.pieceIndex,
                         0LL);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)entity;
              if ( !entity )
                goto LABEL_359;
              Instance = WarBoardStagePieceDetailEntity__GetImageSvtId(entity, 0LL);
              if ( !v351 )
                goto LABEL_359;
              v351->fields._npcImageSvtId_k__BackingField = Instance;
              Instance = (__int64)entity;
              if ( !entity )
                goto LABEL_359;
              v351->fields._npcDispLimitCount_k__BackingField = WarBoardStagePieceDetailEntity__GetDispLimitCnt(
                                                                  entity,
                                                                  0LL);
            }
            else if ( !v351 )
            {
              goto LABEL_359;
            }
            Instance = (__int64)v560;
            if ( !v560 )
              goto LABEL_359;
            Entity_40004608 = NpcFollowerMaster__GetEntity_40004608(
                                v560,
                                questId,
                                v574,
                                v351->fields._npcId_k__BackingField,
                                0LL);
            if ( Entity_40004608 )
            {
              v359 = Entity_40004608;
              if ( !v351->fields._npcImageSvtId_k__BackingField )
                v351->fields._npcImageSvtId_k__BackingField = NpcFollowerEntity__GetImageSvtId(Entity_40004608, 0LL);
              if ( (v351->fields._npcDispLimitCount_k__BackingField & 0x80000000) != 0 )
                v351->fields._npcDispLimitCount_k__BackingField = NpcFollowerEntity__GetDispLimitCnt(v359, -1, 0LL);
            }
            Instance = WarBoardPieceData__get_isPlayerGroup(v351, 0LL);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)v553;
              if ( !v553 )
                goto LABEL_359;
              Instance = DataMasterBase_object__object__long___TryGetEntity(
                           v553,
                           &v584,
                           v351->fields._npcId_k__BackingField,
                           (const MethodInfo_319FF44 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
              if ( (Instance & 1) != 0 )
              {
                Instance = (__int64)v584;
                if ( !v584 )
                  goto LABEL_359;
                Instance = (__int64)NpcServantFollowerEntity__GetFollowerName_40007508(
                                      (NpcServantFollowerEntity_o *)v584,
                                      v351->fields._npcId_k__BackingField,
                                      questId,
                                      v574,
                                      &isChangeName,
                                      0LL);
                if ( isChangeName )
                {
                  Instance = (__int64)v351->fields._battleServant_k__BackingField;
                  if ( !Instance )
                    goto LABEL_359;
                  BattleServantData__ClearOverwriteServantName((BattleServantData_o *)Instance, 0LL);
                }
              }
            }
            if ( !v568 )
              goto LABEL_359;
            v362 = v568->fields._items;
            v363 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
            ++v568->fields._version;
            if ( !v362 )
              goto LABEL_359;
            v364 = v568->fields._size;
            if ( (unsigned int)v364 >= v362->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v568,
                (Il2CppObject *)v351,
                *(const MethodInfo_35801DC **)(*(_QWORD *)(v363[4] + 192LL) + 112LL));
            }
            else
            {
              v365 = &v362->obj.klass + v364;
              v568->fields._size = v364 + 1;
              v365[4] = (Il2CppClass *)v351;
              sub_1B4CF34((CGThumbnailListItem_o *)(v365 + 4), (int32_t)v351, v360, v361);
            }
            ++npcIdx;
          }
          else
          {
            WarBoardPieceData___ctor(v350, v346, v331, v332, v343, v352, v349, -1, 0LL);
            if ( !v351 )
              goto LABEL_359;
            Instance = WarBoardPieceData__get_isMaster(v351, 0LL);
            v222 = v579;
            v224 = layoutEntities;
            v220 = v568;
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)*p_masterExistsForce;
              if ( !*p_masterExistsForce )
                goto LABEL_359;
              Instance = System_Collections_Generic_List_int___Contains(
                           (System_Collections_Generic_List_int__o *)Instance,
                           v351->fields._forceId_k__BackingField,
                           (const MethodInfo_3563530 *)Method_System_Collections_Generic_List_int__Contains__);
              if ( (Instance & 1) == 0 )
              {
                Instance = (__int64)*p_masterExistsForce;
                if ( !*p_masterExistsForce )
                  goto LABEL_359;
                throughCondId = (unsigned int)v351->fields._forceId_k__BackingField;
                v355 = *(_QWORD *)(Instance + 16);
                v356 = Method_System_Collections_Generic_List_int__Add__;
                ++*(_DWORD *)(Instance + 28);
                if ( !v355 )
                  goto LABEL_359;
                v357 = *(int *)(Instance + 24);
                if ( (unsigned int)v357 >= *(_DWORD *)(v355 + 24) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    (System_Collections_Generic_List_int__o *)Instance,
                    throughCondId,
                    *(const MethodInfo_35631B8 **)(*(_QWORD *)(v356[4] + 192LL) + 112LL));
                }
                else
                {
                  *(_DWORD *)(Instance + 24) = v357 + 1;
                  *(_DWORD *)(v355 + 4 * v357 + 32) = throughCondId;
                }
              }
            }
            if ( !v568 )
              goto LABEL_359;
            v369 = v568->fields._items;
            v370 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
            ++v568->fields._version;
            if ( !v369 )
              goto LABEL_359;
            v371 = v568->fields._size;
            if ( (unsigned int)v371 >= v369->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v568,
                (Il2CppObject *)v351,
                *(const MethodInfo_35801DC **)(*(_QWORD *)(v370[4] + 192LL) + 112LL));
            }
            else
            {
              v372 = &v369->obj.klass + v371;
              v568->fields._size = v371 + 1;
              v372[4] = (Il2CppClass *)v351;
              sub_1B4CF34((CGThumbnailListItem_o *)(v372 + 4), (int32_t)v351, v353, v354);
            }
          }
          v223 = v569;
        }
        v373 = *v316;
        if ( !*v316 )
          goto LABEL_359;
        switch ( v373->fields.type )
        {
          case 2:
            getItemInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v222->fields.getItemInfo;
            v375 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardUserGetItemData__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v375,
              (Il2CppObject *)v312,
              Method_WarBoardData___c__DisplayClass77_4___ctor_b__14__,
              0LL);
            v376 = System_Linq_Enumerable__FirstOrDefault_object__49446844(
                     getItemInfo,
                     (System_Func_TSource__bool__o *)v375,
                     (const MethodInfo_2F27FBC *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
            v377 = *(WarBoardStageLayoutEntity_o **)(v312 + 16);
            v378 = (WarBoardUserGetItemData_o *)v376;
            v379 = (WarBoardItemData_o *)sub_1B4D1DC(WarBoardItemData_TypeInfo);
            WarBoardItemData___ctor(v379, v377, v378, 0LL);
            v380 = v559;
            if ( !v559 )
              goto LABEL_359;
            version = v559->fields._version;
            v382 = v559->fields._items;
            v383 = &Method_System_Collections_Generic_List_WarBoardItemData__Add__;
            goto LABEL_246;
          case 3:
            v379 = (WarBoardItemData_o *)sub_1B4D1DC(WarBoardEffectData_TypeInfo);
            WarBoardEffectData___ctor((WarBoardEffectData_o *)v379, v373, 0LL);
            v380 = v558;
            if ( !v558 )
              goto LABEL_359;
            version = v558->fields._version;
            v382 = v558->fields._items;
            v383 = &Method_System_Collections_Generic_List_WarBoardEffectData__Add__;
            goto LABEL_246;
          case 4:
            treasureInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v222->fields.treasureInfo;
            if ( !treasureInfo )
              goto LABEL_242;
            v385 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardUserTreasureData__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v385,
              (Il2CppObject *)v312,
              Method_WarBoardData___c__DisplayClass77_4___ctor_b__11__,
              0LL);
            Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__49446844(
                                  treasureInfo,
                                  (System_Func_TSource__bool__o *)v385,
                                  (const MethodInfo_2F27FBC *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserTreasureData___);
            if ( Instance )
              continue;
            v373 = *v316;
LABEL_242:
            v379 = (WarBoardItemData_o *)sub_1B4D1DC(WarBoardTreasureData_TypeInfo);
            WarBoardTreasureData___ctor((WarBoardTreasureData_o *)v379, v373, 0LL);
            v380 = v554;
            if ( !v554 )
              goto LABEL_359;
            version = v554->fields._version;
            v382 = v554->fields._items;
            v383 = &Method_System_Collections_Generic_List_WarBoardTreasureData__Add__;
LABEL_246:
            v391 = *v383;
            v380->fields._version = version + 1;
            if ( !v382 )
              goto LABEL_359;
            v392 = v380->fields._size;
            if ( (unsigned int)v392 < v382->max_length )
            {
              v393 = &v382->obj.klass + v392;
              v380->fields._size = v392 + 1;
              v393[4] = (Il2CppClass *)v379;
              v337 = (CGThumbnailListItem_o *)(v393 + 4);
              v338 = (int)v379;
              goto LABEL_249;
            }
            v366 = v391[4];
            v367 = v380;
            v368 = (Il2CppObject *)v379;
            break;
          case 5:
            wallInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v222->fields.wallInfo;
            v387 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardUserWallData__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v387,
              (Il2CppObject *)v312,
              Method_WarBoardData___c__DisplayClass77_4___ctor_b__15__,
              0LL);
            v388 = System_Linq_Enumerable__FirstOrDefault_object__49446844(
                     wallInfo,
                     (System_Func_TSource__bool__o *)v387,
                     (const MethodInfo_2F27FBC *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
            v389 = *(WarBoardStageLayoutEntity_o **)(v312 + 16);
            v390 = (WarBoardUserWallData_o *)v388;
            v379 = (WarBoardItemData_o *)sub_1B4D1DC(WarBoardWallData_TypeInfo);
            WarBoardWallData___ctor((WarBoardWallData_o *)v379, v389, v390, 0LL);
            v380 = v557;
            if ( !v557 )
              goto LABEL_359;
            version = v557->fields._version;
            v382 = v557->fields._items;
            v383 = &Method_System_Collections_Generic_List_WarBoardWallData__Add__;
            goto LABEL_246;
          default:
            continue;
        }
        goto LABEL_251;
      }
      if ( !v562 )
        goto LABEL_359;
      v333 = v562->fields._items;
      v334 = Method_System_Collections_Generic_List_WarBoardSquareData__Add__;
      ++v562->fields._version;
      if ( !v333 )
        goto LABEL_359;
      v335 = v562->fields._size;
      if ( (unsigned int)v335 < v333->max_length )
      {
        v336 = &v333->obj.klass + v335;
        v562->fields._size = v335 + 1;
        v336[4] = (Il2CppClass *)v318;
        v337 = (CGThumbnailListItem_o *)(v336 + 4);
        v338 = (int)v318;
LABEL_249:
        sub_1B4CF34(v337, v338, v319, v320);
        continue;
      }
      v366 = v334[4];
      v367 = v562;
      v368 = (Il2CppObject *)v318;
LABEL_251:
      System_Collections_Generic_List_object___AddWithResize(
        v367,
        v368,
        *(const MethodInfo_35801DC **)(*(_QWORD *)(v366 + 192) + 112LL));
    }
    while ( (unsigned int)v580 != ++v311 );
  }
  if ( !v223 )
    goto LABEL_359;
  v394 = System_Collections_Generic_List_object___ToArray(
           v223,
           (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  v395 = v565;
  v565->fields.squares = (struct WarBoardSquareData_array *)v394;
  sub_1B4CF34((CGThumbnailListItem_o *)&v565->fields.squares, (int32_t)v394, v396, v397);
  Instance = (__int64)v562;
  if ( !v562 )
    goto LABEL_359;
  v398 = System_Collections_Generic_List_object___ToArray(
           v562,
           (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  v565->fields.condSquares = (struct WarBoardSquareData_array *)v398;
  sub_1B4CF34((CGThumbnailListItem_o *)&v565->fields.condSquares, (int32_t)v398, v399, v400);
  if ( !v220 )
    goto LABEL_359;
  v401 = System_Collections_Generic_List_object___ToArray(
           v220,
           (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  v565->fields.pieces = (struct WarBoardPieceData_array *)v401;
  p_pieces = (System_Collections_Generic_IEnumerable_T__o **)&v565->fields.pieces;
  sub_1B4CF34((CGThumbnailListItem_o *)&v565->fields.pieces, (int32_t)v401, v403, v404);
  pieces = (System_Object_array *)v565->fields.pieces;
  v406 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_WarBoardPieceData__TypeInfo);
  System_Comparison_object____ctor(v406, (Il2CppObject *)v565, Method_WarBoardData_ComparePiece__, 0LL);
  System_Array__Sort_object__49088784(
    pieces,
    v406,
    (const MethodInfo_2ED0910 *)Method_System_Array_Sort_WarBoardPieceData___);
  Instance = (__int64)v559;
  if ( !v559 )
    goto LABEL_359;
  v407 = System_Collections_Generic_List_object___ToArray(
           v559,
           (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_WarBoardItemData__ToArray__);
  v565->fields.items = (struct WarBoardItemData_array *)v407;
  sub_1B4CF34((CGThumbnailListItem_o *)&v565->fields.items, (int32_t)v407, v408, v409);
  Instance = (__int64)v554;
  if ( !v554 )
    goto LABEL_359;
  v410 = System_Collections_Generic_List_object___ToArray(
           v554,
           (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_WarBoardTreasureData__ToArray__);
  v565->fields.treasures = (struct WarBoardTreasureData_array *)v410;
  sub_1B4CF34((CGThumbnailListItem_o *)&v565->fields.treasures, (int32_t)v410, v411, v412);
  Instance = (__int64)v558;
  if ( !v558 )
    goto LABEL_359;
  v413 = System_Collections_Generic_List_object___ToArray(
           v558,
           (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_WarBoardEffectData__ToArray__);
  v565->fields.effects = (struct WarBoardEffectData_array *)v413;
  sub_1B4CF34((CGThumbnailListItem_o *)&v565->fields.effects, (int32_t)v413, v414, v415);
  Instance = (__int64)v557;
  if ( !v557 )
    goto LABEL_359;
  v416 = System_Collections_Generic_List_object___ToArray(
           v557,
           (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_WarBoardWallData__ToArray__);
  v565->fields.walls = (struct WarBoardWallData_array *)v416;
  sub_1B4CF34((CGThumbnailListItem_o *)&v565->fields.walls, (int32_t)v416, v417, v418);
  v565->fields.serverData = v222;
  sub_1B4CF34((CGThumbnailListItem_o *)&v565->fields.serverData, (int32_t)v222, v419, v420);
  if ( v222->fields.progressType == 3 )
    WarBoardData__InitPrevCondData(v565, (const MethodInfo *)throughCondId);
  v421 = v565->fields.localSaveData;
  if ( v421 )
  {
    v422 = v421->fields.pieceSaves;
    roadEntitiesb = (WarBoardRoadEntity_array *)&v565->fields.localSaveData;
    if ( v422 )
    {
      if ( (int)v422->max_length >= 1 )
      {
        v423 = 0LL;
        do
        {
          v424 = sub_1B4D1DC(WarBoardData___c__DisplayClass77_5_TypeInfo);
          WarBoardData___c__DisplayClass77_5___ctor((WarBoardData___c__DisplayClass77_5_o *)v424, 0LL);
          if ( v423 >= v422->max_length )
            goto LABEL_360;
          if ( !v424 )
            goto LABEL_359;
          v427 = v422->m_Items[v423];
          *(_QWORD *)(v424 + 16) = v427;
          v428 = (WarBoardPieceData_SaveData_o **)(v424 + 16);
          sub_1B4CF34((CGThumbnailListItem_o *)(v424 + 16), (int32_t)v427, v425, v426);
          v429 = *p_pieces;
          v430 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardPieceData__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v430,
            (Il2CppObject *)v424,
            Method_WarBoardData___c__DisplayClass77_5___ctor_b__16__,
            0LL);
          if ( !BasicHelper__Any_object__49202496(
                  (System_Object_array *)v429,
                  (System_Func_T__bool__o *)v430,
                  (const MethodInfo_2EEC540 *)Method_BasicHelper_Any_WarBoardPieceData___) )
          {
            v431 = (System_Collections_Generic_IEnumerable_TSource__o *)v222->fields.svtInfo;
            v432 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardUserServantData__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v432,
              (Il2CppObject *)v424,
              Method_WarBoardData___c__DisplayClass77_5___ctor_b__17__,
              0LL);
            v433 = System_Linq_Enumerable__FirstOrDefault_object__49446844(
                     v431,
                     (System_Func_TSource__bool__o *)v432,
                     (const MethodInfo_2F27FBC *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
            v434 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v434,
              (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
            if ( !v434 )
              goto LABEL_359;
            System_Collections_Generic_List_object___AddRange(
              v434,
              *p_pieces,
              (const MethodInfo_35803E8 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
            if ( !p_fields->stageEntity )
              goto LABEL_359;
            id = p_fields->stageEntity->fields.id;
            v436 = *v428;
            v437 = (WarBoardPieceData_o *)sub_1B4D1DC(WarBoardPieceData_TypeInfo);
            WarBoardPieceData___ctor_36023208(v437, id, (WarBoardUserServantData_o *)v433, v436, 0LL, -1, 0LL);
            v440 = v434->fields._items;
            v441 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
            ++v434->fields._version;
            if ( !v440 )
              goto LABEL_359;
            v442 = v434->fields._size;
            if ( (unsigned int)v442 >= v440->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v434,
                (Il2CppObject *)v437,
                *(const MethodInfo_35801DC **)(*(_QWORD *)(v441[4] + 192LL) + 112LL));
            }
            else
            {
              v443 = &v440->obj.klass + v442;
              v434->fields._size = v442 + 1;
              v443[4] = (Il2CppClass *)v437;
              sub_1B4CF34((CGThumbnailListItem_o *)(v443 + 4), (int32_t)v437, v438, v439);
            }
            v222 = v579;
            v444 = System_Collections_Generic_List_object___ToArray(
                     v434,
                     (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
            *p_pieces = (System_Collections_Generic_IEnumerable_T__o *)v444;
            sub_1B4CF34((CGThumbnailListItem_o *)p_pieces, (int32_t)v444, v445, v446);
            v395 = v565;
          }
          Instance = (__int64)*v428;
          if ( !*v428 )
            goto LABEL_359;
          WarBoardPieceData_SaveData__SetOwner((WarBoardPieceData_SaveData_o *)Instance, v395, 0LL);
          Instance = (__int64)*v428;
          if ( !*v428 )
            goto LABEL_359;
          WarBoardPieceData_SaveData__Load((WarBoardPieceData_SaveData_o *)Instance, 0LL);
        }
        while ( (__int64)++v423 < (int)v422->max_length );
      }
      if ( roadEntitiesb->obj.klass )
      {
        v447 = *(_QWORD *)&roadEntitiesb->obj.klass->_1.byval_arg.bits;
        if ( v447 )
        {
          v448 = *(_DWORD *)(v447 + 24);
          if ( v448 >= 1 )
          {
            v449 = 0;
            while ( v449 < v448 )
            {
              v450 = v447 + 8LL * (int)v449;
              v451 = *(WarBoardItemData_SaveData_o **)(v450 + 32);
              if ( !v451 )
                goto LABEL_359;
              WarBoardItemData_SaveData__SetOwner(*(WarBoardItemData_SaveData_o **)(v450 + 32), v395, 0LL);
              WarBoardItemData_SaveData__Load(v451, 0LL);
              v448 = *(_DWORD *)(v447 + 24);
              if ( (int)++v449 >= v448 )
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
              v453 = data[6];
              if ( v453 >= 1 )
              {
                v454 = 0;
                while ( v454 < v453 )
                {
                  v455 = (char *)&data[2 * v454];
                  v456 = (WarBoardTreasureData_SaveData_o *)*((_QWORD *)v455 + 4);
                  if ( !v456 )
                    goto LABEL_359;
                  WarBoardTreasureData_SaveData__SetOwner(*((WarBoardTreasureData_SaveData_o **)v455 + 4), v395, 0LL);
                  WarBoardTreasureData_SaveData__Load(v456, 0LL);
                  v453 = data[6];
                  if ( (int)++v454 >= v453 )
                    goto LABEL_293;
                }
                goto LABEL_360;
              }
LABEL_293:
              if ( roadEntitiesb->obj.klass )
              {
                v457 = *(_QWORD *)&roadEntitiesb->obj.klass->_1.this_arg.bits;
                if ( v457 )
                {
                  v458 = *(_DWORD *)(v457 + 24);
                  if ( v458 >= 1 )
                  {
                    v459 = 0;
                    while ( v459 < v458 )
                    {
                      v460 = v457 + 8LL * (int)v459;
                      v461 = *(WarBoardWallData_SaveData_o **)(v460 + 32);
                      if ( !v461 )
                        goto LABEL_359;
                      WarBoardWallData_SaveData__SetOwner(*(WarBoardWallData_SaveData_o **)(v460 + 32), v395, 0LL);
                      WarBoardWallData_SaveData__Load(v461, 0LL);
                      v458 = *(_DWORD *)(v457 + 24);
                      if ( (int)++v459 >= v458 )
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
                        v464 = 0;
                        while ( v464 < namespaze )
                        {
                          v465 = &element_class->_1.image + (int)v464;
                          v466 = (WarBoardSquareData_SaveData_o *)v465[4];
                          if ( !v466 )
                            goto LABEL_359;
                          WarBoardSquareData_SaveData__SetOwner((WarBoardSquareData_SaveData_o *)v465[4], v395, 0LL);
                          WarBoardSquareData_SaveData__Load(v466, 0LL);
                          namespaze = (int)element_class->_1.namespaze;
                          if ( (int)++v464 >= namespaze )
                            goto LABEL_307;
                        }
                        goto LABEL_360;
                      }
LABEL_307:
                      if ( roadEntitiesb->obj.klass )
                      {
                        v395->fields.isPlayedHalfDeadMessage = (bool)roadEntitiesb->obj.klass->_1.interopData;
                        v467 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_WarBoardEventData__TypeInfo);
                        System_Collections_Generic_List_object____ctor(
                          v467,
                          (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_WarBoardEventData___ctor__);
                        v395->fields.listEvent = (struct System_Collections_Generic_List_WarBoardEventData__o *)v467;
                        sub_1B4CF34((CGThumbnailListItem_o *)p_listEvent, (int32_t)v467, v468, v469);
                        v472 = v395->fields.localSaveData;
                        if ( v472 )
                        {
                          eventSaves = v472->fields.eventSaves;
                          if ( eventSaves )
                          {
                            v474 = *(_QWORD *)&eventSaves->max_length;
                            if ( (int)v474 >= 1 )
                            {
                              v475 = 0LL;
                              while ( v475 < (unsigned int)v474 )
                              {
                                v476 = eventSaves->m_Items[v475];
                                v477 = (System_Collections_Generic_List_object__o *)*p_listEvent;
                                v478 = (WarBoardEventData_o *)sub_1B4D1DC(WarBoardEventData_TypeInfo);
                                WarBoardEventData___ctor_36013448(v478, v476, 0LL);
                                if ( !v477 )
                                  goto LABEL_359;
                                v481 = v477->fields._items;
                                v482 = Method_System_Collections_Generic_List_WarBoardEventData__Add__;
                                ++v477->fields._version;
                                if ( !v481 )
                                  goto LABEL_359;
                                v483 = v477->fields._size;
                                if ( (unsigned int)v483 >= v481->max_length )
                                {
                                  System_Collections_Generic_List_object___AddWithResize(
                                    v477,
                                    (Il2CppObject *)v478,
                                    *(const MethodInfo_35801DC **)(*(_QWORD *)(v482[4] + 192LL) + 112LL));
                                }
                                else
                                {
                                  v484 = &v481->obj.klass + v483;
                                  v477->fields._size = v483 + 1;
                                  v484[4] = (Il2CppClass *)v478;
                                  sub_1B4CF34((CGThumbnailListItem_o *)(v484 + 4), (int32_t)v478, v479, v480);
                                }
                                LODWORD(v474) = eventSaves->max_length;
                                if ( (__int64)++v475 >= (int)v474 )
                                  goto LABEL_319;
                              }
                              goto LABEL_360;
                            }
LABEL_319:
                            v485 = roadEntitiesb->obj.klass;
                            if ( roadEntitiesb->obj.klass )
                            {
                              v565->fields.winCondId = (int32_t)v485->_1.fields;
                              typeHierarchy = (struct System_Int32_array *)v485->_2.typeHierarchy;
                              v565->fields.latestPieceActionSquareIndexes = typeHierarchy;
                              sub_1B4CF34(
                                (CGThumbnailListItem_o *)p_latestPieceActionSquareIndexes,
                                (int32_t)typeHierarchy,
                                v470,
                                v471);
                              v489 = v565->fields.localSaveData;
                              if ( v489 )
                              {
                                latestBattlePieceUniqueIndexes = (CGThumbnailListItem_c *)v489->fields.latestBattlePieceUniqueIndexes;
                                p_latestBattlePieceUniqueIndexes->klass = latestBattlePieceUniqueIndexes;
                                sub_1B4CF34(
                                  p_latestBattlePieceUniqueIndexes,
                                  (int32_t)latestBattlePieceUniqueIndexes,
                                  v487,
                                  v488);
                                v491 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_WarBoardPrevCondData__TypeInfo);
                                System_Collections_Generic_List_object____ctor(
                                  v491,
                                  (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_WarBoardPrevCondData___ctor__);
                                p_listPrevCond->klass = (CGThumbnailListItem_c *)v491;
                                sub_1B4CF34(p_listPrevCond, (int32_t)v491, v492, v493);
                                if ( roadEntitiesb->obj.klass )
                                {
                                  properties = roadEntitiesb->obj.klass->_1.properties;
                                  if ( properties )
                                  {
                                    v495 = properties[3];
                                    if ( (int)v495 >= 1 )
                                    {
                                      v496 = 0LL;
                                      while ( v496 < (unsigned int)v495 )
                                      {
                                        v497 = (WarBoardPrevCondData_SaveData_o *)properties[v496 + 4];
                                        v498 = (System_Collections_Generic_List_object__o *)p_listPrevCond->klass;
                                        v499 = (WarBoardPrevCondData_o *)sub_1B4D1DC(WarBoardPrevCondData_TypeInfo);
                                        WarBoardPrevCondData___ctor_36040320(v499, v497, 0LL);
                                        if ( !v498 )
                                          goto LABEL_359;
                                        v502 = v498->fields._items;
                                        v503 = Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__;
                                        ++v498->fields._version;
                                        if ( !v502 )
                                          goto LABEL_359;
                                        v504 = v498->fields._size;
                                        if ( (unsigned int)v504 >= v502->max_length )
                                        {
                                          System_Collections_Generic_List_object___AddWithResize(
                                            v498,
                                            (Il2CppObject *)v499,
                                            *(const MethodInfo_35801DC **)(*(_QWORD *)(v503[4] + 192LL) + 112LL));
                                        }
                                        else
                                        {
                                          v505 = &v502->obj.klass + v504;
                                          v498->fields._size = v504 + 1;
                                          v505[4] = (Il2CppClass *)v499;
                                          sub_1B4CF34((CGThumbnailListItem_o *)(v505 + 4), (int32_t)v499, v500, v501);
                                        }
                                        LODWORD(v495) = *((_DWORD *)properties + 6);
                                        if ( (__int64)++v496 >= (int)v495 )
                                          goto LABEL_332;
                                      }
                                      goto LABEL_360;
                                    }
LABEL_332:
                                    v506 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_HoldReinforcementsData__TypeInfo);
                                    System_Collections_Generic_List_object____ctor(
                                      v506,
                                      (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_HoldReinforcementsData___ctor__);
                                    p_reinforcementsSaveList->klass = (CGThumbnailListItem_c *)v506;
                                    sub_1B4CF34(p_reinforcementsSaveList, (int32_t)v506, v507, v508);
                                    if ( roadEntitiesb->obj.klass )
                                    {
                                      methods = roadEntitiesb->obj.klass->_1.methods;
                                      if ( methods )
                                      {
                                        v510 = methods[3];
                                        if ( (int)v510 >= 1 )
                                        {
                                          v511 = 0LL;
                                          while ( v511 < (unsigned int)v510 )
                                          {
                                            v512 = (HoldReinforcementsData_SaveData_o *)methods[v511 + 4];
                                            v513 = (System_Collections_Generic_List_object__o *)p_reinforcementsSaveList->klass;
                                            v514 = (HoldReinforcementsData_o *)sub_1B4D1DC(HoldReinforcementsData_TypeInfo);
                                            HoldReinforcementsData___ctor_36040520(v514, v512, 0LL);
                                            if ( !v513 )
                                              goto LABEL_359;
                                            v517 = v513->fields._items;
                                            v518 = Method_System_Collections_Generic_List_HoldReinforcementsData__Add__;
                                            ++v513->fields._version;
                                            if ( !v517 )
                                              goto LABEL_359;
                                            v519 = v513->fields._size;
                                            if ( (unsigned int)v519 >= v517->max_length )
                                            {
                                              System_Collections_Generic_List_object___AddWithResize(
                                                v513,
                                                (Il2CppObject *)v514,
                                                *(const MethodInfo_35801DC **)(*(_QWORD *)(v518[4] + 192LL) + 112LL));
                                            }
                                            else
                                            {
                                              v520 = &v517->obj.klass + v519;
                                              v513->fields._size = v519 + 1;
                                              v520[4] = (Il2CppClass *)v514;
                                              sub_1B4CF34(
                                                (CGThumbnailListItem_o *)(v520 + 4),
                                                (int32_t)v514,
                                                v515,
                                                v516);
                                            }
                                            LODWORD(v510) = *((_DWORD *)methods + 6);
                                            if ( (__int64)++v511 >= (int)v510 )
                                              goto LABEL_343;
                                          }
                                          goto LABEL_360;
                                        }
LABEL_343:
                                        if ( roadEntitiesb->obj.klass )
                                        {
                                          v521 = System_Linq_Enumerable__ToList_int_(
                                                   (System_Collections_Generic_IEnumerable_TSource__o *)roadEntitiesb->obj.klass->_1.nestedTypes,
                                                   (const MethodInfo_2F3FF5C *)Method_System_Linq_Enumerable_ToList_int___);
                                          p_playedStageReinforcementsList->klass = (CGThumbnailListItem_c *)v521;
                                          sub_1B4CF34(p_playedStageReinforcementsList, (int32_t)v521, v522, v523);
                                          v524 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_WarBoardUiData__TypeInfo);
                                          System_Collections_Generic_List_object____ctor(
                                            v524,
                                            (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_WarBoardUiData___ctor__);
                                          p_listUiData->klass = (CGThumbnailListItem_c *)v524;
                                          sub_1B4CF34(p_listUiData, (int32_t)v524, v525, v526);
                                          if ( roadEntitiesb->obj.klass )
                                          {
                                            implementedInterfaces = roadEntitiesb->obj.klass->_1.implementedInterfaces;
                                            if ( implementedInterfaces )
                                            {
                                              v530 = implementedInterfaces[3];
                                              if ( (int)v530 >= 1 )
                                              {
                                                v531 = 0LL;
                                                while ( v531 < (unsigned int)v530 )
                                                {
                                                  v532 = (WarBoardUiData_SaveData_o *)implementedInterfaces[v531 + 4];
                                                  v533 = (System_Collections_Generic_List_object__o *)p_listUiData->klass;
                                                  v534 = (WarBoardUiData_o *)sub_1B4D1DC(WarBoardUiData_TypeInfo);
                                                  WarBoardUiData___ctor_36046940(v534, v532, 0LL);
                                                  if ( !v533 )
                                                    goto LABEL_359;
                                                  v537 = v533->fields._items;
                                                  v538 = Method_System_Collections_Generic_List_WarBoardUiData__Add__;
                                                  ++v533->fields._version;
                                                  if ( !v537 )
                                                    goto LABEL_359;
                                                  v539 = v533->fields._size;
                                                  if ( (unsigned int)v539 >= v537->max_length )
                                                  {
                                                    System_Collections_Generic_List_object___AddWithResize(
                                                      v533,
                                                      (Il2CppObject *)v534,
                                                      *(const MethodInfo_35801DC **)(*(_QWORD *)(v538[4] + 192LL) + 112LL));
                                                  }
                                                  else
                                                  {
                                                    v540 = &v537->obj.klass + v539;
                                                    v533->fields._size = v539 + 1;
                                                    v540[4] = (Il2CppClass *)v534;
                                                    sub_1B4CF34(
                                                      (CGThumbnailListItem_o *)(v540 + 4),
                                                      (int32_t)v534,
                                                      v535,
                                                      v536);
                                                  }
                                                  LODWORD(v530) = *((_DWORD *)implementedInterfaces + 6);
                                                  if ( (__int64)++v531 >= (int)v530 )
                                                    goto LABEL_355;
                                                }
                                                goto LABEL_360;
                                              }
LABEL_355:
                                              if ( roadEntitiesb->obj.klass )
                                              {
                                                interfaceOffsets = roadEntitiesb->obj.klass->_1.interfaceOffsets;
                                                p_bgAnimationInfo_k__BackingField->klass = (CGThumbnailListItem_c *)interfaceOffsets;
                                                sub_1B4CF34(
                                                  p_bgAnimationInfo_k__BackingField,
                                                  (int32_t)interfaceOffsets,
                                                  v527,
                                                  v528);
                                                v542 = roadEntitiesb->obj.klass;
                                                if ( roadEntitiesb->obj.klass )
                                                {
                                                  v565->fields._ContinueConsumeType_k__BackingField = HIDWORD(v542->_2.unity_user_data);
                                                  v565->fields._IsContinue_k__BackingField = v542->_2.initializationExceptionGCHandle;
                                                  v565->fields._IsNextTurn_k__BackingField = BYTE1(v542->_2.initializationExceptionGCHandle);
                                                  v565->fields.localSaveTiming = (int32_t)v542->_2.unity_user_data;
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
    sub_1B4D1EC(Instance, throughCondId);
  }
  v543 = (WarBoardData_WarBoardLocalSaveData_o *)sub_1B4D1DC(WarBoardData_WarBoardLocalSaveData_TypeInfo);
  WarBoardData_WarBoardLocalSaveData___ctor_36000440(v543, v565, 0LL);
  v565->fields.localSaveData = v543;
  sub_1B4CF34((CGThumbnailListItem_o *)&v565->fields.localSaveData, (int32_t)v543, v544, v545);
}


void __fastcall WarBoardData__AddPlayedEventData(
        WarBoardData_o *this,
        WarBoardEventData_o *eventData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Collections_Generic_List_object__o *listEvent; // x0
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppClass **v10; // x8

  if ( (byte_49B8A2E & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardEventData__Add__, eventData);
    byte_49B8A2E = 1;
  }
  listEvent = (System_Collections_Generic_List_object__o *)this->fields.listEvent;
  if ( !listEvent
    || (items = listEvent->fields._items,
        v8 = Method_System_Collections_Generic_List_WarBoardEventData__Add__,
        ++listEvent->fields._version,
        !items) )
  {
    sub_1B4D1EC(listEvent, eventData);
  }
  size = listEvent->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      listEvent,
      (Il2CppObject *)eventData,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    listEvent->fields._size = size + 1;
    v10[4] = (Il2CppClass *)eventData;
    sub_1B4CF34((CGThumbnailListItem_o *)(v10 + 4), (int32_t)eventData, (int32_t)method, v3);
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
  NpcFollowerEntity_o *Entity_40004608; // x0
  NpcFollowerEntity_o *v47; // x20
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  Il2CppClass **v53; // x0
  struct WarBoardPieceData_array **p_pieces; // x20
  System_Object_array *v55; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  struct WarBoardUserServantData_array *svtInfo; // x1
  __int64 v61; // x21
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x22
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  unsigned __int64 v65; // x23
  __int64 v66; // x26
  __int64 v67; // x27
  struct WarBoardData_WarBoardLocalSaveData_o *v68; // x8
  struct WarBoardPieceData_array *v69; // x9
  unsigned int *pieceSaves; // x28
  WarBoardPieceData_o *v71; // x22
  WarBoardPieceData_SaveData_o *v72; // x21
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  __int64 v76; // x0
  System_Collections_Generic_List_object__o *v77; // [xsp+10h] [xbp-D0h]
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+18h] [xbp-C8h]
  System_Int32_array *v79; // [xsp+20h] [xbp-C0h]
  Il2CppObject *v80; // [xsp+28h] [xbp-B8h]
  WarBoardUserServantData_array *v81; // [xsp+30h] [xbp-B0h]
  NpcFollowerMaster_o *v82; // [xsp+38h] [xbp-A8h]
  System_Collections_Generic_List_object__o *v83; // [xsp+40h] [xbp-A0h]
  WarBoardUserServantData_o **m_Items; // [xsp+48h] [xbp-98h]
  int32_t questPhase; // [xsp+50h] [xbp-90h]
  int32_t questId; // [xsp+54h] [xbp-8Ch]
  int32_t *v87; // [xsp+58h] [xbp-88h]
  bool isChangeName; // [xsp+64h] [xbp-7Ch] BYREF
  Il2CppObject *v89; // [xsp+68h] [xbp-78h] BYREF
  WarBoardStagePieceDetailEntity_o *v90; // [xsp+70h] [xbp-70h] BYREF
  WarBoardReinforcementsEntity_o *entity; // [xsp+78h] [xbp-68h] BYREF

  v9 = serverData;
  if ( (byte_49B8A2C & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___, serverData);
    sub_1B4CF90(&Method_DataManager_GetMaster_NpcFollowerMaster___, v11);
    sub_1B4CF90(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___, v12);
    sub_1B4CF90(&Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___, v13);
    sub_1B4CF90(&DataManager_TypeInfo, v14);
    sub_1B4CF90(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__, v16);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, v17);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__RemoveAt__, v18);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__, v19);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v20);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__get_Item__, v21);
    sub_1B4CF90(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v22);
    sub_1B4CF90(&WarBoardPieceData_SaveData___TypeInfo, v23);
    sub_1B4CF90(&WarBoardPieceData_SaveData_TypeInfo, v24);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1B4CF90(&WarBoardPieceData_TypeInfo, v26);
    byte_49B8A2C = 1;
  }
  v90 = 0LL;
  entity = 0LL;
  v89 = 0LL;
  isChangeName = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  v30 = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v82 = (NpcFollowerMaster_o *)Instance;
  if ( !v9 )
    goto LABEL_69;
  questPhase = v9->fields.questPhase;
  questId = v9->fields.questId;
  v77 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v77,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v31 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( !reinfoSvtInfo )
    goto LABEL_69;
  v32 = *(_QWORD *)&reinfoSvtInfo->max_length;
  v83 = v31;
  if ( (int)v32 >= 1 )
  {
    v33 = 0LL;
    v87 = &indexList->m_Items[1];
    m_Items = reinfoSvtInfo->m_Items;
    v80 = Master_object;
    v81 = reinfoSvtInfo;
    v79 = indexList;
    do
    {
      if ( v33 >= (unsigned int)v32 )
LABEL_70:
        sub_1B4D1F4(Instance, v29);
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
        if ( v87[v33] < (signed int)reinforcementsIds->max_length )
          goto LABEL_52;
      }
      if ( v33 >= indexList->max_length )
        goto LABEL_70;
      v36 = reinfoStage->fields.reinforcementsIds;
      if ( !v36 )
        goto LABEL_69;
      v37 = v87[v33];
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
      Instance = (__int64)this->fields.reinforcementsAppointmentSquareList;
      if ( !Instance )
        goto LABEL_69;
      v40 = entity;
      npcEntityDict = this->fields.npcEntityDict;
      v42 = reinfoStage;
      Instance = System_Collections_Generic_List_int___get_Item(
                   (System_Collections_Generic_List_int__o *)Instance,
                   0,
                   (const MethodInfo_3562EC8 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( v33 >= indexList->max_length )
        goto LABEL_70;
      v43 = Instance;
      v44 = v87[v33];
      v45 = (WarBoardPieceData_o *)sub_1B4D1DC(WarBoardPieceData_TypeInfo);
      WarBoardPieceData___ctor_36022000(v45, v42, v40, v34, npcEntityDict, v33, v43, v44, 0LL);
      Instance = (__int64)this->fields.reinforcementsAppointmentSquareList;
      if ( !Instance )
        goto LABEL_69;
      System_Collections_Generic_List_int___RemoveAt(
        (System_Collections_Generic_List_int__o *)Instance,
        0,
        (const MethodInfo_3564938 *)Method_System_Collections_Generic_List_int__RemoveAt__);
      if ( !v45 )
        goto LABEL_69;
      v30 = (Il2CppObject *)v38;
      if ( !v38 )
        goto LABEL_69;
      v9 = v39;
      Instance = WarBoardStagePieceDetailMaster__TryGetEntity(
                   v38,
                   &v90,
                   v39->fields.stageId,
                   v45->fields._forceId_k__BackingField,
                   v45->fields._groupId_k__BackingField,
                   v45->fields._index_k__BackingField,
                   0LL);
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)v90;
        if ( !v90 )
          goto LABEL_69;
        v45->fields._npcImageSvtId_k__BackingField = WarBoardStagePieceDetailEntity__GetImageSvtId(v90, 0LL);
        Instance = (__int64)v90;
        if ( !v90 )
          goto LABEL_69;
        Instance = WarBoardStagePieceDetailEntity__GetDispLimitCnt(v90, 0LL);
        v45->fields._npcDispLimitCount_k__BackingField = Instance;
      }
      if ( !v82 )
        goto LABEL_69;
      Entity_40004608 = NpcFollowerMaster__GetEntity_40004608(
                          v82,
                          questId,
                          questPhase,
                          v45->fields._npcId_k__BackingField,
                          0LL);
      if ( Entity_40004608 )
      {
        v47 = Entity_40004608;
        if ( !v45->fields._npcImageSvtId_k__BackingField )
          v45->fields._npcImageSvtId_k__BackingField = NpcFollowerEntity__GetImageSvtId(Entity_40004608, 0LL);
        if ( (v45->fields._npcDispLimitCount_k__BackingField & 0x80000000) != 0 )
          v45->fields._npcDispLimitCount_k__BackingField = NpcFollowerEntity__GetDispLimitCnt(v47, -1, 0LL);
      }
      Instance = WarBoardPieceData__get_isPlayerGroup(v45, 0LL);
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)MasterData_object;
        if ( !MasterData_object )
          goto LABEL_69;
        Instance = DataMasterBase_object__object__long___TryGetEntity(
                     MasterData_object,
                     &v89,
                     v45->fields._npcId_k__BackingField,
                     (const MethodInfo_319FF44 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
        if ( (Instance & 1) != 0 )
        {
          Instance = (__int64)v89;
          if ( !v89 )
            goto LABEL_69;
          Instance = (__int64)NpcServantFollowerEntity__GetFollowerName_40007508(
                                (NpcServantFollowerEntity_o *)v89,
                                v45->fields._npcId_k__BackingField,
                                questId,
                                questPhase,
                                &isChangeName,
                                0LL);
          if ( isChangeName )
          {
            Instance = (__int64)v45->fields._battleServant_k__BackingField;
            if ( !Instance )
              goto LABEL_69;
            BattleServantData__ClearOverwriteServantName((BattleServantData_o *)Instance, 0LL);
          }
        }
      }
      if ( !v83 )
        goto LABEL_69;
      items = v83->fields._items;
      v51 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
      ++v83->fields._version;
      if ( !items )
        goto LABEL_69;
      size = v83->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v83,
          (Il2CppObject *)v45,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
      }
      else
      {
        v53 = &items->obj.klass + size;
        v83->fields._size = size + 1;
        v53[4] = (Il2CppClass *)v45;
        sub_1B4CF34((CGThumbnailListItem_o *)(v53 + 4), (int32_t)v45, v48, v49);
      }
      reinfoStage = v42;
      indexList = v79;
      Master_object = v80;
      reinfoSvtInfo = v81;
LABEL_52:
      LODWORD(v32) = reinfoSvtInfo->max_length;
    }
    while ( (__int64)++v33 < (int)v32 );
  }
  if ( !v77 )
    goto LABEL_69;
  p_pieces = &this->fields.pieces;
  System_Collections_Generic_List_object___AddRange(
    v77,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.pieces,
    (const MethodInfo_35803E8 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v77,
    (System_Collections_Generic_IEnumerable_T__o *)v83,
    (const MethodInfo_35803E8 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
  v55 = System_Collections_Generic_List_object___ToArray(
          v77,
          (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  this->fields.pieces = (struct WarBoardPieceData_array *)v55;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.pieces, (int32_t)v55, v56, v57);
  Instance = (__int64)this->fields.serverData;
  if ( !Instance
    || (svtInfo = v9->fields.svtInfo,
        *(_QWORD *)(Instance + 16) = svtInfo,
        sub_1B4CF34((CGThumbnailListItem_o *)(Instance + 16), (int32_t)svtInfo, v58, v59),
        !*p_pieces)
    || (v61 = *(_QWORD *)&(*p_pieces)->max_length,
        localSaveData = this->fields.localSaveData,
        Instance = sub_1B4D038(WarBoardPieceData_SaveData___TypeInfo, (unsigned int)v61),
        !localSaveData) )
  {
LABEL_69:
    sub_1B4D1EC(Instance, v29);
  }
  localSaveData->fields.pieceSaves = (struct WarBoardPieceData_SaveData_array *)Instance;
  sub_1B4CF34((CGThumbnailListItem_o *)&localSaveData->fields.pieceSaves, Instance, v63, v64);
  if ( (int)v61 >= 1 )
  {
    v65 = 0LL;
    v66 = (unsigned int)v61;
    v67 = 8LL;
    do
    {
      v68 = this->fields.localSaveData;
      if ( !v68 )
        goto LABEL_69;
      v69 = *p_pieces;
      if ( !*p_pieces )
        goto LABEL_69;
      if ( v65 >= v69->max_length )
        goto LABEL_70;
      pieceSaves = (unsigned int *)v68->fields.pieceSaves;
      v71 = *(WarBoardPieceData_o **)((char *)&v69->obj.klass + v67 * 4);
      v72 = (WarBoardPieceData_SaveData_o *)sub_1B4D1DC(WarBoardPieceData_SaveData_TypeInfo);
      WarBoardPieceData_SaveData___ctor_36003492(v72, v71, 0LL);
      if ( !pieceSaves )
        goto LABEL_69;
      if ( v72 )
      {
        Instance = sub_1B4D0CC(v72, *(_QWORD *)(*(_QWORD *)pieceSaves + 64LL));
        if ( !Instance )
        {
          v76 = sub_1B4D210();
          sub_1B4D0B8(v76, 0LL);
        }
      }
      if ( v65 >= pieceSaves[6] )
        goto LABEL_70;
      *(_QWORD *)&pieceSaves[v67] = v72;
      sub_1B4CF34((CGThumbnailListItem_o *)&pieceSaves[v67], (int32_t)v72, v73, v74);
      ++v65;
      v67 += 2LL;
    }
    while ( v66 != v65 );
  }
  Instance = (__int64)v83;
  if ( !v83 )
    goto LABEL_69;
  return (WarBoardPieceData_array *)System_Collections_Generic_List_object___ToArray(
                                      v83,
                                      (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
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
  CGThumbnailListItem_o *p_monitor; // x20
  System_Collections_Generic_IEnumerable_T__o *monitor; // x22
  System_Collections_Generic_List_int__o *v24; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  System_Int32_array *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3

  if ( (byte_49B8A33 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_Find_WarBoardSquareIndexData___, *(_QWORD *)&squareIndex);
    sub_1B4CF90(&System_Func_WarBoardSquareIndexData__bool__TypeInfo, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Contains__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor___75443648, v11);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass173_0__AddSquareInfo_b__0__, v13);
    sub_1B4CF90(&WarBoardData___c__DisplayClass173_0_TypeInfo, v14);
    byte_49B8A33 = 1;
  }
  v15 = (WarBoardData___c__DisplayClass173_0_o *)sub_1B4D1DC(WarBoardData___c__DisplayClass173_0_TypeInfo);
  WarBoardData___c__DisplayClass173_0___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_14;
  v15->fields.squareIndex = squareIndex;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_14;
  squareIndexInfo = (System_Object_array *)serverData->fields.squareIndexInfo;
  v20 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardSquareIndexData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v20,
    (Il2CppObject *)v15,
    Method_WarBoardData___c__DisplayClass173_0__AddSquareInfo_b__0__,
    0LL);
  object = BasicHelper__Find_object_(
             squareIndexInfo,
             (System_Func_T__bool__o *)v20,
             (const MethodInfo_2EED060 *)Method_BasicHelper_Find_WarBoardSquareIndexData___);
  if ( !object )
    return;
  p_monitor = (CGThumbnailListItem_o *)&object[1].monitor;
  monitor = (System_Collections_Generic_IEnumerable_T__o *)object[1].monitor;
  v24 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_55978636(
    v24,
    monitor,
    (const MethodInfo_3562A8C *)Method_System_Collections_Generic_List_int___ctor___75443648);
  if ( !v24 )
    goto LABEL_14;
  v16 = System_Collections_Generic_List_int___Contains(
          v24,
          effectId,
          (const MethodInfo_3563530 *)Method_System_Collections_Generic_List_int__Contains__);
  if ( v16 )
    return;
  items = v24->fields._items;
  v26 = Method_System_Collections_Generic_List_int__Add__;
  ++v24->fields._version;
  if ( !items )
LABEL_14:
    sub_1B4D1EC(v16, v17);
  size = v24->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v24,
      effectId,
      *(const MethodInfo_35631B8 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v24->fields._size = size + 1;
    items->m_Items[size + 1] = effectId;
  }
  v28 = System_Collections_Generic_List_int___ToArray(
          v24,
          (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__);
  p_monitor->klass = (CGThumbnailListItem_c *)v28;
  sub_1B4CF34(p_monitor, (int32_t)v28, v29, v30);
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
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v19; // x0
  WarBoardData___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x19
  System_Func_object__bool__o *_9__191_1; // x20
  Il2CppObject *v23; // x21
  struct WarBoardData___c_StaticFields *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  WarBoardData___c_c *v28; // x8
  System_Collections_Generic_IEnumerable_T__o *v29; // x19
  System_Action_object__o *_9__191_2; // x20
  Il2CppObject *v31; // x21
  CGThumbnailListItem_o *p__9__191_2; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3

  if ( (byte_49B8A42 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_BattleBuffData__TypeInfo, method);
    sub_1B4CF90(&Method_BasicHelper_ForEach_BattleBuffData___, v3);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__BattleBuffData___, v4);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_BattleBuffData___, v5);
    sub_1B4CF90(&System_Func_BattleBuffData__bool__TypeInfo, v6);
    sub_1B4CF90(&System_Func_WarBoardPieceData__BattleBuffData__TypeInfo, v7);
    sub_1B4CF90(&Method_WarBoardData___c__BuffTurnProgressing_b__191_0__, v8);
    sub_1B4CF90(&Method_WarBoardData___c__BuffTurnProgressing_b__191_1__, v9);
    sub_1B4CF90(&Method_WarBoardData___c__BuffTurnProgressing_b__191_2__, v10);
    sub_1B4CF90(&WarBoardData___c_TypeInfo, v11);
    byte_49B8A42 = 1;
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
    _9__191_0 = (System_Func_object__object__o *)sub_1B4D1DC(System_Func_WarBoardPieceData__BattleBuffData__TypeInfo);
    System_Func_object__object____ctor(_9__191_0, v15, Method_WarBoardData___c__BuffTurnProgressing_b__191_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__191_0 = (struct System_Func_WarBoardPieceData__BattleBuffData__o *)_9__191_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__191_0, (int32_t)_9__191_0, v17, v18);
  }
  v19 = System_Linq_Enumerable__Select_object__object_(
          pieces,
          (System_Func_TSource__TResult__o *)_9__191_0,
          (const MethodInfo_2F341B8 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__BattleBuffData___);
  v20 = WarBoardData___c_TypeInfo;
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)v19;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v20 = WarBoardData___c_TypeInfo;
  }
  _9__191_1 = (System_Func_object__bool__o *)v20->static_fields->__9__191_1;
  if ( !_9__191_1 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = WarBoardData___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__191_1 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_BattleBuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__191_1, v23, Method_WarBoardData___c__BuffTurnProgressing_b__191_1__, 0LL);
    v24 = WarBoardData___c_TypeInfo->static_fields;
    v24->__9__191_1 = (struct System_Func_BattleBuffData__bool__o *)_9__191_1;
    sub_1B4CF34((CGThumbnailListItem_o *)&v24->__9__191_1, (int32_t)_9__191_1, v25, v26);
  }
  v27 = System_Linq_Enumerable__Where_object_(
          v21,
          (System_Func_TSource__bool__o *)_9__191_1,
          (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_BattleBuffData___);
  v28 = WarBoardData___c_TypeInfo;
  v29 = (System_Collections_Generic_IEnumerable_T__o *)v27;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v28 = WarBoardData___c_TypeInfo;
  }
  _9__191_2 = (System_Action_object__o *)v28->static_fields->__9__191_2;
  if ( !_9__191_2 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = WarBoardData___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v28->static_fields->__9;
    _9__191_2 = (System_Action_object__o *)sub_1B4D1DC(System_Action_BattleBuffData__TypeInfo);
    System_Action_object____ctor(_9__191_2, v31, Method_WarBoardData___c__BuffTurnProgressing_b__191_2__, 0LL);
    p__9__191_2 = (CGThumbnailListItem_o *)&WarBoardData___c_TypeInfo->static_fields->__9__191_2;
    p__9__191_2->klass = (CGThumbnailListItem_c *)_9__191_2;
    sub_1B4CF34(p__9__191_2, (int32_t)_9__191_2, v33, v34);
  }
  BasicHelper__ForEach_object_(
    v29,
    (System_Action_T__o *)_9__191_2,
    (const MethodInfo_2EEE790 *)Method_BasicHelper_ForEach_BattleBuffData___);
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
  const MethodInfo_369DEB4 *v17; // x2
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 v20; // x24
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  Il2CppObject *Instance; // x25
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  __int64 v28; // x26
  __int64 v29; // x0
  System_Nullable_Vector3__o v30; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_float__o v31; // 0:x3.8
  System_Nullable_Vector3__o v32; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49B89F9 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, taskList);
    sub_1B4CF90(&Method_System_Nullable_Vector3___ctor__, v5);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_1B4CF90(&WarBoardTaskBase___TypeInfo, v7);
    byte_49B89F9 = 1;
  }
  AliveServantPieces = (__int64)WarBoardData__GetAliveServantPieces(this, (const MethodInfo *)taskList);
  if ( !AliveServantPieces )
LABEL_27:
    sub_1B4D1EC(AliveServantPieces, v9);
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
          AliveServantPieces = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
                *(const MethodInfo_35801DC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v24 = &items->obj.klass + size;
              taskList->fields._size = size + 1;
              v24[4] = (Il2CppClass *)v20;
              sub_1B4CF34((CGThumbnailListItem_o *)(v24 + 4), v20, v18, v19);
            }
          }
          else
          {
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
            AliveServantPieces = sub_1B4D038(WarBoardTaskBase___TypeInfo, 1LL);
            if ( !AliveServantPieces )
              goto LABEL_27;
            v28 = AliveServantPieces;
            if ( v20 )
            {
              AliveServantPieces = sub_1B4D0CC(v20, *(_QWORD *)(*(_QWORD *)AliveServantPieces + 64LL));
              if ( !AliveServantPieces )
              {
                v29 = sub_1B4D210();
                sub_1B4D0B8(v29, 0LL);
              }
            }
            if ( !*(_DWORD *)(v28 + 24) )
              break;
            *(_QWORD *)(v28 + 32) = v20;
            sub_1B4CF34((CGThumbnailListItem_o *)(v28 + 32), v20, v26, v27);
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
    sub_1B4D1F4(AliveServantPieces, v9);
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
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t condGroup; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49B89FE & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, method);
    sub_1B4CF90(&DataManager_TypeInfo, v4);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Count_int____75531184, v5);
    sub_1B4CF90(&System_Func_int__bool__TypeInfo, v6);
    sub_1B4CF90(&Method_WarBoardData___c__CheckWinCond_b__98_0__, v7);
    sub_1B4CF90(&WarBoardData___c_TypeInfo, v8);
    byte_49B89FE = 1;
  }
  if ( (this->fields.winCondId & 0x80000000) == 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (WarBoardPieceData_array *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    condGroup = -1;
    if ( Master_object )
    {
      if ( !WarBoardCommonReleaseMaster__IsOpen_40929544(
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
    sub_1B4D1EC(Master_object, v10);
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
      Master_object = WarBoardData__GetPieces_35822124(this, i, v17, v2);
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
            sub_1B4D1F4(Master_object, v10);
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
    _9__98_0 = (System_Func_int__bool__o *)sub_1B4D1DC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__98_0, v24, Method_WarBoardData___c__CheckWinCond_b__98_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__98_0 = _9__98_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__98_0, (int32_t)_9__98_0, v26, v27);
  }
  return (v14 == 0) & (System_Linq_Enumerable__Count_int__49413848(
                         (System_Collections_Generic_IEnumerable_TSource__o *)masterExistsForce,
                         (System_Func_TSource__bool__o *)_9__98_0,
                         (const MethodInfo_2F1FED8 *)Method_System_Linq_Enumerable_Count_int____75531184) > 0) | (v15 == 0);
}


void __fastcall WarBoardData__ClearLastBattlePieceUniqueIndexes(WarBoardData_o *this, const MethodInfo *method)
{
  struct System_UInt32_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_49B8A36 & 1) == 0 )
  {
    sub_1B4CF90(&uint___TypeInfo, method);
    byte_49B8A36 = 1;
  }
  v3 = (struct System_UInt32_array *)sub_1B4D038(uint___TypeInfo, 0LL);
  this->fields.latestBattlePieceUniqueIndexes = v3;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.latestBattlePieceUniqueIndexes, (int32_t)v3, v4, v5);
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
    sub_1B4D1EC(this, a);
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

  if ( (byte_49B8A4A & 1) == 0 )
  {
    sub_1B4CF90(&WarBoardData_BattleParticipantInfo_TypeInfo, attackPieceData);
    byte_49B8A4A = 1;
  }
  v6 = (WarBoardData_BattleParticipantInfo_o *)sub_1B4D1DC(WarBoardData_BattleParticipantInfo_TypeInfo);
  WarBoardData_BattleParticipantInfo___ctor(v6, attackPieceData, targetPieceData, 0LL);
  return v6;
}


void __fastcall WarBoardData__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WarBoardData_c *v3; // x0
  System_String_o *AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY; // x19

  if ( (byte_49B89F6 & 1) == 0 )
  {
    sub_1B4CF90(&EncryptedPlayerPrefs_TypeInfo, v1);
    sub_1B4CF90(&WarBoardData_TypeInfo, v2);
    byte_49B89F6 = 1;
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
  System_Delegate_o **v8; // x20
  System_Delegate_o *v9; // x21
  WarBoardData___c_c *v10; // x0
  WarBoardTaskBase_TaskCallback_o *_9__152_0; // x22
  Il2CppObject *v12; // x23
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Delegate_o *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Delegate_o *v19; // x8
  WarBoardTaskBase_TaskCallback_c *v20; // x1

  if ( (byte_49B8A26 & 1) == 0 )
  {
    sub_1B4CF90(&WarBoardTaskBase_TaskCallback_TypeInfo, method);
    sub_1B4CF90(&Method_WarBoardData___c__CreateEventBossUIDataTask_b__152_0__, v2);
    sub_1B4CF90(&WarBoardData___c_TypeInfo, v3);
    sub_1B4CF90(&WarBoardWaitTime_TypeInfo, v4);
    byte_49B8A26 = 1;
  }
  v5 = sub_1B4D1DC(WarBoardWaitTime_TypeInfo);
  WarBoardWaitTime___ctor((WarBoardWaitTime_o *)v5, 0.0, 0LL);
  if ( !v5 )
    sub_1B4D1EC(v6, v7);
  v8 = (System_Delegate_o **)(v5 + 40);
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
    _9__152_0 = (WarBoardTaskBase_TaskCallback_o *)sub_1B4D1DC(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__152_0,
      v12,
      Method_WarBoardData___c__CreateEventBossUIDataTask_b__152_0__,
      0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__152_0 = _9__152_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__152_0, (int32_t)_9__152_0, v14, v15);
  }
  v16 = System_Delegate__Combine(v9, (System_Delegate_o *)_9__152_0, 0LL);
  v19 = v16;
  if ( !v16 )
    goto LABEL_14;
  v20 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v16->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v8 = v16, (WarBoardTaskBase_TaskCallback_c *)v16->klass != v20) )
  {
    sub_1B4D4AC(v16);
LABEL_14:
    *v8 = v19;
  }
  sub_1B4CF34((CGThumbnailListItem_o *)(v5 + 40), (int32_t)v19, v17, v18);
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
  CGThumbnailListItem_o *p_monitor; // x20
  System_Collections_Generic_IEnumerable_T__o *monitor; // x22
  System_Collections_Generic_List_int__o *v24; // x21
  System_Int32_array *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3

  if ( (byte_49B8A34 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_Find_WarBoardSquareIndexData___, *(_QWORD *)&squareIndex);
    sub_1B4CF90(&System_Func_WarBoardSquareIndexData__bool__TypeInfo, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Contains__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Remove__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor___75443648, v11);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass174_0__DelSquareInfo_b__0__, v13);
    sub_1B4CF90(&WarBoardData___c__DisplayClass174_0_TypeInfo, v14);
    byte_49B8A34 = 1;
  }
  v15 = (WarBoardData___c__DisplayClass174_0_o *)sub_1B4D1DC(WarBoardData___c__DisplayClass174_0_TypeInfo);
  WarBoardData___c__DisplayClass174_0___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_10;
  v15->fields.squareIndex = squareIndex;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_10;
  squareIndexInfo = (System_Object_array *)serverData->fields.squareIndexInfo;
  v20 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardSquareIndexData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v20,
    (Il2CppObject *)v15,
    Method_WarBoardData___c__DisplayClass174_0__DelSquareInfo_b__0__,
    0LL);
  object = BasicHelper__Find_object_(
             squareIndexInfo,
             (System_Func_T__bool__o *)v20,
             (const MethodInfo_2EED060 *)Method_BasicHelper_Find_WarBoardSquareIndexData___);
  if ( !object )
    return;
  p_monitor = (CGThumbnailListItem_o *)&object[1].monitor;
  monitor = (System_Collections_Generic_IEnumerable_T__o *)object[1].monitor;
  v24 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_55978636(
    v24,
    monitor,
    (const MethodInfo_3562A8C *)Method_System_Collections_Generic_List_int___ctor___75443648);
  if ( !v24 )
LABEL_10:
    sub_1B4D1EC(v16, v17);
  if ( System_Collections_Generic_List_int___Contains(
         v24,
         effectId,
         (const MethodInfo_3563530 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    System_Collections_Generic_List_int___Remove(
      v24,
      effectId,
      (const MethodInfo_35646B4 *)Method_System_Collections_Generic_List_int__Remove__);
    v25 = System_Collections_Generic_List_int___ToArray(
            v24,
            (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__);
    p_monitor->klass = (CGThumbnailListItem_c *)v25;
    sub_1B4CF34(p_monitor, (int32_t)v25, v26, v27);
  }
}


void __fastcall WarBoardData__DeleteAfterContinueDeviceLocalSave(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WarBoardData_c *v3; // x0
  System_String_o *AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY; // x19

  if ( (byte_49B89F7 & 1) == 0 )
  {
    sub_1B4CF90(&EncryptedPlayerPrefs_TypeInfo, v1);
    sub_1B4CF90(&WarBoardData_TypeInfo, v2);
    byte_49B89F7 = 1;
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

  if ( (byte_49B89F5 & 1) == 0 )
  {
    sub_1B4CF90(&EncryptedPlayerPrefs_TypeInfo, v1);
    sub_1B4CF90(&WarBoardData_TypeInfo, v2);
    byte_49B89F5 = 1;
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
  if ( (byte_49B89FB & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__TryGetValue__,
      *(_QWORD *)&forceId);
    byte_49B89FB = 1;
  }
  value = 0LL;
  actionPointEntityDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.actionPointEntityDict;
  if ( !actionPointEntityDict )
    sub_1B4D1EC(0LL, *(_QWORD *)&forceId);
  System_Collections_Generic_Dictionary_uint__object___TryGetValue(
    actionPointEntityDict,
    (forceId << 24) | (v4 << 16),
    &value,
    (const MethodInfo_3291E74 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__TryGetValue__);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_49B8A0A & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToList_WarBoardPieceData___, method);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v3);
    sub_1B4CF90(&System_Func_WarBoardPieceData__bool__TypeInfo, v4);
    sub_1B4CF90(&Method_WarBoardData___c__GetAliveEnemyServantPieces_b__110_0__, v5);
    sub_1B4CF90(&WarBoardData___c_TypeInfo, v6);
    byte_49B8A0A = 1;
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
    _9__110_0 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__110_0,
      v10,
      Method_WarBoardData___c__GetAliveEnemyServantPieces_b__110_0__,
      0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__110_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__110_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__110_0, (int32_t)_9__110_0, v12, v13);
  }
  v14 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__110_0,
          (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (System_Collections_Generic_List_WarBoardPieceData__o *)System_Linq_Enumerable__ToList_object_(
                                                                   v14,
                                                                   (const MethodInfo_2F401C8 *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_49B8A07 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, method);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v3);
    sub_1B4CF90(&System_Func_WarBoardPieceData__bool__TypeInfo, v4);
    sub_1B4CF90(&Method_WarBoardData___c__GetAlivePieces_b__107_0__, v5);
    sub_1B4CF90(&WarBoardData___c_TypeInfo, v6);
    byte_49B8A07 = 1;
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
    _9__107_0 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__107_0, v10, Method_WarBoardData___c__GetAlivePieces_b__107_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__107_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__107_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__107_0, (int32_t)_9__107_0, v12, v13);
  }
  v14 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__107_0,
          (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v14,
                                      (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_49B8A09 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToList_WarBoardPieceData___, method);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v3);
    sub_1B4CF90(&System_Func_WarBoardPieceData__bool__TypeInfo, v4);
    sub_1B4CF90(&Method_WarBoardData___c__GetAlivePlayerGroupServantPieces_b__109_0__, v5);
    sub_1B4CF90(&WarBoardData___c_TypeInfo, v6);
    byte_49B8A09 = 1;
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
    _9__109_0 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__109_0,
      v10,
      Method_WarBoardData___c__GetAlivePlayerGroupServantPieces_b__109_0__,
      0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__109_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__109_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__109_0, (int32_t)_9__109_0, v12, v13);
  }
  v14 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__109_0,
          (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (System_Collections_Generic_List_WarBoardPieceData__o *)System_Linq_Enumerable__ToList_object_(
                                                                   v14,
                                                                   (const MethodInfo_2F401C8 *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
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
  CGThumbnailListItem_o *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_49B8A08 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, method);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v3);
    sub_1B4CF90(&System_Func_WarBoardPieceData__bool__TypeInfo, v4);
    sub_1B4CF90(&Method_WarBoardData___c__GetAliveServantPieces_b__108_0__, v5);
    sub_1B4CF90(&WarBoardData___c_TypeInfo, v6);
    byte_49B8A08 = 1;
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
    _9__108_0 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__108_0, v10, Method_WarBoardData___c__GetAliveServantPieces_b__108_0__, 0LL);
    static_fields = (CGThumbnailListItem_o *)WarBoardData___c_TypeInfo->static_fields;
    static_fields[1].klass = (CGThumbnailListItem_c *)_9__108_0;
    sub_1B4CF34(static_fields + 1, (int32_t)_9__108_0, v12, v13);
  }
  v14 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__108_0,
          (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v14,
                                      (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
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

  if ( (byte_49B8A3A & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardPrevCondData__Find__, *(_QWORD *)&condId);
    sub_1B4CF90(&System_Predicate_WarBoardPrevCondData__TypeInfo, v5);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass183_0__GetClearedTurn_b__0__, v6);
    sub_1B4CF90(&WarBoardData___c__DisplayClass183_0_TypeInfo, v7);
    byte_49B8A3A = 1;
  }
  v8 = (WarBoardData___c__DisplayClass183_0_o *)sub_1B4D1DC(WarBoardData___c__DisplayClass183_0_TypeInfo);
  WarBoardData___c__DisplayClass183_0___ctor(v8, 0LL);
  if ( !v8
    || (v8->fields.condId = condId,
        listPrevCond = (System_Collections_Generic_List_object__o *)this->fields.listPrevCond,
        v12 = (System_Predicate_object__o *)sub_1B4D1DC(System_Predicate_WarBoardPrevCondData__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_WarBoardData___c__DisplayClass183_0__GetClearedTurn_b__0__,
          0LL),
        !listPrevCond) )
  {
    sub_1B4D1EC(v9, v10);
  }
  v13 = System_Collections_Generic_List_object___Find(
          listPrevCond,
          (System_Predicate_T__o *)v12,
          (const MethodInfo_3580844 *)Method_System_Collections_Generic_List_WarBoardPrevCondData__Find__);
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

  if ( (byte_49B8A18 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___, *(_QWORD *)&squareIndex);
    sub_1B4CF90(&System_Func_WarBoardSquareData__bool__TypeInfo, v5);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass130_0__GetCondSquare_b__0__, v6);
    sub_1B4CF90(&WarBoardData___c__DisplayClass130_0_TypeInfo, v7);
    byte_49B8A18 = 1;
  }
  v8 = (WarBoardData___c__DisplayClass130_0_o *)sub_1B4D1DC(WarBoardData___c__DisplayClass130_0_TypeInfo);
  WarBoardData___c__DisplayClass130_0___ctor(v8, 0LL);
  if ( !v8 )
    sub_1B4D1EC(v9, v10);
  v8->fields.squareIndex = squareIndex;
  condSquares = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.condSquares;
  v12 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardSquareData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_WarBoardData___c__DisplayClass130_0__GetCondSquare_b__0__,
    0LL);
  return (WarBoardSquareData_o *)System_Linq_Enumerable__FirstOrDefault_object__49446844(
                                   condSquares,
                                   (System_Func_TSource__bool__o *)v12,
                                   (const MethodInfo_2F27FBC *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
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
  void *Piece_35764928; // x0
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

  if ( (byte_49B8A1A & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_Any_int___, squareIds);
    sub_1B4CF90(&System_Func_int__bool__TypeInfo, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__0__, v10);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__1__, v11);
    sub_1B4CF90(&WarBoardData___c__DisplayClass133_0_TypeInfo, v12);
    byte_49B8A1A = 1;
  }
  v13 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
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
        sub_1B4D1F4(Piece_35764928, value);
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
          v20 = (WarBoardData___c__DisplayClass133_0_o *)sub_1B4D1DC(WarBoardData___c__DisplayClass133_0_TypeInfo);
          WarBoardData___c__DisplayClass133_0___ctor(v20, 0LL);
          if ( v19 >= v18->max_length )
            goto LABEL_30;
          if ( !v20 )
            goto LABEL_29;
          v22 = v18->m_Items[v19 + 1];
          v20->fields.value = v22;
          Piece_35764928 = WarBoardData__GetPiece_35764928(this, v22, v21);
          if ( !Piece_35764928 )
          {
            Piece_35764928 = WarBoardData__GetUnusedTreasure(this, v20->fields.value, v23);
            if ( !Piece_35764928 )
            {
              Piece_35764928 = WarBoardData__GetWall(this, v20->fields.value, 0, v24);
              if ( !Piece_35764928 )
              {
                reinforcementsAppointmentSquareList = (System_Collections_Generic_List_T__o *)this->fields.reinforcementsAppointmentSquareList;
                v26 = (System_Func_int__bool__o *)sub_1B4D1DC(System_Func_int__bool__TypeInfo);
                System_Func_int__bool____ctor(
                  v26,
                  (Il2CppObject *)v20,
                  Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__0__,
                  0LL);
                Piece_35764928 = (void *)BasicHelper__Any_int_(
                                           reinforcementsAppointmentSquareList,
                                           (System_Func_T__bool__o *)v26,
                                           (const MethodInfo_2EEC168 *)Method_BasicHelper_Any_int___);
                if ( ((unsigned __int8)Piece_35764928 & 1) == 0 )
                {
                  v27 = (System_Func_int__bool__o *)sub_1B4D1DC(System_Func_int__bool__TypeInfo);
                  System_Func_int__bool____ctor(
                    v27,
                    (Il2CppObject *)v20,
                    Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__1__,
                    0LL);
                  Piece_35764928 = (void *)BasicHelper__Any_int_(
                                             (System_Collections_Generic_List_T__o *)v13,
                                             (System_Func_T__bool__o *)v27,
                                             (const MethodInfo_2EEC168 *)Method_BasicHelper_Any_int___);
                  if ( ((unsigned __int8)Piece_35764928 & 1) == 0 )
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
          *(const MethodInfo_35631B8 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
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
    sub_1B4D1EC(Piece_35764928, value);
  }
LABEL_27:
  if ( !v13 )
    goto LABEL_29;
  return System_Collections_Generic_List_int___ToArray(
           v13,
           (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_String_o *__fastcall WarBoardData__GetEditBgmName(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49B8A23 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_BgmMaster___, method);
    sub_1B4CF90(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v3);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49B8A23 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_BgmMaster___);
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity || !Instance )
    goto LABEL_11;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               stageEntity->fields.editBgmId,
                               (const MethodInfo_319D9E8 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return (System_String_o *)entity[1].monitor;
LABEL_11:
    sub_1B4D1EC(Instance, v6);
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
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_49B8A10 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, method);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v3);
    sub_1B4CF90(&System_Func_WarBoardPieceData__bool__TypeInfo, v4);
    sub_1B4CF90(&Method_WarBoardData___c__GetEditableServantPieces_b__120_0__, v5);
    sub_1B4CF90(&WarBoardData___c_TypeInfo, v6);
    byte_49B8A10 = 1;
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
    _9__120_0 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__120_0, v10, Method_WarBoardData___c__GetEditableServantPieces_b__120_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__120_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__120_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__120_0, (int32_t)_9__120_0, v12, v13);
  }
  v14 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__120_0,
          (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v14,
                                      (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
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

  if ( (byte_49B8A1F & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardEffectData___, *(_QWORD *)&squareIndex);
    sub_1B4CF90(&System_Func_WarBoardEffectData__bool__TypeInfo, v5);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass142_0__GetEffect_b__0__, v6);
    sub_1B4CF90(&WarBoardData___c__DisplayClass142_0_TypeInfo, v7);
    byte_49B8A1F = 1;
  }
  v8 = (WarBoardData___c__DisplayClass142_0_o *)sub_1B4D1DC(WarBoardData___c__DisplayClass142_0_TypeInfo);
  WarBoardData___c__DisplayClass142_0___ctor(v8, 0LL);
  if ( !v8 )
    sub_1B4D1EC(v9, v10);
  v8->fields.squareIndex = squareIndex;
  effects = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.effects;
  v12 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardEffectData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_WarBoardData___c__DisplayClass142_0__GetEffect_b__0__,
    0LL);
  return (WarBoardEffectData_o *)System_Linq_Enumerable__FirstOrDefault_object__49446844(
                                   effects,
                                   (System_Func_TSource__bool__o *)v12,
                                   (const MethodInfo_2F27FBC *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardEffectData___);
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

  if ( (byte_49B8A05 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, *(_QWORD *)&stageBossIndex);
    sub_1B4CF90(&System_Func_WarBoardPieceData__bool__TypeInfo, v5);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass105_0__GetEventBossPiece_b__0__, v6);
    sub_1B4CF90(&WarBoardData___c__DisplayClass105_0_TypeInfo, v7);
    byte_49B8A05 = 1;
  }
  v8 = (WarBoardData___c__DisplayClass105_0_o *)sub_1B4D1DC(WarBoardData___c__DisplayClass105_0_TypeInfo);
  WarBoardData___c__DisplayClass105_0___ctor(v8, 0LL);
  if ( !v8 )
    sub_1B4D1EC(v9, v10);
  v8->fields.stageBossIndex = stageBossIndex;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v12 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_WarBoardData___c__DisplayClass105_0__GetEventBossPiece_b__0__,
    0LL);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_object__49446844(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v12,
                                  (const MethodInfo_2F27FBC *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
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
        sub_1B4D1F4(this, method);
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
    sub_1B4D1EC(this, method);
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
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  System_Collections_Generic_List_object__o *v48; // x22
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  struct System_Collections_Generic_List_HoldReinforcementsData__o *v51; // x22
  System_Func_object__bool__o *v52; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0
  const MethodInfo_3308B3C **v54; // x26
  WarBoardData___c__DisplayClass188_1_c **v55; // x27
  __int64 v56; // x24
  __int64 v57; // x0
  __int64 v58; // x1
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  int32_t current; // w1
  HoldReinforcementsData_o **v62; // x22
  __int64 v63; // x0
  __int64 v64; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  _BOOL8 v66; // x0
  __int64 v67; // x1
  const MethodInfo *v68; // x2
  System_Int32_array *DeploySquareIds; // x0
  __int64 v70; // x1
  const MethodInfo *v71; // x3
  struct System_Int32_array *limitNums; // x9
  __int64 index_k__BackingField; // x2
  System_Int32_array *v74; // x23
  WarBoardPieceData_array *ReinfocementsPieces; // x0
  __int64 v76; // x1
  struct System_Int32_array *v77; // x8
  __int64 v78; // x9
  _BOOL4 v79; // w25
  Il2CppObject *Instance; // x0
  __int64 v81; // x1
  _BOOL8 IsPlayerTurn; // x0
  __int64 v83; // x1
  __int64 v84; // x10
  int max_length; // w11
  int v86; // w10
  const MethodInfo_3308B3C **v87; // x20
  System_Collections_Generic_List_T__o *v88; // x25
  System_Func_object__bool__o *v89; // x26
  bool v90; // w0
  __int64 v91; // x1
  WarBoardData___c__DisplayClass188_1_c **v92; // x29
  _BOOL8 v93; // x0
  __int64 v94; // x1
  Il2CppObject *v95; // x27
  System_Collections_Generic_List_int__o *v96; // x25
  System_Collections_Generic_List_int__o *v97; // x24
  __int64 v98; // x0
  __int64 v99; // x1
  __int64 v100; // x0
  __int64 v101; // x1
  __int64 v102; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v104; // x9
  __int64 size; // x10
  System_Int32_array *v106; // x0
  int32_t v107; // w2
  const MethodInfo *v108; // x3
  __int64 v109; // x0
  __int64 v110; // x1
  CGThumbnailListItem_o *v111; // x25
  __int64 v112; // x0
  __int64 v113; // x1
  __int64 v114; // x8
  __int64 v115; // x1
  struct System_Int32_array *v116; // x8
  _QWORD *v117; // x9
  __int64 v118; // x10
  System_Int32_array *v119; // x0
  int32_t v120; // w2
  const MethodInfo *v121; // x3
  Il2CppObject *v122; // x0
  __int64 v123; // x1
  void *monitor; // x8
  HoldReinforcementsData_o *v125; // x0
  __int64 v126; // x9
  System_Collections_Generic_List_int__o *v127; // x8
  __int64 v128; // x1
  struct System_Int32_array *v129; // x9
  _QWORD *v130; // x10
  __int64 v131; // x11
  __int64 v132; // x1
  __int64 v133; // x24
  __int64 v134; // x0
  __int64 v135; // x1
  __int64 v136; // x0
  int32_t v137; // w2
  const MethodInfo *v138; // x3
  __int64 v139; // x0
  int32_t v140; // w2
  const MethodInfo *v141; // x3
  __int64 v142; // x8
  __int64 v143; // x1
  int32_t v144; // w2
  const MethodInfo *v145; // x3
  System_Collections_Generic_List_object__o *v146; // x0
  struct System_Object_array *v147; // x8
  _QWORD *v148; // x9
  __int64 v149; // x10
  Il2CppClass **v150; // x8
  Il2CppObject *v151; // x0
  __int64 v152; // x1
  void *v153; // x8
  HoldReinforcementsData_o *v154; // x0
  __int64 v155; // x9
  System_Collections_Generic_List_int__o *v156; // x8
  __int64 v157; // x1
  struct System_Int32_array *v158; // x9
  _QWORD *v159; // x10
  __int64 v160; // x11
  __int64 v161; // x1
  System_Collections_Generic_List_Enumerator_object__o v163; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v164; // [xsp+20h] [xbp-A0h] BYREF
  WarBoardStageReinforcementsEntity_o *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v166; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_49B8A3F & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_Any_ReinforcementsData___, reinforcementsDatas);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToList_HoldReinforcementsData___, v8);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_HoldReinforcementsData___, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__Dispose__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__MoveNext__, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__get_Current__, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__get_Current__, v15);
    sub_1B4CF90(&System_Func_HoldReinforcementsData__bool__TypeInfo, v16);
    sub_1B4CF90(&System_Func_ReinforcementsData__bool__TypeInfo, v17);
    sub_1B4CF90(&int___TypeInfo, v18);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__AddRange__, v19);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, v20);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ReinforcementsData__Add__, v21);
    sub_1B4CF90(&Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__, v22);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ReinforcementsData__GetEnumerator__, v23);
    sub_1B4CF90(&Method_System_Collections_Generic_List_HoldReinforcementsData__RemoveAll__, v24);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__ToArray__, v25);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v26);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ReinforcementsData___ctor__, v27);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v28);
    sub_1B4CF90(&System_Collections_Generic_List_ReinforcementsData__TypeInfo, v29);
    sub_1B4CF90(&System_Predicate_HoldReinforcementsData__TypeInfo, v30);
    sub_1B4CF90(&ReinforcementsData_TypeInfo, v31);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v32);
    sub_1B4CF90(&Method_WarBoardData___c__GetHoldReinforcements_b__188_0__, v33);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass188_0__GetHoldReinforcements_b__1__, v34);
    sub_1B4CF90(&WarBoardData___c__DisplayClass188_0_TypeInfo, v35);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass188_1__GetHoldReinforcements_b__2__, v36);
    sub_1B4CF90(&WarBoardData___c__DisplayClass188_1_TypeInfo, v37);
    sub_1B4CF90(&WarBoardData___c_TypeInfo, v38);
    byte_49B8A3F = 1;
  }
  memset(&v166, 0, sizeof(v166));
  entity = 0LL;
  memset(&v164, 0, sizeof(v164));
  v39 = (WarBoardData___c__DisplayClass188_0_o *)sub_1B4D1DC(WarBoardData___c__DisplayClass188_0_TypeInfo);
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
    v43 = (System_Predicate_object__o *)sub_1B4D1DC(System_Predicate_HoldReinforcementsData__TypeInfo);
    System_Predicate_object____ctor(v43, v44, Method_WarBoardData___c__GetHoldReinforcements_b__188_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__188_0 = (struct System_Predicate_HoldReinforcementsData__o *)v43;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__188_0, (int32_t)v43, v46, v47);
  }
  if ( !reinforcementsSaveList )
    goto LABEL_156;
  System_Collections_Generic_List_object___RemoveAll(
    reinforcementsSaveList,
    (System_Predicate_T__o *)v43,
    (const MethodInfo_3581838 *)Method_System_Collections_Generic_List_HoldReinforcementsData__RemoveAll__);
  v48 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_ReinforcementsData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v48,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_ReinforcementsData___ctor__);
  *reinforcementsDatas = (System_Collections_Generic_List_ReinforcementsData__o *)v48;
  sub_1B4CF34((CGThumbnailListItem_o *)reinforcementsDatas, (int32_t)v48, v49, v50);
  v51 = this->fields.reinforcementsSaveList;
  if ( (v39->fields.targetStageReinforcementsId & 0x80000000) == 0 )
  {
    v52 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_HoldReinforcementsData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v52,
      (Il2CppObject *)v39,
      Method_WarBoardData___c__DisplayClass188_0__GetHoldReinforcements_b__1__,
      0LL);
    v53 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v51,
            (System_Func_TSource__bool__o *)v52,
            (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_HoldReinforcementsData___);
    v40 = System_Linq_Enumerable__ToList_object_(
            v53,
            (const MethodInfo_2F401C8 *)Method_System_Linq_Enumerable_ToList_HoldReinforcementsData___);
    v51 = (struct System_Collections_Generic_List_HoldReinforcementsData__o *)v40;
  }
  if ( !v51 )
LABEL_156:
    sub_1B4D1EC(v40, v41);
  v54 = (const MethodInfo_3308B3C **)&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__;
  v55 = &WarBoardData___c__DisplayClass188_1_TypeInfo;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v163,
    (System_Collections_Generic_List_object__o *)v51,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
  v166 = v163;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(&v166, *v54) )
  {
    v56 = sub_1B4D1DC(*v55);
    WarBoardData___c__DisplayClass188_1___ctor((WarBoardData___c__DisplayClass188_1_o *)v56, 0LL);
    if ( !v56 )
      sub_1B4D1EC(v57, v58);
    current = (int32_t)v166.fields._current;
    *(_QWORD *)(v56 + 16) = v166.fields._current;
    v62 = (HoldReinforcementsData_o **)(v56 + 16);
    sub_1B4CF34((CGThumbnailListItem_o *)(v56 + 16), current, v59, v60);
    stageEntity = this->fields.stageEntity;
    if ( !stageEntity )
      sub_1B4D1EC(v63, v64);
    if ( !*v62 )
      sub_1B4D1EC(v63, v64);
    if ( !mst )
      sub_1B4D1EC(v63, v64);
    v66 = WarBoardStageReinforcementsMaster__TryGetEntity(
            mst,
            &entity,
            stageEntity->fields.id,
            (*v62)->fields._id_k__BackingField,
            0LL);
    if ( v66 )
    {
      if ( !entity )
        sub_1B4D1EC(v66, v67);
      DeploySquareIds = WarBoardData__GetDeploySquareIds(this, entity->fields.squareIds, v68);
      if ( !entity )
        sub_1B4D1EC(DeploySquareIds, v70);
      if ( !*v62 )
        sub_1B4D1EC(DeploySquareIds, v70);
      limitNums = entity->fields.limitNums;
      if ( !limitNums )
        sub_1B4D1EC(DeploySquareIds, v70);
      index_k__BackingField = (*v62)->fields._index_k__BackingField;
      if ( (unsigned int)index_k__BackingField >= limitNums->max_length )
        sub_1B4D1F4(DeploySquareIds, v70);
      v74 = DeploySquareIds;
      if ( limitNums->m_Items[index_k__BackingField + 1] < 1 )
      {
        v79 = 0;
      }
      else
      {
        ReinfocementsPieces = WarBoardData__GetReinfocementsPieces(this, entity->fields.id, index_k__BackingField, v71);
        if ( !ReinfocementsPieces )
          sub_1B4D1EC(0LL, v76);
        if ( !entity )
          sub_1B4D1EC(ReinfocementsPieces, v76);
        if ( !*v62 )
          sub_1B4D1EC(ReinfocementsPieces, v76);
        v77 = entity->fields.limitNums;
        if ( !v77 )
          sub_1B4D1EC(ReinfocementsPieces, v76);
        v78 = (*v62)->fields._index_k__BackingField;
        if ( (unsigned int)v78 >= v77->max_length )
          sub_1B4D1F4(ReinfocementsPieces, v76);
        v79 = v77->m_Items[v78 + 1] <= (signed int)ReinfocementsPieces->max_length;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !Instance )
        sub_1B4D1EC(0LL, v81);
      IsPlayerTurn = WarBoardManager__IsPlayerTurn((WarBoardManager_o *)Instance, 0LL);
      if ( !entity )
        sub_1B4D1EC(IsPlayerTurn, v83);
      if ( !v74 )
        sub_1B4D1EC(IsPlayerTurn, v83);
      if ( !*v62 )
        sub_1B4D1EC(IsPlayerTurn, v83);
      v84 = (*v62)->fields._index_k__BackingField;
      max_length = v74->max_length;
      if ( (int)v84 >= max_length )
      {
        v86 = 0;
      }
      else
      {
        if ( (unsigned int)v84 >= max_length )
          sub_1B4D1F4(IsPlayerTurn, v83);
        v86 = v74->m_Items[v84 + 1] >= 0 && !v79;
      }
      if ( (IsPlayerTurn ^ (entity->fields.forceId != 0)) & (unsigned int)v86 )
      {
        v87 = v54;
        v88 = (System_Collections_Generic_List_T__o *)*reinforcementsDatas;
        v89 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_ReinforcementsData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v89,
          (Il2CppObject *)v56,
          Method_WarBoardData___c__DisplayClass188_1__GetHoldReinforcements_b__2__,
          0LL);
        v90 = BasicHelper__Any_object_(
                v88,
                (System_Func_T__bool__o *)v89,
                (const MethodInfo_2EEC494 *)Method_BasicHelper_Any_ReinforcementsData___);
        v54 = v87;
        if ( v90 )
        {
          if ( !*reinforcementsDatas )
            sub_1B4D1EC(0LL, v91);
          v92 = v55;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v163,
            (System_Collections_Generic_List_object__o *)*reinforcementsDatas,
            (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_ReinforcementsData__GetEnumerator__);
          v164 = v163;
          do
          {
            v93 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v164,
                    (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__MoveNext__);
            if ( !v93 )
            {
              v55 = v92;
              goto LABEL_76;
            }
            v95 = v164.fields._current;
            if ( !v164.fields._current )
              sub_1B4D1EC(v93, v94);
            if ( !*v62 )
              sub_1B4D1EC(v93, v94);
          }
          while ( LODWORD(v164.fields._current[1].klass) != (*v62)->fields._id_k__BackingField );
          v96 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor(
            v96,
            (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
          v97 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor(
            v97,
            (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
          if ( !v96 )
            sub_1B4D1EC(v98, v99);
          System_Collections_Generic_List_int___AddRange(
            v96,
            (System_Collections_Generic_IEnumerable_T__o *)v95[1].monitor,
            (const MethodInfo_35633C4 *)Method_System_Collections_Generic_List_int__AddRange__);
          if ( !*v62 )
            sub_1B4D1EC(v100, v101);
          v102 = (unsigned int)(*v62)->fields._index_k__BackingField;
          items = v96->fields._items;
          v104 = Method_System_Collections_Generic_List_int__Add__;
          ++v96->fields._version;
          if ( !items )
            sub_1B4D1EC(v100, v102);
          size = v96->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v96,
              v102,
              *(const MethodInfo_35631B8 **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
          }
          else
          {
            v96->fields._size = size + 1;
            items->m_Items[size + 1] = v102;
          }
          v106 = System_Collections_Generic_List_int___ToArray(
                   v96,
                   (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__);
          v95[1].monitor = v106;
          sub_1B4CF34((CGThumbnailListItem_o *)&v95[1].monitor, (int32_t)v106, v107, v108);
          if ( !v97 )
            sub_1B4D1EC(v109, v110);
          v111 = (CGThumbnailListItem_o *)&v95[2];
          v54 = v87;
          System_Collections_Generic_List_int___AddRange(
            v97,
            (System_Collections_Generic_IEnumerable_T__o *)v95[2].klass,
            (const MethodInfo_35633C4 *)Method_System_Collections_Generic_List_int__AddRange__);
          if ( !*v62 )
            sub_1B4D1EC(v112, v113);
          v114 = (*v62)->fields._index_k__BackingField;
          v55 = v92;
          if ( (unsigned int)v114 >= v74->max_length )
            sub_1B4D1F4(v112, v113);
          v115 = (unsigned int)v74->m_Items[v114 + 1];
          v116 = v97->fields._items;
          v117 = Method_System_Collections_Generic_List_int__Add__;
          ++v97->fields._version;
          if ( !v116 )
            sub_1B4D1EC(v112, v115);
          v118 = v97->fields._size;
          if ( (unsigned int)v118 >= v116->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v97,
              v115,
              *(const MethodInfo_35631B8 **)(*(_QWORD *)(v117[4] + 192LL) + 112LL));
          }
          else
          {
            v97->fields._size = v118 + 1;
            v116->m_Items[v118 + 1] = v115;
          }
          v119 = System_Collections_Generic_List_int___ToArray(
                   v97,
                   (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__);
          v111->klass = (CGThumbnailListItem_c *)v119;
          sub_1B4CF34(v111, (int32_t)v119, v120, v121);
          v122 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !v122 )
            sub_1B4D1EC(0LL, v123);
          monitor = v122[27].monitor;
          if ( !monitor )
            sub_1B4D1EC(v122, v123);
          v125 = *v62;
          if ( !*v62 )
            sub_1B4D1EC(0LL, v123);
          v126 = v125->fields._index_k__BackingField;
          if ( (unsigned int)v126 >= v74->max_length )
            sub_1B4D1F4(v125, v123);
          v127 = (System_Collections_Generic_List_int__o *)*((_QWORD *)monitor + 29);
          if ( !v127 )
            sub_1B4D1EC(v125, v123);
          v128 = (unsigned int)v74->m_Items[v126 + 1];
          v129 = v127->fields._items;
          v130 = Method_System_Collections_Generic_List_int__Add__;
          ++v127->fields._version;
          if ( !v129 )
            sub_1B4D1EC(v125, v128);
          v131 = v127->fields._size;
          if ( (unsigned int)v131 >= v129->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v127,
              v128,
              *(const MethodInfo_35631B8 **)(*(_QWORD *)(v130[4] + 192LL) + 112LL));
            v125 = *v62;
            if ( !*v62 )
              sub_1B4D1EC(0LL, v132);
          }
          else
          {
            v127->fields._size = v131 + 1;
            v129->m_Items[v131 + 1] = v128;
          }
          HoldReinforcementsData__DecreaseHoldNum(v125, 0LL);
LABEL_76:
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v164,
            (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__Dispose__);
        }
        else
        {
          v133 = sub_1B4D1DC(ReinforcementsData_TypeInfo);
          ReinforcementsData___ctor((ReinforcementsData_o *)v133, 0LL);
          if ( !entity )
            sub_1B4D1EC(v134, v135);
          if ( !v133 )
            sub_1B4D1EC(v134, v135);
          *(_DWORD *)(v133 + 16) = entity->fields.id;
          v136 = sub_1B4D038(int___TypeInfo, 1LL);
          if ( !*v62 )
            sub_1B4D1EC(v136, v136);
          if ( !v136 )
            sub_1B4D1EC(0LL, 0LL);
          if ( !*(_DWORD *)(v136 + 24) )
            sub_1B4D1F4(v136, v136);
          *(_DWORD *)(v136 + 32) = (*v62)->fields._index_k__BackingField;
          *(_QWORD *)(v133 + 24) = v136;
          sub_1B4CF34((CGThumbnailListItem_o *)(v133 + 24), v136, v137, v138);
          v139 = sub_1B4D038(int___TypeInfo, 1LL);
          if ( !*v62 )
            sub_1B4D1EC(v139, v139);
          v142 = (*v62)->fields._index_k__BackingField;
          if ( (unsigned int)v142 >= v74->max_length )
            sub_1B4D1F4(v139, v139);
          if ( !v139 )
            sub_1B4D1EC(0LL, 0LL);
          if ( !*(_DWORD *)(v139 + 24) )
            sub_1B4D1F4(v139, v139);
          *(_DWORD *)(v139 + 32) = v74->m_Items[v142 + 1];
          *(_QWORD *)(v133 + 32) = v139;
          sub_1B4CF34((CGThumbnailListItem_o *)(v133 + 32), v139, v140, v141);
          v146 = (System_Collections_Generic_List_object__o *)*reinforcementsDatas;
          if ( !*reinforcementsDatas )
            sub_1B4D1EC(0LL, v143);
          v147 = v146->fields._items;
          v148 = Method_System_Collections_Generic_List_ReinforcementsData__Add__;
          ++v146->fields._version;
          if ( !v147 )
            sub_1B4D1EC(v146, v143);
          v149 = v146->fields._size;
          if ( (unsigned int)v149 >= v147->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v146,
              (Il2CppObject *)v133,
              *(const MethodInfo_35801DC **)(*(_QWORD *)(v148[4] + 192LL) + 112LL));
          }
          else
          {
            v150 = &v147->obj.klass + v149;
            v146->fields._size = v149 + 1;
            v150[4] = (Il2CppClass *)v133;
            sub_1B4CF34((CGThumbnailListItem_o *)(v150 + 4), v133, v144, v145);
          }
          v151 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !v151 )
            sub_1B4D1EC(0LL, v152);
          v153 = v151[27].monitor;
          if ( !v153 )
            sub_1B4D1EC(v151, v152);
          v154 = *v62;
          if ( !*v62 )
            sub_1B4D1EC(0LL, v152);
          v155 = v154->fields._index_k__BackingField;
          if ( (unsigned int)v155 >= v74->max_length )
            sub_1B4D1F4(v154, v152);
          v156 = (System_Collections_Generic_List_int__o *)*((_QWORD *)v153 + 29);
          if ( !v156 )
            sub_1B4D1EC(v154, v152);
          v157 = (unsigned int)v74->m_Items[v155 + 1];
          v158 = v156->fields._items;
          v159 = Method_System_Collections_Generic_List_int__Add__;
          ++v156->fields._version;
          if ( !v158 )
            sub_1B4D1EC(v154, v157);
          v160 = v156->fields._size;
          if ( (unsigned int)v160 >= v158->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v156,
              v157,
              *(const MethodInfo_35631B8 **)(*(_QWORD *)(v159[4] + 192LL) + 112LL));
            v154 = *v62;
            if ( !*v62 )
              sub_1B4D1EC(0LL, v161);
          }
          else
          {
            v156->fields._size = v160 + 1;
            v158->m_Items[v160 + 1] = v157;
          }
          HoldReinforcementsData__DecreaseHoldNum(v154, 0LL);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v166,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
}


int32_t __fastcall WarBoardData__GetHoldReinforcementsCount(WarBoardData_o *this, const MethodInfo *method)
{
  WarBoardData_o *v2; // x19
  struct System_Collections_Generic_List_HoldReinforcementsData__o *reinforcementsSaveList; // x8

  v2 = this;
  if ( (byte_49B8A2B & 1) == 0 )
  {
    this = (WarBoardData_o *)sub_1B4CF90(
                               &Method_System_Collections_Generic_List_HoldReinforcementsData__get_Count__,
                               method);
    byte_49B8A2B = 1;
  }
  reinforcementsSaveList = v2->fields.reinforcementsSaveList;
  if ( !reinforcementsSaveList )
    sub_1B4D1EC(this, method);
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
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x20
  System_Func_int__bool__o *v29; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *rangeSearches; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49B8A13 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_WarBoardData_SquareRangeSearch__int___, *(_QWORD *)&start);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_int___, v9);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_int___, v10);
    sub_1B4CF90(&System_Func_int__bool__TypeInfo, v11);
    sub_1B4CF90(&System_Func_WarBoardData_SquareRangeSearch__int__TypeInfo, v12);
    sub_1B4CF90(&Method_WarBoardData___c__GetInRangeSquareIndecies_b__123_0__, v13);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass123_0__GetInRangeSquareIndecies_b__1__, v14);
    sub_1B4CF90(&WarBoardData___c__DisplayClass123_0_TypeInfo, v15);
    sub_1B4CF90(&WarBoardData___c_TypeInfo, v16);
    byte_49B8A13 = 1;
  }
  v17 = (WarBoardData___c__DisplayClass123_0_o *)sub_1B4D1DC(WarBoardData___c__DisplayClass123_0_TypeInfo);
  WarBoardData___c__DisplayClass123_0___ctor(v17, 0LL);
  if ( !v17 )
    sub_1B4D1EC(v18, v19);
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
    _9__123_0 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_WarBoardData_SquareRangeSearch__int__TypeInfo);
    System_Func_object__int____ctor(_9__123_0, v24, Method_WarBoardData___c__GetInRangeSquareIndecies_b__123_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__123_0 = (struct System_Func_WarBoardData_SquareRangeSearch__int__o *)_9__123_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__123_0, (int32_t)_9__123_0, v26, v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v21,
                                                               (System_Func_TSource__TResult__o *)_9__123_0,
                                                               (const MethodInfo_2F338DC *)Method_System_Linq_Enumerable_Select_WarBoardData_SquareRangeSearch__int___);
  v29 = (System_Func_int__bool__o *)sub_1B4D1DC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v29,
    (Il2CppObject *)v17,
    Method_WarBoardData___c__DisplayClass123_0__GetInRangeSquareIndecies_b__1__,
    0LL);
  v30 = System_Linq_Enumerable__Where_int_(
          v28,
          (System_Func_TSource__bool__o *)v29,
          (const MethodInfo_2F42364 *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v30,
           (const MethodInfo_2F3C24C *)Method_System_Linq_Enumerable_ToArray_int___);
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

  if ( (byte_49B8A14 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_int__WarBoardSquareData___, *(_QWORD *)&start);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_WarBoardSquareData___, v9);
    sub_1B4CF90(&System_Func_int__WarBoardSquareData__TypeInfo, v10);
    sub_1B4CF90(&Method_WarBoardData__GetInRangeSquares_b__124_0__, v11);
    byte_49B8A14 = 1;
  }
  result = (WarBoardSquareData_array *)WarBoardData__GetInRangeSquareIndecies(this, start, range, ignoreStart, method);
  if ( result )
  {
    v13 = (System_Collections_Generic_IEnumerable_TSource__o *)result;
    v14 = (System_Func_T__TResult__o *)sub_1B4D1DC(System_Func_int__WarBoardSquareData__TypeInfo);
    System_Func_int__object____ctor(v14, (Il2CppObject *)this, Method_WarBoardData__GetInRangeSquares_b__124_0__, 0LL);
    v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                 v13,
                                                                 (System_Func_TSource__TResult__o *)v14,
                                                                 (const MethodInfo_2F31AE4 *)Method_System_Linq_Enumerable_Select_int__WarBoardSquareData___);
    return (WarBoardSquareData_array *)System_Linq_Enumerable__ToArray_object_(
                                         v15,
                                         (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_WarBoardSquareData___);
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

  if ( (byte_49B8A1B & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___, *(_QWORD *)&squareIndex);
    sub_1B4CF90(&System_Func_WarBoardItemData__bool__TypeInfo, v5);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass135_0__GetItem_b__0__, v6);
    sub_1B4CF90(&WarBoardData___c__DisplayClass135_0_TypeInfo, v7);
    byte_49B8A1B = 1;
  }
  v8 = (WarBoardData___c__DisplayClass135_0_o *)sub_1B4D1DC(WarBoardData___c__DisplayClass135_0_TypeInfo);
  WarBoardData___c__DisplayClass135_0___ctor(v8, 0LL);
  if ( !v8 )
    sub_1B4D1EC(v9, v10);
  v8->fields.squareIndex = squareIndex;
  items = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.items;
  v12 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardItemData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_WarBoardData___c__DisplayClass135_0__GetItem_b__0__,
    0LL);
  return (WarBoardItemData_o *)System_Linq_Enumerable__FirstOrDefault_object__49446844(
                                 items,
                                 (System_Func_TSource__bool__o *)v12,
                                 (const MethodInfo_2F27FBC *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___);
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
    sub_1B4D1EC(this, method);
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
  if ( (byte_49B89FA & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__TryGetValue__,
      *(_QWORD *)&forceId);
    byte_49B89FA = 1;
  }
  value = 0LL;
  npcEntityDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.npcEntityDict;
  if ( !npcEntityDict )
    sub_1B4D1EC(0LL, *(_QWORD *)&forceId);
  System_Collections_Generic_Dictionary_uint__object___TryGetValue(
    npcEntityDict,
    (forceId << 24) | (v4 << 16),
    &value,
    (const MethodInfo_3291E74 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__TryGetValue__);
  return (WarBoardStageNpcEntity_o *)value;
}


int32_t __fastcall WarBoardData__GetPartySkillId(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardStageEntity_o *stageEntity; // x8

  stageEntity = this->fields.stageEntity;
  if ( !stageEntity )
    sub_1B4D1EC(this, method);
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
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v20; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0

  if ( (byte_49B8A0E & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, *(_QWORD *)&start);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v9);
    sub_1B4CF90(&System_Func_WarBoardPieceData__bool__TypeInfo, v10);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass118_0__GetPicesForRange_b__0__, v11);
    sub_1B4CF90(&WarBoardData___c__DisplayClass118_0_TypeInfo, v12);
    byte_49B8A0E = 1;
  }
  v13 = sub_1B4D1DC(WarBoardData___c__DisplayClass118_0_TypeInfo);
  WarBoardData___c__DisplayClass118_0___ctor((WarBoardData___c__DisplayClass118_0_o *)v13, 0LL);
  v15 = WarBoardData__GetInRangeSquareIndecies(this, start, range, ignoreStart, v14);
  if ( !v13 )
    sub_1B4D1EC(v15, v16);
  *(_QWORD *)(v13 + 16) = v15;
  sub_1B4CF34((CGThumbnailListItem_o *)(v13 + 16), (int32_t)v15, v17, v18);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v20 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v20,
    (Il2CppObject *)v13,
    Method_WarBoardData___c__DisplayClass118_0__GetPicesForRange_b__0__,
    0LL);
  v21 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)v20,
          (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v21,
                                      (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
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
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v20; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0

  if ( (byte_49B8A0F & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, *(_QWORD *)&start);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v9);
    sub_1B4CF90(&System_Func_WarBoardPieceData__bool__TypeInfo, v10);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass119_0__GetPicesForRangeIsAlive_b__0__, v11);
    sub_1B4CF90(&WarBoardData___c__DisplayClass119_0_TypeInfo, v12);
    byte_49B8A0F = 1;
  }
  v13 = sub_1B4D1DC(WarBoardData___c__DisplayClass119_0_TypeInfo);
  WarBoardData___c__DisplayClass119_0___ctor((WarBoardData___c__DisplayClass119_0_o *)v13, 0LL);
  v15 = WarBoardData__GetInRangeSquareIndecies(this, start, range, ignoreStart, v14);
  if ( !v13 )
    sub_1B4D1EC(v15, v16);
  *(_QWORD *)(v13 + 16) = v15;
  sub_1B4CF34((CGThumbnailListItem_o *)(v13 + 16), (int32_t)v15, v17, v18);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v20 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v20,
    (Il2CppObject *)v13,
    Method_WarBoardData___c__DisplayClass119_0__GetPicesForRangeIsAlive_b__0__,
    0LL);
  v21 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)v20,
          (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v21,
                                      (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
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

  if ( (byte_49B8A00 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, *(_QWORD *)&forceId);
    sub_1B4CF90(&System_Func_WarBoardPieceData__bool__TypeInfo, v11);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass100_0__GetPiece_b__0__, v12);
    sub_1B4CF90(&WarBoardData___c__DisplayClass100_0_TypeInfo, v13);
    sub_1B4CF90(&WarBoardPieceData_TypeInfo, v14);
    byte_49B8A00 = 1;
  }
  v15 = (WarBoardData___c__DisplayClass100_0_o *)sub_1B4D1DC(WarBoardData___c__DisplayClass100_0_TypeInfo);
  WarBoardData___c__DisplayClass100_0___ctor(v15, 0LL);
  if ( !v15 )
    sub_1B4D1EC(v16, v17);
  v15->fields.ignoreDead = ignoreDead;
  if ( !WarBoardPieceData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardPieceData_TypeInfo);
  v15->fields.uniqueId = WarBoardPieceData__GetUniqueIndex(forceId, groupId, index, 0LL);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v19 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v19,
    (Il2CppObject *)v15,
    Method_WarBoardData___c__DisplayClass100_0__GetPiece_b__0__,
    0LL);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_object__49446844(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v19,
                                  (const MethodInfo_2F27FBC *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1
  System_Object_array *AlivePieces; // x19
  System_Predicate_object__o *v15; // x20

  if ( (byte_49B8A22 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Array_FindIndex_WarBoardPieceData___, piece);
    sub_1B4CF90(&System_Predicate_WarBoardPieceData__TypeInfo, v5);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass145_0__GetPieceDispPriority_b__0__, v6);
    sub_1B4CF90(&WarBoardData___c__DisplayClass145_0_TypeInfo, v7);
    byte_49B8A22 = 1;
  }
  v8 = sub_1B4D1DC(WarBoardData___c__DisplayClass145_0_TypeInfo);
  WarBoardData___c__DisplayClass145_0___ctor((WarBoardData___c__DisplayClass145_0_o *)v8, 0LL);
  if ( !v8 )
    sub_1B4D1EC(v9, v10);
  *(_QWORD *)(v8 + 16) = piece;
  sub_1B4CF34((CGThumbnailListItem_o *)(v8 + 16), (int32_t)piece, v11, v12);
  AlivePieces = (System_Object_array *)WarBoardData__GetAlivePieces(this, v13);
  v15 = (System_Predicate_object__o *)sub_1B4D1DC(System_Predicate_WarBoardPieceData__TypeInfo);
  System_Predicate_object____ctor(
    v15,
    (Il2CppObject *)v8,
    Method_WarBoardData___c__DisplayClass145_0__GetPieceDispPriority_b__0__,
    0LL);
  return System_Array__FindIndex_object_(
           AlivePieces,
           (System_Predicate_T__o *)v15,
           (const MethodInfo_2FF9F88 *)Method_System_Array_FindIndex_WarBoardPieceData___);
}


int32_t __fastcall WarBoardData__GetPieceMaxDispPriotiry(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceData_array *pieces; // x8

  pieces = this->fields.pieces;
  if ( !pieces )
    sub_1B4D1EC(this, method);
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

  if ( (byte_49B8A03 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, *(_QWORD *)&forceId);
    byte_49B8A03 = 1;
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
      sub_1B4D1EC(gameObject, v13);
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

  if ( (byte_49B89FF & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, *(_QWORD *)&forceId);
    sub_1B4CF90(&System_Func_WarBoardPieceData__bool__TypeInfo, v9);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass99_0__GetPiecePosition_b__0__, v10);
    sub_1B4CF90(&WarBoardData___c__DisplayClass99_0_TypeInfo, v11);
    sub_1B4CF90(&WarBoardPieceData_TypeInfo, v12);
    byte_49B89FF = 1;
  }
  v13 = (WarBoardData___c__DisplayClass99_0_o *)sub_1B4D1DC(WarBoardData___c__DisplayClass99_0_TypeInfo);
  WarBoardData___c__DisplayClass99_0___ctor(v13, 0LL);
  if ( !WarBoardPieceData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardPieceData_TypeInfo);
  UniqueIndex = WarBoardPieceData__GetUniqueIndex(forceId, groupId, index, 0LL);
  if ( !v13 )
    sub_1B4D1EC(UniqueIndex, v15);
  v13->fields.uniqueId = UniqueIndex;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v17 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v13,
    Method_WarBoardData___c__DisplayClass99_0__GetPiecePosition_b__0__,
    0LL);
  v18 = System_Linq_Enumerable__FirstOrDefault_object__49446844(
          pieces,
          (System_Func_TSource__bool__o *)v17,
          (const MethodInfo_2F27FBC *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
  if ( v18 )
    return (int32_t)v18[4].klass;
  else
    return -1;
}


// local variable allocation has failed, the output may be wrong!
WarBoardPieceData_o *__fastcall WarBoardData__GetPiece_35764928(
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

  if ( (byte_49B8A01 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, *(_QWORD *)&squareIndex);
    sub_1B4CF90(&System_Func_WarBoardPieceData__bool__TypeInfo, v5);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass101_0__GetPiece_b__0__, v6);
    sub_1B4CF90(&WarBoardData___c__DisplayClass101_0_TypeInfo, v7);
    byte_49B8A01 = 1;
  }
  v8 = (WarBoardData___c__DisplayClass101_0_o *)sub_1B4D1DC(WarBoardData___c__DisplayClass101_0_TypeInfo);
  WarBoardData___c__DisplayClass101_0___ctor(v8, 0LL);
  if ( !v8 )
    sub_1B4D1EC(v9, v10);
  v8->fields.squareIndex = squareIndex;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v12 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_WarBoardData___c__DisplayClass101_0__GetPiece_b__0__,
    0LL);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_object__49446844(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v12,
                                  (const MethodInfo_2F27FBC *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


// local variable allocation has failed, the output may be wrong!
WarBoardPieceData_o *__fastcall WarBoardData__GetPiece_35766632(
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

  if ( (byte_49B8A02 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, *(_QWORD *)&uniqueIndex);
    sub_1B4CF90(&System_Func_WarBoardPieceData__bool__TypeInfo, v7);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass102_0__GetPiece_b__0__, v8);
    sub_1B4CF90(&WarBoardData___c__DisplayClass102_0_TypeInfo, v9);
    byte_49B8A02 = 1;
  }
  v10 = (WarBoardData___c__DisplayClass102_0_o *)sub_1B4D1DC(WarBoardData___c__DisplayClass102_0_TypeInfo);
  WarBoardData___c__DisplayClass102_0___ctor(v10, 0LL);
  if ( !v10 )
    sub_1B4D1EC(v11, v12);
  v10->fields.uniqueIndex = uniqueIndex;
  v10->fields.ignoreDead = ignoreDead;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v14 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v10,
    Method_WarBoardData___c__DisplayClass102_0__GetPiece_b__0__,
    0LL);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_object__49446844(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v14,
                                  (const MethodInfo_2F27FBC *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
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

  if ( (byte_49B8A0C & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, *(_QWORD *)&forceId);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v5);
    sub_1B4CF90(&System_Func_WarBoardPieceData__bool__TypeInfo, v6);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass116_0__GetPieces_b__0__, v7);
    sub_1B4CF90(&WarBoardData___c__DisplayClass116_0_TypeInfo, v8);
    byte_49B8A0C = 1;
  }
  v9 = (WarBoardData___c__DisplayClass116_0_o *)sub_1B4D1DC(WarBoardData___c__DisplayClass116_0_TypeInfo);
  WarBoardData___c__DisplayClass116_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_1B4D1EC(v10, v11);
  v9->fields.forceIdOnly = forceId << 24;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v13 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass116_0__GetPieces_b__0__,
    0LL);
  v14 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v14,
                                      (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


// local variable allocation has failed, the output may be wrong!
WarBoardPieceData_array *__fastcall WarBoardData__GetPieces_35822124(
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
  if ( (byte_49B8A0D & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, *(_QWORD *)&forceId);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v7);
    sub_1B4CF90(&System_Func_WarBoardPieceData__bool__TypeInfo, v8);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass117_0__GetPieces_b__0__, v9);
    sub_1B4CF90(&WarBoardData___c__DisplayClass117_0_TypeInfo, v10);
    byte_49B8A0D = 1;
  }
  v11 = (WarBoardData___c__DisplayClass117_0_o *)sub_1B4D1DC(WarBoardData___c__DisplayClass117_0_TypeInfo);
  WarBoardData___c__DisplayClass117_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_1B4D1EC(v12, v13);
  v11->fields.forceAndGroup = (forceId << 24) | (v4 << 16);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v15 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v11,
    Method_WarBoardData___c__DisplayClass117_0__GetPieces_b__0__,
    0LL);
  v16 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v16,
                                      (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


System_String_o *__fastcall WarBoardData__GetPlayBgmName(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49B8A24 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_BgmMaster___, method);
    sub_1B4CF90(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v3);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49B8A24 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_BgmMaster___);
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity || !Instance )
    goto LABEL_11;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               stageEntity->fields.playBgmId,
                               (const MethodInfo_319D9E8 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return (System_String_o *)entity[1].monitor;
LABEL_11:
    sub_1B4D1EC(Instance, v6);
  }
  return 0LL;
}


System_Int32_array *__fastcall WarBoardData__GetPlayReinforcements(WarBoardData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *playedStageReinforcementsList; // x0

  if ( (byte_49B8A3D & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__ToArray__, method);
    byte_49B8A3D = 1;
  }
  playedStageReinforcementsList = this->fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList )
    sub_1B4D1EC(0LL, method);
  return System_Collections_Generic_List_int___ToArray(
           playedStageReinforcementsList,
           (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_49B8A2D & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardEventData__Find__, *(_QWORD *)&eventId);
    sub_1B4CF90(&System_Predicate_WarBoardEventData__TypeInfo, v5);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass164_0__GetPlayedEventData_b__0__, v6);
    sub_1B4CF90(&WarBoardData___c__DisplayClass164_0_TypeInfo, v7);
    byte_49B8A2D = 1;
  }
  v8 = (WarBoardData___c__DisplayClass164_0_o *)sub_1B4D1DC(WarBoardData___c__DisplayClass164_0_TypeInfo);
  WarBoardData___c__DisplayClass164_0___ctor(v8, 0LL);
  if ( !v8
    || (v8->fields.eventId = eventId,
        listEvent = (System_Collections_Generic_List_object__o *)this->fields.listEvent,
        v12 = (System_Predicate_object__o *)sub_1B4D1DC(System_Predicate_WarBoardEventData__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_WarBoardData___c__DisplayClass164_0__GetPlayedEventData_b__0__,
          0LL),
        !listEvent) )
  {
    sub_1B4D1EC(v9, v10);
  }
  return (WarBoardEventData_o *)System_Collections_Generic_List_object___Find(
                                  listEvent,
                                  (System_Predicate_T__o *)v12,
                                  (const MethodInfo_3580844 *)Method_System_Collections_Generic_List_WarBoardEventData__Find__);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_49B8A04 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, method);
    sub_1B4CF90(&System_Func_WarBoardPieceData__bool__TypeInfo, v3);
    sub_1B4CF90(&Method_WarBoardData___c__GetPlayerMasterPiece_b__104_0__, v4);
    sub_1B4CF90(&WarBoardData___c_TypeInfo, v5);
    byte_49B8A04 = 1;
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
    _9__104_0 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__104_0, v9, Method_WarBoardData___c__GetPlayerMasterPiece_b__104_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__104_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__104_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__104_0, (int32_t)_9__104_0, v11, v12);
  }
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_object__49446844(
                                  pieces,
                                  (System_Func_TSource__bool__o *)_9__104_0,
                                  (const MethodInfo_2F27FBC *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_49B8A11 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, method);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v3);
    sub_1B4CF90(&System_Func_WarBoardPieceData__bool__TypeInfo, v4);
    sub_1B4CF90(&Method_WarBoardData___c__GetPlayerPieces_b__121_0__, v5);
    sub_1B4CF90(&WarBoardData___c_TypeInfo, v6);
    byte_49B8A11 = 1;
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
    _9__121_0 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__121_0, v10, Method_WarBoardData___c__GetPlayerPieces_b__121_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__121_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__121_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__121_0, (int32_t)_9__121_0, v12, v13);
  }
  v14 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__121_0,
          (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v14,
                                      (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
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

  if ( (byte_49B8A38 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, commonReleaseIds);
    sub_1B4CF90(&DataManager_TypeInfo, v4);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Distinct_int___, v5);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToList_int___, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_49B8A38 = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Collections_Generic_List_int__o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
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
            *(const MethodInfo_35631B8 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
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
    sub_1B4D1F4(Master_object, v13);
  }
LABEL_23:
  v24 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v11,
          (const MethodInfo_2F2176C *)Method_System_Linq_Enumerable_Distinct_int___);
  Master_object = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                              v24,
                                                              (const MethodInfo_2F3FF5C *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !Master_object )
LABEL_25:
    sub_1B4D1EC(Master_object, v13);
  return System_Collections_Generic_List_int___ToArray(
           Master_object,
           (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  const MethodInfo *v15; // x3
  int max_length; // w8
  WarBoardPieceData_array *v17; // x22
  unsigned int v18; // w23
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_49B8A12 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, *(_QWORD *)&stageReinfoId);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v8);
    sub_1B4CF90(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v9);
    byte_49B8A12 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
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
        sub_1B4D1F4(AlivePieces, v13);
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
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v13;
          sub_1B4CF34((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v13, v14, v15);
        }
      }
      max_length = v17->max_length;
      if ( (int)++v18 >= max_length )
        goto LABEL_16;
    }
LABEL_18:
    sub_1B4D1EC(AlivePieces, v13);
  }
LABEL_16:
  if ( !v10 )
    goto LABEL_18;
  return (WarBoardPieceData_array *)System_Collections_Generic_List_object___ToArray(
                                      v10,
                                      (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
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
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  __int64 v34; // x19
  const MethodInfo *v35; // x3
  __int64 v36; // x8
  int32_t v37; // w2
  struct System_Int32_array *reinforcementsIds; // x8
  struct System_Int32_array *limitNums; // x8
  WarBoardStageReinforcementsEntity_o *v40; // x8
  struct System_Int32_array *v41; // x9
  __int64 v42; // x10
  _BOOL4 v43; // w20
  _BOOL4 IsOnce; // w27
  WarBoardData_o *v45; // x26
  const MethodInfo *v46; // x1
  __int64 v47; // x29
  __int64 v48; // x22
  System_Func_int__bool__o *v49; // x21
  System_Int32_array *v50; // x28
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  _BOOL4 v53; // w28
  System_Collections_Generic_List_T__o *v54; // x19
  System_Func_object__bool__o *v55; // x21
  const MethodInfo *v56; // x3
  int32_t v57; // w2
  unsigned int max_length; // w8
  __int64 v59; // x8
  struct System_Int32_array *items; // x9
  _QWORD *v61; // x10
  __int64 size; // x11
  __int64 v63; // x9
  struct System_Int32_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  _QWORD *monitor; // x9
  __int64 v68; // x8
  __int64 v69; // x8
  _QWORD *v70; // x9
  __int64 forceId; // x10
  __int64 v72; // x20
  System_Int32_array *v73; // x0
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  System_Int32_array *v76; // x0
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  __int64 v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  __int64 v84; // x8
  WarBoardData___c__DisplayClass189_0_Fields *v85; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_int__o *v86; // [xsp+10h] [xbp-70h]

  if ( (byte_49B8A40 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_Any_int____75494880, reinfoDatas);
    sub_1B4CF90(&Method_BasicHelper_Any_ReinforcementsData___, v8);
    sub_1B4CF90(&System_Func_int__bool__TypeInfo, v9);
    sub_1B4CF90(&System_Func_ReinforcementsData__bool__TypeInfo, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ReinforcementsData__Add__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__ToArray__, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__get_Count__, v15);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v16);
    sub_1B4CF90(&ReinforcementsData_TypeInfo, v17);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v18);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass189_0__GetReinforcements_b__0__, v19);
    sub_1B4CF90(&WarBoardData___c__DisplayClass189_0_TypeInfo, v20);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__1__, v21);
    sub_1B4CF90(&WarBoardData___c__DisplayClass189_1_TypeInfo, v22);
    byte_49B8A40 = 1;
  }
  v23 = (WarBoardData___c__DisplayClass189_0_o *)sub_1B4D1DC(WarBoardData___c__DisplayClass189_0_TypeInfo);
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
  v28 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v28,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  v86 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v86,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  v85 = &v23->fields;
  if ( !p_fields->stageEntity )
    goto LABEL_65;
  DeploySquareIds = WarBoardData__GetDeploySquareIds(this, p_fields->stageEntity->fields.squareIds, v29);
  v31 = sub_1B4D1DC(WarBoardData___c__DisplayClass189_1_TypeInfo);
  WarBoardData___c__DisplayClass189_1___ctor((WarBoardData___c__DisplayClass189_1_o *)v31, 0LL);
  if ( !v31 )
    goto LABEL_65;
  *(_QWORD *)(v31 + 24) = v23;
  v34 = v31 + 24;
  sub_1B4CF34((CGThumbnailListItem_o *)(v31 + 24), (int32_t)v23, v32, v33);
  v36 = *(_QWORD *)(v31 + 24);
  *(_DWORD *)(v31 + 16) = 0;
  if ( !v36 )
    goto LABEL_65;
  v37 = 0;
  while ( 1 )
  {
    ReinfocementsPieces = *(WarBoardStageReinforcementsEntity_o **)(v36 + 16);
    if ( !ReinfocementsPieces )
      goto LABEL_65;
    reinforcementsIds = ReinfocementsPieces->fields.reinforcementsIds;
    if ( !reinforcementsIds )
      goto LABEL_65;
    if ( v37 >= (signed int)reinforcementsIds->max_length )
      break;
    limitNums = ReinfocementsPieces->fields.limitNums;
    if ( !limitNums )
      goto LABEL_65;
    if ( v37 >= limitNums->max_length )
      goto LABEL_66;
    if ( limitNums->m_Items[v37 + 1] < 1 )
    {
      v43 = 0;
    }
    else
    {
      ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)WarBoardData__GetReinfocementsPieces(
                                                                     this,
                                                                     ReinfocementsPieces->fields.id,
                                                                     v37,
                                                                     v35);
      if ( !ReinfocementsPieces )
        goto LABEL_65;
      if ( !*(_QWORD *)v34 )
        goto LABEL_65;
      v40 = ReinfocementsPieces;
      ReinfocementsPieces = *(WarBoardStageReinforcementsEntity_o **)(*(_QWORD *)v34 + 16LL);
      if ( !ReinfocementsPieces )
        goto LABEL_65;
      v41 = ReinfocementsPieces->fields.limitNums;
      if ( !v41 )
        goto LABEL_65;
      v42 = *(int *)(v31 + 16);
      if ( (unsigned int)v42 >= v41->max_length )
        goto LABEL_66;
      v43 = v41->m_Items[v42 + 1] <= v40->fields.forceId;
    }
    IsOnce = WarBoardStageReinforcementsEntity__IsOnce(ReinfocementsPieces, 0LL);
    v45 = this;
    ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)WarBoardData__GetPlayReinforcements(this, v46);
    v47 = *(_QWORD *)v34;
    if ( !*(_QWORD *)v34 )
      goto LABEL_65;
    v48 = v34;
    v49 = *(System_Func_int__bool__o **)(v47 + 24);
    v50 = (System_Int32_array *)ReinfocementsPieces;
    if ( !v49 )
    {
      v49 = (System_Func_int__bool__o *)sub_1B4D1DC(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v49,
        (Il2CppObject *)v47,
        Method_WarBoardData___c__DisplayClass189_0__GetReinforcements_b__0__,
        0LL);
      *(_QWORD *)(v47 + 24) = v49;
      sub_1B4CF34((CGThumbnailListItem_o *)(v47 + 24), (int32_t)v49, v51, v52);
    }
    v53 = BasicHelper__Any_int__49201684(
            v50,
            (System_Func_T__bool__o *)v49,
            (const MethodInfo_2EEC214 *)Method_BasicHelper_Any_int____75494880);
    v54 = (System_Collections_Generic_List_T__o *)*reinfoDatas;
    v55 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_ReinforcementsData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v55,
      (Il2CppObject *)v31,
      Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__1__,
      0LL);
    ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)BasicHelper__Any_object_(
                                                                   v54,
                                                                   (System_Func_T__bool__o *)v55,
                                                                   (const MethodInfo_2EEC494 *)Method_BasicHelper_Any_ReinforcementsData___);
    if ( !DeploySquareIds )
      goto LABEL_65;
    v57 = *(_DWORD *)(v31 + 16);
    max_length = DeploySquareIds->max_length;
    if ( v57 >= max_length )
      goto LABEL_66;
    if ( (unsigned __int8)ReinfocementsPieces & 1 | (IsOnce && v53 || v43 || DeploySquareIds->m_Items[v57 + 1] < 0) )
    {
      if ( !*(_QWORD *)v48 )
        goto LABEL_65;
      v59 = *(_QWORD *)(*(_QWORD *)v48 + 16LL);
      if ( !v59 )
        goto LABEL_65;
      v34 = v48;
      this = v45;
      WarBoardData__SaveHoldReinforcements(v45, *(_DWORD *)(v59 + 20), v57, v56);
    }
    else
    {
      if ( !v28 )
        goto LABEL_65;
      items = v28->fields._items;
      v61 = Method_System_Collections_Generic_List_int__Add__;
      ++v28->fields._version;
      if ( !items )
        goto LABEL_65;
      size = v28->fields._size;
      this = v45;
      v34 = v48;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v28,
          v57,
          *(const MethodInfo_35631B8 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
        max_length = DeploySquareIds->max_length;
      }
      else
      {
        v28->fields._size = size + 1;
        items->m_Items[size + 1] = v57;
      }
      v63 = *(int *)(v31 + 16);
      ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)v86;
      if ( (unsigned int)v63 >= max_length )
LABEL_66:
        sub_1B4D1F4(ReinfocementsPieces, v25);
      if ( !v86 )
        goto LABEL_65;
      v25 = (unsigned int)DeploySquareIds->m_Items[v63 + 1];
      v64 = v86->fields._items;
      v65 = Method_System_Collections_Generic_List_int__Add__;
      ++v86->fields._version;
      if ( !v64 )
        goto LABEL_65;
      v66 = v86->fields._size;
      if ( (unsigned int)v66 >= v64->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v86,
          v25,
          *(const MethodInfo_35631B8 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
      }
      else
      {
        v86->fields._size = v66 + 1;
        v64->m_Items[v66 + 1] = v25;
      }
      ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !ReinfocementsPieces )
        goto LABEL_65;
      monitor = ReinfocementsPieces[6].monitor;
      if ( !monitor )
        goto LABEL_65;
      v68 = *(int *)(v31 + 16);
      if ( (unsigned int)v68 >= DeploySquareIds->max_length )
        goto LABEL_66;
      ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)monitor[29];
      if ( !ReinfocementsPieces )
        goto LABEL_65;
      v25 = (unsigned int)DeploySquareIds->m_Items[v68 + 1];
      v69 = *(_QWORD *)&ReinfocementsPieces->fields.warBoardStageId;
      v70 = Method_System_Collections_Generic_List_int__Add__;
      ++ReinfocementsPieces->fields.groupId;
      if ( !v69 )
        goto LABEL_65;
      forceId = ReinfocementsPieces->fields.forceId;
      if ( (unsigned int)forceId >= *(_DWORD *)(v69 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)ReinfocementsPieces,
          v25,
          *(const MethodInfo_35631B8 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
      }
      else
      {
        ReinfocementsPieces->fields.forceId = forceId + 1;
        *(_DWORD *)(v69 + 4 * forceId + 32) = v25;
      }
    }
    v36 = *(_QWORD *)(v31 + 24);
    v37 = *(_DWORD *)(v31 + 16) + 1;
    *(_DWORD *)(v31 + 16) = v37;
    if ( !v36 )
      goto LABEL_65;
  }
  if ( !v28 )
    goto LABEL_65;
  if ( v28->fields._size < 1 )
    return;
  v72 = sub_1B4D1DC(ReinforcementsData_TypeInfo);
  ReinforcementsData___ctor((ReinforcementsData_o *)v72, 0LL);
  if ( !v85->stageEntity )
    goto LABEL_65;
  if ( !v72 )
    goto LABEL_65;
  *(_DWORD *)(v72 + 16) = v85->stageEntity->fields.id;
  v73 = System_Collections_Generic_List_int___ToArray(
          v28,
          (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)(v72 + 24) = v73;
  sub_1B4CF34((CGThumbnailListItem_o *)(v72 + 24), (int32_t)v73, v74, v75);
  ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)v86;
  if ( !v86
    || (v76 = System_Collections_Generic_List_int___ToArray(
                v86,
                (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__),
        *(_QWORD *)(v72 + 32) = v76,
        sub_1B4CF34((CGThumbnailListItem_o *)(v72 + 32), (int32_t)v76, v77, v78),
        (ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)*reinfoDatas) == 0LL)
    || (v81 = *(_QWORD *)&ReinfocementsPieces->fields.warBoardStageId,
        v82 = Method_System_Collections_Generic_List_ReinforcementsData__Add__,
        ++ReinfocementsPieces->fields.groupId,
        !v81) )
  {
LABEL_65:
    sub_1B4D1EC(ReinfocementsPieces, v25);
  }
  v83 = ReinfocementsPieces->fields.forceId;
  if ( (unsigned int)v83 >= *(_DWORD *)(v81 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)ReinfocementsPieces,
      (Il2CppObject *)v72,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
  }
  else
  {
    v84 = v81 + 8 * v83;
    ReinfocementsPieces->fields.forceId = v83 + 1;
    *(_QWORD *)(v84 + 32) = v72;
    sub_1B4CF34((CGThumbnailListItem_o *)(v84 + 32), v72, v79, v80);
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
    sub_1B4D1EC(this, method);
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
    sub_1B4D1EC(this, method);
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

  if ( (byte_49B8A06 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, isPlayerGroup);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v5);
    sub_1B4CF90(&System_Func_WarBoardPieceData__bool__TypeInfo, v6);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass106_0__GetServantPieces_b__0__, v7);
    sub_1B4CF90(&WarBoardData___c__DisplayClass106_0_TypeInfo, v8);
    byte_49B8A06 = 1;
  }
  v9 = (WarBoardData___c__DisplayClass106_0_o *)sub_1B4D1DC(WarBoardData___c__DisplayClass106_0_TypeInfo);
  WarBoardData___c__DisplayClass106_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_1B4D1EC(v10, v11);
  v9->fields.isPlayerGroup = isPlayerGroup;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v13 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass106_0__GetServantPieces_b__0__,
    0LL);
  v14 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v14,
                                      (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
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

  if ( (byte_49B8A17 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___, *(_QWORD *)&squareIndex);
    sub_1B4CF90(&System_Func_WarBoardSquareData__bool__TypeInfo, v5);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass128_0__GetSquare_b__0__, v6);
    sub_1B4CF90(&WarBoardData___c__DisplayClass128_0_TypeInfo, v7);
    byte_49B8A17 = 1;
  }
  v8 = (WarBoardData___c__DisplayClass128_0_o *)sub_1B4D1DC(WarBoardData___c__DisplayClass128_0_TypeInfo);
  WarBoardData___c__DisplayClass128_0___ctor(v8, 0LL);
  if ( !v8 )
    sub_1B4D1EC(v9, v10);
  v8->fields.squareIndex = squareIndex;
  squares = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.squares;
  v12 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardSquareData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_WarBoardData___c__DisplayClass128_0__GetSquare_b__0__,
    0LL);
  return (WarBoardSquareData_o *)System_Linq_Enumerable__FirstOrDefault_object__49446844(
                                   squares,
                                   (System_Func_TSource__bool__o *)v12,
                                   (const MethodInfo_2F27FBC *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
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

  if ( (byte_49B8A27 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_Find_WarBoardUserServantData___, *(_QWORD *)&stageBossIdx);
    sub_1B4CF90(&System_Func_WarBoardUserServantData__bool__TypeInfo, v5);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass153_0__GetStageBossData_b__0__, v6);
    sub_1B4CF90(&WarBoardData___c__DisplayClass153_0_TypeInfo, v7);
    byte_49B8A27 = 1;
  }
  v8 = (WarBoardData___c__DisplayClass153_0_o *)sub_1B4D1DC(WarBoardData___c__DisplayClass153_0_TypeInfo);
  WarBoardData___c__DisplayClass153_0___ctor(v8, 0LL);
  if ( !v8 || (v8->fields.stageBossIdx = stageBossIdx, (serverData = this->fields.serverData) == 0LL) )
    sub_1B4D1EC(v9, v10);
  svtInfo = (System_Object_array *)serverData->fields.svtInfo;
  v13 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardUserServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v8,
    Method_WarBoardData___c__DisplayClass153_0__GetStageBossData_b__0__,
    0LL);
  return (WarBoardUserServantData_o *)BasicHelper__Find_object_(
                                        svtInfo,
                                        (System_Func_T__bool__o *)v13,
                                        (const MethodInfo_2EED060 *)Method_BasicHelper_Find_WarBoardUserServantData___);
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

  if ( (byte_49B8A1C & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___, *(_QWORD *)&squareIndex);
    sub_1B4CF90(&System_Func_WarBoardTreasureData__bool__TypeInfo, v5);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass137_0__GetTreasure_b__0__, v6);
    sub_1B4CF90(&WarBoardData___c__DisplayClass137_0_TypeInfo, v7);
    byte_49B8A1C = 1;
  }
  v8 = (WarBoardData___c__DisplayClass137_0_o *)sub_1B4D1DC(WarBoardData___c__DisplayClass137_0_TypeInfo);
  WarBoardData___c__DisplayClass137_0___ctor(v8, 0LL);
  if ( !v8 )
    sub_1B4D1EC(v9, v10);
  v8->fields.squareIndex = squareIndex;
  treasures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.treasures;
  v12 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardTreasureData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_WarBoardData___c__DisplayClass137_0__GetTreasure_b__0__,
    0LL);
  return (WarBoardTreasureData_o *)System_Linq_Enumerable__FirstOrDefault_object__49446844(
                                     treasures,
                                     (System_Func_TSource__bool__o *)v12,
                                     (const MethodInfo_2F27FBC *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___);
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

  if ( (byte_49B8A0B & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v5);
    byte_49B8A0B = 1;
  }
  v6 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
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
        sub_1B4D1F4(v7, treasureId);
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
            *(const MethodInfo_35631B8 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
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
    sub_1B4D1EC(v7, treasureId);
  }
LABEL_16:
  if ( !v6 )
    goto LABEL_18;
  return System_Collections_Generic_List_int___ToArray(
           v6,
           (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_49B8A44 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardUiData__Find__, *(_QWORD *)&squareIndex);
    sub_1B4CF90(&System_Predicate_WarBoardUiData__TypeInfo, v5);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass193_0__GetUiData_b__0__, v6);
    sub_1B4CF90(&WarBoardData___c__DisplayClass193_0_TypeInfo, v7);
    byte_49B8A44 = 1;
  }
  v8 = (WarBoardData___c__DisplayClass193_0_o *)sub_1B4D1DC(WarBoardData___c__DisplayClass193_0_TypeInfo);
  WarBoardData___c__DisplayClass193_0___ctor(v8, 0LL);
  if ( !v8
    || (v8->fields.squareIndex = squareIndex,
        listUiData = (System_Collections_Generic_List_object__o *)this->fields.listUiData,
        v12 = (System_Predicate_object__o *)sub_1B4D1DC(System_Predicate_WarBoardUiData__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_WarBoardData___c__DisplayClass193_0__GetUiData_b__0__,
          0LL),
        !listUiData) )
  {
    sub_1B4D1EC(v9, v10);
  }
  return (WarBoardUiData_o *)System_Collections_Generic_List_object___Find(
                               listUiData,
                               (System_Predicate_T__o *)v12,
                               (const MethodInfo_3580844 *)Method_System_Collections_Generic_List_WarBoardUiData__Find__);
}


WarBoardUiData_o *__fastcall WarBoardData__GetUiData_35854828(
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_object__o *listUiData; // x19
  System_Predicate_object__o *v14; // x20

  if ( (byte_49B8A45 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardUiData__Find__, pieceIndex);
    sub_1B4CF90(&System_Predicate_WarBoardUiData__TypeInfo, v5);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass194_0__GetUiData_b__0__, v6);
    sub_1B4CF90(&WarBoardData___c__DisplayClass194_0_TypeInfo, v7);
    byte_49B8A45 = 1;
  }
  v8 = sub_1B4D1DC(WarBoardData___c__DisplayClass194_0_TypeInfo);
  WarBoardData___c__DisplayClass194_0___ctor((WarBoardData___c__DisplayClass194_0_o *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = pieceIndex,
        sub_1B4CF34((CGThumbnailListItem_o *)(v8 + 16), (int32_t)pieceIndex, v11, v12),
        listUiData = (System_Collections_Generic_List_object__o *)this->fields.listUiData,
        v14 = (System_Predicate_object__o *)sub_1B4D1DC(System_Predicate_WarBoardUiData__TypeInfo),
        System_Predicate_object____ctor(
          v14,
          (Il2CppObject *)v8,
          Method_WarBoardData___c__DisplayClass194_0__GetUiData_b__0__,
          0LL),
        !listUiData) )
  {
    sub_1B4D1EC(v9, v10);
  }
  return (WarBoardUiData_o *)System_Collections_Generic_List_object___Find(
                               listUiData,
                               (System_Predicate_T__o *)v14,
                               (const MethodInfo_3580844 *)Method_System_Collections_Generic_List_WarBoardUiData__Find__);
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

  if ( (byte_49B8A1D & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___, *(_QWORD *)&squareIndex);
    sub_1B4CF90(&System_Func_WarBoardTreasureData__bool__TypeInfo, v5);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass138_0__GetUnusedTreasure_b__0__, v6);
    sub_1B4CF90(&WarBoardData___c__DisplayClass138_0_TypeInfo, v7);
    byte_49B8A1D = 1;
  }
  v8 = (WarBoardData___c__DisplayClass138_0_o *)sub_1B4D1DC(WarBoardData___c__DisplayClass138_0_TypeInfo);
  WarBoardData___c__DisplayClass138_0___ctor(v8, 0LL);
  if ( !v8 )
    sub_1B4D1EC(v9, v10);
  v8->fields.squareIndex = squareIndex;
  treasures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.treasures;
  v12 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardTreasureData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_WarBoardData___c__DisplayClass138_0__GetUnusedTreasure_b__0__,
    0LL);
  return (WarBoardTreasureData_o *)System_Linq_Enumerable__FirstOrDefault_object__49446844(
                                     treasures,
                                     (System_Func_TSource__bool__o *)v12,
                                     (const MethodInfo_2F27FBC *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___);
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

  if ( (byte_49B8A37 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_WarBoardEventMaster___, method);
    sub_1B4CF90(&Method_DataManager_GetMaster_WarBoardEventScriptMaster___, v3);
    sub_1B4CF90(&DataManager_TypeInfo, v4);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Distinct_int___, v5);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToList_int___, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_49B8A37 = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_WarBoardEventScriptMaster___);
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_46;
  v15 = (WarBoardEventScriptMaster_o *)Master_object;
  stageId = serverData->fields.stageId;
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_WarBoardEventMaster___);
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
                    *(const MethodInfo_35631B8 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
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
            sub_1B4D1F4(Master_object, v13);
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
                      *(const MethodInfo_35631B8 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
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
          (const MethodInfo_2F2176C *)Method_System_Linq_Enumerable_Distinct_int___);
  Master_object = System_Linq_Enumerable__ToList_int_(
                    v36,
                    (const MethodInfo_2F3FF5C *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !Master_object )
LABEL_46:
    sub_1B4D1EC(Master_object, v13);
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)Master_object,
           (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_49B8A1E & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardWallData___, *(_QWORD *)&squareIndex);
    sub_1B4CF90(&System_Func_WarBoardWallData__bool__TypeInfo, v7);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass140_0__GetWall_b__0__, v8);
    sub_1B4CF90(&WarBoardData___c__DisplayClass140_0_TypeInfo, v9);
    byte_49B8A1E = 1;
  }
  v10 = (WarBoardData___c__DisplayClass140_0_o *)sub_1B4D1DC(WarBoardData___c__DisplayClass140_0_TypeInfo);
  WarBoardData___c__DisplayClass140_0___ctor(v10, 0LL);
  if ( !v10 )
    sub_1B4D1EC(v11, v12);
  v10->fields.squareIndex = squareIndex;
  v10->fields.ignoreDestroy = ignoreDestroy;
  walls = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.walls;
  v14 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardWallData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v10,
    Method_WarBoardData___c__DisplayClass140_0__GetWall_b__0__,
    0LL);
  return (WarBoardWallData_o *)System_Linq_Enumerable__FirstOrDefault_object__49446844(
                                 walls,
                                 (System_Func_TSource__bool__o *)v14,
                                 (const MethodInfo_2F27FBC *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardWallData___);
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

  if ( (byte_49B8A2F & 1) == 0 )
  {
    sub_1B4CF90(&WarBoardManager_TypeInfo, method);
    byte_49B8A2F = 1;
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
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_49B8A39 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__, method);
    sub_1B4CF90(&WarBoardPrevCondData_TypeInfo, v3);
    byte_49B8A39 = 1;
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
        sub_1B4D1F4(PrevCondIds, v7);
      v11 = v9->m_Items[v10 + 1];
      listPrevCond = (System_Collections_Generic_List_object__o *)this->fields.listPrevCond;
      v13 = (WarBoardPrevCondData_o *)sub_1B4D1DC(WarBoardPrevCondData_TypeInfo);
      WarBoardPrevCondData___ctor_36040276(v13, v11, -1, 0LL);
      if ( !listPrevCond )
        break;
      items = listPrevCond->fields._items;
      v17 = Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__;
      ++listPrevCond->fields._version;
      if ( !items )
        break;
      size = listPrevCond->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          listPrevCond,
          (Il2CppObject *)v13,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v19 = &items->obj.klass + size;
        listPrevCond->fields._size = size + 1;
        v19[4] = (Il2CppClass *)v13;
        sub_1B4CF34((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v13, v14, v15);
      }
      LODWORD(v8) = v9->max_length;
      if ( (__int64)++v10 >= (int)v8 )
        return;
    }
LABEL_14:
    sub_1B4D1EC(PrevCondIds, v7);
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

  if ( (byte_49B8A32 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_Find_WarBoardBossBattleData___, *(_QWORD *)&bossId);
    sub_1B4CF90(&System_Convert_TypeInfo, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v11);
    sub_1B4CF90(&System_Func_WarBoardBossBattleData__bool__TypeInfo, v12);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass172_0__IsBossInfo_b__0__, v13);
    sub_1B4CF90(&WarBoardData___c__DisplayClass172_0_TypeInfo, v14);
    byte_49B8A32 = 1;
  }
  valuea = 0LL;
  v15 = (WarBoardData___c__DisplayClass172_0_o *)sub_1B4D1DC(WarBoardData___c__DisplayClass172_0_TypeInfo);
  WarBoardData___c__DisplayClass172_0___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_17;
  v15->fields.bossId = bossId;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_17;
  bossBattleInfo = (System_Object_array *)serverData->fields.bossBattleInfo;
  v20 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardBossBattleData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v20,
    (Il2CppObject *)v15,
    Method_WarBoardData___c__DisplayClass172_0__IsBossInfo_b__0__,
    0LL);
  object = BasicHelper__Find_object_(
             bossBattleInfo,
             (System_Func_T__bool__o *)v20,
             (const MethodInfo_2EED060 *)Method_BasicHelper_Find_WarBoardBossBattleData___);
  if ( !object )
    return value == 0;
  v22 = object;
  monitor = (System_Collections_Generic_Dictionary_object__object__o *)object[1].monitor;
  if ( !monitor )
    goto LABEL_17;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          monitor,
          (Il2CppObject *)key,
          (const MethodInfo_3257D0C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return value == 0;
  monitor = (System_Collections_Generic_Dictionary_object__object__o *)v22[1].monitor;
  if ( !monitor )
LABEL_17:
    sub_1B4D1EC(monitor, v17);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          monitor,
          (Il2CppObject *)key,
          &valuea,
          (const MethodInfo_3259324 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  long double inited; // q0
  _QWORD *v10; // x23
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0
  System_Int32_array **v14; // x8
  System_Int32_array *v15; // x1
  WarBoardStageNpcMaster_o *stageNpcMaster; // x0
  __int64 v17; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  System_Int32_array *DefenseTarget; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  WarBoardStageNpcEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49B8A30 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Array_Empty_int___, data);
    byte_49B8A30 = 1;
  }
  v10 = Method_System_Array_Empty_int___;
  entity = 0LL;
  v11 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v11 )
  {
    sub_1B9D67C(Method_System_Array_Empty_int___);
    v11 = v10[7];
  }
  v12 = *(_QWORD *)(v11 + 16);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1B9D620(inited);
  if ( !*(_DWORD *)(v12 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v12);
  v13 = *(_QWORD *)(v10[7] + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1B9D620(inited);
  v14 = *(System_Int32_array ***)(v13 + 184);
  v15 = *v14;
  *data = *v14;
  sub_1B4CF34((CGThumbnailListItem_o *)data, (int32_t)v15, forceId, *(const MethodInfo **)&groupId);
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
    sub_1B4CF34((CGThumbnailListItem_o *)data, (int32_t)DefenseTarget, v20, v21);
  }
  stageNpcMaster = (WarBoardStageNpcMaster_o *)BasicHelper__IsNullOrEmpty(
                                                 (System_Collections_ICollection_o *)*data,
                                                 0LL);
  if ( ((unsigned __int8)stageNpcMaster & 1) != 0 )
    return 0;
  if ( !*data )
LABEL_20:
    sub_1B4D1EC(stageNpcMaster, v17);
  return ((*data)->max_length & 1) == 0;
}


bool __fastcall WarBoardData__IsLose(WarBoardData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  WarBoardPieceData_array *Pieces_35822124; // x0
  const MethodInfo *v5; // x1
  int max_length; // w8
  WarBoardPieceData_array *v7; // x20
  int v8; // w24
  int v9; // w22
  int v10; // w23
  WarBoardPieceData_o *v11; // x21

  Pieces_35822124 = WarBoardData__GetPieces_35822124(this, 0, 0, v2);
  if ( !Pieces_35822124 )
LABEL_18:
    sub_1B4D1EC(Pieces_35822124, v5);
  max_length = Pieces_35822124->max_length;
  v7 = Pieces_35822124;
  if ( max_length < 1 )
    return 1;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  do
  {
    if ( v8 >= (unsigned int)max_length )
      sub_1B4D1F4(Pieces_35822124, v5);
    v11 = v7->m_Items[v8];
    if ( !v11 )
      goto LABEL_18;
    if ( !v11->fields._isDead_k__BackingField )
    {
      Pieces_35822124 = (WarBoardPieceData_array *)WarBoardPieceData__HasAvailablePermanentSleepBuff(v11, 0LL);
      if ( ((unsigned __int8)Pieces_35822124 & 1) == 0 )
      {
        Pieces_35822124 = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster(v11, 0LL);
        if ( ((unsigned __int8)Pieces_35822124 & 1) != 0 )
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
  WarBoardPieceData_array *Pieces_35822124; // x0
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
          Pieces_35822124 = WarBoardData__GetPieces_35822124(this, i, v10, v2);
          if ( !Pieces_35822124 )
            goto LABEL_28;
          max_length = Pieces_35822124->max_length;
          v14 = Pieces_35822124;
          if ( max_length >= 1 )
          {
            v15 = 0;
            while ( 1 )
            {
              if ( v15 >= max_length )
                sub_1B4D1F4(Pieces_35822124, v12);
              v16 = &v14->obj.klass + (int)v15;
              v17 = v16[4];
              if ( !v17 )
                break;
              Pieces_35822124 = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster(
                                                             (WarBoardPieceData_o *)v16[4],
                                                             0LL);
              if ( ((unsigned __int8)Pieces_35822124 & 1) == 0 && !LOBYTE(v17->_1.klass) )
              {
                ++v7;
                v8 += *((unsigned __int8 *)&v17->_1.this_arg.bits + 4);
              }
              max_length = v14->max_length;
              if ( (int)++v15 >= max_length )
                goto LABEL_16;
            }
LABEL_28:
            sub_1B4D1EC(Pieces_35822124, v12);
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
  const MethodInfo_31E839C *v23; // x3
  bool v24; // w2
  System_Collections_Generic_Dictionary_int__bool__o *v25; // x0
  WarBoardData___c_c *v26; // x0
  System_Func_KeyValuePair_int__bool___bool__o *_9__95_0; // x20
  Il2CppObject *v28; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3

  if ( (byte_49B89FC & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, method);
    sub_1B4CF90(&DataManager_TypeInfo, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v7);
    sub_1B4CF90(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v8);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__bool____, v9);
    sub_1B4CF90(&System_Func_KeyValuePair_int__bool___bool__TypeInfo, v10);
    sub_1B4CF90(&Method_WarBoardData___c__IsReachableWinConditions_b__95_0__, v11);
    sub_1B4CF90(&WarBoardData___c_TypeInfo, v12);
    byte_49B89FC = 1;
  }
  if ( (this->fields.winCondId & 0x80000000) != 0 )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  if ( !Master_object )
    goto LABEL_33;
  List = WarBoardCommonReleaseMaster__GetList(
           (WarBoardCommonReleaseMaster_o *)Master_object,
           this->fields.winCondId,
           0LL);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)List, 0LL) )
    return 0;
  v17 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v17,
    (const MethodInfo_31E79DC *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  if ( !List )
LABEL_33:
    sub_1B4D1EC(Master_object, v14);
  max_length = List->max_length;
  if ( max_length >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= max_length )
        sub_1B4D1F4(Master_object, v14);
      v20 = (int32_t *)List->m_Items[v19];
      if ( !v20 || !v17 )
        goto LABEL_33;
      if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
              v17,
              v20[6],
              (const MethodInfo_31E85B0 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
        break;
      Master_object = (Il2CppObject *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                        v17,
                                        v20[6],
                                        (const MethodInfo_31E830C *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
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
      v23 = (const MethodInfo_31E839C *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__;
      v24 = v20[10] == 0;
    }
    else
    {
      if ( v21 != 5 )
      {
        v22 = v20[6];
        v23 = (const MethodInfo_31E839C *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__;
        v25 = v17;
        v24 = 0;
        goto LABEL_24;
      }
      v22 = v20[6];
      v23 = (const MethodInfo_31E839C *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__;
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
    _9__95_0 = (System_Func_KeyValuePair_int__bool___bool__o *)sub_1B4D1DC(System_Func_KeyValuePair_int__bool___bool__TypeInfo);
    System_Func_KeyValuePair_int__bool___bool____ctor(
      _9__95_0,
      v28,
      Method_WarBoardData___c__IsReachableWinConditions_b__95_0__,
      0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__95_0 = _9__95_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__95_0, (int32_t)_9__95_0, v30, v31);
  }
  return System_Linq_Enumerable__Any_KeyValuePair_int__bool__(
           (System_Collections_Generic_IEnumerable_TSource__o *)v17,
           (System_Func_TSource__bool__o *)_9__95_0,
           (const MethodInfo_2F0FD18 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__bool____);
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

  if ( (byte_49B8A41 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_Any_int____75494880, *(_QWORD *)&forceId);
    sub_1B4CF90(&Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___, v9);
    sub_1B4CF90(&DataManager_TypeInfo, v10);
    sub_1B4CF90(&System_Func_int__bool__TypeInfo, v11);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass190_0__IsReinforcementsApper_b__0__, v12);
    sub_1B4CF90(&WarBoardData___c__DisplayClass190_0_TypeInfo, v13);
    byte_49B8A41 = 1;
  }
  v14 = (WarBoardData___c__DisplayClass190_0_o *)sub_1B4D1DC(WarBoardData___c__DisplayClass190_0_TypeInfo);
  WarBoardData___c__DisplayClass190_0___ctor(v14, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (WarBoardStageReinforcementsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
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
  v22 = (System_Func_int__bool__o *)sub_1B4D1DC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v22,
    (Il2CppObject *)v14,
    Method_WarBoardData___c__DisplayClass190_0__IsReinforcementsApper_b__0__,
    0LL);
  Master_object = (WarBoardStageReinforcementsMaster_o *)BasicHelper__Any_int__49201684(
                                                           PlayReinforcements,
                                                           (System_Func_T__bool__o *)v22,
                                                           (const MethodInfo_2EEC214 *)Method_BasicHelper_Any_int____75494880);
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
    sub_1B4D1EC(Master_object, v16);
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
      sub_1B4D1F4(Master_object, v16);
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

  if ( (byte_49B89FD & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__Dispose__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__MoveNext__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__get_Current__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardTaskBase__GetEnumerator__, v6);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7);
    sub_1B4CF90(&System_Type_TypeInfo, v8);
    sub_1B4CF90(&WarBoardChangeWinConditionTask_var, v9);
    byte_49B89FD = 1;
  }
  memset(&v21, 0, sizeof(v21));
  if ( !WarBoardData__CheckWinCond(this, method) )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 28, 0LL, 0LL);
  Instance = (Il2CppObject *)System_Linq_Enumerable__Any_object_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)EventTasks,
                               (const MethodInfo_2F0F4B0 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    WarBoardManager__AddTask_35950352((WarBoardManager_o *)Instance, 0, EventTasks, 0LL);
  }
  if ( !EventTasks )
LABEL_20:
    sub_1B4D1EC(Instance, v11);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)EventTasks,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__MoveNext__);
    if ( !v14 )
      break;
    if ( !v21.fields._current )
      sub_1B4D1EC(0LL, v13);
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
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__Dispose__);
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

  if ( (byte_49B8A3B & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, method);
    sub_1B4CF90(&DataManager_TypeInfo, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__get_Current__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__, v7);
    byte_49B8A3B = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  if ( !this->fields.listPrevCond )
    sub_1B4D1EC(Master_object, v9);
  v10 = (WarBoardCommonReleaseMaster_o *)Master_object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)this->fields.listPrevCond,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__);
  v17 = v16;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__);
    if ( !v11 )
      break;
    current = v17.fields._current;
    if ( !v17.fields._current )
      sub_1B4D1EC(v11, v12);
    if ( (HIDWORD(v17.fields._current[1].klass) & 0x80000000) != 0 )
    {
      if ( !v10 )
        sub_1B4D1EC(v11, v12);
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
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__);
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
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  struct System_Object_array *items; // x8
  _QWORD *v87; // x9
  __int64 size; // x10
  Il2CppClass **v89; // x0
  WarBoardData_o *v90; // x21
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  struct System_Collections_Generic_List_WarBoardUiData__o *latestPieceActionSquareIndexes; // x1
  int32_t v96; // w2
  const MethodInfo *v97; // x3
  struct System_UInt32_array *latestBattlePieceUniqueIndexes; // x1
  System_Collections_Generic_List_object__o *v99; // x20
  Il2CppObject *v100; // x22
  WarBoardPrevCondData_SaveData_o *v101; // x21
  __int64 v102; // x0
  __int64 v103; // x1
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  struct System_Object_array *v106; // x8
  _QWORD *v107; // x9
  __int64 v108; // x10
  Il2CppClass **v109; // x0
  WarBoardData_o *v110; // x21
  int32_t v111; // w2
  const MethodInfo *v112; // x3
  System_Collections_Generic_List_object__o *v113; // x20
  Il2CppObject *v114; // x22
  HoldReinforcementsData_SaveData_o *v115; // x21
  __int64 v116; // x0
  __int64 v117; // x1
  int32_t v118; // w2
  const MethodInfo *v119; // x3
  struct System_Object_array *v120; // x8
  _QWORD *v121; // x9
  __int64 v122; // x10
  Il2CppClass **v123; // x0
  WarBoardData_o *v124; // x21
  int32_t v125; // w2
  const MethodInfo *v126; // x3
  struct WarBoardData_WarBoardLocalSaveData_o *v127; // x20
  int32_t v128; // w2
  const MethodInfo *v129; // x3
  System_Collections_Generic_List_object__o *v130; // x20
  Il2CppObject *v131; // x22
  WarBoardUiData_SaveData_o *v132; // x21
  __int64 v133; // x0
  __int64 v134; // x1
  int32_t v135; // w2
  const MethodInfo *v136; // x3
  struct System_Object_array *v137; // x8
  _QWORD *v138; // x9
  __int64 v139; // x10
  Il2CppClass **v140; // x0
  WarBoardData_o *v141; // x21
  int32_t v142; // w2
  const MethodInfo *v143; // x3
  struct WarBoardDataEntity_o *v144; // x8
  unsigned int v145; // w0
  WarBoardData_o *v146; // x21
  int v147; // w20
  int32_t v148; // w2
  const MethodInfo *v149; // x3
  unsigned __int64 v150; // x22
  __int64 v151; // x24
  __int64 v152; // x25
  struct WarBoardDataEntity_o *v153; // x9
  struct WarBoardSquareIndexData_array *squareIndexInfo; // x9
  unsigned int *reinforcementsSaveList; // x26
  WarBoardSquareIndexData_o *v156; // x21
  WarBoardSquareIndexData_SaveData_o *v157; // x20
  int32_t v158; // w2
  const MethodInfo *v159; // x3
  struct WarBoardDataEntity_o *v160; // x8
  unsigned int v161; // w0
  WarBoardData_o *v162; // x21
  int v163; // w20
  int32_t v164; // w2
  const MethodInfo *v165; // x3
  int32_t v166; // w2
  const MethodInfo *v167; // x3
  unsigned __int64 v168; // x22
  __int64 v169; // x24
  __int64 v170; // x25
  struct WarBoardDataEntity_o *v171; // x8
  struct WarBoardBossBattleData_array *bossBattleInfo; // x8
  struct System_Collections_Generic_List_int__o *playedStageReinforcementsList; // x26
  WarBoardBossBattleData_o *v174; // x21
  WarBoardBossBattleData_SaveData_o *v175; // x20
  const MethodInfo *v176; // x2
  int32_t v177; // w2
  const MethodInfo *v178; // x3
  struct System_Collections_Generic_List_WarBoardPrevCondData__o *bgAnimationInfo_k__BackingField; // x1
  WarBoardData_o *v180; // x8
  MiniMessagePack_MiniMessagePacker_o *v181; // x19
  System_Byte_array *v182; // x19
  WarBoardData_c *v183; // x8
  System_String_o *WARBOARDDATA_SAVEDATA_KEY; // x20
  System_String_o *v185; // x19
  __int64 v186; // x0
  System_Collections_Generic_List_Enumerator_object__o v187; // [xsp+8h] [xbp-F8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v188; // [xsp+20h] [xbp-E0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v189; // [xsp+40h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v190; // [xsp+60h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v191; // [xsp+80h] [xbp-80h] BYREF

  v4 = this;
  if ( (byte_49B89F4 & 1) == 0 )
  {
    sub_1B4CF90(&System_Convert_TypeInfo, onBoardSkillUpdate);
    sub_1B4CF90(&EncryptedPlayerPrefs_TypeInfo, v5);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___, v6);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__Dispose__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__MoveNext__, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__get_Current__, v16);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__get_Current__, v17);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__get_Current__, v18);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__get_Current__, v19);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardUiData_SaveData__Add__, v20);
    sub_1B4CF90(&Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__Add__, v21);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardEventData_SaveData__Add__, v22);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__Add__, v23);
    sub_1B4CF90(&Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__, v24);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__, v25);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardEventData__GetEnumerator__, v26);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__, v27);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__ToArray__, v28);
    sub_1B4CF90(&Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__ToArray__, v29);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__ToArray__, v30);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardEventData_SaveData__ToArray__, v31);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardUiData_SaveData__ToArray__, v32);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData___ctor__, v33);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardEventData_SaveData___ctor__, v34);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardUiData_SaveData___ctor__, v35);
    sub_1B4CF90(&Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData___ctor__, v36);
    sub_1B4CF90(&System_Collections_Generic_List_WarBoardPrevCondData_SaveData__TypeInfo, v37);
    sub_1B4CF90(&System_Collections_Generic_List_HoldReinforcementsData_SaveData__TypeInfo, v38);
    sub_1B4CF90(&System_Collections_Generic_List_WarBoardEventData_SaveData__TypeInfo, v39);
    sub_1B4CF90(&System_Collections_Generic_List_WarBoardUiData_SaveData__TypeInfo, v40);
    sub_1B4CF90(&MiniMessagePack_MiniMessagePacker_TypeInfo, v41);
    sub_1B4CF90(&WarBoardSquareIndexData_SaveData___TypeInfo, v42);
    sub_1B4CF90(&WarBoardBossBattleData_SaveData___TypeInfo, v43);
    sub_1B4CF90(&WarBoardBossBattleData_SaveData_TypeInfo, v44);
    sub_1B4CF90(&WarBoardPrevCondData_SaveData_TypeInfo, v45);
    sub_1B4CF90(&WarBoardUiData_SaveData_TypeInfo, v46);
    sub_1B4CF90(&WarBoardEventData_SaveData_TypeInfo, v47);
    sub_1B4CF90(&WarBoardSquareIndexData_SaveData_TypeInfo, v48);
    sub_1B4CF90(&HoldReinforcementsData_SaveData_TypeInfo, v49);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v50);
    this = (WarBoardData_o *)sub_1B4CF90(&WarBoardData_TypeInfo, v51);
    byte_49B89F4 = 1;
  }
  memset(&v191, 0, sizeof(v191));
  memset(&v190, 0, sizeof(v190));
  memset(&v189, 0, sizeof(v189));
  memset(&v188, 0, sizeof(v188));
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
    sub_1B4D1F4(this, onBoardSkillUpdate);
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
  this = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  v79 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_WarBoardEventData_SaveData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v79,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_WarBoardEventData_SaveData___ctor__);
  this = (WarBoardData_o *)v4->fields.listEvent;
  if ( !this )
    goto LABEL_129;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v187,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_WarBoardEventData__GetEnumerator__);
  v191 = v187;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v191,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__MoveNext__) )
  {
    current = v191.fields._current;
    v81 = (WarBoardEventData_SaveData_o *)sub_1B4D1DC(WarBoardEventData_SaveData_TypeInfo);
    WarBoardEventData_SaveData___ctor_36003976(v81, (WarBoardEventData_o *)current, 0LL);
    if ( !v79 )
      sub_1B4D1EC(v82, v83);
    items = v79->fields._items;
    v87 = Method_System_Collections_Generic_List_WarBoardEventData_SaveData__Add__;
    ++v79->fields._version;
    if ( !items )
      sub_1B4D1EC(v82, v83);
    size = v79->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v79,
        (Il2CppObject *)v81,
        *(const MethodInfo_35801DC **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
    }
    else
    {
      v89 = &items->obj.klass + size;
      v79->fields._size = size + 1;
      v89[4] = (Il2CppClass *)v81;
      sub_1B4CF34((CGThumbnailListItem_o *)(v89 + 4), (int32_t)v81, v84, v85);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v191,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__Dispose__);
  if ( !v79 )
    goto LABEL_129;
  v90 = *p_localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_object___ToArray(
                             v79,
                             (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_WarBoardEventData_SaveData__ToArray__);
  if ( !v90 )
    goto LABEL_129;
  v90->fields.localSaveData = (struct WarBoardData_WarBoardLocalSaveData_o *)this;
  sub_1B4CF34((CGThumbnailListItem_o *)&v90->fields.localSaveData, (int32_t)this, v91, v92);
  this = *p_localSaveData;
  if ( !*p_localSaveData )
    goto LABEL_129;
  this->fields._maxForceId_k__BackingField = v4->fields.winCondId;
  latestPieceActionSquareIndexes = (struct System_Collections_Generic_List_WarBoardUiData__o *)v4->fields.latestPieceActionSquareIndexes;
  this->fields.listUiData = latestPieceActionSquareIndexes;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.listUiData, (int32_t)latestPieceActionSquareIndexes, v93, v94);
  this = (WarBoardData_o *)v4->fields.localSaveData;
  if ( !this )
    goto LABEL_129;
  latestBattlePieceUniqueIndexes = v4->fields.latestBattlePieceUniqueIndexes;
  *(_QWORD *)&this->fields.isPlayedHalfDeadMessage = latestBattlePieceUniqueIndexes;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields.isPlayedHalfDeadMessage,
    (int32_t)latestBattlePieceUniqueIndexes,
    v96,
    v97);
  v99 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_WarBoardPrevCondData_SaveData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v99,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData___ctor__);
  this = (WarBoardData_o *)v4->fields.listPrevCond;
  if ( !this )
    goto LABEL_129;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v187,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__);
  v190 = v187;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v190,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__) )
  {
    v100 = v190.fields._current;
    v101 = (WarBoardPrevCondData_SaveData_o *)sub_1B4D1DC(WarBoardPrevCondData_SaveData_TypeInfo);
    WarBoardPrevCondData_SaveData___ctor_36004036(v101, (WarBoardPrevCondData_o *)v100, 0LL);
    if ( !v99 )
      sub_1B4D1EC(v102, v103);
    v106 = v99->fields._items;
    v107 = Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__Add__;
    ++v99->fields._version;
    if ( !v106 )
      sub_1B4D1EC(v102, v103);
    v108 = v99->fields._size;
    if ( (unsigned int)v108 >= v106->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v99,
        (Il2CppObject *)v101,
        *(const MethodInfo_35801DC **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
    }
    else
    {
      v109 = &v106->obj.klass + v108;
      v99->fields._size = v108 + 1;
      v109[4] = (Il2CppClass *)v101;
      sub_1B4CF34((CGThumbnailListItem_o *)(v109 + 4), (int32_t)v101, v104, v105);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v190,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__);
  if ( !v99 )
    goto LABEL_129;
  v110 = *p_localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_object___ToArray(
                             v99,
                             (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__ToArray__);
  if ( !v110 )
    goto LABEL_129;
  v110->fields.listEvent = (struct System_Collections_Generic_List_WarBoardEventData__o *)this;
  sub_1B4CF34((CGThumbnailListItem_o *)&v110->fields.listEvent, (int32_t)this, v111, v112);
  v113 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_HoldReinforcementsData_SaveData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v113,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData___ctor__);
  this = (WarBoardData_o *)v4->fields.reinforcementsSaveList;
  if ( !this )
    goto LABEL_129;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v187,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
  v189 = v187;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v189,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__) )
  {
    v114 = v189.fields._current;
    v115 = (HoldReinforcementsData_SaveData_o *)sub_1B4D1DC(HoldReinforcementsData_SaveData_TypeInfo);
    HoldReinforcementsData_SaveData___ctor_36004088(v115, (HoldReinforcementsData_o *)v114, 0LL);
    if ( !v113 )
      sub_1B4D1EC(v116, v117);
    v120 = v113->fields._items;
    v121 = Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__Add__;
    ++v113->fields._version;
    if ( !v120 )
      sub_1B4D1EC(v116, v117);
    v122 = v113->fields._size;
    if ( (unsigned int)v122 >= v120->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v113,
        (Il2CppObject *)v115,
        *(const MethodInfo_35801DC **)(*(_QWORD *)(v121[4] + 192LL) + 112LL));
    }
    else
    {
      v123 = &v120->obj.klass + v122;
      v113->fields._size = v122 + 1;
      v123[4] = (Il2CppClass *)v115;
      sub_1B4CF34((CGThumbnailListItem_o *)(v123 + 4), (int32_t)v115, v118, v119);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v189,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
  if ( !v113 )
    goto LABEL_129;
  v124 = *p_localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_object___ToArray(
                             v113,
                             (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__ToArray__);
  if ( !v124 )
    goto LABEL_129;
  *(_QWORD *)&v124->fields.winCondId = this;
  sub_1B4CF34((CGThumbnailListItem_o *)&v124->fields.winCondId, (int32_t)this, v125, v126);
  this = (WarBoardData_o *)v4->fields.playedStageReinforcementsList;
  if ( !this )
    goto LABEL_129;
  v127 = v4->fields.localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_int___ToArray(
                             (System_Collections_Generic_List_int__o *)this,
                             (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v127 )
    goto LABEL_129;
  v127->fields.playedReinforcements = (struct System_Int32_array *)this;
  sub_1B4CF34((CGThumbnailListItem_o *)&v127->fields.playedReinforcements, (int32_t)this, v128, v129);
  v130 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_WarBoardUiData_SaveData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v130,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_WarBoardUiData_SaveData___ctor__);
  this = (WarBoardData_o *)v4->fields.listUiData;
  if ( !this )
    goto LABEL_129;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v187,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__);
  v188 = v187;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v188,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__) )
  {
    v131 = v188.fields._current;
    v132 = (WarBoardUiData_SaveData_o *)sub_1B4D1DC(WarBoardUiData_SaveData_TypeInfo);
    WarBoardUiData_SaveData___ctor_36004148(v132, (WarBoardUiData_o *)v131, 0LL);
    if ( !v130 )
      sub_1B4D1EC(v133, v134);
    v137 = v130->fields._items;
    v138 = Method_System_Collections_Generic_List_WarBoardUiData_SaveData__Add__;
    ++v130->fields._version;
    if ( !v137 )
      sub_1B4D1EC(v133, v134);
    v139 = v130->fields._size;
    if ( (unsigned int)v139 >= v137->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v130,
        (Il2CppObject *)v132,
        *(const MethodInfo_35801DC **)(*(_QWORD *)(v138[4] + 192LL) + 112LL));
    }
    else
    {
      v140 = &v137->obj.klass + v139;
      v130->fields._size = v139 + 1;
      v140[4] = (Il2CppClass *)v132;
      sub_1B4CF34((CGThumbnailListItem_o *)(v140 + 4), (int32_t)v132, v135, v136);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v188,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__);
  if ( !v130 )
    goto LABEL_129;
  v141 = *p_localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_object___ToArray(
                             v130,
                             (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_WarBoardUiData_SaveData__ToArray__);
  if ( !v141
    || (v141->fields.latestBattlePieceUniqueIndexes = (struct System_UInt32_array *)this,
        sub_1B4CF34((CGThumbnailListItem_o *)&v141->fields.latestBattlePieceUniqueIndexes, (int32_t)this, v142, v143),
        (v144 = v4->fields.serverData) == 0LL)
    || (v145 = System_Linq_Enumerable__Count_object_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v144->fields.squareIndexInfo,
                 (const MethodInfo_2F1F018 *)Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___),
        v146 = *p_localSaveData,
        v147 = v145,
        this = (WarBoardData_o *)sub_1B4D038(WarBoardSquareIndexData_SaveData___TypeInfo, v145),
        !v146) )
  {
LABEL_129:
    sub_1B4D1EC(this, onBoardSkillUpdate);
  }
  v146->fields.reinforcementsSaveList = (struct System_Collections_Generic_List_HoldReinforcementsData__o *)this;
  sub_1B4CF34((CGThumbnailListItem_o *)&v146->fields.reinforcementsSaveList, (int32_t)this, v148, v149);
  if ( v147 >= 1 )
  {
    v150 = 0LL;
    v151 = (unsigned int)v147;
    v152 = 8LL;
    while ( *p_localSaveData )
    {
      v153 = v4->fields.serverData;
      if ( !v153 )
        break;
      squareIndexInfo = v153->fields.squareIndexInfo;
      if ( !squareIndexInfo )
        break;
      if ( v150 >= squareIndexInfo->max_length )
        goto LABEL_130;
      reinforcementsSaveList = (unsigned int *)(*p_localSaveData)->fields.reinforcementsSaveList;
      v156 = *(WarBoardSquareIndexData_o **)((char *)&squareIndexInfo->obj.klass + v152 * 4);
      v157 = (WarBoardSquareIndexData_SaveData_o *)sub_1B4D1DC(WarBoardSquareIndexData_SaveData_TypeInfo);
      WarBoardSquareIndexData_SaveData___ctor_36004228(v157, v156, 0LL);
      if ( !reinforcementsSaveList )
        break;
      if ( v157 )
      {
        this = (WarBoardData_o *)sub_1B4D0CC(v157, *(_QWORD *)(*(_QWORD *)reinforcementsSaveList + 64LL));
        if ( !this )
        {
LABEL_139:
          v186 = sub_1B4D210();
          sub_1B4D0B8(v186, 0LL);
        }
      }
      if ( v150 >= reinforcementsSaveList[6] )
        goto LABEL_130;
      *(_QWORD *)&reinforcementsSaveList[v152] = v157;
      sub_1B4CF34((CGThumbnailListItem_o *)&reinforcementsSaveList[v152], (int32_t)v157, v158, v159);
      ++v150;
      v152 += 2LL;
      if ( v151 == v150 )
        goto LABEL_106;
    }
    goto LABEL_129;
  }
LABEL_106:
  v160 = v4->fields.serverData;
  if ( !v160 )
    goto LABEL_129;
  v161 = System_Linq_Enumerable__Count_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v160->fields.bossBattleInfo,
           (const MethodInfo_2F1F018 *)Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___);
  v162 = *p_localSaveData;
  v163 = v161;
  this = (WarBoardData_o *)sub_1B4D038(WarBoardBossBattleData_SaveData___TypeInfo, v161);
  if ( !v162 )
    goto LABEL_129;
  v162->fields.playedStageReinforcementsList = (struct System_Collections_Generic_List_int__o *)this;
  sub_1B4CF34((CGThumbnailListItem_o *)&v162->fields.playedStageReinforcementsList, (int32_t)this, v164, v165);
  this = *p_localSaveData;
  if ( v163 >= 1 )
  {
    v168 = 0LL;
    v169 = (unsigned int)v163;
    v170 = 32LL;
    while ( this )
    {
      v171 = v4->fields.serverData;
      if ( !v171 )
        break;
      bossBattleInfo = v171->fields.bossBattleInfo;
      if ( !bossBattleInfo )
        break;
      if ( v168 >= bossBattleInfo->max_length )
        goto LABEL_130;
      playedStageReinforcementsList = this->fields.playedStageReinforcementsList;
      v174 = *(WarBoardBossBattleData_o **)((char *)&bossBattleInfo->obj.klass + v170);
      v175 = (WarBoardBossBattleData_SaveData_o *)sub_1B4D1DC(WarBoardBossBattleData_SaveData_TypeInfo);
      WarBoardBossBattleData_SaveData___ctor_35801036(v175, v174, v176);
      if ( !playedStageReinforcementsList )
        break;
      if ( v175 )
      {
        this = (WarBoardData_o *)sub_1B4D0CC(v175, playedStageReinforcementsList->klass->_1.element_class);
        if ( !this )
          goto LABEL_139;
      }
      if ( v168 >= (unsigned int)playedStageReinforcementsList->fields._size )
        goto LABEL_130;
      *(System_Collections_Generic_List_int__c **)((char *)&playedStageReinforcementsList->klass + v170) = (System_Collections_Generic_List_int__c *)v175;
      sub_1B4CF34((CGThumbnailListItem_o *)((char *)playedStageReinforcementsList + v170), (int32_t)v175, v177, v178);
      this = *p_localSaveData;
      ++v168;
      v170 += 8LL;
      if ( v169 == v168 )
        goto LABEL_119;
    }
    goto LABEL_129;
  }
LABEL_119:
  if ( !this )
    goto LABEL_129;
  bgAnimationInfo_k__BackingField = (struct System_Collections_Generic_List_WarBoardPrevCondData__o *)v4->fields._bgAnimationInfo_k__BackingField;
  this->fields.listPrevCond = bgAnimationInfo_k__BackingField;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.listPrevCond, (int32_t)bgAnimationInfo_k__BackingField, v166, v167);
  v180 = *p_localSaveData;
  if ( !*p_localSaveData )
    goto LABEL_129;
  v180->fields._CurrentMemberCount_k__BackingField = v4->fields._ContinueConsumeType_k__BackingField;
  LOBYTE(v180->fields._ContinueConsumeType_k__BackingField) = v4->fields._IsContinue_k__BackingField;
  BYTE1(v180->fields._ContinueConsumeType_k__BackingField) = v4->fields._IsNextTurn_k__BackingField;
  v180->fields._CurrentPartyCost_k__BackingField = v4->fields.localSaveTiming;
  v181 = (MiniMessagePack_MiniMessagePacker_o *)sub_1B4D1DC(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v181, 0LL);
  if ( !v181 )
    goto LABEL_129;
  v182 = MiniMessagePack_MiniMessagePacker__PackClass(v181, (Il2CppObject *)*p_localSaveData, 0LL);
  v183 = WarBoardData_TypeInfo;
  if ( !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    v183 = WarBoardData_TypeInfo;
  }
  WARBOARDDATA_SAVEDATA_KEY = v183->static_fields->WARBOARDDATA_SAVEDATA_KEY;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v185 = System_Convert__ToBase64String(v182, 0LL);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SetString(WARBOARDDATA_SAVEDATA_KEY, v185, 0LL);
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
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x8
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49B8A3E & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_Any_HoldReinforcementsData___, *(_QWORD *)&stageReinforcementsId);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__get_Current__, v9);
    sub_1B4CF90(&System_Func_HoldReinforcementsData__bool__TypeInfo, v10);
    sub_1B4CF90(&HoldReinforcementsData_TypeInfo, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_HoldReinforcementsData__Add__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__, v13);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass187_0__SaveHoldReinforcements_b__0__, v14);
    sub_1B4CF90(&WarBoardData___c__DisplayClass187_0_TypeInfo, v15);
    byte_49B8A3E = 1;
  }
  memset(&v33, 0, sizeof(v33));
  v16 = (WarBoardData___c__DisplayClass187_0_o *)sub_1B4D1DC(WarBoardData___c__DisplayClass187_0_TypeInfo);
  WarBoardData___c__DisplayClass187_0___ctor(v16, 0LL);
  if ( !v16 )
    goto LABEL_20;
  v16->fields.stageReinforcementsId = stageReinforcementsId;
  v16->fields.index = index;
  reinforcementsSaveList = (System_Collections_Generic_List_T__o *)this->fields.reinforcementsSaveList;
  v20 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_HoldReinforcementsData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v20,
    (Il2CppObject *)v16,
    Method_WarBoardData___c__DisplayClass187_0__SaveHoldReinforcements_b__0__,
    0LL);
  if ( !BasicHelper__Any_object_(
          reinforcementsSaveList,
          (System_Func_T__bool__o *)v20,
          (const MethodInfo_2EEC494 *)Method_BasicHelper_Any_HoldReinforcementsData___) )
  {
    v23 = v16->fields.stageReinforcementsId;
    v24 = v16->fields.index;
    v25 = (HoldReinforcementsData_o *)sub_1B4D1DC(HoldReinforcementsData_TypeInfo);
    HoldReinforcementsData___ctor_36040580(v25, v23, v24, 1, 0LL);
    v17 = (System_Collections_Generic_List_object__o *)this->fields.reinforcementsSaveList;
    if ( v17 )
    {
      items = v17->fields._items;
      v29 = Method_System_Collections_Generic_List_HoldReinforcementsData__Add__;
      ++v17->fields._version;
      if ( items )
      {
        size = v17->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v17,
            (Il2CppObject *)v25,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = &items->obj.klass + size;
          v17->fields._size = size + 1;
          v31[4] = (Il2CppClass *)v25;
          sub_1B4CF34((CGThumbnailListItem_o *)(v31 + 4), (int32_t)v25, v26, v27);
        }
        return;
      }
    }
LABEL_20:
    sub_1B4D1EC(v17, v18);
  }
  v17 = (System_Collections_Generic_List_object__o *)this->fields.reinforcementsSaveList;
  if ( !v17 )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    v17,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
  v33 = v32;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__);
    if ( !v21 )
      break;
    if ( !v33.fields._current )
      sub_1B4D1EC(v21, v22);
    if ( LODWORD(v33.fields._current[1].klass) == v16->fields.stageReinforcementsId
      && HIDWORD(v33.fields._current[1].klass) == v16->fields.index )
    {
      HoldReinforcementsData__IncreaseHoldNum((HoldReinforcementsData_o *)v33.fields._current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
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

  if ( (byte_49B8A3C & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&stageReinforcementsId);
    byte_49B8A3C = 1;
  }
  playedStageReinforcementsList = this->fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList
    || (items = playedStageReinforcementsList->fields._items,
        v7 = Method_System_Collections_Generic_List_int__Add__,
        ++playedStageReinforcementsList->fields._version,
        !items) )
  {
    sub_1B4D1EC(playedStageReinforcementsList, *(_QWORD *)&stageReinforcementsId);
  }
  size = playedStageReinforcementsList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      playedStageReinforcementsList,
      stageReinforcementsId,
      *(const MethodInfo_35631B8 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
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
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Func_object__bool__o *v30; // x25
  System_Collections_Generic_List_object__o *v31; // x24
  int32_t v32; // w26
  WarBoardData_SquareRangeSearch_o *v33; // x25
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  struct System_Int32_array *linkedSquares; // x8
  __int64 v41; // x8
  unsigned __int64 v42; // x28
  __int64 v43; // x29
  __int64 v44; // x24
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  __int64 v47; // x23
  struct System_Int32_array *v48; // x8
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *v49; // x25
  System_Func_object__bool__o *v50; // x26
  const MethodInfo *v51; // x4
  System_Collections_Generic_List_T__o *v52; // x25
  System_Func_object__bool__o *v53; // x26
  struct System_Int32_array *v54; // x8

  if ( (byte_49B8A15 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_Any_WarBoardData_SquareRangeSearch___, *(_QWORD *)&start);
    sub_1B4CF90(&Method_System_Linq_Enumerable_All_WarBoardData_SquareRangeSearch___, v8);
    sub_1B4CF90(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardData_SquareRangeSearch___, v9);
    sub_1B4CF90(&System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch__Add__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch___ctor__, v12);
    sub_1B4CF90(&System_Collections_Generic_List_WarBoardData_SquareRangeSearch__TypeInfo, v13);
    sub_1B4CF90(&WarBoardData_SquareRangeSearch_TypeInfo, v14);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass125_0__SearchInRangeSquares_b__0__, v15);
    sub_1B4CF90(&WarBoardData___c__DisplayClass125_0_TypeInfo, v16);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__1__, v17);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__2__, v18);
    sub_1B4CF90(&WarBoardData___c__DisplayClass125_1_TypeInfo, v19);
    byte_49B8A15 = 1;
  }
  v20 = (WarBoardData___c__DisplayClass125_0_o *)sub_1B4D1DC(WarBoardData___c__DisplayClass125_0_TypeInfo);
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
      v27 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_WarBoardData_SquareRangeSearch__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v27,
        (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch___ctor__);
      *rangeSearches = (System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *)v27;
      sub_1B4CF34((CGThumbnailListItem_o *)rangeSearches, (int32_t)v27, v28, v29);
      v25 = *rangeSearches;
    }
    v30 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v30,
      (Il2CppObject *)v20,
      Method_WarBoardData___c__DisplayClass125_0__SearchInRangeSquares_b__0__,
      0LL);
    v21 = System_Linq_Enumerable__FirstOrDefault_object__49446844(
            (System_Collections_Generic_IEnumerable_TSource__o *)v25,
            (System_Func_TSource__bool__o *)v30,
            (const MethodInfo_2F27FBC *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardData_SquareRangeSearch___);
    if ( v21 )
    {
      HIDWORD(v21[1].klass) = range;
    }
    else
    {
      v31 = (System_Collections_Generic_List_object__o *)*rangeSearches;
      v32 = v20->fields.start;
      v33 = (WarBoardData_SquareRangeSearch_o *)sub_1B4D1DC(WarBoardData_SquareRangeSearch_TypeInfo);
      WarBoardData_SquareRangeSearch___ctor(v33, v32, range, 0LL);
      if ( !v31 )
        goto LABEL_29;
      items = v31->fields._items;
      v37 = Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch__Add__;
      ++v31->fields._version;
      if ( !items )
        goto LABEL_29;
      size = v31->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v31,
          (Il2CppObject *)v33,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        v31->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v33;
        sub_1B4CF34((CGThumbnailListItem_o *)(v39 + 4), (int32_t)v33, v34, v35);
      }
    }
    v20->fields.nextRange = range - 1;
    if ( range - 1 >= 0 )
    {
      linkedSquares = v26->fields.linkedSquares;
      if ( !linkedSquares )
        goto LABEL_29;
      v41 = *(_QWORD *)&linkedSquares->max_length;
      if ( (int)v41 >= 1 )
      {
        v42 = 0LL;
        v43 = (unsigned int)v41;
        while ( 1 )
        {
          v44 = sub_1B4D1DC(WarBoardData___c__DisplayClass125_1_TypeInfo);
          WarBoardData___c__DisplayClass125_1___ctor((WarBoardData___c__DisplayClass125_1_o *)v44, 0LL);
          if ( !v44 )
            break;
          *(_QWORD *)(v44 + 24) = v20;
          v47 = v44 + 24;
          sub_1B4CF34((CGThumbnailListItem_o *)(v44 + 24), (int32_t)v20, v45, v46);
          v48 = v26->fields.linkedSquares;
          if ( !v48 )
            break;
          if ( v42 >= v48->max_length )
            goto LABEL_30;
          *(_DWORD *)(v44 + 16) = v48->m_Items[v42 + 1];
          v49 = *rangeSearches;
          v50 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v50,
            (Il2CppObject *)v44,
            Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__1__,
            0LL);
          v21 = (Il2CppObject *)System_Linq_Enumerable__All_object_(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)v49,
                                  (System_Func_TSource__bool__o *)v50,
                                  (const MethodInfo_2F0E080 *)Method_System_Linq_Enumerable_All_WarBoardData_SquareRangeSearch___);
          if ( ((unsigned __int8)v21 & 1) != 0
            || (v52 = (System_Collections_Generic_List_T__o *)*rangeSearches,
                v53 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo),
                System_Func_object__bool____ctor(
                  v53,
                  (Il2CppObject *)v44,
                  Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__2__,
                  0LL),
                v21 = (Il2CppObject *)BasicHelper__Any_object_(
                                        v52,
                                        (System_Func_T__bool__o *)v53,
                                        (const MethodInfo_2EEC494 *)Method_BasicHelper_Any_WarBoardData_SquareRangeSearch___),
                ((unsigned __int8)v21 & 1) != 0) )
          {
            v54 = v26->fields.linkedSquares;
            if ( !v54 )
              break;
            if ( v42 >= v54->max_length )
LABEL_30:
              sub_1B4D1F4(v21, v22);
            if ( !*(_QWORD *)v47 )
              break;
            WarBoardData__SearchInRangeSquares(
              this,
              v54->m_Items[v42 + 1],
              *(_DWORD *)(*(_QWORD *)v47 + 20LL),
              rangeSearches,
              v51);
          }
          if ( v43 == ++v42 )
            return;
        }
LABEL_29:
        sub_1B4D1EC(v21, v22);
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
  WarBoardPieceData_o *Piece_35764928; // x0
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
  if ( (byte_49B8A16 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_HashSet_int__Add__, *(_QWORD *)&destination);
    sub_1B4CF90(&Method_System_Collections_Generic_HashSet_int__Contains__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_HashSet_int___ctor__, v10);
    sub_1B4CF90(&System_Collections_Generic_HashSet_int__TypeInfo, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_Queue_int__Contains__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_Queue_int__Dequeue__, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_Queue_int__Enqueue__, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_Queue_int___ctor__, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_Queue_int__get_Count__, v16);
    sub_1B4CF90(&System_Collections_Generic_Queue_int__TypeInfo, v17);
    byte_49B8A16 = 1;
  }
  if ( v7 != current )
  {
    v18 = (System_Collections_Generic_Queue_int__o *)sub_1B4D1DC(System_Collections_Generic_Queue_int__TypeInfo);
    System_Collections_Generic_Queue_int____ctor(
      v18,
      (const MethodInfo_36EC7E8 *)Method_System_Collections_Generic_Queue_int___ctor__);
    if ( !v18 )
LABEL_24:
      sub_1B4D1EC(Piece_35764928, v20);
    System_Collections_Generic_Queue_int___Enqueue(
      v18,
      v7,
      (const MethodInfo_36ECD60 *)Method_System_Collections_Generic_Queue_int__Enqueue__);
    v21 = (System_Collections_Generic_HashSet_int__o *)sub_1B4D1DC(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v21,
      (const MethodInfo_343E3DC *)Method_System_Collections_Generic_HashSet_int___ctor__);
    if ( v18->fields._size >= 1 )
    {
      do
      {
        v7 = System_Collections_Generic_Queue_int___Dequeue(
               v18,
               (const MethodInfo_36ECEDC *)Method_System_Collections_Generic_Queue_int__Dequeue__);
        Square = WarBoardData__GetSquare(this, v7, v22);
        if ( !Square )
          break;
        v25 = Square;
        Piece_35764928 = WarBoardData__GetPiece_35764928(this, v7, v24);
        if ( !Piece_35764928 )
          return v7;
        if ( !checkReplaceFunc )
          goto LABEL_24;
        v26 = Piece_35764928;
        Piece_35764928 = (WarBoardPieceData_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, WarBoardPieceData_o *, _QWORD))checkReplaceFunc->fields.m_target)(
                                                  checkReplaceFunc->fields.original_method_info,
                                                  Piece_35764928,
                                                  *(_QWORD *)&checkReplaceFunc->fields.extra_arg);
        if ( ((unsigned __int8)Piece_35764928 & 1) != 0 )
        {
          WarBoardPieceData__SetSquareIndex(v26, -1, 0LL);
          return v7;
        }
        if ( !v21 )
          goto LABEL_24;
        Piece_35764928 = (WarBoardPieceData_o *)System_Collections_Generic_HashSet_int___Add(
                                                  v21,
                                                  v7,
                                                  (const MethodInfo_343F5E0 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
              sub_1B4D1F4(Piece_35764928, v20);
            v30 = linkedSquares->m_Items[v29 + 1];
            Piece_35764928 = (WarBoardPieceData_o *)System_Collections_Generic_HashSet_int___Contains(
                                                      v21,
                                                      v30,
                                                      (const MethodInfo_343EAD0 *)Method_System_Collections_Generic_HashSet_int__Contains__);
            if ( ((unsigned __int8)Piece_35764928 & 1) == 0 )
            {
              Piece_35764928 = (WarBoardPieceData_o *)System_Collections_Generic_Queue_int___Contains(
                                                        v18,
                                                        v30,
                                                        (const MethodInfo_36ED060 *)Method_System_Collections_Generic_Queue_int__Contains__);
              if ( ((unsigned __int8)Piece_35764928 & 1) == 0 )
                System_Collections_Generic_Queue_int___Enqueue(
                  v18,
                  v30,
                  (const MethodInfo_36ECD60 *)Method_System_Collections_Generic_Queue_int__Enqueue__);
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

  if ( (byte_49B8A49 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, objectName);
    byte_49B8A49 = 1;
  }
  bgAnimationInfo_k__BackingField = this->fields._bgAnimationInfo_k__BackingField;
  if ( !bgAnimationInfo_k__BackingField )
    sub_1B4D1EC(0LL, objectName);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)bgAnimationInfo_k__BackingField,
    (Il2CppObject *)objectName,
    (Il2CppObject *)animName,
    (const MethodInfo_3257B04 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
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
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  System_Object_array *v32; // x0
  WarBoardData___c_c *v33; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x20
  System_Func_object__object__o *_9__82_1; // x21
  Il2CppObject *v36; // x22
  struct WarBoardData___c_StaticFields *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  System_Collections_Generic_IEnumerable_T__o *v40; // x0
  System_Collections_Generic_IEnumerable_T__o *v41; // x0
  System_Object_array *v42; // x0
  WarBoardData___c_c *v43; // x8
  BattleServantData_array *v44; // x21
  System_Func_object__bool__o *_9__82_2; // x22
  Il2CppObject *v46; // x23
  struct WarBoardData___c_StaticFields *v47; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  WarBoardData___c_c *v51; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x22
  System_Func_object__int__o *_9__82_3; // x23
  Il2CppObject *v54; // x24
  struct WarBoardData___c_StaticFields *v55; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  System_Collections_Generic_IEnumerable_T__o *v58; // x23
  System_Collections_Generic_HashSet_int__o *v59; // x22
  Il2CppObject *Instance; // x0
  __int64 v61; // x1
  WarBoardData___c_c *v62; // x0
  System_Action_object__o *_9__82_4; // x21
  Il2CppObject *v64; // x22
  struct WarBoardData___c_StaticFields *v65; // x0
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  struct WarBoardItemData_array *items; // x19
  int max_length; // w8
  unsigned int v70; // w20

  if ( (byte_49B89F8 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_WarBoardPieceData__TypeInfo, method);
    sub_1B4CF90(&Method_BasicHelper_ExcludeNull_BattleServantData___, v3);
    sub_1B4CF90(&Method_BasicHelper_ForEach_WarBoardPieceData___, v4);
    sub_1B4CF90(&Method_System_Linq_Enumerable_OrderBy_WarBoardPieceData__int___, v5);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__BattleServantData___, v6);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___, v7);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_BattleServantData___, v8);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, v9);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v10);
    sub_1B4CF90(&System_Func_WarBoardPieceData__BattleServantData__TypeInfo, v11);
    sub_1B4CF90(&System_Func_WarBoardPieceData__int__TypeInfo, v12);
    sub_1B4CF90(&System_Func_WarBoardPieceData__bool__TypeInfo, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_HashSet_int___ctor___75423184, v14);
    sub_1B4CF90(&System_Collections_Generic_HashSet_int__TypeInfo, v15);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v16);
    sub_1B4CF90(&Method_WarBoardData___c__SetContinue_b__82_0__, v17);
    sub_1B4CF90(&Method_WarBoardData___c__SetContinue_b__82_1__, v18);
    sub_1B4CF90(&Method_WarBoardData___c__SetContinue_b__82_2__, v19);
    sub_1B4CF90(&Method_WarBoardData___c__SetContinue_b__82_3__, v20);
    sub_1B4CF90(&Method_WarBoardData___c__SetContinue_b__82_4__, v21);
    sub_1B4CF90(&WarBoardData___c_TypeInfo, v22);
    byte_49B89F8 = 1;
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
    _9__82_0 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_WarBoardPieceData__int__TypeInfo);
    System_Func_object__int____ctor(_9__82_0, v27, Method_WarBoardData___c__SetContinue_b__82_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__82_0 = (struct System_Func_WarBoardPieceData__int__o *)_9__82_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__82_0, (int32_t)_9__82_0, v29, v30);
  }
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v25,
                                                               (System_Func_TSource__TKey__o *)_9__82_0,
                                                               (const MethodInfo_2F2DB00 *)Method_System_Linq_Enumerable_OrderBy_WarBoardPieceData__int___);
  v32 = System_Linq_Enumerable__ToArray_object_(
          v31,
          (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
  v33 = WarBoardData___c_TypeInfo;
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)v32;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v33 = WarBoardData___c_TypeInfo;
  }
  _9__82_1 = (System_Func_object__object__o *)v33->static_fields->__9__82_1;
  if ( !_9__82_1 )
  {
    if ( !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      v33 = WarBoardData___c_TypeInfo;
    }
    v36 = (Il2CppObject *)v33->static_fields->__9;
    _9__82_1 = (System_Func_object__object__o *)sub_1B4D1DC(System_Func_WarBoardPieceData__BattleServantData__TypeInfo);
    System_Func_object__object____ctor(_9__82_1, v36, Method_WarBoardData___c__SetContinue_b__82_1__, 0LL);
    v37 = WarBoardData___c_TypeInfo->static_fields;
    v37->__9__82_1 = (struct System_Func_WarBoardPieceData__BattleServantData__o *)_9__82_1;
    sub_1B4CF34((CGThumbnailListItem_o *)&v37->__9__82_1, (int32_t)_9__82_1, v38, v39);
  }
  v40 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                         v34,
                                                         (System_Func_TSource__TResult__o *)_9__82_1,
                                                         (const MethodInfo_2F341B8 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__BattleServantData___);
  v41 = BasicHelper__ExcludeNull_object_(
          v40,
          (const MethodInfo_2EECDE8 *)Method_BasicHelper_ExcludeNull_BattleServantData___);
  v42 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v41,
          (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  v43 = WarBoardData___c_TypeInfo;
  v44 = (BattleServantData_array *)v42;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v43 = WarBoardData___c_TypeInfo;
  }
  _9__82_2 = (System_Func_object__bool__o *)v43->static_fields->__9__82_2;
  if ( !_9__82_2 )
  {
    if ( !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43);
      v43 = WarBoardData___c_TypeInfo;
    }
    v46 = (Il2CppObject *)v43->static_fields->__9;
    _9__82_2 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__82_2, v46, Method_WarBoardData___c__SetContinue_b__82_2__, 0LL);
    v47 = WarBoardData___c_TypeInfo->static_fields;
    v47->__9__82_2 = (struct System_Func_WarBoardPieceData__bool__o *)_9__82_2;
    sub_1B4CF34((CGThumbnailListItem_o *)&v47->__9__82_2, (int32_t)_9__82_2, v48, v49);
  }
  v50 = System_Linq_Enumerable__Where_object_(
          v34,
          (System_Func_TSource__bool__o *)_9__82_2,
          (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  v51 = WarBoardData___c_TypeInfo;
  v52 = v50;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v51 = WarBoardData___c_TypeInfo;
  }
  _9__82_3 = (System_Func_object__int__o *)v51->static_fields->__9__82_3;
  if ( !_9__82_3 )
  {
    if ( !v51->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v51);
      v51 = WarBoardData___c_TypeInfo;
    }
    v54 = (Il2CppObject *)v51->static_fields->__9;
    _9__82_3 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_WarBoardPieceData__int__TypeInfo);
    System_Func_object__int____ctor(_9__82_3, v54, Method_WarBoardData___c__SetContinue_b__82_3__, 0LL);
    v55 = WarBoardData___c_TypeInfo->static_fields;
    v55->__9__82_3 = (struct System_Func_WarBoardPieceData__int__o *)_9__82_3;
    sub_1B4CF34((CGThumbnailListItem_o *)&v55->__9__82_3, (int32_t)_9__82_3, v56, v57);
  }
  v58 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                         v52,
                                                         (System_Func_TSource__TResult__o *)_9__82_3,
                                                         (const MethodInfo_2F338DC *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___);
  v59 = (System_Collections_Generic_HashSet_int__o *)sub_1B4D1DC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_54781132(
    v59,
    v58,
    (const MethodInfo_343E4CC *)Method_System_Collections_Generic_HashSet_int___ctor___75423184);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (Il2CppObject *)Instance[36].monitor;
  if ( !Instance )
    goto LABEL_42;
  BattleData__ProcContinue((BattleData_o *)Instance, v44, v59, 0LL);
  v62 = WarBoardData___c_TypeInfo;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v62 = WarBoardData___c_TypeInfo;
  }
  _9__82_4 = (System_Action_object__o *)v62->static_fields->__9__82_4;
  if ( !_9__82_4 )
  {
    if ( !v62->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v62);
      v62 = WarBoardData___c_TypeInfo;
    }
    v64 = (Il2CppObject *)v62->static_fields->__9;
    _9__82_4 = (System_Action_object__o *)sub_1B4D1DC(System_Action_WarBoardPieceData__TypeInfo);
    System_Action_object____ctor(_9__82_4, v64, Method_WarBoardData___c__SetContinue_b__82_4__, 0LL);
    v65 = WarBoardData___c_TypeInfo->static_fields;
    v65->__9__82_4 = (struct System_Action_WarBoardPieceData__o *)_9__82_4;
    sub_1B4CF34((CGThumbnailListItem_o *)&v65->__9__82_4, (int32_t)_9__82_4, v66, v67);
  }
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)v34,
    (System_Action_T__o *)_9__82_4,
    (const MethodInfo_2EEE790 *)Method_BasicHelper_ForEach_WarBoardPieceData___);
  items = this->fields.items;
  if ( !items )
    goto LABEL_42;
  max_length = items->max_length;
  if ( max_length >= 1 )
  {
    v70 = 0;
    while ( 1 )
    {
      if ( v70 >= max_length )
        sub_1B4D1F4(Instance, v61);
      Instance = (Il2CppObject *)items->m_Items[v70];
      if ( !Instance )
        break;
      WarBoardItemData__ResetItem((WarBoardItemData_o *)Instance, 0LL);
      max_length = items->max_length;
      if ( (int)++v70 >= max_length )
        return;
    }
LABEL_42:
    sub_1B4D1EC(Instance, v61);
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
  const MethodInfo *v14; // x3
  Il2CppObject *object; // x0

  if ( (byte_49B8A21 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Array_Find_WarBoardPieceData___, userEquipId);
    sub_1B4CF90(&System_Predicate_WarBoardPieceData__TypeInfo, v5);
    sub_1B4CF90(&Method_WarBoardData___c__SetPlayerMasterUserEquip_b__144_0__, v6);
    sub_1B4CF90(&WarBoardData___c_TypeInfo, v7);
    byte_49B8A21 = 1;
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
    _9__144_0 = (System_Predicate_object__o *)sub_1B4D1DC(System_Predicate_WarBoardPieceData__TypeInfo);
    System_Predicate_object____ctor(_9__144_0, v11, Method_WarBoardData___c__SetPlayerMasterUserEquip_b__144_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__144_0 = (struct System_Predicate_WarBoardPieceData__o *)_9__144_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__144_0, (int32_t)_9__144_0, v13, v14);
  }
  object = System_Array__Find_object_(
             pieces,
             (System_Predicate_T__o *)_9__144_0,
             (const MethodInfo_2FF935C *)Method_System_Array_Find_WarBoardPieceData___);
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
  const MethodInfo *v33; // x3
  Il2CppObject *v34; // x0
  __int64 v35; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  Il2CppObject *p_obj; // x21
  System_Byte_array *v38; // x21
  System_Byte_array *v39; // x21
  System_String_o *v40; // x0
  struct WarBoardDataEntity_o *v41; // x8
  Il2CppObject *v42; // x0
  System_Byte_array *v43; // x0
  System_Byte_array *v44; // x0
  System_String_o *v45; // x0
  System_Collections_Generic_IEnumerable_TSource__o *items; // x23
  WarBoardData___c_c *v47; // x0
  System_String_o *v48; // x22
  System_String_o *v49; // x21
  System_Func_object__object__o *_9__156_1; // x24
  System_Byte_array *v51; // x21
  System_Byte_array *v52; // x0
  System_Convert_c *v53; // x8
  System_Byte_array *v54; // x21
  Il2CppObject *v55; // x25
  struct WarBoardData___c_StaticFields *v56; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v59; // x0
  WarBoardData___c_c *v60; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x23
  System_Func_object__bool__o *_9__156_2; // x24
  Il2CppObject *v63; // x25
  struct WarBoardData___c_StaticFields *v64; // x0
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v67; // x0
  System_String_array *v68; // x0
  Il2CppObject *v69; // x0
  Il2CppObject *v70; // x0
  System_Byte_array *v71; // x21
  System_Byte_array *v72; // x0
  System_String_o *v73; // x0
  struct WarBoardDataEntity_o *v74; // x8
  Il2CppObject *v75; // x21
  Il2CppObject *v76; // x0
  System_Byte_array *v77; // x21
  System_Byte_array *v78; // x21
  System_String_o *v79; // x0
  struct WarBoardDataEntity_o *v80; // x8
  Il2CppObject *v81; // x0
  System_Byte_array *v82; // x0
  System_Byte_array *v83; // x0
  System_String_o *v84; // x0
  struct WarBoardDataEntity_o *v85; // x8
  Il2CppObject *v86; // x0
  System_Byte_array *v87; // x0
  System_Byte_array *v88; // x0
  System_String_o *v89; // x2

  if ( (byte_49B8A2A & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_WarBoardPieceData__TypeInfo, request);
    sub_1B4CF90(&Method_BasicHelper_ForEach_WarBoardPieceData___, v5);
    sub_1B4CF90(&CatAndMouseGame_TypeInfo, v6);
    sub_1B4CF90(&System_Convert_TypeInfo, v7);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_WarBoardItemData__string___, v8);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_string___, v9);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_string___, v10);
    sub_1B4CF90(&System_Func_WarBoardItemData__string__TypeInfo, v11);
    sub_1B4CF90(&System_Func_string__bool__TypeInfo, v12);
    sub_1B4CF90(&JsonManager_TypeInfo, v13);
    sub_1B4CF90(&Method_WarBoardData___c__SetRequest_b__156_0__, v14);
    sub_1B4CF90(&Method_WarBoardData___c__SetRequest_b__156_1__, v15);
    sub_1B4CF90(&Method_WarBoardData___c__SetRequest_b__156_2__, v16);
    sub_1B4CF90(&WarBoardData___c_TypeInfo, v17);
    sub_1B4CF90(&StringLiteral_17063/*"bossBattleInfo"*/, v18);
    sub_1B4CF90(&StringLiteral_23426/*"svtInfo"*/, v19);
    sub_1B4CF90(&StringLiteral_21021/*"masterInfo"*/, v20);
    sub_1B4CF90(&StringLiteral_24318/*"wallInfo"*/, v21);
    sub_1B4CF90(&StringLiteral_21900/*"null"*/, v22);
    sub_1B4CF90(&StringLiteral_23183/*"squareIndexInfo"*/, v23);
    sub_1B4CF90(&StringLiteral_19452/*"getItemInfo"*/, v24);
    sub_1B4CF90(&StringLiteral_816/*","*/, v25);
    sub_1B4CF90(&StringLiteral_15719/*"[{0}]"*/, v26);
    byte_49B8A2A = 1;
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
    _9__156_0 = (System_Action_object__o *)sub_1B4D1DC(System_Action_WarBoardPieceData__TypeInfo);
    System_Action_object____ctor(_9__156_0, v30, Method_WarBoardData___c__SetRequest_b__156_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__156_0 = (struct System_Action_WarBoardPieceData__o *)_9__156_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__156_0, (int32_t)_9__156_0, v32, v33);
  }
  BasicHelper__ForEach_object_(
    pieces,
    (System_Action_T__o *)_9__156_0,
    (const MethodInfo_2EEE790 *)Method_BasicHelper_ForEach_WarBoardPieceData___);
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_51;
  p_obj = &serverData->fields.svtInfo->obj;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v34 = (Il2CppObject *)JsonManager__toJson(p_obj, 0, 0, 0LL);
  if ( !request )
    goto LABEL_51;
  v38 = RequestBase__PackToMessagePack(request, v34, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v39 = CatAndMouseGame__CatGame5Bytes(v38, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v40 = System_Convert__ToBase64String(v39, 0LL);
  RequestBase__addField_41748396(request, (System_String_o *)StringLiteral_23426/*"svtInfo"*/, v40, 0LL);
  v41 = this->fields.serverData;
  if ( !v41
    || (v42 = (Il2CppObject *)JsonManager__toJson(&v41->fields.masterInfo->obj, 0, 0, 0LL),
        v43 = RequestBase__PackToMessagePack(request, v42, 0LL),
        v44 = CatAndMouseGame__CatGame5Bytes(v43, 0LL),
        v45 = System_Convert__ToBase64String(v44, 0LL),
        RequestBase__addField_41748396(request, (System_String_o *)StringLiteral_21021/*"masterInfo"*/, v45, 0LL),
        (items = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.items) == 0LL) )
  {
LABEL_51:
    sub_1B4D1EC(v34, v35);
  }
  if ( items[1].monitor )
  {
    v47 = WarBoardData___c_TypeInfo;
    if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
      v47 = WarBoardData___c_TypeInfo;
    }
    v48 = (System_String_o *)StringLiteral_816/*","*/;
    v49 = (System_String_o *)StringLiteral_15719/*"[{0}]"*/;
    _9__156_1 = (System_Func_object__object__o *)v47->static_fields->__9__156_1;
    if ( !_9__156_1 )
    {
      if ( !v47->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v47);
        v47 = WarBoardData___c_TypeInfo;
      }
      v55 = (Il2CppObject *)v47->static_fields->__9;
      _9__156_1 = (System_Func_object__object__o *)sub_1B4D1DC(System_Func_WarBoardItemData__string__TypeInfo);
      System_Func_object__object____ctor(_9__156_1, v55, Method_WarBoardData___c__SetRequest_b__156_1__, 0LL);
      v56 = WarBoardData___c_TypeInfo->static_fields;
      v56->__9__156_1 = (struct System_Func_WarBoardItemData__string__o *)_9__156_1;
      sub_1B4CF34((CGThumbnailListItem_o *)&v56->__9__156_1, (int32_t)_9__156_1, v57, v58);
    }
    v59 = System_Linq_Enumerable__Select_object__object_(
            items,
            (System_Func_TSource__TResult__o *)_9__156_1,
            (const MethodInfo_2F341B8 *)Method_System_Linq_Enumerable_Select_WarBoardItemData__string___);
    v60 = WarBoardData___c_TypeInfo;
    v61 = (System_Collections_Generic_IEnumerable_TSource__o *)v59;
    if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
      v60 = WarBoardData___c_TypeInfo;
    }
    _9__156_2 = (System_Func_object__bool__o *)v60->static_fields->__9__156_2;
    if ( !_9__156_2 )
    {
      if ( !v60->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v60);
        v60 = WarBoardData___c_TypeInfo;
      }
      v63 = (Il2CppObject *)v60->static_fields->__9;
      _9__156_2 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_string__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__156_2, v63, Method_WarBoardData___c__SetRequest_b__156_2__, 0LL);
      v64 = WarBoardData___c_TypeInfo->static_fields;
      v64->__9__156_2 = (struct System_Func_string__bool__o *)_9__156_2;
      sub_1B4CF34((CGThumbnailListItem_o *)&v64->__9__156_2, (int32_t)_9__156_2, v65, v66);
    }
    v67 = System_Linq_Enumerable__Where_object_(
            v61,
            (System_Func_TSource__bool__o *)_9__156_2,
            (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_string___);
    v68 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                   v67,
                                   (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_string___);
    v69 = (Il2CppObject *)System_String__Join(v48, v68, 0LL);
    v70 = (Il2CppObject *)System_String__Format(v49, v69, 0LL);
    v71 = RequestBase__PackToMessagePack(request, v70, 0LL);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v72 = CatAndMouseGame__CatGame5Bytes(v71, 0LL);
    v53 = System_Convert_TypeInfo;
    v54 = v72;
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
LABEL_40:
      j_il2cpp_runtime_class_init_0(v53);
  }
  else
  {
    v51 = RequestBase__PackToMessagePack(request, (Il2CppObject *)StringLiteral_21900/*"null"*/, 0LL);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v52 = CatAndMouseGame__CatGame5Bytes(v51, 0LL);
    v53 = System_Convert_TypeInfo;
    v54 = v52;
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      goto LABEL_40;
  }
  v73 = System_Convert__ToBase64String(v54, 0LL);
  RequestBase__addField_41748396(request, (System_String_o *)StringLiteral_19452/*"getItemInfo"*/, v73, 0LL);
  v74 = this->fields.serverData;
  if ( !v74 )
    goto LABEL_51;
  v75 = &v74->fields.wallInfo->obj;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v76 = (Il2CppObject *)JsonManager__toJson(v75, 0, 0, 0LL);
  v77 = RequestBase__PackToMessagePack(request, v76, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v78 = CatAndMouseGame__CatGame5Bytes(v77, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v79 = System_Convert__ToBase64String(v78, 0LL);
  RequestBase__addField_41748396(request, (System_String_o *)StringLiteral_24318/*"wallInfo"*/, v79, 0LL);
  v80 = this->fields.serverData;
  if ( !v80 )
    goto LABEL_51;
  v81 = (Il2CppObject *)JsonManager__toJson(&v80->fields.squareIndexInfo->obj, 0, 0, 0LL);
  v82 = RequestBase__PackToMessagePack(request, v81, 0LL);
  v83 = CatAndMouseGame__CatGame5Bytes(v82, 0LL);
  v84 = System_Convert__ToBase64String(v83, 0LL);
  RequestBase__addField_41748396(request, (System_String_o *)StringLiteral_23183/*"squareIndexInfo"*/, v84, 0LL);
  v85 = this->fields.serverData;
  if ( !v85 )
    goto LABEL_51;
  v86 = (Il2CppObject *)JsonManager__toJson(&v85->fields.bossBattleInfo->obj, 0, 0, 0LL);
  v87 = RequestBase__PackToMessagePack(request, v86, 0LL);
  v88 = CatAndMouseGame__CatGame5Bytes(v87, 0LL);
  v89 = System_Convert__ToBase64String(v88, 0LL);
  RequestBase__addField_41748396(request, (System_String_o *)StringLiteral_17063/*"bossBattleInfo"*/, v89, 0LL);
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

  if ( (byte_49B8A48 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__get_Current__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__, v5);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v6);
    sub_1B4CF90(&WarBoardControlUiDataComponent_TypeInfo, v7);
    byte_49B8A48 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  listUiData = (System_Collections_Generic_List_object__o *)this->fields.listUiData;
  if ( !listUiData )
    sub_1B4D1EC(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    listUiData,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__);
  v26 = v25;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v26,
           (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__);
    if ( !v9 )
      break;
    current = v26.fields._current;
    if ( !v26.fields._current )
      sub_1B4D1EC(v9, v10);
    klass_low = LODWORD(v26.fields._current[1].klass);
    if ( (klass_low & 0x80000000) != 0 )
    {
      monitor = v26.fields._current[1].monitor;
      if ( !monitor )
        sub_1B4D1EC(v9, klass_low);
      v19 = monitor[6];
      if ( !v19 )
        sub_1B4D1F4(v9, klass_low);
      if ( v19 == 1 )
        sub_1B4D1F4(v9, klass_low);
      if ( v19 <= 2 )
        sub_1B4D1F4(v9, klass_low);
      Piece = WarBoardData__GetPiece(this, monitor[8], monitor[9], monitor[10], 1, v12);
      if ( Piece )
      {
        pieceComponent = Piece->fields.pieceComponent;
        if ( !pieceComponent )
          sub_1B4D1EC(Piece, v21);
LABEL_17:
        v22 = (UnityEngine_Object_o *)*((_QWORD *)pieceComponent + 23);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v23 = UnityEngine_Object__op_Equality(v22, 0LL, 0LL);
        if ( !v23 )
        {
          if ( !v22 )
            sub_1B4D1EC(v23, v24);
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
          sub_1B4D1EC(Square, v16);
        goto LABEL_17;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__);
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
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Func_bool__o *v21; // x20
  UnityEngine_WaitUntil_o *v22; // x21
  __int64 v23; // x20
  System_Delegate_o **v24; // x21
  System_Delegate_o *v25; // x22
  WarBoardTaskBase_TaskCallback_o *v26; // x23
  System_Delegate_o *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  WarBoardTaskBase_TaskCallback_c *v30; // x1
  Il2CppObject *Instance; // x19
  System_Collections_Generic_Dictionary_int__object__o *v32; // x21
  __int64 v33; // x0
  __int64 v34; // x1
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  __int64 v37; // x0

  if ( (byte_49B8A28 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__,
      consumedPieceActionPointDict);
    sub_1B4CF90(&System_Func_bool__TypeInfo, v5);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_1B4CF90(&WarBoardTaskBase_TaskCallback_TypeInfo, v7);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__0__, v8);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__1__, v9);
    sub_1B4CF90(&WarBoardData___c__DisplayClass154_0_TypeInfo, v10);
    sub_1B4CF90(&UnityEngine_WaitUntil_TypeInfo, v11);
    sub_1B4CF90(&WarBoardCallbackTask_TypeInfo, v12);
    sub_1B4CF90(&WarBoardTaskBase___TypeInfo, v13);
    byte_49B8A28 = 1;
  }
  v14 = sub_1B4D1DC(WarBoardData___c__DisplayClass154_0_TypeInfo);
  WarBoardData___c__DisplayClass154_0___ctor((WarBoardData___c__DisplayClass154_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_18;
  *(_QWORD *)(v14 + 24) = consumedPieceActionPointDict;
  sub_1B4CF34((CGThumbnailListItem_o *)(v14 + 24), (int32_t)consumedPieceActionPointDict, v17, v18);
  *(_QWORD *)(v14 + 32) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v14 + 32), (int32_t)this, v19, v20);
  v15 = *(System_Collections_Generic_Dictionary_int__object__o **)(v14 + 24);
  if ( !v15 )
    goto LABEL_18;
  if ( System_Collections_Generic_Dictionary_int__object___get_Count(
         v15,
         (const MethodInfo_31F6B30 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__) < 1 )
    return;
  *(_BYTE *)(v14 + 16) = 0;
  v21 = (System_Func_bool__o *)sub_1B4D1DC(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v21,
    (Il2CppObject *)v14,
    Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__0__,
    0LL);
  v22 = (UnityEngine_WaitUntil_o *)sub_1B4D1DC(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v22, v21, 0LL);
  v23 = sub_1B4D1DC(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v23, (UnityEngine_CustomYieldInstruction_o *)v22, 0LL);
  if ( !v23 )
LABEL_18:
    sub_1B4D1EC(v15, v16);
  v24 = (System_Delegate_o **)(v23 + 32);
  v25 = *(System_Delegate_o **)(v23 + 32);
  v26 = (WarBoardTaskBase_TaskCallback_o *)sub_1B4D1DC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v26,
    (Il2CppObject *)v14,
    Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__1__,
    0LL);
  v27 = System_Delegate__Combine(v25, (System_Delegate_o *)v26, 0LL);
  if ( !v27 )
  {
    *v24 = 0LL;
LABEL_13:
    sub_1B4CF34((CGThumbnailListItem_o *)(v23 + 32), (int32_t)v27, v28, v29);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v15 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B4D038(WarBoardTaskBase___TypeInfo, 1LL);
    if ( v15 )
    {
      v32 = v15;
      v33 = sub_1B4D0CC(v23, v15->klass->_1.element_class);
      if ( !v33 )
      {
        v37 = sub_1B4D210();
        sub_1B4D0B8(v37, 0LL);
      }
      if ( !LODWORD(v32->fields._entries) )
        sub_1B4D1F4(v33, v34);
      *(_QWORD *)&v32->fields._count = v23;
      sub_1B4CF34((CGThumbnailListItem_o *)&v32->fields._count, v23, v35, v36);
      if ( Instance )
      {
        WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 1, (WarBoardTaskBase_array *)v32, 0LL);
        return;
      }
    }
    goto LABEL_18;
  }
  v30 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v27->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    *v24 = v27;
    if ( (WarBoardTaskBase_TaskCallback_c *)v27->klass == v30 )
      goto LABEL_13;
  }
  sub_1B4D4AC(v27);
}


System_String_o *__fastcall WarBoardData__ToJson(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *serverData; // x19

  if ( (byte_49B8A29 & 1) == 0 )
  {
    sub_1B4CF90(&JsonManager_TypeInfo, method);
    sub_1B4CF90(&string_TypeInfo, v3);
    byte_49B8A29 = 1;
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

  if ( (byte_49B8A31 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_Find_WarBoardBossBattleData___, *(_QWORD *)&bossId);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v9);
    sub_1B4CF90(&System_Func_WarBoardBossBattleData__bool__TypeInfo, v10);
    sub_1B4CF90(&int_TypeInfo, v11);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass171_0__UpdateBossInfo_b__0__, v12);
    sub_1B4CF90(&WarBoardData___c__DisplayClass171_0_TypeInfo, v13);
    byte_49B8A31 = 1;
  }
  v14 = (WarBoardData___c__DisplayClass171_0_o *)sub_1B4D1DC(WarBoardData___c__DisplayClass171_0_TypeInfo);
  WarBoardData___c__DisplayClass171_0___ctor(v14, 0LL);
  if ( !v14 )
    goto LABEL_9;
  v14->fields.bossId = bossId;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_9;
  bossBattleInfo = (System_Object_array *)serverData->fields.bossBattleInfo;
  v19 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardBossBattleData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v19,
    (Il2CppObject *)v14,
    Method_WarBoardData___c__DisplayClass171_0__UpdateBossInfo_b__0__,
    0LL);
  object = BasicHelper__Find_object_(
             bossBattleInfo,
             (System_Func_T__bool__o *)v19,
             (const MethodInfo_2EED060 *)Method_BasicHelper_Find_WarBoardBossBattleData___);
  if ( !object )
    return;
  monitor = (System_Collections_Generic_Dictionary_object__object__o *)object[1].monitor;
  v25 = value;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v21, v22, v23);
  if ( !monitor )
LABEL_9:
    sub_1B4D1EC(v15, v16);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    monitor,
    (Il2CppObject *)key,
    v15,
    (const MethodInfo_3257B04 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
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
  CGThumbnailListItem_o *p__9__192_0; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v19; // x0
  WarBoardData___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x19
  System_Func_object__bool__o *_9__192_1; // x20
  Il2CppObject *v23; // x21
  CGThumbnailListItem_o *p__9__192_1; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  WarBoardData___c_c *v28; // x8
  System_Collections_Generic_IEnumerable_T__o *v29; // x19
  System_Action_object__o *_9__192_2; // x20
  Il2CppObject *v31; // x21
  CGThumbnailListItem_o *p__9__192_2; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3

  if ( (byte_49B8A43 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_WarBoardPieceBaseComponent__TypeInfo, method);
    sub_1B4CF90(&Method_BasicHelper_ForEach_WarBoardPieceBaseComponent___, v3);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__WarBoardPieceBaseComponent___, v4);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_WarBoardPieceBaseComponent___, v5);
    sub_1B4CF90(&System_Func_WarBoardPieceBaseComponent__bool__TypeInfo, v6);
    sub_1B4CF90(&System_Func_WarBoardPieceData__WarBoardPieceBaseComponent__TypeInfo, v7);
    sub_1B4CF90(&Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_0__, v8);
    sub_1B4CF90(&Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_1__, v9);
    sub_1B4CF90(&Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_2__, v10);
    sub_1B4CF90(&WarBoardData___c_TypeInfo, v11);
    byte_49B8A43 = 1;
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
    _9__192_0 = (System_Func_object__object__o *)sub_1B4D1DC(System_Func_WarBoardPieceData__WarBoardPieceBaseComponent__TypeInfo);
    System_Func_object__object____ctor(
      _9__192_0,
      v15,
      Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_0__,
      0LL);
    p__9__192_0 = (CGThumbnailListItem_o *)&WarBoardData___c_TypeInfo->static_fields->__9__192_0;
    p__9__192_0->klass = (CGThumbnailListItem_c *)_9__192_0;
    sub_1B4CF34(p__9__192_0, (int32_t)_9__192_0, v17, v18);
  }
  v19 = System_Linq_Enumerable__Select_object__object_(
          pieces,
          (System_Func_TSource__TResult__o *)_9__192_0,
          (const MethodInfo_2F341B8 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__WarBoardPieceBaseComponent___);
  v20 = WarBoardData___c_TypeInfo;
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)v19;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v20 = WarBoardData___c_TypeInfo;
  }
  _9__192_1 = (System_Func_object__bool__o *)v20->static_fields->__9__192_1;
  if ( !_9__192_1 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = WarBoardData___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__192_1 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardPieceBaseComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__192_1, v23, Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_1__, 0LL);
    p__9__192_1 = (CGThumbnailListItem_o *)&WarBoardData___c_TypeInfo->static_fields->__9__192_1;
    p__9__192_1->klass = (CGThumbnailListItem_c *)_9__192_1;
    sub_1B4CF34(p__9__192_1, (int32_t)_9__192_1, v25, v26);
  }
  v27 = System_Linq_Enumerable__Where_object_(
          v21,
          (System_Func_TSource__bool__o *)_9__192_1,
          (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_WarBoardPieceBaseComponent___);
  v28 = WarBoardData___c_TypeInfo;
  v29 = (System_Collections_Generic_IEnumerable_T__o *)v27;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v28 = WarBoardData___c_TypeInfo;
  }
  _9__192_2 = (System_Action_object__o *)v28->static_fields->__9__192_2;
  if ( !_9__192_2 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = WarBoardData___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v28->static_fields->__9;
    _9__192_2 = (System_Action_object__o *)sub_1B4D1DC(System_Action_WarBoardPieceBaseComponent__TypeInfo);
    System_Action_object____ctor(_9__192_2, v31, Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_2__, 0LL);
    p__9__192_2 = (CGThumbnailListItem_o *)&WarBoardData___c_TypeInfo->static_fields->__9__192_2;
    p__9__192_2->klass = (CGThumbnailListItem_c *)_9__192_2;
    sub_1B4CF34(p__9__192_2, (int32_t)_9__192_2, v33, v34);
  }
  BasicHelper__ForEach_object_(
    v29,
    (System_Action_T__o *)_9__192_2,
    (const MethodInfo_2EEE790 *)Method_BasicHelper_ForEach_WarBoardPieceBaseComponent___);
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
  UserServantEntity_array *Entities_40869248; // x0
  WarBoardData___c_c *v35; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x21
  System_Func_object__int__o *_9__143_0; // x22
  Il2CppObject *v38; // x23
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  System_Func_object__bool__o *v44; // x22

  if ( (byte_49B8A20 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Count_UserServantEntity___, v4);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Sum_UserServantEntity___, v5);
    sub_1B4CF90(&System_Func_UserServantEntity__bool__TypeInfo, v6);
    sub_1B4CF90(&System_Func_UserServantEntity__int__TypeInfo, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_long__Add__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_1B4CF90(&System_Collections_Generic_List_long__TypeInfo, v10);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v11);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B4CF90(&Method_WarBoardData___c__UpdateCurrentPartyCost_b__143_0__, v13);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass143_0__UpdateCurrentPartyCost_b__1__, v14);
    sub_1B4CF90(&WarBoardData___c__DisplayClass143_0_TypeInfo, v15);
    sub_1B4CF90(&WarBoardData___c_TypeInfo, v16);
    byte_49B8A20 = 1;
  }
  v17 = sub_1B4D1DC(WarBoardData___c__DisplayClass143_0_TypeInfo);
  WarBoardData___c__DisplayClass143_0___ctor((WarBoardData___c__DisplayClass143_0_o *)v17, 0LL);
  v18 = (System_Collections_Generic_List_long__o *)sub_1B4D1DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v18,
    (const MethodInfo_35679BC *)Method_System_Collections_Generic_List_long___ctor__);
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
        sub_1B4D1F4(EditableServantPieces, UserServantId_k__BackingField);
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
          *(const MethodInfo_3568210 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
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
          *(const MethodInfo_3568210 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
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
    sub_1B4D1EC(EditableServantPieces, UserServantId_k__BackingField);
  }
LABEL_17:
  v32 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v32 + 309) & 1) == 0 )
    v32 = sub_1B9D620(v22);
  v33 = *(_QWORD *)(*(_QWORD *)(v32 + 192) + 16LL);
  if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
    v33 = sub_1B9D620(v22);
  EditableServantPieces = **(WarBoardPieceData_array ***)(v33 + 184);
  if ( !EditableServantPieces )
    goto LABEL_33;
  EditableServantPieces = (WarBoardPieceData_array *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)EditableServantPieces,
                                                       (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !EditableServantPieces )
    goto LABEL_33;
  Entities_40869248 = UserServantMaster__GetEntities_40869248((UserServantMaster_o *)EditableServantPieces, v18, 0LL);
  v35 = WarBoardData___c_TypeInfo;
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)Entities_40869248;
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
    _9__143_0 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_UserServantEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__143_0, v38, Method_WarBoardData___c__UpdateCurrentPartyCost_b__143_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__143_0 = (struct System_Func_UserServantEntity__int__o *)_9__143_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__143_0, (int32_t)_9__143_0, v40, v41);
  }
  EditableServantPieces = (WarBoardPieceData_array *)System_Linq_Enumerable__Sum_object_(
                                                       v36,
                                                       (System_Func_TSource__int__o *)_9__143_0,
                                                       (const MethodInfo_2F3AF64 *)Method_System_Linq_Enumerable_Sum_UserServantEntity___);
  if ( !this )
    goto LABEL_33;
  this->fields._CurrentPartyCost_k__BackingField = (int)EditableServantPieces;
  EditableServantPieces = (WarBoardPieceData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !EditableServantPieces )
    goto LABEL_33;
  EditableServantPieces = (WarBoardPieceData_array *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)EditableServantPieces,
                                                       (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !v17 )
    goto LABEL_33;
  *(_QWORD *)(v17 + 16) = EditableServantPieces;
  sub_1B4CF34((CGThumbnailListItem_o *)(v17 + 16), (int32_t)EditableServantPieces, v42, v43);
  v44 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v44,
    (Il2CppObject *)v17,
    Method_WarBoardData___c__DisplayClass143_0__UpdateCurrentPartyCost_b__1__,
    0LL);
  this->fields._CurrentMemberCount_k__BackingField = System_Linq_Enumerable__Count_object__49416428(
                                                       v36,
                                                       (System_Func_TSource__bool__o *)v44,
                                                       (const MethodInfo_2F208EC *)Method_System_Linq_Enumerable_Count_UserServantEntity___);
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
  WarBoardManager_TaskMultiList_o *v35; // x24
  WarBoardManager_TaskMultiList_o *v36; // x23
  System_Collections_Generic_Dictionary_int__object__o *v37; // x20
  System_Collections_Generic_List_object__o *v38; // x26
  System_Collections_Generic_List_object__o *isPlayerGroup; // x0
  const MethodInfo *v40; // x1
  struct WarBoardPieceData_array *pieces; // x25
  int max_length; // w8
  unsigned int v43; // w19
  bool v44; // w27
  WarBoardPieceData_o *v45; // x28
  WarBoardManager_TaskList_o *v46; // x29
  char v47; // w2
  const MethodInfo *v48; // x3
  struct WarBoardManager_TaskList_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x0
  struct WarBoardManager_TaskList_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  __int64 v56; // x8
  System_Collections_Generic_List_object__o *v57; // x0
  int32_t ConsumedRecoverDonotActCost_k__BackingField; // w29
  System_Collections_Generic_Dictionary_int__object__o *v59; // x21
  System_Collections_Generic_List_object__o *v60; // x20
  System_Collections_Generic_Dictionary_int__object__o *v61; // x0
  Il2CppObject *v62; // x2
  char v63; // w2
  const MethodInfo *v64; // x3
  struct System_Object_array *v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  Il2CppClass **v68; // x8
  Il2CppObject *current; // x28
  WarBoardManager_TaskList_o *v70; // x26
  __int64 v71; // x0
  __int64 v72; // x1
  int monitor; // w25
  Il2CppClass *v74; // x0
  __int64 v75; // x0
  __int64 v76; // x1
  char v77; // w2
  const MethodInfo *v78; // x3
  int monitor_high; // w27
  Il2CppClass *klass; // x0
  Il2CppClass *v81; // x0
  struct WarBoardManager_TaskList_array *v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  Il2CppClass **v85; // x0
  struct WarBoardManager_TaskList_array *v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  Il2CppClass **v89; // x0
  const MethodInfo *v90; // x2
  System_Collections_Generic_IEnumerable_T__o *v91; // x0
  char v92; // w2
  const MethodInfo *v93; // x3
  struct System_Object_array *v94; // x8
  _QWORD *v95; // x9
  __int64 v96; // x10
  System_Collections_Generic_List_object__o *v97; // x1
  Il2CppClass **v98; // x0
  WarBoardWaitNonBlockingTaskEnd_o *v99; // x23
  char v100; // w2
  const MethodInfo *v101; // x3
  struct System_Object_array *v102; // x8
  _QWORD *v103; // x9
  __int64 v104; // x10
  Il2CppClass **v105; // x0
  struct WarBoardItemData_array *v106; // x19
  int v107; // w8
  unsigned int v108; // w20
  struct WarBoardWallData_array *walls; // x19
  unsigned __int64 v110; // x24
  __int64 v111; // x20
  char v112; // w2
  const MethodInfo *v113; // x3
  WarBoardWallData_o *v114; // x1
  System_Collections_Generic_List_object__o **v115; // x21
  System_Collections_Generic_IEnumerable_TSource__o *wallInfo; // x22
  System_Func_object__bool__o *v117; // x23
  Il2CppObject *v118; // x0
  Il2CppObject *v119; // x8
  int32_t klass_high; // w1
  System_Collections_Generic_List_object__o *v121; // [xsp+8h] [xbp-B8h]
  WarBoardData_o *v122; // [xsp+10h] [xbp-B0h]
  WarBoardDataEntity_o **v123; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v125; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v126; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_49B8A25 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Add__, warBoardDataEntity);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___ContainsKey__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData____ctor__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Item__, v9);
    sub_1B4CF90(&System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___TypeInfo, v10);
    sub_1B4CF90(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__Dispose__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__MoveNext__, v13);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__get_Current__,
      v14);
    sub_1B4CF90(&System_Func_WarBoardUserWallData__bool__TypeInfo, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v16);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v17);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__, v18);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, v19);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__GetEnumerator__, v20);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v21);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList___ctor__, v22);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v23);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Count__, v24);
    sub_1B4CF90(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v25);
    sub_1B4CF90(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v26);
    sub_1B4CF90(&System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__TypeInfo, v27);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v28);
    sub_1B4CF90(&WarBoardManager_TaskList_TypeInfo, v29);
    sub_1B4CF90(&WarBoardManager_TaskMultiList_TypeInfo, v30);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass151_0__UpdateFromServerData_b__0__, v31);
    sub_1B4CF90(&WarBoardData___c__DisplayClass151_0_TypeInfo, v32);
    sub_1B4CF90(&WarBoardWaitNonBlockingTaskEnd_TypeInfo, v33);
    byte_49B8A25 = 1;
  }
  memset(&v126, 0, sizeof(v126));
  p_serverData = &this->fields.serverData;
  if ( !this->fields.serverData )
    return;
  this->fields.serverData = warBoardDataEntity;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.serverData, (int32_t)warBoardDataEntity, forceUpdate, method);
  v121 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v121,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v35 = (WarBoardManager_TaskMultiList_o *)sub_1B4D1DC(WarBoardManager_TaskMultiList_TypeInfo);
  WarBoardManager_TaskMultiList___ctor(v35, 0LL);
  v36 = (WarBoardManager_TaskMultiList_o *)sub_1B4D1DC(WarBoardManager_TaskMultiList_TypeInfo);
  WarBoardManager_TaskMultiList___ctor(v36, 0LL);
  v37 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v37,
    (const MethodInfo_31F64AC *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData____ctor__);
  v38 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList___ctor__);
  pieces = this->fields.pieces;
  v122 = this;
  if ( !pieces )
    goto LABEL_96;
  max_length = pieces->max_length;
  v123 = &this->fields.serverData;
  if ( max_length >= 1 )
  {
    v43 = 0;
    v44 = forceUpdate;
    do
    {
      if ( v43 >= max_length )
        goto LABEL_97;
      v45 = pieces->m_Items[v43];
      v46 = (WarBoardManager_TaskList_o *)sub_1B4D1DC(WarBoardManager_TaskList_TypeInfo);
      WarBoardManager_TaskList___ctor(v46, 0LL);
      if ( !v45 )
        goto LABEL_96;
      WarBoardPieceData__UpdateFromServerData(
        v45,
        *p_serverData,
        (System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__o *)v38,
        v46,
        v44,
        0LL);
      if ( !v46 )
        goto LABEL_96;
      if ( v46->fields._size >= 1 )
      {
        if ( v45->fields._isDead_k__BackingField )
        {
          if ( !v36 )
            goto LABEL_96;
          items = v36->fields._items;
          v50 = Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__;
          ++v36->fields._version;
          if ( !items )
            goto LABEL_96;
          size = v36->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            v56 = v50[4];
            v57 = (System_Collections_Generic_List_object__o *)v36;
LABEL_23:
            System_Collections_Generic_List_object___AddWithResize(
              v57,
              (Il2CppObject *)v46,
              *(const MethodInfo_35801DC **)(*(_QWORD *)(v56 + 192) + 112LL));
            goto LABEL_24;
          }
          v52 = &items->obj.klass + size;
          v36->fields._size = size + 1;
        }
        else
        {
          if ( !v35 )
            goto LABEL_96;
          v53 = v35->fields._items;
          v54 = Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__;
          ++v35->fields._version;
          if ( !v53 )
            goto LABEL_96;
          v55 = v35->fields._size;
          if ( (unsigned int)v55 >= v53->max_length )
          {
            v56 = v54[4];
            v57 = (System_Collections_Generic_List_object__o *)v35;
            goto LABEL_23;
          }
          v52 = &v53->obj.klass + v55;
          v35->fields._size = v55 + 1;
        }
        v52[4] = (Il2CppClass *)v46;
        sub_1B4CF34((CGThumbnailListItem_o *)(v52 + 4), (int32_t)v46, v47, v48);
      }
LABEL_24:
      isPlayerGroup = (System_Collections_Generic_List_object__o *)WarBoardPieceData__get_isPlayerGroup(v45, 0LL);
      if ( ((unsigned __int8)isPlayerGroup & 1) != 0 )
      {
        isPlayerGroup = (System_Collections_Generic_List_object__o *)WarBoardPieceData__get_isMaster(v45, 0LL);
        if ( ((unsigned __int8)isPlayerGroup & 1) == 0 && v45->fields._IsDispConsumedPieceActionPoint_k__BackingField )
        {
          if ( !v37 )
            goto LABEL_96;
          if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                  v37,
                  v45->fields._ConsumedRecoverDonotActCost_k__BackingField,
                  (const MethodInfo_31F7074 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___ContainsKey__) )
          {
            ConsumedRecoverDonotActCost_k__BackingField = v45->fields._ConsumedRecoverDonotActCost_k__BackingField;
            v59 = v37;
            v60 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v60,
              (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
            v61 = v59;
            v62 = (Il2CppObject *)v60;
            v37 = v59;
            p_serverData = v123;
            System_Collections_Generic_Dictionary_int__object___Add(
              v61,
              ConsumedRecoverDonotActCost_k__BackingField,
              v62,
              (const MethodInfo_31F6E80 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Add__);
          }
          isPlayerGroup = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                         v37,
                                                                         v45->fields._ConsumedRecoverDonotActCost_k__BackingField,
                                                                         (const MethodInfo_31F6DE0 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Item__);
          if ( !isPlayerGroup )
            goto LABEL_96;
          v65 = isPlayerGroup->fields._items;
          v66 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
          ++isPlayerGroup->fields._version;
          if ( !v65 )
            goto LABEL_96;
          v67 = isPlayerGroup->fields._size;
          if ( (unsigned int)v67 >= v65->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              isPlayerGroup,
              (Il2CppObject *)v45,
              *(const MethodInfo_35801DC **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
          }
          else
          {
            v68 = &v65->obj.klass + v67;
            isPlayerGroup->fields._size = v67 + 1;
            v68[4] = (Il2CppClass *)v45;
            sub_1B4CF34((CGThumbnailListItem_o *)(v68 + 4), (int32_t)v45, v63, v64);
          }
        }
      }
      max_length = pieces->max_length;
    }
    while ( (int)++v43 < max_length );
  }
  if ( !v38 )
    goto LABEL_96;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v125,
    v38,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__GetEnumerator__);
  v126 = v125;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v126,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__MoveNext__) )
  {
    current = v126.fields._current;
    v70 = (WarBoardManager_TaskList_o *)sub_1B4D1DC(WarBoardManager_TaskList_TypeInfo);
    WarBoardManager_TaskList___ctor(v70, 0LL);
    if ( !current )
      sub_1B4D1EC(v71, v72);
    monitor = (int)current[1].monitor;
    if ( (monitor & 0x80000000) != 0 )
    {
      monitor_high = HIDWORD(current[1].monitor);
      if ( monitor_high >= 1 )
      {
        klass = current[1].klass;
        if ( !klass )
          sub_1B4D1EC(0LL, v72);
        (*((void (__fastcall **)(Il2CppClass *, _QWORD, _QWORD, WarBoardManager_TaskList_o *, __int64, _QWORD, __int64, _QWORD))klass->_1.image
         + 101))(
          klass,
          (unsigned int)monitor_high,
          0LL,
          v70,
          0xFFFFFFFFLL,
          0LL,
          1LL,
          *((_QWORD *)klass->_1.image + 102));
      }
      v81 = current[1].klass;
      if ( !v81 )
        sub_1B4D1EC(0LL, v72);
      v75 = (*((__int64 (**)(void))v81->_1.image + 103))();
    }
    else
    {
      v74 = current[1].klass;
      if ( !v74 )
        sub_1B4D1EC(0LL, v72);
      v75 = (*((__int64 (__fastcall **)(Il2CppClass *, _QWORD, _QWORD, WarBoardManager_TaskList_o *, __int64, _QWORD, __int64, _QWORD))v74->_1.image
             + 101))(
              v74,
              HIDWORD(current[1].monitor),
              0LL,
              v70,
              0xFFFFFFFFLL,
              0LL,
              1LL,
              *((_QWORD *)v74->_1.image + 102));
    }
    if ( !v70 )
      sub_1B4D1EC(v75, v76);
    if ( v70->fields._size >= 1 )
    {
      if ( (monitor & 0x80000000) != 0 )
      {
        if ( !v36 )
          sub_1B4D1EC(v75, v76);
        v86 = v36->fields._items;
        v87 = Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__;
        ++v36->fields._version;
        if ( !v86 )
          sub_1B4D1EC(v75, v76);
        v88 = v36->fields._size;
        if ( (unsigned int)v88 >= v86->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)v36,
            (Il2CppObject *)v70,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
        }
        else
        {
          v89 = &v86->obj.klass + v88;
          v36->fields._size = v88 + 1;
          v89[4] = (Il2CppClass *)v70;
          sub_1B4CF34((CGThumbnailListItem_o *)(v89 + 4), (int32_t)v70, v77, v78);
        }
      }
      else
      {
        if ( !v35 )
          sub_1B4D1EC(v75, v76);
        v82 = v35->fields._items;
        v83 = Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__;
        ++v35->fields._version;
        if ( !v82 )
          sub_1B4D1EC(v75, v76);
        v84 = v35->fields._size;
        if ( (unsigned int)v84 >= v82->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)v35,
            (Il2CppObject *)v70,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
        }
        else
        {
          v85 = &v82->obj.klass + v84;
          v35->fields._size = v84 + 1;
          v85[4] = (Il2CppClass *)v70;
          sub_1B4CF34((CGThumbnailListItem_o *)(v85 + 4), (int32_t)v70, v77, v78);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v126,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__Dispose__);
  if ( !v37 )
    goto LABEL_96;
  isPlayerGroup = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Count(
                                                                 v37,
                                                                 (const MethodInfo_31F6B30 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__);
  if ( (int)isPlayerGroup >= 1 )
    WarBoardData__ShowConsumedPieceActionPointPopup(
      v122,
      (System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___o *)v37,
      v90);
  if ( !v35 )
    goto LABEL_96;
  isPlayerGroup = (System_Collections_Generic_List_object__o *)WarBoardManager_TaskMultiList__SortedFlatted(v35, 0LL);
  if ( !v121 )
    goto LABEL_96;
  System_Collections_Generic_List_object___AddRange(
    v121,
    (System_Collections_Generic_IEnumerable_T__o *)isPlayerGroup,
    (const MethodInfo_35803E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( !v36 )
    goto LABEL_96;
  v91 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager_TaskMultiList__SortedFlatted(v36, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v121,
    v91,
    (const MethodInfo_35803E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( v121->fields._size >= 1 )
  {
    isPlayerGroup = (System_Collections_Generic_List_object__o *)WarBoardData__CreateEventBossUIDataTask(
                                                                   (WarBoardData_o *)isPlayerGroup,
                                                                   v40);
    v94 = v121->fields._items;
    v95 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v121->fields._version;
    if ( !v94 )
      goto LABEL_96;
    v96 = v121->fields._size;
    v97 = isPlayerGroup;
    if ( (unsigned int)v96 >= v94->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v121,
        (Il2CppObject *)isPlayerGroup,
        *(const MethodInfo_35801DC **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
    }
    else
    {
      v98 = &v94->obj.klass + v96;
      v121->fields._size = v96 + 1;
      v98[4] = (Il2CppClass *)v97;
      sub_1B4CF34((CGThumbnailListItem_o *)(v98 + 4), (int32_t)v97, v92, v93);
    }
    v99 = (WarBoardWaitNonBlockingTaskEnd_o *)sub_1B4D1DC(WarBoardWaitNonBlockingTaskEnd_TypeInfo);
    WarBoardWaitNonBlockingTaskEnd___ctor(v99, 0LL);
    v102 = v121->fields._items;
    v103 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v121->fields._version;
    if ( !v102 )
      goto LABEL_96;
    v104 = v121->fields._size;
    if ( (unsigned int)v104 >= v102->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v121,
        (Il2CppObject *)v99,
        *(const MethodInfo_35801DC **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
    }
    else
    {
      v105 = &v102->obj.klass + v104;
      v121->fields._size = v104 + 1;
      v105[4] = (Il2CppClass *)v99;
      sub_1B4CF34((CGThumbnailListItem_o *)(v105 + 4), (int32_t)v99, v100, v101);
    }
    isPlayerGroup = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !isPlayerGroup )
      goto LABEL_96;
    WarBoardManager__InsertTask_35942836(
      (WarBoardManager_o *)isPlayerGroup,
      0,
      (System_Collections_Generic_List_WarBoardTaskBase__o *)v121,
      0LL);
  }
  v106 = v122->fields.items;
  if ( !v106 )
    goto LABEL_96;
  v107 = v106->max_length;
  if ( v107 >= 1 )
  {
    v108 = 0;
    while ( v108 < v107 )
    {
      isPlayerGroup = (System_Collections_Generic_List_object__o *)v106->m_Items[v108];
      if ( !isPlayerGroup )
        goto LABEL_96;
      WarBoardItemData__UpdateFromServerData((WarBoardItemData_o *)isPlayerGroup, *v123, 0LL);
      v107 = v106->max_length;
      if ( (int)++v108 >= v107 )
        goto LABEL_84;
    }
LABEL_97:
    sub_1B4D1F4(isPlayerGroup, v40);
  }
LABEL_84:
  walls = v122->fields.walls;
  if ( !walls )
LABEL_96:
    sub_1B4D1EC(isPlayerGroup, v40);
  if ( (int)walls->max_length >= 1 )
  {
    v110 = 0LL;
    while ( 1 )
    {
      v111 = sub_1B4D1DC(WarBoardData___c__DisplayClass151_0_TypeInfo);
      WarBoardData___c__DisplayClass151_0___ctor((WarBoardData___c__DisplayClass151_0_o *)v111, 0LL);
      if ( v110 >= walls->max_length )
        goto LABEL_97;
      if ( !v111 )
        goto LABEL_96;
      v114 = walls->m_Items[v110];
      *(_QWORD *)(v111 + 16) = v114;
      v115 = (System_Collections_Generic_List_object__o **)(v111 + 16);
      sub_1B4CF34((CGThumbnailListItem_o *)(v111 + 16), (int32_t)v114, v112, v113);
      if ( !warBoardDataEntity )
        goto LABEL_96;
      wallInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEntity->fields.wallInfo;
      v117 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_WarBoardUserWallData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v117,
        (Il2CppObject *)v111,
        Method_WarBoardData___c__DisplayClass151_0__UpdateFromServerData_b__0__,
        0LL);
      v118 = System_Linq_Enumerable__FirstOrDefault_object__49446844(
               wallInfo,
               (System_Func_TSource__bool__o *)v117,
               (const MethodInfo_2F27FBC *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
      if ( v118 )
      {
        v119 = v118;
        isPlayerGroup = *v115;
        if ( !*v115 )
          goto LABEL_96;
        klass_high = HIDWORD(v119[1].klass);
        if ( isPlayerGroup->fields._size > klass_high )
          WarBoardWallData__SetBreakPoint((WarBoardWallData_o *)isPlayerGroup, klass_high, 0LL);
      }
      if ( (__int64)++v110 >= (int)walls->max_length )
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
  const MethodInfo *v6; // x3

  if ( !participantInfo )
    sub_1B4D1EC(this, 0LL);
  v4 = WarBoardData_BattleParticipantInfo__ToUniqueIndexArray(participantInfo, 0LL);
  this->fields.latestBattlePieceUniqueIndexes = v4;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.latestBattlePieceUniqueIndexes, (int32_t)v4, v5, v6);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  il2cpp_array_size_t max_length; // w8

  if ( (byte_49B8A35 & 1) == 0 )
  {
    sub_1B4CF90(&int___TypeInfo, *(_QWORD *)&fromSquareIndex);
    byte_49B8A35 = 1;
  }
  v7 = (struct System_Int32_array *)sub_1B4D038(int___TypeInfo, 2LL);
  if ( !v7 )
    sub_1B4D1EC(0LL, v8);
  max_length = v7->max_length;
  if ( !max_length || (v7->m_Items[1] = fromSquareIndex, max_length == 1) )
    sub_1B4D1F4(v7, v7);
  v7->m_Items[2] = toSquareIndex;
  this->fields.latestPieceActionSquareIndexes = v7;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.latestPieceActionSquareIndexes, (int32_t)v7, v9, v10);
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  System_Object_array *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  CGThumbnailListItem_o *p_condSquares; // x19
  System_Collections_Generic_IEnumerable_T__o *condSquares; // t1
  System_Collections_Generic_List_object__o *v24; // x21
  System_Object_array *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3

  if ( (byte_49B8A19 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardSquareData__Add__, square);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardSquareData__Remove__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardSquareData___ctor___75461656, v7);
    sub_1B4CF90(&System_Collections_Generic_List_WarBoardSquareData__TypeInfo, v8);
    byte_49B8A19 = 1;
  }
  squares = (System_Collections_Generic_IEnumerable_T__o *)this->fields.squares;
  v10 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
  System_Collections_Generic_List_object____ctor_56097488(
    v10,
    squares,
    (const MethodInfo_357FAD0 *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor___75461656);
  if ( !v10 )
    goto LABEL_10;
  items = v10->fields._items;
  v16 = Method_System_Collections_Generic_List_WarBoardSquareData__Add__;
  ++v10->fields._version;
  if ( !items )
    goto LABEL_10;
  size = v10->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      (Il2CppObject *)square,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    v10->fields._size = size + 1;
    v18[4] = (Il2CppClass *)square;
    sub_1B4CF34((CGThumbnailListItem_o *)(v18 + 4), (int32_t)square, v13, v14);
  }
  v19 = System_Collections_Generic_List_object___ToArray(
          v10,
          (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  this->fields.squares = (struct WarBoardSquareData_array *)v19;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.squares, (int32_t)v19, v20, v21);
  condSquares = (System_Collections_Generic_IEnumerable_T__o *)this->fields.condSquares;
  p_condSquares = (CGThumbnailListItem_o *)&this->fields.condSquares;
  v24 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
  System_Collections_Generic_List_object____ctor_56097488(
    v24,
    condSquares,
    (const MethodInfo_357FAD0 *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor___75461656);
  if ( !v24 )
LABEL_10:
    sub_1B4D1EC(v11, v12);
  System_Collections_Generic_List_object___Remove(
    v24,
    (Il2CppObject *)square,
    (const MethodInfo_3581704 *)Method_System_Collections_Generic_List_WarBoardSquareData__Remove__);
  v25 = System_Collections_Generic_List_object___ToArray(
          v24,
          (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  p_condSquares->klass = (CGThumbnailListItem_c *)v25;
  sub_1B4CF34(p_condSquares, (int32_t)v25, v26, v27);
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  Il2CppClass *klass; // x8
  _QWORD *v16; // x9
  __int64 monitor_low; // x10
  __int64 v18; // x8

  if ( (byte_49B8A46 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardUiData__Add__, *(_QWORD *)&squareIndex);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardUiData__Remove__, v7);
    sub_1B4CF90(&WarBoardUiData_TypeInfo, v8);
    byte_49B8A46 = 1;
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
        (const MethodInfo_3581704 *)Method_System_Collections_Generic_List_WarBoardUiData__Remove__);
      return;
    }
LABEL_16:
    sub_1B4D1EC(UiData, v10);
  }
  if ( max_length )
  {
    v12 = (WarBoardUiData_o *)sub_1B4D1DC(WarBoardUiData_TypeInfo);
    WarBoardUiData___ctor_36047020(v12, squareIndex, setKeys, 0LL);
    UiData = (Il2CppObject *)this->fields.listUiData;
    if ( !UiData )
      goto LABEL_16;
    klass = UiData[1].klass;
    v16 = Method_System_Collections_Generic_List_WarBoardUiData__Add__;
    ++HIDWORD(UiData[1].monitor);
    if ( !klass )
      goto LABEL_16;
    monitor_low = SLODWORD(UiData[1].monitor);
    if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)UiData,
        (Il2CppObject *)v12,
        *(const MethodInfo_35801DC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    }
    else
    {
      v18 = (__int64)klass + 8 * monitor_low;
      LODWORD(UiData[1].monitor) = monitor_low + 1;
      *(_QWORD *)(v18 + 32) = v12;
      sub_1B4CF34((CGThumbnailListItem_o *)(v18 + 32), (int32_t)v12, v13, v14);
    }
  }
}


void __fastcall WarBoardData__UpdateUiData_35855420(
        WarBoardData_o *this,
        System_Int32_array *pieceIndex,
        System_String_array *setKeys,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *UiData_35854828; // x0
  Il2CppObject *v10; // x1
  il2cpp_array_size_t max_length; // w8
  WarBoardUiData_o *v12; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  Il2CppClass *klass; // x8
  _QWORD *v16; // x9
  __int64 monitor_low; // x10
  __int64 v18; // x8

  if ( (byte_49B8A47 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardUiData__Add__, pieceIndex);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardUiData__Remove__, v7);
    sub_1B4CF90(&WarBoardUiData_TypeInfo, v8);
    byte_49B8A47 = 1;
  }
  UiData_35854828 = (Il2CppObject *)WarBoardData__GetUiData_35854828(this, pieceIndex, (const MethodInfo *)setKeys);
  if ( !setKeys )
    goto LABEL_16;
  max_length = setKeys->max_length;
  v10 = UiData_35854828;
  if ( UiData_35854828 )
  {
    if ( max_length )
    {
      WarBoardUiData__SetKeys((WarBoardUiData_o *)UiData_35854828, setKeys, 0LL);
      return;
    }
    UiData_35854828 = (Il2CppObject *)this->fields.listUiData;
    if ( UiData_35854828 )
    {
      System_Collections_Generic_List_object___Remove(
        (System_Collections_Generic_List_object__o *)UiData_35854828,
        v10,
        (const MethodInfo_3581704 *)Method_System_Collections_Generic_List_WarBoardUiData__Remove__);
      return;
    }
LABEL_16:
    sub_1B4D1EC(UiData_35854828, v10);
  }
  if ( max_length )
  {
    v12 = (WarBoardUiData_o *)sub_1B4D1DC(WarBoardUiData_TypeInfo);
    WarBoardUiData___ctor_36047092(v12, pieceIndex, setKeys, 0LL);
    UiData_35854828 = (Il2CppObject *)this->fields.listUiData;
    if ( !UiData_35854828 )
      goto LABEL_16;
    klass = UiData_35854828[1].klass;
    v16 = Method_System_Collections_Generic_List_WarBoardUiData__Add__;
    ++HIDWORD(UiData_35854828[1].monitor);
    if ( !klass )
      goto LABEL_16;
    monitor_low = SLODWORD(UiData_35854828[1].monitor);
    if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)UiData_35854828,
        (Il2CppObject *)v12,
        *(const MethodInfo_35801DC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    }
    else
    {
      v18 = (__int64)klass + 8 * monitor_low;
      LODWORD(UiData_35854828[1].monitor) = monitor_low + 1;
      *(_QWORD *)(v18 + 32) = v12;
      sub_1B4CF34((CGThumbnailListItem_o *)(v18 + 32), (int32_t)v12, v13, v14);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int64_t result; // x0

  if ( (byte_49B89F2 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Array_Find_WarBoardPieceData___, method);
    sub_1B4CF90(&System_Predicate_WarBoardPieceData__TypeInfo, v3);
    sub_1B4CF90(&Method_WarBoardData___c__get_PlayerMasterUserEquipId_b__62_0__, v4);
    sub_1B4CF90(&WarBoardData___c_TypeInfo, v5);
    byte_49B89F2 = 1;
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
    _9__62_0 = (System_Predicate_object__o *)sub_1B4D1DC(System_Predicate_WarBoardPieceData__TypeInfo);
    System_Predicate_object____ctor(_9__62_0, v9, Method_WarBoardData___c__get_PlayerMasterUserEquipId_b__62_0__, 0LL);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__62_0 = (struct System_Predicate_WarBoardPieceData__o *)_9__62_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__62_0, (int32_t)_9__62_0, v11, v12);
  }
  result = (int64_t)System_Array__Find_object_(
                      pieces,
                      (System_Predicate_T__o *)_9__62_0,
                      (const MethodInfo_2FF935C *)Method_System_Array_Find_WarBoardPieceData___);
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
    sub_1B4D1EC(this, method);
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
  const MethodInfo *v3; // x3

  this->fields._bgAnimationInfo_k__BackingField = value;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields._bgAnimationInfo_k__BackingField,
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
  const MethodInfo *v11; // x3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  v9 = WarBoardData_BattleParticipantInfo__AggregateBattleParticipants(v7, attackPieceData, targetPieceData, v8);
  this->fields._Participants_k__BackingField = v9;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields, (int32_t)v9, v10, v11);
}


void __fastcall WarBoardData_BattleParticipantInfo___ctor_36005132(
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  void *monitor; // x1
  System_Func_T__TResult__o *v16; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Object_array *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_49B8B53 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_uint__WarBoardPieceData___, uniqueIndexArray);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, v5);
    sub_1B4CF90(&System_Func_uint__WarBoardPieceData__TypeInfo, v6);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7);
    sub_1B4CF90(&Method_WarBoardData_BattleParticipantInfo___c__DisplayClass13_0___ctor_b__0__, v8);
    sub_1B4CF90(&WarBoardData_BattleParticipantInfo___c__DisplayClass13_0_TypeInfo, v9);
    byte_49B8B53 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v10 = sub_1B4D1DC(WarBoardData_BattleParticipantInfo___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !uniqueIndexArray )
    goto LABEL_9;
  if ( (int)uniqueIndexArray->max_length > 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance && v10 )
    {
      monitor = Instance[27].monitor;
      *(_QWORD *)(v10 + 16) = monitor;
      sub_1B4CF34((CGThumbnailListItem_o *)(v10 + 16), (int32_t)monitor, v13, v14);
      v16 = (System_Func_T__TResult__o *)sub_1B4D1DC(System_Func_uint__WarBoardPieceData__TypeInfo);
      System_Func_uint__object____ctor(
        v16,
        (Il2CppObject *)v10,
        Method_WarBoardData_BattleParticipantInfo___c__DisplayClass13_0___ctor_b__0__,
        0LL);
      v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_uint__object_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)uniqueIndexArray,
                                                                   (System_Func_TSource__TResult__o *)v16,
                                                                   (const MethodInfo_2F353E0 *)Method_System_Linq_Enumerable_Select_uint__WarBoardPieceData___);
      v18 = System_Linq_Enumerable__ToArray_object_(
              v17,
              (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
      this->fields._Participants_k__BackingField = (struct WarBoardPieceData_array *)v18;
      sub_1B4CF34((CGThumbnailListItem_o *)&this->fields, (int32_t)v18, v19, v20);
      return;
    }
LABEL_9:
    sub_1B4D1EC(Instance, v12);
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
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Object_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  Il2CppClass **v25; // x0
  struct WarBoardStageNpcMaster_o *stageNpcMaster; // x8
  WarBoardPieceData_array *v27; // x20
  unsigned __int64 v28; // x23
  WarBoardPieceData_o **p_npcEntityDict; // x25
  WarBoardPieceData_o *v30; // x21
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct System_Object_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  Il2CppClass **v36; // x0

  if ( (byte_49B8B55 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, attackPieceData);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardPieceData__Contains__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v8);
    sub_1B4CF90(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v9);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    byte_49B8B55 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( !v11 )
    goto LABEL_31;
  items = v11->fields._items;
  v17 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
  ++v11->fields._version;
  if ( !items )
    goto LABEL_31;
  size = v11->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      (Il2CppObject *)attackPieceData,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    v11->fields._size = size + 1;
    v19[4] = (Il2CppClass *)attackPieceData;
    sub_1B4CF34((CGThumbnailListItem_o *)(v19 + 4), (int32_t)attackPieceData, v14, v15);
  }
  v22 = v11->fields._items;
  v23 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
  ++v11->fields._version;
  if ( !v22 )
    goto LABEL_31;
  v24 = v11->fields._size;
  if ( (unsigned int)v24 >= v22->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      (Il2CppObject *)targetPieceData,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &v22->obj.klass + v24;
    v11->fields._size = v24 + 1;
    v25[4] = (Il2CppClass *)targetPieceData;
    sub_1B4CF34((CGThumbnailListItem_o *)(v25 + 4), (int32_t)targetPieceData, v20, v21);
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1B4D1EC(Instance, v13);
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
        sub_1B4D1F4(Instance, v13);
      v30 = p_npcEntityDict[v28];
      Instance = (WarBoardData_o *)System_Collections_Generic_List_object___Contains(
                                     v11,
                                     (Il2CppObject *)v30,
                                     (const MethodInfo_358056C *)Method_System_Collections_Generic_List_WarBoardPieceData__Contains__);
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
                *(const MethodInfo_35801DC **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
            }
            else
            {
              v36 = &v33->obj.klass + v35;
              v11->fields._size = v35 + 1;
              v36[4] = (Il2CppClass *)v30;
              sub_1B4CF34((CGThumbnailListItem_o *)(v36 + 4), (int32_t)v30, v31, v32);
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
                                      (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
}


WarBoardData_BattleParticipantInfo_o *__fastcall WarBoardData_BattleParticipantInfo__LoadFromUniqueIndex(
        System_UInt32_array *uniqueIndexArray,
        const MethodInfo *method)
{
  WarBoardData_BattleParticipantInfo_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_49B8B56 & 1) == 0 )
  {
    sub_1B4CF90(&WarBoardData_BattleParticipantInfo_TypeInfo, method);
    byte_49B8B56 = 1;
  }
  v3 = (WarBoardData_BattleParticipantInfo_o *)sub_1B4D1DC(WarBoardData_BattleParticipantInfo_TypeInfo);
  WarBoardData_BattleParticipantInfo___ctor_36005132(v3, uniqueIndexArray, v4);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_49B8B54 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__uint___, method);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_uint___, v3);
    sub_1B4CF90(&System_Func_WarBoardPieceData__uint__TypeInfo, v4);
    sub_1B4CF90(&Method_WarBoardData_BattleParticipantInfo___c__ToUniqueIndexArray_b__14_0__, v5);
    sub_1B4CF90(&WarBoardData_BattleParticipantInfo___c_TypeInfo, v6);
    byte_49B8B54 = 1;
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
    _9__14_0 = (System_Func_T__TResult__o *)sub_1B4D1DC(System_Func_WarBoardPieceData__uint__TypeInfo);
    System_Func_object__uint____ctor(
      _9__14_0,
      v10,
      Method_WarBoardData_BattleParticipantInfo___c__ToUniqueIndexArray_b__14_0__,
      0LL);
    static_fields = WarBoardData_BattleParticipantInfo___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Func_WarBoardPieceData__uint__o *)_9__14_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__14_0, (int32_t)_9__14_0, v12, v13);
  }
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__uint_(
                                                               Participants_k__BackingField,
                                                               (System_Func_TSource__TResult__o *)_9__14_0,
                                                               (const MethodInfo_2F34810 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__uint___);
  return System_Linq_Enumerable__ToArray_uint_(
           v14,
           (const MethodInfo_2F3C4F4 *)Method_System_Linq_Enumerable_ToArray_uint___);
}


WarBoardPieceData_o *__fastcall WarBoardData_BattleParticipantInfo__get_Attacker(
        WarBoardData_BattleParticipantInfo_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceData_array *Participants_k__BackingField; // x8

  Participants_k__BackingField = this->fields._Participants_k__BackingField;
  if ( !Participants_k__BackingField )
    sub_1B4D1EC(this, method);
  if ( !Participants_k__BackingField->max_length )
    sub_1B4D1F4(this, method);
  return Participants_k__BackingField->m_Items[0];
}


WarBoardPieceData_o *__fastcall WarBoardData_BattleParticipantInfo__get_Defender(
        WarBoardData_BattleParticipantInfo_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceData_array *Participants_k__BackingField; // x8

  Participants_k__BackingField = this->fields._Participants_k__BackingField;
  if ( !Participants_k__BackingField )
    sub_1B4D1EC(this, method);
  if ( Participants_k__BackingField->max_length <= 1 )
    sub_1B4D1F4(this, method);
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
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49B8B57 & 1) == 0 )
  {
    sub_1B4CF90(&WarBoardData_BattleParticipantInfo___c_TypeInfo, v1);
    byte_49B8B57 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(WarBoardData_BattleParticipantInfo___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardData_BattleParticipantInfo___c_TypeInfo->static_fields->__9 = (struct WarBoardData_BattleParticipantInfo___c_o *)v2;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)WarBoardData_BattleParticipantInfo___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(0LL, x);
  return WarBoardData__GetPiece_35766632(warBoardData, x, 0, 0LL);
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
  const MethodInfo *v4; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct UnityEngine_Vector2_o zeroVector; // d1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  const MethodInfo *v32; // x3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_QWORD *)&this->fields.questId = 0LL;
  this->fields.stageId = 0;
  this->fields.pieceSaves = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.pieceSaves, 0, v3, v4);
  this->fields.itemSaves = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.itemSaves, 0, v5, v6);
  this->fields.treasureSaves = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.treasureSaves, 0, v7, v8);
  this->fields.wallSaves = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.wallSaves, 0, v9, v10);
  this->fields.squareSaves = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.squareSaves, 0, v11, v12);
  if ( !byte_49B525A )
  {
    sub_1B4CF90(&UnityEngine_Vector2_TypeInfo, v13);
    byte_49B525A = 1;
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
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.eventSaves, 0, v14, v15);
  this->fields.winCondId = -1;
  this->fields.latestBattlePieceUniqueIndexes = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.latestBattlePieceUniqueIndexes, 0, v17, v18);
  this->fields.prevCondSaves = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.prevCondSaves, 0, v19, v20);
  this->fields.reinforcementsSaves = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.reinforcementsSaves, 0, v21, v22);
  this->fields.playedReinforcements = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.playedReinforcements, 0, v23, v24);
  this->fields.uiDataSaves = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.uiDataSaves, 0, v25, v26);
  this->fields.bgAnimationInfo = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.bgAnimationInfo, 0, v27, v28);
  this->fields.squareIndexInfo = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.squareIndexInfo, 0, v29, v30);
  this->fields.bossBattleInfo = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.bossBattleInfo, 0, v31, v32);
}


void __fastcall WarBoardData_WarBoardLocalSaveData___ctor_36000440(
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
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  unsigned __int64 v45; // x24
  __int64 v46; // x26
  __int64 v47; // x27
  struct WarBoardPieceData_array *v48; // x8
  struct WarBoardPieceData_SaveData_array *pieceSaves; // x28
  WarBoardPieceData_o *v50; // x23
  WarBoardPieceData_SaveData_o *v51; // x22
  const MethodInfo *v52; // x2
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  struct WarBoardItemData_array *items; // x8
  __int64 v56; // x22
  struct WarBoardItemData_SaveData_array *v57; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  unsigned __int64 v60; // x24
  __int64 v61; // x26
  __int64 v62; // x27
  struct WarBoardItemData_array *v63; // x8
  struct WarBoardItemData_SaveData_array *itemSaves; // x28
  WarBoardItemData_o *v65; // x23
  WarBoardItemData_SaveData_o *v66; // x22
  const MethodInfo *v67; // x2
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  struct WarBoardTreasureData_array *treasures; // x8
  __int64 v71; // x22
  struct WarBoardTreasureData_SaveData_array *v72; // x0
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  unsigned __int64 v75; // x24
  __int64 v76; // x26
  __int64 v77; // x27
  struct WarBoardTreasureData_array *v78; // x8
  struct WarBoardTreasureData_SaveData_array *treasureSaves; // x28
  WarBoardTreasureData_o *v80; // x23
  WarBoardTreasureData_SaveData_o *v81; // x22
  const MethodInfo *v82; // x2
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  struct WarBoardWallData_array *walls; // x8
  __int64 v86; // x22
  struct WarBoardWallData_SaveData_array *v87; // x0
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  unsigned __int64 v90; // x24
  __int64 v91; // x26
  __int64 v92; // x27
  struct WarBoardWallData_array *v93; // x8
  struct WarBoardWallData_SaveData_array *wallSaves; // x28
  WarBoardWallData_o *v95; // x23
  WarBoardWallData_SaveData_o *v96; // x22
  const MethodInfo *v97; // x2
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  struct WarBoardSquareData_array *squares; // x8
  __int64 v101; // x22
  struct WarBoardSquareData_SaveData_array *v102; // x0
  int32_t v103; // w2
  const MethodInfo *v104; // x3
  unsigned __int64 v105; // x24
  __int64 v106; // x26
  __int64 v107; // x27
  struct WarBoardSquareData_array *v108; // x8
  struct WarBoardSquareData_SaveData_array *squareSaves; // x28
  WarBoardSquareData_o *v110; // x23
  WarBoardSquareData_SaveData_o *v111; // x22
  const MethodInfo *v112; // x2
  int32_t v113; // w2
  const MethodInfo *v114; // x3
  struct UnityEngine_Vector2_o zeroVector; // d0
  struct System_Collections_Generic_List_WarBoardEventData__o *listEvent; // x8
  __int64 size; // x21
  struct WarBoardEventData_SaveData_array *v118; // x0
  int32_t v119; // w2
  const MethodInfo *v120; // x3
  int32_t v121; // w2
  const MethodInfo *v122; // x3
  unsigned __int64 v123; // x23
  __int64 v124; // x28
  struct WarBoardEventData_SaveData_array *eventSaves; // x29
  Il2CppObject *Item; // x25
  WarBoardEventData_SaveData_o *v127; // x24
  const MethodInfo *v128; // x2
  int32_t v129; // w2
  const MethodInfo *v130; // x3
  struct System_Int32_array *latestPieceActionSquareIndexes; // x1
  struct System_UInt32_array *latestBattlePieceUniqueIndexes; // x1
  int32_t v133; // w2
  const MethodInfo *v134; // x3
  struct System_Collections_Generic_List_WarBoardPrevCondData__o *listPrevCond; // x8
  __int64 v136; // x21
  struct WarBoardPrevCondData_SaveData_array *v137; // x0
  int32_t v138; // w2
  const MethodInfo *v139; // x3
  unsigned __int64 v140; // x23
  __int64 v141; // x28
  struct WarBoardPrevCondData_SaveData_array *prevCondSaves; // x29
  Il2CppObject *v143; // x25
  WarBoardPrevCondData_SaveData_o *v144; // x24
  const MethodInfo *v145; // x2
  int32_t v146; // w2
  const MethodInfo *v147; // x3
  struct System_Collections_Generic_List_HoldReinforcementsData__o *reinforcementsSaveList; // x8
  __int64 v149; // x21
  struct HoldReinforcementsData_SaveData_array *v150; // x0
  int32_t v151; // w2
  const MethodInfo *v152; // x3
  unsigned __int64 v153; // x23
  __int64 v154; // x28
  struct HoldReinforcementsData_SaveData_array *reinforcementsSaves; // x29
  Il2CppObject *v156; // x25
  HoldReinforcementsData_SaveData_o *v157; // x24
  const MethodInfo *v158; // x2
  int32_t v159; // w2
  const MethodInfo *v160; // x3
  struct System_Int32_array *v161; // x0
  int32_t v162; // w2
  const MethodInfo *v163; // x3
  struct System_Collections_Generic_List_WarBoardUiData__o *listUiData; // x8
  __int64 v165; // x21
  struct WarBoardUiData_SaveData_array *v166; // x0
  int32_t v167; // w2
  const MethodInfo *v168; // x3
  unsigned __int64 v169; // x23
  __int64 v170; // x28
  struct WarBoardUiData_SaveData_array *uiDataSaves; // x29
  Il2CppObject *v172; // x25
  WarBoardUiData_SaveData_o *v173; // x24
  const MethodInfo *v174; // x2
  int32_t v175; // w2
  const MethodInfo *v176; // x3
  struct WarBoardDataEntity_o *v177; // x8
  int32_t v178; // w22
  struct WarBoardSquareIndexData_SaveData_array *v179; // x0
  int32_t v180; // w2
  const MethodInfo *v181; // x3
  unsigned __int64 v182; // x24
  __int64 v183; // x26
  __int64 v184; // x27
  struct WarBoardDataEntity_o *v185; // x8
  struct WarBoardSquareIndexData_array *squareIndexInfo; // x8
  struct WarBoardSquareIndexData_SaveData_array *v187; // x28
  WarBoardSquareIndexData_o *v188; // x23
  WarBoardSquareIndexData_SaveData_o *v189; // x22
  const MethodInfo *v190; // x2
  int32_t v191; // w2
  const MethodInfo *v192; // x3
  struct WarBoardDataEntity_o *v193; // x8
  int32_t v194; // w22
  struct WarBoardBossBattleData_SaveData_array *v195; // x0
  int32_t v196; // w2
  const MethodInfo *v197; // x3
  unsigned __int64 v198; // x24
  __int64 v199; // x26
  __int64 v200; // x27
  struct WarBoardDataEntity_o *v201; // x8
  struct WarBoardBossBattleData_array *bossBattleInfo; // x8
  struct WarBoardBossBattleData_SaveData_array *v203; // x28
  WarBoardBossBattleData_o *v204; // x23
  WarBoardBossBattleData_SaveData_o *v205; // x22
  int32_t v206; // w2
  const MethodInfo *v207; // x3
  int32_t ContinueConsumeType_k__BackingField; // w8
  __int64 v209; // x0

  if ( (byte_49B8B52 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___, warBoardData);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardUiData__get_Count__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardPrevCondData__get_Count__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardEventData__get_Count__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_HoldReinforcementsData__get_Count__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardEventData__get_Item__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardUiData__get_Item__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardPrevCondData__get_Item__, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_HoldReinforcementsData__get_Item__, v14);
    sub_1B4CF90(&WarBoardTreasureData_SaveData___TypeInfo, v15);
    sub_1B4CF90(&WarBoardSquareData_SaveData___TypeInfo, v16);
    sub_1B4CF90(&WarBoardSquareIndexData_SaveData___TypeInfo, v17);
    sub_1B4CF90(&HoldReinforcementsData_SaveData___TypeInfo, v18);
    sub_1B4CF90(&WarBoardItemData_SaveData___TypeInfo, v19);
    sub_1B4CF90(&WarBoardWallData_SaveData___TypeInfo, v20);
    sub_1B4CF90(&WarBoardPrevCondData_SaveData___TypeInfo, v21);
    sub_1B4CF90(&WarBoardEventData_SaveData___TypeInfo, v22);
    sub_1B4CF90(&WarBoardUiData_SaveData___TypeInfo, v23);
    sub_1B4CF90(&WarBoardPieceData_SaveData___TypeInfo, v24);
    sub_1B4CF90(&WarBoardBossBattleData_SaveData___TypeInfo, v25);
    sub_1B4CF90(&WarBoardSquareData_SaveData_TypeInfo, v26);
    sub_1B4CF90(&WarBoardTreasureData_SaveData_TypeInfo, v27);
    sub_1B4CF90(&WarBoardBossBattleData_SaveData_TypeInfo, v28);
    sub_1B4CF90(&WarBoardItemData_SaveData_TypeInfo, v29);
    sub_1B4CF90(&WarBoardPrevCondData_SaveData_TypeInfo, v30);
    sub_1B4CF90(&WarBoardWallData_SaveData_TypeInfo, v31);
    sub_1B4CF90(&WarBoardUiData_SaveData_TypeInfo, v32);
    sub_1B4CF90(&WarBoardEventData_SaveData_TypeInfo, v33);
    sub_1B4CF90(&WarBoardSquareIndexData_SaveData_TypeInfo, v34);
    sub_1B4CF90(&HoldReinforcementsData_SaveData_TypeInfo, v35);
    sub_1B4CF90(&WarBoardPieceData_SaveData_TypeInfo, v36);
    byte_49B8B52 = 1;
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
  v42 = (struct WarBoardPieceData_SaveData_array *)sub_1B4D038(WarBoardPieceData_SaveData___TypeInfo, (unsigned int)v41);
  this->fields.pieceSaves = v42;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.pieceSaves, (int32_t)v42, v43, v44);
  if ( (int)v41 >= 1 )
  {
    v45 = 0LL;
    v46 = (unsigned int)v41;
    v47 = 32LL;
    while ( 1 )
    {
      v48 = warBoardData->fields.pieces;
      if ( !v48 )
        break;
      if ( v45 >= v48->max_length )
        goto LABEL_118;
      pieceSaves = this->fields.pieceSaves;
      v50 = *(WarBoardPieceData_o **)((char *)&v48->obj.klass + v47);
      v51 = (WarBoardPieceData_SaveData_o *)sub_1B4D1DC(WarBoardPieceData_SaveData_TypeInfo);
      WarBoardPieceData_SaveData___ctor_36003492(v51, v50, v52);
      if ( !pieceSaves )
        break;
      if ( v51 )
      {
        GutsCount = sub_1B4D0CC(v51, pieceSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
        {
LABEL_119:
          v209 = sub_1B4D210();
          sub_1B4D0B8(v209, 0LL);
        }
      }
      if ( v45 >= pieceSaves->max_length )
LABEL_118:
        sub_1B4D1F4(GutsCount, v38);
      *(Il2CppClass **)((char *)&pieceSaves->obj.klass + v47) = (Il2CppClass *)v51;
      sub_1B4CF34((CGThumbnailListItem_o *)((char *)pieceSaves + v47), (int32_t)v51, v53, v54);
      ++v45;
      v47 += 8LL;
      if ( v46 == v45 )
        goto LABEL_15;
    }
LABEL_117:
    sub_1B4D1EC(GutsCount, v38);
  }
LABEL_15:
  items = warBoardData->fields.items;
  if ( !items )
    goto LABEL_117;
  v56 = *(_QWORD *)&items->max_length;
  v57 = (struct WarBoardItemData_SaveData_array *)sub_1B4D038(WarBoardItemData_SaveData___TypeInfo, (unsigned int)v56);
  this->fields.itemSaves = v57;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.itemSaves, (int32_t)v57, v58, v59);
  if ( (int)v56 >= 1 )
  {
    v60 = 0LL;
    v61 = (unsigned int)v56;
    v62 = 32LL;
    do
    {
      v63 = warBoardData->fields.items;
      if ( !v63 )
        goto LABEL_117;
      if ( v60 >= v63->max_length )
        goto LABEL_118;
      itemSaves = this->fields.itemSaves;
      v65 = *(WarBoardItemData_o **)((char *)&v63->obj.klass + v62);
      v66 = (WarBoardItemData_SaveData_o *)sub_1B4D1DC(WarBoardItemData_SaveData_TypeInfo);
      WarBoardItemData_SaveData___ctor_36003576(v66, v65, v67);
      if ( !itemSaves )
        goto LABEL_117;
      if ( v66 )
      {
        GutsCount = sub_1B4D0CC(v66, itemSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v60 >= itemSaves->max_length )
        goto LABEL_118;
      *(Il2CppClass **)((char *)&itemSaves->obj.klass + v62) = (Il2CppClass *)v66;
      sub_1B4CF34((CGThumbnailListItem_o *)((char *)itemSaves + v62), (int32_t)v66, v68, v69);
      ++v60;
      v62 += 8LL;
    }
    while ( v61 != v60 );
  }
  treasures = warBoardData->fields.treasures;
  if ( !treasures )
    goto LABEL_117;
  v71 = *(_QWORD *)&treasures->max_length;
  v72 = (struct WarBoardTreasureData_SaveData_array *)sub_1B4D038(
                                                        WarBoardTreasureData_SaveData___TypeInfo,
                                                        (unsigned int)v71);
  this->fields.treasureSaves = v72;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.treasureSaves, (int32_t)v72, v73, v74);
  if ( (int)v71 >= 1 )
  {
    v75 = 0LL;
    v76 = (unsigned int)v71;
    v77 = 32LL;
    do
    {
      v78 = warBoardData->fields.treasures;
      if ( !v78 )
        goto LABEL_117;
      if ( v75 >= v78->max_length )
        goto LABEL_118;
      treasureSaves = this->fields.treasureSaves;
      v80 = *(WarBoardTreasureData_o **)((char *)&v78->obj.klass + v77);
      v81 = (WarBoardTreasureData_SaveData_o *)sub_1B4D1DC(WarBoardTreasureData_SaveData_TypeInfo);
      WarBoardTreasureData_SaveData___ctor_36003660(v81, v80, v82);
      if ( !treasureSaves )
        goto LABEL_117;
      if ( v81 )
      {
        GutsCount = sub_1B4D0CC(v81, treasureSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v75 >= treasureSaves->max_length )
        goto LABEL_118;
      *(Il2CppClass **)((char *)&treasureSaves->obj.klass + v77) = (Il2CppClass *)v81;
      sub_1B4CF34((CGThumbnailListItem_o *)((char *)treasureSaves + v77), (int32_t)v81, v83, v84);
      ++v75;
      v77 += 8LL;
    }
    while ( v76 != v75 );
  }
  walls = warBoardData->fields.walls;
  if ( !walls )
    goto LABEL_117;
  v86 = *(_QWORD *)&walls->max_length;
  v87 = (struct WarBoardWallData_SaveData_array *)sub_1B4D038(WarBoardWallData_SaveData___TypeInfo, (unsigned int)v86);
  this->fields.wallSaves = v87;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.wallSaves, (int32_t)v87, v88, v89);
  if ( (int)v86 >= 1 )
  {
    v90 = 0LL;
    v91 = (unsigned int)v86;
    v92 = 32LL;
    do
    {
      v93 = warBoardData->fields.walls;
      if ( !v93 )
        goto LABEL_117;
      if ( v90 >= v93->max_length )
        goto LABEL_118;
      wallSaves = this->fields.wallSaves;
      v95 = *(WarBoardWallData_o **)((char *)&v93->obj.klass + v92);
      v96 = (WarBoardWallData_SaveData_o *)sub_1B4D1DC(WarBoardWallData_SaveData_TypeInfo);
      WarBoardWallData_SaveData___ctor_36003776(v96, v95, v97);
      if ( !wallSaves )
        goto LABEL_117;
      if ( v96 )
      {
        GutsCount = sub_1B4D0CC(v96, wallSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v90 >= wallSaves->max_length )
        goto LABEL_118;
      *(Il2CppClass **)((char *)&wallSaves->obj.klass + v92) = (Il2CppClass *)v96;
      sub_1B4CF34((CGThumbnailListItem_o *)((char *)wallSaves + v92), (int32_t)v96, v98, v99);
      ++v90;
      v92 += 8LL;
    }
    while ( v91 != v90 );
  }
  squares = warBoardData->fields.squares;
  if ( !squares )
    goto LABEL_117;
  v101 = *(_QWORD *)&squares->max_length;
  v102 = (struct WarBoardSquareData_SaveData_array *)sub_1B4D038(
                                                       WarBoardSquareData_SaveData___TypeInfo,
                                                       (unsigned int)v101);
  this->fields.squareSaves = v102;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.squareSaves, (int32_t)v102, v103, v104);
  if ( (int)v101 >= 1 )
  {
    v105 = 0LL;
    v106 = (unsigned int)v101;
    v107 = 32LL;
    do
    {
      v108 = warBoardData->fields.squares;
      if ( !v108 )
        goto LABEL_117;
      if ( v105 >= v108->max_length )
        goto LABEL_118;
      squareSaves = this->fields.squareSaves;
      v110 = *(WarBoardSquareData_o **)((char *)&v108->obj.klass + v107);
      v111 = (WarBoardSquareData_SaveData_o *)sub_1B4D1DC(WarBoardSquareData_SaveData_TypeInfo);
      WarBoardSquareData_SaveData___ctor_36003884(v111, v110, v112);
      if ( !squareSaves )
        goto LABEL_117;
      if ( v111 )
      {
        GutsCount = sub_1B4D0CC(v111, squareSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v105 >= squareSaves->max_length )
        goto LABEL_118;
      *(Il2CppClass **)((char *)&squareSaves->obj.klass + v107) = (Il2CppClass *)v111;
      sub_1B4CF34((CGThumbnailListItem_o *)((char *)squareSaves + v107), (int32_t)v111, v113, v114);
      ++v105;
      v107 += 8LL;
    }
    while ( v106 != v105 );
  }
  if ( !byte_49B525A )
  {
    sub_1B4CF90(&UnityEngine_Vector2_TypeInfo, v38);
    byte_49B525A = 1;
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
  v118 = (struct WarBoardEventData_SaveData_array *)sub_1B4D038(
                                                      WarBoardEventData_SaveData___TypeInfo,
                                                      (unsigned int)size);
  this->fields.eventSaves = v118;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.eventSaves, (int32_t)v118, v119, v120);
  if ( (int)size >= 1 )
  {
    v123 = 0LL;
    v124 = 32LL;
    do
    {
      GutsCount = (__int64)warBoardData->fields.listEvent;
      if ( !GutsCount )
        goto LABEL_117;
      eventSaves = this->fields.eventSaves;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)GutsCount,
               v123,
               (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_WarBoardEventData__get_Item__);
      v127 = (WarBoardEventData_SaveData_o *)sub_1B4D1DC(WarBoardEventData_SaveData_TypeInfo);
      WarBoardEventData_SaveData___ctor_36003976(v127, (WarBoardEventData_o *)Item, v128);
      if ( !eventSaves )
        goto LABEL_117;
      if ( v127 )
      {
        GutsCount = sub_1B4D0CC(v127, eventSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v123 >= eventSaves->max_length )
        goto LABEL_118;
      *(Il2CppClass **)((char *)&eventSaves->obj.klass + v124) = (Il2CppClass *)v127;
      sub_1B4CF34((CGThumbnailListItem_o *)((char *)eventSaves + v124), (int32_t)v127, v129, v130);
      ++v123;
      v124 += 8LL;
    }
    while ( size != v123 );
  }
  this->fields.winCondId = warBoardData->fields.winCondId;
  latestPieceActionSquareIndexes = warBoardData->fields.latestPieceActionSquareIndexes;
  this->fields.latestPieceActionSquareIndexes = latestPieceActionSquareIndexes;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields.latestPieceActionSquareIndexes,
    (int32_t)latestPieceActionSquareIndexes,
    v121,
    v122);
  latestBattlePieceUniqueIndexes = warBoardData->fields.latestBattlePieceUniqueIndexes;
  this->fields.latestBattlePieceUniqueIndexes = latestBattlePieceUniqueIndexes;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields.latestBattlePieceUniqueIndexes,
    (int32_t)latestBattlePieceUniqueIndexes,
    v133,
    v134);
  listPrevCond = warBoardData->fields.listPrevCond;
  if ( !listPrevCond )
    goto LABEL_117;
  v136 = (unsigned int)listPrevCond->fields._size;
  v137 = (struct WarBoardPrevCondData_SaveData_array *)sub_1B4D038(
                                                         WarBoardPrevCondData_SaveData___TypeInfo,
                                                         (unsigned int)v136);
  this->fields.prevCondSaves = v137;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.prevCondSaves, (int32_t)v137, v138, v139);
  if ( (int)v136 >= 1 )
  {
    v140 = 0LL;
    v141 = 32LL;
    do
    {
      GutsCount = (__int64)warBoardData->fields.listPrevCond;
      if ( !GutsCount )
        goto LABEL_117;
      prevCondSaves = this->fields.prevCondSaves;
      v143 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)GutsCount,
               v140,
               (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_WarBoardPrevCondData__get_Item__);
      v144 = (WarBoardPrevCondData_SaveData_o *)sub_1B4D1DC(WarBoardPrevCondData_SaveData_TypeInfo);
      WarBoardPrevCondData_SaveData___ctor_36004036(v144, (WarBoardPrevCondData_o *)v143, v145);
      if ( !prevCondSaves )
        goto LABEL_117;
      if ( v144 )
      {
        GutsCount = sub_1B4D0CC(v144, prevCondSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v140 >= prevCondSaves->max_length )
        goto LABEL_118;
      *(Il2CppClass **)((char *)&prevCondSaves->obj.klass + v141) = (Il2CppClass *)v144;
      sub_1B4CF34((CGThumbnailListItem_o *)((char *)prevCondSaves + v141), (int32_t)v144, v146, v147);
      ++v140;
      v141 += 8LL;
    }
    while ( v136 != v140 );
  }
  reinforcementsSaveList = warBoardData->fields.reinforcementsSaveList;
  if ( !reinforcementsSaveList )
    goto LABEL_117;
  v149 = (unsigned int)reinforcementsSaveList->fields._size;
  v150 = (struct HoldReinforcementsData_SaveData_array *)sub_1B4D038(
                                                           HoldReinforcementsData_SaveData___TypeInfo,
                                                           (unsigned int)v149);
  this->fields.reinforcementsSaves = v150;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.reinforcementsSaves, (int32_t)v150, v151, v152);
  if ( (int)v149 >= 1 )
  {
    v153 = 0LL;
    v154 = 32LL;
    do
    {
      GutsCount = (__int64)warBoardData->fields.reinforcementsSaveList;
      if ( !GutsCount )
        goto LABEL_117;
      reinforcementsSaves = this->fields.reinforcementsSaves;
      v156 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)GutsCount,
               v153,
               (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_HoldReinforcementsData__get_Item__);
      v157 = (HoldReinforcementsData_SaveData_o *)sub_1B4D1DC(HoldReinforcementsData_SaveData_TypeInfo);
      HoldReinforcementsData_SaveData___ctor_36004088(v157, (HoldReinforcementsData_o *)v156, v158);
      if ( !reinforcementsSaves )
        goto LABEL_117;
      if ( v157 )
      {
        GutsCount = sub_1B4D0CC(v157, reinforcementsSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v153 >= reinforcementsSaves->max_length )
        goto LABEL_118;
      *(Il2CppClass **)((char *)&reinforcementsSaves->obj.klass + v154) = (Il2CppClass *)v157;
      sub_1B4CF34((CGThumbnailListItem_o *)((char *)reinforcementsSaves + v154), (int32_t)v157, v159, v160);
      ++v153;
      v154 += 8LL;
    }
    while ( v149 != v153 );
  }
  GutsCount = (__int64)warBoardData->fields.playedStageReinforcementsList;
  if ( !GutsCount )
    goto LABEL_117;
  v161 = System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)GutsCount,
           (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.playedReinforcements = v161;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.playedReinforcements, (int32_t)v161, v162, v163);
  listUiData = warBoardData->fields.listUiData;
  if ( !listUiData )
    goto LABEL_117;
  v165 = (unsigned int)listUiData->fields._size;
  v166 = (struct WarBoardUiData_SaveData_array *)sub_1B4D038(WarBoardUiData_SaveData___TypeInfo, (unsigned int)v165);
  this->fields.uiDataSaves = v166;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.uiDataSaves, (int32_t)v166, v167, v168);
  if ( (int)v165 >= 1 )
  {
    v169 = 0LL;
    v170 = 32LL;
    do
    {
      GutsCount = (__int64)warBoardData->fields.listUiData;
      if ( !GutsCount )
        goto LABEL_117;
      uiDataSaves = this->fields.uiDataSaves;
      v172 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)GutsCount,
               v169,
               (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_WarBoardUiData__get_Item__);
      v173 = (WarBoardUiData_SaveData_o *)sub_1B4D1DC(WarBoardUiData_SaveData_TypeInfo);
      WarBoardUiData_SaveData___ctor_36004148(v173, (WarBoardUiData_o *)v172, v174);
      if ( !uiDataSaves )
        goto LABEL_117;
      if ( v173 )
      {
        GutsCount = sub_1B4D0CC(v173, uiDataSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v169 >= uiDataSaves->max_length )
        goto LABEL_118;
      *(Il2CppClass **)((char *)&uiDataSaves->obj.klass + v170) = (Il2CppClass *)v173;
      sub_1B4CF34((CGThumbnailListItem_o *)((char *)uiDataSaves + v170), (int32_t)v173, v175, v176);
      ++v169;
      v170 += 8LL;
    }
    while ( v165 != v169 );
  }
  v177 = warBoardData->fields.serverData;
  if ( !v177 )
    goto LABEL_117;
  v178 = System_Linq_Enumerable__Count_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v177->fields.squareIndexInfo,
           (const MethodInfo_2F1F018 *)Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___);
  v179 = (struct WarBoardSquareIndexData_SaveData_array *)sub_1B4D038(
                                                            WarBoardSquareIndexData_SaveData___TypeInfo,
                                                            (unsigned int)v178);
  this->fields.squareIndexInfo = v179;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.squareIndexInfo, (int32_t)v179, v180, v181);
  if ( v178 >= 1 )
  {
    v182 = 0LL;
    v183 = (unsigned int)v178;
    v184 = 32LL;
    do
    {
      v185 = warBoardData->fields.serverData;
      if ( !v185 )
        goto LABEL_117;
      squareIndexInfo = v185->fields.squareIndexInfo;
      if ( !squareIndexInfo )
        goto LABEL_117;
      if ( v182 >= squareIndexInfo->max_length )
        goto LABEL_118;
      v187 = this->fields.squareIndexInfo;
      v188 = *(WarBoardSquareIndexData_o **)((char *)&squareIndexInfo->obj.klass + v184);
      v189 = (WarBoardSquareIndexData_SaveData_o *)sub_1B4D1DC(WarBoardSquareIndexData_SaveData_TypeInfo);
      WarBoardSquareIndexData_SaveData___ctor_36004228(v189, v188, v190);
      if ( !v187 )
        goto LABEL_117;
      if ( v189 )
      {
        GutsCount = sub_1B4D0CC(v189, v187->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v182 >= v187->max_length )
        goto LABEL_118;
      *(Il2CppClass **)((char *)&v187->obj.klass + v184) = (Il2CppClass *)v189;
      sub_1B4CF34((CGThumbnailListItem_o *)((char *)v187 + v184), (int32_t)v189, v191, v192);
      ++v182;
      v184 += 8LL;
    }
    while ( v183 != v182 );
  }
  v193 = warBoardData->fields.serverData;
  if ( !v193 )
    goto LABEL_117;
  v194 = System_Linq_Enumerable__Count_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v193->fields.bossBattleInfo,
           (const MethodInfo_2F1F018 *)Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___);
  v195 = (struct WarBoardBossBattleData_SaveData_array *)sub_1B4D038(
                                                           WarBoardBossBattleData_SaveData___TypeInfo,
                                                           (unsigned int)v194);
  this->fields.bossBattleInfo = v195;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.bossBattleInfo, (int32_t)v195, v196, v197);
  if ( v194 >= 1 )
  {
    v198 = 0LL;
    v199 = (unsigned int)v194;
    v200 = 32LL;
    do
    {
      v201 = warBoardData->fields.serverData;
      if ( !v201 )
        goto LABEL_117;
      bossBattleInfo = v201->fields.bossBattleInfo;
      if ( !bossBattleInfo )
        goto LABEL_117;
      if ( v198 >= bossBattleInfo->max_length )
        goto LABEL_118;
      v203 = this->fields.bossBattleInfo;
      v204 = *(WarBoardBossBattleData_o **)((char *)&bossBattleInfo->obj.klass + v200);
      v205 = (WarBoardBossBattleData_SaveData_o *)sub_1B4D1DC(WarBoardBossBattleData_SaveData_TypeInfo);
      WarBoardBossBattleData_SaveData___ctor_35801036(v205, v204, 0LL);
      if ( !v203 )
        goto LABEL_117;
      if ( v205 )
      {
        GutsCount = sub_1B4D0CC(v205, v203->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v198 >= v203->max_length )
        goto LABEL_118;
      *(Il2CppClass **)((char *)&v203->obj.klass + v200) = (Il2CppClass *)v205;
      sub_1B4CF34((CGThumbnailListItem_o *)((char *)v203 + v200), (int32_t)v205, v206, v207);
      ++v198;
      v200 += 8LL;
    }
    while ( v199 != v198 );
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
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49B8B58 & 1) == 0 )
  {
    sub_1B4CF90(&WarBoardData___c_TypeInfo, v1);
    byte_49B8B58 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(WarBoardData___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardData___c_TypeInfo->static_fields->__9 = (struct WarBoardData___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)WarBoardData___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B4D1EC(this, x);
  return x->fields.squareIndex - y->fields.squareIndex;
}


uint32_t __fastcall WarBoardData___c____ctor_b__77_1(
        WarBoardData___c_o *this,
        WarBoardStageNpcEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return (x->fields.forceId << 24) | ((unsigned __int8)x->fields.groupId << 16);
}


uint32_t __fastcall WarBoardData___c____ctor_b__77_2(
        WarBoardData___c_o *this,
        WarBoardActionPointEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return (x->fields.forceId << 24) | ((unsigned __int8)x->fields.groupId << 16);
}


int32_t __fastcall WarBoardData___c____ctor_b__77_3(
        WarBoardData___c_o *this,
        WarBoardStageNpcEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return x->fields.forceId;
}


int32_t __fastcall WarBoardData___c____ctor_b__77_4(
        WarBoardData___c_o *this,
        WarBoardStageNpcEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return x->fields.groupId;
}


bool __fastcall WarBoardData___c____ctor_b__77_9(
        WarBoardData___c_o *this,
        WarBoardUserTreasureData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return x->fields.isReceived;
}


BattleBuffData_o *__fastcall WarBoardData___c___BuffTurnProgressing_b__191_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *p,
        const MethodInfo *method)
{
  struct BattleServantData_o *battleServant_k__BackingField; // x8

  if ( !p )
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, 0LL);
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

  if ( (byte_49B8B5A & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_49B8B5A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v3);
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
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, 0LL);
  return !x->fields._isDead_k__BackingField;
}


bool __fastcall WarBoardData___c___GetAlivePlayerGroupServantPieces_b__109_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, 0LL);
  return !x->fields._isDead_k__BackingField && x->fields._type_k__BackingField == 0;
}


bool __fastcall WarBoardData___c___GetEditableServantPieces_b__120_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, 0LL);
  return x->fields._holdNum_k__BackingField < 1;
}


int32_t __fastcall WarBoardData___c___GetInRangeSquareIndecies_b__123_0(
        WarBoardData___c_o *this,
        WarBoardData_SquareRangeSearch_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return x->fields.squareIndex;
}


bool __fastcall WarBoardData___c___GetPlayerMasterPiece_b__104_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, 0LL);
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
  if ( (byte_49B8B59 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__, status);
    byte_49B8B59 = 1;
  }
  return value;
}


int32_t __fastcall WarBoardData___c___SetContinue_b__82_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return x->fields._index_k__BackingField;
}


BattleServantData_o *__fastcall WarBoardData___c___SetContinue_b__82_1(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return x->fields._battleServant_k__BackingField;
}


bool __fastcall WarBoardData___c___SetContinue_b__82_2(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return x->fields._isDead_k__BackingField && x->fields._battleServant_k__BackingField != 0LL;
}


int32_t __fastcall WarBoardData___c___SetContinue_b__82_3(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct BattleServantData_o *battleServant_k__BackingField; // x8

  if ( !x || (battleServant_k__BackingField = x->fields._battleServant_k__BackingField) == 0LL )
    sub_1B4D1EC(this, x);
  return battleServant_k__BackingField->fields.uniqueId;
}


void __fastcall WarBoardData___c___SetContinue_b__82_4(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  WarBoardPieceData__ProcContinue(x, (const MethodInfo *)x);
}


bool __fastcall WarBoardData___c___SetPlayerMasterUserEquip_b__144_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, 0LL);
  WarBoardPieceData__SetServarData(x, (const MethodInfo *)x);
}


System_String_o *__fastcall WarBoardData___c___SetRequest_b__156_1(
        WarBoardData___c_o *this,
        WarBoardItemData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, 0LL);
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

  if ( (byte_49B8B5B & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, c);
    byte_49B8B5B = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)c, 0LL, 0LL);
  if ( !v4 )
    return 0;
  if ( !c )
    sub_1B4D1EC(v4, v5);
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
    sub_1B4D1EC(this, n);
  }
  WarBoardServantPieceBuffTurnComponent__UpdateDisp((WarBoardServantPieceBuffTurnComponent_o *)this, 1, 0LL);
}


int32_t __fastcall WarBoardData___c___UpdateCurrentPartyCost_b__143_0(
        WarBoardData___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return UserServantEntity__getCost(x, 0LL);
}


bool __fastcall WarBoardData___c___get_PlayerMasterUserEquipId_b__62_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, x);
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
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, x);
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
    sub_1B4D1EC(this, x);
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
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, 0LL);
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
  if ( (byte_49B8B5C & 1) == 0 )
  {
    this = (WarBoardData___c__DisplayClass118_0_o *)sub_1B4CF90(&Method_System_Linq_Enumerable_Contains_int___, x);
    byte_49B8B5C = 1;
  }
  if ( !x )
    sub_1B4D1EC(this, x);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.inRangeSquaers,
           x->fields._nowSquareIndex_k__BackingField,
           (const MethodInfo_2F1C00C *)Method_System_Linq_Enumerable_Contains_int___);
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
  if ( (byte_49B8B5D & 1) == 0 )
  {
    this = (WarBoardData___c__DisplayClass119_0_o *)sub_1B4CF90(&Method_System_Linq_Enumerable_Contains_int___, x);
    byte_49B8B5D = 1;
  }
  if ( !x )
    sub_1B4D1EC(this, x);
  return !x->fields._isDead_k__BackingField
      && System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.inRangeSquaers,
           x->fields._nowSquareIndex_k__BackingField,
           (const MethodInfo_2F1C00C *)Method_System_Linq_Enumerable_Contains_int___);
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
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, x);
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
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, x);
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
    sub_1B4D1EC(this, 0LL);
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
  if ( (byte_49B8B5E & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, x);
    this = (WarBoardData___c__DisplayClass143_0_o *)sub_1B4CF90(
                                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                      v5);
    byte_49B8B5E = 1;
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
  this = (WarBoardData___c__DisplayClass143_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
                                                    v10,
                                                    0LL);
  if ( !svtMaster
    || (this = (WarBoardData___c__DisplayClass143_0_o *)DataMasterBase_object__object__int___GetEntity(
                                                          svtMaster,
                                                          (int32_t)this,
                                                          (const MethodInfo_319D99C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1B4D1EC(this, x);
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
    sub_1B4D1EC(this, x);
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
    sub_1B4D1EC(this, x);
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
    sub_1B4D1EC(this, 0LL);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t key; // w0
  struct System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___o *consumedPieceActionPointDict; // x8
  int32_t v16; // w19
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *Only; // x0
  Il2CppObject *value; // x1
  System_Collections_Generic_KeyValuePair_int__object__o KeyValuePair_int__object; // kr00_16

  if ( (byte_49B8B5F & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_bool__TypeInfo, method);
    sub_1B4CF90(&Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_KeyValuePair_int__List_WarBoardPieceData___get_Key__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_KeyValuePair_int__List_WarBoardPieceData___get_Value__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardPieceData__AsReadOnly__, v6);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__2__, v8);
    byte_49B8B5F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  _9__2 = this->fields.__9__2;
  v11 = (WarBoardManager_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_bool__o *)sub_1B4D1DC(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v12, v13);
  }
  key = System_Linq_Enumerable__First_KeyValuePair_int__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.consumedPieceActionPointDict,
          (const MethodInfo_2F240CC *)Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____).fields.key;
  consumedPieceActionPointDict = this->fields.consumedPieceActionPointDict;
  v16 = key;
  KeyValuePair_int__object = System_Linq_Enumerable__First_KeyValuePair_int__object__(
                               (System_Collections_Generic_IEnumerable_TSource__o *)consumedPieceActionPointDict,
                               (const MethodInfo_2F240CC *)Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____);
  value = KeyValuePair_int__object.fields.value;
  Only = *(System_Collections_ObjectModel_ReadOnlyCollection_T__o **)&KeyValuePair_int__object.fields.key;
  if ( !KeyValuePair_int__object.fields.value
    || (Only = System_Collections_Generic_List_object___AsReadOnly(
                 (System_Collections_Generic_List_object__o *)KeyValuePair_int__object.fields.value,
                 (const MethodInfo_3580404 *)Method_System_Collections_Generic_List_WarBoardPieceData__AsReadOnly__),
        !v11) )
  {
    sub_1B4D1EC(Only, value);
  }
  WarBoardManager__ShowConsumedPieceActionPointPopup(
    v11,
    _9__2,
    v16,
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_49B8B60 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, _);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    sub_1B4CF90(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__3__, v5);
    byte_49B8B60 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  _9__3 = this->fields.__9__3;
  v9 = (WarBoardManager_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.__9__3, (int32_t)_9__3, v10, v11);
  }
  if ( !v9 )
    sub_1B4D1EC(Instance, v7);
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

  if ( (byte_49B8B61 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Remove__, method);
    sub_1B4CF90(&Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_KeyValuePair_int__List_WarBoardPieceData___get_Key__, v4);
    byte_49B8B61 = 1;
  }
  this->fields.consumedPiecePopupClose = 1;
  consumedPieceActionPointDict = this->fields.consumedPieceActionPointDict;
  KeyValuePair_int__object = System_Linq_Enumerable__First_KeyValuePair_int__object__(
                               (System_Collections_Generic_IEnumerable_TSource__o *)consumedPieceActionPointDict,
                               (const MethodInfo_2F240CC *)Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____);
  value = KeyValuePair_int__object.fields.value;
  _4__this = *(WarBoardData_o **)&KeyValuePair_int__object.fields.key;
  if ( !consumedPieceActionPointDict
    || (System_Collections_Generic_Dictionary_int__object___Remove(
          (System_Collections_Generic_Dictionary_int__object__o *)consumedPieceActionPointDict,
          KeyValuePair_int__object.fields.key,
          (const MethodInfo_31F8308 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Remove__),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_1B4D1EC(_4__this, value);
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
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, x);
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
    sub_1B4D1EC(this, x);
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
  const MethodInfo *v12; // x3

  v4 = this;
  if ( (byte_49B8B62 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_Any_int____75494880, x);
    sub_1B4CF90(&System_Func_int__bool__TypeInfo, v5);
    this = (WarBoardData___c__DisplayClass189_1_o *)sub_1B4CF90(
                                                      &Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__2__,
                                                      v6);
    byte_49B8B62 = 1;
  }
  if ( !x
    || (CS___8__locals1 = v4->fields.CS___8__locals1) == 0LL
    || (stageEntity = CS___8__locals1->fields.stageEntity) == 0LL )
  {
    sub_1B4D1EC(this, x);
  }
  if ( x->fields.stageReinforcementId != stageEntity->fields.id )
    return 0;
  reinforcementsIdx = x->fields.reinforcementsIdx;
  _9__2 = v4->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Func_int__bool__o *)sub_1B4D1DC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__2,
      (Il2CppObject *)v4,
      Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__2__,
      0LL);
    v4->fields.__9__2 = _9__2;
    sub_1B4CF34((CGThumbnailListItem_o *)&v4->fields.__9__2, (int32_t)_9__2, v11, v12);
  }
  return BasicHelper__Any_int__49201684(
           reinforcementsIdx,
           (System_Func_T__bool__o *)_9__2,
           (const MethodInfo_2EEC214 *)Method_BasicHelper_Any_int____75494880);
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
    sub_1B4D1EC(this, x);
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
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, a);
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
      sub_1B4D1F4(this, a);
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
    sub_1B4D1EC(this, x);
  return x->fields.forceId == piece->fields.forceId && x->fields.groupId == piece->fields.groupId;
}


bool __fastcall WarBoardData___c__DisplayClass77_0____ctor_b__6(
        WarBoardData___c__DisplayClass77_0_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_SaveData_o *piece; // x8

  if ( !x || (piece = this->fields.piece) == 0LL )
    sub_1B4D1EC(this, x);
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
    sub_1B4D1EC(this, x);
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
    sub_1B4D1EC(this, x);
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
    sub_1B4D1EC(this, x);
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
    sub_1B4D1EC(this, x);
  return x->fields.treasureId == layout->fields.effectId;
}


bool __fastcall WarBoardData___c__DisplayClass77_4____ctor_b__12(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserMasterData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0LL )
    sub_1B4D1EC(this, x);
  return x->fields.forceId == layout->fields.forceId && x->fields.groupId == layout->fields.groupId;
}


bool __fastcall WarBoardData___c__DisplayClass77_4____ctor_b__13(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0LL )
    sub_1B4D1EC(this, x);
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
    sub_1B4D1EC(this, x);
  return x->fields.squareIndex == layout->fields.squareIndex;
}


bool __fastcall WarBoardData___c__DisplayClass77_4____ctor_b__15(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserWallData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0LL )
    sub_1B4D1EC(this, x);
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
    sub_1B4D1EC(this, x);
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
    sub_1B4D1EC(this, x);
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
    sub_1B4D1EC(this, 0LL);
  return !x->fields._isDead_k__BackingField && x->fields._uniqueIndex_k__BackingField == this->fields.uniqueId;
}