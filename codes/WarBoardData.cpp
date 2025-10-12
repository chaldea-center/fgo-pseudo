void WarBoardData___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct WarBoardData_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C35431 & 1) == 0 )
  {
    sub_1C32C20(&WarBoardData_TypeInfo);
    sub_1C32C20(&StringLiteral_1930/*"AFTER_CONTINUE_DEVICE_FOR_WARBOARD"*/);
    sub_1C32C20(&StringLiteral_15369/*"WARBOARDDATA_SAVEDATA"*/);
    byte_4C35431 = 1;
  }
  WarBoardData_TypeInfo->static_fields->WARBOARDDATA_SAVEDATA_KEY = (struct System_String_o *)StringLiteral_15369/*"WARBOARDDATA_SAVEDATA"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)WarBoardData_TypeInfo->static_fields, StringLiteral_15369/*"WARBOARDDATA_SAVEDATA"*/, v1, v2);
  v3 = StringLiteral_1930/*"AFTER_CONTINUE_DEVICE_FOR_WARBOARD"*/;
  static_fields = WarBoardData_TypeInfo->static_fields;
  static_fields->AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY = (struct System_String_o *)StringLiteral_1930/*"AFTER_CONTINUE_DEVICE_FOR_WARBOARD"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY, v3, v5, v6);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_object__o *v11; // x19
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Int32_array *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_UInt32_array *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_object__o *v20; // x19
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_object__o *v23; // x19
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_List_int__o *v26; // x19
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Collections_Generic_List_object__o *v29; // x19
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Collections_Generic_List_int__o *v32; // x19
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Collections_Generic_List_int__o *v35; // x19
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  WarBoardData___c_c *v38; // x0
  System_Comparison_T__o *_9__77_0; // x19
  Il2CppObject *v40; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  __int64 Instance; // x0
  Il2CppObject *MasterData_object; // x0
  struct WarBoardStageNpcMaster_o **p_stageNpcMaster; // x19
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  System_Collections_Generic_IEnumerable_WarBoardStageNpcEntity__o *WarBoardStageEntities; // x0
  WarBoardData___c_c *v52; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x21
  System_Func_T__TResult__o *_9__77_1; // x19
  Il2CppObject *v55; // x22
  struct WarBoardData___c_StaticFields *v56; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *v59; // x0
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  System_Collections_Generic_IEnumerable_WarBoardActionPointEntity__o *WarBoardActionPointEntities; // x0
  WarBoardData___c_c *v63; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x20
  System_Func_T__TResult__o *_9__77_2; // x19
  Il2CppObject *v66; // x21
  struct WarBoardData___c_StaticFields *v67; // x0
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  struct System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__o *v70; // x0
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  WarBoardData___c_c *v74; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v75; // x20
  System_Func_object__int__o *_9__77_3; // x19
  Il2CppObject *v77; // x21
  struct WarBoardData___c_StaticFields *v78; // x0
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *npcEntityDict; // x8
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *v82; // x0
  WarBoardData___c_c *v83; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v84; // x20
  System_Func_object__int__o *_9__77_4; // x19
  Il2CppObject *v86; // x21
  struct WarBoardData___c_StaticFields *v87; // x0
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  System_Collections_Generic_List_object__o *v90; // x27
  WarBoardData_c *v91; // x0
  WarBoardDataEntity_o *v92; // x26
  System_Collections_Generic_List_object__o *v93; // x24
  WarBoardStageLayoutEntity_array *v94; // x28
  System_String_o *WARBOARDDATA_SAVEDATA_KEY; // x19
  WarBoardData_c *v96; // x0
  int32_t progressType; // w19
  System_String_o *v98; // x19
  System_String_o *String; // x19
  System_Byte_array *v100; // x19
  MiniMessagePack_MiniMessagePacker_o *v101; // x20
  Il2CppObject *v102; // x0
  struct WarBoardData_WarBoardLocalSaveData_o **p_localSaveData; // x20
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8
  struct WarBoardPieceData_SaveData_array *pieceSaves; // x24
  _QWORD *v108; // x25
  unsigned __int64 v109; // x28
  __int64 v110; // x22
  int32_t v111; // w2
  const MethodInfo *v112; // x3
  WarBoardPieceData_SaveData_o *v113; // x1
  WarBoardPieceData_SaveData_o **v114; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v115; // x19
  System_Func_object__bool__o *v116; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v117; // x19
  System_Func_object__bool__o *v118; // x23
  struct WarBoardItemData_SaveData_array *itemSaves; // x24
  unsigned __int64 v120; // x28
  __int64 v121; // x19
  int32_t v122; // w2
  const MethodInfo *v123; // x3
  WarBoardItemData_SaveData_o *v124; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v125; // x22
  System_Func_object__bool__o *v126; // x23
  CGThumbnailListItem_o *v127; // x25
  struct WarBoardTreasureData_SaveData_array *treasureSaves; // x28
  char v129; // w26
  unsigned __int64 v130; // x29
  __int64 v131; // x19
  int32_t v132; // w2
  const MethodInfo *v133; // x3
  WarBoardTreasureData_SaveData_o *v134; // x1
  __int64 v135; // x21
  System_Collections_Generic_IEnumerable_TSource__o *klass; // x23
  System_Func_object__bool__o *v137; // x24
  WarBoardData___c_c *v138; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v139; // x21
  System_Func_object__bool__o *_9__77_9; // x19
  Il2CppObject *v141; // x23
  struct WarBoardData___c_StaticFields *v142; // x0
  int32_t v143; // w2
  const MethodInfo *v144; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v145; // x0
  System_Object_array *v146; // x0
  int32_t v147; // w2
  const MethodInfo *v148; // x3
  struct WarBoardWallData_SaveData_array *wallSaves; // x24
  unsigned __int64 v150; // x25
  __int64 v151; // x19
  int32_t v152; // w2
  const MethodInfo *v153; // x3
  WarBoardWallData_SaveData_o *v154; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v155; // x22
  System_Func_object__bool__o *v156; // x23
  int v157; // w19
  unsigned __int64 v158; // x23
  __int64 v159; // x24
  __int64 v160; // x25
  struct WarBoardSquareIndexData_SaveData_array *squareIndexInfo; // x8
  unsigned int *v162; // x27
  WarBoardSquareIndexData_SaveData_o *v163; // x21
  WarBoardSquareIndexData_o *v164; // x19
  int32_t v165; // w2
  const MethodInfo *v166; // x3
  int v167; // w19
  unsigned __int64 v168; // x23
  __int64 v169; // x24
  __int64 v170; // x25
  struct WarBoardBossBattleData_SaveData_array *bossBattleInfo; // x8
  unsigned int *v172; // x27
  WarBoardBossBattleData_SaveData_o *v173; // x21
  WarBoardBossBattleData_o *v174; // x19
  const MethodInfo *v175; // x2
  int32_t v176; // w2
  const MethodInfo *v177; // x3
  WarBoardData_c *v178; // x0
  int32_t v179; // w2
  const MethodInfo *v180; // x3
  unsigned __int64 v181; // x25
  __int64 v182; // x23
  int32_t v183; // w2
  const MethodInfo *v184; // x3
  WarBoardStageLayoutEntity_o *v185; // x1
  WarBoardStageLayoutEntity_o **v186; // x29
  WarBoardStageLayoutEntity_o *v187; // x19
  WarBoardSquareData_o *v188; // x22
  int32_t v189; // w2
  const MethodInfo *v190; // x3
  __int64 v191; // x9
  WarBoardStageLayoutEntity_o *v192; // x8
  int32_t throughCondId; // w1
  struct System_Object_array *items; // x8
  _QWORD *v195; // x9
  __int64 size; // x10
  Il2CppClass **v197; // x0
  WarBoardStageLayoutEntity_o *v198; // x8
  int32_t questPhase; // w22
  System_Collections_Generic_IEnumerable_TSource__o *svtInfo; // x19
  System_Func_object__bool__o *v201; // x20
  WarBoardUserServantData_o *v202; // x21
  WarBoardUserMasterData_o *v203; // x20
  struct System_Object_array *v204; // x8
  _QWORD *v205; // x9
  __int64 v206; // x10
  Il2CppClass **v207; // x0
  CGThumbnailListItem_o *v208; // x0
  int32_t v209; // w1
  System_Collections_Generic_IEnumerable_TSource__o *masterInfo; // x19
  System_Func_object__bool__o *v211; // x20
  WarBoardStageLayoutEntity_o *v212; // x8
  WarBoardDataEntity_WarBoardDeckData_o **v213; // x9
  WarBoardDataEntity_WarBoardDeckData_o *v214; // x27
  int32_t Type; // w0
  bool IsNpc; // w0
  WarBoardStageLayoutEntity_o *v217; // x28
  int32_t v218; // w22
  bool v219; // w26
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *v220; // x19
  WarBoardPieceData_o *v221; // x0
  WarBoardPieceData_o *v222; // x24
  bool v223; // w5
  int32_t v224; // w2
  const MethodInfo *v225; // x3
  int32_t forceId_k__BackingField; // w1
  __int64 v227; // x8
  _QWORD *v228; // x9
  __int64 v229; // x10
  NpcFollowerEntity_o *Entity_42319072; // x0
  NpcFollowerEntity_o *v231; // x19
  int32_t v232; // w2
  const MethodInfo *v233; // x3
  struct System_Object_array *v234; // x8
  _QWORD *v235; // x9
  __int64 v236; // x10
  Il2CppClass **v237; // x0
  __int64 v238; // x8
  System_Collections_Generic_List_object__o *v239; // x0
  Il2CppObject *v240; // x1
  struct System_Object_array *v241; // x8
  _QWORD *v242; // x9
  __int64 v243; // x10
  Il2CppClass **v244; // x0
  WarBoardStageLayoutEntity_o *v245; // x21
  System_Collections_Generic_IEnumerable_TSource__o *getItemInfo; // x19
  System_Func_object__bool__o *v247; // x20
  Il2CppObject *v248; // x0
  WarBoardStageLayoutEntity_o *v249; // x19
  WarBoardUserGetItemData_o *v250; // x21
  WarBoardItemData_o *v251; // x20
  System_Collections_Generic_List_object__o *v252; // x12
  int32_t version; // w10
  struct System_Object_array *v254; // x8
  __int64 *v255; // x9
  System_Collections_Generic_IEnumerable_TSource__o *treasureInfo; // x19
  System_Func_object__bool__o *v257; // x20
  System_Collections_Generic_IEnumerable_TSource__o *wallInfo; // x19
  System_Func_object__bool__o *v259; // x20
  Il2CppObject *v260; // x0
  WarBoardStageLayoutEntity_o *v261; // x19
  WarBoardUserWallData_o *v262; // x21
  __int64 v263; // x9
  __int64 v264; // x10
  Il2CppClass **v265; // x0
  System_Object_array *v266; // x0
  WarBoardData_o *v267; // x25
  int32_t v268; // w2
  const MethodInfo *v269; // x3
  System_Object_array *v270; // x0
  int32_t v271; // w2
  const MethodInfo *v272; // x3
  System_Object_array *v273; // x0
  System_Collections_Generic_IEnumerable_T__o **p_pieces; // x23
  int32_t v275; // w2
  const MethodInfo *v276; // x3
  System_Object_array *pieces; // x19
  System_Comparison_T__o *v278; // x20
  System_Object_array *v279; // x0
  int32_t v280; // w2
  const MethodInfo *v281; // x3
  System_Object_array *v282; // x0
  int32_t v283; // w2
  const MethodInfo *v284; // x3
  System_Object_array *v285; // x0
  int32_t v286; // w2
  const MethodInfo *v287; // x3
  System_Object_array *v288; // x0
  int32_t v289; // w2
  const MethodInfo *v290; // x3
  int32_t v291; // w2
  const MethodInfo *v292; // x3
  const MethodInfo *v293; // x1
  struct WarBoardData_WarBoardLocalSaveData_o *v294; // x8
  struct WarBoardPieceData_SaveData_array *v295; // x28
  unsigned __int64 v296; // x29
  __int64 v297; // x21
  int32_t v298; // w2
  const MethodInfo *v299; // x3
  WarBoardPieceData_SaveData_o *v300; // x1
  WarBoardPieceData_SaveData_o **v301; // x22
  System_Collections_Generic_IEnumerable_T__o *v302; // x19
  System_Func_object__bool__o *v303; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v304; // x19
  System_Func_object__bool__o *v305; // x24
  Il2CppObject *v306; // x21
  System_Collections_Generic_List_object__o *v307; // x24
  int32_t id; // w19
  WarBoardPieceData_SaveData_o *v309; // x26
  WarBoardPieceData_o *v310; // x25
  int32_t v311; // w2
  const MethodInfo *v312; // x3
  struct System_Object_array *v313; // x8
  _QWORD *v314; // x9
  __int64 v315; // x10
  Il2CppClass **v316; // x0
  System_Object_array *v317; // x0
  int32_t v318; // w2
  const MethodInfo *v319; // x3
  __int64 v320; // x20
  int v321; // w8
  unsigned int v322; // w21
  __int64 v323; // x8
  WarBoardItemData_SaveData_o *v324; // x19
  _DWORD *data; // x20
  int v326; // w8
  unsigned int v327; // w21
  char *v328; // x8
  WarBoardTreasureData_SaveData_o *v329; // x19
  __int64 v330; // x20
  int v331; // w8
  unsigned int v332; // w21
  __int64 v333; // x8
  WarBoardWallData_SaveData_o *v334; // x19
  Il2CppClass *element_class; // x20
  int namespaze; // w8
  unsigned int v337; // w21
  void **v338; // x8
  WarBoardSquareData_SaveData_o *v339; // x19
  System_Collections_Generic_List_object__o *v340; // x19
  int32_t v341; // w2
  const MethodInfo *v342; // x3
  int32_t v343; // w2
  const MethodInfo *v344; // x3
  struct WarBoardData_WarBoardLocalSaveData_o *v345; // x8
  struct WarBoardEventData_SaveData_array *eventSaves; // x20
  il2cpp_array_size_t v347; // x8
  unsigned __int64 v348; // x23
  WarBoardEventData_SaveData_o *v349; // x19
  System_Collections_Generic_List_object__o *v350; // x21
  WarBoardEventData_o *v351; // x22
  int32_t v352; // w2
  const MethodInfo *v353; // x3
  struct System_Object_array *v354; // x8
  _QWORD *v355; // x9
  __int64 v356; // x10
  Il2CppClass **v357; // x0
  Il2CppClass *v358; // x8
  struct System_Int32_array *typeHierarchy; // x1
  int32_t v360; // w2
  const MethodInfo *v361; // x3
  struct WarBoardData_WarBoardLocalSaveData_o *v362; // x8
  CGThumbnailListItem_c *latestBattlePieceUniqueIndexes; // x1
  System_Collections_Generic_List_object__o *v364; // x19
  int32_t v365; // w2
  const MethodInfo *v366; // x3
  _QWORD *properties; // x20
  __int64 v368; // x8
  unsigned __int64 v369; // x23
  WarBoardPrevCondData_SaveData_o *v370; // x19
  System_Collections_Generic_List_object__o *v371; // x21
  WarBoardPrevCondData_o *v372; // x22
  int32_t v373; // w2
  const MethodInfo *v374; // x3
  struct System_Object_array *v375; // x8
  _QWORD *v376; // x9
  __int64 v377; // x10
  Il2CppClass **v378; // x0
  System_Collections_Generic_List_object__o *v379; // x19
  int32_t v380; // w2
  const MethodInfo *v381; // x3
  _QWORD *methods; // x20
  __int64 v383; // x8
  unsigned __int64 v384; // x23
  HoldReinforcementsData_SaveData_o *v385; // x19
  System_Collections_Generic_List_object__o *v386; // x21
  HoldReinforcementsData_o *v387; // x22
  int32_t v388; // w2
  const MethodInfo *v389; // x3
  struct System_Object_array *v390; // x8
  _QWORD *v391; // x9
  __int64 v392; // x10
  Il2CppClass **v393; // x0
  System_Collections_Generic_List_TSource__o *v394; // x0
  int32_t v395; // w2
  const MethodInfo *v396; // x3
  System_Collections_Generic_List_object__o *v397; // x19
  int32_t v398; // w2
  const MethodInfo *v399; // x3
  int32_t v400; // w2
  const MethodInfo *v401; // x3
  Il2CppClass **implementedInterfaces; // x20
  Il2CppClass *v403; // x8
  unsigned __int64 v404; // x23
  WarBoardUiData_SaveData_o *v405; // x19
  System_Collections_Generic_List_object__o *v406; // x21
  WarBoardUiData_o *v407; // x22
  int32_t v408; // w2
  const MethodInfo *v409; // x3
  struct System_Object_array *v410; // x8
  _QWORD *v411; // x9
  __int64 v412; // x10
  Il2CppClass **v413; // x0
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets; // x1
  Il2CppClass *v415; // x8
  WarBoardData_WarBoardLocalSaveData_o *v416; // x19
  int32_t v417; // w2
  const MethodInfo *v418; // x3
  __int64 v419; // x0
  CGThumbnailListItem_o *p_bgAnimationInfo_k__BackingField; // [xsp+10h] [xbp-170h]
  CGThumbnailListItem_o *p_listUiData; // [xsp+18h] [xbp-168h]
  CGThumbnailListItem_o *p_playedStageReinforcementsList; // [xsp+20h] [xbp-160h]
  CGThumbnailListItem_o *p_latestBattlePieceUniqueIndexes; // [xsp+28h] [xbp-158h]
  struct System_Int32_array **p_latestPieceActionSquareIndexes; // [xsp+30h] [xbp-150h]
  CGThumbnailListItem_o *p_reinforcementsSaveList; // [xsp+38h] [xbp-148h]
  DataMasterBase_TMaster__TEntity__PKType__o *v426; // [xsp+40h] [xbp-140h]
  System_Collections_Generic_List_object__o *v427; // [xsp+48h] [xbp-138h]
  WarBoardDataEntity_WarBoardDeckData_o **p_myDeck; // [xsp+50h] [xbp-130h]
  struct System_Collections_Generic_List_int__o **p_masterExistsForce; // [xsp+58h] [xbp-128h]
  System_Collections_Generic_List_object__o *v430; // [xsp+60h] [xbp-120h]
  System_Collections_Generic_List_object__o *v431; // [xsp+68h] [xbp-118h]
  System_Collections_Generic_List_object__o *v432; // [xsp+70h] [xbp-110h]
  NpcFollowerMaster_o *v433; // [xsp+78h] [xbp-108h]
  WarBoardStagePieceDetailMaster_o *Master_object; // [xsp+80h] [xbp-100h]
  System_Collections_Generic_List_object__o *v435; // [xsp+88h] [xbp-F8h]
  WarBoardData_Fields *p_fields; // [xsp+90h] [xbp-F0h]
  WarBoardCommonReleaseMaster_o *v437; // [xsp+98h] [xbp-E8h]
  WarBoardData_o *v438; // [xsp+A0h] [xbp-E0h]
  struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o **p_npcEntityDict; // [xsp+A8h] [xbp-D8h]
  System_Collections_Generic_List_object__o *v440; // [xsp+B0h] [xbp-D0h]
  System_Collections_Generic_List_object__o *v441; // [xsp+B0h] [xbp-D0h]
  System_Collections_Generic_List_object__o *v442; // [xsp+B8h] [xbp-C8h]
  WarBoardDataEntity_WarBoardDeckData_o **p_enemyDeck; // [xsp+C8h] [xbp-B8h]
  CGThumbnailListItem_o *p_listPrevCond; // [xsp+D0h] [xbp-B0h]
  struct System_Collections_Generic_List_WarBoardEventData__o **p_listEvent; // [xsp+D8h] [xbp-A8h]
  int32_t v447; // [xsp+E4h] [xbp-9Ch]
  int32_t questId; // [xsp+E8h] [xbp-98h]
  int32_t npcIdx; // [xsp+ECh] [xbp-94h]
  System_Object_array **v451; // [xsp+F0h] [xbp-90h]
  WarBoardDataEntity_o *v452; // [xsp+F0h] [xbp-90h]
  il2cpp_array_size_t max_length; // [xsp+F8h] [xbp-88h]
  WarBoardRoadEntity_array *roadEntitiesb; // [xsp+100h] [xbp-80h]
  bool isChangeName; // [xsp+10Ch] [xbp-74h] BYREF
  Il2CppObject *v457; // [xsp+110h] [xbp-70h] BYREF
  WarBoardStagePieceDetailEntity_o *entity; // [xsp+118h] [xbp-68h] BYREF

  if ( (byte_4C353D9 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Resize_WarBoardBossBattleData___);
    sub_1C32C20(&Method_System_Array_Resize_WarBoardSquareIndexData___);
    sub_1C32C20(&Method_System_Array_Sort_WarBoardPieceData___);
    sub_1C32C20(&Method_System_Array_Sort_WarBoardStageLayoutEntity___);
    sub_1C32C20(&Method_BasicHelper_Any_WarBoardPieceData___);
    sub_1C32C20(&System_Comparison_WarBoardPieceData__TypeInfo);
    sub_1C32C20(&System_Comparison_WarBoardStageLayoutEntity__TypeInfo);
    sub_1C32C20(&System_Convert_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_WarBoardActionPointMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_WarBoardStageDetailMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_WarBoardStageNpcMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Values__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C32C20(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Count_WarBoardBossBattleData_SaveData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData_SaveData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserTreasureData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Max_WarBoardStageNpcEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_WarBoardUserTreasureData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToDictionary_WarBoardActionPointEntity__uint___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToDictionary_WarBoardStageNpcEntity__uint___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_WarBoardUserTreasureData___);
    sub_1C32C20(&System_Func_WarBoardUserTreasureData__bool__TypeInfo);
    sub_1C32C20(&System_Func_WarBoardStageNpcEntity__uint__TypeInfo);
    sub_1C32C20(&System_Func_WarBoardUserWallData__bool__TypeInfo);
    sub_1C32C20(&System_Func_WarBoardUserMasterData__bool__TypeInfo);
    sub_1C32C20(&System_Func_WarBoardStageNpcEntity__int__TypeInfo);
    sub_1C32C20(&System_Func_WarBoardUserServantData__bool__TypeInfo);
    sub_1C32C20(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C32C20(&System_Func_WarBoardUserGetItemData__bool__TypeInfo);
    sub_1C32C20(&System_Func_WarBoardActionPointEntity__uint__TypeInfo);
    sub_1C32C20(&HoldReinforcementsData_TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardSquareData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardUiData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardEventData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardEffectData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTreasureData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardWallData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_HoldReinforcementsData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardItemData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTreasureData__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardEffectData__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardWallData__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardItemData__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardPrevCondData___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardSquareData___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardEventData___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardUiData___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_HoldReinforcementsData___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTreasureData___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardItemData___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardWallData___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardEffectData___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardWallData__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardTreasureData__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardItemData__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardUiData__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardPrevCondData__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardEffectData__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardEventData__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_HoldReinforcementsData__TypeInfo);
    sub_1C32C20(&Method_MiniMessagePack_MiniMessagePacker_UnpackClass_WarBoardData_WarBoardLocalSaveData___);
    sub_1C32C20(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&Method_WarBoardData___c___ctor_b__77_0__);
    sub_1C32C20(&Method_WarBoardData___c___ctor_b__77_1__);
    sub_1C32C20(&Method_WarBoardData___c___ctor_b__77_2__);
    sub_1C32C20(&Method_WarBoardData___c___ctor_b__77_3__);
    sub_1C32C20(&Method_WarBoardData___c___ctor_b__77_4__);
    sub_1C32C20(&Method_WarBoardData___c___ctor_b__77_9__);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass77_0___ctor_b__5__);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass77_0___ctor_b__6__);
    sub_1C32C20(&WarBoardData___c__DisplayClass77_0_TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass77_1___ctor_b__7__);
    sub_1C32C20(&WarBoardData___c__DisplayClass77_1_TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass77_2___ctor_b__8__);
    sub_1C32C20(&WarBoardData___c__DisplayClass77_2_TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass77_3___ctor_b__10__);
    sub_1C32C20(&WarBoardData___c__DisplayClass77_3_TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__11__);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__12__);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__13__);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__14__);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__15__);
    sub_1C32C20(&WarBoardData___c__DisplayClass77_4_TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass77_5___ctor_b__16__);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass77_5___ctor_b__17__);
    sub_1C32C20(&WarBoardData___c__DisplayClass77_5_TypeInfo);
    sub_1C32C20(&WarBoardData___c_TypeInfo);
    sub_1C32C20(&uint___TypeInfo);
    sub_1C32C20(&WarBoardBossBattleData_TypeInfo);
    sub_1C32C20(&Method_WarBoardData_ComparePiece__);
    sub_1C32C20(&WarBoardData_TypeInfo);
    sub_1C32C20(&WarBoardEffectData_TypeInfo);
    sub_1C32C20(&WarBoardEventData_TypeInfo);
    sub_1C32C20(&WarBoardItemData_TypeInfo);
    sub_1C32C20(&WarBoardData_WarBoardLocalSaveData_TypeInfo);
    sub_1C32C20(&WarBoardPieceData_TypeInfo);
    sub_1C32C20(&WarBoardPrevCondData_TypeInfo);
    sub_1C32C20(&WarBoardSquareData_TypeInfo);
    sub_1C32C20(&WarBoardSquareIndexData_TypeInfo);
    sub_1C32C20(&WarBoardTreasureData_TypeInfo);
    sub_1C32C20(&WarBoardUiData_TypeInfo);
    sub_1C32C20(&WarBoardWallData_TypeInfo);
    byte_4C353D9 = 1;
  }
  v457 = 0;
  entity = 0;
  isChangeName = 0;
  v8 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v8,
    (const MethodInfo_3458418 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  this->fields._bgAnimationInfo_k__BackingField = (struct System_Collections_Generic_Dictionary_string__object__o *)v8;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._bgAnimationInfo_k__BackingField, (int32_t)v8, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardEventData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardEventData___ctor__);
  this->fields.listEvent = (struct System_Collections_Generic_List_WarBoardEventData__o *)v11;
  p_listEvent = &this->fields.listEvent;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.listEvent, (int32_t)v11, v12, v13);
  *(_QWORD *)&this->fields.winCondId = -1;
  v14 = (struct System_Int32_array *)sub_1C32CC8(int___TypeInfo, 2);
  this->fields.latestPieceActionSquareIndexes = v14;
  p_latestPieceActionSquareIndexes = &this->fields.latestPieceActionSquareIndexes;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.latestPieceActionSquareIndexes, (int32_t)v14, v15, v16);
  v17 = (struct System_UInt32_array *)sub_1C32CC8(uint___TypeInfo, 0);
  this->fields.latestBattlePieceUniqueIndexes = v17;
  p_latestBattlePieceUniqueIndexes = (CGThumbnailListItem_o *)&this->fields.latestBattlePieceUniqueIndexes;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.latestBattlePieceUniqueIndexes, (int32_t)v17, v18, v19);
  v20 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardPrevCondData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardPrevCondData___ctor__);
  this->fields.listPrevCond = (struct System_Collections_Generic_List_WarBoardPrevCondData__o *)v20;
  p_listPrevCond = (CGThumbnailListItem_o *)&this->fields.listPrevCond;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.listPrevCond, (int32_t)v20, v21, v22);
  v23 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_HoldReinforcementsData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_HoldReinforcementsData___ctor__);
  this->fields.reinforcementsSaveList = (struct System_Collections_Generic_List_HoldReinforcementsData__o *)v23;
  p_reinforcementsSaveList = (CGThumbnailListItem_o *)&this->fields.reinforcementsSaveList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.reinforcementsSaveList, (int32_t)v23, v24, v25);
  v26 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v26,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.playedStageReinforcementsList = v26;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.playedStageReinforcementsList, (int32_t)v26, v27, v28);
  v29 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardUiData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardUiData___ctor__);
  this->fields.listUiData = (struct System_Collections_Generic_List_WarBoardUiData__o *)v29;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.listUiData, (int32_t)v29, v30, v31);
  v32 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v32,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.masterExistsForce = v32;
  p_masterExistsForce = &this->fields.masterExistsForce;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.masterExistsForce, (int32_t)v32, v33, v34);
  v35 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v35,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.reinforcementsAppointmentSquareList = v35;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.reinforcementsAppointmentSquareList, (int32_t)v35, v36, v37);
  this->fields.localSaveTiming = 1;
  System_Object___ctor((Il2CppObject *)this, 0);
  v38 = WarBoardData___c_TypeInfo;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v38 = WarBoardData___c_TypeInfo;
  }
  _9__77_0 = (System_Comparison_T__o *)v38->static_fields->__9__77_0;
  if ( !_9__77_0 )
  {
    if ( !v38->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v38);
      v38 = WarBoardData___c_TypeInfo;
    }
    v40 = (Il2CppObject *)v38->static_fields->__9;
    _9__77_0 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_WarBoardStageLayoutEntity__TypeInfo);
    System_Comparison_object____ctor(_9__77_0, v40, Method_WarBoardData___c___ctor_b__77_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__77_0 = (struct System_Comparison_WarBoardStageLayoutEntity__o *)_9__77_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__77_0, (int32_t)_9__77_0, v42, v43);
  }
  System_Array__Sort_object__51026696(
    (System_Object_array *)layoutEntities,
    _9__77_0,
    (const MethodInfo_30A9B08 *)Method_System_Array_Sort_WarBoardStageLayoutEntity___);
  this->fields.stageEntity = stage;
  p_fields = &this->fields;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)stage, v44, v45);
  if ( !layoutEntities )
    goto LABEL_359;
  max_length = layoutEntities->max_length;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_359;
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_WarBoardStageDetailMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_359;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_WarBoardStageNpcMaster___);
  this->fields.stageNpcMaster = (struct WarBoardStageNpcMaster_o *)MasterData_object;
  p_stageNpcMaster = &this->fields.stageNpcMaster;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.stageNpcMaster, (int32_t)MasterData_object, v49, v50);
  if ( !stage )
    goto LABEL_359;
  Instance = (__int64)*p_stageNpcMaster;
  if ( !*p_stageNpcMaster )
    goto LABEL_359;
  WarBoardStageEntities = WarBoardStageNpcMaster__GetWarBoardStageEntities(
                            (WarBoardStageNpcMaster_o *)Instance,
                            stage->fields.id,
                            0);
  v52 = WarBoardData___c_TypeInfo;
  v53 = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardStageEntities;
  p_playedStageReinforcementsList = (CGThumbnailListItem_o *)&this->fields.playedStageReinforcementsList;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v52 = WarBoardData___c_TypeInfo;
  }
  _9__77_1 = (System_Func_T__TResult__o *)v52->static_fields->__9__77_1;
  if ( !_9__77_1 )
  {
    if ( !v52->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v52);
      v52 = WarBoardData___c_TypeInfo;
    }
    v55 = (Il2CppObject *)v52->static_fields->__9;
    _9__77_1 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func_WarBoardStageNpcEntity__uint__TypeInfo);
    System_Func_object__uint____ctor(_9__77_1, v55, Method_WarBoardData___c___ctor_b__77_1__, 0);
    v56 = WarBoardData___c_TypeInfo->static_fields;
    v56->__9__77_1 = (struct System_Func_WarBoardStageNpcEntity__uint__o *)_9__77_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&v56->__9__77_1, (int32_t)_9__77_1, v57, v58);
  }
  v59 = (struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *)System_Linq_Enumerable__ToDictionary_object__uint_(
                                                                                          v53,
                                                                                          (System_Func_TSource__TKey__o *)_9__77_1,
                                                                                          (const MethodInfo_311D000 *)Method_System_Linq_Enumerable_ToDictionary_WarBoardStageNpcEntity__uint___);
  this->fields.npcEntityDict = v59;
  p_npcEntityDict = &this->fields.npcEntityDict;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.npcEntityDict, (int32_t)v59, v60, v61);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_359;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_WarBoardActionPointMaster___);
  if ( !Instance )
    goto LABEL_359;
  WarBoardActionPointEntities = WarBoardActionPointMaster__GetWarBoardActionPointEntities(
                                  (WarBoardActionPointMaster_o *)Instance,
                                  stage->fields.id,
                                  0);
  v63 = WarBoardData___c_TypeInfo;
  v64 = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardActionPointEntities;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v63 = WarBoardData___c_TypeInfo;
  }
  _9__77_2 = (System_Func_T__TResult__o *)v63->static_fields->__9__77_2;
  if ( !_9__77_2 )
  {
    if ( !v63->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v63);
      v63 = WarBoardData___c_TypeInfo;
    }
    v66 = (Il2CppObject *)v63->static_fields->__9;
    _9__77_2 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func_WarBoardActionPointEntity__uint__TypeInfo);
    System_Func_object__uint____ctor(_9__77_2, v66, Method_WarBoardData___c___ctor_b__77_2__, 0);
    v67 = WarBoardData___c_TypeInfo->static_fields;
    v67->__9__77_2 = (struct System_Func_WarBoardActionPointEntity__uint__o *)_9__77_2;
    sub_1C32BC4((CGThumbnailListItem_o *)&v67->__9__77_2, (int32_t)_9__77_2, v68, v69);
  }
  v70 = (struct System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__o *)System_Linq_Enumerable__ToDictionary_object__uint_(
                                                                                             v64,
                                                                                             (System_Func_TSource__TKey__o *)_9__77_2,
                                                                                             (const MethodInfo_311D000 *)Method_System_Linq_Enumerable_ToDictionary_WarBoardActionPointEntity__uint___);
  this->fields.actionPointEntityDict = v70;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.actionPointEntityDict, (int32_t)v70, v71, v72);
  Instance = (__int64)this->fields.npcEntityDict;
  if ( !Instance )
    goto LABEL_359;
  Values = System_Collections_Generic_Dictionary_uint__object___get_Values(
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)Instance,
             (const MethodInfo_34917A8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Values__);
  v74 = WarBoardData___c_TypeInfo;
  v75 = (System_Collections_Generic_IEnumerable_TSource__o *)Values;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v74 = WarBoardData___c_TypeInfo;
  }
  _9__77_3 = (System_Func_object__int__o *)v74->static_fields->__9__77_3;
  if ( !_9__77_3 )
  {
    if ( !v74->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v74);
      v74 = WarBoardData___c_TypeInfo;
    }
    v77 = (Il2CppObject *)v74->static_fields->__9;
    _9__77_3 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_WarBoardStageNpcEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__77_3, v77, Method_WarBoardData___c___ctor_b__77_3__, 0);
    v78 = WarBoardData___c_TypeInfo->static_fields;
    v78->__9__77_3 = (struct System_Func_WarBoardStageNpcEntity__int__o *)_9__77_3;
    sub_1C32BC4((CGThumbnailListItem_o *)&v78->__9__77_3, (int32_t)_9__77_3, v79, v80);
  }
  Instance = System_Linq_Enumerable__Max_object_(
               v75,
               (System_Func_TSource__int__o *)_9__77_3,
               (const MethodInfo_310B720 *)Method_System_Linq_Enumerable_Max_WarBoardStageNpcEntity___);
  npcEntityDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.npcEntityDict;
  this->fields._maxForceId_k__BackingField = Instance;
  if ( !npcEntityDict )
    goto LABEL_359;
  v82 = System_Collections_Generic_Dictionary_uint__object___get_Values(
          npcEntityDict,
          (const MethodInfo_34917A8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Values__);
  v83 = WarBoardData___c_TypeInfo;
  v84 = (System_Collections_Generic_IEnumerable_TSource__o *)v82;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v83 = WarBoardData___c_TypeInfo;
  }
  _9__77_4 = (System_Func_object__int__o *)v83->static_fields->__9__77_4;
  if ( !_9__77_4 )
  {
    if ( !v83->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v83);
      v83 = WarBoardData___c_TypeInfo;
    }
    v86 = (Il2CppObject *)v83->static_fields->__9;
    _9__77_4 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_WarBoardStageNpcEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__77_4, v86, Method_WarBoardData___c___ctor_b__77_4__, 0);
    v87 = WarBoardData___c_TypeInfo->static_fields;
    v87->__9__77_4 = (struct System_Func_WarBoardStageNpcEntity__int__o *)_9__77_4;
    sub_1C32BC4((CGThumbnailListItem_o *)&v87->__9__77_4, (int32_t)_9__77_4, v88, v89);
  }
  p_bgAnimationInfo_k__BackingField = (CGThumbnailListItem_o *)&this->fields._bgAnimationInfo_k__BackingField;
  p_listUiData = (CGThumbnailListItem_o *)&this->fields.listUiData;
  this->fields._maxGroupId_k__BackingField = System_Linq_Enumerable__Max_object_(
                                               v84,
                                               (System_Func_TSource__int__o *)_9__77_4,
                                               (const MethodInfo_310B720 *)Method_System_Linq_Enumerable_Max_WarBoardStageNpcEntity___);
  v438 = this;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_359;
  v426 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (WarBoardStagePieceDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
  v433 = (NpcFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v437 = (WarBoardCommonReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  v442 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v442,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor__);
  v435 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v435,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor__);
  v90 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v90,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v432 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardItemData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v432,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardItemData___ctor__);
  v427 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardTreasureData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v427,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardTreasureData___ctor__);
  v430 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardWallData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v430,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardWallData___ctor__);
  v431 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardEffectData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v431,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardEffectData___ctor__);
  v91 = WarBoardData_TypeInfo;
  if ( !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    v91 = WarBoardData_TypeInfo;
  }
  v92 = serverData;
  v93 = v442;
  v94 = layoutEntities;
  WARBOARDDATA_SAVEDATA_KEY = v91->static_fields->WARBOARDDATA_SAVEDATA_KEY;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  Instance = EncryptedPlayerPrefs__HasKey(WARBOARDDATA_SAVEDATA_KEY, 0);
  if ( (Instance & 1) != 0 )
  {
    if ( !serverData )
      goto LABEL_359;
    v96 = WarBoardData_TypeInfo;
    progressType = serverData->fields.progressType;
    if ( !WarBoardData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    if ( progressType == 3 )
    {
      WarBoardData__DeleteLocalSave((const MethodInfo *)v96);
    }
    else
    {
      v98 = WarBoardData_TypeInfo->static_fields->WARBOARDDATA_SAVEDATA_KEY;
      if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
      String = EncryptedPlayerPrefs__GetString(v98, 0);
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v100 = System_Convert__FromBase64String(String, 0);
      v101 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C32E6C(MiniMessagePack_MiniMessagePacker_TypeInfo);
      MiniMessagePack_MiniMessagePacker___ctor(v101, 0);
      if ( !v101 )
        goto LABEL_359;
      v102 = MiniMessagePack_MiniMessagePacker__UnpackClass_object_(
               v101,
               v100,
               (const MethodInfo_3163E38 *)Method_MiniMessagePack_MiniMessagePacker_UnpackClass_WarBoardData_WarBoardLocalSaveData___);
      this->fields.localSaveData = (struct WarBoardData_WarBoardLocalSaveData_o *)v102;
      p_localSaveData = &this->fields.localSaveData;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.localSaveData, (int32_t)v102, v104, v105);
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
        Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !*p_localSaveData )
          goto LABEL_359;
        if ( !Instance )
          goto LABEL_359;
        Instance = (__int64)WarBoardManager__CheckAndLoadCacheServerData(
                              (WarBoardManager_o *)Instance,
                              serverData,
                              (*p_localSaveData)->fields.localSaveTiming,
                              0);
        if ( !*p_localSaveData )
          goto LABEL_359;
        pieceSaves = (*p_localSaveData)->fields.pieceSaves;
        if ( !pieceSaves )
          goto LABEL_359;
        v108 = (_QWORD *)Instance;
        if ( SLODWORD(pieceSaves->max_length) < 1 )
        {
LABEL_87:
          v451 = (System_Object_array **)v108;
          if ( !*p_localSaveData )
            goto LABEL_359;
          itemSaves = (*p_localSaveData)->fields.itemSaves;
          v440 = v90;
          if ( !itemSaves )
            goto LABEL_359;
          if ( SLODWORD(itemSaves->max_length) < 1 )
          {
LABEL_97:
            if ( !v108 )
              goto LABEL_359;
            v127 = (CGThumbnailListItem_o *)(v108 + 5);
            if ( v451[5] )
            {
              if ( !*p_localSaveData )
                goto LABEL_359;
              treasureSaves = (*p_localSaveData)->fields.treasureSaves;
              if ( !treasureSaves )
                goto LABEL_359;
              if ( SLODWORD(treasureSaves->max_length) >= 1 )
              {
                v129 = 0;
                v130 = 0;
                do
                {
                  v131 = sub_1C32E6C(WarBoardData___c__DisplayClass77_2_TypeInfo);
                  WarBoardData___c__DisplayClass77_2___ctor((WarBoardData___c__DisplayClass77_2_o *)v131, 0);
                  if ( v130 >= LODWORD(treasureSaves->max_length) )
                    goto LABEL_360;
                  if ( !v131 )
                    goto LABEL_359;
                  v134 = treasureSaves->m_Items[v130];
                  *(_QWORD *)(v131 + 16) = v134;
                  v135 = v131 + 16;
                  sub_1C32BC4((CGThumbnailListItem_o *)(v131 + 16), (int32_t)v134, v132, v133);
                  klass = (System_Collections_Generic_IEnumerable_TSource__o *)v127->klass;
                  v137 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardUserTreasureData__bool__TypeInfo);
                  System_Func_object__bool____ctor(
                    v137,
                    (Il2CppObject *)v131,
                    Method_WarBoardData___c__DisplayClass77_2___ctor_b__8__,
                    0);
                  Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__51408536(
                                        klass,
                                        (System_Func_TSource__bool__o *)v137,
                                        (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserTreasureData___);
                  if ( Instance )
                  {
                    if ( !*(_QWORD *)v135 )
                      goto LABEL_359;
                    if ( !*(_BYTE *)(*(_QWORD *)v135 + 20LL) )
                    {
                      v129 = 1;
                      *(_BYTE *)(Instance + 20) = 0;
                    }
                  }
                  ++v130;
                }
                while ( (__int64)v130 < SLODWORD(treasureSaves->max_length) );
                if ( (v129 & 1) != 0 )
                {
                  v138 = WarBoardData___c_TypeInfo;
                  v139 = (System_Collections_Generic_IEnumerable_TSource__o *)v127->klass;
                  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
                    v138 = WarBoardData___c_TypeInfo;
                  }
                  _9__77_9 = (System_Func_object__bool__o *)v138->static_fields->__9__77_9;
                  if ( !_9__77_9 )
                  {
                    if ( !v138->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(v138);
                      v138 = WarBoardData___c_TypeInfo;
                    }
                    v141 = (Il2CppObject *)v138->static_fields->__9;
                    _9__77_9 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardUserTreasureData__bool__TypeInfo);
                    System_Func_object__bool____ctor(_9__77_9, v141, Method_WarBoardData___c___ctor_b__77_9__, 0);
                    v142 = WarBoardData___c_TypeInfo->static_fields;
                    v142->__9__77_9 = (struct System_Func_WarBoardUserTreasureData__bool__o *)_9__77_9;
                    sub_1C32BC4((CGThumbnailListItem_o *)&v142->__9__77_9, (int32_t)_9__77_9, v143, v144);
                  }
                  v145 = System_Linq_Enumerable__Where_object_(
                           v139,
                           (System_Func_TSource__bool__o *)_9__77_9,
                           (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_WarBoardUserTreasureData___);
                  v146 = System_Linq_Enumerable__ToArray_object_(
                           v145,
                           (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_WarBoardUserTreasureData___);
                  v127->klass = (CGThumbnailListItem_c *)v146;
                  sub_1C32BC4(v127, (int32_t)v146, v147, v148);
                }
              }
            }
            if ( !*p_localSaveData )
              goto LABEL_359;
            wallSaves = (*p_localSaveData)->fields.wallSaves;
            if ( !wallSaves )
              goto LABEL_359;
            if ( SLODWORD(wallSaves->max_length) < 1 )
            {
LABEL_127:
              if ( !*p_localSaveData )
                goto LABEL_359;
              v157 = System_Linq_Enumerable__Count_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)(*p_localSaveData)->fields.squareIndexInfo,
                       (const MethodInfo_30FD778 *)Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData_SaveData___);
              System_Array__Resize_object_(
                v451 + 11,
                v157,
                (const MethodInfo_309B254 *)Method_System_Array_Resize_WarBoardSquareIndexData___);
              v94 = layoutEntities;
              if ( v157 >= 1 )
              {
                v158 = 0;
                v159 = (unsigned int)v157;
                v160 = 8;
                while ( *p_localSaveData )
                {
                  squareIndexInfo = (*p_localSaveData)->fields.squareIndexInfo;
                  if ( !squareIndexInfo )
                    break;
                  if ( v158 >= LODWORD(squareIndexInfo->max_length) )
                    goto LABEL_360;
                  v162 = (unsigned int *)v451[11];
                  v163 = *(WarBoardSquareIndexData_SaveData_o **)((char *)&squareIndexInfo->obj.klass + v160 * 4);
                  v164 = (WarBoardSquareIndexData_o *)sub_1C32E6C(WarBoardSquareIndexData_TypeInfo);
                  WarBoardSquareIndexData___ctor_38070256(v164, v163, 0);
                  if ( !v162 )
                    break;
                  if ( v164 )
                  {
                    Instance = sub_1C32D5C(v164, *(_QWORD *)(*(_QWORD *)v162 + 64LL));
                    if ( !Instance )
                    {
LABEL_361:
                      v419 = sub_1C32EA0();
                      sub_1C32D48(v419, 0);
                    }
                  }
                  if ( v158 >= v162[6] )
                    goto LABEL_360;
                  *(_QWORD *)&v162[v160] = v164;
                  sub_1C32BC4((CGThumbnailListItem_o *)&v162[v160], (int32_t)v164, v165, v166);
                  v90 = v440;
                  ++v158;
                  v160 += 2;
                  if ( v159 == v158 )
                    goto LABEL_138;
                }
                goto LABEL_359;
              }
LABEL_138:
              if ( !*p_localSaveData )
                goto LABEL_359;
              v92 = (WarBoardDataEntity_o *)v451;
              v167 = System_Linq_Enumerable__Count_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)(*p_localSaveData)->fields.bossBattleInfo,
                       (const MethodInfo_30FD778 *)Method_System_Linq_Enumerable_Count_WarBoardBossBattleData_SaveData___);
              System_Array__Resize_object_(
                v451 + 12,
                v167,
                (const MethodInfo_309B254 *)Method_System_Array_Resize_WarBoardBossBattleData___);
              if ( v167 >= 1 )
              {
                v168 = 0;
                v169 = (unsigned int)v167;
                v170 = 8;
                do
                {
                  if ( !*p_localSaveData )
                    goto LABEL_359;
                  bossBattleInfo = (*p_localSaveData)->fields.bossBattleInfo;
                  if ( !bossBattleInfo )
                    goto LABEL_359;
                  if ( v168 >= LODWORD(bossBattleInfo->max_length) )
                    goto LABEL_360;
                  v172 = (unsigned int *)v451[12];
                  v173 = *(WarBoardBossBattleData_SaveData_o **)((char *)&bossBattleInfo->obj.klass + v170 * 4);
                  v174 = (WarBoardBossBattleData_o *)sub_1C32E6C(WarBoardBossBattleData_TypeInfo);
                  WarBoardBossBattleData___ctor_37825016(v174, v173, v175);
                  if ( !v172 )
                    goto LABEL_359;
                  if ( v174 )
                  {
                    Instance = sub_1C32D5C(v174, *(_QWORD *)(*(_QWORD *)v172 + 64LL));
                    if ( !Instance )
                      goto LABEL_361;
                  }
                  if ( v168 >= v172[6] )
                    goto LABEL_360;
                  *(_QWORD *)&v172[v170] = v174;
                  sub_1C32BC4((CGThumbnailListItem_o *)&v172[v170], (int32_t)v174, v176, v177);
                  v90 = v440;
                  ++v168;
                  v170 += 2;
                }
                while ( v169 != v168 );
                v92 = (WarBoardDataEntity_o *)v451;
              }
              v93 = v442;
              goto LABEL_154;
            }
            v150 = 0;
            while ( 1 )
            {
              v151 = sub_1C32E6C(WarBoardData___c__DisplayClass77_3_TypeInfo);
              WarBoardData___c__DisplayClass77_3___ctor((WarBoardData___c__DisplayClass77_3_o *)v151, 0);
              if ( v150 >= LODWORD(wallSaves->max_length) )
                break;
              if ( !v151 )
                goto LABEL_359;
              v154 = wallSaves->m_Items[v150];
              *(_QWORD *)(v151 + 16) = v154;
              sub_1C32BC4((CGThumbnailListItem_o *)(v151 + 16), (int32_t)v154, v152, v153);
              v155 = (System_Collections_Generic_IEnumerable_TSource__o *)v451[6];
              v156 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardUserWallData__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v156,
                (Il2CppObject *)v151,
                Method_WarBoardData___c__DisplayClass77_3___ctor_b__10__,
                0);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__51408536(
                                    v155,
                                    (System_Func_TSource__bool__o *)v156,
                                    (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
              if ( Instance )
                WarBoardUserWallData__SetSaveData(
                  (WarBoardUserWallData_o *)Instance,
                  *(WarBoardWallData_SaveData_o **)(v151 + 16),
                  0);
              if ( (__int64)++v150 >= SLODWORD(wallSaves->max_length) )
                goto LABEL_127;
            }
          }
          else
          {
            v120 = 0;
            while ( 1 )
            {
              v121 = sub_1C32E6C(WarBoardData___c__DisplayClass77_1_TypeInfo);
              WarBoardData___c__DisplayClass77_1___ctor((WarBoardData___c__DisplayClass77_1_o *)v121, 0);
              if ( v120 >= LODWORD(itemSaves->max_length) )
                break;
              if ( !v121 )
                goto LABEL_359;
              v124 = itemSaves->m_Items[v120];
              *(_QWORD *)(v121 + 16) = v124;
              sub_1C32BC4((CGThumbnailListItem_o *)(v121 + 16), (int32_t)v124, v122, v123);
              if ( !v108 )
                goto LABEL_359;
              v125 = (System_Collections_Generic_IEnumerable_TSource__o *)v108[4];
              v126 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardUserGetItemData__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v126,
                (Il2CppObject *)v121,
                Method_WarBoardData___c__DisplayClass77_1___ctor_b__7__,
                0);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__51408536(
                                    v125,
                                    (System_Func_TSource__bool__o *)v126,
                                    (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
              if ( Instance )
                WarBoardUserGetItemData__SetSaveData(
                  (WarBoardUserGetItemData_o *)Instance,
                  *(WarBoardItemData_SaveData_o **)(v121 + 16),
                  0);
              if ( (__int64)++v120 >= SLODWORD(itemSaves->max_length) )
                goto LABEL_97;
            }
          }
        }
        else
        {
          v109 = 0;
          while ( 1 )
          {
            v110 = sub_1C32E6C(WarBoardData___c__DisplayClass77_0_TypeInfo);
            WarBoardData___c__DisplayClass77_0___ctor((WarBoardData___c__DisplayClass77_0_o *)v110, 0);
            if ( v109 >= LODWORD(pieceSaves->max_length) )
              break;
            if ( !v110 )
              goto LABEL_359;
            v113 = pieceSaves->m_Items[v109];
            *(_QWORD *)(v110 + 16) = v113;
            v114 = (WarBoardPieceData_SaveData_o **)(v110 + 16);
            sub_1C32BC4((CGThumbnailListItem_o *)(v110 + 16), (int32_t)v113, v111, v112);
            if ( !*(_QWORD *)(v110 + 16) || !v108 )
              goto LABEL_359;
            if ( *(_DWORD *)(*(_QWORD *)(v110 + 16) + 24LL) )
            {
              v115 = (System_Collections_Generic_IEnumerable_TSource__o *)v108[2];
              v116 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardUserServantData__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v116,
                (Il2CppObject *)v110,
                Method_WarBoardData___c__DisplayClass77_0___ctor_b__6__,
                0);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__51408536(
                                    v115,
                                    (System_Func_TSource__bool__o *)v116,
                                    (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
              if ( Instance )
                WarBoardUserServantData__SetSaveData((WarBoardUserServantData_o *)Instance, *v114, 0);
            }
            else
            {
              v117 = (System_Collections_Generic_IEnumerable_TSource__o *)v108[3];
              v118 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardUserMasterData__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v118,
                (Il2CppObject *)v110,
                Method_WarBoardData___c__DisplayClass77_0___ctor_b__5__,
                0);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__51408536(
                                    v117,
                                    (System_Func_TSource__bool__o *)v118,
                                    (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
              if ( Instance )
                WarBoardUserMasterData__SetSaveData((WarBoardUserMasterData_o *)Instance, *v114, 0);
            }
            if ( (__int64)++v109 >= SLODWORD(pieceSaves->max_length) )
              goto LABEL_87;
          }
        }
LABEL_360:
        sub_1C32E84(Instance);
      }
      v178 = WarBoardData_TypeInfo;
      if ( !WarBoardData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
      WarBoardData__DeleteLocalSave((const MethodInfo *)v178);
      *p_localSaveData = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.localSaveData, 0, v179, v180);
    }
LABEL_154:
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    goto LABEL_155;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !serverData )
    goto LABEL_359;
LABEL_155:
  if ( !Instance )
    goto LABEL_359;
  WarBoardManager__InitializeLogic((WarBoardManager_o *)Instance, v92, v92->fields.progressType != 3, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_359;
  WarBoardManager__UpdateServerData((WarBoardManager_o *)Instance, v92, 0);
  v452 = v92;
  if ( (int)max_length >= 1 )
  {
    v181 = 0;
    p_enemyDeck = &v92->fields.enemyDeck;
    npcIdx = 0;
    p_myDeck = &v92->fields.myDeck;
    v441 = v90;
    do
    {
      v182 = sub_1C32E6C(WarBoardData___c__DisplayClass77_4_TypeInfo);
      WarBoardData___c__DisplayClass77_4___ctor((WarBoardData___c__DisplayClass77_4_o *)v182, 0);
      if ( v181 >= LODWORD(v94->max_length) )
        goto LABEL_360;
      if ( !v182 )
        goto LABEL_359;
      v185 = v94->m_Items[v181];
      *(_QWORD *)(v182 + 16) = v185;
      v186 = (WarBoardStageLayoutEntity_o **)(v182 + 16);
      sub_1C32BC4((CGThumbnailListItem_o *)(v182 + 16), (int32_t)v185, v183, v184);
      v187 = *(WarBoardStageLayoutEntity_o **)(v182 + 16);
      v188 = (WarBoardSquareData_o *)sub_1C32E6C(WarBoardSquareData_TypeInfo);
      WarBoardSquareData___ctor(v188, v187, roadEntities, 0);
      if ( v181 )
      {
        if ( (unsigned int)(v181 - 1) >= LODWORD(v94->max_length) )
          goto LABEL_360;
        v191 = *(&v94->max_length + v181);
        if ( !v191 )
          goto LABEL_359;
        v192 = *v186;
        if ( !*v186 )
          goto LABEL_359;
        if ( *(_DWORD *)(v191 + 20) == v192->fields.squareIndex )
          goto LABEL_176;
      }
      else
      {
        v192 = *v186;
        if ( !*v186 )
          goto LABEL_359;
      }
      throughCondId = v192->fields.throughCondId;
      if ( !throughCondId )
        goto LABEL_364;
      Instance = (__int64)v437;
      if ( !v437 )
        goto LABEL_359;
      Instance = WarBoardCommonReleaseMaster__IsOpen(v437, throughCondId, 0);
      if ( (Instance & 1) != 0 )
      {
LABEL_364:
        if ( !v93 )
          goto LABEL_359;
        items = v93->fields._items;
        v195 = Method_System_Collections_Generic_List_WarBoardSquareData__Add__;
        ++v93->fields._version;
        if ( !items )
          goto LABEL_359;
        size = v93->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v93,
            (Il2CppObject *)v188,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v195[4] + 192LL) + 112LL));
        }
        else
        {
          v197 = &items->obj.klass + size;
          v93->fields._size = size + 1;
          v197[4] = (Il2CppClass *)v188;
          sub_1C32BC4((CGThumbnailListItem_o *)(v197 + 4), (int32_t)v188, v189, v190);
        }
LABEL_176:
        v198 = *v186;
        if ( !*v186 )
          goto LABEL_359;
        if ( v198->fields.isPiecePut )
        {
          questPhase = v92->fields.questPhase;
          questId = v92->fields.questId;
          if ( v198->fields.pieceIndex )
          {
            svtInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v92->fields.svtInfo;
            v201 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardUserServantData__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v201,
              (Il2CppObject *)v182,
              Method_WarBoardData___c__DisplayClass77_4___ctor_b__13__,
              0);
            Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__51408536(
                                  svtInfo,
                                  (System_Func_TSource__bool__o *)v201,
                                  (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
            v202 = (WarBoardUserServantData_o *)Instance;
            v203 = 0;
          }
          else
          {
            masterInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v92->fields.masterInfo;
            v211 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardUserMasterData__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v211,
              (Il2CppObject *)v182,
              Method_WarBoardData___c__DisplayClass77_4___ctor_b__12__,
              0);
            Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__51408536(
                                  masterInfo,
                                  (System_Func_TSource__bool__o *)v211,
                                  (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
            v203 = (WarBoardUserMasterData_o *)Instance;
            v202 = 0;
          }
          v212 = *v186;
          if ( !*v186 )
            goto LABEL_359;
          v213 = p_enemyDeck;
          v447 = questPhase;
          if ( !v212->fields.forceId )
          {
            v213 = p_enemyDeck;
            if ( !v212->fields.pieceIndex )
              v213 = p_myDeck;
          }
          v214 = *v213;
          Type = Follower__getType(v212->fields.followerType, 0);
          IsNpc = Follower__IsNpc(Type, 0);
          v217 = *v186;
          v218 = v92->fields.progressType;
          v219 = IsNpc;
          v220 = *p_npcEntityDict;
          v221 = (WarBoardPieceData_o *)sub_1C32E6C(WarBoardPieceData_TypeInfo);
          v222 = v221;
          v223 = v218 == 3;
          if ( v219 )
          {
            WarBoardPieceData___ctor(v221, v217, v202, v203, v214, v223, v220, npcIdx, 0);
            if ( !*v186 )
              goto LABEL_359;
            v92 = v452;
            v94 = layoutEntities;
            v90 = v441;
            Instance = (__int64)Master_object;
            if ( !Master_object )
              goto LABEL_359;
            Instance = WarBoardStagePieceDetailMaster__TryGetEntity(
                         Master_object,
                         &entity,
                         (*v186)->fields.stageId,
                         (*v186)->fields.forceId,
                         (*v186)->fields.groupId,
                         (*v186)->fields.pieceIndex,
                         0);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)entity;
              if ( !entity )
                goto LABEL_359;
              Instance = WarBoardStagePieceDetailEntity__GetImageSvtId(entity, 0);
              if ( !v222 )
                goto LABEL_359;
              v222->fields._npcImageSvtId_k__BackingField = Instance;
              Instance = (__int64)entity;
              if ( !entity )
                goto LABEL_359;
              v222->fields._npcDispLimitCount_k__BackingField = WarBoardStagePieceDetailEntity__GetDispLimitCnt(
                                                                  entity,
                                                                  0);
            }
            else if ( !v222 )
            {
              goto LABEL_359;
            }
            Instance = (__int64)v433;
            if ( !v433 )
              goto LABEL_359;
            Entity_42319072 = NpcFollowerMaster__GetEntity_42319072(
                                v433,
                                questId,
                                v447,
                                v222->fields._npcId_k__BackingField,
                                0);
            if ( Entity_42319072 )
            {
              v231 = Entity_42319072;
              if ( !v222->fields._npcImageSvtId_k__BackingField )
                v222->fields._npcImageSvtId_k__BackingField = NpcFollowerEntity__GetImageSvtId(Entity_42319072, 0);
              if ( v222->fields._npcDispLimitCount_k__BackingField < 0 )
                v222->fields._npcDispLimitCount_k__BackingField = NpcFollowerEntity__GetDispLimitCnt(v231, -1, 0);
            }
            Instance = WarBoardPieceData__get_isPlayerGroup(v222, 0);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)v426;
              if ( !v426 )
                goto LABEL_359;
              Instance = DataMasterBase_object__object__long___TryGetEntity(
                           v426,
                           &v457,
                           v222->fields._npcId_k__BackingField,
                           (const MethodInfo_3398DE0 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
              if ( (Instance & 1) != 0 )
              {
                Instance = (__int64)v457;
                if ( !v457 )
                  goto LABEL_359;
                Instance = (__int64)NpcServantFollowerEntity__GetFollowerName_42321972(
                                      (NpcServantFollowerEntity_o *)v457,
                                      v222->fields._npcId_k__BackingField,
                                      questId,
                                      v447,
                                      &isChangeName,
                                      0);
                if ( isChangeName )
                {
                  Instance = (__int64)v222->fields._battleServant_k__BackingField;
                  if ( !Instance )
                    goto LABEL_359;
                  BattleServantData__ClearOverwriteServantName((BattleServantData_o *)Instance, 0);
                }
              }
            }
            if ( !v441 )
              goto LABEL_359;
            v234 = v441->fields._items;
            v235 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
            ++v441->fields._version;
            if ( !v234 )
              goto LABEL_359;
            v236 = v441->fields._size;
            if ( (unsigned int)v236 >= LODWORD(v234->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v441,
                (Il2CppObject *)v222,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v235[4] + 192LL) + 112LL));
            }
            else
            {
              v237 = &v234->obj.klass + v236;
              v441->fields._size = v236 + 1;
              v237[4] = (Il2CppClass *)v222;
              sub_1C32BC4((CGThumbnailListItem_o *)(v237 + 4), (int32_t)v222, v232, v233);
            }
            ++npcIdx;
          }
          else
          {
            WarBoardPieceData___ctor(v221, v217, v202, v203, v214, v223, v220, -1, 0);
            if ( !v222 )
              goto LABEL_359;
            Instance = WarBoardPieceData__get_isMaster(v222, 0);
            v92 = v452;
            v94 = layoutEntities;
            v90 = v441;
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)*p_masterExistsForce;
              if ( !*p_masterExistsForce )
                goto LABEL_359;
              Instance = System_Collections_Generic_List_int___Contains(
                           (System_Collections_Generic_List_int__o *)Instance,
                           v222->fields._forceId_k__BackingField,
                           (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__);
              if ( (Instance & 1) == 0 )
              {
                Instance = (__int64)*p_masterExistsForce;
                if ( !*p_masterExistsForce )
                  goto LABEL_359;
                forceId_k__BackingField = v222->fields._forceId_k__BackingField;
                v227 = *(_QWORD *)(Instance + 16);
                v228 = Method_System_Collections_Generic_List_int__Add__;
                ++*(_DWORD *)(Instance + 28);
                if ( !v227 )
                  goto LABEL_359;
                v229 = *(int *)(Instance + 24);
                if ( (unsigned int)v229 >= *(_DWORD *)(v227 + 24) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    (System_Collections_Generic_List_int__o *)Instance,
                    forceId_k__BackingField,
                    *(const MethodInfo_377B798 **)(*(_QWORD *)(v228[4] + 192LL) + 112LL));
                }
                else
                {
                  *(_DWORD *)(Instance + 24) = v229 + 1;
                  *(_DWORD *)(v227 + 4 * v229 + 32) = forceId_k__BackingField;
                }
              }
            }
            if ( !v441 )
              goto LABEL_359;
            v241 = v441->fields._items;
            v242 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
            ++v441->fields._version;
            if ( !v241 )
              goto LABEL_359;
            v243 = v441->fields._size;
            if ( (unsigned int)v243 >= LODWORD(v241->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v441,
                (Il2CppObject *)v222,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v242[4] + 192LL) + 112LL));
            }
            else
            {
              v244 = &v241->obj.klass + v243;
              v441->fields._size = v243 + 1;
              v244[4] = (Il2CppClass *)v222;
              sub_1C32BC4((CGThumbnailListItem_o *)(v244 + 4), (int32_t)v222, v224, v225);
            }
          }
          v93 = v442;
        }
        v245 = *v186;
        if ( !*v186 )
          goto LABEL_359;
        switch ( v245->fields.type )
        {
          case 2:
            getItemInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v92->fields.getItemInfo;
            v247 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardUserGetItemData__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v247,
              (Il2CppObject *)v182,
              Method_WarBoardData___c__DisplayClass77_4___ctor_b__14__,
              0);
            v248 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
                     getItemInfo,
                     (System_Func_TSource__bool__o *)v247,
                     (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
            v249 = *(WarBoardStageLayoutEntity_o **)(v182 + 16);
            v250 = (WarBoardUserGetItemData_o *)v248;
            v251 = (WarBoardItemData_o *)sub_1C32E6C(WarBoardItemData_TypeInfo);
            WarBoardItemData___ctor(v251, v249, v250, 0);
            v252 = v432;
            if ( !v432 )
              goto LABEL_359;
            version = v432->fields._version;
            v254 = v432->fields._items;
            v255 = &Method_System_Collections_Generic_List_WarBoardItemData__Add__;
            goto LABEL_246;
          case 3:
            v251 = (WarBoardItemData_o *)sub_1C32E6C(WarBoardEffectData_TypeInfo);
            WarBoardEffectData___ctor((WarBoardEffectData_o *)v251, v245, 0);
            v252 = v431;
            if ( !v431 )
              goto LABEL_359;
            version = v431->fields._version;
            v254 = v431->fields._items;
            v255 = &Method_System_Collections_Generic_List_WarBoardEffectData__Add__;
            goto LABEL_246;
          case 4:
            treasureInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v92->fields.treasureInfo;
            if ( !treasureInfo )
              goto LABEL_242;
            v257 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardUserTreasureData__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v257,
              (Il2CppObject *)v182,
              Method_WarBoardData___c__DisplayClass77_4___ctor_b__11__,
              0);
            Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__51408536(
                                  treasureInfo,
                                  (System_Func_TSource__bool__o *)v257,
                                  (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserTreasureData___);
            if ( Instance )
              continue;
            v245 = *v186;
LABEL_242:
            v251 = (WarBoardItemData_o *)sub_1C32E6C(WarBoardTreasureData_TypeInfo);
            WarBoardTreasureData___ctor((WarBoardTreasureData_o *)v251, v245, 0);
            v252 = v427;
            if ( !v427 )
              goto LABEL_359;
            version = v427->fields._version;
            v254 = v427->fields._items;
            v255 = &Method_System_Collections_Generic_List_WarBoardTreasureData__Add__;
LABEL_246:
            v263 = *v255;
            v252->fields._version = version + 1;
            if ( !v254 )
              goto LABEL_359;
            v264 = v252->fields._size;
            if ( (unsigned int)v264 < LODWORD(v254->max_length) )
            {
              v265 = &v254->obj.klass + v264;
              v252->fields._size = v264 + 1;
              v265[4] = (Il2CppClass *)v251;
              v208 = (CGThumbnailListItem_o *)(v265 + 4);
              v209 = (int)v251;
              goto LABEL_249;
            }
            v238 = *(_QWORD *)(v263 + 32);
            v239 = v252;
            v240 = (Il2CppObject *)v251;
            break;
          case 5:
            wallInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v92->fields.wallInfo;
            v259 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardUserWallData__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v259,
              (Il2CppObject *)v182,
              Method_WarBoardData___c__DisplayClass77_4___ctor_b__15__,
              0);
            v260 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
                     wallInfo,
                     (System_Func_TSource__bool__o *)v259,
                     (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
            v261 = *(WarBoardStageLayoutEntity_o **)(v182 + 16);
            v262 = (WarBoardUserWallData_o *)v260;
            v251 = (WarBoardItemData_o *)sub_1C32E6C(WarBoardWallData_TypeInfo);
            WarBoardWallData___ctor((WarBoardWallData_o *)v251, v261, v262, 0);
            v252 = v430;
            if ( !v430 )
              goto LABEL_359;
            version = v430->fields._version;
            v254 = v430->fields._items;
            v255 = &Method_System_Collections_Generic_List_WarBoardWallData__Add__;
            goto LABEL_246;
          default:
            continue;
        }
        goto LABEL_251;
      }
      if ( !v435 )
        goto LABEL_359;
      v204 = v435->fields._items;
      v205 = Method_System_Collections_Generic_List_WarBoardSquareData__Add__;
      ++v435->fields._version;
      if ( !v204 )
        goto LABEL_359;
      v206 = v435->fields._size;
      if ( (unsigned int)v206 < LODWORD(v204->max_length) )
      {
        v207 = &v204->obj.klass + v206;
        v435->fields._size = v206 + 1;
        v207[4] = (Il2CppClass *)v188;
        v208 = (CGThumbnailListItem_o *)(v207 + 4);
        v209 = (int)v188;
LABEL_249:
        sub_1C32BC4(v208, v209, v189, v190);
        continue;
      }
      v238 = v205[4];
      v239 = v435;
      v240 = (Il2CppObject *)v188;
LABEL_251:
      System_Collections_Generic_List_object___AddWithResize(
        v239,
        v240,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v238 + 192) + 112LL));
    }
    while ( (unsigned int)max_length != ++v181 );
  }
  if ( !v93 )
    goto LABEL_359;
  v266 = System_Collections_Generic_List_object___ToArray(
           v93,
           (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  v267 = v438;
  v438->fields.squares = (struct WarBoardSquareData_array *)v266;
  sub_1C32BC4((CGThumbnailListItem_o *)&v438->fields.squares, (int32_t)v266, v268, v269);
  Instance = (__int64)v435;
  if ( !v435 )
    goto LABEL_359;
  v270 = System_Collections_Generic_List_object___ToArray(
           v435,
           (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  v438->fields.condSquares = (struct WarBoardSquareData_array *)v270;
  sub_1C32BC4((CGThumbnailListItem_o *)&v438->fields.condSquares, (int32_t)v270, v271, v272);
  if ( !v90 )
    goto LABEL_359;
  v273 = System_Collections_Generic_List_object___ToArray(
           v90,
           (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  v438->fields.pieces = (struct WarBoardPieceData_array *)v273;
  p_pieces = (System_Collections_Generic_IEnumerable_T__o **)&v438->fields.pieces;
  sub_1C32BC4((CGThumbnailListItem_o *)&v438->fields.pieces, (int32_t)v273, v275, v276);
  pieces = (System_Object_array *)v438->fields.pieces;
  v278 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_WarBoardPieceData__TypeInfo);
  System_Comparison_object____ctor(v278, (Il2CppObject *)v438, Method_WarBoardData_ComparePiece__, 0);
  System_Array__Sort_object__51026696(
    pieces,
    v278,
    (const MethodInfo_30A9B08 *)Method_System_Array_Sort_WarBoardPieceData___);
  Instance = (__int64)v432;
  if ( !v432 )
    goto LABEL_359;
  v279 = System_Collections_Generic_List_object___ToArray(
           v432,
           (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_WarBoardItemData__ToArray__);
  v438->fields.items = (struct WarBoardItemData_array *)v279;
  sub_1C32BC4((CGThumbnailListItem_o *)&v438->fields.items, (int32_t)v279, v280, v281);
  Instance = (__int64)v427;
  if ( !v427 )
    goto LABEL_359;
  v282 = System_Collections_Generic_List_object___ToArray(
           v427,
           (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_WarBoardTreasureData__ToArray__);
  v438->fields.treasures = (struct WarBoardTreasureData_array *)v282;
  sub_1C32BC4((CGThumbnailListItem_o *)&v438->fields.treasures, (int32_t)v282, v283, v284);
  Instance = (__int64)v431;
  if ( !v431 )
    goto LABEL_359;
  v285 = System_Collections_Generic_List_object___ToArray(
           v431,
           (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_WarBoardEffectData__ToArray__);
  v438->fields.effects = (struct WarBoardEffectData_array *)v285;
  sub_1C32BC4((CGThumbnailListItem_o *)&v438->fields.effects, (int32_t)v285, v286, v287);
  Instance = (__int64)v430;
  if ( !v430 )
    goto LABEL_359;
  v288 = System_Collections_Generic_List_object___ToArray(
           v430,
           (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_WarBoardWallData__ToArray__);
  v438->fields.walls = (struct WarBoardWallData_array *)v288;
  sub_1C32BC4((CGThumbnailListItem_o *)&v438->fields.walls, (int32_t)v288, v289, v290);
  v438->fields.serverData = v92;
  sub_1C32BC4((CGThumbnailListItem_o *)&v438->fields.serverData, (int32_t)v92, v291, v292);
  if ( v92->fields.progressType == 3 )
    WarBoardData__InitPrevCondData(v438, v293);
  v294 = v438->fields.localSaveData;
  if ( v294 )
  {
    v295 = v294->fields.pieceSaves;
    roadEntitiesb = (WarBoardRoadEntity_array *)&v438->fields.localSaveData;
    if ( v295 )
    {
      if ( SLODWORD(v295->max_length) >= 1 )
      {
        v296 = 0;
        do
        {
          v297 = sub_1C32E6C(WarBoardData___c__DisplayClass77_5_TypeInfo);
          WarBoardData___c__DisplayClass77_5___ctor((WarBoardData___c__DisplayClass77_5_o *)v297, 0);
          if ( v296 >= LODWORD(v295->max_length) )
            goto LABEL_360;
          if ( !v297 )
            goto LABEL_359;
          v300 = v295->m_Items[v296];
          *(_QWORD *)(v297 + 16) = v300;
          v301 = (WarBoardPieceData_SaveData_o **)(v297 + 16);
          sub_1C32BC4((CGThumbnailListItem_o *)(v297 + 16), (int32_t)v300, v298, v299);
          v302 = *p_pieces;
          v303 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardPieceData__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v303,
            (Il2CppObject *)v297,
            Method_WarBoardData___c__DisplayClass77_5___ctor_b__16__,
            0);
          if ( !BasicHelper__Any_object__51144764(
                  (System_Object_array *)v302,
                  (System_Func_T__bool__o *)v303,
                  (const MethodInfo_30C683C *)Method_BasicHelper_Any_WarBoardPieceData___) )
          {
            v304 = (System_Collections_Generic_IEnumerable_TSource__o *)v92->fields.svtInfo;
            v305 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardUserServantData__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v305,
              (Il2CppObject *)v297,
              Method_WarBoardData___c__DisplayClass77_5___ctor_b__17__,
              0);
            v306 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
                     v304,
                     (System_Func_TSource__bool__o *)v305,
                     (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
            v307 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v307,
              (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
            if ( !v307 )
              goto LABEL_359;
            System_Collections_Generic_List_object___AddRange(
              v307,
              *p_pieces,
              (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
            if ( !p_fields->stageEntity )
              goto LABEL_359;
            id = p_fields->stageEntity->fields.id;
            v309 = *v301;
            v310 = (WarBoardPieceData_o *)sub_1C32E6C(WarBoardPieceData_TypeInfo);
            WarBoardPieceData___ctor_38047632(v310, id, (WarBoardUserServantData_o *)v306, v309, 0, -1, 0);
            v313 = v307->fields._items;
            v314 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
            ++v307->fields._version;
            if ( !v313 )
              goto LABEL_359;
            v315 = v307->fields._size;
            if ( (unsigned int)v315 >= LODWORD(v313->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v307,
                (Il2CppObject *)v310,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v314[4] + 192LL) + 112LL));
            }
            else
            {
              v316 = &v313->obj.klass + v315;
              v307->fields._size = v315 + 1;
              v316[4] = (Il2CppClass *)v310;
              sub_1C32BC4((CGThumbnailListItem_o *)(v316 + 4), (int32_t)v310, v311, v312);
            }
            v92 = v452;
            v317 = System_Collections_Generic_List_object___ToArray(
                     v307,
                     (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
            *p_pieces = (System_Collections_Generic_IEnumerable_T__o *)v317;
            sub_1C32BC4((CGThumbnailListItem_o *)p_pieces, (int32_t)v317, v318, v319);
            v267 = v438;
          }
          Instance = (__int64)*v301;
          if ( !*v301 )
            goto LABEL_359;
          WarBoardPieceData_SaveData__SetOwner((WarBoardPieceData_SaveData_o *)Instance, v267, 0);
          Instance = (__int64)*v301;
          if ( !*v301 )
            goto LABEL_359;
          WarBoardPieceData_SaveData__Load((WarBoardPieceData_SaveData_o *)Instance, 0);
        }
        while ( (__int64)++v296 < SLODWORD(v295->max_length) );
      }
      if ( roadEntitiesb->obj.klass )
      {
        v320 = *(_QWORD *)&roadEntitiesb->obj.klass->_1.byval_arg.bits;
        if ( v320 )
        {
          v321 = *(_DWORD *)(v320 + 24);
          if ( v321 >= 1 )
          {
            v322 = 0;
            while ( v322 < v321 )
            {
              v323 = v320 + 8LL * (int)v322;
              v324 = *(WarBoardItemData_SaveData_o **)(v323 + 32);
              if ( !v324 )
                goto LABEL_359;
              WarBoardItemData_SaveData__SetOwner(*(WarBoardItemData_SaveData_o **)(v323 + 32), v267, 0);
              WarBoardItemData_SaveData__Load(v324, 0);
              v321 = *(_DWORD *)(v320 + 24);
              if ( (int)++v322 >= v321 )
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
              v326 = data[6];
              if ( v326 >= 1 )
              {
                v327 = 0;
                while ( v327 < v326 )
                {
                  v328 = (char *)&data[2 * v327];
                  v329 = (WarBoardTreasureData_SaveData_o *)*((_QWORD *)v328 + 4);
                  if ( !v329 )
                    goto LABEL_359;
                  WarBoardTreasureData_SaveData__SetOwner(*((WarBoardTreasureData_SaveData_o **)v328 + 4), v267, 0);
                  WarBoardTreasureData_SaveData__Load(v329, 0);
                  v326 = data[6];
                  if ( (int)++v327 >= v326 )
                    goto LABEL_293;
                }
                goto LABEL_360;
              }
LABEL_293:
              if ( roadEntitiesb->obj.klass )
              {
                v330 = *(_QWORD *)&roadEntitiesb->obj.klass->_1.this_arg.bits;
                if ( v330 )
                {
                  v331 = *(_DWORD *)(v330 + 24);
                  if ( v331 >= 1 )
                  {
                    v332 = 0;
                    while ( v332 < v331 )
                    {
                      v333 = v330 + 8LL * (int)v332;
                      v334 = *(WarBoardWallData_SaveData_o **)(v333 + 32);
                      if ( !v334 )
                        goto LABEL_359;
                      WarBoardWallData_SaveData__SetOwner(*(WarBoardWallData_SaveData_o **)(v333 + 32), v267, 0);
                      WarBoardWallData_SaveData__Load(v334, 0);
                      v331 = *(_DWORD *)(v330 + 24);
                      if ( (int)++v332 >= v331 )
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
                        v337 = 0;
                        while ( v337 < namespaze )
                        {
                          v338 = &element_class->_1.image + (int)v337;
                          v339 = (WarBoardSquareData_SaveData_o *)v338[4];
                          if ( !v339 )
                            goto LABEL_359;
                          WarBoardSquareData_SaveData__SetOwner((WarBoardSquareData_SaveData_o *)v338[4], v267, 0);
                          WarBoardSquareData_SaveData__Load(v339, 0);
                          namespaze = (int)element_class->_1.namespaze;
                          if ( (int)++v337 >= namespaze )
                            goto LABEL_307;
                        }
                        goto LABEL_360;
                      }
LABEL_307:
                      if ( roadEntitiesb->obj.klass )
                      {
                        v267->fields.isPlayedHalfDeadMessage = (bool)roadEntitiesb->obj.klass->_1.interopData;
                        v340 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardEventData__TypeInfo);
                        System_Collections_Generic_List_object____ctor(
                          v340,
                          (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardEventData___ctor__);
                        v267->fields.listEvent = (struct System_Collections_Generic_List_WarBoardEventData__o *)v340;
                        sub_1C32BC4((CGThumbnailListItem_o *)p_listEvent, (int32_t)v340, v341, v342);
                        v345 = v267->fields.localSaveData;
                        if ( v345 )
                        {
                          eventSaves = v345->fields.eventSaves;
                          if ( eventSaves )
                          {
                            v347 = eventSaves->max_length;
                            if ( (int)v347 >= 1 )
                            {
                              v348 = 0;
                              while ( v348 < (unsigned int)v347 )
                              {
                                v349 = eventSaves->m_Items[v348];
                                v350 = (System_Collections_Generic_List_object__o *)*p_listEvent;
                                v351 = (WarBoardEventData_o *)sub_1C32E6C(WarBoardEventData_TypeInfo);
                                WarBoardEventData___ctor_38037852(v351, v349, 0);
                                if ( !v350 )
                                  goto LABEL_359;
                                v354 = v350->fields._items;
                                v355 = Method_System_Collections_Generic_List_WarBoardEventData__Add__;
                                ++v350->fields._version;
                                if ( !v354 )
                                  goto LABEL_359;
                                v356 = v350->fields._size;
                                if ( (unsigned int)v356 >= LODWORD(v354->max_length) )
                                {
                                  System_Collections_Generic_List_object___AddWithResize(
                                    v350,
                                    (Il2CppObject *)v351,
                                    *(const MethodInfo_37987BC **)(*(_QWORD *)(v355[4] + 192LL) + 112LL));
                                }
                                else
                                {
                                  v357 = &v354->obj.klass + v356;
                                  v350->fields._size = v356 + 1;
                                  v357[4] = (Il2CppClass *)v351;
                                  sub_1C32BC4((CGThumbnailListItem_o *)(v357 + 4), (int32_t)v351, v352, v353);
                                }
                                LODWORD(v347) = eventSaves->max_length;
                                if ( (__int64)++v348 >= (int)v347 )
                                  goto LABEL_319;
                              }
                              goto LABEL_360;
                            }
LABEL_319:
                            v358 = roadEntitiesb->obj.klass;
                            if ( roadEntitiesb->obj.klass )
                            {
                              v438->fields.winCondId = (int32_t)v358->_1.fields;
                              typeHierarchy = (struct System_Int32_array *)v358->_2.typeHierarchy;
                              v438->fields.latestPieceActionSquareIndexes = typeHierarchy;
                              sub_1C32BC4(
                                (CGThumbnailListItem_o *)p_latestPieceActionSquareIndexes,
                                (int32_t)typeHierarchy,
                                v343,
                                v344);
                              v362 = v438->fields.localSaveData;
                              if ( v362 )
                              {
                                latestBattlePieceUniqueIndexes = (CGThumbnailListItem_c *)v362->fields.latestBattlePieceUniqueIndexes;
                                p_latestBattlePieceUniqueIndexes->klass = latestBattlePieceUniqueIndexes;
                                sub_1C32BC4(
                                  p_latestBattlePieceUniqueIndexes,
                                  (int32_t)latestBattlePieceUniqueIndexes,
                                  v360,
                                  v361);
                                v364 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardPrevCondData__TypeInfo);
                                System_Collections_Generic_List_object____ctor(
                                  v364,
                                  (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardPrevCondData___ctor__);
                                p_listPrevCond->klass = (CGThumbnailListItem_c *)v364;
                                sub_1C32BC4(p_listPrevCond, (int32_t)v364, v365, v366);
                                if ( roadEntitiesb->obj.klass )
                                {
                                  properties = roadEntitiesb->obj.klass->_1.properties;
                                  if ( properties )
                                  {
                                    v368 = properties[3];
                                    if ( (int)v368 >= 1 )
                                    {
                                      v369 = 0;
                                      while ( v369 < (unsigned int)v368 )
                                      {
                                        v370 = (WarBoardPrevCondData_SaveData_o *)properties[v369 + 4];
                                        v371 = (System_Collections_Generic_List_object__o *)p_listPrevCond->klass;
                                        v372 = (WarBoardPrevCondData_o *)sub_1C32E6C(WarBoardPrevCondData_TypeInfo);
                                        WarBoardPrevCondData___ctor_38064884(v372, v370, 0);
                                        if ( !v371 )
                                          goto LABEL_359;
                                        v375 = v371->fields._items;
                                        v376 = Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__;
                                        ++v371->fields._version;
                                        if ( !v375 )
                                          goto LABEL_359;
                                        v377 = v371->fields._size;
                                        if ( (unsigned int)v377 >= LODWORD(v375->max_length) )
                                        {
                                          System_Collections_Generic_List_object___AddWithResize(
                                            v371,
                                            (Il2CppObject *)v372,
                                            *(const MethodInfo_37987BC **)(*(_QWORD *)(v376[4] + 192LL) + 112LL));
                                        }
                                        else
                                        {
                                          v378 = &v375->obj.klass + v377;
                                          v371->fields._size = v377 + 1;
                                          v378[4] = (Il2CppClass *)v372;
                                          sub_1C32BC4((CGThumbnailListItem_o *)(v378 + 4), (int32_t)v372, v373, v374);
                                        }
                                        LODWORD(v368) = *((_DWORD *)properties + 6);
                                        if ( (__int64)++v369 >= (int)v368 )
                                          goto LABEL_332;
                                      }
                                      goto LABEL_360;
                                    }
LABEL_332:
                                    v379 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_HoldReinforcementsData__TypeInfo);
                                    System_Collections_Generic_List_object____ctor(
                                      v379,
                                      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_HoldReinforcementsData___ctor__);
                                    p_reinforcementsSaveList->klass = (CGThumbnailListItem_c *)v379;
                                    sub_1C32BC4(p_reinforcementsSaveList, (int32_t)v379, v380, v381);
                                    if ( roadEntitiesb->obj.klass )
                                    {
                                      methods = roadEntitiesb->obj.klass->_1.methods;
                                      if ( methods )
                                      {
                                        v383 = methods[3];
                                        if ( (int)v383 >= 1 )
                                        {
                                          v384 = 0;
                                          while ( v384 < (unsigned int)v383 )
                                          {
                                            v385 = (HoldReinforcementsData_SaveData_o *)methods[v384 + 4];
                                            v386 = (System_Collections_Generic_List_object__o *)p_reinforcementsSaveList->klass;
                                            v387 = (HoldReinforcementsData_o *)sub_1C32E6C(HoldReinforcementsData_TypeInfo);
                                            HoldReinforcementsData___ctor_38065084(v387, v385, 0);
                                            if ( !v386 )
                                              goto LABEL_359;
                                            v390 = v386->fields._items;
                                            v391 = Method_System_Collections_Generic_List_HoldReinforcementsData__Add__;
                                            ++v386->fields._version;
                                            if ( !v390 )
                                              goto LABEL_359;
                                            v392 = v386->fields._size;
                                            if ( (unsigned int)v392 >= LODWORD(v390->max_length) )
                                            {
                                              System_Collections_Generic_List_object___AddWithResize(
                                                v386,
                                                (Il2CppObject *)v387,
                                                *(const MethodInfo_37987BC **)(*(_QWORD *)(v391[4] + 192LL) + 112LL));
                                            }
                                            else
                                            {
                                              v393 = &v390->obj.klass + v392;
                                              v386->fields._size = v392 + 1;
                                              v393[4] = (Il2CppClass *)v387;
                                              sub_1C32BC4(
                                                (CGThumbnailListItem_o *)(v393 + 4),
                                                (int32_t)v387,
                                                v388,
                                                v389);
                                            }
                                            LODWORD(v383) = *((_DWORD *)methods + 6);
                                            if ( (__int64)++v384 >= (int)v383 )
                                              goto LABEL_343;
                                          }
                                          goto LABEL_360;
                                        }
LABEL_343:
                                        if ( roadEntitiesb->obj.klass )
                                        {
                                          v394 = System_Linq_Enumerable__ToList_int_(
                                                   (System_Collections_Generic_IEnumerable_TSource__o *)roadEntitiesb->obj.klass->_1.nestedTypes,
                                                   (const MethodInfo_31214BC *)Method_System_Linq_Enumerable_ToList_int___);
                                          p_playedStageReinforcementsList->klass = (CGThumbnailListItem_c *)v394;
                                          sub_1C32BC4(p_playedStageReinforcementsList, (int32_t)v394, v395, v396);
                                          v397 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardUiData__TypeInfo);
                                          System_Collections_Generic_List_object____ctor(
                                            v397,
                                            (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardUiData___ctor__);
                                          p_listUiData->klass = (CGThumbnailListItem_c *)v397;
                                          sub_1C32BC4(p_listUiData, (int32_t)v397, v398, v399);
                                          if ( roadEntitiesb->obj.klass )
                                          {
                                            implementedInterfaces = roadEntitiesb->obj.klass->_1.implementedInterfaces;
                                            if ( implementedInterfaces )
                                            {
                                              v403 = implementedInterfaces[3];
                                              if ( (int)v403 >= 1 )
                                              {
                                                v404 = 0;
                                                while ( v404 < (unsigned int)v403 )
                                                {
                                                  v405 = (WarBoardUiData_SaveData_o *)implementedInterfaces[v404 + 4];
                                                  v406 = (System_Collections_Generic_List_object__o *)p_listUiData->klass;
                                                  v407 = (WarBoardUiData_o *)sub_1C32E6C(WarBoardUiData_TypeInfo);
                                                  WarBoardUiData___ctor_38071504(v407, v405, 0);
                                                  if ( !v406 )
                                                    goto LABEL_359;
                                                  v410 = v406->fields._items;
                                                  v411 = Method_System_Collections_Generic_List_WarBoardUiData__Add__;
                                                  ++v406->fields._version;
                                                  if ( !v410 )
                                                    goto LABEL_359;
                                                  v412 = v406->fields._size;
                                                  if ( (unsigned int)v412 >= LODWORD(v410->max_length) )
                                                  {
                                                    System_Collections_Generic_List_object___AddWithResize(
                                                      v406,
                                                      (Il2CppObject *)v407,
                                                      *(const MethodInfo_37987BC **)(*(_QWORD *)(v411[4] + 192LL) + 112LL));
                                                  }
                                                  else
                                                  {
                                                    v413 = &v410->obj.klass + v412;
                                                    v406->fields._size = v412 + 1;
                                                    v413[4] = (Il2CppClass *)v407;
                                                    sub_1C32BC4(
                                                      (CGThumbnailListItem_o *)(v413 + 4),
                                                      (int32_t)v407,
                                                      v408,
                                                      v409);
                                                  }
                                                  LODWORD(v403) = *((_DWORD *)implementedInterfaces + 6);
                                                  if ( (__int64)++v404 >= (int)v403 )
                                                    goto LABEL_355;
                                                }
                                                goto LABEL_360;
                                              }
LABEL_355:
                                              if ( roadEntitiesb->obj.klass )
                                              {
                                                interfaceOffsets = roadEntitiesb->obj.klass->_1.interfaceOffsets;
                                                p_bgAnimationInfo_k__BackingField->klass = (CGThumbnailListItem_c *)interfaceOffsets;
                                                sub_1C32BC4(
                                                  p_bgAnimationInfo_k__BackingField,
                                                  (int32_t)interfaceOffsets,
                                                  v400,
                                                  v401);
                                                v415 = roadEntitiesb->obj.klass;
                                                if ( roadEntitiesb->obj.klass )
                                                {
                                                  v438->fields._ContinueConsumeType_k__BackingField = HIDWORD(v415->_2.unity_user_data);
                                                  v438->fields._IsContinue_k__BackingField = v415->_2.initializationExceptionGCHandle;
                                                  v438->fields._IsNextTurn_k__BackingField = BYTE1(v415->_2.initializationExceptionGCHandle);
                                                  v438->fields.localSaveTiming = (int32_t)v415->_2.unity_user_data;
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
    sub_1C32E7C(Instance);
  }
  v416 = (WarBoardData_WarBoardLocalSaveData_o *)sub_1C32E6C(WarBoardData_WarBoardLocalSaveData_TypeInfo);
  WarBoardData_WarBoardLocalSaveData___ctor_38024844(v416, v438, 0);
  v438->fields.localSaveData = v416;
  sub_1C32BC4((CGThumbnailListItem_o *)&v438->fields.localSaveData, (int32_t)v416, v417, v418);
}


void WarBoardData__AddPlayedEventData(WarBoardData_o *this, WarBoardEventData_o *eventData, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Collections_Generic_List_object__o *listEvent; // x0
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppClass **v10; // x8

  if ( (byte_4C35414 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardEventData__Add__);
    byte_4C35414 = 1;
  }
  listEvent = (System_Collections_Generic_List_object__o *)this->fields.listEvent;
  if ( !listEvent
    || (items = listEvent->fields._items,
        v8 = Method_System_Collections_Generic_List_WarBoardEventData__Add__,
        ++listEvent->fields._version,
        !items) )
  {
    sub_1C32E7C(listEvent);
  }
  size = listEvent->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      listEvent,
      (Il2CppObject *)eventData,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    listEvent->fields._size = size + 1;
    v10[4] = (Il2CppClass *)eventData;
    sub_1C32BC4((CGThumbnailListItem_o *)(v10 + 4), (int32_t)eventData, (int32_t)method, v3);
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
  Il2CppObject *Master_object; // x24
  __int64 Instance; // x0
  Il2CppObject *v13; // x28
  System_Collections_Generic_List_object__o *v14; // x19
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v16; // x27
  WarBoardUserServantData_o *v17; // x26
  struct System_Int32_array *reinforcementsIds; // x8
  struct System_Int32_array *v19; // x8
  __int64 v20; // x9
  WarBoardStagePieceDetailMaster_o *v21; // x19
  WarBoardDataEntity_o *v22; // x22
  WarBoardReinforcementsEntity_o *v23; // x25
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *npcEntityDict; // x20
  WarBoardStageReinforcementsEntity_o *v25; // x24
  int32_t v26; // w28
  int32_t v27; // w21
  WarBoardPieceData_o *v28; // x23
  NpcFollowerEntity_o *Entity_42319072; // x0
  NpcFollowerEntity_o *v30; // x20
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  struct WarBoardPieceData_array **p_pieces; // x20
  System_Object_array *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct WarBoardUserServantData_array *svtInfo; // x1
  il2cpp_array_size_t v44; // x21
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x22
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  unsigned __int64 v48; // x23
  __int64 v49; // x26
  __int64 v50; // x27
  struct WarBoardData_WarBoardLocalSaveData_o *v51; // x8
  struct WarBoardPieceData_array *v52; // x9
  unsigned int *pieceSaves; // x28
  WarBoardPieceData_o *v54; // x22
  WarBoardPieceData_SaveData_o *v55; // x21
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  __int64 v59; // x0
  System_Collections_Generic_List_object__o *v60; // [xsp+10h] [xbp-D0h]
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+18h] [xbp-C8h]
  System_Int32_array *v62; // [xsp+20h] [xbp-C0h]
  Il2CppObject *v63; // [xsp+28h] [xbp-B8h]
  WarBoardUserServantData_array *v64; // [xsp+30h] [xbp-B0h]
  NpcFollowerMaster_o *v65; // [xsp+38h] [xbp-A8h]
  System_Collections_Generic_List_object__o *v66; // [xsp+40h] [xbp-A0h]
  WarBoardUserServantData_o **v67; // [xsp+48h] [xbp-98h]
  int32_t questPhase; // [xsp+50h] [xbp-90h]
  int32_t questId; // [xsp+54h] [xbp-8Ch]
  int32_t *m_Items; // [xsp+58h] [xbp-88h]
  bool isChangeName; // [xsp+64h] [xbp-7Ch] BYREF
  Il2CppObject *v72; // [xsp+68h] [xbp-78h] BYREF
  WarBoardStagePieceDetailEntity_o *v73; // [xsp+70h] [xbp-70h] BYREF
  WarBoardReinforcementsEntity_o *entity; // [xsp+78h] [xbp-68h] BYREF

  if ( (byte_4C35412 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__RemoveAt__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    sub_1C32C20(&WarBoardPieceData_SaveData___TypeInfo);
    sub_1C32C20(&WarBoardPieceData_SaveData_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&WarBoardPieceData_TypeInfo);
    byte_4C35412 = 1;
  }
  v73 = 0;
  entity = 0;
  v72 = 0;
  isChangeName = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  v13 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v65 = (NpcFollowerMaster_o *)Instance;
  if ( !serverData )
    goto LABEL_69;
  questPhase = serverData->fields.questPhase;
  questId = serverData->fields.questId;
  v60 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v60,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( !reinfoSvtInfo )
    goto LABEL_69;
  max_length = reinfoSvtInfo->max_length;
  v66 = v14;
  if ( (int)max_length >= 1 )
  {
    v16 = 0;
    m_Items = indexList->m_Items;
    v67 = reinfoSvtInfo->m_Items;
    v63 = Master_object;
    v64 = reinfoSvtInfo;
    v62 = indexList;
    do
    {
      if ( v16 >= (unsigned int)max_length )
LABEL_70:
        sub_1C32E84(Instance);
      v17 = v67[v16];
      if ( v17 )
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
        if ( v16 >= LODWORD(indexList->max_length) )
          goto LABEL_70;
        if ( m_Items[v16] < SLODWORD(reinforcementsIds->max_length) )
          goto LABEL_52;
      }
      if ( v16 >= LODWORD(indexList->max_length) )
        goto LABEL_70;
      v19 = reinfoStage->fields.reinforcementsIds;
      if ( !v19 )
        goto LABEL_69;
      v20 = m_Items[v16];
      if ( (unsigned int)v20 >= LODWORD(v19->max_length) )
        goto LABEL_70;
      if ( !Master_object )
        goto LABEL_69;
      v21 = (WarBoardStagePieceDetailMaster_o *)v13;
      v22 = serverData;
      WarBoardReinforcementsMaster__TryGetEntity(
        (WarBoardReinforcementsMaster_o *)Master_object,
        &entity,
        v19->m_Items[v20],
        0);
      Instance = (__int64)this->fields.reinforcementsAppointmentSquareList;
      if ( !Instance )
        goto LABEL_69;
      v23 = entity;
      npcEntityDict = this->fields.npcEntityDict;
      v25 = reinfoStage;
      Instance = System_Collections_Generic_List_int___get_Item(
                   (System_Collections_Generic_List_int__o *)Instance,
                   0,
                   (const MethodInfo_377B4A8 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( v16 >= LODWORD(indexList->max_length) )
        goto LABEL_70;
      v26 = Instance;
      v27 = m_Items[v16];
      v28 = (WarBoardPieceData_o *)sub_1C32E6C(WarBoardPieceData_TypeInfo);
      WarBoardPieceData___ctor_38046420(v28, v25, v23, v17, npcEntityDict, v16, v26, v27, 0);
      Instance = (__int64)this->fields.reinforcementsAppointmentSquareList;
      if ( !Instance )
        goto LABEL_69;
      System_Collections_Generic_List_int___RemoveAt(
        (System_Collections_Generic_List_int__o *)Instance,
        0,
        (const MethodInfo_377CF18 *)Method_System_Collections_Generic_List_int__RemoveAt__);
      if ( !v28 )
        goto LABEL_69;
      v13 = (Il2CppObject *)v21;
      if ( !v21 )
        goto LABEL_69;
      serverData = v22;
      Instance = WarBoardStagePieceDetailMaster__TryGetEntity(
                   v21,
                   &v73,
                   v22->fields.stageId,
                   v28->fields._forceId_k__BackingField,
                   v28->fields._groupId_k__BackingField,
                   v28->fields._index_k__BackingField,
                   0);
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)v73;
        if ( !v73 )
          goto LABEL_69;
        v28->fields._npcImageSvtId_k__BackingField = WarBoardStagePieceDetailEntity__GetImageSvtId(v73, 0);
        Instance = (__int64)v73;
        if ( !v73 )
          goto LABEL_69;
        Instance = WarBoardStagePieceDetailEntity__GetDispLimitCnt(v73, 0);
        v28->fields._npcDispLimitCount_k__BackingField = Instance;
      }
      if ( !v65 )
        goto LABEL_69;
      Entity_42319072 = NpcFollowerMaster__GetEntity_42319072(
                          v65,
                          questId,
                          questPhase,
                          v28->fields._npcId_k__BackingField,
                          0);
      if ( Entity_42319072 )
      {
        v30 = Entity_42319072;
        if ( !v28->fields._npcImageSvtId_k__BackingField )
          v28->fields._npcImageSvtId_k__BackingField = NpcFollowerEntity__GetImageSvtId(Entity_42319072, 0);
        if ( v28->fields._npcDispLimitCount_k__BackingField < 0 )
          v28->fields._npcDispLimitCount_k__BackingField = NpcFollowerEntity__GetDispLimitCnt(v30, -1, 0);
      }
      Instance = WarBoardPieceData__get_isPlayerGroup(v28, 0);
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)MasterData_object;
        if ( !MasterData_object )
          goto LABEL_69;
        Instance = DataMasterBase_object__object__long___TryGetEntity(
                     MasterData_object,
                     &v72,
                     v28->fields._npcId_k__BackingField,
                     (const MethodInfo_3398DE0 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
        if ( (Instance & 1) != 0 )
        {
          Instance = (__int64)v72;
          if ( !v72 )
            goto LABEL_69;
          Instance = (__int64)NpcServantFollowerEntity__GetFollowerName_42321972(
                                (NpcServantFollowerEntity_o *)v72,
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
      if ( !v66 )
        goto LABEL_69;
      items = v66->fields._items;
      v34 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
      ++v66->fields._version;
      if ( !items )
        goto LABEL_69;
      size = v66->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v66,
          (Il2CppObject *)v28,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &items->obj.klass + size;
        v66->fields._size = size + 1;
        v36[4] = (Il2CppClass *)v28;
        sub_1C32BC4((CGThumbnailListItem_o *)(v36 + 4), (int32_t)v28, v31, v32);
      }
      reinfoStage = v25;
      indexList = v62;
      Master_object = v63;
      reinfoSvtInfo = v64;
LABEL_52:
      LODWORD(max_length) = reinfoSvtInfo->max_length;
    }
    while ( (__int64)++v16 < (int)max_length );
  }
  if ( !v60 )
    goto LABEL_69;
  p_pieces = &this->fields.pieces;
  System_Collections_Generic_List_object___AddRange(
    v60,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.pieces,
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v60,
    (System_Collections_Generic_IEnumerable_T__o *)v66,
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
  v38 = System_Collections_Generic_List_object___ToArray(
          v60,
          (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  this->fields.pieces = (struct WarBoardPieceData_array *)v38;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.pieces, (int32_t)v38, v39, v40);
  Instance = (__int64)this->fields.serverData;
  if ( !Instance
    || (svtInfo = serverData->fields.svtInfo,
        *(_QWORD *)(Instance + 16) = svtInfo,
        sub_1C32BC4((CGThumbnailListItem_o *)(Instance + 16), (int32_t)svtInfo, v41, v42),
        !*p_pieces)
    || (v44 = (*p_pieces)->max_length,
        localSaveData = this->fields.localSaveData,
        Instance = sub_1C32CC8(WarBoardPieceData_SaveData___TypeInfo, (unsigned int)v44),
        !localSaveData) )
  {
LABEL_69:
    sub_1C32E7C(Instance);
  }
  localSaveData->fields.pieceSaves = (struct WarBoardPieceData_SaveData_array *)Instance;
  sub_1C32BC4((CGThumbnailListItem_o *)&localSaveData->fields.pieceSaves, Instance, v46, v47);
  if ( (int)v44 >= 1 )
  {
    v48 = 0;
    v49 = (unsigned int)v44;
    v50 = 8;
    do
    {
      v51 = this->fields.localSaveData;
      if ( !v51 )
        goto LABEL_69;
      v52 = *p_pieces;
      if ( !*p_pieces )
        goto LABEL_69;
      if ( v48 >= LODWORD(v52->max_length) )
        goto LABEL_70;
      pieceSaves = (unsigned int *)v51->fields.pieceSaves;
      v54 = *(WarBoardPieceData_o **)((char *)&v52->obj.klass + v50 * 4);
      v55 = (WarBoardPieceData_SaveData_o *)sub_1C32E6C(WarBoardPieceData_SaveData_TypeInfo);
      WarBoardPieceData_SaveData___ctor_38027896(v55, v54, 0);
      if ( !pieceSaves )
        goto LABEL_69;
      if ( v55 )
      {
        Instance = sub_1C32D5C(v55, *(_QWORD *)(*(_QWORD *)pieceSaves + 64LL));
        if ( !Instance )
        {
          v59 = sub_1C32EA0();
          sub_1C32D48(v59, 0);
        }
      }
      if ( v48 >= pieceSaves[6] )
        goto LABEL_70;
      *(_QWORD *)&pieceSaves[v50] = v55;
      sub_1C32BC4((CGThumbnailListItem_o *)&pieceSaves[v50], (int32_t)v55, v56, v57);
      ++v48;
      v50 += 2;
    }
    while ( v49 != v48 );
  }
  Instance = (__int64)v66;
  if ( !v66 )
    goto LABEL_69;
  return (WarBoardPieceData_array *)System_Collections_Generic_List_object___ToArray(
                                      v66,
                                      (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
}


void WarBoardData__AddSquareInfo(WarBoardData_o *this, int32_t squareIndex, int32_t effectId, const MethodInfo *method)
{
  WarBoardData___c__DisplayClass173_0_o *v7; // x22
  _BOOL8 v8; // x0
  struct WarBoardDataEntity_o *serverData; // x8
  System_Object_array *squareIndexInfo; // x20
  System_Func_object__bool__o *v11; // x21
  Il2CppObject *object; // x0
  CGThumbnailListItem_o *p_monitor; // x20
  System_Collections_Generic_IEnumerable_T__o *monitor; // x22
  System_Collections_Generic_List_int__o *v15; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  System_Int32_array *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4C35419 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Find_WarBoardSquareIndexData___);
    sub_1C32C20(&System_Func_WarBoardSquareIndexData__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor___78010240);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass173_0__AddSquareInfo_b__0__);
    sub_1C32C20(&WarBoardData___c__DisplayClass173_0_TypeInfo);
    byte_4C35419 = 1;
  }
  v7 = (WarBoardData___c__DisplayClass173_0_o *)sub_1C32E6C(WarBoardData___c__DisplayClass173_0_TypeInfo);
  WarBoardData___c__DisplayClass173_0___ctor(v7, 0);
  if ( !v7 )
    goto LABEL_14;
  v7->fields.squareIndex = squareIndex;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_14;
  squareIndexInfo = (System_Object_array *)serverData->fields.squareIndexInfo;
  v11 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardSquareIndexData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_WarBoardData___c__DisplayClass173_0__AddSquareInfo_b__0__,
    0);
  object = BasicHelper__Find_object_(
             squareIndexInfo,
             (System_Func_T__bool__o *)v11,
             (const MethodInfo_30C735C *)Method_BasicHelper_Find_WarBoardSquareIndexData___);
  if ( !object )
    return;
  p_monitor = (CGThumbnailListItem_o *)&object[1].monitor;
  monitor = (System_Collections_Generic_IEnumerable_T__o *)object[1].monitor;
  v15 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_58175596(
    v15,
    monitor,
    (const MethodInfo_377B06C *)Method_System_Collections_Generic_List_int___ctor___78010240);
  if ( !v15 )
    goto LABEL_14;
  v8 = System_Collections_Generic_List_int___Contains(
         v15,
         effectId,
         (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__);
  if ( v8 )
    return;
  items = v15->fields._items;
  v17 = Method_System_Collections_Generic_List_int__Add__;
  ++v15->fields._version;
  if ( !items )
LABEL_14:
    sub_1C32E7C(v8);
  size = v15->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v15,
      effectId,
      *(const MethodInfo_377B798 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v15->fields._size = size + 1;
    items->m_Items[size] = effectId;
  }
  v19 = System_Collections_Generic_List_int___ToArray(
          v15,
          (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
  p_monitor->klass = (CGThumbnailListItem_c *)v19;
  sub_1C32BC4(p_monitor, (int32_t)v19, v20, v21);
}


void WarBoardData__BuffTurnProgressing(WarBoardData_o *this, const MethodInfo *method)
{
  WarBoardData___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__object__o *_9__191_0; // x20
  Il2CppObject *v6; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v10; // x0
  WarBoardData___c_c *v11; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x19
  System_Func_object__bool__o *_9__191_1; // x20
  Il2CppObject *v14; // x21
  struct WarBoardData___c_StaticFields *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  WarBoardData___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_T__o *v20; // x19
  System_Action_object__o *_9__191_2; // x20
  Il2CppObject *v22; // x21
  CGThumbnailListItem_o *p__9__191_2; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3

  if ( (byte_4C35428 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_BattleBuffData__TypeInfo);
    sub_1C32C20(&Method_BasicHelper_ForEach_BattleBuffData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__BattleBuffData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_BattleBuffData___);
    sub_1C32C20(&System_Func_BattleBuffData__bool__TypeInfo);
    sub_1C32C20(&System_Func_WarBoardPieceData__BattleBuffData__TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__BuffTurnProgressing_b__191_0__);
    sub_1C32C20(&Method_WarBoardData___c__BuffTurnProgressing_b__191_1__);
    sub_1C32C20(&Method_WarBoardData___c__BuffTurnProgressing_b__191_2__);
    sub_1C32C20(&WarBoardData___c_TypeInfo);
    byte_4C35428 = 1;
  }
  v3 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v3 = WarBoardData___c_TypeInfo;
  }
  _9__191_0 = (System_Func_object__object__o *)v3->static_fields->__9__191_0;
  if ( !_9__191_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = WarBoardData___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__191_0 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_WarBoardPieceData__BattleBuffData__TypeInfo);
    System_Func_object__object____ctor(_9__191_0, v6, Method_WarBoardData___c__BuffTurnProgressing_b__191_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__191_0 = (struct System_Func_WarBoardPieceData__BattleBuffData__o *)_9__191_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__191_0, (int32_t)_9__191_0, v8, v9);
  }
  v10 = System_Linq_Enumerable__Select_object__object_(
          pieces,
          (System_Func_TSource__TResult__o *)_9__191_0,
          (const MethodInfo_3113ABC *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__BattleBuffData___);
  v11 = WarBoardData___c_TypeInfo;
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)v10;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v11 = WarBoardData___c_TypeInfo;
  }
  _9__191_1 = (System_Func_object__bool__o *)v11->static_fields->__9__191_1;
  if ( !_9__191_1 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = WarBoardData___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__191_1 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattleBuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__191_1, v14, Method_WarBoardData___c__BuffTurnProgressing_b__191_1__, 0);
    v15 = WarBoardData___c_TypeInfo->static_fields;
    v15->__9__191_1 = (struct System_Func_BattleBuffData__bool__o *)_9__191_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&v15->__9__191_1, (int32_t)_9__191_1, v16, v17);
  }
  v18 = System_Linq_Enumerable__Where_object_(
          v12,
          (System_Func_TSource__bool__o *)_9__191_1,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_BattleBuffData___);
  v19 = WarBoardData___c_TypeInfo;
  v20 = (System_Collections_Generic_IEnumerable_T__o *)v18;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v19 = WarBoardData___c_TypeInfo;
  }
  _9__191_2 = (System_Action_object__o *)v19->static_fields->__9__191_2;
  if ( !_9__191_2 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = WarBoardData___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__191_2 = (System_Action_object__o *)sub_1C32E6C(System_Action_BattleBuffData__TypeInfo);
    System_Action_object____ctor(_9__191_2, v22, Method_WarBoardData___c__BuffTurnProgressing_b__191_2__, 0);
    p__9__191_2 = (CGThumbnailListItem_o *)&WarBoardData___c_TypeInfo->static_fields->__9__191_2;
    p__9__191_2->klass = (CGThumbnailListItem_c *)_9__191_2;
    sub_1C32BC4(p__9__191_2, (int32_t)_9__191_2, v24, v25);
  }
  BasicHelper__ForEach_object_(
    v20,
    (System_Action_T__o *)_9__191_2,
    (const MethodInfo_30C93B0 *)Method_BasicHelper_ForEach_BattleBuffData___);
}


void WarBoardData__CheckItem(
        WarBoardData_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  __int64 AliveServantPieces; // x0
  const MethodInfo *v6; // x2
  int v7; // w8
  __int64 v8; // x21
  unsigned int v9; // w27
  WarBoardPieceData_o *v10; // x22
  __int64 v11; // x23
  WarBoardManager_o *v12; // x24
  const MethodInfo_38C2B00 *v13; // x2
  System_Nullable_float__o v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x24
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  Il2CppObject *Instance; // x25
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  __int64 v25; // x26
  __int64 v26; // x0
  System_Nullable_Vector3__o v27; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_Vector3__o v28; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C353DF & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C32C20(&Method_System_Nullable_Vector3___ctor__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&WarBoardTaskBase___TypeInfo);
    byte_4C353DF = 1;
  }
  AliveServantPieces = (__int64)WarBoardData__GetAliveServantPieces(this, (const MethodInfo *)taskList);
  if ( !AliveServantPieces )
LABEL_27:
    sub_1C32E7C(AliveServantPieces);
  v7 = *(_DWORD *)(AliveServantPieces + 24);
  v8 = AliveServantPieces;
  if ( v7 >= 1 )
  {
    v9 = 0;
    while ( v9 < v7 )
    {
      v10 = *(WarBoardPieceData_o **)(v8 + 8LL * (int)v9 + 32);
      if ( !v10 )
        goto LABEL_27;
      AliveServantPieces = (__int64)WarBoardData__GetItem(this, v10->fields._nowSquareIndex_k__BackingField, v6);
      if ( AliveServantPieces )
      {
        v11 = AliveServantPieces;
        AliveServantPieces = WarBoardItemData__get_Acquired((WarBoardItemData_o *)AliveServantPieces, 0);
        if ( (AliveServantPieces & 1) == 0 )
        {
          AliveServantPieces = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !*(_QWORD *)(v11 + 56) )
            goto LABEL_27;
          v12 = (WarBoardManager_o *)AliveServantPieces;
          AliveServantPieces = (__int64)UnityEngine_Component__get_transform(*(UnityEngine_Component_o **)(v11 + 56), 0);
          if ( !AliveServantPieces )
            goto LABEL_27;
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)AliveServantPieces, 0);
          *(_QWORD *)&v28.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
          *(_QWORD *)&v28.fields.hasValue = &v27;
          *(_QWORD *)&v27.fields.hasValue = 0;
          *(_QWORD *)&v27.fields.value.fields.y = 0;
          System_Nullable_Vector3____ctor(v28, localPosition, v13);
          if ( !v12 )
            goto LABEL_27;
          v14 = 0;
          AliveServantPieces = (__int64)WarBoardManager__GetCameraPerformanceTask(v12, v27, v14, 1, 0, 1, 0);
          v17 = AliveServantPieces;
          if ( taskList )
          {
            items = taskList->fields._items;
            v19 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
            ++taskList->fields._version;
            if ( !items )
              goto LABEL_27;
            size = taskList->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)taskList,
                (Il2CppObject *)AliveServantPieces,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
            }
            else
            {
              v21 = &items->obj.klass + size;
              taskList->fields._size = size + 1;
              v21[4] = (Il2CppClass *)v17;
              sub_1C32BC4((CGThumbnailListItem_o *)(v21 + 4), v17, v15, v16);
            }
          }
          else
          {
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
            AliveServantPieces = sub_1C32CC8(WarBoardTaskBase___TypeInfo, 1);
            if ( !AliveServantPieces )
              goto LABEL_27;
            v25 = AliveServantPieces;
            if ( v17 )
            {
              AliveServantPieces = sub_1C32D5C(v17, *(_QWORD *)(*(_QWORD *)AliveServantPieces + 64LL));
              if ( !AliveServantPieces )
              {
                v26 = sub_1C32EA0();
                sub_1C32D48(v26, 0);
              }
            }
            if ( !*(_DWORD *)(v25 + 24) )
              break;
            *(_QWORD *)(v25 + 32) = v17;
            sub_1C32BC4((CGThumbnailListItem_o *)(v25 + 32), v17, v23, v24);
            if ( !Instance )
              goto LABEL_27;
            WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v25, 0);
          }
          AliveServantPieces = WarBoardItemData__Get((WarBoardItemData_o *)v11, v10, taskList, 0, 0);
        }
      }
      v7 = *(_DWORD *)(v8 + 24);
      if ( (int)++v9 >= v7 )
        return;
    }
    sub_1C32E84(AliveServantPieces);
  }
}


bool WarBoardData__CheckWinCond(WarBoardData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  WarBoardPieceData_array *Master_object; // x0
  bool result; // w0
  int32_t maxForceId_k__BackingField; // w9
  int32_t maxGroupId_k__BackingField; // w8
  int v8; // w24
  int v9; // w23
  int32_t i; // w20
  int32_t v11; // w21
  int max_length; // w8
  WarBoardPieceData_array *v13; // x22
  unsigned int v14; // w25
  struct System_Collections_Generic_List_int__o *masterExistsForce; // x19
  WarBoardData___c_c *v16; // x0
  System_Func_int__bool__o *_9__98_0; // x20
  Il2CppObject *v18; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t condGroup; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C353E4 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Count_int____78100232);
    sub_1C32C20(&System_Func_int__bool__TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__CheckWinCond_b__98_0__);
    sub_1C32C20(&WarBoardData___c_TypeInfo);
    byte_4C353E4 = 1;
  }
  if ( (this->fields.winCondId & 0x80000000) == 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (WarBoardPieceData_array *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    condGroup = -1;
    if ( Master_object )
    {
      if ( !WarBoardCommonReleaseMaster__IsOpen_43201192(
              (WarBoardCommonReleaseMaster_o *)Master_object,
              this->fields.winCondId,
              &condGroup,
              0) )
        return 0;
      result = 1;
      this->fields.winCondGroup = condGroup;
      return result;
    }
LABEL_39:
    sub_1C32E7C(Master_object);
  }
  maxForceId_k__BackingField = this->fields._maxForceId_k__BackingField;
  if ( maxForceId_k__BackingField < 1 )
  {
    v9 = 0;
    v8 = 0;
    goto LABEL_30;
  }
  maxGroupId_k__BackingField = this->fields._maxGroupId_k__BackingField;
  v8 = 0;
  v9 = 0;
  for ( i = 1; i <= maxForceId_k__BackingField; ++i )
  {
    if ( maxGroupId_k__BackingField < 0 )
      continue;
    v11 = 0;
    do
    {
      Master_object = WarBoardData__GetPieces_37846208(this, i, v11, v2);
      if ( !Master_object )
        goto LABEL_39;
      max_length = Master_object->max_length;
      v13 = Master_object;
      if ( max_length >= 1 )
      {
        v14 = 0;
        do
        {
          if ( v14 >= max_length )
            sub_1C32E84(Master_object);
          Master_object = (WarBoardPieceData_array *)v13->m_Items[v14];
          if ( !Master_object )
            goto LABEL_39;
          if ( !BYTE4(Master_object->m_Items[3]) && !LOBYTE(Master_object->m_Items[11]) )
          {
            Master_object = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster(
                                                         (WarBoardPieceData_o *)Master_object,
                                                         0);
            if ( ((unsigned __int8)Master_object & 1) != 0 )
              ++v8;
            else
              ++v9;
          }
          max_length = v13->max_length;
        }
        while ( (int)++v14 < max_length );
      }
      maxGroupId_k__BackingField = this->fields._maxGroupId_k__BackingField;
      ++v11;
    }
    while ( v11 <= maxGroupId_k__BackingField );
    maxForceId_k__BackingField = this->fields._maxForceId_k__BackingField;
  }
LABEL_30:
  masterExistsForce = this->fields.masterExistsForce;
  v16 = WarBoardData___c_TypeInfo;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v16 = WarBoardData___c_TypeInfo;
  }
  _9__98_0 = v16->static_fields->__9__98_0;
  if ( !_9__98_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = WarBoardData___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__98_0 = (System_Func_int__bool__o *)sub_1C32E6C(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__98_0, v18, Method_WarBoardData___c__CheckWinCond_b__98_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__98_0 = _9__98_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__98_0, (int32_t)_9__98_0, v20, v21);
  }
  return (v8 == 0)
       & (System_Linq_Enumerable__Count_int__51373624(
            (System_Collections_Generic_IEnumerable_TSource__o *)masterExistsForce,
            (System_Func_TSource__bool__o *)_9__98_0,
            (const MethodInfo_30FE638 *)Method_System_Linq_Enumerable_Count_int____78100232) > 0)
       | (v9 == 0);
}


void WarBoardData__ClearLastBattlePieceUniqueIndexes(WarBoardData_o *this, const MethodInfo *method)
{
  struct System_UInt32_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C3541C & 1) == 0 )
  {
    sub_1C32C20(&uint___TypeInfo);
    byte_4C3541C = 1;
  }
  v3 = (struct System_UInt32_array *)sub_1C32CC8(uint___TypeInfo, 0);
  this->fields.latestBattlePieceUniqueIndexes = v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.latestBattlePieceUniqueIndexes, (int32_t)v3, v4, v5);
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
    sub_1C32E7C(this);
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

  if ( (byte_4C35430 & 1) == 0 )
  {
    sub_1C32C20(&WarBoardData_BattleParticipantInfo_TypeInfo);
    byte_4C35430 = 1;
  }
  v6 = (WarBoardData_BattleParticipantInfo_o *)sub_1C32E6C(WarBoardData_BattleParticipantInfo_TypeInfo);
  WarBoardData_BattleParticipantInfo___ctor(v6, attackPieceData, targetPieceData, 0);
  return v6;
}


void WarBoardData__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  WarBoardData_c *v1; // x0
  System_String_o *AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY; // x19

  if ( (byte_4C353DC & 1) == 0 )
  {
    sub_1C32C20(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C32C20(&WarBoardData_TypeInfo);
    byte_4C353DC = 1;
  }
  v1 = WarBoardData_TypeInfo;
  if ( !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    v1 = WarBoardData_TypeInfo;
  }
  AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY = v1->static_fields->AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SetInt(AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY, 1, 0);
}


WarBoardWaitTime_o *WarBoardData__CreateEventBossUIDataTask(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x19
  __int64 v3; // x0
  System_Delegate_o **v4; // x20
  System_Delegate_o *v5; // x21
  WarBoardData___c_c *v6; // x0
  WarBoardTaskBase_TaskCallback_o *_9__152_0; // x22
  Il2CppObject *v8; // x23
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Delegate_o *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Delegate_o *v15; // x8
  WarBoardTaskBase_TaskCallback_c *v16; // x1

  if ( (byte_4C3540C & 1) == 0 )
  {
    sub_1C32C20(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__CreateEventBossUIDataTask_b__152_0__);
    sub_1C32C20(&WarBoardData___c_TypeInfo);
    sub_1C32C20(&WarBoardWaitTime_TypeInfo);
    byte_4C3540C = 1;
  }
  v2 = sub_1C32E6C(WarBoardWaitTime_TypeInfo);
  WarBoardWaitTime___ctor((WarBoardWaitTime_o *)v2, 0.0, 0);
  if ( !v2 )
    sub_1C32E7C(v3);
  v4 = (System_Delegate_o **)(v2 + 40);
  v5 = *(System_Delegate_o **)(v2 + 40);
  v6 = WarBoardData___c_TypeInfo;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v6 = WarBoardData___c_TypeInfo;
  }
  _9__152_0 = v6->static_fields->__9__152_0;
  if ( !_9__152_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = WarBoardData___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v6->static_fields->__9;
    _9__152_0 = (WarBoardTaskBase_TaskCallback_o *)sub_1C32E6C(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__152_0,
      v8,
      Method_WarBoardData___c__CreateEventBossUIDataTask_b__152_0__,
      0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__152_0 = _9__152_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__152_0, (int32_t)_9__152_0, v10, v11);
  }
  v12 = System_Delegate__Combine(v5, (System_Delegate_o *)_9__152_0, 0);
  v15 = v12;
  if ( !v12 )
    goto LABEL_14;
  v16 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v12->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v4 = v12, (WarBoardTaskBase_TaskCallback_c *)v12->klass != v16) )
  {
    sub_1C3313C(v12);
LABEL_14:
    *v4 = v15;
  }
  sub_1C32BC4((CGThumbnailListItem_o *)(v2 + 40), (int32_t)v15, v13, v14);
  return (WarBoardWaitTime_o *)v2;
}


void WarBoardData__DelSquareInfo(WarBoardData_o *this, int32_t squareIndex, int32_t effectId, const MethodInfo *method)
{
  WarBoardData___c__DisplayClass174_0_o *v7; // x22
  __int64 v8; // x0
  struct WarBoardDataEntity_o *serverData; // x8
  System_Object_array *squareIndexInfo; // x20
  System_Func_object__bool__o *v11; // x21
  Il2CppObject *object; // x0
  CGThumbnailListItem_o *p_monitor; // x20
  System_Collections_Generic_IEnumerable_T__o *monitor; // x22
  System_Collections_Generic_List_int__o *v15; // x21
  System_Int32_array *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4C3541A & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Find_WarBoardSquareIndexData___);
    sub_1C32C20(&System_Func_WarBoardSquareIndexData__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor___78010240);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass174_0__DelSquareInfo_b__0__);
    sub_1C32C20(&WarBoardData___c__DisplayClass174_0_TypeInfo);
    byte_4C3541A = 1;
  }
  v7 = (WarBoardData___c__DisplayClass174_0_o *)sub_1C32E6C(WarBoardData___c__DisplayClass174_0_TypeInfo);
  WarBoardData___c__DisplayClass174_0___ctor(v7, 0);
  if ( !v7 )
    goto LABEL_10;
  v7->fields.squareIndex = squareIndex;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_10;
  squareIndexInfo = (System_Object_array *)serverData->fields.squareIndexInfo;
  v11 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardSquareIndexData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_WarBoardData___c__DisplayClass174_0__DelSquareInfo_b__0__,
    0);
  object = BasicHelper__Find_object_(
             squareIndexInfo,
             (System_Func_T__bool__o *)v11,
             (const MethodInfo_30C735C *)Method_BasicHelper_Find_WarBoardSquareIndexData___);
  if ( !object )
    return;
  p_monitor = (CGThumbnailListItem_o *)&object[1].monitor;
  monitor = (System_Collections_Generic_IEnumerable_T__o *)object[1].monitor;
  v15 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_58175596(
    v15,
    monitor,
    (const MethodInfo_377B06C *)Method_System_Collections_Generic_List_int___ctor___78010240);
  if ( !v15 )
LABEL_10:
    sub_1C32E7C(v8);
  if ( System_Collections_Generic_List_int___Contains(
         v15,
         effectId,
         (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    System_Collections_Generic_List_int___Remove(
      v15,
      effectId,
      (const MethodInfo_377CC94 *)Method_System_Collections_Generic_List_int__Remove__);
    v16 = System_Collections_Generic_List_int___ToArray(
            v15,
            (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
    p_monitor->klass = (CGThumbnailListItem_c *)v16;
    sub_1C32BC4(p_monitor, (int32_t)v16, v17, v18);
  }
}


void WarBoardData__DeleteAfterContinueDeviceLocalSave(const MethodInfo *method)
{
  WarBoardData_c *v1; // x0
  System_String_o *AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY; // x19

  if ( (byte_4C353DD & 1) == 0 )
  {
    sub_1C32C20(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C32C20(&WarBoardData_TypeInfo);
    byte_4C353DD = 1;
  }
  v1 = WarBoardData_TypeInfo;
  if ( !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    v1 = WarBoardData_TypeInfo;
  }
  AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY = v1->static_fields->AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__DeleteKey(AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY, 0);
}


void WarBoardData__DeleteLocalSave(const MethodInfo *method)
{
  WarBoardData_c *v1; // x0
  System_String_o *WARBOARDDATA_SAVEDATA_KEY; // x19

  if ( (byte_4C353DB & 1) == 0 )
  {
    sub_1C32C20(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C32C20(&WarBoardData_TypeInfo);
    byte_4C353DB = 1;
  }
  v1 = WarBoardData_TypeInfo;
  if ( !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    v1 = WarBoardData_TypeInfo;
  }
  WARBOARDDATA_SAVEDATA_KEY = v1->static_fields->WARBOARDDATA_SAVEDATA_KEY;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__DeleteKey(WARBOARDDATA_SAVEDATA_KEY, 0);
}


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
  if ( (byte_4C353E1 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__TryGetValue__);
    byte_4C353E1 = 1;
  }
  value = 0;
  actionPointEntityDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.actionPointEntityDict;
  if ( !actionPointEntityDict )
    sub_1C32E7C(0);
  System_Collections_Generic_Dictionary_uint__object___TryGetValue(
    actionPointEntityDict,
    (forceId << 24) | (v4 << 16),
    &value,
    (const MethodInfo_3493124 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__TryGetValue__);
  return (WarBoardActionPointEntity_o *)value;
}


System_Collections_Generic_List_WarBoardPieceData__o *WarBoardData__GetAliveEnemyServantPieces(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  WarBoardData___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *_9__110_0; // x20
  Il2CppObject *v6; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_4C353F0 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C32C20(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__GetAliveEnemyServantPieces_b__110_0__);
    sub_1C32C20(&WarBoardData___c_TypeInfo);
    byte_4C353F0 = 1;
  }
  v3 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v3 = WarBoardData___c_TypeInfo;
  }
  _9__110_0 = (System_Func_object__bool__o *)v3->static_fields->__9__110_0;
  if ( !_9__110_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = WarBoardData___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__110_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__110_0, v6, Method_WarBoardData___c__GetAliveEnemyServantPieces_b__110_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__110_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__110_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__110_0, (int32_t)_9__110_0, v8, v9);
  }
  v10 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__110_0,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (System_Collections_Generic_List_WarBoardPieceData__o *)System_Linq_Enumerable__ToList_object_(
                                                                   v10,
                                                                   (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
}


WarBoardPieceData_array *WarBoardData__GetAlivePieces(WarBoardData_o *this, const MethodInfo *method)
{
  WarBoardData___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *_9__107_0; // x20
  Il2CppObject *v6; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_4C353ED & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C32C20(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__GetAlivePieces_b__107_0__);
    sub_1C32C20(&WarBoardData___c_TypeInfo);
    byte_4C353ED = 1;
  }
  v3 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v3 = WarBoardData___c_TypeInfo;
  }
  _9__107_0 = (System_Func_object__bool__o *)v3->static_fields->__9__107_0;
  if ( !_9__107_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = WarBoardData___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__107_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__107_0, v6, Method_WarBoardData___c__GetAlivePieces_b__107_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__107_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__107_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__107_0, (int32_t)_9__107_0, v8, v9);
  }
  v10 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__107_0,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v10,
                                      (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


System_Collections_Generic_List_WarBoardPieceData__o *WarBoardData__GetAlivePlayerGroupServantPieces(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  WarBoardData___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *_9__109_0; // x20
  Il2CppObject *v6; // x21
  CGThumbnailListItem_o *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_4C353EF & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C32C20(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__GetAlivePlayerGroupServantPieces_b__109_0__);
    sub_1C32C20(&WarBoardData___c_TypeInfo);
    byte_4C353EF = 1;
  }
  v3 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v3 = WarBoardData___c_TypeInfo;
  }
  _9__109_0 = (System_Func_object__bool__o *)v3->static_fields->__9__109_0;
  if ( !_9__109_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = WarBoardData___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__109_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__109_0,
      v6,
      Method_WarBoardData___c__GetAlivePlayerGroupServantPieces_b__109_0__,
      0);
    static_fields = (CGThumbnailListItem_o *)WarBoardData___c_TypeInfo->static_fields;
    static_fields[1].klass = (CGThumbnailListItem_c *)_9__109_0;
    sub_1C32BC4(static_fields + 1, (int32_t)_9__109_0, v8, v9);
  }
  v10 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__109_0,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (System_Collections_Generic_List_WarBoardPieceData__o *)System_Linq_Enumerable__ToList_object_(
                                                                   v10,
                                                                   (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
}


WarBoardPieceData_array *WarBoardData__GetAliveServantPieces(WarBoardData_o *this, const MethodInfo *method)
{
  WarBoardData___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *_9__108_0; // x20
  Il2CppObject *v6; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_4C353EE & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C32C20(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__GetAliveServantPieces_b__108_0__);
    sub_1C32C20(&WarBoardData___c_TypeInfo);
    byte_4C353EE = 1;
  }
  v3 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v3 = WarBoardData___c_TypeInfo;
  }
  _9__108_0 = (System_Func_object__bool__o *)v3->static_fields->__9__108_0;
  if ( !_9__108_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = WarBoardData___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__108_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__108_0, v6, Method_WarBoardData___c__GetAliveServantPieces_b__108_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__108_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__108_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__108_0, (int32_t)_9__108_0, v8, v9);
  }
  v10 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__108_0,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v10,
                                      (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
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
  System_Collections_Generic_List_object__o *listPrevCond; // x19
  System_Predicate_object__o *v8; // x20
  Il2CppObject *v9; // x0

  if ( (byte_4C35420 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardPrevCondData__Find__);
    sub_1C32C20(&System_Predicate_WarBoardPrevCondData__TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass183_0__GetClearedTurn_b__0__);
    sub_1C32C20(&WarBoardData___c__DisplayClass183_0_TypeInfo);
    byte_4C35420 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass183_0_o *)sub_1C32E6C(WarBoardData___c__DisplayClass183_0_TypeInfo);
  WarBoardData___c__DisplayClass183_0___ctor(v5, 0);
  if ( !v5
    || (v5->fields.condId = condId,
        listPrevCond = (System_Collections_Generic_List_object__o *)this->fields.listPrevCond,
        v8 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_WarBoardPrevCondData__TypeInfo),
        System_Predicate_object____ctor(
          v8,
          (Il2CppObject *)v5,
          Method_WarBoardData___c__DisplayClass183_0__GetClearedTurn_b__0__,
          0),
        !listPrevCond) )
  {
    sub_1C32E7C(v6);
  }
  v9 = System_Collections_Generic_List_object___Find(
         listPrevCond,
         (System_Predicate_T__o *)v8,
         (const MethodInfo_3798E24 *)Method_System_Collections_Generic_List_WarBoardPrevCondData__Find__);
  if ( v9 )
    return HIDWORD(v9[1].klass);
  else
    return -1;
}


WarBoardSquareData_o *WarBoardData__GetCondSquare(WarBoardData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  WarBoardData___c__DisplayClass130_0_o *v5; // x21
  __int64 v6; // x0
  System_Collections_Generic_IEnumerable_TSource__o *condSquares; // x19
  System_Func_object__bool__o *v8; // x20

  if ( (byte_4C353FE & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
    sub_1C32C20(&System_Func_WarBoardSquareData__bool__TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass130_0__GetCondSquare_b__0__);
    sub_1C32C20(&WarBoardData___c__DisplayClass130_0_TypeInfo);
    byte_4C353FE = 1;
  }
  v5 = (WarBoardData___c__DisplayClass130_0_o *)sub_1C32E6C(WarBoardData___c__DisplayClass130_0_TypeInfo);
  WarBoardData___c__DisplayClass130_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  v5->fields.squareIndex = squareIndex;
  condSquares = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.condSquares;
  v8 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardSquareData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass130_0__GetCondSquare_b__0__,
    0);
  return (WarBoardSquareData_o *)System_Linq_Enumerable__FirstOrDefault_object__51408536(
                                   condSquares,
                                   (System_Func_TSource__bool__o *)v8,
                                   (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
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
  void *Piece_37788996; // x0
  int max_length; // w8
  unsigned int v8; // w25
  System_Int32_array *v9; // x28
  unsigned __int64 v10; // x27
  WarBoardData___c__DisplayClass133_0_o *v11; // x22
  const MethodInfo *v12; // x2
  int32_t v13; // w1
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_T__o *reinforcementsAppointmentSquareList; // x23
  System_Func_int__bool__o *v17; // x24
  System_Func_int__bool__o *v18; // x23
  int32_t value; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10

  if ( (byte_4C35400 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_int___);
    sub_1C32C20(&System_Func_int__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__0__);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__1__);
    sub_1C32C20(&WarBoardData___c__DisplayClass133_0_TypeInfo);
    byte_4C35400 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !squareIds )
    goto LABEL_29;
  max_length = squareIds->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
LABEL_30:
        sub_1C32E84(Piece_37788996);
      v9 = squareIds->m_Items[v8];
      if ( !v9 )
        break;
      if ( SLODWORD(v9->max_length) < 1 )
      {
LABEL_18:
        value = -1;
        if ( !v5 )
          break;
      }
      else
      {
        v10 = 0;
        while ( 1 )
        {
          v11 = (WarBoardData___c__DisplayClass133_0_o *)sub_1C32E6C(WarBoardData___c__DisplayClass133_0_TypeInfo);
          WarBoardData___c__DisplayClass133_0___ctor(v11, 0);
          if ( v10 >= LODWORD(v9->max_length) )
            goto LABEL_30;
          if ( !v11 )
            goto LABEL_29;
          v13 = v9->m_Items[v10];
          v11->fields.value = v13;
          Piece_37788996 = WarBoardData__GetPiece_37788996(this, v13, v12);
          if ( !Piece_37788996 )
          {
            Piece_37788996 = WarBoardData__GetUnusedTreasure(this, v11->fields.value, v14);
            if ( !Piece_37788996 )
            {
              Piece_37788996 = WarBoardData__GetWall(this, v11->fields.value, 0, v15);
              if ( !Piece_37788996 )
              {
                reinforcementsAppointmentSquareList = (System_Collections_Generic_List_T__o *)this->fields.reinforcementsAppointmentSquareList;
                v17 = (System_Func_int__bool__o *)sub_1C32E6C(System_Func_int__bool__TypeInfo);
                System_Func_int__bool____ctor(
                  v17,
                  (Il2CppObject *)v11,
                  Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__0__,
                  0);
                Piece_37788996 = (void *)BasicHelper__Any_int_(
                                           reinforcementsAppointmentSquareList,
                                           (System_Func_T__bool__o *)v17,
                                           (const MethodInfo_30C6464 *)Method_BasicHelper_Any_int___);
                if ( ((unsigned __int8)Piece_37788996 & 1) == 0 )
                {
                  v18 = (System_Func_int__bool__o *)sub_1C32E6C(System_Func_int__bool__TypeInfo);
                  System_Func_int__bool____ctor(
                    v18,
                    (Il2CppObject *)v11,
                    Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__1__,
                    0);
                  Piece_37788996 = (void *)BasicHelper__Any_int_(
                                             (System_Collections_Generic_List_T__o *)v5,
                                             (System_Func_T__bool__o *)v18,
                                             (const MethodInfo_30C6464 *)Method_BasicHelper_Any_int___);
                  if ( ((unsigned __int8)Piece_37788996 & 1) == 0 )
                    break;
                }
              }
            }
          }
          if ( (__int64)++v10 >= SLODWORD(v9->max_length) )
            goto LABEL_18;
        }
        value = v11->fields.value;
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
          *(const MethodInfo_377B798 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v5->fields._size = size + 1;
        items->m_Items[size] = value;
      }
      max_length = squareIds->max_length;
      if ( (int)++v8 >= max_length )
        goto LABEL_27;
    }
LABEL_29:
    sub_1C32E7C(Piece_37788996);
  }
LABEL_27:
  if ( !v5 )
    goto LABEL_29;
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_String_o *WarBoardData__GetEditBgmName(WarBoardData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  struct WarBoardStageEntity_o *stageEntity; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C35409 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_1C32C20(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C35409 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_BgmMaster___);
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity || !Instance )
    goto LABEL_11;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               stageEntity->fields.editBgmId,
                               (const MethodInfo_3396884 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return (System_String_o *)entity[1].monitor;
LABEL_11:
    sub_1C32E7C(Instance);
  }
  return 0;
}


WarBoardPieceData_array *WarBoardData__GetEditableServantPieces(WarBoardData_o *this, const MethodInfo *method)
{
  WarBoardData___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *_9__120_0; // x20
  Il2CppObject *v6; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_4C353F6 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C32C20(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__GetEditableServantPieces_b__120_0__);
    sub_1C32C20(&WarBoardData___c_TypeInfo);
    byte_4C353F6 = 1;
  }
  v3 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v3 = WarBoardData___c_TypeInfo;
  }
  _9__120_0 = (System_Func_object__bool__o *)v3->static_fields->__9__120_0;
  if ( !_9__120_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = WarBoardData___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__120_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__120_0, v6, Method_WarBoardData___c__GetEditableServantPieces_b__120_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__120_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__120_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__120_0, (int32_t)_9__120_0, v8, v9);
  }
  v10 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__120_0,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v10,
                                      (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


WarBoardEffectData_o *WarBoardData__GetEffect(WarBoardData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  WarBoardData___c__DisplayClass142_0_o *v5; // x21
  __int64 v6; // x0
  System_Collections_Generic_IEnumerable_TSource__o *effects; // x19
  System_Func_object__bool__o *v8; // x20

  if ( (byte_4C35405 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardEffectData___);
    sub_1C32C20(&System_Func_WarBoardEffectData__bool__TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass142_0__GetEffect_b__0__);
    sub_1C32C20(&WarBoardData___c__DisplayClass142_0_TypeInfo);
    byte_4C35405 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass142_0_o *)sub_1C32E6C(WarBoardData___c__DisplayClass142_0_TypeInfo);
  WarBoardData___c__DisplayClass142_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  v5->fields.squareIndex = squareIndex;
  effects = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.effects;
  v8 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardEffectData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass142_0__GetEffect_b__0__,
    0);
  return (WarBoardEffectData_o *)System_Linq_Enumerable__FirstOrDefault_object__51408536(
                                   effects,
                                   (System_Func_TSource__bool__o *)v8,
                                   (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardEffectData___);
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
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v8; // x20

  if ( (byte_4C353EB & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
    sub_1C32C20(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass105_0__GetEventBossPiece_b__0__);
    sub_1C32C20(&WarBoardData___c__DisplayClass105_0_TypeInfo);
    byte_4C353EB = 1;
  }
  v5 = (WarBoardData___c__DisplayClass105_0_o *)sub_1C32E6C(WarBoardData___c__DisplayClass105_0_TypeInfo);
  WarBoardData___c__DisplayClass105_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  v5->fields.stageBossIndex = stageBossIndex;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v8 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass105_0__GetEventBossPiece_b__0__,
    0);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_object__51408536(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v8,
                                  (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


int32_t WarBoardData__GetExpensiveIcon(WarBoardData_o *this, const MethodInfo *method)
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
        sub_1C32E84(this);
      v9 = treasureSaves->m_Items[v5];
      if ( !v9 )
        break;
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
      if ( (int)++v5 >= max_length )
        return iconId + 1;
    }
LABEL_17:
    sub_1C32E7C(this);
  }
  iconId = 0;
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
  System_Collections_Generic_List_object__o *reinforcementsSaveList; // x22
  System_Predicate_object__o *v11; // x24
  Il2CppObject *v12; // x25
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_object__o *v16; // x22
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Collections_Generic_List_HoldReinforcementsData__o *v19; // x22
  System_Func_object__bool__o *v20; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  const MethodInfo_3522FA8 **v22; // x26
  WarBoardData___c__DisplayClass188_1_c **v23; // x27
  __int64 v24; // x24
  __int64 v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t current; // w1
  HoldReinforcementsData_o **v29; // x22
  __int64 v30; // x0
  struct WarBoardStageEntity_o *stageEntity; // x8
  _BOOL8 v32; // x0
  const MethodInfo *v33; // x2
  System_Int32_array *DeploySquareIds; // x0
  const MethodInfo *v35; // x3
  struct System_Int32_array *limitNums; // x9
  __int64 index_k__BackingField; // x2
  System_Int32_array *v38; // x23
  WarBoardPieceData_array *ReinfocementsPieces; // x0
  struct System_Int32_array *v40; // x8
  __int64 v41; // x9
  _BOOL4 v42; // w25
  Il2CppObject *Instance; // x0
  _BOOL8 IsPlayerTurn; // x0
  __int64 v45; // x10
  int max_length; // w11
  int v47; // w10
  const MethodInfo_3522FA8 **v48; // x20
  System_Collections_Generic_List_T__o *v49; // x25
  System_Func_object__bool__o *v50; // x26
  bool v51; // w0
  WarBoardData___c__DisplayClass188_1_c **v52; // x29
  _BOOL8 v53; // x0
  Il2CppObject *v54; // x27
  System_Collections_Generic_List_int__o *v55; // x25
  System_Collections_Generic_List_int__o *v56; // x24
  __int64 v57; // x0
  __int64 v58; // x0
  int32_t v59; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v61; // x9
  __int64 size; // x10
  System_Int32_array *v63; // x0
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  __int64 v66; // x0
  CGThumbnailListItem_o *v67; // x25
  __int64 v68; // x0
  __int64 v69; // x8
  int32_t v70; // w1
  struct System_Int32_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  System_Int32_array *v74; // x0
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  Il2CppObject *v77; // x0
  void *monitor; // x8
  HoldReinforcementsData_o *v79; // x0
  __int64 v80; // x9
  System_Collections_Generic_List_int__o *v81; // x8
  int32_t v82; // w1
  struct System_Int32_array *v83; // x9
  _QWORD *v84; // x10
  __int64 v85; // x11
  __int64 v86; // x24
  __int64 v87; // x0
  __int64 v88; // x0
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  __int64 v91; // x0
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  __int64 v94; // x8
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  System_Collections_Generic_List_object__o *v97; // x0
  struct System_Object_array *v98; // x8
  _QWORD *v99; // x9
  __int64 v100; // x10
  Il2CppClass **v101; // x8
  Il2CppObject *v102; // x0
  void *v103; // x8
  HoldReinforcementsData_o *v104; // x0
  __int64 v105; // x9
  System_Collections_Generic_List_int__o *v106; // x8
  int32_t v107; // w1
  struct System_Int32_array *v108; // x9
  _QWORD *v109; // x10
  __int64 v110; // x11
  System_Collections_Generic_List_Enumerator_object__o v112; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v113; // [xsp+20h] [xbp-A0h] BYREF
  WarBoardStageReinforcementsEntity_o *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v115; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4C35425 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_ReinforcementsData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_HoldReinforcementsData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_HoldReinforcementsData___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__get_Current__);
    sub_1C32C20(&System_Func_HoldReinforcementsData__bool__TypeInfo);
    sub_1C32C20(&System_Func_ReinforcementsData__bool__TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ReinforcementsData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ReinforcementsData__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_HoldReinforcementsData__RemoveAll__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ReinforcementsData___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_ReinforcementsData__TypeInfo);
    sub_1C32C20(&System_Predicate_HoldReinforcementsData__TypeInfo);
    sub_1C32C20(&ReinforcementsData_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&Method_WarBoardData___c__GetHoldReinforcements_b__188_0__);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass188_0__GetHoldReinforcements_b__1__);
    sub_1C32C20(&WarBoardData___c__DisplayClass188_0_TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass188_1__GetHoldReinforcements_b__2__);
    sub_1C32C20(&WarBoardData___c__DisplayClass188_1_TypeInfo);
    sub_1C32C20(&WarBoardData___c_TypeInfo);
    byte_4C35425 = 1;
  }
  memset(&v115, 0, sizeof(v115));
  entity = 0;
  memset(&v113, 0, sizeof(v113));
  v8 = (WarBoardData___c__DisplayClass188_0_o *)sub_1C32E6C(WarBoardData___c__DisplayClass188_0_TypeInfo);
  WarBoardData___c__DisplayClass188_0___ctor(v8, 0);
  if ( !v8 )
    goto LABEL_156;
  v8->fields.targetStageReinforcementsId = targetStageReinforcementsId;
  reinforcementsSaveList = (System_Collections_Generic_List_object__o *)this->fields.reinforcementsSaveList;
  v9 = WarBoardData___c_TypeInfo;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v9 = WarBoardData___c_TypeInfo;
  }
  v11 = *(System_Predicate_object__o **)(*((_QWORD *)v9 + 23) + 232LL);
  if ( !v11 )
  {
    if ( !*((_DWORD *)v9 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = WarBoardData___c_TypeInfo;
    }
    v12 = (Il2CppObject *)**((_QWORD **)v9 + 23);
    v11 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_HoldReinforcementsData__TypeInfo);
    System_Predicate_object____ctor(v11, v12, Method_WarBoardData___c__GetHoldReinforcements_b__188_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__188_0 = (struct System_Predicate_HoldReinforcementsData__o *)v11;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__188_0, (int32_t)v11, v14, v15);
  }
  if ( !reinforcementsSaveList )
    goto LABEL_156;
  System_Collections_Generic_List_object___RemoveAll(
    reinforcementsSaveList,
    (System_Predicate_T__o *)v11,
    (const MethodInfo_3799E18 *)Method_System_Collections_Generic_List_HoldReinforcementsData__RemoveAll__);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ReinforcementsData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ReinforcementsData___ctor__);
  *reinforcementsDatas = (System_Collections_Generic_List_ReinforcementsData__o *)v16;
  sub_1C32BC4((CGThumbnailListItem_o *)reinforcementsDatas, (int32_t)v16, v17, v18);
  v19 = this->fields.reinforcementsSaveList;
  if ( (v8->fields.targetStageReinforcementsId & 0x80000000) == 0 )
  {
    v20 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_HoldReinforcementsData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v20,
      (Il2CppObject *)v8,
      Method_WarBoardData___c__DisplayClass188_0__GetHoldReinforcements_b__1__,
      0);
    v21 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v19,
            (System_Func_TSource__bool__o *)v20,
            (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_HoldReinforcementsData___);
    v9 = System_Linq_Enumerable__ToList_object_(
           v21,
           (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_HoldReinforcementsData___);
    v19 = (struct System_Collections_Generic_List_HoldReinforcementsData__o *)v9;
  }
  if ( !v19 )
LABEL_156:
    sub_1C32E7C(v9);
  v22 = (const MethodInfo_3522FA8 **)&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__;
  v23 = &WarBoardData___c__DisplayClass188_1_TypeInfo;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v112,
    (System_Collections_Generic_List_object__o *)v19,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
  v115 = v112;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(&v115, *v22) )
  {
    v24 = sub_1C32E6C(*v23);
    WarBoardData___c__DisplayClass188_1___ctor((WarBoardData___c__DisplayClass188_1_o *)v24, 0);
    if ( !v24 )
      sub_1C32E7C(v25);
    current = (int32_t)v115.fields._current;
    *(_QWORD *)(v24 + 16) = v115.fields._current;
    v29 = (HoldReinforcementsData_o **)(v24 + 16);
    sub_1C32BC4((CGThumbnailListItem_o *)(v24 + 16), current, v26, v27);
    stageEntity = this->fields.stageEntity;
    if ( !stageEntity )
      sub_1C32E7C(v30);
    if ( !*v29 )
      sub_1C32E7C(v30);
    if ( !mst )
      sub_1C32E7C(v30);
    v32 = WarBoardStageReinforcementsMaster__TryGetEntity(
            mst,
            &entity,
            stageEntity->fields.id,
            (*v29)->fields._id_k__BackingField,
            0);
    if ( v32 )
    {
      if ( !entity )
        sub_1C32E7C(v32);
      DeploySquareIds = WarBoardData__GetDeploySquareIds(this, entity->fields.squareIds, v33);
      if ( !entity )
        sub_1C32E7C(DeploySquareIds);
      if ( !*v29 )
        sub_1C32E7C(DeploySquareIds);
      limitNums = entity->fields.limitNums;
      if ( !limitNums )
        sub_1C32E7C(DeploySquareIds);
      index_k__BackingField = (*v29)->fields._index_k__BackingField;
      if ( (unsigned int)index_k__BackingField >= LODWORD(limitNums->max_length) )
        sub_1C32E84(DeploySquareIds);
      v38 = DeploySquareIds;
      if ( limitNums->m_Items[index_k__BackingField] < 1 )
      {
        v42 = 0;
      }
      else
      {
        ReinfocementsPieces = WarBoardData__GetReinfocementsPieces(this, entity->fields.id, index_k__BackingField, v35);
        if ( !ReinfocementsPieces )
          sub_1C32E7C(0);
        if ( !entity )
          sub_1C32E7C(ReinfocementsPieces);
        if ( !*v29 )
          sub_1C32E7C(ReinfocementsPieces);
        v40 = entity->fields.limitNums;
        if ( !v40 )
          sub_1C32E7C(ReinfocementsPieces);
        v41 = (*v29)->fields._index_k__BackingField;
        if ( (unsigned int)v41 >= LODWORD(v40->max_length) )
          sub_1C32E84(ReinfocementsPieces);
        v42 = v40->m_Items[v41] <= SLODWORD(ReinfocementsPieces->max_length);
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !Instance )
        sub_1C32E7C(0);
      IsPlayerTurn = WarBoardManager__IsPlayerTurn((WarBoardManager_o *)Instance, 0);
      if ( !entity )
        sub_1C32E7C(IsPlayerTurn);
      if ( !v38 )
        sub_1C32E7C(IsPlayerTurn);
      if ( !*v29 )
        sub_1C32E7C(IsPlayerTurn);
      v45 = (*v29)->fields._index_k__BackingField;
      max_length = v38->max_length;
      if ( (int)v45 >= max_length )
      {
        v47 = 0;
      }
      else
      {
        if ( (unsigned int)v45 >= max_length )
          sub_1C32E84(IsPlayerTurn);
        v47 = v38->m_Items[v45] >= 0 && !v42;
      }
      if ( (IsPlayerTurn ^ (entity->fields.forceId != 0)) & (unsigned int)v47 )
      {
        v48 = v22;
        v49 = (System_Collections_Generic_List_T__o *)*reinforcementsDatas;
        v50 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_ReinforcementsData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v50,
          (Il2CppObject *)v24,
          Method_WarBoardData___c__DisplayClass188_1__GetHoldReinforcements_b__2__,
          0);
        v51 = BasicHelper__Any_object_(
                v49,
                (System_Func_T__bool__o *)v50,
                (const MethodInfo_30C6790 *)Method_BasicHelper_Any_ReinforcementsData___);
        v22 = v48;
        if ( v51 )
        {
          if ( !*reinforcementsDatas )
            sub_1C32E7C(0);
          v52 = v23;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v112,
            (System_Collections_Generic_List_object__o *)*reinforcementsDatas,
            (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ReinforcementsData__GetEnumerator__);
          v113 = v112;
          do
          {
            v53 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v113,
                    (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__MoveNext__);
            if ( !v53 )
            {
              v23 = v52;
              goto LABEL_76;
            }
            v54 = v113.fields._current;
            if ( !v113.fields._current )
              sub_1C32E7C(v53);
            if ( !*v29 )
              sub_1C32E7C(v53);
          }
          while ( LODWORD(v113.fields._current[1].klass) != (*v29)->fields._id_k__BackingField );
          v55 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor(
            v55,
            (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
          v56 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor(
            v56,
            (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
          if ( !v55 )
            sub_1C32E7C(v57);
          System_Collections_Generic_List_int___AddRange(
            v55,
            (System_Collections_Generic_IEnumerable_T__o *)v54[1].monitor,
            (const MethodInfo_377B9A4 *)Method_System_Collections_Generic_List_int__AddRange__);
          if ( !*v29 )
            sub_1C32E7C(v58);
          v59 = (*v29)->fields._index_k__BackingField;
          items = v55->fields._items;
          v61 = Method_System_Collections_Generic_List_int__Add__;
          ++v55->fields._version;
          if ( !items )
            sub_1C32E7C(v58);
          size = v55->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v55,
              v59,
              *(const MethodInfo_377B798 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
          }
          else
          {
            v55->fields._size = size + 1;
            items->m_Items[size] = v59;
          }
          v63 = System_Collections_Generic_List_int___ToArray(
                  v55,
                  (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
          v54[1].monitor = v63;
          sub_1C32BC4((CGThumbnailListItem_o *)&v54[1].monitor, (int32_t)v63, v64, v65);
          if ( !v56 )
            sub_1C32E7C(v66);
          v67 = (CGThumbnailListItem_o *)&v54[2];
          v22 = v48;
          System_Collections_Generic_List_int___AddRange(
            v56,
            (System_Collections_Generic_IEnumerable_T__o *)v54[2].klass,
            (const MethodInfo_377B9A4 *)Method_System_Collections_Generic_List_int__AddRange__);
          if ( !*v29 )
            sub_1C32E7C(v68);
          v69 = (*v29)->fields._index_k__BackingField;
          v23 = v52;
          if ( (unsigned int)v69 >= LODWORD(v38->max_length) )
            sub_1C32E84(v68);
          v70 = v38->m_Items[v69];
          v71 = v56->fields._items;
          v72 = Method_System_Collections_Generic_List_int__Add__;
          ++v56->fields._version;
          if ( !v71 )
            sub_1C32E7C(v68);
          v73 = v56->fields._size;
          if ( (unsigned int)v73 >= LODWORD(v71->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v56,
              v70,
              *(const MethodInfo_377B798 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
          }
          else
          {
            v56->fields._size = v73 + 1;
            v71->m_Items[v73] = v70;
          }
          v74 = System_Collections_Generic_List_int___ToArray(
                  v56,
                  (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
          v67->klass = (CGThumbnailListItem_c *)v74;
          sub_1C32BC4(v67, (int32_t)v74, v75, v76);
          v77 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !v77 )
            sub_1C32E7C(0);
          monitor = v77[27].monitor;
          if ( !monitor )
            sub_1C32E7C(v77);
          v79 = *v29;
          if ( !*v29 )
            sub_1C32E7C(0);
          v80 = v79->fields._index_k__BackingField;
          if ( (unsigned int)v80 >= LODWORD(v38->max_length) )
            sub_1C32E84(v79);
          v81 = (System_Collections_Generic_List_int__o *)*((_QWORD *)monitor + 29);
          if ( !v81 )
            sub_1C32E7C(v79);
          v82 = v38->m_Items[v80];
          v83 = v81->fields._items;
          v84 = Method_System_Collections_Generic_List_int__Add__;
          ++v81->fields._version;
          if ( !v83 )
            sub_1C32E7C(v79);
          v85 = v81->fields._size;
          if ( (unsigned int)v85 >= LODWORD(v83->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v81,
              v82,
              *(const MethodInfo_377B798 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
            v79 = *v29;
            if ( !*v29 )
              sub_1C32E7C(0);
          }
          else
          {
            v81->fields._size = v85 + 1;
            v83->m_Items[v85] = v82;
          }
          HoldReinforcementsData__DecreaseHoldNum(v79, 0);
LABEL_76:
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v113,
            (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__Dispose__);
        }
        else
        {
          v86 = sub_1C32E6C(ReinforcementsData_TypeInfo);
          ReinforcementsData___ctor((ReinforcementsData_o *)v86, 0);
          if ( !entity )
            sub_1C32E7C(v87);
          if ( !v86 )
            sub_1C32E7C(v87);
          *(_DWORD *)(v86 + 16) = entity->fields.id;
          v88 = sub_1C32CC8(int___TypeInfo, 1);
          if ( !*v29 )
            sub_1C32E7C(v88);
          if ( !v88 )
            sub_1C32E7C(0);
          if ( !*(_DWORD *)(v88 + 24) )
            sub_1C32E84(v88);
          *(_DWORD *)(v88 + 32) = (*v29)->fields._index_k__BackingField;
          *(_QWORD *)(v86 + 24) = v88;
          sub_1C32BC4((CGThumbnailListItem_o *)(v86 + 24), v88, v89, v90);
          v91 = sub_1C32CC8(int___TypeInfo, 1);
          if ( !*v29 )
            sub_1C32E7C(v91);
          v94 = (*v29)->fields._index_k__BackingField;
          if ( (unsigned int)v94 >= LODWORD(v38->max_length) )
            sub_1C32E84(v91);
          if ( !v91 )
            sub_1C32E7C(0);
          if ( !*(_DWORD *)(v91 + 24) )
            sub_1C32E84(v91);
          *(_DWORD *)(v91 + 32) = v38->m_Items[v94];
          *(_QWORD *)(v86 + 32) = v91;
          sub_1C32BC4((CGThumbnailListItem_o *)(v86 + 32), v91, v92, v93);
          v97 = (System_Collections_Generic_List_object__o *)*reinforcementsDatas;
          if ( !*reinforcementsDatas )
            sub_1C32E7C(0);
          v98 = v97->fields._items;
          v99 = Method_System_Collections_Generic_List_ReinforcementsData__Add__;
          ++v97->fields._version;
          if ( !v98 )
            sub_1C32E7C(v97);
          v100 = v97->fields._size;
          if ( (unsigned int)v100 >= LODWORD(v98->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v97,
              (Il2CppObject *)v86,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
          }
          else
          {
            v101 = &v98->obj.klass + v100;
            v97->fields._size = v100 + 1;
            v101[4] = (Il2CppClass *)v86;
            sub_1C32BC4((CGThumbnailListItem_o *)(v101 + 4), v86, v95, v96);
          }
          v102 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !v102 )
            sub_1C32E7C(0);
          v103 = v102[27].monitor;
          if ( !v103 )
            sub_1C32E7C(v102);
          v104 = *v29;
          if ( !*v29 )
            sub_1C32E7C(0);
          v105 = v104->fields._index_k__BackingField;
          if ( (unsigned int)v105 >= LODWORD(v38->max_length) )
            sub_1C32E84(v104);
          v106 = (System_Collections_Generic_List_int__o *)*((_QWORD *)v103 + 29);
          if ( !v106 )
            sub_1C32E7C(v104);
          v107 = v38->m_Items[v105];
          v108 = v106->fields._items;
          v109 = Method_System_Collections_Generic_List_int__Add__;
          ++v106->fields._version;
          if ( !v108 )
            sub_1C32E7C(v104);
          v110 = v106->fields._size;
          if ( (unsigned int)v110 >= LODWORD(v108->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v106,
              v107,
              *(const MethodInfo_377B798 **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
            v104 = *v29;
            if ( !*v29 )
              sub_1C32E7C(0);
          }
          else
          {
            v106->fields._size = v110 + 1;
            v108->m_Items[v110] = v107;
          }
          HoldReinforcementsData__DecreaseHoldNum(v104, 0);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v115,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
}


int32_t WarBoardData__GetHoldReinforcementsCount(WarBoardData_o *this, const MethodInfo *method)
{
  WarBoardData_o *v2; // x19
  struct System_Collections_Generic_List_HoldReinforcementsData__o *reinforcementsSaveList; // x8

  v2 = this;
  if ( (byte_4C35411 & 1) == 0 )
  {
    this = (WarBoardData_o *)sub_1C32C20(&Method_System_Collections_Generic_List_HoldReinforcementsData__get_Count__);
    byte_4C35411 = 1;
  }
  reinforcementsSaveList = v2->fields.reinforcementsSaveList;
  if ( !reinforcementsSaveList )
    sub_1C32E7C(this);
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
  const MethodInfo *v11; // x4
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *v12; // x20
  WarBoardData___c_c *v13; // x0
  System_Func_object__int__o *_9__123_0; // x21
  Il2CppObject *v15; // x22
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x20
  System_Func_int__bool__o *v20; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *rangeSearches; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C353F9 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_WarBoardData_SquareRangeSearch__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C32C20(&System_Func_int__bool__TypeInfo);
    sub_1C32C20(&System_Func_WarBoardData_SquareRangeSearch__int__TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__GetInRangeSquareIndecies_b__123_0__);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass123_0__GetInRangeSquareIndecies_b__1__);
    sub_1C32C20(&WarBoardData___c__DisplayClass123_0_TypeInfo);
    sub_1C32C20(&WarBoardData___c_TypeInfo);
    byte_4C353F9 = 1;
  }
  v9 = (WarBoardData___c__DisplayClass123_0_o *)sub_1C32E6C(WarBoardData___c__DisplayClass123_0_TypeInfo);
  WarBoardData___c__DisplayClass123_0___ctor(v9, 0);
  if ( !v9 )
    sub_1C32E7C(v10);
  v9->fields.start = start;
  v9->fields.ignoreStart = ignoreStart;
  rangeSearches = 0;
  WarBoardData__SearchInRangeSquares(this, start, range, &rangeSearches, v11);
  v12 = rangeSearches;
  if ( !rangeSearches )
    return 0;
  v13 = WarBoardData___c_TypeInfo;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v13 = WarBoardData___c_TypeInfo;
  }
  _9__123_0 = (System_Func_object__int__o *)v13->static_fields->__9__123_0;
  if ( !_9__123_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = WarBoardData___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__123_0 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_WarBoardData_SquareRangeSearch__int__TypeInfo);
    System_Func_object__int____ctor(_9__123_0, v15, Method_WarBoardData___c__GetInRangeSquareIndecies_b__123_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__123_0 = (struct System_Func_WarBoardData_SquareRangeSearch__int__o *)_9__123_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__123_0, (int32_t)_9__123_0, v17, v18);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v12,
                                                               (System_Func_TSource__TResult__o *)_9__123_0,
                                                               (const MethodInfo_31131E0 *)Method_System_Linq_Enumerable_Select_WarBoardData_SquareRangeSearch__int___);
  v20 = (System_Func_int__bool__o *)sub_1C32E6C(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v20,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass123_0__GetInRangeSquareIndecies_b__1__,
    0);
  v21 = System_Linq_Enumerable__Where_int_(
          v19,
          (System_Func_TSource__bool__o *)v20,
          (const MethodInfo_3123600 *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v21,
           (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
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

  if ( (byte_4C353FA & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_int__WarBoardSquareData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_WarBoardSquareData___);
    sub_1C32C20(&System_Func_int__WarBoardSquareData__TypeInfo);
    sub_1C32C20(&Method_WarBoardData__GetInRangeSquares_b__124_0__);
    byte_4C353FA = 1;
  }
  result = (WarBoardSquareData_array *)WarBoardData__GetInRangeSquareIndecies(this, start, range, ignoreStart, method);
  if ( result )
  {
    v10 = (System_Collections_Generic_IEnumerable_TSource__o *)result;
    v11 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func_int__WarBoardSquareData__TypeInfo);
    System_Func_int__object____ctor(v11, (Il2CppObject *)this, Method_WarBoardData__GetInRangeSquares_b__124_0__, 0);
    v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                 v10,
                                                                 (System_Func_TSource__TResult__o *)v11,
                                                                 (const MethodInfo_3110E00 *)Method_System_Linq_Enumerable_Select_int__WarBoardSquareData___);
    return (WarBoardSquareData_array *)System_Linq_Enumerable__ToArray_object_(
                                         v12,
                                         (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_WarBoardSquareData___);
  }
  return result;
}


WarBoardItemData_o *WarBoardData__GetItem(WarBoardData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  WarBoardData___c__DisplayClass135_0_o *v5; // x21
  __int64 v6; // x0
  System_Collections_Generic_IEnumerable_TSource__o *items; // x19
  System_Func_object__bool__o *v8; // x20

  if ( (byte_4C35401 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___);
    sub_1C32C20(&System_Func_WarBoardItemData__bool__TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass135_0__GetItem_b__0__);
    sub_1C32C20(&WarBoardData___c__DisplayClass135_0_TypeInfo);
    byte_4C35401 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass135_0_o *)sub_1C32E6C(WarBoardData___c__DisplayClass135_0_TypeInfo);
  WarBoardData___c__DisplayClass135_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  v5->fields.squareIndex = squareIndex;
  items = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.items;
  v8 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardItemData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass135_0__GetItem_b__0__,
    0);
  return (WarBoardItemData_o *)System_Linq_Enumerable__FirstOrDefault_object__51408536(
                                 items,
                                 (System_Func_TSource__bool__o *)v8,
                                 (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___);
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
    sub_1C32E7C(this);
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
  if ( (byte_4C353E0 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__TryGetValue__);
    byte_4C353E0 = 1;
  }
  value = 0;
  npcEntityDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.npcEntityDict;
  if ( !npcEntityDict )
    sub_1C32E7C(0);
  System_Collections_Generic_Dictionary_uint__object___TryGetValue(
    npcEntityDict,
    (forceId << 24) | (v4 << 16),
    &value,
    (const MethodInfo_3493124 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__TryGetValue__);
  return (WarBoardStageNpcEntity_o *)value;
}


int32_t WarBoardData__GetPartySkillId(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardStageEntity_o *stageEntity; // x8

  stageEntity = this->fields.stageEntity;
  if ( !stageEntity )
    sub_1C32E7C(this);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v15; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0

  if ( (byte_4C353F4 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C32C20(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass118_0__GetPicesForRange_b__0__);
    sub_1C32C20(&WarBoardData___c__DisplayClass118_0_TypeInfo);
    byte_4C353F4 = 1;
  }
  v9 = sub_1C32E6C(WarBoardData___c__DisplayClass118_0_TypeInfo);
  WarBoardData___c__DisplayClass118_0___ctor((WarBoardData___c__DisplayClass118_0_o *)v9, 0);
  v11 = WarBoardData__GetInRangeSquareIndecies(this, start, range, ignoreStart, v10);
  if ( !v9 )
    sub_1C32E7C(v11);
  *(_QWORD *)(v9 + 16) = v11;
  sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 16), (int32_t)v11, v12, v13);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v15 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass118_0__GetPicesForRange_b__0__,
    0);
  v16 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v16,
                                      (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v15; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0

  if ( (byte_4C353F5 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C32C20(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass119_0__GetPicesForRangeIsAlive_b__0__);
    sub_1C32C20(&WarBoardData___c__DisplayClass119_0_TypeInfo);
    byte_4C353F5 = 1;
  }
  v9 = sub_1C32E6C(WarBoardData___c__DisplayClass119_0_TypeInfo);
  WarBoardData___c__DisplayClass119_0___ctor((WarBoardData___c__DisplayClass119_0_o *)v9, 0);
  v11 = WarBoardData__GetInRangeSquareIndecies(this, start, range, ignoreStart, v10);
  if ( !v9 )
    sub_1C32E7C(v11);
  *(_QWORD *)(v9 + 16) = v11;
  sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 16), (int32_t)v11, v12, v13);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v15 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass119_0__GetPicesForRangeIsAlive_b__0__,
    0);
  v16 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v16,
                                      (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
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
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v14; // x20

  if ( (byte_4C353E6 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
    sub_1C32C20(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass100_0__GetPiece_b__0__);
    sub_1C32C20(&WarBoardData___c__DisplayClass100_0_TypeInfo);
    sub_1C32C20(&WarBoardPieceData_TypeInfo);
    byte_4C353E6 = 1;
  }
  v11 = (WarBoardData___c__DisplayClass100_0_o *)sub_1C32E6C(WarBoardData___c__DisplayClass100_0_TypeInfo);
  WarBoardData___c__DisplayClass100_0___ctor(v11, 0);
  if ( !v11 )
    sub_1C32E7C(v12);
  v11->fields.ignoreDead = ignoreDead;
  if ( !WarBoardPieceData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardPieceData_TypeInfo);
  v11->fields.uniqueId = WarBoardPieceData__GetUniqueIndex(forceId, groupId, index, 0);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v14 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v11,
    Method_WarBoardData___c__DisplayClass100_0__GetPiece_b__0__,
    0);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_object__51408536(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v14,
                                  (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


int32_t WarBoardData__GetPieceDispPriority(WarBoardData_o *this, WarBoardPieceData_o *piece, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x1
  System_Object_array *AlivePieces; // x19
  System_Predicate_object__o *v11; // x20

  if ( (byte_4C35408 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_FindIndex_WarBoardPieceData___);
    sub_1C32C20(&System_Predicate_WarBoardPieceData__TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass145_0__GetPieceDispPriority_b__0__);
    sub_1C32C20(&WarBoardData___c__DisplayClass145_0_TypeInfo);
    byte_4C35408 = 1;
  }
  v5 = sub_1C32E6C(WarBoardData___c__DisplayClass145_0_TypeInfo);
  WarBoardData___c__DisplayClass145_0___ctor((WarBoardData___c__DisplayClass145_0_o *)v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  *(_QWORD *)(v5 + 16) = piece;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)piece, v7, v8);
  AlivePieces = (System_Object_array *)WarBoardData__GetAlivePieces(this, v9);
  v11 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_WarBoardPieceData__TypeInfo);
  System_Predicate_object____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass145_0__GetPieceDispPriority_b__0__,
    0);
  return System_Array__FindIndex_object_(
           AlivePieces,
           (System_Predicate_T__o *)v11,
           (const MethodInfo_31E3144 *)Method_System_Array_FindIndex_WarBoardPieceData___);
}


int32_t WarBoardData__GetPieceMaxDispPriotiry(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceData_array *pieces; // x8

  pieces = this->fields.pieces;
  if ( !pieces )
    sub_1C32E7C(this);
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
  WarBoardPieceData_o *v11; // x19
  UnityEngine_Object_o *pieceComponent; // x20
  UnityEngine_Component_o *gameObject; // x0
  bool activeInHierarchy; // w8

  if ( (byte_4C353E9 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C353E9 = 1;
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
    if ( !UnityEngine_Object__op_Inequality(pieceComponent, 0, 0) )
      return v11;
    gameObject = (UnityEngine_Component_o *)v11->fields.pieceComponent;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
      sub_1C32E7C(gameObject);
    }
    activeInHierarchy = UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)gameObject, 0);
    result = 0;
    if ( activeInHierarchy )
      return v11;
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
  __int64 UniqueIndex; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v12; // x20
  Il2CppObject *v13; // x0

  if ( (byte_4C353E5 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
    sub_1C32C20(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass99_0__GetPiecePosition_b__0__);
    sub_1C32C20(&WarBoardData___c__DisplayClass99_0_TypeInfo);
    sub_1C32C20(&WarBoardPieceData_TypeInfo);
    byte_4C353E5 = 1;
  }
  v9 = (WarBoardData___c__DisplayClass99_0_o *)sub_1C32E6C(WarBoardData___c__DisplayClass99_0_TypeInfo);
  WarBoardData___c__DisplayClass99_0___ctor(v9, 0);
  if ( !WarBoardPieceData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardPieceData_TypeInfo);
  UniqueIndex = WarBoardPieceData__GetUniqueIndex(forceId, groupId, index, 0);
  if ( !v9 )
    sub_1C32E7C(UniqueIndex);
  v9->fields.uniqueId = UniqueIndex;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v12 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass99_0__GetPiecePosition_b__0__,
    0);
  v13 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
          pieces,
          (System_Func_TSource__bool__o *)v12,
          (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
  if ( v13 )
    return (int32_t)v13[4].klass;
  else
    return -1;
}


WarBoardPieceData_o *WarBoardData__GetPiece_37788996(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass101_0_o *v5; // x21
  __int64 v6; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v8; // x20

  if ( (byte_4C353E7 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
    sub_1C32C20(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass101_0__GetPiece_b__0__);
    sub_1C32C20(&WarBoardData___c__DisplayClass101_0_TypeInfo);
    byte_4C353E7 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass101_0_o *)sub_1C32E6C(WarBoardData___c__DisplayClass101_0_TypeInfo);
  WarBoardData___c__DisplayClass101_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  v5->fields.squareIndex = squareIndex;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v8 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass101_0__GetPiece_b__0__,
    0);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_object__51408536(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v8,
                                  (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


WarBoardPieceData_o *WarBoardData__GetPiece_37790700(
        WarBoardData_o *this,
        uint32_t uniqueIndex,
        bool ignoreDead,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass102_0_o *v7; // x22
  __int64 v8; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v10; // x20

  if ( (byte_4C353E8 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
    sub_1C32C20(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass102_0__GetPiece_b__0__);
    sub_1C32C20(&WarBoardData___c__DisplayClass102_0_TypeInfo);
    byte_4C353E8 = 1;
  }
  v7 = (WarBoardData___c__DisplayClass102_0_o *)sub_1C32E6C(WarBoardData___c__DisplayClass102_0_TypeInfo);
  WarBoardData___c__DisplayClass102_0___ctor(v7, 0);
  if ( !v7 )
    sub_1C32E7C(v8);
  v7->fields.uniqueIndex = uniqueIndex;
  v7->fields.ignoreDead = ignoreDead;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v10 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v7,
    Method_WarBoardData___c__DisplayClass102_0__GetPiece_b__0__,
    0);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_object__51408536(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v10,
                                  (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


WarBoardPieceData_array *WarBoardData__GetPieces(WarBoardData_o *this, int32_t forceId, const MethodInfo *method)
{
  WarBoardData___c__DisplayClass116_0_o *v5; // x21
  __int64 v6; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v8; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0

  if ( (byte_4C353F2 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C32C20(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass116_0__GetPieces_b__0__);
    sub_1C32C20(&WarBoardData___c__DisplayClass116_0_TypeInfo);
    byte_4C353F2 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass116_0_o *)sub_1C32E6C(WarBoardData___c__DisplayClass116_0_TypeInfo);
  WarBoardData___c__DisplayClass116_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  v5->fields.forceIdOnly = forceId << 24;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v8 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass116_0__GetPieces_b__0__,
    0);
  v9 = System_Linq_Enumerable__Where_object_(
         pieces,
         (System_Func_TSource__bool__o *)v8,
         (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v9,
                                      (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


WarBoardPieceData_array *WarBoardData__GetPieces_37846208(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  unsigned __int8 v4; // w20
  WarBoardData___c__DisplayClass117_0_o *v7; // x22
  __int64 v8; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v10; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0

  v4 = groupId;
  if ( (byte_4C353F3 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C32C20(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass117_0__GetPieces_b__0__);
    sub_1C32C20(&WarBoardData___c__DisplayClass117_0_TypeInfo);
    byte_4C353F3 = 1;
  }
  v7 = (WarBoardData___c__DisplayClass117_0_o *)sub_1C32E6C(WarBoardData___c__DisplayClass117_0_TypeInfo);
  WarBoardData___c__DisplayClass117_0___ctor(v7, 0);
  if ( !v7 )
    sub_1C32E7C(v8);
  v7->fields.forceAndGroup = (forceId << 24) | (v4 << 16);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v10 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v7,
    Method_WarBoardData___c__DisplayClass117_0__GetPieces_b__0__,
    0);
  v11 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)v10,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v11,
                                      (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


System_String_o *WarBoardData__GetPlayBgmName(WarBoardData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  struct WarBoardStageEntity_o *stageEntity; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C3540A & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_1C32C20(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3540A = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_BgmMaster___);
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity || !Instance )
    goto LABEL_11;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               stageEntity->fields.playBgmId,
                               (const MethodInfo_3396884 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return (System_String_o *)entity[1].monitor;
LABEL_11:
    sub_1C32E7C(Instance);
  }
  return 0;
}


System_Int32_array *WarBoardData__GetPlayReinforcements(WarBoardData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *playedStageReinforcementsList; // x0

  if ( (byte_4C35423 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4C35423 = 1;
  }
  playedStageReinforcementsList = this->fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList )
    sub_1C32E7C(0);
  return System_Collections_Generic_List_int___ToArray(
           playedStageReinforcementsList,
           (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
}


WarBoardEventData_o *WarBoardData__GetPlayedEventData(WarBoardData_o *this, int32_t eventId, const MethodInfo *method)
{
  WarBoardData___c__DisplayClass164_0_o *v5; // x21
  __int64 v6; // x0
  System_Collections_Generic_List_object__o *listEvent; // x19
  System_Predicate_object__o *v8; // x20

  if ( (byte_4C35413 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardEventData__Find__);
    sub_1C32C20(&System_Predicate_WarBoardEventData__TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass164_0__GetPlayedEventData_b__0__);
    sub_1C32C20(&WarBoardData___c__DisplayClass164_0_TypeInfo);
    byte_4C35413 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass164_0_o *)sub_1C32E6C(WarBoardData___c__DisplayClass164_0_TypeInfo);
  WarBoardData___c__DisplayClass164_0___ctor(v5, 0);
  if ( !v5
    || (v5->fields.eventId = eventId,
        listEvent = (System_Collections_Generic_List_object__o *)this->fields.listEvent,
        v8 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_WarBoardEventData__TypeInfo),
        System_Predicate_object____ctor(
          v8,
          (Il2CppObject *)v5,
          Method_WarBoardData___c__DisplayClass164_0__GetPlayedEventData_b__0__,
          0),
        !listEvent) )
  {
    sub_1C32E7C(v6);
  }
  return (WarBoardEventData_o *)System_Collections_Generic_List_object___Find(
                                  listEvent,
                                  (System_Predicate_T__o *)v8,
                                  (const MethodInfo_3798E24 *)Method_System_Collections_Generic_List_WarBoardEventData__Find__);
}


WarBoardPieceData_o *WarBoardData__GetPlayerMasterPiece(WarBoardData_o *this, const MethodInfo *method)
{
  WarBoardData___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *_9__104_0; // x20
  Il2CppObject *v6; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C353EA & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
    sub_1C32C20(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__GetPlayerMasterPiece_b__104_0__);
    sub_1C32C20(&WarBoardData___c_TypeInfo);
    byte_4C353EA = 1;
  }
  v3 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v3 = WarBoardData___c_TypeInfo;
  }
  _9__104_0 = (System_Func_object__bool__o *)v3->static_fields->__9__104_0;
  if ( !_9__104_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = WarBoardData___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__104_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__104_0, v6, Method_WarBoardData___c__GetPlayerMasterPiece_b__104_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__104_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__104_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__104_0, (int32_t)_9__104_0, v8, v9);
  }
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_object__51408536(
                                  pieces,
                                  (System_Func_TSource__bool__o *)_9__104_0,
                                  (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


WarBoardPieceData_array *WarBoardData__GetPlayerPieces(WarBoardData_o *this, const MethodInfo *method)
{
  WarBoardData___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *_9__121_0; // x20
  Il2CppObject *v6; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_4C353F7 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C32C20(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__GetPlayerPieces_b__121_0__);
    sub_1C32C20(&WarBoardData___c_TypeInfo);
    byte_4C353F7 = 1;
  }
  v3 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v3 = WarBoardData___c_TypeInfo;
  }
  _9__121_0 = (System_Func_object__bool__o *)v3->static_fields->__9__121_0;
  if ( !_9__121_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = WarBoardData___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__121_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__121_0, v6, Method_WarBoardData___c__GetPlayerPieces_b__121_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__121_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__121_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__121_0, (int32_t)_9__121_0, v8, v9);
  }
  v10 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__121_0,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v10,
                                      (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


System_Int32_array *WarBoardData__GetPrevCondIds(
        WarBoardData_o *this,
        System_Int32_array *commonReleaseIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v4; // x20
  System_Collections_Generic_List_int__o *Master_object; // x0
  il2cpp_array_size_t max_length; // x8
  WarBoardCommonReleaseMaster_o *v7; // x21
  unsigned __int64 v8; // x23
  int size; // w8
  System_Collections_Generic_List_int__o *v10; // x22
  unsigned int v11; // w25
  __int64 v12; // x8
  int32_t v13; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v15; // x9
  __int64 v16; // x10
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_4C3541E & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C3541E = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Collections_Generic_List_int__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  if ( !commonReleaseIds )
    goto LABEL_25;
  max_length = commonReleaseIds->max_length;
  if ( (int)max_length >= 1 )
  {
    v7 = (WarBoardCommonReleaseMaster_o *)Master_object;
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)max_length )
        goto LABEL_26;
      if ( !v7 )
        goto LABEL_25;
      Master_object = (System_Collections_Generic_List_int__o *)WarBoardCommonReleaseMaster__GetList(
                                                                  v7,
                                                                  commonReleaseIds->m_Items[v8],
                                                                  0);
      if ( !Master_object )
        goto LABEL_25;
      size = Master_object->fields._size;
      v10 = Master_object;
      if ( size >= 1 )
        break;
LABEL_22:
      LODWORD(max_length) = commonReleaseIds->max_length;
      if ( (__int64)++v8 >= (int)max_length )
        goto LABEL_23;
    }
    v11 = 0;
    while ( v11 < size )
    {
      v12 = *((_QWORD *)&v10->fields._syncRoot + (int)v11);
      if ( !v12 )
        goto LABEL_25;
      if ( (unsigned int)(*(_DWORD *)(v12 + 28) - 7) <= 1 )
      {
        if ( !v4 )
          goto LABEL_25;
        v13 = *(_DWORD *)(v12 + 40);
        items = v4->fields._items;
        v15 = Method_System_Collections_Generic_List_int__Add__;
        ++v4->fields._version;
        if ( !items )
          goto LABEL_25;
        v16 = v4->fields._size;
        if ( (unsigned int)v16 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v4,
            v13,
            *(const MethodInfo_377B798 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v4->fields._size = v16 + 1;
          items->m_Items[v16] = v13;
        }
      }
      size = v10->fields._size;
      if ( (int)++v11 >= size )
        goto LABEL_22;
    }
LABEL_26:
    sub_1C32E84(Master_object);
  }
LABEL_23:
  v17 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v4,
          (const MethodInfo_31005DC *)Method_System_Linq_Enumerable_Distinct_int___);
  Master_object = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                              v17,
                                                              (const MethodInfo_31214BC *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !Master_object )
LABEL_25:
    sub_1C32E7C(Master_object);
  return System_Collections_Generic_List_int___ToArray(
           Master_object,
           (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int max_length; // w8
  WarBoardPieceData_array *v13; // x22
  unsigned int v14; // w23
  WarBoardPieceData_o *v15; // x1
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4C353F8 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    byte_4C353F8 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  AlivePieces = WarBoardData__GetAlivePieces(this, v8);
  if ( !AlivePieces )
    goto LABEL_18;
  max_length = AlivePieces->max_length;
  v13 = AlivePieces;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
        sub_1C32E84(AlivePieces);
      v15 = v13->m_Items[v14];
      if ( !v15 )
        break;
      if ( v15->fields._StageReinfoId_k__BackingField == stageReinfoId
        && v15->fields._ReinfoIndex_k__BackingField == reinfoIndex )
      {
        if ( !v7 )
          break;
        items = v7->fields._items;
        v17 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
        ++v7->fields._version;
        if ( !items )
          break;
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)v15,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v15;
          sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v15, v10, v11);
        }
      }
      max_length = v13->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_16;
    }
LABEL_18:
    sub_1C32E7C(AlivePieces);
  }
LABEL_16:
  if ( !v7 )
    goto LABEL_18;
  return (WarBoardPieceData_array *)System_Collections_Generic_List_object___ToArray(
                                      v7,
                                      (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
}


void WarBoardData__GetReinforcements(
        WarBoardData_o *this,
        System_Collections_Generic_List_ReinforcementsData__o **reinfoDatas,
        WarBoardStageReinforcementsMaster_o *mst,
        int32_t targetStageReinforcementsId,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass189_0_o *v8; // x27
  WarBoardStageReinforcementsEntity_o *ReinfocementsPieces; // x0
  struct WarBoardStageEntity_o *stageEntity; // x8
  WarBoardData___c__DisplayClass189_0_Fields *p_fields; // x24
  System_Collections_Generic_List_int__o *v12; // x23
  const MethodInfo *v13; // x2
  System_Int32_array *DeploySquareIds; // x24
  __int64 v15; // x25
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v18; // x19
  const MethodInfo *v19; // x3
  __int64 v20; // x8
  int32_t v21; // w2
  struct System_Int32_array *reinforcementsIds; // x8
  struct System_Int32_array *limitNums; // x8
  WarBoardStageReinforcementsEntity_o *v24; // x8
  struct System_Int32_array *v25; // x9
  __int64 v26; // x10
  _BOOL4 v27; // w20
  _BOOL4 IsOnce; // w27
  WarBoardData_o *v29; // x26
  const MethodInfo *v30; // x1
  __int64 v31; // x29
  __int64 v32; // x22
  System_Func_int__bool__o *v33; // x21
  System_Int32_array *v34; // x28
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  _BOOL4 v37; // w28
  System_Collections_Generic_List_T__o *v38; // x19
  System_Func_object__bool__o *v39; // x21
  const MethodInfo *v40; // x3
  int32_t v41; // w2
  unsigned int max_length; // w8
  __int64 v43; // x8
  struct System_Int32_array *items; // x9
  _QWORD *v45; // x10
  __int64 size; // x11
  __int64 v47; // x9
  int32_t v48; // w1
  struct System_Int32_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  _QWORD *monitor; // x9
  __int64 v53; // x8
  int32_t v54; // w1
  __int64 v55; // x8
  _QWORD *v56; // x9
  __int64 forceId; // x10
  __int64 v58; // x20
  System_Int32_array *v59; // x0
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  System_Int32_array *v62; // x0
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  __int64 v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  __int64 v70; // x8
  WarBoardData___c__DisplayClass189_0_Fields *v71; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_int__o *v72; // [xsp+10h] [xbp-70h]

  if ( (byte_4C35426 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_int____78062168);
    sub_1C32C20(&Method_BasicHelper_Any_ReinforcementsData___);
    sub_1C32C20(&System_Func_int__bool__TypeInfo);
    sub_1C32C20(&System_Func_ReinforcementsData__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ReinforcementsData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&ReinforcementsData_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass189_0__GetReinforcements_b__0__);
    sub_1C32C20(&WarBoardData___c__DisplayClass189_0_TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__1__);
    sub_1C32C20(&WarBoardData___c__DisplayClass189_1_TypeInfo);
    byte_4C35426 = 1;
  }
  v8 = (WarBoardData___c__DisplayClass189_0_o *)sub_1C32E6C(WarBoardData___c__DisplayClass189_0_TypeInfo);
  WarBoardData___c__DisplayClass189_0___ctor(v8, 0);
  if ( !v8 )
    goto LABEL_65;
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity || !mst )
    goto LABEL_65;
  p_fields = &v8->fields;
  if ( !WarBoardStageReinforcementsMaster__TryGetReleaseEntity(
          mst,
          &v8->fields.stageEntity,
          stageEntity->fields.id,
          targetStageReinforcementsId,
          0) )
    return;
  v12 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  v72 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v72,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  v71 = &v8->fields;
  if ( !p_fields->stageEntity )
    goto LABEL_65;
  DeploySquareIds = WarBoardData__GetDeploySquareIds(this, p_fields->stageEntity->fields.squareIds, v13);
  v15 = sub_1C32E6C(WarBoardData___c__DisplayClass189_1_TypeInfo);
  WarBoardData___c__DisplayClass189_1___ctor((WarBoardData___c__DisplayClass189_1_o *)v15, 0);
  if ( !v15 )
    goto LABEL_65;
  *(_QWORD *)(v15 + 24) = v8;
  v18 = v15 + 24;
  sub_1C32BC4((CGThumbnailListItem_o *)(v15 + 24), (int32_t)v8, v16, v17);
  v20 = *(_QWORD *)(v15 + 24);
  *(_DWORD *)(v15 + 16) = 0;
  if ( !v20 )
    goto LABEL_65;
  v21 = 0;
  while ( 1 )
  {
    ReinfocementsPieces = *(WarBoardStageReinforcementsEntity_o **)(v20 + 16);
    if ( !ReinfocementsPieces )
      goto LABEL_65;
    reinforcementsIds = ReinfocementsPieces->fields.reinforcementsIds;
    if ( !reinforcementsIds )
      goto LABEL_65;
    if ( v21 >= SLODWORD(reinforcementsIds->max_length) )
      break;
    limitNums = ReinfocementsPieces->fields.limitNums;
    if ( !limitNums )
      goto LABEL_65;
    if ( (unsigned int)v21 >= LODWORD(limitNums->max_length) )
      goto LABEL_66;
    if ( limitNums->m_Items[v21] < 1 )
    {
      v27 = 0;
    }
    else
    {
      ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)WarBoardData__GetReinfocementsPieces(
                                                                     this,
                                                                     ReinfocementsPieces->fields.id,
                                                                     v21,
                                                                     v19);
      if ( !ReinfocementsPieces )
        goto LABEL_65;
      if ( !*(_QWORD *)v18 )
        goto LABEL_65;
      v24 = ReinfocementsPieces;
      ReinfocementsPieces = *(WarBoardStageReinforcementsEntity_o **)(*(_QWORD *)v18 + 16LL);
      if ( !ReinfocementsPieces )
        goto LABEL_65;
      v25 = ReinfocementsPieces->fields.limitNums;
      if ( !v25 )
        goto LABEL_65;
      v26 = *(int *)(v15 + 16);
      if ( (unsigned int)v26 >= LODWORD(v25->max_length) )
        goto LABEL_66;
      v27 = v25->m_Items[v26] <= v24->fields.forceId;
    }
    IsOnce = WarBoardStageReinforcementsEntity__IsOnce(ReinfocementsPieces, 0);
    v29 = this;
    ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)WarBoardData__GetPlayReinforcements(this, v30);
    v31 = *(_QWORD *)v18;
    if ( !*(_QWORD *)v18 )
      goto LABEL_65;
    v32 = v18;
    v33 = *(System_Func_int__bool__o **)(v31 + 24);
    v34 = (System_Int32_array *)ReinfocementsPieces;
    if ( !v33 )
    {
      v33 = (System_Func_int__bool__o *)sub_1C32E6C(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v33,
        (Il2CppObject *)v31,
        Method_WarBoardData___c__DisplayClass189_0__GetReinforcements_b__0__,
        0);
      *(_QWORD *)(v31 + 24) = v33;
      sub_1C32BC4((CGThumbnailListItem_o *)(v31 + 24), (int32_t)v33, v35, v36);
    }
    v37 = BasicHelper__Any_int__51143952(
            v34,
            (System_Func_T__bool__o *)v33,
            (const MethodInfo_30C6510 *)Method_BasicHelper_Any_int____78062168);
    v38 = (System_Collections_Generic_List_T__o *)*reinfoDatas;
    v39 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_ReinforcementsData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v39,
      (Il2CppObject *)v15,
      Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__1__,
      0);
    ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)BasicHelper__Any_object_(
                                                                   v38,
                                                                   (System_Func_T__bool__o *)v39,
                                                                   (const MethodInfo_30C6790 *)Method_BasicHelper_Any_ReinforcementsData___);
    if ( !DeploySquareIds )
      goto LABEL_65;
    v41 = *(_DWORD *)(v15 + 16);
    max_length = DeploySquareIds->max_length;
    if ( v41 >= max_length )
      goto LABEL_66;
    if ( (unsigned __int8)ReinfocementsPieces & 1 | (IsOnce && v37 || v27 || DeploySquareIds->m_Items[v41] < 0) )
    {
      if ( !*(_QWORD *)v32 )
        goto LABEL_65;
      v43 = *(_QWORD *)(*(_QWORD *)v32 + 16LL);
      if ( !v43 )
        goto LABEL_65;
      v18 = v32;
      this = v29;
      WarBoardData__SaveHoldReinforcements(v29, *(_DWORD *)(v43 + 20), v41, v40);
    }
    else
    {
      if ( !v12 )
        goto LABEL_65;
      items = v12->fields._items;
      v45 = Method_System_Collections_Generic_List_int__Add__;
      ++v12->fields._version;
      if ( !items )
        goto LABEL_65;
      size = v12->fields._size;
      this = v29;
      v18 = v32;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v12,
          v41,
          *(const MethodInfo_377B798 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
        max_length = DeploySquareIds->max_length;
      }
      else
      {
        v12->fields._size = size + 1;
        items->m_Items[size] = v41;
      }
      v47 = *(int *)(v15 + 16);
      ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)v72;
      if ( (unsigned int)v47 >= max_length )
LABEL_66:
        sub_1C32E84(ReinfocementsPieces);
      if ( !v72 )
        goto LABEL_65;
      v48 = DeploySquareIds->m_Items[v47];
      v49 = v72->fields._items;
      v50 = Method_System_Collections_Generic_List_int__Add__;
      ++v72->fields._version;
      if ( !v49 )
        goto LABEL_65;
      v51 = v72->fields._size;
      if ( (unsigned int)v51 >= LODWORD(v49->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v72,
          v48,
          *(const MethodInfo_377B798 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
      }
      else
      {
        v72->fields._size = v51 + 1;
        v49->m_Items[v51] = v48;
      }
      ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !ReinfocementsPieces )
        goto LABEL_65;
      monitor = ReinfocementsPieces[6].monitor;
      if ( !monitor )
        goto LABEL_65;
      v53 = *(int *)(v15 + 16);
      if ( (unsigned int)v53 >= LODWORD(DeploySquareIds->max_length) )
        goto LABEL_66;
      ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)monitor[29];
      if ( !ReinfocementsPieces )
        goto LABEL_65;
      v54 = DeploySquareIds->m_Items[v53];
      v55 = *(_QWORD *)&ReinfocementsPieces->fields.warBoardStageId;
      v56 = Method_System_Collections_Generic_List_int__Add__;
      ++ReinfocementsPieces->fields.groupId;
      if ( !v55 )
        goto LABEL_65;
      forceId = ReinfocementsPieces->fields.forceId;
      if ( (unsigned int)forceId >= *(_DWORD *)(v55 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)ReinfocementsPieces,
          v54,
          *(const MethodInfo_377B798 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
      }
      else
      {
        ReinfocementsPieces->fields.forceId = forceId + 1;
        *(_DWORD *)(v55 + 4 * forceId + 32) = v54;
      }
    }
    v20 = *(_QWORD *)(v15 + 24);
    v21 = *(_DWORD *)(v15 + 16) + 1;
    *(_DWORD *)(v15 + 16) = v21;
    if ( !v20 )
      goto LABEL_65;
  }
  if ( !v12 )
    goto LABEL_65;
  if ( v12->fields._size < 1 )
    return;
  v58 = sub_1C32E6C(ReinforcementsData_TypeInfo);
  ReinforcementsData___ctor((ReinforcementsData_o *)v58, 0);
  if ( !v71->stageEntity )
    goto LABEL_65;
  if ( !v58 )
    goto LABEL_65;
  *(_DWORD *)(v58 + 16) = v71->stageEntity->fields.id;
  v59 = System_Collections_Generic_List_int___ToArray(
          v12,
          (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)(v58 + 24) = v59;
  sub_1C32BC4((CGThumbnailListItem_o *)(v58 + 24), (int32_t)v59, v60, v61);
  ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)v72;
  if ( !v72
    || (v62 = System_Collections_Generic_List_int___ToArray(
                v72,
                (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__),
        *(_QWORD *)(v58 + 32) = v62,
        sub_1C32BC4((CGThumbnailListItem_o *)(v58 + 32), (int32_t)v62, v63, v64),
        (ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)*reinfoDatas) == 0)
    || (v67 = *(_QWORD *)&ReinfocementsPieces->fields.warBoardStageId,
        v68 = Method_System_Collections_Generic_List_ReinforcementsData__Add__,
        ++ReinfocementsPieces->fields.groupId,
        !v67) )
  {
LABEL_65:
    sub_1C32E7C(ReinfocementsPieces);
  }
  v69 = ReinfocementsPieces->fields.forceId;
  if ( (unsigned int)v69 >= *(_DWORD *)(v67 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)ReinfocementsPieces,
      (Il2CppObject *)v58,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
  }
  else
  {
    v70 = v67 + 8 * v69;
    ReinfocementsPieces->fields.forceId = v69 + 1;
    *(_QWORD *)(v70 + 32) = v58;
    sub_1C32BC4((CGThumbnailListItem_o *)(v70 + 32), v58, v65, v66);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  return localSaveData->fields.cameraSize;
}


WarBoardPieceData_array *WarBoardData__GetServantPieces(
        WarBoardData_o *this,
        bool isPlayerGroup,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass106_0_o *v5; // x21
  __int64 v6; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v8; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0

  if ( (byte_4C353EC & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C32C20(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass106_0__GetServantPieces_b__0__);
    sub_1C32C20(&WarBoardData___c__DisplayClass106_0_TypeInfo);
    byte_4C353EC = 1;
  }
  v5 = (WarBoardData___c__DisplayClass106_0_o *)sub_1C32E6C(WarBoardData___c__DisplayClass106_0_TypeInfo);
  WarBoardData___c__DisplayClass106_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  v5->fields.isPlayerGroup = isPlayerGroup;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v8 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass106_0__GetServantPieces_b__0__,
    0);
  v9 = System_Linq_Enumerable__Where_object_(
         pieces,
         (System_Func_TSource__bool__o *)v8,
         (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v9,
                                      (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


WarBoardDataEntity_o *WarBoardData__GetServerData(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.serverData;
}


WarBoardSquareData_o *WarBoardData__GetSquare(WarBoardData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  WarBoardData___c__DisplayClass128_0_o *v5; // x21
  __int64 v6; // x0
  System_Collections_Generic_IEnumerable_TSource__o *squares; // x19
  System_Func_object__bool__o *v8; // x20

  if ( (byte_4C353FD & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
    sub_1C32C20(&System_Func_WarBoardSquareData__bool__TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass128_0__GetSquare_b__0__);
    sub_1C32C20(&WarBoardData___c__DisplayClass128_0_TypeInfo);
    byte_4C353FD = 1;
  }
  v5 = (WarBoardData___c__DisplayClass128_0_o *)sub_1C32E6C(WarBoardData___c__DisplayClass128_0_TypeInfo);
  WarBoardData___c__DisplayClass128_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  v5->fields.squareIndex = squareIndex;
  squares = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.squares;
  v8 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardSquareData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass128_0__GetSquare_b__0__,
    0);
  return (WarBoardSquareData_o *)System_Linq_Enumerable__FirstOrDefault_object__51408536(
                                   squares,
                                   (System_Func_TSource__bool__o *)v8,
                                   (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
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
  struct WarBoardDataEntity_o *serverData; // x8
  System_Object_array *svtInfo; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4C3540D & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Find_WarBoardUserServantData___);
    sub_1C32C20(&System_Func_WarBoardUserServantData__bool__TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass153_0__GetStageBossData_b__0__);
    sub_1C32C20(&WarBoardData___c__DisplayClass153_0_TypeInfo);
    byte_4C3540D = 1;
  }
  v5 = (WarBoardData___c__DisplayClass153_0_o *)sub_1C32E6C(WarBoardData___c__DisplayClass153_0_TypeInfo);
  WarBoardData___c__DisplayClass153_0___ctor(v5, 0);
  if ( !v5 || (v5->fields.stageBossIdx = stageBossIdx, (serverData = this->fields.serverData) == 0) )
    sub_1C32E7C(v6);
  svtInfo = (System_Object_array *)serverData->fields.svtInfo;
  v9 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardUserServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass153_0__GetStageBossData_b__0__,
    0);
  return (WarBoardUserServantData_o *)BasicHelper__Find_object_(
                                        svtInfo,
                                        (System_Func_T__bool__o *)v9,
                                        (const MethodInfo_30C735C *)Method_BasicHelper_Find_WarBoardUserServantData___);
}


WarBoardTreasureData_o *WarBoardData__GetTreasure(WarBoardData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  WarBoardData___c__DisplayClass137_0_o *v5; // x21
  __int64 v6; // x0
  System_Collections_Generic_IEnumerable_TSource__o *treasures; // x19
  System_Func_object__bool__o *v8; // x20

  if ( (byte_4C35402 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___);
    sub_1C32C20(&System_Func_WarBoardTreasureData__bool__TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass137_0__GetTreasure_b__0__);
    sub_1C32C20(&WarBoardData___c__DisplayClass137_0_TypeInfo);
    byte_4C35402 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass137_0_o *)sub_1C32E6C(WarBoardData___c__DisplayClass137_0_TypeInfo);
  WarBoardData___c__DisplayClass137_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  v5->fields.squareIndex = squareIndex;
  treasures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.treasures;
  v8 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardTreasureData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass137_0__GetTreasure_b__0__,
    0);
  return (WarBoardTreasureData_o *)System_Linq_Enumerable__FirstOrDefault_object__51408536(
                                     treasures,
                                     (System_Func_TSource__bool__o *)v8,
                                     (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___);
}


System_Int32_array *WarBoardData__GetTreasureIdList(WarBoardData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  __int64 v4; // x0
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8
  struct WarBoardTreasureData_SaveData_array *treasureSaves; // x20
  int max_length; // w8
  unsigned int v8; // w21
  WarBoardTreasureData_SaveData_o *v9; // x8
  int32_t treasureId; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10

  if ( (byte_4C353F1 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C353F1 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  localSaveData = this->fields.localSaveData;
  if ( !localSaveData )
    goto LABEL_18;
  treasureSaves = localSaveData->fields.treasureSaves;
  if ( !treasureSaves )
    goto LABEL_18;
  max_length = treasureSaves->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1C32E84(v4);
      v9 = treasureSaves->m_Items[v8];
      if ( !v9 )
        break;
      if ( v9->fields.isUse )
      {
        if ( !v3 )
          break;
        treasureId = v9->fields.treasureId;
        items = v3->fields._items;
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
            *(const MethodInfo_377B798 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v3->fields._size = size + 1;
          items->m_Items[size] = treasureId;
        }
      }
      max_length = treasureSaves->max_length;
      if ( (int)++v8 >= max_length )
        goto LABEL_16;
    }
LABEL_18:
    sub_1C32E7C(v4);
  }
LABEL_16:
  if ( !v3 )
    goto LABEL_18;
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
}


WarBoardTreasureData_array *WarBoardData__GetTreasures(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.treasures;
}


WarBoardUiData_o *WarBoardData__GetUiData(WarBoardData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  WarBoardData___c__DisplayClass193_0_o *v5; // x21
  __int64 v6; // x0
  System_Collections_Generic_List_object__o *listUiData; // x19
  System_Predicate_object__o *v8; // x20

  if ( (byte_4C3542A & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardUiData__Find__);
    sub_1C32C20(&System_Predicate_WarBoardUiData__TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass193_0__GetUiData_b__0__);
    sub_1C32C20(&WarBoardData___c__DisplayClass193_0_TypeInfo);
    byte_4C3542A = 1;
  }
  v5 = (WarBoardData___c__DisplayClass193_0_o *)sub_1C32E6C(WarBoardData___c__DisplayClass193_0_TypeInfo);
  WarBoardData___c__DisplayClass193_0___ctor(v5, 0);
  if ( !v5
    || (v5->fields.squareIndex = squareIndex,
        listUiData = (System_Collections_Generic_List_object__o *)this->fields.listUiData,
        v8 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_WarBoardUiData__TypeInfo),
        System_Predicate_object____ctor(
          v8,
          (Il2CppObject *)v5,
          Method_WarBoardData___c__DisplayClass193_0__GetUiData_b__0__,
          0),
        !listUiData) )
  {
    sub_1C32E7C(v6);
  }
  return (WarBoardUiData_o *)System_Collections_Generic_List_object___Find(
                               listUiData,
                               (System_Predicate_T__o *)v8,
                               (const MethodInfo_3798E24 *)Method_System_Collections_Generic_List_WarBoardUiData__Find__);
}


WarBoardUiData_o *WarBoardData__GetUiData_37878912(
        WarBoardData_o *this,
        System_Int32_array *pieceIndex,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *listUiData; // x19
  System_Predicate_object__o *v10; // x20

  if ( (byte_4C3542B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardUiData__Find__);
    sub_1C32C20(&System_Predicate_WarBoardUiData__TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass194_0__GetUiData_b__0__);
    sub_1C32C20(&WarBoardData___c__DisplayClass194_0_TypeInfo);
    byte_4C3542B = 1;
  }
  v5 = sub_1C32E6C(WarBoardData___c__DisplayClass194_0_TypeInfo);
  WarBoardData___c__DisplayClass194_0___ctor((WarBoardData___c__DisplayClass194_0_o *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = pieceIndex,
        sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)pieceIndex, v7, v8),
        listUiData = (System_Collections_Generic_List_object__o *)this->fields.listUiData,
        v10 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_WarBoardUiData__TypeInfo),
        System_Predicate_object____ctor(
          v10,
          (Il2CppObject *)v5,
          Method_WarBoardData___c__DisplayClass194_0__GetUiData_b__0__,
          0),
        !listUiData) )
  {
    sub_1C32E7C(v6);
  }
  return (WarBoardUiData_o *)System_Collections_Generic_List_object___Find(
                               listUiData,
                               (System_Predicate_T__o *)v10,
                               (const MethodInfo_3798E24 *)Method_System_Collections_Generic_List_WarBoardUiData__Find__);
}


WarBoardTreasureData_o *WarBoardData__GetUnusedTreasure(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass138_0_o *v5; // x21
  __int64 v6; // x0
  System_Collections_Generic_IEnumerable_TSource__o *treasures; // x19
  System_Func_object__bool__o *v8; // x20

  if ( (byte_4C35403 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___);
    sub_1C32C20(&System_Func_WarBoardTreasureData__bool__TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass138_0__GetUnusedTreasure_b__0__);
    sub_1C32C20(&WarBoardData___c__DisplayClass138_0_TypeInfo);
    byte_4C35403 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass138_0_o *)sub_1C32E6C(WarBoardData___c__DisplayClass138_0_TypeInfo);
  WarBoardData___c__DisplayClass138_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  v5->fields.squareIndex = squareIndex;
  treasures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.treasures;
  v8 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardTreasureData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass138_0__GetUnusedTreasure_b__0__,
    0);
  return (WarBoardTreasureData_o *)System_Linq_Enumerable__FirstOrDefault_object__51408536(
                                     treasures,
                                     (System_Func_TSource__bool__o *)v8,
                                     (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___);
}


System_Int32_array *WarBoardData__GetUseCommonReleaseIds(WarBoardData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  void *Master_object; // x0
  struct WarBoardDataEntity_o *serverData; // x8
  WarBoardEventScriptMaster_o *v6; // x20
  int32_t stageId; // w21
  int v8; // w8
  void *v9; // x21
  unsigned int v10; // w23
  __int64 v11; // x22
  __int64 v12; // x25
  __int64 v13; // x8
  unsigned __int64 v14; // x26
  int32_t v15; // w1
  struct System_Int32_array *items; // x9
  _QWORD *v17; // x10
  __int64 size; // x11
  __int64 v19; // x25
  __int64 v20; // x8
  unsigned __int64 v21; // x26
  int v22; // w8
  void *v23; // x22
  unsigned int v24; // w27
  struct System_Int32_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0

  if ( (byte_4C3541D & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_WarBoardEventMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_WarBoardEventScriptMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C3541D = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_WarBoardEventScriptMaster___);
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_46;
  v6 = (WarBoardEventScriptMaster_o *)Master_object;
  stageId = serverData->fields.stageId;
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_WarBoardEventMaster___);
  if ( !Master_object )
    goto LABEL_46;
  Master_object = WarBoardEventMaster__GetListByStageId((WarBoardEventMaster_o *)Master_object, stageId, 0);
  if ( !Master_object )
    goto LABEL_46;
  v8 = *((_DWORD *)Master_object + 6);
  v9 = Master_object;
  if ( v8 >= 1 )
  {
    v10 = 0;
    do
    {
      if ( v10 >= v8 )
        goto LABEL_47;
      v11 = *((_QWORD *)v9 + (int)v10 + 4);
      if ( !v11 )
        goto LABEL_46;
      v12 = *(_QWORD *)(v11 + 56);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 24);
        if ( v13 )
        {
          if ( (int)v13 >= 1 )
          {
            v14 = 0;
            while ( v14 < (unsigned int)v13 )
            {
              v15 = *(_DWORD *)(v12 + 32 + 4 * v14);
              if ( v15 >= 1 )
              {
                if ( !v3 )
                  goto LABEL_46;
                items = v3->fields._items;
                v17 = Method_System_Collections_Generic_List_int__Add__;
                ++v3->fields._version;
                if ( !items )
                  goto LABEL_46;
                size = v3->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v3,
                    v15,
                    *(const MethodInfo_377B798 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
                  LODWORD(v13) = *(_DWORD *)(v12 + 24);
                }
                else
                {
                  v3->fields._size = size + 1;
                  items->m_Items[size] = v15;
                }
              }
              if ( (__int64)++v14 >= (int)v13 )
                goto LABEL_24;
            }
LABEL_47:
            sub_1C32E84(Master_object);
          }
LABEL_24:
          v19 = *(_QWORD *)(v11 + 48);
          if ( !v19 )
            goto LABEL_46;
          v20 = *(_QWORD *)(v19 + 24);
          if ( (int)v20 >= 1 )
          {
            v21 = 0;
            while ( 1 )
            {
              if ( v21 >= (unsigned int)v20 )
                goto LABEL_47;
              if ( !v6 )
                goto LABEL_46;
              Master_object = WarBoardEventScriptMaster__GetList(v6, *(_DWORD *)(v19 + 4 * v21 + 32), 0);
              if ( !Master_object )
                goto LABEL_46;
              v22 = *((_DWORD *)Master_object + 6);
              v23 = Master_object;
              if ( v22 >= 1 )
                break;
LABEL_42:
              LODWORD(v20) = *(_DWORD *)(v19 + 24);
              if ( (__int64)++v21 >= (int)v20 )
                goto LABEL_43;
            }
            v24 = 0;
            while ( v24 < v22 )
            {
              Master_object = (void *)*((_QWORD *)v23 + (int)v24 + 4);
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
                  v25 = v3->fields._items;
                  v26 = Method_System_Collections_Generic_List_int__Add__;
                  ++v3->fields._version;
                  if ( !v25 )
                    goto LABEL_46;
                  v27 = v3->fields._size;
                  if ( (unsigned int)v27 >= LODWORD(v25->max_length) )
                  {
                    System_Collections_Generic_List_int___AddWithResize(
                      v3,
                      (int32_t)Master_object,
                      *(const MethodInfo_377B798 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v3->fields._size = v27 + 1;
                    v25->m_Items[v27] = (int)Master_object;
                  }
                }
              }
              v22 = *((_DWORD *)v23 + 6);
              if ( (int)++v24 >= v22 )
                goto LABEL_42;
            }
            goto LABEL_47;
          }
        }
      }
LABEL_43:
      v8 = *((_DWORD *)v9 + 6);
    }
    while ( (int)++v10 < v8 );
  }
  v28 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v3,
          (const MethodInfo_31005DC *)Method_System_Linq_Enumerable_Distinct_int___);
  Master_object = System_Linq_Enumerable__ToList_int_(
                    v28,
                    (const MethodInfo_31214BC *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !Master_object )
LABEL_46:
    sub_1C32E7C(Master_object);
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)Master_object,
           (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
}


WarBoardWallData_o *WarBoardData__GetWall(
        WarBoardData_o *this,
        int32_t squareIndex,
        bool ignoreDestroy,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass140_0_o *v7; // x22
  __int64 v8; // x0
  System_Collections_Generic_IEnumerable_TSource__o *walls; // x19
  System_Func_object__bool__o *v10; // x20

  if ( (byte_4C35404 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardWallData___);
    sub_1C32C20(&System_Func_WarBoardWallData__bool__TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass140_0__GetWall_b__0__);
    sub_1C32C20(&WarBoardData___c__DisplayClass140_0_TypeInfo);
    byte_4C35404 = 1;
  }
  v7 = (WarBoardData___c__DisplayClass140_0_o *)sub_1C32E6C(WarBoardData___c__DisplayClass140_0_TypeInfo);
  WarBoardData___c__DisplayClass140_0___ctor(v7, 0);
  if ( !v7 )
    sub_1C32E7C(v8);
  v7->fields.squareIndex = squareIndex;
  v7->fields.ignoreDestroy = ignoreDestroy;
  walls = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.walls;
  v10 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardWallData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v7,
    Method_WarBoardData___c__DisplayClass140_0__GetWall_b__0__,
    0);
  return (WarBoardWallData_o *)System_Linq_Enumerable__FirstOrDefault_object__51408536(
                                 walls,
                                 (System_Func_TSource__bool__o *)v10,
                                 (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardWallData___);
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
  WarBoardManager_c *v3; // x0

  if ( (byte_4C35415 & 1) == 0 )
  {
    sub_1C32C20(&WarBoardManager_TypeInfo);
    byte_4C35415 = 1;
  }
  v3 = WarBoardManager_TypeInfo;
  if ( !WarBoardManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
    v3 = WarBoardManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v3->static_fields->SAVE_KEY_WAR_BOARD_CONFIRMED_RULE, -1, 0) != this->fields.winCondId;
}


void WarBoardData__InitPrevCondData(WarBoardData_o *this, const MethodInfo *method)
{
  WarBoardData_o *UseCommonReleaseIds; // x0
  const MethodInfo *v4; // x2
  System_Int32_array *PrevCondIds; // x0
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v7; // x20
  unsigned __int64 v8; // x24
  int32_t v9; // w23
  System_Collections_Generic_List_object__o *listPrevCond; // x21
  WarBoardPrevCondData_o *v11; // x22
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0

  if ( (byte_4C3541F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__);
    sub_1C32C20(&WarBoardPrevCondData_TypeInfo);
    byte_4C3541F = 1;
  }
  UseCommonReleaseIds = (WarBoardData_o *)WarBoardData__GetUseCommonReleaseIds(this, method);
  PrevCondIds = WarBoardData__GetPrevCondIds(UseCommonReleaseIds, (System_Int32_array *)UseCommonReleaseIds, v4);
  if ( !PrevCondIds )
    goto LABEL_14;
  max_length = PrevCondIds->max_length;
  v7 = PrevCondIds;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)max_length )
        sub_1C32E84(PrevCondIds);
      v9 = v7->m_Items[v8];
      listPrevCond = (System_Collections_Generic_List_object__o *)this->fields.listPrevCond;
      v11 = (WarBoardPrevCondData_o *)sub_1C32E6C(WarBoardPrevCondData_TypeInfo);
      WarBoardPrevCondData___ctor_38064840(v11, v9, -1, 0);
      if ( !listPrevCond )
        break;
      items = listPrevCond->fields._items;
      v15 = Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__;
      ++listPrevCond->fields._version;
      if ( !items )
        break;
      size = listPrevCond->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          listPrevCond,
          (Il2CppObject *)v11,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v17 = &items->obj.klass + size;
        listPrevCond->fields._size = size + 1;
        v17[4] = (Il2CppClass *)v11;
        sub_1C32BC4((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v11, v12, v13);
      }
      LODWORD(max_length) = v7->max_length;
      if ( (__int64)++v8 >= (int)max_length )
        return;
    }
LABEL_14:
    sub_1C32E7C(PrevCondIds);
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
  struct WarBoardDataEntity_o *serverData; // x8
  System_Object_array *bossBattleInfo; // x21
  System_Func_object__bool__o *v13; // x22
  Il2CppObject *object; // x0
  Il2CppObject *v15; // x21
  Il2CppObject *v16; // x20
  Il2CppObject *valuea; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C35418 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Find_WarBoardBossBattleData___);
    sub_1C32C20(&System_Convert_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C32C20(&System_Func_WarBoardBossBattleData__bool__TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass172_0__IsBossInfo_b__0__);
    sub_1C32C20(&WarBoardData___c__DisplayClass172_0_TypeInfo);
    byte_4C35418 = 1;
  }
  valuea = 0;
  v9 = (WarBoardData___c__DisplayClass172_0_o *)sub_1C32E6C(WarBoardData___c__DisplayClass172_0_TypeInfo);
  WarBoardData___c__DisplayClass172_0___ctor(v9, 0);
  if ( !v9 )
    goto LABEL_17;
  v9->fields.bossId = bossId;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_17;
  bossBattleInfo = (System_Object_array *)serverData->fields.bossBattleInfo;
  v13 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardBossBattleData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass172_0__IsBossInfo_b__0__,
    0);
  object = BasicHelper__Find_object_(
             bossBattleInfo,
             (System_Func_T__bool__o *)v13,
             (const MethodInfo_30C735C *)Method_BasicHelper_Find_WarBoardBossBattleData___);
  if ( !object )
    return value == 0;
  v15 = object;
  monitor = (System_Collections_Generic_Dictionary_object__object__o *)object[1].monitor;
  if ( !monitor )
    goto LABEL_17;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          monitor,
          (Il2CppObject *)key,
          (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return value == 0;
  monitor = (System_Collections_Generic_Dictionary_object__object__o *)v15[1].monitor;
  if ( !monitor )
LABEL_17:
    sub_1C32E7C(monitor);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          monitor,
          (Il2CppObject *)key,
          &valuea,
          (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return value == 0;
  v16 = valuea;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToInt32(v16, 0) == value;
}


// local variable allocation has failed, the output may be wrong!
bool WarBoardData__IsDefenseTarget(
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
  struct WarBoardStageEntity_o *stageEntity; // x8
  System_Int32_array *DefenseTarget; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  WarBoardStageNpcEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C35416 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Empty_int___);
    byte_4C35416 = 1;
  }
  v10 = Method_System_Array_Empty_int___;
  entity = 0;
  v11 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v11 )
  {
    sub_1C83390(Method_System_Array_Empty_int___);
    v11 = v10[7];
  }
  v12 = *(_QWORD *)(v11 + 16);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C83334(inited);
  if ( !*(_DWORD *)(v12 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v12);
  v13 = *(_QWORD *)(v10[7] + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C83334(inited);
  v14 = *(System_Int32_array ***)(v13 + 184);
  v15 = *v14;
  *data = *v14;
  sub_1C32BC4((CGThumbnailListItem_o *)data, (int32_t)v15, forceId, *(const MethodInfo **)&groupId);
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
    sub_1C32BC4((CGThumbnailListItem_o *)data, (int32_t)DefenseTarget, v19, v20);
  }
  stageNpcMaster = (WarBoardStageNpcMaster_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*data, 0);
  if ( ((unsigned __int8)stageNpcMaster & 1) != 0 )
    return 0;
  if ( !*data )
LABEL_20:
    sub_1C32E7C(stageNpcMaster);
  return ((*data)->max_length & 1) == 0;
}


bool WarBoardData__IsLose(WarBoardData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  WarBoardPieceData_array *Pieces_37846208; // x0
  const MethodInfo *v5; // x1
  int max_length; // w8
  WarBoardPieceData_array *v7; // x20
  int v8; // w24
  int v9; // w22
  int v10; // w23
  WarBoardPieceData_o *v11; // x21

  Pieces_37846208 = WarBoardData__GetPieces_37846208(this, 0, 0, v2);
  if ( !Pieces_37846208 )
LABEL_18:
    sub_1C32E7C(Pieces_37846208);
  max_length = Pieces_37846208->max_length;
  v7 = Pieces_37846208;
  if ( max_length < 1 )
    return 1;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  do
  {
    if ( v8 >= (unsigned int)max_length )
      sub_1C32E84(Pieces_37846208);
    v11 = v7->m_Items[v8];
    if ( !v11 )
      goto LABEL_18;
    if ( !v11->fields._isDead_k__BackingField )
    {
      Pieces_37846208 = (WarBoardPieceData_array *)WarBoardPieceData__HasAvailablePermanentSleepBuff(v11, 0);
      if ( ((unsigned __int8)Pieces_37846208 & 1) == 0 )
      {
        Pieces_37846208 = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster(v11, 0);
        if ( ((unsigned __int8)Pieces_37846208 & 1) != 0 )
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
  WarBoardPieceData_array *Pieces_37846208; // x0
  int max_length; // w8
  WarBoardPieceData_array *v13; // x22
  unsigned int v14; // w26
  Il2CppClass **v15; // x8
  Il2CppClass *v16; // x23
  int v17; // w8

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
          Pieces_37846208 = WarBoardData__GetPieces_37846208(this, i, v10, v2);
          if ( !Pieces_37846208 )
            goto LABEL_28;
          max_length = Pieces_37846208->max_length;
          v13 = Pieces_37846208;
          if ( max_length >= 1 )
          {
            v14 = 0;
            while ( 1 )
            {
              if ( v14 >= max_length )
                sub_1C32E84(Pieces_37846208);
              v15 = &v13->obj.klass + (int)v14;
              v16 = v15[4];
              if ( !v16 )
                break;
              Pieces_37846208 = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster(
                                                             (WarBoardPieceData_o *)v15[4],
                                                             0);
              if ( ((unsigned __int8)Pieces_37846208 & 1) == 0 && !LOBYTE(v16->_1.klass) )
              {
                ++v7;
                v8 += *((unsigned __int8 *)&v16->_1.this_arg.bits + 4);
              }
              max_length = v13->max_length;
              if ( (int)++v14 >= max_length )
                goto LABEL_16;
            }
LABEL_28:
            sub_1C32E7C(Pieces_37846208);
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
    v17 = v7;
  else
    v17 = v7 + 1;
  result = 1;
  if ( v8 > v17 >> 1 )
  {
    this->fields.isPlayedHalfDeadMessage = 1;
    return 0;
  }
  return result;
}


bool WarBoardData__IsReachableWinConditions(WarBoardData_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  WarBoardCommonReleaseEntity_array *List; // x20
  System_Collections_Generic_Dictionary_int__bool__o *v6; // x19
  int max_length; // w8
  unsigned int v8; // w21
  int32_t *v9; // x25
  int32_t v10; // w8
  int32_t v11; // w1
  const MethodInfo_33E14A8 *v12; // x3
  bool v13; // w2
  System_Collections_Generic_Dictionary_int__bool__o *v14; // x0
  WarBoardData___c_c *v15; // x0
  System_Func_KeyValuePair_int__bool___bool__o *_9__95_0; // x20
  Il2CppObject *v17; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4C353E2 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__bool____);
    sub_1C32C20(&System_Func_KeyValuePair_int__bool___bool__TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__IsReachableWinConditions_b__95_0__);
    sub_1C32C20(&WarBoardData___c_TypeInfo);
    byte_4C353E2 = 1;
  }
  if ( this->fields.winCondId < 0 )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  if ( !Master_object )
    goto LABEL_33;
  List = WarBoardCommonReleaseMaster__GetList((WarBoardCommonReleaseMaster_o *)Master_object, this->fields.winCondId, 0);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)List, 0) )
    return 0;
  v6 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v6,
    (const MethodInfo_33E0AE8 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  if ( !List )
LABEL_33:
    sub_1C32E7C(Master_object);
  max_length = List->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1C32E84(Master_object);
      v9 = (int32_t *)List->m_Items[v8];
      if ( !v9 || !v6 )
        goto LABEL_33;
      if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
              v6,
              v9[6],
              (const MethodInfo_33E16BC *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
        break;
      Master_object = (Il2CppObject *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                        v6,
                                        v9[6],
                                        (const MethodInfo_33E1418 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
        break;
LABEL_25:
      max_length = List->max_length;
      if ( (int)++v8 >= max_length )
        goto LABEL_26;
    }
    v10 = v9[7];
    if ( v10 == 1 )
    {
      v11 = v9[6];
      v12 = (const MethodInfo_33E14A8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__;
      v13 = v9[10] == 0;
    }
    else
    {
      if ( v10 != 5 )
      {
        v11 = v9[6];
        v12 = (const MethodInfo_33E14A8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__;
        v14 = v6;
        v13 = 0;
        goto LABEL_24;
      }
      v11 = v9[6];
      v12 = (const MethodInfo_33E14A8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__;
      v13 = v9[10] < 1;
    }
    v14 = v6;
LABEL_24:
    System_Collections_Generic_Dictionary_int__bool___set_Item(v14, v11, v13, v12);
    goto LABEL_25;
  }
LABEL_26:
  v15 = WarBoardData___c_TypeInfo;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v15 = WarBoardData___c_TypeInfo;
  }
  _9__95_0 = v15->static_fields->__9__95_0;
  if ( !_9__95_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = WarBoardData___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v15->static_fields->__9;
    _9__95_0 = (System_Func_KeyValuePair_int__bool___bool__o *)sub_1C32E6C(System_Func_KeyValuePair_int__bool___bool__TypeInfo);
    System_Func_KeyValuePair_int__bool___bool____ctor(
      _9__95_0,
      v17,
      Method_WarBoardData___c__IsReachableWinConditions_b__95_0__,
      0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__95_0 = _9__95_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__95_0, (int32_t)_9__95_0, v19, v20);
  }
  return System_Linq_Enumerable__Any_KeyValuePair_int__bool__(
           (System_Collections_Generic_IEnumerable_TSource__o *)v6,
           (System_Func_TSource__bool__o *)_9__95_0,
           (const MethodInfo_30E97D0 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__bool____);
}


bool WarBoardData__IsReinforcementsApper(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        int32_t targetStageReinforcementsId,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass190_0_o *v9; // x24
  WarBoardStageReinforcementsMaster_o *Master_object; // x0
  struct WarBoardStageEntity_o *stageEntity; // x8
  void **p_entity; // x20
  bool IsOnce; // w23
  const MethodInfo *v14; // x1
  System_Int32_array *PlayReinforcements; // x25
  System_Func_int__bool__o *v16; // x26
  const MethodInfo *v17; // x2
  struct WarBoardStageReinforcementsEntity_o *entity; // x8
  char v19; // w9
  bool v20; // w23
  const MethodInfo *v21; // x3
  void *v22; // x8
  __int64 v23; // x9
  WarBoardStageReinforcementsMaster_o *v24; // x21
  int32_t v25; // w22
  int32_t v26; // w9
  __int64 v27; // x9
  __int64 v28; // x9
  _BOOL4 v29; // w9

  if ( (byte_4C35427 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_int____78062168);
    sub_1C32C20(&Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&System_Func_int__bool__TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass190_0__IsReinforcementsApper_b__0__);
    sub_1C32C20(&WarBoardData___c__DisplayClass190_0_TypeInfo);
    byte_4C35427 = 1;
  }
  v9 = (WarBoardData___c__DisplayClass190_0_o *)sub_1C32E6C(WarBoardData___c__DisplayClass190_0_TypeInfo);
  WarBoardData___c__DisplayClass190_0___ctor(v9, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (WarBoardStageReinforcementsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
  if ( !v9 )
    goto LABEL_32;
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity || !Master_object )
    goto LABEL_32;
  p_entity = (void **)&v9->fields.entity;
  if ( !WarBoardStageReinforcementsMaster__TryGetReleaseEntity(
          Master_object,
          &v9->fields.entity,
          stageEntity->fields.id,
          targetStageReinforcementsId,
          0) )
    return 0;
  Master_object = (WarBoardStageReinforcementsMaster_o *)*p_entity;
  if ( !*p_entity )
    goto LABEL_32;
  IsOnce = WarBoardStageReinforcementsEntity__IsOnce((WarBoardStageReinforcementsEntity_o *)Master_object, 0);
  PlayReinforcements = WarBoardData__GetPlayReinforcements(this, v14);
  v16 = (System_Func_int__bool__o *)sub_1C32E6C(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v16,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass190_0__IsReinforcementsApper_b__0__,
    0);
  Master_object = (WarBoardStageReinforcementsMaster_o *)BasicHelper__Any_int__51143952(
                                                           PlayReinforcements,
                                                           (System_Func_T__bool__o *)v16,
                                                           (const MethodInfo_30C6510 *)Method_BasicHelper_Any_int____78062168);
  entity = v9->fields.entity;
  if ( !entity )
    goto LABEL_32;
  v19 = IsOnce & (unsigned __int8)Master_object;
  v20 = 0;
  if ( (v19 & 1) != 0 || entity->fields.forceId != forceId || entity->fields.groupId != groupId )
    return v20;
  Master_object = (WarBoardStageReinforcementsMaster_o *)WarBoardData__GetDeploySquareIds(
                                                           this,
                                                           entity->fields.squareIds,
                                                           v17);
  v22 = *p_entity;
  if ( !*p_entity || (v23 = *((_QWORD *)v22 + 5)) == 0 )
LABEL_32:
    sub_1C32E7C(Master_object);
  v24 = Master_object;
  v25 = 0;
  while ( 1 )
  {
    v26 = *(_DWORD *)(v23 + 24);
    v20 = v25 < v26;
    if ( v25 >= v26 )
      return v20;
    v27 = *((_QWORD *)v22 + 8);
    if ( !v27 )
      goto LABEL_32;
    if ( (unsigned int)v25 >= *(_DWORD *)(v27 + 24) )
LABEL_35:
      sub_1C32E84(Master_object);
    if ( *(int *)(v27 + 4LL * v25 + 32) < 1 )
    {
      v29 = 0;
      if ( !v24 )
        goto LABEL_32;
    }
    else
    {
      Master_object = (WarBoardStageReinforcementsMaster_o *)WarBoardData__GetReinfocementsPieces(
                                                               this,
                                                               *((_DWORD *)v22 + 5),
                                                               v25,
                                                               v21);
      if ( !Master_object )
        goto LABEL_32;
      v22 = *p_entity;
      if ( !*p_entity )
        goto LABEL_32;
      v28 = *((_QWORD *)v22 + 8);
      if ( !v28 )
        goto LABEL_32;
      if ( (unsigned int)v25 >= *(_DWORD *)(v28 + 24) )
        goto LABEL_35;
      v29 = *(_DWORD *)(v28 + 4LL * v25 + 32) <= SLODWORD(Master_object->fields._MasterName_k__BackingField);
      if ( !v24 )
        goto LABEL_32;
    }
    if ( (unsigned int)v25 >= LODWORD(v24->fields._MasterName_k__BackingField) )
      goto LABEL_35;
    if ( !v29 && (*(&v24->fields.revision + v25) & 0x80000000) == 0 )
      return v20;
    v23 = *((_QWORD *)v22 + 5);
    ++v25;
    if ( !v23 )
      goto LABEL_32;
  }
}


bool WarBoardData__IsWin(WarBoardData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x20
  bool v5; // w20
  System_Type_o *Type; // x21
  Il2CppType *v7; // x22
  System_RuntimeTypeHandle_o v8; // x0
  System_Type_o *TypeFromHandle; // x1
  bool v10; // w19
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C353E3 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__GetEnumerator__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&System_Type_TypeInfo);
    sub_1C32C20(&WarBoardChangeWinConditionTask_var);
    byte_4C353E3 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( !WarBoardData__CheckWinCond(this, method) )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 28, 0, 0);
  Instance = (Il2CppObject *)System_Linq_Enumerable__Any_object_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)EventTasks,
                               (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    WarBoardManager__AddTask_37974444((WarBoardManager_o *)Instance, 0, EventTasks, 0);
  }
  if ( !EventTasks )
LABEL_20:
    sub_1C32E7C(Instance);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)EventTasks,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_WarBoardTaskBase__GetEnumerator__);
  v13 = v12;
  while ( 1 )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__MoveNext__);
    if ( !v5 )
      break;
    if ( !v13.fields._current )
      sub_1C32E7C(0);
    Type = System_Object__GetType(v13.fields._current, 0);
    v7 = WarBoardChangeWinConditionTask_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v8.fields.value = (intptr_t)v7;
    TypeFromHandle = System_Type__GetTypeFromHandle(v8, 0);
    if ( System_Type__op_Equality(Type, TypeFromHandle, 0) )
    {
      this->fields.winCondGroup = -1;
      break;
    }
  }
  v10 = !v5;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__Dispose__);
  return v10;
}


void WarBoardData__JudgePrevCondData(WarBoardData_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  WarBoardCommonReleaseMaster_o *v4; // x20
  _BOOL8 v5; // x0
  Il2CppObject *current; // x21
  struct WarBoardDataEntity_o *serverData; // x8
  int32_t turn; // w1
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C35421 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__);
    byte_4C35421 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  if ( !this->fields.listPrevCond )
    sub_1C32E7C(Master_object);
  v4 = (WarBoardCommonReleaseMaster_o *)Master_object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)this->fields.listPrevCond,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__);
  v10 = v9;
  while ( 1 )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__);
    if ( !v5 )
      break;
    current = v10.fields._current;
    if ( !v10.fields._current )
      sub_1C32E7C(v5);
    if ( (HIDWORD(v10.fields._current[1].klass) & 0x80000000) != 0 )
    {
      if ( !v4 )
        sub_1C32E7C(v5);
      if ( WarBoardCommonReleaseMaster__IsOpen(v4, (int32_t)v10.fields._current[1].klass, 0) )
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
    &v10,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__);
}


WarBoardData_BattleParticipantInfo_o *WarBoardData__LoadBattleParticipantInfo(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  return WarBoardData_BattleParticipantInfo__LoadFromUniqueIndex(this->fields.latestBattlePieceUniqueIndexes, 0);
}


void WarBoardData__LocalSave(WarBoardData_o *this, bool onBoardSkillUpdate, const MethodInfo *method)
{
  WarBoardData_o *v4; // x19
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8
  WarBoardData_o **p_localSaveData; // x23
  struct WarBoardPieceData_SaveData_array *pieceSaves; // x21
  int max_length; // w8
  unsigned int v9; // w22
  struct System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__o *actionPointEntityDict; // x21
  int entries; // w8
  unsigned int v12; // w22
  struct WarBoardPieceData_array *pieces; // x21
  int v14; // w8
  unsigned int v15; // w22
  struct WarBoardSquareData_array *squares; // x21
  int v17; // w8
  unsigned int v18; // w22
  struct WarBoardSquareData_array *condSquares; // x21
  int v20; // w8
  unsigned int v21; // w22
  struct WarBoardDataEntity_o *serverData; // x8
  struct WarBoardData_WarBoardLocalSaveData_o *v23; // x22
  WarBoardData_o *v24; // x21
  struct WarBoardPieceData_array *v25; // x8
  struct WarBoardPieceData_array *v26; // x8
  WarBoardData_o *v27; // x22
  float ZoomSize; // s0
  WarBoardData_o *v29; // x22
  int npcEntityDict_high; // w8
  WarBoardData_o *v31; // x20
  System_Collections_Generic_List_object__o *v32; // x20
  Il2CppObject *current; // x22
  WarBoardEventData_SaveData_o *v34; // x21
  __int64 v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  WarBoardData_o *v42; // x21
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct System_Collections_Generic_List_WarBoardUiData__o *latestPieceActionSquareIndexes; // x1
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  struct System_UInt32_array *latestBattlePieceUniqueIndexes; // x1
  System_Collections_Generic_List_object__o *v51; // x20
  Il2CppObject *v52; // x22
  WarBoardPrevCondData_SaveData_o *v53; // x21
  __int64 v54; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  struct System_Object_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  Il2CppClass **v60; // x0
  WarBoardData_o *v61; // x21
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  System_Collections_Generic_List_object__o *v64; // x20
  Il2CppObject *v65; // x22
  HoldReinforcementsData_SaveData_o *v66; // x21
  __int64 v67; // x0
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  struct System_Object_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  Il2CppClass **v73; // x0
  WarBoardData_o *v74; // x21
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  struct WarBoardData_WarBoardLocalSaveData_o *v77; // x20
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  System_Collections_Generic_List_object__o *v80; // x20
  Il2CppObject *v81; // x22
  WarBoardUiData_SaveData_o *v82; // x21
  __int64 v83; // x0
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  struct System_Object_array *v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  Il2CppClass **v89; // x0
  WarBoardData_o *v90; // x21
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  struct WarBoardDataEntity_o *v93; // x8
  unsigned int v94; // w0
  WarBoardData_o *v95; // x21
  int v96; // w20
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  unsigned __int64 v99; // x22
  __int64 v100; // x24
  __int64 v101; // x25
  struct WarBoardDataEntity_o *v102; // x9
  struct WarBoardSquareIndexData_array *squareIndexInfo; // x9
  unsigned int *reinforcementsSaveList; // x26
  WarBoardSquareIndexData_o *v105; // x21
  WarBoardSquareIndexData_SaveData_o *v106; // x20
  int32_t v107; // w2
  const MethodInfo *v108; // x3
  struct WarBoardDataEntity_o *v109; // x8
  unsigned int v110; // w0
  WarBoardData_o *v111; // x21
  int v112; // w20
  int32_t v113; // w2
  const MethodInfo *v114; // x3
  int32_t v115; // w2
  const MethodInfo *v116; // x3
  unsigned __int64 v117; // x22
  __int64 v118; // x24
  __int64 v119; // x25
  struct WarBoardDataEntity_o *v120; // x8
  struct WarBoardBossBattleData_array *bossBattleInfo; // x8
  struct System_Collections_Generic_List_int__o *playedStageReinforcementsList; // x26
  WarBoardBossBattleData_o *v123; // x21
  WarBoardBossBattleData_SaveData_o *v124; // x20
  const MethodInfo *v125; // x2
  int32_t v126; // w2
  const MethodInfo *v127; // x3
  struct System_Collections_Generic_List_WarBoardPrevCondData__o *bgAnimationInfo_k__BackingField; // x1
  WarBoardData_o *v129; // x8
  MiniMessagePack_MiniMessagePacker_o *v130; // x19
  System_Byte_array *v131; // x19
  WarBoardData_c *v132; // x8
  System_String_o *WARBOARDDATA_SAVEDATA_KEY; // x20
  System_String_o *v134; // x19
  __int64 v135; // x0
  System_Collections_Generic_List_Enumerator_object__o v136; // [xsp+8h] [xbp-F8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v137; // [xsp+20h] [xbp-E0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v138; // [xsp+40h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v139; // [xsp+60h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v140; // [xsp+80h] [xbp-80h] BYREF

  v4 = this;
  if ( (byte_4C353DA & 1) == 0 )
  {
    sub_1C32C20(&System_Convert_TypeInfo);
    sub_1C32C20(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardUiData_SaveData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardEventData_SaveData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardEventData__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardEventData_SaveData__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardUiData_SaveData__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardEventData_SaveData___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardUiData_SaveData___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardPrevCondData_SaveData__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_HoldReinforcementsData_SaveData__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardEventData_SaveData__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardUiData_SaveData__TypeInfo);
    sub_1C32C20(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1C32C20(&WarBoardSquareIndexData_SaveData___TypeInfo);
    sub_1C32C20(&WarBoardBossBattleData_SaveData___TypeInfo);
    sub_1C32C20(&WarBoardBossBattleData_SaveData_TypeInfo);
    sub_1C32C20(&WarBoardPrevCondData_SaveData_TypeInfo);
    sub_1C32C20(&WarBoardUiData_SaveData_TypeInfo);
    sub_1C32C20(&WarBoardEventData_SaveData_TypeInfo);
    sub_1C32C20(&WarBoardSquareIndexData_SaveData_TypeInfo);
    sub_1C32C20(&HoldReinforcementsData_SaveData_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    this = (WarBoardData_o *)sub_1C32C20(&WarBoardData_TypeInfo);
    byte_4C353DA = 1;
  }
  memset(&v140, 0, sizeof(v140));
  memset(&v139, 0, sizeof(v139));
  memset(&v138, 0, sizeof(v138));
  memset(&v137, 0, sizeof(v137));
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
    v9 = 0;
    while ( v9 < max_length )
    {
      this = (WarBoardData_o *)pieceSaves->m_Items[v9];
      if ( !this )
        goto LABEL_129;
      WarBoardPieceData_SaveData__Save((WarBoardPieceData_SaveData_o *)this, 0);
      max_length = pieceSaves->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_10;
    }
LABEL_130:
    sub_1C32E84(this);
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
    v12 = 0;
    while ( v12 < entries )
    {
      this = (WarBoardData_o *)*((_QWORD *)&actionPointEntityDict->fields._count + (int)v12);
      if ( !this )
        goto LABEL_129;
      WarBoardItemData_SaveData__Save((WarBoardItemData_SaveData_o *)this, 0);
      entries = (int)actionPointEntityDict->fields._entries;
      if ( (int)++v12 >= entries )
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
  v14 = pieces->max_length;
  if ( v14 >= 1 )
  {
    v15 = 0;
    while ( v15 < v14 )
    {
      this = (WarBoardData_o *)pieces->m_Items[v15];
      if ( !this )
        goto LABEL_129;
      WarBoardTreasureData_SaveData__Save((WarBoardTreasureData_SaveData_o *)this, 0);
      v14 = pieces->max_length;
      if ( (int)++v15 >= v14 )
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
  v17 = squares->max_length;
  if ( v17 >= 1 )
  {
    v18 = 0;
    while ( v18 < v17 )
    {
      this = (WarBoardData_o *)squares->m_Items[v18];
      if ( !this )
        goto LABEL_129;
      WarBoardWallData_SaveData__Save((WarBoardWallData_SaveData_o *)this, 0);
      v17 = squares->max_length;
      if ( (int)++v18 >= v17 )
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
  v20 = condSquares->max_length;
  if ( v20 >= 1 )
  {
    v21 = 0;
    while ( v21 < v20 )
    {
      this = (WarBoardData_o *)condSquares->m_Items[v21];
      if ( !this )
        goto LABEL_129;
      WarBoardSquareData_SaveData__Save((WarBoardSquareData_SaveData_o *)this, 0);
      v20 = condSquares->max_length;
      if ( (int)++v21 >= v20 )
        goto LABEL_38;
    }
    goto LABEL_130;
  }
LABEL_38:
  this = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  serverData = v4->fields.serverData;
  if ( !serverData )
    goto LABEL_129;
  v23 = v4->fields.localSaveData;
  if ( !v23 )
    goto LABEL_129;
  v24 = this;
  v23->fields.turn = serverData->fields.turn;
  *(_QWORD *)&v23->fields.turnForceId = *(_QWORD *)&serverData->fields.turnForceId;
  if ( !this )
    goto LABEL_129;
  v25 = this->fields.pieces;
  if ( !v25 )
    goto LABEL_129;
  this = (WarBoardData_o *)v25->m_Items[5];
  if ( !this )
    goto LABEL_129;
  v23->fields.cameraPos = MapScroll__GetScrlPos((MapScroll_o *)this, 0);
  v26 = v24->fields.pieces;
  if ( !v26 )
    goto LABEL_129;
  this = (WarBoardData_o *)v26->m_Items[6];
  if ( !this )
    goto LABEL_129;
  v27 = *p_localSaveData;
  ZoomSize = MapZoom__GetZoomSize((MapZoom_o *)this, 0);
  if ( !v27 )
    goto LABEL_129;
  *(float *)&v27->fields.treasures = ZoomSize;
  v29 = *p_localSaveData;
  if ( !*p_localSaveData )
    goto LABEL_129;
  npcEntityDict_high = HIDWORD(v24[3].fields.npcEntityDict);
  BYTE4(v29->fields.effects) = onBoardSkillUpdate;
  HIDWORD(v29->fields.treasures) = npcEntityDict_high;
  LODWORD(v29->fields.serverData) = BattleRandom__GetLogicCount(0);
  v31 = *p_localSaveData;
  this = (WarBoardData_o *)BattleRandom__GetGutsCount(0);
  if ( !v31 )
    goto LABEL_129;
  HIDWORD(v31->fields.serverData) = (_DWORD)this;
  if ( !*p_localSaveData )
    goto LABEL_129;
  LOBYTE((*p_localSaveData)->fields._bgAnimationInfo_k__BackingField) = v4->fields.isPlayedHalfDeadMessage;
  v32 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardEventData_SaveData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardEventData_SaveData___ctor__);
  this = (WarBoardData_o *)v4->fields.listEvent;
  if ( !this )
    goto LABEL_129;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v136,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_WarBoardEventData__GetEnumerator__);
  v140 = v136;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v140,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__MoveNext__) )
  {
    current = v140.fields._current;
    v34 = (WarBoardEventData_SaveData_o *)sub_1C32E6C(WarBoardEventData_SaveData_TypeInfo);
    WarBoardEventData_SaveData___ctor_38028380(v34, (WarBoardEventData_o *)current, 0);
    if ( !v32 )
      sub_1C32E7C(v35);
    items = v32->fields._items;
    v39 = Method_System_Collections_Generic_List_WarBoardEventData_SaveData__Add__;
    ++v32->fields._version;
    if ( !items )
      sub_1C32E7C(v35);
    size = v32->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v32,
        (Il2CppObject *)v34,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
    }
    else
    {
      v41 = &items->obj.klass + size;
      v32->fields._size = size + 1;
      v41[4] = (Il2CppClass *)v34;
      sub_1C32BC4((CGThumbnailListItem_o *)(v41 + 4), (int32_t)v34, v36, v37);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v140,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__Dispose__);
  if ( !v32 )
    goto LABEL_129;
  v42 = *p_localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_object___ToArray(
                             v32,
                             (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_WarBoardEventData_SaveData__ToArray__);
  if ( !v42 )
    goto LABEL_129;
  v42->fields.localSaveData = (struct WarBoardData_WarBoardLocalSaveData_o *)this;
  sub_1C32BC4((CGThumbnailListItem_o *)&v42->fields.localSaveData, (int32_t)this, v43, v44);
  this = *p_localSaveData;
  if ( !*p_localSaveData )
    goto LABEL_129;
  this->fields._maxForceId_k__BackingField = v4->fields.winCondId;
  latestPieceActionSquareIndexes = (struct System_Collections_Generic_List_WarBoardUiData__o *)v4->fields.latestPieceActionSquareIndexes;
  this->fields.listUiData = latestPieceActionSquareIndexes;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.listUiData, (int32_t)latestPieceActionSquareIndexes, v45, v46);
  this = (WarBoardData_o *)v4->fields.localSaveData;
  if ( !this )
    goto LABEL_129;
  latestBattlePieceUniqueIndexes = v4->fields.latestBattlePieceUniqueIndexes;
  *(_QWORD *)&this->fields.isPlayedHalfDeadMessage = latestBattlePieceUniqueIndexes;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.isPlayedHalfDeadMessage,
    (int32_t)latestBattlePieceUniqueIndexes,
    v48,
    v49);
  v51 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardPrevCondData_SaveData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v51,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData___ctor__);
  this = (WarBoardData_o *)v4->fields.listPrevCond;
  if ( !this )
    goto LABEL_129;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v136,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__);
  v139 = v136;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v139,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__) )
  {
    v52 = v139.fields._current;
    v53 = (WarBoardPrevCondData_SaveData_o *)sub_1C32E6C(WarBoardPrevCondData_SaveData_TypeInfo);
    WarBoardPrevCondData_SaveData___ctor_38028440(v53, (WarBoardPrevCondData_o *)v52, 0);
    if ( !v51 )
      sub_1C32E7C(v54);
    v57 = v51->fields._items;
    v58 = Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__Add__;
    ++v51->fields._version;
    if ( !v57 )
      sub_1C32E7C(v54);
    v59 = v51->fields._size;
    if ( (unsigned int)v59 >= LODWORD(v57->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v51,
        (Il2CppObject *)v53,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
    }
    else
    {
      v60 = &v57->obj.klass + v59;
      v51->fields._size = v59 + 1;
      v60[4] = (Il2CppClass *)v53;
      sub_1C32BC4((CGThumbnailListItem_o *)(v60 + 4), (int32_t)v53, v55, v56);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v139,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__);
  if ( !v51 )
    goto LABEL_129;
  v61 = *p_localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_object___ToArray(
                             v51,
                             (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__ToArray__);
  if ( !v61 )
    goto LABEL_129;
  v61->fields.listEvent = (struct System_Collections_Generic_List_WarBoardEventData__o *)this;
  sub_1C32BC4((CGThumbnailListItem_o *)&v61->fields.listEvent, (int32_t)this, v62, v63);
  v64 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_HoldReinforcementsData_SaveData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v64,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData___ctor__);
  this = (WarBoardData_o *)v4->fields.reinforcementsSaveList;
  if ( !this )
    goto LABEL_129;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v136,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
  v138 = v136;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v138,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__) )
  {
    v65 = v138.fields._current;
    v66 = (HoldReinforcementsData_SaveData_o *)sub_1C32E6C(HoldReinforcementsData_SaveData_TypeInfo);
    HoldReinforcementsData_SaveData___ctor_38028492(v66, (HoldReinforcementsData_o *)v65, 0);
    if ( !v64 )
      sub_1C32E7C(v67);
    v70 = v64->fields._items;
    v71 = Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__Add__;
    ++v64->fields._version;
    if ( !v70 )
      sub_1C32E7C(v67);
    v72 = v64->fields._size;
    if ( (unsigned int)v72 >= LODWORD(v70->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v64,
        (Il2CppObject *)v66,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
    }
    else
    {
      v73 = &v70->obj.klass + v72;
      v64->fields._size = v72 + 1;
      v73[4] = (Il2CppClass *)v66;
      sub_1C32BC4((CGThumbnailListItem_o *)(v73 + 4), (int32_t)v66, v68, v69);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v138,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
  if ( !v64 )
    goto LABEL_129;
  v74 = *p_localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_object___ToArray(
                             v64,
                             (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__ToArray__);
  if ( !v74 )
    goto LABEL_129;
  *(_QWORD *)&v74->fields.winCondId = this;
  sub_1C32BC4((CGThumbnailListItem_o *)&v74->fields.winCondId, (int32_t)this, v75, v76);
  this = (WarBoardData_o *)v4->fields.playedStageReinforcementsList;
  if ( !this )
    goto LABEL_129;
  v77 = v4->fields.localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_int___ToArray(
                             (System_Collections_Generic_List_int__o *)this,
                             (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v77 )
    goto LABEL_129;
  v77->fields.playedReinforcements = (struct System_Int32_array *)this;
  sub_1C32BC4((CGThumbnailListItem_o *)&v77->fields.playedReinforcements, (int32_t)this, v78, v79);
  v80 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardUiData_SaveData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v80,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardUiData_SaveData___ctor__);
  this = (WarBoardData_o *)v4->fields.listUiData;
  if ( !this )
    goto LABEL_129;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v136,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__);
  v137 = v136;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v137,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__) )
  {
    v81 = v137.fields._current;
    v82 = (WarBoardUiData_SaveData_o *)sub_1C32E6C(WarBoardUiData_SaveData_TypeInfo);
    WarBoardUiData_SaveData___ctor_38028552(v82, (WarBoardUiData_o *)v81, 0);
    if ( !v80 )
      sub_1C32E7C(v83);
    v86 = v80->fields._items;
    v87 = Method_System_Collections_Generic_List_WarBoardUiData_SaveData__Add__;
    ++v80->fields._version;
    if ( !v86 )
      sub_1C32E7C(v83);
    v88 = v80->fields._size;
    if ( (unsigned int)v88 >= LODWORD(v86->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v80,
        (Il2CppObject *)v82,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
    }
    else
    {
      v89 = &v86->obj.klass + v88;
      v80->fields._size = v88 + 1;
      v89[4] = (Il2CppClass *)v82;
      sub_1C32BC4((CGThumbnailListItem_o *)(v89 + 4), (int32_t)v82, v84, v85);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v137,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__);
  if ( !v80 )
    goto LABEL_129;
  v90 = *p_localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_object___ToArray(
                             v80,
                             (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_WarBoardUiData_SaveData__ToArray__);
  if ( !v90
    || (v90->fields.latestBattlePieceUniqueIndexes = (struct System_UInt32_array *)this,
        sub_1C32BC4((CGThumbnailListItem_o *)&v90->fields.latestBattlePieceUniqueIndexes, (int32_t)this, v91, v92),
        (v93 = v4->fields.serverData) == 0)
    || (v94 = System_Linq_Enumerable__Count_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v93->fields.squareIndexInfo,
                (const MethodInfo_30FD778 *)Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___),
        v95 = *p_localSaveData,
        v96 = v94,
        this = (WarBoardData_o *)sub_1C32CC8(WarBoardSquareIndexData_SaveData___TypeInfo, v94),
        !v95) )
  {
LABEL_129:
    sub_1C32E7C(this);
  }
  v95->fields.reinforcementsSaveList = (struct System_Collections_Generic_List_HoldReinforcementsData__o *)this;
  sub_1C32BC4((CGThumbnailListItem_o *)&v95->fields.reinforcementsSaveList, (int32_t)this, v97, v98);
  if ( v96 >= 1 )
  {
    v99 = 0;
    v100 = (unsigned int)v96;
    v101 = 8;
    while ( *p_localSaveData )
    {
      v102 = v4->fields.serverData;
      if ( !v102 )
        break;
      squareIndexInfo = v102->fields.squareIndexInfo;
      if ( !squareIndexInfo )
        break;
      if ( v99 >= LODWORD(squareIndexInfo->max_length) )
        goto LABEL_130;
      reinforcementsSaveList = (unsigned int *)(*p_localSaveData)->fields.reinforcementsSaveList;
      v105 = *(WarBoardSquareIndexData_o **)((char *)&squareIndexInfo->obj.klass + v101 * 4);
      v106 = (WarBoardSquareIndexData_SaveData_o *)sub_1C32E6C(WarBoardSquareIndexData_SaveData_TypeInfo);
      WarBoardSquareIndexData_SaveData___ctor_38028632(v106, v105, 0);
      if ( !reinforcementsSaveList )
        break;
      if ( v106 )
      {
        this = (WarBoardData_o *)sub_1C32D5C(v106, *(_QWORD *)(*(_QWORD *)reinforcementsSaveList + 64LL));
        if ( !this )
        {
LABEL_139:
          v135 = sub_1C32EA0();
          sub_1C32D48(v135, 0);
        }
      }
      if ( v99 >= reinforcementsSaveList[6] )
        goto LABEL_130;
      *(_QWORD *)&reinforcementsSaveList[v101] = v106;
      sub_1C32BC4((CGThumbnailListItem_o *)&reinforcementsSaveList[v101], (int32_t)v106, v107, v108);
      ++v99;
      v101 += 2;
      if ( v100 == v99 )
        goto LABEL_106;
    }
    goto LABEL_129;
  }
LABEL_106:
  v109 = v4->fields.serverData;
  if ( !v109 )
    goto LABEL_129;
  v110 = System_Linq_Enumerable__Count_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v109->fields.bossBattleInfo,
           (const MethodInfo_30FD778 *)Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___);
  v111 = *p_localSaveData;
  v112 = v110;
  this = (WarBoardData_o *)sub_1C32CC8(WarBoardBossBattleData_SaveData___TypeInfo, v110);
  if ( !v111 )
    goto LABEL_129;
  v111->fields.playedStageReinforcementsList = (struct System_Collections_Generic_List_int__o *)this;
  sub_1C32BC4((CGThumbnailListItem_o *)&v111->fields.playedStageReinforcementsList, (int32_t)this, v113, v114);
  this = *p_localSaveData;
  if ( v112 >= 1 )
  {
    v117 = 0;
    v118 = (unsigned int)v112;
    v119 = 32;
    while ( this )
    {
      v120 = v4->fields.serverData;
      if ( !v120 )
        break;
      bossBattleInfo = v120->fields.bossBattleInfo;
      if ( !bossBattleInfo )
        break;
      if ( v117 >= LODWORD(bossBattleInfo->max_length) )
        goto LABEL_130;
      playedStageReinforcementsList = this->fields.playedStageReinforcementsList;
      v123 = *(WarBoardBossBattleData_o **)((char *)&bossBattleInfo->obj.klass + v119);
      v124 = (WarBoardBossBattleData_SaveData_o *)sub_1C32E6C(WarBoardBossBattleData_SaveData_TypeInfo);
      WarBoardBossBattleData_SaveData___ctor_37825120(v124, v123, v125);
      if ( !playedStageReinforcementsList )
        break;
      if ( v124 )
      {
        this = (WarBoardData_o *)sub_1C32D5C(v124, playedStageReinforcementsList->klass->_1.element_class);
        if ( !this )
          goto LABEL_139;
      }
      if ( v117 >= (unsigned int)playedStageReinforcementsList->fields._size )
        goto LABEL_130;
      *(System_Collections_Generic_List_int__c **)((char *)&playedStageReinforcementsList->klass + v119) = (System_Collections_Generic_List_int__c *)v124;
      sub_1C32BC4((CGThumbnailListItem_o *)((char *)playedStageReinforcementsList + v119), (int32_t)v124, v126, v127);
      this = *p_localSaveData;
      ++v117;
      v119 += 8;
      if ( v118 == v117 )
        goto LABEL_119;
    }
    goto LABEL_129;
  }
LABEL_119:
  if ( !this )
    goto LABEL_129;
  bgAnimationInfo_k__BackingField = (struct System_Collections_Generic_List_WarBoardPrevCondData__o *)v4->fields._bgAnimationInfo_k__BackingField;
  this->fields.listPrevCond = bgAnimationInfo_k__BackingField;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.listPrevCond, (int32_t)bgAnimationInfo_k__BackingField, v115, v116);
  v129 = *p_localSaveData;
  if ( !*p_localSaveData )
    goto LABEL_129;
  v129->fields._CurrentMemberCount_k__BackingField = v4->fields._ContinueConsumeType_k__BackingField;
  LOBYTE(v129->fields._ContinueConsumeType_k__BackingField) = v4->fields._IsContinue_k__BackingField;
  BYTE1(v129->fields._ContinueConsumeType_k__BackingField) = v4->fields._IsNextTurn_k__BackingField;
  v129->fields._CurrentPartyCost_k__BackingField = v4->fields.localSaveTiming;
  v130 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C32E6C(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v130, 0);
  if ( !v130 )
    goto LABEL_129;
  v131 = MiniMessagePack_MiniMessagePacker__PackClass(v130, (Il2CppObject *)*p_localSaveData, 0);
  v132 = WarBoardData_TypeInfo;
  if ( !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    v132 = WarBoardData_TypeInfo;
  }
  WARBOARDDATA_SAVEDATA_KEY = v132->static_fields->WARBOARDDATA_SAVEDATA_KEY;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v134 = System_Convert__ToBase64String(v131, 0);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SetString(WARBOARDDATA_SAVEDATA_KEY, v134, 0);
}


void WarBoardData__SaveHoldReinforcements(
        WarBoardData_o *this,
        int32_t stageReinforcementsId,
        int32_t index,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass187_0_o *v7; // x20
  System_Collections_Generic_List_object__o *v8; // x0
  System_Collections_Generic_List_T__o *reinforcementsSaveList; // x21
  System_Func_object__bool__o *v10; // x22
  _BOOL8 v11; // x0
  int32_t v12; // w21
  int32_t v13; // w22
  HoldReinforcementsData_o *v14; // x20
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x8
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C35424 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_HoldReinforcementsData___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__get_Current__);
    sub_1C32C20(&System_Func_HoldReinforcementsData__bool__TypeInfo);
    sub_1C32C20(&HoldReinforcementsData_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_HoldReinforcementsData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass187_0__SaveHoldReinforcements_b__0__);
    sub_1C32C20(&WarBoardData___c__DisplayClass187_0_TypeInfo);
    byte_4C35424 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v7 = (WarBoardData___c__DisplayClass187_0_o *)sub_1C32E6C(WarBoardData___c__DisplayClass187_0_TypeInfo);
  WarBoardData___c__DisplayClass187_0___ctor(v7, 0);
  if ( !v7 )
    goto LABEL_20;
  v7->fields.stageReinforcementsId = stageReinforcementsId;
  v7->fields.index = index;
  reinforcementsSaveList = (System_Collections_Generic_List_T__o *)this->fields.reinforcementsSaveList;
  v10 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_HoldReinforcementsData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v7,
    Method_WarBoardData___c__DisplayClass187_0__SaveHoldReinforcements_b__0__,
    0);
  if ( !BasicHelper__Any_object_(
          reinforcementsSaveList,
          (System_Func_T__bool__o *)v10,
          (const MethodInfo_30C6790 *)Method_BasicHelper_Any_HoldReinforcementsData___) )
  {
    v12 = v7->fields.stageReinforcementsId;
    v13 = v7->fields.index;
    v14 = (HoldReinforcementsData_o *)sub_1C32E6C(HoldReinforcementsData_TypeInfo);
    HoldReinforcementsData___ctor_38065144(v14, v12, v13, 1, 0);
    v8 = (System_Collections_Generic_List_object__o *)this->fields.reinforcementsSaveList;
    if ( v8 )
    {
      items = v8->fields._items;
      v18 = Method_System_Collections_Generic_List_HoldReinforcementsData__Add__;
      ++v8->fields._version;
      if ( items )
      {
        size = v8->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            (Il2CppObject *)v14,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v14;
          sub_1C32BC4((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v14, v15, v16);
        }
        return;
      }
    }
LABEL_20:
    sub_1C32E7C(v8);
  }
  v8 = (System_Collections_Generic_List_object__o *)this->fields.reinforcementsSaveList;
  if ( !v8 )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    v8,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
  v22 = v21;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__);
    if ( !v11 )
      break;
    if ( !v22.fields._current )
      sub_1C32E7C(v11);
    if ( LODWORD(v22.fields._current[1].klass) == v7->fields.stageReinforcementsId
      && HIDWORD(v22.fields._current[1].klass) == v7->fields.index )
    {
      HoldReinforcementsData__IncreaseHoldNum((HoldReinforcementsData_o *)v22.fields._current, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
}


void WarBoardData__SavePlayReinforcements(
        WarBoardData_o *this,
        int32_t stageReinforcementsId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *playedStageReinforcementsList; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v7; // x9
  __int64 size; // x10

  if ( (byte_4C35422 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    byte_4C35422 = 1;
  }
  playedStageReinforcementsList = this->fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList
    || (items = playedStageReinforcementsList->fields._items,
        v7 = Method_System_Collections_Generic_List_int__Add__,
        ++playedStageReinforcementsList->fields._version,
        !items) )
  {
    sub_1C32E7C(playedStageReinforcementsList);
  }
  size = playedStageReinforcementsList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      playedStageReinforcementsList,
      stageReinforcementsId,
      *(const MethodInfo_377B798 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
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
  const MethodInfo *v10; // x2
  WarBoardSquareData_o *Square; // x0
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *v12; // x24
  WarBoardSquareData_o *v13; // x22
  System_Collections_Generic_List_object__o *v14; // x24
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Func_object__bool__o *v17; // x25
  System_Collections_Generic_List_object__o *v18; // x24
  int32_t v19; // w26
  WarBoardData_SquareRangeSearch_o *v20; // x25
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  struct System_Int32_array *linkedSquares; // x8
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v29; // x28
  __int64 v30; // x29
  __int64 v31; // x24
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  __int64 v34; // x23
  struct System_Int32_array *v35; // x8
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *v36; // x25
  System_Func_object__bool__o *v37; // x26
  const MethodInfo *v38; // x4
  System_Collections_Generic_List_T__o *v39; // x25
  System_Func_object__bool__o *v40; // x26
  struct System_Int32_array *v41; // x8

  if ( (byte_4C353FB & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_WarBoardData_SquareRangeSearch___);
    sub_1C32C20(&Method_System_Linq_Enumerable_All_WarBoardData_SquareRangeSearch___);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardData_SquareRangeSearch___);
    sub_1C32C20(&System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardData_SquareRangeSearch__TypeInfo);
    sub_1C32C20(&WarBoardData_SquareRangeSearch_TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass125_0__SearchInRangeSquares_b__0__);
    sub_1C32C20(&WarBoardData___c__DisplayClass125_0_TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__1__);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__2__);
    sub_1C32C20(&WarBoardData___c__DisplayClass125_1_TypeInfo);
    byte_4C353FB = 1;
  }
  v8 = (WarBoardData___c__DisplayClass125_0_o *)sub_1C32E6C(WarBoardData___c__DisplayClass125_0_TypeInfo);
  WarBoardData___c__DisplayClass125_0___ctor(v8, 0);
  if ( !v8 )
    goto LABEL_29;
  v8->fields.start = start;
  Square = WarBoardData__GetSquare(this, start, v10);
  if ( Square )
  {
    v12 = *rangeSearches;
    v13 = Square;
    if ( !*rangeSearches )
    {
      v14 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardData_SquareRangeSearch__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v14,
        (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch___ctor__);
      *rangeSearches = (System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *)v14;
      sub_1C32BC4((CGThumbnailListItem_o *)rangeSearches, (int32_t)v14, v15, v16);
      v12 = *rangeSearches;
    }
    v17 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v17,
      (Il2CppObject *)v8,
      Method_WarBoardData___c__DisplayClass125_0__SearchInRangeSquares_b__0__,
      0);
    v9 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
           (System_Collections_Generic_IEnumerable_TSource__o *)v12,
           (System_Func_TSource__bool__o *)v17,
           (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardData_SquareRangeSearch___);
    if ( v9 )
    {
      HIDWORD(v9[1].klass) = range;
    }
    else
    {
      v18 = (System_Collections_Generic_List_object__o *)*rangeSearches;
      v19 = v8->fields.start;
      v20 = (WarBoardData_SquareRangeSearch_o *)sub_1C32E6C(WarBoardData_SquareRangeSearch_TypeInfo);
      WarBoardData_SquareRangeSearch___ctor(v20, v19, range, 0);
      if ( !v18 )
        goto LABEL_29;
      items = v18->fields._items;
      v24 = Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch__Add__;
      ++v18->fields._version;
      if ( !items )
        goto LABEL_29;
      size = v18->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v18,
          (Il2CppObject *)v20,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = &items->obj.klass + size;
        v18->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v20;
        sub_1C32BC4((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v20, v21, v22);
      }
    }
    v8->fields.nextRange = range - 1;
    if ( range - 1 >= 0 )
    {
      linkedSquares = v13->fields.linkedSquares;
      if ( !linkedSquares )
        goto LABEL_29;
      max_length = linkedSquares->max_length;
      if ( (int)max_length >= 1 )
      {
        v29 = 0;
        v30 = (unsigned int)max_length;
        while ( 1 )
        {
          v31 = sub_1C32E6C(WarBoardData___c__DisplayClass125_1_TypeInfo);
          WarBoardData___c__DisplayClass125_1___ctor((WarBoardData___c__DisplayClass125_1_o *)v31, 0);
          if ( !v31 )
            break;
          *(_QWORD *)(v31 + 24) = v8;
          v34 = v31 + 24;
          sub_1C32BC4((CGThumbnailListItem_o *)(v31 + 24), (int32_t)v8, v32, v33);
          v35 = v13->fields.linkedSquares;
          if ( !v35 )
            break;
          if ( v29 >= LODWORD(v35->max_length) )
            goto LABEL_30;
          *(_DWORD *)(v31 + 16) = v35->m_Items[v29];
          v36 = *rangeSearches;
          v37 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v37,
            (Il2CppObject *)v31,
            Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__1__,
            0);
          v9 = (Il2CppObject *)System_Linq_Enumerable__All_object_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)v36,
                                 (System_Func_TSource__bool__o *)v37,
                                 (const MethodInfo_30E78A0 *)Method_System_Linq_Enumerable_All_WarBoardData_SquareRangeSearch___);
          if ( ((unsigned __int8)v9 & 1) != 0
            || (v39 = (System_Collections_Generic_List_T__o *)*rangeSearches,
                v40 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo),
                System_Func_object__bool____ctor(
                  v40,
                  (Il2CppObject *)v31,
                  Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__2__,
                  0),
                v9 = (Il2CppObject *)BasicHelper__Any_object_(
                                       v39,
                                       (System_Func_T__bool__o *)v40,
                                       (const MethodInfo_30C6790 *)Method_BasicHelper_Any_WarBoardData_SquareRangeSearch___),
                ((unsigned __int8)v9 & 1) != 0) )
          {
            v41 = v13->fields.linkedSquares;
            if ( !v41 )
              break;
            if ( v29 >= LODWORD(v41->max_length) )
LABEL_30:
              sub_1C32E84(v9);
            if ( !*(_QWORD *)v34 )
              break;
            WarBoardData__SearchInRangeSquares(
              this,
              v41->m_Items[v29],
              *(_DWORD *)(*(_QWORD *)v34 + 20LL),
              rangeSearches,
              v38);
          }
          if ( v30 == ++v29 )
            return;
        }
LABEL_29:
        sub_1C32E7C(v9);
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
  WarBoardPieceData_o *Piece_37788996; // x0
  System_Collections_Generic_HashSet_int__o *v11; // x23
  const MethodInfo *v12; // x2
  WarBoardSquareData_o *Square; // x0
  const MethodInfo *v14; // x2
  WarBoardSquareData_o *v15; // x24
  WarBoardPieceData_o *v16; // x25
  struct System_Int32_array *linkedSquares; // x24
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v19; // x25
  int32_t v20; // w22

  if ( (byte_4C353FC & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Queue_int__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_Queue_int__Dequeue__);
    sub_1C32C20(&Method_System_Collections_Generic_Queue_int__Enqueue__);
    sub_1C32C20(&Method_System_Collections_Generic_Queue_int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Queue_int__get_Count__);
    sub_1C32C20(&System_Collections_Generic_Queue_int__TypeInfo);
    byte_4C353FC = 1;
  }
  if ( destination != current )
  {
    v9 = (System_Collections_Generic_Queue_int__o *)sub_1C32E6C(System_Collections_Generic_Queue_int__TypeInfo);
    System_Collections_Generic_Queue_int____ctor(
      v9,
      (const MethodInfo_393E858 *)Method_System_Collections_Generic_Queue_int___ctor__);
    if ( !v9 )
LABEL_24:
      sub_1C32E7C(Piece_37788996);
    System_Collections_Generic_Queue_int___Enqueue(
      v9,
      destination,
      (const MethodInfo_393EDD0 *)Method_System_Collections_Generic_Queue_int__Enqueue__);
    v11 = (System_Collections_Generic_HashSet_int__o *)sub_1C32E6C(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v11,
      (const MethodInfo_3649220 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    if ( v9->fields._size >= 1 )
    {
      do
      {
        destination = System_Collections_Generic_Queue_int___Dequeue(
                        v9,
                        (const MethodInfo_393EF4C *)Method_System_Collections_Generic_Queue_int__Dequeue__);
        Square = WarBoardData__GetSquare(this, destination, v12);
        if ( !Square )
          break;
        v15 = Square;
        Piece_37788996 = WarBoardData__GetPiece_37788996(this, destination, v14);
        if ( !Piece_37788996 )
          return destination;
        if ( !checkReplaceFunc )
          goto LABEL_24;
        v16 = Piece_37788996;
        Piece_37788996 = (WarBoardPieceData_o *)((__int64 (__fastcall *)(intptr_t, WarBoardPieceData_o *, intptr_t))checkReplaceFunc->fields.invoke_impl)(
                                                  checkReplaceFunc->fields.method_code,
                                                  Piece_37788996,
                                                  checkReplaceFunc->fields.method);
        if ( ((unsigned __int8)Piece_37788996 & 1) != 0 )
        {
          WarBoardPieceData__SetSquareIndex(v16, -1, 0);
          return destination;
        }
        if ( !v11 )
          goto LABEL_24;
        Piece_37788996 = (WarBoardPieceData_o *)System_Collections_Generic_HashSet_int___Add(
                                                  v11,
                                                  destination,
                                                  (const MethodInfo_364A424 *)Method_System_Collections_Generic_HashSet_int__Add__);
        linkedSquares = v15->fields.linkedSquares;
        if ( !linkedSquares )
          goto LABEL_24;
        max_length = linkedSquares->max_length;
        if ( (int)max_length >= 1 )
        {
          v19 = 0;
          do
          {
            if ( v19 >= (unsigned int)max_length )
              sub_1C32E84(Piece_37788996);
            v20 = linkedSquares->m_Items[v19];
            Piece_37788996 = (WarBoardPieceData_o *)System_Collections_Generic_HashSet_int___Contains(
                                                      v11,
                                                      v20,
                                                      (const MethodInfo_3649914 *)Method_System_Collections_Generic_HashSet_int__Contains__);
            if ( ((unsigned __int8)Piece_37788996 & 1) == 0 )
            {
              Piece_37788996 = (WarBoardPieceData_o *)System_Collections_Generic_Queue_int___Contains(
                                                        v9,
                                                        v20,
                                                        (const MethodInfo_393F0D0 *)Method_System_Collections_Generic_Queue_int__Contains__);
              if ( ((unsigned __int8)Piece_37788996 & 1) == 0 )
                System_Collections_Generic_Queue_int___Enqueue(
                  v9,
                  v20,
                  (const MethodInfo_393EDD0 *)Method_System_Collections_Generic_Queue_int__Enqueue__);
            }
            LODWORD(max_length) = linkedSquares->max_length;
            ++v19;
          }
          while ( (__int64)v19 < (int)max_length );
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

  if ( (byte_4C3542F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    byte_4C3542F = 1;
  }
  bgAnimationInfo_k__BackingField = this->fields._bgAnimationInfo_k__BackingField;
  if ( !bgAnimationInfo_k__BackingField )
    sub_1C32E7C(0);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)bgAnimationInfo_k__BackingField,
    (Il2CppObject *)objectName,
    (Il2CppObject *)animName,
    (const MethodInfo_3458DB4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
}


void WarBoardData__SetContinue(WarBoardData_o *this, const MethodInfo *method)
{
  WarBoardPieceData_array *PlayerPieces; // x0
  WarBoardData___c_c *v4; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x20
  System_Func_object__int__o *_9__82_0; // x21
  Il2CppObject *v7; // x22
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  System_Object_array *v12; // x0
  WarBoardData___c_c *v13; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x20
  System_Func_object__object__o *_9__82_1; // x21
  Il2CppObject *v16; // x22
  struct WarBoardData___c_StaticFields *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_IEnumerable_T__o *v20; // x0
  System_Collections_Generic_IEnumerable_T__o *v21; // x0
  System_Object_array *v22; // x0
  WarBoardData___c_c *v23; // x8
  BattleServantData_array *v24; // x21
  System_Func_object__bool__o *_9__82_2; // x22
  Il2CppObject *v26; // x23
  struct WarBoardData___c_StaticFields *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  WarBoardData___c_c *v31; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x22
  System_Func_object__int__o *_9__82_3; // x23
  Il2CppObject *v34; // x24
  struct WarBoardData___c_StaticFields *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_Collections_Generic_IEnumerable_T__o *v38; // x23
  System_Collections_Generic_HashSet_int__o *v39; // x22
  BattleData_o *Instance; // x0
  WarBoardData___c_c *v41; // x0
  System_Action_object__o *_9__82_4; // x21
  Il2CppObject *v43; // x22
  struct WarBoardData___c_StaticFields *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct WarBoardItemData_array *items; // x19
  int max_length; // w8
  unsigned int v49; // w20

  if ( (byte_4C353DE & 1) == 0 )
  {
    sub_1C32C20(&System_Action_WarBoardPieceData__TypeInfo);
    sub_1C32C20(&Method_BasicHelper_ExcludeNull_BattleServantData___);
    sub_1C32C20(&Method_BasicHelper_ForEach_WarBoardPieceData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderBy_WarBoardPieceData__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__BattleServantData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C32C20(&System_Func_WarBoardPieceData__BattleServantData__TypeInfo);
    sub_1C32C20(&System_Func_WarBoardPieceData__int__TypeInfo);
    sub_1C32C20(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int___ctor___77989016);
    sub_1C32C20(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&Method_WarBoardData___c__SetContinue_b__82_0__);
    sub_1C32C20(&Method_WarBoardData___c__SetContinue_b__82_1__);
    sub_1C32C20(&Method_WarBoardData___c__SetContinue_b__82_2__);
    sub_1C32C20(&Method_WarBoardData___c__SetContinue_b__82_3__);
    sub_1C32C20(&Method_WarBoardData___c__SetContinue_b__82_4__);
    sub_1C32C20(&WarBoardData___c_TypeInfo);
    byte_4C353DE = 1;
  }
  PlayerPieces = WarBoardData__GetPlayerPieces(this, method);
  v4 = WarBoardData___c_TypeInfo;
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)PlayerPieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v4 = WarBoardData___c_TypeInfo;
  }
  _9__82_0 = (System_Func_object__int__o *)v4->static_fields->__9__82_0;
  if ( !_9__82_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = WarBoardData___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__82_0 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_WarBoardPieceData__int__TypeInfo);
    System_Func_object__int____ctor(_9__82_0, v7, Method_WarBoardData___c__SetContinue_b__82_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__82_0 = (struct System_Func_WarBoardPieceData__int__o *)_9__82_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__82_0, (int32_t)_9__82_0, v9, v10);
  }
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v5,
                                                               (System_Func_TSource__TKey__o *)_9__82_0,
                                                               (const MethodInfo_310CB44 *)Method_System_Linq_Enumerable_OrderBy_WarBoardPieceData__int___);
  v12 = System_Linq_Enumerable__ToArray_object_(
          v11,
          (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
  v13 = WarBoardData___c_TypeInfo;
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)v12;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v13 = WarBoardData___c_TypeInfo;
  }
  _9__82_1 = (System_Func_object__object__o *)v13->static_fields->__9__82_1;
  if ( !_9__82_1 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = WarBoardData___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__82_1 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_WarBoardPieceData__BattleServantData__TypeInfo);
    System_Func_object__object____ctor(_9__82_1, v16, Method_WarBoardData___c__SetContinue_b__82_1__, 0);
    v17 = WarBoardData___c_TypeInfo->static_fields;
    v17->__9__82_1 = (struct System_Func_WarBoardPieceData__BattleServantData__o *)_9__82_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&v17->__9__82_1, (int32_t)_9__82_1, v18, v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                         v14,
                                                         (System_Func_TSource__TResult__o *)_9__82_1,
                                                         (const MethodInfo_3113ABC *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__BattleServantData___);
  v21 = BasicHelper__ExcludeNull_object_(
          v20,
          (const MethodInfo_30C70E4 *)Method_BasicHelper_ExcludeNull_BattleServantData___);
  v22 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v21,
          (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  v23 = WarBoardData___c_TypeInfo;
  v24 = (BattleServantData_array *)v22;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v23 = WarBoardData___c_TypeInfo;
  }
  _9__82_2 = (System_Func_object__bool__o *)v23->static_fields->__9__82_2;
  if ( !_9__82_2 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = WarBoardData___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v23->static_fields->__9;
    _9__82_2 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__82_2, v26, Method_WarBoardData___c__SetContinue_b__82_2__, 0);
    v27 = WarBoardData___c_TypeInfo->static_fields;
    v27->__9__82_2 = (struct System_Func_WarBoardPieceData__bool__o *)_9__82_2;
    sub_1C32BC4((CGThumbnailListItem_o *)&v27->__9__82_2, (int32_t)_9__82_2, v28, v29);
  }
  v30 = System_Linq_Enumerable__Where_object_(
          v14,
          (System_Func_TSource__bool__o *)_9__82_2,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  v31 = WarBoardData___c_TypeInfo;
  v32 = v30;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v31 = WarBoardData___c_TypeInfo;
  }
  _9__82_3 = (System_Func_object__int__o *)v31->static_fields->__9__82_3;
  if ( !_9__82_3 )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = WarBoardData___c_TypeInfo;
    }
    v34 = (Il2CppObject *)v31->static_fields->__9;
    _9__82_3 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_WarBoardPieceData__int__TypeInfo);
    System_Func_object__int____ctor(_9__82_3, v34, Method_WarBoardData___c__SetContinue_b__82_3__, 0);
    v35 = WarBoardData___c_TypeInfo->static_fields;
    v35->__9__82_3 = (struct System_Func_WarBoardPieceData__int__o *)_9__82_3;
    sub_1C32BC4((CGThumbnailListItem_o *)&v35->__9__82_3, (int32_t)_9__82_3, v36, v37);
  }
  v38 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                         v32,
                                                         (System_Func_TSource__TResult__o *)_9__82_3,
                                                         (const MethodInfo_31131E0 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___);
  v39 = (System_Collections_Generic_HashSet_int__o *)sub_1C32E6C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_56922896(
    v39,
    v38,
    (const MethodInfo_3649310 *)Method_System_Collections_Generic_HashSet_int___ctor___77989016);
  Instance = (BattleData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (BattleData_o *)Instance->fields.commandCriticalArray;
  if ( !Instance )
    goto LABEL_42;
  BattleData__ProcContinue(Instance, v24, v39, 0);
  v41 = WarBoardData___c_TypeInfo;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v41 = WarBoardData___c_TypeInfo;
  }
  _9__82_4 = (System_Action_object__o *)v41->static_fields->__9__82_4;
  if ( !_9__82_4 )
  {
    if ( !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      v41 = WarBoardData___c_TypeInfo;
    }
    v43 = (Il2CppObject *)v41->static_fields->__9;
    _9__82_4 = (System_Action_object__o *)sub_1C32E6C(System_Action_WarBoardPieceData__TypeInfo);
    System_Action_object____ctor(_9__82_4, v43, Method_WarBoardData___c__SetContinue_b__82_4__, 0);
    v44 = WarBoardData___c_TypeInfo->static_fields;
    v44->__9__82_4 = (struct System_Action_WarBoardPieceData__o *)_9__82_4;
    sub_1C32BC4((CGThumbnailListItem_o *)&v44->__9__82_4, (int32_t)_9__82_4, v45, v46);
  }
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)v14,
    (System_Action_T__o *)_9__82_4,
    (const MethodInfo_30C93B0 *)Method_BasicHelper_ForEach_WarBoardPieceData___);
  items = this->fields.items;
  if ( !items )
    goto LABEL_42;
  max_length = items->max_length;
  if ( max_length >= 1 )
  {
    v49 = 0;
    while ( 1 )
    {
      if ( v49 >= max_length )
        sub_1C32E84(Instance);
      Instance = (BattleData_o *)items->m_Items[v49];
      if ( !Instance )
        break;
      WarBoardItemData__ResetItem((WarBoardItemData_o *)Instance, 0);
      max_length = items->max_length;
      if ( (int)++v49 >= max_length )
        return;
    }
LABEL_42:
    sub_1C32E7C(Instance);
  }
}


void WarBoardData__SetPlayerMasterUserEquip(WarBoardData_o *this, int64_t userEquipId, const MethodInfo *method)
{
  WarBoardData___c_c *v5; // x0
  System_Object_array *pieces; // x20
  System_Predicate_object__o *_9__144_0; // x21
  Il2CppObject *v8; // x22
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *object; // x0

  if ( (byte_4C35407 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Find_WarBoardPieceData___);
    sub_1C32C20(&System_Predicate_WarBoardPieceData__TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__SetPlayerMasterUserEquip_b__144_0__);
    sub_1C32C20(&WarBoardData___c_TypeInfo);
    byte_4C35407 = 1;
  }
  v5 = WarBoardData___c_TypeInfo;
  pieces = (System_Object_array *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v5 = WarBoardData___c_TypeInfo;
  }
  _9__144_0 = (System_Predicate_object__o *)v5->static_fields->__9__144_0;
  if ( !_9__144_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = WarBoardData___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__144_0 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_WarBoardPieceData__TypeInfo);
    System_Predicate_object____ctor(_9__144_0, v8, Method_WarBoardData___c__SetPlayerMasterUserEquip_b__144_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__144_0 = (struct System_Predicate_WarBoardPieceData__o *)_9__144_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__144_0, (int32_t)_9__144_0, v10, v11);
  }
  object = System_Array__Find_object_(
             pieces,
             (System_Predicate_T__o *)_9__144_0,
             (const MethodInfo_31E22DC *)Method_System_Array_Find_WarBoardPieceData___);
  if ( object )
    WarBoardPieceData__SetMasterEquip((WarBoardPieceData_o *)object, userEquipId, 0);
}


void WarBoardData__SetRequest(WarBoardData_o *this, RequestBase_o *request, const MethodInfo *method)
{
  WarBoardData___c_c *v5; // x0
  System_Collections_Generic_IEnumerable_T__o *pieces; // x21
  System_Action_object__o *_9__156_0; // x22
  Il2CppObject *v8; // x23
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *v12; // x0
  struct WarBoardDataEntity_o *serverData; // x8
  Il2CppObject *p_obj; // x21
  System_Byte_array *v15; // x21
  System_Byte_array *v16; // x21
  System_String_o *v17; // x0
  struct WarBoardDataEntity_o *v18; // x8
  Il2CppObject *v19; // x0
  System_Byte_array *v20; // x0
  System_Byte_array *v21; // x0
  System_String_o *v22; // x0
  System_Collections_Generic_IEnumerable_TSource__o *items; // x23
  WarBoardData___c_c *v24; // x0
  System_String_o *v25; // x22
  System_String_o *v26; // x21
  System_Func_object__object__o *_9__156_1; // x24
  System_Byte_array *v28; // x21
  System_Byte_array *v29; // x0
  System_Convert_c *v30; // x8
  System_Byte_array *v31; // x21
  Il2CppObject *v32; // x25
  struct WarBoardData___c_StaticFields *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v36; // x0
  WarBoardData___c_c *v37; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x23
  System_Func_object__bool__o *_9__156_2; // x24
  Il2CppObject *v40; // x25
  struct WarBoardData___c_StaticFields *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  System_String_array *v45; // x0
  Il2CppObject *v46; // x0
  Il2CppObject *v47; // x0
  System_Byte_array *v48; // x21
  System_Byte_array *v49; // x0
  System_String_o *v50; // x0
  struct WarBoardDataEntity_o *v51; // x8
  Il2CppObject *v52; // x21
  Il2CppObject *v53; // x0
  System_Byte_array *v54; // x21
  System_Byte_array *v55; // x21
  System_String_o *v56; // x0
  struct WarBoardDataEntity_o *v57; // x8
  Il2CppObject *v58; // x0
  System_Byte_array *v59; // x0
  System_Byte_array *v60; // x0
  System_String_o *v61; // x0
  struct WarBoardDataEntity_o *v62; // x8
  Il2CppObject *v63; // x0
  System_Byte_array *v64; // x0
  System_Byte_array *v65; // x0
  System_String_o *v66; // x2

  if ( (byte_4C35410 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_WarBoardPieceData__TypeInfo);
    sub_1C32C20(&Method_BasicHelper_ForEach_WarBoardPieceData___);
    sub_1C32C20(&CatAndMouseGame_TypeInfo);
    sub_1C32C20(&System_Convert_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_WarBoardItemData__string___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_string___);
    sub_1C32C20(&System_Func_WarBoardItemData__string__TypeInfo);
    sub_1C32C20(&System_Func_string__bool__TypeInfo);
    sub_1C32C20(&JsonManager_TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__SetRequest_b__156_0__);
    sub_1C32C20(&Method_WarBoardData___c__SetRequest_b__156_1__);
    sub_1C32C20(&Method_WarBoardData___c__SetRequest_b__156_2__);
    sub_1C32C20(&WarBoardData___c_TypeInfo);
    sub_1C32C20(&StringLiteral_17350/*"bossBattleInfo"*/);
    sub_1C32C20(&StringLiteral_23866/*"svtInfo"*/);
    sub_1C32C20(&StringLiteral_21451/*"masterInfo"*/);
    sub_1C32C20(&StringLiteral_24719/*"wallInfo"*/);
    sub_1C32C20(&StringLiteral_22332/*"null"*/);
    sub_1C32C20(&StringLiteral_23624/*"squareIndexInfo"*/);
    sub_1C32C20(&StringLiteral_19798/*"getItemInfo"*/);
    sub_1C32C20(&StringLiteral_811/*","*/);
    sub_1C32C20(&StringLiteral_16014/*"[{0}]"*/);
    byte_4C35410 = 1;
  }
  v5 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_T__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v5 = WarBoardData___c_TypeInfo;
  }
  _9__156_0 = (System_Action_object__o *)v5->static_fields->__9__156_0;
  if ( !_9__156_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = WarBoardData___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__156_0 = (System_Action_object__o *)sub_1C32E6C(System_Action_WarBoardPieceData__TypeInfo);
    System_Action_object____ctor(_9__156_0, v8, Method_WarBoardData___c__SetRequest_b__156_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__156_0 = (struct System_Action_WarBoardPieceData__o *)_9__156_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__156_0, (int32_t)_9__156_0, v10, v11);
  }
  BasicHelper__ForEach_object_(
    pieces,
    (System_Action_T__o *)_9__156_0,
    (const MethodInfo_30C93B0 *)Method_BasicHelper_ForEach_WarBoardPieceData___);
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_51;
  p_obj = &serverData->fields.svtInfo->obj;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v12 = (Il2CppObject *)JsonManager__toJson(p_obj, 0, 0, 0);
  if ( !request )
    goto LABEL_51;
  v15 = RequestBase__PackToMessagePack(request, v12, 0);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v16 = CatAndMouseGame__CatGame5Bytes(v15, 0);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v17 = System_Convert__ToBase64String(v16, 0);
  RequestBase__addField_44145196(request, (System_String_o *)StringLiteral_23866/*"svtInfo"*/, v17, 0);
  v18 = this->fields.serverData;
  if ( !v18
    || (v19 = (Il2CppObject *)JsonManager__toJson(&v18->fields.masterInfo->obj, 0, 0, 0),
        v20 = RequestBase__PackToMessagePack(request, v19, 0),
        v21 = CatAndMouseGame__CatGame5Bytes(v20, 0),
        v22 = System_Convert__ToBase64String(v21, 0),
        RequestBase__addField_44145196(request, (System_String_o *)StringLiteral_21451/*"masterInfo"*/, v22, 0),
        (items = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.items) == 0) )
  {
LABEL_51:
    sub_1C32E7C(v12);
  }
  if ( items[1].monitor )
  {
    v24 = WarBoardData___c_TypeInfo;
    if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
      v24 = WarBoardData___c_TypeInfo;
    }
    v25 = (System_String_o *)StringLiteral_811/*","*/;
    v26 = (System_String_o *)StringLiteral_16014/*"[{0}]"*/;
    _9__156_1 = (System_Func_object__object__o *)v24->static_fields->__9__156_1;
    if ( !_9__156_1 )
    {
      if ( !v24->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v24);
        v24 = WarBoardData___c_TypeInfo;
      }
      v32 = (Il2CppObject *)v24->static_fields->__9;
      _9__156_1 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_WarBoardItemData__string__TypeInfo);
      System_Func_object__object____ctor(_9__156_1, v32, Method_WarBoardData___c__SetRequest_b__156_1__, 0);
      v33 = WarBoardData___c_TypeInfo->static_fields;
      v33->__9__156_1 = (struct System_Func_WarBoardItemData__string__o *)_9__156_1;
      sub_1C32BC4((CGThumbnailListItem_o *)&v33->__9__156_1, (int32_t)_9__156_1, v34, v35);
    }
    v36 = System_Linq_Enumerable__Select_object__object_(
            items,
            (System_Func_TSource__TResult__o *)_9__156_1,
            (const MethodInfo_3113ABC *)Method_System_Linq_Enumerable_Select_WarBoardItemData__string___);
    v37 = WarBoardData___c_TypeInfo;
    v38 = (System_Collections_Generic_IEnumerable_TSource__o *)v36;
    if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
      v37 = WarBoardData___c_TypeInfo;
    }
    _9__156_2 = (System_Func_object__bool__o *)v37->static_fields->__9__156_2;
    if ( !_9__156_2 )
    {
      if ( !v37->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v37);
        v37 = WarBoardData___c_TypeInfo;
      }
      v40 = (Il2CppObject *)v37->static_fields->__9;
      _9__156_2 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_string__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__156_2, v40, Method_WarBoardData___c__SetRequest_b__156_2__, 0);
      v41 = WarBoardData___c_TypeInfo->static_fields;
      v41->__9__156_2 = (struct System_Func_string__bool__o *)_9__156_2;
      sub_1C32BC4((CGThumbnailListItem_o *)&v41->__9__156_2, (int32_t)_9__156_2, v42, v43);
    }
    v44 = System_Linq_Enumerable__Where_object_(
            v38,
            (System_Func_TSource__bool__o *)_9__156_2,
            (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_string___);
    v45 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                   v44,
                                   (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_string___);
    v46 = (Il2CppObject *)System_String__Join(v25, v45, 0);
    v47 = (Il2CppObject *)System_String__Format(v26, v46, 0);
    v48 = RequestBase__PackToMessagePack(request, v47, 0);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v49 = CatAndMouseGame__CatGame5Bytes(v48, 0);
    v30 = System_Convert_TypeInfo;
    v31 = v49;
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
LABEL_40:
      j_il2cpp_runtime_class_init_0(v30);
  }
  else
  {
    v28 = RequestBase__PackToMessagePack(request, (Il2CppObject *)StringLiteral_22332/*"null"*/, 0);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v29 = CatAndMouseGame__CatGame5Bytes(v28, 0);
    v30 = System_Convert_TypeInfo;
    v31 = v29;
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      goto LABEL_40;
  }
  v50 = System_Convert__ToBase64String(v31, 0);
  RequestBase__addField_44145196(request, (System_String_o *)StringLiteral_19798/*"getItemInfo"*/, v50, 0);
  v51 = this->fields.serverData;
  if ( !v51 )
    goto LABEL_51;
  v52 = &v51->fields.wallInfo->obj;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v53 = (Il2CppObject *)JsonManager__toJson(v52, 0, 0, 0);
  v54 = RequestBase__PackToMessagePack(request, v53, 0);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v55 = CatAndMouseGame__CatGame5Bytes(v54, 0);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v56 = System_Convert__ToBase64String(v55, 0);
  RequestBase__addField_44145196(request, (System_String_o *)StringLiteral_24719/*"wallInfo"*/, v56, 0);
  v57 = this->fields.serverData;
  if ( !v57 )
    goto LABEL_51;
  v58 = (Il2CppObject *)JsonManager__toJson(&v57->fields.squareIndexInfo->obj, 0, 0, 0);
  v59 = RequestBase__PackToMessagePack(request, v58, 0);
  v60 = CatAndMouseGame__CatGame5Bytes(v59, 0);
  v61 = System_Convert__ToBase64String(v60, 0);
  RequestBase__addField_44145196(request, (System_String_o *)StringLiteral_23624/*"squareIndexInfo"*/, v61, 0);
  v62 = this->fields.serverData;
  if ( !v62 )
    goto LABEL_51;
  v63 = (Il2CppObject *)JsonManager__toJson(&v62->fields.bossBattleInfo->obj, 0, 0, 0);
  v64 = RequestBase__PackToMessagePack(request, v63, 0);
  v65 = CatAndMouseGame__CatGame5Bytes(v64, 0);
  v66 = System_Convert__ToBase64String(v65, 0);
  RequestBase__addField_44145196(request, (System_String_o *)StringLiteral_17350/*"bossBattleInfo"*/, v66, 0);
}


void WarBoardData__SetUiDataFromLocalData(WarBoardData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *listUiData; // x0
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x5
  Il2CppObject *current; // x25
  int32_t klass; // w1
  WarBoardSquareData_o *Square; // x0
  void *pieceComponent; // x8
  _DWORD *monitor; // x8
  unsigned int v12; // w9
  WarBoardPieceData_o *Piece; // x0
  UnityEngine_Object_o *v14; // x20
  _BOOL8 v15; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C3542E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&WarBoardControlUiDataComponent_TypeInfo);
    byte_4C3542E = 1;
  }
  memset(&v17, 0, sizeof(v17));
  listUiData = (System_Collections_Generic_List_object__o *)this->fields.listUiData;
  if ( !listUiData )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    listUiData,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__);
  v17 = v16;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v17,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__);
    if ( !v4 )
      break;
    current = v17.fields._current;
    if ( !v17.fields._current )
      sub_1C32E7C(v4);
    klass = (int32_t)v17.fields._current[1].klass;
    if ( klass < 0 )
    {
      monitor = v17.fields._current[1].monitor;
      if ( !monitor )
        sub_1C32E7C(v4);
      v12 = monitor[6];
      if ( !v12 )
        sub_1C32E84(v4);
      if ( v12 == 1 )
        sub_1C32E84(v4);
      if ( v12 <= 2 )
        sub_1C32E84(v4);
      Piece = WarBoardData__GetPiece(this, monitor[8], monitor[9], monitor[10], 1, v6);
      if ( Piece )
      {
        pieceComponent = Piece->fields.pieceComponent;
        if ( !pieceComponent )
          sub_1C32E7C(Piece);
LABEL_17:
        v14 = (UnityEngine_Object_o *)*((_QWORD *)pieceComponent + 23);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v15 = UnityEngine_Object__op_Equality(v14, 0, 0);
        if ( !v15 )
        {
          if ( !v14 )
            sub_1C32E7C(v15);
          WarBoardControlUiDataComponent__SetUiDataFromLocalData(
            (WarBoardControlUiDataComponent_o *)v14,
            (System_String_array *)current[2].klass,
            0);
        }
      }
    }
    else
    {
      Square = WarBoardData__GetSquare(this, klass, v5);
      if ( Square )
      {
        pieceComponent = Square->fields.squareComponent;
        if ( !pieceComponent )
          sub_1C32E7C(Square);
        goto LABEL_17;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__);
  if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  WarBoardControlUiDataComponent__ResumeUiDataAll(0);
}


void WarBoardData__ShowConsumedPieceActionPointPopup(
        WarBoardData_o *this,
        System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___o *consumedPieceActionPointDict,
        const MethodInfo *method)
{
  __int64 v5; // x19
  System_Collections_Generic_Dictionary_int__object__o *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Func_bool__o *v11; // x20
  UnityEngine_WaitUntil_o *v12; // x21
  __int64 v13; // x20
  System_Delegate_o **v14; // x21
  System_Delegate_o *v15; // x22
  WarBoardTaskBase_TaskCallback_o *v16; // x23
  System_Delegate_o *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  WarBoardTaskBase_TaskCallback_c *v20; // x1
  Il2CppObject *Instance; // x19
  System_Collections_Generic_Dictionary_int__object__o *v22; // x21
  __int64 v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  __int64 v26; // x0

  if ( (byte_4C3540E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__);
    sub_1C32C20(&System_Func_bool__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__0__);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__1__);
    sub_1C32C20(&WarBoardData___c__DisplayClass154_0_TypeInfo);
    sub_1C32C20(&UnityEngine_WaitUntil_TypeInfo);
    sub_1C32C20(&WarBoardCallbackTask_TypeInfo);
    sub_1C32C20(&WarBoardTaskBase___TypeInfo);
    byte_4C3540E = 1;
  }
  v5 = sub_1C32E6C(WarBoardData___c__DisplayClass154_0_TypeInfo);
  WarBoardData___c__DisplayClass154_0___ctor((WarBoardData___c__DisplayClass154_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_18;
  *(_QWORD *)(v5 + 24) = consumedPieceActionPointDict;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)consumedPieceActionPointDict, v7, v8);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v9, v10);
  v6 = *(System_Collections_Generic_Dictionary_int__object__o **)(v5 + 24);
  if ( !v6 )
    goto LABEL_18;
  if ( System_Collections_Generic_Dictionary_int__object___get_Count(
         v6,
         (const MethodInfo_33EF9CC *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__) < 1 )
    return;
  *(_BYTE *)(v5 + 16) = 0;
  v11 = (System_Func_bool__o *)sub_1C32E6C(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__0__,
    0);
  v12 = (UnityEngine_WaitUntil_o *)sub_1C32E6C(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v12, v11, 0);
  v13 = sub_1C32E6C(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v13, (UnityEngine_CustomYieldInstruction_o *)v12, 0);
  if ( !v13 )
LABEL_18:
    sub_1C32E7C(v6);
  v14 = (System_Delegate_o **)(v13 + 32);
  v15 = *(System_Delegate_o **)(v13 + 32);
  v16 = (WarBoardTaskBase_TaskCallback_o *)sub_1C32E6C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v16,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__1__,
    0);
  v17 = System_Delegate__Combine(v15, (System_Delegate_o *)v16, 0);
  if ( !v17 )
  {
    *v14 = 0;
LABEL_13:
    sub_1C32BC4((CGThumbnailListItem_o *)(v13 + 32), (int32_t)v17, v18, v19);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v6 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32CC8(WarBoardTaskBase___TypeInfo, 1);
    if ( v6 )
    {
      v22 = v6;
      v23 = sub_1C32D5C(v13, v6->klass->_1.element_class);
      if ( !v23 )
      {
        v26 = sub_1C32EA0();
        sub_1C32D48(v26, 0);
      }
      if ( !LODWORD(v22->fields._entries) )
        sub_1C32E84(v23);
      *(_QWORD *)&v22->fields._count = v13;
      sub_1C32BC4((CGThumbnailListItem_o *)&v22->fields._count, v13, v24, v25);
      if ( Instance )
      {
        WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 1, (WarBoardTaskBase_array *)v22, 0);
        return;
      }
    }
    goto LABEL_18;
  }
  v20 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v17->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    *v14 = v17;
    if ( (WarBoardTaskBase_TaskCallback_c *)v17->klass == v20 )
      goto LABEL_13;
  }
  sub_1C3313C(v17);
}


System_String_o *WarBoardData__ToJson(WarBoardData_o *this, const MethodInfo *method)
{
  Il2CppObject *serverData; // x19

  if ( (byte_4C3540F & 1) == 0 )
  {
    sub_1C32C20(&JsonManager_TypeInfo);
    sub_1C32C20(&string_TypeInfo);
    byte_4C3540F = 1;
  }
  serverData = (Il2CppObject *)this->fields.serverData;
  if ( !serverData )
    return string_TypeInfo->static_fields->Empty;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
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
  struct WarBoardDataEntity_o *serverData; // x8
  System_Object_array *bossBattleInfo; // x21
  System_Func_object__bool__o *v13; // x22
  Il2CppObject *object; // x0
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x5
  __int64 v19; // x6
  __int64 v20; // x7
  System_Collections_Generic_Dictionary_object__object__o *monitor; // x21
  int32_t v22; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C35417 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Find_WarBoardBossBattleData___);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_1C32C20(&System_Func_WarBoardBossBattleData__bool__TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass171_0__UpdateBossInfo_b__0__);
    sub_1C32C20(&WarBoardData___c__DisplayClass171_0_TypeInfo);
    byte_4C35417 = 1;
  }
  v9 = (WarBoardData___c__DisplayClass171_0_o *)sub_1C32E6C(WarBoardData___c__DisplayClass171_0_TypeInfo);
  WarBoardData___c__DisplayClass171_0___ctor(v9, 0);
  if ( !v9 )
    goto LABEL_9;
  v9->fields.bossId = bossId;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_9;
  bossBattleInfo = (System_Object_array *)serverData->fields.bossBattleInfo;
  v13 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardBossBattleData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass171_0__UpdateBossInfo_b__0__,
    0);
  object = BasicHelper__Find_object_(
             bossBattleInfo,
             (System_Func_T__bool__o *)v13,
             (const MethodInfo_30C735C *)Method_BasicHelper_Find_WarBoardBossBattleData___);
  if ( !object )
    return;
  monitor = (System_Collections_Generic_Dictionary_object__object__o *)object[1].monitor;
  v22 = value;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v15, v16, v17, v18, v19, v20);
  if ( !monitor )
LABEL_9:
    sub_1C32E7C(v10);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    monitor,
    (Il2CppObject *)key,
    v10,
    (const MethodInfo_3458DB4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
}


void WarBoardData__UpdateBuffTurnNoticeDisp(WarBoardData_o *this, const MethodInfo *method)
{
  WarBoardData___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__object__o *_9__192_0; // x20
  Il2CppObject *v6; // x21
  CGThumbnailListItem_o *p__9__192_0; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v10; // x0
  WarBoardData___c_c *v11; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x19
  System_Func_object__bool__o *_9__192_1; // x20
  Il2CppObject *v14; // x21
  CGThumbnailListItem_o *p__9__192_1; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  WarBoardData___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_T__o *v20; // x19
  System_Action_object__o *_9__192_2; // x20
  Il2CppObject *v22; // x21
  CGThumbnailListItem_o *p__9__192_2; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3

  if ( (byte_4C35429 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_WarBoardPieceBaseComponent__TypeInfo);
    sub_1C32C20(&Method_BasicHelper_ForEach_WarBoardPieceBaseComponent___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__WarBoardPieceBaseComponent___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_WarBoardPieceBaseComponent___);
    sub_1C32C20(&System_Func_WarBoardPieceBaseComponent__bool__TypeInfo);
    sub_1C32C20(&System_Func_WarBoardPieceData__WarBoardPieceBaseComponent__TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_0__);
    sub_1C32C20(&Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_1__);
    sub_1C32C20(&Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_2__);
    sub_1C32C20(&WarBoardData___c_TypeInfo);
    byte_4C35429 = 1;
  }
  v3 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v3 = WarBoardData___c_TypeInfo;
  }
  _9__192_0 = (System_Func_object__object__o *)v3->static_fields->__9__192_0;
  if ( !_9__192_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = WarBoardData___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__192_0 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_WarBoardPieceData__WarBoardPieceBaseComponent__TypeInfo);
    System_Func_object__object____ctor(_9__192_0, v6, Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_0__, 0);
    p__9__192_0 = (CGThumbnailListItem_o *)&WarBoardData___c_TypeInfo->static_fields->__9__192_0;
    p__9__192_0->klass = (CGThumbnailListItem_c *)_9__192_0;
    sub_1C32BC4(p__9__192_0, (int32_t)_9__192_0, v8, v9);
  }
  v10 = System_Linq_Enumerable__Select_object__object_(
          pieces,
          (System_Func_TSource__TResult__o *)_9__192_0,
          (const MethodInfo_3113ABC *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__WarBoardPieceBaseComponent___);
  v11 = WarBoardData___c_TypeInfo;
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)v10;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v11 = WarBoardData___c_TypeInfo;
  }
  _9__192_1 = (System_Func_object__bool__o *)v11->static_fields->__9__192_1;
  if ( !_9__192_1 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = WarBoardData___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__192_1 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardPieceBaseComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__192_1, v14, Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_1__, 0);
    p__9__192_1 = (CGThumbnailListItem_o *)&WarBoardData___c_TypeInfo->static_fields->__9__192_1;
    p__9__192_1->klass = (CGThumbnailListItem_c *)_9__192_1;
    sub_1C32BC4(p__9__192_1, (int32_t)_9__192_1, v16, v17);
  }
  v18 = System_Linq_Enumerable__Where_object_(
          v12,
          (System_Func_TSource__bool__o *)_9__192_1,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_WarBoardPieceBaseComponent___);
  v19 = WarBoardData___c_TypeInfo;
  v20 = (System_Collections_Generic_IEnumerable_T__o *)v18;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v19 = WarBoardData___c_TypeInfo;
  }
  _9__192_2 = (System_Action_object__o *)v19->static_fields->__9__192_2;
  if ( !_9__192_2 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = WarBoardData___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__192_2 = (System_Action_object__o *)sub_1C32E6C(System_Action_WarBoardPieceBaseComponent__TypeInfo);
    System_Action_object____ctor(_9__192_2, v22, Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_2__, 0);
    p__9__192_2 = (CGThumbnailListItem_o *)&WarBoardData___c_TypeInfo->static_fields->__9__192_2;
    p__9__192_2->klass = (CGThumbnailListItem_c *)_9__192_2;
    sub_1C32BC4(p__9__192_2, (int32_t)_9__192_2, v24, v25);
  }
  BasicHelper__ForEach_object_(
    v20,
    (System_Action_T__o *)_9__192_2,
    (const MethodInfo_30C93B0 *)Method_BasicHelper_ForEach_WarBoardPieceBaseComponent___);
}


void WarBoardData__UpdateCurrentPartyCost(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  System_Collections_Generic_List_long__o *v4; // x21
  const MethodInfo *v5; // x1
  WarBoardPieceData_array *EditableServantPieces; // x0
  long double v7; // q0
  int max_length; // w8
  WarBoardPieceData_array *v9; // x22
  unsigned int v10; // w23
  WarBoardPieceData_o *v11; // x25
  int32_t version; // w11
  int64_t UserServantId_k__BackingField; // x1
  struct System_Int64_array *items; // x9
  _QWORD *v15; // x8
  __int64 size; // x12
  int32_t v17; // w10
  int64_t UserServantEquipId_k__BackingField; // x1
  __int64 v19; // x0
  __int64 v20; // x0
  UserServantEntity_array *Entities_43139768; // x0
  WarBoardData___c_c *v22; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x21
  System_Func_object__int__o *_9__143_0; // x22
  Il2CppObject *v25; // x23
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Func_object__bool__o *v31; // x22

  if ( (byte_4C35406 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Count_UserServantEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Sum_UserServantEntity___);
    sub_1C32C20(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1C32C20(&System_Func_UserServantEntity__int__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_WarBoardData___c__UpdateCurrentPartyCost_b__143_0__);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass143_0__UpdateCurrentPartyCost_b__1__);
    sub_1C32C20(&WarBoardData___c__DisplayClass143_0_TypeInfo);
    sub_1C32C20(&WarBoardData___c_TypeInfo);
    byte_4C35406 = 1;
  }
  v3 = sub_1C32E6C(WarBoardData___c__DisplayClass143_0_TypeInfo);
  WarBoardData___c__DisplayClass143_0___ctor((WarBoardData___c__DisplayClass143_0_o *)v3, 0);
  v4 = (System_Collections_Generic_List_long__o *)sub_1C32E6C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v4,
    (const MethodInfo_377FF9C *)Method_System_Collections_Generic_List_long___ctor__);
  EditableServantPieces = WarBoardData__GetEditableServantPieces(this, v5);
  if ( !EditableServantPieces )
    goto LABEL_33;
  max_length = EditableServantPieces->max_length;
  v9 = EditableServantPieces;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
        sub_1C32E84(EditableServantPieces);
      v11 = v9->m_Items[v10];
      if ( !v11 )
        break;
      if ( !v4 )
        break;
      version = v4->fields._version;
      UserServantId_k__BackingField = v11->fields._UserServantId_k__BackingField;
      items = v4->fields._items;
      v15 = Method_System_Collections_Generic_List_long__Add__;
      v4->fields._version = version + 1;
      if ( !items )
        break;
      size = v4->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v4,
          UserServantId_k__BackingField,
          *(const MethodInfo_37807F0 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        v17 = v4->fields._size;
        v15 = Method_System_Collections_Generic_List_long__Add__;
        items = v4->fields._items;
        UserServantEquipId_k__BackingField = v11->fields._UserServantEquipId_k__BackingField;
        ++v4->fields._version;
        if ( !items )
          break;
      }
      else
      {
        v17 = size + 1;
        v4->fields._size = size + 1;
        items->m_Items[size] = UserServantId_k__BackingField;
        UserServantEquipId_k__BackingField = v11->fields._UserServantEquipId_k__BackingField;
        v4->fields._version = version + 2;
      }
      if ( (unsigned int)v17 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v4,
          UserServantEquipId_k__BackingField,
          *(const MethodInfo_37807F0 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v4->fields._size = v17 + 1;
        items->m_Items[v17] = UserServantEquipId_k__BackingField;
      }
      max_length = v9->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_17;
    }
LABEL_33:
    sub_1C32E7C(EditableServantPieces);
  }
LABEL_17:
  v19 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
    v19 = sub_1C83334(v7);
  v20 = *(_QWORD *)(*(_QWORD *)(v19 + 192) + 16LL);
  if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    v20 = sub_1C83334(v7);
  EditableServantPieces = **(WarBoardPieceData_array ***)(v20 + 184);
  if ( !EditableServantPieces )
    goto LABEL_33;
  EditableServantPieces = (WarBoardPieceData_array *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)EditableServantPieces,
                                                       (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !EditableServantPieces )
    goto LABEL_33;
  Entities_43139768 = UserServantMaster__GetEntities_43139768((UserServantMaster_o *)EditableServantPieces, v4, 0);
  v22 = WarBoardData___c_TypeInfo;
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)Entities_43139768;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v22 = WarBoardData___c_TypeInfo;
  }
  _9__143_0 = (System_Func_object__int__o *)v22->static_fields->__9__143_0;
  if ( !_9__143_0 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = WarBoardData___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v22->static_fields->__9;
    _9__143_0 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_UserServantEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__143_0, v25, Method_WarBoardData___c__UpdateCurrentPartyCost_b__143_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__143_0 = (struct System_Func_UserServantEntity__int__o *)_9__143_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__143_0, (int32_t)_9__143_0, v27, v28);
  }
  EditableServantPieces = (WarBoardPieceData_array *)System_Linq_Enumerable__Sum_object_(
                                                       v23,
                                                       (System_Func_TSource__int__o *)_9__143_0,
                                                       (const MethodInfo_311B144 *)Method_System_Linq_Enumerable_Sum_UserServantEntity___);
  if ( !this )
    goto LABEL_33;
  this->fields._CurrentPartyCost_k__BackingField = (int)EditableServantPieces;
  EditableServantPieces = (WarBoardPieceData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !EditableServantPieces )
    goto LABEL_33;
  EditableServantPieces = (WarBoardPieceData_array *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)EditableServantPieces,
                                                       (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !v3 )
    goto LABEL_33;
  *(_QWORD *)(v3 + 16) = EditableServantPieces;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 16), (int32_t)EditableServantPieces, v29, v30);
  v31 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v31,
    (Il2CppObject *)v3,
    Method_WarBoardData___c__DisplayClass143_0__UpdateCurrentPartyCost_b__1__,
    0);
  this->fields._CurrentMemberCount_k__BackingField = System_Linq_Enumerable__Count_object__51376204(
                                                       v23,
                                                       (System_Func_TSource__bool__o *)v31,
                                                       (const MethodInfo_30FF04C *)Method_System_Linq_Enumerable_Count_UserServantEntity___);
}


void WarBoardData__UpdateFromServerData(
        WarBoardData_o *this,
        WarBoardDataEntity_o *warBoardDataEntity,
        bool forceUpdate,
        const MethodInfo *method)
{
  WarBoardDataEntity_o **p_serverData; // x21
  WarBoardManager_TaskMultiList_o *v7; // x24
  WarBoardManager_TaskMultiList_o *v8; // x23
  System_Collections_Generic_Dictionary_int__object__o *v9; // x20
  System_Collections_Generic_List_object__o *v10; // x26
  System_Collections_Generic_List_object__o *isPlayerGroup; // x0
  struct WarBoardPieceData_array *pieces; // x25
  int max_length; // w8
  unsigned int v14; // w19
  bool v15; // w27
  WarBoardPieceData_o *v16; // x28
  WarBoardManager_TaskList_o *v17; // x29
  char v18; // w2
  const MethodInfo *v19; // x3
  struct WarBoardManager_TaskList_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  struct WarBoardManager_TaskList_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  __int64 v27; // x8
  System_Collections_Generic_List_object__o *v28; // x0
  int32_t ConsumedRecoverDonotActCost_k__BackingField; // w29
  System_Collections_Generic_Dictionary_int__object__o *v30; // x21
  System_Collections_Generic_List_object__o *v31; // x20
  System_Collections_Generic_Dictionary_int__object__o *v32; // x0
  Il2CppObject *v33; // x2
  char v34; // w2
  const MethodInfo *v35; // x3
  struct System_Object_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  Il2CppClass **v39; // x8
  Il2CppObject *current; // x28
  WarBoardManager_TaskList_o *v41; // x26
  __int64 v42; // x0
  int monitor; // w25
  Il2CppClass *v44; // x0
  __int64 v45; // x0
  char v46; // w2
  const MethodInfo *v47; // x3
  int monitor_high; // w27
  Il2CppClass *klass; // x0
  Il2CppClass *v50; // x0
  struct WarBoardManager_TaskList_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  Il2CppClass **v54; // x0
  struct WarBoardManager_TaskList_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x0
  const MethodInfo *v59; // x2
  System_Collections_Generic_IEnumerable_T__o *v60; // x0
  const MethodInfo *v61; // x1
  char v62; // w2
  const MethodInfo *v63; // x3
  struct System_Object_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  System_Collections_Generic_List_object__o *v67; // x1
  Il2CppClass **v68; // x0
  WarBoardWaitNonBlockingTaskEnd_o *v69; // x23
  char v70; // w2
  const MethodInfo *v71; // x3
  struct System_Object_array *v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  Il2CppClass **v75; // x0
  struct WarBoardItemData_array *v76; // x19
  int v77; // w8
  unsigned int v78; // w20
  struct WarBoardWallData_array *walls; // x19
  unsigned __int64 v80; // x24
  __int64 v81; // x20
  char v82; // w2
  const MethodInfo *v83; // x3
  WarBoardWallData_o *v84; // x1
  System_Collections_Generic_List_object__o **v85; // x21
  System_Collections_Generic_IEnumerable_TSource__o *wallInfo; // x22
  System_Func_object__bool__o *v87; // x23
  Il2CppObject *v88; // x0
  Il2CppObject *v89; // x8
  int32_t klass_high; // w1
  System_Collections_Generic_List_object__o *v91; // [xsp+8h] [xbp-B8h]
  WarBoardData_o *v92; // [xsp+10h] [xbp-B0h]
  WarBoardDataEntity_o **v93; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v95; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v96; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4C3540B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData____ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Item__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__get_Current__);
    sub_1C32C20(&System_Func_WarBoardUserWallData__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Count__);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&WarBoardManager_TaskList_TypeInfo);
    sub_1C32C20(&WarBoardManager_TaskMultiList_TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass151_0__UpdateFromServerData_b__0__);
    sub_1C32C20(&WarBoardData___c__DisplayClass151_0_TypeInfo);
    sub_1C32C20(&WarBoardWaitNonBlockingTaskEnd_TypeInfo);
    byte_4C3540B = 1;
  }
  memset(&v96, 0, sizeof(v96));
  p_serverData = &this->fields.serverData;
  if ( !this->fields.serverData )
    return;
  this->fields.serverData = warBoardDataEntity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.serverData, (int32_t)warBoardDataEntity, forceUpdate, method);
  v91 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v91,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v7 = (WarBoardManager_TaskMultiList_o *)sub_1C32E6C(WarBoardManager_TaskMultiList_TypeInfo);
  WarBoardManager_TaskMultiList___ctor(v7, 0);
  v8 = (WarBoardManager_TaskMultiList_o *)sub_1C32E6C(WarBoardManager_TaskMultiList_TypeInfo);
  WarBoardManager_TaskMultiList___ctor(v8, 0);
  v9 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v9,
    (const MethodInfo_33EF348 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData____ctor__);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList___ctor__);
  pieces = this->fields.pieces;
  v92 = this;
  if ( !pieces )
    goto LABEL_96;
  max_length = pieces->max_length;
  v93 = &this->fields.serverData;
  if ( max_length >= 1 )
  {
    v14 = 0;
    v15 = forceUpdate;
    do
    {
      if ( v14 >= max_length )
        goto LABEL_97;
      v16 = pieces->m_Items[v14];
      v17 = (WarBoardManager_TaskList_o *)sub_1C32E6C(WarBoardManager_TaskList_TypeInfo);
      WarBoardManager_TaskList___ctor(v17, 0);
      if ( !v16 )
        goto LABEL_96;
      WarBoardPieceData__UpdateFromServerData(
        v16,
        *p_serverData,
        (System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__o *)v10,
        v17,
        v15,
        0);
      if ( !v17 )
        goto LABEL_96;
      if ( v17->fields._size >= 1 )
      {
        if ( v16->fields._isDead_k__BackingField )
        {
          if ( !v8 )
            goto LABEL_96;
          items = v8->fields._items;
          v21 = Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_96;
          size = v8->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v27 = v21[4];
            v28 = (System_Collections_Generic_List_object__o *)v8;
LABEL_23:
            System_Collections_Generic_List_object___AddWithResize(
              v28,
              (Il2CppObject *)v17,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v27 + 192) + 112LL));
            goto LABEL_24;
          }
          v23 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          if ( !v7 )
            goto LABEL_96;
          v24 = v7->fields._items;
          v25 = Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__;
          ++v7->fields._version;
          if ( !v24 )
            goto LABEL_96;
          v26 = v7->fields._size;
          if ( (unsigned int)v26 >= LODWORD(v24->max_length) )
          {
            v27 = v25[4];
            v28 = (System_Collections_Generic_List_object__o *)v7;
            goto LABEL_23;
          }
          v23 = &v24->obj.klass + v26;
          v7->fields._size = v26 + 1;
        }
        v23[4] = (Il2CppClass *)v17;
        sub_1C32BC4((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v17, v18, v19);
      }
LABEL_24:
      isPlayerGroup = (System_Collections_Generic_List_object__o *)WarBoardPieceData__get_isPlayerGroup(v16, 0);
      if ( ((unsigned __int8)isPlayerGroup & 1) != 0 )
      {
        isPlayerGroup = (System_Collections_Generic_List_object__o *)WarBoardPieceData__get_isMaster(v16, 0);
        if ( ((unsigned __int8)isPlayerGroup & 1) == 0 && v16->fields._IsDispConsumedPieceActionPoint_k__BackingField )
        {
          if ( !v9 )
            goto LABEL_96;
          if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                  v9,
                  v16->fields._ConsumedRecoverDonotActCost_k__BackingField,
                  (const MethodInfo_33EFF10 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___ContainsKey__) )
          {
            ConsumedRecoverDonotActCost_k__BackingField = v16->fields._ConsumedRecoverDonotActCost_k__BackingField;
            v30 = v9;
            v31 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v31,
              (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
            v32 = v30;
            v33 = (Il2CppObject *)v31;
            v9 = v30;
            p_serverData = v93;
            System_Collections_Generic_Dictionary_int__object___Add(
              v32,
              ConsumedRecoverDonotActCost_k__BackingField,
              v33,
              (const MethodInfo_33EFD1C *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Add__);
          }
          isPlayerGroup = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                         v9,
                                                                         v16->fields._ConsumedRecoverDonotActCost_k__BackingField,
                                                                         (const MethodInfo_33EFC7C *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Item__);
          if ( !isPlayerGroup )
            goto LABEL_96;
          v36 = isPlayerGroup->fields._items;
          v37 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
          ++isPlayerGroup->fields._version;
          if ( !v36 )
            goto LABEL_96;
          v38 = isPlayerGroup->fields._size;
          if ( (unsigned int)v38 >= LODWORD(v36->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              isPlayerGroup,
              (Il2CppObject *)v16,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
          }
          else
          {
            v39 = &v36->obj.klass + v38;
            isPlayerGroup->fields._size = v38 + 1;
            v39[4] = (Il2CppClass *)v16;
            sub_1C32BC4((CGThumbnailListItem_o *)(v39 + 4), (int32_t)v16, v34, v35);
          }
        }
      }
      max_length = pieces->max_length;
    }
    while ( (int)++v14 < max_length );
  }
  if ( !v10 )
    goto LABEL_96;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v95,
    v10,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__GetEnumerator__);
  v96 = v95;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v96,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__MoveNext__) )
  {
    current = v96.fields._current;
    v41 = (WarBoardManager_TaskList_o *)sub_1C32E6C(WarBoardManager_TaskList_TypeInfo);
    WarBoardManager_TaskList___ctor(v41, 0);
    if ( !current )
      sub_1C32E7C(v42);
    monitor = (int)current[1].monitor;
    if ( monitor < 0 )
    {
      monitor_high = HIDWORD(current[1].monitor);
      if ( monitor_high >= 1 )
      {
        klass = current[1].klass;
        if ( !klass )
          sub_1C32E7C(0);
        (*((void (__fastcall **)(Il2CppClass *, _QWORD, _QWORD, WarBoardManager_TaskList_o *, __int64, _QWORD, __int64, _QWORD))klass->_1.image
         + 101))(
          klass,
          (unsigned int)monitor_high,
          0,
          v41,
          0xFFFFFFFFLL,
          0,
          1,
          *((_QWORD *)klass->_1.image + 102));
      }
      v50 = current[1].klass;
      if ( !v50 )
        sub_1C32E7C(0);
      v45 = (*((__int64 (**)(void))v50->_1.image + 103))();
    }
    else
    {
      v44 = current[1].klass;
      if ( !v44 )
        sub_1C32E7C(0);
      v45 = (*((__int64 (__fastcall **)(Il2CppClass *, _QWORD, _QWORD, WarBoardManager_TaskList_o *, __int64, _QWORD, __int64, _QWORD))v44->_1.image
             + 101))(
              v44,
              HIDWORD(current[1].monitor),
              0,
              v41,
              0xFFFFFFFFLL,
              0,
              1,
              *((_QWORD *)v44->_1.image + 102));
    }
    if ( !v41 )
      sub_1C32E7C(v45);
    if ( v41->fields._size >= 1 )
    {
      if ( monitor < 0 )
      {
        if ( !v8 )
          sub_1C32E7C(v45);
        v55 = v8->fields._items;
        v56 = Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__;
        ++v8->fields._version;
        if ( !v55 )
          sub_1C32E7C(v45);
        v57 = v8->fields._size;
        if ( (unsigned int)v57 >= LODWORD(v55->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)v8,
            (Il2CppObject *)v41,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
        }
        else
        {
          v58 = &v55->obj.klass + v57;
          v8->fields._size = v57 + 1;
          v58[4] = (Il2CppClass *)v41;
          sub_1C32BC4((CGThumbnailListItem_o *)(v58 + 4), (int32_t)v41, v46, v47);
        }
      }
      else
      {
        if ( !v7 )
          sub_1C32E7C(v45);
        v51 = v7->fields._items;
        v52 = Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__;
        ++v7->fields._version;
        if ( !v51 )
          sub_1C32E7C(v45);
        v53 = v7->fields._size;
        if ( (unsigned int)v53 >= LODWORD(v51->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)v7,
            (Il2CppObject *)v41,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
        }
        else
        {
          v54 = &v51->obj.klass + v53;
          v7->fields._size = v53 + 1;
          v54[4] = (Il2CppClass *)v41;
          sub_1C32BC4((CGThumbnailListItem_o *)(v54 + 4), (int32_t)v41, v46, v47);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v96,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__Dispose__);
  if ( !v9 )
    goto LABEL_96;
  isPlayerGroup = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Count(
                                                                 v9,
                                                                 (const MethodInfo_33EF9CC *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__);
  if ( (int)isPlayerGroup >= 1 )
    WarBoardData__ShowConsumedPieceActionPointPopup(
      v92,
      (System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___o *)v9,
      v59);
  if ( !v7 )
    goto LABEL_96;
  isPlayerGroup = (System_Collections_Generic_List_object__o *)WarBoardManager_TaskMultiList__SortedFlatted(v7, 0);
  if ( !v91 )
    goto LABEL_96;
  System_Collections_Generic_List_object___AddRange(
    v91,
    (System_Collections_Generic_IEnumerable_T__o *)isPlayerGroup,
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( !v8 )
    goto LABEL_96;
  v60 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager_TaskMultiList__SortedFlatted(v8, 0);
  System_Collections_Generic_List_object___AddRange(
    v91,
    v60,
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( v91->fields._size >= 1 )
  {
    isPlayerGroup = (System_Collections_Generic_List_object__o *)WarBoardData__CreateEventBossUIDataTask(
                                                                   (WarBoardData_o *)isPlayerGroup,
                                                                   v61);
    v64 = v91->fields._items;
    v65 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v91->fields._version;
    if ( !v64 )
      goto LABEL_96;
    v66 = v91->fields._size;
    v67 = isPlayerGroup;
    if ( (unsigned int)v66 >= LODWORD(v64->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v91,
        (Il2CppObject *)isPlayerGroup,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
    }
    else
    {
      v68 = &v64->obj.klass + v66;
      v91->fields._size = v66 + 1;
      v68[4] = (Il2CppClass *)v67;
      sub_1C32BC4((CGThumbnailListItem_o *)(v68 + 4), (int32_t)v67, v62, v63);
    }
    v69 = (WarBoardWaitNonBlockingTaskEnd_o *)sub_1C32E6C(WarBoardWaitNonBlockingTaskEnd_TypeInfo);
    WarBoardWaitNonBlockingTaskEnd___ctor(v69, 0);
    v72 = v91->fields._items;
    v73 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v91->fields._version;
    if ( !v72 )
      goto LABEL_96;
    v74 = v91->fields._size;
    if ( (unsigned int)v74 >= LODWORD(v72->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v91,
        (Il2CppObject *)v69,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
    }
    else
    {
      v75 = &v72->obj.klass + v74;
      v91->fields._size = v74 + 1;
      v75[4] = (Il2CppClass *)v69;
      sub_1C32BC4((CGThumbnailListItem_o *)(v75 + 4), (int32_t)v69, v70, v71);
    }
    isPlayerGroup = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !isPlayerGroup )
      goto LABEL_96;
    WarBoardManager__InsertTask_37966928(
      (WarBoardManager_o *)isPlayerGroup,
      0,
      (System_Collections_Generic_List_WarBoardTaskBase__o *)v91,
      0);
  }
  v76 = v92->fields.items;
  if ( !v76 )
    goto LABEL_96;
  v77 = v76->max_length;
  if ( v77 >= 1 )
  {
    v78 = 0;
    while ( v78 < v77 )
    {
      isPlayerGroup = (System_Collections_Generic_List_object__o *)v76->m_Items[v78];
      if ( !isPlayerGroup )
        goto LABEL_96;
      WarBoardItemData__UpdateFromServerData((WarBoardItemData_o *)isPlayerGroup, *v93, 0);
      v77 = v76->max_length;
      if ( (int)++v78 >= v77 )
        goto LABEL_84;
    }
LABEL_97:
    sub_1C32E84(isPlayerGroup);
  }
LABEL_84:
  walls = v92->fields.walls;
  if ( !walls )
LABEL_96:
    sub_1C32E7C(isPlayerGroup);
  if ( SLODWORD(walls->max_length) >= 1 )
  {
    v80 = 0;
    while ( 1 )
    {
      v81 = sub_1C32E6C(WarBoardData___c__DisplayClass151_0_TypeInfo);
      WarBoardData___c__DisplayClass151_0___ctor((WarBoardData___c__DisplayClass151_0_o *)v81, 0);
      if ( v80 >= LODWORD(walls->max_length) )
        goto LABEL_97;
      if ( !v81 )
        goto LABEL_96;
      v84 = walls->m_Items[v80];
      *(_QWORD *)(v81 + 16) = v84;
      v85 = (System_Collections_Generic_List_object__o **)(v81 + 16);
      sub_1C32BC4((CGThumbnailListItem_o *)(v81 + 16), (int32_t)v84, v82, v83);
      if ( !warBoardDataEntity )
        goto LABEL_96;
      wallInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEntity->fields.wallInfo;
      v87 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_WarBoardUserWallData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v87,
        (Il2CppObject *)v81,
        Method_WarBoardData___c__DisplayClass151_0__UpdateFromServerData_b__0__,
        0);
      v88 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
              wallInfo,
              (System_Func_TSource__bool__o *)v87,
              (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
      if ( v88 )
      {
        v89 = v88;
        isPlayerGroup = *v85;
        if ( !*v85 )
          goto LABEL_96;
        klass_high = HIDWORD(v89[1].klass);
        if ( isPlayerGroup->fields._size > klass_high )
          WarBoardWallData__SetBreakPoint((WarBoardWallData_o *)isPlayerGroup, klass_high, 0);
      }
      if ( (__int64)++v80 >= SLODWORD(walls->max_length) )
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
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( !participantInfo )
    sub_1C32E7C(this);
  v4 = WarBoardData_BattleParticipantInfo__ToUniqueIndexArray(participantInfo, 0);
  this->fields.latestBattlePieceUniqueIndexes = v4;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.latestBattlePieceUniqueIndexes, (int32_t)v4, v5, v6);
}


void WarBoardData__UpdateLatestPieceActionSquareIndexes(
        WarBoardData_o *this,
        int32_t fromSquareIndex,
        int32_t toSquareIndex,
        const MethodInfo *method)
{
  __int64 v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int v10; // w8

  if ( (byte_4C3541B & 1) == 0 )
  {
    sub_1C32C20(&int___TypeInfo);
    byte_4C3541B = 1;
  }
  v7 = sub_1C32CC8(int___TypeInfo, 2);
  if ( !v7 )
    sub_1C32E7C(0);
  v10 = *(_DWORD *)(v7 + 24);
  if ( !v10 || (*(_DWORD *)(v7 + 32) = fromSquareIndex, v10 == 1) )
    sub_1C32E84(v7);
  *(_DWORD *)(v7 + 36) = toSquareIndex;
  this->fields.latestPieceActionSquareIndexes = (struct System_Int32_array *)v7;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.latestPieceActionSquareIndexes, v7, v8, v9);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  Il2CppClass **v13; // x0
  System_Object_array *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  CGThumbnailListItem_o *p_condSquares; // x19
  System_Collections_Generic_IEnumerable_T__o *condSquares; // t1
  System_Collections_Generic_List_object__o *v19; // x21
  System_Object_array *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  if ( (byte_4C353FF & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardSquareData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardSquareData__Remove__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardSquareData___ctor___78028744);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
    byte_4C353FF = 1;
  }
  squares = (System_Collections_Generic_IEnumerable_T__o *)this->fields.squares;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
  System_Collections_Generic_List_object____ctor_58294448(
    v6,
    squares,
    (const MethodInfo_37980B0 *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor___78028744);
  if ( !v6 )
    goto LABEL_10;
  items = v6->fields._items;
  v11 = Method_System_Collections_Generic_List_WarBoardSquareData__Add__;
  ++v6->fields._version;
  if ( !items )
    goto LABEL_10;
  size = v6->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)square,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v13[4] = (Il2CppClass *)square;
    sub_1C32BC4((CGThumbnailListItem_o *)(v13 + 4), (int32_t)square, v8, v9);
  }
  v14 = System_Collections_Generic_List_object___ToArray(
          v6,
          (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  this->fields.squares = (struct WarBoardSquareData_array *)v14;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.squares, (int32_t)v14, v15, v16);
  condSquares = (System_Collections_Generic_IEnumerable_T__o *)this->fields.condSquares;
  p_condSquares = (CGThumbnailListItem_o *)&this->fields.condSquares;
  v19 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
  System_Collections_Generic_List_object____ctor_58294448(
    v19,
    condSquares,
    (const MethodInfo_37980B0 *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor___78028744);
  if ( !v19 )
LABEL_10:
    sub_1C32E7C(v7);
  System_Collections_Generic_List_object___Remove(
    v19,
    (Il2CppObject *)square,
    (const MethodInfo_3799CE4 *)Method_System_Collections_Generic_List_WarBoardSquareData__Remove__);
  v20 = System_Collections_Generic_List_object___ToArray(
          v19,
          (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  p_condSquares->klass = (CGThumbnailListItem_c *)v20;
  sub_1C32BC4(p_condSquares, (int32_t)v20, v21, v22);
}


void WarBoardData__UpdateUiData(
        WarBoardData_o *this,
        int32_t squareIndex,
        System_String_array *setKeys,
        const MethodInfo *method)
{
  Il2CppObject *UiData; // x0
  int max_length; // w8
  Il2CppObject *v9; // x1
  WarBoardUiData_o *v10; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppClass *klass; // x8
  _QWORD *v14; // x9
  __int64 monitor_low; // x10
  __int64 v16; // x8

  if ( (byte_4C3542C & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardUiData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardUiData__Remove__);
    sub_1C32C20(&WarBoardUiData_TypeInfo);
    byte_4C3542C = 1;
  }
  UiData = (Il2CppObject *)WarBoardData__GetUiData(this, squareIndex, (const MethodInfo *)setKeys);
  if ( !setKeys )
    goto LABEL_16;
  max_length = setKeys->max_length;
  v9 = UiData;
  if ( UiData )
  {
    if ( max_length )
    {
      WarBoardUiData__SetKeys((WarBoardUiData_o *)UiData, setKeys, 0);
      return;
    }
    UiData = (Il2CppObject *)this->fields.listUiData;
    if ( UiData )
    {
      System_Collections_Generic_List_object___Remove(
        (System_Collections_Generic_List_object__o *)UiData,
        v9,
        (const MethodInfo_3799CE4 *)Method_System_Collections_Generic_List_WarBoardUiData__Remove__);
      return;
    }
LABEL_16:
    sub_1C32E7C(UiData);
  }
  if ( max_length )
  {
    v10 = (WarBoardUiData_o *)sub_1C32E6C(WarBoardUiData_TypeInfo);
    WarBoardUiData___ctor_38071584(v10, squareIndex, setKeys, 0);
    UiData = (Il2CppObject *)this->fields.listUiData;
    if ( !UiData )
      goto LABEL_16;
    klass = UiData[1].klass;
    v14 = Method_System_Collections_Generic_List_WarBoardUiData__Add__;
    ++HIDWORD(UiData[1].monitor);
    if ( !klass )
      goto LABEL_16;
    monitor_low = SLODWORD(UiData[1].monitor);
    if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)UiData,
        (Il2CppObject *)v10,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v16 = (__int64)klass + 8 * monitor_low;
      LODWORD(UiData[1].monitor) = monitor_low + 1;
      *(_QWORD *)(v16 + 32) = v10;
      sub_1C32BC4((CGThumbnailListItem_o *)(v16 + 32), (int32_t)v10, v11, v12);
    }
  }
}


void WarBoardData__UpdateUiData_37879504(
        WarBoardData_o *this,
        System_Int32_array *pieceIndex,
        System_String_array *setKeys,
        const MethodInfo *method)
{
  Il2CppObject *UiData_37878912; // x0
  int max_length; // w8
  Il2CppObject *v9; // x1
  WarBoardUiData_o *v10; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppClass *klass; // x8
  _QWORD *v14; // x9
  __int64 monitor_low; // x10
  __int64 v16; // x8

  if ( (byte_4C3542D & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardUiData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardUiData__Remove__);
    sub_1C32C20(&WarBoardUiData_TypeInfo);
    byte_4C3542D = 1;
  }
  UiData_37878912 = (Il2CppObject *)WarBoardData__GetUiData_37878912(this, pieceIndex, (const MethodInfo *)setKeys);
  if ( !setKeys )
    goto LABEL_16;
  max_length = setKeys->max_length;
  v9 = UiData_37878912;
  if ( UiData_37878912 )
  {
    if ( max_length )
    {
      WarBoardUiData__SetKeys((WarBoardUiData_o *)UiData_37878912, setKeys, 0);
      return;
    }
    UiData_37878912 = (Il2CppObject *)this->fields.listUiData;
    if ( UiData_37878912 )
    {
      System_Collections_Generic_List_object___Remove(
        (System_Collections_Generic_List_object__o *)UiData_37878912,
        v9,
        (const MethodInfo_3799CE4 *)Method_System_Collections_Generic_List_WarBoardUiData__Remove__);
      return;
    }
LABEL_16:
    sub_1C32E7C(UiData_37878912);
  }
  if ( max_length )
  {
    v10 = (WarBoardUiData_o *)sub_1C32E6C(WarBoardUiData_TypeInfo);
    WarBoardUiData___ctor_38071656(v10, pieceIndex, setKeys, 0);
    UiData_37878912 = (Il2CppObject *)this->fields.listUiData;
    if ( !UiData_37878912 )
      goto LABEL_16;
    klass = UiData_37878912[1].klass;
    v14 = Method_System_Collections_Generic_List_WarBoardUiData__Add__;
    ++HIDWORD(UiData_37878912[1].monitor);
    if ( !klass )
      goto LABEL_16;
    monitor_low = SLODWORD(UiData_37878912[1].monitor);
    if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)UiData_37878912,
        (Il2CppObject *)v10,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v16 = (__int64)klass + 8 * monitor_low;
      LODWORD(UiData_37878912[1].monitor) = monitor_low + 1;
      *(_QWORD *)(v16 + 32) = v10;
      sub_1C32BC4((CGThumbnailListItem_o *)(v16 + 32), (int32_t)v10, v11, v12);
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
  WarBoardData___c_c *v3; // x0
  System_Object_array *pieces; // x19
  System_Predicate_object__o *_9__62_0; // x20
  Il2CppObject *v6; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int64_t result; // x0

  if ( (byte_4C353D8 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Find_WarBoardPieceData___);
    sub_1C32C20(&System_Predicate_WarBoardPieceData__TypeInfo);
    sub_1C32C20(&Method_WarBoardData___c__get_PlayerMasterUserEquipId_b__62_0__);
    sub_1C32C20(&WarBoardData___c_TypeInfo);
    byte_4C353D8 = 1;
  }
  v3 = WarBoardData___c_TypeInfo;
  pieces = (System_Object_array *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v3 = WarBoardData___c_TypeInfo;
  }
  _9__62_0 = (System_Predicate_object__o *)v3->static_fields->__9__62_0;
  if ( !_9__62_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = WarBoardData___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__62_0 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_WarBoardPieceData__TypeInfo);
    System_Predicate_object____ctor(_9__62_0, v6, Method_WarBoardData___c__get_PlayerMasterUserEquipId_b__62_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__62_0 = (struct System_Predicate_WarBoardPieceData__o *)_9__62_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__62_0, (int32_t)_9__62_0, v8, v9);
  }
  result = (int64_t)System_Array__Find_object_(
                      pieces,
                      (System_Predicate_T__o *)_9__62_0,
                      (const MethodInfo_31E22DC *)Method_System_Array_Find_WarBoardPieceData___);
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
    sub_1C32E7C(this);
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
  const MethodInfo *v3; // x3

  this->fields._bgAnimationInfo_k__BackingField = value;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._bgAnimationInfo_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  v9 = WarBoardData_BattleParticipantInfo__AggregateBattleParticipants(v7, attackPieceData, targetPieceData, v8);
  this->fields._Participants_k__BackingField = v9;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)v9, v10, v11);
}


void WarBoardData_BattleParticipantInfo___ctor_38029536(
        WarBoardData_BattleParticipantInfo_o *this,
        System_UInt32_array *uniqueIndexArray,
        const MethodInfo *method)
{
  __int64 v5; // x21
  Il2CppObject *Instance; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  void *monitor; // x1
  System_Func_T__TResult__o *v10; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  System_Object_array *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C3553A & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_uint__WarBoardPieceData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_1C32C20(&System_Func_uint__WarBoardPieceData__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&Method_WarBoardData_BattleParticipantInfo___c__DisplayClass13_0___ctor_b__0__);
    sub_1C32C20(&WarBoardData_BattleParticipantInfo___c__DisplayClass13_0_TypeInfo);
    byte_4C3553A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v5 = sub_1C32E6C(WarBoardData_BattleParticipantInfo___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !uniqueIndexArray )
    goto LABEL_9;
  if ( SLODWORD(uniqueIndexArray->max_length) > 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance && v5 )
    {
      monitor = Instance[27].monitor;
      *(_QWORD *)(v5 + 16) = monitor;
      sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)monitor, v7, v8);
      v10 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func_uint__WarBoardPieceData__TypeInfo);
      System_Func_uint__object____ctor(
        v10,
        (Il2CppObject *)v5,
        Method_WarBoardData_BattleParticipantInfo___c__DisplayClass13_0___ctor_b__0__,
        0);
      v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_uint__object_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)uniqueIndexArray,
                                                                   (System_Func_TSource__TResult__o *)v10,
                                                                   (const MethodInfo_31155C0 *)Method_System_Linq_Enumerable_Select_uint__WarBoardPieceData___);
      v12 = System_Linq_Enumerable__ToArray_object_(
              v11,
              (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
      this->fields._Participants_k__BackingField = (struct WarBoardPieceData_array *)v12;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)v12, v13, v14);
      return;
    }
LABEL_9:
    sub_1C32E7C(Instance);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  Il2CppClass **v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *v16; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  Il2CppClass **v19; // x0
  il2cpp_array_size_t stageNpcMaster; // x8
  WarBoardPieceData_array *v21; // x20
  unsigned __int64 v22; // x23
  WarBoardPieceData_o **p_npcEntityDict; // x25
  WarBoardPieceData_o *v24; // x21
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Object_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  Il2CppClass **v30; // x0

  if ( (byte_4C3553C & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardPieceData__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C3553C = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( !v6 )
    goto LABEL_31;
  items = v6->fields._items;
  v11 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
  ++v6->fields._version;
  if ( !items )
    goto LABEL_31;
  size = v6->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)attackPieceData,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v13[4] = (Il2CppClass *)attackPieceData;
    sub_1C32BC4((CGThumbnailListItem_o *)(v13 + 4), (int32_t)attackPieceData, v8, v9);
  }
  v16 = v6->fields._items;
  v17 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
  ++v6->fields._version;
  if ( !v16 )
    goto LABEL_31;
  v18 = v6->fields._size;
  if ( (unsigned int)v18 >= LODWORD(v16->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)targetPieceData,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &v16->obj.klass + v18;
    v6->fields._size = v18 + 1;
    v19[4] = (Il2CppClass *)targetPieceData;
    sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 4), (int32_t)targetPieceData, v14, v15);
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
LABEL_31:
    sub_1C32E7C(Instance);
  }
  stageNpcMaster = (il2cpp_array_size_t)Instance->fields.stageNpcMaster;
  v21 = (WarBoardPieceData_array *)Instance;
  if ( (int)stageNpcMaster >= 1 )
  {
    v22 = 0;
    p_npcEntityDict = (WarBoardPieceData_o **)&Instance->fields.npcEntityDict;
    do
    {
      if ( v22 >= (unsigned int)stageNpcMaster )
        sub_1C32E84(Instance);
      v24 = p_npcEntityDict[v22];
      Instance = (WarBoardData_o *)System_Collections_Generic_List_object___Contains(
                                     v6,
                                     (Il2CppObject *)v24,
                                     (const MethodInfo_3798B4C *)Method_System_Collections_Generic_List_WarBoardPieceData__Contains__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !v24 )
          goto LABEL_31;
        if ( v24->fields._type_k__BackingField != 1 )
        {
          Instance = (WarBoardData_o *)v24->fields._battleServant_k__BackingField;
          if ( !Instance
            || (Instance = (WarBoardData_o *)BattleServantData__HasAvailableWarBoardNotAttackedBuff(
                                               (BattleServantData_o *)Instance,
                                               0),
                ((unsigned __int8)Instance & 1) == 0) )
          {
            v27 = v6->fields._items;
            v28 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
            ++v6->fields._version;
            if ( !v27 )
              goto LABEL_31;
            v29 = v6->fields._size;
            if ( (unsigned int)v29 >= LODWORD(v27->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v6,
                (Il2CppObject *)v24,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
            }
            else
            {
              v30 = &v27->obj.klass + v29;
              v6->fields._size = v29 + 1;
              v30[4] = (Il2CppClass *)v24;
              sub_1C32BC4((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v24, v25, v26);
            }
          }
        }
      }
      LODWORD(stageNpcMaster) = v21->max_length;
      ++v22;
    }
    while ( (__int64)v22 < (int)stageNpcMaster );
  }
  return (WarBoardPieceData_array *)System_Collections_Generic_List_object___ToArray(
                                      v6,
                                      (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
}


WarBoardData_BattleParticipantInfo_o *WarBoardData_BattleParticipantInfo__LoadFromUniqueIndex(
        System_UInt32_array *uniqueIndexArray,
        const MethodInfo *method)
{
  WarBoardData_BattleParticipantInfo_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4C3553D & 1) == 0 )
  {
    sub_1C32C20(&WarBoardData_BattleParticipantInfo_TypeInfo);
    byte_4C3553D = 1;
  }
  v3 = (WarBoardData_BattleParticipantInfo_o *)sub_1C32E6C(WarBoardData_BattleParticipantInfo_TypeInfo);
  WarBoardData_BattleParticipantInfo___ctor_38029536(v3, uniqueIndexArray, v4);
  return v3;
}


System_UInt32_array *WarBoardData_BattleParticipantInfo__ToUniqueIndexArray(
        WarBoardData_BattleParticipantInfo_o *this,
        const MethodInfo *method)
{
  WarBoardData_BattleParticipantInfo___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Participants_k__BackingField; // x19
  System_Func_T__TResult__o *_9__14_0; // x20
  Il2CppObject *v6; // x21
  struct WarBoardData_BattleParticipantInfo___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_4C3553B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__uint___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_uint___);
    sub_1C32C20(&System_Func_WarBoardPieceData__uint__TypeInfo);
    sub_1C32C20(&Method_WarBoardData_BattleParticipantInfo___c__ToUniqueIndexArray_b__14_0__);
    sub_1C32C20(&WarBoardData_BattleParticipantInfo___c_TypeInfo);
    byte_4C3553B = 1;
  }
  v3 = WarBoardData_BattleParticipantInfo___c_TypeInfo;
  Participants_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._Participants_k__BackingField;
  if ( !WarBoardData_BattleParticipantInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_BattleParticipantInfo___c_TypeInfo);
    v3 = WarBoardData_BattleParticipantInfo___c_TypeInfo;
  }
  _9__14_0 = (System_Func_T__TResult__o *)v3->static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = WarBoardData_BattleParticipantInfo___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__14_0 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func_WarBoardPieceData__uint__TypeInfo);
    System_Func_object__uint____ctor(
      _9__14_0,
      v6,
      Method_WarBoardData_BattleParticipantInfo___c__ToUniqueIndexArray_b__14_0__,
      0);
    static_fields = WarBoardData_BattleParticipantInfo___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Func_WarBoardPieceData__uint__o *)_9__14_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__14_0, (int32_t)_9__14_0, v8, v9);
  }
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__uint_(
                                                               Participants_k__BackingField,
                                                               (System_Func_TSource__TResult__o *)_9__14_0,
                                                               (const MethodInfo_31146FC *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__uint___);
  return System_Linq_Enumerable__ToArray_uint_(
           v10,
           (const MethodInfo_311CB9C *)Method_System_Linq_Enumerable_ToArray_uint___);
}


WarBoardPieceData_o *WarBoardData_BattleParticipantInfo__get_Attacker(
        WarBoardData_BattleParticipantInfo_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceData_array *Participants_k__BackingField; // x8

  Participants_k__BackingField = this->fields._Participants_k__BackingField;
  if ( !Participants_k__BackingField )
    sub_1C32E7C(this);
  if ( !LODWORD(Participants_k__BackingField->max_length) )
    sub_1C32E84(this);
  return Participants_k__BackingField->m_Items[0];
}


WarBoardPieceData_o *WarBoardData_BattleParticipantInfo__get_Defender(
        WarBoardData_BattleParticipantInfo_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceData_array *Participants_k__BackingField; // x8

  Participants_k__BackingField = this->fields._Participants_k__BackingField;
  if ( !Participants_k__BackingField )
    sub_1C32E7C(this);
  if ( LODWORD(Participants_k__BackingField->max_length) <= 1 )
    sub_1C32E84(this);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3553E & 1) == 0 )
  {
    sub_1C32C20(&WarBoardData_BattleParticipantInfo___c_TypeInfo);
    byte_4C3553E = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(WarBoardData_BattleParticipantInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardData_BattleParticipantInfo___c_TypeInfo->static_fields->__9 = (struct WarBoardData_BattleParticipantInfo___c_o *)v1;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)WarBoardData_BattleParticipantInfo___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1C32E7C(this);
  return x->fields._uniqueIndex_k__BackingField;
}


void WarBoardData_BattleParticipantInfo___c__DisplayClass13_0___ctor(
        WarBoardData_BattleParticipantInfo___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


WarBoardPieceData_o *WarBoardData_BattleParticipantInfo___c__DisplayClass13_0____ctor_b__0(
        WarBoardData_BattleParticipantInfo___c__DisplayClass13_0_o *this,
        uint32_t x,
        const MethodInfo *method)
{
  WarBoardData_o *warBoardData; // x0

  warBoardData = this->fields.warBoardData;
  if ( !warBoardData )
    sub_1C32E7C(0);
  return WarBoardData__GetPiece_37790700(warBoardData, x, 0, 0);
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct UnityEngine_Vector2_o zeroVector; // d1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  *(_QWORD *)&this->fields.questId = 0;
  this->fields.stageId = 0;
  this->fields.pieceSaves = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.pieceSaves, 0, v3, v4);
  this->fields.itemSaves = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.itemSaves, 0, v5, v6);
  this->fields.treasureSaves = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.treasureSaves, 0, v7, v8);
  this->fields.wallSaves = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.wallSaves, 0, v9, v10);
  this->fields.squareSaves = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.squareSaves, 0, v11, v12);
  if ( !byte_4C312CA )
  {
    sub_1C32C20(&UnityEngine_Vector2_TypeInfo);
    byte_4C312CA = 1;
  }
  zeroVector = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  this->fields.cameraSize = 0.0;
  *(_QWORD *)&this->fields.turn = 0xFFFFFFFF00000000LL;
  this->fields.turnGroupId = -1;
  this->fields.onBoardSkillUpdate = 0;
  this->fields.cameraPos = zeroVector;
  this->fields.eventSaves = 0;
  *(_QWORD *)&this->fields.randLogicCount = 0;
  this->fields.isPlayedHalfDeadMessage = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.eventSaves, 0, v13, v14);
  this->fields.winCondId = -1;
  this->fields.latestBattlePieceUniqueIndexes = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.latestBattlePieceUniqueIndexes, 0, v16, v17);
  this->fields.prevCondSaves = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.prevCondSaves, 0, v18, v19);
  this->fields.reinforcementsSaves = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.reinforcementsSaves, 0, v20, v21);
  this->fields.playedReinforcements = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.playedReinforcements, 0, v22, v23);
  this->fields.uiDataSaves = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.uiDataSaves, 0, v24, v25);
  this->fields.bgAnimationInfo = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.bgAnimationInfo, 0, v26, v27);
  this->fields.squareIndexInfo = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.squareIndexInfo, 0, v28, v29);
  this->fields.bossBattleInfo = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.bossBattleInfo, 0, v30, v31);
}


void WarBoardData_WarBoardLocalSaveData___ctor_38024844(
        WarBoardData_WarBoardLocalSaveData_o *this,
        WarBoardData_o *warBoardData,
        const MethodInfo *method)
{
  __int64 GutsCount; // x0
  struct WarBoardDataEntity_o *serverData; // x8
  struct WarBoardPieceData_array *pieces; // x8
  il2cpp_array_size_t max_length; // x22
  struct WarBoardPieceData_SaveData_array *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  unsigned __int64 v12; // x24
  __int64 v13; // x26
  __int64 v14; // x27
  struct WarBoardPieceData_array *v15; // x8
  unsigned int *pieceSaves; // x28
  WarBoardPieceData_o *v17; // x23
  WarBoardPieceData_SaveData_o *v18; // x22
  const MethodInfo *v19; // x2
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct WarBoardItemData_array *items; // x8
  il2cpp_array_size_t v23; // x22
  struct WarBoardItemData_SaveData_array *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  unsigned __int64 v27; // x24
  __int64 v28; // x26
  __int64 v29; // x27
  struct WarBoardItemData_array *v30; // x8
  unsigned int *itemSaves; // x28
  WarBoardItemData_o *v32; // x23
  WarBoardItemData_SaveData_o *v33; // x22
  const MethodInfo *v34; // x2
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct WarBoardTreasureData_array *treasures; // x8
  il2cpp_array_size_t v38; // x22
  struct WarBoardTreasureData_SaveData_array *v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  unsigned __int64 v42; // x24
  __int64 v43; // x26
  __int64 v44; // x27
  struct WarBoardTreasureData_array *v45; // x8
  unsigned int *treasureSaves; // x28
  WarBoardTreasureData_o *v47; // x23
  WarBoardTreasureData_SaveData_o *v48; // x22
  const MethodInfo *v49; // x2
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  struct WarBoardWallData_array *walls; // x8
  il2cpp_array_size_t v53; // x22
  struct WarBoardWallData_SaveData_array *v54; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  unsigned __int64 v57; // x24
  __int64 v58; // x26
  __int64 v59; // x27
  struct WarBoardWallData_array *v60; // x8
  unsigned int *wallSaves; // x28
  WarBoardWallData_o *v62; // x23
  WarBoardWallData_SaveData_o *v63; // x22
  const MethodInfo *v64; // x2
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  struct WarBoardSquareData_array *squares; // x8
  il2cpp_array_size_t v68; // x22
  struct WarBoardSquareData_SaveData_array *v69; // x0
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  unsigned __int64 v72; // x24
  __int64 v73; // x26
  __int64 v74; // x27
  struct WarBoardSquareData_array *v75; // x8
  unsigned int *squareSaves; // x28
  WarBoardSquareData_o *v77; // x23
  WarBoardSquareData_SaveData_o *v78; // x22
  const MethodInfo *v79; // x2
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  struct UnityEngine_Vector2_o zeroVector; // d0
  struct System_Collections_Generic_List_WarBoardEventData__o *listEvent; // x8
  __int64 size; // x21
  struct WarBoardEventData_SaveData_array *v85; // x0
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  unsigned __int64 v90; // x23
  __int64 v91; // x28
  unsigned int *eventSaves; // x29
  Il2CppObject *Item; // x25
  WarBoardEventData_SaveData_o *v94; // x24
  const MethodInfo *v95; // x2
  int32_t v96; // w2
  const MethodInfo *v97; // x3
  struct System_Int32_array *latestPieceActionSquareIndexes; // x1
  struct System_UInt32_array *latestBattlePieceUniqueIndexes; // x1
  int32_t v100; // w2
  const MethodInfo *v101; // x3
  struct System_Collections_Generic_List_WarBoardPrevCondData__o *listPrevCond; // x8
  __int64 v103; // x21
  struct WarBoardPrevCondData_SaveData_array *v104; // x0
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  unsigned __int64 v107; // x23
  __int64 v108; // x28
  unsigned int *prevCondSaves; // x29
  Il2CppObject *v110; // x25
  WarBoardPrevCondData_SaveData_o *v111; // x24
  const MethodInfo *v112; // x2
  int32_t v113; // w2
  const MethodInfo *v114; // x3
  struct System_Collections_Generic_List_HoldReinforcementsData__o *reinforcementsSaveList; // x8
  __int64 v116; // x21
  struct HoldReinforcementsData_SaveData_array *v117; // x0
  int32_t v118; // w2
  const MethodInfo *v119; // x3
  unsigned __int64 v120; // x23
  __int64 v121; // x28
  unsigned int *reinforcementsSaves; // x29
  Il2CppObject *v123; // x25
  HoldReinforcementsData_SaveData_o *v124; // x24
  const MethodInfo *v125; // x2
  int32_t v126; // w2
  const MethodInfo *v127; // x3
  struct System_Int32_array *v128; // x0
  int32_t v129; // w2
  const MethodInfo *v130; // x3
  struct System_Collections_Generic_List_WarBoardUiData__o *listUiData; // x8
  __int64 v132; // x21
  struct WarBoardUiData_SaveData_array *v133; // x0
  int32_t v134; // w2
  const MethodInfo *v135; // x3
  unsigned __int64 v136; // x23
  __int64 v137; // x28
  unsigned int *uiDataSaves; // x29
  Il2CppObject *v139; // x25
  WarBoardUiData_SaveData_o *v140; // x24
  const MethodInfo *v141; // x2
  int32_t v142; // w2
  const MethodInfo *v143; // x3
  struct WarBoardDataEntity_o *v144; // x8
  int32_t v145; // w22
  struct WarBoardSquareIndexData_SaveData_array *v146; // x0
  int32_t v147; // w2
  const MethodInfo *v148; // x3
  unsigned __int64 v149; // x24
  __int64 v150; // x26
  __int64 v151; // x27
  struct WarBoardDataEntity_o *v152; // x8
  struct WarBoardSquareIndexData_array *squareIndexInfo; // x8
  unsigned int *v154; // x28
  WarBoardSquareIndexData_o *v155; // x23
  WarBoardSquareIndexData_SaveData_o *v156; // x22
  const MethodInfo *v157; // x2
  int32_t v158; // w2
  const MethodInfo *v159; // x3
  struct WarBoardDataEntity_o *v160; // x8
  int32_t v161; // w22
  struct WarBoardBossBattleData_SaveData_array *v162; // x0
  int32_t v163; // w2
  const MethodInfo *v164; // x3
  unsigned __int64 v165; // x24
  __int64 v166; // x26
  __int64 v167; // x27
  struct WarBoardDataEntity_o *v168; // x8
  struct WarBoardBossBattleData_array *bossBattleInfo; // x8
  unsigned int *v170; // x28
  WarBoardBossBattleData_o *v171; // x23
  WarBoardBossBattleData_SaveData_o *v172; // x22
  int32_t v173; // w2
  const MethodInfo *v174; // x3
  int32_t ContinueConsumeType_k__BackingField; // w8
  __int64 v176; // x0

  if ( (byte_4C35539 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardUiData__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardPrevCondData__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardEventData__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_HoldReinforcementsData__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardEventData__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardUiData__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardPrevCondData__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_HoldReinforcementsData__get_Item__);
    sub_1C32C20(&WarBoardTreasureData_SaveData___TypeInfo);
    sub_1C32C20(&WarBoardSquareData_SaveData___TypeInfo);
    sub_1C32C20(&WarBoardSquareIndexData_SaveData___TypeInfo);
    sub_1C32C20(&HoldReinforcementsData_SaveData___TypeInfo);
    sub_1C32C20(&WarBoardItemData_SaveData___TypeInfo);
    sub_1C32C20(&WarBoardWallData_SaveData___TypeInfo);
    sub_1C32C20(&WarBoardPrevCondData_SaveData___TypeInfo);
    sub_1C32C20(&WarBoardEventData_SaveData___TypeInfo);
    sub_1C32C20(&WarBoardUiData_SaveData___TypeInfo);
    sub_1C32C20(&WarBoardPieceData_SaveData___TypeInfo);
    sub_1C32C20(&WarBoardBossBattleData_SaveData___TypeInfo);
    sub_1C32C20(&WarBoardSquareData_SaveData_TypeInfo);
    sub_1C32C20(&WarBoardTreasureData_SaveData_TypeInfo);
    sub_1C32C20(&WarBoardBossBattleData_SaveData_TypeInfo);
    sub_1C32C20(&WarBoardItemData_SaveData_TypeInfo);
    sub_1C32C20(&WarBoardPrevCondData_SaveData_TypeInfo);
    sub_1C32C20(&WarBoardWallData_SaveData_TypeInfo);
    sub_1C32C20(&WarBoardUiData_SaveData_TypeInfo);
    sub_1C32C20(&WarBoardEventData_SaveData_TypeInfo);
    sub_1C32C20(&WarBoardSquareIndexData_SaveData_TypeInfo);
    sub_1C32C20(&HoldReinforcementsData_SaveData_TypeInfo);
    sub_1C32C20(&WarBoardPieceData_SaveData_TypeInfo);
    byte_4C35539 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
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
  max_length = pieces->max_length;
  v9 = (struct WarBoardPieceData_SaveData_array *)sub_1C32CC8(
                                                    WarBoardPieceData_SaveData___TypeInfo,
                                                    (unsigned int)max_length);
  this->fields.pieceSaves = v9;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.pieceSaves, (int32_t)v9, v10, v11);
  if ( (int)max_length >= 1 )
  {
    v12 = 0;
    v13 = (unsigned int)max_length;
    v14 = 8;
    while ( 1 )
    {
      v15 = warBoardData->fields.pieces;
      if ( !v15 )
        break;
      if ( v12 >= LODWORD(v15->max_length) )
        goto LABEL_118;
      pieceSaves = (unsigned int *)this->fields.pieceSaves;
      v17 = *(WarBoardPieceData_o **)((char *)&v15->obj.klass + v14 * 4);
      v18 = (WarBoardPieceData_SaveData_o *)sub_1C32E6C(WarBoardPieceData_SaveData_TypeInfo);
      WarBoardPieceData_SaveData___ctor_38027896(v18, v17, v19);
      if ( !pieceSaves )
        break;
      if ( v18 )
      {
        GutsCount = sub_1C32D5C(v18, *(_QWORD *)(*(_QWORD *)pieceSaves + 64LL));
        if ( !GutsCount )
        {
LABEL_119:
          v176 = sub_1C32EA0();
          sub_1C32D48(v176, 0);
        }
      }
      if ( v12 >= pieceSaves[6] )
LABEL_118:
        sub_1C32E84(GutsCount);
      *(_QWORD *)&pieceSaves[v14] = v18;
      sub_1C32BC4((CGThumbnailListItem_o *)&pieceSaves[v14], (int32_t)v18, v20, v21);
      ++v12;
      v14 += 2;
      if ( v13 == v12 )
        goto LABEL_15;
    }
LABEL_117:
    sub_1C32E7C(GutsCount);
  }
LABEL_15:
  items = warBoardData->fields.items;
  if ( !items )
    goto LABEL_117;
  v23 = items->max_length;
  v24 = (struct WarBoardItemData_SaveData_array *)sub_1C32CC8(WarBoardItemData_SaveData___TypeInfo, (unsigned int)v23);
  this->fields.itemSaves = v24;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.itemSaves, (int32_t)v24, v25, v26);
  if ( (int)v23 >= 1 )
  {
    v27 = 0;
    v28 = (unsigned int)v23;
    v29 = 8;
    do
    {
      v30 = warBoardData->fields.items;
      if ( !v30 )
        goto LABEL_117;
      if ( v27 >= LODWORD(v30->max_length) )
        goto LABEL_118;
      itemSaves = (unsigned int *)this->fields.itemSaves;
      v32 = *(WarBoardItemData_o **)((char *)&v30->obj.klass + v29 * 4);
      v33 = (WarBoardItemData_SaveData_o *)sub_1C32E6C(WarBoardItemData_SaveData_TypeInfo);
      WarBoardItemData_SaveData___ctor_38027980(v33, v32, v34);
      if ( !itemSaves )
        goto LABEL_117;
      if ( v33 )
      {
        GutsCount = sub_1C32D5C(v33, *(_QWORD *)(*(_QWORD *)itemSaves + 64LL));
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v27 >= itemSaves[6] )
        goto LABEL_118;
      *(_QWORD *)&itemSaves[v29] = v33;
      sub_1C32BC4((CGThumbnailListItem_o *)&itemSaves[v29], (int32_t)v33, v35, v36);
      ++v27;
      v29 += 2;
    }
    while ( v28 != v27 );
  }
  treasures = warBoardData->fields.treasures;
  if ( !treasures )
    goto LABEL_117;
  v38 = treasures->max_length;
  v39 = (struct WarBoardTreasureData_SaveData_array *)sub_1C32CC8(
                                                        WarBoardTreasureData_SaveData___TypeInfo,
                                                        (unsigned int)v38);
  this->fields.treasureSaves = v39;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.treasureSaves, (int32_t)v39, v40, v41);
  if ( (int)v38 >= 1 )
  {
    v42 = 0;
    v43 = (unsigned int)v38;
    v44 = 8;
    do
    {
      v45 = warBoardData->fields.treasures;
      if ( !v45 )
        goto LABEL_117;
      if ( v42 >= LODWORD(v45->max_length) )
        goto LABEL_118;
      treasureSaves = (unsigned int *)this->fields.treasureSaves;
      v47 = *(WarBoardTreasureData_o **)((char *)&v45->obj.klass + v44 * 4);
      v48 = (WarBoardTreasureData_SaveData_o *)sub_1C32E6C(WarBoardTreasureData_SaveData_TypeInfo);
      WarBoardTreasureData_SaveData___ctor_38028064(v48, v47, v49);
      if ( !treasureSaves )
        goto LABEL_117;
      if ( v48 )
      {
        GutsCount = sub_1C32D5C(v48, *(_QWORD *)(*(_QWORD *)treasureSaves + 64LL));
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v42 >= treasureSaves[6] )
        goto LABEL_118;
      *(_QWORD *)&treasureSaves[v44] = v48;
      sub_1C32BC4((CGThumbnailListItem_o *)&treasureSaves[v44], (int32_t)v48, v50, v51);
      ++v42;
      v44 += 2;
    }
    while ( v43 != v42 );
  }
  walls = warBoardData->fields.walls;
  if ( !walls )
    goto LABEL_117;
  v53 = walls->max_length;
  v54 = (struct WarBoardWallData_SaveData_array *)sub_1C32CC8(WarBoardWallData_SaveData___TypeInfo, (unsigned int)v53);
  this->fields.wallSaves = v54;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.wallSaves, (int32_t)v54, v55, v56);
  if ( (int)v53 >= 1 )
  {
    v57 = 0;
    v58 = (unsigned int)v53;
    v59 = 8;
    do
    {
      v60 = warBoardData->fields.walls;
      if ( !v60 )
        goto LABEL_117;
      if ( v57 >= LODWORD(v60->max_length) )
        goto LABEL_118;
      wallSaves = (unsigned int *)this->fields.wallSaves;
      v62 = *(WarBoardWallData_o **)((char *)&v60->obj.klass + v59 * 4);
      v63 = (WarBoardWallData_SaveData_o *)sub_1C32E6C(WarBoardWallData_SaveData_TypeInfo);
      WarBoardWallData_SaveData___ctor_38028180(v63, v62, v64);
      if ( !wallSaves )
        goto LABEL_117;
      if ( v63 )
      {
        GutsCount = sub_1C32D5C(v63, *(_QWORD *)(*(_QWORD *)wallSaves + 64LL));
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v57 >= wallSaves[6] )
        goto LABEL_118;
      *(_QWORD *)&wallSaves[v59] = v63;
      sub_1C32BC4((CGThumbnailListItem_o *)&wallSaves[v59], (int32_t)v63, v65, v66);
      ++v57;
      v59 += 2;
    }
    while ( v58 != v57 );
  }
  squares = warBoardData->fields.squares;
  if ( !squares )
    goto LABEL_117;
  v68 = squares->max_length;
  v69 = (struct WarBoardSquareData_SaveData_array *)sub_1C32CC8(
                                                      WarBoardSquareData_SaveData___TypeInfo,
                                                      (unsigned int)v68);
  this->fields.squareSaves = v69;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.squareSaves, (int32_t)v69, v70, v71);
  if ( (int)v68 >= 1 )
  {
    v72 = 0;
    v73 = (unsigned int)v68;
    v74 = 8;
    do
    {
      v75 = warBoardData->fields.squares;
      if ( !v75 )
        goto LABEL_117;
      if ( v72 >= LODWORD(v75->max_length) )
        goto LABEL_118;
      squareSaves = (unsigned int *)this->fields.squareSaves;
      v77 = *(WarBoardSquareData_o **)((char *)&v75->obj.klass + v74 * 4);
      v78 = (WarBoardSquareData_SaveData_o *)sub_1C32E6C(WarBoardSquareData_SaveData_TypeInfo);
      WarBoardSquareData_SaveData___ctor_38028288(v78, v77, v79);
      if ( !squareSaves )
        goto LABEL_117;
      if ( v78 )
      {
        GutsCount = sub_1C32D5C(v78, *(_QWORD *)(*(_QWORD *)squareSaves + 64LL));
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v72 >= squareSaves[6] )
        goto LABEL_118;
      *(_QWORD *)&squareSaves[v74] = v78;
      sub_1C32BC4((CGThumbnailListItem_o *)&squareSaves[v74], (int32_t)v78, v80, v81);
      ++v72;
      v74 += 2;
    }
    while ( v73 != v72 );
  }
  if ( !byte_4C312CA )
  {
    sub_1C32C20(&UnityEngine_Vector2_TypeInfo);
    byte_4C312CA = 1;
  }
  zeroVector = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  *(_QWORD *)&this->fields.cameraSize = 3212836864LL;
  this->fields.onBoardSkillUpdate = 0;
  this->fields.cameraPos = zeroVector;
  this->fields.randLogicCount = BattleRandom__GetLogicCount(0);
  GutsCount = BattleRandom__GetGutsCount(0);
  this->fields.randGutsCount = GutsCount;
  this->fields.isPlayedHalfDeadMessage = warBoardData->fields.isPlayedHalfDeadMessage;
  listEvent = warBoardData->fields.listEvent;
  if ( !listEvent )
    goto LABEL_117;
  size = (unsigned int)listEvent->fields._size;
  v85 = (struct WarBoardEventData_SaveData_array *)sub_1C32CC8(
                                                     WarBoardEventData_SaveData___TypeInfo,
                                                     (unsigned int)size);
  this->fields.eventSaves = v85;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.eventSaves, (int32_t)v85, v86, v87);
  if ( (int)size >= 1 )
  {
    v90 = 0;
    v91 = 8;
    do
    {
      GutsCount = (__int64)warBoardData->fields.listEvent;
      if ( !GutsCount )
        goto LABEL_117;
      eventSaves = (unsigned int *)this->fields.eventSaves;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)GutsCount,
               v90,
               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_WarBoardEventData__get_Item__);
      v94 = (WarBoardEventData_SaveData_o *)sub_1C32E6C(WarBoardEventData_SaveData_TypeInfo);
      WarBoardEventData_SaveData___ctor_38028380(v94, (WarBoardEventData_o *)Item, v95);
      if ( !eventSaves )
        goto LABEL_117;
      if ( v94 )
      {
        GutsCount = sub_1C32D5C(v94, *(_QWORD *)(*(_QWORD *)eventSaves + 64LL));
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v90 >= eventSaves[6] )
        goto LABEL_118;
      *(_QWORD *)&eventSaves[v91] = v94;
      sub_1C32BC4((CGThumbnailListItem_o *)&eventSaves[v91], (int32_t)v94, v96, v97);
      ++v90;
      v91 += 2;
    }
    while ( size != v90 );
  }
  this->fields.winCondId = warBoardData->fields.winCondId;
  latestPieceActionSquareIndexes = warBoardData->fields.latestPieceActionSquareIndexes;
  this->fields.latestPieceActionSquareIndexes = latestPieceActionSquareIndexes;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.latestPieceActionSquareIndexes,
    (int32_t)latestPieceActionSquareIndexes,
    v88,
    v89);
  latestBattlePieceUniqueIndexes = warBoardData->fields.latestBattlePieceUniqueIndexes;
  this->fields.latestBattlePieceUniqueIndexes = latestBattlePieceUniqueIndexes;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.latestBattlePieceUniqueIndexes,
    (int32_t)latestBattlePieceUniqueIndexes,
    v100,
    v101);
  listPrevCond = warBoardData->fields.listPrevCond;
  if ( !listPrevCond )
    goto LABEL_117;
  v103 = (unsigned int)listPrevCond->fields._size;
  v104 = (struct WarBoardPrevCondData_SaveData_array *)sub_1C32CC8(
                                                         WarBoardPrevCondData_SaveData___TypeInfo,
                                                         (unsigned int)v103);
  this->fields.prevCondSaves = v104;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.prevCondSaves, (int32_t)v104, v105, v106);
  if ( (int)v103 >= 1 )
  {
    v107 = 0;
    v108 = 8;
    do
    {
      GutsCount = (__int64)warBoardData->fields.listPrevCond;
      if ( !GutsCount )
        goto LABEL_117;
      prevCondSaves = (unsigned int *)this->fields.prevCondSaves;
      v110 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)GutsCount,
               v107,
               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_WarBoardPrevCondData__get_Item__);
      v111 = (WarBoardPrevCondData_SaveData_o *)sub_1C32E6C(WarBoardPrevCondData_SaveData_TypeInfo);
      WarBoardPrevCondData_SaveData___ctor_38028440(v111, (WarBoardPrevCondData_o *)v110, v112);
      if ( !prevCondSaves )
        goto LABEL_117;
      if ( v111 )
      {
        GutsCount = sub_1C32D5C(v111, *(_QWORD *)(*(_QWORD *)prevCondSaves + 64LL));
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v107 >= prevCondSaves[6] )
        goto LABEL_118;
      *(_QWORD *)&prevCondSaves[v108] = v111;
      sub_1C32BC4((CGThumbnailListItem_o *)&prevCondSaves[v108], (int32_t)v111, v113, v114);
      ++v107;
      v108 += 2;
    }
    while ( v103 != v107 );
  }
  reinforcementsSaveList = warBoardData->fields.reinforcementsSaveList;
  if ( !reinforcementsSaveList )
    goto LABEL_117;
  v116 = (unsigned int)reinforcementsSaveList->fields._size;
  v117 = (struct HoldReinforcementsData_SaveData_array *)sub_1C32CC8(
                                                           HoldReinforcementsData_SaveData___TypeInfo,
                                                           (unsigned int)v116);
  this->fields.reinforcementsSaves = v117;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.reinforcementsSaves, (int32_t)v117, v118, v119);
  if ( (int)v116 >= 1 )
  {
    v120 = 0;
    v121 = 8;
    do
    {
      GutsCount = (__int64)warBoardData->fields.reinforcementsSaveList;
      if ( !GutsCount )
        goto LABEL_117;
      reinforcementsSaves = (unsigned int *)this->fields.reinforcementsSaves;
      v123 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)GutsCount,
               v120,
               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_HoldReinforcementsData__get_Item__);
      v124 = (HoldReinforcementsData_SaveData_o *)sub_1C32E6C(HoldReinforcementsData_SaveData_TypeInfo);
      HoldReinforcementsData_SaveData___ctor_38028492(v124, (HoldReinforcementsData_o *)v123, v125);
      if ( !reinforcementsSaves )
        goto LABEL_117;
      if ( v124 )
      {
        GutsCount = sub_1C32D5C(v124, *(_QWORD *)(*(_QWORD *)reinforcementsSaves + 64LL));
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v120 >= reinforcementsSaves[6] )
        goto LABEL_118;
      *(_QWORD *)&reinforcementsSaves[v121] = v124;
      sub_1C32BC4((CGThumbnailListItem_o *)&reinforcementsSaves[v121], (int32_t)v124, v126, v127);
      ++v120;
      v121 += 2;
    }
    while ( v116 != v120 );
  }
  GutsCount = (__int64)warBoardData->fields.playedStageReinforcementsList;
  if ( !GutsCount )
    goto LABEL_117;
  v128 = System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)GutsCount,
           (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.playedReinforcements = v128;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.playedReinforcements, (int32_t)v128, v129, v130);
  listUiData = warBoardData->fields.listUiData;
  if ( !listUiData )
    goto LABEL_117;
  v132 = (unsigned int)listUiData->fields._size;
  v133 = (struct WarBoardUiData_SaveData_array *)sub_1C32CC8(WarBoardUiData_SaveData___TypeInfo, (unsigned int)v132);
  this->fields.uiDataSaves = v133;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.uiDataSaves, (int32_t)v133, v134, v135);
  if ( (int)v132 >= 1 )
  {
    v136 = 0;
    v137 = 8;
    do
    {
      GutsCount = (__int64)warBoardData->fields.listUiData;
      if ( !GutsCount )
        goto LABEL_117;
      uiDataSaves = (unsigned int *)this->fields.uiDataSaves;
      v139 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)GutsCount,
               v136,
               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_WarBoardUiData__get_Item__);
      v140 = (WarBoardUiData_SaveData_o *)sub_1C32E6C(WarBoardUiData_SaveData_TypeInfo);
      WarBoardUiData_SaveData___ctor_38028552(v140, (WarBoardUiData_o *)v139, v141);
      if ( !uiDataSaves )
        goto LABEL_117;
      if ( v140 )
      {
        GutsCount = sub_1C32D5C(v140, *(_QWORD *)(*(_QWORD *)uiDataSaves + 64LL));
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v136 >= uiDataSaves[6] )
        goto LABEL_118;
      *(_QWORD *)&uiDataSaves[v137] = v140;
      sub_1C32BC4((CGThumbnailListItem_o *)&uiDataSaves[v137], (int32_t)v140, v142, v143);
      ++v136;
      v137 += 2;
    }
    while ( v132 != v136 );
  }
  v144 = warBoardData->fields.serverData;
  if ( !v144 )
    goto LABEL_117;
  v145 = System_Linq_Enumerable__Count_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v144->fields.squareIndexInfo,
           (const MethodInfo_30FD778 *)Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___);
  v146 = (struct WarBoardSquareIndexData_SaveData_array *)sub_1C32CC8(
                                                            WarBoardSquareIndexData_SaveData___TypeInfo,
                                                            (unsigned int)v145);
  this->fields.squareIndexInfo = v146;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.squareIndexInfo, (int32_t)v146, v147, v148);
  if ( v145 >= 1 )
  {
    v149 = 0;
    v150 = (unsigned int)v145;
    v151 = 8;
    do
    {
      v152 = warBoardData->fields.serverData;
      if ( !v152 )
        goto LABEL_117;
      squareIndexInfo = v152->fields.squareIndexInfo;
      if ( !squareIndexInfo )
        goto LABEL_117;
      if ( v149 >= LODWORD(squareIndexInfo->max_length) )
        goto LABEL_118;
      v154 = (unsigned int *)this->fields.squareIndexInfo;
      v155 = *(WarBoardSquareIndexData_o **)((char *)&squareIndexInfo->obj.klass + v151 * 4);
      v156 = (WarBoardSquareIndexData_SaveData_o *)sub_1C32E6C(WarBoardSquareIndexData_SaveData_TypeInfo);
      WarBoardSquareIndexData_SaveData___ctor_38028632(v156, v155, v157);
      if ( !v154 )
        goto LABEL_117;
      if ( v156 )
      {
        GutsCount = sub_1C32D5C(v156, *(_QWORD *)(*(_QWORD *)v154 + 64LL));
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v149 >= v154[6] )
        goto LABEL_118;
      *(_QWORD *)&v154[v151] = v156;
      sub_1C32BC4((CGThumbnailListItem_o *)&v154[v151], (int32_t)v156, v158, v159);
      ++v149;
      v151 += 2;
    }
    while ( v150 != v149 );
  }
  v160 = warBoardData->fields.serverData;
  if ( !v160 )
    goto LABEL_117;
  v161 = System_Linq_Enumerable__Count_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v160->fields.bossBattleInfo,
           (const MethodInfo_30FD778 *)Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___);
  v162 = (struct WarBoardBossBattleData_SaveData_array *)sub_1C32CC8(
                                                           WarBoardBossBattleData_SaveData___TypeInfo,
                                                           (unsigned int)v161);
  this->fields.bossBattleInfo = v162;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.bossBattleInfo, (int32_t)v162, v163, v164);
  if ( v161 >= 1 )
  {
    v165 = 0;
    v166 = (unsigned int)v161;
    v167 = 8;
    do
    {
      v168 = warBoardData->fields.serverData;
      if ( !v168 )
        goto LABEL_117;
      bossBattleInfo = v168->fields.bossBattleInfo;
      if ( !bossBattleInfo )
        goto LABEL_117;
      if ( v165 >= LODWORD(bossBattleInfo->max_length) )
        goto LABEL_118;
      v170 = (unsigned int *)this->fields.bossBattleInfo;
      v171 = *(WarBoardBossBattleData_o **)((char *)&bossBattleInfo->obj.klass + v167 * 4);
      v172 = (WarBoardBossBattleData_SaveData_o *)sub_1C32E6C(WarBoardBossBattleData_SaveData_TypeInfo);
      WarBoardBossBattleData_SaveData___ctor_37825120(v172, v171, 0);
      if ( !v170 )
        goto LABEL_117;
      if ( v172 )
      {
        GutsCount = sub_1C32D5C(v172, *(_QWORD *)(*(_QWORD *)v170 + 64LL));
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v165 >= v170[6] )
        goto LABEL_118;
      *(_QWORD *)&v170[v167] = v172;
      sub_1C32BC4((CGThumbnailListItem_o *)&v170[v167], (int32_t)v172, v173, v174);
      ++v165;
      v167 += 2;
    }
    while ( v166 != v165 );
  }
  ContinueConsumeType_k__BackingField = warBoardData->fields._ContinueConsumeType_k__BackingField;
  *(_WORD *)&this->fields.isContinue = 0;
  this->fields.continueConsumeType = ContinueConsumeType_k__BackingField;
  this->fields.localSaveTiming = warBoardData->fields.localSaveTiming;
}


void WarBoardData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3553F & 1) == 0 )
  {
    sub_1C32C20(&WarBoardData___c_TypeInfo);
    byte_4C3553F = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(WarBoardData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardData___c_TypeInfo->static_fields->__9 = (struct WarBoardData___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)WarBoardData___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C32E7C(this);
  return x->fields.squareIndex - y->fields.squareIndex;
}


uint32_t WarBoardData___c____ctor_b__77_1(
        WarBoardData___c_o *this,
        WarBoardStageNpcEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return (x->fields.forceId << 24) | ((unsigned __int8)x->fields.groupId << 16);
}


uint32_t WarBoardData___c____ctor_b__77_2(
        WarBoardData___c_o *this,
        WarBoardActionPointEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return (x->fields.forceId << 24) | ((unsigned __int8)x->fields.groupId << 16);
}


int32_t WarBoardData___c____ctor_b__77_3(
        WarBoardData___c_o *this,
        WarBoardStageNpcEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.forceId;
}


int32_t WarBoardData___c____ctor_b__77_4(
        WarBoardData___c_o *this,
        WarBoardStageNpcEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.groupId;
}


bool WarBoardData___c____ctor_b__77_9(
        WarBoardData___c_o *this,
        WarBoardUserTreasureData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.isReceived;
}


BattleBuffData_o *WarBoardData___c___BuffTurnProgressing_b__191_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *p,
        const MethodInfo *method)
{
  struct BattleServantData_o *battleServant_k__BackingField; // x8

  if ( !p )
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  BattleBuffData__BoardTurnProgressing(b, 0);
}


bool WarBoardData___c___CheckWinCond_b__98_0(WarBoardData___c_o *this, int32_t x, const MethodInfo *method)
{
  return x > 0;
}


void WarBoardData___c___CreateEventBossUIDataTask_b__152_0(WarBoardData___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  WarBoardManager_o *v3; // x19

  if ( (byte_4C35541 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C35541 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  v3 = (WarBoardManager_o *)Instance;
  WarBoardManager__UpdateEventBossUIData((WarBoardManager_o *)Instance, 0);
  WarBoardManager__SaveEventBossUIData(v3, v3->fields._EventId_k__BackingField, v3->fields._StageId_k__BackingField, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


bool WarBoardData___c___GetAliveEnemyServantPieces_b__110_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  return !x->fields._isDead_k__BackingField;
}


bool WarBoardData___c___GetAlivePlayerGroupServantPieces_b__109_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  return !x->fields._isDead_k__BackingField && x->fields._type_k__BackingField == 0;
}


bool WarBoardData___c___GetEditableServantPieces_b__120_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  return x->fields._holdNum_k__BackingField < 1;
}


int32_t WarBoardData___c___GetInRangeSquareIndecies_b__123_0(
        WarBoardData___c_o *this,
        WarBoardData_SquareRangeSearch_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.squareIndex;
}


bool WarBoardData___c___GetPlayerMasterPiece_b__104_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  return !x->fields._forceId_k__BackingField
      && !x->fields._groupId_k__BackingField
      && x->fields._iconId_k__BackingField != 0;
}


bool WarBoardData___c___IsReachableWinConditions_b__95_0(
        WarBoardData___c_o *this,
        System_Collections_Generic_KeyValuePair_int__bool__o status,
        const MethodInfo *method)
{
  bool value; // x19^4

  value = status.fields.value;
  if ( (byte_4C35540 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__);
    byte_4C35540 = 1;
  }
  return value;
}


int32_t WarBoardData___c___SetContinue_b__82_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields._index_k__BackingField;
}


BattleServantData_o *WarBoardData___c___SetContinue_b__82_1(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields._battleServant_k__BackingField;
}


bool WarBoardData___c___SetContinue_b__82_2(WarBoardData___c_o *this, WarBoardPieceData_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields._isDead_k__BackingField && x->fields._battleServant_k__BackingField != 0;
}


int32_t WarBoardData___c___SetContinue_b__82_3(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct BattleServantData_o *battleServant_k__BackingField; // x8

  if ( !x || (battleServant_k__BackingField = x->fields._battleServant_k__BackingField) == 0 )
    sub_1C32E7C(this);
  return battleServant_k__BackingField->fields.uniqueId;
}


void WarBoardData___c___SetContinue_b__82_4(WarBoardData___c_o *this, WarBoardPieceData_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  WarBoardPieceData__ProcContinue(x, (const MethodInfo *)x);
}


bool WarBoardData___c___SetPlayerMasterUserEquip_b__144_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return !x->fields._forceId_k__BackingField
      && !x->fields._groupId_k__BackingField
      && x->fields._type_k__BackingField == 1;
}


void WarBoardData___c___SetRequest_b__156_0(WarBoardData___c_o *this, WarBoardPieceData_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  WarBoardPieceData__SetServarData(x, (const MethodInfo *)x);
}


System_String_o *WarBoardData___c___SetRequest_b__156_1(
        WarBoardData___c_o *this,
        WarBoardItemData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  return p->fields.pieceComponent;
}


bool WarBoardData___c___UpdateBuffTurnNoticeDisp_b__192_1(
        WarBoardData___c_o *this,
        WarBoardPieceBaseComponent_o *c,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  UnityEngine_Object_o *v5; // x19

  if ( (byte_4C35542 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C35542 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)c, 0, 0);
  if ( !v4 )
    return 0;
  if ( !c )
    sub_1C32E7C(v4);
  v5 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))c->klass->vtable._4_get_BuffTrunNotice.methodPtr)(
                                 c,
                                 c->klass->vtable._4_get_BuffTrunNotice.method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(v5, 0, 0);
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
    sub_1C32E7C(this);
  }
  WarBoardServantPieceBuffTurnComponent__UpdateDisp((WarBoardServantPieceBuffTurnComponent_o *)this, 1, 0);
}


int32_t WarBoardData___c___UpdateCurrentPartyCost_b__143_0(
        WarBoardData___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return UserServantEntity__getCost(x, 0);
}


bool WarBoardData___c___get_PlayerMasterUserEquipId_b__62_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
  if ( (byte_4C35543 & 1) == 0 )
  {
    this = (WarBoardData___c__DisplayClass118_0_o *)sub_1C32C20(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4C35543 = 1;
  }
  if ( !x )
    sub_1C32E7C(this);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.inRangeSquaers,
           x->fields._nowSquareIndex_k__BackingField,
           (const MethodInfo_30FA3A0 *)Method_System_Linq_Enumerable_Contains_int___);
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
  if ( (byte_4C35544 & 1) == 0 )
  {
    this = (WarBoardData___c__DisplayClass119_0_o *)sub_1C32C20(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4C35544 = 1;
  }
  if ( !x )
    sub_1C32E7C(this);
  return !x->fields._isDead_k__BackingField
      && System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.inRangeSquaers,
           x->fields._nowSquareIndex_k__BackingField,
           (const MethodInfo_30FA3A0 *)Method_System_Linq_Enumerable_Contains_int___);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
  DataMasterBase_TMaster__TEntity__PKType__o *svtMaster; // x20
  __int64 v6; // x19
  __int64 v7; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v4 = this;
  if ( (byte_4C35545 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    this = (WarBoardData___c__DisplayClass143_0_o *)sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C35545 = 1;
  }
  if ( !x )
    goto LABEL_9;
  svtMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields.svtMaster;
  v7 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  this = (WarBoardData___c__DisplayClass143_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                                    v9,
                                                    0);
  if ( !svtMaster
    || (this = (WarBoardData___c__DisplayClass143_0_o *)DataMasterBase_object__object__int___GetEntity(
                                                          svtMaster,
                                                          (int32_t)this,
                                                          (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
LABEL_9:
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
  Il2CppObject *Instance; // x0
  System_Action_bool__o *_9__2; // x21
  WarBoardManager_o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t key; // w0
  struct System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___o *consumedPieceActionPointDict; // x8
  int32_t v10; // w19
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *Only; // x0
  System_Collections_Generic_KeyValuePair_int__object__o KeyValuePair_int__object; // kr00_16

  if ( (byte_4C35546 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_bool__TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__List_WarBoardPieceData___get_Key__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__List_WarBoardPieceData___get_Value__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardPieceData__AsReadOnly__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__2__);
    byte_4C35546 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  _9__2 = this->fields.__9__2;
  v5 = (WarBoardManager_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_bool__o *)sub_1C32E6C(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v6, v7);
  }
  key = System_Linq_Enumerable__First_KeyValuePair_int__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.consumedPieceActionPointDict,
          (const MethodInfo_3102FA8 *)Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____).fields.key;
  consumedPieceActionPointDict = this->fields.consumedPieceActionPointDict;
  v10 = key;
  KeyValuePair_int__object = System_Linq_Enumerable__First_KeyValuePair_int__object__(
                               (System_Collections_Generic_IEnumerable_TSource__o *)consumedPieceActionPointDict,
                               (const MethodInfo_3102FA8 *)Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____);
  Only = *(System_Collections_ObjectModel_ReadOnlyCollection_T__o **)&KeyValuePair_int__object.fields.key;
  if ( !KeyValuePair_int__object.fields.value
    || (Only = System_Collections_Generic_List_object___AsReadOnly(
                 (System_Collections_Generic_List_object__o *)KeyValuePair_int__object.fields.value,
                 (const MethodInfo_37989E4 *)Method_System_Collections_Generic_List_WarBoardPieceData__AsReadOnly__),
        !v5) )
  {
    sub_1C32E7C(Only);
  }
  WarBoardManager__ShowConsumedPieceActionPointPopup(
    v5,
    _9__2,
    v10,
    (System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__o *)Only,
    0);
}


void WarBoardData___c__DisplayClass154_0___ShowConsumedPieceActionPointPopup_b__2(
        WarBoardData___c__DisplayClass154_0_o *this,
        bool _,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  System_Action_o *_9__3; // x22
  WarBoardManager_o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C35547 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__3__);
    byte_4C35547 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  _9__3 = this->fields.__9__3;
  v6 = (WarBoardManager_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__3__,
      0);
    this->fields.__9__3 = _9__3;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__9__3, (int32_t)_9__3, v7, v8);
  }
  if ( !v6 )
    sub_1C32E7C(Instance);
  WarBoardManager__HideConsumedPieceActionPointPopup(v6, _9__3, 0);
}


void WarBoardData___c__DisplayClass154_0___ShowConsumedPieceActionPointPopup_b__3(
        WarBoardData___c__DisplayClass154_0_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___o *consumedPieceActionPointDict; // x20
  WarBoardData_o *_4__this; // x0

  if ( (byte_4C35548 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Remove__);
    sub_1C32C20(&Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__List_WarBoardPieceData___get_Key__);
    byte_4C35548 = 1;
  }
  this->fields.consumedPiecePopupClose = 1;
  consumedPieceActionPointDict = this->fields.consumedPieceActionPointDict;
  _4__this = (WarBoardData_o *)*(_OWORD *)&System_Linq_Enumerable__First_KeyValuePair_int__object__(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)consumedPieceActionPointDict,
                                             (const MethodInfo_3102FA8 *)Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____);
  if ( !consumedPieceActionPointDict
    || (System_Collections_Generic_Dictionary_int__object___Remove(
          (System_Collections_Generic_Dictionary_int__object__o *)consumedPieceActionPointDict,
          (int32_t)_4__this,
          (const MethodInfo_33F11A4 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Remove__),
        (_4__this = this->fields.__4__this) == 0) )
  {
    sub_1C32E7C(_4__this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  return x->fields.stageReinforcementId == pram->fields._id_k__BackingField;
}


void WarBoardData___c__DisplayClass189_0___ctor(WarBoardData___c__DisplayClass189_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass189_0___GetReinforcements_b__0(
        WarBoardData___c__DisplayClass189_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct WarBoardStageReinforcementsEntity_o *stageEntity; // x8

  stageEntity = this->fields.stageEntity;
  if ( !stageEntity )
    sub_1C32E7C(this);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  v4 = this;
  if ( (byte_4C35549 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_int____78062168);
    sub_1C32C20(&System_Func_int__bool__TypeInfo);
    this = (WarBoardData___c__DisplayClass189_1_o *)sub_1C32C20(&Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__2__);
    byte_4C35549 = 1;
  }
  if ( !x
    || (CS___8__locals1 = v4->fields.CS___8__locals1) == 0
    || (stageEntity = CS___8__locals1->fields.stageEntity) == 0 )
  {
    sub_1C32E7C(this);
  }
  if ( x->fields.stageReinforcementId != stageEntity->fields.id )
    return 0;
  reinforcementsIdx = x->fields.reinforcementsIdx;
  _9__2 = v4->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Func_int__bool__o *)sub_1C32E6C(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__2,
      (Il2CppObject *)v4,
      Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__2__,
      0);
    v4->fields.__9__2 = _9__2;
    sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.__9__2, (int32_t)_9__2, v9, v10);
  }
  return BasicHelper__Any_int__51143952(
           reinforcementsIdx,
           (System_Func_T__bool__o *)_9__2,
           (const MethodInfo_30C6510 *)Method_BasicHelper_Any_int____78062168);
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


bool WarBoardData___c__DisplayClass190_0___IsReinforcementsApper_b__0(
        WarBoardData___c__DisplayClass190_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct WarBoardStageReinforcementsEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  v6 = pieceIndex->max_length;
  if ( !v6 )
    goto LABEL_14;
  if ( pieceIndex_k__BackingField->m_Items[0] == pieceIndex->m_Items[0] )
  {
    if ( max_length <= 1 || v6 <= 1 )
      goto LABEL_14;
    if ( pieceIndex_k__BackingField->m_Items[1] == pieceIndex->m_Items[1] )
    {
      if ( max_length > 2 && v6 > 2 )
        return pieceIndex_k__BackingField->m_Items[2] == pieceIndex->m_Items[2];
LABEL_14:
      sub_1C32E84(this);
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
    sub_1C32E7C(this);
  return x->fields.forceId == piece->fields.forceId && x->fields.groupId == piece->fields.groupId;
}


bool WarBoardData___c__DisplayClass77_0____ctor_b__6(
        WarBoardData___c__DisplayClass77_0_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_SaveData_o *piece; // x8

  if ( !x || (piece = this->fields.piece) == 0 )
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  return x->fields.treasureId == layout->fields.effectId;
}


bool WarBoardData___c__DisplayClass77_4____ctor_b__12(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserMasterData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0 )
    sub_1C32E7C(this);
  return x->fields.forceId == layout->fields.forceId && x->fields.groupId == layout->fields.groupId;
}


bool WarBoardData___c__DisplayClass77_4____ctor_b__13(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0 )
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  return x->fields.squareIndex == layout->fields.squareIndex;
}


bool WarBoardData___c__DisplayClass77_4____ctor_b__15(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserWallData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0 )
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  return !x->fields._isDead_k__BackingField && x->fields._uniqueIndex_k__BackingField == this->fields.uniqueId;
}