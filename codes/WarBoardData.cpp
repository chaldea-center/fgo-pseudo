void WarBoardData___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct WarBoardData_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C547B9 & 1) == 0 )
  {
    sub_1C3E564(&WarBoardData_TypeInfo);
    sub_1C3E564(&StringLiteral_1929/*"AFTER_CONTINUE_DEVICE_FOR_WARBOARD"*/);
    sub_1C3E564(&StringLiteral_15381/*"WARBOARDDATA_SAVEDATA"*/);
    byte_4C547B9 = 1;
  }
  WarBoardData_TypeInfo->static_fields->WARBOARDDATA_SAVEDATA_KEY = (struct System_String_o *)StringLiteral_15381/*"WARBOARDDATA_SAVEDATA"*/;
  sub_1C3E508((CGThumbnailListItem_o *)WarBoardData_TypeInfo->static_fields, StringLiteral_15381/*"WARBOARDDATA_SAVEDATA"*/, v1, v2);
  v3 = StringLiteral_1929/*"AFTER_CONTINUE_DEVICE_FOR_WARBOARD"*/;
  static_fields = WarBoardData_TypeInfo->static_fields;
  static_fields->AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY = (struct System_String_o *)StringLiteral_1929/*"AFTER_CONTINUE_DEVICE_FOR_WARBOARD"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY, v3, v5, v6);
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
  unsigned __int64 throughCondId; // x1
  Il2CppObject *MasterData_object; // x0
  struct WarBoardStageNpcMaster_o **p_stageNpcMaster; // x19
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  System_Collections_Generic_IEnumerable_WarBoardStageNpcEntity__o *WarBoardStageEntities; // x0
  WarBoardData___c_c *v53; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x21
  System_Func_T__TResult__o *_9__77_1; // x19
  Il2CppObject *v56; // x22
  struct WarBoardData___c_StaticFields *v57; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *v60; // x0
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  System_Collections_Generic_IEnumerable_WarBoardActionPointEntity__o *WarBoardActionPointEntities; // x0
  WarBoardData___c_c *v64; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v65; // x20
  System_Func_T__TResult__o *_9__77_2; // x19
  Il2CppObject *v67; // x21
  struct WarBoardData___c_StaticFields *v68; // x0
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  struct System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__o *v71; // x0
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  WarBoardData___c_c *v75; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x20
  System_Func_object__int__o *_9__77_3; // x19
  Il2CppObject *v78; // x21
  struct WarBoardData___c_StaticFields *v79; // x0
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *npcEntityDict; // x8
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *v83; // x0
  WarBoardData___c_c *v84; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v85; // x20
  System_Func_object__int__o *_9__77_4; // x19
  Il2CppObject *v87; // x21
  struct WarBoardData___c_StaticFields *v88; // x0
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  System_Collections_Generic_List_object__o *v91; // x27
  WarBoardData_c *v92; // x0
  WarBoardDataEntity_o *v93; // x26
  System_Collections_Generic_List_object__o *v94; // x24
  WarBoardStageLayoutEntity_array *v95; // x28
  System_String_o *WARBOARDDATA_SAVEDATA_KEY; // x19
  WarBoardData_c *v97; // x0
  int32_t progressType; // w19
  System_String_o *v99; // x19
  System_String_o *String; // x19
  System_Byte_array *v101; // x19
  MiniMessagePack_MiniMessagePacker_o *v102; // x20
  Il2CppObject *v103; // x0
  struct WarBoardData_WarBoardLocalSaveData_o **p_localSaveData; // x20
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8
  struct WarBoardPieceData_SaveData_array *pieceSaves; // x24
  _QWORD *v109; // x25
  unsigned __int64 v110; // x28
  __int64 v111; // x22
  int32_t v112; // w2
  const MethodInfo *v113; // x3
  WarBoardPieceData_SaveData_o *v114; // x1
  WarBoardPieceData_SaveData_o **v115; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v116; // x19
  System_Func_object__bool__o *v117; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v118; // x19
  System_Func_object__bool__o *v119; // x23
  struct WarBoardItemData_SaveData_array *itemSaves; // x24
  unsigned __int64 v121; // x28
  __int64 v122; // x19
  int32_t v123; // w2
  const MethodInfo *v124; // x3
  WarBoardItemData_SaveData_o *v125; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v126; // x22
  System_Func_object__bool__o *v127; // x23
  CGThumbnailListItem_o *v128; // x25
  struct WarBoardTreasureData_SaveData_array *treasureSaves; // x28
  char v130; // w26
  unsigned __int64 v131; // x29
  __int64 v132; // x19
  int32_t v133; // w2
  const MethodInfo *v134; // x3
  WarBoardTreasureData_SaveData_o *v135; // x1
  __int64 v136; // x21
  System_Collections_Generic_IEnumerable_TSource__o *klass; // x23
  System_Func_object__bool__o *v138; // x24
  WarBoardData___c_c *v139; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v140; // x21
  System_Func_object__bool__o *_9__77_9; // x19
  Il2CppObject *v142; // x23
  struct WarBoardData___c_StaticFields *v143; // x0
  int32_t v144; // w2
  const MethodInfo *v145; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v146; // x0
  System_Object_array *v147; // x0
  int32_t v148; // w2
  const MethodInfo *v149; // x3
  struct WarBoardWallData_SaveData_array *wallSaves; // x24
  unsigned __int64 v151; // x25
  __int64 v152; // x19
  int32_t v153; // w2
  const MethodInfo *v154; // x3
  WarBoardWallData_SaveData_o *v155; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v156; // x22
  System_Func_object__bool__o *v157; // x23
  int v158; // w19
  unsigned __int64 v159; // x23
  __int64 v160; // x24
  __int64 v161; // x25
  struct WarBoardSquareIndexData_SaveData_array *squareIndexInfo; // x8
  unsigned int *v163; // x27
  WarBoardSquareIndexData_SaveData_o *v164; // x21
  WarBoardSquareIndexData_o *v165; // x19
  int32_t v166; // w2
  const MethodInfo *v167; // x3
  int v168; // w19
  unsigned __int64 v169; // x23
  __int64 v170; // x24
  __int64 v171; // x25
  struct WarBoardBossBattleData_SaveData_array *bossBattleInfo; // x8
  unsigned int *v173; // x27
  WarBoardBossBattleData_SaveData_o *v174; // x21
  WarBoardBossBattleData_o *v175; // x19
  const MethodInfo *v176; // x2
  int32_t v177; // w2
  const MethodInfo *v178; // x3
  WarBoardData_c *v179; // x0
  int32_t v180; // w2
  const MethodInfo *v181; // x3
  unsigned __int64 v182; // x25
  __int64 v183; // x23
  int32_t v184; // w2
  const MethodInfo *v185; // x3
  WarBoardStageLayoutEntity_o *v186; // x1
  WarBoardStageLayoutEntity_o **v187; // x29
  WarBoardStageLayoutEntity_o *v188; // x19
  WarBoardSquareData_o *v189; // x22
  int32_t v190; // w2
  const MethodInfo *v191; // x3
  __int64 v192; // x9
  WarBoardStageLayoutEntity_o *v193; // x8
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
  __int64 v226; // x8
  _QWORD *v227; // x9
  __int64 v228; // x10
  NpcFollowerEntity_o *Entity_42472724; // x0
  NpcFollowerEntity_o *v230; // x19
  int32_t v231; // w2
  const MethodInfo *v232; // x3
  struct System_Object_array *v233; // x8
  _QWORD *v234; // x9
  __int64 v235; // x10
  Il2CppClass **v236; // x0
  __int64 v237; // x8
  System_Collections_Generic_List_object__o *v238; // x0
  Il2CppObject *v239; // x1
  struct System_Object_array *v240; // x8
  _QWORD *v241; // x9
  __int64 v242; // x10
  Il2CppClass **v243; // x0
  WarBoardStageLayoutEntity_o *v244; // x21
  System_Collections_Generic_IEnumerable_TSource__o *getItemInfo; // x19
  System_Func_object__bool__o *v246; // x20
  Il2CppObject *v247; // x0
  WarBoardStageLayoutEntity_o *v248; // x19
  WarBoardUserGetItemData_o *v249; // x21
  WarBoardItemData_o *v250; // x20
  System_Collections_Generic_List_object__o *v251; // x12
  int32_t version; // w10
  struct System_Object_array *v253; // x8
  __int64 *v254; // x9
  System_Collections_Generic_IEnumerable_TSource__o *treasureInfo; // x19
  System_Func_object__bool__o *v256; // x20
  System_Collections_Generic_IEnumerable_TSource__o *wallInfo; // x19
  System_Func_object__bool__o *v258; // x20
  Il2CppObject *v259; // x0
  WarBoardStageLayoutEntity_o *v260; // x19
  WarBoardUserWallData_o *v261; // x21
  __int64 v262; // x9
  __int64 v263; // x10
  Il2CppClass **v264; // x0
  System_Object_array *v265; // x0
  WarBoardData_o *v266; // x25
  int32_t v267; // w2
  const MethodInfo *v268; // x3
  System_Object_array *v269; // x0
  int32_t v270; // w2
  const MethodInfo *v271; // x3
  System_Object_array *v272; // x0
  System_Collections_Generic_IEnumerable_T__o **p_pieces; // x23
  int32_t v274; // w2
  const MethodInfo *v275; // x3
  System_Object_array *pieces; // x19
  System_Comparison_T__o *v277; // x20
  System_Object_array *v278; // x0
  int32_t v279; // w2
  const MethodInfo *v280; // x3
  System_Object_array *v281; // x0
  int32_t v282; // w2
  const MethodInfo *v283; // x3
  System_Object_array *v284; // x0
  int32_t v285; // w2
  const MethodInfo *v286; // x3
  System_Object_array *v287; // x0
  int32_t v288; // w2
  const MethodInfo *v289; // x3
  int32_t v290; // w2
  const MethodInfo *v291; // x3
  struct WarBoardData_WarBoardLocalSaveData_o *v292; // x8
  struct WarBoardPieceData_SaveData_array *v293; // x28
  unsigned __int64 v294; // x29
  __int64 v295; // x21
  int32_t v296; // w2
  const MethodInfo *v297; // x3
  WarBoardPieceData_SaveData_o *v298; // x1
  WarBoardPieceData_SaveData_o **v299; // x22
  System_Collections_Generic_IEnumerable_T__o *v300; // x19
  System_Func_object__bool__o *v301; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v302; // x19
  System_Func_object__bool__o *v303; // x24
  Il2CppObject *v304; // x21
  System_Collections_Generic_List_object__o *v305; // x24
  int32_t id; // w19
  WarBoardPieceData_SaveData_o *v307; // x26
  WarBoardPieceData_o *v308; // x25
  int32_t v309; // w2
  const MethodInfo *v310; // x3
  struct System_Object_array *v311; // x8
  _QWORD *v312; // x9
  __int64 v313; // x10
  Il2CppClass **v314; // x0
  System_Object_array *v315; // x0
  int32_t v316; // w2
  const MethodInfo *v317; // x3
  __int64 v318; // x20
  int v319; // w8
  unsigned int v320; // w21
  __int64 v321; // x8
  WarBoardItemData_SaveData_o *v322; // x19
  _DWORD *data; // x20
  int v324; // w8
  unsigned int v325; // w21
  char *v326; // x8
  WarBoardTreasureData_SaveData_o *v327; // x19
  __int64 v328; // x20
  int v329; // w8
  unsigned int v330; // w21
  __int64 v331; // x8
  WarBoardWallData_SaveData_o *v332; // x19
  Il2CppClass *element_class; // x20
  int namespaze; // w8
  unsigned int v335; // w21
  void **v336; // x8
  WarBoardSquareData_SaveData_o *v337; // x19
  System_Collections_Generic_List_object__o *v338; // x19
  int32_t v339; // w2
  const MethodInfo *v340; // x3
  int32_t v341; // w2
  const MethodInfo *v342; // x3
  struct WarBoardData_WarBoardLocalSaveData_o *v343; // x8
  struct WarBoardEventData_SaveData_array *eventSaves; // x20
  il2cpp_array_size_t v345; // x8
  unsigned __int64 v346; // x23
  WarBoardEventData_SaveData_o *v347; // x19
  System_Collections_Generic_List_object__o *v348; // x21
  WarBoardEventData_o *v349; // x22
  int32_t v350; // w2
  const MethodInfo *v351; // x3
  struct System_Object_array *v352; // x8
  _QWORD *v353; // x9
  __int64 v354; // x10
  Il2CppClass **v355; // x0
  Il2CppClass *v356; // x8
  struct System_Int32_array *typeHierarchy; // x1
  int32_t v358; // w2
  const MethodInfo *v359; // x3
  struct WarBoardData_WarBoardLocalSaveData_o *v360; // x8
  CGThumbnailListItem_c *latestBattlePieceUniqueIndexes; // x1
  System_Collections_Generic_List_object__o *v362; // x19
  int32_t v363; // w2
  const MethodInfo *v364; // x3
  _QWORD *properties; // x20
  __int64 v366; // x8
  unsigned __int64 v367; // x23
  WarBoardPrevCondData_SaveData_o *v368; // x19
  System_Collections_Generic_List_object__o *v369; // x21
  WarBoardPrevCondData_o *v370; // x22
  int32_t v371; // w2
  const MethodInfo *v372; // x3
  struct System_Object_array *v373; // x8
  _QWORD *v374; // x9
  __int64 v375; // x10
  Il2CppClass **v376; // x0
  System_Collections_Generic_List_object__o *v377; // x19
  int32_t v378; // w2
  const MethodInfo *v379; // x3
  _QWORD *methods; // x20
  __int64 v381; // x8
  unsigned __int64 v382; // x23
  HoldReinforcementsData_SaveData_o *v383; // x19
  System_Collections_Generic_List_object__o *v384; // x21
  HoldReinforcementsData_o *v385; // x22
  int32_t v386; // w2
  const MethodInfo *v387; // x3
  struct System_Object_array *v388; // x8
  _QWORD *v389; // x9
  __int64 v390; // x10
  Il2CppClass **v391; // x0
  System_Collections_Generic_List_TSource__o *v392; // x0
  int32_t v393; // w2
  const MethodInfo *v394; // x3
  System_Collections_Generic_List_object__o *v395; // x19
  int32_t v396; // w2
  const MethodInfo *v397; // x3
  int32_t v398; // w2
  const MethodInfo *v399; // x3
  Il2CppClass **implementedInterfaces; // x20
  Il2CppClass *v401; // x8
  unsigned __int64 v402; // x23
  WarBoardUiData_SaveData_o *v403; // x19
  System_Collections_Generic_List_object__o *v404; // x21
  WarBoardUiData_o *v405; // x22
  int32_t v406; // w2
  const MethodInfo *v407; // x3
  struct System_Object_array *v408; // x8
  _QWORD *v409; // x9
  __int64 v410; // x10
  Il2CppClass **v411; // x0
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets; // x1
  Il2CppClass *v413; // x8
  WarBoardData_WarBoardLocalSaveData_o *v414; // x19
  int32_t v415; // w2
  const MethodInfo *v416; // x3
  __int64 v417; // x0
  CGThumbnailListItem_o *p_bgAnimationInfo_k__BackingField; // [xsp+10h] [xbp-170h]
  CGThumbnailListItem_o *p_listUiData; // [xsp+18h] [xbp-168h]
  CGThumbnailListItem_o *p_playedStageReinforcementsList; // [xsp+20h] [xbp-160h]
  CGThumbnailListItem_o *p_latestBattlePieceUniqueIndexes; // [xsp+28h] [xbp-158h]
  struct System_Int32_array **p_latestPieceActionSquareIndexes; // [xsp+30h] [xbp-150h]
  CGThumbnailListItem_o *p_reinforcementsSaveList; // [xsp+38h] [xbp-148h]
  DataMasterBase_TMaster__TEntity__PKType__o *v424; // [xsp+40h] [xbp-140h]
  System_Collections_Generic_List_object__o *v425; // [xsp+48h] [xbp-138h]
  WarBoardDataEntity_WarBoardDeckData_o **p_myDeck; // [xsp+50h] [xbp-130h]
  struct System_Collections_Generic_List_int__o **p_masterExistsForce; // [xsp+58h] [xbp-128h]
  System_Collections_Generic_List_object__o *v428; // [xsp+60h] [xbp-120h]
  System_Collections_Generic_List_object__o *v429; // [xsp+68h] [xbp-118h]
  System_Collections_Generic_List_object__o *v430; // [xsp+70h] [xbp-110h]
  NpcFollowerMaster_o *v431; // [xsp+78h] [xbp-108h]
  WarBoardStagePieceDetailMaster_o *Master_object; // [xsp+80h] [xbp-100h]
  System_Collections_Generic_List_object__o *v433; // [xsp+88h] [xbp-F8h]
  WarBoardData_Fields *p_fields; // [xsp+90h] [xbp-F0h]
  WarBoardCommonReleaseMaster_o *v435; // [xsp+98h] [xbp-E8h]
  WarBoardData_o *v436; // [xsp+A0h] [xbp-E0h]
  struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o **p_npcEntityDict; // [xsp+A8h] [xbp-D8h]
  System_Collections_Generic_List_object__o *v438; // [xsp+B0h] [xbp-D0h]
  System_Collections_Generic_List_object__o *v439; // [xsp+B0h] [xbp-D0h]
  System_Collections_Generic_List_object__o *v440; // [xsp+B8h] [xbp-C8h]
  WarBoardDataEntity_WarBoardDeckData_o **p_enemyDeck; // [xsp+C8h] [xbp-B8h]
  CGThumbnailListItem_o *p_listPrevCond; // [xsp+D0h] [xbp-B0h]
  struct System_Collections_Generic_List_WarBoardEventData__o **p_listEvent; // [xsp+D8h] [xbp-A8h]
  int32_t v445; // [xsp+E4h] [xbp-9Ch]
  int32_t questId; // [xsp+E8h] [xbp-98h]
  int32_t npcIdx; // [xsp+ECh] [xbp-94h]
  System_Object_array **v449; // [xsp+F0h] [xbp-90h]
  WarBoardDataEntity_o *v450; // [xsp+F0h] [xbp-90h]
  il2cpp_array_size_t max_length; // [xsp+F8h] [xbp-88h]
  WarBoardRoadEntity_array *roadEntitiesb; // [xsp+100h] [xbp-80h]
  bool isChangeName; // [xsp+10Ch] [xbp-74h] BYREF
  Il2CppObject *v455; // [xsp+110h] [xbp-70h] BYREF
  WarBoardStagePieceDetailEntity_o *entity; // [xsp+118h] [xbp-68h] BYREF

  if ( (byte_4C54761 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Array_Resize_WarBoardBossBattleData___);
    sub_1C3E564(&Method_System_Array_Resize_WarBoardSquareIndexData___);
    sub_1C3E564(&Method_System_Array_Sort_WarBoardPieceData___);
    sub_1C3E564(&Method_System_Array_Sort_WarBoardStageLayoutEntity___);
    sub_1C3E564(&Method_BasicHelper_Any_WarBoardPieceData___);
    sub_1C3E564(&System_Comparison_WarBoardPieceData__TypeInfo);
    sub_1C3E564(&System_Comparison_WarBoardStageLayoutEntity__TypeInfo);
    sub_1C3E564(&System_Convert_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_WarBoardActionPointMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_WarBoardStageDetailMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_WarBoardStageNpcMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Values__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C3E564(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Count_WarBoardBossBattleData_SaveData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData_SaveData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserTreasureData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Max_WarBoardStageNpcEntity___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_WarBoardUserTreasureData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToDictionary_WarBoardActionPointEntity__uint___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToDictionary_WarBoardStageNpcEntity__uint___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_WarBoardUserTreasureData___);
    sub_1C3E564(&System_Func_WarBoardUserTreasureData__bool__TypeInfo);
    sub_1C3E564(&System_Func_WarBoardStageNpcEntity__uint__TypeInfo);
    sub_1C3E564(&System_Func_WarBoardUserWallData__bool__TypeInfo);
    sub_1C3E564(&System_Func_WarBoardUserMasterData__bool__TypeInfo);
    sub_1C3E564(&System_Func_WarBoardStageNpcEntity__int__TypeInfo);
    sub_1C3E564(&System_Func_WarBoardUserServantData__bool__TypeInfo);
    sub_1C3E564(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C3E564(&System_Func_WarBoardUserGetItemData__bool__TypeInfo);
    sub_1C3E564(&System_Func_WarBoardActionPointEntity__uint__TypeInfo);
    sub_1C3E564(&HoldReinforcementsData_TypeInfo);
    sub_1C3E564(&int___TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardSquareData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardUiData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardEventData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardEffectData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardTreasureData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardWallData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_HoldReinforcementsData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardItemData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardTreasureData__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardEffectData__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardWallData__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardItemData__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardPrevCondData___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardSquareData___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardEventData___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardUiData___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_HoldReinforcementsData___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardTreasureData___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardItemData___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardWallData___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardEffectData___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_WarBoardWallData__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_WarBoardTreasureData__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_WarBoardItemData__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_WarBoardUiData__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_WarBoardPrevCondData__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_WarBoardEffectData__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_WarBoardEventData__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_HoldReinforcementsData__TypeInfo);
    sub_1C3E564(&Method_MiniMessagePack_MiniMessagePacker_UnpackClass_WarBoardData_WarBoardLocalSaveData___);
    sub_1C3E564(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C3E564(&Method_WarBoardData___c___ctor_b__77_0__);
    sub_1C3E564(&Method_WarBoardData___c___ctor_b__77_1__);
    sub_1C3E564(&Method_WarBoardData___c___ctor_b__77_2__);
    sub_1C3E564(&Method_WarBoardData___c___ctor_b__77_3__);
    sub_1C3E564(&Method_WarBoardData___c___ctor_b__77_4__);
    sub_1C3E564(&Method_WarBoardData___c___ctor_b__77_9__);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass77_0___ctor_b__5__);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass77_0___ctor_b__6__);
    sub_1C3E564(&WarBoardData___c__DisplayClass77_0_TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass77_1___ctor_b__7__);
    sub_1C3E564(&WarBoardData___c__DisplayClass77_1_TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass77_2___ctor_b__8__);
    sub_1C3E564(&WarBoardData___c__DisplayClass77_2_TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass77_3___ctor_b__10__);
    sub_1C3E564(&WarBoardData___c__DisplayClass77_3_TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__11__);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__12__);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__13__);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__14__);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__15__);
    sub_1C3E564(&WarBoardData___c__DisplayClass77_4_TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass77_5___ctor_b__16__);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass77_5___ctor_b__17__);
    sub_1C3E564(&WarBoardData___c__DisplayClass77_5_TypeInfo);
    sub_1C3E564(&WarBoardData___c_TypeInfo);
    sub_1C3E564(&uint___TypeInfo);
    sub_1C3E564(&WarBoardBossBattleData_TypeInfo);
    sub_1C3E564(&Method_WarBoardData_ComparePiece__);
    sub_1C3E564(&WarBoardData_TypeInfo);
    sub_1C3E564(&WarBoardEffectData_TypeInfo);
    sub_1C3E564(&WarBoardEventData_TypeInfo);
    sub_1C3E564(&WarBoardItemData_TypeInfo);
    sub_1C3E564(&WarBoardData_WarBoardLocalSaveData_TypeInfo);
    sub_1C3E564(&WarBoardPieceData_TypeInfo);
    sub_1C3E564(&WarBoardPrevCondData_TypeInfo);
    sub_1C3E564(&WarBoardSquareData_TypeInfo);
    sub_1C3E564(&WarBoardSquareIndexData_TypeInfo);
    sub_1C3E564(&WarBoardTreasureData_TypeInfo);
    sub_1C3E564(&WarBoardUiData_TypeInfo);
    sub_1C3E564(&WarBoardWallData_TypeInfo);
    byte_4C54761 = 1;
  }
  v455 = 0;
  entity = 0;
  isChangeName = 0;
  v8 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v8,
    (const MethodInfo_3474E30 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  this->fields._bgAnimationInfo_k__BackingField = (struct System_Collections_Generic_Dictionary_string__object__o *)v8;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._bgAnimationInfo_k__BackingField, (int32_t)v8, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_WarBoardEventData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_WarBoardEventData___ctor__);
  this->fields.listEvent = (struct System_Collections_Generic_List_WarBoardEventData__o *)v11;
  p_listEvent = &this->fields.listEvent;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.listEvent, (int32_t)v11, v12, v13);
  *(_QWORD *)&this->fields.winCondId = -1;
  v14 = (struct System_Int32_array *)sub_1C3E60C(int___TypeInfo, 2);
  this->fields.latestPieceActionSquareIndexes = v14;
  p_latestPieceActionSquareIndexes = &this->fields.latestPieceActionSquareIndexes;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.latestPieceActionSquareIndexes, (int32_t)v14, v15, v16);
  v17 = (struct System_UInt32_array *)sub_1C3E60C(uint___TypeInfo, 0);
  this->fields.latestBattlePieceUniqueIndexes = v17;
  p_latestBattlePieceUniqueIndexes = (CGThumbnailListItem_o *)&this->fields.latestBattlePieceUniqueIndexes;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.latestBattlePieceUniqueIndexes, (int32_t)v17, v18, v19);
  v20 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_WarBoardPrevCondData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_WarBoardPrevCondData___ctor__);
  this->fields.listPrevCond = (struct System_Collections_Generic_List_WarBoardPrevCondData__o *)v20;
  p_listPrevCond = (CGThumbnailListItem_o *)&this->fields.listPrevCond;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.listPrevCond, (int32_t)v20, v21, v22);
  v23 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_HoldReinforcementsData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_HoldReinforcementsData___ctor__);
  this->fields.reinforcementsSaveList = (struct System_Collections_Generic_List_HoldReinforcementsData__o *)v23;
  p_reinforcementsSaveList = (CGThumbnailListItem_o *)&this->fields.reinforcementsSaveList;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.reinforcementsSaveList, (int32_t)v23, v24, v25);
  v26 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v26,
    (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.playedStageReinforcementsList = v26;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.playedStageReinforcementsList, (int32_t)v26, v27, v28);
  v29 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_WarBoardUiData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_WarBoardUiData___ctor__);
  this->fields.listUiData = (struct System_Collections_Generic_List_WarBoardUiData__o *)v29;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.listUiData, (int32_t)v29, v30, v31);
  v32 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v32,
    (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.masterExistsForce = v32;
  p_masterExistsForce = &this->fields.masterExistsForce;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.masterExistsForce, (int32_t)v32, v33, v34);
  v35 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v35,
    (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.reinforcementsAppointmentSquareList = v35;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.reinforcementsAppointmentSquareList, (int32_t)v35, v36, v37);
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
    _9__77_0 = (System_Comparison_T__o *)sub_1C3E7B0(System_Comparison_WarBoardStageLayoutEntity__TypeInfo);
    System_Comparison_object____ctor(_9__77_0, v40, Method_WarBoardData___c___ctor_b__77_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__77_0 = (struct System_Comparison_WarBoardStageLayoutEntity__o *)_9__77_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__77_0, (int32_t)_9__77_0, v42, v43);
  }
  System_Array__Sort_object__51143048(
    (System_Object_array *)layoutEntities,
    _9__77_0,
    (const MethodInfo_30C6188 *)Method_System_Array_Sort_WarBoardStageLayoutEntity___);
  this->fields.stageEntity = stage;
  p_fields = &this->fields;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)stage, v44, v45);
  if ( !layoutEntities )
    goto LABEL_359;
  max_length = layoutEntities->max_length;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_359;
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_WarBoardStageDetailMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_359;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_WarBoardStageNpcMaster___);
  this->fields.stageNpcMaster = (struct WarBoardStageNpcMaster_o *)MasterData_object;
  p_stageNpcMaster = &this->fields.stageNpcMaster;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.stageNpcMaster, (int32_t)MasterData_object, v50, v51);
  if ( !stage )
    goto LABEL_359;
  Instance = (__int64)*p_stageNpcMaster;
  if ( !*p_stageNpcMaster )
    goto LABEL_359;
  WarBoardStageEntities = WarBoardStageNpcMaster__GetWarBoardStageEntities(
                            (WarBoardStageNpcMaster_o *)Instance,
                            stage->fields.id,
                            0);
  v53 = WarBoardData___c_TypeInfo;
  v54 = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardStageEntities;
  p_playedStageReinforcementsList = (CGThumbnailListItem_o *)&this->fields.playedStageReinforcementsList;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v53 = WarBoardData___c_TypeInfo;
  }
  _9__77_1 = (System_Func_T__TResult__o *)v53->static_fields->__9__77_1;
  if ( !_9__77_1 )
  {
    if ( !v53->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v53);
      v53 = WarBoardData___c_TypeInfo;
    }
    v56 = (Il2CppObject *)v53->static_fields->__9;
    _9__77_1 = (System_Func_T__TResult__o *)sub_1C3E7B0(System_Func_WarBoardStageNpcEntity__uint__TypeInfo);
    System_Func_object__uint____ctor(_9__77_1, v56, Method_WarBoardData___c___ctor_b__77_1__, 0);
    v57 = WarBoardData___c_TypeInfo->static_fields;
    v57->__9__77_1 = (struct System_Func_WarBoardStageNpcEntity__uint__o *)_9__77_1;
    sub_1C3E508((CGThumbnailListItem_o *)&v57->__9__77_1, (int32_t)_9__77_1, v58, v59);
  }
  v60 = (struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *)System_Linq_Enumerable__ToDictionary_object__uint_(
                                                                                          v54,
                                                                                          (System_Func_TSource__TKey__o *)_9__77_1,
                                                                                          (const MethodInfo_313975C *)Method_System_Linq_Enumerable_ToDictionary_WarBoardStageNpcEntity__uint___);
  this->fields.npcEntityDict = v60;
  p_npcEntityDict = &this->fields.npcEntityDict;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.npcEntityDict, (int32_t)v60, v61, v62);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_359;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_WarBoardActionPointMaster___);
  if ( !Instance )
    goto LABEL_359;
  WarBoardActionPointEntities = WarBoardActionPointMaster__GetWarBoardActionPointEntities(
                                  (WarBoardActionPointMaster_o *)Instance,
                                  stage->fields.id,
                                  0);
  v64 = WarBoardData___c_TypeInfo;
  v65 = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardActionPointEntities;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v64 = WarBoardData___c_TypeInfo;
  }
  _9__77_2 = (System_Func_T__TResult__o *)v64->static_fields->__9__77_2;
  if ( !_9__77_2 )
  {
    if ( !v64->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v64);
      v64 = WarBoardData___c_TypeInfo;
    }
    v67 = (Il2CppObject *)v64->static_fields->__9;
    _9__77_2 = (System_Func_T__TResult__o *)sub_1C3E7B0(System_Func_WarBoardActionPointEntity__uint__TypeInfo);
    System_Func_object__uint____ctor(_9__77_2, v67, Method_WarBoardData___c___ctor_b__77_2__, 0);
    v68 = WarBoardData___c_TypeInfo->static_fields;
    v68->__9__77_2 = (struct System_Func_WarBoardActionPointEntity__uint__o *)_9__77_2;
    sub_1C3E508((CGThumbnailListItem_o *)&v68->__9__77_2, (int32_t)_9__77_2, v69, v70);
  }
  v71 = (struct System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__o *)System_Linq_Enumerable__ToDictionary_object__uint_(
                                                                                             v65,
                                                                                             (System_Func_TSource__TKey__o *)_9__77_2,
                                                                                             (const MethodInfo_313975C *)Method_System_Linq_Enumerable_ToDictionary_WarBoardActionPointEntity__uint___);
  this->fields.actionPointEntityDict = v71;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.actionPointEntityDict, (int32_t)v71, v72, v73);
  Instance = (__int64)this->fields.npcEntityDict;
  if ( !Instance )
    goto LABEL_359;
  Values = System_Collections_Generic_Dictionary_uint__object___get_Values(
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)Instance,
             (const MethodInfo_34AE1C0 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Values__);
  v75 = WarBoardData___c_TypeInfo;
  v76 = (System_Collections_Generic_IEnumerable_TSource__o *)Values;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v75 = WarBoardData___c_TypeInfo;
  }
  _9__77_3 = (System_Func_object__int__o *)v75->static_fields->__9__77_3;
  if ( !_9__77_3 )
  {
    if ( !v75->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v75);
      v75 = WarBoardData___c_TypeInfo;
    }
    v78 = (Il2CppObject *)v75->static_fields->__9;
    _9__77_3 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_WarBoardStageNpcEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__77_3, v78, Method_WarBoardData___c___ctor_b__77_3__, 0);
    v79 = WarBoardData___c_TypeInfo->static_fields;
    v79->__9__77_3 = (struct System_Func_WarBoardStageNpcEntity__int__o *)_9__77_3;
    sub_1C3E508((CGThumbnailListItem_o *)&v79->__9__77_3, (int32_t)_9__77_3, v80, v81);
  }
  Instance = System_Linq_Enumerable__Max_object_(
               v76,
               (System_Func_TSource__int__o *)_9__77_3,
               (const MethodInfo_3127E7C *)Method_System_Linq_Enumerable_Max_WarBoardStageNpcEntity___);
  npcEntityDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.npcEntityDict;
  this->fields._maxForceId_k__BackingField = Instance;
  if ( !npcEntityDict )
    goto LABEL_359;
  v83 = System_Collections_Generic_Dictionary_uint__object___get_Values(
          npcEntityDict,
          (const MethodInfo_34AE1C0 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Values__);
  v84 = WarBoardData___c_TypeInfo;
  v85 = (System_Collections_Generic_IEnumerable_TSource__o *)v83;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v84 = WarBoardData___c_TypeInfo;
  }
  _9__77_4 = (System_Func_object__int__o *)v84->static_fields->__9__77_4;
  if ( !_9__77_4 )
  {
    if ( !v84->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v84);
      v84 = WarBoardData___c_TypeInfo;
    }
    v87 = (Il2CppObject *)v84->static_fields->__9;
    _9__77_4 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_WarBoardStageNpcEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__77_4, v87, Method_WarBoardData___c___ctor_b__77_4__, 0);
    v88 = WarBoardData___c_TypeInfo->static_fields;
    v88->__9__77_4 = (struct System_Func_WarBoardStageNpcEntity__int__o *)_9__77_4;
    sub_1C3E508((CGThumbnailListItem_o *)&v88->__9__77_4, (int32_t)_9__77_4, v89, v90);
  }
  p_bgAnimationInfo_k__BackingField = (CGThumbnailListItem_o *)&this->fields._bgAnimationInfo_k__BackingField;
  p_listUiData = (CGThumbnailListItem_o *)&this->fields.listUiData;
  this->fields._maxGroupId_k__BackingField = System_Linq_Enumerable__Max_object_(
                                               v85,
                                               (System_Func_TSource__int__o *)_9__77_4,
                                               (const MethodInfo_3127E7C *)Method_System_Linq_Enumerable_Max_WarBoardStageNpcEntity___);
  v436 = this;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_359;
  v424 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (WarBoardStagePieceDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
  v431 = (NpcFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v435 = (WarBoardCommonReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  v440 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v440,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor__);
  v433 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v433,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor__);
  v91 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v91,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v430 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_WarBoardItemData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v430,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_WarBoardItemData___ctor__);
  v425 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_WarBoardTreasureData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v425,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_WarBoardTreasureData___ctor__);
  v428 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_WarBoardWallData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v428,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_WarBoardWallData___ctor__);
  v429 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_WarBoardEffectData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v429,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_WarBoardEffectData___ctor__);
  v92 = WarBoardData_TypeInfo;
  if ( !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    v92 = WarBoardData_TypeInfo;
  }
  v93 = serverData;
  v94 = v440;
  v95 = layoutEntities;
  WARBOARDDATA_SAVEDATA_KEY = v92->static_fields->WARBOARDDATA_SAVEDATA_KEY;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  Instance = EncryptedPlayerPrefs__HasKey(WARBOARDDATA_SAVEDATA_KEY, 0);
  if ( (Instance & 1) != 0 )
  {
    if ( !serverData )
      goto LABEL_359;
    v97 = WarBoardData_TypeInfo;
    progressType = serverData->fields.progressType;
    if ( !WarBoardData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    if ( progressType == 3 )
    {
      WarBoardData__DeleteLocalSave((const MethodInfo *)v97);
    }
    else
    {
      v99 = WarBoardData_TypeInfo->static_fields->WARBOARDDATA_SAVEDATA_KEY;
      if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
      String = EncryptedPlayerPrefs__GetString(v99, 0);
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v101 = System_Convert__FromBase64String(String, 0);
      v102 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C3E7B0(MiniMessagePack_MiniMessagePacker_TypeInfo);
      MiniMessagePack_MiniMessagePacker___ctor(v102, 0);
      if ( !v102 )
        goto LABEL_359;
      v103 = MiniMessagePack_MiniMessagePacker__UnpackClass_object_(
               v102,
               v101,
               (const MethodInfo_3180594 *)Method_MiniMessagePack_MiniMessagePacker_UnpackClass_WarBoardData_WarBoardLocalSaveData___);
      this->fields.localSaveData = (struct WarBoardData_WarBoardLocalSaveData_o *)v103;
      p_localSaveData = &this->fields.localSaveData;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.localSaveData, (int32_t)v103, v105, v106);
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
        Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        v109 = (_QWORD *)Instance;
        if ( SLODWORD(pieceSaves->max_length) < 1 )
        {
LABEL_87:
          v449 = (System_Object_array **)v109;
          if ( !*p_localSaveData )
            goto LABEL_359;
          itemSaves = (*p_localSaveData)->fields.itemSaves;
          v438 = v91;
          if ( !itemSaves )
            goto LABEL_359;
          if ( SLODWORD(itemSaves->max_length) < 1 )
          {
LABEL_97:
            if ( !v109 )
              goto LABEL_359;
            v128 = (CGThumbnailListItem_o *)(v109 + 5);
            if ( v449[5] )
            {
              if ( !*p_localSaveData )
                goto LABEL_359;
              treasureSaves = (*p_localSaveData)->fields.treasureSaves;
              if ( !treasureSaves )
                goto LABEL_359;
              if ( SLODWORD(treasureSaves->max_length) >= 1 )
              {
                v130 = 0;
                v131 = 0;
                do
                {
                  v132 = sub_1C3E7B0(WarBoardData___c__DisplayClass77_2_TypeInfo);
                  WarBoardData___c__DisplayClass77_2___ctor((WarBoardData___c__DisplayClass77_2_o *)v132, 0);
                  if ( v131 >= LODWORD(treasureSaves->max_length) )
                    goto LABEL_360;
                  if ( !v132 )
                    goto LABEL_359;
                  v135 = treasureSaves->m_Items[v131];
                  *(_QWORD *)(v132 + 16) = v135;
                  v136 = v132 + 16;
                  sub_1C3E508((CGThumbnailListItem_o *)(v132 + 16), (int32_t)v135, v133, v134);
                  klass = (System_Collections_Generic_IEnumerable_TSource__o *)v128->klass;
                  v138 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardUserTreasureData__bool__TypeInfo);
                  System_Func_object__bool____ctor(
                    v138,
                    (Il2CppObject *)v132,
                    Method_WarBoardData___c__DisplayClass77_2___ctor_b__8__,
                    0);
                  Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__51525108(
                                        klass,
                                        (System_Func_TSource__bool__o *)v138,
                                        (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserTreasureData___);
                  if ( Instance )
                  {
                    if ( !*(_QWORD *)v136 )
                      goto LABEL_359;
                    if ( !*(_BYTE *)(*(_QWORD *)v136 + 20LL) )
                    {
                      v130 = 1;
                      *(_BYTE *)(Instance + 20) = 0;
                    }
                  }
                  ++v131;
                }
                while ( (__int64)v131 < SLODWORD(treasureSaves->max_length) );
                if ( (v130 & 1) != 0 )
                {
                  v139 = WarBoardData___c_TypeInfo;
                  v140 = (System_Collections_Generic_IEnumerable_TSource__o *)v128->klass;
                  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
                    v139 = WarBoardData___c_TypeInfo;
                  }
                  _9__77_9 = (System_Func_object__bool__o *)v139->static_fields->__9__77_9;
                  if ( !_9__77_9 )
                  {
                    if ( !v139->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(v139);
                      v139 = WarBoardData___c_TypeInfo;
                    }
                    v142 = (Il2CppObject *)v139->static_fields->__9;
                    _9__77_9 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardUserTreasureData__bool__TypeInfo);
                    System_Func_object__bool____ctor(_9__77_9, v142, Method_WarBoardData___c___ctor_b__77_9__, 0);
                    v143 = WarBoardData___c_TypeInfo->static_fields;
                    v143->__9__77_9 = (struct System_Func_WarBoardUserTreasureData__bool__o *)_9__77_9;
                    sub_1C3E508((CGThumbnailListItem_o *)&v143->__9__77_9, (int32_t)_9__77_9, v144, v145);
                  }
                  v146 = System_Linq_Enumerable__Where_object_(
                           v140,
                           (System_Func_TSource__bool__o *)_9__77_9,
                           (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_WarBoardUserTreasureData___);
                  v147 = System_Linq_Enumerable__ToArray_object_(
                           v146,
                           (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_WarBoardUserTreasureData___);
                  v128->klass = (CGThumbnailListItem_c *)v147;
                  sub_1C3E508(v128, (int32_t)v147, v148, v149);
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
              v158 = System_Linq_Enumerable__Count_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)(*p_localSaveData)->fields.squareIndexInfo,
                       (const MethodInfo_3119ED4 *)Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData_SaveData___);
              System_Array__Resize_object_(
                v449 + 11,
                v158,
                (const MethodInfo_30B78D4 *)Method_System_Array_Resize_WarBoardSquareIndexData___);
              v95 = layoutEntities;
              if ( v158 >= 1 )
              {
                v159 = 0;
                v160 = (unsigned int)v158;
                v161 = 8;
                while ( *p_localSaveData )
                {
                  squareIndexInfo = (*p_localSaveData)->fields.squareIndexInfo;
                  if ( !squareIndexInfo )
                    break;
                  if ( v159 >= LODWORD(squareIndexInfo->max_length) )
                    goto LABEL_360;
                  v163 = (unsigned int *)v449[11];
                  v164 = *(WarBoardSquareIndexData_SaveData_o **)((char *)&squareIndexInfo->obj.klass + v161 * 4);
                  v165 = (WarBoardSquareIndexData_o *)sub_1C3E7B0(WarBoardSquareIndexData_TypeInfo);
                  WarBoardSquareIndexData___ctor_38210812(v165, v164, 0);
                  if ( !v163 )
                    break;
                  if ( v165 )
                  {
                    Instance = sub_1C3E6A0(v165, *(_QWORD *)(*(_QWORD *)v163 + 64LL));
                    if ( !Instance )
                    {
LABEL_361:
                      v417 = sub_1C3E7E4();
                      sub_1C3E68C(v417, 0);
                    }
                  }
                  if ( v159 >= v163[6] )
                    goto LABEL_360;
                  *(_QWORD *)&v163[v161] = v165;
                  sub_1C3E508((CGThumbnailListItem_o *)&v163[v161], (int32_t)v165, v166, v167);
                  v91 = v438;
                  ++v159;
                  v161 += 2;
                  if ( v160 == v159 )
                    goto LABEL_138;
                }
                goto LABEL_359;
              }
LABEL_138:
              if ( !*p_localSaveData )
                goto LABEL_359;
              v93 = (WarBoardDataEntity_o *)v449;
              v168 = System_Linq_Enumerable__Count_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)(*p_localSaveData)->fields.bossBattleInfo,
                       (const MethodInfo_3119ED4 *)Method_System_Linq_Enumerable_Count_WarBoardBossBattleData_SaveData___);
              System_Array__Resize_object_(
                v449 + 12,
                v168,
                (const MethodInfo_30B78D4 *)Method_System_Array_Resize_WarBoardBossBattleData___);
              if ( v168 >= 1 )
              {
                v169 = 0;
                v170 = (unsigned int)v168;
                v171 = 8;
                do
                {
                  if ( !*p_localSaveData )
                    goto LABEL_359;
                  bossBattleInfo = (*p_localSaveData)->fields.bossBattleInfo;
                  if ( !bossBattleInfo )
                    goto LABEL_359;
                  if ( v169 >= LODWORD(bossBattleInfo->max_length) )
                    goto LABEL_360;
                  v173 = (unsigned int *)v449[12];
                  v174 = *(WarBoardBossBattleData_SaveData_o **)((char *)&bossBattleInfo->obj.klass + v171 * 4);
                  v175 = (WarBoardBossBattleData_o *)sub_1C3E7B0(WarBoardBossBattleData_TypeInfo);
                  WarBoardBossBattleData___ctor_37965568(v175, v174, v176);
                  if ( !v173 )
                    goto LABEL_359;
                  if ( v175 )
                  {
                    Instance = sub_1C3E6A0(v175, *(_QWORD *)(*(_QWORD *)v173 + 64LL));
                    if ( !Instance )
                      goto LABEL_361;
                  }
                  if ( v169 >= v173[6] )
                    goto LABEL_360;
                  *(_QWORD *)&v173[v171] = v175;
                  sub_1C3E508((CGThumbnailListItem_o *)&v173[v171], (int32_t)v175, v177, v178);
                  v91 = v438;
                  ++v169;
                  v171 += 2;
                }
                while ( v170 != v169 );
                v93 = (WarBoardDataEntity_o *)v449;
              }
              v94 = v440;
              goto LABEL_154;
            }
            v151 = 0;
            while ( 1 )
            {
              v152 = sub_1C3E7B0(WarBoardData___c__DisplayClass77_3_TypeInfo);
              WarBoardData___c__DisplayClass77_3___ctor((WarBoardData___c__DisplayClass77_3_o *)v152, 0);
              if ( v151 >= LODWORD(wallSaves->max_length) )
                break;
              if ( !v152 )
                goto LABEL_359;
              v155 = wallSaves->m_Items[v151];
              *(_QWORD *)(v152 + 16) = v155;
              sub_1C3E508((CGThumbnailListItem_o *)(v152 + 16), (int32_t)v155, v153, v154);
              v156 = (System_Collections_Generic_IEnumerable_TSource__o *)v449[6];
              v157 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardUserWallData__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v157,
                (Il2CppObject *)v152,
                Method_WarBoardData___c__DisplayClass77_3___ctor_b__10__,
                0);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__51525108(
                                    v156,
                                    (System_Func_TSource__bool__o *)v157,
                                    (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
              if ( Instance )
                WarBoardUserWallData__SetSaveData(
                  (WarBoardUserWallData_o *)Instance,
                  *(WarBoardWallData_SaveData_o **)(v152 + 16),
                  0);
              if ( (__int64)++v151 >= SLODWORD(wallSaves->max_length) )
                goto LABEL_127;
            }
          }
          else
          {
            v121 = 0;
            while ( 1 )
            {
              v122 = sub_1C3E7B0(WarBoardData___c__DisplayClass77_1_TypeInfo);
              WarBoardData___c__DisplayClass77_1___ctor((WarBoardData___c__DisplayClass77_1_o *)v122, 0);
              if ( v121 >= LODWORD(itemSaves->max_length) )
                break;
              if ( !v122 )
                goto LABEL_359;
              v125 = itemSaves->m_Items[v121];
              *(_QWORD *)(v122 + 16) = v125;
              sub_1C3E508((CGThumbnailListItem_o *)(v122 + 16), (int32_t)v125, v123, v124);
              if ( !v109 )
                goto LABEL_359;
              v126 = (System_Collections_Generic_IEnumerable_TSource__o *)v109[4];
              v127 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardUserGetItemData__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v127,
                (Il2CppObject *)v122,
                Method_WarBoardData___c__DisplayClass77_1___ctor_b__7__,
                0);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__51525108(
                                    v126,
                                    (System_Func_TSource__bool__o *)v127,
                                    (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
              if ( Instance )
                WarBoardUserGetItemData__SetSaveData(
                  (WarBoardUserGetItemData_o *)Instance,
                  *(WarBoardItemData_SaveData_o **)(v122 + 16),
                  0);
              if ( (__int64)++v121 >= SLODWORD(itemSaves->max_length) )
                goto LABEL_97;
            }
          }
        }
        else
        {
          v110 = 0;
          while ( 1 )
          {
            v111 = sub_1C3E7B0(WarBoardData___c__DisplayClass77_0_TypeInfo);
            WarBoardData___c__DisplayClass77_0___ctor((WarBoardData___c__DisplayClass77_0_o *)v111, 0);
            if ( v110 >= LODWORD(pieceSaves->max_length) )
              break;
            if ( !v111 )
              goto LABEL_359;
            v114 = pieceSaves->m_Items[v110];
            *(_QWORD *)(v111 + 16) = v114;
            v115 = (WarBoardPieceData_SaveData_o **)(v111 + 16);
            sub_1C3E508((CGThumbnailListItem_o *)(v111 + 16), (int32_t)v114, v112, v113);
            if ( !*(_QWORD *)(v111 + 16) || !v109 )
              goto LABEL_359;
            if ( *(_DWORD *)(*(_QWORD *)(v111 + 16) + 24LL) )
            {
              v116 = (System_Collections_Generic_IEnumerable_TSource__o *)v109[2];
              v117 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardUserServantData__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v117,
                (Il2CppObject *)v111,
                Method_WarBoardData___c__DisplayClass77_0___ctor_b__6__,
                0);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__51525108(
                                    v116,
                                    (System_Func_TSource__bool__o *)v117,
                                    (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
              if ( Instance )
                WarBoardUserServantData__SetSaveData((WarBoardUserServantData_o *)Instance, *v115, 0);
            }
            else
            {
              v118 = (System_Collections_Generic_IEnumerable_TSource__o *)v109[3];
              v119 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardUserMasterData__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v119,
                (Il2CppObject *)v111,
                Method_WarBoardData___c__DisplayClass77_0___ctor_b__5__,
                0);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__51525108(
                                    v118,
                                    (System_Func_TSource__bool__o *)v119,
                                    (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
              if ( Instance )
                WarBoardUserMasterData__SetSaveData((WarBoardUserMasterData_o *)Instance, *v115, 0);
            }
            if ( (__int64)++v110 >= SLODWORD(pieceSaves->max_length) )
              goto LABEL_87;
          }
        }
LABEL_360:
        sub_1C3E7C8(Instance, throughCondId);
      }
      v179 = WarBoardData_TypeInfo;
      if ( !WarBoardData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
      WarBoardData__DeleteLocalSave((const MethodInfo *)v179);
      *p_localSaveData = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.localSaveData, 0, v180, v181);
    }
LABEL_154:
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    goto LABEL_155;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !serverData )
    goto LABEL_359;
LABEL_155:
  if ( !Instance )
    goto LABEL_359;
  WarBoardManager__InitializeLogic((WarBoardManager_o *)Instance, v93, v93->fields.progressType != 3, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_359;
  WarBoardManager__UpdateServerData((WarBoardManager_o *)Instance, v93, 0);
  v450 = v93;
  if ( (int)max_length >= 1 )
  {
    v182 = 0;
    p_enemyDeck = &v93->fields.enemyDeck;
    npcIdx = 0;
    p_myDeck = &v93->fields.myDeck;
    v439 = v91;
    do
    {
      v183 = sub_1C3E7B0(WarBoardData___c__DisplayClass77_4_TypeInfo);
      WarBoardData___c__DisplayClass77_4___ctor((WarBoardData___c__DisplayClass77_4_o *)v183, 0);
      if ( v182 >= LODWORD(v95->max_length) )
        goto LABEL_360;
      if ( !v183 )
        goto LABEL_359;
      v186 = v95->m_Items[v182];
      *(_QWORD *)(v183 + 16) = v186;
      v187 = (WarBoardStageLayoutEntity_o **)(v183 + 16);
      sub_1C3E508((CGThumbnailListItem_o *)(v183 + 16), (int32_t)v186, v184, v185);
      v188 = *(WarBoardStageLayoutEntity_o **)(v183 + 16);
      v189 = (WarBoardSquareData_o *)sub_1C3E7B0(WarBoardSquareData_TypeInfo);
      WarBoardSquareData___ctor(v189, v188, roadEntities, 0);
      if ( v182 )
      {
        if ( (unsigned int)(v182 - 1) >= LODWORD(v95->max_length) )
          goto LABEL_360;
        v192 = *(&v95->max_length + v182);
        if ( !v192 )
          goto LABEL_359;
        v193 = *v187;
        if ( !*v187 )
          goto LABEL_359;
        if ( *(_DWORD *)(v192 + 20) == v193->fields.squareIndex )
          goto LABEL_176;
      }
      else
      {
        v193 = *v187;
        if ( !*v187 )
          goto LABEL_359;
      }
      throughCondId = (unsigned int)v193->fields.throughCondId;
      if ( !(_DWORD)throughCondId )
        goto LABEL_364;
      Instance = (__int64)v435;
      if ( !v435 )
        goto LABEL_359;
      Instance = WarBoardCommonReleaseMaster__IsOpen(v435, throughCondId, 0);
      if ( (Instance & 1) != 0 )
      {
LABEL_364:
        if ( !v94 )
          goto LABEL_359;
        items = v94->fields._items;
        v195 = Method_System_Collections_Generic_List_WarBoardSquareData__Add__;
        ++v94->fields._version;
        if ( !items )
          goto LABEL_359;
        size = v94->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v94,
            (Il2CppObject *)v189,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v195[4] + 192LL) + 112LL));
        }
        else
        {
          v197 = &items->obj.klass + size;
          v94->fields._size = size + 1;
          v197[4] = (Il2CppClass *)v189;
          sub_1C3E508((CGThumbnailListItem_o *)(v197 + 4), (int32_t)v189, v190, v191);
        }
LABEL_176:
        v198 = *v187;
        if ( !*v187 )
          goto LABEL_359;
        if ( v198->fields.isPiecePut )
        {
          questPhase = v93->fields.questPhase;
          questId = v93->fields.questId;
          if ( v198->fields.pieceIndex )
          {
            svtInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v93->fields.svtInfo;
            v201 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardUserServantData__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v201,
              (Il2CppObject *)v183,
              Method_WarBoardData___c__DisplayClass77_4___ctor_b__13__,
              0);
            Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__51525108(
                                  svtInfo,
                                  (System_Func_TSource__bool__o *)v201,
                                  (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
            v202 = (WarBoardUserServantData_o *)Instance;
            v203 = 0;
          }
          else
          {
            masterInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v93->fields.masterInfo;
            v211 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardUserMasterData__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v211,
              (Il2CppObject *)v183,
              Method_WarBoardData___c__DisplayClass77_4___ctor_b__12__,
              0);
            Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__51525108(
                                  masterInfo,
                                  (System_Func_TSource__bool__o *)v211,
                                  (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
            v203 = (WarBoardUserMasterData_o *)Instance;
            v202 = 0;
          }
          v212 = *v187;
          if ( !*v187 )
            goto LABEL_359;
          v213 = p_enemyDeck;
          v445 = questPhase;
          if ( !v212->fields.forceId )
          {
            v213 = p_enemyDeck;
            if ( !v212->fields.pieceIndex )
              v213 = p_myDeck;
          }
          v214 = *v213;
          Type = Follower__getType(v212->fields.followerType, 0);
          IsNpc = Follower__IsNpc(Type, 0);
          v217 = *v187;
          v218 = v93->fields.progressType;
          v219 = IsNpc;
          v220 = *p_npcEntityDict;
          v221 = (WarBoardPieceData_o *)sub_1C3E7B0(WarBoardPieceData_TypeInfo);
          v222 = v221;
          v223 = v218 == 3;
          if ( v219 )
          {
            WarBoardPieceData___ctor(v221, v217, v202, v203, v214, v223, v220, npcIdx, 0);
            if ( !*v187 )
              goto LABEL_359;
            v93 = v450;
            v95 = layoutEntities;
            v91 = v439;
            Instance = (__int64)Master_object;
            if ( !Master_object )
              goto LABEL_359;
            Instance = WarBoardStagePieceDetailMaster__TryGetEntity(
                         Master_object,
                         &entity,
                         (*v187)->fields.stageId,
                         (*v187)->fields.forceId,
                         (*v187)->fields.groupId,
                         (*v187)->fields.pieceIndex,
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
            Instance = (__int64)v431;
            if ( !v431 )
              goto LABEL_359;
            Entity_42472724 = NpcFollowerMaster__GetEntity_42472724(
                                v431,
                                questId,
                                v445,
                                v222->fields._npcId_k__BackingField,
                                0);
            if ( Entity_42472724 )
            {
              v230 = Entity_42472724;
              if ( !v222->fields._npcImageSvtId_k__BackingField )
                v222->fields._npcImageSvtId_k__BackingField = NpcFollowerEntity__GetImageSvtId(Entity_42472724, 0);
              if ( v222->fields._npcDispLimitCount_k__BackingField < 0 )
                v222->fields._npcDispLimitCount_k__BackingField = NpcFollowerEntity__GetDispLimitCnt(v230, -1, 0);
            }
            Instance = WarBoardPieceData__get_isPlayerGroup(v222, 0);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)v424;
              if ( !v424 )
                goto LABEL_359;
              Instance = DataMasterBase_object__object__long___TryGetEntity(
                           v424,
                           &v455,
                           v222->fields._npcId_k__BackingField,
                           (const MethodInfo_33B5500 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
              if ( (Instance & 1) != 0 )
              {
                Instance = (__int64)v455;
                if ( !v455 )
                  goto LABEL_359;
                Instance = (__int64)NpcServantFollowerEntity__GetFollowerName_42475624(
                                      (NpcServantFollowerEntity_o *)v455,
                                      v222->fields._npcId_k__BackingField,
                                      questId,
                                      v445,
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
            if ( !v439 )
              goto LABEL_359;
            v233 = v439->fields._items;
            v234 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
            ++v439->fields._version;
            if ( !v233 )
              goto LABEL_359;
            v235 = v439->fields._size;
            if ( (unsigned int)v235 >= LODWORD(v233->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v439,
                (Il2CppObject *)v222,
                *(const MethodInfo_37B5460 **)(*(_QWORD *)(v234[4] + 192LL) + 112LL));
            }
            else
            {
              v236 = &v233->obj.klass + v235;
              v439->fields._size = v235 + 1;
              v236[4] = (Il2CppClass *)v222;
              sub_1C3E508((CGThumbnailListItem_o *)(v236 + 4), (int32_t)v222, v231, v232);
            }
            ++npcIdx;
          }
          else
          {
            WarBoardPieceData___ctor(v221, v217, v202, v203, v214, v223, v220, -1, 0);
            if ( !v222 )
              goto LABEL_359;
            Instance = WarBoardPieceData__get_isMaster(v222, 0);
            v93 = v450;
            v95 = layoutEntities;
            v91 = v439;
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)*p_masterExistsForce;
              if ( !*p_masterExistsForce )
                goto LABEL_359;
              Instance = System_Collections_Generic_List_int___Contains(
                           (System_Collections_Generic_List_int__o *)Instance,
                           v222->fields._forceId_k__BackingField,
                           (const MethodInfo_37987B4 *)Method_System_Collections_Generic_List_int__Contains__);
              if ( (Instance & 1) == 0 )
              {
                Instance = (__int64)*p_masterExistsForce;
                if ( !*p_masterExistsForce )
                  goto LABEL_359;
                throughCondId = (unsigned int)v222->fields._forceId_k__BackingField;
                v226 = *(_QWORD *)(Instance + 16);
                v227 = Method_System_Collections_Generic_List_int__Add__;
                ++*(_DWORD *)(Instance + 28);
                if ( !v226 )
                  goto LABEL_359;
                v228 = *(int *)(Instance + 24);
                if ( (unsigned int)v228 >= *(_DWORD *)(v226 + 24) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    (System_Collections_Generic_List_int__o *)Instance,
                    throughCondId,
                    *(const MethodInfo_379843C **)(*(_QWORD *)(v227[4] + 192LL) + 112LL));
                }
                else
                {
                  *(_DWORD *)(Instance + 24) = v228 + 1;
                  *(_DWORD *)(v226 + 4 * v228 + 32) = throughCondId;
                }
              }
            }
            if ( !v439 )
              goto LABEL_359;
            v240 = v439->fields._items;
            v241 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
            ++v439->fields._version;
            if ( !v240 )
              goto LABEL_359;
            v242 = v439->fields._size;
            if ( (unsigned int)v242 >= LODWORD(v240->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v439,
                (Il2CppObject *)v222,
                *(const MethodInfo_37B5460 **)(*(_QWORD *)(v241[4] + 192LL) + 112LL));
            }
            else
            {
              v243 = &v240->obj.klass + v242;
              v439->fields._size = v242 + 1;
              v243[4] = (Il2CppClass *)v222;
              sub_1C3E508((CGThumbnailListItem_o *)(v243 + 4), (int32_t)v222, v224, v225);
            }
          }
          v94 = v440;
        }
        v244 = *v187;
        if ( !*v187 )
          goto LABEL_359;
        switch ( v244->fields.type )
        {
          case 2:
            getItemInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v93->fields.getItemInfo;
            v246 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardUserGetItemData__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v246,
              (Il2CppObject *)v183,
              Method_WarBoardData___c__DisplayClass77_4___ctor_b__14__,
              0);
            v247 = System_Linq_Enumerable__FirstOrDefault_object__51525108(
                     getItemInfo,
                     (System_Func_TSource__bool__o *)v246,
                     (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
            v248 = *(WarBoardStageLayoutEntity_o **)(v183 + 16);
            v249 = (WarBoardUserGetItemData_o *)v247;
            v250 = (WarBoardItemData_o *)sub_1C3E7B0(WarBoardItemData_TypeInfo);
            WarBoardItemData___ctor(v250, v248, v249, 0);
            v251 = v430;
            if ( !v430 )
              goto LABEL_359;
            version = v430->fields._version;
            v253 = v430->fields._items;
            v254 = &Method_System_Collections_Generic_List_WarBoardItemData__Add__;
            goto LABEL_246;
          case 3:
            v250 = (WarBoardItemData_o *)sub_1C3E7B0(WarBoardEffectData_TypeInfo);
            WarBoardEffectData___ctor((WarBoardEffectData_o *)v250, v244, 0);
            v251 = v429;
            if ( !v429 )
              goto LABEL_359;
            version = v429->fields._version;
            v253 = v429->fields._items;
            v254 = &Method_System_Collections_Generic_List_WarBoardEffectData__Add__;
            goto LABEL_246;
          case 4:
            treasureInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v93->fields.treasureInfo;
            if ( !treasureInfo )
              goto LABEL_242;
            v256 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardUserTreasureData__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v256,
              (Il2CppObject *)v183,
              Method_WarBoardData___c__DisplayClass77_4___ctor_b__11__,
              0);
            Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__51525108(
                                  treasureInfo,
                                  (System_Func_TSource__bool__o *)v256,
                                  (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserTreasureData___);
            if ( Instance )
              continue;
            v244 = *v187;
LABEL_242:
            v250 = (WarBoardItemData_o *)sub_1C3E7B0(WarBoardTreasureData_TypeInfo);
            WarBoardTreasureData___ctor((WarBoardTreasureData_o *)v250, v244, 0);
            v251 = v425;
            if ( !v425 )
              goto LABEL_359;
            version = v425->fields._version;
            v253 = v425->fields._items;
            v254 = &Method_System_Collections_Generic_List_WarBoardTreasureData__Add__;
LABEL_246:
            v262 = *v254;
            v251->fields._version = version + 1;
            if ( !v253 )
              goto LABEL_359;
            v263 = v251->fields._size;
            if ( (unsigned int)v263 < LODWORD(v253->max_length) )
            {
              v264 = &v253->obj.klass + v263;
              v251->fields._size = v263 + 1;
              v264[4] = (Il2CppClass *)v250;
              v208 = (CGThumbnailListItem_o *)(v264 + 4);
              v209 = (int)v250;
              goto LABEL_249;
            }
            v237 = *(_QWORD *)(v262 + 32);
            v238 = v251;
            v239 = (Il2CppObject *)v250;
            break;
          case 5:
            wallInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v93->fields.wallInfo;
            v258 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardUserWallData__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v258,
              (Il2CppObject *)v183,
              Method_WarBoardData___c__DisplayClass77_4___ctor_b__15__,
              0);
            v259 = System_Linq_Enumerable__FirstOrDefault_object__51525108(
                     wallInfo,
                     (System_Func_TSource__bool__o *)v258,
                     (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
            v260 = *(WarBoardStageLayoutEntity_o **)(v183 + 16);
            v261 = (WarBoardUserWallData_o *)v259;
            v250 = (WarBoardItemData_o *)sub_1C3E7B0(WarBoardWallData_TypeInfo);
            WarBoardWallData___ctor((WarBoardWallData_o *)v250, v260, v261, 0);
            v251 = v428;
            if ( !v428 )
              goto LABEL_359;
            version = v428->fields._version;
            v253 = v428->fields._items;
            v254 = &Method_System_Collections_Generic_List_WarBoardWallData__Add__;
            goto LABEL_246;
          default:
            continue;
        }
        goto LABEL_251;
      }
      if ( !v433 )
        goto LABEL_359;
      v204 = v433->fields._items;
      v205 = Method_System_Collections_Generic_List_WarBoardSquareData__Add__;
      ++v433->fields._version;
      if ( !v204 )
        goto LABEL_359;
      v206 = v433->fields._size;
      if ( (unsigned int)v206 < LODWORD(v204->max_length) )
      {
        v207 = &v204->obj.klass + v206;
        v433->fields._size = v206 + 1;
        v207[4] = (Il2CppClass *)v189;
        v208 = (CGThumbnailListItem_o *)(v207 + 4);
        v209 = (int)v189;
LABEL_249:
        sub_1C3E508(v208, v209, v190, v191);
        continue;
      }
      v237 = v205[4];
      v238 = v433;
      v239 = (Il2CppObject *)v189;
LABEL_251:
      System_Collections_Generic_List_object___AddWithResize(
        v238,
        v239,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v237 + 192) + 112LL));
    }
    while ( (unsigned int)max_length != ++v182 );
  }
  if ( !v94 )
    goto LABEL_359;
  v265 = System_Collections_Generic_List_object___ToArray(
           v94,
           (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  v266 = v436;
  v436->fields.squares = (struct WarBoardSquareData_array *)v265;
  sub_1C3E508((CGThumbnailListItem_o *)&v436->fields.squares, (int32_t)v265, v267, v268);
  Instance = (__int64)v433;
  if ( !v433 )
    goto LABEL_359;
  v269 = System_Collections_Generic_List_object___ToArray(
           v433,
           (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  v436->fields.condSquares = (struct WarBoardSquareData_array *)v269;
  sub_1C3E508((CGThumbnailListItem_o *)&v436->fields.condSquares, (int32_t)v269, v270, v271);
  if ( !v91 )
    goto LABEL_359;
  v272 = System_Collections_Generic_List_object___ToArray(
           v91,
           (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  v436->fields.pieces = (struct WarBoardPieceData_array *)v272;
  p_pieces = (System_Collections_Generic_IEnumerable_T__o **)&v436->fields.pieces;
  sub_1C3E508((CGThumbnailListItem_o *)&v436->fields.pieces, (int32_t)v272, v274, v275);
  pieces = (System_Object_array *)v436->fields.pieces;
  v277 = (System_Comparison_T__o *)sub_1C3E7B0(System_Comparison_WarBoardPieceData__TypeInfo);
  System_Comparison_object____ctor(v277, (Il2CppObject *)v436, Method_WarBoardData_ComparePiece__, 0);
  System_Array__Sort_object__51143048(
    pieces,
    v277,
    (const MethodInfo_30C6188 *)Method_System_Array_Sort_WarBoardPieceData___);
  Instance = (__int64)v430;
  if ( !v430 )
    goto LABEL_359;
  v278 = System_Collections_Generic_List_object___ToArray(
           v430,
           (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_WarBoardItemData__ToArray__);
  v436->fields.items = (struct WarBoardItemData_array *)v278;
  sub_1C3E508((CGThumbnailListItem_o *)&v436->fields.items, (int32_t)v278, v279, v280);
  Instance = (__int64)v425;
  if ( !v425 )
    goto LABEL_359;
  v281 = System_Collections_Generic_List_object___ToArray(
           v425,
           (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_WarBoardTreasureData__ToArray__);
  v436->fields.treasures = (struct WarBoardTreasureData_array *)v281;
  sub_1C3E508((CGThumbnailListItem_o *)&v436->fields.treasures, (int32_t)v281, v282, v283);
  Instance = (__int64)v429;
  if ( !v429 )
    goto LABEL_359;
  v284 = System_Collections_Generic_List_object___ToArray(
           v429,
           (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_WarBoardEffectData__ToArray__);
  v436->fields.effects = (struct WarBoardEffectData_array *)v284;
  sub_1C3E508((CGThumbnailListItem_o *)&v436->fields.effects, (int32_t)v284, v285, v286);
  Instance = (__int64)v428;
  if ( !v428 )
    goto LABEL_359;
  v287 = System_Collections_Generic_List_object___ToArray(
           v428,
           (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_WarBoardWallData__ToArray__);
  v436->fields.walls = (struct WarBoardWallData_array *)v287;
  sub_1C3E508((CGThumbnailListItem_o *)&v436->fields.walls, (int32_t)v287, v288, v289);
  v436->fields.serverData = v93;
  sub_1C3E508((CGThumbnailListItem_o *)&v436->fields.serverData, (int32_t)v93, v290, v291);
  if ( v93->fields.progressType == 3 )
    WarBoardData__InitPrevCondData(v436, (const MethodInfo *)throughCondId);
  v292 = v436->fields.localSaveData;
  if ( v292 )
  {
    v293 = v292->fields.pieceSaves;
    roadEntitiesb = (WarBoardRoadEntity_array *)&v436->fields.localSaveData;
    if ( v293 )
    {
      if ( SLODWORD(v293->max_length) >= 1 )
      {
        v294 = 0;
        do
        {
          v295 = sub_1C3E7B0(WarBoardData___c__DisplayClass77_5_TypeInfo);
          WarBoardData___c__DisplayClass77_5___ctor((WarBoardData___c__DisplayClass77_5_o *)v295, 0);
          if ( v294 >= LODWORD(v293->max_length) )
            goto LABEL_360;
          if ( !v295 )
            goto LABEL_359;
          v298 = v293->m_Items[v294];
          *(_QWORD *)(v295 + 16) = v298;
          v299 = (WarBoardPieceData_SaveData_o **)(v295 + 16);
          sub_1C3E508((CGThumbnailListItem_o *)(v295 + 16), (int32_t)v298, v296, v297);
          v300 = *p_pieces;
          v301 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardPieceData__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v301,
            (Il2CppObject *)v295,
            Method_WarBoardData___c__DisplayClass77_5___ctor_b__16__,
            0);
          if ( !BasicHelper__Any_object__51261116(
                  (System_Object_array *)v300,
                  (System_Func_T__bool__o *)v301,
                  (const MethodInfo_30E2EBC *)Method_BasicHelper_Any_WarBoardPieceData___) )
          {
            v302 = (System_Collections_Generic_IEnumerable_TSource__o *)v93->fields.svtInfo;
            v303 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardUserServantData__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v303,
              (Il2CppObject *)v295,
              Method_WarBoardData___c__DisplayClass77_5___ctor_b__17__,
              0);
            v304 = System_Linq_Enumerable__FirstOrDefault_object__51525108(
                     v302,
                     (System_Func_TSource__bool__o *)v303,
                     (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
            v305 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v305,
              (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
            if ( !v305 )
              goto LABEL_359;
            System_Collections_Generic_List_object___AddRange(
              v305,
              *p_pieces,
              (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
            if ( !p_fields->stageEntity )
              goto LABEL_359;
            id = p_fields->stageEntity->fields.id;
            v307 = *v299;
            v308 = (WarBoardPieceData_o *)sub_1C3E7B0(WarBoardPieceData_TypeInfo);
            WarBoardPieceData___ctor_38188184(v308, id, (WarBoardUserServantData_o *)v304, v307, 0, -1, 0);
            v311 = v305->fields._items;
            v312 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
            ++v305->fields._version;
            if ( !v311 )
              goto LABEL_359;
            v313 = v305->fields._size;
            if ( (unsigned int)v313 >= LODWORD(v311->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v305,
                (Il2CppObject *)v308,
                *(const MethodInfo_37B5460 **)(*(_QWORD *)(v312[4] + 192LL) + 112LL));
            }
            else
            {
              v314 = &v311->obj.klass + v313;
              v305->fields._size = v313 + 1;
              v314[4] = (Il2CppClass *)v308;
              sub_1C3E508((CGThumbnailListItem_o *)(v314 + 4), (int32_t)v308, v309, v310);
            }
            v93 = v450;
            v315 = System_Collections_Generic_List_object___ToArray(
                     v305,
                     (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
            *p_pieces = (System_Collections_Generic_IEnumerable_T__o *)v315;
            sub_1C3E508((CGThumbnailListItem_o *)p_pieces, (int32_t)v315, v316, v317);
            v266 = v436;
          }
          Instance = (__int64)*v299;
          if ( !*v299 )
            goto LABEL_359;
          WarBoardPieceData_SaveData__SetOwner((WarBoardPieceData_SaveData_o *)Instance, v266, 0);
          Instance = (__int64)*v299;
          if ( !*v299 )
            goto LABEL_359;
          WarBoardPieceData_SaveData__Load((WarBoardPieceData_SaveData_o *)Instance, 0);
        }
        while ( (__int64)++v294 < SLODWORD(v293->max_length) );
      }
      if ( roadEntitiesb->obj.klass )
      {
        v318 = *(_QWORD *)&roadEntitiesb->obj.klass->_1.byval_arg.bits;
        if ( v318 )
        {
          v319 = *(_DWORD *)(v318 + 24);
          if ( v319 >= 1 )
          {
            v320 = 0;
            while ( v320 < v319 )
            {
              v321 = v318 + 8LL * (int)v320;
              v322 = *(WarBoardItemData_SaveData_o **)(v321 + 32);
              if ( !v322 )
                goto LABEL_359;
              WarBoardItemData_SaveData__SetOwner(*(WarBoardItemData_SaveData_o **)(v321 + 32), v266, 0);
              WarBoardItemData_SaveData__Load(v322, 0);
              v319 = *(_DWORD *)(v318 + 24);
              if ( (int)++v320 >= v319 )
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
              v324 = data[6];
              if ( v324 >= 1 )
              {
                v325 = 0;
                while ( v325 < v324 )
                {
                  v326 = (char *)&data[2 * v325];
                  v327 = (WarBoardTreasureData_SaveData_o *)*((_QWORD *)v326 + 4);
                  if ( !v327 )
                    goto LABEL_359;
                  WarBoardTreasureData_SaveData__SetOwner(*((WarBoardTreasureData_SaveData_o **)v326 + 4), v266, 0);
                  WarBoardTreasureData_SaveData__Load(v327, 0);
                  v324 = data[6];
                  if ( (int)++v325 >= v324 )
                    goto LABEL_293;
                }
                goto LABEL_360;
              }
LABEL_293:
              if ( roadEntitiesb->obj.klass )
              {
                v328 = *(_QWORD *)&roadEntitiesb->obj.klass->_1.this_arg.bits;
                if ( v328 )
                {
                  v329 = *(_DWORD *)(v328 + 24);
                  if ( v329 >= 1 )
                  {
                    v330 = 0;
                    while ( v330 < v329 )
                    {
                      v331 = v328 + 8LL * (int)v330;
                      v332 = *(WarBoardWallData_SaveData_o **)(v331 + 32);
                      if ( !v332 )
                        goto LABEL_359;
                      WarBoardWallData_SaveData__SetOwner(*(WarBoardWallData_SaveData_o **)(v331 + 32), v266, 0);
                      WarBoardWallData_SaveData__Load(v332, 0);
                      v329 = *(_DWORD *)(v328 + 24);
                      if ( (int)++v330 >= v329 )
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
                        v335 = 0;
                        while ( v335 < namespaze )
                        {
                          v336 = &element_class->_1.image + (int)v335;
                          v337 = (WarBoardSquareData_SaveData_o *)v336[4];
                          if ( !v337 )
                            goto LABEL_359;
                          WarBoardSquareData_SaveData__SetOwner((WarBoardSquareData_SaveData_o *)v336[4], v266, 0);
                          WarBoardSquareData_SaveData__Load(v337, 0);
                          namespaze = (int)element_class->_1.namespaze;
                          if ( (int)++v335 >= namespaze )
                            goto LABEL_307;
                        }
                        goto LABEL_360;
                      }
LABEL_307:
                      if ( roadEntitiesb->obj.klass )
                      {
                        v266->fields.isPlayedHalfDeadMessage = (bool)roadEntitiesb->obj.klass->_1.interopData;
                        v338 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_WarBoardEventData__TypeInfo);
                        System_Collections_Generic_List_object____ctor(
                          v338,
                          (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_WarBoardEventData___ctor__);
                        v266->fields.listEvent = (struct System_Collections_Generic_List_WarBoardEventData__o *)v338;
                        sub_1C3E508((CGThumbnailListItem_o *)p_listEvent, (int32_t)v338, v339, v340);
                        v343 = v266->fields.localSaveData;
                        if ( v343 )
                        {
                          eventSaves = v343->fields.eventSaves;
                          if ( eventSaves )
                          {
                            v345 = eventSaves->max_length;
                            if ( (int)v345 >= 1 )
                            {
                              v346 = 0;
                              while ( v346 < (unsigned int)v345 )
                              {
                                v347 = eventSaves->m_Items[v346];
                                v348 = (System_Collections_Generic_List_object__o *)*p_listEvent;
                                v349 = (WarBoardEventData_o *)sub_1C3E7B0(WarBoardEventData_TypeInfo);
                                WarBoardEventData___ctor_38178404(v349, v347, 0);
                                if ( !v348 )
                                  goto LABEL_359;
                                v352 = v348->fields._items;
                                v353 = Method_System_Collections_Generic_List_WarBoardEventData__Add__;
                                ++v348->fields._version;
                                if ( !v352 )
                                  goto LABEL_359;
                                v354 = v348->fields._size;
                                if ( (unsigned int)v354 >= LODWORD(v352->max_length) )
                                {
                                  System_Collections_Generic_List_object___AddWithResize(
                                    v348,
                                    (Il2CppObject *)v349,
                                    *(const MethodInfo_37B5460 **)(*(_QWORD *)(v353[4] + 192LL) + 112LL));
                                }
                                else
                                {
                                  v355 = &v352->obj.klass + v354;
                                  v348->fields._size = v354 + 1;
                                  v355[4] = (Il2CppClass *)v349;
                                  sub_1C3E508((CGThumbnailListItem_o *)(v355 + 4), (int32_t)v349, v350, v351);
                                }
                                LODWORD(v345) = eventSaves->max_length;
                                if ( (__int64)++v346 >= (int)v345 )
                                  goto LABEL_319;
                              }
                              goto LABEL_360;
                            }
LABEL_319:
                            v356 = roadEntitiesb->obj.klass;
                            if ( roadEntitiesb->obj.klass )
                            {
                              v436->fields.winCondId = (int32_t)v356->_1.fields;
                              typeHierarchy = (struct System_Int32_array *)v356->_2.typeHierarchy;
                              v436->fields.latestPieceActionSquareIndexes = typeHierarchy;
                              sub_1C3E508(
                                (CGThumbnailListItem_o *)p_latestPieceActionSquareIndexes,
                                (int32_t)typeHierarchy,
                                v341,
                                v342);
                              v360 = v436->fields.localSaveData;
                              if ( v360 )
                              {
                                latestBattlePieceUniqueIndexes = (CGThumbnailListItem_c *)v360->fields.latestBattlePieceUniqueIndexes;
                                p_latestBattlePieceUniqueIndexes->klass = latestBattlePieceUniqueIndexes;
                                sub_1C3E508(
                                  p_latestBattlePieceUniqueIndexes,
                                  (int32_t)latestBattlePieceUniqueIndexes,
                                  v358,
                                  v359);
                                v362 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_WarBoardPrevCondData__TypeInfo);
                                System_Collections_Generic_List_object____ctor(
                                  v362,
                                  (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_WarBoardPrevCondData___ctor__);
                                p_listPrevCond->klass = (CGThumbnailListItem_c *)v362;
                                sub_1C3E508(p_listPrevCond, (int32_t)v362, v363, v364);
                                if ( roadEntitiesb->obj.klass )
                                {
                                  properties = roadEntitiesb->obj.klass->_1.properties;
                                  if ( properties )
                                  {
                                    v366 = properties[3];
                                    if ( (int)v366 >= 1 )
                                    {
                                      v367 = 0;
                                      while ( v367 < (unsigned int)v366 )
                                      {
                                        v368 = (WarBoardPrevCondData_SaveData_o *)properties[v367 + 4];
                                        v369 = (System_Collections_Generic_List_object__o *)p_listPrevCond->klass;
                                        v370 = (WarBoardPrevCondData_o *)sub_1C3E7B0(WarBoardPrevCondData_TypeInfo);
                                        WarBoardPrevCondData___ctor_38205440(v370, v368, 0);
                                        if ( !v369 )
                                          goto LABEL_359;
                                        v373 = v369->fields._items;
                                        v374 = Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__;
                                        ++v369->fields._version;
                                        if ( !v373 )
                                          goto LABEL_359;
                                        v375 = v369->fields._size;
                                        if ( (unsigned int)v375 >= LODWORD(v373->max_length) )
                                        {
                                          System_Collections_Generic_List_object___AddWithResize(
                                            v369,
                                            (Il2CppObject *)v370,
                                            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v374[4] + 192LL) + 112LL));
                                        }
                                        else
                                        {
                                          v376 = &v373->obj.klass + v375;
                                          v369->fields._size = v375 + 1;
                                          v376[4] = (Il2CppClass *)v370;
                                          sub_1C3E508((CGThumbnailListItem_o *)(v376 + 4), (int32_t)v370, v371, v372);
                                        }
                                        LODWORD(v366) = *((_DWORD *)properties + 6);
                                        if ( (__int64)++v367 >= (int)v366 )
                                          goto LABEL_332;
                                      }
                                      goto LABEL_360;
                                    }
LABEL_332:
                                    v377 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_HoldReinforcementsData__TypeInfo);
                                    System_Collections_Generic_List_object____ctor(
                                      v377,
                                      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_HoldReinforcementsData___ctor__);
                                    p_reinforcementsSaveList->klass = (CGThumbnailListItem_c *)v377;
                                    sub_1C3E508(p_reinforcementsSaveList, (int32_t)v377, v378, v379);
                                    if ( roadEntitiesb->obj.klass )
                                    {
                                      methods = roadEntitiesb->obj.klass->_1.methods;
                                      if ( methods )
                                      {
                                        v381 = methods[3];
                                        if ( (int)v381 >= 1 )
                                        {
                                          v382 = 0;
                                          while ( v382 < (unsigned int)v381 )
                                          {
                                            v383 = (HoldReinforcementsData_SaveData_o *)methods[v382 + 4];
                                            v384 = (System_Collections_Generic_List_object__o *)p_reinforcementsSaveList->klass;
                                            v385 = (HoldReinforcementsData_o *)sub_1C3E7B0(HoldReinforcementsData_TypeInfo);
                                            HoldReinforcementsData___ctor_38205640(v385, v383, 0);
                                            if ( !v384 )
                                              goto LABEL_359;
                                            v388 = v384->fields._items;
                                            v389 = Method_System_Collections_Generic_List_HoldReinforcementsData__Add__;
                                            ++v384->fields._version;
                                            if ( !v388 )
                                              goto LABEL_359;
                                            v390 = v384->fields._size;
                                            if ( (unsigned int)v390 >= LODWORD(v388->max_length) )
                                            {
                                              System_Collections_Generic_List_object___AddWithResize(
                                                v384,
                                                (Il2CppObject *)v385,
                                                *(const MethodInfo_37B5460 **)(*(_QWORD *)(v389[4] + 192LL) + 112LL));
                                            }
                                            else
                                            {
                                              v391 = &v388->obj.klass + v390;
                                              v384->fields._size = v390 + 1;
                                              v391[4] = (Il2CppClass *)v385;
                                              sub_1C3E508(
                                                (CGThumbnailListItem_o *)(v391 + 4),
                                                (int32_t)v385,
                                                v386,
                                                v387);
                                            }
                                            LODWORD(v381) = *((_DWORD *)methods + 6);
                                            if ( (__int64)++v382 >= (int)v381 )
                                              goto LABEL_343;
                                          }
                                          goto LABEL_360;
                                        }
LABEL_343:
                                        if ( roadEntitiesb->obj.klass )
                                        {
                                          v392 = System_Linq_Enumerable__ToList_int_(
                                                   (System_Collections_Generic_IEnumerable_TSource__o *)roadEntitiesb->obj.klass->_1.nestedTypes,
                                                   (const MethodInfo_313DC18 *)Method_System_Linq_Enumerable_ToList_int___);
                                          p_playedStageReinforcementsList->klass = (CGThumbnailListItem_c *)v392;
                                          sub_1C3E508(p_playedStageReinforcementsList, (int32_t)v392, v393, v394);
                                          v395 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_WarBoardUiData__TypeInfo);
                                          System_Collections_Generic_List_object____ctor(
                                            v395,
                                            (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_WarBoardUiData___ctor__);
                                          p_listUiData->klass = (CGThumbnailListItem_c *)v395;
                                          sub_1C3E508(p_listUiData, (int32_t)v395, v396, v397);
                                          if ( roadEntitiesb->obj.klass )
                                          {
                                            implementedInterfaces = roadEntitiesb->obj.klass->_1.implementedInterfaces;
                                            if ( implementedInterfaces )
                                            {
                                              v401 = implementedInterfaces[3];
                                              if ( (int)v401 >= 1 )
                                              {
                                                v402 = 0;
                                                while ( v402 < (unsigned int)v401 )
                                                {
                                                  v403 = (WarBoardUiData_SaveData_o *)implementedInterfaces[v402 + 4];
                                                  v404 = (System_Collections_Generic_List_object__o *)p_listUiData->klass;
                                                  v405 = (WarBoardUiData_o *)sub_1C3E7B0(WarBoardUiData_TypeInfo);
                                                  WarBoardUiData___ctor_38212060(v405, v403, 0);
                                                  if ( !v404 )
                                                    goto LABEL_359;
                                                  v408 = v404->fields._items;
                                                  v409 = Method_System_Collections_Generic_List_WarBoardUiData__Add__;
                                                  ++v404->fields._version;
                                                  if ( !v408 )
                                                    goto LABEL_359;
                                                  v410 = v404->fields._size;
                                                  if ( (unsigned int)v410 >= LODWORD(v408->max_length) )
                                                  {
                                                    System_Collections_Generic_List_object___AddWithResize(
                                                      v404,
                                                      (Il2CppObject *)v405,
                                                      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v409[4] + 192LL) + 112LL));
                                                  }
                                                  else
                                                  {
                                                    v411 = &v408->obj.klass + v410;
                                                    v404->fields._size = v410 + 1;
                                                    v411[4] = (Il2CppClass *)v405;
                                                    sub_1C3E508(
                                                      (CGThumbnailListItem_o *)(v411 + 4),
                                                      (int32_t)v405,
                                                      v406,
                                                      v407);
                                                  }
                                                  LODWORD(v401) = *((_DWORD *)implementedInterfaces + 6);
                                                  if ( (__int64)++v402 >= (int)v401 )
                                                    goto LABEL_355;
                                                }
                                                goto LABEL_360;
                                              }
LABEL_355:
                                              if ( roadEntitiesb->obj.klass )
                                              {
                                                interfaceOffsets = roadEntitiesb->obj.klass->_1.interfaceOffsets;
                                                p_bgAnimationInfo_k__BackingField->klass = (CGThumbnailListItem_c *)interfaceOffsets;
                                                sub_1C3E508(
                                                  p_bgAnimationInfo_k__BackingField,
                                                  (int32_t)interfaceOffsets,
                                                  v398,
                                                  v399);
                                                v413 = roadEntitiesb->obj.klass;
                                                if ( roadEntitiesb->obj.klass )
                                                {
                                                  v436->fields._ContinueConsumeType_k__BackingField = HIDWORD(v413->_2.unity_user_data);
                                                  v436->fields._IsContinue_k__BackingField = v413->_2.initializationExceptionGCHandle;
                                                  v436->fields._IsNextTurn_k__BackingField = BYTE1(v413->_2.initializationExceptionGCHandle);
                                                  v436->fields.localSaveTiming = (int32_t)v413->_2.unity_user_data;
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
    sub_1C3E7C0(Instance, throughCondId);
  }
  v414 = (WarBoardData_WarBoardLocalSaveData_o *)sub_1C3E7B0(WarBoardData_WarBoardLocalSaveData_TypeInfo);
  WarBoardData_WarBoardLocalSaveData___ctor_38165396(v414, v436, 0);
  v436->fields.localSaveData = v414;
  sub_1C3E508((CGThumbnailListItem_o *)&v436->fields.localSaveData, (int32_t)v414, v415, v416);
}


void WarBoardData__AddPlayedEventData(WarBoardData_o *this, WarBoardEventData_o *eventData, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Collections_Generic_List_object__o *listEvent; // x0
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppClass **v10; // x8

  if ( (byte_4C5479C & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardEventData__Add__);
    byte_4C5479C = 1;
  }
  listEvent = (System_Collections_Generic_List_object__o *)this->fields.listEvent;
  if ( !listEvent
    || (items = listEvent->fields._items,
        v8 = Method_System_Collections_Generic_List_WarBoardEventData__Add__,
        ++listEvent->fields._version,
        !items) )
  {
    sub_1C3E7C0(listEvent, eventData);
  }
  size = listEvent->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      listEvent,
      (Il2CppObject *)eventData,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    listEvent->fields._size = size + 1;
    v10[4] = (Il2CppClass *)eventData;
    sub_1C3E508((CGThumbnailListItem_o *)(v10 + 4), (int32_t)eventData, (int32_t)method, v3);
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
  __int64 v13; // x1
  Il2CppObject *v14; // x28
  System_Collections_Generic_List_object__o *v15; // x19
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v17; // x27
  WarBoardUserServantData_o *v18; // x26
  struct System_Int32_array *reinforcementsIds; // x8
  struct System_Int32_array *v20; // x8
  __int64 v21; // x9
  WarBoardStagePieceDetailMaster_o *v22; // x19
  WarBoardDataEntity_o *v23; // x22
  WarBoardReinforcementsEntity_o *v24; // x25
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *npcEntityDict; // x20
  WarBoardStageReinforcementsEntity_o *v26; // x24
  int32_t v27; // w28
  int32_t v28; // w21
  WarBoardPieceData_o *v29; // x23
  NpcFollowerEntity_o *Entity_42472724; // x0
  NpcFollowerEntity_o *v31; // x20
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  struct WarBoardPieceData_array **p_pieces; // x20
  System_Object_array *v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct WarBoardUserServantData_array *svtInfo; // x1
  il2cpp_array_size_t v45; // x21
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x22
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  unsigned __int64 v49; // x23
  __int64 v50; // x26
  __int64 v51; // x27
  struct WarBoardData_WarBoardLocalSaveData_o *v52; // x8
  struct WarBoardPieceData_array *v53; // x9
  unsigned int *pieceSaves; // x28
  WarBoardPieceData_o *v55; // x22
  WarBoardPieceData_SaveData_o *v56; // x21
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  __int64 v60; // x0
  System_Collections_Generic_List_object__o *v61; // [xsp+10h] [xbp-D0h]
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+18h] [xbp-C8h]
  System_Int32_array *v63; // [xsp+20h] [xbp-C0h]
  Il2CppObject *v64; // [xsp+28h] [xbp-B8h]
  WarBoardUserServantData_array *v65; // [xsp+30h] [xbp-B0h]
  NpcFollowerMaster_o *v66; // [xsp+38h] [xbp-A8h]
  System_Collections_Generic_List_object__o *v67; // [xsp+40h] [xbp-A0h]
  WarBoardUserServantData_o **v68; // [xsp+48h] [xbp-98h]
  int32_t questPhase; // [xsp+50h] [xbp-90h]
  int32_t questId; // [xsp+54h] [xbp-8Ch]
  int32_t *m_Items; // [xsp+58h] [xbp-88h]
  bool isChangeName; // [xsp+64h] [xbp-7Ch] BYREF
  Il2CppObject *v73; // [xsp+68h] [xbp-78h] BYREF
  WarBoardStagePieceDetailEntity_o *v74; // [xsp+70h] [xbp-70h] BYREF
  WarBoardReinforcementsEntity_o *entity; // [xsp+78h] [xbp-68h] BYREF

  if ( (byte_4C5479A & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__RemoveAt__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C3E564(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    sub_1C3E564(&WarBoardPieceData_SaveData___TypeInfo);
    sub_1C3E564(&WarBoardPieceData_SaveData_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&WarBoardPieceData_TypeInfo);
    byte_4C5479A = 1;
  }
  v74 = 0;
  entity = 0;
  v73 = 0;
  isChangeName = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  v14 = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v66 = (NpcFollowerMaster_o *)Instance;
  if ( !serverData )
    goto LABEL_69;
  questPhase = serverData->fields.questPhase;
  questId = serverData->fields.questId;
  v61 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v61,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( !reinfoSvtInfo )
    goto LABEL_69;
  max_length = reinfoSvtInfo->max_length;
  v67 = v15;
  if ( (int)max_length >= 1 )
  {
    v17 = 0;
    m_Items = indexList->m_Items;
    v68 = reinfoSvtInfo->m_Items;
    v64 = Master_object;
    v65 = reinfoSvtInfo;
    v63 = indexList;
    do
    {
      if ( v17 >= (unsigned int)max_length )
LABEL_70:
        sub_1C3E7C8(Instance, v13);
      v18 = v68[v17];
      if ( v18 )
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
        if ( v17 >= LODWORD(indexList->max_length) )
          goto LABEL_70;
        if ( m_Items[v17] < SLODWORD(reinforcementsIds->max_length) )
          goto LABEL_52;
      }
      if ( v17 >= LODWORD(indexList->max_length) )
        goto LABEL_70;
      v20 = reinfoStage->fields.reinforcementsIds;
      if ( !v20 )
        goto LABEL_69;
      v21 = m_Items[v17];
      if ( (unsigned int)v21 >= LODWORD(v20->max_length) )
        goto LABEL_70;
      if ( !Master_object )
        goto LABEL_69;
      v22 = (WarBoardStagePieceDetailMaster_o *)v14;
      v23 = serverData;
      WarBoardReinforcementsMaster__TryGetEntity(
        (WarBoardReinforcementsMaster_o *)Master_object,
        &entity,
        v20->m_Items[v21],
        0);
      Instance = (__int64)this->fields.reinforcementsAppointmentSquareList;
      if ( !Instance )
        goto LABEL_69;
      v24 = entity;
      npcEntityDict = this->fields.npcEntityDict;
      v26 = reinfoStage;
      Instance = System_Collections_Generic_List_int___get_Item(
                   (System_Collections_Generic_List_int__o *)Instance,
                   0,
                   (const MethodInfo_379814C *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( v17 >= LODWORD(indexList->max_length) )
        goto LABEL_70;
      v27 = Instance;
      v28 = m_Items[v17];
      v29 = (WarBoardPieceData_o *)sub_1C3E7B0(WarBoardPieceData_TypeInfo);
      WarBoardPieceData___ctor_38186972(v29, v26, v24, v18, npcEntityDict, v17, v27, v28, 0);
      Instance = (__int64)this->fields.reinforcementsAppointmentSquareList;
      if ( !Instance )
        goto LABEL_69;
      System_Collections_Generic_List_int___RemoveAt(
        (System_Collections_Generic_List_int__o *)Instance,
        0,
        (const MethodInfo_3799BBC *)Method_System_Collections_Generic_List_int__RemoveAt__);
      if ( !v29 )
        goto LABEL_69;
      v14 = (Il2CppObject *)v22;
      if ( !v22 )
        goto LABEL_69;
      serverData = v23;
      Instance = WarBoardStagePieceDetailMaster__TryGetEntity(
                   v22,
                   &v74,
                   v23->fields.stageId,
                   v29->fields._forceId_k__BackingField,
                   v29->fields._groupId_k__BackingField,
                   v29->fields._index_k__BackingField,
                   0);
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)v74;
        if ( !v74 )
          goto LABEL_69;
        v29->fields._npcImageSvtId_k__BackingField = WarBoardStagePieceDetailEntity__GetImageSvtId(v74, 0);
        Instance = (__int64)v74;
        if ( !v74 )
          goto LABEL_69;
        Instance = WarBoardStagePieceDetailEntity__GetDispLimitCnt(v74, 0);
        v29->fields._npcDispLimitCount_k__BackingField = Instance;
      }
      if ( !v66 )
        goto LABEL_69;
      Entity_42472724 = NpcFollowerMaster__GetEntity_42472724(
                          v66,
                          questId,
                          questPhase,
                          v29->fields._npcId_k__BackingField,
                          0);
      if ( Entity_42472724 )
      {
        v31 = Entity_42472724;
        if ( !v29->fields._npcImageSvtId_k__BackingField )
          v29->fields._npcImageSvtId_k__BackingField = NpcFollowerEntity__GetImageSvtId(Entity_42472724, 0);
        if ( v29->fields._npcDispLimitCount_k__BackingField < 0 )
          v29->fields._npcDispLimitCount_k__BackingField = NpcFollowerEntity__GetDispLimitCnt(v31, -1, 0);
      }
      Instance = WarBoardPieceData__get_isPlayerGroup(v29, 0);
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)MasterData_object;
        if ( !MasterData_object )
          goto LABEL_69;
        Instance = DataMasterBase_object__object__long___TryGetEntity(
                     MasterData_object,
                     &v73,
                     v29->fields._npcId_k__BackingField,
                     (const MethodInfo_33B5500 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
        if ( (Instance & 1) != 0 )
        {
          Instance = (__int64)v73;
          if ( !v73 )
            goto LABEL_69;
          Instance = (__int64)NpcServantFollowerEntity__GetFollowerName_42475624(
                                (NpcServantFollowerEntity_o *)v73,
                                v29->fields._npcId_k__BackingField,
                                questId,
                                questPhase,
                                &isChangeName,
                                0);
          if ( isChangeName )
          {
            Instance = (__int64)v29->fields._battleServant_k__BackingField;
            if ( !Instance )
              goto LABEL_69;
            BattleServantData__ClearOverwriteServantName((BattleServantData_o *)Instance, 0);
          }
        }
      }
      if ( !v67 )
        goto LABEL_69;
      items = v67->fields._items;
      v35 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
      ++v67->fields._version;
      if ( !items )
        goto LABEL_69;
      size = v67->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v67,
          (Il2CppObject *)v29,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = &items->obj.klass + size;
        v67->fields._size = size + 1;
        v37[4] = (Il2CppClass *)v29;
        sub_1C3E508((CGThumbnailListItem_o *)(v37 + 4), (int32_t)v29, v32, v33);
      }
      reinfoStage = v26;
      indexList = v63;
      Master_object = v64;
      reinfoSvtInfo = v65;
LABEL_52:
      LODWORD(max_length) = reinfoSvtInfo->max_length;
    }
    while ( (__int64)++v17 < (int)max_length );
  }
  if ( !v61 )
    goto LABEL_69;
  p_pieces = &this->fields.pieces;
  System_Collections_Generic_List_object___AddRange(
    v61,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.pieces,
    (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v61,
    (System_Collections_Generic_IEnumerable_T__o *)v67,
    (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
  v39 = System_Collections_Generic_List_object___ToArray(
          v61,
          (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  this->fields.pieces = (struct WarBoardPieceData_array *)v39;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.pieces, (int32_t)v39, v40, v41);
  Instance = (__int64)this->fields.serverData;
  if ( !Instance
    || (svtInfo = serverData->fields.svtInfo,
        *(_QWORD *)(Instance + 16) = svtInfo,
        sub_1C3E508((CGThumbnailListItem_o *)(Instance + 16), (int32_t)svtInfo, v42, v43),
        !*p_pieces)
    || (v45 = (*p_pieces)->max_length,
        localSaveData = this->fields.localSaveData,
        Instance = sub_1C3E60C(WarBoardPieceData_SaveData___TypeInfo, (unsigned int)v45),
        !localSaveData) )
  {
LABEL_69:
    sub_1C3E7C0(Instance, v13);
  }
  localSaveData->fields.pieceSaves = (struct WarBoardPieceData_SaveData_array *)Instance;
  sub_1C3E508((CGThumbnailListItem_o *)&localSaveData->fields.pieceSaves, Instance, v47, v48);
  if ( (int)v45 >= 1 )
  {
    v49 = 0;
    v50 = (unsigned int)v45;
    v51 = 8;
    do
    {
      v52 = this->fields.localSaveData;
      if ( !v52 )
        goto LABEL_69;
      v53 = *p_pieces;
      if ( !*p_pieces )
        goto LABEL_69;
      if ( v49 >= LODWORD(v53->max_length) )
        goto LABEL_70;
      pieceSaves = (unsigned int *)v52->fields.pieceSaves;
      v55 = *(WarBoardPieceData_o **)((char *)&v53->obj.klass + v51 * 4);
      v56 = (WarBoardPieceData_SaveData_o *)sub_1C3E7B0(WarBoardPieceData_SaveData_TypeInfo);
      WarBoardPieceData_SaveData___ctor_38168448(v56, v55, 0);
      if ( !pieceSaves )
        goto LABEL_69;
      if ( v56 )
      {
        Instance = sub_1C3E6A0(v56, *(_QWORD *)(*(_QWORD *)pieceSaves + 64LL));
        if ( !Instance )
        {
          v60 = sub_1C3E7E4();
          sub_1C3E68C(v60, 0);
        }
      }
      if ( v49 >= pieceSaves[6] )
        goto LABEL_70;
      *(_QWORD *)&pieceSaves[v51] = v56;
      sub_1C3E508((CGThumbnailListItem_o *)&pieceSaves[v51], (int32_t)v56, v57, v58);
      ++v49;
      v51 += 2;
    }
    while ( v50 != v49 );
  }
  Instance = (__int64)v67;
  if ( !v67 )
    goto LABEL_69;
  return (WarBoardPieceData_array *)System_Collections_Generic_List_object___ToArray(
                                      v67,
                                      (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
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
  CGThumbnailListItem_o *p_monitor; // x20
  System_Collections_Generic_IEnumerable_T__o *monitor; // x22
  System_Collections_Generic_List_int__o *v16; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  System_Int32_array *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  if ( (byte_4C547A1 & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_Find_WarBoardSquareIndexData___);
    sub_1C3E564(&System_Func_WarBoardSquareIndexData__bool__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor___78135936);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass173_0__AddSquareInfo_b__0__);
    sub_1C3E564(&WarBoardData___c__DisplayClass173_0_TypeInfo);
    byte_4C547A1 = 1;
  }
  v7 = (WarBoardData___c__DisplayClass173_0_o *)sub_1C3E7B0(WarBoardData___c__DisplayClass173_0_TypeInfo);
  WarBoardData___c__DisplayClass173_0___ctor(v7, 0);
  if ( !v7 )
    goto LABEL_14;
  v7->fields.squareIndex = squareIndex;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_14;
  squareIndexInfo = (System_Object_array *)serverData->fields.squareIndexInfo;
  v12 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardSquareIndexData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v7,
    Method_WarBoardData___c__DisplayClass173_0__AddSquareInfo_b__0__,
    0);
  object = BasicHelper__Find_object_(
             squareIndexInfo,
             (System_Func_T__bool__o *)v12,
             (const MethodInfo_30E39DC *)Method_BasicHelper_Find_WarBoardSquareIndexData___);
  if ( !object )
    return;
  p_monitor = (CGThumbnailListItem_o *)&object[1].monitor;
  monitor = (System_Collections_Generic_IEnumerable_T__o *)object[1].monitor;
  v16 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_58293520(
    v16,
    monitor,
    (const MethodInfo_3797D10 *)Method_System_Collections_Generic_List_int___ctor___78135936);
  if ( !v16 )
    goto LABEL_14;
  v8 = System_Collections_Generic_List_int___Contains(
         v16,
         effectId,
         (const MethodInfo_37987B4 *)Method_System_Collections_Generic_List_int__Contains__);
  if ( v8 )
    return;
  items = v16->fields._items;
  v18 = Method_System_Collections_Generic_List_int__Add__;
  ++v16->fields._version;
  if ( !items )
LABEL_14:
    sub_1C3E7C0(v8, v9);
  size = v16->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v16,
      effectId,
      *(const MethodInfo_379843C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v16->fields._size = size + 1;
    items->m_Items[size] = effectId;
  }
  v20 = System_Collections_Generic_List_int___ToArray(
          v16,
          (const MethodInfo_3799EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
  p_monitor->klass = (CGThumbnailListItem_c *)v20;
  sub_1C3E508(p_monitor, (int32_t)v20, v21, v22);
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

  if ( (byte_4C547B0 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_BattleBuffData__TypeInfo);
    sub_1C3E564(&Method_BasicHelper_ForEach_BattleBuffData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__BattleBuffData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_BattleBuffData___);
    sub_1C3E564(&System_Func_BattleBuffData__bool__TypeInfo);
    sub_1C3E564(&System_Func_WarBoardPieceData__BattleBuffData__TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__BuffTurnProgressing_b__191_0__);
    sub_1C3E564(&Method_WarBoardData___c__BuffTurnProgressing_b__191_1__);
    sub_1C3E564(&Method_WarBoardData___c__BuffTurnProgressing_b__191_2__);
    sub_1C3E564(&WarBoardData___c_TypeInfo);
    byte_4C547B0 = 1;
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
    _9__191_0 = (System_Func_object__object__o *)sub_1C3E7B0(System_Func_WarBoardPieceData__BattleBuffData__TypeInfo);
    System_Func_object__object____ctor(_9__191_0, v6, Method_WarBoardData___c__BuffTurnProgressing_b__191_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__191_0 = (struct System_Func_WarBoardPieceData__BattleBuffData__o *)_9__191_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__191_0, (int32_t)_9__191_0, v8, v9);
  }
  v10 = System_Linq_Enumerable__Select_object__object_(
          pieces,
          (System_Func_TSource__TResult__o *)_9__191_0,
          (const MethodInfo_3130218 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__BattleBuffData___);
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
    _9__191_1 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_BattleBuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__191_1, v14, Method_WarBoardData___c__BuffTurnProgressing_b__191_1__, 0);
    v15 = WarBoardData___c_TypeInfo->static_fields;
    v15->__9__191_1 = (struct System_Func_BattleBuffData__bool__o *)_9__191_1;
    sub_1C3E508((CGThumbnailListItem_o *)&v15->__9__191_1, (int32_t)_9__191_1, v16, v17);
  }
  v18 = System_Linq_Enumerable__Where_object_(
          v12,
          (System_Func_TSource__bool__o *)_9__191_1,
          (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_BattleBuffData___);
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
    _9__191_2 = (System_Action_object__o *)sub_1C3E7B0(System_Action_BattleBuffData__TypeInfo);
    System_Action_object____ctor(_9__191_2, v22, Method_WarBoardData___c__BuffTurnProgressing_b__191_2__, 0);
    p__9__191_2 = (CGThumbnailListItem_o *)&WarBoardData___c_TypeInfo->static_fields->__9__191_2;
    p__9__191_2->klass = (CGThumbnailListItem_c *)_9__191_2;
    sub_1C3E508(p__9__191_2, (int32_t)_9__191_2, v24, v25);
  }
  BasicHelper__ForEach_object_(
    v20,
    (System_Action_T__o *)_9__191_2,
    (const MethodInfo_30E5A30 *)Method_BasicHelper_ForEach_BattleBuffData___);
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
  unsigned int v10; // w27
  WarBoardPieceData_o *v11; // x22
  __int64 v12; // x23
  WarBoardManager_o *v13; // x24
  const MethodInfo_38DF7A4 *v14; // x2
  System_Nullable_float__o v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v18; // x24
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  Il2CppObject *Instance; // x25
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  __int64 v26; // x26
  __int64 v27; // x0
  System_Nullable_Vector3__o v28; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_Vector3__o v29; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C54767 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C3E564(&Method_System_Nullable_Vector3___ctor__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C3E564(&WarBoardTaskBase___TypeInfo);
    byte_4C54767 = 1;
  }
  AliveServantPieces = (__int64)WarBoardData__GetAliveServantPieces(this, (const MethodInfo *)taskList);
  if ( !AliveServantPieces )
LABEL_27:
    sub_1C3E7C0(AliveServantPieces, v6);
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
          AliveServantPieces = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !*(_QWORD *)(v12 + 56) )
            goto LABEL_27;
          v13 = (WarBoardManager_o *)AliveServantPieces;
          AliveServantPieces = (__int64)UnityEngine_Component__get_transform(*(UnityEngine_Component_o **)(v12 + 56), 0);
          if ( !AliveServantPieces )
            goto LABEL_27;
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)AliveServantPieces, 0);
          *(_QWORD *)&v29.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
          *(_QWORD *)&v29.fields.hasValue = &v28;
          *(_QWORD *)&v28.fields.hasValue = 0;
          *(_QWORD *)&v28.fields.value.fields.y = 0;
          System_Nullable_Vector3____ctor(v29, localPosition, v14);
          if ( !v13 )
            goto LABEL_27;
          v15 = 0;
          AliveServantPieces = (__int64)WarBoardManager__GetCameraPerformanceTask(v13, v28, v15, 1, 0, 1, 0);
          v18 = AliveServantPieces;
          if ( taskList )
          {
            items = taskList->fields._items;
            v20 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
            ++taskList->fields._version;
            if ( !items )
              goto LABEL_27;
            size = taskList->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)taskList,
                (Il2CppObject *)AliveServantPieces,
                *(const MethodInfo_37B5460 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            }
            else
            {
              v22 = &items->obj.klass + size;
              taskList->fields._size = size + 1;
              v22[4] = (Il2CppClass *)v18;
              sub_1C3E508((CGThumbnailListItem_o *)(v22 + 4), v18, v16, v17);
            }
          }
          else
          {
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
            AliveServantPieces = sub_1C3E60C(WarBoardTaskBase___TypeInfo, 1);
            if ( !AliveServantPieces )
              goto LABEL_27;
            v26 = AliveServantPieces;
            if ( v18 )
            {
              AliveServantPieces = sub_1C3E6A0(v18, *(_QWORD *)(*(_QWORD *)AliveServantPieces + 64LL));
              if ( !AliveServantPieces )
              {
                v27 = sub_1C3E7E4();
                sub_1C3E68C(v27, 0);
              }
            }
            if ( !*(_DWORD *)(v26 + 24) )
              break;
            *(_QWORD *)(v26 + 32) = v18;
            sub_1C3E508((CGThumbnailListItem_o *)(v26 + 32), v18, v24, v25);
            if ( !Instance )
              goto LABEL_27;
            WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v26, 0);
          }
          AliveServantPieces = WarBoardItemData__Get((WarBoardItemData_o *)v12, v11, taskList, 0, 0);
        }
      }
      v8 = *(_DWORD *)(v9 + 24);
      if ( (int)++v10 >= v8 )
        return;
    }
    sub_1C3E7C8(AliveServantPieces, v6);
  }
}


bool WarBoardData__CheckWinCond(WarBoardData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  WarBoardPieceData_array *Master_object; // x0
  __int64 v5; // x1
  bool result; // w0
  int32_t maxForceId_k__BackingField; // w9
  int32_t maxGroupId_k__BackingField; // w8
  int v9; // w24
  int v10; // w23
  int32_t i; // w20
  int32_t v12; // w21
  int max_length; // w8
  WarBoardPieceData_array *v14; // x22
  unsigned int v15; // w25
  struct System_Collections_Generic_List_int__o *masterExistsForce; // x19
  WarBoardData___c_c *v17; // x0
  System_Func_int__bool__o *_9__98_0; // x20
  Il2CppObject *v19; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t condGroup; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C5476C & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Count_int____78226024);
    sub_1C3E564(&System_Func_int__bool__TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__CheckWinCond_b__98_0__);
    sub_1C3E564(&WarBoardData___c_TypeInfo);
    byte_4C5476C = 1;
  }
  if ( (this->fields.winCondId & 0x80000000) == 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (WarBoardPieceData_array *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    condGroup = -1;
    if ( Master_object )
    {
      if ( !WarBoardCommonReleaseMaster__IsOpen_43357776(
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
    sub_1C3E7C0(Master_object, v5);
  }
  maxForceId_k__BackingField = this->fields._maxForceId_k__BackingField;
  if ( maxForceId_k__BackingField < 1 )
  {
    v10 = 0;
    v9 = 0;
    goto LABEL_30;
  }
  maxGroupId_k__BackingField = this->fields._maxGroupId_k__BackingField;
  v9 = 0;
  v10 = 0;
  for ( i = 1; i <= maxForceId_k__BackingField; ++i )
  {
    if ( maxGroupId_k__BackingField < 0 )
      continue;
    v12 = 0;
    do
    {
      Master_object = WarBoardData__GetPieces_37986760(this, i, v12, v2);
      if ( !Master_object )
        goto LABEL_39;
      max_length = Master_object->max_length;
      v14 = Master_object;
      if ( max_length >= 1 )
      {
        v15 = 0;
        do
        {
          if ( v15 >= max_length )
            sub_1C3E7C8(Master_object, v5);
          Master_object = (WarBoardPieceData_array *)v14->m_Items[v15];
          if ( !Master_object )
            goto LABEL_39;
          if ( !BYTE4(Master_object->m_Items[3]) && !LOBYTE(Master_object->m_Items[11]) )
          {
            Master_object = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster(
                                                         (WarBoardPieceData_o *)Master_object,
                                                         0);
            if ( ((unsigned __int8)Master_object & 1) != 0 )
              ++v9;
            else
              ++v10;
          }
          max_length = v14->max_length;
        }
        while ( (int)++v15 < max_length );
      }
      maxGroupId_k__BackingField = this->fields._maxGroupId_k__BackingField;
      ++v12;
    }
    while ( v12 <= maxGroupId_k__BackingField );
    maxForceId_k__BackingField = this->fields._maxForceId_k__BackingField;
  }
LABEL_30:
  masterExistsForce = this->fields.masterExistsForce;
  v17 = WarBoardData___c_TypeInfo;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v17 = WarBoardData___c_TypeInfo;
  }
  _9__98_0 = v17->static_fields->__9__98_0;
  if ( !_9__98_0 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = WarBoardData___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v17->static_fields->__9;
    _9__98_0 = (System_Func_int__bool__o *)sub_1C3E7B0(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__98_0, v19, Method_WarBoardData___c__CheckWinCond_b__98_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__98_0 = _9__98_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__98_0, (int32_t)_9__98_0, v21, v22);
  }
  return (v9 == 0)
       & (System_Linq_Enumerable__Count_int__51490196(
            (System_Collections_Generic_IEnumerable_TSource__o *)masterExistsForce,
            (System_Func_TSource__bool__o *)_9__98_0,
            (const MethodInfo_311AD94 *)Method_System_Linq_Enumerable_Count_int____78226024) > 0)
       | (v10 == 0);
}


void WarBoardData__ClearLastBattlePieceUniqueIndexes(WarBoardData_o *this, const MethodInfo *method)
{
  struct System_UInt32_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C547A4 & 1) == 0 )
  {
    sub_1C3E564(&uint___TypeInfo);
    byte_4C547A4 = 1;
  }
  v3 = (struct System_UInt32_array *)sub_1C3E60C(uint___TypeInfo, 0);
  this->fields.latestBattlePieceUniqueIndexes = v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.latestBattlePieceUniqueIndexes, (int32_t)v3, v4, v5);
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
    sub_1C3E7C0(this, a);
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

  if ( (byte_4C547B8 & 1) == 0 )
  {
    sub_1C3E564(&WarBoardData_BattleParticipantInfo_TypeInfo);
    byte_4C547B8 = 1;
  }
  v6 = (WarBoardData_BattleParticipantInfo_o *)sub_1C3E7B0(WarBoardData_BattleParticipantInfo_TypeInfo);
  WarBoardData_BattleParticipantInfo___ctor(v6, attackPieceData, targetPieceData, 0);
  return v6;
}


void WarBoardData__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  WarBoardData_c *v1; // x0
  System_String_o *AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY; // x19

  if ( (byte_4C54764 & 1) == 0 )
  {
    sub_1C3E564(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C3E564(&WarBoardData_TypeInfo);
    byte_4C54764 = 1;
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
  __int64 v4; // x1
  System_Delegate_o **v5; // x20
  System_Delegate_o *v6; // x21
  WarBoardData___c_c *v7; // x0
  WarBoardTaskBase_TaskCallback_o *_9__152_0; // x22
  Il2CppObject *v9; // x23
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Delegate_o *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Delegate_o *v16; // x8
  WarBoardTaskBase_TaskCallback_c *v17; // x1

  if ( (byte_4C54794 & 1) == 0 )
  {
    sub_1C3E564(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__CreateEventBossUIDataTask_b__152_0__);
    sub_1C3E564(&WarBoardData___c_TypeInfo);
    sub_1C3E564(&WarBoardWaitTime_TypeInfo);
    byte_4C54794 = 1;
  }
  v2 = sub_1C3E7B0(WarBoardWaitTime_TypeInfo);
  WarBoardWaitTime___ctor((WarBoardWaitTime_o *)v2, 0.0, 0);
  if ( !v2 )
    sub_1C3E7C0(v3, v4);
  v5 = (System_Delegate_o **)(v2 + 40);
  v6 = *(System_Delegate_o **)(v2 + 40);
  v7 = WarBoardData___c_TypeInfo;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v7 = WarBoardData___c_TypeInfo;
  }
  _9__152_0 = v7->static_fields->__9__152_0;
  if ( !_9__152_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = WarBoardData___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__152_0 = (WarBoardTaskBase_TaskCallback_o *)sub_1C3E7B0(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__152_0,
      v9,
      Method_WarBoardData___c__CreateEventBossUIDataTask_b__152_0__,
      0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__152_0 = _9__152_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__152_0, (int32_t)_9__152_0, v11, v12);
  }
  v13 = System_Delegate__Combine(v6, (System_Delegate_o *)_9__152_0, 0);
  v16 = v13;
  if ( !v13 )
    goto LABEL_14;
  v17 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v13->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v5 = v13, (WarBoardTaskBase_TaskCallback_c *)v13->klass != v17) )
  {
    sub_1C3EA80(v13);
LABEL_14:
    *v5 = v16;
  }
  sub_1C3E508((CGThumbnailListItem_o *)(v2 + 40), (int32_t)v16, v14, v15);
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
  CGThumbnailListItem_o *p_monitor; // x20
  System_Collections_Generic_IEnumerable_T__o *monitor; // x22
  System_Collections_Generic_List_int__o *v16; // x21
  System_Int32_array *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4C547A2 & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_Find_WarBoardSquareIndexData___);
    sub_1C3E564(&System_Func_WarBoardSquareIndexData__bool__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor___78135936);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass174_0__DelSquareInfo_b__0__);
    sub_1C3E564(&WarBoardData___c__DisplayClass174_0_TypeInfo);
    byte_4C547A2 = 1;
  }
  v7 = (WarBoardData___c__DisplayClass174_0_o *)sub_1C3E7B0(WarBoardData___c__DisplayClass174_0_TypeInfo);
  WarBoardData___c__DisplayClass174_0___ctor(v7, 0);
  if ( !v7 )
    goto LABEL_10;
  v7->fields.squareIndex = squareIndex;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_10;
  squareIndexInfo = (System_Object_array *)serverData->fields.squareIndexInfo;
  v12 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardSquareIndexData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v7,
    Method_WarBoardData___c__DisplayClass174_0__DelSquareInfo_b__0__,
    0);
  object = BasicHelper__Find_object_(
             squareIndexInfo,
             (System_Func_T__bool__o *)v12,
             (const MethodInfo_30E39DC *)Method_BasicHelper_Find_WarBoardSquareIndexData___);
  if ( !object )
    return;
  p_monitor = (CGThumbnailListItem_o *)&object[1].monitor;
  monitor = (System_Collections_Generic_IEnumerable_T__o *)object[1].monitor;
  v16 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_58293520(
    v16,
    monitor,
    (const MethodInfo_3797D10 *)Method_System_Collections_Generic_List_int___ctor___78135936);
  if ( !v16 )
LABEL_10:
    sub_1C3E7C0(v8, v9);
  if ( System_Collections_Generic_List_int___Contains(
         v16,
         effectId,
         (const MethodInfo_37987B4 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    System_Collections_Generic_List_int___Remove(
      v16,
      effectId,
      (const MethodInfo_3799938 *)Method_System_Collections_Generic_List_int__Remove__);
    v17 = System_Collections_Generic_List_int___ToArray(
            v16,
            (const MethodInfo_3799EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
    p_monitor->klass = (CGThumbnailListItem_c *)v17;
    sub_1C3E508(p_monitor, (int32_t)v17, v18, v19);
  }
}


void WarBoardData__DeleteAfterContinueDeviceLocalSave(const MethodInfo *method)
{
  WarBoardData_c *v1; // x0
  System_String_o *AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY; // x19

  if ( (byte_4C54765 & 1) == 0 )
  {
    sub_1C3E564(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C3E564(&WarBoardData_TypeInfo);
    byte_4C54765 = 1;
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

  if ( (byte_4C54763 & 1) == 0 )
  {
    sub_1C3E564(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C3E564(&WarBoardData_TypeInfo);
    byte_4C54763 = 1;
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
  if ( (byte_4C54769 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__TryGetValue__);
    byte_4C54769 = 1;
  }
  value = 0;
  actionPointEntityDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.actionPointEntityDict;
  if ( !actionPointEntityDict )
    sub_1C3E7C0(0, *(_QWORD *)&forceId);
  System_Collections_Generic_Dictionary_uint__object___TryGetValue(
    actionPointEntityDict,
    (forceId << 24) | (v4 << 16),
    &value,
    (const MethodInfo_34AFB3C *)Method_System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__TryGetValue__);
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

  if ( (byte_4C54778 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C3E564(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__GetAliveEnemyServantPieces_b__110_0__);
    sub_1C3E564(&WarBoardData___c_TypeInfo);
    byte_4C54778 = 1;
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
    _9__110_0 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__110_0, v6, Method_WarBoardData___c__GetAliveEnemyServantPieces_b__110_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__110_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__110_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__110_0, (int32_t)_9__110_0, v8, v9);
  }
  v10 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__110_0,
          (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (System_Collections_Generic_List_WarBoardPieceData__o *)System_Linq_Enumerable__ToList_object_(
                                                                   v10,
                                                                   (const MethodInfo_313DE84 *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
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

  if ( (byte_4C54775 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C3E564(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__GetAlivePieces_b__107_0__);
    sub_1C3E564(&WarBoardData___c_TypeInfo);
    byte_4C54775 = 1;
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
    _9__107_0 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__107_0, v6, Method_WarBoardData___c__GetAlivePieces_b__107_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__107_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__107_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__107_0, (int32_t)_9__107_0, v8, v9);
  }
  v10 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__107_0,
          (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v10,
                                      (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
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

  if ( (byte_4C54777 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C3E564(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__GetAlivePlayerGroupServantPieces_b__109_0__);
    sub_1C3E564(&WarBoardData___c_TypeInfo);
    byte_4C54777 = 1;
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
    _9__109_0 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__109_0,
      v6,
      Method_WarBoardData___c__GetAlivePlayerGroupServantPieces_b__109_0__,
      0);
    static_fields = (CGThumbnailListItem_o *)WarBoardData___c_TypeInfo->static_fields;
    static_fields[1].klass = (CGThumbnailListItem_c *)_9__109_0;
    sub_1C3E508(static_fields + 1, (int32_t)_9__109_0, v8, v9);
  }
  v10 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__109_0,
          (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (System_Collections_Generic_List_WarBoardPieceData__o *)System_Linq_Enumerable__ToList_object_(
                                                                   v10,
                                                                   (const MethodInfo_313DE84 *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
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

  if ( (byte_4C54776 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C3E564(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__GetAliveServantPieces_b__108_0__);
    sub_1C3E564(&WarBoardData___c_TypeInfo);
    byte_4C54776 = 1;
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
    _9__108_0 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__108_0, v6, Method_WarBoardData___c__GetAliveServantPieces_b__108_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__108_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__108_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__108_0, (int32_t)_9__108_0, v8, v9);
  }
  v10 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__108_0,
          (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v10,
                                      (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
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
  System_Collections_Generic_List_object__o *listPrevCond; // x19
  System_Predicate_object__o *v9; // x20
  Il2CppObject *v10; // x0

  if ( (byte_4C547A8 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardPrevCondData__Find__);
    sub_1C3E564(&System_Predicate_WarBoardPrevCondData__TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass183_0__GetClearedTurn_b__0__);
    sub_1C3E564(&WarBoardData___c__DisplayClass183_0_TypeInfo);
    byte_4C547A8 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass183_0_o *)sub_1C3E7B0(WarBoardData___c__DisplayClass183_0_TypeInfo);
  WarBoardData___c__DisplayClass183_0___ctor(v5, 0);
  if ( !v5
    || (v5->fields.condId = condId,
        listPrevCond = (System_Collections_Generic_List_object__o *)this->fields.listPrevCond,
        v9 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_WarBoardPrevCondData__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_WarBoardData___c__DisplayClass183_0__GetClearedTurn_b__0__,
          0),
        !listPrevCond) )
  {
    sub_1C3E7C0(v6, v7);
  }
  v10 = System_Collections_Generic_List_object___Find(
          listPrevCond,
          (System_Predicate_T__o *)v9,
          (const MethodInfo_37B5AC8 *)Method_System_Collections_Generic_List_WarBoardPrevCondData__Find__);
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
  System_Collections_Generic_IEnumerable_TSource__o *condSquares; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4C54786 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
    sub_1C3E564(&System_Func_WarBoardSquareData__bool__TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass130_0__GetCondSquare_b__0__);
    sub_1C3E564(&WarBoardData___c__DisplayClass130_0_TypeInfo);
    byte_4C54786 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass130_0_o *)sub_1C3E7B0(WarBoardData___c__DisplayClass130_0_TypeInfo);
  WarBoardData___c__DisplayClass130_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C3E7C0(v6, v7);
  v5->fields.squareIndex = squareIndex;
  condSquares = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.condSquares;
  v9 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardSquareData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass130_0__GetCondSquare_b__0__,
    0);
  return (WarBoardSquareData_o *)System_Linq_Enumerable__FirstOrDefault_object__51525108(
                                   condSquares,
                                   (System_Func_TSource__bool__o *)v9,
                                   (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
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
  void *Piece_37929548; // x0
  __int64 value; // x1
  int max_length; // w8
  unsigned int v9; // w25
  System_Int32_array *v10; // x28
  unsigned __int64 v11; // x27
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

  if ( (byte_4C54788 & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_Any_int___);
    sub_1C3E564(&System_Func_int__bool__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__0__);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__1__);
    sub_1C3E564(&WarBoardData___c__DisplayClass133_0_TypeInfo);
    byte_4C54788 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
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
        sub_1C3E7C8(Piece_37929548, value);
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
          v12 = (WarBoardData___c__DisplayClass133_0_o *)sub_1C3E7B0(WarBoardData___c__DisplayClass133_0_TypeInfo);
          WarBoardData___c__DisplayClass133_0___ctor(v12, 0);
          if ( v11 >= LODWORD(v10->max_length) )
            goto LABEL_30;
          if ( !v12 )
            goto LABEL_29;
          v14 = v10->m_Items[v11];
          v12->fields.value = v14;
          Piece_37929548 = WarBoardData__GetPiece_37929548(this, v14, v13);
          if ( !Piece_37929548 )
          {
            Piece_37929548 = WarBoardData__GetUnusedTreasure(this, v12->fields.value, v15);
            if ( !Piece_37929548 )
            {
              Piece_37929548 = WarBoardData__GetWall(this, v12->fields.value, 0, v16);
              if ( !Piece_37929548 )
              {
                reinforcementsAppointmentSquareList = (System_Collections_Generic_List_T__o *)this->fields.reinforcementsAppointmentSquareList;
                v18 = (System_Func_int__bool__o *)sub_1C3E7B0(System_Func_int__bool__TypeInfo);
                System_Func_int__bool____ctor(
                  v18,
                  (Il2CppObject *)v12,
                  Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__0__,
                  0);
                Piece_37929548 = (void *)BasicHelper__Any_int_(
                                           reinforcementsAppointmentSquareList,
                                           (System_Func_T__bool__o *)v18,
                                           (const MethodInfo_30E2AE4 *)Method_BasicHelper_Any_int___);
                if ( ((unsigned __int8)Piece_37929548 & 1) == 0 )
                {
                  v19 = (System_Func_int__bool__o *)sub_1C3E7B0(System_Func_int__bool__TypeInfo);
                  System_Func_int__bool____ctor(
                    v19,
                    (Il2CppObject *)v12,
                    Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__1__,
                    0);
                  Piece_37929548 = (void *)BasicHelper__Any_int_(
                                             (System_Collections_Generic_List_T__o *)v5,
                                             (System_Func_T__bool__o *)v19,
                                             (const MethodInfo_30E2AE4 *)Method_BasicHelper_Any_int___);
                  if ( ((unsigned __int8)Piece_37929548 & 1) == 0 )
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
          *(const MethodInfo_379843C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
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
    sub_1C3E7C0(Piece_37929548, value);
  }
LABEL_27:
  if ( !v5 )
    goto LABEL_29;
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_3799EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_String_o *WarBoardData__GetEditBgmName(WarBoardData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C54791 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_1C3E564(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C54791 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_BgmMaster___);
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity || !Instance )
    goto LABEL_11;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               stageEntity->fields.editBgmId,
                               (const MethodInfo_33B2FA4 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return (System_String_o *)entity[1].monitor;
LABEL_11:
    sub_1C3E7C0(Instance, v4);
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

  if ( (byte_4C5477E & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C3E564(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__GetEditableServantPieces_b__120_0__);
    sub_1C3E564(&WarBoardData___c_TypeInfo);
    byte_4C5477E = 1;
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
    _9__120_0 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__120_0, v6, Method_WarBoardData___c__GetEditableServantPieces_b__120_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__120_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__120_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__120_0, (int32_t)_9__120_0, v8, v9);
  }
  v10 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__120_0,
          (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v10,
                                      (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


WarBoardEffectData_o *WarBoardData__GetEffect(WarBoardData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  WarBoardData___c__DisplayClass142_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *effects; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4C5478D & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardEffectData___);
    sub_1C3E564(&System_Func_WarBoardEffectData__bool__TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass142_0__GetEffect_b__0__);
    sub_1C3E564(&WarBoardData___c__DisplayClass142_0_TypeInfo);
    byte_4C5478D = 1;
  }
  v5 = (WarBoardData___c__DisplayClass142_0_o *)sub_1C3E7B0(WarBoardData___c__DisplayClass142_0_TypeInfo);
  WarBoardData___c__DisplayClass142_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C3E7C0(v6, v7);
  v5->fields.squareIndex = squareIndex;
  effects = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.effects;
  v9 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardEffectData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass142_0__GetEffect_b__0__,
    0);
  return (WarBoardEffectData_o *)System_Linq_Enumerable__FirstOrDefault_object__51525108(
                                   effects,
                                   (System_Func_TSource__bool__o *)v9,
                                   (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardEffectData___);
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
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4C54773 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
    sub_1C3E564(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass105_0__GetEventBossPiece_b__0__);
    sub_1C3E564(&WarBoardData___c__DisplayClass105_0_TypeInfo);
    byte_4C54773 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass105_0_o *)sub_1C3E7B0(WarBoardData___c__DisplayClass105_0_TypeInfo);
  WarBoardData___c__DisplayClass105_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C3E7C0(v6, v7);
  v5->fields.stageBossIndex = stageBossIndex;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v9 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass105_0__GetEventBossPiece_b__0__,
    0);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_object__51525108(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v9,
                                  (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
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
        sub_1C3E7C8(this, method);
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
    sub_1C3E7C0(this, method);
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
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *reinforcementsSaveList; // x22
  System_Predicate_object__o *v12; // x24
  Il2CppObject *v13; // x25
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_List_object__o *v17; // x22
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Collections_Generic_List_HoldReinforcementsData__o *v20; // x22
  System_Func_object__bool__o *v21; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  const MethodInfo_353FC4C **v23; // x26
  WarBoardData___c__DisplayClass188_1_c **v24; // x27
  __int64 v25; // x24
  __int64 v26; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t current; // w1
  HoldReinforcementsData_o **v31; // x22
  __int64 v32; // x0
  __int64 v33; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  _BOOL8 v35; // x0
  __int64 v36; // x1
  const MethodInfo *v37; // x2
  System_Int32_array *DeploySquareIds; // x0
  __int64 v39; // x1
  const MethodInfo *v40; // x3
  struct System_Int32_array *limitNums; // x9
  __int64 index_k__BackingField; // x2
  System_Int32_array *v43; // x23
  WarBoardPieceData_array *ReinfocementsPieces; // x0
  __int64 v45; // x1
  struct System_Int32_array *v46; // x8
  __int64 v47; // x9
  _BOOL4 v48; // w25
  Il2CppObject *Instance; // x0
  __int64 v50; // x1
  _BOOL8 IsPlayerTurn; // x0
  __int64 v52; // x1
  __int64 v53; // x10
  int max_length; // w11
  int v55; // w10
  const MethodInfo_353FC4C **v56; // x20
  System_Collections_Generic_List_T__o *v57; // x25
  System_Func_object__bool__o *v58; // x26
  bool v59; // w0
  __int64 v60; // x1
  WarBoardData___c__DisplayClass188_1_c **v61; // x29
  _BOOL8 v62; // x0
  __int64 v63; // x1
  Il2CppObject *v64; // x27
  System_Collections_Generic_List_int__o *v65; // x25
  System_Collections_Generic_List_int__o *v66; // x24
  __int64 v67; // x0
  __int64 v68; // x1
  __int64 v69; // x0
  __int64 v70; // x1
  __int64 v71; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v73; // x9
  __int64 size; // x10
  System_Int32_array *v75; // x0
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  __int64 v78; // x0
  __int64 v79; // x1
  CGThumbnailListItem_o *v80; // x25
  __int64 v81; // x0
  __int64 v82; // x1
  __int64 v83; // x8
  __int64 v84; // x1
  struct System_Int32_array *v85; // x8
  _QWORD *v86; // x9
  __int64 v87; // x10
  System_Int32_array *v88; // x0
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  Il2CppObject *v91; // x0
  __int64 v92; // x1
  void *monitor; // x8
  HoldReinforcementsData_o *v94; // x0
  __int64 v95; // x9
  System_Collections_Generic_List_int__o *v96; // x8
  __int64 v97; // x1
  struct System_Int32_array *v98; // x9
  _QWORD *v99; // x10
  __int64 v100; // x11
  __int64 v101; // x1
  __int64 v102; // x24
  __int64 v103; // x0
  __int64 v104; // x1
  __int64 v105; // x0
  int32_t v106; // w2
  const MethodInfo *v107; // x3
  __int64 v108; // x0
  int32_t v109; // w2
  const MethodInfo *v110; // x3
  __int64 v111; // x8
  __int64 v112; // x1
  int32_t v113; // w2
  const MethodInfo *v114; // x3
  System_Collections_Generic_List_object__o *v115; // x0
  struct System_Object_array *v116; // x8
  _QWORD *v117; // x9
  __int64 v118; // x10
  Il2CppClass **v119; // x8
  Il2CppObject *v120; // x0
  __int64 v121; // x1
  void *v122; // x8
  HoldReinforcementsData_o *v123; // x0
  __int64 v124; // x9
  System_Collections_Generic_List_int__o *v125; // x8
  __int64 v126; // x1
  struct System_Int32_array *v127; // x9
  _QWORD *v128; // x10
  __int64 v129; // x11
  __int64 v130; // x1
  System_Collections_Generic_List_Enumerator_object__o v132; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v133; // [xsp+20h] [xbp-A0h] BYREF
  WarBoardStageReinforcementsEntity_o *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v135; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4C547AD & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_Any_ReinforcementsData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToList_HoldReinforcementsData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_HoldReinforcementsData___);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__get_Current__);
    sub_1C3E564(&System_Func_HoldReinforcementsData__bool__TypeInfo);
    sub_1C3E564(&System_Func_ReinforcementsData__bool__TypeInfo);
    sub_1C3E564(&int___TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ReinforcementsData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ReinforcementsData__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_HoldReinforcementsData__RemoveAll__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ReinforcementsData___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_ReinforcementsData__TypeInfo);
    sub_1C3E564(&System_Predicate_HoldReinforcementsData__TypeInfo);
    sub_1C3E564(&ReinforcementsData_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C3E564(&Method_WarBoardData___c__GetHoldReinforcements_b__188_0__);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass188_0__GetHoldReinforcements_b__1__);
    sub_1C3E564(&WarBoardData___c__DisplayClass188_0_TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass188_1__GetHoldReinforcements_b__2__);
    sub_1C3E564(&WarBoardData___c__DisplayClass188_1_TypeInfo);
    sub_1C3E564(&WarBoardData___c_TypeInfo);
    byte_4C547AD = 1;
  }
  memset(&v135, 0, sizeof(v135));
  entity = 0;
  memset(&v133, 0, sizeof(v133));
  v8 = (WarBoardData___c__DisplayClass188_0_o *)sub_1C3E7B0(WarBoardData___c__DisplayClass188_0_TypeInfo);
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
  v12 = *(System_Predicate_object__o **)(*((_QWORD *)v9 + 23) + 232LL);
  if ( !v12 )
  {
    if ( !*((_DWORD *)v9 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = WarBoardData___c_TypeInfo;
    }
    v13 = (Il2CppObject *)**((_QWORD **)v9 + 23);
    v12 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_HoldReinforcementsData__TypeInfo);
    System_Predicate_object____ctor(v12, v13, Method_WarBoardData___c__GetHoldReinforcements_b__188_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__188_0 = (struct System_Predicate_HoldReinforcementsData__o *)v12;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__188_0, (int32_t)v12, v15, v16);
  }
  if ( !reinforcementsSaveList )
    goto LABEL_156;
  System_Collections_Generic_List_object___RemoveAll(
    reinforcementsSaveList,
    (System_Predicate_T__o *)v12,
    (const MethodInfo_37B6ABC *)Method_System_Collections_Generic_List_HoldReinforcementsData__RemoveAll__);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_ReinforcementsData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_ReinforcementsData___ctor__);
  *reinforcementsDatas = (System_Collections_Generic_List_ReinforcementsData__o *)v17;
  sub_1C3E508((CGThumbnailListItem_o *)reinforcementsDatas, (int32_t)v17, v18, v19);
  v20 = this->fields.reinforcementsSaveList;
  if ( (v8->fields.targetStageReinforcementsId & 0x80000000) == 0 )
  {
    v21 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_HoldReinforcementsData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v21,
      (Il2CppObject *)v8,
      Method_WarBoardData___c__DisplayClass188_0__GetHoldReinforcements_b__1__,
      0);
    v22 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v20,
            (System_Func_TSource__bool__o *)v21,
            (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_HoldReinforcementsData___);
    v9 = System_Linq_Enumerable__ToList_object_(
           v22,
           (const MethodInfo_313DE84 *)Method_System_Linq_Enumerable_ToList_HoldReinforcementsData___);
    v20 = (struct System_Collections_Generic_List_HoldReinforcementsData__o *)v9;
  }
  if ( !v20 )
LABEL_156:
    sub_1C3E7C0(v9, v10);
  v23 = (const MethodInfo_353FC4C **)&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__;
  v24 = &WarBoardData___c__DisplayClass188_1_TypeInfo;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v132,
    (System_Collections_Generic_List_object__o *)v20,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
  v135 = v132;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(&v135, *v23) )
  {
    v25 = sub_1C3E7B0(*v24);
    WarBoardData___c__DisplayClass188_1___ctor((WarBoardData___c__DisplayClass188_1_o *)v25, 0);
    if ( !v25 )
      sub_1C3E7C0(v26, v27);
    current = (int32_t)v135.fields._current;
    *(_QWORD *)(v25 + 16) = v135.fields._current;
    v31 = (HoldReinforcementsData_o **)(v25 + 16);
    sub_1C3E508((CGThumbnailListItem_o *)(v25 + 16), current, v28, v29);
    stageEntity = this->fields.stageEntity;
    if ( !stageEntity )
      sub_1C3E7C0(v32, v33);
    if ( !*v31 )
      sub_1C3E7C0(v32, v33);
    if ( !mst )
      sub_1C3E7C0(v32, v33);
    v35 = WarBoardStageReinforcementsMaster__TryGetEntity(
            mst,
            &entity,
            stageEntity->fields.id,
            (*v31)->fields._id_k__BackingField,
            0);
    if ( v35 )
    {
      if ( !entity )
        sub_1C3E7C0(v35, v36);
      DeploySquareIds = WarBoardData__GetDeploySquareIds(this, entity->fields.squareIds, v37);
      if ( !entity )
        sub_1C3E7C0(DeploySquareIds, v39);
      if ( !*v31 )
        sub_1C3E7C0(DeploySquareIds, v39);
      limitNums = entity->fields.limitNums;
      if ( !limitNums )
        sub_1C3E7C0(DeploySquareIds, v39);
      index_k__BackingField = (*v31)->fields._index_k__BackingField;
      if ( (unsigned int)index_k__BackingField >= LODWORD(limitNums->max_length) )
        sub_1C3E7C8(DeploySquareIds, v39);
      v43 = DeploySquareIds;
      if ( limitNums->m_Items[index_k__BackingField] < 1 )
      {
        v48 = 0;
      }
      else
      {
        ReinfocementsPieces = WarBoardData__GetReinfocementsPieces(this, entity->fields.id, index_k__BackingField, v40);
        if ( !ReinfocementsPieces )
          sub_1C3E7C0(0, v45);
        if ( !entity )
          sub_1C3E7C0(ReinfocementsPieces, v45);
        if ( !*v31 )
          sub_1C3E7C0(ReinfocementsPieces, v45);
        v46 = entity->fields.limitNums;
        if ( !v46 )
          sub_1C3E7C0(ReinfocementsPieces, v45);
        v47 = (*v31)->fields._index_k__BackingField;
        if ( (unsigned int)v47 >= LODWORD(v46->max_length) )
          sub_1C3E7C8(ReinfocementsPieces, v45);
        v48 = v46->m_Items[v47] <= SLODWORD(ReinfocementsPieces->max_length);
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !Instance )
        sub_1C3E7C0(0, v50);
      IsPlayerTurn = WarBoardManager__IsPlayerTurn((WarBoardManager_o *)Instance, 0);
      if ( !entity )
        sub_1C3E7C0(IsPlayerTurn, v52);
      if ( !v43 )
        sub_1C3E7C0(IsPlayerTurn, v52);
      if ( !*v31 )
        sub_1C3E7C0(IsPlayerTurn, v52);
      v53 = (*v31)->fields._index_k__BackingField;
      max_length = v43->max_length;
      if ( (int)v53 >= max_length )
      {
        v55 = 0;
      }
      else
      {
        if ( (unsigned int)v53 >= max_length )
          sub_1C3E7C8(IsPlayerTurn, v52);
        v55 = v43->m_Items[v53] >= 0 && !v48;
      }
      if ( (IsPlayerTurn ^ (entity->fields.forceId != 0)) & (unsigned int)v55 )
      {
        v56 = v23;
        v57 = (System_Collections_Generic_List_T__o *)*reinforcementsDatas;
        v58 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_ReinforcementsData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v58,
          (Il2CppObject *)v25,
          Method_WarBoardData___c__DisplayClass188_1__GetHoldReinforcements_b__2__,
          0);
        v59 = BasicHelper__Any_object_(
                v57,
                (System_Func_T__bool__o *)v58,
                (const MethodInfo_30E2E10 *)Method_BasicHelper_Any_ReinforcementsData___);
        v23 = v56;
        if ( v59 )
        {
          if ( !*reinforcementsDatas )
            sub_1C3E7C0(0, v60);
          v61 = v24;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v132,
            (System_Collections_Generic_List_object__o *)*reinforcementsDatas,
            (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ReinforcementsData__GetEnumerator__);
          v133 = v132;
          do
          {
            v62 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v133,
                    (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__MoveNext__);
            if ( !v62 )
            {
              v24 = v61;
              goto LABEL_76;
            }
            v64 = v133.fields._current;
            if ( !v133.fields._current )
              sub_1C3E7C0(v62, v63);
            if ( !*v31 )
              sub_1C3E7C0(v62, v63);
          }
          while ( LODWORD(v133.fields._current[1].klass) != (*v31)->fields._id_k__BackingField );
          v65 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor(
            v65,
            (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
          v66 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor(
            v66,
            (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
          if ( !v65 )
            sub_1C3E7C0(v67, v68);
          System_Collections_Generic_List_int___AddRange(
            v65,
            (System_Collections_Generic_IEnumerable_T__o *)v64[1].monitor,
            (const MethodInfo_3798648 *)Method_System_Collections_Generic_List_int__AddRange__);
          if ( !*v31 )
            sub_1C3E7C0(v69, v70);
          v71 = (unsigned int)(*v31)->fields._index_k__BackingField;
          items = v65->fields._items;
          v73 = Method_System_Collections_Generic_List_int__Add__;
          ++v65->fields._version;
          if ( !items )
            sub_1C3E7C0(v69, v71);
          size = v65->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v65,
              v71,
              *(const MethodInfo_379843C **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
          }
          else
          {
            v65->fields._size = size + 1;
            items->m_Items[size] = v71;
          }
          v75 = System_Collections_Generic_List_int___ToArray(
                  v65,
                  (const MethodInfo_3799EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
          v64[1].monitor = v75;
          sub_1C3E508((CGThumbnailListItem_o *)&v64[1].monitor, (int32_t)v75, v76, v77);
          if ( !v66 )
            sub_1C3E7C0(v78, v79);
          v80 = (CGThumbnailListItem_o *)&v64[2];
          v23 = v56;
          System_Collections_Generic_List_int___AddRange(
            v66,
            (System_Collections_Generic_IEnumerable_T__o *)v64[2].klass,
            (const MethodInfo_3798648 *)Method_System_Collections_Generic_List_int__AddRange__);
          if ( !*v31 )
            sub_1C3E7C0(v81, v82);
          v83 = (*v31)->fields._index_k__BackingField;
          v24 = v61;
          if ( (unsigned int)v83 >= LODWORD(v43->max_length) )
            sub_1C3E7C8(v81, v82);
          v84 = (unsigned int)v43->m_Items[v83];
          v85 = v66->fields._items;
          v86 = Method_System_Collections_Generic_List_int__Add__;
          ++v66->fields._version;
          if ( !v85 )
            sub_1C3E7C0(v81, v84);
          v87 = v66->fields._size;
          if ( (unsigned int)v87 >= LODWORD(v85->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v66,
              v84,
              *(const MethodInfo_379843C **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
          }
          else
          {
            v66->fields._size = v87 + 1;
            v85->m_Items[v87] = v84;
          }
          v88 = System_Collections_Generic_List_int___ToArray(
                  v66,
                  (const MethodInfo_3799EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
          v80->klass = (CGThumbnailListItem_c *)v88;
          sub_1C3E508(v80, (int32_t)v88, v89, v90);
          v91 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !v91 )
            sub_1C3E7C0(0, v92);
          monitor = v91[27].monitor;
          if ( !monitor )
            sub_1C3E7C0(v91, v92);
          v94 = *v31;
          if ( !*v31 )
            sub_1C3E7C0(0, v92);
          v95 = v94->fields._index_k__BackingField;
          if ( (unsigned int)v95 >= LODWORD(v43->max_length) )
            sub_1C3E7C8(v94, v92);
          v96 = (System_Collections_Generic_List_int__o *)*((_QWORD *)monitor + 29);
          if ( !v96 )
            sub_1C3E7C0(v94, v92);
          v97 = (unsigned int)v43->m_Items[v95];
          v98 = v96->fields._items;
          v99 = Method_System_Collections_Generic_List_int__Add__;
          ++v96->fields._version;
          if ( !v98 )
            sub_1C3E7C0(v94, v97);
          v100 = v96->fields._size;
          if ( (unsigned int)v100 >= LODWORD(v98->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v96,
              v97,
              *(const MethodInfo_379843C **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
            v94 = *v31;
            if ( !*v31 )
              sub_1C3E7C0(0, v101);
          }
          else
          {
            v96->fields._size = v100 + 1;
            v98->m_Items[v100] = v97;
          }
          HoldReinforcementsData__DecreaseHoldNum(v94, 0);
LABEL_76:
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v133,
            (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__Dispose__);
        }
        else
        {
          v102 = sub_1C3E7B0(ReinforcementsData_TypeInfo);
          ReinforcementsData___ctor((ReinforcementsData_o *)v102, 0);
          if ( !entity )
            sub_1C3E7C0(v103, v104);
          if ( !v102 )
            sub_1C3E7C0(v103, v104);
          *(_DWORD *)(v102 + 16) = entity->fields.id;
          v105 = sub_1C3E60C(int___TypeInfo, 1);
          if ( !*v31 )
            sub_1C3E7C0(v105, v105);
          if ( !v105 )
            sub_1C3E7C0(0, 0);
          if ( !*(_DWORD *)(v105 + 24) )
            sub_1C3E7C8(v105, v105);
          *(_DWORD *)(v105 + 32) = (*v31)->fields._index_k__BackingField;
          *(_QWORD *)(v102 + 24) = v105;
          sub_1C3E508((CGThumbnailListItem_o *)(v102 + 24), v105, v106, v107);
          v108 = sub_1C3E60C(int___TypeInfo, 1);
          if ( !*v31 )
            sub_1C3E7C0(v108, v108);
          v111 = (*v31)->fields._index_k__BackingField;
          if ( (unsigned int)v111 >= LODWORD(v43->max_length) )
            sub_1C3E7C8(v108, v108);
          if ( !v108 )
            sub_1C3E7C0(0, 0);
          if ( !*(_DWORD *)(v108 + 24) )
            sub_1C3E7C8(v108, v108);
          *(_DWORD *)(v108 + 32) = v43->m_Items[v111];
          *(_QWORD *)(v102 + 32) = v108;
          sub_1C3E508((CGThumbnailListItem_o *)(v102 + 32), v108, v109, v110);
          v115 = (System_Collections_Generic_List_object__o *)*reinforcementsDatas;
          if ( !*reinforcementsDatas )
            sub_1C3E7C0(0, v112);
          v116 = v115->fields._items;
          v117 = Method_System_Collections_Generic_List_ReinforcementsData__Add__;
          ++v115->fields._version;
          if ( !v116 )
            sub_1C3E7C0(v115, v112);
          v118 = v115->fields._size;
          if ( (unsigned int)v118 >= LODWORD(v116->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v115,
              (Il2CppObject *)v102,
              *(const MethodInfo_37B5460 **)(*(_QWORD *)(v117[4] + 192LL) + 112LL));
          }
          else
          {
            v119 = &v116->obj.klass + v118;
            v115->fields._size = v118 + 1;
            v119[4] = (Il2CppClass *)v102;
            sub_1C3E508((CGThumbnailListItem_o *)(v119 + 4), v102, v113, v114);
          }
          v120 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !v120 )
            sub_1C3E7C0(0, v121);
          v122 = v120[27].monitor;
          if ( !v122 )
            sub_1C3E7C0(v120, v121);
          v123 = *v31;
          if ( !*v31 )
            sub_1C3E7C0(0, v121);
          v124 = v123->fields._index_k__BackingField;
          if ( (unsigned int)v124 >= LODWORD(v43->max_length) )
            sub_1C3E7C8(v123, v121);
          v125 = (System_Collections_Generic_List_int__o *)*((_QWORD *)v122 + 29);
          if ( !v125 )
            sub_1C3E7C0(v123, v121);
          v126 = (unsigned int)v43->m_Items[v124];
          v127 = v125->fields._items;
          v128 = Method_System_Collections_Generic_List_int__Add__;
          ++v125->fields._version;
          if ( !v127 )
            sub_1C3E7C0(v123, v126);
          v129 = v125->fields._size;
          if ( (unsigned int)v129 >= LODWORD(v127->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v125,
              v126,
              *(const MethodInfo_379843C **)(*(_QWORD *)(v128[4] + 192LL) + 112LL));
            v123 = *v31;
            if ( !*v31 )
              sub_1C3E7C0(0, v130);
          }
          else
          {
            v125->fields._size = v129 + 1;
            v127->m_Items[v129] = v126;
          }
          HoldReinforcementsData__DecreaseHoldNum(v123, 0);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v135,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
}


int32_t WarBoardData__GetHoldReinforcementsCount(WarBoardData_o *this, const MethodInfo *method)
{
  WarBoardData_o *v2; // x19
  struct System_Collections_Generic_List_HoldReinforcementsData__o *reinforcementsSaveList; // x8

  v2 = this;
  if ( (byte_4C54799 & 1) == 0 )
  {
    this = (WarBoardData_o *)sub_1C3E564(&Method_System_Collections_Generic_List_HoldReinforcementsData__get_Count__);
    byte_4C54799 = 1;
  }
  reinforcementsSaveList = v2->fields.reinforcementsSaveList;
  if ( !reinforcementsSaveList )
    sub_1C3E7C0(this, method);
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
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *v13; // x20
  WarBoardData___c_c *v14; // x0
  System_Func_object__int__o *_9__123_0; // x21
  Il2CppObject *v16; // x22
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x20
  System_Func_int__bool__o *v21; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *rangeSearches; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C54781 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_WarBoardData_SquareRangeSearch__int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C3E564(&System_Func_int__bool__TypeInfo);
    sub_1C3E564(&System_Func_WarBoardData_SquareRangeSearch__int__TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__GetInRangeSquareIndecies_b__123_0__);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass123_0__GetInRangeSquareIndecies_b__1__);
    sub_1C3E564(&WarBoardData___c__DisplayClass123_0_TypeInfo);
    sub_1C3E564(&WarBoardData___c_TypeInfo);
    byte_4C54781 = 1;
  }
  v9 = (WarBoardData___c__DisplayClass123_0_o *)sub_1C3E7B0(WarBoardData___c__DisplayClass123_0_TypeInfo);
  WarBoardData___c__DisplayClass123_0___ctor(v9, 0);
  if ( !v9 )
    sub_1C3E7C0(v10, v11);
  v9->fields.start = start;
  v9->fields.ignoreStart = ignoreStart;
  rangeSearches = 0;
  WarBoardData__SearchInRangeSquares(this, start, range, &rangeSearches, v12);
  v13 = rangeSearches;
  if ( !rangeSearches )
    return 0;
  v14 = WarBoardData___c_TypeInfo;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v14 = WarBoardData___c_TypeInfo;
  }
  _9__123_0 = (System_Func_object__int__o *)v14->static_fields->__9__123_0;
  if ( !_9__123_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = WarBoardData___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v14->static_fields->__9;
    _9__123_0 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_WarBoardData_SquareRangeSearch__int__TypeInfo);
    System_Func_object__int____ctor(_9__123_0, v16, Method_WarBoardData___c__GetInRangeSquareIndecies_b__123_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__123_0 = (struct System_Func_WarBoardData_SquareRangeSearch__int__o *)_9__123_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__123_0, (int32_t)_9__123_0, v18, v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v13,
                                                               (System_Func_TSource__TResult__o *)_9__123_0,
                                                               (const MethodInfo_312F93C *)Method_System_Linq_Enumerable_Select_WarBoardData_SquareRangeSearch__int___);
  v21 = (System_Func_int__bool__o *)sub_1C3E7B0(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v21,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass123_0__GetInRangeSquareIndecies_b__1__,
    0);
  v22 = System_Linq_Enumerable__Where_int_(
          v20,
          (System_Func_TSource__bool__o *)v21,
          (const MethodInfo_313FD5C *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v22,
           (const MethodInfo_3139050 *)Method_System_Linq_Enumerable_ToArray_int___);
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

  if ( (byte_4C54782 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_int__WarBoardSquareData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_WarBoardSquareData___);
    sub_1C3E564(&System_Func_int__WarBoardSquareData__TypeInfo);
    sub_1C3E564(&Method_WarBoardData__GetInRangeSquares_b__124_0__);
    byte_4C54782 = 1;
  }
  result = (WarBoardSquareData_array *)WarBoardData__GetInRangeSquareIndecies(this, start, range, ignoreStart, method);
  if ( result )
  {
    v10 = (System_Collections_Generic_IEnumerable_TSource__o *)result;
    v11 = (System_Func_T__TResult__o *)sub_1C3E7B0(System_Func_int__WarBoardSquareData__TypeInfo);
    System_Func_int__object____ctor(v11, (Il2CppObject *)this, Method_WarBoardData__GetInRangeSquares_b__124_0__, 0);
    v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                 v10,
                                                                 (System_Func_TSource__TResult__o *)v11,
                                                                 (const MethodInfo_312D55C *)Method_System_Linq_Enumerable_Select_int__WarBoardSquareData___);
    return (WarBoardSquareData_array *)System_Linq_Enumerable__ToArray_object_(
                                         v12,
                                         (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_WarBoardSquareData___);
  }
  return result;
}


WarBoardItemData_o *WarBoardData__GetItem(WarBoardData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  WarBoardData___c__DisplayClass135_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *items; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4C54789 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___);
    sub_1C3E564(&System_Func_WarBoardItemData__bool__TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass135_0__GetItem_b__0__);
    sub_1C3E564(&WarBoardData___c__DisplayClass135_0_TypeInfo);
    byte_4C54789 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass135_0_o *)sub_1C3E7B0(WarBoardData___c__DisplayClass135_0_TypeInfo);
  WarBoardData___c__DisplayClass135_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C3E7C0(v6, v7);
  v5->fields.squareIndex = squareIndex;
  items = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.items;
  v9 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardItemData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass135_0__GetItem_b__0__,
    0);
  return (WarBoardItemData_o *)System_Linq_Enumerable__FirstOrDefault_object__51525108(
                                 items,
                                 (System_Func_TSource__bool__o *)v9,
                                 (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___);
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
    sub_1C3E7C0(this, method);
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
  if ( (byte_4C54768 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__TryGetValue__);
    byte_4C54768 = 1;
  }
  value = 0;
  npcEntityDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.npcEntityDict;
  if ( !npcEntityDict )
    sub_1C3E7C0(0, *(_QWORD *)&forceId);
  System_Collections_Generic_Dictionary_uint__object___TryGetValue(
    npcEntityDict,
    (forceId << 24) | (v4 << 16),
    &value,
    (const MethodInfo_34AFB3C *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__TryGetValue__);
  return (WarBoardStageNpcEntity_o *)value;
}


int32_t WarBoardData__GetPartySkillId(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardStageEntity_o *stageEntity; // x8

  stageEntity = this->fields.stageEntity;
  if ( !stageEntity )
    sub_1C3E7C0(this, method);
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v16; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_4C5477C & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C3E564(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass118_0__GetPicesForRange_b__0__);
    sub_1C3E564(&WarBoardData___c__DisplayClass118_0_TypeInfo);
    byte_4C5477C = 1;
  }
  v9 = sub_1C3E7B0(WarBoardData___c__DisplayClass118_0_TypeInfo);
  WarBoardData___c__DisplayClass118_0___ctor((WarBoardData___c__DisplayClass118_0_o *)v9, 0);
  v11 = WarBoardData__GetInRangeSquareIndecies(this, start, range, ignoreStart, v10);
  if ( !v9 )
    sub_1C3E7C0(v11, v12);
  *(_QWORD *)(v9 + 16) = v11;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 16), (int32_t)v11, v13, v14);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v16 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass118_0__GetPicesForRange_b__0__,
    0);
  v17 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)v16,
          (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v17,
                                      (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v16; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_4C5477D & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C3E564(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass119_0__GetPicesForRangeIsAlive_b__0__);
    sub_1C3E564(&WarBoardData___c__DisplayClass119_0_TypeInfo);
    byte_4C5477D = 1;
  }
  v9 = sub_1C3E7B0(WarBoardData___c__DisplayClass119_0_TypeInfo);
  WarBoardData___c__DisplayClass119_0___ctor((WarBoardData___c__DisplayClass119_0_o *)v9, 0);
  v11 = WarBoardData__GetInRangeSquareIndecies(this, start, range, ignoreStart, v10);
  if ( !v9 )
    sub_1C3E7C0(v11, v12);
  *(_QWORD *)(v9 + 16) = v11;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 16), (int32_t)v11, v13, v14);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v16 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass119_0__GetPicesForRangeIsAlive_b__0__,
    0);
  v17 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)v16,
          (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v17,
                                      (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
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
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v15; // x20

  if ( (byte_4C5476E & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
    sub_1C3E564(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass100_0__GetPiece_b__0__);
    sub_1C3E564(&WarBoardData___c__DisplayClass100_0_TypeInfo);
    sub_1C3E564(&WarBoardPieceData_TypeInfo);
    byte_4C5476E = 1;
  }
  v11 = (WarBoardData___c__DisplayClass100_0_o *)sub_1C3E7B0(WarBoardData___c__DisplayClass100_0_TypeInfo);
  WarBoardData___c__DisplayClass100_0___ctor(v11, 0);
  if ( !v11 )
    sub_1C3E7C0(v12, v13);
  v11->fields.ignoreDead = ignoreDead;
  if ( !WarBoardPieceData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardPieceData_TypeInfo);
  v11->fields.uniqueId = WarBoardPieceData__GetUniqueIndex(forceId, groupId, index, 0);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v15 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v11,
    Method_WarBoardData___c__DisplayClass100_0__GetPiece_b__0__,
    0);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_object__51525108(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v15,
                                  (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


int32_t WarBoardData__GetPieceDispPriority(WarBoardData_o *this, WarBoardPieceData_o *piece, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x1
  System_Object_array *AlivePieces; // x19
  System_Predicate_object__o *v12; // x20

  if ( (byte_4C54790 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Array_FindIndex_WarBoardPieceData___);
    sub_1C3E564(&System_Predicate_WarBoardPieceData__TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass145_0__GetPieceDispPriority_b__0__);
    sub_1C3E564(&WarBoardData___c__DisplayClass145_0_TypeInfo);
    byte_4C54790 = 1;
  }
  v5 = sub_1C3E7B0(WarBoardData___c__DisplayClass145_0_TypeInfo);
  WarBoardData___c__DisplayClass145_0___ctor((WarBoardData___c__DisplayClass145_0_o *)v5, 0);
  if ( !v5 )
    sub_1C3E7C0(v6, v7);
  *(_QWORD *)(v5 + 16) = piece;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)piece, v8, v9);
  AlivePieces = (System_Object_array *)WarBoardData__GetAlivePieces(this, v10);
  v12 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_WarBoardPieceData__TypeInfo);
  System_Predicate_object____ctor(
    v12,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass145_0__GetPieceDispPriority_b__0__,
    0);
  return System_Array__FindIndex_object_(
           AlivePieces,
           (System_Predicate_T__o *)v12,
           (const MethodInfo_31FF900 *)Method_System_Array_FindIndex_WarBoardPieceData___);
}


int32_t WarBoardData__GetPieceMaxDispPriotiry(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceData_array *pieces; // x8

  pieces = this->fields.pieces;
  if ( !pieces )
    sub_1C3E7C0(this, method);
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
  __int64 v13; // x1
  UnityEngine_Component_o *gameObject; // x0
  bool activeInHierarchy; // w8

  if ( (byte_4C54771 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C54771 = 1;
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
      sub_1C3E7C0(gameObject, v13);
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
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v13; // x20
  Il2CppObject *v14; // x0

  if ( (byte_4C5476D & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
    sub_1C3E564(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass99_0__GetPiecePosition_b__0__);
    sub_1C3E564(&WarBoardData___c__DisplayClass99_0_TypeInfo);
    sub_1C3E564(&WarBoardPieceData_TypeInfo);
    byte_4C5476D = 1;
  }
  v9 = (WarBoardData___c__DisplayClass99_0_o *)sub_1C3E7B0(WarBoardData___c__DisplayClass99_0_TypeInfo);
  WarBoardData___c__DisplayClass99_0___ctor(v9, 0);
  if ( !WarBoardPieceData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardPieceData_TypeInfo);
  UniqueIndex = WarBoardPieceData__GetUniqueIndex(forceId, groupId, index, 0);
  if ( !v9 )
    sub_1C3E7C0(UniqueIndex, v11);
  v9->fields.uniqueId = UniqueIndex;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v13 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass99_0__GetPiecePosition_b__0__,
    0);
  v14 = System_Linq_Enumerable__FirstOrDefault_object__51525108(
          pieces,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
  if ( v14 )
    return (int32_t)v14[4].klass;
  else
    return -1;
}


WarBoardPieceData_o *WarBoardData__GetPiece_37929548(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass101_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4C5476F & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
    sub_1C3E564(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass101_0__GetPiece_b__0__);
    sub_1C3E564(&WarBoardData___c__DisplayClass101_0_TypeInfo);
    byte_4C5476F = 1;
  }
  v5 = (WarBoardData___c__DisplayClass101_0_o *)sub_1C3E7B0(WarBoardData___c__DisplayClass101_0_TypeInfo);
  WarBoardData___c__DisplayClass101_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C3E7C0(v6, v7);
  v5->fields.squareIndex = squareIndex;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v9 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass101_0__GetPiece_b__0__,
    0);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_object__51525108(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v9,
                                  (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


WarBoardPieceData_o *WarBoardData__GetPiece_37931252(
        WarBoardData_o *this,
        uint32_t uniqueIndex,
        bool ignoreDead,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass102_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v11; // x20

  if ( (byte_4C54770 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
    sub_1C3E564(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass102_0__GetPiece_b__0__);
    sub_1C3E564(&WarBoardData___c__DisplayClass102_0_TypeInfo);
    byte_4C54770 = 1;
  }
  v7 = (WarBoardData___c__DisplayClass102_0_o *)sub_1C3E7B0(WarBoardData___c__DisplayClass102_0_TypeInfo);
  WarBoardData___c__DisplayClass102_0___ctor(v7, 0);
  if ( !v7 )
    sub_1C3E7C0(v8, v9);
  v7->fields.uniqueIndex = uniqueIndex;
  v7->fields.ignoreDead = ignoreDead;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v11 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_WarBoardData___c__DisplayClass102_0__GetPiece_b__0__,
    0);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_object__51525108(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v11,
                                  (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


WarBoardPieceData_array *WarBoardData__GetPieces(WarBoardData_o *this, int32_t forceId, const MethodInfo *method)
{
  WarBoardData___c__DisplayClass116_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v9; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_4C5477A & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C3E564(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass116_0__GetPieces_b__0__);
    sub_1C3E564(&WarBoardData___c__DisplayClass116_0_TypeInfo);
    byte_4C5477A = 1;
  }
  v5 = (WarBoardData___c__DisplayClass116_0_o *)sub_1C3E7B0(WarBoardData___c__DisplayClass116_0_TypeInfo);
  WarBoardData___c__DisplayClass116_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C3E7C0(v6, v7);
  v5->fields.forceIdOnly = forceId << 24;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v9 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass116_0__GetPieces_b__0__,
    0);
  v10 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v10,
                                      (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


WarBoardPieceData_array *WarBoardData__GetPieces_37986760(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  unsigned __int8 v4; // w20
  WarBoardData___c__DisplayClass117_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v11; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0

  v4 = groupId;
  if ( (byte_4C5477B & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C3E564(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass117_0__GetPieces_b__0__);
    sub_1C3E564(&WarBoardData___c__DisplayClass117_0_TypeInfo);
    byte_4C5477B = 1;
  }
  v7 = (WarBoardData___c__DisplayClass117_0_o *)sub_1C3E7B0(WarBoardData___c__DisplayClass117_0_TypeInfo);
  WarBoardData___c__DisplayClass117_0___ctor(v7, 0);
  if ( !v7 )
    sub_1C3E7C0(v8, v9);
  v7->fields.forceAndGroup = (forceId << 24) | (v4 << 16);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v11 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_WarBoardData___c__DisplayClass117_0__GetPieces_b__0__,
    0);
  v12 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v12,
                                      (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


System_String_o *WarBoardData__GetPlayBgmName(WarBoardData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C54792 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_1C3E564(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C54792 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_BgmMaster___);
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity || !Instance )
    goto LABEL_11;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               stageEntity->fields.playBgmId,
                               (const MethodInfo_33B2FA4 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return (System_String_o *)entity[1].monitor;
LABEL_11:
    sub_1C3E7C0(Instance, v4);
  }
  return 0;
}


System_Int32_array *WarBoardData__GetPlayReinforcements(WarBoardData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *playedStageReinforcementsList; // x0

  if ( (byte_4C547AB & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4C547AB = 1;
  }
  playedStageReinforcementsList = this->fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList )
    sub_1C3E7C0(0, method);
  return System_Collections_Generic_List_int___ToArray(
           playedStageReinforcementsList,
           (const MethodInfo_3799EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


WarBoardEventData_o *WarBoardData__GetPlayedEventData(WarBoardData_o *this, int32_t eventId, const MethodInfo *method)
{
  WarBoardData___c__DisplayClass164_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *listEvent; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4C5479B & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardEventData__Find__);
    sub_1C3E564(&System_Predicate_WarBoardEventData__TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass164_0__GetPlayedEventData_b__0__);
    sub_1C3E564(&WarBoardData___c__DisplayClass164_0_TypeInfo);
    byte_4C5479B = 1;
  }
  v5 = (WarBoardData___c__DisplayClass164_0_o *)sub_1C3E7B0(WarBoardData___c__DisplayClass164_0_TypeInfo);
  WarBoardData___c__DisplayClass164_0___ctor(v5, 0);
  if ( !v5
    || (v5->fields.eventId = eventId,
        listEvent = (System_Collections_Generic_List_object__o *)this->fields.listEvent,
        v9 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_WarBoardEventData__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_WarBoardData___c__DisplayClass164_0__GetPlayedEventData_b__0__,
          0),
        !listEvent) )
  {
    sub_1C3E7C0(v6, v7);
  }
  return (WarBoardEventData_o *)System_Collections_Generic_List_object___Find(
                                  listEvent,
                                  (System_Predicate_T__o *)v9,
                                  (const MethodInfo_37B5AC8 *)Method_System_Collections_Generic_List_WarBoardEventData__Find__);
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

  if ( (byte_4C54772 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
    sub_1C3E564(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__GetPlayerMasterPiece_b__104_0__);
    sub_1C3E564(&WarBoardData___c_TypeInfo);
    byte_4C54772 = 1;
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
    _9__104_0 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__104_0, v6, Method_WarBoardData___c__GetPlayerMasterPiece_b__104_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__104_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__104_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__104_0, (int32_t)_9__104_0, v8, v9);
  }
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_object__51525108(
                                  pieces,
                                  (System_Func_TSource__bool__o *)_9__104_0,
                                  (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
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

  if ( (byte_4C5477F & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C3E564(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__GetPlayerPieces_b__121_0__);
    sub_1C3E564(&WarBoardData___c_TypeInfo);
    byte_4C5477F = 1;
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
    _9__121_0 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__121_0, v6, Method_WarBoardData___c__GetPlayerPieces_b__121_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__121_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__121_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__121_0, (int32_t)_9__121_0, v8, v9);
  }
  v10 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__121_0,
          (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v10,
                                      (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


System_Int32_array *WarBoardData__GetPrevCondIds(
        WarBoardData_o *this,
        System_Int32_array *commonReleaseIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v4; // x20
  System_Collections_Generic_List_int__o *Master_object; // x0
  __int64 v6; // x1
  il2cpp_array_size_t max_length; // x8
  WarBoardCommonReleaseMaster_o *v8; // x21
  unsigned __int64 v9; // x23
  int size; // w8
  System_Collections_Generic_List_int__o *v11; // x22
  unsigned int v12; // w25
  __int64 v13; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v15; // x9
  __int64 v16; // x10
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_4C547A6 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C547A6 = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Collections_Generic_List_int__o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  if ( !commonReleaseIds )
    goto LABEL_25;
  max_length = commonReleaseIds->max_length;
  if ( (int)max_length >= 1 )
  {
    v8 = (WarBoardCommonReleaseMaster_o *)Master_object;
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)max_length )
        goto LABEL_26;
      if ( !v8 )
        goto LABEL_25;
      Master_object = (System_Collections_Generic_List_int__o *)WarBoardCommonReleaseMaster__GetList(
                                                                  v8,
                                                                  commonReleaseIds->m_Items[v9],
                                                                  0);
      if ( !Master_object )
        goto LABEL_25;
      size = Master_object->fields._size;
      v11 = Master_object;
      if ( size >= 1 )
        break;
LABEL_22:
      LODWORD(max_length) = commonReleaseIds->max_length;
      if ( (__int64)++v9 >= (int)max_length )
        goto LABEL_23;
    }
    v12 = 0;
    while ( v12 < size )
    {
      v13 = *((_QWORD *)&v11->fields._syncRoot + (int)v12);
      if ( !v13 )
        goto LABEL_25;
      if ( (unsigned int)(*(_DWORD *)(v13 + 28) - 7) <= 1 )
      {
        if ( !v4 )
          goto LABEL_25;
        v6 = *(unsigned int *)(v13 + 40);
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
            v6,
            *(const MethodInfo_379843C **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v4->fields._size = v16 + 1;
          items->m_Items[v16] = v6;
        }
      }
      size = v11->fields._size;
      if ( (int)++v12 >= size )
        goto LABEL_22;
    }
LABEL_26:
    sub_1C3E7C8(Master_object, v6);
  }
LABEL_23:
  v17 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v4,
          (const MethodInfo_311CD38 *)Method_System_Linq_Enumerable_Distinct_int___);
  Master_object = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                              v17,
                                                              (const MethodInfo_313DC18 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !Master_object )
LABEL_25:
    sub_1C3E7C0(Master_object, v6);
  return System_Collections_Generic_List_int___ToArray(
           Master_object,
           (const MethodInfo_3799EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int max_length; // w8
  WarBoardPieceData_array *v14; // x22
  unsigned int v15; // w23
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4C54780 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    byte_4C54780 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  AlivePieces = WarBoardData__GetAlivePieces(this, v8);
  if ( !AlivePieces )
    goto LABEL_18;
  max_length = AlivePieces->max_length;
  v14 = AlivePieces;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
        sub_1C3E7C8(AlivePieces, v10);
      v10 = v14->m_Items[v15];
      if ( !v10 )
        break;
      if ( v10->fields._StageReinfoId_k__BackingField == stageReinfoId
        && v10->fields._ReinfoIndex_k__BackingField == reinfoIndex )
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
            (Il2CppObject *)v10,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v10;
          sub_1C3E508((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v10, v11, v12);
        }
      }
      max_length = v14->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_16;
    }
LABEL_18:
    sub_1C3E7C0(AlivePieces, v10);
  }
LABEL_16:
  if ( !v7 )
    goto LABEL_18;
  return (WarBoardPieceData_array *)System_Collections_Generic_List_object___ToArray(
                                      v7,
                                      (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
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
  __int64 v10; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  WarBoardData___c__DisplayClass189_0_Fields *p_fields; // x24
  System_Collections_Generic_List_int__o *v13; // x23
  const MethodInfo *v14; // x2
  System_Int32_array *DeploySquareIds; // x24
  __int64 v16; // x25
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x19
  const MethodInfo *v20; // x3
  __int64 v21; // x8
  int32_t v22; // w2
  struct System_Int32_array *reinforcementsIds; // x8
  struct System_Int32_array *limitNums; // x8
  WarBoardStageReinforcementsEntity_o *v25; // x8
  struct System_Int32_array *v26; // x9
  __int64 v27; // x10
  _BOOL4 v28; // w20
  _BOOL4 IsOnce; // w27
  WarBoardData_o *v30; // x26
  const MethodInfo *v31; // x1
  __int64 v32; // x29
  __int64 v33; // x22
  System_Func_int__bool__o *v34; // x21
  System_Int32_array *v35; // x28
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  _BOOL4 v38; // w28
  System_Collections_Generic_List_T__o *v39; // x19
  System_Func_object__bool__o *v40; // x21
  const MethodInfo *v41; // x3
  int32_t v42; // w2
  unsigned int max_length; // w8
  __int64 v44; // x8
  struct System_Int32_array *items; // x9
  _QWORD *v46; // x10
  __int64 size; // x11
  __int64 v48; // x9
  struct System_Int32_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  _QWORD *monitor; // x9
  __int64 v53; // x8
  __int64 v54; // x8
  _QWORD *v55; // x9
  __int64 forceId; // x10
  __int64 v57; // x20
  System_Int32_array *v58; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  System_Int32_array *v61; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  __int64 v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  __int64 v69; // x8
  WarBoardData___c__DisplayClass189_0_Fields *v70; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_int__o *v71; // [xsp+10h] [xbp-70h]

  if ( (byte_4C547AE & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_Any_int____78187928);
    sub_1C3E564(&Method_BasicHelper_Any_ReinforcementsData___);
    sub_1C3E564(&System_Func_int__bool__TypeInfo);
    sub_1C3E564(&System_Func_ReinforcementsData__bool__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ReinforcementsData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C3E564(&ReinforcementsData_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass189_0__GetReinforcements_b__0__);
    sub_1C3E564(&WarBoardData___c__DisplayClass189_0_TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__1__);
    sub_1C3E564(&WarBoardData___c__DisplayClass189_1_TypeInfo);
    byte_4C547AE = 1;
  }
  v8 = (WarBoardData___c__DisplayClass189_0_o *)sub_1C3E7B0(WarBoardData___c__DisplayClass189_0_TypeInfo);
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
  v13 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
  v71 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v71,
    (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
  v70 = &v8->fields;
  if ( !p_fields->stageEntity )
    goto LABEL_65;
  DeploySquareIds = WarBoardData__GetDeploySquareIds(this, p_fields->stageEntity->fields.squareIds, v14);
  v16 = sub_1C3E7B0(WarBoardData___c__DisplayClass189_1_TypeInfo);
  WarBoardData___c__DisplayClass189_1___ctor((WarBoardData___c__DisplayClass189_1_o *)v16, 0);
  if ( !v16 )
    goto LABEL_65;
  *(_QWORD *)(v16 + 24) = v8;
  v19 = v16 + 24;
  sub_1C3E508((CGThumbnailListItem_o *)(v16 + 24), (int32_t)v8, v17, v18);
  v21 = *(_QWORD *)(v16 + 24);
  *(_DWORD *)(v16 + 16) = 0;
  if ( !v21 )
    goto LABEL_65;
  v22 = 0;
  while ( 1 )
  {
    ReinfocementsPieces = *(WarBoardStageReinforcementsEntity_o **)(v21 + 16);
    if ( !ReinfocementsPieces )
      goto LABEL_65;
    reinforcementsIds = ReinfocementsPieces->fields.reinforcementsIds;
    if ( !reinforcementsIds )
      goto LABEL_65;
    if ( v22 >= SLODWORD(reinforcementsIds->max_length) )
      break;
    limitNums = ReinfocementsPieces->fields.limitNums;
    if ( !limitNums )
      goto LABEL_65;
    if ( (unsigned int)v22 >= LODWORD(limitNums->max_length) )
      goto LABEL_66;
    if ( limitNums->m_Items[v22] < 1 )
    {
      v28 = 0;
    }
    else
    {
      ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)WarBoardData__GetReinfocementsPieces(
                                                                     this,
                                                                     ReinfocementsPieces->fields.id,
                                                                     v22,
                                                                     v20);
      if ( !ReinfocementsPieces )
        goto LABEL_65;
      if ( !*(_QWORD *)v19 )
        goto LABEL_65;
      v25 = ReinfocementsPieces;
      ReinfocementsPieces = *(WarBoardStageReinforcementsEntity_o **)(*(_QWORD *)v19 + 16LL);
      if ( !ReinfocementsPieces )
        goto LABEL_65;
      v26 = ReinfocementsPieces->fields.limitNums;
      if ( !v26 )
        goto LABEL_65;
      v27 = *(int *)(v16 + 16);
      if ( (unsigned int)v27 >= LODWORD(v26->max_length) )
        goto LABEL_66;
      v28 = v26->m_Items[v27] <= v25->fields.forceId;
    }
    IsOnce = WarBoardStageReinforcementsEntity__IsOnce(ReinfocementsPieces, 0);
    v30 = this;
    ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)WarBoardData__GetPlayReinforcements(this, v31);
    v32 = *(_QWORD *)v19;
    if ( !*(_QWORD *)v19 )
      goto LABEL_65;
    v33 = v19;
    v34 = *(System_Func_int__bool__o **)(v32 + 24);
    v35 = (System_Int32_array *)ReinfocementsPieces;
    if ( !v34 )
    {
      v34 = (System_Func_int__bool__o *)sub_1C3E7B0(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v34,
        (Il2CppObject *)v32,
        Method_WarBoardData___c__DisplayClass189_0__GetReinforcements_b__0__,
        0);
      *(_QWORD *)(v32 + 24) = v34;
      sub_1C3E508((CGThumbnailListItem_o *)(v32 + 24), (int32_t)v34, v36, v37);
    }
    v38 = BasicHelper__Any_int__51260304(
            v35,
            (System_Func_T__bool__o *)v34,
            (const MethodInfo_30E2B90 *)Method_BasicHelper_Any_int____78187928);
    v39 = (System_Collections_Generic_List_T__o *)*reinfoDatas;
    v40 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_ReinforcementsData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v40,
      (Il2CppObject *)v16,
      Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__1__,
      0);
    ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)BasicHelper__Any_object_(
                                                                   v39,
                                                                   (System_Func_T__bool__o *)v40,
                                                                   (const MethodInfo_30E2E10 *)Method_BasicHelper_Any_ReinforcementsData___);
    if ( !DeploySquareIds )
      goto LABEL_65;
    v42 = *(_DWORD *)(v16 + 16);
    max_length = DeploySquareIds->max_length;
    if ( v42 >= max_length )
      goto LABEL_66;
    if ( (unsigned __int8)ReinfocementsPieces & 1 | (IsOnce && v38 || v28 || DeploySquareIds->m_Items[v42] < 0) )
    {
      if ( !*(_QWORD *)v33 )
        goto LABEL_65;
      v44 = *(_QWORD *)(*(_QWORD *)v33 + 16LL);
      if ( !v44 )
        goto LABEL_65;
      v19 = v33;
      this = v30;
      WarBoardData__SaveHoldReinforcements(v30, *(_DWORD *)(v44 + 20), v42, v41);
    }
    else
    {
      if ( !v13 )
        goto LABEL_65;
      items = v13->fields._items;
      v46 = Method_System_Collections_Generic_List_int__Add__;
      ++v13->fields._version;
      if ( !items )
        goto LABEL_65;
      size = v13->fields._size;
      this = v30;
      v19 = v33;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v13,
          v42,
          *(const MethodInfo_379843C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
        max_length = DeploySquareIds->max_length;
      }
      else
      {
        v13->fields._size = size + 1;
        items->m_Items[size] = v42;
      }
      v48 = *(int *)(v16 + 16);
      ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)v71;
      if ( (unsigned int)v48 >= max_length )
LABEL_66:
        sub_1C3E7C8(ReinfocementsPieces, v10);
      if ( !v71 )
        goto LABEL_65;
      v10 = (unsigned int)DeploySquareIds->m_Items[v48];
      v49 = v71->fields._items;
      v50 = Method_System_Collections_Generic_List_int__Add__;
      ++v71->fields._version;
      if ( !v49 )
        goto LABEL_65;
      v51 = v71->fields._size;
      if ( (unsigned int)v51 >= LODWORD(v49->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v71,
          v10,
          *(const MethodInfo_379843C **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
      }
      else
      {
        v71->fields._size = v51 + 1;
        v49->m_Items[v51] = v10;
      }
      ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !ReinfocementsPieces )
        goto LABEL_65;
      monitor = ReinfocementsPieces[6].monitor;
      if ( !monitor )
        goto LABEL_65;
      v53 = *(int *)(v16 + 16);
      if ( (unsigned int)v53 >= LODWORD(DeploySquareIds->max_length) )
        goto LABEL_66;
      ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)monitor[29];
      if ( !ReinfocementsPieces )
        goto LABEL_65;
      v10 = (unsigned int)DeploySquareIds->m_Items[v53];
      v54 = *(_QWORD *)&ReinfocementsPieces->fields.warBoardStageId;
      v55 = Method_System_Collections_Generic_List_int__Add__;
      ++ReinfocementsPieces->fields.groupId;
      if ( !v54 )
        goto LABEL_65;
      forceId = ReinfocementsPieces->fields.forceId;
      if ( (unsigned int)forceId >= *(_DWORD *)(v54 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)ReinfocementsPieces,
          v10,
          *(const MethodInfo_379843C **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
      }
      else
      {
        ReinfocementsPieces->fields.forceId = forceId + 1;
        *(_DWORD *)(v54 + 4 * forceId + 32) = v10;
      }
    }
    v21 = *(_QWORD *)(v16 + 24);
    v22 = *(_DWORD *)(v16 + 16) + 1;
    *(_DWORD *)(v16 + 16) = v22;
    if ( !v21 )
      goto LABEL_65;
  }
  if ( !v13 )
    goto LABEL_65;
  if ( v13->fields._size < 1 )
    return;
  v57 = sub_1C3E7B0(ReinforcementsData_TypeInfo);
  ReinforcementsData___ctor((ReinforcementsData_o *)v57, 0);
  if ( !v70->stageEntity )
    goto LABEL_65;
  if ( !v57 )
    goto LABEL_65;
  *(_DWORD *)(v57 + 16) = v70->stageEntity->fields.id;
  v58 = System_Collections_Generic_List_int___ToArray(
          v13,
          (const MethodInfo_3799EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)(v57 + 24) = v58;
  sub_1C3E508((CGThumbnailListItem_o *)(v57 + 24), (int32_t)v58, v59, v60);
  ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)v71;
  if ( !v71
    || (v61 = System_Collections_Generic_List_int___ToArray(
                v71,
                (const MethodInfo_3799EF4 *)Method_System_Collections_Generic_List_int__ToArray__),
        *(_QWORD *)(v57 + 32) = v61,
        sub_1C3E508((CGThumbnailListItem_o *)(v57 + 32), (int32_t)v61, v62, v63),
        (ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)*reinfoDatas) == 0)
    || (v66 = *(_QWORD *)&ReinfocementsPieces->fields.warBoardStageId,
        v67 = Method_System_Collections_Generic_List_ReinforcementsData__Add__,
        ++ReinfocementsPieces->fields.groupId,
        !v66) )
  {
LABEL_65:
    sub_1C3E7C0(ReinfocementsPieces, v10);
  }
  v68 = ReinfocementsPieces->fields.forceId;
  if ( (unsigned int)v68 >= *(_DWORD *)(v66 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)ReinfocementsPieces,
      (Il2CppObject *)v57,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
  }
  else
  {
    v69 = v66 + 8 * v68;
    ReinfocementsPieces->fields.forceId = v68 + 1;
    *(_QWORD *)(v69 + 32) = v57;
    sub_1C3E508((CGThumbnailListItem_o *)(v69 + 32), v57, v64, v65);
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
    sub_1C3E7C0(this, method);
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
    sub_1C3E7C0(this, method);
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
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v9; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_4C54774 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C3E564(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass106_0__GetServantPieces_b__0__);
    sub_1C3E564(&WarBoardData___c__DisplayClass106_0_TypeInfo);
    byte_4C54774 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass106_0_o *)sub_1C3E7B0(WarBoardData___c__DisplayClass106_0_TypeInfo);
  WarBoardData___c__DisplayClass106_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C3E7C0(v6, v7);
  v5->fields.isPlayerGroup = isPlayerGroup;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v9 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass106_0__GetServantPieces_b__0__,
    0);
  v10 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v10,
                                      (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
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
  System_Collections_Generic_IEnumerable_TSource__o *squares; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4C54785 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
    sub_1C3E564(&System_Func_WarBoardSquareData__bool__TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass128_0__GetSquare_b__0__);
    sub_1C3E564(&WarBoardData___c__DisplayClass128_0_TypeInfo);
    byte_4C54785 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass128_0_o *)sub_1C3E7B0(WarBoardData___c__DisplayClass128_0_TypeInfo);
  WarBoardData___c__DisplayClass128_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C3E7C0(v6, v7);
  v5->fields.squareIndex = squareIndex;
  squares = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.squares;
  v9 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardSquareData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass128_0__GetSquare_b__0__,
    0);
  return (WarBoardSquareData_o *)System_Linq_Enumerable__FirstOrDefault_object__51525108(
                                   squares,
                                   (System_Func_TSource__bool__o *)v9,
                                   (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
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

  if ( (byte_4C54795 & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_Find_WarBoardUserServantData___);
    sub_1C3E564(&System_Func_WarBoardUserServantData__bool__TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass153_0__GetStageBossData_b__0__);
    sub_1C3E564(&WarBoardData___c__DisplayClass153_0_TypeInfo);
    byte_4C54795 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass153_0_o *)sub_1C3E7B0(WarBoardData___c__DisplayClass153_0_TypeInfo);
  WarBoardData___c__DisplayClass153_0___ctor(v5, 0);
  if ( !v5 || (v5->fields.stageBossIdx = stageBossIdx, (serverData = this->fields.serverData) == 0) )
    sub_1C3E7C0(v6, v7);
  svtInfo = (System_Object_array *)serverData->fields.svtInfo;
  v10 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardUserServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass153_0__GetStageBossData_b__0__,
    0);
  return (WarBoardUserServantData_o *)BasicHelper__Find_object_(
                                        svtInfo,
                                        (System_Func_T__bool__o *)v10,
                                        (const MethodInfo_30E39DC *)Method_BasicHelper_Find_WarBoardUserServantData___);
}


WarBoardTreasureData_o *WarBoardData__GetTreasure(WarBoardData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  WarBoardData___c__DisplayClass137_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *treasures; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4C5478A & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___);
    sub_1C3E564(&System_Func_WarBoardTreasureData__bool__TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass137_0__GetTreasure_b__0__);
    sub_1C3E564(&WarBoardData___c__DisplayClass137_0_TypeInfo);
    byte_4C5478A = 1;
  }
  v5 = (WarBoardData___c__DisplayClass137_0_o *)sub_1C3E7B0(WarBoardData___c__DisplayClass137_0_TypeInfo);
  WarBoardData___c__DisplayClass137_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C3E7C0(v6, v7);
  v5->fields.squareIndex = squareIndex;
  treasures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.treasures;
  v9 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardTreasureData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass137_0__GetTreasure_b__0__,
    0);
  return (WarBoardTreasureData_o *)System_Linq_Enumerable__FirstOrDefault_object__51525108(
                                     treasures,
                                     (System_Func_TSource__bool__o *)v9,
                                     (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___);
}


System_Int32_array *WarBoardData__GetTreasureIdList(WarBoardData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  __int64 v4; // x0
  __int64 treasureId; // x1
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8
  struct WarBoardTreasureData_SaveData_array *treasureSaves; // x20
  int max_length; // w8
  unsigned int v9; // w21
  WarBoardTreasureData_SaveData_o *v10; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10

  if ( (byte_4C54779 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C54779 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
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
        sub_1C3E7C8(v4, treasureId);
      v10 = treasureSaves->m_Items[v9];
      if ( !v10 )
        break;
      if ( v10->fields.isUse )
      {
        if ( !v3 )
          break;
        treasureId = (unsigned int)v10->fields.treasureId;
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
            *(const MethodInfo_379843C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
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
    sub_1C3E7C0(v4, treasureId);
  }
LABEL_16:
  if ( !v3 )
    goto LABEL_18;
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_3799EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  System_Collections_Generic_List_object__o *listUiData; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4C547B2 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardUiData__Find__);
    sub_1C3E564(&System_Predicate_WarBoardUiData__TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass193_0__GetUiData_b__0__);
    sub_1C3E564(&WarBoardData___c__DisplayClass193_0_TypeInfo);
    byte_4C547B2 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass193_0_o *)sub_1C3E7B0(WarBoardData___c__DisplayClass193_0_TypeInfo);
  WarBoardData___c__DisplayClass193_0___ctor(v5, 0);
  if ( !v5
    || (v5->fields.squareIndex = squareIndex,
        listUiData = (System_Collections_Generic_List_object__o *)this->fields.listUiData,
        v9 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_WarBoardUiData__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_WarBoardData___c__DisplayClass193_0__GetUiData_b__0__,
          0),
        !listUiData) )
  {
    sub_1C3E7C0(v6, v7);
  }
  return (WarBoardUiData_o *)System_Collections_Generic_List_object___Find(
                               listUiData,
                               (System_Predicate_T__o *)v9,
                               (const MethodInfo_37B5AC8 *)Method_System_Collections_Generic_List_WarBoardUiData__Find__);
}


WarBoardUiData_o *WarBoardData__GetUiData_38019464(
        WarBoardData_o *this,
        System_Int32_array *pieceIndex,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_object__o *listUiData; // x19
  System_Predicate_object__o *v11; // x20

  if ( (byte_4C547B3 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardUiData__Find__);
    sub_1C3E564(&System_Predicate_WarBoardUiData__TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass194_0__GetUiData_b__0__);
    sub_1C3E564(&WarBoardData___c__DisplayClass194_0_TypeInfo);
    byte_4C547B3 = 1;
  }
  v5 = sub_1C3E7B0(WarBoardData___c__DisplayClass194_0_TypeInfo);
  WarBoardData___c__DisplayClass194_0___ctor((WarBoardData___c__DisplayClass194_0_o *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = pieceIndex,
        sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)pieceIndex, v8, v9),
        listUiData = (System_Collections_Generic_List_object__o *)this->fields.listUiData,
        v11 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_WarBoardUiData__TypeInfo),
        System_Predicate_object____ctor(
          v11,
          (Il2CppObject *)v5,
          Method_WarBoardData___c__DisplayClass194_0__GetUiData_b__0__,
          0),
        !listUiData) )
  {
    sub_1C3E7C0(v6, v7);
  }
  return (WarBoardUiData_o *)System_Collections_Generic_List_object___Find(
                               listUiData,
                               (System_Predicate_T__o *)v11,
                               (const MethodInfo_37B5AC8 *)Method_System_Collections_Generic_List_WarBoardUiData__Find__);
}


WarBoardTreasureData_o *WarBoardData__GetUnusedTreasure(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass138_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *treasures; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4C5478B & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___);
    sub_1C3E564(&System_Func_WarBoardTreasureData__bool__TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass138_0__GetUnusedTreasure_b__0__);
    sub_1C3E564(&WarBoardData___c__DisplayClass138_0_TypeInfo);
    byte_4C5478B = 1;
  }
  v5 = (WarBoardData___c__DisplayClass138_0_o *)sub_1C3E7B0(WarBoardData___c__DisplayClass138_0_TypeInfo);
  WarBoardData___c__DisplayClass138_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C3E7C0(v6, v7);
  v5->fields.squareIndex = squareIndex;
  treasures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.treasures;
  v9 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardTreasureData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass138_0__GetUnusedTreasure_b__0__,
    0);
  return (WarBoardTreasureData_o *)System_Linq_Enumerable__FirstOrDefault_object__51525108(
                                     treasures,
                                     (System_Func_TSource__bool__o *)v9,
                                     (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___);
}


System_Int32_array *WarBoardData__GetUseCommonReleaseIds(WarBoardData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  void *Master_object; // x0
  __int64 v5; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  WarBoardEventScriptMaster_o *v7; // x20
  int32_t stageId; // w21
  int v9; // w8
  void *v10; // x21
  unsigned int v11; // w23
  __int64 v12; // x22
  __int64 v13; // x25
  __int64 v14; // x8
  unsigned __int64 v15; // x26
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

  if ( (byte_4C547A5 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_WarBoardEventMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_WarBoardEventScriptMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C547A5 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_WarBoardEventScriptMaster___);
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_46;
  v7 = (WarBoardEventScriptMaster_o *)Master_object;
  stageId = serverData->fields.stageId;
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_WarBoardEventMaster___);
  if ( !Master_object )
    goto LABEL_46;
  Master_object = WarBoardEventMaster__GetListByStageId((WarBoardEventMaster_o *)Master_object, stageId, 0);
  if ( !Master_object )
    goto LABEL_46;
  v9 = *((_DWORD *)Master_object + 6);
  v10 = Master_object;
  if ( v9 >= 1 )
  {
    v11 = 0;
    do
    {
      if ( v11 >= v9 )
        goto LABEL_47;
      v12 = *((_QWORD *)v10 + (int)v11 + 4);
      if ( !v12 )
        goto LABEL_46;
      v13 = *(_QWORD *)(v12 + 56);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 24);
        if ( v14 )
        {
          if ( (int)v14 >= 1 )
          {
            v15 = 0;
            while ( v15 < (unsigned int)v14 )
            {
              v5 = *(unsigned int *)(v13 + 32 + 4 * v15);
              if ( (int)v5 >= 1 )
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
                    v5,
                    *(const MethodInfo_379843C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
                  LODWORD(v14) = *(_DWORD *)(v13 + 24);
                }
                else
                {
                  v3->fields._size = size + 1;
                  items->m_Items[size] = v5;
                }
              }
              if ( (__int64)++v15 >= (int)v14 )
                goto LABEL_24;
            }
LABEL_47:
            sub_1C3E7C8(Master_object, v5);
          }
LABEL_24:
          v19 = *(_QWORD *)(v12 + 48);
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
              if ( !v7 )
                goto LABEL_46;
              Master_object = WarBoardEventScriptMaster__GetList(v7, *(_DWORD *)(v19 + 4 * v21 + 32), 0);
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
                  v5 = (unsigned int)Master_object;
                  if ( (unsigned int)v27 >= LODWORD(v25->max_length) )
                  {
                    System_Collections_Generic_List_int___AddWithResize(
                      v3,
                      (int32_t)Master_object,
                      *(const MethodInfo_379843C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
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
      v9 = *((_DWORD *)v10 + 6);
    }
    while ( (int)++v11 < v9 );
  }
  v28 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v3,
          (const MethodInfo_311CD38 *)Method_System_Linq_Enumerable_Distinct_int___);
  Master_object = System_Linq_Enumerable__ToList_int_(
                    v28,
                    (const MethodInfo_313DC18 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !Master_object )
LABEL_46:
    sub_1C3E7C0(Master_object, v5);
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)Master_object,
           (const MethodInfo_3799EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  System_Collections_Generic_IEnumerable_TSource__o *walls; // x19
  System_Func_object__bool__o *v11; // x20

  if ( (byte_4C5478C & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardWallData___);
    sub_1C3E564(&System_Func_WarBoardWallData__bool__TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass140_0__GetWall_b__0__);
    sub_1C3E564(&WarBoardData___c__DisplayClass140_0_TypeInfo);
    byte_4C5478C = 1;
  }
  v7 = (WarBoardData___c__DisplayClass140_0_o *)sub_1C3E7B0(WarBoardData___c__DisplayClass140_0_TypeInfo);
  WarBoardData___c__DisplayClass140_0___ctor(v7, 0);
  if ( !v7 )
    sub_1C3E7C0(v8, v9);
  v7->fields.squareIndex = squareIndex;
  v7->fields.ignoreDestroy = ignoreDestroy;
  walls = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.walls;
  v11 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardWallData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_WarBoardData___c__DisplayClass140_0__GetWall_b__0__,
    0);
  return (WarBoardWallData_o *)System_Linq_Enumerable__FirstOrDefault_object__51525108(
                                 walls,
                                 (System_Func_TSource__bool__o *)v11,
                                 (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardWallData___);
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

  if ( (byte_4C5479D & 1) == 0 )
  {
    sub_1C3E564(&WarBoardManager_TypeInfo);
    byte_4C5479D = 1;
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
  __int64 v6; // x1
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v8; // x20
  unsigned __int64 v9; // x24
  int32_t v10; // w23
  System_Collections_Generic_List_object__o *listPrevCond; // x21
  WarBoardPrevCondData_o *v12; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4C547A7 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__);
    sub_1C3E564(&WarBoardPrevCondData_TypeInfo);
    byte_4C547A7 = 1;
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
        sub_1C3E7C8(PrevCondIds, v6);
      v10 = v8->m_Items[v9];
      listPrevCond = (System_Collections_Generic_List_object__o *)this->fields.listPrevCond;
      v12 = (WarBoardPrevCondData_o *)sub_1C3E7B0(WarBoardPrevCondData_TypeInfo);
      WarBoardPrevCondData___ctor_38205396(v12, v10, -1, 0);
      if ( !listPrevCond )
        break;
      items = listPrevCond->fields._items;
      v16 = Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__;
      ++listPrevCond->fields._version;
      if ( !items )
        break;
      size = listPrevCond->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          listPrevCond,
          (Il2CppObject *)v12,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v18 = &items->obj.klass + size;
        listPrevCond->fields._size = size + 1;
        v18[4] = (Il2CppClass *)v12;
        sub_1C3E508((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v12, v13, v14);
      }
      LODWORD(max_length) = v8->max_length;
      if ( (__int64)++v9 >= (int)max_length )
        return;
    }
LABEL_14:
    sub_1C3E7C0(PrevCondIds, v6);
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
  Il2CppObject *v17; // x20
  Il2CppObject *valuea; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C547A0 & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_Find_WarBoardBossBattleData___);
    sub_1C3E564(&System_Convert_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C3E564(&System_Func_WarBoardBossBattleData__bool__TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass172_0__IsBossInfo_b__0__);
    sub_1C3E564(&WarBoardData___c__DisplayClass172_0_TypeInfo);
    byte_4C547A0 = 1;
  }
  valuea = 0;
  v9 = (WarBoardData___c__DisplayClass172_0_o *)sub_1C3E7B0(WarBoardData___c__DisplayClass172_0_TypeInfo);
  WarBoardData___c__DisplayClass172_0___ctor(v9, 0);
  if ( !v9 )
    goto LABEL_17;
  v9->fields.bossId = bossId;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_17;
  bossBattleInfo = (System_Object_array *)serverData->fields.bossBattleInfo;
  v14 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardBossBattleData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass172_0__IsBossInfo_b__0__,
    0);
  object = BasicHelper__Find_object_(
             bossBattleInfo,
             (System_Func_T__bool__o *)v14,
             (const MethodInfo_30E39DC *)Method_BasicHelper_Find_WarBoardBossBattleData___);
  if ( !object )
    return value == 0;
  v16 = object;
  monitor = (System_Collections_Generic_Dictionary_object__object__o *)object[1].monitor;
  if ( !monitor )
    goto LABEL_17;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          monitor,
          (Il2CppObject *)key,
          (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return value == 0;
  monitor = (System_Collections_Generic_Dictionary_object__object__o *)v16[1].monitor;
  if ( !monitor )
LABEL_17:
    sub_1C3E7C0(monitor, v11);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          monitor,
          (Il2CppObject *)key,
          &valuea,
          (const MethodInfo_3476FEC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return value == 0;
  v17 = valuea;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToInt32(v17, 0) == value;
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
  __int64 v17; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  System_Int32_array *DefenseTarget; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  WarBoardStageNpcEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C5479E & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Array_Empty_int___);
    byte_4C5479E = 1;
  }
  v10 = Method_System_Array_Empty_int___;
  entity = 0;
  v11 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v11 )
  {
    sub_1C8ECD4(Method_System_Array_Empty_int___);
    v11 = v10[7];
  }
  v12 = *(_QWORD *)(v11 + 16);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C8EC78(inited);
  if ( !*(_DWORD *)(v12 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v12);
  v13 = *(_QWORD *)(v10[7] + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C8EC78(inited);
  v14 = *(System_Int32_array ***)(v13 + 184);
  v15 = *v14;
  *data = *v14;
  sub_1C3E508((CGThumbnailListItem_o *)data, (int32_t)v15, forceId, *(const MethodInfo **)&groupId);
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
    sub_1C3E508((CGThumbnailListItem_o *)data, (int32_t)DefenseTarget, v20, v21);
  }
  stageNpcMaster = (WarBoardStageNpcMaster_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*data, 0);
  if ( ((unsigned __int8)stageNpcMaster & 1) != 0 )
    return 0;
  if ( !*data )
LABEL_20:
    sub_1C3E7C0(stageNpcMaster, v17);
  return ((*data)->max_length & 1) == 0;
}


bool WarBoardData__IsLose(WarBoardData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  WarBoardPieceData_array *Pieces_37986760; // x0
  const MethodInfo *v5; // x1
  int max_length; // w8
  WarBoardPieceData_array *v7; // x20
  int v8; // w24
  int v9; // w22
  int v10; // w23
  WarBoardPieceData_o *v11; // x21

  Pieces_37986760 = WarBoardData__GetPieces_37986760(this, 0, 0, v2);
  if ( !Pieces_37986760 )
LABEL_18:
    sub_1C3E7C0(Pieces_37986760, v5);
  max_length = Pieces_37986760->max_length;
  v7 = Pieces_37986760;
  if ( max_length < 1 )
    return 1;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  do
  {
    if ( v8 >= (unsigned int)max_length )
      sub_1C3E7C8(Pieces_37986760, v5);
    v11 = v7->m_Items[v8];
    if ( !v11 )
      goto LABEL_18;
    if ( !v11->fields._isDead_k__BackingField )
    {
      Pieces_37986760 = (WarBoardPieceData_array *)WarBoardPieceData__HasAvailablePermanentSleepBuff(v11, 0);
      if ( ((unsigned __int8)Pieces_37986760 & 1) == 0 )
      {
        Pieces_37986760 = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster(v11, 0);
        if ( ((unsigned __int8)Pieces_37986760 & 1) != 0 )
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
  WarBoardPieceData_array *Pieces_37986760; // x0
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
          Pieces_37986760 = WarBoardData__GetPieces_37986760(this, i, v10, v2);
          if ( !Pieces_37986760 )
            goto LABEL_28;
          max_length = Pieces_37986760->max_length;
          v14 = Pieces_37986760;
          if ( max_length >= 1 )
          {
            v15 = 0;
            while ( 1 )
            {
              if ( v15 >= max_length )
                sub_1C3E7C8(Pieces_37986760, v12);
              v16 = &v14->obj.klass + (int)v15;
              v17 = v16[4];
              if ( !v17 )
                break;
              Pieces_37986760 = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster(
                                                             (WarBoardPieceData_o *)v16[4],
                                                             0);
              if ( ((unsigned __int8)Pieces_37986760 & 1) == 0 && !LOBYTE(v17->_1.klass) )
              {
                ++v7;
                v8 += *((unsigned __int8 *)&v17->_1.this_arg.bits + 4);
              }
              max_length = v14->max_length;
              if ( (int)++v15 >= max_length )
                goto LABEL_16;
            }
LABEL_28:
            sub_1C3E7C0(Pieces_37986760, v12);
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


bool WarBoardData__IsReachableWinConditions(WarBoardData_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  WarBoardCommonReleaseEntity_array *List; // x20
  System_Collections_Generic_Dictionary_int__bool__o *v7; // x19
  int max_length; // w8
  unsigned int v9; // w21
  int32_t *v10; // x25
  int32_t v11; // w8
  int32_t v12; // w1
  const MethodInfo_33FDBC8 *v13; // x3
  bool v14; // w2
  System_Collections_Generic_Dictionary_int__bool__o *v15; // x0
  WarBoardData___c_c *v16; // x0
  System_Func_KeyValuePair_int__bool___bool__o *_9__95_0; // x20
  Il2CppObject *v18; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4C5476A & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__bool____);
    sub_1C3E564(&System_Func_KeyValuePair_int__bool___bool__TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__IsReachableWinConditions_b__95_0__);
    sub_1C3E564(&WarBoardData___c_TypeInfo);
    byte_4C5476A = 1;
  }
  if ( this->fields.winCondId < 0 )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  if ( !Master_object )
    goto LABEL_33;
  List = WarBoardCommonReleaseMaster__GetList((WarBoardCommonReleaseMaster_o *)Master_object, this->fields.winCondId, 0);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)List, 0) )
    return 0;
  v7 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v7,
    (const MethodInfo_33FD208 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  if ( !List )
LABEL_33:
    sub_1C3E7C0(Master_object, v4);
  max_length = List->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_1C3E7C8(Master_object, v4);
      v10 = (int32_t *)List->m_Items[v9];
      if ( !v10 || !v7 )
        goto LABEL_33;
      if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
              v7,
              v10[6],
              (const MethodInfo_33FDDDC *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
        break;
      Master_object = (Il2CppObject *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                        v7,
                                        v10[6],
                                        (const MethodInfo_33FDB38 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
        break;
LABEL_25:
      max_length = List->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_26;
    }
    v11 = v10[7];
    if ( v11 == 1 )
    {
      v12 = v10[6];
      v13 = (const MethodInfo_33FDBC8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__;
      v14 = v10[10] == 0;
    }
    else
    {
      if ( v11 != 5 )
      {
        v12 = v10[6];
        v13 = (const MethodInfo_33FDBC8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__;
        v15 = v7;
        v14 = 0;
        goto LABEL_24;
      }
      v12 = v10[6];
      v13 = (const MethodInfo_33FDBC8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__;
      v14 = v10[10] < 1;
    }
    v15 = v7;
LABEL_24:
    System_Collections_Generic_Dictionary_int__bool___set_Item(v15, v12, v14, v13);
    goto LABEL_25;
  }
LABEL_26:
  v16 = WarBoardData___c_TypeInfo;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v16 = WarBoardData___c_TypeInfo;
  }
  _9__95_0 = v16->static_fields->__9__95_0;
  if ( !_9__95_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = WarBoardData___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__95_0 = (System_Func_KeyValuePair_int__bool___bool__o *)sub_1C3E7B0(System_Func_KeyValuePair_int__bool___bool__TypeInfo);
    System_Func_KeyValuePair_int__bool___bool____ctor(
      _9__95_0,
      v18,
      Method_WarBoardData___c__IsReachableWinConditions_b__95_0__,
      0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__95_0 = _9__95_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__95_0, (int32_t)_9__95_0, v20, v21);
  }
  return System_Linq_Enumerable__Any_KeyValuePair_int__bool__(
           (System_Collections_Generic_IEnumerable_TSource__o *)v7,
           (System_Func_TSource__bool__o *)_9__95_0,
           (const MethodInfo_3105E50 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__bool____);
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
  __int64 v11; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  void **p_entity; // x20
  bool IsOnce; // w23
  const MethodInfo *v15; // x1
  System_Int32_array *PlayReinforcements; // x25
  System_Func_int__bool__o *v17; // x26
  const MethodInfo *v18; // x2
  struct WarBoardStageReinforcementsEntity_o *entity; // x8
  char v20; // w9
  bool v21; // w23
  const MethodInfo *v22; // x3
  void *v23; // x8
  __int64 v24; // x9
  WarBoardStageReinforcementsMaster_o *v25; // x21
  int32_t v26; // w22
  int32_t v27; // w9
  __int64 v28; // x9
  __int64 v29; // x9
  _BOOL4 v30; // w9

  if ( (byte_4C547AF & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_Any_int____78187928);
    sub_1C3E564(&Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&System_Func_int__bool__TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass190_0__IsReinforcementsApper_b__0__);
    sub_1C3E564(&WarBoardData___c__DisplayClass190_0_TypeInfo);
    byte_4C547AF = 1;
  }
  v9 = (WarBoardData___c__DisplayClass190_0_o *)sub_1C3E7B0(WarBoardData___c__DisplayClass190_0_TypeInfo);
  WarBoardData___c__DisplayClass190_0___ctor(v9, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (WarBoardStageReinforcementsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
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
  PlayReinforcements = WarBoardData__GetPlayReinforcements(this, v15);
  v17 = (System_Func_int__bool__o *)sub_1C3E7B0(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v17,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass190_0__IsReinforcementsApper_b__0__,
    0);
  Master_object = (WarBoardStageReinforcementsMaster_o *)BasicHelper__Any_int__51260304(
                                                           PlayReinforcements,
                                                           (System_Func_T__bool__o *)v17,
                                                           (const MethodInfo_30E2B90 *)Method_BasicHelper_Any_int____78187928);
  entity = v9->fields.entity;
  if ( !entity )
    goto LABEL_32;
  v20 = IsOnce & (unsigned __int8)Master_object;
  v21 = 0;
  if ( (v20 & 1) != 0 || entity->fields.forceId != forceId || entity->fields.groupId != groupId )
    return v21;
  Master_object = (WarBoardStageReinforcementsMaster_o *)WarBoardData__GetDeploySquareIds(
                                                           this,
                                                           entity->fields.squareIds,
                                                           v18);
  v23 = *p_entity;
  if ( !*p_entity || (v24 = *((_QWORD *)v23 + 5)) == 0 )
LABEL_32:
    sub_1C3E7C0(Master_object, v11);
  v25 = Master_object;
  v26 = 0;
  while ( 1 )
  {
    v27 = *(_DWORD *)(v24 + 24);
    v21 = v26 < v27;
    if ( v26 >= v27 )
      return v21;
    v28 = *((_QWORD *)v23 + 8);
    if ( !v28 )
      goto LABEL_32;
    if ( (unsigned int)v26 >= *(_DWORD *)(v28 + 24) )
LABEL_35:
      sub_1C3E7C8(Master_object, v11);
    if ( *(int *)(v28 + 4LL * v26 + 32) < 1 )
    {
      v30 = 0;
      if ( !v25 )
        goto LABEL_32;
    }
    else
    {
      Master_object = (WarBoardStageReinforcementsMaster_o *)WarBoardData__GetReinfocementsPieces(
                                                               this,
                                                               *((_DWORD *)v23 + 5),
                                                               v26,
                                                               v22);
      if ( !Master_object )
        goto LABEL_32;
      v23 = *p_entity;
      if ( !*p_entity )
        goto LABEL_32;
      v29 = *((_QWORD *)v23 + 8);
      if ( !v29 )
        goto LABEL_32;
      if ( (unsigned int)v26 >= *(_DWORD *)(v29 + 24) )
        goto LABEL_35;
      v30 = *(_DWORD *)(v29 + 4LL * v26 + 32) <= SLODWORD(Master_object->fields._MasterName_k__BackingField);
      if ( !v25 )
        goto LABEL_32;
    }
    if ( (unsigned int)v26 >= LODWORD(v25->fields._MasterName_k__BackingField) )
      goto LABEL_35;
    if ( !v30 && (*(&v25->fields.revision + v26) & 0x80000000) == 0 )
      return v21;
    v24 = *((_QWORD *)v23 + 5);
    ++v26;
    if ( !v24 )
      goto LABEL_32;
  }
}


bool WarBoardData__IsWin(WarBoardData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x20
  __int64 v6; // x1
  bool v7; // w20
  System_Type_o *Type; // x21
  Il2CppType *v9; // x22
  System_RuntimeTypeHandle_o v10; // x0
  System_Type_o *TypeFromHandle; // x1
  bool v12; // w19
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C5476B & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardTaskBase__GetEnumerator__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C3E564(&System_Type_TypeInfo);
    sub_1C3E564(&WarBoardChangeWinConditionTask_var);
    byte_4C5476B = 1;
  }
  memset(&v15, 0, sizeof(v15));
  if ( !WarBoardData__CheckWinCond(this, method) )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 28, 0, 0);
  Instance = (Il2CppObject *)System_Linq_Enumerable__Any_object_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)EventTasks,
                               (const MethodInfo_31055E8 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    WarBoardManager__AddTask_38114996((WarBoardManager_o *)Instance, 0, EventTasks, 0);
  }
  if ( !EventTasks )
LABEL_20:
    sub_1C3E7C0(Instance, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)EventTasks,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_WarBoardTaskBase__GetEnumerator__);
  v15 = v14;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v15,
           (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__MoveNext__);
    if ( !v7 )
      break;
    if ( !v15.fields._current )
      sub_1C3E7C0(0, v6);
    Type = System_Object__GetType(v15.fields._current, 0);
    v9 = WarBoardChangeWinConditionTask_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v10.fields.value = (intptr_t)v9;
    TypeFromHandle = System_Type__GetTypeFromHandle(v10, 0);
    if ( System_Type__op_Equality(Type, TypeFromHandle, 0) )
    {
      this->fields.winCondGroup = -1;
      break;
    }
  }
  v12 = !v7;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__Dispose__);
  return v12;
}


void WarBoardData__JudgePrevCondData(WarBoardData_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  WarBoardCommonReleaseMaster_o *v5; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *current; // x21
  struct WarBoardDataEntity_o *serverData; // x8
  int32_t turn; // w1
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C547A9 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__);
    byte_4C547A9 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  if ( !this->fields.listPrevCond )
    sub_1C3E7C0(Master_object, v4);
  v5 = (WarBoardCommonReleaseMaster_o *)Master_object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)this->fields.listPrevCond,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__);
  v12 = v11;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v12,
           (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__);
    if ( !v6 )
      break;
    current = v12.fields._current;
    if ( !v12.fields._current )
      sub_1C3E7C0(v6, v7);
    if ( (HIDWORD(v12.fields._current[1].klass) & 0x80000000) != 0 )
    {
      if ( !v5 )
        sub_1C3E7C0(v6, v7);
      if ( WarBoardCommonReleaseMaster__IsOpen(v5, (int32_t)v12.fields._current[1].klass, 0) )
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
    &v12,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__);
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
  __int64 v36; // x1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  WarBoardData_o *v43; // x21
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  struct System_Collections_Generic_List_WarBoardUiData__o *latestPieceActionSquareIndexes; // x1
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  struct System_UInt32_array *latestBattlePieceUniqueIndexes; // x1
  System_Collections_Generic_List_object__o *v52; // x20
  Il2CppObject *v53; // x22
  WarBoardPrevCondData_SaveData_o *v54; // x21
  __int64 v55; // x0
  __int64 v56; // x1
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  struct System_Object_array *v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  Il2CppClass **v62; // x0
  WarBoardData_o *v63; // x21
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  System_Collections_Generic_List_object__o *v66; // x20
  Il2CppObject *v67; // x22
  HoldReinforcementsData_SaveData_o *v68; // x21
  __int64 v69; // x0
  __int64 v70; // x1
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  struct System_Object_array *v73; // x8
  _QWORD *v74; // x9
  __int64 v75; // x10
  Il2CppClass **v76; // x0
  WarBoardData_o *v77; // x21
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  struct WarBoardData_WarBoardLocalSaveData_o *v80; // x20
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  System_Collections_Generic_List_object__o *v83; // x20
  Il2CppObject *v84; // x22
  WarBoardUiData_SaveData_o *v85; // x21
  __int64 v86; // x0
  __int64 v87; // x1
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  struct System_Object_array *v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  Il2CppClass **v93; // x0
  WarBoardData_o *v94; // x21
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  struct WarBoardDataEntity_o *v97; // x8
  unsigned int v98; // w0
  WarBoardData_o *v99; // x21
  int v100; // w20
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  unsigned __int64 v103; // x22
  __int64 v104; // x24
  __int64 v105; // x25
  struct WarBoardDataEntity_o *v106; // x9
  struct WarBoardSquareIndexData_array *squareIndexInfo; // x9
  unsigned int *reinforcementsSaveList; // x26
  WarBoardSquareIndexData_o *v109; // x21
  WarBoardSquareIndexData_SaveData_o *v110; // x20
  int32_t v111; // w2
  const MethodInfo *v112; // x3
  struct WarBoardDataEntity_o *v113; // x8
  unsigned int v114; // w0
  WarBoardData_o *v115; // x21
  int v116; // w20
  int32_t v117; // w2
  const MethodInfo *v118; // x3
  int32_t v119; // w2
  const MethodInfo *v120; // x3
  unsigned __int64 v121; // x22
  __int64 v122; // x24
  __int64 v123; // x25
  struct WarBoardDataEntity_o *v124; // x8
  struct WarBoardBossBattleData_array *bossBattleInfo; // x8
  struct System_Collections_Generic_List_int__o *playedStageReinforcementsList; // x26
  WarBoardBossBattleData_o *v127; // x21
  WarBoardBossBattleData_SaveData_o *v128; // x20
  const MethodInfo *v129; // x2
  int32_t v130; // w2
  const MethodInfo *v131; // x3
  struct System_Collections_Generic_List_WarBoardPrevCondData__o *bgAnimationInfo_k__BackingField; // x1
  WarBoardData_o *v133; // x8
  MiniMessagePack_MiniMessagePacker_o *v134; // x19
  System_Byte_array *v135; // x19
  WarBoardData_c *v136; // x8
  System_String_o *WARBOARDDATA_SAVEDATA_KEY; // x20
  System_String_o *v138; // x19
  __int64 v139; // x0
  System_Collections_Generic_List_Enumerator_object__o v140; // [xsp+8h] [xbp-F8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v141; // [xsp+20h] [xbp-E0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v142; // [xsp+40h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v143; // [xsp+60h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v144; // [xsp+80h] [xbp-80h] BYREF

  v4 = this;
  if ( (byte_4C54762 & 1) == 0 )
  {
    sub_1C3E564(&System_Convert_TypeInfo);
    sub_1C3E564(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardUiData_SaveData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardEventData_SaveData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardEventData__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardEventData_SaveData__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardUiData_SaveData__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardEventData_SaveData___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardUiData_SaveData___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_WarBoardPrevCondData_SaveData__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_HoldReinforcementsData_SaveData__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_WarBoardEventData_SaveData__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_WarBoardUiData_SaveData__TypeInfo);
    sub_1C3E564(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1C3E564(&WarBoardSquareIndexData_SaveData___TypeInfo);
    sub_1C3E564(&WarBoardBossBattleData_SaveData___TypeInfo);
    sub_1C3E564(&WarBoardBossBattleData_SaveData_TypeInfo);
    sub_1C3E564(&WarBoardPrevCondData_SaveData_TypeInfo);
    sub_1C3E564(&WarBoardUiData_SaveData_TypeInfo);
    sub_1C3E564(&WarBoardEventData_SaveData_TypeInfo);
    sub_1C3E564(&WarBoardSquareIndexData_SaveData_TypeInfo);
    sub_1C3E564(&HoldReinforcementsData_SaveData_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    this = (WarBoardData_o *)sub_1C3E564(&WarBoardData_TypeInfo);
    byte_4C54762 = 1;
  }
  memset(&v144, 0, sizeof(v144));
  memset(&v143, 0, sizeof(v143));
  memset(&v142, 0, sizeof(v142));
  memset(&v141, 0, sizeof(v141));
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
    sub_1C3E7C8(this, onBoardSkillUpdate);
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
  this = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  v32 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_WarBoardEventData_SaveData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_WarBoardEventData_SaveData___ctor__);
  this = (WarBoardData_o *)v4->fields.listEvent;
  if ( !this )
    goto LABEL_129;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v140,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_WarBoardEventData__GetEnumerator__);
  v144 = v140;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v144,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__MoveNext__) )
  {
    current = v144.fields._current;
    v34 = (WarBoardEventData_SaveData_o *)sub_1C3E7B0(WarBoardEventData_SaveData_TypeInfo);
    WarBoardEventData_SaveData___ctor_38168932(v34, (WarBoardEventData_o *)current, 0);
    if ( !v32 )
      sub_1C3E7C0(v35, v36);
    items = v32->fields._items;
    v40 = Method_System_Collections_Generic_List_WarBoardEventData_SaveData__Add__;
    ++v32->fields._version;
    if ( !items )
      sub_1C3E7C0(v35, v36);
    size = v32->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v32,
        (Il2CppObject *)v34,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
    }
    else
    {
      v42 = &items->obj.klass + size;
      v32->fields._size = size + 1;
      v42[4] = (Il2CppClass *)v34;
      sub_1C3E508((CGThumbnailListItem_o *)(v42 + 4), (int32_t)v34, v37, v38);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v144,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__Dispose__);
  if ( !v32 )
    goto LABEL_129;
  v43 = *p_localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_object___ToArray(
                             v32,
                             (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_WarBoardEventData_SaveData__ToArray__);
  if ( !v43 )
    goto LABEL_129;
  v43->fields.localSaveData = (struct WarBoardData_WarBoardLocalSaveData_o *)this;
  sub_1C3E508((CGThumbnailListItem_o *)&v43->fields.localSaveData, (int32_t)this, v44, v45);
  this = *p_localSaveData;
  if ( !*p_localSaveData )
    goto LABEL_129;
  this->fields._maxForceId_k__BackingField = v4->fields.winCondId;
  latestPieceActionSquareIndexes = (struct System_Collections_Generic_List_WarBoardUiData__o *)v4->fields.latestPieceActionSquareIndexes;
  this->fields.listUiData = latestPieceActionSquareIndexes;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.listUiData, (int32_t)latestPieceActionSquareIndexes, v46, v47);
  this = (WarBoardData_o *)v4->fields.localSaveData;
  if ( !this )
    goto LABEL_129;
  latestBattlePieceUniqueIndexes = v4->fields.latestBattlePieceUniqueIndexes;
  *(_QWORD *)&this->fields.isPlayedHalfDeadMessage = latestBattlePieceUniqueIndexes;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields.isPlayedHalfDeadMessage,
    (int32_t)latestBattlePieceUniqueIndexes,
    v49,
    v50);
  v52 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_WarBoardPrevCondData_SaveData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v52,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData___ctor__);
  this = (WarBoardData_o *)v4->fields.listPrevCond;
  if ( !this )
    goto LABEL_129;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v140,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__);
  v143 = v140;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v143,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__) )
  {
    v53 = v143.fields._current;
    v54 = (WarBoardPrevCondData_SaveData_o *)sub_1C3E7B0(WarBoardPrevCondData_SaveData_TypeInfo);
    WarBoardPrevCondData_SaveData___ctor_38168992(v54, (WarBoardPrevCondData_o *)v53, 0);
    if ( !v52 )
      sub_1C3E7C0(v55, v56);
    v59 = v52->fields._items;
    v60 = Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__Add__;
    ++v52->fields._version;
    if ( !v59 )
      sub_1C3E7C0(v55, v56);
    v61 = v52->fields._size;
    if ( (unsigned int)v61 >= LODWORD(v59->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v52,
        (Il2CppObject *)v54,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
    }
    else
    {
      v62 = &v59->obj.klass + v61;
      v52->fields._size = v61 + 1;
      v62[4] = (Il2CppClass *)v54;
      sub_1C3E508((CGThumbnailListItem_o *)(v62 + 4), (int32_t)v54, v57, v58);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v143,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__);
  if ( !v52 )
    goto LABEL_129;
  v63 = *p_localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_object___ToArray(
                             v52,
                             (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__ToArray__);
  if ( !v63 )
    goto LABEL_129;
  v63->fields.listEvent = (struct System_Collections_Generic_List_WarBoardEventData__o *)this;
  sub_1C3E508((CGThumbnailListItem_o *)&v63->fields.listEvent, (int32_t)this, v64, v65);
  v66 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_HoldReinforcementsData_SaveData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v66,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData___ctor__);
  this = (WarBoardData_o *)v4->fields.reinforcementsSaveList;
  if ( !this )
    goto LABEL_129;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v140,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
  v142 = v140;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v142,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__) )
  {
    v67 = v142.fields._current;
    v68 = (HoldReinforcementsData_SaveData_o *)sub_1C3E7B0(HoldReinforcementsData_SaveData_TypeInfo);
    HoldReinforcementsData_SaveData___ctor_38169044(v68, (HoldReinforcementsData_o *)v67, 0);
    if ( !v66 )
      sub_1C3E7C0(v69, v70);
    v73 = v66->fields._items;
    v74 = Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__Add__;
    ++v66->fields._version;
    if ( !v73 )
      sub_1C3E7C0(v69, v70);
    v75 = v66->fields._size;
    if ( (unsigned int)v75 >= LODWORD(v73->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v66,
        (Il2CppObject *)v68,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
    }
    else
    {
      v76 = &v73->obj.klass + v75;
      v66->fields._size = v75 + 1;
      v76[4] = (Il2CppClass *)v68;
      sub_1C3E508((CGThumbnailListItem_o *)(v76 + 4), (int32_t)v68, v71, v72);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v142,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
  if ( !v66 )
    goto LABEL_129;
  v77 = *p_localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_object___ToArray(
                             v66,
                             (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__ToArray__);
  if ( !v77 )
    goto LABEL_129;
  *(_QWORD *)&v77->fields.winCondId = this;
  sub_1C3E508((CGThumbnailListItem_o *)&v77->fields.winCondId, (int32_t)this, v78, v79);
  this = (WarBoardData_o *)v4->fields.playedStageReinforcementsList;
  if ( !this )
    goto LABEL_129;
  v80 = v4->fields.localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_int___ToArray(
                             (System_Collections_Generic_List_int__o *)this,
                             (const MethodInfo_3799EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v80 )
    goto LABEL_129;
  v80->fields.playedReinforcements = (struct System_Int32_array *)this;
  sub_1C3E508((CGThumbnailListItem_o *)&v80->fields.playedReinforcements, (int32_t)this, v81, v82);
  v83 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_WarBoardUiData_SaveData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v83,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_WarBoardUiData_SaveData___ctor__);
  this = (WarBoardData_o *)v4->fields.listUiData;
  if ( !this )
    goto LABEL_129;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v140,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__);
  v141 = v140;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v141,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__) )
  {
    v84 = v141.fields._current;
    v85 = (WarBoardUiData_SaveData_o *)sub_1C3E7B0(WarBoardUiData_SaveData_TypeInfo);
    WarBoardUiData_SaveData___ctor_38169104(v85, (WarBoardUiData_o *)v84, 0);
    if ( !v83 )
      sub_1C3E7C0(v86, v87);
    v90 = v83->fields._items;
    v91 = Method_System_Collections_Generic_List_WarBoardUiData_SaveData__Add__;
    ++v83->fields._version;
    if ( !v90 )
      sub_1C3E7C0(v86, v87);
    v92 = v83->fields._size;
    if ( (unsigned int)v92 >= LODWORD(v90->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v83,
        (Il2CppObject *)v85,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
    }
    else
    {
      v93 = &v90->obj.klass + v92;
      v83->fields._size = v92 + 1;
      v93[4] = (Il2CppClass *)v85;
      sub_1C3E508((CGThumbnailListItem_o *)(v93 + 4), (int32_t)v85, v88, v89);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v141,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__);
  if ( !v83 )
    goto LABEL_129;
  v94 = *p_localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_object___ToArray(
                             v83,
                             (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_WarBoardUiData_SaveData__ToArray__);
  if ( !v94
    || (v94->fields.latestBattlePieceUniqueIndexes = (struct System_UInt32_array *)this,
        sub_1C3E508((CGThumbnailListItem_o *)&v94->fields.latestBattlePieceUniqueIndexes, (int32_t)this, v95, v96),
        (v97 = v4->fields.serverData) == 0)
    || (v98 = System_Linq_Enumerable__Count_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v97->fields.squareIndexInfo,
                (const MethodInfo_3119ED4 *)Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___),
        v99 = *p_localSaveData,
        v100 = v98,
        this = (WarBoardData_o *)sub_1C3E60C(WarBoardSquareIndexData_SaveData___TypeInfo, v98),
        !v99) )
  {
LABEL_129:
    sub_1C3E7C0(this, onBoardSkillUpdate);
  }
  v99->fields.reinforcementsSaveList = (struct System_Collections_Generic_List_HoldReinforcementsData__o *)this;
  sub_1C3E508((CGThumbnailListItem_o *)&v99->fields.reinforcementsSaveList, (int32_t)this, v101, v102);
  if ( v100 >= 1 )
  {
    v103 = 0;
    v104 = (unsigned int)v100;
    v105 = 8;
    while ( *p_localSaveData )
    {
      v106 = v4->fields.serverData;
      if ( !v106 )
        break;
      squareIndexInfo = v106->fields.squareIndexInfo;
      if ( !squareIndexInfo )
        break;
      if ( v103 >= LODWORD(squareIndexInfo->max_length) )
        goto LABEL_130;
      reinforcementsSaveList = (unsigned int *)(*p_localSaveData)->fields.reinforcementsSaveList;
      v109 = *(WarBoardSquareIndexData_o **)((char *)&squareIndexInfo->obj.klass + v105 * 4);
      v110 = (WarBoardSquareIndexData_SaveData_o *)sub_1C3E7B0(WarBoardSquareIndexData_SaveData_TypeInfo);
      WarBoardSquareIndexData_SaveData___ctor_38169184(v110, v109, 0);
      if ( !reinforcementsSaveList )
        break;
      if ( v110 )
      {
        this = (WarBoardData_o *)sub_1C3E6A0(v110, *(_QWORD *)(*(_QWORD *)reinforcementsSaveList + 64LL));
        if ( !this )
        {
LABEL_139:
          v139 = sub_1C3E7E4();
          sub_1C3E68C(v139, 0);
        }
      }
      if ( v103 >= reinforcementsSaveList[6] )
        goto LABEL_130;
      *(_QWORD *)&reinforcementsSaveList[v105] = v110;
      sub_1C3E508((CGThumbnailListItem_o *)&reinforcementsSaveList[v105], (int32_t)v110, v111, v112);
      ++v103;
      v105 += 2;
      if ( v104 == v103 )
        goto LABEL_106;
    }
    goto LABEL_129;
  }
LABEL_106:
  v113 = v4->fields.serverData;
  if ( !v113 )
    goto LABEL_129;
  v114 = System_Linq_Enumerable__Count_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v113->fields.bossBattleInfo,
           (const MethodInfo_3119ED4 *)Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___);
  v115 = *p_localSaveData;
  v116 = v114;
  this = (WarBoardData_o *)sub_1C3E60C(WarBoardBossBattleData_SaveData___TypeInfo, v114);
  if ( !v115 )
    goto LABEL_129;
  v115->fields.playedStageReinforcementsList = (struct System_Collections_Generic_List_int__o *)this;
  sub_1C3E508((CGThumbnailListItem_o *)&v115->fields.playedStageReinforcementsList, (int32_t)this, v117, v118);
  this = *p_localSaveData;
  if ( v116 >= 1 )
  {
    v121 = 0;
    v122 = (unsigned int)v116;
    v123 = 32;
    while ( this )
    {
      v124 = v4->fields.serverData;
      if ( !v124 )
        break;
      bossBattleInfo = v124->fields.bossBattleInfo;
      if ( !bossBattleInfo )
        break;
      if ( v121 >= LODWORD(bossBattleInfo->max_length) )
        goto LABEL_130;
      playedStageReinforcementsList = this->fields.playedStageReinforcementsList;
      v127 = *(WarBoardBossBattleData_o **)((char *)&bossBattleInfo->obj.klass + v123);
      v128 = (WarBoardBossBattleData_SaveData_o *)sub_1C3E7B0(WarBoardBossBattleData_SaveData_TypeInfo);
      WarBoardBossBattleData_SaveData___ctor_37965672(v128, v127, v129);
      if ( !playedStageReinforcementsList )
        break;
      if ( v128 )
      {
        this = (WarBoardData_o *)sub_1C3E6A0(v128, playedStageReinforcementsList->klass->_1.element_class);
        if ( !this )
          goto LABEL_139;
      }
      if ( v121 >= (unsigned int)playedStageReinforcementsList->fields._size )
        goto LABEL_130;
      *(System_Collections_Generic_List_int__c **)((char *)&playedStageReinforcementsList->klass + v123) = (System_Collections_Generic_List_int__c *)v128;
      sub_1C3E508((CGThumbnailListItem_o *)((char *)playedStageReinforcementsList + v123), (int32_t)v128, v130, v131);
      this = *p_localSaveData;
      ++v121;
      v123 += 8;
      if ( v122 == v121 )
        goto LABEL_119;
    }
    goto LABEL_129;
  }
LABEL_119:
  if ( !this )
    goto LABEL_129;
  bgAnimationInfo_k__BackingField = (struct System_Collections_Generic_List_WarBoardPrevCondData__o *)v4->fields._bgAnimationInfo_k__BackingField;
  this->fields.listPrevCond = bgAnimationInfo_k__BackingField;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.listPrevCond, (int32_t)bgAnimationInfo_k__BackingField, v119, v120);
  v133 = *p_localSaveData;
  if ( !*p_localSaveData )
    goto LABEL_129;
  v133->fields._CurrentMemberCount_k__BackingField = v4->fields._ContinueConsumeType_k__BackingField;
  LOBYTE(v133->fields._ContinueConsumeType_k__BackingField) = v4->fields._IsContinue_k__BackingField;
  BYTE1(v133->fields._ContinueConsumeType_k__BackingField) = v4->fields._IsNextTurn_k__BackingField;
  v133->fields._CurrentPartyCost_k__BackingField = v4->fields.localSaveTiming;
  v134 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C3E7B0(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v134, 0);
  if ( !v134 )
    goto LABEL_129;
  v135 = MiniMessagePack_MiniMessagePacker__PackClass(v134, (Il2CppObject *)*p_localSaveData, 0);
  v136 = WarBoardData_TypeInfo;
  if ( !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    v136 = WarBoardData_TypeInfo;
  }
  WARBOARDDATA_SAVEDATA_KEY = v136->static_fields->WARBOARDDATA_SAVEDATA_KEY;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v138 = System_Convert__ToBase64String(v135, 0);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SetString(WARBOARDDATA_SAVEDATA_KEY, v138, 0);
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
  System_Collections_Generic_List_T__o *reinforcementsSaveList; // x21
  System_Func_object__bool__o *v11; // x22
  _BOOL8 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w21
  int32_t v15; // w22
  HoldReinforcementsData_o *v16; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x8
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C547AC & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_Any_HoldReinforcementsData___);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__get_Current__);
    sub_1C3E564(&System_Func_HoldReinforcementsData__bool__TypeInfo);
    sub_1C3E564(&HoldReinforcementsData_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_HoldReinforcementsData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass187_0__SaveHoldReinforcements_b__0__);
    sub_1C3E564(&WarBoardData___c__DisplayClass187_0_TypeInfo);
    byte_4C547AC = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v7 = (WarBoardData___c__DisplayClass187_0_o *)sub_1C3E7B0(WarBoardData___c__DisplayClass187_0_TypeInfo);
  WarBoardData___c__DisplayClass187_0___ctor(v7, 0);
  if ( !v7 )
    goto LABEL_20;
  v7->fields.stageReinforcementsId = stageReinforcementsId;
  v7->fields.index = index;
  reinforcementsSaveList = (System_Collections_Generic_List_T__o *)this->fields.reinforcementsSaveList;
  v11 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_HoldReinforcementsData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_WarBoardData___c__DisplayClass187_0__SaveHoldReinforcements_b__0__,
    0);
  if ( !BasicHelper__Any_object_(
          reinforcementsSaveList,
          (System_Func_T__bool__o *)v11,
          (const MethodInfo_30E2E10 *)Method_BasicHelper_Any_HoldReinforcementsData___) )
  {
    v14 = v7->fields.stageReinforcementsId;
    v15 = v7->fields.index;
    v16 = (HoldReinforcementsData_o *)sub_1C3E7B0(HoldReinforcementsData_TypeInfo);
    HoldReinforcementsData___ctor_38205700(v16, v14, v15, 1, 0);
    v8 = (System_Collections_Generic_List_object__o *)this->fields.reinforcementsSaveList;
    if ( v8 )
    {
      items = v8->fields._items;
      v20 = Method_System_Collections_Generic_List_HoldReinforcementsData__Add__;
      ++v8->fields._version;
      if ( items )
      {
        size = v8->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            (Il2CppObject *)v16,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v16;
          sub_1C3E508((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v16, v17, v18);
        }
        return;
      }
    }
LABEL_20:
    sub_1C3E7C0(v8, v9);
  }
  v8 = (System_Collections_Generic_List_object__o *)this->fields.reinforcementsSaveList;
  if ( !v8 )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    v8,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
  v24 = v23;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__);
    if ( !v12 )
      break;
    if ( !v24.fields._current )
      sub_1C3E7C0(v12, v13);
    if ( LODWORD(v24.fields._current[1].klass) == v7->fields.stageReinforcementsId
      && HIDWORD(v24.fields._current[1].klass) == v7->fields.index )
    {
      HoldReinforcementsData__IncreaseHoldNum((HoldReinforcementsData_o *)v24.fields._current, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
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

  if ( (byte_4C547AA & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    byte_4C547AA = 1;
  }
  playedStageReinforcementsList = this->fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList
    || (items = playedStageReinforcementsList->fields._items,
        v7 = Method_System_Collections_Generic_List_int__Add__,
        ++playedStageReinforcementsList->fields._version,
        !items) )
  {
    sub_1C3E7C0(playedStageReinforcementsList, *(_QWORD *)&stageReinforcementsId);
  }
  size = playedStageReinforcementsList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      playedStageReinforcementsList,
      stageReinforcementsId,
      *(const MethodInfo_379843C **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
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
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *v13; // x24
  WarBoardSquareData_o *v14; // x22
  System_Collections_Generic_List_object__o *v15; // x24
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Func_object__bool__o *v18; // x25
  System_Collections_Generic_List_object__o *v19; // x24
  int32_t v20; // w26
  WarBoardData_SquareRangeSearch_o *v21; // x25
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  struct System_Int32_array *linkedSquares; // x8
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v30; // x28
  __int64 v31; // x29
  __int64 v32; // x24
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  __int64 v35; // x23
  struct System_Int32_array *v36; // x8
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *v37; // x25
  System_Func_object__bool__o *v38; // x26
  const MethodInfo *v39; // x4
  System_Collections_Generic_List_T__o *v40; // x25
  System_Func_object__bool__o *v41; // x26
  struct System_Int32_array *v42; // x8

  if ( (byte_4C54783 & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_Any_WarBoardData_SquareRangeSearch___);
    sub_1C3E564(&Method_System_Linq_Enumerable_All_WarBoardData_SquareRangeSearch___);
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardData_SquareRangeSearch___);
    sub_1C3E564(&System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_WarBoardData_SquareRangeSearch__TypeInfo);
    sub_1C3E564(&WarBoardData_SquareRangeSearch_TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass125_0__SearchInRangeSquares_b__0__);
    sub_1C3E564(&WarBoardData___c__DisplayClass125_0_TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__1__);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__2__);
    sub_1C3E564(&WarBoardData___c__DisplayClass125_1_TypeInfo);
    byte_4C54783 = 1;
  }
  v8 = (WarBoardData___c__DisplayClass125_0_o *)sub_1C3E7B0(WarBoardData___c__DisplayClass125_0_TypeInfo);
  WarBoardData___c__DisplayClass125_0___ctor(v8, 0);
  if ( !v8 )
    goto LABEL_29;
  v8->fields.start = start;
  Square = WarBoardData__GetSquare(this, start, v11);
  if ( Square )
  {
    v13 = *rangeSearches;
    v14 = Square;
    if ( !*rangeSearches )
    {
      v15 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_WarBoardData_SquareRangeSearch__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v15,
        (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch___ctor__);
      *rangeSearches = (System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *)v15;
      sub_1C3E508((CGThumbnailListItem_o *)rangeSearches, (int32_t)v15, v16, v17);
      v13 = *rangeSearches;
    }
    v18 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v18,
      (Il2CppObject *)v8,
      Method_WarBoardData___c__DisplayClass125_0__SearchInRangeSquares_b__0__,
      0);
    v9 = System_Linq_Enumerable__FirstOrDefault_object__51525108(
           (System_Collections_Generic_IEnumerable_TSource__o *)v13,
           (System_Func_TSource__bool__o *)v18,
           (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardData_SquareRangeSearch___);
    if ( v9 )
    {
      HIDWORD(v9[1].klass) = range;
    }
    else
    {
      v19 = (System_Collections_Generic_List_object__o *)*rangeSearches;
      v20 = v8->fields.start;
      v21 = (WarBoardData_SquareRangeSearch_o *)sub_1C3E7B0(WarBoardData_SquareRangeSearch_TypeInfo);
      WarBoardData_SquareRangeSearch___ctor(v21, v20, range, 0);
      if ( !v19 )
        goto LABEL_29;
      items = v19->fields._items;
      v25 = Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch__Add__;
      ++v19->fields._version;
      if ( !items )
        goto LABEL_29;
      size = v19->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v19,
          (Il2CppObject *)v21,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = &items->obj.klass + size;
        v19->fields._size = size + 1;
        v27[4] = (Il2CppClass *)v21;
        sub_1C3E508((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v21, v22, v23);
      }
    }
    v8->fields.nextRange = range - 1;
    if ( range - 1 >= 0 )
    {
      linkedSquares = v14->fields.linkedSquares;
      if ( !linkedSquares )
        goto LABEL_29;
      max_length = linkedSquares->max_length;
      if ( (int)max_length >= 1 )
      {
        v30 = 0;
        v31 = (unsigned int)max_length;
        while ( 1 )
        {
          v32 = sub_1C3E7B0(WarBoardData___c__DisplayClass125_1_TypeInfo);
          WarBoardData___c__DisplayClass125_1___ctor((WarBoardData___c__DisplayClass125_1_o *)v32, 0);
          if ( !v32 )
            break;
          *(_QWORD *)(v32 + 24) = v8;
          v35 = v32 + 24;
          sub_1C3E508((CGThumbnailListItem_o *)(v32 + 24), (int32_t)v8, v33, v34);
          v36 = v14->fields.linkedSquares;
          if ( !v36 )
            break;
          if ( v30 >= LODWORD(v36->max_length) )
            goto LABEL_30;
          *(_DWORD *)(v32 + 16) = v36->m_Items[v30];
          v37 = *rangeSearches;
          v38 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v38,
            (Il2CppObject *)v32,
            Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__1__,
            0);
          v9 = (Il2CppObject *)System_Linq_Enumerable__All_object_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)v37,
                                 (System_Func_TSource__bool__o *)v38,
                                 (const MethodInfo_3103F20 *)Method_System_Linq_Enumerable_All_WarBoardData_SquareRangeSearch___);
          if ( ((unsigned __int8)v9 & 1) != 0
            || (v40 = (System_Collections_Generic_List_T__o *)*rangeSearches,
                v41 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo),
                System_Func_object__bool____ctor(
                  v41,
                  (Il2CppObject *)v32,
                  Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__2__,
                  0),
                v9 = (Il2CppObject *)BasicHelper__Any_object_(
                                       v40,
                                       (System_Func_T__bool__o *)v41,
                                       (const MethodInfo_30E2E10 *)Method_BasicHelper_Any_WarBoardData_SquareRangeSearch___),
                ((unsigned __int8)v9 & 1) != 0) )
          {
            v42 = v14->fields.linkedSquares;
            if ( !v42 )
              break;
            if ( v30 >= LODWORD(v42->max_length) )
LABEL_30:
              sub_1C3E7C8(v9, v10);
            if ( !*(_QWORD *)v35 )
              break;
            WarBoardData__SearchInRangeSquares(
              this,
              v42->m_Items[v30],
              *(_DWORD *)(*(_QWORD *)v35 + 20LL),
              rangeSearches,
              v39);
          }
          if ( v31 == ++v30 )
            return;
        }
LABEL_29:
        sub_1C3E7C0(v9, v10);
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
  WarBoardPieceData_o *Piece_37929548; // x0
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

  if ( (byte_4C54784 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C3E564(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Queue_int__Contains__);
    sub_1C3E564(&Method_System_Collections_Generic_Queue_int__Dequeue__);
    sub_1C3E564(&Method_System_Collections_Generic_Queue_int__Enqueue__);
    sub_1C3E564(&Method_System_Collections_Generic_Queue_int___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_Queue_int__get_Count__);
    sub_1C3E564(&System_Collections_Generic_Queue_int__TypeInfo);
    byte_4C54784 = 1;
  }
  if ( destination != current )
  {
    v9 = (System_Collections_Generic_Queue_int__o *)sub_1C3E7B0(System_Collections_Generic_Queue_int__TypeInfo);
    System_Collections_Generic_Queue_int____ctor(
      v9,
      (const MethodInfo_395B4FC *)Method_System_Collections_Generic_Queue_int___ctor__);
    if ( !v9 )
LABEL_24:
      sub_1C3E7C0(Piece_37929548, v11);
    System_Collections_Generic_Queue_int___Enqueue(
      v9,
      destination,
      (const MethodInfo_395BA74 *)Method_System_Collections_Generic_Queue_int__Enqueue__);
    v12 = (System_Collections_Generic_HashSet_int__o *)sub_1C3E7B0(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v12,
      (const MethodInfo_3665EC4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    if ( v9->fields._size >= 1 )
    {
      do
      {
        destination = System_Collections_Generic_Queue_int___Dequeue(
                        v9,
                        (const MethodInfo_395BBF0 *)Method_System_Collections_Generic_Queue_int__Dequeue__);
        Square = WarBoardData__GetSquare(this, destination, v13);
        if ( !Square )
          break;
        v16 = Square;
        Piece_37929548 = WarBoardData__GetPiece_37929548(this, destination, v15);
        if ( !Piece_37929548 )
          return destination;
        if ( !checkReplaceFunc )
          goto LABEL_24;
        v17 = Piece_37929548;
        Piece_37929548 = (WarBoardPieceData_o *)((__int64 (__fastcall *)(intptr_t, WarBoardPieceData_o *, intptr_t))checkReplaceFunc->fields.invoke_impl)(
                                                  checkReplaceFunc->fields.method_code,
                                                  Piece_37929548,
                                                  checkReplaceFunc->fields.method);
        if ( ((unsigned __int8)Piece_37929548 & 1) != 0 )
        {
          WarBoardPieceData__SetSquareIndex(v17, -1, 0);
          return destination;
        }
        if ( !v12 )
          goto LABEL_24;
        Piece_37929548 = (WarBoardPieceData_o *)System_Collections_Generic_HashSet_int___Add(
                                                  v12,
                                                  destination,
                                                  (const MethodInfo_36670C8 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
              sub_1C3E7C8(Piece_37929548, v11);
            v21 = linkedSquares->m_Items[v20];
            Piece_37929548 = (WarBoardPieceData_o *)System_Collections_Generic_HashSet_int___Contains(
                                                      v12,
                                                      v21,
                                                      (const MethodInfo_36665B8 *)Method_System_Collections_Generic_HashSet_int__Contains__);
            if ( ((unsigned __int8)Piece_37929548 & 1) == 0 )
            {
              Piece_37929548 = (WarBoardPieceData_o *)System_Collections_Generic_Queue_int___Contains(
                                                        v9,
                                                        v21,
                                                        (const MethodInfo_395BD74 *)Method_System_Collections_Generic_Queue_int__Contains__);
              if ( ((unsigned __int8)Piece_37929548 & 1) == 0 )
                System_Collections_Generic_Queue_int___Enqueue(
                  v9,
                  v21,
                  (const MethodInfo_395BA74 *)Method_System_Collections_Generic_Queue_int__Enqueue__);
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

  if ( (byte_4C547B7 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    byte_4C547B7 = 1;
  }
  bgAnimationInfo_k__BackingField = this->fields._bgAnimationInfo_k__BackingField;
  if ( !bgAnimationInfo_k__BackingField )
    sub_1C3E7C0(0, objectName);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)bgAnimationInfo_k__BackingField,
    (Il2CppObject *)objectName,
    (Il2CppObject *)animName,
    (const MethodInfo_34757CC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
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
  __int64 v41; // x1
  WarBoardData___c_c *v42; // x0
  System_Action_object__o *_9__82_4; // x21
  Il2CppObject *v44; // x22
  struct WarBoardData___c_StaticFields *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  struct WarBoardItemData_array *items; // x19
  int max_length; // w8
  unsigned int v50; // w20

  if ( (byte_4C54766 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_WarBoardPieceData__TypeInfo);
    sub_1C3E564(&Method_BasicHelper_ExcludeNull_BattleServantData___);
    sub_1C3E564(&Method_BasicHelper_ForEach_WarBoardPieceData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_OrderBy_WarBoardPieceData__int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__BattleServantData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C3E564(&System_Func_WarBoardPieceData__BattleServantData__TypeInfo);
    sub_1C3E564(&System_Func_WarBoardPieceData__int__TypeInfo);
    sub_1C3E564(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int___ctor___78114696);
    sub_1C3E564(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C3E564(&Method_WarBoardData___c__SetContinue_b__82_0__);
    sub_1C3E564(&Method_WarBoardData___c__SetContinue_b__82_1__);
    sub_1C3E564(&Method_WarBoardData___c__SetContinue_b__82_2__);
    sub_1C3E564(&Method_WarBoardData___c__SetContinue_b__82_3__);
    sub_1C3E564(&Method_WarBoardData___c__SetContinue_b__82_4__);
    sub_1C3E564(&WarBoardData___c_TypeInfo);
    byte_4C54766 = 1;
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
    _9__82_0 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_WarBoardPieceData__int__TypeInfo);
    System_Func_object__int____ctor(_9__82_0, v7, Method_WarBoardData___c__SetContinue_b__82_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__82_0 = (struct System_Func_WarBoardPieceData__int__o *)_9__82_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__82_0, (int32_t)_9__82_0, v9, v10);
  }
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v5,
                                                               (System_Func_TSource__TKey__o *)_9__82_0,
                                                               (const MethodInfo_31292A0 *)Method_System_Linq_Enumerable_OrderBy_WarBoardPieceData__int___);
  v12 = System_Linq_Enumerable__ToArray_object_(
          v11,
          (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
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
    _9__82_1 = (System_Func_object__object__o *)sub_1C3E7B0(System_Func_WarBoardPieceData__BattleServantData__TypeInfo);
    System_Func_object__object____ctor(_9__82_1, v16, Method_WarBoardData___c__SetContinue_b__82_1__, 0);
    v17 = WarBoardData___c_TypeInfo->static_fields;
    v17->__9__82_1 = (struct System_Func_WarBoardPieceData__BattleServantData__o *)_9__82_1;
    sub_1C3E508((CGThumbnailListItem_o *)&v17->__9__82_1, (int32_t)_9__82_1, v18, v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                         v14,
                                                         (System_Func_TSource__TResult__o *)_9__82_1,
                                                         (const MethodInfo_3130218 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__BattleServantData___);
  v21 = BasicHelper__ExcludeNull_object_(
          v20,
          (const MethodInfo_30E3764 *)Method_BasicHelper_ExcludeNull_BattleServantData___);
  v22 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v21,
          (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
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
    _9__82_2 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__82_2, v26, Method_WarBoardData___c__SetContinue_b__82_2__, 0);
    v27 = WarBoardData___c_TypeInfo->static_fields;
    v27->__9__82_2 = (struct System_Func_WarBoardPieceData__bool__o *)_9__82_2;
    sub_1C3E508((CGThumbnailListItem_o *)&v27->__9__82_2, (int32_t)_9__82_2, v28, v29);
  }
  v30 = System_Linq_Enumerable__Where_object_(
          v14,
          (System_Func_TSource__bool__o *)_9__82_2,
          (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
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
    _9__82_3 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_WarBoardPieceData__int__TypeInfo);
    System_Func_object__int____ctor(_9__82_3, v34, Method_WarBoardData___c__SetContinue_b__82_3__, 0);
    v35 = WarBoardData___c_TypeInfo->static_fields;
    v35->__9__82_3 = (struct System_Func_WarBoardPieceData__int__o *)_9__82_3;
    sub_1C3E508((CGThumbnailListItem_o *)&v35->__9__82_3, (int32_t)_9__82_3, v36, v37);
  }
  v38 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                         v32,
                                                         (System_Func_TSource__TResult__o *)_9__82_3,
                                                         (const MethodInfo_312F93C *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___);
  v39 = (System_Collections_Generic_HashSet_int__o *)sub_1C3E7B0(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_57040820(
    v39,
    v38,
    (const MethodInfo_3665FB4 *)Method_System_Collections_Generic_HashSet_int___ctor___78114696);
  Instance = (BattleData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (BattleData_o *)Instance->fields.commandCriticalArray;
  if ( !Instance )
    goto LABEL_42;
  BattleData__ProcContinue(Instance, v24, v39, 0);
  v42 = WarBoardData___c_TypeInfo;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v42 = WarBoardData___c_TypeInfo;
  }
  _9__82_4 = (System_Action_object__o *)v42->static_fields->__9__82_4;
  if ( !_9__82_4 )
  {
    if ( !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      v42 = WarBoardData___c_TypeInfo;
    }
    v44 = (Il2CppObject *)v42->static_fields->__9;
    _9__82_4 = (System_Action_object__o *)sub_1C3E7B0(System_Action_WarBoardPieceData__TypeInfo);
    System_Action_object____ctor(_9__82_4, v44, Method_WarBoardData___c__SetContinue_b__82_4__, 0);
    v45 = WarBoardData___c_TypeInfo->static_fields;
    v45->__9__82_4 = (struct System_Action_WarBoardPieceData__o *)_9__82_4;
    sub_1C3E508((CGThumbnailListItem_o *)&v45->__9__82_4, (int32_t)_9__82_4, v46, v47);
  }
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)v14,
    (System_Action_T__o *)_9__82_4,
    (const MethodInfo_30E5A30 *)Method_BasicHelper_ForEach_WarBoardPieceData___);
  items = this->fields.items;
  if ( !items )
    goto LABEL_42;
  max_length = items->max_length;
  if ( max_length >= 1 )
  {
    v50 = 0;
    while ( 1 )
    {
      if ( v50 >= max_length )
        sub_1C3E7C8(Instance, v41);
      Instance = (BattleData_o *)items->m_Items[v50];
      if ( !Instance )
        break;
      WarBoardItemData__ResetItem((WarBoardItemData_o *)Instance, 0);
      max_length = items->max_length;
      if ( (int)++v50 >= max_length )
        return;
    }
LABEL_42:
    sub_1C3E7C0(Instance, v41);
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

  if ( (byte_4C5478F & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Array_Find_WarBoardPieceData___);
    sub_1C3E564(&System_Predicate_WarBoardPieceData__TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__SetPlayerMasterUserEquip_b__144_0__);
    sub_1C3E564(&WarBoardData___c_TypeInfo);
    byte_4C5478F = 1;
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
    _9__144_0 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_WarBoardPieceData__TypeInfo);
    System_Predicate_object____ctor(_9__144_0, v8, Method_WarBoardData___c__SetPlayerMasterUserEquip_b__144_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__144_0 = (struct System_Predicate_WarBoardPieceData__o *)_9__144_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__144_0, (int32_t)_9__144_0, v10, v11);
  }
  object = System_Array__Find_object_(
             pieces,
             (System_Predicate_T__o *)_9__144_0,
             (const MethodInfo_31FEA98 *)Method_System_Array_Find_WarBoardPieceData___);
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
  __int64 v13; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  Il2CppObject *p_obj; // x21
  System_Byte_array *v16; // x21
  System_Byte_array *v17; // x21
  System_String_o *v18; // x0
  struct WarBoardDataEntity_o *v19; // x8
  Il2CppObject *v20; // x0
  System_Byte_array *v21; // x0
  System_Byte_array *v22; // x0
  System_String_o *v23; // x0
  System_Collections_Generic_IEnumerable_TSource__o *items; // x23
  WarBoardData___c_c *v25; // x0
  System_String_o *v26; // x22
  System_String_o *v27; // x21
  System_Func_object__object__o *_9__156_1; // x24
  System_Byte_array *v29; // x21
  System_Byte_array *v30; // x0
  System_Convert_c *v31; // x8
  System_Byte_array *v32; // x21
  Il2CppObject *v33; // x25
  struct WarBoardData___c_StaticFields *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v37; // x0
  WarBoardData___c_c *v38; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x23
  System_Func_object__bool__o *_9__156_2; // x24
  Il2CppObject *v41; // x25
  struct WarBoardData___c_StaticFields *v42; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  System_String_array *v46; // x0
  Il2CppObject *v47; // x0
  Il2CppObject *v48; // x0
  System_Byte_array *v49; // x21
  System_Byte_array *v50; // x0
  System_String_o *v51; // x0
  struct WarBoardDataEntity_o *v52; // x8
  Il2CppObject *v53; // x21
  Il2CppObject *v54; // x0
  System_Byte_array *v55; // x21
  System_Byte_array *v56; // x21
  System_String_o *v57; // x0
  struct WarBoardDataEntity_o *v58; // x8
  Il2CppObject *v59; // x0
  System_Byte_array *v60; // x0
  System_Byte_array *v61; // x0
  System_String_o *v62; // x0
  struct WarBoardDataEntity_o *v63; // x8
  Il2CppObject *v64; // x0
  System_Byte_array *v65; // x0
  System_Byte_array *v66; // x0
  System_String_o *v67; // x2

  if ( (byte_4C54798 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_WarBoardPieceData__TypeInfo);
    sub_1C3E564(&Method_BasicHelper_ForEach_WarBoardPieceData___);
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    sub_1C3E564(&System_Convert_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_WarBoardItemData__string___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_string___);
    sub_1C3E564(&System_Func_WarBoardItemData__string__TypeInfo);
    sub_1C3E564(&System_Func_string__bool__TypeInfo);
    sub_1C3E564(&JsonManager_TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__SetRequest_b__156_0__);
    sub_1C3E564(&Method_WarBoardData___c__SetRequest_b__156_1__);
    sub_1C3E564(&Method_WarBoardData___c__SetRequest_b__156_2__);
    sub_1C3E564(&WarBoardData___c_TypeInfo);
    sub_1C3E564(&StringLiteral_17368/*"bossBattleInfo"*/);
    sub_1C3E564(&StringLiteral_23890/*"svtInfo"*/);
    sub_1C3E564(&StringLiteral_21472/*"masterInfo"*/);
    sub_1C3E564(&StringLiteral_24744/*"wallInfo"*/);
    sub_1C3E564(&StringLiteral_22353/*"null"*/);
    sub_1C3E564(&StringLiteral_23648/*"squareIndexInfo"*/);
    sub_1C3E564(&StringLiteral_19819/*"getItemInfo"*/);
    sub_1C3E564(&StringLiteral_811/*","*/);
    sub_1C3E564(&StringLiteral_16026/*"[{0}]"*/);
    byte_4C54798 = 1;
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
    _9__156_0 = (System_Action_object__o *)sub_1C3E7B0(System_Action_WarBoardPieceData__TypeInfo);
    System_Action_object____ctor(_9__156_0, v8, Method_WarBoardData___c__SetRequest_b__156_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__156_0 = (struct System_Action_WarBoardPieceData__o *)_9__156_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__156_0, (int32_t)_9__156_0, v10, v11);
  }
  BasicHelper__ForEach_object_(
    pieces,
    (System_Action_T__o *)_9__156_0,
    (const MethodInfo_30E5A30 *)Method_BasicHelper_ForEach_WarBoardPieceData___);
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_51;
  p_obj = &serverData->fields.svtInfo->obj;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v12 = (Il2CppObject *)JsonManager__toJson(p_obj, 0, 0, 0);
  if ( !request )
    goto LABEL_51;
  v16 = RequestBase__PackToMessagePack(request, v12, 0);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v17 = CatAndMouseGame__CatGame5Bytes(v16, 0);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v18 = System_Convert__ToBase64String(v17, 0);
  RequestBase__addField_44302832(request, (System_String_o *)StringLiteral_23890/*"svtInfo"*/, v18, 0);
  v19 = this->fields.serverData;
  if ( !v19
    || (v20 = (Il2CppObject *)JsonManager__toJson(&v19->fields.masterInfo->obj, 0, 0, 0),
        v21 = RequestBase__PackToMessagePack(request, v20, 0),
        v22 = CatAndMouseGame__CatGame5Bytes(v21, 0),
        v23 = System_Convert__ToBase64String(v22, 0),
        RequestBase__addField_44302832(request, (System_String_o *)StringLiteral_21472/*"masterInfo"*/, v23, 0),
        (items = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.items) == 0) )
  {
LABEL_51:
    sub_1C3E7C0(v12, v13);
  }
  if ( items[1].monitor )
  {
    v25 = WarBoardData___c_TypeInfo;
    if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
      v25 = WarBoardData___c_TypeInfo;
    }
    v26 = (System_String_o *)StringLiteral_811/*","*/;
    v27 = (System_String_o *)StringLiteral_16026/*"[{0}]"*/;
    _9__156_1 = (System_Func_object__object__o *)v25->static_fields->__9__156_1;
    if ( !_9__156_1 )
    {
      if ( !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25);
        v25 = WarBoardData___c_TypeInfo;
      }
      v33 = (Il2CppObject *)v25->static_fields->__9;
      _9__156_1 = (System_Func_object__object__o *)sub_1C3E7B0(System_Func_WarBoardItemData__string__TypeInfo);
      System_Func_object__object____ctor(_9__156_1, v33, Method_WarBoardData___c__SetRequest_b__156_1__, 0);
      v34 = WarBoardData___c_TypeInfo->static_fields;
      v34->__9__156_1 = (struct System_Func_WarBoardItemData__string__o *)_9__156_1;
      sub_1C3E508((CGThumbnailListItem_o *)&v34->__9__156_1, (int32_t)_9__156_1, v35, v36);
    }
    v37 = System_Linq_Enumerable__Select_object__object_(
            items,
            (System_Func_TSource__TResult__o *)_9__156_1,
            (const MethodInfo_3130218 *)Method_System_Linq_Enumerable_Select_WarBoardItemData__string___);
    v38 = WarBoardData___c_TypeInfo;
    v39 = (System_Collections_Generic_IEnumerable_TSource__o *)v37;
    if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
      v38 = WarBoardData___c_TypeInfo;
    }
    _9__156_2 = (System_Func_object__bool__o *)v38->static_fields->__9__156_2;
    if ( !_9__156_2 )
    {
      if ( !v38->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v38);
        v38 = WarBoardData___c_TypeInfo;
      }
      v41 = (Il2CppObject *)v38->static_fields->__9;
      _9__156_2 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_string__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__156_2, v41, Method_WarBoardData___c__SetRequest_b__156_2__, 0);
      v42 = WarBoardData___c_TypeInfo->static_fields;
      v42->__9__156_2 = (struct System_Func_string__bool__o *)_9__156_2;
      sub_1C3E508((CGThumbnailListItem_o *)&v42->__9__156_2, (int32_t)_9__156_2, v43, v44);
    }
    v45 = System_Linq_Enumerable__Where_object_(
            v39,
            (System_Func_TSource__bool__o *)_9__156_2,
            (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_string___);
    v46 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                   v45,
                                   (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_string___);
    v47 = (Il2CppObject *)System_String__Join(v26, v46, 0);
    v48 = (Il2CppObject *)System_String__Format(v27, v47, 0);
    v49 = RequestBase__PackToMessagePack(request, v48, 0);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v50 = CatAndMouseGame__CatGame5Bytes(v49, 0);
    v31 = System_Convert_TypeInfo;
    v32 = v50;
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
LABEL_40:
      j_il2cpp_runtime_class_init_0(v31);
  }
  else
  {
    v29 = RequestBase__PackToMessagePack(request, (Il2CppObject *)StringLiteral_22353/*"null"*/, 0);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v30 = CatAndMouseGame__CatGame5Bytes(v29, 0);
    v31 = System_Convert_TypeInfo;
    v32 = v30;
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      goto LABEL_40;
  }
  v51 = System_Convert__ToBase64String(v32, 0);
  RequestBase__addField_44302832(request, (System_String_o *)StringLiteral_19819/*"getItemInfo"*/, v51, 0);
  v52 = this->fields.serverData;
  if ( !v52 )
    goto LABEL_51;
  v53 = &v52->fields.wallInfo->obj;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v54 = (Il2CppObject *)JsonManager__toJson(v53, 0, 0, 0);
  v55 = RequestBase__PackToMessagePack(request, v54, 0);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v56 = CatAndMouseGame__CatGame5Bytes(v55, 0);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v57 = System_Convert__ToBase64String(v56, 0);
  RequestBase__addField_44302832(request, (System_String_o *)StringLiteral_24744/*"wallInfo"*/, v57, 0);
  v58 = this->fields.serverData;
  if ( !v58 )
    goto LABEL_51;
  v59 = (Il2CppObject *)JsonManager__toJson(&v58->fields.squareIndexInfo->obj, 0, 0, 0);
  v60 = RequestBase__PackToMessagePack(request, v59, 0);
  v61 = CatAndMouseGame__CatGame5Bytes(v60, 0);
  v62 = System_Convert__ToBase64String(v61, 0);
  RequestBase__addField_44302832(request, (System_String_o *)StringLiteral_23648/*"squareIndexInfo"*/, v62, 0);
  v63 = this->fields.serverData;
  if ( !v63 )
    goto LABEL_51;
  v64 = (Il2CppObject *)JsonManager__toJson(&v63->fields.bossBattleInfo->obj, 0, 0, 0);
  v65 = RequestBase__PackToMessagePack(request, v64, 0);
  v66 = CatAndMouseGame__CatGame5Bytes(v65, 0);
  v67 = System_Convert__ToBase64String(v66, 0);
  RequestBase__addField_44302832(request, (System_String_o *)StringLiteral_17368/*"bossBattleInfo"*/, v67, 0);
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
  void *pieceComponent; // x8
  _DWORD *monitor; // x8
  unsigned int v14; // w9
  WarBoardPieceData_o *Piece; // x0
  __int64 v16; // x1
  UnityEngine_Object_o *v17; // x20
  _BOOL8 v18; // x0
  __int64 v19; // x1
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C547B6 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&WarBoardControlUiDataComponent_TypeInfo);
    byte_4C547B6 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  listUiData = (System_Collections_Generic_List_object__o *)this->fields.listUiData;
  if ( !listUiData )
    sub_1C3E7C0(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    listUiData,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v21,
           (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__);
    if ( !v4 )
      break;
    current = v21.fields._current;
    if ( !v21.fields._current )
      sub_1C3E7C0(v4, v5);
    klass_low = LODWORD(v21.fields._current[1].klass);
    if ( (klass_low & 0x80000000) != 0 )
    {
      monitor = v21.fields._current[1].monitor;
      if ( !monitor )
        sub_1C3E7C0(v4, klass_low);
      v14 = monitor[6];
      if ( !v14 )
        sub_1C3E7C8(v4, klass_low);
      if ( v14 == 1 )
        sub_1C3E7C8(v4, klass_low);
      if ( v14 <= 2 )
        sub_1C3E7C8(v4, klass_low);
      Piece = WarBoardData__GetPiece(this, monitor[8], monitor[9], monitor[10], 1, v7);
      if ( Piece )
      {
        pieceComponent = Piece->fields.pieceComponent;
        if ( !pieceComponent )
          sub_1C3E7C0(Piece, v16);
LABEL_17:
        v17 = (UnityEngine_Object_o *)*((_QWORD *)pieceComponent + 23);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v18 = UnityEngine_Object__op_Equality(v17, 0, 0);
        if ( !v18 )
        {
          if ( !v17 )
            sub_1C3E7C0(v18, v19);
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
          sub_1C3E7C0(Square, v11);
        goto LABEL_17;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__);
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
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Func_bool__o *v12; // x20
  UnityEngine_WaitUntil_o *v13; // x21
  __int64 v14; // x20
  System_Delegate_o **v15; // x21
  System_Delegate_o *v16; // x22
  WarBoardTaskBase_TaskCallback_o *v17; // x23
  System_Delegate_o *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  WarBoardTaskBase_TaskCallback_c *v21; // x1
  Il2CppObject *Instance; // x19
  System_Collections_Generic_Dictionary_int__object__o *v23; // x21
  __int64 v24; // x0
  __int64 v25; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  __int64 v28; // x0

  if ( (byte_4C54796 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__);
    sub_1C3E564(&System_Func_bool__TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C3E564(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__0__);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__1__);
    sub_1C3E564(&WarBoardData___c__DisplayClass154_0_TypeInfo);
    sub_1C3E564(&UnityEngine_WaitUntil_TypeInfo);
    sub_1C3E564(&WarBoardCallbackTask_TypeInfo);
    sub_1C3E564(&WarBoardTaskBase___TypeInfo);
    byte_4C54796 = 1;
  }
  v5 = sub_1C3E7B0(WarBoardData___c__DisplayClass154_0_TypeInfo);
  WarBoardData___c__DisplayClass154_0___ctor((WarBoardData___c__DisplayClass154_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_18;
  *(_QWORD *)(v5 + 24) = consumedPieceActionPointDict;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 24), (int32_t)consumedPieceActionPointDict, v8, v9);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v10, v11);
  v6 = *(System_Collections_Generic_Dictionary_int__object__o **)(v5 + 24);
  if ( !v6 )
    goto LABEL_18;
  if ( System_Collections_Generic_Dictionary_int__object___get_Count(
         v6,
         (const MethodInfo_340C0EC *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__) < 1 )
    return;
  *(_BYTE *)(v5 + 16) = 0;
  v12 = (System_Func_bool__o *)sub_1C3E7B0(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v12,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__0__,
    0);
  v13 = (UnityEngine_WaitUntil_o *)sub_1C3E7B0(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v13, v12, 0);
  v14 = sub_1C3E7B0(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v14, (UnityEngine_CustomYieldInstruction_o *)v13, 0);
  if ( !v14 )
LABEL_18:
    sub_1C3E7C0(v6, v7);
  v15 = (System_Delegate_o **)(v14 + 32);
  v16 = *(System_Delegate_o **)(v14 + 32);
  v17 = (WarBoardTaskBase_TaskCallback_o *)sub_1C3E7B0(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v17,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__1__,
    0);
  v18 = System_Delegate__Combine(v16, (System_Delegate_o *)v17, 0);
  if ( !v18 )
  {
    *v15 = 0;
LABEL_13:
    sub_1C3E508((CGThumbnailListItem_o *)(v14 + 32), (int32_t)v18, v19, v20);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v6 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3E60C(WarBoardTaskBase___TypeInfo, 1);
    if ( v6 )
    {
      v23 = v6;
      v24 = sub_1C3E6A0(v14, v6->klass->_1.element_class);
      if ( !v24 )
      {
        v28 = sub_1C3E7E4();
        sub_1C3E68C(v28, 0);
      }
      if ( !LODWORD(v23->fields._entries) )
        sub_1C3E7C8(v24, v25);
      *(_QWORD *)&v23->fields._count = v14;
      sub_1C3E508((CGThumbnailListItem_o *)&v23->fields._count, v14, v26, v27);
      if ( Instance )
      {
        WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 1, (WarBoardTaskBase_array *)v23, 0);
        return;
      }
    }
    goto LABEL_18;
  }
  v21 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v18->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    *v15 = v18;
    if ( (WarBoardTaskBase_TaskCallback_c *)v18->klass == v21 )
      goto LABEL_13;
  }
  sub_1C3EA80(v18);
}


System_String_o *WarBoardData__ToJson(WarBoardData_o *this, const MethodInfo *method)
{
  Il2CppObject *serverData; // x19

  if ( (byte_4C54797 & 1) == 0 )
  {
    sub_1C3E564(&JsonManager_TypeInfo);
    sub_1C3E564(&string_TypeInfo);
    byte_4C54797 = 1;
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
  __int64 v11; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  System_Object_array *bossBattleInfo; // x21
  System_Func_object__bool__o *v14; // x22
  Il2CppObject *object; // x0
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x5
  __int64 v20; // x6
  __int64 v21; // x7
  System_Collections_Generic_Dictionary_object__object__o *monitor; // x21
  int32_t v23; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C5479F & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_Find_WarBoardBossBattleData___);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_1C3E564(&System_Func_WarBoardBossBattleData__bool__TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass171_0__UpdateBossInfo_b__0__);
    sub_1C3E564(&WarBoardData___c__DisplayClass171_0_TypeInfo);
    byte_4C5479F = 1;
  }
  v9 = (WarBoardData___c__DisplayClass171_0_o *)sub_1C3E7B0(WarBoardData___c__DisplayClass171_0_TypeInfo);
  WarBoardData___c__DisplayClass171_0___ctor(v9, 0);
  if ( !v9 )
    goto LABEL_9;
  v9->fields.bossId = bossId;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_9;
  bossBattleInfo = (System_Object_array *)serverData->fields.bossBattleInfo;
  v14 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardBossBattleData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass171_0__UpdateBossInfo_b__0__,
    0);
  object = BasicHelper__Find_object_(
             bossBattleInfo,
             (System_Func_T__bool__o *)v14,
             (const MethodInfo_30E39DC *)Method_BasicHelper_Find_WarBoardBossBattleData___);
  if ( !object )
    return;
  monitor = (System_Collections_Generic_Dictionary_object__object__o *)object[1].monitor;
  v23 = value;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v16, v17, v18, v19, v20, v21);
  if ( !monitor )
LABEL_9:
    sub_1C3E7C0(v10, v11);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    monitor,
    (Il2CppObject *)key,
    v10,
    (const MethodInfo_34757CC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
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

  if ( (byte_4C547B1 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_WarBoardPieceBaseComponent__TypeInfo);
    sub_1C3E564(&Method_BasicHelper_ForEach_WarBoardPieceBaseComponent___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__WarBoardPieceBaseComponent___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_WarBoardPieceBaseComponent___);
    sub_1C3E564(&System_Func_WarBoardPieceBaseComponent__bool__TypeInfo);
    sub_1C3E564(&System_Func_WarBoardPieceData__WarBoardPieceBaseComponent__TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_0__);
    sub_1C3E564(&Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_1__);
    sub_1C3E564(&Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_2__);
    sub_1C3E564(&WarBoardData___c_TypeInfo);
    byte_4C547B1 = 1;
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
    _9__192_0 = (System_Func_object__object__o *)sub_1C3E7B0(System_Func_WarBoardPieceData__WarBoardPieceBaseComponent__TypeInfo);
    System_Func_object__object____ctor(_9__192_0, v6, Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_0__, 0);
    p__9__192_0 = (CGThumbnailListItem_o *)&WarBoardData___c_TypeInfo->static_fields->__9__192_0;
    p__9__192_0->klass = (CGThumbnailListItem_c *)_9__192_0;
    sub_1C3E508(p__9__192_0, (int32_t)_9__192_0, v8, v9);
  }
  v10 = System_Linq_Enumerable__Select_object__object_(
          pieces,
          (System_Func_TSource__TResult__o *)_9__192_0,
          (const MethodInfo_3130218 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__WarBoardPieceBaseComponent___);
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
    _9__192_1 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardPieceBaseComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__192_1, v14, Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_1__, 0);
    p__9__192_1 = (CGThumbnailListItem_o *)&WarBoardData___c_TypeInfo->static_fields->__9__192_1;
    p__9__192_1->klass = (CGThumbnailListItem_c *)_9__192_1;
    sub_1C3E508(p__9__192_1, (int32_t)_9__192_1, v16, v17);
  }
  v18 = System_Linq_Enumerable__Where_object_(
          v12,
          (System_Func_TSource__bool__o *)_9__192_1,
          (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_WarBoardPieceBaseComponent___);
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
    _9__192_2 = (System_Action_object__o *)sub_1C3E7B0(System_Action_WarBoardPieceBaseComponent__TypeInfo);
    System_Action_object____ctor(_9__192_2, v22, Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_2__, 0);
    p__9__192_2 = (CGThumbnailListItem_o *)&WarBoardData___c_TypeInfo->static_fields->__9__192_2;
    p__9__192_2->klass = (CGThumbnailListItem_c *)_9__192_2;
    sub_1C3E508(p__9__192_2, (int32_t)_9__192_2, v24, v25);
  }
  BasicHelper__ForEach_object_(
    v20,
    (System_Action_T__o *)_9__192_2,
    (const MethodInfo_30E5A30 *)Method_BasicHelper_ForEach_WarBoardPieceBaseComponent___);
}


void WarBoardData__UpdateCurrentPartyCost(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  System_Collections_Generic_List_long__o *v4; // x21
  const MethodInfo *v5; // x1
  WarBoardPieceData_array *EditableServantPieces; // x0
  int64_t UserServantId_k__BackingField; // x1
  long double v8; // q0
  int max_length; // w8
  WarBoardPieceData_array *v10; // x22
  unsigned int v11; // w23
  WarBoardPieceData_o *v12; // x25
  int32_t version; // w11
  struct System_Int64_array *items; // x9
  _QWORD *v15; // x8
  __int64 size; // x12
  int32_t v17; // w10
  __int64 v18; // x0
  __int64 v19; // x0
  UserServantEntity_array *Entities_43296644; // x0
  WarBoardData___c_c *v21; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x21
  System_Func_object__int__o *_9__143_0; // x22
  Il2CppObject *v24; // x23
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Func_object__bool__o *v30; // x22

  if ( (byte_4C5478E & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Count_UserServantEntity___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Sum_UserServantEntity___);
    sub_1C3E564(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1C3E564(&System_Func_UserServantEntity__int__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_WarBoardData___c__UpdateCurrentPartyCost_b__143_0__);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass143_0__UpdateCurrentPartyCost_b__1__);
    sub_1C3E564(&WarBoardData___c__DisplayClass143_0_TypeInfo);
    sub_1C3E564(&WarBoardData___c_TypeInfo);
    byte_4C5478E = 1;
  }
  v3 = sub_1C3E7B0(WarBoardData___c__DisplayClass143_0_TypeInfo);
  WarBoardData___c__DisplayClass143_0___ctor((WarBoardData___c__DisplayClass143_0_o *)v3, 0);
  v4 = (System_Collections_Generic_List_long__o *)sub_1C3E7B0(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v4,
    (const MethodInfo_379CC40 *)Method_System_Collections_Generic_List_long___ctor__);
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
        sub_1C3E7C8(EditableServantPieces, UserServantId_k__BackingField);
      v12 = v10->m_Items[v11];
      if ( !v12 )
        break;
      if ( !v4 )
        break;
      version = v4->fields._version;
      UserServantId_k__BackingField = v12->fields._UserServantId_k__BackingField;
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
          *(const MethodInfo_379D494 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        v17 = v4->fields._size;
        v15 = Method_System_Collections_Generic_List_long__Add__;
        items = v4->fields._items;
        UserServantId_k__BackingField = v12->fields._UserServantEquipId_k__BackingField;
        ++v4->fields._version;
        if ( !items )
          break;
      }
      else
      {
        v17 = size + 1;
        v4->fields._size = size + 1;
        items->m_Items[size] = UserServantId_k__BackingField;
        UserServantId_k__BackingField = v12->fields._UserServantEquipId_k__BackingField;
        v4->fields._version = version + 2;
      }
      if ( (unsigned int)v17 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v4,
          UserServantId_k__BackingField,
          *(const MethodInfo_379D494 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v4->fields._size = v17 + 1;
        items->m_Items[v17] = UserServantId_k__BackingField;
      }
      max_length = v10->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_17;
    }
LABEL_33:
    sub_1C3E7C0(EditableServantPieces, UserServantId_k__BackingField);
  }
LABEL_17:
  v18 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1C8EC78(v8);
  v19 = *(_QWORD *)(*(_QWORD *)(v18 + 192) + 16LL);
  if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
    v19 = sub_1C8EC78(v8);
  EditableServantPieces = **(WarBoardPieceData_array ***)(v19 + 184);
  if ( !EditableServantPieces )
    goto LABEL_33;
  EditableServantPieces = (WarBoardPieceData_array *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)EditableServantPieces,
                                                       (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !EditableServantPieces )
    goto LABEL_33;
  Entities_43296644 = UserServantMaster__GetEntities_43296644((UserServantMaster_o *)EditableServantPieces, v4, 0);
  v21 = WarBoardData___c_TypeInfo;
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)Entities_43296644;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v21 = WarBoardData___c_TypeInfo;
  }
  _9__143_0 = (System_Func_object__int__o *)v21->static_fields->__9__143_0;
  if ( !_9__143_0 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = WarBoardData___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v21->static_fields->__9;
    _9__143_0 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_UserServantEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__143_0, v24, Method_WarBoardData___c__UpdateCurrentPartyCost_b__143_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__143_0 = (struct System_Func_UserServantEntity__int__o *)_9__143_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__143_0, (int32_t)_9__143_0, v26, v27);
  }
  EditableServantPieces = (WarBoardPieceData_array *)System_Linq_Enumerable__Sum_object_(
                                                       v22,
                                                       (System_Func_TSource__int__o *)_9__143_0,
                                                       (const MethodInfo_31378A0 *)Method_System_Linq_Enumerable_Sum_UserServantEntity___);
  if ( !this )
    goto LABEL_33;
  this->fields._CurrentPartyCost_k__BackingField = (int)EditableServantPieces;
  EditableServantPieces = (WarBoardPieceData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !EditableServantPieces )
    goto LABEL_33;
  EditableServantPieces = (WarBoardPieceData_array *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)EditableServantPieces,
                                                       (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !v3 )
    goto LABEL_33;
  *(_QWORD *)(v3 + 16) = EditableServantPieces;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 16), (int32_t)EditableServantPieces, v28, v29);
  v30 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v30,
    (Il2CppObject *)v3,
    Method_WarBoardData___c__DisplayClass143_0__UpdateCurrentPartyCost_b__1__,
    0);
  this->fields._CurrentMemberCount_k__BackingField = System_Linq_Enumerable__Count_object__51492776(
                                                       v22,
                                                       (System_Func_TSource__bool__o *)v30,
                                                       (const MethodInfo_311B7A8 *)Method_System_Linq_Enumerable_Count_UserServantEntity___);
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
  const MethodInfo *v12; // x1
  struct WarBoardPieceData_array *pieces; // x25
  int max_length; // w8
  unsigned int v15; // w19
  bool v16; // w27
  WarBoardPieceData_o *v17; // x28
  WarBoardManager_TaskList_o *v18; // x29
  char v19; // w2
  const MethodInfo *v20; // x3
  struct WarBoardManager_TaskList_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  struct WarBoardManager_TaskList_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  __int64 v28; // x8
  System_Collections_Generic_List_object__o *v29; // x0
  int32_t ConsumedRecoverDonotActCost_k__BackingField; // w29
  System_Collections_Generic_Dictionary_int__object__o *v31; // x21
  System_Collections_Generic_List_object__o *v32; // x20
  System_Collections_Generic_Dictionary_int__object__o *v33; // x0
  Il2CppObject *v34; // x2
  char v35; // w2
  const MethodInfo *v36; // x3
  struct System_Object_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass **v40; // x8
  Il2CppObject *current; // x28
  WarBoardManager_TaskList_o *v42; // x26
  __int64 v43; // x0
  __int64 v44; // x1
  int monitor; // w25
  Il2CppClass *v46; // x0
  __int64 v47; // x0
  __int64 v48; // x1
  char v49; // w2
  const MethodInfo *v50; // x3
  int monitor_high; // w27
  Il2CppClass *klass; // x0
  Il2CppClass *v53; // x0
  struct WarBoardManager_TaskList_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  Il2CppClass **v57; // x0
  struct WarBoardManager_TaskList_array *v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  Il2CppClass **v61; // x0
  const MethodInfo *v62; // x2
  System_Collections_Generic_IEnumerable_T__o *v63; // x0
  char v64; // w2
  const MethodInfo *v65; // x3
  struct System_Object_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  System_Collections_Generic_List_object__o *v69; // x1
  Il2CppClass **v70; // x0
  WarBoardWaitNonBlockingTaskEnd_o *v71; // x23
  char v72; // w2
  const MethodInfo *v73; // x3
  struct System_Object_array *v74; // x8
  _QWORD *v75; // x9
  __int64 v76; // x10
  Il2CppClass **v77; // x0
  struct WarBoardItemData_array *v78; // x19
  int v79; // w8
  unsigned int v80; // w20
  struct WarBoardWallData_array *walls; // x19
  unsigned __int64 v82; // x24
  __int64 v83; // x20
  char v84; // w2
  const MethodInfo *v85; // x3
  WarBoardWallData_o *v86; // x1
  System_Collections_Generic_List_object__o **v87; // x21
  System_Collections_Generic_IEnumerable_TSource__o *wallInfo; // x22
  System_Func_object__bool__o *v89; // x23
  Il2CppObject *v90; // x0
  Il2CppObject *v91; // x8
  int32_t klass_high; // w1
  System_Collections_Generic_List_object__o *v93; // [xsp+8h] [xbp-B8h]
  WarBoardData_o *v94; // [xsp+10h] [xbp-B0h]
  WarBoardDataEntity_o **v95; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v97; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v98; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4C54793 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData____ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Item__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__get_Current__);
    sub_1C3E564(&System_Func_WarBoardUserWallData__bool__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Count__);
    sub_1C3E564(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C3E564(&WarBoardManager_TaskList_TypeInfo);
    sub_1C3E564(&WarBoardManager_TaskMultiList_TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass151_0__UpdateFromServerData_b__0__);
    sub_1C3E564(&WarBoardData___c__DisplayClass151_0_TypeInfo);
    sub_1C3E564(&WarBoardWaitNonBlockingTaskEnd_TypeInfo);
    byte_4C54793 = 1;
  }
  memset(&v98, 0, sizeof(v98));
  p_serverData = &this->fields.serverData;
  if ( !this->fields.serverData )
    return;
  this->fields.serverData = warBoardDataEntity;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.serverData, (int32_t)warBoardDataEntity, forceUpdate, method);
  v93 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v93,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v7 = (WarBoardManager_TaskMultiList_o *)sub_1C3E7B0(WarBoardManager_TaskMultiList_TypeInfo);
  WarBoardManager_TaskMultiList___ctor(v7, 0);
  v8 = (WarBoardManager_TaskMultiList_o *)sub_1C3E7B0(WarBoardManager_TaskMultiList_TypeInfo);
  WarBoardManager_TaskMultiList___ctor(v8, 0);
  v9 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v9,
    (const MethodInfo_340BA68 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData____ctor__);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList___ctor__);
  pieces = this->fields.pieces;
  v94 = this;
  if ( !pieces )
    goto LABEL_96;
  max_length = pieces->max_length;
  v95 = &this->fields.serverData;
  if ( max_length >= 1 )
  {
    v15 = 0;
    v16 = forceUpdate;
    do
    {
      if ( v15 >= max_length )
        goto LABEL_97;
      v17 = pieces->m_Items[v15];
      v18 = (WarBoardManager_TaskList_o *)sub_1C3E7B0(WarBoardManager_TaskList_TypeInfo);
      WarBoardManager_TaskList___ctor(v18, 0);
      if ( !v17 )
        goto LABEL_96;
      WarBoardPieceData__UpdateFromServerData(
        v17,
        *p_serverData,
        (System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__o *)v10,
        v18,
        v16,
        0);
      if ( !v18 )
        goto LABEL_96;
      if ( v18->fields._size >= 1 )
      {
        if ( v17->fields._isDead_k__BackingField )
        {
          if ( !v8 )
            goto LABEL_96;
          items = v8->fields._items;
          v22 = Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_96;
          size = v8->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v28 = v22[4];
            v29 = (System_Collections_Generic_List_object__o *)v8;
LABEL_23:
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              (Il2CppObject *)v18,
              *(const MethodInfo_37B5460 **)(*(_QWORD *)(v28 + 192) + 112LL));
            goto LABEL_24;
          }
          v24 = &items->obj.klass + size;
          v8->fields._size = size + 1;
        }
        else
        {
          if ( !v7 )
            goto LABEL_96;
          v25 = v7->fields._items;
          v26 = Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__;
          ++v7->fields._version;
          if ( !v25 )
            goto LABEL_96;
          v27 = v7->fields._size;
          if ( (unsigned int)v27 >= LODWORD(v25->max_length) )
          {
            v28 = v26[4];
            v29 = (System_Collections_Generic_List_object__o *)v7;
            goto LABEL_23;
          }
          v24 = &v25->obj.klass + v27;
          v7->fields._size = v27 + 1;
        }
        v24[4] = (Il2CppClass *)v18;
        sub_1C3E508((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v18, v19, v20);
      }
LABEL_24:
      isPlayerGroup = (System_Collections_Generic_List_object__o *)WarBoardPieceData__get_isPlayerGroup(v17, 0);
      if ( ((unsigned __int8)isPlayerGroup & 1) != 0 )
      {
        isPlayerGroup = (System_Collections_Generic_List_object__o *)WarBoardPieceData__get_isMaster(v17, 0);
        if ( ((unsigned __int8)isPlayerGroup & 1) == 0 && v17->fields._IsDispConsumedPieceActionPoint_k__BackingField )
        {
          if ( !v9 )
            goto LABEL_96;
          if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                  v9,
                  v17->fields._ConsumedRecoverDonotActCost_k__BackingField,
                  (const MethodInfo_340C630 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___ContainsKey__) )
          {
            ConsumedRecoverDonotActCost_k__BackingField = v17->fields._ConsumedRecoverDonotActCost_k__BackingField;
            v31 = v9;
            v32 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v32,
              (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
            v33 = v31;
            v34 = (Il2CppObject *)v32;
            v9 = v31;
            p_serverData = v95;
            System_Collections_Generic_Dictionary_int__object___Add(
              v33,
              ConsumedRecoverDonotActCost_k__BackingField,
              v34,
              (const MethodInfo_340C43C *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Add__);
          }
          isPlayerGroup = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                         v9,
                                                                         v17->fields._ConsumedRecoverDonotActCost_k__BackingField,
                                                                         (const MethodInfo_340C39C *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Item__);
          if ( !isPlayerGroup )
            goto LABEL_96;
          v37 = isPlayerGroup->fields._items;
          v38 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
          ++isPlayerGroup->fields._version;
          if ( !v37 )
            goto LABEL_96;
          v39 = isPlayerGroup->fields._size;
          if ( (unsigned int)v39 >= LODWORD(v37->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              isPlayerGroup,
              (Il2CppObject *)v17,
              *(const MethodInfo_37B5460 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
          }
          else
          {
            v40 = &v37->obj.klass + v39;
            isPlayerGroup->fields._size = v39 + 1;
            v40[4] = (Il2CppClass *)v17;
            sub_1C3E508((CGThumbnailListItem_o *)(v40 + 4), (int32_t)v17, v35, v36);
          }
        }
      }
      max_length = pieces->max_length;
    }
    while ( (int)++v15 < max_length );
  }
  if ( !v10 )
    goto LABEL_96;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v97,
    v10,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__GetEnumerator__);
  v98 = v97;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v98,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__MoveNext__) )
  {
    current = v98.fields._current;
    v42 = (WarBoardManager_TaskList_o *)sub_1C3E7B0(WarBoardManager_TaskList_TypeInfo);
    WarBoardManager_TaskList___ctor(v42, 0);
    if ( !current )
      sub_1C3E7C0(v43, v44);
    monitor = (int)current[1].monitor;
    if ( monitor < 0 )
    {
      monitor_high = HIDWORD(current[1].monitor);
      if ( monitor_high >= 1 )
      {
        klass = current[1].klass;
        if ( !klass )
          sub_1C3E7C0(0, v44);
        (*((void (__fastcall **)(Il2CppClass *, _QWORD, _QWORD, WarBoardManager_TaskList_o *, __int64, _QWORD, __int64, _QWORD))klass->_1.image
         + 101))(
          klass,
          (unsigned int)monitor_high,
          0,
          v42,
          0xFFFFFFFFLL,
          0,
          1,
          *((_QWORD *)klass->_1.image + 102));
      }
      v53 = current[1].klass;
      if ( !v53 )
        sub_1C3E7C0(0, v44);
      v47 = (*((__int64 (**)(void))v53->_1.image + 103))();
    }
    else
    {
      v46 = current[1].klass;
      if ( !v46 )
        sub_1C3E7C0(0, v44);
      v47 = (*((__int64 (__fastcall **)(Il2CppClass *, _QWORD, _QWORD, WarBoardManager_TaskList_o *, __int64, _QWORD, __int64, _QWORD))v46->_1.image
             + 101))(
              v46,
              HIDWORD(current[1].monitor),
              0,
              v42,
              0xFFFFFFFFLL,
              0,
              1,
              *((_QWORD *)v46->_1.image + 102));
    }
    if ( !v42 )
      sub_1C3E7C0(v47, v48);
    if ( v42->fields._size >= 1 )
    {
      if ( monitor < 0 )
      {
        if ( !v8 )
          sub_1C3E7C0(v47, v48);
        v58 = v8->fields._items;
        v59 = Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__;
        ++v8->fields._version;
        if ( !v58 )
          sub_1C3E7C0(v47, v48);
        v60 = v8->fields._size;
        if ( (unsigned int)v60 >= LODWORD(v58->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)v8,
            (Il2CppObject *)v42,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
        }
        else
        {
          v61 = &v58->obj.klass + v60;
          v8->fields._size = v60 + 1;
          v61[4] = (Il2CppClass *)v42;
          sub_1C3E508((CGThumbnailListItem_o *)(v61 + 4), (int32_t)v42, v49, v50);
        }
      }
      else
      {
        if ( !v7 )
          sub_1C3E7C0(v47, v48);
        v54 = v7->fields._items;
        v55 = Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__;
        ++v7->fields._version;
        if ( !v54 )
          sub_1C3E7C0(v47, v48);
        v56 = v7->fields._size;
        if ( (unsigned int)v56 >= LODWORD(v54->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)v7,
            (Il2CppObject *)v42,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
        }
        else
        {
          v57 = &v54->obj.klass + v56;
          v7->fields._size = v56 + 1;
          v57[4] = (Il2CppClass *)v42;
          sub_1C3E508((CGThumbnailListItem_o *)(v57 + 4), (int32_t)v42, v49, v50);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v98,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__Dispose__);
  if ( !v9 )
    goto LABEL_96;
  isPlayerGroup = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Count(
                                                                 v9,
                                                                 (const MethodInfo_340C0EC *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__);
  if ( (int)isPlayerGroup >= 1 )
    WarBoardData__ShowConsumedPieceActionPointPopup(
      v94,
      (System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___o *)v9,
      v62);
  if ( !v7 )
    goto LABEL_96;
  isPlayerGroup = (System_Collections_Generic_List_object__o *)WarBoardManager_TaskMultiList__SortedFlatted(v7, 0);
  if ( !v93 )
    goto LABEL_96;
  System_Collections_Generic_List_object___AddRange(
    v93,
    (System_Collections_Generic_IEnumerable_T__o *)isPlayerGroup,
    (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( !v8 )
    goto LABEL_96;
  v63 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager_TaskMultiList__SortedFlatted(v8, 0);
  System_Collections_Generic_List_object___AddRange(
    v93,
    v63,
    (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( v93->fields._size >= 1 )
  {
    isPlayerGroup = (System_Collections_Generic_List_object__o *)WarBoardData__CreateEventBossUIDataTask(
                                                                   (WarBoardData_o *)isPlayerGroup,
                                                                   v12);
    v66 = v93->fields._items;
    v67 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v93->fields._version;
    if ( !v66 )
      goto LABEL_96;
    v68 = v93->fields._size;
    v69 = isPlayerGroup;
    if ( (unsigned int)v68 >= LODWORD(v66->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v93,
        (Il2CppObject *)isPlayerGroup,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
    }
    else
    {
      v70 = &v66->obj.klass + v68;
      v93->fields._size = v68 + 1;
      v70[4] = (Il2CppClass *)v69;
      sub_1C3E508((CGThumbnailListItem_o *)(v70 + 4), (int32_t)v69, v64, v65);
    }
    v71 = (WarBoardWaitNonBlockingTaskEnd_o *)sub_1C3E7B0(WarBoardWaitNonBlockingTaskEnd_TypeInfo);
    WarBoardWaitNonBlockingTaskEnd___ctor(v71, 0);
    v74 = v93->fields._items;
    v75 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v93->fields._version;
    if ( !v74 )
      goto LABEL_96;
    v76 = v93->fields._size;
    if ( (unsigned int)v76 >= LODWORD(v74->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v93,
        (Il2CppObject *)v71,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
    }
    else
    {
      v77 = &v74->obj.klass + v76;
      v93->fields._size = v76 + 1;
      v77[4] = (Il2CppClass *)v71;
      sub_1C3E508((CGThumbnailListItem_o *)(v77 + 4), (int32_t)v71, v72, v73);
    }
    isPlayerGroup = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !isPlayerGroup )
      goto LABEL_96;
    WarBoardManager__InsertTask_38107480(
      (WarBoardManager_o *)isPlayerGroup,
      0,
      (System_Collections_Generic_List_WarBoardTaskBase__o *)v93,
      0);
  }
  v78 = v94->fields.items;
  if ( !v78 )
    goto LABEL_96;
  v79 = v78->max_length;
  if ( v79 >= 1 )
  {
    v80 = 0;
    while ( v80 < v79 )
    {
      isPlayerGroup = (System_Collections_Generic_List_object__o *)v78->m_Items[v80];
      if ( !isPlayerGroup )
        goto LABEL_96;
      WarBoardItemData__UpdateFromServerData((WarBoardItemData_o *)isPlayerGroup, *v95, 0);
      v79 = v78->max_length;
      if ( (int)++v80 >= v79 )
        goto LABEL_84;
    }
LABEL_97:
    sub_1C3E7C8(isPlayerGroup, v12);
  }
LABEL_84:
  walls = v94->fields.walls;
  if ( !walls )
LABEL_96:
    sub_1C3E7C0(isPlayerGroup, v12);
  if ( SLODWORD(walls->max_length) >= 1 )
  {
    v82 = 0;
    while ( 1 )
    {
      v83 = sub_1C3E7B0(WarBoardData___c__DisplayClass151_0_TypeInfo);
      WarBoardData___c__DisplayClass151_0___ctor((WarBoardData___c__DisplayClass151_0_o *)v83, 0);
      if ( v82 >= LODWORD(walls->max_length) )
        goto LABEL_97;
      if ( !v83 )
        goto LABEL_96;
      v86 = walls->m_Items[v82];
      *(_QWORD *)(v83 + 16) = v86;
      v87 = (System_Collections_Generic_List_object__o **)(v83 + 16);
      sub_1C3E508((CGThumbnailListItem_o *)(v83 + 16), (int32_t)v86, v84, v85);
      if ( !warBoardDataEntity )
        goto LABEL_96;
      wallInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEntity->fields.wallInfo;
      v89 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_WarBoardUserWallData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v89,
        (Il2CppObject *)v83,
        Method_WarBoardData___c__DisplayClass151_0__UpdateFromServerData_b__0__,
        0);
      v90 = System_Linq_Enumerable__FirstOrDefault_object__51525108(
              wallInfo,
              (System_Func_TSource__bool__o *)v89,
              (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
      if ( v90 )
      {
        v91 = v90;
        isPlayerGroup = *v87;
        if ( !*v87 )
          goto LABEL_96;
        klass_high = HIDWORD(v91[1].klass);
        if ( isPlayerGroup->fields._size > klass_high )
          WarBoardWallData__SetBreakPoint((WarBoardWallData_o *)isPlayerGroup, klass_high, 0);
      }
      if ( (__int64)++v82 >= SLODWORD(walls->max_length) )
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
    sub_1C3E7C0(this, 0);
  v4 = WarBoardData_BattleParticipantInfo__ToUniqueIndexArray(participantInfo, 0);
  this->fields.latestBattlePieceUniqueIndexes = v4;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.latestBattlePieceUniqueIndexes, (int32_t)v4, v5, v6);
}


void WarBoardData__UpdateLatestPieceActionSquareIndexes(
        WarBoardData_o *this,
        int32_t fromSquareIndex,
        int32_t toSquareIndex,
        const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int v11; // w8

  if ( (byte_4C547A3 & 1) == 0 )
  {
    sub_1C3E564(&int___TypeInfo);
    byte_4C547A3 = 1;
  }
  v7 = sub_1C3E60C(int___TypeInfo, 2);
  if ( !v7 )
    sub_1C3E7C0(0, v8);
  v11 = *(_DWORD *)(v7 + 24);
  if ( !v11 || (*(_DWORD *)(v7 + 32) = fromSquareIndex, v11 == 1) )
    sub_1C3E7C8(v7, v7);
  *(_DWORD *)(v7 + 36) = toSquareIndex;
  this->fields.latestPieceActionSquareIndexes = (struct System_Int32_array *)v7;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.latestPieceActionSquareIndexes, v7, v9, v10);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  System_Object_array *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  CGThumbnailListItem_o *p_condSquares; // x19
  System_Collections_Generic_IEnumerable_T__o *condSquares; // t1
  System_Collections_Generic_List_object__o *v20; // x21
  System_Object_array *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_4C54787 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardSquareData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardSquareData__Remove__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardSquareData___ctor___78154440);
    sub_1C3E564(&System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
    byte_4C54787 = 1;
  }
  squares = (System_Collections_Generic_IEnumerable_T__o *)this->fields.squares;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
  System_Collections_Generic_List_object____ctor_58412372(
    v6,
    squares,
    (const MethodInfo_37B4D54 *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor___78154440);
  if ( !v6 )
    goto LABEL_10;
  items = v6->fields._items;
  v12 = Method_System_Collections_Generic_List_WarBoardSquareData__Add__;
  ++v6->fields._version;
  if ( !items )
    goto LABEL_10;
  size = v6->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)square,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v14[4] = (Il2CppClass *)square;
    sub_1C3E508((CGThumbnailListItem_o *)(v14 + 4), (int32_t)square, v9, v10);
  }
  v15 = System_Collections_Generic_List_object___ToArray(
          v6,
          (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  this->fields.squares = (struct WarBoardSquareData_array *)v15;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.squares, (int32_t)v15, v16, v17);
  condSquares = (System_Collections_Generic_IEnumerable_T__o *)this->fields.condSquares;
  p_condSquares = (CGThumbnailListItem_o *)&this->fields.condSquares;
  v20 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
  System_Collections_Generic_List_object____ctor_58412372(
    v20,
    condSquares,
    (const MethodInfo_37B4D54 *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor___78154440);
  if ( !v20 )
LABEL_10:
    sub_1C3E7C0(v7, v8);
  System_Collections_Generic_List_object___Remove(
    v20,
    (Il2CppObject *)square,
    (const MethodInfo_37B6988 *)Method_System_Collections_Generic_List_WarBoardSquareData__Remove__);
  v21 = System_Collections_Generic_List_object___ToArray(
          v20,
          (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  p_condSquares->klass = (CGThumbnailListItem_c *)v21;
  sub_1C3E508(p_condSquares, (int32_t)v21, v22, v23);
}


void WarBoardData__UpdateUiData(
        WarBoardData_o *this,
        int32_t squareIndex,
        System_String_array *setKeys,
        const MethodInfo *method)
{
  Il2CppObject *UiData; // x0
  Il2CppObject *v8; // x1
  int max_length; // w8
  WarBoardUiData_o *v10; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppClass *klass; // x8
  _QWORD *v14; // x9
  __int64 monitor_low; // x10
  __int64 v16; // x8

  if ( (byte_4C547B4 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardUiData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardUiData__Remove__);
    sub_1C3E564(&WarBoardUiData_TypeInfo);
    byte_4C547B4 = 1;
  }
  UiData = (Il2CppObject *)WarBoardData__GetUiData(this, squareIndex, (const MethodInfo *)setKeys);
  if ( !setKeys )
    goto LABEL_16;
  max_length = setKeys->max_length;
  v8 = UiData;
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
        v8,
        (const MethodInfo_37B6988 *)Method_System_Collections_Generic_List_WarBoardUiData__Remove__);
      return;
    }
LABEL_16:
    sub_1C3E7C0(UiData, v8);
  }
  if ( max_length )
  {
    v10 = (WarBoardUiData_o *)sub_1C3E7B0(WarBoardUiData_TypeInfo);
    WarBoardUiData___ctor_38212140(v10, squareIndex, setKeys, 0);
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
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v16 = (__int64)klass + 8 * monitor_low;
      LODWORD(UiData[1].monitor) = monitor_low + 1;
      *(_QWORD *)(v16 + 32) = v10;
      sub_1C3E508((CGThumbnailListItem_o *)(v16 + 32), (int32_t)v10, v11, v12);
    }
  }
}


void WarBoardData__UpdateUiData_38020056(
        WarBoardData_o *this,
        System_Int32_array *pieceIndex,
        System_String_array *setKeys,
        const MethodInfo *method)
{
  Il2CppObject *UiData_38019464; // x0
  Il2CppObject *v8; // x1
  int max_length; // w8
  WarBoardUiData_o *v10; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppClass *klass; // x8
  _QWORD *v14; // x9
  __int64 monitor_low; // x10
  __int64 v16; // x8

  if ( (byte_4C547B5 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardUiData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardUiData__Remove__);
    sub_1C3E564(&WarBoardUiData_TypeInfo);
    byte_4C547B5 = 1;
  }
  UiData_38019464 = (Il2CppObject *)WarBoardData__GetUiData_38019464(this, pieceIndex, (const MethodInfo *)setKeys);
  if ( !setKeys )
    goto LABEL_16;
  max_length = setKeys->max_length;
  v8 = UiData_38019464;
  if ( UiData_38019464 )
  {
    if ( max_length )
    {
      WarBoardUiData__SetKeys((WarBoardUiData_o *)UiData_38019464, setKeys, 0);
      return;
    }
    UiData_38019464 = (Il2CppObject *)this->fields.listUiData;
    if ( UiData_38019464 )
    {
      System_Collections_Generic_List_object___Remove(
        (System_Collections_Generic_List_object__o *)UiData_38019464,
        v8,
        (const MethodInfo_37B6988 *)Method_System_Collections_Generic_List_WarBoardUiData__Remove__);
      return;
    }
LABEL_16:
    sub_1C3E7C0(UiData_38019464, v8);
  }
  if ( max_length )
  {
    v10 = (WarBoardUiData_o *)sub_1C3E7B0(WarBoardUiData_TypeInfo);
    WarBoardUiData___ctor_38212212(v10, pieceIndex, setKeys, 0);
    UiData_38019464 = (Il2CppObject *)this->fields.listUiData;
    if ( !UiData_38019464 )
      goto LABEL_16;
    klass = UiData_38019464[1].klass;
    v14 = Method_System_Collections_Generic_List_WarBoardUiData__Add__;
    ++HIDWORD(UiData_38019464[1].monitor);
    if ( !klass )
      goto LABEL_16;
    monitor_low = SLODWORD(UiData_38019464[1].monitor);
    if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)UiData_38019464,
        (Il2CppObject *)v10,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v16 = (__int64)klass + 8 * monitor_low;
      LODWORD(UiData_38019464[1].monitor) = monitor_low + 1;
      *(_QWORD *)(v16 + 32) = v10;
      sub_1C3E508((CGThumbnailListItem_o *)(v16 + 32), (int32_t)v10, v11, v12);
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

  if ( (byte_4C54760 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Array_Find_WarBoardPieceData___);
    sub_1C3E564(&System_Predicate_WarBoardPieceData__TypeInfo);
    sub_1C3E564(&Method_WarBoardData___c__get_PlayerMasterUserEquipId_b__62_0__);
    sub_1C3E564(&WarBoardData___c_TypeInfo);
    byte_4C54760 = 1;
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
    _9__62_0 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_WarBoardPieceData__TypeInfo);
    System_Predicate_object____ctor(_9__62_0, v6, Method_WarBoardData___c__get_PlayerMasterUserEquipId_b__62_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__62_0 = (struct System_Predicate_WarBoardPieceData__o *)_9__62_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__62_0, (int32_t)_9__62_0, v8, v9);
  }
  result = (int64_t)System_Array__Find_object_(
                      pieces,
                      (System_Predicate_T__o *)_9__62_0,
                      (const MethodInfo_31FEA98 *)Method_System_Array_Find_WarBoardPieceData___);
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
    sub_1C3E7C0(this, method);
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
  sub_1C3E508(
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)v9, v10, v11);
}


void WarBoardData_BattleParticipantInfo___ctor_38170088(
        WarBoardData_BattleParticipantInfo_o *this,
        System_UInt32_array *uniqueIndexArray,
        const MethodInfo *method)
{
  __int64 v5; // x21
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  void *monitor; // x1
  System_Func_T__TResult__o *v11; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  System_Object_array *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C548C2 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_uint__WarBoardPieceData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_1C3E564(&System_Func_uint__WarBoardPieceData__TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C3E564(&Method_WarBoardData_BattleParticipantInfo___c__DisplayClass13_0___ctor_b__0__);
    sub_1C3E564(&WarBoardData_BattleParticipantInfo___c__DisplayClass13_0_TypeInfo);
    byte_4C548C2 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v5 = sub_1C3E7B0(WarBoardData_BattleParticipantInfo___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !uniqueIndexArray )
    goto LABEL_9;
  if ( SLODWORD(uniqueIndexArray->max_length) > 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance && v5 )
    {
      monitor = Instance[27].monitor;
      *(_QWORD *)(v5 + 16) = monitor;
      sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)monitor, v8, v9);
      v11 = (System_Func_T__TResult__o *)sub_1C3E7B0(System_Func_uint__WarBoardPieceData__TypeInfo);
      System_Func_uint__object____ctor(
        v11,
        (Il2CppObject *)v5,
        Method_WarBoardData_BattleParticipantInfo___c__DisplayClass13_0___ctor_b__0__,
        0);
      v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_uint__object_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)uniqueIndexArray,
                                                                   (System_Func_TSource__TResult__o *)v11,
                                                                   (const MethodInfo_3131D1C *)Method_System_Linq_Enumerable_Select_uint__WarBoardPieceData___);
      v13 = System_Linq_Enumerable__ToArray_object_(
              v12,
              (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
      this->fields._Participants_k__BackingField = (struct WarBoardPieceData_array *)v13;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)v13, v14, v15);
      return;
    }
LABEL_9:
    sub_1C3E7C0(Instance, v7);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *v17; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  Il2CppClass **v20; // x0
  il2cpp_array_size_t stageNpcMaster; // x8
  WarBoardPieceData_array *v22; // x20
  unsigned __int64 v23; // x23
  WarBoardPieceData_o **p_npcEntityDict; // x25
  WarBoardPieceData_o *v25; // x21
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Object_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  Il2CppClass **v31; // x0

  if ( (byte_4C548C4 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardPieceData__Contains__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C548C4 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( !v6 )
    goto LABEL_31;
  items = v6->fields._items;
  v12 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
  ++v6->fields._version;
  if ( !items )
    goto LABEL_31;
  size = v6->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)attackPieceData,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v14[4] = (Il2CppClass *)attackPieceData;
    sub_1C3E508((CGThumbnailListItem_o *)(v14 + 4), (int32_t)attackPieceData, v9, v10);
  }
  v17 = v6->fields._items;
  v18 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
  ++v6->fields._version;
  if ( !v17 )
    goto LABEL_31;
  v19 = v6->fields._size;
  if ( (unsigned int)v19 >= LODWORD(v17->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)targetPieceData,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &v17->obj.klass + v19;
    v6->fields._size = v19 + 1;
    v20[4] = (Il2CppClass *)targetPieceData;
    sub_1C3E508((CGThumbnailListItem_o *)(v20 + 4), (int32_t)targetPieceData, v15, v16);
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1C3E7C0(Instance, v8);
  }
  stageNpcMaster = (il2cpp_array_size_t)Instance->fields.stageNpcMaster;
  v22 = (WarBoardPieceData_array *)Instance;
  if ( (int)stageNpcMaster >= 1 )
  {
    v23 = 0;
    p_npcEntityDict = (WarBoardPieceData_o **)&Instance->fields.npcEntityDict;
    do
    {
      if ( v23 >= (unsigned int)stageNpcMaster )
        sub_1C3E7C8(Instance, v8);
      v25 = p_npcEntityDict[v23];
      Instance = (WarBoardData_o *)System_Collections_Generic_List_object___Contains(
                                     v6,
                                     (Il2CppObject *)v25,
                                     (const MethodInfo_37B57F0 *)Method_System_Collections_Generic_List_WarBoardPieceData__Contains__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !v25 )
          goto LABEL_31;
        if ( v25->fields._type_k__BackingField != 1 )
        {
          Instance = (WarBoardData_o *)v25->fields._battleServant_k__BackingField;
          if ( !Instance
            || (Instance = (WarBoardData_o *)BattleServantData__HasAvailableWarBoardNotAttackedBuff(
                                               (BattleServantData_o *)Instance,
                                               0),
                ((unsigned __int8)Instance & 1) == 0) )
          {
            v28 = v6->fields._items;
            v29 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
            ++v6->fields._version;
            if ( !v28 )
              goto LABEL_31;
            v30 = v6->fields._size;
            if ( (unsigned int)v30 >= LODWORD(v28->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v6,
                (Il2CppObject *)v25,
                *(const MethodInfo_37B5460 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
            }
            else
            {
              v31 = &v28->obj.klass + v30;
              v6->fields._size = v30 + 1;
              v31[4] = (Il2CppClass *)v25;
              sub_1C3E508((CGThumbnailListItem_o *)(v31 + 4), (int32_t)v25, v26, v27);
            }
          }
        }
      }
      LODWORD(stageNpcMaster) = v22->max_length;
      ++v23;
    }
    while ( (__int64)v23 < (int)stageNpcMaster );
  }
  return (WarBoardPieceData_array *)System_Collections_Generic_List_object___ToArray(
                                      v6,
                                      (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
}


WarBoardData_BattleParticipantInfo_o *WarBoardData_BattleParticipantInfo__LoadFromUniqueIndex(
        System_UInt32_array *uniqueIndexArray,
        const MethodInfo *method)
{
  WarBoardData_BattleParticipantInfo_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4C548C5 & 1) == 0 )
  {
    sub_1C3E564(&WarBoardData_BattleParticipantInfo_TypeInfo);
    byte_4C548C5 = 1;
  }
  v3 = (WarBoardData_BattleParticipantInfo_o *)sub_1C3E7B0(WarBoardData_BattleParticipantInfo_TypeInfo);
  WarBoardData_BattleParticipantInfo___ctor_38170088(v3, uniqueIndexArray, v4);
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

  if ( (byte_4C548C3 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__uint___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_uint___);
    sub_1C3E564(&System_Func_WarBoardPieceData__uint__TypeInfo);
    sub_1C3E564(&Method_WarBoardData_BattleParticipantInfo___c__ToUniqueIndexArray_b__14_0__);
    sub_1C3E564(&WarBoardData_BattleParticipantInfo___c_TypeInfo);
    byte_4C548C3 = 1;
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
    _9__14_0 = (System_Func_T__TResult__o *)sub_1C3E7B0(System_Func_WarBoardPieceData__uint__TypeInfo);
    System_Func_object__uint____ctor(
      _9__14_0,
      v6,
      Method_WarBoardData_BattleParticipantInfo___c__ToUniqueIndexArray_b__14_0__,
      0);
    static_fields = WarBoardData_BattleParticipantInfo___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Func_WarBoardPieceData__uint__o *)_9__14_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__14_0, (int32_t)_9__14_0, v8, v9);
  }
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__uint_(
                                                               Participants_k__BackingField,
                                                               (System_Func_TSource__TResult__o *)_9__14_0,
                                                               (const MethodInfo_3130E58 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__uint___);
  return System_Linq_Enumerable__ToArray_uint_(
           v10,
           (const MethodInfo_31392F8 *)Method_System_Linq_Enumerable_ToArray_uint___);
}


WarBoardPieceData_o *WarBoardData_BattleParticipantInfo__get_Attacker(
        WarBoardData_BattleParticipantInfo_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceData_array *Participants_k__BackingField; // x8

  Participants_k__BackingField = this->fields._Participants_k__BackingField;
  if ( !Participants_k__BackingField )
    sub_1C3E7C0(this, method);
  if ( !LODWORD(Participants_k__BackingField->max_length) )
    sub_1C3E7C8(this, method);
  return Participants_k__BackingField->m_Items[0];
}


WarBoardPieceData_o *WarBoardData_BattleParticipantInfo__get_Defender(
        WarBoardData_BattleParticipantInfo_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceData_array *Participants_k__BackingField; // x8

  Participants_k__BackingField = this->fields._Participants_k__BackingField;
  if ( !Participants_k__BackingField )
    sub_1C3E7C0(this, method);
  if ( LODWORD(Participants_k__BackingField->max_length) <= 1 )
    sub_1C3E7C8(this, method);
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

  if ( (byte_4C548C6 & 1) == 0 )
  {
    sub_1C3E564(&WarBoardData_BattleParticipantInfo___c_TypeInfo);
    byte_4C548C6 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(WarBoardData_BattleParticipantInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardData_BattleParticipantInfo___c_TypeInfo->static_fields->__9 = (struct WarBoardData_BattleParticipantInfo___c_o *)v1;
  sub_1C3E508(
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(0, *(_QWORD *)&x);
  return WarBoardData__GetPiece_37931252(warBoardData, x, 0, 0);
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.pieceSaves, 0, v3, v4);
  this->fields.itemSaves = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.itemSaves, 0, v5, v6);
  this->fields.treasureSaves = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.treasureSaves, 0, v7, v8);
  this->fields.wallSaves = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.wallSaves, 0, v9, v10);
  this->fields.squareSaves = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.squareSaves, 0, v11, v12);
  if ( !byte_4C5059A )
  {
    sub_1C3E564(&UnityEngine_Vector2_TypeInfo);
    byte_4C5059A = 1;
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.eventSaves, 0, v13, v14);
  this->fields.winCondId = -1;
  this->fields.latestBattlePieceUniqueIndexes = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.latestBattlePieceUniqueIndexes, 0, v16, v17);
  this->fields.prevCondSaves = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.prevCondSaves, 0, v18, v19);
  this->fields.reinforcementsSaves = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.reinforcementsSaves, 0, v20, v21);
  this->fields.playedReinforcements = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.playedReinforcements, 0, v22, v23);
  this->fields.uiDataSaves = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.uiDataSaves, 0, v24, v25);
  this->fields.bgAnimationInfo = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.bgAnimationInfo, 0, v26, v27);
  this->fields.squareIndexInfo = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.squareIndexInfo, 0, v28, v29);
  this->fields.bossBattleInfo = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.bossBattleInfo, 0, v30, v31);
}


void WarBoardData_WarBoardLocalSaveData___ctor_38165396(
        WarBoardData_WarBoardLocalSaveData_o *this,
        WarBoardData_o *warBoardData,
        const MethodInfo *method)
{
  __int64 GutsCount; // x0
  __int64 v6; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  struct WarBoardPieceData_array *pieces; // x8
  il2cpp_array_size_t max_length; // x22
  struct WarBoardPieceData_SaveData_array *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  unsigned __int64 v13; // x24
  __int64 v14; // x26
  __int64 v15; // x27
  struct WarBoardPieceData_array *v16; // x8
  unsigned int *pieceSaves; // x28
  WarBoardPieceData_o *v18; // x23
  WarBoardPieceData_SaveData_o *v19; // x22
  const MethodInfo *v20; // x2
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct WarBoardItemData_array *items; // x8
  il2cpp_array_size_t v24; // x22
  struct WarBoardItemData_SaveData_array *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  unsigned __int64 v28; // x24
  __int64 v29; // x26
  __int64 v30; // x27
  struct WarBoardItemData_array *v31; // x8
  unsigned int *itemSaves; // x28
  WarBoardItemData_o *v33; // x23
  WarBoardItemData_SaveData_o *v34; // x22
  const MethodInfo *v35; // x2
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct WarBoardTreasureData_array *treasures; // x8
  il2cpp_array_size_t v39; // x22
  struct WarBoardTreasureData_SaveData_array *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  unsigned __int64 v43; // x24
  __int64 v44; // x26
  __int64 v45; // x27
  struct WarBoardTreasureData_array *v46; // x8
  unsigned int *treasureSaves; // x28
  WarBoardTreasureData_o *v48; // x23
  WarBoardTreasureData_SaveData_o *v49; // x22
  const MethodInfo *v50; // x2
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  struct WarBoardWallData_array *walls; // x8
  il2cpp_array_size_t v54; // x22
  struct WarBoardWallData_SaveData_array *v55; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  unsigned __int64 v58; // x24
  __int64 v59; // x26
  __int64 v60; // x27
  struct WarBoardWallData_array *v61; // x8
  unsigned int *wallSaves; // x28
  WarBoardWallData_o *v63; // x23
  WarBoardWallData_SaveData_o *v64; // x22
  const MethodInfo *v65; // x2
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  struct WarBoardSquareData_array *squares; // x8
  il2cpp_array_size_t v69; // x22
  struct WarBoardSquareData_SaveData_array *v70; // x0
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  unsigned __int64 v73; // x24
  __int64 v74; // x26
  __int64 v75; // x27
  struct WarBoardSquareData_array *v76; // x8
  unsigned int *squareSaves; // x28
  WarBoardSquareData_o *v78; // x23
  WarBoardSquareData_SaveData_o *v79; // x22
  const MethodInfo *v80; // x2
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  struct UnityEngine_Vector2_o zeroVector; // d0
  struct System_Collections_Generic_List_WarBoardEventData__o *listEvent; // x8
  __int64 size; // x21
  struct WarBoardEventData_SaveData_array *v86; // x0
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  unsigned __int64 v91; // x23
  __int64 v92; // x28
  unsigned int *eventSaves; // x29
  Il2CppObject *Item; // x25
  WarBoardEventData_SaveData_o *v95; // x24
  const MethodInfo *v96; // x2
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  struct System_Int32_array *latestPieceActionSquareIndexes; // x1
  struct System_UInt32_array *latestBattlePieceUniqueIndexes; // x1
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  struct System_Collections_Generic_List_WarBoardPrevCondData__o *listPrevCond; // x8
  __int64 v104; // x21
  struct WarBoardPrevCondData_SaveData_array *v105; // x0
  int32_t v106; // w2
  const MethodInfo *v107; // x3
  unsigned __int64 v108; // x23
  __int64 v109; // x28
  unsigned int *prevCondSaves; // x29
  Il2CppObject *v111; // x25
  WarBoardPrevCondData_SaveData_o *v112; // x24
  const MethodInfo *v113; // x2
  int32_t v114; // w2
  const MethodInfo *v115; // x3
  struct System_Collections_Generic_List_HoldReinforcementsData__o *reinforcementsSaveList; // x8
  __int64 v117; // x21
  struct HoldReinforcementsData_SaveData_array *v118; // x0
  int32_t v119; // w2
  const MethodInfo *v120; // x3
  unsigned __int64 v121; // x23
  __int64 v122; // x28
  unsigned int *reinforcementsSaves; // x29
  Il2CppObject *v124; // x25
  HoldReinforcementsData_SaveData_o *v125; // x24
  const MethodInfo *v126; // x2
  int32_t v127; // w2
  const MethodInfo *v128; // x3
  struct System_Int32_array *v129; // x0
  int32_t v130; // w2
  const MethodInfo *v131; // x3
  struct System_Collections_Generic_List_WarBoardUiData__o *listUiData; // x8
  __int64 v133; // x21
  struct WarBoardUiData_SaveData_array *v134; // x0
  int32_t v135; // w2
  const MethodInfo *v136; // x3
  unsigned __int64 v137; // x23
  __int64 v138; // x28
  unsigned int *uiDataSaves; // x29
  Il2CppObject *v140; // x25
  WarBoardUiData_SaveData_o *v141; // x24
  const MethodInfo *v142; // x2
  int32_t v143; // w2
  const MethodInfo *v144; // x3
  struct WarBoardDataEntity_o *v145; // x8
  int32_t v146; // w22
  struct WarBoardSquareIndexData_SaveData_array *v147; // x0
  int32_t v148; // w2
  const MethodInfo *v149; // x3
  unsigned __int64 v150; // x24
  __int64 v151; // x26
  __int64 v152; // x27
  struct WarBoardDataEntity_o *v153; // x8
  struct WarBoardSquareIndexData_array *squareIndexInfo; // x8
  unsigned int *v155; // x28
  WarBoardSquareIndexData_o *v156; // x23
  WarBoardSquareIndexData_SaveData_o *v157; // x22
  const MethodInfo *v158; // x2
  int32_t v159; // w2
  const MethodInfo *v160; // x3
  struct WarBoardDataEntity_o *v161; // x8
  int32_t v162; // w22
  struct WarBoardBossBattleData_SaveData_array *v163; // x0
  int32_t v164; // w2
  const MethodInfo *v165; // x3
  unsigned __int64 v166; // x24
  __int64 v167; // x26
  __int64 v168; // x27
  struct WarBoardDataEntity_o *v169; // x8
  struct WarBoardBossBattleData_array *bossBattleInfo; // x8
  unsigned int *v171; // x28
  WarBoardBossBattleData_o *v172; // x23
  WarBoardBossBattleData_SaveData_o *v173; // x22
  int32_t v174; // w2
  const MethodInfo *v175; // x3
  int32_t ContinueConsumeType_k__BackingField; // w8
  __int64 v177; // x0

  if ( (byte_4C548C1 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardUiData__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardPrevCondData__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardEventData__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_HoldReinforcementsData__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardEventData__get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardUiData__get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardPrevCondData__get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_List_HoldReinforcementsData__get_Item__);
    sub_1C3E564(&WarBoardTreasureData_SaveData___TypeInfo);
    sub_1C3E564(&WarBoardSquareData_SaveData___TypeInfo);
    sub_1C3E564(&WarBoardSquareIndexData_SaveData___TypeInfo);
    sub_1C3E564(&HoldReinforcementsData_SaveData___TypeInfo);
    sub_1C3E564(&WarBoardItemData_SaveData___TypeInfo);
    sub_1C3E564(&WarBoardWallData_SaveData___TypeInfo);
    sub_1C3E564(&WarBoardPrevCondData_SaveData___TypeInfo);
    sub_1C3E564(&WarBoardEventData_SaveData___TypeInfo);
    sub_1C3E564(&WarBoardUiData_SaveData___TypeInfo);
    sub_1C3E564(&WarBoardPieceData_SaveData___TypeInfo);
    sub_1C3E564(&WarBoardBossBattleData_SaveData___TypeInfo);
    sub_1C3E564(&WarBoardSquareData_SaveData_TypeInfo);
    sub_1C3E564(&WarBoardTreasureData_SaveData_TypeInfo);
    sub_1C3E564(&WarBoardBossBattleData_SaveData_TypeInfo);
    sub_1C3E564(&WarBoardItemData_SaveData_TypeInfo);
    sub_1C3E564(&WarBoardPrevCondData_SaveData_TypeInfo);
    sub_1C3E564(&WarBoardWallData_SaveData_TypeInfo);
    sub_1C3E564(&WarBoardUiData_SaveData_TypeInfo);
    sub_1C3E564(&WarBoardEventData_SaveData_TypeInfo);
    sub_1C3E564(&WarBoardSquareIndexData_SaveData_TypeInfo);
    sub_1C3E564(&HoldReinforcementsData_SaveData_TypeInfo);
    sub_1C3E564(&WarBoardPieceData_SaveData_TypeInfo);
    byte_4C548C1 = 1;
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
  v10 = (struct WarBoardPieceData_SaveData_array *)sub_1C3E60C(
                                                     WarBoardPieceData_SaveData___TypeInfo,
                                                     (unsigned int)max_length);
  this->fields.pieceSaves = v10;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.pieceSaves, (int32_t)v10, v11, v12);
  if ( (int)max_length >= 1 )
  {
    v13 = 0;
    v14 = (unsigned int)max_length;
    v15 = 8;
    while ( 1 )
    {
      v16 = warBoardData->fields.pieces;
      if ( !v16 )
        break;
      if ( v13 >= LODWORD(v16->max_length) )
        goto LABEL_118;
      pieceSaves = (unsigned int *)this->fields.pieceSaves;
      v18 = *(WarBoardPieceData_o **)((char *)&v16->obj.klass + v15 * 4);
      v19 = (WarBoardPieceData_SaveData_o *)sub_1C3E7B0(WarBoardPieceData_SaveData_TypeInfo);
      WarBoardPieceData_SaveData___ctor_38168448(v19, v18, v20);
      if ( !pieceSaves )
        break;
      if ( v19 )
      {
        GutsCount = sub_1C3E6A0(v19, *(_QWORD *)(*(_QWORD *)pieceSaves + 64LL));
        if ( !GutsCount )
        {
LABEL_119:
          v177 = sub_1C3E7E4();
          sub_1C3E68C(v177, 0);
        }
      }
      if ( v13 >= pieceSaves[6] )
LABEL_118:
        sub_1C3E7C8(GutsCount, v6);
      *(_QWORD *)&pieceSaves[v15] = v19;
      sub_1C3E508((CGThumbnailListItem_o *)&pieceSaves[v15], (int32_t)v19, v21, v22);
      ++v13;
      v15 += 2;
      if ( v14 == v13 )
        goto LABEL_15;
    }
LABEL_117:
    sub_1C3E7C0(GutsCount, v6);
  }
LABEL_15:
  items = warBoardData->fields.items;
  if ( !items )
    goto LABEL_117;
  v24 = items->max_length;
  v25 = (struct WarBoardItemData_SaveData_array *)sub_1C3E60C(WarBoardItemData_SaveData___TypeInfo, (unsigned int)v24);
  this->fields.itemSaves = v25;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.itemSaves, (int32_t)v25, v26, v27);
  if ( (int)v24 >= 1 )
  {
    v28 = 0;
    v29 = (unsigned int)v24;
    v30 = 8;
    do
    {
      v31 = warBoardData->fields.items;
      if ( !v31 )
        goto LABEL_117;
      if ( v28 >= LODWORD(v31->max_length) )
        goto LABEL_118;
      itemSaves = (unsigned int *)this->fields.itemSaves;
      v33 = *(WarBoardItemData_o **)((char *)&v31->obj.klass + v30 * 4);
      v34 = (WarBoardItemData_SaveData_o *)sub_1C3E7B0(WarBoardItemData_SaveData_TypeInfo);
      WarBoardItemData_SaveData___ctor_38168532(v34, v33, v35);
      if ( !itemSaves )
        goto LABEL_117;
      if ( v34 )
      {
        GutsCount = sub_1C3E6A0(v34, *(_QWORD *)(*(_QWORD *)itemSaves + 64LL));
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v28 >= itemSaves[6] )
        goto LABEL_118;
      *(_QWORD *)&itemSaves[v30] = v34;
      sub_1C3E508((CGThumbnailListItem_o *)&itemSaves[v30], (int32_t)v34, v36, v37);
      ++v28;
      v30 += 2;
    }
    while ( v29 != v28 );
  }
  treasures = warBoardData->fields.treasures;
  if ( !treasures )
    goto LABEL_117;
  v39 = treasures->max_length;
  v40 = (struct WarBoardTreasureData_SaveData_array *)sub_1C3E60C(
                                                        WarBoardTreasureData_SaveData___TypeInfo,
                                                        (unsigned int)v39);
  this->fields.treasureSaves = v40;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.treasureSaves, (int32_t)v40, v41, v42);
  if ( (int)v39 >= 1 )
  {
    v43 = 0;
    v44 = (unsigned int)v39;
    v45 = 8;
    do
    {
      v46 = warBoardData->fields.treasures;
      if ( !v46 )
        goto LABEL_117;
      if ( v43 >= LODWORD(v46->max_length) )
        goto LABEL_118;
      treasureSaves = (unsigned int *)this->fields.treasureSaves;
      v48 = *(WarBoardTreasureData_o **)((char *)&v46->obj.klass + v45 * 4);
      v49 = (WarBoardTreasureData_SaveData_o *)sub_1C3E7B0(WarBoardTreasureData_SaveData_TypeInfo);
      WarBoardTreasureData_SaveData___ctor_38168616(v49, v48, v50);
      if ( !treasureSaves )
        goto LABEL_117;
      if ( v49 )
      {
        GutsCount = sub_1C3E6A0(v49, *(_QWORD *)(*(_QWORD *)treasureSaves + 64LL));
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v43 >= treasureSaves[6] )
        goto LABEL_118;
      *(_QWORD *)&treasureSaves[v45] = v49;
      sub_1C3E508((CGThumbnailListItem_o *)&treasureSaves[v45], (int32_t)v49, v51, v52);
      ++v43;
      v45 += 2;
    }
    while ( v44 != v43 );
  }
  walls = warBoardData->fields.walls;
  if ( !walls )
    goto LABEL_117;
  v54 = walls->max_length;
  v55 = (struct WarBoardWallData_SaveData_array *)sub_1C3E60C(WarBoardWallData_SaveData___TypeInfo, (unsigned int)v54);
  this->fields.wallSaves = v55;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.wallSaves, (int32_t)v55, v56, v57);
  if ( (int)v54 >= 1 )
  {
    v58 = 0;
    v59 = (unsigned int)v54;
    v60 = 8;
    do
    {
      v61 = warBoardData->fields.walls;
      if ( !v61 )
        goto LABEL_117;
      if ( v58 >= LODWORD(v61->max_length) )
        goto LABEL_118;
      wallSaves = (unsigned int *)this->fields.wallSaves;
      v63 = *(WarBoardWallData_o **)((char *)&v61->obj.klass + v60 * 4);
      v64 = (WarBoardWallData_SaveData_o *)sub_1C3E7B0(WarBoardWallData_SaveData_TypeInfo);
      WarBoardWallData_SaveData___ctor_38168732(v64, v63, v65);
      if ( !wallSaves )
        goto LABEL_117;
      if ( v64 )
      {
        GutsCount = sub_1C3E6A0(v64, *(_QWORD *)(*(_QWORD *)wallSaves + 64LL));
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v58 >= wallSaves[6] )
        goto LABEL_118;
      *(_QWORD *)&wallSaves[v60] = v64;
      sub_1C3E508((CGThumbnailListItem_o *)&wallSaves[v60], (int32_t)v64, v66, v67);
      ++v58;
      v60 += 2;
    }
    while ( v59 != v58 );
  }
  squares = warBoardData->fields.squares;
  if ( !squares )
    goto LABEL_117;
  v69 = squares->max_length;
  v70 = (struct WarBoardSquareData_SaveData_array *)sub_1C3E60C(
                                                      WarBoardSquareData_SaveData___TypeInfo,
                                                      (unsigned int)v69);
  this->fields.squareSaves = v70;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.squareSaves, (int32_t)v70, v71, v72);
  if ( (int)v69 >= 1 )
  {
    v73 = 0;
    v74 = (unsigned int)v69;
    v75 = 8;
    do
    {
      v76 = warBoardData->fields.squares;
      if ( !v76 )
        goto LABEL_117;
      if ( v73 >= LODWORD(v76->max_length) )
        goto LABEL_118;
      squareSaves = (unsigned int *)this->fields.squareSaves;
      v78 = *(WarBoardSquareData_o **)((char *)&v76->obj.klass + v75 * 4);
      v79 = (WarBoardSquareData_SaveData_o *)sub_1C3E7B0(WarBoardSquareData_SaveData_TypeInfo);
      WarBoardSquareData_SaveData___ctor_38168840(v79, v78, v80);
      if ( !squareSaves )
        goto LABEL_117;
      if ( v79 )
      {
        GutsCount = sub_1C3E6A0(v79, *(_QWORD *)(*(_QWORD *)squareSaves + 64LL));
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v73 >= squareSaves[6] )
        goto LABEL_118;
      *(_QWORD *)&squareSaves[v75] = v79;
      sub_1C3E508((CGThumbnailListItem_o *)&squareSaves[v75], (int32_t)v79, v81, v82);
      ++v73;
      v75 += 2;
    }
    while ( v74 != v73 );
  }
  if ( !byte_4C5059A )
  {
    sub_1C3E564(&UnityEngine_Vector2_TypeInfo);
    byte_4C5059A = 1;
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
  v86 = (struct WarBoardEventData_SaveData_array *)sub_1C3E60C(
                                                     WarBoardEventData_SaveData___TypeInfo,
                                                     (unsigned int)size);
  this->fields.eventSaves = v86;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.eventSaves, (int32_t)v86, v87, v88);
  if ( (int)size >= 1 )
  {
    v91 = 0;
    v92 = 8;
    do
    {
      GutsCount = (__int64)warBoardData->fields.listEvent;
      if ( !GutsCount )
        goto LABEL_117;
      eventSaves = (unsigned int *)this->fields.eventSaves;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)GutsCount,
               v91,
               (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_WarBoardEventData__get_Item__);
      v95 = (WarBoardEventData_SaveData_o *)sub_1C3E7B0(WarBoardEventData_SaveData_TypeInfo);
      WarBoardEventData_SaveData___ctor_38168932(v95, (WarBoardEventData_o *)Item, v96);
      if ( !eventSaves )
        goto LABEL_117;
      if ( v95 )
      {
        GutsCount = sub_1C3E6A0(v95, *(_QWORD *)(*(_QWORD *)eventSaves + 64LL));
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v91 >= eventSaves[6] )
        goto LABEL_118;
      *(_QWORD *)&eventSaves[v92] = v95;
      sub_1C3E508((CGThumbnailListItem_o *)&eventSaves[v92], (int32_t)v95, v97, v98);
      ++v91;
      v92 += 2;
    }
    while ( size != v91 );
  }
  this->fields.winCondId = warBoardData->fields.winCondId;
  latestPieceActionSquareIndexes = warBoardData->fields.latestPieceActionSquareIndexes;
  this->fields.latestPieceActionSquareIndexes = latestPieceActionSquareIndexes;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields.latestPieceActionSquareIndexes,
    (int32_t)latestPieceActionSquareIndexes,
    v89,
    v90);
  latestBattlePieceUniqueIndexes = warBoardData->fields.latestBattlePieceUniqueIndexes;
  this->fields.latestBattlePieceUniqueIndexes = latestBattlePieceUniqueIndexes;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields.latestBattlePieceUniqueIndexes,
    (int32_t)latestBattlePieceUniqueIndexes,
    v101,
    v102);
  listPrevCond = warBoardData->fields.listPrevCond;
  if ( !listPrevCond )
    goto LABEL_117;
  v104 = (unsigned int)listPrevCond->fields._size;
  v105 = (struct WarBoardPrevCondData_SaveData_array *)sub_1C3E60C(
                                                         WarBoardPrevCondData_SaveData___TypeInfo,
                                                         (unsigned int)v104);
  this->fields.prevCondSaves = v105;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.prevCondSaves, (int32_t)v105, v106, v107);
  if ( (int)v104 >= 1 )
  {
    v108 = 0;
    v109 = 8;
    do
    {
      GutsCount = (__int64)warBoardData->fields.listPrevCond;
      if ( !GutsCount )
        goto LABEL_117;
      prevCondSaves = (unsigned int *)this->fields.prevCondSaves;
      v111 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)GutsCount,
               v108,
               (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_WarBoardPrevCondData__get_Item__);
      v112 = (WarBoardPrevCondData_SaveData_o *)sub_1C3E7B0(WarBoardPrevCondData_SaveData_TypeInfo);
      WarBoardPrevCondData_SaveData___ctor_38168992(v112, (WarBoardPrevCondData_o *)v111, v113);
      if ( !prevCondSaves )
        goto LABEL_117;
      if ( v112 )
      {
        GutsCount = sub_1C3E6A0(v112, *(_QWORD *)(*(_QWORD *)prevCondSaves + 64LL));
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v108 >= prevCondSaves[6] )
        goto LABEL_118;
      *(_QWORD *)&prevCondSaves[v109] = v112;
      sub_1C3E508((CGThumbnailListItem_o *)&prevCondSaves[v109], (int32_t)v112, v114, v115);
      ++v108;
      v109 += 2;
    }
    while ( v104 != v108 );
  }
  reinforcementsSaveList = warBoardData->fields.reinforcementsSaveList;
  if ( !reinforcementsSaveList )
    goto LABEL_117;
  v117 = (unsigned int)reinforcementsSaveList->fields._size;
  v118 = (struct HoldReinforcementsData_SaveData_array *)sub_1C3E60C(
                                                           HoldReinforcementsData_SaveData___TypeInfo,
                                                           (unsigned int)v117);
  this->fields.reinforcementsSaves = v118;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.reinforcementsSaves, (int32_t)v118, v119, v120);
  if ( (int)v117 >= 1 )
  {
    v121 = 0;
    v122 = 8;
    do
    {
      GutsCount = (__int64)warBoardData->fields.reinforcementsSaveList;
      if ( !GutsCount )
        goto LABEL_117;
      reinforcementsSaves = (unsigned int *)this->fields.reinforcementsSaves;
      v124 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)GutsCount,
               v121,
               (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_HoldReinforcementsData__get_Item__);
      v125 = (HoldReinforcementsData_SaveData_o *)sub_1C3E7B0(HoldReinforcementsData_SaveData_TypeInfo);
      HoldReinforcementsData_SaveData___ctor_38169044(v125, (HoldReinforcementsData_o *)v124, v126);
      if ( !reinforcementsSaves )
        goto LABEL_117;
      if ( v125 )
      {
        GutsCount = sub_1C3E6A0(v125, *(_QWORD *)(*(_QWORD *)reinforcementsSaves + 64LL));
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v121 >= reinforcementsSaves[6] )
        goto LABEL_118;
      *(_QWORD *)&reinforcementsSaves[v122] = v125;
      sub_1C3E508((CGThumbnailListItem_o *)&reinforcementsSaves[v122], (int32_t)v125, v127, v128);
      ++v121;
      v122 += 2;
    }
    while ( v117 != v121 );
  }
  GutsCount = (__int64)warBoardData->fields.playedStageReinforcementsList;
  if ( !GutsCount )
    goto LABEL_117;
  v129 = System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)GutsCount,
           (const MethodInfo_3799EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.playedReinforcements = v129;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.playedReinforcements, (int32_t)v129, v130, v131);
  listUiData = warBoardData->fields.listUiData;
  if ( !listUiData )
    goto LABEL_117;
  v133 = (unsigned int)listUiData->fields._size;
  v134 = (struct WarBoardUiData_SaveData_array *)sub_1C3E60C(WarBoardUiData_SaveData___TypeInfo, (unsigned int)v133);
  this->fields.uiDataSaves = v134;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.uiDataSaves, (int32_t)v134, v135, v136);
  if ( (int)v133 >= 1 )
  {
    v137 = 0;
    v138 = 8;
    do
    {
      GutsCount = (__int64)warBoardData->fields.listUiData;
      if ( !GutsCount )
        goto LABEL_117;
      uiDataSaves = (unsigned int *)this->fields.uiDataSaves;
      v140 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)GutsCount,
               v137,
               (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_WarBoardUiData__get_Item__);
      v141 = (WarBoardUiData_SaveData_o *)sub_1C3E7B0(WarBoardUiData_SaveData_TypeInfo);
      WarBoardUiData_SaveData___ctor_38169104(v141, (WarBoardUiData_o *)v140, v142);
      if ( !uiDataSaves )
        goto LABEL_117;
      if ( v141 )
      {
        GutsCount = sub_1C3E6A0(v141, *(_QWORD *)(*(_QWORD *)uiDataSaves + 64LL));
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v137 >= uiDataSaves[6] )
        goto LABEL_118;
      *(_QWORD *)&uiDataSaves[v138] = v141;
      sub_1C3E508((CGThumbnailListItem_o *)&uiDataSaves[v138], (int32_t)v141, v143, v144);
      ++v137;
      v138 += 2;
    }
    while ( v133 != v137 );
  }
  v145 = warBoardData->fields.serverData;
  if ( !v145 )
    goto LABEL_117;
  v146 = System_Linq_Enumerable__Count_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v145->fields.squareIndexInfo,
           (const MethodInfo_3119ED4 *)Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___);
  v147 = (struct WarBoardSquareIndexData_SaveData_array *)sub_1C3E60C(
                                                            WarBoardSquareIndexData_SaveData___TypeInfo,
                                                            (unsigned int)v146);
  this->fields.squareIndexInfo = v147;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.squareIndexInfo, (int32_t)v147, v148, v149);
  if ( v146 >= 1 )
  {
    v150 = 0;
    v151 = (unsigned int)v146;
    v152 = 8;
    do
    {
      v153 = warBoardData->fields.serverData;
      if ( !v153 )
        goto LABEL_117;
      squareIndexInfo = v153->fields.squareIndexInfo;
      if ( !squareIndexInfo )
        goto LABEL_117;
      if ( v150 >= LODWORD(squareIndexInfo->max_length) )
        goto LABEL_118;
      v155 = (unsigned int *)this->fields.squareIndexInfo;
      v156 = *(WarBoardSquareIndexData_o **)((char *)&squareIndexInfo->obj.klass + v152 * 4);
      v157 = (WarBoardSquareIndexData_SaveData_o *)sub_1C3E7B0(WarBoardSquareIndexData_SaveData_TypeInfo);
      WarBoardSquareIndexData_SaveData___ctor_38169184(v157, v156, v158);
      if ( !v155 )
        goto LABEL_117;
      if ( v157 )
      {
        GutsCount = sub_1C3E6A0(v157, *(_QWORD *)(*(_QWORD *)v155 + 64LL));
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v150 >= v155[6] )
        goto LABEL_118;
      *(_QWORD *)&v155[v152] = v157;
      sub_1C3E508((CGThumbnailListItem_o *)&v155[v152], (int32_t)v157, v159, v160);
      ++v150;
      v152 += 2;
    }
    while ( v151 != v150 );
  }
  v161 = warBoardData->fields.serverData;
  if ( !v161 )
    goto LABEL_117;
  v162 = System_Linq_Enumerable__Count_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v161->fields.bossBattleInfo,
           (const MethodInfo_3119ED4 *)Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___);
  v163 = (struct WarBoardBossBattleData_SaveData_array *)sub_1C3E60C(
                                                           WarBoardBossBattleData_SaveData___TypeInfo,
                                                           (unsigned int)v162);
  this->fields.bossBattleInfo = v163;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.bossBattleInfo, (int32_t)v163, v164, v165);
  if ( v162 >= 1 )
  {
    v166 = 0;
    v167 = (unsigned int)v162;
    v168 = 8;
    do
    {
      v169 = warBoardData->fields.serverData;
      if ( !v169 )
        goto LABEL_117;
      bossBattleInfo = v169->fields.bossBattleInfo;
      if ( !bossBattleInfo )
        goto LABEL_117;
      if ( v166 >= LODWORD(bossBattleInfo->max_length) )
        goto LABEL_118;
      v171 = (unsigned int *)this->fields.bossBattleInfo;
      v172 = *(WarBoardBossBattleData_o **)((char *)&bossBattleInfo->obj.klass + v168 * 4);
      v173 = (WarBoardBossBattleData_SaveData_o *)sub_1C3E7B0(WarBoardBossBattleData_SaveData_TypeInfo);
      WarBoardBossBattleData_SaveData___ctor_37965672(v173, v172, 0);
      if ( !v171 )
        goto LABEL_117;
      if ( v173 )
      {
        GutsCount = sub_1C3E6A0(v173, *(_QWORD *)(*(_QWORD *)v171 + 64LL));
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v166 >= v171[6] )
        goto LABEL_118;
      *(_QWORD *)&v171[v168] = v173;
      sub_1C3E508((CGThumbnailListItem_o *)&v171[v168], (int32_t)v173, v174, v175);
      ++v166;
      v168 += 2;
    }
    while ( v167 != v166 );
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

  if ( (byte_4C548C7 & 1) == 0 )
  {
    sub_1C3E564(&WarBoardData___c_TypeInfo);
    byte_4C548C7 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(WarBoardData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardData___c_TypeInfo->static_fields->__9 = (struct WarBoardData___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)WarBoardData___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C3E7C0(this, x);
  return x->fields.squareIndex - y->fields.squareIndex;
}


uint32_t WarBoardData___c____ctor_b__77_1(
        WarBoardData___c_o *this,
        WarBoardStageNpcEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return (x->fields.forceId << 24) | ((unsigned __int8)x->fields.groupId << 16);
}


uint32_t WarBoardData___c____ctor_b__77_2(
        WarBoardData___c_o *this,
        WarBoardActionPointEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return (x->fields.forceId << 24) | ((unsigned __int8)x->fields.groupId << 16);
}


int32_t WarBoardData___c____ctor_b__77_3(
        WarBoardData___c_o *this,
        WarBoardStageNpcEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return x->fields.forceId;
}


int32_t WarBoardData___c____ctor_b__77_4(
        WarBoardData___c_o *this,
        WarBoardStageNpcEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return x->fields.groupId;
}


bool WarBoardData___c____ctor_b__77_9(
        WarBoardData___c_o *this,
        WarBoardUserTreasureData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return x->fields.isReceived;
}


BattleBuffData_o *WarBoardData___c___BuffTurnProgressing_b__191_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *p,
        const MethodInfo *method)
{
  struct BattleServantData_o *battleServant_k__BackingField; // x8

  if ( !p )
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
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

  if ( (byte_4C548C9 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C548C9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v3);
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
  return !x->fields._isDead_k__BackingField;
}


bool WarBoardData___c___GetAlivePlayerGroupServantPieces_b__109_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
  return !x->fields._isDead_k__BackingField && x->fields._type_k__BackingField == 0;
}


bool WarBoardData___c___GetEditableServantPieces_b__120_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
  return x->fields._holdNum_k__BackingField < 1;
}


int32_t WarBoardData___c___GetInRangeSquareIndecies_b__123_0(
        WarBoardData___c_o *this,
        WarBoardData_SquareRangeSearch_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return x->fields.squareIndex;
}


bool WarBoardData___c___GetPlayerMasterPiece_b__104_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
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
  if ( (byte_4C548C8 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__);
    byte_4C548C8 = 1;
  }
  return value;
}


int32_t WarBoardData___c___SetContinue_b__82_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return x->fields._index_k__BackingField;
}


BattleServantData_o *WarBoardData___c___SetContinue_b__82_1(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return x->fields._battleServant_k__BackingField;
}


bool WarBoardData___c___SetContinue_b__82_2(WarBoardData___c_o *this, WarBoardPieceData_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return x->fields._isDead_k__BackingField && x->fields._battleServant_k__BackingField != 0;
}


int32_t WarBoardData___c___SetContinue_b__82_3(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct BattleServantData_o *battleServant_k__BackingField; // x8

  if ( !x || (battleServant_k__BackingField = x->fields._battleServant_k__BackingField) == 0 )
    sub_1C3E7C0(this, x);
  return battleServant_k__BackingField->fields.uniqueId;
}


void WarBoardData___c___SetContinue_b__82_4(WarBoardData___c_o *this, WarBoardPieceData_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  WarBoardPieceData__ProcContinue(x, (const MethodInfo *)x);
}


bool WarBoardData___c___SetPlayerMasterUserEquip_b__144_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return !x->fields._forceId_k__BackingField
      && !x->fields._groupId_k__BackingField
      && x->fields._type_k__BackingField == 1;
}


void WarBoardData___c___SetRequest_b__156_0(WarBoardData___c_o *this, WarBoardPieceData_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  WarBoardPieceData__SetServarData(x, (const MethodInfo *)x);
}


System_String_o *WarBoardData___c___SetRequest_b__156_1(
        WarBoardData___c_o *this,
        WarBoardItemData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
  return p->fields.pieceComponent;
}


bool WarBoardData___c___UpdateBuffTurnNoticeDisp_b__192_1(
        WarBoardData___c_o *this,
        WarBoardPieceBaseComponent_o *c,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x19

  if ( (byte_4C548CA & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C548CA = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)c, 0, 0);
  if ( !v4 )
    return 0;
  if ( !c )
    sub_1C3E7C0(v4, v5);
  v6 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))c->klass->vtable._4_get_BuffTrunNotice.methodPtr)(
                                 c,
                                 c->klass->vtable._4_get_BuffTrunNotice.method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(v6, 0, 0);
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
    sub_1C3E7C0(this, n);
  }
  WarBoardServantPieceBuffTurnComponent__UpdateDisp((WarBoardServantPieceBuffTurnComponent_o *)this, 1, 0);
}


int32_t WarBoardData___c___UpdateCurrentPartyCost_b__143_0(
        WarBoardData___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return UserServantEntity__getCost(x, 0);
}


bool WarBoardData___c___get_PlayerMasterUserEquipId_b__62_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, x);
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, x);
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
    sub_1C3E7C0(this, x);
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
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
  if ( (byte_4C548CB & 1) == 0 )
  {
    this = (WarBoardData___c__DisplayClass118_0_o *)sub_1C3E564(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4C548CB = 1;
  }
  if ( !x )
    sub_1C3E7C0(this, x);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.inRangeSquaers,
           x->fields._nowSquareIndex_k__BackingField,
           (const MethodInfo_3116AFC *)Method_System_Linq_Enumerable_Contains_int___);
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
  if ( (byte_4C548CC & 1) == 0 )
  {
    this = (WarBoardData___c__DisplayClass119_0_o *)sub_1C3E564(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4C548CC = 1;
  }
  if ( !x )
    sub_1C3E7C0(this, x);
  return !x->fields._isDead_k__BackingField
      && System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.inRangeSquaers,
           x->fields._nowSquareIndex_k__BackingField,
           (const MethodInfo_3116AFC *)Method_System_Linq_Enumerable_Contains_int___);
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, x);
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, x);
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
    sub_1C3E7C0(this, 0);
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
  if ( (byte_4C548CD & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    this = (WarBoardData___c__DisplayClass143_0_o *)sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C548CD = 1;
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
  this = (WarBoardData___c__DisplayClass143_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(
                                                    v9,
                                                    0);
  if ( !svtMaster
    || (this = (WarBoardData___c__DisplayClass143_0_o *)DataMasterBase_object__object__int___GetEntity(
                                                          svtMaster,
                                                          (int32_t)this,
                                                          (const MethodInfo_33B2F58 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
LABEL_9:
    sub_1C3E7C0(this, x);
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
    sub_1C3E7C0(this, x);
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
    sub_1C3E7C0(this, x);
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
    sub_1C3E7C0(this, 0);
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
  Il2CppObject *value; // x1
  System_Collections_Generic_KeyValuePair_int__object__o KeyValuePair_int__object; // kr00_16

  if ( (byte_4C548CE & 1) == 0 )
  {
    sub_1C3E564(&System_Action_bool__TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__List_WarBoardPieceData___get_Key__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__List_WarBoardPieceData___get_Value__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardPieceData__AsReadOnly__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__2__);
    byte_4C548CE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  _9__2 = this->fields.__9__2;
  v5 = (WarBoardManager_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_bool__o *)sub_1C3E7B0(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v6, v7);
  }
  key = System_Linq_Enumerable__First_KeyValuePair_int__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.consumedPieceActionPointDict,
          (const MethodInfo_311F704 *)Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____).fields.key;
  consumedPieceActionPointDict = this->fields.consumedPieceActionPointDict;
  v10 = key;
  KeyValuePair_int__object = System_Linq_Enumerable__First_KeyValuePair_int__object__(
                               (System_Collections_Generic_IEnumerable_TSource__o *)consumedPieceActionPointDict,
                               (const MethodInfo_311F704 *)Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____);
  value = KeyValuePair_int__object.fields.value;
  Only = *(System_Collections_ObjectModel_ReadOnlyCollection_T__o **)&KeyValuePair_int__object.fields.key;
  if ( !KeyValuePair_int__object.fields.value
    || (Only = System_Collections_Generic_List_object___AsReadOnly(
                 (System_Collections_Generic_List_object__o *)KeyValuePair_int__object.fields.value,
                 (const MethodInfo_37B5688 *)Method_System_Collections_Generic_List_WarBoardPieceData__AsReadOnly__),
        !v5) )
  {
    sub_1C3E7C0(Only, value);
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
  __int64 v5; // x1
  System_Action_o *_9__3; // x22
  WarBoardManager_o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C548CF & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C3E564(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__3__);
    byte_4C548CF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  _9__3 = this->fields.__9__3;
  v7 = (WarBoardManager_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__3__,
      0);
    this->fields.__9__3 = _9__3;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.__9__3, (int32_t)_9__3, v8, v9);
  }
  if ( !v7 )
    sub_1C3E7C0(Instance, v5);
  WarBoardManager__HideConsumedPieceActionPointPopup(v7, _9__3, 0);
}


void WarBoardData___c__DisplayClass154_0___ShowConsumedPieceActionPointPopup_b__3(
        WarBoardData___c__DisplayClass154_0_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___o *consumedPieceActionPointDict; // x20
  WarBoardData_o *_4__this; // x0
  Il2CppObject *value; // x1
  System_Collections_Generic_KeyValuePair_int__object__o KeyValuePair_int__object; // kr00_16

  if ( (byte_4C548D0 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Remove__);
    sub_1C3E564(&Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__List_WarBoardPieceData___get_Key__);
    byte_4C548D0 = 1;
  }
  this->fields.consumedPiecePopupClose = 1;
  consumedPieceActionPointDict = this->fields.consumedPieceActionPointDict;
  KeyValuePair_int__object = System_Linq_Enumerable__First_KeyValuePair_int__object__(
                               (System_Collections_Generic_IEnumerable_TSource__o *)consumedPieceActionPointDict,
                               (const MethodInfo_311F704 *)Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____);
  value = KeyValuePair_int__object.fields.value;
  _4__this = *(WarBoardData_o **)&KeyValuePair_int__object.fields.key;
  if ( !consumedPieceActionPointDict
    || (System_Collections_Generic_Dictionary_int__object___Remove(
          (System_Collections_Generic_Dictionary_int__object__o *)consumedPieceActionPointDict,
          KeyValuePair_int__object.fields.key,
          (const MethodInfo_340D8C4 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Remove__),
        (_4__this = this->fields.__4__this) == 0) )
  {
    sub_1C3E7C0(_4__this, value);
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, x);
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
    sub_1C3E7C0(this, *(_QWORD *)&x);
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
  if ( (byte_4C548D1 & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_Any_int____78187928);
    sub_1C3E564(&System_Func_int__bool__TypeInfo);
    this = (WarBoardData___c__DisplayClass189_1_o *)sub_1C3E564(&Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__2__);
    byte_4C548D1 = 1;
  }
  if ( !x
    || (CS___8__locals1 = v4->fields.CS___8__locals1) == 0
    || (stageEntity = CS___8__locals1->fields.stageEntity) == 0 )
  {
    sub_1C3E7C0(this, x);
  }
  if ( x->fields.stageReinforcementId != stageEntity->fields.id )
    return 0;
  reinforcementsIdx = x->fields.reinforcementsIdx;
  _9__2 = v4->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Func_int__bool__o *)sub_1C3E7B0(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__2,
      (Il2CppObject *)v4,
      Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__2__,
      0);
    v4->fields.__9__2 = _9__2;
    sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.__9__2, (int32_t)_9__2, v9, v10);
  }
  return BasicHelper__Any_int__51260304(
           reinforcementsIdx,
           (System_Func_T__bool__o *)_9__2,
           (const MethodInfo_30E2B90 *)Method_BasicHelper_Any_int____78187928);
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
    sub_1C3E7C0(this, *(_QWORD *)&x);
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, a);
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
      sub_1C3E7C8(this, a);
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
    sub_1C3E7C0(this, x);
  return x->fields.forceId == piece->fields.forceId && x->fields.groupId == piece->fields.groupId;
}


bool WarBoardData___c__DisplayClass77_0____ctor_b__6(
        WarBoardData___c__DisplayClass77_0_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_SaveData_o *piece; // x8

  if ( !x || (piece = this->fields.piece) == 0 )
    sub_1C3E7C0(this, x);
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
    sub_1C3E7C0(this, x);
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
    sub_1C3E7C0(this, x);
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
    sub_1C3E7C0(this, x);
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
    sub_1C3E7C0(this, x);
  return x->fields.treasureId == layout->fields.effectId;
}


bool WarBoardData___c__DisplayClass77_4____ctor_b__12(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserMasterData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0 )
    sub_1C3E7C0(this, x);
  return x->fields.forceId == layout->fields.forceId && x->fields.groupId == layout->fields.groupId;
}


bool WarBoardData___c__DisplayClass77_4____ctor_b__13(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0 )
    sub_1C3E7C0(this, x);
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
    sub_1C3E7C0(this, x);
  return x->fields.squareIndex == layout->fields.squareIndex;
}


bool WarBoardData___c__DisplayClass77_4____ctor_b__15(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserWallData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0 )
    sub_1C3E7C0(this, x);
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
    sub_1C3E7C0(this, x);
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
    sub_1C3E7C0(this, x);
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
    sub_1C3E7C0(this, 0);
  return !x->fields._isDead_k__BackingField && x->fields._uniqueIndex_k__BackingField == this->fields.uniqueId;
}