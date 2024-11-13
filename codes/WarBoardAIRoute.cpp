void __fastcall WarBoardAIRoute___ctor(
        WarBoardAIRoute_o *this,
        WarBoardStageNpcEntity_o *npc,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  System_Collections_Generic_List_object__o *v130; // x20
  int64_t v131; // x2
  int32_t v132; // w3
  System_String_o *v133; // x4
  BattleSetupInfo_o *v134; // x5
  FollowerInfo_o *v135; // x6
  PartyListViewItem_o *v136; // x7
  __int64 v137; // x1
  __int64 v138; // x2
  __int64 v139; // x3
  System_Collections_Generic_List_object__o *v140; // x20
  int64_t v141; // x2
  int32_t v142; // w3
  System_String_o *v143; // x4
  BattleSetupInfo_o *v144; // x5
  FollowerInfo_o *v145; // x6
  PartyListViewItem_o *v146; // x7
  __int64 v147; // x1
  __int64 v148; // x2
  __int64 v149; // x3
  System_Collections_Generic_Dictionary_int__object__o *v150; // x20
  int64_t v151; // x2
  int32_t v152; // w3
  System_String_o *v153; // x4
  BattleSetupInfo_o *v154; // x5
  FollowerInfo_o *v155; // x6
  PartyListViewItem_o *v156; // x7
  __int64 v157; // x1
  __int64 v158; // x2
  __int64 v159; // x3
  System_Collections_Generic_List_object__o *v160; // x20
  int64_t v161; // x2
  int32_t v162; // w3
  System_String_o *v163; // x4
  BattleSetupInfo_o *v164; // x5
  FollowerInfo_o *v165; // x6
  PartyListViewItem_o *v166; // x7
  WarBoardAIRoute_o *v167; // x23
  __int64 v168; // x1
  __int64 v169; // x2
  __int64 v170; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v171; // x20
  int64_t v172; // x2
  int32_t v173; // w3
  System_String_o *v174; // x4
  BattleSetupInfo_o *v175; // x5
  FollowerInfo_o *v176; // x6
  PartyListViewItem_o *v177; // x7
  __int64 v178; // x1
  __int64 v179; // x2
  __int64 v180; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v181; // x20
  int64_t v182; // x2
  int32_t v183; // w3
  System_String_o *v184; // x4
  BattleSetupInfo_o *v185; // x5
  FollowerInfo_o *v186; // x6
  PartyListViewItem_o *v187; // x7
  __int64 v188; // x1
  __int64 v189; // x2
  __int64 v190; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v191; // x20
  int64_t v192; // x2
  int32_t v193; // w3
  System_String_o *v194; // x4
  BattleSetupInfo_o *v195; // x5
  FollowerInfo_o *v196; // x6
  PartyListViewItem_o *v197; // x7
  __int64 v198; // x1
  __int64 v199; // x2
  __int64 v200; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v201; // x20
  int64_t v202; // x2
  int32_t v203; // w3
  System_String_o *v204; // x4
  BattleSetupInfo_o *v205; // x5
  FollowerInfo_o *v206; // x6
  PartyListViewItem_o *v207; // x7
  __int64 v208; // x1
  __int64 v209; // x2
  __int64 v210; // x3
  System_Collections_Generic_Dictionary_int__object__o *v211; // x20
  int64_t v212; // x2
  int32_t v213; // w3
  System_String_o *v214; // x4
  BattleSetupInfo_o *v215; // x5
  FollowerInfo_o *v216; // x6
  PartyListViewItem_o *v217; // x7
  Il2CppObject *Instance; // x24
  int64_t v219; // x2
  int32_t v220; // w3
  System_String_o *v221; // x4
  BattleSetupInfo_o *v222; // x5
  FollowerInfo_o *v223; // x6
  PartyListViewItem_o *v224; // x7
  int64_t piecePersonalityDic; // x0
  Il2CppObject *v226; // x1
  const MethodInfo *v227; // x1
  __int64 v228; // x3
  struct System_Collections_Generic_List_WarBoardRatingBase__o *v229; // x8
  __int64 size; // x2
  int v231; // w9
  struct System_Int32_array *aiIds; // x19
  PartyOrganizationUtility_o *p_aiIds; // x20
  System_Array_o *v234; // x21
  int64_t v235; // x2
  int32_t v236; // w3
  System_String_o *v237; // x4
  BattleSetupInfo_o *v238; // x5
  FollowerInfo_o *v239; // x6
  PartyListViewItem_o *v240; // x7
  __int64 v241; // x8
  unsigned __int64 v242; // x26
  int v243; // w21
  WarBoardAIRoute_PiecePersonality_o *v244; // x27
  int32_t v245; // w20
  DataMasterBase_TMaster__TEntity__PKType__o *v246; // x28
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v247; // x8
  int64_t v248; // x29
  unsigned __int64 v249; // x23
  __int64 v250; // x2
  __int64 v251; // x3
  System_Collections_Generic_List_object__o *actionTrandList; // x20
  Il2CppObject *v253; // x22
  WarBoardAIRoute_ActionTrendInfo_o *v254; // x21
  int64_t v255; // x2
  int32_t v256; // w3
  System_String_o *v257; // x4
  BattleSetupInfo_o *v258; // x5
  FollowerInfo_o *v259; // x6
  PartyListViewItem_o *v260; // x7
  struct System_Object_array *items; // x8
  _QWORD *v262; // x9
  __int64 v263; // x10
  Il2CppClass **v264; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v265; // x28
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *v266; // x8
  int64_t v267; // x20
  unsigned __int64 v268; // x21
  int64_t v269; // x2
  int32_t v270; // w3
  System_String_o *v271; // x4
  BattleSetupInfo_o *v272; // x5
  FollowerInfo_o *v273; // x6
  PartyListViewItem_o *v274; // x7
  struct System_Int32_array *v275; // x8
  _QWORD *v276; // x9
  __int64 v277; // x10
  Il2CppClass **v278; // x8
  Il2CppObject *Master_object; // x27
  Il2CppObject *v280; // x28
  __int64 v281; // x2
  __int64 v282; // x3
  WarBoardData_o *v283; // x29
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x20
  System_Func_object__bool__o *v285; // x21
  System_Collections_Generic_Dictionary_int__object__c *v286; // x8
  int64_t v287; // x20
  __int64 v288; // x9
  int32_t *p_offset; // x10
  __int64 v290; // x0
  __int64 v291; // x1
  __int64 v292; // x26
  __int64 v293; // x8
  __int64 v294; // x9
  int *v295; // x10
  __int64 v296; // x0
  __int64 v297; // x8
  __int64 v298; // x9
  int *v299; // x10
  __int64 v300; // x0
  __int64 v301; // x1
  int32_t *v302; // x20
  __int64 id; // x0
  __int64 v304; // x1
  _BOOL8 v305; // x0
  __int64 v306; // x1
  __int64 v307; // x0
  __int64 v308; // x1
  _BOOL8 v309; // x0
  __int64 v310; // x1
  const MethodInfo *v311; // x3
  __int64 v312; // x8
  __int64 v313; // x9
  int *v314; // x10
  __int64 v315; // x0
  __int64 v316; // x2
  __int64 v317; // x3
  PartyOrganizationUtility_o *p_ratingBaseIds; // x20
  struct System_Int32_array *ratingBaseIds; // x22
  System_Array_o *v320; // x21
  int64_t v321; // x2
  int32_t v322; // w3
  System_String_o *v323; // x4
  BattleSetupInfo_o *v324; // x5
  FollowerInfo_o *v325; // x6
  PartyListViewItem_o *v326; // x7
  __int64 v327; // x8
  unsigned __int64 v328; // x24
  int32_t v329; // w20
  __int64 v330; // x2
  __int64 v331; // x3
  int64_t v332; // x25
  _QWORD *v333; // x8
  int64_t v334; // x20
  int64_t v335; // x2
  int32_t v336; // w3
  System_String_o *v337; // x4
  BattleSetupInfo_o *v338; // x5
  FollowerInfo_o *v339; // x6
  PartyListViewItem_o *v340; // x7
  int64_t v341; // x2
  int32_t v342; // w3
  System_String_o *v343; // x4
  BattleSetupInfo_o *v344; // x5
  FollowerInfo_o *v345; // x6
  PartyListViewItem_o *v346; // x7
  struct System_Int32_array *v347; // x8
  _QWORD *v348; // x9
  __int64 v349; // x10
  Il2CppClass **v350; // x8
  int32_t v351; // w21
  struct System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *dicRatingbaseCalcValue; // x20
  WarBoardEvalValueSquare_CalcEval_o *v353; // x25
  struct System_Int32_array *tacticalIds; // x19
  PartyOrganizationUtility_o *p_tacticalIds; // x21
  System_Array_o *v356; // x20
  int64_t v357; // x2
  int32_t v358; // w3
  System_String_o *v359; // x4
  BattleSetupInfo_o *v360; // x5
  FollowerInfo_o *v361; // x6
  PartyListViewItem_o *v362; // x7
  __int64 v363; // x8
  unsigned __int64 v364; // x21
  int32_t v365; // w20
  int64_t v366; // x2
  int32_t v367; // w3
  System_String_o *v368; // x4
  BattleSetupInfo_o *v369; // x5
  FollowerInfo_o *v370; // x6
  PartyListViewItem_o *v371; // x7
  System_Collections_Generic_List_object__o *v372; // x8
  struct System_Object_array *v373; // x9
  _QWORD *v374; // x10
  __int64 v375; // x11
  int64_t v376; // x1
  Il2CppClass **v377; // x0
  int32_t forceId; // w20
  int32_t groupId; // w21
  WarBoardAiTargetCacher_o *v380; // x22
  int64_t v381; // x2
  int32_t v382; // w3
  System_String_o *v383; // x4
  BattleSetupInfo_o *v384; // x5
  FollowerInfo_o *v385; // x6
  PartyListViewItem_o *v386; // x7
  struct System_Collections_Generic_List_WarBoardTacticalTrendEntity__o **p_tacticalTrendList; // [xsp+0h] [xbp-C0h]
  struct System_Collections_Generic_List_WarBoardRatingBase__o **p_ratingBaseList; // [xsp+10h] [xbp-B0h]
  System_Collections_Generic_Dictionary_int__object__o **p_piecePersonalityDic; // [xsp+28h] [xbp-98h]
  DataManager_o *v392; // [xsp+30h] [xbp-90h]
  WarBoardReinforcementsEntity_o *v393; // [xsp+38h] [xbp-88h] BYREF
  WarBoardStageReinforcementsEntity_o *v394; // [xsp+40h] [xbp-80h] BYREF
  Il2CppObject *item; // [xsp+48h] [xbp-78h] BYREF
  Il2CppObject *v396; // [xsp+50h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF
  System_RuntimeFieldHandle_o v398; // 0:w1.4
  System_RuntimeFieldHandle_o v399; // 0:w1.4
  System_RuntimeFieldHandle_o v400; // 0:w1.4

  if ( (byte_4B13CB4 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardAIRoute_ActionTrendInfo_TypeInfo, npc, method);
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_int____76842096, v4, v5);
    sub_1BCA7E0(&WarBoardEvalValueSquare_CalcEval_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarBoardAIMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarBoardActionTrendMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarBoardRatingBaseMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarBoardRatingOffsetMaster___, v14, v15);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarBoardTacticalTrendMaster___, v16, v17);
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___, v18, v19);
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___, v20, v21);
    sub_1BCA7E0(&DataManager_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_DataMasterBase_WarBoardRatingBaseMaster__WarBoardRatingBaseEntity__int__GetEntity__, v24, v25);
    sub_1BCA7E0(
      &Method_DataMasterBase_WarBoardTacticalTrendMaster__WarBoardTacticalTrendEntity__int__GetEntity__,
      v26,
      v27);
    sub_1BCA7E0(
      &Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__TryGetEntity__,
      v28,
      v29);
    sub_1BCA7E0(&Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__TryGetEntity__, v30, v31);
    sub_1BCA7E0(
      &Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__TryGetEntity__,
      v32,
      v33);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__, v34, v35);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__Add__, v36, v37);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Clear__, v38, v39);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__ContainsKey__,
      v40,
      v41);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___ctor__, v42, v43);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData___ctor__,
      v44,
      v45);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_IEnumerator__float___ctor__, v46, v47);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData___ctor__,
      v48,
      v49);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___ctor__, v50, v51);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___ctor__, v52, v53);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TypeInfo, v54, v55);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__TypeInfo, v56, v57);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TypeInfo, v58, v59);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_IEnumerator__float__TypeInfo, v60, v61);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__TypeInfo, v62, v63);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__TypeInfo, v64, v65);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v66, v67);
    sub_1BCA7E0(&System_Func_WarBoardPieceData__bool__TypeInfo, v68, v69);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v70, v71);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo, v72, v73);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo, v74, v75);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v76, v77);
    sub_1BCA7E0(&int___TypeInfo, v78, v79);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__, v80, v81);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardRatingBase__Add__, v82, v83);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__Add__, v84, v85);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__, v86, v87);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardRatingBase__Clear__, v88, v89);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity___ctor__, v90, v91);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardRatingBase___ctor__, v92, v93);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__, v94, v95);
    sub_1BCA7E0(&System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo, v96, v97);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardTacticalTrendEntity__TypeInfo, v98, v99);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardRatingBase__TypeInfo, v100, v101);
    sub_1BCA7E0(&WarBoardAIRoute_PiecePersonality_TypeInfo, v102, v103);
    sub_1BCA7E0(&ShortestDistanceFromAllyMaster_TypeInfo, v104, v105);
    sub_1BCA7E0(&ShortestDistanceFromAllyServant_TypeInfo, v106, v107);
    sub_1BCA7E0(&ShortestDistanceFromEnemyMaster_TypeInfo, v108, v109);
    sub_1BCA7E0(&ShortestDistanceFromEnemyServant_TypeInfo, v110, v111);
    sub_1BCA7E0(&ShortestDistanceFromItem_TypeInfo, v112, v113);
    sub_1BCA7E0(&ShortestDistanceFromPrioritySpace_TypeInfo, v114, v115);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v116, v117);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v118, v119);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__4F6ADDC9659D6FB90FE94B6688A79F2A1FA8D36EC43F8F3E1D9B6528C448A384,
      v120,
      v121);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__90D856B7ECAC90C26898AF8A46404297AA0EF65768F62FDF8C3F08294BCBEE49,
      v122,
      v123);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__CF97ADEEDB59E05BFD73A2B4C2A8885708C4F4F70C84C64B27120E72AB733B72,
      v124,
      v125);
    sub_1BCA7E0(&Method_WarBoardAIRoute___ctor_b__42_0__, v126, v127);
    sub_1BCA7E0(&WarBoardAiTargetCacher_TypeInfo, v128, v129);
    byte_4B13CB4 = 1;
  }
  v396 = 0LL;
  entity = 0LL;
  v394 = 0LL;
  item = 0LL;
  v393 = 0LL;
  this->fields.TEMP_SEARCH_DEPTH = 3;
  v130 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_WarBoardTacticalTrendEntity__TypeInfo,
                                                        npc,
                                                        method,
                                                        v3);
  System_Collections_Generic_List_object____ctor(
    v130,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity___ctor__);
  this->fields.tacticalTrendList = (struct System_Collections_Generic_List_WarBoardTacticalTrendEntity__o *)v130;
  p_tacticalTrendList = &this->fields.tacticalTrendList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.tacticalTrendList,
    (int64_t)v130,
    v131,
    v132,
    v133,
    v134,
    v135,
    v136);
  v140 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_WarBoardRatingBase__TypeInfo,
                                                        v137,
                                                        v138,
                                                        v139);
  System_Collections_Generic_List_object____ctor(
    v140,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardRatingBase___ctor__);
  this->fields.ratingBaseList = (struct System_Collections_Generic_List_WarBoardRatingBase__o *)v140;
  p_ratingBaseList = &this->fields.ratingBaseList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.ratingBaseList,
    (int64_t)v140,
    v141,
    v142,
    v143,
    v144,
    v145,
    v146);
  v150 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                   System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TypeInfo,
                                                                   v147,
                                                                   v148,
                                                                   v149);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v150,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___ctor__);
  this->fields.piecePersonalityDic = (struct System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v150;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.piecePersonalityDic,
    (int64_t)v150,
    v151,
    v152,
    v153,
    v154,
    v155,
    v156);
  v160 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___TypeInfo,
                                                        v157,
                                                        v158,
                                                        v159);
  System_Collections_Generic_List_object____ctor(
    v160,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData____ctor__);
  this->fields.allRouteList = (struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *)v160;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.allRouteList,
    (int64_t)v160,
    v161,
    v162,
    v163,
    v164,
    v165,
    v166);
  v167 = this;
  v171 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                    System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__TypeInfo,
                                                                    v168,
                                                                    v169,
                                                                    v170);
  System_Collections_Generic_Dictionary_uint__object____ctor(
    v171,
    (const MethodInfo_329D4F4 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData___ctor__);
  this->fields.dicUniqueKeyAdvantagePieceData = (struct System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__o *)v171;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.dicUniqueKeyAdvantagePieceData,
    (int64_t)v171,
    v172,
    v173,
    v174,
    v175,
    v176,
    v177);
  v181 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                    System_Collections_Generic_Dictionary_IEnumerator__float__TypeInfo,
                                                                    v178,
                                                                    v179,
                                                                    v180);
  System_Collections_Generic_Dictionary_object__float____ctor(
    v181,
    (const MethodInfo_326DA84 *)Method_System_Collections_Generic_Dictionary_IEnumerator__float___ctor__);
  this->fields.dictionaryCreateRouteDataEvalValue = (struct System_Collections_Generic_Dictionary_IEnumerator__float__o *)v181;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.dictionaryCreateRouteDataEvalValue,
    (int64_t)v181,
    v182,
    v183,
    v184,
    v185,
    v186,
    v187);
  v191 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                    System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__TypeInfo,
                                                                    v188,
                                                                    v189,
                                                                    v190);
  System_Collections_Generic_Dictionary_uint__object____ctor(
    v191,
    (const MethodInfo_329D4F4 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData___ctor__);
  this->fields.dicUniqueKeyDesignationItem = (struct System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__o *)v191;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.dicUniqueKeyDesignationItem,
    (int64_t)v191,
    v192,
    v193,
    v194,
    v195,
    v196,
    v197);
  v201 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                    System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__TypeInfo,
                                                                    v198,
                                                                    v199,
                                                                    v200);
  System_Collections_Generic_Dictionary_uint__object____ctor(
    v201,
    (const MethodInfo_329D4F4 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___ctor__);
  this->fields.dicUniqueKeyTarget = (struct System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)v201;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.dicUniqueKeyTarget,
    (int64_t)v201,
    v202,
    v203,
    v204,
    v205,
    v206,
    v207);
  v211 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                   System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__TypeInfo,
                                                                   v208,
                                                                   v209,
                                                                   v210);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v211,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___ctor__);
  this->fields.dicRatingbaseCalcValue = (struct System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v211;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.dicRatingbaseCalcValue,
    (int64_t)v211,
    v212,
    v213,
    v214,
    v215,
    v216,
    v217);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  this->fields.npcData = npc;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.npcData, (int64_t)npc, v219, v220, v221, v222, v223, v224);
  if ( !npc )
    goto LABEL_137;
  *(_QWORD *)&this->fields.forceId = *(_QWORD *)&npc->fields.forceId;
  this->fields.pickValue = npc->fields.pickValue;
  piecePersonalityDic = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !piecePersonalityDic )
    goto LABEL_137;
  piecePersonalityDic = *(_QWORD *)(piecePersonalityDic + 440);
  if ( !piecePersonalityDic )
    goto LABEL_137;
  this->fields.moveCost = WarBoardData__GetMoveCost(
                            (WarBoardData_o *)piecePersonalityDic,
                            this->fields.forceId,
                            this->fields.groupId,
                            0,
                            0,
                            0LL);
  piecePersonalityDic = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !piecePersonalityDic )
    goto LABEL_137;
  piecePersonalityDic = *(_QWORD *)(piecePersonalityDic + 440);
  if ( !piecePersonalityDic )
    goto LABEL_137;
  this->fields.masterMoveCost = WarBoardData__GetMoveCost(
                                  (WarBoardData_o *)piecePersonalityDic,
                                  this->fields.forceId,
                                  this->fields.groupId,
                                  0,
                                  1,
                                  0LL);
  piecePersonalityDic = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !piecePersonalityDic )
    goto LABEL_137;
  piecePersonalityDic = *(_QWORD *)(piecePersonalityDic + 440);
  if ( !piecePersonalityDic )
    goto LABEL_137;
  this->fields.attackCost = WarBoardData__GetAttackCost(
                              (WarBoardData_o *)piecePersonalityDic,
                              this->fields.forceId,
                              this->fields.groupId,
                              0LL);
  piecePersonalityDic = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !piecePersonalityDic )
    goto LABEL_137;
  piecePersonalityDic = *(_QWORD *)(piecePersonalityDic + 440);
  if ( !piecePersonalityDic )
    goto LABEL_137;
  this->fields.wallAttackCost = WarBoardData__GetWallAttackCost(
                                  (WarBoardData_o *)piecePersonalityDic,
                                  this->fields.forceId,
                                  this->fields.groupId,
                                  0LL);
  WarBoardAIRoute__Clear(this, v227);
  piecePersonalityDic = (int64_t)this->fields.piecePersonalityDic;
  if ( !piecePersonalityDic )
    goto LABEL_137;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)piecePersonalityDic,
    (const MethodInfo_320606C *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Clear__);
  v229 = *p_ratingBaseList;
  if ( !*p_ratingBaseList )
    goto LABEL_137;
  size = (unsigned int)v229->fields._size;
  v231 = v229->fields._version + 1;
  v229->fields._size = 0;
  v229->fields._version = v231;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)v229->fields._items, 0, size, 0LL);
  p_piecePersonalityDic = (System_Collections_Generic_Dictionary_int__object__o **)&this->fields.piecePersonalityDic;
  p_aiIds = (PartyOrganizationUtility_o *)&npc->fields.aiIds;
  aiIds = npc->fields.aiIds;
  if ( !aiIds )
  {
    v234 = (System_Array_o *)sub_1BCA888(int___TypeInfo, 4LL);
    v398.fields.value = Field__PrivateImplementationDetails__CF97ADEEDB59E05BFD73A2B4C2A8885708C4F4F70C84C64B27120E72AB733B72;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v234, v398, 0LL);
    p_aiIds->klass = (PartyOrganizationUtility_c *)v234;
    sub_1BCA784(p_aiIds, (int64_t)v234, v235, v236, v237, v238, v239, v240);
    aiIds = (struct System_Int32_array *)p_aiIds->klass;
    if ( !p_aiIds->klass )
      goto LABEL_137;
  }
  v241 = *(_QWORD *)&aiIds->max_length;
  v392 = (DataManager_o *)Instance;
  if ( (int)v241 >= 1 )
  {
    v242 = 0LL;
    do
    {
      if ( v242 >= (unsigned int)v241 )
        goto LABEL_138;
      v243 = aiIds->m_Items[v242 + 1];
      v244 = (WarBoardAIRoute_PiecePersonality_o *)sub_1BCAA2C(
                                                     WarBoardAIRoute_PiecePersonality_TypeInfo,
                                                     v226,
                                                     size,
                                                     v228);
      WarBoardAIRoute_PiecePersonality___ctor(v244, 0LL);
      piecePersonalityDic = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !piecePersonalityDic )
        goto LABEL_137;
      piecePersonalityDic = *(_QWORD *)(piecePersonalityDic + 440);
      if ( !piecePersonalityDic )
        goto LABEL_137;
      piecePersonalityDic = (int64_t)WarBoardData__GetPiece(
                                       (WarBoardData_o *)piecePersonalityDic,
                                       v167->fields.forceId,
                                       v167->fields.groupId,
                                       v242,
                                       1,
                                       0LL);
      if ( piecePersonalityDic && (v245 = *(_DWORD *)(piecePersonalityDic + 304), v245 > 0) || (v245 = v243, v243 >= 1) )
      {
        if ( !Instance )
          goto LABEL_137;
        piecePersonalityDic = (int64_t)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarBoardAIMaster___);
        if ( !piecePersonalityDic )
          goto LABEL_137;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)piecePersonalityDic,
               &entity,
               v245,
               (const MethodInfo_31B2E94 *)Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__TryGetEntity__) )
        {
          piecePersonalityDic = (int64_t)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarBoardActionTrendMaster___);
          if ( !entity )
            goto LABEL_137;
          v246 = (DataMasterBase_TMaster__TEntity__PKType__o *)piecePersonalityDic;
          piecePersonalityDic = (int64_t)WarBoardAIEntity__GetActionTrendIds((WarBoardAIEntity_o *)entity, 0LL);
          if ( !piecePersonalityDic )
            goto LABEL_137;
          v247 = *(struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(piecePersonalityDic + 24);
          v248 = piecePersonalityDic;
          if ( (int)v247 >= 1 )
          {
            v249 = 0LL;
            while ( v249 < (unsigned int)v247 )
            {
              if ( !v246 )
                goto LABEL_137;
              piecePersonalityDic = DataMasterBase_object__object__int___TryGetEntity(
                                      v246,
                                      &v396,
                                      *(_DWORD *)(v248 + 32 + 4 * v249),
                                      (const MethodInfo_31B2E94 *)Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__TryGetEntity__);
              if ( (piecePersonalityDic & 1) != 0 )
              {
                if ( !v244 )
                  goto LABEL_137;
                actionTrandList = (System_Collections_Generic_List_object__o *)v244->fields.actionTrandList;
                v253 = v396;
                v254 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_1BCAA2C(
                                                              WarBoardAIRoute_ActionTrendInfo_TypeInfo,
                                                              v226,
                                                              v250,
                                                              v251);
                WarBoardAIRoute_ActionTrendInfo___ctor(v254, (WarBoardActionTrendEntity_o *)v253, 0LL);
                if ( !actionTrandList )
                  goto LABEL_137;
                items = actionTrandList->fields._items;
                v262 = Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__;
                ++actionTrandList->fields._version;
                if ( !items )
                  goto LABEL_137;
                v263 = actionTrandList->fields._size;
                if ( (unsigned int)v263 >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    actionTrandList,
                    (Il2CppObject *)v254,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v262[4] + 192LL) + 112LL));
                }
                else
                {
                  v264 = &items->obj.klass + v263;
                  actionTrandList->fields._size = v263 + 1;
                  v264[4] = (Il2CppClass *)v254;
                  sub_1BCA784(
                    (PartyOrganizationUtility_o *)(v264 + 4),
                    (int64_t)v254,
                    v255,
                    v256,
                    v257,
                    v258,
                    v259,
                    v260);
                }
              }
              LODWORD(v247) = *(_DWORD *)(v248 + 24);
              if ( (__int64)++v249 >= (int)v247 )
                goto LABEL_43;
            }
LABEL_138:
            sub_1BCAA44(piecePersonalityDic, v226);
          }
LABEL_43:
          Instance = (Il2CppObject *)v392;
          piecePersonalityDic = (int64_t)DataManager__GetMasterData_object_(
                                           v392,
                                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarBoardRatingOffsetMaster___);
          if ( !entity )
            goto LABEL_137;
          v265 = (DataMasterBase_TMaster__TEntity__PKType__o *)piecePersonalityDic;
          piecePersonalityDic = (int64_t)WarBoardAIEntity__GetRatingOffsetIds((WarBoardAIEntity_o *)entity, 0LL);
          v167 = this;
          if ( !piecePersonalityDic )
            goto LABEL_137;
          v266 = *(struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(piecePersonalityDic + 24);
          v267 = piecePersonalityDic;
          if ( (int)v266 >= 1 )
          {
            v268 = 0LL;
            while ( v268 < (unsigned int)v266 )
            {
              if ( !v265 )
                goto LABEL_137;
              piecePersonalityDic = DataMasterBase_object__object__int___TryGetEntity(
                                      v265,
                                      &item,
                                      *(_DWORD *)(v267 + 32 + 4 * v268),
                                      (const MethodInfo_31B2E94 *)Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__TryGetEntity__);
              if ( (piecePersonalityDic & 1) != 0 )
              {
                if ( !v244 )
                  goto LABEL_137;
                piecePersonalityDic = (int64_t)v244->fields.ratingOffsetList;
                if ( !piecePersonalityDic )
                  goto LABEL_137;
                v226 = item;
                v275 = *(struct System_Int32_array **)(piecePersonalityDic + 16);
                v276 = Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__;
                ++*(_DWORD *)(piecePersonalityDic + 28);
                if ( !v275 )
                  goto LABEL_137;
                v277 = *(int *)(piecePersonalityDic + 24);
                if ( (unsigned int)v277 >= v275->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)piecePersonalityDic,
                    v226,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v276[4] + 192LL) + 112LL));
                }
                else
                {
                  v278 = &v275->obj.klass + v277;
                  *(_DWORD *)(piecePersonalityDic + 24) = v277 + 1;
                  v278[4] = (Il2CppClass *)v226;
                  sub_1BCA784(
                    (PartyOrganizationUtility_o *)(v278 + 4),
                    (int64_t)v226,
                    v269,
                    v270,
                    v271,
                    v272,
                    v273,
                    v274);
                }
              }
              LODWORD(v266) = *(_DWORD *)(v267 + 24);
              if ( (__int64)++v268 >= (int)v266 )
                goto LABEL_57;
            }
            goto LABEL_138;
          }
        }
      }
LABEL_57:
      piecePersonalityDic = (int64_t)*p_piecePersonalityDic;
      if ( !*p_piecePersonalityDic )
        goto LABEL_137;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)piecePersonalityDic,
        v242,
        (Il2CppObject *)v244,
        (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
      LODWORD(v241) = aiIds->max_length;
    }
    while ( (__int64)++v242 < (int)v241 );
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v226);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
  v280 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  piecePersonalityDic = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !piecePersonalityDic )
    goto LABEL_137;
  v283 = *(WarBoardData_o **)(piecePersonalityDic + 440);
  if ( !v283 )
    goto LABEL_137;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)v283->fields.pieces;
  v285 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarBoardPieceData__bool__TypeInfo, v226, v281, v282);
  System_Func_object__bool____ctor(v285, (Il2CppObject *)v167, Method_WarBoardAIRoute___ctor_b__42_0__, 0LL);
  piecePersonalityDic = (int64_t)System_Linq_Enumerable__Where_object_(
                                   pieces,
                                   (System_Func_TSource__bool__o *)v285,
                                   (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  if ( !piecePersonalityDic )
    goto LABEL_137;
  v286 = *(System_Collections_Generic_Dictionary_int__object__c **)piecePersonalityDic;
  v287 = piecePersonalityDic;
  v288 = *(unsigned __int16 *)(*(_QWORD *)piecePersonalityDic + 302LL);
  if ( *(_WORD *)(*(_QWORD *)piecePersonalityDic + 302LL) )
  {
    p_offset = &v286->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_WarBoardPieceData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo )
    {
      --v288;
      p_offset += 4;
      if ( !v288 )
        goto LABEL_68;
    }
    v290 = (__int64)(&v286->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_68:
    v290 = sub_1C1C7C0(piecePersonalityDic, System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo, 0LL);
  }
  v292 = (*(__int64 (__fastcall **)(int64_t, _QWORD))v290)(v287, *(_QWORD *)(v290 + 8));
  if ( !v292 )
    sub_1BCAA3C(0LL, v291);
  while ( 1 )
  {
    v293 = *(_QWORD *)v292;
    v294 = *(unsigned __int16 *)(*(_QWORD *)v292 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v292 + 302LL) )
    {
      v295 = (int *)(*(_QWORD *)(v293 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v295 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v294;
        v295 += 4;
        if ( !v294 )
          goto LABEL_75;
      }
      v296 = v293 + 16LL * *v295 + 312;
    }
    else
    {
LABEL_75:
      v296 = sub_1C1C7C0(v292, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v296)(v292, *(_QWORD *)(v296 + 8)) & 1) == 0 )
      break;
    v297 = *(_QWORD *)v292;
    v298 = *(unsigned __int16 *)(*(_QWORD *)v292 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v292 + 302LL) )
    {
      v299 = (int *)(*(_QWORD *)(v297 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_WarBoardPieceData__c **)v299 - 1) != System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo )
      {
        --v298;
        v299 += 4;
        if ( !v298 )
          goto LABEL_82;
      }
      v300 = v297 + 16LL * *v299 + 312;
    }
    else
    {
LABEL_82:
      v300 = sub_1C1C7C0(v292, System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo, 0LL);
    }
    v302 = (int32_t *)(*(__int64 (__fastcall **)(__int64, _QWORD))v300)(v292, *(_QWORD *)(v300 + 8));
    if ( !v302 )
      sub_1BCAA3C(0LL, v301);
    if ( !*p_piecePersonalityDic )
      sub_1BCAA3C(0LL, v301);
    if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
            *p_piecePersonalityDic,
            v302[7],
            (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__ContainsKey__) )
    {
      id = WarBoardData__get_id(v283, 0LL);
      if ( !Master_object )
        sub_1BCAA3C(id, v304);
      v305 = WarBoardStageReinforcementsMaster__TryGetEntity(
               (WarBoardStageReinforcementsMaster_o *)Master_object,
               &v394,
               id,
               v302[72],
               0LL);
      if ( v305 )
      {
        if ( !v394 )
          sub_1BCAA3C(v305, v306);
        v307 = BasicHelper__IndexValue_int_(
                 v394->fields.reinforcementsIds,
                 v302[73],
                 -1,
                 (const MethodInfo_2F01774 *)Method_BasicHelper_IndexValue_int____76842096);
        if ( !v280 )
          sub_1BCAA3C(v307, v308);
        v309 = WarBoardReinforcementsMaster__TryGetEntity((WarBoardReinforcementsMaster_o *)v280, &v393, v307, 0LL);
        if ( v309 )
        {
          if ( !v393 )
            sub_1BCAA3C(v309, v310);
          WarBoardAIRoute__AddPiecePersonalityDic(this, v393->fields.aiId, v302[7], v311);
        }
      }
    }
  }
  v312 = *(_QWORD *)v292;
  v313 = *(unsigned __int16 *)(*(_QWORD *)v292 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v292 + 302LL) )
  {
    v314 = (int *)(*(_QWORD *)(v312 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v314 - 1) != System_IDisposable_TypeInfo )
    {
      --v313;
      v314 += 4;
      if ( !v313 )
        goto LABEL_98;
    }
    v315 = v312 + 16LL * *v314 + 312;
  }
  else
  {
LABEL_98:
    v315 = sub_1C1C7C0(v292, System_IDisposable_TypeInfo, 0LL);
  }
  piecePersonalityDic = (*(__int64 (__fastcall **)(__int64, _QWORD))v315)(v292, *(_QWORD *)(v315 + 8));
  p_ratingBaseIds = (PartyOrganizationUtility_o *)&npc->fields.ratingBaseIds;
  ratingBaseIds = npc->fields.ratingBaseIds;
  if ( !ratingBaseIds )
  {
    v320 = (System_Array_o *)sub_1BCA888(int___TypeInfo, 6LL);
    v399.fields.value = Field__PrivateImplementationDetails__90D856B7ECAC90C26898AF8A46404297AA0EF65768F62FDF8C3F08294BCBEE49;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v320, v399, 0LL);
    p_ratingBaseIds->klass = (PartyOrganizationUtility_c *)v320;
    sub_1BCA784(p_ratingBaseIds, (int64_t)v320, v321, v322, v323, v324, v325, v326);
    ratingBaseIds = (struct System_Int32_array *)p_ratingBaseIds->klass;
    if ( !p_ratingBaseIds->klass )
LABEL_137:
      sub_1BCAA3C(piecePersonalityDic, v226);
  }
  v327 = *(_QWORD *)&ratingBaseIds->max_length;
  if ( (int)v327 >= 1 )
  {
    v328 = 0LL;
    while ( 2 )
    {
      if ( v328 >= (unsigned int)v327 )
        goto LABEL_138;
      piecePersonalityDic = (int64_t)v392;
      if ( v392 )
      {
        v329 = ratingBaseIds->m_Items[v328 + 1];
        piecePersonalityDic = (int64_t)DataManager__GetMasterData_object_(
                                         v392,
                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarBoardRatingBaseMaster___);
        if ( piecePersonalityDic )
        {
          piecePersonalityDic = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)piecePersonalityDic,
                                           v329,
                                           (const MethodInfo_31B2E40 *)Method_DataMasterBase_WarBoardRatingBaseMaster__WarBoardRatingBaseEntity__int__GetEntity__);
          if ( piecePersonalityDic )
          {
            v332 = piecePersonalityDic;
            switch ( *(_DWORD *)(piecePersonalityDic + 20) )
            {
              case 0:
                v333 = &ShortestDistanceFromAllyServant_TypeInfo;
                goto LABEL_115;
              case 1:
                v333 = &ShortestDistanceFromEnemyServant_TypeInfo;
                goto LABEL_115;
              case 2:
                v333 = &ShortestDistanceFromAllyMaster_TypeInfo;
                goto LABEL_115;
              case 3:
                v333 = &ShortestDistanceFromEnemyMaster_TypeInfo;
                goto LABEL_115;
              case 4:
                v333 = &ShortestDistanceFromItem_TypeInfo;
                goto LABEL_115;
              case 5:
                v333 = &ShortestDistanceFromPrioritySpace_TypeInfo;
LABEL_115:
                v334 = sub_1BCAA2C(*v333, v226, v330, v331);
                System_Object___ctor((Il2CppObject *)v334, 0LL);
                if ( !v334 )
                  goto LABEL_137;
                *(_QWORD *)(v334 + 16) = v332;
                sub_1BCA784((PartyOrganizationUtility_o *)(v334 + 16), v332, v335, v336, v337, v338, v339, v340);
                piecePersonalityDic = (int64_t)*p_ratingBaseList;
                if ( !*p_ratingBaseList )
                  goto LABEL_137;
                v347 = *(struct System_Int32_array **)(piecePersonalityDic + 16);
                v348 = Method_System_Collections_Generic_List_WarBoardRatingBase__Add__;
                ++*(_DWORD *)(piecePersonalityDic + 28);
                if ( !v347 )
                  goto LABEL_137;
                v349 = *(int *)(piecePersonalityDic + 24);
                if ( (unsigned int)v349 >= v347->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)piecePersonalityDic,
                    (Il2CppObject *)v334,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v348[4] + 192LL) + 112LL));
                }
                else
                {
                  v350 = &v347->obj.klass + v349;
                  *(_DWORD *)(piecePersonalityDic + 24) = v349 + 1;
                  v350[4] = (Il2CppClass *)v334;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v350 + 4), v334, v341, v342, v343, v344, v345, v346);
                }
LABEL_121:
                v351 = *(_DWORD *)(v332 + 16);
                dicRatingbaseCalcValue = this->fields.dicRatingbaseCalcValue;
                v353 = (WarBoardEvalValueSquare_CalcEval_o *)sub_1BCAA2C(
                                                               WarBoardEvalValueSquare_CalcEval_TypeInfo,
                                                               v226,
                                                               v330,
                                                               v331);
                WarBoardEvalValueSquare_CalcEval___ctor(v353, 0LL);
                if ( !dicRatingbaseCalcValue )
                  goto LABEL_137;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)dicRatingbaseCalcValue,
                  v351,
                  (Il2CppObject *)v353,
                  (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__Add__);
                LODWORD(v327) = ratingBaseIds->max_length;
                if ( (__int64)++v328 >= (int)v327 )
                  goto LABEL_123;
                continue;
              default:
                goto LABEL_121;
            }
          }
        }
      }
      goto LABEL_137;
    }
  }
LABEL_123:
  p_tacticalIds = (PartyOrganizationUtility_o *)&npc->fields.tacticalIds;
  tacticalIds = npc->fields.tacticalIds;
  if ( !tacticalIds )
  {
    v356 = (System_Array_o *)sub_1BCA888(int___TypeInfo, 5LL);
    v400.fields.value = Field__PrivateImplementationDetails__4F6ADDC9659D6FB90FE94B6688A79F2A1FA8D36EC43F8F3E1D9B6528C448A384;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v356, v400, 0LL);
    p_tacticalIds->klass = (PartyOrganizationUtility_c *)v356;
    sub_1BCA784(p_tacticalIds, (int64_t)v356, v357, v358, v359, v360, v361, v362);
    tacticalIds = (struct System_Int32_array *)p_tacticalIds->klass;
    if ( !p_tacticalIds->klass )
      goto LABEL_137;
  }
  v363 = *(_QWORD *)&tacticalIds->max_length;
  if ( (int)v363 >= 1 )
  {
    v364 = 0LL;
    while ( v364 < (unsigned int)v363 )
    {
      if ( !v392 )
        goto LABEL_137;
      v365 = tacticalIds->m_Items[v364 + 1];
      piecePersonalityDic = (int64_t)DataManager__GetMasterData_object_(
                                       v392,
                                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarBoardTacticalTrendMaster___);
      if ( !piecePersonalityDic )
        goto LABEL_137;
      piecePersonalityDic = (int64_t)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)piecePersonalityDic,
                                       v365,
                                       (const MethodInfo_31B2E40 *)Method_DataMasterBase_WarBoardTacticalTrendMaster__WarBoardTacticalTrendEntity__int__GetEntity__);
      v372 = (System_Collections_Generic_List_object__o *)*p_tacticalTrendList;
      if ( !*p_tacticalTrendList )
        goto LABEL_137;
      v373 = v372->fields._items;
      v374 = Method_System_Collections_Generic_List_WarBoardTacticalTrendEntity__Add__;
      ++v372->fields._version;
      if ( !v373 )
        goto LABEL_137;
      v375 = v372->fields._size;
      v376 = piecePersonalityDic;
      if ( (unsigned int)v375 >= v373->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v372,
          (Il2CppObject *)piecePersonalityDic,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v374[4] + 192LL) + 112LL));
      }
      else
      {
        v377 = &v373->obj.klass + v375;
        v372->fields._size = v375 + 1;
        v377[4] = (Il2CppClass *)v376;
        sub_1BCA784((PartyOrganizationUtility_o *)(v377 + 4), v376, v366, v367, v368, v369, v370, v371);
      }
      LODWORD(v363) = tacticalIds->max_length;
      if ( (__int64)++v364 >= (int)v363 )
        goto LABEL_136;
    }
    goto LABEL_138;
  }
LABEL_136:
  forceId = this->fields.forceId;
  groupId = this->fields.groupId;
  v380 = (WarBoardAiTargetCacher_o *)sub_1BCAA2C(WarBoardAiTargetCacher_TypeInfo, v226, v316, v317);
  WarBoardAiTargetCacher___ctor(v380, forceId, groupId, 0LL);
  this->fields.aiTargetCacher = v380;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.aiTargetCacher,
    (int64_t)v380,
    v381,
    v382,
    v383,
    v384,
    v385,
    v386);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardAIRoute__AddPiecePersonalityDic(
        WarBoardAIRoute_o *this,
        int32_t aiId,
        int32_t pieceIndex,
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
  WarBoardAIRoute___c__DisplayClass43_0_o *v37; // x25
  System_Int32_array *Entity; // x0
  Il2CppObject *p_obj; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  struct System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *piecePersonalityDic; // x21
  System_Func_T__TResult__o *v43; // x22
  __int64 v44; // x1
  Il2CppObject *Master_object; // x25
  Il2CppObject *v46; // x24
  Il2CppObject *v47; // x22
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  WarBoardAIRoute_PiecePersonality_o *v51; // x21
  __int64 v52; // x8
  System_Int32_array *v53; // x25
  unsigned __int64 v54; // x29
  __int64 v55; // x2
  __int64 v56; // x3
  System_Collections_Generic_List_object__o *actionTrandList; // x26
  WarBoardActionTrendEntity_o *v58; // x28
  WarBoardAIRoute_ActionTrendInfo_o *v59; // x27
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  struct System_Object_array *items; // x8
  _QWORD *v67; // x9
  __int64 size; // x10
  Il2CppClass **v69; // x0
  __int64 v70; // x8
  System_Int32_array *v71; // x23
  unsigned __int64 v72; // x19
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  Il2CppArrayBounds *bounds; // x8
  _QWORD *v80; // x9
  __int64 max_length; // x10
  Il2CppArrayBounds *v82; // x8
  WarBoardAIRoute___c__DisplayClass43_0_o *v83; // [xsp+8h] [xbp-78h]
  WarBoardAIRoute_o *v84; // [xsp+10h] [xbp-70h]
  WarBoardAIEntity_o *v85; // [xsp+18h] [xbp-68h]

  if ( (byte_4B13CB5 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardAIRoute_ActionTrendInfo_TypeInfo, *(_QWORD *)&aiId, *(_QWORD *)&pieceIndex);
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardAIMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardRatingOffsetMaster___, v11, v12);
    sub_1BCA7E0(&DataManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__GetEntity__, v15, v16);
    sub_1BCA7E0(
      &Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__GetEntity__,
      v17,
      v18);
    sub_1BCA7E0(&Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__GetEntity__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__, v21, v22);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__WarBoardAIRoute_PiecePersonality____, v23, v24);
    sub_1BCA7E0(&System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__, v29, v30);
    sub_1BCA7E0(&WarBoardAIRoute_PiecePersonality_TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_WarBoardAIRoute___c__DisplayClass43_0__AddPiecePersonalityDic_b__0__, v33, v34);
    sub_1BCA7E0(&WarBoardAIRoute___c__DisplayClass43_0_TypeInfo, v35, v36);
    byte_4B13CB5 = 1;
  }
  v37 = (WarBoardAIRoute___c__DisplayClass43_0_o *)sub_1BCAA2C(
                                                     WarBoardAIRoute___c__DisplayClass43_0_TypeInfo,
                                                     *(_QWORD *)&aiId,
                                                     *(_QWORD *)&pieceIndex,
                                                     method);
  WarBoardAIRoute___c__DisplayClass43_0___ctor(v37, 0LL);
  if ( !v37 )
    goto LABEL_37;
  v37->fields.pieceIndex = pieceIndex;
  piecePersonalityDic = this->fields.piecePersonalityDic;
  v43 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                       System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__TypeInfo,
                                       p_obj,
                                       v40,
                                       v41);
  System_Func_KeyValuePair_int__object___bool____ctor(
    v43,
    (Il2CppObject *)v37,
    Method_WarBoardAIRoute___c__DisplayClass43_0__AddPiecePersonalityDic_b__0__,
    0LL);
  if ( System_Linq_Enumerable__Any_KeyValuePair_int__object___49411036(
         (System_Collections_Generic_IEnumerable_TSource__o *)piecePersonalityDic,
         (System_Func_TSource__bool__o *)v43,
         (const MethodInfo_2F1F3DC *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__WarBoardAIRoute_PiecePersonality____) )
  {
    return;
  }
  v83 = v37;
  v84 = this;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v44);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardAIMaster___);
  v46 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  v47 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardRatingOffsetMaster___);
  v51 = (WarBoardAIRoute_PiecePersonality_o *)sub_1BCAA2C(WarBoardAIRoute_PiecePersonality_TypeInfo, v48, v49, v50);
  WarBoardAIRoute_PiecePersonality___ctor(v51, 0LL);
  if ( !Master_object )
    goto LABEL_37;
  Entity = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                   aiId,
                                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_37;
  v85 = (WarBoardAIEntity_o *)Entity;
  Entity = WarBoardAIEntity__GetActionTrendIds((WarBoardAIEntity_o *)Entity, 0LL);
  if ( !Entity )
    goto LABEL_37;
  v52 = *(_QWORD *)&Entity->max_length;
  v53 = Entity;
  if ( (int)v52 >= 1 )
  {
    v54 = 0LL;
    while ( v54 < (unsigned int)v52 )
    {
      if ( !v46 )
        goto LABEL_37;
      Entity = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v46,
                                       v53->m_Items[v54 + 1],
                                       (const MethodInfo_31B2E40 *)Method_DataMasterBase_WarBoardActionTrendMaster__WarBoardActionTrendEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( !v51 )
          goto LABEL_37;
        actionTrandList = (System_Collections_Generic_List_object__o *)v51->fields.actionTrandList;
        v58 = (WarBoardActionTrendEntity_o *)Entity;
        v59 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_1BCAA2C(
                                                     WarBoardAIRoute_ActionTrendInfo_TypeInfo,
                                                     p_obj,
                                                     v55,
                                                     v56);
        WarBoardAIRoute_ActionTrendInfo___ctor(v59, v58, 0LL);
        if ( !actionTrandList )
          goto LABEL_37;
        items = actionTrandList->fields._items;
        v67 = Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__;
        ++actionTrandList->fields._version;
        if ( !items )
          goto LABEL_37;
        size = actionTrandList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            actionTrandList,
            (Il2CppObject *)v59,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
        }
        else
        {
          v69 = &items->obj.klass + size;
          actionTrandList->fields._size = size + 1;
          v69[4] = (Il2CppClass *)v59;
          sub_1BCA784((PartyOrganizationUtility_o *)(v69 + 4), (int64_t)v59, v60, v61, v62, v63, v64, v65);
        }
      }
      LODWORD(v52) = v53->max_length;
      if ( (__int64)++v54 >= (int)v52 )
        goto LABEL_22;
    }
LABEL_38:
    sub_1BCAA44(Entity, p_obj);
  }
LABEL_22:
  Entity = WarBoardAIEntity__GetRatingOffsetIds(v85, 0LL);
  if ( !Entity )
    goto LABEL_37;
  v70 = *(_QWORD *)&Entity->max_length;
  v71 = Entity;
  if ( (int)v70 >= 1 )
  {
    v72 = 0LL;
    while ( v72 < (unsigned int)v70 )
    {
      if ( !v47 )
        goto LABEL_37;
      Entity = (System_Int32_array *)DataMasterBase_object__object__int___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)v47,
                                       v71->m_Items[v72 + 1],
                                       (const MethodInfo_31B2E40 *)Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int__GetEntity__);
      if ( Entity )
      {
        if ( !v51 )
          goto LABEL_37;
        p_obj = &Entity->obj;
        Entity = (System_Int32_array *)v51->fields.ratingOffsetList;
        if ( !Entity )
          goto LABEL_37;
        bounds = Entity->bounds;
        v80 = Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity__Add__;
        ++Entity->m_Items[0];
        if ( !bounds )
          goto LABEL_37;
        max_length = (int)Entity->max_length;
        if ( (unsigned int)max_length >= bounds[3].length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Entity,
            p_obj,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
        }
        else
        {
          v82 = &bounds[max_length];
          Entity->max_length = max_length + 1;
          v82[4] = (Il2CppArrayBounds)p_obj;
          sub_1BCA784((PartyOrganizationUtility_o *)&v82[4], (int64_t)p_obj, v73, v74, v75, v76, v77, v78);
        }
      }
      LODWORD(v70) = v71->max_length;
      if ( (__int64)++v72 >= (int)v70 )
        goto LABEL_35;
    }
    goto LABEL_38;
  }
LABEL_35:
  Entity = (System_Int32_array *)v84->fields.piecePersonalityDic;
  if ( !Entity )
LABEL_37:
    sub_1BCAA3C(Entity, p_obj);
  System_Collections_Generic_Dictionary_int__object___Add(
    (System_Collections_Generic_Dictionary_int__object__o *)Entity,
    v83->fields.pieceIndex,
    (Il2CppObject *)v51,
    (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Add__);
}


void __fastcall WarBoardAIRoute__BeforeCreateRouteData(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
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
  __int64 v99; // x1
  __int64 v100; // x2
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x1
  __int64 v108; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *Instance; // x0
  __int64 v110; // x1
  __int64 v111; // x2
  __int64 v112; // x3
  _QWORD *v113; // x19
  System_Collections_Generic_List_object__o *v114; // x22
  __int64 v115; // x1
  __int64 v116; // x2
  __int64 v117; // x3
  System_Collections_Generic_List_object__o *v118; // x21
  __int64 v119; // x1
  __int64 v120; // x2
  __int64 v121; // x3
  System_Collections_Generic_List_object__o *v122; // x20
  int64_t v123; // x2
  int32_t v124; // w3
  System_String_o *v125; // x4
  BattleSetupInfo_o *v126; // x5
  FollowerInfo_o *v127; // x6
  PartyListViewItem_o *v128; // x7
  __int64 v129; // x24
  int v130; // w8
  unsigned int v131; // w25
  int64_t v132; // x23
  struct System_Object_array *items; // x8
  _QWORD *v134; // x9
  __int64 size; // x10
  Il2CppClass **v136; // x0
  WarBoardAIRoute_o *v137; // x10
  struct System_Object_array *v138; // x8
  _QWORD *v139; // x9
  __int64 v140; // x10
  Il2CppClass **v141; // x0
  struct System_Object_array *v142; // x8
  _QWORD *v143; // x9
  __int64 v144; // x10
  Il2CppClass **v145; // x0
  System_Object_array *v146; // x0
  int64_t v147; // x2
  int32_t v148; // w3
  System_String_o *v149; // x4
  BattleSetupInfo_o *v150; // x5
  FollowerInfo_o *v151; // x6
  PartyListViewItem_o *v152; // x7
  System_Object_array *v153; // x0
  int64_t v154; // x2
  int32_t v155; // w3
  System_String_o *v156; // x4
  BattleSetupInfo_o *v157; // x5
  FollowerInfo_o *v158; // x6
  PartyListViewItem_o *v159; // x7
  struct WarBoardSquareData_array *v160; // x1
  int64_t v161; // x2
  int32_t v162; // w3
  System_String_o *v163; // x4
  BattleSetupInfo_o *v164; // x5
  FollowerInfo_o *v165; // x6
  PartyListViewItem_o *v166; // x7
  struct WarBoardItemData_array *v167; // x1
  int64_t v168; // x2
  int32_t v169; // w3
  System_String_o *v170; // x4
  BattleSetupInfo_o *v171; // x5
  FollowerInfo_o *v172; // x6
  PartyListViewItem_o *v173; // x7
  struct WarBoardTreasureData_array *v174; // x1
  int64_t v175; // x2
  int32_t v176; // w3
  System_String_o *v177; // x4
  BattleSetupInfo_o *v178; // x5
  FollowerInfo_o *v179; // x6
  PartyListViewItem_o *v180; // x7
  struct WarBoardWallData_array *v181; // x1
  int64_t v182; // x2
  int32_t v183; // w3
  System_String_o *v184; // x4
  BattleSetupInfo_o *v185; // x5
  FollowerInfo_o *v186; // x6
  PartyListViewItem_o *v187; // x7
  __int64 v188; // x1
  __int64 v189; // x1
  __int64 v190; // x2
  __int64 v191; // x3
  System_Collections_Generic_List_object__o *v192; // x25
  int32_t forceId; // w19
  int32_t groupId; // w20
  __int64 v195; // x1
  __int64 v196; // x2
  __int64 v197; // x3
  WarBoardAIRoute_AIRouteMasterData_o *v198; // x0
  int32_t v199; // w2
  struct WarBoardAIRoute_AIRouteMasterData_o *v200; // x21
  WarBoardAIRoute_o *v201; // x20
  int64_t v202; // x2
  int32_t v203; // w3
  System_String_o *v204; // x4
  BattleSetupInfo_o *v205; // x5
  FollowerInfo_o *v206; // x6
  PartyListViewItem_o *v207; // x7
  __int64 v208; // x1
  __int64 v209; // x2
  __int64 v210; // x3
  System_Collections_Generic_Dictionary_int__uint__o *v211; // x19
  int64_t v212; // x2
  int32_t v213; // w3
  System_String_o *v214; // x4
  BattleSetupInfo_o *v215; // x5
  FollowerInfo_o *v216; // x6
  PartyListViewItem_o *v217; // x7
  struct WarBoardPieceData_array *allAllyPiece; // x9
  int max_length; // w8
  unsigned int v220; // w10
  __int64 v221; // x2
  __int64 v222; // x3
  int32_t forceId_k__BackingField; // w8
  int32_t v224; // w9
  int32_t v225; // w1
  __int64 v226; // x1
  __int64 v227; // x2
  __int64 v228; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__c *klass; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *v230; // x20
  __int64 v231; // x9
  int *p_offset; // x10
  __int64 v233; // x0
  __int64 v234; // x1
  __int64 v235; // x8
  __int64 v236; // x9
  int *v237; // x10
  __int64 v238; // x0
  __int64 v239; // x8
  __int64 v240; // x9
  int *v241; // x10
  __int64 v242; // x0
  WarBoardAIRoute_ActionTrendInfo_o *v243; // x0
  __int64 v244; // x1
  WarBoardActionTrendEntity_o *Entity_k__BackingField; // x20
  WarBoardActionTrendConditionEntity_array *ConditionEntityArray; // x0
  __int64 v247; // x1
  __int64 v248; // x2
  __int64 v249; // x3
  int v250; // w8
  unsigned int v251; // w9
  WarBoardActionTrendConditionEntity_o *v252; // x25
  struct System_Int32_array *conditionTypes; // x24
  __int64 v254; // x8
  unsigned __int64 v255; // x28
  int32_t v256; // w26
  WarBoardAIRoute___c__DisplayClass45_0_o *v257; // x29
  __int64 v258; // x0
  __int64 v259; // x1
  __int64 ConditionType; // x0
  __int64 squareIndex; // x1
  System_Collections_Generic_Dictionary_int__object__o *dicSquareIndexKeyItemData; // x0
  __int64 v263; // x1
  __int64 v264; // x2
  __int64 v265; // x3
  System_Collections_Generic_IEnumerable_TSource__o *allItemData; // x19
  System_Func_object__bool__o *v267; // x21
  __int64 v268; // x1
  Il2CppObject *v269; // x2
  System_Collections_Generic_Dictionary_int__object__o *v270; // x0
  int32_t v271; // w21
  WarBoardAiTargetCacher_o *aiTargetCacher; // x19
  int64_t TrendKey; // x0
  _BOOL8 IsRegisteredTrendId; // x0
  __int64 v275; // x1
  __int64 v276; // x2
  __int64 v277; // x3
  System_Func_T__TResult__o *v278; // x19
  WarBoardAiTargetCacher_o *v279; // x19
  int64_t v280; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicIndividualityPutSqareIndex; // x21
  int64_t v282; // x19
  int64_t v283; // x23
  __int64 v284; // x1
  __int64 v285; // x2
  __int64 v286; // x3
  WarBoardAIRoute_TargetData_o *v287; // x22
  __int64 v288; // x0
  __int64 v289; // x1
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicObjectPutSquareIndex; // x19
  WarBoardAIRoute_o *v291; // x0
  const MethodInfo *v292; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicSquarePutSqareIndex; // x19
  int64_t v294; // x0
  System_Collections_Generic_IEnumerable_TSource__o *allSquare; // x19
  System_Func_object__bool__o *v296; // x21
  WarBoardSquareData_o *v297; // x21
  int64_t v298; // x22
  __int64 v299; // x1
  __int64 v300; // x2
  __int64 v301; // x3
  WarBoardAIRoute_TargetData_o *v302; // x19
  System_Collections_Generic_Dictionary_TKey__TValue__o *v303; // x21
  int64_t v304; // x0
  __int64 v305; // x8
  __int64 v306; // x9
  int *v307; // x10
  __int64 v308; // x21
  __int64 v309; // x0
  __int64 v310; // x1
  __int64 v311; // x2
  __int64 v312; // x3
  WarBoardAiTargetCacher_o *v313; // x20
  WarBoardAIRoute___c_c *v314; // x8
  System_Func_object__bool__o *_9__45_0; // x19
  Il2CppObject *v316; // x21
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x0
  int64_t v318; // x2
  int32_t v319; // w3
  System_String_o *v320; // x4
  BattleSetupInfo_o *v321; // x5
  FollowerInfo_o *v322; // x6
  PartyListViewItem_o *v323; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v324; // x0
  __int64 v325; // x2
  __int64 v326; // x3
  WarBoardAIRoute_AdvantagePieceData_o *v327; // x20
  struct WarBoardPieceData_array *v328; // x22
  int v329; // w8
  int32_t v330; // w21
  unsigned int v331; // w23
  Il2CppClass **v332; // x8
  Il2CppClass *v333; // x25
  __int64 v334; // x1
  int32_t ClassId; // w19
  float Magnification; // s10
  float v337; // s11
  float v338; // s8
  float v339; // s9
  const MethodInfo *v340; // x1
  struct WarBoardPieceData_array **p_allEnemyPiece; // [xsp+10h] [xbp-110h]
  struct WarBoardAIRoute_AIRouteMasterData_o **p_aiRouteMasterData; // [xsp+18h] [xbp-108h]
  struct WarBoardPieceData_array *v343; // [xsp+20h] [xbp-100h]
  struct System_Collections_Generic_Dictionary_int__uint__o **p_placePieceData; // [xsp+28h] [xbp-F8h]
  unsigned int v345; // [xsp+34h] [xbp-ECh]
  WarBoardPieceData_o *pieceData; // [xsp+38h] [xbp-E8h]
  __int64 v347; // [xsp+40h] [xbp-E0h]
  unsigned int v348; // [xsp+4Ch] [xbp-D4h]
  WarBoardActionTrendConditionEntity_array *condEntityArray; // [xsp+58h] [xbp-C8h]
  System_Collections_Generic_List_IWarBoardObjectData__o *objectList; // [xsp+70h] [xbp-B0h]
  WarBoardAIRoute_DesignationItemData_o *v352; // [xsp+78h] [xbp-A8h]
  WarBoardAIRoute_PutSquareTarget_o *v353; // [xsp+80h] [xbp-A0h]
  bool notSquareTarget; // [xsp+88h] [xbp-98h] BYREF
  int32_t condType; // [xsp+8Ch] [xbp-94h] BYREF
  Il2CppObject *value; // [xsp+98h] [xbp-88h] BYREF

  if ( (byte_4B13CB7 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardAIRoute_AIRouteMasterData_TypeInfo, method, v2);
    sub_1BCA7E0(&WarBoardAIRoute_AdvantagePieceData_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarBoardActionTrendConditionMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&WarBoardAIRoute_DesignationItemData_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__uint__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__, v23, v24);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Add__,
      v25,
      v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__Clear__, v27, v28);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Clear__,
      v29,
      v30);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Clear__,
      v31,
      v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Clear__, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__, v35, v36);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__ContainsKey__, v37, v38);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__, v39, v40);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__,
      v41,
      v42);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__uint___ctor__, v43, v44);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__, v45, v46);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__uint__TypeInfo, v47, v48);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___, v49, v50);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___, v51, v52);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___, v53, v54);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_IWarBoardObjectData___, v55, v56);
    sub_1BCA7E0(&System_Func_IWarBoardObjectData__bool__TypeInfo, v57, v58);
    sub_1BCA7E0(&System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo, v59, v60);
    sub_1BCA7E0(&System_Func_WarBoardItemData__bool__TypeInfo, v61, v62);
    sub_1BCA7E0(&System_Func_WarBoardSquareData__bool__TypeInfo, v63, v64);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v65, v66);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo, v67, v68);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo, v69, v70);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v71, v72);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__, v73, v74);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, v75, v76);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__, v77, v78);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v79, v80);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_IWarBoardObjectData___ctor__, v81, v82);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v83, v84);
    sub_1BCA7E0(&System_Collections_Generic_List_IWarBoardObjectData__TypeInfo, v85, v86);
    sub_1BCA7E0(&WarBoardAIRoute_PutSquareTarget_TypeInfo, v87, v88);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v89, v90);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v91, v92);
    sub_1BCA7E0(&SvtClassAttri_TypeInfo, v93, v94);
    sub_1BCA7E0(&WarBoardAIRoute_TargetData_TypeInfo, v95, v96);
    sub_1BCA7E0(&Method_WarBoardAIRoute___c__BeforeCreateRouteData_b__45_0__, v97, v98);
    sub_1BCA7E0(&Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__1__, v99, v100);
    sub_1BCA7E0(&Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__2__, v101, v102);
    sub_1BCA7E0(&WarBoardAIRoute___c__DisplayClass45_0_TypeInfo, v103, v104);
    sub_1BCA7E0(&WarBoardAIRoute___c_TypeInfo, v105, v106);
    sub_1BCA7E0(&Method_WarBoardActionTrendConditionEntity_IsTargetTeamCond__, v107, v108);
    byte_4B13CB7 = 1;
  }
  value = 0LL;
  condType = 0;
  notSquareTarget = 0;
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_223;
  v113 = *(_QWORD **)&Instance[5].fields._freeCount;
  v114 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                        v110,
                                                        v111,
                                                        v112);
  System_Collections_Generic_List_object____ctor(
    v114,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v118 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                        v115,
                                                        v116,
                                                        v117);
  System_Collections_Generic_List_object____ctor(
    v118,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v122 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                        v119,
                                                        v120,
                                                        v121);
  System_Collections_Generic_List_object____ctor(
    v122,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( !v113 )
    goto LABEL_223;
  v129 = v113[6];
  if ( !v129 )
    goto LABEL_223;
  v130 = *(_DWORD *)(v129 + 24);
  if ( v130 >= 1 )
  {
    v131 = 0;
    while ( 1 )
    {
      if ( v131 >= v130 )
LABEL_224:
        sub_1BCAA44(Instance, v110);
      if ( !v122 )
        break;
      v132 = *(_QWORD *)(v129 + 8LL * (int)v131 + 32);
      items = v122->fields._items;
      v134 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
      ++v122->fields._version;
      if ( !items )
        break;
      size = v122->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v122,
          (Il2CppObject *)v132,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v134[4] + 192LL) + 112LL));
      }
      else
      {
        v136 = &items->obj.klass + size;
        v122->fields._size = size + 1;
        v136[4] = (Il2CppClass *)v132;
        sub_1BCA784((PartyOrganizationUtility_o *)(v136 + 4), v132, v123, v124, v125, v126, v127, v128);
      }
      if ( !v132 )
        break;
      if ( !*(_BYTE *)(v132 + 60) )
      {
        v137 = this;
        if ( *(_DWORD *)(v132 + 20) == this->fields.forceId && *(_DWORD *)(v132 + 24) == this->fields.groupId )
        {
          if ( !v114 )
            break;
          v138 = v114->fields._items;
          v139 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
          ++v114->fields._version;
          if ( !v138 )
            break;
          v140 = v114->fields._size;
          if ( (unsigned int)v140 >= v138->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v114,
              (Il2CppObject *)v132,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v139[4] + 192LL) + 112LL));
          }
          else
          {
            v141 = &v138->obj.klass + v140;
            v114->fields._size = v140 + 1;
            v141[4] = (Il2CppClass *)v132;
            sub_1BCA784((PartyOrganizationUtility_o *)(v141 + 4), v132, v123, v124, v125, v126, v127, v128);
          }
          v137 = this;
        }
        if ( *(_DWORD *)(v132 + 20) != v137->fields.forceId )
        {
          if ( !v118 )
            break;
          v142 = v118->fields._items;
          v143 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
          ++v118->fields._version;
          if ( !v142 )
            break;
          v144 = v118->fields._size;
          if ( (unsigned int)v144 >= v142->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v118,
              (Il2CppObject *)v132,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v143[4] + 192LL) + 112LL));
          }
          else
          {
            v145 = &v142->obj.klass + v144;
            v118->fields._size = v144 + 1;
            v145[4] = (Il2CppClass *)v132;
            sub_1BCA784((PartyOrganizationUtility_o *)(v145 + 4), v132, v123, v124, v125, v126, v127, v128);
          }
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardPieceData__get_isMaster(
                                                                                (WarBoardPieceData_o *)v132,
                                                                                0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            this->fields.enemyMasterSquareIndex = *(_DWORD *)(v132 + 64);
        }
      }
      v130 = *(_DWORD *)(v129 + 24);
      if ( (int)++v131 >= v130 )
        goto LABEL_33;
    }
LABEL_223:
    sub_1BCAA3C(Instance, v110);
  }
LABEL_33:
  if ( !v114 )
    goto LABEL_223;
  v146 = System_Collections_Generic_List_object___ToArray(
           v114,
           (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  this->fields.allAllyPiece = (struct WarBoardPieceData_array *)v146;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.allAllyPiece,
    (int64_t)v146,
    v147,
    v148,
    v149,
    v150,
    v151,
    v152);
  if ( !v118 )
    goto LABEL_223;
  v153 = System_Collections_Generic_List_object___ToArray(
           v118,
           (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  this->fields.allEnemyPiece = (struct WarBoardPieceData_array *)v153;
  p_allEnemyPiece = &this->fields.allEnemyPiece;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.allEnemyPiece,
    (int64_t)v153,
    v154,
    v155,
    v156,
    v157,
    v158,
    v159);
  v160 = (struct WarBoardSquareData_array *)v113[7];
  this->fields.allSquare = v160;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.allSquare, (int64_t)v160, v161, v162, v163, v164, v165, v166);
  v167 = (struct WarBoardItemData_array *)v113[9];
  this->fields.allItemData = v167;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.allItemData,
    (int64_t)v167,
    v168,
    v169,
    v170,
    v171,
    v172,
    v173);
  v174 = (struct WarBoardTreasureData_array *)v113[10];
  this->fields.allTreasureData = v174;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.allTreasureData,
    (int64_t)v174,
    v175,
    v176,
    v177,
    v178,
    v179,
    v180);
  v181 = (struct WarBoardWallData_array *)v113[11];
  this->fields.allWallData = v181;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.allWallData,
    (int64_t)v181,
    v182,
    v183,
    v184,
    v185,
    v186,
    v187);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dictionaryCreateRouteDataEvalValue;
  if ( !Instance )
    goto LABEL_223;
  System_Collections_Generic_Dictionary_object__float___Clear(
    Instance,
    (const MethodInfo_326E5C4 *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyDesignationItem;
  if ( !Instance )
    goto LABEL_223;
  System_Collections_Generic_Dictionary_uint__object___Clear(
    Instance,
    (const MethodInfo_329E050 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyTarget;
  if ( !Instance )
    goto LABEL_223;
  System_Collections_Generic_Dictionary_uint__object___Clear(
    Instance,
    (const MethodInfo_329E050 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyAdvantagePieceData;
  if ( !Instance )
    goto LABEL_223;
  System_Collections_Generic_Dictionary_uint__object___Clear(
    Instance,
    (const MethodInfo_329E050 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Clear__);
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_223;
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarBoardActionTrendConditionMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v188);
  DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  v192 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_IWarBoardObjectData__TypeInfo,
                                                        v189,
                                                        v190,
                                                        v191);
  System_Collections_Generic_List_object____ctor(
    v192,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_IWarBoardObjectData___ctor__);
  if ( !v192 )
    goto LABEL_223;
  System_Collections_Generic_List_object___AddRange(
    v192,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.allItemData,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v192,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.allTreasureData,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v192,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.allWallData,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  objectList = (System_Collections_Generic_List_IWarBoardObjectData__o *)v192;
  System_Collections_Generic_List_object___AddRange(
    v192,
    (System_Collections_Generic_IEnumerable_T__o *)v122,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_IWarBoardObjectData__AddRange__);
  forceId = this->fields.forceId;
  groupId = this->fields.groupId;
  v198 = (WarBoardAIRoute_AIRouteMasterData_o *)sub_1BCAA2C(
                                                  WarBoardAIRoute_AIRouteMasterData_TypeInfo,
                                                  v195,
                                                  v196,
                                                  v197);
  v199 = groupId;
  v200 = v198;
  v201 = this;
  WarBoardAIRoute_AIRouteMasterData___ctor(v198, forceId, v199, 0LL);
  this->fields.aiRouteMasterData = v200;
  p_aiRouteMasterData = &this->fields.aiRouteMasterData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.aiRouteMasterData,
    (int64_t)v200,
    v202,
    v203,
    v204,
    v205,
    v206,
    v207);
  v211 = (System_Collections_Generic_Dictionary_int__uint__o *)sub_1BCAA2C(
                                                                 System_Collections_Generic_Dictionary_int__uint__TypeInfo,
                                                                 v208,
                                                                 v209,
                                                                 v210);
  System_Collections_Generic_Dictionary_int__uint____ctor(
    v211,
    (const MethodInfo_32110B4 *)Method_System_Collections_Generic_Dictionary_int__uint___ctor__);
  this->fields.placePieceData = v211;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.placePieceData,
    (int64_t)v211,
    v212,
    v213,
    v214,
    v215,
    v216,
    v217);
  allAllyPiece = this->fields.allAllyPiece;
  p_placePieceData = &this->fields.placePieceData;
  if ( !allAllyPiece )
    goto LABEL_223;
  max_length = allAllyPiece->max_length;
  if ( max_length >= 1 )
  {
    v220 = 0;
    v343 = this->fields.allAllyPiece;
    while ( 1 )
    {
      if ( v220 >= max_length )
        goto LABEL_224;
      pieceData = allAllyPiece->m_Items[v220];
      if ( !pieceData )
        goto LABEL_223;
      v345 = v220;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_placePieceData;
      if ( !*p_placePieceData )
        goto LABEL_223;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_int__uint___ContainsKey(
                                                                            (System_Collections_Generic_Dictionary_int__uint__o *)Instance,
                                                                            pieceData->fields._nowSquareIndex_k__BackingField,
                                                                            (const MethodInfo_3211C64 *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        goto LABEL_199;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_placePieceData;
      if ( !*p_placePieceData )
        goto LABEL_223;
      System_Collections_Generic_Dictionary_int__uint___Add(
        (System_Collections_Generic_Dictionary_int__uint__o *)Instance,
        pieceData->fields._nowSquareIndex_k__BackingField,
        pieceData->fields._uniqueIndex_k__BackingField,
        (const MethodInfo_3211A78 *)Method_System_Collections_Generic_Dictionary_int__uint__Add__);
      forceId_k__BackingField = pieceData->fields._forceId_k__BackingField;
      v224 = v201->fields.forceId;
      if ( forceId_k__BackingField != v224 )
        goto LABEL_57;
      if ( pieceData->fields._groupId_k__BackingField == v201->fields.groupId )
        break;
LABEL_58:
      if ( pieceData->fields._groupId_k__BackingField == v201->fields.groupId )
      {
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_aiRouteMasterData;
        if ( !*p_aiRouteMasterData )
          goto LABEL_223;
        v225 = 2;
        goto LABEL_61;
      }
LABEL_62:
      v352 = (WarBoardAIRoute_DesignationItemData_o *)sub_1BCAA2C(
                                                        WarBoardAIRoute_DesignationItemData_TypeInfo,
                                                        v110,
                                                        v221,
                                                        v222);
      WarBoardAIRoute_DesignationItemData___ctor(v352, 0LL);
      v353 = (WarBoardAIRoute_PutSquareTarget_o *)sub_1BCAA2C(
                                                    WarBoardAIRoute_PutSquareTarget_TypeInfo,
                                                    v226,
                                                    v227,
                                                    v228);
      WarBoardAIRoute_PutSquareTarget___ctor(v353, 0LL);
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v201->fields.piecePersonalityDic;
      if ( !Instance )
        goto LABEL_223;
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                                                            (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                                                                            pieceData->fields._index_k__BackingField,
                                                                            &value,
                                                                            (const MethodInfo_3207670 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)value;
        if ( !value )
          goto LABEL_223;
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend(
                                                                              (WarBoardAIRoute_PiecePersonality_o *)value,
                                                                              0LL);
        if ( !Instance )
          goto LABEL_223;
        klass = Instance->klass;
        v230 = Instance;
        v231 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo )
          {
            --v231;
            p_offset += 4;
            if ( !v231 )
              goto LABEL_70;
          }
          v233 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_70:
          v233 = sub_1C1C7C0(
                   Instance,
                   System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__TypeInfo,
                   0LL);
        }
        v347 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_TKey__TValue__o *, _QWORD))v233)(
                 v230,
                 *(_QWORD *)(v233 + 8));
        if ( !v347 )
          sub_1BCAA3C(0LL, v234);
        while ( 1 )
        {
LABEL_73:
          v235 = *(_QWORD *)v347;
          v236 = *(unsigned __int16 *)(*(_QWORD *)v347 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v347 + 302LL) )
          {
            v237 = (int *)(*(_QWORD *)(v235 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v237 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v236;
              v237 += 4;
              if ( !v236 )
                goto LABEL_77;
            }
            v238 = v235 + 16LL * *v237 + 312;
          }
          else
          {
LABEL_77:
            v238 = sub_1C1C7C0(v347, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v238)(v347, *(_QWORD *)(v238 + 8)) & 1) == 0 )
            break;
          v239 = *(_QWORD *)v347;
          v240 = *(unsigned __int16 *)(*(_QWORD *)v347 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v347 + 302LL) )
          {
            v241 = (int *)(*(_QWORD *)(v239 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__c **)v241 - 1) != System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo )
            {
              --v240;
              v241 += 4;
              if ( !v240 )
                goto LABEL_84;
            }
            v242 = v239 + 16LL * *v241 + 312;
          }
          else
          {
LABEL_84:
            v242 = sub_1C1C7C0(
                     v347,
                     System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__TypeInfo,
                     0LL);
          }
          v243 = (WarBoardAIRoute_ActionTrendInfo_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v242)(
                                                        v347,
                                                        *(_QWORD *)(v242 + 8));
          if ( !v243 )
            sub_1BCAA3C(0LL, v244);
          Entity_k__BackingField = v243->fields._Entity_k__BackingField;
          ConditionEntityArray = WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(v243, 0LL);
          if ( !ConditionEntityArray )
            sub_1BCAA3C(0LL, v247);
          v250 = ConditionEntityArray->max_length;
          if ( v250 >= 1 )
          {
            v251 = 0;
            condEntityArray = ConditionEntityArray;
            while ( 1 )
            {
              if ( v251 >= v250 )
                sub_1BCAA44(ConditionEntityArray, v247);
              v252 = ConditionEntityArray->m_Items[v251];
              if ( !v252 )
                sub_1BCAA3C(ConditionEntityArray, v247);
              conditionTypes = v252->fields.conditionTypes;
              if ( !conditionTypes )
                sub_1BCAA3C(ConditionEntityArray, v247);
              v254 = *(_QWORD *)&conditionTypes->max_length;
              v348 = v251;
              if ( (int)v254 >= 1 )
                break;
LABEL_137:
              ConditionEntityArray = condEntityArray;
              v250 = condEntityArray->max_length;
              v251 = v348 + 1;
              if ( (int)(v348 + 1) >= v250 )
                goto LABEL_73;
            }
            v255 = 0LL;
            while ( 2 )
            {
              if ( v255 >= (unsigned int)v254 )
                sub_1BCAA44(ConditionEntityArray, v247);
              v256 = conditionTypes->m_Items[v255 + 1];
              v257 = (WarBoardAIRoute___c__DisplayClass45_0_o *)sub_1BCAA2C(
                                                                  WarBoardAIRoute___c__DisplayClass45_0_TypeInfo,
                                                                  v247,
                                                                  v248,
                                                                  v249);
              WarBoardAIRoute___c__DisplayClass45_0___ctor(v257, 0LL);
              if ( !v257 )
                sub_1BCAA3C(v258, v259);
              v257->fields.squareIndex = -1;
              ConditionType = WarBoardActionTrendConditionEntity__GetConditionType(v252, v256, 0LL);
              if ( (int)ConditionType <= 39 )
              {
                if ( (_DWORD)ConditionType == 23 || (_DWORD)ConditionType == 24 )
                  goto LABEL_104;
LABEL_136:
                squareIndex = (unsigned int)v257->fields.squareIndex;
              }
              else
              {
                if ( (_DWORD)ConditionType != 40 && (_DWORD)ConditionType != 41 && (_DWORD)ConditionType != 42 )
                  goto LABEL_136;
LABEL_104:
                squareIndex = (unsigned int)v252->fields.value;
                v257->fields.squareIndex = squareIndex;
              }
              if ( (_DWORD)squareIndex != -1 )
              {
                if ( !v352 )
                  sub_1BCAA3C(ConditionType, squareIndex);
                dicSquareIndexKeyItemData = (System_Collections_Generic_Dictionary_int__object__o *)v352->fields.dicSquareIndexKeyItemData;
                if ( !dicSquareIndexKeyItemData )
                  sub_1BCAA3C(0LL, squareIndex);
                if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                        dicSquareIndexKeyItemData,
                        squareIndex,
                        (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__ContainsKey__) )
                {
                  allItemData = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.allItemData;
                  v267 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                          System_Func_WarBoardItemData__bool__TypeInfo,
                                                          v263,
                                                          v264,
                                                          v265);
                  System_Func_object__bool____ctor(
                    v267,
                    (Il2CppObject *)v257,
                    Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__1__,
                    0LL);
                  v269 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
                           allItemData,
                           (System_Func_TSource__bool__o *)v267,
                           (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___);
                  if ( v269 )
                  {
                    v270 = (System_Collections_Generic_Dictionary_int__object__o *)v352->fields.dicSquareIndexKeyItemData;
                    if ( !v270 )
                      sub_1BCAA3C(0LL, v268);
                    System_Collections_Generic_Dictionary_int__object___Add(
                      v270,
                      v257->fields.squareIndex,
                      v269,
                      (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__);
                  }
                }
              }
              v257->fields.squareIndex = -1;
              ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)WarBoardActionTrendConditionEntity__GetConditionType(
                                                                                   v252,
                                                                                   v256,
                                                                                   0LL);
              if ( (_DWORD)ConditionEntityArray == 74 || (_DWORD)ConditionEntityArray == 75 )
              {
                v271 = v252->fields.value;
                v257->fields.squareIndex = v271;
              }
              else
              {
                if ( (unsigned int)((_DWORD)ConditionEntityArray - 127) <= 1 )
                {
                  if ( !Entity_k__BackingField )
                    sub_1BCAA3C(ConditionEntityArray, v247);
                  aiTargetCacher = this->fields.aiTargetCacher;
                  TrendKey = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                  if ( !aiTargetCacher )
                    sub_1BCAA3C(TrendKey, TrendKey);
                  IsRegisteredTrendId = WarBoardAiTargetCacher__IsRegisteredTrendId(aiTargetCacher, TrendKey, 0LL);
                  if ( !IsRegisteredTrendId )
                  {
                    v278 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                                          System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo,
                                                          v275,
                                                          v276,
                                                          v277);
                    System_Func_Int32Enum__bool____ctor(
                      v278,
                      0LL,
                      Method_WarBoardActionTrendConditionEntity_IsTargetTeamCond__,
                      0LL);
                    WarBoardActionTrendConditionMaster__HasMatchCondition(
                      condEntityArray,
                      (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)v278,
                      &condType,
                      0LL);
                    v279 = this->fields.aiTargetCacher;
                    v280 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                    if ( !v279 )
                      sub_1BCAA3C(v280, v280);
                    WarBoardAiTargetCacher__Register(v279, v280, v252, condType, 0LL);
                  }
                  if ( !v353 )
                    sub_1BCAA3C(IsRegisteredTrendId, v275);
                  dicIndividualityPutSqareIndex = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v353->fields.dicIndividualityPutSqareIndex;
                  v282 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                  v283 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                  v287 = (WarBoardAIRoute_TargetData_o *)sub_1BCAA2C(
                                                           WarBoardAIRoute_TargetData_TypeInfo,
                                                           v284,
                                                           v285,
                                                           v286);
                  WarBoardAIRoute_TargetData___ctor(v287, v283, v256, 0LL);
                  if ( !dicIndividualityPutSqareIndex )
                    sub_1BCAA3C(v288, v289);
                  System_Collections_Generic_Dictionary_long__object___set_Item(
                    dicIndividualityPutSqareIndex,
                    v282,
                    (Il2CppObject *)v287,
                    (const MethodInfo_3244010 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
                }
                v271 = v257->fields.squareIndex;
              }
              if ( v271 != -1 )
              {
                if ( !v353 )
                  sub_1BCAA3C(ConditionEntityArray, v247);
                if ( !Entity_k__BackingField )
                  sub_1BCAA3C(ConditionEntityArray, v247);
                dicObjectPutSquareIndex = v353->fields.dicObjectPutSquareIndex;
                v291 = (WarBoardAIRoute_o *)WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                WarBoardAIRoute__RegisterTargetObjectToDic(
                  v291,
                  dicObjectPutSquareIndex,
                  objectList,
                  v271,
                  (int64_t)v291,
                  v256,
                  &notSquareTarget,
                  v292);
                if ( !notSquareTarget )
                {
                  dicSquarePutSqareIndex = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v353->fields.dicSquarePutSqareIndex;
                  v294 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                  if ( !dicSquarePutSqareIndex )
                    sub_1BCAA3C(v294, v294);
                  ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Collections_Generic_Dictionary_long__object___ContainsKey(
                                                                                       dicSquarePutSqareIndex,
                                                                                       v294,
                                                                                       (const MethodInfo_3244218 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__);
                  if ( ((unsigned __int8)ConditionEntityArray & 1) == 0 )
                  {
                    allSquare = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.allSquare;
                    v296 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                            System_Func_WarBoardSquareData__bool__TypeInfo,
                                                            v247,
                                                            v248,
                                                            v249);
                    System_Func_object__bool____ctor(
                      v296,
                      (Il2CppObject *)v257,
                      Method_WarBoardAIRoute___c__DisplayClass45_0__BeforeCreateRouteData_b__2__,
                      0LL);
                    ConditionEntityArray = (WarBoardActionTrendConditionEntity_array *)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                                                                                         allSquare,
                                                                                         (System_Func_TSource__bool__o *)v296,
                                                                                         (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
                    v297 = (WarBoardSquareData_o *)ConditionEntityArray;
                    if ( ConditionEntityArray )
                    {
                      v298 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                      v302 = (WarBoardAIRoute_TargetData_o *)sub_1BCAA2C(
                                                               WarBoardAIRoute_TargetData_TypeInfo,
                                                               v299,
                                                               v300,
                                                               v301);
                      WarBoardAIRoute_TargetData___ctor_35996916(v302, v297, v298, v256, 0LL);
                      v303 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v353->fields.dicSquarePutSqareIndex;
                      v304 = WarBoardActionTrendEntity__get_TrendKey(Entity_k__BackingField, 0LL);
                      if ( !v303 )
                        sub_1BCAA3C(v304, v304);
                      System_Collections_Generic_Dictionary_long__object___Add(
                        v303,
                        v304,
                        (Il2CppObject *)v302,
                        (const MethodInfo_3244024 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
                    }
                  }
                }
              }
              LODWORD(v254) = conditionTypes->max_length;
              if ( (__int64)++v255 >= (int)v254 )
                goto LABEL_137;
              continue;
            }
          }
        }
        v305 = *(_QWORD *)v347;
        v306 = *(unsigned __int16 *)(*(_QWORD *)v347 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v347 + 302LL) )
        {
          v307 = (int *)(*(_QWORD *)(v305 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v307 - 1) != System_IDisposable_TypeInfo )
          {
            --v306;
            v307 += 4;
            if ( !v306 )
              goto LABEL_143;
          }
          v308 = v347;
          v309 = v305 + 16LL * *v307 + 312;
        }
        else
        {
LABEL_143:
          v308 = v347;
          v309 = sub_1C1C7C0(v347, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v309)(v308, *(_QWORD *)(v309 + 8));
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.aiTargetCacher;
        if ( !Instance )
          goto LABEL_223;
        WarBoardAiTargetCacher__ClearTargetObject((WarBoardAiTargetCacher_o *)Instance, 0LL);
        v313 = this->fields.aiTargetCacher;
        v314 = WarBoardAIRoute___c_TypeInfo;
        if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo, v310);
          v314 = WarBoardAIRoute___c_TypeInfo;
        }
        _9__45_0 = (System_Func_object__bool__o *)v314->static_fields->__9__45_0;
        if ( !_9__45_0 )
        {
          if ( !v314->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v314, v310);
            v314 = WarBoardAIRoute___c_TypeInfo;
          }
          v316 = (Il2CppObject *)v314->static_fields->__9;
          _9__45_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                      System_Func_IWarBoardObjectData__bool__TypeInfo,
                                                      v310,
                                                      v311,
                                                      v312);
          System_Func_object__bool____ctor(
            _9__45_0,
            v316,
            Method_WarBoardAIRoute___c__BeforeCreateRouteData_b__45_0__,
            0LL);
          static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
          static_fields->__9__45_0 = (struct System_Func_IWarBoardObjectData__bool__o *)_9__45_0;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&static_fields->__9__45_0,
            (int64_t)_9__45_0,
            v318,
            v319,
            v320,
            v321,
            v322,
            v323);
        }
        v324 = System_Linq_Enumerable__Where_object_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)objectList,
                 (System_Func_TSource__bool__o *)_9__45_0,
                 (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__ToArray_object_(
                                                                              v324,
                                                                              (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_IWarBoardObjectData___);
        if ( !v313 )
          goto LABEL_223;
        WarBoardAiTargetCacher__AggregateTargetObject(v313, (IWarBoardObjectData_array *)Instance, 0LL);
        v201 = this;
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyDesignationItem;
        if ( !Instance )
          goto LABEL_223;
        System_Collections_Generic_Dictionary_uint__object___Add(
          Instance,
          pieceData->fields._uniqueIndex_k__BackingField,
          (Il2CppObject *)v352,
          (const MethodInfo_329DEC8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__Add__);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyTarget;
        if ( !Instance )
          goto LABEL_223;
        System_Collections_Generic_Dictionary_uint__object___Add(
          Instance,
          pieceData->fields._uniqueIndex_k__BackingField,
          (Il2CppObject *)v353,
          (const MethodInfo_329DEC8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__Add__);
        Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardPieceData__get_isServant(
                                                                              pieceData,
                                                                              0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          v327 = (WarBoardAIRoute_AdvantagePieceData_o *)sub_1BCAA2C(
                                                           WarBoardAIRoute_AdvantagePieceData_TypeInfo,
                                                           v110,
                                                           v325,
                                                           v326);
          WarBoardAIRoute_AdvantagePieceData___ctor(v327, 0LL);
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pieceData->fields._battleServant_k__BackingField;
          if ( !Instance )
            goto LABEL_223;
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)BattleServantData__getClassId(
                                                                                (BattleServantData_o *)Instance,
                                                                                0LL);
          v328 = *p_allEnemyPiece;
          if ( !*p_allEnemyPiece )
            goto LABEL_223;
          v329 = v328->max_length;
          if ( v329 >= 1 )
          {
            v330 = (int)Instance;
            v331 = 0;
            while ( 2 )
            {
              if ( v331 >= v329 )
                goto LABEL_224;
              v332 = &v328->obj.klass + (int)v331;
              v333 = v332[4];
              if ( !v333 )
                goto LABEL_223;
              Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)WarBoardPieceData__get_isMaster(
                                                                                    (WarBoardPieceData_o *)v332[4],
                                                                                    0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                goto LABEL_196;
              Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v333->_1.fields;
              if ( !Instance )
                goto LABEL_223;
              ClassId = BattleServantData__getClassId((BattleServantData_o *)Instance, 0LL);
              if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo, v334);
              Magnification = SvtClassAttri__getMagnification(v330, ClassId, 0LL);
              v337 = SvtClassAttri__getMagnification(ClassId, v330, 0LL);
              v338 = SvtClassAttri__getMagnification(v330, ClassId, 0LL);
              v339 = SvtClassAttri__getMagnification(ClassId, v330, 0LL);
              if ( Magnification <= 1.0 )
              {
                if ( v337 >= 1.0 )
                  goto LABEL_175;
                if ( !v327 )
                  goto LABEL_223;
              }
              else
              {
                if ( !v327 )
                  goto LABEL_223;
                Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v327->fields.dicAttackAdvantageServant;
                if ( !Instance )
                  goto LABEL_223;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                  (int32_t)v333->_1.element_class,
                  (Il2CppObject *)v333,
                  (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                v327->fields.flagNow |= 0x4000uLL;
                if ( v337 >= 1.0 )
                {
LABEL_175:
                  if ( v338 >= 1.0 )
                  {
                    if ( v339 > 1.0 )
                    {
                      if ( !v327 )
                        goto LABEL_223;
                      goto LABEL_182;
                    }
                  }
                  else
                  {
                    if ( !v327 )
                      goto LABEL_223;
                    Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v327->fields.dicAttackDisAdvantageServant;
                    if ( !Instance )
                      goto LABEL_223;
                    System_Collections_Generic_Dictionary_int__object___Add(
                      (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                      (int32_t)v333->_1.element_class,
                      (Il2CppObject *)v333,
                      (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                    v327->fields.flagNow |= 0x8000uLL;
                    if ( v339 <= 1.0 )
                      goto LABEL_184;
LABEL_182:
                    Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v327->fields.dicDefenseDisAdvantageServant;
                    if ( !Instance )
                      goto LABEL_223;
                    System_Collections_Generic_Dictionary_int__object___Add(
                      (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                      (int32_t)v333->_1.element_class,
                      (Il2CppObject *)v333,
                      (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                    v327->fields.flagNow |= 0x20000uLL;
                  }
LABEL_184:
                  if ( Magnification <= 1.0 || v337 >= 1.0 )
                  {
                    if ( v338 < 1.0 && v339 > 1.0 )
                    {
                      if ( !v327 )
                        goto LABEL_223;
LABEL_194:
                      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v327->fields.dicClassDisAdvantageServant;
                      if ( !Instance )
                        goto LABEL_223;
                      System_Collections_Generic_Dictionary_int__object___Add(
                        (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                        (int32_t)v333->_1.element_class,
                        (Il2CppObject *)v333,
                        (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                      v327->fields.flagNow |= 0x2000uLL;
                    }
                  }
                  else
                  {
                    if ( !v327 )
                      goto LABEL_223;
                    Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v327->fields.dicClassAdvantageServant;
                    if ( !Instance )
                      goto LABEL_223;
                    System_Collections_Generic_Dictionary_int__object___Add(
                      (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                      (int32_t)v333->_1.element_class,
                      (Il2CppObject *)v333,
                      (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
                    v327->fields.flagNow |= 0x1000uLL;
                    if ( v338 < 1.0 && v339 > 1.0 )
                      goto LABEL_194;
                  }
LABEL_196:
                  v329 = v328->max_length;
                  if ( (int)++v331 >= v329 )
                    goto LABEL_197;
                  continue;
                }
              }
              break;
            }
            Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v327->fields.dicDefenseAdvantageServant;
            if ( !Instance )
              goto LABEL_223;
            System_Collections_Generic_Dictionary_int__object___Add(
              (System_Collections_Generic_Dictionary_int__object__o *)Instance,
              (int32_t)v333->_1.element_class,
              (Il2CppObject *)v333,
              (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
            v327->fields.flagNow |= 0x10000uLL;
            goto LABEL_175;
          }
LABEL_197:
          Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyAdvantagePieceData;
          if ( !Instance )
            goto LABEL_223;
          System_Collections_Generic_Dictionary_uint__object___Add(
            Instance,
            pieceData->fields._uniqueIndex_k__BackingField,
            (Il2CppObject *)v327,
            (const MethodInfo_329DEC8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__Add__);
          v201 = this;
        }
      }
LABEL_199:
      allAllyPiece = v343;
      max_length = v343->max_length;
      v220 = v345 + 1;
      if ( (int)(v345 + 1) >= max_length )
        goto LABEL_221;
    }
    if ( WarBoardPieceData__get_isMaster(pieceData, 0LL) )
    {
      Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_aiRouteMasterData;
      if ( !*p_aiRouteMasterData )
        goto LABEL_223;
      v225 = 0;
LABEL_61:
      WarBoardAIRoute_AIRouteMasterData__SetAIRouteMasterData(
        (WarBoardAIRoute_AIRouteMasterData_o *)Instance,
        v225,
        pieceData,
        0LL);
      goto LABEL_62;
    }
    forceId_k__BackingField = pieceData->fields._forceId_k__BackingField;
    v224 = v201->fields.forceId;
LABEL_57:
    if ( forceId_k__BackingField != v224 )
      goto LABEL_62;
    goto LABEL_58;
  }
LABEL_221:
  Instance = (System_Collections_Generic_Dictionary_TKey__TValue__o *)*p_aiRouteMasterData;
  if ( !*p_aiRouteMasterData )
    goto LABEL_223;
  WarBoardAIRoute_AIRouteMasterData__SetAIRouteMasterData((WarBoardAIRoute_AIRouteMasterData_o *)Instance, 1, 0LL, 0LL);
  WarBoardAIRoute__CreateOutOfWarningAreaToDistance(v201, v340);
}


int32_t __fastcall WarBoardAIRoute__CalcurateDistanceType(
        int32_t newDistance,
        int32_t oldDistance,
        const MethodInfo *method)
{
  if ( newDistance == oldDistance )
    return 2;
  if ( newDistance < oldDistance )
    return 1;
  return 3;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardAIRoute__CanAcquireItem(
        WarBoardAIRoute_o *this,
        int32_t targetSquare,
        System_Collections_Generic_List_int__o *alreadyGetItemList,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  const MethodInfo *v8; // x1
  WarBoardItemData_o *Item; // x0

  if ( (byte_4B13CC1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, *(_QWORD *)&targetSquare, alreadyGetItemList);
    this = (WarBoardAIRoute_o *)sub_1BCA7E0(&WarBoardAIManager_TypeInfo, v6, v7);
    byte_4B13CC1 = 1;
  }
  if ( !alreadyGetItemList )
    sub_1BCAA3C(this, *(_QWORD *)&targetSquare);
  if ( System_Collections_Generic_List_int___Contains(
         alreadyGetItemList,
         targetSquare,
         (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    return 0;
  }
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v8);
  Item = WarBoardAIManager__GetItem(targetSquare, v8);
  return Item && !WarBoardItemData__get_Acquired(Item, 0LL);
}


void __fastcall WarBoardAIRoute__ClassAdvantageDistance(
        WarBoardAIRoute_o *this,
        WarBoardAIRoute_RouteData_o **routeData,
        WarBoardAIRoute_AdvantagePieceData_o *advantagePieceData,
        int32_t actionSquareIndex,
        const MethodInfo *method)
{
  WarBoardAIRoute_RouteData_o *v5; // x0
  const MethodInfo *v9; // x3
  WarBoardAIRoute_RouteData_o *v10; // x22
  const MethodInfo *v11; // x3
  WarBoardAIRoute_RouteData_o *v12; // x22
  const MethodInfo *v13; // x3
  WarBoardAIRoute_RouteData_o *v14; // x22
  const MethodInfo *v15; // x3
  WarBoardAIRoute_RouteData_o *v16; // x22
  const MethodInfo *v17; // x3
  WarBoardAIRoute_RouteData_o *v18; // x22
  const MethodInfo *v19; // x3
  WarBoardAIRoute_RouteData_o *v20; // x21

  v5 = *routeData;
  if ( !*routeData || !advantagePieceData )
    goto LABEL_27;
  v5->fields.flagNow |= advantagePieceData->fields.flagNow;
  if ( WarBoardAIRoute_RouteData__HasFlag(v5, 4096LL, 0LL) )
  {
    v10 = *routeData;
    v5 = (WarBoardAIRoute_RouteData_o *)WarBoardAIRoute__CompareBaseRangeToActionRange(
                                          advantagePieceData->fields.dicClassAdvantageServant,
                                          advantagePieceData->fields.baseCARange,
                                          actionSquareIndex,
                                          v9);
    if ( !v10 )
      goto LABEL_27;
    v10->fields.isMoveByServantAndClassAdvantageServantRange = (int)v5;
  }
  v5 = *routeData;
  if ( !*routeData )
    goto LABEL_27;
  if ( WarBoardAIRoute_RouteData__HasFlag(v5, 0x2000LL, 0LL) )
  {
    v12 = *routeData;
    v5 = (WarBoardAIRoute_RouteData_o *)WarBoardAIRoute__CompareBaseRangeToActionRange(
                                          advantagePieceData->fields.dicClassDisAdvantageServant,
                                          advantagePieceData->fields.baseCDARange,
                                          actionSquareIndex,
                                          v11);
    if ( !v12 )
      goto LABEL_27;
    v12->fields.isMoveByServantAndClassDisAdvantageServantRange = (int)v5;
  }
  v5 = *routeData;
  if ( !*routeData )
    goto LABEL_27;
  if ( WarBoardAIRoute_RouteData__HasFlag(v5, 0x4000LL, 0LL) )
  {
    v14 = *routeData;
    v5 = (WarBoardAIRoute_RouteData_o *)WarBoardAIRoute__CompareBaseRangeToActionRange(
                                          advantagePieceData->fields.dicAttackAdvantageServant,
                                          advantagePieceData->fields.baseAARange,
                                          actionSquareIndex,
                                          v13);
    if ( !v14 )
      goto LABEL_27;
    v14->fields.isMoveByServantAndAttackAdvantageServantRange = (int)v5;
  }
  v5 = *routeData;
  if ( !*routeData )
    goto LABEL_27;
  if ( WarBoardAIRoute_RouteData__HasFlag(v5, 0x8000LL, 0LL) )
  {
    v16 = *routeData;
    v5 = (WarBoardAIRoute_RouteData_o *)WarBoardAIRoute__CompareBaseRangeToActionRange(
                                          advantagePieceData->fields.dicAttackDisAdvantageServant,
                                          advantagePieceData->fields.baseADARange,
                                          actionSquareIndex,
                                          v15);
    if ( !v16 )
      goto LABEL_27;
    v16->fields.isMoveByServantAndAttackDisAdvantageServantRange = (int)v5;
  }
  v5 = *routeData;
  if ( !*routeData )
    goto LABEL_27;
  if ( WarBoardAIRoute_RouteData__HasFlag(v5, 0x10000LL, 0LL) )
  {
    v18 = *routeData;
    v5 = (WarBoardAIRoute_RouteData_o *)WarBoardAIRoute__CompareBaseRangeToActionRange(
                                          advantagePieceData->fields.dicDefenseAdvantageServant,
                                          advantagePieceData->fields.baseDARange,
                                          actionSquareIndex,
                                          v17);
    if ( !v18 )
      goto LABEL_27;
    v18->fields.isMoveByServantAndDefenseAdvantageServantRange = (int)v5;
  }
  v5 = *routeData;
  if ( !*routeData )
    goto LABEL_27;
  if ( !WarBoardAIRoute_RouteData__HasFlag(v5, 0x20000LL, 0LL) )
    return;
  v20 = *routeData;
  v5 = (WarBoardAIRoute_RouteData_o *)WarBoardAIRoute__CompareBaseRangeToActionRange(
                                        advantagePieceData->fields.dicDefenseDisAdvantageServant,
                                        advantagePieceData->fields.baseDDARange,
                                        actionSquareIndex,
                                        v19);
  if ( !v20 )
LABEL_27:
    sub_1BCAA3C(v5, routeData);
  v20->fields.isMoveByServantAndDefenseDisAdvantageServantRange = (int)v5;
}


void __fastcall WarBoardAIRoute__Clear(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardAIRoute_o *v3; // x19
  struct System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___o *allRouteList; // x8
  int32_t size; // w2
  int v6; // w9

  v3 = this;
  if ( (byte_4B13CB3 & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_1BCA7E0(
                                  &Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Clear__,
                                  method,
                                  v2);
    byte_4B13CB3 = 1;
  }
  allRouteList = v3->fields.allRouteList;
  if ( !allRouteList )
    sub_1BCAA3C(this, method);
  size = allRouteList->fields._size;
  v6 = allRouteList->fields._version + 1;
  allRouteList->fields._size = 0;
  allRouteList->fields._version = v6;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)allRouteList->fields._items, 0, size, 0LL);
}


int32_t __fastcall WarBoardAIRoute__CompareBaseRange(int32_t baseRange, int32_t actionRange, const MethodInfo *method)
{
  if ( actionRange < baseRange )
    return 1;
  if ( actionRange == baseRange )
    return 2;
  return 3;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WarBoardAIRoute__CompareBaseRangeToActionRange(
        System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *dicPieceList,
        int32_t baseRange,
        int32_t actionIndex,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *v6; // x19
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
  int32_t v19; // w19
  __int64 v20; // x1
  int32_t key; // w22
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  int32_t v23; // w0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v25; // [xsp+0h] [xbp-80h] BYREF

  v6 = dicPieceList;
  if ( (byte_4B13CC0 & 1) == 0 )
  {
    sub_1BCA7E0(&AStarSearch_TypeInfo, *(_QWORD *)&baseRange, *(_QWORD *)&actionIndex);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_int___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__, v13, v14);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__,
      v15,
      v16);
    dicPieceList = (System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)sub_1BCA7E0(
                                                                                        &Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__,
                                                                                        v17,
                                                                                        v18);
    byte_4B13CC0 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  if ( !v6 )
    sub_1BCAA3C(dicPieceList, *(_QWORD *)&baseRange);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v25,
    (System_Collections_Generic_Dictionary_int__object__o *)v6,
    (const MethodInfo_320631C *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v19 = 3;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v25,
            (const MethodInfo_335671C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
  {
    key = (int32_t)v25.fields._current.fields.key;
    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo, v20);
    v22 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                 0LL,
                                                                 actionIndex,
                                                                 key,
                                                                 0,
                                                                 0LL,
                                                                 0LL);
    v23 = System_Linq_Enumerable__Count_int_(
            v22,
            (const MethodInfo_2F2DBBC *)Method_System_Linq_Enumerable_Count_int___);
    if ( v23 < baseRange )
    {
      v19 = 1;
      break;
    }
    if ( v23 == baseRange )
      v19 = 2;
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v25,
    (const MethodInfo_3356840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
  return v19;
}


void __fastcall WarBoardAIRoute__CreateOutOfWarningAreaToDistance(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_Dictionary_int__int__o *v12; // x21
  struct System_Collections_Generic_Dictionary_int__int__o **p_dicOutOfWarningAreaRange; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Collections_Generic_Dictionary_int__int__o *IsFlag; // x0
  __int64 v21; // x1
  struct WarBoardSquareData_array *allSquare; // x25
  int max_length; // w8
  int v24; // w26
  Il2CppClass **v25; // x8
  Il2CppClass *v26; // x21
  struct WarBoardSquareData_array *v27; // x29
  int v28; // w8
  unsigned int v29; // w20
  int v30; // w22
  Il2CppClass **v31; // x8
  Il2CppClass *v32; // x23
  int32_t name; // w24
  int32_t v34; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  int32_t v37; // w1
  const MethodInfo_31FD274 *v38; // x3
  int32_t v39; // w2
  struct System_Collections_Generic_Dictionary_int__int__o **v40; // [xsp+0h] [xbp-70h]

  if ( (byte_4B13CCC & 1) == 0 )
  {
    sub_1BCA7E0(&AStarSearch_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_int___, v10, v11);
    byte_4B13CCC = 1;
  }
  v12 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               method,
                                                               v2,
                                                               v3);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v12,
    (const MethodInfo_31FC8B0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.dicOutOfWarningAreaRange = v12;
  p_dicOutOfWarningAreaRange = &this->fields.dicOutOfWarningAreaRange;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.dicOutOfWarningAreaRange,
    (int64_t)v12,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  allSquare = this->fields.allSquare;
  if ( !allSquare )
LABEL_33:
    sub_1BCAA3C(IsFlag, v21);
  max_length = allSquare->max_length;
  if ( max_length >= 1 )
  {
    v24 = 0;
    v40 = &this->fields.dicOutOfWarningAreaRange;
    do
    {
      if ( v24 >= (unsigned int)max_length )
        goto LABEL_34;
      v25 = &allSquare->obj.klass + v24;
      v26 = v25[4];
      if ( !v26 )
        goto LABEL_33;
      IsFlag = (System_Collections_Generic_Dictionary_int__int__o *)WarBoardSquareData__IsFlag(
                                                                      (WarBoardSquareData_o *)v25[4],
                                                                      1,
                                                                      0LL);
      if ( ((unsigned __int8)IsFlag & 1) != 0 )
      {
        v27 = this->fields.allSquare;
        if ( !v27 )
          goto LABEL_33;
        v28 = v27->max_length;
        if ( v28 >= 1 )
        {
          v29 = 0;
          v30 = -1;
          while ( v29 < v28 )
          {
            v31 = &v27->obj.klass + (int)v29;
            v32 = v31[4];
            if ( !v32 )
              goto LABEL_33;
            IsFlag = (System_Collections_Generic_Dictionary_int__int__o *)WarBoardSquareData__IsFlag(
                                                                            (WarBoardSquareData_o *)v31[4],
                                                                            1,
                                                                            0LL);
            if ( ((unsigned __int8)IsFlag & 1) != 0 )
              goto LABEL_37;
            name = (int32_t)v26->_1.name;
            v34 = (int32_t)v32->_1.name;
            if ( !AStarSearch_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo, v21);
            v35 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                         0LL,
                                                                         name,
                                                                         v34,
                                                                         0,
                                                                         0LL,
                                                                         0LL);
            IsFlag = (System_Collections_Generic_Dictionary_int__int__o *)System_Linq_Enumerable__Count_int_(
                                                                            v35,
                                                                            (const MethodInfo_2F2DBBC *)Method_System_Linq_Enumerable_Count_int___);
            if ( v30 > (int)IsFlag - 1 || v30 == -1 )
              v30 = (_DWORD)IsFlag - 1;
            if ( v30 >= 2 )
            {
LABEL_37:
              v28 = v27->max_length;
              if ( (int)++v29 < v28 )
                continue;
            }
            goto LABEL_29;
          }
LABEL_34:
          sub_1BCAA44(IsFlag, v21);
        }
        v30 = -1;
LABEL_29:
        p_dicOutOfWarningAreaRange = &this->fields.dicOutOfWarningAreaRange;
        IsFlag = *v40;
        if ( !*v40 )
          goto LABEL_33;
        v37 = (int32_t)v26->_1.name;
        v38 = (const MethodInfo_31FD274 *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
        v39 = v30;
      }
      else
      {
        IsFlag = *p_dicOutOfWarningAreaRange;
        if ( !*p_dicOutOfWarningAreaRange )
          goto LABEL_33;
        v37 = (int32_t)v26->_1.name;
        v38 = (const MethodInfo_31FD274 *)Method_System_Collections_Generic_Dictionary_int__int__Add__;
        v39 = 0;
      }
      System_Collections_Generic_Dictionary_int__int___Add(IsFlag, v37, v39, v38);
      max_length = allSquare->max_length;
      ++v24;
    }
    while ( v24 < max_length );
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall WarBoardAIRoute__CreateRouteData(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        int32_t searchCount,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *routeDataList,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4B13CB9 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardAIRoute__CreateRouteData_d__47_TypeInfo, piecePlaceData, *(_QWORD *)&searchCount);
    byte_4B13CB9 = 1;
  }
  v9 = sub_1BCAA2C(
         WarBoardAIRoute__CreateRouteData_d__47_TypeInfo,
         piecePlaceData,
         *(_QWORD *)&searchCount,
         routeDataList);
  WarBoardAIRoute__CreateRouteData_d__47___ctor((WarBoardAIRoute__CreateRouteData_d__47_o *)v9, 0, 0LL);
  if ( !v9 )
    sub_1BCAA3C(v10, v11);
  *(_QWORD *)(v9 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v9 + 32), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 56) = piecePlaceData;
  sub_1BCA784((PartyOrganizationUtility_o *)(v9 + 56), (int64_t)piecePlaceData, v18, v19, v20, v21, v22, v23);
  *(_DWORD *)(v9 + 40) = searchCount;
  *(_QWORD *)(v9 + 48) = routeDataList;
  sub_1BCA784((PartyOrganizationUtility_o *)(v9 + 48), (int64_t)routeDataList, v24, v25, v26, v27, v28, v29);
  return (System_Collections_IEnumerator_o *)v9;
}


// local variable allocation has failed, the output may be wrong!
WarBoardPieceData_o *__fastcall WarBoardAIRoute__GetActionPiece(
        WarBoardAIRoute_o *this,
        WarBoardPieceData_o *basePiece,
        int32_t actionSquareIndex,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x1
  uint32_t v10; // w19
  uint32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B13CD1 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__,
      basePiece,
      *(_QWORD *)&actionSquareIndex);
    this = (WarBoardAIRoute_o *)sub_1BCA7E0(&WarBoardAIManager_TypeInfo, v7, v8);
    byte_4B13CD1 = 1;
  }
  value = 0;
  if ( !piecePlaceData )
    sub_1BCAA3C(this, basePiece);
  if ( System_Collections_Generic_Dictionary_int__uint___TryGetValue(
         piecePlaceData,
         actionSquareIndex,
         &value,
         (const MethodInfo_3213110 *)Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__) )
  {
    v10 = value;
    if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v9);
    return WarBoardAIManager__GetPieceUnique(v10, v9);
  }
  else
  {
    if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v9);
    return WarBoardAIManager__GetEnemyPieceSquareIndex(actionSquareIndex, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
WarBoardAIRoute_AdvantagePieceData_o *__fastcall WarBoardAIRoute__GetAdvantagePieceData(
        WarBoardAIRoute_o *this,
        WarBoardPieceData_o *basePiece,
        int32_t baseSquareIndex,
        const MethodInfo *method)
{
  WarBoardAIRoute_o *v6; // x21
  WarBoardAIRoute_AdvantagePieceData_o *v7; // x20
  _BOOL8 HasFlag_35995008; // x0
  const MethodInfo *v9; // x3
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x3
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x3
  _BOOL8 v14; // x0
  const MethodInfo *v15; // x3
  _BOOL8 v16; // x0
  const MethodInfo *v17; // x3
  _BOOL8 v18; // x0
  const MethodInfo *v19; // x3

  v6 = this;
  if ( (byte_4B13CCF & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_1BCA7E0(
                                  &Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__get_Item__,
                                  basePiece,
                                  *(_QWORD *)&baseSquareIndex);
    byte_4B13CCF = 1;
  }
  if ( !basePiece
    || (this = (WarBoardAIRoute_o *)v6->fields.dicUniqueKeyAdvantagePieceData) == 0LL
    || (this = (WarBoardAIRoute_o *)System_Collections_Generic_Dictionary_uint__object___get_Item(
                                      (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
                                      basePiece->fields._uniqueIndex_k__BackingField,
                                      (const MethodInfo_329DE28 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_AdvantagePieceData__get_Item__)) == 0LL )
  {
    sub_1BCAA3C(this, basePiece);
  }
  v7 = (WarBoardAIRoute_AdvantagePieceData_o *)this;
  HasFlag_35995008 = WarBoardAIRoute_RouteData__HasFlag_35995008(
                       *(_QWORD *)&this->fields.TEMP_SEARCH_DEPTH,
                       4096LL,
                       0LL);
  if ( HasFlag_35995008 )
    v7->fields.baseCARange = WarBoardAIRoute__GetRangeShortMost(
                               (WarBoardAIRoute_o *)HasFlag_35995008,
                               v7->fields.dicClassAdvantageServant,
                               baseSquareIndex,
                               v9);
  v10 = WarBoardAIRoute_RouteData__HasFlag_35995008(v7->fields.flagNow, 0x2000LL, 0LL);
  if ( v10 )
    v7->fields.baseCDARange = WarBoardAIRoute__GetRangeShortMost(
                                (WarBoardAIRoute_o *)v10,
                                v7->fields.dicClassDisAdvantageServant,
                                baseSquareIndex,
                                v11);
  v12 = WarBoardAIRoute_RouteData__HasFlag_35995008(v7->fields.flagNow, 0x4000LL, 0LL);
  if ( v12 )
    v7->fields.baseAARange = WarBoardAIRoute__GetRangeShortMost(
                               (WarBoardAIRoute_o *)v12,
                               v7->fields.dicAttackAdvantageServant,
                               baseSquareIndex,
                               v13);
  v14 = WarBoardAIRoute_RouteData__HasFlag_35995008(v7->fields.flagNow, 0x8000LL, 0LL);
  if ( v14 )
    v7->fields.baseADARange = WarBoardAIRoute__GetRangeShortMost(
                                (WarBoardAIRoute_o *)v14,
                                v7->fields.dicAttackDisAdvantageServant,
                                baseSquareIndex,
                                v15);
  v16 = WarBoardAIRoute_RouteData__HasFlag_35995008(v7->fields.flagNow, 0x10000LL, 0LL);
  if ( v16 )
    v7->fields.baseDARange = WarBoardAIRoute__GetRangeShortMost(
                               (WarBoardAIRoute_o *)v16,
                               v7->fields.dicDefenseAdvantageServant,
                               baseSquareIndex,
                               v17);
  v18 = WarBoardAIRoute_RouteData__HasFlag_35995008(v7->fields.flagNow, 0x20000LL, 0LL);
  if ( v18 )
    v7->fields.baseDDARange = WarBoardAIRoute__GetRangeShortMost(
                                (WarBoardAIRoute_o *)v18,
                                v7->fields.dicDefenseDisAdvantageServant,
                                baseSquareIndex,
                                v19);
  return v7;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_Dictionary_uint__int__o *__fastcall WarBoardAIRoute__GetAllEnemyToDistance(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *routeDataList,
        int32_t baseSquareIndex,
        int32_t *servantAndEnemyRange,
        int32_t *servantAndEnemyMasterRange,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_Dictionary_uint__int__o *v18; // x22
  __int64 isMaster; // x0
  __int64 v20; // x1
  struct WarBoardPieceData_array *allEnemyPiece; // x25
  int max_length; // w8
  unsigned int v23; // w26
  WarBoardPieceData_o *v24; // x23
  int32_t nowSquareIndex_k__BackingField; // w24
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  int32_t v27; // w24

  if ( (byte_4B13CCB & 1) == 0 )
  {
    sub_1BCA7E0(&AStarSearch_TypeInfo, routeDataList, *(_QWORD *)&baseSquareIndex);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_uint__int__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_uint__int__TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_int___, v16, v17);
    byte_4B13CCB = 1;
  }
  *servantAndEnemyRange = -1;
  *servantAndEnemyMasterRange = -1;
  v18 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_1BCAA2C(
                                                                System_Collections_Generic_Dictionary_uint__int__TypeInfo,
                                                                routeDataList,
                                                                *(_QWORD *)&baseSquareIndex,
                                                                servantAndEnemyRange);
  System_Collections_Generic_Dictionary_uint__int____ctor(
    v18,
    (const MethodInfo_329432C *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
  allEnemyPiece = this->fields.allEnemyPiece;
  if ( !allEnemyPiece )
    goto LABEL_20;
  max_length = allEnemyPiece->max_length;
  if ( max_length >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      if ( v23 >= max_length )
        sub_1BCAA44(isMaster, v20);
      v24 = allEnemyPiece->m_Items[v23];
      if ( !v24 )
        break;
      nowSquareIndex_k__BackingField = v24->fields._nowSquareIndex_k__BackingField;
      if ( !AStarSearch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo, v20);
      v26 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0LL,
                                                                   baseSquareIndex,
                                                                   nowSquareIndex_k__BackingField,
                                                                   0,
                                                                   0LL,
                                                                   0LL);
      isMaster = System_Linq_Enumerable__Count_int_(
                   v26,
                   (const MethodInfo_2F2DBBC *)Method_System_Linq_Enumerable_Count_int___);
      if ( !v18 )
        break;
      v27 = isMaster;
      System_Collections_Generic_Dictionary_uint__int___Add(
        v18,
        v24->fields._uniqueIndex_k__BackingField,
        isMaster,
        (const MethodInfo_3294CF0 *)Method_System_Collections_Generic_Dictionary_uint__int__Add__);
      if ( *servantAndEnemyRange == -1 || v27 < *servantAndEnemyRange )
        *servantAndEnemyRange = v27;
      isMaster = WarBoardPieceData__get_isMaster(v24, 0LL);
      if ( (isMaster & 1) != 0 && (*servantAndEnemyMasterRange == -1 || v27 < *servantAndEnemyMasterRange) )
        *servantAndEnemyMasterRange = v27;
      max_length = allEnemyPiece->max_length;
      if ( (int)++v23 >= max_length )
        return v18;
    }
LABEL_20:
    sub_1BCAA3C(isMaster, v20);
  }
  return v18;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall WarBoardAIRoute__GetAllyPutSquareIndicesWithoutMaster(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        int32_t masterSquareIndex,
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
  WarBoardAIRoute___c__DisplayClass51_0_o *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x8
  int32_t masterType; // w20
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Collections_Generic_IEnumerable_TSource__o *Keys; // x19
  System_Func_int__bool__o *v26; // x20

  if ( (byte_4B13CBC & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__uint__get_Keys__,
      piecePlaceData,
      *(_QWORD *)&masterSquareIndex);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_int___, v9, v10);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_WarBoardAIRoute___c__DisplayClass51_0__GetAllyPutSquareIndicesWithoutMaster_b__0__, v13, v14);
    sub_1BCA7E0(&WarBoardAIRoute___c__DisplayClass51_0_TypeInfo, v15, v16);
    byte_4B13CBC = 1;
  }
  v17 = (WarBoardAIRoute___c__DisplayClass51_0_o *)sub_1BCAA2C(
                                                     WarBoardAIRoute___c__DisplayClass51_0_TypeInfo,
                                                     piecePlaceData,
                                                     *(_QWORD *)&masterSquareIndex,
                                                     method);
  WarBoardAIRoute___c__DisplayClass51_0___ctor(v17, 0LL);
  if ( !v17
    || (v17->fields.masterSquareIndex = masterSquareIndex, (aiRouteMasterData = this->fields.aiRouteMasterData) == 0LL)
    || !piecePlaceData )
  {
    sub_1BCAA3C(v18, v19);
  }
  masterType = aiRouteMasterData->fields.masterType;
  Keys = (System_Collections_Generic_IEnumerable_TSource__o *)System_Collections_Generic_Dictionary_int__uint___get_Keys(
                                                                piecePlaceData,
                                                                (const MethodInfo_321173C *)Method_System_Collections_Generic_Dictionary_int__uint__get_Keys__);
  if ( masterType != 1 )
  {
    v26 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v22, v23, v24);
    System_Func_int__bool____ctor(
      v26,
      (Il2CppObject *)v17,
      Method_WarBoardAIRoute___c__DisplayClass51_0__GetAllyPutSquareIndicesWithoutMaster_b__0__,
      0LL);
    Keys = System_Linq_Enumerable__Where_int_(
             Keys,
             (System_Func_TSource__bool__o *)v26,
             (const MethodInfo_2F515C0 *)Method_System_Linq_Enumerable_Where_int___);
  }
  return System_Linq_Enumerable__ToArray_int_(
           Keys,
           (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
}


// local variable allocation has failed, the output may be wrong!
DefenseAreaData_o *__fastcall WarBoardAIRoute__GetDefenseAreaData(
        WarBoardAIRoute_o *this,
        int32_t masterSquareIndex,
        System_Int32_array *allyPieces,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
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
  __int64 v40; // x25
  System_Collections_Generic_Dictionary_int__object__o *dicSquareIndexEnemyPiece; // x0
  __int64 v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  __int64 v49; // x2
  __int64 v50; // x3
  struct WarBoardStageNpcEntity_o *npcData; // x8
  int32_t defenseArea; // w20
  DefenseAreaData_o *v53; // x19
  const MethodInfo *v54; // x3
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  System_Collections_Generic_Dictionary_int__object__o *v58; // x20
  __int64 v59; // x2
  WarBoardAIManager_c *v60; // x0
  char v61; // w10
  bool v62; // w8
  bool IsDetour; // w25
  __int64 v64; // x1
  int32_t key; // w26
  Il2CppObject *value; // x27
  System_Int32_array *v67; // x28
  __int64 v68; // x0
  __int64 v69; // x1
  int32_t v70; // w25
  __int64 v71; // x0
  __int64 v72; // x1
  const MethodInfo *v73; // x2
  int32_t MasterAndEnemyRange_k__BackingField; // w8
  __int64 v75; // x1
  const MethodInfo *v76; // x2
  const MethodInfo *v77; // x3
  BalanceConfig_c *v78; // x0
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x3
  System_Func_int__bool__o *klass; // x28
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  const MethodInfo *v89; // x2
  __int64 v90; // x8
  __int64 v91; // x21
  __int64 v92; // x1
  const MethodInfo *v93; // x2
  BalanceConfig_c *v94; // x0
  __int64 v95; // x8
  Il2CppObject *object; // [xsp+0h] [xbp-E0h]
  PartyOrganizationUtility_o *v98; // [xsp+8h] [xbp-D8h]
  bool v100; // [xsp+1Ch] [xbp-C4h]
  char v101; // [xsp+20h] [xbp-C0h]
  bool v102; // [xsp+24h] [xbp-BCh]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v103; // [xsp+28h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v104; // [xsp+50h] [xbp-90h] BYREF

  if ( (byte_4B13CBD & 1) == 0 )
  {
    sub_1BCA7E0(&AStarSearch_TypeInfo, *(_QWORD *)&masterSquareIndex, allyPieces);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v8, v9);
    sub_1BCA7E0(&DefenseAreaData_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int____Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_int___, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__, v24, v25);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__,
      v26,
      v27);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Value__, v32, v33);
    sub_1BCA7E0(&Method_WarBoardAIRoute___c__DisplayClass52_0__GetDefenseAreaData_b__0__, v34, v35);
    sub_1BCA7E0(&WarBoardAIRoute___c__DisplayClass52_0_TypeInfo, v36, v37);
    sub_1BCA7E0(&WarBoardAIManager_TypeInfo, v38, v39);
    byte_4B13CBD = 1;
  }
  memset(&v104, 0, sizeof(v104));
  v40 = sub_1BCAA2C(
          WarBoardAIRoute___c__DisplayClass52_0_TypeInfo,
          *(_QWORD *)&masterSquareIndex,
          allyPieces,
          piecePlaceData);
  WarBoardAIRoute___c__DisplayClass52_0___ctor((WarBoardAIRoute___c__DisplayClass52_0_o *)v40, 0LL);
  if ( !v40 )
    goto LABEL_52;
  *(_QWORD *)(v40 + 16) = piecePlaceData;
  sub_1BCA784((PartyOrganizationUtility_o *)(v40 + 16), (int64_t)piecePlaceData, v43, v44, v45, v46, v47, v48);
  npcData = this->fields.npcData;
  if ( !npcData )
    goto LABEL_52;
  defenseArea = npcData->fields.defenseArea;
  v53 = (DefenseAreaData_o *)sub_1BCAA2C(DefenseAreaData_TypeInfo, v42, v49, v50);
  DefenseAreaData___ctor(v53, masterSquareIndex, defenseArea, v54);
  v58 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__int____TypeInfo,
                                                                  v55,
                                                                  v56,
                                                                  v57);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v58,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v42);
  if ( !byte_4B13CDC )
  {
    sub_1BCA7E0(&WarBoardAIManager_TypeInfo, v42, v59);
    byte_4B13CDC = 1;
  }
  v60 = WarBoardAIManager_TypeInfo;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v42);
    v60 = WarBoardAIManager_TypeInfo;
  }
  dicSquareIndexEnemyPiece = (System_Collections_Generic_Dictionary_int__object__o *)v60->static_fields->dicSquareIndexEnemyPiece;
  if ( !dicSquareIndexEnemyPiece )
    goto LABEL_52;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v103,
    dicSquareIndexEnemyPiece,
    (const MethodInfo_320631C *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v61 = 0;
  object = (Il2CppObject *)v40;
  v98 = (PartyOrganizationUtility_o *)(v40 + 24);
  v62 = 1;
  IsDetour = 1;
  v104 = v103;
LABEL_13:
  v100 = v62;
LABEL_14:
  v101 = v61;
  v102 = IsDetour;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v104,
            (const MethodInfo_335671C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
  {
    key = (int32_t)v104.fields._current.fields.key;
    value = v104.fields._current.fields.value;
    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo, v64);
    v67 = AStarSearch__RouteSearch(0LL, masterSquareIndex, key, 0, 0LL, 0LL);
    v68 = System_Linq_Enumerable__Count_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v67,
            (const MethodInfo_2F2DBBC *)Method_System_Linq_Enumerable_Count_int___);
    if ( !v58 )
      sub_1BCAA3C(v68, v69);
    v70 = v68;
    System_Collections_Generic_Dictionary_int__object___Add(
      v58,
      key,
      &v67->obj,
      (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
    if ( !v53 )
      sub_1BCAA3C(v71, v72);
    MasterAndEnemyRange_k__BackingField = v53->fields._MasterAndEnemyRange_k__BackingField;
    if ( MasterAndEnemyRange_k__BackingField == -1 || MasterAndEnemyRange_k__BackingField > v70 )
      v53->fields._MasterAndEnemyRange_k__BackingField = v70;
    if ( DefenseAreaData__IsInDefenseArea(v53, key, v73) )
    {
      v78 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v75);
        v78 = BalanceConfig_TypeInfo;
      }
      if ( !v78->static_fields->IsEnableOldBlockShortestRoute )
      {
        if ( !v67 )
          sub_1BCAA3C(v78, v75);
        if ( (int)v67->max_length >= 2 )
          DefenseAreaData__SetComparisonAllMasterAndEnemyRange(v53, v67->m_Items[2], v70, v77);
      }
      IsDetour = 0;
      v61 = 1;
      if ( v102 )
      {
        IsDetour = WarBoardAIRoute__IsDetour(v67, allyPieces, v76);
        v62 = 0;
        v61 = 1;
        if ( v100 )
        {
          klass = (System_Func_int__bool__o *)v98->klass;
          if ( !v98->klass )
          {
            klass = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v79, v80, v81);
            System_Func_int__bool____ctor(
              klass,
              object,
              Method_WarBoardAIRoute___c__DisplayClass52_0__GetDefenseAreaData_b__0__,
              0LL);
            v98->klass = (PartyOrganizationUtility_c *)klass;
            sub_1BCA784(v98, (int64_t)klass, v83, v84, v85, v86, v87, v88);
          }
          if ( !AStarSearch_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo, v79);
          v62 = AStarSearch__RouteSearch((WarBoardPieceData_o *)value, key, masterSquareIndex, 0, klass, 0LL) == 0LL;
          v61 = 1;
        }
        goto LABEL_13;
      }
      goto LABEL_14;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v104,
    (const MethodInfo_3356840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
  v90 = 1025LL;
  if ( (v101 & 1) == 0 )
    v90 = 1LL;
  v91 = v102 ? v90 | 0x2000000000LL : v90;
  if ( !v53 )
LABEL_52:
    sub_1BCAA3C(dicSquareIndexEnemyPiece, v42);
  DefenseAreaData__CreateShortestRoutes(v53, (System_Collections_Generic_Dictionary_int__int____o *)v58, v89);
  v94 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v92);
    v94 = BalanceConfig_TypeInfo;
  }
  if ( !v94->static_fields->IsEnableOldBlockShortestRoute )
    DefenseAreaData__CreateAllShortestRoutes(v53, (System_Collections_Generic_Dictionary_int__int____o *)v58, v93);
  v95 = v91 | 0x10000000000LL;
  if ( !v100 )
    v95 = v91;
  v53->fields._Flag_k__BackingField = v95;
  return v53;
}


System_Collections_Generic_Dictionary_int__int__o *__fastcall WarBoardAIRoute__GetDesignationItemToDistance(
        WarBoardAIRoute_o *this,
        WarBoardPieceData_o *basePiece,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *routeDataList,
        int32_t baseSquareIndex,
        const MethodInfo *method)
{
  WarBoardAIRoute_o *v8; // x22
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
  Il2CppObject *Item; // x22
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  System_Collections_Generic_Dictionary_int__int__o *v43; // x19
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x22
  __int64 v48; // x0
  __int64 v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  __int64 v56; // x23
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  System_Func_object__bool__o *v60; // x24
  _BOOL8 v61; // x0
  __int64 v62; // x1
  int32_t v63; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x0
  __int64 v65; // x0
  __int64 v66; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v68; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v69; // [xsp+30h] [xbp-90h] BYREF

  v8 = this;
  if ( (byte_4B13CCA & 1) == 0 )
  {
    sub_1BCA7E0(&AStarSearch_TypeInfo, basePiece, routeDataList);
    sub_1BCA7E0(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v15, v16);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__get_Item__,
      v17,
      v18);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_int___, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__Dispose__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__MoveNext__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__get_Current__, v27, v28);
    sub_1BCA7E0(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Key__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Value__, v33, v34);
    sub_1BCA7E0(&Method_WarBoardAIRoute___c__DisplayClass66_0__GetDesignationItemToDistance_b__0__, v35, v36);
    this = (WarBoardAIRoute_o *)sub_1BCA7E0(&WarBoardAIRoute___c__DisplayClass66_0_TypeInfo, v37, v38);
    byte_4B13CCA = 1;
  }
  memset(&v69, 0, sizeof(v69));
  if ( !basePiece
    || (this = (WarBoardAIRoute_o *)v8->fields.dicUniqueKeyDesignationItem) == 0LL
    || (Item = System_Collections_Generic_Dictionary_uint__object___get_Item(
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
                 basePiece->fields._uniqueIndex_k__BackingField,
                 (const MethodInfo_329DE28 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_DesignationItemData__get_Item__),
        v43 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCAA2C(
                                                                     System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                     v40,
                                                                     v41,
                                                                     v42),
        System_Collections_Generic_Dictionary_int__int____ctor(
          v43,
          (const MethodInfo_31FC8B0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__),
        !Item)
    || (this = (WarBoardAIRoute_o *)Item[1].klass) == 0LL )
  {
    sub_1BCAA3C(this, basePiece);
  }
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v68,
    (System_Collections_Generic_Dictionary_int__object__o *)this,
    (const MethodInfo_320631C *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__GetEnumerator__);
  v69 = v68;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v69,
            (const MethodInfo_335671C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__MoveNext__) )
  {
    v47 = sub_1BCAA2C(WarBoardAIRoute___c__DisplayClass66_0_TypeInfo, v44, v45, v46);
    WarBoardAIRoute___c__DisplayClass66_0___ctor((WarBoardAIRoute___c__DisplayClass66_0_o *)v47, 0LL);
    if ( !v47 )
      sub_1BCAA3C(v48, v49);
    v56 = v47 + 24;
    *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)(v47 + 16) = v69.fields._current;
    sub_1BCA784((PartyOrganizationUtility_o *)(v47 + 24), 0LL, v50, v51, v52, v53, v54, v55);
    v60 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                           System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo,
                                           v57,
                                           v58,
                                           v59);
    System_Func_object__bool____ctor(
      v60,
      (Il2CppObject *)v47,
      Method_WarBoardAIRoute___c__DisplayClass66_0__GetDesignationItemToDistance_b__0__,
      0LL);
    v61 = BasicHelper__Any_object_(
            (System_Collections_Generic_List_T__o *)routeDataList,
            (System_Func_T__bool__o *)v60,
            (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
    if ( !v61 )
    {
      if ( !*(_QWORD *)v56 )
        sub_1BCAA3C(v61, v62);
      v63 = *(_DWORD *)(*(_QWORD *)v56 + 16LL);
      if ( !AStarSearch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo, v62);
      v64 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0LL,
                                                                   baseSquareIndex,
                                                                   v63,
                                                                   0,
                                                                   0LL,
                                                                   0LL);
      v65 = System_Linq_Enumerable__Count_int_(
              v64,
              (const MethodInfo_2F2DBBC *)Method_System_Linq_Enumerable_Count_int___);
      if ( !v43 )
        sub_1BCAA3C(v65, v66);
      System_Collections_Generic_Dictionary_int__int___Add(
        v43,
        *(_DWORD *)(v47 + 16),
        v65,
        (const MethodInfo_31FD274 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v69,
    (const MethodInfo_3356840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardItemData__Dispose__);
  return v43;
}


// local variable allocation has failed, the output may be wrong!
WarBoardEvalValueSquare_EvalValueSquare_o *__fastcall WarBoardAIRoute__GetEvalValueSquare(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *evalValueSquareList,
        int32_t index,
        const MethodInfo *method)
{
  if ( (byte_4B13CBE & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_1BCA7E0(
                                  &Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Item__,
                                  evalValueSquareList,
                                  *(_QWORD *)&index);
    byte_4B13CBE = 1;
  }
  if ( !evalValueSquareList )
    sub_1BCAA3C(this, evalValueSquareList);
  return (WarBoardEvalValueSquare_EvalValueSquare_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                        (System_Collections_Generic_Dictionary_int__object__o *)evalValueSquareList,
                                                        index,
                                                        (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall WarBoardAIRoute__GetFlagAdvantage(
        WarBoardAIRoute_o *this,
        int32_t baseClassId,
        int32_t actionClassId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x22
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  __int64 v11; // x19

  if ( (byte_4B13CD2 & 1) == 0 )
  {
    sub_1BCA7E0(&SvtClassAttri_TypeInfo, *(_QWORD *)&baseClassId, *(_QWORD *)&actionClassId);
    byte_4B13CD2 = 1;
  }
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo, *(_QWORD *)&baseClassId);
  if ( SvtClassAttri__getMagnification(baseClassId, actionClassId, 0LL) <= 1.0 )
    v7 = 1LL;
  else
    v7 = 524289LL;
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo, v6);
  if ( SvtClassAttri__getMagnification(baseClassId, actionClassId, 0LL) < 1.0 )
    v7 |= 0x400000uLL;
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo, v8);
  if ( SvtClassAttri__getMagnification(actionClassId, baseClassId, 0LL) >= 1.0 )
    v10 = v7;
  else
    v10 = v7 | 0x100000;
  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo, v9);
  if ( SvtClassAttri__getMagnification(actionClassId, baseClassId, 0LL) <= 1.0 )
    v11 = v10;
  else
    v11 = v10 | 0x800000;
  if ( WarBoardAIRoute_RouteData__HasFlag_35995008(v11, 0x80000LL, 0LL)
    && WarBoardAIRoute_RouteData__HasFlag_35995008(v11, 0x100000LL, 0LL) )
  {
    v11 |= 0x40000uLL;
  }
  if ( !WarBoardAIRoute_RouteData__HasFlag_35995008(v11, 0x400000LL, 0LL) )
    return v11;
  if ( WarBoardAIRoute_RouteData__HasFlag_35995008(v11, 0x800000LL, 0LL) )
    return v11 | 0x200000;
  return v11;
}


int64_t __fastcall WarBoardAIRoute__GetFlagAroundSquareCheck(
        WarBoardAIRoute_o *this,
        WarBoardSquareData_o *baseSquare,
        WarBoardPieceData_o *basePiece,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        int32_t masterSquareIndex,
        const MethodInfo *method)
{
  WarBoardAIRoute_o *v10; // x27
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  struct System_Int32_array *linkedSquares; // x29
  __int64 v18; // x8
  const MethodInfo_3213110 **v19; // x26
  unsigned __int64 v20; // x19
  __int64 v21; // x23
  int32_t v22; // w24
  const MethodInfo *v23; // x2
  WarBoardPieceData_o *v24; // x25
  const MethodInfo_3213110 **v25; // x29
  __int64 v26; // x26
  int32_t v27; // w22
  int32_t v28; // w27
  __int64 v29; // x1
  int32_t ClassId; // w28
  float Magnification; // s0
  uint32_t v32; // w24
  const MethodInfo *v33; // x2
  WarBoardAIRoute_o *v34; // x24
  WarBoardAIRoute_o *v36; // [xsp+8h] [xbp-88h]
  struct System_Int32_array *v37; // [xsp+10h] [xbp-80h]
  int32_t *v38; // [xsp+18h] [xbp-78h]
  uint32_t value; // [xsp+2Ch] [xbp-64h] BYREF

  v10 = this;
  if ( (byte_4B13CCE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__, baseSquare, basePiece);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11, v12);
    sub_1BCA7E0(&SvtClassAttri_TypeInfo, v13, v14);
    this = (WarBoardAIRoute_o *)sub_1BCA7E0(&WarBoardAIManager_TypeInfo, v15, v16);
    byte_4B13CCE = 1;
  }
  value = 0;
  if ( !baseSquare )
    goto LABEL_48;
  linkedSquares = baseSquare->fields.linkedSquares;
  if ( !linkedSquares )
    goto LABEL_48;
  v18 = *(_QWORD *)&linkedSquares->max_length;
  if ( (int)v18 >= 1 )
  {
    v19 = (const MethodInfo_3213110 **)&Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__;
    v20 = 0LL;
    v21 = 1LL;
    v37 = linkedSquares;
    v38 = &linkedSquares->m_Items[1];
    v36 = v10;
    while ( 1 )
    {
      if ( v20 >= (unsigned int)v18 )
        sub_1BCAA44(this, baseSquare);
      v22 = v38[v20];
      this = (WarBoardAIRoute_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        break;
      this = (WarBoardAIRoute_o *)this[1].fields.aiRouteMasterData;
      if ( !this )
        break;
      this = (WarBoardAIRoute_o *)WarBoardData__GetPiece_36054544((WarBoardData_o *)this, v22, 0LL);
      if ( !this )
        goto LABEL_29;
      v24 = (WarBoardPieceData_o *)this;
      if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, baseSquare);
      this = (WarBoardAIRoute_o *)WarBoardAIManager__IsEnemyPiece(basePiece, v24, v23);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !basePiece )
          break;
        if ( WarBoardPieceData__get_isServant(basePiece, 0LL) || WarBoardPieceData__get_isMaster(v24, 0LL) )
        {
          v25 = v19;
          v26 = v21 | 0x10;
          if ( WarBoardPieceData__get_isServant(v24, 0LL)
            && !WarBoardAIRoute_RouteData__HasFlag_35995008(v21 | 0x10, 0x1000000LL, 0LL) )
          {
            this = (WarBoardAIRoute_o *)basePiece->fields._battleServant_k__BackingField;
            if ( !this )
              break;
            v27 = masterSquareIndex;
            this = (WarBoardAIRoute_o *)BattleServantData__getClassId((BattleServantData_o *)this, 0LL);
            if ( !v24->fields._battleServant_k__BackingField )
              break;
            v28 = (int)this;
            ClassId = BattleServantData__getClassId(v24->fields._battleServant_k__BackingField, 0LL);
            if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo, v29);
            Magnification = SvtClassAttri__getMagnification(v28, ClassId, 0LL);
            masterSquareIndex = v27;
            v10 = v36;
            if ( Magnification > 1.0 )
              v26 = v21 | 0x1000010;
          }
          if ( WarBoardPieceData__get_isMaster(v24, 0LL) )
            v21 = v26 | 0x20;
          else
            v21 = v26;
          v19 = v25;
          linkedSquares = v37;
        }
      }
      else
      {
LABEL_29:
        if ( !basePiece )
          break;
      }
      this = (WarBoardAIRoute_o *)v10->fields.aiRouteMasterData;
      if ( !this )
        break;
      this = (WarBoardAIRoute_o *)WarBoardAIRoute_AIRouteMasterData__IsMasterServant(
                                    (WarBoardAIRoute_AIRouteMasterData_o *)this,
                                    basePiece->fields._index_k__BackingField,
                                    0LL);
      if ( ((v22 == masterSquareIndex) & ((unsigned int)this ^ 1)) != 0 )
        v21 |= 0x400000000uLL;
      if ( !piecePlaceData )
        break;
      this = (WarBoardAIRoute_o *)System_Collections_Generic_Dictionary_int__uint___TryGetValue(
                                    piecePlaceData,
                                    v22,
                                    &value,
                                    *v19);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v32 = value;
        if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, baseSquare);
        this = (WarBoardAIRoute_o *)WarBoardAIManager__GetPieceUnique(v32, (const MethodInfo *)baseSquare);
        if ( basePiece->fields._uniqueIndex_k__BackingField != value )
        {
          v34 = this;
          if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, baseSquare);
          this = (WarBoardAIRoute_o *)WarBoardAIManager__IsAllyPiece(basePiece, (WarBoardPieceData_o *)v34, v33);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v34 )
              break;
            this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isServant((WarBoardPieceData_o *)v34, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
              v21 |= 0x800000000uLL;
          }
        }
      }
      LODWORD(v18) = linkedSquares->max_length;
      if ( (__int64)++v20 >= (int)v18 )
        return v21;
    }
LABEL_48:
    sub_1BCAA3C(this, baseSquare);
  }
  return 1LL;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WarBoardAIRoute__GetFlagOutOfWarningAreaToDistance(
        WarBoardAIRoute_o *this,
        int32_t baseSquareIndex,
        int32_t actionSquareIndex,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_int__int__o *dicOutOfWarningAreaRange; // x0
  System_Collections_Generic_Dictionary_int__int__o *v12; // x8

  if ( (byte_4B13CCD & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__,
      *(_QWORD *)&baseSquareIndex,
      *(_QWORD *)&actionSquareIndex);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v7, v8);
    byte_4B13CCD = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.dicOutOfWarningAreaRange, 0LL) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          dicOutOfWarningAreaRange,
          baseSquareIndex,
          (const MethodInfo_31FD460 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          dicOutOfWarningAreaRange,
          actionSquareIndex,
          (const MethodInfo_31FD460 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return 0;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange )
    goto LABEL_18;
  dicOutOfWarningAreaRange = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                                                    dicOutOfWarningAreaRange,
                                                                                    baseSquareIndex,
                                                                                    (const MethodInfo_31FD1D8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
  if ( !this->fields.dicOutOfWarningAreaRange )
    goto LABEL_18;
  if ( (int)dicOutOfWarningAreaRange > System_Collections_Generic_Dictionary_int__int___get_Item(
                                         this->fields.dicOutOfWarningAreaRange,
                                         actionSquareIndex,
                                         (const MethodInfo_31FD1D8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
    return 1;
  dicOutOfWarningAreaRange = this->fields.dicOutOfWarningAreaRange;
  if ( !dicOutOfWarningAreaRange
    || (dicOutOfWarningAreaRange = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                                                          dicOutOfWarningAreaRange,
                                                                                          baseSquareIndex,
                                                                                          (const MethodInfo_31FD1D8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__),
        (v12 = this->fields.dicOutOfWarningAreaRange) == 0LL) )
  {
LABEL_18:
    sub_1BCAA3C(dicOutOfWarningAreaRange, v9);
  }
  if ( (_DWORD)dicOutOfWarningAreaRange == System_Collections_Generic_Dictionary_int__int___get_Item(
                                             v12,
                                             actionSquareIndex,
                                             (const MethodInfo_31FD1D8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
    return 2;
  else
    return 3;
}


int32_t __fastcall WarBoardAIRoute__GetMasterSquareIndex(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        const MethodInfo *method)
{
  WarBoardAIRoute_o *v4; // x19
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
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x8
  int32_t masterType; // w9
  int32_t key; // w20
  _BOOL8 v18; // x0
  __int64 v19; // x1
  struct WarBoardAIRoute_AIRouteMasterData_o *v20; // x8
  __int128 v22[2]; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_int__uint__o v23; // [xsp+20h] [xbp-40h] BYREF

  v4 = this;
  if ( (byte_4B13CBB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__, piecePlaceData, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__, v11, v12);
    this = (WarBoardAIRoute_o *)sub_1BCA7E0(
                                  &Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__,
                                  v13,
                                  v14);
    byte_4B13CBB = 1;
  }
  memset(&v23, 0, 32);
  aiRouteMasterData = v4->fields.aiRouteMasterData;
  if ( !aiRouteMasterData )
    goto LABEL_18;
  masterType = aiRouteMasterData->fields.masterType;
  if ( !masterType || masterType == 2 )
  {
    if ( piecePlaceData )
    {
      System_Collections_Generic_Dictionary_int__uint___GetEnumerator(
        (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v22,
        piecePlaceData,
        (const MethodInfo_3211E50 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
      *(_OWORD *)&v23.fields._dictionary = v22[0];
      v23.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v22[1];
      while ( 1 )
      {
        v18 = System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
                &v23,
                (const MethodInfo_3358F6C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__);
        if ( !v18 )
          break;
        v20 = v4->fields.aiRouteMasterData;
        if ( !v20 )
          sub_1BCAA3C(v18, v19);
        key = (int32_t)v23.fields._current.fields.key;
        if ( v20->fields.masterUniqueIndex == HIDWORD(v23.fields._current.fields.key) )
        {
          System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
            &v23,
            (const MethodInfo_335906C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
          return key;
        }
      }
      System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
        &v23,
        (const MethodInfo_335906C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
      return 0;
    }
LABEL_18:
    sub_1BCAA3C(this, piecePlaceData);
  }
  if ( masterType != 1 )
    return 0;
  return aiRouteMasterData->fields.masterSquareIndex;
}


int32_t __fastcall WarBoardAIRoute__GetMasterSquareIndexFromPlaceData(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  Il2CppObject *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppClass *klass; // x8
  System_Func_KeyValuePair_int__uint___bool__o *v14; // x21

  v5 = (Il2CppObject *)this;
  if ( (byte_4B13CD6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_int__uint____, piecePlaceData, method);
    sub_1BCA7E0(&System_Func_KeyValuePair_int__uint___bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__, v8, v9);
    this = (WarBoardAIRoute_o *)sub_1BCA7E0(
                                  &Method_WarBoardAIRoute__GetMasterSquareIndexFromPlaceData_b__78_0__,
                                  v10,
                                  v11);
    byte_4B13CD6 = 1;
  }
  klass = v5[13].klass;
  if ( !klass )
    sub_1BCAA3C(this, piecePlaceData);
  if ( LODWORD(klass->_1.name) == 1 )
    return HIDWORD(klass->_1.name);
  v14 = (System_Func_KeyValuePair_int__uint___bool__o *)sub_1BCAA2C(
                                                          System_Func_KeyValuePair_int__uint___bool__TypeInfo,
                                                          piecePlaceData,
                                                          method,
                                                          v3);
  System_Func_KeyValuePair_int__uint___bool____ctor(
    v14,
    v5,
    Method_WarBoardAIRoute__GetMasterSquareIndexFromPlaceData_b__78_0__,
    0LL);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_int__uint__(
           (System_Collections_Generic_IEnumerable_TSource__o *)piecePlaceData,
           (System_Func_TSource__bool__o *)v14,
           (const MethodInfo_2F354F0 *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_int__uint____).fields.key;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *__fastcall WarBoardAIRoute__GetMoveByTargetDistance(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicKeyPutIndexValueTargetData,
        int32_t actionSquareIndex,
        WarBoardPieceData_o *basePiece,
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
  _BOOL8 v22; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x2
  Il2CppObject *currentValue; // x24
  WarBoardPieceData_o *monitor; // x22
  int32_t v27; // w22
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  int32_t v29; // w22
  int32_t v30; // w0
  int32_t v31; // w2
  int v32; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x22
  System_Collections_Generic_IEnumerable_TSource__o *klass; // x0
  int32_t v35; // w23
  int32_t v36; // w0
  int v37; // w8
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v39; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v40; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B13CD8 & 1) == 0 )
  {
    sub_1BCA7E0(&AStarSearch_TypeInfo, dicKeyPutIndexValueTargetData, *(_QWORD *)&actionSquareIndex);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__get_Values__, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_int___, v10, v11);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__,
      v12,
      v13);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__,
      v14,
      v15);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__,
      v16,
      v17);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_long__WarBoardAIRoute_TargetData__GetEnumerator__,
      v18,
      v19);
    this = (WarBoardAIRoute_o *)sub_1BCA7E0(&WarBoardAIManager_TypeInfo, v20, v21);
    byte_4B13CD8 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  if ( !dicKeyPutIndexValueTargetData
    || (this = (WarBoardAIRoute_o *)System_Collections_Generic_Dictionary_long__object___get_Values(
                                      (System_Collections_Generic_Dictionary_TKey__TValue__o *)dicKeyPutIndexValueTargetData,
                                      (const MethodInfo_3243E34 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__get_Values__)) == 0LL )
  {
    sub_1BCAA3C(this, dicKeyPutIndexValueTargetData);
  }
  System_Collections_Generic_Dictionary_ValueCollection_long__object___GetEnumerator(
    &v39,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
    (const MethodInfo_38D394C *)Method_System_Collections_Generic_Dictionary_ValueCollection_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v40 = v39;
  while ( 1 )
  {
    v22 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__object___MoveNext(
            &v40,
            (const MethodInfo_335ED38 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    if ( !v22 )
      break;
    currentValue = v40.fields._currentValue;
    if ( !v40.fields._currentValue )
      sub_1BCAA3C(v22, v23);
    monitor = (WarBoardPieceData_o *)v40.fields._currentValue[1].monitor;
    if ( !monitor || LODWORD(v40.fields._currentValue[4].monitor) != actionSquareIndex )
      goto LABEL_14;
    if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v23);
    if ( WarBoardAIManager__IsAllyPiece(basePiece, monitor, v24) )
    {
      LODWORD(currentValue[4].klass) = 2;
    }
    else
    {
LABEL_14:
      v27 = (int32_t)currentValue[4].monitor;
      if ( !AStarSearch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo, v23);
      v28 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0LL,
                                                                   actionSquareIndex,
                                                                   v27,
                                                                   0,
                                                                   0LL,
                                                                   0LL);
      v29 = System_Linq_Enumerable__Count_int_(
              v28,
              (const MethodInfo_2F2DBBC *)Method_System_Linq_Enumerable_Count_int___);
      v30 = System_Linq_Enumerable__Count_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)currentValue[5].klass,
              (const MethodInfo_2F2DBBC *)Method_System_Linq_Enumerable_Count_int___);
      v31 = (int32_t)currentValue[4].monitor;
      if ( v29 == v30 )
        v32 = 2;
      else
        v32 = 3;
      if ( v29 < v30 )
        v32 = 1;
      LODWORD(currentValue[4].klass) = v32;
      v33 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                   0LL,
                                                                   actionSquareIndex,
                                                                   v31,
                                                                   1,
                                                                   0LL,
                                                                   0LL);
      if ( v33 && (klass = (System_Collections_Generic_IEnumerable_TSource__o *)currentValue[6].klass) != 0LL )
      {
        v35 = System_Linq_Enumerable__Count_int_(
                klass,
                (const MethodInfo_2F2DBBC *)Method_System_Linq_Enumerable_Count_int___);
        v36 = System_Linq_Enumerable__Count_int_(
                v33,
                (const MethodInfo_2F2DBBC *)Method_System_Linq_Enumerable_Count_int___);
        if ( v36 >= v35 )
        {
          if ( v36 == v35 )
            v37 = 2;
          else
            v37 = 3;
        }
        else
        {
          v37 = 1;
        }
      }
      else
      {
        v37 = 0;
      }
      HIDWORD(currentValue[4].klass) = v37;
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__object___Dispose(
    &v40,
    (const MethodInfo_335ED34 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
  return dicKeyPutIndexValueTargetData;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WarBoardAIRoute__GetRangeShortMost(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *dicPieceList,
        int32_t baseSquareIndex,
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
  __int64 v16; // x1
  __int64 v17; // x2
  int32_t v18; // w19
  __int64 v19; // x1
  int32_t key; // w21
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  int32_t v22; // w0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v25; // [xsp+0h] [xbp-80h] BYREF

  if ( (byte_4B13CBF & 1) == 0 )
  {
    sub_1BCA7E0(&AStarSearch_TypeInfo, dicPieceList, *(_QWORD *)&baseSquareIndex);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_int___, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__, v12, v13);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__,
      v14,
      v15);
    this = (WarBoardAIRoute_o *)sub_1BCA7E0(
                                  &Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__,
                                  v16,
                                  v17);
    byte_4B13CBF = 1;
  }
  memset(&v25, 0, sizeof(v25));
  if ( !dicPieceList )
    sub_1BCAA3C(this, dicPieceList);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v25,
    (System_Collections_Generic_Dictionary_int__object__o *)dicPieceList,
    (const MethodInfo_320631C *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
  v18 = -1;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v25,
            (const MethodInfo_335671C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__) )
  {
    key = (int32_t)v25.fields._current.fields.key;
    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo, v19);
    v21 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                 0LL,
                                                                 baseSquareIndex,
                                                                 key,
                                                                 0,
                                                                 0LL,
                                                                 0LL);
    v22 = System_Linq_Enumerable__Count_int_(
            v21,
            (const MethodInfo_2F2DBBC *)Method_System_Linq_Enumerable_Count_int___);
    if ( v18 > v22 || v18 == -1 )
      v18 = v22;
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v25,
    (const MethodInfo_3356840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
  return v18;
}


int32_t __fastcall WarBoardAIRoute__GetRequiredCost(
        WarBoardAIRoute_o *this,
        int32_t moveCost,
        int32_t masterMoveCost,
        int32_t replaceCount,
        int32_t actionCount,
        int32_t masterActionCount,
        int32_t masterReplaceCount,
        const MethodInfo *method)
{
  return masterActionCount * masterMoveCost
       + (actionCount + 2 * replaceCount) * moveCost
       + (masterMoveCost + moveCost) * masterReplaceCount;
}


System_Collections_Generic_Dictionary_uint__int__o *__fastcall WarBoardAIRoute__GetRouteDataActionList(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *routeDataList,
        int32_t *replaceCount,
        int32_t *actionCount,
        int32_t *masterActionCount,
        int32_t *masterReplaceCount,
        const MethodInfo *method)
{
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
  System_Collections_Generic_Dictionary_uint__int__o *v26; // x19
  __int64 v27; // x0
  __int64 v28; // x1
  _BOOL8 v29; // x0
  __int64 v30; // x1
  WarBoardAIRoute_RouteData_o *current; // x24
  _BOOL8 HasFlag; // x0
  __int64 v33; // x1
  struct WarBoardPieceData_o *basePiece; // x8
  int32_t type_k__BackingField; // w9
  int32_t *v36; // x9
  uint32_t uniqueIndex_k__BackingField; // w24
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+20h] [xbp-80h] BYREF
  int32_t value; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_4B13CBA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_uint__int__TryGetValue__, routeDataList, replaceCount);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_uint__int__set_Item__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_uint__int__TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__, v24, v25);
    byte_4B13CBA = 1;
  }
  memset(&v40, 0, sizeof(v40));
  value = 0;
  *actionCount = 0;
  *replaceCount = 0;
  *masterActionCount = 0;
  *masterReplaceCount = 0;
  v26 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_1BCAA2C(
                                                                System_Collections_Generic_Dictionary_uint__int__TypeInfo,
                                                                routeDataList,
                                                                replaceCount,
                                                                actionCount);
  System_Collections_Generic_Dictionary_uint__int____ctor(
    v26,
    (const MethodInfo_329432C *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
  if ( !routeDataList )
    sub_1BCAA3C(v27, v28);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v39,
    (System_Collections_Generic_List_object__o *)routeDataList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
  v40 = v39;
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v40,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
    if ( !v29 )
      break;
    current = (WarBoardAIRoute_RouteData_o *)v40.fields._current;
    if ( !v40.fields._current )
      sub_1BCAA3C(v29, v30);
    if ( !WarBoardAIRoute_RouteData__get_notAction((WarBoardAIRoute_RouteData_o *)v40.fields._current, 0LL) )
    {
      value = 0;
      HasFlag = WarBoardAIRoute_RouteData__HasFlag(current, 0x4000000LL, 0LL);
      basePiece = current->fields.basePiece;
      if ( !HasFlag )
      {
        if ( !basePiece )
          sub_1BCAA3C(HasFlag, v33);
        if ( basePiece->fields._type_k__BackingField == 1 )
          v36 = masterActionCount;
        else
          v36 = actionCount;
        goto LABEL_21;
      }
      if ( !basePiece )
        sub_1BCAA3C(HasFlag, v33);
      type_k__BackingField = basePiece->fields._type_k__BackingField;
      basePiece = current->fields.actionPiece;
      if ( type_k__BackingField != 1 )
      {
        if ( !basePiece )
          sub_1BCAA3C(HasFlag, v33);
        if ( basePiece->fields._type_k__BackingField == 1 )
          v36 = masterReplaceCount;
        else
          v36 = replaceCount;
LABEL_21:
        ++*v36;
        goto LABEL_22;
      }
      ++*masterReplaceCount;
      if ( !basePiece )
        sub_1BCAA3C(HasFlag, v33);
LABEL_22:
      if ( !v26 )
        sub_1BCAA3C(HasFlag, v33);
      uniqueIndex_k__BackingField = basePiece->fields._uniqueIndex_k__BackingField;
      System_Collections_Generic_Dictionary_uint__int___TryGetValue(
        v26,
        uniqueIndex_k__BackingField,
        &value,
        (const MethodInfo_3296388 *)Method_System_Collections_Generic_Dictionary_uint__int__TryGetValue__);
      System_Collections_Generic_Dictionary_uint__int___set_Item(
        v26,
        uniqueIndex_k__BackingField,
        value + 1,
        (const MethodInfo_3294CDC *)Method_System_Collections_Generic_Dictionary_uint__int__set_Item__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v40,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
  return v26;
}


int32_t __fastcall WarBoardAIRoute__GetRouteSumPieceActionCost(
        WarBoardAIRoute_o *this,
        System_Collections_ObjectModel_ReadOnlyCollection_WarBoardAIRoute_RouteData__o *routeDataList,
        WarBoardPieceData_o *targetPiece,
        const MethodInfo *method)
{
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
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Func_object__int__o *v24; // x20

  if ( (byte_4B13CD9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____76884520, routeDataList, targetPiece);
    sub_1BCA7E0(&System_Func_WarBoardAIRoute_RouteData__int__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_WarBoardAIRoute___c__DisplayClass84_0__GetRouteSumPieceActionCost_b__0__, v8, v9);
    sub_1BCA7E0(&WarBoardAIRoute___c__DisplayClass84_0_TypeInfo, v10, v11);
    byte_4B13CD9 = 1;
  }
  v12 = sub_1BCAA2C(WarBoardAIRoute___c__DisplayClass84_0_TypeInfo, routeDataList, targetPiece, method);
  WarBoardAIRoute___c__DisplayClass84_0___ctor((WarBoardAIRoute___c__DisplayClass84_0_o *)v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  *(_QWORD *)(v12 + 16) = targetPiece;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)targetPiece, v15, v16, v17, v18, v19, v20);
  v24 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_WarBoardAIRoute_RouteData__int__TypeInfo, v21, v22, v23);
  System_Func_object__int____ctor(
    v24,
    (Il2CppObject *)v12,
    Method_WarBoardAIRoute___c__DisplayClass84_0__GetRouteSumPieceActionCost_b__0__,
    0LL);
  return System_Linq_Enumerable__Sum_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)routeDataList,
           (System_Func_TSource__int__o *)v24,
           (const MethodInfo_2F4A588 *)Method_System_Linq_Enumerable_Sum_WarBoardAIRoute_RouteData____76884520);
}


void __fastcall WarBoardAIRoute__GetTargetToDistance(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicPutSquareIndex,
        System_Func_IWarBoardObjectData__bool__o *excludeCond,
        WarBoardPieceData_o *basePiece,
        int32_t baseSquareIndex,
        System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o **dicKeyPutIndexValueTargetData,
        const MethodInfo *method)
{
  WarBoardAIRoute_o *v12; // x23
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
  _BOOL8 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  Il2CppObject *key; // x24
  Il2CppObject *value; // x25
  WarBoardPieceData_array *allEnemyPiece; // x27
  WarBoardAIRoute_TargetData_o *v34; // x26
  __int64 v35; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v36; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v37; // [xsp+30h] [xbp-90h] BYREF

  v12 = this;
  if ( (byte_4B13CC7 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__,
      dicPutSquareIndex,
      excludeCond);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__,
      v13,
      v14);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__,
      v15,
      v16);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__,
      v17,
      v18);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__,
      v19,
      v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__, v23, v24);
    this = (WarBoardAIRoute_o *)sub_1BCA7E0(&WarBoardAIRoute_TargetData_TypeInfo, v25, v26);
    byte_4B13CC7 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  if ( !dicPutSquareIndex )
    sub_1BCAA3C(this, dicPutSquareIndex);
  System_Collections_Generic_Dictionary_long__object___GetEnumerator(
    &v36,
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)dicPutSquareIndex,
    (const MethodInfo_3244458 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v37 = v36;
  while ( 1 )
  {
    v27 = System_Collections_Generic_Dictionary_Enumerator_long__object___MoveNext(
            &v37,
            (const MethodInfo_335E6D8 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__);
    if ( !v27 )
      break;
    key = v37.fields._current.fields.key;
    value = v37.fields._current.fields.value;
    if ( excludeCond )
    {
      if ( !v37.fields._current.fields.value )
        sub_1BCAA3C(v27, v28);
      if ( (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, void *, _QWORD))excludeCond->fields.m_target)(
              excludeCond->fields.original_method_info,
              v37.fields._current.fields.value[3].monitor,
              *(_QWORD *)&excludeCond->fields.extra_arg) & 1) != 0 )
        continue;
    }
    allEnemyPiece = v12->fields.allEnemyPiece;
    v34 = (WarBoardAIRoute_TargetData_o *)sub_1BCAA2C(WarBoardAIRoute_TargetData_TypeInfo, v28, v29, v30);
    WarBoardAIRoute_TargetData___ctor_35997576(
      v34,
      (WarBoardAIRoute_TargetData_o *)value,
      basePiece,
      baseSquareIndex,
      allEnemyPiece,
      0LL);
    if ( !*dicKeyPutIndexValueTargetData )
      sub_1BCAA3C(0LL, v35);
    System_Collections_Generic_Dictionary_long__object___Add(
      (System_Collections_Generic_Dictionary_TKey__TValue__o *)*dicKeyPutIndexValueTargetData,
      (int64_t)key,
      (Il2CppObject *)v34,
      (const MethodInfo_3244024 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
  }
  System_Collections_Generic_Dictionary_Enumerator_long__object___Dispose(
    &v37,
    (const MethodInfo_335E7F8 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
}


void __fastcall WarBoardAIRoute__GetTargetToDistanceUsingIndividuality(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicIndividualityPutSqareIndex,
        System_Func_IWarBoardObjectData__bool__o *excludeCond,
        WarBoardPieceData_o *basePiece,
        int32_t baseSquareIndex,
        System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o **dicKeyPutIndexValueTargetData,
        const MethodInfo *method)
{
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
  __int64 v62; // x21
  __int64 v63; // x0
  __int64 v64; // x1
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
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  System_Collections_Generic_Dictionary_int__object__o *v80; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v81; // x19
  __int64 v82; // x1
  WarBoardAiTargetCacher_o *aiTargetCacher; // x0
  Il2CppObject *key; // x25
  Il2CppObject *value; // x26
  __int64 TargetDetectorId; // x0
  __int64 v87; // x1
  int32_t v88; // w27
  __int64 v89; // x1
  Il2CppObject *Item; // x29
  WarBoardAiTargetCacher_o *v91; // x0
  IWarBoardObjectData_array *TargetObjectsByTrendId; // x0
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x3
  IWarBoardObjectData_array *v96; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v97; // x29
  System_Func_object__bool__o *klass; // x23
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v108; // x29
  System_Func_object__int__o *v109; // x23
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v116; // x0
  __int64 v117; // x1
  __int64 v118; // x2
  __int64 v119; // x3
  WarBoardAIRoute___c_c *v120; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v121; // x29
  System_Func_object__int__o *_9__64_2; // x23
  Il2CppObject *v123; // x24
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x0
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v131; // x0
  __int64 v132; // x1
  __int64 v133; // x2
  __int64 v134; // x3
  WarBoardAIRoute___c_c *v135; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v136; // x29
  System_Func_object__int__o *_9__64_3; // x23
  Il2CppObject *v138; // x24
  struct WarBoardAIRoute___c_StaticFields *v139; // x0
  int64_t v140; // x2
  int32_t v141; // w3
  System_String_o *v142; // x4
  BattleSetupInfo_o *v143; // x5
  FollowerInfo_o *v144; // x6
  PartyListViewItem_o *v145; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v146; // x0
  __int64 v147; // x1
  __int64 v148; // x2
  __int64 v149; // x3
  WarBoardPieceData_o *v150; // x27
  int32_t v151; // w28
  WarBoardPieceData_array *allEnemyPiece; // x24
  WarBoardAIRoute_TargetData_o *v153; // x23
  __int64 v154; // x1
  PartyOrganizationUtility_o *v155; // [xsp+0h] [xbp-D0h]
  PartyOrganizationUtility_o *v156; // [xsp+8h] [xbp-C8h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v158; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v159; // [xsp+40h] [xbp-90h] BYREF

  if ( (byte_4B13CC8 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__,
      dicIndividualityPutSqareIndex,
      excludeCond);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__ContainsKey__, v12, v13);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__,
      v14,
      v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Remove__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData___ctor__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__get_Item__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__set_Item__, v22, v23);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__IWarBoardObjectData__TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_IWarBoardObjectData___, v26, v27);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderBy_IWarBoardObjectData__int___, v28, v29);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___, v30, v31);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_IWarBoardObjectData___, v32, v33);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__,
      v34,
      v35);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__,
      v36,
      v37);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__get_Current__,
      v38,
      v39);
    sub_1BCA7E0(&System_Func_IWarBoardObjectData__bool__TypeInfo, v40, v41);
    sub_1BCA7E0(&System_Func_IWarBoardObjectData__int__TypeInfo, v42, v43);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__, v44, v45);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__, v46, v47);
    sub_1BCA7E0(&WarBoardAIRoute_TargetData_TypeInfo, v48, v49);
    sub_1BCA7E0(&Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_2__, v50, v51);
    sub_1BCA7E0(&Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_3__, v52, v53);
    sub_1BCA7E0(&Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__0__, v54, v55);
    sub_1BCA7E0(&Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__1__, v56, v57);
    sub_1BCA7E0(&WarBoardAIRoute___c__DisplayClass64_0_TypeInfo, v58, v59);
    sub_1BCA7E0(&WarBoardAIRoute___c_TypeInfo, v60, v61);
    byte_4B13CC8 = 1;
  }
  memset(&v159, 0, sizeof(v159));
  v62 = sub_1BCAA2C(
          WarBoardAIRoute___c__DisplayClass64_0_TypeInfo,
          dicIndividualityPutSqareIndex,
          excludeCond,
          basePiece);
  WarBoardAIRoute___c__DisplayClass64_0___ctor((WarBoardAIRoute___c__DisplayClass64_0_o *)v62, 0LL);
  if ( !v62
    || (*(_QWORD *)(v62 + 16) = excludeCond,
        sub_1BCA784((PartyOrganizationUtility_o *)(v62 + 16), (int64_t)excludeCond, v65, v66, v67, v68, v69, v70),
        *(_QWORD *)(v62 + 24) = basePiece,
        sub_1BCA784((PartyOrganizationUtility_o *)(v62 + 24), (int64_t)basePiece, v71, v72, v73, v74, v75, v76),
        *(_DWORD *)(v62 + 32) = baseSquareIndex,
        v80 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                        System_Collections_Generic_Dictionary_int__IWarBoardObjectData__TypeInfo,
                                                                        v77,
                                                                        v78,
                                                                        v79),
        System_Collections_Generic_Dictionary_int__object____ctor(
          v80,
          (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData___ctor__),
        !dicIndividualityPutSqareIndex) )
  {
    sub_1BCAA3C(v63, v64);
  }
  System_Collections_Generic_Dictionary_long__object___GetEnumerator(
    &v158,
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)dicIndividualityPutSqareIndex,
    (const MethodInfo_3244458 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__GetEnumerator__);
  v159 = v158;
  v81 = 0LL;
  v155 = (PartyOrganizationUtility_o *)(v62 + 48);
  v156 = (PartyOrganizationUtility_o *)(v62 + 40);
  while ( System_Collections_Generic_Dictionary_Enumerator_long__object___MoveNext(
            &v159,
            (const MethodInfo_335E6D8 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__MoveNext__) )
  {
    aiTargetCacher = this->fields.aiTargetCacher;
    if ( !aiTargetCacher )
      sub_1BCAA3C(0LL, v82);
    key = v159.fields._current.fields.key;
    value = v159.fields._current.fields.value;
    TargetDetectorId = WarBoardAiTargetCacher__GetTargetDetectorId(
                         aiTargetCacher,
                         (int64_t)v159.fields._current.fields.key,
                         0LL);
    if ( !v80 )
      sub_1BCAA3C(TargetDetectorId, v87);
    v88 = TargetDetectorId;
    if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
           v80,
           TargetDetectorId,
           (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__ContainsKey__) )
    {
      Item = System_Collections_Generic_Dictionary_int__object___get_Item(
               v80,
               v88,
               (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__get_Item__);
    }
    else
    {
      v91 = this->fields.aiTargetCacher;
      if ( !v91 )
        sub_1BCAA3C(0LL, v89);
      TargetObjectsByTrendId = WarBoardAiTargetCacher__GetTargetObjectsByTrendId(v91, (int64_t)key, 0LL);
      v96 = TargetObjectsByTrendId;
      if ( TargetObjectsByTrendId )
        v97 = (System_Collections_Generic_IEnumerable_TSource__o *)TargetObjectsByTrendId;
      else
        v97 = v81;
      if ( TargetObjectsByTrendId )
      {
        klass = (System_Func_object__bool__o *)v156->klass;
        if ( !v156->klass )
        {
          klass = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                   System_Func_IWarBoardObjectData__bool__TypeInfo,
                                                   v93,
                                                   v94,
                                                   v95);
          System_Func_object__bool____ctor(
            klass,
            (Il2CppObject *)v62,
            Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__0__,
            0LL);
          v156->klass = (PartyOrganizationUtility_c *)klass;
          sub_1BCA784(v156, (int64_t)klass, v99, v100, v101, v102, v103, v104);
        }
        v108 = System_Linq_Enumerable__Where_object_(
                 v97,
                 (System_Func_TSource__bool__o *)klass,
                 (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_IWarBoardObjectData___);
        v109 = (System_Func_object__int__o *)v155->klass;
        if ( !v155->klass )
        {
          v109 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                 System_Func_IWarBoardObjectData__int__TypeInfo,
                                                 v105,
                                                 v106,
                                                 v107);
          System_Func_object__int____ctor(
            v109,
            (Il2CppObject *)v62,
            Method_WarBoardAIRoute___c__DisplayClass64_0__GetTargetToDistanceUsingIndividuality_b__1__,
            0LL);
          v155->klass = (PartyOrganizationUtility_c *)v109;
          sub_1BCA784(v155, (int64_t)v109, v110, v111, v112, v113, v114, v115);
        }
        v116 = System_Linq_Enumerable__OrderBy_object__int_(
                 v108,
                 (System_Func_TSource__TKey__o *)v109,
                 (const MethodInfo_2F3B394 *)Method_System_Linq_Enumerable_OrderBy_IWarBoardObjectData__int___);
        v120 = WarBoardAIRoute___c_TypeInfo;
        v121 = v116;
        if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo, v117);
          v120 = WarBoardAIRoute___c_TypeInfo;
        }
        _9__64_2 = (System_Func_object__int__o *)v120->static_fields->__9__64_2;
        if ( !_9__64_2 )
        {
          if ( !v120->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v120, v117);
            v120 = WarBoardAIRoute___c_TypeInfo;
          }
          v123 = (Il2CppObject *)v120->static_fields->__9;
          _9__64_2 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                     System_Func_IWarBoardObjectData__int__TypeInfo,
                                                     v117,
                                                     v118,
                                                     v119);
          System_Func_object__int____ctor(
            _9__64_2,
            v123,
            Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_2__,
            0LL);
          static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
          static_fields->__9__64_2 = (struct System_Func_IWarBoardObjectData__int__o *)_9__64_2;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&static_fields->__9__64_2,
            (int64_t)_9__64_2,
            v125,
            v126,
            v127,
            v128,
            v129,
            v130);
        }
        v131 = System_Linq_Enumerable__ThenBy_object__int_(
                 v121,
                 (System_Func_TSource__TKey__o *)_9__64_2,
                 (const MethodInfo_2F4AE9C *)Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___);
        v135 = WarBoardAIRoute___c_TypeInfo;
        v136 = v131;
        if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo, v132);
          v135 = WarBoardAIRoute___c_TypeInfo;
        }
        _9__64_3 = (System_Func_object__int__o *)v135->static_fields->__9__64_3;
        if ( !_9__64_3 )
        {
          if ( !v135->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v135, v132);
            v135 = WarBoardAIRoute___c_TypeInfo;
          }
          v138 = (Il2CppObject *)v135->static_fields->__9;
          _9__64_3 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                     System_Func_IWarBoardObjectData__int__TypeInfo,
                                                     v132,
                                                     v133,
                                                     v134);
          System_Func_object__int____ctor(
            _9__64_3,
            v138,
            Method_WarBoardAIRoute___c__GetTargetToDistanceUsingIndividuality_b__64_3__,
            0LL);
          v139 = WarBoardAIRoute___c_TypeInfo->static_fields;
          v139->__9__64_3 = (struct System_Func_IWarBoardObjectData__int__o *)_9__64_3;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v139->__9__64_3,
            (int64_t)_9__64_3,
            v140,
            v141,
            v142,
            v143,
            v144,
            v145);
        }
        v146 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                      v136,
                                                                      (System_Func_TSource__TKey__o *)_9__64_3,
                                                                      (const MethodInfo_2F4AE9C *)Method_System_Linq_Enumerable_ThenBy_IWarBoardObjectData__int___);
        Item = System_Linq_Enumerable__FirstOrDefault_object_(
                 v146,
                 (const MethodInfo_2F34B68 *)Method_System_Linq_Enumerable_FirstOrDefault_IWarBoardObjectData___);
        v81 = (System_Collections_Generic_IEnumerable_TSource__o *)v96;
      }
      else
      {
        Item = 0LL;
      }
    }
    System_Collections_Generic_Dictionary_int__object___set_Item(
      v80,
      v88,
      Item,
      (const MethodInfo_3205ED0 *)Method_System_Collections_Generic_Dictionary_int__IWarBoardObjectData__set_Item__);
    if ( Item )
    {
      v150 = *(WarBoardPieceData_o **)(v62 + 24);
      v151 = *(_DWORD *)(v62 + 32);
      allEnemyPiece = this->fields.allEnemyPiece;
      v153 = (WarBoardAIRoute_TargetData_o *)sub_1BCAA2C(WarBoardAIRoute_TargetData_TypeInfo, v147, v148, v149);
      WarBoardAIRoute_TargetData___ctor_35998608(
        v153,
        (WarBoardAIRoute_TargetData_o *)value,
        (IWarBoardObjectData_o *)Item,
        v150,
        v151,
        allEnemyPiece,
        0LL);
      if ( !*dicKeyPutIndexValueTargetData )
        sub_1BCAA3C(0LL, v154);
      System_Collections_Generic_Dictionary_long__object___Add(
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)*dicKeyPutIndexValueTargetData,
        (int64_t)key,
        (Il2CppObject *)v153,
        (const MethodInfo_3244024 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Add__);
    }
    else
    {
      if ( !*dicKeyPutIndexValueTargetData )
        sub_1BCAA3C(0LL, v147);
      System_Collections_Generic_Dictionary_long__object___Remove(
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)*dicKeyPutIndexValueTargetData,
        (int64_t)key,
        (const MethodInfo_3245498 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__Remove__);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_long__object___Dispose(
    &v159,
    (const MethodInfo_335E7F8 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__WarBoardAIRoute_TargetData__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *__fastcall WarBoardAIRoute__GetTargetToDistance_35898252(
        WarBoardAIRoute_o *this,
        WarBoardPieceData_o *basePiece,
        System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *routeDataList,
        int32_t baseSquareIndex,
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
  __int64 v19; // x22
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicUniqueKeyTarget; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  Il2CppObject *Item; // x24
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v32; // x23
  __int64 v33; // x2
  __int64 v34; // x3
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *monitor; // x25
  System_Func_object__bool__o *v36; // x26
  const MethodInfo *v37; // x6
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *klass; // x25
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_Func_object__bool__o *v42; // x26
  const MethodInfo *v43; // x6
  const MethodInfo *v44; // x6
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *dicKeyPutIndexValueTargetData; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B13CC9 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__,
      basePiece,
      routeDataList);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__get_Item__,
      v9,
      v10);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Func_IWarBoardObjectData__bool__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_WarBoardAIRoute___c__DisplayClass65_0__GetTargetToDistance_g__excludeCond_0__, v15, v16);
    sub_1BCA7E0(&WarBoardAIRoute___c__DisplayClass65_0_TypeInfo, v17, v18);
    byte_4B13CC9 = 1;
  }
  v19 = sub_1BCAA2C(
          WarBoardAIRoute___c__DisplayClass65_0_TypeInfo,
          basePiece,
          routeDataList,
          *(_QWORD *)&baseSquareIndex);
  WarBoardAIRoute___c__DisplayClass65_0___ctor((WarBoardAIRoute___c__DisplayClass65_0_o *)v19, 0LL);
  if ( !v19
    || (*(_QWORD *)(v19 + 16) = routeDataList,
        sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 16), (int64_t)routeDataList, v22, v23, v24, v25, v26, v27),
        !basePiece)
    || (dicUniqueKeyTarget = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicUniqueKeyTarget) == 0LL
    || (Item = System_Collections_Generic_Dictionary_uint__object___get_Item(
                 dicUniqueKeyTarget,
                 basePiece->fields._uniqueIndex_k__BackingField,
                 (const MethodInfo_329DE28 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__get_Item__),
        v32 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                         System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo,
                                                                         v29,
                                                                         v30,
                                                                         v31),
        System_Collections_Generic_Dictionary_long__object____ctor(
          v32,
          (const MethodInfo_3243654 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__),
        dicKeyPutIndexValueTargetData = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v32,
        !Item) )
  {
    sub_1BCAA3C(dicUniqueKeyTarget, v21);
  }
  monitor = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)Item[1].monitor;
  v36 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_IWarBoardObjectData__bool__TypeInfo, v21, v33, v34);
  System_Func_object__bool____ctor(
    v36,
    (Il2CppObject *)v19,
    Method_WarBoardAIRoute___c__DisplayClass65_0__GetTargetToDistance_g__excludeCond_0__,
    0LL);
  WarBoardAIRoute__GetTargetToDistance(
    this,
    monitor,
    (System_Func_IWarBoardObjectData__bool__o *)v36,
    basePiece,
    baseSquareIndex,
    &dicKeyPutIndexValueTargetData,
    v37);
  klass = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)Item[2].klass;
  v42 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_IWarBoardObjectData__bool__TypeInfo, v39, v40, v41);
  System_Func_object__bool____ctor(
    v42,
    (Il2CppObject *)v19,
    Method_WarBoardAIRoute___c__DisplayClass65_0__GetTargetToDistance_g__excludeCond_0__,
    0LL);
  WarBoardAIRoute__GetTargetToDistanceUsingIndividuality(
    this,
    klass,
    (System_Func_IWarBoardObjectData__bool__o *)v42,
    basePiece,
    baseSquareIndex,
    &dicKeyPutIndexValueTargetData,
    v43);
  WarBoardAIRoute__GetTargetToDistance(
    this,
    (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)Item[1].klass,
    0LL,
    basePiece,
    baseSquareIndex,
    &dicKeyPutIndexValueTargetData,
    v44);
  return (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v32;
}


float __fastcall WarBoardAIRoute__GetThinkingThreshold(WarBoardAIRoute_o *this, const MethodInfo *method)
{
  struct WarBoardStageNpcEntity_o *npcData; // x8

  npcData = this->fields.npcData;
  if ( !npcData )
    sub_1BCAA3C(this, method);
  return (float)npcData->fields.lowerThinkingValue / 100.0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardAIRoute__IsActable(
        WarBoardAIRoute_o *this,
        WarBoardPieceData_o *basePiece,
        int32_t basePieceActionCount,
        int32_t requiredCost,
        int32_t sumPieceActionCost,
        const MethodInfo *method)
{
  WarBoardAIRoute_o *v10; // x20
  bool isMaster; // w0
  __int64 v12; // x8
  int v13; // w20

  v10 = this;
  if ( (byte_4B13CD0 & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_1BCA7E0(
                                  &Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__,
                                  basePiece,
                                  *(_QWORD *)&basePieceActionCount);
    byte_4B13CD0 = 1;
  }
  if ( !basePiece )
    goto LABEL_13;
  if ( (WarBoardPieceData__EnableMoveBySelf(basePiece, sumPieceActionCost, 0LL)
     || WarBoardPieceData__EnableAttack(basePiece, sumPieceActionCost, 0LL))
    && (WarBoardPieceData__get_isInfinitelyActable(basePiece, 0LL)
     || basePiece->fields._currentActionCount_k__BackingField > basePieceActionCount) )
  {
    isMaster = WarBoardPieceData__get_isMaster(basePiece, 0LL);
    v12 = 32LL;
    if ( isMaster )
      v12 = 36LL;
    v13 = *(_DWORD *)((char *)&v10->klass + v12);
    this = (WarBoardAIRoute_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( this )
      return SHIDWORD(this[3].fields.allSquare) >= v13 + requiredCost;
LABEL_13:
    sub_1BCAA3C(this, basePiece);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardAIRoute__IsActableReplace(
        WarBoardAIRoute_o *this,
        WarBoardPieceData_o *basePiece,
        WarBoardPieceData_o *actionPiece,
        int32_t requiredCost,
        System_Collections_ObjectModel_ReadOnlyCollection_WarBoardAIRoute_RouteData__o *routeDataList,
        int32_t sumPieceActionCost,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x20
  WarBoardPieceData_o *Instance; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  WarBoardPieceData_o **v30; // x25
  bool v31; // w8
  const MethodInfo *v32; // x3
  int32_t RouteSumPieceActionCost; // w23
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  System_Func_object__bool__o *v37; // x21
  __int64 v38; // x8

  if ( (byte_4B13CD4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___, basePiece, actionPiece);
    sub_1BCA7E0(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v15, v16);
    sub_1BCA7E0(&Method_WarBoardAIRoute___c__DisplayClass76_0__IsActableReplace_b__0__, v17, v18);
    sub_1BCA7E0(&WarBoardAIRoute___c__DisplayClass76_0_TypeInfo, v19, v20);
    byte_4B13CD4 = 1;
  }
  v21 = sub_1BCAA2C(WarBoardAIRoute___c__DisplayClass76_0_TypeInfo, basePiece, actionPiece, *(_QWORD *)&requiredCost);
  WarBoardAIRoute___c__DisplayClass76_0___ctor((WarBoardAIRoute___c__DisplayClass76_0_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_25;
  *(_QWORD *)(v21 + 16) = actionPiece;
  v30 = (WarBoardPieceData_o **)(v21 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 16), (int64_t)actionPiece, v24, v25, v26, v27, v28, v29);
  Instance = *(WarBoardPieceData_o **)(v21 + 16);
  if ( !Instance )
    goto LABEL_25;
  v31 = WarBoardPieceData__EnableSwapByOther(Instance, 0, 0LL);
  Instance = 0LL;
  if ( !v31 )
    return (char)Instance;
  if ( !basePiece )
    goto LABEL_25;
  if ( WarBoardPieceData__get_isMaster(basePiece, 0LL) )
    goto LABEL_10;
  Instance = *v30;
  if ( !*v30 )
    goto LABEL_25;
  if ( WarBoardPieceData__get_isMaster(Instance, 0LL) )
  {
LABEL_10:
    Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    if ( Instance[2].fields._npcDispLimitCount_k__BackingField < this->fields.moveCost
                                                               + requiredCost
                                                               + this->fields.masterMoveCost )
      goto LABEL_23;
  }
  else
  {
    Instance = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    if ( Instance[2].fields._npcDispLimitCount_k__BackingField < requiredCost + 2 * this->fields.moveCost )
      goto LABEL_23;
  }
  RouteSumPieceActionCost = WarBoardAIRoute__GetRouteSumPieceActionCost(
                              (WarBoardAIRoute_o *)Instance,
                              routeDataList,
                              *v30,
                              v32);
  if ( !WarBoardPieceData__EnableMoveBySelf(basePiece, sumPieceActionCost, 0LL) )
    goto LABEL_23;
  Instance = *v30;
  if ( !*v30 )
    goto LABEL_25;
  if ( !WarBoardPieceData__EnableSwapByOther(Instance, RouteSumPieceActionCost, 0LL) )
    goto LABEL_23;
  Instance = *v30;
  if ( !*v30 )
LABEL_25:
    sub_1BCAA3C(Instance, v23);
  if ( !WarBoardPieceData__get_isInfinitelyActable(Instance, 0LL) )
  {
    v37 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                           System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo,
                                           v34,
                                           v35,
                                           v36);
    System_Func_object__bool____ctor(
      v37,
      (Il2CppObject *)v21,
      Method_WarBoardAIRoute___c__DisplayClass76_0__IsActableReplace_b__0__,
      0LL);
    Instance = (WarBoardPieceData_o *)System_Linq_Enumerable__Count_object__49476864(
                                        (System_Collections_Generic_IEnumerable_TSource__o *)routeDataList,
                                        (System_Func_TSource__bool__o *)v37,
                                        (const MethodInfo_2F2F500 *)Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
    v38 = *(_QWORD *)(v21 + 16);
    if ( v38 )
    {
      if ( *(_DWORD *)(v38 + 36) > (int)Instance )
        goto LABEL_22;
LABEL_23:
      LOBYTE(Instance) = 0;
      return (char)Instance;
    }
    goto LABEL_25;
  }
LABEL_22:
  LOBYTE(Instance) = 1;
  return (char)Instance;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardAIRoute__IsAllBlockShortestRouteEnemyAndMastr(
        System_Collections_Generic_List_int____o *shortestEnemyRoute,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        bool isDefenseSquare,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int____o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  unsigned int v15; // w20
  char v16; // w21
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppObject *current; // x21
  void *monitor; // x9
  __int64 v21; // x26
  __int64 v22; // x28
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-80h] BYREF

  v6 = shortestEnemyRoute;
  if ( (byte_4B13CC6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__, piecePlaceData, isDefenseSquare);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v11, v12);
    shortestEnemyRoute = (System_Collections_Generic_List_int____o *)sub_1BCA7E0(
                                                                       &Method_System_Collections_Generic_List_int____GetEnumerator__,
                                                                       v13,
                                                                       v14);
    byte_4B13CC6 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  if ( !v6 )
    sub_1BCAA3C(shortestEnemyRoute, piecePlaceData);
  v15 = !isDefenseSquare;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)v6,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  v16 = 0;
  v25 = v24;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    if ( !v17 )
      break;
    current = v25.fields._current;
    if ( !v25.fields._current )
      sub_1BCAA3C(v17, v18);
    monitor = v25.fields._current[1].monitor;
    if ( (int)monitor - 1 <= (int)v15 )
    {
LABEL_16:
      v16 = 0;
      break;
    }
    if ( (unsigned int)v25.fields._current[1].monitor <= (unsigned __int64)v15 )
LABEL_18:
      sub_1BCAA44(v17, v18);
    v21 = (unsigned int)((_DWORD)monitor - 1) - 1LL;
    v22 = v15;
    while ( 1 )
    {
      if ( !piecePlaceData )
        sub_1BCAA3C(v17, v18);
      v17 = System_Collections_Generic_Dictionary_int__uint___ContainsKey(
              piecePlaceData,
              *((_DWORD *)&current[2].klass + v22),
              (const MethodInfo_3211C64 *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
      if ( v17 )
        break;
      if ( v21 == v22 )
        goto LABEL_16;
      if ( ++v22 >= (unsigned __int64)LODWORD(current[1].monitor) )
        goto LABEL_18;
    }
    v16 = 1;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return v16 & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardAIRoute__IsBlockShortestRouteEnemyAndMaster(
        DefenseAreaData_o *defenseArea,
        int32_t index,
        bool isDefenseSquare,
        const MethodInfo *method)
{
  BalanceConfig_c *v7; // x0

  if ( (byte_4B13CC3 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&index, isDefenseSquare);
    byte_4B13CC3 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&index);
  if ( !defenseArea )
    sub_1BCAA3C(v7, *(_QWORD *)&index);
  if ( BalanceConfig_TypeInfo->static_fields->IsEnableOldBlockShortestRoute )
    return WarBoardAIRoute__IsBlockShortestRouteEnemyAndMasterOld(
             defenseArea->fields._ShortestRoutes_k__BackingField,
             index,
             isDefenseSquare,
             method);
  else
    return WarBoardAIRoute__IsBlockShortestRouteEnemyAndMasterAll(
             defenseArea->fields._AllShortestRoutes_k__BackingField,
             index,
             isDefenseSquare,
             method);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardAIRoute__IsBlockShortestRouteEnemyAndMasterAll(
        System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__o *allShortestRoute,
        int32_t index,
        bool isDefenseSquare,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__o *v6; // x21
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
  unsigned int v23; // w28
  char v24; // w22
  _BOOL8 v25; // x0
  __int64 v26; // x1
  Il2CppClass *klass; // x0
  _BOOL8 v28; // x0
  __int64 v29; // x1
  unsigned int monitor; // w10
  unsigned int v31; // w9
  int v32; // w11
  int v33; // w21
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v35; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+30h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v37; // [xsp+50h] [xbp-90h] BYREF

  v6 = allShortestRoute;
  if ( (byte_4B13CC5 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__GetEnumerator__,
      *(_QWORD *)&index,
      isDefenseSquare);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__Dispose__,
      v7,
      v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v11, v12);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__MoveNext__,
      v13,
      v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v15, v16);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__get_Current__,
      v17,
      v18);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_int__DefenseAreaData_AllShortestRouteData__get_Value__,
      v19,
      v20);
    allShortestRoute = (System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__o *)sub_1BCA7E0(&Method_System_Collections_Generic_List_int____GetEnumerator__, v21, v22);
    byte_4B13CC5 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  memset(&v37, 0, sizeof(v37));
  if ( !v6 )
    sub_1BCAA3C(allShortestRoute, *(_QWORD *)&index);
  v23 = !isDefenseSquare;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v35,
    (System_Collections_Generic_Dictionary_int__object__o *)v6,
    (const MethodInfo_320631C *)Method_System_Collections_Generic_Dictionary_int__DefenseAreaData_AllShortestRouteData__GetEnumerator__);
  v24 = 0;
  v37 = v35;
  while ( 1 )
  {
    v25 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v37,
            (const MethodInfo_335671C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__MoveNext__);
    if ( !v25 )
      break;
    if ( !v37.fields._current.fields.value )
      sub_1BCAA3C(v25, v26);
    klass = v37.fields._current.fields.value[1].klass;
    if ( !klass )
      sub_1BCAA3C(0LL, v26);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v35,
      (System_Collections_Generic_List_object__o *)klass,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    *(_OWORD *)&v36.fields._list = *(_OWORD *)&v35.fields._dictionary;
    v36.fields._current = v35.fields._current.fields.key;
    do
    {
LABEL_9:
      v28 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v36,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v28 )
      {
        v33 = 4;
        goto LABEL_20;
      }
      if ( !v36.fields._current )
        sub_1BCAA3C(v28, v29);
      monitor = (unsigned int)v36.fields._current[1].monitor;
      v31 = monitor - 1;
    }
    while ( (int)(monitor - 1) <= (int)v23 );
    if ( v23 > monitor )
      monitor = !isDefenseSquare;
    v32 = !isDefenseSquare;
    while ( 1 )
    {
      if ( monitor == v32 )
        sub_1BCAA44(v28, v29);
      if ( *((_DWORD *)&v36.fields._current[2].klass + v32) == index )
        break;
      if ( v31 == ++v32 )
        goto LABEL_9;
    }
    v24 = 1;
    v33 = 11;
LABEL_20:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v36,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    if ( (v33 | 4) != 4 )
      goto LABEL_26;
  }
  v33 = 12;
LABEL_26:
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v37,
    (const MethodInfo_3356840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__DefenseAreaData_AllShortestRouteData__Dispose__);
  return v24 & (v33 == 11);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardAIRoute__IsBlockShortestRouteEnemyAndMasterOld(
        System_Collections_Generic_List_int____o *shortestEnemyRoute,
        int32_t index,
        bool isDefenseSquare,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int____o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  unsigned int v13; // w24
  _BOOL8 v14; // x0
  __int64 v15; // x1
  bool v16; // w20
  unsigned int monitor; // w10
  unsigned int v18; // w9
  unsigned int v19; // w11
  int v20; // w19
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  v6 = shortestEnemyRoute;
  if ( (byte_4B13CC4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, *(_QWORD *)&index, isDefenseSquare);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v9, v10);
    shortestEnemyRoute = (System_Collections_Generic_List_int____o *)sub_1BCA7E0(
                                                                       &Method_System_Collections_Generic_List_int____GetEnumerator__,
                                                                       v11,
                                                                       v12);
    byte_4B13CC4 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  if ( !v6 )
    sub_1BCAA3C(shortestEnemyRoute, *(_QWORD *)&index);
  v13 = !isDefenseSquare;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)v6,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
  v23 = v22;
  do
  {
LABEL_5:
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    v16 = v14;
    if ( !v14 )
    {
      v20 = 10;
      goto LABEL_16;
    }
    if ( !v23.fields._current )
      sub_1BCAA3C(v14, v15);
    monitor = (unsigned int)v23.fields._current[1].monitor;
    v18 = monitor - 1;
  }
  while ( (int)(monitor - 1) <= (int)v13 );
  if ( v13 > monitor )
    monitor = v13;
  v19 = v13;
  while ( 1 )
  {
    if ( monitor == v19 )
      sub_1BCAA44(v14, v15);
    if ( *((_DWORD *)&v23.fields._current[2].klass + (int)v19) == index )
      break;
    if ( v18 == ++v19 )
      goto LABEL_5;
  }
  v20 = 9;
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  return v16 && v20 == 9;
}


bool __fastcall WarBoardAIRoute__IsDetour(
        System_Int32_array *route,
        System_Int32_array *blockPieces,
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
  __int64 v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int32_t v23; // w0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  bool v27; // w0
  int v29; // w23
  System_Func_int__bool__o **v30; // x21
  System_Func_int__bool__o *v31; // x22
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int v38; // w8

  if ( (byte_4B13CC2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int____76840176, blockPieces, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_int___, v6, v7);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_WarBoardAIRoute___c__DisplayClass58_0__IsDetour_b__0__, v10, v11);
    sub_1BCA7E0(&WarBoardAIRoute___c__DisplayClass58_0_TypeInfo, v12, v13);
    byte_4B13CC2 = 1;
  }
  v14 = sub_1BCAA2C(WarBoardAIRoute___c__DisplayClass58_0_TypeInfo, blockPieces, method, v3);
  WarBoardAIRoute___c__DisplayClass58_0___ctor((WarBoardAIRoute___c__DisplayClass58_0_o *)v14, 0LL);
  if ( !v14 )
    sub_1BCAA3C(v15, v16);
  *(_QWORD *)(v14 + 16) = route;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)route, v17, v18, v19, v20, v21, v22);
  v23 = System_Linq_Enumerable__Count_int_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)(v14 + 16),
          (const MethodInfo_2F2DBBC *)Method_System_Linq_Enumerable_Count_int___);
  if ( v23 < 2 )
    return 0;
  *(_DWORD *)(v14 + 24) = 1;
  if ( v23 == 2 )
  {
    return 0;
  }
  else
  {
    v29 = v23 - 1;
    v30 = (System_Func_int__bool__o **)(v14 + 32);
    do
    {
      v31 = *v30;
      if ( !*v30 )
      {
        v31 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v24, v25, v26);
        System_Func_int__bool____ctor(
          v31,
          (Il2CppObject *)v14,
          Method_WarBoardAIRoute___c__DisplayClass58_0__IsDetour_b__0__,
          0LL);
        *(_QWORD *)(v14 + 32) = v31;
        sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 32), (int64_t)v31, v32, v33, v34, v35, v36, v37);
      }
      v27 = BasicHelper__Any_int__49273364(
              blockPieces,
              (System_Func_T__bool__o *)v31,
              (const MethodInfo_2EFDA14 *)Method_BasicHelper_Any_int____76840176);
      if ( v27 )
        break;
      v38 = *(_DWORD *)(v14 + 24) + 1;
      *(_DWORD *)(v14 + 24) = v38;
    }
    while ( v38 < v29 );
  }
  return v27;
}


bool __fastcall WarBoardAIRoute__IsThinkingThreshold(WarBoardAIRoute_o *this, float v, const MethodInfo *method)
{
  struct WarBoardStageNpcEntity_o *npcData; // x8

  npcData = this->fields.npcData;
  if ( !npcData )
    sub_1BCAA3C(this, method);
  return (float)((float)npcData->fields.lowerThinkingValue / 100.0) > v;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardAIRoute__LinkedCount(
        WarBoardAIRoute_o *this,
        int32_t actionSquareIndex,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        int32_t *attackByLinkEnemy,
        int32_t *attackByLinkAlly,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  WarBoardData_o *Square; // x0
  const MethodInfo *v15; // x1
  struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *npcEntityDict; // x24
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  unsigned __int64 v18; // x25
  int32_t v19; // w22
  const MethodInfo *v20; // x1
  uint32_t value; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B13CD3 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__,
      *(_QWORD *)&actionSquareIndex,
      piecePlaceData);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&WarBoardAIManager_TypeInfo, v12, v13);
    byte_4B13CD3 = 1;
  }
  value = 0;
  ++*attackByLinkEnemy;
  if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, *(_QWORD *)&actionSquareIndex);
  Square = (WarBoardData_o *)WarBoardAIManager__GetSquare(actionSquareIndex, *(const MethodInfo **)&actionSquareIndex);
  if ( !Square )
    goto LABEL_27;
  npcEntityDict = Square->fields.npcEntityDict;
  if ( !npcEntityDict )
    goto LABEL_27;
  entries = npcEntityDict->fields._entries;
  if ( (int)entries >= 1 )
  {
    v18 = 0LL;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)entries )
        sub_1BCAA44(Square, v15);
      if ( !piecePlaceData )
        break;
      v19 = *(&npcEntityDict->fields._count + v18);
      if ( System_Collections_Generic_Dictionary_int__uint___TryGetValue(
             piecePlaceData,
             v19,
             &value,
             (const MethodInfo_3213110 *)Method_System_Collections_Generic_Dictionary_int__uint__TryGetValue__) )
      {
        Square = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !Square )
          break;
        Square = (WarBoardData_o *)Square[1].fields.playedStageReinforcementsList;
        if ( !Square )
          break;
        Square = (WarBoardData_o *)WarBoardData__GetPiece_36054756(Square, value, 1, 0LL);
        if ( !Square )
          break;
        if ( WarBoardPieceData__get_isServant((WarBoardPieceData_o *)Square, 0LL) )
          ++*attackByLinkAlly;
      }
      if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v20);
      Square = (WarBoardData_o *)WarBoardAIManager__GetEnemyPieceSquareIndex(v19, v20);
      if ( Square )
      {
        if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v15);
        Square = (WarBoardData_o *)WarBoardAIManager__GetEnemyPieceSquareIndex(v19, v15);
        if ( !Square )
          break;
        Square = (WarBoardData_o *)WarBoardPieceData__get_isServant((WarBoardPieceData_o *)Square, 0LL);
        if ( ((unsigned __int8)Square & 1) != 0 )
          ++*attackByLinkEnemy;
      }
      LODWORD(entries) = npcEntityDict->fields._entries;
      if ( (__int64)++v18 >= (int)entries )
        return;
    }
LABEL_27:
    sub_1BCAA3C(Square, v15);
  }
}


void __fastcall WarBoardAIRoute__LinkedPieceCount(
        WarBoardAIRoute_o *this,
        WarBoardAIRoute_RouteData_o **routeData,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        System_Collections_Generic_List_int__o *alreadyGetItemSquares,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  WarBoardAIRoute_RouteData_o *v14; // x8
  struct WarBoardSquareData_o *actionSquare; // x9
  struct System_Int32_array *linkedSquares; // x26
  struct WarBoardPieceData_o *basePiece; // x22
  unsigned __int64 v18; // x27
  il2cpp_array_size_t max_length; // w8
  int32_t v20; // w25
  const MethodInfo *v21; // x4
  System_Collections_Generic_List_object__o *moveByLinkedPiece; // x24
  WarBoardPieceData_o *v23; // x23
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  WarBoardAIRoute_o *v33; // x1
  Il2CppClass **v34; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x2
  int32_t v38; // w24
  __int64 v39; // x1
  int32_t ClassId; // w25

  if ( (byte_4B13CD7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, routeData, piecePlaceData);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&SvtClassAttri_TypeInfo, v10, v11);
    this = (WarBoardAIRoute_o *)sub_1BCA7E0(&WarBoardAIManager_TypeInfo, v12, v13);
    byte_4B13CD7 = 1;
  }
  v14 = *routeData;
  if ( !*routeData
    || (actionSquare = v14->fields.actionSquare) == 0LL
    || (linkedSquares = actionSquare->fields.linkedSquares) == 0LL )
  {
LABEL_51:
    sub_1BCAA3C(this, routeData);
  }
  if ( (int)*(_QWORD *)&linkedSquares->max_length >= 1 )
  {
    basePiece = v14->fields.basePiece;
    v18 = 0LL;
    max_length = *(_QWORD *)&linkedSquares->max_length;
    do
    {
      if ( v18 >= max_length )
        sub_1BCAA44(this, routeData);
      v20 = linkedSquares->m_Items[v18 + 1];
      this = (WarBoardAIRoute_o *)WarBoardAIRoute__CanAcquireItem(
                                    this,
                                    v20,
                                    alreadyGetItemSquares,
                                    (const MethodInfo *)alreadyGetItemSquares);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !*routeData )
          goto LABEL_51;
        ++(*routeData)->fields.moveByLinkedItem;
      }
      this = (WarBoardAIRoute_o *)WarBoardAIRoute__GetActionPiece(
                                    this,
                                    (WarBoardPieceData_o *)routeData,
                                    v20,
                                    piecePlaceData,
                                    v21);
      if ( this )
      {
        if ( !*routeData )
          goto LABEL_51;
        moveByLinkedPiece = (System_Collections_Generic_List_object__o *)(*routeData)->fields.moveByLinkedPiece;
        v23 = (WarBoardPieceData_o *)this;
        this = (WarBoardAIRoute_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !this )
          goto LABEL_51;
        this = (WarBoardAIRoute_o *)this[1].fields.aiRouteMasterData;
        if ( !this )
          goto LABEL_51;
        this = (WarBoardAIRoute_o *)WarBoardData__GetPiece_36054544((WarBoardData_o *)this, v20, 0LL);
        if ( !moveByLinkedPiece )
          goto LABEL_51;
        items = moveByLinkedPiece->fields._items;
        v31 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
        ++moveByLinkedPiece->fields._version;
        if ( !items )
          goto LABEL_51;
        size = moveByLinkedPiece->fields._size;
        v33 = this;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            moveByLinkedPiece,
            (Il2CppObject *)this,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = &items->obj.klass + size;
          moveByLinkedPiece->fields._size = size + 1;
          v34[4] = (Il2CppClass *)v33;
          sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 4), (int64_t)v33, v24, v25, v26, v27, v28, v29);
        }
        if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v35);
        if ( WarBoardAIManager__IsAllyPiece(basePiece, v23, v36)
          && (this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isServant(v23, 0LL), ((unsigned __int8)this & 1) != 0) )
        {
          if ( !*routeData )
            goto LABEL_51;
          ++(*routeData)->fields.moveByLinkedAlly;
        }
        else
        {
          if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, routeData);
          this = (WarBoardAIRoute_o *)WarBoardAIManager__IsEnemyPiece(basePiece, v23, v37);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !*routeData )
              goto LABEL_51;
            (*routeData)->fields.flagNow |= 0x40uLL;
            if ( WarBoardPieceData__get_isServant(v23, 0LL) )
            {
              this = (WarBoardAIRoute_o *)*routeData;
              if ( !*routeData )
                goto LABEL_51;
              this = (WarBoardAIRoute_o *)WarBoardAIRoute_RouteData__HasFlag(
                                            (WarBoardAIRoute_RouteData_o *)this,
                                            0x2000000LL,
                                            0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
                goto LABEL_34;
              if ( !basePiece )
                goto LABEL_51;
              this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isMaster(basePiece, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isMaster(v23, 0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                {
                  this = (WarBoardAIRoute_o *)basePiece->fields._battleServant_k__BackingField;
                  if ( !this )
                    goto LABEL_51;
                  this = (WarBoardAIRoute_o *)BattleServantData__getClassId((BattleServantData_o *)this, 0LL);
                  if ( !v23->fields._battleServant_k__BackingField )
                    goto LABEL_51;
                  v38 = (int)this;
                  ClassId = BattleServantData__getClassId(v23->fields._battleServant_k__BackingField, 0LL);
                  if ( !SvtClassAttri_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo, v39);
                  if ( SvtClassAttri__getMagnification(v38, ClassId, 0LL) > 1.0 )
                  {
LABEL_34:
                    if ( !*routeData )
                      goto LABEL_51;
                    (*routeData)->fields.flagNow |= 0x2000000uLL;
                  }
                }
              }
              if ( !*routeData )
                goto LABEL_51;
              ++(*routeData)->fields.moveByLinkedEnemy;
            }
            this = (WarBoardAIRoute_o *)WarBoardPieceData__get_isMaster(v23, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !*routeData )
                goto LABEL_51;
              (*routeData)->fields.flagNow |= 0x80uLL;
            }
          }
        }
      }
      max_length = linkedSquares->max_length;
      ++v18;
    }
    while ( (__int64)v18 < (int)max_length );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardAIRoute__RegisterTargetObjectToDic(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *targetDic,
        System_Collections_Generic_List_IWarBoardObjectData__o *objectList,
        int32_t squareIndex,
        int64_t trendKey,
        int32_t conditionId,
        bool *notSquareTarget,
        const MethodInfo *method)
{
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
  WarBoardAIRoute___c__DisplayClass46_0_o *v28; // x25
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  System_Predicate_object__o *v34; // x24
  Il2CppObject *v35; // x0
  Il2CppClass *klass; // x8
  IWarBoardObjectData_o *v37; // x23
  __int64 v38; // x9
  IWarBoardObjectData_c **p_offset; // x10
  __int64 p_method; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  WarBoardAIRoute_TargetData_o *v44; // x22

  if ( (byte_4B13CB8 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__,
      targetDic,
      objectList);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__, v14, v15);
    sub_1BCA7E0(&IWarBoardObjectData_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_IWarBoardObjectData__Find__, v18, v19);
    sub_1BCA7E0(&System_Predicate_IWarBoardObjectData__TypeInfo, v20, v21);
    sub_1BCA7E0(&WarBoardAIRoute_TargetData_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_WarBoardAIRoute___c__DisplayClass46_0__RegisterTargetObjectToDic_b__0__, v24, v25);
    sub_1BCA7E0(&WarBoardAIRoute___c__DisplayClass46_0_TypeInfo, v26, v27);
    byte_4B13CB8 = 1;
  }
  v28 = (WarBoardAIRoute___c__DisplayClass46_0_o *)sub_1BCAA2C(
                                                     WarBoardAIRoute___c__DisplayClass46_0_TypeInfo,
                                                     targetDic,
                                                     objectList,
                                                     *(_QWORD *)&squareIndex);
  WarBoardAIRoute___c__DisplayClass46_0___ctor(v28, 0LL);
  if ( !v28 )
    goto LABEL_17;
  v28->fields.squareIndex = squareIndex;
  *notSquareTarget = 0;
  if ( !targetDic )
    goto LABEL_17;
  if ( System_Collections_Generic_Dictionary_long__object___ContainsKey(
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)targetDic,
         v28->fields.squareIndex,
         (const MethodInfo_3244218 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__ContainsKey__) )
  {
    return;
  }
  v34 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_IWarBoardObjectData__TypeInfo, v31, v32, v33);
  System_Predicate_object____ctor(
    v34,
    (Il2CppObject *)v28,
    Method_WarBoardAIRoute___c__DisplayClass46_0__RegisterTargetObjectToDic_b__0__,
    0LL);
  if ( !objectList )
LABEL_17:
    sub_1BCAA3C(v29, v30);
  v35 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)objectList,
          (System_Predicate_T__o *)v34,
          (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_IWarBoardObjectData__Find__);
  if ( v35 )
  {
    *notSquareTarget = 1;
    klass = v35->klass;
    v37 = (IWarBoardObjectData_o *)v35;
    v38 = *(unsigned __int16 *)(&v35->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v35->klass->_2.bitflags2 + 3) )
    {
      p_offset = (IWarBoardObjectData_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IWarBoardObjectData_TypeInfo )
      {
        --v38;
        p_offset += 2;
        if ( !v38 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1C1C7C0(v35, IWarBoardObjectData_TypeInfo, 2LL);
    }
    if ( ((*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))p_method)(v37, *(_QWORD *)(p_method + 8)) & 1) != 0 )
    {
      v44 = (WarBoardAIRoute_TargetData_o *)sub_1BCAA2C(WarBoardAIRoute_TargetData_TypeInfo, v41, v42, v43);
      WarBoardAIRoute_TargetData___ctor_35996996(v44, v37, trendKey, conditionId, 0LL);
      System_Collections_Generic_Dictionary_long__object___set_Item(
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)targetDic,
        trendKey,
        (Il2CppObject *)v44,
        (const MethodInfo_3244010 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__set_Item__);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardAIRoute__UpdatePiecePersonalityDic(
        WarBoardAIRoute_o *this,
        int32_t aiId,
        int32_t pieceIndex,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *piecePersonalityDic; // x0
  const MethodInfo *v8; // x3

  if ( (byte_4B13CB6 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Remove__,
      *(_QWORD *)&aiId,
      *(_QWORD *)&pieceIndex);
    byte_4B13CB6 = 1;
  }
  piecePersonalityDic = this->fields.piecePersonalityDic;
  if ( !piecePersonalityDic )
    sub_1BCAA3C(0LL, *(_QWORD *)&aiId);
  System_Collections_Generic_Dictionary_int__object___Remove(
    (System_Collections_Generic_Dictionary_int__object__o *)piecePersonalityDic,
    pieceIndex,
    (const MethodInfo_320736C *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__Remove__);
  WarBoardAIRoute__AddPiecePersonalityDic(this, aiId, pieceIndex, v8);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_Dictionary_int__uint__o *__fastcall WarBoardAIRoute__UpdatePiecePlaceData(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData,
        WarBoardAIRoute_RouteData_o *routeData,
        int32_t baseSquareIndex,
        int32_t actionSquareIndex,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_Dictionary_int__uint__o *v16; // x22
  _BOOL8 HasFlag; // x0
  __int64 v18; // x1
  struct WarBoardPieceData_o *actionPiece; // x8
  struct WarBoardPieceData_o *basePiece; // x8

  if ( (byte_4B13CD5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__uint__Remove__, piecePlaceData, routeData);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__uint___ctor___76740688, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__uint__set_Item__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__uint__TypeInfo, v14, v15);
    byte_4B13CD5 = 1;
  }
  v16 = (System_Collections_Generic_Dictionary_int__uint__o *)sub_1BCAA2C(
                                                                System_Collections_Generic_Dictionary_int__uint__TypeInfo,
                                                                piecePlaceData,
                                                                routeData,
                                                                *(_QWORD *)&baseSquareIndex);
  System_Collections_Generic_Dictionary_int__uint____ctor_52498836(
    v16,
    (System_Collections_Generic_IDictionary_TKey__TValue__o *)piecePlaceData,
    (const MethodInfo_3211194 *)Method_System_Collections_Generic_Dictionary_int__uint___ctor___76740688);
  if ( !routeData )
    goto LABEL_12;
  HasFlag = WarBoardAIRoute_RouteData__HasFlag(routeData, 0x4000000LL, 0LL);
  if ( HasFlag )
  {
    actionPiece = routeData->fields.actionPiece;
    if ( actionPiece && v16 )
    {
      System_Collections_Generic_Dictionary_int__uint___set_Item(
        v16,
        baseSquareIndex,
        actionPiece->fields._uniqueIndex_k__BackingField,
        (const MethodInfo_3211A64 *)Method_System_Collections_Generic_Dictionary_int__uint__set_Item__);
      goto LABEL_10;
    }
LABEL_12:
    sub_1BCAA3C(HasFlag, v18);
  }
  if ( !v16 )
    goto LABEL_12;
  HasFlag = System_Collections_Generic_Dictionary_int__uint___Remove(
              v16,
              baseSquareIndex,
              (const MethodInfo_3212E30 *)Method_System_Collections_Generic_Dictionary_int__uint__Remove__);
LABEL_10:
  basePiece = routeData->fields.basePiece;
  if ( !basePiece )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_int__uint___set_Item(
    v16,
    actionSquareIndex,
    basePiece->fields._uniqueIndex_k__BackingField,
    (const MethodInfo_3211A64 *)Method_System_Collections_Generic_Dictionary_int__uint__set_Item__);
  return v16;
}


bool __fastcall WarBoardAIRoute____ctor_b__42_0(
        WarBoardAIRoute_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return WarBoardPieceData__get_IsReinforcement(x, 0LL)
      && x->fields._forceId_k__BackingField == this->fields.forceId
      && x->fields._groupId_k__BackingField == this->fields.groupId;
}


bool __fastcall WarBoardAIRoute___GetMasterSquareIndexFromPlaceData_b__78_0(
        WarBoardAIRoute_o *this,
        System_Collections_Generic_KeyValuePair_int__uint__o x,
        const MethodInfo *method)
{
  uint32_t value; // x19^4
  WarBoardAIRoute_o *v4; // x20
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x8

  value = x.fields.value;
  v4 = this;
  if ( (byte_4B13CDA & 1) == 0 )
  {
    this = (WarBoardAIRoute_o *)sub_1BCA7E0(
                                  &Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__,
                                  x,
                                  method);
    byte_4B13CDA = 1;
  }
  aiRouteMasterData = v4->fields.aiRouteMasterData;
  if ( !aiRouteMasterData )
    sub_1BCAA3C(this, x);
  return aiRouteMasterData->fields.masterUniqueIndex == value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardAIRoute_AIRouteMasterData___ctor(
        WarBoardAIRoute_AIRouteMasterData_o *this,
        int32_t forceId,
        int32_t groupId,
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
  __int64 v17; // x3
  System_Collections_Generic_List_object__o *v18; // x22
  struct System_Collections_Generic_List_int____o **p_replaceDataList; // x19
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t Instance; // x0
  int64_t v27; // x1
  const MethodInfo *v28; // x4
  System_Int32_array *v29; // x8
  unsigned int v30; // w9
  unsigned int max_length; // w10
  unsigned int v32; // w23
  System_Collections_Generic_List_object__o *v33; // x20
  int32_t v34; // w25
  int32_t v35; // w24
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int v42; // w8
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  System_Int32_array *data; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B13DCE & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, *(_QWORD *)&forceId, *(_QWORD *)&groupId);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int____Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int_____ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_int____TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v13, v14);
    byte_4B13DCE = 1;
  }
  data = 0LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_OWORD *)&this->fields.masterType = xmmword_BD3700;
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_int____TypeInfo,
                                                       v15,
                                                       v16,
                                                       v17);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_int_____ctor__);
  this->fields.replaceDataList = (struct System_Collections_Generic_List_int____o *)v18;
  p_replaceDataList = &this->fields.replaceDataList;
  sub_1BCA784((PartyOrganizationUtility_o *)p_replaceDataList, (int64_t)v18, v20, v21, v22, v23, v24, v25);
  *((_DWORD *)p_replaceDataList + 2) = -1;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = *(_QWORD *)(Instance + 440);
  if ( !Instance )
    goto LABEL_20;
  Instance = WarBoardData__IsDefenseTarget((WarBoardData_o *)Instance, &data, forceId, groupId, v28);
  if ( (Instance & 1) == 0 )
    return;
  v29 = data;
  if ( !data )
LABEL_20:
    sub_1BCAA3C(Instance, v27);
  v30 = 0;
  while ( 1 )
  {
    max_length = v29->max_length;
    if ( (int)v30 >= (int)max_length )
      break;
    if ( v30 >= max_length )
      goto LABEL_22;
    v32 = v30 + 1;
    if ( v30 + 1 >= max_length )
      goto LABEL_22;
    v33 = (System_Collections_Generic_List_object__o *)*p_replaceDataList;
    v34 = v29->m_Items[v30 + 1];
    v35 = v29->m_Items[v32 + 1];
    Instance = sub_1BCA888(int___TypeInfo, 2LL);
    if ( !Instance )
      goto LABEL_20;
    v42 = *(_DWORD *)(Instance + 24);
    v27 = Instance;
    if ( !v42 || (*(_DWORD *)(Instance + 32) = v34, v42 == 1) )
LABEL_22:
      sub_1BCAA44(Instance, v27);
    *(_DWORD *)(Instance + 36) = v35;
    if ( v33 )
    {
      items = v33->fields._items;
      v44 = Method_System_Collections_Generic_List_int____Add__;
      ++v33->fields._version;
      if ( items )
      {
        size = v33->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v33,
            (Il2CppObject *)Instance,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
        }
        else
        {
          v46 = &items->obj.klass + size;
          v33->fields._size = size + 1;
          v46[4] = (Il2CppClass *)v27;
          sub_1BCA784((PartyOrganizationUtility_o *)(v46 + 4), v27, v36, v37, v38, v39, v40, v41);
        }
        v29 = data;
        v30 = v32 + 1;
        if ( data )
          continue;
      }
    }
    goto LABEL_20;
  }
}


bool __fastcall WarBoardAIRoute_AIRouteMasterData__IsMasterServant(
        WarBoardAIRoute_AIRouteMasterData_o *this,
        int32_t pieceIndex,
        const MethodInfo *method)
{
  return this->fields.masterType == 2 && this->fields.masterPieceIndex == pieceIndex;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardAIRoute_AIRouteMasterData__SetAIRouteMasterData(
        WarBoardAIRoute_AIRouteMasterData_o *this,
        int32_t type,
        WarBoardPieceData_o *pieceData,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  void *replaceDataList; // x0
  uint32_t uniqueIndex_k__BackingField; // w8
  int32_t v11; // w22
  int32_t replacePriority; // w8
  __int64 v13; // x8
  unsigned int v14; // w8
  int32_t v15; // w8
  int32_t v16; // w8

  if ( (byte_4B13DCF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int____get_Count__, *(_QWORD *)&type, pieceData);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int____get_Item__, v7, v8);
    byte_4B13DCF = 1;
  }
  if ( type
    || (replaceDataList = (void *)BasicHelper__IsNullOrEmpty(
                                    (System_Collections_ICollection_o *)this->fields.replaceDataList,
                                    0LL),
        ((unsigned __int8)replaceDataList & 1) == 0) )
  {
    replaceDataList = this->fields.replaceDataList;
    if ( replaceDataList )
    {
      v11 = 0;
      do
      {
        if ( v11 >= *((_DWORD *)replaceDataList + 6) )
          return;
        replacePriority = this->fields.replacePriority;
        if ( replacePriority != -1 && replacePriority < v11 )
          return;
        replaceDataList = System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)replaceDataList,
                            v11,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_int____get_Item__);
        if ( pieceData != 0LL && type == 0 )
        {
          if ( !replaceDataList )
            break;
          if ( !*((_DWORD *)replaceDataList + 6) )
            goto LABEL_36;
          if ( !*((_DWORD *)replaceDataList + 8) )
          {
            this->fields.masterType = 0;
LABEL_33:
            uniqueIndex_k__BackingField = pieceData->fields._uniqueIndex_k__BackingField;
            this->fields.replacePriority = v11;
            goto LABEL_34;
          }
        }
        if ( type != 2 || pieceData == 0LL )
        {
          if ( type == 1 )
          {
            if ( !replaceDataList )
              break;
            v13 = *((_QWORD *)replaceDataList + 3);
            if ( !(_DWORD)v13 )
              goto LABEL_36;
            if ( *((_DWORD *)replaceDataList + 8) == 1 )
            {
              this->fields.masterType = 1;
              if ( (unsigned int)v13 <= 1 )
LABEL_36:
                sub_1BCAA44(replaceDataList, *(_QWORD *)&type);
              v16 = *((_DWORD *)replaceDataList + 9);
              this->fields.replacePriority = v11;
              this->fields.masterSquareIndex = v16;
              return;
            }
          }
        }
        else
        {
          if ( !replaceDataList )
            break;
          v14 = *((_DWORD *)replaceDataList + 6);
          if ( !v14 )
            goto LABEL_36;
          if ( *((_DWORD *)replaceDataList + 8) == 2 )
          {
            if ( v14 <= 1 )
              goto LABEL_36;
            v15 = *((_DWORD *)replaceDataList + 9);
            if ( v15 == pieceData->fields._index_k__BackingField )
            {
              this->fields.masterPieceIndex = v15;
              this->fields.masterType = 2;
              goto LABEL_33;
            }
          }
        }
        replaceDataList = this->fields.replaceDataList;
        ++v11;
      }
      while ( replaceDataList );
    }
LABEL_28:
    sub_1BCAA3C(replaceDataList, *(_QWORD *)&type);
  }
  this->fields.masterType = 0;
  if ( !pieceData )
    goto LABEL_28;
  uniqueIndex_k__BackingField = pieceData->fields._uniqueIndex_k__BackingField;
  this->fields.replacePriority = 0;
LABEL_34:
  this->fields.masterUniqueIndex = uniqueIndex_k__BackingField;
}


bool __fastcall WarBoardAIRoute_AIRouteMasterData__get_IsServant(
        WarBoardAIRoute_AIRouteMasterData_o *this,
        const MethodInfo *method)
{
  return this->fields.masterType == 2;
}


bool __fastcall WarBoardAIRoute_AIRouteMasterData__get_IsSquare(
        WarBoardAIRoute_AIRouteMasterData_o *this,
        const MethodInfo *method)
{
  return this->fields.masterType == 1;
}


void __fastcall WarBoardAIRoute_ActionTrendInfo___ctor(
        WarBoardAIRoute_ActionTrendInfo_o *this,
        WarBoardActionTrendEntity_o *entity,
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
  System_Collections_Generic_List_object__o *v20; // x22
  struct System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__o **p_FutureTrendInfoList_k__BackingField; // x19
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  const MethodInfo *v34; // x1
  WarBoardActionTrendConditionEntity_array *ConditionEntityArray; // x22
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Func_T__TResult__o *v39; // x23
  WarBoardActionTrendEntity_array *HasMatchCondition; // x0
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x8
  WarBoardActionTrendEntity_array *v46; // x20
  unsigned __int64 i; // x24
  WarBoardActionTrendEntity_o *v48; // x23
  System_Collections_Generic_List_object__o *v49; // x21
  WarBoardAIRoute_ActionTrendInfo_o *v50; // x22
  const MethodInfo *v51; // x2
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  struct System_Object_array *items; // x8
  _QWORD *v59; // x9
  __int64 size; // x10
  Il2CppClass **v61; // x0
  int32_t condType; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B13DBD & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardAIRoute_ActionTrendInfo_TypeInfo, entity, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardActionTrendMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_WarBoardActionTrendConditionEntity_IsTargetIndividualityCond__, v18, v19);
    byte_4B13DBD = 1;
  }
  condType = 0;
  v20 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo,
                                                       entity,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
  this->fields._FutureTrendInfoList_k__BackingField = (struct System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__o *)v20;
  p_FutureTrendInfoList_k__BackingField = &this->fields._FutureTrendInfoList_k__BackingField;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._FutureTrendInfoList_k__BackingField,
    (int64_t)v20,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Entity_k__BackingField = entity;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)entity, v28, v29, v30, v31, v32, v33);
  ConditionEntityArray = WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(this, v34);
  v39 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                       System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__TypeInfo,
                                       v36,
                                       v37,
                                       v38);
  System_Func_Int32Enum__bool____ctor(
    v39,
    0LL,
    Method_WarBoardActionTrendConditionEntity_IsTargetIndividualityCond__,
    0LL);
  HasMatchCondition = (WarBoardActionTrendEntity_array *)WarBoardActionTrendConditionMaster__HasMatchCondition(
                                                           ConditionEntityArray,
                                                           (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)v39,
                                                           &condType,
                                                           0LL);
  this->fields._HasTargetIndividualityCond_k__BackingField = (unsigned __int8)HasMatchCondition & 1;
  if ( !entity )
    goto LABEL_20;
  if ( !WarBoardActionTrendEntity__get_HasFutureTrend(entity, 0LL) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v42);
  HasMatchCondition = (WarBoardActionTrendEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardActionTrendMaster___);
  if ( !HasMatchCondition
    || (HasMatchCondition = WarBoardActionTrendMaster__GetFutureActionTrendEntityArray(
                              (WarBoardActionTrendMaster_o *)HasMatchCondition,
                              entity,
                              0LL)) == 0LL )
  {
LABEL_20:
    sub_1BCAA3C(HasMatchCondition, v41);
  }
  v45 = *(_QWORD *)&HasMatchCondition->max_length;
  v46 = HasMatchCondition;
  if ( (int)v45 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v45; ++i )
    {
      if ( i >= (unsigned int)v45 )
        sub_1BCAA44(HasMatchCondition, v41);
      v48 = v46->m_Items[i];
      if ( v48 )
      {
        v49 = (System_Collections_Generic_List_object__o *)*p_FutureTrendInfoList_k__BackingField;
        v50 = (WarBoardAIRoute_ActionTrendInfo_o *)sub_1BCAA2C(WarBoardAIRoute_ActionTrendInfo_TypeInfo, v41, v43, v44);
        WarBoardAIRoute_ActionTrendInfo___ctor(v50, v48, v51);
        if ( !v49 )
          goto LABEL_20;
        items = v49->fields._items;
        v59 = Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__Add__;
        ++v49->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v49->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v49,
            (Il2CppObject *)v50,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
        }
        else
        {
          v61 = &items->obj.klass + size;
          v49->fields._size = size + 1;
          v61[4] = (Il2CppClass *)v50;
          sub_1BCA784((PartyOrganizationUtility_o *)(v61 + 4), (int64_t)v50, v52, v53, v54, v55, v56, v57);
        }
      }
      LODWORD(v45) = v46->max_length;
    }
  }
}


WarBoardActionTrendConditionEntity_array *__fastcall WarBoardAIRoute_ActionTrendInfo__get_ConditionEntityArray(
        WarBoardAIRoute_ActionTrendInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  WarBoardAIRoute_ActionTrendInfo_o *v4; // x20
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
  PartyOrganizationUtility_o *p_conditionEntityArray; // x19
  System_Object_array *conditionEntityArray; // x21
  struct WarBoardActionTrendEntity_o *Entity_k__BackingField; // x8
  System_Collections_Generic_IEnumerable_TSource__o *conditionIds; // x20
  WarBoardAIRoute_ActionTrendInfo___c_c *v19; // x0
  System_Func_T__TResult__o *_9__8_0; // x21
  Il2CppObject *v21; // x22
  struct WarBoardAIRoute_ActionTrendInfo___c_StaticFields *static_fields; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_Collections_Generic_IEnumerable_T__o *v29; // x0
  System_Collections_Generic_IEnumerable_T__o *v30; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7

  v4 = this;
  if ( (byte_4B13DBC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_ExcludeNull_WarBoardActionTrendConditionEntity___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendConditionEntity___, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendConditionEntity___, v7, v8);
    sub_1BCA7E0(&System_Func_int__WarBoardActionTrendConditionEntity__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_WarBoardAIRoute_ActionTrendInfo___c__get_ConditionEntityArray_b__8_0__, v11, v12);
    this = (WarBoardAIRoute_ActionTrendInfo_o *)sub_1BCA7E0(&WarBoardAIRoute_ActionTrendInfo___c_TypeInfo, v13, v14);
    byte_4B13DBC = 1;
  }
  p_conditionEntityArray = (PartyOrganizationUtility_o *)&v4->fields.conditionEntityArray;
  conditionEntityArray = (System_Object_array *)v4->fields.conditionEntityArray;
  if ( !conditionEntityArray )
  {
    Entity_k__BackingField = v4->fields._Entity_k__BackingField;
    if ( !Entity_k__BackingField )
      sub_1BCAA3C(this, method);
    conditionIds = (System_Collections_Generic_IEnumerable_TSource__o *)Entity_k__BackingField->fields.conditionIds;
    v19 = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo;
    if ( !WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIRoute_ActionTrendInfo___c_TypeInfo, method);
      v19 = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo;
    }
    _9__8_0 = (System_Func_T__TResult__o *)v19->static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19, method);
        v19 = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo;
      }
      v21 = (Il2CppObject *)v19->static_fields->__9;
      _9__8_0 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                               System_Func_int__WarBoardActionTrendConditionEntity__TypeInfo,
                                               method,
                                               v2,
                                               v3);
      System_Func_int__object____ctor(
        _9__8_0,
        v21,
        Method_WarBoardAIRoute_ActionTrendInfo___c__get_ConditionEntityArray_b__8_0__,
        0LL);
      static_fields = WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = (struct System_Func_int__WarBoardActionTrendConditionEntity__o *)_9__8_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__8_0,
        (int64_t)_9__8_0,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
    }
    v29 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                           conditionIds,
                                                           (System_Func_TSource__TResult__o *)_9__8_0,
                                                           (const MethodInfo_2F3F30C *)Method_System_Linq_Enumerable_Select_int__WarBoardActionTrendConditionEntity___);
    v30 = BasicHelper__ExcludeNull_object_(
            v29,
            (const MethodInfo_2EFE5E8 *)Method_BasicHelper_ExcludeNull_WarBoardActionTrendConditionEntity___);
    conditionEntityArray = System_Linq_Enumerable__ToArray_object_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)v30,
                             (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_WarBoardActionTrendConditionEntity___);
    p_conditionEntityArray->klass = (PartyOrganizationUtility_c *)conditionEntityArray;
    sub_1BCA784(p_conditionEntityArray, (int64_t)conditionEntityArray, v31, v32, v33, v34, v35, v36);
  }
  return (WarBoardActionTrendConditionEntity_array *)conditionEntityArray;
}


WarBoardActionTrendEntity_o *__fastcall WarBoardAIRoute_ActionTrendInfo__get_Entity(
        WarBoardAIRoute_ActionTrendInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._Entity_k__BackingField;
}


System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__o *__fastcall WarBoardAIRoute_ActionTrendInfo__get_FutureTrendInfoList(
        WarBoardAIRoute_ActionTrendInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._FutureTrendInfoList_k__BackingField;
}


bool __fastcall WarBoardAIRoute_ActionTrendInfo__get_HasTargetIndividualityCond(
        WarBoardAIRoute_ActionTrendInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._HasTargetIndividualityCond_k__BackingField;
}


void __fastcall WarBoardAIRoute_ActionTrendInfo___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B13DBE & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardAIRoute_ActionTrendInfo___c_TypeInfo, v1, v2);
    byte_4B13DBE = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(WarBoardAIRoute_ActionTrendInfo___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields->__9 = (struct WarBoardAIRoute_ActionTrendInfo___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarBoardAIRoute_ActionTrendInfo___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall WarBoardAIRoute_ActionTrendInfo___c___ctor(
        WarBoardAIRoute_ActionTrendInfo___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
WarBoardActionTrendConditionEntity_o *__fastcall WarBoardAIRoute_ActionTrendInfo___c___get_ConditionEntityArray_b__8_0(
        WarBoardAIRoute_ActionTrendInfo___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1

  if ( (byte_4B13DBF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardActionTrendConditionMaster___, *(_QWORD *)&x, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(
      &Method_DataMasterBase_WarBoardActionTrendConditionMaster__WarBoardActionTrendConditionEntity__int__GetEntity__,
      v6,
      v7);
    byte_4B13DBF = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&x);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardActionTrendConditionMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v9);
  return (WarBoardActionTrendConditionEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                   x,
                                                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_WarBoardActionTrendConditionMaster__WarBoardActionTrendConditionEntity__int__GetEntity__);
}


void __fastcall WarBoardAIRoute_AdvantagePieceData___ctor(
        WarBoardAIRoute_AdvantagePieceData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_Dictionary_int__object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_Dictionary_int__object__o *v17; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_Generic_Dictionary_int__object__o *v27; // x20
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  System_Collections_Generic_Dictionary_int__object__o *v37; // x20
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  System_Collections_Generic_Dictionary_int__object__o *v47; // x20
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  System_Collections_Generic_Dictionary_int__object__o *v57; // x20
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7

  if ( (byte_4B13DC7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo, v5, v6);
    byte_4B13DC7 = 1;
  }
  this->fields.flagNow = 1LL;
  *(_QWORD *)&this->fields.baseCARange = -1LL;
  *(_QWORD *)&this->fields.baseAARange = -1LL;
  *(_QWORD *)&this->fields.baseDARange = -1LL;
  v7 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                 System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo,
                                                                 method,
                                                                 v2,
                                                                 v3);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v7,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicClassAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v7;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.dicClassAdvantageServant,
    (int64_t)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v17 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo,
                                                                  v14,
                                                                  v15,
                                                                  v16);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v17,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicClassDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v17;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.dicClassDisAdvantageServant,
    (int64_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v27 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo,
                                                                  v24,
                                                                  v25,
                                                                  v26);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v27,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicAttackAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v27;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.dicAttackAdvantageServant,
    (int64_t)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v37 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo,
                                                                  v34,
                                                                  v35,
                                                                  v36);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v37,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicAttackDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v37;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.dicAttackDisAdvantageServant,
    (int64_t)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v47 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo,
                                                                  v44,
                                                                  v45,
                                                                  v46);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v47,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicDefenseAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v47;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.dicDefenseAdvantageServant,
    (int64_t)v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  v57 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo,
                                                                  v54,
                                                                  v55,
                                                                  v56);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v57,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  this->fields.dicDefenseDisAdvantageServant = (struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *)v57;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.dicDefenseDisAdvantageServant,
    (int64_t)v57,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIRoute_DesignationItemData___ctor(
        WarBoardAIRoute_DesignationItemData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_Dictionary_int__object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B13DC8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo, v5, v6);
    byte_4B13DC8 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                 System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo,
                                                                 method,
                                                                 v2,
                                                                 v3);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v7,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__);
  this->fields.dicSquareIndexKeyItemData = (struct System_Collections_Generic_Dictionary_int__WarBoardItemData__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIRoute_PiecePersonality___ctor(
        WarBoardAIRoute_PiecePersonality_o *this,
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
  System_Collections_Generic_List_object__o *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Collections_Generic_List_object__o *v21; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4B13DB6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity___ctor__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardRatingOffsetEntity__TypeInfo, v9, v10);
    byte_4B13DB6 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo___ctor__);
  this->fields.actionTrandList = (struct System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__o *)v11;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardRatingOffsetEntity__TypeInfo,
                                                       v18,
                                                       v19,
                                                       v20);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardRatingOffsetEntity___ctor__);
  this->fields.ratingOffsetList = (struct System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *)v21;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.ratingOffsetList, (int64_t)v21, v22, v23, v24, v25, v26, v27);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *__fastcall WarBoardAIRoute_PiecePersonality__AttackOffset(
        WarBoardAIRoute_PiecePersonality_o *this,
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
  System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *result; // x0
  PartyOrganizationUtility_o *p_attackOffset; // x19
  struct System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *ratingOffsetList; // x20
  WarBoardAIRoute_PiecePersonality___c_c *v16; // x0
  System_Func_object__bool__o *_9__4_0; // x21
  Il2CppObject *v18; // x22
  struct WarBoardAIRoute_PiecePersonality___c_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Collections_Generic_List_TSource__o *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7

  if ( (byte_4B13DB3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___, v5, v6);
    sub_1BCA7E0(&System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_WarBoardAIRoute_PiecePersonality___c__AttackOffset_b__4_0__, v9, v10);
    sub_1BCA7E0(&WarBoardAIRoute_PiecePersonality___c_TypeInfo, v11, v12);
    byte_4B13DB3 = 1;
  }
  p_attackOffset = (PartyOrganizationUtility_o *)&this->fields.attackOffset;
  result = this->fields.attackOffset;
  if ( !result )
  {
    ratingOffsetList = this->fields.ratingOffsetList;
    v16 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
    if ( !WarBoardAIRoute_PiecePersonality___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIRoute_PiecePersonality___c_TypeInfo, method);
      v16 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
    }
    _9__4_0 = (System_Func_object__bool__o *)v16->static_fields->__9__4_0;
    if ( !_9__4_0 )
    {
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16, method);
        v16 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
      }
      v18 = (Il2CppObject *)v16->static_fields->__9;
      _9__4_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                 System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo,
                                                 method,
                                                 v2,
                                                 v3);
      System_Func_object__bool____ctor(
        _9__4_0,
        v18,
        Method_WarBoardAIRoute_PiecePersonality___c__AttackOffset_b__4_0__,
        0LL);
      static_fields = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
      static_fields->__9__4_0 = (struct System_Func_WarBoardRatingOffsetEntity__bool__o *)_9__4_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__4_0,
        (int64_t)_9__4_0,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
    }
    v26 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)ratingOffsetList,
            (System_Func_TSource__bool__o *)_9__4_0,
            (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    v27 = System_Linq_Enumerable__ToList_object_(
            v26,
            (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    p_attackOffset->klass = (PartyOrganizationUtility_c *)v27;
    sub_1BCA784(p_attackOffset, (int64_t)v27, v28, v29, v30, v31, v32, v33);
    return (System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *)p_attackOffset->klass;
  }
  return result;
}


System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__o *__fastcall WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend(
        WarBoardAIRoute_PiecePersonality_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B13DB5 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo, method, v2);
    byte_4B13DB5 = 1;
  }
  v5 = sub_1BCAA2C(WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = -2;
  *(_DWORD *)(v5 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v5 + 40) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__o *)v5;
}


System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *__fastcall WarBoardAIRoute_PiecePersonality__MoveOffset(
        WarBoardAIRoute_PiecePersonality_o *this,
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
  System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *result; // x0
  PartyOrganizationUtility_o *p_moveOffset; // x19
  struct System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *ratingOffsetList; // x20
  WarBoardAIRoute_PiecePersonality___c_c *v16; // x0
  System_Func_object__bool__o *_9__5_0; // x21
  Il2CppObject *v18; // x22
  struct WarBoardAIRoute_PiecePersonality___c_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Collections_Generic_List_TSource__o *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7

  if ( (byte_4B13DB4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___, v5, v6);
    sub_1BCA7E0(&System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_WarBoardAIRoute_PiecePersonality___c__MoveOffset_b__5_0__, v9, v10);
    sub_1BCA7E0(&WarBoardAIRoute_PiecePersonality___c_TypeInfo, v11, v12);
    byte_4B13DB4 = 1;
  }
  p_moveOffset = (PartyOrganizationUtility_o *)&this->fields.moveOffset;
  result = this->fields.moveOffset;
  if ( !result )
  {
    ratingOffsetList = this->fields.ratingOffsetList;
    v16 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
    if ( !WarBoardAIRoute_PiecePersonality___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardAIRoute_PiecePersonality___c_TypeInfo, method);
      v16 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
    }
    _9__5_0 = (System_Func_object__bool__o *)v16->static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16, method);
        v16 = WarBoardAIRoute_PiecePersonality___c_TypeInfo;
      }
      v18 = (Il2CppObject *)v16->static_fields->__9;
      _9__5_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                 System_Func_WarBoardRatingOffsetEntity__bool__TypeInfo,
                                                 method,
                                                 v2,
                                                 v3);
      System_Func_object__bool____ctor(
        _9__5_0,
        v18,
        Method_WarBoardAIRoute_PiecePersonality___c__MoveOffset_b__5_0__,
        0LL);
      static_fields = WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields;
      static_fields->__9__5_0 = (struct System_Func_WarBoardRatingOffsetEntity__bool__o *)_9__5_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__5_0,
        (int64_t)_9__5_0,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
    }
    v26 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)ratingOffsetList,
            (System_Func_TSource__bool__o *)_9__5_0,
            (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_WarBoardRatingOffsetEntity___);
    v27 = System_Linq_Enumerable__ToList_object_(
            v26,
            (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_WarBoardRatingOffsetEntity___);
    p_moveOffset->klass = (PartyOrganizationUtility_c *)v27;
    sub_1BCA784(p_moveOffset, (int64_t)v27, v28, v29, v30, v31, v32, v33);
    return (System_Collections_Generic_List_WarBoardRatingOffsetEntity__o *)p_moveOffset->klass;
  }
  return result;
}


void __fastcall WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6___ctor(
        WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6__MoveNext(
        WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t _1__state; // w8
  struct WarBoardAIRoute_PiecePersonality_o *_4__this; // x8
  System_Collections_Generic_List_object__o *actionTrandList; // x0
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v11; // x9
  __int128 v12; // q0
  PartyOrganizationUtility_o *p__7__wrap1; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v20; // x8
  struct WarBoardAIRoute_ActionTrendInfo_o *trendInfo_5__3; // x8
  System_Collections_Generic_List_object__o *FutureTrendInfoList_k__BackingField; // x0
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v23; // x9
  __int128 v24; // q0
  PartyOrganizationUtility_o *p__7__wrap3; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  const MethodInfo *v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  bool v39; // w8
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v40; // x0
  struct WarBoardAIRoute_ActionTrendInfo_o *current; // x1
  bool result; // w0
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v43; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  const MethodInfo *v50; // x1
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  bool v57; // w8
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v58; // x0
  struct WarBoardAIRoute_ActionTrendInfo_o *v59; // x1
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v60; // x0
  struct WarBoardAIRoute_ActionTrendInfo_o *v61; // x1
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v68; // x8
  System_Collections_Generic_List_Enumerator_T__o v69; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v70; // [xsp+20h] [xbp-50h]
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o **v71; // [xsp+48h] [xbp-28h]
  WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *v72; // [xsp+58h] [xbp-18h] BYREF

  v72 = this;
  v3 = this;
  if ( (byte_4B13DB8 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__get_Current__,
      v4,
      v5);
    this = (WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *)sub_1BCA7E0(
                                                                                 &Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__,
                                                                                 v6,
                                                                                 v7);
    byte_4B13DB8 = 1;
  }
  v71 = &v72;
  _1__state = v3->fields.__1__state;
  if ( _1__state == 2 )
    goto LABEL_12;
  if ( _1__state == 1 )
  {
    trendInfo_5__3 = v3->fields._trendInfo_5__3;
    v3->fields.__1__state = -3;
    if ( !trendInfo_5__3 )
      sub_1BCAA3C(this, method);
    FutureTrendInfoList_k__BackingField = (System_Collections_Generic_List_object__o *)trendInfo_5__3->fields._FutureTrendInfoList_k__BackingField;
    if ( !FutureTrendInfoList_k__BackingField )
      sub_1BCAA3C(0LL, method);
    System_Collections_Generic_List_object___GetEnumerator(
      &v69,
      FutureTrendInfoList_k__BackingField,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
    v23 = v72;
    v24 = *(_OWORD *)&v69.fields._list;
    p__7__wrap3 = (PartyOrganizationUtility_o *)&v72->fields.__7__wrap3;
    v70 = v69;
    v72->fields.__7__wrap3.fields._current = (struct WarBoardAIRoute_ActionTrendInfo_o *)v69.fields._current;
    *(_OWORD *)&v23->fields.__7__wrap3.fields._list = v24;
    sub_1BCA784(p__7__wrap3, 0LL, v26, v27, v28, v29, v30, v31);
    v3 = v72;
LABEL_12:
    v3->fields.__1__state = -4;
    v39 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v3->fields.__7__wrap3,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
    v40 = v72;
    if ( v39 )
    {
      current = v72->fields.__7__wrap3.fields._current;
      v72->fields.__2__current = current;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v40->fields.__2__current,
        (int64_t)current,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
      result = 1;
      v72->fields.__1__state = 2;
      return result;
    }
    WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally2(v72, v32);
    v43 = v72;
    *(_OWORD *)&v72->fields._trendInfo_5__3 = 0u;
    v43 = (WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *)((char *)v43 + 72);
    *(_OWORD *)&v43->fields.__1__state = 0u;
    sub_1BCA784((PartyOrganizationUtility_o *)v43, 0LL, v44, v45, v46, v47, v48, v49);
    v20 = v72;
    goto LABEL_15;
  }
  if ( _1__state )
    return 0;
  _4__this = v3->fields.__4__this;
  v3->fields.__1__state = -1;
  if ( !_4__this )
    sub_1BCAA3C(this, method);
  actionTrandList = (System_Collections_Generic_List_object__o *)_4__this->fields.actionTrandList;
  if ( !actionTrandList )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    &v69,
    actionTrandList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_WarBoardAIRoute_ActionTrendInfo__GetEnumerator__);
  v11 = v72;
  v12 = *(_OWORD *)&v69.fields._list;
  p__7__wrap1 = (PartyOrganizationUtility_o *)&v72->fields.__7__wrap1;
  v70 = v69;
  v72->fields.__7__wrap1.fields._current = (struct WarBoardAIRoute_ActionTrendInfo_o *)v69.fields._current;
  *(_OWORD *)&v11->fields.__7__wrap1.fields._list = v12;
  sub_1BCA784(p__7__wrap1, 0LL, v14, v15, v16, v17, v18, v19);
  v20 = v72;
  v72->fields.__1__state = -3;
LABEL_15:
  v57 = System_Collections_Generic_List_Enumerator_object___MoveNext(
          (System_Collections_Generic_List_Enumerator_object__o *)&v20->fields.__7__wrap1,
          (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__MoveNext__);
  v58 = v72;
  if ( v57 )
  {
    v59 = v72->fields.__7__wrap1.fields._current;
    v72->fields._trendInfo_5__3 = v59;
    sub_1BCA784((PartyOrganizationUtility_o *)&v58->fields._trendInfo_5__3, (int64_t)v59, v51, v52, v53, v54, v55, v56);
    v60 = v72;
    v61 = v72->fields._trendInfo_5__3;
    v72->fields.__2__current = v61;
    sub_1BCA784((PartyOrganizationUtility_o *)&v60->fields.__2__current, (int64_t)v61, v62, v63, v64, v65, v66, v67);
    result = 1;
    v72->fields.__1__state = 1;
  }
  else
  {
    WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally1(v72, v50);
    v68 = v72;
    result = 0;
    v72->fields.__7__wrap1.fields._list = 0LL;
    *(_QWORD *)&v68->fields.__7__wrap1.fields._index = 0LL;
    v68->fields.__7__wrap1.fields._current = 0LL;
  }
  return result;
}


System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__o *__fastcall WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6__System_Collections_Generic_IEnumerable_WarBoardAIRoute_ActionTrendInfo__GetEnumerator(
        WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  int32_t l__initialThreadId; // w20
  __int64 v6; // x20
  struct WarBoardAIRoute_PiecePersonality_o *_4__this; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B13DBB & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo, method, v2);
    byte_4B13DBB = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v6 = sub_1BCAA2C(WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_TypeInfo, method, v2, v3);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    *(_DWORD *)(v6 + 16) = 0;
    *(_DWORD *)(v6 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v6 + 40) = _4__this;
    sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)_4__this, v8, v9, v10, v11, v12, v13);
    return (System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__o *)v6;
  }
  return (System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__o *)this;
}


WarBoardAIRoute_ActionTrendInfo_o *__fastcall WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6__System_Collections_Generic_IEnumerator_WarBoardAIRoute_ActionTrendInfo__get_Current(
        WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6__System_Collections_IEnumerator_Reset(
        WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6__System_Collections_IEnumerator_get_Current(
        WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6__System_IDisposable_Dispose(
        WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *this,
        const MethodInfo *method)
{
  switch ( this->fields.__1__state )
  {
    case 0xFFFFFFFC:
    case 2:
      WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally2(this, method);
      goto LABEL_3;
    case 0xFFFFFFFD:
    case 1:
LABEL_3:
      WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally1(this, method);
      break;
    default:
      return;
  }
}


void __fastcall WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally1(
        WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B13DB9 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__,
      method,
      v2);
    byte_4B13DB9 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap1,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
}


void __fastcall WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6____m__Finally2(
        WarBoardAIRoute_PiecePersonality__EnumerateAllActionTrend_d__6_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B13DBA & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__,
      method,
      v2);
    byte_4B13DBA = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap3,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_ActionTrendInfo__Dispose__);
}


void __fastcall WarBoardAIRoute_PiecePersonality___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B13DB7 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardAIRoute_PiecePersonality___c_TypeInfo, v1, v2);
    byte_4B13DB7 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(WarBoardAIRoute_PiecePersonality___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields->__9 = (struct WarBoardAIRoute_PiecePersonality___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarBoardAIRoute_PiecePersonality___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall WarBoardAIRoute_PiecePersonality___c___ctor(
        WarBoardAIRoute_PiecePersonality___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIRoute_PiecePersonality___c___AttackOffset_b__4_0(
        WarBoardAIRoute_PiecePersonality___c_o *this,
        WarBoardRatingOffsetEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.type == 0;
}


bool __fastcall WarBoardAIRoute_PiecePersonality___c___MoveOffset_b__5_0(
        WarBoardAIRoute_PiecePersonality___c_o *this,
        WarBoardRatingOffsetEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.type == 1;
}


void __fastcall WarBoardAIRoute_PutSquareTarget___ctor(
        WarBoardAIRoute_PutSquareTarget_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v17; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v27; // x20
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7

  if ( (byte_4B13DC9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo, v5, v6);
    byte_4B13DC9 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo,
                                                                  method,
                                                                  v2,
                                                                  v3);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v7,
    (const MethodInfo_3243654 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicSquarePutSqareIndex = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  v17 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                   System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo,
                                                                   v14,
                                                                   v15,
                                                                   v16);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v17,
    (const MethodInfo_3243654 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicObjectPutSquareIndex = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v17;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.dicObjectPutSquareIndex,
    (int64_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v27 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                   System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__TypeInfo,
                                                                   v24,
                                                                   v25,
                                                                   v26);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v27,
    (const MethodInfo_3243654 *)Method_System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ctor__);
  this->fields.dicIndividualityPutSqareIndex = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v27;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.dicIndividualityPutSqareIndex,
    (int64_t)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIRoute_RouteData___ctor(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B13DC2 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo, method, v2);
    byte_4B13DC2 = 1;
  }
  this->fields.flagNow = 1LL;
  v5 = (Il2CppObject *)sub_1BCAA2C(WarBoardAIRoute_RouteData_EvalOffsetMagnification_TypeInfo, method, v2, v3);
  System_Object___ctor(v5, 0LL);
  this->fields.evalOffsetMagnification = (struct WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *)v5;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.evalOffsetMagnification,
    (int64_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIRoute_RouteData__CalcEvalValue(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  BalanceConfig_c *v6; // x0
  System_Decimal_c *v7; // x8
  int32_t WarBoardEvalFactorsAffectRatio; // w20
  const MethodInfo *v9; // x1
  System_Decimal_o *v10; // x20
  WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *evalOffsetMagnification; // x0
  System_Decimal_o *flagNow_low; // x8
  const MethodInfo *v13; // x1
  System_Decimal_o *v14; // x8
  System_Decimal_o *MoveValue; // x22
  WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *futureEvalOffsetMag; // x0
  System_Decimal_o *v17; // x23
  System_Decimal_o *Value; // x24
  System_Decimal_c *v19; // x0
  System_Decimal_o *v20; // x1
  System_Decimal_o *AttackValue; // x22
  int32_t attackEvalOffsetAddValue; // w24
  System_Decimal_o *v23; // x23
  System_Decimal_o *cctor_finished; // x8
  System_Decimal_o *v25; // x8
  System_Decimal_o *v26; // x0
  System_Decimal_o *v27; // x1
  System_Decimal_o *v28; // x0
  System_Decimal_o *v29; // x1
  System_Decimal_o *v30; // x8
  System_Decimal_o *v31; // x0
  System_Decimal_o *v32; // x8
  System_Decimal_o *v33; // x0
  const MethodInfo *v34; // x1

  if ( (byte_4B13DC4 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&System_Decimal_TypeInfo, v4, v5);
    byte_4B13DC4 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v6 = BalanceConfig_TypeInfo;
  }
  v7 = System_Decimal_TypeInfo;
  WarBoardEvalFactorsAffectRatio = v6->static_fields->WarBoardEvalFactorsAffectRatio;
  if ( !System_Decimal_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, method);
  v10 = System_Decimal__op_Implicit_63609040((System_Decimal_o *)v7, WarBoardEvalFactorsAffectRatio, 0LL);
  evalOffsetMagnification = this->fields.evalOffsetMagnification;
  if ( !evalOffsetMagnification )
    sub_1BCAA3C(0LL, v9);
  flagNow_low = (System_Decimal_o *)LOBYTE(this->fields.flagNow);
  if ( ((unsigned __int8)flagNow_low & 2) != 0 )
  {
    AttackValue = WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetAttackValue(
                    flagNow_low,
                    evalOffsetMagnification,
                    v9);
    attackEvalOffsetAddValue = this->fields.attackEvalOffsetAddValue;
    v23 = v20;
    cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
    if ( !(_DWORD)cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, v20);
  }
  else
  {
    MoveValue = WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetMoveValue(
                  flagNow_low,
                  evalOffsetMagnification,
                  v9);
    futureEvalOffsetMag = this->fields.futureEvalOffsetMag;
    v17 = (System_Decimal_o *)v13;
    if ( futureEvalOffsetMag )
    {
      Value = WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetValue(v14, futureEvalOffsetMag, v13);
      v19 = System_Decimal_TypeInfo;
    }
    else
    {
      v19 = System_Decimal_TypeInfo;
      if ( !System_Decimal_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, v13);
        v19 = System_Decimal_TypeInfo;
      }
      Value = *(System_Decimal_o **)v19->static_fields;
    }
    v25 = (System_Decimal_o *)v19->_2.cctor_finished;
    if ( !(_DWORD)v25 )
      j_il2cpp_runtime_class_init_0(v19, v13);
    v26 = System_Decimal__op_Addition(v25, MoveValue, v17, (const MethodInfo *)Value);
    attackEvalOffsetAddValue = this->fields.moveEvalOffsetAddValue;
    AttackValue = v26;
    v23 = v27;
  }
  v28 = System_Decimal__op_Implicit_63609040(cctor_finished, attackEvalOffsetAddValue, 0LL);
  v31 = System_Decimal__op_Division(v30, v28, v29, (const MethodInfo *)v10);
  v33 = System_Decimal__op_Addition(v32, AttackValue, v23, (const MethodInfo *)v31);
  this->fields.evalValue = System_Decimal__op_Explicit_63609544(v33, v34);
}


bool __fastcall WarBoardAIRoute_RouteData__HasActionPiece(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  return this->fields.actionPiece != 0LL;
}


bool __fastcall WarBoardAIRoute_RouteData__HasFlag(
        WarBoardAIRoute_RouteData_o *this,
        int64_t flag,
        const MethodInfo *method)
{
  return (flag & ~this->fields.flagNow) == 0;
}


bool __fastcall WarBoardAIRoute_RouteData__HasFlag_35995008(int64_t flagNow, int64_t flag, const MethodInfo *method)
{
  return (flag & ~flagNow) == 0;
}


bool __fastcall WarBoardAIRoute_RouteData__HasFutureTrend(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *futureLookingTrendHashSet; // x8

  if ( (byte_4B13DC1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__get_Count__, method, v2);
    byte_4B13DC1 = 1;
  }
  futureLookingTrendHashSet = this->fields.futureLookingTrendHashSet;
  return futureLookingTrendHashSet && futureLookingTrendHashSet->fields._count > 0;
}


WarBoardAIRoute_RouteData_o *__fastcall WarBoardAIRoute_RouteData__ShallowCopy(
        WarBoardAIRoute_RouteData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardAIRoute_RouteData_o *result; // x0
  __int64 methodPtr_low; // x9
  WarBoardAIRoute_RouteData_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4B13DC3 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardAIRoute_RouteData_TypeInfo, method, v2);
    byte_4B13DC3 = 1;
  }
  result = (WarBoardAIRoute_RouteData_o *)System_Object__MemberwiseClone((Il2CppObject *)this, 0LL);
  if ( result )
  {
    methodPtr_low = LOBYTE(WarBoardAIRoute_RouteData_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (WarBoardAIRoute_RouteData_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != WarBoardAIRoute_RouteData_TypeInfo )
    {
      sub_1BCACFC(result);
      WarBoardAIRoute_RouteData__CalcEvalValue(v6, v7);
    }
  }
  return result;
}


int32_t __fastcall WarBoardAIRoute_RouteData__get_ActionIndex(
        WarBoardAIRoute_RouteData_o *this,
        const MethodInfo *method)
{
  return this->fields.actionIndex;
}


int32_t __fastcall WarBoardAIRoute_RouteData__get_BaseIndex(
        WarBoardAIRoute_RouteData_o *this,
        const MethodInfo *method)
{
  return this->fields.baseIndex;
}


int64_t __fastcall WarBoardAIRoute_RouteData__get_FlagNow(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  return this->fields.flagNow;
}


System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *__fastcall WarBoardAIRoute_RouteData__get_FutureLookingTrendHashSet(
        WarBoardAIRoute_RouteData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  PartyOrganizationUtility_o *p_futureLookingTrendHashSet; // x19
  System_Collections_Generic_HashSet_T__o *v8; // x20
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *futureLookingTrendHashSet; // t1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B13DC0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__TypeInfo, v5, v6);
    byte_4B13DC0 = 1;
  }
  futureLookingTrendHashSet = this->fields.futureLookingTrendHashSet;
  p_futureLookingTrendHashSet = (PartyOrganizationUtility_o *)&this->fields.futureLookingTrendHashSet;
  v8 = (System_Collections_Generic_HashSet_T__o *)futureLookingTrendHashSet;
  if ( !futureLookingTrendHashSet )
  {
    v8 = (System_Collections_Generic_HashSet_T__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
    System_Collections_Generic_HashSet_object____ctor(
      v8,
      (const MethodInfo_345AFC8 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___ctor__);
    p_futureLookingTrendHashSet->klass = (PartyOrganizationUtility_c *)v8;
    sub_1BCA784(p_futureLookingTrendHashSet, (int64_t)v8, v10, v11, v12, v13, v14, v15);
  }
  return (System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *)v8;
}


bool __fastcall WarBoardAIRoute_RouteData__get_IsAttack(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flagNow) >> 1) & 1;
}


bool __fastcall WarBoardAIRoute_RouteData__get_notAction(WarBoardAIRoute_RouteData_o *this, const MethodInfo *method)
{
  return this->fields.baseIndex == this->fields.actionIndex;
}


void __fastcall WarBoardAIRoute_RouteData_EvalOffsetMagnification___ctor(
        WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Decimal_o *__fastcall WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetAttackValue(
        System_Decimal_o *retstr,
        WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x2
  float warAttack; // s8
  float benAttack; // s9
  System_Decimal_o *cctor_finished; // x8

  if ( (byte_4B13DC5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Decimal_TypeInfo, method, v3);
    byte_4B13DC5 = 1;
  }
  warAttack = this->fields.warAttack;
  benAttack = this->fields.benAttack;
  cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
  if ( !(_DWORD)cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, method);
  return System_Decimal__op_Explicit(cctor_finished, warAttack + benAttack, 0LL);
}


System_Decimal_o *__fastcall WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetMoveValue(
        System_Decimal_o *retstr,
        WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x2
  float warMove; // s8
  float benMove; // s9
  System_Decimal_o *cctor_finished; // x8

  if ( (byte_4B13DC6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Decimal_TypeInfo, method, v3);
    byte_4B13DC6 = 1;
  }
  warMove = this->fields.warMove;
  benMove = this->fields.benMove;
  cctor_finished = (System_Decimal_o *)System_Decimal_TypeInfo->_2.cctor_finished;
  if ( !(_DWORD)cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Decimal_TypeInfo, method);
  return System_Decimal__op_Explicit(cctor_finished, warMove + benMove, 0LL);
}


System_Decimal_o *__fastcall WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetValue(
        System_Decimal_o *retstr,
        WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *this,
        const MethodInfo *method)
{
  _BOOL8 isAttack; // x8

  isAttack = this->fields.isAttack;
  if ( this->fields.isAttack )
    return WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetAttackValue((System_Decimal_o *)isAttack, this, method);
  else
    return WarBoardAIRoute_RouteData_EvalOffsetMagnification__GetMoveValue((System_Decimal_o *)isAttack, this, method);
}


void __fastcall WarBoardAIRoute_TargetData___ctor(
        WarBoardAIRoute_TargetData_o *this,
        int64_t actionTrendKey,
        int32_t conditionId,
        const MethodInfo *method)
{
  this->fields.moveByDistanceType = 2;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.actionTrendKey = actionTrendKey;
  this->fields.conditionId = conditionId;
}


void __fastcall WarBoardAIRoute_TargetData___ctor_35996916(
        WarBoardAIRoute_TargetData_o *this,
        WarBoardSquareData_o *targetSquare,
        int64_t actionTrendKey,
        int32_t conditionId,
        const MethodInfo *method)
{
  WarBoardAIRoute_TargetData_o *v8; // x22
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  v8 = this;
  this->fields.moveByDistanceType = 2;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v8->fields.targetSquare = targetSquare;
  v8 = (WarBoardAIRoute_TargetData_o *)((char *)v8 + 48);
  v8->fields.targetObject = (struct IWarBoardObjectData_o *)actionTrendKey;
  v8->fields.moveByDistanceType = conditionId;
  sub_1BCA784((PartyOrganizationUtility_o *)v8, (int64_t)targetSquare, v9, v10, v11, v12, v13, v14);
}


void __fastcall WarBoardAIRoute_TargetData___ctor_35996996(
        WarBoardAIRoute_TargetData_o *this,
        IWarBoardObjectData_o *targetObject,
        int64_t actionTrendKey,
        int32_t conditionId,
        const MethodInfo *method)
{
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  const MethodInfo *v15; // x1

  this->fields.moveByDistanceType = 2;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.actionTrendKey = actionTrendKey;
  this->fields.conditionId = conditionId;
  this->fields.targetObject = targetObject;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.targetObject,
    (int64_t)targetObject,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  WarBoardAIRoute_TargetData__DetectObject(this, v15);
}


void __fastcall WarBoardAIRoute_TargetData___ctor_35997576(
        WarBoardAIRoute_TargetData_o *this,
        WarBoardAIRoute_TargetData_o *baseTargetData,
        WarBoardPieceData_o *piece,
        int32_t baseSquareIndex,
        WarBoardPieceData_array *blockEnemyPieces,
        const MethodInfo *method)
{
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct IWarBoardObjectData_o *targetObject; // x1
  struct WarBoardSquareData_o *targetSquare; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  const MethodInfo *v27; // x5

  this->fields.moveByDistanceType = 2;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !baseTargetData )
    sub_1BCAA3C(v11, v12);
  targetObject = baseTargetData->fields.targetObject;
  this->fields.targetObject = targetObject;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.targetObject,
    (int64_t)targetObject,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  targetSquare = baseTargetData->fields.targetSquare;
  this->fields.targetSquare = targetSquare;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.targetSquare,
    (int64_t)targetSquare,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  WarBoardAIRoute_TargetData__Init(this, baseTargetData, piece, baseSquareIndex, blockEnemyPieces, v27);
}


void __fastcall WarBoardAIRoute_TargetData___ctor_35998608(
        WarBoardAIRoute_TargetData_o *this,
        WarBoardAIRoute_TargetData_o *baseTargetData,
        IWarBoardObjectData_o *targetObject,
        WarBoardPieceData_o *piece,
        int32_t baseSquareIndex,
        WarBoardPieceData_array *blockEnemyPieces,
        const MethodInfo *method)
{
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  const MethodInfo *v19; // x5

  this->fields.moveByDistanceType = 2;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.targetObject = targetObject;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.targetObject,
    (int64_t)targetObject,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  WarBoardAIRoute_TargetData__Init(this, baseTargetData, piece, baseSquareIndex, blockEnemyPieces, v19);
}


void __fastcall WarBoardAIRoute_TargetData___ctor_35998720(
        WarBoardAIRoute_TargetData_o *this,
        const MethodInfo *method)
{
  this->fields.moveByDistanceType = 2;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


WarBoardAIRoute_TargetData_o *__fastcall WarBoardAIRoute_TargetData__Clone(
        WarBoardAIRoute_TargetData_o *b,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  WarBoardAIRoute_TargetData_o *result; // x0
  __int64 methodPtr_low; // x9

  v3 = (Il2CppObject *)b;
  if ( (byte_4B13DCA & 1) == 0 )
  {
    b = (WarBoardAIRoute_TargetData_o *)sub_1BCA7E0(&WarBoardAIRoute_TargetData_TypeInfo, method, v2);
    byte_4B13DCA = 1;
  }
  if ( !v3 )
LABEL_9:
    sub_1BCAA3C(b, method);
  result = (WarBoardAIRoute_TargetData_o *)System_Object__MemberwiseClone(v3, 0LL);
  if ( result )
  {
    methodPtr_low = LOBYTE(WarBoardAIRoute_TargetData_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (WarBoardAIRoute_TargetData_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != WarBoardAIRoute_TargetData_TypeInfo )
    {
      sub_1BCACFC(result);
      goto LABEL_9;
    }
  }
  return result;
}


void __fastcall WarBoardAIRoute_TargetData__DetectObject(WarBoardAIRoute_TargetData_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct IWarBoardObjectData_o *targetObject; // x8
  WarBoardPieceData_c *v14; // x9
  __int64 methodPtr_low; // x10
  struct IWarBoardObjectData_o *v16; // x11
  int64_t v17; // x1
  struct WarBoardPieceData_o **p_targetPiece; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct IWarBoardObjectData_o *v25; // x8
  WarBoardItemData_c *v26; // x9
  __int64 v27; // x10
  struct IWarBoardObjectData_o *v28; // x11
  int64_t v29; // x1
  struct WarBoardItemData_o **p_targetItem; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct IWarBoardObjectData_o *v37; // x8
  WarBoardTreasureData_c *v38; // x9
  __int64 v39; // x10
  struct IWarBoardObjectData_o *v40; // x11
  int64_t v41; // x1
  struct WarBoardTreasureData_o **p_targetTreasure; // x19

  if ( (byte_4B13DCC & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardItemData_TypeInfo, method, v2);
    sub_1BCA7E0(&WarBoardPieceData_TypeInfo, v9, v10);
    sub_1BCA7E0(&WarBoardTreasureData_TypeInfo, v11, v12);
    byte_4B13DCC = 1;
  }
  targetObject = this->fields.targetObject;
  if ( targetObject )
  {
    v14 = WarBoardPieceData_TypeInfo;
    methodPtr_low = LOBYTE(WarBoardPieceData_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(targetObject->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (WarBoardPieceData_c *)targetObject->klass->_2.typeHierarchy[methodPtr_low - 1] == WarBoardPieceData_TypeInfo )
        v16 = this->fields.targetObject;
      else
        v16 = 0LL;
    }
    else
    {
      v16 = 0LL;
    }
    this->fields.targetPiece = (struct WarBoardPieceData_o *)v16;
    p_targetPiece = &this->fields.targetPiece;
    if ( LOBYTE(targetObject->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (WarBoardPieceData_c *)targetObject->klass->_2.typeHierarchy[methodPtr_low - 1] == v14 )
        v17 = (int64_t)targetObject;
      else
        v17 = 0LL;
    }
    else
    {
      v17 = 0LL;
    }
  }
  else
  {
    v17 = 0LL;
    this->fields.targetPiece = 0LL;
    p_targetPiece = &this->fields.targetPiece;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)p_targetPiece, v17, v2, v3, v4, v5, v6, v7);
  v25 = this->fields.targetObject;
  if ( v25 )
  {
    v26 = WarBoardItemData_TypeInfo;
    v27 = LOBYTE(WarBoardItemData_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v25->klass->vtable[0].methodPtr) >= (unsigned int)v27 )
    {
      if ( (WarBoardItemData_c *)v25->klass->_2.typeHierarchy[v27 - 1] == WarBoardItemData_TypeInfo )
        v28 = this->fields.targetObject;
      else
        v28 = 0LL;
    }
    else
    {
      v28 = 0LL;
    }
    this->fields.targetItem = (struct WarBoardItemData_o *)v28;
    p_targetItem = &this->fields.targetItem;
    if ( LOBYTE(v25->klass->vtable[0].methodPtr) >= (unsigned int)v27 )
    {
      if ( (WarBoardItemData_c *)v25->klass->_2.typeHierarchy[v27 - 1] == v26 )
        v29 = (int64_t)v25;
      else
        v29 = 0LL;
    }
    else
    {
      v29 = 0LL;
    }
  }
  else
  {
    v29 = 0LL;
    this->fields.targetItem = 0LL;
    p_targetItem = &this->fields.targetItem;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)p_targetItem, v29, v19, v20, v21, v22, v23, v24);
  v37 = this->fields.targetObject;
  if ( v37 )
  {
    v38 = WarBoardTreasureData_TypeInfo;
    v39 = LOBYTE(WarBoardTreasureData_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v37->klass->vtable[0].methodPtr) >= (unsigned int)v39 )
    {
      if ( (WarBoardTreasureData_c *)v37->klass->_2.typeHierarchy[v39 - 1] == WarBoardTreasureData_TypeInfo )
        v40 = this->fields.targetObject;
      else
        v40 = 0LL;
    }
    else
    {
      v40 = 0LL;
    }
    this->fields.targetTreasure = (struct WarBoardTreasureData_o *)v40;
    p_targetTreasure = &this->fields.targetTreasure;
    if ( LOBYTE(v37->klass->vtable[0].methodPtr) >= (unsigned int)v39 )
    {
      if ( (WarBoardTreasureData_c *)v37->klass->_2.typeHierarchy[v39 - 1] == v38 )
        v41 = (int64_t)v37;
      else
        v41 = 0LL;
    }
    else
    {
      v41 = 0LL;
    }
  }
  else
  {
    v41 = 0LL;
    this->fields.targetTreasure = 0LL;
    p_targetTreasure = &this->fields.targetTreasure;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)p_targetTreasure, v41, v31, v32, v33, v34, v35, v36);
}


void __fastcall WarBoardAIRoute_TargetData__Init(
        WarBoardAIRoute_TargetData_o *this,
        WarBoardAIRoute_TargetData_o *baseTargetData,
        WarBoardPieceData_o *piece,
        int32_t baseSquareIndex,
        WarBoardPieceData_array *blockEnemyPieces,
        const MethodInfo *method)
{
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
  const MethodInfo *v25; // x5
  struct IWarBoardObjectData_o *targetObject; // x24
  WarBoardAIRoute_TargetData_o *v27; // x25
  IWarBoardObjectData_c *klass; // x8
  __int64 v29; // x9
  IWarBoardObjectData_c **p_offset; // x10
  __int64 p_method; // x0
  struct WarBoardSquareData_o *targetSquare; // x8
  __int64 squareIndex_k__BackingField; // x0
  int32_t nowSquareIndex; // w24
  struct System_Int32_array *v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  WarBoardAIRoute_TargetData___c_c *v45; // x0
  System_Int32_array *baseRoute; // x24
  WarBoardPieceData_o *v47; // x21
  System_Func_object__int__o *_9__7_0; // x25
  Il2CppObject *v49; // x26
  struct WarBoardAIRoute_TargetData___c_StaticFields *static_fields; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x0
  System_Int32_array *v58; // x0
  bool IsDetour; // w0
  __int64 v60; // x1
  const MethodInfo *v61; // x5
  int32_t v62; // w23
  struct System_Int32_array *v63; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int32_t v70; // w0
  struct IWarBoardObjectData_o *v71; // x21
  WarBoardAIRoute_TargetData_o *v72; // x22
  IWarBoardObjectData_c *v73; // x8
  __int64 v74; // x9
  int32_t *v75; // x10
  __int64 v76; // x0
  struct WarBoardSquareData_o *v77; // x8

  if ( (byte_4B13DCB & 1) == 0 )
  {
    sub_1BCA7E0(&AStarSearch_TypeInfo, baseTargetData, piece);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_int___, v10, v11);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___, v12, v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v14, v15);
    sub_1BCA7E0(&System_Func_WarBoardPieceData__int__TypeInfo, v16, v17);
    sub_1BCA7E0(&IWarBoardObjectData_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_WarBoardAIRoute_TargetData___c__Init_b__7_0__, v20, v21);
    sub_1BCA7E0(&WarBoardAIRoute_TargetData___c_TypeInfo, v22, v23);
    byte_4B13DCB = 1;
  }
  WarBoardAIRoute_TargetData__DetectObject(this, (const MethodInfo *)baseTargetData);
  targetObject = this->fields.targetObject;
  if ( targetObject )
    v27 = this;
  else
    v27 = 0LL;
  if ( targetObject )
  {
    klass = targetObject->klass;
    v29 = *(unsigned __int16 *)(&targetObject->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&targetObject->klass->_2.bitflags2 + 3) )
    {
      p_offset = (IWarBoardObjectData_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IWarBoardObjectData_TypeInfo )
      {
        --v29;
        p_offset += 2;
        if ( !v29 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C1C7C0(this->fields.targetObject, IWarBoardObjectData_TypeInfo, 1LL);
    }
    squareIndex_k__BackingField = (*(__int64 (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))p_method)(
                                    targetObject,
                                    *(_QWORD *)(p_method + 8));
    if ( !v27 )
LABEL_49:
      sub_1BCAA3C(squareIndex_k__BackingField, v24);
  }
  else
  {
    targetSquare = this->fields.targetSquare;
    if ( targetSquare )
      squareIndex_k__BackingField = (unsigned int)targetSquare->fields._squareIndex_k__BackingField;
    else
      squareIndex_k__BackingField = 0xFFFFFFFFLL;
    v27 = this;
    if ( !this )
      goto LABEL_49;
  }
  v27->fields.nowSquareIndex = squareIndex_k__BackingField;
  nowSquareIndex = this->fields.nowSquareIndex;
  if ( !AStarSearch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo, v24);
  v35 = AStarSearch__RouteSearch(0LL, baseSquareIndex, nowSquareIndex, 0, 0LL, v25);
  this->fields.baseRoute = v35;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseRoute, (int64_t)v35, v36, v37, v38, v39, v40, v41);
  v45 = WarBoardAIRoute_TargetData___c_TypeInfo;
  baseRoute = this->fields.baseRoute;
  if ( !WarBoardAIRoute_TargetData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIRoute_TargetData___c_TypeInfo, v42);
    v45 = WarBoardAIRoute_TargetData___c_TypeInfo;
  }
  v47 = piece;
  _9__7_0 = (System_Func_object__int__o *)v45->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45, v42);
      v45 = WarBoardAIRoute_TargetData___c_TypeInfo;
    }
    v49 = (Il2CppObject *)v45->static_fields->__9;
    _9__7_0 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_WarBoardPieceData__int__TypeInfo, v42, v43, v44);
    System_Func_object__int____ctor(_9__7_0, v49, Method_WarBoardAIRoute_TargetData___c__Init_b__7_0__, 0LL);
    static_fields = WarBoardAIRoute_TargetData___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Func_WarBoardPieceData__int__o *)_9__7_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__7_0, (int64_t)_9__7_0, v51, v52, v53, v54, v55, v56);
  }
  v57 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)blockEnemyPieces,
                                                               (System_Func_TSource__TResult__o *)_9__7_0,
                                                               (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___);
  v58 = System_Linq_Enumerable__ToArray_int_(
          v57,
          (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  IsDetour = WarBoardAIRoute__IsDetour(baseRoute, v58, 0LL);
  this->fields._ExistEnemyOnBaseRoute_k__BackingField = IsDetour;
  if ( IsDetour )
  {
    v62 = this->fields.nowSquareIndex;
    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo, v60);
    v63 = AStarSearch__RouteSearch(v47, baseSquareIndex, v62, 1, 0LL, v61);
    this->fields.detourRoute = v63;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.detourRoute, (int64_t)v63, v64, v65, v66, v67, v68, v69);
  }
  v70 = System_Linq_Enumerable__Count_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.baseRoute,
          (const MethodInfo_2F2DBBC *)Method_System_Linq_Enumerable_Count_int___);
  v71 = this->fields.targetObject;
  this->fields.isAround = v70 == 2;
  if ( v71 )
    v72 = this;
  else
    v72 = 0LL;
  if ( v71 )
  {
    v73 = v71->klass;
    v74 = *(unsigned __int16 *)(&v71->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v71->klass->_2.bitflags2 + 3) )
    {
      v75 = &v73->_1.interfaceOffsets->offset;
      while ( *((IWarBoardObjectData_c **)v75 - 1) != IWarBoardObjectData_TypeInfo )
      {
        --v74;
        v75 += 4;
        if ( !v74 )
          goto LABEL_39;
      }
      v76 = (__int64)&v73->vtable[*v75].method;
    }
    else
    {
LABEL_39:
      v76 = sub_1C1C7C0(v71, IWarBoardObjectData_TypeInfo, 0LL);
    }
    squareIndex_k__BackingField = (*(__int64 (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))v76)(
                                    v71,
                                    *(_QWORD *)(v76 + 8));
    if ( !v72 )
      goto LABEL_49;
  }
  else
  {
    v77 = this->fields.targetSquare;
    if ( v77 )
      squareIndex_k__BackingField = (unsigned int)v77->fields._squareIndex_k__BackingField;
    else
      squareIndex_k__BackingField = 0xFFFFFFFFLL;
    v72 = this;
    if ( !this )
      goto LABEL_49;
  }
  v72->fields.putSquareIndex = squareIndex_k__BackingField;
  if ( !baseTargetData )
    goto LABEL_49;
  this->fields.actionTrendKey = baseTargetData->fields.actionTrendKey;
  this->fields.conditionId = baseTargetData->fields.conditionId;
}


bool __fastcall WarBoardAIRoute_TargetData__get_ExistEnemyOnBaseRoute(
        WarBoardAIRoute_TargetData_o *this,
        const MethodInfo *method)
{
  return this->fields._ExistEnemyOnBaseRoute_k__BackingField;
}


bool __fastcall WarBoardAIRoute_TargetData__get_IsItem(WarBoardAIRoute_TargetData_o *this, const MethodInfo *method)
{
  return this->fields.targetItem != 0LL;
}


void __fastcall WarBoardAIRoute_TargetData__set_ExistEnemyOnBaseRoute(
        WarBoardAIRoute_TargetData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._ExistEnemyOnBaseRoute_k__BackingField = value;
}


void __fastcall WarBoardAIRoute_TargetData___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B13DCD & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardAIRoute_TargetData___c_TypeInfo, v1, v2);
    byte_4B13DCD = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(WarBoardAIRoute_TargetData___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  WarBoardAIRoute_TargetData___c_TypeInfo->static_fields->__9 = (struct WarBoardAIRoute_TargetData___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarBoardAIRoute_TargetData___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall WarBoardAIRoute_TargetData___c___ctor(WarBoardAIRoute_TargetData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall WarBoardAIRoute_TargetData___c___Init_b__7_0(
        WarBoardAIRoute_TargetData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields._nowSquareIndex_k__BackingField;
}


void __fastcall WarBoardAIRoute__CreateRouteData_d__47___ctor(
        WarBoardAIRoute__CreateRouteData_d__47_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall WarBoardAIRoute__CreateRouteData_d__47__MoveNext(
        WarBoardAIRoute__CreateRouteData_d__47_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  __int64 v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  WarBoardAIRoute__CreateRouteData_d__47_o *v8; // x20
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
  __int64 v99; // x1
  __int64 v100; // x2
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x1
  __int64 v108; // x2
  __int64 v109; // x1
  __int64 v110; // x2
  __int64 v111; // x1
  __int64 v112; // x2
  __int64 v113; // x1
  __int64 v114; // x2
  __int64 v115; // x1
  __int64 v116; // x2
  __int64 v117; // x1
  __int64 v118; // x2
  __int64 v119; // x1
  __int64 v120; // x2
  __int64 v121; // x1
  __int64 v122; // x2
  __int64 v123; // x1
  __int64 v124; // x2
  __int64 v125; // x1
  __int64 v126; // x2
  __int64 v127; // x1
  __int64 v128; // x2
  __int64 v129; // x1
  __int64 v130; // x2
  __int64 v131; // x1
  __int64 v132; // x2
  __int64 v133; // x1
  __int64 v134; // x2
  __int64 v135; // x1
  __int64 v136; // x2
  __int64 v137; // x1
  __int64 v138; // x2
  __int64 v139; // x1
  __int64 v140; // x2
  __int64 v141; // x1
  __int64 v142; // x2
  __int64 v143; // x1
  __int64 v144; // x2
  __int64 v145; // x1
  __int64 v146; // x2
  __int64 v147; // x1
  __int64 v148; // x2
  __int64 v149; // x1
  __int64 v150; // x2
  __int64 v151; // x1
  __int64 v152; // x2
  __int64 v153; // x1
  __int64 v154; // x2
  __int64 v155; // x1
  __int64 v156; // x2
  __int64 v157; // x1
  __int64 v158; // x2
  __int64 v159; // x1
  __int64 v160; // x2
  __int64 v161; // x1
  __int64 v162; // x2
  __int64 v163; // x1
  __int64 v164; // x2
  __int64 v165; // x1
  __int64 v166; // x2
  __int64 v167; // x1
  __int64 v168; // x2
  __int64 v169; // x1
  __int64 v170; // x2
  __int64 v171; // x1
  __int64 v172; // x2
  __int64 v173; // x1
  __int64 v174; // x2
  __int64 v175; // x1
  __int64 v176; // x2
  __int64 v177; // x1
  __int64 v178; // x2
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *Instance; // x0
  __int64 v182; // x1
  int64_t v183; // x2
  int32_t v184; // w3
  System_String_o *v185; // x4
  BattleSetupInfo_o *v186; // x5
  FollowerInfo_o *v187; // x6
  PartyListViewItem_o *v188; // x7
  struct WarBoardData_o *monitor; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v190; // x0
  __int64 v191; // x0
  __int64 v192; // x1
  struct WarBoardStageNpcEntity_o *npcData; // x9
  int32_t searchDepth; // w8
  WarBoardAIRoute__CreateRouteData_d__47_o *v195; // x9
  int32_t v196; // w10
  int32_t RequiredCost; // w20
  Il2CppObject *v198; // x0
  __int64 v199; // x1
  int32_t MasterSquareIndex; // w2
  System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData; // x1
  struct System_Int32_array *AllyPutSquareIndicesWithoutMaster; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v203; // x0
  int64_t v204; // x2
  int32_t v205; // w3
  System_String_o *v206; // x4
  BattleSetupInfo_o *v207; // x5
  FollowerInfo_o *v208; // x6
  PartyListViewItem_o *v209; // x7
  PartyOrganizationUtility_o *v210; // x0
  int64_t v211; // x2
  int32_t v212; // w3
  System_String_o *v213; // x4
  BattleSetupInfo_o *v214; // x5
  FollowerInfo_o *v215; // x6
  PartyListViewItem_o *v216; // x7
  __int64 v217; // x0
  __int64 v218; // x1
  struct WarBoardData_o *warBoardData_5__2; // x8
  System_Collections_Generic_List_int__o *masterExistsForce; // x0
  _BOOL8 v221; // x0
  __int64 v222; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v223; // x8
  int32_t servantAndEnemyRange_5__14; // w8
  int32_t servantAndEnemyMasterRange_5__15; // w9
  struct WarBoardAIRoute_AIRouteMasterData_o *v226; // x9
  int32_t v227; // w9
  struct DefenseAreaData_o *DefenseAreaData; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v229; // x0
  int64_t v230; // x2
  int32_t v231; // w3
  System_String_o *v232; // x4
  BattleSetupInfo_o *v233; // x5
  FollowerInfo_o *v234; // x6
  PartyListViewItem_o *v235; // x7
  __int64 v236; // x0
  __int64 v237; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v238; // x8
  struct DefenseAreaData_o *defenseAreaData_5__7; // x9
  struct WarBoardAIRoute_AIRouteMasterData_o *aiRouteMasterData; // x10
  bool IsAllBlockShortestRouteEnemyAndMastr; // w0
  System_Collections_Generic_Dictionary_int__uint__o *v242; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v243; // x8
  __int128 v244; // q0
  PartyOrganizationUtility_o *p__7__wrap8; // x0
  int64_t v246; // x2
  int32_t v247; // w3
  System_String_o *v248; // x4
  BattleSetupInfo_o *v249; // x5
  FollowerInfo_o *v250; // x6
  PartyListViewItem_o *v251; // x7
  const MethodInfo *v252; // x1
  __int64 v253; // x2
  __int64 v254; // x3
  Il2CppObject *key; // x20
  Il2CppObject *v256; // x21
  WarBoardAIRoute__CreateRouteData_d__47_o *v257; // x0
  int64_t v258; // x2
  int32_t v259; // w3
  System_String_o *v260; // x4
  BattleSetupInfo_o *v261; // x5
  FollowerInfo_o *v262; // x6
  PartyListViewItem_o *v263; // x7
  __int64 v264; // x1
  WarBoardSquareData_o *Square; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v266; // x0
  int64_t v267; // x2
  int32_t v268; // w3
  System_String_o *v269; // x4
  BattleSetupInfo_o *v270; // x5
  FollowerInfo_o *v271; // x6
  PartyListViewItem_o *v272; // x7
  struct WarBoardAIRoute___c__DisplayClass47_0_o *_8__1; // x21
  WarBoardPieceData_o *PieceUnique; // x0
  int64_t v275; // x2
  int32_t v276; // w3
  System_String_o *v277; // x4
  BattleSetupInfo_o *v278; // x5
  FollowerInfo_o *v279; // x6
  PartyListViewItem_o *v280; // x7
  __int64 v281; // x0
  __int64 v282; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v283; // x8
  int64_t baseFlag_5__6; // x21
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v285; // x9
  int64_t v286; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v287; // x8
  System_Collections_Generic_IEnumerable_TSource__o *routeDataList; // x21
  Il2CppObject *v289; // x23
  __int64 v290; // x1
  __int64 v291; // x2
  __int64 v292; // x3
  System_Func_object__bool__o *v293; // x22
  __int64 v294; // x1
  int32_t v295; // w8
  System_Collections_Generic_List_object__o *v296; // x0
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *Only; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v298; // x8
  __int64 RouteSumPieceActionCost; // x0
  __int64 v300; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v301; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v302; // x9
  _BOOL8 IsActable; // x0
  __int64 v304; // x1
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v305; // x9
  System_Collections_Generic_Dictionary_int__int__o *DesignationItemToDistance; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v307; // x0
  int64_t v308; // x2
  int32_t v309; // w3
  System_String_o *v310; // x4
  BattleSetupInfo_o *v311; // x5
  FollowerInfo_o *v312; // x6
  PartyListViewItem_o *v313; // x7
  __int64 v314; // x0
  __int64 v315; // x1
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v316; // x9
  struct System_Collections_Generic_Dictionary_int__int__o *TargetToDistance_35898252; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v318; // x0
  int64_t v319; // x2
  int32_t v320; // w3
  System_String_o *v321; // x4
  BattleSetupInfo_o *v322; // x5
  FollowerInfo_o *v323; // x6
  PartyListViewItem_o *v324; // x7
  System_Collections_Generic_Dictionary_uint__int__o *AllEnemyToDistance; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v326; // x0
  int64_t v327; // x2
  int32_t v328; // w3
  System_String_o *v329; // x4
  BattleSetupInfo_o *v330; // x5
  FollowerInfo_o *v331; // x6
  PartyListViewItem_o *v332; // x7
  WarBoardAIRoute__CreateRouteData_d__47_o *v333; // x0
  int64_t v334; // x2
  int32_t v335; // w3
  System_String_o *v336; // x4
  BattleSetupInfo_o *v337; // x5
  FollowerInfo_o *v338; // x6
  PartyListViewItem_o *v339; // x7
  __int64 v340; // x0
  __int64 v341; // x1
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v342; // x8
  WarBoardPieceData_o *basePiece; // x0
  _BOOL8 isServant; // x0
  __int64 v345; // x1
  __int64 v346; // x2
  __int64 v347; // x3
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v348; // x9
  WarBoardAIRoute_AdvantagePieceData_o *AdvantagePieceData; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v350; // x0
  int64_t v351; // x2
  int32_t v352; // w3
  System_String_o *v353; // x4
  BattleSetupInfo_o *v354; // x5
  FollowerInfo_o *v355; // x6
  PartyListViewItem_o *v356; // x7
  const MethodInfo *v357; // x5
  int32_t masterSquareIndex_5__4; // w21
  System_Collections_Generic_IEnumerable_TSource__o *v359; // x0
  __int64 v360; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v361; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v362; // x9
  struct WarBoardPieceData_o *v363; // x11
  struct WarBoardAIRoute_AIRouteMasterData_o *v364; // x9
  int32_t masterType; // w10
  int32_t index_k__BackingField; // w11
  struct WarBoardStageNpcEntity_o *v367; // x12
  System_Collections_Generic_HashSet_T__o *v368; // x20
  WarBoardAIRoute__CreateRouteData_d__47_o *v369; // x0
  int64_t v370; // x2
  int32_t v371; // w3
  System_String_o *v372; // x4
  BattleSetupInfo_o *v373; // x5
  FollowerInfo_o *v374; // x6
  PartyListViewItem_o *v375; // x7
  __int64 v376; // x1
  __int64 v377; // x2
  __int64 v378; // x3
  System_Collections_Generic_HashSet_T__o *v379; // x20
  WarBoardAIRoute__CreateRouteData_d__47_o *v380; // x0
  int64_t v381; // x2
  int32_t v382; // w3
  System_String_o *v383; // x4
  BattleSetupInfo_o *v384; // x5
  FollowerInfo_o *v385; // x6
  PartyListViewItem_o *v386; // x7
  __int64 v387; // x1
  System_Collections_Generic_List_object__o *v388; // x0
  _BOOL8 v389; // x0
  __int64 v390; // x1
  Il2CppObject *current; // x20
  Il2CppClass *klass; // x9
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v393; // x10
  struct WarBoardPieceData_o *v394; // x10
  System_Collections_Generic_HashSet_T__o *basePieceActionPieceRouteList_5__22; // x0
  _DWORD *v396; // x9
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v397; // x10
  struct WarBoardPieceData_o *v398; // x10
  struct WarBoardAIRoute_AdvantagePieceData_o *advantagePieceData_5__21; // x0
  __int64 v400; // x0
  __int64 v401; // x1
  __int64 v402; // x2
  __int64 v403; // x3
  WarBoardAIRoute__CreateRouteData_d__47_o *v404; // x8
  int32_t v405; // w9
  System_Collections_Generic_IEnumerable_TSource__o *v406; // x20
  WarBoardAIRoute___c_c *v407; // x8
  System_Func_T__TResult__o *_9__47_6; // x21
  Il2CppObject *v409; // x22
  struct WarBoardAIRoute___c_StaticFields *v410; // x0
  int64_t v411; // x2
  int32_t v412; // w3
  System_String_o *v413; // x4
  BattleSetupInfo_o *v414; // x5
  FollowerInfo_o *v415; // x6
  PartyListViewItem_o *v416; // x7
  __int64 v417; // x1
  System_Linq_IOrderedEnumerable_TSource__o *v418; // x20
  System_Collections_Generic_Dictionary_TKey__TValue__o *v419; // x0
  __int64 Count; // x0
  __int64 v421; // x1
  struct WarBoardStageNpcEntity_o *v422; // x8
  WarBoardAIRoute__CreateRouteData_d__47_o *v423; // x11
  float v424; // s0
  int32_t v425; // w9
  int32_t calcEllipsisMin; // w8
  System_Linq_IOrderedEnumerable_TSource__c *v427; // x8
  __int64 v428; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int64_t v431; // x1
  PartyOrganizationUtility_o *v432; // x0
  int64_t v433; // x2
  int32_t v434; // w3
  System_String_o *v435; // x4
  BattleSetupInfo_o *v436; // x5
  FollowerInfo_o *v437; // x6
  PartyListViewItem_o *v438; // x7
  __int64 *v439; // x19
  __int64 v440; // x8
  __int64 v441; // x9
  int *v442; // x10
  __int64 v443; // x0
  __int64 v444; // x0
  __int64 *v445; // x19
  __int64 v446; // x8
  __int64 v447; // x9
  int *v448; // x10
  __int64 v449; // x0
  PartyOrganizationUtility_o *p__7__wrap24; // x0
  int64_t v451; // x2
  int32_t v452; // w3
  System_String_o *v453; // x4
  BattleSetupInfo_o *v454; // x5
  FollowerInfo_o *v455; // x6
  PartyListViewItem_o *v456; // x7
  Il2CppObject *v457; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v458; // x0
  int64_t v459; // x2
  int32_t v460; // w3
  System_String_o *v461; // x4
  BattleSetupInfo_o *v462; // x5
  FollowerInfo_o *v463; // x6
  PartyListViewItem_o *v464; // x7
  __int64 v465; // x1
  WarBoardSquareData_o *v466; // x0
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *MyAndLinkedSquareIndecies; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v468; // x0
  int64_t v469; // x2
  int32_t v470; // w3
  System_String_o *v471; // x4
  BattleSetupInfo_o *v472; // x5
  FollowerInfo_o *v473; // x6
  PartyListViewItem_o *v474; // x7
  WarBoardAIRoute__CreateRouteData_d__47_o *v475; // x8
  int v476; // w9
  __int64 v477; // x21
  __int64 v478; // x0
  __int64 v479; // x1
  __int64 v480; // x2
  __int64 v481; // x3
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v482; // x8
  __int64 _7__wrap23_low; // x9
  int32_t *v484; // x27
  WarBoardAIRoute_RouteData_o *v485; // x20
  const MethodInfo *v486; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v487; // x9
  int32_t getEnumeratorRetType; // w8
  int32_t v489; // w10
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v490; // x8
  System_Collections_Generic_IEnumerable_TSource__o *dicBaseDIRange_5__18; // x20
  WarBoardAIRoute___c_c *v492; // x8
  System_Func_T__TResult__o *_9__47_1; // x22
  Il2CppObject *v494; // x23
  struct WarBoardAIRoute___c_StaticFields *static_fields; // x0
  int64_t v496; // x2
  int32_t v497; // w3
  System_String_o *v498; // x4
  BattleSetupInfo_o *v499; // x5
  FollowerInfo_o *v500; // x6
  PartyListViewItem_o *v501; // x7
  System_Func_T__TResult__o *_9__47_2; // x23
  Il2CppObject *v503; // x24
  struct WarBoardAIRoute___c_StaticFields *v504; // x0
  int64_t v505; // x2
  int32_t v506; // w3
  System_String_o *v507; // x4
  BattleSetupInfo_o *v508; // x5
  FollowerInfo_o *v509; // x6
  PartyListViewItem_o *v510; // x7
  __int64 v511; // x1
  int64_t v512; // x2
  int32_t v513; // w3
  System_String_o *v514; // x4
  BattleSetupInfo_o *v515; // x5
  FollowerInfo_o *v516; // x6
  PartyListViewItem_o *v517; // x7
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v518; // x20
  WarBoardAIRoute_RouteData_o *v519; // x0
  struct WarBoardSquareData_o *v520; // x1
  __int64 v521; // x0
  __int64 v522; // x1
  int64_t v523; // x2
  int32_t v524; // w3
  System_String_o *v525; // x4
  BattleSetupInfo_o *v526; // x5
  FollowerInfo_o *v527; // x6
  PartyListViewItem_o *v528; // x7
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v529; // x8
  WarBoardAIRoute_RouteData_o *v530; // x0
  struct WarBoardPieceData_o *v531; // x1
  __int64 v532; // x1
  int64_t v533; // x2
  int32_t v534; // w3
  System_String_o *v535; // x4
  BattleSetupInfo_o *v536; // x5
  FollowerInfo_o *v537; // x6
  PartyListViewItem_o *v538; // x7
  WarBoardAIRoute_RouteData_o *v539; // x0
  __int64 v540; // x1
  WarBoardAIRoute_RouteData_o *v541; // x22
  int32_t v542; // w23
  WarBoardSquareData_o *v543; // x0
  int64_t v544; // x2
  int32_t v545; // w3
  System_String_o *v546; // x4
  BattleSetupInfo_o *v547; // x5
  FollowerInfo_o *v548; // x6
  PartyListViewItem_o *v549; // x7
  __int64 v550; // x1
  System_Collections_Generic_Dictionary_uint__int__o *dicKeyPutIndexValueTargetData_5__19; // x0
  WarBoardAIRoute_RouteData_o *v552; // x19
  __int64 v553; // x1
  System_Collections_Generic_Dictionary_uint__int__o *v554; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v556; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v557; // x8
  WarBoardAIRoute_RouteData_o *v558; // x22
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *MoveByTargetDistance; // x0
  int64_t v560; // x2
  int32_t v561; // w3
  System_String_o *v562; // x4
  BattleSetupInfo_o *v563; // x5
  FollowerInfo_o *v564; // x6
  PartyListViewItem_o *v565; // x7
  __int64 v566; // x0
  __int64 v567; // x1
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v568; // x9
  WarBoardAIRoute_RouteData_o *v569; // x20
  WarBoardPieceData_o *ActionPiece; // x0
  int64_t v571; // x2
  int32_t v572; // w3
  System_String_o *v573; // x4
  BattleSetupInfo_o *v574; // x5
  FollowerInfo_o *v575; // x6
  PartyListViewItem_o *v576; // x7
  PartyOrganizationUtility_o *p_actionPiece; // x0
  __int64 v578; // x1
  int64_t v579; // x2
  const MethodInfo *v580; // x3
  System_String_o *v581; // x4
  BattleSetupInfo_o *v582; // x5
  FollowerInfo_o *v583; // x6
  PartyListViewItem_o *v584; // x7
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v585; // x8
  struct WarBoardPieceData_o *v586; // x9
  struct WarBoardPieceData_o *v587; // x10
  struct WarBoardPieceData_o *v588; // x8
  int32_t limitActionCount_k__BackingField; // w19
  int32_t currentActionCount_k__BackingField; // w20
  System_Math_c *v591; // x0
  WarBoardAIRoute_RouteData_o *v592; // x8
  WarBoardAIRoute__CreateRouteData_d__47_o *v593; // x9
  int v594; // w11
  struct WarBoardSquareData_o *baseSquare_5__11; // x10
  WarBoardData_o *v596; // x0
  WarBoardAIRoute__CreateRouteData_d__47_o *v597; // x20
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v598; // x9
  WarBoardPieceData_o *v599; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v600; // x8
  WarBoardPieceData_o *v601; // x0
  WarBoardPieceData_o *v602; // x20
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v603; // x8
  WarBoardPieceData_o *v604; // x22
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v605; // x8
  WarBoardPieceData_o *v606; // x0
  WarBoardPieceData_o *v607; // x0
  WarBoardAIRoute_RouteData_o *v608; // x8
  struct WarBoardPieceData_o *v609; // x9
  WarBoardPieceData_o *v610; // x0
  WarBoardAIRoute_RouteData_o *v611; // x19
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v612; // x8
  struct WarBoardPieceData_o *v613; // x8
  BattleServantData_o *battleServant_k__BackingField; // x0
  int64_t flagNow; // x22
  __int64 ClassId; // x0
  __int64 v617; // x1
  struct WarBoardPieceData_o *v618; // x8
  int32_t v619; // w20
  BattleServantData_o *v620; // x0
  int32_t v621; // w2
  int64_t FlagAdvantage; // x0
  __int64 v623; // x1
  struct WarBoardPieceData_o *v624; // x20
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v625; // x8
  WarBoardPieceData_o *v626; // x22
  WarBoardAIRoute_RouteData_o *v627; // x2
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v628; // x9
  WarBoardPieceData_o *v629; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v630; // x9
  System_Collections_Generic_List_object__o *v631; // x0
  int32_t requiredCost_5__3; // w23
  WarBoardPieceData_o *v633; // x20
  WarBoardPieceData_o *v634; // x22
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v635; // x4
  System_Collections_Generic_Dictionary_int__uint__o *updated; // x25
  int32_t MasterSquareIndexFromPlaceData; // w22
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v638; // x23
  __int64 v639; // x1
  __int64 v640; // x2
  __int64 v641; // x3
  System_Func_object__bool__o *v642; // x24
  DefenseAreaData_o *v643; // x0
  __int64 v644; // x1
  __int64 v645; // x2
  __int64 v646; // x3
  struct WarBoardAIRoute_AdvantagePieceData_o *v647; // x23
  System_Func_object__bool__o *v648; // x24
  struct DefenseAreaData_o *v649; // x23
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v650; // x9
  WarBoardPieceData_o *v651; // x0
  System_Int32_array *v652; // x2
  struct WarBoardAIRoute_AIRouteMasterData_o *v653; // x8
  _BOOL8 v654; // x0
  WarBoardAIRoute_RouteData_o *v655; // x21
  int64_t v656; // x8
  System_Collections_Generic_List_object__o *v657; // x23
  __int64 v658; // x0
  __int64 v659; // x1
  int64_t v660; // x2
  int32_t v661; // w3
  System_String_o *v662; // x4
  BattleSetupInfo_o *v663; // x5
  FollowerInfo_o *v664; // x6
  PartyListViewItem_o *v665; // x7
  __int64 v666; // x0
  __int64 v667; // x1
  __int64 v668; // x2
  __int64 v669; // x3
  WarBoardAIRoute_RouteData_o *v670; // x21
  System_Collections_Generic_Dictionary_uint__int__o *v671; // x23
  int64_t v672; // x2
  int32_t v673; // w3
  System_String_o *v674; // x4
  BattleSetupInfo_o *v675; // x5
  FollowerInfo_o *v676; // x6
  PartyListViewItem_o *v677; // x7
  __int64 v678; // x1
  System_Collections_Generic_Dictionary_int__uint__o *v679; // x0
  _BOOL8 v680; // x0
  __int64 v681; // x1
  const MethodInfo *v682; // x5
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v683; // x8
  struct WarBoardPieceData_o *v684; // x8
  uint32_t key_high; // w21
  int32_t v686; // w24
  System_Collections_Generic_Dictionary_uint__int__o *dicUniqueKeyRange; // x23
  int32_t v688; // w25
  System_Collections_Generic_IEnumerable_TSource__o *v689; // x0
  __int64 v690; // x0
  __int64 v691; // x1
  __int64 v692; // x1
  __int64 v693; // x2
  __int64 v694; // x3
  PartyOrganizationUtility_o *v695; // x21
  System_Collections_Generic_List_int__o *v696; // x23
  __int64 v697; // x0
  __int64 v698; // x1
  int64_t v699; // x2
  int32_t v700; // w3
  System_String_o *v701; // x4
  BattleSetupInfo_o *v702; // x5
  FollowerInfo_o *v703; // x6
  PartyListViewItem_o *v704; // x7
  WarBoardAIRoute_RouteData_o *v705; // x21
  __int64 v706; // x1
  __int64 v707; // x2
  __int64 v708; // x3
  System_Collections_Generic_Dictionary_int__bool__o *v709; // x23
  __int64 v710; // x0
  __int64 v711; // x1
  int64_t v712; // x2
  int32_t v713; // w3
  System_String_o *v714; // x4
  BattleSetupInfo_o *v715; // x5
  FollowerInfo_o *v716; // x6
  PartyListViewItem_o *v717; // x7
  WarBoardAIRoute_RouteData_o *v718; // x21
  __int64 v719; // x1
  __int64 v720; // x2
  __int64 v721; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v722; // x23
  __int64 v723; // x0
  __int64 v724; // x1
  int64_t v725; // x2
  int32_t v726; // w3
  System_String_o *v727; // x4
  BattleSetupInfo_o *v728; // x5
  FollowerInfo_o *v729; // x6
  PartyListViewItem_o *v730; // x7
  __int64 v731; // x0
  __int64 v732; // x1
  WarBoardAIRoute_RouteData_o *v733; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v734; // x8
  WarBoardPieceData_o *v735; // x0
  _BOOL8 IsBlockShortestRouteEnemyAndMaster; // x0
  __int64 v737; // x1
  const MethodInfo *v738; // x2
  const MethodInfo *v739; // x5
  WarBoardAIRoute__CreateRouteData_d__47_o *v740; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v741; // x9
  struct WarBoardPieceData_o *v742; // x9
  struct WarBoardAIRoute_AIRouteMasterData_o *v743; // x10
  DefenseAreaData_o *v744; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v745; // x9
  struct WarBoardPieceData_o *v746; // x9
  struct WarBoardAIRoute_AIRouteMasterData_o *v747; // x11
  int32_t v748; // w10
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v749; // x9
  struct WarBoardPieceData_o *v750; // x9
  struct WarBoardAIRoute_AIRouteMasterData_o *v751; // x10
  int32_t v752; // w21
  System_Collections_Generic_IEnumerable_TSource__o *v753; // x0
  int32_t v754; // w0
  WarBoardAIRoute_RouteData_o *v755; // x19
  __int64 v756; // x0
  System_Collections_Generic_Dictionary_int__int__o *v757; // x0
  __int64 v758; // x1
  const MethodInfo *v759; // x5
  int32_t v760; // w21
  int32_t v761; // w22
  int32_t v762; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v763; // x0
  __int64 v764; // x0
  __int64 v765; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicItemIdKeyIsMoveByServantDesignationItemRange; // x23
  __int64 v767; // x0
  __int64 v768; // x1
  __int64 v769; // x0
  __int64 v770; // x1
  System_Collections_Generic_Dictionary_int__bool__o *dicMoveByServantGetDesignationItem; // x0
  __int64 v772; // x0
  __int64 v773; // x1
  struct System_Collections_Generic_List_int__o *listExistDesignationItem; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v776; // x9
  __int64 size; // x10
  __int64 v778; // x1
  const MethodInfo *v779; // x5
  int32_t v780; // w21
  int32_t enemyMasterSquareIndex; // w22
  System_Collections_Generic_IEnumerable_TSource__o *v782; // x0
  int32_t v783; // w0
  WarBoardAIRoute_RouteData_o *v784; // x19
  __int64 v785; // x0
  __int64 v786; // x1
  __int64 v787; // x2
  WarBoardAIRoute_RouteData_o *v788; // x19
  WarBoardAIManager_c *v789; // x0
  __int64 v790; // x0
  __int64 v791; // x1
  struct WarBoardAIRoute_AIRouteMasterData_o *v792; // x8
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v793; // x8
  WarBoardPieceData_o *v794; // x0
  struct WarBoardAIRoute___c__DisplayClass47_0_o *v795; // x9
  struct WarBoardPieceData_o *v796; // x9
  WarBoardAIManager_c *v797; // x0
  System_Collections_Generic_Dictionary_int__object__o *dicSquareIndexEnemyPiece; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  __int64 v800; // x1
  __int64 v801; // x1
  const MethodInfo *v802; // x5
  int32_t currentKey; // w21
  int32_t v804; // w22
  System_Int32_array *v805; // x0
  __int64 v806; // x1
  struct WarBoardStageNpcEntity_o *v807; // x8
  __int64 v808; // x1
  __int64 v809; // x2
  WarBoardAIRoute_RouteData_o *v810; // x19
  WarBoardAIManager_c *v811; // x0
  struct DefenseAreaData_o *v812; // x8
  __int64 v813; // x0
  __int64 v814; // x1
  __int64 v815; // x2
  WarBoardAIManager_c *v816; // x0
  System_Collections_Generic_Dictionary_int__object__o *v817; // x0
  __int64 v818; // x1
  const MethodInfo *v819; // x5
  bool v820; // w21
  int32_t v821; // w22
  int32_t v822; // w23
  System_Collections_Generic_IEnumerable_TSource__o *v823; // x22
  WarBoardAIRoute_RouteData_o *v824; // x19
  System_Collections_Generic_Dictionary_int__uint__o *v825; // x25
  WarBoardData_o *v826; // x0
  WarBoardEffectData_o *Effect; // x0
  __int64 v828; // x1
  __int64 v829; // x2
  __int64 v830; // x3
  System_Collections_Generic_List_int__o *v831; // x22
  __int64 v832; // x1
  System_Collections_Generic_List_object__o *v833; // x0
  _BOOL8 v834; // x0
  __int64 v835; // x1
  Il2CppObject *v836; // x21
  Il2CppClass *v837; // x0
  _BOOL8 v838; // x0
  __int64 monitor_high; // x1
  struct System_Int32_array *v840; // x8
  _QWORD *v841; // x9
  __int64 v842; // x10
  WarBoardPieceData_o *v843; // x0
  __int64 v844; // x1
  WarBoardPieceData_o *v845; // x0
  _BOOL8 v846; // x0
  __int64 v847; // x1
  __int64 monitor_low; // x1
  struct System_Int32_array *v849; // x8
  _QWORD *v850; // x9
  __int64 v851; // x10
  __int64 v852; // x0
  __int64 v853; // x1
  WarBoardPieceData_o *v854; // x0
  _BOOL8 v855; // x0
  __int64 v856; // x1
  _BOOL8 CanAcquireItem; // x0
  __int64 v858; // x1
  WarBoardAIRoute_RouteData_o *v859; // x8
  int64_t v860; // x9
  WarBoardPieceData_o *v861; // x0
  _BOOL8 isMaster; // x0
  __int64 v863; // x1
  _BOOL8 v864; // x0
  __int64 v865; // x1
  WarBoardAIRoute_RouteData_o *v866; // x8
  WarBoardPieceData_o *v867; // x0
  _BOOL8 v868; // x0
  __int64 v869; // x1
  _BOOL8 v870; // x0
  __int64 v871; // x1
  __int64 v872; // x0
  __int64 v873; // x1
  __int64 FlagOutOfWarningAreaToDistance; // x0
  __int64 v875; // x1
  WarBoardAIRoute_RouteData_o *v876; // x8
  struct WarBoardAIRoute_RouteData_EvalOffsetMagnification_o *evalOffsetMagnification; // x9
  struct WarBoardPieceData_o *v878; // x8
  System_Collections_Generic_Dictionary_int__object__o *piecePersonalityDic; // x0
  Il2CppObject *v880; // x22
  WarBoardAIEvalCalcurater_o *v881; // x21
  __int64 v882; // x0
  __int64 v883; // x1
  const MethodInfo *v884; // x1
  __int64 v885; // x1
  __int64 v886; // x2
  __int64 v887; // x3
  WarBoardAIRoute___c_c *v888; // x0
  struct System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v889; // x22
  System_Func_object__object__o *_9__47_5; // x23
  Il2CppObject *v891; // x24
  struct WarBoardAIRoute___c_StaticFields *v892; // x0
  int64_t v893; // x2
  int32_t v894; // w3
  System_String_o *v895; // x4
  BattleSetupInfo_o *v896; // x5
  FollowerInfo_o *v897; // x6
  PartyListViewItem_o *v898; // x7
  System_Collections_Generic_IEnumerable_T__o *v899; // x23
  __int64 v900; // x1
  __int64 v901; // x2
  __int64 v902; // x3
  System_Collections_Generic_List_object__o *v903; // x22
  __int64 v904; // x0
  __int64 v905; // x1
  int64_t v906; // x2
  int32_t v907; // w3
  System_String_o *v908; // x4
  BattleSetupInfo_o *v909; // x5
  FollowerInfo_o *v910; // x6
  PartyListViewItem_o *v911; // x7
  Il2CppObject *v912; // x1
  struct System_Object_array *v913; // x8
  _QWORD *v914; // x9
  __int64 v915; // x10
  Il2CppClass **v916; // x0
  WarBoardAIRoute_RouteData_o *v917; // x0
  __int64 v918; // x1
  WarBoardAIRoute_RouteData_o *v919; // x2
  int32_t v920; // w3
  System_String_o *v921; // x4
  BattleSetupInfo_o *v922; // x5
  FollowerInfo_o *v923; // x6
  PartyListViewItem_o *v924; // x7
  const MethodInfo *v925; // x1
  System_Collections_Generic_List_object__o *allRouteList; // x0
  struct System_Object_array *v927; // x8
  _QWORD *v928; // x9
  __int64 v929; // x10
  Il2CppClass **v930; // x8
  int32_t searchCount; // w2
  System_Collections_Generic_Dictionary_TKey__TValue__o *dictionaryCreateRouteDataEvalValue; // x21
  Il2CppObject *v933; // x0
  PartyOrganizationUtility_o *p_basePieceBasePieceRouteList_5__23; // x8
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v935; // x10
  struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *basePieceBasePieceRouteList_5__23; // t1
  WarBoardAIRoute__CreateRouteData_d__47_o *v937; // x0
  int64_t v938; // x2
  int32_t v939; // w3
  System_String_o *v940; // x4
  BattleSetupInfo_o *v941; // x5
  FollowerInfo_o *v942; // x6
  PartyListViewItem_o *v943; // x7
  WarBoardAIRoute__CreateRouteData_d__47_o *v944; // x0
  int64_t v945; // x2
  int32_t v946; // w3
  System_String_o *v947; // x4
  BattleSetupInfo_o *v948; // x5
  FollowerInfo_o *v949; // x6
  PartyListViewItem_o *v950; // x7
  WarBoardAIRoute__CreateRouteData_d__47_o *v951; // x0
  int64_t v952; // x2
  int32_t v953; // w3
  System_String_o *v954; // x4
  BattleSetupInfo_o *v955; // x5
  FollowerInfo_o *v956; // x6
  PartyListViewItem_o *v957; // x7
  WarBoardAIRoute__CreateRouteData_d__47_o *v958; // x0
  int64_t v959; // x2
  int32_t v960; // w3
  System_String_o *v961; // x4
  BattleSetupInfo_o *v962; // x5
  FollowerInfo_o *v963; // x6
  PartyListViewItem_o *v964; // x7
  WarBoardAIRoute__CreateRouteData_d__47_o *v965; // x0
  int64_t v966; // x2
  int32_t v967; // w3
  System_String_o *v968; // x4
  BattleSetupInfo_o *v969; // x5
  FollowerInfo_o *v970; // x6
  PartyListViewItem_o *v971; // x7
  WarBoardAIRoute__CreateRouteData_d__47_o *v972; // x0
  int64_t v973; // x2
  int32_t v974; // w3
  System_String_o *v975; // x4
  BattleSetupInfo_o *v976; // x5
  FollowerInfo_o *v977; // x6
  PartyListViewItem_o *v978; // x7
  WarBoardAIRoute__CreateRouteData_d__47_o *v979; // x0
  int64_t v980; // x2
  int32_t v981; // w3
  System_String_o *v982; // x4
  BattleSetupInfo_o *v983; // x5
  FollowerInfo_o *v984; // x6
  PartyListViewItem_o *v985; // x7
  WarBoardAIRoute__CreateRouteData_d__47_o *v986; // x0
  int64_t v987; // x2
  int32_t v988; // w3
  System_String_o *v989; // x4
  BattleSetupInfo_o *v990; // x5
  FollowerInfo_o *v991; // x6
  PartyListViewItem_o *v992; // x7
  Il2CppObject *v993; // x1
  WarBoardAIRoute__CreateRouteData_d__47_o *v994; // x0
  int64_t v995; // x2
  int32_t v996; // w3
  System_String_o *v997; // x4
  BattleSetupInfo_o *v998; // x5
  FollowerInfo_o *v999; // x6
  PartyListViewItem_o *v1000; // x7
  System_Collections_Generic_Dictionary_int__uint__o *v1001; // [xsp+10h] [xbp-1B0h]
  WarBoardAIRoute_o *_4__this; // [xsp+18h] [xbp-1A8h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v1003; // [xsp+20h] [xbp-1A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v1004; // [xsp+50h] [xbp-170h] BYREF
  WarBoardAIRoute__CreateRouteData_d__47_o **v1005; // [xsp+78h] [xbp-148h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v1006; // [xsp+80h] [xbp-140h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v1007; // [xsp+B0h] [xbp-110h] BYREF
  __int128 v1008; // [xsp+D0h] [xbp-F0h] BYREF
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o v1009; // [xsp+E0h] [xbp-E0h]
  System_Collections_Generic_Dictionary_Enumerator_int__uint__o v1010; // [xsp+F0h] [xbp-D0h] BYREF
  WarBoardAIRoute_RouteData_o *route; // [xsp+118h] [xbp-A8h] BYREF
  Il2CppObject *value; // [xsp+120h] [xbp-A0h] BYREF
  WarBoardAIRoute_RouteData_o *routeData; // [xsp+128h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v1014; // [xsp+130h] [xbp-90h] BYREF
  int32_t masterReplaceCount[2]; // [xsp+148h] [xbp-78h] BYREF
  __int64 actionCount; // [xsp+150h] [xbp-70h] BYREF
  WarBoardAIRoute__CreateRouteData_d__47_o *v1017; // [xsp+158h] [xbp-68h] BYREF

  v8 = this;
  v1017 = this;
  if ( (byte_4B13DDE & 1) == 0 )
  {
    sub_1BCA7E0(&AStarSearch_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_WarBoardAIRoute_RouteData___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_uint__int__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, v21, v22);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__,
      v23,
      v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_uint__int___ctor__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType___ctor__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_IEnumerator__float__get_Count__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_uint__int__get_Count__, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__get_Keys__, v35, v36);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_uint__int__get_Values__, v37, v38);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__set_Item__, v39, v40);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v41, v42);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_uint__int__TypeInfo, v43, v44);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TypeInfo, v45, v46);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___, v47, v48);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_int___, v49, v50);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___, v51, v52);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderByDescending_KeyValuePair_IEnumerator__float___float___, v53, v54);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData___, v55, v56);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_long__WarBoardAIRoute_TargetData___long__WarBoardAIRoute_TargetData___,
      v57,
      v58);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__, v59, v60);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__, v61, v62);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__Dispose__,
      v63,
      v64);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__, v65, v66);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v67, v68);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__, v69, v70);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__, v71, v72);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__MoveNext__,
      v73,
      v74);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__, v75, v76);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v77, v78);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__get_Current__, v79, v80);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__get_Current__, v81, v82);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__get_Current__,
      v83,
      v84);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__get_Current__,
      v85,
      v86);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v87, v88);
    sub_1BCA7E0(
      &System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__TypeInfo,
      v89,
      v90);
    sub_1BCA7E0(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v91, v92);
    sub_1BCA7E0(&System_Func_KeyValuePair_IEnumerator__float___float__TypeInfo, v93, v94);
    sub_1BCA7E0(&System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__TypeInfo, v95, v96);
    sub_1BCA7E0(&System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__TypeInfo, v97, v98);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__, v99, v100);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__, v101, v102);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo, v103, v104);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo, v105, v106);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo, v107, v108);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v109, v110);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_KeyCollection_int__WarBoardPieceData__GetEnumerator__,
      v111,
      v112);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_IEnumerator__float__get_Key__, v113, v114);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__WarBoardPieceData__get_Key__, v115, v116);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v117, v118);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Key__, v119, v120);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v121, v122);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__uint__get_Value__, v123, v124);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v125, v126);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__Add__, v127, v128);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__, v129, v130);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__, v131, v132);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v133, v134);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__, v135, v136);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v137, v138);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v139, v140);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor___76814768, v141, v142);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__get_Count__, v143, v144);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v145, v146);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v147, v148);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo, v149, v150);
    sub_1BCA7E0(&WarBoardAIRoute_RouteData_TypeInfo, v151, v152);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v153, v154);
    sub_1BCA7E0(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_1__, v155, v156);
    sub_1BCA7E0(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_2__, v157, v158);
    sub_1BCA7E0(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_5__, v159, v160);
    sub_1BCA7E0(&Method_WarBoardAIRoute___c__CreateRouteData_b__47_6__, v161, v162);
    sub_1BCA7E0(&Method_WarBoardAIRoute___c__DisplayClass47_0__CreateRouteData_b__0__, v163, v164);
    sub_1BCA7E0(&WarBoardAIRoute___c__DisplayClass47_0_TypeInfo, v165, v166);
    sub_1BCA7E0(&Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__3__, v167, v168);
    sub_1BCA7E0(&Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__4__, v169, v170);
    sub_1BCA7E0(&WarBoardAIRoute___c__DisplayClass47_1_TypeInfo, v171, v172);
    sub_1BCA7E0(&WarBoardAIRoute___c_TypeInfo, v173, v174);
    sub_1BCA7E0(&WarBoardAIEvalCalcurater_TypeInfo, v175, v176);
    this = (WarBoardAIRoute__CreateRouteData_d__47_o *)sub_1BCA7E0(&WarBoardAIManager_TypeInfo, v177, v178);
    byte_4B13DDE = 1;
  }
  *(_QWORD *)masterReplaceCount = 0LL;
  actionCount = 0LL;
  memset(&v1014, 0, sizeof(v1014));
  value = 0LL;
  routeData = 0LL;
  route = 0LL;
  memset(&v1007, 0, sizeof(v1007));
  memset(&v1010, 0, 32);
  v1008 = 0u;
  v1009 = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)0;
  memset(&v1006, 0, sizeof(v1006));
  *(_QWORD *)&v1004.fields._getEnumeratorRetType = 0LL;
  v1005 = &v1017;
  _1__state = v8->fields.__1__state;
  if ( _1__state == 2 )
  {
    servantAndEnemyRange_5__14 = v8->fields._servantAndEnemyRange_5__14;
    servantAndEnemyMasterRange_5__15 = v8->fields._servantAndEnemyMasterRange_5__15;
    v8->fields.__1__state = -4;
    if ( servantAndEnemyRange_5__14 < servantAndEnemyMasterRange_5__15 )
    {
LABEL_131:
      WarBoardAIRoute__CreateRouteData_d__47____m__Finally2(v8, method);
      p__7__wrap24 = (PartyOrganizationUtility_o *)&v1017->fields.__7__wrap24;
      *(_QWORD *)&v1017->fields.__7__wrap24 = 0LL;
      sub_1BCA784(p__7__wrap24, 0LL, v451, v452, v453, v454, v455, v456);
      return 0;
    }
LABEL_117:
    v439 = *(__int64 **)&v8->fields.__7__wrap24;
    if ( !v439 )
      sub_1BCAA3C(this, method);
    v440 = *v439;
    v441 = *(unsigned __int16 *)(*v439 + 302);
    if ( *(_WORD *)(*v439 + 302) )
    {
      v442 = (int *)(*(_QWORD *)(v440 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v442 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v441;
        v442 += 4;
        if ( !v441 )
          goto LABEL_122;
      }
      v443 = v440 + 16LL * *v442 + 312;
    }
    else
    {
LABEL_122:
      v443 = sub_1C1C7C0(*(_QWORD *)&v8->fields.__7__wrap24, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v444 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v443)(v439, *(_QWORD *)(v443 + 8));
    v8 = v1017;
    if ( (v444 & 1) != 0 )
    {
      v445 = *(__int64 **)&v1017->fields.__7__wrap24;
      if ( !v445 )
        sub_1BCAA3C(v444, method);
      v446 = *v445;
      v447 = *(unsigned __int16 *)(*v445 + 302);
      if ( *(_WORD *)(*v445 + 302) )
      {
        v448 = (int *)(*(_QWORD *)(v446 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___c **)v448 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo )
        {
          --v447;
          v448 += 4;
          if ( !v447 )
            goto LABEL_130;
        }
        v449 = v446 + 16LL * *v448 + 312;
      }
      else
      {
LABEL_130:
        v449 = sub_1C1C7C0(
                 *(_QWORD *)&v1017->fields.__7__wrap24,
                 System_Collections_Generic_IEnumerator_KeyValuePair_IEnumerator__float___TypeInfo,
                 0LL);
      }
      v457 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v449)(v445, *(_QWORD *)(v449 + 8));
      v458 = v1017;
      v1017->fields.__2__current = v457;
      v458 = (WarBoardAIRoute__CreateRouteData_d__47_o *)((char *)v458 + 24);
      ++LODWORD(v458->fields._baseSquare_5__11);
      sub_1BCA784((PartyOrganizationUtility_o *)v458, (int64_t)v457, v459, v460, v461, v462, v463, v464);
      result = 1;
      v1017->fields.__1__state = 2;
      return result;
    }
    goto LABEL_131;
  }
  _4__this = v8->fields.__4__this;
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -3;
    goto LABEL_648;
  }
  result = 0;
  if ( !_1__state )
  {
    v8->fields.__1__state = -1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      sub_1BCAA3C(0LL, v182);
    monitor = (struct WarBoardData_o *)Instance[27].monitor;
    v190 = v1017;
    v1017->fields._warBoardData_5__2 = monitor;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v190->fields._warBoardData_5__2,
      (int64_t)monitor,
      v183,
      v184,
      v185,
      v186,
      v187,
      v188);
    if ( !_4__this )
      sub_1BCAA3C(v191, v192);
    npcData = _4__this->fields.npcData;
    if ( !npcData )
      sub_1BCAA3C(v191, v192);
    searchDepth = npcData->fields.searchDepth;
    if ( !searchDepth )
    {
      searchDepth = _4__this->fields.TEMP_SEARCH_DEPTH;
      npcData->fields.searchDepth = searchDepth;
    }
    v195 = v1017;
    v196 = v1017->fields.searchCount + 1;
    v1017->fields.searchCount = v196;
    if ( v196 > searchDepth )
      return 0;
    *(_QWORD *)masterReplaceCount = 0LL;
    actionCount = 0LL;
    WarBoardAIRoute__GetRouteDataActionList(
      _4__this,
      v195->fields.routeDataList,
      (int32_t *)&actionCount + 1,
      (int32_t *)&actionCount,
      &masterReplaceCount[1],
      masterReplaceCount,
      0LL);
    RequiredCost = WarBoardAIRoute__GetRequiredCost(
                     _4__this,
                     _4__this->fields.moveCost,
                     _4__this->fields.masterMoveCost,
                     SHIDWORD(actionCount),
                     actionCount,
                     masterReplaceCount[1],
                     masterReplaceCount[0],
                     0LL);
    v1017->fields._requiredCost_5__3 = RequiredCost;
    v198 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !v198 )
      sub_1BCAA3C(0LL, v199);
    if ( RequiredCost >= SHIDWORD(v198[47].klass) )
      return 0;
    MasterSquareIndex = WarBoardAIRoute__GetMasterSquareIndex(_4__this, v1017->fields.piecePlaceData, 0LL);
    piecePlaceData = v1017->fields.piecePlaceData;
    v1017->fields._masterSquareIndex_5__4 = MasterSquareIndex;
    AllyPutSquareIndicesWithoutMaster = WarBoardAIRoute__GetAllyPutSquareIndicesWithoutMaster(
                                          _4__this,
                                          piecePlaceData,
                                          MasterSquareIndex,
                                          0LL);
    v203 = v1017;
    v1017->fields._allyPieceIndexs_5__5 = AllyPutSquareIndicesWithoutMaster;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v203->fields._allyPieceIndexs_5__5,
      (int64_t)AllyPutSquareIndicesWithoutMaster,
      v204,
      v205,
      v206,
      v207,
      v208,
      v209);
    v210 = (PartyOrganizationUtility_o *)v1017;
    v1017->fields._defenseAreaData_5__7 = 0LL;
    v210 = (PartyOrganizationUtility_o *)((char *)v210 + 104);
    *(_QWORD *)&v210[-1].fields._IsQuestStartMenuMode_k__BackingField = 1LL;
    sub_1BCA784(v210, 0LL, v211, v212, v213, v214, v215, v216);
    warBoardData_5__2 = v1017->fields._warBoardData_5__2;
    if ( !warBoardData_5__2 )
      sub_1BCAA3C(v217, v218);
    masterExistsForce = warBoardData_5__2->fields.masterExistsForce;
    if ( !masterExistsForce )
      sub_1BCAA3C(0LL, v218);
    v221 = System_Collections_Generic_List_int___Contains(
             masterExistsForce,
             _4__this->fields.forceId,
             (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
    v223 = v1017;
    if ( v221 )
    {
      if ( v1017 )
      {
        v1017->fields._masterExists_5__8 = 1;
LABEL_25:
        DefenseAreaData = WarBoardAIRoute__GetDefenseAreaData(
                            _4__this,
                            v223->fields._masterSquareIndex_5__4,
                            v223->fields._allyPieceIndexs_5__5,
                            v223->fields.piecePlaceData,
                            0LL);
        v229 = v1017;
        v1017->fields._defenseAreaData_5__7 = DefenseAreaData;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v229->fields._defenseAreaData_5__7,
          (int64_t)DefenseAreaData,
          v230,
          v231,
          v232,
          v233,
          v234,
          v235);
        v238 = v1017;
        defenseAreaData_5__7 = v1017->fields._defenseAreaData_5__7;
        if ( !defenseAreaData_5__7 )
          sub_1BCAA3C(v236, v237);
        v1017->fields._baseFlag_5__6 |= defenseAreaData_5__7->fields._Flag_k__BackingField;
        aiRouteMasterData = _4__this->fields.aiRouteMasterData;
        if ( !aiRouteMasterData )
          sub_1BCAA3C(v236, v237);
        IsAllBlockShortestRouteEnemyAndMastr = WarBoardAIRoute__IsAllBlockShortestRouteEnemyAndMastr(
                                                 defenseAreaData_5__7->fields._ShortestRoutes_k__BackingField,
                                                 v238->fields.piecePlaceData,
                                                 aiRouteMasterData->fields.masterType == 1,
                                                 0LL);
        v223 = v1017;
        if ( IsAllBlockShortestRouteEnemyAndMastr )
          v1017->fields._baseFlag_5__6 |= 0x20000000uLL;
LABEL_29:
        v242 = v223->fields.piecePlaceData;
        if ( !v242 )
          sub_1BCAA3C(0LL, v222);
        System_Collections_Generic_Dictionary_int__uint___GetEnumerator(
          &v1004,
          v242,
          (const MethodInfo_3211E50 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
        v243 = v1017;
        v244 = *(_OWORD *)&v1004.fields._dictionary;
        p__7__wrap8 = (PartyOrganizationUtility_o *)&v1017->fields.__7__wrap8;
        *(_OWORD *)&v1003.fields._dictionary = *(_OWORD *)&v1004.fields._dictionary;
        v1003.fields._current = v1004.fields._current;
        v1017->fields.__7__wrap8.fields._current = v1004.fields._current;
        *(_OWORD *)&v243->fields.__7__wrap8.fields._dictionary = v244;
        sub_1BCA784(p__7__wrap8, 0LL, v246, v247, v248, v249, v250, v251);
        v1017->fields.__1__state = -3;
LABEL_44:
        while ( System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
                  &v1017->fields.__7__wrap8,
                  (const MethodInfo_3358F6C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__) )
        {
          key = v1017->fields.__7__wrap8.fields._current.fields.key;
          v256 = (Il2CppObject *)sub_1BCAA2C(WarBoardAIRoute___c__DisplayClass47_0_TypeInfo, v252, v253, v254);
          System_Object___ctor(v256, 0LL);
          v257 = v1017;
          v1017->fields.__8__1 = (struct WarBoardAIRoute___c__DisplayClass47_0_o *)v256;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v257->fields.__8__1,
            (int64_t)v256,
            v258,
            v259,
            v260,
            v261,
            v262,
            v263);
          v1017->fields.__7__wrap8.fields._getEnumeratorRetType = (int)key;
          if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v264);
          Square = WarBoardAIManager__GetSquare((int32_t)key, 0LL);
          v266 = v1017;
          *(_QWORD *)&v1017->fields._baseSquareIndex_5__10 = Square;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v266->fields._baseSquareIndex_5__10,
            (int64_t)Square,
            v267,
            v268,
            v269,
            v270,
            v271,
            v272);
          _8__1 = v1017->fields.__8__1;
          PieceUnique = WarBoardAIManager__GetPieceUnique(HIDWORD(key), 0LL);
          if ( !_8__1 )
            sub_1BCAA3C(PieceUnique, PieceUnique);
          _8__1->fields.basePiece = PieceUnique;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&_8__1->fields,
            (int64_t)PieceUnique,
            v275,
            v276,
            v277,
            v278,
            v279,
            v280);
          v283 = v1017;
          baseFlag_5__6 = v1017->fields._baseFlag_5__6;
          v285 = v1017->fields.__8__1;
          v1017->fields._tmpFlagNow_5__12 = -1LL;
          v283->fields._servantAndMasterRange_5__13 = -1;
          v283->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)baseFlag_5__6;
          if ( !v285 )
            sub_1BCAA3C(v281, v282);
          if ( !_4__this )
            sub_1BCAA3C(0LL, v282);
          v286 = WarBoardAIRoute__GetFlagAroundSquareCheck(
                   _4__this,
                   *(WarBoardSquareData_o **)&v283->fields._baseSquareIndex_5__10,
                   v285->fields.basePiece,
                   v283->fields.piecePlaceData,
                   v283->fields._masterSquareIndex_5__4,
                   0LL);
          v287 = v1017;
          v1017->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)(v286 | baseFlag_5__6);
          routeDataList = (System_Collections_Generic_IEnumerable_TSource__o *)v287->fields.routeDataList;
          v289 = (Il2CppObject *)v287->fields.__8__1;
          v293 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                  System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo,
                                                  v290,
                                                  v291,
                                                  v292);
          System_Func_object__bool____ctor(
            v293,
            v289,
            Method_WarBoardAIRoute___c__DisplayClass47_0__CreateRouteData_b__0__,
            0LL);
          v295 = System_Linq_Enumerable__Count_object__49476864(
                   routeDataList,
                   (System_Func_TSource__bool__o *)v293,
                   (const MethodInfo_2F2F500 *)Method_System_Linq_Enumerable_Count_WarBoardAIRoute_RouteData___);
          v296 = (System_Collections_Generic_List_object__o *)v1017->fields.routeDataList;
          v1017->fields._servantAndEnemyRange_5__14 = v295;
          if ( !v296 )
            sub_1BCAA3C(0LL, v294);
          Only = System_Collections_Generic_List_object___AsReadOnly(
                   v296,
                   (const MethodInfo_35A1E84 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__);
          v298 = v1017->fields.__8__1;
          if ( !v298 )
            sub_1BCAA3C(Only, Only);
          RouteSumPieceActionCost = WarBoardAIRoute__GetRouteSumPieceActionCost(
                                      _4__this,
                                      (System_Collections_ObjectModel_ReadOnlyCollection_WarBoardAIRoute_RouteData__o *)Only,
                                      v298->fields.basePiece,
                                      0LL);
          v301 = v1017;
          v302 = v1017->fields.__8__1;
          v1017->fields._servantAndEnemyMasterRange_5__15 = RouteSumPieceActionCost;
          if ( !v302 )
            sub_1BCAA3C(RouteSumPieceActionCost, v300);
          IsActable = WarBoardAIRoute__IsActable(
                        _4__this,
                        v302->fields.basePiece,
                        v301->fields._servantAndEnemyRange_5__14,
                        v301->fields._requiredCost_5__3,
                        RouteSumPieceActionCost,
                        0LL);
          if ( IsActable )
          {
            v305 = v1017->fields.__8__1;
            if ( !v305 )
              sub_1BCAA3C(IsActable, v304);
            DesignationItemToDistance = WarBoardAIRoute__GetDesignationItemToDistance(
                                          _4__this,
                                          v305->fields.basePiece,
                                          v1017->fields.routeDataList,
                                          v1017->fields.__7__wrap8.fields._getEnumeratorRetType,
                                          0LL);
            v307 = v1017;
            *(_QWORD *)&v1017->fields._sumPieceActionCost_5__17 = DesignationItemToDistance;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v307->fields._sumPieceActionCost_5__17,
              (int64_t)DesignationItemToDistance,
              v308,
              v309,
              v310,
              v311,
              v312,
              v313);
            v316 = v1017->fields.__8__1;
            if ( !v316 )
              sub_1BCAA3C(v314, v315);
            TargetToDistance_35898252 = (struct System_Collections_Generic_Dictionary_int__int__o *)WarBoardAIRoute__GetTargetToDistance_35898252(_4__this, v316->fields.basePiece, v1017->fields.routeDataList, v1017->fields.__7__wrap8.fields._getEnumeratorRetType, 0LL);
            v318 = v1017;
            v1017->fields._dicBaseDIRange_5__18 = TargetToDistance_35898252;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v318->fields._dicBaseDIRange_5__18,
              (int64_t)TargetToDistance_35898252,
              v319,
              v320,
              v321,
              v322,
              v323,
              v324);
            AllEnemyToDistance = WarBoardAIRoute__GetAllEnemyToDistance(
                                   _4__this,
                                   v1017->fields.routeDataList,
                                   v1017->fields.__7__wrap8.fields._getEnumeratorRetType,
                                   (int32_t *)&v1017->fields._tmpFlagNow_5__12 + 1,
                                   &v1017->fields._servantAndMasterRange_5__13,
                                   0LL);
            v326 = v1017;
            v1017->fields._dicKeyPutIndexValueTargetData_5__19 = (struct System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)AllEnemyToDistance;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v326->fields._dicKeyPutIndexValueTargetData_5__19,
              (int64_t)AllEnemyToDistance,
              v327,
              v328,
              v329,
              v330,
              v331,
              v332);
            v333 = v1017;
            v1017->fields._dicEnemyRange_5__20 = 0LL;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v333->fields._dicEnemyRange_5__20,
              0LL,
              v334,
              v335,
              v336,
              v337,
              v338,
              v339);
            v342 = v1017->fields.__8__1;
            if ( !v342 )
              sub_1BCAA3C(v340, v341);
            basePiece = v342->fields.basePiece;
            if ( !basePiece )
              sub_1BCAA3C(0LL, v341);
            isServant = WarBoardPieceData__get_isServant(basePiece, 0LL);
            if ( isServant )
            {
              v348 = v1017->fields.__8__1;
              if ( !v348 )
                sub_1BCAA3C(isServant, v345);
              AdvantagePieceData = WarBoardAIRoute__GetAdvantagePieceData(
                                     _4__this,
                                     v348->fields.basePiece,
                                     v1017->fields.__7__wrap8.fields._getEnumeratorRetType,
                                     0LL);
              v350 = v1017;
              v1017->fields._dicEnemyRange_5__20 = (struct System_Collections_Generic_Dictionary_uint__int__o *)AdvantagePieceData;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&v350->fields._dicEnemyRange_5__20,
                (int64_t)AdvantagePieceData,
                v351,
                v352,
                v353,
                v354,
                v355,
                v356);
              if ( v1017->fields._masterExists_5__8 )
              {
                masterSquareIndex_5__4 = v1017->fields._masterSquareIndex_5__4;
                if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo, v345);
                v359 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              (int32_t)key,
                                                                              masterSquareIndex_5__4,
                                                                              0,
                                                                              0LL,
                                                                              v357);
                v360 = System_Linq_Enumerable__Count_int_(
                         v359,
                         (const MethodInfo_2F2DBBC *)Method_System_Linq_Enumerable_Count_int___);
                v361 = v1017;
                v362 = v1017->fields.__8__1;
                LODWORD(v1017->fields._tmpFlagNow_5__12) = v360;
                if ( !v362 )
                  sub_1BCAA3C(v360, v345);
                v363 = v362->fields.basePiece;
                if ( !v363 )
                  sub_1BCAA3C(v360, v345);
                v364 = _4__this->fields.aiRouteMasterData;
                if ( !v364 )
                  sub_1BCAA3C(v360, v345);
                masterType = v364->fields.masterType;
                index_k__BackingField = v363->fields._index_k__BackingField;
                if ( masterType != 2 || v364->fields.masterPieceIndex != index_k__BackingField )
                {
                  v367 = _4__this->fields.npcData;
                  if ( !v367 )
                    sub_1BCAA3C(v360, v345);
                  if ( v367->fields.defenseArea > (int)v360 )
                    v361->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)((unsigned __int64)v361->fields._baseSquare_5__11 | 0x800);
                  if ( (masterType != 2 || v364->fields.masterPieceIndex != index_k__BackingField)
                    && WarBoardAIRoute__IsBlockShortestRouteEnemyAndMaster(
                         v361->fields._defenseAreaData_5__7,
                         v361->fields.__7__wrap8.fields._getEnumeratorRetType,
                         masterType == 1,
                         0LL) )
                  {
                    v1017->fields._baseSquare_5__11 = (struct WarBoardSquareData_o *)((unsigned __int64)v1017->fields._baseSquare_5__11 | 0x80000000);
                  }
                }
              }
            }
            v368 = (System_Collections_Generic_HashSet_T__o *)sub_1BCAA2C(
                                                                System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo,
                                                                v345,
                                                                v346,
                                                                v347);
            System_Collections_Generic_HashSet_object____ctor(
              v368,
              (const MethodInfo_345AFC8 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__);
            v369 = v1017;
            v1017->fields._advantagePieceData_5__21 = (struct WarBoardAIRoute_AdvantagePieceData_o *)v368;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v369->fields._advantagePieceData_5__21,
              (int64_t)v368,
              v370,
              v371,
              v372,
              v373,
              v374,
              v375);
            v379 = (System_Collections_Generic_HashSet_T__o *)sub_1BCAA2C(
                                                                System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__TypeInfo,
                                                                v376,
                                                                v377,
                                                                v378);
            System_Collections_Generic_HashSet_object____ctor(
              v379,
              (const MethodInfo_345AFC8 *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___ctor__);
            v380 = v1017;
            v1017->fields._basePieceActionPieceRouteList_5__22 = (struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)v379;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v380->fields._basePieceActionPieceRouteList_5__22,
              (int64_t)v379,
              v381,
              v382,
              v383,
              v384,
              v385,
              v386);
            v388 = (System_Collections_Generic_List_object__o *)v1017->fields.routeDataList;
            if ( !v388 )
              sub_1BCAA3C(0LL, v387);
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v1003,
              v388,
              (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
            *(_OWORD *)&v1014.fields._list = *(_OWORD *)&v1003.fields._dictionary;
            v1014.fields._current = v1003.fields._current.fields.key;
            while ( 1 )
            {
              v389 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                       &v1014,
                       (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
              if ( !v389 )
                break;
              current = v1014.fields._current;
              if ( !v1014.fields._current )
                sub_1BCAA3C(v389, v390);
              if ( LODWORD(v1014.fields._current[1].monitor) != HIDWORD(v1014.fields._current[1].monitor) )
              {
                klass = v1014.fields._current[3].klass;
                if ( !klass )
                  sub_1BCAA3C(v389, v390);
                v393 = v1017->fields.__8__1;
                if ( !v393 )
                  sub_1BCAA3C(v389, v390);
                v394 = v393->fields.basePiece;
                if ( !v394 )
                  sub_1BCAA3C(v389, v390);
                if ( HIDWORD(klass->_1.namespaze) == v394->fields._index_k__BackingField )
                {
                  basePieceActionPieceRouteList_5__22 = (System_Collections_Generic_HashSet_T__o *)v1017->fields._basePieceActionPieceRouteList_5__22;
                  if ( !basePieceActionPieceRouteList_5__22 )
                    sub_1BCAA3C(0LL, v390);
                  v389 = System_Collections_Generic_HashSet_object___Add(
                           basePieceActionPieceRouteList_5__22,
                           v1014.fields._current,
                           (const MethodInfo_345C1AC *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__);
                }
                if ( (BYTE3(current[1].klass) & 4) != 0 )
                {
                  v396 = current[3].monitor;
                  if ( !v396 )
                    sub_1BCAA3C(v389, v390);
                  v397 = v1017->fields.__8__1;
                  if ( !v397 )
                    sub_1BCAA3C(v389, v390);
                  v398 = v397->fields.basePiece;
                  if ( !v398 )
                    sub_1BCAA3C(v389, v390);
                  if ( v396[7] == v398->fields._index_k__BackingField )
                  {
                    advantagePieceData_5__21 = v1017->fields._advantagePieceData_5__21;
                    if ( !advantagePieceData_5__21 )
                      sub_1BCAA3C(0LL, v390);
                    System_Collections_Generic_HashSet_object___Add(
                      (System_Collections_Generic_HashSet_T__o *)advantagePieceData_5__21,
                      current,
                      (const MethodInfo_345C1AC *)Method_System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__Add__);
                  }
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v1014,
              (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
            v466 = *(WarBoardSquareData_o **)&v1017->fields._baseSquareIndex_5__10;
            if ( !v466 )
              sub_1BCAA3C(0LL, v465);
            MyAndLinkedSquareIndecies = (struct System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)WarBoardSquareData__GetMyAndLinkedSquareIndecies(v466, 0LL);
            v468 = v1017;
            v1017->fields._basePieceBasePieceRouteList_5__23 = MyAndLinkedSquareIndecies;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v468->fields._basePieceBasePieceRouteList_5__23,
              (int64_t)MyAndLinkedSquareIndecies,
              v469,
              v470,
              v471,
              v472,
              v473,
              v474);
            v475 = v1017;
            v476 = 0;
            LODWORD(v1017->fields.__7__wrap23) = 0;
            while ( 2 )
            {
              basePieceBasePieceRouteList_5__23 = v475->fields._basePieceBasePieceRouteList_5__23;
              p_basePieceBasePieceRouteList_5__23 = (PartyOrganizationUtility_o *)&v475->fields._basePieceBasePieceRouteList_5__23;
              v935 = basePieceBasePieceRouteList_5__23;
              if ( !basePieceBasePieceRouteList_5__23 )
                sub_1BCAA3C(this, method);
              if ( v476 >= SLODWORD(v935->fields._slots) )
              {
                p_basePieceBasePieceRouteList_5__23->klass = 0LL;
                sub_1BCA784(p_basePieceBasePieceRouteList_5__23, 0LL, v2, v3, v4, v5, v6, v7);
                v937 = v1017;
                v1017->fields.__8__1 = 0LL;
                sub_1BCA784((PartyOrganizationUtility_o *)&v937->fields.__8__1, 0LL, v938, v939, v940, v941, v942, v943);
                v944 = v1017;
                *(_QWORD *)&v1017->fields._baseSquareIndex_5__10 = 0LL;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)&v944->fields._baseSquareIndex_5__10,
                  0LL,
                  v945,
                  v946,
                  v947,
                  v948,
                  v949,
                  v950);
                v951 = v1017;
                *(_QWORD *)&v1017->fields._sumPieceActionCost_5__17 = 0LL;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)&v951->fields._sumPieceActionCost_5__17,
                  0LL,
                  v952,
                  v953,
                  v954,
                  v955,
                  v956,
                  v957);
                v958 = v1017;
                v1017->fields._dicBaseDIRange_5__18 = 0LL;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)&v958->fields._dicBaseDIRange_5__18,
                  0LL,
                  v959,
                  v960,
                  v961,
                  v962,
                  v963,
                  v964);
                v965 = v1017;
                v1017->fields._dicKeyPutIndexValueTargetData_5__19 = 0LL;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)&v965->fields._dicKeyPutIndexValueTargetData_5__19,
                  0LL,
                  v966,
                  v967,
                  v968,
                  v969,
                  v970,
                  v971);
                v972 = v1017;
                v1017->fields._dicEnemyRange_5__20 = 0LL;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)&v972->fields._dicEnemyRange_5__20,
                  0LL,
                  v973,
                  v974,
                  v975,
                  v976,
                  v977,
                  v978);
                v979 = v1017;
                v1017->fields._advantagePieceData_5__21 = 0LL;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)&v979->fields._advantagePieceData_5__21,
                  0LL,
                  v980,
                  v981,
                  v982,
                  v983,
                  v984,
                  v985);
                v986 = v1017;
                v1017->fields._basePieceActionPieceRouteList_5__22 = 0LL;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)&v986->fields._basePieceActionPieceRouteList_5__22,
                  0LL,
                  v987,
                  v988,
                  v989,
                  v990,
                  v991,
                  v992);
                goto LABEL_44;
              }
              v477 = sub_1BCAA2C(WarBoardAIRoute___c__DisplayClass47_1_TypeInfo, method, v2, v3);
              System_Object___ctor((Il2CppObject *)v477, 0LL);
              v482 = v1017->fields._basePieceBasePieceRouteList_5__23;
              if ( !v482 )
                sub_1BCAA3C(v478, v479);
              _7__wrap23_low = SLODWORD(v1017->fields.__7__wrap23);
              if ( (unsigned int)_7__wrap23_low >= LODWORD(v482->fields._slots) )
                sub_1BCAA44(v478, v479);
              if ( !v477 )
                sub_1BCAA3C(v478, v479);
              *(_DWORD *)(v477 + 16) = *(&v482->fields._count + _7__wrap23_low);
              v484 = (int32_t *)(v477 + 16);
              v485 = (WarBoardAIRoute_RouteData_o *)sub_1BCAA2C(WarBoardAIRoute_RouteData_TypeInfo, v479, v480, v481);
              WarBoardAIRoute_RouteData___ctor(v485, v486);
              routeData = v485;
              if ( !v485 )
                sub_1BCAA3C(this, method);
              v487 = v1017;
              getEnumeratorRetType = v1017->fields.__7__wrap8.fields._getEnumeratorRetType;
              v485->fields.baseIndex = getEnumeratorRetType;
              v489 = *v484;
              v485->fields.actionIndex = *v484;
              if ( getEnumeratorRetType == v489 )
              {
                v490 = v487->fields.routeDataList;
                if ( !v490 )
                  sub_1BCAA3C(this, method);
                if ( v490->fields._size > 0 )
                  goto LABEL_648;
              }
              dicBaseDIRange_5__18 = (System_Collections_Generic_IEnumerable_TSource__o *)v487->fields._dicBaseDIRange_5__18;
              v492 = WarBoardAIRoute___c_TypeInfo;
              if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo, method);
                v492 = WarBoardAIRoute___c_TypeInfo;
              }
              _9__47_1 = (System_Func_T__TResult__o *)v492->static_fields->__9__47_1;
              if ( !_9__47_1 )
              {
                if ( !v492->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v492, method);
                  v492 = WarBoardAIRoute___c_TypeInfo;
                }
                v494 = (Il2CppObject *)v492->static_fields->__9;
                _9__47_1 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                                          System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__TypeInfo,
                                                          method,
                                                          v2,
                                                          v3);
                System_Func_KeyValuePair_long__object___long____ctor(
                  _9__47_1,
                  v494,
                  Method_WarBoardAIRoute___c__CreateRouteData_b__47_1__,
                  0LL);
                static_fields = WarBoardAIRoute___c_TypeInfo->static_fields;
                static_fields->__9__47_1 = (struct System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___long__o *)_9__47_1;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)&static_fields->__9__47_1,
                  (int64_t)_9__47_1,
                  v496,
                  v497,
                  v498,
                  v499,
                  v500,
                  v501);
                v492 = WarBoardAIRoute___c_TypeInfo;
              }
              if ( !v492->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v492, method);
                v492 = WarBoardAIRoute___c_TypeInfo;
              }
              _9__47_2 = (System_Func_T__TResult__o *)v492->static_fields->__9__47_2;
              if ( !_9__47_2 )
              {
                if ( !v492->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v492, method);
                  v492 = WarBoardAIRoute___c_TypeInfo;
                }
                v503 = (Il2CppObject *)v492->static_fields->__9;
                _9__47_2 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                                          System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__TypeInfo,
                                                          method,
                                                          v2,
                                                          v3);
                System_Func_KeyValuePair_long__object___object____ctor(
                  _9__47_2,
                  v503,
                  Method_WarBoardAIRoute___c__CreateRouteData_b__47_2__,
                  0LL);
                v504 = WarBoardAIRoute___c_TypeInfo->static_fields;
                v504->__9__47_2 = (struct System_Func_KeyValuePair_long__WarBoardAIRoute_TargetData___WarBoardAIRoute_TargetData__o *)_9__47_2;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)&v504->__9__47_2,
                  (int64_t)_9__47_2,
                  v505,
                  v506,
                  v507,
                  v508,
                  v509,
                  v510);
              }
              v518 = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)System_Linq_Enumerable__ToDictionary_KeyValuePair_long__object___long__object_(
                                                                                                    dicBaseDIRange_5__18,
                                                                                                    (System_Func_TSource__TKey__o *)_9__47_1,
                                                                                                    (System_Func_TSource__TElement__o *)_9__47_2,
                                                                                                    (const MethodInfo_2F4BEE8 *)Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_long__WarBoardAIRoute_TargetData___long__WarBoardAIRoute_TargetData___);
              v519 = routeData;
              if ( !routeData )
                sub_1BCAA3C(0LL, v511);
              v520 = *(struct WarBoardSquareData_o **)&v1017->fields._baseSquareIndex_5__10;
              routeData->fields.baseSquare = v520;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&v519->fields.baseSquare,
                (int64_t)v520,
                v512,
                v513,
                v514,
                v515,
                v516,
                v517);
              v529 = v1017->fields.__8__1;
              if ( !v529 )
                sub_1BCAA3C(v521, v522);
              v530 = routeData;
              if ( !routeData )
                sub_1BCAA3C(0LL, v522);
              v531 = v529->fields.basePiece;
              routeData->fields.basePiece = v531;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&v530->fields.basePiece,
                (int64_t)v531,
                v523,
                v524,
                v525,
                v526,
                v527,
                v528);
              v539 = routeData;
              if ( !routeData )
                sub_1BCAA3C(0LL, v532);
              routeData->fields.actionPiece = 0LL;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&v539->fields.actionPiece,
                0LL,
                v533,
                v534,
                v535,
                v536,
                v537,
                v538);
              v541 = routeData;
              v542 = *v484;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v540);
              v543 = WarBoardAIManager__GetSquare(v542, 0LL);
              if ( !v541 )
                sub_1BCAA3C(v543, v543);
              v541->fields.actionSquare = v543;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&v541->fields.actionSquare,
                (int64_t)v543,
                v544,
                v545,
                v546,
                v547,
                v548,
                v549);
              dicKeyPutIndexValueTargetData_5__19 = (System_Collections_Generic_Dictionary_uint__int__o *)v1017->fields._dicKeyPutIndexValueTargetData_5__19;
              if ( !dicKeyPutIndexValueTargetData_5__19 )
                sub_1BCAA3C(0LL, v550);
              v552 = routeData;
              if ( System_Collections_Generic_Dictionary_uint__int___get_Count(
                     dicKeyPutIndexValueTargetData_5__19,
                     (const MethodInfo_32949A4 *)Method_System_Collections_Generic_Dictionary_uint__int__get_Count__) <= 0 )
              {
                v556 = 0x7FFFFFFFLL;
                if ( !v552 )
                  goto LABEL_253;
              }
              else
              {
                v554 = (System_Collections_Generic_Dictionary_uint__int__o *)v1017->fields._dicKeyPutIndexValueTargetData_5__19;
                if ( !v554 )
                  sub_1BCAA3C(0LL, v553);
                Values = System_Collections_Generic_Dictionary_uint__int___get_Values(
                           v554,
                           (const MethodInfo_3294B04 *)Method_System_Collections_Generic_Dictionary_uint__int__get_Values__);
                v556 = System_Linq_Enumerable__Min((System_Collections_Generic_IEnumerable_int__o *)Values, 0LL);
                if ( !v552 )
LABEL_253:
                  sub_1BCAA3C(v556, v553);
              }
              v552->fields.EnemyRangeMin = v556;
              v557 = v1017->fields.__8__1;
              if ( !v557 )
                sub_1BCAA3C(v556, v553);
              if ( !_4__this )
                sub_1BCAA3C(0LL, v553);
              v558 = routeData;
              MoveByTargetDistance = WarBoardAIRoute__GetMoveByTargetDistance(
                                       _4__this,
                                       v518,
                                       *v484,
                                       v557->fields.basePiece,
                                       0LL);
              if ( !v558 )
                sub_1BCAA3C(MoveByTargetDistance, MoveByTargetDistance);
              v558->fields.dicPutIndexTargetData = MoveByTargetDistance;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&v558->fields.dicPutIndexTargetData,
                (int64_t)MoveByTargetDistance,
                v560,
                v561,
                v562,
                v563,
                v564,
                v565);
              v568 = v1017->fields.__8__1;
              if ( !v568 )
                sub_1BCAA3C(v566, v567);
              v569 = routeData;
              ActionPiece = WarBoardAIRoute__GetActionPiece(
                              _4__this,
                              v568->fields.basePiece,
                              *v484,
                              v1017->fields.piecePlaceData,
                              0LL);
              if ( !v569 )
                sub_1BCAA3C(ActionPiece, ActionPiece);
              v569->fields.actionPiece = ActionPiece;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&v569->fields.actionPiece,
                (int64_t)ActionPiece,
                v571,
                v572,
                v573,
                v574,
                v575,
                v576);
              v585 = v1017->fields.__8__1;
              if ( !v585 )
                sub_1BCAA3C(p_actionPiece, v578);
              v586 = v585->fields.basePiece;
              if ( !v586 )
                sub_1BCAA3C(p_actionPiece, v578);
              if ( v586->fields._nowSquareIndex_k__BackingField == *v484 )
              {
                if ( !routeData )
                  sub_1BCAA3C(0LL, v578);
                p_actionPiece = (PartyOrganizationUtility_o *)&routeData->fields.actionPiece;
                v587 = routeData->fields.actionPiece;
                if ( v587 )
                {
                  if ( v587->fields._uniqueIndex_k__BackingField == v586->fields._uniqueIndex_k__BackingField )
                  {
                    p_actionPiece->klass = 0LL;
                    sub_1BCA784(p_actionPiece, 0LL, v579, (int32_t)v580, v581, v582, v583, v584);
                    v585 = v1017->fields.__8__1;
                    if ( !v585 )
                      sub_1BCAA3C(p_actionPiece, v578);
                  }
                }
              }
              v588 = v585->fields.basePiece;
              if ( !v588 )
                sub_1BCAA3C(p_actionPiece, v578);
              limitActionCount_k__BackingField = v588->fields._limitActionCount_k__BackingField;
              currentActionCount_k__BackingField = v588->fields._currentActionCount_k__BackingField;
              if ( !byte_4B11A22 )
              {
                sub_1BCA7E0(&System_Math_TypeInfo, v578, v579);
                byte_4B11A22 = 1;
              }
              v591 = System_Math_TypeInfo;
              if ( !System_Math_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v578);
              v592 = routeData;
              if ( !routeData )
                sub_1BCAA3C(v591, v578);
              v593 = v1017;
              v594 = limitActionCount_k__BackingField - currentActionCount_k__BackingField;
              if ( limitActionCount_k__BackingField - currentActionCount_k__BackingField < 0 )
                v594 = currentActionCount_k__BackingField - limitActionCount_k__BackingField;
              routeData->fields.actionCountOnThisTurn = v594 + v1017->fields._servantAndEnemyRange_5__14 + 1;
              baseSquare_5__11 = v593->fields._baseSquare_5__11;
              *(_QWORD *)&v592->fields.attackByLinkedEnemy = 0LL;
              v592->fields.flagNow = (int64_t)baseSquare_5__11;
              v596 = v593->fields._warBoardData_5__2;
              if ( !v596 )
                sub_1BCAA3C(0LL, v578);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardData__GetWall(v596, *v484, 0, v580);
              v597 = this;
              if ( this )
              {
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
                if ( !this )
                  sub_1BCAA3C(0LL, method);
                if ( this[2].fields._basePieceActionCount_5__16 < _4__this->fields.wallAttackCost
                                                                + v1017->fields._requiredCost_5__3 )
                  goto LABEL_648;
                v598 = v1017->fields.__8__1;
                if ( !v598 )
                  sub_1BCAA3C(this, method);
                v599 = v598->fields.basePiece;
                if ( !v599 )
                  sub_1BCAA3C(0LL, method);
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__EnableWallAttack(
                                                                     v599,
                                                                     v1017->fields._servantAndEnemyMasterRange_5__15,
                                                                     0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_648;
                v600 = v1017->fields.__8__1;
                if ( !v600 )
                  sub_1BCAA3C(this, method);
                v601 = v600->fields.basePiece;
                if ( !v601 )
                  sub_1BCAA3C(0LL, method);
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__CheckWallAttackCond(
                                                                     v601,
                                                                     (WarBoardWallData_o *)v597,
                                                                     0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_648;
              }
              if ( !routeData )
                sub_1BCAA3C(this, method);
              v602 = routeData->fields.actionPiece;
              if ( v602 )
              {
                v603 = v1017->fields.__8__1;
                if ( !v603 )
                  sub_1BCAA3C(this, method);
                v604 = v603->fields.basePiece;
                if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, method);
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardAIManager__IsEnemyPiece(v604, v602, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  v605 = v1017->fields.__8__1;
                  if ( !v605 )
                    sub_1BCAA3C(this, method);
                  v606 = v605->fields.basePiece;
                  if ( !v606 )
                    sub_1BCAA3C(0LL, method);
                  this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__get_isMaster(v606, 0LL);
                  if ( ((unsigned __int8)this & 1) == 0 )
                    goto LABEL_239;
                  if ( !routeData )
                    sub_1BCAA3C(this, method);
                  v607 = routeData->fields.actionPiece;
                  if ( !v607 )
                    sub_1BCAA3C(0LL, method);
                  this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__get_isMaster(v607, 0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
LABEL_239:
                    v608 = routeData;
                    if ( !routeData )
                      sub_1BCAA3C(this, method);
                    v609 = routeData->fields.basePiece;
                    routeData->fields.flagNow |= 2uLL;
                    if ( !v609 )
                      sub_1BCAA3C(this, method);
                    v610 = v608->fields.actionPiece;
                    v608->fields.attackCountOnThisTurn = v609->fields._attackCount_k__BackingField + 1;
                    if ( !v610 )
                      sub_1BCAA3C(0LL, method);
                    this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__get_isServant(v610, 0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      v611 = routeData;
                      if ( !routeData )
                        sub_1BCAA3C(this, method);
                      v612 = v1017->fields.__8__1;
                      if ( !v612 )
                        sub_1BCAA3C(this, method);
                      v613 = v612->fields.basePiece;
                      if ( !v613 )
                        sub_1BCAA3C(this, method);
                      battleServant_k__BackingField = v613->fields._battleServant_k__BackingField;
                      if ( !battleServant_k__BackingField )
                        sub_1BCAA3C(0LL, method);
                      flagNow = routeData->fields.flagNow;
                      ClassId = BattleServantData__getClassId(battleServant_k__BackingField, 0LL);
                      if ( !routeData )
                        sub_1BCAA3C(ClassId, v617);
                      v618 = routeData->fields.actionPiece;
                      if ( !v618 )
                        sub_1BCAA3C(ClassId, v617);
                      v619 = ClassId;
                      v620 = v618->fields._battleServant_k__BackingField;
                      if ( !v620 )
                        sub_1BCAA3C(0LL, v617);
                      v621 = BattleServantData__getClassId(v620, 0LL);
                      FlagAdvantage = WarBoardAIRoute__GetFlagAdvantage(_4__this, v619, v621, 0LL);
                      v611->fields.flagNow = FlagAdvantage | flagNow;
                      if ( !routeData )
                        sub_1BCAA3C(FlagAdvantage, v623);
                      WarBoardAIRoute__LinkedCount(
                        _4__this,
                        *v484,
                        v1017->fields.piecePlaceData,
                        &routeData->fields.attackByLinkedEnemy,
                        &routeData->fields.attackByLinkedAlly,
                        0LL);
                    }
                    break;
                  }
LABEL_648:
                  v475 = v1017;
                  v476 = LODWORD(v1017->fields.__7__wrap23) + 1;
                  LODWORD(v1017->fields.__7__wrap23) = v476;
                  continue;
                }
                if ( !routeData )
                  sub_1BCAA3C(this, method);
                v624 = routeData->fields.actionPiece;
                if ( !v624 )
                  sub_1BCAA3C(this, method);
                if ( v624->fields._roleType_k__BackingField == 1 )
                  goto LABEL_648;
                v625 = v1017->fields.__8__1;
                if ( !v625 )
                  sub_1BCAA3C(this, method);
                v626 = v625->fields.basePiece;
                if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, method);
                this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardAIManager__IsAllyPiece(v626, v624, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( !routeData )
                    sub_1BCAA3C(this, method);
                  routeData->fields.flagNow |= 0x4000000uLL;
                }
              }
              break;
            }
            v627 = routeData;
            if ( !routeData )
              sub_1BCAA3C(this, method);
            if ( (routeData->fields.flagNow & 2) != 0 )
            {
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
              if ( !this )
                sub_1BCAA3C(0LL, method);
              if ( this[2].fields._basePieceActionCount_5__16 < _4__this->fields.attackCost
                                                              + v1017->fields._requiredCost_5__3 )
                goto LABEL_648;
              v650 = v1017->fields.__8__1;
              if ( !v650 )
                sub_1BCAA3C(this, method);
              v651 = v650->fields.basePiece;
              if ( !v651 )
                sub_1BCAA3C(0LL, method);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__EnableAttack(
                                                                   v651,
                                                                   v1017->fields._servantAndEnemyMasterRange_5__15,
                                                                   0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_648;
              v627 = routeData;
              if ( !routeData )
                sub_1BCAA3C(this, method);
            }
            if ( (v627->fields.flagNow & 2) == 0 )
            {
              v628 = v1017->fields.__8__1;
              if ( !v628 )
                sub_1BCAA3C(this, method);
              v629 = v628->fields.basePiece;
              if ( !v629 )
                sub_1BCAA3C(0LL, method);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardPieceData__EnableMoveBySelf(
                                                                   v629,
                                                                   v1017->fields._servantAndEnemyMasterRange_5__15,
                                                                   0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_648;
              v627 = routeData;
              if ( !routeData )
                sub_1BCAA3C(this, method);
            }
            if ( (v627->fields.flagNow & 0x4000000) != 0 )
            {
              v630 = v1017->fields.__8__1;
              if ( !v630 )
                sub_1BCAA3C(this, method);
              v631 = (System_Collections_Generic_List_object__o *)v1017->fields.routeDataList;
              if ( !v631 )
                sub_1BCAA3C(0LL, method);
              requiredCost_5__3 = v1017->fields._requiredCost_5__3;
              v633 = v630->fields.basePiece;
              v634 = v627->fields.actionPiece;
              v635 = System_Collections_Generic_List_object___AsReadOnly(
                       v631,
                       (const MethodInfo_35A1E84 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__AsReadOnly__);
              this = (WarBoardAIRoute__CreateRouteData_d__47_o *)WarBoardAIRoute__IsActableReplace(
                                                                   _4__this,
                                                                   v633,
                                                                   v634,
                                                                   requiredCost_5__3,
                                                                   (System_Collections_ObjectModel_ReadOnlyCollection_WarBoardAIRoute_RouteData__o *)v635,
                                                                   v1017->fields._servantAndEnemyMasterRange_5__15,
                                                                   0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_648;
              v627 = routeData;
            }
            updated = WarBoardAIRoute__UpdatePiecePlaceData(
                        _4__this,
                        v1017->fields.piecePlaceData,
                        v627,
                        v1017->fields.__7__wrap8.fields._getEnumeratorRetType,
                        *v484,
                        0LL);
            MasterSquareIndexFromPlaceData = WarBoardAIRoute__GetMasterSquareIndexFromPlaceData(_4__this, updated, 0LL);
            v638 = v1017->fields._basePieceActionPieceRouteList_5__22;
            v642 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                    System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo,
                                                    v639,
                                                    v640,
                                                    v641);
            System_Func_object__bool____ctor(
              v642,
              (Il2CppObject *)v477,
              Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__3__,
              0LL);
            v643 = (DefenseAreaData_o *)System_Linq_Enumerable__Any_object__49415960(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)v638,
                                          (System_Func_TSource__bool__o *)v642,
                                          (const MethodInfo_2F20718 *)Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___);
            if ( ((unsigned __int8)v643 & 1) != 0
              || (v647 = v1017->fields._advantagePieceData_5__21,
                  v648 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                          System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo,
                                                          v644,
                                                          v645,
                                                          v646),
                  System_Func_object__bool____ctor(
                    v648,
                    (Il2CppObject *)v477,
                    Method_WarBoardAIRoute___c__DisplayClass47_1__CreateRouteData_b__4__,
                    0LL),
                  v643 = (DefenseAreaData_o *)System_Linq_Enumerable__Any_object__49415960(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)v647,
                                                (System_Func_TSource__bool__o *)v648,
                                                (const MethodInfo_2F20718 *)Method_System_Linq_Enumerable_Any_WarBoardAIRoute_RouteData___),
                  ((unsigned __int8)v643 & 1) != 0) )
            {
              if ( !routeData )
                sub_1BCAA3C(v643, v644);
              routeData->fields.flagNow |= 0x20000000000uLL;
            }
            if ( v1017->fields._masterExists_5__8 )
            {
              if ( v1017->fields._masterSquareIndex_5__4 != MasterSquareIndexFromPlaceData )
                goto LABEL_291;
              if ( !routeData )
                sub_1BCAA3C(v643, v644);
              if ( (routeData->fields.flagNow & 0x400) != 0 )
              {
LABEL_291:
                v652 = WarBoardAIRoute__GetAllyPutSquareIndicesWithoutMaster(
                         _4__this,
                         updated,
                         MasterSquareIndexFromPlaceData,
                         0LL);
                v643 = WarBoardAIRoute__GetDefenseAreaData(_4__this, MasterSquareIndexFromPlaceData, v652, updated, 0LL);
                v649 = v643;
              }
              else
              {
                v649 = v1017->fields._defenseAreaData_5__7;
              }
              if ( !v649 )
                sub_1BCAA3C(v643, v644);
              v653 = _4__this->fields.aiRouteMasterData;
              if ( !v653 )
                sub_1BCAA3C(v643, v644);
              v654 = WarBoardAIRoute__IsAllBlockShortestRouteEnemyAndMastr(
                       v649->fields._ShortestRoutes_k__BackingField,
                       updated,
                       v653->fields.masterType == 1,
                       0LL);
              v655 = routeData;
              if ( v654 )
              {
                if ( !routeData )
                  sub_1BCAA3C(v654, v644);
                routeData->fields.flagNow |= 0x40000000uLL;
              }
              else if ( !routeData )
              {
                sub_1BCAA3C(v654, v644);
              }
              v656 = v655->fields.flagNow;
              if ( (v656 & 0x400) != 0 && (v649->fields._Flag_k__BackingField & 0x10000000000LL) != 0 )
                v655->fields.flagNow = v656 | 0x40000000000LL;
            }
            else
            {
              v655 = routeData;
            }
            v657 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                                  v644,
                                                                  v645,
                                                                  v646);
            System_Collections_Generic_List_object____ctor(
              v657,
              (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
            if ( !v655 )
              sub_1BCAA3C(v658, v659);
            v655->fields.moveByLinkedPiece = (struct System_Collections_Generic_List_WarBoardPieceData__o *)v657;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v655->fields.moveByLinkedPiece,
              (int64_t)v657,
              v660,
              v661,
              v662,
              v663,
              v664,
              v665);
            v670 = routeData;
            if ( !routeData )
              sub_1BCAA3C(v666, v667);
            *(_QWORD *)&routeData->fields.moveByLinkedEnemy = 0LL;
            v671 = (System_Collections_Generic_Dictionary_uint__int__o *)sub_1BCAA2C(
                                                                           System_Collections_Generic_Dictionary_uint__int__TypeInfo,
                                                                           v667,
                                                                           v668,
                                                                           v669);
            System_Collections_Generic_Dictionary_uint__int____ctor(
              v671,
              (const MethodInfo_329432C *)Method_System_Collections_Generic_Dictionary_uint__int___ctor__);
            v670->fields.dicUniqueKeyRange = v671;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v670->fields.dicUniqueKeyRange,
              (int64_t)v671,
              v672,
              v673,
              v674,
              v675,
              v676,
              v677);
            v679 = v1017->fields.piecePlaceData;
            if ( !v679 )
              sub_1BCAA3C(0LL, v678);
            v1001 = updated;
            System_Collections_Generic_Dictionary_int__uint___GetEnumerator(
              &v1003,
              v679,
              (const MethodInfo_3211E50 *)Method_System_Collections_Generic_Dictionary_int__uint__GetEnumerator__);
            *(_OWORD *)&v1010.fields._dictionary = *(_OWORD *)&v1003.fields._dictionary;
            v1010.fields._current = v1003.fields._current;
            while ( 1 )
            {
              v680 = System_Collections_Generic_Dictionary_Enumerator_int__uint___MoveNext(
                       &v1010,
                       (const MethodInfo_3358F6C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__MoveNext__);
              if ( !v680 )
                break;
              v683 = v1017->fields.__8__1;
              if ( !v683 )
                sub_1BCAA3C(v680, v681);
              v684 = v683->fields.basePiece;
              if ( !v684 )
                sub_1BCAA3C(v680, v681);
              key_high = HIDWORD(v1010.fields._current.fields.key);
              if ( v684->fields._uniqueIndex_k__BackingField != HIDWORD(v1010.fields._current.fields.key) )
              {
                if ( !routeData )
                  sub_1BCAA3C(v680, v681);
                v686 = (int32_t)v1010.fields._current.fields.key;
                dicUniqueKeyRange = routeData->fields.dicUniqueKeyRange;
                v688 = *v484;
                if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo, v681);
                v689 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              v688,
                                                                              v686,
                                                                              0,
                                                                              0LL,
                                                                              v682);
                v690 = System_Linq_Enumerable__Count_int_(
                         v689,
                         (const MethodInfo_2F2DBBC *)Method_System_Linq_Enumerable_Count_int___);
                if ( !dicUniqueKeyRange )
                  sub_1BCAA3C(v690, v691);
                System_Collections_Generic_Dictionary_uint__int___Add(
                  dicUniqueKeyRange,
                  key_high,
                  v690,
                  (const MethodInfo_3294CF0 *)Method_System_Collections_Generic_Dictionary_uint__int__Add__);
              }
            }
            System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
              &v1010,
              (const MethodInfo_335906C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
            v695 = (PartyOrganizationUtility_o *)routeData;
            v696 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_List_int__TypeInfo,
                                                               v692,
                                                               v693,
                                                               v694);
            System_Collections_Generic_List_int____ctor(
              v696,
              (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
            if ( !v695 )
              sub_1BCAA3C(v697, v698);
            v695[1].klass = (PartyOrganizationUtility_c *)v696;
            sub_1BCA784(v695 + 1, (int64_t)v696, v699, v700, v701, v702, v703, v704);
            v705 = routeData;
            v709 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1BCAA2C(
                                                                           System_Collections_Generic_Dictionary_int__bool__TypeInfo,
                                                                           v706,
                                                                           v707,
                                                                           v708);
            System_Collections_Generic_Dictionary_int__bool____ctor(
              v709,
              (const MethodInfo_31F6AE8 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
            if ( !v705 )
              sub_1BCAA3C(v710, v711);
            v705->fields.dicMoveByServantGetDesignationItem = v709;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v705->fields.dicMoveByServantGetDesignationItem,
              (int64_t)v709,
              v712,
              v713,
              v714,
              v715,
              v716,
              v717);
            v718 = routeData;
            v722 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                              System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__TypeInfo,
                                                                              v719,
                                                                              v720,
                                                                              v721);
            System_Collections_Generic_Dictionary_int__Int32Enum____ctor(
              v722,
              (const MethodInfo_31FF6B0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType___ctor__);
            if ( !v718 )
              sub_1BCAA3C(v723, v724);
            v718->fields.dicItemIdKeyIsMoveByServantDesignationItemRange = (struct System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__o *)v722;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v718->fields.dicItemIdKeyIsMoveByServantDesignationItemRange,
              (int64_t)v722,
              v725,
              v726,
              v727,
              v728,
              v729,
              v730);
            v733 = routeData;
            if ( !routeData )
              sub_1BCAA3C(v731, v732);
            routeData->fields.isMoveByOutOfWarningArea = 0;
            *(_QWORD *)&v733->fields.isMoveByServantAndEnemyRange = 0LL;
            *(_QWORD *)&v733->fields.isMoveByMasterAndEnemyRange = 0LL;
            *(_QWORD *)&v733->fields.isMoveByServantAndAttackAdvantageServantRange = 0LL;
            *(_QWORD *)&v733->fields.isMoveByServantAndDefenseAdvantageServantRange = 0LL;
            *(_QWORD *)&v733->fields.isMoveByServantAndClassAdvantageServantRange = 0LL;
            v734 = v1017->fields.__8__1;
            if ( !v734 )
              sub_1BCAA3C(v731, v732);
            v735 = v734->fields.basePiece;
            if ( !v735 )
              sub_1BCAA3C(0LL, v732);
            IsBlockShortestRouteEnemyAndMaster = WarBoardPieceData__get_isServant(v735, 0LL);
            if ( IsBlockShortestRouteEnemyAndMaster )
            {
              v740 = v1017;
              if ( v1017->fields._masterExists_5__8 )
              {
                v741 = v1017->fields.__8__1;
                if ( !v741 )
                  sub_1BCAA3C(IsBlockShortestRouteEnemyAndMaster, v737);
                v742 = v741->fields.basePiece;
                if ( !v742 )
                  sub_1BCAA3C(IsBlockShortestRouteEnemyAndMaster, v737);
                v743 = _4__this->fields.aiRouteMasterData;
                if ( !v743 )
                  sub_1BCAA3C(IsBlockShortestRouteEnemyAndMaster, v737);
                if ( v743->fields.masterType != 2
                  || v743->fields.masterPieceIndex != v742->fields._index_k__BackingField )
                {
                  v744 = v1017->fields._defenseAreaData_5__7;
                  if ( !v744 )
                    sub_1BCAA3C(0LL, v737);
                  IsBlockShortestRouteEnemyAndMaster = DefenseAreaData__IsInDefenseArea(v744, *v484, 0LL);
                  if ( IsBlockShortestRouteEnemyAndMaster )
                  {
                    if ( !routeData )
                      sub_1BCAA3C(IsBlockShortestRouteEnemyAndMaster, v737);
                    routeData->fields.flagNow |= 0x4000000000uLL;
                  }
                }
                v745 = v1017->fields.__8__1;
                if ( !v745 )
                  sub_1BCAA3C(IsBlockShortestRouteEnemyAndMaster, v737);
                v746 = v745->fields.basePiece;
                if ( !v746 )
                  sub_1BCAA3C(IsBlockShortestRouteEnemyAndMaster, v737);
                v747 = _4__this->fields.aiRouteMasterData;
                if ( !v747 )
                  sub_1BCAA3C(IsBlockShortestRouteEnemyAndMaster, v737);
                v748 = v747->fields.masterType;
                if ( v748 != 2 || v747->fields.masterPieceIndex != v746->fields._index_k__BackingField )
                {
                  IsBlockShortestRouteEnemyAndMaster = WarBoardAIRoute__IsBlockShortestRouteEnemyAndMaster(
                                                         v1017->fields._defenseAreaData_5__7,
                                                         *v484,
                                                         v748 == 1,
                                                         0LL);
                  if ( IsBlockShortestRouteEnemyAndMaster )
                  {
                    if ( !routeData )
                      sub_1BCAA3C(IsBlockShortestRouteEnemyAndMaster, v737);
                    routeData->fields.flagNow |= 0x100000000uLL;
                  }
                }
                v740 = v1017;
                v749 = v1017->fields.__8__1;
                if ( !v749 )
                  sub_1BCAA3C(IsBlockShortestRouteEnemyAndMaster, v737);
                v750 = v749->fields.basePiece;
                if ( !v750 )
                  sub_1BCAA3C(IsBlockShortestRouteEnemyAndMaster, v737);
                v751 = _4__this->fields.aiRouteMasterData;
                if ( !v751 )
                  sub_1BCAA3C(IsBlockShortestRouteEnemyAndMaster, v737);
                if ( v751->fields.masterType != 2
                  || v751->fields.masterPieceIndex != v750->fields._index_k__BackingField )
                {
                  v752 = *v484;
                  if ( *v484 == MasterSquareIndexFromPlaceData )
                  {
                    if ( !routeData )
                      sub_1BCAA3C(IsBlockShortestRouteEnemyAndMaster, v737);
                    routeData->fields.isMoveByServantAndMasterRange = 2;
                  }
                  else
                  {
                    if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo, v737);
                    v753 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                                  0LL,
                                                                                  v752,
                                                                                  MasterSquareIndexFromPlaceData,
                                                                                  0,
                                                                                  0LL,
                                                                                  v739);
                    v754 = System_Linq_Enumerable__Count_int_(
                             v753,
                             (const MethodInfo_2F2DBBC *)Method_System_Linq_Enumerable_Count_int___);
                    v755 = routeData;
                    v756 = WarBoardAIRoute__CalcurateDistanceType(v754, v1017->fields._tmpFlagNow_5__12, 0LL);
                    if ( !v755 )
                      sub_1BCAA3C(v756, v737);
                    v755->fields.isMoveByServantAndMasterRange = v756;
                    v740 = v1017;
                  }
                }
              }
              v757 = *(System_Collections_Generic_Dictionary_int__int__o **)&v740->fields._sumPieceActionCost_5__17;
              if ( !v757 )
                sub_1BCAA3C(0LL, v737);
              System_Collections_Generic_Dictionary_int__int___GetEnumerator(
                &v1003,
                v757,
                (const MethodInfo_31FD64C *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
              v1008 = *(_OWORD *)&v1003.fields._dictionary;
              v1009 = v1003.fields._current;
              while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
                        (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v1008,
                        (const MethodInfo_3354DA0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
              {
                v760 = (int32_t)v1009.fields.key;
                v761 = HIDWORD(v1009.fields.key);
                v762 = *v484;
                if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo, v758);
                v763 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              v762,
                                                                              v760,
                                                                              0,
                                                                              0LL,
                                                                              v759);
                v764 = System_Linq_Enumerable__Count_int_(
                         v763,
                         (const MethodInfo_2F2DBBC *)Method_System_Linq_Enumerable_Count_int___);
                if ( !routeData )
                  sub_1BCAA3C(v764, v765);
                dicItemIdKeyIsMoveByServantDesignationItemRange = (System_Collections_Generic_Dictionary_TKey__TValue__o *)routeData->fields.dicItemIdKeyIsMoveByServantDesignationItemRange;
                v767 = WarBoardAIRoute__CalcurateDistanceType(v764, v761, 0LL);
                if ( !dicItemIdKeyIsMoveByServantDesignationItemRange )
                  sub_1BCAA3C(v767, v768);
                System_Collections_Generic_Dictionary_int__Int32Enum___set_Item(
                  dicItemIdKeyIsMoveByServantDesignationItemRange,
                  v760,
                  v767,
                  (const MethodInfo_3200060 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_DistanceType__set_Item__);
                if ( !routeData )
                  sub_1BCAA3C(v769, v770);
                dicMoveByServantGetDesignationItem = routeData->fields.dicMoveByServantGetDesignationItem;
                if ( !dicMoveByServantGetDesignationItem )
                  sub_1BCAA3C(0LL, v770);
                System_Collections_Generic_Dictionary_int__bool___Add(
                  dicMoveByServantGetDesignationItem,
                  v760,
                  *v484 == v760,
                  (const MethodInfo_31F74C0 *)Method_System_Collections_Generic_Dictionary_int__bool__Add__);
                if ( !routeData )
                  sub_1BCAA3C(v772, v773);
                listExistDesignationItem = routeData->fields.listExistDesignationItem;
                if ( !listExistDesignationItem )
                  sub_1BCAA3C(0LL, v773);
                items = listExistDesignationItem->fields._items;
                v776 = Method_System_Collections_Generic_List_int__Add__;
                ++listExistDesignationItem->fields._version;
                if ( !items )
                  sub_1BCAA3C(listExistDesignationItem, v773);
                size = listExistDesignationItem->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    listExistDesignationItem,
                    v760,
                    *(const MethodInfo_3584C38 **)(*(_QWORD *)(v776[4] + 192LL) + 112LL));
                }
                else
                {
                  listExistDesignationItem->fields._size = size + 1;
                  items->m_Items[size + 1] = v760;
                }
              }
              System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
                (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v1008,
                (const MethodInfo_3354EA0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
              v780 = *v484;
              enemyMasterSquareIndex = _4__this->fields.enemyMasterSquareIndex;
              if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo, v778);
              v782 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                            0LL,
                                                                            v780,
                                                                            enemyMasterSquareIndex,
                                                                            0,
                                                                            0LL,
                                                                            v779);
              v783 = System_Linq_Enumerable__Count_int_(
                       v782,
                       (const MethodInfo_2F2DBBC *)Method_System_Linq_Enumerable_Count_int___);
              v784 = routeData;
              v785 = WarBoardAIRoute__CalcurateDistanceType(v783, v1017->fields._servantAndMasterRange_5__13, 0LL);
              if ( !v784 )
                sub_1BCAA3C(v785, v786);
              v784->fields.isMoveByServantAndEnemyMasterRange = v785;
              v788 = routeData;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v786);
              if ( !byte_4B13CDC )
              {
                sub_1BCA7E0(&WarBoardAIManager_TypeInfo, v786, v787);
                byte_4B13CDC = 1;
              }
              v789 = WarBoardAIManager_TypeInfo;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v786);
                v789 = WarBoardAIManager_TypeInfo;
              }
              v790 = WarBoardAIRoute__CompareBaseRangeToActionRange(
                       v789->static_fields->dicSquareIndexEnemyPiece,
                       HIDWORD(v1017->fields._tmpFlagNow_5__12),
                       *v484,
                       0LL);
              if ( !v788 )
                sub_1BCAA3C(v790, v791);
              v788->fields.isMoveByServantAndEnemyRange = v790;
              WarBoardAIRoute__ClassAdvantageDistance(
                _4__this,
                &routeData,
                (WarBoardAIRoute_AdvantagePieceData_o *)v1017->fields._dicEnemyRange_5__20,
                *v484,
                0LL);
            }
            v792 = _4__this->fields.aiRouteMasterData;
            if ( !v792 )
              sub_1BCAA3C(IsBlockShortestRouteEnemyAndMaster, v737);
            if ( v792->fields.masterType )
            {
LABEL_486:
              if ( v792->fields.masterType == 2 )
              {
                v795 = v1017->fields.__8__1;
                if ( !v795 )
                  sub_1BCAA3C(IsBlockShortestRouteEnemyAndMaster, v737);
                v796 = v795->fields.basePiece;
                if ( !v796 )
                  sub_1BCAA3C(IsBlockShortestRouteEnemyAndMaster, v737);
                if ( v796->fields._index_k__BackingField == v792->fields.masterPieceIndex )
                  goto LABEL_490;
              }
            }
            else
            {
              v793 = v1017->fields.__8__1;
              if ( !v793 )
                sub_1BCAA3C(IsBlockShortestRouteEnemyAndMaster, v737);
              v794 = v793->fields.basePiece;
              if ( !v794 )
                sub_1BCAA3C(0LL, v737);
              IsBlockShortestRouteEnemyAndMaster = WarBoardPieceData__get_isMaster(v794, 0LL);
              if ( !IsBlockShortestRouteEnemyAndMaster )
              {
                v792 = _4__this->fields.aiRouteMasterData;
                if ( !v792 )
                  sub_1BCAA3C(IsBlockShortestRouteEnemyAndMaster, v737);
                goto LABEL_486;
              }
LABEL_490:
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v737);
              if ( !byte_4B13CDC )
              {
                sub_1BCA7E0(&WarBoardAIManager_TypeInfo, v737, v738);
                byte_4B13CDC = 1;
              }
              v797 = WarBoardAIManager_TypeInfo;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v737);
                v797 = WarBoardAIManager_TypeInfo;
              }
              dicSquareIndexEnemyPiece = (System_Collections_Generic_Dictionary_int__object__o *)v797->static_fields->dicSquareIndexEnemyPiece;
              if ( !dicSquareIndexEnemyPiece )
                sub_1BCAA3C(0LL, v737);
              Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
                       dicSquareIndexEnemyPiece,
                       (const MethodInfo_3205BA4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__get_Keys__);
              if ( !Keys )
                sub_1BCAA3C(0LL, v800);
              System_Collections_Generic_Dictionary_KeyCollection_int__object___GetEnumerator(
                (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&v1003,
                Keys,
                (const MethodInfo_34BD578 *)Method_System_Collections_Generic_Dictionary_KeyCollection_int__WarBoardPieceData__GetEnumerator__);
              *(_OWORD *)&v1007.fields._dictionary = *(_OWORD *)&v1003.fields._dictionary;
              v1007.fields._currentKey = v1003.fields._current.fields.key;
              while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___MoveNext(
                        &v1007,
                        (const MethodInfo_33571EC *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__MoveNext__) )
              {
                currentKey = (int32_t)v1007.fields._currentKey;
                v804 = *v484;
                if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo, v801);
                v805 = AStarSearch__RouteSearch(0LL, v804, currentKey, 0, 0LL, v802);
                if ( !v805 )
                  sub_1BCAA3C(0LL, v806);
                v807 = _4__this->fields.npcData;
                if ( !v807 )
                  sub_1BCAA3C(v805, v806);
                if ( (signed int)(v805->max_length - 1) <= v807->fields.defenseArea )
                {
                  if ( !routeData )
                    sub_1BCAA3C(v805, v806);
                  routeData->fields.flagNow |= 0x8000000000uLL;
                  break;
                }
              }
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose(
                &v1007,
                (const MethodInfo_33571E8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__WarBoardPieceData__Dispose__);
              v810 = routeData;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v808);
              if ( !byte_4B13CDC )
              {
                sub_1BCA7E0(&WarBoardAIManager_TypeInfo, v808, v809);
                byte_4B13CDC = 1;
              }
              v811 = WarBoardAIManager_TypeInfo;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v808);
                v811 = WarBoardAIManager_TypeInfo;
              }
              v812 = v1017->fields._defenseAreaData_5__7;
              if ( !v812 )
                sub_1BCAA3C(v811, v808);
              v813 = WarBoardAIRoute__CompareBaseRangeToActionRange(
                       v811->static_fields->dicSquareIndexEnemyPiece,
                       v812->fields._MasterAndEnemyRange_k__BackingField,
                       *v484,
                       0LL);
              if ( !v810 )
                sub_1BCAA3C(v813, v814);
              v810->fields.isMoveByMasterAndEnemyRange = v813;
              if ( !byte_4B13CDC )
              {
                sub_1BCA7E0(&WarBoardAIManager_TypeInfo, v814, v815);
                byte_4B13CDC = 1;
              }
              v816 = WarBoardAIManager_TypeInfo;
              if ( !WarBoardAIManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo, v814);
                v816 = WarBoardAIManager_TypeInfo;
              }
              v817 = (System_Collections_Generic_Dictionary_int__object__o *)v816->static_fields->dicSquareIndexEnemyPiece;
              if ( !v817 )
                sub_1BCAA3C(0LL, v814);
              System_Collections_Generic_Dictionary_int__object___GetEnumerator(
                &v1003,
                v817,
                (const MethodInfo_320631C *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__GetEnumerator__);
              v1006 = v1003;
              do
              {
                v820 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                         &v1006,
                         (const MethodInfo_335671C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__MoveNext__);
                if ( !v820 )
                  break;
                v821 = (int32_t)v1006.fields._current.fields.key;
                v822 = *v484;
                if ( !AStarSearch_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo, v818);
                v823 = (System_Collections_Generic_IEnumerable_TSource__o *)AStarSearch__RouteSearch(
                                                                              0LL,
                                                                              v822,
                                                                              v821,
                                                                              0,
                                                                              0LL,
                                                                              v819);
                System_Linq_Enumerable__Count_int_(
                  v823,
                  (const MethodInfo_2F2DBBC *)Method_System_Linq_Enumerable_Count_int___);
              }
              while ( WarBoardAIRoute__IsDetour((System_Int32_array *)v823, v1017->fields._allyPieceIndexs_5__5, 0LL) );
              System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
                &v1006,
                (const MethodInfo_3356840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__WarBoardPieceData__Dispose__);
              if ( !v820 )
              {
                if ( !routeData )
                  sub_1BCAA3C(IsBlockShortestRouteEnemyAndMaster, v737);
                routeData->fields.flagNow |= 0x1000000000uLL;
              }
            }
            v824 = routeData;
            if ( !routeData )
              sub_1BCAA3C(IsBlockShortestRouteEnemyAndMaster, v737);
            v825 = v1001;
            if ( !routeData->fields.actionPiece || (routeData->fields.flagNow & 0x4000000) != 0 )
            {
              v826 = v1017->fields._warBoardData_5__2;
              if ( !v826 )
                sub_1BCAA3C(0LL, v737);
              Effect = WarBoardData__GetEffect(v826, *v484, v738);
              if ( Effect )
              {
                if ( !routeData )
                  sub_1BCAA3C(Effect, v828);
                routeData->fields.flagNow |= 0x200000000uLL;
              }
              v831 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                                 System_Collections_Generic_List_int__TypeInfo,
                                                                 v828,
                                                                 v829,
                                                                 v830);
              System_Collections_Generic_List_int____ctor(
                v831,
                (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
              v833 = (System_Collections_Generic_List_object__o *)v1017->fields.routeDataList;
              if ( !v833 )
                sub_1BCAA3C(0LL, v832);
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v1003,
                v833,
                (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__GetEnumerator__);
              *(_OWORD *)&v1014.fields._list = *(_OWORD *)&v1003.fields._dictionary;
              v1014.fields._current = v1003.fields._current.fields.key;
              while ( 1 )
              {
                v834 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                         &v1014,
                         (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__MoveNext__);
                if ( !v834 )
                  break;
                v836 = v1014.fields._current;
                if ( !v1014.fields._current )
                  sub_1BCAA3C(v834, v835);
                if ( (BYTE3(v1014.fields._current[1].klass) & 8) != 0 )
                {
                  v837 = v1014.fields._current[3].klass;
                  if ( !v837 )
                    sub_1BCAA3C(0LL, v835);
                  v838 = WarBoardPieceData__get_isServant((WarBoardPieceData_o *)v837, 0LL);
                  if ( v838 )
                  {
                    if ( !v831 )
                      sub_1BCAA3C(v838, monitor_high);
                    monitor_high = HIDWORD(v836[1].monitor);
                    v840 = v831->fields._items;
                    v841 = Method_System_Collections_Generic_List_int__Add__;
                    ++v831->fields._version;
                    if ( !v840 )
                      sub_1BCAA3C(v838, monitor_high);
                    v842 = v831->fields._size;
                    if ( (unsigned int)v842 >= v840->max_length )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        v831,
                        monitor_high,
                        *(const MethodInfo_3584C38 **)(*(_QWORD *)(v841[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v831->fields._size = v842 + 1;
                      v840->m_Items[v842 + 1] = monitor_high;
                    }
                  }
                  if ( (BYTE3(v836[1].klass) & 4) != 0 )
                  {
                    v843 = (WarBoardPieceData_o *)v836[3].klass;
                    if ( !v843 )
                      sub_1BCAA3C(0LL, monitor_high);
                    if ( WarBoardPieceData__get_isMaster(v843, 0LL) )
                    {
                      v845 = (WarBoardPieceData_o *)v836[3].monitor;
                      if ( !v845 )
                        sub_1BCAA3C(0LL, v844);
                      v846 = WarBoardPieceData__get_isServant(v845, 0LL);
                      if ( v846 )
                      {
                        if ( !v831 )
                          sub_1BCAA3C(v846, v847);
                        monitor_low = LODWORD(v836[1].monitor);
                        v849 = v831->fields._items;
                        v850 = Method_System_Collections_Generic_List_int__Add__;
                        ++v831->fields._version;
                        if ( !v849 )
                          sub_1BCAA3C(v846, monitor_low);
                        v851 = v831->fields._size;
                        if ( (unsigned int)v851 >= v849->max_length )
                        {
                          System_Collections_Generic_List_int___AddWithResize(
                            v831,
                            monitor_low,
                            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v850[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v831->fields._size = v851 + 1;
                          v849->m_Items[v851 + 1] = monitor_low;
                        }
                      }
                    }
                  }
                }
              }
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v1014,
                (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_WarBoardAIRoute_RouteData__Dispose__);
              if ( !routeData )
                sub_1BCAA3C(v852, v853);
              v854 = routeData->fields.basePiece;
              if ( !v854 )
                sub_1BCAA3C(0LL, v853);
              v855 = WarBoardPieceData__get_isServant(v854, 0LL);
              if ( v855 )
              {
                if ( !routeData )
                  sub_1BCAA3C(v855, v856);
                CanAcquireItem = WarBoardAIRoute__CanAcquireItem(_4__this, routeData->fields.actionIndex, v831, 0LL);
                if ( CanAcquireItem )
                {
                  v859 = routeData;
                  if ( !routeData )
                    sub_1BCAA3C(CanAcquireItem, v858);
                  v860 = routeData->fields.flagNow | 0x18000000;
                  goto LABEL_596;
                }
              }
              else
              {
                if ( !routeData )
                  sub_1BCAA3C(v855, v856);
                v861 = routeData->fields.basePiece;
                if ( !v861 )
                  sub_1BCAA3C(0LL, v856);
                isMaster = WarBoardPieceData__get_isMaster(v861, 0LL);
                if ( isMaster )
                {
                  if ( !routeData )
                    sub_1BCAA3C(isMaster, v863);
                  v864 = WarBoardAIRoute__CanAcquireItem(_4__this, routeData->fields.actionIndex, v831, 0LL);
                  v866 = routeData;
                  if ( v864 )
                  {
                    if ( !routeData )
                      sub_1BCAA3C(v864, v865);
                    routeData->fields.flagNow |= 0x10000000uLL;
                  }
                  else if ( !routeData )
                  {
                    sub_1BCAA3C(v864, v865);
                  }
                  if ( (v866->fields.flagNow & 0x4000000) != 0 )
                  {
                    v867 = v866->fields.actionPiece;
                    if ( !v867 )
                      sub_1BCAA3C(0LL, v865);
                    v868 = WarBoardPieceData__get_isServant(v867, 0LL);
                    if ( v868 )
                    {
                      if ( !routeData )
                        sub_1BCAA3C(v868, v869);
                      v870 = WarBoardAIRoute__CanAcquireItem(_4__this, routeData->fields.baseIndex, v831, 0LL);
                      if ( v870 )
                      {
                        v859 = routeData;
                        if ( !routeData )
                          sub_1BCAA3C(v870, v871);
                        v860 = routeData->fields.flagNow | 0x8000000;
LABEL_596:
                        v859->fields.flagNow = v860;
                      }
                    }
                  }
                }
              }
              WarBoardAIRoute__LinkedPieceCount(_4__this, &routeData, v1001, v831, 0LL);
              v824 = routeData;
              if ( !routeData )
                sub_1BCAA3C(v872, v873);
            }
            FlagOutOfWarningAreaToDistance = WarBoardAIRoute__GetFlagOutOfWarningAreaToDistance(
                                               _4__this,
                                               v824->fields.baseIndex,
                                               v824->fields.actionIndex,
                                               0LL);
            v824->fields.isMoveByOutOfWarningArea = FlagOutOfWarningAreaToDistance;
            v876 = routeData;
            if ( !routeData )
              sub_1BCAA3C(FlagOutOfWarningAreaToDistance, v875);
            evalOffsetMagnification = routeData->fields.evalOffsetMagnification;
            if ( !evalOffsetMagnification )
              sub_1BCAA3C(FlagOutOfWarningAreaToDistance, v875);
            evalOffsetMagnification->fields.isAttack = (routeData->fields.flagNow & 2) != 0;
            v878 = v876->fields.basePiece;
            if ( !v878 )
              sub_1BCAA3C(FlagOutOfWarningAreaToDistance, v875);
            piecePersonalityDic = (System_Collections_Generic_Dictionary_int__object__o *)_4__this->fields.piecePersonalityDic;
            if ( !piecePersonalityDic )
              sub_1BCAA3C(0LL, v875);
            this = (WarBoardAIRoute__CreateRouteData_d__47_o *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                                                 piecePersonalityDic,
                                                                 v878->fields._index_k__BackingField,
                                                                 &value,
                                                                 (const MethodInfo_3207670 *)Method_System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__TryGetValue__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v880 = value;
              v881 = (WarBoardAIEvalCalcurater_o *)sub_1BCAA2C(WarBoardAIEvalCalcurater_TypeInfo, method, v2, v3);
              WarBoardAIEvalCalcurater___ctor(v881, (WarBoardAIRoute_PiecePersonality_o *)v880, 0LL);
              if ( !v881 )
                sub_1BCAA3C(v882, v883);
              WarBoardAIEvalCalcurater__CalcRatingOffsetReviewCondition(v881, &routeData, 0LL);
              WarBoardAIEvalCalcurater__CalcRatingOffsetAddCondition(
                v881,
                &routeData,
                _4__this->fields.averageBenefitValue,
                0LL);
              if ( !routeData )
                sub_1BCAA3C(0LL, v884);
              WarBoardAIRoute_RouteData__CalcEvalValue(routeData, v884);
              v888 = WarBoardAIRoute___c_TypeInfo;
              v889 = v1017->fields.routeDataList;
              if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo, v885);
                v888 = WarBoardAIRoute___c_TypeInfo;
              }
              _9__47_5 = (System_Func_object__object__o *)v888->static_fields->__9__47_5;
              if ( !_9__47_5 )
              {
                if ( !v888->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v888, v885);
                  v888 = WarBoardAIRoute___c_TypeInfo;
                  v825 = v1001;
                }
                v891 = (Il2CppObject *)v888->static_fields->__9;
                _9__47_5 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                              System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__TypeInfo,
                                                              v885,
                                                              v886,
                                                              v887);
                System_Func_object__object____ctor(
                  _9__47_5,
                  v891,
                  Method_WarBoardAIRoute___c__CreateRouteData_b__47_5__,
                  0LL);
                v892 = WarBoardAIRoute___c_TypeInfo->static_fields;
                v892->__9__47_5 = (struct System_Func_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData__o *)_9__47_5;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)&v892->__9__47_5,
                  (int64_t)_9__47_5,
                  v893,
                  v894,
                  v895,
                  v896,
                  v897,
                  v898);
              }
              v899 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                                      (System_Collections_Generic_IEnumerable_TSource__o *)v889,
                                                                      (System_Func_TSource__TResult__o *)_9__47_5,
                                                                      (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_WarBoardAIRoute_RouteData__WarBoardAIRoute_RouteData___);
              v903 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                    System_Collections_Generic_List_WarBoardAIRoute_RouteData__TypeInfo,
                                                                    v900,
                                                                    v901,
                                                                    v902);
              System_Collections_Generic_List_object____ctor_56235344(
                v903,
                v899,
                (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData___ctor___76814768);
              if ( !v903 )
                sub_1BCAA3C(v904, v905);
              v912 = (Il2CppObject *)routeData;
              v913 = v903->fields._items;
              v914 = Method_System_Collections_Generic_List_WarBoardAIRoute_RouteData__Add__;
              ++v903->fields._version;
              if ( !v913 )
                sub_1BCAA3C(v904, v912);
              v915 = v903->fields._size;
              if ( (unsigned int)v915 >= v913->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v903,
                  v912,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v914[4] + 192LL) + 112LL));
              }
              else
              {
                v916 = &v913->obj.klass + v915;
                v903->fields._size = v915 + 1;
                v916[4] = (Il2CppClass *)v912;
                sub_1BCA784((PartyOrganizationUtility_o *)(v916 + 4), (int64_t)v912, v906, v907, v908, v909, v910, v911);
              }
              v917 = (WarBoardAIRoute_RouteData_o *)BasicHelper__IndexValue_object__49289180(
                                                      (System_Collections_Generic_List_T__o *)v903,
                                                      v903->fields._size - 2,
                                                      0LL,
                                                      (const MethodInfo_2F017DC *)Method_BasicHelper_IndexValue_WarBoardAIRoute_RouteData___);
              route = v917;
              if ( v917 )
              {
                v919 = routeData;
                if ( !routeData )
                  sub_1BCAA3C(v917, v918);
                if ( routeData->fields.basePiece == v917->fields.basePiece )
                {
                  WarBoardAIEvalCalcurater__CalcRatingOffsetReviewConditionForFutureActionTrend(
                    v881,
                    &route,
                    routeData,
                    0LL);
                  if ( !route )
                    sub_1BCAA3C(0LL, v925);
                  WarBoardAIRoute_RouteData__CalcEvalValue(route, v925);
                }
              }
              allRouteList = (System_Collections_Generic_List_object__o *)_4__this->fields.allRouteList;
              if ( !allRouteList )
                sub_1BCAA3C(0LL, v918);
              v927 = allRouteList->fields._items;
              v928 = Method_System_Collections_Generic_List_List_WarBoardAIRoute_RouteData___Add__;
              ++allRouteList->fields._version;
              if ( !v927 )
                sub_1BCAA3C(allRouteList, v918);
              v929 = allRouteList->fields._size;
              if ( (unsigned int)v929 >= v927->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  allRouteList,
                  (Il2CppObject *)v903,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v928[4] + 192LL) + 112LL));
              }
              else
              {
                v930 = &v927->obj.klass + v929;
                allRouteList->fields._size = v929 + 1;
                v930[4] = (Il2CppClass *)v903;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)(v930 + 4),
                  (int64_t)v903,
                  (int64_t)v919,
                  v920,
                  v921,
                  v922,
                  v923,
                  v924);
              }
              if ( !routeData )
                sub_1BCAA3C(this, method);
              if ( routeData->fields.baseIndex != routeData->fields.actionIndex && (routeData->fields.flagNow & 2) == 0 )
              {
                searchCount = v1017->fields.searchCount;
                if ( searchCount != 1 )
                {
                  v993 = (Il2CppObject *)WarBoardAIRoute__CreateRouteData(
                                           _4__this,
                                           v825,
                                           searchCount,
                                           (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v903,
                                           0LL);
                  v994 = v1017;
                  v1017->fields.__2__current = v993;
                  sub_1BCA784(
                    (PartyOrganizationUtility_o *)&v994->fields.__2__current,
                    (int64_t)v993,
                    v995,
                    v996,
                    v997,
                    v998,
                    v999,
                    v1000);
                  result = 1;
                  v1017->fields.__1__state = 1;
                  return result;
                }
                dictionaryCreateRouteDataEvalValue = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
                v933 = (Il2CppObject *)WarBoardAIRoute__CreateRouteData(
                                         _4__this,
                                         v825,
                                         1,
                                         (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v903,
                                         0LL);
                if ( !routeData )
                  sub_1BCAA3C(v933, v933);
                if ( !dictionaryCreateRouteDataEvalValue )
                  sub_1BCAA3C(v933, v933);
                System_Collections_Generic_Dictionary_object__float___Add(
                  dictionaryCreateRouteDataEvalValue,
                  v933,
                  routeData->fields.evalValue,
                  (const MethodInfo_326E434 *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__Add__);
              }
            }
            goto LABEL_648;
          }
        }
        WarBoardAIRoute__CreateRouteData_d__47____m__Finally1(v1017, v252);
        v404 = v1017;
        v405 = v1017->fields.searchCount;
        v1017->fields.__7__wrap8.fields._current = 0u;
        *(_OWORD *)&v404->fields.__7__wrap8.fields._dictionary = 0u;
        if ( v405 != 1 )
          return 0;
        if ( !_4__this )
          sub_1BCAA3C(v400, v401);
        v406 = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
        v407 = WarBoardAIRoute___c_TypeInfo;
        if ( !WarBoardAIRoute___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIRoute___c_TypeInfo, v401);
          v407 = WarBoardAIRoute___c_TypeInfo;
        }
        _9__47_6 = (System_Func_T__TResult__o *)v407->static_fields->__9__47_6;
        if ( !_9__47_6 )
        {
          if ( !v407->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v407, v401);
            v407 = WarBoardAIRoute___c_TypeInfo;
          }
          v409 = (Il2CppObject *)v407->static_fields->__9;
          _9__47_6 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                                    System_Func_KeyValuePair_IEnumerator__float___float__TypeInfo,
                                                    v401,
                                                    v402,
                                                    v403);
          System_Func_KeyValuePair_object__float___float____ctor(
            _9__47_6,
            v409,
            Method_WarBoardAIRoute___c__CreateRouteData_b__47_6__,
            0LL);
          v410 = WarBoardAIRoute___c_TypeInfo->static_fields;
          v410->__9__47_6 = (struct System_Func_KeyValuePair_IEnumerator__float___float__o *)_9__47_6;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v410->__9__47_6,
            (int64_t)_9__47_6,
            v411,
            v412,
            v413,
            v414,
            v415,
            v416);
        }
        v418 = System_Linq_Enumerable__OrderByDescending_KeyValuePair_object__float___float_(
                 v406,
                 (System_Func_TSource__TKey__o *)_9__47_6,
                 (const MethodInfo_2F3B6A8 *)Method_System_Linq_Enumerable_OrderByDescending_KeyValuePair_IEnumerator__float___float___);
        v1017->fields._servantAndEnemyMasterRange_5__15 = 0;
        v419 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)_4__this->fields.dictionaryCreateRouteDataEvalValue;
        if ( !v419 )
          sub_1BCAA3C(0LL, v417);
        Count = System_Collections_Generic_Dictionary_object__float___get_Count(
                  v419,
                  (const MethodInfo_326E104 *)Method_System_Collections_Generic_Dictionary_IEnumerator__float__get_Count__);
        v422 = _4__this->fields.npcData;
        if ( !v422 )
          sub_1BCAA3C(Count, v421);
        v423 = v1017;
        v424 = (float)((float)v422->fields.calcEllipsis / 100.0) * (float)(int)Count;
        v425 = (int)v424;
        if ( v424 == INFINITY )
          v425 = 0x80000000;
        v1017->fields._servantAndEnemyRange_5__14 = v425;
        calcEllipsisMin = v422->fields.calcEllipsisMin;
        if ( calcEllipsisMin <= v425 )
          calcEllipsisMin = v425;
        v423->fields._servantAndEnemyRange_5__14 = calcEllipsisMin;
        if ( !v418 )
          sub_1BCAA3C(Count, v421);
        v427 = v418->klass;
        v428 = *(unsigned __int16 *)(&v418->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v418->klass->_2.bitflags2 + 3) )
        {
          p_offset = &v427->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo )
          {
            --v428;
            p_offset += 4;
            if ( !v428 )
              goto LABEL_112;
          }
          p_method = (__int64)&v427->vtable[*p_offset].method;
        }
        else
        {
LABEL_112:
          p_method = sub_1C1C7C0(
                       v418,
                       System_Collections_Generic_IEnumerable_KeyValuePair_IEnumerator__float___TypeInfo,
                       0LL);
        }
        v431 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
                 v418,
                 *(_QWORD *)(p_method + 8));
        v432 = (PartyOrganizationUtility_o *)&v1017->fields.__7__wrap24;
        *(_QWORD *)&v1017->fields.__7__wrap24 = v431;
        sub_1BCA784(v432, v431, v433, v434, v435, v436, v437, v438);
        v8 = v1017;
        v1017->fields.__1__state = -4;
        goto LABEL_117;
      }
    }
    else
    {
      v226 = _4__this->fields.aiRouteMasterData;
      if ( !v226 )
        sub_1BCAA3C(v221, v222);
      if ( v1017 )
      {
        v227 = v226->fields.masterType;
        v1017->fields._masterExists_5__8 = v227 != 3;
        if ( v227 == 3 )
          goto LABEL_29;
        goto LABEL_25;
      }
    }
    sub_1BCAA3C(v221, v222);
  }
  return result;
}


Il2CppObject *__fastcall WarBoardAIRoute__CreateRouteData_d__47__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardAIRoute__CreateRouteData_d__47_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn WarBoardAIRoute__CreateRouteData_d__47__System_Collections_IEnumerator_Reset(
        WarBoardAIRoute__CreateRouteData_d__47_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_WarBoardAIRoute__CreateRouteData_d__47_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall WarBoardAIRoute__CreateRouteData_d__47__System_Collections_IEnumerator_get_Current(
        WarBoardAIRoute__CreateRouteData_d__47_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall WarBoardAIRoute__CreateRouteData_d__47__System_IDisposable_Dispose(
        WarBoardAIRoute__CreateRouteData_d__47_o *this,
        const MethodInfo *method)
{
  switch ( this->fields.__1__state )
  {
    case 0xFFFFFFFC:
    case 2:
      WarBoardAIRoute__CreateRouteData_d__47____m__Finally2(this, method);
      break;
    case 0xFFFFFFFD:
    case 1:
      WarBoardAIRoute__CreateRouteData_d__47____m__Finally1(this, method);
      break;
    default:
      return;
  }
}


void __fastcall WarBoardAIRoute__CreateRouteData_d__47____m__Finally1(
        WarBoardAIRoute__CreateRouteData_d__47_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B13DDF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__, method, v2);
    byte_4B13DDF = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_int__uint___Dispose(
    &this->fields.__7__wrap8,
    (const MethodInfo_335906C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__uint__Dispose__);
}


void __fastcall WarBoardAIRoute__CreateRouteData_d__47____m__Finally2(
        WarBoardAIRoute__CreateRouteData_d__47_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 *v4; // x19
  __int64 v5; // x8
  __int64 v6; // x9
  int *v7; // x10
  __int64 v8; // x0

  if ( (byte_4B13DE0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IDisposable_TypeInfo, method, v2);
    byte_4B13DE0 = 1;
  }
  v4 = *(__int64 **)&this->fields.__7__wrap24;
  this->fields.__1__state = -1;
  if ( v4 )
  {
    v5 = *v4;
    v6 = *(unsigned __int16 *)(*v4 + 302);
    if ( *(_WORD *)(*v4 + 302) )
    {
      v7 = (int *)(*(_QWORD *)(v5 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v7 - 1) != System_IDisposable_TypeInfo )
      {
        --v6;
        v7 += 4;
        if ( !v6 )
          goto LABEL_8;
      }
      v8 = v5 + 16LL * *v7 + 312;
    }
    else
    {
LABEL_8:
      v8 = sub_1C1C7C0(v4, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64 *, _QWORD))v8)(v4, *(_QWORD *)(v8 + 8));
  }
}


void __fastcall WarBoardAIRoute___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B13DD0 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardAIRoute___c_TypeInfo, v1, v2);
    byte_4B13DD0 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(WarBoardAIRoute___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  WarBoardAIRoute___c_TypeInfo->static_fields->__9 = (struct WarBoardAIRoute___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarBoardAIRoute___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall WarBoardAIRoute___c___ctor(WarBoardAIRoute___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIRoute___c___BeforeCreateRouteData_b__45_0(
        WarBoardAIRoute___c_o *this,
        IWarBoardObjectData_o *x,
        const MethodInfo *method)
{
  IWarBoardObjectData_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4B13DD1 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c_o *)sub_1BCA7E0(&IWarBoardObjectData_TypeInfo, x, method);
    byte_4B13DD1 = 1;
  }
  if ( !x )
    sub_1BCAA3C(this, x);
  klass = x->klass;
  v5 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)p_offset - 1) != IWarBoardObjectData_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 2].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(x, IWarBoardObjectData_TypeInfo, 2LL);
  }
  return (*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8));
}


int64_t __fastcall WarBoardAIRoute___c___CreateRouteData_b__47_1(
        WarBoardAIRoute___c_o *this,
        System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__o x,
        const MethodInfo *method)
{
  int64_t key; // x19

  key = x.fields.key;
  if ( (byte_4B13DD2 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Key__,
      x.fields.key,
      x.fields.value);
    byte_4B13DD2 = 1;
  }
  return key;
}


WarBoardAIRoute_TargetData_o *__fastcall WarBoardAIRoute___c___CreateRouteData_b__47_2(
        WarBoardAIRoute___c_o *this,
        System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__o x,
        const MethodInfo *method)
{
  WarBoardAIRoute_TargetData_o *value; // x19

  value = x.fields.value;
  if ( (byte_4B13DD3 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_long__WarBoardAIRoute_TargetData__get_Value__,
      x.fields.key,
      x.fields.value);
    byte_4B13DD3 = 1;
  }
  return WarBoardAIRoute_TargetData__Clone(value, (const MethodInfo *)x.fields.key);
}


WarBoardAIRoute_RouteData_o *__fastcall WarBoardAIRoute___c___CreateRouteData_b__47_5(
        WarBoardAIRoute___c_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return WarBoardAIRoute_RouteData__ShallowCopy(x, (const MethodInfo *)x);
}


float __fastcall WarBoardAIRoute___c___CreateRouteData_b__47_6(
        WarBoardAIRoute___c_o *this,
        System_Collections_Generic_KeyValuePair_IEnumerator__float__o x,
        const MethodInfo *method)
{
  float value; // w19

  value = x.fields.value;
  if ( (byte_4B13DD4 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_IEnumerator__float__get_Value__,
      x.fields.key,
      *(_QWORD *)&x.fields.value);
    byte_4B13DD4 = 1;
  }
  return value;
}


int32_t __fastcall WarBoardAIRoute___c___GetTargetToDistanceUsingIndividuality_b__64_2(
        WarBoardAIRoute___c_o *this,
        IWarBoardObjectData_o *x,
        const MethodInfo *method)
{
  IWarBoardObjectData_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4B13DD5 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c_o *)sub_1BCA7E0(&IWarBoardObjectData_TypeInfo, x, method);
    byte_4B13DD5 = 1;
  }
  if ( !x )
    sub_1BCAA3C(this, x);
  klass = x->klass;
  v5 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)p_offset - 1) != IWarBoardObjectData_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 4].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(x, IWarBoardObjectData_TypeInfo, 4LL);
  }
  return (*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8));
}


int32_t __fastcall WarBoardAIRoute___c___GetTargetToDistanceUsingIndividuality_b__64_3(
        WarBoardAIRoute___c_o *this,
        IWarBoardObjectData_o *x,
        const MethodInfo *method)
{
  IWarBoardObjectData_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4B13DD6 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c_o *)sub_1BCA7E0(&IWarBoardObjectData_TypeInfo, x, method);
    byte_4B13DD6 = 1;
  }
  if ( !x )
    sub_1BCAA3C(this, x);
  klass = x->klass;
  v5 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)p_offset - 1) != IWarBoardObjectData_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 5].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(x, IWarBoardObjectData_TypeInfo, 5LL);
  }
  return (*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8));
}


void __fastcall WarBoardAIRoute___c__DisplayClass43_0___ctor(
        WarBoardAIRoute___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIRoute___c__DisplayClass43_0___AddPiecePersonalityDic_b__0(
        WarBoardAIRoute___c__DisplayClass43_0_o *this,
        System_Collections_Generic_KeyValuePair_int__WarBoardAIRoute_PiecePersonality__o x,
        const MethodInfo *method)
{
  int32_t key; // w19

  key = x.fields.key;
  if ( (byte_4B13DD7 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_int__WarBoardAIRoute_PiecePersonality__get_Key__,
      *(_QWORD *)&x.fields.key,
      x.fields.value);
    byte_4B13DD7 = 1;
  }
  return this->fields.pieceIndex == key;
}


void __fastcall WarBoardAIRoute___c__DisplayClass45_0___ctor(
        WarBoardAIRoute___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIRoute___c__DisplayClass45_0___BeforeCreateRouteData_b__1(
        WarBoardAIRoute___c__DisplayClass45_0_o *this,
        WarBoardItemData_o *z,
        const MethodInfo *method)
{
  if ( !z )
    sub_1BCAA3C(this, 0LL);
  return !WarBoardItemData__get_Acquired(z, 0LL) && z->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


bool __fastcall WarBoardAIRoute___c__DisplayClass45_0___BeforeCreateRouteData_b__2(
        WarBoardAIRoute___c__DisplayClass45_0_o *this,
        WarBoardSquareData_o *z,
        const MethodInfo *method)
{
  if ( !z )
    sub_1BCAA3C(this, 0LL);
  return z->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


void __fastcall WarBoardAIRoute___c__DisplayClass46_0___ctor(
        WarBoardAIRoute___c__DisplayClass46_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIRoute___c__DisplayClass46_0___RegisterTargetObjectToDic_b__0(
        WarBoardAIRoute___c__DisplayClass46_0_o *this,
        IWarBoardObjectData_o *z,
        const MethodInfo *method)
{
  WarBoardAIRoute___c__DisplayClass46_0_o *v4; // x20
  IWarBoardObjectData_c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  IWarBoardObjectData_c *v9; // x8
  __int64 v10; // x9
  int32_t *v11; // x10
  __int64 v12; // x0

  v4 = this;
  if ( (byte_4B13DD8 & 1) == 0 )
  {
    this = (WarBoardAIRoute___c__DisplayClass46_0_o *)sub_1BCA7E0(&IWarBoardObjectData_TypeInfo, z, method);
    byte_4B13DD8 = 1;
  }
  if ( !z )
    sub_1BCAA3C(this, z);
  klass = z->klass;
  v6 = *(unsigned __int16 *)(&z->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&z->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)p_offset - 1) != IWarBoardObjectData_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(z, IWarBoardObjectData_TypeInfo, 0LL);
  }
  if ( (*(unsigned int (__fastcall **)(IWarBoardObjectData_o *, _QWORD))p_method)(z, *(_QWORD *)(p_method + 8)) != v4->fields.squareIndex )
    return 0;
  v9 = z->klass;
  v10 = *(unsigned __int16 *)(&z->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&z->klass->_2.bitflags2 + 3) )
  {
    v11 = &v9->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)v11 - 1) != IWarBoardObjectData_TypeInfo )
    {
      --v10;
      v11 += 4;
      if ( !v10 )
        goto LABEL_15;
    }
    v12 = (__int64)&v9->vtable[*v11 + 3].method;
  }
  else
  {
LABEL_15:
    v12 = sub_1C1C7C0(z, IWarBoardObjectData_TypeInfo, 3LL);
  }
  return (*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))v12)(z, *(_QWORD *)(v12 + 8));
}


void __fastcall WarBoardAIRoute___c__DisplayClass47_0___ctor(
        WarBoardAIRoute___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIRoute___c__DisplayClass47_0___CreateRouteData_b__0(
        WarBoardAIRoute___c__DisplayClass47_0_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *basePiece; // x8
  struct WarBoardPieceData_o *v5; // x9
  int32_t index_k__BackingField; // w10
  int32_t v7; // w8
  struct WarBoardPieceData_o *actionPiece; // x9

  if ( !x )
    goto LABEL_11;
  if ( x->fields.baseIndex == x->fields.actionIndex )
    return 0;
  basePiece = x->fields.basePiece;
  if ( !basePiece )
    goto LABEL_11;
  v5 = this->fields.basePiece;
  if ( !v5 )
    goto LABEL_11;
  index_k__BackingField = basePiece->fields._index_k__BackingField;
  v7 = v5->fields._index_k__BackingField;
  if ( index_k__BackingField == v7 )
    return 1;
  if ( (x->fields.flagNow & 0x4000000) == 0 )
    return 0;
  actionPiece = x->fields.actionPiece;
  if ( !actionPiece )
LABEL_11:
    sub_1BCAA3C(this, x);
  return actionPiece->fields._index_k__BackingField == v7;
}


void __fastcall WarBoardAIRoute___c__DisplayClass47_1___ctor(
        WarBoardAIRoute___c__DisplayClass47_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIRoute___c__DisplayClass47_1___CreateRouteData_b__3(
        WarBoardAIRoute___c__DisplayClass47_1_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return this->fields.actionSquareIndex == x->fields.baseIndex;
}


bool __fastcall WarBoardAIRoute___c__DisplayClass47_1___CreateRouteData_b__4(
        WarBoardAIRoute___c__DisplayClass47_1_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return this->fields.actionSquareIndex == x->fields.actionIndex;
}


void __fastcall WarBoardAIRoute___c__DisplayClass51_0___ctor(
        WarBoardAIRoute___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIRoute___c__DisplayClass51_0___GetAllyPutSquareIndicesWithoutMaster_b__0(
        WarBoardAIRoute___c__DisplayClass51_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.masterSquareIndex != x;
}


void __fastcall WarBoardAIRoute___c__DisplayClass52_0___ctor(
        WarBoardAIRoute___c__DisplayClass52_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardAIRoute___c__DisplayClass52_0___GetDefenseAreaData_b__0(
        WarBoardAIRoute___c__DisplayClass52_0_o *this,
        int32_t square,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__uint__o *piecePlaceData; // x0

  if ( (byte_4B13DD9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__, *(_QWORD *)&square, method);
    byte_4B13DD9 = 1;
  }
  piecePlaceData = this->fields.piecePlaceData;
  if ( !piecePlaceData )
    sub_1BCAA3C(0LL, *(_QWORD *)&square);
  return System_Collections_Generic_Dictionary_int__uint___ContainsKey(
           piecePlaceData,
           square,
           (const MethodInfo_3211C64 *)Method_System_Collections_Generic_Dictionary_int__uint__ContainsKey__);
}


void __fastcall WarBoardAIRoute___c__DisplayClass58_0___ctor(
        WarBoardAIRoute___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardAIRoute___c__DisplayClass58_0___IsDetour_b__0(
        WarBoardAIRoute___c__DisplayClass58_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct System_Int32_array *route; // x8
  __int64 i; // x9

  route = this->fields.route;
  if ( !route )
    sub_1BCAA3C(this, *(_QWORD *)&x);
  i = this->fields.i;
  if ( (unsigned int)i >= route->max_length )
    sub_1BCAA44(this, x);
  return route->m_Items[i + 1] == x;
}


void __fastcall WarBoardAIRoute___c__DisplayClass64_0___ctor(
        WarBoardAIRoute___c__DisplayClass64_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIRoute___c__DisplayClass64_0___GetTargetToDistanceUsingIndividuality_b__0(
        WarBoardAIRoute___c__DisplayClass64_0_o *this,
        IWarBoardObjectData_o *x,
        const MethodInfo *method)
{
  struct System_Func_IWarBoardObjectData__bool__o *excludeCond; // x8

  excludeCond = this->fields.excludeCond;
  if ( !excludeCond )
    sub_1BCAA3C(this, x);
  return (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, IWarBoardObjectData_o *, _QWORD))excludeCond->fields.m_target)(
            excludeCond->fields.original_method_info,
            x,
            *(_QWORD *)&excludeCond->fields.extra_arg) & 1) == 0
      && this->fields.basePiece != (struct WarBoardPieceData_o *)x;
}


int32_t __fastcall WarBoardAIRoute___c__DisplayClass64_0___GetTargetToDistanceUsingIndividuality_b__1(
        WarBoardAIRoute___c__DisplayClass64_0_o *this,
        IWarBoardObjectData_o *x,
        const MethodInfo *method)
{
  WarBoardAIRoute___c__DisplayClass64_0_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  IWarBoardObjectData_c *klass; // x8
  int32_t baseSquareIndex; // w20
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x5
  int32_t v14; // w19

  v4 = this;
  if ( (byte_4B13DDA & 1) == 0 )
  {
    sub_1BCA7E0(&AStarSearch_TypeInfo, x, method);
    this = (WarBoardAIRoute___c__DisplayClass64_0_o *)sub_1BCA7E0(&IWarBoardObjectData_TypeInfo, v5, v6);
    byte_4B13DDA = 1;
  }
  if ( !x )
    goto LABEL_14;
  klass = x->klass;
  baseSquareIndex = v4->fields.baseSquareIndex;
  v9 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)p_offset - 1) != IWarBoardObjectData_TypeInfo )
    {
      --v9;
      p_offset += 4;
      if ( !v9 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(x, IWarBoardObjectData_TypeInfo, 1LL);
  }
  v14 = (*(__int64 (__fastcall **)(IWarBoardObjectData_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8));
  if ( !AStarSearch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo, v12);
  this = (WarBoardAIRoute___c__DisplayClass64_0_o *)AStarSearch__RouteSearch(0LL, baseSquareIndex, v14, 0, 0LL, v13);
  if ( !this )
LABEL_14:
    sub_1BCAA3C(this, x);
  return (int32_t)this->fields.basePiece;
}


void __fastcall WarBoardAIRoute___c__DisplayClass65_0___ctor(
        WarBoardAIRoute___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIRoute___c__DisplayClass65_0___GetTargetToDistance_g__excludeCond_0(
        WarBoardAIRoute___c__DisplayClass65_0_o *this,
        IWarBoardObjectData_o *targetObject,
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
  System_Collections_Generic_List_T__o *routeDataList; // x19
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Func_object__bool__o *v25; // x20

  if ( (byte_4B13DDB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_WarBoardAIRoute_RouteData___, targetObject, method);
    sub_1BCA7E0(&System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_WarBoardAIRoute___c__DisplayClass65_1__GetTargetToDistance_b__1__, v8, v9);
    sub_1BCA7E0(&WarBoardAIRoute___c__DisplayClass65_1_TypeInfo, v10, v11);
    byte_4B13DDB = 1;
  }
  v12 = sub_1BCAA2C(WarBoardAIRoute___c__DisplayClass65_1_TypeInfo, targetObject, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  *(_QWORD *)(v12 + 16) = targetObject;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)targetObject, v15, v16, v17, v18, v19, v20);
  routeDataList = (System_Collections_Generic_List_T__o *)this->fields.routeDataList;
  v25 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarBoardAIRoute_RouteData__bool__TypeInfo, v22, v23, v24);
  System_Func_object__bool____ctor(
    v25,
    (Il2CppObject *)v12,
    Method_WarBoardAIRoute___c__DisplayClass65_1__GetTargetToDistance_b__1__,
    0LL);
  return BasicHelper__Any_object_(
           routeDataList,
           (System_Func_T__bool__o *)v25,
           (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_WarBoardAIRoute_RouteData___);
}


void __fastcall WarBoardAIRoute___c__DisplayClass65_1___ctor(
        WarBoardAIRoute___c__DisplayClass65_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIRoute___c__DisplayClass65_1___GetTargetToDistance_b__1(
        WarBoardAIRoute___c__DisplayClass65_1_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  WarBoardAIRoute___c__DisplayClass65_1_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  struct IWarBoardObjectData_o *targetObject; // x21
  IWarBoardObjectData_c *klass; // x8
  __int64 methodPtr_low; // x10
  int32_t baseIndex; // w23
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  struct IWarBoardObjectData_o *v15; // x20
  IWarBoardObjectData_c *v16; // x8
  int32_t actionIndex; // w19
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0

  v4 = this;
  if ( (byte_4B13DDC & 1) == 0 )
  {
    sub_1BCA7E0(&IWarBoardObjectData_TypeInfo, x, method);
    this = (WarBoardAIRoute___c__DisplayClass65_1_o *)sub_1BCA7E0(&WarBoardItemData_TypeInfo, v5, v6);
    byte_4B13DDC = 1;
  }
  targetObject = v4->fields.targetObject;
  if ( !targetObject )
    return 0;
  klass = targetObject->klass;
  methodPtr_low = LOBYTE(WarBoardItemData_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(targetObject->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
    || (WarBoardItemData_c *)klass->_2.typeHierarchy[methodPtr_low - 1] != WarBoardItemData_TypeInfo )
  {
    return 0;
  }
  if ( !x )
    goto LABEL_25;
  if ( (x->fields.flagNow & 0x8000000) == 0 )
    return 0;
  baseIndex = x->fields.baseIndex;
  v12 = *(unsigned __int16 *)(&klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)p_offset - 1) != IWarBoardObjectData_TypeInfo )
    {
      --v12;
      p_offset += 4;
      if ( !v12 )
        goto LABEL_13;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_13:
    p_method = sub_1C1C7C0(v4->fields.targetObject, IWarBoardObjectData_TypeInfo, 0LL);
  }
  this = (WarBoardAIRoute___c__DisplayClass65_1_o *)(*(__int64 (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))p_method)(
                                                      targetObject,
                                                      *(_QWORD *)(p_method + 8));
  if ( baseIndex == (_DWORD)this )
    return 1;
  v15 = v4->fields.targetObject;
  if ( !v15 )
LABEL_25:
    sub_1BCAA3C(this, x);
  v16 = v15->klass;
  actionIndex = x->fields.actionIndex;
  v18 = *(unsigned __int16 *)(&v15->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v15->klass->_2.bitflags2 + 3) )
  {
    v19 = &v16->_1.interfaceOffsets->offset;
    while ( *((IWarBoardObjectData_c **)v19 - 1) != IWarBoardObjectData_TypeInfo )
    {
      --v18;
      v19 += 4;
      if ( !v18 )
        goto LABEL_22;
    }
    v20 = (__int64)&v16->vtable[*v19].method;
  }
  else
  {
LABEL_22:
    v20 = sub_1C1C7C0(v15, IWarBoardObjectData_TypeInfo, 0LL);
  }
  return actionIndex == (*(unsigned int (__fastcall **)(struct IWarBoardObjectData_o *, _QWORD))v20)(
                          v15,
                          *(_QWORD *)(v20 + 8));
}


void __fastcall WarBoardAIRoute___c__DisplayClass66_0___ctor(
        WarBoardAIRoute___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIRoute___c__DisplayClass66_0___GetDesignationItemToDistance_b__0(
        WarBoardAIRoute___c__DisplayClass66_0_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  WarBoardAIRoute___c__DisplayClass66_0_o *v4; // x20
  struct WarBoardItemData_o *value; // x8
  int32_t squareIndex_k__BackingField; // w8

  v4 = this;
  if ( (byte_4B13DDD & 1) == 0 )
  {
    this = (WarBoardAIRoute___c__DisplayClass66_0_o *)sub_1BCA7E0(
                                                        &Method_System_Collections_Generic_KeyValuePair_int__WarBoardItemData__get_Value__,
                                                        x,
                                                        method);
    byte_4B13DDD = 1;
  }
  if ( !x )
    goto LABEL_10;
  if ( (x->fields.flagNow & 0x8000000) == 0 )
    return 0;
  value = v4->fields.item.fields.value;
  if ( !value )
LABEL_10:
    sub_1BCAA3C(this, x);
  squareIndex_k__BackingField = value->fields._squareIndex_k__BackingField;
  return x->fields.baseIndex == squareIndex_k__BackingField || x->fields.actionIndex == squareIndex_k__BackingField;
}


void __fastcall WarBoardAIRoute___c__DisplayClass76_0___ctor(
        WarBoardAIRoute___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIRoute___c__DisplayClass76_0___IsActableReplace_b__0(
        WarBoardAIRoute___c__DisplayClass76_0_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *basePiece; // x8
  struct WarBoardPieceData_o *actionPiece; // x9
  int32_t index_k__BackingField; // w10
  int32_t v6; // w8
  struct WarBoardPieceData_o *v8; // x9

  if ( !x )
    goto LABEL_10;
  basePiece = x->fields.basePiece;
  if ( !basePiece )
    goto LABEL_10;
  actionPiece = this->fields.actionPiece;
  if ( !actionPiece )
    goto LABEL_10;
  index_k__BackingField = basePiece->fields._index_k__BackingField;
  v6 = actionPiece->fields._index_k__BackingField;
  if ( index_k__BackingField == v6 )
    return 1;
  if ( (x->fields.flagNow & 0x4000000) == 0 )
    return 0;
  v8 = x->fields.actionPiece;
  if ( !v8 )
LABEL_10:
    sub_1BCAA3C(this, x);
  return v8->fields._index_k__BackingField == v6;
}


void __fastcall WarBoardAIRoute___c__DisplayClass84_0___ctor(
        WarBoardAIRoute___c__DisplayClass84_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall WarBoardAIRoute___c__DisplayClass84_0___GetRouteSumPieceActionCost_b__0(
        WarBoardAIRoute___c__DisplayClass84_0_o *this,
        WarBoardAIRoute_RouteData_o *x,
        const MethodInfo *method)
{
  int64_t flagNow; // x9
  struct WarBoardPieceData_o *basePiece; // x10
  struct WarBoardPieceData_o *targetPiece; // x8
  struct WarBoardCost_o *Cost_k__BackingField; // x8
  __int64 v8; // x10
  bool v9; // nf
  __int64 v10; // x9
  struct WarBoardPieceData_o *v11; // x8
  struct WarBoardPieceData_o *v12; // x9
  int32_t index_k__BackingField; // w10
  struct WarBoardPieceData_o *actionPiece; // x11

  if ( !x )
    goto LABEL_26;
  if ( x->fields.baseIndex == x->fields.actionIndex )
    return 0;
  flagNow = x->fields.flagNow;
  if ( (flagNow & 2) == 0 )
    goto LABEL_10;
  basePiece = x->fields.basePiece;
  if ( !basePiece )
    goto LABEL_26;
  targetPiece = this->fields.targetPiece;
  if ( !targetPiece )
    goto LABEL_26;
  if ( basePiece->fields._index_k__BackingField != targetPiece->fields._index_k__BackingField )
  {
LABEL_10:
    v11 = x->fields.basePiece;
    if ( (flagNow & 0x4000000) != 0 )
    {
      if ( !v11 )
        goto LABEL_26;
      v12 = this->fields.targetPiece;
      if ( !v12 )
        goto LABEL_26;
      index_k__BackingField = v12->fields._index_k__BackingField;
      if ( v11->fields._index_k__BackingField == index_k__BackingField )
        goto LABEL_20;
      actionPiece = x->fields.actionPiece;
      if ( !actionPiece )
        goto LABEL_26;
      if ( actionPiece->fields._index_k__BackingField == index_k__BackingField )
        goto LABEL_20;
    }
    else if ( !v11 )
    {
      goto LABEL_26;
    }
    v12 = this->fields.targetPiece;
    if ( !v12 )
      goto LABEL_26;
    if ( v11->fields._index_k__BackingField != v12->fields._index_k__BackingField )
      return 0;
LABEL_20:
    Cost_k__BackingField = v12->fields._Cost_k__BackingField;
    if ( Cost_k__BackingField )
    {
      v8 = 28LL;
      v9 = Cost_k__BackingField->fields.overwirteMove < 0;
      v10 = 44LL;
      goto LABEL_22;
    }
LABEL_26:
    sub_1BCAA3C(this, x);
  }
  Cost_k__BackingField = targetPiece->fields._Cost_k__BackingField;
  if ( !Cost_k__BackingField )
    goto LABEL_26;
  v8 = 32LL;
  v9 = Cost_k__BackingField->fields.overwirteAttack < 0;
  v10 = 48LL;
LABEL_22:
  if ( v9 )
    v10 = v8;
  return *(_DWORD *)((char *)&Cost_k__BackingField->klass + v10);
}